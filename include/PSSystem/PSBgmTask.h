#ifndef _PSSYSTEM_PSBGMTASK_H
#define _PSSYSTEM_PSBGMTASK_H

#include "Dolphin/os.h"
#include "P2Macros.h"
#include "JSystem/JSupport/JSUList.h"
#include "PSSystem/BankRandPrm.h"
#include "PSSystem/MutexList.h"
#include "JSystem/JAudio/JAS/JASTrack.h"
#include "PSSystem/PSTaskBase.h"

namespace PSSystem {

struct FlagWaitTask : public TaskBase {
	inline FlagWaitTask()
	    : TaskBase()
	    , _1C(-16)
	{
	}

	virtual int task(JASTrack& track) // _08
	{
		return _1C;
	}

	// _00     = VTBL
	// _00-_1C = TaskBase
	u32 _1C; // _1C
};

struct IdMaskTask : public TaskBase {
	inline IdMaskTask()
	    : TaskBase()
	    , mNoteMask(0)
	{
	}

	int task(JASTrack& track)
	{
		track.setNoteMask(mNoteMask);
		return -1;
	}

	// _00     = VTBL
	// _00-_1C = TaskBase
	u8 mNoteMask; // _1C
};

struct MuteTask : public TaskBase {
	inline MuteTask()
	    : TaskBase()
	    , mDoMuteTrack(0)
	{
	}

	int task(JASTrack& track)
	{
		track.muteTrack(mDoMuteTrack);
		return -1;
	}

	// _00     = VTBL
	// _00-_1C = TaskBase
	u8 mDoMuteTrack; // _1C
};

struct PitchResetTask : public TaskBase {
	virtual int task(JASTrack& track) // _08
	{
		track.setParam(JASTrack::JASParam_Pitch, 0.0f, -1);
		return -1;
	}

	// _00     = VTBL
	// _00-_1C = TaskBase
};

struct SimpleWaitTask : public TaskBase {
	inline SimpleWaitTask()
	    : TaskBase()
	    , mWaitTimer(0)
	    , mWaitMaxTime(0)
	{
	}

	virtual int task(JASTrack&); // _08

	// _00     = VTBL
	// _00-_1C = TaskBase
	u32 mWaitTimer;   // _1C
	u32 mWaitMaxTime; // _20
};

struct ModParamWithTableTask : public TaskBase {
	inline ModParamWithTableTask()
	    : TaskBase()
	    , mTargetValue(0.0f)
	    , mIdxIncRate(0.0f)
	    , mCurrTableIdx(0.0f)
	{
	}

	virtual int task(JASTrack&);               // _08
	virtual f32 getTgtWithTable(u8)       = 0; // _0C
	virtual u8 getTableIdxNum()           = 0; // _10
	virtual int tableTask(JASTrack&, f32) = 0; // _14

	// _00     = VTBL
	// _00-_1C = TaskBase
	f32 mTargetValue;  // _1C
	f32 mIdxIncRate;   // _20
	f32 mCurrTableIdx; // _24
};

struct TriangleTableModTask : public ModParamWithTableTask {

	virtual f32 getTgtWithTable(u8 idx) { return mTargetValue * sTable[idx]; } // _0C
	virtual u8 getTableIdxNum() { return 40; }                                 // _10
	virtual int tableTask(JASTrack&, f32) = 0;                                 // _14

	static const f32 sTable[40];

	// _00     = VTBL
	// _00-_28 = ModParamWithTableTask
};

struct PitchModTask : public TriangleTableModTask {
	virtual int tableTask(JASTrack&, f32); // _14

	// _00     = VTBL
	// _00-_28 = ModParamWithTableTask
};

struct ModParamWithFade : public TaskBase {
	inline ModParamWithFade()
	    : TaskBase()
	    , mFadeDuration(0)
	    , mTargetValue(0.0f)
	    , _24(0.0f)
	    , mCounter(0)
	    , mCurrTime(0.0f)
	{
	}

	virtual int task(JASTrack&);               // _08
	virtual f32 getPreParam(JASTrack&)    = 0; // _0C
	virtual void timeTask(JASTrack&, f32) = 0; // _10

	// _00     = VTBL
	// _00-_1C = TaskBase
	u32 mFadeDuration; // _1C
	f32 mTargetValue;  // _20
	f32 _24;           // _24
	u32 mCounter;      // _28
	f32 mCurrTime;     // _2C
};

struct BankRandTask : public ModParamWithFade {
	inline BankRandTask()
	    : ModParamWithFade()
	{
		P2ASSERTLINE(351, BankRandPrm::sInstance);
	}

	virtual void timeTask(JASTrack& track, f32 p2) // _10 (weak)
	{
		BankRandPrm::sInstance->mInst.mCeiling = p2;
	}
	virtual f32 getPreParam(JASTrack& track) // _0C (weak)
	{
		return BankRandPrm::sInstance->mInst.mCeiling;
	}

	// _00     = VTBL
	// _00-_30 = ModParamWithFade
};

struct OuterParamTask : public ModParamWithFade {
	inline OuterParamTask(int type)
	    : ModParamWithFade()
	    , mTaskType(type)
	{
	}

