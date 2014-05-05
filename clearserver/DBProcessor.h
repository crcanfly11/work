#ifndef __DB_PROCESSOR_H__
#define __DB_PROCESSOR_H__

#include "os.h"
#include "ETSClearFieldDefine.h"
#include "BMLPackage.h"
#include "ETSClearPackage.h"
#include "BMLRecordSet.h"
#include "SQLAPI.h"
#include <string>
#include "clearserver.h"

class CARPSpiImp;
class CDBProcessor
{
public:
	CDBProcessor(std::string SID,std::string UserName,std::string Password,boost::asio::io_service& io_service);
	~CDBProcessor();

	int Connect();
	void SetSpi(CARPSpiImp* pSpi);

	void HandlePackage(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT ServiceNo,UINT SeqNo,CETSClearPackage& Package);
	void HandleDBTimeout(const boost::system::error_code& error); // Heartbeat Check

	void HandleLogonReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* 登陆请求 */
	void HandleLogoffReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* 登出请求 */
	void HandleMenuQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* 菜单查询请求 */
	void HandleMenuAddReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* 菜单增加请求 */
	void HandleMenuDeleteReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* 菜单删除请求 */
	void HandleOperAddReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* 操作员增加请求 */
	void HandleOperDeleteReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* 操作员删除请求 */
	void HandleChangePasswordReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* 修改密码请求 */
	void HandleQuotReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* 行情请求 */
	void HandleSpotQuotReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* 现货行情请求 */
	void HandleMarketReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* 市场请求 */
	void HandleOrderQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* 订单查询请求 */
	void HandleTradeQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* 成交查询请求 */
	void HandleHoldingQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* 持仓查询请求 */
	void HandleFundsQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* 资金查询请求 */
	void HandleCommodityQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* 商品查询请求 */
	void HandleSpotPropertyQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* 现货属性查询请求 */
	void HandleSpotPropertyLookupQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* 现货属性下拉列表查询请求 */
	void HandleLocationQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* 现货交货地点查询请求 */
	void HandleLogQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* 日志查询请求 */
	void HandleFirmQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* 查询会员请求 */
	void HandleFirmAddReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* 增加会员请求 */
	void HandleFirmModifyReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* 修改会员请求 */
	void HandleFirmDeleteReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* 删除会员请求 */
	void HandleTraderQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* 查询交易员请求 */
	void HandleTraderAddReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* 增加交易员请求 */
	void HandleTraderModifyReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* 修改交易员请求 */
	void HandleTraderDeleteReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* 删除交易员请求 */
	void HandleCustomerQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* 查询客户请求 */
	void HandleCustomerAddReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* 增加客户请求 */
	void HandleCustomerModifyReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* 修改客户请求 */
	void HandleCustomerDeleteReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* 删除客户请求 */
	void HandleOperQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* 查询操作员请求 */
	void HandleMarketAddReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* 增加市场请求 */
	void HandleMarketModifyReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* 修改市场请求 */
	void HandleMarketDeleteReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* 删除市场请求 */
	void HandleCommodityAddReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* 增加商品请求 */
	void HandleCommodityModifyReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* 修改商品请求 */
	void HandleCommodityDeleteReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* 删除商品请求 */
	void HandleCommodityPropertyAddReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* 增加商品属性请求 */
	void HandleCommodityPropertyQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* 查询商品属性请求 */
	void HandleCommodityPropertyDeleteReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* 删除商品属性请求 */
	void HandlePropertyLookupAddReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* 增加商品属性下拉选项请求 */
	void HandlePropertyLookupQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* 查询商品属性下拉选项请求 */
	void HandlePropertyLookupDeleteReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* 删除商品属性下拉选项请求 */
	void HandleVarietyQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* 查询品种请求 */
	void HandleVarietyAddReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* 增加品种请求 */
	void HandleVarietyModifyReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* 修改品种请求 */
	void HandleVarietyDeleteReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* 删除品种请求 */
	void HandleTradingTimeQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* 查询交易节请求 */
	void HandleTradingTimeAddReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* 增加交易节请求 */
	void HandleTradingTimeModifyReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* 修改交易节请求 */
	void HandleTradingTimeDeleteReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* 删除交易节请求 */
	void HandleLocationAddReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* 增加交货地点请求 */
	void HandleLocationModifyReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* 修改交货地点请求 */
	void HandleLocationDeleteReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* 删除交货地点请求 */
	void HandleWareHouseQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* 查询商品存储仓库请求 */
	void HandleWareHouseAddReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* 增加商品存储仓库请求 */
	void HandleWareHouseModifyReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* 修改商品存储仓库请求 */
	void HandleWareHouseDeleteReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* 删除商品存储仓库请求 */
	void HandleDHouseQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* 查询交割仓库请求 */
	void HandleDHouseAddReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* 增加交割仓库请求 */
	void HandleDHouseModifyReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* 修改交割仓库请求 */
	void HandleDHouseDeleteReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* 删除交割仓库请求 */
	void HandleUserQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* 用户信息查询请求 */
	void HandleUserAddReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* 用户信息增加请求 */
	void HandleUserDeleteReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* 用户信息删除请求 */
	void HandleUserModifyReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* 用户信息修改请求 */
	void HandleDepartmentQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* 部门信息查询请求 */
	void HandleDepartmentAddReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* 部门信息增加请求 */
	void HandleDepartmentModifyReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* 部门信息修改请求 */
	void HandleDepartmentDeleteReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* 部门信息删除请求 */
	void HandlePositionQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* 岗位信息查询请求 */
	void HandlePositionAddReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* 岗位信息增加请求 */
	void HandlePositionModifyReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* 岗位信息修改请求 */
	void HandlePositionDeleteReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* 岗位信息删除请求 */
	void HandleDepAuthorityQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* 部门权限查询请求 */
	void HandleAuthorityQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* 全权限查询请求 */
	void HandleDepAuthorityAddReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* 部门权限增加请求 */
	void HandleDepAuthorityDeleteReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* 部门权限删除请求 */
	void HandlePosAuthorityQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* 岗位权限查询请求 */
	void HandlePosAuthorityAddReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* 岗位权限增加请求 */
	void HandlePosAuthorityDeleteReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* 岗位权限删除请求 */
	void HandleUseAuthorityQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* 用户权限查询请求 */
	void HandleUseAuthorityAddReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* 用户权限增加请求 */
	void HandleUseAuthorityDeleteReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* 用户权限删除请求 */
	void HandleCommodityHistQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* 查询交易商品合约历史请求 */
	void HandleGoodsQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* 电子货单查询请求 */
	void HandleClearingQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* 会员清算信息查询请求 */
	void HandleCusClearingQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* 客户清算信息查询请求 */
	void HandleAccessQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* 交易控制查询请求 */
	void HandleAccessAddReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* 新增交易控制请求 */
	void HandleAccessDeleteReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* 删除交易控制请求 */
	void HandleAccessModifyReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* 修改交易控制请求 */
	void HandleDayBalanceQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* 会员结算信息查询请求 */
	void HandleCusDayBalQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* 客户结算信息查询请求 */
	void HandleClearPriceReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* 结算价计算请求 */
	void HandleDayClearReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* 结算及整理请求 */
	void HandleFxRatesQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* 每日外币兑人民币汇率表查询请求 */
	void HandleFxRatesAddReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* 每日外币兑人民币汇率表增加请求 */
	void HandleFxRatesDeleteReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* 每日外币兑人民币汇率表删除请求 */
	void HandleFxRatesModifyReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* 每日外币兑人民币汇率表修改请求 */
	void HandleMarketMakerQuotesReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* 做市商行情查询请求 */
	void HandleMakerFirmQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* 做市商会员查询请求 */
	void HandleMakerFirmAddReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* 做市商会员资格增加请求 */
	void HandleMakerFirmDeleteReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* 做市商会员资格删除请求 */
	void HandleMakerCustomerQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* 做市商客户查询请求 */
	void HandleMakerCustomerAddReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* 做市商客户资格增加请求 */
	void HandleMakerCustomerDeleteReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* 做市商客户资格删除请求 */
	void HandleConditionOrderQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* 条件单查询请求 */
	void HandleAccountCenterCreatAccountReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* 账户中心账户创建请求 */
	void HandleAccCenterIOMoneyReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* 账户中心出入金请求 */
	void HandleAccCenterIOMoneyQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* 账户中心资金流水查询请求 */
	void HandleIOStockReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* 电子货单出入请求 */
	void HandleAccountCenterAccountQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* 账户中心账户查询请求 */
	void HandleAccCenterIOMoneyBalanceQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* 账户中心账户余额查询请求 */
	void HandleIOStockBalanceQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* 电子货单查询请求 */
	void HandleIOStockQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* 电子货单流水查询请求 */

	SAConnection m_Connection;
	std::string m_SID;
	std::string m_UserName;
	std::string m_Password;
	CARPSpiImp* m_pSpi;
	boost::asio::deadline_timer m_dbtimer;	// DB Connect Timer
	boost::asio::io_service& m_io;
	bool m_bConnected;
};

#endif
