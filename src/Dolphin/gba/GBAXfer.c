#include "Dolphin/gba.h"
#include "Dolphin/os.h"
#include "Dolphin/si.h"


/*
 * --INFO--
 * Address:	800FEF58
 * Size:	0000DC
 */
static void __GBAHandler(int portIndex, u32 p2, OSContext* context)
{
	GBASyncCallback syncCallback;
	GBAProcHandler procHandler;
	GBA* gba = &__GBA[portIndex];
	OSContext syncContext;
    
	if (__GBAReset == FALSE) {
		if (p2 & 0xF) {
			gba->_20 = 1;
		} else {
			gba->_20 = 0;
		}
		procHandler = getGBAHandler(gba);
		if (procHandler != nullptr) {
			gba->_38 = nullptr;
			procHandler(portIndex);
		}
		if (gba->mSyncCallback != nullptr) {
			OSClearContext(&syncContext);
			OSSetCurrentContext(&syncContext);
			syncCallback       = gba->mSyncCallback;
			gba->mSyncCallback = nullptr;
			syncCallback(portIndex, gba->_20);
			OSClearContext(&syncContext);
			OSSetCurrentContext(context);
		}
	}
}

/*
 * --INFO--
 * Address:	800FF034
 * Size:	000034
 */
void __GBASyncCallback(int portIndex, int p2) { OSWakeupThread(&__GBA[portIndex]._24); }

/*
 * --INFO--
 * Address:	800FF068
 * Size:	00006C
 */
int __GBASync(int portIndex)
{
	int result;
	GBA* gba       = &__GBA[portIndex];
	int interrupts = OSDisableInterrupts();
	while (gba->mSyncCallback != nullptr) {
		OSSleepThread(&gba->_24);
	}
	result = gba->_20;
	OSRestoreInterrupts(interrupts);
	return result;

	/*
	.loc_0x0:
	  mflr      r0
	  lis       r4, 0x804F
	  stw       r0, 0x4(r1)
	  rlwinm    r3,r3,8,0,23
	  addi      r0, r4, 0x75C0
	  stwu      r1, -0x18(r1)
	  stw       r31, 0x14(r1)
	  add       r31, r0, r3
	  stw       r30, 0x10(r1)
	  bl        -0x10454
	  mr        r30, r3
	  b         .loc_0x38

	.loc_0x30:
	  addi      r3, r31, 0x24
	  bl        -0xC7B0

	.loc_0x38:
	  lwz       r0, 0x1C(r31)
	  cmplwi    r0, 0
	  bne+      .loc_0x30
	  lwz       r31, 0x20(r31)
	  mr        r3, r30
	  bl        -0x10454
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
 * Address:	800FF0D4
 * Size:	000124
 */
static void TypeAndStatusCallback(int portIndex, u32 flags)
{
    GBA* gba = &__GBA[portIndex];
    OSContext* osContext;
    GBAProcHandler procHandler;
    OSContext sp10;
    GBASyncCallback syncCallback;


    
    if (__GBAReset == FALSE) {
        if ((u8)flags != 0 || ((flags & 0xFFFF0000) + 0xFFFC0000) != 0) {
            gba->_20 = 1;
        } else {
            if (SITransfer(portIndex, gba, gba->_0C, &gba->_05, gba->_10, &__GBAHandler, gba->_30, gba->_34) != 0) {
                return;
            }
            gba->_20 = 2;
        }
        procHandler = getGBAHandler(gba);
        if (procHandler != NULL) {
            gba->_38 = NULL;
            procHandler(portIndex);
        }
        if (gba->mSyncCallback != NULL) {
            osContext = OSGetCurrentContext();
            OSClearContext(&sp10);
            OSSetCurrentContext(&sp10);
            syncCallback = gba->mSyncCallback;
            gba->mSyncCallback = NULL;
            syncCallback(portIndex, gba->_20);
            OSClearContext(&sp10);
            OSSetCurrentContext(osContext);
            __OSReschedule();
        }
    }
}

/*
 * --INFO--
 * Address:	800FF1F8
 * Size:	000074
 */
BOOL __GBATransfer(int portIndex, u32 arg1, u32 arg2, GBAProcHandler gbaProcHandler)
{
    uint interruptsTemp;
    GBA* gba = &__GBA[portIndex];
    
    interruptsTemp = OSDisableInterrupts();
    gba->_38 = gbaProcHandler;
    gba->_0C = arg1;
    gba->_10 = arg2;
    SIGetTypeAsync(portIndex, &TypeAndStatusCallback);
    OSRestoreInterrupts(interruptsTemp);
    return FALSE;
}


/*
 * --INFO--
 * Address:	........
 * Size:	000024
 */
void __GBASetDelay(void)
{
	// UNUSED FUNCTION
}
