#include "Dolphin/os.h"
#include "Dolphin/stl.h"
#include "JSystem/JKR/JKRHeap.h"
#include "JSystem/JKR/JKRFileCache.h"
#include "JSystem/JFW/JFWSystem.h"
#include "JSystem/JUT/JUTException.h"
#include "JSystem/JUT/JUTConsole.h"
#include "JSystem/JUT/JUTVideo.h"
#include "PSM/Factory.h"
#include "System.h"
#include "ResetManager.h"
#include "Resource.h"
#include "DvdStatus.h"
#include "GameFlow.h"
#include "Controller.h"
#include "ARAM.h"
#include "Pikmin2ARAM.h"
#include "MemoryCardMgr.h"
#include "Game/GameConfig.h"
#include "P2JME/P2JME.h"
#include "Game/PelletList.h"
#include "Game/gameStages.h"
//#include "Game/gamePlayData.h"
#include "Game/MoviePlayer.h"
#include "PSSystem/PSGame.h"
#include "Dolphin/rand.h"
#include "Game/Data.h"
#include "JSystem/JFW/JFWDisplay.h"
#include "PSSystem/PSSystemIF.h"

/*
    Generated from dpostproc

    .section .ctors, "wa"  # 0x80472F00 - 0x804732C0
        .4byte __sinit_system_cpp

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global gStrSystem_CPP
    gStrSystem_CPP:
        .asciz "system.cpp"
        .skip 0x1
    .global gStrSystem_MemoryAllocError
    gStrSystem_MemoryAllocError:
        .asciz "Memory Alloc Error!\n%x (size %d)
   align(%d)\nRestTotal=%d\nRestFree =%d\n" .skip 0x2 .global
   gStrSystem_InOnLine gStrSystem_InOnLine: .asciz "%s in \"%s\" on line %d\n"
        .skip 0x1
    .global lbl_80499834
    lbl_80499834:
        .asciz "%s in \"%s\" on\n line %d\n"
        .short 0x0100
        .short 0x0200
        .short 0x0400
        .short 0x0020
        .short 0x0040
        .short 0x0001
        .short 0x0004
        .short 0x0008
        .short 0x0002
        .short 0x0010
        .short 0x0000
        .short 0x0000
        .asciz "--- Game debug information ---\n"
        .4byte 0x83528393
        .4byte 0x835C815B
        .4byte 0x838B82AA
        .4byte 0x82A082E8
        .4byte 0x82DC82B9
        .4byte 0x82F10A00
        .asciz "aramStrm"
        .skip 3
        .asciz "cpuLockCount %d retraceCount %d\n"
        .skip 3
        .asciz "system/retrace"
        .skip 1
        .asciz "CPU LOCKED!"
    .global str_MapFileName
    str_MapFileName:
        .asciz "/pikmin2UP.map"
        .skip 1
        .asciz "construct"
        .skip 2
        .asciz "DvdThread"
        .skip 2
        .asciz "SysTimers"
        .skip 2
        .asciz "ResetManager"
        .skip 3
        .asciz "ResourceMgr2D"
        .skip 2
    .global lbl_8049993C
    lbl_8049993C:
        .asciz "P2Assert"
        .skip 3
        .asciz "constructWithDvdAccess1st"
        .skip 2
        .asciz "gameConfig.ini"
        .skip 1
        .asciz "constructWithDvdAccess2nd"
        .skip 2
        .asciz "P2JME::Mgr"
        .skip 1
        .asciz "SoundSystem"
        .asciz "/AudioRes"
        .skip 2
        .asciz "PSound.aaf"
        .skip 1
        .asciz "PSGame.h"
        .skip 3
        .asciz "unknown renderMode:%d \n"
    .global lbl_804999E4
    lbl_804999E4:
        .asciz "no display"
        .skip 0x1

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global localNtsc608x448IntDfProg
    localNtsc608x448IntDfProg:
        .4byte 0x00000002
        .4byte 0x026001C0
        .4byte 0x01C0001B
        .4byte 0x0010029A
        .4byte 0x01C00000
        .4byte 0x00000000
        .4byte 0x00000606
        .4byte 0x06060606
        .4byte 0x06060606
        .4byte 0x06060606
        .4byte 0x06060606
        .4byte 0x06060606
        .4byte 0x06060000
        .4byte 0x15161500
        .4byte 0x00000000
    .global localNtsc608x448IntDf
    localNtsc608x448IntDf:
        .4byte 0x00000000
        .4byte 0x026001C0
        .4byte 0x01C0001B
        .4byte 0x0010029A
        .4byte 0x01C00000
        .4byte 0x00000001
        .4byte 0x00000606
        .4byte 0x06060606
        .4byte 0x06060606
        .4byte 0x06060606
        .4byte 0x06060606
        .4byte 0x06060606
        .4byte 0x06060707
        .4byte 0x0C0C0C07
        .4byte 0x07000000
    .global localPal608x448IntDf
    localPal608x448IntDf:
        .4byte 0x00000004
        .4byte 0x026001C0
        .4byte 0x021A0019
        .4byte 0x0012029E
        .4byte 0x021A0000
        .4byte 0x00000001
        .4byte 0x00000606
        .4byte 0x06060606
        .4byte 0x06060606
        .4byte 0x06060606
        .4byte 0x06060606
        .4byte 0x06060606
        .4byte 0x06060707
        .4byte 0x0C0C0C07
        .4byte 0x07000000
    .global localPal60608x448IntDf
    localPal60608x448IntDf:
        .4byte 0x00000014
        .4byte 0x026001C0
        .4byte 0x01C0001B
        .4byte 0x0010029A
        .4byte 0x01C00000
        .4byte 0x00000001
        .4byte 0x00000606
        .4byte 0x06060606
        .4byte 0x06060606
        .4byte 0x06060606
        .4byte 0x06060606
        .4byte 0x06060606
        .4byte 0x06060707
        .4byte 0x0C0C0C07
        .4byte 0x07000000
    .global sRenderModeTable
    sRenderModeTable:
        .4byte localNtsc608x448IntDf
        .4byte localNtsc608x448IntDfProg
        .4byte localPal608x448IntDf
        .4byte localPal60608x448IntDf
    .global lbl_804EBB40
    lbl_804EBB40:
        .4byte 0x00000000
        .4byte 0xFFFFFFFF
        .4byte constructWithDvdAccessFirst__6SystemFv
    .global lbl_804EBB4C
    lbl_804EBB4C:
        .4byte 0x00000000
        .4byte 0xFFFFFFFF
        .4byte constructWithDvdAccessSecond__6SystemFv
    .global __vt__9AppThread
    __vt__9AppThread:
        .4byte 0
        .4byte 0
        .4byte __dt__9AppThreadFv
        .4byte run__9JKRThreadFv
    .global "__vt__17Delegate<6System>"
    "__vt__17Delegate<6System>":
        .4byte 0
        .4byte 0
        .4byte "invoke__17Delegate<6System>Fv"
    .global __vt__Q23PSM7Factory
    __vt__Q23PSM7Factory:
        .4byte 0
        .4byte 0
        .4byte newSceneMgr__Q23PSM7FactoryFv

    .section .sdata, "wa"  # 0x80514680 - 0x80514D80
    .global sUseABXCommand
    sUseABXCommand:
        .byte 0x01
        .byte 0x00
        .byte 0x00
        .byte 0x00
    .global cMapFileName
    cMapFileName:
        .4byte str_MapFileName

    .section .sbss # 0x80514D80 - 0x80516360
    .global mRenderMode__6System
    mRenderMode__6System:
        .skip 0x4
    .global sys
    sys:
        .skip 0x4
    .global sVerifyArg__6System
    sVerifyArg__6System:
        .skip 0x8

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global gStrSystem_Abort
    gStrSystem_Abort:
        .asciz "abort\n"
        .skip 0x1
    .global lbl_80520408
    lbl_80520408:
        .float 0.016666668
    .global lbl_8052040C
    lbl_8052040C:
        .float 1.0
    .global lbl_80520410
    lbl_80520410:
        .float 0.5
    .global lbl_80520414
    lbl_80520414:
        .asciz "ARAMMgr"
        .4byte 0x00000000
    .global lbl_80520420
    lbl_80520420:
        .4byte 0x43300000
        .4byte 0x00000000
    .global lbl_80520428
    lbl_80520428:
        .asciz "sound"
        .skip 0x2
    .global lbl_80520430
    lbl_80520430:
        .float 60.0
        .4byte 0x00000000
    .global lbl_80520438
    lbl_80520438:
        .4byte 0x43300000
        .4byte 0x80000000
*/

struct CallbackObject {
	u32* funcPtr;
	u8 filler[14 - 4];
};

extern CallbackObject exCallbackObject;

/*
 * --INFO--
 * Address:	80421EC4
 * Size:	0000A0
 */
void Pikmin2DefaultMemoryErrorRoutine(void* address, u32 size, int alignment)
{
	JUT_PANICLINE(99, "Memory Alloc Error!\n%x (size %d) align(%d)\nRestTotal=%d\nRestFree =%d\n", address, size, alignment,
	              static_cast<JKRHeap*>(address)->getTotalFreeSize(), static_cast<JKRHeap*>(address)->getFreeSize());

	OSPanic("system.cpp", 101, "abort\n");
}

/*
 * --INFO--
 * Address:	80421F64
 * Size:	000188
 */
