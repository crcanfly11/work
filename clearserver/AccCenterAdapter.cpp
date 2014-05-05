#include "AccCenterAdapter.h"

CAccCenterAdapter::CAccCenterAdapter(CDBProcessor* pDBProcessor,boost::asio::io_service& io_service):
	m_pDBProcessor(pDBProcessor),
	m_pt(io_service,boost::posix_time::seconds(0))
{
	m_mSessionInfo.clear();
	m_SeqNo=0;
	m_pDBProcessor = pDBProcessor;
	m_Connection = &(pDBProcessor->m_Connection);
}

CAccCenterAdapter::~CAccCenterAdapter()
{
}

void CAccCenterAdapter::HandlePackageReq(UINT SessionNo,UINT ServiceNo,UINT SeqNo,UINT RouterNo,CETSClearPackage& Package)
{
	if(!CheckTradingStatus()) {
		int serviceno;
		switch(ServiceNo) {
			case ETSClearMsgTypeAccCenterIOMoneyReq:			/* �˻����ĳ�������� */
				serviceno = ETSClearMsgTypeAccCenterIOMoneyRsp;
				break;
			case ETSClearMsgTypeIOStockReq:						/* ���رҳ������� */
				serviceno = ETSClearMsgTypeIOStockRsp;
				break;
			case ETSClearMsgTypeAccountCenterCreatAccountReq:	/* �˻������˻��������� */
				serviceno = ETSClearMsgTypeAccountCenterCreatAccountRsp;
				break;		
		}
		CETSClearPackage RspPackage;
		CETSClearFieldsRspInfo RspInfo;		
		RspPackage.Init(Package.GetRequestID(),m_pkgbuf,ETS_PACKAGE_SIZE);

		RspInfo.RspNo = 5000;
		strcpy(RspInfo.RspDesc,"����ϵͳֹͣ��");
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pApi->ReqService(0,SessionNo,serviceno,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
		
		printf("Opr is stop.\n ");
		return;
	}

	switch(ServiceNo) {
		case ETSClearMsgTypeAccCenterIOMoneyReq:			/* �˻����ĳ�������� */
			IOMoneyFlowBranches(RouterNo,ServiceNo,SessionNo,SeqNo,Package);
			break;
		case ETSClearMsgTypeIOStockReq:						/* ���رҳ������� */
			IOStockFlowBranches(RouterNo,ServiceNo,SessionNo,SeqNo,Package);
			break;
		case ETSClearMsgTypeOprIOMoneyRsp:					/* ��Ա�ͻ���������Ӧ�� */
			OprIOMoneyFlowBranches(RouterNo,ServiceNo,SessionNo,SeqNo,Package);
			break;
		case ETSClearMsgTypeOprIOStockRsp:					/* ��Ա�ͻ������������Ӧ�� */
			OprIOStockFlowBranches(RouterNo,ServiceNo,SessionNo,SeqNo,Package);
			break;
		case ETSClearMsgTypeAccountCenterCreatAccountReq:	/* �˻������˻��������� */
			HandleAccountCenterCreatAccountReq(RouterNo,ServiceNo,SessionNo,SeqNo,Package);
			break;
		case ETSClearMsgTypeOprNewCustomerRsp:				/* ���Ͽ�������Ӧ�� */
			HandleOprNewCustomerRsp(RouterNo,ServiceNo,SessionNo,SeqNo,Package);
			break;
		default:
			printf("Wrong AccCenterAdapter ServiceNo.\n ");
			break;
	}
}
/*�˻����ĳ�������̷�֧*/
void CAccCenterAdapter::IOMoneyFlowBranches(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	/* �˻����ĳ�������� */
	CETSClearFieldsAccCenterIOMoneyReq* pAccCenterIOMoneyReq = new CETSClearFieldsAccCenterIOMoneyReq();
	Package.GetFields(pAccCenterIOMoneyReq,ETSClearFieldNoAccCenterIOMoneyReq);

	CETSClearPackage RspPackage;
	CETSClearFieldsRspInfo RspInfo;		
	RspPackage.Init(Package.GetRequestID(),m_pkgbuf,ETS_PACKAGE_SIZE);
	
	stSessionInfo_t SessionInfo;
	memset(&SessionInfo,0x00,sizeof(SessionInfo));
	SessionInfo.RouterNo=RouterNo;
	SessionInfo.SessionNo=SessionNo;
	SessionInfo.SeqNo=SeqNo;
	SessionInfo.RequestID = Package.GetRequestID();
	strcpy(SessionInfo.UserID,pAccCenterIOMoneyReq->UserID);		
	strcpy(SessionInfo.Firm,pAccCenterIOMoneyReq->Firm);		
	strcpy(SessionInfo.Customer,pAccCenterIOMoneyReq->Customer);		
	SessionInfo.IODirect = pAccCenterIOMoneyReq->IODirect;
	SessionInfo.IO_Amount = pAccCenterIOMoneyReq->IO_Amount;
	SessionInfo.LocalSerialNo = pAccCenterIOMoneyReq->IOMoneyFlowID;
	m_SeqNo++;
	m_mSessionInfo[m_SeqNo]=SessionInfo;	

	if(pAccCenterIOMoneyReq->IODirect == 'I') {
		HandleAccCenterIOMoneyReq(RouterNo,AppNo,SessionNo,m_SeqNo,Package);
		delete pAccCenterIOMoneyReq; pAccCenterIOMoneyReq = NULL;
		return;
	}
	else if(pAccCenterIOMoneyReq->IODirect == 'O') {
		//�жϽ���������״̬
		if(BankFlowState(pAccCenterIOMoneyReq->IOMoneyFlowID,pAccCenterIOMoneyReq->UserID)) {
			RspInfo.RspNo = 5002;
			strcpy(RspInfo.RspDesc,"������������ˮ���Ѵ���");		
			RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
			m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeAccCenterIOMoneyRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
		}

		HandleOprIOMoneyReq(RouterNo,AppNo,SessionNo,m_SeqNo,pAccCenterIOMoneyReq,NewIOMoneyFlowID(pAccCenterIOMoneyReq),Package.GetRequestID());
		return;
	}
	else {
		RspInfo.RspNo = 5001;
		strcpy(RspInfo.RspDesc,"���������ĳ�������ֶ�����");
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeAccCenterIOMoneyRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}	
}
/*������ϳ�Ӧ�����̷�֧*/
void CAccCenterAdapter::OprIOMoneyFlowBranches(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	std::map<UINT,stSessionInfo_t>::iterator iter;
	if((iter=m_mSessionInfo.find(SeqNo))==m_mSessionInfo.end()){
		printf("OprIOMoneyFlowBranches SeqNo is error\n");
		return;
	}

	if(iter->second.IODirect == 'I') {
		HandleOprIOMoneyRsp(RouterNo,AppNo,SessionNo,SeqNo,Package);
	}
	else if(iter->second.IODirect == 'O') {
		CETSClearFieldsRspInfo OprRspInfo;
		Package.GetFields(&OprRspInfo,ETSClearFieldNoRspInfo);

		if(!OprRspInfo.RspNo) {
			HandleAccCenterIOMoneyReq(RouterNo,AppNo,SessionNo,SeqNo,Package); 
		}
		else {
			CETSClearPackage RspPackage;	
			RspPackage.Init(Package.GetRequestID(),m_pkgbuf,TCP_PACKAGE_SIZE);

			RspPackage.PutFields(&OprRspInfo,ETSClearFieldNoRspInfo);

			m_pApi->ReqService(0,iter->second.SessionNo,ETSClearMsgTypeAccCenterIOMoneyRsp,iter->second.SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,iter->second.RouterNo);	
			SetBankFlowState(iter->second.LocalSerialNo,iter->second.UserID,"A",&OprRspInfo);
			printf("Warning:OprIOMoneyFlowBranches - Abnormal responses!\n");		
		}		
	}	
}
/*���ӻ����������̷�֧*/
void CAccCenterAdapter::IOStockFlowBranches(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	/* ���ӻ����������� */
	CETSClearFieldsIOStockReq* pIOStockReq = new CETSClearFieldsIOStockReq();
	Package.GetFields(pIOStockReq,ETSClearFieldNoIOStockReq);

	CETSClearPackage RspPackage;
	CETSClearFieldsRspInfo RspInfo;		
	RspPackage.Init(Package.GetRequestID(),m_pkgbuf,ETS_PACKAGE_SIZE);
	
	stSessionInfo_t SessionInfo;
	memset(&SessionInfo,0x00,sizeof(SessionInfo));
	SessionInfo.RouterNo=RouterNo;
	SessionInfo.SessionNo=SessionNo;
	SessionInfo.SeqNo=SeqNo;
	SessionInfo.RequestID = Package.GetRequestID();
	strcpy(SessionInfo.UserID,pIOStockReq->UserID);		
	strcpy(SessionInfo.Firm,pIOStockReq->Firm);		
	strcpy(SessionInfo.Customer,pIOStockReq->Customer);		
	strcpy(SessionInfo.Commodity,pIOStockReq->Commodity);		
	SessionInfo.IO_Goods_Qty = pIOStockReq->IO_Goods_Qty;
	SessionInfo.Action = pIOStockReq->Action;	
	SessionInfo.LocalSerialNo = pIOStockReq->GoodsFlowID;
	m_SeqNo++;
	m_mSessionInfo[m_SeqNo]=SessionInfo;	

	if(pIOStockReq->Action == 'I') {
		HandleIOStockReq(RouterNo,AppNo,SessionNo,m_SeqNo,Package);
		delete pIOStockReq; pIOStockReq = NULL;
		return;
	}
	else if(pIOStockReq->Action == 'O' || pIOStockReq->Action == 'F' || pIOStockReq->Action == 'U') {
		//�жϽ���������״̬
		if(BankFlowState(pIOStockReq->GoodsFlowID,pIOStockReq->UserID)) {
			RspInfo.RspNo = 5002;
			strcpy(RspInfo.RspDesc,"������������ˮ���Ѵ���");		
			RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
			m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeIOStockRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
		}

		HandleOprIOStockReq(RouterNo,AppNo,SessionNo,m_SeqNo,pIOStockReq,NewIOStockFlowID(pIOStockReq),Package.GetRequestID());
		return;
	}
	else {
		RspInfo.RspNo = 5001;
		strcpy(RspInfo.RspDesc,"���������ĳ�������ֶ�����");
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeIOStockRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}	
}
/*��������ϳ�Ӧ�����̷�֧*/
void CAccCenterAdapter::OprIOStockFlowBranches(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	std::map<UINT,stSessionInfo_t>::iterator iter;
	if((iter=m_mSessionInfo.find(SeqNo))==m_mSessionInfo.end()){
		printf("OprIOStockFlowBranches SeqNo is error\n");
		return;
	}

	if(iter->second.Action == 'I') {
		HandleOprIOStockRsp(RouterNo,AppNo,SessionNo,SeqNo,Package);
	}
	else if(iter->second.Action == 'O' || iter->second.Action == 'F' || iter->second.Action == 'U') {
		CETSClearFieldsRspInfo OprRspInfo;
		Package.GetFields(&OprRspInfo,ETSClearFieldNoRspInfo);

		if(!OprRspInfo.RspNo) {
			HandleIOStockReq(RouterNo,AppNo,SessionNo,SeqNo,Package); 
		}
		else {
			CETSClearPackage RspPackage;	
			RspPackage.Init(Package.GetRequestID(),m_pkgbuf,TCP_PACKAGE_SIZE);

			RspPackage.PutFields(&OprRspInfo,ETSClearFieldNoRspInfo);

			m_pApi->ReqService(0,iter->second.SessionNo,ETSClearMsgTypeIOStockRsp,iter->second.SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,iter->second.RouterNo);	
			SetBankFlowState(iter->second.LocalSerialNo,iter->second.UserID,"A",&OprRspInfo);
			printf("Warning:OprIOStockFlowBranches - Abnormal responses!\n");		
		}
	}	
}
/*�˻����ĳ��������*/
void CAccCenterAdapter::HandleAccCenterIOMoneyReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* �˻����ĳ�������� */
	CETSClearFieldsAccCenterIOMoneyReq* pAccCenterIOMoneyReq = new CETSClearFieldsAccCenterIOMoneyReq();
	// Response
	CETSClearPackage RspPackage;
	/* �˻����ĳ����Ӧ�� */
	CETSClearFieldsAccCenterIOMoneyRsp AccCenterIOMoneyRsp;
	/* Ӧ����Ϣ */
	CETSClearFieldsRspInfo RspInfo;

	std::map<UINT,stSessionInfo_t>::iterator iter;
	if((iter=m_mSessionInfo.find(SeqNo))==m_mSessionInfo.end()){
		printf("HandleAccCenterIOMoneyReq SeqNo is error\n");
		return;
	}

	try
	{
		cmd.setConnection(m_Connection);
		cmd.setCommandText("Pack_AccCenterIOMoney.AccCenterIOMoney");

		// Input
		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* �˻����ĳ�������� */
		if(iter->second.IODirect == 'I') {
			Package.GetFields(pAccCenterIOMoneyReq,ETSClearFieldNoAccCenterIOMoneyReq);
			cmd.Param("i_UserID").setAsString()=pAccCenterIOMoneyReq->UserID;
			cmd.Param("i_Firm").setAsString()=pAccCenterIOMoneyReq->Firm;
			cmd.Param("i_Customer").setAsString()=pAccCenterIOMoneyReq->Customer;
			cmd.Param("i_IODirect").setAsString()=pAccCenterIOMoneyReq->IODirect;
			cmd.Param("i_IO_Amount").setAsDouble()=pAccCenterIOMoneyReq->IO_Amount;
			cmd.Param("i_IOMoneyFlowID").setAsNumeric()=pAccCenterIOMoneyReq->IOMoneyFlowID;		
		}
		else if(iter->second.IODirect == 'O') {
			cmd.Param("i_UserID").setAsString()=iter->second.UserID;
			cmd.Param("i_Firm").setAsString()=iter->second.Firm;
			cmd.Param("i_Customer").setAsString()=iter->second.Customer;
			cmd.Param("i_IODirect").setAsString()=iter->second.IODirect;
			cmd.Param("i_IO_Amount").setAsDouble()=iter->second.IO_Amount;
			cmd.Param("i_IOMoneyFlowID").setAsNumeric()=iter->second.LocalSerialNo;		
		} 		
		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pkgbuf,ETS_PACKAGE_SIZE);

		/* Ӧ����Ϣ */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		if(iter->second.IODirect == 'I') {
			/* �˻����ĳ����Ӧ�� */
			if(!RspInfo.RspNo){
				//�ʽ��ϳ�
				HandleOprIOMoneyReq(RouterNo,AppNo,SessionNo,SeqNo,pAccCenterIOMoneyReq,cmd.Param("o_SysFlowID").asNumeric(),Package.GetRequestID());
				return;
			}
			m_pApi->ReqService(0,iter->second.SessionNo,ETSClearMsgTypeAccCenterIOMoneyRsp,iter->second.SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,iter->second.RouterNo);
		}
		else if(iter->second.IODirect == 'O') {
			if(!RspInfo.RspNo){
				CETSClearFieldsAccCenterIOMoneyRsp AccCenterIOMoneyRsp;

				strcpy(AccCenterIOMoneyRsp.UserID,iter->second.UserID);
				strcpy(AccCenterIOMoneyRsp.Firm,iter->second.Firm);
				strcpy(AccCenterIOMoneyRsp.Customer,iter->second.Customer);
				AccCenterIOMoneyRsp.AccountFunds = cmd.Param("o_AccountFunds").asDouble();
				AccCenterIOMoneyRsp.SysFlowID = cmd.Param("o_SysFlowID").asNumeric();
				AccCenterIOMoneyRsp.IOMoneyFlowID = cmd.Param("o_IOMoneyFlowID").asNumeric();
				RspPackage.PutFields(&AccCenterIOMoneyRsp,ETSClearFieldNoAccCenterIOMoneyRsp);

				m_pApi->ReqService(0,iter->second.SessionNo,ETSClearMsgTypeAccCenterIOMoneyRsp,iter->second.SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,iter->second.RouterNo);
				SetBankFlowState(iter->second.LocalSerialNo,iter->second.UserID,"N");
				printf("HandleAccCenterIOMoneyReq: Send AccCenterIOMoneyRsp!\n");
			}
			else {
				//���ش���Ӧ��
				m_pApi->ReqService(0,iter->second.SessionNo,ETSClearMsgTypeAccCenterIOMoneyRsp,iter->second.SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,iter->second.RouterNo);
			}
			m_mSessionInfo.erase(SeqNo);
			delete pAccCenterIOMoneyReq; pAccCenterIOMoneyReq = NULL;
		}		
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleAccCenterIOMoneyReq:���ݿ����ʧ�ܣ�[%s]",(const char*)x.ErrText());

		RspPackage.Init(Package.GetRequestID(),m_pkgbuf,ETS_PACKAGE_SIZE);

		switch(x.ErrNativeCode()){
		case 3114:
			RspInfo.RspNo=ETSClearConstRspNoDBNotReady;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNotReady);
			break;
		case 12571:
			RspInfo.RspNo=ETSClearConstRspNoDBNetworkProblem;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNetworkProblem);
			m_Connection->Disconnect();
			m_pDBProcessor->Connect(); // ��������
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection->Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:�ع�ʧ�ܣ�[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* Ӧ����Ϣ */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeAccCenterIOMoneyRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}
/*���ӻ�����������*/
void CAccCenterAdapter::HandleIOStockReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* ���ӻ����������� */
	CETSClearFieldsIOStockReq* pIOStockReq = new CETSClearFieldsIOStockReq();
	Package.GetFields(pIOStockReq,ETSClearFieldNoIOStockReq);

	// Response
	CETSClearPackage RspPackage;
	/* ���ӻ�������Ӧ�� */
	CETSClearFieldsIOStockRsp IOStockRsp;
	/* Ӧ����Ϣ */
	CETSClearFieldsRspInfo RspInfo;

	std::map<UINT,stSessionInfo_t>::iterator iter;
	if((iter=m_mSessionInfo.find(SeqNo))==m_mSessionInfo.end()){
		printf("HandleIOStockReq SeqNo is error\n");
		return;
	}

	try
	{
		cmd.setConnection(m_Connection);
		cmd.setCommandText("Pack_Goods.IOStock");

		// Input
		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* ���ӻ����������� */
		if(iter->second.Action == 'I') {
			cmd.Param("i_UserID").setAsString()=pIOStockReq->UserID;
			cmd.Param("i_Firm").setAsString()=pIOStockReq->Firm;
			cmd.Param("i_Customer").setAsString()=pIOStockReq->Customer;
			cmd.Param("i_Commodity").setAsString()=pIOStockReq->Commodity;
			cmd.Param("i_IO_Goods_Qty").setAsLong()=pIOStockReq->IO_Goods_Qty;
			cmd.Param("i_Action").setAsString()=pIOStockReq->Action;
			cmd.Param("i_GoodsFlowID").setAsNumeric()=pIOStockReq->GoodsFlowID;
		}
		else if(iter->second.Action == 'O' || iter->second.Action == 'F' ||iter->second.Action == 'U') {
			cmd.Param("i_UserID").setAsString()=iter->second.UserID;
			cmd.Param("i_Firm").setAsString()=iter->second.Firm;
			cmd.Param("i_Customer").setAsString()=iter->second.Customer;
			cmd.Param("i_Commodity").setAsString()=iter->second.Commodity;
			cmd.Param("i_IO_Goods_Qty").setAsLong()=iter->second.IO_Goods_Qty;
			cmd.Param("i_Action").setAsString()=iter->second.Action;
			cmd.Param("i_GoodsFlowID").setAsNumeric()=iter->second.LocalSerialNo;		
		}		
		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pkgbuf,ETS_PACKAGE_SIZE);

		/* Ӧ����Ϣ */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		if(iter->second.Action == 'I') {
			/* ���ӻ�������Ӧ�� */
			if(!RspInfo.RspNo){
				/* ���ӻ��������ϳ����� */
				HandleOprIOStockReq(RouterNo,AppNo,SessionNo,SeqNo,pIOStockReq,cmd.Param("o_SysFlowID").asNumeric(),Package.GetRequestID());
				return;
			}
			m_pApi->ReqService(0,iter->second.SessionNo,ETSClearMsgTypeIOStockRsp,iter->second.SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,iter->second.RouterNo);
		}
		else if(iter->second.Action == 'O' || iter->second.Action == 'F' ||iter->second.Action == 'U') {
			if(!RspInfo.RspNo){
				CETSClearFieldsIOStockRsp IOStockRsp;
				
				strcpy(IOStockRsp.UserID,iter->second.UserID);
				strcpy(IOStockRsp.Firm,iter->second.Firm);
				strcpy(IOStockRsp.Customer,iter->second.Customer);
				strcpy(IOStockRsp.Commodity,iter->second.Commodity);
				IOStockRsp.SysFlowID = cmd.Param("o_SysFlowID").asNumeric();
				IOStockRsp.GoodsFlowID= cmd.Param("o_GoodsFlowID").asNumeric();
				IOStockRsp.Goods_Qty = cmd.Param("o_Goods_Qty").asLong();
				RspPackage.PutFields(&IOStockRsp,ETSClearFieldNoIOStockRsp);

				m_pApi->ReqService(0,iter->second.SessionNo,ETSClearMsgTypeIOStockRsp,iter->second.SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,iter->second.RouterNo);
				SetStockFlowState(iter->second.LocalSerialNo,IOStockRsp.UserID,"N");
				printf("HandleIOStockReq:Send Out IOStockRsp!\n");
			}
			else {
				//���ش���Ӧ��
				m_pApi->ReqService(0,iter->second.SessionNo,ETSClearMsgTypeIOStockRsp,iter->second.SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,iter->second.RouterNo);
			}	
			m_mSessionInfo.erase(SeqNo);
			delete pIOStockReq; pIOStockReq = NULL;
		}
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleIOStockReq:���ݿ����ʧ�ܣ�[%s]",(const char*)x.ErrText());

		RspPackage.Init(Package.GetRequestID(),m_pkgbuf,ETS_PACKAGE_SIZE);

		switch(x.ErrNativeCode()){
		case 3114:
			RspInfo.RspNo=ETSClearConstRspNoDBNotReady;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNotReady);
			break;
		case 12571:
			RspInfo.RspNo=ETSClearConstRspNoDBNetworkProblem;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNetworkProblem);
			m_Connection->Disconnect();
			m_pDBProcessor->Connect(); // ��������
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection->Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:�ع�ʧ�ܣ�[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* Ӧ����Ϣ */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeIOStockRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}
/* �˻������˻��������� */
void CAccCenterAdapter::HandleAccountCenterCreatAccountReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package) 
{
	SACommand cmd;    // command object

	// Request
	/* �˻������˻��������� */
	CETSClearFieldsAccountCenterCreatAccountReq AccountCenterCreatAccountReq;
	Package.GetFields(&AccountCenterCreatAccountReq,ETSClearFieldNoAccountCenterCreatAccountReq);

	// Response
	CETSClearPackage RspPackage;
	/* Ӧ����Ϣ */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(m_Connection);
		cmd.setCommandText("Pack_AccountCenter.AccountCenterCreatAccount");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* �˻������˻��������� */
		cmd.Param("i_UserID").setAsString()=AccountCenterCreatAccountReq.UserID;
		cmd.Param("i_Firm").setAsString()=AccountCenterCreatAccountReq.Firm;
		cmd.Param("i_CustomerName").setAsString()=AccountCenterCreatAccountReq.CustomerName;
		cmd.Param("i_DocumentType").setAsString()=AccountCenterCreatAccountReq.DocumentType;
		cmd.Param("i_IdentificationNumber").setAsString()=AccountCenterCreatAccountReq.IdentificationNumber;
		cmd.Param("i_Password").setAsString()=AccountCenterCreatAccountReq.Password;
		cmd.Param("i_NWAddr").setAsString()=AccountCenterCreatAccountReq.NWAddr;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pkgbuf,ETS_PACKAGE_SIZE);

		/* Ӧ����Ϣ */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* �˻������˻�����Ӧ�� */
		if(!RspInfo.RspNo){
			//���Ͽ�������
			std::string *pCus = new std::string(cmd.Param("o_Customer").asString().GetBuffer(0));					
			HandleOprNewCustomerReq(RouterNo,AppNo,SessionNo,SeqNo,&AccountCenterCreatAccountReq,Package.GetRequestID(),pCus);
			return;
		}
		m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeAccountCenterCreatAccountRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleAccountCenterCreatAccountReq:���ݿ����ʧ�ܣ�[%s]",(const char*)x.ErrText());

		RspPackage.Init(Package.GetRequestID(),m_pkgbuf,ETS_PACKAGE_SIZE);

		switch(x.ErrNativeCode()){
		case 3114:
			RspInfo.RspNo=ETSClearConstRspNoDBNotReady;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNotReady);
			break;
		case 12571:
			RspInfo.RspNo=ETSClearConstRspNoDBNetworkProblem;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNetworkProblem);
			m_Connection->Disconnect();
			m_pDBProcessor->Connect(); // ��������
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection->Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:�ع�ʧ�ܣ�[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* Ӧ����Ϣ */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeAccountCenterCreatAccountRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}
/*������ϳ�����*/
void CAccCenterAdapter::HandleOprIOMoneyReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearFieldsAccCenterIOMoneyReq *pAccCenterIOMoneyReq,ULONG SysFlowID,UINT RequestID,int mcnt)
{
	std::map<UINT,stSessionInfo_t>::iterator iter;
	if((iter=m_mSessionInfo.find(SeqNo))==m_mSessionInfo.end()){
		printf("HandleOprIOMoneyReq SeqNo is error\n");
		return;
	}

	if(BankFlowState(iter->second.LocalSerialNo,pAccCenterIOMoneyReq->UserID)) {
		delete pAccCenterIOMoneyReq;  pAccCenterIOMoneyReq = NULL;
		return;
	}

	if(mcnt-- == 0) {
		CETSClearPackage RspPackage;		
		CETSClearFieldsRspInfo RspInfo;
		RspPackage.Init(RequestID,m_pkgbuf,ETS_PACKAGE_SIZE);
		
		if(pAccCenterIOMoneyReq->IODirect == 'I') {
			RspInfo.RspNo=5101;
			strcpy(RspInfo.RspDesc,"�ϳ���ʱ�������T+1�պ���Ч��\n");
		}
		else if(pAccCenterIOMoneyReq->IODirect == 'O') {
			RspInfo.RspNo=5102;
			strcpy(RspInfo.RspDesc,"������ϳ�������Ӧ��\n");
		}

		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		m_pApi->ReqService(0,iter->second.SessionNo,ETSClearMsgTypeAccCenterIOMoneyRsp,iter->second.SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,iter->second.RouterNo);	
		m_mSessionInfo.erase(SeqNo);	
		return;
	}

	CETSClearPackage ReqPackage;
	ReqPackage.Init(RequestID,m_pkgbuf,TCP_PACKAGE_SIZE);

	CETSClearFieldsOprIOMoneyReq OprIOMoneyReq;

	OprIOMoneyReq.SessionNo = pAccCenterIOMoneyReq->SessionNo;
	strcpy(OprIOMoneyReq.UserID,pAccCenterIOMoneyReq->UserID);
	strcpy(OprIOMoneyReq.Firm,pAccCenterIOMoneyReq->Firm);
	strcpy(OprIOMoneyReq.Customer,pAccCenterIOMoneyReq->Customer);
	if(pAccCenterIOMoneyReq->IODirect == 'I') {
		OprIOMoneyReq.IO_Amount = pAccCenterIOMoneyReq->IO_Amount;
	}
	else {
		OprIOMoneyReq.IO_Amount = (pAccCenterIOMoneyReq->IO_Amount * -1);
	}
	OprIOMoneyReq.ExecuteTime = 0;
	OprIOMoneyReq.LocalSerialNo = SysFlowID;

	ReqPackage.PutFields(&OprIOMoneyReq,ETSClearFieldNoOprIOMoneyReq);	
	m_pApi->ReqService(0,0,ETSClearMsgTypeOprIOMoneyReq,SeqNo,ReqPackage.GetBuffer(),ReqPackage.GetLength(),NULL,0,RouterNo);

	SetBankFlowState(iter->second.LocalSerialNo,pAccCenterIOMoneyReq->UserID,"S");
	printf("Send Out OprIOMoneyReq!\n");
	
	m_pt.expires_from_now(boost::posix_time::seconds(TIME_TIMINGPOLL_MAX));
	m_pt.async_wait(boost::bind(&CAccCenterAdapter::HandleOprIOMoneyReq,this,RouterNo,AppNo,SessionNo,SeqNo,pAccCenterIOMoneyReq,SysFlowID,RequestID,mcnt));  
}
/*������ϳ�Ӧ��*/	
void CAccCenterAdapter::HandleOprIOMoneyRsp(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	CETSClearFieldsRspInfo OprRspInfo;
	Package.GetFields(&OprRspInfo,ETSClearFieldNoRspInfo);
	
	std::map<UINT,stSessionInfo_t>::iterator iter;
	if((iter=m_mSessionInfo.find(SeqNo))==m_mSessionInfo.end()){
		printf("OprIOMoneyRsp SeqNo is error\n");
		return;
	}

	CETSClearPackage RspPackage;		
	CETSClearFieldsRspInfo RspInfo;
	CETSClearFieldsOprIOMoneyRsp OprIOMoneyRsp;
	CETSClearFieldsAccCenterIOMoneyRsp AccCenterIOMoneyRsp;

	RspPackage.Init(Package.GetRequestID(),m_pkgbuf,TCP_PACKAGE_SIZE);
	Package.GetFields(&OprIOMoneyRsp,ETSClearFieldNoOprIOMoneyRsp);

	if(!OprRspInfo.RspNo) {			
		RspInfo.RspNo=OprRspInfo.RspNo;
		strcpy(RspInfo.RspDesc,OprRspInfo.RspDesc);
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		strcpy(AccCenterIOMoneyRsp.UserID,"");
		strcpy(AccCenterIOMoneyRsp.Firm,OprIOMoneyRsp.Firm);
		strcpy(AccCenterIOMoneyRsp.Customer,OprIOMoneyRsp.Customer);
		AccCenterIOMoneyRsp.AccountFunds = OprIOMoneyRsp.real_funds;
		AccCenterIOMoneyRsp.SysFlowID = OprIOMoneyRsp.LocalSerialNo;
		AccCenterIOMoneyRsp.IOMoneyFlowID = GetIOMoneyFlowID(OprIOMoneyRsp.LocalSerialNo);

		RspPackage.PutFields(&AccCenterIOMoneyRsp,ETSClearFieldNoAccCenterIOMoneyRsp);
		m_pApi->ReqService(0,iter->second.SessionNo,ETSClearMsgTypeAccCenterIOMoneyRsp,iter->second.SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,iter->second.RouterNo);	

		SetBankFlowState(AccCenterIOMoneyRsp.IOMoneyFlowID,iter->second.UserID,"N");
		printf("Send AccCenterIOMoneyRsp!\n");
	} 
	else {
		CETSClearFieldsRspInfo DBRspInfo;
		DBRspInfo.RspNo = OprRspInfo.RspNo;
		strcpy(DBRspInfo.RspDesc,OprRspInfo.RspDesc);

		RspPackage.Init(Package.GetRequestID(),m_pkgbuf,ETS_PACKAGE_SIZE);

		RspInfo.RspNo=OprRspInfo.RspNo;
		strcpy(RspInfo.RspDesc,"�����T+1�պ���Ч��\n");
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		m_pApi->ReqService(0,iter->second.SessionNo,ETSClearMsgTypeAccCenterIOMoneyRsp,iter->second.SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,iter->second.RouterNo);	
		SetBankFlowState(iter->second.LocalSerialNo,iter->second.UserID,"A",&DBRspInfo);
		printf("Warning:OprIOMoneyRsp - Abnormal responses!\n");
		m_mSessionInfo.erase(SeqNo);	
	}
	if(iter->second.IODirect == 'I') {
		m_mSessionInfo.erase(SeqNo);	
	}	
}
/* ��������ϳ����� */
void CAccCenterAdapter::HandleOprIOStockReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearFieldsIOStockReq *pIOStockReq,ULONG SysFlowID,UINT RequestID,int mcnt)
{
	std::map<UINT,stSessionInfo_t>::iterator iter;
	if((iter=m_mSessionInfo.find(SeqNo))==m_mSessionInfo.end()){
		printf("HandleOprIOStockReq SeqNo is error\n");
		return;
	}

	if(StockFlowState(iter->second.LocalSerialNo,pIOStockReq->UserID)) {
		delete pIOStockReq;  pIOStockReq=NULL;
		return;
	}

	if(mcnt-- == 0) {
		CETSClearPackage RspPackage;		
		CETSClearFieldsRspInfo RspInfo;
		RspPackage.Init(RequestID,m_pkgbuf,ETS_PACKAGE_SIZE);

		if(iter->second.Action == 'I') {
			RspInfo.RspNo=5201;
			strcpy(RspInfo.RspDesc,"�ϳ���ʱ�������T+1�պ���Ч��\n");
		}
		else if(iter->second.Action == 'O' || iter->second.Action == 'F' || iter->second.Action == 'U') {
			RspInfo.RspNo=5202;
			strcpy(RspInfo.RspDesc,"������ϳ�������Ӧ��\n");
		}

		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		m_pApi->ReqService(0,iter->second.SessionNo,ETSClearMsgTypeIOStockRsp,iter->second.SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,iter->second.RouterNo);	
		m_mSessionInfo.erase(SeqNo);	
		return;	
	}

	CETSClearPackage ReqPackage;
	ReqPackage.Init(RequestID,m_pkgbuf,TCP_PACKAGE_SIZE);

	CETSClearFieldsOprIOStockReq OprIOGoodsReq;

	OprIOGoodsReq.SessionNo = pIOStockReq->SessionNo;
	strcpy(OprIOGoodsReq.UserID,pIOStockReq->UserID);
	strcpy(OprIOGoodsReq.Firm,pIOStockReq->Firm);
	strcpy(OprIOGoodsReq.Customer,pIOStockReq->Customer);
	strcpy(OprIOGoodsReq.Commodity,pIOStockReq->Commodity);
	OprIOGoodsReq.Action = pIOStockReq->Action;
	OprIOGoodsReq.IO_Goods_Qty = pIOStockReq->IO_Goods_Qty;
	OprIOGoodsReq.ExecuteTime = 0;
	OprIOGoodsReq.LocalSerialNo = SysFlowID;

	ReqPackage.PutFields(&OprIOGoodsReq,ETSClearFieldNoOprIOStockReq);	
	m_pApi->ReqService(0,0,ETSClearMsgTypeOprIOStockReq,SeqNo,ReqPackage.GetBuffer(),ReqPackage.GetLength(),NULL,0,RouterNo);

	SetStockFlowState(iter->second.LocalSerialNo,pIOStockReq->UserID,"S");
	printf("Send Out OprIOStockReq!\n");

	m_pt.expires_from_now(boost::posix_time::seconds(TIME_TIMINGPOLL_MAX));
    m_pt.async_wait(boost::bind(&CAccCenterAdapter::HandleOprIOStockReq,this,RouterNo,AppNo,SessionNo,SeqNo,pIOStockReq,SysFlowID,RequestID,mcnt));  
}
/* ��������ϳ�Ӧ�� */
void CAccCenterAdapter::HandleOprIOStockRsp(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	CETSClearFieldsRspInfo OprRspInfo;
	Package.GetFields(&OprRspInfo,ETSClearFieldNoRspInfo);

	std::map<UINT,stSessionInfo_t>::iterator iter;
	iter=m_mSessionInfo.find(SeqNo);
	if((iter=m_mSessionInfo.find(SeqNo))==m_mSessionInfo.end()){
		printf("OprIOStockRsp SeqNo is error\n");
		return;
	}

	CETSClearPackage RspPackage;		
	CETSClearFieldsRspInfo RspInfo;
	CETSClearFieldsOprIOStockRsp OprIOStockRsp;
	CETSClearFieldsIOStockRsp IOStockRsp;

	RspPackage.Init(Package.GetRequestID(),m_pkgbuf,TCP_PACKAGE_SIZE);
	Package.GetFields(&OprIOStockRsp,ETSClearFieldNoOprIOStockRsp);
	if(!OprRspInfo.RspNo) {		
		RspInfo.RspNo=OprRspInfo.RspNo;
		strcpy(RspInfo.RspDesc,OprRspInfo.RspDesc);
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		strcpy(IOStockRsp.UserID,OprIOStockRsp.UserID);
		strcpy(IOStockRsp.Firm,OprIOStockRsp.Firm);
		strcpy(IOStockRsp.Customer,OprIOStockRsp.Customer);
		strcpy(IOStockRsp.Commodity,OprIOStockRsp.Commodity);
		IOStockRsp.Goods_Qty = OprIOStockRsp.Goods_Balance;
		IOStockRsp.SysFlowID = OprIOStockRsp.LocalSerialNo;
		IOStockRsp.GoodsFlowID = GetIOStockFlowID(OprIOStockRsp.LocalSerialNo);

		RspPackage.PutFields(&IOStockRsp,ETSClearFieldNoIOStockRsp);
		m_pApi->ReqService(0,iter->second.SessionNo,ETSClearMsgTypeIOStockRsp,iter->second.SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,iter->second.RouterNo);	

		SetStockFlowState(IOStockRsp.GoodsFlowID,OprIOStockRsp.UserID,"N");
		printf("Send Out IOStockRsp!\n");
	} 
	else {
		CETSClearFieldsRspInfo DBRspInfo;
		DBRspInfo.RspNo = OprRspInfo.RspNo;
		strcpy(DBRspInfo.RspDesc,OprRspInfo.RspDesc);

		RspPackage.Init(Package.GetRequestID(),m_pkgbuf,ETS_PACKAGE_SIZE);

		RspInfo.RspNo=OprRspInfo.RspNo;
		strcpy(RspInfo.RspDesc,"�����T+1�պ���Ч��\n");
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		m_pApi->ReqService(0,iter->second.SessionNo,ETSClearMsgTypeIOStockRsp,iter->second.SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,iter->second.RouterNo);	

		SetStockFlowState(iter->second.LocalSerialNo,iter->second.UserID,"A",&DBRspInfo);
		printf("Warning:OprIOStockRsp - Abnormal responses!\n");
		m_mSessionInfo.erase(SeqNo);	
	}
	if(iter->second.Action == 'I') {
		m_mSessionInfo.erase(SeqNo);	
	}	
}
/* ���Ͽ������� */
void CAccCenterAdapter::HandleOprNewCustomerReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearFieldsAccountCenterCreatAccountReq *pAccountCenterCreatAccountReq,UINT RequestID,std::string* Customer,int mcnt)
{
	if(NewCusState(Customer)) {
		delete Customer;
		return;
	}

	if(mcnt == 0) {
		CETSClearPackage RspPackage;		
		CETSClearFieldsRspInfo RspInfo;
		RspPackage.Init(RequestID,m_pkgbuf,ETS_PACKAGE_SIZE);

		RspInfo.RspNo=111;
		strcpy(RspInfo.RspDesc,"�ϳ���ʱ���½��˻�T+1�պ���Ч��\n");
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeAccountCenterCreatAccountRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);	
		return;	
	}

	CETSClearPackage ReqPackage;
	ReqPackage.Init(RequestID,m_pkgbuf,TCP_PACKAGE_SIZE);

	CETSClearFieldsOprNewCustomerReq OprNewCustomerReq;

	OprNewCustomerReq.SessionNo = pAccountCenterCreatAccountReq->SessionNo;
	strcpy(OprNewCustomerReq.UserID,pAccountCenterCreatAccountReq->UserID);
	strcpy(OprNewCustomerReq.Firm,pAccountCenterCreatAccountReq->Firm);
	strcpy(OprNewCustomerReq.Customer,Customer->c_str());
	strcpy(OprNewCustomerReq.TraderID,Customer->c_str());
	OprNewCustomerReq.CustomerStatus = 'N';
	OprNewCustomerReq.ClearFlag = 'Y';
	OprNewCustomerReq.CheckFunds = 0;
	OprNewCustomerReq.CusMinFunds = 0;
	strcpy(OprNewCustomerReq.Password,pAccountCenterCreatAccountReq->Password);
	strcpy(OprNewCustomerReq.NWAddr,pAccountCenterCreatAccountReq->NWAddr);
	OprNewCustomerReq.TraderStatus = 'N';
	OprNewCustomerReq.Permission = 15;
	OprNewCustomerReq.NumLink = 0;

	if(mcnt-- == TIME_MAX_COUNT) {
		stSessionInfo_t SessionInfo;
		memset(&SessionInfo,0x00,sizeof(SessionInfo));
		SessionInfo.RouterNo=RouterNo;
		SessionInfo.SessionNo=SessionNo;
		SessionInfo.SeqNo=SeqNo;
		strcpy(SessionInfo.Customer,Customer->c_str());
		
		m_mSessionInfo[m_SeqNo]=SessionInfo;	
	}

	ReqPackage.PutFields(&OprNewCustomerReq,ETSClearFieldNoOprNewCustomerReq);	
	m_pApi->ReqService(0,0,ETSClearMsgTypeOprNewCustomerReq,m_SeqNo++,ReqPackage.GetBuffer(),ReqPackage.GetLength(),NULL,0,RouterNo);

	SetNewCusState(Customer->c_str(),"S");
	printf("Send Out OprNewCustomerReq!\n");

	m_pt.expires_from_now(boost::posix_time::seconds(TIME_TIMINGPOLL_MAX));
    m_pt.async_wait(boost::bind(&CAccCenterAdapter::HandleOprNewCustomerReq,this,RouterNo,AppNo,SessionNo,SeqNo,pAccountCenterCreatAccountReq,RequestID,Customer,mcnt));  
}
/* ���Ͽ���Ӧ�� */
void CAccCenterAdapter::HandleOprNewCustomerRsp(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	CETSClearFieldsRspInfo OprRspInfo;
	Package.GetFields(&OprRspInfo,ETSClearFieldNoRspInfo);
	
	std::map<UINT,stSessionInfo_t>::iterator iter;
	if((iter=m_mSessionInfo.find(SeqNo))==m_mSessionInfo.end()){
		printf("OprNewCustomerRsp SeqNo is error\n");
		return;
	}

	CETSClearPackage RspPackage;	
	CETSClearFieldsRspInfo RspInfo;
	CETSClearFieldsOprNewCustomerRsp OprNewCustomerRsp;
	CETSClearFieldsAccountCenterCreatAccountRsp AccountCenterCreatAccountRsp;

	RspPackage.Init(Package.GetRequestID(),m_pkgbuf,TCP_PACKAGE_SIZE);
	Package.GetFields(&OprNewCustomerRsp,ETSClearFieldNoOprNewCustomerRsp);

	if(!OprRspInfo.RspNo) {		
		strcpy(AccountCenterCreatAccountRsp.UserID,OprNewCustomerRsp.UserID);
		strcpy(AccountCenterCreatAccountRsp.Firm,OprNewCustomerRsp.Firm);
		strcpy(AccountCenterCreatAccountRsp.Customer,OprNewCustomerRsp.Customer);

		RspPackage.PutFields(&AccountCenterCreatAccountRsp,ETSClearFieldNoAccountCenterCreatAccountRsp);
		m_pApi->ReqService(0,iter->second.SessionNo,ETSClearMsgTypeAccountCenterCreatAccountRsp,iter->second.SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,iter->second.RouterNo);	

		SetNewCusState(OprNewCustomerRsp.Customer,"N");
		printf("Send AccountCenterCreatAccountRsp!\n");
	} 
	else {
		CETSClearFieldsRspInfo DBRspInfo;
		DBRspInfo.RspNo = OprRspInfo.RspNo;
		strcpy(DBRspInfo.RspDesc,OprRspInfo.RspDesc);

		RspPackage.Init(Package.GetRequestID(),m_pkgbuf,ETS_PACKAGE_SIZE);

		RspInfo.RspNo=OprRspInfo.RspNo;
		strcpy(RspInfo.RspDesc,"�½��˻�T+1�պ���Ч��\n");
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		m_pApi->ReqService(0,iter->second.SessionNo,ETSClearMsgTypeAccountCenterCreatAccountRsp,iter->second.SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,iter->second.RouterNo);	
		SetNewCusState(iter->second.Customer,"A",&DBRspInfo);
		printf("Warning:OprNewCustomerRsp - Abnormal responses!\n");
	}
	m_mSessionInfo.erase(SeqNo);
}

