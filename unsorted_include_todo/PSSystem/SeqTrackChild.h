#ifndef _PSSYSTEM_SEQTRACKCHILD_H
#define _PSSYSTEM_SEQTRACKCHILD_H

namespace PSSystem {
struct SeqTrackBase {
	virtual void update();        // _00
	virtual void init(JASTrack*); // _04

	// _00 VTBL
};
} // namespace PSSystem

namespace PSSystem {
struct SeqTrackChild : public SeqTrackBase {
	virtual void update();        // _00
	virtual void init(JASTrack*); // _04
	virtual void onStopSeq();     // _08

	// _00 VTBL
};
} // namespace PSSystem

#endif
