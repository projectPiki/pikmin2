#include "Dolphin/gba.h"
#include "Dolphin/dsp.h"
#include "Dolphin/os.h"

#define OS_BASE_CACHED          0x80000000
#define OS_BUS_CLOCK_SPEED_ADDR 0xF8
#define OSPhysicalToCached(paddr) ((void*)((u32)(paddr)-OS_BASE_CACHED))

// From this file:
char* __GBAVersion = "<< Dolphin SDK - GBA\trelease build: Dec  3 2003 18:41:55 (0x2301) >>";
OSFunctionInfo ResetFunctionInfo = { OnReset, 0x7E };
GBA __GBA[4];
SecParam SecParams[4];
BOOL __GBAReset;



// From other files:
extern BOOL Initialized; // pad.c

/*
 * --INFO--
 * Address:	800FEB2C
 * Size:	000054
 */
void ShortCommandProc(int portIndex)
{
	GBA* port = &__GBA[portIndex];
	if (port->_20 != 0) {
		return;
	}
	if ((port->_05 != 0) || (port->_06 != 4))  {
		port->_20 = 1;
		return;
	}
	*port->_14 = port->_07 & 0x3A;
}

/*
 * --INFO--
 * Address:	800FEB80
 * Size:	0000C0
 */
void GBAInit(void)
{
	int i;
	u32 busClockSpeed;
	SecParam* sp;
	GBA* gba;
	if (Initialized == FALSE) {
		Initialized = TRUE;
		busClockSpeed = *(u32*)0x800000F8 >> 2;
		OSRegisterVersion(__GBAVersion);
		for (i = 0; i < 4; i++) {
			sp = &SecParams[i];
			gba = &__GBA[i];
			gba->_34 = (busClockSpeed / 125000) * 60 >> 3;
			gba->_30 = 0;
			OSInitThreadQueue(&gba->_24);
			gba->m_secParam = sp;
		}
		OSInitAlarm();
		DSPInit();
		__GBAReset = FALSE;
		OSRegisterResetFunction(&ResetFunctionInfo);
	}
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x20(r1)
	  stmw      r27, 0xC(r1)
	  lwz       r0, -0x6E68(r13)
	  cmpwi     r0, 0
	  bne-      .loc_0xAC
	  li        r0, 0x1
	  lwz       r3, -0x7C48(r13)
	  stw       r0, -0x6E68(r13)
	  bl        -0x13120
	  lis       r3, 0x8000
	  lwz       r0, 0xF8(r3)
	  lis       r3, 0x431C
	  lis       r4, 0x804F
	  rlwinm    r0,r0,30,2,31
	  subi      r3, r3, 0x217D
	  mulhwu    r0, r3, r0
	  rlwinm    r0,r0,17,15,31
	  mulli     r0, r0, 0x3C
	  lis       r3, 0x804F
	  addi      r29, r4, 0x75C0
	  addi      r28, r3, 0x74C0
	  rlwinm    r30,r0,29,3,31
	  li        r27, 0
	  li        r31, 0

	.loc_0x68:
	  stw       r30, 0x34(r29)
	  addi      r3, r29, 0x24
	  stw       r31, 0x30(r29)
	  bl        -0xD240
	  addi      r27, r27, 0x1
	  stw       r28, 0xF8(r29)
	  cmpwi     r27, 0x4
	  addi      r29, r29, 0x100
	  addi      r28, r28, 0x40
	  blt+      .loc_0x68
	  bl        -0x1315C
	  bl        -0x23ED8
	  li        r0, 0
	  lis       r3, 0x804B
	  stw       r0, -0x6E64(r13)
	  subi      r3, r3, 0x5EC0
	  bl        -0xE984

	.loc_0xAC:
	  lmw       r27, 0xC(r1)
	  lwz       r0, 0x24(r1)
	  addi      r1, r1, 0x20
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000064
 */
int GBAGetStatusAsync(int portIndex, u8* p2)
{
	// UNUSED FUNCTION
	GBA* gba = &__GBA[portIndex];
	if (gba->m_syncCallback != nullptr) {
		return 2;
	}
	gba->_00 = 0;
	gba->_14 = p2;
	gba->m_syncCallback = __GBASyncCallback;
	return __GBATransfer(portIndex, 1, 3, ShortCommandProc);
}

/*
 * --INFO--
 * Address:	800FEC40
 * Size:	000090
 */
int GBAGetStatus(int portIndex, u8* p2)
{
	int status = GBAGetStatusAsync(portIndex, p2);
	return (status != 0) ? status : __GBASync(portIndex);
}

/*
 * --INFO--
 * Address:	........
 * Size:	000064
 */
int GBAResetAsync(int portIndex, u8* p2)
{
	// UNUSED FUNCTION
	GBA* gba = &__GBA[portIndex];
	if (gba->m_syncCallback != nullptr) {
		return 2;
	}
	gba->_00 = 0xFF;
	gba->_14 = p2;
	gba->m_syncCallback = __GBASyncCallback;
	return __GBATransfer(portIndex, 1, 3, ShortCommandProc);
}

/*
 * --INFO--
 * Address:	800FECD0
 * Size:	000090
 */
int GBAReset(int portIndex, u8* p2)
{
	int status = GBAResetAsync(portIndex, p2);
	return (status != 0) ? status : __GBASync(portIndex);
}

/*
 * --INFO--
 * Address:	800FED60
 * Size:	000010
 */
int OnReset(void)
{
	__GBAReset = TRUE;
	return 1;
}