	virtual f32 getPreParam(JASTrack&);    // _0C
	virtual void timeTask(JASTrack&, f32); // _10

	// _00     = VTBL
	// _00-_30 = ModParamWithFade
	int mTaskType; // _30, see JASOuterParamFlag enum
};

struct TaskEntry_BankRandTask : public TaskEntry {
	inline TaskEntry_BankRandTask()
	    : TaskEntry()
	    , mBankRandTask1()
	    , mFlagWaitTask()
	    , mBankRandTask2()
	{
	}

	// _00-_38 = TaskEntry
	BankRandTask mBankRandTask1; // _38
	FlagWaitTask mFlagWaitTask;  // _68
	BankRandTask mBankRandTask2; // _88
};

struct TaskEntry_IdMask : public TaskEntry {
	void makeEntry(u8);

	// _00-_38 = TaskEntry
	IdMaskTask mIdMaskTask; // _38
};

struct TaskEntry_MuteOnVolume : public TaskEntry {
	inline TaskEntry_MuteOnVolume()
	    : TaskEntry()
	    , mOuterParamTask(1)
	    , mMuteTask()
	{
	}

	void makeEntry(u32 length);

	// _00-_38 = TaskEntry
	OuterParamTask mOuterParamTask; // _38
	MuteTask mMuteTask;             // _6C
};

struct TaskEntry_MuteVolume : public TaskEntry {
	inline TaskEntry_MuteVolume()
	    : TaskEntry()
	    , mMuteTask1()
	    , mOuterParamTask1(1)
	    , mFlagWaitTask()
	    , mOuterParamTask2(1)
	    , mMuteTask2()
	{
	}

	void makeEntry(f32 value, u32 length);

	// _00-_38 = TaskEntry
	MuteTask mMuteTask1;             // _38
	OuterParamTask mOuterParamTask1; // _58
	FlagWaitTask mFlagWaitTask;      // _8C
	OuterParamTask mOuterParamTask2; // _AC
	MuteTask mMuteTask2;             // _E0
};

struct TaskEntry_OuterParam : public TaskEntry {
	inline TaskEntry_OuterParam(int p1)
	    : TaskEntry()
	    , mOuterParamTask(p1)
	{
	}

	void makeEntry(f32 value, u32 length);

	// _00-_38 = TaskEntry
	OuterParamTask mOuterParamTask; // _38
};

struct TaskEntry_PitMod : public TaskEntry {
	void makeEntry(f32, f32, u32);

	// _00-_38 = TaskEntry
	PitchModTask mPitModTask;     // _38
	SimpleWaitTask mWaitTask;     // _60
	PitchResetTask mPitResetTask; // _84
};

struct TaskEntry_Tempo : public TaskEntry {
	inline TaskEntry_Tempo()
	    : TaskEntry()
	    , mOuterParamTask1(0x40)
	    , mFlagWaitTask()
	    , mOuterParamTask2(0x40)
	{
	}

	void makeEntry(f32, u32);

	// _00-_38 = TaskEntry
	OuterParamTask mOuterParamTask1; // _38
	FlagWaitTask mFlagWaitTask;      // _6C
	OuterParamTask mOuterParamTask2; // _8C
};

struct TaskEntry_Wait_Volume : public TaskEntry {
	inline TaskEntry_Wait_Volume()
	    : TaskEntry()
	    , mMuteTask1()
	    , mOuterParamTask1(1)
	    , mOuterParamTask2(1)
	    , mMuteTask2()
	{
	}

	void makeEntry(f32, u32);

	// _00-_38 = TaskEntry
	MuteTask mMuteTask1;             // _38
	OuterParamTask mOuterParamTask1; // _58
	FlagWaitTask mFlagWaitTask;      // _8C
	OuterParamTask mOuterParamTask2; // _AC
	MuteTask mMuteTask2;             // _E0
};

struct TaskEntryMgr : public MutexList<TaskEntry> {
	inline TaskEntryMgr()
	    : MutexList<TaskEntry>()
	    , mTrack(nullptr)
	{
	}
	void appendEntry(TaskEntry*, DirectorBase*);
	void removeEntry(TaskEntry*);
	void removeAllEntry();
	bool isUnderTask_byDirector(DirectorBase*);
	void update();

	inline JASTrack& getTrack() const { return *mTrack; }

	// _00-_24 = MutexList
	JASTrack* mTrack; // _24
};

struct TaskChecker {
	inline void advanceTask()
	{
		OSLockMutex(&mMutex);
		mTaskIndex++;
		OSUnlockMutex(&mMutex);
	}

	inline void rewindTask()
	{
		OSLockMutex(&mMutex);
		mTaskIndex--;
		OSUnlockMutex(&mMutex);
	}

	OSMutex mMutex; // _00
	u8 mTaskIndex;  // _18
};
} // namespace PSSystem

inline void PSAdvanceTask(PSSystem::TaskChecker* task)
{
	if (task) {
		task->advanceTask();
	}
}

inline void PSRewindTask(PSSystem::TaskChecker* task)
{
	if (task) {
		task->rewindTask();
	}
}

#endif
