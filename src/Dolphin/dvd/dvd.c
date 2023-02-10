#include "Dolphin/os.h"
#include "Dolphin/hw_regs.h"
#include "types.h"
#include "Dolphin/dvd.h"
#include "mem.h"
#include "Dolphin/stl.h"

extern OSThreadQueue __DVDThreadQueue;

// forward declarations for weak functions in other src files:
void __DVDInterruptHandler(s16 p1, OSContext* context);
void __DVDInitWA();
// BOOL DVDLowAudioBufferConfig(unknown, unknown, DVDLowCallback*);
// BOOL DVDLowAudioStream(unknown, unknown, unknown, DVDLowCallback*);
// BOOL DVDLowInquiry(DVDDiskID*, DVDLowCallback*);
// BOOL DVDLowRead(void*, unknown, unknown, DVDLowCallback*);
// BOOL DVDLowReadDiskID(DVDDiskID*, DVDLowCallback*);
// BOOL DVDLowRequestAudioStatus(unknown, DVDLowCallback*);
// BOOL DVDLowRequestError(DVDLowCallback*);
void DVDLowReset();
// BOOL DVDLowSeek(unknown, DVDLowCallback*);
// BOOL DVDLowStopMotor(DVDLowCallback*);
// BOOL DVDLowWaitCoverClose(DVDLowCallback*);

typedef struct _BB2 {
	u8 _00[4];      // _00
	unknown _04;    // _04
	u32 command;    // _08
	u8 state[0x14]; // _0C
} _BB2;

typedef enum DVDResumePoint {
	Resume_00 = 0,
	Resume_01 = 1,
	Resume_02 = 2,
	Resume_03 = 3,
	Resume_04 = 4,
	Resume_05 = 5,
	Resume_06 = 6,
	Resume_07 = 7
} DVDResumePoint;

typedef enum DVDCommand {
	Command_0 = 0,
	Command_1,
	Command_2,
	Command_3,
	Command_4,
	Command_5,
	Command_6,
	Command_7,
	Command_8,
	Command_9,
	Command_A,
	Command_B,
	Command_C,
	Command_D,
	Command_E,
	Command_F
} DVDCommand;

typedef void (*DVDOptionalCommandChecker)(DVDCommandBlock* block, void (*cb)(u32 intType));
// TODO: CancelCB may or may not take any arguments. Assuming based on read usage that it's (int, DVDCommandBlock*).
// CancelCallback is never actually set to a function that uses arguments, so it's hard to tell.
typedef void CancelCB(int, DVDCommandBlock*);

// forward declarations for local functions, as needed:
static void AlarmHandler(OSAlarm* alarm, OSContext* context);
static void cbForCancelSync(s32 result, DVDCommandBlock* block);
static void cbForStateBusy(u32 p1);
static void cbForStateCheckID1(u32 p1);
static void cbForStateCheckID2(u32 p1);
static void cbForStateCheckID2a(u32 p1);
static void cbForStateCheckID3(u32 p1);
static void cbForStateCoverClosed(u32 p1);
static void cbForStateMotorStopped(u32 p1);
static void cbForStateReadingFST(u32 p1);
static void cbForStateGettingError(u32 p1);
static void cbForStateGoToRetry(u32 p1);
static void cbForUnrecoveredError(u32 p1);
static void cbForUnrecoveredErrorRetry(u32 p1);
static void defaultOptionalCommandChecker(DVDCommandBlock* block, DVDLowCallback cb);
static void stateBusy(DVDCommandBlock*);
static void stateCheckID2(DVDCommandBlock*);
static void stateCheckID2a(DVDCommandBlock*);
static void stateCheckID3(DVDCommandBlock*);
static void stateCoverClosed();
static void stateCoverClosed_CMD(DVDCommandBlock*);
static void stateGettingError();
static void stateGoToRetry();
static void stateMotorStopped();
static void stateReady();
static void stateTimeout();

// bss.0:
_BB2 BB2 ATTRIBUTE_ALIGN(32);
DVDDiskID CurrDiskID ATTRIBUTE_ALIGN(32);
DVDCommandBlock DummyCommandBlock;
OSAlarm ResetAlarm;

// .sbss:
// dmaCount$347 // omitted function-scope static
// immCount$345 // omitted function-scope static
typedef void (*stateFunc)(DVDCommandBlock* block);
stateFunc LastState;
BOOL DVDInitialized;
BOOL FirstTimeInBootrom;
// unknown ResetCount; // omitted
// unknown CancelAllSyncComplete; // omitted
BOOL ResetRequired;
int NumInternalRetry;
int LastError;
u32 CancelLastError;
// int ResumeFromHere;
DVDResumePoint ResumeFromHere;
CancelCB* CancelCallback;
u32 Canceling;
DVDCommand CurrCommand;
BOOL FatalErrorFlag;
BOOL AutoFinishing;
BOOL PausingFlag;
BOOL PauseFlag;
OSBootInfo* bootInfo;
DVDDiskID* IDShouldBe;
DVDCommandBlock* executing;

// .sdata: (not exhaustive; DMACommand must be at some point after DVDInit)
static char* __DVDVersion                             = "<< Dolphin SDK - DVD\trelease build: Sep 16 2003 09:50:54 (0x2301) >>";
static int autoInvalidation                           = 1;
static DVDOptionalCommandChecker checkOptionalCommand = defaultOptionalCommandChecker;

#define SOMESYNC() HW_REG(0xCC006004, u32) = HW_REG(0xCC006004, u32)

// #define ADVANCE_LAST_STATE(nextState) \
// 	LastState = (nextState); \
// 	(nextState)(executing)

// TODO: This can't be DVDChangeDisk itself; that's too big.
//       Even then, all of the DVDChangeDisk functions are after the usages of this... maybe it's a macro?
//       If so, would there be some way to force __LINE__ to the line number of the last usage?
//       Or maybe it's possible to start inlining from the bottom somehow... hmm...

static void UnknownDVDAutoInvalidateInline(struct DVDCommandBlock* block)
{
	if (autoInvalidation && (block->command == 1 || block->command == 4 || block->command == 5 || block->command == 14)) {
		DCInvalidateRange(block->addr, block->length);
	}
}

/*
 * --INFO--
 * Address:	800DCD28
 * Size:	000004
 */
static void defaultOptionalCommandChecker(DVDCommandBlock* block, DVDLowCallback cb) {};

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void __DVDSetOptionalCommandChecker()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800DCD2C
 * Size:	0000CC
 */
void DVDInit()
{
	if (DVDInitialized) {
		return;
	}

	OSRegisterVersion(__DVDVersion);
	DVDInitialized = TRUE;
	__DVDFSInit();
	__DVDClearWaitingQueue();
	__DVDInitWA();
	bootInfo   = (OSBootInfo*)OSPhysicalToCached(0x0000);
	IDShouldBe = &(bootInfo->DVDDiskID);
	__OSSetInterruptHandler(21, __DVDInterruptHandler);
	__OSUnmaskInterrupts(0x400);
	OSInitThreadQueue(&__DVDThreadQueue);
	__DIRegs[0] = 0x2a;
	__DIRegs[1] = 0;
	if (bootInfo->magic == 0xE5207C22) {
		OSReport("load fst\n");
		__fstLoad();
	} else if (bootInfo->magic != 0xD15EA5E) {
		FirstTimeInBootrom = TRUE;
	}
}

static void UnknownDVDChangeDiskInline()
{
	if (bootInfo->FSTMaxLength < BB2.command) {
		OSErrorLine(650, "DVDChangeDisk(): FST in the new disc is too big.   ");
	}
	DVDLowRead(bootInfo->FSTLocation, OSRoundUp32B(BB2.command), BB2._04, cbForStateReadingFST);
}

/*
 * --INFO--
 * Address:	800DCDF8
 * Size:	000094
 */
