#ifndef _PSSYSTEM_SEQTRACKBASE_H
#define _PSSYSTEM_SEQTRACKBASE_H

namespace PSSystem {
struct SeqTrackBase {
	virtual void update();        // _00
	virtual void init(JASTrack*); // _04
	virtual void _08() = 0;       // _08
	virtual void _0C() = 0;       // _0C

	// _00 VTBL
};
} // namespace PSSystem

#endif
