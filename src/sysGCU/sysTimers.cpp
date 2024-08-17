#include "P2Macros.h"

#include "SysTimers.h"
#include "System.h"

u8 SysTimers::drawFlag;

/**
 * @note Address: 0x8042A7FC
 * @note Size: 0xE0
 */
SysTimers::SysTimers()
    : mFrameCount(-1)
{
	drawFlag = 0;

	mTimerCount = 64;
	mTimers     = new TimerInf[mTimerCount];
	for (int i = 0; i < mTimerCount; i++) {
		TimerInf* inf = get(i);
		inf->mState |= 1;
		inf->mName = "noname";
	}

	mUnused = 0.0f;
	mName   = "sysTimers";
}

/**
 * @note Address: 0x8042A948
 * @note Size: 0x68
 */
SysTimers::~SysTimers() { reset(); }

/**
 * @note Address: 0x8042A9B0
 * @note Size: 0x7C
 */
TimerInf* SysTimers::get(int idx)
{
	P2ASSERTBOUNDSLINE(119, 0, idx, mTimerCount);
	return &mTimers[idx];
}

/**
 * @note Address: 0x8042AA2C
 * @note Size: 0x74
 */
TimerInf::~TimerInf() { sys->mTimers->remove(this); }

/**
 * @note Address: 0x8042AAA0
 * @note Size: 0x38
 */
void SysTimers::reset() { JUT_PANICLINE(136, "有りえないー　有りえない―\ ザマシメック！！\n"); }

/**
 * @note Address: 0x8042AAD8
 * @note Size: 0x10
 */
void SysTimers::newFrame() { mFrameCount++; }

/**
 * @note Address: 0x8042AAE8
 * @note Size: 0x10
 */
void SysTimers::remove(TimerInf* timer) { timer->mState |= 1; }

/**
 * @note Address: 0x8042AAF8
 * @note Size: 0x4
 */
void SysTimers::_start(char*, bool) { }

/**
 * @note Address: 0x8042AAFC
 * @note Size: 0x4
 */
void SysTimers::_stop(char*) { }
