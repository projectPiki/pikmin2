#ifndef _PSM_CREATUREOBJ_H
#define _PSM_CREATUREOBJ_H

#include "JSystem/JAudio/JAI/JAInter/Object.h"
#include "PSM/Creature.h"
#include "PSM/Se.h"

namespace PSM {
struct CreatureObj : public Creature, public JAInter::Object {
	CreatureObj(Game::Creature*, u8);

	// VTBL 1 (JKRDisposer, dtor-only, _10)
	// VTBL 2 (ObjBase + self, _28)
	virtual ~CreatureObj() { }                                         // _14 (thunks at _10 and _48)
	virtual void frameEnd_onPlaySe();                                  // _18
	virtual CreatureCastType getCastType() { return CCT_CreatureObj; } // _1C (weak)
	virtual JAInter::Object* getJAIObject() { return this; }           // _24 (weak)
	virtual void onCalcOn() { }                                        // _28 (weak)
	virtual JAISound** getHandleArea(u8 i) { return mSounds + i; }     // _3C (weak)

	// vtable 3 (JAInter::ObjectBase -> JAInter::Object + self, _28)
	virtual JAISound* startSound(u32, u32);        // _7C (thunk at _4C)
	virtual void startSound(u8, u32, u32);         // _80 (thunk at _50)
	virtual void startSound(JAISound**, u32, u32); // _84 (thunk at _54)

	// _10     = VTBL 1
	// _28     = VTBL 2
	// _00-_30 = Creature
	// _30-_70 = JAInter::Object
};
} // namespace PSM

#endif
