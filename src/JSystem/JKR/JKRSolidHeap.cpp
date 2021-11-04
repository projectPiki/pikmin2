#include "types.h"

/*
 * --INFO--
 * Address:	80024D70
 * Size:	0000B4
 */
void JKRSolidHeap::create(unsigned long, JKRHeap*, bool)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  mr        r30, r5
	  stw       r29, 0x14(r1)
	  mr.       r29, r4
	  bne-      .loc_0x28
	  lwz       r29, -0x77D0(r13)

	.loc_0x28:
	  addis     r0, r3, 0x1
	  cmplwi    r0, 0xFFFF
	  bne-      .loc_0x40
	  mr        r3, r29
	  li        r4, 0x10
	  bl        -0x1538

	.loc_0x40:
	  rlwinm    r31,r3,0,0,27
	  cmplwi    r31, 0x80
	  bge-      .loc_0x54
	  li        r3, 0
	  b         .loc_0x98

	.loc_0x54:
	  mr        r3, r31
	  mr        r5, r29
	  li        r4, 0x10
	  bl        -0x17F0
	  mr        r0, r3
	  mr.       r5, r0
	  addi      r4, r5, 0x80
	  bne-      .loc_0x7C
	  li        r3, 0
	  b         .loc_0x98

	.loc_0x7C:
	  beq-      .loc_0x94
	  mr        r6, r29
	  mr        r7, r30
	  subi      r5, r31, 0x80
	  bl        0x88
	  mr        r0, r3

	.loc_0x94:
	  mr        r3, r0

	.loc_0x98:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80024E24
 * Size:	000060
 */
void JKRSolidHeap::do_destroy()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  lwz       r4, 0x50(r3)
	  lwz       r31, 0xC(r4)
	  cmplwi    r31, 0
	  beq-      .loc_0x48
	  lwz       r12, 0x0(r3)
	  li        r4, -0x1
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r30
	  mr        r4, r31
	  bl        -0x17FC

	.loc_0x48:
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
 * Address:	80024E84
 * Size:	00005C
 */
void JKRSolidHeap::JKRSolidHeap(void*, unsigned long, JKRHeap*, bool)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x1BE4
	  lis       r3, 0x804A
	  li        r0, 0
	  subi      r4, r3, 0x50
	  mr        r3, r31
	  stw       r4, 0x0(r31)
	  lwz       r4, 0x38(r31)
	  stw       r4, 0x6C(r31)
	  lwz       r4, 0x30(r31)
	  stw       r4, 0x70(r31)
	  lwz       r4, 0x34(r31)
	  stw       r4, 0x74(r31)
	  stw       r0, 0x78(r31)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80024EE0
 * Size:	000068
 */
void JKRSolidHeap::~JKRSolidHeap()
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
	  beq-      .loc_0x4C
	  lis       r4, 0x804A
	  subi      r0, r4, 0x50
	  stw       r0, 0x0(r30)
	  bl        -0x1198
	  mr        r3, r30
	  li        r4, 0
	  bl        -0x1B40
	  extsh.    r0, r31
	  ble-      .loc_0x4C
	  mr        r3, r30
	  bl        -0xE74

	.loc_0x4C:
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
 * Address:	80024F48
 * Size:	0000C4
 */
void JKRSolidHeap::adjustSize()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  lwz       r3, 0x50(r3)
	  lwz       r31, 0xC(r3)
	  cmplwi    r31, 0
	  beq-      .loc_0xA4
	  addi      r3, r29, 0x18
	  bl        0xCABF0
	  lwz       r5, 0x30(r29)
	  mr        r3, r31
	  lwz       r0, 0x70(r29)
	  mr        r4, r29
	  sub       r6, r5, r29
	  sub       r5, r0, r5
	  addi      r0, r5, 0x1F
	  rlwinm    r30,r0,0,0,26
	  add       r31, r6, r30
	  mr        r5, r31
	  bl        -0x181C
	  cmpwi     r3, -0x1
	  beq-      .loc_0x94
	  li        r0, 0
	  stw       r0, 0x6C(r29)
	  stw       r30, 0x38(r29)
	  lwz       r3, 0x30(r29)
	  lwz       r0, 0x38(r29)
	  add       r0, r3, r0
	  stw       r0, 0x34(r29)
	  lwz       r0, 0x34(r29)
	  stw       r0, 0x70(r29)
	  lwz       r0, 0x34(r29)
	  stw       r0, 0x74(r29)

	.loc_0x94:
	  addi      r3, r29, 0x18
	  bl        0xCAC64
	  mr        r3, r31
	  b         .loc_0xA8

	.loc_0xA4:
	  li        r3, -0x1

	.loc_0xA8:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8002500C
 * Size:	0000B0
 */
