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
		case 12154: // SID错误
		case 1017: // 用户名、密码错误
			r=-1;
			break;
		default:
			r=1; // 其它情况下均需要自动重连
			break;
		}
	}
	if(r==0){
		logsend(lp,LOG_INFO,"System","Connect to DB succeed.");
	}else if(r>0){
		// 设置重连定时器
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
	case ETSClearMsgTypeLogonReq:	/* 登录请求 */
		HandleLogonReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeLogoffReq:	/* 登出请求 */
		HandleLogoffReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;	
	case ETSClearMsgTypeMenuQueryReq:	/* 菜单查询请求 */
		HandleMenuQueryReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeMenuAddReq:	/* 菜单增加请求 */
		HandleMenuAddReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeMenuDeleteReq:	/* 菜单删除请求 */
		HandleMenuDeleteReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeOperAddReq:	/* 操作员增加请求 */
		HandleOperAddReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeOperDeleteReq:	/* 操作员删除请求 */
		HandleOperDeleteReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeChangePasswordReq:	/* 修改密码请求 */
		HandleChangePasswordReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeQuotReq:	/* 行情请求 */
		HandleQuotReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeSpotQuotReq:	/* 现货行情请求 */
		HandleSpotQuotReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeMarketReq:	/* 市场请求 */
		HandleMarketReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeOrderQueryReq:	/* 订单查询请求 */
		HandleOrderQueryReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeTradeQueryReq:	/* 成交查询请求 */
		HandleTradeQueryReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeHoldingQueryReq:	/* 持仓查询请求 */
		HandleHoldingQueryReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeFundsQueryReq:	/* 资金查询请求 */
		HandleFundsQueryReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeCommodityQueryReq:	/* 商品查询请求 */
		HandleCommodityQueryReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeSpotPropertyQueryReq:	/* 现货属性查询请求 */
		HandleSpotPropertyQueryReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeSpotPropertyLookupQueryReq:	/* 现货属性下拉列表查询请求 */
		HandleSpotPropertyLookupQueryReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeLocationQueryReq:	/* 现货交货地点查询请求 */
		HandleLocationQueryReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeLogQueryReq:	/* 日志查询请求 */
		HandleLogQueryReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeFirmQueryReq:	/* 查询会员请求 */
		HandleFirmQueryReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeFirmAddReq:	/* 增加会员请求 */
		HandleFirmAddReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeFirmModifyReq:	/* 修改会员请求 */
		HandleFirmModifyReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeFirmDeleteReq:	/* 删除会员请求 */
		HandleFirmDeleteReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeTraderQueryReq:	/* 查询交易员请求 */
		HandleTraderQueryReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeTraderAddReq:	/* 增加交易员请求 */
		HandleTraderAddReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeTraderModifyReq:	/* 修改交易员请求 */
		HandleTraderModifyReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeTraderDeleteReq:	/* 删除交易员请求 */
		HandleTraderDeleteReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeCustomerQueryReq:	/* 查询客户请求 */
		HandleCustomerQueryReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeCustomerAddReq:	/* 增加客户请求 */
		HandleCustomerAddReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeCustomerModifyReq:	/* 修改客户请求 */
		HandleCustomerModifyReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeCustomerDeleteReq:	/* 删除客户请求 */
		HandleCustomerDeleteReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeOperQueryReq:	/* 查询操作员请求 */
		HandleOperQueryReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeMarketAddReq:	/* 增加市场请求 */
		HandleMarketAddReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeMarketModifyReq:	/* 修改市场请求 */
		HandleMarketModifyReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeMarketDeleteReq:	/* 删除市场请求 */
		HandleMarketDeleteReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeCommodityAddReq:	/* 增加商品请求 */
		HandleCommodityAddReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeCommodityModifyReq:	/* 修改商品请求 */
		HandleCommodityModifyReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeCommodityDeleteReq:	/* 删除商品请求 */
		HandleCommodityDeleteReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeCommodityPropertyAddReq:	/* 增加商品属性请求 */
		HandleCommodityPropertyAddReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeCommodityPropertyQueryReq:	/* 查询商品属性请求 */
		HandleCommodityPropertyQueryReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeCommodityPropertyDeleteReq:	/* 删除商品属性请求 */
		HandleCommodityPropertyDeleteReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypePropertyLookupAddReq:	/* 增加商品属性下拉选项请求 */
		HandlePropertyLookupAddReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypePropertyLookupQueryReq:	/* 查询商品属性下拉选项请求 */
		HandlePropertyLookupQueryReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypePropertyLookupDeleteReq:	/* 删除商品属性下拉选项请求 */
		HandlePropertyLookupDeleteReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeVarietyQueryReq:	/* 查询品种请求 */
		HandleVarietyQueryReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeVarietyAddReq:	/* 增加品种请求 */
		HandleVarietyAddReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeVarietyModifyReq:	/* 修改品种请求 */
		HandleVarietyModifyReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeVarietyDeleteReq:	/* 删除品种请求 */
		HandleVarietyDeleteReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeTradingTimeQueryReq:	/* 查询交易节请求 */
		HandleTradingTimeQueryReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeTradingTimeAddReq:	/* 增加交易节请求 */
		HandleTradingTimeAddReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeTradingTimeModifyReq:	/* 修改交易节请求 */
		HandleTradingTimeModifyReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeTradingTimeDeleteReq:	/* 删除交易节请求 */
		HandleTradingTimeDeleteReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeLocationAddReq:	/* 增加交货地点请求 */
		HandleLocationAddReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeLocationModifyReq:	/* 修改交货地点请求 */
		HandleLocationModifyReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeLocationDeleteReq:	/* 删除交货地点请求 */
		HandleLocationDeleteReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeWareHouseQueryReq:	/* 查询商品存储仓库请求 */
		HandleWareHouseQueryReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeWareHouseAddReq:	/* 增加商品存储仓库请求 */
		HandleWareHouseAddReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeWareHouseModifyReq:	/* 修改商品存储仓库请求 */
		HandleWareHouseModifyReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeWareHouseDeleteReq:	/* 删除商品存储仓库请求 */
		HandleWareHouseDeleteReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeDHouseQueryReq:	/* 查询交割仓库请求 */
		HandleDHouseQueryReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeDHouseAddReq:	/* 增加交割仓库请求 */
		HandleDHouseAddReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeDHouseModifyReq:	/* 修改交割仓库请求 */
		HandleDHouseModifyReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeDHouseDeleteReq:	/* 删除交割仓库请求 */
		HandleDHouseDeleteReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeUserQueryReq:	/* 用户信息查询请求 */
		HandleUserQueryReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeUserAddReq:	/* 用户信息增加请求 */
		HandleUserAddReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeUserDeleteReq:	/* 用户信息删除请求 */
		HandleUserDeleteReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeUserModifyReq:	/* 用户信息修改请求 */
		HandleUserModifyReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeDepartmentQueryReq:	/* 部门信息查询请求 */
		HandleDepartmentQueryReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeDepartmentAddReq:	/* 部门信息增加请求 */
		HandleDepartmentAddReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeDepartmentModifyReq:	/* 部门信息修改请求 */
		HandleDepartmentModifyReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeDepartmentDeleteReq:	/* 部门信息删除请求 */
		HandleDepartmentDeleteReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypePositionQueryReq:	/* 岗位信息查询请求 */
		HandlePositionQueryReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypePositionAddReq:	/* 岗位信息增加请求 */
		HandlePositionAddReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypePositionModifyReq:	/* 岗位信息修改请求 */
		HandlePositionModifyReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypePositionDeleteReq:	/* 岗位信息删除请求 */
		HandlePositionDeleteReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeDepAuthorityQueryReq:	/* 部门权限查询请求 */
		HandleDepAuthorityQueryReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeAuthorityQueryReq:	/* 全权限查询请求 */
		HandleAuthorityQueryReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeDepAuthorityAddReq:	/* 部门权限增加请求 */
		HandleDepAuthorityAddReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeDepAuthorityDeleteReq:	/* 部门权限删除请求 */
		HandleDepAuthorityDeleteReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypePosAuthorityQueryReq:	/* 岗位权限查询请求 */
		HandlePosAuthorityQueryReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypePosAuthorityAddReq:	/* 岗位权限增加请求 */
		HandlePosAuthorityAddReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypePosAuthorityDeleteReq:	/* 岗位权限删除请求 */
		HandlePosAuthorityDeleteReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeUseAuthorityQueryReq:	/* 用户权限查询请求 */
		HandleUseAuthorityQueryReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeUseAuthorityAddReq:	/* 用户权限增加请求 */
		HandleUseAuthorityAddReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeUseAuthorityDeleteReq:	/* 用户权限删除请求 */
		HandleUseAuthorityDeleteReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeCommodityHistQueryReq:	/* 查询交易商品合约历史请求 */
		HandleCommodityHistQueryReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeGoodsQueryReq:	/* 电子货单查询请求 */
		HandleGoodsQueryReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeClearingQueryReq:	/* 会员清算信息查询请求 */
		HandleClearingQueryReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeCusClearingQueryReq:	/* 客户清算信息查询请求 */
		HandleCusClearingQueryReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeAccessQueryReq:	/* 交易控制查询请求 */
		HandleAccessQueryReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeAccessAddReq:	/* 新增交易控制请求 */
		HandleAccessAddReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeAccessDeleteReq:	/* 删除交易控制请求 */
		HandleAccessDeleteReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeAccessModifyReq:	/* 修改交易控制请求 */
		HandleAccessModifyReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeDayBalanceQueryReq:	/* 会员结算信息查询请求 */
		HandleDayBalanceQueryReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeCusDayBalQueryReq:	/* 客户结算信息查询请求 */
		HandleCusDayBalQueryReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeClearPriceReq:	/* 结算价计算请求 */
		HandleClearPriceReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeDayClearReq:	/* 结算及整理请求 */
		HandleDayClearReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeFxRatesQueryReq:	/* 每日外币兑人民币汇率表查询请求 */
		HandleFxRatesQueryReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeFxRatesAddReq:	/* 每日外币兑人民币汇率表增加请求 */
		HandleFxRatesAddReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeFxRatesDeleteReq:	/* 每日外币兑人民币汇率表删除请求 */
		HandleFxRatesDeleteReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeFxRatesModifyReq:	/* 每日外币兑人民币汇率表修改请求 */
		HandleFxRatesModifyReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeMarketMakerQuotesReq:	/* 做市商行情查询请求 */
		HandleMarketMakerQuotesReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeMakerFirmQueryReq:	/* 做市商会员查询请求 */
		HandleMakerFirmQueryReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeMakerFirmAddReq:	/* 做市商会员资格增加请求 */
		HandleMakerFirmAddReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeMakerFirmDeleteReq:	/* 做市商会员资格删除请求 */
		HandleMakerFirmDeleteReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeMakerCustomerQueryReq:	/* 做市商客户查询请求 */
		HandleMakerCustomerQueryReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeMakerCustomerAddReq:	/* 做市商客户资格增加请求 */
		HandleMakerCustomerAddReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeMakerCustomerDeleteReq:	/* 做市商客户资格删除请求 */
		HandleMakerCustomerDeleteReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeConditionOrderQueryReq:	/* 条件单查询请求 */
		HandleConditionOrderQueryReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeAccountCenterCreatAccountReq:	/* 账户中心账户创建请求 */
		HandleAccountCenterCreatAccountReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeAccCenterIOMoneyReq:	/* 账户中心出入金请求 */
		HandleAccCenterIOMoneyReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeAccCenterIOMoneyQueryReq:	/* 账户中心资金流水查询请求 */
		HandleAccCenterIOMoneyQueryReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeIOStockReq:	/* 电子货单出入请求 */
		HandleIOStockReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeAccountCenterAccountQueryReq:	/* 账户中心账户查询请求 */
		HandleAccountCenterAccountQueryReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeAccCenterIOMoneyBalanceQueryReq:	/* 账户中心账户余额查询请求 */
		HandleAccCenterIOMoneyBalanceQueryReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeIOStockBalanceQueryReq:	/* 电子货单查询请求 */
		HandleIOStockBalanceQueryReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	case ETSClearMsgTypeIOStockQueryReq:	/* 电子货单流水查询请求 */
		HandleIOStockQueryReq(RouterNo,AppNo,SessionNo,SeqNo,Package);
		break;
	default:
		break;
	}
}

