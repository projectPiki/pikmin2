#ifndef _PSSYSTEM_SEQBASE_H
#define _PSSYSTEM_SEQBASE_H

/*
    __vt__Q28PSSystem7SeqBase:
    .4byte 0
    .4byte 0
    .4byte __dt__Q28PSSystem7SeqBaseFv
    .4byte init__Q28PSSystem7SeqBaseFv
    .4byte scene1st__Q28PSSystem7SeqBaseFPQ28PSSystem11TaskChecker
    .4byte startSeq__Q28PSSystem7SeqBaseFv
    .4byte stopSeq__Q28PSSystem7SeqBaseFUl
    .4byte pauseOn__Q28PSSystem7SeqBaseFQ38PSSystem7SeqBase9PauseMode
    .4byte pauseOff__Q28PSSystem7SeqBaseFv
    .4byte 0
    .4byte 0
    .4byte exec__Q28PSSystem7SeqBaseFv
    .4byte onPlayingFrame__Q28PSSystem7SeqBaseFv
    .4byte isPlaying__Q28PSSystem7SeqBaseFv
    .4byte seqLoadAfter__Q28PSSystem7SeqBaseFv
    .4byte 0
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
	virtual void _24() = 0;              // _24
	virtual void _28() = 0;              // _28
	virtual void exec();                 // _2C
	virtual void onPlayingFrame();       // _30
	virtual void isPlaying();            // _34
	virtual void seqLoadAfter();         // _38 (inline)
	virtual void _3C() = 0;              // _3C
	virtual void setConfigVolume();      // _40

	SeqBase(const char*, const JAInter::SoundInfo&);
	void getFileEntry();
};
} // namespace PSSystem

#endif