void CAccCenterAdapter::SetBankFlowState(ULONG flowid,const char* user,const char* states,CETSClearFieldsRspInfo* pDBRspInfo)
{
	SACommand cmd;    // command object	
	try
	{
		cmd.setConnection(m_Connection);
		cmd.setCommandText("Pack_Operator.SetBankFlowState");

		// Input
		cmd.Param("i_FlowID").setAsNumeric()=flowid;
		cmd.Param("i_UserID").setAsString()=user;
		cmd.Param("i_BankFlowState").setAsString()=states;
		if(pDBRspInfo) {
			cmd.Param("i_RspNo").setAsLong()=pDBRspInfo->RspNo;
			cmd.Param("i_RspDesc").setAsString()=pDBRspInfo->RspDesc;
		}
		else {
			if(states == "S") {
				cmd.Param("i_RspNo").setAsLong()=-1;
				cmd.Param("i_RspDesc").setAsString()="NULL";						
			}
			else {
				cmd.Param("i_RspNo").setAsLong()=0;
				cmd.Param("i_RspDesc").setAsString()="�ɹ�";			
			}
		}
		// Execute
		cmd.Execute();
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","SetBankFlowState:����ʧ�ܣ�[%s]\n",(const char*)x.ErrText());
		printf("SetBankFlowState error:%s��\n",(const char*)x.ErrText());
	}	
}

