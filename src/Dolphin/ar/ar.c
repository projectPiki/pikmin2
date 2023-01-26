#include "types.h"

/*
 * --INFO--
 * Address:	800D2674
 * Size:	000044
 */
void ARRegisterDMACallback(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x18(r1)
	  stw       r31, 0x14(r1)
	  stw       r30, 0x10(r1)
	  mr        r30, r3
	  lwz       r31, -0x72A8(r13)
	  bl        0x1C5A8
	  stw       r30, -0x72A8(r13)
	  bl        0x1C5C8
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
 * Address:	800D26B8
 * Size:	00003C
 */
void ARGetDMAStatus(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x10(r1)
	  stw       r31, 0xC(r1)
	  bl        0x1C570
	  lis       r4, 0xCC00
	  lhz       r0, 0x500A(r4)
	  rlwinm    r31,r0,0,22,22
	  bl        0x1C588
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
 * Address:	800D26F4
 * Size:	0000F0
 */
void ARStartDMA(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x28(r1)
	  stw       r31, 0x24(r1)
	  addi      r31, r6, 0
	  stw       r30, 0x20(r1)
	  addi      r30, r5, 0
	  stw       r29, 0x1C(r1)
	  addi      r29, r3, 0
	  stw       r28, 0x18(r1)
	  addi      r28, r4, 0
	  bl        0x1C518
	  lis       r6, 0xCC00
	  lhz       r0, 0x5020(r6)
	  addi      r8, r6, 0x5000
	  addi      r9, r6, 0x5000
	  rlwinm    r4,r0,0,0,21
	  rlwinm    r0,r28,16,16,31
	  or        r0, r4, r0
	  sth       r0, 0x5020(r6)
	  rlwinm    r0,r28,0,16,31
	  addi      r4, r6, 0x5000
	  lhz       r5, 0x5022(r6)
	  rlwinm    r5,r5,0,27,15
	  or        r0, r5, r0
	  sth       r0, 0x5022(r6)
	  addi      r5, r6, 0x5000
	  rlwinm    r0,r30,16,16,31
	  lhz       r6, 0x5024(r6)
	  rlwinm    r6,r6,0,0,21
	  or        r0, r6, r0
	  sth       r0, 0x24(r8)
	  rlwinm    r0,r30,0,16,31
	  lhz       r6, 0x26(r9)
	  rlwinm    r6,r6,0,27,15
	  or        r0, r6, r0
	  sth       r0, 0x26(r9)
	  rlwinm    r6,r31,16,16,31
	  rlwinm    r0,r31,0,16,31
	  lhz       r7, 0x28(r4)
	  rlwinm    r7,r7,0,17,15
	  rlwimi    r7,r29,15,0,16
	  sth       r7, 0x28(r4)
	  lhz       r7, 0x28(r4)
	  rlwinm    r7,r7,0,0,21
	  or        r6, r7, r6
	  sth       r6, 0x28(r4)
	  lhz       r4, 0x2A(r5)
	  rlwinm    r4,r4,0,27,15
	  or        r0, r4, r0
	  sth       r0, 0x2A(r5)
	  bl        0x1C4A0
	  lwz       r0, 0x2C(r1)
	  lwz       r31, 0x24(r1)
	  lwz       r30, 0x20(r1)
	  lwz       r29, 0x1C(r1)
	  lwz       r28, 0x18(r1)
	  addi      r1, r1, 0x28
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800D27E4
 * Size:	000068
 */
void ARAlloc(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x18(r1)
	  stw       r31, 0x14(r1)
	  stw       r30, 0x10(r1)
	  mr        r30, r3
	  bl        0x1C43C
	  lwz       r31, -0x7298(r13)
	  lwz       r4, -0x7290(r13)
	  add       r0, r31, r30
	  stw       r0, -0x7298(r13)
	  stw       r30, 0x0(r4)
	  lwz       r5, -0x7290(r13)
	  lwz       r4, -0x7294(r13)
	  addi      r5, r5, 0x4
	  subi      r0, r4, 0x1
	  stw       r5, -0x7290(r13)
	  stw       r0, -0x7294(r13)
	  bl        0x1C434
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
 * Address:	........
 * Size:	000074
 */
void ARFree(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void ARCheckInit(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800D284C
 * Size:	0000C4
 */
void ARInit(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x20(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  addi      r30, r4, 0
	  stw       r29, 0x14(r1)
	  addi      r29, r3, 0
	  lwz       r0, -0x728C(r13)
	  cmpwi     r0, 0x1
	  bne-      .loc_0x34
	  li        r3, 0x4000
	  b         .loc_0xA8

	.loc_0x34:
	  lwz       r3, -0x7D88(r13)
	  bl        0x19204
	  bl        0x1C3B0
	  li        r0, 0
	  lis       r4, 0x800D
	  stw       r0, -0x72A8(r13)
	  addi      r31, r3, 0
	  addi      r4, r4, 0x2920
	  li        r3, 0x6
	  bl        0x1C3E0
	  lis       r3, 0x200
	  bl        0x1C7DC
	  li        r0, 0x4000
	  stw       r30, -0x7294(r13)
	  lis       r3, 0xCC00
	  stw       r0, -0x7298(r13)
	  addi      r4, r3, 0x5000
	  stw       r29, -0x7290(r13)
	  lhz       r0, 0x1A(r4)
	  lhz       r3, 0x501A(r3)
	  rlwinm    r0,r0,0,0,23
	  rlwimi    r0,r3,0,24,31
	  sth       r0, 0x1A(r4)
	  bl        0xEC
	  li        r0, 0x1
	  stw       r0, -0x728C(r13)
	  mr        r3, r31
	  bl        0x1C374
	  lwz       r3, -0x7298(r13)

	.loc_0xA8:
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
 * Size:	00000C
 */
void ARReset(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000004
 */
void ARSetSize(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800D2910
 * Size:	000008
 */
u32 ARGetBaseAddress(void) { return 0x4000; }

/*
 * --INFO--
 * Address:	800D2918
 * Size:	000008
 */
void ARGetSize(void)
{
	/*
	.loc_0x0:
	  lwz       r3, -0x72A4(r13)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void ARGetInternalSize(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000090
 */
void ARClear(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800D2920
 * Size:	000078
 */
void __ARHandler(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  lis       r3, 0xCC00
	  stw       r0, 0x4(r1)
	  addi      r3, r3, 0x5000
	  li        r0, -0x89
	  stwu      r1, -0x2E0(r1)
	  stw       r31, 0x2DC(r1)
	  addi      r31, r4, 0
	  lhz       r5, 0xA(r3)
	  and       r0, r5, r0
	  ori       r0, r0, 0x20
	  sth       r0, 0xA(r3)
	  addi      r3, r1, 0x10
	  bl        0x1A818
	  addi      r3, r1, 0x10
	  bl        0x1A648
	  lwz       r12, -0x72A8(r13)
	  cmplwi    r12, 0
	  beq-      .loc_0x54
	  mtlr      r12
	  blrl

	.loc_0x54:
	  addi      r3, r1, 0x10
	  bl        0x1A7F4
	  mr        r3, r31
	  bl        0x1A624
	  lwz       r0, 0x2E4(r1)
	  lwz       r31, 0x2DC(r1)
	  addi      r1, r1, 0x2E0
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800D2998
 * Size:	000020
 */
void __ARClearInterrupt(void)
{
	/*
	.loc_0x0:
	  lis       r3, 0xCC00
	  addi      r3, r3, 0x5000
	  lhz       r4, 0xA(r3)
	  li        r0, -0x89
	  and       r0, r4, r0
	  ori       r0, r0, 0x20
	  sth       r0, 0xA(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800D29B8
 * Size:	000010
 */
void __ARGetInterruptStatus(void)
{
	/*
	.loc_0x0:
	  lis       r3, 0xCC00
	  lhz       r0, 0x500A(r3)
	  rlwinm    r3,r0,0,26,26
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000018
 */
void __ARWaitForDMA(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000B0
 */
void __ARWriteDMA(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000B0
 */
void __ARReadDMA(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800D29C8
 * Size:	0017F4
 */
void __ARChecksize(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  lis       r3, 0xCC00
	  stw       r0, 0x4(r1)
	  addi      r3, r3, 0x5000
	  stwu      r1, -0x2C0(r1)
	  stmw      r14, 0x278(r1)

	.loc_0x18:
	  lhz       r0, 0x16(r3)
	  rlwinm.   r0,r0,0,31,31
	  beq+      .loc_0x18
	  lis       r23, 0xCC00
	  addi      r0, r23, 0x5000
	  stw       r0, 0x248(r1)
	  lis       r3, 0x100
	  addi      r0, r1, 0x1F3
	  stw       r3, -0x72A0(r13)
	  lis       r5, 0xDEAE
	  lwz       r4, 0x248(r1)
	  rlwinm    r22,r0,0,0,26
	  addi      r0, r1, 0x1B3
	  lhz       r4, 0x12(r4)
	  addi      r7, r1, 0xB3
	  rlwinm    r7,r7,0,0,26
	  rlwinm    r4,r4,0,0,25
	  stw       r7, 0x21C(r1)
	  ori       r6, r4, 0x23
	  lwz       r4, 0x248(r1)
	  addi      r10, r1, 0x173
	  sth       r6, 0x12(r4)
	  subi      r5, r5, 0x4111
	  lis       r4, 0xBAD1
	  rlwinm    r21,r0,0,0,26
	  stw       r5, 0x0(r22)
	  subi      r0, r4, 0x4530
	  stw       r0, 0x0(r21)
	  addi      r4, r1, 0x33
	  addi      r6, r1, 0x73
	  stw       r5, 0x4(r22)
	  rlwinm    r4,r4,0,0,26
	  rlwinm    r6,r6,0,0,26
	  stw       r0, 0x4(r21)
	  addi      r9, r1, 0x133
	  addi      r8, r1, 0xF3
	  stw       r5, 0x8(r22)
	  addi      r19, r3, 0
	  addi      r3, r22, 0
	  stw       r0, 0x8(r21)
	  rlwinm    r24,r10,0,0,26
	  rlwinm    r28,r9,0,0,26
	  stw       r5, 0xC(r22)
	  rlwinm    r20,r8,0,0,26
	  stw       r0, 0xC(r21)
	  stw       r5, 0x10(r22)
	  stw       r0, 0x10(r21)
	  stw       r5, 0x14(r22)
	  stw       r0, 0x14(r21)
	  stw       r5, 0x18(r22)
	  stw       r0, 0x18(r21)
	  stw       r5, 0x1C(r22)
	  lwz       r5, 0x248(r1)
	  stw       r4, 0x214(r1)
	  li        r4, 0x3
	  addi      r5, r5, 0x12
	  sth       r4, 0x270(r1)
	  li        r4, 0x20
	  stw       r6, 0x218(r1)
	  stw       r0, 0x1C(r21)
	  stw       r5, 0x248(r1)
	  bl        0x19C44
	  addi      r3, r21, 0
	  li        r4, 0x20
	  bl        0x19C38
	  li        r0, 0
	  stw       r0, -0x729C(r13)
	  addi      r3, r28, 0
	  li        r4, 0x20
	  bl        0x19BF8
	  rlwinm    r3,r28,16,16,31
	  lhz       r0, 0x5020(r23)
	  stw       r3, 0x23C(r1)
	  addi      r25, r23, 0x5000
	  rlwinm    r3,r0,0,0,21
	  lwz       r0, 0x23C(r1)
	  addi      r26, r23, 0x5000
	  rlwinm    r17,r19,16,16,31
	  or        r0, r3, r0
	  sthu      r0, 0x20(r25)
	  rlwinm    r3,r28,0,16,31
	  addi      r27, r23, 0x5000
	  lhz       r0, 0x5022(r23)
	  rlwinm    r18,r19,0,16,31
	  stw       r3, 0x24C(r1)
	  addi      r28, r23, 0x5000
	  rlwinm    r3,r0,0,27,15
	  lwz       r0, 0x24C(r1)
	  addi      r30, r23, 0x5000
	  addi      r29, r23, 0x5000
	  or        r0, r3, r0
	  sthu      r0, 0x22(r26)
	  lhz       r0, 0x5024(r23)
	  rlwinm    r0,r0,0,0,21
	  or        r0, r0, r17
	  sthu      r0, 0x24(r27)
	  lhz       r0, 0x5026(r23)
	  rlwinm    r0,r0,0,27,15
	  or        r0, r0, r18
	  sthu      r0, 0x26(r28)
	  lhz       r0, 0x5028(r23)
	  ori       r0, r0, 0x8000
	  sth       r0, 0x5028(r23)
	  lhz       r0, 0x5028(r23)
	  rlwinm    r0,r0,0,0,21
	  nop
	  sthu      r0, 0x28(r30)
	  lhz       r0, 0x502A(r23)
	  rlwinm    r0,r0,0,27,15
	  ori       r0, r0, 0x20
	  sthu      r0, 0x2A(r29)

	.loc_0x1D4:
	  addi      r31, r23, 0x5000
	  lhzu      r0, 0xA(r31)
	  rlwinm.   r0,r0,0,22,22
	  bne+      .loc_0x1D4
	  lhz       r3, 0x0(r31)
	  li        r0, -0x89
	  and       r0, r3, r0
	  ori       r0, r0, 0x20
	  sth       r0, 0x0(r31)
	  bl        0x19D0
	  rlwinm    r0,r22,16,16,31
	  lhz       r3, 0x0(r25)
	  stw       r0, 0x244(r1)
	  rlwinm    r3,r3,0,0,21
	  lwz       r0, 0x244(r1)
	  or        r0, r3, r0
	  sth       r0, 0x0(r25)
	  rlwinm    r0,r22,0,16,31
	  stw       r0, 0x250(r1)
	  lhz       r0, 0x0(r26)
	  rlwinm    r3,r0,0,27,15
	  lwz       r0, 0x250(r1)
	  or        r0, r3, r0
	  sth       r0, 0x0(r26)
	  lhz       r0, 0x0(r27)
	  rlwinm    r0,r0,0,0,21
	  or        r0, r0, r17
	  sth       r0, 0x0(r27)
	  lhz       r0, 0x0(r28)
	  rlwinm    r0,r0,0,27,15
	  or        r0, r0, r18
	  sth       r0, 0x0(r28)
	  lhz       r0, 0x0(r30)
	  rlwinm    r0,r0,0,17,15
	  sth       r0, 0x0(r30)
	  lhz       r0, 0x0(r30)
	  rlwinm    r0,r0,0,0,21
	  nop
	  sth       r0, 0x0(r30)
	  lhz       r0, 0x0(r29)
	  rlwinm    r0,r0,0,27,15
	  ori       r0, r0, 0x20
	  sth       r0, 0x0(r29)

	.loc_0x280:
	  lhz       r0, 0x0(r31)
	  rlwinm.   r0,r0,0,22,22
	  bne+      .loc_0x280
	  lhz       r0, 0x0(r31)
	  li        r4, -0x89
	  addi      r3, r24, 0
	  and       r0, r0, r4
	  ori       r0, r0, 0x20
	  sth       r0, 0x0(r31)
	  li        r4, 0
	  li        r5, 0x20
	  bl        -0xCDBC0
	  addi      r3, r24, 0
	  li        r4, 0x20
	  bl        0x19A98
	  rlwinm    r0,r24,16,16,31
	  lhz       r3, 0x0(r25)
	  stw       r0, 0x240(r1)
	  rlwinm    r3,r3,0,0,21
	  lwz       r0, 0x240(r1)
	  or        r0, r3, r0
	  sth       r0, 0x0(r25)
	  rlwinm    r0,r24,0,16,31
	  stw       r0, 0x254(r1)
	  lhz       r0, 0x0(r26)
	  rlwinm    r3,r0,0,27,15
	  lwz       r0, 0x254(r1)
	  or        r0, r3, r0
	  sth       r0, 0x0(r26)
	  lhz       r0, 0x0(r27)
	  rlwinm    r0,r0,0,0,21
	  or        r0, r0, r17
	  sth       r0, 0x0(r27)
	  lhz       r0, 0x0(r28)
	  rlwinm    r0,r0,0,27,15
	  or        r0, r0, r18
	  sth       r0, 0x0(r28)
	  lhz       r0, 0x0(r30)
	  ori       r0, r0, 0x8000
	  sth       r0, 0x0(r30)
	  lhz       r0, 0x0(r30)
	  rlwinm    r0,r0,0,0,21
	  nop
	  sth       r0, 0x0(r30)
	  lhz       r0, 0x0(r29)
	  rlwinm    r0,r0,0,27,15
	  ori       r0, r0, 0x20
	  sth       r0, 0x0(r29)

	.loc_0x340:
	  lhz       r0, 0x0(r31)
	  rlwinm.   r0,r0,0,22,22
	  bne+      .loc_0x340
	  lhz       r3, 0x0(r31)
	  li        r0, -0x89
	  and       r0, r3, r0
	  ori       r0, r0, 0x20
	  sth       r0, 0x0(r31)
	  bl        0x1868
	  lwz       r3, 0x0(r24)
	  lwz       r0, 0x0(r22)
	  cmplw     r3, r0
	  bne-      .loc_0x17D4
	  addi      r3, r20, 0
	  li        r4, 0x20
	  bl        0x199A8
	  rlwinm    r0,r20,16,16,31
	  lhz       r4, 0x0(r25)
	  stw       r0, 0x234(r1)
	  addis     r3, r19, 0x20
	  rlwinm    r4,r4,0,0,21
	  lwz       r0, 0x234(r1)
	  rlwinm    r16,r3,16,16,31
	  rlwinm    r23,r3,0,16,31
	  or        r0, r4, r0
	  sth       r0, 0x0(r25)
	  rlwinm    r0,r20,0,16,31
	  stw       r0, 0x258(r1)
	  lhz       r0, 0x0(r26)
	  rlwinm    r3,r0,0,27,15
	  lwz       r0, 0x258(r1)
	  or        r0, r3, r0
	  sth       r0, 0x0(r26)
	  lhz       r0, 0x0(r27)
	  rlwinm    r0,r0,0,0,21
	  or        r0, r0, r16
	  sth       r0, 0x0(r27)
	  lhz       r0, 0x0(r28)
	  rlwinm    r0,r0,0,27,15
	  or        r0, r0, r23
	  sth       r0, 0x0(r28)
	  lhz       r0, 0x0(r30)
	  ori       r0, r0, 0x8000
	  sth       r0, 0x0(r30)
	  lhz       r0, 0x0(r30)
	  rlwinm    r0,r0,0,0,21
	  nop
	  sth       r0, 0x0(r30)
	  lhz       r0, 0x0(r29)
	  rlwinm    r0,r0,0,27,15
	  ori       r0, r0, 0x20
	  sth       r0, 0x0(r29)

	.loc_0x410:
	  lhz       r0, 0x0(r31)
	  rlwinm.   r0,r0,0,22,22
	  bne+      .loc_0x410
	  lhz       r3, 0x0(r31)
	  li        r0, -0x89
	  and       r0, r3, r0
	  ori       r0, r0, 0x20
	  sth       r0, 0x0(r31)
	  bl        0x1798
	  lwz       r3, 0x21C(r1)
	  li        r4, 0x20
	  bl        0x198E8
	  lwz       r0, 0x21C(r1)
	  addis     r3, r19, 0x100
	  lhz       r4, 0x0(r25)
	  rlwinm    r14,r3,16,16,31
	  rlwinm    r0,r0,16,16,31
	  stw       r0, 0x22C(r1)
	  rlwinm    r4,r4,0,0,21
	  rlwinm    r15,r3,0,16,31
	  lwz       r0, 0x22C(r1)
	  or        r0, r4, r0
	  sth       r0, 0x0(r25)
	  lwz       r0, 0x21C(r1)
	  rlwinm    r0,r0,0,16,31
	  stw       r0, 0x25C(r1)
	  lhz       r0, 0x0(r26)
	  rlwinm    r3,r0,0,27,15
	  lwz       r0, 0x25C(r1)
	  or        r0, r3, r0
	  sth       r0, 0x0(r26)
	  lhz       r0, 0x0(r27)
	  rlwinm    r0,r0,0,0,21
	  or        r0, r0, r14
	  sth       r0, 0x0(r27)
	  lhz       r0, 0x0(r28)
	  rlwinm    r0,r0,0,27,15
	  or        r0, r0, r15
	  sth       r0, 0x0(r28)
	  lhz       r0, 0x0(r30)
	  ori       r0, r0, 0x8000
	  sth       r0, 0x0(r30)
	  lhz       r0, 0x0(r30)
	  rlwinm    r0,r0,0,0,21
	  nop
	  sth       r0, 0x0(r30)
	  lhz       r0, 0x0(r29)
	  rlwinm    r0,r0,0,27,15
	  ori       r0, r0, 0x20
	  sth       r0, 0x0(r29)

	.loc_0x4D8:
	  lhz       r0, 0x0(r31)
	  rlwinm.   r0,r0,0,22,22
	  bne+      .loc_0x4D8
	  lhz       r3, 0x0(r31)
	  li        r0, -0x89
	  and       r0, r3, r0
	  ori       r0, r0, 0x20
	  sth       r0, 0x0(r31)
	  bl        0x16D0
	  lwz       r3, 0x218(r1)
	  li        r4, 0x20
	  bl        0x19820
	  lwz       r0, 0x218(r1)
	  addi      r3, r19, 0x200
	  lhz       r4, 0x0(r25)
	  rlwinm    r0,r0,16,16,31
	  stw       r0, 0x224(r1)
	  rlwinm    r4,r4,0,0,21
	  lwz       r0, 0x224(r1)
	  or        r0, r4, r0
	  sth       r0, 0x0(r25)
	  rlwinm    r0,r3,16,16,31
	  rlwinm    r3,r3,0,16,31
	  stw       r0, 0x230(r1)
	  lwz       r0, 0x218(r1)
	  stw       r3, 0x264(r1)
	  rlwinm    r0,r0,0,16,31
	  stw       r0, 0x260(r1)
	  lhz       r0, 0x0(r26)
	  rlwinm    r3,r0,0,27,15
	  lwz       r0, 0x260(r1)
	  or        r0, r3, r0
	  sth       r0, 0x0(r26)
	  lhz       r0, 0x0(r27)
	  rlwinm    r3,r0,0,0,21
	  lwz       r0, 0x230(r1)
	  or        r0, r3, r0
	  sth       r0, 0x0(r27)
	  lhz       r0, 0x0(r28)
	  rlwinm    r3,r0,0,27,15
	  lwz       r0, 0x264(r1)
	  or        r0, r3, r0
	  sth       r0, 0x0(r28)
	  lhz       r0, 0x0(r30)
	  ori       r0, r0, 0x8000
	  sth       r0, 0x0(r30)
	  lhz       r0, 0x0(r30)
	  rlwinm    r0,r0,0,0,21
	  nop
	  sth       r0, 0x0(r30)
	  lhz       r0, 0x0(r29)
	  rlwinm    r0,r0,0,27,15
	  ori       r0, r0, 0x20
	  sth       r0, 0x0(r29)

	.loc_0x5B0:
	  lhz       r0, 0x0(r31)
	  rlwinm.   r0,r0,0,22,22
	  bne+      .loc_0x5B0
	  lhz       r3, 0x0(r31)
	  li        r0, -0x89
	  and       r0, r3, r0
	  ori       r0, r0, 0x20
	  sth       r0, 0x0(r31)
	  bl        0x15F8
	  lwz       r3, 0x214(r1)
	  li        r4, 0x20
	  bl        0x19748
	  lwz       r0, 0x214(r1)
	  addis     r3, r19, 0x40
	  lhz       r4, 0x0(r25)
	  rlwinm    r0,r0,16,16,31
	  stw       r0, 0x220(r1)
	  rlwinm    r4,r4,0,0,21
	  lwz       r0, 0x220(r1)
	  or        r0, r4, r0
	  sth       r0, 0x0(r25)
	  rlwinm    r0,r3,16,16,31
	  rlwinm    r3,r3,0,16,31
	  stw       r0, 0x228(r1)
	  lwz       r0, 0x214(r1)
	  stw       r3, 0x26C(r1)
	  rlwinm    r0,r0,0,16,31
	  stw       r0, 0x268(r1)
	  lhz       r0, 0x0(r26)
	  rlwinm    r3,r0,0,27,15
	  lwz       r0, 0x268(r1)
	  or        r0, r3, r0
	  sth       r0, 0x0(r26)
	  lhz       r0, 0x0(r27)
	  rlwinm    r3,r0,0,0,21
	  lwz       r0, 0x228(r1)
	  or        r0, r3, r0
	  sth       r0, 0x0(r27)
	  lhz       r0, 0x0(r28)
	  rlwinm    r3,r0,0,27,15
	  lwz       r0, 0x26C(r1)
	  or        r0, r3, r0
	  sth       r0, 0x0(r28)
	  lhz       r0, 0x0(r30)
	  ori       r0, r0, 0x8000
	  sth       r0, 0x0(r30)
	  lhz       r0, 0x0(r30)
	  rlwinm    r0,r0,0,0,21
	  nop
	  sth       r0, 0x0(r30)
	  lhz       r0, 0x0(r29)
	  rlwinm    r0,r0,0,27,15
	  ori       r0, r0, 0x20
	  sth       r0, 0x0(r29)

	.loc_0x688:
	  lhz       r0, 0x0(r31)
	  rlwinm.   r0,r0,0,22,22
	  bne+      .loc_0x688
	  lhz       r3, 0x0(r31)
	  li        r0, -0x89
	  and       r0, r3, r0
	  ori       r0, r0, 0x20
	  sth       r0, 0x0(r31)
	  bl        0x1520
	  rlwinm    r0,r21,16,16,31
	  lhz       r3, 0x0(r25)
	  stw       r0, 0x238(r1)
	  rlwinm    r20,r21,0,16,31
	  rlwinm    r3,r3,0,0,21
	  lwz       r0, 0x238(r1)
	  or        r0, r3, r0
	  sth       r0, 0x0(r25)
	  lhz       r0, 0x0(r26)
	  rlwinm    r0,r0,0,27,15
	  or        r0, r0, r20
	  sth       r0, 0x0(r26)
	  lhz       r0, 0x0(r27)
	  rlwinm    r0,r0,0,0,21
	  or        r0, r0, r16
	  sth       r0, 0x0(r27)
	  lhz       r0, 0x0(r28)
	  rlwinm    r0,r0,0,27,15
	  or        r0, r0, r23
	  sth       r0, 0x0(r28)
	  lhz       r0, 0x0(r30)
	  rlwinm    r0,r0,0,17,15
	  sth       r0, 0x0(r30)
	  lhz       r0, 0x0(r30)
	  rlwinm    r0,r0,0,0,21
	  nop
	  sth       r0, 0x0(r30)
	  lhz       r0, 0x0(r29)
	  rlwinm    r0,r0,0,27,15
	  ori       r0, r0, 0x20
	  sth       r0, 0x0(r29)

	.loc_0x728:
	  lhz       r0, 0x0(r31)
	  rlwinm.   r0,r0,0,22,22
	  bne+      .loc_0x728
	  lhz       r3, 0x0(r31)
	  li        r0, -0x89
	  and       r0, r3, r0
	  ori       r0, r0, 0x20
	  sth       r0, 0x0(r31)
	  lhz       r0, 0x0(r25)
	  rlwinm    r3,r0,0,0,21
	  lwz       r0, 0x244(r1)
	  or        r0, r3, r0
	  sth       r0, 0x0(r25)
	  lhz       r0, 0x0(r26)
	  rlwinm    r3,r0,0,27,15
	  lwz       r0, 0x250(r1)
	  or        r0, r3, r0
	  sth       r0, 0x0(r26)
	  lhz       r0, 0x0(r27)
	  rlwinm    r0,r0,0,0,21
	  or        r0, r0, r17
	  sth       r0, 0x0(r27)
	  lhz       r0, 0x0(r28)
	  rlwinm    r0,r0,0,27,15
	  or        r0, r0, r18
	  sth       r0, 0x0(r28)
	  lhz       r0, 0x0(r30)
	  rlwinm    r0,r0,0,17,15
	  sth       r0, 0x0(r30)
	  lhz       r0, 0x0(r30)
	  rlwinm    r0,r0,0,0,21
	  nop
	  sth       r0, 0x0(r30)
	  lhz       r0, 0x0(r29)
	  rlwinm    r0,r0,0,27,15
	  ori       r0, r0, 0x20
	  sth       r0, 0x0(r29)

	.loc_0x7BC:
	  lhz       r0, 0x0(r31)
	  rlwinm.   r0,r0,0,22,22
	  bne+      .loc_0x7BC
	  lhz       r0, 0x0(r31)
	  li        r4, -0x89
	  addi      r3, r24, 0
	  and       r0, r0, r4
	  ori       r0, r0, 0x20
	  sth       r0, 0x0(r31)
	  li        r4, 0
	  li        r5, 0x20
	  bl        -0xCE0FC
	  addi      r3, r24, 0
	  li        r4, 0x20
	  bl        0x1955C
	  lhz       r0, 0x0(r25)
	  rlwinm    r3,r0,0,0,21
	  lwz       r0, 0x240(r1)
	  or        r0, r3, r0
	  sth       r0, 0x0(r25)
	  lhz       r0, 0x0(r26)
	  rlwinm    r3,r0,0,27,15
	  lwz       r0, 0x254(r1)
	  or        r0, r3, r0
	  sth       r0, 0x0(r26)
	  lhz       r0, 0x0(r27)
	  rlwinm    r0,r0,0,0,21
	  or        r0, r0, r16
	  sth       r0, 0x0(r27)
	  lhz       r0, 0x0(r28)
	  rlwinm    r0,r0,0,27,15
	  or        r0, r0, r23
	  sth       r0, 0x0(r28)
	  lhz       r0, 0x0(r30)
	  ori       r0, r0, 0x8000
	  sth       r0, 0x0(r30)
	  lhz       r0, 0x0(r30)
	  rlwinm    r0,r0,0,0,21
	  nop
	  sth       r0, 0x0(r30)
	  lhz       r0, 0x0(r29)
	  rlwinm    r0,r0,0,27,15
	  ori       r0, r0, 0x20
	  sth       r0, 0x0(r29)

	.loc_0x86C:
	  lhz       r0, 0x0(r31)
	  rlwinm.   r0,r0,0,22,22
	  bne+      .loc_0x86C
	  lhz       r3, 0x0(r31)
	  li        r0, -0x89
	  and       r0, r3, r0
	  ori       r0, r0, 0x20
	  sth       r0, 0x0(r31)
	  bl        0x133C
	  lwz       r3, 0x0(r24)
	  lwz       r0, 0x0(r22)
	  cmplw     r3, r0
	  bne-      .loc_0x944
	  lhz       r0, 0x0(r25)
	  rlwinm    r3,r0,0,0,21
	  lwz       r0, 0x23C(r1)
	  or        r0, r3, r0
	  sth       r0, 0x0(r25)
	  lhz       r0, 0x0(r26)
	  rlwinm    r3,r0,0,27,15
	  lwz       r0, 0x24C(r1)
	  or        r0, r3, r0
	  sth       r0, 0x0(r26)
	  lhz       r0, 0x0(r27)
	  rlwinm    r0,r0,0,0,21
	  or        r0, r0, r17
	  sth       r0, 0x0(r27)
	  lhz       r0, 0x0(r28)
	  rlwinm    r0,r0,0,27,15
	  or        r0, r0, r18
	  sth       r0, 0x0(r28)
	  lhz       r0, 0x0(r30)
	  rlwinm    r0,r0,0,17,15
	  sth       r0, 0x0(r30)
	  lhz       r0, 0x0(r30)
	  rlwinm    r0,r0,0,0,21
	  nop
	  sth       r0, 0x0(r30)
	  lhz       r0, 0x0(r29)
	  rlwinm    r0,r0,0,27,15
	  ori       r0, r0, 0x20
	  sth       r0, 0x0(r29)

	.loc_0x914:
	  lhz       r0, 0x0(r31)
	  rlwinm.   r0,r0,0,22,22
	  bne+      .loc_0x914
	  lhz       r4, 0x0(r31)
	  li        r3, -0x89
	  lis       r0, 0x20
	  and       r3, r4, r3
	  ori       r3, r3, 0x20
	  sth       r3, 0x0(r31)
	  addis     r19, r19, 0x20
	  stw       r0, -0x729C(r13)
	  b         .loc_0x17B8

	.loc_0x944:
	  lhz       r0, 0x0(r25)
	  rlwinm    r3,r0,0,0,21
	  lwz       r0, 0x238(r1)
	  or        r0, r3, r0
	  sth       r0, 0x0(r25)
	  lhz       r0, 0x0(r26)
	  rlwinm    r0,r0,0,27,15
	  or        r0, r0, r20
	  sth       r0, 0x0(r26)
	  lhz       r0, 0x0(r27)
	  rlwinm    r0,r0,0,0,21
	  or        r0, r0, r14
	  sth       r0, 0x0(r27)
	  lhz       r0, 0x0(r28)
	  rlwinm    r0,r0,0,27,15
	  or        r0, r0, r15
	  sth       r0, 0x0(r28)
	  lhz       r0, 0x0(r30)
	  rlwinm    r0,r0,0,17,15
	  sth       r0, 0x0(r30)
	  lhz       r0, 0x0(r30)
	  rlwinm    r0,r0,0,0,21
	  nop
	  sth       r0, 0x0(r30)
	  lhz       r0, 0x0(r29)
	  rlwinm    r0,r0,0,27,15
	  ori       r0, r0, 0x20
	  sth       r0, 0x0(r29)

	.loc_0x9B4:
	  lhz       r0, 0x0(r31)
	  rlwinm.   r0,r0,0,22,22
	  bne+      .loc_0x9B4
	  lhz       r3, 0x0(r31)
	  li        r0, -0x89
	  and       r0, r3, r0
	  ori       r0, r0, 0x20
	  sth       r0, 0x0(r31)
	  lhz       r0, 0x0(r25)
	  rlwinm    r3,r0,0,0,21
	  lwz       r0, 0x244(r1)
	  or        r0, r3, r0
	  sth       r0, 0x0(r25)
	  lhz       r0, 0x0(r26)
	  rlwinm    r3,r0,0,27,15
	  lwz       r0, 0x250(r1)
	  or        r0, r3, r0
	  sth       r0, 0x0(r26)
	  lhz       r0, 0x0(r27)
	  rlwinm    r0,r0,0,0,21
	  or        r0, r0, r17
	  sth       r0, 0x0(r27)
	  lhz       r0, 0x0(r28)
	  rlwinm    r0,r0,0,27,15
	  or        r0, r0, r18
	  sth       r0, 0x0(r28)
	  lhz       r0, 0x0(r30)
	  rlwinm    r0,r0,0,17,15
	  sth       r0, 0x0(r30)
	  lhz       r0, 0x0(r30)
	  rlwinm    r0,r0,0,0,21
	  nop
	  sth       r0, 0x0(r30)
	  lhz       r0, 0x0(r29)
	  rlwinm    r0,r0,0,27,15
	  ori       r0, r0, 0x20
	  sth       r0, 0x0(r29)

	.loc_0xA48:
	  lhz       r0, 0x0(r31)
	  rlwinm.   r0,r0,0,22,22
	  bne+      .loc_0xA48
	  lhz       r0, 0x0(r31)
	  li        r4, -0x89
	  addi      r3, r24, 0
	  and       r0, r0, r4
	  ori       r0, r0, 0x20
	  sth       r0, 0x0(r31)
	  li        r4, 0
	  li        r5, 0x20
	  bl        -0xCE388
	  addi      r3, r24, 0
	  li        r4, 0x20
	  bl        0x192D0
	  lhz       r0, 0x0(r25)
	  rlwinm    r3,r0,0,0,21
	  lwz       r0, 0x240(r1)
	  or        r0, r3, r0
	  sth       r0, 0x0(r25)
	  lhz       r0, 0x0(r26)
	  rlwinm    r3,r0,0,27,15
	  lwz       r0, 0x254(r1)
	  or        r0, r3, r0
	  sth       r0, 0x0(r26)
	  lhz       r0, 0x0(r27)
	  rlwinm    r0,r0,0,0,21
	  or        r0, r0, r14
	  sth       r0, 0x0(r27)
	  lhz       r0, 0x0(r28)
	  rlwinm    r0,r0,0,27,15
	  or        r0, r0, r15
	  sth       r0, 0x0(r28)
	  lhz       r0, 0x0(r30)
	  ori       r0, r0, 0x8000
	  sth       r0, 0x0(r30)
	  lhz       r0, 0x0(r30)
	  rlwinm    r0,r0,0,0,21
	  nop
	  sth       r0, 0x0(r30)
	  lhz       r0, 0x0(r29)
	  rlwinm    r0,r0,0,27,15
	  ori       r0, r0, 0x20
	  sth       r0, 0x0(r29)

	.loc_0xAF8:
	  lhz       r0, 0x0(r31)
	  rlwinm.   r0,r0,0,22,22
	  bne+      .loc_0xAF8
	  lhz       r3, 0x0(r31)
	  li        r0, -0x89
	  and       r0, r3, r0
	  ori       r0, r0, 0x20
	  sth       r0, 0x0(r31)
	  bl        0x10B0
	  lwz       r3, 0x0(r24)
	  lwz       r0, 0x0(r22)
	  cmplw     r3, r0
	  bne-      .loc_0xC70
	  lhz       r0, 0x0(r25)
	  rlwinm    r3,r0,0,0,21
	  lwz       r0, 0x23C(r1)
	  or        r0, r3, r0
	  sth       r0, 0x0(r25)
	  lhz       r0, 0x0(r26)
	  rlwinm    r3,r0,0,27,15
	  lwz       r0, 0x24C(r1)
	  or        r0, r3, r0
	  sth       r0, 0x0(r26)
	  lhz       r0, 0x0(r27)
	  rlwinm    r0,r0,0,0,21
	  or        r0, r0, r17
	  sth       r0, 0x0(r27)
	  lhz       r0, 0x0(r28)
	  rlwinm    r0,r0,0,27,15
	  or        r0, r0, r18
	  sth       r0, 0x0(r28)
	  lhz       r0, 0x0(r30)
	  rlwinm    r0,r0,0,17,15
	  sth       r0, 0x0(r30)
	  lhz       r0, 0x0(r30)
	  rlwinm    r0,r0,0,0,21
	  nop
	  sth       r0, 0x0(r30)
	  lhz       r0, 0x0(r29)
	  rlwinm    r0,r0,0,27,15
	  ori       r0, r0, 0x20
	  sth       r0, 0x0(r29)

	.loc_0xBA0:
	  lhz       r0, 0x0(r31)
	  rlwinm.   r0,r0,0,22,22
	  bne+      .loc_0xBA0
	  lhz       r3, 0x0(r31)
	  li        r0, -0x89
	  and       r0, r3, r0
	  ori       r0, r0, 0x20
	  sth       r0, 0x0(r31)
	  lhz       r0, 0x0(r25)
	  rlwinm    r3,r0,0,0,21
	  lwz       r0, 0x234(r1)
	  or        r0, r3, r0
	  sth       r0, 0x0(r25)
	  lhz       r0, 0x0(r26)
	  rlwinm    r3,r0,0,27,15
	  lwz       r0, 0x258(r1)
	  or        r0, r3, r0
	  sth       r0, 0x0(r26)
	  lhz       r0, 0x0(r27)
	  rlwinm    r0,r0,0,0,21
	  or        r0, r0, r16
	  sth       r0, 0x0(r27)
	  lhz       r0, 0x0(r28)
	  rlwinm    r0,r0,0,27,15
	  or        r0, r0, r23
	  sth       r0, 0x0(r28)
	  lhz       r0, 0x0(r30)
	  rlwinm    r0,r0,0,17,15
	  sth       r0, 0x0(r30)
	  lhz       r0, 0x0(r30)
	  rlwinm    r0,r0,0,0,21
	  nop
	  sth       r0, 0x0(r30)
	  lhz       r0, 0x0(r29)
	  rlwinm    r0,r0,0,27,15
	  ori       r0, r0, 0x20
	  sth       r0, 0x0(r29)

	.loc_0xC34:
	  lhz       r0, 0x0(r31)
	  rlwinm.   r0,r0,0,22,22
	  bne+      .loc_0xC34
	  lhz       r4, 0x0(r31)
	  li        r0, -0x89
	  lis       r3, 0x40
	  and       r0, r4, r0
	  ori       r0, r0, 0x20
	  sth       r0, 0x0(r31)
	  addis     r19, r19, 0x40
	  lhz       r0, 0x270(r1)
	  stw       r3, -0x729C(r13)
	  ori       r0, r0, 0x8
	  sth       r0, 0x270(r1)
	  b         .loc_0x17B8

	.loc_0xC70:
	  lhz       r0, 0x0(r25)
	  rlwinm    r3,r0,0,0,21
	  lwz       r0, 0x238(r1)
	  or        r0, r3, r0
	  sth       r0, 0x0(r25)
	  lhz       r0, 0x0(r26)
	  rlwinm    r0,r0,0,27,15
	  or        r0, r0, r20
	  sth       r0, 0x0(r26)
	  lhz       r0, 0x0(r27)
	  rlwinm    r3,r0,0,0,21
	  lwz       r0, 0x230(r1)
	  or        r0, r3, r0
	  sth       r0, 0x0(r27)
	  lhz       r0, 0x0(r28)
	  rlwinm    r3,r0,0,27,15
	  lwz       r0, 0x264(r1)
	  or        r0, r3, r0
	  sth       r0, 0x0(r28)
	  lhz       r0, 0x0(r30)
	  rlwinm    r0,r0,0,17,15
	  sth       r0, 0x0(r30)
	  lhz       r0, 0x0(r30)
	  rlwinm    r0,r0,0,0,21
	  nop
	  sth       r0, 0x0(r30)
	  lhz       r0, 0x0(r29)
	  rlwinm    r0,r0,0,27,15
	  ori       r0, r0, 0x20
	  sth       r0, 0x0(r29)

	.loc_0xCE8:
	  lhz       r0, 0x0(r31)
	  rlwinm.   r0,r0,0,22,22
	  bne+      .loc_0xCE8
	  lhz       r3, 0x0(r31)
	  li        r0, -0x89
	  and       r0, r3, r0
	  ori       r0, r0, 0x20
	  sth       r0, 0x0(r31)
	  lhz       r0, 0x0(r25)
	  rlwinm    r3,r0,0,0,21
	  lwz       r0, 0x244(r1)
	  or        r0, r3, r0
	  sth       r0, 0x0(r25)
	  lhz       r0, 0x0(r26)
	  rlwinm    r3,r0,0,27,15
	  lwz       r0, 0x250(r1)
	  or        r0, r3, r0
	  sth       r0, 0x0(r26)
	  lhz       r0, 0x0(r27)
	  rlwinm    r0,r0,0,0,21
	  or        r0, r0, r17
	  sth       r0, 0x0(r27)
	  lhz       r0, 0x0(r28)
	  rlwinm    r0,r0,0,27,15
	  or        r0, r0, r18
	  sth       r0, 0x0(r28)
	  lhz       r0, 0x0(r30)
	  rlwinm    r0,r0,0,17,15
	  sth       r0, 0x0(r30)
	  lhz       r0, 0x0(r30)
	  rlwinm    r0,r0,0,0,21
	  nop
	  sth       r0, 0x0(r30)
	  lhz       r0, 0x0(r29)
	  rlwinm    r0,r0,0,27,15
	  ori       r0, r0, 0x20
	  sth       r0, 0x0(r29)

	.loc_0xD7C:
	  lhz       r0, 0x0(r31)
	  rlwinm.   r0,r0,0,22,22
	  bne+      .loc_0xD7C
	  lhz       r0, 0x0(r31)
	  li        r4, -0x89
	  addi      r3, r24, 0
	  and       r0, r0, r4
	  ori       r0, r0, 0x20
	  sth       r0, 0x0(r31)
	  li        r4, 0
	  li        r5, 0x20
	  bl        -0xCE6BC
	  addi      r3, r24, 0
	  li        r4, 0x20
	  bl        0x18F9C
	  lhz       r0, 0x0(r25)
	  rlwinm    r3,r0,0,0,21
	  lwz       r0, 0x240(r1)
	  or        r0, r3, r0
	  sth       r0, 0x0(r25)
	  lhz       r0, 0x0(r26)
	  rlwinm    r3,r0,0,27,15
	  lwz       r0, 0x254(r1)
	  or        r0, r3, r0
	  sth       r0, 0x0(r26)
	  lhz       r0, 0x0(r27)
	  rlwinm    r3,r0,0,0,21
	  lwz       r0, 0x230(r1)
	  or        r0, r3, r0
	  sth       r0, 0x0(r27)
	  lhz       r0, 0x0(r28)
	  rlwinm    r3,r0,0,27,15
	  lwz       r0, 0x264(r1)
	  or        r0, r3, r0
	  sth       r0, 0x0(r28)
	  lhz       r0, 0x0(r30)
	  ori       r0, r0, 0x8000
	  sth       r0, 0x0(r30)
	  lhz       r0, 0x0(r30)
	  rlwinm    r0,r0,0,0,21
	  nop
	  sth       r0, 0x0(r30)
	  lhz       r0, 0x0(r29)
	  rlwinm    r0,r0,0,27,15
	  ori       r0, r0, 0x20
	  sth       r0, 0x0(r29)

	.loc_0xE34:
	  lhz       r0, 0x0(r31)
	  rlwinm.   r0,r0,0,22,22
	  bne+      .loc_0xE34
	  lhz       r3, 0x0(r31)
	  li        r0, -0x89
	  and       r0, r3, r0
	  ori       r0, r0, 0x20
	  sth       r0, 0x0(r31)
	  bl        0xD74
	  lwz       r3, 0x0(r24)
	  lwz       r0, 0x0(r22)
	  cmplw     r3, r0
	  bne-      .loc_0x1040
	  lhz       r0, 0x0(r25)
	  rlwinm    r3,r0,0,0,21
	  lwz       r0, 0x23C(r1)
	  or        r0, r3, r0
	  sth       r0, 0x0(r25)
	  lhz       r0, 0x0(r26)
	  rlwinm    r3,r0,0,27,15
	  lwz       r0, 0x24C(r1)
	  or        r0, r3, r0
	  sth       r0, 0x0(r26)
	  lhz       r0, 0x0(r27)
	  rlwinm    r0,r0,0,0,21
	  or        r0, r0, r17
	  sth       r0, 0x0(r27)
	  lhz       r0, 0x0(r28)
	  rlwinm    r0,r0,0,27,15
	  or        r0, r0, r18
	  sth       r0, 0x0(r28)
	  lhz       r0, 0x0(r30)
	  rlwinm    r0,r0,0,17,15
	  sth       r0, 0x0(r30)
	  lhz       r0, 0x0(r30)
	  rlwinm    r0,r0,0,0,21
	  nop
	  sth       r0, 0x0(r30)
	  lhz       r0, 0x0(r29)
	  rlwinm    r0,r0,0,27,15
	  ori       r0, r0, 0x20
	  sth       r0, 0x0(r29)

	.loc_0xEDC:
	  lhz       r0, 0x0(r31)
	  rlwinm.   r0,r0,0,22,22
	  bne+      .loc_0xEDC
	  lhz       r3, 0x0(r31)
	  li        r0, -0x89
	  and       r0, r3, r0
	  ori       r0, r0, 0x20
	  sth       r0, 0x0(r31)
	  lhz       r0, 0x0(r25)
	  rlwinm    r3,r0,0,0,21
	  lwz       r0, 0x234(r1)
	  or        r0, r3, r0
	  sth       r0, 0x0(r25)
	  lhz       r0, 0x0(r26)
	  rlwinm    r3,r0,0,27,15
	  lwz       r0, 0x258(r1)
	  or        r0, r3, r0
	  sth       r0, 0x0(r26)
	  lhz       r0, 0x0(r27)
	  rlwinm    r0,r0,0,0,21
	  or        r0, r0, r16
	  sth       r0, 0x0(r27)
	  lhz       r0, 0x0(r28)
	  rlwinm    r0,r0,0,27,15
	  or        r0, r0, r23
	  sth       r0, 0x0(r28)
	  lhz       r0, 0x0(r30)
	  rlwinm    r0,r0,0,17,15
	  sth       r0, 0x0(r30)
	  lhz       r0, 0x0(r30)
	  rlwinm    r0,r0,0,0,21
	  nop
	  sth       r0, 0x0(r30)
	  lhz       r0, 0x0(r29)
	  rlwinm    r0,r0,0,27,15
	  ori       r0, r0, 0x20
	  sth       r0, 0x0(r29)

	.loc_0xF70:
	  lhz       r0, 0x0(r31)
	  rlwinm.   r0,r0,0,22,22
	  bne+      .loc_0xF70
	  lhz       r3, 0x0(r31)
	  li        r0, -0x89
	  and       r0, r3, r0
	  ori       r0, r0, 0x20
	  sth       r0, 0x0(r31)
	  lhz       r0, 0x0(r25)
	  rlwinm    r3,r0,0,0,21
	  lwz       r0, 0x22C(r1)
	  or        r0, r3, r0
	  sth       r0, 0x0(r25)
	  lhz       r0, 0x0(r26)
	  rlwinm    r3,r0,0,27,15
	  lwz       r0, 0x25C(r1)
	  or        r0, r3, r0
	  sth       r0, 0x0(r26)
	  lhz       r0, 0x0(r27)
	  rlwinm    r0,r0,0,0,21
	  or        r0, r0, r14
	  sth       r0, 0x0(r27)
	  lhz       r0, 0x0(r28)
	  rlwinm    r0,r0,0,27,15
	  or        r0, r0, r15
	  sth       r0, 0x0(r28)
	  lhz       r0, 0x0(r30)
	  rlwinm    r0,r0,0,17,15
	  sth       r0, 0x0(r30)
	  lhz       r0, 0x0(r30)
	  rlwinm    r0,r0,0,0,21
	  nop
	  sth       r0, 0x0(r30)
	  lhz       r0, 0x0(r29)
	  rlwinm    r0,r0,0,27,15
	  ori       r0, r0, 0x20
	  sth       r0, 0x0(r29)

	.loc_0x1004:
	  lhz       r0, 0x0(r31)
	  rlwinm.   r0,r0,0,22,22
	  bne+      .loc_0x1004
	  lhz       r4, 0x0(r31)
	  li        r0, -0x89
	  lis       r3, 0x80
	  and       r0, r4, r0
	  ori       r0, r0, 0x20
	  sth       r0, 0x0(r31)
	  addis     r19, r19, 0x80
	  lhz       r0, 0x270(r1)
	  stw       r3, -0x729C(r13)
	  ori       r0, r0, 0x10
	  sth       r0, 0x270(r1)
	  b         .loc_0x17B8

	.loc_0x1040:
	  lhz       r0, 0x0(r25)
	  rlwinm    r3,r0,0,0,21
	  lwz       r0, 0x238(r1)
	  or        r0, r3, r0
	  sth       r0, 0x0(r25)
	  lhz       r0, 0x0(r26)
	  rlwinm    r0,r0,0,27,15
	  or        r0, r0, r20
	  sth       r0, 0x0(r26)
	  lhz       r0, 0x0(r27)
	  rlwinm    r3,r0,0,0,21
	  lwz       r0, 0x228(r1)
	  or        r0, r3, r0
	  sth       r0, 0x0(r27)
	  lhz       r0, 0x0(r28)
	  rlwinm    r3,r0,0,27,15
	  lwz       r0, 0x26C(r1)
	  or        r0, r3, r0
	  sth       r0, 0x0(r28)
	  lhz       r0, 0x0(r30)
	  rlwinm    r0,r0,0,17,15
	  sth       r0, 0x0(r30)
	  lhz       r0, 0x0(r30)
	  rlwinm    r0,r0,0,0,21
	  nop
	  sth       r0, 0x0(r30)
	  lhz       r0, 0x0(r29)
	  rlwinm    r0,r0,0,27,15
	  ori       r0, r0, 0x20
	  sth       r0, 0x0(r29)

	.loc_0x10B8:
	  lhz       r0, 0x0(r31)
	  rlwinm.   r0,r0,0,22,22
	  bne+      .loc_0x10B8
	  lhz       r3, 0x0(r31)
	  li        r0, -0x89
	  and       r0, r3, r0
	  ori       r0, r0, 0x20
	  sth       r0, 0x0(r31)
	  lhz       r0, 0x0(r25)
	  rlwinm    r3,r0,0,0,21
	  lwz       r0, 0x244(r1)
	  or        r0, r3, r0
	  sth       r0, 0x0(r25)
	  lhz       r0, 0x0(r26)
	  rlwinm    r3,r0,0,27,15
	  lwz       r0, 0x250(r1)
	  or        r0, r3, r0
	  sth       r0, 0x0(r26)
	  lhz       r0, 0x0(r27)
	  rlwinm    r0,r0,0,0,21
	  or        r0, r0, r17
	  sth       r0, 0x0(r27)
	  lhz       r0, 0x0(r28)
	  rlwinm    r0,r0,0,27,15
	  or        r0, r0, r18
	  sth       r0, 0x0(r28)
	  lhz       r0, 0x0(r30)
	  rlwinm    r0,r0,0,17,15
	  sth       r0, 0x0(r30)
	  lhz       r0, 0x0(r30)
	  rlwinm    r0,r0,0,0,21
	  nop
	  sth       r0, 0x0(r30)
	  lhz       r0, 0x0(r29)
	  rlwinm    r0,r0,0,27,15
	  ori       r0, r0, 0x20
	  sth       r0, 0x0(r29)

	.loc_0x114C:
	  lhz       r0, 0x0(r31)
	  rlwinm.   r0,r0,0,22,22
	  bne+      .loc_0x114C
	  lhz       r0, 0x0(r31)
	  li        r4, -0x89
	  addi      r3, r24, 0
	  and       r0, r0, r4
	  ori       r0, r0, 0x20
	  sth       r0, 0x0(r31)
	  li        r4, 0
	  li        r5, 0x20
	  bl        -0xCEA8C
	  addi      r3, r24, 0
	  li        r4, 0x20
	  bl        0x18BCC
	  lhz       r0, 0x0(r25)
	  rlwinm    r3,r0,0,0,21
	  lwz       r0, 0x240(r1)
	  or        r0, r3, r0
	  sth       r0, 0x0(r25)
	  lhz       r0, 0x0(r26)
	  rlwinm    r3,r0,0,27,15
	  lwz       r0, 0x254(r1)
	  or        r0, r3, r0
	  sth       r0, 0x0(r26)
	  lhz       r0, 0x0(r27)
	  rlwinm    r3,r0,0,0,21
	  lwz       r0, 0x228(r1)
	  or        r0, r3, r0
	  sth       r0, 0x0(r27)
	  lhz       r0, 0x0(r28)
	  rlwinm    r3,r0,0,27,15
	  lwz       r0, 0x26C(r1)
	  or        r0, r3, r0
	  sth       r0, 0x0(r28)
	  lhz       r0, 0x0(r30)
	  ori       r0, r0, 0x8000
	  sth       r0, 0x0(r30)
	  lhz       r0, 0x0(r30)
	  rlwinm    r0,r0,0,0,21
	  nop
	  sth       r0, 0x0(r30)
	  lhz       r0, 0x0(r29)
	  rlwinm    r0,r0,0,27,15
	  ori       r0, r0, 0x20
	  sth       r0, 0x0(r29)

	.loc_0x1204:
	  lhz       r0, 0x0(r31)
	  rlwinm.   r0,r0,0,22,22
	  bne+      .loc_0x1204
	  lhz       r3, 0x0(r31)
	  li        r0, -0x89
	  and       r0, r3, r0
	  ori       r0, r0, 0x20
	  sth       r0, 0x0(r31)
	  bl        0x9A4
	  lwz       r0, 0x0(r24)
	  lwz       r3, 0x0(r22)
	  cmplw     r0, r3
	  bne-      .loc_0x14AC
	  lhz       r0, 0x0(r25)
	  rlwinm    r3,r0,0,0,21
	  lwz       r0, 0x23C(r1)
	  or        r0, r3, r0
	  sth       r0, 0x0(r25)
	  lhz       r0, 0x0(r26)
	  rlwinm    r3,r0,0,27,15
	  lwz       r0, 0x24C(r1)
	  or        r0, r3, r0
	  sth       r0, 0x0(r26)
	  lhz       r0, 0x0(r27)
	  rlwinm    r0,r0,0,0,21
	  or        r0, r0, r17
	  sth       r0, 0x0(r27)
	  lhz       r0, 0x0(r28)
	  rlwinm    r0,r0,0,27,15
	  or        r0, r0, r18
	  sth       r0, 0x0(r28)
	  lhz       r0, 0x0(r30)
	  rlwinm    r0,r0,0,17,15
	  sth       r0, 0x0(r30)
	  lhz       r0, 0x0(r30)
	  rlwinm    r0,r0,0,0,21
	  nop
	  sth       r0, 0x0(r30)
	  lhz       r0, 0x0(r29)
	  rlwinm    r0,r0,0,27,15
	  ori       r0, r0, 0x20
	  sth       r0, 0x0(r29)

	.loc_0x12AC:
	  lhz       r0, 0x0(r31)
	  rlwinm.   r0,r0,0,22,22
	  bne+      .loc_0x12AC
	  lhz       r3, 0x0(r31)
	  li        r0, -0x89
	  and       r0, r3, r0
	  ori       r0, r0, 0x20
	  sth       r0, 0x0(r31)
	  lhz       r0, 0x0(r25)
	  rlwinm    r3,r0,0,0,21
	  lwz       r0, 0x234(r1)
	  or        r0, r3, r0
	  sth       r0, 0x0(r25)
	  lhz       r0, 0x0(r26)
	  rlwinm    r3,r0,0,27,15
	  lwz       r0, 0x258(r1)
	  or        r0, r3, r0
	  sth       r0, 0x0(r26)
	  lhz       r0, 0x0(r27)
	  rlwinm    r0,r0,0,0,21
	  or        r0, r0, r16
	  sth       r0, 0x0(r27)
	  lhz       r0, 0x0(r28)
	  rlwinm    r0,r0,0,27,15
	  or        r0, r0, r23
	  sth       r0, 0x0(r28)
	  lhz       r0, 0x0(r30)
	  rlwinm    r0,r0,0,17,15
	  sth       r0, 0x0(r30)
	  lhz       r0, 0x0(r30)
	  rlwinm    r0,r0,0,0,21
	  nop
	  sth       r0, 0x0(r30)
	  lhz       r0, 0x0(r29)
	  rlwinm    r0,r0,0,27,15
	  ori       r0, r0, 0x20
	  sth       r0, 0x0(r29)

	.loc_0x1340:
	  lhz       r0, 0x0(r31)
	  rlwinm.   r0,r0,0,22,22
	  bne+      .loc_0x1340
	  lhz       r3, 0x0(r31)
	  li        r0, -0x89
	  and       r0, r3, r0
	  ori       r0, r0, 0x20
	  sth       r0, 0x0(r31)
	  lhz       r0, 0x0(r25)
	  rlwinm    r3,r0,0,0,21
	  lwz       r0, 0x22C(r1)
	  or        r0, r3, r0
	  sth       r0, 0x0(r25)
	  lhz       r0, 0x0(r26)
	  rlwinm    r3,r0,0,27,15
	  lwz       r0, 0x25C(r1)
	  or        r0, r3, r0
	  sth       r0, 0x0(r26)
	  lhz       r0, 0x0(r27)
	  rlwinm    r0,r0,0,0,21
	  or        r0, r0, r14
	  sth       r0, 0x0(r27)
	  lhz       r0, 0x0(r28)
	  rlwinm    r0,r0,0,27,15
	  or        r0, r0, r15
	  sth       r0, 0x0(r28)
	  lhz       r0, 0x0(r30)
	  rlwinm    r0,r0,0,17,15
	  sth       r0, 0x0(r30)
	  lhz       r0, 0x0(r30)
	  rlwinm    r0,r0,0,0,21
	  nop
	  sth       r0, 0x0(r30)
	  lhz       r0, 0x0(r29)
	  rlwinm    r0,r0,0,27,15
	  ori       r0, r0, 0x20
	  sth       r0, 0x0(r29)

	.loc_0x13D4:
	  lhz       r0, 0x0(r31)
	  rlwinm.   r0,r0,0,22,22
	  bne+      .loc_0x13D4
	  lhz       r3, 0x0(r31)
	  li        r0, -0x89
	  and       r0, r3, r0
	  ori       r0, r0, 0x20
	  sth       r0, 0x0(r31)
	  lhz       r0, 0x0(r25)
	  rlwinm    r3,r0,0,0,21
	  lwz       r0, 0x224(r1)
	  or        r0, r3, r0
	  sth       r0, 0x0(r25)
	  lhz       r0, 0x0(r26)
	  rlwinm    r3,r0,0,27,15
	  lwz       r0, 0x260(r1)
	  or        r0, r3, r0
	  sth       r0, 0x0(r26)
	  lhz       r0, 0x0(r27)
	  rlwinm    r3,r0,0,0,21
	  lwz       r0, 0x230(r1)
	  or        r0, r3, r0
	  sth       r0, 0x0(r27)
	  lhz       r0, 0x0(r28)
	  rlwinm    r3,r0,0,27,15
	  lwz       r0, 0x264(r1)
	  or        r0, r3, r0
	  sth       r0, 0x0(r28)
	  lhz       r0, 0x0(r30)
	  rlwinm    r0,r0,0,17,15
	  sth       r0, 0x0(r30)
	  lhz       r0, 0x0(r30)
	  rlwinm    r0,r0,0,0,21
	  nop
	  sth       r0, 0x0(r30)
	  lhz       r0, 0x0(r29)
	  rlwinm    r0,r0,0,27,15
	  ori       r0, r0, 0x20
	  sth       r0, 0x0(r29)

	.loc_0x1470:
	  lhz       r0, 0x0(r31)
	  rlwinm.   r0,r0,0,22,22
	  bne+      .loc_0x1470
	  lhz       r4, 0x0(r31)
	  li        r0, -0x89
	  lis       r3, 0x100
	  and       r0, r4, r0
	  ori       r0, r0, 0x20
	  sth       r0, 0x0(r31)
	  addis     r19, r19, 0x100
	  lhz       r0, 0x270(r1)
	  stw       r3, -0x729C(r13)
	  ori       r0, r0, 0x18
	  sth       r0, 0x270(r1)
	  b         .loc_0x17B8

	.loc_0x14AC:
	  lhz       r0, 0x0(r25)
	  rlwinm    r3,r0,0,0,21
	  lwz       r0, 0x23C(r1)
	  or        r0, r3, r0
	  sth       r0, 0x0(r25)
	  lhz       r0, 0x0(r26)
	  rlwinm    r3,r0,0,27,15
	  lwz       r0, 0x24C(r1)
	  or        r0, r3, r0
	  sth       r0, 0x0(r26)
	  lhz       r0, 0x0(r27)
	  rlwinm    r0,r0,0,0,21
	  or        r0, r0, r17
	  sth       r0, 0x0(r27)
	  lhz       r0, 0x0(r28)
	  rlwinm    r0,r0,0,27,15
	  or        r0, r0, r18
	  sth       r0, 0x0(r28)
	  lhz       r0, 0x0(r30)
	  rlwinm    r0,r0,0,17,15
	  sth       r0, 0x0(r30)
	  lhz       r0, 0x0(r30)
	  rlwinm    r0,r0,0,0,21
	  nop
	  sth       r0, 0x0(r30)
	  lhz       r0, 0x0(r29)
	  rlwinm    r0,r0,0,27,15
	  ori       r0, r0, 0x20
	  sth       r0, 0x0(r29)

	.loc_0x1520:
	  lhz       r0, 0x0(r31)
	  rlwinm.   r0,r0,0,22,22
	  bne+      .loc_0x1520
	  lhz       r3, 0x0(r31)
	  li        r0, -0x89
	  and       r0, r3, r0
	  ori       r0, r0, 0x20
	  sth       r0, 0x0(r31)
	  lhz       r0, 0x0(r25)
	  rlwinm    r3,r0,0,0,21
	  lwz       r0, 0x234(r1)
	  or        r0, r3, r0
	  sth       r0, 0x0(r25)
	  lhz       r0, 0x0(r26)
	  rlwinm    r3,r0,0,27,15
	  lwz       r0, 0x258(r1)
	  or        r0, r3, r0
	  sth       r0, 0x0(r26)
	  lhz       r0, 0x0(r27)
	  rlwinm    r0,r0,0,0,21
	  or        r0, r0, r16
	  sth       r0, 0x0(r27)
	  lhz       r0, 0x0(r28)
	  rlwinm    r0,r0,0,27,15
	  or        r0, r0, r23
	  sth       r0, 0x0(r28)
	  lhz       r0, 0x0(r30)
	  rlwinm    r0,r0,0,17,15
	  sth       r0, 0x0(r30)
	  lhz       r0, 0x0(r30)
	  rlwinm    r0,r0,0,0,21
	  nop
	  sth       r0, 0x0(r30)
	  lhz       r0, 0x0(r29)
	  rlwinm    r0,r0,0,27,15
	  ori       r0, r0, 0x20
	  sth       r0, 0x0(r29)

	.loc_0x15B4:
	  lhz       r0, 0x0(r31)
	  rlwinm.   r0,r0,0,22,22
	  bne+      .loc_0x15B4
	  lhz       r3, 0x0(r31)
	  li        r0, -0x89
	  and       r0, r3, r0
	  ori       r0, r0, 0x20
	  sth       r0, 0x0(r31)
	  lhz       r0, 0x0(r25)
	  rlwinm    r3,r0,0,0,21
	  lwz       r0, 0x22C(r1)
	  or        r0, r3, r0
	  sth       r0, 0x0(r25)
	  lhz       r0, 0x0(r26)
	  rlwinm    r3,r0,0,27,15
	  lwz       r0, 0x25C(r1)
	  or        r0, r3, r0
	  sth       r0, 0x0(r26)
	  lhz       r0, 0x0(r27)
	  rlwinm    r0,r0,0,0,21
	  or        r0, r0, r14
	  sth       r0, 0x0(r27)
	  lhz       r0, 0x0(r28)
	  rlwinm    r0,r0,0,27,15
	  or        r0, r0, r15
	  sth       r0, 0x0(r28)
	  lhz       r0, 0x0(r30)
	  rlwinm    r0,r0,0,17,15
	  sth       r0, 0x0(r30)
	  lhz       r0, 0x0(r30)
	  rlwinm    r0,r0,0,0,21
	  nop
	  sth       r0, 0x0(r30)
	  lhz       r0, 0x0(r29)
	  rlwinm    r0,r0,0,27,15
	  ori       r0, r0, 0x20
	  sth       r0, 0x0(r29)

	.loc_0x1648:
	  lhz       r0, 0x0(r31)
	  rlwinm.   r0,r0,0,22,22
	  bne+      .loc_0x1648
	  lhz       r3, 0x0(r31)
	  li        r0, -0x89
	  and       r0, r3, r0
	  ori       r0, r0, 0x20
	  sth       r0, 0x0(r31)
	  lhz       r0, 0x0(r25)
	  rlwinm    r3,r0,0,0,21
	  lwz       r0, 0x224(r1)
	  or        r0, r3, r0
	  sth       r0, 0x0(r25)
	  lhz       r0, 0x0(r26)
	  rlwinm    r3,r0,0,27,15
	  lwz       r0, 0x260(r1)
	  or        r0, r3, r0
	  sth       r0, 0x0(r26)
	  lhz       r0, 0x0(r27)
	  rlwinm    r3,r0,0,0,21
	  lwz       r0, 0x230(r1)
	  or        r0, r3, r0
	  sth       r0, 0x0(r27)
	  lhz       r0, 0x0(r28)
	  rlwinm    r3,r0,0,27,15
	  lwz       r0, 0x264(r1)
	  or        r0, r3, r0
	  sth       r0, 0x0(r28)
	  lhz       r0, 0x0(r30)
	  rlwinm    r0,r0,0,17,15
	  sth       r0, 0x0(r30)
	  lhz       r0, 0x0(r30)
	  rlwinm    r0,r0,0,0,21
	  nop
	  sth       r0, 0x0(r30)
	  lhz       r0, 0x0(r29)
	  rlwinm    r0,r0,0,27,15
	  ori       r0, r0, 0x20
	  sth       r0, 0x0(r29)

	.loc_0x16E4:
	  lhz       r0, 0x0(r31)
	  rlwinm.   r0,r0,0,22,22
	  bne+      .loc_0x16E4
	  lhz       r3, 0x0(r31)
	  li        r0, -0x89
	  and       r0, r3, r0
	  ori       r0, r0, 0x20
	  sth       r0, 0x0(r31)
	  lhz       r0, 0x0(r25)
	  rlwinm    r3,r0,0,0,21
	  lwz       r0, 0x220(r1)
	  or        r0, r3, r0
	  sth       r0, 0x0(r25)
	  lhz       r0, 0x0(r26)
	  rlwinm    r3,r0,0,27,15
	  lwz       r0, 0x268(r1)
	  or        r0, r3, r0
	  sth       r0, 0x0(r26)
	  lhz       r0, 0x0(r27)
	  rlwinm    r3,r0,0,0,21
	  lwz       r0, 0x228(r1)
	  or        r0, r3, r0
	  sth       r0, 0x0(r27)
	  lhz       r0, 0x0(r28)
	  rlwinm    r3,r0,0,27,15
	  lwz       r0, 0x26C(r1)
	  or        r0, r3, r0
	  sth       r0, 0x0(r28)
	  lhz       r0, 0x0(r30)
	  rlwinm    r0,r0,0,17,15
	  sth       r0, 0x0(r30)
	  lhz       r0, 0x0(r30)
	  rlwinm    r0,r0,0,0,21
	  nop
	  sth       r0, 0x0(r30)
	  lhz       r0, 0x0(r29)
	  rlwinm    r0,r0,0,27,15
	  ori       r0, r0, 0x20
	  sth       r0, 0x0(r29)

	.loc_0x1780:
	  lhz       r0, 0x0(r31)
	  rlwinm.   r0,r0,0,22,22
	  bne+      .loc_0x1780
	  lhz       r4, 0x0(r31)
	  li        r0, -0x89
	  lis       r3, 0x200
	  and       r0, r4, r0
	  ori       r0, r0, 0x20
	  sth       r0, 0x0(r31)
	  addis     r19, r19, 0x200
	  lhz       r0, 0x270(r1)
	  stw       r3, -0x729C(r13)
	  ori       r0, r0, 0x20
	  sth       r0, 0x270(r1)

	.loc_0x17B8:
	  lwz       r3, 0x248(r1)
	  lhz       r0, 0x0(r3)
	  rlwinm    r3,r0,0,0,25
	  lhz       r0, 0x270(r1)
	  or        r0, r3, r0
	  lwz       r3, 0x248(r1)
	  sth       r0, 0x0(r3)

	.loc_0x17D4:
	  lis       r3, 0xC000
	  stw       r19, 0xD0(r3)
	  stw       r19, -0x72A4(r13)
	  lwz       r0, 0x2C4(r1)
	  lmw       r14, 0x278(r1)
	  addi      r1, r1, 0x2C0
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000154
 */
void __ARClearArea(void)
{
	// UNUSED FUNCTION
}
