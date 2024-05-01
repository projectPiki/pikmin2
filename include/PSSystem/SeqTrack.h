#ifndef _PSSYSTEM_SEQTRACK_H
#define _PSSYSTEM_SEQTRACK_H

#include "types.h"
#include "PSSystem/PSBgmTask.h"
#include "JSystem/JAudio/JAS/JASTrack.h"
#include "JSystem/JAudio/JAD/JADDataMgr.h"

namespace PSSystem {
struct JumpBgmPort;

/**
 * @size 0x1
 */
struct BeatMgr {
	inline BeatMgr()
	    : mFlags(0)
	{
	}

	void proc();

	u8 mFlags; // _00 - unknown, but size 0x1 (or 0x2?)
};

/**
 * @size 0x2C
 */
struct SeqTrackBase {
	virtual u16 update();         // _08
	virtual void init(JASTrack*); // _0C
	virtual void onStopSeq() = 0; // _10

	TaskEntryMgr* getTaskEntryList();

	inline void removeEntry() { getTaskEntryList()->removeAllEntry(); }

	TaskEntryMgr mTaskEntryMgr; // _04
};

/**
 * @size 0x2C8
 */
struct SeqTrackRoot : public SeqTrackBase {
	SeqTrackRoot();

	virtual u16 update() // _08 (weak)
	{
		mBeatMgr.proc();
		return SeqTrackBase::update();
	}
	virtual void init(JASTrack*); // _0C
	virtual void onStopSeq();     // _10
	virtual u16 beatUpdate();     // _14
	virtual void onBeatTop() { }  // _18 (weak)

	void initSwingRatio();
	void pitchModulation(f32, f32, u32, DirectorBase*);
	void tempoChange(f32, u32, DirectorBase*);

	// _00      = VTABLE
	// _04-_2C  = SeqBase
	u16 mStandardTempo;                   // _2C, for olimar
	u16 mActiveTempo;                     // _2E, actual active tempo
	u16 mSwingTempoMin;                   // _30, min tempo for louie swing
	u16 mSwingTempoMax;                   // _32, max tempo for louie swing
	f32 mSwingMagnitude;                  // _34, how significant the swing is (?)
	int mSwingState;                      // _38, 0 = olimar, 1 = louie
	BeatMgr mBeatMgr;                     // _3C
	u16 mBeatInterval;                    // _3E, used to determine swing movement rate, usually 60
	TaskEntry_Tempo mTempoTask;           // _40, for low health
	TaskEntry_OuterParam _100;            // _100
	TaskEntry_PitMod mPitchModTask;       // _16C, for taking damage
	TaskEntry_BankRandTask mBankRandTask; // _20C
};

struct SeqTrackRoot_JumpBgm : public SeqTrackRoot {
	SeqTrackRoot_JumpBgm(JumpBgmPort* port) { mJumpPort = port; }
	virtual void onBeatTop(); // _18

	JumpBgmPort* mJumpPort; // _2C4
};

/**
 * @size 0x27C
 */
struct SeqTrackChild : public SeqTrackBase {
	SeqTrackChild(const SeqTrackRoot&);

	virtual void onStopSeq(); // _10

	void muteOffAndFadeIn(f32, u32, DirectorBase*);
	void fadeoutAndMute(u32, DirectorBase*);
	void fade(f32, u32, DirectorBase*);
	void setIdMask(u8, DirectorBase*);

	// _00      = VTABLE
	// _04-_2C  = SeqBase
	TaskEntry_MuteVolume mMuteVolumeTask; // _2C
	TaskEntry_MuteOnVolume mMuteOnTask;   // _12C
	TaskEntry_OuterParam mFadeTask;       // _1B8
	TaskEntry_IdMask mIdMaskTask;         // _224
};

} // namespace PSSystem

#endif