void JKRSolidHeap::do_alloc(unsigned long, int)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r5
	  stw       r30, 0x18(r1)
	  mr        r30, r4
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  addi      r3, r29, 0x18
	  bl        0xCAB34
	  cmplwi    r30, 0x4
	  bge-      .loc_0x38
	  li        r30, 0x4

	.loc_0x38:
	  cmpwi     r31, 0
	  blt-      .loc_0x64
	  cmpwi     r31, 0x4
	  mr        r3, r29
	  mr        r4, r30
	  li        r5, 0x4
	  blt-      .loc_0x58
	  mr        r5, r31

	.loc_0x58:
	  bl        .loc_0xB0
	  mr        r31, r3
	  b         .loc_0x88

	.loc_0x64:
	  neg       r0, r31
	  li        r5, 0x4
	  cmpwi     r0, 0x4
	  blt-      .loc_0x78
	  mr        r5, r0

	.loc_0x78:
	  mr        r3, r29
	  mr        r4, r30
	  bl        0x108
	  mr        r31, r3

	.loc_0x88:
	  addi      r3, r29, 0x18
	  bl        0xCABAC
	  lwz       r0, 0x24(r1)
	  mr        r3, r31
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr

	.loc_0xB0:
	*/
}

/*
 * --INFO--
 * Address:	800250BC
 * Size:	0000D8
 */
