#include "Dolphin/os.h"
#include "JSystem/JAS/JASKernel.h"
#include "JSystem/JAS/JASMutexLock.h"
#include "JSystem/JAS/JASProbe.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .sbss # 0x80514D80 - 0x80516360
    .global sProbes
    sProbes:
        .skip 0x8

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80516E68
    lbl_80516E68:
        .4byte 0x426FC28F
    .global lbl_80516E6C
    lbl_80516E6C:
        .4byte 0x3F75C28F
    .global lbl_80516E70
    lbl_80516E70:
        .float 0.04
        .4byte 0x00000000
    .global lbl_80516E78
    lbl_80516E78:
        .4byte 0x43300000
        .4byte 0x00000000
*/

static JASProbe* sProbes;
static u32 sProbeCount; // unused

/*
 * --INFO--
 * Address:	........
 * Size:	000130
 */
JASProbe::JASProbe()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000150
 */
void JASProbe::reset()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000050
 */
void JASProbe::start(char* name)
{
	// UNUSED FUNCTION
	// const JASCriticalSection a;
	int interrupts = OSDisableInterrupts();
	m_name         = name;
	m_startTime    = OSGetTime();
	OSRestoreInterrupts(interrupts);
}

/*
 * --INFO--
 * Address:	........
 * Size:	00012C
 */
void JASProbe::stop()
{
	// UNUSED FUNCTION
	// volatile JASCriticalSection a;
	int interrupts = OSDisableInterrupts();
	_08            = (u32)OSGetTime() - m_startTime;
	_08 /= OSGetTicksPerSecond() / 59.94f;
	if (_10 < _08 && 100 < _1A8) {
		_10 = _08;
	}
	_0C             = _0C * 0.96f + _08 * 0.04f;
	u32 resultIndex = _1A8 % 100;
	_14 -= _18[resultIndex];
	_18[resultIndex] = _08;
	_14 += _08;
	_1A8++;
	OSRestoreInterrupts(interrupts);
}

/*
 * --INFO--
 * Address:	........
 * Size:	000068
 */
void JASKernel::initProbe(long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000190
 */
void JASKernel::resetProbe()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800A74D4
 * Size:	000060
 */
void JASKernel::probeStart(long index, char* name)
{
	if (sProbes != nullptr) {
		sProbes[index].start(name);
	}
}

/*
 * --INFO--
 * Address:	800A7534
 * Size:	00013C
 */
void JASKernel::probeFinish(long index)
{
	if (sProbes != nullptr) {
		sProbes[index].stop();
	}
}

/*
 * --INFO--
 * Address:	........
 * Size:	000010
 */
const char* JASKernel::getProbeName(long index)
{
	// UNUSED FUNCTION
	return sProbes[index].m_name;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000014
 */
void JASKernel::getProbeLast(long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000014
 */
void JASKernel::getProbeAvg(long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00001C
 */
void JASKernel::getProbeTotalAvg(long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000014
 */
void JASKernel::getProbeMax(long)
{
	// UNUSED FUNCTION
}
