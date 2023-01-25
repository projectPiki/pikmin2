#ifndef _PSSYSTEM_PSBGMTASK_H
#define _PSSYSTEM_PSBGMTASK_H

#include "Dolphin/os.h"
#include "JSystem/JSupport/JSUList.h"
#include "JSystem/JUT/JUTException.h"
#include "PSSystem/BankRandPrm.h"
#include "PSSystem/MutexList.h"
#include "JSystem/JAS/JASTrack.h"
#include "PSSystem/PSTaskBase.h"

namespace PSSystem {

struct FlagWaitTask : public TaskBase {
	inline FlagWaitTask()
	    : TaskBase()
	    , _1C(0xFFFFFFF0)
	{
	}

	virtual int task(JASTrack&); // _08

	uint _1C; // _1C
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

	u8 mNoteMask; // _1C
};

struct MuteTask : public TaskBase {
	inline MuteTask()
	    : TaskBase()
	    , _1C(0)
	{
	}

	int task(JASTrack& track)
	{
		track.muteTrack(_1C);
		return -1;
	}

	u8 _1C; // _1C
};

struct PitchResetTask : public TaskBase {
	virtual int task(JASTrack&); // _08
};

struct SimpleWaitTask : public TaskBase {
	inline SimpleWaitTask()
	    : TaskBase()
	    , _1C(0)
	    , _20(0)
	{
	}

	virtual int task(JASTrack&); // _08

	uint _1C;
	uint _20;
};

struct ModParamWithTableTask : public TaskBase {
	inline ModParamWithTableTask()
	    : TaskBase()
	    , _1C(0.0f)
	    , _20(0.0f)
	    , _24(0.0f)
	{
	}

	virtual int task(JASTrack&);               // _08
	virtual f32 getTgtWithTable(u8)       = 0; // _0C
	virtual u8 getTableIdxNum()           = 0; // _10
	virtual int tableTask(JASTrack&, f32) = 0; // _14

	f32 _1C;
	f32 _20;
	f32 _24;
};

struct TriangleTableModTask : public ModParamWithTableTask {

	virtual f32 getTgtWithTable(u8);           // _0C
	virtual u8 getTableIdxNum();               // _10
	virtual int tableTask(JASTrack&, f32) = 0; // _14

	static const f32 sTable[40];
};

struct PitchModTask : public TriangleTableModTask {
	virtual int tableTask(JASTrack&, f32); // _14
};

struct ModParamWithFade : public TaskBase {
	inline ModParamWithFade()
	    : TaskBase()
	    , _1C(0)
	    , _20(0.0f)
	    , _24(0.0f)
	    , _28(0)
	    , _2C(0.0f)
	{
	}

	virtual int task(JASTrack&);               // _08
	virtual f32 getPreParam(JASTrack&)    = 0; // _0C
	virtual void timeTask(JASTrack&, f32) = 0; // _10

	u32 _1C; // _1C
	f32 _20; // _20
	f32 _24; // _24
	u32 _28; // _28
	f32 _2C; // _2C
};

struct BankRandTask : public ModParamWithFade {
	inline BankRandTask()
	    : ModParamWithFade()
	{
		P2ASSERTLINE(351, BankRandPrm::sInstance != nullptr);
	}

	virtual f32 getPreParam(JASTrack&);    // _0C (weak)
	virtual void timeTask(JASTrack&, f32); // _10 (weak)
};

struct OuterParamTask : public ModParamWithFade {
	inline OuterParamTask(int p1)
	    : ModParamWithFade()
	    , _30(p1)
	{
	}

	virtual f32 getPreParam(JASTrack&);    // _0C
	virtual void timeTask(JASTrack&, f32); // _10

	int _30; // _30
};

struct TaskEntry_BankRandTask : public TaskEntry {
	inline TaskEntry_BankRandTask()
	    : TaskEntry()
	    , mBankRandTask1()
	    , mFlagWaitTask()
	    , mBankRandTask2()
	{
	}

	BankRandTask mBankRandTask1; // _38
	FlagWaitTask mFlagWaitTask;  // _68
	BankRandTask mBankRandTask2; // _88
};

struct TaskEntry_IdMask : public TaskEntry {
	void makeEntry(u8);

	IdMaskTask mIdMaskTask; // _38
};

struct TaskEntry_MuteOnVolume : public TaskEntry {
	inline TaskEntry_MuteOnVolume()
	    : TaskEntry()
	    , mOuterParamTask(1)
	    , mMuteTask()
	{
	}

	void makeEntry(u32);

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

	void makeEntry(f32, u32);

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

	void makeEntry(f32, u32);

	OuterParamTask mOuterParamTask; // _38
};

struct TaskEntry_PitMod : public TaskEntry {
	void makeEntry(f32, f32, u32);

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

	MuteTask mMuteTask1;             // _38
	OuterParamTask mOuterParamTask1; // _58
	FlagWaitTask mFlagWaitTask;      // _8C
	OuterParamTask mOuterParamTask2; // _AC
	MuteTask mMuteTask2;             // _E0
};

struct TaskEntryMgr : MutexList<TaskEntry> {
	inline TaskEntryMgr()
	    : MutexList<TaskEntry>()
	    , _24(nullptr)
	{
	}
	void appendEntry(TaskEntry*, DirectorBase*);
	void removeEntry(TaskEntry*);
	void removeAllEntry();
	bool isUnderTask_byDirector(DirectorBase*);
	void update();

	JASTrack* _24; // _24
};

struct TaskChecker {
	OSMutexObject _00;
	u8 _18;
};

} // namespace PSSystem

#endif
