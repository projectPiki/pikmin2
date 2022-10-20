
/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_80499E10
    lbl_80499E10:
        .4byte 0x73797354
        .4byte 0x696D6572
        .4byte 0x73000000
    .global lbl_80499E1C
    lbl_80499E1C:
        .4byte 0x73797354
        .4byte 0x696D6572
        .4byte 0x732E6370
        .4byte 0x70000000
    .global lbl_80499E2C
    lbl_80499E2C:
        .asciz "P2Assert"
        .skip 3
    .global lbl_80499E38
    lbl_80499E38:
        .4byte 0x974C82E8
        .4byte 0x82A682C8
        .4byte 0x82A2815B
        .4byte 0x8140974C
        .4byte 0x82E882A6
        .4byte 0x82C882A2
        .4byte 0x815C2083
        .4byte 0x55837D83
        .4byte 0x56838183
        .4byte 0x62834E81
        .4byte 0x4981490A
        .4byte 0x00000000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__8TimerInf
    __vt__8TimerInf:
        .4byte 0
        .4byte 0
        .4byte __dt__8TimerInfFv
    .global __vt__9SysTimers
    __vt__9SysTimers:
        .4byte 0
        .4byte 0
        .4byte __dt__9SysTimersFv
        .4byte getChildCount__5CNodeFv
        .4byte 0

    .section .sbss # 0x80514D80 - 0x80516360
    .global drawFlag__9SysTimers
    drawFlag__9SysTimers:
        .skip 0x8

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80520588
    lbl_80520588:
        .4byte 0x6E6F6E61
        .4byte 0x6D650000
    .global lbl_80520590
    lbl_80520590:
        .4byte 0x00000000
        .4byte 0x00000000
*/

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
	m_frameCount = -1;
	drawFlag     = 0;

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
void SysTimers::reset() { JUT_PANICLINE(136, "有りえないー　有りえない― ザマシメック！！\n"); }

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
