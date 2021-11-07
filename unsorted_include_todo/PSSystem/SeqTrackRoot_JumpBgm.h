#ifndef _PSSYSTEM_SEQTRACKROOT_JUMPBGM_H
#define _PSSYSTEM_SEQTRACKROOT_JUMPBGM_H

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
