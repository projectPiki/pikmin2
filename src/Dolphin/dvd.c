#include "types.h"

/*
 * --INFO--
 * Address:	800DCD28
 * Size:	000004
 */
void defaultOptionalCommandChecker(void) { }

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void __DVDSetOptionalCommandChecker(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800DCD2C
 * Size:	0000CC
 */
void DVDInit(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x10(r1)
	  stw       r31, 0xC(r1)
	  lwz       r0, -0x7190(r13)
	  cmpwi     r0, 0
	  bne-      .loc_0xB8
	  lwz       r3, -0x7D48(r13)
	  bl        0xED3C
	  li        r31, 0x1
	  stw       r31, -0x7190(r13)
	  bl        -0xC2C
	  bl        0x2700
	  bl        -0x1AB0
	  lis       r0, 0x8000
	  lis       r3, 0x800E
	  stw       r0, -0x71C8(r13)
	  subi      r4, r3, 0x4D10
	  stw       r0, -0x71CC(r13)
	  li        r3, 0x15
	  bl        0x11F08
	  li        r3, 0x400
	  bl        0x12304
	  subi      r3, r13, 0x71D8
	  bl        0x14C28
	  lis       r3, 0xCC00
	  li        r0, 0x2A
	  stw       r0, 0x6000(r3)
	  li        r0, 0
	  stw       r0, 0x6004(r3)
	  lwz       r3, -0x71C8(r13)
	  addi      r3, r3, 0x20
	  lwz       r3, 0x0(r3)
	  addis     r0, r3, 0x1AE0
	  cmplwi    r0, 0x7C22
	  bne-      .loc_0xA8
	  lis       r3, 0x804A
	  crclr     6, 0x6
	  addi      r3, r3, 0x7CE0
	  bl        0x10924
	  bl        0x2C20
	  b         .loc_0xB8

	.loc_0xA8:
	  subis     r0, r3, 0xD15
	  cmplwi    r0, 0xEA5E
	  beq-      .loc_0xB8
	  stw       r31, -0x7194(r13)

	.loc_0xB8:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  addi      r1, r1, 0x10
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800DCDF8
 * Size:	000094
 */
void stateReadingFST(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  lis       r3, 0x800E
	  stw       r0, 0x4(r1)
	  subi      r0, r3, 0x3208
	  lis       r3, 0x804F
	  stwu      r1, -0x10(r1)
	  addi      r3, r3, 0x5E00
	  stw       r31, 0xC(r1)
	  addi      r31, r3, 0x8
	  stw       r0, -0x718C(r13)
	  lwz       r4, -0x71C8(r13)
	  lwz       r0, 0x0(r31)
	  lwz       r3, 0x3C(r4)
	  cmplw     r3, r0
	  bge-      .loc_0x54
	  lis       r3, 0x804A
	  crclr     6, 0x6
	  addi      r5, r3, 0x7CEC
	  subi      r3, r13, 0x7D3C
	  li        r4, 0x28A
	  bl        0x10924

	.loc_0x54:
	  lis       r3, 0x804F
	  lwz       r6, 0x0(r31)
	  addi      r5, r3, 0x5E00
	  lwz       r7, -0x71C8(r13)
	  lis       r4, 0x800E
	  lwz       r5, 0x4(r5)
	  addi      r0, r6, 0x1F
	  lwz       r3, 0x38(r7)
	  subi      r6, r4, 0x3174
	  rlwinm    r4,r0,0,0,26
	  bl        -0x1620
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  addi      r1, r1, 0x10
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800DCE8C
 * Size:	00008C
 */
void cbForStateReadingFST(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  cmplwi    r3, 0x10
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x18(r1)
	  stw       r31, 0x14(r1)
	  bne-      .loc_0x2C
	  lwz       r3, -0x71D0(r13)
	  li        r0, -0x1
	  stw       r0, 0xC(r3)
	  bl        0x114
	  b         .loc_0x78

	.loc_0x2C:
	  rlwinm.   r0,r3,0,31,31
	  beq-      .loc_0x74
	  li        r31, 0
	  stw       r31, -0x719C(r13)
	  bl        -0xD9C
	  lis       r3, 0x804F
	  lwz       r4, -0x71D0(r13)
	  addi      r0, r3, 0x5E40
	  stw       r0, -0x71D0(r13)
	  stw       r31, 0xC(r4)
	  lwz       r12, 0x28(r4)
	  cmplwi    r12, 0
	  beq-      .loc_0x6C
	  mtlr      r12
	  li        r3, 0
	  blrl

	.loc_0x6C:
	  bl        0xE94
	  b         .loc_0x78

	.loc_0x74:
	  bl        0xF8

	.loc_0x78:
	  lwz       r0, 0x1C(r1)
	  lwz       r31, 0x14(r1)
	  addi      r1, r1, 0x18
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800DCF18
 * Size:	0000AC
 */
void cbForStateError(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  cmplwi    r3, 0x10
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x18(r1)
	  stw       r31, 0x14(r1)
	  bne-      .loc_0x2C
	  lwz       r3, -0x71D0(r13)
	  li        r0, -0x1
	  stw       r0, 0xC(r3)
	  bl        .loc_0xAC
	  b         .loc_0x98

	.loc_0x2C:
	  bl        0x29A0
	  lis       r3, 0x804F
	  lwz       r31, -0x71D0(r13)
	  addi      r0, r3, 0x5E40
	  li        r3, 0x1
	  stw       r0, -0x71D0(r13)
	  stw       r3, -0x71B8(r13)
	  lwz       r12, 0x28(r31)
	  cmplwi    r12, 0
	  beq-      .loc_0x64
	  mtlr      r12
	  addi      r4, r31, 0
	  li        r3, -0x1
	  blrl

	.loc_0x64:
	  lwz       r0, -0x71B0(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0x94
	  lwz       r12, -0x71AC(r13)
	  li        r0, 0
	  stw       r0, -0x71B0(r13)
	  cmplwi    r12, 0
	  beq-      .loc_0x94
	  mtlr      r12
	  addi      r4, r31, 0
	  li        r3, 0
	  blrl

	.loc_0x94:
	  bl        0xDE0

	.loc_0x98:
	  lwz       r0, 0x1C(r1)
	  lwz       r31, 0x14(r1)
	  addi      r1, r1, 0x18
	  mtlr      r0
	  blr

	.loc_0xAC:
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00002C
 */
void stateError(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800DCFC4
 * Size:	000034
 */
void stateTimeout(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  lis       r3, 0x123
	  stw       r0, 0x4(r1)
	  addi      r3, r3, 0x4568
	  stwu      r1, -0x8(r1)
	  bl        0x2798
	  bl        0x1D44
	  li        r3, 0
	  bl        -0xCC
	  lwz       r0, 0xC(r1)
	  addi      r1, r1, 0x8
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800DCFF8
 * Size:	000028
 */
void stateGettingError(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  lis       r3, 0x800E
	  stw       r0, 0x4(r1)
	  subi      r3, r3, 0x2F2C
	  stwu      r1, -0x8(r1)
	  bl        -0x1330
	  lwz       r0, 0xC(r1)
	  addi      r1, r1, 0x8
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800DD020
 * Size:	0000B4
 */
void CategorizeError(void)
{
	/*
	.loc_0x0:
	  subis     r0, r3, 0x2
	  cmplwi    r0, 0x400
	  bne-      .loc_0x18
	  stw       r3, -0x71A0(r13)
	  li        r3, 0x1
	  blr

	.loc_0x18:
	  rlwinm    r4,r3,0,8,31
	  subis     r0, r4, 0x6
	  cmplwi    r0, 0x2800
	  beq-      .loc_0x40
	  subis     r0, r4, 0x2
	  cmplwi    r0, 0x3A00
	  beq-      .loc_0x40
	  subis     r0, r4, 0xB
	  cmplwi    r0, 0x5A01
	  bne-      .loc_0x48

	.loc_0x40:
	  li        r3, 0
	  blr

	.loc_0x48:
	  lwz       r3, -0x719C(r13)
	  addi      r0, r3, 0x1
	  stw       r0, -0x719C(r13)
	  lwz       r0, -0x719C(r13)
	  cmpwi     r0, 0x2
	  bne-      .loc_0x84
	  lwz       r0, -0x71A0(r13)
	  cmplw     r4, r0
	  bne-      .loc_0x78
	  stw       r4, -0x71A0(r13)
	  li        r3, 0x1
	  blr

	.loc_0x78:
	  stw       r4, -0x71A0(r13)
	  li        r3, 0x2
	  blr

	.loc_0x84:
	  subis     r0, r4, 0x3
	  stw       r4, -0x71A0(r13)
	  cmplwi    r0, 0x1100
	  beq-      .loc_0xA4
	  lwz       r3, -0x71D0(r13)
	  lwz       r0, 0x8(r3)
	  cmplwi    r0, 0x5
	  bne-      .loc_0xAC

	.loc_0xA4:
	  li        r3, 0x2
	  blr

	.loc_0xAC:
	  li        r3, 0x3
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00009C
 */
void CheckCancel(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800DD0D4
 * Size:	000294
 */
void cbForStateGettingError(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  cmplwi    r3, 0x10
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x20(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  stw       r28, 0x10(r1)
	  bne-      .loc_0x4C
	  lwz       r4, -0x71D0(r13)
	  li        r0, -0x1
	  lis       r3, 0x123
	  stw       r0, 0xC(r4)
	  addi      r3, r3, 0x4568
	  bl        0x2664
	  bl        0x1C10
	  li        r3, 0
	  bl        -0x200
	  b         .loc_0x274

	.loc_0x4C:
	  rlwinm.   r0,r3,0,30,30
	  beq-      .loc_0x7C
	  lwz       r4, -0x71D0(r13)
	  li        r0, -0x1
	  lis       r3, 0x123
	  stw       r0, 0xC(r4)
	  addi      r3, r3, 0x4567
	  bl        0x2634
	  lis       r3, 0x800E
	  subi      r3, r3, 0x30E8
	  bl        -0x14F8
	  b         .loc_0x274

	.loc_0x7C:
	  lis       r3, 0xCC00
	  lwz       r29, 0x6020(r3)
	  addi      r3, r29, 0
	  rlwinm    r28,r29,0,0,7
	  bl        -0x140
	  addi      r31, r3, 0
	  cmplwi    r31, 0x1
	  bne-      .loc_0xC0
	  lwz       r4, -0x71D0(r13)
	  li        r0, -0x1
	  addi      r3, r29, 0
	  stw       r0, 0xC(r4)
	  bl        0x25F0
	  lis       r3, 0x800E
	  subi      r3, r3, 0x30E8
	  bl        -0x153C
	  b         .loc_0x274

	.loc_0xC0:
	  subi      r0, r31, 0x2
	  cmplwi    r0, 0x1
	  bgt-      .loc_0xD4
	  li        r4, 0
	  b         .loc_0x114

	.loc_0xD4:
	  subis     r0, r28, 0x100
	  cmplwi    r0, 0
	  bne-      .loc_0xE8
	  li        r4, 0x4
	  b         .loc_0x114

	.loc_0xE8:
	  subis     r0, r28, 0x200
	  cmplwi    r0, 0
	  bne-      .loc_0xFC
	  li        r4, 0x6
	  b         .loc_0x114

	.loc_0xFC:
	  subis     r0, r28, 0x300
	  cmplwi    r0, 0
	  bne-      .loc_0x110
	  li        r4, 0x3
	  b         .loc_0x114

	.loc_0x110:
	  li        r4, 0x5

	.loc_0x114:
	  lwz       r0, -0x71B0(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0x188
	  lis       r3, 0x804F
	  stw       r4, -0x71A8(r13)
	  li        r0, 0
	  lwz       r30, -0x71D0(r13)
	  addi      r3, r3, 0x5E40
	  stw       r0, -0x71B0(r13)
	  li        r0, 0xA
	  stw       r3, -0x71D0(r13)
	  stw       r0, 0xC(r30)
	  lwz       r12, 0x28(r30)
	  cmplwi    r12, 0
	  beq-      .loc_0x160
	  mtlr      r12
	  addi      r4, r30, 0
	  li        r3, -0x3
	  blrl

	.loc_0x160:
	  lwz       r12, -0x71AC(r13)
	  cmplwi    r12, 0
	  beq-      .loc_0x17C
	  mtlr      r12
	  addi      r4, r30, 0
	  li        r3, 0
	  blrl

	.loc_0x17C:
	  bl        0xB3C
	  li        r0, 0x1
	  b         .loc_0x18C

	.loc_0x188:
	  li        r0, 0

	.loc_0x18C:
	  cmpwi     r0, 0
	  bne-      .loc_0x274
	  cmplwi    r31, 0x2
	  bne-      .loc_0x1AC
	  mr        r3, r29
	  bl        0x24FC
	  bl        0x1F0
	  b         .loc_0x274

	.loc_0x1AC:
	  cmplwi    r31, 0x3
	  bne-      .loc_0x1F0
	  rlwinm    r3,r29,0,8,31
	  subis     r0, r3, 0x3
	  cmplwi    r0, 0x1100
	  bne-      .loc_0x1DC
	  lwz       r5, -0x71D0(r13)
	  lis       r3, 0x800E
	  subi      r4, r3, 0x2C98
	  lwz       r3, 0x10(r5)
	  bl        -0x17BC
	  b         .loc_0x274

	.loc_0x1DC:
	  lwz       r12, -0x718C(r13)
	  lwz       r3, -0x71D0(r13)
	  mtlr      r12
	  blrl
	  b         .loc_0x274

	.loc_0x1F0:
	  subis     r0, r28, 0x100
	  cmplwi    r0, 0
	  bne-      .loc_0x210
	  lwz       r3, -0x71D0(r13)
	  li        r0, 0x5
	  stw       r0, 0xC(r3)
	  bl        0x9A4
	  b         .loc_0x274

	.loc_0x210:
	  subis     r0, r28, 0x200
	  cmplwi    r0, 0
	  bne-      .loc_0x230
	  lwz       r3, -0x71D0(r13)
	  li        r0, 0x3
	  stw       r0, 0xC(r3)
	  bl        0x818
	  b         .loc_0x274

	.loc_0x230:
	  subis     r0, r28, 0x300
	  cmplwi    r0, 0
	  bne-      .loc_0x250
	  lwz       r3, -0x71D0(r13)
	  li        r0, 0x4
	  stw       r0, 0xC(r3)
	  bl        0x964
	  b         .loc_0x274

	.loc_0x250:
	  lwz       r4, -0x71D0(r13)
	  li        r0, -0x1
	  lis       r3, 0x123
	  stw       r0, 0xC(r4)
	  addi      r3, r3, 0x4567
	  bl        0x2438
	  lis       r3, 0x800E
	  subi      r3, r3, 0x30E8
	  bl        -0x16F4

	.loc_0x274:
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
 * Address:	800DD368
 * Size:	000068
 */
void cbForUnrecoveredError(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  cmplwi    r3, 0x10
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x8(r1)
	  bne-      .loc_0x3C
	  lwz       r4, -0x71D0(r13)
	  li        r0, -0x1
	  lis       r3, 0x123
	  stw       r0, 0xC(r4)
	  addi      r3, r3, 0x4568
	  bl        0x23E0
	  bl        0x198C
	  li        r3, 0
	  bl        -0x484
	  b         .loc_0x58

	.loc_0x3C:
	  rlwinm.   r0,r3,0,31,31
	  beq-      .loc_0x4C
	  bl        0xBC
	  b         .loc_0x58

	.loc_0x4C:
	  lis       r3, 0x800E
	  subi      r3, r3, 0x2C30
	  bl        -0x16E0

	.loc_0x58:
	  lwz       r0, 0xC(r1)
	  addi      r1, r1, 0x8
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800DD3D0
 * Size:	000098
 */
void cbForUnrecoveredErrorRetry(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  cmplwi    r3, 0x10
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x8(r1)
	  bne-      .loc_0x3C
	  lwz       r4, -0x71D0(r13)
	  li        r0, -0x1
	  lis       r3, 0x123
	  stw       r0, 0xC(r4)
	  addi      r3, r3, 0x4568
	  bl        0x2378
	  bl        0x1924
	  li        r3, 0
	  bl        -0x4EC
	  b         .loc_0x88

	.loc_0x3C:
	  rlwinm.   r0,r3,0,30,30
	  lwz       r3, -0x71D0(r13)
	  li        r4, -0x1
	  stw       r4, 0xC(r3)
	  beq-      .loc_0x6C
	  lis       r3, 0x123
	  addi      r3, r3, 0x4567
	  bl        0x2348
	  lis       r3, 0x800E
	  subi      r3, r3, 0x30E8
	  bl        -0x17E4
	  b         .loc_0x88

	.loc_0x6C:
	  lis       r3, 0xCC00
	  addi      r3, r3, 0x6000
	  lwz       r3, 0x20(r3)
	  bl        0x2328
	  lis       r3, 0x800E
	  subi      r3, r3, 0x30E8
	  bl        -0x1804

	.loc_0x88:
	  lwz       r0, 0xC(r1)
	  addi      r1, r1, 0x8
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800DD468
 * Size:	000028
 */
void stateGoToRetry(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  lis       r3, 0x800E
	  stw       r0, 0x4(r1)
	  subi      r3, r3, 0x2B70
	  stwu      r1, -0x8(r1)
	  bl        -0x182C
	  lwz       r0, 0xC(r1)
	  addi      r1, r1, 0x8
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800DD490
 * Size:	000158
 */
void cbForStateGoToRetry(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  cmplwi    r3, 0x10
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x18(r1)
	  stw       r31, 0x14(r1)
	  bne-      .loc_0x40
	  lwz       r4, -0x71D0(r13)
	  li        r0, -0x1
	  lis       r3, 0x123
	  stw       r0, 0xC(r4)
	  addi      r3, r3, 0x4568
	  bl        0x22B4
	  bl        0x1860
	  li        r3, 0
	  bl        -0x5B0
	  b         .loc_0x144

	.loc_0x40:
	  rlwinm.   r0,r3,0,30,30
	  beq-      .loc_0x70
	  lwz       r4, -0x71D0(r13)
	  li        r0, -0x1
	  lis       r3, 0x123
	  stw       r0, 0xC(r4)
	  addi      r3, r3, 0x4567
	  bl        0x2284
	  lis       r3, 0x800E
	  subi      r3, r3, 0x30E8
	  bl        -0x18A8
	  b         .loc_0x144

	.loc_0x70:
	  li        r0, 0
	  stw       r0, -0x719C(r13)
	  lwz       r0, -0x71B4(r13)
	  cmplwi    r0, 0x4
	  beq-      .loc_0xA8
	  lwz       r0, -0x71B4(r13)
	  cmplwi    r0, 0x5
	  beq-      .loc_0xA8
	  lwz       r0, -0x71B4(r13)
	  cmplwi    r0, 0xD
	  beq-      .loc_0xA8
	  lwz       r0, -0x71B4(r13)
	  cmplwi    r0, 0xF
	  bne-      .loc_0xB0

	.loc_0xA8:
	  li        r0, 0x1
	  stw       r0, -0x7198(r13)

	.loc_0xB0:
	  lwz       r0, -0x71B0(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0x128
	  li        r0, 0x2
	  lwz       r31, -0x71D0(r13)
	  lis       r3, 0x804F
	  stw       r0, -0x71A8(r13)
	  addi      r0, r3, 0x5E40
	  li        r3, 0
	  stw       r0, -0x71D0(r13)
	  li        r0, 0xA
	  stw       r3, -0x71B0(r13)
	  stw       r0, 0xC(r31)
	  lwz       r12, 0x28(r31)
	  cmplwi    r12, 0
	  beq-      .loc_0x100
	  mtlr      r12
	  addi      r4, r31, 0
	  li        r3, -0x3
	  blrl

	.loc_0x100:
	  lwz       r12, -0x71AC(r13)
	  cmplwi    r12, 0
	  beq-      .loc_0x11C
	  mtlr      r12
	  addi      r4, r31, 0
	  li        r3, 0
	  blrl

	.loc_0x11C:
	  bl        0x7E0
	  li        r0, 0x1
	  b         .loc_0x12C

	.loc_0x128:
	  li        r0, 0

	.loc_0x12C:
	  cmpwi     r0, 0
	  bne-      .loc_0x144
	  lwz       r3, -0x71D0(r13)
	  li        r0, 0xB
	  stw       r0, 0xC(r3)
	  bl        0x6B0

	.loc_0x144:
	  lwz       r0, 0x1C(r1)
	  lwz       r31, 0x14(r1)
	  addi      r1, r1, 0x18
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800DD5E8
 * Size:	0000E0
 */
void stateCheckID(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  lis       r3, 0x804F
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x10(r1)
	  stw       r31, 0xC(r1)
	  addi      r31, r3, 0x5E00
	  lwz       r0, -0x71B4(r13)
	  cmpwi     r0, 0x3
	  beq-      .loc_0x28
	  b         .loc_0x90

	.loc_0x28:
	  lwz       r4, -0x71D0(r13)
	  addi      r3, r31, 0x20
	  lwz       r4, 0x24(r4)
	  bl        0x21D0
	  cmpwi     r3, 0
	  beq-      .loc_0x80
	  lwz       r3, -0x71CC(r13)
	  addi      r4, r31, 0x20
	  li        r5, 0x20
	  bl        -0xD8498
	  lwz       r4, -0x71D0(r13)
	  li        r0, 0x1
	  addi      r3, r31, 0
	  stw       r0, 0xC(r4)
	  li        r4, 0x20
	  bl        0xF0A0
	  lis       r4, 0x800E
	  lwz       r3, -0x71D0(r13)
	  subi      r0, r4, 0x2904
	  stw       r0, -0x718C(r13)
	  bl        0x9C
	  b         .loc_0xCC

	.loc_0x80:
	  lis       r3, 0x800E
	  subi      r3, r3, 0x2824
	  bl        -0x1A20
	  b         .loc_0xCC

	.loc_0x90:
	  lwz       r4, -0x71CC(r13)
	  addi      r3, r31, 0x20
	  li        r5, 0x20
	  bl        -0x1669C
	  cmpwi     r3, 0
	  beq-      .loc_0xB8
	  lis       r3, 0x800E
	  subi      r3, r3, 0x2824
	  bl        -0x1A48
	  b         .loc_0xCC

	.loc_0xB8:
	  lis       r4, 0x800E
	  lwz       r3, -0x71D0(r13)
	  subi      r0, r4, 0x2938
	  stw       r0, -0x718C(r13)
	  bl        .loc_0xE0

	.loc_0xCC:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  addi      r1, r1, 0x10
	  mtlr      r0
	  blr

	.loc_0xE0:
	*/
}

/*
 * --INFO--
 * Address:	800DD6C8
 * Size:	000034
 */
void stateCheckID3(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  lis       r3, 0x800E
	  stw       r0, 0x4(r1)
	  subi      r5, r3, 0x262C
	  stwu      r1, -0x8(r1)
	  lwz       r4, -0x71CC(r13)
	  lbz       r3, 0x8(r4)
	  li        r4, 0xA
	  bl        -0x17C0
	  lwz       r0, 0xC(r1)
	  addi      r1, r1, 0x8
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800DD6FC
 * Size:	000034
 */
void stateCheckID2a(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  lis       r3, 0x800E
	  stw       r0, 0x4(r1)
	  subi      r5, r3, 0x28D0
	  stwu      r1, -0x8(r1)
	  lwz       r4, -0x71CC(r13)
	  lbz       r3, 0x8(r4)
	  li        r4, 0xA
	  bl        -0x17F4
	  lwz       r0, 0xC(r1)
	  addi      r1, r1, 0x8
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800DD730
 * Size:	000074
 */
void cbForStateCheckID2a(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  cmplwi    r3, 0x10
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x8(r1)
	  bne-      .loc_0x3C
	  lwz       r4, -0x71D0(r13)
	  li        r0, -0x1
	  lis       r3, 0x123
	  stw       r0, 0xC(r4)
	  addi      r3, r3, 0x4568
	  bl        0x2018
	  bl        0x15C4
	  li        r3, 0
	  bl        -0x84C
	  b         .loc_0x64

	.loc_0x3C:
	  rlwinm.   r0,r3,0,31,31
	  beq-      .loc_0x58
	  li        r0, 0
	  lwz       r3, -0x71D0(r13)
	  stw       r0, -0x719C(r13)
	  bl        .loc_0x74
	  b         .loc_0x64

	.loc_0x58:
	  lis       r3, 0x800E
	  subi      r3, r3, 0x2F2C
	  bl        -0x1AB4

	.loc_0x64:
	  lwz       r0, 0xC(r1)
	  addi      r1, r1, 0x8
	  mtlr      r0
	  blr

	.loc_0x74:
	*/
}

/*
 * --INFO--
 * Address:	800DD7A4
 * Size:	000038
 */
void stateCheckID2(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  lis       r3, 0x804F
	  stw       r0, 0x4(r1)
	  lis       r4, 0x800E
	  subi      r6, r4, 0x2710
	  stwu      r1, -0x8(r1)
	  addi      r3, r3, 0x5E00
	  li        r4, 0x20
	  li        r5, 0x420
	  bl        -0x1F74
	  lwz       r0, 0xC(r1)
	  addi      r1, r1, 0x8
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800DD7DC
 * Size:	000114
 */
void cbForStateCheckID1(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  cmplwi    r3, 0x10
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x18(r1)
	  stw       r31, 0x14(r1)
	  bne-      .loc_0x40
	  lwz       r4, -0x71D0(r13)
	  li        r0, -0x1
	  lis       r3, 0x123
	  stw       r0, 0xC(r4)
	  addi      r3, r3, 0x4568
	  bl        0x1F68
	  bl        0x1514
	  li        r3, 0
	  bl        -0x8FC
	  b         .loc_0x100

	.loc_0x40:
	  rlwinm.   r0,r3,0,30,30
	  beq-      .loc_0x70
	  lwz       r4, -0x71D0(r13)
	  li        r0, -0x1
	  lis       r3, 0x123
	  stw       r0, 0xC(r4)
	  addi      r3, r3, 0x4567
	  bl        0x1F38
	  lis       r3, 0x800E
	  subi      r3, r3, 0x30E8
	  bl        -0x1BF4
	  b         .loc_0x100

	.loc_0x70:
	  li        r4, 0
	  stw       r4, -0x719C(r13)
	  lwz       r0, -0x71B0(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0xE8
	  li        r0, 0x1
	  lwz       r31, -0x71D0(r13)
	  stw       r0, -0x71A8(r13)
	  lis       r3, 0x804F
	  addi      r3, r3, 0x5E40
	  stw       r4, -0x71B0(r13)
	  li        r0, 0xA
	  stw       r3, -0x71D0(r13)
	  stw       r0, 0xC(r31)
	  lwz       r12, 0x28(r31)
	  cmplwi    r12, 0
	  beq-      .loc_0xC4
	  mtlr      r12
	  addi      r4, r31, 0
	  li        r3, -0x3
	  blrl

	.loc_0xC4:
	  lwz       r12, -0x71AC(r13)
	  cmplwi    r12, 0
	  beq-      .loc_0xE0
	  mtlr      r12
	  addi      r4, r31, 0
	  li        r3, 0
	  blrl

	.loc_0xE0:
	  bl        0x4D0
	  li        r4, 0x1

	.loc_0xE8:
	  cmpwi     r4, 0
	  bne-      .loc_0x100
	  lwz       r3, -0x71D0(r13)
	  li        r0, 0x6
	  stw       r0, 0xC(r3)
	  bl        0x3A8

	.loc_0x100:
	  lwz       r0, 0x1C(r1)
	  lwz       r31, 0x14(r1)
	  addi      r1, r1, 0x18
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800DD8F0
 * Size:	0000E4
 */
void cbForStateCheckID2(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  cmplwi    r3, 0x10
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x18(r1)
	  stw       r31, 0x14(r1)
	  bne-      .loc_0x40
	  lwz       r4, -0x71D0(r13)
	  li        r0, -0x1
	  lis       r3, 0x123
	  stw       r0, 0xC(r4)
	  addi      r3, r3, 0x4568
	  bl        0x1E54
	  bl        0x1400
	  li        r3, 0
	  bl        -0xA10
	  b         .loc_0xD0

	.loc_0x40:
	  rlwinm.   r0,r3,0,31,31
	  beq-      .loc_0xC4
	  lis       r3, 0x800E
	  lwz       r4, -0x71C8(r13)
	  subi      r0, r3, 0x3208
	  li        r5, 0
	  stw       r0, -0x718C(r13)
	  lis       r3, 0x804F
	  stw       r5, -0x719C(r13)
	  addi      r3, r3, 0x5E00
	  addi      r31, r3, 0x8
	  lwz       r3, 0x3C(r4)
	  lwz       r0, 0x0(r31)
	  cmplw     r3, r0
	  bge-      .loc_0x94
	  lis       r3, 0x804A
	  crclr     6, 0x6
	  addi      r5, r3, 0x7CEC
	  subi      r3, r13, 0x7D3C
	  li        r4, 0x28A
	  bl        0xFDEC

	.loc_0x94:
	  lis       r3, 0x804F
	  lwz       r6, 0x0(r31)
	  addi      r5, r3, 0x5E00
	  lwz       r7, -0x71C8(r13)
	  lis       r4, 0x800E
	  lwz       r5, 0x4(r5)
	  addi      r0, r6, 0x1F
	  lwz       r3, 0x38(r7)
	  subi      r6, r4, 0x3174
	  rlwinm    r4,r0,0,0,26
	  bl        -0x2158
	  b         .loc_0xD0

	.loc_0xC4:
	  lis       r3, 0x800E
	  subi      r3, r3, 0x2F2C
	  bl        -0x1CE0

	.loc_0xD0:
	  lwz       r0, 0x1C(r1)
	  lwz       r31, 0x14(r1)
	  addi      r1, r1, 0x18
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800DD9D4
 * Size:	0000FC
 */
void cbForStateCheckID3(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  cmplwi    r3, 0x10
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x18(r1)
	  stw       r31, 0x14(r1)
	  bne-      .loc_0x40
	  lwz       r4, -0x71D0(r13)
	  li        r0, -0x1
	  lis       r3, 0x123
	  stw       r0, 0xC(r4)
	  addi      r3, r3, 0x4568
	  bl        0x1D70
	  bl        0x131C
	  li        r3, 0
	  bl        -0xAF4
	  b         .loc_0xE8

	.loc_0x40:
	  rlwinm.   r0,r3,0,31,31
	  beq-      .loc_0xDC
	  li        r4, 0
	  stw       r4, -0x719C(r13)
	  lwz       r0, -0x71B0(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0xBC
	  stw       r4, -0x71A8(r13)
	  lis       r3, 0x804F
	  lwz       r31, -0x71D0(r13)
	  addi      r3, r3, 0x5E40
	  stw       r4, -0x71B0(r13)
	  li        r0, 0xA
	  stw       r3, -0x71D0(r13)
	  stw       r0, 0xC(r31)
	  lwz       r12, 0x28(r31)
	  cmplwi    r12, 0
	  beq-      .loc_0x98
	  mtlr      r12
	  addi      r4, r31, 0
	  li        r3, -0x3
	  blrl

	.loc_0x98:
	  lwz       r12, -0x71AC(r13)
	  cmplwi    r12, 0
	  beq-      .loc_0xB4
	  mtlr      r12
	  addi      r4, r31, 0
	  li        r3, 0
	  blrl

	.loc_0xB4:
	  bl        0x304
	  li        r4, 0x1

	.loc_0xBC:
	  cmpwi     r4, 0
	  bne-      .loc_0xE8
	  lwz       r3, -0x71D0(r13)
	  li        r0, 0x1
	  stw       r0, 0xC(r3)
	  lwz       r3, -0x71D0(r13)
	  bl        0x514
	  b         .loc_0xE8

	.loc_0xDC:
	  lis       r3, 0x800E
	  subi      r3, r3, 0x2F2C
	  bl        -0x1DDC

	.loc_0xE8:
	  lwz       r0, 0x1C(r1)
	  lwz       r31, 0x14(r1)
	  addi      r1, r1, 0x18
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800DDAD0
 * Size:	000044
 */
void AlarmHandler(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x8(r1)
	  bl        0x1244
	  lis       r3, 0x804F
	  addi      r3, r3, 0x5E20
	  li        r4, 0x20
	  bl        0xEC00
	  lis       r4, 0x800E
	  lwz       r3, -0x71D0(r13)
	  subi      r0, r4, 0x2420
	  stw       r0, -0x718C(r13)
	  bl        0xE0
	  lwz       r0, 0xC(r1)
	  addi      r1, r1, 0x8
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800DDB14
 * Size:	0000CC
 */
void stateCoverClosed(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  lis       r3, 0x804F
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x10(r1)
	  stw       r31, 0xC(r1)
	  addi      r31, r3, 0x5E00
	  lwz       r0, -0x71B4(r13)
	  cmpwi     r0, 0xD
	  beq-      .loc_0x48
	  bge-      .loc_0x3C
	  cmpwi     r0, 0x6
	  bge-      .loc_0x78
	  cmpwi     r0, 0x4
	  bge-      .loc_0x48
	  b         .loc_0x78

	.loc_0x3C:
	  cmpwi     r0, 0xF
	  beq-      .loc_0x48
	  b         .loc_0x78

	.loc_0x48:
	  bl        0x1900
	  lwz       r4, -0x71D0(r13)
	  addi      r0, r31, 0x40
	  stw       r0, -0x71D0(r13)
	  lwz       r12, 0x28(r4)
	  cmplwi    r12, 0
	  beq-      .loc_0x70
	  mtlr      r12
	  li        r3, -0x4
	  blrl

	.loc_0x70:
	  bl        0x208
	  b         .loc_0xB8

	.loc_0x78:
	  bl        0x1194
	  addi      r3, r31, 0x70
	  bl        0xDF78
	  lis       r3, 0x8000
	  lwz       r0, 0xF8(r3)
	  lis       r4, 0x1062
	  lis       r3, 0x800E
	  rlwinm    r0,r0,30,2,31
	  addi      r4, r4, 0x4DD3
	  mulhwu    r0, r4, r0
	  rlwinm    r0,r0,26,6,31
	  mulli     r6, r0, 0x47E
	  subi      r7, r3, 0x2530
	  addi      r3, r31, 0x70
	  li        r5, 0
	  bl        0xE1A4

	.loc_0xB8:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  addi      r1, r1, 0x10
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800DDBE0
 * Size:	000030
 */
void stateCoverClosed_CMD(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  lis       r3, 0x804F
	  stw       r0, 0x4(r1)
	  lis       r4, 0x800E
	  addi      r3, r3, 0x5E20
	  stwu      r1, -0x8(r1)
	  subi      r4, r4, 0x23F0
	  bl        -0x2050
	  lwz       r0, 0xC(r1)
	  addi      r1, r1, 0x8
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800DDC10
 * Size:	000070
 */
void cbForStateCoverClosed(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  cmplwi    r3, 0x10
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x8(r1)
	  bne-      .loc_0x3C
	  lwz       r4, -0x71D0(r13)
	  li        r0, -0x1
	  lis       r3, 0x123
	  stw       r0, 0xC(r4)
	  addi      r3, r3, 0x4568
	  bl        0x1B38
	  bl        0x10E4
	  li        r3, 0
	  bl        -0xD2C
	  b         .loc_0x60

	.loc_0x3C:
	  rlwinm.   r0,r3,0,31,31
	  beq-      .loc_0x54
	  li        r0, 0
	  stw       r0, -0x719C(r13)
	  bl        -0x674
	  b         .loc_0x60

	.loc_0x54:
	  lis       r3, 0x800E
	  subi      r3, r3, 0x2F2C
	  bl        -0x1F90

	.loc_0x60:
	  lwz       r0, 0xC(r1)
	  addi      r1, r1, 0x8
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800DDC80
 * Size:	000028
 */
void stateMotorStopped(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  lis       r3, 0x800E
	  stw       r0, 0x4(r1)
	  subi      r3, r3, 0x2358
	  stwu      r1, -0x8(r1)
	  bl        -0x2114
	  lwz       r0, 0xC(r1)
	  addi      r1, r1, 0x8
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800DDCA8
 * Size:	0000E4
 */
void cbForStateMotorStopped(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  lis       r3, 0xCC00
	  stw       r0, 0x4(r1)
	  li        r0, 0
	  lis       r4, 0x804F
	  stwu      r1, -0x18(r1)
	  stw       r31, 0x14(r1)
	  addi      r31, r4, 0x5E00
	  stw       r0, 0x6004(r3)
	  li        r0, 0x3
	  lwz       r3, -0x71D0(r13)
	  stw       r0, 0xC(r3)
	  lwz       r0, -0x71B4(r13)
	  cmpwi     r0, 0xD
	  beq-      .loc_0x60
	  bge-      .loc_0x54
	  cmpwi     r0, 0x6
	  bge-      .loc_0x90
	  cmpwi     r0, 0x4
	  bge-      .loc_0x60
	  b         .loc_0x90

	.loc_0x54:
	  cmpwi     r0, 0xF
	  beq-      .loc_0x60
	  b         .loc_0x90

	.loc_0x60:
	  bl        0x1754
	  lwz       r4, -0x71D0(r13)
	  addi      r0, r31, 0x40
	  stw       r0, -0x71D0(r13)
	  lwz       r12, 0x28(r4)
	  cmplwi    r12, 0
	  beq-      .loc_0x88
	  mtlr      r12
	  li        r3, -0x4
	  blrl

	.loc_0x88:
	  bl        .loc_0xE4
	  b         .loc_0xD0

	.loc_0x90:
	  bl        0xFE8
	  addi      r3, r31, 0x70
	  bl        0xDDCC
	  lis       r3, 0x8000
	  lwz       r0, 0xF8(r3)
	  lis       r4, 0x1062
	  lis       r3, 0x800E
	  rlwinm    r0,r0,30,2,31
	  addi      r4, r4, 0x4DD3
	  mulhwu    r0, r4, r0
	  rlwinm    r0,r0,26,6,31
	  mulli     r6, r0, 0x47E
	  subi      r7, r3, 0x2530
	  addi      r3, r31, 0x70
	  li        r5, 0
	  bl        0xDFF8

	.loc_0xD0:
	  lwz       r0, 0x1C(r1)
	  lwz       r31, 0x14(r1)
	  addi      r1, r1, 0x18
	  mtlr      r0
	  blr

	.loc_0xE4:
	*/
}

/*
 * --INFO--
 * Address:	800DDD8C
 * Size:	000230
 */
void stateReady(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  lis       r3, 0x804F
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x10(r1)
	  stw       r31, 0xC(r1)
	  addi      r31, r3, 0x5E00
	  bl        0x17F8
	  cmpwi     r3, 0
	  bne-      .loc_0x30
	  li        r0, 0
	  stw       r0, -0x71D0(r13)
	  b         .loc_0x21C

	.loc_0x30:
	  lwz       r0, -0x71C4(r13)
	  cmpwi     r0, 0
	  beq-      .loc_0x50
	  li        r3, 0x1
	  li        r0, 0
	  stw       r3, -0x71C0(r13)
	  stw       r0, -0x71D0(r13)
	  b         .loc_0x21C

	.loc_0x50:
	  bl        0x1720
	  lwz       r0, -0x71B8(r13)
	  stw       r3, -0x71D0(r13)
	  cmpwi     r0, 0
	  beq-      .loc_0x9C
	  lwz       r3, -0x71D0(r13)
	  li        r4, -0x1
	  addi      r0, r31, 0x40
	  stw       r4, 0xC(r3)
	  lwz       r4, -0x71D0(r13)
	  stw       r0, -0x71D0(r13)
	  lwz       r12, 0x28(r4)
	  cmplwi    r12, 0
	  beq-      .loc_0x94
	  mtlr      r12
	  li        r3, -0x1
	  blrl

	.loc_0x94:
	  bl        .loc_0x0
	  b         .loc_0x21C

	.loc_0x9C:
	  lwz       r4, -0x71D0(r13)
	  lwz       r0, 0x8(r4)
	  stw       r0, -0x71B4(r13)
	  lwz       r0, -0x71A8(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0x20C
	  lwz       r0, -0x71A8(r13)
	  cmpwi     r0, 0x4
	  beq-      .loc_0x120
	  bge-      .loc_0xDC
	  cmpwi     r0, 0x2
	  beq-      .loc_0xF0
	  bge-      .loc_0x108
	  cmpwi     r0, 0x1
	  bge-      .loc_0x138
	  b         .loc_0x200

	.loc_0xDC:
	  cmpwi     r0, 0x8
	  bge-      .loc_0x200
	  cmpwi     r0, 0x6
	  bge-      .loc_0x138
	  b         .loc_0x1E4

	.loc_0xF0:
	  li        r0, 0xB
	  lis       r3, 0x800E
	  stw       r0, 0xC(r4)
	  subi      r3, r3, 0x2358
	  bl        -0x230C
	  b         .loc_0x200

	.loc_0x108:
	  li        r0, 0x4
	  lis       r3, 0x800E
	  stw       r0, 0xC(r4)
	  subi      r3, r3, 0x2358
	  bl        -0x2324
	  b         .loc_0x200

	.loc_0x120:
	  li        r0, 0x5
	  lis       r3, 0x800E
	  stw       r0, 0xC(r4)
	  subi      r3, r3, 0x2358
	  bl        -0x233C
	  b         .loc_0x200

	.loc_0x138:
	  li        r0, 0x3
	  stw       r0, 0xC(r4)
	  lwz       r0, -0x71B4(r13)
	  cmpwi     r0, 0xD
	  beq-      .loc_0x170
	  bge-      .loc_0x164
	  cmpwi     r0, 0x6
	  bge-      .loc_0x1A0
	  cmpwi     r0, 0x4
	  bge-      .loc_0x170
	  b         .loc_0x1A0

	.loc_0x164:
	  cmpwi     r0, 0xF
	  beq-      .loc_0x170
	  b         .loc_0x1A0

	.loc_0x170:
	  bl        0x1560
	  lwz       r4, -0x71D0(r13)
	  addi      r0, r31, 0x40
	  stw       r0, -0x71D0(r13)
	  lwz       r12, 0x28(r4)
	  cmplwi    r12, 0
	  beq-      .loc_0x198
	  mtlr      r12
	  li        r3, -0x4
	  blrl

	.loc_0x198:
	  bl        .loc_0x0
	  b         .loc_0x200

	.loc_0x1A0:
	  bl        0xDF4
	  addi      r3, r31, 0x70
	  bl        0xDBD8
	  lis       r3, 0x8000
	  lwz       r0, 0xF8(r3)
	  lis       r4, 0x1062
	  lis       r3, 0x800E
	  rlwinm    r0,r0,30,2,31
	  addi      r4, r4, 0x4DD3
	  mulhwu    r0, r4, r0
	  rlwinm    r0,r0,26,6,31
	  mulli     r6, r0, 0x47E
	  subi      r7, r3, 0x2530
	  addi      r3, r31, 0x70
	  li        r5, 0
	  bl        0xDE04
	  b         .loc_0x200

	.loc_0x1E4:
	  li        r0, -0x1
	  stw       r0, 0xC(r4)
	  lwz       r3, -0x71A4(r13)
	  bl        0x17F4
	  lis       r3, 0x800E
	  subi      r3, r3, 0x30E8
	  bl        -0x2338

	.loc_0x200:
	  li        r0, 0
	  stw       r0, -0x71A8(r13)
	  b         .loc_0x21C

	.loc_0x20C:
	  li        r0, 0x1
	  stw       r0, 0xC(r4)
	  lwz       r3, -0x71D0(r13)
	  bl        .loc_0x230

	.loc_0x21C:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  addi      r1, r1, 0x10
	  mtlr      r0
	  blr

	.loc_0x230:
	*/
}

/*
 * --INFO--
 * Address:	800DDFBC
 * Size:	000320
 */
void stateBusy(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  lis       r4, 0x800E
	  stw       r0, 0x4(r1)
	  subi      r0, r4, 0x2044
	  mr        r7, r3
	  stwu      r1, -0x8(r1)
	  stw       r0, -0x718C(r13)
	  lwz       r0, 0x8(r3)
	  cmplwi    r0, 0xF
	  bgt-      .loc_0x2F8
	  lis       r3, 0x804A
	  addi      r3, r3, 0x7D20
	  rlwinm    r0,r0,2,0,29
	  lwzx      r0, r3, r0
	  mtctr     r0
	  bctr
	  lis       r3, 0xCC00
	  lwz       r0, 0x6004(r3)
	  addi      r5, r3, 0x6000
	  lis       r3, 0x800E
	  stw       r0, 0x4(r5)
	  li        r0, 0x20
	  subi      r4, r3, 0x1D24
	  stw       r0, 0x1C(r7)
	  lwz       r3, 0x18(r7)
	  bl        -0x2474
	  b         .loc_0x310
	  lwz       r0, 0x14(r7)
	  cmplwi    r0, 0
	  bne-      .loc_0xB0
	  lis       r3, 0x804F
	  lwz       r4, -0x71D0(r13)
	  addi      r0, r3, 0x5E40
	  stw       r0, -0x71D0(r13)
	  li        r0, 0
	  stw       r0, 0xC(r4)
	  lwz       r12, 0x28(r4)
	  cmplwi    r12, 0
	  beq-      .loc_0xA8
	  mtlr      r12
	  li        r3, 0
	  blrl

	.loc_0xA8:
	  bl        -0x2D8
	  b         .loc_0x310

	.loc_0xB0:
	  lis       r3, 0xCC00
	  addi      r3, r3, 0x6000
	  lwz       r0, 0x4(r3)
	  lis       r4, 0x8
	  stw       r0, 0x4(r3)
	  lwz       r3, 0x20(r7)
	  lwz       r0, 0x14(r7)
	  sub       r0, r0, r3
	  cmplw     r0, r4
	  ble-      .loc_0xDC
	  b         .loc_0xE0

	.loc_0xDC:
	  mr        r4, r0

	.loc_0xE0:
	  stw       r4, 0x1C(r7)
	  lis       r3, 0x800E
	  subi      r6, r3, 0x1D24
	  lwz       r5, 0x20(r7)
	  lwz       r3, 0x18(r7)
	  lwz       r0, 0x10(r7)
	  add       r3, r3, r5
	  lwz       r4, 0x1C(r7)
	  add       r5, r0, r5
	  bl        -0x286C
	  b         .loc_0x310
	  lis       r3, 0xCC00
	  lwz       r0, 0x6004(r3)
	  addi      r5, r3, 0x6000
	  lis       r3, 0x800E
	  stw       r0, 0x4(r5)
	  subi      r4, r3, 0x1D24
	  lwz       r3, 0x10(r7)
	  bl        -0x25F8
	  b         .loc_0x310
	  lis       r3, 0x800E
	  subi      r3, r3, 0x1D24
	  bl        -0x24A4
	  b         .loc_0x310
	  lis       r3, 0x800E
	  subi      r3, r3, 0x1D24
	  bl        -0x24B4
	  b         .loc_0x310
	  lis       r3, 0xCC00
	  addi      r3, r3, 0x6000
	  lwz       r0, 0x4(r3)
	  stw       r0, 0x4(r3)
	  lwz       r0, -0x71BC(r13)
	  cmpwi     r0, 0
	  beq-      .loc_0x18C
	  lwz       r5, -0x71D0(r13)
	  li        r0, 0
	  lis       r3, 0x800E
	  stw       r0, 0x1C(r5)
	  subi      r4, r3, 0x1D24
	  li        r3, 0
	  bl        -0x22A4
	  b         .loc_0x310

	.loc_0x18C:
	  lwz       r4, -0x71D0(r13)
	  li        r0, 0x1
	  lis       r3, 0x800E
	  stw       r0, 0x1C(r4)
	  subi      r6, r3, 0x1D24
	  li        r3, 0
	  lwz       r4, 0x14(r7)
	  lwz       r5, 0x10(r7)
	  bl        -0x2364
	  b         .loc_0x310
	  lis       r3, 0xCC00
	  lwz       r0, 0x6004(r3)
	  addi      r4, r3, 0x6000
	  lis       r3, 0x800E
	  stw       r0, 0x4(r4)
	  subi      r6, r3, 0x1D24
	  lis       r3, 0x1
	  li        r4, 0
	  li        r5, 0
	  bl        -0x2390
	  b         .loc_0x310
	  lis       r3, 0xCC00
	  lwz       r0, 0x6004(r3)
	  addi      r4, r3, 0x6000
	  lis       r3, 0x800E
	  stw       r0, 0x4(r4)
	  li        r0, 0x1
	  subi      r6, r3, 0x1D24
	  stw       r0, -0x71BC(r13)
	  li        r3, 0
	  li        r4, 0
	  li        r5, 0
	  bl        -0x23C4
	  b         .loc_0x310
	  lis       r3, 0xCC00
	  lwz       r0, 0x6004(r3)
	  addi      r5, r3, 0x6000
	  lis       r3, 0x800E
	  stw       r0, 0x4(r5)
	  subi      r4, r3, 0x1D24
	  li        r3, 0
	  bl        -0x2350
	  b         .loc_0x310
	  lis       r3, 0xCC00
	  lwz       r0, 0x6004(r3)
	  addi      r5, r3, 0x6000
	  lis       r3, 0x800E
	  stw       r0, 0x4(r5)
	  subi      r4, r3, 0x1D24
	  lis       r3, 0x1
	  bl        -0x2374
	  b         .loc_0x310
	  lis       r3, 0xCC00
	  lwz       r0, 0x6004(r3)
	  addi      r5, r3, 0x6000
	  lis       r3, 0x800E
	  stw       r0, 0x4(r5)
	  subi      r4, r3, 0x1D24
	  lis       r3, 0x2
	  bl        -0x2398
	  b         .loc_0x310
	  lis       r3, 0xCC00
	  lwz       r0, 0x6004(r3)
	  addi      r5, r3, 0x6000
	  lis       r3, 0x800E
	  stw       r0, 0x4(r5)
	  subi      r4, r3, 0x1D24
	  lis       r3, 0x3
	  bl        -0x23BC
	  b         .loc_0x310
	  lis       r3, 0xCC00
	  lwz       r0, 0x6004(r3)
	  addi      r4, r3, 0x6000
	  lis       r3, 0x800E
	  stw       r0, 0x4(r4)
	  subi      r5, r3, 0x1D24
	  lwz       r3, 0x10(r7)
	  lwz       r4, 0x14(r7)
	  bl        -0x2358
	  b         .loc_0x310
	  lis       r3, 0xCC00
	  lwz       r0, 0x6004(r3)
	  addi      r5, r3, 0x6000
	  lis       r3, 0x800E
	  stw       r0, 0x4(r5)
	  li        r0, 0x20
	  subi      r4, r3, 0x1D24
	  stw       r0, 0x1C(r7)
	  lwz       r3, 0x18(r7)
	  bl        -0x2544
	  b         .loc_0x310

	.loc_0x2F8:
	  lwz       r12, -0x7D40(r13)
	  lis       r3, 0x800E
	  subi      r4, r3, 0x1D24
	  mtlr      r12
	  addi      r3, r7, 0
	  blrl

	.loc_0x310:
	  lwz       r0, 0xC(r1)
	  addi      r1, r1, 0x8
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000024
 */
void __DVDSetImmCommand(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00001C
 */
void __DVDSetDmaCommand(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00005C
 */
void IsImmCommandWithResult(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000040
 */
void IsDmaCommand(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800DE2DC
 * Size:	000638
 */
void cbForStateBusy(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  cmplwi    r3, 0x10
	  stw       r0, 0x4(r1)
	  lis       r4, 0x804F
	  stwu      r1, -0x18(r1)
	  stw       r31, 0x14(r1)
	  addi      r31, r4, 0x5E00
	  stw       r30, 0x10(r1)
	  bne-      .loc_0x4C
	  lwz       r4, -0x71D0(r13)
	  li        r0, -0x1
	  lis       r3, 0x123
	  stw       r0, 0xC(r4)
	  addi      r3, r3, 0x4568
	  bl        0x145C
	  bl        0xA08
	  li        r3, 0
	  bl        -0x1408
	  b         .loc_0x620

	.loc_0x4C:
	  lwz       r0, -0x71B4(r13)
	  cmplwi    r0, 0x3
	  beq-      .loc_0x64
	  lwz       r0, -0x71B4(r13)
	  cmplwi    r0, 0xF
	  bne-      .loc_0x14C

	.loc_0x64:
	  rlwinm.   r0,r3,0,30,30
	  beq-      .loc_0x94
	  lwz       r4, -0x71D0(r13)
	  li        r0, -0x1
	  lis       r3, 0x123
	  stw       r0, 0xC(r4)
	  addi      r3, r3, 0x4567
	  bl        0x1414
	  lis       r3, 0x800E
	  subi      r3, r3, 0x30E8
	  bl        -0x2718
	  b         .loc_0x620

	.loc_0x94:
	  li        r0, 0
	  stw       r0, -0x719C(r13)
	  lwz       r0, -0x71B4(r13)
	  cmplwi    r0, 0xF
	  bne-      .loc_0xB0
	  li        r0, 0x1
	  stw       r0, -0x7198(r13)

	.loc_0xB0:
	  lwz       r0, -0x71B0(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0x124
	  li        r0, 0x7
	  lwz       r30, -0x71D0(r13)
	  stw       r0, -0x71A8(r13)
	  addi      r3, r31, 0x40
	  li        r0, 0
	  stw       r0, -0x71B0(r13)
	  li        r0, 0xA
	  stw       r3, -0x71D0(r13)
	  stw       r0, 0xC(r30)
	  lwz       r12, 0x28(r30)
	  cmplwi    r12, 0
	  beq-      .loc_0xFC
	  mtlr      r12
	  addi      r4, r30, 0
	  li        r3, -0x3
	  blrl

	.loc_0xFC:
	  lwz       r12, -0x71AC(r13)
	  cmplwi    r12, 0
	  beq-      .loc_0x118
	  mtlr      r12
	  addi      r4, r30, 0
	  li        r3, 0
	  blrl

	.loc_0x118:
	  bl        -0x668
	  li        r0, 0x1
	  b         .loc_0x128

	.loc_0x124:
	  li        r0, 0

	.loc_0x128:
	  cmpwi     r0, 0
	  bne-      .loc_0x620
	  lwz       r4, -0x71D0(r13)
	  li        r0, 0x7
	  lis       r3, 0x800E
	  stw       r0, 0xC(r4)
	  subi      r3, r3, 0x2358
	  bl        -0x28A0
	  b         .loc_0x620

	.loc_0x14C:
	  lwz       r4, -0x71B4(r13)
	  cmplwi    r4, 0x1
	  beq-      .loc_0x16C
	  subi      r0, r4, 0x4
	  cmplwi    r0, 0x1
	  ble-      .loc_0x16C
	  cmplwi    r4, 0xE
	  bne-      .loc_0x174

	.loc_0x16C:
	  li        r0, 0x1
	  b         .loc_0x18C

	.loc_0x174:
	  lwz       r0, -0x7D34(r13)
	  cmplw     r4, r0
	  bne-      .loc_0x188
	  li        r0, 0x1
	  b         .loc_0x18C

	.loc_0x188:
	  li        r0, 0

	.loc_0x18C:
	  cmpwi     r0, 0
	  beq-      .loc_0x1B8
	  lwz       r6, -0x71D0(r13)
	  lis       r4, 0xCC00
	  addi      r4, r4, 0x6000
	  lwz       r4, 0x18(r4)
	  lwz       r0, 0x1C(r6)
	  lwz       r5, 0x20(r6)
	  sub       r0, r0, r4
	  add       r0, r5, r0
	  stw       r0, 0x20(r6)

	.loc_0x1B8:
	  rlwinm.   r0,r3,0,28,28
	  beq-      .loc_0x21C
	  lwz       r30, -0x71D0(r13)
	  addi      r3, r31, 0x40
	  li        r0, 0
	  stw       r0, -0x71B0(r13)
	  li        r0, 0xA
	  stw       r3, -0x71D0(r13)
	  stw       r0, 0xC(r30)
	  lwz       r12, 0x28(r30)
	  cmplwi    r12, 0
	  beq-      .loc_0x1F8
	  mtlr      r12
	  addi      r4, r30, 0
	  li        r3, -0x3
	  blrl

	.loc_0x1F8:
	  lwz       r12, -0x71AC(r13)
	  cmplwi    r12, 0
	  beq-      .loc_0x214
	  mtlr      r12
	  addi      r4, r30, 0
	  li        r3, 0
	  blrl

	.loc_0x214:
	  bl        -0x764
	  b         .loc_0x620

	.loc_0x21C:
	  rlwinm.   r0,r3,0,31,31
	  beq-      .loc_0x4F0
	  li        r4, 0
	  stw       r4, -0x719C(r13)
	  lwz       r0, -0x71B0(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0x294
	  stw       r4, -0x71A8(r13)
	  addi      r3, r31, 0x40
	  lwz       r30, -0x71D0(r13)
	  li        r0, 0xA
	  stw       r4, -0x71B0(r13)
	  stw       r3, -0x71D0(r13)
	  stw       r0, 0xC(r30)
	  lwz       r12, 0x28(r30)
	  cmplwi    r12, 0
	  beq-      .loc_0x270
	  mtlr      r12
	  addi      r4, r30, 0
	  li        r3, -0x3
	  blrl

	.loc_0x270:
	  lwz       r12, -0x71AC(r13)
	  cmplwi    r12, 0
	  beq-      .loc_0x28C
	  mtlr      r12
	  addi      r4, r30, 0
	  li        r3, 0
	  blrl

	.loc_0x28C:
	  bl        -0x7DC
	  li        r4, 0x1

	.loc_0x294:
	  cmpwi     r4, 0
	  bne-      .loc_0x620
	  lwz       r3, -0x71B4(r13)
	  cmplwi    r3, 0x1
	  beq-      .loc_0x2BC
	  subi      r0, r3, 0x4
	  cmplwi    r0, 0x1
	  ble-      .loc_0x2BC
	  cmplwi    r3, 0xE
	  bne-      .loc_0x2C4

	.loc_0x2BC:
	  li        r0, 0x1
	  b         .loc_0x2DC

	.loc_0x2C4:
	  lwz       r0, -0x7D34(r13)
	  cmplw     r3, r0
	  bne-      .loc_0x2D8
	  li        r0, 0x1
	  b         .loc_0x2DC

	.loc_0x2D8:
	  li        r0, 0

	.loc_0x2DC:
	  cmpwi     r0, 0
	  beq-      .loc_0x334
	  lwz       r3, -0x71D0(r13)
	  lwz       r4, 0x20(r3)
	  lwz       r0, 0x14(r3)
	  cmplw     r4, r0
	  beq-      .loc_0x300
	  bl        -0x618
	  b         .loc_0x620

	.loc_0x300:
	  addi      r0, r31, 0x40
	  stw       r0, -0x71D0(r13)
	  li        r0, 0
	  addi      r4, r3, 0
	  stw       r0, 0xC(r3)
	  lwz       r12, 0x28(r3)
	  cmplwi    r12, 0
	  beq-      .loc_0x32C
	  lwz       r3, 0x20(r4)
	  mtlr      r12
	  blrl

	.loc_0x32C:
	  bl        -0x87C
	  b         .loc_0x620

	.loc_0x334:
	  lwz       r4, -0x71B4(r13)
	  subi      r0, r4, 0x9
	  cmplwi    r0, 0x3
	  bgt-      .loc_0x34C
	  li        r0, 0x1
	  b         .loc_0x390

	.loc_0x34C:
	  lis       r3, 0x804A
	  lwzu      r0, 0x7D60(r3)
	  cmplw     r4, r0
	  bne-      .loc_0x364
	  li        r0, 0x1
	  b         .loc_0x390

	.loc_0x364:
	  lwzu      r0, 0x4(r3)
	  cmplw     r4, r0
	  bne-      .loc_0x378
	  li        r0, 0x1
	  b         .loc_0x390

	.loc_0x378:
	  lwz       r0, 0x4(r3)
	  cmplw     r4, r0
	  bne-      .loc_0x38C
	  li        r0, 0x1
	  b         .loc_0x390

	.loc_0x38C:
	  li        r0, 0

	.loc_0x390:
	  cmpwi     r0, 0
	  beq-      .loc_0x3FC
	  lwz       r0, -0x71B4(r13)
	  cmplwi    r0, 0xB
	  beq-      .loc_0x3B0
	  lwz       r0, -0x71B4(r13)
	  cmplwi    r0, 0xA
	  bne-      .loc_0x3C0

	.loc_0x3B0:
	  lis       r3, 0xCC00
	  lwz       r0, 0x6020(r3)
	  rlwinm    r3,r0,2,0,29
	  b         .loc_0x3CC

	.loc_0x3C0:
	  lis       r3, 0xCC00
	  addi      r3, r3, 0x6000
	  lwz       r3, 0x20(r3)

	.loc_0x3CC:
	  lwz       r4, -0x71D0(r13)
	  addi      r5, r31, 0x40
	  li        r0, 0
	  stw       r5, -0x71D0(r13)
	  stw       r0, 0xC(r4)
	  lwz       r12, 0x28(r4)
	  cmplwi    r12, 0
	  beq-      .loc_0x3F4
	  mtlr      r12
	  blrl

	.loc_0x3F4:
	  bl        -0x944
	  b         .loc_0x620

	.loc_0x3FC:
	  lwz       r0, -0x71B4(r13)
	  cmplwi    r0, 0x6
	  bne-      .loc_0x4BC
	  lwz       r4, -0x71D0(r13)
	  addi      r5, r4, 0x1C
	  lwz       r0, 0x1C(r4)
	  cmplwi    r0, 0
	  bne-      .loc_0x48C
	  lis       r3, 0xCC00
	  lwz       r0, 0x6020(r3)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0x45C
	  addi      r0, r31, 0x40
	  stw       r0, -0x71D0(r13)
	  li        r0, 0x9
	  stw       r0, 0xC(r4)
	  lwz       r12, 0x28(r4)
	  cmplwi    r12, 0
	  beq-      .loc_0x454
	  mtlr      r12
	  li        r3, -0x2
	  blrl

	.loc_0x454:
	  bl        -0x9A4
	  b         .loc_0x620

	.loc_0x45C:
	  li        r0, 0
	  stw       r0, -0x71BC(r13)
	  li        r0, 0x1
	  lis       r3, 0x800E
	  stw       r0, 0x0(r5)
	  subi      r6, r3, 0x1D24
	  li        r3, 0
	  lwz       r5, -0x71D0(r13)
	  lwz       r4, 0x14(r5)
	  lwz       r5, 0x10(r5)
	  bl        -0x295C
	  b         .loc_0x620

	.loc_0x48C:
	  addi      r0, r31, 0x40
	  stw       r0, -0x71D0(r13)
	  li        r0, 0
	  stw       r0, 0xC(r4)
	  lwz       r12, 0x28(r4)
	  cmplwi    r12, 0
	  beq-      .loc_0x4B4
	  mtlr      r12
	  li        r3, 0
	  blrl

	.loc_0x4B4:
	  bl        -0xA04
	  b         .loc_0x620

	.loc_0x4BC:
	  lwz       r4, -0x71D0(r13)
	  addi      r3, r31, 0x40
	  li        r0, 0
	  stw       r3, -0x71D0(r13)
	  stw       r0, 0xC(r4)
	  lwz       r12, 0x28(r4)
	  cmplwi    r12, 0
	  beq-      .loc_0x4E8
	  mtlr      r12
	  li        r3, 0
	  blrl

	.loc_0x4E8:
	  bl        -0xA38
	  b         .loc_0x620

	.loc_0x4F0:
	  lwz       r0, -0x71B4(r13)
	  cmplwi    r0, 0xE
	  bne-      .loc_0x524
	  lwz       r4, -0x71D0(r13)
	  li        r0, -0x1
	  lis       r3, 0x123
	  stw       r0, 0xC(r4)
	  addi      r3, r3, 0x4567
	  bl        0xF84
	  lis       r3, 0x800E
	  subi      r3, r3, 0x30E8
	  bl        -0x2BA8
	  b         .loc_0x620

	.loc_0x524:
	  lwz       r0, -0x71B4(r13)
	  cmplwi    r0, 0x1
	  beq-      .loc_0x554
	  lwz       r0, -0x71B4(r13)
	  cmplwi    r0, 0x4
	  beq-      .loc_0x554
	  lwz       r0, -0x71B4(r13)
	  cmplwi    r0, 0x5
	  beq-      .loc_0x554
	  lwz       r0, -0x71B4(r13)
	  cmplwi    r0, 0xE
	  bne-      .loc_0x614

	.loc_0x554:
	  lwz       r30, -0x71D0(r13)
	  lwz       r3, 0x20(r30)
	  lwz       r0, 0x14(r30)
	  cmplw     r3, r0
	  bne-      .loc_0x614
	  lwz       r0, -0x71B0(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0x5D4
	  li        r4, 0
	  stw       r4, -0x71A8(r13)
	  addi      r3, r31, 0x40
	  li        r0, 0xA
	  stw       r4, -0x71B0(r13)
	  stw       r3, -0x71D0(r13)
	  stw       r0, 0xC(r30)
	  lwz       r12, 0x28(r30)
	  cmplwi    r12, 0
	  beq-      .loc_0x5AC
	  mtlr      r12
	  addi      r4, r30, 0
	  li        r3, -0x3
	  blrl

	.loc_0x5AC:
	  lwz       r12, -0x71AC(r13)
	  cmplwi    r12, 0
	  beq-      .loc_0x5C8
	  mtlr      r12
	  addi      r4, r30, 0
	  li        r3, 0
	  blrl

	.loc_0x5C8:
	  bl        -0xB18
	  li        r0, 0x1
	  b         .loc_0x5D8

	.loc_0x5D4:
	  li        r0, 0

	.loc_0x5D8:
	  cmpwi     r0, 0
	  bne-      .loc_0x620
	  lwz       r4, -0x71D0(r13)
	  addi      r3, r31, 0x40
	  li        r0, 0
	  stw       r3, -0x71D0(r13)
	  stw       r0, 0xC(r4)
	  lwz       r12, 0x28(r4)
	  cmplwi    r12, 0
	  beq-      .loc_0x60C
	  lwz       r3, 0x20(r4)
	  mtlr      r12
	  blrl

	.loc_0x60C:
	  bl        -0xB5C
	  b         .loc_0x620

	.loc_0x614:
	  lis       r3, 0x800E
	  subi      r3, r3, 0x2F2C
	  bl        -0x2C1C

	.loc_0x620:
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
 * Size:	00000C
 */
void __DVDGetIssueCommandAddr(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000BC
 */
void issueCommand(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800DE914
 * Size:	0000DC
 */
void DVDReadAbsAsyncPrio(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  li        r0, 0x1
	  stwu      r1, -0x38(r1)
	  stw       r31, 0x34(r1)
	  addi      r31, r8, 0
	  stw       r30, 0x30(r1)
	  stw       r29, 0x2C(r1)
	  addi      r29, r3, 0
	  stw       r0, 0x8(r3)
	  li        r0, 0
	  stw       r4, 0x18(r3)
	  stw       r5, 0x14(r3)
	  stw       r6, 0x10(r3)
	  stw       r0, 0x20(r3)
	  stw       r7, 0x28(r3)
	  lwz       r0, -0x7D44(r13)
	  cmpwi     r0, 0
	  beq-      .loc_0x78
	  lwz       r3, 0x8(r29)
	  cmplwi    r3, 0x1
	  beq-      .loc_0x6C
	  subi      r0, r3, 0x4
	  cmplwi    r0, 0x1
	  ble-      .loc_0x6C
	  cmplwi    r3, 0xE
	  bne-      .loc_0x78

	.loc_0x6C:
	  lwz       r3, 0x18(r29)
	  lwz       r4, 0x14(r29)
	  bl        0xDD64

	.loc_0x78:
	  bl        0x102AC
	  li        r0, 0x2
	  stw       r0, 0xC(r29)
	  addi      r30, r3, 0
	  addi      r3, r31, 0
	  addi      r4, r29, 0
	  bl        0xAF0
	  lwz       r0, -0x71D0(r13)
	  addi      r31, r3, 0
	  cmplwi    r0, 0
	  bne-      .loc_0xB4
	  lwz       r0, -0x71C4(r13)
	  cmpwi     r0, 0
	  bne-      .loc_0xB4
	  bl        -0xC38

	.loc_0xB4:
	  mr        r3, r30
	  bl        0x10294
	  mr        r3, r31
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
 * Size:	0000CC
 */
void DVDSeekAbsAsyncPrio(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800DE9F0
 * Size:	0000D0
 */
void DVDReadAbsAsyncForBS(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  li        r0, 0x4
	  stwu      r1, -0x30(r1)
	  stw       r31, 0x2C(r1)
	  addi      r31, r3, 0
	  stw       r30, 0x28(r1)
	  stw       r0, 0x8(r3)
	  li        r0, 0
	  stw       r4, 0x18(r3)
	  stw       r5, 0x14(r3)
	  stw       r6, 0x10(r3)
	  stw       r0, 0x20(r3)
	  stw       r7, 0x28(r3)
	  lwz       r0, -0x7D44(r13)
	  cmpwi     r0, 0
	  beq-      .loc_0x70
	  lwz       r3, 0x8(r31)
	  cmplwi    r3, 0x1
	  beq-      .loc_0x64
	  subi      r0, r3, 0x4
	  cmplwi    r0, 0x1
	  ble-      .loc_0x64
	  cmplwi    r3, 0xE
	  bne-      .loc_0x70

	.loc_0x64:
	  lwz       r3, 0x18(r31)
	  lwz       r4, 0x14(r31)
	  bl        0xDC90

	.loc_0x70:
	  bl        0x101D8
	  li        r0, 0x2
	  stw       r0, 0xC(r31)
	  addi      r30, r3, 0
	  addi      r4, r31, 0
	  li        r3, 0x2
	  bl        0xA1C
	  lwz       r0, -0x71D0(r13)
	  addi      r31, r3, 0
	  cmplwi    r0, 0
	  bne-      .loc_0xAC
	  lwz       r0, -0x71C4(r13)
	  cmpwi     r0, 0
	  bne-      .loc_0xAC
	  bl        -0xD0C

	.loc_0xAC:
	  mr        r3, r30
	  bl        0x101C0
	  mr        r3, r31
	  lwz       r0, 0x34(r1)
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  addi      r1, r1, 0x30
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800DEAC0
 * Size:	0000D4
 */
void DVDReadDiskID(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  li        r0, 0x5
	  stwu      r1, -0x28(r1)
	  stw       r31, 0x24(r1)
	  addi      r31, r3, 0
	  stw       r30, 0x20(r1)
	  stw       r0, 0x8(r3)
	  li        r3, 0x20
	  li        r0, 0
	  stw       r4, 0x18(r31)
	  stw       r3, 0x14(r31)
	  stw       r0, 0x10(r31)
	  stw       r0, 0x20(r31)
	  stw       r5, 0x28(r31)
	  lwz       r0, -0x7D44(r13)
	  cmpwi     r0, 0
	  beq-      .loc_0x74
	  lwz       r3, 0x8(r31)
	  cmplwi    r3, 0x1
	  beq-      .loc_0x68
	  subi      r0, r3, 0x4
	  cmplwi    r0, 0x1
	  ble-      .loc_0x68
	  cmplwi    r3, 0xE
	  bne-      .loc_0x74

	.loc_0x68:
	  lwz       r3, 0x18(r31)
	  lwz       r4, 0x14(r31)
	  bl        0xDBBC

	.loc_0x74:
	  bl        0x10104
	  li        r0, 0x2
	  stw       r0, 0xC(r31)
	  addi      r30, r3, 0
	  addi      r4, r31, 0
	  li        r3, 0x2
	  bl        0x948
	  lwz       r0, -0x71D0(r13)
	  addi      r31, r3, 0
	  cmplwi    r0, 0
	  bne-      .loc_0xB0
	  lwz       r0, -0x71C4(r13)
	  cmpwi     r0, 0
	  bne-      .loc_0xB0
	  bl        -0xDE0

	.loc_0xB0:
	  mr        r3, r30
	  bl        0x100EC
	  mr        r3, r31
	  lwz       r0, 0x2C(r1)
	  lwz       r31, 0x24(r1)
	  lwz       r30, 0x20(r1)
	  addi      r1, r1, 0x28
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000C4
 */
void DVDPrepareStreamAbsAsync(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800DEB94
 * Size:	0000BC
 */
void DVDCancelStreamAsync(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  li        r0, 0x7
	  stwu      r1, -0x20(r1)
	  stw       r31, 0x1C(r1)
	  addi      r31, r3, 0
	  stw       r30, 0x18(r1)
	  stw       r0, 0x8(r3)
	  stw       r4, 0x28(r3)
	  lwz       r0, -0x7D44(r13)
	  cmpwi     r0, 0
	  beq-      .loc_0x5C
	  lwz       r3, 0x8(r31)
	  cmplwi    r3, 0x1
	  beq-      .loc_0x50
	  subi      r0, r3, 0x4
	  cmplwi    r0, 0x1
	  ble-      .loc_0x50
	  cmplwi    r3, 0xE
	  bne-      .loc_0x5C

	.loc_0x50:
	  lwz       r3, 0x18(r31)
	  lwz       r4, 0x14(r31)
	  bl        0xDB00

	.loc_0x5C:
	  bl        0x10048
	  li        r0, 0x2
	  stw       r0, 0xC(r31)
	  addi      r30, r3, 0
	  addi      r4, r31, 0
	  li        r3, 0x1
	  bl        0x88C
	  lwz       r0, -0x71D0(r13)
	  addi      r31, r3, 0
	  cmplwi    r0, 0
	  bne-      .loc_0x98
	  lwz       r0, -0x71C4(r13)
	  cmpwi     r0, 0
	  bne-      .loc_0x98
	  bl        -0xE9C

	.loc_0x98:
	  mr        r3, r30
	  bl        0x10030
	  mr        r3, r31
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  addi      r1, r1, 0x20
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000A0
 */
void DVDCancelStream(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000028
 */
void cbForCancelStreamSync(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000BC
 */
void DVDStopStreamAtEndAsync(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000A0
 */
void DVDStopStreamAtEnd(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000028
 */
void cbForStopStreamAtEndSync(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000BC
 */
void DVDGetStreamErrorStatusAsync(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000A0
 */
void DVDGetStreamErrorStatus(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000028
 */
void cbForGetStreamErrorStatusSync(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000BC
 */
void DVDGetStreamPlayAddrAsync(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000A0
 */
void DVDGetStreamPlayAddr(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000028
 */
void cbForGetStreamPlayAddrSync(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000BC
 */
void DVDGetStreamStartAddrAsync(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000A0
 */
void DVDGetStreamStartAddr(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000028
 */
void cbForGetStreamStartAddrSync(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000BC
 */
void DVDGetStreamLengthAsync(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000A0
 */
void DVDGetStreamLength(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000028
 */
void cbForGetStreamLengthSync(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000BC
 */
void __DVDAudioBufferConfig(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000BC
 */
void DVDChangeDiskAsyncForBS(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000110
 */
void DVDChangeDiskAsync(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000104
 */
void DVDChangeDisk(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000024
 */
void cbForChangeDiskSync(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800DEC50
 * Size:	0000D0
 */
void DVDInquiryAsync(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  li        r0, 0xE
	  stwu      r1, -0x28(r1)
	  stw       r31, 0x24(r1)
	  addi      r31, r3, 0
	  stw       r30, 0x20(r1)
	  stw       r0, 0x8(r3)
	  li        r3, 0x20
	  li        r0, 0
	  stw       r4, 0x18(r31)
	  stw       r3, 0x14(r31)
	  stw       r0, 0x20(r31)
	  stw       r5, 0x28(r31)
	  lwz       r0, -0x7D44(r13)
	  cmpwi     r0, 0
	  beq-      .loc_0x70
	  lwz       r3, 0x8(r31)
	  cmplwi    r3, 0x1
	  beq-      .loc_0x64
	  subi      r0, r3, 0x4
	  cmplwi    r0, 0x1
	  ble-      .loc_0x64
	  cmplwi    r3, 0xE
	  bne-      .loc_0x70

	.loc_0x64:
	  lwz       r3, 0x18(r31)
	  lwz       r4, 0x14(r31)
	  bl        0xDA30

	.loc_0x70:
	  bl        0xFF78
	  li        r0, 0x2
	  stw       r0, 0xC(r31)
	  addi      r30, r3, 0
	  addi      r4, r31, 0
	  li        r3, 0x2
	  bl        0x7BC
	  lwz       r0, -0x71D0(r13)
	  addi      r31, r3, 0
	  cmplwi    r0, 0
	  bne-      .loc_0xAC
	  lwz       r0, -0x71C4(r13)
	  cmpwi     r0, 0
	  bne-      .loc_0xAC
	  bl        -0xF6C

	.loc_0xAC:
	  mr        r3, r30
	  bl        0xFF60
	  mr        r3, r31
	  lwz       r0, 0x2C(r1)
	  lwz       r31, 0x24(r1)
	  lwz       r30, 0x20(r1)
	  addi      r1, r1, 0x28
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000C8
 */
void DVDInquiry(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000024
 */
void cbForInquirySync(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800DED20
 * Size:	000044
 */
void DVDReset(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x8(r1)
	  bl        -0x2D68
	  lis       r3, 0xCC00
	  li        r0, 0x2A
	  stw       r0, 0x6000(r3)
	  addi      r4, r3, 0x6000
	  li        r0, 0
	  lwz       r3, 0x6004(r3)
	  stw       r3, 0x4(r4)
	  stw       r0, -0x7198(r13)
	  stw       r0, -0x71A8(r13)
	  lwz       r0, 0xC(r1)
	  addi      r1, r1, 0x8
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void DVDResetRequired(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800DED64
 * Size:	00004C
 */
void DVDGetCommandBlockStatus(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x18(r1)
	  stw       r31, 0x14(r1)
	  mr        r31, r3
	  bl        0xFEC0
	  lwz       r0, 0xC(r31)
	  cmpwi     r0, 0x3
	  bne-      .loc_0x2C
	  li        r31, 0x1
	  b         .loc_0x30

	.loc_0x2C:
	  mr        r31, r0

	.loc_0x30:
	  bl        0xFECC
	  mr        r3, r31
	  lwz       r0, 0x1C(r1)
	  lwz       r31, 0x14(r1)
	  addi      r1, r1, 0x18
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800DEDB0
 * Size:	0000AC
 */
void DVDGetDriveStatus(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x18(r1)
	  stw       r31, 0x14(r1)
	  stw       r30, 0x10(r1)
	  bl        0xFE74
	  lwz       r0, -0x71B8(r13)
	  addi      r30, r3, 0
	  cmpwi     r0, 0
	  beq-      .loc_0x30
	  li        r31, -0x1
	  b         .loc_0x88

	.loc_0x30:
	  lwz       r0, -0x71C0(r13)
	  cmpwi     r0, 0
	  beq-      .loc_0x44
	  li        r31, 0x8
	  b         .loc_0x88

	.loc_0x44:
	  lwz       r31, -0x71D0(r13)
	  cmplwi    r31, 0
	  bne-      .loc_0x58
	  li        r31, 0
	  b         .loc_0x88

	.loc_0x58:
	  lis       r3, 0x804F
	  addi      r0, r3, 0x5E40
	  cmplw     r31, r0
	  bne-      .loc_0x70
	  li        r31, 0
	  b         .loc_0x88

	.loc_0x70:
	  bl        0xFE18
	  lwz       r31, 0xC(r31)
	  cmpwi     r31, 0x3
	  bne-      .loc_0x84
	  li        r31, 0x1

	.loc_0x84:
	  bl        0xFE2C

	.loc_0x88:
	  mr        r3, r30
	  bl        0xFE24
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
 * Address:	800DEE5C
 * Size:	000010
 */
void DVDSetAutoInvalidation(void)
{
	/*
	.loc_0x0:
	  lwz       r0, -0x7D44(r13)
	  stw       r3, -0x7D44(r13)
	  mr        r3, r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00003C
 */
void DVDPause(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800DEE6C
 * Size:	000050
 */
void DVDResume(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x10(r1)
	  stw       r31, 0xC(r1)
	  bl        0xFDBC
	  li        r4, 0
	  stw       r4, -0x71C4(r13)
	  mr        r31, r3
	  lwz       r0, -0x71C0(r13)
	  cmpwi     r0, 0
	  beq-      .loc_0x34
	  stw       r4, -0x71C0(r13)
	  bl        -0x1110

	.loc_0x34:
	  mr        r3, r31
	  bl        0xFDBC
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  addi      r1, r1, 0x10
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800DEEBC
 * Size:	00027C
 */
void DVDCancelAsync(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x28(r1)
	  stw       r31, 0x24(r1)
	  stw       r30, 0x20(r1)
	  addi      r30, r4, 0
	  stw       r29, 0x1C(r1)
	  addi      r29, r3, 0
	  bl        0xFD5C
	  lwz       r4, 0xC(r29)
	  addi      r31, r3, 0
	  addi      r0, r4, 0x1
	  cmplwi    r0, 0xC
	  bgt-      .loc_0x254
	  lis       r3, 0x804A
	  addi      r3, r3, 0x7DB0
	  rlwinm    r0,r0,2,0,29
	  lwzx      r0, r3, r0
	  mtctr     r0
	  bctr
	  cmplwi    r30, 0
	  beq-      .loc_0x254
	  addi      r12, r30, 0
	  mtlr      r12
	  addi      r4, r29, 0
	  li        r3, 0
	  blrl
	  b         .loc_0x254
	  lwz       r0, -0x71B0(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0x8C
	  mr        r3, r31
	  bl        0xFD24
	  li        r3, 0
	  b         .loc_0x260

	.loc_0x8C:
	  li        r0, 0x1
	  stw       r30, -0x71AC(r13)
	  stw       r0, -0x71B0(r13)
	  lwz       r0, 0x8(r29)
	  cmplwi    r0, 0x4
	  beq-      .loc_0xAC
	  cmplwi    r0, 0x1
	  bne-      .loc_0x254

	.loc_0xAC:
	  bl        -0x2EE8
	  b         .loc_0x254
	  mr        r3, r29
	  bl        0x680
	  li        r0, 0xA
	  stw       r0, 0xC(r29)
	  lwz       r12, 0x28(r29)
	  cmplwi    r12, 0
	  beq-      .loc_0xE0
	  mtlr      r12
	  addi      r4, r29, 0
	  li        r3, -0x3
	  blrl

	.loc_0xE0:
	  cmplwi    r30, 0
	  beq-      .loc_0x254
	  addi      r12, r30, 0
	  mtlr      r12
	  addi      r4, r29, 0
	  li        r3, 0
	  blrl
	  b         .loc_0x254
	  lwz       r0, 0x8(r29)
	  cmpwi     r0, 0xD
	  beq-      .loc_0x130
	  bge-      .loc_0x124
	  cmpwi     r0, 0x6
	  bge-      .loc_0x150
	  cmpwi     r0, 0x4
	  bge-      .loc_0x130
	  b         .loc_0x150

	.loc_0x124:
	  cmpwi     r0, 0xF
	  beq-      .loc_0x130
	  b         .loc_0x150

	.loc_0x130:
	  cmplwi    r30, 0
	  beq-      .loc_0x254
	  addi      r12, r30, 0
	  mtlr      r12
	  addi      r4, r29, 0
	  li        r3, 0
	  blrl
	  b         .loc_0x254

	.loc_0x150:
	  lwz       r0, -0x71B0(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0x16C
	  mr        r3, r31
	  bl        0xFC44
	  li        r3, 0
	  b         .loc_0x260

	.loc_0x16C:
	  li        r0, 0x1
	  stw       r30, -0x71AC(r13)
	  stw       r0, -0x71B0(r13)
	  b         .loc_0x254
	  bl        -0x2FA4
	  lis       r4, 0x800E
	  subi      r0, r4, 0x2358
	  cmplw     r3, r0
	  beq-      .loc_0x1A0
	  mr        r3, r31
	  bl        0xFC10
	  li        r3, 0
	  b         .loc_0x260

	.loc_0x1A0:
	  lwz       r0, 0xC(r29)
	  cmpwi     r0, 0x4
	  bne-      .loc_0x1B4
	  li        r0, 0x3
	  stw       r0, -0x71A8(r13)

	.loc_0x1B4:
	  lwz       r0, 0xC(r29)
	  cmpwi     r0, 0x5
	  bne-      .loc_0x1C8
	  li        r0, 0x4
	  stw       r0, -0x71A8(r13)

	.loc_0x1C8:
	  lwz       r0, 0xC(r29)
	  cmpwi     r0, 0x6
	  bne-      .loc_0x1DC
	  li        r0, 0x1
	  stw       r0, -0x71A8(r13)

	.loc_0x1DC:
	  lwz       r0, 0xC(r29)
	  cmpwi     r0, 0xB
	  bne-      .loc_0x1F0
	  li        r0, 0x2
	  stw       r0, -0x71A8(r13)

	.loc_0x1F0:
	  lwz       r0, 0xC(r29)
	  cmpwi     r0, 0x7
	  bne-      .loc_0x204
	  li        r0, 0x7
	  stw       r0, -0x71A8(r13)

	.loc_0x204:
	  lis       r3, 0x804F
	  addi      r0, r3, 0x5E40
	  stw       r0, -0x71D0(r13)
	  li        r0, 0xA
	  stw       r0, 0xC(r29)
	  lwz       r12, 0x28(r29)
	  cmplwi    r12, 0
	  beq-      .loc_0x234
	  mtlr      r12
	  addi      r4, r29, 0
	  li        r3, -0x3
	  blrl

	.loc_0x234:
	  cmplwi    r30, 0
	  beq-      .loc_0x250
	  addi      r12, r30, 0
	  mtlr      r12
	  addi      r4, r29, 0
	  li        r3, 0
	  blrl

	.loc_0x250:
	  bl        -0x1380

	.loc_0x254:
	  mr        r3, r31
	  bl        0xFB4C
	  li        r3, 0x1

	.loc_0x260:
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
 * Address:	800DF138
 * Size:	0000AC
 */
void DVDCancel(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  lis       r4, 0x800E
	  stw       r0, 0x4(r1)
	  subi      r4, r4, 0xE1C
	  stwu      r1, -0x18(r1)
	  stw       r31, 0x14(r1)
	  stw       r30, 0x10(r1)
	  addi      r30, r3, 0
	  bl        -0x29C
	  cmpwi     r3, 0
	  bne-      .loc_0x34
	  li        r3, -0x1
	  b         .loc_0x94

	.loc_0x34:
	  bl        0xFACC
	  mr        r31, r3

	.loc_0x3C:
	  lwz       r3, 0xC(r30)
	  addi      r0, r3, 0x1
	  cmplwi    r0, 0x1
	  ble-      .loc_0x88
	  cmpwi     r3, 0xA
	  beq-      .loc_0x88
	  cmpwi     r3, 0x3
	  bne-      .loc_0x7C
	  lwz       r3, 0x8(r30)
	  subi      r0, r3, 0x4
	  cmplwi    r0, 0x1
	  ble-      .loc_0x88
	  cmplwi    r3, 0xD
	  beq-      .loc_0x88
	  cmplwi    r3, 0xF
	  beq-      .loc_0x88

	.loc_0x7C:
	  subi      r3, r13, 0x71D8
	  bl        0x13734
	  b         .loc_0x3C

	.loc_0x88:
	  mr        r3, r31
	  bl        0xFA9C
	  li        r3, 0

	.loc_0x94:
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
 * Address:	800DF1E4
 * Size:	000024
 */
void cbForCancelSync(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  subi      r3, r13, 0x71D8
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x8(r1)
	  bl        0x137E4
	  lwz       r0, 0xC(r1)
	  addi      r1, r1, 0x8
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000EC
 */
void DVDCancelAllAsync(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000138
 */
void DVDCancelAll(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00002C
 */
void cbForCancelAllSync(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800DF208
 * Size:	000008
 */
void DVDGetCurrentDiskID(void)
{
	/*
	.loc_0x0:
	  lis       r3, 0x8000
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800DF210
 * Size:	0000F8
 */
void DVDCheckDisk(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x10(r1)
	  stw       r31, 0xC(r1)
	  bl        0xFA18
	  lwz       r0, -0x71B8(r13)
	  cmpwi     r0, 0
	  beq-      .loc_0x28
	  li        r4, -0x1
	  b         .loc_0x6C

	.loc_0x28:
	  lwz       r0, -0x71C0(r13)
	  cmpwi     r0, 0
	  beq-      .loc_0x3C
	  li        r4, 0x8
	  b         .loc_0x6C

	.loc_0x3C:
	  lwz       r5, -0x71D0(r13)
	  cmplwi    r5, 0
	  bne-      .loc_0x50
	  li        r4, 0
	  b         .loc_0x6C

	.loc_0x50:
	  lis       r4, 0x804F
	  addi      r0, r4, 0x5E40
	  cmplw     r5, r0
	  bne-      .loc_0x68
	  li        r4, 0
	  b         .loc_0x6C

	.loc_0x68:
	  lwz       r4, 0xC(r5)

	.loc_0x6C:
	  addi      r0, r4, 0x1
	  cmplwi    r0, 0xC
	  bgt-      .loc_0xDC
	  lis       r4, 0x804A
	  addi      r4, r4, 0x7DE4
	  rlwinm    r0,r0,2,0,29
	  lwzx      r0, r4, r0
	  mtctr     r0
	  bctr
	  li        r31, 0x1
	  b         .loc_0xDC
	  li        r31, 0
	  b         .loc_0xDC
	  lis       r4, 0xCC00
	  addi      r4, r4, 0x6000
	  lwz       r4, 0x4(r4)
	  rlwinm.   r0,r4,30,31,31
	  bne-      .loc_0xBC
	  rlwinm.   r0,r4,0,31,31
	  beq-      .loc_0xC4

	.loc_0xBC:
	  li        r31, 0
	  b         .loc_0xDC

	.loc_0xC4:
	  lwz       r0, -0x71A8(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0xD8
	  li        r31, 0
	  b         .loc_0xDC

	.loc_0xD8:
	  li        r31, 0x1

	.loc_0xDC:
	  bl        0xF974
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
 * Address:	800DF308
 * Size:	00011C
 */
void __DVDPrepareResetAsync(void)
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
	  bl        0xF914
	  mr        r29, r3
	  bl        0x130
	  lwz       r0, -0x71B0(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0x3C
	  stw       r30, -0x71AC(r13)
	  b         .loc_0xF8

	.loc_0x3C:
	  lwz       r3, -0x71D0(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x50
	  li        r0, 0
	  stw       r0, 0x28(r3)

	.loc_0x50:
	  bl        0xF8E0
	  mr        r31, r3
	  bl        0xF8D8
	  lwz       r0, -0x71D0(r13)
	  li        r4, 0x1
	  stw       r4, -0x71C4(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x74
	  stw       r4, -0x71C0(r13)

	.loc_0x74:
	  bl        0xF8E4
	  b         .loc_0x84

	.loc_0x7C:
	  li        r4, 0
	  bl        -0x4CC

	.loc_0x84:
	  bl        0x170
	  cmplwi    r3, 0
	  bne+      .loc_0x7C
	  lwz       r3, -0x71D0(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0xA8
	  mr        r4, r30
	  bl        -0x4EC
	  b         .loc_0xC4

	.loc_0xA8:
	  cmplwi    r30, 0
	  beq-      .loc_0xC4
	  addi      r12, r30, 0
	  mtlr      r12
	  li        r3, 0
	  li        r4, 0
	  blrl

	.loc_0xC4:
	  bl        0xF86C
	  li        r4, 0
	  stw       r4, -0x71C4(r13)
	  mr        r30, r3
	  lwz       r0, -0x71C0(r13)
	  cmpwi     r0, 0
	  beq-      .loc_0xE8
	  stw       r4, -0x71C0(r13)
	  bl        -0x1660

	.loc_0xE8:
	  mr        r3, r30
	  bl        0xF86C
	  mr        r3, r31
	  bl        0xF864

	.loc_0xF8:
	  mr        r3, r29
	  bl        0xF85C
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
 * Address:	800DF424
 * Size:	000038
 */
void __DVDTestAlarm(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  lis       r4, 0x804F
	  stw       r0, 0x4(r1)
	  addi      r0, r4, 0x5E70
	  cmplw     r3, r0
	  stwu      r1, -0x8(r1)
	  bne-      .loc_0x24
	  li        r3, 0x1
	  b         .loc_0x28

	.loc_0x24:
	  bl        -0x3354

	.loc_0x28:
	  lwz       r0, 0xC(r1)
	  addi      r1, r1, 0x8
	  mtlr      r0
	  blr
	*/
}
