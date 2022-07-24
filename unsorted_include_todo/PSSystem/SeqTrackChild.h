#ifndef _PSSYSTEM_SEQTRACKCHILD_H
#define _PSSYSTEM_SEQTRACKCHILD_H

/*
    __vt__Q28PSSystem13SeqTrackChild:
    .4byte 0
    .4byte 0
    .4byte update__Q28PSSystem12SeqTrackBaseFv
    .4byte init__Q28PSSystem12SeqTrackBaseFP8JASTrack
    .4byte onStopSeq__Q28PSSystem13SeqTrackChildFv
*/

namespace PSSystem {
struct SeqTrackBase {
	virtual void update();        // _08
	virtual void init(JASTrack*); // _0C

	// _00 VTBL
};
} // namespace PSSystem

namespace PSSystem {
struct SeqTrackChild : public SeqTrackBase {
	virtual void onStopSeq(); // _10

	// _00 VTBL
};
} // namespace PSSystem

#endif
