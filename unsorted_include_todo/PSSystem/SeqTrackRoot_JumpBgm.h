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
	virtual void update();        // _08 (weak)
	virtual void init(JASTrack*); // _0C
	virtual void onStopSeq();     // _10
	virtual void beatUpdate();    // _14
};
} // namespace PSSystem

namespace PSSystem {
struct SeqTrackRoot_JumpBgm : public SeqTrackRoot {
	virtual void onBeatTop(); // _18
};
} // namespace PSSystem

#endif
