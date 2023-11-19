#ifndef _PSSYSTEM_PSBGM_H
#define _PSSYSTEM_PSBGM_H

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

/**
 * @size = 0x6C
 */
struct BgmSeq : public SeqBase {
	BgmSeq(const char* bmsFileName, const JAInter::SoundInfo& info);

	virtual ~BgmSeq();                                    // _08
	virtual u8 getCastType() { return 0; }                // _24 (weak)
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

	enum CastType {
		BgmType_NULL     = 0,
		BgmType_Battle   = 2,
		BgmType_Cave     = 3,
		BgmType_2PBattle = 8,
	};

	DirectedBgm(const char* bmsFileName, const JAInter::SoundInfo& info, DirectorMgrBase* directorMgr);

	virtual ~DirectedBgm() { }                                  // _08 (weak)
	virtual void init();                                        // _0C
	virtual void startSeq();                                    // _14
	virtual void stopSeq(u32);                                  // _18
	virtual u8 getCastType() { return 2; }                      // _24 (weak)
	virtual void onPlayingFrame();                              // _30
	virtual SeqTrackRoot* newSeqTrackRoot();                    // _44
	virtual SeqTrackChild* newSeqTrackChild(u8, SeqTrackRoot&); // _48

	void initRootTrack_onPlaying(JASTrack*);
	void initChildTrack_onPlaying(JASTrack*, u8);
	DirectorBase* getDirectorP(u8);

	// unused/inlined:
	void getDirector(u8);

	inline void removeAllChildren()
	{
		bool check = _B4 == 1 && mRootTrack;
		P2ASSERTLINE(415, check);
		mRootTrack->getTaskEntryList()->removeAllEntry();
		for (u8 i = 0; i < 16; i++) {
			int count = i;
			P2ASSERTLINE(419, count < 16);
			if (mChildTracks[count]) {
				mChildTracks[count]->getTaskEntryList()->removeAllEntry();
			}
		}
	}

	// _00-_10  = JSULink<SeqBase>
	// _10      = VTABLE
	// _14-_6C  = BgmSeq
	DirectorMgrBase* mDirectorMgr;   // _6C
	SeqTrackRoot* mRootTrack;        // _70
	SeqTrackChild* mChildTracks[16]; // _74
	u8 _B4;                          // _B4 - unknown
};

/**
 * @size = 0x134
 */
struct JumpBgmSeq : public DirectedBgm {
	JumpBgmSeq(const char* bmsFileName, const JAInter::SoundInfo& info, DirectorMgrBase* directorMgr);

	virtual ~JumpBgmSeq() { }                          // _08 (weak)
	virtual void startSeq();                           // _14
	virtual u8 getCastType() { return 4; }             // _24 (weak)
	virtual void onPlayingFrame();                     // _30
	virtual PSSystem::SeqTrackRoot* newSeqTrackRoot(); // _44
	virtual int getSeqStartPoint();                    // _4C
	virtual void requestJumpBgmQuickly(u16);           // _50
	virtual void requestJumpBgmOnBeat(u16);            // _54
	virtual void requestJumpBgmEveryBeat(u16);         // _58
	virtual void outputJumpRequest();                  // _5C
	virtual void onJump(u16) { }                       // _60 (weak)

	void startSeq(u16);
	void setAvoidJumpTimer_Checked(u32);

	// _00-_10  = JSULink<SeqBase>
	// _10      = VTABLE
	// _14-_68  = SeqBase
	// _6C-_B8  = DirectedBgm

	OSMutex _B8;      // _B8
	short _D0;        // _D0
	OSMutex _D4;      // _D4
	short _EC;        // _EC
	OSMutex _F0;      // _F0
	u16 _108;         // _108
	OSMutex _10C;     // _10C
	u16 _124;         // _124
	JumpBgmSeq* _128; // _128
	u32 _12C;         // _12C
	short _130;       // _130
};

struct JumpBgmPort {
	JumpBgmPort(JumpBgmSeq*);

	void onBeatTop(struct BeatMgr&);

	// unused/inlined:
	void requestQuickly(u16);
	void requestOnBeat(u16);
	void requestEveryBeat(u16);
	void output();
};

} // namespace PSSystem

#endif
