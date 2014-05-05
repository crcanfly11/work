#include "clearserver.h"

#define APP_CLEARSERVER_VERSION_NO 1
#define TCP_SND_SIZ		1024*1024*10		// Tcp Send Buffer Size 10MB
#define TCP_RCV_SIZ		1024*1024*1			// Tcp Recv Buffer Size 1MB
#define APP_TIMEOUT		15					// Seconds

#define ARP_SERVICE_FLAG_NEED_RECOVER		0x00000001		// 需要恢复

extern ARP_SERVICE servicearray[];
extern int servicecount;

using namespace boost::program_options;

LOGFP *lp;

CARPSpiImp::CARPSpiImp()
{
}


CARPSpiImp::~CARPSpiImp()
{
}

void CARPSpiImp::OnConnected(UINT InterfaceNo,const char* ServerAddress)
{
	logsend(lp,LOG_INFO,"CARPSpiImp","Connected.[%u|%s]",InterfaceNo,ServerAddress);
	printf("Connected to AppRouter.[%u|%s]\n",InterfaceNo,ServerAddress);
}

void CARPSpiImp::OnDisconnected(UINT InterfaceNo,const char* ServerAddress)
{
	logsend(lp,LOG_WARN,"CARPSpiImp","Disconnected.[%u|%s]",InterfaceNo,ServerAddress);
	printf("Disconnected to AppRouter.[%u|%s]\n",InterfaceNo,ServerAddress);
}

void CARPSpiImp::OnNtyService(UINT AppNo,UINT SessionNo,UINT ServiceNo,UINT SeqNo,const char*buf,unsigned int len,UINT RouterNo,UINT ServiceFlags,UINT InterfaceNo)
{
	logsend(lp,LOG_WARN,"CARPSpiImp","OnNtyService:AppNo=%d,SessionNo=%d,ServiceNo=%d",AppNo,SessionNo,ServiceNo);
	printf("OnNtyService:AppNo=%d,SessionNo=%d,ServiceNo=%d\n",AppNo,SessionNo,ServiceNo);

	CETSClearPackage Package;
	Package.Init((char*)buf,len);
	//m_pDBProcessor->HandlePackage(AppNo,SessionNo,ServiceNo,SeqNo,Package);

	switch(ServiceNo) {
		case ETSClearMsgTypeIOMoneyReq:						/* 银行银证转账请求 */  
		case ETSClearMsgTypeBankAccountQueryReq:			/* 银行帐户余额查询请求 */
		case ETSClearMsgTypeBankAccountAddReq:				/* 银行帐户绑定请求 */
		case ETSClearMsgTypeBankAccountDeleteReq:			/* 银行帐户注销请求 */
		case ETSClearMsgTypeBankAccountTransferReq:			/* 银证转账查询请求 */
		case ETSClearMsgTypeBankTransferRsp:				/* 银行银证转账应答 */
		case ETSClearMsgTypeBankBalanceRsp:					/* 银行余额查询应答 */
		case ETSClearMsgTypeBankBindRsp:					/* 银行账户绑定应答 */
		case ETSClearMsgTypeBankDeleteRsp:					/* 银行账户撤销应答 */
		case ETSClearMsgTypeBankTransferCheckRsp:			/* 银行转账查询应答 */
			m_pBankAdapter->HandlePackageReq(SessionNo,ServiceNo,SeqNo,RouterNo,Package);
			break;
		case ETSClearMsgTypeAccCenterIOMoneyReq:			/* 账户中心出入金请求 */
		case ETSClearMsgTypeIOStockReq:						/* 比特币出入请求 */
		case ETSClearMsgTypeAccountCenterCreatAccountReq:	/* 账户中心账户创建请求 */
		case ETSClearMsgTypeOprIOMoneyRsp:					/* 出入金操作应答 */	
		case ETSClearMsgTypeOprIOStockRsp:					/* 出入货单操作应答 */
		case ETSClearMsgTypeOprNewCustomerRsp:				/* 场上开户操作应答 */
			m_pAccCenterAdapter->HandlePackageReq(SessionNo,ServiceNo,SeqNo,RouterNo,Package);
			break;
		default:
			m_pDBProcessor->HandlePackage(RouterNo,AppNo,SessionNo,ServiceNo,SeqNo,Package);
			break;
	}
		
}

void CARPSpiImp::OnRspService(USHORT RspNo,const char* RspDesc,UINT AppNo,UINT SessionNo,UINT ServiceNo,UINT SeqNo,const char*buf,unsigned int len,UINT RouterNo,UINT ServiceFlags,UINT InterfaceNo)
{
	logsend(lp,LOG_WARN,"CARPSpiImp","OnRspService:RspNo=%d,RspDesc=%s,AppNo=%d,SessionNo=%d,ServiceNo=%d\n",RspNo,RspDesc,AppNo,SessionNo,ServiceNo);
}

void CARPSpiImp::OnNtyTime(ULONG Time)
{
	time_t tt=Time;
	struct tm *t;

	t=localtime(&tt);  
	printf("OnNtyTime:%04d-%02d-%02d %02d:%02d:%02d\n",t->tm_year+1900,t->tm_mon+1,t->tm_mday,t->tm_hour,t->tm_min,t->tm_sec);
}

