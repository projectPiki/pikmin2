#include "Dolphin/os.h"
#include "JSystem/JAudio/JAS/JASKernel.h"
#include "JSystem/JAudio/JAS/JASMutexLock.h"
#include "JSystem/JAudio/JAS/JASProbe.h"
#include "types.h"

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
	mName          = name;
	mStartTime     = OSGetTime();
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
	_08            = (u32)OSGetTime() - mStartTime;
	_08 /= OS_TIMER_CLOCK / 59.94f;
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

namespace JASKernel {
/*
 * --INFO--
 * Address:	........
 * Size:	000068
 */
void initProbe(long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000190
 */
void resetProbe()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800A74D4
 * Size:	000060
 */
void probeStart(long index, char* name)
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
void probeFinish(long index)
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
const char* getProbeName(long index)
{
	// UNUSED FUNCTION
	return sProbes[index].mName;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000014
 */
void getProbeLast(long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000014
 */
void getProbeAvg(long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00001C
 */
void getProbeTotalAvg(long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000014
 */
void getProbeMax(long)
{
	// UNUSED FUNCTION
}
} // namespace JASKernel
