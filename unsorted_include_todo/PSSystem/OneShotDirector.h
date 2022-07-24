#ifndef _PSSYSTEM_ONESHOTDIRECTOR_H
#define _PSSYSTEM_ONESHOTDIRECTOR_H

/*
    __vt__Q28PSSystem15OneShotDirector:
    .4byte 0
    .4byte 0
    .4byte __dt__Q28PSSystem15OneShotDirectorFv
    .4byte exec__Q28PSSystem15OneShotDirectorFv
    .4byte directOn__Q28PSSystem12DirectorBaseFv
    .4byte directOff__Q28PSSystem12DirectorBaseFv
    .4byte underDirection__Q28PSSystem12DirectorBaseFv
    .4byte execInner__Q28PSSystem12DirectorBaseFv
    .4byte 0
    .4byte directOffTrack__Q28PSSystem15OneShotDirectorFRQ28PSSystem12SeqTrackBase
    .4byte doUpdateRequest__Q28PSSystem12DirectorBaseFv
    .4byte onPlayInit__Q28PSSystem12DirectorBaseFP8JASTrack
    .4byte onDirectOn__Q28PSSystem12DirectorBaseFv
    .4byte onDirectOff__Q28PSSystem12DirectorBaseFv
*/

namespace PSSystem {
struct DirectorBase {
	virtual ~DirectorBase();                    // _08
	virtual void exec();                        // _0C
	virtual void directOn();                    // _10
	virtual void directOff();                   // _14
	virtual void underDirection();              // _18
	virtual void execInner();                   // _1C
	virtual void _20() = 0;                     // _20
	virtual void directOffTrack(SeqTrackBase&); // _24
	virtual void doUpdateRequest();             // _28
	virtual void onPlayInit(JASTrack*);         // _2C
	virtual void onDirectOn();                  // _30
	virtual void onDirectOff();                 // _34

	// _00 VTBL
};
} // namespace PSSystem

namespace PSSystem {
struct OneShotDirector : public DirectorBase {
	virtual ~OneShotDirector();                 // _08
	virtual void exec();                        // _0C
	virtual void _20() = 0;                     // _20
	virtual void directOffTrack(SeqTrackBase&); // _24

	// _00 VTBL
};
} // namespace PSSystem

#endif
