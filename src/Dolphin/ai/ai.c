#include "Dolphin/ai.h"
#include "Dolphin/hw_regs.h"
#include "Dolphin/os.h"

char* __AIVersion = "<< Dolphin SDK - AI\trelease build: Apr 17 2003 12:33:54 (0x2301) >>";

static AISCallback __AIS_Callback = NULL;
static AIDCallback __AID_Callback = NULL;
static u8* __CallbackStack;
static u8* __OldStack;
static volatile s32 __AI_init_flag = FALSE;
static volatile s32 __AID_Active   = FALSE;

static OSTime bound_32KHz;
static OSTime bound_48KHz;
static OSTime min_wait;
static OSTime max_wait;
static OSTime buffer;

static void __AI_set_stream_sample_rate(u32 rate);
static void __AISHandler(s16 interrupt, OSContext* context);
static void __AIDHandler(s16 interrupt, OSContext* context);
static void __AICallbackStackSwitch(register AIDCallback cb);
static void __AI_SRC_INIT(void);

/*
 * --INFO--
 * Address:	800F6864
 * Size:	000044
 */
AIDCallback AIRegisterDMACallback(AIDCallback callback)
{
	s32 oldInts;
	AIDCallback ret;

	ret            = __AID_Callback;
	oldInts        = OSDisableInterrupts();
	__AID_Callback = callback;
	OSRestoreInterrupts(oldInts);
	return ret;
}

/*
 * --INFO--
 * Address:	800F68A8
 * Size:	000088
 */
void AIInitDMA(u32 addr, u32 length)
{
	s32 oldInts;
	oldInts       = OSDisableInterrupts();
	__DSPRegs[24] = (u16)((__DSPRegs[24] & ~0x3FF) | (addr >> 16));
	__DSPRegs[25] = (u16)((__DSPRegs[25] & ~0xFFE0) | (0xffff & addr));
	__DSPRegs[27] = (u16)((__DSPRegs[27] & ~0x7FFF) | (u16)((length >> 5) & 0xFFFF));
	OSRestoreInterrupts(oldInts);
}

/*
 * --INFO--
 * Address:	........
 * Size:	000010
 */
