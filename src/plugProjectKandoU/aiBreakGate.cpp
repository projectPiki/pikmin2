#include "types.h"

/*
 * --INFO--
 * Address:	801D04E8
 * Size:	0000F8
 */
void PikiAI::ActBreakGate::ActBreakGate(Game::Piki*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  extsh.    r0, r4
	  stw       r31, 0xC(r1)
	  mr        r31, r5
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  beq-      .loc_0x38
	  addi      r0, r30, 0x34
	  lis       r3, 0x804B
	  stw       r0, 0xC(r30)
	  subi      r0, r3, 0x5994
	  stw       r0, 0x34(r30)

	.loc_0x38:
	  mr        r3, r30
	  mr        r4, r31
	  bl        -0x39B10
	  lis       r3, 0x804B
	  addi      r0, r30, 0x34
	  addi      r4, r3, 0x7914
	  li        r3, 0x2C
	  stw       r4, 0x0(r30)
	  addi      r5, r4, 0x40
	  lwz       r4, 0xC(r30)
	  stw       r5, 0x0(r4)
	  lwz       r4, 0xC(r30)
	  sub       r0, r0, r4
	  stw       r0, 0x4(r4)
	  bl        -0x1AC6B4
	  mr.       r0, r3
	  beq-      .loc_0x8C
	  mr        r5, r31
	  li        r4, 0x1
	  bl        -0x348B4
	  mr        r0, r3

	.loc_0x8C:
	  stw       r0, 0x18(r30)
	  li        r3, 0x1C
	  bl        -0x1AC6D8
	  mr.       r0, r3
	  beq-      .loc_0xAC
	  mr        r4, r31
	  bl        -0x392B0
	  mr        r0, r3

	.loc_0xAC:
	  stw       r0, 0x1C(r30)
	  li        r3, 0x10
	  bl        -0x1AC6F8
	  mr.       r0, r3
	  beq-      .loc_0xCC
	  mr        r4, r31
	  bl        -0x33998
	  mr        r0, r3

	.loc_0xCC:
	  lis       r3, 0x8048
	  stw       r0, 0x20(r30)
	  addi      r0, r3, 0x470
	  mr        r3, r30
	  stw       r0, 0x8(r30)
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
 * Address:	801D05E0
 * Size:	0000C8
 */
void PikiAI::ActBreakGate::init(PikiAI::ActionArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  li        r30, 0
	  stw       r29, 0x14(r1)
	  mr.       r29, r4
	  lis       r4, 0x8048
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  addi      r31, r4, 0x460
	  beq-      .loc_0x64
	  mr        r3, r29
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  addi      r3, r31, 0x1C
	  bl        -0x105F70
	  cntlzw    r0, r3
	  rlwinm.   r0,r0,27,24,31
	  beq-      .loc_0x64
	  li        r30, 0x1

	.loc_0x64:
	  rlwinm.   r0,r30,0,24,31
	  bne-      .loc_0x80
	  addi      r3, r31, 0x2C
	  addi      r5, r31, 0x3C
	  li        r4, 0x62
	  crclr     6, 0x6
	  bl        -0x1A601C

	.loc_0x80:
	  lis       r3, 0x8051
	  lwz       r4, 0x4(r28)
	  addi      r3, r3, 0x250C
	  bl        0xCFC
	  lwz       r4, 0x4(r29)
	  li        r0, 0
	  mr        r3, r28
	  stw       r4, 0x10(r28)
	  stb       r0, 0x24(r28)
	  bl        .loc_0xC8
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  lwz       r28, 0x10(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr

	.loc_0xC8:
	*/
}

/*
 * --INFO--
 * Address:	801D06A8
 * Size:	000068
 */
void PikiAI::ActBreakGate::initFollow()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  addi      r4, r1, 0x8
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  lis       r3, 0x804B
	  lwz       r5, 0x10(r31)
	  addi      r0, r3, 0x530
	  lis       r3, 0x804B
	  stw       r0, 0x8(r1)
	  addi      r0, r3, 0x7908
	  stw       r0, 0x8(r1)
	  stw       r5, 0xC(r1)
	  lwz       r3, 0x20(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  li        r0, 0x1
	  sth       r0, 0x14(r31)
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801D0710
 * Size:	000498
 */
void PikiAI::ActBreakGate::exec()
{
	/*
	.loc_0x0:
	  stwu      r1, -0xB0(r1)
	  mflr      r0
	  stw       r0, 0xB4(r1)
	  stw       r31, 0xAC(r1)
	  mr        r31, r3
	  stw       r30, 0xA8(r1)
	  lwz       r3, 0x10(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x3C
	  li        r3, 0
	  b         .loc_0x480

	.loc_0x3C:
	  lhz       r0, 0x14(r31)
	  cmpwi     r0, 0x1
	  beq-      .loc_0x26C
	  bge-      .loc_0x58
	  cmpwi     r0, 0
	  bge-      .loc_0x374
	  b         .loc_0x47C

	.loc_0x58:
	  cmpwi     r0, 0x3
	  bge-      .loc_0x47C
	  lwz       r3, 0x20(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x18(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  cmpwi     r3, 0
	  bne-      .loc_0x178
	  lwz       r3, 0x10(r31)
	  li        r30, 0x1
	  lbz       r0, 0x27C(r3)
	  cmplwi    r0, 0x1
	  bne-      .loc_0xAC
	  li        r30, 0x2
	  b         .loc_0xBC

	.loc_0xAC:
	  lbz       r0, 0x218(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0xBC
	  li        r30, 0x3

	.loc_0xBC:
	  lbz       r0, 0x24(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x11C
	  lwz       r3, 0x4(r31)
	  bl        -0x872F0
	  lwz       r5, 0x10(r31)
	  lis       r3, 0x804B
	  addi      r0, r3, 0x530
	  addi      r4, r1, 0x80
	  lis       r3, 0x804B
	  stw       r0, 0x80(r1)
	  addi      r3, r3, 0x4EA4
	  li        r0, -0x1
	  stw       r3, 0x80(r1)
	  stfs      f1, 0x84(r1)
	  stw       r5, 0x88(r1)
	  stw       r0, 0x8C(r1)
	  stb       r30, 0x90(r1)
	  lwz       r3, 0x18(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x16C

	.loc_0x11C:
	  lwz       r3, 0x4(r31)
	  bl        -0x87344
	  lwz       r5, 0x10(r31)
	  lis       r3, 0x804B
	  addi      r0, r3, 0x530
	  addi      r4, r1, 0x94
	  lis       r3, 0x804B
	  stw       r0, 0x94(r1)
	  addi      r3, r3, 0x4EA4
	  li        r0, 0x19
	  stw       r3, 0x94(r1)
	  stfs      f1, 0x98(r1)
	  stw       r5, 0x9C(r1)
	  stw       r0, 0xA0(r1)
	  stb       r30, 0xA4(r1)
	  lwz       r3, 0x18(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl

	.loc_0x16C:
	  li        r0, 0x2
	  sth       r0, 0x14(r31)
	  b         .loc_0x47C

	.loc_0x178:
	  cmpwi     r3, 0x2
	  bne-      .loc_0x480
	  lwz       r3, 0x10(r31)
	  li        r30, 0x1
	  lbz       r0, 0x27C(r3)
	  cmplwi    r0, 0x1
	  bne-      .loc_0x19C
	  li        r30, 0x2
	  b         .loc_0x1AC

	.loc_0x19C:
	  lbz       r0, 0x218(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x1AC
	  li        r30, 0x3

	.loc_0x1AC:
	  lbz       r0, 0x24(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x20C
	  lwz       r3, 0x4(r31)
	  bl        -0x873E0
	  lwz       r5, 0x10(r31)
	  lis       r3, 0x804B
	  addi      r0, r3, 0x530
	  addi      r4, r1, 0x58
	  lis       r3, 0x804B
	  stw       r0, 0x58(r1)
	  addi      r3, r3, 0x4EA4
	  li        r0, -0x1
	  stw       r3, 0x58(r1)
	  stfs      f1, 0x5C(r1)
	  stw       r5, 0x60(r1)
	  stw       r0, 0x64(r1)
	  stb       r30, 0x68(r1)
	  lwz       r3, 0x18(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x25C

	.loc_0x20C:
	  lwz       r3, 0x4(r31)
	  bl        -0x87434
	  lwz       r5, 0x10(r31)
	  lis       r3, 0x804B
	  addi      r0, r3, 0x530
	  addi      r4, r1, 0x6C
	  lis       r3, 0x804B
	  stw       r0, 0x6C(r1)
	  addi      r3, r3, 0x4EA4
	  li        r0, 0x19
	  stw       r3, 0x6C(r1)
	  stfs      f1, 0x70(r1)
	  stw       r5, 0x74(r1)
	  stw       r0, 0x78(r1)
	  stb       r30, 0x7C(r1)
	  lwz       r3, 0x18(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl

	.loc_0x25C:
	  li        r0, 0x2
	  sth       r0, 0x14(r31)
	  b         .loc_0x47C
	  b         .loc_0x480

	.loc_0x26C:
	  lwz       r3, 0x20(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  cmpwi     r3, 0
	  bne-      .loc_0x480
	  lwz       r3, 0x10(r31)
	  li        r30, 0x1
	  lbz       r0, 0x27C(r3)
	  cmplwi    r0, 0x1
	  bne-      .loc_0x2A4
	  li        r30, 0x2
	  b         .loc_0x2B4

	.loc_0x2A4:
	  lbz       r0, 0x218(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x2B4
	  li        r30, 0x3

	.loc_0x2B4:
	  lbz       r0, 0x24(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x314
	  lwz       r3, 0x4(r31)
	  bl        -0x874E8
	  lwz       r5, 0x10(r31)
	  lis       r3, 0x804B
	  addi      r0, r3, 0x530
	  addi      r4, r1, 0x30
	  lis       r3, 0x804B
	  stw       r0, 0x30(r1)
	  addi      r3, r3, 0x4EA4
	  li        r0, -0x1
	  stw       r3, 0x30(r1)
	  stfs      f1, 0x34(r1)
	  stw       r5, 0x38(r1)
	  stw       r0, 0x3C(r1)
	  stb       r30, 0x40(r1)
	  lwz       r3, 0x18(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x364

	.loc_0x314:
	  lwz       r3, 0x4(r31)
	  bl        -0x8753C
	  lwz       r5, 0x10(r31)
	  lis       r3, 0x804B
	  addi      r0, r3, 0x530
	  addi      r4, r1, 0x44
	  lis       r3, 0x804B
	  stw       r0, 0x44(r1)
	  addi      r3, r3, 0x4EA4
	  li        r0, 0x19
	  stw       r3, 0x44(r1)
	  stfs      f1, 0x48(r1)
	  stw       r5, 0x4C(r1)
	  stw       r0, 0x50(r1)
	  stb       r30, 0x54(r1)
	  lwz       r3, 0x18(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl

	.loc_0x364:
	  li        r0, 0x2
	  sth       r0, 0x14(r31)
	  b         .loc_0x47C
	  b         .loc_0x480

	.loc_0x374:
	  lwz       r3, 0x1C(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  cmpwi     r3, 0
	  bne-      .loc_0x480
	  lwz       r3, 0x10(r31)
	  li        r30, 0x1
	  lbz       r0, 0x27C(r3)
	  cmplwi    r0, 0x1
	  bne-      .loc_0x3AC
	  li        r30, 0x2
	  b         .loc_0x3BC

	.loc_0x3AC:
	  lbz       r0, 0x218(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x3BC
	  li        r30, 0x3

	.loc_0x3BC:
	  lbz       r0, 0x24(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x41C
	  lwz       r3, 0x4(r31)
	  bl        -0x875F0
	  lwz       r5, 0x10(r31)
	  lis       r3, 0x804B
	  addi      r0, r3, 0x530
	  addi      r4, r1, 0x8
	  lis       r3, 0x804B
	  stw       r0, 0x8(r1)
	  addi      r3, r3, 0x4EA4
	  li        r0, -0x1
	  stw       r3, 0x8(r1)
	  stfs      f1, 0xC(r1)
	  stw       r5, 0x10(r1)
	  stw       r0, 0x14(r1)
	  stb       r30, 0x18(r1)
	  lwz       r3, 0x18(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x46C

	.loc_0x41C:
	  lwz       r3, 0x4(r31)
	  bl        -0x87644
	  lwz       r5, 0x10(r31)
	  lis       r3, 0x804B
	  addi      r0, r3, 0x530
	  addi      r4, r1, 0x1C
	  lis       r3, 0x804B
	  stw       r0, 0x1C(r1)
	  addi      r3, r3, 0x4EA4
	  li        r0, 0x19
	  stw       r3, 0x1C(r1)
	  stfs      f1, 0x20(r1)
	  stw       r5, 0x24(r1)
	  stw       r0, 0x28(r1)
	  stb       r30, 0x2C(r1)
	  lwz       r3, 0x18(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl

	.loc_0x46C:
	  li        r0, 0x2
	  sth       r0, 0x14(r31)
	  b         .loc_0x47C
	  b         .loc_0x480

	.loc_0x47C:
	  li        r3, 0x1

	.loc_0x480:
	  lwz       r0, 0xB4(r1)
	  lwz       r31, 0xAC(r1)
	  lwz       r30, 0xA8(r1)
	  mtlr      r0
	  addi      r1, r1, 0xB0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801D0BA8
 * Size:	00005C
 */
void PikiAI::ActBreakGate::cleanup()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lis       r3, 0x8051
	  lwz       r4, 0x4(r31)
	  addi      r3, r3, 0x250C
	  bl        0x84C
	  lhz       r0, 0x14(r31)
	  cmpwi     r0, 0x2
	  beq-      .loc_0x34
	  b         .loc_0x48

	.loc_0x34:
	  lwz       r3, 0x18(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl

	.loc_0x48:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801D0C04
 * Size:	000044
 */
void PikiAI::ActBreakGate::emotion_success()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r5, 0x13
	  stw       r0, 0x14(r1)
	  li        r0, 0x1
	  addi      r6, r1, 0x8
	  sth       r0, 0x8(r1)
	  lwz       r4, 0x4(r3)
	  lwz       r3, 0x28C(r4)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801D0C48
 * Size:	000144
 */
void PikiAI::ActBreakGate::platCallback(Game::Piki*, Game::PlatEvent&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  lfs       f0, -0x4D30(r2)
	  stw       r0, 0x44(r1)
	  stw       r31, 0x3C(r1)
	  mr        r31, r3
	  stw       r30, 0x38(r1)
	  lfs       f1, 0x8(r5)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x34
	  li        r0, 0x1
	  stb       r0, 0x24(r31)
	  b         .loc_0x3C

	.loc_0x34:
	  li        r0, 0
	  stb       r0, 0x24(r31)

	.loc_0x3C:
	  lhz       r0, 0x14(r31)
	  cmplwi    r0, 0x1
	  bne-      .loc_0x12C
	  lwz       r3, 0x10(r31)
	  li        r30, 0x1
	  lbz       r0, 0x27C(r3)
	  cmplwi    r0, 0x1
	  bne-      .loc_0x64
	  li        r30, 0x2
	  b         .loc_0x74

	.loc_0x64:
	  lbz       r0, 0x218(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x74
	  li        r30, 0x3

	.loc_0x74:
	  lbz       r0, 0x24(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0xD4
	  lwz       r3, 0x4(r31)
	  bl        -0x877E0
	  lwz       r5, 0x10(r31)
	  lis       r3, 0x804B
	  addi      r0, r3, 0x530
	  addi      r4, r1, 0x8
	  lis       r3, 0x804B
	  stw       r0, 0x8(r1)
	  addi      r3, r3, 0x4EA4
	  li        r0, -0x1
	  stw       r3, 0x8(r1)
	  stfs      f1, 0xC(r1)
	  stw       r5, 0x10(r1)
	  stw       r0, 0x14(r1)
	  stb       r30, 0x18(r1)
	  lwz       r3, 0x18(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x124

	.loc_0xD4:
	  lwz       r3, 0x4(r31)
	  bl        -0x87834
	  lwz       r5, 0x10(r31)
	  lis       r3, 0x804B
	  addi      r0, r3, 0x530
	  addi      r4, r1, 0x1C
	  lis       r3, 0x804B
	  stw       r0, 0x1C(r1)
	  addi      r3, r3, 0x4EA4
	  li        r0, 0x19
	  stw       r3, 0x1C(r1)
	  stfs      f1, 0x20(r1)
	  stw       r5, 0x24(r1)
	  stw       r0, 0x28(r1)
	  stb       r30, 0x2C(r1)
	  lwz       r3, 0x18(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl

	.loc_0x124:
	  li        r0, 0x2
	  sth       r0, 0x14(r31)

	.loc_0x12C:
	  lwz       r0, 0x44(r1)
	  lwz       r31, 0x3C(r1)
	  lwz       r30, 0x38(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801D0D8C
 * Size:	000004
 */
void PikiAI::ActBreakGate::collisionCallback(Game::Piki*, Game::CollEvent&) { }

/*
 * --INFO--
 * Address:	801D0D90
 * Size:	000004
 */
void PikiAI::ActBreakGate::bounceCallback(Game::Piki*, Sys::Triangle*) { }

/*
 * --INFO--
 * Address:	801D0D94
 * Size:	000004
 */
void PikiAI::ActBreakGate::onKeyEvent(const SysShape::KeyEvent&) { }

/*
 * --INFO--
 * Address:	801D0D98
 * Size:	00000C
 */
void PikiAI::FollowVectorFieldActionArg::getName()
{
	/*
	.loc_0x0:
	  lis       r3, 0x8048
	  addi      r3, r3, 0x4E0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801D0DA4
 * Size:	000014
 */
void PikiAI::ActBreakGate::@52 @4 @onKeyEvent(const SysShape::KeyEvent&)
{
	/*
	.loc_0x0:
	  li        r11, 0x4
	  lwzx      r11, r3, r11
	  add       r3, r3, r11
	  subi      r3, r3, 0x34
	  b         -0x20
	*/
}
