#ifndef _PSSYSTEM_SEQMGR_H
#define _PSSYSTEM_SEQMGR_H

/*
    __vt__Q28PSSystem6SeqMgr:
    .4byte 0
    .4byte 0
    .4byte __dt__Q28PSSystem6SeqMgrFv
*/

namespace PSSystem {
struct SeqMgr {
	virtual ~SeqMgr(); // _08

	void isPlaying();
	void pauseOnAllSeq(PSSystem::SeqBase::PauseMode);
	void pauseOffAllSeq();
	void reservePauseOffAllSeq();
	void cancelPauseOffAllSeq();
	void exec();
	void stopAllSound(unsigned long);
	void scene1st(PSSystem::TaskChecker*);
	void findSeq(JASTrack*);
	void getPlayingSeq(JASTrack*);
	void getFirstSeq();
	void getFirstSeqA();
	void getSeq(unsigned long);
};
} // namespace PSSystem

#endif
