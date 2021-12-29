#ifndef _PSM_OTAKARAEVENTLINK_H
#define _PSM_OTAKARAEVENTLINK_H

/*
    __vt__Q23PSM16OtakaraEventLink:
    .4byte 0
    .4byte 0
    .4byte getListDirectorActor__Q23PSM16OtakaraEventLinkFv
    .4byte eventStart__Q23PSM12DirectorLinkFv
    .4byte eventRestart__Q23PSM12DirectorLinkFv
    .4byte eventStop__Q23PSM12DirectorLinkFv
    .4byte eventFinish__Q23PSM16OtakaraEventLinkFv
    .4byte is2PBattle__Q23PSM16OtakaraEventLinkFv
*/

namespace PSM {
struct DirectorLink {
	virtual void getListDirectorActor(); // _00
	virtual void eventStart();           // _04
	virtual void eventRestart();         // _08
	virtual void eventStop();            // _0C

	// _00 VTBL
};
} // namespace PSM

namespace PSM {
struct OtakaraEventLink : public DirectorLink {
	virtual void getListDirectorActor(); // _00
	virtual void eventStart();           // _04
	virtual void eventRestart();         // _08
	virtual void eventStop();            // _0C
	virtual void eventFinish();          // _10
	virtual void is2PBattle();           // _14

	// _00 VTBL
};
} // namespace PSM

#endif