void kando_panic_f(bool r3, const char* r4, int line, const char* r6, ...)
{
	va_list list;
	va_start(list, r6);

	char buffer[0xFF];
	vsnprintf(buffer, sizeof(buffer), r6, list);

	if (!JUTException::sConsole) {
		OSPanic(r4, line, buffer);
	}

	char dest[4];
	memcpy(dest, JFWSystem::mainThread->m_thread, 0x2C8);

	void* unknown                               = 0;
	JUTException::sErrorManager->m_stackPointer = unknown;
	exCallbackObject.funcPtr                    = (u32*)preUserCallback;

	if (!JUTException::sErrorManager) {
		OSReport("%s in \"%s\" on line %d\n", buffer, r4, line);
	}

	OSSendMessage(&JUTException::sMessageQueue, (OSMessage*)&exCallbackObject, true);
	OSSuspendThread(OSGetCurrentThread());
}
/*
.loc_0x0:
  stwu      r1, -0x460(r1)
  mflr      r0
  stw       r0, 0x464(r1)
  stmw      r26, 0x448(r1)
  mr        r29, r4
  mr        r30, r5
  bne-      cr1, .loc_0x3C
  stfd      f1, 0x28(r1)
  stfd      f2, 0x30(r1)
  stfd      f3, 0x38(r1)
  stfd      f4, 0x40(r1)
  stfd      f5, 0x48(r1)
  stfd      f6, 0x50(r1)
  stfd      f7, 0x58(r1)
  stfd      f8, 0x60(r1)

.loc_0x3C:
  addi      r11, r1, 0x468
  addi      r0, r1, 0x8
  lis       r12, 0x400
  stw       r3, 0x8(r1)
  lis       r3, 0x8042
  lwz       r31, -0x775C(r13)
  stw       r4, 0xC(r1)
  addi      r28, r3, 0x20EC
  addi      r27, r1, 0x68
  lwz       r26, -0x7770(r13)
  stw       r5, 0x10(r1)
  addi      r3, r1, 0x74
  mr        r5, r6
  li        r4, 0xFF
  stw       r6, 0x14(r1)
  mr        r6, r27
  stw       r7, 0x18(r1)
  stw       r8, 0x1C(r1)
  stw       r9, 0x20(r1)
  stw       r10, 0x24(r1)
  stw       r12, 0x68(r1)
  stw       r11, 0x6C(r1)
  stw       r0, 0x70(r1)
  bl        -0x35A998
  cmplwi    r26, 0
  bne-      .loc_0xB8
  mr        r3, r29
  mr        r4, r30
  addi      r5, r1, 0x74
  crclr     6, 0x6
  bl        -0x3348AC

.loc_0xB8:
  lwz       r4, -0x7630(r13)
  addi      r3, r1, 0x178
  li        r5, 0x2C8
  lwz       r27, 0x2C(r4)
  mr        r4, r27
  bl        -0x41CE94
  lwz       r0, 0x17C(r1)
  lis       r4, 0x804F
  cmplwi    r31, 0
  li        r3, 0xFF
  stw       r0, 0xA0(r26)
  li        r0, 0
  stwu      r28, 0x7C20(r4)
  sth       r3, 0x4(r4)
  stw       r27, 0x8(r4)
  stw       r0, 0xC(r4)
  stw       r0, 0x10(r4)
  beq-      .loc_0x110
  beq-      .loc_0x12C
  lwz       r0, 0x58(r31)
  rlwinm.   r0,r0,0,30,30
  bne-      .loc_0x12C

.loc_0x110:
  lis       r3, 0x804A
  mr        r5, r29
  subi      r3, r3, 0x67E4
  mr        r6, r30
  addi      r4, r1, 0x74
  crclr     6, 0x6
  bl        -0x3349A0

.loc_0x12C:
  cmplwi    r31, 0
  beq-      .loc_0x154
  lis       r4, 0x804A
  mr        r3, r31
  subi      r4, r4, 0x67CC
  mr        r6, r29
  mr        r7, r30
  addi      r5, r1, 0x74
  crclr     6, 0x6
  bl        -0x3F9714

.loc_0x154:
  lis       r3, 0x804A
  lis       r4, 0x804F
  addi      r3, r3, 0x3A8
  li        r5, 0x1
  addi      r4, r4, 0x7C20
  bl        -0x332BB0
  bl        -0x33070C
  bl        -0x32F958
  lmw       r26, 0x448(r1)
  lwz       r0, 0x464(r1)
  mtlr      r0
  addi      r1, r1, 0x460
  blr
}

/*
* --INFO--
* Address:	804220EC
* Size:	000118
*/
void preUserCallback(unsigned short, OSContext*, unsigned long, unsigned long)
{
	sys->disableCPULockDetector();

	u32 track;
	// the inputs needed to open the crash log
	u16 inputs[11] = { Controller::PRESS_B,
		               Controller::PRESS_A,
		               Controller::PRESS_X,
		               Controller::PRESS_R,
		               Controller::PRESS_L,
		               Controller::PRESS_DPAD_LEFT,
		               Controller::PRESS_DPAD_DOWN,
		               Controller::PRESS_DPAD_UP,
		               Controller::PRESS_DPAD_RIGHT,
		               Controller::PRESS_Z,
		               0 };

	int i = 0;
	// wait until all required inputs are in before passing, disable this if you want instant crash log
	while (inputs[i]) {
		u32 input;
		JUTException::waitTime(100);
		JUTException::sErrorManager->readPad(&input, nullptr);
		if (input) {
			i += (input == inputs[i]);
		}
	}

	if (!JUTException::sConsole) {
		OSReport("ƒRƒ“ƒ\[ƒ‹‚ª‚ ‚è‚Ü‚¹‚ñ\n");
	} else {
		JUTException::sConsole->setVisible(true);
		JUTException::sConsole->setOutput(3);
		JUTException::sConsole->print("--- Game debug information ---\n");
		JUTConsoleManager::sManager->drawDirect(true);
	}
	/*
	    stwu     r1, -0x40(r1)
	    mflr     r0
	    lis      r4, gStrSystem_CPP@ha
	    stw      r0, 0x44(r1)
	    stw      r31, 0x3c(r1)
	    stw      r30, 0x38(r1)
	    addi     r30, r4, gStrSystem_CPP@l
	    stw      r29, 0x34(r1)
	    stw      r28, 0x30(r1)
	    lwz      r3, sys@sda21(r13)
	    bl       disableCPULockDetector__6SystemFv
	    lwz      r7, 0x84(r30)
	    addi     r31, r1, 0xc
	    lwz      r6, 0x88(r30)
	    li       r28, 0
	    lwz      r5, 0x8c(r30)
	    lwz      r4, 0x90(r30)
	    lwz      r3, 0x94(r30)
	    lhz      r0, 0x98(r30)
	    stw      r7, 0xc(r1)
	    stw      r6, 0x10(r1)
	    stw      r5, 0x14(r1)
	    stw      r4, 0x18(r1)
	    stw      r3, 0x1c(r1)
	    sth      r0, 0x20(r1)
	    b        lbl_80422190

	lbl_80422154:
	    li       r3, 0x64
	    bl       waitTime__12JUTExceptionFl
	    lwz      r3, sErrorManager__12JUTException@sda21(r13)
	    addi     r4, r1, 8
	    li       r5, 0
	    bl       readPad__12JUTExceptionFPUlPUl
	    lwz      r0, 8(r1)
	    cmplwi   r0, 0
	    beq      lbl_80422190
	    subf     r3, r29, r0
	    subf     r0, r0, r29
	    nor      r3, r3, r0
	    addi     r0, r28, 1
	    srawi    r3, r3, 0x1f
	    and      r28, r0, r3

	lbl_80422190:
	    slwi     r0, r28, 1
	    lhzx     r29, r31, r0
	    cmplwi   r29, 0
	    bne      lbl_80422154
	    lwz      r3, sConsole__12JUTException@sda21(r13)
	    li       r0, 1
	    stb      r0, sUseABXCommand@sda21(r13)
	    cmplwi   r3, 0
	    beq      lbl_804221D8
	    stb      r0, 0x68(r3)
	    li       r0, 3
	    addi     r4, r30, 0x9c
	    stw      r0, 0x58(r3)
	    bl       print__10JUTConsoleFPCc
	    lwz      r3, sManager__17JUTConsoleManager@sda21(r13)
	    li       r4, 1
	    bl       drawDirect__17JUTConsoleManagerCFb
	    b        lbl_804221E4

	lbl_804221D8:
	    addi     r3, r30, 0xbc
	    crclr    6
	    bl       OSReport

	lbl_804221E4:
	    lwz      r0, 0x44(r1)
	    lwz      r31, 0x3c(r1)
	    lwz      r30, 0x38(r1)
	    lwz      r29, 0x34(r1)
	    lwz      r28, 0x30(r1)
	    mtlr     r0
	    addi     r1, r1, 0x40
	    blr
	*/
}

/*
 * --INFO--
 * Address:	80422204
 * Size:	00002C
 */
void myTask(void* data)
{
	sys->m_cardMgr->cardProc(data);
	/*
	    stwu     r1, -0x10(r1)
	    mflr     r0
	    mr       r4, r3
	    stw      r0, 0x14(r1)
	    lwz      r5, sys@sda21(r13)
	    lwz      r3, 0x5c(r5)
	    bl       cardProc__13MemoryCardMgrFPv
	    lwz      r0, 0x14(r1)
	    mtlr     r0
	    addi     r1, r1, 0x10
	    blr
	*/
}

/*
 * --INFO--
 * Address:	80422230
 * Size:	000054
 */
System::FragmentationChecker::FragmentationChecker(char* name, bool)
{
	m_name    = name;
	u32 free  = getCurrentHeap()->getFreeSize();
	u32 total = getCurrentHeap()->getTotalFreeSize();
	m_size    = total - free;
}

/*
 * --INFO--
 * Address:	80422284
 * Size:	00005C
 */
System::FragmentationChecker::~FragmentationChecker()
{
	getCurrentHeap()->getFreeSize();
	getCurrentHeap()->getTotalFreeSize();
}

/*
 * --INFO--
 * Address:	804222E0
 * Size:	00003C
 */
int System::assert_fragmentation(char*)
{
	int free  = getCurrentHeap()->getFreeSize();
	int total = getCurrentHeap()->getTotalFreeSize();
	return total - free; // not sure what the comparison actually is
	                     /*
	                         stwu     r1, -0x10(r1)
	                         mflr     r0
	                         stw      r0, 0x14(r1)
	                         stw      r31, 0xc(r1)
	                         lwz      r3, sCurrentHeap__7JKRHeap@sda21(r13)
	                         bl       getFreeSize__7JKRHeapFv
	                         mr       r31, r3
	                         lwz      r3, sCurrentHeap__7JKRHeap@sda21(r13)
	                         bl       getTotalFreeSize__7JKRHeapFv
	                         cmplw    r31, r3
	                         lwz      r0, 0x14(r1)
	                         lwz      r31, 0xc(r1)
	                         mtlr     r0
	                         addi     r1, r1, 0x10
	                         blr
	                     */
}

/*
 * --INFO--
 * Address:	8042231C
 * Size:	000010
 */
void System::enableCPULockDetector(int locks)
{
	m_cpuRetraceCount = 0;
	m_cpuLockCount    = locks;
}

/*
 * --INFO--
 * Address:	8042232C
 * Size:	000018
 */
int System::disableCPULockDetector()
{
	int locks         = m_cpuLockCount;
	m_cpuLockCount    = 0;
	m_cpuRetraceCount = 0;
	return locks;
}

/*
 * --INFO--
 * Address:	80422344
 * Size:	0000A4
 */
