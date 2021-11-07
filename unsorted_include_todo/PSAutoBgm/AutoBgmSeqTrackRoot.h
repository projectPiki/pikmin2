#ifndef _PSAUTOBGM_AUTOBGMSEQTRACKROOT_H
#define _PSAUTOBGM_AUTOBGMSEQTRACKROOT_H

namespace PSSystem {
struct SeqTrackRoot {
	virtual void update();        // _00
	virtual void init(JASTrack*); // _04
	virtual void onStopSeq();     // _08
	virtual void _0C() = 0;       // _0C
	virtual void onBeatTop();     // _10

	// _00 VTBL
};
} // namespace PSSystem

namespace PSAutoBgm {
struct AutoBgmSeqTrackRoot : public SeqTrackRoot {
	virtual void update();        // _00
	virtual void init(JASTrack*); // _04
	virtual void onStopSeq();     // _08
	virtual void beatUpdate();    // _0C
	virtual void onBeatTop();     // _10

	// _00 VTBL
};
} // namespace PSAutoBgm

#endif
