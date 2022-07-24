#ifndef _PSAUTOBGM_AUTOBGMSEQTRACKROOT_H
#define _PSAUTOBGM_AUTOBGMSEQTRACKROOT_H

/*
    __vt__Q29PSAutoBgm19AutoBgmSeqTrackRoot:
    .4byte 0
    .4byte 0
    .4byte update__Q28PSSystem12SeqTrackRootFv
    .4byte init__Q28PSSystem12SeqTrackRootFP8JASTrack
    .4byte onStopSeq__Q28PSSystem12SeqTrackRootFv
    .4byte beatUpdate__Q29PSAutoBgm19AutoBgmSeqTrackRootFv
    .4byte onBeatTop__Q28PSSystem12SeqTrackRootFv
*/

namespace PSSystem {
struct SeqTrackRoot {
	virtual void update();        // _08
	virtual void init(JASTrack*); // _0C
	virtual void onStopSeq();     // _10
	virtual void beatUpdate();    // _14
	virtual void onBeatTop();     // _18

	// _00 VTBL
};
} // namespace PSSystem

namespace PSAutoBgm {
struct AutoBgmSeqTrackRoot : public SeqTrackRoot {
	virtual void beatUpdate(); // _14

	// _00 VTBL
};
} // namespace PSAutoBgm

#endif
