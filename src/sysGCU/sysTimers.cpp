#include "P2Macros.h"

#include "SysTimers.h"
#include "System.h"

u8 SysTimers::drawFlag;

/*
 * --INFO--
 * Address:	8042A7FC
 * Size:	0000E0
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

	_24   = 0.0f;
	mName = "sysTimers";
}

/*
 * --INFO--
 * Address:	8042A948
 * Size:	000068
 */
SysTimers::~SysTimers() { reset(); }

/*
 * --INFO--
 * Address:	8042A9B0
 * Size:	00007C
 */
TimerInf* SysTimers::get(int idx)
{
	P2ASSERTBOUNDSLINE(119, 0, idx, mTimerCount);
	return &mTimers[idx];
}

/*
 * --INFO--
 * Address:	8042AA2C
 * Size:	000074
 */
TimerInf::~TimerInf() { sys->mTimers->remove(this); }

/*
 * --INFO--
 * Address:	8042AAA0
 * Size:	000038
 */
void SysTimers::reset() { JUT_PANICLINE(136, "有りえないー　有りえない―\ ザマシメック！！\n"); }

/*
 * --INFO--
 * Address:	8042AAD8
 * Size:	000010
 */
void SysTimers::newFrame() { mFrameCount++; }

/*
 * --INFO--
 * Address:	8042AAE8
 * Size:	000010
 */
void SysTimers::remove(TimerInf* timer) { timer->mState |= 1; }

/*
 * --INFO--
 * Address:	8042AAF8
 * Size:	000004
 */
void SysTimers::_start(char*, bool) { }

/*
 * --INFO--
 * Address:	8042AAFC
 * Size:	000004
 */
void SysTimers::_stop(char*) { }
