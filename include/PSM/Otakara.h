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
struct Onyon;
} // namespace Game

namespace PSM {
struct Otakara : public EventBase {
	inline Otakara(Game::Creature* gameObj)
	    : EventBase(gameObj, 2)
	    , mBedamaType(PSMBedama_None)
	    , mOnyon(nullptr)
	    , mEventLink(gameObj)
	    , mOtaEvent(nullptr)
	{
	}

	enum BedamaType {
		PSMBedama_None   = 0,
		PSMBedama_Cherry = 1,
		PSMBedama_Red    = 2,
		PSMBedama_Blue   = 3,
		PSMBedama_Yellow = 4,
	};

	// vtable 1 (JSUPtrLink, _10)
	// vtable 2 (JKRDisposer -> ObjBase -> Creature, _28)
	virtual ~Otakara();                                            // _14 (thunks at _10 and _48)
	virtual CreatureCastType getCastType() { return CCT_Otakara; } // _1C (weak)

	// vtable 3 (JAInter::ObjectBase -> JAInter::Object + self, _28)
	virtual void otakaraEventStart();   // _88
	virtual void otakaraEventRestart(); // _8C
	virtual void otakaraEventStop();    // _90
	virtual void otakaraEventFinish();  // _94

	void setGoalOnyon(Game::Creature*);

	inline bool is2PBattle()
	{
		if (mOtaEvent->is2PBattle() && (int)mBedamaType != PSMBedama_None) {
			return true;
		}
		return false;
	}

	inline bool isTreasure()
	{
		return getCastType() == CCT_PelletOtakara || getCastType() == CCT_PelletItem || getCastType() == CCT_Otakara;
	}

	inline bool canFinish()
	{
		bool test = true;
		u32 type  = mBedamaType;
		if (type - 2 <= PSMBedama_Cherry || (int)type == PSMBedama_Yellow) {
			test = true;
		} else if (type - 1 <= PSMBedama_Red || (int)type == PSMBedama_Yellow) {
			if (!mOnyon) {
				test = true;
			} else {
				test = false;
			}
		} else {
			test = false;
		}
		return test;
	}

	// _00      = VTABLE
	// _04-_70  = CreatureObj
	u32 mBedamaType;             // _70
	Game::Onyon* mOnyon;         // _74
	EventLink mEventLink;        // _78
	OtakaraEventLink* mOtaEvent; // _8C
};

struct PelletOtakara : public Otakara {
	PelletOtakara(Game::PelletOtakara::Object*, bool);

	// vtable 1 (JSUPtrLink, _10)
	// vtable 2 (JKRDisposer -> ObjBase -> Creature, _28)
	virtual ~PelletOtakara() { }                                         // _14 (thunks at _10 and _48)
	virtual CreatureCastType getCastType() { return CCT_PelletOtakara; } // _1C (weak)

	// vtable 3 (JAInter::ObjectBase -> JAInter::Object + self, _28)

	// _00      = VTABLE
	// _04-_70  = CreatureObj
	// _70-_90  = Otakara
};

struct PelletItem : public Otakara {
	PelletItem(Game::PelletItem::Object*);

	// vtable 1 (JSUPtrLink, _10)
	// vtable 2 (JKRDisposer -> ObjBase -> Creature, _28)
	virtual ~PelletItem() { }                                         // _14 (thunks at _10 and _48)
	virtual CreatureCastType getCastType() { return CCT_PelletItem; } // _1C (weak)

	// vtable 3 (JAInter::ObjectBase -> JAInter::Object + self, _28)

	// _00      = VTABLE
	// _04-_70  = CreatureObj
	// _70-_90  = Otakara
};

} // namespace PSM

#endif
