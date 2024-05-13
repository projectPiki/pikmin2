#include "Dolphin/os.h"
#include "Dolphin/hw_regs.h"
#include "types.h"
#include "Dolphin/dvd.h"
#include "mem.h"

const char* __DVDVersion = "<< Dolphin SDK - DVD\trelease build: Sep 16 2003 09:50:54 (0x2301) >>";

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
static void cbForCancelStreamSync(s32 result, DVDCommandBlock* block);
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

// Private/weak functions from other files.
void __DVDInterruptHandler(__OSInterrupt interrupt, OSContext* context);
DVDCommandBlock* __DVDPopWaitingQueue();

typedef void (*stateFunc)(DVDCommandBlock* block);
stateFunc LastState;

static DVDBB2 BB2 ATTRIBUTE_ALIGN(32);
static DVDDiskID CurrDiskID ATTRIBUTE_ALIGN(32);
static DVDCommandBlock* executing;
static DVDDiskID* IDShouldBe;
static OSBootInfo* bootInfo;
static BOOL autoInvalidation        = TRUE;
static volatile BOOL PauseFlag      = FALSE;
static volatile BOOL PausingFlag    = FALSE;
static volatile BOOL AutoFinishing  = FALSE;
static volatile BOOL FatalErrorFlag = FALSE;
static vu32 CurrCommand;
static vu32 Canceling = FALSE;
static DVDCBCallback CancelCallback;
static vu32 ResumeFromHere = 0;
static vu32 CancelLastError;
static vu32 LastError;
static vs32 NumInternalRetry = 0;
static volatile BOOL ResetRequired;
static volatile BOOL FirstTimeInBootrom = FALSE;

static DVDCommandBlock DummyCommandBlock;
static OSAlarm ResetAlarm;

static BOOL DVDInitialized                            = FALSE;
static DVDOptionalCommandChecker checkOptionalCommand = defaultOptionalCommandChecker;

/**
 * @note Address: 0x800DCD28
 * @note Size: 0x4
 */
static void defaultOptionalCommandChecker(DVDCommandBlock* block, DVDLowCallback cb) { }

/**
 * @note Address: 0x800DCD2C
 * @note Size: 0xCC
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
	__DIRegs[DI_STATUS]       = 42;
	__DIRegs[DI_COVER_STATUS] = 0;
	if (bootInfo->magic == OS_BOOTINFO_MAGIC_JTAG) {
		OSReport("load fst\n");
		__fstLoad();
	} else if (bootInfo->magic != 0xD15EA5E) {
		FirstTimeInBootrom = TRUE;
	}
}

/**
 * @note Address: 0x800DCDF8
 * @note Size: 0x94
 */
static void stateReadingFST()
{
	LastState = (stateFunc)stateReadingFST;

	if (bootInfo->FSTMaxLength < BB2.FSTLength) {
		OSErrorLine(650, "DVDChangeDisk(): FST in the new disc is too big.   ");
	}

	DVDLowRead(bootInfo->FSTLocation, OSRoundUp32B(BB2.FSTLength), BB2.FSTPosition, cbForStateReadingFST);
}

/**
 * @note Address: 0x800DCE8C
 * @note Size: 0x8C
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

/**
 * @note Address: 0x800DCF18
 * @note Size: 0xAC
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

/**
 * @note Address: N/A
 * @note Size: 0x2C
 */
static void stateError(u32 error)
{
	__DVDStoreErrorCode(error);
	DVDLowStopMotor(cbForStateError);
}

/**
 * @note Address: 0x800DCFC4
 * @note Size: 0x34
 */
static void stateTimeout()
{
	__DVDStoreErrorCode(0x1234568);
	DVDReset();
	cbForStateError(0);
}

/**
 * @note Address: 0x800DCFF8
 * @note Size: 0x28
 */
static void stateGettingError() { DVDLowRequestError(cbForStateGettingError); }

