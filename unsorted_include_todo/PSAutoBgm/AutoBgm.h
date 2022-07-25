#ifndef _PSAUTOBGM_AUTOBGM_H
#define _PSAUTOBGM_AUTOBGM_H

/*
    __vt__Q29PSAutoBgm7AutoBgm:
    .4byte 0
    .4byte 0
    .4byte __dt__Q29PSAutoBgm7AutoBgmFv
    .4byte init__Q28PSSystem11DirectedBgmFv
    .4byte scene1st__Q29PSAutoBgm7AutoBgmFPQ28PSSystem11TaskChecker
    .4byte startSeq__Q29PSAutoBgm7AutoBgmFv
    .4byte stopSeq__Q28PSSystem11DirectedBgmFUl
    .4byte pauseOn__Q29PSAutoBgm7AutoBgmFQ38PSSystem7SeqBase9PauseMode
    .4byte pauseOff__Q29PSAutoBgm7AutoBgmFv
    .4byte getCastType__Q29PSAutoBgm7AutoBgmFv
    .4byte getSeqType__Q28PSSystem6BgmSeqFv
    .4byte exec__Q28PSSystem7SeqBaseFv
    .4byte onPlayingFrame__Q28PSSystem11DirectedBgmFv
    .4byte isPlaying__Q28PSSystem7SeqBaseFv
    .4byte seqLoadAfter__Q28PSSystem7SeqBaseFv
    .4byte getHandleP__Q28PSSystem6BgmSeqFv
    .4byte setConfigVolume__Q28PSSystem7SeqBaseFv
    .4byte newSeqTrackRoot__Q29PSAutoBgm7AutoBgmFv
    .4byte newSeqTrackChild__Q28PSSystem11DirectedBgmFUcRQ28PSSystem12SeqTrackRoot
*/

namespace PSSystem {
struct DirectedBgm {
	virtual ~DirectedBgm();                                      // _08 (weak)
	virtual void init();                                         // _0C
	virtual void scene1st(PSSystem::TaskChecker*);               // _10
	virtual void startSeq();                                     // _14
	virtual void stopSeq(unsigned long);                         // _18
	virtual void pauseOn(PSSystem::SeqBase::PauseMode);          // _1C
	virtual void pauseOff();                                     // _20
	virtual void getCastType();                                  // _24 (weak)
	virtual void _28() = 0;                                      // _28
	virtual void _2C() = 0;                                      // _2C
	virtual void onPlayingFrame();                               // _30
	virtual void _34() = 0;                                      // _34
	virtual void _38() = 0;                                      // _38
	virtual void _3C() = 0;                                      // _3C
	virtual void _40() = 0;                                      // _40
	virtual void newSeqTrackRoot();                              // _44 (weak)
	virtual void newSeqTrackChild(unsigned char, SeqTrackRoot&); // _48
};
} // namespace PSSystem

namespace PSSystem {
struct BgmSeq {
	virtual ~BgmSeq();                                  // _08 (weak)
	virtual void _0C() = 0;                             // _0C
	virtual void scene1st(PSSystem::TaskChecker*);      // _10
	virtual void startSeq();                            // _14
	virtual void _18() = 0;                             // _18
	virtual void pauseOn(PSSystem::SeqBase::PauseMode); // _1C
	virtual void pauseOff();                            // _20
	virtual void getCastType();                         // _24 (weak)
	virtual void getSeqType();                          // _28 (weak)
	virtual void _2C() = 0;                             // _2C
	virtual void _30() = 0;                             // _30
	virtual void _34() = 0;                             // _34
	virtual void _38() = 0;                             // _38
	virtual void getHandleP();                          // _3C (weak)
};
} // namespace PSSystem

namespace PSSystem {
struct SeqBase {
	virtual ~SeqBase();                                 // _08 (weak)
	virtual void _0C() = 0;                             // _0C
	virtual void scene1st(PSSystem::TaskChecker*);      // _10
	virtual void startSeq();                            // _14
	virtual void _18() = 0;                             // _18
	virtual void pauseOn(PSSystem::SeqBase::PauseMode); // _1C
	virtual void pauseOff();                            // _20
	virtual void getCastType();                         // _24 (weak)
	virtual void _28() = 0;                             // _28
	virtual void exec();                                // _2C
	virtual void _30() = 0;                             // _30
	virtual void isPlaying();                           // _34
	virtual void seqLoadAfter();                        // _38 (weak)
	virtual void _3C() = 0;                             // _3C
	virtual void setConfigVolume();                     // _40
};
} // namespace PSSystem

namespace PSAutoBgm {
struct AutoBgm : public DirectedBgm, public BgmSeq, public SeqBase {
	virtual ~AutoBgm();                                 // _08 (weak)
	virtual void scene1st(PSSystem::TaskChecker*);      // _10
	virtual void startSeq();                            // _14
	virtual void pauseOn(PSSystem::SeqBase::PauseMode); // _1C
	virtual void pauseOff();                            // _20
	virtual void getCastType();                         // _24 (weak)
	virtual void newSeqTrackRoot();                     // _44 (weak)

	AutoBgm(const char*, const char*, const JAInter::SoundInfo&, JADUtility::AccessMode, PSSystem::DirectorMgrBase*);
	void loadConductor(PSSystem::TaskChecker*);
	void loadedCallback(unsigned long, unsigned long);
};
} // namespace PSAutoBgm

#endif
