#ifndef _PSM_OBJMGR_H
#define _PSM_OBJMGR_H

#include "JSystem/JKR/JKRDisposer.h"
#include "PSSystem/SingletonBase.h"

namespace PSM {
struct ObjMgr : public JSUPtrList, public PSSystem::SingletonBase<ObjMgr>, public JKRDisposer {
	// vtable 1 (nothing???)
	// vtable 2 (SingletonBase)
	// vtable 3 (JKRDisposer)
	virtual ~ObjMgr(); // _04 (thunks at _00 of vtable 1 and _00 of vtable 2)
};
} // namespace PSM

#endif
