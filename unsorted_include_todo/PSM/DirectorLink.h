#ifndef _PSM_DIRECTORLINK_H
#define _PSM_DIRECTORLINK_H

/*
    __vt__Q23PSM12DirectorLink:
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte eventStart__Q23PSM12DirectorLinkFv
    .4byte eventRestart__Q23PSM12DirectorLinkFv
    .4byte eventStop__Q23PSM12DirectorLinkFv
    .4byte eventFinish__Q23PSM12DirectorLinkFv
*/

namespace PSM {
struct DirectorLink {
	virtual void _08() = 0;      // _08
	virtual void eventStart();   // _0C
	virtual void eventRestart(); // _10
	virtual void eventStop();    // _14
	virtual void eventFinish();  // _18

	// _00 VTBL
};
} // namespace PSM

#endif
