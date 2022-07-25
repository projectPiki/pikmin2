#ifndef _PSM_ACTORDIRECTOR_TRACKON_H
#define _PSM_ACTORDIRECTOR_TRACKON_H

/*
    __vt__Q23PSM21ActorDirector_TrackOn:
    .4byte 0
    .4byte 0
    .4byte __dt__Q23PSM21ActorDirector_TrackOnFv
    .4byte exec__Q28PSSystem12DirectorBaseFv
    .4byte directOn__Q28PSSystem12DirectorBaseFv
    .4byte directOff__Q28PSSystem12DirectorBaseFv
    .4byte underDirection__Q28PSSystem12DirectorBaseFv
    .4byte execInner__Q23PSM21ActorDirector_TrackOnFv
    .4byte directOnTrack__Q23PSM19TrackOnDirectorBaseFRQ28PSSystem12SeqTrackBase
    .4byte directOffTrack__Q23PSM19TrackOnDirectorBaseFRQ28PSSystem12SeqTrackBase
    .4byte doUpdateRequest__Q28PSSystem16SwitcherDirectorFv
    .4byte onPlayInit__Q23PSM19TrackOnDirectorBaseFP8JASTrack
    .4byte onDirectOn__Q28PSSystem12DirectorBaseFv
    .4byte onDirectOff__Q28PSSystem12DirectorBaseFv
*/

namespace PSSystem {
struct DirectorBase {
	virtual ~DirectorBase();       // _08 (weak)
	virtual void exec();           // _0C
	virtual void directOn();       // _10
	virtual void directOff();      // _14
	virtual void underDirection(); // _18 (weak)
	virtual void execInner();      // _1C
	virtual void _20() = 0;        // _20
	virtual void _24() = 0;        // _24
	virtual void _28() = 0;        // _28
	virtual void _2C() = 0;        // _2C
	virtual void onDirectOn();     // _30 (weak)
	virtual void onDirectOff();    // _34 (weak)
};
} // namespace PSSystem

namespace PSM {
struct TrackOnDirectorBase {
	virtual ~TrackOnDirectorBase();                       // _08 (weak)
	virtual void _0C() = 0;                               // _0C
	virtual void _10() = 0;                               // _10
	virtual void _14() = 0;                               // _14
	virtual void _18() = 0;                               // _18
	virtual void execInner();                             // _1C
	virtual void directOnTrack(PSSystem::SeqTrackBase&);  // _20
	virtual void directOffTrack(PSSystem::SeqTrackBase&); // _24
	virtual void _28() = 0;                               // _28
	virtual void onPlayInit(JASTrack*);                   // _2C
};
} // namespace PSM

namespace PSSystem {
struct SwitcherDirector {
	virtual ~SwitcherDirector();    // _08 (weak)
	virtual void _0C() = 0;         // _0C
	virtual void _10() = 0;         // _10
	virtual void _14() = 0;         // _14
	virtual void _18() = 0;         // _18
	virtual void execInner();       // _1C
	virtual void _20() = 0;         // _20
	virtual void _24() = 0;         // _24
	virtual void doUpdateRequest(); // _28
};
} // namespace PSSystem

namespace PSM {
struct ActorDirector_TrackOn : public DirectorBase, public TrackOnDirectorBase, public SwitcherDirector {
	virtual ~ActorDirector_TrackOn(); // _08 (weak)
	virtual void execInner();         // _1C

	ActorDirector_TrackOn(const char*, int, long, long);
};
} // namespace PSM

#endif
