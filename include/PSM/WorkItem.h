#ifndef _PSM_WORKITEM_H
#define _PSM_WORKITEM_H

#include "PSM/EventBase.h"
#include "PSM/ObjBase.h"
#include "PSM/EventLink.h"

namespace Game {
struct BaseItem;
} // namespace Game

namespace PSM {
struct WorkItem : public EventBase {
	WorkItem(Game::BaseItem*);
	// vtable 2
	/**
	 * @reifiedAddress{804637A0}
	 * @reifiedFile{utilityU/PSMainSide_ObjSound.cpp}
	 */
	virtual ~WorkItem() {}; // _04 (thunks at _00 of vtable 2 and _00 of vtable 3)
	/**
	 * @reifiedAddress{804638E8}
	 * @reifiedFile{utilityU/PSMainSide_ObjSound.cpp}
	 */
	virtual CreatureCastType getCastType() { return CCT_WorkItem; }; // _0C

	// vtable 3
	virtual void eventStart();   // _40
	virtual void eventRestart(); // _44
	virtual void eventStop();    // _48
	virtual void eventFinish();  // _4C

	EventLink mLink; // _70
};
} // namespace PSM

#endif
