#include "types.h"
#include "Dolphin/os.h"
#include "Dolphin/PPCArch.h"

static f64 ZeroF;
static f32 ZeroPS[2];

__declspec(section ".init") extern char _db_stack_end[];

// memory locations for important stuff
#define OS_BASE_BEGINNING     0x80000000
#define OS_BI2_DEBUG_ADDRESS  0x800000F4
#define OS_BASE_CACHED        0x80003000
#define OS_DVD_DEVICECODE     0x800030E6
#define OS_DEBUG_ADDRESS_1    0x800030E8
#define OS_DEBUG_ADDRESS_2    0x800030E9
#define RETAIL                0x0
#define DEVKIT                0x10000000
#define TDEVKIT               0x20000000
#define MAC_EMULATOR          0x10000000
#define PC_EMULATOR           0x10000001
#define ARTHUR                0x10000002
#define MINNOW                0x10000003
#define __OS_INTERRUPT_PI_RSW 0x16

extern u8 __ArenaHi[];
extern u8 __ArenaLo[];
extern u32 __DVDLongFileNameFlag;
extern u32 __PADSpec;
// OS version
char* __OSVersion = "<< Dolphin SDK - OS\trelease build: Nov 26 2003 05:18:37 (0x2301) >>";

static BOOL AreWeInitialized = FALSE;

// main workhorse functions
void ClearArena();
void DVDInit();
void DVDInquiryAsync(void*, void*, void*);
void EXIInit();
void EnableMetroTRKInterrupts();
void OSEnableInterrupts();
void OSExceptionInit();
void OSInitAlarm();
void OSRegisterVersion(char*);
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
void __OSSetInterruptHandler(int, void*);
void __OSThreadInit();
extern s32 __OSIsGcam;
extern char* __OSResetSWInterruptHandler[];

typedef struct DVDCommandBlock DVDCommandBlock;
typedef struct DVDDriveInfo DVDDriveInfo;
typedef void (*DVDCBCallback)(s32 result, DVDCommandBlock* block);
struct DVDCommandBlock {
	DVDCommandBlock* next;
	DVDCommandBlock* prev;
	u32 command;
	s32 state;
	u32 offset;
	u32 length;
	void* addr;
	u32 currTransferSize;
	u32 transferredSize;
	DVDDiskID* id;
	DVDCBCallback callback;
	void* userData;
};
struct DVDDriveInfo {
	u16 _00;
	u16 deviceCode;
	u32 _04;
	u32 _08;
	u32 _0C;
	u32 _10;
	u32 _14;
	u32 _18;
	u32 _1C;
};

vu16 __OSDeviceCode : (OS_BASE_CACHED | OS_DVD_DEVICECODE);
static DVDDriveInfo DriveInfo ATTRIBUTE_ALIGN(32);
static DVDCommandBlock DriveBlock;

// flags and system info
BOOL __OSInIPL;
static volatile u32* BI2DebugFlag;
static u32* BI2DebugFlagHolder;
u64 __OSStartTime;

static OSBootInfo* BootInfo;

/*
 * --INFO--
 * Address:	........
 * Size:	00000C
 */
