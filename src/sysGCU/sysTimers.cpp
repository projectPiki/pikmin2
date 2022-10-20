#include "JSystem/JUT/JUTException.h"

#include "SysTimers.h"
#include "System.h"

u8 SysTimers::drawFlag;

/*
 * --INFO--
 * Address:	8042A7FC
 * Size:	0000E0
 */
SysTimers::SysTimers()
    : m_frameCount(-1)
{
	drawFlag = 0;

	m_timerCount = 64;
	m_timers     = new TimerInf[m_timerCount];
	for (int i = 0; i < m_timerCount; i++) {
		TimerInf* inf = get(i);
		inf->m_state |= 1;
		inf->m_name = "noname";
	}

	_24    = 0.0f;
	m_name = "sysTimers";
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
	P2ASSERTBOUNDSLINE(119, 0, idx, m_timerCount);
	return &m_timers[idx];
}

/*
 * --INFO--
 * Address:	8042AA2C
 * Size:	000074
 */
TimerInf::~TimerInf() { sys->m_timers->remove(this); }

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
void SysTimers::newFrame() { m_frameCount++; }

/*
 * --INFO--
 * Address:	8042AAE8
 * Size:	000010
 */
void SysTimers::remove(TimerInf* timer) { timer->m_state |= 1; }

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
