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

	void HandleLogonReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* ��½���� */
	void HandleLogoffReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* �ǳ����� */
	void HandleMenuQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* �˵���ѯ���� */
	void HandleMenuAddReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* �˵��������� */
	void HandleMenuDeleteReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* �˵�ɾ������ */
	void HandleOperAddReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* ����Ա�������� */
	void HandleOperDeleteReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* ����Աɾ������ */
	void HandleChangePasswordReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* �޸��������� */
	void HandleQuotReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* �������� */
	void HandleSpotQuotReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* �ֻ��������� */
	void HandleMarketReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* �г����� */
	void HandleOrderQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* ������ѯ���� */
	void HandleTradeQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* �ɽ���ѯ���� */
	void HandleHoldingQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* �ֲֲ�ѯ���� */
	void HandleFundsQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* �ʽ��ѯ���� */
	void HandleCommodityQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* ��Ʒ��ѯ���� */
	void HandleSpotPropertyQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* �ֻ����Բ�ѯ���� */
	void HandleSpotPropertyLookupQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* �ֻ����������б��ѯ���� */
	void HandleLocationQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* �ֻ������ص��ѯ���� */
	void HandleLogQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* ��־��ѯ���� */
	void HandleFirmQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* ��ѯ��Ա���� */
	void HandleFirmAddReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* ���ӻ�Ա���� */
	void HandleFirmModifyReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* �޸Ļ�Ա���� */
	void HandleFirmDeleteReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* ɾ����Ա���� */
	void HandleTraderQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* ��ѯ����Ա���� */
	void HandleTraderAddReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* ���ӽ���Ա���� */
	void HandleTraderModifyReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* �޸Ľ���Ա���� */
	void HandleTraderDeleteReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* ɾ������Ա���� */
	void HandleCustomerQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* ��ѯ�ͻ����� */
	void HandleCustomerAddReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* ���ӿͻ����� */
	void HandleCustomerModifyReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* �޸Ŀͻ����� */
	void HandleCustomerDeleteReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* ɾ���ͻ����� */
	void HandleOperQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* ��ѯ����Ա���� */
	void HandleMarketAddReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* �����г����� */
	void HandleMarketModifyReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* �޸��г����� */
	void HandleMarketDeleteReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* ɾ���г����� */
	void HandleCommodityAddReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* ������Ʒ���� */
	void HandleCommodityModifyReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* �޸���Ʒ���� */
	void HandleCommodityDeleteReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* ɾ����Ʒ���� */
	void HandleCommodityPropertyAddReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* ������Ʒ�������� */
	void HandleCommodityPropertyQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* ��ѯ��Ʒ�������� */
	void HandleCommodityPropertyDeleteReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* ɾ����Ʒ�������� */
	void HandlePropertyLookupAddReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* ������Ʒ��������ѡ������ */
	void HandlePropertyLookupQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* ��ѯ��Ʒ��������ѡ������ */
	void HandlePropertyLookupDeleteReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* ɾ����Ʒ��������ѡ������ */
	void HandleVarietyQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* ��ѯƷ������ */
	void HandleVarietyAddReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* ����Ʒ������ */
	void HandleVarietyModifyReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* �޸�Ʒ������ */
	void HandleVarietyDeleteReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* ɾ��Ʒ������ */
	void HandleTradingTimeQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* ��ѯ���׽����� */
	void HandleTradingTimeAddReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* ���ӽ��׽����� */
	void HandleTradingTimeModifyReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* �޸Ľ��׽����� */
	void HandleTradingTimeDeleteReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* ɾ�����׽����� */
	void HandleLocationAddReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* ���ӽ����ص����� */
	void HandleLocationModifyReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* �޸Ľ����ص����� */
	void HandleLocationDeleteReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* ɾ�������ص����� */
	void HandleWareHouseQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* ��ѯ��Ʒ�洢�ֿ����� */
	void HandleWareHouseAddReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* ������Ʒ�洢�ֿ����� */
	void HandleWareHouseModifyReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* �޸���Ʒ�洢�ֿ����� */
	void HandleWareHouseDeleteReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* ɾ����Ʒ�洢�ֿ����� */
	void HandleDHouseQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* ��ѯ����ֿ����� */
	void HandleDHouseAddReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* ���ӽ���ֿ����� */
	void HandleDHouseModifyReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* �޸Ľ���ֿ����� */
	void HandleDHouseDeleteReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* ɾ������ֿ����� */
	void HandleUserQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* �û���Ϣ��ѯ���� */
	void HandleUserAddReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* �û���Ϣ�������� */
	void HandleUserDeleteReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* �û���Ϣɾ������ */
	void HandleUserModifyReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* �û���Ϣ�޸����� */
	void HandleDepartmentQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* ������Ϣ��ѯ���� */
	void HandleDepartmentAddReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* ������Ϣ�������� */
	void HandleDepartmentModifyReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* ������Ϣ�޸����� */
	void HandleDepartmentDeleteReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* ������Ϣɾ������ */
	void HandlePositionQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* ��λ��Ϣ��ѯ���� */
	void HandlePositionAddReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* ��λ��Ϣ�������� */
	void HandlePositionModifyReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* ��λ��Ϣ�޸����� */
	void HandlePositionDeleteReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* ��λ��Ϣɾ������ */
	void HandleDepAuthorityQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* ����Ȩ�޲�ѯ���� */
	void HandleAuthorityQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* ȫȨ�޲�ѯ���� */
	void HandleDepAuthorityAddReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* ����Ȩ���������� */
	void HandleDepAuthorityDeleteReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* ����Ȩ��ɾ������ */
	void HandlePosAuthorityQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* ��λȨ�޲�ѯ���� */
	void HandlePosAuthorityAddReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* ��λȨ���������� */
	void HandlePosAuthorityDeleteReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* ��λȨ��ɾ������ */
	void HandleUseAuthorityQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* �û�Ȩ�޲�ѯ���� */
	void HandleUseAuthorityAddReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* �û�Ȩ���������� */
	void HandleUseAuthorityDeleteReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* �û�Ȩ��ɾ������ */
	void HandleCommodityHistQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* ��ѯ������Ʒ��Լ��ʷ���� */
	void HandleGoodsQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* ���ӻ�����ѯ���� */
	void HandleClearingQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* ��Ա������Ϣ��ѯ���� */
	void HandleCusClearingQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* �ͻ�������Ϣ��ѯ���� */
	void HandleAccessQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* ���׿��Ʋ�ѯ���� */
	void HandleAccessAddReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* �������׿������� */
	void HandleAccessDeleteReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* ɾ�����׿������� */
	void HandleAccessModifyReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* �޸Ľ��׿������� */
	void HandleDayBalanceQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* ��Ա������Ϣ��ѯ���� */
	void HandleCusDayBalQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* �ͻ�������Ϣ��ѯ���� */
	void HandleClearPriceReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* ����ۼ������� */
	void HandleDayClearReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* ���㼰�������� */
	void HandleFxRatesQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* ÿ����Ҷ�����һ��ʱ��ѯ���� */
	void HandleFxRatesAddReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* ÿ����Ҷ�����һ��ʱ��������� */
	void HandleFxRatesDeleteReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* ÿ����Ҷ�����һ��ʱ�ɾ������ */
	void HandleFxRatesModifyReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* ÿ����Ҷ�����һ��ʱ��޸����� */
	void HandleMarketMakerQuotesReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* �����������ѯ���� */
	void HandleMakerFirmQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* �����̻�Ա��ѯ���� */
	void HandleMakerFirmAddReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* �����̻�Ա�ʸ��������� */
	void HandleMakerFirmDeleteReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* �����̻�Ա�ʸ�ɾ������ */
	void HandleMakerCustomerQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* �����̿ͻ���ѯ���� */
	void HandleMakerCustomerAddReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* �����̿ͻ��ʸ��������� */
	void HandleMakerCustomerDeleteReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* �����̿ͻ��ʸ�ɾ������ */
	void HandleConditionOrderQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* ��������ѯ���� */
	void HandleAccountCenterCreatAccountReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* �˻������˻��������� */
	void HandleAccCenterIOMoneyReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* �˻����ĳ�������� */
	void HandleAccCenterIOMoneyQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* �˻������ʽ���ˮ��ѯ���� */
	void HandleIOStockReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* ���ӻ����������� */
	void HandleAccountCenterAccountQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* �˻������˻���ѯ���� */
	void HandleAccCenterIOMoneyBalanceQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* �˻������˻�����ѯ���� */
	void HandleIOStockBalanceQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* ���ӻ�����ѯ���� */
	void HandleIOStockQueryReq(UINT RouterNo,UINT AppNo,UINT SessionNo,UINT SeqNo,CETSClearPackage& Package);	/* ���ӻ�����ˮ��ѯ���� */

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
