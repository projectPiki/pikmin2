#ifndef _PSM_BIGBOSSSEQ_H
#define _PSM_BIGBOSSSEQ_H

namespace PSSystem {
struct DirectedBgm {
	virtual void _00() = 0;                                      // _00
	virtual void init();                                         // _04
	virtual void _08() = 0;                                      // _08
	virtual void _0C() = 0;                                      // _0C
	virtual void stopSeq(unsigned long);                         // _10
	virtual void _14() = 0;                                      // _14
	virtual void _18() = 0;                                      // _18
	virtual void _1C() = 0;                                      // _1C
	virtual void _20() = 0;                                      // _20
	virtual void _24() = 0;                                      // _24
	virtual void _28() = 0;                                      // _28
	virtual void _2C() = 0;                                      // _2C
	virtual void _30() = 0;                                      // _30
	virtual void _34() = 0;                                      // _34
	virtual void _38() = 0;                                      // _38
	virtual void _3C() = 0;                                      // _3C
	virtual void newSeqTrackChild(unsigned char, SeqTrackRoot&); // _40

	// _00 VTBL
};
} // namespace PSSystem

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
	virtual void _24() = 0;              // _24
	virtual void _28() = 0;              // _28
	virtual void isPlaying();            // _2C
	virtual void seqLoadAfter();         // _30
	virtual void _34() = 0;              // _34
	virtual void setConfigVolume();      // _38

	// _00 VTBL
};
} // namespace PSSystem

namespace PSSystem {
struct JumpBgmSeq {
	virtual void _00() = 0;           // _00
	virtual void _04() = 0;           // _04
	virtual void _08() = 0;           // _08
	virtual void startSeq();          // _0C
	virtual void _10() = 0;           // _10
	virtual void _14() = 0;           // _14
	virtual void _18() = 0;           // _18
	virtual void getCastType();       // _1C
	virtual void _20() = 0;           // _20
	virtual void _24() = 0;           // _24
	virtual void onPlayingFrame();    // _28
	virtual void _2C() = 0;           // _2C
	virtual void _30() = 0;           // _30
	virtual void _34() = 0;           // _34
	virtual void _38() = 0;           // _38
	virtual void newSeqTrackRoot();   // _3C
	virtual void _40() = 0;           // _40
	virtual void getSeqStartPoint();  // _44
	virtual void _48() = 0;           // _48
	virtual void _4C() = 0;           // _4C
	virtual void _50() = 0;           // _50
	virtual void outputJumpRequest(); // _54

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

namespace PSM {
struct MiddleBossSeq {
	virtual void _00() = 0;                               // _00
	virtual void _04() = 0;                               // _04
	virtual void _08() = 0;                               // _08
	virtual void _0C() = 0;                               // _0C
	virtual void _10() = 0;                               // _10
	virtual void _14() = 0;                               // _14
	virtual void _18() = 0;                               // _18
	virtual void _1C() = 0;                               // _1C
	virtual void _20() = 0;                               // _20
	virtual void exec();                                  // _24
	virtual void _28() = 0;                               // _28
	virtual void _2C() = 0;                               // _2C
	virtual void _30() = 0;                               // _30
	virtual void _34() = 0;                               // _34
	virtual void _38() = 0;                               // _38
	virtual void _3C() = 0;                               // _3C
	virtual void _40() = 0;                               // _40
	virtual void _44() = 0;                               // _44
	virtual void requestJumpBgmQuickly(unsigned short);   // _48
	virtual void requestJumpBgmOnBeat(unsigned short);    // _4C
	virtual void requestJumpBgmEveryBeat(unsigned short); // _50

	// _00 VTBL
};
} // namespace PSM

namespace PSM {
struct BigBossSeq : public DirectedBgm,
                    public SeqBase,
                    public JumpBgmSeq,
                    public BgmSeq,
                    public MiddleBossSeq {
	virtual ~BigBossSeq();                                       // _00
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
	virtual void getSeqStartPoint();                             // _44
	virtual void requestJumpBgmQuickly(unsigned short);          // _48
	virtual void requestJumpBgmOnBeat(unsigned short);           // _4C
	virtual void requestJumpBgmEveryBeat(unsigned short);        // _50
	virtual void outputJumpRequest();                            // _54
	virtual void onJump(unsigned short);                         // _58
	virtual void jumpCheck(unsigned short);                      // _5C

	// _00 VTBL
};
} // namespace PSM

#endif
