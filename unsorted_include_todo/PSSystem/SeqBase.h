#ifndef _PSSYSTEM_SEQBASE_H
#define _PSSYSTEM_SEQBASE_H

namespace PSSystem {
struct SeqBase {
	virtual ~SeqBase();                  // _00
	virtual void init();                 // _04
	virtual void scene1st(TaskChecker*); // _08
	virtual void startSeq();             // _0C
	virtual void stopSeq(unsigned long); // _10
	virtual void pauseOn(PauseMode);     // _14
	virtual void pauseOff();             // _18
	virtual void _1C() = 0;              // _1C
	virtual void _20() = 0;              // _20
	virtual void exec();                 // _24
	virtual void onPlayingFrame();       // _28
	virtual void isPlaying();            // _2C
	virtual void seqLoadAfter();         // _30
	virtual void _34() = 0;              // _34
	virtual void setConfigVolume();      // _38

	// _00 VTBL
};
} // namespace PSSystem

#endif
