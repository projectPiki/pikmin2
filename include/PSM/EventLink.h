#ifndef _PSM_EVENTLINK_H
#define _PSM_EVENTLINK_H

#include "types.h"
#include "PSM/DirectorLink.h"

namespace PSM {
struct EventLink : public DirectorLink {
	virtual void getListDirectorActor(); // _08

	// _00-_10  = JSUPtrLink
	// _10      = VTABLE
};

struct OtakaraEventLink : public EventLink {
	virtual void getListDirectorActor(); // _08
	virtual void eventFinish();          // _18
	virtual void is2PBattle();           // _1C (weak)

	// _00-_10  = JSUPtrLink
	// _10      = VTABLE
};

struct OtakaraEventLink_2PBattle : public OtakaraEventLink {
	virtual void getListDirectorActor(); // _08
	virtual void eventStart();           // _0C
	virtual void eventRestart();         // _10
	virtual void eventStop();            // _14
	virtual void eventFinish();          // _18
	virtual void is2PBattle();           // _1C (weak)

	void getTargetDirector();
};
} // namespace PSM

#endif
