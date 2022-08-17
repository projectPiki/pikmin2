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
	    , m_noteMask(0)
	{
	}

	int task(JASTrack& track)
	{
		track.setNoteMask(m_noteMask);
		return -1;
	}

	u8 m_noteMask; // _1C
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

	virtual int task(JASTrack&);                 // _08
	virtual float getTgtWithTable(u8)       = 0; // _0C
	virtual u8 getTableIdxNum()             = 0; // _10
	virtual int tableTask(JASTrack&, float) = 0; // _14

	float _1C;
	float _20;
	float _24;
};

struct TriangleTableModTask : public ModParamWithTableTask {

	virtual float getTgtWithTable(u8);           // _0C
	virtual u8 getTableIdxNum();                 // _10
	virtual int tableTask(JASTrack&, float) = 0; // _14

	static const float sTable[40];
};

struct PitchModTask : public TriangleTableModTask {
	virtual int tableTask(JASTrack&, float); // _14
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

	virtual int task(JASTrack&);                 // _08
	virtual float getPreParam(JASTrack&)    = 0; // _0C
	virtual void timeTask(JASTrack&, float) = 0; // _10

	u32 _1C;   // _1C
	float _20; // _20
	float _24; // _24
	u32 _28;   // _28
	float _2C; // _2C
};

struct BankRandTask : public ModParamWithFade {
	inline BankRandTask()
	    : ModParamWithFade()
	{
		P2ASSERTLINE(351, BankRandPrm::sInstance != nullptr);
	}

	virtual float getPreParam(JASTrack&);    // _0C (weak)
	virtual void timeTask(JASTrack&, float); // _10 (weak)
};

struct OuterParamTask : public ModParamWithFade {
	inline OuterParamTask(int p1)
	    : ModParamWithFade()
	    , _30(p1)
	{
	}

	virtual float getPreParam(JASTrack&);    // _0C
	virtual void timeTask(JASTrack&, float); // _10

	int _30; // _30
};

struct TaskEntry_BankRandTask : public TaskEntry {
	inline TaskEntry_BankRandTask()
	    : TaskEntry()
	    , m_bankRandTask1()
	    , m_flagWaitTask()
	    , m_bankRandTask2()
	{
	}

	BankRandTask m_bankRandTask1; // _38
	FlagWaitTask m_flagWaitTask;  // _68
	BankRandTask m_bankRandTask2; // _88
};

struct TaskEntry_IdMask : public TaskEntry {
	void makeEntry(u8);

	IdMaskTask m_idMaskTask; // _38
};

struct TaskEntry_MuteOnVolume : public TaskEntry {
	inline TaskEntry_MuteOnVolume()
	    : TaskEntry()
	    , m_outerParamTask(1)
	    , m_muteTask()
	{
	}

	void makeEntry(u32);

	OuterParamTask m_outerParamTask; // _38
	MuteTask m_muteTask;             // _6C
};

struct TaskEntry_MuteVolume : public TaskEntry {
	inline TaskEntry_MuteVolume()
	    : TaskEntry()
	    , m_muteTask1()
	    , m_outerParamTask1(1)
	    , m_flagWaitTask()
	    , m_outerParamTask2(1)
	    , m_muteTask2()
	{
	}

	void makeEntry(float, u32);

	MuteTask m_muteTask1;             // _38
	OuterParamTask m_outerParamTask1; // _58
	FlagWaitTask m_flagWaitTask;      // _8C
	OuterParamTask m_outerParamTask2; // _AC
	MuteTask m_muteTask2;             // _E0
};

struct TaskEntry_OuterParam : public TaskEntry {
	inline TaskEntry_OuterParam(int p1)
	    : TaskEntry()
	    , m_outerParamTask(p1)
	{
	}

	void makeEntry(float, u32);

	OuterParamTask m_outerParamTask; // _38
};

struct TaskEntry_PitMod : public TaskEntry {
	void makeEntry(float, float, u32);

	PitchModTask m_pitModTask;     // _38
	SimpleWaitTask m_waitTask;     // _60
	PitchResetTask m_pitResetTask; // _84
};

struct TaskEntry_Tempo : public TaskEntry {
	inline TaskEntry_Tempo()
	    : TaskEntry()
	    , m_outerParamTask1(0x40)
	    , m_flagWaitTask()
	    , m_outerParamTask2(0x40)
	{
	}

	void makeEntry(float, u32);

	OuterParamTask m_outerParamTask1; // _38
	FlagWaitTask m_flagWaitTask;      // _6C
	OuterParamTask m_outerParamTask2; // _8C
};

struct TaskEntry_Wait_Volume : public TaskEntry {
	inline TaskEntry_Wait_Volume()
	    : TaskEntry()
	    , m_muteTask1()
	    , m_outerParamTask1(1)
	    , m_outerParamTask2(1)
	    , m_muteTask2()
	{
	}

	void makeEntry(float, u32);

	MuteTask m_muteTask1;             // _38
	OuterParamTask m_outerParamTask1; // _58
	FlagWaitTask m_flagWaitTask;      // _8C
	OuterParamTask m_outerParamTask2; // _AC
	MuteTask m_muteTask2;             // _E0
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
