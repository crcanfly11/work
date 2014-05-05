	#ifndef _ACCCENTERADAPTER_H
#define _ACCCENTERADAPTER_H

#include "clearserver.h"

#define ETS_PACKAGE_SIZE 8000
#define TCP_PACKAGE_SIZE 8000
#define TIME_TIMINGPOLL_MAX 10
#define TIME_MAX_COUNT 1

struct stSessionInfo_t
{
	UINT RouterNo;
	UINT SessionNo;
	UINT SeqNo;
	UINT RequestID;
	ETSClearFieldTypeSerialNo LocalSerialNo;
	ETSClearFieldTypeUserID UserID;
	ETSClearFieldTypeCustomerID Customer;
	ETSClearFieldTypeIODirect IODirect;
	ETSClearFieldTypeFirmID Firm;
	ETSClearFieldTypeValue IO_Amount;
	ETSClearFieldTypeCommodityID Commodity;	/* 合约 */
	ETSClearFieldTypeQty IO_Goods_Qty;	/* 出入货单数量 */
	ETSClearFieldTypeAction Action;	/* 动作 */
};

class CARPSpi;
class CDBProcessor;
class CAccCenterAdapter
{
public:
	CAccCenterAdapter(CDBProcessor* pDBProcessor,boost::asio::io_service& io_service);  
	~CAccCenterAdapter();

	void HandlePackageReq(UINT SessionNo,UINT ServiceNo,UINT SeqNo,UINT RouterNo,CETSClearPackage& Package);

	CARPApi* m_pApi;
private:
	/*比特币出入请求*/
	void HandleIOStockReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	
	/*账户中心出入金请求*/
	void HandleAccCenterIOMoneyReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	
	/* 账户中心账户创建请求 */
	void HandleAccountCenterCreatAccountReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);

	/* 出入金上场请求 */
	void HandleOprIOMoneyReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearFieldsAccCenterIOMoneyReq *pAccCenterIOMoneyReq,ULONG SysFlowID,UINT RequestID,int mcnt=TIME_MAX_COUNT);	
	/* 出入金上场应答 */
	void HandleOprIOMoneyRsp(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	
	/* 出入货单上场请求 */
	void HandleOprIOStockReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearFieldsIOStockReq *pIOStockReq,ULONG SysFlowID,UINT RequestID,int mcnt=TIME_MAX_COUNT);  
	/* 出入货单上场应答 */
	void HandleOprIOStockRsp(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	
	/* 场上开户请求 */
	void HandleOprNewCustomerReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearFieldsAccountCenterCreatAccountReq *pAccountCenterCreatAccountReq,UINT RequestID,std::string* Customer,int mcnt=TIME_MAX_COUNT);	
	/* 场上开户应答 */
	void HandleOprNewCustomerRsp(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	

	ULONG GetIOMoneyFlowID(ULONG SysFlowID);
	ULONG GetIOStockFlowID(ULONG SysFlowID);

	void SetBankFlowState(ULONG flowid,const char* user,const char* states,CETSClearFieldsRspInfo* pDBRspInfo=NULL);
	void SetStockFlowState(ULONG flowid,const char* user,const char* states,CETSClearFieldsRspInfo* pDBRspInfo=NULL);
	void SetNewCusState(const char* cus,const char* states,CETSClearFieldsRspInfo* pDBRspInfo=NULL);

	int BankFlowState(ULONG flowid,const char* user);
	int StockFlowState(ULONG flowid,const char* user);
	int NewCusState(std::string* cus);

	ULONG NewIOMoneyFlowID(CETSClearFieldsAccCenterIOMoneyReq* pAccCenterIOMoneyReq);
	ULONG NewIOStockFlowID(CETSClearFieldsIOStockReq *pIOStockReq);

	int CheckTradingStatus();

	void IOMoneyFlowBranches(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);
	void OprIOMoneyFlowBranches(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);
	void IOStockFlowBranches(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);
	void OprIOStockFlowBranches(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);
private:
	CDBProcessor* m_pDBProcessor;
	SAConnection* m_Connection;
	std::string m_SID;
	std::string m_UserName;
	std::string m_Password;
	char m_pkgbuf[ETS_PACKAGE_SIZE];

	std::map<UINT,stSessionInfo_t> m_mSessionInfo;
	UINT m_SeqNo;

	boost::asio::deadline_timer m_pt;
};

#endif