void CAccCenterAdapter::SetStockFlowState(ULONG flowid,const char* user,const char* states,CETSClearFieldsRspInfo* pDBRspInfo)
{
	SACommand cmd;    // command object	
	try
	{
		cmd.setConnection(m_Connection);
		cmd.setCommandText("Pack_Operator.SetStockFlowState");

		// Input
		cmd.Param("i_FlowID").setAsNumeric()=flowid;
		cmd.Param("i_UserID").setAsString()=user;
		cmd.Param("i_StockFlowState").setAsString()=states;
		if(pDBRspInfo) {
			cmd.Param("i_RspNo").setAsLong()=pDBRspInfo->RspNo;
			cmd.Param("i_RspDesc").setAsString()=pDBRspInfo->RspDesc;
		}
		else {
			if(states == "S") {
				cmd.Param("i_RspNo").setAsLong()=-1;
				cmd.Param("i_RspDesc").setAsString()="NULL";						
			}
			else {
				cmd.Param("i_RspNo").setAsLong()=0;
				cmd.Param("i_RspDesc").setAsString()="�ɹ�";			
			}
		}

		// Execute
		cmd.Execute();
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","SetStockFlowState:����ʧ�ܣ�[%s]\n",(const char*)x.ErrText());
		printf("SetStockFlowState error:%s��\n",(const char*)x.ErrText());
	}	
}

