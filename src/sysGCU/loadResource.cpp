#include "types.h"

/*
 * --INFO--
 * Address:	........
 * Size:	000078
 */
LoadResource::Node::Node(char const*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8044C520
 * Size:	0000B8
 */
LoadResource::Node::~Node(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  stw       r30, 0x8(r1)
	  mr.       r30, r3
	  beq-      .loc_0x9C
	  lis       r4, 0x804F
	  subi      r4, r4, 0x2D48
	  stw       r4, 0x0(r30)
	  addi      r0, r4, 0x10
	  stw       r0, 0x18(r30)
	  bl        -0x3AF84
	  lwz       r3, 0x30(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0x48
	  bl        -0x4284B0

	.loc_0x48:
	  lwz       r3, 0x34(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0x64
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl

	.loc_0x64:
	  lwz       r3, 0x14(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0x74
	  bl        -0x4284DC

	.loc_0x74:
	  addi      r3, r30, 0x18
	  li        r4, 0
	  bl        -0x42F568
	  mr        r3, r30
	  li        r4, 0
	  bl        -0x3B020
	  extsh.    r0, r31
	  ble-      .loc_0x9C
	  mr        r3, r30
	  bl        -0x428504

	.loc_0x9C:
	  lwz       r0, 0x14(r1)
	  mr        r3, r30
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000004
 */
void LoadResource::Node::dump(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8044C5D8
 * Size:	000044
 */
LoadResource::Arg::Arg(char const*)
{
	/*
	.loc_0x0:
	  stw       r4, 0x0(r3)
	  li        r5, 0
	  li        r4, 0x1
	  li        r0, -0x1
	  stw       r5, 0x4(r3)
	  stw       r5, 0x8(r3)
	  stw       r5, 0xC(r3)
	  stw       r4, 0x10(r3)
	  stw       r5, 0x14(r3)
	  stw       r5, 0x18(r3)
	  stw       r4, 0x1C(r3)
	  stw       r0, 0x20(r3)
	  stw       r5, 0x24(r3)
	  stw       r5, 0x28(r3)
	  stb       r4, 0x2C(r3)
	  stb       r4, 0x2D(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8044C61C
 * Size:	000048
 */
LoadResource::ArgAramOnly::ArgAramOnly(char const*)
{
	/*
	.loc_0x0:
	  stw       r4, 0x0(r3)
	  li        r5, 0
	  li        r4, 0x1
	  li        r0, -0x1
	  stw       r5, 0x4(r3)
	  stw       r5, 0x8(r3)
	  stw       r5, 0xC(r3)
	  stw       r4, 0x10(r3)
	  stw       r5, 0x14(r3)
	  stw       r5, 0x18(r3)
	  stw       r4, 0x1C(r3)
	  stw       r0, 0x20(r3)
	  stw       r5, 0x24(r3)
	  stw       r5, 0x28(r3)
	  stb       r4, 0x2C(r3)
	  stb       r4, 0x2D(r3)
	  stb       r5, 0x2D(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00009C
 */
LoadResource::Mgr::Mgr(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8044C664
 * Size:	0000B0
 */
void LoadResource::Mgr::init(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r4, 0x804A
	  li        r3, 0x30
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  subi      r31, r4, 0x4C98
	  stw       r30, 0x8(r1)
	  bl        -0x4287E0
	  cmplwi    r3, 0
	  beq-      .loc_0x98
	  lis       r4, 0x804F
	  mr        r30, r3
	  subi      r5, r4, 0x4AD8
	  li        r4, 0
	  stw       r5, 0x0(r3)
	  addi      r3, r31, 0x14
	  addi      r0, r2, 0x2748
	  stw       r4, 0x10(r30)
	  stw       r4, 0xC(r30)
	  stw       r4, 0x8(r30)
	  stw       r4, 0x4(r30)
	  stw       r3, 0x14(r30)
	  stw       r5, 0x18(r30)
	  stw       r4, 0x28(r30)
	  stw       r4, 0x24(r30)
	  stw       r4, 0x20(r30)
	  stw       r4, 0x1C(r30)
	  stw       r0, 0x2C(r30)
	  lwz       r0, -0x63D8(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0x94
	  addi      r3, r31, 0
	  addi      r5, r31, 0x20
	  li        r4, 0x76
	  crclr     6, 0x6
	  bl        -0x4220B4

	.loc_0x94:
	  stw       r30, -0x63D8(r13)

	.loc_0x98:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000B4
 */
void LoadResource::Mgr::search(char const*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00002C
 */
void LoadResource::Mgr::dump(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8044C714
 * Size:	00008C
 */
void LoadResource::Mgr::mountArchive(LoadResource::Arg&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  mr        r30, r4
	  bl        .loc_0x8C
	  mr.       r31, r3
	  beq-      .loc_0x70
	  lwz       r0, 0x1C(r30)
	  li        r5, 0x2
	  lwz       r3, 0x30(r31)
	  cmpwi     r0, 0x1
	  lwz       r4, 0x18(r30)
	  bne-      .loc_0x40
	  li        r5, 0x1

	.loc_0x40:
	  bl        -0x4315C0
	  stw       r3, 0x34(r31)
	  lwz       r0, 0x34(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x70
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x4C98
	  li        r4, 0xDD
	  subi      r5, r5, 0x4C6C
	  crclr     6, 0x6
	  bl        -0x422140

	.loc_0x70:
	  lwz       r0, 0x14(r1)
	  mr        r3, r31
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr

	.loc_0x8C:
	*/
}

/*
 * --INFO--
 * Address:	8044C7A0
 * Size:	000324
 */
void LoadResource::Mgr::load(LoadResource::Arg&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stmw      r25, 0x24(r1)
	  mr        r26, r3
	  mr        r27, r4
	  li        r31, 0
	  lwz       r25, 0x0(r4)
	  lwz       r30, 0x10(r3)
	  b         .loc_0x48

	.loc_0x28:
	  lwz       r4, 0x14(r30)
	  mr        r3, r25
	  bl        -0x382110
	  cmpwi     r3, 0
	  bne-      .loc_0x44
	  mr        r31, r30
	  b         .loc_0x50

	.loc_0x44:
	  lwz       r30, 0x4(r30)

	.loc_0x48:
	  cmplwi    r30, 0
	  bne+      .loc_0x28

	.loc_0x50:
	  cmplwi    r31, 0
	  beq-      .loc_0x88
	  lwz       r30, 0x28(r26)
	  b         .loc_0x80

	.loc_0x60:
	  lwz       r4, 0x14(r30)
	  mr        r3, r25
	  bl        -0x382148
	  cmpwi     r3, 0
	  bne-      .loc_0x7C
	  mr        r31, r30
	  b         .loc_0x88

	.loc_0x7C:
	  lwz       r30, 0x4(r30)

	.loc_0x80:
	  cmplwi    r30, 0
	  bne+      .loc_0x60

	.loc_0x88:
	  cmplwi    r31, 0
	  bne-      .loc_0x30C
	  lwz       r0, 0x18(r27)
	  li        r30, 0
	  cmplwi    r0, 0
	  bne-      .loc_0xA8
	  lwz       r0, -0x77D4(r13)
	  stw       r0, 0x18(r27)

	.loc_0xA8:
	  lwz       r0, 0x28(r27)
	  cmplwi    r0, 0
	  bne-      .loc_0xBC
	  addi      r0, r1, 0x18
	  stw       r0, 0x28(r27)

	.loc_0xBC:
	  lwz       r6, 0x1C(r27)
	  cmpwi     r6, 0x2
	  beq-      .loc_0x168
	  bge-      .loc_0x1F4
	  cmpwi     r6, 0x1
	  bge-      .loc_0xD8
	  b         .loc_0x1F4

	.loc_0xD8:
	  lwz       r3, 0x0(r27)
	  bl        -0x381F6C
	  lwz       r4, 0x18(r27)
	  addi      r3, r3, 0x1
	  li        r5, 0
	  bl        -0x428844
	  lwz       r4, 0x0(r27)
	  mr        r28, r3
	  bl        -0x382040
	  lwz       r4, 0x18(r27)
	  li        r3, 0x38
	  li        r5, 0
	  bl        -0x428968
	  mr.       r25, r3
	  beq-      .loc_0x160
	  lis       r3, 0x804F
	  li        r0, 0
	  subi      r3, r3, 0x4AD8
	  stw       r3, 0x0(r25)
	  addi      r3, r25, 0x18
	  stw       r0, 0x10(r25)
	  stw       r0, 0xC(r25)
	  stw       r0, 0x8(r25)
	  stw       r0, 0x4(r25)
	  stw       r28, 0x14(r25)
	  bl        -0x42F910
	  lis       r3, 0x804F
	  li        r0, 0
	  subi      r3, r3, 0x2D48
	  stw       r3, 0x0(r25)
	  addi      r3, r3, 0x10
	  stw       r3, 0x18(r25)
	  stw       r0, 0x30(r25)
	  stw       r0, 0x34(r25)

	.loc_0x160:
	  mr        r29, r25
	  b         .loc_0x210

	.loc_0x168:
	  lwz       r3, 0x0(r27)
	  bl        -0x381FFC
	  lwz       r4, 0x18(r27)
	  li        r5, -0x1
	  bl        -0x4288D0
	  lwz       r4, 0x0(r27)
	  mr        r28, r3
	  bl        -0x3820CC
	  lwz       r4, 0x18(r27)
	  li        r3, 0x38
	  li        r5, -0x20
	  bl        -0x4289F4
	  mr.       r25, r3
	  beq-      .loc_0x1EC
	  lis       r3, 0x804F
	  li        r0, 0
	  subi      r3, r3, 0x4AD8
	  stw       r3, 0x0(r25)
	  addi      r3, r25, 0x18
	  stw       r0, 0x10(r25)
	  stw       r0, 0xC(r25)
	  stw       r0, 0x8(r25)
	  stw       r0, 0x4(r25)
	  stw       r28, 0x14(r25)
	  bl        -0x42F99C
	  lis       r3, 0x804F
	  li        r0, 0
	  subi      r3, r3, 0x2D48
	  stw       r3, 0x0(r25)
	  addi      r3, r3, 0x10
	  stw       r3, 0x18(r25)
	  stw       r0, 0x30(r25)
	  stw       r0, 0x34(r25)

	.loc_0x1EC:
	  mr        r29, r25
	  b         .loc_0x210

	.loc_0x1F4:
	  lis       r3, 0x804A
	  lis       r4, 0x804A
	  subi      r5, r4, 0x4C58
	  subi      r3, r3, 0x4C98
	  li        r4, 0x114
	  crclr     6, 0x6
	  bl        -0x42236C

	.loc_0x210:
	  lbz       r0, 0x2C(r27)
	  cmplwi    r0, 0
	  beq-      .loc_0x25C
	  lwz       r0, 0x1C(r27)
	  stw       r0, 0x8(r1)
	  lwz       r0, 0x20(r27)
	  stw       r0, 0xC(r1)
	  lwz       r0, 0x28(r27)
	  stw       r0, 0x10(r1)
	  lwz       r3, -0x6458(r13)
	  lwz       r4, 0x0(r27)
	  lwz       r5, 0x4(r27)
	  lwz       r6, 0x8(r27)
	  lwz       r7, 0xC(r27)
	  lwz       r8, 0x10(r27)
	  lwz       r9, 0x14(r27)
	  lwz       r10, 0x18(r27)
	  bl        -0x19B80
	  mr        r30, r3

	.loc_0x25C:
	  cmplwi    r30, 0
	  beq-      .loc_0x274
	  mr        r3, r26
	  mr        r4, r29
	  bl        -0x3B604
	  b         .loc_0x2D0

	.loc_0x274:
	  lbz       r0, 0x2D(r27)
	  cmplwi    r0, 0
	  beq-      .loc_0x2D0
	  lwz       r0, 0x28(r27)
	  stw       r0, 0x8(r1)
	  lwz       r3, 0x0(r27)
	  lwz       r4, 0x4(r27)
	  lwz       r5, 0x10(r27)
	  lwz       r6, 0x14(r27)
	  lwz       r7, 0x18(r27)
	  lwz       r8, 0x1C(r27)
	  lwz       r9, 0xC(r27)
	  lwz       r10, 0x24(r27)
	  bl        -0x42D8C0
	  mr.       r0, r3
	  beq-      .loc_0x2D0
	  lwz       r4, 0x28(r27)
	  mr        r30, r0
	  lwz       r4, 0x0(r4)
	  bl        -0x360348
	  mr        r4, r29
	  addi      r3, r26, 0x18
	  bl        -0x3B664

	.loc_0x2D0:
	  cmplwi    r30, 0
	  beq-      .loc_0x2E4
	  stw       r30, 0x30(r29)
	  mr        r31, r29
	  b         .loc_0x30C

	.loc_0x2E4:
	  cmplwi    r29, 0
	  beq-      .loc_0x304
	  mr        r3, r29
	  li        r4, 0x1
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl

	.loc_0x304:
	  mr        r3, r28
	  bl        -0x4289F4

	.loc_0x30C:
	  mr        r3, r31
	  lmw       r25, 0x24(r1)
	  lwz       r0, 0x44(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8044CAC4
 * Size:	000008
 */
@24 @LoadResource::Node::~Node(void)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x18
	  b         -0x5A8
	*/
}
