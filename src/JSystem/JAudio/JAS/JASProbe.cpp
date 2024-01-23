#include "Dolphin/os.h"
#include "JSystem/JAudio/JAS/JASKernel.h"
#include "JSystem/JAudio/JAS/JASMutexLock.h"
#include "JSystem/JAudio/JAS/JASProbe.h"

static JASProbe* sProbes;
static u32 sProbeCount; // unused

/**
 * @note Address: N/A
 * @note Size: 0x130
 */
JASProbe::JASProbe()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x150
 */
void JASProbe::reset()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x50
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

/**
 * @note Address: N/A
 * @note Size: 0x12C
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
/**
 * @note Address: N/A
 * @note Size: 0x68
 */
void initProbe(s32)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x190
 */
void resetProbe()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800A74D4
 * @note Size: 0x60
 */
void probeStart(s32 index, char* name)
{
	if (sProbes != nullptr) {
		sProbes[index].start(name);
	}
}

/**
 * @note Address: 0x800A7534
 * @note Size: 0x13C
 */
void probeFinish(s32 index)
{
	if (sProbes != nullptr) {
		sProbes[index].stop();
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x10
 */
const char* getProbeName(s32 index)
{
	// UNUSED FUNCTION
	return sProbes[index].mName;
}

/**
 * @note Address: N/A
 * @note Size: 0x14
 */
void getProbeLast(s32)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x14
 */
void getProbeAvg(s32)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x1C
 */
void getProbeTotalAvg(s32)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x14
 */
void getProbeMax(s32)
{
	// UNUSED FUNCTION
}
} // namespace JASKernel