static void stateReadingFST(DVDCommandBlock* cmdBlock)
{
	LastState = stateReadingFST;
	UnknownDVDChangeDiskInline();
	/*
	.loc_0x0:
	  mflr      r0
	  lis       r3, 0x800E
	  stw       r0, 0x4(r1)
	  subi      r0, r3, 0x3208
	  lis       r3, 0x804F
	  stwu      r1, -0x10(r1)
	  addi      r3, r3, 0x5E00
	  stw       r31, 0xC(r1)
	  addi      r31, r3, 0x8
	  stw       r0, -0x718C(r13)
	  lwz       r4, -0x71C8(r13)
	  lwz       r0, 0x0(r31)
	  lwz       r3, 0x3C(r4)
	  cmplw     r3, r0
	  bge-      .loc_0x54
	  lis       r3, 0x804A
	  crclr     6, 0x6
	  addi      r5, r3, 0x7CEC
	  subi      r3, r13, 0x7D3C
	  li        r4, 0x28A
	  bl        0x10924

	.loc_0x54:
	  lis       r3, 0x804F
	  lwz       r6, 0x0(r31)
	  addi      r5, r3, 0x5E00
	  lwz       r7, -0x71C8(r13)
	  lis       r4, 0x800E
	  lwz       r5, 0x4(r5)
	  addi      r0, r6, 0x1F
	  lwz       r3, 0x38(r7)
	  subi      r6, r4, 0x3174
	  rlwinm    r4,r0,0,0,26
	  bl        -0x1620
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  addi      r1, r1, 0x10
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800DCE8C
 * Size:	00008C
 */
static void cbForStateReadingFST(u32 p1)
{
	DVDCommandBlock* cmdBlock;
	if (p1 == 0x10) {
		executing->state = -1;
		stateTimeout();
	} else if ((p1 & 1) != 0) {
		NumInternalRetry = 0;
		__DVDFSInit();
		cmdBlock        = executing;
		executing       = &DummyCommandBlock;
		cmdBlock->state = 0;
		if (cmdBlock->callback) {
			(cmdBlock->callback)(0, cmdBlock);
		}
		stateReady();
	} else {
		stateGettingError();
	}
}

/*
 * --INFO--
 * Address:	800DCF18
 * Size:	0000AC
 */
static void cbForStateError(u32 intType)
{
	DVDCommandBlock* finished;

	if (intType == 16) {
		executing->state = -1;
		stateTimeout();
		return;
	}

	__DVDPrintFatalMessage();

	FatalErrorFlag = TRUE;
	finished       = executing;
	executing      = &DummyCommandBlock;
	if (finished->callback) {
		(finished->callback)(-1, finished);
	}

	if (Canceling) {
		Canceling = FALSE;
		if (CancelCallback)
			(CancelCallback)(0, finished);
	}

	stateReady();

	return;
}

/*
 * --INFO--
 * Address:	........
 * Size:	00002C
 */
static void stateError()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800DCFC4
 * Size:	000034
 */
static void stateTimeout()
{
	__DVDStoreErrorCode(0x1234568);
	DVDReset();
	cbForStateError(0);
	/*
	.loc_0x0:
	  mflr      r0
	  lis       r3, 0x123
	  stw       r0, 0x4(r1)
	  addi      r3, r3, 0x4568
	  stwu      r1, -0x8(r1)
	  bl        0x2798
	  bl        0x1D44
	  li        r3, 0
	  bl        -0xCC
	  lwz       r0, 0xC(r1)
	  addi      r1, r1, 0x8
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800DCFF8
 * Size:	000028
 */
static void stateGettingError() { DVDLowRequestError(cbForStateGettingError); }

/*
 * --INFO--
 * Address:	800DD020
 * Size:	0000B4
 */
static u32 CategorizeError(u32 error)
{
	if (error == 0x20400) {
		LastError = error;
		return 1;
	}

	error &= 0xffffff;

	if ((error == 0x62800) || (error == 0x23a00) || (error == 0xb5a01)) {
		return 0;
	}

	++NumInternalRetry;
	if (NumInternalRetry == 2) {
		if (error == LastError) {
			LastError = error;
			return 1;
		} else {
			LastError = error;
			return 2;
		}
	} else {
		LastError = error;

		if ((error == 0x31100) || (executing->command == 5)) {
			return 2;
		} else {
			return 3;
		}
	}
}

/*
 * --INFO--
 * Address:	........
 * Size:	00009C
 */
inline static BOOL CheckCancel(u32 resume)
{
	DVDCommandBlock* finished;

	if (Canceling) {
		ResumeFromHere = resume;
		Canceling      = FALSE;

		finished  = executing;
		executing = &DummyCommandBlock;

		finished->state = 10;
		if (finished->callback)
			(*finished->callback)(-3, finished);
		if (CancelCallback)
			(CancelCallback)(0, finished);
		stateReady();
		return TRUE;
	}
	return FALSE;
}

/*
 * --INFO--
 * Address:	800DD0D4
 * Size:	000294
 */
static void cbForStateGettingError(u32 intType)
{
	u32 error;
	u32 status;
	u32 errorCategory;
	u32 resume;

	if (intType == 16) {
		executing->state = -1;
		stateTimeout();
		return;
	}

	if (intType & 2) {
		executing->state = -1;
		stateError(0x1234567);
		return;
	}

	error  = __DIRegs[8];
	status = error & 0xff000000;

	errorCategory = CategorizeError(error);

	if (errorCategory == 1) {
		executing->state = -1;
		stateError(error);
		return;
	}

	if ((errorCategory == 2) || (errorCategory == 3)) {
		resume = 0;
	} else {
		if (status == 0x01000000)
			resume = 4;
		else if (status == 0x02000000)
			resume = 6;
		else if (status == 0x03000000)
			resume = 3;
		else
			resume = 5;
	}

	if (CheckCancel(resume))
		return;

	if (errorCategory == 2) {
		__DVDStoreErrorCode(error);
		stateGoToRetry();
		return;
	}

	if (errorCategory == 3) {
		if ((error & 0x00ffffff) == 0x00031100) {
			DVDLowSeek(executing->offset, cbForUnrecoveredError);
		} else {
			LastState(executing);
		}
		return;
	}

	if (status == 0x01000000) {
		executing->state = 5;
		stateMotorStopped();
		return;
	} else if (status == 0x02000000) {
		executing->state = 3;
		stateCoverClosed();
		return;
	} else if (status == 0x03000000) {
		executing->state = 4;
		stateMotorStopped();
		return;
	} else {
		executing->state = -1;
		stateError(0x1234567);
		return;
	}
}

/*
 * --INFO--
 * Address:	800DD368
 * Size:	000068
 */
static void cbForUnrecoveredError(u32 p1)
{
	if (p1 == 0x10) {
		executing->state = -1;
		__DVDStoreErrorCode(0x1234568);
		DVDReset();
		cbForStateError(0);
	} else if ((p1 & 1) != 0) {
		stateGoToRetry();
	} else {
		DVDLowRequestError(cbForUnrecoveredErrorRetry);
	}
	/*
	.loc_0x0:
	  mflr      r0
	  cmplwi    r3, 0x10
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x8(r1)
	  bne-      .loc_0x3C
	  lwz       r4, -0x71D0(r13)
	  li        r0, -0x1
	  lis       r3, 0x123
	  stw       r0, 0xC(r4)
	  addi      r3, r3, 0x4568
	  bl        0x23E0
	  bl        0x198C
	  li        r3, 0
	  bl        -0x484
	  b         .loc_0x58

	.loc_0x3C:
	  rlwinm.   r0,r3,0,31,31
	  beq-      .loc_0x4C
	  bl        0xBC
	  b         .loc_0x58

	.loc_0x4C:
	  lis       r3, 0x800E
	  subi      r3, r3, 0x2C30
	  bl        -0x16E0

	.loc_0x58:
	  lwz       r0, 0xC(r1)
	  addi      r1, r1, 0x8
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800DD3D0
 * Size:	000098
 */
void cbForUnrecoveredErrorRetry(u32 p1)
{
	if (p1 == 0x10) {
		executing->state = -1;
		__DVDStoreErrorCode(0x1234568);
		DVDReset();
		cbForStateError(0);
	} else if ((p1 & 2) != 0) {
		__DVDStoreErrorCode(0x1234567);
		DVDLowStopMotor(cbForStateError);
	} else {
		__DVDStoreErrorCode(HW_REG(0xCC006020, u32));
		DVDLowStopMotor(cbForStateError);
	}
	/*
	.loc_0x0:
	  mflr      r0
	  cmplwi    r3, 0x10
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x8(r1)
	  bne-      .loc_0x3C
	  lwz       r4, -0x71D0(r13)
	  li        r0, -0x1
	  lis       r3, 0x123
	  stw       r0, 0xC(r4)
	  addi      r3, r3, 0x4568
	  bl        0x2378
	  bl        0x1924
	  li        r3, 0
	  bl        -0x4EC
	  b         .loc_0x88

	.loc_0x3C:
	  rlwinm.   r0,r3,0,30,30
	  lwz       r3, -0x71D0(r13)
	  li        r4, -0x1
	  stw       r4, 0xC(r3)
	  beq-      .loc_0x6C
	  lis       r3, 0x123
	  addi      r3, r3, 0x4567
	  bl        0x2348
	  lis       r3, 0x800E
	  subi      r3, r3, 0x30E8
	  bl        -0x17E4
	  b         .loc_0x88

	.loc_0x6C:
	  lis       r3, 0xCC00
	  addi      r3, r3, 0x6000
	  lwz       r3, 0x20(r3)
	  bl        0x2328
	  lis       r3, 0x800E
	  subi      r3, r3, 0x30E8
	  bl        -0x1804

	.loc_0x88:
	  lwz       r0, 0xC(r1)
	  addi      r1, r1, 0x8
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800DD468
 * Size:	000028
 */
void stateGoToRetry() { DVDLowStopMotor(cbForStateGoToRetry); }

/*
 * --INFO--
 * Address:	800DD490
 * Size:	000158
 */
void cbForStateGoToRetry(u32 p1)
{
	BOOL keepGoing;
	DVDCommandBlock* cmdBlock;
	if (p1 == 0x10) {
		executing->state = -1;
		__DVDStoreErrorCode(0x1234568);
		DVDReset();
		cbForStateError(0);
	} else if ((p1 & 2) != 0) {
		executing->state = -1;
		__DVDStoreErrorCode(0x1234567);
		DVDLowStopMotor(cbForStateError);
	} else {
		NumInternalRetry = 0;
		if (CurrCommand == Command_4 || CurrCommand == Command_5 || CurrCommand == Command_D || CurrCommand == Command_F) {
			ResetRequired = TRUE;
		}
		if (Canceling != FALSE) {
			ResumeFromHere  = Resume_02;
			cmdBlock        = executing;
			executing       = &DummyCommandBlock;
			Canceling       = FALSE;
			cmdBlock->state = 0xA;
			if (cmdBlock->callback) {
				(cmdBlock->callback)(-3, cmdBlock);
			}
			if (CancelCallback) {
				(*CancelCallback)(0, cmdBlock);
			}
			stateReady();
			keepGoing = TRUE;
		} else {
			keepGoing = FALSE;
		}
		if (!keepGoing) {
			executing->state = 0xB;
			stateMotorStopped();
		}
	}
	/*
	.loc_0x0:
	  mflr      r0
	  cmplwi    r3, 0x10
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x18(r1)
	  stw       r31, 0x14(r1)
	  bne-      .loc_0x40
	  lwz       r4, -0x71D0(r13)
	  li        r0, -0x1
	  lis       r3, 0x123
	  stw       r0, 0xC(r4)
	  addi      r3, r3, 0x4568
	  bl        0x22B4
	  bl        0x1860
	  li        r3, 0
	  bl        -0x5B0
	  b         .loc_0x144

	.loc_0x40:
	  rlwinm.   r0,r3,0,30,30
	  beq-      .loc_0x70
	  lwz       r4, -0x71D0(r13)
	  li        r0, -0x1
	  lis       r3, 0x123
	  stw       r0, 0xC(r4)
	  addi      r3, r3, 0x4567
	  bl        0x2284
	  lis       r3, 0x800E
	  subi      r3, r3, 0x30E8
	  bl        -0x18A8
	  b         .loc_0x144

	.loc_0x70:
	  li        r0, 0
	  stw       r0, -0x719C(r13)
	  lwz       r0, -0x71B4(r13)
	  cmplwi    r0, 0x4
	  beq-      .loc_0xA8
	  lwz       r0, -0x71B4(r13)
	  cmplwi    r0, 0x5
	  beq-      .loc_0xA8
	  lwz       r0, -0x71B4(r13)
	  cmplwi    r0, 0xD
	  beq-      .loc_0xA8
	  lwz       r0, -0x71B4(r13)
	  cmplwi    r0, 0xF
	  bne-      .loc_0xB0

	.loc_0xA8:
	  li        r0, 0x1
	  stw       r0, -0x7198(r13)

	.loc_0xB0:
	  lwz       r0, -0x71B0(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0x128
	  li        r0, 0x2
	  lwz       r31, -0x71D0(r13)
	  lis       r3, 0x804F
	  stw       r0, -0x71A8(r13)
	  addi      r0, r3, 0x5E40
	  li        r3, 0
	  stw       r0, -0x71D0(r13)
	  li        r0, 0xA
	  stw       r3, -0x71B0(r13)
	  stw       r0, 0xC(r31)
	  lwz       r12, 0x28(r31)
	  cmplwi    r12, 0
	  beq-      .loc_0x100
	  mtlr      r12
	  addi      r4, r31, 0
	  li        r3, -0x3
	  blrl

	.loc_0x100:
	  lwz       r12, -0x71AC(r13)
	  cmplwi    r12, 0
	  beq-      .loc_0x11C
	  mtlr      r12
	  addi      r4, r31, 0
	  li        r3, 0
	  blrl

	.loc_0x11C:
	  bl        0x7E0
	  li        r0, 0x1
	  b         .loc_0x12C

	.loc_0x128:
	  li        r0, 0

	.loc_0x12C:
	  cmpwi     r0, 0
	  bne-      .loc_0x144
	  lwz       r3, -0x71D0(r13)
	  li        r0, 0xB
	  stw       r0, 0xC(r3)
	  bl        0x6B0

	.loc_0x144:
	  lwz       r0, 0x1C(r1)
	  lwz       r31, 0x14(r1)
	  addi      r1, r1, 0x18
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800DD5E8
 * Size:	0000E0
 */
static void stateCheckID()
{
	switch (CurrCommand) {
	case 3:
		if (DVDCompareDiskID(&CurrDiskID, executing->id) != FALSE) {
			memcpy(IDShouldBe, &CurrDiskID, sizeof(DVDDiskID));
			executing->state = 1;
			DCInvalidateRange(&BB2, sizeof(_BB2));
			// ADVANCE_LAST_STATE(stateCheckID2a);
			LastState = stateCheckID2a;
			stateCheckID2a(executing);
		} else {
			DVDLowStopMotor(cbForStateCheckID1);
		}
		break;
	default:
		if (memcmp(&CurrDiskID, IDShouldBe, sizeof(DVDDiskID)) != 0) {
			DVDLowStopMotor(cbForStateCheckID1);
		} else {
			LastState = stateCheckID3;
			stateCheckID3(executing);
		}
		break;
	}
	/*
	.loc_0x0:
	  mflr      r0
	  lis       r3, 0x804F
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x10(r1)
	  stw       r31, 0xC(r1)
	  addi      r31, r3, 0x5E00
	  lwz       r0, -0x71B4(r13)
	  cmpwi     r0, 0x3
	  beq-      .loc_0x28
	  b         .loc_0x90

	.loc_0x28:
	  lwz       r4, -0x71D0(r13)
	  addi      r3, r31, 0x20
	  lwz       r4, 0x24(r4)
	  bl        0x21D0
	  cmpwi     r3, 0
	  beq-      .loc_0x80
	  lwz       r3, -0x71CC(r13)
	  addi      r4, r31, 0x20
	  li        r5, 0x20
	  bl        -0xD8498
	  lwz       r4, -0x71D0(r13)
	  li        r0, 0x1
	  addi      r3, r31, 0
	  stw       r0, 0xC(r4)
	  li        r4, 0x20
	  bl        0xF0A0
	  lis       r4, 0x800E
	  lwz       r3, -0x71D0(r13)
	  subi      r0, r4, 0x2904
	  stw       r0, -0x718C(r13)
	  bl        0x9C
	  b         .loc_0xCC

	.loc_0x80:
	  lis       r3, 0x800E
	  subi      r3, r3, 0x2824
	  bl        -0x1A20
	  b         .loc_0xCC

	.loc_0x90:
	  lwz       r4, -0x71CC(r13)
	  addi      r3, r31, 0x20
	  li        r5, 0x20
	  bl        -0x1669C
	  cmpwi     r3, 0
	  beq-      .loc_0xB8
	  lis       r3, 0x800E
	  subi      r3, r3, 0x2824
	  bl        -0x1A48
	  b         .loc_0xCC

	.loc_0xB8:
	  lis       r4, 0x800E
	  lwz       r3, -0x71D0(r13)
	  subi      r0, r4, 0x2938
	  stw       r0, -0x718C(r13)
	  bl        .loc_0xE0

	.loc_0xCC:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  addi      r1, r1, 0x10
	  mtlr      r0
	  blr

	.loc_0xE0:
	*/
}

/*
 * --INFO--
 * Address:	800DD6C8
 * Size:	000034
 */
static void stateCheckID3(DVDCommandBlock* cmdBlock) { DVDLowAudioBufferConfig(IDShouldBe->streaming, 10, cbForStateCheckID3); }

/*
 * --INFO--
 * Address:	800DD6FC
 * Size:	000034
 */
static void stateCheckID2a(DVDCommandBlock* cmdBlock) { DVDLowAudioBufferConfig(IDShouldBe->streaming, 10, cbForStateCheckID2a); }

/*
 * --INFO--
 * Address:	800DD730
 * Size:	000074
 */
void cbForStateCheckID2a(u32 p1)
{
	if (p1 == 0x10) {
		executing->state = -1;
		__DVDStoreErrorCode(0x1234568);
		DVDReset();
		cbForStateError(0);
	} else if ((p1 & 1) != 0) {
		NumInternalRetry = 0;
		stateCheckID2(executing);
	} else {
		DVDLowRequestError(cbForStateGettingError);
	}
}

/*
 * --INFO--
 * Address:	800DD7A4
 * Size:	000038
 */
static void stateCheckID2(DVDCommandBlock* block) { DVDLowRead(&BB2, OSRoundUp32B(sizeof(_BB2)), 0x420, cbForStateCheckID2); }

/*
 * --INFO--
 * Address:	800DD7DC
 * Size:	000114
 */
void cbForStateCheckID1(u32 p1)
{
	DVDCommandBlock* cmdBlock = executing;
	BOOL isReady;
	if (p1 == 0x10) {
		executing->state = -1;
		__DVDStoreErrorCode(0x1234568);
		DVDReset();
		cbForStateError(0);
	} else if ((p1 & 1) != 0) {
		executing->state = -1;
		__DVDStoreErrorCode(0x1234567);
		DVDLowStopMotor(cbForStateError);
	} else {
		isReady          = FALSE;
		NumInternalRetry = 0;
		if (Canceling != FALSE) {
			ResumeFromHere  = 1;
			Canceling       = FALSE;
			executing       = &DummyCommandBlock;
			cmdBlock->state = 10;
			if (cmdBlock->callback) {
				(cmdBlock->callback)(-3, cmdBlock);
			}
			if (CancelCallback) {
				(*CancelCallback)(0, cmdBlock);
			}
			stateReady();
			isReady = TRUE;
		}
		if (!isReady) {
			executing->state = 6;
			stateMotorStopped();
		}
	}

	/*
	.loc_0x0:
	  mflr      r0
	  cmplwi    r3, 0x10
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x18(r1)
	  stw       r31, 0x14(r1)
	  bne-      .loc_0x40
	  lwz       r4, -0x71D0(r13)
	  li        r0, -0x1
	  lis       r3, 0x123
	  stw       r0, 0xC(r4)
	  addi      r3, r3, 0x4568
	  bl        0x1F68
	  bl        0x1514
	  li        r3, 0
	  bl        -0x8FC
	  b         .loc_0x100

	.loc_0x40:
	  rlwinm.   r0,r3,0,30,30
	  beq-      .loc_0x70
	  lwz       r4, -0x71D0(r13)
	  li        r0, -0x1
	  lis       r3, 0x123
	  stw       r0, 0xC(r4)
	  addi      r3, r3, 0x4567
	  bl        0x1F38
	  lis       r3, 0x800E
	  subi      r3, r3, 0x30E8
	  bl        -0x1BF4
	  b         .loc_0x100

	.loc_0x70:
	  li        r4, 0
	  stw       r4, -0x719C(r13)
	  lwz       r0, -0x71B0(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0xE8
	  li        r0, 0x1
	  lwz       r31, -0x71D0(r13)
	  stw       r0, -0x71A8(r13)
	  lis       r3, 0x804F
	  addi      r3, r3, 0x5E40
	  stw       r4, -0x71B0(r13)
	  li        r0, 0xA
	  stw       r3, -0x71D0(r13)
	  stw       r0, 0xC(r31)
	  lwz       r12, 0x28(r31)
	  cmplwi    r12, 0
	  beq-      .loc_0xC4
	  mtlr      r12
	  addi      r4, r31, 0
	  li        r3, -0x3
	  blrl

	.loc_0xC4:
	  lwz       r12, -0x71AC(r13)
	  cmplwi    r12, 0
	  beq-      .loc_0xE0
	  mtlr      r12
	  addi      r4, r31, 0
	  li        r3, 0
	  blrl

	.loc_0xE0:
	  bl        0x4D0
	  li        r4, 0x1

	.loc_0xE8:
	  cmpwi     r4, 0
	  bne-      .loc_0x100
	  lwz       r3, -0x71D0(r13)
	  li        r0, 0x6
	  stw       r0, 0xC(r3)
	  bl        0x3A8

	.loc_0x100:
	  lwz       r0, 0x1C(r1)
	  lwz       r31, 0x14(r1)
	  addi      r1, r1, 0x18
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800DD8F0
 * Size:	0000E4
 */
void cbForStateCheckID2(u32 p1)
{
	if (p1 == 0x10) {
		executing->state = -1;
		__DVDStoreErrorCode(0x1234568);
		DVDReset();
		cbForStateError(0);
	} else if ((p1 & 1) != 0) {
		LastState        = stateReadingFST;
		NumInternalRetry = 0;
		UnknownDVDChangeDiskInline();
	} else {
		DVDLowRequestError(cbForStateGettingError);
	}
	/*
	.loc_0x0:
	  mflr      r0
	  cmplwi    r3, 0x10
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x18(r1)
	  stw       r31, 0x14(r1)
	  bne-      .loc_0x40
	  lwz       r4, -0x71D0(r13)
	  li        r0, -0x1
	  lis       r3, 0x123
	  stw       r0, 0xC(r4)
	  addi      r3, r3, 0x4568
	  bl        0x1E54
	  bl        0x1400
	  li        r3, 0
	  bl        -0xA10
	  b         .loc_0xD0

	.loc_0x40:
	  rlwinm.   r0,r3,0,31,31
	  beq-      .loc_0xC4
	  lis       r3, 0x800E
	  lwz       r4, -0x71C8(r13)
	  subi      r0, r3, 0x3208
	  li        r5, 0
	  stw       r0, -0x718C(r13)
	  lis       r3, 0x804F
	  stw       r5, -0x719C(r13)
	  addi      r3, r3, 0x5E00
	  addi      r31, r3, 0x8
	  lwz       r3, 0x3C(r4)
	  lwz       r0, 0x0(r31)
	  cmplw     r3, r0
	  bge-      .loc_0x94
	  lis       r3, 0x804A
	  crclr     6, 0x6
	  addi      r5, r3, 0x7CEC
	  subi      r3, r13, 0x7D3C
	  li        r4, 0x28A
	  bl        0xFDEC

	.loc_0x94:
	  lis       r3, 0x804F
	  lwz       r6, 0x0(r31)
	  addi      r5, r3, 0x5E00
	  lwz       r7, -0x71C8(r13)
	  lis       r4, 0x800E
	  lwz       r5, 0x4(r5)
	  addi      r0, r6, 0x1F
	  lwz       r3, 0x38(r7)
	  subi      r6, r4, 0x3174
	  rlwinm    r4,r0,0,0,26
	  bl        -0x2158
	  b         .loc_0xD0

	.loc_0xC4:
	  lis       r3, 0x800E
	  subi      r3, r3, 0x2F2C
	  bl        -0x1CE0

	.loc_0xD0:
	  lwz       r0, 0x1C(r1)
	  lwz       r31, 0x14(r1)
	  addi      r1, r1, 0x18
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800DD9D4
 * Size:	0000FC
 */
static void cbForStateCheckID3(u32 intType)
{
	if (intType == 16) {
		executing->state = -1;
		stateTimeout();
		return;
	}

	if (intType & 1) {

		NumInternalRetry = 0;

		if (!CheckCancel(0)) {
			executing->state = 1;
			stateBusy(executing);
		}
	} else {
		stateGettingError();
	}
}

/*
 * --INFO--
 * Address:	800DDAD0
 * Size:	000044
 */
static void AlarmHandler(OSAlarm* alarm, OSContext* context)
{
	DVDReset();
	DCInvalidateRange(&CurrDiskID, sizeof(DVDDiskID));
	LastState = stateCoverClosed_CMD;
	stateCoverClosed_CMD(executing);
}

/*
 * --INFO--
 * Address:	800DDB14
 * Size:	0000CC
 */
static void stateCoverClosed()
{
	DVDCommandBlock* cmdBlock;
	switch (CurrCommand) {
	case 4:
	case 5:
	case 13:
	case 15:
		__DVDClearWaitingQueue();
		cmdBlock  = executing;
		executing = &DummyCommandBlock;
		if (cmdBlock->callback) {
			(cmdBlock->callback)(-4, cmdBlock);
		}
		stateReady();
		break;
	default:
		DVDReset();
		OSCreateAlarm(&ResetAlarm);
		OSSetAlarm(&ResetAlarm, OSMillisecondsToTicks(1150), AlarmHandler);
		break;
	}
	/*
	.loc_0x0:
	  mflr      r0
	  lis       r3, 0x804F
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x10(r1)
	  stw       r31, 0xC(r1)
	  addi      r31, r3, 0x5E00
	  lwz       r0, -0x71B4(r13)
	  cmpwi     r0, 0xD
	  beq-      .loc_0x48
	  bge-      .loc_0x3C
	  cmpwi     r0, 0x6
	  bge-      .loc_0x78
	  cmpwi     r0, 0x4
	  bge-      .loc_0x48
	  b         .loc_0x78

	.loc_0x3C:
	  cmpwi     r0, 0xF
	  beq-      .loc_0x48
	  b         .loc_0x78

	.loc_0x48:
	  bl        0x1900
	  lwz       r4, -0x71D0(r13)
	  addi      r0, r31, 0x40
	  stw       r0, -0x71D0(r13)
	  lwz       r12, 0x28(r4)
	  cmplwi    r12, 0
	  beq-      .loc_0x70
	  mtlr      r12
	  li        r3, -0x4
	  blrl

	.loc_0x70:
	  bl        0x208
	  b         .loc_0xB8

	.loc_0x78:
	  bl        0x1194
	  addi      r3, r31, 0x70
	  bl        0xDF78
	  lis       r3, 0x8000
	  lwz       r0, 0xF8(r3)
	  lis       r4, 0x1062
	  lis       r3, 0x800E
	  rlwinm    r0,r0,30,2,31
	  addi      r4, r4, 0x4DD3
	  mulhwu    r0, r4, r0
	  rlwinm    r0,r0,26,6,31
	  mulli     r6, r0, 0x47E
	  subi      r7, r3, 0x2530
	  addi      r3, r31, 0x70
	  li        r5, 0
	  bl        0xE1A4

	.loc_0xB8:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  addi      r1, r1, 0x10
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800DDBE0
 * Size:	000030
 */
void stateCoverClosed_CMD(DVDCommandBlock* cmdBlock) { DVDLowReadDiskID(&CurrDiskID, cbForStateCoverClosed); }

/*
 * --INFO--
 * Address:	800DDC10
 * Size:	000070
 */
void cbForStateCoverClosed(u32 p1)
{
	if (p1 == 0x10) {
		executing->state = -1;
		__DVDStoreErrorCode(0x1234568);
		DVDReset();
		cbForStateError(0);
	} else if ((p1 & 1) != 0) {
		NumInternalRetry = 0;
		stateCheckID();
	} else {
		DVDLowRequestError(cbForStateGettingError);
	}
}

/*
 * --INFO--
 * Address:	800DDC80
 * Size:	000028
 */
static void stateMotorStopped() { DVDLowWaitCoverClose(cbForStateMotorStopped); }

/*
 * --INFO--
 * Address:	800DDCA8
 * Size:	0000E4
 */
void cbForStateMotorStopped(u32 p1)
{
	SOMESYNC();
	executing->state = 3;
	stateCoverClosed();
	/*
	.loc_0x0:
	  mflr      r0
	  lis       r3, 0xCC00
	  stw       r0, 0x4(r1)
	  li        r0, 0
	  lis       r4, 0x804F
	  stwu      r1, -0x18(r1)
	  stw       r31, 0x14(r1)
	  addi      r31, r4, 0x5E00
	  stw       r0, 0x6004(r3)
	  li        r0, 0x3
	  lwz       r3, -0x71D0(r13)
	  stw       r0, 0xC(r3)
	  lwz       r0, -0x71B4(r13)
	  cmpwi     r0, 0xD
	  beq-      .loc_0x60
	  bge-      .loc_0x54
	  cmpwi     r0, 0x6
	  bge-      .loc_0x90
	  cmpwi     r0, 0x4
	  bge-      .loc_0x60
	  b         .loc_0x90

	.loc_0x54:
	  cmpwi     r0, 0xF
	  beq-      .loc_0x60
	  b         .loc_0x90

	.loc_0x60:
	  bl        0x1754
	  lwz       r4, -0x71D0(r13)
	  addi      r0, r31, 0x40
	  stw       r0, -0x71D0(r13)
	  lwz       r12, 0x28(r4)
	  cmplwi    r12, 0
	  beq-      .loc_0x88
	  mtlr      r12
	  li        r3, -0x4
	  blrl

	.loc_0x88:
	  bl        .loc_0xE4
	  b         .loc_0xD0

	.loc_0x90:
	  bl        0xFE8
	  addi      r3, r31, 0x70
	  bl        0xDDCC
	  lis       r3, 0x8000
	  lwz       r0, 0xF8(r3)
	  lis       r4, 0x1062
	  lis       r3, 0x800E
	  rlwinm    r0,r0,30,2,31
	  addi      r4, r4, 0x4DD3
	  mulhwu    r0, r4, r0
	  rlwinm    r0,r0,26,6,31
	  mulli     r6, r0, 0x47E
	  subi      r7, r3, 0x2530
	  addi      r3, r31, 0x70
	  li        r5, 0
	  bl        0xDFF8

	.loc_0xD0:
	  lwz       r0, 0x1C(r1)
	  lwz       r31, 0x14(r1)
	  addi      r1, r1, 0x18
	  mtlr      r0
	  blr

	.loc_0xE4:
	*/
}

/*
 * --INFO--
 * Address:	800DDD8C
 * Size:	000230
 */
void stateReady()
{
	DVDCommandBlock* cmdBlock;
	// u32 resume;
	if (__DVDCheckWaitingQueue() == FALSE) {
		executing = nullptr;
		return;
	}
	if (PauseFlag != FALSE) {
		PausingFlag = TRUE;
		executing   = nullptr;
		return;
	}
	executing = (DVDCommandBlock*)__DVDPopWaitingQueue();
	if (FatalErrorFlag != 0) {
		executing->state = -1;
		cmdBlock         = executing;
		executing        = &DummyCommandBlock;
		if (cmdBlock->callback) {
			(cmdBlock->callback)(-1, cmdBlock);
		}
		stateReady();
		return;
	}
	CurrCommand = executing->command;
	// if (ResumeFromHere == 0) {
	// 	executing->state = 1;
	// 	stateBusy(executing);
	// 	return;
	// }
	if ((u32)ResumeFromHere != (u32)Resume_00) {
		switch (ResumeFromHere) {
		case Resume_02:
			executing->state = 0xB;
			DVDLowWaitCoverClose(cbForStateMotorStopped);
			// ResumeFromHere = 0;
			break;
		case Resume_03:
			executing->state = 4;
			DVDLowWaitCoverClose(cbForStateMotorStopped);
			// ResumeFromHere = 0;
			break;
		case Resume_04:
			executing->state = 5;
			DVDLowWaitCoverClose(cbForStateMotorStopped);
			// ResumeFromHere = 0;
			break;
		// case Resume_00:
		// 	executing->state = 1;
		// 	stateBusy(executing);
		// 	return;
		// 	break;
		case Resume_01:
		case Resume_06:
		case Resume_07:
			executing->state = 3;
			stateCoverClosed();
			break;
		case Resume_05:
			executing->state = -1;
			__DVDStoreErrorCode(CancelLastError);
			DVDLowStopMotor(cbForStateError);
			break;
		default:
			break;
		}
		ResumeFromHere = Resume_00;
	} else {
		executing->state = 1;
		stateBusy(executing);
	}
	/*
	.loc_0x0:
	  mflr      r0
	  lis       r3, 0x804F
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x10(r1)
	  stw       r31, 0xC(r1)
	  addi      r31, r3, 0x5E00
	  bl        0x17F8
	  cmpwi     r3, 0
	  bne-      .loc_0x30
	  li        r0, 0
	  stw       r0, -0x71D0(r13)
	  b         .loc_0x21C

	.loc_0x30:
	  lwz       r0, -0x71C4(r13)
	  cmpwi     r0, 0
	  beq-      .loc_0x50
	  li        r3, 0x1
	  li        r0, 0
	  stw       r3, -0x71C0(r13)
	  stw       r0, -0x71D0(r13)
	  b         .loc_0x21C

	.loc_0x50:
	  bl        0x1720
	  lwz       r0, -0x71B8(r13)
	  stw       r3, -0x71D0(r13)
	  cmpwi     r0, 0
	  beq-      .loc_0x9C
	  lwz       r3, -0x71D0(r13)
	  li        r4, -0x1
	  addi      r0, r31, 0x40
	  stw       r4, 0xC(r3)
	  lwz       r4, -0x71D0(r13)
	  stw       r0, -0x71D0(r13)
	  lwz       r12, 0x28(r4)
	  cmplwi    r12, 0
	  beq-      .loc_0x94
	  mtlr      r12
	  li        r3, -0x1
	  blrl

	.loc_0x94:
	  bl        .loc_0x0
	  b         .loc_0x21C

	.loc_0x9C:
	  lwz       r4, -0x71D0(r13)
	  lwz       r0, 0x8(r4)
	  stw       r0, -0x71B4(r13)
	  lwz       r0, -0x71A8(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0x20C
	  lwz       r0, -0x71A8(r13)
	  cmpwi     r0, 0x4
	  beq-      .loc_0x120
	  bge-      .loc_0xDC
	  cmpwi     r0, 0x2
	  beq-      .loc_0xF0
	  bge-      .loc_0x108
	  cmpwi     r0, 0x1
	  bge-      .loc_0x138
	  b         .loc_0x200

	.loc_0xDC:
	  cmpwi     r0, 0x8
	  bge-      .loc_0x200
	  cmpwi     r0, 0x6
	  bge-      .loc_0x138
	  b         .loc_0x1E4

	.loc_0xF0:
	  li        r0, 0xB
	  lis       r3, 0x800E
	  stw       r0, 0xC(r4)
	  subi      r3, r3, 0x2358
	  bl        -0x230C
	  b         .loc_0x200

	.loc_0x108:
	  li        r0, 0x4
	  lis       r3, 0x800E
	  stw       r0, 0xC(r4)
	  subi      r3, r3, 0x2358
	  bl        -0x2324
	  b         .loc_0x200

	.loc_0x120:
	  li        r0, 0x5
	  lis       r3, 0x800E
	  stw       r0, 0xC(r4)
	  subi      r3, r3, 0x2358
	  bl        -0x233C
	  b         .loc_0x200

	.loc_0x138:
	  li        r0, 0x3
	  stw       r0, 0xC(r4)
	  lwz       r0, -0x71B4(r13)
	  cmpwi     r0, 0xD
	  beq-      .loc_0x170
	  bge-      .loc_0x164
	  cmpwi     r0, 0x6
	  bge-      .loc_0x1A0
	  cmpwi     r0, 0x4
	  bge-      .loc_0x170
	  b         .loc_0x1A0

	.loc_0x164:
	  cmpwi     r0, 0xF
	  beq-      .loc_0x170
	  b         .loc_0x1A0

	.loc_0x170:
	  bl        0x1560
	  lwz       r4, -0x71D0(r13)
	  addi      r0, r31, 0x40
	  stw       r0, -0x71D0(r13)
	  lwz       r12, 0x28(r4)
	  cmplwi    r12, 0
	  beq-      .loc_0x198
	  mtlr      r12
	  li        r3, -0x4
	  blrl

	.loc_0x198:
	  bl        .loc_0x0
	  b         .loc_0x200

	.loc_0x1A0:
	  bl        0xDF4
	  addi      r3, r31, 0x70
	  bl        0xDBD8
	  lis       r3, 0x8000
	  lwz       r0, 0xF8(r3)
	  lis       r4, 0x1062
	  lis       r3, 0x800E
	  rlwinm    r0,r0,30,2,31
	  addi      r4, r4, 0x4DD3
	  mulhwu    r0, r4, r0
	  rlwinm    r0,r0,26,6,31
	  mulli     r6, r0, 0x47E
	  subi      r7, r3, 0x2530
	  addi      r3, r31, 0x70
	  li        r5, 0
	  bl        0xDE04
	  b         .loc_0x200

	.loc_0x1E4:
	  li        r0, -0x1
	  stw       r0, 0xC(r4)
	  lwz       r3, -0x71A4(r13)
	  bl        0x17F4
	  lis       r3, 0x800E
	  subi      r3, r3, 0x30E8
	  bl        -0x2338

	.loc_0x200:
	  li        r0, 0
	  stw       r0, -0x71A8(r13)
	  b         .loc_0x21C

	.loc_0x20C:
	  li        r0, 0x1
	  stw       r0, 0xC(r4)
	  lwz       r3, -0x71D0(r13)
	  bl        .loc_0x230

	.loc_0x21C:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  addi      r1, r1, 0x10
	  mtlr      r0
	  blr

	.loc_0x230:
	*/
}

#define MIN(a, b) (((a) < (b)) ? (a) : (b))

/*
 * --INFO--
 * Address:	800DDFBC
 * Size:	000320
 */
void stateBusy(DVDCommandBlock* cmdBlock)
{
	DVDCommandBlock* prev = executing;
	LastState             = stateBusy;
	switch (cmdBlock->command) {
	case 5:
		SOMESYNC();
		cmdBlock->currTransferSize = 0x20;
		DVDLowReadDiskID(cmdBlock->addr, cbForStateBusy);
		break;
	case 1:
	case 4:
		if (cmdBlock->length == 0) {
			executing   = &DummyCommandBlock;
			prev->state = 0;
			if (prev->callback) {
				(prev->callback)(0, prev);
			}
			stateReady();
		} else {
			SOMESYNC();
			cmdBlock->currTransferSize = MIN(0x80000, cmdBlock->length - cmdBlock->transferredSize);
			DVDLowRead((void*)((u8*)cmdBlock->addr + cmdBlock->transferredSize), cmdBlock->currTransferSize,
			           cmdBlock->offset + cmdBlock->transferredSize, cbForStateBusy);
		}
		break;
	case 2:
		SOMESYNC();
		DVDLowSeek(cmdBlock->offset, cbForStateBusy);
		break;
	case 3:
		DVDLowStopMotor(cbForStateBusy);
		break;
	case 15:
		DVDLowStopMotor(cbForStateBusy);
		break;
	case 6:
		SOMESYNC();
		if (AutoFinishing != FALSE) {
			executing->currTransferSize = 0;
			DVDLowRequestAudioStatus(0, cbForStateBusy);
		} else {
			executing->currTransferSize = 1;
			DVDLowAudioStream(0, cmdBlock->length, cmdBlock->offset, cbForStateBusy);
		}
		break;
	case 7:
		SOMESYNC();
		DVDLowAudioStream(0x10000, 0, 0, cbForStateBusy);
		break;
	case 8:
		SOMESYNC();
		AutoFinishing = TRUE;
		DVDLowAudioStream(0, 0, 0, cbForStateBusy);
		break;
	case 9:
		SOMESYNC();
		DVDLowRequestAudioStatus(0, cbForStateBusy);
		break;
	case 10:
		SOMESYNC();
		DVDLowRequestAudioStatus(0x10000, cbForStateBusy);
		break;
	case 11:
		SOMESYNC();
		DVDLowRequestAudioStatus(0x20000, cbForStateBusy);
		break;
	case 12:
		SOMESYNC();
		DVDLowRequestAudioStatus(0x30000, cbForStateBusy);
		break;
	case 13:
		SOMESYNC();
		DVDLowAudioBufferConfig(cmdBlock->offset, cmdBlock->length, cbForStateBusy);
		break;
	case 14:
		SOMESYNC();
		cmdBlock->currTransferSize = 0x20;
		DVDLowInquiry(cmdBlock->addr, cbForStateBusy);
		break;
	case 0:
	default:
		(checkOptionalCommand)(cmdBlock, cbForStateBusy);
	}
	/*
	.loc_0x0:
	  mflr      r0
	  lis       r4, 0x800E
	  stw       r0, 0x4(r1)
	  subi      r0, r4, 0x2044
	  mr        r7, r3
	  stwu      r1, -0x8(r1)
	  stw       r0, -0x718C(r13)
	  lwz       r0, 0x8(r3)
	  cmplwi    r0, 0xF
	  bgt-      .loc_0x2F8
	  lis       r3, 0x804A
	  addi      r3, r3, 0x7D20
	  rlwinm    r0,r0,2,0,29
	  lwzx      r0, r3, r0
	  mtctr     r0
	  bctr
	  lis       r3, 0xCC00
	  lwz       r0, 0x6004(r3)
	  addi      r5, r3, 0x6000
	  lis       r3, 0x800E
	  stw       r0, 0x4(r5)
	  li        r0, 0x20
	  subi      r4, r3, 0x1D24
	  stw       r0, 0x1C(r7)
	  lwz       r3, 0x18(r7)
	  bl        -0x2474
	  b         .loc_0x310
	  lwz       r0, 0x14(r7)
	  cmplwi    r0, 0
	  bne-      .loc_0xB0
	  lis       r3, 0x804F
	  lwz       r4, -0x71D0(r13)
	  addi      r0, r3, 0x5E40
	  stw       r0, -0x71D0(r13)
	  li        r0, 0
	  stw       r0, 0xC(r4)
	  lwz       r12, 0x28(r4)
	  cmplwi    r12, 0
	  beq-      .loc_0xA8
	  mtlr      r12
	  li        r3, 0
	  blrl

	.loc_0xA8:
	  bl        -0x2D8
	  b         .loc_0x310

	.loc_0xB0:
	  lis       r3, 0xCC00
	  addi      r3, r3, 0x6000
	  lwz       r0, 0x4(r3)
	  lis       r4, 0x8
	  stw       r0, 0x4(r3)
	  lwz       r3, 0x20(r7)
	  lwz       r0, 0x14(r7)
	  sub       r0, r0, r3
	  cmplw     r0, r4
	  ble-      .loc_0xDC
	  b         .loc_0xE0

	.loc_0xDC:
	  mr        r4, r0

	.loc_0xE0:
	  stw       r4, 0x1C(r7)
	  lis       r3, 0x800E
	  subi      r6, r3, 0x1D24
	  lwz       r5, 0x20(r7)
	  lwz       r3, 0x18(r7)
	  lwz       r0, 0x10(r7)
	  add       r3, r3, r5
	  lwz       r4, 0x1C(r7)
	  add       r5, r0, r5
	  bl        -0x286C
	  b         .loc_0x310
	  lis       r3, 0xCC00
	  lwz       r0, 0x6004(r3)
	  addi      r5, r3, 0x6000
	  lis       r3, 0x800E
	  stw       r0, 0x4(r5)
	  subi      r4, r3, 0x1D24
	  lwz       r3, 0x10(r7)
	  bl        -0x25F8
	  b         .loc_0x310
	  lis       r3, 0x800E
	  subi      r3, r3, 0x1D24
	  bl        -0x24A4
	  b         .loc_0x310
	  lis       r3, 0x800E
	  subi      r3, r3, 0x1D24
	  bl        -0x24B4
	  b         .loc_0x310
	  lis       r3, 0xCC00
	  addi      r3, r3, 0x6000
	  lwz       r0, 0x4(r3)
	  stw       r0, 0x4(r3)
	  lwz       r0, -0x71BC(r13)
	  cmpwi     r0, 0
	  beq-      .loc_0x18C
	  lwz       r5, -0x71D0(r13)
	  li        r0, 0
	  lis       r3, 0x800E
	  stw       r0, 0x1C(r5)
	  subi      r4, r3, 0x1D24
	  li        r3, 0
	  bl        -0x22A4
	  b         .loc_0x310

	.loc_0x18C:
	  lwz       r4, -0x71D0(r13)
	  li        r0, 0x1
	  lis       r3, 0x800E
	  stw       r0, 0x1C(r4)
	  subi      r6, r3, 0x1D24
	  li        r3, 0
	  lwz       r4, 0x14(r7)
	  lwz       r5, 0x10(r7)
	  bl        -0x2364
	  b         .loc_0x310
	  lis       r3, 0xCC00
	  lwz       r0, 0x6004(r3)
	  addi      r4, r3, 0x6000
	  lis       r3, 0x800E
	  stw       r0, 0x4(r4)
	  subi      r6, r3, 0x1D24
	  lis       r3, 0x1
	  li        r4, 0
	  li        r5, 0
	  bl        -0x2390
	  b         .loc_0x310
	  lis       r3, 0xCC00
	  lwz       r0, 0x6004(r3)
	  addi      r4, r3, 0x6000
	  lis       r3, 0x800E
	  stw       r0, 0x4(r4)
	  li        r0, 0x1
	  subi      r6, r3, 0x1D24
	  stw       r0, -0x71BC(r13)
	  li        r3, 0
	  li        r4, 0
	  li        r5, 0
	  bl        -0x23C4
	  b         .loc_0x310
	  lis       r3, 0xCC00
	  lwz       r0, 0x6004(r3)
	  addi      r5, r3, 0x6000
	  lis       r3, 0x800E
	  stw       r0, 0x4(r5)
	  subi      r4, r3, 0x1D24
	  li        r3, 0
	  bl        -0x2350
	  b         .loc_0x310
	  lis       r3, 0xCC00
	  lwz       r0, 0x6004(r3)
	  addi      r5, r3, 0x6000
	  lis       r3, 0x800E
	  stw       r0, 0x4(r5)
	  subi      r4, r3, 0x1D24
	  lis       r3, 0x1
	  bl        -0x2374
	  b         .loc_0x310
	  lis       r3, 0xCC00
	  lwz       r0, 0x6004(r3)
	  addi      r5, r3, 0x6000
	  lis       r3, 0x800E
	  stw       r0, 0x4(r5)
	  subi      r4, r3, 0x1D24
	  lis       r3, 0x2
	  bl        -0x2398
	  b         .loc_0x310
	  lis       r3, 0xCC00
	  lwz       r0, 0x6004(r3)
	  addi      r5, r3, 0x6000
	  lis       r3, 0x800E
	  stw       r0, 0x4(r5)
	  subi      r4, r3, 0x1D24
	  lis       r3, 0x3
	  bl        -0x23BC
	  b         .loc_0x310
	  lis       r3, 0xCC00
	  lwz       r0, 0x6004(r3)
	  addi      r4, r3, 0x6000
	  lis       r3, 0x800E
	  stw       r0, 0x4(r4)
	  subi      r5, r3, 0x1D24
	  lwz       r3, 0x10(r7)
	  lwz       r4, 0x14(r7)
	  bl        -0x2358
	  b         .loc_0x310
	  lis       r3, 0xCC00
	  lwz       r0, 0x6004(r3)
	  addi      r5, r3, 0x6000
	  lis       r3, 0x800E
	  stw       r0, 0x4(r5)
	  li        r0, 0x20
	  subi      r4, r3, 0x1D24
	  stw       r0, 0x1C(r7)
	  lwz       r3, 0x18(r7)
	  bl        -0x2544
	  b         .loc_0x310

	.loc_0x2F8:
	  lwz       r12, -0x7D40(r13)
	  lis       r3, 0x800E
	  subi      r4, r3, 0x1D24
	  mtlr      r12
	  addi      r3, r7, 0
	  blrl

	.loc_0x310:
	  lwz       r0, 0xC(r1)
	  addi      r1, r1, 0x8
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000024
 */
void __DVDSetImmCommand()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00001C
 */
void __DVDSetDmaCommand()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00005C
 */
void IsImmCommandWithResult()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000040
 */
void IsDmaCommand()
{
	// UNUSED FUNCTION
}

const s32 DmaCommand = -1;
/*
 * --INFO--
 * Address:	800DE2DC
 * Size:	000638
 */
void cbForStateBusy(u32 p1)
{
	/*
	.loc_0x0:
	  mflr      r0
	  cmplwi    r3, 0x10
	  stw       r0, 0x4(r1)
	  lis       r4, 0x804F
	  stwu      r1, -0x18(r1)
	  stw       r31, 0x14(r1)
	  addi      r31, r4, 0x5E00
	  stw       r30, 0x10(r1)
	  bne-      .loc_0x4C
	  lwz       r4, -0x71D0(r13)
	  li        r0, -0x1
	  lis       r3, 0x123
	  stw       r0, 0xC(r4)
	  addi      r3, r3, 0x4568
	  bl        0x145C
	  bl        0xA08
	  li        r3, 0
	  bl        -0x1408
	  b         .loc_0x620

	.loc_0x4C:
	  lwz       r0, -0x71B4(r13)
	  cmplwi    r0, 0x3
	  beq-      .loc_0x64
	  lwz       r0, -0x71B4(r13)
	  cmplwi    r0, 0xF
	  bne-      .loc_0x14C

	.loc_0x64:
	  rlwinm.   r0,r3,0,30,30
	  beq-      .loc_0x94
	  lwz       r4, -0x71D0(r13)
	  li        r0, -0x1
	  lis       r3, 0x123
	  stw       r0, 0xC(r4)
	  addi      r3, r3, 0x4567
	  bl        0x1414
	  lis       r3, 0x800E
	  subi      r3, r3, 0x30E8
	  bl        -0x2718
	  b         .loc_0x620

	.loc_0x94:
	  li        r0, 0
	  stw       r0, -0x719C(r13)
	  lwz       r0, -0x71B4(r13)
	  cmplwi    r0, 0xF
	  bne-      .loc_0xB0
	  li        r0, 0x1
	  stw       r0, -0x7198(r13)

	.loc_0xB0:
	  lwz       r0, -0x71B0(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0x124
	  li        r0, 0x7
	  lwz       r30, -0x71D0(r13)
	  stw       r0, -0x71A8(r13)
	  addi      r3, r31, 0x40
	  li        r0, 0
	  stw       r0, -0x71B0(r13)
	  li        r0, 0xA
	  stw       r3, -0x71D0(r13)
	  stw       r0, 0xC(r30)
	  lwz       r12, 0x28(r30)
	  cmplwi    r12, 0
	  beq-      .loc_0xFC
	  mtlr      r12
	  addi      r4, r30, 0
	  li        r3, -0x3
	  blrl

	.loc_0xFC:
	  lwz       r12, -0x71AC(r13)
	  cmplwi    r12, 0
	  beq-      .loc_0x118
	  mtlr      r12
	  addi      r4, r30, 0
	  li        r3, 0
	  blrl

	.loc_0x118:
	  bl        -0x668
	  li        r0, 0x1
	  b         .loc_0x128

	.loc_0x124:
	  li        r0, 0

	.loc_0x128:
	  cmpwi     r0, 0
	  bne-      .loc_0x620
	  lwz       r4, -0x71D0(r13)
	  li        r0, 0x7
	  lis       r3, 0x800E
	  stw       r0, 0xC(r4)
	  subi      r3, r3, 0x2358
	  bl        -0x28A0
	  b         .loc_0x620

	.loc_0x14C:
	  lwz       r4, -0x71B4(r13)
	  cmplwi    r4, 0x1
	  beq-      .loc_0x16C
	  subi      r0, r4, 0x4
	  cmplwi    r0, 0x1
	  ble-      .loc_0x16C
	  cmplwi    r4, 0xE
	  bne-      .loc_0x174

	.loc_0x16C:
	  li        r0, 0x1
	  b         .loc_0x18C

	.loc_0x174:
	  lwz       r0, -0x7D34(r13)
	  cmplw     r4, r0
	  bne-      .loc_0x188
	  li        r0, 0x1
	  b         .loc_0x18C

	.loc_0x188:
	  li        r0, 0

	.loc_0x18C:
	  cmpwi     r0, 0
	  beq-      .loc_0x1B8
	  lwz       r6, -0x71D0(r13)
	  lis       r4, 0xCC00
	  addi      r4, r4, 0x6000
	  lwz       r4, 0x18(r4)
	  lwz       r0, 0x1C(r6)
	  lwz       r5, 0x20(r6)
	  sub       r0, r0, r4
	  add       r0, r5, r0
	  stw       r0, 0x20(r6)

	.loc_0x1B8:
	  rlwinm.   r0,r3,0,28,28
	  beq-      .loc_0x21C
	  lwz       r30, -0x71D0(r13)
	  addi      r3, r31, 0x40
	  li        r0, 0
	  stw       r0, -0x71B0(r13)
	  li        r0, 0xA
	  stw       r3, -0x71D0(r13)
	  stw       r0, 0xC(r30)
	  lwz       r12, 0x28(r30)
	  cmplwi    r12, 0
	  beq-      .loc_0x1F8
	  mtlr      r12
	  addi      r4, r30, 0
	  li        r3, -0x3
	  blrl

	.loc_0x1F8:
	  lwz       r12, -0x71AC(r13)
	  cmplwi    r12, 0
	  beq-      .loc_0x214
	  mtlr      r12
	  addi      r4, r30, 0
	  li        r3, 0
	  blrl

	.loc_0x214:
	  bl        -0x764
	  b         .loc_0x620

	.loc_0x21C:
	  rlwinm.   r0,r3,0,31,31
	  beq-      .loc_0x4F0
	  li        r4, 0
	  stw       r4, -0x719C(r13)
	  lwz       r0, -0x71B0(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0x294
	  stw       r4, -0x71A8(r13)
	  addi      r3, r31, 0x40
	  lwz       r30, -0x71D0(r13)
	  li        r0, 0xA
	  stw       r4, -0x71B0(r13)
	  stw       r3, -0x71D0(r13)
	  stw       r0, 0xC(r30)
	  lwz       r12, 0x28(r30)
	  cmplwi    r12, 0
	  beq-      .loc_0x270
	  mtlr      r12
	  addi      r4, r30, 0
	  li        r3, -0x3
	  blrl

	.loc_0x270:
	  lwz       r12, -0x71AC(r13)
	  cmplwi    r12, 0
	  beq-      .loc_0x28C
	  mtlr      r12
	  addi      r4, r30, 0
	  li        r3, 0
	  blrl

	.loc_0x28C:
	  bl        -0x7DC
	  li        r4, 0x1

	.loc_0x294:
	  cmpwi     r4, 0
	  bne-      .loc_0x620
	  lwz       r3, -0x71B4(r13)
	  cmplwi    r3, 0x1
	  beq-      .loc_0x2BC
	  subi      r0, r3, 0x4
	  cmplwi    r0, 0x1
	  ble-      .loc_0x2BC
	  cmplwi    r3, 0xE
	  bne-      .loc_0x2C4

	.loc_0x2BC:
	  li        r0, 0x1
	  b         .loc_0x2DC

	.loc_0x2C4:
	  lwz       r0, -0x7D34(r13)
	  cmplw     r3, r0
	  bne-      .loc_0x2D8
	  li        r0, 0x1
	  b         .loc_0x2DC

	.loc_0x2D8:
	  li        r0, 0

	.loc_0x2DC:
	  cmpwi     r0, 0
	  beq-      .loc_0x334
	  lwz       r3, -0x71D0(r13)
	  lwz       r4, 0x20(r3)
	  lwz       r0, 0x14(r3)
	  cmplw     r4, r0
	  beq-      .loc_0x300
	  bl        -0x618
	  b         .loc_0x620

	.loc_0x300:
	  addi      r0, r31, 0x40
	  stw       r0, -0x71D0(r13)
	  li        r0, 0
	  addi      r4, r3, 0
	  stw       r0, 0xC(r3)
	  lwz       r12, 0x28(r3)
	  cmplwi    r12, 0
	  beq-      .loc_0x32C
	  lwz       r3, 0x20(r4)
	  mtlr      r12
	  blrl

	.loc_0x32C:
	  bl        -0x87C
	  b         .loc_0x620

	.loc_0x334:
	  lwz       r4, -0x71B4(r13)
	  subi      r0, r4, 0x9
	  cmplwi    r0, 0x3
	  bgt-      .loc_0x34C
	  li        r0, 0x1
	  b         .loc_0x390

	.loc_0x34C:
	  lis       r3, 0x804A
	  lwzu      r0, 0x7D60(r3)
	  cmplw     r4, r0
	  bne-      .loc_0x364
	  li        r0, 0x1
	  b         .loc_0x390

	.loc_0x364:
	  lwzu      r0, 0x4(r3)
	  cmplw     r4, r0
	  bne-      .loc_0x378
	  li        r0, 0x1
	  b         .loc_0x390

	.loc_0x378:
	  lwz       r0, 0x4(r3)
	  cmplw     r4, r0
	  bne-      .loc_0x38C
	  li        r0, 0x1
	  b         .loc_0x390

	.loc_0x38C:
	  li        r0, 0

	.loc_0x390:
	  cmpwi     r0, 0
	  beq-      .loc_0x3FC
	  lwz       r0, -0x71B4(r13)
	  cmplwi    r0, 0xB
	  beq-      .loc_0x3B0
	  lwz       r0, -0x71B4(r13)
	  cmplwi    r0, 0xA
	  bne-      .loc_0x3C0

	.loc_0x3B0:
	  lis       r3, 0xCC00
	  lwz       r0, 0x6020(r3)
	  rlwinm    r3,r0,2,0,29
	  b         .loc_0x3CC

	.loc_0x3C0:
	  lis       r3, 0xCC00
	  addi      r3, r3, 0x6000
	  lwz       r3, 0x20(r3)

	.loc_0x3CC:
	  lwz       r4, -0x71D0(r13)
	  addi      r5, r31, 0x40
	  li        r0, 0
	  stw       r5, -0x71D0(r13)
	  stw       r0, 0xC(r4)
	  lwz       r12, 0x28(r4)
	  cmplwi    r12, 0
	  beq-      .loc_0x3F4
	  mtlr      r12
	  blrl

	.loc_0x3F4:
	  bl        -0x944
	  b         .loc_0x620

	.loc_0x3FC:
	  lwz       r0, -0x71B4(r13)
	  cmplwi    r0, 0x6
	  bne-      .loc_0x4BC
	  lwz       r4, -0x71D0(r13)
	  addi      r5, r4, 0x1C
	  lwz       r0, 0x1C(r4)
	  cmplwi    r0, 0
	  bne-      .loc_0x48C
	  lis       r3, 0xCC00
	  lwz       r0, 0x6020(r3)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0x45C
	  addi      r0, r31, 0x40
	  stw       r0, -0x71D0(r13)
	  li        r0, 0x9
	  stw       r0, 0xC(r4)
	  lwz       r12, 0x28(r4)
	  cmplwi    r12, 0
	  beq-      .loc_0x454
	  mtlr      r12
	  li        r3, -0x2
	  blrl

	.loc_0x454:
	  bl        -0x9A4
	  b         .loc_0x620

	.loc_0x45C:
	  li        r0, 0
	  stw       r0, -0x71BC(r13)
	  li        r0, 0x1
	  lis       r3, 0x800E
	  stw       r0, 0x0(r5)
	  subi      r6, r3, 0x1D24
	  li        r3, 0
	  lwz       r5, -0x71D0(r13)
	  lwz       r4, 0x14(r5)
	  lwz       r5, 0x10(r5)
	  bl        -0x295C
	  b         .loc_0x620

	.loc_0x48C:
	  addi      r0, r31, 0x40
	  stw       r0, -0x71D0(r13)
	  li        r0, 0
	  stw       r0, 0xC(r4)
	  lwz       r12, 0x28(r4)
	  cmplwi    r12, 0
	  beq-      .loc_0x4B4
	  mtlr      r12
	  li        r3, 0
	  blrl

	.loc_0x4B4:
	  bl        -0xA04
	  b         .loc_0x620

	.loc_0x4BC:
	  lwz       r4, -0x71D0(r13)
	  addi      r3, r31, 0x40
	  li        r0, 0
	  stw       r3, -0x71D0(r13)
	  stw       r0, 0xC(r4)
	  lwz       r12, 0x28(r4)
	  cmplwi    r12, 0
	  beq-      .loc_0x4E8
	  mtlr      r12
	  li        r3, 0
	  blrl

	.loc_0x4E8:
	  bl        -0xA38
	  b         .loc_0x620

	.loc_0x4F0:
	  lwz       r0, -0x71B4(r13)
	  cmplwi    r0, 0xE
	  bne-      .loc_0x524
	  lwz       r4, -0x71D0(r13)
	  li        r0, -0x1
	  lis       r3, 0x123
	  stw       r0, 0xC(r4)
	  addi      r3, r3, 0x4567
	  bl        0xF84
	  lis       r3, 0x800E
	  subi      r3, r3, 0x30E8
	  bl        -0x2BA8
	  b         .loc_0x620

	.loc_0x524:
	  lwz       r0, -0x71B4(r13)
	  cmplwi    r0, 0x1
	  beq-      .loc_0x554
	  lwz       r0, -0x71B4(r13)
	  cmplwi    r0, 0x4
	  beq-      .loc_0x554
	  lwz       r0, -0x71B4(r13)
	  cmplwi    r0, 0x5
	  beq-      .loc_0x554
	  lwz       r0, -0x71B4(r13)
	  cmplwi    r0, 0xE
	  bne-      .loc_0x614

	.loc_0x554:
	  lwz       r30, -0x71D0(r13)
	  lwz       r3, 0x20(r30)
	  lwz       r0, 0x14(r30)
	  cmplw     r3, r0
	  bne-      .loc_0x614
	  lwz       r0, -0x71B0(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0x5D4
	  li        r4, 0
	  stw       r4, -0x71A8(r13)
	  addi      r3, r31, 0x40
	  li        r0, 0xA
	  stw       r4, -0x71B0(r13)
	  stw       r3, -0x71D0(r13)
	  stw       r0, 0xC(r30)
	  lwz       r12, 0x28(r30)
	  cmplwi    r12, 0
	  beq-      .loc_0x5AC
	  mtlr      r12
	  addi      r4, r30, 0
	  li        r3, -0x3
	  blrl

	.loc_0x5AC:
	  lwz       r12, -0x71AC(r13)
	  cmplwi    r12, 0
	  beq-      .loc_0x5C8
	  mtlr      r12
	  addi      r4, r30, 0
	  li        r3, 0
	  blrl

	.loc_0x5C8:
	  bl        -0xB18
	  li        r0, 0x1
	  b         .loc_0x5D8

	.loc_0x5D4:
	  li        r0, 0

	.loc_0x5D8:
	  cmpwi     r0, 0
	  bne-      .loc_0x620
	  lwz       r4, -0x71D0(r13)
	  addi      r3, r31, 0x40
	  li        r0, 0
	  stw       r3, -0x71D0(r13)
	  stw       r0, 0xC(r4)
	  lwz       r12, 0x28(r4)
	  cmplwi    r12, 0
	  beq-      .loc_0x60C
	  lwz       r3, 0x20(r4)
	  mtlr      r12
	  blrl

	.loc_0x60C:
	  bl        -0xB5C
	  b         .loc_0x620

	.loc_0x614:
	  lis       r3, 0x800E
	  subi      r3, r3, 0x2F2C
	  bl        -0x2C1C

	.loc_0x620:
	  lwz       r0, 0x1C(r1)
	  lwz       r31, 0x14(r1)
	  lwz       r30, 0x10(r1)
	  addi      r1, r1, 0x18
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00000C
 */
void __DVDGetIssueCommandAddr()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000BC
 */
static BOOL issueCommand(s32 prio, DVDCommandBlock* block)
{
	BOOL level;
	BOOL result;

	if (autoInvalidation && (block->command == 1 || block->command == 4 || block->command == 5 || block->command == 14)) {
		DCInvalidateRange(block->addr, block->length);
	}

	level = OSDisableInterrupts();

	block->state = 2;
	result       = __DVDPushWaitingQueue(prio, block);

	if ((executing == (DVDCommandBlock*)NULL) && (PauseFlag == FALSE)) {
		stateReady();
	}

	OSRestoreInterrupts(level);

	return result;
}

/*
 * --INFO--
 * Address:	800DE914
 * Size:	0000DC
 */
BOOL DVDReadAbsAsyncPrio(DVDCommandBlock* block, void* addr, s32 length, s32 offset, DVDCBCallback callback, s32 prio)
{
	BOOL idle;
	block->command         = 1;
	block->addr            = addr;
	block->length          = length;
	block->offset          = offset;
	block->transferredSize = 0;
	block->callback        = callback;

	idle = issueCommand(prio, block);
	return idle;
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000CC
 */
void DVDSeekAbsAsyncPrio()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800DE9F0
 * Size:	0000D0
 */
BOOL DVDReadAbsAsyncForBS(DVDCommandBlock* block, void* addr, s32 length, s32 offset, DVDCBCallback callback)
{
	BOOL idle;
	block->command         = 4;
	block->addr            = addr;
	block->length          = length;
	block->offset          = offset;
	block->transferredSize = 0;
	block->callback        = callback;

	idle = issueCommand(2, block);
	return idle;
}

/*
 * --INFO--
 * Address:	800DEAC0
 * Size:	0000D4
 */
BOOL DVDReadDiskID(DVDCommandBlock* block, DVDDiskID* diskID, DVDCBCallback callback)
{
	BOOL idle;
	block->command = 5;
	block->addr    = diskID;
	block->length  = sizeof(DVDDiskID);
	;
	block->offset          = 0;
	block->transferredSize = 0;
	block->callback        = callback;

	idle = issueCommand(2, block);
	return idle;
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000C4
 */
void DVDPrepareStreamAbsAsync()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800DEB94
 * Size:	0000BC
 */
BOOL DVDCancelStreamAsync(DVDCommandBlock* block, DVDCBCallback callback)
{
	BOOL idle;
	block->command  = 7;
	block->callback = callback;
	idle            = issueCommand(1, block);
	return idle;
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000A0
 */
void DVDCancelStream()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000028
 */
void cbForCancelStreamSync()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000BC
 */
void DVDStopStreamAtEndAsync()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000A0
 */
void DVDStopStreamAtEnd()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000028
 */
void cbForStopStreamAtEndSync()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000BC
 */
void DVDGetStreamErrorStatusAsync()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000A0
 */
void DVDGetStreamErrorStatus()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000028
 */
void cbForGetStreamErrorStatusSync()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000BC
 */
void DVDGetStreamPlayAddrAsync()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000A0
 */
void DVDGetStreamPlayAddr()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000028
 */
void cbForGetStreamPlayAddrSync()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000BC
 */
void DVDGetStreamStartAddrAsync()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000A0
 */
void DVDGetStreamStartAddr()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000028
 */
void cbForGetStreamStartAddrSync()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000BC
 */
void DVDGetStreamLengthAsync()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000A0
 */
void DVDGetStreamLength()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000028
 */
void cbForGetStreamLengthSync()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000BC
 */
void __DVDAudioBufferConfig()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000BC
 */
void DVDChangeDiskAsyncForBS()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000110
 */
BOOL DVDChangeDiskAsync(DVDCommandBlock* block, DVDDiskID* id, DVDCBCallback callback)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000104
 */
s32 DVDChangeDisk(DVDCommandBlock* block, DVDDiskID* id)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000024
 */
void cbForChangeDiskSync()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800DEC50
 * Size:	0000D0
 */
BOOL DVDInquiryAsync(DVDCommandBlock* block, DVDDriveInfo* info, DVDCBCallback callback)
{
	BOOL idle;

	block->command         = 14;
	block->addr            = (void*)info;
	block->length          = sizeof(DVDDriveInfo);
	block->transferredSize = 0;
	block->callback        = callback;

	idle = issueCommand(2, block);

	return idle;
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000C8
 */
void DVDInquiry()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000024
 */
void cbForInquirySync()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800DED20
 * Size:	000044
 */
void DVDReset()
{
	DVDLowReset();
	HW_REG(0xCC006000, u32) = 0x2A;
	SOMESYNC();
	// HW_REG(0xCC006004, u32) = HW_REG(0xCC006004, u32);
	ResumeFromHere = 0;
	ResetRequired  = FALSE;
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x8(r1)
	  bl        -0x2D68
	  lis       r3, 0xCC00
	  li        r0, 0x2A
	  stw       r0, 0x6000(r3)
	  addi      r4, r3, 0x6000
	  li        r0, 0
	  lwz       r3, 0x6004(r3)
	  stw       r3, 0x4(r4)
	  stw       r0, -0x7198(r13)
	  stw       r0, -0x71A8(r13)
	  lwz       r0, 0xC(r1)
	  addi      r1, r1, 0x8
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void DVDResetRequired()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800DED64
 * Size:	00004C
 * @NeedsFrankLite
 */
s32 DVDGetCommandBlockStatus(const DVDCommandBlock* block)
{
	int interrupts = OSDisableInterrupts();
	// int result = block->state;
	// if (result == 3) {
	// 	result = 1;
	// }
	int result;
	// int result = block->state;
	if (block->state == 3) {
		result = 1;
	} else {
		result = block->state;
	}
	OSRestoreInterrupts(interrupts);
	return result;
}

/*
 * --INFO--
 * Address:	800DEDB0
 * Size:	0000AC
 */
s32 DVDGetDriveStatus()
{
	int interrupts = OSDisableInterrupts();
	int result;
	if (FatalErrorFlag != FALSE) {
		result = -1;
	} else {
		if (PausingFlag != FALSE) {
			result = 8;
		} else {
			if (executing == nullptr) {
				result = 0;
			} else if (executing == &DummyCommandBlock) {
				result = 0;
			} else {
				result = DVDGetCommandBlockStatus((struct DVDCommandBlock*)executing);
			}
		}
	}
	OSRestoreInterrupts(interrupts);
	return result;
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x18(r1)
	  stw       r31, 0x14(r1)
	  stw       r30, 0x10(r1)
	  bl        0xFE74
	  lwz       r0, -0x71B8(r13)
	  addi      r30, r3, 0
	  cmpwi     r0, 0
	  beq-      .loc_0x30
	  li        r31, -0x1
	  b         .loc_0x88

	.loc_0x30:
	  lwz       r0, -0x71C0(r13)
	  cmpwi     r0, 0
	  beq-      .loc_0x44
	  li        r31, 0x8
	  b         .loc_0x88

	.loc_0x44:
	  lwz       r31, -0x71D0(r13)
	  cmplwi    r31, 0
	  bne-      .loc_0x58
	  li        r31, 0
	  b         .loc_0x88

	.loc_0x58:
	  lis       r3, 0x804F
	  addi      r0, r3, 0x5E40
	  cmplw     r31, r0
	  bne-      .loc_0x70
	  li        r31, 0
	  b         .loc_0x88

	.loc_0x70:
	  bl        0xFE18
	  lwz       r31, 0xC(r31)
	  cmpwi     r31, 0x3
	  bne-      .loc_0x84
	  li        r31, 0x1

	.loc_0x84:
	  bl        0xFE2C

	.loc_0x88:
	  mr        r3, r30
	  bl        0xFE24
	  mr        r3, r31
	  lwz       r0, 0x1C(r1)
	  lwz       r31, 0x14(r1)
	  lwz       r30, 0x10(r1)
	  addi      r1, r1, 0x18
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800DEE5C
 * Size:	000010
 */
int DVDSetAutoInvalidation(int newValue)
{
	int oldValue     = autoInvalidation;
	autoInvalidation = newValue;
	return oldValue;
}

/*
 * --INFO--
 * Address:	........
 * Size:	00003C
 */
void DVDPause()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800DEE6C
 * Size:	000050
 */
void DVDResume()
{
	BOOL level;
	level     = OSDisableInterrupts();
	PauseFlag = FALSE;
	if (PausingFlag) {
		PausingFlag = FALSE;
		stateReady();
	}
	OSRestoreInterrupts(level);
}

/*
 * --INFO--
 * Address:	800DEEBC
 * Size:	00027C
 */
BOOL DVDCancelAsync(DVDCommandBlock* block, DVDCBCallback callback)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x28(r1)
	  stw       r31, 0x24(r1)
	  stw       r30, 0x20(r1)
	  addi      r30, r4, 0
	  stw       r29, 0x1C(r1)
	  addi      r29, r3, 0
	  bl        0xFD5C
	  lwz       r4, 0xC(r29)
	  addi      r31, r3, 0
	  addi      r0, r4, 0x1
	  cmplwi    r0, 0xC
	  bgt-      .loc_0x254
	  lis       r3, 0x804A
	  addi      r3, r3, 0x7DB0
	  rlwinm    r0,r0,2,0,29
	  lwzx      r0, r3, r0
	  mtctr     r0
	  bctr
	  cmplwi    r30, 0
	  beq-      .loc_0x254
	  addi      r12, r30, 0
	  mtlr      r12
	  addi      r4, r29, 0
	  li        r3, 0
	  blrl
	  b         .loc_0x254
	  lwz       r0, -0x71B0(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0x8C
	  mr        r3, r31
	  bl        0xFD24
	  li        r3, 0
	  b         .loc_0x260

	.loc_0x8C:
	  li        r0, 0x1
	  stw       r30, -0x71AC(r13)
	  stw       r0, -0x71B0(r13)
	  lwz       r0, 0x8(r29)
	  cmplwi    r0, 0x4
	  beq-      .loc_0xAC
	  cmplwi    r0, 0x1
	  bne-      .loc_0x254

	.loc_0xAC:
	  bl        -0x2EE8
	  b         .loc_0x254
	  mr        r3, r29
	  bl        0x680
	  li        r0, 0xA
	  stw       r0, 0xC(r29)
	  lwz       r12, 0x28(r29)
	  cmplwi    r12, 0
	  beq-      .loc_0xE0
	  mtlr      r12
	  addi      r4, r29, 0
	  li        r3, -0x3
	  blrl

	.loc_0xE0:
	  cmplwi    r30, 0
	  beq-      .loc_0x254
	  addi      r12, r30, 0
	  mtlr      r12
	  addi      r4, r29, 0
	  li        r3, 0
	  blrl
	  b         .loc_0x254
	  lwz       r0, 0x8(r29)
	  cmpwi     r0, 0xD
	  beq-      .loc_0x130
	  bge-      .loc_0x124
	  cmpwi     r0, 0x6
	  bge-      .loc_0x150
	  cmpwi     r0, 0x4
	  bge-      .loc_0x130
	  b         .loc_0x150

	.loc_0x124:
	  cmpwi     r0, 0xF
	  beq-      .loc_0x130
	  b         .loc_0x150

	.loc_0x130:
	  cmplwi    r30, 0
	  beq-      .loc_0x254
	  addi      r12, r30, 0
	  mtlr      r12
	  addi      r4, r29, 0
	  li        r3, 0
	  blrl
	  b         .loc_0x254

	.loc_0x150:
	  lwz       r0, -0x71B0(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0x16C
	  mr        r3, r31
	  bl        0xFC44
	  li        r3, 0
	  b         .loc_0x260

	.loc_0x16C:
	  li        r0, 0x1
	  stw       r30, -0x71AC(r13)
	  stw       r0, -0x71B0(r13)
	  b         .loc_0x254
	  bl        -0x2FA4
	  lis       r4, 0x800E
	  subi      r0, r4, 0x2358
	  cmplw     r3, r0
	  beq-      .loc_0x1A0
	  mr        r3, r31
	  bl        0xFC10
	  li        r3, 0
	  b         .loc_0x260

	.loc_0x1A0:
	  lwz       r0, 0xC(r29)
	  cmpwi     r0, 0x4
	  bne-      .loc_0x1B4
	  li        r0, 0x3
	  stw       r0, -0x71A8(r13)

	.loc_0x1B4:
	  lwz       r0, 0xC(r29)
	  cmpwi     r0, 0x5
	  bne-      .loc_0x1C8
	  li        r0, 0x4
	  stw       r0, -0x71A8(r13)

	.loc_0x1C8:
	  lwz       r0, 0xC(r29)
	  cmpwi     r0, 0x6
	  bne-      .loc_0x1DC
	  li        r0, 0x1
	  stw       r0, -0x71A8(r13)

	.loc_0x1DC:
	  lwz       r0, 0xC(r29)
	  cmpwi     r0, 0xB
	  bne-      .loc_0x1F0
	  li        r0, 0x2
	  stw       r0, -0x71A8(r13)

	.loc_0x1F0:
	  lwz       r0, 0xC(r29)
	  cmpwi     r0, 0x7
	  bne-      .loc_0x204
	  li        r0, 0x7
	  stw       r0, -0x71A8(r13)

	.loc_0x204:
	  lis       r3, 0x804F
	  addi      r0, r3, 0x5E40
	  stw       r0, -0x71D0(r13)
	  li        r0, 0xA
	  stw       r0, 0xC(r29)
	  lwz       r12, 0x28(r29)
	  cmplwi    r12, 0
	  beq-      .loc_0x234
	  mtlr      r12
	  addi      r4, r29, 0
	  li        r3, -0x3
	  blrl

	.loc_0x234:
	  cmplwi    r30, 0
	  beq-      .loc_0x250
	  addi      r12, r30, 0
	  mtlr      r12
	  addi      r4, r29, 0
	  li        r3, 0
	  blrl

	.loc_0x250:
	  bl        -0x1380

	.loc_0x254:
	  mr        r3, r31
	  bl        0xFB4C
	  li        r3, 0x1

	.loc_0x260:
	  lwz       r0, 0x2C(r1)
	  lwz       r31, 0x24(r1)
	  lwz       r30, 0x20(r1)
	  lwz       r29, 0x1C(r1)
	  addi      r1, r1, 0x28
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800DF138
 * Size:	0000AC
 */
s32 DVDCancel(DVDCommandBlock* block)
{
	int interrupts;
	if (DVDCancelAsync(block, cbForCancelSync) != FALSE) {
		interrupts = OSDisableInterrupts();
		while (1 < block->state + 1 && block->state != 10
		       && (block->state != 3 || (1 < block->command - 4 && block->command != 0xD && block->command != 0xF))) {
			OSSleepThread(&__DVDThreadQueue);
		}
		OSRestoreInterrupts(interrupts);
		return 0;
	} else {
		return -1;
	}
	/*
	.loc_0x0:
	  mflr      r0
	  lis       r4, 0x800E
	  stw       r0, 0x4(r1)
	  subi      r4, r4, 0xE1C
	  stwu      r1, -0x18(r1)
	  stw       r31, 0x14(r1)
	  stw       r30, 0x10(r1)
	  addi      r30, r3, 0
	  bl        -0x29C
	  cmpwi     r3, 0
	  bne-      .loc_0x34
	  li        r3, -0x1
	  b         .loc_0x94

	.loc_0x34:
	  bl        0xFACC
	  mr        r31, r3

	.loc_0x3C:
	  lwz       r3, 0xC(r30)
	  addi      r0, r3, 0x1
	  cmplwi    r0, 0x1
	  ble-      .loc_0x88
	  cmpwi     r3, 0xA
	  beq-      .loc_0x88
	  cmpwi     r3, 0x3
	  bne-      .loc_0x7C
	  lwz       r3, 0x8(r30)
	  subi      r0, r3, 0x4
	  cmplwi    r0, 0x1
	  ble-      .loc_0x88
	  cmplwi    r3, 0xD
	  beq-      .loc_0x88
	  cmplwi    r3, 0xF
	  beq-      .loc_0x88

	.loc_0x7C:
	  subi      r3, r13, 0x71D8
	  bl        0x13734
	  b         .loc_0x3C

	.loc_0x88:
	  mr        r3, r31
	  bl        0xFA9C
	  li        r3, 0

	.loc_0x94:
	  lwz       r0, 0x1C(r1)
	  lwz       r31, 0x14(r1)
	  lwz       r30, 0x10(r1)
	  addi      r1, r1, 0x18
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800DF1E4
 * Size:	000024
 */
static void cbForCancelSync(s32 result, DVDCommandBlock* block) { OSWakeupThread(&__DVDThreadQueue); }

/*
 * --INFO--
 * Address:	........
 * Size:	0000EC
 */
BOOL DVDCancelAllAsync(DVDCBCallback callback)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000138
 */
s32 DVDCancelAll()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00002C
 */
void cbForCancelAllSync()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800DF208
 * Size:	000008
 */
DVDDiskID* DVDGetCurrentDiskID()
{
	return &((OSBootInfo*)0x80000000)->DVDDiskID;
	/*
	.loc_0x0:
	  lis       r3, 0x8000
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800DF210
 * Size:	0000F8
 */
BOOL DVDCheckDisk()
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x10(r1)
	  stw       r31, 0xC(r1)
	  bl        0xFA18
	  lwz       r0, -0x71B8(r13)
	  cmpwi     r0, 0
	  beq-      .loc_0x28
	  li        r4, -0x1
	  b         .loc_0x6C

	.loc_0x28:
	  lwz       r0, -0x71C0(r13)
	  cmpwi     r0, 0
	  beq-      .loc_0x3C
	  li        r4, 0x8
	  b         .loc_0x6C

	.loc_0x3C:
	  lwz       r5, -0x71D0(r13)
	  cmplwi    r5, 0
	  bne-      .loc_0x50
	  li        r4, 0
	  b         .loc_0x6C

	.loc_0x50:
	  lis       r4, 0x804F
	  addi      r0, r4, 0x5E40
	  cmplw     r5, r0
	  bne-      .loc_0x68
	  li        r4, 0
	  b         .loc_0x6C

	.loc_0x68:
	  lwz       r4, 0xC(r5)

	.loc_0x6C:
	  addi      r0, r4, 0x1
	  cmplwi    r0, 0xC
	  bgt-      .loc_0xDC
	  lis       r4, 0x804A
	  addi      r4, r4, 0x7DE4
	  rlwinm    r0,r0,2,0,29
	  lwzx      r0, r4, r0
	  mtctr     r0
	  bctr
	  li        r31, 0x1
	  b         .loc_0xDC
	  li        r31, 0
	  b         .loc_0xDC
	  lis       r4, 0xCC00
	  addi      r4, r4, 0x6000
	  lwz       r4, 0x4(r4)
	  rlwinm.   r0,r4,30,31,31
	  bne-      .loc_0xBC
	  rlwinm.   r0,r4,0,31,31
	  beq-      .loc_0xC4

	.loc_0xBC:
	  li        r31, 0
	  b         .loc_0xDC

	.loc_0xC4:
	  lwz       r0, -0x71A8(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0xD8
	  li        r31, 0
	  b         .loc_0xDC

	.loc_0xD8:
	  li        r31, 0x1

	.loc_0xDC:
	  bl        0xF974
	  mr        r3, r31
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  addi      r1, r1, 0x10
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800DF308
 * Size:	00011C
 */
void __DVDPrepareResetAsync()
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x20(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  mr        r30, r3
	  stw       r29, 0x14(r1)
	  bl        0xF914
	  mr        r29, r3
	  bl        0x130
	  lwz       r0, -0x71B0(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0x3C
	  stw       r30, -0x71AC(r13)
	  b         .loc_0xF8

	.loc_0x3C:
	  lwz       r3, -0x71D0(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x50
	  li        r0, 0
	  stw       r0, 0x28(r3)

	.loc_0x50:
	  bl        0xF8E0
	  mr        r31, r3
	  bl        0xF8D8
	  lwz       r0, -0x71D0(r13)
	  li        r4, 0x1
	  stw       r4, -0x71C4(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x74
	  stw       r4, -0x71C0(r13)

	.loc_0x74:
	  bl        0xF8E4
	  b         .loc_0x84

	.loc_0x7C:
	  li        r4, 0
	  bl        -0x4CC

	.loc_0x84:
	  bl        0x170
	  cmplwi    r3, 0
	  bne+      .loc_0x7C
	  lwz       r3, -0x71D0(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0xA8
	  mr        r4, r30
	  bl        -0x4EC
	  b         .loc_0xC4

	.loc_0xA8:
	  cmplwi    r30, 0
	  beq-      .loc_0xC4
	  addi      r12, r30, 0
	  mtlr      r12
	  li        r3, 0
	  li        r4, 0
	  blrl

	.loc_0xC4:
	  bl        0xF86C
	  li        r4, 0
	  stw       r4, -0x71C4(r13)
	  mr        r30, r3
	  lwz       r0, -0x71C0(r13)
	  cmpwi     r0, 0
	  beq-      .loc_0xE8
	  stw       r4, -0x71C0(r13)
	  bl        -0x1660

	.loc_0xE8:
	  mr        r3, r30
	  bl        0xF86C
	  mr        r3, r31
	  bl        0xF864

	.loc_0xF8:
	  mr        r3, r29
	  bl        0xF85C
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  addi      r1, r1, 0x20
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800DF424
 * Size:	000038
 */
BOOL __DVDTestAlarm(OSAlarm* alarm)
{
	return (alarm == &ResetAlarm) ? TRUE : __DVDLowTestAlarm(alarm);
	/*
	.loc_0x0:
	  mflr      r0
	  lis       r4, 0x804F
	  stw       r0, 0x4(r1)
	  addi      r0, r4, 0x5E70
	  cmplw     r3, r0
	  stwu      r1, -0x8(r1)
	  bne-      .loc_0x24
	  li        r3, 0x1
	  b         .loc_0x28

	.loc_0x24:
	  bl        -0x3354

	.loc_0x28:
	  lwz       r0, 0xC(r1)
	  addi      r1, r1, 0x8
	  mtlr      r0
	  blr
	*/
}
