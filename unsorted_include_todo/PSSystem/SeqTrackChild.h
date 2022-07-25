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
};
} // namespace PSSystem

namespace PSSystem {
struct SeqTrackChild : public SeqTrackBase {
	virtual void onStopSeq(); // _10

	SeqTrackChild(const PSSystem::SeqTrackRoot&);
	void muteOffAndFadeIn(float, unsigned long, PSSystem::DirectorBase*);
	void fadeoutAndMute(unsigned long, PSSystem::DirectorBase*);
	void fade(float, unsigned long, PSSystem::DirectorBase*);
	void setIdMask(unsigned char, PSSystem::DirectorBase*);
};
} // namespace PSSystem

#endif