/**
 * @note Address: 0x800DD020
 * @note Size: 0xB4
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

/**
 * @note Address: N/A
 * @note Size: 0x9C
 */
static BOOL CheckCancel(u32 resume)
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

/**
 * @note Address: 0x800DD0D4
 * @note Size: 0x294
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

	error  = __DIRegs[DI_MM_BUF];
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

/**
 * @note Address: 0x800DD368
 * @note Size: 0x68
 */
static void cbForUnrecoveredError(u32 p1)
{
	if (p1 == 16) {
		executing->state = -1;
		stateTimeout();
		return;
	}

	if (p1 & 1) {
		stateGoToRetry();
		return;
	}

	DVDLowRequestError(cbForUnrecoveredErrorRetry);
}

/**
 * @note Address: 0x800DD3D0
 * @note Size: 0x98
 */
void cbForUnrecoveredErrorRetry(u32 p1)
{
	if (p1 == 0x10) {
		executing->state = -1;
		__DVDStoreErrorCode(0x1234568);
		DVDReset();
		cbForStateError(0);
		return;
	}

	executing->state = -1;

	if ((p1 & 2) != 0) {
		__DVDStoreErrorCode(0x1234567);
		DVDLowStopMotor(cbForStateError);
		return;
	}

	__DVDStoreErrorCode(__DIRegs[DI_MM_BUF]);
	DVDLowStopMotor(cbForStateError);
}

/**
 * @note Address: 0x800DD468
 * @note Size: 0x28
 */
void stateGoToRetry() { DVDLowStopMotor(cbForStateGoToRetry); }

/**
 * @note Address: 0x800DD490
 * @note Size: 0x158
 */
void cbForStateGoToRetry(u32 p1)
{
	if (p1 == 16) {
		executing->state = -1;
		stateTimeout();
		return;
	}

	if (p1 & 2) {
		executing->state = -1;
		stateError(0x1234567);
		return;
	}

	NumInternalRetry = 0;

	if ((CurrCommand == 4) || (CurrCommand == 5) || (CurrCommand == 13) || (CurrCommand == 15)) {
		ResetRequired = TRUE;
	}

	if (!CheckCancel(2)) {
		executing->state = 11;
		stateMotorStopped();
	}
}

/**
 * @note Address: 0x800DD5E8
 * @note Size: 0xE0
 */
