#ifndef _PSM_SWITCHERDIRECTOR_H
#define _PSM_SWITCHERDIRECTOR_H

/*
    __vt__Q23PSM16SwitcherDirector:
    .4byte 0
    .4byte 0
    .4byte __dt__Q23PSM16SwitcherDirectorFv
    .4byte exec__Q28PSSystem12DirectorBaseFv
    .4byte directOn__Q28PSSystem12DirectorBaseFv
    .4byte directOff__Q28PSSystem12DirectorBaseFv
    .4byte underDirection__Q28PSSystem12DirectorBaseFv
    .4byte execInner__Q28PSSystem12DirectorBaseFv
    .4byte 0
    .4byte 0
    .4byte doUpdateRequest__Q28PSSystem16SwitcherDirectorFv
    .4byte onPlayInit__Q28PSSystem12DirectorBaseFP8JASTrack
    .4byte onDirectOn__Q28PSSystem12DirectorBaseFv
    .4byte onDirectOff__Q28PSSystem12DirectorBaseFv
*/

namespace PSSystem {
struct DirectorBase {
	virtual ~DirectorBase();            // _08
	virtual void exec();                // _0C
	virtual void directOn();            // _10
	virtual void directOff();           // _14
	virtual void underDirection();      // _18
	virtual void execInner();           // _1C
	virtual void _20() = 0;             // _20
	virtual void _24() = 0;             // _24
	virtual void doUpdateRequest();     // _28
	virtual void onPlayInit(JASTrack*); // _2C
	virtual void onDirectOn();          // _30
	virtual void onDirectOff();         // _34

	// _00 VTBL
};
} // namespace PSSystem

namespace PSM {
struct SwitcherDirector : public DirectorBase {
	virtual ~SwitcherDirector();    // _08
	virtual void _20() = 0;         // _20
	virtual void _24() = 0;         // _24
	virtual void doUpdateRequest(); // _28

	// _00 VTBL
};
} // namespace PSM

#endif
