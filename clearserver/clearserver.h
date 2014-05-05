#ifndef __CLEAR_SERVER_H__
#define __CLEAR_SERVER_H__

#include <stdarg.h>
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <map>

//#include <boost/config/select_compiler_config.hpp>
//#include <boost/mpl/list/aux_/item.hpp>
//#include <boost/mpl/aux_/config/workaround.hpp>
#include <boost/program_options.hpp>
#include <boost/thread/thread.hpp>
//#include <boost/asio.hpp>
//#include <boost/bind.hpp>

#include "ARPApi.h"
#include "AppFrame.h"
#include "ETSClearPackage.h"
#include "ETSClearFieldDefine.h"
#include "BMLPackage.h"
#include "BMLRecordSet.h"
#include "DBProcessor.h"
#include "BankAdapter.h"
#include "AccCenterAdapter.h"

extern LOGFP *lp;

#pragma warning(disable : 4996)
#pragma warning(disable : 4267)

#define ETS_PACKAGE_SIZE 8000

class CDBProcessor;
class CBankAdapter;
class CAccCenterAdapter;
class CARPSpiImp:public CARPSpi
{
public:
	CARPSpiImp();
	~CARPSpiImp();

	void OnConnected(UINT InterfaceNo,const char* ServerAddress);
	void OnDisconnected(UINT InterfaceNo,const char* ServerAddress);
	void OnNtyService(UINT AppNo,UINT SessionNo,UINT ServiceNo,UINT SeqNo,const char*buf,unsigned int len,UINT RouterNo,UINT ServiceFlags,UINT InterfaceNo);
	void OnRspService(USHORT RspNo,const char* RspDesc,UINT AppNo,UINT SessionNo,UINT ServiceNo,UINT SeqNo,const char*buf,unsigned int len,UINT RouterNo,UINT ServiceFlags,UINT InterfaceNo);
	void OnNtyTime(ULONG Time);
	void OnLog(int level,const char *desc,const char *msg);

	CDBProcessor* m_pDBProcessor;
	CBankAdapter* m_pBankAdapter;
	CAccCenterAdapter* m_pAccCenterAdapter;
	CARPApi* m_pApi;
	char m_pkgbuf[ETS_PACKAGE_SIZE];
};

#endif /* __CLEAR_SERVER_H__ */
