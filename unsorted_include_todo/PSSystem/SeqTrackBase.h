#ifndef _PSSYSTEM_SEQTRACKBASE_H
#define _PSSYSTEM_SEQTRACKBASE_H

/*
    __vt__Q28PSSystem12SeqTrackBase:
    .4byte 0
    .4byte 0
    .4byte update__Q28PSSystem12SeqTrackBaseFv
    .4byte init__Q28PSSystem12SeqTrackBaseFP8JASTrack
    .4byte 0
*/

namespace PSSystem {
struct SeqTrackBase {
	virtual void update();        // _08
	virtual void init(JASTrack*); // _0C
	virtual void _10() = 0;       // _10

	void getTaskEntryList();
};
} // namespace PSSystem

#endif
