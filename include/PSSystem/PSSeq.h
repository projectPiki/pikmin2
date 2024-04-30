#ifndef _PSSYSTEM_PSSEQ_H
#define _PSSYSTEM_PSSEQ_H

#include "types.h"
#include "PSSystem/Seq.h"
#include "JSystem/JAudio/JAI/JAInter.h"
#include "JSystem/JAudio/JAI/JAISound.h"
#include "Dolphin/os.h"
#include "JSystem/JAudio/JAS/JASTrack.h"
#include "PSSystem/SeqTrack.h"

namespace PSSystem {
struct DirectorMgrBase;
struct SeqTrackRoot;
struct SeqTrackChild;
struct JumpBgmSeq;

/**
 * @size = 0x6C
 */
struct BgmSeq : public SeqBase {
	BgmSeq(const char* bmsFileName, const JAInter::SoundInfo& info);

	virtual ~BgmSeq();                                    // _08
	virtual u8 getCastType() { return TYPE_BgmSeq; }      // _24 (weak)
	virtual u32 getSeqType() { return 0x80000000; }       // _28 (weak)
	virtual JAISound** getHandleP() { return &mHandleP; } // _3C (weak)

	// _00-_10  = JSULink<SeqBase>
	// _10      = VTABLE
	// _14-_68  = SeqBase
	JAISound* mHandleP; // _68
};

/**
 * @size = 0xB8
 */
struct DirectedBgm : public BgmSeq {
	DirectedBgm(const char* bmsFileName, const JAInter::SoundInfo& info, DirectorMgrBase* directorMgr);

	virtual ~DirectedBgm() { }                                  // _08 (weak)
	virtual void init();                                        // _0C
	virtual void startSeq();                                    // _14
	virtual void stopSeq(u32);                                  // _18
	virtual u8 getCastType() { return TYPE_DirectedBgm; }       // _24 (weak)
	virtual void onPlayingFrame();                              // _30
	virtual SeqTrackRoot* newSeqTrackRoot();                    // _44
	virtual SeqTrackChild* newSeqTrackChild(u8, SeqTrackRoot&); // _48

	void initRootTrack_onPlaying(JASTrack*);
	void initChildTrack_onPlaying(JASTrack*, u8);
	DirectorBase* getDirectorP(u8);

	// unused/inlined:
	void getDirector(u8);

	inline void assertValidTrack()
	{
		bool check = mIsInitialized == 1 && mRootTrack;
		P2ASSERTLINE(415, check);
	}

	inline SeqTrackChild* getChildTrack(int i)
	{
		P2ASSERTLINE(419, i < 16);
		return mChildTracks[i];
	}

	// _00-_10  = JSULink<SeqBase>
	// _10      = VTABLE
	// _14-_6C  = BgmSeq
	DirectorMgrBase* mDirectorMgr;   // _6C
	SeqTrackRoot* mRootTrack;        // _70
	SeqTrackChild* mChildTracks[16]; // _74
	u8 mIsInitialized;               // _B4
};

struct JumpBgmPort {
	JumpBgmPort(JumpBgmSeq*);

	void onBeatTop(struct BeatMgr&);

	// unused/inlined:
	void requestQuickly(u16);
	void requestOnBeat(u16);
	void requestEveryBeat(u16);
	u16 output();

	OSMutex mMutex1;     // _00
	u16 _18;             // _18
	OSMutex mMutex2;     // _1C
	u16 _34;             // _34
	OSMutex mMutex3;     // _38
	u16 _50;             // _50
	OSMutex mMutex4;     // _54
	u16 _64;             // _64
	JumpBgmSeq* mOwner;  // _68
	u32 mAvoidJumpTimer; // _6C
	u16 _70;             // _70
};

/**
 * @size = 0x134
 */
struct JumpBgmSeq : public DirectedBgm {
	JumpBgmSeq(const char* bmsFileName, const JAInter::SoundInfo& info, DirectorMgrBase* directorMgr);

	virtual ~JumpBgmSeq() { }                            // _08 (weak)
	virtual void startSeq();                             // _14
	virtual u8 getCastType() { return TYPE_JumpBgmSeq; } // _24 (weak)
	virtual void onPlayingFrame();                       // _30
	virtual PSSystem::SeqTrackRoot* newSeqTrackRoot();   // _44
	virtual u16 getSeqStartPoint();                      // _4C
	virtual void requestJumpBgmQuickly(u16);             // _50
	virtual void requestJumpBgmOnBeat(u16);              // _54
	virtual void requestJumpBgmEveryBeat(u16);           // _58
	virtual u16 outputJumpRequest();                     // _5C
	virtual void onJump(u16) { }                         // _60 (weak)

	void startSeq(u16);
	void setAvoidJumpTimer_Checked(u32);

	// _00-_10  = JSULink<SeqBase>
	// _10      = VTABLE
	// _14-_68  = SeqBase
	// _6C-_B8  = DirectedBgm

	JumpBgmPort mJumpPort; // _BC
};

} // namespace PSSystem

#endif
