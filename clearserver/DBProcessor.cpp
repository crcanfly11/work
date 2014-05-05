#include "DBProcessor.h"

ARP_SERVICE servicearray[]={
	{ETSClearMsgTypeLogonReq		,""			,0				,""},
	{ETSClearMsgTypeLogoffReq		,""			,0				,""},
	{ETSClearMsgTypeMenuQueryReq		,""			,0				,""},
	{ETSClearMsgTypeMenuAddReq		,""			,0				,""},
	{ETSClearMsgTypeMenuDeleteReq		,""			,0				,""},
	{ETSClearMsgTypeOperAddReq		,""			,0				,""},
	{ETSClearMsgTypeOperDeleteReq		,""			,0				,""},
	{ETSClearMsgTypeChangePasswordReq		,""			,0				,""},
	{ETSClearMsgTypeQuotReq		,""			,0				,""},
	{ETSClearMsgTypeSpotQuotReq		,""			,0				,""},
	{ETSClearMsgTypeMarketReq		,""			,0				,""},
	{ETSClearMsgTypeOrderQueryReq		,""			,0				,""},
	{ETSClearMsgTypeTradeQueryReq		,""			,0				,""},
	{ETSClearMsgTypeHoldingQueryReq		,""			,0				,""},
	{ETSClearMsgTypeFundsQueryReq		,""			,0				,""},
	{ETSClearMsgTypeCommodityQueryReq		,""			,0				,""},
	{ETSClearMsgTypeSpotPropertyQueryReq		,""			,0				,""},
	{ETSClearMsgTypeSpotPropertyLookupQueryReq		,""			,0				,""},
	{ETSClearMsgTypeLocationQueryReq		,""			,0				,""},
	{ETSClearMsgTypeLogQueryReq		,""			,0				,""},
	{ETSClearMsgTypeFirmAddReq		,""			,0				,""},
	{ETSClearMsgTypeFirmModifyReq		,""			,0				,""},
	{ETSClearMsgTypeCustomerAddReq		,""			,0				,""},
	{ETSClearMsgTypeCustomerModifyReq		,""			,0				,""},
	{ETSClearMsgTypeCustomerDeleteReq		,""			,0				,""},
	{ETSClearMsgTypeMarketAddReq		,""			,0				,""},
	{ETSClearMsgTypeMarketModifyReq		,""			,0				,""},
	{ETSClearMsgTypeMarketDeleteReq		,""			,0				,""},
	{ETSClearMsgTypeCommodityAddReq		,""			,0				,""},
	{ETSClearMsgTypeCommodityModifyReq		,""			,0				,""},
	{ETSClearMsgTypeCommodityDeleteReq		,""			,0				,""},
	{ETSClearMsgTypeVarietyAddReq		,""			,0				,""},
	{ETSClearMsgTypeVarietyModifyReq		,""			,0				,""},
	{ETSClearMsgTypeVarietyDeleteReq		,""			,0				,""},
	{ETSClearMsgTypeTradingTimeAddReq		,""			,0				,""},
	{ETSClearMsgTypeTradingTimeModifyReq		,""			,0				,""},
	{ETSClearMsgTypeTradingTimeDeleteReq		,""			,0				,""},
	{ETSClearMsgTypeCommodityPropertyAddReq		,""			,0				,""},
	{ETSClearMsgTypeCommodityPropertyQueryReq		,""			,0				,""},
	{ETSClearMsgTypeCommodityPropertyDeleteReq		,""			,0				,""},
	{ETSClearMsgTypeTraderAddReq		,""			,0				,""},
	{ETSClearMsgTypeTraderModifyReq		,""			,0				,""},
	{ETSClearMsgTypeTraderDeleteReq		,""			,0				,""},
	{ETSClearMsgTypeDHouseAddReq		,""			,0				,""},
	{ETSClearMsgTypeDHouseModifyReq		,""			,0				,""},
	{ETSClearMsgTypeDHouseDeleteReq		,""			,0				,""},
	{ETSClearMsgTypeWareHouseAddReq		,""			,0				,""},
	{ETSClearMsgTypeWareHouseModifyReq		,""			,0				,""},
	{ETSClearMsgTypeWareHouseDeleteReq		,""			,0				,""},
	{ETSClearMsgTypeLocationAddReq		,""			,0				,""},
	{ETSClearMsgTypeLocationModifyReq		,""			,0				,""},
	{ETSClearMsgTypeLocationDeleteReq		,""			,0				,""},
	{ETSClearMsgTypePropertyLookupQueryReq		,""			,0				,""},
	{ETSClearMsgTypePropertyLookupAddReq		,""			,0				,""},
	{ETSClearMsgTypePropertyLookupDeleteReq		,""			,0				,""},
	{ETSClearMsgTypeVarietyQueryReq		,""			,0				,""},
	{ETSClearMsgTypeTradingTimeQueryReq		,""			,0				,""},
	{ETSClearMsgTypeDHouseQueryReq		,""			,0				,""},
	{ETSClearMsgTypeWareHouseQueryReq		,""			,0				,""},
	{ETSClearMsgTypeCustomerQueryReq		,""			,0				,""},
	{ETSClearMsgTypeTraderQueryReq		,""			,0				,""},
	{ETSClearMsgTypeFirmQueryReq		,""			,0				,""},
	{ETSClearMsgTypeOperQueryReq		,""			,0				,""},
	{ETSClearMsgTypeFirmDeleteReq		,""			,0				,""},
	{ETSClearMsgTypeIOMoneyReq		,""			,0				,""},
	{ETSClearMsgTypeBankAccountAddReq		,""			,0				,""},
	{ETSClearMsgTypeBankAccountTransferReq		,""			,0				,""},
	{ETSClearMsgTypeBankAccountDeleteReq		,""			,0				,""},
	{ETSClearMsgTypeBankAccountQueryReq		,""			,0				,""},
	{ETSClearMsgTypeUserQueryReq		,""			,0				,""},
	{ETSClearMsgTypeUserAddReq		,""			,0				,""},
	{ETSClearMsgTypeUserModifyReq		,""			,0				,""},
	{ETSClearMsgTypeUserDeleteReq		,""			,0				,""},
	{ETSClearMsgTypeDepartmentQueryReq		,""			,0				,""},
	{ETSClearMsgTypeDepartmentAddReq		,""			,0				,""},
	{ETSClearMsgTypeDepartmentModifyReq		,""			,0				,""},
	{ETSClearMsgTypeDepartmentDeleteReq		,""			,0				,""},
	{ETSClearMsgTypePositionQueryReq		,""			,0				,""},
	{ETSClearMsgTypePositionAddReq		,""			,0				,""},
	{ETSClearMsgTypePositionModifyReq		,""			,0				,""},
	{ETSClearMsgTypePositionDeleteReq		,""			,0				,""},
	{ETSClearMsgTypeDepAuthorityQueryReq		,""			,0				,""},
	{ETSClearMsgTypeDepAuthorityAddReq		,""			,0				,""},
	{ETSClearMsgTypeDepAuthorityModifyReq		,""			,0				,""},
	{ETSClearMsgTypeDepAuthorityDeleteReq		,""			,0				,""},
	{ETSClearMsgTypePosAuthorityQueryReq		,""			,0				,""},
	{ETSClearMsgTypePosAuthorityAddReq		,""			,0				,""},
	{ETSClearMsgTypePosAuthorityModifyReq		,""			,0				,""},
	{ETSClearMsgTypePosAuthorityDeleteReq		,""			,0				,""},
	{ETSClearMsgTypeUseAuthorityQueryReq		,""			,0				,""},
	{ETSClearMsgTypeUseAuthorityAddReq		,""			,0				,""},
	{ETSClearMsgTypeUseAuthorityModifyReq		,""			,0				,""},
	{ETSClearMsgTypeUseAuthorityDeleteReq		,""			,0				,""},
	{ETSClearMsgTypeCommodityHistQueryReq		,""			,0				,""},
	{ETSClearMsgTypeGoodsQueryReq		,""			,0				,""},
	{ETSClearMsgTypeClearingQueryReq		,""			,0				,""},
	{ETSClearMsgTypeCusClearingQueryReq		,""			,0				,""},
	{ETSClearMsgTypeAccessQueryReq		,""			,0				,""},
	{ETSClearMsgTypeAccessAddReq		,""			,0				,""},
	{ETSClearMsgTypeAccessDeleteReq		,""			,0				,""},
	{ETSClearMsgTypeAccessModifyReq		,""			,0				,""},
	{ETSClearMsgTypeDayBalanceQueryReq		,""			,0				,""},
	{ETSClearMsgTypeCusDayBalQueryReq		,""			,0				,""},
	{ETSClearMsgTypeClearPriceReq		,""			,0				,""},
	{ETSClearMsgTypeDayClearReq		,""			,0				,""},
	{ETSClearMsgTypeAuthorityQueryReq		,""			,0				,""},
	{ETSClearMsgTypeFxRatesQueryReq		,""			,0				,""},
	{ETSClearMsgTypeFxRatesAddReq		,""			,0				,""},
	{ETSClearMsgTypeFxRatesDeleteReq		,""			,0				,""},
	{ETSClearMsgTypeFxRatesModifyReq		,""			,0				,""},
	{ETSClearMsgTypeMarketMakerQuotesReq		,""			,0				,""},
	{ETSClearMsgTypeMakerFirmQueryReq		,""			,0				,""},
	{ETSClearMsgTypeMakerFirmAddReq		,""			,0				,""},
	{ETSClearMsgTypeMakerFirmDeleteReq		,""			,0				,""},
	{ETSClearMsgTypeMakerCustomerQueryReq		,""			,0				,""},
	{ETSClearMsgTypeMakerCustomerAddReq		,""			,0				,""},
	{ETSClearMsgTypeMakerCustomerDeleteReq		,""			,0				,""},
	{ETSClearMsgTypeConditionOrderQueryReq		,""			,0				,""},
	{ETSClearMsgTypeAccountCenterCreatAccountReq		,""			,0				,""},
	{ETSClearMsgTypeAccCenterIOMoneyReq		,""			,0				,""},
	{ETSClearMsgTypeAccCenterIOMoneyQueryReq		,""			,0				,""},
	{ETSClearMsgTypeIOStockReq		,""			,0				,""},
	{ETSClearMsgTypeAccCenterIOMoneyBalanceQueryReq		,""			,0				,""},
	{ETSClearMsgTypeAccountCenterAccountQueryReq		,""			,0				,""},
	{ETSClearMsgTypeIOStockBalanceQueryReq		,""			,0				,""},
	{ETSClearMsgTypeIOStockQueryReq		,""			,0				,""}
};
int servicecount=sizeof(servicearray)/sizeof(ARP_SERVICE);

CDBProcessor::CDBProcessor(std::string SID,std::string UserName,std::string Password,boost::asio::io_service& io_service):
	m_SID(SID),
	m_UserName(UserName),
	m_Password(Password),
	m_io(io_service),
	m_dbtimer(io_service,boost::posix_time::seconds(3))
{
	m_bConnected=false;
}

CDBProcessor::~CDBProcessor()
{
}

void CDBProcessor::SetSpi(CARPSpiImp* pSpi)
{
	m_pSpi=pSpi;
}

int CDBProcessor::Connect()
{
	int r=0;

	try
	{
		// connect to database
		// in this example it is Oracle,
		// but can also be Sybase, Informix, DB2
		// SQLServer, InterBase, SQLBase and ODBC
		m_Connection.Connect(
		m_SID.c_str(),     // database name
		m_UserName.c_str(),   // user name
		m_Password.c_str(),   // password
		SA_Oracle_Client);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_ERROR,"System","Connect to DB failed![%s]",(const char*)x.ErrText());
		switch(x.ErrNativeCode()){
		case 12154: // SID����
		case 1017: // �û������������
			r=-1;
			break;
		default:
			r=1; // ��������¾���Ҫ�Զ�����
			break;
		}
	}
	if(r==0){
		logsend(lp,LOG_INFO,"System","Connect to DB succeed.");
	}else if(r>0){
		// ����������ʱ��
		m_dbtimer.expires_from_now(boost::posix_time::seconds(3));
		m_dbtimer.async_wait(boost::bind(&CDBProcessor::HandleDBTimeout,this,boost::asio::placeholders::error)); // wait again when time changed.
	}

	return r;
}

void CDBProcessor::HandleDBTimeout(const boost::system::error_code& error)
{
	// This function will be called when timer is canceled or time changed.
	if(error){
		if(error==boost::asio::error::operation_aborted){
			//logsend(lp,LOG_WARN,"CServerConnection","Timer canceled.");
			return;
		}
	}
	Connect();
}

void CDBProcessor::HandlePackage(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT ServiceNo,UINT SeqNo,CETSClearPackage& Package)
{
	switch(ServiceNo){
	case ETSClearMsgTypeLogonReq:	/* ��¼���� */
		HandleLogonReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeLogoffReq:	/* �ǳ����� */
		HandleLogoffReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;	
	case ETSClearMsgTypeMenuQueryReq:	/* �˵���ѯ���� */
		HandleMenuQueryReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeMenuAddReq:	/* �˵��������� */
		HandleMenuAddReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeMenuDeleteReq:	/* �˵�ɾ������ */
		HandleMenuDeleteReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeOperAddReq:	/* ����Ա�������� */
		HandleOperAddReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeOperDeleteReq:	/* ����Աɾ������ */
		HandleOperDeleteReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeChangePasswordReq:	/* �޸��������� */
		HandleChangePasswordReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeQuotReq:	/* �������� */
		HandleQuotReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeSpotQuotReq:	/* �ֻ��������� */
		HandleSpotQuotReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeMarketReq:	/* �г����� */
		HandleMarketReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeOrderQueryReq:	/* ������ѯ���� */
		HandleOrderQueryReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeTradeQueryReq:	/* �ɽ���ѯ���� */
		HandleTradeQueryReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeHoldingQueryReq:	/* �ֲֲ�ѯ���� */
		HandleHoldingQueryReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeFundsQueryReq:	/* �ʽ��ѯ���� */
		HandleFundsQueryReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeCommodityQueryReq:	/* ��Ʒ��ѯ���� */
		HandleCommodityQueryReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeSpotPropertyQueryReq:	/* �ֻ����Բ�ѯ���� */
		HandleSpotPropertyQueryReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeSpotPropertyLookupQueryReq:	/* �ֻ����������б��ѯ���� */
		HandleSpotPropertyLookupQueryReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeLocationQueryReq:	/* �ֻ������ص��ѯ���� */
		HandleLocationQueryReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeLogQueryReq:	/* ��־��ѯ���� */
		HandleLogQueryReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeFirmQueryReq:	/* ��ѯ��Ա���� */
		HandleFirmQueryReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeFirmAddReq:	/* ���ӻ�Ա���� */
		HandleFirmAddReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeFirmModifyReq:	/* �޸Ļ�Ա���� */
		HandleFirmModifyReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeFirmDeleteReq:	/* ɾ����Ա���� */
		HandleFirmDeleteReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeTraderQueryReq:	/* ��ѯ����Ա���� */
		HandleTraderQueryReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeTraderAddReq:	/* ���ӽ���Ա���� */
		HandleTraderAddReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeTraderModifyReq:	/* �޸Ľ���Ա���� */
		HandleTraderModifyReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeTraderDeleteReq:	/* ɾ������Ա���� */
		HandleTraderDeleteReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeCustomerQueryReq:	/* ��ѯ�ͻ����� */
		HandleCustomerQueryReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeCustomerAddReq:	/* ���ӿͻ����� */
		HandleCustomerAddReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeCustomerModifyReq:	/* �޸Ŀͻ����� */
		HandleCustomerModifyReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeCustomerDeleteReq:	/* ɾ���ͻ����� */
		HandleCustomerDeleteReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeOperQueryReq:	/* ��ѯ����Ա���� */
		HandleOperQueryReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeMarketAddReq:	/* �����г����� */
		HandleMarketAddReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeMarketModifyReq:	/* �޸��г����� */
		HandleMarketModifyReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeMarketDeleteReq:	/* ɾ���г����� */
		HandleMarketDeleteReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeCommodityAddReq:	/* ������Ʒ���� */
		HandleCommodityAddReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeCommodityModifyReq:	/* �޸���Ʒ���� */
		HandleCommodityModifyReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeCommodityDeleteReq:	/* ɾ����Ʒ���� */
		HandleCommodityDeleteReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeCommodityPropertyAddReq:	/* ������Ʒ�������� */
		HandleCommodityPropertyAddReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeCommodityPropertyQueryReq:	/* ��ѯ��Ʒ�������� */
		HandleCommodityPropertyQueryReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeCommodityPropertyDeleteReq:	/* ɾ����Ʒ�������� */
		HandleCommodityPropertyDeleteReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypePropertyLookupAddReq:	/* ������Ʒ��������ѡ������ */
		HandlePropertyLookupAddReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypePropertyLookupQueryReq:	/* ��ѯ��Ʒ��������ѡ������ */
		HandlePropertyLookupQueryReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypePropertyLookupDeleteReq:	/* ɾ����Ʒ��������ѡ������ */
		HandlePropertyLookupDeleteReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeVarietyQueryReq:	/* ��ѯƷ������ */
		HandleVarietyQueryReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeVarietyAddReq:	/* ����Ʒ������ */
		HandleVarietyAddReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeVarietyModifyReq:	/* �޸�Ʒ������ */
		HandleVarietyModifyReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeVarietyDeleteReq:	/* ɾ��Ʒ������ */
		HandleVarietyDeleteReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeTradingTimeQueryReq:	/* ��ѯ���׽����� */
		HandleTradingTimeQueryReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeTradingTimeAddReq:	/* ���ӽ��׽����� */
		HandleTradingTimeAddReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeTradingTimeModifyReq:	/* �޸Ľ��׽����� */
		HandleTradingTimeModifyReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeTradingTimeDeleteReq:	/* ɾ�����׽����� */
		HandleTradingTimeDeleteReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeLocationAddReq:	/* ���ӽ����ص����� */
		HandleLocationAddReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeLocationModifyReq:	/* �޸Ľ����ص����� */
		HandleLocationModifyReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeLocationDeleteReq:	/* ɾ�������ص����� */
		HandleLocationDeleteReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeWareHouseQueryReq:	/* ��ѯ��Ʒ�洢�ֿ����� */
		HandleWareHouseQueryReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeWareHouseAddReq:	/* ������Ʒ�洢�ֿ����� */
		HandleWareHouseAddReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeWareHouseModifyReq:	/* �޸���Ʒ�洢�ֿ����� */
		HandleWareHouseModifyReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeWareHouseDeleteReq:	/* ɾ����Ʒ�洢�ֿ����� */
		HandleWareHouseDeleteReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeDHouseQueryReq:	/* ��ѯ����ֿ����� */
		HandleDHouseQueryReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeDHouseAddReq:	/* ���ӽ���ֿ����� */
		HandleDHouseAddReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeDHouseModifyReq:	/* �޸Ľ���ֿ����� */
		HandleDHouseModifyReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeDHouseDeleteReq:	/* ɾ������ֿ����� */
		HandleDHouseDeleteReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeUserQueryReq:	/* �û���Ϣ��ѯ���� */
		HandleUserQueryReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeUserAddReq:	/* �û���Ϣ�������� */
		HandleUserAddReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeUserDeleteReq:	/* �û���Ϣɾ������ */
		HandleUserDeleteReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeUserModifyReq:	/* �û���Ϣ�޸����� */
		HandleUserModifyReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeDepartmentQueryReq:	/* ������Ϣ��ѯ���� */
		HandleDepartmentQueryReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeDepartmentAddReq:	/* ������Ϣ�������� */
		HandleDepartmentAddReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeDepartmentModifyReq:	/* ������Ϣ�޸����� */
		HandleDepartmentModifyReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeDepartmentDeleteReq:	/* ������Ϣɾ������ */
		HandleDepartmentDeleteReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypePositionQueryReq:	/* ��λ��Ϣ��ѯ���� */
		HandlePositionQueryReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypePositionAddReq:	/* ��λ��Ϣ�������� */
		HandlePositionAddReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypePositionModifyReq:	/* ��λ��Ϣ�޸����� */
		HandlePositionModifyReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypePositionDeleteReq:	/* ��λ��Ϣɾ������ */
		HandlePositionDeleteReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeDepAuthorityQueryReq:	/* ����Ȩ�޲�ѯ���� */
		HandleDepAuthorityQueryReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeAuthorityQueryReq:	/* ȫȨ�޲�ѯ���� */
		HandleAuthorityQueryReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeDepAuthorityAddReq:	/* ����Ȩ���������� */
		HandleDepAuthorityAddReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeDepAuthorityDeleteReq:	/* ����Ȩ��ɾ������ */
		HandleDepAuthorityDeleteReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypePosAuthorityQueryReq:	/* ��λȨ�޲�ѯ���� */
		HandlePosAuthorityQueryReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypePosAuthorityAddReq:	/* ��λȨ���������� */
		HandlePosAuthorityAddReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypePosAuthorityDeleteReq:	/* ��λȨ��ɾ������ */
		HandlePosAuthorityDeleteReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeUseAuthorityQueryReq:	/* �û�Ȩ�޲�ѯ���� */
		HandleUseAuthorityQueryReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeUseAuthorityAddReq:	/* �û�Ȩ���������� */
		HandleUseAuthorityAddReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeUseAuthorityDeleteReq:	/* �û�Ȩ��ɾ������ */
		HandleUseAuthorityDeleteReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeCommodityHistQueryReq:	/* ��ѯ������Ʒ��Լ��ʷ���� */
		HandleCommodityHistQueryReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeGoodsQueryReq:	/* ���ӻ�����ѯ���� */
		HandleGoodsQueryReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeClearingQueryReq:	/* ��Ա������Ϣ��ѯ���� */
		HandleClearingQueryReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeCusClearingQueryReq:	/* �ͻ�������Ϣ��ѯ���� */
		HandleCusClearingQueryReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeAccessQueryReq:	/* ���׿��Ʋ�ѯ���� */
		HandleAccessQueryReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeAccessAddReq:	/* �������׿������� */
		HandleAccessAddReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeAccessDeleteReq:	/* ɾ�����׿������� */
		HandleAccessDeleteReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeAccessModifyReq:	/* �޸Ľ��׿������� */
		HandleAccessModifyReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeDayBalanceQueryReq:	/* ��Ա������Ϣ��ѯ���� */
		HandleDayBalanceQueryReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeCusDayBalQueryReq:	/* �ͻ�������Ϣ��ѯ���� */
		HandleCusDayBalQueryReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeClearPriceReq:	/* ����ۼ������� */
		HandleClearPriceReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeDayClearReq:	/* ���㼰�������� */
		HandleDayClearReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeFxRatesQueryReq:	/* ÿ����Ҷ�����һ��ʱ��ѯ���� */
		HandleFxRatesQueryReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeFxRatesAddReq:	/* ÿ����Ҷ�����һ��ʱ��������� */
		HandleFxRatesAddReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeFxRatesDeleteReq:	/* ÿ����Ҷ�����һ��ʱ�ɾ������ */
		HandleFxRatesDeleteReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeFxRatesModifyReq:	/* ÿ����Ҷ�����һ��ʱ��޸����� */
		HandleFxRatesModifyReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeMarketMakerQuotesReq:	/* �����������ѯ���� */
		HandleMarketMakerQuotesReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeMakerFirmQueryReq:	/* �����̻�Ա��ѯ���� */
		HandleMakerFirmQueryReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeMakerFirmAddReq:	/* �����̻�Ա�ʸ��������� */
		HandleMakerFirmAddReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeMakerFirmDeleteReq:	/* �����̻�Ա�ʸ�ɾ������ */
		HandleMakerFirmDeleteReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeMakerCustomerQueryReq:	/* �����̿ͻ���ѯ���� */
		HandleMakerCustomerQueryReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeMakerCustomerAddReq:	/* �����̿ͻ��ʸ��������� */
		HandleMakerCustomerAddReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeMakerCustomerDeleteReq:	/* �����̿ͻ��ʸ�ɾ������ */
		HandleMakerCustomerDeleteReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeConditionOrderQueryReq:	/* ��������ѯ���� */
		HandleConditionOrderQueryReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeAccountCenterCreatAccountReq:	/* �˻������˻��������� */
		HandleAccountCenterCreatAccountReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeAccCenterIOMoneyReq:	/* �˻����ĳ�������� */
		HandleAccCenterIOMoneyReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeAccCenterIOMoneyQueryReq:	/* �˻������ʽ���ˮ��ѯ���� */
		HandleAccCenterIOMoneyQueryReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeIOStockReq:	/* ���ӻ����������� */
		HandleIOStockReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeAccountCenterAccountQueryReq:	/* �˻������˻���ѯ���� */
		HandleAccountCenterAccountQueryReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeAccCenterIOMoneyBalanceQueryReq:	/* �˻������˻�����ѯ���� */
		HandleAccCenterIOMoneyBalanceQueryReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeIOStockBalanceQueryReq:	/* ���ӻ�����ѯ���� */
		HandleIOStockBalanceQueryReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeIOStockQueryReq:	/* ���ӻ�����ˮ��ѯ���� */
		HandleIOStockQueryReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	default:
		break;
	}
}

/*��¼����*/
void CDBProcessor::HandleLogonReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* ��¼���� */
	CETSClearFieldsLogonReq LogonReq;
	Package.GetFields(&LogonReq,ETSClearFieldNoLogonReq);

	// Response
	CETSClearPackage RspPackage;
	/* ��¼Ӧ�� */
	CETSClearFieldsLogonRsp LogonRsp;
	/* Ӧ����Ϣ */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_Logon.Logon");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* ��¼���� */
		cmd.Param("i_UserID").setAsString()=LogonReq.UserID;
		cmd.Param("i_Password").setAsString()=LogonReq.Password;
		cmd.Param("i_IPAddress").setAsLong()=LogonReq.IPAddress;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* Ӧ����Ϣ */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* ��¼Ӧ�� */
		if(!RspInfo.RspNo){
			LogonRsp.SessionNo=cmd.Param("o_SessionNo").asLong();
			strcpy(LogonRsp.UserID,cmd.Param("o_UserID").asString().GetBuffer(0));
			LogonRsp.SysDate=cmd.Param("o_SysDate").asLong();
			LogonRsp.SysTime=cmd.Param("o_SysTime").asLong();
			memcpy(&LogonRsp.Flag,cmd.Param("o_Flag").asString().GetBuffer(0),1);
			strcpy(LogonRsp.DepartmentID,cmd.Param("o_DepartmentID").asString().GetBuffer(0));
			strcpy(LogonRsp.DepartmentName,cmd.Param("o_DepartmentName").asString().GetBuffer(0));
			RspPackage.PutFields(&LogonRsp,ETSClearFieldNoLogonRsp);
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeLogonRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleLogonReq:���ݿ����ʧ�ܣ�[%s]",(const char*)x.ErrText());

		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		switch(x.ErrNativeCode()){
		case 3114:
			RspInfo.RspNo=ETSClearConstRspNoDBNotReady;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNotReady);
			break;
		case 12571:
			RspInfo.RspNo=ETSClearConstRspNoDBNetworkProblem;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNetworkProblem);
			m_Connection.Disconnect();
			Connect(); // ��������
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleLogonReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleLogonReq:�ع�ʧ�ܣ�[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* Ӧ����Ϣ */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeLogonRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*�ǳ�����*/
void CDBProcessor::HandleLogoffReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* �ǳ����� */
	CETSClearFieldsLogoffReq LogoffReq;
	Package.GetFields(&LogoffReq,ETSClearFieldNoLogoffReq);

	// Response
	CETSClearPackage RspPackage;
	/* �ǳ�Ӧ�� */
	CETSClearFieldsLogoffRsp LogoffRsp;
	/* Ӧ����Ϣ */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_Logon.Logoff");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* �ǳ����� */
		cmd.Param("i_UserID").setAsString()=LogoffReq.UserID;
		cmd.Param("i_SessionNo").setAsLong()=LogoffReq.SessionNo;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* Ӧ����Ϣ */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* �ǳ�Ӧ�� */
		if(!RspInfo.RspNo){
			LogoffRsp.SessionNo=cmd.Param("o_SessionNo").asLong();
			strcpy(LogoffRsp.UserID,cmd.Param("o_UserID").asString().GetBuffer(0));
			RspPackage.PutFields(&LogoffRsp,ETSClearFieldNoLogoffRsp);
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeLogoffRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleLogoffReq:���ݿ����ʧ�ܣ�[%s]",(const char*)x.ErrText());

		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		switch(x.ErrNativeCode()){
		case 3114:
			RspInfo.RspNo=ETSClearConstRspNoDBNotReady;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNotReady);
			break;
		case 12571:
			RspInfo.RspNo=ETSClearConstRspNoDBNetworkProblem;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNetworkProblem);
			m_Connection.Disconnect();
			Connect(); // ��������
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleLogoffReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleLogoffReq:�ع�ʧ�ܣ�[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* Ӧ����Ϣ */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeLogoffRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}


/*�˵���ѯ����*/
void CDBProcessor::HandleMenuQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* �˵���ѯ���� */
	CETSClearFieldsMenuQueryReq MenuQueryReq;
	Package.GetFields(&MenuQueryReq,ETSClearFieldNoMenuQueryReq);

	// Response
	CETSClearPackage RspPackage;
	/* �˵���ѯӦ�� */
	CETSClearFieldsMenuQueryRsp MenuQueryRsp;
	CBMLRecordSet MenuList;
	SACommand *pCursor=NULL;
	/* Ӧ����Ϣ */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_Menu.MenuQuery");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* �˵���ѯ���� */
		cmd.Param("i_UserID").setAsString()=MenuQueryReq.UserID;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* Ӧ����Ϣ */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* �˵���ѯӦ�� */
		if(!RspInfo.RspNo){
			RspPackage.PutRecordSet(ETSClearFieldNoMenuList,&MenuList);
			pCursor = cmd.Param("o_Cursor");
			while(pCursor->FetchNext())
			{
				MenuQueryRsp.MenuID=pCursor->Field("MenuID").asLong();
				strcpy(MenuQueryRsp.MenuName,pCursor->Field("MenuName").asString().GetBuffer(0));
				MenuQueryRsp.ParentMenu=pCursor->Field("ParentMenu").asLong();
				MenuQueryRsp.ChildMenu=pCursor->Field("ChildMenu").asLong();
				MenuQueryRsp.NextMenu=pCursor->Field("NextMenu").asLong();
				MenuQueryRsp.PreMenu=pCursor->Field("PreMenu").asLong();
				MenuQueryRsp.PageID=pCursor->Field("PageID").asLong();

				if(MenuList.Insert(&MenuQueryRsp)<0){
					RspPackage.SetEndFlag(1);
					m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeMenuQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);

					// ����
					RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);
					RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
					RspPackage.PutRecordSet(ETSClearFieldNoMenuList,&MenuList);
					MenuList.Insert(&MenuQueryRsp);
				}
			}
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeMenuQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleMenuQueryReq:���ݿ����ʧ�ܣ�[%s]",(const char*)x.ErrText());

		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		switch(x.ErrNativeCode()){
		case 3114:
			RspInfo.RspNo=ETSClearConstRspNoDBNotReady;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNotReady);
			break;
		case 12571:
			RspInfo.RspNo=ETSClearConstRspNoDBNetworkProblem;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNetworkProblem);
			m_Connection.Disconnect();
			Connect(); // ��������
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:�ع�ʧ�ܣ�[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* Ӧ����Ϣ */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeMenuQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*�˵���������*/
void CDBProcessor::HandleMenuAddReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* �˵��������� */
	CETSClearFieldsMenuAddReq MenuAddReq;
	Package.GetFields(&MenuAddReq,ETSClearFieldNoMenuAddReq);

	// Response
	CETSClearPackage RspPackage;
	/* �˵�����Ӧ�� */
	CETSClearFieldsMenuAddRsp MenuAddRsp;
	/* Ӧ����Ϣ */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_User_Authority.MenuAdd");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* �˵��������� */
		cmd.Param("i_UserID").setAsString()=MenuAddReq.UserID;
		cmd.Param("i_OperID").setAsString()=MenuAddReq.OperID;
		cmd.Param("i_MenuID").setAsLong()=MenuAddReq.MenuID;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* Ӧ����Ϣ */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* �˵�����Ӧ�� */
		if(!RspInfo.RspNo){
			strcpy(MenuAddRsp.UserID,cmd.Param("o_UserID").asString().GetBuffer(0));
			RspPackage.PutFields(&MenuAddRsp,ETSClearFieldNoMenuAddRsp);
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeMenuAddRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleMenuAddReq:���ݿ����ʧ�ܣ�[%s]",(const char*)x.ErrText());

		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		switch(x.ErrNativeCode()){
		case 3114:
			RspInfo.RspNo=ETSClearConstRspNoDBNotReady;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNotReady);
			break;
		case 12571:
			RspInfo.RspNo=ETSClearConstRspNoDBNetworkProblem;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNetworkProblem);
			m_Connection.Disconnect();
			Connect(); // ��������
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:�ع�ʧ�ܣ�[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* Ӧ����Ϣ */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeMenuAddRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*�˵�ɾ������*/
void CDBProcessor::HandleMenuDeleteReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* �˵�ɾ������ */
	CETSClearFieldsMenuDeleteReq MenuDeleteReq;
	Package.GetFields(&MenuDeleteReq,ETSClearFieldNoMenuDeleteReq);

	// Response
	CETSClearPackage RspPackage;
	/* �˵�ɾ��Ӧ�� */
	CETSClearFieldsMenuDeleteRsp MenuDeleteRsp;
	/* Ӧ����Ϣ */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_User_Authority.MenuDelete");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* �˵�ɾ������ */
		cmd.Param("i_UserID").setAsString()=MenuDeleteReq.UserID;
		cmd.Param("i_OperID").setAsString()=MenuDeleteReq.OperID;
		cmd.Param("i_MenuID").setAsLong()=MenuDeleteReq.MenuID;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* Ӧ����Ϣ */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* �˵�ɾ��Ӧ�� */
		if(!RspInfo.RspNo){
			strcpy(MenuDeleteRsp.UserID,cmd.Param("o_UserID").asString().GetBuffer(0));
			RspPackage.PutFields(&MenuDeleteRsp,ETSClearFieldNoMenuDeleteRsp);
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeMenuDeleteRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleMenuDeleteReq:���ݿ����ʧ�ܣ�[%s]",(const char*)x.ErrText());

		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		switch(x.ErrNativeCode()){
		case 3114:
			RspInfo.RspNo=ETSClearConstRspNoDBNotReady;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNotReady);
			break;
		case 12571:
			RspInfo.RspNo=ETSClearConstRspNoDBNetworkProblem;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNetworkProblem);
			m_Connection.Disconnect();
			Connect(); // ��������
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:�ع�ʧ�ܣ�[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* Ӧ����Ϣ */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeMenuDeleteRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*����Ա��������*/
void CDBProcessor::HandleOperAddReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* ����Ա�������� */
	CETSClearFieldsOperAddReq OperAddReq;
	Package.GetFields(&OperAddReq,ETSClearFieldNoOperAddReq);

	// Response
	CETSClearPackage RspPackage;
	/* ����Ա����Ӧ�� */
	CETSClearFieldsOperAddRsp OperAddRsp;
	/* Ӧ����Ϣ */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_Operator.OperAdd");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* ����Ա�������� */
		cmd.Param("i_UserID").setAsString()=OperAddReq.UserID;
		cmd.Param("i_OperID").setAsString()=OperAddReq.OperID;
		cmd.Param("i_OperPasswd").setAsString()=OperAddReq.OperPasswd;
		cmd.Param("i_OperName").setAsString()=OperAddReq.OperName;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* Ӧ����Ϣ */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* ����Ա����Ӧ�� */
		if(!RspInfo.RspNo){
			strcpy(OperAddRsp.UserID,cmd.Param("o_UserID").asString().GetBuffer(0));
			RspPackage.PutFields(&OperAddRsp,ETSClearFieldNoOperAddRsp);
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeOperAddRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleOperAddReq:���ݿ����ʧ�ܣ�[%s]",(const char*)x.ErrText());

		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		switch(x.ErrNativeCode()){
		case 3114:
			RspInfo.RspNo=ETSClearConstRspNoDBNotReady;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNotReady);
			break;
		case 12571:
			RspInfo.RspNo=ETSClearConstRspNoDBNetworkProblem;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNetworkProblem);
			m_Connection.Disconnect();
			Connect(); // ��������
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:�ع�ʧ�ܣ�[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* Ӧ����Ϣ */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeOperAddRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*����Աɾ������*/
void CDBProcessor::HandleOperDeleteReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* ����Աɾ������ */
	CETSClearFieldsOperDeleteReq OperDeleteReq;
	Package.GetFields(&OperDeleteReq,ETSClearFieldNoOperDeleteReq);

	// Response
	CETSClearPackage RspPackage;
	/* ����Աɾ��Ӧ�� */
	CETSClearFieldsOperDeleteRsp OperDeleteRsp;
	/* Ӧ����Ϣ */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_Operator.OperDelete");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* ����Աɾ������ */
		cmd.Param("i_UserID").setAsString()=OperDeleteReq.UserID;
		cmd.Param("i_OperID").setAsString()=OperDeleteReq.OperID;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* Ӧ����Ϣ */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* ����Աɾ��Ӧ�� */
		if(!RspInfo.RspNo){
			strcpy(OperDeleteRsp.UserID,cmd.Param("o_UserID").asString().GetBuffer(0));
			RspPackage.PutFields(&OperDeleteRsp,ETSClearFieldNoOperDeleteRsp);
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeOperDeleteRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleOperDeleteReq:���ݿ����ʧ�ܣ�[%s]",(const char*)x.ErrText());

		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		switch(x.ErrNativeCode()){
		case 3114:
			RspInfo.RspNo=ETSClearConstRspNoDBNotReady;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNotReady);
			break;
		case 12571:
			RspInfo.RspNo=ETSClearConstRspNoDBNetworkProblem;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNetworkProblem);
			m_Connection.Disconnect();
			Connect(); // ��������
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:�ع�ʧ�ܣ�[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* Ӧ����Ϣ */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeOperDeleteRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*�޸���������*/
void CDBProcessor::HandleChangePasswordReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* �޸��������� */
	CETSClearFieldsChangePasswordReq ChangePasswordReq;
	Package.GetFields(&ChangePasswordReq,ETSClearFieldNoChangePasswordReq);

	// Response
	CETSClearPackage RspPackage;
	/* �޸�����Ӧ�� */
	CETSClearFieldsChangePasswordRsp ChangePasswordRsp;
	/* Ӧ����Ϣ */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_Logon.ChangePassword");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* �޸��������� */
		cmd.Param("i_UserID").setAsString()=ChangePasswordReq.UserID;
		cmd.Param("i_OldPassword").setAsString()=ChangePasswordReq.OldPassword;
		cmd.Param("i_NewPassword").setAsString()=ChangePasswordReq.NewPassword;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* Ӧ����Ϣ */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* �޸�����Ӧ�� */
		if(!RspInfo.RspNo){
			strcpy(ChangePasswordRsp.UserID,cmd.Param("o_UserID").asString().GetBuffer(0));
			RspPackage.PutFields(&ChangePasswordRsp,ETSClearFieldNoChangePasswordRsp);
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeChangePasswordRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleChangePasswordReq:���ݿ����ʧ�ܣ�[%s]",(const char*)x.ErrText());

		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		switch(x.ErrNativeCode()){
		case 3114:
			RspInfo.RspNo=ETSClearConstRspNoDBNotReady;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNotReady);
			break;
		case 12571:
			RspInfo.RspNo=ETSClearConstRspNoDBNetworkProblem;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNetworkProblem);
			m_Connection.Disconnect();
			Connect(); // ��������
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:�ع�ʧ�ܣ�[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* Ӧ����Ϣ */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeChangePasswordRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*��������*/
void CDBProcessor::HandleQuotReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* �������� */
	CETSClearFieldsQuotReq QuotReq;
	Package.GetFields(&QuotReq,ETSClearFieldNoQuotReq);

	// Response
	CETSClearPackage RspPackage;
	/* ������� */
	CETSClearFieldsQuotPush QuotPush;
	CBMLRecordSet QuotList;
	SACommand *pCursor=NULL;
	/* Ӧ����Ϣ */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_Quot.FutureQuotQuery");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* �������� */
		cmd.Param("i_UserID").setAsString()=QuotReq.UserID;
		cmd.Param("i_Market").setAsString()=QuotReq.Market;
		cmd.Param("i_Commodity").setAsString()=QuotReq.Commodity;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* Ӧ����Ϣ */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* ������� */
		if(!RspInfo.RspNo){
			RspPackage.PutRecordSet(ETSClearFieldNoQuotList,&QuotList);
			pCursor = cmd.Param("o_Cursor");
			while(pCursor->FetchNext())
			{
				strcpy(QuotPush.Market,pCursor->Field("Market").asString().GetBuffer(0));
				strcpy(QuotPush.Commodity,pCursor->Field("Commodity").asString().GetBuffer(0));
				QuotPush.CurPrice=pCursor->Field("CurPrice").asDouble();
				QuotPush.Change=pCursor->Field("Change").asDouble();
				QuotPush.ChangeP=pCursor->Field("ChangeP").asDouble();
				QuotPush.Volume=pCursor->Field("Volume").asLong();
				QuotPush.TotalOpen=pCursor->Field("TotalOpen").asLong();
				QuotPush.Value=pCursor->Field("Value").asDouble();
				QuotPush.AvgPrice=pCursor->Field("AvgPrice").asDouble();
				QuotPush.PrevPrice=pCursor->Field("PrevPrice").asDouble();
				QuotPush.OpenPrice=pCursor->Field("OpenPrice").asDouble();
				QuotPush.HighPrice=pCursor->Field("HighPrice").asDouble();
				QuotPush.LowPrice=pCursor->Field("LowPrice").asDouble();
				QuotPush.ClosePrice=pCursor->Field("ClosePrice").asDouble();
				QuotPush.BuyPrice1=pCursor->Field("BuyPrice1").asDouble();
				QuotPush.BuyQty1=pCursor->Field("BuyQty1").asLong();
				QuotPush.SellPrice1=pCursor->Field("SellPrice1").asDouble();
				QuotPush.SellQty1=pCursor->Field("SellQty1").asLong();

				if(QuotList.Insert(&QuotPush)<0){
					RspPackage.SetEndFlag(1);
					m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeQuotRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);

					// ����
					RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);
					RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
					RspPackage.PutRecordSet(ETSClearFieldNoQuotList,&QuotList);
					QuotList.Insert(&QuotPush);
				}
			}
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeQuotRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleQuotReq:���ݿ����ʧ�ܣ�[%s]",(const char*)x.ErrText());

		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		switch(x.ErrNativeCode()){
		case 3114:
			RspInfo.RspNo=ETSClearConstRspNoDBNotReady;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNotReady);
			break;
		case 12571:
			RspInfo.RspNo=ETSClearConstRspNoDBNetworkProblem;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNetworkProblem);
			m_Connection.Disconnect();
			Connect(); // ��������
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:�ع�ʧ�ܣ�[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* Ӧ����Ϣ */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeQuotRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*�ֻ���������*/
void CDBProcessor::HandleSpotQuotReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* �ֻ��������� */
	CETSClearFieldsSpotQuotReq SpotQuotReq;
	Package.GetFields(&SpotQuotReq,ETSClearFieldNoSpotQuotReq);

	// Response
	CETSClearPackage RspPackage;
	/* �ֻ�������� */
	CETSClearFieldsSpotQuotPush SpotQuotPush;
	CBMLRecordSet SpotQuotList;
	SACommand *pCursor=NULL;
	/* Ӧ����Ϣ */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_Quot.SpotQuotQuery");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* �ֻ��������� */
		cmd.Param("i_UserID").setAsString()=SpotQuotReq.UserID;
		cmd.Param("i_Market").setAsString()=SpotQuotReq.Market;
		cmd.Param("i_OrderNo").setAsNumeric()=SpotQuotReq.OrderNo;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* Ӧ����Ϣ */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* �ֻ�������� */
		if(!RspInfo.RspNo){
			RspPackage.PutRecordSet(ETSClearFieldNoSpotQuotList,&SpotQuotList);
			pCursor = cmd.Param("o_Cursor");
			while(pCursor->FetchNext())
			{
				SpotQuotPush.OrderDate=pCursor->Field("OrderDate").asLong();
				SpotQuotPush.OrderTime=pCursor->Field("OrderTime").asLong();
				SpotQuotPush.OrderNo=pCursor->Field("OrderNo").asNumeric();
				strcpy(SpotQuotPush.Market,pCursor->Field("Market").asString().GetBuffer(0));
				strcpy(SpotQuotPush.Commodity,pCursor->Field("Commodity").asString().GetBuffer(0));
				memcpy(&SpotQuotPush.BuySell,pCursor->Field("BuySell").asString().GetBuffer(0),1);
				SpotQuotPush.Price=pCursor->Field("Price").asDouble();
				SpotQuotPush.Qty=pCursor->Field("Qty").asLong();
				SpotQuotPush.TradeQty=pCursor->Field("TradeQty").asLong();
				SpotQuotPush.Balance=pCursor->Field("Balance").asLong();
				SpotQuotPush.WithdrawDate=pCursor->Field("WithdrawDate").asLong();
				SpotQuotPush.WithdrawTime=pCursor->Field("WithdrawTime").asLong();
				memcpy(&SpotQuotPush.OrderStatus,pCursor->Field("OrderStatus").asString().GetBuffer(0),1);
				SpotQuotPush.ValidDate=pCursor->Field("ValidDate").asLong();
				SpotQuotPush.ValidTime=pCursor->Field("ValidTime").asLong();
				SpotQuotPush.OrderMinQty=pCursor->Field("OrderMinQty").asLong();
				strcpy(SpotQuotPush.Location,pCursor->Field("Location").asString().GetBuffer(0));
				strcpy(SpotQuotPush.Property1,pCursor->Field("Property1").asString().GetBuffer(0));
				strcpy(SpotQuotPush.Property2,pCursor->Field("Property2").asString().GetBuffer(0));
				strcpy(SpotQuotPush.Property3,pCursor->Field("Property3").asString().GetBuffer(0));
				strcpy(SpotQuotPush.Property4,pCursor->Field("Property4").asString().GetBuffer(0));
				strcpy(SpotQuotPush.Property5,pCursor->Field("Property5").asString().GetBuffer(0));
				strcpy(SpotQuotPush.Property6,pCursor->Field("Property6").asString().GetBuffer(0));
				strcpy(SpotQuotPush.Property7,pCursor->Field("Property7").asString().GetBuffer(0));
				strcpy(SpotQuotPush.Property8,pCursor->Field("Property8").asString().GetBuffer(0));
				strcpy(SpotQuotPush.Property9,pCursor->Field("Property9").asString().GetBuffer(0));
				strcpy(SpotQuotPush.Property10,pCursor->Field("Property10").asString().GetBuffer(0));

				if(SpotQuotList.Insert(&SpotQuotPush)<0){
					RspPackage.SetEndFlag(1);
					m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeSpotQuotRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);

					// ����
					RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);
					RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
					RspPackage.PutRecordSet(ETSClearFieldNoSpotQuotList,&SpotQuotList);
					SpotQuotList.Insert(&SpotQuotPush);
				}
			}
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeSpotQuotRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleSpotQuotReq:���ݿ����ʧ�ܣ�[%s]",(const char*)x.ErrText());

		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		switch(x.ErrNativeCode()){
		case 3114:
			RspInfo.RspNo=ETSClearConstRspNoDBNotReady;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNotReady);
			break;
		case 12571:
			RspInfo.RspNo=ETSClearConstRspNoDBNetworkProblem;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNetworkProblem);
			m_Connection.Disconnect();
			Connect(); // ��������
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:�ع�ʧ�ܣ�[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* Ӧ����Ϣ */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeSpotQuotRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*�г�����*/
void CDBProcessor::HandleMarketReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* �г����� */
	CETSClearFieldsMarketReq MarketReq;
	Package.GetFields(&MarketReq,ETSClearFieldNoMarketReq);

	// Response
	CETSClearPackage RspPackage;
	/* �г�Ӧ�� */
	CETSClearFieldsMarketRsp MarketRsp;
	CBMLRecordSet MarketList;
	SACommand *pCursor=NULL;
	/* Ӧ����Ϣ */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_Market.MarketQuery");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* �г����� */
		cmd.Param("i_UserID").setAsString()=MarketReq.UserID;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* Ӧ����Ϣ */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* �г�Ӧ�� */
		if(!RspInfo.RspNo){
			RspPackage.PutRecordSet(ETSClearFieldNoMarketList,&MarketList);
			pCursor = cmd.Param("o_Cursor");
			while(pCursor->FetchNext())
			{
				strcpy(MarketRsp.Market,pCursor->Field("Market").asString().GetBuffer(0));
				strcpy(MarketRsp.MarketName,pCursor->Field("MarketName").asString().GetBuffer(0));
				memcpy(&MarketRsp.MarketStatus,pCursor->Field("MarketStatus").asString().GetBuffer(0),1);
				memcpy(&MarketRsp.SpotType,pCursor->Field("SpotType").asString().GetBuffer(0),1);
				MarketRsp.NumberCommodity=pCursor->Field("NumberCommodity").asLong();
				MarketRsp.TaxRate=pCursor->Field("TaxRate").asDouble();
				strcpy(MarketRsp.ExchangeID,pCursor->Field("ExchangeID").asString().GetBuffer(0));

				if(MarketList.Insert(&MarketRsp)<0){
					RspPackage.SetEndFlag(1);
					m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeMarketRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);

					// ����
					RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);
					RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
					RspPackage.PutRecordSet(ETSClearFieldNoMarketList,&MarketList);
					MarketList.Insert(&MarketRsp);
				}
			}
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeMarketRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleMarketReq:���ݿ����ʧ�ܣ�[%s]",(const char*)x.ErrText());

		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		switch(x.ErrNativeCode()){
		case 3114:
			RspInfo.RspNo=ETSClearConstRspNoDBNotReady;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNotReady);
			break;
		case 12571:
			RspInfo.RspNo=ETSClearConstRspNoDBNetworkProblem;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNetworkProblem);
			m_Connection.Disconnect();
			Connect(); // ��������
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:�ع�ʧ�ܣ�[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* Ӧ����Ϣ */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeMarketRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*������ѯ����*/
void CDBProcessor::HandleOrderQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* ������ѯ���� */
	CETSClearFieldsOrderQueryReq OrderQueryReq;
	Package.GetFields(&OrderQueryReq,ETSClearFieldNoOrderQueryReq);

	// Response
	CETSClearPackage RspPackage;
	/* ������ѯӦ�� */
	CETSClearFieldsOrderPush OrderPush;
	CBMLRecordSet OrderQueryList;
	SACommand *pCursor=NULL;
	/* Ӧ����Ϣ */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_Order.OrderQuery");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* ������ѯ���� */
		cmd.Param("i_UserID").setAsString()=OrderQueryReq.UserID;
		cmd.Param("i_TraderID").setAsString()=OrderQueryReq.TraderID;
		cmd.Param("i_Firm").setAsString()=OrderQueryReq.Firm;
		cmd.Param("i_Customer").setAsString()=OrderQueryReq.Customer;
		cmd.Param("i_OrderNo").setAsNumeric()=OrderQueryReq.OrderNo;
		cmd.Param("i_Market").setAsString()=OrderQueryReq.Market;
		cmd.Param("i_Commodity").setAsString()=OrderQueryReq.Commodity;
		cmd.Param("i_OrderStatus").setAsString()=OrderQueryReq.OrderStatus;
		cmd.Param("i_MatchMethod").setAsLong()=OrderQueryReq.MatchMethod;
		cmd.Param("i_StartTime").setAsLong()=OrderQueryReq.StartTime;
		cmd.Param("i_EndTime").setAsLong()=OrderQueryReq.EndTime;
		cmd.Param("i_StartDate").setAsLong()=OrderQueryReq.StartDate;
		cmd.Param("i_EndDate").setAsLong()=OrderQueryReq.EndDate;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* Ӧ����Ϣ */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* ������ѯӦ�� */
		if(!RspInfo.RspNo){
			RspPackage.PutRecordSet(ETSClearFieldNoOrderQueryList,&OrderQueryList);
			pCursor = cmd.Param("o_Cursor");
			while(pCursor->FetchNext())
			{
				OrderPush.SessionNo=pCursor->Field("SessionNo").asLong();
				OrderPush.LocalSerialNo=pCursor->Field("LocalSerialNo").asNumeric();
				strcpy(OrderPush.TraderID,pCursor->Field("TraderID").asString().GetBuffer(0));
				OrderPush.OrderDate=pCursor->Field("OrderDate").asLong();
				OrderPush.OrderTime=pCursor->Field("OrderTime").asLong();
				OrderPush.OrderNo=pCursor->Field("OrderNo").asNumeric();
				strcpy(OrderPush.Market,pCursor->Field("Market").asString().GetBuffer(0));
				strcpy(OrderPush.Commodity,pCursor->Field("Commodity").asString().GetBuffer(0));
				strcpy(OrderPush.Firm,pCursor->Field("Firm").asString().GetBuffer(0));
				strcpy(OrderPush.Customer,pCursor->Field("Customer").asString().GetBuffer(0));
				memcpy(&OrderPush.OrderType,pCursor->Field("OrderType").asString().GetBuffer(0),1);
				memcpy(&OrderPush.BuySell,pCursor->Field("BuySell").asString().GetBuffer(0),1);
				memcpy(&OrderPush.Settleflg,pCursor->Field("Settleflg").asString().GetBuffer(0),1);
				OrderPush.Price=pCursor->Field("Price").asDouble();
				OrderPush.Qty=pCursor->Field("Qty").asLong();
				OrderPush.TradeQty=pCursor->Field("TradeQty").asLong();
				OrderPush.Balance=pCursor->Field("Balance").asLong();
				memcpy(&OrderPush.SpotType,pCursor->Field("SpotType").asString().GetBuffer(0),1);
				OrderPush.WithdrawDate=pCursor->Field("WithdrawDate").asLong();
				OrderPush.WithdrawTime=pCursor->Field("WithdrawTime").asLong();
				memcpy(&OrderPush.OrderStatus,pCursor->Field("OrderStatus").asString().GetBuffer(0),1);
				strcpy(OrderPush.Remark,pCursor->Field("Remark").asString().GetBuffer(0));
				OrderPush.TargetOrderNo=pCursor->Field("TargetOrderNo").asNumeric();
				OrderPush.ValidDate=pCursor->Field("ValidDate").asLong();
				OrderPush.ValidTime=pCursor->Field("ValidTime").asLong();
				OrderPush.OrderMinQty=pCursor->Field("OrderMinQty").asLong();
				strcpy(OrderPush.Location,pCursor->Field("Location").asString().GetBuffer(0));
				strcpy(OrderPush.Property1,pCursor->Field("Property1").asString().GetBuffer(0));
				strcpy(OrderPush.Property2,pCursor->Field("Property2").asString().GetBuffer(0));
				strcpy(OrderPush.Property3,pCursor->Field("Property3").asString().GetBuffer(0));
				strcpy(OrderPush.Property4,pCursor->Field("Property4").asString().GetBuffer(0));
				strcpy(OrderPush.Property5,pCursor->Field("Property5").asString().GetBuffer(0));
				strcpy(OrderPush.Property6,pCursor->Field("Property6").asString().GetBuffer(0));
				strcpy(OrderPush.Property7,pCursor->Field("Property7").asString().GetBuffer(0));
				strcpy(OrderPush.Property8,pCursor->Field("Property8").asString().GetBuffer(0));
				strcpy(OrderPush.Property9,pCursor->Field("Property9").asString().GetBuffer(0));
				strcpy(OrderPush.Property10,pCursor->Field("Property10").asString().GetBuffer(0));
				memcpy(&OrderPush.MMFLAG,pCursor->Field("MMFLAG").asString().GetBuffer(0),1);
				strcpy(OrderPush.OrderDescription,pCursor->Field("OrderDescription").asString().GetBuffer(0));
				strcpy(OrderPush.OrderReMark,pCursor->Field("OrderReMark").asString().GetBuffer(0));
				OrderPush.TradePrice=pCursor->Field("TradePrice").asDouble();

				if(OrderQueryList.Insert(&OrderPush)<0){
					RspPackage.SetEndFlag(1);
					m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeOrderQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);

					// ����
					RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);
					RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
					RspPackage.PutRecordSet(ETSClearFieldNoOrderQueryList,&OrderQueryList);
					OrderQueryList.Insert(&OrderPush);
				}
			}
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeOrderQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleOrderQueryReq:���ݿ����ʧ�ܣ�[%s]",(const char*)x.ErrText());

		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		switch(x.ErrNativeCode()){
		case 3114:
			RspInfo.RspNo=ETSClearConstRspNoDBNotReady;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNotReady);
			break;
		case 12571:
			RspInfo.RspNo=ETSClearConstRspNoDBNetworkProblem;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNetworkProblem);
			m_Connection.Disconnect();
			Connect(); // ��������
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:�ع�ʧ�ܣ�[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* Ӧ����Ϣ */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeOrderQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*�ɽ���ѯ����*/
void CDBProcessor::HandleTradeQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* �ɽ���ѯ���� */
	CETSClearFieldsTradeQueryReq TradeQueryReq;
	Package.GetFields(&TradeQueryReq,ETSClearFieldNoTradeQueryReq);

	// Response
	CETSClearPackage RspPackage;
	/* �ɽ���ѯӦ�� */
	CETSClearFieldsTradePush TradePush;
	CBMLRecordSet TradeQueryList;
	SACommand *pCursor=NULL;
	/* Ӧ����Ϣ */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_Trade.TradeQuery");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* �ɽ���ѯ���� */
		cmd.Param("i_UserID").setAsString()=TradeQueryReq.UserID;
		cmd.Param("i_TraderID").setAsString()=TradeQueryReq.TraderID;
		cmd.Param("i_Firm").setAsString()=TradeQueryReq.Firm;
		cmd.Param("i_Customer").setAsString()=TradeQueryReq.Customer;
		cmd.Param("i_TradeNo").setAsNumeric()=TradeQueryReq.TradeNo;
		cmd.Param("i_Market").setAsString()=TradeQueryReq.Market;
		cmd.Param("i_Commodity").setAsString()=TradeQueryReq.Commodity;
		cmd.Param("i_StartTime").setAsLong()=TradeQueryReq.StartTime;
		cmd.Param("i_EndTime").setAsLong()=TradeQueryReq.EndTime;
		cmd.Param("i_StartDate").setAsLong()=TradeQueryReq.StartDate;
		cmd.Param("i_EndDate").setAsLong()=TradeQueryReq.EndDate;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* Ӧ����Ϣ */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* �ɽ���ѯӦ�� */
		if(!RspInfo.RspNo){
			RspPackage.PutRecordSet(ETSClearFieldNoTradeQueryList,&TradeQueryList);
			pCursor = cmd.Param("o_Cursor");
			while(pCursor->FetchNext())
			{
				strcpy(TradePush.TraderID,pCursor->Field("TraderID").asString().GetBuffer(0));
				TradePush.TradeDate=pCursor->Field("TradeDate").asLong();
				TradePush.TradeTime=pCursor->Field("TradeTime").asLong();
				TradePush.TradeNo=pCursor->Field("TradeNo").asNumeric();
				strcpy(TradePush.Market,pCursor->Field("Market").asString().GetBuffer(0));
				strcpy(TradePush.Commodity,pCursor->Field("Commodity").asString().GetBuffer(0));
				strcpy(TradePush.Firm,pCursor->Field("Firm").asString().GetBuffer(0));
				strcpy(TradePush.Customer,pCursor->Field("Customer").asString().GetBuffer(0));
				TradePush.OrderDate=pCursor->Field("OrderDate").asLong();
				TradePush.OrderTime=pCursor->Field("OrderTime").asLong();
				TradePush.OrderNo=pCursor->Field("OrderNo").asNumeric();
				memcpy(&TradePush.BuySell,pCursor->Field("BuySell").asString().GetBuffer(0),1);
				memcpy(&TradePush.Settleflg,pCursor->Field("Settleflg").asString().GetBuffer(0),1);
				TradePush.Price=pCursor->Field("Price").asDouble();
				TradePush.TradeQty=pCursor->Field("TradeQty").asLong();
				memcpy(&TradePush.SpotType,pCursor->Field("SpotType").asString().GetBuffer(0),1);
				TradePush.S_OrderDate=pCursor->Field("S_OrderDate").asLong();
				TradePush.S_OrderTime=pCursor->Field("S_OrderTime").asLong();
				TradePush.S_OrderNo=pCursor->Field("S_OrderNo").asNumeric();
				TradePush.S_TradeDate=pCursor->Field("S_TradeDate").asLong();
				TradePush.S_TradeTime=pCursor->Field("S_TradeTime").asLong();
				TradePush.S_TradeNo=pCursor->Field("S_TradeNo").asNumeric();
				TradePush.S_Price=pCursor->Field("S_Price").asDouble();
				strcpy(TradePush.Location,pCursor->Field("Location").asString().GetBuffer(0));
				strcpy(TradePush.Property1,pCursor->Field("Property1").asString().GetBuffer(0));
				strcpy(TradePush.Property2,pCursor->Field("Property2").asString().GetBuffer(0));
				strcpy(TradePush.Property3,pCursor->Field("Property3").asString().GetBuffer(0));
				strcpy(TradePush.Property4,pCursor->Field("Property4").asString().GetBuffer(0));
				strcpy(TradePush.Property5,pCursor->Field("Property5").asString().GetBuffer(0));
				strcpy(TradePush.Property6,pCursor->Field("Property6").asString().GetBuffer(0));
				strcpy(TradePush.Property7,pCursor->Field("Property7").asString().GetBuffer(0));
				strcpy(TradePush.Property8,pCursor->Field("Property8").asString().GetBuffer(0));
				strcpy(TradePush.Property9,pCursor->Field("Property9").asString().GetBuffer(0));
				strcpy(TradePush.Property10,pCursor->Field("Property10").asString().GetBuffer(0));
				memcpy(&TradePush.MMFLAG,pCursor->Field("MMFLAG").asString().GetBuffer(0),1);

				if(TradeQueryList.Insert(&TradePush)<0){
					RspPackage.SetEndFlag(1);
					m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeTradeQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);

					// ����
					RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);
					RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
					RspPackage.PutRecordSet(ETSClearFieldNoTradeQueryList,&TradeQueryList);
					TradeQueryList.Insert(&TradePush);
				}
			}
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeTradeQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleTradeQueryReq:���ݿ����ʧ�ܣ�[%s]",(const char*)x.ErrText());

		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		switch(x.ErrNativeCode()){
		case 3114:
			RspInfo.RspNo=ETSClearConstRspNoDBNotReady;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNotReady);
			break;
		case 12571:
			RspInfo.RspNo=ETSClearConstRspNoDBNetworkProblem;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNetworkProblem);
			m_Connection.Disconnect();
			Connect(); // ��������
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:�ع�ʧ�ܣ�[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* Ӧ����Ϣ */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeTradeQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*�ֲֲ�ѯ����*/
void CDBProcessor::HandleHoldingQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* �ֲֲ�ѯ���� */
	CETSClearFieldsHoldingQueryReq HoldingQueryReq;
	Package.GetFields(&HoldingQueryReq,ETSClearFieldNoHoldingQueryReq);

	// Response
	CETSClearPackage RspPackage;
	/* �ֲֲ�ѯӦ�� */
	CETSClearFieldsHoldingQueryRsp HoldingQueryRsp;
	CBMLRecordSet HoldingQueryList;
	SACommand *pCursor=NULL;
	/* Ӧ����Ϣ */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_Holding.HoldingQuery");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* �ֲֲ�ѯ���� */
		cmd.Param("i_UserID").setAsString()=HoldingQueryReq.UserID;
		cmd.Param("i_TraderID").setAsString()=HoldingQueryReq.TraderID;
		cmd.Param("i_Firm").setAsString()=HoldingQueryReq.Firm;
		cmd.Param("i_Customer").setAsString()=HoldingQueryReq.Customer;
		cmd.Param("i_Market").setAsString()=HoldingQueryReq.Market;
		cmd.Param("i_Commodity").setAsString()=HoldingQueryReq.Commodity;
		cmd.Param("i_StartDate").setAsLong()=HoldingQueryReq.StartDate;
		cmd.Param("i_EndDate").setAsLong()=HoldingQueryReq.EndDate;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* Ӧ����Ϣ */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* �ֲֲ�ѯӦ�� */
		if(!RspInfo.RspNo){
			RspPackage.PutRecordSet(ETSClearFieldNoHoldingQueryList,&HoldingQueryList);
			pCursor = cmd.Param("o_Cursor");
			while(pCursor->FetchNext())
			{
				strcpy(HoldingQueryRsp.TraderID,pCursor->Field("TraderID").asString().GetBuffer(0));
				HoldingQueryRsp.TradeDate=pCursor->Field("TradeDate").asLong();
				HoldingQueryRsp.TradeTime=pCursor->Field("TradeTime").asLong();
				HoldingQueryRsp.TradeNo=pCursor->Field("TradeNo").asNumeric();
				strcpy(HoldingQueryRsp.Market,pCursor->Field("Market").asString().GetBuffer(0));
				strcpy(HoldingQueryRsp.Commodity,pCursor->Field("Commodity").asString().GetBuffer(0));
				strcpy(HoldingQueryRsp.Firm,pCursor->Field("Firm").asString().GetBuffer(0));
				strcpy(HoldingQueryRsp.Customer,pCursor->Field("Customer").asString().GetBuffer(0));
				HoldingQueryRsp.OrderDate=pCursor->Field("OrderDate").asLong();
				HoldingQueryRsp.OrderTime=pCursor->Field("OrderTime").asLong();
				HoldingQueryRsp.OrderNo=pCursor->Field("OrderNo").asNumeric();
				memcpy(&HoldingQueryRsp.BuySell,pCursor->Field("BuySell").asString().GetBuffer(0),1);
				memcpy(&HoldingQueryRsp.Settleflg,pCursor->Field("Settleflg").asString().GetBuffer(0),1);
				HoldingQueryRsp.Price=pCursor->Field("Price").asDouble();
				HoldingQueryRsp.Qty=pCursor->Field("Qty").asLong();
				HoldingQueryRsp.Balance=pCursor->Field("Balance").asLong();
				HoldingQueryRsp.LockQty=pCursor->Field("LockQty").asLong();
				memcpy(&HoldingQueryRsp.SpotType,pCursor->Field("SpotType").asString().GetBuffer(0),1);
				strcpy(HoldingQueryRsp.Location,pCursor->Field("Location").asString().GetBuffer(0));
				strcpy(HoldingQueryRsp.Property1,pCursor->Field("Property1").asString().GetBuffer(0));
				strcpy(HoldingQueryRsp.Property2,pCursor->Field("Property2").asString().GetBuffer(0));
				strcpy(HoldingQueryRsp.Property3,pCursor->Field("Property3").asString().GetBuffer(0));
				strcpy(HoldingQueryRsp.Property4,pCursor->Field("Property4").asString().GetBuffer(0));
				strcpy(HoldingQueryRsp.Property5,pCursor->Field("Property5").asString().GetBuffer(0));
				strcpy(HoldingQueryRsp.Property6,pCursor->Field("Property6").asString().GetBuffer(0));
				strcpy(HoldingQueryRsp.Property7,pCursor->Field("Property7").asString().GetBuffer(0));
				strcpy(HoldingQueryRsp.Property8,pCursor->Field("Property8").asString().GetBuffer(0));
				strcpy(HoldingQueryRsp.Property9,pCursor->Field("Property9").asString().GetBuffer(0));
				strcpy(HoldingQueryRsp.Property10,pCursor->Field("Property10").asString().GetBuffer(0));
				memcpy(&HoldingQueryRsp.MMFLAG,pCursor->Field("MMFLAG").asString().GetBuffer(0),1);

				if(HoldingQueryList.Insert(&HoldingQueryRsp)<0){
					RspPackage.SetEndFlag(1);
					m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeHoldingQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);

					// ����
					RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);
					RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
					RspPackage.PutRecordSet(ETSClearFieldNoHoldingQueryList,&HoldingQueryList);
					HoldingQueryList.Insert(&HoldingQueryRsp);
				}
			}
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeHoldingQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleHoldingQueryReq:���ݿ����ʧ�ܣ�[%s]",(const char*)x.ErrText());

		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		switch(x.ErrNativeCode()){
		case 3114:
			RspInfo.RspNo=ETSClearConstRspNoDBNotReady;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNotReady);
			break;
		case 12571:
			RspInfo.RspNo=ETSClearConstRspNoDBNetworkProblem;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNetworkProblem);
			m_Connection.Disconnect();
			Connect(); // ��������
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:�ع�ʧ�ܣ�[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* Ӧ����Ϣ */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeHoldingQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*�ʽ��ѯ����*/
void CDBProcessor::HandleFundsQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* �ʽ��ѯ���� */
	CETSClearFieldsFundsQueryReq FundsQueryReq;
	Package.GetFields(&FundsQueryReq,ETSClearFieldNoFundsQueryReq);

	// Response
	CETSClearPackage RspPackage;
	/* �ʽ��ѯӦ�� */
	CETSClearFieldsFundsQueryRsp FundsQueryRsp;
	CBMLRecordSet FundsQueryRspList;
	SACommand *pCursor=NULL;
	/* Ӧ����Ϣ */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_Funds.FundsQuery");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* �ʽ��ѯ���� */
		cmd.Param("i_UserID").setAsString()=FundsQueryReq.UserID;
		cmd.Param("i_Firm").setAsString()=FundsQueryReq.Firm;
		cmd.Param("i_Customer").setAsString()=FundsQueryReq.Customer;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* Ӧ����Ϣ */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* �ʽ��ѯӦ�� */
		if(!RspInfo.RspNo){
			RspPackage.PutRecordSet(ETSClearFieldNoFundsQueryRspList,&FundsQueryRspList);
			pCursor = cmd.Param("o_Cursor");
			while(pCursor->FetchNext())
			{
				strcpy(FundsQueryRsp.Firm,pCursor->Field("Firm").asString().GetBuffer(0));
				strcpy(FundsQueryRsp.Customer,pCursor->Field("Customer").asString().GetBuffer(0));
				FundsQueryRsp.ApplyOpen=pCursor->Field("ApplyOpen").asLong();
				FundsQueryRsp.CurOpen=pCursor->Field("CurOpen").asLong();
				FundsQueryRsp.l_margin=pCursor->Field("l_margin").asDouble();
				FundsQueryRsp.l_fundsamt=pCursor->Field("l_fundsamt").asDouble();
				FundsQueryRsp.io_amt=pCursor->Field("io_amt").asDouble();
				FundsQueryRsp.c_margin=pCursor->Field("c_margin").asDouble();
				FundsQueryRsp.add_margin=pCursor->Field("add_margin").asDouble();
				FundsQueryRsp.l_fpl=pCursor->Field("l_fpl").asDouble();
				FundsQueryRsp.open_pl=pCursor->Field("open_pl").asDouble();
				FundsQueryRsp.liq_pl=pCursor->Field("liq_pl").asDouble();
				FundsQueryRsp.ttl_pl=pCursor->Field("ttl_pl").asDouble();
				FundsQueryRsp.comm_amt=pCursor->Field("comm_amt").asDouble();
				FundsQueryRsp.risk_amt=pCursor->Field("risk_amt").asDouble();
				FundsQueryRsp.real_funds=pCursor->Field("real_funds").asDouble();

				if(FundsQueryRspList.Insert(&FundsQueryRsp)<0){
					RspPackage.SetEndFlag(1);
					m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeFundsQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);

					// ����
					RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);
					RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
					RspPackage.PutRecordSet(ETSClearFieldNoFundsQueryRspList,&FundsQueryRspList);
					FundsQueryRspList.Insert(&FundsQueryRsp);
				}
			}
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeFundsQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleFundsQueryReq:���ݿ����ʧ�ܣ�[%s]",(const char*)x.ErrText());

		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		switch(x.ErrNativeCode()){
		case 3114:
			RspInfo.RspNo=ETSClearConstRspNoDBNotReady;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNotReady);
			break;
		case 12571:
			RspInfo.RspNo=ETSClearConstRspNoDBNetworkProblem;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNetworkProblem);
			m_Connection.Disconnect();
			Connect(); // ��������
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:�ع�ʧ�ܣ�[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* Ӧ����Ϣ */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeFundsQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*��Ʒ��ѯ����*/
void CDBProcessor::HandleCommodityQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* ��Ʒ��ѯ���� */
	CETSClearFieldsCommodityQueryReq CommodityQueryReq;
	Package.GetFields(&CommodityQueryReq,ETSClearFieldNoCommodityQueryReq);

	// Response
	CETSClearPackage RspPackage;
	/* ��Ʒ��ѯӦ�� */
	CETSClearFieldsCommodityQueryRsp CommodityQueryRsp;
	CBMLRecordSet CommodityQueryList;
	SACommand *pCursor=NULL;
	/* Ӧ����Ϣ */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_Commodity.CommodityQuery");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* ��Ʒ��ѯ���� */
		cmd.Param("i_UserID").setAsString()=CommodityQueryReq.UserID;
		cmd.Param("i_Market").setAsString()=CommodityQueryReq.Market;
		cmd.Param("i_Commodity").setAsString()=CommodityQueryReq.Commodity;
		cmd.Param("i_Variety").setAsString()=CommodityQueryReq.Variety;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* Ӧ����Ϣ */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* ��Ʒ��ѯӦ�� */
		if(!RspInfo.RspNo){
			RspPackage.PutRecordSet(ETSClearFieldNoCommodityQueryList,&CommodityQueryList);
			pCursor = cmd.Param("o_Cursor");
			while(pCursor->FetchNext())
			{
				strcpy(CommodityQueryRsp.Variety,pCursor->Field("Variety").asString().GetBuffer(0));
				strcpy(CommodityQueryRsp.Market,pCursor->Field("Market").asString().GetBuffer(0));
				strcpy(CommodityQueryRsp.Commodity,pCursor->Field("Commodity").asString().GetBuffer(0));
				strcpy(CommodityQueryRsp.CommodityName,pCursor->Field("CommodityName").asString().GetBuffer(0));
				memcpy(&CommodityQueryRsp.CommodityStatus,pCursor->Field("CommodityStatus").asString().GetBuffer(0),1);
				CommodityQueryRsp.LastDate=pCursor->Field("LastDate").asLong();
				CommodityQueryRsp.SettleDate=pCursor->Field("SettleDate").asLong();
				CommodityQueryRsp.Ctrtsize=pCursor->Field("Ctrtsize").asDouble();
				CommodityQueryRsp.CtrtRatio=pCursor->Field("CtrtRatio").asLong();
				CommodityQueryRsp.Precision=pCursor->Field("Precision").asShort();
				memcpy(&CommodityQueryRsp.MaxSpreadType,pCursor->Field("MaxSpreadType").asString().GetBuffer(0),1);
				CommodityQueryRsp.MaxSpread=pCursor->Field("MaxSpread").asDouble();
				memcpy(&CommodityQueryRsp.TradeCommType,pCursor->Field("TradeCommType").asString().GetBuffer(0),1);
				CommodityQueryRsp.TradeComm=pCursor->Field("TradeComm").asDouble();
				memcpy(&CommodityQueryRsp.SettleCommType,pCursor->Field("SettleCommType").asString().GetBuffer(0),1);
				CommodityQueryRsp.SettleComm=pCursor->Field("SettleComm").asDouble();
				memcpy(&CommodityQueryRsp.CashCommType,pCursor->Field("CashCommType").asString().GetBuffer(0),1);
				CommodityQueryRsp.CashComm=pCursor->Field("CashComm").asDouble();
				memcpy(&CommodityQueryRsp.RiskCommType,pCursor->Field("RiskCommType").asString().GetBuffer(0),1);
				CommodityQueryRsp.RiskComm=pCursor->Field("RiskComm").asDouble();
				memcpy(&CommodityQueryRsp.MarginType,pCursor->Field("MarginType").asString().GetBuffer(0),1);
				CommodityQueryRsp.Margin=pCursor->Field("Margin").asDouble();
				strcpy(CommodityQueryRsp.TradingSec,pCursor->Field("TradingSec").asString().GetBuffer(0));
				CommodityQueryRsp.OrderMinQty=pCursor->Field("OrderMinQty").asLong();
				CommodityQueryRsp.OrderMaxQty=pCursor->Field("OrderMaxQty").asLong();
				CommodityQueryRsp.MaxBuy=pCursor->Field("MaxBuy").asLong();
				CommodityQueryRsp.MaxSell=pCursor->Field("MaxSell").asLong();
				CommodityQueryRsp.PriceLimit=pCursor->Field("PriceLimit").asDouble();
				CommodityQueryRsp.PriceUnit=pCursor->Field("PriceUnit").asDouble();
				CommodityQueryRsp.PrevClear=pCursor->Field("PrevClear").asDouble();
				CommodityQueryRsp.PrevClose=pCursor->Field("PrevClose").asDouble();
				CommodityQueryRsp.TtlOpen=pCursor->Field("TtlOpen").asLong();
				CommodityQueryRsp.SpreadUp=pCursor->Field("SpreadUp").asDouble();
				CommodityQueryRsp.SpreadDown=pCursor->Field("SpreadDown").asDouble();
				CommodityQueryRsp.MatchMtd=pCursor->Field("MatchMtd").asLong();
				strcpy(CommodityQueryRsp.Currency,pCursor->Field("Currency").asString().GetBuffer(0));
				CommodityQueryRsp.Clear=pCursor->Field("Clear").asDouble();
				CommodityQueryRsp.Spread=pCursor->Field("Spread").asDouble();
				memcpy(&CommodityQueryRsp.DeferCommType,pCursor->Field("DeferCommType").asString().GetBuffer(0),1);
				CommodityQueryRsp.DeferComm=pCursor->Field("DeferComm").asDouble();

				if(CommodityQueryList.Insert(&CommodityQueryRsp)<0){
					RspPackage.SetEndFlag(1);
					m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeCommodityQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);

					// ����
					RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);
					RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
					RspPackage.PutRecordSet(ETSClearFieldNoCommodityQueryList,&CommodityQueryList);
					CommodityQueryList.Insert(&CommodityQueryRsp);
				}
			}
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeCommodityQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleCommodityQueryReq:���ݿ����ʧ�ܣ�[%s]",(const char*)x.ErrText());

		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		switch(x.ErrNativeCode()){
		case 3114:
			RspInfo.RspNo=ETSClearConstRspNoDBNotReady;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNotReady);
			break;
		case 12571:
			RspInfo.RspNo=ETSClearConstRspNoDBNetworkProblem;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNetworkProblem);
			m_Connection.Disconnect();
			Connect(); // ��������
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:�ع�ʧ�ܣ�[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* Ӧ����Ϣ */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeCommodityQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*�ֻ����Բ�ѯ����*/
void CDBProcessor::HandleSpotPropertyQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* �ֻ����Բ�ѯ���� */
	CETSClearFieldsSpotPropertyQueryReq SpotPropertyQueryReq;
	Package.GetFields(&SpotPropertyQueryReq,ETSClearFieldNoSpotPropertyQueryReq);

	// Response
	CETSClearPackage RspPackage;
	/* �ֻ����Բ�ѯӦ�� */
	CETSClearFieldsSpotPropertyQueryRsp SpotPropertyQueryRsp;
	CBMLRecordSet SpotPropertyQueryRspList;
	SACommand *pCursor=NULL;
	/* Ӧ����Ϣ */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_SpotProperty.SpotPropertyQuery");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* �ֻ����Բ�ѯ���� */
		cmd.Param("i_UserID").setAsString()=SpotPropertyQueryReq.UserID;
		cmd.Param("i_Commodity").setAsString()=SpotPropertyQueryReq.Commodity;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* Ӧ����Ϣ */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* �ֻ����Բ�ѯӦ�� */
		if(!RspInfo.RspNo){
			RspPackage.PutRecordSet(ETSClearFieldNoSpotPropertyQueryRspList,&SpotPropertyQueryRspList);
			pCursor = cmd.Param("o_Cursor");
			while(pCursor->FetchNext())
			{
				strcpy(SpotPropertyQueryRsp.Market,pCursor->Field("Market").asString().GetBuffer(0));
				strcpy(SpotPropertyQueryRsp.Commodity,pCursor->Field("Commodity").asString().GetBuffer(0));
				strcpy(SpotPropertyQueryRsp.Variety,pCursor->Field("Variety").asString().GetBuffer(0));
				SpotPropertyQueryRsp.NumberProperty=pCursor->Field("NumberProperty").asLong();
				strcpy(SpotPropertyQueryRsp.NameProperty1,pCursor->Field("NameProperty1").asString().GetBuffer(0));
				strcpy(SpotPropertyQueryRsp.NameProperty2,pCursor->Field("NameProperty2").asString().GetBuffer(0));
				strcpy(SpotPropertyQueryRsp.NameProperty3,pCursor->Field("NameProperty3").asString().GetBuffer(0));
				strcpy(SpotPropertyQueryRsp.NameProperty4,pCursor->Field("NameProperty4").asString().GetBuffer(0));
				strcpy(SpotPropertyQueryRsp.NameProperty5,pCursor->Field("NameProperty5").asString().GetBuffer(0));
				strcpy(SpotPropertyQueryRsp.NameProperty6,pCursor->Field("NameProperty6").asString().GetBuffer(0));
				strcpy(SpotPropertyQueryRsp.NameProperty7,pCursor->Field("NameProperty7").asString().GetBuffer(0));
				strcpy(SpotPropertyQueryRsp.NameProperty8,pCursor->Field("NameProperty8").asString().GetBuffer(0));
				strcpy(SpotPropertyQueryRsp.NameProperty9,pCursor->Field("NameProperty9").asString().GetBuffer(0));
				strcpy(SpotPropertyQueryRsp.NameProperty10,pCursor->Field("NameProperty10").asString().GetBuffer(0));

				if(SpotPropertyQueryRspList.Insert(&SpotPropertyQueryRsp)<0){
					RspPackage.SetEndFlag(1);
					m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeSpotPropertyQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);

					// ����
					RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);
					RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
					RspPackage.PutRecordSet(ETSClearFieldNoSpotPropertyQueryRspList,&SpotPropertyQueryRspList);
					SpotPropertyQueryRspList.Insert(&SpotPropertyQueryRsp);
				}
			}
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeSpotPropertyQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleSpotPropertyQueryReq:���ݿ����ʧ�ܣ�[%s]",(const char*)x.ErrText());

		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		switch(x.ErrNativeCode()){
		case 3114:
			RspInfo.RspNo=ETSClearConstRspNoDBNotReady;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNotReady);
			break;
		case 12571:
			RspInfo.RspNo=ETSClearConstRspNoDBNetworkProblem;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNetworkProblem);
			m_Connection.Disconnect();
			Connect(); // ��������
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:�ع�ʧ�ܣ�[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* Ӧ����Ϣ */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeSpotPropertyQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*�ֻ����������б��ѯ����*/
void CDBProcessor::HandleSpotPropertyLookupQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* �ֻ����������б��ѯ���� */
	CETSClearFieldsSpotPropertyLookupQueryReq SpotPropertyLookupQueryReq;
	Package.GetFields(&SpotPropertyLookupQueryReq,ETSClearFieldNoSpotPropertyLookupQueryReq);

	// Response
	CETSClearPackage RspPackage;
	/* �ֻ����������б��ѯӦ�� */
	CETSClearFieldsSpotPropertyLookupQueryRsp SpotPropertyLookupQueryRsp;
	CBMLRecordSet SpotPropertyLookupQueryList;
	SACommand *pCursor=NULL;
	/* Ӧ����Ϣ */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_SpotProperty.SpotPropertyLookupQuery");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* �ֻ����������б��ѯ���� */
		cmd.Param("i_UserID").setAsString()=SpotPropertyLookupQueryReq.UserID;
		cmd.Param("i_Commodity").setAsString()=SpotPropertyLookupQueryReq.Commodity;
		cmd.Param("i_PropertyName").setAsString()=SpotPropertyLookupQueryReq.PropertyName;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* Ӧ����Ϣ */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* �ֻ����������б��ѯӦ�� */
		if(!RspInfo.RspNo){
			RspPackage.PutRecordSet(ETSClearFieldNoSpotPropertyLookupQueryList,&SpotPropertyLookupQueryList);
			pCursor = cmd.Param("o_Cursor");
			while(pCursor->FetchNext())
			{
				strcpy(SpotPropertyLookupQueryRsp.Market,pCursor->Field("Market").asString().GetBuffer(0));
				strcpy(SpotPropertyLookupQueryRsp.Commodity,pCursor->Field("Commodity").asString().GetBuffer(0));
				strcpy(SpotPropertyLookupQueryRsp.Variety,pCursor->Field("Variety").asString().GetBuffer(0));
				strcpy(SpotPropertyLookupQueryRsp.PropertyName,pCursor->Field("PropertyName").asString().GetBuffer(0));
				SpotPropertyLookupQueryRsp.NumberLookup=pCursor->Field("NumberLookup").asLong();
				strcpy(SpotPropertyLookupQueryRsp.Lookup,pCursor->Field("Lookup").asString().GetBuffer(0));

				if(SpotPropertyLookupQueryList.Insert(&SpotPropertyLookupQueryRsp)<0){
					RspPackage.SetEndFlag(1);
					m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeSpotPropertyLookupQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);

					// ����
					RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);
					RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
					RspPackage.PutRecordSet(ETSClearFieldNoSpotPropertyLookupQueryList,&SpotPropertyLookupQueryList);
					SpotPropertyLookupQueryList.Insert(&SpotPropertyLookupQueryRsp);
				}
			}
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeSpotPropertyLookupQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleSpotPropertyLookupQueryReq:���ݿ����ʧ�ܣ�[%s]",(const char*)x.ErrText());

		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		switch(x.ErrNativeCode()){
		case 3114:
			RspInfo.RspNo=ETSClearConstRspNoDBNotReady;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNotReady);
			break;
		case 12571:
			RspInfo.RspNo=ETSClearConstRspNoDBNetworkProblem;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNetworkProblem);
			m_Connection.Disconnect();
			Connect(); // ��������
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:�ع�ʧ�ܣ�[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* Ӧ����Ϣ */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeSpotPropertyLookupQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*�ֻ������ص��ѯ����*/
void CDBProcessor::HandleLocationQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* �ֻ������ص��ѯ���� */
	CETSClearFieldsLocationQueryReq LocationQueryReq;
	Package.GetFields(&LocationQueryReq,ETSClearFieldNoLocationQueryReq);

	// Response
	CETSClearPackage RspPackage;
	/* �ֻ������ص��ѯӦ�� */
	CETSClearFieldsLocationQueryRsp LocationQueryRsp;
	CBMLRecordSet LocationQueryList;
	SACommand *pCursor=NULL;
	/* Ӧ����Ϣ */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_Location.LocationQuery");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* �ֻ������ص��ѯ���� */
		cmd.Param("i_UserID").setAsString()=LocationQueryReq.UserID;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* Ӧ����Ϣ */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* �ֻ������ص��ѯӦ�� */
		if(!RspInfo.RspNo){
			RspPackage.PutRecordSet(ETSClearFieldNoLocationQueryList,&LocationQueryList);
			pCursor = cmd.Param("o_Cursor");
			while(pCursor->FetchNext())
			{
				strcpy(LocationQueryRsp.Location,pCursor->Field("Location").asString().GetBuffer(0));
				strcpy(LocationQueryRsp.LocationName,pCursor->Field("LocationName").asString().GetBuffer(0));
				memcpy(&LocationQueryRsp.LocationStatus,pCursor->Field("LocationStatus").asString().GetBuffer(0),1);

				if(LocationQueryList.Insert(&LocationQueryRsp)<0){
					RspPackage.SetEndFlag(1);
					m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeLocationQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);

					// ����
					RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);
					RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
					RspPackage.PutRecordSet(ETSClearFieldNoLocationQueryList,&LocationQueryList);
					LocationQueryList.Insert(&LocationQueryRsp);
				}
			}
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeLocationQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleLocationQueryReq:���ݿ����ʧ�ܣ�[%s]",(const char*)x.ErrText());

		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		switch(x.ErrNativeCode()){
		case 3114:
			RspInfo.RspNo=ETSClearConstRspNoDBNotReady;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNotReady);
			break;
		case 12571:
			RspInfo.RspNo=ETSClearConstRspNoDBNetworkProblem;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNetworkProblem);
			m_Connection.Disconnect();
			Connect(); // ��������
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:�ع�ʧ�ܣ�[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* Ӧ����Ϣ */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeLocationQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*��־��ѯ����*/
void CDBProcessor::HandleLogQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* ��־��ѯ���� */
	CETSClearFieldsLogQueryReq LogQueryReq;
	Package.GetFields(&LogQueryReq,ETSClearFieldNoLogQueryReq);

	// Response
	CETSClearPackage RspPackage;
	/* ��־��ѯӦ�� */
	CETSClearFieldsLogQueryRsp LogQueryRsp;
	CBMLRecordSet LogList;
	SACommand *pCursor=NULL;
	/* Ӧ����Ϣ */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_Log.LogQuery");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* ��־��ѯ���� */
		cmd.Param("i_UserID").setAsString()=LogQueryReq.UserID;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* Ӧ����Ϣ */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* ��־��ѯӦ�� */
		if(!RspInfo.RspNo){
			RspPackage.PutRecordSet(ETSClearFieldNoLogList,&LogList);
			pCursor = cmd.Param("o_Cursor");
			while(pCursor->FetchNext())
			{
				strcpy(LogQueryRsp.ProcedureName,pCursor->Field("ProcedureName").asString().GetBuffer(0));
				strcpy(LogQueryRsp.ProcedureParam,pCursor->Field("ProcedureParam").asString().GetBuffer(0));
				LogQueryRsp.ProcedureRspNo=pCursor->Field("ProcedureRspNo").asShort();
				strcpy(LogQueryRsp.ProcedureRspDesc,pCursor->Field("ProcedureRspDesc").asString().GetBuffer(0));
				strcpy(LogQueryRsp.ProcedureTMS,pCursor->Field("ProcedureTMS").asString().GetBuffer(0));

				if(LogList.Insert(&LogQueryRsp)<0){
					RspPackage.SetEndFlag(1);
					m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeLogQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);

					// ����
					RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);
					RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
					RspPackage.PutRecordSet(ETSClearFieldNoLogList,&LogList);
					LogList.Insert(&LogQueryRsp);
				}
			}
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeLogQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleLogQueryReq:���ݿ����ʧ�ܣ�[%s]",(const char*)x.ErrText());

		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		switch(x.ErrNativeCode()){
		case 3114:
			RspInfo.RspNo=ETSClearConstRspNoDBNotReady;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNotReady);
			break;
		case 12571:
			RspInfo.RspNo=ETSClearConstRspNoDBNetworkProblem;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNetworkProblem);
			m_Connection.Disconnect();
			Connect(); // ��������
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:�ع�ʧ�ܣ�[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* Ӧ����Ϣ */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeLogQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*��ѯ��Ա����*/
void CDBProcessor::HandleFirmQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* ��ѯ��Ա���� */
	CETSClearFieldsFirmQueryReq FirmQueryReq;
	Package.GetFields(&FirmQueryReq,ETSClearFieldNoFirmQueryReq);

	// Response
	CETSClearPackage RspPackage;
	/* ��ѯ��ԱӦ�� */
	CETSClearFieldsFirmQueryRsp FirmQueryRsp;
	CBMLRecordSet FirmQueryRspList;
	SACommand *pCursor=NULL;
	/* Ӧ����Ϣ */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_Firm.FirmQuery");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* ��ѯ��Ա���� */
		cmd.Param("i_UserID").setAsString()=FirmQueryReq.UserID;
		cmd.Param("i_Firm").setAsString()=FirmQueryReq.Firm;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* Ӧ����Ϣ */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* ��ѯ��ԱӦ�� */
		if(!RspInfo.RspNo){
			RspPackage.PutRecordSet(ETSClearFieldNoFirmQueryRspList,&FirmQueryRspList);
			pCursor = cmd.Param("o_Cursor");
			while(pCursor->FetchNext())
			{
				strcpy(FirmQueryRsp.Firm,pCursor->Field("Firm").asString().GetBuffer(0));
				strcpy(FirmQueryRsp.FirmName,pCursor->Field("FirmName").asString().GetBuffer(0));
				memcpy(&FirmQueryRsp.FirmStatus,pCursor->Field("FirmStatus").asString().GetBuffer(0),1);

				if(FirmQueryRspList.Insert(&FirmQueryRsp)<0){
					RspPackage.SetEndFlag(1);
					m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeFirmQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);

					// ����
					RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);
					RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
					RspPackage.PutRecordSet(ETSClearFieldNoFirmQueryRspList,&FirmQueryRspList);
					FirmQueryRspList.Insert(&FirmQueryRsp);
				}
			}
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeFirmQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleFirmQueryReq:���ݿ����ʧ�ܣ�[%s]",(const char*)x.ErrText());

		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		switch(x.ErrNativeCode()){
		case 3114:
			RspInfo.RspNo=ETSClearConstRspNoDBNotReady;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNotReady);
			break;
		case 12571:
			RspInfo.RspNo=ETSClearConstRspNoDBNetworkProblem;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNetworkProblem);
			m_Connection.Disconnect();
			Connect(); // ��������
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:�ع�ʧ�ܣ�[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* Ӧ����Ϣ */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeFirmQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*���ӻ�Ա����*/
void CDBProcessor::HandleFirmAddReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* ���ӻ�Ա���� */
	CETSClearFieldsFirmAddReq FirmAddReq;
	Package.GetFields(&FirmAddReq,ETSClearFieldNoFirmAddReq);

	// Response
	CETSClearPackage RspPackage;
	/* ���ӻ�ԱӦ�� */
	CETSClearFieldsFirmAddRsp FirmAddRsp;
	/* Ӧ����Ϣ */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_Firm.FirmAdd");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* ���ӻ�Ա���� */
		cmd.Param("i_UserID").setAsString()=FirmAddReq.UserID;
		cmd.Param("i_Firm").setAsString()=FirmAddReq.Firm;
		cmd.Param("i_FirmName").setAsString()=FirmAddReq.FirmName;
		cmd.Param("i_MaxOpen").setAsLong()=FirmAddReq.MaxOpen;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* Ӧ����Ϣ */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* ���ӻ�ԱӦ�� */
		if(!RspInfo.RspNo){
			strcpy(FirmAddRsp.UserID,cmd.Param("o_UserID").asString().GetBuffer(0));
			RspPackage.PutFields(&FirmAddRsp,ETSClearFieldNoFirmAddRsp);
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeFirmAddRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleFirmAddReq:���ݿ����ʧ�ܣ�[%s]",(const char*)x.ErrText());

		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		switch(x.ErrNativeCode()){
		case 3114:
			RspInfo.RspNo=ETSClearConstRspNoDBNotReady;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNotReady);
			break;
		case 12571:
			RspInfo.RspNo=ETSClearConstRspNoDBNetworkProblem;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNetworkProblem);
			m_Connection.Disconnect();
			Connect(); // ��������
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:�ع�ʧ�ܣ�[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* Ӧ����Ϣ */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeFirmAddRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*�޸Ļ�Ա����*/
void CDBProcessor::HandleFirmModifyReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* �޸Ļ�Ա���� */
	CETSClearFieldsFirmModifyReq FirmModifyReq;
	Package.GetFields(&FirmModifyReq,ETSClearFieldNoFirmModifyReq);

	// Response
	CETSClearPackage RspPackage;
	/* �޸Ļ�ԱӦ�� */
	CETSClearFieldsFirmModifyRsp FirmModifyRsp;
	/* Ӧ����Ϣ */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_Firm.FirmModify");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* �޸Ļ�Ա���� */
		cmd.Param("i_UserID").setAsString()=FirmModifyReq.UserID;
		cmd.Param("i_Firm").setAsString()=FirmModifyReq.Firm;
		cmd.Param("i_FirmName").setAsString()=FirmModifyReq.FirmName;
		cmd.Param("i_FirmStatus").setAsString()=FirmModifyReq.FirmStatus;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* Ӧ����Ϣ */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* �޸Ļ�ԱӦ�� */
		if(!RspInfo.RspNo){
			strcpy(FirmModifyRsp.UserID,cmd.Param("o_UserID").asString().GetBuffer(0));
			RspPackage.PutFields(&FirmModifyRsp,ETSClearFieldNoFirmModifyRsp);
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeFirmModifyRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleFirmModifyReq:���ݿ����ʧ�ܣ�[%s]",(const char*)x.ErrText());

		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		switch(x.ErrNativeCode()){
		case 3114:
			RspInfo.RspNo=ETSClearConstRspNoDBNotReady;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNotReady);
			break;
		case 12571:
			RspInfo.RspNo=ETSClearConstRspNoDBNetworkProblem;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNetworkProblem);
			m_Connection.Disconnect();
			Connect(); // ��������
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:�ع�ʧ�ܣ�[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* Ӧ����Ϣ */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeFirmModifyRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*ɾ����Ա����*/
void CDBProcessor::HandleFirmDeleteReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* ɾ����Ա���� */
	CETSClearFieldsFirmDeleteReq FirmDeleteReq;
	Package.GetFields(&FirmDeleteReq,ETSClearFieldNoFirmDeleteReq);

	// Response
	CETSClearPackage RspPackage;
	/* ɾ����ԱӦ�� */
	CETSClearFieldsFirmDeleteRsp FirmDeleteRsp;
	/* Ӧ����Ϣ */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_Firm.FirmDelete");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* ɾ����Ա���� */
		cmd.Param("i_UserID").setAsString()=FirmDeleteReq.UserID;
		cmd.Param("i_Firm").setAsString()=FirmDeleteReq.Firm;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* Ӧ����Ϣ */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* ɾ����ԱӦ�� */
		if(!RspInfo.RspNo){
			strcpy(FirmDeleteRsp.UserID,cmd.Param("o_UserID").asString().GetBuffer(0));
			RspPackage.PutFields(&FirmDeleteRsp,ETSClearFieldNoFirmDeleteRsp);
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeFirmDeleteRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleFirmDeleteReq:���ݿ����ʧ�ܣ�[%s]",(const char*)x.ErrText());

		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		switch(x.ErrNativeCode()){
		case 3114:
			RspInfo.RspNo=ETSClearConstRspNoDBNotReady;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNotReady);
			break;
		case 12571:
			RspInfo.RspNo=ETSClearConstRspNoDBNetworkProblem;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNetworkProblem);
			m_Connection.Disconnect();
			Connect(); // ��������
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:�ع�ʧ�ܣ�[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* Ӧ����Ϣ */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeFirmDeleteRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*��ѯ����Ա����*/
void CDBProcessor::HandleTraderQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* ��ѯ����Ա���� */
	CETSClearFieldsTraderQueryReq TraderQueryReq;
	Package.GetFields(&TraderQueryReq,ETSClearFieldNoTraderQueryReq);

	// Response
	CETSClearPackage RspPackage;
	/* ��ѯ����ԱӦ�� */
	CETSClearFieldsTraderQueryRsp TraderQueryRsp;
	CBMLRecordSet TraderQueryRspList;
	SACommand *pCursor=NULL;
	/* Ӧ����Ϣ */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_Trader.TraderQuery");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* ��ѯ����Ա���� */
		cmd.Param("i_UserID").setAsString()=TraderQueryReq.UserID;
		cmd.Param("i_TraderID").setAsString()=TraderQueryReq.TraderID;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* Ӧ����Ϣ */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* ��ѯ����ԱӦ�� */
		if(!RspInfo.RspNo){
			RspPackage.PutRecordSet(ETSClearFieldNoTraderQueryRspList,&TraderQueryRspList);
			pCursor = cmd.Param("o_Cursor");
			while(pCursor->FetchNext())
			{
				strcpy(TraderQueryRsp.TraderID,pCursor->Field("TraderID").asString().GetBuffer(0));
				strcpy(TraderQueryRsp.TraderName,pCursor->Field("TraderName").asString().GetBuffer(0));
				strcpy(TraderQueryRsp.Password,pCursor->Field("Password").asString().GetBuffer(0));
				strcpy(TraderQueryRsp.Firm,pCursor->Field("Firm").asString().GetBuffer(0));
				memcpy(&TraderQueryRsp.TraderStatus,pCursor->Field("TraderStatus").asString().GetBuffer(0),1);
				strcpy(TraderQueryRsp.NWAddr,pCursor->Field("NWAddr").asString().GetBuffer(0));
				TraderQueryRsp.Permission=pCursor->Field("Permission").asLong();
				TraderQueryRsp.NumLink=pCursor->Field("NumLink").asLong();

				if(TraderQueryRspList.Insert(&TraderQueryRsp)<0){
					RspPackage.SetEndFlag(1);
					m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeTraderQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);

					// ����
					RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);
					RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
					RspPackage.PutRecordSet(ETSClearFieldNoTraderQueryRspList,&TraderQueryRspList);
					TraderQueryRspList.Insert(&TraderQueryRsp);
				}
			}
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeTraderQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleTraderQueryReq:���ݿ����ʧ�ܣ�[%s]",(const char*)x.ErrText());

		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		switch(x.ErrNativeCode()){
		case 3114:
			RspInfo.RspNo=ETSClearConstRspNoDBNotReady;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNotReady);
			break;
		case 12571:
			RspInfo.RspNo=ETSClearConstRspNoDBNetworkProblem;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNetworkProblem);
			m_Connection.Disconnect();
			Connect(); // ��������
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:�ع�ʧ�ܣ�[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* Ӧ����Ϣ */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeTraderQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*���ӽ���Ա����*/
void CDBProcessor::HandleTraderAddReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* ���ӽ���Ա���� */
	CETSClearFieldsTraderAddReq TraderAddReq;
	Package.GetFields(&TraderAddReq,ETSClearFieldNoTraderAddReq);

	// Response
	CETSClearPackage RspPackage;
	/* ���ӽ���ԱӦ�� */
	CETSClearFieldsTraderAddRsp TraderAddRsp;
	/* Ӧ����Ϣ */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_Trader.TraderAdd");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* ���ӽ���Ա���� */
		cmd.Param("i_UserID").setAsString()=TraderAddReq.UserID;
		cmd.Param("i_TraderID").setAsString()=TraderAddReq.TraderID;
		cmd.Param("i_TraderName").setAsString()=TraderAddReq.TraderName;
		cmd.Param("i_Password").setAsString()=TraderAddReq.Password;
		cmd.Param("i_Firm").setAsString()=TraderAddReq.Firm;
		cmd.Param("i_TraderStatus").setAsString()=TraderAddReq.TraderStatus;
		cmd.Param("i_NWAddr").setAsString()=TraderAddReq.NWAddr;
		cmd.Param("i_Permission").setAsLong()=TraderAddReq.Permission;
		cmd.Param("i_NumLink").setAsLong()=TraderAddReq.NumLink;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* Ӧ����Ϣ */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* ���ӽ���ԱӦ�� */
		if(!RspInfo.RspNo){
			strcpy(TraderAddRsp.UserID,cmd.Param("o_UserID").asString().GetBuffer(0));
			RspPackage.PutFields(&TraderAddRsp,ETSClearFieldNoTraderAddRsp);
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeTraderAddRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleTraderAddReq:���ݿ����ʧ�ܣ�[%s]",(const char*)x.ErrText());

		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		switch(x.ErrNativeCode()){
		case 3114:
			RspInfo.RspNo=ETSClearConstRspNoDBNotReady;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNotReady);
			break;
		case 12571:
			RspInfo.RspNo=ETSClearConstRspNoDBNetworkProblem;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNetworkProblem);
			m_Connection.Disconnect();
			Connect(); // ��������
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:�ع�ʧ�ܣ�[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* Ӧ����Ϣ */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeTraderAddRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*�޸Ľ���Ա����*/
void CDBProcessor::HandleTraderModifyReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* �޸Ľ���Ա���� */
	CETSClearFieldsTraderModifyReq TraderModifyReq;
	Package.GetFields(&TraderModifyReq,ETSClearFieldNoTraderModifyReq);

	// Response
	CETSClearPackage RspPackage;
	/* �޸Ľ���ԱӦ�� */
	CETSClearFieldsTraderModifyRsp TraderModifyRsp;
	/* Ӧ����Ϣ */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_Trader.TraderModify");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* �޸Ľ���Ա���� */
		cmd.Param("i_UserID").setAsString()=TraderModifyReq.UserID;
		cmd.Param("i_TraderID").setAsString()=TraderModifyReq.TraderID;
		cmd.Param("i_TraderName").setAsString()=TraderModifyReq.TraderName;
		cmd.Param("i_Password").setAsString()=TraderModifyReq.Password;
		cmd.Param("i_Firm").setAsString()=TraderModifyReq.Firm;
		cmd.Param("i_TraderStatus").setAsString()=TraderModifyReq.TraderStatus;
		cmd.Param("i_NWAddr").setAsString()=TraderModifyReq.NWAddr;
		cmd.Param("i_Permission").setAsLong()=TraderModifyReq.Permission;
		cmd.Param("i_NumLink").setAsLong()=TraderModifyReq.NumLink;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* Ӧ����Ϣ */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* �޸Ľ���ԱӦ�� */
		if(!RspInfo.RspNo){
			strcpy(TraderModifyRsp.UserID,cmd.Param("o_UserID").asString().GetBuffer(0));
			RspPackage.PutFields(&TraderModifyRsp,ETSClearFieldNoTraderModifyRsp);
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeTraderModifyRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleTraderModifyReq:���ݿ����ʧ�ܣ�[%s]",(const char*)x.ErrText());

		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		switch(x.ErrNativeCode()){
		case 3114:
			RspInfo.RspNo=ETSClearConstRspNoDBNotReady;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNotReady);
			break;
		case 12571:
			RspInfo.RspNo=ETSClearConstRspNoDBNetworkProblem;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNetworkProblem);
			m_Connection.Disconnect();
			Connect(); // ��������
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:�ع�ʧ�ܣ�[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* Ӧ����Ϣ */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeTraderModifyRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*ɾ������Ա����*/
void CDBProcessor::HandleTraderDeleteReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* ɾ������Ա���� */
	CETSClearFieldsTraderDeleteReq TraderDeleteReq;
	Package.GetFields(&TraderDeleteReq,ETSClearFieldNoTraderDeleteReq);

	// Response
	CETSClearPackage RspPackage;
	/* ɾ������ԱӦ�� */
	CETSClearFieldsTraderDeleteRsp TraderDeleteRsp;
	/* Ӧ����Ϣ */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_Trader.TraderDelete");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* ɾ������Ա���� */
		cmd.Param("i_UserID").setAsString()=TraderDeleteReq.UserID;
		cmd.Param("i_TraderID").setAsString()=TraderDeleteReq.TraderID;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* Ӧ����Ϣ */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* ɾ������ԱӦ�� */
		if(!RspInfo.RspNo){
			strcpy(TraderDeleteRsp.UserID,cmd.Param("o_UserID").asString().GetBuffer(0));
			RspPackage.PutFields(&TraderDeleteRsp,ETSClearFieldNoTraderDeleteRsp);
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeTraderDeleteRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleTraderDeleteReq:���ݿ����ʧ�ܣ�[%s]",(const char*)x.ErrText());

		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		switch(x.ErrNativeCode()){
		case 3114:
			RspInfo.RspNo=ETSClearConstRspNoDBNotReady;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNotReady);
			break;
		case 12571:
			RspInfo.RspNo=ETSClearConstRspNoDBNetworkProblem;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNetworkProblem);
			m_Connection.Disconnect();
			Connect(); // ��������
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:�ع�ʧ�ܣ�[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* Ӧ����Ϣ */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeTraderDeleteRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*��ѯ�ͻ�����*/
void CDBProcessor::HandleCustomerQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* ��ѯ�ͻ����� */
	CETSClearFieldsCustomerQueryReq CustomerQueryReq;
	Package.GetFields(&CustomerQueryReq,ETSClearFieldNoCustomerQueryReq);

	// Response
	CETSClearPackage RspPackage;
	/* ��ѯ�ͻ�Ӧ�� */
	CETSClearFieldsCustomerQueryRsp CustomerQueryRsp;
	CBMLRecordSet CustomerQueryRspList;
	SACommand *pCursor=NULL;
	/* Ӧ����Ϣ */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_Customer.CustomerQuery");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* ��ѯ�ͻ����� */
		cmd.Param("i_UserID").setAsString()=CustomerQueryReq.UserID;
		cmd.Param("i_TraderID").setAsString()=CustomerQueryReq.TraderID;
		cmd.Param("i_Firm").setAsString()=CustomerQueryReq.Firm;
		cmd.Param("i_Customer").setAsString()=CustomerQueryReq.Customer;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* Ӧ����Ϣ */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* ��ѯ�ͻ�Ӧ�� */
		if(!RspInfo.RspNo){
			RspPackage.PutRecordSet(ETSClearFieldNoCustomerQueryRspList,&CustomerQueryRspList);
			pCursor = cmd.Param("o_Cursor");
			while(pCursor->FetchNext())
			{
				strcpy(CustomerQueryRsp.Customer,pCursor->Field("Customer").asString().GetBuffer(0));
				strcpy(CustomerQueryRsp.CustomerName,pCursor->Field("CustomerName").asString().GetBuffer(0));
				strcpy(CustomerQueryRsp.Firm,pCursor->Field("Firm").asString().GetBuffer(0));
				strcpy(CustomerQueryRsp.TraderID,pCursor->Field("TraderID").asString().GetBuffer(0));
				memcpy(&CustomerQueryRsp.CustomerStatus,pCursor->Field("CustomerStatus").asString().GetBuffer(0),1);
				memcpy(&CustomerQueryRsp.ClearFlag,pCursor->Field("ClearFlag").asString().GetBuffer(0),1);
				CustomerQueryRsp.CheckFunds=pCursor->Field("CheckFunds").asDouble();
				CustomerQueryRsp.CusMinFunds=pCursor->Field("CusMinFunds").asDouble();

				if(CustomerQueryRspList.Insert(&CustomerQueryRsp)<0){
					RspPackage.SetEndFlag(1);
					m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeCustomerQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);

					// ����
					RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);
					RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
					RspPackage.PutRecordSet(ETSClearFieldNoCustomerQueryRspList,&CustomerQueryRspList);
					CustomerQueryRspList.Insert(&CustomerQueryRsp);
				}
			}
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeCustomerQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleCustomerQueryReq:���ݿ����ʧ�ܣ�[%s]",(const char*)x.ErrText());

		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		switch(x.ErrNativeCode()){
		case 3114:
			RspInfo.RspNo=ETSClearConstRspNoDBNotReady;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNotReady);
			break;
		case 12571:
			RspInfo.RspNo=ETSClearConstRspNoDBNetworkProblem;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNetworkProblem);
			m_Connection.Disconnect();
			Connect(); // ��������
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:�ع�ʧ�ܣ�[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* Ӧ����Ϣ */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeCustomerQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*���ӿͻ�����*/
void CDBProcessor::HandleCustomerAddReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* ���ӿͻ����� */
	CETSClearFieldsCustomerAddReq CustomerAddReq;
	Package.GetFields(&CustomerAddReq,ETSClearFieldNoCustomerAddReq);

	// Response
	CETSClearPackage RspPackage;
	/* ���ӿͻ�Ӧ�� */
	CETSClearFieldsCustomerAddRsp CustomerAddRsp;
	/* Ӧ����Ϣ */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_Customer.CustomerAdd");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* ���ӿͻ����� */
		cmd.Param("i_UserID").setAsString()=CustomerAddReq.UserID;
		cmd.Param("i_Customer").setAsString()=CustomerAddReq.Customer;
		cmd.Param("i_CustomerName").setAsString()=CustomerAddReq.CustomerName;
		cmd.Param("i_Firm").setAsString()=CustomerAddReq.Firm;
		cmd.Param("i_TraderID").setAsString()=CustomerAddReq.TraderID;
		cmd.Param("i_CustomerStatus").setAsString()=CustomerAddReq.CustomerStatus;
		cmd.Param("i_ClearFlag").setAsString()=CustomerAddReq.ClearFlag;
		cmd.Param("i_CheckFunds").setAsDouble()=CustomerAddReq.CheckFunds;
		cmd.Param("i_CusMinFunds").setAsDouble()=CustomerAddReq.CusMinFunds;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* Ӧ����Ϣ */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* ���ӿͻ�Ӧ�� */
		if(!RspInfo.RspNo){
			strcpy(CustomerAddRsp.UserID,cmd.Param("o_UserID").asString().GetBuffer(0));
			RspPackage.PutFields(&CustomerAddRsp,ETSClearFieldNoCustomerAddRsp);
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeCustomerAddRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleCustomerAddReq:���ݿ����ʧ�ܣ�[%s]",(const char*)x.ErrText());

		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		switch(x.ErrNativeCode()){
		case 3114:
			RspInfo.RspNo=ETSClearConstRspNoDBNotReady;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNotReady);
			break;
		case 12571:
			RspInfo.RspNo=ETSClearConstRspNoDBNetworkProblem;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNetworkProblem);
			m_Connection.Disconnect();
			Connect(); // ��������
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:�ع�ʧ�ܣ�[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* Ӧ����Ϣ */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeCustomerAddRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*�޸Ŀͻ�����*/
void CDBProcessor::HandleCustomerModifyReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* �޸Ŀͻ����� */
	CETSClearFieldsCustomerModifyReq CustomerModifyReq;
	Package.GetFields(&CustomerModifyReq,ETSClearFieldNoCustomerModifyReq);

	// Response
	CETSClearPackage RspPackage;
	/* �޸Ŀͻ�Ӧ�� */
	CETSClearFieldsCustomerModifyRsp CustomerModifyRsp;
	/* Ӧ����Ϣ */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_Customer.CustomerModify");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* �޸Ŀͻ����� */
		cmd.Param("i_UserID").setAsString()=CustomerModifyReq.UserID;
		cmd.Param("i_Customer").setAsString()=CustomerModifyReq.Customer;
		cmd.Param("i_CustomerName").setAsString()=CustomerModifyReq.CustomerName;
		cmd.Param("i_Firm").setAsString()=CustomerModifyReq.Firm;
		cmd.Param("i_TraderID").setAsString()=CustomerModifyReq.TraderID;
		cmd.Param("i_CustomerStatus").setAsString()=CustomerModifyReq.CustomerStatus;
		cmd.Param("i_ClearFlag").setAsString()=CustomerModifyReq.ClearFlag;
		cmd.Param("i_CheckFunds").setAsDouble()=CustomerModifyReq.CheckFunds;
		cmd.Param("i_CusMinFunds").setAsDouble()=CustomerModifyReq.CusMinFunds;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* Ӧ����Ϣ */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* �޸Ŀͻ�Ӧ�� */
		if(!RspInfo.RspNo){
			strcpy(CustomerModifyRsp.UserID,cmd.Param("o_UserID").asString().GetBuffer(0));
			RspPackage.PutFields(&CustomerModifyRsp,ETSClearFieldNoCustomerModifyRsp);
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeCustomerModifyRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleCustomerModifyReq:���ݿ����ʧ�ܣ�[%s]",(const char*)x.ErrText());

		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		switch(x.ErrNativeCode()){
		case 3114:
			RspInfo.RspNo=ETSClearConstRspNoDBNotReady;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNotReady);
			break;
		case 12571:
			RspInfo.RspNo=ETSClearConstRspNoDBNetworkProblem;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNetworkProblem);
			m_Connection.Disconnect();
			Connect(); // ��������
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:�ع�ʧ�ܣ�[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* Ӧ����Ϣ */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeCustomerModifyRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*ɾ���ͻ�����*/
void CDBProcessor::HandleCustomerDeleteReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* ɾ���ͻ����� */
	CETSClearFieldsCustomerDeleteReq CustomerDeleteReq;
	Package.GetFields(&CustomerDeleteReq,ETSClearFieldNoCustomerDeleteReq);

	// Response
	CETSClearPackage RspPackage;
	/* ɾ���ͻ�Ӧ�� */
	CETSClearFieldsCustomerDeleteRsp CustomerDeleteRsp;
	/* Ӧ����Ϣ */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_Customer.CustomerDelete");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* ɾ���ͻ����� */
		cmd.Param("i_UserID").setAsString()=CustomerDeleteReq.UserID;
		cmd.Param("i_Customer").setAsString()=CustomerDeleteReq.Customer;
		cmd.Param("i_Firm").setAsString()=CustomerDeleteReq.Firm;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* Ӧ����Ϣ */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* ɾ���ͻ�Ӧ�� */
		if(!RspInfo.RspNo){
			strcpy(CustomerDeleteRsp.UserID,cmd.Param("o_UserID").asString().GetBuffer(0));
			RspPackage.PutFields(&CustomerDeleteRsp,ETSClearFieldNoCustomerDeleteRsp);
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeCustomerDeleteRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleCustomerDeleteReq:���ݿ����ʧ�ܣ�[%s]",(const char*)x.ErrText());

		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		switch(x.ErrNativeCode()){
		case 3114:
			RspInfo.RspNo=ETSClearConstRspNoDBNotReady;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNotReady);
			break;
		case 12571:
			RspInfo.RspNo=ETSClearConstRspNoDBNetworkProblem;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNetworkProblem);
			m_Connection.Disconnect();
			Connect(); // ��������
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:�ع�ʧ�ܣ�[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* Ӧ����Ϣ */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeCustomerDeleteRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*��ѯ����Ա����*/
void CDBProcessor::HandleOperQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* ��ѯ����Ա���� */
	CETSClearFieldsOperQueryReq OperQueryReq;
	Package.GetFields(&OperQueryReq,ETSClearFieldNoOperQueryReq);

	// Response
	CETSClearPackage RspPackage;
	/* ��ѯ����ԱӦ�� */
	CETSClearFieldsOperQueryRsp OperQueryRsp;
	CBMLRecordSet OperQueryRspList;
	SACommand *pCursor=NULL;
	/* Ӧ����Ϣ */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_Operator.OperQuery");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* ��ѯ����Ա���� */
		cmd.Param("i_UserID").setAsString()=OperQueryReq.UserID;
		cmd.Param("i_OperID").setAsString()=OperQueryReq.OperID;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* Ӧ����Ϣ */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* ��ѯ����ԱӦ�� */
		if(!RspInfo.RspNo){
			RspPackage.PutRecordSet(ETSClearFieldNoOperQueryRspList,&OperQueryRspList);
			pCursor = cmd.Param("o_Cursor");
			while(pCursor->FetchNext())
			{
				strcpy(OperQueryRsp.OperID,pCursor->Field("OperID").asString().GetBuffer(0));
				strcpy(OperQueryRsp.OperName,pCursor->Field("OperName").asString().GetBuffer(0));

				if(OperQueryRspList.Insert(&OperQueryRsp)<0){
					RspPackage.SetEndFlag(1);
					m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeOperQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);

					// ����
					RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);
					RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
					RspPackage.PutRecordSet(ETSClearFieldNoOperQueryRspList,&OperQueryRspList);
					OperQueryRspList.Insert(&OperQueryRsp);
				}
			}
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeOperQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleOperQueryReq:���ݿ����ʧ�ܣ�[%s]",(const char*)x.ErrText());

		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		switch(x.ErrNativeCode()){
		case 3114:
			RspInfo.RspNo=ETSClearConstRspNoDBNotReady;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNotReady);
			break;
		case 12571:
			RspInfo.RspNo=ETSClearConstRspNoDBNetworkProblem;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNetworkProblem);
			m_Connection.Disconnect();
			Connect(); // ��������
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:�ع�ʧ�ܣ�[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* Ӧ����Ϣ */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeOperQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*�����г�����*/
void CDBProcessor::HandleMarketAddReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* �����г����� */
	CETSClearFieldsMarketAddReq MarketAddReq;
	Package.GetFields(&MarketAddReq,ETSClearFieldNoMarketAddReq);

	// Response
	CETSClearPackage RspPackage;
	/* �����г�Ӧ�� */
	CETSClearFieldsMarketAddRsp MarketAddRsp;
	/* Ӧ����Ϣ */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_Market.MarketAdd");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* �����г����� */
		cmd.Param("i_UserID").setAsString()=MarketAddReq.UserID;
		cmd.Param("i_Market").setAsString()=MarketAddReq.Market;
		cmd.Param("i_MarketName").setAsString()=MarketAddReq.MarketName;
		cmd.Param("i_SpotType").setAsString()=MarketAddReq.SpotType;
		cmd.Param("i_TaxRate").setAsDouble()=MarketAddReq.TaxRate;
		cmd.Param("i_ExchangeID").setAsString()=MarketAddReq.ExchangeID;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* Ӧ����Ϣ */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* �����г�Ӧ�� */
		if(!RspInfo.RspNo){
			strcpy(MarketAddRsp.UserID,cmd.Param("o_UserID").asString().GetBuffer(0));
			RspPackage.PutFields(&MarketAddRsp,ETSClearFieldNoMarketAddRsp);
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeMarketAddRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleMarketAddReq:���ݿ����ʧ�ܣ�[%s]",(const char*)x.ErrText());

		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		switch(x.ErrNativeCode()){
		case 3114:
			RspInfo.RspNo=ETSClearConstRspNoDBNotReady;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNotReady);
			break;
		case 12571:
			RspInfo.RspNo=ETSClearConstRspNoDBNetworkProblem;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNetworkProblem);
			m_Connection.Disconnect();
			Connect(); // ��������
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:�ع�ʧ�ܣ�[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* Ӧ����Ϣ */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeMarketAddRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*�޸��г�����*/
void CDBProcessor::HandleMarketModifyReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* �޸��г����� */
	CETSClearFieldsMarketModifyReq MarketModifyReq;
	Package.GetFields(&MarketModifyReq,ETSClearFieldNoMarketModifyReq);

	// Response
	CETSClearPackage RspPackage;
	/* �޸��г�Ӧ�� */
	CETSClearFieldsMarketModifyRsp MarketModifyRsp;
	/* Ӧ����Ϣ */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_Market.MarketModify");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* �޸��г����� */
		cmd.Param("i_UserID").setAsString()=MarketModifyReq.UserID;
		cmd.Param("i_Market").setAsString()=MarketModifyReq.Market;
		cmd.Param("i_MarketName").setAsString()=MarketModifyReq.MarketName;
		cmd.Param("i_MarketStatus").setAsString()=MarketModifyReq.MarketStatus;
		cmd.Param("i_SpotType").setAsString()=MarketModifyReq.SpotType;
		cmd.Param("i_TaxRate").setAsDouble()=MarketModifyReq.TaxRate;
		cmd.Param("i_ExchangeID").setAsString()=MarketModifyReq.ExchangeID;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* Ӧ����Ϣ */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* �޸��г�Ӧ�� */
		if(!RspInfo.RspNo){
			strcpy(MarketModifyRsp.UserID,cmd.Param("o_UserID").asString().GetBuffer(0));
			RspPackage.PutFields(&MarketModifyRsp,ETSClearFieldNoMarketModifyRsp);
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeMarketModifyRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleMarketModifyReq:���ݿ����ʧ�ܣ�[%s]",(const char*)x.ErrText());

		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		switch(x.ErrNativeCode()){
		case 3114:
			RspInfo.RspNo=ETSClearConstRspNoDBNotReady;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNotReady);
			break;
		case 12571:
			RspInfo.RspNo=ETSClearConstRspNoDBNetworkProblem;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNetworkProblem);
			m_Connection.Disconnect();
			Connect(); // ��������
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:�ع�ʧ�ܣ�[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* Ӧ����Ϣ */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeMarketModifyRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*ɾ���г�����*/
void CDBProcessor::HandleMarketDeleteReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* ɾ���г����� */
	CETSClearFieldsMarketDeleteReq MarketDeleteReq;
	Package.GetFields(&MarketDeleteReq,ETSClearFieldNoMarketDeleteReq);

	// Response
	CETSClearPackage RspPackage;
	/* ɾ���г�Ӧ�� */
	CETSClearFieldsMarketDeleteRsp MarketDeleteRsp;
	/* Ӧ����Ϣ */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_Market.MarketDelete");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* ɾ���г����� */
		cmd.Param("i_UserID").setAsString()=MarketDeleteReq.UserID;
		cmd.Param("i_Market").setAsString()=MarketDeleteReq.Market;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* Ӧ����Ϣ */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* ɾ���г�Ӧ�� */
		if(!RspInfo.RspNo){
			strcpy(MarketDeleteRsp.UserID,cmd.Param("o_UserID").asString().GetBuffer(0));
			RspPackage.PutFields(&MarketDeleteRsp,ETSClearFieldNoMarketDeleteRsp);
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeMarketDeleteRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleMarketDeleteReq:���ݿ����ʧ�ܣ�[%s]",(const char*)x.ErrText());

		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		switch(x.ErrNativeCode()){
		case 3114:
			RspInfo.RspNo=ETSClearConstRspNoDBNotReady;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNotReady);
			break;
		case 12571:
			RspInfo.RspNo=ETSClearConstRspNoDBNetworkProblem;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNetworkProblem);
			m_Connection.Disconnect();
			Connect(); // ��������
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:�ع�ʧ�ܣ�[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* Ӧ����Ϣ */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeMarketDeleteRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*������Ʒ����*/
void CDBProcessor::HandleCommodityAddReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* ������Ʒ���� */
	CETSClearFieldsCommodityAddReq CommodityAddReq;
	Package.GetFields(&CommodityAddReq,ETSClearFieldNoCommodityAddReq);

	// Response
	CETSClearPackage RspPackage;
	/* ������ƷӦ�� */
	CETSClearFieldsCommodityAddRsp CommodityAddRsp;
	/* Ӧ����Ϣ */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_Commodity.CommodityAdd");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* ������Ʒ���� */
		cmd.Param("i_UserID").setAsString()=CommodityAddReq.UserID;
		cmd.Param("i_Variety").setAsString()=CommodityAddReq.Variety;
		cmd.Param("i_Market").setAsString()=CommodityAddReq.Market;
		cmd.Param("i_Commodity").setAsString()=CommodityAddReq.Commodity;
		cmd.Param("i_CommodityName").setAsString()=CommodityAddReq.CommodityName;
		cmd.Param("i_CommodityStatus").setAsString()=CommodityAddReq.CommodityStatus;
		cmd.Param("i_LastDate").setAsLong()=CommodityAddReq.LastDate;
		cmd.Param("i_SettleDate").setAsLong()=CommodityAddReq.SettleDate;
		cmd.Param("i_Ctrtsize").setAsDouble()=CommodityAddReq.Ctrtsize;
		cmd.Param("i_CtrtRatio").setAsLong()=CommodityAddReq.CtrtRatio;
		cmd.Param("i_Precision").setAsShort()=CommodityAddReq.Precision;
		cmd.Param("i_MaxSpreadType").setAsString()=CommodityAddReq.MaxSpreadType;
		cmd.Param("i_MaxSpread").setAsDouble()=CommodityAddReq.MaxSpread;
		cmd.Param("i_TradeCommType").setAsString()=CommodityAddReq.TradeCommType;
		cmd.Param("i_TradeComm").setAsDouble()=CommodityAddReq.TradeComm;
		cmd.Param("i_SettleCommType").setAsString()=CommodityAddReq.SettleCommType;
		cmd.Param("i_SettleComm").setAsDouble()=CommodityAddReq.SettleComm;
		cmd.Param("i_CashCommType").setAsString()=CommodityAddReq.CashCommType;
		cmd.Param("i_CashComm").setAsDouble()=CommodityAddReq.CashComm;
		cmd.Param("i_RiskCommType").setAsString()=CommodityAddReq.RiskCommType;
		cmd.Param("i_RiskComm").setAsDouble()=CommodityAddReq.RiskComm;
		cmd.Param("i_MarginType").setAsString()=CommodityAddReq.MarginType;
		cmd.Param("i_Margin").setAsDouble()=CommodityAddReq.Margin;
		cmd.Param("i_TradingSec").setAsString()=CommodityAddReq.TradingSec;
		cmd.Param("i_OrderMinQty").setAsLong()=CommodityAddReq.OrderMinQty;
		cmd.Param("i_OrderMaxQty").setAsLong()=CommodityAddReq.OrderMaxQty;
		cmd.Param("i_MaxBuy").setAsLong()=CommodityAddReq.MaxBuy;
		cmd.Param("i_MaxSell").setAsLong()=CommodityAddReq.MaxSell;
		cmd.Param("i_PriceLimit").setAsDouble()=CommodityAddReq.PriceLimit;
		cmd.Param("i_PriceUnit").setAsDouble()=CommodityAddReq.PriceUnit;
		cmd.Param("i_PrevClear").setAsDouble()=CommodityAddReq.PrevClear;
		cmd.Param("i_PrevClose").setAsDouble()=CommodityAddReq.PrevClose;
		cmd.Param("i_TtlOpen").setAsLong()=CommodityAddReq.TtlOpen;
		cmd.Param("i_SpreadUp").setAsDouble()=CommodityAddReq.SpreadUp;
		cmd.Param("i_SpreadDown").setAsDouble()=CommodityAddReq.SpreadDown;
		cmd.Param("i_MatchMtd").setAsLong()=CommodityAddReq.MatchMtd;
		cmd.Param("i_Currency").setAsString()=CommodityAddReq.Currency;
		cmd.Param("i_Clear").setAsDouble()=CommodityAddReq.Clear;
		cmd.Param("i_Spread").setAsDouble()=CommodityAddReq.Spread;
		cmd.Param("i_DeferCommType").setAsString()=CommodityAddReq.DeferCommType;
		cmd.Param("i_DeferComm").setAsDouble()=CommodityAddReq.DeferComm;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* Ӧ����Ϣ */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* ������ƷӦ�� */
		if(!RspInfo.RspNo){
			strcpy(CommodityAddRsp.UserID,cmd.Param("o_UserID").asString().GetBuffer(0));
			RspPackage.PutFields(&CommodityAddRsp,ETSClearFieldNoCommodityAddRsp);
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeCommodityAddRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleCommodityAddReq:���ݿ����ʧ�ܣ�[%s]",(const char*)x.ErrText());

		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		switch(x.ErrNativeCode()){
		case 3114:
			RspInfo.RspNo=ETSClearConstRspNoDBNotReady;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNotReady);
			break;
		case 12571:
			RspInfo.RspNo=ETSClearConstRspNoDBNetworkProblem;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNetworkProblem);
			m_Connection.Disconnect();
			Connect(); // ��������
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:�ع�ʧ�ܣ�[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* Ӧ����Ϣ */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeCommodityAddRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*�޸���Ʒ����*/
void CDBProcessor::HandleCommodityModifyReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* �޸���Ʒ���� */
	CETSClearFieldsCommodityModifyReq CommodityModifyReq;
	Package.GetFields(&CommodityModifyReq,ETSClearFieldNoCommodityModifyReq);

	// Response
	CETSClearPackage RspPackage;
	/* �޸���ƷӦ�� */
	CETSClearFieldsCommodityModifyRsp CommodityModifyRsp;
	/* Ӧ����Ϣ */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_Commodity.CommodityModify");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* �޸���Ʒ���� */
		cmd.Param("i_UserID").setAsString()=CommodityModifyReq.UserID;
		cmd.Param("i_Variety").setAsString()=CommodityModifyReq.Variety;
		cmd.Param("i_Market").setAsString()=CommodityModifyReq.Market;
		cmd.Param("i_Commodity").setAsString()=CommodityModifyReq.Commodity;
		cmd.Param("i_CommodityName").setAsString()=CommodityModifyReq.CommodityName;
		cmd.Param("i_CommodityStatus").setAsString()=CommodityModifyReq.CommodityStatus;
		cmd.Param("i_LastDate").setAsLong()=CommodityModifyReq.LastDate;
		cmd.Param("i_SettleDate").setAsLong()=CommodityModifyReq.SettleDate;
		cmd.Param("i_Ctrtsize").setAsDouble()=CommodityModifyReq.Ctrtsize;
		cmd.Param("i_CtrtRatio").setAsLong()=CommodityModifyReq.CtrtRatio;
		cmd.Param("i_Precision").setAsShort()=CommodityModifyReq.Precision;
		cmd.Param("i_MaxSpreadType").setAsString()=CommodityModifyReq.MaxSpreadType;
		cmd.Param("i_MaxSpread").setAsDouble()=CommodityModifyReq.MaxSpread;
		cmd.Param("i_TradeCommType").setAsString()=CommodityModifyReq.TradeCommType;
		cmd.Param("i_TradeComm").setAsDouble()=CommodityModifyReq.TradeComm;
		cmd.Param("i_SettleCommType").setAsString()=CommodityModifyReq.SettleCommType;
		cmd.Param("i_SettleComm").setAsDouble()=CommodityModifyReq.SettleComm;
		cmd.Param("i_CashCommType").setAsString()=CommodityModifyReq.CashCommType;
		cmd.Param("i_CashComm").setAsDouble()=CommodityModifyReq.CashComm;
		cmd.Param("i_RiskCommType").setAsString()=CommodityModifyReq.RiskCommType;
		cmd.Param("i_RiskComm").setAsDouble()=CommodityModifyReq.RiskComm;
		cmd.Param("i_MarginType").setAsString()=CommodityModifyReq.MarginType;
		cmd.Param("i_Margin").setAsDouble()=CommodityModifyReq.Margin;
		cmd.Param("i_TradingSec").setAsString()=CommodityModifyReq.TradingSec;
		cmd.Param("i_OrderMinQty").setAsLong()=CommodityModifyReq.OrderMinQty;
		cmd.Param("i_OrderMaxQty").setAsLong()=CommodityModifyReq.OrderMaxQty;
		cmd.Param("i_MaxBuy").setAsLong()=CommodityModifyReq.MaxBuy;
		cmd.Param("i_MaxSell").setAsLong()=CommodityModifyReq.MaxSell;
		cmd.Param("i_PriceLimit").setAsDouble()=CommodityModifyReq.PriceLimit;
		cmd.Param("i_PriceUnit").setAsDouble()=CommodityModifyReq.PriceUnit;
		cmd.Param("i_PrevClear").setAsDouble()=CommodityModifyReq.PrevClear;
		cmd.Param("i_PrevClose").setAsDouble()=CommodityModifyReq.PrevClose;
		cmd.Param("i_TtlOpen").setAsLong()=CommodityModifyReq.TtlOpen;
		cmd.Param("i_SpreadUp").setAsDouble()=CommodityModifyReq.SpreadUp;
		cmd.Param("i_SpreadDown").setAsDouble()=CommodityModifyReq.SpreadDown;
		cmd.Param("i_MatchMtd").setAsLong()=CommodityModifyReq.MatchMtd;
		cmd.Param("i_Currency").setAsString()=CommodityModifyReq.Currency;
		cmd.Param("i_Clear").setAsDouble()=CommodityModifyReq.Clear;
		cmd.Param("i_Spread").setAsDouble()=CommodityModifyReq.Spread;
		cmd.Param("i_DeferCommType").setAsString()=CommodityModifyReq.DeferCommType;
		cmd.Param("i_DeferComm").setAsDouble()=CommodityModifyReq.DeferComm;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* Ӧ����Ϣ */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* �޸���ƷӦ�� */
		if(!RspInfo.RspNo){
			strcpy(CommodityModifyRsp.UserID,cmd.Param("o_UserID").asString().GetBuffer(0));
			RspPackage.PutFields(&CommodityModifyRsp,ETSClearFieldNoCommodityModifyRsp);
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeCommodityModifyRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleCommodityModifyReq:���ݿ����ʧ�ܣ�[%s]",(const char*)x.ErrText());

		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		switch(x.ErrNativeCode()){
		case 3114:
			RspInfo.RspNo=ETSClearConstRspNoDBNotReady;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNotReady);
			break;
		case 12571:
			RspInfo.RspNo=ETSClearConstRspNoDBNetworkProblem;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNetworkProblem);
			m_Connection.Disconnect();
			Connect(); // ��������
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:�ع�ʧ�ܣ�[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* Ӧ����Ϣ */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeCommodityModifyRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*ɾ����Ʒ����*/
void CDBProcessor::HandleCommodityDeleteReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* ɾ����Ʒ���� */
	CETSClearFieldsCommodityDeleteReq CommodityDeleteReq;
	Package.GetFields(&CommodityDeleteReq,ETSClearFieldNoCommodityDeleteReq);

	// Response
	CETSClearPackage RspPackage;
	/* ɾ����ƷӦ�� */
	CETSClearFieldsCommodityDeleteRsp CommodityDeleteRsp;
	/* Ӧ����Ϣ */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_Commodity.CommodityDelete");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* ɾ����Ʒ���� */
		cmd.Param("i_UserID").setAsString()=CommodityDeleteReq.UserID;
		cmd.Param("i_Market").setAsString()=CommodityDeleteReq.Market;
		cmd.Param("i_Commodity").setAsString()=CommodityDeleteReq.Commodity;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* Ӧ����Ϣ */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* ɾ����ƷӦ�� */
		if(!RspInfo.RspNo){
			strcpy(CommodityDeleteRsp.UserID,cmd.Param("o_UserID").asString().GetBuffer(0));
			RspPackage.PutFields(&CommodityDeleteRsp,ETSClearFieldNoCommodityDeleteRsp);
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeCommodityDeleteRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleCommodityDeleteReq:���ݿ����ʧ�ܣ�[%s]",(const char*)x.ErrText());

		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		switch(x.ErrNativeCode()){
		case 3114:
			RspInfo.RspNo=ETSClearConstRspNoDBNotReady;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNotReady);
			break;
		case 12571:
			RspInfo.RspNo=ETSClearConstRspNoDBNetworkProblem;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNetworkProblem);
			m_Connection.Disconnect();
			Connect(); // ��������
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:�ع�ʧ�ܣ�[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* Ӧ����Ϣ */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeCommodityDeleteRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*������Ʒ��������*/
void CDBProcessor::HandleCommodityPropertyAddReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* ������Ʒ�������� */
	CETSClearFieldsCommodityPropertyAddReq CommodityPropertyAddReq;
	Package.GetFields(&CommodityPropertyAddReq,ETSClearFieldNoCommodityPropertyAddReq);

	// Response
	CETSClearPackage RspPackage;
	/* ������Ʒ����Ӧ�� */
	CETSClearFieldsCommodityPropertyAddRsp CommodityPropertyAddRsp;
	/* Ӧ����Ϣ */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_CommodityProperty.CommodityPropertyAdd");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* ������Ʒ�������� */
		cmd.Param("i_UserID").setAsString()=CommodityPropertyAddReq.UserID;
		cmd.Param("i_Variety").setAsString()=CommodityPropertyAddReq.Variety;
		cmd.Param("i_NoInOrder").setAsLong()=CommodityPropertyAddReq.NoInOrder;
		cmd.Param("i_PropertyName").setAsString()=CommodityPropertyAddReq.PropertyName;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* Ӧ����Ϣ */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* ������Ʒ����Ӧ�� */
		if(!RspInfo.RspNo){
			strcpy(CommodityPropertyAddRsp.UserID,cmd.Param("o_UserID").asString().GetBuffer(0));
			RspPackage.PutFields(&CommodityPropertyAddRsp,ETSClearFieldNoCommodityPropertyAddRsp);
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeCommodityPropertyAddRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleCommodityPropertyAddReq:���ݿ����ʧ�ܣ�[%s]",(const char*)x.ErrText());

		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		switch(x.ErrNativeCode()){
		case 3114:
			RspInfo.RspNo=ETSClearConstRspNoDBNotReady;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNotReady);
			break;
		case 12571:
			RspInfo.RspNo=ETSClearConstRspNoDBNetworkProblem;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNetworkProblem);
			m_Connection.Disconnect();
			Connect(); // ��������
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:�ع�ʧ�ܣ�[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* Ӧ����Ϣ */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeCommodityPropertyAddRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*��ѯ��Ʒ��������*/
void CDBProcessor::HandleCommodityPropertyQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* ��ѯ��Ʒ�������� */
	CETSClearFieldsCommodityPropertyQueryReq CommodityPropertyQueryReq;
	Package.GetFields(&CommodityPropertyQueryReq,ETSClearFieldNoCommodityPropertyQueryReq);

	// Response
	CETSClearPackage RspPackage;
	/* ��ѯ��Ʒ����Ӧ�� */
	CETSClearFieldsCommodityPropertyQueryRsp CommodityPropertyQueryRsp;
	CBMLRecordSet CommodityPropertyQueryRspList;
	SACommand *pCursor=NULL;
	/* Ӧ����Ϣ */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_CommodityProperty.CommodityPropertyQuery");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* ��ѯ��Ʒ�������� */
		cmd.Param("i_UserID").setAsString()=CommodityPropertyQueryReq.UserID;
		cmd.Param("i_Variety").setAsString()=CommodityPropertyQueryReq.Variety;
		cmd.Param("i_PropertyID").setAsString()=CommodityPropertyQueryReq.PropertyID;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* Ӧ����Ϣ */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* ��ѯ��Ʒ����Ӧ�� */
		if(!RspInfo.RspNo){
			RspPackage.PutRecordSet(ETSClearFieldNoCommodityPropertyQueryRspList,&CommodityPropertyQueryRspList);
			pCursor = cmd.Param("o_Cursor");
			while(pCursor->FetchNext())
			{
				strcpy(CommodityPropertyQueryRsp.Variety,pCursor->Field("Variety").asString().GetBuffer(0));
				CommodityPropertyQueryRsp.NoInOrder=pCursor->Field("NoInOrder").asLong();
				strcpy(CommodityPropertyQueryRsp.PropertyName,pCursor->Field("PropertyName").asString().GetBuffer(0));

				if(CommodityPropertyQueryRspList.Insert(&CommodityPropertyQueryRsp)<0){
					RspPackage.SetEndFlag(1);
					m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeCommodityPropertyQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);

					// ����
					RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);
					RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
					RspPackage.PutRecordSet(ETSClearFieldNoCommodityPropertyQueryRspList,&CommodityPropertyQueryRspList);
					CommodityPropertyQueryRspList.Insert(&CommodityPropertyQueryRsp);
				}
			}
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeCommodityPropertyQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleCommodityPropertyQueryReq:���ݿ����ʧ�ܣ�[%s]",(const char*)x.ErrText());

		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		switch(x.ErrNativeCode()){
		case 3114:
			RspInfo.RspNo=ETSClearConstRspNoDBNotReady;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNotReady);
			break;
		case 12571:
			RspInfo.RspNo=ETSClearConstRspNoDBNetworkProblem;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNetworkProblem);
			m_Connection.Disconnect();
			Connect(); // ��������
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:�ع�ʧ�ܣ�[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* Ӧ����Ϣ */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeCommodityPropertyQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*ɾ����Ʒ��������*/
void CDBProcessor::HandleCommodityPropertyDeleteReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* ɾ����Ʒ�������� */
	CETSClearFieldsCommodityPropertyDeleteReq CommodityPropertyDeleteReq;
	Package.GetFields(&CommodityPropertyDeleteReq,ETSClearFieldNoCommodityPropertyDeleteReq);

	// Response
	CETSClearPackage RspPackage;
	/* ɾ����Ʒ����Ӧ�� */
	CETSClearFieldsCommodityPropertyDeleteRsp CommodityPropertyDeleteRsp;
	/* Ӧ����Ϣ */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_CommodityProperty.CommodityPropertyDelete");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* ɾ����Ʒ�������� */
		cmd.Param("i_UserID").setAsString()=CommodityPropertyDeleteReq.UserID;
		cmd.Param("i_Variety").setAsString()=CommodityPropertyDeleteReq.Variety;
		cmd.Param("i_NoInOrder").setAsLong()=CommodityPropertyDeleteReq.NoInOrder;
		cmd.Param("i_PropertyName").setAsString()=CommodityPropertyDeleteReq.PropertyName;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* Ӧ����Ϣ */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* ɾ����Ʒ����Ӧ�� */
		if(!RspInfo.RspNo){
			strcpy(CommodityPropertyDeleteRsp.UserID,cmd.Param("o_UserID").asString().GetBuffer(0));
			RspPackage.PutFields(&CommodityPropertyDeleteRsp,ETSClearFieldNoCommodityPropertyDeleteRsp);
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeCommodityPropertyDeleteRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleCommodityPropertyDeleteReq:���ݿ����ʧ�ܣ�[%s]",(const char*)x.ErrText());

		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		switch(x.ErrNativeCode()){
		case 3114:
			RspInfo.RspNo=ETSClearConstRspNoDBNotReady;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNotReady);
			break;
		case 12571:
			RspInfo.RspNo=ETSClearConstRspNoDBNetworkProblem;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNetworkProblem);
			m_Connection.Disconnect();
			Connect(); // ��������
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:�ع�ʧ�ܣ�[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* Ӧ����Ϣ */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeCommodityPropertyDeleteRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*������Ʒ��������ѡ������*/
void CDBProcessor::HandlePropertyLookupAddReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* ������Ʒ��������ѡ������ */
	CETSClearFieldsPropertyLookupAddReq PropertyLookupAddReq;
	Package.GetFields(&PropertyLookupAddReq,ETSClearFieldNoPropertyLookupAddReq);

	// Response
	CETSClearPackage RspPackage;
	/* ������Ʒ��������ѡ��Ӧ�� */
	CETSClearFieldsPropertyLookupAddRsp PropertyLookupAddRsp;
	/* Ӧ����Ϣ */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_CommodityProperty.PropertyLookupAdd");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* ������Ʒ��������ѡ������ */
		cmd.Param("i_UserID").setAsString()=PropertyLookupAddReq.UserID;
		cmd.Param("i_Variety").setAsString()=PropertyLookupAddReq.Variety;
		cmd.Param("i_PropertyName").setAsString()=PropertyLookupAddReq.PropertyName;
		cmd.Param("i_Lookup").setAsString()=PropertyLookupAddReq.Lookup;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* Ӧ����Ϣ */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* ������Ʒ��������ѡ��Ӧ�� */
		if(!RspInfo.RspNo){
			strcpy(PropertyLookupAddRsp.UserID,cmd.Param("o_UserID").asString().GetBuffer(0));
			RspPackage.PutFields(&PropertyLookupAddRsp,ETSClearFieldNoPropertyLookupAddRsp);
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypePropertyLookupAddRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandlePropertyLookupAddReq:���ݿ����ʧ�ܣ�[%s]",(const char*)x.ErrText());

		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		switch(x.ErrNativeCode()){
		case 3114:
			RspInfo.RspNo=ETSClearConstRspNoDBNotReady;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNotReady);
			break;
		case 12571:
			RspInfo.RspNo=ETSClearConstRspNoDBNetworkProblem;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNetworkProblem);
			m_Connection.Disconnect();
			Connect(); // ��������
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:�ع�ʧ�ܣ�[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* Ӧ����Ϣ */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypePropertyLookupAddRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*��ѯ��Ʒ��������ѡ������*/
void CDBProcessor::HandlePropertyLookupQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* ��ѯ��Ʒ��������ѡ������ */
	CETSClearFieldsPropertyLookupQueryReq PropertyLookupQueryReq;
	Package.GetFields(&PropertyLookupQueryReq,ETSClearFieldNoPropertyLookupQueryReq);

	// Response
	CETSClearPackage RspPackage;
	/* ��ѯ��Ʒ��������ѡ��Ӧ�� */
	CETSClearFieldsPropertyLookupQueryRsp PropertyLookupQueryRsp;
	CBMLRecordSet PropertyLookupQueryRspList;
	SACommand *pCursor=NULL;
	/* Ӧ����Ϣ */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_CommodityProperty.PropertyLookupQuery");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* ��ѯ��Ʒ��������ѡ������ */
		cmd.Param("i_UserID").setAsString()=PropertyLookupQueryReq.UserID;
		cmd.Param("i_Variety").setAsString()=PropertyLookupQueryReq.Variety;
		cmd.Param("i_PropertyName").setAsString()=PropertyLookupQueryReq.PropertyName;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* Ӧ����Ϣ */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* ��ѯ��Ʒ��������ѡ��Ӧ�� */
		if(!RspInfo.RspNo){
			RspPackage.PutRecordSet(ETSClearFieldNoPropertyLookupQueryRspList,&PropertyLookupQueryRspList);
			pCursor = cmd.Param("o_Cursor");
			while(pCursor->FetchNext())
			{
				strcpy(PropertyLookupQueryRsp.Variety,pCursor->Field("Variety").asString().GetBuffer(0));
				strcpy(PropertyLookupQueryRsp.PropertyName,pCursor->Field("PropertyName").asString().GetBuffer(0));
				strcpy(PropertyLookupQueryRsp.Lookup,pCursor->Field("Lookup").asString().GetBuffer(0));

				if(PropertyLookupQueryRspList.Insert(&PropertyLookupQueryRsp)<0){
					RspPackage.SetEndFlag(1);
					m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypePropertyLookupQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);

					// ����
					RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);
					RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
					RspPackage.PutRecordSet(ETSClearFieldNoPropertyLookupQueryRspList,&PropertyLookupQueryRspList);
					PropertyLookupQueryRspList.Insert(&PropertyLookupQueryRsp);
				}
			}
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypePropertyLookupQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandlePropertyLookupQueryReq:���ݿ����ʧ�ܣ�[%s]",(const char*)x.ErrText());

		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		switch(x.ErrNativeCode()){
		case 3114:
			RspInfo.RspNo=ETSClearConstRspNoDBNotReady;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNotReady);
			break;
		case 12571:
			RspInfo.RspNo=ETSClearConstRspNoDBNetworkProblem;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNetworkProblem);
			m_Connection.Disconnect();
			Connect(); // ��������
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:�ع�ʧ�ܣ�[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* Ӧ����Ϣ */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypePropertyLookupQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*ɾ����Ʒ��������ѡ������*/
void CDBProcessor::HandlePropertyLookupDeleteReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* ɾ����Ʒ��������ѡ������ */
	CETSClearFieldsPropertyLookupDeleteReq PropertyLookupDeleteReq;
	Package.GetFields(&PropertyLookupDeleteReq,ETSClearFieldNoPropertyLookupDeleteReq);

	// Response
	CETSClearPackage RspPackage;
	/* ɾ����Ʒ��������ѡ��Ӧ�� */
	CETSClearFieldsPropertyLookupDeleteRsp PropertyLookupDeleteRsp;
	/* Ӧ����Ϣ */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_CommodityProperty.PropertyLookupDelete");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* ɾ����Ʒ��������ѡ������ */
		cmd.Param("i_UserID").setAsString()=PropertyLookupDeleteReq.UserID;
		cmd.Param("i_Variety").setAsString()=PropertyLookupDeleteReq.Variety;
		cmd.Param("i_PropertyName").setAsString()=PropertyLookupDeleteReq.PropertyName;
		cmd.Param("i_Lookup").setAsString()=PropertyLookupDeleteReq.Lookup;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* Ӧ����Ϣ */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* ɾ����Ʒ��������ѡ��Ӧ�� */
		if(!RspInfo.RspNo){
			strcpy(PropertyLookupDeleteRsp.UserID,cmd.Param("o_UserID").asString().GetBuffer(0));
			RspPackage.PutFields(&PropertyLookupDeleteRsp,ETSClearFieldNoPropertyLookupDeleteRsp);
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypePropertyLookupDeleteRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandlePropertyLookupDeleteReq:���ݿ����ʧ�ܣ�[%s]",(const char*)x.ErrText());

		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		switch(x.ErrNativeCode()){
		case 3114:
			RspInfo.RspNo=ETSClearConstRspNoDBNotReady;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNotReady);
			break;
		case 12571:
			RspInfo.RspNo=ETSClearConstRspNoDBNetworkProblem;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNetworkProblem);
			m_Connection.Disconnect();
			Connect(); // ��������
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:�ع�ʧ�ܣ�[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* Ӧ����Ϣ */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypePropertyLookupDeleteRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*��ѯƷ������*/
void CDBProcessor::HandleVarietyQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* ��ѯƷ������ */
	CETSClearFieldsVarietyQueryReq VarietyQueryReq;
	Package.GetFields(&VarietyQueryReq,ETSClearFieldNoVarietyQueryReq);

	// Response
	CETSClearPackage RspPackage;
	/* ��ѯƷ��Ӧ�� */
	CETSClearFieldsVarietyQueryRsp VarietyQueryRsp;
	CBMLRecordSet VarietyQueryRspList;
	SACommand *pCursor=NULL;
	/* Ӧ����Ϣ */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_Variety.VarietyQuery");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* ��ѯƷ������ */
		cmd.Param("i_UserID").setAsString()=VarietyQueryReq.UserID;
		cmd.Param("i_Variety").setAsString()=VarietyQueryReq.Variety;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* Ӧ����Ϣ */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* ��ѯƷ��Ӧ�� */
		if(!RspInfo.RspNo){
			RspPackage.PutRecordSet(ETSClearFieldNoVarietyQueryRspList,&VarietyQueryRspList);
			pCursor = cmd.Param("o_Cursor");
			while(pCursor->FetchNext())
			{
				strcpy(VarietyQueryRsp.Variety,pCursor->Field("Variety").asString().GetBuffer(0));
				strcpy(VarietyQueryRsp.VarietyName,pCursor->Field("VarietyName").asString().GetBuffer(0));

				if(VarietyQueryRspList.Insert(&VarietyQueryRsp)<0){
					RspPackage.SetEndFlag(1);
					m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeVarietyQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);

					// ����
					RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);
					RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
					RspPackage.PutRecordSet(ETSClearFieldNoVarietyQueryRspList,&VarietyQueryRspList);
					VarietyQueryRspList.Insert(&VarietyQueryRsp);
				}
			}
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeVarietyQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:���ݿ����ʧ�ܣ�[%s]",(const char*)x.ErrText());

		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		switch(x.ErrNativeCode()){
		case 3114:
			RspInfo.RspNo=ETSClearConstRspNoDBNotReady;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNotReady);
			break;
		case 12571:
			RspInfo.RspNo=ETSClearConstRspNoDBNetworkProblem;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNetworkProblem);
			m_Connection.Disconnect();
			Connect(); // ��������
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:�ع�ʧ�ܣ�[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* Ӧ����Ϣ */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeVarietyQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*����Ʒ������*/
void CDBProcessor::HandleVarietyAddReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* ����Ʒ������ */
	CETSClearFieldsVarietyAddReq VarietyAddReq;
	Package.GetFields(&VarietyAddReq,ETSClearFieldNoVarietyAddReq);

	// Response
	CETSClearPackage RspPackage;
	/* ����Ʒ��Ӧ�� */
	CETSClearFieldsVarietyAddRsp VarietyAddRsp;
	/* Ӧ����Ϣ */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_Variety.VarietyAdd");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* ����Ʒ������ */
		cmd.Param("i_UserID").setAsString()=VarietyAddReq.UserID;
		cmd.Param("i_Variety").setAsString()=VarietyAddReq.Variety;
		cmd.Param("i_VarietyName").setAsString()=VarietyAddReq.VarietyName;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* Ӧ����Ϣ */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* ����Ʒ��Ӧ�� */
		if(!RspInfo.RspNo){
			strcpy(VarietyAddRsp.UserID,cmd.Param("o_UserID").asString().GetBuffer(0));
			RspPackage.PutFields(&VarietyAddRsp,ETSClearFieldNoVarietyAddRsp);
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeVarietyAddRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleVarietyAddReq:���ݿ����ʧ�ܣ�[%s]",(const char*)x.ErrText());

		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		switch(x.ErrNativeCode()){
		case 3114:
			RspInfo.RspNo=ETSClearConstRspNoDBNotReady;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNotReady);
			break;
		case 12571:
			RspInfo.RspNo=ETSClearConstRspNoDBNetworkProblem;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNetworkProblem);
			m_Connection.Disconnect();
			Connect(); // ��������
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:�ع�ʧ�ܣ�[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* Ӧ����Ϣ */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeVarietyAddRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*�޸�Ʒ������*/
void CDBProcessor::HandleVarietyModifyReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* �޸�Ʒ������ */
	CETSClearFieldsVarietyModifyReq VarietyModifyReq;
	Package.GetFields(&VarietyModifyReq,ETSClearFieldNoVarietyModifyReq);

	// Response
	CETSClearPackage RspPackage;
	/* �޸�Ʒ��Ӧ�� */
	CETSClearFieldsVarietyModifyRsp VarietyModifyRsp;
	/* Ӧ����Ϣ */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_Variety.VarietyModify");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* �޸�Ʒ������ */
		cmd.Param("i_UserID").setAsString()=VarietyModifyReq.UserID;
		cmd.Param("i_Variety").setAsString()=VarietyModifyReq.Variety;
		cmd.Param("i_VarietyName").setAsString()=VarietyModifyReq.VarietyName;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* Ӧ����Ϣ */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* �޸�Ʒ��Ӧ�� */
		if(!RspInfo.RspNo){
			strcpy(VarietyModifyRsp.UserID,cmd.Param("o_UserID").asString().GetBuffer(0));
			RspPackage.PutFields(&VarietyModifyRsp,ETSClearFieldNoVarietyModifyRsp);
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeVarietyModifyRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleVarietyModifyReq:���ݿ����ʧ�ܣ�[%s]",(const char*)x.ErrText());

		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		switch(x.ErrNativeCode()){
		case 3114:
			RspInfo.RspNo=ETSClearConstRspNoDBNotReady;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNotReady);
			break;
		case 12571:
			RspInfo.RspNo=ETSClearConstRspNoDBNetworkProblem;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNetworkProblem);
			m_Connection.Disconnect();
			Connect(); // ��������
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:�ع�ʧ�ܣ�[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* Ӧ����Ϣ */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeVarietyModifyRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*ɾ��Ʒ������*/
void CDBProcessor::HandleVarietyDeleteReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* ɾ��Ʒ������ */
	CETSClearFieldsVarietyDeleteReq VarietyDeleteReq;
	Package.GetFields(&VarietyDeleteReq,ETSClearFieldNoVarietyDeleteReq);

	// Response
	CETSClearPackage RspPackage;
	/* ɾ��Ʒ��Ӧ�� */
	CETSClearFieldsVarietyDeleteRsp VarietyDeleteRsp;
	/* Ӧ����Ϣ */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_Variety.VarietyDelete");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* ɾ��Ʒ������ */
		cmd.Param("i_UserID").setAsString()=VarietyDeleteReq.UserID;
		cmd.Param("i_Variety").setAsString()=VarietyDeleteReq.Variety;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* Ӧ����Ϣ */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* ɾ��Ʒ��Ӧ�� */
		if(!RspInfo.RspNo){
			strcpy(VarietyDeleteRsp.UserID,cmd.Param("o_UserID").asString().GetBuffer(0));
			RspPackage.PutFields(&VarietyDeleteRsp,ETSClearFieldNoVarietyDeleteRsp);
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeVarietyDeleteRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleVarietyDeleteReq:���ݿ����ʧ�ܣ�[%s]",(const char*)x.ErrText());

		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		switch(x.ErrNativeCode()){
		case 3114:
			RspInfo.RspNo=ETSClearConstRspNoDBNotReady;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNotReady);
			break;
		case 12571:
			RspInfo.RspNo=ETSClearConstRspNoDBNetworkProblem;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNetworkProblem);
			m_Connection.Disconnect();
			Connect(); // ��������
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:�ع�ʧ�ܣ�[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* Ӧ����Ϣ */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeVarietyDeleteRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*��ѯ���׽�����*/
void CDBProcessor::HandleTradingTimeQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* ��ѯ���׽����� */
	CETSClearFieldsTradingTimeQueryReq TradingTimeQueryReq;
	Package.GetFields(&TradingTimeQueryReq,ETSClearFieldNoTradingTimeQueryReq);

	// Response
	CETSClearPackage RspPackage;
	/* ��ѯ���׽�Ӧ�� */
	CETSClearFieldsTradingTimeQueryRsp TradingTimeQueryRsp;
	CBMLRecordSet TradingTimeQueryRspList;
	SACommand *pCursor=NULL;
	/* Ӧ����Ϣ */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_TradingTime.TradingTimeQuery");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* ��ѯ���׽����� */
		cmd.Param("i_UserID").setAsString()=TradingTimeQueryReq.UserID;
		cmd.Param("i_Section").setAsLong()=TradingTimeQueryReq.Section;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* Ӧ����Ϣ */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* ��ѯ���׽�Ӧ�� */
		if(!RspInfo.RspNo){
			RspPackage.PutRecordSet(ETSClearFieldNoTradingTimeQueryRspList,&TradingTimeQueryRspList);
			pCursor = cmd.Param("o_Cursor");
			while(pCursor->FetchNext())
			{
				strcpy(TradingTimeQueryRsp.Market,pCursor->Field("Market").asString().GetBuffer(0));
				TradingTimeQueryRsp.Section=pCursor->Field("Section").asLong();
				strcpy(TradingTimeQueryRsp.SectionName,pCursor->Field("SectionName").asString().GetBuffer(0));
				TradingTimeQueryRsp.SectionStart=pCursor->Field("SectionStart").asLong();
				TradingTimeQueryRsp.SectionClose=pCursor->Field("SectionClose").asLong();
				memcpy(&TradingTimeQueryRsp.SectionType,pCursor->Field("SectionType").asString().GetBuffer(0),1);
				TradingTimeQueryRsp.SectionInterval=pCursor->Field("SectionInterval").asLong();

				if(TradingTimeQueryRspList.Insert(&TradingTimeQueryRsp)<0){
					RspPackage.SetEndFlag(1);
					m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeTradingTimeQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);

					// ����
					RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);
					RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
					RspPackage.PutRecordSet(ETSClearFieldNoTradingTimeQueryRspList,&TradingTimeQueryRspList);
					TradingTimeQueryRspList.Insert(&TradingTimeQueryRsp);
				}
			}
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeTradingTimeQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleTradingTimeQueryReq:���ݿ����ʧ�ܣ�[%s]",(const char*)x.ErrText());

		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		switch(x.ErrNativeCode()){
		case 3114:
			RspInfo.RspNo=ETSClearConstRspNoDBNotReady;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNotReady);
			break;
		case 12571:
			RspInfo.RspNo=ETSClearConstRspNoDBNetworkProblem;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNetworkProblem);
			m_Connection.Disconnect();
			Connect(); // ��������
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:�ع�ʧ�ܣ�[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* Ӧ����Ϣ */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeTradingTimeQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*���ӽ��׽�����*/
void CDBProcessor::HandleTradingTimeAddReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* ���ӽ��׽����� */
	CETSClearFieldsTradingTimeAddReq TradingTimeAddReq;
	Package.GetFields(&TradingTimeAddReq,ETSClearFieldNoTradingTimeAddReq);

	// Response
	CETSClearPackage RspPackage;
	/* ���ӽ��׽�Ӧ�� */
	CETSClearFieldsTradingTimeAddRsp TradingTimeAddRsp;
	/* Ӧ����Ϣ */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_TradingTime.TradingTimeAdd");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* ���ӽ��׽����� */
		cmd.Param("i_UserID").setAsString()=TradingTimeAddReq.UserID;
		cmd.Param("i_Market").setAsString()=TradingTimeAddReq.Market;
		cmd.Param("i_Section").setAsLong()=TradingTimeAddReq.Section;
		cmd.Param("i_SectionName").setAsString()=TradingTimeAddReq.SectionName;
		cmd.Param("i_SectionStart").setAsLong()=TradingTimeAddReq.SectionStart;
		cmd.Param("i_SectionClose").setAsLong()=TradingTimeAddReq.SectionClose;
		cmd.Param("i_SectionType").setAsString()=TradingTimeAddReq.SectionType;
		cmd.Param("i_SectionInterval").setAsLong()=TradingTimeAddReq.SectionInterval;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* Ӧ����Ϣ */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* ���ӽ��׽�Ӧ�� */
		if(!RspInfo.RspNo){
			strcpy(TradingTimeAddRsp.UserID,cmd.Param("o_UserID").asString().GetBuffer(0));
			RspPackage.PutFields(&TradingTimeAddRsp,ETSClearFieldNoTradingTimeAddRsp);
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeTradingTimeAddRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleTradingTimeAddReq:���ݿ����ʧ�ܣ�[%s]",(const char*)x.ErrText());

		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		switch(x.ErrNativeCode()){
		case 3114:
			RspInfo.RspNo=ETSClearConstRspNoDBNotReady;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNotReady);
			break;
		case 12571:
			RspInfo.RspNo=ETSClearConstRspNoDBNetworkProblem;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNetworkProblem);
			m_Connection.Disconnect();
			Connect(); // ��������
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:�ع�ʧ�ܣ�[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* Ӧ����Ϣ */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeTradingTimeAddRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*�޸Ľ��׽�����*/
void CDBProcessor::HandleTradingTimeModifyReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* �޸Ľ��׽����� */
	CETSClearFieldsTradingTimeModifyReq TradingTimeModifyReq;
	Package.GetFields(&TradingTimeModifyReq,ETSClearFieldNoTradingTimeModifyReq);

	// Response
	CETSClearPackage RspPackage;
	/* �޸Ľ��׽�Ӧ�� */
	CETSClearFieldsTradingTimeModifyRsp TradingTimeModifyRsp;
	/* Ӧ����Ϣ */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_TradingTime.TradingTimeModify");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* �޸Ľ��׽����� */
		cmd.Param("i_UserID").setAsString()=TradingTimeModifyReq.UserID;
		cmd.Param("i_Market").setAsString()=TradingTimeModifyReq.Market;
		cmd.Param("i_Section").setAsLong()=TradingTimeModifyReq.Section;
		cmd.Param("i_SectionName").setAsString()=TradingTimeModifyReq.SectionName;
		cmd.Param("i_SectionStart").setAsLong()=TradingTimeModifyReq.SectionStart;
		cmd.Param("i_SectionClose").setAsLong()=TradingTimeModifyReq.SectionClose;
		cmd.Param("i_SectionType").setAsString()=TradingTimeModifyReq.SectionType;
		cmd.Param("i_SectionInterval").setAsLong()=TradingTimeModifyReq.SectionInterval;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* Ӧ����Ϣ */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* �޸Ľ��׽�Ӧ�� */
		if(!RspInfo.RspNo){
			strcpy(TradingTimeModifyRsp.UserID,cmd.Param("o_UserID").asString().GetBuffer(0));
			RspPackage.PutFields(&TradingTimeModifyRsp,ETSClearFieldNoTradingTimeModifyRsp);
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeTradingTimeModifyRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleTradingTimeModifyReq:���ݿ����ʧ�ܣ�[%s]",(const char*)x.ErrText());

		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		switch(x.ErrNativeCode()){
		case 3114:
			RspInfo.RspNo=ETSClearConstRspNoDBNotReady;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNotReady);
			break;
		case 12571:
			RspInfo.RspNo=ETSClearConstRspNoDBNetworkProblem;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNetworkProblem);
			m_Connection.Disconnect();
			Connect(); // ��������
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:�ع�ʧ�ܣ�[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* Ӧ����Ϣ */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeTradingTimeModifyRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*ɾ�����׽�����*/
void CDBProcessor::HandleTradingTimeDeleteReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* ɾ�����׽����� */
	CETSClearFieldsTradingTimeDeleteReq TradingTimeDeleteReq;
	Package.GetFields(&TradingTimeDeleteReq,ETSClearFieldNoTradingTimeDeleteReq);

	// Response
	CETSClearPackage RspPackage;
	/* ɾ�����׽�Ӧ�� */
	CETSClearFieldsTradingTimeDeleteRsp TradingTimeDeleteRsp;
	/* Ӧ����Ϣ */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_TradingTime.TradingTimeDelete");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* ɾ�����׽����� */
		cmd.Param("i_UserID").setAsString()=TradingTimeDeleteReq.UserID;
		cmd.Param("i_Section").setAsLong()=TradingTimeDeleteReq.Section;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* Ӧ����Ϣ */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* ɾ�����׽�Ӧ�� */
		if(!RspInfo.RspNo){
			strcpy(TradingTimeDeleteRsp.UserID,cmd.Param("o_UserID").asString().GetBuffer(0));
			RspPackage.PutFields(&TradingTimeDeleteRsp,ETSClearFieldNoTradingTimeDeleteRsp);
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeTradingTimeDeleteRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleTradingTimeDeleteReq:���ݿ����ʧ�ܣ�[%s]",(const char*)x.ErrText());

		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		switch(x.ErrNativeCode()){
		case 3114:
			RspInfo.RspNo=ETSClearConstRspNoDBNotReady;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNotReady);
			break;
		case 12571:
			RspInfo.RspNo=ETSClearConstRspNoDBNetworkProblem;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNetworkProblem);
			m_Connection.Disconnect();
			Connect(); // ��������
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:�ع�ʧ�ܣ�[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* Ӧ����Ϣ */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeTradingTimeDeleteRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*���ӽ����ص�����*/
void CDBProcessor::HandleLocationAddReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* ���ӽ����ص����� */
	CETSClearFieldsLocationAddReq LocationAddReq;
	Package.GetFields(&LocationAddReq,ETSClearFieldNoLocationAddReq);

	// Response
	CETSClearPackage RspPackage;
	/* ���ӽ����ص�Ӧ�� */
	CETSClearFieldsLocationAddRsp LocationAddRsp;
	/* Ӧ����Ϣ */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_Location.LocationAdd");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* ���ӽ����ص����� */
		cmd.Param("i_UserID").setAsString()=LocationAddReq.UserID;
		cmd.Param("i_Location").setAsString()=LocationAddReq.Location;
		cmd.Param("i_LocationName").setAsString()=LocationAddReq.LocationName;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* Ӧ����Ϣ */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* ���ӽ����ص�Ӧ�� */
		if(!RspInfo.RspNo){
			strcpy(LocationAddRsp.UserID,cmd.Param("o_UserID").asString().GetBuffer(0));
			RspPackage.PutFields(&LocationAddRsp,ETSClearFieldNoLocationAddRsp);
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeLocationAddRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleLocationAddReq:���ݿ����ʧ�ܣ�[%s]",(const char*)x.ErrText());

		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		switch(x.ErrNativeCode()){
		case 3114:
			RspInfo.RspNo=ETSClearConstRspNoDBNotReady;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNotReady);
			break;
		case 12571:
			RspInfo.RspNo=ETSClearConstRspNoDBNetworkProblem;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNetworkProblem);
			m_Connection.Disconnect();
			Connect(); // ��������
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:�ع�ʧ�ܣ�[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* Ӧ����Ϣ */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeLocationAddRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*�޸Ľ����ص�����*/
void CDBProcessor::HandleLocationModifyReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* �޸Ľ����ص����� */
	CETSClearFieldsLocationModifyReq LocationModifyReq;
	Package.GetFields(&LocationModifyReq,ETSClearFieldNoLocationModifyReq);

	// Response
	CETSClearPackage RspPackage;
	/* �޸Ľ����ص�Ӧ�� */
	CETSClearFieldsLocationModifyRsp LocationModifyRsp;
	/* Ӧ����Ϣ */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_Location.LocationModify");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* �޸Ľ����ص����� */
		cmd.Param("i_UserID").setAsString()=LocationModifyReq.UserID;
		cmd.Param("i_Location").setAsString()=LocationModifyReq.Location;
		cmd.Param("i_LocationName").setAsString()=LocationModifyReq.LocationName;
		cmd.Param("i_LocationStatus").setAsString()=LocationModifyReq.LocationStatus;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* Ӧ����Ϣ */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* �޸Ľ����ص�Ӧ�� */
		if(!RspInfo.RspNo){
			strcpy(LocationModifyRsp.UserID,cmd.Param("o_UserID").asString().GetBuffer(0));
			RspPackage.PutFields(&LocationModifyRsp,ETSClearFieldNoLocationModifyRsp);
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeLocationModifyRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleLocationModifyReq:���ݿ����ʧ�ܣ�[%s]",(const char*)x.ErrText());

		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		switch(x.ErrNativeCode()){
		case 3114:
			RspInfo.RspNo=ETSClearConstRspNoDBNotReady;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNotReady);
			break;
		case 12571:
			RspInfo.RspNo=ETSClearConstRspNoDBNetworkProblem;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNetworkProblem);
			m_Connection.Disconnect();
			Connect(); // ��������
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:�ع�ʧ�ܣ�[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* Ӧ����Ϣ */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeLocationModifyRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*ɾ�������ص�����*/
void CDBProcessor::HandleLocationDeleteReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* ɾ�������ص����� */
	CETSClearFieldsLocationDeleteReq LocationDeleteReq;
	Package.GetFields(&LocationDeleteReq,ETSClearFieldNoLocationDeleteReq);

	// Response
	CETSClearPackage RspPackage;
	/* ɾ�������ص�Ӧ�� */
	CETSClearFieldsLocationDeleteRsp LocationDeleteRsp;
	/* Ӧ����Ϣ */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_Location.LocationDelete");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* ɾ�������ص����� */
		cmd.Param("i_UserID").setAsString()=LocationDeleteReq.UserID;
		cmd.Param("i_Location").setAsString()=LocationDeleteReq.Location;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* Ӧ����Ϣ */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* ɾ�������ص�Ӧ�� */
		if(!RspInfo.RspNo){
			strcpy(LocationDeleteRsp.UserID,cmd.Param("o_UserID").asString().GetBuffer(0));
			RspPackage.PutFields(&LocationDeleteRsp,ETSClearFieldNoLocationDeleteRsp);
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeLocationDeleteRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleLocationDeleteReq:���ݿ����ʧ�ܣ�[%s]",(const char*)x.ErrText());

		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		switch(x.ErrNativeCode()){
		case 3114:
			RspInfo.RspNo=ETSClearConstRspNoDBNotReady;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNotReady);
			break;
		case 12571:
			RspInfo.RspNo=ETSClearConstRspNoDBNetworkProblem;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNetworkProblem);
			m_Connection.Disconnect();
			Connect(); // ��������
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:�ع�ʧ�ܣ�[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* Ӧ����Ϣ */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeLocationDeleteRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*��ѯ��Ʒ�洢�ֿ�����*/
void CDBProcessor::HandleWareHouseQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* ��ѯ��Ʒ�洢�ֿ����� */
	CETSClearFieldsWareHouseQueryReq WareHouseQueryReq;
	Package.GetFields(&WareHouseQueryReq,ETSClearFieldNoWareHouseQueryReq);

	// Response
	CETSClearPackage RspPackage;
	/* ��ѯ��Ʒ�洢�ֿ�Ӧ�� */
	CETSClearFieldsWareHouseQueryRsp WareHouseQueryRsp;
	CBMLRecordSet WareHouseQueryRspList;
	SACommand *pCursor=NULL;
	/* Ӧ����Ϣ */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_WareHouse.WareHouseQuery");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* ��ѯ��Ʒ�洢�ֿ����� */
		cmd.Param("i_UserID").setAsString()=WareHouseQueryReq.UserID;
		cmd.Param("i_WareHouse").setAsString()=WareHouseQueryReq.WareHouse;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* Ӧ����Ϣ */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* ��ѯ��Ʒ�洢�ֿ�Ӧ�� */
		if(!RspInfo.RspNo){
			RspPackage.PutRecordSet(ETSClearFieldNoWareHouseQueryRspList,&WareHouseQueryRspList);
			pCursor = cmd.Param("o_Cursor");
			while(pCursor->FetchNext())
			{
				strcpy(WareHouseQueryRsp.WareHouse,pCursor->Field("WareHouse").asString().GetBuffer(0));
				strcpy(WareHouseQueryRsp.WareHouseName,pCursor->Field("WareHouseName").asString().GetBuffer(0));
				strcpy(WareHouseQueryRsp.Location,pCursor->Field("Location").asString().GetBuffer(0));
				memcpy(&WareHouseQueryRsp.WareHouseStatus,pCursor->Field("WareHouseStatus").asString().GetBuffer(0),1);

				if(WareHouseQueryRspList.Insert(&WareHouseQueryRsp)<0){
					RspPackage.SetEndFlag(1);
					m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeWareHouseQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);

					// ����
					RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);
					RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
					RspPackage.PutRecordSet(ETSClearFieldNoWareHouseQueryRspList,&WareHouseQueryRspList);
					WareHouseQueryRspList.Insert(&WareHouseQueryRsp);
				}
			}
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeWareHouseQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleWareHouseQueryReq:���ݿ����ʧ�ܣ�[%s]",(const char*)x.ErrText());

		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		switch(x.ErrNativeCode()){
		case 3114:
			RspInfo.RspNo=ETSClearConstRspNoDBNotReady;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNotReady);
			break;
		case 12571:
			RspInfo.RspNo=ETSClearConstRspNoDBNetworkProblem;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNetworkProblem);
			m_Connection.Disconnect();
			Connect(); // ��������
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:�ع�ʧ�ܣ�[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* Ӧ����Ϣ */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeWareHouseQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*������Ʒ�洢�ֿ�����*/
void CDBProcessor::HandleWareHouseAddReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* ������Ʒ�洢�ֿ����� */
	CETSClearFieldsWareHouseAddReq WareHouseAddReq;
	Package.GetFields(&WareHouseAddReq,ETSClearFieldNoWareHouseAddReq);

	// Response
	CETSClearPackage RspPackage;
	/* ������Ʒ�洢�ֿ�Ӧ�� */
	CETSClearFieldsWareHouseAddRsp WareHouseAddRsp;
	/* Ӧ����Ϣ */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_WareHouse.WareHouseAdd");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* ������Ʒ�洢�ֿ����� */
		cmd.Param("i_UserID").setAsString()=WareHouseAddReq.UserID;
		cmd.Param("i_WareHouse").setAsString()=WareHouseAddReq.WareHouse;
		cmd.Param("i_WareHouseName").setAsString()=WareHouseAddReq.WareHouseName;
		cmd.Param("i_Location").setAsString()=WareHouseAddReq.Location;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* Ӧ����Ϣ */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* ������Ʒ�洢�ֿ�Ӧ�� */
		if(!RspInfo.RspNo){
			strcpy(WareHouseAddRsp.UserID,cmd.Param("o_UserID").asString().GetBuffer(0));
			RspPackage.PutFields(&WareHouseAddRsp,ETSClearFieldNoWareHouseAddRsp);
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeWareHouseAddRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleWareHouseAddReq:���ݿ����ʧ�ܣ�[%s]",(const char*)x.ErrText());

		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		switch(x.ErrNativeCode()){
		case 3114:
			RspInfo.RspNo=ETSClearConstRspNoDBNotReady;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNotReady);
			break;
		case 12571:
			RspInfo.RspNo=ETSClearConstRspNoDBNetworkProblem;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNetworkProblem);
			m_Connection.Disconnect();
			Connect(); // ��������
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:�ع�ʧ�ܣ�[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* Ӧ����Ϣ */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeWareHouseAddRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*�޸���Ʒ�洢�ֿ�����*/
void CDBProcessor::HandleWareHouseModifyReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* �޸���Ʒ�洢�ֿ����� */
	CETSClearFieldsWareHouseModifyReq WareHouseModifyReq;
	Package.GetFields(&WareHouseModifyReq,ETSClearFieldNoWareHouseModifyReq);

	// Response
	CETSClearPackage RspPackage;
	/* �޸���Ʒ�洢�ֿ�Ӧ�� */
	CETSClearFieldsWareHouseModifyRsp WareHouseModifyRsp;
	/* Ӧ����Ϣ */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_WareHouse.WareHouseModify");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* �޸���Ʒ�洢�ֿ����� */
		cmd.Param("i_UserID").setAsString()=WareHouseModifyReq.UserID;
		cmd.Param("i_WareHouse").setAsString()=WareHouseModifyReq.WareHouse;
		cmd.Param("i_WareHouseName").setAsString()=WareHouseModifyReq.WareHouseName;
		cmd.Param("i_Location").setAsString()=WareHouseModifyReq.Location;
		cmd.Param("i_WareHouseStatus").setAsString()=WareHouseModifyReq.WareHouseStatus;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* Ӧ����Ϣ */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* �޸���Ʒ�洢�ֿ�Ӧ�� */
		if(!RspInfo.RspNo){
			strcpy(WareHouseModifyRsp.UserID,cmd.Param("o_UserID").asString().GetBuffer(0));
			RspPackage.PutFields(&WareHouseModifyRsp,ETSClearFieldNoWareHouseModifyRsp);
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeWareHouseModifyRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleWareHouseModifyReq:���ݿ����ʧ�ܣ�[%s]",(const char*)x.ErrText());

		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		switch(x.ErrNativeCode()){
		case 3114:
			RspInfo.RspNo=ETSClearConstRspNoDBNotReady;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNotReady);
			break;
		case 12571:
			RspInfo.RspNo=ETSClearConstRspNoDBNetworkProblem;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNetworkProblem);
			m_Connection.Disconnect();
			Connect(); // ��������
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:�ع�ʧ�ܣ�[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* Ӧ����Ϣ */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeWareHouseModifyRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*ɾ����Ʒ�洢�ֿ�����*/
void CDBProcessor::HandleWareHouseDeleteReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* ɾ����Ʒ�洢�ֿ����� */
	CETSClearFieldsWareHouseDeleteReq WareHouseDeleteReq;
	Package.GetFields(&WareHouseDeleteReq,ETSClearFieldNoWareHouseDeleteReq);

	// Response
	CETSClearPackage RspPackage;
	/* ɾ����Ʒ�洢�ֿ�Ӧ�� */
	CETSClearFieldsWareHouseDeleteRsp WareHouseDeleteRsp;
	/* Ӧ����Ϣ */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_WareHouse.WareHouseDelete");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* ɾ����Ʒ�洢�ֿ����� */
		cmd.Param("i_UserID").setAsString()=WareHouseDeleteReq.UserID;
		cmd.Param("i_WareHouse").setAsString()=WareHouseDeleteReq.WareHouse;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* Ӧ����Ϣ */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* ɾ����Ʒ�洢�ֿ�Ӧ�� */
		if(!RspInfo.RspNo){
			strcpy(WareHouseDeleteRsp.UserID,cmd.Param("o_UserID").asString().GetBuffer(0));
			RspPackage.PutFields(&WareHouseDeleteRsp,ETSClearFieldNoWareHouseDeleteRsp);
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeWareHouseDeleteRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleWareHouseDeleteReq:���ݿ����ʧ�ܣ�[%s]",(const char*)x.ErrText());

		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		switch(x.ErrNativeCode()){
		case 3114:
			RspInfo.RspNo=ETSClearConstRspNoDBNotReady;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNotReady);
			break;
		case 12571:
			RspInfo.RspNo=ETSClearConstRspNoDBNetworkProblem;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNetworkProblem);
			m_Connection.Disconnect();
			Connect(); // ��������
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:�ع�ʧ�ܣ�[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* Ӧ����Ϣ */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeWareHouseDeleteRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*��ѯ����ֿ�����*/
void CDBProcessor::HandleDHouseQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* ��ѯ����ֿ����� */
	CETSClearFieldsDHouseQueryReq DHouseQueryReq;
	Package.GetFields(&DHouseQueryReq,ETSClearFieldNoDHouseQueryReq);

	// Response
	CETSClearPackage RspPackage;
	/* ��ѯ����ֿ�Ӧ�� */
	CETSClearFieldsDHouseQueryRsp DHouseQueryRsp;
	CBMLRecordSet DHouseQueryRspList;
	SACommand *pCursor=NULL;
	/* Ӧ����Ϣ */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_DHouse.DHouseQuery");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* ��ѯ����ֿ����� */
		cmd.Param("i_UserID").setAsString()=DHouseQueryReq.UserID;
		cmd.Param("i_Variety").setAsString()=DHouseQueryReq.Variety;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* Ӧ����Ϣ */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* ��ѯ����ֿ�Ӧ�� */
		if(!RspInfo.RspNo){
			RspPackage.PutRecordSet(ETSClearFieldNoDHouseQueryRspList,&DHouseQueryRspList);
			pCursor = cmd.Param("o_Cursor");
			while(pCursor->FetchNext())
			{
				strcpy(DHouseQueryRsp.Variety,pCursor->Field("Variety").asString().GetBuffer(0));
				strcpy(DHouseQueryRsp.WareHouse,pCursor->Field("WareHouse").asString().GetBuffer(0));
				DHouseQueryRsp.PreDisc=pCursor->Field("PreDisc").asDouble();

				if(DHouseQueryRspList.Insert(&DHouseQueryRsp)<0){
					RspPackage.SetEndFlag(1);
					m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeDHouseQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);

					// ����
					RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);
					RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
					RspPackage.PutRecordSet(ETSClearFieldNoDHouseQueryRspList,&DHouseQueryRspList);
					DHouseQueryRspList.Insert(&DHouseQueryRsp);
				}
			}
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeDHouseQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleDHouseQueryReq:���ݿ����ʧ�ܣ�[%s]",(const char*)x.ErrText());

		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		switch(x.ErrNativeCode()){
		case 3114:
			RspInfo.RspNo=ETSClearConstRspNoDBNotReady;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNotReady);
			break;
		case 12571:
			RspInfo.RspNo=ETSClearConstRspNoDBNetworkProblem;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNetworkProblem);
			m_Connection.Disconnect();
			Connect(); // ��������
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:�ع�ʧ�ܣ�[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* Ӧ����Ϣ */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeDHouseQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*���ӽ���ֿ�����*/
void CDBProcessor::HandleDHouseAddReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* ���ӽ���ֿ����� */
	CETSClearFieldsDHouseAddReq DHouseAddReq;
	Package.GetFields(&DHouseAddReq,ETSClearFieldNoDHouseAddReq);

	// Response
	CETSClearPackage RspPackage;
	/* ���ӽ���ֿ�Ӧ�� */
	CETSClearFieldsDHouseAddRsp DHouseAddRsp;
	/* Ӧ����Ϣ */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_DHouse.DHouseAdd");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* ���ӽ���ֿ����� */
		cmd.Param("i_UserID").setAsString()=DHouseAddReq.UserID;
		cmd.Param("i_Variety").setAsString()=DHouseAddReq.Variety;
		cmd.Param("i_WareHouse").setAsString()=DHouseAddReq.WareHouse;
		cmd.Param("i_PreDisc").setAsDouble()=DHouseAddReq.PreDisc;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* Ӧ����Ϣ */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* ���ӽ���ֿ�Ӧ�� */
		if(!RspInfo.RspNo){
			strcpy(DHouseAddRsp.UserID,cmd.Param("o_UserID").asString().GetBuffer(0));
			RspPackage.PutFields(&DHouseAddRsp,ETSClearFieldNoDHouseAddRsp);
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeDHouseAddRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleDHouseAddReq:���ݿ����ʧ�ܣ�[%s]",(const char*)x.ErrText());

		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		switch(x.ErrNativeCode()){
		case 3114:
			RspInfo.RspNo=ETSClearConstRspNoDBNotReady;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNotReady);
			break;
		case 12571:
			RspInfo.RspNo=ETSClearConstRspNoDBNetworkProblem;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNetworkProblem);
			m_Connection.Disconnect();
			Connect(); // ��������
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:�ع�ʧ�ܣ�[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* Ӧ����Ϣ */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeDHouseAddRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*�޸Ľ���ֿ�����*/
void CDBProcessor::HandleDHouseModifyReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* �޸Ľ���ֿ����� */
	CETSClearFieldsDHouseModifyReq DHouseModifyReq;
	Package.GetFields(&DHouseModifyReq,ETSClearFieldNoDHouseModifyReq);

	// Response
	CETSClearPackage RspPackage;
	/* �޸Ľ���ֿ�Ӧ�� */
	CETSClearFieldsDHouseModifyRsp DHouseModifyRsp;
	/* Ӧ����Ϣ */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_DHouse.DHouseModify");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* �޸Ľ���ֿ����� */
		cmd.Param("i_UserID").setAsString()=DHouseModifyReq.UserID;
		cmd.Param("i_Variety").setAsString()=DHouseModifyReq.Variety;
		cmd.Param("i_WareHouse").setAsString()=DHouseModifyReq.WareHouse;
		cmd.Param("i_PreDisc").setAsDouble()=DHouseModifyReq.PreDisc;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* Ӧ����Ϣ */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* �޸Ľ���ֿ�Ӧ�� */
		if(!RspInfo.RspNo){
			strcpy(DHouseModifyRsp.UserID,cmd.Param("o_UserID").asString().GetBuffer(0));
			RspPackage.PutFields(&DHouseModifyRsp,ETSClearFieldNoDHouseModifyRsp);
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeDHouseModifyRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleDHouseModifyReq:���ݿ����ʧ�ܣ�[%s]",(const char*)x.ErrText());

		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		switch(x.ErrNativeCode()){
		case 3114:
			RspInfo.RspNo=ETSClearConstRspNoDBNotReady;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNotReady);
			break;
		case 12571:
			RspInfo.RspNo=ETSClearConstRspNoDBNetworkProblem;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNetworkProblem);
			m_Connection.Disconnect();
			Connect(); // ��������
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:�ع�ʧ�ܣ�[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* Ӧ����Ϣ */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeDHouseModifyRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*ɾ������ֿ�����*/
void CDBProcessor::HandleDHouseDeleteReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* ɾ������ֿ����� */
	CETSClearFieldsDHouseDeleteReq DHouseDeleteReq;
	Package.GetFields(&DHouseDeleteReq,ETSClearFieldNoDHouseDeleteReq);

	// Response
	CETSClearPackage RspPackage;
	/* ɾ������ֿ�Ӧ�� */
	CETSClearFieldsDHouseDeleteRsp DHouseDeleteRsp;
	/* Ӧ����Ϣ */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_DHouse.DHouseDelete");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* ɾ������ֿ����� */
		cmd.Param("i_UserID").setAsString()=DHouseDeleteReq.UserID;
		cmd.Param("i_Variety").setAsString()=DHouseDeleteReq.Variety;
		cmd.Param("i_WareHouse").setAsString()=DHouseDeleteReq.WareHouse;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* Ӧ����Ϣ */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* ɾ������ֿ�Ӧ�� */
		if(!RspInfo.RspNo){
			strcpy(DHouseDeleteRsp.UserID,cmd.Param("o_UserID").asString().GetBuffer(0));
			RspPackage.PutFields(&DHouseDeleteRsp,ETSClearFieldNoDHouseDeleteRsp);
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeDHouseDeleteRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleDHouseDeleteReq:���ݿ����ʧ�ܣ�[%s]",(const char*)x.ErrText());

		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		switch(x.ErrNativeCode()){
		case 3114:
			RspInfo.RspNo=ETSClearConstRspNoDBNotReady;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNotReady);
			break;
		case 12571:
			RspInfo.RspNo=ETSClearConstRspNoDBNetworkProblem;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNetworkProblem);
			m_Connection.Disconnect();
			Connect(); // ��������
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:�ع�ʧ�ܣ�[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* Ӧ����Ϣ */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeDHouseDeleteRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*�û���Ϣ��ѯ����*/
void CDBProcessor::HandleUserQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* �û���Ϣ��ѯ���� */
	CETSClearFieldsUserQueryReq UserQueryReq;
	Package.GetFields(&UserQueryReq,ETSClearFieldNoUserQueryReq);

	// Response
	CETSClearPackage RspPackage;
	/* �û���Ϣ��ѯӦ�� */
	CETSClearFieldsUserQueryRsp UserQueryRsp;
	CBMLRecordSet UserQueryRspList;
	SACommand *pCursor=NULL;
	/* Ӧ����Ϣ */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_User.UserQuery");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* �û���Ϣ��ѯ���� */
		cmd.Param("i_UserID").setAsString()=UserQueryReq.UserID;
		cmd.Param("i_OperID").setAsString()=UserQueryReq.OperID;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* Ӧ����Ϣ */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* �û���Ϣ��ѯӦ�� */
		if(!RspInfo.RspNo){
			RspPackage.PutRecordSet(ETSClearFieldNoUserQueryRspList,&UserQueryRspList);
			pCursor = cmd.Param("o_Cursor");
			while(pCursor->FetchNext())
			{
				strcpy(UserQueryRsp.UserID,pCursor->Field("UserID").asString().GetBuffer(0));
				strcpy(UserQueryRsp.UserName,pCursor->Field("UserName").asString().GetBuffer(0));
				strcpy(UserQueryRsp.DepartmentID,pCursor->Field("DepartmentID").asString().GetBuffer(0));
				memcpy(&UserQueryRsp.Flag,pCursor->Field("Flag").asString().GetBuffer(0),1);
				strcpy(UserQueryRsp.Password,pCursor->Field("Password").asString().GetBuffer(0));
				strcpy(UserQueryRsp.AccessIP,pCursor->Field("AccessIP").asString().GetBuffer(0));
				strcpy(UserQueryRsp.Description,pCursor->Field("Description").asString().GetBuffer(0));

				if(UserQueryRspList.Insert(&UserQueryRsp)<0){
					RspPackage.SetEndFlag(1);
					m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeUserQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);

					// ����
					RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);
					RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
					RspPackage.PutRecordSet(ETSClearFieldNoUserQueryRspList,&UserQueryRspList);
					UserQueryRspList.Insert(&UserQueryRsp);
				}
			}
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeUserQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleUserQueryReq:���ݿ����ʧ�ܣ�[%s]",(const char*)x.ErrText());

		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		switch(x.ErrNativeCode()){
		case 3114:
			RspInfo.RspNo=ETSClearConstRspNoDBNotReady;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNotReady);
			break;
		case 12571:
			RspInfo.RspNo=ETSClearConstRspNoDBNetworkProblem;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNetworkProblem);
			m_Connection.Disconnect();
			Connect(); // ��������
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:�ع�ʧ�ܣ�[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* Ӧ����Ϣ */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeUserQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*�û���Ϣ��������*/
void CDBProcessor::HandleUserAddReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* �û���Ϣ�������� */
	CETSClearFieldsUserAddReq UserAddReq;
	Package.GetFields(&UserAddReq,ETSClearFieldNoUserAddReq);

	// Response
	CETSClearPackage RspPackage;
	/* �û���Ϣ����Ӧ�� */
	CETSClearFieldsUserAddRsp UserAddRsp;
	/* Ӧ����Ϣ */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_User.UserAdd");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* �û���Ϣ�������� */
		cmd.Param("i_UserID").setAsString()=UserAddReq.UserID;
		cmd.Param("i_OperID").setAsString()=UserAddReq.OperID;
		cmd.Param("i_UserName").setAsString()=UserAddReq.UserName;
		cmd.Param("i_DepartmentID").setAsString()=UserAddReq.DepartmentID;
		cmd.Param("i_Flag").setAsString()=UserAddReq.Flag;
		cmd.Param("i_Password").setAsString()=UserAddReq.Password;
		cmd.Param("i_AccessIP").setAsString()=UserAddReq.AccessIP;
		cmd.Param("i_Description").setAsString()=UserAddReq.Description;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* Ӧ����Ϣ */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* �û���Ϣ����Ӧ�� */
		if(!RspInfo.RspNo){
			strcpy(UserAddRsp.UserID,cmd.Param("o_UserID").asString().GetBuffer(0));
			RspPackage.PutFields(&UserAddRsp,ETSClearFieldNoUserAddRsp);
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeUserAddRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleUserAddReq:���ݿ����ʧ�ܣ�[%s]",(const char*)x.ErrText());

		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		switch(x.ErrNativeCode()){
		case 3114:
			RspInfo.RspNo=ETSClearConstRspNoDBNotReady;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNotReady);
			break;
		case 12571:
			RspInfo.RspNo=ETSClearConstRspNoDBNetworkProblem;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNetworkProblem);
			m_Connection.Disconnect();
			Connect(); // ��������
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:�ع�ʧ�ܣ�[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* Ӧ����Ϣ */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeUserAddRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*�û���Ϣɾ������*/
void CDBProcessor::HandleUserDeleteReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* �û���Ϣɾ������ */
	CETSClearFieldsUserDeleteReq UserDeleteReq;
	Package.GetFields(&UserDeleteReq,ETSClearFieldNoUserDeleteReq);

	// Response
	CETSClearPackage RspPackage;
	/* �û���Ϣɾ��Ӧ�� */
	CETSClearFieldsUserDeleteRsp UserDeleteRsp;
	/* Ӧ����Ϣ */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_User.UserDelete");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* �û���Ϣɾ������ */
		cmd.Param("i_UserID").setAsString()=UserDeleteReq.UserID;
		cmd.Param("i_OperID").setAsString()=UserDeleteReq.OperID;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* Ӧ����Ϣ */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* �û���Ϣɾ��Ӧ�� */
		if(!RspInfo.RspNo){
			strcpy(UserDeleteRsp.UserID,cmd.Param("o_UserID").asString().GetBuffer(0));
			RspPackage.PutFields(&UserDeleteRsp,ETSClearFieldNoUserDeleteRsp);
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeUserDeleteRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleUserDeleteReq:���ݿ����ʧ�ܣ�[%s]",(const char*)x.ErrText());

		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		switch(x.ErrNativeCode()){
		case 3114:
			RspInfo.RspNo=ETSClearConstRspNoDBNotReady;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNotReady);
			break;
		case 12571:
			RspInfo.RspNo=ETSClearConstRspNoDBNetworkProblem;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNetworkProblem);
			m_Connection.Disconnect();
			Connect(); // ��������
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:�ع�ʧ�ܣ�[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* Ӧ����Ϣ */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeUserDeleteRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*�û���Ϣ�޸�����*/
void CDBProcessor::HandleUserModifyReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* �û���Ϣ�޸����� */
	CETSClearFieldsUserModifyReq UserModifyReq;
	Package.GetFields(&UserModifyReq,ETSClearFieldNoUserModifyReq);

	// Response
	CETSClearPackage RspPackage;
	/* �û���Ϣ�޸�Ӧ�� */
	CETSClearFieldsUserModifyRsp UserModifyRsp;
	/* Ӧ����Ϣ */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_User.UserModify");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* �û���Ϣ�޸����� */
		cmd.Param("i_UserID").setAsString()=UserModifyReq.UserID;
		cmd.Param("i_OperID").setAsString()=UserModifyReq.OperID;
		cmd.Param("i_UserName").setAsString()=UserModifyReq.UserName;
		cmd.Param("i_DepartmentID").setAsString()=UserModifyReq.DepartmentID;
		cmd.Param("i_Flag").setAsString()=UserModifyReq.Flag;
		cmd.Param("i_Password").setAsString()=UserModifyReq.Password;
		cmd.Param("i_AccessIP").setAsString()=UserModifyReq.AccessIP;
		cmd.Param("i_Description").setAsString()=UserModifyReq.Description;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* Ӧ����Ϣ */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* �û���Ϣ�޸�Ӧ�� */
		if(!RspInfo.RspNo){
			strcpy(UserModifyRsp.UserID,cmd.Param("o_UserID").asString().GetBuffer(0));
			RspPackage.PutFields(&UserModifyRsp,ETSClearFieldNoUserModifyRsp);
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeUserModifyRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleUserModifyReq:���ݿ����ʧ�ܣ�[%s]",(const char*)x.ErrText());

		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		switch(x.ErrNativeCode()){
		case 3114:
			RspInfo.RspNo=ETSClearConstRspNoDBNotReady;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNotReady);
			break;
		case 12571:
			RspInfo.RspNo=ETSClearConstRspNoDBNetworkProblem;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNetworkProblem);
			m_Connection.Disconnect();
			Connect(); // ��������
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:�ع�ʧ�ܣ�[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* Ӧ����Ϣ */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeUserModifyRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*������Ϣ��ѯ����*/
void CDBProcessor::HandleDepartmentQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* ������Ϣ��ѯ���� */
	CETSClearFieldsDepartmentQueryReq DepartmentQueryReq;
	Package.GetFields(&DepartmentQueryReq,ETSClearFieldNoDepartmentQueryReq);

	// Response
	CETSClearPackage RspPackage;
	/* ������Ϣ��ѯӦ�� */
	CETSClearFieldsDepartmentQueryRsp DepartmentQueryRsp;
	CBMLRecordSet DepartmentQueryRspList;
	SACommand *pCursor=NULL;
	/* Ӧ����Ϣ */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_Department.DepartmentQuery");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* ������Ϣ��ѯ���� */
		cmd.Param("i_UserID").setAsString()=DepartmentQueryReq.UserID;
		cmd.Param("i_DepartmentID").setAsString()=DepartmentQueryReq.DepartmentID;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* Ӧ����Ϣ */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* ������Ϣ��ѯӦ�� */
		if(!RspInfo.RspNo){
			RspPackage.PutRecordSet(ETSClearFieldNoDepartmentQueryRspList,&DepartmentQueryRspList);
			pCursor = cmd.Param("o_Cursor");
			while(pCursor->FetchNext())
			{
				strcpy(DepartmentQueryRsp.DepartmentID,pCursor->Field("DepartmentID").asString().GetBuffer(0));
				strcpy(DepartmentQueryRsp.DepartmentName,pCursor->Field("DepartmentName").asString().GetBuffer(0));
				strcpy(DepartmentQueryRsp.Description,pCursor->Field("Description").asString().GetBuffer(0));

				if(DepartmentQueryRspList.Insert(&DepartmentQueryRsp)<0){
					RspPackage.SetEndFlag(1);
					m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeDepartmentQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);

					// ����
					RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);
					RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
					RspPackage.PutRecordSet(ETSClearFieldNoDepartmentQueryRspList,&DepartmentQueryRspList);
					DepartmentQueryRspList.Insert(&DepartmentQueryRsp);
				}
			}
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeDepartmentQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleDepartmentQueryReq:���ݿ����ʧ�ܣ�[%s]",(const char*)x.ErrText());

		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		switch(x.ErrNativeCode()){
		case 3114:
			RspInfo.RspNo=ETSClearConstRspNoDBNotReady;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNotReady);
			break;
		case 12571:
			RspInfo.RspNo=ETSClearConstRspNoDBNetworkProblem;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNetworkProblem);
			m_Connection.Disconnect();
			Connect(); // ��������
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:�ع�ʧ�ܣ�[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* Ӧ����Ϣ */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeDepartmentQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*������Ϣ��������*/
void CDBProcessor::HandleDepartmentAddReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* ������Ϣ�������� */
	CETSClearFieldsDepartmentAddReq DepartmentAddReq;
	Package.GetFields(&DepartmentAddReq,ETSClearFieldNoDepartmentAddReq);

	// Response
	CETSClearPackage RspPackage;
	/* ������Ϣ����Ӧ�� */
	CETSClearFieldsDepartmentAddRsp DepartmentAddRsp;
	/* Ӧ����Ϣ */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_Department.DepartmentAdd");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* ������Ϣ�������� */
		cmd.Param("i_UserID").setAsString()=DepartmentAddReq.UserID;
		cmd.Param("i_DepartmentID").setAsString()=DepartmentAddReq.DepartmentID;
		cmd.Param("i_DepartmentName").setAsString()=DepartmentAddReq.DepartmentName;
		cmd.Param("i_Description").setAsString()=DepartmentAddReq.Description;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* Ӧ����Ϣ */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* ������Ϣ����Ӧ�� */
		if(!RspInfo.RspNo){
			strcpy(DepartmentAddRsp.UserID,cmd.Param("o_UserID").asString().GetBuffer(0));
			RspPackage.PutFields(&DepartmentAddRsp,ETSClearFieldNoDepartmentAddRsp);
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeDepartmentAddRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleDepartmentAddReq:���ݿ����ʧ�ܣ�[%s]",(const char*)x.ErrText());

		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		switch(x.ErrNativeCode()){
		case 3114:
			RspInfo.RspNo=ETSClearConstRspNoDBNotReady;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNotReady);
			break;
		case 12571:
			RspInfo.RspNo=ETSClearConstRspNoDBNetworkProblem;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNetworkProblem);
			m_Connection.Disconnect();
			Connect(); // ��������
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:�ع�ʧ�ܣ�[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* Ӧ����Ϣ */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeDepartmentAddRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*������Ϣ�޸�����*/
void CDBProcessor::HandleDepartmentModifyReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* ������Ϣ�޸����� */
	CETSClearFieldsDepartmentModifyReq DepartmentModifyReq;
	Package.GetFields(&DepartmentModifyReq,ETSClearFieldNoDepartmentModifyReq);

	// Response
	CETSClearPackage RspPackage;
	/* ������Ϣ�޸�Ӧ�� */
	CETSClearFieldsDepartmentModifyRsp DepartmentModifyRsp;
	/* Ӧ����Ϣ */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_Department.DepartmentModify");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* ������Ϣ�޸����� */
		cmd.Param("i_UserID").setAsString()=DepartmentModifyReq.UserID;
		cmd.Param("i_DepartmentID").setAsString()=DepartmentModifyReq.DepartmentID;
		cmd.Param("i_DepartmentName").setAsString()=DepartmentModifyReq.DepartmentName;
		cmd.Param("i_Description").setAsString()=DepartmentModifyReq.Description;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* Ӧ����Ϣ */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* ������Ϣ�޸�Ӧ�� */
		if(!RspInfo.RspNo){
			strcpy(DepartmentModifyRsp.UserID,cmd.Param("o_UserID").asString().GetBuffer(0));
			RspPackage.PutFields(&DepartmentModifyRsp,ETSClearFieldNoDepartmentModifyRsp);
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeDepartmentModifyRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleDepartmentModifyReq:���ݿ����ʧ�ܣ�[%s]",(const char*)x.ErrText());

		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		switch(x.ErrNativeCode()){
		case 3114:
			RspInfo.RspNo=ETSClearConstRspNoDBNotReady;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNotReady);
			break;
		case 12571:
			RspInfo.RspNo=ETSClearConstRspNoDBNetworkProblem;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNetworkProblem);
			m_Connection.Disconnect();
			Connect(); // ��������
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:�ع�ʧ�ܣ�[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* Ӧ����Ϣ */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeDepartmentModifyRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*������Ϣɾ������*/
void CDBProcessor::HandleDepartmentDeleteReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* ������Ϣɾ������ */
	CETSClearFieldsDepartmentDeleteReq DepartmentDeleteReq;
	Package.GetFields(&DepartmentDeleteReq,ETSClearFieldNoDepartmentDeleteReq);

	// Response
	CETSClearPackage RspPackage;
	/* ������Ϣɾ��Ӧ�� */
	CETSClearFieldsDepartmentDeleteRsp DepartmentDeleteRsp;
	/* Ӧ����Ϣ */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_Department.DepartmentDelete");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* ������Ϣɾ������ */
		cmd.Param("i_UserID").setAsString()=DepartmentDeleteReq.UserID;
		cmd.Param("i_DepartmentID").setAsString()=DepartmentDeleteReq.DepartmentID;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* Ӧ����Ϣ */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* ������Ϣɾ��Ӧ�� */
		if(!RspInfo.RspNo){
			strcpy(DepartmentDeleteRsp.UserID,cmd.Param("o_UserID").asString().GetBuffer(0));
			RspPackage.PutFields(&DepartmentDeleteRsp,ETSClearFieldNoDepartmentDeleteRsp);
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeDepartmentDeleteRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleDepartmentDeleteReq:���ݿ����ʧ�ܣ�[%s]",(const char*)x.ErrText());

		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		switch(x.ErrNativeCode()){
		case 3114:
			RspInfo.RspNo=ETSClearConstRspNoDBNotReady;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNotReady);
			break;
		case 12571:
			RspInfo.RspNo=ETSClearConstRspNoDBNetworkProblem;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNetworkProblem);
			m_Connection.Disconnect();
			Connect(); // ��������
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:�ع�ʧ�ܣ�[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* Ӧ����Ϣ */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeDepartmentDeleteRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*��λ��Ϣ��ѯ����*/
void CDBProcessor::HandlePositionQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* ��λ��Ϣ��ѯ���� */
	CETSClearFieldsPositionQueryReq PositionQueryReq;
	Package.GetFields(&PositionQueryReq,ETSClearFieldNoPositionQueryReq);

	// Response
	CETSClearPackage RspPackage;
	/* ��λ��Ϣ��ѯӦ�� */
	CETSClearFieldsPositionQueryRsp PositionQueryRsp;
	CBMLRecordSet PositionQueryRspList;
	SACommand *pCursor=NULL;
	/* Ӧ����Ϣ */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_Position.PositionQuery");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* ��λ��Ϣ��ѯ���� */
		cmd.Param("i_UserID").setAsString()=PositionQueryReq.UserID;
		cmd.Param("i_PositionID").setAsString()=PositionQueryReq.PositionID;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* Ӧ����Ϣ */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* ��λ��Ϣ��ѯӦ�� */
		if(!RspInfo.RspNo){
			RspPackage.PutRecordSet(ETSClearFieldNoPositionQueryRspList,&PositionQueryRspList);
			pCursor = cmd.Param("o_Cursor");
			while(pCursor->FetchNext())
			{
				strcpy(PositionQueryRsp.PositionID,pCursor->Field("PositionID").asString().GetBuffer(0));
				strcpy(PositionQueryRsp.PositionName,pCursor->Field("PositionName").asString().GetBuffer(0));
				strcpy(PositionQueryRsp.DepartmentID,pCursor->Field("DepartmentID").asString().GetBuffer(0));

				if(PositionQueryRspList.Insert(&PositionQueryRsp)<0){
					RspPackage.SetEndFlag(1);
					m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypePositionQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);

					// ����
					RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);
					RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
					RspPackage.PutRecordSet(ETSClearFieldNoPositionQueryRspList,&PositionQueryRspList);
					PositionQueryRspList.Insert(&PositionQueryRsp);
				}
			}
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypePositionQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandlePositionQueryReq:���ݿ����ʧ�ܣ�[%s]",(const char*)x.ErrText());

		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		switch(x.ErrNativeCode()){
		case 3114:
			RspInfo.RspNo=ETSClearConstRspNoDBNotReady;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNotReady);
			break;
		case 12571:
			RspInfo.RspNo=ETSClearConstRspNoDBNetworkProblem;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNetworkProblem);
			m_Connection.Disconnect();
			Connect(); // ��������
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:�ع�ʧ�ܣ�[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* Ӧ����Ϣ */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypePositionQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*��λ��Ϣ��������*/
void CDBProcessor::HandlePositionAddReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* ��λ��Ϣ�������� */
	CETSClearFieldsPositionAddReq PositionAddReq;
	Package.GetFields(&PositionAddReq,ETSClearFieldNoPositionAddReq);

	// Response
	CETSClearPackage RspPackage;
	/* ��λ��Ϣ����Ӧ�� */
	CETSClearFieldsPositionAddRsp PositionAddRsp;
	/* Ӧ����Ϣ */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_Position.PositionAdd");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* ��λ��Ϣ�������� */
		cmd.Param("i_UserID").setAsString()=PositionAddReq.UserID;
		cmd.Param("i_PositionID").setAsString()=PositionAddReq.PositionID;
		cmd.Param("i_PositionName").setAsString()=PositionAddReq.PositionName;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* Ӧ����Ϣ */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* ��λ��Ϣ����Ӧ�� */
		if(!RspInfo.RspNo){
			strcpy(PositionAddRsp.UserID,cmd.Param("o_UserID").asString().GetBuffer(0));
			RspPackage.PutFields(&PositionAddRsp,ETSClearFieldNoPositionAddRsp);
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypePositionAddRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandlePositionAddReq:���ݿ����ʧ�ܣ�[%s]",(const char*)x.ErrText());

		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		switch(x.ErrNativeCode()){
		case 3114:
			RspInfo.RspNo=ETSClearConstRspNoDBNotReady;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNotReady);
			break;
		case 12571:
			RspInfo.RspNo=ETSClearConstRspNoDBNetworkProblem;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNetworkProblem);
			m_Connection.Disconnect();
			Connect(); // ��������
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:�ع�ʧ�ܣ�[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* Ӧ����Ϣ */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypePositionAddRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*��λ��Ϣ�޸�����*/
void CDBProcessor::HandlePositionModifyReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* ��λ��Ϣ�޸����� */
	CETSClearFieldsPositionModifyReq PositionModifyReq;
	Package.GetFields(&PositionModifyReq,ETSClearFieldNoPositionModifyReq);

	// Response
	CETSClearPackage RspPackage;
	/* ��λ��Ϣ�޸�Ӧ�� */
	CETSClearFieldsPositionModifyRsp PositionModifyRsp;
	/* Ӧ����Ϣ */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_Position.PositionModify");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* ��λ��Ϣ�޸����� */
		cmd.Param("i_UserID").setAsString()=PositionModifyReq.UserID;
		cmd.Param("i_PositionID").setAsString()=PositionModifyReq.PositionID;
		cmd.Param("i_PositionName").setAsString()=PositionModifyReq.PositionName;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* Ӧ����Ϣ */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* ��λ��Ϣ�޸�Ӧ�� */
		if(!RspInfo.RspNo){
			strcpy(PositionModifyRsp.UserID,cmd.Param("o_UserID").asString().GetBuffer(0));
			RspPackage.PutFields(&PositionModifyRsp,ETSClearFieldNoPositionModifyRsp);
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypePositionModifyRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandlePositionModifyReq:���ݿ����ʧ�ܣ�[%s]",(const char*)x.ErrText());

		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		switch(x.ErrNativeCode()){
		case 3114:
			RspInfo.RspNo=ETSClearConstRspNoDBNotReady;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNotReady);
			break;
		case 12571:
			RspInfo.RspNo=ETSClearConstRspNoDBNetworkProblem;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNetworkProblem);
			m_Connection.Disconnect();
			Connect(); // ��������
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:�ع�ʧ�ܣ�[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* Ӧ����Ϣ */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypePositionModifyRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*��λ��Ϣɾ������*/
void CDBProcessor::HandlePositionDeleteReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* ��λ��Ϣɾ������ */
	CETSClearFieldsPositionDeleteReq PositionDeleteReq;
	Package.GetFields(&PositionDeleteReq,ETSClearFieldNoPositionDeleteReq);

	// Response
	CETSClearPackage RspPackage;
	/* ��λ��Ϣɾ��Ӧ�� */
	CETSClearFieldsPositionDeleteRsp PositionDeleteRsp;
	/* Ӧ����Ϣ */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_Position.PositionDelete");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* ��λ��Ϣɾ������ */
		cmd.Param("i_UserID").setAsString()=PositionDeleteReq.UserID;
		cmd.Param("i_PositionID").setAsString()=PositionDeleteReq.PositionID;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* Ӧ����Ϣ */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* ��λ��Ϣɾ��Ӧ�� */
		if(!RspInfo.RspNo){
			strcpy(PositionDeleteRsp.UserID,cmd.Param("o_UserID").asString().GetBuffer(0));
			RspPackage.PutFields(&PositionDeleteRsp,ETSClearFieldNoPositionDeleteRsp);
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypePositionDeleteRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandlePositionDeleteReq:���ݿ����ʧ�ܣ�[%s]",(const char*)x.ErrText());

		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		switch(x.ErrNativeCode()){
		case 3114:
			RspInfo.RspNo=ETSClearConstRspNoDBNotReady;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNotReady);
			break;
		case 12571:
			RspInfo.RspNo=ETSClearConstRspNoDBNetworkProblem;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNetworkProblem);
			m_Connection.Disconnect();
			Connect(); // ��������
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:�ع�ʧ�ܣ�[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* Ӧ����Ϣ */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypePositionDeleteRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*����Ȩ�޲�ѯ����*/
void CDBProcessor::HandleDepAuthorityQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* ����Ȩ�޲�ѯ���� */
	CETSClearFieldsDepAuthorityQueryReq DepAuthorityQueryReq;
	Package.GetFields(&DepAuthorityQueryReq,ETSClearFieldNoDepAuthorityQueryReq);

	// Response
	CETSClearPackage RspPackage;
	/* ����Ȩ�޲�ѯӦ�� */
	CETSClearFieldsDepAuthorityQueryRsp DepAuthorityQueryRsp;
	CBMLRecordSet DepAuthorityQueryRspList;
	SACommand *pCursor=NULL;
	/* Ӧ����Ϣ */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_DepAuthority.DepAuthorityQuery");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* ����Ȩ�޲�ѯ���� */
		cmd.Param("i_UserID").setAsString()=DepAuthorityQueryReq.UserID;
		cmd.Param("i_DepartmentID").setAsString()=DepAuthorityQueryReq.DepartmentID;
		cmd.Param("i_AuthorityID").setAsString()=DepAuthorityQueryReq.AuthorityID;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* Ӧ����Ϣ */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* ����Ȩ�޲�ѯӦ�� */
		if(!RspInfo.RspNo){
			RspPackage.PutRecordSet(ETSClearFieldNoDepAuthorityQueryRspList,&DepAuthorityQueryRspList);
			pCursor = cmd.Param("o_Cursor");
			while(pCursor->FetchNext())
			{
				strcpy(DepAuthorityQueryRsp.DepartmentID,pCursor->Field("DepartmentID").asString().GetBuffer(0));
				strcpy(DepAuthorityQueryRsp.AuthorityID,pCursor->Field("AuthorityID").asString().GetBuffer(0));
				strcpy(DepAuthorityQueryRsp.AuthorityName,pCursor->Field("AuthorityName").asString().GetBuffer(0));

				if(DepAuthorityQueryRspList.Insert(&DepAuthorityQueryRsp)<0){
					RspPackage.SetEndFlag(1);
					m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeDepAuthorityQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);

					// ����
					RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);
					RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
					RspPackage.PutRecordSet(ETSClearFieldNoDepAuthorityQueryRspList,&DepAuthorityQueryRspList);
					DepAuthorityQueryRspList.Insert(&DepAuthorityQueryRsp);
				}
			}
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeDepAuthorityQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleDepAuthorityQueryReq:���ݿ����ʧ�ܣ�[%s]",(const char*)x.ErrText());

		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		switch(x.ErrNativeCode()){
		case 3114:
			RspInfo.RspNo=ETSClearConstRspNoDBNotReady;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNotReady);
			break;
		case 12571:
			RspInfo.RspNo=ETSClearConstRspNoDBNetworkProblem;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNetworkProblem);
			m_Connection.Disconnect();
			Connect(); // ��������
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:�ع�ʧ�ܣ�[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* Ӧ����Ϣ */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeDepAuthorityQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*ȫȨ�޲�ѯ����*/
void CDBProcessor::HandleAuthorityQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* ȫȨ�޲�ѯ���� */
	CETSClearFieldsAuthorityQueryReq AuthorityQueryReq;
	Package.GetFields(&AuthorityQueryReq,ETSClearFieldNoAuthorityQueryReq);

	// Response
	CETSClearPackage RspPackage;
	/* ȫȨ�޲�ѯӦ�� */
	CETSClearFieldsAuthorityQueryRsp AuthorityQueryRsp;
	CBMLRecordSet AuthorityQueryRspList;
	SACommand *pCursor=NULL;
	/* Ӧ����Ϣ */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_DepAuthority.AuthorityQuery");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* ȫȨ�޲�ѯ���� */
		cmd.Param("i_UserID").setAsString()=AuthorityQueryReq.UserID;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* Ӧ����Ϣ */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* ȫȨ�޲�ѯӦ�� */
		if(!RspInfo.RspNo){
			RspPackage.PutRecordSet(ETSClearFieldNoAuthorityQueryRspList,&AuthorityQueryRspList);
			pCursor = cmd.Param("o_Cursor");
			while(pCursor->FetchNext())
			{
				strcpy(AuthorityQueryRsp.AuthorityID,pCursor->Field("AuthorityID").asString().GetBuffer(0));
				strcpy(AuthorityQueryRsp.AuthorityName,pCursor->Field("AuthorityName").asString().GetBuffer(0));

				if(AuthorityQueryRspList.Insert(&AuthorityQueryRsp)<0){
					RspPackage.SetEndFlag(1);
					m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeAuthorityQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);

					// ����
					RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);
					RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
					RspPackage.PutRecordSet(ETSClearFieldNoAuthorityQueryRspList,&AuthorityQueryRspList);
					AuthorityQueryRspList.Insert(&AuthorityQueryRsp);
				}
			}
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeAuthorityQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleAuthorityQueryReq:���ݿ����ʧ�ܣ�[%s]",(const char*)x.ErrText());

		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		switch(x.ErrNativeCode()){
		case 3114:
			RspInfo.RspNo=ETSClearConstRspNoDBNotReady;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNotReady);
			break;
		case 12571:
			RspInfo.RspNo=ETSClearConstRspNoDBNetworkProblem;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNetworkProblem);
			m_Connection.Disconnect();
			Connect(); // ��������
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:�ع�ʧ�ܣ�[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* Ӧ����Ϣ */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeAuthorityQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*����Ȩ����������*/
void CDBProcessor::HandleDepAuthorityAddReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* ����Ȩ���������� */
	CETSClearFieldsDepAuthorityAddReq DepAuthorityAddReq;
	Package.GetFields(&DepAuthorityAddReq,ETSClearFieldNoDepAuthorityAddReq);

	// Response
	CETSClearPackage RspPackage;
	/* ����Ȩ������Ӧ�� */
	CETSClearFieldsDepAuthorityAddRsp DepAuthorityAddRsp;
	/* Ӧ����Ϣ */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_DepAuthority.DepAuthorityAdd");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* ����Ȩ���������� */
		cmd.Param("i_UserID").setAsString()=DepAuthorityAddReq.UserID;
		cmd.Param("i_DepartmentID").setAsString()=DepAuthorityAddReq.DepartmentID;
		cmd.Param("i_AuthorityID").setAsString()=DepAuthorityAddReq.AuthorityID;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* Ӧ����Ϣ */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* ����Ȩ������Ӧ�� */
		if(!RspInfo.RspNo){
			strcpy(DepAuthorityAddRsp.UserID,cmd.Param("o_UserID").asString().GetBuffer(0));
			RspPackage.PutFields(&DepAuthorityAddRsp,ETSClearFieldNoDepAuthorityAddRsp);
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeDepAuthorityAddRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleDepAuthorityAddReq:���ݿ����ʧ�ܣ�[%s]",(const char*)x.ErrText());

		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		switch(x.ErrNativeCode()){
		case 3114:
			RspInfo.RspNo=ETSClearConstRspNoDBNotReady;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNotReady);
			break;
		case 12571:
			RspInfo.RspNo=ETSClearConstRspNoDBNetworkProblem;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNetworkProblem);
			m_Connection.Disconnect();
			Connect(); // ��������
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:�ع�ʧ�ܣ�[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* Ӧ����Ϣ */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeDepAuthorityAddRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*����Ȩ��ɾ������*/
void CDBProcessor::HandleDepAuthorityDeleteReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* ����Ȩ��ɾ������ */
	CETSClearFieldsDepAuthorityDeleteReq DepAuthorityDeleteReq;
	Package.GetFields(&DepAuthorityDeleteReq,ETSClearFieldNoDepAuthorityDeleteReq);

	// Response
	CETSClearPackage RspPackage;
	/* ����Ȩ��ɾ��Ӧ�� */
	CETSClearFieldsDepAuthorityDeleteRsp DepAuthorityDeleteRsp;
	/* Ӧ����Ϣ */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_DepAuthority.DepAuthorityDelete");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* ����Ȩ��ɾ������ */
		cmd.Param("i_UserID").setAsString()=DepAuthorityDeleteReq.UserID;
		cmd.Param("i_DepartmentID").setAsString()=DepAuthorityDeleteReq.DepartmentID;
		cmd.Param("i_AuthorityID").setAsString()=DepAuthorityDeleteReq.AuthorityID;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* Ӧ����Ϣ */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* ����Ȩ��ɾ��Ӧ�� */
		if(!RspInfo.RspNo){
			strcpy(DepAuthorityDeleteRsp.UserID,cmd.Param("o_UserID").asString().GetBuffer(0));
			RspPackage.PutFields(&DepAuthorityDeleteRsp,ETSClearFieldNoDepAuthorityDeleteRsp);
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeDepAuthorityDeleteRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleDepAuthorityDeleteReq:���ݿ����ʧ�ܣ�[%s]",(const char*)x.ErrText());

		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		switch(x.ErrNativeCode()){
		case 3114:
			RspInfo.RspNo=ETSClearConstRspNoDBNotReady;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNotReady);
			break;
		case 12571:
			RspInfo.RspNo=ETSClearConstRspNoDBNetworkProblem;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNetworkProblem);
			m_Connection.Disconnect();
			Connect(); // ��������
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:�ع�ʧ�ܣ�[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* Ӧ����Ϣ */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeDepAuthorityDeleteRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*��λȨ�޲�ѯ����*/
void CDBProcessor::HandlePosAuthorityQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* ��λȨ�޲�ѯ���� */
	CETSClearFieldsPosAuthorityQueryReq PosAuthorityQueryReq;
	Package.GetFields(&PosAuthorityQueryReq,ETSClearFieldNoPosAuthorityQueryReq);

	// Response
	CETSClearPackage RspPackage;
	/* ��λȨ�޲�ѯӦ�� */
	CETSClearFieldsPosAuthorityQueryRsp PosAuthorityQueryRsp;
	CBMLRecordSet PosAuthorityQueryRspList;
	SACommand *pCursor=NULL;
	/* Ӧ����Ϣ */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_PosAuthority.PosAuthorityQuery");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* ��λȨ�޲�ѯ���� */
		cmd.Param("i_UserID").setAsString()=PosAuthorityQueryReq.UserID;
		cmd.Param("i_PositionID").setAsString()=PosAuthorityQueryReq.PositionID;
		cmd.Param("i_AuthorityID").setAsString()=PosAuthorityQueryReq.AuthorityID;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* Ӧ����Ϣ */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* ��λȨ�޲�ѯӦ�� */
		if(!RspInfo.RspNo){
			RspPackage.PutRecordSet(ETSClearFieldNoPosAuthorityQueryRspList,&PosAuthorityQueryRspList);
			pCursor = cmd.Param("o_Cursor");
			while(pCursor->FetchNext())
			{
				strcpy(PosAuthorityQueryRsp.DepartmentID,pCursor->Field("DepartmentID").asString().GetBuffer(0));
				strcpy(PosAuthorityQueryRsp.PositionID,pCursor->Field("PositionID").asString().GetBuffer(0));
				strcpy(PosAuthorityQueryRsp.AuthorityID,pCursor->Field("AuthorityID").asString().GetBuffer(0));
				strcpy(PosAuthorityQueryRsp.AuthorityName,pCursor->Field("AuthorityName").asString().GetBuffer(0));

				if(PosAuthorityQueryRspList.Insert(&PosAuthorityQueryRsp)<0){
					RspPackage.SetEndFlag(1);
					m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypePosAuthorityQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);

					// ����
					RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);
					RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
					RspPackage.PutRecordSet(ETSClearFieldNoPosAuthorityQueryRspList,&PosAuthorityQueryRspList);
					PosAuthorityQueryRspList.Insert(&PosAuthorityQueryRsp);
				}
			}
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypePosAuthorityQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandlePosAuthorityQueryReq:���ݿ����ʧ�ܣ�[%s]",(const char*)x.ErrText());

		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		switch(x.ErrNativeCode()){
		case 3114:
			RspInfo.RspNo=ETSClearConstRspNoDBNotReady;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNotReady);
			break;
		case 12571:
			RspInfo.RspNo=ETSClearConstRspNoDBNetworkProblem;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNetworkProblem);
			m_Connection.Disconnect();
			Connect(); // ��������
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:�ع�ʧ�ܣ�[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* Ӧ����Ϣ */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypePosAuthorityQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*��λȨ����������*/
void CDBProcessor::HandlePosAuthorityAddReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* ��λȨ���������� */
	CETSClearFieldsPosAuthorityAddReq PosAuthorityAddReq;
	Package.GetFields(&PosAuthorityAddReq,ETSClearFieldNoPosAuthorityAddReq);

	// Response
	CETSClearPackage RspPackage;
	/* ��λȨ������Ӧ�� */
	CETSClearFieldsPosAuthorityAddRsp PosAuthorityAddRsp;
	/* Ӧ����Ϣ */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_PosAuthority.PosAuthorityAdd");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* ��λȨ���������� */
		cmd.Param("i_UserID").setAsString()=PosAuthorityAddReq.UserID;
		cmd.Param("i_PositionID").setAsString()=PosAuthorityAddReq.PositionID;
		cmd.Param("i_AuthorityID").setAsString()=PosAuthorityAddReq.AuthorityID;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* Ӧ����Ϣ */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* ��λȨ������Ӧ�� */
		if(!RspInfo.RspNo){
			strcpy(PosAuthorityAddRsp.UserID,cmd.Param("o_UserID").asString().GetBuffer(0));
			RspPackage.PutFields(&PosAuthorityAddRsp,ETSClearFieldNoPosAuthorityAddRsp);
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypePosAuthorityAddRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandlePosAuthorityAddReq:���ݿ����ʧ�ܣ�[%s]",(const char*)x.ErrText());

		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		switch(x.ErrNativeCode()){
		case 3114:
			RspInfo.RspNo=ETSClearConstRspNoDBNotReady;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNotReady);
			break;
		case 12571:
			RspInfo.RspNo=ETSClearConstRspNoDBNetworkProblem;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNetworkProblem);
			m_Connection.Disconnect();
			Connect(); // ��������
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:�ع�ʧ�ܣ�[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* Ӧ����Ϣ */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypePosAuthorityAddRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*��λȨ��ɾ������*/
void CDBProcessor::HandlePosAuthorityDeleteReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* ��λȨ��ɾ������ */
	CETSClearFieldsPosAuthorityDeleteReq PosAuthorityDeleteReq;
	Package.GetFields(&PosAuthorityDeleteReq,ETSClearFieldNoPosAuthorityDeleteReq);

	// Response
	CETSClearPackage RspPackage;
	/* ��λȨ��ɾ��Ӧ�� */
	CETSClearFieldsPosAuthorityDeleteRsp PosAuthorityDeleteRsp;
	/* Ӧ����Ϣ */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_PosAuthority.PosAuthorityDelete");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* ��λȨ��ɾ������ */
		cmd.Param("i_UserID").setAsString()=PosAuthorityDeleteReq.UserID;
		cmd.Param("i_PositionID").setAsString()=PosAuthorityDeleteReq.PositionID;
		cmd.Param("i_AuthorityID").setAsString()=PosAuthorityDeleteReq.AuthorityID;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* Ӧ����Ϣ */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* ��λȨ��ɾ��Ӧ�� */
		if(!RspInfo.RspNo){
			strcpy(PosAuthorityDeleteRsp.UserID,cmd.Param("o_UserID").asString().GetBuffer(0));
			RspPackage.PutFields(&PosAuthorityDeleteRsp,ETSClearFieldNoPosAuthorityDeleteRsp);
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypePosAuthorityDeleteRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandlePosAuthorityDeleteReq:���ݿ����ʧ�ܣ�[%s]",(const char*)x.ErrText());

		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		switch(x.ErrNativeCode()){
		case 3114:
			RspInfo.RspNo=ETSClearConstRspNoDBNotReady;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNotReady);
			break;
		case 12571:
			RspInfo.RspNo=ETSClearConstRspNoDBNetworkProblem;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNetworkProblem);
			m_Connection.Disconnect();
			Connect(); // ��������
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:�ع�ʧ�ܣ�[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* Ӧ����Ϣ */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypePosAuthorityDeleteRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*�û�Ȩ�޲�ѯ����*/
void CDBProcessor::HandleUseAuthorityQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* �û�Ȩ�޲�ѯ���� */
	CETSClearFieldsUseAuthorityQueryReq UseAuthorityQueryReq;
	Package.GetFields(&UseAuthorityQueryReq,ETSClearFieldNoUseAuthorityQueryReq);

	// Response
	CETSClearPackage RspPackage;
	/* �û�Ȩ�޲�ѯӦ�� */
	CETSClearFieldsUseAuthorityQueryRsp UseAuthorityQueryRsp;
	CBMLRecordSet UseAuthorityQueryRspList;
	SACommand *pCursor=NULL;
	/* Ӧ����Ϣ */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_User_Authority.AuthorityQuery");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* �û�Ȩ�޲�ѯ���� */
		cmd.Param("i_UserID").setAsString()=UseAuthorityQueryReq.UserID;
		cmd.Param("i_OperID").setAsString()=UseAuthorityQueryReq.OperID;
		cmd.Param("i_PositionID").setAsString()=UseAuthorityQueryReq.PositionID;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* Ӧ����Ϣ */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* �û�Ȩ�޲�ѯӦ�� */
		if(!RspInfo.RspNo){
			RspPackage.PutRecordSet(ETSClearFieldNoUseAuthorityQueryRspList,&UseAuthorityQueryRspList);
			pCursor = cmd.Param("o_Cursor");
			while(pCursor->FetchNext())
			{
				strcpy(UseAuthorityQueryRsp.UserID,pCursor->Field("UserID").asString().GetBuffer(0));
				strcpy(UseAuthorityQueryRsp.DepartmentID,pCursor->Field("DepartmentID").asString().GetBuffer(0));
				strcpy(UseAuthorityQueryRsp.PositionID,pCursor->Field("PositionID").asString().GetBuffer(0));
				strcpy(UseAuthorityQueryRsp.AuthorityID,pCursor->Field("AuthorityID").asString().GetBuffer(0));
				strcpy(UseAuthorityQueryRsp.AuthorityName,pCursor->Field("AuthorityName").asString().GetBuffer(0));

				if(UseAuthorityQueryRspList.Insert(&UseAuthorityQueryRsp)<0){
					RspPackage.SetEndFlag(1);
					m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeUseAuthorityQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);

					// ����
					RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);
					RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
					RspPackage.PutRecordSet(ETSClearFieldNoUseAuthorityQueryRspList,&UseAuthorityQueryRspList);
					UseAuthorityQueryRspList.Insert(&UseAuthorityQueryRsp);
				}
			}
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeUseAuthorityQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleUseAuthorityQueryReq:���ݿ����ʧ�ܣ�[%s]",(const char*)x.ErrText());

		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		switch(x.ErrNativeCode()){
		case 3114:
			RspInfo.RspNo=ETSClearConstRspNoDBNotReady;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNotReady);
			break;
		case 12571:
			RspInfo.RspNo=ETSClearConstRspNoDBNetworkProblem;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNetworkProblem);
			m_Connection.Disconnect();
			Connect(); // ��������
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:�ع�ʧ�ܣ�[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* Ӧ����Ϣ */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeUseAuthorityQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*�û�Ȩ����������*/
void CDBProcessor::HandleUseAuthorityAddReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* �û�Ȩ���������� */
	CETSClearFieldsUseAuthorityAddReq UseAuthorityAddReq;
	Package.GetFields(&UseAuthorityAddReq,ETSClearFieldNoUseAuthorityAddReq);

	// Response
	CETSClearPackage RspPackage;
	/* �û�Ȩ������Ӧ�� */
	CETSClearFieldsUseAuthorityAddRsp UseAuthorityAddRsp;
	/* Ӧ����Ϣ */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_User_Authority.AuthorityAdd");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* �û�Ȩ���������� */
		cmd.Param("i_UserID").setAsString()=UseAuthorityAddReq.UserID;
		cmd.Param("i_OperID").setAsString()=UseAuthorityAddReq.OperID;
		cmd.Param("i_PositionID").setAsString()=UseAuthorityAddReq.PositionID;
		cmd.Param("i_AuthorityID").setAsString()=UseAuthorityAddReq.AuthorityID;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* Ӧ����Ϣ */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* �û�Ȩ������Ӧ�� */
		if(!RspInfo.RspNo){
			strcpy(UseAuthorityAddRsp.UserID,cmd.Param("o_UserID").asString().GetBuffer(0));
			RspPackage.PutFields(&UseAuthorityAddRsp,ETSClearFieldNoUseAuthorityAddRsp);
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeUseAuthorityAddRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleUseAuthorityAddReq:���ݿ����ʧ�ܣ�[%s]",(const char*)x.ErrText());

		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		switch(x.ErrNativeCode()){
		case 3114:
			RspInfo.RspNo=ETSClearConstRspNoDBNotReady;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNotReady);
			break;
		case 12571:
			RspInfo.RspNo=ETSClearConstRspNoDBNetworkProblem;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNetworkProblem);
			m_Connection.Disconnect();
			Connect(); // ��������
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:�ع�ʧ�ܣ�[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* Ӧ����Ϣ */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeUseAuthorityAddRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*�û�Ȩ��ɾ������*/
void CDBProcessor::HandleUseAuthorityDeleteReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* �û�Ȩ��ɾ������ */
	CETSClearFieldsUseAuthorityDeleteReq UseAuthorityDeleteReq;
	Package.GetFields(&UseAuthorityDeleteReq,ETSClearFieldNoUseAuthorityDeleteReq);

	// Response
	CETSClearPackage RspPackage;
	/* �û�Ȩ��ɾ��Ӧ�� */
	CETSClearFieldsUseAuthorityDeleteRsp UseAuthorityDeleteRsp;
	/* Ӧ����Ϣ */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_User_Authority.AuthorityDelete");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* �û�Ȩ��ɾ������ */
		cmd.Param("i_UserID").setAsString()=UseAuthorityDeleteReq.UserID;
		cmd.Param("i_OperID").setAsString()=UseAuthorityDeleteReq.OperID;
		cmd.Param("i_PositionID").setAsString()=UseAuthorityDeleteReq.PositionID;
		cmd.Param("i_AuthorityID").setAsString()=UseAuthorityDeleteReq.AuthorityID;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* Ӧ����Ϣ */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* �û�Ȩ��ɾ��Ӧ�� */
		if(!RspInfo.RspNo){
			strcpy(UseAuthorityDeleteRsp.UserID,cmd.Param("o_UserID").asString().GetBuffer(0));
			RspPackage.PutFields(&UseAuthorityDeleteRsp,ETSClearFieldNoUseAuthorityDeleteRsp);
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeUseAuthorityDeleteRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleUseAuthorityDeleteReq:���ݿ����ʧ�ܣ�[%s]",(const char*)x.ErrText());

		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		switch(x.ErrNativeCode()){
		case 3114:
			RspInfo.RspNo=ETSClearConstRspNoDBNotReady;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNotReady);
			break;
		case 12571:
			RspInfo.RspNo=ETSClearConstRspNoDBNetworkProblem;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNetworkProblem);
			m_Connection.Disconnect();
			Connect(); // ��������
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:�ع�ʧ�ܣ�[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* Ӧ����Ϣ */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeUseAuthorityDeleteRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*��ѯ������Ʒ��Լ��ʷ����*/
void CDBProcessor::HandleCommodityHistQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* ��ѯ������Ʒ��Լ��ʷ���� */
	CETSClearFieldsCommodityHistQueryReq CommodityHistQueryReq;
	Package.GetFields(&CommodityHistQueryReq,ETSClearFieldNoCommodityHistQueryReq);

	// Response
	CETSClearPackage RspPackage;
	/* ��ѯ������Ʒ��Լ��ʷӦ�� */
	CETSClearFieldsCommodityHistQueryRsp CommodityHistQueryRsp;
	CBMLRecordSet CommodityHistQueryRspList;
	SACommand *pCursor=NULL;
	/* Ӧ����Ϣ */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_CommodityHist.CommodityHistQuery");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* ��ѯ������Ʒ��Լ��ʷ���� */
		cmd.Param("i_UserID").setAsString()=CommodityHistQueryReq.UserID;
		cmd.Param("i_HistDate").setAsLong()=CommodityHistQueryReq.HistDate;
		cmd.Param("i_Variety").setAsString()=CommodityHistQueryReq.Variety;
		cmd.Param("i_Market").setAsString()=CommodityHistQueryReq.Market;
		cmd.Param("i_Commodity").setAsString()=CommodityHistQueryReq.Commodity;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* Ӧ����Ϣ */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* ��ѯ������Ʒ��Լ��ʷӦ�� */
		if(!RspInfo.RspNo){
			RspPackage.PutRecordSet(ETSClearFieldNoCommodityHistQueryRspList,&CommodityHistQueryRspList);
			pCursor = cmd.Param("o_Cursor");
			while(pCursor->FetchNext())
			{
				CommodityHistQueryRsp.HistDate=pCursor->Field("HistDate").asLong();
				strcpy(CommodityHistQueryRsp.Variety,pCursor->Field("Variety").asString().GetBuffer(0));
				strcpy(CommodityHistQueryRsp.Market,pCursor->Field("Market").asString().GetBuffer(0));
				strcpy(CommodityHistQueryRsp.Commodity,pCursor->Field("Commodity").asString().GetBuffer(0));
				strcpy(CommodityHistQueryRsp.CommodityName,pCursor->Field("CommodityName").asString().GetBuffer(0));
				memcpy(&CommodityHistQueryRsp.CommodityStatus,pCursor->Field("CommodityStatus").asString().GetBuffer(0),1);
				CommodityHistQueryRsp.LastDate=pCursor->Field("LastDate").asLong();
				CommodityHistQueryRsp.SettleDate=pCursor->Field("SettleDate").asLong();
				CommodityHistQueryRsp.Ctrtsize=pCursor->Field("Ctrtsize").asDouble();
				CommodityHistQueryRsp.CtrtRatio=pCursor->Field("CtrtRatio").asLong();
				CommodityHistQueryRsp.Precision=pCursor->Field("Precision").asShort();
				memcpy(&CommodityHistQueryRsp.MaxSpreadType,pCursor->Field("MaxSpreadType").asString().GetBuffer(0),1);
				CommodityHistQueryRsp.MaxSpread=pCursor->Field("MaxSpread").asDouble();
				memcpy(&CommodityHistQueryRsp.TradeCommType,pCursor->Field("TradeCommType").asString().GetBuffer(0),1);
				CommodityHistQueryRsp.TradeComm=pCursor->Field("TradeComm").asDouble();
				memcpy(&CommodityHistQueryRsp.SettleCommType,pCursor->Field("SettleCommType").asString().GetBuffer(0),1);
				CommodityHistQueryRsp.SettleComm=pCursor->Field("SettleComm").asDouble();
				memcpy(&CommodityHistQueryRsp.CashCommType,pCursor->Field("CashCommType").asString().GetBuffer(0),1);
				CommodityHistQueryRsp.CashComm=pCursor->Field("CashComm").asDouble();
				memcpy(&CommodityHistQueryRsp.RiskCommType,pCursor->Field("RiskCommType").asString().GetBuffer(0),1);
				CommodityHistQueryRsp.RiskComm=pCursor->Field("RiskComm").asDouble();
				memcpy(&CommodityHistQueryRsp.MarginType,pCursor->Field("MarginType").asString().GetBuffer(0),1);
				CommodityHistQueryRsp.Margin=pCursor->Field("Margin").asDouble();
				strcpy(CommodityHistQueryRsp.TradingSection,pCursor->Field("TradingSection").asString().GetBuffer(0));
				CommodityHistQueryRsp.OrderMinQty=pCursor->Field("OrderMinQty").asLong();
				CommodityHistQueryRsp.OrderMaxQty=pCursor->Field("OrderMaxQty").asLong();
				CommodityHistQueryRsp.MaxBuy=pCursor->Field("MaxBuy").asLong();
				CommodityHistQueryRsp.MaxSell=pCursor->Field("MaxSell").asLong();
				CommodityHistQueryRsp.PriceLimit=pCursor->Field("PriceLimit").asDouble();
				CommodityHistQueryRsp.PriceUnit=pCursor->Field("PriceUnit").asDouble();
				CommodityHistQueryRsp.PrevClear=pCursor->Field("PrevClear").asDouble();
				CommodityHistQueryRsp.PrevClose=pCursor->Field("PrevClose").asDouble();
				CommodityHistQueryRsp.TtlOpen=pCursor->Field("TtlOpen").asLong();
				CommodityHistQueryRsp.SpreadUp=pCursor->Field("SpreadUp").asDouble();
				CommodityHistQueryRsp.SpreadDown=pCursor->Field("SpreadDown").asDouble();
				CommodityHistQueryRsp.MatchMtd=pCursor->Field("MatchMtd").asLong();
				strcpy(CommodityHistQueryRsp.Currency,pCursor->Field("Currency").asString().GetBuffer(0));
				CommodityHistQueryRsp.ClearPrice=pCursor->Field("ClearPrice").asDouble();
				CommodityHistQueryRsp.Spread=pCursor->Field("Spread").asDouble();
				memcpy(&CommodityHistQueryRsp.DeferCommType,pCursor->Field("DeferCommType").asString().GetBuffer(0),1);
				CommodityHistQueryRsp.DeferComm=pCursor->Field("DeferComm").asDouble();

				if(CommodityHistQueryRspList.Insert(&CommodityHistQueryRsp)<0){
					RspPackage.SetEndFlag(1);
					m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeCommodityHistQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);

					// ����
					RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);
					RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
					RspPackage.PutRecordSet(ETSClearFieldNoCommodityHistQueryRspList,&CommodityHistQueryRspList);
					CommodityHistQueryRspList.Insert(&CommodityHistQueryRsp);
				}
			}
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeCommodityHistQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleCommodityHistQueryReq:���ݿ����ʧ�ܣ�[%s]",(const char*)x.ErrText());

		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		switch(x.ErrNativeCode()){
		case 3114:
			RspInfo.RspNo=ETSClearConstRspNoDBNotReady;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNotReady);
			break;
		case 12571:
			RspInfo.RspNo=ETSClearConstRspNoDBNetworkProblem;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNetworkProblem);
			m_Connection.Disconnect();
			Connect(); // ��������
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:�ع�ʧ�ܣ�[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* Ӧ����Ϣ */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeCommodityHistQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*���ӻ�����ѯ����*/
void CDBProcessor::HandleGoodsQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* ���ӻ�����ѯ���� */
	CETSClearFieldsGoodsQueryReq GoodsQueryReq;
	Package.GetFields(&GoodsQueryReq,ETSClearFieldNoGoodsQueryReq);

	// Response
	CETSClearPackage RspPackage;
	/* ���ӻ�����ѯӦ�� */
	CETSClearFieldsGoodsQueryRsp GoodsQueryRsp;
	CBMLRecordSet GoodsQueryRspList;
	SACommand *pCursor=NULL;
	/* Ӧ����Ϣ */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_Goods.GoodsQuery");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* ���ӻ�����ѯ���� */
		cmd.Param("i_UserID").setAsString()=GoodsQueryReq.UserID;
		cmd.Param("i_Variety").setAsString()=GoodsQueryReq.Variety;
		cmd.Param("i_WareHouse").setAsString()=GoodsQueryReq.WareHouse;
		cmd.Param("i_Location").setAsString()=GoodsQueryReq.Location;
		cmd.Param("i_Firm").setAsString()=GoodsQueryReq.Firm;
		cmd.Param("i_Customer").setAsString()=GoodsQueryReq.Customer;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* Ӧ����Ϣ */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* ���ӻ�����ѯӦ�� */
		if(!RspInfo.RspNo){
			RspPackage.PutRecordSet(ETSClearFieldNoGoodsQueryRspList,&GoodsQueryRspList);
			pCursor = cmd.Param("o_Cursor");
			while(pCursor->FetchNext())
			{
				strcpy(GoodsQueryRsp.Variety,pCursor->Field("Variety").asString().GetBuffer(0));
				strcpy(GoodsQueryRsp.WareHouse,pCursor->Field("WareHouse").asString().GetBuffer(0));
				strcpy(GoodsQueryRsp.Firm,pCursor->Field("Firm").asString().GetBuffer(0));
				strcpy(GoodsQueryRsp.Customer,pCursor->Field("Customer").asString().GetBuffer(0));
				GoodsQueryRsp.Qty=pCursor->Field("Qty").asLong();
				GoodsQueryRsp.LockQty=pCursor->Field("LockQty").asLong();
				GoodsQueryRsp.Balance=pCursor->Field("Balance").asLong();
				GoodsQueryRsp.ValidDate=pCursor->Field("ValidDate").asLong();
				strcpy(GoodsQueryRsp.Location,pCursor->Field("Location").asString().GetBuffer(0));
				strcpy(GoodsQueryRsp.Property1,pCursor->Field("Property1").asString().GetBuffer(0));
				strcpy(GoodsQueryRsp.Property2,pCursor->Field("Property2").asString().GetBuffer(0));
				strcpy(GoodsQueryRsp.Property3,pCursor->Field("Property3").asString().GetBuffer(0));
				strcpy(GoodsQueryRsp.Property4,pCursor->Field("Property4").asString().GetBuffer(0));
				strcpy(GoodsQueryRsp.Property5,pCursor->Field("Property5").asString().GetBuffer(0));
				strcpy(GoodsQueryRsp.Property6,pCursor->Field("Property6").asString().GetBuffer(0));
				strcpy(GoodsQueryRsp.Property7,pCursor->Field("Property7").asString().GetBuffer(0));
				strcpy(GoodsQueryRsp.Property8,pCursor->Field("Property8").asString().GetBuffer(0));
				strcpy(GoodsQueryRsp.Property9,pCursor->Field("Property9").asString().GetBuffer(0));
				strcpy(GoodsQueryRsp.Property10,pCursor->Field("Property10").asString().GetBuffer(0));
				GoodsQueryRsp.Goods_Qty=pCursor->Field("Goods_Qty").asLong();

				if(GoodsQueryRspList.Insert(&GoodsQueryRsp)<0){
					RspPackage.SetEndFlag(1);
					m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeGoodsQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);

					// ����
					RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);
					RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
					RspPackage.PutRecordSet(ETSClearFieldNoGoodsQueryRspList,&GoodsQueryRspList);
					GoodsQueryRspList.Insert(&GoodsQueryRsp);
				}
			}
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeGoodsQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleGoodsQueryReq:���ݿ����ʧ�ܣ�[%s]",(const char*)x.ErrText());

		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		switch(x.ErrNativeCode()){
		case 3114:
			RspInfo.RspNo=ETSClearConstRspNoDBNotReady;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNotReady);
			break;
		case 12571:
			RspInfo.RspNo=ETSClearConstRspNoDBNetworkProblem;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNetworkProblem);
			m_Connection.Disconnect();
			Connect(); // ��������
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:�ع�ʧ�ܣ�[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* Ӧ����Ϣ */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeGoodsQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*��Ա������Ϣ��ѯ����*/
void CDBProcessor::HandleClearingQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* ��Ա������Ϣ��ѯ���� */
	CETSClearFieldsClearingQueryReq ClearingQueryReq;
	Package.GetFields(&ClearingQueryReq,ETSClearFieldNoClearingQueryReq);

	// Response
	CETSClearPackage RspPackage;
	/* ��Ա������Ϣ��ѯӦ�� */
	CETSClearFieldsClearingQueryRsp ClearingQueryRsp;
	CBMLRecordSet ClearingQueryRspList;
	SACommand *pCursor=NULL;
	/* Ӧ����Ϣ */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_Clearing.ClearingQuery");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* ��Ա������Ϣ��ѯ���� */
		cmd.Param("i_UserID").setAsString()=ClearingQueryReq.UserID;
		cmd.Param("i_Firm").setAsString()=ClearingQueryReq.Firm;
		cmd.Param("i_Market").setAsString()=ClearingQueryReq.Market;
		cmd.Param("i_Commodity").setAsString()=ClearingQueryReq.Commodity;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* Ӧ����Ϣ */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* ��Ա������Ϣ��ѯӦ�� */
		if(!RspInfo.RspNo){
			RspPackage.PutRecordSet(ETSClearFieldNoClearingQueryRspList,&ClearingQueryRspList);
			pCursor = cmd.Param("o_Cursor");
			while(pCursor->FetchNext())
			{
				strcpy(ClearingQueryRsp.Firm,pCursor->Field("Firm").asString().GetBuffer(0));
				strcpy(ClearingQueryRsp.Market,pCursor->Field("Market").asString().GetBuffer(0));
				strcpy(ClearingQueryRsp.Commodity,pCursor->Field("Commodity").asString().GetBuffer(0));
				ClearingQueryRsp.BhQty=pCursor->Field("BhQty").asLong();
				ClearingQueryRsp.ShQty=pCursor->Field("ShQty").asLong();
				ClearingQueryRsp.OpenQty=pCursor->Field("OpenQty").asLong();
				ClearingQueryRsp.LiqQty=pCursor->Field("LiqQty").asLong();
				ClearingQueryRsp.WdQty=pCursor->Field("WdQty").asLong();
				ClearingQueryRsp.BoQty=pCursor->Field("BoQty").asLong();
				ClearingQueryRsp.SoQty=pCursor->Field("SoQty").asLong();
				ClearingQueryRsp.LHld=pCursor->Field("LHld").asLong();
				ClearingQueryRsp.BhValue=pCursor->Field("BhValue").asDouble();
				ClearingQueryRsp.ShValue=pCursor->Field("ShValue").asDouble();
				ClearingQueryRsp.Fpl=pCursor->Field("Fpl").asDouble();
				ClearingQueryRsp.c_margin=pCursor->Field("c_margin").asDouble();
				ClearingQueryRsp.l_margin=pCursor->Field("l_margin").asDouble();

				if(ClearingQueryRspList.Insert(&ClearingQueryRsp)<0){
					RspPackage.SetEndFlag(1);
					m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeClearingQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);

					// ����
					RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);
					RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
					RspPackage.PutRecordSet(ETSClearFieldNoClearingQueryRspList,&ClearingQueryRspList);
					ClearingQueryRspList.Insert(&ClearingQueryRsp);
				}
			}
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeClearingQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleClearingQueryReq:���ݿ����ʧ�ܣ�[%s]",(const char*)x.ErrText());

		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		switch(x.ErrNativeCode()){
		case 3114:
			RspInfo.RspNo=ETSClearConstRspNoDBNotReady;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNotReady);
			break;
		case 12571:
			RspInfo.RspNo=ETSClearConstRspNoDBNetworkProblem;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNetworkProblem);
			m_Connection.Disconnect();
			Connect(); // ��������
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:�ع�ʧ�ܣ�[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* Ӧ����Ϣ */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeClearingQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*�ͻ�������Ϣ��ѯ����*/
void CDBProcessor::HandleCusClearingQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* �ͻ�������Ϣ��ѯ���� */
	CETSClearFieldsCusClearingQueryReq CusClearingQueryReq;
	Package.GetFields(&CusClearingQueryReq,ETSClearFieldNoCusClearingQueryReq);

	// Response
	CETSClearPackage RspPackage;
	/* �ͻ�������Ϣ��ѯӦ�� */
	CETSClearFieldsCusClearingQueryRsp CusClearingQueryRsp;
	CBMLRecordSet CusClearingQueryRspList;
	SACommand *pCursor=NULL;
	/* Ӧ����Ϣ */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_CusClearing.CusClearingQuery");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* �ͻ�������Ϣ��ѯ���� */
		cmd.Param("i_UserID").setAsString()=CusClearingQueryReq.UserID;
		cmd.Param("i_Firm").setAsString()=CusClearingQueryReq.Firm;
		cmd.Param("i_Customer").setAsString()=CusClearingQueryReq.Customer;
		cmd.Param("i_Market").setAsString()=CusClearingQueryReq.Market;
		cmd.Param("i_Commodity").setAsString()=CusClearingQueryReq.Commodity;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* Ӧ����Ϣ */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* �ͻ�������Ϣ��ѯӦ�� */
		if(!RspInfo.RspNo){
			RspPackage.PutRecordSet(ETSClearFieldNoCusClearingQueryRspList,&CusClearingQueryRspList);
			pCursor = cmd.Param("o_Cursor");
			while(pCursor->FetchNext())
			{
				strcpy(CusClearingQueryRsp.Firm,pCursor->Field("Firm").asString().GetBuffer(0));
				strcpy(CusClearingQueryRsp.Customer,pCursor->Field("Customer").asString().GetBuffer(0));
				strcpy(CusClearingQueryRsp.Market,pCursor->Field("Market").asString().GetBuffer(0));
				strcpy(CusClearingQueryRsp.Commodity,pCursor->Field("Commodity").asString().GetBuffer(0));
				CusClearingQueryRsp.BhQty=pCursor->Field("BhQty").asLong();
				CusClearingQueryRsp.ShQty=pCursor->Field("ShQty").asLong();
				CusClearingQueryRsp.OpenQty=pCursor->Field("OpenQty").asLong();
				CusClearingQueryRsp.LiqQty=pCursor->Field("LiqQty").asLong();
				CusClearingQueryRsp.WdQty=pCursor->Field("WdQty").asLong();
				CusClearingQueryRsp.BoQty=pCursor->Field("BoQty").asLong();
				CusClearingQueryRsp.SoQty=pCursor->Field("SoQty").asLong();
				CusClearingQueryRsp.LHld=pCursor->Field("LHld").asLong();
				CusClearingQueryRsp.BhValue=pCursor->Field("BhValue").asDouble();
				CusClearingQueryRsp.ShValue=pCursor->Field("ShValue").asDouble();
				CusClearingQueryRsp.Fpl=pCursor->Field("Fpl").asDouble();
				CusClearingQueryRsp.c_margin=pCursor->Field("c_margin").asDouble();
				CusClearingQueryRsp.l_margin=pCursor->Field("l_margin").asDouble();

				if(CusClearingQueryRspList.Insert(&CusClearingQueryRsp)<0){
					RspPackage.SetEndFlag(1);
					m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeCusClearingQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);

					// ����
					RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);
					RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
					RspPackage.PutRecordSet(ETSClearFieldNoCusClearingQueryRspList,&CusClearingQueryRspList);
					CusClearingQueryRspList.Insert(&CusClearingQueryRsp);
				}
			}
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeCusClearingQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleCusClearingQueryReq:���ݿ����ʧ�ܣ�[%s]",(const char*)x.ErrText());

		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		switch(x.ErrNativeCode()){
		case 3114:
			RspInfo.RspNo=ETSClearConstRspNoDBNotReady;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNotReady);
			break;
		case 12571:
			RspInfo.RspNo=ETSClearConstRspNoDBNetworkProblem;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNetworkProblem);
			m_Connection.Disconnect();
			Connect(); // ��������
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:�ع�ʧ�ܣ�[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* Ӧ����Ϣ */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeCusClearingQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*���׿��Ʋ�ѯ����*/
void CDBProcessor::HandleAccessQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* ���׿��Ʋ�ѯ���� */
	CETSClearFieldsAccessQueryReq AccessQueryReq;
	Package.GetFields(&AccessQueryReq,ETSClearFieldNoAccessQueryReq);

	// Response
	CETSClearPackage RspPackage;
	/* ���׿��Ʋ�ѯӦ�� */
	CETSClearFieldsAccessQueryRsp AccessQueryRsp;
	CBMLRecordSet AccessQueryRspList;
	SACommand *pCursor=NULL;
	/* Ӧ����Ϣ */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_Access.AccessQuery");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* ���׿��Ʋ�ѯ���� */
		cmd.Param("i_UserID").setAsString()=AccessQueryReq.UserID;
		cmd.Param("i_Firm").setAsString()=AccessQueryReq.Firm;
		cmd.Param("i_Customer").setAsString()=AccessQueryReq.Customer;
		cmd.Param("i_Market").setAsString()=AccessQueryReq.Market;
		cmd.Param("i_Commodity").setAsString()=AccessQueryReq.Commodity;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* Ӧ����Ϣ */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* ���׿��Ʋ�ѯӦ�� */
		if(!RspInfo.RspNo){
			RspPackage.PutRecordSet(ETSClearFieldNoAccessQueryRspList,&AccessQueryRspList);
			pCursor = cmd.Param("o_Cursor");
			while(pCursor->FetchNext())
			{
				strcpy(AccessQueryRsp.Firm,pCursor->Field("Firm").asString().GetBuffer(0));
				strcpy(AccessQueryRsp.Customer,pCursor->Field("Customer").asString().GetBuffer(0));
				strcpy(AccessQueryRsp.Market,pCursor->Field("Market").asString().GetBuffer(0));
				strcpy(AccessQueryRsp.Commodity,pCursor->Field("Commodity").asString().GetBuffer(0));
				memcpy(&AccessQueryRsp.BuyAccess,pCursor->Field("BuyAccess").asString().GetBuffer(0),1);
				memcpy(&AccessQueryRsp.SellAccess,pCursor->Field("SellAccess").asString().GetBuffer(0),1);
				AccessQueryRsp.AuthLevel=pCursor->Field("AuthLevel").asLong();

				if(AccessQueryRspList.Insert(&AccessQueryRsp)<0){
					RspPackage.SetEndFlag(1);
					m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeAccessQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);

					// ����
					RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);
					RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
					RspPackage.PutRecordSet(ETSClearFieldNoAccessQueryRspList,&AccessQueryRspList);
					AccessQueryRspList.Insert(&AccessQueryRsp);
				}
			}
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeAccessQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleAccessQueryReq:���ݿ����ʧ�ܣ�[%s]",(const char*)x.ErrText());

		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		switch(x.ErrNativeCode()){
		case 3114:
			RspInfo.RspNo=ETSClearConstRspNoDBNotReady;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNotReady);
			break;
		case 12571:
			RspInfo.RspNo=ETSClearConstRspNoDBNetworkProblem;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNetworkProblem);
			m_Connection.Disconnect();
			Connect(); // ��������
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:�ع�ʧ�ܣ�[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* Ӧ����Ϣ */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeAccessQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*�������׿�������*/
void CDBProcessor::HandleAccessAddReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* �������׿������� */
	CETSClearFieldsAccessAddReq AccessAddReq;
	Package.GetFields(&AccessAddReq,ETSClearFieldNoAccessAddReq);

	// Response
	CETSClearPackage RspPackage;
	/* �������׿���Ӧ�� */
	CETSClearFieldsAccessAddRsp AccessAddRsp;
	/* Ӧ����Ϣ */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_Access.AccessAdd");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* �������׿������� */
		cmd.Param("i_UserID").setAsString()=AccessAddReq.UserID;
		cmd.Param("i_Firm").setAsString()=AccessAddReq.Firm;
		cmd.Param("i_Customer").setAsString()=AccessAddReq.Customer;
		cmd.Param("i_Market").setAsString()=AccessAddReq.Market;
		cmd.Param("i_Commodity").setAsString()=AccessAddReq.Commodity;
		cmd.Param("i_BuyAccess").setAsString()=AccessAddReq.BuyAccess;
		cmd.Param("i_SellAccess").setAsString()=AccessAddReq.SellAccess;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* Ӧ����Ϣ */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* �������׿���Ӧ�� */
		if(!RspInfo.RspNo){
			strcpy(AccessAddRsp.UserID,cmd.Param("o_UserID").asString().GetBuffer(0));
			RspPackage.PutFields(&AccessAddRsp,ETSClearFieldNoAccessAddRsp);
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeAccessAddRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleAccessAddReq:���ݿ����ʧ�ܣ�[%s]",(const char*)x.ErrText());

		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		switch(x.ErrNativeCode()){
		case 3114:
			RspInfo.RspNo=ETSClearConstRspNoDBNotReady;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNotReady);
			break;
		case 12571:
			RspInfo.RspNo=ETSClearConstRspNoDBNetworkProblem;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNetworkProblem);
			m_Connection.Disconnect();
			Connect(); // ��������
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:�ع�ʧ�ܣ�[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* Ӧ����Ϣ */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeAccessAddRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*ɾ�����׿�������*/
void CDBProcessor::HandleAccessDeleteReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* ɾ�����׿������� */
	CETSClearFieldsAccessDeleteReq AccessDeleteReq;
	Package.GetFields(&AccessDeleteReq,ETSClearFieldNoAccessDeleteReq);

	// Response
	CETSClearPackage RspPackage;
	/* ɾ�����׿���Ӧ�� */
	CETSClearFieldsAccessDeleteRsp AccessDeleteRsp;
	/* Ӧ����Ϣ */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_Access.AccessDelete");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* ɾ�����׿������� */
		cmd.Param("i_UserID").setAsString()=AccessDeleteReq.UserID;
		cmd.Param("i_Firm").setAsString()=AccessDeleteReq.Firm;
		cmd.Param("i_Customer").setAsString()=AccessDeleteReq.Customer;
		cmd.Param("i_Market").setAsString()=AccessDeleteReq.Market;
		cmd.Param("i_Commodity").setAsString()=AccessDeleteReq.Commodity;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* Ӧ����Ϣ */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* ɾ�����׿���Ӧ�� */
		if(!RspInfo.RspNo){
			strcpy(AccessDeleteRsp.UserID,cmd.Param("o_UserID").asString().GetBuffer(0));
			RspPackage.PutFields(&AccessDeleteRsp,ETSClearFieldNoAccessDeleteRsp);
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeAccessDeleteRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleAccessDeleteReq:���ݿ����ʧ�ܣ�[%s]",(const char*)x.ErrText());

		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		switch(x.ErrNativeCode()){
		case 3114:
			RspInfo.RspNo=ETSClearConstRspNoDBNotReady;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNotReady);
			break;
		case 12571:
			RspInfo.RspNo=ETSClearConstRspNoDBNetworkProblem;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNetworkProblem);
			m_Connection.Disconnect();
			Connect(); // ��������
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:�ع�ʧ�ܣ�[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* Ӧ����Ϣ */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeAccessDeleteRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*�޸Ľ��׿�������*/
void CDBProcessor::HandleAccessModifyReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* �޸Ľ��׿������� */
	CETSClearFieldsAccessModifyReq AccessModifyReq;
	Package.GetFields(&AccessModifyReq,ETSClearFieldNoAccessModifyReq);

	// Response
	CETSClearPackage RspPackage;
	/* �޸Ľ��׿���Ӧ�� */
	CETSClearFieldsAccessModifyRsp AccessModifyRsp;
	/* Ӧ����Ϣ */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_Access.AccessModify");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* �޸Ľ��׿������� */
		cmd.Param("i_UserID").setAsString()=AccessModifyReq.UserID;
		cmd.Param("i_Firm").setAsString()=AccessModifyReq.Firm;
		cmd.Param("i_Customer").setAsString()=AccessModifyReq.Customer;
		cmd.Param("i_Market").setAsString()=AccessModifyReq.Market;
		cmd.Param("i_Commodity").setAsString()=AccessModifyReq.Commodity;
		cmd.Param("i_BuyAccess").setAsString()=AccessModifyReq.BuyAccess;
		cmd.Param("i_SellAccess").setAsString()=AccessModifyReq.SellAccess;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* Ӧ����Ϣ */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* �޸Ľ��׿���Ӧ�� */
		if(!RspInfo.RspNo){
			strcpy(AccessModifyRsp.UserID,cmd.Param("o_UserID").asString().GetBuffer(0));
			RspPackage.PutFields(&AccessModifyRsp,ETSClearFieldNoAccessModifyRsp);
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeAccessModifyRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleAccessModifyReq:���ݿ����ʧ�ܣ�[%s]",(const char*)x.ErrText());

		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		switch(x.ErrNativeCode()){
		case 3114:
			RspInfo.RspNo=ETSClearConstRspNoDBNotReady;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNotReady);
			break;
		case 12571:
			RspInfo.RspNo=ETSClearConstRspNoDBNetworkProblem;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNetworkProblem);
			m_Connection.Disconnect();
			Connect(); // ��������
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:�ع�ʧ�ܣ�[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* Ӧ����Ϣ */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeAccessModifyRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*��Ա������Ϣ��ѯ����*/
void CDBProcessor::HandleDayBalanceQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* ��Ա������Ϣ��ѯ���� */
	CETSClearFieldsDayBalanceQueryReq DayBalanceQueryReq;
	Package.GetFields(&DayBalanceQueryReq,ETSClearFieldNoDayBalanceQueryReq);

	// Response
	CETSClearPackage RspPackage;
	/* ��Ա������Ϣ��ѯӦ�� */
	CETSClearFieldsDayBalanceQueryRsp DayBalanceQueryRsp;
	CBMLRecordSet DayBalanceQueryRspList;
	SACommand *pCursor=NULL;
	/* Ӧ����Ϣ */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_DayBalance.DayBalanceQuery");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* ��Ա������Ϣ��ѯ���� */
		cmd.Param("i_UserID").setAsString()=DayBalanceQueryReq.UserID;
		cmd.Param("i_HistDate").setAsLong()=DayBalanceQueryReq.HistDate;
		cmd.Param("i_Firm").setAsString()=DayBalanceQueryReq.Firm;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* Ӧ����Ϣ */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* ��Ա������Ϣ��ѯӦ�� */
		if(!RspInfo.RspNo){
			RspPackage.PutRecordSet(ETSClearFieldNoDayBalanceQueryRspList,&DayBalanceQueryRspList);
			pCursor = cmd.Param("o_Cursor");
			while(pCursor->FetchNext())
			{
				DayBalanceQueryRsp.HistDate=pCursor->Field("HistDate").asLong();
				strcpy(DayBalanceQueryRsp.Firm,pCursor->Field("Firm").asString().GetBuffer(0));
				DayBalanceQueryRsp.l_fundsamt=pCursor->Field("l_fundsamt").asDouble();
				DayBalanceQueryRsp.l_t_margin=pCursor->Field("l_t_margin").asDouble();
				DayBalanceQueryRsp.l_s_margin=pCursor->Field("l_s_margin").asDouble();
				DayBalanceQueryRsp.c_t_margin=pCursor->Field("c_t_margin").asDouble();
				DayBalanceQueryRsp.c_s_margin=pCursor->Field("c_s_margin").asDouble();
				DayBalanceQueryRsp.open_pl=pCursor->Field("open_pl").asDouble();
				DayBalanceQueryRsp.liq_pl=pCursor->Field("liq_pl").asDouble();
				DayBalanceQueryRsp.cash_pl=pCursor->Field("cash_pl").asDouble();
				DayBalanceQueryRsp.cut_pl=pCursor->Field("cut_pl").asDouble();
				DayBalanceQueryRsp.TradeComm=pCursor->Field("TradeComm").asDouble();
				DayBalanceQueryRsp.RiskComm=pCursor->Field("RiskComm").asDouble();
				DayBalanceQueryRsp.DeferComm=pCursor->Field("DeferComm").asDouble();
				DayBalanceQueryRsp.CutComm=pCursor->Field("CutComm").asDouble();
				DayBalanceQueryRsp.SettleComm=pCursor->Field("SettleComm").asDouble();
				DayBalanceQueryRsp.CashComm=pCursor->Field("CashComm").asDouble();
				DayBalanceQueryRsp.InAmt=pCursor->Field("InAmt").asDouble();
				DayBalanceQueryRsp.OutAmt=pCursor->Field("OutAmt").asDouble();
				DayBalanceQueryRsp.OpenQty=pCursor->Field("OpenQty").asLong();
				DayBalanceQueryRsp.LiqQty=pCursor->Field("LiqQty").asLong();
				DayBalanceQueryRsp.SettleQty=pCursor->Field("SettleQty").asLong();
				DayBalanceQueryRsp.add_margin=pCursor->Field("add_margin").asDouble();
				DayBalanceQueryRsp.real_funds=pCursor->Field("real_funds").asDouble();

				if(DayBalanceQueryRspList.Insert(&DayBalanceQueryRsp)<0){
					RspPackage.SetEndFlag(1);
					m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeDayBalanceQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);

					// ����
					RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);
					RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
					RspPackage.PutRecordSet(ETSClearFieldNoDayBalanceQueryRspList,&DayBalanceQueryRspList);
					DayBalanceQueryRspList.Insert(&DayBalanceQueryRsp);
				}
			}
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeDayBalanceQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleDayBalanceQueryReq:���ݿ����ʧ�ܣ�[%s]",(const char*)x.ErrText());

		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		switch(x.ErrNativeCode()){
		case 3114:
			RspInfo.RspNo=ETSClearConstRspNoDBNotReady;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNotReady);
			break;
		case 12571:
			RspInfo.RspNo=ETSClearConstRspNoDBNetworkProblem;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNetworkProblem);
			m_Connection.Disconnect();
			Connect(); // ��������
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:�ع�ʧ�ܣ�[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* Ӧ����Ϣ */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeDayBalanceQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*�ͻ�������Ϣ��ѯ����*/
void CDBProcessor::HandleCusDayBalQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* �ͻ�������Ϣ��ѯ���� */
	CETSClearFieldsCusDayBalQueryReq CusDayBalQueryReq;
	Package.GetFields(&CusDayBalQueryReq,ETSClearFieldNoCusDayBalQueryReq);

	// Response
	CETSClearPackage RspPackage;
	/* �ͻ�������Ϣ��ѯӦ�� */
	CETSClearFieldsCusDayBalQueryRsp CusDayBalQueryRsp;
	CBMLRecordSet CusDayBalQueryRspList;
	SACommand *pCursor=NULL;
	/* Ӧ����Ϣ */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_CusDayBal.CusDayBalQuery");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* �ͻ�������Ϣ��ѯ���� */
		cmd.Param("i_UserID").setAsString()=CusDayBalQueryReq.UserID;
		cmd.Param("i_HistDate").setAsLong()=CusDayBalQueryReq.HistDate;
		cmd.Param("i_Firm").setAsString()=CusDayBalQueryReq.Firm;
		cmd.Param("i_Customer").setAsString()=CusDayBalQueryReq.Customer;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* Ӧ����Ϣ */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* �ͻ�������Ϣ��ѯӦ�� */
		if(!RspInfo.RspNo){
			RspPackage.PutRecordSet(ETSClearFieldNoCusDayBalQueryRspList,&CusDayBalQueryRspList);
			pCursor = cmd.Param("o_Cursor");
			while(pCursor->FetchNext())
			{
				CusDayBalQueryRsp.HistDate=pCursor->Field("HistDate").asLong();
				strcpy(CusDayBalQueryRsp.Firm,pCursor->Field("Firm").asString().GetBuffer(0));
				strcpy(CusDayBalQueryRsp.Customer,pCursor->Field("Customer").asString().GetBuffer(0));
				CusDayBalQueryRsp.l_fundsamt=pCursor->Field("l_fundsamt").asDouble();
				CusDayBalQueryRsp.l_t_margin=pCursor->Field("l_t_margin").asDouble();
				CusDayBalQueryRsp.l_s_margin=pCursor->Field("l_s_margin").asDouble();
				CusDayBalQueryRsp.c_t_margin=pCursor->Field("c_t_margin").asDouble();
				CusDayBalQueryRsp.c_s_margin=pCursor->Field("c_s_margin").asDouble();
				CusDayBalQueryRsp.open_pl=pCursor->Field("open_pl").asDouble();
				CusDayBalQueryRsp.liq_pl=pCursor->Field("liq_pl").asDouble();
				CusDayBalQueryRsp.cash_pl=pCursor->Field("cash_pl").asDouble();
				CusDayBalQueryRsp.cut_pl=pCursor->Field("cut_pl").asDouble();
				CusDayBalQueryRsp.TradeComm=pCursor->Field("TradeComm").asDouble();
				CusDayBalQueryRsp.RiskComm=pCursor->Field("RiskComm").asDouble();
				CusDayBalQueryRsp.DeferComm=pCursor->Field("DeferComm").asDouble();
				CusDayBalQueryRsp.CutComm=pCursor->Field("CutComm").asDouble();
				CusDayBalQueryRsp.SettleComm=pCursor->Field("SettleComm").asDouble();
				CusDayBalQueryRsp.CashComm=pCursor->Field("CashComm").asDouble();
				CusDayBalQueryRsp.InAmt=pCursor->Field("InAmt").asDouble();
				CusDayBalQueryRsp.OutAmt=pCursor->Field("OutAmt").asDouble();
				CusDayBalQueryRsp.OpenQty=pCursor->Field("OpenQty").asLong();
				CusDayBalQueryRsp.LiqQty=pCursor->Field("LiqQty").asLong();
				CusDayBalQueryRsp.SettleQty=pCursor->Field("SettleQty").asLong();
				CusDayBalQueryRsp.add_margin=pCursor->Field("add_margin").asDouble();
				CusDayBalQueryRsp.real_funds=pCursor->Field("real_funds").asDouble();

				if(CusDayBalQueryRspList.Insert(&CusDayBalQueryRsp)<0){
					RspPackage.SetEndFlag(1);
					m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeCusDayBalQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);

					// ����
					RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);
					RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
					RspPackage.PutRecordSet(ETSClearFieldNoCusDayBalQueryRspList,&CusDayBalQueryRspList);
					CusDayBalQueryRspList.Insert(&CusDayBalQueryRsp);
				}
			}
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeCusDayBalQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleCusDayBalQueryReq:���ݿ����ʧ�ܣ�[%s]",(const char*)x.ErrText());

		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		switch(x.ErrNativeCode()){
		case 3114:
			RspInfo.RspNo=ETSClearConstRspNoDBNotReady;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNotReady);
			break;
		case 12571:
			RspInfo.RspNo=ETSClearConstRspNoDBNetworkProblem;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNetworkProblem);
			m_Connection.Disconnect();
			Connect(); // ��������
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:�ع�ʧ�ܣ�[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* Ӧ����Ϣ */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeCusDayBalQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*����ۼ�������*/
void CDBProcessor::HandleClearPriceReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* ����ۼ������� */
	CETSClearFieldsClearPriceReq ClearPriceReq;
	Package.GetFields(&ClearPriceReq,ETSClearFieldNoClearPriceReq);

	// Response
	CETSClearPackage RspPackage;
	/* ����ۼ���Ӧ�� */
	CETSClearFieldsClearPriceRsp ClearPriceRsp;
	/* Ӧ����Ϣ */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_Clearing.ClearPrice");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* ����ۼ������� */
		cmd.Param("i_UserID").setAsString()=ClearPriceReq.UserID;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* Ӧ����Ϣ */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* ����ۼ���Ӧ�� */
		if(!RspInfo.RspNo){
			strcpy(ClearPriceRsp.UserID,cmd.Param("o_UserID").asString().GetBuffer(0));
			RspPackage.PutFields(&ClearPriceRsp,ETSClearFieldNoClearPriceRsp);
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeClearPriceRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleClearPriceReq:���ݿ����ʧ�ܣ�[%s]",(const char*)x.ErrText());

		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		switch(x.ErrNativeCode()){
		case 3114:
			RspInfo.RspNo=ETSClearConstRspNoDBNotReady;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNotReady);
			break;
		case 12571:
			RspInfo.RspNo=ETSClearConstRspNoDBNetworkProblem;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNetworkProblem);
			m_Connection.Disconnect();
			Connect(); // ��������
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:�ع�ʧ�ܣ�[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* Ӧ����Ϣ */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeClearPriceRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*���㼰��������*/
void CDBProcessor::HandleDayClearReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* ���㼰�������� */
	CETSClearFieldsDayClearReq DayClearReq;
	Package.GetFields(&DayClearReq,ETSClearFieldNoDayClearReq);

	// Response
	CETSClearPackage RspPackage;
	/* ���㼰����Ӧ�� */
	CETSClearFieldsDayClearRsp DayClearRsp;
	/* Ӧ����Ϣ */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_Clearing.DayClear");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* ���㼰�������� */
		cmd.Param("i_UserID").setAsString()=DayClearReq.UserID;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* Ӧ����Ϣ */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* ���㼰����Ӧ�� */
		if(!RspInfo.RspNo){
			strcpy(DayClearRsp.UserID,cmd.Param("o_UserID").asString().GetBuffer(0));
			RspPackage.PutFields(&DayClearRsp,ETSClearFieldNoDayClearRsp);
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeDayClearRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleDayClearReq:���ݿ����ʧ�ܣ�[%s]",(const char*)x.ErrText());

		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		switch(x.ErrNativeCode()){
		case 3114:
			RspInfo.RspNo=ETSClearConstRspNoDBNotReady;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNotReady);
			break;
		case 12571:
			RspInfo.RspNo=ETSClearConstRspNoDBNetworkProblem;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNetworkProblem);
			m_Connection.Disconnect();
			Connect(); // ��������
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:�ع�ʧ�ܣ�[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* Ӧ����Ϣ */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeDayClearRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*ÿ����Ҷ�����һ��ʱ��ѯ����*/
void CDBProcessor::HandleFxRatesQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* ÿ����Ҷ�����һ��ʱ��ѯ���� */
	CETSClearFieldsFxRatesQueryReq FxRatesQueryReq;
	Package.GetFields(&FxRatesQueryReq,ETSClearFieldNoFxRatesQueryReq);

	// Response
	CETSClearPackage RspPackage;
	/* ÿ����Ҷ�����һ��ʱ��ѯӦ�� */
	CETSClearFieldsFxRatesQueryRsp FxRatesQueryRsp;
	CBMLRecordSet FxRatesQueryRspList;
	SACommand *pCursor=NULL;
	/* Ӧ����Ϣ */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_FxRates.FxRatesQuery");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* ÿ����Ҷ�����һ��ʱ��ѯ���� */
		cmd.Param("i_UserID").setAsString()=FxRatesQueryReq.UserID;
		cmd.Param("i_FxRatesDate").setAsLong()=FxRatesQueryReq.FxRatesDate;
		cmd.Param("i_FxRatesCurrency").setAsString()=FxRatesQueryReq.FxRatesCurrency;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* Ӧ����Ϣ */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* ÿ����Ҷ�����һ��ʱ��ѯӦ�� */
		if(!RspInfo.RspNo){
			RspPackage.PutRecordSet(ETSClearFieldNoFxRatesQueryRspList,&FxRatesQueryRspList);
			pCursor = cmd.Param("o_Cursor");
			while(pCursor->FetchNext())
			{
				strcpy(FxRatesQueryRsp.UserID,pCursor->Field("UserID").asString().GetBuffer(0));
				FxRatesQueryRsp.FxRatesDate=pCursor->Field("FxRatesDate").asLong();
				strcpy(FxRatesQueryRsp.FxRatesCurrency,pCursor->Field("FxRatesCurrency").asString().GetBuffer(0));
				FxRatesQueryRsp.FxRatesRate=pCursor->Field("FxRatesRate").asDouble();

				if(FxRatesQueryRspList.Insert(&FxRatesQueryRsp)<0){
					RspPackage.SetEndFlag(1);
					m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeFxRatesQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);

					// ����
					RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);
					RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
					RspPackage.PutRecordSet(ETSClearFieldNoFxRatesQueryRspList,&FxRatesQueryRspList);
					FxRatesQueryRspList.Insert(&FxRatesQueryRsp);
				}
			}
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeFxRatesQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleFxRatesQueryReq:���ݿ����ʧ�ܣ�[%s]",(const char*)x.ErrText());

		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		switch(x.ErrNativeCode()){
		case 3114:
			RspInfo.RspNo=ETSClearConstRspNoDBNotReady;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNotReady);
			break;
		case 12571:
			RspInfo.RspNo=ETSClearConstRspNoDBNetworkProblem;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNetworkProblem);
			m_Connection.Disconnect();
			Connect(); // ��������
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:�ع�ʧ�ܣ�[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* Ӧ����Ϣ */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeFxRatesQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*ÿ����Ҷ�����һ��ʱ���������*/
void CDBProcessor::HandleFxRatesAddReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* ÿ����Ҷ�����һ��ʱ��������� */
	CETSClearFieldsFxRatesAddReq FxRatesAddReq;
	Package.GetFields(&FxRatesAddReq,ETSClearFieldNoFxRatesAddReq);

	// Response
	CETSClearPackage RspPackage;
	/* ÿ����Ҷ�����һ��ʱ�����Ӧ�� */
	CETSClearFieldsFxRatesAddRsp FxRatesAddRsp;
	/* Ӧ����Ϣ */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_FxRates.FxRatesAdd");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* ÿ����Ҷ�����һ��ʱ��������� */
		cmd.Param("i_UserID").setAsString()=FxRatesAddReq.UserID;
		cmd.Param("i_FxRatesDate").setAsLong()=FxRatesAddReq.FxRatesDate;
		cmd.Param("i_FxRatesCurrency").setAsString()=FxRatesAddReq.FxRatesCurrency;
		cmd.Param("i_FxRatesRate").setAsDouble()=FxRatesAddReq.FxRatesRate;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* Ӧ����Ϣ */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* ÿ����Ҷ�����һ��ʱ�����Ӧ�� */
		if(!RspInfo.RspNo){
			strcpy(FxRatesAddRsp.UserID,cmd.Param("o_UserID").asString().GetBuffer(0));
			RspPackage.PutFields(&FxRatesAddRsp,ETSClearFieldNoFxRatesAddRsp);
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeFxRatesAddRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleFxRatesAddReq:���ݿ����ʧ�ܣ�[%s]",(const char*)x.ErrText());

		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		switch(x.ErrNativeCode()){
		case 3114:
			RspInfo.RspNo=ETSClearConstRspNoDBNotReady;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNotReady);
			break;
		case 12571:
			RspInfo.RspNo=ETSClearConstRspNoDBNetworkProblem;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNetworkProblem);
			m_Connection.Disconnect();
			Connect(); // ��������
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:�ع�ʧ�ܣ�[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* Ӧ����Ϣ */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeFxRatesAddRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*ÿ����Ҷ�����һ��ʱ�ɾ������*/
void CDBProcessor::HandleFxRatesDeleteReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* ÿ����Ҷ�����һ��ʱ�ɾ������ */
	CETSClearFieldsFxRatesDeleteReq FxRatesDeleteReq;
	Package.GetFields(&FxRatesDeleteReq,ETSClearFieldNoFxRatesDeleteReq);

	// Response
	CETSClearPackage RspPackage;
	/* ÿ����Ҷ�����һ��ʱ�ɾ��Ӧ�� */
	CETSClearFieldsFxRatesDeleteRsp FxRatesDeleteRsp;
	/* Ӧ����Ϣ */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_FxRates.FxRatesDelete");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* ÿ����Ҷ�����һ��ʱ�ɾ������ */
		cmd.Param("i_UserID").setAsString()=FxRatesDeleteReq.UserID;
		cmd.Param("i_FxRatesDate").setAsLong()=FxRatesDeleteReq.FxRatesDate;
		cmd.Param("i_FxRatesCurrency").setAsString()=FxRatesDeleteReq.FxRatesCurrency;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* Ӧ����Ϣ */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* ÿ����Ҷ�����һ��ʱ�ɾ��Ӧ�� */
		if(!RspInfo.RspNo){
			strcpy(FxRatesDeleteRsp.UserID,cmd.Param("o_UserID").asString().GetBuffer(0));
			RspPackage.PutFields(&FxRatesDeleteRsp,ETSClearFieldNoFxRatesDeleteRsp);
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeFxRatesDeleteRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleFxRatesDeleteReq:���ݿ����ʧ�ܣ�[%s]",(const char*)x.ErrText());

		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		switch(x.ErrNativeCode()){
		case 3114:
			RspInfo.RspNo=ETSClearConstRspNoDBNotReady;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNotReady);
			break;
		case 12571:
			RspInfo.RspNo=ETSClearConstRspNoDBNetworkProblem;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNetworkProblem);
			m_Connection.Disconnect();
			Connect(); // ��������
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:�ع�ʧ�ܣ�[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* Ӧ����Ϣ */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeFxRatesDeleteRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*ÿ����Ҷ�����һ��ʱ��޸�����*/
void CDBProcessor::HandleFxRatesModifyReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* ÿ����Ҷ�����һ��ʱ��޸����� */
	CETSClearFieldsFxRatesModifyReq FxRatesModifyReq;
	Package.GetFields(&FxRatesModifyReq,ETSClearFieldNoFxRatesModifyReq);

	// Response
	CETSClearPackage RspPackage;
	/* ÿ����Ҷ�����һ��ʱ��޸�Ӧ�� */
	CETSClearFieldsFxRatesModifyRsp FxRatesModifyRsp;
	/* Ӧ����Ϣ */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_FxRates.FxRatesModify");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* ÿ����Ҷ�����һ��ʱ��޸����� */
		cmd.Param("i_UserID").setAsString()=FxRatesModifyReq.UserID;
		cmd.Param("i_FxRatesDate").setAsLong()=FxRatesModifyReq.FxRatesDate;
		cmd.Param("i_FxRatesCurrency").setAsString()=FxRatesModifyReq.FxRatesCurrency;
		cmd.Param("i_FxRatesRate").setAsDouble()=FxRatesModifyReq.FxRatesRate;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* Ӧ����Ϣ */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* ÿ����Ҷ�����һ��ʱ��޸�Ӧ�� */
		if(!RspInfo.RspNo){
			strcpy(FxRatesModifyRsp.UserID,cmd.Param("o_UserID").asString().GetBuffer(0));
			RspPackage.PutFields(&FxRatesModifyRsp,ETSClearFieldNoFxRatesModifyRsp);
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeFxRatesModifyRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleFxRatesModifyReq:���ݿ����ʧ�ܣ�[%s]",(const char*)x.ErrText());

		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		switch(x.ErrNativeCode()){
		case 3114:
			RspInfo.RspNo=ETSClearConstRspNoDBNotReady;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNotReady);
			break;
		case 12571:
			RspInfo.RspNo=ETSClearConstRspNoDBNetworkProblem;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNetworkProblem);
			m_Connection.Disconnect();
			Connect(); // ��������
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:�ع�ʧ�ܣ�[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* Ӧ����Ϣ */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeFxRatesModifyRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*�����������ѯ����*/
void CDBProcessor::HandleMarketMakerQuotesReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* �����������ѯ���� */
	CETSClearFieldsMarketMakerQuotesReq MarketMakerQuotesReq;
	Package.GetFields(&MarketMakerQuotesReq,ETSClearFieldNoMarketMakerQuotesReq);

	// Response
	CETSClearPackage RspPackage;
	/* ������������� */
	CETSClearFieldsMarketMakerQuotesPush MarketMakerQuotesPush;
	CBMLRecordSet MarketMakerQuotesList;
	SACommand *pCursor=NULL;
	/* Ӧ����Ϣ */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_Quot.MarketMakerQuotesQuery");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* �����������ѯ���� */
		cmd.Param("i_UserID").setAsString()=MarketMakerQuotesReq.UserID;
		cmd.Param("i_Market").setAsString()=MarketMakerQuotesReq.Market;
		cmd.Param("i_Commodity").setAsString()=MarketMakerQuotesReq.Commodity;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* Ӧ����Ϣ */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* ������������� */
		if(!RspInfo.RspNo){
			RspPackage.PutRecordSet(ETSClearFieldNoMarketMakerQuotesList,&MarketMakerQuotesList);
			pCursor = cmd.Param("o_Cursor");
			while(pCursor->FetchNext())
			{
				strcpy(MarketMakerQuotesPush.Market,pCursor->Field("Market").asString().GetBuffer(0));
				strcpy(MarketMakerQuotesPush.Commodity,pCursor->Field("Commodity").asString().GetBuffer(0));
				MarketMakerQuotesPush.CurPrice=pCursor->Field("CurPrice").asDouble();
				MarketMakerQuotesPush.Change=pCursor->Field("Change").asDouble();
				MarketMakerQuotesPush.ChangeP=pCursor->Field("ChangeP").asDouble();
				MarketMakerQuotesPush.Volume=pCursor->Field("Volume").asLong();
				MarketMakerQuotesPush.TotalOpen=pCursor->Field("TotalOpen").asLong();
				MarketMakerQuotesPush.Value=pCursor->Field("Value").asDouble();
				MarketMakerQuotesPush.AvgPrice=pCursor->Field("AvgPrice").asDouble();
				MarketMakerQuotesPush.PrevPrice=pCursor->Field("PrevPrice").asDouble();
				MarketMakerQuotesPush.OpenPrice=pCursor->Field("OpenPrice").asDouble();
				MarketMakerQuotesPush.HighPrice=pCursor->Field("HighPrice").asDouble();
				MarketMakerQuotesPush.LowPrice=pCursor->Field("LowPrice").asDouble();
				MarketMakerQuotesPush.ClosePrice=pCursor->Field("ClosePrice").asDouble();
				MarketMakerQuotesPush.BuyPrice1=pCursor->Field("BuyPrice1").asDouble();
				MarketMakerQuotesPush.BuyQty1=pCursor->Field("BuyQty1").asLong();
				MarketMakerQuotesPush.SellPrice1=pCursor->Field("SellPrice1").asDouble();
				MarketMakerQuotesPush.SellQty1=pCursor->Field("SellQty1").asLong();

				if(MarketMakerQuotesList.Insert(&MarketMakerQuotesPush)<0){
					RspPackage.SetEndFlag(1);
					m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeMarketMakerQuotesRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);

					// ����
					RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);
					RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
					RspPackage.PutRecordSet(ETSClearFieldNoMarketMakerQuotesList,&MarketMakerQuotesList);
					MarketMakerQuotesList.Insert(&MarketMakerQuotesPush);
				}
			}
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeMarketMakerQuotesRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleMarketMakerQuotesReq:���ݿ����ʧ�ܣ�[%s]",(const char*)x.ErrText());

		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		switch(x.ErrNativeCode()){
		case 3114:
			RspInfo.RspNo=ETSClearConstRspNoDBNotReady;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNotReady);
			break;
		case 12571:
			RspInfo.RspNo=ETSClearConstRspNoDBNetworkProblem;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNetworkProblem);
			m_Connection.Disconnect();
			Connect(); // ��������
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:�ع�ʧ�ܣ�[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* Ӧ����Ϣ */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeMarketMakerQuotesRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*�����̻�Ա��ѯ����*/
void CDBProcessor::HandleMakerFirmQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* �����̻�Ա��ѯ���� */
	CETSClearFieldsMakerFirmQueryReq MakerFirmQueryReq;
	Package.GetFields(&MakerFirmQueryReq,ETSClearFieldNoMakerFirmQueryReq);

	// Response
	CETSClearPackage RspPackage;
	/* �����̻�Ա��ѯӦ�� */
	CETSClearFieldsMakerFirmQueryRsp MakerFirmQueryRsp;
	CBMLRecordSet MakerFirmQueryRspList;
	SACommand *pCursor=NULL;
	/* Ӧ����Ϣ */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_MakerFirm.MakerFirmQuery");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* �����̻�Ա��ѯ���� */
		cmd.Param("i_UserID").setAsString()=MakerFirmQueryReq.UserID;
		cmd.Param("i_Firm").setAsString()=MakerFirmQueryReq.Firm;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* Ӧ����Ϣ */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* �����̻�Ա��ѯӦ�� */
		if(!RspInfo.RspNo){
			RspPackage.PutRecordSet(ETSClearFieldNoMakerFirmQueryRspList,&MakerFirmQueryRspList);
			pCursor = cmd.Param("o_Cursor");
			while(pCursor->FetchNext())
			{
				strcpy(MakerFirmQueryRsp.Firm,pCursor->Field("Firm").asString().GetBuffer(0));
				strcpy(MakerFirmQueryRsp.FirmName,pCursor->Field("FirmName").asString().GetBuffer(0));
				memcpy(&MakerFirmQueryRsp.FirmStatus,pCursor->Field("FirmStatus").asString().GetBuffer(0),1);
				strcpy(MakerFirmQueryRsp.SelfCustomerID,pCursor->Field("SelfCustomerID").asString().GetBuffer(0));

				if(MakerFirmQueryRspList.Insert(&MakerFirmQueryRsp)<0){
					RspPackage.SetEndFlag(1);
					m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeMakerFirmQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);

					// ����
					RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);
					RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
					RspPackage.PutRecordSet(ETSClearFieldNoMakerFirmQueryRspList,&MakerFirmQueryRspList);
					MakerFirmQueryRspList.Insert(&MakerFirmQueryRsp);
				}
			}
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeMakerFirmQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleMakerFirmQueryReq:���ݿ����ʧ�ܣ�[%s]",(const char*)x.ErrText());

		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		switch(x.ErrNativeCode()){
		case 3114:
			RspInfo.RspNo=ETSClearConstRspNoDBNotReady;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNotReady);
			break;
		case 12571:
			RspInfo.RspNo=ETSClearConstRspNoDBNetworkProblem;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNetworkProblem);
			m_Connection.Disconnect();
			Connect(); // ��������
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:�ع�ʧ�ܣ�[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* Ӧ����Ϣ */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeMakerFirmQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*�����̻�Ա�ʸ���������*/
void CDBProcessor::HandleMakerFirmAddReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* �����̻�Ա�������� */
	CETSClearFieldsMakerFirmAddReq MakerFirmAddReq;
	Package.GetFields(&MakerFirmAddReq,ETSClearFieldNoMakerFirmAddReq);

	// Response
	CETSClearPackage RspPackage;
	/* ÿ�������̻�Ա����Ӧ�� */
	CETSClearFieldsMakerFirmAddRsp MakerFirmAddRsp;
	/* Ӧ����Ϣ */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_MakerFirm.MakerFirmAdd");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* �����̻�Ա�������� */
		cmd.Param("i_UserID").setAsString()=MakerFirmAddReq.UserID;
		cmd.Param("i_Firm").setAsString()=MakerFirmAddReq.Firm;
		cmd.Param("i_SelfCustomerID").setAsString()=MakerFirmAddReq.SelfCustomerID;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* Ӧ����Ϣ */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* ÿ�������̻�Ա����Ӧ�� */
		if(!RspInfo.RspNo){
			strcpy(MakerFirmAddRsp.UserID,cmd.Param("o_UserID").asString().GetBuffer(0));
			RspPackage.PutFields(&MakerFirmAddRsp,ETSClearFieldNoMakerFirmAddRsp);
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeMakerFirmAddRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleMakerFirmAddReq:���ݿ����ʧ�ܣ�[%s]",(const char*)x.ErrText());

		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		switch(x.ErrNativeCode()){
		case 3114:
			RspInfo.RspNo=ETSClearConstRspNoDBNotReady;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNotReady);
			break;
		case 12571:
			RspInfo.RspNo=ETSClearConstRspNoDBNetworkProblem;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNetworkProblem);
			m_Connection.Disconnect();
			Connect(); // ��������
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:�ع�ʧ�ܣ�[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* Ӧ����Ϣ */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeMakerFirmAddRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*�����̻�Ա�ʸ�ɾ������*/
void CDBProcessor::HandleMakerFirmDeleteReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* �����̻�Աɾ������ */
	CETSClearFieldsMakerFirmDeleteReq MakerFirmDeleteReq;
	Package.GetFields(&MakerFirmDeleteReq,ETSClearFieldNoMakerFirmDeleteReq);

	// Response
	CETSClearPackage RspPackage;
	/* �����̻�Աɾ��Ӧ�� */
	CETSClearFieldsMakerFirmDeleteRsp MakerFirmDeleteRsp;
	/* Ӧ����Ϣ */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_MakerFirm.MakerFirmDelete");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* �����̻�Աɾ������ */
		cmd.Param("i_UserID").setAsString()=MakerFirmDeleteReq.UserID;
		cmd.Param("i_Firm").setAsString()=MakerFirmDeleteReq.Firm;
		cmd.Param("i_SelfCustomerID").setAsString()=MakerFirmDeleteReq.SelfCustomerID;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* Ӧ����Ϣ */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* �����̻�Աɾ��Ӧ�� */
		if(!RspInfo.RspNo){
			strcpy(MakerFirmDeleteRsp.UserID,cmd.Param("o_UserID").asString().GetBuffer(0));
			RspPackage.PutFields(&MakerFirmDeleteRsp,ETSClearFieldNoMakerFirmDeleteRsp);
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeMakerFirmDeleteRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleMakerFirmDeleteReq:���ݿ����ʧ�ܣ�[%s]",(const char*)x.ErrText());

		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		switch(x.ErrNativeCode()){
		case 3114:
			RspInfo.RspNo=ETSClearConstRspNoDBNotReady;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNotReady);
			break;
		case 12571:
			RspInfo.RspNo=ETSClearConstRspNoDBNetworkProblem;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNetworkProblem);
			m_Connection.Disconnect();
			Connect(); // ��������
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:�ع�ʧ�ܣ�[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* Ӧ����Ϣ */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeMakerFirmDeleteRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*�����̿ͻ���ѯ����*/
void CDBProcessor::HandleMakerCustomerQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* �����̿ͻ���ѯ���� */
	CETSClearFieldsMakerCustomerQueryReq MakerCustomerQueryReq;
	Package.GetFields(&MakerCustomerQueryReq,ETSClearFieldNoMakerCustomerQueryReq);

	// Response
	CETSClearPackage RspPackage;
	/* �����̿ͻ���ѯӦ�� */
	CETSClearFieldsMakerCustomerQueryRsp MakerCustomerQueryRsp;
	CBMLRecordSet MakerCustomerQueryRspList;
	SACommand *pCursor=NULL;
	/* Ӧ����Ϣ */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_MakerCustomer.MakerCustomerQuery");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* �����̿ͻ���ѯ���� */
		cmd.Param("i_UserID").setAsString()=MakerCustomerQueryReq.UserID;
		cmd.Param("i_Customer").setAsString()=MakerCustomerQueryReq.Customer;
		cmd.Param("i_Firm").setAsString()=MakerCustomerQueryReq.Firm;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* Ӧ����Ϣ */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* �����̿ͻ���ѯӦ�� */
		if(!RspInfo.RspNo){
			RspPackage.PutRecordSet(ETSClearFieldNoMakerCustomerQueryRspList,&MakerCustomerQueryRspList);
			pCursor = cmd.Param("o_Cursor");
			while(pCursor->FetchNext())
			{
				strcpy(MakerCustomerQueryRsp.Customer,pCursor->Field("Customer").asString().GetBuffer(0));
				strcpy(MakerCustomerQueryRsp.CustomerName,pCursor->Field("CustomerName").asString().GetBuffer(0));
				strcpy(MakerCustomerQueryRsp.Firm,pCursor->Field("Firm").asString().GetBuffer(0));
				memcpy(&MakerCustomerQueryRsp.CustomerStatus,pCursor->Field("CustomerStatus").asString().GetBuffer(0),1);
				memcpy(&MakerCustomerQueryRsp.ClearFlag,pCursor->Field("ClearFlag").asString().GetBuffer(0),1);
				strcpy(MakerCustomerQueryRsp.MakeMarketFirmID,pCursor->Field("MakeMarketFirmID").asString().GetBuffer(0));

				if(MakerCustomerQueryRspList.Insert(&MakerCustomerQueryRsp)<0){
					RspPackage.SetEndFlag(1);
					m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeMakerCustomerQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);

					// ����
					RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);
					RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
					RspPackage.PutRecordSet(ETSClearFieldNoMakerCustomerQueryRspList,&MakerCustomerQueryRspList);
					MakerCustomerQueryRspList.Insert(&MakerCustomerQueryRsp);
				}
			}
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeMakerCustomerQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleMakerCustomerQueryReq:���ݿ����ʧ�ܣ�[%s]",(const char*)x.ErrText());

		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		switch(x.ErrNativeCode()){
		case 3114:
			RspInfo.RspNo=ETSClearConstRspNoDBNotReady;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNotReady);
			break;
		case 12571:
			RspInfo.RspNo=ETSClearConstRspNoDBNetworkProblem;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNetworkProblem);
			m_Connection.Disconnect();
			Connect(); // ��������
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:�ع�ʧ�ܣ�[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* Ӧ����Ϣ */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeMakerCustomerQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*�����̿ͻ��ʸ���������*/
void CDBProcessor::HandleMakerCustomerAddReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* �����̿ͻ��������� */
	CETSClearFieldsMakerCustomerAddReq MakerCustomerAddReq;
	Package.GetFields(&MakerCustomerAddReq,ETSClearFieldNoMakerCustomerAddReq);

	// Response
	CETSClearPackage RspPackage;
	/* �����̿ͻ�����Ӧ�� */
	CETSClearFieldsMakerCustomerAddRsp MakerCustomerAddRsp;
	/* Ӧ����Ϣ */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_MakerCustomer.MakerCustomerAdd");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* �����̿ͻ��������� */
		cmd.Param("i_UserID").setAsString()=MakerCustomerAddReq.UserID;
		cmd.Param("i_Customer").setAsString()=MakerCustomerAddReq.Customer;
		cmd.Param("i_Firm").setAsString()=MakerCustomerAddReq.Firm;
		cmd.Param("i_MakeMarketFirmID").setAsString()=MakerCustomerAddReq.MakeMarketFirmID;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* Ӧ����Ϣ */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* �����̿ͻ�����Ӧ�� */
		if(!RspInfo.RspNo){
			strcpy(MakerCustomerAddRsp.UserID,cmd.Param("o_UserID").asString().GetBuffer(0));
			RspPackage.PutFields(&MakerCustomerAddRsp,ETSClearFieldNoMakerCustomerAddRsp);
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeMakerCustomerAddRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleMakerCustomerAddReq:���ݿ����ʧ�ܣ�[%s]",(const char*)x.ErrText());

		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		switch(x.ErrNativeCode()){
		case 3114:
			RspInfo.RspNo=ETSClearConstRspNoDBNotReady;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNotReady);
			break;
		case 12571:
			RspInfo.RspNo=ETSClearConstRspNoDBNetworkProblem;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNetworkProblem);
			m_Connection.Disconnect();
			Connect(); // ��������
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:�ع�ʧ�ܣ�[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* Ӧ����Ϣ */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeMakerCustomerAddRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*�����̿ͻ��ʸ�ɾ������*/
void CDBProcessor::HandleMakerCustomerDeleteReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* �����̿ͻ��ʸ�ɾ������ */
	CETSClearFieldsMakerCustomerDeleteReq MakerCustomerDeleteReq;
	Package.GetFields(&MakerCustomerDeleteReq,ETSClearFieldNoMakerCustomerDeleteReq);

	// Response
	CETSClearPackage RspPackage;
	/* �����̿ͻ��ʸ�ɾ��Ӧ�� */
	CETSClearFieldsMakerCustomerDeleteRsp MakerCustomerDeleteRsp;
	/* Ӧ����Ϣ */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_MakerCustomer.MakerCustomerDelete");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* �����̿ͻ��ʸ�ɾ������ */
		cmd.Param("i_UserID").setAsString()=MakerCustomerDeleteReq.UserID;
		cmd.Param("i_Customer").setAsString()=MakerCustomerDeleteReq.Customer;
		cmd.Param("i_Firm").setAsString()=MakerCustomerDeleteReq.Firm;
		cmd.Param("i_MakeMarketFirmID").setAsString()=MakerCustomerDeleteReq.MakeMarketFirmID;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* Ӧ����Ϣ */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* �����̿ͻ��ʸ�ɾ��Ӧ�� */
		if(!RspInfo.RspNo){
			strcpy(MakerCustomerDeleteRsp.UserID,cmd.Param("o_UserID").asString().GetBuffer(0));
			RspPackage.PutFields(&MakerCustomerDeleteRsp,ETSClearFieldNoMakerCustomerDeleteRsp);
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeMakerCustomerDeleteRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleMakerCustomerDeleteReq:���ݿ����ʧ�ܣ�[%s]",(const char*)x.ErrText());

		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		switch(x.ErrNativeCode()){
		case 3114:
			RspInfo.RspNo=ETSClearConstRspNoDBNotReady;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNotReady);
			break;
		case 12571:
			RspInfo.RspNo=ETSClearConstRspNoDBNetworkProblem;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNetworkProblem);
			m_Connection.Disconnect();
			Connect(); // ��������
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:�ع�ʧ�ܣ�[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* Ӧ����Ϣ */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeMakerCustomerDeleteRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*��������ѯ����*/
void CDBProcessor::HandleConditionOrderQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* ��������ѯ���� */
	CETSClearFieldsConditionOrderQueryReq ConditionOrderQueryReq;
	Package.GetFields(&ConditionOrderQueryReq,ETSClearFieldNoConditionOrderQueryReq);

	// Response
	CETSClearPackage RspPackage;
	/* ��������ѯӦ�� */
	CETSClearFieldsConditionOrderPush ConditionOrderPush;
	CBMLRecordSet ConditionOrderQueryRspList;
	SACommand *pCursor=NULL;
	/* Ӧ����Ϣ */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_ConditionOrder.ConditionOrderQuery");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* ��������ѯ���� */
		cmd.Param("i_UserID").setAsString()=ConditionOrderQueryReq.UserID;
		cmd.Param("i_Firm").setAsString()=ConditionOrderQueryReq.Firm;
		cmd.Param("i_Customer").setAsString()=ConditionOrderQueryReq.Customer;
		cmd.Param("i_ConditionOrderNo").setAsNumeric()=ConditionOrderQueryReq.ConditionOrderNo;
		cmd.Param("i_Market").setAsString()=ConditionOrderQueryReq.Market;
		cmd.Param("i_Commodity").setAsString()=ConditionOrderQueryReq.Commodity;
		cmd.Param("i_StartTime").setAsLong()=ConditionOrderQueryReq.StartTime;
		cmd.Param("i_EndTime").setAsLong()=ConditionOrderQueryReq.EndTime;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* Ӧ����Ϣ */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* ��������ѯӦ�� */
		if(!RspInfo.RspNo){
			RspPackage.PutRecordSet(ETSClearFieldNoConditionOrderQueryRspList,&ConditionOrderQueryRspList);
			pCursor = cmd.Param("o_Cursor");
			while(pCursor->FetchNext())
			{
				ConditionOrderPush.SessionNo=pCursor->Field("SessionNo").asLong();
				ConditionOrderPush.LocalSerialNo=pCursor->Field("LocalSerialNo").asNumeric();
				strcpy(ConditionOrderPush.UserID,pCursor->Field("UserID").asString().GetBuffer(0));
				ConditionOrderPush.OrderDate=pCursor->Field("OrderDate").asLong();
				ConditionOrderPush.OrderTime=pCursor->Field("OrderTime").asLong();
				ConditionOrderPush.ConditionOrderNo=pCursor->Field("ConditionOrderNo").asNumeric();
				strcpy(ConditionOrderPush.Market,pCursor->Field("Market").asString().GetBuffer(0));
				strcpy(ConditionOrderPush.Firm,pCursor->Field("Firm").asString().GetBuffer(0));
				strcpy(ConditionOrderPush.Customer,pCursor->Field("Customer").asString().GetBuffer(0));
				strcpy(ConditionOrderPush.Commodity,pCursor->Field("Commodity").asString().GetBuffer(0));
				memcpy(&ConditionOrderPush.Direction,pCursor->Field("Direction").asString().GetBuffer(0),1);
				ConditionOrderPush.ConditionPrice=pCursor->Field("ConditionPrice").asDouble();
				memcpy(&ConditionOrderPush.BuySell,pCursor->Field("BuySell").asString().GetBuffer(0),1);
				memcpy(&ConditionOrderPush.Settleflg,pCursor->Field("Settleflg").asString().GetBuffer(0),1);
				memcpy(&ConditionOrderPush.OrderType,pCursor->Field("OrderType").asString().GetBuffer(0),1);
				ConditionOrderPush.MatchMethod=pCursor->Field("MatchMethod").asLong();
				ConditionOrderPush.Price=pCursor->Field("Price").asDouble();
				ConditionOrderPush.Qty=pCursor->Field("Qty").asLong();
				ConditionOrderPush.WithdrawDate=pCursor->Field("WithdrawDate").asLong();
				ConditionOrderPush.WithdrawTime=pCursor->Field("WithdrawTime").asLong();
				ConditionOrderPush.OrderNo=pCursor->Field("OrderNo").asNumeric();
				memcpy(&ConditionOrderPush.OrderStatus,pCursor->Field("OrderStatus").asString().GetBuffer(0),1);
				strcpy(ConditionOrderPush.Remark,pCursor->Field("Remark").asString().GetBuffer(0));

				if(ConditionOrderQueryRspList.Insert(&ConditionOrderPush)<0){
					RspPackage.SetEndFlag(1);
					m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeConditionOrderQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);

					// ����
					RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);
					RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
					RspPackage.PutRecordSet(ETSClearFieldNoConditionOrderQueryRspList,&ConditionOrderQueryRspList);
					ConditionOrderQueryRspList.Insert(&ConditionOrderPush);
				}
			}
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeConditionOrderQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleConditionOrderQueryReq:���ݿ����ʧ�ܣ�[%s]",(const char*)x.ErrText());

		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		switch(x.ErrNativeCode()){
		case 3114:
			RspInfo.RspNo=ETSClearConstRspNoDBNotReady;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNotReady);
			break;
		case 12571:
			RspInfo.RspNo=ETSClearConstRspNoDBNetworkProblem;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNetworkProblem);
			m_Connection.Disconnect();
			Connect(); // ��������
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:�ع�ʧ�ܣ�[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* Ӧ����Ϣ */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeConditionOrderQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*�˻������˻���������*/
void CDBProcessor::HandleAccountCenterCreatAccountReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* �˻������˻��������� */
	CETSClearFieldsAccountCenterCreatAccountReq AccountCenterCreatAccountReq;
	Package.GetFields(&AccountCenterCreatAccountReq,ETSClearFieldNoAccountCenterCreatAccountReq);

	// Response
	CETSClearPackage RspPackage;
	/* �˻������˻�����Ӧ�� */
	CETSClearFieldsAccountCenterCreatAccountRsp AccountCenterCreatAccountRsp;
	/* Ӧ����Ϣ */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
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
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* Ӧ����Ϣ */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* �˻������˻�����Ӧ�� */
		if(!RspInfo.RspNo){
			strcpy(AccountCenterCreatAccountRsp.UserID,cmd.Param("o_UserID").asString().GetBuffer(0));
			strcpy(AccountCenterCreatAccountRsp.Firm,cmd.Param("o_Firm").asString().GetBuffer(0));
			strcpy(AccountCenterCreatAccountRsp.Customer,cmd.Param("o_Customer").asString().GetBuffer(0));
			RspPackage.PutFields(&AccountCenterCreatAccountRsp,ETSClearFieldNoAccountCenterCreatAccountRsp);
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeAccountCenterCreatAccountRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleAccountCenterCreatAccountReq:���ݿ����ʧ�ܣ�[%s]",(const char*)x.ErrText());

		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		switch(x.ErrNativeCode()){
		case 3114:
			RspInfo.RspNo=ETSClearConstRspNoDBNotReady;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNotReady);
			break;
		case 12571:
			RspInfo.RspNo=ETSClearConstRspNoDBNetworkProblem;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNetworkProblem);
			m_Connection.Disconnect();
			Connect(); // ��������
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:�ع�ʧ�ܣ�[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* Ӧ����Ϣ */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeAccountCenterCreatAccountRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*�˻����ĳ��������*/
void CDBProcessor::HandleAccCenterIOMoneyReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* �˻����ĳ�������� */
	CETSClearFieldsAccCenterIOMoneyReq AccCenterIOMoneyReq;
	Package.GetFields(&AccCenterIOMoneyReq,ETSClearFieldNoAccCenterIOMoneyReq);

	// Response
	CETSClearPackage RspPackage;
	/* �˻����ĳ����Ӧ�� */
	CETSClearFieldsAccCenterIOMoneyRsp AccCenterIOMoneyRsp;
	/* Ӧ����Ϣ */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_AccCenterIOMoney.AccCenterIOMoney");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* �˻����ĳ�������� */
		cmd.Param("i_UserID").setAsString()=AccCenterIOMoneyReq.UserID;
		cmd.Param("i_Firm").setAsString()=AccCenterIOMoneyReq.Firm;
		cmd.Param("i_Customer").setAsString()=AccCenterIOMoneyReq.Customer;
		cmd.Param("i_IODirect").setAsString()=AccCenterIOMoneyReq.IODirect;
		cmd.Param("i_IO_Amount").setAsDouble()=AccCenterIOMoneyReq.IO_Amount;
		cmd.Param("i_IOMoneyFlowID").setAsNumeric()=AccCenterIOMoneyReq.IOMoneyFlowID;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* Ӧ����Ϣ */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* �˻����ĳ����Ӧ�� */
		if(!RspInfo.RspNo){
			strcpy(AccCenterIOMoneyRsp.UserID,cmd.Param("o_UserID").asString().GetBuffer(0));
			strcpy(AccCenterIOMoneyRsp.Firm,cmd.Param("o_Firm").asString().GetBuffer(0));
			strcpy(AccCenterIOMoneyRsp.Customer,cmd.Param("o_Customer").asString().GetBuffer(0));
			AccCenterIOMoneyRsp.AccountFunds=cmd.Param("o_AccountFunds").asDouble();
			AccCenterIOMoneyRsp.IOMoneyFlowID=cmd.Param("o_IOMoneyFlowID").asNumeric();
			AccCenterIOMoneyRsp.SysFlowID=cmd.Param("o_SysFlowID").asNumeric();
			RspPackage.PutFields(&AccCenterIOMoneyRsp,ETSClearFieldNoAccCenterIOMoneyRsp);
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeAccCenterIOMoneyRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleAccCenterIOMoneyReq:���ݿ����ʧ�ܣ�[%s]",(const char*)x.ErrText());

		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		switch(x.ErrNativeCode()){
		case 3114:
			RspInfo.RspNo=ETSClearConstRspNoDBNotReady;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNotReady);
			break;
		case 12571:
			RspInfo.RspNo=ETSClearConstRspNoDBNetworkProblem;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNetworkProblem);
			m_Connection.Disconnect();
			Connect(); // ��������
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:�ع�ʧ�ܣ�[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* Ӧ����Ϣ */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeAccCenterIOMoneyRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*�˻������ʽ���ˮ��ѯ����*/
void CDBProcessor::HandleAccCenterIOMoneyQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* �˻������ʽ���ˮ��ѯ���� */
	CETSClearFieldsAccCenterIOMoneyQueryReq AccCenterIOMoneyQueryReq;
	Package.GetFields(&AccCenterIOMoneyQueryReq,ETSClearFieldNoAccCenterIOMoneyQueryReq);

	// Response
	CETSClearPackage RspPackage;
	/* �˻������ʽ���ˮ��ѯӦ�� */
	CETSClearFieldsAccCenterIOMoneyQueryRsp AccCenterIOMoneyQueryRsp;
	CBMLRecordSet AccCenterIOMoneyQueryRspList;
	SACommand *pCursor=NULL;
	/* Ӧ����Ϣ */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_AccCenterIOMoney.AccCenterIOMoneyQuery");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* �˻������ʽ���ˮ��ѯ���� */
		cmd.Param("i_UserID").setAsString()=AccCenterIOMoneyQueryReq.UserID;
		cmd.Param("i_Firm").setAsString()=AccCenterIOMoneyQueryReq.Firm;
		cmd.Param("i_Customer").setAsString()=AccCenterIOMoneyQueryReq.Customer;
		cmd.Param("i_IOMoneyFlowID").setAsNumeric()=AccCenterIOMoneyQueryReq.IOMoneyFlowID;
		cmd.Param("i_StartDate").setAsLong()=AccCenterIOMoneyQueryReq.StartDate;
		cmd.Param("i_EndDate").setAsLong()=AccCenterIOMoneyQueryReq.EndDate;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* Ӧ����Ϣ */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* �˻������ʽ���ˮ��ѯӦ�� */
		if(!RspInfo.RspNo){
			RspPackage.PutRecordSet(ETSClearFieldNoAccCenterIOMoneyQueryRspList,&AccCenterIOMoneyQueryRspList);
			pCursor = cmd.Param("o_Cursor");
			while(pCursor->FetchNext())
			{
				strcpy(AccCenterIOMoneyQueryRsp.UserID,pCursor->Field("UserID").asString().GetBuffer(0));
				strcpy(AccCenterIOMoneyQueryRsp.Firm,pCursor->Field("Firm").asString().GetBuffer(0));
				strcpy(AccCenterIOMoneyQueryRsp.Customer,pCursor->Field("Customer").asString().GetBuffer(0));
				AccCenterIOMoneyQueryRsp.IODate=pCursor->Field("IODate").asLong();
				AccCenterIOMoneyQueryRsp.IOTime=pCursor->Field("IOTime").asLong();
				memcpy(&AccCenterIOMoneyQueryRsp.IODirect,pCursor->Field("IODirect").asString().GetBuffer(0),1);
				AccCenterIOMoneyQueryRsp.IO_Amount=pCursor->Field("IO_Amount").asDouble();
				AccCenterIOMoneyQueryRsp.IOMoneyFlowID=pCursor->Field("IOMoneyFlowID").asNumeric();

				if(AccCenterIOMoneyQueryRspList.Insert(&AccCenterIOMoneyQueryRsp)<0){
					RspPackage.SetEndFlag(1);
					m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeAccCenterIOMoneyQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);

					// ����
					RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);
					RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
					RspPackage.PutRecordSet(ETSClearFieldNoAccCenterIOMoneyQueryRspList,&AccCenterIOMoneyQueryRspList);
					AccCenterIOMoneyQueryRspList.Insert(&AccCenterIOMoneyQueryRsp);
				}
			}
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeAccCenterIOMoneyQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleAccCenterIOMoneyQueryReq:���ݿ����ʧ�ܣ�[%s]",(const char*)x.ErrText());

		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		switch(x.ErrNativeCode()){
		case 3114:
			RspInfo.RspNo=ETSClearConstRspNoDBNotReady;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNotReady);
			break;
		case 12571:
			RspInfo.RspNo=ETSClearConstRspNoDBNetworkProblem;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNetworkProblem);
			m_Connection.Disconnect();
			Connect(); // ��������
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:�ع�ʧ�ܣ�[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* Ӧ����Ϣ */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeAccCenterIOMoneyQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*���ӻ�����������*/
void CDBProcessor::HandleIOStockReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* ���ӻ����������� */
	CETSClearFieldsIOStockReq IOStockReq;
	Package.GetFields(&IOStockReq,ETSClearFieldNoIOStockReq);

	// Response
	CETSClearPackage RspPackage;
	/* ���ӻ�������Ӧ�� */
	CETSClearFieldsIOStockRsp IOStockRsp;
	/* Ӧ����Ϣ */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_Goods.IOStock");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* ���ӻ����������� */
		cmd.Param("i_UserID").setAsString()=IOStockReq.UserID;
		cmd.Param("i_Firm").setAsString()=IOStockReq.Firm;
		cmd.Param("i_Customer").setAsString()=IOStockReq.Customer;
		cmd.Param("i_Commodity").setAsString()=IOStockReq.Commodity;
		cmd.Param("i_IO_Goods_Qty").setAsLong()=IOStockReq.IO_Goods_Qty;
		cmd.Param("i_Action").setAsString()=IOStockReq.Action;
		cmd.Param("i_GoodsFlowID").setAsNumeric()=IOStockReq.GoodsFlowID;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* Ӧ����Ϣ */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* ���ӻ�������Ӧ�� */
		if(!RspInfo.RspNo){
			strcpy(IOStockRsp.UserID,cmd.Param("o_UserID").asString().GetBuffer(0));
			strcpy(IOStockRsp.Firm,cmd.Param("o_Firm").asString().GetBuffer(0));
			strcpy(IOStockRsp.Customer,cmd.Param("o_Customer").asString().GetBuffer(0));
			strcpy(IOStockRsp.Commodity,cmd.Param("o_Commodity").asString().GetBuffer(0));
			IOStockRsp.Goods_Qty=cmd.Param("o_Goods_Qty").asLong();
			IOStockRsp.GoodsFlowID=cmd.Param("o_GoodsFlowID").asNumeric();
			IOStockRsp.SysFlowID=cmd.Param("o_SysFlowID").asNumeric();
			RspPackage.PutFields(&IOStockRsp,ETSClearFieldNoIOStockRsp);
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeIOStockRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleIOStockReq:���ݿ����ʧ�ܣ�[%s]",(const char*)x.ErrText());

		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		switch(x.ErrNativeCode()){
		case 3114:
			RspInfo.RspNo=ETSClearConstRspNoDBNotReady;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNotReady);
			break;
		case 12571:
			RspInfo.RspNo=ETSClearConstRspNoDBNetworkProblem;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNetworkProblem);
			m_Connection.Disconnect();
			Connect(); // ��������
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:�ع�ʧ�ܣ�[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* Ӧ����Ϣ */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeIOStockRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*�˻������˻���ѯ����*/
void CDBProcessor::HandleAccountCenterAccountQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* �˻������˻���ѯ���� */
	CETSClearFieldsAccountCenterAccountQueryReq AccountCenterAccountQueryReq;
	Package.GetFields(&AccountCenterAccountQueryReq,ETSClearFieldNoAccountCenterAccountQueryReq);

	// Response
	CETSClearPackage RspPackage;
	/* �˻������˻���ѯӦ�� */
	CETSClearFieldsAccountCenterAccountQueryRsp AccountCenterAccountQueryRsp;
	/* Ӧ����Ϣ */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_AccountCenter.AccountCenterAccountQuery");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* �˻������˻���ѯ���� */
		cmd.Param("i_UserID").setAsString()=AccountCenterAccountQueryReq.UserID;
		cmd.Param("i_DocumentType").setAsString()=AccountCenterAccountQueryReq.DocumentType;
		cmd.Param("i_IdentificationNumber").setAsString()=AccountCenterAccountQueryReq.IdentificationNumber;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* Ӧ����Ϣ */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* �˻������˻���ѯӦ�� */
		if(!RspInfo.RspNo){
			strcpy(AccountCenterAccountQueryRsp.UserID,cmd.Param("o_UserID").asString().GetBuffer(0));
			strcpy(AccountCenterAccountQueryRsp.Customer,cmd.Param("o_Customer").asString().GetBuffer(0));
			strcpy(AccountCenterAccountQueryRsp.CustomerName,cmd.Param("o_CustomerName").asString().GetBuffer(0));
			strcpy(AccountCenterAccountQueryRsp.Firm,cmd.Param("o_Firm").asString().GetBuffer(0));
			RspPackage.PutFields(&AccountCenterAccountQueryRsp,ETSClearFieldNoAccountCenterAccountQueryRsp);
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeAccountCenterAccountQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleAccountCenterAccountQueryReq:���ݿ����ʧ�ܣ�[%s]",(const char*)x.ErrText());

		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		switch(x.ErrNativeCode()){
		case 3114:
			RspInfo.RspNo=ETSClearConstRspNoDBNotReady;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNotReady);
			break;
		case 12571:
			RspInfo.RspNo=ETSClearConstRspNoDBNetworkProblem;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNetworkProblem);
			m_Connection.Disconnect();
			Connect(); // ��������
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:�ع�ʧ�ܣ�[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* Ӧ����Ϣ */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeAccountCenterAccountQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*�˻������˻�����ѯ����*/
void CDBProcessor::HandleAccCenterIOMoneyBalanceQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* �˻������˻�����ѯ���� */
	CETSClearFieldsAccCenterIOMoneyBalanceQueryReq AccCenterIOMoneyBalanceQueryReq;
	Package.GetFields(&AccCenterIOMoneyBalanceQueryReq,ETSClearFieldNoAccCenterIOMoneyBalanceQueryReq);

	// Response
	CETSClearPackage RspPackage;
	/* �˻������˻�����ѯӦ�� */
	CETSClearFieldsAccCenterIOMoneyBalanceQueryRsp AccCenterIOMoneyBalanceQueryRsp;
	/* Ӧ����Ϣ */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_AccCenterIOMoney.AccCenterIOMoneyBalanceQuery");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* �˻������˻�����ѯ���� */
		cmd.Param("i_UserID").setAsString()=AccCenterIOMoneyBalanceQueryReq.UserID;
		cmd.Param("i_Firm").setAsString()=AccCenterIOMoneyBalanceQueryReq.Firm;
		cmd.Param("i_Customer").setAsString()=AccCenterIOMoneyBalanceQueryReq.Customer;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* Ӧ����Ϣ */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* �˻������˻�����ѯӦ�� */
		if(!RspInfo.RspNo){
			strcpy(AccCenterIOMoneyBalanceQueryRsp.UserID,cmd.Param("o_UserID").asString().GetBuffer(0));
			strcpy(AccCenterIOMoneyBalanceQueryRsp.Firm,cmd.Param("o_Firm").asString().GetBuffer(0));
			strcpy(AccCenterIOMoneyBalanceQueryRsp.Customer,cmd.Param("o_Customer").asString().GetBuffer(0));
			AccCenterIOMoneyBalanceQueryRsp.AccountFunds=cmd.Param("o_AccountFunds").asDouble();
			AccCenterIOMoneyBalanceQueryRsp.LockMarginamt=cmd.Param("o_LockMarginamt").asDouble();
			RspPackage.PutFields(&AccCenterIOMoneyBalanceQueryRsp,ETSClearFieldNoAccCenterIOMoneyBalanceQueryRsp);
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeAccCenterIOMoneyBalanceQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleAccCenterIOMoneyBalanceQueryReq:���ݿ����ʧ�ܣ�[%s]",(const char*)x.ErrText());

		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		switch(x.ErrNativeCode()){
		case 3114:
			RspInfo.RspNo=ETSClearConstRspNoDBNotReady;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNotReady);
			break;
		case 12571:
			RspInfo.RspNo=ETSClearConstRspNoDBNetworkProblem;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNetworkProblem);
			m_Connection.Disconnect();
			Connect(); // ��������
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:�ع�ʧ�ܣ�[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* Ӧ����Ϣ */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeAccCenterIOMoneyBalanceQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*���ӻ�����ѯ����*/
void CDBProcessor::HandleIOStockBalanceQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* ���ӻ�����ѯ���� */
	CETSClearFieldsIOStockBalanceQueryReq IOStockBalanceQueryReq;
	Package.GetFields(&IOStockBalanceQueryReq,ETSClearFieldNoIOStockBalanceQueryReq);

	// Response
	CETSClearPackage RspPackage;
	/* ���ӻ�����ѯӦ�� */
	CETSClearFieldsIOStockBalanceQueryRsp IOStockBalanceQueryRsp;
	/* Ӧ����Ϣ */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_Goods.IOStockBalanceQuery");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* ���ӻ�����ѯ���� */
		cmd.Param("i_UserID").setAsString()=IOStockBalanceQueryReq.UserID;
		cmd.Param("i_Firm").setAsString()=IOStockBalanceQueryReq.Firm;
		cmd.Param("i_Customer").setAsString()=IOStockBalanceQueryReq.Customer;
		cmd.Param("i_Commodity").setAsString()=IOStockBalanceQueryReq.Commodity;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* Ӧ����Ϣ */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* ���ӻ�����ѯӦ�� */
		if(!RspInfo.RspNo){
			strcpy(IOStockBalanceQueryRsp.UserID,cmd.Param("o_UserID").asString().GetBuffer(0));
			strcpy(IOStockBalanceQueryRsp.Firm,cmd.Param("o_Firm").asString().GetBuffer(0));
			strcpy(IOStockBalanceQueryRsp.Customer,cmd.Param("o_Customer").asString().GetBuffer(0));
			strcpy(IOStockBalanceQueryRsp.Commodity,cmd.Param("o_Commodity").asString().GetBuffer(0));
			IOStockBalanceQueryRsp.AllQty=cmd.Param("o_AllQty").asLong();
			IOStockBalanceQueryRsp.BalanceQty=cmd.Param("o_BalanceQty").asLong();
			IOStockBalanceQueryRsp.LockTradeQty=cmd.Param("o_LockTradeQty").asLong();
			IOStockBalanceQueryRsp.LockIOQty=cmd.Param("o_LockIOQty").asLong();
			RspPackage.PutFields(&IOStockBalanceQueryRsp,ETSClearFieldNoIOStockBalanceQueryRsp);
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeIOStockBalanceQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleIOStockBalanceQueryReq:���ݿ����ʧ�ܣ�[%s]",(const char*)x.ErrText());

		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		switch(x.ErrNativeCode()){
		case 3114:
			RspInfo.RspNo=ETSClearConstRspNoDBNotReady;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNotReady);
			break;
		case 12571:
			RspInfo.RspNo=ETSClearConstRspNoDBNetworkProblem;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNetworkProblem);
			m_Connection.Disconnect();
			Connect(); // ��������
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:�ع�ʧ�ܣ�[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* Ӧ����Ϣ */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeIOStockBalanceQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*���ӻ�����ˮ��ѯ����*/
void CDBProcessor::HandleIOStockQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* ���ӻ�����ˮ��ѯ���� */
	CETSClearFieldsIOStockQueryReq IOStockQueryReq;
	Package.GetFields(&IOStockQueryReq,ETSClearFieldNoIOStockQueryReq);

	// Response
	CETSClearPackage RspPackage;
	/* ���ӻ�����ˮ��ѯӦ�� */
	CETSClearFieldsIOStockQueryRsp IOStockQueryRsp;
	CBMLRecordSet IOStockQueryRspList;
	SACommand *pCursor=NULL;
	/* Ӧ����Ϣ */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_Goods.IOStockQuery");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* ���ӻ�����ˮ��ѯ���� */
		cmd.Param("i_UserID").setAsString()=IOStockQueryReq.UserID;
		cmd.Param("i_Firm").setAsString()=IOStockQueryReq.Firm;
		cmd.Param("i_Customer").setAsString()=IOStockQueryReq.Customer;
		cmd.Param("i_Commodity").setAsString()=IOStockQueryReq.Commodity;
		cmd.Param("i_IOStockFlowID").setAsNumeric()=IOStockQueryReq.IOStockFlowID;
		cmd.Param("i_StartDate").setAsLong()=IOStockQueryReq.StartDate;
		cmd.Param("i_EndDate").setAsLong()=IOStockQueryReq.EndDate;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* Ӧ����Ϣ */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* ���ӻ�����ˮ��ѯӦ�� */
		if(!RspInfo.RspNo){
			RspPackage.PutRecordSet(ETSClearFieldNoIOStockQueryRspList,&IOStockQueryRspList);
			pCursor = cmd.Param("o_Cursor");
			while(pCursor->FetchNext())
			{
				strcpy(IOStockQueryRsp.UserID,pCursor->Field("UserID").asString().GetBuffer(0));
				strcpy(IOStockQueryRsp.Firm,pCursor->Field("Firm").asString().GetBuffer(0));
				strcpy(IOStockQueryRsp.Customer,pCursor->Field("Customer").asString().GetBuffer(0));
				strcpy(IOStockQueryRsp.Commodity,pCursor->Field("Commodity").asString().GetBuffer(0));
				IOStockQueryRsp.IODate=pCursor->Field("IODate").asLong();
				IOStockQueryRsp.IOTime=pCursor->Field("IOTime").asLong();
				memcpy(&IOStockQueryRsp.Action,pCursor->Field("Action").asString().GetBuffer(0),1);
				IOStockQueryRsp.IO_Amount=pCursor->Field("IO_Amount").asDouble();
				IOStockQueryRsp.IOStockFlowID=pCursor->Field("IOStockFlowID").asNumeric();

				if(IOStockQueryRspList.Insert(&IOStockQueryRsp)<0){
					RspPackage.SetEndFlag(1);
					m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeIOStockQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);

					// ����
					RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);
					RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
					RspPackage.PutRecordSet(ETSClearFieldNoIOStockQueryRspList,&IOStockQueryRspList);
					IOStockQueryRspList.Insert(&IOStockQueryRsp);
				}
			}
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeIOStockQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleIOStockQueryReq:���ݿ����ʧ�ܣ�[%s]",(const char*)x.ErrText());

		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		switch(x.ErrNativeCode()){
		case 3114:
			RspInfo.RspNo=ETSClearConstRspNoDBNotReady;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNotReady);
			break;
		case 12571:
			RspInfo.RspNo=ETSClearConstRspNoDBNetworkProblem;
			strcpy(RspInfo.RspDesc,ETSClearConstCommentRspNoDBNetworkProblem);
			m_Connection.Disconnect();
			Connect(); // ��������
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:�ع�ʧ�ܣ�[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* Ӧ����Ϣ */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeIOStockQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

