#include "types.h"

/*
 * --INFO--
 * Address:	800083A4
 * Size:	000044
 */
JMessage::TControl::TControl(void)
{
	/*
	.loc_0x0:
	  lis       r5, 0x804A
	  lis       r4, 0x1
	  subi      r0, r5, 0x1BA8
	  li        r5, 0
	  stw       r0, 0x0(r3)
	  subi      r0, r4, 0x1
	  stw       r5, 0x4(r3)
	  stw       r5, 0x8(r3)
	  sth       r0, 0xC(r3)
	  sth       r0, 0xE(r3)
	  stw       r5, 0x10(r3)
	  stw       r5, 0x14(r3)
	  stw       r5, 0x18(r3)
	  stw       r5, 0x1C(r3)
	  stw       r5, 0x20(r3)
	  stw       r5, 0x24(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800083E8
 * Size:	000048
 */
JMessage::TControl::~TControl(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr.       r31, r3
	  beq-      .loc_0x30
	  lis       r5, 0x804A
	  extsh.    r0, r4
	  subi      r0, r5, 0x1BA8
	  stw       r0, 0x0(r31)
	  ble-      .loc_0x30
	  bl        0x1BCA0

	.loc_0x30:
	  lwz       r0, 0x14(r1)
	  mr        r3, r31
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80008430
 * Size:	000068
 */
void JMessage::TControl::reset(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  li        r0, 0
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  stw       r0, 0x14(r3)
	  stw       r0, 0x18(r3)
	  stw       r0, 0x1C(r3)
	  stw       r0, 0x20(r3)
	  stw       r0, 0x24(r3)
	  lwz       r3, 0x4(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x40
	  li        r4, 0
	  bl        -0x1314

	.loc_0x40:
	  lwz       r3, 0x8(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x54
	  li        r4, 0
	  bl        -0x1328

	.loc_0x54:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80008498
 * Size:	000088
 */
void JMessage::TControl::update(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  li        r3, 0
	  lwz       r0, 0x18(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x34
	  lwz       r0, 0x4(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x34
	  li        r3, 0x1

	.loc_0x34:
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x44
	  li        r3, 0
	  b         .loc_0x74

	.loc_0x44:
	  lwz       r3, 0x4(r31)
	  li        r4, 0
	  bl        -0xC60
	  stw       r3, 0x1C(r31)
	  lwz       r0, 0x1C(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x70
	  li        r0, 0
	  li        r3, 0
	  stw       r0, 0x18(r31)
	  b         .loc_0x74

	.loc_0x70:
	  li        r3, 0x1

	.loc_0x74:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80008520
 * Size:	00015C
 */
void JMessage::TControl::render(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  li        r3, 0
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  stw       r28, 0x10(r1)
	  lwz       r28, 0x20(r31)
	  cmplwi    r28, 0
	  beq-      .loc_0x40
	  lwz       r0, 0x8(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x40
	  li        r3, 0x1

	.loc_0x40:
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x13C
	  lwz       r30, 0x8(r31)
	  mr        r4, r28
	  lwz       r29, 0x14(r31)
	  lwz       r0, 0x10(r31)
	  mr        r3, r30
	  stw       r0, 0x8(r30)
	  bl        -0x1428
	  mr        r3, r30
	  mr        r4, r29
	  lwz       r12, 0x0(r30)
	  mr        r5, r28
	  lwz       r12, 0x30(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x8(r31)
	  addi      r5, r31, 0x28
	  lwz       r0, 0x24(r31)
	  addi      r6, r3, 0x14
	  stw       r0, 0x10(r3)
	  lwz       r0, 0x24(r31)
	  rlwinm    r0,r0,2,0,29
	  add       r3, r31, r0
	  addi      r4, r3, 0x28
	  addi      r3, r4, 0x3
	  sub       r3, r3, r5
	  cmplw     r5, r4
	  rlwinm    r3,r3,30,2,31
	  bge-      .loc_0x130
	  rlwinm.   r0,r3,29,3,31
	  mtctr     r0
	  beq-      .loc_0x118

	.loc_0xC4:
	  lwz       r0, 0x0(r5)
	  stw       r0, 0x0(r6)
	  lwz       r0, 0x4(r5)
	  stw       r0, 0x4(r6)
	  lwz       r0, 0x8(r5)
	  stw       r0, 0x8(r6)
	  lwz       r0, 0xC(r5)
	  stw       r0, 0xC(r6)
	  lwz       r0, 0x10(r5)
	  stw       r0, 0x10(r6)
	  lwz       r0, 0x14(r5)
	  stw       r0, 0x14(r6)
	  lwz       r0, 0x18(r5)
	  stw       r0, 0x18(r6)
	  lwz       r0, 0x1C(r5)
	  addi      r5, r5, 0x20
	  stw       r0, 0x1C(r6)
	  addi      r6, r6, 0x20
	  bdnz+     .loc_0xC4
	  andi.     r3, r3, 0x7
	  beq-      .loc_0x130

	.loc_0x118:
	  mtctr     r3

	.loc_0x11C:
	  lwz       r0, 0x0(r5)
	  addi      r5, r5, 0x4
	  stw       r0, 0x0(r6)
	  addi      r6, r6, 0x4
	  bdnz+     .loc_0x11C

	.loc_0x130:
	  lwz       r3, 0x8(r31)
	  lwz       r4, 0x1C(r31)
	  bl        -0x500

	.loc_0x13C:
	  lwz       r0, 0x24(r1)
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
 * Address:	8000867C
 * Size:	0000DC
 */
void JMessage::TControl::setMessageCode(unsigned short, unsigned short)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  mr        r6, r5
	  stw       r0, 0x24(r1)
	  mr        r0, r4
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  lwz       r4, 0x4(r3)
	  cmplwi    r4, 0
	  beq-      .loc_0x38
	  b         .loc_0x3C

	.loc_0x38:
	  lwz       r4, 0x8(r28)

	.loc_0x3C:
	  mr        r3, r28
	  mr        r5, r0
	  bl        0x194
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x58
	  li        r3, 0
	  b         .loc_0xBC

	.loc_0x58:
	  lwz       r29, 0x18(r28)
	  li        r3, 0
	  cmplwi    r29, 0
	  beq-      .loc_0x78
	  lwz       r0, 0x4(r28)
	  cmplwi    r0, 0
	  beq-      .loc_0x78
	  li        r3, 0x1

	.loc_0x78:
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xB8
	  lwz       r31, 0x4(r28)
	  mr        r4, r29
	  lwz       r30, 0x14(r28)
	  lwz       r0, 0x10(r28)
	  mr        r3, r31
	  stw       r0, 0x8(r31)
	  bl        -0x15BC
	  mr        r3, r31
	  mr        r4, r30
	  lwz       r12, 0x0(r31)
	  mr        r5, r29
	  lwz       r12, 0x30(r12)
	  mtctr     r12
	  bctrl

	.loc_0xB8:
	  li        r3, 0x1

	.loc_0xBC:
	  lwz       r0, 0x24(r1)
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
 * Address:	80008758
 * Size:	0000FC
 */
void JMessage::TControl::setMessageID(unsigned long, unsigned long, bool*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  lwz       r30, 0x4(r3)
	  cmplwi    r30, 0
	  beq-      .loc_0x30
	  b         .loc_0x34

	.loc_0x30:
	  lwz       r30, 0x8(r28)

	.loc_0x34:
	  mr        r3, r30
	  bl        -0x17AC
	  mr        r6, r3
	  addis     r0, r6, 0x1
	  cmplwi    r0, 0xFFFF
	  bne-      .loc_0x54
	  li        r3, 0
	  b         .loc_0xDC

	.loc_0x54:
	  rlwinm    r5,r6,16,16,31
	  mr        r3, r28
	  mr        r4, r30
	  rlwinm    r6,r6,0,16,31
	  bl        .loc_0xFC
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x78
	  li        r3, 0
	  b         .loc_0xDC

	.loc_0x78:
	  lwz       r29, 0x18(r28)
	  li        r3, 0
	  cmplwi    r29, 0
	  beq-      .loc_0x98
	  lwz       r0, 0x4(r28)
	  cmplwi    r0, 0
	  beq-      .loc_0x98
	  li        r3, 0x1

	.loc_0x98:
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xD8
	  lwz       r31, 0x4(r28)
	  mr        r4, r29
	  lwz       r30, 0x14(r28)
	  lwz       r0, 0x10(r28)
	  mr        r3, r31
	  stw       r0, 0x8(r31)
	  bl        -0x16B8
	  mr        r3, r31
	  mr        r4, r30
	  lwz       r12, 0x0(r31)
	  mr        r5, r29
	  lwz       r12, 0x30(r12)
	  mtctr     r12
	  bctrl

	.loc_0xD8:
	  li        r3, 0x1

	.loc_0xDC:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  lwz       r28, 0x10(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr

	.loc_0xFC:
	*/
}

/*
 * --INFO--
 * Address:	80008854
 * Size:	0000E8
 */
void JMessage::TControl::setMessageCode_inSequence_(
    (JMessage::TProcessor const*, unsigned short, unsigned short))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  stw       r30, 0x18(r1)
	  mr        r30, r6
	  stw       r29, 0x14(r1)
	  mr        r29, r5
	  stw       r28, 0x10(r1)
	  mr        r28, r4
	  mr        r3, r28
	  mr        r4, r29
	  bl        -0x1924
	  cmplwi    r3, 0
	  bne-      .loc_0x48
	  li        r3, 0
	  b         .loc_0x74

	.loc_0x48:
	  lwz       r3, 0xC(r3)
	  rlwinm    r4,r30,0,16,31
	  lhz       r0, 0x8(r3)
	  cmplw     r4, r0
	  bge-      .loc_0x70
	  lhz       r0, 0xA(r3)
	  mullw     r0, r4, r0
	  add       r3, r3, r0
	  addi      r3, r3, 0x10
	  b         .loc_0x74

	.loc_0x70:
	  li        r3, 0

	.loc_0x74:
	  stw       r3, 0x14(r31)
	  lwz       r0, 0x14(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x8C
	  li        r3, 0
	  b         .loc_0xC8

	.loc_0x8C:
	  sth       r29, 0xC(r31)
	  li        r0, 0
	  lwz       r4, 0x8(r28)
	  li        r3, 0x1
	  sth       r30, 0xE(r31)
	  stw       r4, 0x10(r31)
	  lwz       r5, 0x10(r31)
	  lwz       r4, 0x14(r31)
	  lwz       r5, 0x10(r5)
	  lwz       r4, 0x0(r4)
	  add       r4, r5, r4
	  stw       r4, 0x18(r31)
	  lwz       r4, 0x18(r31)
	  stw       r4, 0x20(r31)
	  stw       r0, 0x24(r31)

	.loc_0xC8:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  lwz       r28, 0x10(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}
