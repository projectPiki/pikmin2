#include "Dolphin/gba.h"
#include "Dolphin/os.h"

/*
 * --INFO--
 * Address:	800FEF58
 * Size:	0000DC
 */
void __GBAHandler(int portIndex, u32 p2, OSContext* context)
{
	GBASyncCallback syncCallback;
	GBAProcHandler procHandler;
	GBA* gba = &__GBA[portIndex];
	int _unused1;
	int _unused2;
	OSContext syncContext;
	int _unused3;
	if (__GBAReset == FALSE) {
		if (p2 & 0xF) {
			gba->_20 = 1;
		} else {
			gba->_20 = 0;
		}
		procHandler = gba->_38;
		if (procHandler != nullptr) {
			gba->_38 = nullptr;
			procHandler(portIndex);
		}
		if (gba->m_syncCallback != nullptr) {
			OSClearContext(&syncContext);
			OSSetCurrentContext(&syncContext);
			syncCallback        = gba->m_syncCallback;
			gba->m_syncCallback = nullptr;
			syncCallback(portIndex, gba->_20);
			OSClearContext(&syncContext);
			OSSetCurrentContext(context);
		}
	}
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x2F8(r1)
	  stw       r31, 0x2F4(r1)
	  stw       r30, 0x2F0(r1)
	  addi      r30, r5, 0
	  stw       r29, 0x2EC(r1)
	  addi      r29, r3, 0
	  lis       r3, 0x804F
	  lwz       r0, -0x6E64(r13)
	  rlwinm    r6,r29,8,0,23
	  cmpwi     r0, 0
	  addi      r0, r3, 0x75C0
	  add       r31, r0, r6
	  bne-      .loc_0xC0
	  rlwinm.   r0,r4,0,28,31
	  beq-      .loc_0x50
	  li        r0, 0x1
	  stw       r0, 0x20(r31)
	  b         .loc_0x58

	.loc_0x50:
	  li        r0, 0
	  stw       r0, 0x20(r31)

	.loc_0x58:
	  lwz       r12, 0x38(r31)
	  cmplwi    r12, 0
	  beq-      .loc_0x78
	  li        r0, 0
	  mtlr      r12
	  stw       r0, 0x38(r31)
	  mr        r3, r29
	  blrl

	.loc_0x78:
	  lwz       r0, 0x1C(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0xC0
	  addi      r3, r1, 0x18
	  bl        -0x11E74
	  addi      r3, r1, 0x18
	  bl        -0x12044
	  lwz       r12, 0x1C(r31)
	  li        r0, 0
	  addi      r3, r29, 0
	  stw       r0, 0x1C(r31)
	  mtlr      r12
	  lwz       r4, 0x20(r31)
	  blrl
	  addi      r3, r1, 0x18
	  bl        -0x11EA0
	  mr        r3, r30
	  bl        -0x12070

	.loc_0xC0:
	  lwz       r0, 0x2FC(r1)
	  lwz       r31, 0x2F4(r1)
	  lwz       r30, 0x2F0(r1)
	  lwz       r29, 0x2EC(r1)
	  addi      r1, r1, 0x2F8
	  mtlr      r0
	  blr
	*/
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
	while (gba->m_syncCallback != nullptr) {
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
void TypeAndStatusCallback(int portIndex, u32 flags)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x2F0(r1)
	  stw       r31, 0x2EC(r1)
	  addi      r31, r3, 0
	  lis       r3, 0x804F
	  stw       r30, 0x2E8(r1)
	  rlwinm    r5,r31,8,0,23
	  stw       r29, 0x2E4(r1)
	  lwz       r0, -0x6E64(r13)
	  cmpwi     r0, 0
	  addi      r0, r3, 0x75C0
	  add       r30, r0, r5
	  bne-      .loc_0x108
	  rlwinm.   r0,r4,0,24,31
	  bne-      .loc_0x50
	  rlwinm    r3,r4,0,0,15
	  subis     r0, r3, 0x4
	  cmplwi    r0, 0
	  beq-      .loc_0x5C

	.loc_0x50:
	  li        r0, 0x1
	  stw       r0, 0x20(r30)
	  b         .loc_0x94

	.loc_0x5C:
	  lis       r3, 0x8010
	  lwz       r5, 0xC(r30)
	  subi      r8, r3, 0x10A8
	  lwz       r7, 0x10(r30)
	  lwz       r9, 0x30(r30)
	  mr        r3, r31
	  lwz       r10, 0x34(r30)
	  addi      r4, r30, 0
	  addi      r6, r30, 0x5
	  bl        -0x926C
	  cmpwi     r3, 0
	  bne-      .loc_0x108
	  li        r0, 0x2
	  stw       r0, 0x20(r30)

	.loc_0x94:
	  lwz       r12, 0x38(r30)
	  cmplwi    r12, 0
	  beq-      .loc_0xB4
	  li        r0, 0
	  mtlr      r12
	  stw       r0, 0x38(r30)
	  mr        r3, r31
	  blrl

	.loc_0xB4:
	  lwz       r0, 0x1C(r30)
	  cmplwi    r0, 0
	  beq-      .loc_0x108
	  bl        -0x12194
	  addi      r29, r3, 0
	  addi      r3, r1, 0x10
	  bl        -0x12034
	  addi      r3, r1, 0x10
	  bl        -0x12204
	  lwz       r12, 0x1C(r30)
	  li        r0, 0
	  addi      r3, r31, 0
	  stw       r0, 0x1C(r30)
	  mtlr      r12
	  lwz       r4, 0x20(r30)
	  blrl
	  addi      r3, r1, 0x10
	  bl        -0x12060
	  mr        r3, r29
	  bl        -0x12230
	  bl        -0xD278

	.loc_0x108:
	  lwz       r0, 0x2F4(r1)
	  lwz       r31, 0x2EC(r1)
	  lwz       r30, 0x2E8(r1)
	  lwz       r29, 0x2E4(r1)
	  addi      r1, r1, 0x2F0
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800FF1F8
 * Size:	000074
 */
unknown __GBATransfer(int, unknown, unknown, GBAProcHandler)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x30(r1)
	  stmw      r27, 0x1C(r1)
	  addi      r27, r3, 0
	  lis       r3, 0x804F
	  rlwinm    r7,r27,8,0,23
	  addi      r0, r3, 0x75C0
	  addi      r28, r4, 0
	  addi      r29, r5, 0
	  addi      r31, r6, 0
	  add       r30, r0, r7
	  bl        -0x105F0
	  stw       r31, 0x38(r30)
	  lis       r4, 0x8010
	  addi      r31, r3, 0
	  stw       r28, 0xC(r30)
	  subi      r4, r4, 0xF2C
	  mr        r3, r27
	  stw       r29, 0x10(r30)
	  bl        -0x8D98
	  mr        r3, r31
	  bl        -0x105F0
	  lmw       r27, 0x1C(r1)
	  li        r3, 0
	  lwz       r0, 0x34(r1)
	  addi      r1, r1, 0x30
	  mtlr      r0
	  blr
	*/
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