void retraceCallback(unsigned long)
{
	sys->m_cpuRetraceCount++;
	if (DVDGetDriveStatus() == 1) {
		sys->m_cpuRetraceCount = 0;
	}

	if ((int)sys->m_cpuLockCount > 0 && (int)sys->m_cpuLockCount < (int)sys->m_cpuRetraceCount) {
		// sUseAbxCommand = 0;
		OSReport("cpuLockCount %d retraceCount %d\n", sys->m_cpuLockCount, sys->m_cpuRetraceCount);
		kando_panic_f(1, "system/retrace", 0, "CPU LOCKED!");
	}
	/*
	    stwu     r1, -0x10(r1)
	    mflr     r0
	    lis      r3, gStrSystem_CPP@ha
	    stw      r0, 0x14(r1)
	    stw      r31, 0xc(r1)
	    addi     r31, r3, gStrSystem_CPP@l
	    lwz      r4, sys@sda21(r13)
	    lwz      r3, 0x1c(r4)
	    addi     r0, r3, 1
	    stw      r0, 0x1c(r4)
	    bl       DVDGetDriveStatus
	    cmpwi    r3, 1
	    bne      lbl_80422384
	    lwz      r3, sys@sda21(r13)
	    li       r0, 0
	    stw      r0, 0x1c(r3)

	lbl_80422384:
	    lwz      r5, sys@sda21(r13)
	    lwz      r3, 0x20(r5)
	    cmpwi    r3, 0
	    ble      lbl_804223D4
	    lwz      r0, 0x1c(r5)
	    cmpw     r0, r3
	    ble      lbl_804223D4
	    li       r0, 0
	    addi     r3, r31, 0xe0
	    stb      r0, sUseABXCommand@sda21(r13)
	    lwz      r4, 0x20(r5)
	    lwz      r5, 0x1c(r5)
	    crclr    6
	    bl       OSReport
	    addi     r4, r31, 0x104
	    addi     r6, r31, 0x114
	    li       r3, 1
	    li       r5, 0
	    crclr    6
	    bl       kando_panic_f__FbPCciPCce

	lbl_804223D4:
	    lwz      r0, 0x14(r1)
	    lwz      r31, 0xc(r1)
	    mtlr     r0
	    addi     r1, r1, 0x10
	    blr
	*/
}

/*
 * --INFO--
 * Address:	804223E8
 * Size:	00011C
 */
