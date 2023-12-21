#include "types.h"
#include "Dolphin/os.h"
#include "Dolphin/PPCArch.h"

DECL_SECT(".init") extern char _db_stack_end[];

// memory locations for important stuff
#define OS_DBINTERFACE_ADDR     0x40
#define OS_BI2_DEBUG_ADDRESS    0x800000F4
#define OS_BI2_DEBUGFLAG_OFFSET 0xC
#define PAD3_BUTTON_ADDR        0x800030E4
#define OS_DVD_DEVICECODE       0x800030E6
#define DEBUGFLAG_ADDR          0x800030E8
#define OS_DEBUG_ADDRESS_2      0x800030E9
#define DB_EXCEPTIONRET_OFFSET  0xC
#define DB_EXCEPTIONDEST_OFFSET 0x8
#define MSR_RI_BIT              0x1E

extern u8 __ArenaHi[];
extern u8 __ArenaLo[];
extern u32 __DVDLongFileNameFlag;
extern u32 __PADSpec;
// OS version
char* __OSVersion = "<< Dolphin SDK - OS\trelease build: Nov 26 2003 05:18:37 (0x2301) >>";

// main workhorse functions
void ClearArena();
void DVDInit();
void DVDInquiryAsync(void*, void*, void*);
void EXIInit();
void EnableMetroTRKInterrupts();
int OSEnableInterrupts();
void OSExceptionInit();
void OSRegisterVersion(const char*);
void PPCMtmmcr0(int);
void PPCMtmmcr1(int);
void PPCMtpmc1(int);
void PPCMtpmc2(int);
void PPCMtpmc3(int);
void PPCMtpmc4(int);
void SIInit();
void __OSContextInit();
void __OSInitAudioSystem();
void __OSInitMemoryProtection();
void __OSInitSram();
void __OSInitSystemCall();
void __OSInterruptInit();
void __OSThreadInit();
OSTime __OSGetSystemTime();
void DBPrintf(const char*, ...);
BOOL __DBIsExceptionMarked(u8);
void __OSUnhandledException(__OSException exception, OSContext* context, u32 dsisr, u32 dar);
extern char* __OSResetSWInterruptHandler[];

// typedef struct DVDCommandBlock DVDCommandBlock;
// typedef void (*DVDCBCallback)(s32 result, DVDCommandBlock* block);
// struct DVDCommandBlock {
// 	DVDCommandBlock* next;
// 	DVDCommandBlock* prev;
// 	u32 command;
// 	s32 state;
// 	u32 offset;
// 	u32 length;
// 	void* addr;
// 	u32 currTransferSize;
// 	u32 transferredSize;
// 	DVDDiskID* id;
// 	DVDCBCallback callback;
// 	void* userData;
// };

// The exception table.  It points to a location in LoMem.  It is set by
// OSExceptionInit
// typedef u32 __OSExceptionHandler;
#define OS_EXCEPTIONTABLE_ADDR 0x3000
#define OS_DBJUMPPOINT_ADDR    0x60

vu16 __OSDeviceCode : (OS_BASE_CACHED | OS_DVD_DEVICECODE);
void OSDefaultExceptionHandler(__OSException exception, OSContext* context);
static DVDDriveInfo DriveInfo ATTRIBUTE_ALIGN(32);
static DVDCommandBlock DriveBlock;

// flags and system info
static OSBootInfo* BootInfo;
static vu32* BI2DebugFlag;
static u32* BI2DebugFlagHolder;
WEAKFUNC BOOL __OSIsGcam = FALSE;
static f64 ZeroF;
static f32 ZeroPS[2];
static BOOL AreWeInitialized = FALSE;
static __OSExceptionHandler* OSExceptionTable;
OSTime __OSStartTime;
BOOL __OSInIPL;
void* __OSSavedRegionStart;
void* __OSSavedRegionEnd;

/**
 * @note Address: N/A
 * @note Size: 0xC
 */
