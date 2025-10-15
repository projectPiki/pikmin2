#include "Dolphin/OS/OSUtil.h"
#include "Dolphin/ai.h"
#include "JSystem/JAudio/JAS/JASAudioThread.h"
#include "JSystem/JAudio/JAS/JASCalc.h"
#include "JSystem/JAudio/JAS/JASDriver.h"
#include "JSystem/JAudio/JAS/JASDsp.h"
#include "JSystem/JAudio/JAS/JASKernel.h"
#include "JSystem/JAudio/JAS/JASPortCmd.h"
#include "JSystem/JAudio/JAS/JASReport.h"

namespace JASDriver {

static s16* sDmaDacBuffer[3];

static const MixFunc sMixFuncs[4] = { &mixMonoTrack, &mixMonoTrackWide, &mixExtraTrack, &mixInterleaveTrack };

static s16** sDspDacBuffer;
static int sDspDacWriteBuffer;
static int sDspDacReadBuffer;
static int sDspStatus;
static DspDacCallback sDspDacCallback;

static s16* lastRspMadep;

static DspDacCallback dacCallbackFunc;
static MixCallback extMixCallback;

static u32 sOutputRate;

static u8 sDspDacBufferCount = 3;
static int sSubFrames        = 7;
static JASMixMode sMixMode   = MixMode_Extra;
static f32 sDacRate          = 32028.5f;

/**
 * @note Address: 0x800A7968
 * @note Size: 0x13C
 */
void initAI(AIDCallback callback)
{
	u32 size = getDacSize() * 2;
	for (int i = 0; i < 3; i++) {
		sDmaDacBuffer[i] = new (JASDram, 0x20) s16[size / 2];
		JASCalc::bzero(sDmaDacBuffer[i], size);
		DCStoreRange(sDmaDacBuffer[i], size);
	}

	sDspDacBuffer = new (JASDram, 0) s16*[sDspDacBufferCount];
	for (int i = 0; i < sDspDacBufferCount; i++) {
		sDspDacBuffer[i] = new (JASDram, 0x20) s16[getDacSize()];
		JASCalc::bzero(sDspDacBuffer[i], size);
		DCStoreRange(sDspDacBuffer[i], size);
	}
	sDspDacWriteBuffer = sDspDacBufferCount - 1;
	sDspDacReadBuffer  = 0;
	sDspStatus         = 0;
	AIInit(nullptr);
	AIInitDMA((u32)sDmaDacBuffer[2], size);
	AISetDSPSampleRate(sOutputRate != 0);
	AIRegisterDMACallback(callback);
}

/**
 * @note Address: 0x800A7AA4
 * @note Size: 0x20
 */
void startDMA()
{
	AIStartDMA();
}

/**
 * @note Address: 0x800A7AC4
 * @note Size: 0x20
 */
void stopDMA()
{
	AIStopDMA();
}

/**
 * @note Address: N/A
 * @note Size: 0x34
 */
void setOutputRate(JASOutputRate)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800A7AE4
 * @note Size: 0x15C
 */
void updateDac()
{
	static u32 dacp = 0;
	{
		s16* rsp     = lastRspMadep;
		lastRspMadep = nullptr;
		if (rsp) {
			AIInitDMA((u32)rsp, getDacSize() * 2);
		}
	}

	u32 frameSamples = getFrameSamples();
	readDspBuffer(sDmaDacBuffer[dacp], frameSamples);
	if (sDspStatus == 0) {
		finishDSPFrame();
	}

	if (extMixCallback) {
		sMixFuncs[sMixMode](sDmaDacBuffer[dacp], frameSamples, extMixCallback);
	}

	BOOL interrupt = OSDisableInterrupts();
	DCStoreRange(sDmaDacBuffer[dacp], getDacSize() * 2);
	OSRestoreInterrupts(interrupt);

	lastRspMadep = sDmaDacBuffer[dacp];
	dacp++;
	if (dacp >= 3) {
		dacp = 0;
	}
	if (dacCallbackFunc) {
		dacCallbackFunc(lastRspMadep, getFrameSamples());
	}
}

/**
 * @note Address: 0x800A7C40
 * @note Size: 0xF0
 */
void updateDSP()
{
	static u32 history[10] = { 1000000, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	JASKernel::probeStart(3, "SFR-UPDATE");
	JASDsp::invalChannelAll();
	JASPortCmd::execAllCommand();
	DSPSyncCallback();
	static OSTick old_time     = 0;
	OSTick new_time            = OSGetTick();
	OSTick delta               = new_time - old_time;
	old_time                   = new_time;
	int subframes              = getSubFrames();
	u32 count                  = JASAudioThread::snIntCount;
	history[subframes - count] = delta;
	if (subframes != count && ((history[0] / (f32)delta) < 1.1f)) {
		JASReport("kill DSP channel");
		JASDSPChannel::killActiveChannel();
	}
	JASDSPChannel::updateAll();
	subframeCallback();
	JASKernel::probeFinish(3);
}

/**
 * @note Address: 0x800A7D30
 * @note Size: 0x310
 */
void readDspBuffer(s16* param_0, u32 param_1)
{
	int r29 = sDspDacReadBuffer + 1;
	if (r29 == sDspDacBufferCount) {
		r29 = 0;
	}
	if (r29 == sDspDacWriteBuffer && sDspDacBufferCount >= 3) {
		s16 r25 = sDspDacBuffer[sDspDacReadBuffer][param_1 / 2 - 1];
		s16 r24 = sDspDacBuffer[sDspDacReadBuffer][param_1 - 1];
		for (u32 i = 0; i < param_1; i++) {
			sDspDacBuffer[sDspDacReadBuffer][i] = r25;
		}
		for (u32 i = param_1; i < param_1 * 2; i++) {
			sDspDacBuffer[sDspDacReadBuffer][i] = r24;
		}
	} else {
		sDspDacReadBuffer = r29;
		DCInvalidateRange(sDspDacBuffer[r29], param_1 * 4);
	}
	JASCalc::imixcopy(sDspDacBuffer[sDspDacReadBuffer] + param_1, sDspDacBuffer[sDspDacReadBuffer], param_0, param_1);
}

/**
 * @note Address: 0x800A8040
 * @note Size: 0x1A4
 */
void finishDSPFrame()
{
	int v1 = sDspDacWriteBuffer + 1;
	if (v1 == sDspDacBufferCount) {
		v1 = 0;
	}
	if (v1 == sDspDacReadBuffer) {
		sDspStatus = 0;
		return;
	}
	sDspDacWriteBuffer         = v1;
	JASAudioThread::snIntCount = getSubFrames();
	JASKernel::probeStart(7, "DSP-MAIN");
	u32 frameSamples = getFrameSamples();
	JASDsp::syncFrame(getSubFrames(), (u32)sDspDacBuffer[sDspDacWriteBuffer], (u32)(sDspDacBuffer[sDspDacWriteBuffer] + frameSamples));
	sDspStatus = 1;
	updateDSP();
	if (sDspDacCallback != nullptr) {
		sDspDacCallback(sDspDacBuffer[sDspDacWriteBuffer], frameSamples);
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
void setSubFrames(u32 subframes)
{
	// UNUSED FUNCTION
	// sSubFrames = subframes;
}

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
void setNumDSPBuffer(u8)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800A81E4
 * @note Size: 0xC
 */
void registerMixCallback(s16* (*mixCallback)(s32), JASMixMode mode)
{
	extMixCallback = mixCallback;
	sMixMode       = mode;
}

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
void registerDacCallback(void (*)(s16*, u32))
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
void registDSPBufCallback(void (*)(s16*, u32))
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800A81F0
 * @note Size: 0x8
 */
f32 getDacRate()
{
	return sDacRate;
}

/**
 * @note Address: 0x800A81F8
 * @note Size: 0x8
 */
u32 getSubFrames()
{
	return sSubFrames;
}

/**
 * @note Address: 0x800A8200
 * @note Size: 0xC
 */
static int getDacSize()
{
	return sSubFrames * 0xA0;
}

/**
 * @note Address: 0x800A820C
 * @note Size: 0xC
 */
static int getFrameSamples()
{
	return sSubFrames * 0x50;
}

/**
 * @note Address: 0x800A8218
 * @note Size: 0xC0
 */
static void mixMonoTrack(s16* dest, u32 size, MixCallback callback)
{
	JASKernel::probeStart(5, "MONO-MIX");
	s16* src = callback(size);
	if (!src) {
		return;
	}
	JASKernel::probeFinish(5);
	s16* destPtr = dest;
	for (u32 i = size; i != 0; i--) {
		destPtr[0] = JASCalc::clamp<s16, s32>(destPtr[0] + *src);
		destPtr[1] = JASCalc::clamp<s16, s32>(destPtr[1] + *src);
		destPtr += 2;
		src++;
	}
}

/**
 * @note Address: 0x800A82D8
 * @note Size: 0xC0
 */
void mixMonoTrackWide(s16* dest, u32 size, MixCallback callback)
{
	JASKernel::probeStart(5, "MONO(W)-MIX");
	s16* src = callback(size);
	if (!src) {
		return;
	}
	JASKernel::probeFinish(5);
	s16* destPtr = dest;
	for (u32 i = size; i != 0; i--) {
		s32 val    = destPtr[0] + src[0];
		destPtr[0] = JASCalc::clamp<s16, s32>(val);
		val        = destPtr[1];
		val -= src[0];
		destPtr[1] = JASCalc::clamp<s16, s32>(val);
		destPtr += 2;
		src++;
	}
}

/**
 * @note Address: 0x800A8398
 * @note Size: 0xE0
 */
void mixExtraTrack(s16* dest, u32 size, MixCallback callback)
{
	JASKernel::probeStart(5, "DSPMIX");
	s16* src1 = callback(size);
	if (!src1) {
		return;
	}
	JASKernel::probeFinish(5);

	JASKernel::probeStart(6, "MIXING");
	s16* destPtr = dest;
	s16* src2    = src1 + getFrameSamples();
	for (u32 i = size; i != 0; i--) {
		destPtr[0] = JASCalc::clamp<s16, s32>(destPtr[0] + src2[0]);
		destPtr[1] = JASCalc::clamp<s16, s32>(destPtr[1] + src1[0]);
		destPtr += 2;
		src2++;
		src1++;
	}
	JASKernel::probeFinish(6);
}

/**
 * @note Address: 0x800A8478
 * @note Size: 0x8C
 */
void mixInterleaveTrack(s16* dest, u32 size, MixCallback callback)
{
	s16* src = callback(size);
	if (!src) {
		return;
	}
	s16* destPtr = dest;
	s16* srcPtr  = src;
	for (u32 i = size * 2; i != 0; i--) {
		destPtr[0] = JASCalc::clamp<s16, s32>(destPtr[0] + srcPtr[0]);
		destPtr += 1;
		srcPtr++;
	}
}
} // namespace JASDriver