void CAccCenterAdapter::SetNewCusState(const char* cus,const char* states,CETSClearFieldsRspInfo* pDBRspInfo)
{
	SACommand cmd;    // command object	
	try
	{
		cmd.setConnection(m_Connection);
		cmd.setCommandText("Pack_Operator.SetNewCusState");

		// Input
		cmd.Param("i_CustomerID").setAsString()=cus;
		cmd.Param("i_NewCusFlowState").setAsString()=states;
		if(pDBRspInfo) {
			cmd.Param("i_RspNo").setAsLong()=pDBRspInfo->RspNo;
			cmd.Param("i_RspDesc").setAsString()=pDBRspInfo->RspDesc;
		}
		else {
			cmd.Param("i_RspNo").setAsLong()=0;
			cmd.Param("i_RspDesc").setAsString()="NULL";
		}

		// Execute
		cmd.Execute();
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","SetNewCusState:����ʧ�ܣ�[%s]\n",(const char*)x.ErrText());
		printf("SetNewCusState error: %s��\n",(const char*)x.ErrText());
	}	
}

int CAccCenterAdapter::BankFlowState(ULONG flowid,const char* user)
{
	SACommand cmd;    // command object	
	
	try
	{
		cmd.setConnection(m_Connection);
		cmd.setCommandText("Pack_Operator.BankFlowState");

		// Input
		cmd.Param("i_ETSFlowID").setAsNumeric()=flowid;
		cmd.Param("i_UserID").setAsString()=user;

		// Execute
		cmd.Execute();

		return cmd.Param("o_RspNo").asShort();
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","BankFlowState:����ʧ�ܣ�[%s]",(const char*)x.ErrText());
		printf("BankFlowState error:%s��\n",(const char*)x.ErrText());
		return -1;
	}	
}

