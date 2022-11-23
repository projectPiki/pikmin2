#ifndef _PSM_OBJMGR_H
#define _PSM_OBJMGR_H

#include "JSystem/JKR/JKRDisposer.h"
#include "PSSystem/SingletonBase.h"
#include "PSM/Scene.h"

struct Scene_Objects;

namespace PSM {
struct ObjMgr : public JSUPtrList, public PSSystem::SingletonBase<ObjMgr>, public JKRDisposer {
	// vtable 1 (SingletonBase)
	// vtable 2 (JKRDisposer)
	virtual ~ObjMgr(); // _20 (weak, thunks at _10 of vtable 1 and _08 of vtable 2)

	void frameEnd_onPlaySe();

	// _28     = VTBL 2
	// _00-_10 = JSUPtrList
	// _10-_28 = JKRDisposer
	Scene_Objects* m_scenes; // _2C, probably an array of scenes
};
} // namespace PSM

#endif
