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
void startDMA() { AIStartDMA(); }

/**
 * @note Address: 0x800A7AC4
 * @note Size: 0x20
 */
void stopDMA() { AIStopDMA(); }

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
		for (int i = 0; i < param_1; i++) {
			sDspDacBuffer[sDspDacReadBuffer][i] = r25;
		}
		for (int i = param_1; i < param_1 * 2; i++) {
			sDspDacBuffer[sDspDacReadBuffer][i] = r24;
		}
	} else {
		sDspDacReadBuffer = r29;
		DCInvalidateRange(sDspDacBuffer[r29], param_1 * 4);
	}
	JASCalc::imixcopy(sDspDacBuffer[sDspDacReadBuffer] + param_1, sDspDacBuffer[sDspDacReadBuffer], param_0, param_1);
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stmw     r27, 0xc(r1)
	mr       r30, r3
	mr       r31, r4
	lwz      r5, sDspDacReadBuffer__9JASDriver@sda21(r13)
	lbz      r3, sDspDacBufferCount__9JASDriver@sda21(r13)
	addi     r4, r5, 1
	cmpw     r4, r3
	bne      lbl_800A7D60
	li       r4, 0

lbl_800A7D60:
	lwz      r0, sDspDacWriteBuffer__9JASDriver@sda21(r13)
	cmpw     r4, r0
	bne      lbl_800A7FF0
	cmplwi   r3, 3
	blt      lbl_800A7FF0
	lwz      r4, sDspDacBuffer__9JASDriver@sda21(r13)
	slwi     r3, r5, 2
	cmplwi   r31, 0
	rlwinm   r0, r31, 0, 0, 0x1e
	lwzx     r3, r4, r3
	slwi     r4, r31, 1
	li       r6, 0
	addi     r3, r3, -2
	lhax     r0, r3, r0
	lhax     r5, r3, r4
	ble      lbl_800A7EBC
	cmplwi   r31, 8
	addi     r8, r31, -8
	ble      lbl_800A7E8C
	addi     r7, r8, 7
	li       r3, 0
	srwi     r7, r7, 3
	mtctr    r7
	cmplwi   r8, 0
	ble      lbl_800A7E8C

lbl_800A7DC4:
	lwz      r7, sDspDacReadBuffer__9JASDriver@sda21(r13)
	addi     r28, r3, 2
	lwz      r8, sDspDacBuffer__9JASDriver@sda21(r13)
	addi     r12, r3, 4
	slwi     r7, r7, 2
	addi     r11, r3, 6
	lwzx     r7, r8, r7
	addi     r10, r3, 8
	addi     r9, r3, 0xa
	addi     r8, r3, 0xc
	sthx     r0, r7, r3
	addi     r7, r3, 0xe
	addi     r3, r3, 0x10
	addi     r6, r6, 8
	lwz      r29, sDspDacReadBuffer__9JASDriver@sda21(r13)
	lwz      r27, sDspDacBuffer__9JASDriver@sda21(r13)
	slwi     r29, r29, 2
	lwzx     r29, r27, r29
	sthx     r0, r29, r28
	lwz      r28, sDspDacReadBuffer__9JASDriver@sda21(r13)
	lwz      r29, sDspDacBuffer__9JASDriver@sda21(r13)
	slwi     r28, r28, 2
	lwzx     r28, r29, r28
	sthx     r0, r28, r12
	lwz      r12, sDspDacReadBuffer__9JASDriver@sda21(r13)
	lwz      r28, sDspDacBuffer__9JASDriver@sda21(r13)
	slwi     r12, r12, 2
	lwzx     r12, r28, r12
	sthx     r0, r12, r11
	lwz      r11, sDspDacReadBuffer__9JASDriver@sda21(r13)
	lwz      r12, sDspDacBuffer__9JASDriver@sda21(r13)
	slwi     r11, r11, 2
	lwzx     r11, r12, r11
	sthx     r0, r11, r10
	lwz      r10, sDspDacReadBuffer__9JASDriver@sda21(r13)
	lwz      r11, sDspDacBuffer__9JASDriver@sda21(r13)
	slwi     r10, r10, 2
	lwzx     r10, r11, r10
	sthx     r0, r10, r9
	lwz      r9, sDspDacReadBuffer__9JASDriver@sda21(r13)
	lwz      r10, sDspDacBuffer__9JASDriver@sda21(r13)
	slwi     r9, r9, 2
	lwzx     r9, r10, r9
	sthx     r0, r9, r8
	lwz      r8, sDspDacReadBuffer__9JASDriver@sda21(r13)
	lwz      r9, sDspDacBuffer__9JASDriver@sda21(r13)
	slwi     r8, r8, 2
	lwzx     r8, r9, r8
	sthx     r0, r8, r7
	bdnz     lbl_800A7DC4

lbl_800A7E8C:
	subf     r3, r6, r31
	slwi     r7, r6, 1
	mtctr    r3
	cmplw    r6, r31
	bge      lbl_800A7EBC

lbl_800A7EA0:
	lwz      r3, sDspDacReadBuffer__9JASDriver@sda21(r13)
	lwz      r6, sDspDacBuffer__9JASDriver@sda21(r13)
	slwi     r3, r3, 2
	lwzx     r3, r6, r3
	sthx     r0, r3, r7
	addi     r7, r7, 2
	bdnz     lbl_800A7EA0

