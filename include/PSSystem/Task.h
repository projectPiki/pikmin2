#ifndef _PSSYSTEM_TASKBASE_H
#define _PSSYSTEM_TASKBASE_H

#include "Dolphin/os.h"
#include "JSystem/JSupport/JSUList.h"
#include "PSSystem/MutexList.h"
#include "JSystem/JAS/JASTrack.h"

namespace PSSystem {
struct DirectorBase;

struct TaskBase {
	TaskBase();

	virtual int task(JASTrack&) = 0; // _08

	JSULink<TaskBase> _04; // _04
	u8 _14;                // _14 - unknown
	u8 _15;                // _15 - unknown
	u32 _18;               // _18 - unknown
};

struct FlagWaitTask : public TaskBase {
	virtual int task(JASTrack&); // _08

	uint _1C; // _1C
};

struct IdMaskTask : public TaskBase {
	virtual int task(JASTrack&); // _08

	u8 m_noteMask; // _1C
};

struct MuteTask : public TaskBase {
	virtual int task(JASTrack&); // _08

	u8 _1C; // _1C
};

struct PitchResetTask : public TaskBase {
	virtual int task(JASTrack&); // _08
};

struct SimpleWaitTask : public TaskBase {
	virtual int task(JASTrack&); // _08

	uint _1C;
	uint _20;
};

struct ModParamWithTableTask : public TaskBase {
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
};

struct PitchModTask : public TriangleTableModTask {
	virtual int tableTask(JASTrack&, float); // _14
};

struct ModParamWithFade : public TaskBase {
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
	virtual float getPreParam(JASTrack&);    // _0C (weak)
	virtual void timeTask(JASTrack&, float); // _10 (weak)
};

struct OuterParamTask : public ModParamWithFade {
	virtual float getPreParam(JASTrack&);    // _0C
	virtual void timeTask(JASTrack&, float); // _10

	int _30; // _30
};

struct TaskEntry : public MutexList<TaskBase> {
	void append(TaskBase*);

	u32 _24;        // _24
	JSUPtrLink _28; // _28
};

struct TaskEntry_IdMask : public TaskEntry {
	void makeEntry(u8);

	IdMaskTask m_idMaskTask; // _38
};

struct TaskEntry_MuteOnVolume : public TaskEntry {
	void makeEntry(u32);

	OuterParamTask m_outerParamTask; // _38
	MuteTask m_muteTask;             // _6C
};

struct TaskEntry_MuteVolume : public TaskEntry {
	void makeEntry(float, u32);

	MuteTask m_muteTask;             // _38
	OuterParamTask m_outerParamTask; // _58
};

struct TaskEntry_OuterParam : public TaskEntry {
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
	void makeEntry(float, u32);

	OuterParamTask m_outerParamTask; // _38
};

struct TaskEntryMgr {
	void appendEntry(TaskEntry*, DirectorBase*);
	void removeEntry(TaskEntry*);
	void removeAllEntry();
	bool isUnderTask_byDirector(DirectorBase*);
	void update();

	JSUPtrList _00;    // _00
	OSMutexObject _0C; // _0C
	JASTrack* _24;     // _24
};

struct TaskChecker {
	OSMutexObject _00;
	u8 _18;
};
} // namespace PSSystem

#endif
