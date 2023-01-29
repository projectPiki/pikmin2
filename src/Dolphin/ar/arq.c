#include "types.h"

/*
 * --INFO--
 * Address:	........
 * Size:	000070
 */
void __ARQPopTaskQueueHi(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800D41BC
 * Size:	000100
 */
void __ARQServiceQueueLo(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x8(r1)
	  lwz       r0, -0x7274(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x30
	  lwz       r3, -0x7280(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x30
	  stw       r3, -0x7274(r13)
	  lwz       r0, 0x0(r3)
	  stw       r0, -0x7280(r13)

	.loc_0x30:
	  lwz       r5, -0x7274(r13)
	  cmplwi    r5, 0
	  beq-      .loc_0xF0
	  lwz       r6, 0x18(r5)
	  lwz       r0, -0x7268(r13)
	  cmplw     r6, r0
	  bgt-      .loc_0x84
	  lwz       r3, 0x8(r5)
	  cmplwi    r3, 0
	  bne-      .loc_0x68
	  lwz       r4, 0x10(r5)
	  lwz       r5, 0x14(r5)
	  bl        -0x1B28
	  b         .loc_0x74

	.loc_0x68:
	  lwz       r4, 0x14(r5)
	  lwz       r5, 0x10(r5)
	  bl        -0x1B38

	.loc_0x74:
	  lwz       r3, -0x7274(r13)
	  lwz       r0, 0x1C(r3)
	  stw       r0, -0x726C(r13)
	  b         .loc_0xB4

	.loc_0x84:
	  lwz       r3, 0x8(r5)
	  cmplwi    r3, 0
	  bne-      .loc_0xA4
	  lwz       r4, 0x10(r5)
	  mr        r6, r0
	  lwz       r5, 0x14(r5)
	  bl        -0x1B64
	  b         .loc_0xB4

	.loc_0xA4:
	  lwz       r4, 0x14(r5)
	  mr        r6, r0
	  lwz       r5, 0x10(r5)
	  bl        -0x1B78

	.loc_0xB4:
	  lwz       r3, -0x7274(r13)
	  lwz       r4, -0x7268(r13)
	  lwz       r0, 0x18(r3)
	  sub       r0, r0, r4
	  stw       r0, 0x18(r3)
	  lwz       r4, -0x7274(r13)
	  lwz       r0, -0x7268(r13)
	  lwz       r3, 0x10(r4)
	  add       r0, r3, r0
	  stw       r0, 0x10(r4)
	  lwz       r4, -0x7274(r13)
	  lwz       r0, -0x7268(r13)
	  lwz       r3, 0x14(r4)
	  add       r0, r3, r0
	  stw       r0, 0x14(r4)

	.loc_0xF0:
	  lwz       r0, 0xC(r1)
	  addi      r1, r1, 0x8
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800D42BC
 * Size:	000004
 */
void __ARQCallbackHack(void) { }

/*
 * --INFO--
 * Address:	800D42C0
 * Size:	0000CC
 */
void __ARQInterruptServiceRoutine(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x8(r1)
	  lwz       r12, -0x7270(r13)
	  cmplwi    r12, 0
	  beq-      .loc_0x34
	  lwz       r3, -0x7278(r13)
	  mtlr      r12
	  blrl
	  li        r0, 0
	  stw       r0, -0x7278(r13)
	  stw       r0, -0x7270(r13)
	  b         .loc_0x58

	.loc_0x34:
	  lwz       r12, -0x726C(r13)
	  cmplwi    r12, 0
	  beq-      .loc_0x58
	  lwz       r3, -0x7274(r13)
	  mtlr      r12
	  blrl
	  li        r0, 0
	  stw       r0, -0x7274(r13)
	  stw       r0, -0x726C(r13)

	.loc_0x58:
	  lwz       r6, -0x7288(r13)
	  cmplwi    r6, 0
	  beq-      .loc_0xAC
	  lwz       r3, 0x8(r6)
	  cmplwi    r3, 0
	  bne-      .loc_0x84
	  lwz       r4, 0x10(r6)
	  lwz       r5, 0x14(r6)
	  lwz       r6, 0x18(r6)
	  bl        -0x1C48
	  b         .loc_0x94

	.loc_0x84:
	  lwz       r4, 0x14(r6)
	  lwz       r5, 0x10(r6)
	  lwz       r6, 0x18(r6)
	  bl        -0x1C5C

	.loc_0x94:
	  lwz       r3, -0x7288(r13)
	  lwz       r0, 0x1C(r3)
	  stw       r0, -0x7270(r13)
	  stw       r3, -0x7278(r13)
	  lwz       r0, 0x0(r3)
	  stw       r0, -0x7288(r13)

	.loc_0xAC:
	  lwz       r0, -0x7278(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0xBC
	  bl        -0x1BC

	.loc_0xBC:
	  lwz       r0, 0xC(r1)
	  addi      r1, r1, 0x8
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000010
 */
void __ARQInitTempQueue(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000028
 */
void __ARQPushTempQueue(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800D438C
 * Size:	000070
 */
void ARQInit(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x10(r1)
	  stw       r31, 0xC(r1)
	  lwz       r0, -0x7264(r13)
	  cmpwi     r0, 0x1
	  beq-      .loc_0x5C
	  lwz       r3, -0x7D80(r13)
	  bl        0x176DC
	  li        r31, 0
	  li        r0, 0x1000
	  stw       r31, -0x7280(r13)
	  lis       r3, 0x800D
	  stw       r31, -0x7288(r13)
	  addi      r3, r3, 0x42C0
	  stw       r0, -0x7268(r13)
	  bl        -0x1D58
	  li        r0, 0x1
	  stw       r31, -0x7278(r13)
	  stw       r31, -0x7274(r13)
	  stw       r31, -0x7270(r13)
	  stw       r31, -0x726C(r13)
	  stw       r0, -0x7264(r13)

	.loc_0x5C:
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
 * Size:	00000C
 */
void ARQReset(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800D43FC
 * Size:	00015C
 */
void ARQPostRequest(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  cmplwi    r10, 0
	  stw       r0, 0x4(r1)
	  li        r0, 0
	  stwu      r1, -0x38(r1)
	  stw       r31, 0x34(r1)
	  stw       r30, 0x30(r1)
	  addi      r30, r6, 0
	  stw       r29, 0x2C(r1)
	  addi      r29, r3, 0
	  stw       r0, 0x0(r3)
	  stw       r4, 0x4(r3)
	  stw       r5, 0x8(r3)
	  stw       r7, 0x10(r3)
	  stw       r8, 0x14(r3)
	  stw       r9, 0x18(r3)
	  beq-      .loc_0x4C
	  stw       r10, 0x1C(r29)
	  b         .loc_0x58

	.loc_0x4C:
	  lis       r3, 0x800D
	  addi      r0, r3, 0x42BC
	  stw       r0, 0x1C(r29)

	.loc_0x58:
	  bl        0x1A7E4
	  cmpwi     r30, 0x1
	  addi      r31, r3, 0
	  beq-      .loc_0x9C
	  bge-      .loc_0xBC
	  cmpwi     r30, 0
	  bge-      .loc_0x78
	  b         .loc_0xBC

	.loc_0x78:
	  lwz       r0, -0x7280(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0x90
	  lwz       r3, -0x727C(r13)
	  stw       r29, 0x0(r3)
	  b         .loc_0x94

	.loc_0x90:
	  stw       r29, -0x7280(r13)

	.loc_0x94:
	  stw       r29, -0x727C(r13)
	  b         .loc_0xBC

	.loc_0x9C:
	  lwz       r0, -0x7288(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0xB4
	  lwz       r3, -0x7284(r13)
	  stw       r29, 0x0(r3)
	  b         .loc_0xB8

	.loc_0xB4:
	  stw       r29, -0x7288(r13)

	.loc_0xB8:
	  stw       r29, -0x7284(r13)

	.loc_0xBC:
	  lwz       r0, -0x7278(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x138
	  lwz       r0, -0x7274(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x138
	  lwz       r6, -0x7288(r13)
	  cmplwi    r6, 0
	  beq-      .loc_0x128
	  lwz       r3, 0x8(r6)
	  cmplwi    r3, 0
	  bne-      .loc_0x100
	  lwz       r4, 0x10(r6)
	  lwz       r5, 0x14(r6)
	  lwz       r6, 0x18(r6)
	  bl        -0x1E00
	  b         .loc_0x110

	.loc_0x100:
	  lwz       r4, 0x14(r6)
	  lwz       r5, 0x10(r6)
	  lwz       r6, 0x18(r6)
	  bl        -0x1E14

	.loc_0x110:
	  lwz       r3, -0x7288(r13)
	  lwz       r0, 0x1C(r3)
	  stw       r0, -0x7270(r13)
	  stw       r3, -0x7278(r13)
	  lwz       r0, 0x0(r3)
	  stw       r0, -0x7288(r13)

	.loc_0x128:
	  lwz       r0, -0x7278(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x138
	  bl        -0x374

	.loc_0x138:
	  mr        r3, r31
	  bl        0x1A728
	  lwz       r0, 0x3C(r1)
	  lwz       r31, 0x34(r1)
	  lwz       r30, 0x30(r1)
	  lwz       r29, 0x2C(r1)
	  addi      r1, r1, 0x38
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000E8
 */
void ARQRemoveRequest(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000F0
 */
void ARQRemoveOwnerRequest(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000038
 */
void ARQFlushQueue(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000020
 */
void ARQSetChunkSize(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void ARQGetChunkSize(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void ARQCheckInit(void)
{
	// UNUSED FUNCTION
}
