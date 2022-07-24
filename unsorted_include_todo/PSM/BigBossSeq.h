#ifndef _PSM_BIGBOSSSEQ_H
#define _PSM_BIGBOSSSEQ_H

/*
    __vt__Q23PSM10BigBossSeq:
    .4byte 0
    .4byte 0
    .4byte __dt__Q23PSM10BigBossSeqFv
    .4byte init__Q28PSSystem11DirectedBgmFv
    .4byte scene1st__Q28PSSystem7SeqBaseFPQ28PSSystem11TaskChecker
    .4byte startSeq__Q28PSSystem10JumpBgmSeqFv
    .4byte stopSeq__Q28PSSystem11DirectedBgmFUl
    .4byte pauseOn__Q28PSSystem7SeqBaseFQ38PSSystem7SeqBase9PauseMode
    .4byte pauseOff__Q28PSSystem7SeqBaseFv
    .4byte getCastType__Q28PSSystem10JumpBgmSeqFv
    .4byte getSeqType__Q28PSSystem6BgmSeqFv
    .4byte exec__Q23PSM13MiddleBossSeqFv
    .4byte onPlayingFrame__Q28PSSystem10JumpBgmSeqFv
    .4byte isPlaying__Q28PSSystem7SeqBaseFv
    .4byte seqLoadAfter__Q28PSSystem7SeqBaseFv
    .4byte getHandleP__Q28PSSystem6BgmSeqFv
    .4byte setConfigVolume__Q28PSSystem7SeqBaseFv
    .4byte newSeqTrackRoot__Q28PSSystem10JumpBgmSeqFv
    .4byte newSeqTrackChild__Q28PSSystem11DirectedBgmFUcRQ28PSSystem12SeqTrackRoot
    .4byte getSeqStartPoint__Q28PSSystem10JumpBgmSeqFv
    .4byte requestJumpBgmQuickly__Q23PSM13MiddleBossSeqFUs
    .4byte requestJumpBgmOnBeat__Q23PSM13MiddleBossSeqFUs
    .4byte requestJumpBgmEveryBeat__Q23PSM13MiddleBossSeqFUs
    .4byte outputJumpRequest__Q28PSSystem10JumpBgmSeqFv
    .4byte onJump__Q23PSM10BigBossSeqFUs
    .4byte jumpCheck__Q23PSM10BigBossSeqFUs
*/

namespace PSSystem {
struct DirectedBgm {
	virtual ~DirectedBgm();                                      // _08 (inline)
	virtual void init();                                         // _0C
	virtual void _10() = 0;                                      // _10
	virtual void _14() = 0;                                      // _14
	virtual void stopSeq(unsigned long);                         // _18
	virtual void _1C() = 0;                                      // _1C
	virtual void _20() = 0;                                      // _20
	virtual void _24() = 0;                                      // _24
	virtual void _28() = 0;                                      // _28
	virtual void _2C() = 0;                                      // _2C
	virtual void _30() = 0;                                      // _30
	virtual void _34() = 0;                                      // _34
	virtual void _38() = 0;                                      // _38
	virtual void _3C() = 0;                                      // _3C
	virtual void _40() = 0;                                      // _40
	virtual void _44() = 0;                                      // _44
	virtual void newSeqTrackChild(unsigned char, SeqTrackRoot&); // _48
};
} // namespace PSSystem

namespace PSSystem {
struct SeqBase {
	virtual ~SeqBase();                  // _08 (inline)
	virtual void _0C() = 0;              // _0C
	virtual void scene1st(TaskChecker*); // _10
	virtual void _14() = 0;              // _14
	virtual void _18() = 0;              // _18
	virtual void pauseOn(PauseMode);     // _1C
	virtual void pauseOff();             // _20
	virtual void _24() = 0;              // _24
	virtual void _28() = 0;              // _28
	virtual void _2C() = 0;              // _2C
	virtual void _30() = 0;              // _30
	virtual void isPlaying();            // _34
	virtual void seqLoadAfter();         // _38 (inline)
	virtual void _3C() = 0;              // _3C
	virtual void setConfigVolume();      // _40
};
} // namespace PSSystem

namespace PSSystem {
struct JumpBgmSeq {
	virtual ~JumpBgmSeq();            // _08 (inline)
	virtual void _0C() = 0;           // _0C
	virtual void _10() = 0;           // _10
	virtual void startSeq();          // _14
	virtual void _18() = 0;           // _18
	virtual void _1C() = 0;           // _1C
	virtual void _20() = 0;           // _20
	virtual void getCastType();       // _24 (inline)
	virtual void _28() = 0;           // _28
	virtual void _2C() = 0;           // _2C
	virtual void onPlayingFrame();    // _30
	virtual void _34() = 0;           // _34
	virtual void _38() = 0;           // _38
	virtual void _3C() = 0;           // _3C
	virtual void _40() = 0;           // _40
	virtual void newSeqTrackRoot();   // _44
	virtual void _48() = 0;           // _48
	virtual void getSeqStartPoint();  // _4C
	virtual void _50() = 0;           // _50
	virtual void _54() = 0;           // _54
	virtual void _58() = 0;           // _58
	virtual void outputJumpRequest(); // _5C
};
} // namespace PSSystem

namespace PSSystem {
struct BgmSeq {
	virtual ~BgmSeq();         // _08 (inline)
	virtual void _0C() = 0;    // _0C
	virtual void _10() = 0;    // _10
	virtual void _14() = 0;    // _14
	virtual void _18() = 0;    // _18
	virtual void _1C() = 0;    // _1C
	virtual void _20() = 0;    // _20
	virtual void _24() = 0;    // _24
	virtual void getSeqType(); // _28 (inline)
	virtual void _2C() = 0;    // _2C
	virtual void _30() = 0;    // _30
	virtual void _34() = 0;    // _34
	virtual void _38() = 0;    // _38
	virtual void getHandleP(); // _3C (inline)
};
} // namespace PSSystem

namespace PSM {
struct MiddleBossSeq {
	virtual ~MiddleBossSeq();                             // _08 (inline)
	virtual void _0C() = 0;                               // _0C
	virtual void _10() = 0;                               // _10
	virtual void _14() = 0;                               // _14
	virtual void _18() = 0;                               // _18
	virtual void _1C() = 0;                               // _1C
	virtual void _20() = 0;                               // _20
	virtual void _24() = 0;                               // _24
	virtual void _28() = 0;                               // _28
	virtual void exec();                                  // _2C
	virtual void _30() = 0;                               // _30
	virtual void _34() = 0;                               // _34
	virtual void _38() = 0;                               // _38
	virtual void _3C() = 0;                               // _3C
	virtual void _40() = 0;                               // _40
	virtual void _44() = 0;                               // _44
	virtual void _48() = 0;                               // _48
	virtual void _4C() = 0;                               // _4C
	virtual void requestJumpBgmQuickly(unsigned short);   // _50
	virtual void requestJumpBgmOnBeat(unsigned short);    // _54
	virtual void requestJumpBgmEveryBeat(unsigned short); // _58
};
} // namespace PSM

namespace PSM {
struct BigBossSeq : public DirectedBgm, public SeqBase, public JumpBgmSeq, public BgmSeq, public MiddleBossSeq {
	virtual ~BigBossSeq();                  // _08 (inline)
	virtual void onJump(unsigned short);    // _60
	virtual void jumpCheck(unsigned short); // _64

	BigBossSeq();
};
} // namespace PSM

#endif