int CAccCenterAdapter::StockFlowState(ULONG flowid,const char* user)
{
	SACommand cmd;    // command object	
	try
	{
		cmd.setConnection(m_Connection);
		cmd.setCommandText("Pack_Operator.StockFlowState");

		// Input
		cmd.Param("i_ETSFlowID").setAsNumeric()=flowid;
		cmd.Param("i_UserID").setAsString()=user;

		// Execute
		cmd.Execute();

		return cmd.Param("o_RspNo").asShort();
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","StockFlowState:����ʧ�ܣ�[%s]",(const char*)x.ErrText());
		printf("StockFlowState error:%s��\n",(const char*)x.ErrText());
		return -1;
	}
}

int CAccCenterAdapter::NewCusState(std::string* cus)
{
	SACommand cmd;    // command object	
	try
	{
		cmd.setConnection(m_Connection);
		cmd.setCommandText("Pack_Operator.NewCusState");

		// Input
		cmd.Param("i_CustomerID").setAsString()=cus->c_str();

		// Execute
		cmd.Execute();
 
		return cmd.Param("o_RspNo").asShort();
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","NewCusState:����ʧ�ܣ�[%s]",(const char*)x.ErrText());
		printf("NewCusState error:%s��\n",(const char*)x.ErrText());
		return -1;
	}	
}

