#ifndef _PSM_EVENTBASE_H
#define _PSM_EVENTBASE_H

#include "types.h"
#include "PSM/CreatureObj.h"

namespace PSM {
struct EventBase : public CreatureObj {
	inline EventBase(Game::Creature* creature, u8 a)
	    : CreatureObj(creature, a)
	{
	}

	// vtable 1 (JSUPtrLink, _10)
	// vtable 2 (JKRDisposer -> ObjBase -> Creature, _28)
	virtual ~EventBase() { } // _14
	                         // vtable 3 (JAInter::ObjectBase -> JAInter::Object + self, _28)

	// _00      = VTABLE
	// _04-_70  = CreatureObj
};
} // namespace PSM

#endif
