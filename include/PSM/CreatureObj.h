#ifndef _PSM_CREATUREOBJ_H
#define _PSM_CREATUREOBJ_H

#include "JSystem/JAI/JAInter/Object.h"
#include "PSM/Creature.h"

namespace PSM {
struct CreatureObj : public Creature, public JAInter::Object {
	CreatureObj(Game::Creature*, unsigned char);

	// vtable 2 (JKRDisposer -> ObjBase -> Creature)
	virtual ~CreatureObj();                  // _04 (thunks at _00 of vtable 2 and _00 of vtable 3)
	virtual void frameEnd_onPlaySe();        // _08
	virtual CreatureCastType getCastType();  // _0C
	virtual JAInter::Object* getJAIObject(); // _14
	virtual void onCalcOn();                 // _18
	virtual void getHandleArea(u8);          // _2C

	// vtable 3 (JAInter::ObjectBase -> JAInter::Object)
	virtual void startSound(u32, u32);             // _34 (thunk at _04)
	virtual void startSound(u8, u32, u32);         // _38 (thunk at _08)
	virtual void startSound(JAISound**, u32, u32); // _3C (thunk at _0C)

	// _00 VTBL
};
} // namespace PSM

#endif