int CAccCenterAdapter::CheckTradingStatus() 
{
	SACommand cmd;    // command object	
	try
	{
		cmd.setConnection(m_Connection);
		cmd.setCommandText("Pack_Operator.GetTradingStatus");

		// Execute
		cmd.Execute();

		// Output
		if(!strcmp("S",cmd.Param("o_TradingStatus").asString().GetBuffer(0))) return 1;
		else return 0;
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","CheckTradingStatus:����ʧ�ܣ�[%s]",(const char*)x.ErrText());
		printf("CheckTradingStatus error:%s��\n",(const char*)x.ErrText());
		return 0;
	}
}

ULONG CAccCenterAdapter::GetIOMoneyFlowID(ULONG SysFlowID)
{
	SACommand cmd;    // command object	
	try
	{
		cmd.setConnection(m_Connection);
		cmd.setCommandText("Pack_Operator.GetIOMoneyFlowID");

		// Input
		cmd.Param("i_SysFlowID").setAsNumeric()=SysFlowID;

		// Execute
		cmd.Execute();

		// Output
		return cmd.Param("o_IOMoneyFlowID").asNumeric();
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","GetIOMoneyFlowID:����ʧ�ܣ�[%s]",(const char*)x.ErrText());
		printf("GetIOMoneyFlowID error:%s��\n",(const char*)x.ErrText());
		return 0;
	}
}