void __OSIsDebuggerPresent(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800EAFC8
 * Size:	000128
 */
// clang-format off
asm void __OSFPRInit(void)
{
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
}
// clang-format on
/*
 * --INFO--
 * Address:	........
 * Size:	000028
 */
void DisableWriteGatherPipe(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800EB0F0
 * Size:	000028
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

/*
 * --INFO--
 * Address:	800EB118
 * Size:	000128
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

/*
 * --INFO--
 * Address:	800EB240
 * Size:	00003C
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

/*
 * --INFO--
 * Address:	800EB27C
 * Size:	0003D8
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
		BI2DebugFlag = 0;                              // debug flag from the DVD BI2 header
		BootInfo     = (OSBootInfo*)OS_BASE_BEGINNING; // set pointer to BootInfo

		__DVDLongFileNameFlag = (u32)0; // flag to tell us whether we make it through the debug loading

		// time to grab a bunch of debug info from the DVD
		// the address for where the BI2 debug info is, is stored at OS_BI2_DEBUG_ADDRESS
		DebugInfo = (BI2Debug*)*((u32*)OS_BI2_DEBUG_ADDRESS);

		// if the debug info address exists, grab some debug info
		if (DebugInfo != NULL) {
			BI2DebugFlag               = &DebugInfo->debugFlag;     // debug flag from DVD BI2
			__PADSpec                  = (u32)DebugInfo->padSpec;   // some other info from DVD BI2
			*((u8*)OS_DEBUG_ADDRESS_1) = (u8)*BI2DebugFlag;         // store flag in mem
			*((u8*)OS_DEBUG_ADDRESS_2) = (u8)__PADSpec;             // store other info in mem
		} else if (BootInfo->arenaHi) {                             // if the top of the heap is already set
			BI2DebugFlagHolder = (u32*)*((u8*)OS_DEBUG_ADDRESS_1);  // grab whatever's stored at 0x800030E8
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
			inputConsoleType = ARTHUR; // default console type
		} else {
			inputConsoleType = BootInfo->consoleType;
		}

		// work out what console type this corresponds to and report it
		// consoleTypeSwitchHi = inputConsoleType & 0xF0000000;
		switch (inputConsoleType & 0xF0000000) { // check "first" byte
		case RETAIL:
			OSReport("Retail %d\n", inputConsoleType);
			break;
		case DEVKIT:
		case TDEVKIT:
			// consoleTypeSwitchLo = (inputConsoleType & 0x0FFFFFFF);
			switch (inputConsoleType & 0x0FFFFFFF) { // if "first" byte is 2, check "the rest"
			case MAC_EMULATOR:
				OSReport("Mac Emulator\n");
				break;
			case PC_EMULATOR:
				OSReport("PC Emulator\n");
				break;
			case ARTHUR:
				OSReport("EPPC Arthur\n");
				break;
			case MINNOW:
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

/*
 * --INFO--
 * Address:	800EB654
 * Size:	000280
 */
void OSExceptionInit(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x38(r1)
	  stmw      r20, 0x8(r1)
	  lis       r3, 0x8000
	  lwz       r0, 0x60(r3)
	  lis       r4, 0x800F
	  subi      r30, r4, 0x466C
	  lis       r5, 0x800F
	  lwz       r25, 0x0(r30)
	  lis       r4, 0x800F
	  subi      r5, r5, 0x46D4
	  subi      r4, r4, 0x463C
	  lis       r6, 0x804B
	  cmplwi    r0, 0
	  mr        r24, r5
	  subi      r29, r6, 0x7700
	  sub       r23, r4, r5
	  addi      r20, r3, 0x60
	  bne-      .loc_0x98
	  addi      r3, r29, 0x160
	  crclr     6, 0x6
	  bl        -0x10A4C
	  lis       r4, 0x800F
	  lis       r3, 0x800F
	  subi      r0, r3, 0x4708
	  subi      r4, r4, 0x472C
	  sub       r21, r0, r4
	  mr        r3, r20
	  mr        r5, r21
	  bl        -0xE6530
	  mr        r3, r20
	  mr        r4, r21
	  bl        0x10A0
	  sync
	  mr        r3, r20
	  mr        r4, r21
	  bl        0x1114

	.loc_0x98:
	  lis       r4, 0x800F
	  lis       r3, 0x800F
	  subi      r31, r4, 0x4708
	  subi      r0, r3, 0x4704
	  addi      r28, r29, 0x124
	  sub       r27, r0, r31
	  li        r26, 0
	  b         .loc_0xB8

	.loc_0xB8:
	  lis       r3, 0x800F
	  subi      r21, r3, 0x467C
	  lis       r22, 0x6000
	  b         .loc_0xC8

	.loc_0xC8:
	  b         .loc_0x210

	.loc_0xCC:
	  lwz       r3, -0x70EC(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x108
	  lwz       r0, 0x0(r3)
	  cmplwi    r0, 0x2
	  blt-      .loc_0x108
	  mr        r3, r26
	  bl        -0x10AF8
	  cmpwi     r3, 0
	  beq-      .loc_0x108
	  addi      r3, r29, 0x17C
	  crclr     6, 0x6
	  rlwinm    r4,r26,0,24,31
	  bl        -0x10AF4
	  b         .loc_0x208

	.loc_0x108:
	  rlwinm    r20,r26,0,24,31
	  or        r0, r25, r20
	  stw       r0, 0x0(r30)
	  mr        r3, r26
	  bl        -0x10B28
	  cmpwi     r3, 0
	  beq-      .loc_0x148
	  mr        r4, r20
	  crclr     6, 0x6
	  addi      r3, r29, 0x1AC
	  bl        -0x10B24
	  mr        r3, r21
	  mr        r4, r31
	  mr        r5, r27
	  bl        -0xE65F8
	  b         .loc_0x1D4

	.loc_0x148:
	  mr        r4, r21
	  b         .loc_0x150

	.loc_0x150:
	  cmplwi    r27, 0
	  addi      r3, r27, 0x3
	  rlwinm    r3,r3,30,2,31
	  ble-      .loc_0x1D4
	  rlwinm    r0,r3,29,3,31
	  cmplwi    r0, 0
	  mtctr     r0
	  beq-      .loc_0x1C0
	  b         .loc_0x174

	.loc_0x174:
	  stw       r22, 0x0(r4)
	  addi      r4, r4, 0x4
	  stw       r22, 0x0(r4)
	  addi      r4, r4, 0x4
	  stw       r22, 0x0(r4)
	  addi      r4, r4, 0x4
	  stw       r22, 0x0(r4)
	  addi      r4, r4, 0x4
	  stw       r22, 0x0(r4)
	  addi      r4, r4, 0x4
	  stw       r22, 0x0(r4)
	  addi      r4, r4, 0x4
	  stw       r22, 0x0(r4)
	  addi      r4, r4, 0x4
	  stw       r22, 0x0(r4)
	  addi      r4, r4, 0x4
	  bdnz+     .loc_0x174
	  andi.     r3, r3, 0x7
	  beq-      .loc_0x1D4

	.loc_0x1C0:
	  mtctr     r3
	  b         .loc_0x1C8

	.loc_0x1C8:
	  stw       r22, 0x0(r4)
	  addi      r4, r4, 0x4
	  bdnz+     .loc_0x1C8

	.loc_0x1D4:
	  lwz       r3, 0x0(r28)
	  mr        r4, r24
	  mr        r5, r23
	  subis     r20, r3, 0x8000
	  mr        r3, r20
	  bl        -0xE66A0
	  mr        r3, r20
	  mr        r4, r23
	  bl        0xF30
	  sync
	  mr        r3, r20
	  mr        r4, r23
	  bl        0xFA4

	.loc_0x208:
	  addi      r28, r28, 0x4
	  addi      r26, r26, 0x1

	.loc_0x210:
	  rlwinm    r0,r26,0,24,31
	  cmplwi    r0, 0xF
	  blt+      .loc_0xCC
	  lis       r3, 0x8000
	  addi      r0, r3, 0x3000
	  stw       r0, -0x70CC(r13)
	  li        r20, 0
	  b         .loc_0x230

	.loc_0x230:
	  lis       r3, 0x800F
	  subi      r23, r3, 0x4638
	  b         .loc_0x23C

	.loc_0x23C:
	  b         .loc_0x250

	.loc_0x240:
	  mr        r3, r20
	  mr        r4, r23
	  bl        0x60
	  addi      r20, r20, 0x1

	.loc_0x250:
	  rlwinm    r0,r20,0,24,31
	  cmplwi    r0, 0xF
	  blt+      .loc_0x240
	  stw       r25, 0x0(r30)
	  addi      r3, r29, 0x1DC
	  crclr     6, 0x6
	  bl        -0x10C5C
	  lmw       r20, 0x8(r1)
	  lwz       r0, 0x3C(r1)
	  addi      r1, r1, 0x38
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800EB8D4
 * Size:	000024
 */
void __OSDBIntegrator(void)
{
	/*
	.loc_0x0:
	  li        r5, 0x40
	  mflr      r3
	  stw       r3, 0xC(r5)
	  lwz       r3, 0x8(r5)
	  oris      r3, r3, 0x8000
	  mtlr      r3
	  li        r3, 0x30
	  mtmsr     r3
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800EB8F8
 * Size:	000004
 */
void __OSDBJump(void)
{
	/*
	.loc_0x0:
	  bla       0x60
	*/
}

/*
 * --INFO--
 * Address:	800EB8FC
 * Size:	00001C
 */
void __OSSetExceptionHandler(void)
{
	/*
	.loc_0x0:
	  rlwinm    r0,r3,0,24,31
	  lwz       r3, -0x70CC(r13)
	  rlwinm    r0,r0,2,0,29
	  add       r5, r3, r0
	  lwz       r3, 0x0(r5)
	  stw       r4, 0x0(r5)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800EB918
 * Size:	000014
 */
void __OSGetExceptionHandler(void)
{
	/*
	.loc_0x0:
	  rlwinm    r0,r3,0,24,31
	  lwz       r3, -0x70CC(r13)
	  rlwinm    r0,r0,2,0,29
	  lwzx      r3, r3, r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800EB92C
 * Size:	00009C
 */
void OSExceptionVector(void)
{
	/*
	.loc_0x0:
	  mtsprg    0, r4
	  lwz       r4, 0xC0(r0)
	  stw       r3, 0xC(r4)
	  mfsprg    r3, 0
	  stw       r3, 0x10(r4)
	  stw       r5, 0x14(r4)
	  lhz       r3, 0x1A2(r4)
	  ori       r3, r3, 0x2
	  sth       r3, 0x1A2(r4)
	  mfcr      r3
	  stw       r3, 0x80(r4)
	  mflr      r3
	  stw       r3, 0x84(r4)
	  mfctr     r3
	  stw       r3, 0x88(r4)
	  mfxer     r3
	  stw       r3, 0x8C(r4)
	  mfsrr0    r3
	  stw       r3, 0x198(r4)
	  mfsrr1    r3
	  stw       r3, 0x19C(r4)
	  mr        r5, r3
	  nop
	  mfmsr     r3
	  ori       r3, r3, 0x30
	  mtsrr1    r3
	  li        r3, 0
	  lwz       r4, 0xD4(r0)
	  rlwinm.   r5,r5,0,30,30
	  bne-      .loc_0x88
	  lis       r5, 0x800F
	  subi      r5, r5, 0x4638
	  mtsrr0    r5
	  rfi

	.loc_0x88:
	  rlwinm    r5,r3,2,22,29
	  lwz       r5, 0x3000(r5)
	  mtsrr0    r5
	  rfi
	  nop
	*/
}

/*
 * --INFO--
 * Address:	800EB9C8
 * Size:	000058
 */
void OSDefaultExceptionHandler(void)
{
	/*
	.loc_0x0:
	  stw       r0, 0x0(r4)
	  stw       r1, 0x4(r4)
	  stw       r2, 0x8(r4)
	  stmw      r6, 0x18(r4)
	  mfspr     r0, 0x391
	  stw       r0, 0x1A8(r4)
	  mfspr     r0, 0x392
	  stw       r0, 0x1AC(r4)
	  mfspr     r0, 0x393
	  stw       r0, 0x1B0(r4)
	  mfspr     r0, 0x394
	  stw       r0, 0x1B4(r4)
	  mfspr     r0, 0x395
	  stw       r0, 0x1B8(r4)
	  mfspr     r0, 0x396
	  stw       r0, 0x1BC(r4)
	  mfspr     r0, 0x397
	  stw       r0, 0x1C0(r4)
	  mfdsisr   r5
	  mfdar     r6
	  stwu      r1, -0x8(r1)
	  b         0x2094
	*/
}

/*
 * --INFO--
 * Address:	800EBA20
 * Size:	000054
 */
void __OSPSInit(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x8(r1)
	  bl        -0x17408
	  oris      r3, r3, 0xA000
	  bl        -0x17408
	  bl        0xDF8
	  sync
	  li        r3, 0
	  mtspr     912, r3
	  mtspr     913, r3
	  mtspr     914, r3
	  mtspr     915, r3
	  mtspr     916, r3
	  mtspr     917, r3
	  mtspr     918, r3
	  mtspr     919, r3
	  lwz       r0, 0xC(r1)
	  addi      r1, r1, 0x8
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800EBA74
 * Size:	000014
 */
void __OSGetDIConfig(void)
{
	/*
	.loc_0x0:
	  lis       r3, 0xCC00
	  addi      r3, r3, 0x6000
	  lwz       r0, 0x24(r3)
	  rlwinm    r3,r0,0,24,31
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800EBA88
 * Size:	00002C
 */
void OSRegisterVersion(char* version)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x8(r1)
	  mr        r4, r3
	  crclr     6, 0x6
	  subi      r3, r13, 0x7CAC
	  bl        0x1C4C
	  lwz       r0, 0xC(r1)
	  addi      r1, r1, 0x8
	  mtlr      r0
	  blr
	*/
}
