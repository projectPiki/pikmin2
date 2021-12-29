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
	virtual ~SeqBase();                  // _00
	virtual void init();                 // _04
	virtual void scene1st(TaskChecker*); // _08
	virtual void startSeq();             // _0C
	virtual void stopSeq(unsigned long); // _10
	virtual void pauseOn(PauseMode);     // _14
	virtual void pauseOff();             // _18
	virtual void getCastType();          // _1C
	virtual void getSeqType();           // _20
	virtual void exec();                 // _24
	virtual void onPlayingFrame();       // _28
	virtual void isPlaying();            // _2C
	virtual void seqLoadAfter();         // _30
	virtual void getHandleP();           // _34
	virtual void setConfigVolume();      // _38

	// _00 VTBL
};
} // namespace PSSystem

namespace PSSystem {
struct BgmSeq : public SeqBase {
	virtual ~BgmSeq();                   // _00
	virtual void init();                 // _04
	virtual void scene1st(TaskChecker*); // _08
	virtual void startSeq();             // _0C
	virtual void stopSeq(unsigned long); // _10
	virtual void pauseOn(PauseMode);     // _14
	virtual void pauseOff();             // _18
	virtual void getCastType();          // _1C
	virtual void getSeqType();           // _20
	virtual void exec();                 // _24
	virtual void onPlayingFrame();       // _28
	virtual void isPlaying();            // _2C
	virtual void seqLoadAfter();         // _30
	virtual void getHandleP();           // _34
	virtual void setConfigVolume();      // _38

	// _00 VTBL
};
} // namespace PSSystem

#endif