ULONG CAccCenterAdapter::GetIOStockFlowID(ULONG SysFlowID)
{
	SACommand cmd;    // command object	
	try
	{
		cmd.setConnection(m_Connection);
		cmd.setCommandText("Pack_Operator.GetIOStockFlowID");

		// Input
		cmd.Param("i_SysFlowID").setAsNumeric()=SysFlowID;

		// Execute
		cmd.Execute();

		// Output
		return cmd.Param("o_IOGoodsFlowID").asNumeric();
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","GetIOGoodsFlowID:����ʧ�ܣ�[%s]",(const char*)x.ErrText());
		printf("GetIOGoodsFlowID error:%s��\n",(const char*)x.ErrText());
		return 0;
	}
}

ULONG CAccCenterAdapter::NewIOMoneyFlowID(CETSClearFieldsAccCenterIOMoneyReq* pAccCenterIOMoneyReq)
{
	SACommand cmd;    // command object	
	
	try
	{
		cmd.setConnection(m_Connection);
		cmd.setCommandText("Pack_Operator.NewIOMoneyFlowID");

		/* �˻����ĳ�������� */
		cmd.Param("i_UserID").setAsString()=pAccCenterIOMoneyReq->UserID;
		cmd.Param("i_Firm").setAsString()=pAccCenterIOMoneyReq->Firm;
		cmd.Param("i_Customer").setAsString()=pAccCenterIOMoneyReq->Customer;
		cmd.Param("i_IODirect").setAsString()=pAccCenterIOMoneyReq->IODirect;
		cmd.Param("i_IO_Amount").setAsDouble()=pAccCenterIOMoneyReq->IO_Amount;
		cmd.Param("i_IOMoneyFlowID").setAsNumeric()=pAccCenterIOMoneyReq->IOMoneyFlowID;

		// Execute
		cmd.Execute();

		return cmd.Param("o_SysFlowID").asNumeric();		
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","NewIOMoneyFlowID:����ʧ�ܣ�[%s]",(const char*)x.ErrText());
		printf("NewIOMoneyFlowID error:%s��\n",(const char*)x.ErrText());
		return -1;
	}		
}