System::System()
{
	m_sysHeap   = nullptr;
	m_gameFlow  = nullptr;
	m_dvdStatus = nullptr;
	m_display   = nullptr;
	m_deltaTime = 0.166667f;
	m_playData  = nullptr;
	m_fpsFactor = 1.0f;
	m_region    = System::LANG_ENGLISH;
	m_flags     = 0;
	// sUseAbxCommand = true;
	sys = this;
	initCurrentHeapMutex();
	JKRHeap* heap = getCurrentHeap();
	m_sysHeap     = JKRExpHeap::create(0x428000, nullptr, true);
	m_sysHeap->becomeCurrentHeap();
	// m_heapStatus = new HeapStatus;
	construct();
	heap->becomeCurrentHeap();
	m_gfx = nullptr;
	JUTVideo::sManager->setPostRetraceCallback(retraceCallback);
	m_flags = 0;
	m_sysHeap->getTotalFreeSize();
	m_sysHeap->getTotalFreeSize();
	/*
	    stwu     r1, -0x10(r1)
	    mflr     r0
	    lfs      f1, lbl_80520408@sda21(r2)
	    stw      r0, 0x14(r1)
	    li       r0, 0
	    lfs      f0, lbl_8052040C@sda21(r2)
	    stw      r31, 0xc(r1)
	    stw      r30, 8(r1)
	    mr       r30, r3
	    stw      r0, 0x38(r3)
	    addi     r3, r30, 0x68
	    stw      r0, 0x3c(r30)
	    stw      r0, 0x48(r30)
	    stw      r0, 0x4c(r30)
	    stfs     f1, 0x54(r30)
	    stw      r0, 0x60(r30)
	    stfs     f0, 0x64(r30)
	    bl       __ct__16DvdThreadCommandFv
	    li       r4, 0
	    li       r0, 1
	    stw      r4, 0xd4(r30)
	    mr       r3, r30
	    stb      r4, 0xd8(r30)
	    stb      r4, 0xd9(r30)
	    stb      r4, 0xda(r30)
	    stb      r4, 0xdb(r30)
	    stw      r30, sys@sda21(r13)
	    stb      r0, sUseABXCommand@sda21(r13)
	    bl       initCurrentHeapMutex__6SystemFv
	    lis      r3, 0x00428000@ha
	    lwz      r31, sCurrentHeap__7JKRHeap@sda21(r13)
	    addi     r3, r3, 0x00428000@l
	    li       r4, 0
	    li       r5, 1
	    bl       create__10JKRExpHeapFUlP7JKRHeapb
	    stw      r3, 0x38(r30)
	    lwz      r3, 0x38(r30)
	    bl       becomeCurrentHeap__7JKRHeapFv
	    li       r3, 0x54
	    bl       __nw__FUl
	    or.      r0, r3, r3
	    beq      lbl_80422498
	    bl       __ct__10HeapStatusFv
	    mr       r0, r3

	lbl_80422498:
	    stw      r0, 0x50(r30)
	    mr       r3, r30
	    bl       construct__6SystemFv
	    mr       r3, r31
	    bl       becomeCurrentHeap__7JKRHeapFv
	    li       r0, 0
	    lis      r3, retraceCallback__FUl@ha
	    stw      r0, 0x24(r30)
	    addi     r4, r3, retraceCallback__FUl@l
	    lwz      r3, sManager__8JUTVideo@sda21(r13)
	    bl       setPostRetraceCallback__8JUTVideoFPFUl_v
	    li       r0, 0
	    stb      r0, 0xd8(r30)
	    stb      r0, 0xd9(r30)
	    stb      r0, 0xda(r30)
	    stb      r0, 0xdb(r30)
	    lwz      r3, 0x38(r30)
	    bl       getTotalFreeSize__7JKRHeapFv
	    lwz      r3, 0x38(r30)
	    bl       getTotalFreeSize__7JKRHeapFv
	    lwz      r0, 0x14(r1)
	    mr       r3, r30
	    lwz      r31, 0xc(r1)
	    lwz      r30, 8(r1)
	    mtlr     r0
	    addi     r1, r1, 0x10
	    blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00006C
 */
System::~System()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80422504
 * Size:	000214
 */
void System::construct()
{
	heapStatusStart("construct", nullptr);
	srand(OSGetTick());

	_30 = 0;
	_34 = 0;

	heapStatusStart("DvdThread", nullptr);
	m_dvdThread = new DvdThread(0x8000, 16, 29);
	heapStatusEnd("DvdThread");

	heapStatusStart("SysTimers", nullptr);
	m_timers = new SysTimers;
	heapStatusEnd("SysTimers");

	heapStatusStart("ResetManager", nullptr);
	m_resetMgr = new ResetManager(0.5f);
	heapStatusEnd("ResetManager");

	m_cardMgr = new MemoryCardMgr;
	m_cardMgr->init();

	m_task = JKRTask::create(1, 17, 0x4000, nullptr);
	m_task->request(myTask, nullptr, nullptr);

	heapStatusStart("ARAMMgr", nullptr);
	ARAM::Mgr::init();
	Pikmin2ARAM::Mgr::init();
	heapStatusEnd("ARAMMgr");

	heapStatusStart("ResourceMgr2D", nullptr);
	Resource::Mgr2D::init(getCurrentHeap());
	heapStatusEnd("ResourceMgr2D");

	// m_playData = new Game::CommonSaveData::Mgr;
	m_dvdStatus = new DvdStatus;
	m_gameFlow  = new GameFlow;

	heapStatusEnd("construct");

	/*
	    stwu     r1, -0x10(r1)
	    mflr     r0
	    lis      r4, gStrSystem_CPP@ha
	    li       r5, 0
	    stw      r0, 0x14(r1)
	    stw      r31, 0xc(r1)
	    addi     r31, r4, gStrSystem_CPP@l
	    addi     r4, r31, 0x130
	    stw      r30, 8(r1)
	    mr       r30, r3
	    bl       heapStatusStart__6SystemFPcP7JKRHeap
	    bl       OSGetTick
	    bl       srand
	    li       r0, 0
	    mr       r3, r30
	    stw      r0, 0x30(r30)
	    addi     r4, r31, 0x13c
	    li       r5, 0
	    stw      r0, 0x34(r30)
	    bl       heapStatusStart__6SystemFPcP7JKRHeap
	    li       r3, 0x88
	    bl       __nw__FUl
	    or.      r0, r3, r3
	    beq      lbl_8042257C
	    lis      r4, 0x00008000@ha
	    li       r5, 0x10
	    addi     r4, r4, 0x00008000@l
	    li       r6, 0x1d
	    bl       __ct__9DvdThreadFUlii
	    mr       r0, r3

	lbl_8042257C:
	    stw      r0, 0x40(r30)
	    mr       r3, r30
	    addi     r4, r31, 0x13c
	    bl       heapStatusEnd__6SystemFPc
	    mr       r3, r30
	    addi     r4, r31, 0x148
	    li       r5, 0
	    bl       heapStatusStart__6SystemFPcP7JKRHeap
	    li       r3, 0x28
	    bl       __nw__FUl
	    or.      r0, r3, r3
	    beq      lbl_804225B4
	    bl       __ct__9SysTimersFv
	    mr       r0, r3

	lbl_804225B4:
	    stw      r0, 0x28(r30)
	    mr       r3, r30
	    addi     r4, r31, 0x148
	    bl       heapStatusEnd__6SystemFPc
	    mr       r3, r30
	    addi     r4, r31, 0x154
	    li       r5, 0
	    bl       heapStatusStart__6SystemFPcP7JKRHeap
	    li       r3, 0x14
	    bl       __nw__FUl
	    or.      r0, r3, r3
	    beq      lbl_804225F0
	    lfs      f1, lbl_80520410@sda21(r2)
	    bl       __ct__12ResetManagerFf
	    mr       r0, r3

	lbl_804225F0:
	    stw      r0, 0x44(r30)
	    mr       r3, r30
	    addi     r4, r31, 0x154
	    bl       heapStatusEnd__6SystemFPc
	    li       r3, 0xe8
	    bl       __nw__FUl
	    or.      r0, r3, r3
	    beq      lbl_80422618
	    bl       __ct__Q34Game10MemoryCard3MgrFv
	    mr       r0, r3

	lbl_80422618:
	    stw      r0, 0x5c(r30)
	    lwz      r3, 0x5c(r30)
	    bl       init__13MemoryCardMgrFv
	    li       r3, 1
	    li       r4, 0x11
	    li       r5, 0x4000
	    li       r6, 0
	    bl       create__7JKRTaskFiiUlP7JKRHeap
	    stw      r3, 0x58(r30)
	    lis      r3, myTask__FPv@ha
	    addi     r4, r3, myTask__FPv@l
	    li       r5, 0
	    lwz      r3, 0x58(r30)
	    li       r6, 0
	    bl       request__7JKRTaskFPFPv_vPvPv
	    mr       r3, r30
	    addi     r4, r2, lbl_80520414@sda21
	    li       r5, 0
	    bl       heapStatusStart__6SystemFPcP7JKRHeap
	    bl       init__Q24ARAM3MgrFv
	    bl       init__Q211Pikmin2ARAM3MgrFv
	    mr       r3, r30
	    addi     r4, r2, lbl_80520414@sda21
	    bl       heapStatusEnd__6SystemFPc
	    mr       r3, r30
	    addi     r4, r31, 0x164
	    li       r5, 0
	    bl       heapStatusStart__6SystemFPcP7JKRHeap
	    lwz      r3, sCurrentHeap__7JKRHeap@sda21(r13)
	    bl       init__Q28Resource5Mgr2DFP7JKRHeap
	    mr       r3, r30
	    addi     r4, r31, 0x164
	    bl       heapStatusEnd__6SystemFPc
	    li       r3, 0x48
	    bl       __nw__FUl
	    or.      r0, r3, r3
	    beq      lbl_804226B4
	    bl       __ct__Q34Game14CommonSaveData3MgrFv
	    mr       r0, r3

	lbl_804226B4:
	    stw      r0, 0x60(r30)
	    li       r3, 0xc
	    bl       __nw__FUl
	    or.      r0, r3, r3
	    beq      lbl_804226D0
	    bl       __ct__9DvdStatusFv
	    mr       r0, r3

	lbl_804226D0:
	    stw      r0, 0x48(r30)
	    bl       init__Q212LoadResource3MgrFv
	    li       r3, 8
	    bl       __nw__FUl
	    or.      r0, r3, r3
	    beq      lbl_804226F0
	    bl       __ct__8GameFlowFv
	    mr       r0, r3

	lbl_804226F0:
	    stw      r0, 0x3c(r30)
	    mr       r3, r30
	    addi     r4, r31, 0x130
	    bl       heapStatusEnd__6SystemFPc
	    lwz      r0, 0x14(r1)
	    lwz      r31, 0xc(r1)
	    lwz      r30, 8(r1)
	    mtlr     r0
	    addi     r1, r1, 0x10
	    blr
	*/
}

/*
 * --INFO--
 * Address:	80422718
 * Size:	0000E8
 */
void System::constructWithDvdAccessFirst()
{
	P2ASSERTLINE(1013, getCurrentHeap()->getHeapType() == 'EXPH');

	JKRHeap* old = getCurrentHeap();
	m_sysHeap->becomeCurrentHeap();

	heapStatusStart("constructWithDvdAccess1st", nullptr);
	Game::gGameConfig.load("gameConfig.ini");
	createSoundSystem();
	heapStatusEnd("constructWithDvdAccess1st");

	m_sysHeap->getTotalFreeSize();
	m_sysHeap->getTotalFreeSize();
	m_sysHeap->getFreeSize();
	m_sysHeap->getFreeSize();
	old->becomeCurrentHeap();
	heapStatusDump(true);
	/*
	    stwu     r1, -0x20(r1)
	    mflr     r0
	    lis      r4, gStrSystem_CPP@ha
	    stw      r0, 0x24(r1)
	    stw      r31, 0x1c(r1)
	    addi     r31, r4, gStrSystem_CPP@l
	    stw      r30, 0x18(r1)
	    stw      r29, 0x14(r1)
	    mr       r29, r3
	    lwz      r3, sCurrentHeap__7JKRHeap@sda21(r13)
	    lwz      r12, 0(r3)
	    lwz      r12, 0x10(r12)
	    mtctr    r12
	    bctrl
	    addis    r0, r3, 0xbaa8
	    cmplwi   r0, 0x5048
	    beq      lbl_80422770
	    addi     r3, r31, 0
	    addi     r5, r31, 0x174
	    li       r4, 0x3f5
	    crclr    6
	    bl       panic_f__12JUTExceptionFPCciPCce

	lbl_80422770:
	    lwz      r30, sCurrentHeap__7JKRHeap@sda21(r13)
	    lwz      r3, 0x38(r29)
	    bl       becomeCurrentHeap__7JKRHeapFv
	    mr       r3, r29
	    addi     r4, r31, 0x180
	    li       r5, 0
	    bl       heapStatusStart__6SystemFPcP7JKRHeap
	    lis      r3, gGameConfig__4Game@ha
	    addi     r4, r31, 0x19c
	    addi     r3, r3, gGameConfig__4Game@l
	    bl       load__Q24Game10GameConfigFPc
	    mr       r3, r29
	    bl       createSoundSystem__6SystemFv
	    mr       r3, r29
	    addi     r4, r31, 0x180
	    bl       heapStatusEnd__6SystemFPc
	    lwz      r3, 0x38(r29)
	    bl       getTotalFreeSize__7JKRHeapFv
	    lwz      r3, 0x38(r29)
	    bl       getTotalFreeSize__7JKRHeapFv
	    lwz      r3, 0x38(r29)
	    bl       getFreeSize__7JKRHeapFv
	    lwz      r3, 0x38(r29)
	    bl       getFreeSize__7JKRHeapFv
	    mr       r3, r30
	    bl       becomeCurrentHeap__7JKRHeapFv
	    mr       r3, r29
	    li       r4, 1
	    bl       heapStatusDump__6SystemFb
	    lwz      r0, 0x24(r1)
	    lwz      r31, 0x1c(r1)
	    lwz      r30, 0x18(r1)
	    lwz      r29, 0x14(r1)
	    mtlr     r0
	    addi     r1, r1, 0x20
	    blr
	*/
}

/*
 * --INFO--
 * Address:	80422800
 * Size:	000120
 */
void System::constructWithDvdAccessSecond()
{
	loadSoundResource();

	P2ASSERTLINE(1064, getCurrentHeap()->getHeapType() == 'EXPH');

	JKRExpHeap* old = static_cast<JKRExpHeap*>(getCurrentHeap());
	m_sysHeap->becomeCurrentHeap();

	heapStatusStart("constructWithDvdAccess2nd", nullptr);
	heapStatusStart("P2JME::Mgr", nullptr);
	P2JME::Mgr::create(old);
	heapStatusEnd("P2JME::Mgr");
	Game::PelletList::Mgr::globalInstance();
	Game::stageList = new Game::Stages;
	// Game::PlayData::construct();
	Game::MovieList::construct();
	heapStatusEnd("constructWithDvdAccess2nd");

	m_sysHeap->getTotalFreeSize();
	m_sysHeap->getTotalFreeSize();
	m_sysHeap->getFreeSize();
	m_sysHeap->getFreeSize();
	old->becomeCurrentHeap();
	heapStatusDump(true);

	/*
	    stwu     r1, -0x20(r1)
	    mflr     r0
	    lis      r4, gStrSystem_CPP@ha
	    stw      r0, 0x24(r1)
	    stw      r31, 0x1c(r1)
	    addi     r31, r4, gStrSystem_CPP@l
	    stw      r30, 0x18(r1)
	    stw      r29, 0x14(r1)
	    mr       r29, r3
	    bl       loadSoundResource__6SystemFv
	    lwz      r3, sCurrentHeap__7JKRHeap@sda21(r13)
	    lwz      r12, 0(r3)
	    lwz      r12, 0x10(r12)
	    mtctr    r12
	    bctrl
	    addis    r0, r3, 0xbaa8
	    cmplwi   r0, 0x5048
	    beq      lbl_8042285C
	    addi     r3, r31, 0
	    addi     r5, r31, 0x174
	    li       r4, 0x428
	    crclr    6
	    bl       panic_f__12JUTExceptionFPCciPCce

	lbl_8042285C:
	    lwz      r30, sCurrentHeap__7JKRHeap@sda21(r13)
	    lwz      r3, 0x38(r29)
	    bl       becomeCurrentHeap__7JKRHeapFv
	    mr       r3, r29
	    addi     r4, r31, 0x1ac
	    li       r5, 0
	    bl       heapStatusStart__6SystemFPcP7JKRHeap
	    mr       r3, r29
	    addi     r4, r31, 0x1c8
	    li       r5, 0
	    bl       heapStatusStart__6SystemFPcP7JKRHeap
	    mr       r3, r30
	    bl       create__Q25P2JME3MgrFP10JKRExpHeap
	    mr       r3, r29
	    addi     r4, r31, 0x1c8
	    bl       heapStatusEnd__6SystemFPc
	    bl       globalInstance__Q34Game10PelletList3MgrFv
	    li       r3, 0x10c
	    bl       __nw__FUl
	    or.      r0, r3, r3
	    beq      lbl_804228B8
	    bl       __ct__Q24Game6StagesFv
	    mr       r0, r3

	lbl_804228B8:
	    stw      r0, stageList__4Game@sda21(r13)
	    bl       construct__Q24Game8PlayDataFv
	    bl       construct__Q24Game9MovieListFv
	    mr       r3, r29
	    addi     r4, r31, 0x1ac
	    bl       heapStatusEnd__6SystemFPc
	    lwz      r3, 0x38(r29)
	    bl       getTotalFreeSize__7JKRHeapFv
	    lwz      r3, 0x38(r29)
	    bl       getTotalFreeSize__7JKRHeapFv
	    lwz      r3, 0x38(r29)
	    bl       getFreeSize__7JKRHeapFv
	    lwz      r3, 0x38(r29)
	    bl       getFreeSize__7JKRHeapFv
	    mr       r3, r30
	    bl       becomeCurrentHeap__7JKRHeapFv
	    mr       r3, r29
	    li       r4, 1
	    bl       heapStatusDump__6SystemFb
	    lwz      r0, 0x24(r1)
	    lwz      r31, 0x1c(r1)
	    lwz      r30, 0x18(r1)
	    lwz      r29, 0x14(r1)
	    mtlr     r0
	    addi     r1, r1, 0x20
	    blr
	*/
}

/*
 * --INFO--
 * Address:	80422920
 * Size:	000054
 */
void System::createRomFont(JKRHeap* heap) { m_romFont = new JUTRomFont(heap); }

/*
 * --INFO--
 * Address:	80422974
 * Size:	000050
 */
void System::destroyRomFont()
{
	delete m_romFont;
	m_romFont = nullptr;
}

/*
 * --INFO--
 * Address:	804229C4
 * Size:	0001B8
 */
void System::createSoundSystem()
{
	sys->heapStatusStart("SoundSystem", nullptr);
	JKRHeap* old = getCurrentHeap();

	P2ASSERTLINE(1158, getCurrentHeap());
	P2ASSERTLINE(1161, gResMgr2D);

	JKRHeap* resHeap    = gResMgr2D->m_heap;
	u32 size            = resHeap->getFreeSize();
	JKRExpHeap* newheap = JKRExpHeap::create(size, resHeap, true);

	P2ASSERTLINE(1165, newheap);
	newheap->becomeCurrentHeap();

	JKRFileCache* arc = JKRFileCache::mount("/AudioRes", newheap, nullptr);
	void* file        = JKRFileLoader::getGlbResource("PSound.aaf", arc);

	P2ASSERTLINE(1173, file);

	PSM::Factory* factory = new PSM::Factory;
	// factory->m_makeSeFunc = PSM::SeSound::makeSeSound;
	factory->m_heap     = old;
	factory->m_heapSize = 0x900000;
	factory->m_aafFile  = file;
	factory->newSoundSystem();

	JKRSolidHeap* newheap2 = JKRSolidHeap::create(old->getFreeSize(), old, true);
	newheap2->becomeCurrentHeap();

	PSGame::PikSceneMgr* mgr = static_cast<PSGame::PikSceneMgr*>(PSSystem::getSceneMgr());
	mgr->newAndSetGlobalScene();
	newheap2->adjustSize();

	old->becomeCurrentHeap();
	resHeap->destroy();

	sys->heapStatusEnd("SoundSystem");
	gResMgr2D->_0C = gResMgr2D->_08;

	/*
	    stwu     r1, -0x20(r1)
	    mflr     r0
	    lis      r4, gStrSystem_CPP@ha
	    li       r5, 0
	    stw      r0, 0x24(r1)
	    stmw     r27, 0xc(r1)
	    addi     r29, r4, gStrSystem_CPP@l
	    addi     r4, r29, 0x1d4
	    lwz      r3, sys@sda21(r13)
	    bl       heapStatusStart__6SystemFPcP7JKRHeap
	    lwz      r31, sCurrentHeap__7JKRHeap@sda21(r13)
	    cmplwi   r31, 0
	    bne      lbl_80422A0C
	    addi     r3, r29, 0
	    addi     r5, r29, 0x174
	    li       r4, 0x486
	    crclr    6
	    bl       panic_f__12JUTExceptionFPCciPCce

	lbl_80422A0C:
	    lwz      r0, gResMgr2D@sda21(r13)
	    cmplwi   r0, 0
	    bne      lbl_80422A2C
	    addi     r3, r29, 0
	    addi     r5, r29, 0x174
	    li       r4, 0x489
	    crclr    6
	    bl       panic_f__12JUTExceptionFPCciPCce

	lbl_80422A2C:
	    lwz      r3, gResMgr2D@sda21(r13)
	    lwz      r27, 4(r3)
	    mr       r3, r27
	    bl       getFreeSize__7JKRHeapFv
	    mr       r4, r27
	    li       r5, 1
	    bl       create__10JKRExpHeapFUlP7JKRHeapb
	    or.      r28, r3, r3
	    bne      lbl_80422A64
	    addi     r3, r29, 0
	    addi     r5, r29, 0x174
	    li       r4, 0x48d
	    crclr    6
	    bl       panic_f__12JUTExceptionFPCciPCce

	lbl_80422A64:
	    mr       r3, r28
	    bl       becomeCurrentHeap__7JKRHeapFv
	    mr       r4, r28
	    addi     r3, r29, 0x1e0
	    li       r5, 0
	    bl       mount__12JKRFileCacheFPCcP7JKRHeapPCc
	    mr       r4, r3
	    addi     r3, r29, 0x1ec
	    bl       getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader
	    or.      r30, r3, r3
	    bne      lbl_80422AA4
	    addi     r3, r29, 0
	    addi     r5, r29, 0x174
	    li       r4, 0x495
	    crclr    6
	    bl       panic_f__12JUTExceptionFPCciPCce

	lbl_80422AA4:
	    li       r3, 0x1c
	    bl       __nw__FUl
	    or.      r27, r3, r3
	    beq      lbl_80422AC4
	    bl       __ct__Q26PSGame10SysFactoryFv
	    lis      r3, __vt__Q23PSM7Factory@ha
	    addi     r0, r3, __vt__Q23PSM7Factory@l
	    stw      r0, 0x10(r27)

	lbl_80422AC4:
	    lis      r3, makeSeSound__Q23PSM7SeSoundFv@ha
	    lis      r0, 0x90
	    addi     r4, r3, makeSeSound__Q23PSM7SeSoundFv@l
	    mr       r3, r27
	    stw      r4, 0xc(r27)
	    stw      r31, 0(r27)
	    stw      r0, 4(r27)
	    stw      r30, 8(r27)
	    bl       newSoundSystem__Q26PSGame10SysFactoryFv
	    mr       r3, r31
	    bl       getFreeSize__7JKRHeapFv
	    mr       r4, r31
	    li       r5, 1
	    bl       create__12JKRSolidHeapFUlP7JKRHeapb
	    mr       r27, r3
	    bl       becomeCurrentHeap__7JKRHeapFv
	    lwz      r0, spSceneMgr__8PSSystem@sda21(r13)
	    cmplwi   r0, 0
	    bne      lbl_80422B24
	    addi     r3, r29, 0x1f8
	    addi     r5, r29, 0x174
	    li       r4, 0x1d3
	    crclr    6
	    bl       panic_f__12JUTExceptionFPCciPCce

	lbl_80422B24:
	    lwz      r3, spSceneMgr__8PSSystem@sda21(r13)
	    lwz      r12, 0(r3)
	    lwz      r12, 0x10(r12)
	    mtctr    r12
	    bctrl
	    mr       r3, r27
	    bl       adjustSize__12JKRSolidHeapFv
	    mr       r3, r31
	    bl       becomeCurrentHeap__7JKRHeapFv
	    mr       r3, r28
	    bl       destroy__7JKRHeapFv
	    lwz      r3, sys@sda21(r13)
	    addi     r4, r29, 0x1d4
	    bl       heapStatusEnd__6SystemFPc
	    lwz      r3, gResMgr2D@sda21(r13)
	    lwz      r0, 8(r3)
	    stw      r0, 0xc(r3)
	    lmw      r27, 0xc(r1)
	    lwz      r0, 0x24(r1)
	    mtlr     r0
	    addi     r1, r1, 0x20
	    blr
	*/
}

/*
 * --INFO--
 * Address:	80422B7C
 * Size:	0000E8
 */
void System::loadSoundResource()
{
	JKRHeap* old = getCurrentHeap();

	JKRSolidHeap* newheap = JKRSolidHeap::create(getCurrentHeap()->getFreeSize(), old, true);
	newheap->becomeCurrentHeap();

	PSSystem::SceneMgr* mgr = PSSystem::getSceneMgr();
	PSSystem::checkSceneMgr(mgr);
	PSM::Scene_Global* scene = static_cast<PSM::Scene_Global*>(mgr->m_scenes);
	P2ASSERTLINE(1245, scene);

	scene->scene1stLoadSync();
	newheap->adjustSize();
	old->becomeCurrentHeap();
	/*
	    stwu     r1, -0x20(r1)
	    mflr     r0
	    lis      r3, gStrSystem_CPP@ha
	    stw      r0, 0x24(r1)
	    stw      r31, 0x1c(r1)
	    addi     r31, r3, gStrSystem_CPP@l
	    stw      r30, 0x18(r1)
	    stw      r29, 0x14(r1)
	    stw      r28, 0x10(r1)
	    lwz      r28, sCurrentHeap__7JKRHeap@sda21(r13)
	    mr       r3, r28
	    bl       getFreeSize__7JKRHeapFv
	    mr       r4, r28
	    li       r5, 1
	    bl       create__12JKRSolidHeapFUlP7JKRHeapb
	    mr       r30, r3
	    bl       becomeCurrentHeap__7JKRHeapFv
	    lwz      r0, spSceneMgr__8PSSystem@sda21(r13)
	    cmplwi   r0, 0
	    bne      lbl_80422BE0
	    addi     r3, r31, 0x1f8
	    addi     r5, r31, 0x174
	    li       r4, 0x1d3
	    crclr    6
	    bl       panic_f__12JUTExceptionFPCciPCce

	lbl_80422BE0:
	    lwz      r29, spSceneMgr__8PSSystem@sda21(r13)
	    cmplwi   r29, 0
	    bne      lbl_80422C00
	    addi     r3, r31, 0x1f8
	    addi     r5, r31, 0x174
	    li       r4, 0x1dc
	    crclr    6
	    bl       panic_f__12JUTExceptionFPCciPCce

	lbl_80422C00:
	    lwz      r29, 4(r29)
	    cmplwi   r29, 0
	    bne      lbl_80422C20
	    addi     r3, r31, 0
	    addi     r5, r31, 0x174
	    li       r4, 0x4dd
	    crclr    6
	    bl       panic_f__12JUTExceptionFPCciPCce

	lbl_80422C20:
	    mr       r3, r29
	    lwz      r12, 0(r29)
	    lwz      r12, 0x14(r12)
	    mtctr    r12
	    bctrl
	    mr       r3, r30
	    bl       adjustSize__12JKRSolidHeapFv
	    mr       r3, r28
	    bl       becomeCurrentHeap__7JKRHeapFv
	    lwz      r0, 0x24(r1)
	    lwz      r31, 0x1c(r1)
	    lwz      r30, 0x18(r1)
	    lwz      r29, 0x14(r1)
	    lwz      r28, 0x10(r1)
	    mtlr     r0
	    addi     r1, r1, 0x20
	    blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000014
 */
System::GXVerifyArg::GXVerifyArg()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000004
 */
void System::setGXVerifyLevel(System::GXVerifyArg&)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000004
 */
void System::clearGXVerifyLevel()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80422C64
 * Size:	0000F8
 */
void System::initialize()
{
	System::setRenderMode(mRenderMode);
	System::setRenderMode(0);

	JFWSystem::CSetUpParam::maxStdHeaps      = 1;
	JFWSystem::CSetUpParam::sysHeapSize      = 0xa0000;
	JFWSystem::CSetUpParam::fifoBufSize      = 0x70800;
	JFWSystem::CSetUpParam::aramAudioBufSize = 0x900000;
	JFWSystem::CSetUpParam::aramGraphBufSize = 0xffffffff;

	// renderMode = getRenderModeObj();
	JFWSystem::init();
	JUTException::sErrorManager->_84       = -1;
	JUTException::sErrorManager->m_padPort = JUTGamePad::PORT_INVALID;
	// JUTException::setPreUserCallback(preUserCallback);
	JUTException::sErrorManager->_90 = 0;
	JUTException::sErrorManager->_8C = 0;
	JKRHeap::setErrorHandler(Pikmin2DefaultMemoryErrorRoutine);
	JKRHeap::sRootHeap->becomeCurrentHeap();
	// JUTException::appendMapFile(cMapFileName);
	/*
	    stwu     r1, -0x10(r1)
	    mflr     r0
	    lis      r5, 0x80700000@ha
	    stw      r0, 0x14(r1)
	    lwz      r4, 0x80700000@l(r5)
	    addis    r0, r4, 0x899f
	    cmplwi   r0, 0x6c64
	    bne      lbl_80422C90
	    lbz      r3, 4(r5)
	    bl       setRenderMode__6SystemFQ26System11ERenderMode
	    b        lbl_80422C98

	lbl_80422C90:
	    li       r3, 0
	    bl       setRenderMode__6SystemFQ26System11ERenderMode

	lbl_80422C98:
	    li       r3, 4
	    oris     r3, r3, 4
	    mtspr    0x392, r3
	    li       r3, 5
	    oris     r3, r3, 5
	    mtspr    0x393, r3
	    li       r3, 6
	    oris     r3, r3, 6
	    mtspr    0x394, r3
	    li       r3, 7
	    oris     r3, r3, 7
	    mtspr    0x395, r3
	    lis      r4, 0x00070800@ha
	    addi     r5, r4, 0x00070800@l
	    li       r7, 1
	    lis      r6, 0xa
	    lis      r4, 0x90
	    li       r0, -1
	    stw      r7, maxStdHeaps__Q29JFWSystem11CSetUpParam@sda21(r13)
	    stw      r6, sysHeapSize__Q29JFWSystem11CSetUpParam@sda21(r13)
	    stw      r5, fifoBufSize__Q29JFWSystem11CSetUpParam@sda21(r13)
	    stw      r4, aramAudioBufSize__Q29JFWSystem11CSetUpParam@sda21(r13)
	    stw      r0, aramGraphBufSize__Q29JFWSystem11CSetUpParam@sda21(r13)
	    bl       getRenderModeObj__6SystemFv
	    stw      r3, renderMode__Q29JFWSystem11CSetUpParam@sda21(r13)
	    bl       init__9JFWSystemFv
	    lwz      r5, sErrorManager__12JUTException@sda21(r13)
	    li       r0, -1
	    lis      r4, preUserCallback__FUsP9OSContextUlUl@ha
	    stw      r0, 0x84(r5)
	    addi     r3, r4, preUserCallback__FUsP9OSContextUlUl@l
	    stw      r0, 0x88(r5)
	    bl       setPreUserCallback__12JUTExceptionFPFUsP9OSContextUlUl_v
	    lwz      r5, sErrorManager__12JUTException@sda21(r13)
	    li       r0, 0
	    lis      r4, Pikmin2DefaultMemoryErrorRoutine__FPvUli@ha
	    stw      r0, 0x90(r5)
	    addi     r3, r4, Pikmin2DefaultMemoryErrorRoutine__FPvUli@l
	    lwz      r4, sErrorManager__12JUTException@sda21(r13)
	    stw      r0, 0x8c(r4)
	    bl       setErrorHandler__7JKRHeapFPFPvUli_v
	    lwz      r3, sRootHeap__7JKRHeap@sda21(r13)
	    bl       becomeCurrentHeap__7JKRHeapFv
	    lwz      r3, cMapFileName@sda21(r13)
	    bl       appendMapFile__12JUTExceptionFPCc
	    lwz      r0, 0x14(r1)
	    mtlr     r0
	    addi     r1, r1, 0x10
	    blr
	*/
}

/*
 * --INFO--
 * Address:	80422D5C
 * Size:	000094
 */
void System::loadResourceFirst()
{
	Delegate<System>* delegate = new (m_sysHeap, 0) Delegate<System>(this, &constructWithDvdAccessFirst);

	dvdLoadUseCallBack(&m_threadCommand, delegate);
	/*
	    stwu     r1, -0x20(r1)
	    mflr     r0
	    li       r5, 0
	    stw      r0, 0x24(r1)
	    stw      r31, 0x1c(r1)
	    mr       r31, r3
	    li       r3, 0x14
	    lwz      r4, 0x38(r31)
	    bl       __nw__FUlP7JKRHeapi
	    or.      r5, r3, r3
	    beq      lbl_80422DD0
	    lis      r3, lbl_804EBB40@ha
	    lis      r4, __vt__9IDelegate@ha
	    addi     r8, r3, lbl_804EBB40@l
	    lis      r3, "__vt__17Delegate<6System>"@ha
	    lwz      r7, 0(r8)
	    addi     r4, r4, __vt__9IDelegate@l
	    lwz      r6, 4(r8)
	    addi     r0, r3, "__vt__17Delegate<6System>"@l
	    lwz      r3, 8(r8)
	    stw      r7, 8(r1)
	    stw      r4, 0(r5)
	    stw      r0, 0(r5)
	    stw      r31, 4(r5)
	    stw      r7, 8(r5)
	    stw      r6, 0xc(r5)
	    stw      r6, 0xc(r1)
	    stw      r3, 0x10(r1)
	    stw      r3, 0x10(r5)

	lbl_80422DD0:
	    mr       r3, r31
	    addi     r4, r31, 0x68
	    bl       dvdLoadUseCallBack__6SystemFP16DvdThreadCommandP9IDelegate
	    lwz      r0, 0x24(r1)
	    lwz      r31, 0x1c(r1)
	    mtlr     r0
	    addi     r1, r1, 0x20
	    blr
	*/
}

/*
 * --INFO--
 * Address:	80422DF0
 * Size:	000094
 */
void System::loadResourceSecond()
{
	Delegate<System>* delegate = new (m_sysHeap, 0) Delegate<System>(this, &constructWithDvdAccessSecond);

	dvdLoadUseCallBack(&m_threadCommand, delegate);
	/*
	    stwu     r1, -0x20(r1)
	    mflr     r0
	    li       r5, 0
	    stw      r0, 0x24(r1)
	    stw      r31, 0x1c(r1)
	    mr       r31, r3
	    li       r3, 0x14
	    lwz      r4, 0x38(r31)
	    bl       __nw__FUlP7JKRHeapi
	    or.      r5, r3, r3
	    beq      lbl_80422E64
	    lis      r3, lbl_804EBB4C@ha
	    lis      r4, __vt__9IDelegate@ha
	    addi     r8, r3, lbl_804EBB4C@l
	    lis      r3, "__vt__17Delegate<6System>"@ha
	    lwz      r7, 0(r8)
	    addi     r4, r4, __vt__9IDelegate@l
	    lwz      r6, 4(r8)
	    addi     r0, r3, "__vt__17Delegate<6System>"@l
	    lwz      r3, 8(r8)
	    stw      r7, 8(r1)
	    stw      r4, 0(r5)
	    stw      r0, 0(r5)
	    stw      r31, 4(r5)
	    stw      r7, 8(r5)
	    stw      r6, 0xc(r5)
	    stw      r6, 0xc(r1)
	    stw      r3, 0x10(r1)
	    stw      r3, 0x10(r5)

	lbl_80422E64:
	    mr       r3, r31
	    addi     r4, r31, 0x68
	    bl       dvdLoadUseCallBack__6SystemFP16DvdThreadCommandP9IDelegate
	    lwz      r0, 0x24(r1)
	    lwz      r31, 0x1c(r1)
	    mtlr     r0
	    addi     r1, r1, 0x20
	    blr
	*/
}

/*
 * --INFO--
 * Address:	80422E84
 * Size:	000034
 */
int System::run()
{
	m_gameFlow->run();
	return EXIT_SUCCESS;
}

/*
 * --INFO--
 * Address:	80422EB8
 * Size:	000058
 */
f32 System::getTime()
{
	return (f32)OSGetTick();
	/*
	    stwu     r1, -0x10(r1)
	    mflr     r0
	    stw      r0, 0x14(r1)
	    bl       OSGetTick
	    lis      r5, 0x800000F8@ha
	    lis      r4, 0x10624DD3@ha
	    lwz      r5, 0x800000F8@l(r5)
	    lis      r0, 0x4330
	    addi     r4, r4, 0x10624DD3@l
	    stw      r0, 8(r1)
	    srwi     r0, r5, 2
	    lfd      f1, lbl_80520420@sda21(r2)
	    mulhwu   r0, r4, r0
	    srwi     r0, r0, 6
	    divwu    r0, r3, r0
	    stw      r0, 0xc(r1)
	    lfd      f0, 8(r1)
	    fsubs    f1, f0, f1
	    lwz      r0, 0x14(r1)
	    mtlr     r0
	    addi     r1, r1, 0x10
	    blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00000C
 */
void System::checkOptionBlockSaveFlag()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80422F10
 * Size:	000010
 */
void System::clearOptionBlockSaveFlag() { m_playData->_42 = false; }

/*
 * --INFO--
 * Address:	80422F20
 * Size:	000010
 */
void System::setOptionBlockSaveFlag() { m_playData->_42 = true; }

/*
 * --INFO--
 * Address:	80422F30
 * Size:	000008
 */
Game::CommonSaveData::Mgr* System::getPlayCommonData() { return m_playData; }

/*
 * --INFO--
 * Address:	80422F38
 * Size:	000058
 */
void System::dvdLoadUseCallBack(DvdThreadCommand* command, IDelegate* delegate)
{
	if (m_dvdThread) {
		// command->loadUseCallBack(delegate);
		m_dvdThread->sendCommand(command);
	}
	/*
	    stwu     r1, -0x10(r1)
	    mflr     r0
	    stw      r0, 0x14(r1)
	    stw      r31, 0xc(r1)
	    mr       r31, r4
	    stw      r30, 8(r1)
	    mr       r30, r3
	    lwz      r0, 0x40(r3)
	    cmplwi   r0, 0
	    beq      lbl_80422F78
	    mr       r3, r31
	    mr       r4, r5
	    bl       loadUseCallBack__16DvdThreadCommandFP9IDelegate
	    lwz      r3, 0x40(r30)
	    mr       r4, r31
	    bl       sendCommand__9DvdThreadFP16DvdThreadCommand

	lbl_80422F78:
	    lwz      r0, 0x14(r1)
	    lwz      r31, 0xc(r1)
	    lwz      r30, 8(r1)
	    mtlr     r0
	    addi     r1, r1, 0x10
	    blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000060
 */
void System::dvdLoadArchive(DvdThreadCommand*, char*, JKRHeap*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000060
 */
void System::dvdLoadArchiveTemporary(DvdThreadCommand*, char*, JKRHeap*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000060
 */
void System::dvdLoadFile(DvdThreadCommand*, char*, JKRHeap*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000034
 */
void System::dvdLoadSync(DvdThreadCommand*, DvdThread::ESyncBlockFlag)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000034
 */
void System::dvdLoadSyncAll(DvdThread::ESyncBlockFlag)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80422F90
 * Size:	000054
 */
void System::deleteThreads()
{
	if (m_dvdThread) {
		delete m_dvdThread;
		m_dvdThread = nullptr;
	}
}

/*
 * --INFO--
 * Address:	80422FE4
 * Size:	00008C
 */
DvdThread::~DvdThread()
{
	/*
	    stwu     r1, -0x10(r1)
	    mflr     r0
	    stw      r0, 0x14(r1)
	    stw      r31, 0xc(r1)
	    mr       r31, r4
	    stw      r30, 8(r1)
	    or.      r30, r3, r3
	    beq      lbl_80423054
	    lis      r3, __vt__9DvdThread@ha
	    addic.   r0, r30, 0x7c
	    addi     r0, r3, __vt__9DvdThread@l
	    stw      r0, 0(r30)
	    beq      lbl_80423024
	    addi     r3, r30, 0x7c
	    li       r4, 0
	    bl       __dt__10JSUPtrListFv

	lbl_80423024:
	    cmplwi   r30, 0
	    beq      lbl_80423044
	    lis      r4, __vt__9AppThread@ha
	    mr       r3, r30
	    addi     r0, r4, __vt__9AppThread@l
	    li       r4, 0
	    stw      r0, 0(r30)
	    bl       __dt__9JKRThreadFv

	lbl_80423044:
	    extsh.   r0, r31
	    ble      lbl_80423054
	    mr       r3, r30
	    bl       __dl__FPv

	lbl_80423054:
	    lwz      r0, 0x14(r1)
	    mr       r3, r30
	    lwz      r31, 0xc(r1)
	    lwz      r30, 8(r1)
	    mtlr     r0
	    addi     r1, r1, 0x10
	    blr
	*/
}

/*
 * --INFO--
 * Address:	80423070
 * Size:	000010
 */
JFWDisplay* System::setCurrentDisplay(JFWDisplay* display)
{
	JFWDisplay* old = m_display;
	m_display       = display;
	return old;
}

/*
 * --INFO--
 * Address:	80423080
 * Size:	00001C
 */
u32 System::clearCurrentDisplay(JFWDisplay* display)
{
	if (m_display == display) {
		m_display = nullptr;
	}
	return 0;
}

/*
 * --INFO--
 * Address:	8042309C
 * Size:	00003C
 */
bool System::beginFrame()
{
	m_cpuRetraceCount = 0;
	JUTGamePad::read();
	m_dvdStatus->update();
}

/*
 * --INFO--
 * Address:	804230D8
 * Size:	00005C
 */
void System::endFrame()
{
	m_display->endFrame();
	inactiveGP();
	m_resetMgr->update();
	if (JKRThreadSwitch::sManager) {
		JKRThreadSwitch::sManager->loopProc();
	}
}

/*
 * --INFO--
 * Address:	80423134
 * Size:	000048
 */
void System::beginRender()
{
	m_display->beginRender();
	/*
	    stwu     r1, -0x10(r1)
	    mflr     r0
	    stw      r0, 0x14(r1)
	    stw      r31, 0xc(r1)
	    mr       r31, r3
	    bl       activeGP__6SystemFv
	    li       r3, 0
	    bl       CARDProbe
	    lwz      r3, 0x4c(r31)
	    lwz      r12, 0(r3)
	    lwz      r12, 8(r12)
	    mtctr    r12
	    bctrl
	    lwz      r0, 0x14(r1)
	    lwz      r31, 0xc(r1)
	    mtlr     r0
	    addi     r1, r1, 0x10
	    blr
	*/
}

/*
 * --INFO--
 * Address:	8042317C
 * Size:	000098
 */
void System::endRender()
{
	PSSystem::SysIF* sysif = PSSystem::spSysIF;
	if (PSSystem::spSysIF) {
		sys->m_timers->_start("sound", true);
		sysif->mainLoop();
		sys->m_timers->_stop("sound");
	}
	m_dvdStatus->draw();
	m_resetMgr->draw();
	m_display->endRender();
	/*
	    stwu     r1, -0x10(r1)
	    mflr     r0
	    stw      r0, 0x14(r1)
	    stw      r31, 0xc(r1)
	    stw      r30, 8(r1)
	    mr       r30, r3
	    lwz      r31, spSysIF__8PSSystem@sda21(r13)
	    cmplwi   r31, 0
	    beq      lbl_804231CC
	    lwz      r3, sys@sda21(r13)
	    addi     r4, r2, lbl_80520428@sda21
	    li       r5, 1
	    lwz      r3, 0x28(r3)
	    bl       _start__9SysTimersFPcb
	    mr       r3, r31
	    bl       mainLoop__Q28PSSystem5SysIFFv
	    lwz      r3, sys@sda21(r13)
	    addi     r4, r2, lbl_80520428@sda21
	    lwz      r3, 0x28(r3)
	    bl       _stop__9SysTimersFPc

	lbl_804231CC:
	    lwz      r3, 0x48(r30)
	    bl       draw__9DvdStatusFv
	    lwz      r3, 0x44(r30)
	    lwz      r12, 0(r3)
	    lwz      r12, 8(r12)
	    mtctr    r12
	    bctrl
	    lwz      r3, 0x4c(r30)
	    lwz      r12, 0(r3)
	    lwz      r12, 0xc(r12)
	    mtctr    r12
	    bctrl
	    lwz      r0, 0x14(r1)
	    lwz      r31, 0xc(r1)
	    lwz      r30, 8(r1)
	    mtlr     r0
	    addi     r1, r1, 0x10
	    blr
	*/
}

/*
 * --INFO--
 * Address:	80423214
 * Size:	000010
 */
ERenderMode System::setRenderMode(ERenderMode mode)
{
	mRenderMode = mode;
	/*
	    lwz      r0, mRenderMode__6System@sda21(r13)
	    stw      r3, mRenderMode__6System@sda21(r13)
	    mr       r3, r0
	    blr
	*/
}

/*
 * --INFO--
 * Address:	80423224
 * Size:	000018
 */
_GXRenderModeObj* System::getRenderModeObj()
{
	return sRenderModeTable[mRenderMode];
	/*
	    lwz      r0, mRenderMode__6System@sda21(r13)
	    lis      r3, sRenderModeTable@ha
	    addi     r3, r3, sRenderModeTable@l
	    slwi     r0, r0, 2
	    lwzx     r3, r3, r0
	    blr
	*/
}

/*
 * --INFO--
 * Address:	8042323C
 * Size:	000120
 */
void System::changeRenderMode(ERenderMode)
{
	/*
	    stwu     r1, -0x20(r1)
	    mflr     r0
	    lis      r5, gStrSystem_CPP@ha
	    stw      r0, 0x24(r1)
	    stw      r31, 0x1c(r1)
	    addi     r31, r5, gStrSystem_CPP@l
	    stw      r30, 0x18(r1)
	    stw      r29, 0x14(r1)
	    mr       r29, r4
	    stw      r28, 0x10(r1)
	    mr       r28, r3
	    lwz      r30, sManager__8JUTVideo@sda21(r13)
	    cmplwi   r30, 0
	    bne      lbl_80423288
	    addi     r3, r31, 0
	    addi     r5, r31, 0x174
	    li       r4, 0x761
	    crclr    6
	    bl       panic_f__12JUTExceptionFPCciPCce

	lbl_80423288:
	    lwz      r0, mRenderMode__6System@sda21(r13)
	    cmpw     r0, r29
	    beq      lbl_804232C4
	    stw      r29, mRenderMode__6System@sda21(r13)
	    li       r3, 1
	    bl       VISetBlack
	    bl       VIFlush
	    bl       VIWaitForRetrace
	    lwz      r0, mRenderMode__6System@sda21(r13)
	    lis      r3, sRenderModeTable@ha
	    addi     r4, r3, sRenderModeTable@l
	    mr       r3, r30
	    slwi     r0, r0, 2
	    lwzx     r4, r4, r0
	    bl       setRenderMode__8JUTVideoFPC16_GXRenderModeObj

	lbl_804232C4:
	    cmpwi    r29, 2
	    beq      lbl_80423304
	    bge      lbl_804232E0
	    cmpwi    r29, 0
	    beq      lbl_804232EC
	    bge      lbl_804232F8
	    b        lbl_8042331C

	lbl_804232E0:
	    cmpwi    r29, 4
	    bge      lbl_8042331C
	    b        lbl_80423310

	lbl_804232EC:
	    li       r3, 0
	    bl       OSSetProgressiveMode
	    b        lbl_80423334

	lbl_804232F8:
	    li       r3, 1
	    bl       OSSetProgressiveMode
	    b        lbl_80423334

	lbl_80423304:
	    li       r3, 0
	    bl       OSSetEuRgb60Mode
	    b        lbl_80423334

	lbl_80423310:
	    li       r3, 1
	    bl       OSSetEuRgb60Mode
	    b        lbl_80423334

	lbl_8042331C:
	    mr       r6, r29
	    addi     r3, r31, 0
	    addi     r5, r31, 0x204
	    li       r4, 0x781
	    crclr    6
	    bl       panic_f__12JUTExceptionFPCciPCce

	lbl_80423334:
	    lwz      r3, 0x60(r28)
	    bl       setDeflicker__Q34Game14CommonSaveData3MgrFv
	    lwz      r0, 0x24(r1)
	    lwz      r31, 0x1c(r1)
	    lwz      r30, 0x18(r1)
	    lwz      r29, 0x14(r1)
	    lwz      r28, 0x10(r1)
	    mtlr     r0
	    addi     r1, r1, 0x20
	    blr
	*/
}

/*
 * --INFO--
 * Address:	8042335C
 * Size:	000008
 */
u32 System::heapStatusStart(char*, JKRHeap*) { return 0x0; }

/*
 * --INFO--
 * Address:	80423364
 * Size:	000004
 */
void System::heapStatusEnd(char*) { }

/*
 * --INFO--
 * Address:	80423368
 * Size:	000004
 */
void System::heapStatusDump(bool) { }

/*
 * --INFO--
 * Address:	8042336C
 * Size:	000004
 */
void System::heapStatusIndividual() { }

/*
 * --INFO--
 * Address:	80423370
 * Size:	000004
 */
void System::heapStatusNormal() { }

/*
 * --INFO--
 * Address:	........
 * Size:	000004
 */
void System::heapStatusDumpNode()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80423374
 * Size:	000028
 */
void System::resetOn(bool flag)
{
	ResetManager* mgr = m_resetMgr;
	mgr->m_flags.typeView |= 1;
	if (flag) {
		mgr->m_flags.typeView |= 8;
	}
}

/*
 * --INFO--
 * Address:	........
 * Size:	000020
 */
void System::resetOff()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8042339C
 * Size:	000014
 */
void System::resetPermissionOn() { m_resetMgr->m_flags.typeView |= 0x10000000; }

/*
 * --INFO--
 * Address:	804233B0
 * Size:	000018
 */
bool System::isResetActive() { return m_resetMgr->m_state; }

/*
 * --INFO--
 * Address:	804233C8
 * Size:	000014
 */
void System::activeGP() { m_resetMgr->m_flags.typeView |= 2; }

/*
 * --INFO--
 * Address:	804233DC
 * Size:	000014
 */
void System::inactiveGP() { m_resetMgr->m_flags.typeView &= ~2; }

/*
 * --INFO--
 * Address:	804233F0
 * Size:	000024
 */
bool System::isDvdErrorOccured() { return m_dvdStatus->isErrorOccured(); }

/*
 * --INFO--
 * Address:	80423414
 * Size:	000034
 */
void System::initCurrentHeapMutex()
{
	// OSInitMutex(); looks like system may inherit a mutex?
	m_backupHeap = nullptr;

	/*
	    stwu     r1, -0x10(r1)
	    mflr     r0
	    stw      r0, 0x14(r1)
	    stw      r31, 0xc(r1)
	    mr       r31, r3
	    bl       OSInitMutex
	    li       r0, 0
	    stw      r0, 0x18(r31)
	    lwz      r0, 0x14(r1)
	    lwz      r31, 0xc(r1)
	    mtlr     r0
	    addi     r1, r1, 0x10
	    blr
	*/
}

/*
 * --INFO--
 * Address:	80423448
 * Size:	000070
 */
void System::startChangeCurrentHeap(JKRHeap* newheap)
{
	// OSLockMutex();
	P2ASSERTLINE(2033, !m_backupHeap);
	m_backupHeap = getCurrentHeap();
	newheap->becomeCurrentHeap();
	/*
	    stwu     r1, -0x10(r1)
	    mflr     r0
	    stw      r0, 0x14(r1)
	    stw      r31, 0xc(r1)
	    mr       r31, r4
	    stw      r30, 8(r1)
	    mr       r30, r3
	    bl       OSLockMutex
	    lwz      r0, 0x18(r30)
	    cmplwi   r0, 0
	    beq      lbl_80423490
	    lis      r3, gStrSystem_CPP@ha
	    lis      r5, lbl_8049993C@ha
	    addi     r3, r3, gStrSystem_CPP@l
	    li       r4, 0x7f1
	    addi     r5, r5, lbl_8049993C@l
	    crclr    6
	    bl       panic_f__12JUTExceptionFPCciPCce

	lbl_80423490:
	    lwz      r0, sCurrentHeap__7JKRHeap@sda21(r13)
	    mr       r3, r31
	    stw      r0, 0x18(r30)
	    bl       becomeCurrentHeap__7JKRHeapFv
	    lwz      r0, 0x14(r1)
	    lwz      r31, 0xc(r1)
	    lwz      r30, 8(r1)
	    mtlr     r0
	    addi     r1, r1, 0x10
	    blr
	*/
}

/*
 * --INFO--
 * Address:	804234B8
 * Size:	000068
 */
void System::endChangeCurrentHeap()
{
	P2ASSERTLINE(2041, m_backupHeap);
	m_backupHeap->becomeCurrentHeap();
	m_backupHeap = nullptr;
	// OSUnlockMutex();
	/*
	    stwu     r1, -0x10(r1)
	    mflr     r0
	    stw      r0, 0x14(r1)
	    stw      r31, 0xc(r1)
	    mr       r31, r3
	    lwz      r0, 0x18(r3)
	    cmplwi   r0, 0
	    bne      lbl_804234F4
	    lis      r3, gStrSystem_CPP@ha
	    lis      r5, lbl_8049993C@ha
	    addi     r3, r3, gStrSystem_CPP@l
	    li       r4, 0x7f9
	    addi     r5, r5, lbl_8049993C@l
	    crclr    6
	    bl       panic_f__12JUTExceptionFPCciPCce

	lbl_804234F4:
	    lwz      r3, 0x18(r31)
	    bl       becomeCurrentHeap__7JKRHeapFv
	    li       r0, 0
	    mr       r3, r31
	    stw      r0, 0x18(r31)
	    bl       OSUnlockMutex
	    lwz      r0, 0x14(r1)
	    lwz      r31, 0xc(r1)
	    mtlr     r0
	    addi     r1, r1, 0x10
	    blr
	*/
}

/*
 * --INFO--
 * Address:	80423520
 * Size:	000004
 */
void System::addGenNode(CNode*) { }

/*
 * --INFO--
 * Address:	80423524
 * Size:	000004
 */
void System::initGenNode() { }

/*
 * --INFO--
 * Address:	80423528
 * Size:	000004
 */
void System::refreshGenNode() { }

/*
 * --INFO--
 * Address:	8042352C
 * Size:	0000A0
 */
void System::setFrameRate(int newFactor)
{
	JFWDisplay* display = m_display;
	JUT_ASSERTLINE(2343, display, "no display\n");
	m_fpsFactor                   = (f32)newFactor;
	m_deltaTime                   = m_fpsFactor / 60.0f;
	display->m_secondsPer60Frames = newFactor;
	display->_20                  = 0;
	/*
	    stwu     r1, -0x20(r1)
	    mflr     r0
	    stw      r0, 0x24(r1)
	    stw      r31, 0x1c(r1)
	    stw      r30, 0x18(r1)
	    mr       r30, r4
	    stw      r29, 0x14(r1)
	    mr       r29, r3
	    lwz      r31, 0x4c(r3)
	    cmplwi   r31, 0
	    bne      lbl_80423574
	    lis      r3, gStrSystem_CPP@ha
	    lis      r5, lbl_804999E4@ha
	    addi     r3, r3, gStrSystem_CPP@l
	    li       r4, 0x927
	    addi     r5, r5, lbl_804999E4@l
	    crclr    6
	    bl       panic_f__12JUTExceptionFPCciPCce

	lbl_80423574:
	    xoris    r0, r30, 0x8000
	    lis      r3, 0x4330
	    stw      r0, 0xc(r1)
	    li       r0, 0
	    lfd      f2, lbl_80520438@sda21(r2)
	    stw      r3, 8(r1)
	    lfs      f0, lbl_80520430@sda21(r2)
	    lfd      f1, 8(r1)
	    fsubs    f1, f1, f2
	    stfs     f1, 0x64(r29)
	    lfs      f1, 0x64(r29)
	    fdivs    f0, f1, f0
	    stfs     f0, 0x54(r29)
	    sth      r30, 0x1c(r31)
	    stw      r0, 0x20(r31)
	    lwz      r31, 0x1c(r1)
	    lwz      r30, 0x18(r1)
	    lwz      r0, 0x24(r1)
	    lwz      r29, 0x14(r1)
	    mtlr     r0
	    addi     r1, r1, 0x20
	    blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000A0
 */
void System::forceFinishSection()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	804235CC
 * Size:	000008
 */
// u32 ISectionMgr::getCurrentSection() { return 0x0; }

/*
 * --INFO--
 * Address:	804235D4
 * Size:	000060
 */
bool System::dvdLoadSyncNoBlock(DvdThreadCommand* command)
{
	DvdThread* thread = m_dvdThread;

	bool check;
	if (thread) {
		check = thread->sync(command, (DvdThread::ESyncBlockFlag)1);
	} else {
		check = true;
	}

	if (check) {
		check = m_dvdStatus->isErrorOccured();
	}
	return check;
	/*
	    stwu     r1, -0x10(r1)
	    mflr     r0
	    stw      r0, 0x14(r1)
	    stw      r31, 0xc(r1)
	    mr       r31, r3
	    lwz      r3, 0x40(r3)
	    cmplwi   r3, 0
	    beq      lbl_80423600
	    li       r5, 1
	    bl       sync__9DvdThreadFP16DvdThreadCommandQ29DvdThread14ESyncBlockFlag
	    b        lbl_80423604

	lbl_80423600:
	    li       r3, 1

	lbl_80423604:
	    clrlwi.  r0, r3, 0x18
	    beq      lbl_80423620
	    lwz      r3, 0x48(r31)
	    bl       isErrorOccured__9DvdStatusFv
	    clrlwi   r0, r3, 0x18
	    cntlzw   r0, r0
	    srwi     r3, r0, 5

	lbl_80423620:
	    lwz      r0, 0x14(r1)
	    lwz      r31, 0xc(r1)
	    mtlr     r0
	    addi     r1, r1, 0x10
	    blr
	*/
}

/*
 * --INFO--
 * Address:	80423634
 * Size:	00005C
 */
int System::dvdLoadSyncAllNoBlock()
{
	if (m_dvdStatus->isErrorOccured()) {
		return -1;
	} else {
		if (m_dvdThread) {
			return m_dvdThread->syncAll((DvdThread::ESyncBlockFlag)1);
		} else {
			return 0;
		}
	}
}

/*
 * --INFO--
 * Address:	80423690
 * Size:	000060
 */
AppThread::~AppThread()
{
	/*
	    stwu     r1, -0x10(r1)
	    mflr     r0
	    stw      r0, 0x14(r1)
	    stw      r31, 0xc(r1)
	    mr       r31, r4
	    stw      r30, 8(r1)
	    or.      r30, r3, r3
	    beq      lbl_804236D4
	    lis      r5, __vt__9AppThread@ha
	    li       r4, 0
	    addi     r0, r5, __vt__9AppThread@l
	    stw      r0, 0(r30)
	    bl       __dt__9JKRThreadFv
	    extsh.   r0, r31
	    ble      lbl_804236D4
	    mr       r3, r30
	    bl       __dl__FPv

	lbl_804236D4:
	    lwz      r0, 0x14(r1)
	    mr       r3, r30
	    lwz      r31, 0xc(r1)
	    lwz      r30, 8(r1)
	    mtlr     r0
	    addi     r1, r1, 0x10
	    blr
	*/
}

namespace PSM {

/*
 * --INFO--
 * Address:	804236F0
 * Size:	000038
 */
PSM::SceneMgr* Factory::newSceneMgr()
{
	/*
	    stwu     r1, -0x10(r1)
	    mflr     r0
	    li       r3, 0x14
	    stw      r0, 0x14(r1)
	    bl       __nw__FUl
	    or.      r0, r3, r3
	    beq      lbl_80423714
	    bl       __ct__Q23PSM8SceneMgrFv
	    mr       r0, r3

	lbl_80423714:
	    mr       r3, r0
	    lwz      r0, 0x14(r1)
	    mtlr     r0
	    addi     r1, r1, 0x10
	    blr
	*/
}

} // namespace PSM

/*
 * --INFO--
 * Address:	80423728
 * Size:	000030
 */
void Delegate<System>::invoke()
{
	/*
	    stwu     r1, -0x10(r1)
	    mflr     r0
	    mr       r4, r3
	    stw      r0, 0x14(r1)
	    addi     r12, r4, 8
	    lwz      r3, 4(r3)
	    bl       __ptmf_scall
	    nop
	    lwz      r0, 0x14(r1)
	    mtlr     r0
	    addi     r1, r1, 0x10
	    blr
	*/
}

/*
 * --INFO--
 * Address:	80423758
 * Size:	000018
 */
void __sinit_system_cpp()
{
	/*
	    li       r4, 1
	    li       r0, 0
	    addi     r3, r13, sVerifyArg__6System@sda21
	    stw      r4, sVerifyArg__6System@sda21(r13)
	    stb      r0, 4(r3)
	    blr
	*/
}
