#ifndef _PSSYSTEM_SEQTRACKROOT_H
#define _PSSYSTEM_SEQTRACKROOT_H

/*
    __vt__Q28PSSystem12SeqTrackRoot:
    .4byte 0
    .4byte 0
    .4byte update__Q28PSSystem12SeqTrackRootFv
    .4byte init__Q28PSSystem12SeqTrackRootFP8JASTrack
    .4byte onStopSeq__Q28PSSystem12SeqTrackRootFv
    .4byte beatUpdate__Q28PSSystem12SeqTrackRootFv
    .4byte onBeatTop__Q28PSSystem12SeqTrackRootFv
*/

namespace PSSystem {
struct SeqTrackRoot {
	virtual void update();        // _00
	virtual void init(JASTrack*); // _04
	virtual void onStopSeq();     // _08
	virtual void beatUpdate();    // _0C
	virtual void onBeatTop();     // _10

	// _00 VTBL
};
} // namespace PSSystem

#endif
