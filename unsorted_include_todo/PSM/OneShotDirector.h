#ifndef _PSM_ONESHOTDIRECTOR_H
#define _PSM_ONESHOTDIRECTOR_H

/*
    __vt__Q23PSM15OneShotDirector:
    .4byte 0
    .4byte 0
    .4byte __dt__Q23PSM15OneShotDirectorFv
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
	virtual ~DirectorBase();                    // _08 (inline)
	virtual void exec();                        // _0C
	virtual void directOn();                    // _10
	virtual void directOff();                   // _14
	virtual void underDirection();              // _18 (inline)
	virtual void execInner();                   // _1C (inline)
	virtual void _20() = 0;                     // _20
	virtual void directOffTrack(SeqTrackBase&); // _24 (inline)
	virtual void doUpdateRequest();             // _28
	virtual void onPlayInit(JASTrack*);         // _2C (inline)
	virtual void onDirectOn();                  // _30 (inline)
	virtual void onDirectOff();                 // _34 (inline)
};
} // namespace PSSystem

namespace PSM {
struct OneShotDirector : public DirectorBase {
	virtual ~OneShotDirector();                 // _08 (inline)
	virtual void exec();                        // _0C
	virtual void _20() = 0;                     // _20
	virtual void directOffTrack(SeqTrackBase&); // _24 (inline)
};
} // namespace PSM

#endif
