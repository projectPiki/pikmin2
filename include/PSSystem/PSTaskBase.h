#ifndef _PSSYSTEM_PSTASKBASE_H
#define _PSSYSTEM_PSTASKBASE_H

#include "Dolphin/os.h"
#include "JSystem/JSupport/JSUList.h"
#include "P2Macros.h"
#include "PSSystem/BankRandPrm.h"
#include "PSSystem/MutexList.h"
#include "JSystem/JAudio/JAS/JASTrack.h"

namespace PSSystem {
struct DirectorBase;

// size: 0x1C
struct TaskBase {
	TaskBase();

	virtual int task(JASTrack&) = 0; // _08

	// _00 = VTBL
	JSULink<TaskBase> mLink;          // _04
	u8 mEnabled;                      // _14
	u8 mHasNext;                      // _15
	JSULink<TaskBase>* mWaitTaskLink; // _18
};

// size: 0x38
struct TaskEntry : public MutexList<TaskBase> {
	inline TaskEntry()
	    : mDirector(nullptr)
	    , mTaskList(this)
	{
	}

	void append(TaskBase* task);

	// Inlined:
	void remove(TaskBase* task);
	void removeAll();
	bool stackTask(JASTrack& track);

	void setDirector(DirectorBase* director)
	{
		P2ASSERTLINE(80, director);
		mDirector = director;
	}

	// _00-_24 = MutexList
	DirectorBase* mDirector;      // _24
	JSULink<TaskEntry> mTaskList; // _28
};
} // namespace PSSystem

#endif
