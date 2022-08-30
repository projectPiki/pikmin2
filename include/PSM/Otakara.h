#ifndef _PSM_OTAKARA_H
#define _PSM_OTAKARA_H

#include "types.h"
#include "PSM/EventBase.h"
#include "PSM/EventLink.h"

namespace Game {
namespace PelletOtakara {
struct Object;
}

namespace PelletItem {
struct Object;
}
} // namespace Game

namespace PSM {
struct Otakara : public EventBase {
	// vtable 1 (JSUPtrLink, _10)
	// vtable 2 (JKRDisposer -> ObjBase -> Creature, _28)
	virtual ~Otakara();                     // _14 (thunks at _10 and _48)
	virtual CreatureCastType getCastType(); // _1C (weak)

	// vtable 3 (JAInter::ObjectBase -> JAInter::Object + self, _28)
	virtual void otakaraEventStart();   // _88
	virtual void otakaraEventRestart(); // _8C
	virtual void otakaraEventStop();    // _90
	virtual void otakaraEventFinish();  // _94

	void setGoalOnyon(Game::Creature*);

	// _00      = VTABLE
	// _04-_70  = CreatureObj
	u32 _70;               // _70, unknown
	u32 _74;               // _74, unknown
	EventLink m_eventLink; // _78
	OtakaraEventLink* _8C; // _8C, probably this? possibly some related pointer
};

struct PelletOtakara : public Otakara {
	PelletOtakara(Game::PelletOtakara::Object*, bool);

	// vtable 1 (JSUPtrLink, _10)
	// vtable 2 (JKRDisposer -> ObjBase -> Creature, _28)
	virtual ~PelletOtakara();               // _14 (thunks at _10 and _48)
	virtual CreatureCastType getCastType(); // _1C (weak)

	// vtable 3 (JAInter::ObjectBase -> JAInter::Object + self, _28)

	// _00      = VTABLE
	// _04-_70  = CreatureObj
	// _70-_90  = Otakara
};

struct PelletItem : public Otakara {
	PelletItem(Game::PelletItem::Object*, bool);

	// vtable 1 (JSUPtrLink, _10)
	// vtable 2 (JKRDisposer -> ObjBase -> Creature, _28)
	virtual ~PelletItem();                  // _14 (thunks at _10 and _48)
	virtual CreatureCastType getCastType(); // _1C (weak)

	// vtable 3 (JAInter::ObjectBase -> JAInter::Object + self, _28)

	// _00      = VTABLE
	// _04-_70  = CreatureObj
	// _70-_90  = Otakara
};

} // namespace PSM

#endif
