#ifndef _PSSYSTEM_PSTASKBASE_H
#define _PSSYSTEM_PSTASKBASE_H

#include "Dolphin/os.h"
#include "JSystem/JSupport/JSUList.h"
#include "JSystem/JUT/JUTException.h"
#include "PSSystem/BankRandPrm.h"
#include "PSSystem/MutexList.h"
#include "JSystem/JAS/JASTrack.h"

namespace PSSystem {
struct DirectorBase;

struct TaskBase {
	TaskBase();

	virtual int task(JASTrack&) = 0; // _08

	JSULink<TaskBase> _04;  // _04
	u8 _14;                 // _14 - unknown
	u8 _15;                 // _15 - unknown
	JSULink<TaskBase>* _18; // _18 - unknown
};

struct TaskEntry : public MutexList<TaskBase> {
	inline TaskEntry()
	    : _24(nullptr)
	    , _28(this)
	{
	}

	void append(TaskBase* task);

	// Unused/inlined:
	void remove(TaskBase* task);
	void removeAll();

	/**
	 * @fabricated
	 */
	void setDirector(DirectorBase* director)
	{
		P2ASSERTLINE(80, director != nullptr);
		_24 = director;
	}

	DirectorBase* _24;      // _24
	JSULink<TaskEntry> _28; // _28
};
} // namespace PSSystem

#endif
