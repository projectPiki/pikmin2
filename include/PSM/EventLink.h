#ifndef _PSM_EVENTLINK_H
#define _PSM_EVENTLINK_H

#include "Game/pelletMgr.h"
#include "types.h"
#include "PSM/DirectorLink.h"

namespace PSM {
struct EventLink : public DirectorLink {
	inline EventLink(void* p1)
	    : DirectorLink(p1)
	{
	}

	virtual void getListDirectorActor(); // _08

	// _00-_10  = JSUPtrLink
	// _10      = VTABLE
};

struct OtakaraEventLink : public EventLink {
	inline OtakaraEventLink(Game::Pellet* gameObj)
	    : EventLink(gameObj)
	{
	}

	virtual void getListDirectorActor();        // _08
	virtual void eventFinish();                 // _18
	virtual bool is2PBattle() { return false; } // _1C (weak)

	// _00-_10  = JSUPtrLink
	// _10      = VTABLE
};

struct OtakaraEventLink_2PBattle : public OtakaraEventLink {
	inline OtakaraEventLink_2PBattle(Game::Pellet* gameObj)
	    : OtakaraEventLink(gameObj)
	{
	}

	virtual void getListDirectorActor(); // _08
	virtual void eventStart();           // _0C
	virtual void eventRestart();         // _10
	virtual void eventStop();            // _14
	virtual void eventFinish();          // _18
	virtual bool is2PBattle();           // _1C (weak)

	void getTargetDirector();
};
} // namespace PSM

#endif
