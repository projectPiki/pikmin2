#ifndef _PSSYSTEM_BGMSEQ_H
#define _PSSYSTEM_BGMSEQ_H

namespace PSSystem {
struct SeqBase {
	virtual void _00() = 0;              // _00
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