ULONG CAccCenterAdapter::NewIOStockFlowID(CETSClearFieldsIOStockReq *pIOStockReq)
{
	SACommand cmd;    // command object	
	
	try
	{
		cmd.setConnection(m_Connection);
		cmd.setCommandText("Pack_Operator.NewIOStockFlowID");

		/* ���ӻ����������� */
		cmd.Param("i_UserID").setAsString()=pIOStockReq->UserID;
		cmd.Param("i_Firm").setAsString()=pIOStockReq->Firm;
		cmd.Param("i_Customer").setAsString()=pIOStockReq->Customer;
		cmd.Param("i_Commodity").setAsString()=pIOStockReq->Commodity;
		cmd.Param("i_IO_Goods_Qty").setAsLong()=pIOStockReq->IO_Goods_Qty;
		cmd.Param("i_Action").setAsString()=pIOStockReq->Action;
		cmd.Param("i_GoodsFlowID").setAsNumeric()=pIOStockReq->GoodsFlowID;

		// Execute
		cmd.Execute();

		return cmd.Param("o_SysFlowID").asNumeric();		
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","NewIOStockFlowID:����ʧ�ܣ�[%s]",(const char*)x.ErrText());
		printf("NewIOStockFlowID error:%s��\n",(const char*)x.ErrText());
		return -1;
	}		
}
