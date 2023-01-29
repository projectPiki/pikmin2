#include "types.h"
#include "Dolphin/os.h"

/*
 * --INFO--
 * Address:	800F1858
 * Size:	000004
 */
void DefaultSwitchThreadCallback(void) { }

/*
 * --INFO--
 * Address:	........
 * Size:	000074
 */
void OSSetSwitchThreadCallback(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800F185C
 * Size:	000158
 */
void __OSThreadInit(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  lis       r3, 0x804F
	  stw       r0, 0x4(r1)
	  li        r0, 0x2
	  li        r4, 0x10
	  stwu      r1, -0x18(r1)
	  stw       r31, 0x14(r1)
	  stw       r30, 0x10(r1)
	  stw       r29, 0xC(r1)
	  li        r29, 0
	  stw       r28, 0x8(r1)
	  addi      r28, r3, 0x6738
	  addi      r31, r28, 0x418
	  sth       r0, 0x6E0(r28)
	  li        r0, 0x1
	  addi      r3, r31, 0x2E8
	  sth       r0, 0x6E2(r28)
	  li        r0, -0x1
	  stw       r4, 0x6EC(r28)
	  stw       r4, 0x6E8(r28)
	  stw       r29, 0x6E4(r28)
	  stw       r0, 0x6F0(r28)
	  stw       r29, 0x708(r28)
	  bl        .loc_0x158
	  stw       r29, 0x710(r28)
	  lis       r30, 0x8000
	  addi      r3, r31, 0
	  stw       r29, 0x70C(r28)
	  stw       r31, 0xD8(r30)
	  bl        -0x4764
	  mr        r3, r31
	  bl        -0x4934
	  lis       r3, 0x8053
	  addi      r0, r3, 0xED8
	  lis       r3, 0x8052
	  stw       r0, 0x71C(r28)
	  addi      r0, r3, 0xED8
	  stw       r0, 0x720(r28)
	  lis       r3, 0xDEAE
	  subi      r0, r3, 0x4542
	  lwz       r3, 0x720(r28)
	  mr        r4, r31
	  stw       r0, 0x0(r3)
	  lwz       r12, -0x7C88(r13)
	  lwz       r3, 0xE4(r30)
	  mtlr      r12
	  blrl
	  stw       r31, 0xE4(r30)
	  li        r3, 0
	  bl        0x11C4
	  stw       r29, -0x7028(r13)
	  li        r30, 0
	  rlwinm    r0,r30,3,0,28
	  stw       r29, -0x7024(r13)
	  add       r29, r28, r0

	.loc_0xDC:
	  mr        r3, r29
	  bl        .loc_0x158
	  addi      r30, r30, 0x1
	  cmpwi     r30, 0x1F
	  addi      r29, r29, 0x8
	  ble+      .loc_0xDC
	  lis       r30, 0x8000
	  addi      r3, r30, 0xDC
	  bl        .loc_0x158
	  addi      r4, r30, 0xDC
	  lwzu      r3, 0x4(r4)
	  cmplwi    r3, 0
	  bne-      .loc_0x118
	  stw       r31, 0xDC(r30)
	  b         .loc_0x11C

	.loc_0x118:
	  stw       r31, 0x2FC(r3)

	.loc_0x11C:
	  stw       r3, 0x300(r31)
	  li        r30, 0
	  addi      r3, r28, 0x730
	  stw       r30, 0x2FC(r31)
	  stw       r31, 0x0(r4)
	  bl        -0x4820
	  stw       r30, -0x7020(r13)
	  lwz       r0, 0x1C(r1)
	  lwz       r31, 0x14(r1)
	  lwz       r30, 0x10(r1)
	  lwz       r29, 0xC(r1)
	  lwz       r28, 0x8(r1)
	  addi      r1, r1, 0x18
	  mtlr      r0
	  blr

	.loc_0x158:
	*/
}

/*
 * --INFO--
 * Address:	800F19B4
 * Size:	000010
 */
void OSInitThreadQueue(OSThreadQueue* threadQueue)
{
	/*
	.loc_0x0:
	  li        r0, 0
	  stw       r0, 0x4(r3)
	  stw       r0, 0x0(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800F19C4
 * Size:	00000C
 */
OSThread* OSGetCurrentThread()
{
	/*
	.loc_0x0:
	  lis       r3, 0x8000
	  lwz       r3, 0xE4(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00005C
 */
void __OSSwitchThread(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00001C
 */
BOOL OSIsThreadSuspended(OSThread* thread)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800F19D0
 * Size:	000034
 */
BOOL OSIsThreadTerminated(OSThread* thread)
{
	/*
	.loc_0x0:
	  lhz       r3, 0x2C8(r3)
	  li        r0, 0x1
	  cmplwi    r3, 0x8
	  beq-      .loc_0x1C
	  cmplwi    r3, 0
	  beq-      .loc_0x1C
	  li        r0, 0

	.loc_0x1C:
	  cmpwi     r0, 0
	  beq-      .loc_0x2C
	  li        r3, 0x1
	  blr

	.loc_0x2C:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000044
 */
BOOL __OSIsThreadActive(OSThread* thread)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800F1A04
 * Size:	000040
 */
s32 OSDisableScheduler(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x10(r1)
	  stw       r31, 0xC(r1)
	  bl        -0x2DDC
	  lwz       r4, -0x7020(r13)
	  addi      r0, r4, 0x1
	  stw       r0, -0x7020(r13)
	  mr        r31, r4
	  bl        -0x2DC8
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
 * Address:	800F1A44
 * Size:	000040
 */
s32 OSEnableScheduler(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x10(r1)
	  stw       r31, 0xC(r1)
	  bl        -0x2E1C
	  lwz       r4, -0x7020(r13)
	  subi      r0, r4, 0x1
	  stw       r0, -0x7020(r13)
	  mr        r31, r4
	  bl        -0x2E08
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
 * Address:	........
 * Size:	00006C
 */
void SetRun(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800F1A84
 * Size:	000068
 */
void UnsetRun(void)
{
	/*
	.loc_0x0:
	  lwz       r4, 0x2E0(r3)
	  lwz       r5, 0x2DC(r3)
	  cmplwi    r4, 0
	  lwz       r6, 0x2E4(r3)
	  bne-      .loc_0x1C
	  stw       r6, 0x4(r5)
	  b         .loc_0x20

	.loc_0x1C:
	  stw       r6, 0x2E4(r4)

	.loc_0x20:
	  cmplwi    r6, 0
	  bne-      .loc_0x30
	  stw       r4, 0x0(r5)
	  b         .loc_0x34

	.loc_0x30:
	  stw       r4, 0x2E0(r6)

	.loc_0x34:
	  lwz       r0, 0x0(r5)
	  cmplwi    r0, 0
	  bne-      .loc_0x5C
	  lwz       r0, 0x2D0(r3)
	  li        r4, 0x1
	  lwz       r5, -0x7028(r13)
	  subfic    r0, r0, 0x1F
	  slw       r0, r4, r0
	  andc      r0, r5, r0
	  stw       r0, -0x7028(r13)

	.loc_0x5C:
	  li        r0, 0
	  stw       r0, 0x2DC(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800F1AEC
 * Size:	00003C
 */
void __OSGetEffectivePriority(void)
{
	/*
	.loc_0x0:
	  lwz       r4, 0x2D4(r3)
	  lwz       r5, 0x2F4(r3)
	  b         .loc_0x2C

	.loc_0xC:
	  lwz       r3, 0x0(r5)
	  cmplwi    r3, 0
	  beq-      .loc_0x28
	  lwz       r0, 0x2D0(r3)
	  cmpw      r0, r4
	  bge-      .loc_0x28
	  mr        r4, r0

	.loc_0x28:
	  lwz       r5, 0x10(r5)

	.loc_0x2C:
	  cmplwi    r5, 0
	  bne+      .loc_0xC
	  mr        r3, r4
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800F1B28
 * Size:	0001C0
 */
void SetEffectivePriority(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x18(r1)
	  stw       r31, 0x14(r1)
	  mr        r31, r3
	  stw       r30, 0x10(r1)
	  addi      r30, r4, 0
	  lhz       r0, 0x2C8(r3)
	  cmpwi     r0, 0x3
	  beq-      .loc_0x1A4
	  bge-      .loc_0x3C
	  cmpwi     r0, 0x1
	  beq-      .loc_0x48
	  bge-      .loc_0x198
	  b         .loc_0x1A4

	.loc_0x3C:
	  cmpwi     r0, 0x5
	  bge-      .loc_0x1A4
	  b         .loc_0xC0

	.loc_0x48:
	  mr        r3, r31
	  bl        -0xF0
	  stw       r30, 0x2D0(r31)
	  lis       r3, 0x804F
	  addi      r0, r3, 0x6738
	  lwz       r3, 0x2D0(r31)
	  rlwinm    r3,r3,3,0,28
	  add       r0, r0, r3
	  stw       r0, 0x2DC(r31)
	  lwz       r4, 0x2DC(r31)
	  lwz       r3, 0x4(r4)
	  cmplwi    r3, 0
	  bne-      .loc_0x84
	  stw       r31, 0x0(r4)
	  b         .loc_0x88

	.loc_0x84:
	  stw       r31, 0x2E0(r3)

	.loc_0x88:
	  stw       r3, 0x2E4(r31)
	  li        r0, 0
	  li        r3, 0x1
	  stw       r0, 0x2E0(r31)
	  lwz       r4, 0x2DC(r31)
	  stw       r31, 0x4(r4)
	  lwz       r0, 0x2D0(r31)
	  lwz       r4, -0x7028(r13)
	  subfic    r0, r0, 0x1F
	  slw       r0, r3, r0
	  or        r0, r4, r0
	  stw       r0, -0x7028(r13)
	  stw       r3, -0x7024(r13)
	  b         .loc_0x1A4

	.loc_0xC0:
	  lwz       r4, 0x2E0(r31)
	  lwz       r5, 0x2E4(r31)
	  cmplwi    r4, 0
	  bne-      .loc_0xDC
	  lwz       r3, 0x2DC(r31)
	  stw       r5, 0x4(r3)
	  b         .loc_0xE0

	.loc_0xDC:
	  stw       r5, 0x2E4(r4)

	.loc_0xE0:
	  cmplwi    r5, 0
	  bne-      .loc_0xF4
	  lwz       r3, 0x2DC(r31)
	  stw       r4, 0x0(r3)
	  b         .loc_0xF8

	.loc_0xF4:
	  stw       r4, 0x2E0(r5)

	.loc_0xF8:
	  stw       r30, 0x2D0(r31)
	  lwz       r4, 0x2DC(r31)
	  lwz       r5, 0x0(r4)
	  b         .loc_0x10C

	.loc_0x108:
	  lwz       r5, 0x2E0(r5)

	.loc_0x10C:
	  cmplwi    r5, 0
	  beq-      .loc_0x124
	  lwz       r3, 0x2D0(r5)
	  lwz       r0, 0x2D0(r31)
	  cmpw      r3, r0
	  ble+      .loc_0x108

	.loc_0x124:
	  cmplwi    r5, 0
	  bne-      .loc_0x15C
	  lwz       r3, 0x4(r4)
	  cmplwi    r3, 0
	  bne-      .loc_0x140
	  stw       r31, 0x0(r4)
	  b         .loc_0x144

	.loc_0x140:
	  stw       r31, 0x2E0(r3)

	.loc_0x144:
	  stw       r3, 0x2E4(r31)
	  li        r0, 0
	  stw       r0, 0x2E0(r31)
	  lwz       r3, 0x2DC(r31)
	  stw       r31, 0x4(r3)
	  b         .loc_0x184

	.loc_0x15C:
	  stw       r5, 0x2E0(r31)
	  lwz       r3, 0x2E4(r5)
	  stw       r31, 0x2E4(r5)
	  cmplwi    r3, 0
	  stw       r3, 0x2E4(r31)
	  bne-      .loc_0x180
	  lwz       r3, 0x2DC(r31)
	  stw       r31, 0x0(r3)
	  b         .loc_0x184

	.loc_0x180:
	  stw       r31, 0x2E0(r3)

	.loc_0x184:
	  lwz       r3, 0x2F0(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x1A4
	  lwz       r3, 0x8(r3)
	  b         .loc_0x1A8

	.loc_0x198:
	  li        r0, 0x1
	  stw       r0, -0x7024(r13)
	  stw       r30, 0x2D0(r31)

	.loc_0x1A4:
	  li        r3, 0

	.loc_0x1A8:
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
 * Size:	000078
 */
void UpdatePriority(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800F1CE8
 * Size:	000050
 */
void __OSPromoteThread(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x18(r1)
	  stw       r31, 0x14(r1)
	  mr        r31, r4

	.loc_0x14:
	  lwz       r0, 0x2CC(r3)
	  cmpwi     r0, 0
	  bgt-      .loc_0x3C
	  lwz       r0, 0x2D0(r3)
	  cmpw      r0, r31
	  ble-      .loc_0x3C
	  mr        r4, r31
	  bl        -0x1F0
	  cmplwi    r3, 0
	  bne+      .loc_0x14

	.loc_0x3C:
	  lwz       r0, 0x1C(r1)
	  lwz       r31, 0x14(r1)
	  addi      r1, r1, 0x18
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800F1D38
 * Size:	000228
 */
void SelectThread(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  lis       r4, 0x804F
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x18(r1)
	  stw       r31, 0x14(r1)
	  addi      r31, r4, 0x6738
	  stw       r30, 0x10(r1)
	  addi      r30, r3, 0
	  lwz       r0, -0x7020(r13)
	  cmpwi     r0, 0
	  ble-      .loc_0x34
	  li        r3, 0
	  b         .loc_0x210

	.loc_0x34:
	  bl        -0x4D6C
	  lis       r4, 0x8000
	  lwz       r6, 0xE4(r4)
	  cmplw     r3, r6
	  addi      r3, r6, 0
	  beq-      .loc_0x54
	  li        r3, 0
	  b         .loc_0x210

	.loc_0x54:
	  cmplwi    r6, 0
	  beq-      .loc_0x114
	  lhz       r0, 0x2C8(r6)
	  cmplwi    r0, 0x2
	  bne-      .loc_0xF4
	  cmpwi     r30, 0
	  bne-      .loc_0x8C
	  lwz       r4, -0x7028(r13)
	  lwz       r0, 0x2D0(r6)
	  cntlzw    r4, r4
	  cmpw      r0, r4
	  bgt-      .loc_0x8C
	  li        r3, 0
	  b         .loc_0x210

	.loc_0x8C:
	  li        r0, 0x1
	  sth       r0, 0x2C8(r6)
	  lwz       r0, 0x2D0(r6)
	  rlwinm    r0,r0,3,0,28
	  add       r0, r31, r0
	  stw       r0, 0x2DC(r6)
	  lwz       r5, 0x2DC(r6)
	  lwz       r4, 0x4(r5)
	  cmplwi    r4, 0
	  bne-      .loc_0xBC
	  stw       r6, 0x0(r5)
	  b         .loc_0xC0

	.loc_0xBC:
	  stw       r6, 0x2E0(r4)

	.loc_0xC0:
	  stw       r4, 0x2E4(r6)
	  li        r0, 0
	  li        r4, 0x1
	  stw       r0, 0x2E0(r6)
	  lwz       r5, 0x2DC(r6)
	  stw       r6, 0x4(r5)
	  lwz       r0, 0x2D0(r6)
	  lwz       r5, -0x7028(r13)
	  subfic    r0, r0, 0x1F
	  slw       r0, r4, r0
	  or        r0, r5, r0
	  stw       r0, -0x7028(r13)
	  stw       r4, -0x7024(r13)

	.loc_0xF4:
	  lhz       r0, 0x1A2(r6)
	  rlwinm.   r0,r0,0,30,30
	  bne-      .loc_0x114
	  bl        -0x4E2C
	  cmplwi    r3, 0
	  beq-      .loc_0x114
	  li        r3, 0
	  b         .loc_0x210

	.loc_0x114:
	  lwz       r0, -0x7028(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x170
	  lwz       r12, -0x7C88(r13)
	  lis       r30, 0x8000
	  lwz       r3, 0xE4(r30)
	  li        r4, 0
	  mtlr      r12
	  blrl
	  li        r0, 0
	  stw       r0, 0xE4(r30)
	  addi      r3, r31, 0x730
	  bl        -0x4ED8

	.loc_0x148:
	  bl        -0x3234

	.loc_0x14C:
	  lwz       r0, -0x7028(r13)
	  cmplwi    r0, 0
	  beq+      .loc_0x14C
	  bl        -0x3258
	  lwz       r0, -0x7028(r13)
	  cmplwi    r0, 0
	  beq+      .loc_0x148
	  addi      r3, r31, 0x730
	  bl        -0x4D38

	.loc_0x170:
	  li        r3, 0
	  stw       r3, -0x7024(r13)
	  lwz       r0, -0x7028(r13)
	  cntlzw    r7, r0
	  rlwinm    r0,r7,3,0,28
	  add       r4, r31, r0
	  lwz       r5, 0x0(r4)
	  lwz       r6, 0x2E0(r5)
	  addi      r30, r5, 0
	  cmplwi    r6, 0
	  bne-      .loc_0x1A4
	  stw       r3, 0x4(r4)
	  b         .loc_0x1A8

	.loc_0x1A4:
	  stw       r3, 0x2E4(r6)

	.loc_0x1A8:
	  stw       r6, 0x0(r4)
	  lwz       r0, 0x0(r4)
	  cmplwi    r0, 0
	  bne-      .loc_0x1D0
	  subfic    r0, r7, 0x1F
	  lwz       r4, -0x7028(r13)
	  li        r3, 0x1
	  slw       r0, r3, r0
	  andc      r0, r4, r0
	  stw       r0, -0x7028(r13)

	.loc_0x1D0:
	  li        r0, 0
	  stw       r0, 0x2DC(r30)
	  li        r0, 0x2
	  lis       r31, 0x8000
	  sth       r0, 0x2C8(r30)
	  mr        r4, r30
	  lwz       r12, -0x7C88(r13)
	  lwz       r3, 0xE4(r31)
	  mtlr      r12
	  blrl
	  stw       r30, 0xE4(r31)
	  mr        r3, r30
	  bl        -0x4F94
	  mr        r3, r30
	  bl        -0x4EB4
	  mr        r3, r30

	.loc_0x210:
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
 * Address:	800F1F60
 * Size:	000030
 */
void __OSReschedule(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x8(r1)
	  lwz       r0, -0x7024(r13)
	  cmpwi     r0, 0
	  beq-      .loc_0x20
	  li        r3, 0
	  bl        -0x244

	.loc_0x20:
	  lwz       r0, 0xC(r1)
	  addi      r1, r1, 0x8
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800F1F90
 * Size:	00003C
 */
void OSYieldThread(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x10(r1)
	  stw       r31, 0xC(r1)
	  bl        -0x3368
	  addi      r31, r3, 0
	  li        r3, 0x1
	  bl        -0x274
	  mr        r3, r31
	  bl        -0x3354
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  addi      r1, r1, 0x10
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800F1FCC
 * Size:	0001E8
 */
BOOL OSCreateThread(OSThread* thread, OSThreadStartFunction func, void* param, void* stack, u32 stackSize, OSPriority priority, u16 attr)
{
	/*
	.loc_0x0:
	  mflr      r0
	  cmpwi     r8, 0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x50(r1)
	  stmw      r27, 0x3C(r1)
	  addi      r31, r3, 0
	  addi      r27, r5, 0
	  addi      r28, r6, 0
	  addi      r29, r7, 0
	  blt-      .loc_0x30
	  cmpwi     r8, 0x1F
	  ble-      .loc_0x38

	.loc_0x30:
	  li        r3, 0
	  b         .loc_0x1D4

	.loc_0x38:
	  li        r6, 0x1
	  sth       r6, 0x2C8(r31)
	  rlwinm    r0,r9,0,31,31
	  rlwinm    r7,r28,0,0,28
	  sth       r0, 0x2CA(r31)
	  li        r0, -0x1
	  li        r30, 0
	  stw       r8, 0x2D4(r31)
	  addi      r3, r31, 0
	  subi      r5, r7, 0x8
	  stw       r8, 0x2D0(r31)
	  stw       r6, 0x2CC(r31)
	  stw       r0, 0x2D8(r31)
	  stw       r30, 0x2F0(r31)
	  stw       r30, 0x2EC(r31)
	  stw       r30, 0x2E8(r31)
	  stw       r30, 0x2F8(r31)
	  stw       r30, 0x2F4(r31)
	  stw       r30, -0x8(r7)
	  stw       r30, -0x4(r7)
	  bl        -0x4EC4
	  lis       r3, 0x800F
	  addi      r0, r3, 0x21B4
	  stw       r0, 0x84(r31)
	  lis       r3, 0xDEAE
	  sub       r4, r28, r29
	  stw       r27, 0xC(r31)
	  subi      r0, r3, 0x4542
	  stw       r28, 0x304(r31)
	  stw       r4, 0x308(r31)
	  lwz       r3, 0x308(r31)
	  stw       r0, 0x0(r3)
	  stw       r30, 0x30C(r31)
	  stw       r30, 0x310(r31)
	  stw       r30, 0x314(r31)
	  bl        -0x3458
	  lis       r4, 0x804F
	  addi      r4, r4, 0x6670
	  lwz       r0, 0x40(r4)
	  cmplwi    r0, 0
	  beq-      .loc_0x19C
	  lwz       r4, 0x19C(r31)
	  li        r0, 0x4
	  mtctr     r0
	  addi      r5, r31, 0
	  ori       r0, r4, 0x900
	  stw       r0, 0x19C(r31)
	  lhz       r0, 0x1A2(r31)
	  ori       r0, r0, 0x1
	  sth       r0, 0x1A2(r31)
	  lwz       r0, -0x7C98(r13)
	  rlwinm    r0,r0,0,24,28
	  ori       r0, r0, 0x4
	  stw       r0, 0x194(r31)

	.loc_0x110:
	  li        r0, -0x1
	  stw       r0, 0x94(r5)
	  stw       r0, 0x90(r5)
	  stw       r0, 0x1CC(r5)
	  stw       r0, 0x1C8(r5)
	  stw       r0, 0x9C(r5)
	  stw       r0, 0x98(r5)
	  stw       r0, 0x1D4(r5)
	  stw       r0, 0x1D0(r5)
	  stw       r0, 0xA4(r5)
	  stw       r0, 0xA0(r5)
	  stw       r0, 0x1DC(r5)
	  stw       r0, 0x1D8(r5)
	  stw       r0, 0xAC(r5)
	  stw       r0, 0xA8(r5)
	  stw       r0, 0x1E4(r5)
	  stw       r0, 0x1E0(r5)
	  stw       r0, 0xB4(r5)
	  stw       r0, 0xB0(r5)
	  stw       r0, 0x1EC(r5)
	  stw       r0, 0x1E8(r5)
	  stw       r0, 0xBC(r5)
	  stw       r0, 0xB8(r5)
	  stw       r0, 0x1F4(r5)
	  stw       r0, 0x1F0(r5)
	  stw       r0, 0xC4(r5)
	  stw       r0, 0xC0(r5)
	  stw       r0, 0x1FC(r5)
	  stw       r0, 0x1F8(r5)
	  stw       r0, 0xCC(r5)
	  stw       r0, 0xC8(r5)
	  stw       r0, 0x204(r5)
	  stw       r0, 0x200(r5)
	  addi      r5, r5, 0x40
	  bdnz+     .loc_0x110

	.loc_0x19C:
	  lis       r4, 0x8000
	  addi      r5, r4, 0xDC
	  lwzu      r6, 0x4(r5)
	  cmplwi    r6, 0
	  bne-      .loc_0x1B8
	  stw       r31, 0xDC(r4)
	  b         .loc_0x1BC

	.loc_0x1B8:
	  stw       r31, 0x2FC(r6)

	.loc_0x1BC:
	  stw       r6, 0x300(r31)
	  li        r0, 0
	  stw       r0, 0x2FC(r31)
	  stw       r31, 0x0(r5)
	  bl        -0x3538
	  li        r3, 0x1

	.loc_0x1D4:
	  lmw       r27, 0x3C(r1)
	  lwz       r0, 0x54(r1)
	  addi      r1, r1, 0x50
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800F21B4
 * Size:	0000E4
 */
void OSExitThread(void* val)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x20(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  bl        -0x359C
	  lis       r31, 0x8000
	  lwz       r30, 0xE4(r31)
	  addi      r29, r3, 0
	  addi      r3, r30, 0
	  bl        -0x507C
	  lhz       r0, 0x2CA(r30)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0x84
	  lwz       r4, 0x2FC(r30)
	  lwz       r5, 0x300(r30)
	  cmplwi    r4, 0
	  bne-      .loc_0x5C
	  stw       r5, 0xE0(r31)
	  b         .loc_0x60

	.loc_0x5C:
	  stw       r5, 0x300(r4)

	.loc_0x60:
	  cmplwi    r5, 0
	  bne-      .loc_0x74
	  lis       r3, 0x8000
	  stw       r4, 0xDC(r3)
	  b         .loc_0x78

	.loc_0x74:
	  stw       r4, 0x2FC(r5)

	.loc_0x78:
	  li        r0, 0
	  sth       r0, 0x2C8(r30)
	  b         .loc_0x90

	.loc_0x84:
	  li        r0, 0x8
	  sth       r0, 0x2C8(r30)
	  stw       r28, 0x2D8(r30)

	.loc_0x90:
	  mr        r3, r30
	  bl        -0x253C
	  addi      r3, r30, 0x2E8
	  bl        0x788
	  li        r0, 0x1
	  stw       r0, -0x7024(r13)
	  lwz       r0, -0x7024(r13)
	  cmpwi     r0, 0
	  beq-      .loc_0xBC
	  li        r3, 0
	  bl        -0x534

	.loc_0xBC:
	  mr        r3, r29
	  bl        -0x3614
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  lwz       r28, 0x10(r1)
	  addi      r1, r1, 0x20
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800F2298
 * Size:	0001BC
 */
void OSCancelThread(OSThread* thread)
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
	  bl        -0x367C
	  lhz       r0, 0x2C8(r30)
	  addi      r31, r3, 0
	  cmpwi     r0, 0x3
	  beq-      .loc_0x108
	  bge-      .loc_0x44
	  cmpwi     r0, 0x1
	  beq-      .loc_0x50
	  bge-      .loc_0x68
	  b         .loc_0x108

	.loc_0x44:
	  cmpwi     r0, 0x5
	  bge-      .loc_0x108
	  b         .loc_0x74

	.loc_0x50:
	  lwz       r0, 0x2CC(r30)
	  cmpwi     r0, 0
	  bgt-      .loc_0x114
	  mr        r3, r30
	  bl        -0x874
	  b         .loc_0x114

	.loc_0x68:
	  li        r0, 0x1
	  stw       r0, -0x7024(r13)
	  b         .loc_0x114

	.loc_0x74:
	  lwz       r4, 0x2E0(r30)
	  lwz       r5, 0x2E4(r30)
	  cmplwi    r4, 0
	  bne-      .loc_0x90
	  lwz       r3, 0x2DC(r30)
	  stw       r5, 0x4(r3)
	  b         .loc_0x94

	.loc_0x90:
	  stw       r5, 0x2E4(r4)

	.loc_0x94:
	  cmplwi    r5, 0
	  bne-      .loc_0xA8
	  lwz       r3, 0x2DC(r30)
	  stw       r4, 0x0(r3)
	  b         .loc_0xAC

	.loc_0xA8:
	  stw       r4, 0x2E0(r5)

	.loc_0xAC:
	  li        r0, 0
	  stw       r0, 0x2DC(r30)
	  lwz       r0, 0x2CC(r30)
	  cmpwi     r0, 0
	  bgt-      .loc_0x114
	  lwz       r3, 0x2F0(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0x114
	  lwz       r29, 0x8(r3)

	.loc_0xD0:
	  lwz       r0, 0x2CC(r29)
	  cmpwi     r0, 0
	  bgt-      .loc_0x114
	  mr        r3, r29
	  bl        -0x88C
	  lwz       r0, 0x2D0(r29)
	  addi      r4, r3, 0
	  cmpw      r0, r4
	  beq-      .loc_0x114
	  mr        r3, r29
	  bl        -0x868
	  mr.       r29, r3
	  bne+      .loc_0xD0
	  b         .loc_0x114

	.loc_0x108:
	  mr        r3, r31
	  bl        -0x3744
	  b         .loc_0x1A0

	.loc_0x114:
	  mr        r3, r30
	  bl        -0x5244
	  lhz       r0, 0x2CA(r30)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0x16C
	  lwz       r4, 0x2FC(r30)
	  lwz       r5, 0x300(r30)
	  cmplwi    r4, 0
	  bne-      .loc_0x144
	  lis       r3, 0x8000
	  stw       r5, 0xE0(r3)
	  b         .loc_0x148

	.loc_0x144:
	  stw       r5, 0x300(r4)

	.loc_0x148:
	  cmplwi    r5, 0
	  bne-      .loc_0x15C
	  lis       r3, 0x8000
	  stw       r4, 0xDC(r3)
	  b         .loc_0x160

	.loc_0x15C:
	  stw       r4, 0x2FC(r5)

	.loc_0x160:
	  li        r0, 0
	  sth       r0, 0x2C8(r30)
	  b         .loc_0x174

	.loc_0x16C:
	  li        r0, 0x8
	  sth       r0, 0x2C8(r30)

	.loc_0x174:
	  mr        r3, r30
	  bl        -0x2704
	  addi      r3, r30, 0x2E8
	  bl        0x5C0
	  lwz       r0, -0x7024(r13)
	  cmpwi     r0, 0
	  beq-      .loc_0x198
	  li        r3, 0
	  bl        -0x6F4

	.loc_0x198:
	  mr        r3, r31
	  bl        -0x37D4

	.loc_0x1A0:
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
 * Address:	........
 * Size:	000140
 */
BOOL OSJoinThread(OSThread* thread, void** val)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800F2454
 * Size:	0000A0
 */
void OSDetachThread(OSThread* thread)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x18(r1)
	  stw       r31, 0x14(r1)
	  stw       r30, 0x10(r1)
	  mr        r30, r3
	  bl        -0x3834
	  lhz       r0, 0x2CA(r30)
	  addi      r31, r3, 0
	  ori       r0, r0, 0x1
	  sth       r0, 0x2CA(r30)
	  lhz       r0, 0x2C8(r30)
	  cmplwi    r0, 0x8
	  bne-      .loc_0x78
	  lwz       r4, 0x2FC(r30)
	  lwz       r5, 0x300(r30)
	  cmplwi    r4, 0
	  bne-      .loc_0x54
	  lis       r3, 0x8000
	  stw       r5, 0xE0(r3)
	  b         .loc_0x58

	.loc_0x54:
	  stw       r5, 0x300(r4)

	.loc_0x58:
	  cmplwi    r5, 0
	  bne-      .loc_0x6C
	  lis       r3, 0x8000
	  stw       r4, 0xDC(r3)
	  b         .loc_0x70

	.loc_0x6C:
	  stw       r4, 0x2FC(r5)

	.loc_0x70:
	  li        r0, 0
	  sth       r0, 0x2C8(r30)

	.loc_0x78:
	  addi      r3, r30, 0x2E8
	  bl        0x508
	  mr        r3, r31
	  bl        -0x3878
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
 * Address:	800F24F4
 * Size:	000288
 */
s32 OSResumeThread(OSThread* thread)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x28(r1)
	  stw       r31, 0x24(r1)
	  stw       r30, 0x20(r1)
	  stw       r29, 0x1C(r1)
	  mr        r29, r3
	  bl        -0x38D8
	  lwz       r4, 0x2CC(r29)
	  addi      r31, r3, 0
	  subi      r0, r4, 0x1
	  stw       r0, 0x2CC(r29)
	  mr        r30, r4
	  lwz       r0, 0x2CC(r29)
	  cmpwi     r0, 0
	  bge-      .loc_0x4C
	  li        r0, 0
	  stw       r0, 0x2CC(r29)
	  b         .loc_0x260

	.loc_0x4C:
	  bne-      .loc_0x260
	  lhz       r0, 0x2C8(r29)
	  cmpwi     r0, 0x4
	  beq-      .loc_0x110
	  bge-      .loc_0x24C
	  cmpwi     r0, 0x1
	  beq-      .loc_0x6C
	  b         .loc_0x24C

	.loc_0x6C:
	  lwz       r0, 0x2D4(r29)
	  lwz       r3, 0x2F4(r29)
	  b         .loc_0x98

	.loc_0x78:
	  lwz       r4, 0x0(r3)
	  cmplwi    r4, 0
	  beq-      .loc_0x94
	  lwz       r4, 0x2D0(r4)
	  cmpw      r4, r0
	  bge-      .loc_0x94
	  mr        r0, r4

	.loc_0x94:
	  lwz       r3, 0x10(r3)

	.loc_0x98:
	  cmplwi    r3, 0
	  bne+      .loc_0x78
	  stw       r0, 0x2D0(r29)
	  lis       r3, 0x804F
	  addi      r0, r3, 0x6738
	  lwz       r3, 0x2D0(r29)
	  rlwinm    r3,r3,3,0,28
	  add       r0, r0, r3
	  stw       r0, 0x2DC(r29)
	  lwz       r4, 0x2DC(r29)
	  lwz       r3, 0x4(r4)
	  cmplwi    r3, 0
	  bne-      .loc_0xD4
	  stw       r29, 0x0(r4)
	  b         .loc_0xD8

	.loc_0xD4:
	  stw       r29, 0x2E0(r3)

	.loc_0xD8:
	  stw       r3, 0x2E4(r29)
	  li        r0, 0
	  li        r3, 0x1
	  stw       r0, 0x2E0(r29)
	  lwz       r4, 0x2DC(r29)
	  stw       r29, 0x4(r4)
	  lwz       r0, 0x2D0(r29)
	  lwz       r4, -0x7028(r13)
	  subfic    r0, r0, 0x1F
	  slw       r0, r3, r0
	  or        r0, r4, r0
	  stw       r0, -0x7028(r13)
	  stw       r3, -0x7024(r13)
	  b         .loc_0x24C

	.loc_0x110:
	  lwz       r4, 0x2E0(r29)
	  lwz       r5, 0x2E4(r29)
	  cmplwi    r4, 0
	  bne-      .loc_0x12C
	  lwz       r3, 0x2DC(r29)
	  stw       r5, 0x4(r3)
	  b         .loc_0x130

	.loc_0x12C:
	  stw       r5, 0x2E4(r4)

	.loc_0x130:
	  cmplwi    r5, 0
	  bne-      .loc_0x144
	  lwz       r3, 0x2DC(r29)
	  stw       r4, 0x0(r3)
	  b         .loc_0x148

	.loc_0x144:
	  stw       r4, 0x2E0(r5)

	.loc_0x148:
	  lwz       r0, 0x2D4(r29)
	  lwz       r3, 0x2F4(r29)
	  b         .loc_0x174

	.loc_0x154:
	  lwz       r4, 0x0(r3)
	  cmplwi    r4, 0
	  beq-      .loc_0x170
	  lwz       r4, 0x2D0(r4)
	  cmpw      r4, r0
	  bge-      .loc_0x170
	  mr        r0, r4

	.loc_0x170:
	  lwz       r3, 0x10(r3)

	.loc_0x174:
	  cmplwi    r3, 0
	  bne+      .loc_0x154
	  stw       r0, 0x2D0(r29)
	  lwz       r4, 0x2DC(r29)
	  lwz       r5, 0x0(r4)
	  b         .loc_0x190

	.loc_0x18C:
	  lwz       r5, 0x2E0(r5)

	.loc_0x190:
	  cmplwi    r5, 0
	  beq-      .loc_0x1A8
	  lwz       r3, 0x2D0(r5)
	  lwz       r0, 0x2D0(r29)
	  cmpw      r3, r0
	  ble+      .loc_0x18C

	.loc_0x1A8:
	  cmplwi    r5, 0
	  bne-      .loc_0x1E0
	  lwz       r3, 0x4(r4)
	  cmplwi    r3, 0
	  bne-      .loc_0x1C4
	  stw       r29, 0x0(r4)
	  b         .loc_0x1C8

	.loc_0x1C4:
	  stw       r29, 0x2E0(r3)

	.loc_0x1C8:
	  stw       r3, 0x2E4(r29)
	  li        r0, 0
	  stw       r0, 0x2E0(r29)
	  lwz       r3, 0x2DC(r29)
	  stw       r29, 0x4(r3)
	  b         .loc_0x208

	.loc_0x1E0:
	  stw       r5, 0x2E0(r29)
	  lwz       r3, 0x2E4(r5)
	  stw       r29, 0x2E4(r5)
	  cmplwi    r3, 0
	  stw       r3, 0x2E4(r29)
	  bne-      .loc_0x204
	  lwz       r3, 0x2DC(r29)
	  stw       r29, 0x0(r3)
	  b         .loc_0x208

	.loc_0x204:
	  stw       r29, 0x2E0(r3)

	.loc_0x208:
	  lwz       r3, 0x2F0(r29)
	  cmplwi    r3, 0
	  beq-      .loc_0x24C
	  lwz       r29, 0x8(r3)

	.loc_0x218:
	  lwz       r0, 0x2CC(r29)
	  cmpwi     r0, 0
	  bgt-      .loc_0x24C
	  mr        r3, r29
	  bl        -0xC30
	  lwz       r0, 0x2D0(r29)
	  addi      r4, r3, 0
	  cmpw      r0, r4
	  beq-      .loc_0x24C
	  mr        r3, r29
	  bl        -0xC0C
	  mr.       r29, r3
	  bne+      .loc_0x218

	.loc_0x24C:
	  lwz       r0, -0x7024(r13)
	  cmpwi     r0, 0
	  beq-      .loc_0x260
	  li        r3, 0
	  bl        -0xA18

	.loc_0x260:
	  mr        r3, r31
	  bl        -0x3AF8
	  mr        r3, r30
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
 * Address:	800F277C
 * Size:	000170
 */
s32 OSSuspendThread(OSThread* thread)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x20(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  bl        -0x3B60
	  lwz       r4, 0x2CC(r29)
	  addi      r31, r3, 0
	  addi      r0, r4, 0x1
	  mr.       r30, r4
	  stw       r0, 0x2CC(r29)
	  bne-      .loc_0x148
	  lhz       r0, 0x2C8(r29)
	  cmpwi     r0, 0x3
	  beq-      .loc_0x134
	  bge-      .loc_0x58
	  cmpwi     r0, 0x1
	  beq-      .loc_0x74
	  bge-      .loc_0x64
	  b         .loc_0x134

	.loc_0x58:
	  cmpwi     r0, 0x5
	  bge-      .loc_0x134
	  b         .loc_0x80

	.loc_0x64:
	  li        r0, 0x1
	  stw       r0, -0x7024(r13)
	  sth       r0, 0x2C8(r29)
	  b         .loc_0x134

	.loc_0x74:
	  mr        r3, r29
	  bl        -0xD70
	  b         .loc_0x134

	.loc_0x80:
	  lwz       r4, 0x2E0(r29)
	  lwz       r5, 0x2E4(r29)
	  cmplwi    r4, 0
	  bne-      .loc_0x9C
	  lwz       r3, 0x2DC(r29)
	  stw       r5, 0x4(r3)
	  b         .loc_0xA0

	.loc_0x9C:
	  stw       r5, 0x2E4(r4)

	.loc_0xA0:
	  cmplwi    r5, 0
	  bne-      .loc_0xB4
	  lwz       r3, 0x2DC(r29)
	  stw       r4, 0x0(r3)
	  b         .loc_0xB8

	.loc_0xB4:
	  stw       r4, 0x2E0(r5)

	.loc_0xB8:
	  li        r0, 0x20
	  stw       r0, 0x2D0(r29)
	  lwz       r4, 0x2DC(r29)
	  lwz       r3, 0x4(r4)
	  cmplwi    r3, 0
	  bne-      .loc_0xD8
	  stw       r29, 0x0(r4)
	  b         .loc_0xDC

	.loc_0xD8:
	  stw       r29, 0x2E0(r3)

	.loc_0xDC:
	  stw       r3, 0x2E4(r29)
	  li        r0, 0
	  stw       r0, 0x2E0(r29)
	  lwz       r3, 0x2DC(r29)
	  stw       r29, 0x4(r3)
	  lwz       r3, 0x2F0(r29)
	  cmplwi    r3, 0
	  beq-      .loc_0x134
	  lwz       r29, 0x8(r3)

	.loc_0x100:
	  lwz       r0, 0x2CC(r29)
	  cmpwi     r0, 0
	  bgt-      .loc_0x134
	  mr        r3, r29
	  bl        -0xDA0
	  lwz       r0, 0x2D0(r29)
	  addi      r4, r3, 0
	  cmpw      r0, r4
	  beq-      .loc_0x134
	  mr        r3, r29
	  bl        -0xD7C
	  mr.       r29, r3
	  bne+      .loc_0x100

	.loc_0x134:
	  lwz       r0, -0x7024(r13)
	  cmpwi     r0, 0
	  beq-      .loc_0x148
	  li        r3, 0
	  bl        -0xB88

	.loc_0x148:
	  mr        r3, r31
	  bl        -0x3C68
	  mr        r3, r30
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
 * Address:	800F28EC
 * Size:	0000EC
 */
void OSSleepThread(OSThreadQueue* threadQueue)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x18(r1)
	  stw       r31, 0x14(r1)
	  stw       r30, 0x10(r1)
	  mr        r30, r3
	  bl        -0x3CCC
	  lis       r4, 0x8000
	  lwz       r4, 0xE4(r4)
	  li        r0, 0x4
	  mr        r31, r3
	  sth       r0, 0x2C8(r4)
	  stw       r30, 0x2DC(r4)
	  lwz       r5, 0x0(r30)
	  b         .loc_0x40

	.loc_0x3C:
	  lwz       r5, 0x2E0(r5)

	.loc_0x40:
	  cmplwi    r5, 0
	  beq-      .loc_0x58
	  lwz       r3, 0x2D0(r5)
	  lwz       r0, 0x2D0(r4)
	  cmpw      r3, r0
	  ble+      .loc_0x3C

	.loc_0x58:
	  cmplwi    r5, 0
	  bne-      .loc_0x8C
	  lwz       r3, 0x4(r30)
	  cmplwi    r3, 0
	  bne-      .loc_0x74
	  stw       r4, 0x0(r30)
	  b         .loc_0x78

	.loc_0x74:
	  stw       r4, 0x2E0(r3)

	.loc_0x78:
	  stw       r3, 0x2E4(r4)
	  li        r0, 0
	  stw       r0, 0x2E0(r4)
	  stw       r4, 0x4(r30)
	  b         .loc_0xB0

	.loc_0x8C:
	  stw       r5, 0x2E0(r4)
	  lwz       r3, 0x2E4(r5)
	  stw       r4, 0x2E4(r5)
	  cmplwi    r3, 0
	  stw       r3, 0x2E4(r4)
	  bne-      .loc_0xAC
	  stw       r4, 0x0(r30)
	  b         .loc_0xB0

	.loc_0xAC:
	  stw       r4, 0x2E0(r3)

	.loc_0xB0:
	  li        r0, 0x1
	  stw       r0, -0x7024(r13)
	  lwz       r0, -0x7024(r13)
	  cmpwi     r0, 0
	  beq-      .loc_0xCC
	  li        r3, 0
	  bl        -0xC7C

	.loc_0xCC:
	  mr        r3, r31
	  bl        -0x3D5C
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
 * Address:	800F29D8
 * Size:	000104
 */
void OSWakeupThread(OSThreadQueue* threadQueue)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x18(r1)
	  stw       r31, 0x14(r1)
	  stw       r30, 0x10(r1)
	  mr        r30, r3
	  bl        -0x3DB8
	  lis       r4, 0x804F
	  addi      r31, r3, 0
	  addi      r5, r4, 0x6738
	  b         .loc_0xC4

	.loc_0x2C:
	  lwz       r3, 0x2E0(r6)
	  cmplwi    r3, 0
	  bne-      .loc_0x44
	  li        r0, 0
	  stw       r0, 0x4(r30)
	  b         .loc_0x4C

	.loc_0x44:
	  li        r0, 0
	  stw       r0, 0x2E4(r3)

	.loc_0x4C:
	  stw       r3, 0x0(r30)
	  li        r0, 0x1
	  sth       r0, 0x2C8(r6)
	  lwz       r0, 0x2CC(r6)
	  cmpwi     r0, 0
	  bgt-      .loc_0xC4
	  lwz       r0, 0x2D0(r6)
	  rlwinm    r0,r0,3,0,28
	  add       r0, r5, r0
	  stw       r0, 0x2DC(r6)
	  lwz       r4, 0x2DC(r6)
	  lwz       r3, 0x4(r4)
	  cmplwi    r3, 0
	  bne-      .loc_0x8C
	  stw       r6, 0x0(r4)
	  b         .loc_0x90

	.loc_0x8C:
	  stw       r6, 0x2E0(r3)

	.loc_0x90:
	  stw       r3, 0x2E4(r6)
	  li        r0, 0
	  li        r3, 0x1
	  stw       r0, 0x2E0(r6)
	  lwz       r4, 0x2DC(r6)
	  stw       r6, 0x4(r4)
	  lwz       r0, 0x2D0(r6)
	  lwz       r4, -0x7028(r13)
	  subfic    r0, r0, 0x1F
	  slw       r0, r3, r0
	  or        r0, r4, r0
	  stw       r0, -0x7028(r13)
	  stw       r3, -0x7024(r13)

	.loc_0xC4:
	  lwz       r6, 0x0(r30)
	  cmplwi    r6, 0
	  bne+      .loc_0x2C
	  lwz       r0, -0x7024(r13)
	  cmpwi     r0, 0
	  beq-      .loc_0xE4
	  li        r3, 0
	  bl        -0xD80

	.loc_0xE4:
	  mr        r3, r31
	  bl        -0x3E60
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
 * Size:	0000C0
 */
BOOL OSSetThreadPriority(OSThread* thread, OSPriority priority)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800F2ADC
 * Size:	000008
 */
OSPriority OSGetThreadPriority(OSThread* thread)
{
	/*
	.loc_0x0:
	  lwz       r3, 0x2D4(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000090
 */
void OSSetIdleFunction(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00001C
 */
void OSGetIdleFunction(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00009C
 */
void CheckThreadQueue(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00002C
 */
BOOL IsMember(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000750
 */
long OSCheckActiveThreads(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800F2AE4
 * Size:	0000AC
 */
void OSClearStack(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  rlwinm    r0,r3,16,8,15
	  rlwimi    r0,r3,24,0,7
	  stwu      r1, -0x18(r1)
	  rlwimi    r0,r3,8,16,23
	  stw       r31, 0x14(r1)
	  mr        r31, r0
	  rlwimi    r31,r3,0,24,31
	  bl        -0x59A4
	  lis       r4, 0x8000
	  lwz       r5, 0xE4(r4)
	  addi      r4, r3, 0x3
	  lwz       r5, 0x308(r5)
	  addi      r5, r5, 0x4
	  cmplw     r5, r3
	  sub       r4, r4, r5
	  rlwinm    r4,r4,30,2,31
	  bge-      .loc_0x98
	  rlwinm.   r0,r4,29,3,31
	  mtctr     r0
	  beq-      .loc_0x88

	.loc_0x58:
	  stw       r31, 0x0(r5)
	  stw       r31, 0x4(r5)
	  stw       r31, 0x8(r5)
	  stw       r31, 0xC(r5)
	  stw       r31, 0x10(r5)
	  stw       r31, 0x14(r5)
	  stw       r31, 0x18(r5)
	  stw       r31, 0x1C(r5)
	  addi      r5, r5, 0x20
	  bdnz+     .loc_0x58
	  andi.     r4, r4, 0x7
	  beq-      .loc_0x98

	.loc_0x88:
	  mtctr     r4

	.loc_0x8C:
	  stw       r31, 0x0(r5)
	  addi      r5, r5, 0x4
	  bdnz+     .loc_0x8C

	.loc_0x98:
	  lwz       r0, 0x1C(r1)
	  lwz       r31, 0x14(r1)
	  addi      r1, r1, 0x18
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000030
 */
void OSSetThreadSpecific(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000038
 */
void OSGetThreadSpecific(void)
{
	// UNUSED FUNCTION
}
