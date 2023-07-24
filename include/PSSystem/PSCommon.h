#ifndef _PSSYSTEM_PSCOMMON_H
#define _PSSYSTEM_PSCOMMON_H

#include "PSSystem/SingletonBase.h"
#include "PSM/ObjMgr.h"

namespace PSSystem {
static inline void createSEMgrInstance()
{
	P2ASSERTLINE(118, !SingletonBase<PSM::ObjMgr>::sInstance);
	// SingletonBase<PSM::ObjMgr>::createInstance();
	P2ASSERTLINE(121, SingletonBase<PSM::ObjMgr>::sInstance);
}
} // namespace PSSystem

#endif