void __OSIsDebuggerPresent(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800EAFC8
 * @note Size: 0x128
 */
ASM void __OSFPRInit(void)
{
#ifdef __MWERKS__ // clang-format off
	nofralloc

	mfmsr   r3
	ori     r3, r3, 0x2000
	mtmsr   r3

	mfspr   r3, 0x398
	rlwinm. r3, r3, 3, 31, 31
	beq     SkipPairedSingles

	lis     r3, ZeroPS@ha
	addi    r3, r3, ZeroPS@l
	psq_l   fp0, 0(r3), 0, 0
	ps_mr   fp1, fp0
	ps_mr   fp2, fp0
	ps_mr   fp3, fp0
	ps_mr   fp4, fp0
	ps_mr   fp5, fp0
	ps_mr   fp6, fp0
	ps_mr   fp7, fp0
	ps_mr   fp8, fp0
	ps_mr   fp9, fp0
	ps_mr   fp10, fp0
	ps_mr   fp11, fp0
	ps_mr   fp12, fp0
	ps_mr   fp13, fp0
	ps_mr   fp14, fp0
	ps_mr   fp15, fp0
	ps_mr   fp16, fp0
	ps_mr   fp17, fp0
	ps_mr   fp18, fp0
	ps_mr   fp19, fp0
	ps_mr   fp20, fp0
	ps_mr   fp21, fp0
	ps_mr   fp22, fp0
	ps_mr   fp23, fp0
	ps_mr   fp24, fp0
	ps_mr   fp25, fp0
	ps_mr   fp26, fp0
	ps_mr   fp27, fp0
	ps_mr   fp28, fp0
	ps_mr   fp29, fp0
	ps_mr   fp30, fp0
	ps_mr   fp31, fp0

SkipPairedSingles:
	lfd     fp0, ZeroF
	fmr     fp1, fp0
	fmr     fp2, fp0
	fmr     fp3, fp0
	fmr     fp4, fp0
	fmr     fp5, fp0
	fmr     fp6, fp0
	fmr     fp7, fp0
	fmr     fp8, fp0
	fmr     fp9, fp0
	fmr     fp10, fp0
	fmr     fp11, fp0
	fmr     fp12, fp0
	fmr     fp13, fp0
	fmr     fp14, fp0
	fmr     fp15, fp0
	fmr     fp16, fp0
	fmr     fp17, fp0
	fmr     fp18, fp0
	fmr     fp19, fp0
	fmr     fp20, fp0
	fmr     fp21, fp0
	fmr     fp22, fp0
	fmr     fp23, fp0
	fmr     fp24, fp0
	fmr     fp25, fp0
	fmr     fp26, fp0
	fmr     fp27, fp0
	fmr     fp28, fp0
	fmr     fp29, fp0
	fmr     fp30, fp0
	fmr     fp31, fp0

	mtfsf   0xFF, fp0

	blr
#endif // clang-format on
}

/**
 * @note Address: N/A
 * @note Size: 0x28
 */
void DisableWriteGatherPipe(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800EB0F0
 * @note Size: 0x28
 */
u32 OSGetConsoleType()
{
	if (BootInfo == NULL || BootInfo->consoleType == 0) {
		return 0x10000002; // default console type
	}
	return BootInfo->consoleType;
}

void* __OSSavedRegionStart;
void* __OSSavedRegionEnd;

extern u32 BOOT_REGION_START : 0x812FDFF0; //(*(u32 *)0x812fdff0)
extern u32 BOOT_REGION_END : 0x812FDFEC;   //(*(u32 *)0x812fdfec)

/**
 * @note Address: 0x800EB118
 * @note Size: 0x128
 */
void ClearArena(void)
{
	if ((u32)(OSGetResetCode() + 0x80000000) != 0U) {
		__OSSavedRegionStart = 0U;
		__OSSavedRegionEnd   = 0U;
		memset(OSGetArenaLo(), 0U, (u32)OSGetArenaHi() - (u32)OSGetArenaLo());
		return;
	}
	__OSSavedRegionStart = (void*)BOOT_REGION_START;
	__OSSavedRegionEnd   = (void*)BOOT_REGION_END;
	if (BOOT_REGION_START == 0U) {
		memset(OSGetArenaLo(), 0U, (u32)OSGetArenaHi() - (u32)OSGetArenaLo());
		return;
	}
	if ((u32)OSGetArenaLo() < (u32)__OSSavedRegionStart) {
		if ((u32)OSGetArenaHi() <= (u32)__OSSavedRegionStart) {
			memset((u32)OSGetArenaLo(), 0U, (u32)OSGetArenaHi() - (u32)OSGetArenaLo());
			return;
		}
		memset(OSGetArenaLo(), 0U, (u32)__OSSavedRegionStart - (u32)OSGetArenaLo());
		if ((u32)OSGetArenaHi() > (u32)__OSSavedRegionEnd) {
			memset((u32)__OSSavedRegionEnd, 0, (u32)OSGetArenaHi() - (u32)__OSSavedRegionEnd);
		}
	}
}

/**
 * @note Address: 0x800EB240
 * @note Size: 0x3C
 */
static void InquiryCallback(s32 result, DVDCommandBlock* block)
{
	switch (block->state) {
	case 0:
		__OSDeviceCode = (u16)(0x8000 | DriveInfo.deviceCode);
		break;
	default:
		__OSDeviceCode = 1;
		break;
	}
}

/**
 * @note Address: 0x800EB27C
 * @note Size: 0x3D8
 */
void OSInit(void)
{
	/*
	Initializes the Dolphin operating system.
	    - most of the main operations get farmed out to other functions
	    - loading debug info and setting up heap bounds largely happen here
	    - a lot of OS reporting also gets controlled here
	*/
	// pretty sure this is the min(/max) amount of pointers etc for the stack to match
	BI2Debug* DebugInfo;
	void* debugArenaLo;
	u32 inputConsoleType;
	u32 tdev;

	// check if we've already done all this or not
	if ((BOOL)AreWeInitialized == FALSE) { // fantastic name
		AreWeInitialized = TRUE;           // flag to make sure we don't have to do this again

		// SYSTEM //
		__OSStartTime = __OSGetSystemTime();
		OSDisableInterrupts();

		// set some PPC things
		PPCMtmmcr0(0);
		PPCMtmmcr1(0);
		PPCMtpmc1(0);
		PPCMtpmc2(0);
		PPCMtpmc3(0);
		PPCMtpmc4(0);
		PPCDisableSpeculation();
		PPCSetFpNonIEEEMode();

		// DEBUG //
		// load some DVD stuff
		BI2DebugFlag = 0;                           // debug flag from the DVD BI2 header
		BootInfo     = (OSBootInfo*)OS_BASE_CACHED; // set pointer to BootInfo

		__DVDLongFileNameFlag = (u32)0; // flag to tell us whether we make it through the debug loading

		// time to grab a bunch of debug info from the DVD
		// the address for where the BI2 debug info is, is stored at OS_BI2_DEBUG_ADDRESS
		DebugInfo = (BI2Debug*)*((u32*)OS_BI2_DEBUG_ADDRESS);

		// if the debug info address exists, grab some debug info
		if (DebugInfo != NULL) {
			BI2DebugFlag               = &DebugInfo->debugFlag;     // debug flag from DVD BI2
			__PADSpec                  = (u32)DebugInfo->padSpec;   // some other info from DVD BI2
			*((u8*)DEBUGFLAG_ADDR)     = (u8)*BI2DebugFlag;         // store flag in mem
			*((u8*)OS_DEBUG_ADDRESS_2) = (u8)__PADSpec;             // store other info in mem
		} else if (BootInfo->arenaHi) {                             // if the top of the heap is already set
			BI2DebugFlagHolder = (u32*)*((u8*)DEBUGFLAG_ADDR);      // grab whatever's stored at 0x800030E8
			BI2DebugFlag       = (u32*)&BI2DebugFlagHolder;         // flag is then address of flag holder
			__PADSpec          = (u32) * ((u8*)OS_DEBUG_ADDRESS_2); // pad spec is whatever's at 0x800030E9
		}

		__DVDLongFileNameFlag = 1; // we made it through debug!

		// HEAP //
		// set up bottom of heap (ArenaLo)
		// grab address from BootInfo if it exists, otherwise use default __ArenaLo
		OSSetArenaLo((BootInfo->arenaLo == NULL) ? __ArenaLo : BootInfo->arenaLo);

		// if the input arenaLo is null, and debug flag location exists (and flag is < 2),
		//     set arenaLo to just past the end of the db stack
		if ((BootInfo->arenaLo == NULL) && (BI2DebugFlag != 0) && (*BI2DebugFlag < 2)) {
			debugArenaLo = (char*)(((u32)_db_stack_end + 0x1f) & ~0x1f);
			OSSetArenaLo(debugArenaLo);
		}

		// set up top of heap (ArenaHi)
		// grab address from BootInfo if it exists, otherwise use default __ArenaHi
		OSSetArenaHi((BootInfo->arenaHi == NULL) ? __ArenaHi : BootInfo->arenaHi);

		// OS INIT AND REPORT //
		// initialise a whole bunch of OS stuff
		OSExceptionInit();
		__OSInitSystemCall();
		OSInitAlarm();
		__OSModuleInit();
		__OSInterruptInit();
		__OSSetInterruptHandler(__OS_INTERRUPT_PI_RSW, (void*)__OSResetSWInterruptHandler);
		__OSContextInit();
		__OSCacheInit();
		EXIInit();
		SIInit();
		__OSInitSram();
		__OSThreadInit();
		__OSInitAudioSystem();
		PPCMthid2(PPCMfhid2() & 0xBFFFFFFF);
		if ((BOOL)__OSInIPL == FALSE) {
			__OSInitMemoryProtection();
		}

		// begin OS reporting
		OSReport("\nDolphin OS\n");
		OSReport("Kernel built : %s %s\n", "Nov 26 2003", "05:18:37");
		OSReport("Console Type : ");

		// this is a function in the same file, but it doesn't seem to match
		// inputConsoleType = OSGetConsoleType();

		// inputConsoleType = (BootInfo == NULL || (inputConsoleType = BootInfo->consoleType) == 0) ? 0x10000002 : BootInfo->consoleType;
		if (BootInfo == NULL || (inputConsoleType = BootInfo->consoleType) == 0) {
			inputConsoleType = OS_CONSOLE_ARTHUR; // default console type
		} else {
			inputConsoleType = BootInfo->consoleType;
		}

		// work out what console type this corresponds to and report it
		// consoleTypeSwitchHi = inputConsoleType & 0xF0000000;
		switch (inputConsoleType & 0xF0000000) { // check "first" byte
		case OS_CONSOLE_RETAIL:
			OSReport("Retail %d\n", inputConsoleType);
			break;
		case OS_CONSOLE_DEVELOPMENT:
		case OS_CONSOLE_TDEVKIT:
			// consoleTypeSwitchLo = (inputConsoleType & 0x0FFFFFFF);
			switch (inputConsoleType & 0x0FFFFFFF) { // if "first" byte is 2, check "the rest"
			case OS_CONSOLE_EMULATOR:
				OSReport("Mac Emulator\n");
				break;
			case OS_CONSOLE_PC_EMULATOR:
				OSReport("PC Emulator\n");
				break;
			case OS_CONSOLE_ARTHUR:
				OSReport("EPPC Arthur\n");
				break;
			case OS_CONSOLE_MINNOW:
				OSReport("EPPC Minnow\n");
				break;
			default: // if none of the above, just report the info we have
				tdev = (u32)inputConsoleType & 0x0FFFFFFF;
				OSReport("Development HW%d (%08x)\n", tdev - 3, inputConsoleType);
				break;
			}
			break;
		default: // if none of the above, just report the info we have
			OSReport("%08x\n", inputConsoleType);
			break;
		}

		// report memory size
		OSReport("Memory %d MB\n", (u32)BootInfo->memorySize >> 0x14U);
		// report heap bounds
		OSReport("Arena : 0x%x - 0x%x\n", OSGetArenaLo(), OSGetArenaHi());
		// report OS version
		OSRegisterVersion(__OSVersion);

		// if location of debug flag exists, and flag is >= 2, enable MetroTRKInterrupts
		if (BI2DebugFlag && ((*BI2DebugFlag) >= 2)) {
			EnableMetroTRKInterrupts();
		}

		// free up memory and re-enable things
		ClearArena();
		OSEnableInterrupts();

		// check if we can load OS from IPL; if not, grab it from DVD (?)
		if ((BOOL)__OSInIPL == FALSE) {
			DVDInit();
			if ((BOOL)__OSIsGcam) {
				__OSDeviceCode = 0x9000;
				return;
			}
			DCInvalidateRange(&DriveInfo, sizeof(DriveInfo));
			DVDInquiryAsync((char*)&DriveBlock, &DriveInfo, InquiryCallback);
		}
	}
}

static u32 __OSExceptionLocations[] = {
	0x00000100, // 0  System reset
	0x00000200, // 1  Machine check
	0x00000300, // 2  DSI - seg fault or DABR
	0x00000400, // 3  ISI
	0x00000500, // 4  External interrupt
	0x00000600, // 5  Alignment
	0x00000700, // 6  Program
	0x00000800, // 7  FP Unavailable
	0x00000900, // 8  Decrementer
	0x00000C00, // 9  System call
	0x00000D00, // 10 Trace
	0x00000F00, // 11 Performance monitor
	0x00001300, // 12 Instruction address breakpoint.
	0x00001400, // 13 System management interrupt
	0x00001700  // 14 Thermal interrupt
};

// dummy entry points to the OS Exception vector
void __OSEVStart(void);
void __OSEVEnd(void);
void __OSEVSetNumber(void);
void __OSExceptionVector(void);

void __DBVECTOR(void);
void __OSDBINTSTART(void);
void __OSDBINTEND(void);
void __OSDBJUMPSTART(void);
void __OSDBJUMPEND(void);

#define NOP 0x60000000

/**
 * @note Address: 0x800EB654
 * @note Size: 0x280
 */
static void OSExceptionInit(void)
{
	__OSException exception;
	void* destAddr;

	// These two vars help us change the exception number embedded
	// in the exception handler code.
	u32* opCodeAddr;
	u32 oldOpCode;

	// Address range of the actual code to be copied.
	u8* handlerStart;
	u32 handlerSize;

	// Install the first level exception vector.
	opCodeAddr   = (u32*)__OSEVSetNumber;
	oldOpCode    = *opCodeAddr;
	handlerStart = (u8*)__OSEVStart;
	handlerSize  = (u32)((u8*)__OSEVEnd - (u8*)__OSEVStart);

	// Install the DB integrator, only if we are the first OSInit to be run
	destAddr = (void*)OSPhysicalToCached(OS_DBJUMPPOINT_ADDR);
	if (*(u32*)destAddr == 0) // Lomem should be zero cleared only once by BS2
	{
		DBPrintf("Installing OSDBIntegrator\n");
		memcpy(destAddr, (void*)__OSDBINTSTART, (u32)__OSDBINTEND - (u32)__OSDBINTSTART);
		DCFlushRangeNoSync(destAddr, (u32)__OSDBINTEND - (u32)__OSDBINTSTART);
		__sync();
		ICInvalidateRange(destAddr, (u32)__OSDBINTEND - (u32)__OSDBINTSTART);
	}

	// Copy the right vector into the table
	for (exception = 0; exception < __OS_EXCEPTION_MAX; exception++) {
		if (BI2DebugFlag && (*BI2DebugFlag >= 2) && __DBIsExceptionMarked(exception)) {
			// this DBPrintf is suspicious.
			DBPrintf(">>> OSINIT: exception %d commandeered by TRK\n", exception);
			continue;
		}

		// Modify the copy of code in text before transferring
		// to the exception table.
		*opCodeAddr = oldOpCode | exception;

		// Modify opcodes at __DBVECTOR if necessary
		if (__DBIsExceptionMarked(exception)) {
			DBPrintf(">>> OSINIT: exception %d vectored to debugger\n", exception);
			memcpy((void*)__DBVECTOR, (void*)__OSDBJUMPSTART, (u32)__OSDBJUMPEND - (u32)__OSDBJUMPSTART);
		} else {
			// make sure the opcodes are still nop
			u32* ops = (u32*)__DBVECTOR;
			int cb;

			for (cb = 0; cb < (u32)__OSDBJUMPEND - (u32)__OSDBJUMPSTART; cb += sizeof(u32)) {
				*ops++ = NOP;
			}
		}

		// Install the modified handler.
		destAddr = (void*)OSPhysicalToCached(__OSExceptionLocations[(u32)exception]);
		memcpy(destAddr, handlerStart, handlerSize);
		DCFlushRangeNoSync(destAddr, handlerSize);
		__sync();
		ICInvalidateRange(destAddr, handlerSize);
	}

	// initialize pointer to exception table
	OSExceptionTable = OSPhysicalToCached(OS_EXCEPTIONTABLE_ADDR);

	// install default exception handlers
	for (exception = 0; exception < __OS_EXCEPTION_MAX; exception++) {
		__OSSetExceptionHandler(exception, OSDefaultExceptionHandler);
	}

	// restore the old opcode, so that we can re-start an application without
	// downloading the text segments
	*opCodeAddr = oldOpCode;

	DBPrintf("Exceptions initialized...\n");
}

/**
 * @note Address: 0x800EB8D4
 * @note Size: 0x24
 */
ASM static void __OSDBIntegrator(void) {
#ifdef __MWERKS__ // clang-format off
	nofralloc
entry __OSDBINTSTART
	li      r5, OS_DBINTERFACE_ADDR
	mflr    r3
	stw     r3, DB_EXCEPTIONRET_OFFSET(r5)
	lwz     r3, DB_EXCEPTIONDEST_OFFSET(r5)
	oris    r3, r3, OS_CACHED_REGION_PREFIX
	mtlr    r3
	li      r3, 0x30 // MSR_IR | MSR_DR     // turn on memory addressing
	mtmsr   r3
	blr
entry __OSDBINTEND
#endif // clang-format on
}

/**
 * @note Address: 0x800EB8F8
 * @note Size: 0x4
 */
ASM static void __OSDBJump(void) {
#ifdef __MWERKS__ // clang-format off
	nofralloc
entry __OSDBJUMPSTART
	bla     OS_DBJUMPPOINT_ADDR
entry __OSDBJUMPEND
#endif // clang-format on
}

/**
 * @note Address: 0x800EB8FC
 * @note Size: 0x1C
 */
__OSExceptionHandler __OSSetExceptionHandler(__OSException exception, __OSExceptionHandler handler)
{
	__OSExceptionHandler oldHandler;
	oldHandler                  = OSExceptionTable[exception];
	OSExceptionTable[exception] = handler;
	return oldHandler;
}

/**
 * @note Address: 0x800EB918
 * @note Size: 0x14
 */
__OSExceptionHandler __OSGetExceptionHandler(__OSException exception) { return OSExceptionTable[exception]; }

/**
 * @note Address: 0x800EB92C
 * @note Size: 0x9C
 */
ASM static void OSExceptionVector(void)
{
#ifdef __MWERKS__ // clang-format off
	nofralloc

entry __OSEVStart
	// Save r4 into SPRG0
	mtsprg  0, r4

	// Load current context physical address into r4
	lwz     r4, OS_CURRENTCONTEXT_PADDR

	// Save r3 - r5 into the current context
	stw     r3, OS_CONTEXT_R3(r4)
	mfsprg  r3, 0
	stw     r3, OS_CONTEXT_R4(r4)
	stw     r5, OS_CONTEXT_R5(r4)

	lhz     r3, OS_CONTEXT_STATE(r4)
	ori     r3, r3, OS_CONTEXT_STATE_EXC
	sth     r3, OS_CONTEXT_STATE(r4)

	// Save misc registers
	mfcr    r3
	stw     r3, OS_CONTEXT_CR(r4)
	mflr    r3
	stw     r3, OS_CONTEXT_LR(r4)
	mfctr   r3
	stw     r3, OS_CONTEXT_CTR(r4)
	mfxer   r3
	stw     r3, OS_CONTEXT_XER(r4)
	mfsrr0  r3
	stw     r3, OS_CONTEXT_SRR0(r4)
	mfsrr1  r3
	stw     r3, OS_CONTEXT_SRR1(r4)
	mr      r5, r3

entry __DBVECTOR
	nop

	// Set SRR1[IR|DR] to turn on address
	// translation at the next RFI
	mfmsr   r3
	ori     r3, r3, 0x30
	mtsrr1  r3

	// This lets us change the exception number based on the
	// exception we're installing.
entry __OSEVSetNumber
	addi    r3, 0, 0x0000

	// Load current context virtual address into r4
	lwz     r4, 0xD4

	// Check non-recoverable interrupt
	rlwinm. r5, r5, 0, MSR_RI_BIT, MSR_RI_BIT
	bne     recoverable
	addis   r5, 0,  OSDefaultExceptionHandler@ha
	addi    r5, r5, OSDefaultExceptionHandler@l
	mtsrr0  r5
	rfi
	// NOT REACHED HERE

recoverable:
	// Locate exception handler.
	rlwinm  r5, r3, 2, 22, 29               // r5 contains exception*4
	lwz     r5, OS_EXCEPTIONTABLE_ADDR(r5)
	mtsrr0  r5

	// Final state
	// r3 - exception number
	// r4 - pointer to context
	// r5 - garbage
	// srr0 - exception handler
	// srr1 - address translation enalbed, not yet recoverable

	rfi
	// NOT REACHED HERE
	// The handler will restore state

entry __OSEVEnd
	nop
#endif // clang-format on
}

/**
 * @note Address: 0x800EB9C8
 * @note Size: 0x58
 */
ASM void OSDefaultExceptionHandler(register __OSException exception, register OSContext* context)
{
#pragma unused(exception)
#ifdef __MWERKS__ // clang-format off
	nofralloc
	OS_EXCEPTION_SAVE_GPRS(context)
	// Load DSISR and DAR
	mfdsisr r5
	mfdar   r6

	stwu    r1,-8(r1)
	b       __OSUnhandledException
	// NOT REACHED HERE
#endif // clang-format on
}

/**
 * @note Address: 0x800EBA20
 * @note Size: 0x54
 */
void __OSPSInit(void)
{
	PPCMthid2(PPCMfhid2() | 0xA0000000);
	ICFlashInvalidate();
	__sync();
#ifdef __MWERKS__ // clang-format off
	asm {
		li      r3, 0
		mtspr   GQR0, r3
		mtspr   GQR1, r3
		mtspr   GQR2, r3
		mtspr   GQR3, r3
		mtspr   GQR4, r3
		mtspr   GQR5, r3
		mtspr   GQR6, r3
		mtspr   GQR7, r3
	}
#endif // clang-format on
}

/**
 * @note Address: 0x800EBA74
 * @note Size: 0x14
 */
extern vu32 __DIRegs[];
#define DI_CONFIG_IDX         0x9
#define DI_CONFIG_CONFIG_MASK 0xFF
u32 __OSGetDIConfig(void) { return (__DIRegs[DI_CONFIG_IDX] & DI_CONFIG_CONFIG_MASK); }

/**
 * @note Address: 0x800EBA88
 * @note Size: 0x2C
 */
void OSRegisterVersion(const char* id) { OSReport("%s\n", id); }
