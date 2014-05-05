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
	ETSClearFieldTypeCommodityID Commodity;	/* ��Լ */
	ETSClearFieldTypeQty IO_Goods_Qty;	/* ����������� */
	ETSClearFieldTypeAction Action;	/* ���� */
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
	/*���رҳ�������*/
	void HandleIOStockReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	
	/*�˻����ĳ��������*/
	void HandleAccCenterIOMoneyReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	
	/* �˻������˻��������� */
	void HandleAccountCenterCreatAccountReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);

	/* ������ϳ����� */
	void HandleOprIOMoneyReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearFieldsAccCenterIOMoneyReq *pAccCenterIOMoneyReq,ULONG SysFlowID,UINT RequestID,int mcnt=TIME_MAX_COUNT);	
	/* ������ϳ�Ӧ�� */
	void HandleOprIOMoneyRsp(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	
	/* ��������ϳ����� */
	void HandleOprIOStockReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearFieldsIOStockReq *pIOStockReq,ULONG SysFlowID,UINT RequestID,int mcnt=TIME_MAX_COUNT);  
	/* ��������ϳ�Ӧ�� */
	void HandleOprIOStockRsp(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	
	/* ���Ͽ������� */
	void HandleOprNewCustomerReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearFieldsAccountCenterCreatAccountReq *pAccountCenterCreatAccountReq,UINT RequestID,std::string* Customer,int mcnt=TIME_MAX_COUNT);	
	/* ���Ͽ���Ӧ�� */
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