lbl_800A7EBC:
	cmplw    r31, r4
	mr       r6, r31
	bge      lbl_800A8008
	subf     r0, r31, r4
	addi     r7, r4, -8
	cmplwi   r0, 8
	ble      lbl_800A7FBC
	addi     r0, r7, 7
	mr       r3, r4
	subf     r0, r31, r0
	srwi     r0, r0, 3
	mtctr    r0
	cmplw    r31, r7
	bge      lbl_800A7FBC

lbl_800A7EF4:
	lwz      r0, sDspDacReadBuffer__9JASDriver@sda21(r13)
	addi     r12, r3, 2
	lwz      r7, sDspDacBuffer__9JASDriver@sda21(r13)
	addi     r11, r3, 4
	slwi     r0, r0, 2
	addi     r10, r3, 6
	lwzx     r28, r7, r0
	addi     r9, r3, 8
	addi     r8, r3, 0xa
	addi     r7, r3, 0xc
	sthx     r5, r28, r3
	addi     r0, r3, 0xe
	addi     r3, r3, 0x10
	addi     r6, r6, 8
	lwz      r29, sDspDacReadBuffer__9JASDriver@sda21(r13)
	lwz      r28, sDspDacBuffer__9JASDriver@sda21(r13)
	slwi     r29, r29, 2
	lwzx     r29, r28, r29
	sthx     r5, r29, r12
	lwz      r12, sDspDacReadBuffer__9JASDriver@sda21(r13)
	lwz      r29, sDspDacBuffer__9JASDriver@sda21(r13)
	slwi     r12, r12, 2
	lwzx     r12, r29, r12
	sthx     r5, r12, r11
	lwz      r11, sDspDacReadBuffer__9JASDriver@sda21(r13)
	lwz      r12, sDspDacBuffer__9JASDriver@sda21(r13)
	slwi     r11, r11, 2
	lwzx     r11, r12, r11
	sthx     r5, r11, r10
	lwz      r10, sDspDacReadBuffer__9JASDriver@sda21(r13)
	lwz      r11, sDspDacBuffer__9JASDriver@sda21(r13)
	slwi     r10, r10, 2
	lwzx     r10, r11, r10
	sthx     r5, r10, r9
	lwz      r9, sDspDacReadBuffer__9JASDriver@sda21(r13)
	lwz      r10, sDspDacBuffer__9JASDriver@sda21(r13)
	slwi     r9, r9, 2
	lwzx     r9, r10, r9
	sthx     r5, r9, r8
	lwz      r8, sDspDacReadBuffer__9JASDriver@sda21(r13)
	lwz      r9, sDspDacBuffer__9JASDriver@sda21(r13)
	slwi     r8, r8, 2
	lwzx     r8, r9, r8
	sthx     r5, r8, r7
	lwz      r7, sDspDacReadBuffer__9JASDriver@sda21(r13)
	lwz      r8, sDspDacBuffer__9JASDriver@sda21(r13)
	slwi     r7, r7, 2
	lwzx     r7, r8, r7
	sthx     r5, r7, r0
	bdnz     lbl_800A7EF4

lbl_800A7FBC:
	subf     r0, r6, r4
	slwi     r7, r6, 1
	mtctr    r0
	cmplw    r6, r4
	bge      lbl_800A8008

lbl_800A7FD0:
	lwz      r0, sDspDacReadBuffer__9JASDriver@sda21(r13)
	lwz      r3, sDspDacBuffer__9JASDriver@sda21(r13)
	slwi     r0, r0, 2
	lwzx     r3, r3, r0
	sthx     r5, r3, r7
	addi     r7, r7, 2
	bdnz     lbl_800A7FD0
	b        lbl_800A8008

lbl_800A7FF0:
	stw      r4, sDspDacReadBuffer__9JASDriver@sda21(r13)
	slwi     r0, r4, 2
	lwz      r3, sDspDacBuffer__9JASDriver@sda21(r13)
	slwi     r4, r31, 2
	lwzx     r3, r3, r0
	bl       DCInvalidateRange

lbl_800A8008:
	lwz      r3, sDspDacReadBuffer__9JASDriver@sda21(r13)
	slwi     r0, r31, 1
	lwz      r4, sDspDacBuffer__9JASDriver@sda21(r13)
	mr       r5, r30
	slwi     r3, r3, 2
	mr       r6, r31
	lwzx     r4, r4, r3
	add      r3, r4, r0
	bl       imixcopy__7JASCalcFPCsPCsPsUl
	lmw      r27, 0xc(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
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
f32 getDacRate() { return sDacRate; }

/**
 * @note Address: 0x800A81F8
 * @note Size: 0x8
 */
u32 getSubFrames() { return sSubFrames; }

/**
 * @note Address: 0x800A8200
 * @note Size: 0xC
 */
static int getDacSize() { return sSubFrames * 0xA0; }

/**
 * @note Address: 0x800A820C
 * @note Size: 0xC
 */
static int getFrameSamples() { return sSubFrames * 0x50; }

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