static void stateCheckID()
{
	switch (CurrCommand) {
	case 3:
		if (DVDCompareDiskID(&CurrDiskID, executing->id) != FALSE) {
			memcpy(IDShouldBe, &CurrDiskID, sizeof(DVDDiskID));
			executing->state = 1;
			DCInvalidateRange(&BB2, sizeof(DVDBB2));
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
}

/**
 * @note Address: 0x800DD6C8
 * @note Size: 0x34
 */
static void stateCheckID3(DVDCommandBlock* cmdBlock) { DVDLowAudioBufferConfig(IDShouldBe->streaming, 10, cbForStateCheckID3); }

/**
 * @note Address: 0x800DD6FC
 * @note Size: 0x34
 */
static void stateCheckID2a(DVDCommandBlock* cmdBlock) { DVDLowAudioBufferConfig(IDShouldBe->streaming, 10, cbForStateCheckID2a); }

/**
 * @note Address: 0x800DD730
 * @note Size: 0x74
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

/**
 * @note Address: 0x800DD7A4
 * @note Size: 0x38
 */
static void stateCheckID2(DVDCommandBlock* block) { DVDLowRead(&BB2, OSRoundUp32B(sizeof(DVDBB2)), 0x420, cbForStateCheckID2); }

/**
 * @note Address: 0x800DD7DC
 * @note Size: 0x114
 */
void cbForStateCheckID1(u32 p1)
{
	if (p1 == 16) {
		executing->state = -1;
		stateTimeout();
		return;
	}

	if (p1 & 2) {
		executing->state = -1;
		stateError(0x1234567);
		return;
	}

	NumInternalRetry = 0;

	if (!CheckCancel(1)) {
		executing->state = 6;
		stateMotorStopped();
	}
}

/**
 * @note Address: 0x800DD8F0
 * @note Size: 0xE4
 */
void cbForStateCheckID2(u32 p1)
{
	if (p1 == 16) {
		executing->state = -1;
		stateTimeout();
		return;
	}

	if (p1 & 1) {
		NumInternalRetry = 0;
		stateReadingFST();

	} else {
		stateGettingError();
	}
}

/**
 * @note Address: 0x800DD9D4
 * @note Size: 0xFC
 */
static void cbForStateCheckID3(u32 p1)
{
	if (p1 == 16) {
		executing->state = -1;
		stateTimeout();
		return;
	}

	if (p1 & 1) {
		NumInternalRetry = 0;

		if (!CheckCancel(0)) {
			executing->state = 1;
			stateBusy(executing);
		}

	} else {
		stateGettingError();
	}
}

/**
 * @note Address: 0x800DDAD0
 * @note Size: 0x44
 */
static void AlarmHandler(OSAlarm* alarm, OSContext* context)
{
	DVDReset();
	DCInvalidateRange(&CurrDiskID, sizeof(DVDDiskID));
	LastState = stateCoverClosed_CMD;
	stateCoverClosed_CMD(executing);
}

/**
 * @note Address: 0x800DDB14
 * @note Size: 0xCC
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
}

/**
 * @note Address: 0x800DDBE0
 * @note Size: 0x30
 */
void stateCoverClosed_CMD(DVDCommandBlock* cmdBlock) { DVDLowReadDiskID(&CurrDiskID, cbForStateCoverClosed); }

/**
 * @note Address: 0x800DDC10
 * @note Size: 0x70
 */
void cbForStateCoverClosed(u32 p1)
{
	if (p1 == 16) {
		executing->state = -1;
		stateTimeout();
		return;
	}

	if (p1 & 1) {
		NumInternalRetry = 0;
		stateCheckID();
	} else {
		stateGettingError();
	}
}

/**
 * @note Address: 0x800DDC80
 * @note Size: 0x28
 */
static void stateMotorStopped() { DVDLowWaitCoverClose(cbForStateMotorStopped); }

/**
 * @note Address: 0x800DDCA8
 * @note Size: 0xE4
 */
void cbForStateMotorStopped(u32 p1)
{
	__DIRegs[DI_COVER_STATUS] = 0;
	executing->state          = 3;
	stateCoverClosed();
}

/**
 * @note Address: 0x800DDD8C
 * @note Size: 0x230
 */
void stateReady()
{
	DVDCommandBlock* finished;

	if (!__DVDCheckWaitingQueue()) {
		executing = (DVDCommandBlock*)nullptr;
		return;
	}

	if (PauseFlag) {
		PausingFlag = TRUE;
		executing   = (DVDCommandBlock*)nullptr;
		return;
	}

	executing = __DVDPopWaitingQueue();

	if (FatalErrorFlag) {
		executing->state = -1;
		finished         = executing;
		executing        = &DummyCommandBlock;
		if (finished->callback) {
			(finished->callback)(-1, finished);
		}
		stateReady();
		return;
	}

	CurrCommand = executing->command;

	if (ResumeFromHere) {
		switch (ResumeFromHere) {
		case 2:
			executing->state = 11;
			stateMotorStopped();
			break;

		case 3:
			executing->state = 4;
			stateMotorStopped();
			break;

		case 4:
			executing->state = 5;
			stateMotorStopped();
			break;
		case 1:
		case 7:
		case 6:
			executing->state = 3;
			stateCoverClosed();
			break;

		case 5:
			executing->state = -1;
			stateError(CancelLastError);
			break;
		}

		ResumeFromHere = 0;

	} else {
		executing->state = 1;
		stateBusy(executing);
	}
}

// idk why this file insists on doing this in the opposite order
#define DVDMIN(a, b) (((a) > (b)) ? (b) : (a))

/**
 * @note Address: 0x800DDFBC
 * @note Size: 0x320
 */
void stateBusy(DVDCommandBlock* block)
{
	DVDCommandBlock* finished;
	LastState = stateBusy;
	switch (block->command) {
	case 5:
		__DIRegs[DI_COVER_STATUS] = __DIRegs[DI_COVER_STATUS];
		block->currTransferSize   = sizeof(DVDDiskID);
		DVDLowReadDiskID(block->addr, cbForStateBusy);
		break;
	case 1:
	case 4:
		if (!block->length) {
			finished        = executing;
			executing       = &DummyCommandBlock;
			finished->state = 0;
			if (finished->callback) {
				finished->callback(0, finished);
			}
			stateReady();
		} else {
			__DIRegs[DI_COVER_STATUS] = __DIRegs[DI_COVER_STATUS];
			block->currTransferSize   = DVDMIN(block->length - block->transferredSize, 0x80000);
			DVDLowRead((void*)((u8*)block->addr + block->transferredSize), block->currTransferSize, block->offset + block->transferredSize,
			           cbForStateBusy);
		}
		break;

	case 2:
		__DIRegs[DI_COVER_STATUS] = __DIRegs[DI_COVER_STATUS];
		DVDLowSeek(block->offset, cbForStateBusy);
		break;

	case 3:
		DVDLowStopMotor(cbForStateBusy);
		break;

	case 15:
		DVDLowStopMotor(cbForStateBusy);
		break;

	case 6:
		__DIRegs[DI_COVER_STATUS] = __DIRegs[DI_COVER_STATUS];
		if (AutoFinishing) {
			executing->currTransferSize = 0;
			DVDLowRequestAudioStatus(0, cbForStateBusy);
		} else {
			executing->currTransferSize = 1;
			DVDLowAudioStream(0, block->length, block->offset, cbForStateBusy);
		}
		break;

	case 7:
		__DIRegs[DI_COVER_STATUS] = __DIRegs[DI_COVER_STATUS];
		DVDLowAudioStream(0x10000, 0, 0, cbForStateBusy);
		break;

	case 8:
		__DIRegs[DI_COVER_STATUS] = __DIRegs[DI_COVER_STATUS];
		AutoFinishing             = TRUE;
		DVDLowAudioStream(0, 0, 0, cbForStateBusy);
		break;

	case 9:
		__DIRegs[DI_COVER_STATUS] = __DIRegs[DI_COVER_STATUS];
		DVDLowRequestAudioStatus(0, cbForStateBusy);
		break;

	case 10:
		__DIRegs[DI_COVER_STATUS] = __DIRegs[DI_COVER_STATUS];
		DVDLowRequestAudioStatus(0x10000, cbForStateBusy);
		break;

	case 11:
		__DIRegs[DI_COVER_STATUS] = __DIRegs[DI_COVER_STATUS];
		DVDLowRequestAudioStatus(0x20000, cbForStateBusy);
		break;

	case 12:
		__DIRegs[DI_COVER_STATUS] = __DIRegs[DI_COVER_STATUS];
		DVDLowRequestAudioStatus(0x30000, cbForStateBusy);
		break;

	case 13:
		__DIRegs[DI_COVER_STATUS] = __DIRegs[DI_COVER_STATUS];
		DVDLowAudioBufferConfig(block->offset, block->length, cbForStateBusy);
		break;

	case 14:
		__DIRegs[DI_COVER_STATUS] = __DIRegs[DI_COVER_STATUS];
		block->currTransferSize   = sizeof(DVDDriveInfo);
		DVDLowInquiry(block->addr, cbForStateBusy);
		break;

	default:
		checkOptionalCommand(block, cbForStateBusy);
		break;
	}
}

// these will be from one of the stripped functions.
static u32 ImmCommand[]                    = { 0xffffffff, 0xffffffff, 0xffffffff };
static char string_DVDChangeDiskAsyncMsg[] = "DVDChangeDiskAsync(): You can't specify NULL to company name.  \n";

/**
 * @note Address: N/A
 * @note Size: 0x5C
 */
static BOOL IsImmCommandWithResult(u32 command)
{
	u32 i;

	if (command == 9 || command == 10 || command == 11 || command == 12) {
		return TRUE;
	}

	for (i = 0; i < sizeof(ImmCommand) / sizeof(ImmCommand[0]); i++) {
		if (command == ImmCommand[i])
			return TRUE;
	}

	return FALSE;
}

static u32 DmaCommand[] = { 0xFFFFFFFF };

/**
 * @note Address: N/A
 * @note Size: 0x40
 */
static BOOL IsDmaCommand(u32 command)
{
	u32 i;

	if (command == 1 || command == 4 || command == 5 || command == 14)
		return TRUE;

	for (i = 0; i < sizeof(DmaCommand) / sizeof(DmaCommand[0]); i++) {
		if (command == DmaCommand[i])
			return TRUE;
	}

	return FALSE;
}

/**
 * @note Address: 0x800DE2DC
 * @note Size: 0x638
 */
void cbForStateBusy(u32 p1)
{
	DVDCommandBlock* finished;

	if (p1 == 16) {
		executing->state = -1;
		stateTimeout();
		return;
	}

	if ((CurrCommand == 3) || (CurrCommand == 15)) {
		if (p1 & 2) {
			executing->state = -1;
			stateError(0x1234567);
			return;
		}

		NumInternalRetry = 0;

		if (CurrCommand == 15) {
			ResetRequired = TRUE;
		}

		if (CheckCancel(7)) {
			return;
		}

		executing->state = 7;
		stateMotorStopped();
		return;
	}

	if (IsDmaCommand(CurrCommand)) {
		executing->transferredSize += executing->currTransferSize - __DIRegs[6];
	}

	if (p1 & 8) {
		Canceling = FALSE;
		finished  = executing;
		executing = &DummyCommandBlock;

		finished->state = 10;
		if (finished->callback) {
			(*finished->callback)(-3, finished);
		}
		if (CancelCallback) {
			(CancelCallback)(0, finished);
		}
		stateReady();

		return;
	}

	if (p1 & 1) {
		NumInternalRetry = 0;

		if (CheckCancel(0))
			return;

		if (IsDmaCommand(CurrCommand)) {
			if (executing->transferredSize != executing->length) {
				stateBusy(executing);
				return;
			}

			finished  = executing;
			executing = &DummyCommandBlock;

			finished->state = 0;
			if (finished->callback) {
				(finished->callback)((s32)finished->transferredSize, finished);
			}
			stateReady();
		} else if (IsImmCommandWithResult(CurrCommand)) {
			s32 result;

			if ((CurrCommand == 11) || (CurrCommand == 10)) {
				result = (s32)(__DIRegs[DI_MM_BUF] << 2);
			} else {
				result = (s32)__DIRegs[DI_MM_BUF];
			}
			finished  = executing;
			executing = &DummyCommandBlock;

			finished->state = 0;
			if (finished->callback) {
				(finished->callback)(result, finished);
			}
			stateReady();
		} else if (CurrCommand == 6) {
			if (executing->currTransferSize == 0) {
				if (__DIRegs[DI_MM_BUF] & 1) {
					finished  = executing;
					executing = &DummyCommandBlock;

					finished->state = 9;
					if (finished->callback) {
						(finished->callback)(-2, finished);
					}
					stateReady();
				} else {
					AutoFinishing               = FALSE;
					executing->currTransferSize = 1;
					DVDLowAudioStream(0, executing->length, executing->offset, cbForStateBusy);
				}
			} else {
				finished  = executing;
				executing = &DummyCommandBlock;

				finished->state = 0;
				if (finished->callback) {
					(finished->callback)(0, finished);
				}
				stateReady();
			}
		} else {
			finished  = executing;
			executing = &DummyCommandBlock;

			finished->state = 0;
			if (finished->callback) {
				(finished->callback)(0, finished);
			}
			stateReady();
		}

	} else {
		if (CurrCommand == 14) {
			executing->state = -1;
			stateError(0x01234567);
			return;
		}

		if ((CurrCommand == 1 || CurrCommand == 4 || CurrCommand == 5 || CurrCommand == 14)
		    && (executing->transferredSize == executing->length)) {

			if (CheckCancel(0)) {
				return;
			}
			finished  = executing;
			executing = &DummyCommandBlock;

			finished->state = 0;
			if (finished->callback) {
				(finished->callback)((s32)finished->transferredSize, finished);
			}
			stateReady();
			return;
		}

		stateGettingError();
	}
}

/**
 * @note Address: N/A
 * @note Size: 0xBC
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

	if ((executing == (DVDCommandBlock*)nullptr) && (PauseFlag == FALSE)) {
		stateReady();
	}

	OSRestoreInterrupts(level);

	return result;
}

/**
 * @note Address: 0x800DE914
 * @note Size: 0xDC
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

/**
 * @note Address: 0x800DE9F0
 * @note Size: 0xD0
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

/**
 * @note Address: 0x800DEAC0
 * @note Size: 0xD4
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

/**
 * @note Address: N/A
 * @note Size: 0xC4
 */
static BOOL DVDPrepareStreamAbsAsync(DVDCommandBlock* block, u32 length, u32 offset, DVDCBCallback callback)
{
	BOOL idle;
	block->command  = 6;
	block->length   = length;
	block->offset   = offset;
	block->callback = callback;

	idle = issueCommand(1, block);
	return idle;
}

/**
 * @note Address: 0x800DEB94
 * @note Size: 0xBC
 */
BOOL DVDCancelStreamAsync(DVDCommandBlock* block, DVDCBCallback callback)
{
	BOOL idle;
	block->command  = 7;
	block->callback = callback;
	idle            = issueCommand(1, block);
	return idle;
}

/**
 * @note Address: N/A
 * @note Size: 0xA0
 */
static BOOL DVDCancelStream(DVDCommandBlock* block)
{
	BOOL result;
	s32 state;
	BOOL enabled;
	s32 retVal;

	result = DVDCancelStreamAsync(block, cbForCancelStreamSync);

	if (result == FALSE) {
		return -1;
	}

	enabled = OSDisableInterrupts();

	while (TRUE) {
		state = ((volatile DVDCommandBlock*)block)->state;

		if (state == 0 || state == -1 || state == 10) {
			retVal = (s32)block->transferredSize;
			break;
		}

		OSSleepThread(&__DVDThreadQueue);
	}

	OSRestoreInterrupts(enabled);
	return retVal;
}

/**
 * @note Address: N/A
 * @note Size: 0x28
 */
static void cbForCancelStreamSync(s32 result, DVDCommandBlock* block)
{
	block->transferredSize = (u32)result;
	OSWakeupThread(&__DVDThreadQueue);
}

/**
 * @note Address: N/A
 * @note Size: 0xBC
 */
static BOOL DVDStopStreamAtEndAsync(DVDCommandBlock* block, DVDCBCallback callback)
{
	BOOL idle;

	block->command  = 8;
	block->callback = callback;

	idle = issueCommand(1, block);

	return idle;
}

/**
 * @note Address: 0x800DEC50
 * @note Size: 0xD0
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

/**
 * @note Address: 0x800DED20
 * @note Size: 0x44
 */
void DVDReset()
{
	DVDLowReset();
	__DIRegs[DI_STATUS]       = 42;
	__DIRegs[DI_COVER_STATUS] = __DIRegs[DI_COVER_STATUS];
	ResetRequired             = FALSE;
	ResumeFromHere            = 0;
}

/**
 * @note Address: 0x800DED64
 * @note Size: 0x4C
 */
s32 DVDGetCommandBlockStatus(const DVDCommandBlock* block)
{
	int interrupts = OSDisableInterrupts();
	int result;
	if (block->state == 3) {
		result = 1;
	} else {
		result = block->state;
	}
	OSRestoreInterrupts(interrupts);
	return result;
}

/**
 * @note Address: 0x800DEDB0
 * @note Size: 0xAC
 */
s32 DVDGetDriveStatus()
{
	int interrupts = OSDisableInterrupts();
	int result;
	if (FatalErrorFlag != FALSE) {
		result = DVD_STATE_FATAL_ERROR;
	} else {
		if (PausingFlag != FALSE) {
			result = DVD_STATE_PAUSING;
		} else {
			if (executing == nullptr) {
				result = DVD_STATE_END;
			} else if (executing == &DummyCommandBlock) {
				result = DVD_STATE_END;
			} else {
				result = DVDGetCommandBlockStatus((struct DVDCommandBlock*)executing);
			}
		}
	}
	OSRestoreInterrupts(interrupts);
	return result;
}

/**
 * @note Address: 0x800DEE5C
 * @note Size: 0x10
 */
int DVDSetAutoInvalidation(int newValue)
{
	int oldValue     = autoInvalidation;
	autoInvalidation = newValue;
	return oldValue;
}

/**
 * @note Address: N/A
 * @note Size: 0x3C
 */
static void DVDPause()
{
	BOOL level;
	level     = OSDisableInterrupts();
	PauseFlag = TRUE;
	if (executing == (DVDCommandBlock*)NULL) {
		PausingFlag = TRUE;
	}
	OSRestoreInterrupts(level);
}

/**
 * @note Address: 0x800DEE6C
 * @note Size: 0x50
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

/**
 * @note Address: 0x800DEEBC
 * @note Size: 0x27C
 */
BOOL DVDCancelAsync(DVDCommandBlock* block, DVDCBCallback callback)
{
	BOOL enabled;
	DVDLowCallback old;
	u32 tmp; // dumb ass compiler

	enabled = OSDisableInterrupts();

	switch (block->state) {
	case -1:
	case 0:
	case 10:
		if (callback)
			(*callback)(0, block);
		break;

	case 1:
		if (Canceling) {
			OSRestoreInterrupts(enabled);
			return FALSE;
		}

		Canceling      = TRUE;
		CancelCallback = callback;
		if (block->command == 4 || block->command == 1) {
			DVDLowBreak();
		}
		break;

	case 2:
		__DVDDequeueWaitingQueue(block);
		block->state = 10;
		if (block->callback)
			(block->callback)(-3, block);
		if (callback)
			(*callback)(0, block);
		break;

	case 3:
		switch (block->command) {
		case 5:
		case 4:
		case 13:
		case 15:
			if (callback)
				(*callback)(0, block);
			break;

		default:
			if (Canceling) {
				OSRestoreInterrupts(enabled);
				return FALSE;
			}
			Canceling      = TRUE;
			CancelCallback = callback;
			break;
		}
		break;

	case 4:
	case 5:
	case 6:
	case 7:
	case 11:
		old = DVDLowClearCallback();
		if (old != cbForStateMotorStopped) {
			OSRestoreInterrupts(enabled);
			return FALSE;
		}

		if (block->state == 4)
			ResumeFromHere = 3;
		if (block->state == 5)
			ResumeFromHere = 4;
		if (block->state == 6)
			ResumeFromHere = 1;
		if (block->state == 11)
			ResumeFromHere = 2;
		if (block->state == 7)
			ResumeFromHere = 7;

		executing    = &DummyCommandBlock;
		block->state = 10;
		if (block->callback) {
			(block->callback)(-3, block);
		}
		if (callback) {
			(callback)(0, block);
		}
		stateReady();
		break;
	}

	OSRestoreInterrupts(enabled);
	return TRUE;
}

/**
 * @note Address: 0x800DF138
 * @note Size: 0xAC
 */
s32 DVDCancel(DVDCommandBlock* block)
{
	BOOL result;
	s32 state;
	u32 command;
	BOOL enabled;

	result = DVDCancelAsync(block, cbForCancelSync);

	if (result == FALSE) {
		return -1;
	}

	enabled = OSDisableInterrupts();

	for (;;) {
		state = ((volatile DVDCommandBlock*)block)->state;

		if ((state == 0) || (state == -1) || (state == 10)) {
			break;
		}

		if (state == 3) {
			command = ((volatile DVDCommandBlock*)block)->command;

			if ((command == 4) || (command == 5) || (command == 13) || (command == 15)) {
				break;
			}
		}

		OSSleepThread(&__DVDThreadQueue);
	}

	OSRestoreInterrupts(enabled);
	return 0;
}

/**
 * @note Address: 0x800DF1E4
 * @note Size: 0x24
 */
static void cbForCancelSync(s32 result, DVDCommandBlock* block) { OSWakeupThread(&__DVDThreadQueue); }

/**
 * @note Address: N/A
 * @note Size: 0xEC
 */
static BOOL DVDCancelAllAsync(DVDCBCallback callback)
{
	BOOL enabled;
	DVDCommandBlock* p;
	BOOL retVal;

	enabled = OSDisableInterrupts();
	DVDPause();

	while ((p = __DVDPopWaitingQueue()) != 0) {
		DVDCancelAsync(p, NULL);
	}

	if (executing)
		retVal = DVDCancelAsync(executing, callback);
	else {
		retVal = TRUE;
		if (callback)
			(*callback)(0, NULL);
	}

	DVDResume();
	OSRestoreInterrupts(enabled);
	return retVal;
}

/**
 * @note Address: 0x800DF208
 * @note Size: 0x8
 */
DVDDiskID* DVDGetCurrentDiskID() { return (DVDDiskID*)OSPhysicalToCached(0); }

/**
 * @note Address: 0x800DF210
 * @note Size: 0xF8
 */
BOOL DVDCheckDisk()
{
	BOOL enabled;
	s32 result;
	s32 state;
	u32 coverReg;

	enabled = OSDisableInterrupts();

	if (FatalErrorFlag) {
		state = -1;
	} else if (PausingFlag) {
		state = 8;
	} else {
		if (executing == (DVDCommandBlock*)NULL) {
			state = 0;
		} else if (executing == &DummyCommandBlock) {
			state = 0;
		} else {
			state = executing->state;
		}
	}

	switch (state) {
	case 1:
	case 9:
	case 10:
	case 2:
		result = TRUE;
		break;

	case -1:
	case 11:
	case 7:
	case 3:
	case 4:
	case 5:
	case 6:
		result = FALSE;
		break;

	case 0:
	case 8:
		coverReg = __DIRegs[1];
		if (((coverReg >> 2) & 1) || (coverReg & 1)) {
			result = FALSE;
		} else if (ResumeFromHere != 0) {
			result = FALSE;
		} else {
			result = TRUE;
		}
	}

	OSRestoreInterrupts(enabled);

	return result;
}

/**
 * @note Address: 0x800DF308
 * @note Size: 0x11C
 */
void __DVDPrepareResetAsync(DVDCBCallback callback)
{
	BOOL enabled;

	enabled = OSDisableInterrupts();

	__DVDClearWaitingQueue();

	if (Canceling) {
		CancelCallback = callback;
	} else {
		if (executing) {
			executing->callback = nullptr;
		}

		DVDCancelAllAsync(callback);
	}

	OSRestoreInterrupts(enabled);
}

/**
 * @note Address: 0x800DF424
 * @note Size: 0x38
 */
BOOL __DVDTestAlarm(OSAlarm* alarm) { return (alarm == &ResetAlarm) ? TRUE : __DVDLowTestAlarm(alarm); }
