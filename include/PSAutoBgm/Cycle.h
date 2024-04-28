#ifndef _PSAUTOBGM_CYCLE_H
#define _PSAUTOBGM_CYCLE_H

#include "JSystem/JAudio/JAD/JADUtility.h"
#include "types.h"
#include "PSAutoBgm/Track.h"
#include "JSystem/JKernel/JKRDisposer.h"
#include "JSystem/JSupport/JSUList.h"
#include "PSAutoBgm/PrmLink.h"

struct JASTrack;

namespace PSAutoBgm {

// clang-format off
template <typename T>
struct QueueSet : public JSUList<PrmLink<u16> > {
	QueueSet(T value)
		: mValue(value)
	{
	}

	// _00-_0C = JSUList
	T mValue; // _0C
};
// clang-format on

template <typename T>
struct CompQueueSet : public QueueSet<T> {
	CompQueueSet(T value)
	    : QueueSet(value)
	    , _10(value)
	    , _20(value)
	{
		PrmLink<u16>* linkArray = new PrmLink<u16>[2];
		for (u8 i = 0; (int)i < 2; i++) {
			linkArray[i]._10 = 0xFFFF;
			if (getNumLinks() >= mValue && getFirstLink()) {
				JSUPtrList::remove(getFirstLink());
			}
			JSUPtrList::append(&linkArray[i]);
		}
		_24    = new int[2];
		_24[0] = 0;
		_24[1] = 0;
	}

	// _00-_10 = QueueSet
	QueueSet<T> _10; // _10
	T _20;           // _20
	int* _24;        // _24
};

/**
 * @size = 0x40
 */
struct CycleBase {
	CycleBase(Module* module)
	    : mModule(module)
	    , mCycleNum(0)
	    , mSlider()
	    , mWaveSceneIndex(0)
	{
	}

	virtual u16 play(JASTrack*);             // _08
	virtual int getCycleType() { return 1; } // _0C (weak)
	virtual u32 avoidCheck() { return 0; }   // _10 (weak)

	u16 cycleTop(JASTrack*);
	u16 checkCloser(JASTrack*);

	// _00  = VTABLE
	Module* mModule;                   // _04
	u8 mCycleNum;                      // _08
	JADUtility::PrmSlider<u8> mSlider; // _0C
	u8 mWaveSceneIndex;                // _3C
};

/**
 * @size = 0x68
 */
struct OnCycle : public CycleBase {
	OnCycle(Module*);

	virtual u16 play(JASTrack*);             // _08
	virtual int getCycleType() { return 0; } // _0C (weak)
	virtual u32 avoidCheck();                // _10

	void setTip(JASTrack*);
	u16 historiesAreSameAll();

	// _00      = VTABLE
	// _04-_3D  = CycleBase
	CompQueueSet<u16> _40;
	// JSUPtrList _40; // _40
	// u8 _4C[0x4];    // _4C - unknown
	// JSUPtrList _50; // _50
	// u16 _5C;        // _5C
	// u8 _5E[0x2];    // _5E - unknown
	// u16 _60;        // _60
	// u8 _62[0x2];    // _62 - unknown
	// u8 _64[0x4];    // _64 - unknown
};

/**
 * @size = 0x40
 */
struct OffCycle : public CycleBase {
	OffCycle(Module*);
};

} // namespace PSAutoBgm

#endif
