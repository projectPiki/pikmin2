#ifndef _PSM_CREATUREOBJ_H
#define _PSM_CREATUREOBJ_H

#include "JSystem/JAI/JAInter/Object.h"
#include "PSM/Creature.h"

namespace PSM {
struct CreatureObj : public Creature, public JAInter::Object {
	CreatureObj(Game::Creature*, u8);

	// vtable 1 (JSUPtrLink, _10)
	// vtable 2 (JKRDisposer -> ObjBase -> Creature, _28)
	virtual ~CreatureObj() { }                                         // _14 (thunks at _10 and _48)
	virtual void frameEnd_onPlaySe();                                  // _18
	virtual CreatureCastType getCastType() { return CCT_CreatureObj; } // _1C (weak)
	virtual JAInter::Object* getJAIObject() { return this; }           // _24 (weak)
	virtual void onCalcOn() { }                                        // _28 (weak)
	virtual JAISound** getHandleArea(u8 i) { return m_sounds + i; }    // _3C (weak)

	// vtable 3 (JAInter::ObjectBase -> JAInter::Object + self, _28)
	virtual void startSound(u32, u32);             // _7C (thunk at _4C)
	virtual void startSound(u8, u32, u32);         // _80 (thunk at _50)
	virtual void startSound(JAISound**, u32, u32); // _84 (thunk at _54)

	// _00 VTBL
	JAInter::Object m_obj; // _30
};
} // namespace PSM

#endif
