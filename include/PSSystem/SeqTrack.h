#ifndef _PSSYSTEM_SEQTRACK_H
#define _PSSYSTEM_SEQTRACK_H

#include "types.h"
#include "PSSystem/PSBgmTask.h"
#include "PSSystem/Director.h"
#include "JSystem/JAS/JASTrack.h"
#include "JSystem/JAD/JADDataMgr.h"

namespace PSSystem {

/**
 * @size 0x1
 */
struct BeatMgr {
	inline BeatMgr()
	    : _00(0)
	{
	}

	void proc();

	u8 _00; // _00 - unknown, but size 0x1 (or 0x2?)
};

/**
 * @size 0x2C
 */
struct SeqTrackBase {
	virtual bool update();        // _08
	virtual void init(JASTrack*); // _0C
	virtual void onStopSeq() = 0; // _10

	TaskEntryMgr* getTaskEntryList();

	TaskEntryMgr m_taskEntryMgr; // _04
};

/**
 * @size 0x2C8
 */
struct SeqTrackRoot : public SeqTrackBase {
	SeqTrackRoot();

	virtual bool update() // _08 (weak)
	{
		m_beatMgr.proc();
		return SeqTrackBase::update();
	}
	virtual void init(JASTrack*); // _0C
	virtual void onStopSeq();     // _10
	virtual u16 beatUpdate();     // _14
	virtual void onBeatTop() { }  // _18 (weak)

	void initSwingRatio();
	void pitchModulation(float, float, u32, DirectorBase*);
	void tempoChange(float, u32, DirectorBase*);

	// _00      = VTABLE
	// _04-_2C  = SeqBase
	u16 _2C;                       // _2C
	u16 _2E;                       // _2E
	u16 _30;                       // _30
	u16 _32;                       // _32
	float _34;                     // _34
	int _38;                       // _38 - unknown
	BeatMgr m_beatMgr;             // _3C
	u8 _3D;                        // _3D - possibly padding or part of BeatMgr
	u16 _3E;                       // _3E
	TaskEntry_Tempo _40;           // _40
	TaskEntry_OuterParam _100;     // _100
	TaskEntry_PitMod _16C;         // _16C
	TaskEntry_BankRandTask _20C;   // _20C
	JADUtility::DataMgrNode* _2C4; // _2C4
};

struct SeqTrackRoot_JumpBgm : public SeqTrackRoot {
	virtual void onBeatTop(); // _18
};

/**
 * @size 0x27C
 */
struct SeqTrackChild : public SeqTrackBase {
	SeqTrackChild(const SeqTrackRoot&);

	virtual void onStopSeq(); // _10

	void muteOffAndFadeIn(float, u32, DirectorBase*);
	void fadeoutAndMute(u32, DirectorBase*);
	void fade(float, u32, DirectorBase*);
	void setIdMask(u8, DirectorBase*);

	// _00      = VTABLE
	// _04-_2C  = SeqBase
	TaskEntry_MuteVolume _2C;    // _2C
	TaskEntry_MuteOnVolume _12C; // _12C
	TaskEntry_OuterParam _1B8;   // _1B8
	TaskEntry_IdMask _224;       // _224
};

} // namespace PSSystem

#endif
