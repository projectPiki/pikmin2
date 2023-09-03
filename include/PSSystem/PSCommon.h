#ifndef _PSSYSTEM_PSCOMMON_H
#define _PSSYSTEM_PSCOMMON_H

#include "JSystem/JUtility/JUTException.h"
#include "PSSystem/SingletonBase.h"
#include "PSM/ObjCalc.h"
#include "PSM/ObjMgr.h"

namespace PSSystem {
static inline void createSEMgrInstance()
{
	P2ASSERTLINE(118, !SingletonBase<PSM::ObjMgr>::sInstance);
	// SingletonBase<PSM::ObjMgr>::createInstance();
	P2ASSERTLINE(121, SingletonBase<PSM::ObjMgr>::sInstance);
}

static inline PSM::ObjCalcBase* getObjCalcBaseInstance()
{
	P2ASSERTLINE(137, SingletonBase<PSM::ObjCalcBase>::sInstance);
	return SingletonBase<PSM::ObjCalcBase>::sInstance;
}
} // namespace PSSystem

#endif
