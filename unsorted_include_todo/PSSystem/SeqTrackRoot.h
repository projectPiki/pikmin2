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
	virtual void update();        // _08 (inline)
	virtual void init(JASTrack*); // _0C
	virtual void onStopSeq();     // _10
	virtual void beatUpdate();    // _14
	virtual void onBeatTop();     // _18 (inline)

	SeqTrackRoot();
	void initSwingRatio();
	void pitchModulation(float, float, unsigned long, PSSystem::DirectorBase*);
	void tempoChange(float, unsigned long, PSSystem::DirectorBase*);
};
} // namespace PSSystem

#endif