void JKRSolidHeap::allocFromHead(unsigned long, int)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  addi      r6, r4, 0x3
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  stw       r30, 0x18(r1)
	  li        r30, 0
	  stw       r29, 0x14(r1)
	  mr        r29, r5
	  subi      r5, r29, 0x1
	  stw       r28, 0x10(r1)
	  not       r4, r5
	  rlwinm    r28,r6,0,0,29
	  lwz       r7, 0x70(r3)
	  lwz       r0, 0x6C(r3)
	  add       r3, r29, r7
	  subi      r3, r3, 0x1
	  and       r5, r4, r3
	  sub       r3, r5, r7
	  add       r4, r28, r3
	  cmplw     r4, r0
	  bgt-      .loc_0x78
	  add       r0, r7, r4
	  mr        r30, r5
	  stw       r0, 0x70(r31)
	  lwz       r0, 0x6C(r31)
	  sub       r0, r0, r4
	  stw       r0, 0x6C(r31)
	  b         .loc_0xB4

	.loc_0x78:
	  lis       r3, 0x8047
	  addi      r3, r3, 0x3AA8
	  crclr     6, 0x6
	  bl        0x428C
	  lbz       r0, 0x68(r31)
	  cmplwi    r0, 0x1
	  bne-      .loc_0xB4
	  lwz       r12, -0x77CC(r13)
	  cmplwi    r12, 0
	  beq-      .loc_0xB4
	  mr        r3, r31
	  mr        r4, r28
	  mr        r5, r29
	  mtctr     r12
	  bctrl

	.loc_0xB4:
	  lwz       r0, 0x24(r1)
	  mr        r3, r30
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  lwz       r28, 0x10(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80025194
 * Size:	0000D0
 */
void JKRSolidHeap::allocFromTail(unsigned long, int)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  addi      r0, r4, 0x3
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  stw       r30, 0x18(r1)
	  li        r30, 0
	  stw       r29, 0x14(r1)
	  mr        r29, r5
	  stw       r28, 0x10(r1)
	  rlwinm    r28,r0,0,0,29
	  subi      r0, r29, 0x1
	  lwz       r5, 0x74(r3)
	  not       r4, r0
	  lwz       r0, 0x6C(r3)
	  sub       r3, r5, r28
	  and       r3, r4, r3
	  sub       r4, r5, r3
	  cmplw     r4, r0
	  bgt-      .loc_0x70
	  sub       r0, r5, r4
	  mr        r30, r3
	  stw       r0, 0x74(r31)
	  lwz       r0, 0x6C(r31)
	  sub       r0, r0, r4
	  stw       r0, 0x6C(r31)
	  b         .loc_0xAC

	.loc_0x70:
	  lis       r3, 0x8047
	  addi      r3, r3, 0x3ADC
	  crclr     6, 0x6
	  bl        0x41BC
	  lbz       r0, 0x68(r31)
	  cmplwi    r0, 0x1
	  bne-      .loc_0xAC
	  lwz       r12, -0x77CC(r13)
	  cmplwi    r12, 0
	  beq-      .loc_0xAC
	  mr        r3, r31
	  mr        r4, r28
	  mr        r5, r29
	  mtctr     r12
	  bctrl

	.loc_0xAC:
	  lwz       r0, 0x24(r1)
	  mr        r3, r30
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  lwz       r28, 0x10(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80025264
 * Size:	00002C
 */
void JKRSolidHeap::do_free(void*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r3, 0x8047
	  stw       r0, 0x14(r1)
	  addi      r3, r3, 0x3B10
	  crclr     6, 0x6
	  bl        0x4150
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80025290
 * Size:	000060
 */
void JKRSolidHeap::do_freeAll()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  addi      r3, r31, 0x18
	  bl        0xCA8C0
	  mr        r3, r31
	  bl        -0x1BD0
	  lwz       r4, 0x38(r31)
	  li        r0, 0
	  addi      r3, r31, 0x18
	  stw       r4, 0x6C(r31)
	  lwz       r4, 0x30(r31)
	  stw       r4, 0x70(r31)
	  lwz       r4, 0x34(r31)
	  stw       r4, 0x74(r31)
	  stw       r0, 0x78(r31)
	  bl        0xCA96C
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800252F0
 * Size:	00008C
 */
void JKRSolidHeap::do_freeTail()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  addi      r3, r31, 0x18
	  bl        0xCA860
	  lwz       r4, 0x74(r31)
	  lwz       r5, 0x34(r31)
	  cmplw     r4, r5
	  beq-      .loc_0x34
	  mr        r3, r31
	  bl        -0x1650

	.loc_0x34:
	  lwz       r3, 0x74(r31)
	  lwz       r0, 0x34(r31)
	  lwz       r4, 0x6C(r31)
	  sub       r0, r0, r3
	  add       r0, r4, r0
	  stw       r0, 0x6C(r31)
	  lwz       r0, 0x34(r31)
	  stw       r0, 0x74(r31)
	  lwz       r3, 0x78(r31)
	  b         .loc_0x68

	.loc_0x5C:
	  lwz       r0, 0x34(r31)
	  stw       r0, 0xC(r3)
	  lwz       r3, 0x10(r3)

	.loc_0x68:
	  cmplwi    r3, 0
	  bne+      .loc_0x5C
	  addi      r3, r31, 0x18
	  bl        0xCA8E0
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8002537C
 * Size:	000004
 */
void JKRSolidHeap::do_fillFreeArea() { }

/*
 * --INFO--
 * Address:	80025380
 * Size:	000030
 */
void JKRSolidHeap::do_resize(void*, unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r3, 0x8047
	  stw       r0, 0x14(r1)
	  addi      r3, r3, 0x3B38
	  crclr     6, 0x6
	  bl        0x4034
	  lwz       r0, 0x14(r1)
	  li        r3, -0x1
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800253B0
 * Size:	000030
 */
void JKRSolidHeap::do_getSize(void*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r3, 0x8047
	  stw       r0, 0x14(r1)
	  addi      r3, r3, 0x3B68
	  crclr     6, 0x6
	  bl        0x4004
	  lwz       r0, 0x14(r1)
	  li        r3, -0x1
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800253E0
 * Size:	00008C
 */
void JKRSolidHeap::check()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  addi      r3, r30, 0x18
	  bl        0xCA76C
	  lwz       r5, 0x30(r30)
	  li        r31, 0x1
	  lwz       r4, 0x70(r30)
	  lwz       r3, 0x74(r30)
	  lwz       r0, 0x34(r30)
	  sub       r5, r4, r5
	  lwz       r6, 0x6C(r30)
	  sub       r0, r0, r3
	  lwz       r4, 0x38(r30)
	  add       r5, r5, r0
	  add       r5, r6, r5
	  cmplw     r5, r4
	  beq-      .loc_0x68
	  lis       r3, 0x8047
	  li        r31, 0
	  addi      r3, r3, 0x3B98
	  crclr     6, 0x6
	  bl        0x3F88

	.loc_0x68:
	  addi      r3, r30, 0x18
	  bl        0xCA7F8
	  lwz       r0, 0x14(r1)
	  mr        r3, r31
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8002546C
 * Size:	000104
 */
void JKRSolidHeap::dump()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  lis       r4, 0x8047
	  stw       r0, 0x34(r1)
	  stw       r31, 0x2C(r1)
	  addi      r31, r4, 0x3AA8
	  stw       r30, 0x28(r1)
	  stw       r29, 0x24(r1)
	  stw       r28, 0x20(r1)
	  mr        r28, r3
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  mr        r0, r3
	  addi      r3, r28, 0x18
	  mr        r30, r0
	  bl        0xCA6B8
	  lwz       r4, 0x30(r28)
	  addi      r3, r31, 0x124
	  lwz       r5, 0x70(r28)
	  lwz       r6, 0x74(r28)
	  lwz       r0, 0x34(r28)
	  sub       r5, r5, r4
	  sub       r0, r0, r6
	  add       r29, r5, r0
	  crclr     6, 0x6
	  bl        0x3DEC
	  lwz       r4, 0x74(r28)
	  addi      r3, r31, 0x138
	  lwz       r0, 0x34(r28)
	  sub       r5, r0, r4
	  crclr     6, 0x6
	  bl        0x3DD4
	  lis       r0, 0x4330
	  xoris     r3, r29, 0x8000
	  lwz       r5, 0x38(r28)
	  mr        r4, r29
	  stw       r3, 0xC(r1)
	  addi      r3, r31, 0x14C
	  lfd       f2, -0x7E20(r2)
	  stw       r0, 0x8(r1)
	  lfd       f1, -0x7E18(r2)
	  lfd       f0, 0x8(r1)
	  stw       r5, 0x14(r1)
	  fsubs     f2, f0, f2
	  lfs       f3, -0x7E28(r2)
	  stw       r0, 0x10(r1)
	  lfd       f0, 0x10(r1)
	  fsubs     f0, f0, f1
	  fdivs     f0, f2, f0
	  fmuls     f1, f3, f0
	  crset     6, 0x6
	  bl        0x3D84
	  addi      r3, r28, 0x18
	  bl        0xCA6FC
	  lwz       r0, 0x34(r1)
	  mr        r3, r30
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  lwz       r29, 0x24(r1)
	  lwz       r28, 0x20(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80025570
 * Size:	00005C
 */
void JKRSolidHeap::state_register(JKRHeap::TState*, unsigned long) const
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  stw       r5, 0x14(r4)
	  bl        -0x1DB0
	  lwz       r0, 0x38(r30)
	  sub       r0, r0, r3
	  stw       r0, 0x0(r31)
	  lwz       r0, 0x74(r30)
	  lwz       r3, 0x70(r30)
	  mulli     r0, r0, 0x3
	  add       r3, r3, r0
	  stw       r3, 0x4(r31)
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800255CC
 * Size:	000030
 */
void JKRSolidHeap::state_compare(const JKRHeap::TState&,
                                 const JKRHeap::TState&) const
{
	/*
	.loc_0x0:
	  lwz       r6, 0x4(r4)
	  li        r3, 0x1
	  lwz       r0, 0x4(r5)
	  cmplw     r6, r0
	  beq-      .loc_0x18
	  li        r3, 0

	.loc_0x18:
	  lwz       r4, 0x0(r4)
	  lwz       r0, 0x0(r5)
	  cmplw     r4, r0
	  beqlr-
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800255FC
 * Size:	00000C
 */
void JKRSolidHeap::getHeapType()
{
	/*
	.loc_0x0:
	  lis       r3, 0x534C
	  addi      r3, r3, 0x4944
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80025608
 * Size:	000008
 */
void JKRSolidHeap::do_getFreeSize()
{
	/*
	.loc_0x0:
	  lwz       r3, 0x6C(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80025610
 * Size:	000008
 */
void JKRSolidHeap::do_getMaxFreeBlock()
{
	/*
	.loc_0x0:
	  lwz       r3, 0x70(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80025618
 * Size:	000020
 */
void JKRSolidHeap::do_getTotalFreeSize()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        -0x1E70
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}
