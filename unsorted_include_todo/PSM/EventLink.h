#ifndef _PSM_EVENTLINK_H
#define _PSM_EVENTLINK_H

/*
    __vt__Q23PSM9EventLink:
    .4byte 0
    .4byte 0
    .4byte getListDirectorActor__Q23PSM9EventLinkFv
    .4byte eventStart__Q23PSM12DirectorLinkFv
    .4byte eventRestart__Q23PSM12DirectorLinkFv
    .4byte eventStop__Q23PSM12DirectorLinkFv
    .4byte eventFinish__Q23PSM12DirectorLinkFv
*/

namespace PSM {
struct DirectorLink {
	virtual void getListDirectorActor(); // _08
	virtual void eventStart();           // _0C
	virtual void eventRestart();         // _10
	virtual void eventStop();            // _14
	virtual void eventFinish();          // _18

	// _00 VTBL
};
} // namespace PSM

namespace PSM {
struct EventLink : public DirectorLink {
	virtual void getListDirectorActor(); // _08

	// _00 VTBL
};
} // namespace PSM

#endif
