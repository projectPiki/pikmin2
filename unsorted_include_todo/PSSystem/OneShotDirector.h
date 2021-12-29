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
    .4byte
   directOffTrack__Q28PSSystem15OneShotDirectorFRQ28PSSystem12SeqTrackBase
    .4byte doUpdateRequest__Q28PSSystem12DirectorBaseFv
    .4byte onPlayInit__Q28PSSystem12DirectorBaseFP8JASTrack
    .4byte onDirectOn__Q28PSSystem12DirectorBaseFv
    .4byte onDirectOff__Q28PSSystem12DirectorBaseFv
*/

namespace PSSystem {
struct DirectorBase {
	virtual ~DirectorBase();                    // _00
	virtual void exec();                        // _04
	virtual void directOn();                    // _08
	virtual void directOff();                   // _0C
	virtual void underDirection();              // _10
	virtual void execInner();                   // _14
	virtual void _18() = 0;                     // _18
	virtual void directOffTrack(SeqTrackBase&); // _1C
	virtual void doUpdateRequest();             // _20
	virtual void onPlayInit(JASTrack*);         // _24
	virtual void onDirectOn();                  // _28
	virtual void onDirectOff();                 // _2C

	// _00 VTBL
};
} // namespace PSSystem

namespace PSSystem {
struct OneShotDirector : public DirectorBase {
	virtual ~OneShotDirector();                 // _00
	virtual void exec();                        // _04
	virtual void directOn();                    // _08
	virtual void directOff();                   // _0C
	virtual void underDirection();              // _10
	virtual void execInner();                   // _14
	virtual void _18() = 0;                     // _18
	virtual void directOffTrack(SeqTrackBase&); // _1C
	virtual void doUpdateRequest();             // _20
	virtual void onPlayInit(JASTrack*);         // _24
	virtual void onDirectOn();                  // _28
	virtual void onDirectOff();                 // _2C

	// _00 VTBL
};
} // namespace PSSystem

#endif
