#ifndef _PSSYSTEM_SEQTRACKROOT_JUMPBGM_H
#define _PSSYSTEM_SEQTRACKROOT_JUMPBGM_H

/*
    __vt__Q28PSSystem20SeqTrackRoot_JumpBgm:
    .4byte 0
    .4byte 0
    .4byte update__Q28PSSystem12SeqTrackRootFv
    .4byte init__Q28PSSystem12SeqTrackRootFP8JASTrack
    .4byte onStopSeq__Q28PSSystem12SeqTrackRootFv
    .4byte beatUpdate__Q28PSSystem12SeqTrackRootFv
    .4byte onBeatTop__Q28PSSystem20SeqTrackRoot_JumpBgmFv
*/

namespace PSSystem {
struct SeqTrackRoot {
	virtual void update();        // _00
	virtual void init(JASTrack*); // _04
	virtual void onStopSeq();     // _08
	virtual void beatUpdate();    // _0C

	// _00 VTBL
};
} // namespace PSSystem

namespace PSSystem {
struct SeqTrackRoot_JumpBgm : public SeqTrackRoot {
	virtual void update();        // _00
	virtual void init(JASTrack*); // _04
	virtual void onStopSeq();     // _08
	virtual void beatUpdate();    // _0C
	virtual void onBeatTop();     // _10

	// _00 VTBL
};
} // namespace PSSystem

#endif