BOOL AIGetDMAEnableFlag(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800F6930
 * Size:	000018
 */
void AIStartDMA(void) { __DSPRegs[27] |= 0x8000; }

/*
 * --INFO--
 * Address:	800F6948
 * Size:	000018
 */
void AIStopDMA(void) { __DSPRegs[27] &= ~0x8000; }

/*
 * --INFO--
 * Address:	........
 * Size:	000010
 */
u32 AIGetDMABytesLeft(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00001C
 */
u32 AIGetDMAStartAddr(void) { return (u32)((__DSPRegs[24] & 0x03ff) << 16) | (__DSPRegs[25] & 0xffe0); }

/*
 * --INFO--
 * Address:	........
 * Size:	000010
 */
u32 AIGetDMALength(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
BOOL AICheckInit(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000044
 */
AISCallback AIRegisterStreamCallback(AISCallback callback)
{
	AISCallback ret;
	s32 oldInts;

	ret            = __AIS_Callback;
	oldInts        = OSDisableInterrupts();
	__AIS_Callback = callback;
	OSRestoreInterrupts(oldInts);
	return ret;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000010
 */
u32 AIGetStreamSampleCount(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000018
 */
void AIResetStreamSampleCount(void) { __AIRegs[0] = (__AIRegs[0] & ~0x20) | 0x20; }

/*
 * --INFO--
 * Address:	........
 * Size:	00000C
 */

void AISetStreamTrigger(u32 trigger) { __AIRegs[AI_INTRPT_TIMING] = trigger; }

/*
 * --INFO--
 * Address:	........
 * Size:	000010
 */
u32 AIGetStreamTrigger(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800F6960
 * Size:	0000D8
 */
void AISetStreamPlayState(u32 state)
{
	s32 oldInts;
	u8 volRight;
	u8 volLeft;

	if (state == AIGetStreamPlayState()) {
		return;
	}
	if ((AIGetStreamSampleRate() == 0U) && (state == 1)) {
		volRight = AIGetStreamVolRight();
		volLeft  = AIGetStreamVolLeft();
		AISetStreamVolRight(0);
		AISetStreamVolLeft(0);
		oldInts = OSDisableInterrupts();
		__AI_SRC_INIT();
		__AIRegs[AI_CONTROL] = (__AIRegs[AI_CONTROL] & ~0x20) | 0x20;
		__AIRegs[AI_CONTROL] = (__AIRegs[AI_CONTROL] & ~1) | 1;
		OSRestoreInterrupts(oldInts);
		AISetStreamVolLeft(volRight);
		AISetStreamVolRight(volLeft);
	} else {
		__AIRegs[AI_CONTROL] = (__AIRegs[AI_CONTROL] & ~1) | state;
	}
}

/*
 * --INFO--
 * Address:	800F6A38
 * Size:	000010
 */
u32 AIGetStreamPlayState(void) { return __AIRegs[AI_CONTROL] & 1; }

/*
 * --INFO--
 * Address:	800F6A48
 * Size:	0000E0
 */
void AISetDSPSampleRate(u32 rate)
{
	u32 state;
	s32 oldInts;
	u8 left;
	u8 right;
	u32 sampleRate;

	if (rate == AIGetDSPSampleRate()) {
		return;
	}

	__AIRegs[AI_CONTROL] &= ~0x40;
	if (rate == 0) {
		left       = AIGetStreamVolLeft();
		right      = AIGetStreamVolRight();
		state      = AIGetStreamPlayState();
		sampleRate = AIGetStreamSampleRate();
		AISetStreamVolLeft(0);
		AISetStreamVolRight(0);
		oldInts = OSDisableInterrupts();
		__AI_SRC_INIT();
		__AIRegs[AI_CONTROL] = (__AIRegs[AI_CONTROL] & ~0x20) | 0x20;
		__AIRegs[AI_CONTROL] = (__AIRegs[AI_CONTROL] & ~2) | (sampleRate * 2);
		__AIRegs[AI_CONTROL] = (__AIRegs[AI_CONTROL] & ~1) | state;
		__AIRegs[AI_CONTROL] |= 0x40;
		OSRestoreInterrupts(oldInts);
		AISetStreamVolLeft(left);
		AISetStreamVolRight(right);
	}
}

/*
 * --INFO--
 * Address:	800F6B28
 * Size:	000014
 */
u32 AIGetDSPSampleRate(void) { return ((__AIRegs[AI_CONTROL] >> 6) & 1) ^ 1; }

/*
 * --INFO--
 * Address:	........
 * Size:	000028
 */
void AISetStreamSampleRate(u32 rate)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000020
 */
void __AI_DEBUG_set_stream_sample_rate(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800F6B3C
 * Size:	0000D4
 */
static void __AI_set_stream_sample_rate(u32 rate)
{
	s32 oldInts;
	s32 state;
	u8 left;
	u8 right;
	s32 temp_r26;

	if (rate == AIGetStreamSampleRate()) {
		return;
	}
	state = AIGetStreamPlayState();
	left  = AIGetStreamVolLeft();
	right = AIGetStreamVolRight();
	AISetStreamVolRight(0);
	AISetStreamVolLeft(0);
	temp_r26 = __AIRegs[AI_CONTROL] & 0x40;
	__AIRegs[AI_CONTROL] &= ~0x40;
	oldInts = OSDisableInterrupts();
	__AI_SRC_INIT();
	__AIRegs[AI_CONTROL] |= temp_r26;
	__AIRegs[AI_CONTROL] = (__AIRegs[AI_CONTROL] & ~0x20) | 0x20;
	__AIRegs[AI_CONTROL] = (__AIRegs[AI_CONTROL] & ~2) | (rate * 2);
	OSRestoreInterrupts(oldInts);
	AISetStreamPlayState(state);
	AISetStreamVolLeft(left);
	AISetStreamVolRight(right);
}

/*
 * --INFO--
 * Address:	800F6C10
 * Size:	000010
 */
u32 AIGetStreamSampleRate(void) { return (__AIRegs[AI_CONTROL] >> 1) & 1; }

/*
 * --INFO--
 * Address:	800F6C20
 * Size:	00001C
 */
void AISetStreamVolLeft(u8 volume) { __AIRegs[AI_VOLUME] = (__AIRegs[AI_VOLUME] & ~0xFF) | (volume & 0xFF); }

/*
 * --INFO--
 * Address:	800F6C3C
 * Size:	000010
 */
u8 AIGetStreamVolLeft(void) { return __AIRegs[AI_VOLUME]; }

/*
 * --INFO--
 * Address:	800F6C4C
 * Size:	00001C
 */
void AISetStreamVolRight(u8 volume) { __AIRegs[AI_VOLUME] = (__AIRegs[AI_VOLUME] & ~0xFF00) | ((volume & 0xFF) << 8); }

/*
 * --INFO--
 * Address:	800F6C68
 * Size:	000010
 */
u8 AIGetStreamVolRight(void) { return __AIRegs[AI_VOLUME] >> 8; }

/*
 * --INFO--
 * Address:	800F6C78
 * Size:	00016C
 */
void AIInit(u8* stack)
{
	if (__AI_init_flag == TRUE) {
		return;
	}

	OSRegisterVersion(__AIVersion);
	bound_32KHz = OSNanosecondsToTicks(31524);
	bound_48KHz = OSNanosecondsToTicks(42024);
	min_wait    = OSNanosecondsToTicks(42000);
	max_wait    = OSNanosecondsToTicks(63000);
	buffer      = OSNanosecondsToTicks(3000);

	AISetStreamVolRight(0);
	AISetStreamVolLeft(0);
	AISetStreamTrigger(0);
	AIResetStreamSampleCount();
	__AI_set_stream_sample_rate(1);
	AISetDSPSampleRate(0);
	__AIS_Callback  = 0;
	__AID_Callback  = 0;
	__CallbackStack = stack;
	__OSSetInterruptHandler(5, __AIDHandler);
	__OSUnmaskInterrupts(0x04000000);
	__OSSetInterruptHandler(8, __AISHandler);
	__OSUnmaskInterrupts(0x800000);
	__AI_init_flag = TRUE;
}

/*
 * --INFO--
 * Address:	........
 * Size:	00000C
 */
void AIReset(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800F6DE4
 * Size:	00007C
 */
static void __AISHandler(s16 interrupt, OSContext* context)
{
	OSContext tmpContext;
	__AIRegs[AI_CONTROL] |= 8;
	OSClearContext(&tmpContext);
	OSSetCurrentContext(&tmpContext);
	if (__AIS_Callback != NULL) {
		__AIS_Callback(__AIRegs[AI_SAMPLE_COUNTER]);
	}
	OSClearContext(&tmpContext);
	OSSetCurrentContext(context);
}

/*
 * --INFO--
 * Address:	800F6E60
 * Size:	0000AC
 */
static void __AIDHandler(s16 interrupt, OSContext* context)
{
	OSContext tempContext;
	u32 temp     = __DSPRegs[5];
	__DSPRegs[5] = (temp & ~0xA0) | 8;
	OSClearContext(&tempContext);
	OSSetCurrentContext(&tempContext);
	if (__AID_Callback && !__AID_Active) {
		__AID_Active = TRUE;
		if (__CallbackStack) {
			__AICallbackStackSwitch(__AID_Callback);
		} else {
			__AID_Callback();
		}

		__AID_Active = FALSE;
	}

	OSClearContext(&tempContext);
	OSSetCurrentContext(context);
}

/*
 * --INFO--
 * Address:	800F6F0C
 * Size:	000058
 */
// clang-format off
asm static void __AICallbackStackSwitch(register AIDCallback cb) {
  // Allocate stack frame
  fralloc

  // Store current stack
  lis r5, __OldStack@ha
  addi r5, r5, __OldStack@l
  stw r1, 0(r5)

  // Load stack for callback
  lis r5, __CallbackStack@ha 
  addi r5, r5, __CallbackStack@l 
  lwz r1,0(r5)

  // Move stack down 8 bytes
  subi r1, r1, 8
  // Call callback
  mtlr cb 
  blrl

  // Restore old stack
  lis r5, __OldStack @ha 
  addi r5, r5, __OldStack@l 
  lwz r1,0(r5)

  // Free stack frame
  frfree

  blr
}
// clang-format on

/*
 * --INFO--
 * Address:	800F6F64
 * Size:	0001E4
 */
static void __AI_SRC_INIT(void)
{
	OSTime rising_32khz = 0;
	OSTime rising_48khz = 0;
	OSTime diff         = 0;
	OSTime t1           = 0;
	OSTime temp         = 0;
	u32 temp0           = 0;
	u32 temp1           = 0;
	u32 done            = 0;
	u32 volume          = 0;
	u32 Init_Cnt        = 0;
	u32 walking         = 0;

	walking  = 0;
	Init_Cnt = 0;
	temp     = 0;

	while (!done) {
		__AIRegs[AI_CONTROL] = (__AIRegs[AI_CONTROL] & ~0x20) | 0x20;
		__AIRegs[AI_CONTROL] &= ~2;
		__AIRegs[AI_CONTROL] = (__AIRegs[AI_CONTROL] & ~1) | 1;

		temp0 = __AIRegs[AI_SAMPLE_COUNTER];

		while (temp0 == __AIRegs[AI_SAMPLE_COUNTER])
			;
		rising_32khz = OSGetTime();

		__AIRegs[AI_CONTROL] = (__AIRegs[AI_CONTROL] & ~2) | 2;
		__AIRegs[AI_CONTROL] = (__AIRegs[AI_CONTROL] & ~1) | 1;

		temp1 = __AIRegs[AI_SAMPLE_COUNTER];
		while (temp1 == __AIRegs[AI_SAMPLE_COUNTER])
			;

		rising_48khz = OSGetTime();

		diff = rising_48khz - rising_32khz;
		__AIRegs[AI_CONTROL] &= ~2;
		__AIRegs[AI_CONTROL] &= ~1;

		if (diff < (bound_32KHz - buffer)) {
			temp = min_wait;
			done = 1;
			++Init_Cnt;
		} else if (diff >= (bound_32KHz + buffer) && diff < (bound_48KHz - buffer)) {
			temp = max_wait;
			done = 1;
			++Init_Cnt;
		} else {
			done    = 0;
			walking = 1;
			++Init_Cnt;
		}
	}

	while ((rising_48khz + temp) > OSGetTime())
		;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void __ai_src_get_time(void)
{
	// UNUSED FUNCTION
}
