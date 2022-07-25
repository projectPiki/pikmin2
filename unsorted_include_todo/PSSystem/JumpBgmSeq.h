#ifndef _PSSYSTEM_JUMPBGMSEQ_H
#define _PSSYSTEM_JUMPBGMSEQ_H

/*
    __vt__Q28PSSystem10JumpBgmSeq:
    .4byte 0
    .4byte 0
    .4byte __dt__Q28PSSystem10JumpBgmSeqFv
    .4byte init__Q28PSSystem11DirectedBgmFv
    .4byte scene1st__Q28PSSystem7SeqBaseFPQ28PSSystem11TaskChecker
    .4byte startSeq__Q28PSSystem10JumpBgmSeqFv
    .4byte stopSeq__Q28PSSystem11DirectedBgmFUl
    .4byte pauseOn__Q28PSSystem7SeqBaseFQ38PSSystem7SeqBase9PauseMode
    .4byte pauseOff__Q28PSSystem7SeqBaseFv
    .4byte getCastType__Q28PSSystem10JumpBgmSeqFv
    .4byte getSeqType__Q28PSSystem6BgmSeqFv
    .4byte exec__Q28PSSystem7SeqBaseFv
    .4byte onPlayingFrame__Q28PSSystem10JumpBgmSeqFv
    .4byte isPlaying__Q28PSSystem7SeqBaseFv
    .4byte seqLoadAfter__Q28PSSystem7SeqBaseFv
    .4byte getHandleP__Q28PSSystem6BgmSeqFv
    .4byte setConfigVolume__Q28PSSystem7SeqBaseFv
    .4byte newSeqTrackRoot__Q28PSSystem10JumpBgmSeqFv
    .4byte newSeqTrackChild__Q28PSSystem11DirectedBgmFUcRQ28PSSystem12SeqTrackRoot
    .4byte getSeqStartPoint__Q28PSSystem10JumpBgmSeqFv
    .4byte requestJumpBgmQuickly__Q28PSSystem10JumpBgmSeqFUs
    .4byte requestJumpBgmOnBeat__Q28PSSystem10JumpBgmSeqFUs
    .4byte requestJumpBgmEveryBeat__Q28PSSystem10JumpBgmSeqFUs
    .4byte outputJumpRequest__Q28PSSystem10JumpBgmSeqFv
    .4byte onJump__Q28PSSystem10JumpBgmSeqFUs
*/

namespace PSSystem {
struct DirectedBgm {
	virtual ~DirectedBgm();                                      // _08 (inline)
	virtual void init();                                         // _0C
	virtual void _10() = 0;                                      // _10
	virtual void startSeq();                                     // _14
	virtual void stopSeq(unsigned long);                         // _18
	virtual void _1C() = 0;                                      // _1C
	virtual void _20() = 0;                                      // _20
	virtual void getCastType();                                  // _24 (inline)
	virtual void _28() = 0;                                      // _28
	virtual void _2C() = 0;                                      // _2C
	virtual void onPlayingFrame();                               // _30
	virtual void _34() = 0;                                      // _34
	virtual void _38() = 0;                                      // _38
	virtual void _3C() = 0;                                      // _3C
	virtual void _40() = 0;                                      // _40
	virtual void newSeqTrackRoot();                              // _44
	virtual void newSeqTrackChild(unsigned char, SeqTrackRoot&); // _48
};
} // namespace PSSystem

namespace PSSystem {
struct SeqBase {
	virtual ~SeqBase();                  // _08 (inline)
	virtual void _0C() = 0;              // _0C
	virtual void scene1st(TaskChecker*); // _10
	virtual void startSeq();             // _14
	virtual void _18() = 0;              // _18
	virtual void pauseOn(PauseMode);     // _1C
	virtual void pauseOff();             // _20
	virtual void getCastType();          // _24 (inline)
	virtual void _28() = 0;              // _28
	virtual void exec();                 // _2C
	virtual void onPlayingFrame();       // _30
	virtual void isPlaying();            // _34
	virtual void seqLoadAfter();         // _38 (inline)
	virtual void _3C() = 0;              // _3C
	virtual void setConfigVolume();      // _40
};
} // namespace PSSystem

namespace PSSystem {
struct BgmSeq {
	virtual ~BgmSeq();             // _08 (inline)
	virtual void _0C() = 0;        // _0C
	virtual void _10() = 0;        // _10
	virtual void startSeq();       // _14
	virtual void _18() = 0;        // _18
	virtual void _1C() = 0;        // _1C
	virtual void _20() = 0;        // _20
	virtual void getCastType();    // _24 (inline)
	virtual void getSeqType();     // _28 (inline)
	virtual void _2C() = 0;        // _2C
	virtual void onPlayingFrame(); // _30
	virtual void _34() = 0;        // _34
	virtual void _38() = 0;        // _38
	virtual void getHandleP();     // _3C (inline)
};
} // namespace PSSystem

namespace PSSystem {
struct JumpBgmSeq : public DirectedBgm, public SeqBase, public BgmSeq {
	virtual ~JumpBgmSeq();                                // _08 (inline)
	virtual void startSeq();                              // _14
	virtual void getCastType();                           // _24 (inline)
	virtual void onPlayingFrame();                        // _30
	virtual void newSeqTrackRoot();                       // _44
	virtual void getSeqStartPoint();                      // _4C
	virtual void requestJumpBgmQuickly(unsigned short);   // _50
	virtual void requestJumpBgmOnBeat(unsigned short);    // _54
	virtual void requestJumpBgmEveryBeat(unsigned short); // _58
	virtual void outputJumpRequest();                     // _5C
	virtual void onJump(unsigned short);                  // _60 (inline)

	JumpBgmSeq(const char*, const JAInter::SoundInfo&, PSSystem::DirectorMgrBase*);
	void startSeq(unsigned short);
	void setAvoidJumpTimer_Checked(unsigned long);
};
} // namespace PSSystem

#endif