/*登录请求*/
void CDBProcessor::HandleLogonReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* 登录请求 */
	CETSClearFieldsLogonReq LogonReq;
	Package.GetFields(&LogonReq,ETSClearFieldNoLogonReq);

	// Response
	CETSClearPackage RspPackage;
	/* 登录应答 */
	CETSClearFieldsLogonRsp LogonRsp;
	/* 应答信息 */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_Logon.Logon");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* 登录请求 */
		cmd.Param("i_UserID").setAsString()=LogonReq.UserID;
		cmd.Param("i_Password").setAsString()=LogonReq.Password;
		cmd.Param("i_IPAddress").setAsLong()=LogonReq.IPAddress;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* 应答信息 */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* 登录应答 */
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
		logsend(lp,LOG_INFO,"DB","HandleLogonReq:数据库操作失败！[%s]",(const char*)x.ErrText());

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
			Connect(); // 断线重连
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleLogonReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleLogonReq:回滚失败！[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* 应答信息 */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeLogonRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*登出请求*/
void CDBProcessor::HandleLogoffReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* 登出请求 */
	CETSClearFieldsLogoffReq LogoffReq;
	Package.GetFields(&LogoffReq,ETSClearFieldNoLogoffReq);

	// Response
	CETSClearPackage RspPackage;
	/* 登出应答 */
	CETSClearFieldsLogoffRsp LogoffRsp;
	/* 应答信息 */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_Logon.Logoff");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* 登出请求 */
		cmd.Param("i_UserID").setAsString()=LogoffReq.UserID;
		cmd.Param("i_SessionNo").setAsLong()=LogoffReq.SessionNo;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* 应答信息 */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* 登出应答 */
		if(!RspInfo.RspNo){
			LogoffRsp.SessionNo=cmd.Param("o_SessionNo").asLong();
			strcpy(LogoffRsp.UserID,cmd.Param("o_UserID").asString().GetBuffer(0));
			RspPackage.PutFields(&LogoffRsp,ETSClearFieldNoLogoffRsp);
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeLogoffRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleLogoffReq:数据库操作失败！[%s]",(const char*)x.ErrText());

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
			Connect(); // 断线重连
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleLogoffReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleLogoffReq:回滚失败！[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* 应答信息 */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeLogoffRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}


/*菜单查询请求*/
void CDBProcessor::HandleMenuQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* 菜单查询请求 */
	CETSClearFieldsMenuQueryReq MenuQueryReq;
	Package.GetFields(&MenuQueryReq,ETSClearFieldNoMenuQueryReq);

	// Response
	CETSClearPackage RspPackage;
	/* 菜单查询应答 */
	CETSClearFieldsMenuQueryRsp MenuQueryRsp;
	CBMLRecordSet MenuList;
	SACommand *pCursor=NULL;
	/* 应答信息 */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_Menu.MenuQuery");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* 菜单查询请求 */
		cmd.Param("i_UserID").setAsString()=MenuQueryReq.UserID;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* 应答信息 */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* 菜单查询应答 */
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

					// 重置
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
		logsend(lp,LOG_INFO,"DB","HandleMenuQueryReq:数据库操作失败！[%s]",(const char*)x.ErrText());

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
			Connect(); // 断线重连
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:回滚失败！[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* 应答信息 */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeMenuQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*菜单增加请求*/
void CDBProcessor::HandleMenuAddReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* 菜单增加请求 */
	CETSClearFieldsMenuAddReq MenuAddReq;
	Package.GetFields(&MenuAddReq,ETSClearFieldNoMenuAddReq);

	// Response
	CETSClearPackage RspPackage;
	/* 菜单增加应答 */
	CETSClearFieldsMenuAddRsp MenuAddRsp;
	/* 应答信息 */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_User_Authority.MenuAdd");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* 菜单增加请求 */
		cmd.Param("i_UserID").setAsString()=MenuAddReq.UserID;
		cmd.Param("i_OperID").setAsString()=MenuAddReq.OperID;
		cmd.Param("i_MenuID").setAsLong()=MenuAddReq.MenuID;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* 应答信息 */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* 菜单增加应答 */
		if(!RspInfo.RspNo){
			strcpy(MenuAddRsp.UserID,cmd.Param("o_UserID").asString().GetBuffer(0));
			RspPackage.PutFields(&MenuAddRsp,ETSClearFieldNoMenuAddRsp);
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeMenuAddRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleMenuAddReq:数据库操作失败！[%s]",(const char*)x.ErrText());

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
			Connect(); // 断线重连
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:回滚失败！[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* 应答信息 */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeMenuAddRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*菜单删除请求*/
void CDBProcessor::HandleMenuDeleteReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* 菜单删除请求 */
	CETSClearFieldsMenuDeleteReq MenuDeleteReq;
	Package.GetFields(&MenuDeleteReq,ETSClearFieldNoMenuDeleteReq);

	// Response
	CETSClearPackage RspPackage;
	/* 菜单删除应答 */
	CETSClearFieldsMenuDeleteRsp MenuDeleteRsp;
	/* 应答信息 */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_User_Authority.MenuDelete");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* 菜单删除请求 */
		cmd.Param("i_UserID").setAsString()=MenuDeleteReq.UserID;
		cmd.Param("i_OperID").setAsString()=MenuDeleteReq.OperID;
		cmd.Param("i_MenuID").setAsLong()=MenuDeleteReq.MenuID;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* 应答信息 */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* 菜单删除应答 */
		if(!RspInfo.RspNo){
			strcpy(MenuDeleteRsp.UserID,cmd.Param("o_UserID").asString().GetBuffer(0));
			RspPackage.PutFields(&MenuDeleteRsp,ETSClearFieldNoMenuDeleteRsp);
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeMenuDeleteRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleMenuDeleteReq:数据库操作失败！[%s]",(const char*)x.ErrText());

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
			Connect(); // 断线重连
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:回滚失败！[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* 应答信息 */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeMenuDeleteRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*操作员增加请求*/
void CDBProcessor::HandleOperAddReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* 操作员增加请求 */
	CETSClearFieldsOperAddReq OperAddReq;
	Package.GetFields(&OperAddReq,ETSClearFieldNoOperAddReq);

	// Response
	CETSClearPackage RspPackage;
	/* 操作员增加应答 */
	CETSClearFieldsOperAddRsp OperAddRsp;
	/* 应答信息 */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_Operator.OperAdd");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* 操作员增加请求 */
		cmd.Param("i_UserID").setAsString()=OperAddReq.UserID;
		cmd.Param("i_OperID").setAsString()=OperAddReq.OperID;
		cmd.Param("i_OperPasswd").setAsString()=OperAddReq.OperPasswd;
		cmd.Param("i_OperName").setAsString()=OperAddReq.OperName;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* 应答信息 */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* 操作员增加应答 */
		if(!RspInfo.RspNo){
			strcpy(OperAddRsp.UserID,cmd.Param("o_UserID").asString().GetBuffer(0));
			RspPackage.PutFields(&OperAddRsp,ETSClearFieldNoOperAddRsp);
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeOperAddRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleOperAddReq:数据库操作失败！[%s]",(const char*)x.ErrText());

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
			Connect(); // 断线重连
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:回滚失败！[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* 应答信息 */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeOperAddRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*操作员删除请求*/
void CDBProcessor::HandleOperDeleteReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* 操作员删除请求 */
	CETSClearFieldsOperDeleteReq OperDeleteReq;
	Package.GetFields(&OperDeleteReq,ETSClearFieldNoOperDeleteReq);

	// Response
	CETSClearPackage RspPackage;
	/* 操作员删除应答 */
	CETSClearFieldsOperDeleteRsp OperDeleteRsp;
	/* 应答信息 */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_Operator.OperDelete");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* 操作员删除请求 */
		cmd.Param("i_UserID").setAsString()=OperDeleteReq.UserID;
		cmd.Param("i_OperID").setAsString()=OperDeleteReq.OperID;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* 应答信息 */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* 操作员删除应答 */
		if(!RspInfo.RspNo){
			strcpy(OperDeleteRsp.UserID,cmd.Param("o_UserID").asString().GetBuffer(0));
			RspPackage.PutFields(&OperDeleteRsp,ETSClearFieldNoOperDeleteRsp);
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeOperDeleteRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleOperDeleteReq:数据库操作失败！[%s]",(const char*)x.ErrText());

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
			Connect(); // 断线重连
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:回滚失败！[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* 应答信息 */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeOperDeleteRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*修改密码请求*/
void CDBProcessor::HandleChangePasswordReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* 修改密码请求 */
	CETSClearFieldsChangePasswordReq ChangePasswordReq;
	Package.GetFields(&ChangePasswordReq,ETSClearFieldNoChangePasswordReq);

	// Response
	CETSClearPackage RspPackage;
	/* 修改密码应答 */
	CETSClearFieldsChangePasswordRsp ChangePasswordRsp;
	/* 应答信息 */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_Logon.ChangePassword");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* 修改密码请求 */
		cmd.Param("i_UserID").setAsString()=ChangePasswordReq.UserID;
		cmd.Param("i_OldPassword").setAsString()=ChangePasswordReq.OldPassword;
		cmd.Param("i_NewPassword").setAsString()=ChangePasswordReq.NewPassword;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* 应答信息 */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* 修改密码应答 */
		if(!RspInfo.RspNo){
			strcpy(ChangePasswordRsp.UserID,cmd.Param("o_UserID").asString().GetBuffer(0));
			RspPackage.PutFields(&ChangePasswordRsp,ETSClearFieldNoChangePasswordRsp);
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeChangePasswordRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleChangePasswordReq:数据库操作失败！[%s]",(const char*)x.ErrText());

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
			Connect(); // 断线重连
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:回滚失败！[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* 应答信息 */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeChangePasswordRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*行情请求*/
void CDBProcessor::HandleQuotReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* 行情请求 */
	CETSClearFieldsQuotReq QuotReq;
	Package.GetFields(&QuotReq,ETSClearFieldNoQuotReq);

	// Response
	CETSClearPackage RspPackage;
	/* 行情快照 */
	CETSClearFieldsQuotPush QuotPush;
	CBMLRecordSet QuotList;
	SACommand *pCursor=NULL;
	/* 应答信息 */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_Quot.FutureQuotQuery");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* 行情请求 */
		cmd.Param("i_UserID").setAsString()=QuotReq.UserID;
		cmd.Param("i_Market").setAsString()=QuotReq.Market;
		cmd.Param("i_Commodity").setAsString()=QuotReq.Commodity;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* 应答信息 */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* 行情快照 */
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

					// 重置
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
		logsend(lp,LOG_INFO,"DB","HandleQuotReq:数据库操作失败！[%s]",(const char*)x.ErrText());

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
			Connect(); // 断线重连
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:回滚失败！[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* 应答信息 */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeQuotRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*现货行情请求*/
void CDBProcessor::HandleSpotQuotReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* 现货行情请求 */
	CETSClearFieldsSpotQuotReq SpotQuotReq;
	Package.GetFields(&SpotQuotReq,ETSClearFieldNoSpotQuotReq);

	// Response
	CETSClearPackage RspPackage;
	/* 现货行情快照 */
	CETSClearFieldsSpotQuotPush SpotQuotPush;
	CBMLRecordSet SpotQuotList;
	SACommand *pCursor=NULL;
	/* 应答信息 */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_Quot.SpotQuotQuery");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* 现货行情请求 */
		cmd.Param("i_UserID").setAsString()=SpotQuotReq.UserID;
		cmd.Param("i_Market").setAsString()=SpotQuotReq.Market;
		cmd.Param("i_OrderNo").setAsNumeric()=SpotQuotReq.OrderNo;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* 应答信息 */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* 现货行情快照 */
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

					// 重置
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
		logsend(lp,LOG_INFO,"DB","HandleSpotQuotReq:数据库操作失败！[%s]",(const char*)x.ErrText());

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
			Connect(); // 断线重连
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:回滚失败！[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* 应答信息 */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeSpotQuotRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*市场请求*/
void CDBProcessor::HandleMarketReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* 市场请求 */
	CETSClearFieldsMarketReq MarketReq;
	Package.GetFields(&MarketReq,ETSClearFieldNoMarketReq);

	// Response
	CETSClearPackage RspPackage;
	/* 市场应答 */
	CETSClearFieldsMarketRsp MarketRsp;
	CBMLRecordSet MarketList;
	SACommand *pCursor=NULL;
	/* 应答信息 */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_Market.MarketQuery");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* 市场请求 */
		cmd.Param("i_UserID").setAsString()=MarketReq.UserID;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* 应答信息 */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* 市场应答 */
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

					// 重置
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
		logsend(lp,LOG_INFO,"DB","HandleMarketReq:数据库操作失败！[%s]",(const char*)x.ErrText());

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
			Connect(); // 断线重连
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:回滚失败！[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* 应答信息 */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeMarketRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*订单查询请求*/
void CDBProcessor::HandleOrderQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* 订单查询请求 */
	CETSClearFieldsOrderQueryReq OrderQueryReq;
	Package.GetFields(&OrderQueryReq,ETSClearFieldNoOrderQueryReq);

	// Response
	CETSClearPackage RspPackage;
	/* 订单查询应答 */
	CETSClearFieldsOrderPush OrderPush;
	CBMLRecordSet OrderQueryList;
	SACommand *pCursor=NULL;
	/* 应答信息 */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_Order.OrderQuery");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* 订单查询请求 */
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

		/* 应答信息 */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* 订单查询应答 */
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

					// 重置
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
		logsend(lp,LOG_INFO,"DB","HandleOrderQueryReq:数据库操作失败！[%s]",(const char*)x.ErrText());

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
			Connect(); // 断线重连
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:回滚失败！[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* 应答信息 */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeOrderQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*成交查询请求*/
void CDBProcessor::HandleTradeQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* 成交查询请求 */
	CETSClearFieldsTradeQueryReq TradeQueryReq;
	Package.GetFields(&TradeQueryReq,ETSClearFieldNoTradeQueryReq);

	// Response
	CETSClearPackage RspPackage;
	/* 成交查询应答 */
	CETSClearFieldsTradePush TradePush;
	CBMLRecordSet TradeQueryList;
	SACommand *pCursor=NULL;
	/* 应答信息 */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_Trade.TradeQuery");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* 成交查询请求 */
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

		/* 应答信息 */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* 成交查询应答 */
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

					// 重置
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
		logsend(lp,LOG_INFO,"DB","HandleTradeQueryReq:数据库操作失败！[%s]",(const char*)x.ErrText());

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
			Connect(); // 断线重连
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:回滚失败！[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* 应答信息 */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeTradeQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*持仓查询请求*/
void CDBProcessor::HandleHoldingQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* 持仓查询请求 */
	CETSClearFieldsHoldingQueryReq HoldingQueryReq;
	Package.GetFields(&HoldingQueryReq,ETSClearFieldNoHoldingQueryReq);

	// Response
	CETSClearPackage RspPackage;
	/* 持仓查询应答 */
	CETSClearFieldsHoldingQueryRsp HoldingQueryRsp;
	CBMLRecordSet HoldingQueryList;
	SACommand *pCursor=NULL;
	/* 应答信息 */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_Holding.HoldingQuery");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* 持仓查询请求 */
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

		/* 应答信息 */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* 持仓查询应答 */
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

					// 重置
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
		logsend(lp,LOG_INFO,"DB","HandleHoldingQueryReq:数据库操作失败！[%s]",(const char*)x.ErrText());

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
			Connect(); // 断线重连
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:回滚失败！[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* 应答信息 */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeHoldingQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*资金查询请求*/
void CDBProcessor::HandleFundsQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* 资金查询请求 */
	CETSClearFieldsFundsQueryReq FundsQueryReq;
	Package.GetFields(&FundsQueryReq,ETSClearFieldNoFundsQueryReq);

	// Response
	CETSClearPackage RspPackage;
	/* 资金查询应答 */
	CETSClearFieldsFundsQueryRsp FundsQueryRsp;
	CBMLRecordSet FundsQueryRspList;
	SACommand *pCursor=NULL;
	/* 应答信息 */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_Funds.FundsQuery");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* 资金查询请求 */
		cmd.Param("i_UserID").setAsString()=FundsQueryReq.UserID;
		cmd.Param("i_Firm").setAsString()=FundsQueryReq.Firm;
		cmd.Param("i_Customer").setAsString()=FundsQueryReq.Customer;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* 应答信息 */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* 资金查询应答 */
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

					// 重置
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
		logsend(lp,LOG_INFO,"DB","HandleFundsQueryReq:数据库操作失败！[%s]",(const char*)x.ErrText());

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
			Connect(); // 断线重连
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:回滚失败！[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* 应答信息 */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeFundsQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*商品查询请求*/
void CDBProcessor::HandleCommodityQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* 商品查询请求 */
	CETSClearFieldsCommodityQueryReq CommodityQueryReq;
	Package.GetFields(&CommodityQueryReq,ETSClearFieldNoCommodityQueryReq);

	// Response
	CETSClearPackage RspPackage;
	/* 商品查询应答 */
	CETSClearFieldsCommodityQueryRsp CommodityQueryRsp;
	CBMLRecordSet CommodityQueryList;
	SACommand *pCursor=NULL;
	/* 应答信息 */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_Commodity.CommodityQuery");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* 商品查询请求 */
		cmd.Param("i_UserID").setAsString()=CommodityQueryReq.UserID;
		cmd.Param("i_Market").setAsString()=CommodityQueryReq.Market;
		cmd.Param("i_Commodity").setAsString()=CommodityQueryReq.Commodity;
		cmd.Param("i_Variety").setAsString()=CommodityQueryReq.Variety;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* 应答信息 */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* 商品查询应答 */
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

					// 重置
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
		logsend(lp,LOG_INFO,"DB","HandleCommodityQueryReq:数据库操作失败！[%s]",(const char*)x.ErrText());

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
			Connect(); // 断线重连
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:回滚失败！[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* 应答信息 */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeCommodityQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*现货属性查询请求*/
void CDBProcessor::HandleSpotPropertyQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* 现货属性查询请求 */
	CETSClearFieldsSpotPropertyQueryReq SpotPropertyQueryReq;
	Package.GetFields(&SpotPropertyQueryReq,ETSClearFieldNoSpotPropertyQueryReq);

	// Response
	CETSClearPackage RspPackage;
	/* 现货属性查询应答 */
	CETSClearFieldsSpotPropertyQueryRsp SpotPropertyQueryRsp;
	CBMLRecordSet SpotPropertyQueryRspList;
	SACommand *pCursor=NULL;
	/* 应答信息 */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_SpotProperty.SpotPropertyQuery");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* 现货属性查询请求 */
		cmd.Param("i_UserID").setAsString()=SpotPropertyQueryReq.UserID;
		cmd.Param("i_Commodity").setAsString()=SpotPropertyQueryReq.Commodity;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* 应答信息 */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* 现货属性查询应答 */
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

					// 重置
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
		logsend(lp,LOG_INFO,"DB","HandleSpotPropertyQueryReq:数据库操作失败！[%s]",(const char*)x.ErrText());

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
			Connect(); // 断线重连
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:回滚失败！[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* 应答信息 */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeSpotPropertyQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*现货属性下拉列表查询请求*/
void CDBProcessor::HandleSpotPropertyLookupQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* 现货属性下拉列表查询请求 */
	CETSClearFieldsSpotPropertyLookupQueryReq SpotPropertyLookupQueryReq;
	Package.GetFields(&SpotPropertyLookupQueryReq,ETSClearFieldNoSpotPropertyLookupQueryReq);

	// Response
	CETSClearPackage RspPackage;
	/* 现货属性下拉列表查询应答 */
	CETSClearFieldsSpotPropertyLookupQueryRsp SpotPropertyLookupQueryRsp;
	CBMLRecordSet SpotPropertyLookupQueryList;
	SACommand *pCursor=NULL;
	/* 应答信息 */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_SpotProperty.SpotPropertyLookupQuery");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* 现货属性下拉列表查询请求 */
		cmd.Param("i_UserID").setAsString()=SpotPropertyLookupQueryReq.UserID;
		cmd.Param("i_Commodity").setAsString()=SpotPropertyLookupQueryReq.Commodity;
		cmd.Param("i_PropertyName").setAsString()=SpotPropertyLookupQueryReq.PropertyName;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* 应答信息 */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* 现货属性下拉列表查询应答 */
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

					// 重置
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
		logsend(lp,LOG_INFO,"DB","HandleSpotPropertyLookupQueryReq:数据库操作失败！[%s]",(const char*)x.ErrText());

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
			Connect(); // 断线重连
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:回滚失败！[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* 应答信息 */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeSpotPropertyLookupQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*现货交货地点查询请求*/
void CDBProcessor::HandleLocationQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* 现货交货地点查询请求 */
	CETSClearFieldsLocationQueryReq LocationQueryReq;
	Package.GetFields(&LocationQueryReq,ETSClearFieldNoLocationQueryReq);

	// Response
	CETSClearPackage RspPackage;
	/* 现货交货地点查询应答 */
	CETSClearFieldsLocationQueryRsp LocationQueryRsp;
	CBMLRecordSet LocationQueryList;
	SACommand *pCursor=NULL;
	/* 应答信息 */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_Location.LocationQuery");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* 现货交货地点查询请求 */
		cmd.Param("i_UserID").setAsString()=LocationQueryReq.UserID;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* 应答信息 */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* 现货交货地点查询应答 */
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

					// 重置
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
		logsend(lp,LOG_INFO,"DB","HandleLocationQueryReq:数据库操作失败！[%s]",(const char*)x.ErrText());

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
			Connect(); // 断线重连
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:回滚失败！[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* 应答信息 */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeLocationQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*日志查询请求*/
void CDBProcessor::HandleLogQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* 日志查询请求 */
	CETSClearFieldsLogQueryReq LogQueryReq;
	Package.GetFields(&LogQueryReq,ETSClearFieldNoLogQueryReq);

	// Response
	CETSClearPackage RspPackage;
	/* 日志查询应答 */
	CETSClearFieldsLogQueryRsp LogQueryRsp;
	CBMLRecordSet LogList;
	SACommand *pCursor=NULL;
	/* 应答信息 */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_Log.LogQuery");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* 日志查询请求 */
		cmd.Param("i_UserID").setAsString()=LogQueryReq.UserID;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* 应答信息 */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* 日志查询应答 */
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

					// 重置
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
		logsend(lp,LOG_INFO,"DB","HandleLogQueryReq:数据库操作失败！[%s]",(const char*)x.ErrText());

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
			Connect(); // 断线重连
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:回滚失败！[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* 应答信息 */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeLogQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*查询会员请求*/
void CDBProcessor::HandleFirmQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* 查询会员请求 */
	CETSClearFieldsFirmQueryReq FirmQueryReq;
	Package.GetFields(&FirmQueryReq,ETSClearFieldNoFirmQueryReq);

	// Response
	CETSClearPackage RspPackage;
	/* 查询会员应答 */
	CETSClearFieldsFirmQueryRsp FirmQueryRsp;
	CBMLRecordSet FirmQueryRspList;
	SACommand *pCursor=NULL;
	/* 应答信息 */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_Firm.FirmQuery");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* 查询会员请求 */
		cmd.Param("i_UserID").setAsString()=FirmQueryReq.UserID;
		cmd.Param("i_Firm").setAsString()=FirmQueryReq.Firm;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* 应答信息 */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* 查询会员应答 */
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

					// 重置
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
		logsend(lp,LOG_INFO,"DB","HandleFirmQueryReq:数据库操作失败！[%s]",(const char*)x.ErrText());

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
			Connect(); // 断线重连
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:回滚失败！[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* 应答信息 */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeFirmQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*增加会员请求*/
void CDBProcessor::HandleFirmAddReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* 增加会员请求 */
	CETSClearFieldsFirmAddReq FirmAddReq;
	Package.GetFields(&FirmAddReq,ETSClearFieldNoFirmAddReq);

	// Response
	CETSClearPackage RspPackage;
	/* 增加会员应答 */
	CETSClearFieldsFirmAddRsp FirmAddRsp;
	/* 应答信息 */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_Firm.FirmAdd");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* 增加会员请求 */
		cmd.Param("i_UserID").setAsString()=FirmAddReq.UserID;
		cmd.Param("i_Firm").setAsString()=FirmAddReq.Firm;
		cmd.Param("i_FirmName").setAsString()=FirmAddReq.FirmName;
		cmd.Param("i_MaxOpen").setAsLong()=FirmAddReq.MaxOpen;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* 应答信息 */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* 增加会员应答 */
		if(!RspInfo.RspNo){
			strcpy(FirmAddRsp.UserID,cmd.Param("o_UserID").asString().GetBuffer(0));
			RspPackage.PutFields(&FirmAddRsp,ETSClearFieldNoFirmAddRsp);
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeFirmAddRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleFirmAddReq:数据库操作失败！[%s]",(const char*)x.ErrText());

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
			Connect(); // 断线重连
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:回滚失败！[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* 应答信息 */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeFirmAddRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*修改会员请求*/
void CDBProcessor::HandleFirmModifyReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* 修改会员请求 */
	CETSClearFieldsFirmModifyReq FirmModifyReq;
	Package.GetFields(&FirmModifyReq,ETSClearFieldNoFirmModifyReq);

	// Response
	CETSClearPackage RspPackage;
	/* 修改会员应答 */
	CETSClearFieldsFirmModifyRsp FirmModifyRsp;
	/* 应答信息 */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_Firm.FirmModify");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* 修改会员请求 */
		cmd.Param("i_UserID").setAsString()=FirmModifyReq.UserID;
		cmd.Param("i_Firm").setAsString()=FirmModifyReq.Firm;
		cmd.Param("i_FirmName").setAsString()=FirmModifyReq.FirmName;
		cmd.Param("i_FirmStatus").setAsString()=FirmModifyReq.FirmStatus;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* 应答信息 */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* 修改会员应答 */
		if(!RspInfo.RspNo){
			strcpy(FirmModifyRsp.UserID,cmd.Param("o_UserID").asString().GetBuffer(0));
			RspPackage.PutFields(&FirmModifyRsp,ETSClearFieldNoFirmModifyRsp);
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeFirmModifyRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleFirmModifyReq:数据库操作失败！[%s]",(const char*)x.ErrText());

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
			Connect(); // 断线重连
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:回滚失败！[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* 应答信息 */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeFirmModifyRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*删除会员请求*/
void CDBProcessor::HandleFirmDeleteReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* 删除会员请求 */
	CETSClearFieldsFirmDeleteReq FirmDeleteReq;
	Package.GetFields(&FirmDeleteReq,ETSClearFieldNoFirmDeleteReq);

	// Response
	CETSClearPackage RspPackage;
	/* 删除会员应答 */
	CETSClearFieldsFirmDeleteRsp FirmDeleteRsp;
	/* 应答信息 */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_Firm.FirmDelete");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* 删除会员请求 */
		cmd.Param("i_UserID").setAsString()=FirmDeleteReq.UserID;
		cmd.Param("i_Firm").setAsString()=FirmDeleteReq.Firm;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* 应答信息 */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* 删除会员应答 */
		if(!RspInfo.RspNo){
			strcpy(FirmDeleteRsp.UserID,cmd.Param("o_UserID").asString().GetBuffer(0));
			RspPackage.PutFields(&FirmDeleteRsp,ETSClearFieldNoFirmDeleteRsp);
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeFirmDeleteRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleFirmDeleteReq:数据库操作失败！[%s]",(const char*)x.ErrText());

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
			Connect(); // 断线重连
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:回滚失败！[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* 应答信息 */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeFirmDeleteRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*查询交易员请求*/
void CDBProcessor::HandleTraderQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* 查询交易员请求 */
	CETSClearFieldsTraderQueryReq TraderQueryReq;
	Package.GetFields(&TraderQueryReq,ETSClearFieldNoTraderQueryReq);

	// Response
	CETSClearPackage RspPackage;
	/* 查询交易员应答 */
	CETSClearFieldsTraderQueryRsp TraderQueryRsp;
	CBMLRecordSet TraderQueryRspList;
	SACommand *pCursor=NULL;
	/* 应答信息 */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_Trader.TraderQuery");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* 查询交易员请求 */
		cmd.Param("i_UserID").setAsString()=TraderQueryReq.UserID;
		cmd.Param("i_TraderID").setAsString()=TraderQueryReq.TraderID;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* 应答信息 */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* 查询交易员应答 */
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

					// 重置
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
		logsend(lp,LOG_INFO,"DB","HandleTraderQueryReq:数据库操作失败！[%s]",(const char*)x.ErrText());

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
			Connect(); // 断线重连
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:回滚失败！[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* 应答信息 */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeTraderQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*增加交易员请求*/
void CDBProcessor::HandleTraderAddReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* 增加交易员请求 */
	CETSClearFieldsTraderAddReq TraderAddReq;
	Package.GetFields(&TraderAddReq,ETSClearFieldNoTraderAddReq);

	// Response
	CETSClearPackage RspPackage;
	/* 增加交易员应答 */
	CETSClearFieldsTraderAddRsp TraderAddRsp;
	/* 应答信息 */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_Trader.TraderAdd");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* 增加交易员请求 */
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

		/* 应答信息 */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* 增加交易员应答 */
		if(!RspInfo.RspNo){
			strcpy(TraderAddRsp.UserID,cmd.Param("o_UserID").asString().GetBuffer(0));
			RspPackage.PutFields(&TraderAddRsp,ETSClearFieldNoTraderAddRsp);
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeTraderAddRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleTraderAddReq:数据库操作失败！[%s]",(const char*)x.ErrText());

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
			Connect(); // 断线重连
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:回滚失败！[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* 应答信息 */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeTraderAddRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*修改交易员请求*/
void CDBProcessor::HandleTraderModifyReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* 修改交易员请求 */
	CETSClearFieldsTraderModifyReq TraderModifyReq;
	Package.GetFields(&TraderModifyReq,ETSClearFieldNoTraderModifyReq);

	// Response
	CETSClearPackage RspPackage;
	/* 修改交易员应答 */
	CETSClearFieldsTraderModifyRsp TraderModifyRsp;
	/* 应答信息 */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_Trader.TraderModify");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* 修改交易员请求 */
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

		/* 应答信息 */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* 修改交易员应答 */
		if(!RspInfo.RspNo){
			strcpy(TraderModifyRsp.UserID,cmd.Param("o_UserID").asString().GetBuffer(0));
			RspPackage.PutFields(&TraderModifyRsp,ETSClearFieldNoTraderModifyRsp);
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeTraderModifyRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleTraderModifyReq:数据库操作失败！[%s]",(const char*)x.ErrText());

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
			Connect(); // 断线重连
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:回滚失败！[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* 应答信息 */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeTraderModifyRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*删除交易员请求*/
void CDBProcessor::HandleTraderDeleteReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* 删除交易员请求 */
	CETSClearFieldsTraderDeleteReq TraderDeleteReq;
	Package.GetFields(&TraderDeleteReq,ETSClearFieldNoTraderDeleteReq);

	// Response
	CETSClearPackage RspPackage;
	/* 删除交易员应答 */
	CETSClearFieldsTraderDeleteRsp TraderDeleteRsp;
	/* 应答信息 */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_Trader.TraderDelete");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* 删除交易员请求 */
		cmd.Param("i_UserID").setAsString()=TraderDeleteReq.UserID;
		cmd.Param("i_TraderID").setAsString()=TraderDeleteReq.TraderID;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* 应答信息 */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* 删除交易员应答 */
		if(!RspInfo.RspNo){
			strcpy(TraderDeleteRsp.UserID,cmd.Param("o_UserID").asString().GetBuffer(0));
			RspPackage.PutFields(&TraderDeleteRsp,ETSClearFieldNoTraderDeleteRsp);
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeTraderDeleteRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleTraderDeleteReq:数据库操作失败！[%s]",(const char*)x.ErrText());

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
			Connect(); // 断线重连
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:回滚失败！[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* 应答信息 */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeTraderDeleteRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*查询客户请求*/
void CDBProcessor::HandleCustomerQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* 查询客户请求 */
	CETSClearFieldsCustomerQueryReq CustomerQueryReq;
	Package.GetFields(&CustomerQueryReq,ETSClearFieldNoCustomerQueryReq);

	// Response
	CETSClearPackage RspPackage;
	/* 查询客户应答 */
	CETSClearFieldsCustomerQueryRsp CustomerQueryRsp;
	CBMLRecordSet CustomerQueryRspList;
	SACommand *pCursor=NULL;
	/* 应答信息 */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_Customer.CustomerQuery");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* 查询客户请求 */
		cmd.Param("i_UserID").setAsString()=CustomerQueryReq.UserID;
		cmd.Param("i_TraderID").setAsString()=CustomerQueryReq.TraderID;
		cmd.Param("i_Firm").setAsString()=CustomerQueryReq.Firm;
		cmd.Param("i_Customer").setAsString()=CustomerQueryReq.Customer;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* 应答信息 */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* 查询客户应答 */
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

					// 重置
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
		logsend(lp,LOG_INFO,"DB","HandleCustomerQueryReq:数据库操作失败！[%s]",(const char*)x.ErrText());

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
			Connect(); // 断线重连
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:回滚失败！[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* 应答信息 */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeCustomerQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*增加客户请求*/
void CDBProcessor::HandleCustomerAddReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* 增加客户请求 */
	CETSClearFieldsCustomerAddReq CustomerAddReq;
	Package.GetFields(&CustomerAddReq,ETSClearFieldNoCustomerAddReq);

	// Response
	CETSClearPackage RspPackage;
	/* 增加客户应答 */
	CETSClearFieldsCustomerAddRsp CustomerAddRsp;
	/* 应答信息 */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_Customer.CustomerAdd");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* 增加客户请求 */
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

		/* 应答信息 */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* 增加客户应答 */
		if(!RspInfo.RspNo){
			strcpy(CustomerAddRsp.UserID,cmd.Param("o_UserID").asString().GetBuffer(0));
			RspPackage.PutFields(&CustomerAddRsp,ETSClearFieldNoCustomerAddRsp);
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeCustomerAddRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleCustomerAddReq:数据库操作失败！[%s]",(const char*)x.ErrText());

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
			Connect(); // 断线重连
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:回滚失败！[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* 应答信息 */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeCustomerAddRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*修改客户请求*/
void CDBProcessor::HandleCustomerModifyReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* 修改客户请求 */
	CETSClearFieldsCustomerModifyReq CustomerModifyReq;
	Package.GetFields(&CustomerModifyReq,ETSClearFieldNoCustomerModifyReq);

	// Response
	CETSClearPackage RspPackage;
	/* 修改客户应答 */
	CETSClearFieldsCustomerModifyRsp CustomerModifyRsp;
	/* 应答信息 */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_Customer.CustomerModify");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* 修改客户请求 */
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

		/* 应答信息 */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* 修改客户应答 */
		if(!RspInfo.RspNo){
			strcpy(CustomerModifyRsp.UserID,cmd.Param("o_UserID").asString().GetBuffer(0));
			RspPackage.PutFields(&CustomerModifyRsp,ETSClearFieldNoCustomerModifyRsp);
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeCustomerModifyRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleCustomerModifyReq:数据库操作失败！[%s]",(const char*)x.ErrText());

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
			Connect(); // 断线重连
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:回滚失败！[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* 应答信息 */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeCustomerModifyRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*删除客户请求*/
void CDBProcessor::HandleCustomerDeleteReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* 删除客户请求 */
	CETSClearFieldsCustomerDeleteReq CustomerDeleteReq;
	Package.GetFields(&CustomerDeleteReq,ETSClearFieldNoCustomerDeleteReq);

	// Response
	CETSClearPackage RspPackage;
	/* 删除客户应答 */
	CETSClearFieldsCustomerDeleteRsp CustomerDeleteRsp;
	/* 应答信息 */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_Customer.CustomerDelete");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* 删除客户请求 */
		cmd.Param("i_UserID").setAsString()=CustomerDeleteReq.UserID;
		cmd.Param("i_Customer").setAsString()=CustomerDeleteReq.Customer;
		cmd.Param("i_Firm").setAsString()=CustomerDeleteReq.Firm;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* 应答信息 */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* 删除客户应答 */
		if(!RspInfo.RspNo){
			strcpy(CustomerDeleteRsp.UserID,cmd.Param("o_UserID").asString().GetBuffer(0));
			RspPackage.PutFields(&CustomerDeleteRsp,ETSClearFieldNoCustomerDeleteRsp);
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeCustomerDeleteRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleCustomerDeleteReq:数据库操作失败！[%s]",(const char*)x.ErrText());

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
			Connect(); // 断线重连
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:回滚失败！[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* 应答信息 */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeCustomerDeleteRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*查询操作员请求*/
void CDBProcessor::HandleOperQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* 查询操作员请求 */
	CETSClearFieldsOperQueryReq OperQueryReq;
	Package.GetFields(&OperQueryReq,ETSClearFieldNoOperQueryReq);

	// Response
	CETSClearPackage RspPackage;
	/* 查询操作员应答 */
	CETSClearFieldsOperQueryRsp OperQueryRsp;
	CBMLRecordSet OperQueryRspList;
	SACommand *pCursor=NULL;
	/* 应答信息 */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_Operator.OperQuery");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* 查询操作员请求 */
		cmd.Param("i_UserID").setAsString()=OperQueryReq.UserID;
		cmd.Param("i_OperID").setAsString()=OperQueryReq.OperID;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* 应答信息 */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* 查询操作员应答 */
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

					// 重置
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
		logsend(lp,LOG_INFO,"DB","HandleOperQueryReq:数据库操作失败！[%s]",(const char*)x.ErrText());

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
			Connect(); // 断线重连
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:回滚失败！[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* 应答信息 */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeOperQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*增加市场请求*/
void CDBProcessor::HandleMarketAddReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* 增加市场请求 */
	CETSClearFieldsMarketAddReq MarketAddReq;
	Package.GetFields(&MarketAddReq,ETSClearFieldNoMarketAddReq);

	// Response
	CETSClearPackage RspPackage;
	/* 增加市场应答 */
	CETSClearFieldsMarketAddRsp MarketAddRsp;
	/* 应答信息 */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_Market.MarketAdd");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* 增加市场请求 */
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

		/* 应答信息 */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* 增加市场应答 */
		if(!RspInfo.RspNo){
			strcpy(MarketAddRsp.UserID,cmd.Param("o_UserID").asString().GetBuffer(0));
			RspPackage.PutFields(&MarketAddRsp,ETSClearFieldNoMarketAddRsp);
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeMarketAddRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleMarketAddReq:数据库操作失败！[%s]",(const char*)x.ErrText());

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
			Connect(); // 断线重连
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:回滚失败！[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* 应答信息 */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeMarketAddRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*修改市场请求*/
void CDBProcessor::HandleMarketModifyReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* 修改市场请求 */
	CETSClearFieldsMarketModifyReq MarketModifyReq;
	Package.GetFields(&MarketModifyReq,ETSClearFieldNoMarketModifyReq);

	// Response
	CETSClearPackage RspPackage;
	/* 修改市场应答 */
	CETSClearFieldsMarketModifyRsp MarketModifyRsp;
	/* 应答信息 */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_Market.MarketModify");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* 修改市场请求 */
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

		/* 应答信息 */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* 修改市场应答 */
		if(!RspInfo.RspNo){
			strcpy(MarketModifyRsp.UserID,cmd.Param("o_UserID").asString().GetBuffer(0));
			RspPackage.PutFields(&MarketModifyRsp,ETSClearFieldNoMarketModifyRsp);
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeMarketModifyRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleMarketModifyReq:数据库操作失败！[%s]",(const char*)x.ErrText());

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
			Connect(); // 断线重连
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:回滚失败！[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* 应答信息 */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeMarketModifyRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*删除市场请求*/
void CDBProcessor::HandleMarketDeleteReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* 删除市场请求 */
	CETSClearFieldsMarketDeleteReq MarketDeleteReq;
	Package.GetFields(&MarketDeleteReq,ETSClearFieldNoMarketDeleteReq);

	// Response
	CETSClearPackage RspPackage;
	/* 删除市场应答 */
	CETSClearFieldsMarketDeleteRsp MarketDeleteRsp;
	/* 应答信息 */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_Market.MarketDelete");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* 删除市场请求 */
		cmd.Param("i_UserID").setAsString()=MarketDeleteReq.UserID;
		cmd.Param("i_Market").setAsString()=MarketDeleteReq.Market;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* 应答信息 */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* 删除市场应答 */
		if(!RspInfo.RspNo){
			strcpy(MarketDeleteRsp.UserID,cmd.Param("o_UserID").asString().GetBuffer(0));
			RspPackage.PutFields(&MarketDeleteRsp,ETSClearFieldNoMarketDeleteRsp);
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeMarketDeleteRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleMarketDeleteReq:数据库操作失败！[%s]",(const char*)x.ErrText());

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
			Connect(); // 断线重连
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:回滚失败！[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* 应答信息 */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeMarketDeleteRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*增加商品请求*/
void CDBProcessor::HandleCommodityAddReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* 增加商品请求 */
	CETSClearFieldsCommodityAddReq CommodityAddReq;
	Package.GetFields(&CommodityAddReq,ETSClearFieldNoCommodityAddReq);

	// Response
	CETSClearPackage RspPackage;
	/* 增加商品应答 */
	CETSClearFieldsCommodityAddRsp CommodityAddRsp;
	/* 应答信息 */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_Commodity.CommodityAdd");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* 增加商品请求 */
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

		/* 应答信息 */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* 增加商品应答 */
		if(!RspInfo.RspNo){
			strcpy(CommodityAddRsp.UserID,cmd.Param("o_UserID").asString().GetBuffer(0));
			RspPackage.PutFields(&CommodityAddRsp,ETSClearFieldNoCommodityAddRsp);
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeCommodityAddRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleCommodityAddReq:数据库操作失败！[%s]",(const char*)x.ErrText());

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
			Connect(); // 断线重连
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:回滚失败！[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* 应答信息 */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeCommodityAddRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*修改商品请求*/
void CDBProcessor::HandleCommodityModifyReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* 修改商品请求 */
	CETSClearFieldsCommodityModifyReq CommodityModifyReq;
	Package.GetFields(&CommodityModifyReq,ETSClearFieldNoCommodityModifyReq);

	// Response
	CETSClearPackage RspPackage;
	/* 修改商品应答 */
	CETSClearFieldsCommodityModifyRsp CommodityModifyRsp;
	/* 应答信息 */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_Commodity.CommodityModify");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* 修改商品请求 */
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

		/* 应答信息 */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* 修改商品应答 */
		if(!RspInfo.RspNo){
			strcpy(CommodityModifyRsp.UserID,cmd.Param("o_UserID").asString().GetBuffer(0));
			RspPackage.PutFields(&CommodityModifyRsp,ETSClearFieldNoCommodityModifyRsp);
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeCommodityModifyRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleCommodityModifyReq:数据库操作失败！[%s]",(const char*)x.ErrText());

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
			Connect(); // 断线重连
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:回滚失败！[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* 应答信息 */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeCommodityModifyRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*删除商品请求*/
void CDBProcessor::HandleCommodityDeleteReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* 删除商品请求 */
	CETSClearFieldsCommodityDeleteReq CommodityDeleteReq;
	Package.GetFields(&CommodityDeleteReq,ETSClearFieldNoCommodityDeleteReq);

	// Response
	CETSClearPackage RspPackage;
	/* 删除商品应答 */
	CETSClearFieldsCommodityDeleteRsp CommodityDeleteRsp;
	/* 应答信息 */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_Commodity.CommodityDelete");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* 删除商品请求 */
		cmd.Param("i_UserID").setAsString()=CommodityDeleteReq.UserID;
		cmd.Param("i_Market").setAsString()=CommodityDeleteReq.Market;
		cmd.Param("i_Commodity").setAsString()=CommodityDeleteReq.Commodity;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* 应答信息 */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* 删除商品应答 */
		if(!RspInfo.RspNo){
			strcpy(CommodityDeleteRsp.UserID,cmd.Param("o_UserID").asString().GetBuffer(0));
			RspPackage.PutFields(&CommodityDeleteRsp,ETSClearFieldNoCommodityDeleteRsp);
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeCommodityDeleteRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleCommodityDeleteReq:数据库操作失败！[%s]",(const char*)x.ErrText());

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
			Connect(); // 断线重连
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:回滚失败！[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* 应答信息 */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeCommodityDeleteRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*增加商品属性请求*/
void CDBProcessor::HandleCommodityPropertyAddReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* 增加商品属性请求 */
	CETSClearFieldsCommodityPropertyAddReq CommodityPropertyAddReq;
	Package.GetFields(&CommodityPropertyAddReq,ETSClearFieldNoCommodityPropertyAddReq);

	// Response
	CETSClearPackage RspPackage;
	/* 增加商品属性应答 */
	CETSClearFieldsCommodityPropertyAddRsp CommodityPropertyAddRsp;
	/* 应答信息 */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_CommodityProperty.CommodityPropertyAdd");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* 增加商品属性请求 */
		cmd.Param("i_UserID").setAsString()=CommodityPropertyAddReq.UserID;
		cmd.Param("i_Variety").setAsString()=CommodityPropertyAddReq.Variety;
		cmd.Param("i_NoInOrder").setAsLong()=CommodityPropertyAddReq.NoInOrder;
		cmd.Param("i_PropertyName").setAsString()=CommodityPropertyAddReq.PropertyName;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* 应答信息 */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* 增加商品属性应答 */
		if(!RspInfo.RspNo){
			strcpy(CommodityPropertyAddRsp.UserID,cmd.Param("o_UserID").asString().GetBuffer(0));
			RspPackage.PutFields(&CommodityPropertyAddRsp,ETSClearFieldNoCommodityPropertyAddRsp);
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeCommodityPropertyAddRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleCommodityPropertyAddReq:数据库操作失败！[%s]",(const char*)x.ErrText());

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
			Connect(); // 断线重连
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:回滚失败！[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* 应答信息 */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeCommodityPropertyAddRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*查询商品属性请求*/
void CDBProcessor::HandleCommodityPropertyQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* 查询商品属性请求 */
	CETSClearFieldsCommodityPropertyQueryReq CommodityPropertyQueryReq;
	Package.GetFields(&CommodityPropertyQueryReq,ETSClearFieldNoCommodityPropertyQueryReq);

	// Response
	CETSClearPackage RspPackage;
	/* 查询商品属性应答 */
	CETSClearFieldsCommodityPropertyQueryRsp CommodityPropertyQueryRsp;
	CBMLRecordSet CommodityPropertyQueryRspList;
	SACommand *pCursor=NULL;
	/* 应答信息 */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_CommodityProperty.CommodityPropertyQuery");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* 查询商品属性请求 */
		cmd.Param("i_UserID").setAsString()=CommodityPropertyQueryReq.UserID;
		cmd.Param("i_Variety").setAsString()=CommodityPropertyQueryReq.Variety;
		cmd.Param("i_PropertyID").setAsString()=CommodityPropertyQueryReq.PropertyID;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* 应答信息 */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* 查询商品属性应答 */
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

					// 重置
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
		logsend(lp,LOG_INFO,"DB","HandleCommodityPropertyQueryReq:数据库操作失败！[%s]",(const char*)x.ErrText());

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
			Connect(); // 断线重连
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:回滚失败！[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* 应答信息 */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeCommodityPropertyQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*删除商品属性请求*/
void CDBProcessor::HandleCommodityPropertyDeleteReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* 删除商品属性请求 */
	CETSClearFieldsCommodityPropertyDeleteReq CommodityPropertyDeleteReq;
	Package.GetFields(&CommodityPropertyDeleteReq,ETSClearFieldNoCommodityPropertyDeleteReq);

	// Response
	CETSClearPackage RspPackage;
	/* 删除商品属性应答 */
	CETSClearFieldsCommodityPropertyDeleteRsp CommodityPropertyDeleteRsp;
	/* 应答信息 */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_CommodityProperty.CommodityPropertyDelete");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* 删除商品属性请求 */
		cmd.Param("i_UserID").setAsString()=CommodityPropertyDeleteReq.UserID;
		cmd.Param("i_Variety").setAsString()=CommodityPropertyDeleteReq.Variety;
		cmd.Param("i_NoInOrder").setAsLong()=CommodityPropertyDeleteReq.NoInOrder;
		cmd.Param("i_PropertyName").setAsString()=CommodityPropertyDeleteReq.PropertyName;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* 应答信息 */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* 删除商品属性应答 */
		if(!RspInfo.RspNo){
			strcpy(CommodityPropertyDeleteRsp.UserID,cmd.Param("o_UserID").asString().GetBuffer(0));
			RspPackage.PutFields(&CommodityPropertyDeleteRsp,ETSClearFieldNoCommodityPropertyDeleteRsp);
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeCommodityPropertyDeleteRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleCommodityPropertyDeleteReq:数据库操作失败！[%s]",(const char*)x.ErrText());

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
			Connect(); // 断线重连
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:回滚失败！[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* 应答信息 */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeCommodityPropertyDeleteRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*增加商品属性下拉选项请求*/
void CDBProcessor::HandlePropertyLookupAddReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* 增加商品属性下拉选项请求 */
	CETSClearFieldsPropertyLookupAddReq PropertyLookupAddReq;
	Package.GetFields(&PropertyLookupAddReq,ETSClearFieldNoPropertyLookupAddReq);

	// Response
	CETSClearPackage RspPackage;
	/* 增加商品属性下拉选项应答 */
	CETSClearFieldsPropertyLookupAddRsp PropertyLookupAddRsp;
	/* 应答信息 */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_CommodityProperty.PropertyLookupAdd");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* 增加商品属性下拉选项请求 */
		cmd.Param("i_UserID").setAsString()=PropertyLookupAddReq.UserID;
		cmd.Param("i_Variety").setAsString()=PropertyLookupAddReq.Variety;
		cmd.Param("i_PropertyName").setAsString()=PropertyLookupAddReq.PropertyName;
		cmd.Param("i_Lookup").setAsString()=PropertyLookupAddReq.Lookup;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* 应答信息 */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* 增加商品属性下拉选项应答 */
		if(!RspInfo.RspNo){
			strcpy(PropertyLookupAddRsp.UserID,cmd.Param("o_UserID").asString().GetBuffer(0));
			RspPackage.PutFields(&PropertyLookupAddRsp,ETSClearFieldNoPropertyLookupAddRsp);
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypePropertyLookupAddRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandlePropertyLookupAddReq:数据库操作失败！[%s]",(const char*)x.ErrText());

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
			Connect(); // 断线重连
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:回滚失败！[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* 应答信息 */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypePropertyLookupAddRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*查询商品属性下拉选项请求*/
void CDBProcessor::HandlePropertyLookupQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* 查询商品属性下拉选项请求 */
	CETSClearFieldsPropertyLookupQueryReq PropertyLookupQueryReq;
	Package.GetFields(&PropertyLookupQueryReq,ETSClearFieldNoPropertyLookupQueryReq);

	// Response
	CETSClearPackage RspPackage;
	/* 查询商品属性下拉选项应答 */
	CETSClearFieldsPropertyLookupQueryRsp PropertyLookupQueryRsp;
	CBMLRecordSet PropertyLookupQueryRspList;
	SACommand *pCursor=NULL;
	/* 应答信息 */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_CommodityProperty.PropertyLookupQuery");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* 查询商品属性下拉选项请求 */
		cmd.Param("i_UserID").setAsString()=PropertyLookupQueryReq.UserID;
		cmd.Param("i_Variety").setAsString()=PropertyLookupQueryReq.Variety;
		cmd.Param("i_PropertyName").setAsString()=PropertyLookupQueryReq.PropertyName;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* 应答信息 */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* 查询商品属性下拉选项应答 */
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

					// 重置
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
		logsend(lp,LOG_INFO,"DB","HandlePropertyLookupQueryReq:数据库操作失败！[%s]",(const char*)x.ErrText());

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
			Connect(); // 断线重连
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:回滚失败！[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* 应答信息 */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypePropertyLookupQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*删除商品属性下拉选项请求*/
void CDBProcessor::HandlePropertyLookupDeleteReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* 删除商品属性下拉选项请求 */
	CETSClearFieldsPropertyLookupDeleteReq PropertyLookupDeleteReq;
	Package.GetFields(&PropertyLookupDeleteReq,ETSClearFieldNoPropertyLookupDeleteReq);

	// Response
	CETSClearPackage RspPackage;
	/* 删除商品属性下拉选项应答 */
	CETSClearFieldsPropertyLookupDeleteRsp PropertyLookupDeleteRsp;
	/* 应答信息 */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_CommodityProperty.PropertyLookupDelete");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* 删除商品属性下拉选项请求 */
		cmd.Param("i_UserID").setAsString()=PropertyLookupDeleteReq.UserID;
		cmd.Param("i_Variety").setAsString()=PropertyLookupDeleteReq.Variety;
		cmd.Param("i_PropertyName").setAsString()=PropertyLookupDeleteReq.PropertyName;
		cmd.Param("i_Lookup").setAsString()=PropertyLookupDeleteReq.Lookup;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* 应答信息 */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* 删除商品属性下拉选项应答 */
		if(!RspInfo.RspNo){
			strcpy(PropertyLookupDeleteRsp.UserID,cmd.Param("o_UserID").asString().GetBuffer(0));
			RspPackage.PutFields(&PropertyLookupDeleteRsp,ETSClearFieldNoPropertyLookupDeleteRsp);
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypePropertyLookupDeleteRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandlePropertyLookupDeleteReq:数据库操作失败！[%s]",(const char*)x.ErrText());

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
			Connect(); // 断线重连
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:回滚失败！[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* 应答信息 */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypePropertyLookupDeleteRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*查询品种请求*/
void CDBProcessor::HandleVarietyQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* 查询品种请求 */
	CETSClearFieldsVarietyQueryReq VarietyQueryReq;
	Package.GetFields(&VarietyQueryReq,ETSClearFieldNoVarietyQueryReq);

	// Response
	CETSClearPackage RspPackage;
	/* 查询品种应答 */
	CETSClearFieldsVarietyQueryRsp VarietyQueryRsp;
	CBMLRecordSet VarietyQueryRspList;
	SACommand *pCursor=NULL;
	/* 应答信息 */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_Variety.VarietyQuery");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* 查询品种请求 */
		cmd.Param("i_UserID").setAsString()=VarietyQueryReq.UserID;
		cmd.Param("i_Variety").setAsString()=VarietyQueryReq.Variety;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* 应答信息 */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* 查询品种应答 */
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

					// 重置
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
		logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:数据库操作失败！[%s]",(const char*)x.ErrText());

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
			Connect(); // 断线重连
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:回滚失败！[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* 应答信息 */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeVarietyQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*增加品种请求*/
void CDBProcessor::HandleVarietyAddReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* 增加品种请求 */
	CETSClearFieldsVarietyAddReq VarietyAddReq;
	Package.GetFields(&VarietyAddReq,ETSClearFieldNoVarietyAddReq);

	// Response
	CETSClearPackage RspPackage;
	/* 增加品种应答 */
	CETSClearFieldsVarietyAddRsp VarietyAddRsp;
	/* 应答信息 */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_Variety.VarietyAdd");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* 增加品种请求 */
		cmd.Param("i_UserID").setAsString()=VarietyAddReq.UserID;
		cmd.Param("i_Variety").setAsString()=VarietyAddReq.Variety;
		cmd.Param("i_VarietyName").setAsString()=VarietyAddReq.VarietyName;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* 应答信息 */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* 增加品种应答 */
		if(!RspInfo.RspNo){
			strcpy(VarietyAddRsp.UserID,cmd.Param("o_UserID").asString().GetBuffer(0));
			RspPackage.PutFields(&VarietyAddRsp,ETSClearFieldNoVarietyAddRsp);
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeVarietyAddRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleVarietyAddReq:数据库操作失败！[%s]",(const char*)x.ErrText());

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
			Connect(); // 断线重连
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:回滚失败！[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* 应答信息 */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeVarietyAddRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*修改品种请求*/
void CDBProcessor::HandleVarietyModifyReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* 修改品种请求 */
	CETSClearFieldsVarietyModifyReq VarietyModifyReq;
	Package.GetFields(&VarietyModifyReq,ETSClearFieldNoVarietyModifyReq);

	// Response
	CETSClearPackage RspPackage;
	/* 修改品种应答 */
	CETSClearFieldsVarietyModifyRsp VarietyModifyRsp;
	/* 应答信息 */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_Variety.VarietyModify");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* 修改品种请求 */
		cmd.Param("i_UserID").setAsString()=VarietyModifyReq.UserID;
		cmd.Param("i_Variety").setAsString()=VarietyModifyReq.Variety;
		cmd.Param("i_VarietyName").setAsString()=VarietyModifyReq.VarietyName;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* 应答信息 */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* 修改品种应答 */
		if(!RspInfo.RspNo){
			strcpy(VarietyModifyRsp.UserID,cmd.Param("o_UserID").asString().GetBuffer(0));
			RspPackage.PutFields(&VarietyModifyRsp,ETSClearFieldNoVarietyModifyRsp);
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeVarietyModifyRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleVarietyModifyReq:数据库操作失败！[%s]",(const char*)x.ErrText());

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
			Connect(); // 断线重连
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:回滚失败！[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* 应答信息 */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeVarietyModifyRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*删除品种请求*/
void CDBProcessor::HandleVarietyDeleteReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* 删除品种请求 */
	CETSClearFieldsVarietyDeleteReq VarietyDeleteReq;
	Package.GetFields(&VarietyDeleteReq,ETSClearFieldNoVarietyDeleteReq);

	// Response
	CETSClearPackage RspPackage;
	/* 删除品种应答 */
	CETSClearFieldsVarietyDeleteRsp VarietyDeleteRsp;
	/* 应答信息 */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_Variety.VarietyDelete");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* 删除品种请求 */
		cmd.Param("i_UserID").setAsString()=VarietyDeleteReq.UserID;
		cmd.Param("i_Variety").setAsString()=VarietyDeleteReq.Variety;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* 应答信息 */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* 删除品种应答 */
		if(!RspInfo.RspNo){
			strcpy(VarietyDeleteRsp.UserID,cmd.Param("o_UserID").asString().GetBuffer(0));
			RspPackage.PutFields(&VarietyDeleteRsp,ETSClearFieldNoVarietyDeleteRsp);
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeVarietyDeleteRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleVarietyDeleteReq:数据库操作失败！[%s]",(const char*)x.ErrText());

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
			Connect(); // 断线重连
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:回滚失败！[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* 应答信息 */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeVarietyDeleteRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*查询交易节请求*/
void CDBProcessor::HandleTradingTimeQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* 查询交易节请求 */
	CETSClearFieldsTradingTimeQueryReq TradingTimeQueryReq;
	Package.GetFields(&TradingTimeQueryReq,ETSClearFieldNoTradingTimeQueryReq);

	// Response
	CETSClearPackage RspPackage;
	/* 查询交易节应答 */
	CETSClearFieldsTradingTimeQueryRsp TradingTimeQueryRsp;
	CBMLRecordSet TradingTimeQueryRspList;
	SACommand *pCursor=NULL;
	/* 应答信息 */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_TradingTime.TradingTimeQuery");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* 查询交易节请求 */
		cmd.Param("i_UserID").setAsString()=TradingTimeQueryReq.UserID;
		cmd.Param("i_Section").setAsLong()=TradingTimeQueryReq.Section;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* 应答信息 */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* 查询交易节应答 */
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

					// 重置
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
		logsend(lp,LOG_INFO,"DB","HandleTradingTimeQueryReq:数据库操作失败！[%s]",(const char*)x.ErrText());

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
			Connect(); // 断线重连
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:回滚失败！[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* 应答信息 */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeTradingTimeQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*增加交易节请求*/
void CDBProcessor::HandleTradingTimeAddReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* 增加交易节请求 */
	CETSClearFieldsTradingTimeAddReq TradingTimeAddReq;
	Package.GetFields(&TradingTimeAddReq,ETSClearFieldNoTradingTimeAddReq);

	// Response
	CETSClearPackage RspPackage;
	/* 增加交易节应答 */
	CETSClearFieldsTradingTimeAddRsp TradingTimeAddRsp;
	/* 应答信息 */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_TradingTime.TradingTimeAdd");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* 增加交易节请求 */
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

		/* 应答信息 */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* 增加交易节应答 */
		if(!RspInfo.RspNo){
			strcpy(TradingTimeAddRsp.UserID,cmd.Param("o_UserID").asString().GetBuffer(0));
			RspPackage.PutFields(&TradingTimeAddRsp,ETSClearFieldNoTradingTimeAddRsp);
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeTradingTimeAddRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleTradingTimeAddReq:数据库操作失败！[%s]",(const char*)x.ErrText());

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
			Connect(); // 断线重连
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:回滚失败！[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* 应答信息 */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeTradingTimeAddRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*修改交易节请求*/
void CDBProcessor::HandleTradingTimeModifyReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* 修改交易节请求 */
	CETSClearFieldsTradingTimeModifyReq TradingTimeModifyReq;
	Package.GetFields(&TradingTimeModifyReq,ETSClearFieldNoTradingTimeModifyReq);

	// Response
	CETSClearPackage RspPackage;
	/* 修改交易节应答 */
	CETSClearFieldsTradingTimeModifyRsp TradingTimeModifyRsp;
	/* 应答信息 */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_TradingTime.TradingTimeModify");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* 修改交易节请求 */
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

		/* 应答信息 */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* 修改交易节应答 */
		if(!RspInfo.RspNo){
			strcpy(TradingTimeModifyRsp.UserID,cmd.Param("o_UserID").asString().GetBuffer(0));
			RspPackage.PutFields(&TradingTimeModifyRsp,ETSClearFieldNoTradingTimeModifyRsp);
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeTradingTimeModifyRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleTradingTimeModifyReq:数据库操作失败！[%s]",(const char*)x.ErrText());

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
			Connect(); // 断线重连
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:回滚失败！[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* 应答信息 */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeTradingTimeModifyRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*删除交易节请求*/
void CDBProcessor::HandleTradingTimeDeleteReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* 删除交易节请求 */
	CETSClearFieldsTradingTimeDeleteReq TradingTimeDeleteReq;
	Package.GetFields(&TradingTimeDeleteReq,ETSClearFieldNoTradingTimeDeleteReq);

	// Response
	CETSClearPackage RspPackage;
	/* 删除交易节应答 */
	CETSClearFieldsTradingTimeDeleteRsp TradingTimeDeleteRsp;
	/* 应答信息 */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_TradingTime.TradingTimeDelete");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* 删除交易节请求 */
		cmd.Param("i_UserID").setAsString()=TradingTimeDeleteReq.UserID;
		cmd.Param("i_Section").setAsLong()=TradingTimeDeleteReq.Section;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* 应答信息 */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* 删除交易节应答 */
		if(!RspInfo.RspNo){
			strcpy(TradingTimeDeleteRsp.UserID,cmd.Param("o_UserID").asString().GetBuffer(0));
			RspPackage.PutFields(&TradingTimeDeleteRsp,ETSClearFieldNoTradingTimeDeleteRsp);
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeTradingTimeDeleteRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleTradingTimeDeleteReq:数据库操作失败！[%s]",(const char*)x.ErrText());

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
			Connect(); // 断线重连
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:回滚失败！[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* 应答信息 */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeTradingTimeDeleteRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*增加交货地点请求*/
void CDBProcessor::HandleLocationAddReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* 增加交货地点请求 */
	CETSClearFieldsLocationAddReq LocationAddReq;
	Package.GetFields(&LocationAddReq,ETSClearFieldNoLocationAddReq);

	// Response
	CETSClearPackage RspPackage;
	/* 增加交货地点应答 */
	CETSClearFieldsLocationAddRsp LocationAddRsp;
	/* 应答信息 */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_Location.LocationAdd");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* 增加交货地点请求 */
		cmd.Param("i_UserID").setAsString()=LocationAddReq.UserID;
		cmd.Param("i_Location").setAsString()=LocationAddReq.Location;
		cmd.Param("i_LocationName").setAsString()=LocationAddReq.LocationName;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* 应答信息 */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* 增加交货地点应答 */
		if(!RspInfo.RspNo){
			strcpy(LocationAddRsp.UserID,cmd.Param("o_UserID").asString().GetBuffer(0));
			RspPackage.PutFields(&LocationAddRsp,ETSClearFieldNoLocationAddRsp);
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeLocationAddRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleLocationAddReq:数据库操作失败！[%s]",(const char*)x.ErrText());

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
			Connect(); // 断线重连
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:回滚失败！[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* 应答信息 */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeLocationAddRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*修改交货地点请求*/
void CDBProcessor::HandleLocationModifyReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* 修改交货地点请求 */
	CETSClearFieldsLocationModifyReq LocationModifyReq;
	Package.GetFields(&LocationModifyReq,ETSClearFieldNoLocationModifyReq);

	// Response
	CETSClearPackage RspPackage;
	/* 修改交货地点应答 */
	CETSClearFieldsLocationModifyRsp LocationModifyRsp;
	/* 应答信息 */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_Location.LocationModify");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* 修改交货地点请求 */
		cmd.Param("i_UserID").setAsString()=LocationModifyReq.UserID;
		cmd.Param("i_Location").setAsString()=LocationModifyReq.Location;
		cmd.Param("i_LocationName").setAsString()=LocationModifyReq.LocationName;
		cmd.Param("i_LocationStatus").setAsString()=LocationModifyReq.LocationStatus;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* 应答信息 */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* 修改交货地点应答 */
		if(!RspInfo.RspNo){
			strcpy(LocationModifyRsp.UserID,cmd.Param("o_UserID").asString().GetBuffer(0));
			RspPackage.PutFields(&LocationModifyRsp,ETSClearFieldNoLocationModifyRsp);
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeLocationModifyRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleLocationModifyReq:数据库操作失败！[%s]",(const char*)x.ErrText());

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
			Connect(); // 断线重连
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:回滚失败！[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* 应答信息 */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeLocationModifyRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*删除交货地点请求*/
void CDBProcessor::HandleLocationDeleteReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* 删除交货地点请求 */
	CETSClearFieldsLocationDeleteReq LocationDeleteReq;
	Package.GetFields(&LocationDeleteReq,ETSClearFieldNoLocationDeleteReq);

	// Response
	CETSClearPackage RspPackage;
	/* 删除交货地点应答 */
	CETSClearFieldsLocationDeleteRsp LocationDeleteRsp;
	/* 应答信息 */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_Location.LocationDelete");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* 删除交货地点请求 */
		cmd.Param("i_UserID").setAsString()=LocationDeleteReq.UserID;
		cmd.Param("i_Location").setAsString()=LocationDeleteReq.Location;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* 应答信息 */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* 删除交货地点应答 */
		if(!RspInfo.RspNo){
			strcpy(LocationDeleteRsp.UserID,cmd.Param("o_UserID").asString().GetBuffer(0));
			RspPackage.PutFields(&LocationDeleteRsp,ETSClearFieldNoLocationDeleteRsp);
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeLocationDeleteRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleLocationDeleteReq:数据库操作失败！[%s]",(const char*)x.ErrText());

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
			Connect(); // 断线重连
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:回滚失败！[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* 应答信息 */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeLocationDeleteRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*查询商品存储仓库请求*/
void CDBProcessor::HandleWareHouseQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* 查询商品存储仓库请求 */
	CETSClearFieldsWareHouseQueryReq WareHouseQueryReq;
	Package.GetFields(&WareHouseQueryReq,ETSClearFieldNoWareHouseQueryReq);

	// Response
	CETSClearPackage RspPackage;
	/* 查询商品存储仓库应答 */
	CETSClearFieldsWareHouseQueryRsp WareHouseQueryRsp;
	CBMLRecordSet WareHouseQueryRspList;
	SACommand *pCursor=NULL;
	/* 应答信息 */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_WareHouse.WareHouseQuery");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* 查询商品存储仓库请求 */
		cmd.Param("i_UserID").setAsString()=WareHouseQueryReq.UserID;
		cmd.Param("i_WareHouse").setAsString()=WareHouseQueryReq.WareHouse;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* 应答信息 */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* 查询商品存储仓库应答 */
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

					// 重置
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
		logsend(lp,LOG_INFO,"DB","HandleWareHouseQueryReq:数据库操作失败！[%s]",(const char*)x.ErrText());

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
			Connect(); // 断线重连
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:回滚失败！[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* 应答信息 */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeWareHouseQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*增加商品存储仓库请求*/
void CDBProcessor::HandleWareHouseAddReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* 增加商品存储仓库请求 */
	CETSClearFieldsWareHouseAddReq WareHouseAddReq;
	Package.GetFields(&WareHouseAddReq,ETSClearFieldNoWareHouseAddReq);

	// Response
	CETSClearPackage RspPackage;
	/* 增加商品存储仓库应答 */
	CETSClearFieldsWareHouseAddRsp WareHouseAddRsp;
	/* 应答信息 */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_WareHouse.WareHouseAdd");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* 增加商品存储仓库请求 */
		cmd.Param("i_UserID").setAsString()=WareHouseAddReq.UserID;
		cmd.Param("i_WareHouse").setAsString()=WareHouseAddReq.WareHouse;
		cmd.Param("i_WareHouseName").setAsString()=WareHouseAddReq.WareHouseName;
		cmd.Param("i_Location").setAsString()=WareHouseAddReq.Location;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* 应答信息 */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* 增加商品存储仓库应答 */
		if(!RspInfo.RspNo){
			strcpy(WareHouseAddRsp.UserID,cmd.Param("o_UserID").asString().GetBuffer(0));
			RspPackage.PutFields(&WareHouseAddRsp,ETSClearFieldNoWareHouseAddRsp);
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeWareHouseAddRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleWareHouseAddReq:数据库操作失败！[%s]",(const char*)x.ErrText());

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
			Connect(); // 断线重连
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:回滚失败！[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* 应答信息 */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeWareHouseAddRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*修改商品存储仓库请求*/
void CDBProcessor::HandleWareHouseModifyReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* 修改商品存储仓库请求 */
	CETSClearFieldsWareHouseModifyReq WareHouseModifyReq;
	Package.GetFields(&WareHouseModifyReq,ETSClearFieldNoWareHouseModifyReq);

	// Response
	CETSClearPackage RspPackage;
	/* 修改商品存储仓库应答 */
	CETSClearFieldsWareHouseModifyRsp WareHouseModifyRsp;
	/* 应答信息 */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_WareHouse.WareHouseModify");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* 修改商品存储仓库请求 */
		cmd.Param("i_UserID").setAsString()=WareHouseModifyReq.UserID;
		cmd.Param("i_WareHouse").setAsString()=WareHouseModifyReq.WareHouse;
		cmd.Param("i_WareHouseName").setAsString()=WareHouseModifyReq.WareHouseName;
		cmd.Param("i_Location").setAsString()=WareHouseModifyReq.Location;
		cmd.Param("i_WareHouseStatus").setAsString()=WareHouseModifyReq.WareHouseStatus;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* 应答信息 */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* 修改商品存储仓库应答 */
		if(!RspInfo.RspNo){
			strcpy(WareHouseModifyRsp.UserID,cmd.Param("o_UserID").asString().GetBuffer(0));
			RspPackage.PutFields(&WareHouseModifyRsp,ETSClearFieldNoWareHouseModifyRsp);
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeWareHouseModifyRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleWareHouseModifyReq:数据库操作失败！[%s]",(const char*)x.ErrText());

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
			Connect(); // 断线重连
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:回滚失败！[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* 应答信息 */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeWareHouseModifyRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*删除商品存储仓库请求*/
void CDBProcessor::HandleWareHouseDeleteReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* 删除商品存储仓库请求 */
	CETSClearFieldsWareHouseDeleteReq WareHouseDeleteReq;
	Package.GetFields(&WareHouseDeleteReq,ETSClearFieldNoWareHouseDeleteReq);

	// Response
	CETSClearPackage RspPackage;
	/* 删除商品存储仓库应答 */
	CETSClearFieldsWareHouseDeleteRsp WareHouseDeleteRsp;
	/* 应答信息 */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_WareHouse.WareHouseDelete");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* 删除商品存储仓库请求 */
		cmd.Param("i_UserID").setAsString()=WareHouseDeleteReq.UserID;
		cmd.Param("i_WareHouse").setAsString()=WareHouseDeleteReq.WareHouse;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* 应答信息 */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* 删除商品存储仓库应答 */
		if(!RspInfo.RspNo){
			strcpy(WareHouseDeleteRsp.UserID,cmd.Param("o_UserID").asString().GetBuffer(0));
			RspPackage.PutFields(&WareHouseDeleteRsp,ETSClearFieldNoWareHouseDeleteRsp);
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeWareHouseDeleteRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleWareHouseDeleteReq:数据库操作失败！[%s]",(const char*)x.ErrText());

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
			Connect(); // 断线重连
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:回滚失败！[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* 应答信息 */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeWareHouseDeleteRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*查询交割仓库请求*/
void CDBProcessor::HandleDHouseQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* 查询交割仓库请求 */
	CETSClearFieldsDHouseQueryReq DHouseQueryReq;
	Package.GetFields(&DHouseQueryReq,ETSClearFieldNoDHouseQueryReq);

	// Response
	CETSClearPackage RspPackage;
	/* 查询交割仓库应答 */
	CETSClearFieldsDHouseQueryRsp DHouseQueryRsp;
	CBMLRecordSet DHouseQueryRspList;
	SACommand *pCursor=NULL;
	/* 应答信息 */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_DHouse.DHouseQuery");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* 查询交割仓库请求 */
		cmd.Param("i_UserID").setAsString()=DHouseQueryReq.UserID;
		cmd.Param("i_Variety").setAsString()=DHouseQueryReq.Variety;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* 应答信息 */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* 查询交割仓库应答 */
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

					// 重置
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
		logsend(lp,LOG_INFO,"DB","HandleDHouseQueryReq:数据库操作失败！[%s]",(const char*)x.ErrText());

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
			Connect(); // 断线重连
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:回滚失败！[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* 应答信息 */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeDHouseQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*增加交割仓库请求*/
void CDBProcessor::HandleDHouseAddReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* 增加交割仓库请求 */
	CETSClearFieldsDHouseAddReq DHouseAddReq;
	Package.GetFields(&DHouseAddReq,ETSClearFieldNoDHouseAddReq);

	// Response
	CETSClearPackage RspPackage;
	/* 增加交割仓库应答 */
	CETSClearFieldsDHouseAddRsp DHouseAddRsp;
	/* 应答信息 */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_DHouse.DHouseAdd");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* 增加交割仓库请求 */
		cmd.Param("i_UserID").setAsString()=DHouseAddReq.UserID;
		cmd.Param("i_Variety").setAsString()=DHouseAddReq.Variety;
		cmd.Param("i_WareHouse").setAsString()=DHouseAddReq.WareHouse;
		cmd.Param("i_PreDisc").setAsDouble()=DHouseAddReq.PreDisc;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* 应答信息 */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* 增加交割仓库应答 */
		if(!RspInfo.RspNo){
			strcpy(DHouseAddRsp.UserID,cmd.Param("o_UserID").asString().GetBuffer(0));
			RspPackage.PutFields(&DHouseAddRsp,ETSClearFieldNoDHouseAddRsp);
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeDHouseAddRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleDHouseAddReq:数据库操作失败！[%s]",(const char*)x.ErrText());

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
			Connect(); // 断线重连
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:回滚失败！[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* 应答信息 */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeDHouseAddRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*修改交割仓库请求*/
void CDBProcessor::HandleDHouseModifyReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* 修改交割仓库请求 */
	CETSClearFieldsDHouseModifyReq DHouseModifyReq;
	Package.GetFields(&DHouseModifyReq,ETSClearFieldNoDHouseModifyReq);

	// Response
	CETSClearPackage RspPackage;
	/* 修改交割仓库应答 */
	CETSClearFieldsDHouseModifyRsp DHouseModifyRsp;
	/* 应答信息 */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_DHouse.DHouseModify");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* 修改交割仓库请求 */
		cmd.Param("i_UserID").setAsString()=DHouseModifyReq.UserID;
		cmd.Param("i_Variety").setAsString()=DHouseModifyReq.Variety;
		cmd.Param("i_WareHouse").setAsString()=DHouseModifyReq.WareHouse;
		cmd.Param("i_PreDisc").setAsDouble()=DHouseModifyReq.PreDisc;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* 应答信息 */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* 修改交割仓库应答 */
		if(!RspInfo.RspNo){
			strcpy(DHouseModifyRsp.UserID,cmd.Param("o_UserID").asString().GetBuffer(0));
			RspPackage.PutFields(&DHouseModifyRsp,ETSClearFieldNoDHouseModifyRsp);
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeDHouseModifyRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleDHouseModifyReq:数据库操作失败！[%s]",(const char*)x.ErrText());

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
			Connect(); // 断线重连
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:回滚失败！[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* 应答信息 */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeDHouseModifyRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*删除交割仓库请求*/
void CDBProcessor::HandleDHouseDeleteReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* 删除交割仓库请求 */
	CETSClearFieldsDHouseDeleteReq DHouseDeleteReq;
	Package.GetFields(&DHouseDeleteReq,ETSClearFieldNoDHouseDeleteReq);

	// Response
	CETSClearPackage RspPackage;
	/* 删除交割仓库应答 */
	CETSClearFieldsDHouseDeleteRsp DHouseDeleteRsp;
	/* 应答信息 */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_DHouse.DHouseDelete");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* 删除交割仓库请求 */
		cmd.Param("i_UserID").setAsString()=DHouseDeleteReq.UserID;
		cmd.Param("i_Variety").setAsString()=DHouseDeleteReq.Variety;
		cmd.Param("i_WareHouse").setAsString()=DHouseDeleteReq.WareHouse;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* 应答信息 */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* 删除交割仓库应答 */
		if(!RspInfo.RspNo){
			strcpy(DHouseDeleteRsp.UserID,cmd.Param("o_UserID").asString().GetBuffer(0));
			RspPackage.PutFields(&DHouseDeleteRsp,ETSClearFieldNoDHouseDeleteRsp);
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeDHouseDeleteRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleDHouseDeleteReq:数据库操作失败！[%s]",(const char*)x.ErrText());

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
			Connect(); // 断线重连
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:回滚失败！[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* 应答信息 */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeDHouseDeleteRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*用户信息查询请求*/
void CDBProcessor::HandleUserQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* 用户信息查询请求 */
	CETSClearFieldsUserQueryReq UserQueryReq;
	Package.GetFields(&UserQueryReq,ETSClearFieldNoUserQueryReq);

	// Response
	CETSClearPackage RspPackage;
	/* 用户信息查询应答 */
	CETSClearFieldsUserQueryRsp UserQueryRsp;
	CBMLRecordSet UserQueryRspList;
	SACommand *pCursor=NULL;
	/* 应答信息 */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_User.UserQuery");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* 用户信息查询请求 */
		cmd.Param("i_UserID").setAsString()=UserQueryReq.UserID;
		cmd.Param("i_OperID").setAsString()=UserQueryReq.OperID;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* 应答信息 */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* 用户信息查询应答 */
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

					// 重置
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
		logsend(lp,LOG_INFO,"DB","HandleUserQueryReq:数据库操作失败！[%s]",(const char*)x.ErrText());

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
			Connect(); // 断线重连
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:回滚失败！[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* 应答信息 */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeUserQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*用户信息增加请求*/
void CDBProcessor::HandleUserAddReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* 用户信息增加请求 */
	CETSClearFieldsUserAddReq UserAddReq;
	Package.GetFields(&UserAddReq,ETSClearFieldNoUserAddReq);

	// Response
	CETSClearPackage RspPackage;
	/* 用户信息增加应答 */
	CETSClearFieldsUserAddRsp UserAddRsp;
	/* 应答信息 */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_User.UserAdd");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* 用户信息增加请求 */
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

		/* 应答信息 */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* 用户信息增加应答 */
		if(!RspInfo.RspNo){
			strcpy(UserAddRsp.UserID,cmd.Param("o_UserID").asString().GetBuffer(0));
			RspPackage.PutFields(&UserAddRsp,ETSClearFieldNoUserAddRsp);
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeUserAddRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleUserAddReq:数据库操作失败！[%s]",(const char*)x.ErrText());

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
			Connect(); // 断线重连
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:回滚失败！[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* 应答信息 */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeUserAddRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*用户信息删除请求*/
void CDBProcessor::HandleUserDeleteReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* 用户信息删除请求 */
	CETSClearFieldsUserDeleteReq UserDeleteReq;
	Package.GetFields(&UserDeleteReq,ETSClearFieldNoUserDeleteReq);

	// Response
	CETSClearPackage RspPackage;
	/* 用户信息删除应答 */
	CETSClearFieldsUserDeleteRsp UserDeleteRsp;
	/* 应答信息 */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_User.UserDelete");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* 用户信息删除请求 */
		cmd.Param("i_UserID").setAsString()=UserDeleteReq.UserID;
		cmd.Param("i_OperID").setAsString()=UserDeleteReq.OperID;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* 应答信息 */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* 用户信息删除应答 */
		if(!RspInfo.RspNo){
			strcpy(UserDeleteRsp.UserID,cmd.Param("o_UserID").asString().GetBuffer(0));
			RspPackage.PutFields(&UserDeleteRsp,ETSClearFieldNoUserDeleteRsp);
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeUserDeleteRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleUserDeleteReq:数据库操作失败！[%s]",(const char*)x.ErrText());

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
			Connect(); // 断线重连
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:回滚失败！[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* 应答信息 */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeUserDeleteRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*用户信息修改请求*/
void CDBProcessor::HandleUserModifyReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* 用户信息修改请求 */
	CETSClearFieldsUserModifyReq UserModifyReq;
	Package.GetFields(&UserModifyReq,ETSClearFieldNoUserModifyReq);

	// Response
	CETSClearPackage RspPackage;
	/* 用户信息修改应答 */
	CETSClearFieldsUserModifyRsp UserModifyRsp;
	/* 应答信息 */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_User.UserModify");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* 用户信息修改请求 */
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

		/* 应答信息 */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* 用户信息修改应答 */
		if(!RspInfo.RspNo){
			strcpy(UserModifyRsp.UserID,cmd.Param("o_UserID").asString().GetBuffer(0));
			RspPackage.PutFields(&UserModifyRsp,ETSClearFieldNoUserModifyRsp);
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeUserModifyRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleUserModifyReq:数据库操作失败！[%s]",(const char*)x.ErrText());

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
			Connect(); // 断线重连
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:回滚失败！[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* 应答信息 */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeUserModifyRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*部门信息查询请求*/
void CDBProcessor::HandleDepartmentQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* 部门信息查询请求 */
	CETSClearFieldsDepartmentQueryReq DepartmentQueryReq;
	Package.GetFields(&DepartmentQueryReq,ETSClearFieldNoDepartmentQueryReq);

	// Response
	CETSClearPackage RspPackage;
	/* 部门信息查询应答 */
	CETSClearFieldsDepartmentQueryRsp DepartmentQueryRsp;
	CBMLRecordSet DepartmentQueryRspList;
	SACommand *pCursor=NULL;
	/* 应答信息 */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_Department.DepartmentQuery");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* 部门信息查询请求 */
		cmd.Param("i_UserID").setAsString()=DepartmentQueryReq.UserID;
		cmd.Param("i_DepartmentID").setAsString()=DepartmentQueryReq.DepartmentID;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* 应答信息 */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* 部门信息查询应答 */
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

					// 重置
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
		logsend(lp,LOG_INFO,"DB","HandleDepartmentQueryReq:数据库操作失败！[%s]",(const char*)x.ErrText());

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
			Connect(); // 断线重连
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:回滚失败！[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* 应答信息 */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeDepartmentQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*部门信息增加请求*/
void CDBProcessor::HandleDepartmentAddReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* 部门信息增加请求 */
	CETSClearFieldsDepartmentAddReq DepartmentAddReq;
	Package.GetFields(&DepartmentAddReq,ETSClearFieldNoDepartmentAddReq);

	// Response
	CETSClearPackage RspPackage;
	/* 部门信息增加应答 */
	CETSClearFieldsDepartmentAddRsp DepartmentAddRsp;
	/* 应答信息 */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_Department.DepartmentAdd");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* 部门信息增加请求 */
		cmd.Param("i_UserID").setAsString()=DepartmentAddReq.UserID;
		cmd.Param("i_DepartmentID").setAsString()=DepartmentAddReq.DepartmentID;
		cmd.Param("i_DepartmentName").setAsString()=DepartmentAddReq.DepartmentName;
		cmd.Param("i_Description").setAsString()=DepartmentAddReq.Description;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* 应答信息 */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* 部门信息增加应答 */
		if(!RspInfo.RspNo){
			strcpy(DepartmentAddRsp.UserID,cmd.Param("o_UserID").asString().GetBuffer(0));
			RspPackage.PutFields(&DepartmentAddRsp,ETSClearFieldNoDepartmentAddRsp);
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeDepartmentAddRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleDepartmentAddReq:数据库操作失败！[%s]",(const char*)x.ErrText());

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
			Connect(); // 断线重连
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:回滚失败！[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* 应答信息 */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeDepartmentAddRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*部门信息修改请求*/
void CDBProcessor::HandleDepartmentModifyReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* 部门信息修改请求 */
	CETSClearFieldsDepartmentModifyReq DepartmentModifyReq;
	Package.GetFields(&DepartmentModifyReq,ETSClearFieldNoDepartmentModifyReq);

	// Response
	CETSClearPackage RspPackage;
	/* 部门信息修改应答 */
	CETSClearFieldsDepartmentModifyRsp DepartmentModifyRsp;
	/* 应答信息 */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_Department.DepartmentModify");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* 部门信息修改请求 */
		cmd.Param("i_UserID").setAsString()=DepartmentModifyReq.UserID;
		cmd.Param("i_DepartmentID").setAsString()=DepartmentModifyReq.DepartmentID;
		cmd.Param("i_DepartmentName").setAsString()=DepartmentModifyReq.DepartmentName;
		cmd.Param("i_Description").setAsString()=DepartmentModifyReq.Description;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* 应答信息 */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* 部门信息修改应答 */
		if(!RspInfo.RspNo){
			strcpy(DepartmentModifyRsp.UserID,cmd.Param("o_UserID").asString().GetBuffer(0));
			RspPackage.PutFields(&DepartmentModifyRsp,ETSClearFieldNoDepartmentModifyRsp);
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeDepartmentModifyRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleDepartmentModifyReq:数据库操作失败！[%s]",(const char*)x.ErrText());

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
			Connect(); // 断线重连
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:回滚失败！[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* 应答信息 */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeDepartmentModifyRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*部门信息删除请求*/
void CDBProcessor::HandleDepartmentDeleteReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* 部门信息删除请求 */
	CETSClearFieldsDepartmentDeleteReq DepartmentDeleteReq;
	Package.GetFields(&DepartmentDeleteReq,ETSClearFieldNoDepartmentDeleteReq);

	// Response
	CETSClearPackage RspPackage;
	/* 部门信息删除应答 */
	CETSClearFieldsDepartmentDeleteRsp DepartmentDeleteRsp;
	/* 应答信息 */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_Department.DepartmentDelete");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* 部门信息删除请求 */
		cmd.Param("i_UserID").setAsString()=DepartmentDeleteReq.UserID;
		cmd.Param("i_DepartmentID").setAsString()=DepartmentDeleteReq.DepartmentID;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* 应答信息 */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* 部门信息删除应答 */
		if(!RspInfo.RspNo){
			strcpy(DepartmentDeleteRsp.UserID,cmd.Param("o_UserID").asString().GetBuffer(0));
			RspPackage.PutFields(&DepartmentDeleteRsp,ETSClearFieldNoDepartmentDeleteRsp);
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeDepartmentDeleteRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleDepartmentDeleteReq:数据库操作失败！[%s]",(const char*)x.ErrText());

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
			Connect(); // 断线重连
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:回滚失败！[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* 应答信息 */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeDepartmentDeleteRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*岗位信息查询请求*/
void CDBProcessor::HandlePositionQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* 岗位信息查询请求 */
	CETSClearFieldsPositionQueryReq PositionQueryReq;
	Package.GetFields(&PositionQueryReq,ETSClearFieldNoPositionQueryReq);

	// Response
	CETSClearPackage RspPackage;
	/* 岗位信息查询应答 */
	CETSClearFieldsPositionQueryRsp PositionQueryRsp;
	CBMLRecordSet PositionQueryRspList;
	SACommand *pCursor=NULL;
	/* 应答信息 */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_Position.PositionQuery");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* 岗位信息查询请求 */
		cmd.Param("i_UserID").setAsString()=PositionQueryReq.UserID;
		cmd.Param("i_PositionID").setAsString()=PositionQueryReq.PositionID;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* 应答信息 */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* 岗位信息查询应答 */
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

					// 重置
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
		logsend(lp,LOG_INFO,"DB","HandlePositionQueryReq:数据库操作失败！[%s]",(const char*)x.ErrText());

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
			Connect(); // 断线重连
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:回滚失败！[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* 应答信息 */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypePositionQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*岗位信息增加请求*/
void CDBProcessor::HandlePositionAddReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* 岗位信息增加请求 */
	CETSClearFieldsPositionAddReq PositionAddReq;
	Package.GetFields(&PositionAddReq,ETSClearFieldNoPositionAddReq);

	// Response
	CETSClearPackage RspPackage;
	/* 岗位信息增加应答 */
	CETSClearFieldsPositionAddRsp PositionAddRsp;
	/* 应答信息 */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_Position.PositionAdd");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* 岗位信息增加请求 */
		cmd.Param("i_UserID").setAsString()=PositionAddReq.UserID;
		cmd.Param("i_PositionID").setAsString()=PositionAddReq.PositionID;
		cmd.Param("i_PositionName").setAsString()=PositionAddReq.PositionName;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* 应答信息 */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* 岗位信息增加应答 */
		if(!RspInfo.RspNo){
			strcpy(PositionAddRsp.UserID,cmd.Param("o_UserID").asString().GetBuffer(0));
			RspPackage.PutFields(&PositionAddRsp,ETSClearFieldNoPositionAddRsp);
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypePositionAddRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandlePositionAddReq:数据库操作失败！[%s]",(const char*)x.ErrText());

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
			Connect(); // 断线重连
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:回滚失败！[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* 应答信息 */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypePositionAddRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*岗位信息修改请求*/
void CDBProcessor::HandlePositionModifyReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* 岗位信息修改请求 */
	CETSClearFieldsPositionModifyReq PositionModifyReq;
	Package.GetFields(&PositionModifyReq,ETSClearFieldNoPositionModifyReq);

	// Response
	CETSClearPackage RspPackage;
	/* 岗位信息修改应答 */
	CETSClearFieldsPositionModifyRsp PositionModifyRsp;
	/* 应答信息 */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_Position.PositionModify");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* 岗位信息修改请求 */
		cmd.Param("i_UserID").setAsString()=PositionModifyReq.UserID;
		cmd.Param("i_PositionID").setAsString()=PositionModifyReq.PositionID;
		cmd.Param("i_PositionName").setAsString()=PositionModifyReq.PositionName;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* 应答信息 */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* 岗位信息修改应答 */
		if(!RspInfo.RspNo){
			strcpy(PositionModifyRsp.UserID,cmd.Param("o_UserID").asString().GetBuffer(0));
			RspPackage.PutFields(&PositionModifyRsp,ETSClearFieldNoPositionModifyRsp);
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypePositionModifyRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandlePositionModifyReq:数据库操作失败！[%s]",(const char*)x.ErrText());

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
			Connect(); // 断线重连
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:回滚失败！[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* 应答信息 */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypePositionModifyRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*岗位信息删除请求*/
void CDBProcessor::HandlePositionDeleteReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* 岗位信息删除请求 */
	CETSClearFieldsPositionDeleteReq PositionDeleteReq;
	Package.GetFields(&PositionDeleteReq,ETSClearFieldNoPositionDeleteReq);

	// Response
	CETSClearPackage RspPackage;
	/* 岗位信息删除应答 */
	CETSClearFieldsPositionDeleteRsp PositionDeleteRsp;
	/* 应答信息 */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_Position.PositionDelete");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* 岗位信息删除请求 */
		cmd.Param("i_UserID").setAsString()=PositionDeleteReq.UserID;
		cmd.Param("i_PositionID").setAsString()=PositionDeleteReq.PositionID;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* 应答信息 */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* 岗位信息删除应答 */
		if(!RspInfo.RspNo){
			strcpy(PositionDeleteRsp.UserID,cmd.Param("o_UserID").asString().GetBuffer(0));
			RspPackage.PutFields(&PositionDeleteRsp,ETSClearFieldNoPositionDeleteRsp);
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypePositionDeleteRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandlePositionDeleteReq:数据库操作失败！[%s]",(const char*)x.ErrText());

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
			Connect(); // 断线重连
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:回滚失败！[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* 应答信息 */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypePositionDeleteRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*部门权限查询请求*/
void CDBProcessor::HandleDepAuthorityQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* 部门权限查询请求 */
	CETSClearFieldsDepAuthorityQueryReq DepAuthorityQueryReq;
	Package.GetFields(&DepAuthorityQueryReq,ETSClearFieldNoDepAuthorityQueryReq);

	// Response
	CETSClearPackage RspPackage;
	/* 部门权限查询应答 */
	CETSClearFieldsDepAuthorityQueryRsp DepAuthorityQueryRsp;
	CBMLRecordSet DepAuthorityQueryRspList;
	SACommand *pCursor=NULL;
	/* 应答信息 */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_DepAuthority.DepAuthorityQuery");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* 部门权限查询请求 */
		cmd.Param("i_UserID").setAsString()=DepAuthorityQueryReq.UserID;
		cmd.Param("i_DepartmentID").setAsString()=DepAuthorityQueryReq.DepartmentID;
		cmd.Param("i_AuthorityID").setAsString()=DepAuthorityQueryReq.AuthorityID;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* 应答信息 */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* 部门权限查询应答 */
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

					// 重置
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
		logsend(lp,LOG_INFO,"DB","HandleDepAuthorityQueryReq:数据库操作失败！[%s]",(const char*)x.ErrText());

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
			Connect(); // 断线重连
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:回滚失败！[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* 应答信息 */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeDepAuthorityQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*全权限查询请求*/
void CDBProcessor::HandleAuthorityQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* 全权限查询请求 */
	CETSClearFieldsAuthorityQueryReq AuthorityQueryReq;
	Package.GetFields(&AuthorityQueryReq,ETSClearFieldNoAuthorityQueryReq);

	// Response
	CETSClearPackage RspPackage;
	/* 全权限查询应答 */
	CETSClearFieldsAuthorityQueryRsp AuthorityQueryRsp;
	CBMLRecordSet AuthorityQueryRspList;
	SACommand *pCursor=NULL;
	/* 应答信息 */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_DepAuthority.AuthorityQuery");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* 全权限查询请求 */
		cmd.Param("i_UserID").setAsString()=AuthorityQueryReq.UserID;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* 应答信息 */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* 全权限查询应答 */
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

					// 重置
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
		logsend(lp,LOG_INFO,"DB","HandleAuthorityQueryReq:数据库操作失败！[%s]",(const char*)x.ErrText());

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
			Connect(); // 断线重连
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:回滚失败！[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* 应答信息 */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeAuthorityQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*部门权限增加请求*/
void CDBProcessor::HandleDepAuthorityAddReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* 部门权限增加请求 */
	CETSClearFieldsDepAuthorityAddReq DepAuthorityAddReq;
	Package.GetFields(&DepAuthorityAddReq,ETSClearFieldNoDepAuthorityAddReq);

	// Response
	CETSClearPackage RspPackage;
	/* 部门权限增加应答 */
	CETSClearFieldsDepAuthorityAddRsp DepAuthorityAddRsp;
	/* 应答信息 */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_DepAuthority.DepAuthorityAdd");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* 部门权限增加请求 */
		cmd.Param("i_UserID").setAsString()=DepAuthorityAddReq.UserID;
		cmd.Param("i_DepartmentID").setAsString()=DepAuthorityAddReq.DepartmentID;
		cmd.Param("i_AuthorityID").setAsString()=DepAuthorityAddReq.AuthorityID;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* 应答信息 */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* 部门权限增加应答 */
		if(!RspInfo.RspNo){
			strcpy(DepAuthorityAddRsp.UserID,cmd.Param("o_UserID").asString().GetBuffer(0));
			RspPackage.PutFields(&DepAuthorityAddRsp,ETSClearFieldNoDepAuthorityAddRsp);
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeDepAuthorityAddRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleDepAuthorityAddReq:数据库操作失败！[%s]",(const char*)x.ErrText());

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
			Connect(); // 断线重连
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:回滚失败！[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* 应答信息 */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeDepAuthorityAddRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*部门权限删除请求*/
void CDBProcessor::HandleDepAuthorityDeleteReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* 部门权限删除请求 */
	CETSClearFieldsDepAuthorityDeleteReq DepAuthorityDeleteReq;
	Package.GetFields(&DepAuthorityDeleteReq,ETSClearFieldNoDepAuthorityDeleteReq);

	// Response
	CETSClearPackage RspPackage;
	/* 部门权限删除应答 */
	CETSClearFieldsDepAuthorityDeleteRsp DepAuthorityDeleteRsp;
	/* 应答信息 */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_DepAuthority.DepAuthorityDelete");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* 部门权限删除请求 */
		cmd.Param("i_UserID").setAsString()=DepAuthorityDeleteReq.UserID;
		cmd.Param("i_DepartmentID").setAsString()=DepAuthorityDeleteReq.DepartmentID;
		cmd.Param("i_AuthorityID").setAsString()=DepAuthorityDeleteReq.AuthorityID;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* 应答信息 */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* 部门权限删除应答 */
		if(!RspInfo.RspNo){
			strcpy(DepAuthorityDeleteRsp.UserID,cmd.Param("o_UserID").asString().GetBuffer(0));
			RspPackage.PutFields(&DepAuthorityDeleteRsp,ETSClearFieldNoDepAuthorityDeleteRsp);
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeDepAuthorityDeleteRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleDepAuthorityDeleteReq:数据库操作失败！[%s]",(const char*)x.ErrText());

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
			Connect(); // 断线重连
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:回滚失败！[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* 应答信息 */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeDepAuthorityDeleteRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*岗位权限查询请求*/
void CDBProcessor::HandlePosAuthorityQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* 岗位权限查询请求 */
	CETSClearFieldsPosAuthorityQueryReq PosAuthorityQueryReq;
	Package.GetFields(&PosAuthorityQueryReq,ETSClearFieldNoPosAuthorityQueryReq);

	// Response
	CETSClearPackage RspPackage;
	/* 岗位权限查询应答 */
	CETSClearFieldsPosAuthorityQueryRsp PosAuthorityQueryRsp;
	CBMLRecordSet PosAuthorityQueryRspList;
	SACommand *pCursor=NULL;
	/* 应答信息 */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_PosAuthority.PosAuthorityQuery");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* 岗位权限查询请求 */
		cmd.Param("i_UserID").setAsString()=PosAuthorityQueryReq.UserID;
		cmd.Param("i_PositionID").setAsString()=PosAuthorityQueryReq.PositionID;
		cmd.Param("i_AuthorityID").setAsString()=PosAuthorityQueryReq.AuthorityID;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* 应答信息 */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* 岗位权限查询应答 */
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

					// 重置
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
		logsend(lp,LOG_INFO,"DB","HandlePosAuthorityQueryReq:数据库操作失败！[%s]",(const char*)x.ErrText());

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
			Connect(); // 断线重连
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:回滚失败！[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* 应答信息 */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypePosAuthorityQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*岗位权限增加请求*/
void CDBProcessor::HandlePosAuthorityAddReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* 岗位权限增加请求 */
	CETSClearFieldsPosAuthorityAddReq PosAuthorityAddReq;
	Package.GetFields(&PosAuthorityAddReq,ETSClearFieldNoPosAuthorityAddReq);

	// Response
	CETSClearPackage RspPackage;
	/* 岗位权限增加应答 */
	CETSClearFieldsPosAuthorityAddRsp PosAuthorityAddRsp;
	/* 应答信息 */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_PosAuthority.PosAuthorityAdd");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* 岗位权限增加请求 */
		cmd.Param("i_UserID").setAsString()=PosAuthorityAddReq.UserID;
		cmd.Param("i_PositionID").setAsString()=PosAuthorityAddReq.PositionID;
		cmd.Param("i_AuthorityID").setAsString()=PosAuthorityAddReq.AuthorityID;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* 应答信息 */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* 岗位权限增加应答 */
		if(!RspInfo.RspNo){
			strcpy(PosAuthorityAddRsp.UserID,cmd.Param("o_UserID").asString().GetBuffer(0));
			RspPackage.PutFields(&PosAuthorityAddRsp,ETSClearFieldNoPosAuthorityAddRsp);
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypePosAuthorityAddRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandlePosAuthorityAddReq:数据库操作失败！[%s]",(const char*)x.ErrText());

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
			Connect(); // 断线重连
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:回滚失败！[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* 应答信息 */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypePosAuthorityAddRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*岗位权限删除请求*/
void CDBProcessor::HandlePosAuthorityDeleteReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* 岗位权限删除请求 */
	CETSClearFieldsPosAuthorityDeleteReq PosAuthorityDeleteReq;
	Package.GetFields(&PosAuthorityDeleteReq,ETSClearFieldNoPosAuthorityDeleteReq);

	// Response
	CETSClearPackage RspPackage;
	/* 岗位权限删除应答 */
	CETSClearFieldsPosAuthorityDeleteRsp PosAuthorityDeleteRsp;
	/* 应答信息 */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_PosAuthority.PosAuthorityDelete");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* 岗位权限删除请求 */
		cmd.Param("i_UserID").setAsString()=PosAuthorityDeleteReq.UserID;
		cmd.Param("i_PositionID").setAsString()=PosAuthorityDeleteReq.PositionID;
		cmd.Param("i_AuthorityID").setAsString()=PosAuthorityDeleteReq.AuthorityID;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* 应答信息 */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* 岗位权限删除应答 */
		if(!RspInfo.RspNo){
			strcpy(PosAuthorityDeleteRsp.UserID,cmd.Param("o_UserID").asString().GetBuffer(0));
			RspPackage.PutFields(&PosAuthorityDeleteRsp,ETSClearFieldNoPosAuthorityDeleteRsp);
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypePosAuthorityDeleteRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandlePosAuthorityDeleteReq:数据库操作失败！[%s]",(const char*)x.ErrText());

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
			Connect(); // 断线重连
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:回滚失败！[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* 应答信息 */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypePosAuthorityDeleteRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*用户权限查询请求*/
void CDBProcessor::HandleUseAuthorityQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* 用户权限查询请求 */
	CETSClearFieldsUseAuthorityQueryReq UseAuthorityQueryReq;
	Package.GetFields(&UseAuthorityQueryReq,ETSClearFieldNoUseAuthorityQueryReq);

	// Response
	CETSClearPackage RspPackage;
	/* 用户权限查询应答 */
	CETSClearFieldsUseAuthorityQueryRsp UseAuthorityQueryRsp;
	CBMLRecordSet UseAuthorityQueryRspList;
	SACommand *pCursor=NULL;
	/* 应答信息 */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_User_Authority.AuthorityQuery");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* 用户权限查询请求 */
		cmd.Param("i_UserID").setAsString()=UseAuthorityQueryReq.UserID;
		cmd.Param("i_OperID").setAsString()=UseAuthorityQueryReq.OperID;
		cmd.Param("i_PositionID").setAsString()=UseAuthorityQueryReq.PositionID;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* 应答信息 */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* 用户权限查询应答 */
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

					// 重置
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
		logsend(lp,LOG_INFO,"DB","HandleUseAuthorityQueryReq:数据库操作失败！[%s]",(const char*)x.ErrText());

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
			Connect(); // 断线重连
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:回滚失败！[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* 应答信息 */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeUseAuthorityQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*用户权限增加请求*/
void CDBProcessor::HandleUseAuthorityAddReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* 用户权限增加请求 */
	CETSClearFieldsUseAuthorityAddReq UseAuthorityAddReq;
	Package.GetFields(&UseAuthorityAddReq,ETSClearFieldNoUseAuthorityAddReq);

	// Response
	CETSClearPackage RspPackage;
	/* 用户权限增加应答 */
	CETSClearFieldsUseAuthorityAddRsp UseAuthorityAddRsp;
	/* 应答信息 */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_User_Authority.AuthorityAdd");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* 用户权限增加请求 */
		cmd.Param("i_UserID").setAsString()=UseAuthorityAddReq.UserID;
		cmd.Param("i_OperID").setAsString()=UseAuthorityAddReq.OperID;
		cmd.Param("i_PositionID").setAsString()=UseAuthorityAddReq.PositionID;
		cmd.Param("i_AuthorityID").setAsString()=UseAuthorityAddReq.AuthorityID;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* 应答信息 */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* 用户权限增加应答 */
		if(!RspInfo.RspNo){
			strcpy(UseAuthorityAddRsp.UserID,cmd.Param("o_UserID").asString().GetBuffer(0));
			RspPackage.PutFields(&UseAuthorityAddRsp,ETSClearFieldNoUseAuthorityAddRsp);
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeUseAuthorityAddRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleUseAuthorityAddReq:数据库操作失败！[%s]",(const char*)x.ErrText());

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
			Connect(); // 断线重连
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:回滚失败！[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* 应答信息 */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeUseAuthorityAddRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*用户权限删除请求*/
void CDBProcessor::HandleUseAuthorityDeleteReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* 用户权限删除请求 */
	CETSClearFieldsUseAuthorityDeleteReq UseAuthorityDeleteReq;
	Package.GetFields(&UseAuthorityDeleteReq,ETSClearFieldNoUseAuthorityDeleteReq);

	// Response
	CETSClearPackage RspPackage;
	/* 用户权限删除应答 */
	CETSClearFieldsUseAuthorityDeleteRsp UseAuthorityDeleteRsp;
	/* 应答信息 */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_User_Authority.AuthorityDelete");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* 用户权限删除请求 */
		cmd.Param("i_UserID").setAsString()=UseAuthorityDeleteReq.UserID;
		cmd.Param("i_OperID").setAsString()=UseAuthorityDeleteReq.OperID;
		cmd.Param("i_PositionID").setAsString()=UseAuthorityDeleteReq.PositionID;
		cmd.Param("i_AuthorityID").setAsString()=UseAuthorityDeleteReq.AuthorityID;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* 应答信息 */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* 用户权限删除应答 */
		if(!RspInfo.RspNo){
			strcpy(UseAuthorityDeleteRsp.UserID,cmd.Param("o_UserID").asString().GetBuffer(0));
			RspPackage.PutFields(&UseAuthorityDeleteRsp,ETSClearFieldNoUseAuthorityDeleteRsp);
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeUseAuthorityDeleteRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleUseAuthorityDeleteReq:数据库操作失败！[%s]",(const char*)x.ErrText());

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
			Connect(); // 断线重连
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:回滚失败！[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* 应答信息 */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeUseAuthorityDeleteRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*查询交易商品合约历史请求*/
void CDBProcessor::HandleCommodityHistQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* 查询交易商品合约历史请求 */
	CETSClearFieldsCommodityHistQueryReq CommodityHistQueryReq;
	Package.GetFields(&CommodityHistQueryReq,ETSClearFieldNoCommodityHistQueryReq);

	// Response
	CETSClearPackage RspPackage;
	/* 查询交易商品合约历史应答 */
	CETSClearFieldsCommodityHistQueryRsp CommodityHistQueryRsp;
	CBMLRecordSet CommodityHistQueryRspList;
	SACommand *pCursor=NULL;
	/* 应答信息 */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_CommodityHist.CommodityHistQuery");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* 查询交易商品合约历史请求 */
		cmd.Param("i_UserID").setAsString()=CommodityHistQueryReq.UserID;
		cmd.Param("i_HistDate").setAsLong()=CommodityHistQueryReq.HistDate;
		cmd.Param("i_Variety").setAsString()=CommodityHistQueryReq.Variety;
		cmd.Param("i_Market").setAsString()=CommodityHistQueryReq.Market;
		cmd.Param("i_Commodity").setAsString()=CommodityHistQueryReq.Commodity;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* 应答信息 */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* 查询交易商品合约历史应答 */
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

					// 重置
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
		logsend(lp,LOG_INFO,"DB","HandleCommodityHistQueryReq:数据库操作失败！[%s]",(const char*)x.ErrText());

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
			Connect(); // 断线重连
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:回滚失败！[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* 应答信息 */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeCommodityHistQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*电子货单查询请求*/
void CDBProcessor::HandleGoodsQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* 电子货单查询请求 */
	CETSClearFieldsGoodsQueryReq GoodsQueryReq;
	Package.GetFields(&GoodsQueryReq,ETSClearFieldNoGoodsQueryReq);

	// Response
	CETSClearPackage RspPackage;
	/* 电子货单查询应答 */
	CETSClearFieldsGoodsQueryRsp GoodsQueryRsp;
	CBMLRecordSet GoodsQueryRspList;
	SACommand *pCursor=NULL;
	/* 应答信息 */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_Goods.GoodsQuery");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* 电子货单查询请求 */
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

		/* 应答信息 */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* 电子货单查询应答 */
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

					// 重置
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
		logsend(lp,LOG_INFO,"DB","HandleGoodsQueryReq:数据库操作失败！[%s]",(const char*)x.ErrText());

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
			Connect(); // 断线重连
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:回滚失败！[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* 应答信息 */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeGoodsQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*会员清算信息查询请求*/
void CDBProcessor::HandleClearingQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* 会员清算信息查询请求 */
	CETSClearFieldsClearingQueryReq ClearingQueryReq;
	Package.GetFields(&ClearingQueryReq,ETSClearFieldNoClearingQueryReq);

	// Response
	CETSClearPackage RspPackage;
	/* 会员清算信息查询应答 */
	CETSClearFieldsClearingQueryRsp ClearingQueryRsp;
	CBMLRecordSet ClearingQueryRspList;
	SACommand *pCursor=NULL;
	/* 应答信息 */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_Clearing.ClearingQuery");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* 会员清算信息查询请求 */
		cmd.Param("i_UserID").setAsString()=ClearingQueryReq.UserID;
		cmd.Param("i_Firm").setAsString()=ClearingQueryReq.Firm;
		cmd.Param("i_Market").setAsString()=ClearingQueryReq.Market;
		cmd.Param("i_Commodity").setAsString()=ClearingQueryReq.Commodity;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* 应答信息 */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* 会员清算信息查询应答 */
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

					// 重置
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
		logsend(lp,LOG_INFO,"DB","HandleClearingQueryReq:数据库操作失败！[%s]",(const char*)x.ErrText());

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
			Connect(); // 断线重连
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:回滚失败！[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* 应答信息 */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeClearingQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*客户清算信息查询请求*/
void CDBProcessor::HandleCusClearingQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* 客户清算信息查询请求 */
	CETSClearFieldsCusClearingQueryReq CusClearingQueryReq;
	Package.GetFields(&CusClearingQueryReq,ETSClearFieldNoCusClearingQueryReq);

	// Response
	CETSClearPackage RspPackage;
	/* 客户清算信息查询应答 */
	CETSClearFieldsCusClearingQueryRsp CusClearingQueryRsp;
	CBMLRecordSet CusClearingQueryRspList;
	SACommand *pCursor=NULL;
	/* 应答信息 */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_CusClearing.CusClearingQuery");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* 客户清算信息查询请求 */
		cmd.Param("i_UserID").setAsString()=CusClearingQueryReq.UserID;
		cmd.Param("i_Firm").setAsString()=CusClearingQueryReq.Firm;
		cmd.Param("i_Customer").setAsString()=CusClearingQueryReq.Customer;
		cmd.Param("i_Market").setAsString()=CusClearingQueryReq.Market;
		cmd.Param("i_Commodity").setAsString()=CusClearingQueryReq.Commodity;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* 应答信息 */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* 客户清算信息查询应答 */
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

					// 重置
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
		logsend(lp,LOG_INFO,"DB","HandleCusClearingQueryReq:数据库操作失败！[%s]",(const char*)x.ErrText());

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
			Connect(); // 断线重连
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:回滚失败！[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* 应答信息 */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeCusClearingQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*交易控制查询请求*/
void CDBProcessor::HandleAccessQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* 交易控制查询请求 */
	CETSClearFieldsAccessQueryReq AccessQueryReq;
	Package.GetFields(&AccessQueryReq,ETSClearFieldNoAccessQueryReq);

	// Response
	CETSClearPackage RspPackage;
	/* 交易控制查询应答 */
	CETSClearFieldsAccessQueryRsp AccessQueryRsp;
	CBMLRecordSet AccessQueryRspList;
	SACommand *pCursor=NULL;
	/* 应答信息 */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_Access.AccessQuery");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* 交易控制查询请求 */
		cmd.Param("i_UserID").setAsString()=AccessQueryReq.UserID;
		cmd.Param("i_Firm").setAsString()=AccessQueryReq.Firm;
		cmd.Param("i_Customer").setAsString()=AccessQueryReq.Customer;
		cmd.Param("i_Market").setAsString()=AccessQueryReq.Market;
		cmd.Param("i_Commodity").setAsString()=AccessQueryReq.Commodity;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* 应答信息 */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* 交易控制查询应答 */
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

					// 重置
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
		logsend(lp,LOG_INFO,"DB","HandleAccessQueryReq:数据库操作失败！[%s]",(const char*)x.ErrText());

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
			Connect(); // 断线重连
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:回滚失败！[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* 应答信息 */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeAccessQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*新增交易控制请求*/
void CDBProcessor::HandleAccessAddReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* 新增交易控制请求 */
	CETSClearFieldsAccessAddReq AccessAddReq;
	Package.GetFields(&AccessAddReq,ETSClearFieldNoAccessAddReq);

	// Response
	CETSClearPackage RspPackage;
	/* 新增交易控制应答 */
	CETSClearFieldsAccessAddRsp AccessAddRsp;
	/* 应答信息 */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_Access.AccessAdd");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* 新增交易控制请求 */
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

		/* 应答信息 */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* 新增交易控制应答 */
		if(!RspInfo.RspNo){
			strcpy(AccessAddRsp.UserID,cmd.Param("o_UserID").asString().GetBuffer(0));
			RspPackage.PutFields(&AccessAddRsp,ETSClearFieldNoAccessAddRsp);
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeAccessAddRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleAccessAddReq:数据库操作失败！[%s]",(const char*)x.ErrText());

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
			Connect(); // 断线重连
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:回滚失败！[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* 应答信息 */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeAccessAddRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*删除交易控制请求*/
void CDBProcessor::HandleAccessDeleteReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* 删除交易控制请求 */
	CETSClearFieldsAccessDeleteReq AccessDeleteReq;
	Package.GetFields(&AccessDeleteReq,ETSClearFieldNoAccessDeleteReq);

	// Response
	CETSClearPackage RspPackage;
	/* 删除交易控制应答 */
	CETSClearFieldsAccessDeleteRsp AccessDeleteRsp;
	/* 应答信息 */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_Access.AccessDelete");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* 删除交易控制请求 */
		cmd.Param("i_UserID").setAsString()=AccessDeleteReq.UserID;
		cmd.Param("i_Firm").setAsString()=AccessDeleteReq.Firm;
		cmd.Param("i_Customer").setAsString()=AccessDeleteReq.Customer;
		cmd.Param("i_Market").setAsString()=AccessDeleteReq.Market;
		cmd.Param("i_Commodity").setAsString()=AccessDeleteReq.Commodity;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* 应答信息 */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* 删除交易控制应答 */
		if(!RspInfo.RspNo){
			strcpy(AccessDeleteRsp.UserID,cmd.Param("o_UserID").asString().GetBuffer(0));
			RspPackage.PutFields(&AccessDeleteRsp,ETSClearFieldNoAccessDeleteRsp);
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeAccessDeleteRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleAccessDeleteReq:数据库操作失败！[%s]",(const char*)x.ErrText());

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
			Connect(); // 断线重连
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:回滚失败！[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* 应答信息 */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeAccessDeleteRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*修改交易控制请求*/
void CDBProcessor::HandleAccessModifyReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* 修改交易控制请求 */
	CETSClearFieldsAccessModifyReq AccessModifyReq;
	Package.GetFields(&AccessModifyReq,ETSClearFieldNoAccessModifyReq);

	// Response
	CETSClearPackage RspPackage;
	/* 修改交易控制应答 */
	CETSClearFieldsAccessModifyRsp AccessModifyRsp;
	/* 应答信息 */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_Access.AccessModify");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* 修改交易控制请求 */
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

		/* 应答信息 */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* 修改交易控制应答 */
		if(!RspInfo.RspNo){
			strcpy(AccessModifyRsp.UserID,cmd.Param("o_UserID").asString().GetBuffer(0));
			RspPackage.PutFields(&AccessModifyRsp,ETSClearFieldNoAccessModifyRsp);
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeAccessModifyRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleAccessModifyReq:数据库操作失败！[%s]",(const char*)x.ErrText());

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
			Connect(); // 断线重连
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:回滚失败！[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* 应答信息 */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeAccessModifyRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*会员结算信息查询请求*/
void CDBProcessor::HandleDayBalanceQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* 会员结算信息查询请求 */
	CETSClearFieldsDayBalanceQueryReq DayBalanceQueryReq;
	Package.GetFields(&DayBalanceQueryReq,ETSClearFieldNoDayBalanceQueryReq);

	// Response
	CETSClearPackage RspPackage;
	/* 会员结算信息查询应答 */
	CETSClearFieldsDayBalanceQueryRsp DayBalanceQueryRsp;
	CBMLRecordSet DayBalanceQueryRspList;
	SACommand *pCursor=NULL;
	/* 应答信息 */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_DayBalance.DayBalanceQuery");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* 会员结算信息查询请求 */
		cmd.Param("i_UserID").setAsString()=DayBalanceQueryReq.UserID;
		cmd.Param("i_HistDate").setAsLong()=DayBalanceQueryReq.HistDate;
		cmd.Param("i_Firm").setAsString()=DayBalanceQueryReq.Firm;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* 应答信息 */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* 会员结算信息查询应答 */
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

					// 重置
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
		logsend(lp,LOG_INFO,"DB","HandleDayBalanceQueryReq:数据库操作失败！[%s]",(const char*)x.ErrText());

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
			Connect(); // 断线重连
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:回滚失败！[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* 应答信息 */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeDayBalanceQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*客户结算信息查询请求*/
void CDBProcessor::HandleCusDayBalQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* 客户结算信息查询请求 */
	CETSClearFieldsCusDayBalQueryReq CusDayBalQueryReq;
	Package.GetFields(&CusDayBalQueryReq,ETSClearFieldNoCusDayBalQueryReq);

	// Response
	CETSClearPackage RspPackage;
	/* 客户结算信息查询应答 */
	CETSClearFieldsCusDayBalQueryRsp CusDayBalQueryRsp;
	CBMLRecordSet CusDayBalQueryRspList;
	SACommand *pCursor=NULL;
	/* 应答信息 */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_CusDayBal.CusDayBalQuery");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* 客户结算信息查询请求 */
		cmd.Param("i_UserID").setAsString()=CusDayBalQueryReq.UserID;
		cmd.Param("i_HistDate").setAsLong()=CusDayBalQueryReq.HistDate;
		cmd.Param("i_Firm").setAsString()=CusDayBalQueryReq.Firm;
		cmd.Param("i_Customer").setAsString()=CusDayBalQueryReq.Customer;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* 应答信息 */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* 客户结算信息查询应答 */
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

					// 重置
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
		logsend(lp,LOG_INFO,"DB","HandleCusDayBalQueryReq:数据库操作失败！[%s]",(const char*)x.ErrText());

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
			Connect(); // 断线重连
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:回滚失败！[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* 应答信息 */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeCusDayBalQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*结算价计算请求*/
void CDBProcessor::HandleClearPriceReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* 结算价计算请求 */
	CETSClearFieldsClearPriceReq ClearPriceReq;
	Package.GetFields(&ClearPriceReq,ETSClearFieldNoClearPriceReq);

	// Response
	CETSClearPackage RspPackage;
	/* 结算价计算应答 */
	CETSClearFieldsClearPriceRsp ClearPriceRsp;
	/* 应答信息 */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_Clearing.ClearPrice");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* 结算价计算请求 */
		cmd.Param("i_UserID").setAsString()=ClearPriceReq.UserID;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* 应答信息 */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* 结算价计算应答 */
		if(!RspInfo.RspNo){
			strcpy(ClearPriceRsp.UserID,cmd.Param("o_UserID").asString().GetBuffer(0));
			RspPackage.PutFields(&ClearPriceRsp,ETSClearFieldNoClearPriceRsp);
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeClearPriceRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleClearPriceReq:数据库操作失败！[%s]",(const char*)x.ErrText());

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
			Connect(); // 断线重连
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:回滚失败！[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* 应答信息 */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeClearPriceRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*结算及整理请求*/
void CDBProcessor::HandleDayClearReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* 结算及整理请求 */
	CETSClearFieldsDayClearReq DayClearReq;
	Package.GetFields(&DayClearReq,ETSClearFieldNoDayClearReq);

	// Response
	CETSClearPackage RspPackage;
	/* 结算及整理应答 */
	CETSClearFieldsDayClearRsp DayClearRsp;
	/* 应答信息 */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_Clearing.DayClear");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* 结算及整理请求 */
		cmd.Param("i_UserID").setAsString()=DayClearReq.UserID;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* 应答信息 */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* 结算及整理应答 */
		if(!RspInfo.RspNo){
			strcpy(DayClearRsp.UserID,cmd.Param("o_UserID").asString().GetBuffer(0));
			RspPackage.PutFields(&DayClearRsp,ETSClearFieldNoDayClearRsp);
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeDayClearRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleDayClearReq:数据库操作失败！[%s]",(const char*)x.ErrText());

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
			Connect(); // 断线重连
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:回滚失败！[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* 应答信息 */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeDayClearRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*每日外币兑人民币汇率表查询请求*/
void CDBProcessor::HandleFxRatesQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* 每日外币兑人民币汇率表查询请求 */
	CETSClearFieldsFxRatesQueryReq FxRatesQueryReq;
	Package.GetFields(&FxRatesQueryReq,ETSClearFieldNoFxRatesQueryReq);

	// Response
	CETSClearPackage RspPackage;
	/* 每日外币兑人民币汇率表查询应答 */
	CETSClearFieldsFxRatesQueryRsp FxRatesQueryRsp;
	CBMLRecordSet FxRatesQueryRspList;
	SACommand *pCursor=NULL;
	/* 应答信息 */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_FxRates.FxRatesQuery");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* 每日外币兑人民币汇率表查询请求 */
		cmd.Param("i_UserID").setAsString()=FxRatesQueryReq.UserID;
		cmd.Param("i_FxRatesDate").setAsLong()=FxRatesQueryReq.FxRatesDate;
		cmd.Param("i_FxRatesCurrency").setAsString()=FxRatesQueryReq.FxRatesCurrency;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* 应答信息 */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* 每日外币兑人民币汇率表查询应答 */
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

					// 重置
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
		logsend(lp,LOG_INFO,"DB","HandleFxRatesQueryReq:数据库操作失败！[%s]",(const char*)x.ErrText());

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
			Connect(); // 断线重连
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:回滚失败！[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* 应答信息 */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeFxRatesQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*每日外币兑人民币汇率表增加请求*/
void CDBProcessor::HandleFxRatesAddReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* 每日外币兑人民币汇率表增加请求 */
	CETSClearFieldsFxRatesAddReq FxRatesAddReq;
	Package.GetFields(&FxRatesAddReq,ETSClearFieldNoFxRatesAddReq);

	// Response
	CETSClearPackage RspPackage;
	/* 每日外币兑人民币汇率表增加应答 */
	CETSClearFieldsFxRatesAddRsp FxRatesAddRsp;
	/* 应答信息 */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_FxRates.FxRatesAdd");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* 每日外币兑人民币汇率表增加请求 */
		cmd.Param("i_UserID").setAsString()=FxRatesAddReq.UserID;
		cmd.Param("i_FxRatesDate").setAsLong()=FxRatesAddReq.FxRatesDate;
		cmd.Param("i_FxRatesCurrency").setAsString()=FxRatesAddReq.FxRatesCurrency;
		cmd.Param("i_FxRatesRate").setAsDouble()=FxRatesAddReq.FxRatesRate;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* 应答信息 */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* 每日外币兑人民币汇率表增加应答 */
		if(!RspInfo.RspNo){
			strcpy(FxRatesAddRsp.UserID,cmd.Param("o_UserID").asString().GetBuffer(0));
			RspPackage.PutFields(&FxRatesAddRsp,ETSClearFieldNoFxRatesAddRsp);
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeFxRatesAddRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleFxRatesAddReq:数据库操作失败！[%s]",(const char*)x.ErrText());

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
			Connect(); // 断线重连
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:回滚失败！[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* 应答信息 */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeFxRatesAddRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*每日外币兑人民币汇率表删除请求*/
void CDBProcessor::HandleFxRatesDeleteReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* 每日外币兑人民币汇率表删除请求 */
	CETSClearFieldsFxRatesDeleteReq FxRatesDeleteReq;
	Package.GetFields(&FxRatesDeleteReq,ETSClearFieldNoFxRatesDeleteReq);

	// Response
	CETSClearPackage RspPackage;
	/* 每日外币兑人民币汇率表删除应答 */
	CETSClearFieldsFxRatesDeleteRsp FxRatesDeleteRsp;
	/* 应答信息 */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_FxRates.FxRatesDelete");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* 每日外币兑人民币汇率表删除请求 */
		cmd.Param("i_UserID").setAsString()=FxRatesDeleteReq.UserID;
		cmd.Param("i_FxRatesDate").setAsLong()=FxRatesDeleteReq.FxRatesDate;
		cmd.Param("i_FxRatesCurrency").setAsString()=FxRatesDeleteReq.FxRatesCurrency;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* 应答信息 */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* 每日外币兑人民币汇率表删除应答 */
		if(!RspInfo.RspNo){
			strcpy(FxRatesDeleteRsp.UserID,cmd.Param("o_UserID").asString().GetBuffer(0));
			RspPackage.PutFields(&FxRatesDeleteRsp,ETSClearFieldNoFxRatesDeleteRsp);
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeFxRatesDeleteRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleFxRatesDeleteReq:数据库操作失败！[%s]",(const char*)x.ErrText());

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
			Connect(); // 断线重连
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:回滚失败！[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* 应答信息 */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeFxRatesDeleteRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*每日外币兑人民币汇率表修改请求*/
void CDBProcessor::HandleFxRatesModifyReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* 每日外币兑人民币汇率表修改请求 */
	CETSClearFieldsFxRatesModifyReq FxRatesModifyReq;
	Package.GetFields(&FxRatesModifyReq,ETSClearFieldNoFxRatesModifyReq);

	// Response
	CETSClearPackage RspPackage;
	/* 每日外币兑人民币汇率表修改应答 */
	CETSClearFieldsFxRatesModifyRsp FxRatesModifyRsp;
	/* 应答信息 */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_FxRates.FxRatesModify");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* 每日外币兑人民币汇率表修改请求 */
		cmd.Param("i_UserID").setAsString()=FxRatesModifyReq.UserID;
		cmd.Param("i_FxRatesDate").setAsLong()=FxRatesModifyReq.FxRatesDate;
		cmd.Param("i_FxRatesCurrency").setAsString()=FxRatesModifyReq.FxRatesCurrency;
		cmd.Param("i_FxRatesRate").setAsDouble()=FxRatesModifyReq.FxRatesRate;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* 应答信息 */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* 每日外币兑人民币汇率表修改应答 */
		if(!RspInfo.RspNo){
			strcpy(FxRatesModifyRsp.UserID,cmd.Param("o_UserID").asString().GetBuffer(0));
			RspPackage.PutFields(&FxRatesModifyRsp,ETSClearFieldNoFxRatesModifyRsp);
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeFxRatesModifyRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleFxRatesModifyReq:数据库操作失败！[%s]",(const char*)x.ErrText());

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
			Connect(); // 断线重连
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:回滚失败！[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* 应答信息 */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeFxRatesModifyRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*做市商行情查询请求*/
void CDBProcessor::HandleMarketMakerQuotesReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* 做市商行情查询请求 */
	CETSClearFieldsMarketMakerQuotesReq MarketMakerQuotesReq;
	Package.GetFields(&MarketMakerQuotesReq,ETSClearFieldNoMarketMakerQuotesReq);

	// Response
	CETSClearPackage RspPackage;
	/* 做市商行情快照 */
	CETSClearFieldsMarketMakerQuotesPush MarketMakerQuotesPush;
	CBMLRecordSet MarketMakerQuotesList;
	SACommand *pCursor=NULL;
	/* 应答信息 */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_Quot.MarketMakerQuotesQuery");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* 做市商行情查询请求 */
		cmd.Param("i_UserID").setAsString()=MarketMakerQuotesReq.UserID;
		cmd.Param("i_Market").setAsString()=MarketMakerQuotesReq.Market;
		cmd.Param("i_Commodity").setAsString()=MarketMakerQuotesReq.Commodity;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* 应答信息 */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* 做市商行情快照 */
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

					// 重置
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
		logsend(lp,LOG_INFO,"DB","HandleMarketMakerQuotesReq:数据库操作失败！[%s]",(const char*)x.ErrText());

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
			Connect(); // 断线重连
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:回滚失败！[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* 应答信息 */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeMarketMakerQuotesRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*做市商会员查询请求*/
void CDBProcessor::HandleMakerFirmQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* 做市商会员查询请求 */
	CETSClearFieldsMakerFirmQueryReq MakerFirmQueryReq;
	Package.GetFields(&MakerFirmQueryReq,ETSClearFieldNoMakerFirmQueryReq);

	// Response
	CETSClearPackage RspPackage;
	/* 做市商会员查询应答 */
	CETSClearFieldsMakerFirmQueryRsp MakerFirmQueryRsp;
	CBMLRecordSet MakerFirmQueryRspList;
	SACommand *pCursor=NULL;
	/* 应答信息 */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_MakerFirm.MakerFirmQuery");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* 做市商会员查询请求 */
		cmd.Param("i_UserID").setAsString()=MakerFirmQueryReq.UserID;
		cmd.Param("i_Firm").setAsString()=MakerFirmQueryReq.Firm;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* 应答信息 */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* 做市商会员查询应答 */
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

					// 重置
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
		logsend(lp,LOG_INFO,"DB","HandleMakerFirmQueryReq:数据库操作失败！[%s]",(const char*)x.ErrText());

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
			Connect(); // 断线重连
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:回滚失败！[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* 应答信息 */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeMakerFirmQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*做市商会员资格增加请求*/
void CDBProcessor::HandleMakerFirmAddReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* 做市商会员增加请求 */
	CETSClearFieldsMakerFirmAddReq MakerFirmAddReq;
	Package.GetFields(&MakerFirmAddReq,ETSClearFieldNoMakerFirmAddReq);

	// Response
	CETSClearPackage RspPackage;
	/* 每日做市商会员增加应答 */
	CETSClearFieldsMakerFirmAddRsp MakerFirmAddRsp;
	/* 应答信息 */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_MakerFirm.MakerFirmAdd");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* 做市商会员增加请求 */
		cmd.Param("i_UserID").setAsString()=MakerFirmAddReq.UserID;
		cmd.Param("i_Firm").setAsString()=MakerFirmAddReq.Firm;
		cmd.Param("i_SelfCustomerID").setAsString()=MakerFirmAddReq.SelfCustomerID;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* 应答信息 */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* 每日做市商会员增加应答 */
		if(!RspInfo.RspNo){
			strcpy(MakerFirmAddRsp.UserID,cmd.Param("o_UserID").asString().GetBuffer(0));
			RspPackage.PutFields(&MakerFirmAddRsp,ETSClearFieldNoMakerFirmAddRsp);
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeMakerFirmAddRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleMakerFirmAddReq:数据库操作失败！[%s]",(const char*)x.ErrText());

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
			Connect(); // 断线重连
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:回滚失败！[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* 应答信息 */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeMakerFirmAddRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*做市商会员资格删除请求*/
void CDBProcessor::HandleMakerFirmDeleteReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* 做市商会员删除请求 */
	CETSClearFieldsMakerFirmDeleteReq MakerFirmDeleteReq;
	Package.GetFields(&MakerFirmDeleteReq,ETSClearFieldNoMakerFirmDeleteReq);

	// Response
	CETSClearPackage RspPackage;
	/* 做市商会员删除应答 */
	CETSClearFieldsMakerFirmDeleteRsp MakerFirmDeleteRsp;
	/* 应答信息 */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_MakerFirm.MakerFirmDelete");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* 做市商会员删除请求 */
		cmd.Param("i_UserID").setAsString()=MakerFirmDeleteReq.UserID;
		cmd.Param("i_Firm").setAsString()=MakerFirmDeleteReq.Firm;
		cmd.Param("i_SelfCustomerID").setAsString()=MakerFirmDeleteReq.SelfCustomerID;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* 应答信息 */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* 做市商会员删除应答 */
		if(!RspInfo.RspNo){
			strcpy(MakerFirmDeleteRsp.UserID,cmd.Param("o_UserID").asString().GetBuffer(0));
			RspPackage.PutFields(&MakerFirmDeleteRsp,ETSClearFieldNoMakerFirmDeleteRsp);
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeMakerFirmDeleteRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleMakerFirmDeleteReq:数据库操作失败！[%s]",(const char*)x.ErrText());

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
			Connect(); // 断线重连
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:回滚失败！[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* 应答信息 */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeMakerFirmDeleteRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*做市商客户查询请求*/
void CDBProcessor::HandleMakerCustomerQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* 做市商客户查询请求 */
	CETSClearFieldsMakerCustomerQueryReq MakerCustomerQueryReq;
	Package.GetFields(&MakerCustomerQueryReq,ETSClearFieldNoMakerCustomerQueryReq);

	// Response
	CETSClearPackage RspPackage;
	/* 做市商客户查询应答 */
	CETSClearFieldsMakerCustomerQueryRsp MakerCustomerQueryRsp;
	CBMLRecordSet MakerCustomerQueryRspList;
	SACommand *pCursor=NULL;
	/* 应答信息 */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_MakerCustomer.MakerCustomerQuery");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* 做市商客户查询请求 */
		cmd.Param("i_UserID").setAsString()=MakerCustomerQueryReq.UserID;
		cmd.Param("i_Customer").setAsString()=MakerCustomerQueryReq.Customer;
		cmd.Param("i_Firm").setAsString()=MakerCustomerQueryReq.Firm;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* 应答信息 */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* 做市商客户查询应答 */
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

					// 重置
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
		logsend(lp,LOG_INFO,"DB","HandleMakerCustomerQueryReq:数据库操作失败！[%s]",(const char*)x.ErrText());

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
			Connect(); // 断线重连
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:回滚失败！[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* 应答信息 */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeMakerCustomerQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*做市商客户资格增加请求*/
void CDBProcessor::HandleMakerCustomerAddReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* 做市商客户增加请求 */
	CETSClearFieldsMakerCustomerAddReq MakerCustomerAddReq;
	Package.GetFields(&MakerCustomerAddReq,ETSClearFieldNoMakerCustomerAddReq);

	// Response
	CETSClearPackage RspPackage;
	/* 做市商客户增加应答 */
	CETSClearFieldsMakerCustomerAddRsp MakerCustomerAddRsp;
	/* 应答信息 */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_MakerCustomer.MakerCustomerAdd");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* 做市商客户增加请求 */
		cmd.Param("i_UserID").setAsString()=MakerCustomerAddReq.UserID;
		cmd.Param("i_Customer").setAsString()=MakerCustomerAddReq.Customer;
		cmd.Param("i_Firm").setAsString()=MakerCustomerAddReq.Firm;
		cmd.Param("i_MakeMarketFirmID").setAsString()=MakerCustomerAddReq.MakeMarketFirmID;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* 应答信息 */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* 做市商客户增加应答 */
		if(!RspInfo.RspNo){
			strcpy(MakerCustomerAddRsp.UserID,cmd.Param("o_UserID").asString().GetBuffer(0));
			RspPackage.PutFields(&MakerCustomerAddRsp,ETSClearFieldNoMakerCustomerAddRsp);
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeMakerCustomerAddRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleMakerCustomerAddReq:数据库操作失败！[%s]",(const char*)x.ErrText());

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
			Connect(); // 断线重连
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:回滚失败！[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* 应答信息 */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeMakerCustomerAddRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*做市商客户资格删除请求*/
void CDBProcessor::HandleMakerCustomerDeleteReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* 做市商客户资格删除请求 */
	CETSClearFieldsMakerCustomerDeleteReq MakerCustomerDeleteReq;
	Package.GetFields(&MakerCustomerDeleteReq,ETSClearFieldNoMakerCustomerDeleteReq);

	// Response
	CETSClearPackage RspPackage;
	/* 做市商客户资格删除应答 */
	CETSClearFieldsMakerCustomerDeleteRsp MakerCustomerDeleteRsp;
	/* 应答信息 */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_MakerCustomer.MakerCustomerDelete");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* 做市商客户资格删除请求 */
		cmd.Param("i_UserID").setAsString()=MakerCustomerDeleteReq.UserID;
		cmd.Param("i_Customer").setAsString()=MakerCustomerDeleteReq.Customer;
		cmd.Param("i_Firm").setAsString()=MakerCustomerDeleteReq.Firm;
		cmd.Param("i_MakeMarketFirmID").setAsString()=MakerCustomerDeleteReq.MakeMarketFirmID;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* 应答信息 */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* 做市商客户资格删除应答 */
		if(!RspInfo.RspNo){
			strcpy(MakerCustomerDeleteRsp.UserID,cmd.Param("o_UserID").asString().GetBuffer(0));
			RspPackage.PutFields(&MakerCustomerDeleteRsp,ETSClearFieldNoMakerCustomerDeleteRsp);
		}
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeMakerCustomerDeleteRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
	catch(SAException &x)
	{
		logsend(lp,LOG_INFO,"DB","HandleMakerCustomerDeleteReq:数据库操作失败！[%s]",(const char*)x.ErrText());

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
			Connect(); // 断线重连
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:回滚失败！[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* 应答信息 */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeMakerCustomerDeleteRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*条件单查询请求*/
void CDBProcessor::HandleConditionOrderQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* 条件单查询请求 */
	CETSClearFieldsConditionOrderQueryReq ConditionOrderQueryReq;
	Package.GetFields(&ConditionOrderQueryReq,ETSClearFieldNoConditionOrderQueryReq);

	// Response
	CETSClearPackage RspPackage;
	/* 条件单查询应答 */
	CETSClearFieldsConditionOrderPush ConditionOrderPush;
	CBMLRecordSet ConditionOrderQueryRspList;
	SACommand *pCursor=NULL;
	/* 应答信息 */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_ConditionOrder.ConditionOrderQuery");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* 条件单查询请求 */
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

		/* 应答信息 */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* 条件单查询应答 */
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

					// 重置
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
		logsend(lp,LOG_INFO,"DB","HandleConditionOrderQueryReq:数据库操作失败！[%s]",(const char*)x.ErrText());

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
			Connect(); // 断线重连
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:回滚失败！[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* 应答信息 */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeConditionOrderQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*账户中心账户创建请求*/
void CDBProcessor::HandleAccountCenterCreatAccountReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* 账户中心账户创建请求 */
	CETSClearFieldsAccountCenterCreatAccountReq AccountCenterCreatAccountReq;
	Package.GetFields(&AccountCenterCreatAccountReq,ETSClearFieldNoAccountCenterCreatAccountReq);

	// Response
	CETSClearPackage RspPackage;
	/* 账户中心账户创建应答 */
	CETSClearFieldsAccountCenterCreatAccountRsp AccountCenterCreatAccountRsp;
	/* 应答信息 */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_AccountCenter.AccountCenterCreatAccount");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* 账户中心账户创建请求 */
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

		/* 应答信息 */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* 账户中心账户创建应答 */
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
		logsend(lp,LOG_INFO,"DB","HandleAccountCenterCreatAccountReq:数据库操作失败！[%s]",(const char*)x.ErrText());

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
			Connect(); // 断线重连
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:回滚失败！[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* 应答信息 */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeAccountCenterCreatAccountRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*账户中心出入金请求*/
void CDBProcessor::HandleAccCenterIOMoneyReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* 账户中心出入金请求 */
	CETSClearFieldsAccCenterIOMoneyReq AccCenterIOMoneyReq;
	Package.GetFields(&AccCenterIOMoneyReq,ETSClearFieldNoAccCenterIOMoneyReq);

	// Response
	CETSClearPackage RspPackage;
	/* 账户中心出入金应答 */
	CETSClearFieldsAccCenterIOMoneyRsp AccCenterIOMoneyRsp;
	/* 应答信息 */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_AccCenterIOMoney.AccCenterIOMoney");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* 账户中心出入金请求 */
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

		/* 应答信息 */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* 账户中心出入金应答 */
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
		logsend(lp,LOG_INFO,"DB","HandleAccCenterIOMoneyReq:数据库操作失败！[%s]",(const char*)x.ErrText());

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
			Connect(); // 断线重连
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:回滚失败！[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* 应答信息 */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeAccCenterIOMoneyRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*账户中心资金流水查询请求*/
void CDBProcessor::HandleAccCenterIOMoneyQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* 账户中心资金流水查询请求 */
	CETSClearFieldsAccCenterIOMoneyQueryReq AccCenterIOMoneyQueryReq;
	Package.GetFields(&AccCenterIOMoneyQueryReq,ETSClearFieldNoAccCenterIOMoneyQueryReq);

	// Response
	CETSClearPackage RspPackage;
	/* 账户中心资金流水查询应答 */
	CETSClearFieldsAccCenterIOMoneyQueryRsp AccCenterIOMoneyQueryRsp;
	CBMLRecordSet AccCenterIOMoneyQueryRspList;
	SACommand *pCursor=NULL;
	/* 应答信息 */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_AccCenterIOMoney.AccCenterIOMoneyQuery");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* 账户中心资金流水查询请求 */
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

		/* 应答信息 */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* 账户中心资金流水查询应答 */
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

					// 重置
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
		logsend(lp,LOG_INFO,"DB","HandleAccCenterIOMoneyQueryReq:数据库操作失败！[%s]",(const char*)x.ErrText());

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
			Connect(); // 断线重连
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:回滚失败！[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* 应答信息 */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeAccCenterIOMoneyQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*电子货单出入请求*/
void CDBProcessor::HandleIOStockReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* 电子货单出入请求 */
	CETSClearFieldsIOStockReq IOStockReq;
	Package.GetFields(&IOStockReq,ETSClearFieldNoIOStockReq);

	// Response
	CETSClearPackage RspPackage;
	/* 电子货单出入应答 */
	CETSClearFieldsIOStockRsp IOStockRsp;
	/* 应答信息 */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_Goods.IOStock");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* 电子货单出入请求 */
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

		/* 应答信息 */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* 电子货单出入应答 */
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
		logsend(lp,LOG_INFO,"DB","HandleIOStockReq:数据库操作失败！[%s]",(const char*)x.ErrText());

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
			Connect(); // 断线重连
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:回滚失败！[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* 应答信息 */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeIOStockRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*账户中心账户查询请求*/
void CDBProcessor::HandleAccountCenterAccountQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* 账户中心账户查询请求 */
	CETSClearFieldsAccountCenterAccountQueryReq AccountCenterAccountQueryReq;
	Package.GetFields(&AccountCenterAccountQueryReq,ETSClearFieldNoAccountCenterAccountQueryReq);

	// Response
	CETSClearPackage RspPackage;
	/* 账户中心账户查询应答 */
	CETSClearFieldsAccountCenterAccountQueryRsp AccountCenterAccountQueryRsp;
	/* 应答信息 */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_AccountCenter.AccountCenterAccountQuery");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* 账户中心账户查询请求 */
		cmd.Param("i_UserID").setAsString()=AccountCenterAccountQueryReq.UserID;
		cmd.Param("i_DocumentType").setAsString()=AccountCenterAccountQueryReq.DocumentType;
		cmd.Param("i_IdentificationNumber").setAsString()=AccountCenterAccountQueryReq.IdentificationNumber;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* 应答信息 */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* 账户中心账户查询应答 */
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
		logsend(lp,LOG_INFO,"DB","HandleAccountCenterAccountQueryReq:数据库操作失败！[%s]",(const char*)x.ErrText());

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
			Connect(); // 断线重连
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:回滚失败！[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* 应答信息 */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeAccountCenterAccountQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*账户中心账户余额查询请求*/
void CDBProcessor::HandleAccCenterIOMoneyBalanceQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* 账户中心账户余额查询请求 */
	CETSClearFieldsAccCenterIOMoneyBalanceQueryReq AccCenterIOMoneyBalanceQueryReq;
	Package.GetFields(&AccCenterIOMoneyBalanceQueryReq,ETSClearFieldNoAccCenterIOMoneyBalanceQueryReq);

	// Response
	CETSClearPackage RspPackage;
	/* 账户中心账户余额查询应答 */
	CETSClearFieldsAccCenterIOMoneyBalanceQueryRsp AccCenterIOMoneyBalanceQueryRsp;
	/* 应答信息 */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_AccCenterIOMoney.AccCenterIOMoneyBalanceQuery");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* 账户中心账户余额查询请求 */
		cmd.Param("i_UserID").setAsString()=AccCenterIOMoneyBalanceQueryReq.UserID;
		cmd.Param("i_Firm").setAsString()=AccCenterIOMoneyBalanceQueryReq.Firm;
		cmd.Param("i_Customer").setAsString()=AccCenterIOMoneyBalanceQueryReq.Customer;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* 应答信息 */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* 账户中心账户余额查询应答 */
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
		logsend(lp,LOG_INFO,"DB","HandleAccCenterIOMoneyBalanceQueryReq:数据库操作失败！[%s]",(const char*)x.ErrText());

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
			Connect(); // 断线重连
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:回滚失败！[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* 应答信息 */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeAccCenterIOMoneyBalanceQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*电子货单查询请求*/
void CDBProcessor::HandleIOStockBalanceQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* 电子货单查询请求 */
	CETSClearFieldsIOStockBalanceQueryReq IOStockBalanceQueryReq;
	Package.GetFields(&IOStockBalanceQueryReq,ETSClearFieldNoIOStockBalanceQueryReq);

	// Response
	CETSClearPackage RspPackage;
	/* 电子货单查询应答 */
	CETSClearFieldsIOStockBalanceQueryRsp IOStockBalanceQueryRsp;
	/* 应答信息 */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_Goods.IOStockBalanceQuery");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* 电子货单查询请求 */
		cmd.Param("i_UserID").setAsString()=IOStockBalanceQueryReq.UserID;
		cmd.Param("i_Firm").setAsString()=IOStockBalanceQueryReq.Firm;
		cmd.Param("i_Customer").setAsString()=IOStockBalanceQueryReq.Customer;
		cmd.Param("i_Commodity").setAsString()=IOStockBalanceQueryReq.Commodity;

		// Execute
		cmd.Execute();

		// Output
		RspPackage.Init(Package.GetRequestID(),m_pSpi->m_pkgbuf,ETS_PACKAGE_SIZE);

		/* 应答信息 */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* 电子货单查询应答 */
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
		logsend(lp,LOG_INFO,"DB","HandleIOStockBalanceQueryReq:数据库操作失败！[%s]",(const char*)x.ErrText());

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
			Connect(); // 断线重连
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:回滚失败！[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* 应答信息 */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeIOStockBalanceQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

/*电子货单流水查询请求*/
void CDBProcessor::HandleIOStockQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package)
{
	SACommand cmd;    // command object

	// Request
	/* 电子货单流水查询请求 */
	CETSClearFieldsIOStockQueryReq IOStockQueryReq;
	Package.GetFields(&IOStockQueryReq,ETSClearFieldNoIOStockQueryReq);

	// Response
	CETSClearPackage RspPackage;
	/* 电子货单流水查询应答 */
	CETSClearFieldsIOStockQueryRsp IOStockQueryRsp;
	CBMLRecordSet IOStockQueryRspList;
	SACommand *pCursor=NULL;
	/* 应答信息 */
	CETSClearFieldsRspInfo RspInfo;

	try
	{
		cmd.setConnection(&m_Connection);
		cmd.setCommandText("Pack_Goods.IOStockQuery");

		// Input

		cmd.Param("i_FrontSessionNo").setAsLong()=SessionNo;
		cmd.Param("i_ClientSessionNo").setAsLong()=SeqNo;
		/* 电子货单流水查询请求 */
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

		/* 应答信息 */
		RspInfo.RspNo=cmd.Param("o_RspNo").asShort();
		strcpy(RspInfo.RspDesc,cmd.Param("o_RspDesc").asString().GetBuffer(0));
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);

		/* 电子货单流水查询应答 */
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

					// 重置
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
		logsend(lp,LOG_INFO,"DB","HandleIOStockQueryReq:数据库操作失败！[%s]",(const char*)x.ErrText());

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
			Connect(); // 断线重连
			break;
		default:
			RspInfo.RspNo=ETSClearConstRspNoDBOperateFailed;
			sprintf(RspInfo.RspDesc,"HandleVarietyQueryReq:%s[%s]",ETSClearConstCommentRspNoDBOperateFailed,(const char*)x.ErrText());
			// Rollback
			try{
				m_Connection.Rollback();
			}catch(SAException &xx){
				logsend(lp,LOG_INFO,"DB","HandleVarietyQueryReq:回滚失败！[%s]",(const char*)xx.ErrText());
			}
			break;
		}

		/* 应答信息 */
		RspPackage.PutFields(&RspInfo,ETSClearFieldNoRspInfo);
		m_pSpi->m_pApi->ReqService(0,SessionNo,ETSClearMsgTypeIOStockQueryRsp,SeqNo,RspPackage.GetBuffer(),RspPackage.GetLength(),NULL,0,RouterNo);
	}
}

