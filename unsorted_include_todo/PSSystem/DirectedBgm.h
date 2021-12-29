#ifndef _PSSYSTEM_DIRECTEDBGM_H
#define _PSSYSTEM_DIRECTEDBGM_H

/*
    __vt__Q28PSSystem11DirectedBgm:
    .4byte 0
    .4byte 0
    .4byte __dt__Q28PSSystem11DirectedBgmFv
    .4byte init__Q28PSSystem11DirectedBgmFv
    .4byte scene1st__Q28PSSystem7SeqBaseFPQ28PSSystem11TaskChecker
    .4byte startSeq__Q28PSSystem11DirectedBgmFv
    .4byte stopSeq__Q28PSSystem11DirectedBgmFUl
    .4byte pauseOn__Q28PSSystem7SeqBaseFQ38PSSystem7SeqBase9PauseMode
    .4byte pauseOff__Q28PSSystem7SeqBaseFv
    .4byte getCastType__Q28PSSystem11DirectedBgmFv
    .4byte getSeqType__Q28PSSystem6BgmSeqFv
    .4byte exec__Q28PSSystem7SeqBaseFv
    .4byte onPlayingFrame__Q28PSSystem11DirectedBgmFv
    .4byte isPlaying__Q28PSSystem7SeqBaseFv
    .4byte seqLoadAfter__Q28PSSystem7SeqBaseFv
    .4byte getHandleP__Q28PSSystem6BgmSeqFv
    .4byte setConfigVolume__Q28PSSystem7SeqBaseFv
    .4byte newSeqTrackRoot__Q28PSSystem11DirectedBgmFv
    .4byte
   newSeqTrackChild__Q28PSSystem11DirectedBgmFUcRQ28PSSystem12SeqTrackRoot
*/

namespace PSSystem {
struct SeqBase {
	virtual void _00() = 0;              // _00
	virtual void _04() = 0;              // _04
	virtual void scene1st(TaskChecker*); // _08
	virtual void _0C() = 0;              // _0C
	virtual void _10() = 0;              // _10
	virtual void pauseOn(PauseMode);     // _14
	virtual void pauseOff();             // _18
	virtual void _1C() = 0;              // _1C
	virtual void _20() = 0;              // _20
	virtual void exec();                 // _24
	virtual void _28() = 0;              // _28
	virtual void isPlaying();            // _2C
	virtual void seqLoadAfter();         // _30
	virtual void _34() = 0;              // _34
	virtual void setConfigVolume();      // _38

	// _00 VTBL
};
} // namespace PSSystem

namespace PSSystem {
struct BgmSeq {
	virtual void _00() = 0;    // _00
	virtual void _04() = 0;    // _04
	virtual void _08() = 0;    // _08
	virtual void _0C() = 0;    // _0C
	virtual void _10() = 0;    // _10
	virtual void _14() = 0;    // _14
	virtual void _18() = 0;    // _18
	virtual void _1C() = 0;    // _1C
	virtual void getSeqType(); // _20
	virtual void _24() = 0;    // _24
	virtual void _28() = 0;    // _28
	virtual void _2C() = 0;    // _2C
	virtual void _30() = 0;    // _30
	virtual void getHandleP(); // _34

	// _00 VTBL
};
} // namespace PSSystem

namespace PSSystem {
struct DirectedBgm : public SeqBase, public BgmSeq {
	virtual ~DirectedBgm();                                      // _00
	virtual void init();                                         // _04
	virtual void scene1st(TaskChecker*);                         // _08
	virtual void startSeq();                                     // _0C
	virtual void stopSeq(unsigned long);                         // _10
	virtual void pauseOn(PauseMode);                             // _14
	virtual void pauseOff();                                     // _18
	virtual void getCastType();                                  // _1C
	virtual void getSeqType();                                   // _20
	virtual void exec();                                         // _24
	virtual void onPlayingFrame();                               // _28
	virtual void isPlaying();                                    // _2C
	virtual void seqLoadAfter();                                 // _30
	virtual void getHandleP();                                   // _34
	virtual void setConfigVolume();                              // _38
	virtual void newSeqTrackRoot();                              // _3C
	virtual void newSeqTrackChild(unsigned char, SeqTrackRoot&); // _40

	// _00 VTBL
};
} // namespace PSSystem

#endif