void CARPSpiImp::OnLog(int level,const char *desc,const char *msg)
{
	printf("[%d]-[%s]-%s\n",level,desc,msg);
	logsend(lp,level,desc,msg);
}

using namespace boost::program_options;

void TimingPoll(const boost::system::error_code& /*e*/,  
        boost::asio::deadline_timer* t, int* timer)  
{  
    t->expires_at(t->expires_at() + boost::posix_time::seconds(*timer));    
    t->async_wait(boost::bind(TimingPoll, boost::asio::placeholders::error,t,timer));  
	

}

int main(int argc,char *argv[])
{
	std::string cfgpath="../etc",cfgfile="clearserver.cfg";
	std::string log_name="clearserver",log_flags="";
	std::string log_addr="../log";
	std::string servaddr="10.15.89.122:20000";
	std::string AppName="clearserver";
	std::string AppDesc="结算管理进程";
	UINT AppNo=5;
	unsigned short nAppTimeout=APP_TIMEOUT;
	unsigned int nTcpSndSiz=TCP_SND_SIZ;
	unsigned int nTcpRcvSiz=TCP_RCV_SIZ;
	std::string SID="ETS";
	std::string UserName="ets_prod";
	std::string Password="password";
	CDBProcessor* pDBProcessor=NULL;

	//声明需要的选项
	options_description desc("Usage");
	desc.add_options()
		("help,h", "display usage")
		("version,v", "display version")
		("cfgpath,p", value<std::string>(&cfgpath),"config path")
		("cfgfile,c", value<std::string>(&cfgfile),"config file")
	;

	options_description cfgdesc("Config file options");
	cfgdesc.add_options()
		("clearserver.AppNo",value<unsigned int>(&AppNo),"clearserver.AppNo")
		("clearserver.AppName",value<std::string>(&AppName),"clearserver.AppName")
		("clearserver.AppDesc",value<std::string>(&AppDesc),"clearserver.AppDesc")
		("clearserver.servaddr",value<std::string>(&servaddr),"clearserver.servaddr")
		("clearserver.timeout",value<unsigned short>(&nAppTimeout),"clearserver.timeout")
		("clearserver.tcpsndsiz",value<unsigned int>(&nTcpSndSiz),"clearserver.tcpsndsiz")
		("clearserver.tcprcvsiz",value<unsigned int>(&nTcpRcvSiz),"clearserver.tcprcvsiz")
		("clearserver.SID",value<std::string>(&SID),"clearserver.SID")
		("clearserver.UserName",value<std::string>(&UserName),"clearserver.UserName")
		("clearserver.Password",value<std::string>(&Password),"clearserver.Password")
		("log.name",value<std::string>(&log_name),"log.name")
		("log.flags",value<std::string>(&log_flags),"log.flags")
		("log.addr",value<std::string>(&log_addr),"log.addr")
	;
	variables_map vm;        
	boost::asio::io_service io;

#ifndef __WINDOWS__
	signal(SIGPIPE,SIG_IGN);
#endif
	
	// read config from file
	store(parse_command_line(argc, argv, desc), vm);
	notify(vm);    


	if (vm.count("help")) {
		std::cout << desc;
		return 0;
	}

	vm.clear();

	 //read config from file
	std::string file;
	if(cfgpath.length()==0)
		cfgpath+='.';
	if(cfgpath[cfgpath.length()-1]!='/')
		cfgpath+='/';
	file=cfgpath+cfgfile;

	std::ifstream ifs;
	ifs.open(file.c_str());
	if(ifs.fail()){
		printf("open file failed.[%s]\n",file.c_str());
		return -1;
	}
	store(parse_config_file(ifs,cfgdesc,true),vm);
	notify(vm);
	ifs.close();

	vm.clear();

	/* log */
	if(log_addr.length()==0)
		log_addr=".";
	else if(log_addr[log_addr.length()-1]=='/')
		log_addr[log_addr.length()-1]='\0';	/* delete last separate char '/' */
	
	lp=logopen((log_addr+"/"+log_name+".log").c_str(),loggetflags(log_flags.c_str()));

	/* DB */
	pDBProcessor=new CDBProcessor(SID,UserName,Password,io);
	if(pDBProcessor->Connect()<0){
		printf("Connect to DB failed.\n");
		return -1;
	}

	CARPSpiImp Spi;
	CARPApi* pApi=CARPApi::CreateARPApi(AppNo,AppName.c_str(),AppDesc.c_str(),servicearray,servicecount,&Spi,&io,false,true);
	Spi.m_pApi=pApi;
	pApi->SetLogLevel(LOG_DEBUG);
	pApi->SetServerAddress(servaddr.c_str());
	Spi.m_pDBProcessor=pDBProcessor;
	pDBProcessor->SetSpi(&Spi);
	Spi.m_pBankAdapter = new CBankAdapter();
	Spi.m_pBankAdapter->m_pApi = pApi;
	//Spi.m_pAccCenterAdapter = new CAccCenterAdapter(SID,UserName,Password);
	Spi.m_pAccCenterAdapter = new CAccCenterAdapter(pDBProcessor,io);  
	Spi.m_pAccCenterAdapter->m_pApi = pApi;
	logsend(lp,LOG_INFO,"System","Running ...");
	printf("System Running ...\n");
	pApi->Run();

	/* idle */
	io.run();

	return 0;
}

