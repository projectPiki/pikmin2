#ifndef _PSSYSTEM_BGMSEQ_H
#define _PSSYSTEM_BGMSEQ_H

/*
    __vt__Q28PSSystem6BgmSeq:
    .4byte 0
    .4byte 0
    .4byte __dt__Q28PSSystem6BgmSeqFv
    .4byte init__Q28PSSystem7SeqBaseFv
    .4byte scene1st__Q28PSSystem7SeqBaseFPQ28PSSystem11TaskChecker
    .4byte startSeq__Q28PSSystem7SeqBaseFv
    .4byte stopSeq__Q28PSSystem7SeqBaseFUl
    .4byte pauseOn__Q28PSSystem7SeqBaseFQ38PSSystem7SeqBase9PauseMode
    .4byte pauseOff__Q28PSSystem7SeqBaseFv
    .4byte getCastType__Q28PSSystem6BgmSeqFv
    .4byte getSeqType__Q28PSSystem6BgmSeqFv
    .4byte exec__Q28PSSystem7SeqBaseFv
    .4byte onPlayingFrame__Q28PSSystem7SeqBaseFv
    .4byte isPlaying__Q28PSSystem7SeqBaseFv
    .4byte seqLoadAfter__Q28PSSystem7SeqBaseFv
    .4byte getHandleP__Q28PSSystem6BgmSeqFv
    .4byte setConfigVolume__Q28PSSystem7SeqBaseFv
*/

namespace PSSystem {
struct SeqBase {
	virtual ~SeqBase();                  // _08
	virtual void init();                 // _0C
	virtual void scene1st(TaskChecker*); // _10
	virtual void startSeq();             // _14
	virtual void stopSeq(unsigned long); // _18
	virtual void pauseOn(PauseMode);     // _1C
	virtual void pauseOff();             // _20
	virtual void getCastType();          // _24 (inline)
	virtual void getSeqType();           // _28 (inline)
	virtual void exec();                 // _2C
	virtual void onPlayingFrame();       // _30
	virtual void isPlaying();            // _34
	virtual void seqLoadAfter();         // _38 (inline)
	virtual void getHandleP();           // _3C (inline)
	virtual void setConfigVolume();      // _40
};
} // namespace PSSystem

namespace PSSystem {
struct BgmSeq : public SeqBase {
	virtual ~BgmSeq();          // _08
	virtual void getCastType(); // _24 (inline)
	virtual void getSeqType();  // _28 (inline)
	virtual void getHandleP();  // _3C (inline)

	BgmSeq(const char*, const JAInter::SoundInfo&);
};
} // namespace PSSystem

#endif
