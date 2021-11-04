#include "types.h"

/*
 * --INFO--
 * Address:	........
 * Size:	0000E4
 */
void _Print(char*, ...)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80383100
 * Size:	000038
 */
void Game::UmiMushi::eyeScaleCallBack((J3DJoint*, int))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  cmpwi     r4, 0
	  stw       r0, 0x14(r1)
	  bne-      .loc_0x24
	  lwz       r3, -0x66B8(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x24
	  bl        0x3FA0

	.loc_0x24:
	  lwz       r0, 0x14(r1)
	  li        r3, 0x1
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80383138
 * Size:	000038
 */
void Game::UmiMushi::weakScaleCallBack((J3DJoint*, int))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  cmpwi     r4, 0
	  stw       r0, 0x14(r1)
	  bne-      .loc_0x24
	  lwz       r3, -0x66B8(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x24
	  bl        0x4230

	.loc_0x24:
	  lwz       r0, 0x14(r1)
	  li        r3, 0x1
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80383170
 * Size:	0000B4
 */
void Game::UmiMushi::Obj::setParameters(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stfd      f31, 0x10(r1)
	  psq_st    f31,0x18(r1),0,0
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x2805B4
	  lwz       r0, 0x39C(r31)
	  lfs       f31, 0xA30(r2)
	  cmpwi     r0, 0x65
	  bne-      .loc_0x34
	  lfs       f31, 0xA34(r2)

	.loc_0x34:
	  stfs      f31, 0x1F8(r31)
	  fmr       f1, f31
	  stfs      f31, 0x168(r31)
	  stfs      f31, 0x16C(r31)
	  stfs      f31, 0x170(r31)
	  lwz       r3, 0x114(r31)
	  lwz       r3, 0x0(r3)
	  bl        -0x24B3B4
	  lwz       r3, 0xC0(r31)
	  lfs       f0, 0x21C(r3)
	  fmuls     f0, f31, f0
	  stfs      f0, 0x27C(r31)
	  lwz       r0, 0x39C(r31)
	  cmpwi     r0, 0x65
	  bne-      .loc_0x7C
	  lfs       f0, 0xA38(r2)
	  lwz       r3, 0xC0(r31)
	  stfs      f0, 0x1A4(r3)

	.loc_0x7C:
	  lis       r4, 0x7765
	  lwz       r3, 0x114(r31)
	  addi      r4, r4, 0x616B
	  bl        -0x24D3B4
	  lwz       r4, 0xC0(r31)
	  lfs       f1, 0xA34(r4)
	  bl        -0x24B3F8
	  psq_l     f31,0x18(r1),0,0
	  lwz       r0, 0x24(r1)
	  lfd       f31, 0x10(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80383224
 * Size:	000030
 */
void Game::UmiMushi::Obj::getBodyRadius(void)
{
	/*
	.loc_0x0:
	  lwz       r0, 0x1E0(r3)
	  rlwinm.   r0,r0,0,22,22
	  beq-      .loc_0x28
	  lwz       r0, 0x39C(r3)
	  cmpwi     r0, 0x65
	  bne-      .loc_0x20
	  lfs       f1, 0xA38(r2)
	  blr

	.loc_0x20:
	  lfs       f1, 0xA3C(r2)
	  blr

	.loc_0x28:
	  lfs       f1, 0xA40(r2)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80383254
 * Size:	000020
 */
void birth__Q34Game8UmiMushi3ObjFR10Vector3<float> f(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        -0x280860
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80383274
 * Size:	0005A8
 */
void Game::UmiMushi::Obj::onInit((Game::CreatureInitArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  lis       r5, 0x8049
	  stw       r0, 0x34(r1)
	  stmw      r27, 0x1C(r1)
	  mr        r30, r3
	  addi      r31, r5, 0x3AE8
	  bl        -0x281838
	  lwz       r0, 0x1E0(r30)
	  addi      r4, r31, 0xC
	  rlwinm    r0,r0,0,24,22
	  stw       r0, 0x1E0(r30)
	  lwz       r3, 0x174(r30)
	  bl        0xBBD3C
	  stw       r3, 0x2D4(r30)
	  lwz       r0, 0x2D4(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0x5C
	  addi      r3, r31, 0x18
	  addi      r5, r31, 0x28
	  li        r4, 0x7C
	  crclr     6, 0x6
	  bl        -0x358C8C

	.loc_0x5C:
	  li        r27, 0
	  lfs       f0, 0xA40(r2)
	  stw       r27, 0x2D8(r30)
	  li        r28, -0x1
	  li        r29, -0x19
	  li        r12, -0x64
	  lfs       f1, 0x198(r30)
	  li        r11, -0x1E
	  li        r10, 0x3C
	  li        r9, -0x73
	  stfs      f1, 0x2BC(r30)
	  li        r8, -0xB4
	  li        r7, 0x32
	  li        r3, -0x50
	  lfs       f1, 0x19C(r30)
	  li        r0, -0x4B
	  mr        r4, r30
	  li        r5, 0x1
	  stfs      f1, 0x2C0(r30)
	  li        r6, 0
	  lfs       f1, 0x1A0(r30)
	  stfs      f1, 0x2C4(r30)
	  stw       r27, 0x2E0(r30)
	  lfs       f1, 0x198(r30)
	  stfs      f1, 0x2E4(r30)
	  lfs       f1, 0x19C(r30)
	  stfs      f1, 0x2E8(r30)
	  lfs       f1, 0x1A0(r30)
	  stfs      f1, 0x2EC(r30)
	  stw       r27, 0x2F0(r30)
	  stw       r27, 0x2F4(r30)
	  stfs      f0, 0x2FC(r30)
	  stw       r27, 0x2D8(r30)
	  stb       r27, 0x2DC(r30)
	  stw       r27, 0x300(r30)
	  stw       r28, 0x2C8(r30)
	  sth       r29, 0x34C(r30)
	  sth       r12, 0x34E(r30)
	  sth       r11, 0x350(r30)
	  sth       r10, 0x324(r30)
	  sth       r9, 0x326(r30)
	  sth       r9, 0x328(r30)
	  sth       r27, 0x32C(r30)
	  sth       r8, 0x32E(r30)
	  sth       r8, 0x330(r30)
	  sth       r11, 0x334(r30)
	  sth       r11, 0x336(r30)
	  sth       r7, 0x338(r30)
	  sth       r3, 0x33C(r30)
	  sth       r3, 0x33E(r30)
	  sth       r27, 0x340(r30)
	  sth       r27, 0x344(r30)
	  sth       r29, 0x346(r30)
	  sth       r0, 0x348(r30)
	  lha       r0, 0x344(r30)
	  sth       r0, 0x31C(r30)
	  lha       r0, 0x346(r30)
	  sth       r0, 0x31E(r30)
	  lha       r0, 0x348(r30)
	  sth       r0, 0x320(r30)
	  lha       r0, 0x34A(r30)
	  sth       r0, 0x322(r30)
	  lha       r0, 0x344(r30)
	  sth       r0, 0x314(r30)
	  lha       r0, 0x346(r30)
	  sth       r0, 0x316(r30)
	  lha       r0, 0x348(r30)
	  sth       r0, 0x318(r30)
	  lha       r0, 0x34A(r30)
	  sth       r0, 0x31A(r30)
	  stw       r27, -0x66B8(r13)
	  lwz       r3, 0x398(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x354(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0x1AC
	  addi      r3, r31, 0x18
	  addi      r5, r31, 0x28
	  li        r4, 0x9D
	  crclr     6, 0x6
	  bl        -0x358DDC

	.loc_0x1AC:
	  lwz       r3, 0x354(r30)
	  lwz       r4, 0x180(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r4, 0x44(r4)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x358(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0x1E8
	  addi      r3, r31, 0x18
	  addi      r5, r31, 0x28
	  li        r4, 0xA0
	  crclr     6, 0x6
	  bl        -0x358E18

	.loc_0x1E8:
	  lwz       r3, 0x358(r30)
	  bl        -0x90918
	  lwz       r3, 0x174(r30)
	  lwz       r3, 0x8(r3)
	  lwz       r27, 0x4(r3)
	  cmplwi    r27, 0
	  bne-      .loc_0x218
	  addi      r3, r31, 0x18
	  addi      r5, r31, 0x28
	  li        r4, 0xA6
	  crclr     6, 0x6
	  bl        -0x358E48

	.loc_0x218:
	  lwz       r3, 0x64(r27)
	  addi      r4, r31, 0x34
	  bl        -0x354710
	  lwz       r4, 0x60(r27)
	  rlwinm    r0,r3,2,14,29
	  lwzx      r0, r4, r0
	  stw       r0, 0x310(r30)
	  lwz       r0, 0x310(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0x254
	  addi      r3, r31, 0x18
	  addi      r5, r31, 0x28
	  li        r4, 0xAB
	  crclr     6, 0x6
	  bl        -0x358E84

	.loc_0x254:
	  lwz       r0, 0x39C(r30)
	  cmpwi     r0, 0x47
	  bne-      .loc_0x2AC
	  lwz       r27, 0x28C(r30)
	  mr        r3, r27
	  lwz       r12, 0x28(r27)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  cmpwi     r3, 0x6
	  beq-      .loc_0x294
	  addi      r3, r31, 0x40
	  addi      r5, r31, 0x28
	  li        r4, 0x45A
	  crclr     6, 0x6
	  bl        -0x358EC4

	.loc_0x294:
	  mr        r3, r27
	  li        r4, 0
	  bl        0xDC4E0
	  li        r0, 0x1
	  stb       r0, 0x118(r27)
	  b         .loc_0x358

	.loc_0x2AC:
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x228(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0xC0(r30)
	  lfs       f0, 0xA44(r2)
	  lfs       f1, 0x984(r3)
	  stfs      f1, 0x200(r30)
	  stfs      f1, 0x204(r30)
	  stfs      f0, 0x35C(r30)
	  lwz       r0, 0x174(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0x2F8
	  addi      r3, r31, 0x18
	  addi      r5, r31, 0x28
	  li        r4, 0xBD
	  crclr     6, 0x6
	  bl        -0x358F28

	.loc_0x2F8:
	  lwz       r3, 0x174(r30)
	  addi      r4, r31, 0x58
	  lwz       r5, 0x8(r3)
	  lwz       r27, 0x4(r5)
	  bl        0xBBA38
	  sth       r3, 0x360(r30)
	  addi      r4, r31, 0x64
	  lwz       r3, 0x174(r30)
	  bl        0xBBA28
	  sth       r3, 0x362(r30)
	  lis       r4, 0x8038
	  lis       r3, 0x8038
	  lhz       r0, 0x360(r30)
	  addi      r6, r4, 0x3100
	  lwz       r5, 0x28(r27)
	  addi      r4, r3, 0x3138
	  rlwinm    r0,r0,2,0,29
	  lwzx      r3, r5, r0
	  stw       r6, 0x4(r3)
	  lhz       r0, 0x362(r30)
	  lwz       r3, 0x28(r27)
	  rlwinm    r0,r0,2,0,29
	  lwzx      r3, r3, r0
	  stw       r4, 0x4(r3)

	.loc_0x358:
	  li        r0, 0
	  stb       r0, 0x2B0(r30)
	  lfs       f0, 0x18C(r30)
	  stfs      f0, 0x38C(r30)
	  lfs       f0, 0x190(r30)
	  stfs      f0, 0x390(r30)
	  lfs       f0, 0x194(r30)
	  stfs      f0, 0x394(r30)
	  lwz       r0, 0x364(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0x398
	  addi      r3, r31, 0x18
	  addi      r5, r31, 0x28
	  li        r4, 0xD4
	  crclr     6, 0x6
	  bl        -0x358FC8

	.loc_0x398:
	  lis       r3, 0x804B
	  addi      r4, r1, 0x8
	  subi      r0, r3, 0x5814
	  stw       r0, 0x8(r1)
	  lfs       f0, 0x38C(r30)
	  stfs      f0, 0xC(r1)
	  lfs       f0, 0x390(r30)
	  stfs      f0, 0x10(r1)
	  lfs       f0, 0x394(r30)
	  stfs      f0, 0x14(r1)
	  lwz       r3, 0x364(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x364(r30)
	  lfs       f1, 0x1F8(r30)
	  bl        0x2F938
	  lwz       r0, 0x368(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0x400
	  addi      r3, r31, 0x18
	  addi      r5, r31, 0x28
	  li        r4, 0xDA
	  crclr     6, 0x6
	  bl        -0x359030

	.loc_0x400:
	  lwz       r0, 0x36C(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0x420
	  addi      r3, r31, 0x18
	  addi      r5, r31, 0x28
	  li        r4, 0xDB
	  crclr     6, 0x6
	  bl        -0x359050

	.loc_0x420:
	  lwz       r3, 0x174(r30)
	  addi      r4, r31, 0x64
	  bl        0xBB948
	  bl        0xA6200
	  mr        r0, r3
	  lwz       r3, 0x368(r30)
	  mr        r27, r0
	  mr        r4, r27
	  bl        0x2CEEC
	  lwz       r3, 0x36C(r30)
	  mr        r4, r27
	  bl        0x2CEE0
	  lwz       r0, 0x370(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0x470
	  addi      r3, r31, 0x18
	  addi      r5, r31, 0x28
	  li        r4, 0xE1
	  crclr     6, 0x6
	  bl        -0x3590A0

	.loc_0x470:
	  lwz       r0, 0x374(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0x490
	  addi      r3, r31, 0x18
	  addi      r5, r31, 0x28
	  li        r4, 0xE2
	  crclr     6, 0x6
	  bl        -0x3590C0

	.loc_0x490:
	  lwz       r0, 0x378(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0x4B0
	  addi      r3, r31, 0x18
	  addi      r5, r31, 0x28
	  li        r4, 0xE4
	  crclr     6, 0x6
	  bl        -0x3590E0

	.loc_0x4B0:
	  lwz       r0, 0x37C(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0x4D0
	  addi      r3, r31, 0x18
	  addi      r5, r31, 0x28
	  li        r4, 0xE5
	  crclr     6, 0x6
	  bl        -0x359100

	.loc_0x4D0:
	  lwz       r3, 0x174(r30)
	  addi      r4, r31, 0x70
	  bl        0xBB898
	  bl        0xA6150
	  mr        r27, r3
	  lwz       r3, 0x370(r30)
	  mr        r4, r27
	  bl        0x2CE40
	  lwz       r3, 0x378(r30)
	  mr        r4, r27
	  bl        0x2CE34
	  lwz       r3, 0x174(r30)
	  addi      r4, r31, 0x7C
	  bl        0xBB86C
	  bl        0xA6124
	  mr        r27, r3
	  lwz       r3, 0x374(r30)
	  mr        r4, r27
	  bl        0x2CE14
	  lwz       r3, 0x37C(r30)
	  mr        r4, r27
	  bl        0x2CE08
	  lwz       r0, 0x380(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0x548
	  addi      r3, r31, 0x18
	  addi      r5, r31, 0x28
	  li        r4, 0xEF
	  crclr     6, 0x6
	  bl        -0x359178

	.loc_0x548:
	  lwz       r0, 0x384(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0x568
	  addi      r3, r31, 0x18
	  addi      r5, r31, 0x28
	  li        r4, 0xF0
	  crclr     6, 0x6
	  bl        -0x359198

	.loc_0x568:
	  lwz       r3, 0x174(r30)
	  addi      r4, r31, 0x88
	  bl        0xBB800
	  bl        0xA60B8
	  stw       r3, 0x388(r30)
	  lwz       r0, 0x388(r30)
	  lwz       r3, 0x380(r30)
	  stw       r0, 0x10(r3)
	  lwz       r0, 0x388(r30)
	  lwz       r3, 0x384(r30)
	  stw       r0, 0x10(r3)
	  lmw       r27, 0x1C(r1)
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8038381C
 * Size:	000428
 */
void Game::UmiMushi::Obj::__ct(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  extsh.    r0, r4
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  stw       r30, 0x8(r1)
	  beq-      .loc_0x40
	  addi      r0, r31, 0x3A4
	  lis       r3, 0x804B
	  stw       r0, 0x17C(r31)
	  subi      r3, r3, 0x5988
	  li        r0, 0
	  stw       r3, 0x3A4(r31)
	  stw       r0, 0x3A8(r31)
	  stw       r0, 0x3AC(r31)

	.loc_0x40:
	  mr        r3, r31
	  li        r4, 0
	  bl        -0x2824C4
	  lis       r3, 0x804E
	  addi      r0, r31, 0x3A4
	  addi      r5, r3, 0x477C
	  addi      r3, r31, 0x2CC
	  stw       r5, 0x0(r31)
	  addi      r4, r5, 0x1B0
	  addi      r5, r5, 0x2FC
	  stw       r4, 0x178(r31)
	  lwz       r4, 0x17C(r31)
	  stw       r5, 0x0(r4)
	  lwz       r4, 0x17C(r31)
	  sub       r0, r0, r4
	  stw       r0, 0xC(r4)
	  bl        -0x24B354
	  li        r0, 0
	  li        r3, 0x2C
	  stw       r0, 0x2D4(r31)
	  stw       r0, 0x2D8(r31)
	  stb       r0, 0x2DD(r31)
	  stw       r0, 0x310(r31)
	  stw       r0, 0x354(r31)
	  stw       r0, 0x358(r31)
	  stw       r0, 0x364(r31)
	  stw       r0, 0x368(r31)
	  stw       r0, 0x36C(r31)
	  stw       r0, 0x370(r31)
	  stw       r0, 0x374(r31)
	  stw       r0, 0x378(r31)
	  stw       r0, 0x37C(r31)
	  stw       r0, 0x380(r31)
	  stw       r0, 0x384(r31)
	  stw       r0, 0x388(r31)
	  stw       r0, 0x398(r31)
	  stw       r0, 0x3A0(r31)
	  bl        -0x35FA4C
	  mr.       r30, r3
	  beq-      .loc_0x120
	  bl        -0x25BF88
	  lis       r3, 0x804E
	  lis       r4, 0x804B
	  addi      r0, r3, 0x4540
	  lis       r3, 0x804F
	  stw       r0, 0x0(r30)
	  subi      r4, r4, 0x4678
	  subi      r3, r3, 0x4200
	  li        r0, 0
	  stw       r4, 0x10(r30)
	  stw       r3, 0x10(r30)
	  stb       r0, 0x28(r30)
	  stw       r0, 0x1C(r30)
	  stw       r0, 0x14(r30)
	  stb       r0, 0x28(r30)
	  stw       r0, 0x20(r30)

	.loc_0x120:
	  stw       r30, 0x184(r31)
	  li        r3, 0x1C
	  bl        -0x35FAA0
	  mr.       r4, r3
	  beq-      .loc_0x154
	  lis       r5, 0x804B
	  lis       r3, 0x804E
	  subi      r0, r5, 0x680
	  li        r5, -0x1
	  stw       r0, 0x0(r4)
	  addi      r0, r3, 0x4518
	  stw       r5, 0x18(r4)
	  stw       r0, 0x0(r4)

	.loc_0x154:
	  lwz       r12, 0x0(r31)
	  mr        r3, r31
	  lwz       r12, 0x2F8(r12)
	  mtctr     r12
	  bctrl
	  li        r3, 0xC
	  bl        -0x35FAE4
	  mr.       r30, r3
	  beq-      .loc_0x188
	  bl        0xB09C0
	  lis       r3, 0x804F
	  subi      r0, r3, 0x3B74
	  stw       r0, 0x0(r30)

	.loc_0x188:
	  stw       r30, 0x354(r31)
	  li        r3, 0x18
	  bl        -0x35FB08
	  mr.       r0, r3
	  beq-      .loc_0x1A8
	  mr        r4, r31
	  bl        -0x90F38
	  mr        r0, r3

	.loc_0x1A8:
	  stw       r0, 0x358(r31)
	  li        r3, 0x2C
	  bl        -0x35FB28
	  mr.       r30, r3
	  beq-      .loc_0x1D8
	  addi      r4, r31, 0x38C
	  li        r5, 0x1DE
	  li        r6, 0x1DF
	  bl        0x2C85C
	  lis       r3, 0x804E
	  addi      r0, r3, 0x4760
	  stw       r0, 0x0(r30)

	.loc_0x1D8:
	  stw       r30, 0x364(r31)
	  li        r3, 0x2C
	  bl        -0x35FB58
	  mr.       r30, r3
	  beq-      .loc_0x208
	  li        r4, 0
	  li        r5, 0x1E2
	  li        r6, 0x1E3
	  bl        0x2CA88
	  lis       r3, 0x804E
	  addi      r0, r3, 0x4744
	  stw       r0, 0x0(r30)

	.loc_0x208:
	  stw       r30, 0x368(r31)
	  li        r3, 0x2C
	  bl        -0x35FB88
	  mr.       r30, r3
	  beq-      .loc_0x238
	  li        r4, 0
	  li        r5, 0x1E0
	  li        r6, 0x1E1
	  bl        0x2CA58
	  lis       r3, 0x804E
	  addi      r0, r3, 0x4728
	  stw       r0, 0x0(r30)

	.loc_0x238:
	  stw       r30, 0x36C(r31)
	  li        r3, 0x2C
	  bl        -0x35FBB8
	  mr.       r30, r3
	  beq-      .loc_0x268
	  li        r4, 0
	  li        r5, 0x1D9
	  li        r6, 0x1DA
	  bl        0x2CA28
	  lis       r3, 0x804E
	  addi      r0, r3, 0x470C
	  stw       r0, 0x0(r30)

	.loc_0x268:
	  stw       r30, 0x370(r31)
	  li        r3, 0x2C
	  bl        -0x35FBE8
	  mr.       r30, r3
	  beq-      .loc_0x298
	  li        r4, 0
	  li        r5, 0x1D7
	  li        r6, 0x1D8
	  bl        0x2C9F8
	  lis       r3, 0x804E
	  addi      r0, r3, 0x46F0
	  stw       r0, 0x0(r30)

	.loc_0x298:
	  stw       r30, 0x378(r31)
	  li        r3, 0x2C
	  bl        -0x35FC18
	  mr.       r30, r3
	  beq-      .loc_0x2C8
	  li        r4, 0
	  li        r5, 0x1D9
	  li        r6, 0x1DA
	  bl        0x2C9C8
	  lis       r3, 0x804E
	  addi      r0, r3, 0x470C
	  stw       r0, 0x0(r30)

	.loc_0x2C8:
	  stw       r30, 0x374(r31)
	  li        r3, 0x2C
	  bl        -0x35FC48
	  mr.       r30, r3
	  beq-      .loc_0x2F8
	  li        r4, 0
	  li        r5, 0x1D7
	  li        r6, 0x1D8
	  bl        0x2C998
	  lis       r3, 0x804E
	  addi      r0, r3, 0x46F0
	  stw       r0, 0x0(r30)

	.loc_0x2F8:
	  stw       r30, 0x37C(r31)
	  li        r3, 0x14
	  bl        -0x35FC78
	  cmplwi    r3, 0
	  beq-      .loc_0x380
	  lis       r4, 0x804B
	  lis       r5, 0x804A
	  subi      r0, r4, 0x5808
	  lis       r4, 0x804E
	  stw       r0, 0x0(r3)
	  subi      r0, r5, 0x1D84
	  addi      r5, r4, 0x698C
	  lis       r4, 0x804E
	  stw       r0, 0x4(r3)
	  addi      r7, r4, 0x68A8
	  lis       r4, 0x804E
	  addi      r0, r5, 0x14
	  stw       r5, 0x0(r3)
	  addi      r4, r4, 0x46A4
	  li        r9, 0
	  li        r8, 0x2B2
	  stw       r0, 0x4(r3)
	  addi      r6, r7, 0x14
	  li        r5, 0x1D6
	  addi      r0, r4, 0x14
	  stw       r9, 0x8(r3)
	  sth       r8, 0xC(r3)
	  stb       r9, 0xE(r3)
	  stw       r7, 0x0(r3)
	  stw       r6, 0x4(r3)
	  stw       r9, 0x10(r3)
	  sth       r5, 0xC(r3)
	  stw       r4, 0x0(r3)
	  stw       r0, 0x4(r3)

	.loc_0x380:
	  stw       r3, 0x380(r31)
	  li        r3, 0x14
	  bl        -0x35FD00
	  cmplwi    r3, 0
	  beq-      .loc_0x408
	  lis       r4, 0x804B
	  lis       r5, 0x804A
	  subi      r0, r4, 0x5808
	  lis       r4, 0x804E
	  stw       r0, 0x0(r3)
	  subi      r0, r5, 0x1D84
	  addi      r5, r4, 0x698C
	  lis       r4, 0x804E
	  stw       r0, 0x4(r3)
	  addi      r7, r4, 0x68A8
	  lis       r4, 0x804E
	  addi      r0, r5, 0x14
	  stw       r5, 0x0(r3)
	  addi      r4, r4, 0x4658
	  li        r9, 0
	  li        r8, 0x2B2
	  stw       r0, 0x4(r3)
	  addi      r6, r7, 0x14
	  li        r5, 0x1D4
	  addi      r0, r4, 0x14
	  stw       r9, 0x8(r3)
	  sth       r8, 0xC(r3)
	  stb       r9, 0xE(r3)
	  stw       r7, 0x0(r3)
	  stw       r6, 0x4(r3)
	  stw       r9, 0x10(r3)
	  sth       r5, 0xC(r3)
	  stw       r4, 0x0(r3)
	  stw       r0, 0x4(r3)

	.loc_0x408:
	  stw       r3, 0x384(r31)
	  mr        r3, r31
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
 * Address:	80383C44
 * Size:	00004C
 */
void Game::UmiMushi::Obj::setFSM((Game::UmiMushi::FSM*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  stw       r4, 0x398(r3)
	  mr        r4, r31
	  lwz       r3, 0x398(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  li        r0, 0
	  stw       r0, 0x2B4(r31)
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80383C90
 * Size:	000090
 */
void Game::UmiMushi::Obj::doUpdate(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  mr        r4, r31
	  lwz       r3, 0x398(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, 0x18C(r31)
	  stfs      f0, 0x38C(r31)
	  lfs       f0, 0x190(r31)
	  stfs      f0, 0x390(r31)
	  lfs       f0, 0x194(r31)
	  stfs      f0, 0x394(r31)
	  lwz       r3, 0x280(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x6C
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, 0x0(r3)
	  stfs      f0, 0x390(r31)
	  b         .loc_0x7C

	.loc_0x6C:
	  lfs       f1, 0x390(r31)
	  lfs       f0, 0xA38(r2)
	  fsubs     f0, f1, f0
	  stfs      f0, 0x390(r31)

	.loc_0x7C:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80383D20
 * Size:	0004B0
 */
void Game::UmiMushi::Obj::doAnimationCullingOff(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  mflr      r0
	  stw       r0, 0x54(r1)
	  stfd      f31, 0x40(r1)
	  psq_st    f31,0x48(r1),0,0
	  stw       r31, 0x3C(r1)
	  stw       r30, 0x38(r1)
	  stw       r29, 0x34(r1)
	  stw       r28, 0x30(r1)
	  mr        r31, r3
	  lwz       r0, 0x39C(r3)
	  cmpwi     r0, 0x65
	  bne-      .loc_0x38
	  stw       r31, -0x66B8(r13)

	.loc_0x38:
	  mr        r3, r31
	  bl        -0x280CDC
	  lwz       r3, 0x358(r31)
	  bl        -0x911B4
	  lwz       r3, 0x2D8(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0xD4
	  lbz       r0, 0x2DC(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0xD4
	  lwz       r0, 0x300(r31)
	  cmpwi     r0, 0
	  bne-      .loc_0xB4
	  lhz       r0, 0x2DC(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x98
	  lwz       r3, 0x28C(r31)
	  li        r4, 0x593A
	  li        r5, 0
	  lwz       r12, 0x28(r3)
	  lwz       r12, 0x88(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0xB4

	.loc_0x98:
	  lwz       r3, 0x28C(r31)
	  li        r4, 0x593B
	  li        r5, 0
	  lwz       r12, 0x28(r3)
	  lwz       r12, 0x88(r12)
	  mtctr     r12
	  bctrl

	.loc_0xB4:
	  lwz       r3, 0x300(r31)
	  addi      r0, r3, 0x1
	  stw       r0, 0x300(r31)
	  lwz       r0, 0x300(r31)
	  cmpwi     r0, 0x1E
	  blt-      .loc_0xD4
	  li        r0, 0
	  stw       r0, 0x300(r31)

	.loc_0xD4:
	  lwz       r0, 0x39C(r31)
	  cmpwi     r0, 0x47
	  bne-      .loc_0x1AC
	  lwz       r29, 0x28C(r31)
	  li        r30, 0
	  mr        r3, r29
	  lwz       r12, 0x28(r29)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  cmpwi     r3, 0x5
	  beq-      .loc_0x13C
	  mr        r3, r29
	  lwz       r12, 0x28(r29)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  cmpwi     r3, 0x6
	  beq-      .loc_0x13C
	  mr        r3, r29
	  lwz       r12, 0x28(r29)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  cmpwi     r3, 0x7
	  bne-      .loc_0x140

	.loc_0x13C:
	  li        r30, 0x1

	.loc_0x140:
	  rlwinm.   r0,r30,0,24,31
	  bne-      .loc_0x164
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  addi      r3, r3, 0x3B28
	  li        r4, 0x454
	  addi      r5, r5, 0x3B10
	  crclr     6, 0x6
	  bl        -0x359840

	.loc_0x164:
	  cmplwi    r29, 0
	  beq-      .loc_0x1AC
	  lwz       r0, 0xF0(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x194
	  mr        r3, r29
	  li        r4, 0x1
	  lwz       r12, 0x28(r29)
	  lwz       r12, 0xD8(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x1AC

	.loc_0x194:
	  mr        r3, r29
	  li        r4, 0x1
	  lwz       r12, 0x28(r29)
	  lwz       r12, 0xD8(r12)
	  mtctr     r12
	  bctrl

	.loc_0x1AC:
	  lwz       r0, 0x39C(r31)
	  cmpwi     r0, 0x65
	  bne-      .loc_0x480
	  li        r28, 0
	  li        r30, 0
	  b         .loc_0x474

	.loc_0x1C4:
	  mr        r4, r28
	  addi      r3, r31, 0x2CC
	  bl        -0x24B774
	  lwz       r0, 0x64(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x46C
	  lwz       r4, 0x174(r31)
	  lwz       r3, 0x3A0(r31)
	  lwz       r4, 0x8(r4)
	  lhzx      r0, r3, r30
	  lwz       r3, 0x84(r4)
	  mulli     r0, r0, 0x30
	  lfs       f1, 0xA40(r2)
	  lwz       r3, 0xC(r3)
	  add       r29, r3, r0
	  lfs       f3, 0x20(r29)
	  lfs       f2, 0x10(r29)
	  lfs       f0, 0x0(r29)
	  stfs      f0, 0x20(r1)
	  stfs      f2, 0x24(r1)
	  stfs      f3, 0x28(r1)
	  lfs       f2, 0x14(r29)
	  lfs       f3, 0x4(r29)
	  lfs       f4, 0x24(r29)
	  fmuls     f6, f2, f2
	  fmuls     f0, f3, f3
	  fmuls     f7, f4, f4
	  stfs      f3, 0x14(r1)
	  fadds     f0, f0, f6
	  stfs      f2, 0x18(r1)
	  stfs      f4, 0x1C(r1)
	  fadds     f0, f7, f0
	  lfs       f5, 0x28(r29)
	  lfs       f4, 0x18(r29)
	  lfs       f2, 0x8(r29)
	  fcmpo     cr0, f0, f1
	  stfs      f2, 0x8(r1)
	  stfs      f4, 0xC(r1)
	  stfs      f5, 0x10(r1)
	  ble-      .loc_0x280
	  fmadds    f0, f3, f3, f6
	  fadds     f4, f7, f0
	  fcmpo     cr0, f4, f1
	  ble-      .loc_0x284
	  fsqrte    f0, f4
	  fmuls     f4, f0, f4
	  b         .loc_0x284

	.loc_0x280:
	  fmr       f4, f1

	.loc_0x284:
	  lfs       f0, 0xA40(r2)
	  fcmpo     cr0, f4, f0
	  ble-      .loc_0x2C0
	  lfs       f0, 0xA30(r2)
	  lfs       f2, 0x14(r1)
	  fdivs     f3, f0, f4
	  lfs       f1, 0x18(r1)
	  lfs       f0, 0x1C(r1)
	  fmuls     f2, f2, f3
	  fmuls     f1, f1, f3
	  fmuls     f0, f0, f3
	  stfs      f2, 0x14(r1)
	  stfs      f1, 0x18(r1)
	  stfs      f0, 0x1C(r1)
	  b         .loc_0x2C4

	.loc_0x2C0:
	  fmr       f4, f0

	.loc_0x2C4:
	  lfs       f0, 0xA48(r2)
	  fmuls     f31, f4, f0
	  fcmpo     cr0, f31, f0
	  ble-      .loc_0x2D8
	  fmr       f31, f0

	.loc_0x2D8:
	  addi      r3, r1, 0x14
	  addi      r4, r1, 0x8
	  addi      r5, r1, 0x20
	  bl        -0x299080
	  lfs       f2, 0x20(r1)
	  lfs       f1, 0x24(r1)
	  fmuls     f0, f2, f2
	  lfs       f3, 0x28(r1)
	  fmuls     f4, f1, f1
	  lfs       f1, 0xA40(r2)
	  fmuls     f3, f3, f3
	  fadds     f0, f0, f4
	  fadds     f0, f3, f0
	  fcmpo     cr0, f0, f1
	  ble-      .loc_0x330
	  fmadds    f0, f2, f2, f4
	  fadds     f3, f3, f0
	  fcmpo     cr0, f3, f1
	  ble-      .loc_0x334
	  fsqrte    f0, f3
	  fmuls     f3, f0, f3
	  b         .loc_0x334

	.loc_0x330:
	  fmr       f3, f1

	.loc_0x334:
	  lfs       f0, 0xA40(r2)
	  fcmpo     cr0, f3, f0
	  ble-      .loc_0x36C
	  lfs       f0, 0xA30(r2)
	  lfs       f2, 0x20(r1)
	  fdivs     f3, f0, f3
	  lfs       f1, 0x24(r1)
	  lfs       f0, 0x28(r1)
	  fmuls     f2, f2, f3
	  fmuls     f1, f1, f3
	  fmuls     f0, f0, f3
	  stfs      f2, 0x20(r1)
	  stfs      f1, 0x24(r1)
	  stfs      f0, 0x28(r1)

	.loc_0x36C:
	  addi      r3, r1, 0x20
	  addi      r4, r1, 0x14
	  addi      r5, r1, 0x8
	  bl        -0x299114
	  lfs       f2, 0x8(r1)
	  lfs       f1, 0xC(r1)
	  fmuls     f0, f2, f2
	  lfs       f3, 0x10(r1)
	  fmuls     f4, f1, f1
	  lfs       f1, 0xA40(r2)
	  fmuls     f3, f3, f3
	  fadds     f0, f0, f4
	  fadds     f0, f3, f0
	  fcmpo     cr0, f0, f1
	  ble-      .loc_0x3C4
	  fmadds    f0, f2, f2, f4
	  fadds     f3, f3, f0
	  fcmpo     cr0, f3, f1
	  ble-      .loc_0x3C8
	  fsqrte    f0, f3
	  fmuls     f3, f0, f3
	  b         .loc_0x3C8

	.loc_0x3C4:
	  fmr       f3, f1

	.loc_0x3C8:
	  lfs       f0, 0xA40(r2)
	  fcmpo     cr0, f3, f0
	  ble-      .loc_0x400
	  lfs       f0, 0xA30(r2)
	  lfs       f2, 0x8(r1)
	  fdivs     f3, f0, f3
	  lfs       f1, 0xC(r1)
	  lfs       f0, 0x10(r1)
	  fmuls     f2, f2, f3
	  fmuls     f1, f1, f3
	  fmuls     f0, f0, f3
	  stfs      f2, 0x8(r1)
	  stfs      f1, 0xC(r1)
	  stfs      f0, 0x10(r1)

	.loc_0x400:
	  lfs       f0, 0x20(r1)
	  fmuls     f0, f0, f31
	  stfs      f0, 0x0(r29)
	  lfs       f0, 0x24(r1)
	  fmuls     f0, f0, f31
	  stfs      f0, 0x10(r29)
	  lfs       f0, 0x28(r1)
	  fmuls     f0, f0, f31
	  stfs      f0, 0x20(r29)
	  lfs       f0, 0x14(r1)
	  fmuls     f0, f0, f31
	  stfs      f0, 0x4(r29)
	  lfs       f0, 0x18(r1)
	  fmuls     f0, f0, f31
	  stfs      f0, 0x14(r29)
	  lfs       f0, 0x1C(r1)
	  fmuls     f0, f0, f31
	  stfs      f0, 0x24(r29)
	  lfs       f0, 0x8(r1)
	  fmuls     f0, f0, f31
	  stfs      f0, 0x8(r29)
	  lfs       f0, 0xC(r1)
	  fmuls     f0, f0, f31
	  stfs      f0, 0x18(r29)
	  lfs       f0, 0x10(r1)
	  fmuls     f0, f0, f31
	  stfs      f0, 0x28(r29)

	.loc_0x46C:
	  addi      r30, r30, 0x2
	  addi      r28, r28, 0x1

	.loc_0x474:
	  lwz       r0, 0x2CC(r31)
	  cmpw      r28, r0
	  blt+      .loc_0x1C4

	.loc_0x480:
	  li        r0, 0
	  stw       r0, -0x66B8(r13)
	  psq_l     f31,0x48(r1),0,0
	  lwz       r0, 0x54(r1)
	  lfd       f31, 0x40(r1)
	  lwz       r31, 0x3C(r1)
	  lwz       r30, 0x38(r1)
	  lwz       r29, 0x34(r1)
	  lwz       r28, 0x30(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803841D0
 * Size:	000034
 */
void Game::UmiMushi::Obj::doAnimationCullingOn(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x280ECC
	  mr        r3, r31
	  bl        0x2A34
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80384204
 * Size:	000004
 */
void Game::UmiMushi::Obj::doDirectDraw((Graphics&)) { }

/*
 * --INFO--
 * Address:	80384208
 * Size:	000020
 */
void Game::UmiMushi::Obj::doDebugDraw((Graphics&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        -0x27E3A8
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80384228
 * Size:	000098
 */
void Game::UmiMushi::Obj::changeMaterial(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  li        r4, 0
	  stw       r0, 0x24(r1)
	  addi      r5, r1, 0x8
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  mr        r30, r3
	  lwz       r3, 0x174(r3)
	  lha       r0, 0x314(r30)
	  lwz       r31, 0x8(r3)
	  sth       r0, 0x8(r1)
	  lha       r0, 0x316(r30)
	  sth       r0, 0xA(r1)
	  lha       r0, 0x318(r30)
	  sth       r0, 0xC(r1)
	  lha       r0, 0x31A(r30)
	  sth       r0, 0xE(r1)
	  lwz       r3, 0x310(r30)
	  lwz       r3, 0x2C(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x354(r30)
	  lfs       f1, 0xA4C(r2)
	  bl        0xB02A8
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803842C0
 * Size:	0000DC
 */
void Game::UmiMushi::Obj::doStartMovie(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r3, 0x364(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x368(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x36C(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x370(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x374(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x378(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x37C(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x380(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x40(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x384(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x40(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8038439C
 * Size:	0000DC
 */
void Game::UmiMushi::Obj::doEndMovie(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r3, 0x364(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x368(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x36C(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x370(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x374(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x378(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x37C(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x380(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x44(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x384(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x44(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80384478
 * Size:	000090
 */
void Game::UmiMushi::Obj::getShadowParam((Game::ShadowParam&))
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
	  lwz       r3, 0x2D4(r3)
	  bl        0xA5408
	  lfs       f0, 0xC(r3)
	  lfs       f5, 0xA50(r2)
	  stfs      f0, 0x0(r31)
	  lfs       f3, 0xA40(r2)
	  lfs       f0, 0x1C(r3)
	  lfs       f2, 0xA30(r2)
	  stfs      f0, 0x4(r31)
	  lfs       f0, 0xA54(r2)
	  lfs       f4, 0x2C(r3)
	  lfs       f1, 0xA58(r2)
	  stfs      f4, 0x8(r31)
	  lfs       f4, 0x190(r30)
	  fadds     f4, f5, f4
	  stfs      f4, 0x4(r31)
	  stfs      f3, 0xC(r31)
	  stfs      f2, 0x10(r31)
	  stfs      f3, 0x14(r31)
	  stfs      f0, 0x18(r31)
	  lfs       f0, 0x1F8(r30)
	  fmuls     f0, f1, f0
	  stfs      f0, 0x1C(r31)
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
 * Address:	80384508
 * Size:	000040
 */
void Game::UmiMushi::Obj::doSimulation((float))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r4, 0x2E0(r3)
	  subi      r0, r4, 0x1
	  stw       r0, 0x2E0(r3)
	  lwz       r0, 0x2E0(r3)
	  cmpwi     r0, 0
	  bge-      .loc_0x2C
	  li        r0, 0
	  stw       r0, 0x2E0(r3)

	.loc_0x2C:
	  bl        -0x27FADC
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80384548
 * Size:	000164
 */
void Game::UmiMushi::Obj::damageCallBack((Game::Creature*, float, CollPart*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stfd      f31, 0x30(r1)
	  psq_st    f31,0x38(r1),0,0
	  stw       r31, 0x2C(r1)
	  stw       r30, 0x28(r1)
	  stw       r29, 0x24(r1)
	  lwz       r0, 0x1E0(r3)
	  fmr       f31, f1
	  mr        r29, r3
	  mr        r30, r4
	  rlwinm.   r0,r0,0,22,22
	  mr        r31, r5
	  beq-      .loc_0x4C
	  lfs       f2, 0xA30(r2)
	  bl        -0x27E55C
	  li        r3, 0x1
	  b         .loc_0x140

	.loc_0x4C:
	  cmplwi    r30, 0
	  bne-      .loc_0x70
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  addi      r3, r3, 0x3B00
	  li        r4, 0x2A6
	  addi      r5, r5, 0x3B10
	  crclr     6, 0x6
	  bl        -0x359F74

	.loc_0x70:
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  cmplwi    r31, 0
	  beq-      .loc_0xD0
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x13C
	  mr        r3, r30
	  bl        -0x1E5080
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x13C
	  fmr       f1, f31
	  lfs       f2, 0xA30(r2)
	  mr        r3, r29
	  bl        -0x27E5E0
	  li        r3, 0x1
	  b         .loc_0x140

	.loc_0xD0:
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x13C
	  mr        r4, r30
	  addi      r3, r1, 0x8
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f1, 0xA38(r2)
	  lfs       f0, 0x190(r29)
	  lfs       f2, 0xC(r1)
	  fadds     f0, f1, f0
	  fcmpo     cr0, f2, f0
	  bge-      .loc_0x13C
	  lwz       r4, 0xC0(r29)
	  mr        r3, r29
	  lfs       f2, 0xA30(r2)
	  lfs       f0, 0x81C(r4)
	  fmuls     f1, f31, f0
	  bl        -0x27E64C
	  li        r3, 0x1
	  b         .loc_0x140

	.loc_0x13C:
	  li        r3, 0

	.loc_0x140:
	  psq_l     f31,0x38(r1),0,0
	  lwz       r0, 0x44(r1)
	  lfd       f31, 0x30(r1)
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  lwz       r29, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803846AC
 * Size:	0000BC
 */
void Game::UmiMushi::Obj::pressCallBack((Game::Creature*, float, CollPart*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stfd      f31, 0x20(r1)
	  psq_st    f31,0x28(r1),0,0
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  mr.       r30, r4
	  fmr       f31, f1
	  mr        r29, r3
	  mr        r31, r5
	  bne-      .loc_0x50
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  addi      r3, r3, 0x3B00
	  li        r4, 0x2CA
	  addi      r5, r5, 0x3B10
	  crclr     6, 0x6
	  bl        -0x35A0B8

	.loc_0x50:
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x84
	  lbz       r0, 0x2B8(r30)
	  cmpwi     r0, 0x3
	  bne-      .loc_0x84
	  lwz       r3, 0xC0(r29)
	  lfs       f0, 0x90C(r3)
	  fmuls     f31, f31, f0

	.loc_0x84:
	  fmr       f1, f31
	  mr        r3, r29
	  mr        r4, r30
	  mr        r5, r31
	  bl        -0x27E68C
	  psq_l     f31,0x28(r1),0,0
	  lwz       r0, 0x34(r1)
	  lfd       f31, 0x20(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80384768
 * Size:	0000BC
 */
void Game::UmiMushi::Obj::hipdropCallBack((Game::Creature*, float, CollPart*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stfd      f31, 0x20(r1)
	  psq_st    f31,0x28(r1),0,0
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  mr.       r30, r4
	  fmr       f31, f1
	  mr        r29, r3
	  mr        r31, r5
	  bne-      .loc_0x50
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  addi      r3, r3, 0x3B00
	  li        r4, 0x2DD
	  addi      r5, r5, 0x3B10
	  crclr     6, 0x6
	  bl        -0x35A174

	.loc_0x50:
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x84
	  lbz       r0, 0x2B8(r30)
	  cmpwi     r0, 0x3
	  bne-      .loc_0x84
	  lwz       r3, 0xC0(r29)
	  lfs       f0, 0x90C(r3)
	  fmuls     f31, f31, f0

	.loc_0x84:
	  fmr       f1, f31
	  mr        r3, r29
	  mr        r4, r30
	  mr        r5, r31
	  bl        -0x27E738
	  psq_l     f31,0x28(r1),0,0
	  lwz       r0, 0x34(r1)
	  lfd       f31, 0x20(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80384824
 * Size:	0000AC
 */
void Game::UmiMushi::Obj::earthquakeCallBack((Game::Creature*, float))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stfd      f31, 0x10(r1)
	  psq_st    f31,0x18(r1),0,0
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  mr.       r31, r4
	  fmr       f31, f1
	  mr        r30, r3
	  bne-      .loc_0x48
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  addi      r3, r3, 0x3B00
	  li        r4, 0x2F0
	  addi      r5, r5, 0x3B10
	  crclr     6, 0x6
	  bl        -0x35A228

	.loc_0x48:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x7C
	  lbz       r0, 0x2B8(r31)
	  cmpwi     r0, 0x3
	  bne-      .loc_0x7C
	  lwz       r3, 0xC0(r30)
	  lfs       f0, 0x90C(r3)
	  fmuls     f31, f31, f0

	.loc_0x7C:
	  fmr       f1, f31
	  mr        r3, r30
	  mr        r4, r31
	  bl        -0x27E4E8
	  psq_l     f31,0x18(r1),0,0
	  lwz       r0, 0x24(r1)
	  lfd       f31, 0x10(r1)
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803848D0
 * Size:	000020
 */
void Game::UmiMushi::Obj::collisionCallback((Game::CollEvent&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        -0x27E2CC
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803848F0
 * Size:	000130
 */
void Game::UmiMushi::Obj::initMouthSlots(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  mflr      r0
	  stw       r0, 0x54(r1)
	  stfd      f31, 0x40(r1)
	  psq_st    f31,0x48(r1),0,0
	  stw       r31, 0x3C(r1)
	  stw       r30, 0x38(r1)
	  stw       r29, 0x34(r1)
	  stw       r28, 0x30(r1)
	  mr        r28, r3
	  li        r4, 0x7
	  addi      r3, r28, 0x2CC
	  bl        -0x24C3C8
	  lis       r4, 0x8049
	  li        r3, 0xE
	  addi      r10, r4, 0x3BD0
	  lwz       r9, 0x0(r10)
	  lwz       r8, 0x4(r10)
	  lwz       r7, 0x8(r10)
	  lwz       r6, 0xC(r10)
	  lwz       r5, 0x10(r10)
	  lwz       r4, 0x14(r10)
	  lwz       r0, 0x18(r10)
	  stw       r9, 0x8(r1)
	  stw       r8, 0xC(r1)
	  stw       r7, 0x10(r1)
	  stw       r6, 0x14(r1)
	  stw       r5, 0x18(r1)
	  stw       r4, 0x1C(r1)
	  stw       r0, 0x20(r1)
	  bl        -0x3609BC
	  stw       r3, 0x3A0(r28)
	  addi      r31, r1, 0x8
	  li        r29, 0
	  li        r30, 0
	  b         .loc_0xFC

	.loc_0x90:
	  lwz       r5, 0x174(r28)
	  mr        r4, r29
	  lwz       r6, 0x0(r31)
	  addi      r3, r28, 0x2CC
	  bl        -0x24C300
	  lwz       r3, 0x174(r28)
	  lwz       r4, 0x0(r31)
	  bl        0xBA618
	  lwz       r4, 0x3A0(r28)
	  sthx      r3, r4, r30
	  lwz       r0, 0x39C(r28)
	  cmpwi     r0, 0x65
	  bne-      .loc_0xDC
	  lfs       f31, 0xA5C(r2)
	  mr        r4, r29
	  addi      r3, r28, 0x2CC
	  bl        -0x24C248
	  stfs      f31, 0x1C(r3)
	  b         .loc_0xF0

	.loc_0xDC:
	  lfs       f31, 0xA4C(r2)
	  mr        r4, r29
	  addi      r3, r28, 0x2CC
	  bl        -0x24C260
	  stfs      f31, 0x1C(r3)

	.loc_0xF0:
	  addi      r31, r31, 0x4
	  addi      r30, r30, 0x2
	  addi      r29, r29, 0x1

	.loc_0xFC:
	  lwz       r0, 0x2CC(r28)
	  cmpw      r29, r0
	  blt+      .loc_0x90
	  psq_l     f31,0x48(r1),0,0
	  lwz       r0, 0x54(r1)
	  lfd       f31, 0x40(r1)
	  lwz       r31, 0x3C(r1)
	  lwz       r30, 0x38(r1)
	  lwz       r29, 0x34(r1)
	  lwz       r28, 0x30(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80384A20
 * Size:	000094
 */
void Game::UmiMushi::Obj::doStartStoneState(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x281B40
	  lis       r4, 0x6865
	  lwz       r3, 0x114(r31)
	  addi      r4, r4, 0x6164
	  bl        -0x24EC00
	  lis       r4, 0x7374
	  addi      r3, r3, 0x3C
	  addi      r4, r4, 0x5F5F
	  bl        0x8E9B0
	  lis       r4, 0x6B75
	  lwz       r3, 0x114(r31)
	  addi      r4, r4, 0x7469
	  bl        -0x24EC20
	  lis       r4, 0x7374
	  addi      r3, r3, 0x3C
	  addi      r4, r4, 0x5F5F
	  bl        0x8E990
	  lis       r4, 0x6B65
	  lwz       r3, 0x114(r31)
	  addi      r4, r4, 0x7475
	  bl        -0x24EC40
	  lis       r4, 0x7374
	  addi      r3, r3, 0x3C
	  addi      r4, r4, 0x5F5F
	  bl        0x8E970
	  mr        r3, r31
	  bl        0x2098
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80384AB4
 * Size:	0000BC
 */
void Game::UmiMushi::Obj::doFinishStoneState(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x281BC0
	  lis       r4, 0x6865
	  lwz       r3, 0x114(r31)
	  addi      r4, r4, 0x6164
	  bl        -0x24EC94
	  lis       r4, 0x5F5F
	  addi      r3, r3, 0x3C
	  addi      r4, r4, 0x5F5F
	  bl        0x8E91C
	  lis       r4, 0x6B75
	  lwz       r3, 0x114(r31)
	  addi      r4, r4, 0x7469
	  bl        -0x24ECB4
	  lis       r4, 0x5F5F
	  addi      r3, r3, 0x3C
	  addi      r4, r4, 0x5F5F
	  bl        0x8E8FC
	  lis       r4, 0x6B65
	  lwz       r3, 0x114(r31)
	  addi      r4, r4, 0x7475
	  bl        -0x24ECD4
	  lis       r4, 0x5F5F
	  addi      r3, r3, 0x3C
	  addi      r4, r4, 0x5F5F
	  bl        0x8E8DC
	  lwz       r5, 0xC0(r31)
	  mr        r3, r31
	  lfs       f4, 0xA60(r2)
	  li        r4, 0
	  lfs       f1, 0x53C(r5)
	  lfs       f2, 0x4C4(r5)
	  lfs       f3, 0x4EC(r5)
	  bl        -0x271A2C
	  lfs       f0, 0xA40(r2)
	  mr        r3, r31
	  stfs      f0, 0x20C(r31)
	  bl        0x20C8
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80384B70
 * Size:	000028
 */
void Game::UmiMushi::Obj::startCarcassMotion(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r4, 0x8
	  li        r5, 0
	  stw       r0, 0x14(r1)
	  bl        -0x27FB80
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80384B98
 * Size:	00004C
 */
void Game::UmiMushi::Obj::doGetLifeGaugeParam((Game::LifeGaugeParam&))
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
	  bl        -0x27ECC4
	  lwz       r0, 0x39C(r30)
	  cmpwi     r0, 0x65
	  bne-      .loc_0x34
	  lfs       f0, 0xA64(r2)
	  stfs      f0, 0x4(r31)

	.loc_0x34:
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
 * Address:	80384BE4
 * Size:	00005C
 */
void Game::UmiMushi::Obj::isReachToGoal((float))
{
	/*
	.loc_0x0:
	  lwz       r4, 0x2F4(r3)
	  addi      r0, r4, 0x1
	  stw       r0, 0x2F4(r3)
	  lwz       r0, 0x2F4(r3)
	  cmpwi     r0, 0x320
	  ble-      .loc_0x28
	  li        r0, 0
	  stw       r0, 0x2F4(r3)
	  li        r3, 0x1
	  blr

	.loc_0x28:
	  fmuls     f0, f1, f1
	  lfs       f2, 0x194(r3)
	  lfs       f1, 0x2C4(r3)
	  lfs       f3, 0x18C(r3)
	  fsubs     f2, f2, f1
	  lfs       f1, 0x2BC(r3)
	  fsubs     f3, f3, f1
	  fmuls     f1, f2, f2
	  fmadds    f1, f3, f3, f1
	  fcmpo     cr0, f1, f0
	  mfcr      r0
	  rlwinm    r3,r0,1,31,31
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80384C40
 * Size:	000358
 */
void Game::UmiMushi::Obj::walkFunc(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0xA0(r1)
	  mflr      r0
	  stw       r0, 0xA4(r1)
	  stfd      f31, 0x90(r1)
	  psq_st    f31,0x98(r1),0,0
	  stfd      f30, 0x80(r1)
	  psq_st    f30,0x88(r1),0,0
	  stfd      f29, 0x70(r1)
	  psq_st    f29,0x78(r1),0,0
	  stfd      f28, 0x60(r1)
	  psq_st    f28,0x68(r1),0,0
	  stfd      f27, 0x50(r1)
	  psq_st    f27,0x58(r1),0,0
	  stw       r31, 0x4C(r1)
	  mr        r31, r3
	  lfs       f0, 0xA68(r2)
	  lwz       r3, 0xC0(r3)
	  lfs       f2, 0x2FC(r31)
	  lfs       f1, 0xA20(r3)
	  lfs       f30, 0x2E4(r3)
	  fadds     f1, f2, f1
	  lfs       f27, 0xA1C(r3)
	  lfs       f29, 0x30C(r3)
	  lfs       f28, 0x334(r3)
	  stfs      f1, 0x2FC(r31)
	  lfs       f1, 0x2FC(r31)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x78
	  fsubs     f0, f1, f0
	  stfs      f0, 0x2FC(r31)

	.loc_0x78:
	  lfs       f1, 0x2FC(r31)
	  bl        -0x2B54A0
	  lwz       r3, 0xC0(r31)
	  frsp      f0, f1
	  lbz       r0, 0xA10(r3)
	  fmuls     f2, f27, f0
	  cmplwi    r0, 0
	  bne-      .loc_0x9C
	  lfs       f2, 0xA40(r2)

	.loc_0x9C:
	  lfs       f0, 0x2F8(r31)
	  mr        r4, r31
	  lfs       f1, 0xA70(r2)
	  addi      r3, r1, 0x14
	  stfs      f0, 0x1FC(r31)
	  fmuls     f0, f1, f2
	  lfs       f1, 0xA6C(r2)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x8(r12)
	  fmuls     f31, f1, f0
	  mtctr     r12
	  bctrl
	  lfs       f5, 0x14(r1)
	  lis       r3, 0x8051
	  lfs       f3, 0x1C(r1)
	  subi      r3, r3, 0x2E20
	  lfs       f1, 0x2BC(r31)
	  lfs       f0, 0x2C4(r31)
	  lfs       f4, 0x18(r1)
	  fsubs     f1, f1, f5
	  fsubs     f2, f0, f3
	  stfs      f5, 0x8(r1)
	  stfs      f4, 0xC(r1)
	  stfs      f3, 0x10(r1)
	  bl        -0x34FC34
	  bl        0x8CE90
	  lwz       r12, 0x0(r31)
	  fmr       f27, f1
	  mr        r3, r31
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fmr       f2, f1
	  fmr       f1, f27
	  bl        0x8CE98
	  fmuls     f29, f1, f29
	  lfs       f0, 0xA70(r2)
	  lfs       f1, 0xA6C(r2)
	  fmuls     f0, f0, f28
	  fabs      f2, f29
	  fmuls     f1, f1, f0
	  frsp      f0, f2
	  fcmpo     cr0, f0, f1
	  ble-      .loc_0x164
	  lfs       f0, 0xA40(r2)
	  fcmpo     cr0, f29, f0
	  ble-      .loc_0x160
	  fmr       f29, f1
	  b         .loc_0x164

	.loc_0x160:
	  fneg      f29, f1

	.loc_0x164:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fadds     f1, f29, f1
	  bl        0x8CE14
	  stfs      f1, 0x1FC(r31)
	  lfs       f0, 0xA40(r2)
	  lfs       f1, 0x1FC(r31)
	  stfs      f1, 0x1A8(r31)
	  lfs       f4, 0x1FC(r31)
	  fadds     f3, f4, f31
	  fcmpo     cr0, f3, f0
	  bge-      .loc_0x1CC
	  lfs       f0, 0xA74(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fmuls     f0, f3, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x30(r1)
	  lwz       r0, 0x34(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r3, r0
	  fneg      f2, f0
	  b         .loc_0x1F0

	.loc_0x1CC:
	  lfs       f0, 0xA78(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fmuls     f0, f3, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x38(r1)
	  lwz       r0, 0x3C(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f2, r3, r0

	.loc_0x1F0:
	  lfs       f0, 0xA40(r2)
	  fmuls     f27, f30, f2
	  lfs       f1, 0x1D4(r31)
	  lfs       f28, 0x1D8(r31)
	  fcmpo     cr0, f3, f0
	  lfs       f0, 0x1DC(r31)
	  stfs      f1, 0x20(r1)
	  stfs      f28, 0x24(r1)
	  stfs      f0, 0x28(r1)
	  bge-      .loc_0x21C
	  fneg      f3, f3

	.loc_0x21C:
	  lfs       f0, 0xA78(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fmr       f1, f31
	  fmuls     f0, f3, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x40(r1)
	  lwz       r0, 0x44(r1)
	  rlwinm    r0,r0,3,18,28
	  add       r3, r3, r0
	  lfs       f29, 0x4(r3)
	  stfs      f4, 0x2F8(r31)
	  bl        0x8CD44
	  lfs       f2, 0x1FC(r31)
	  fmuls     f0, f30, f29
	  fadds     f1, f2, f1
	  stfs      f1, 0x1FC(r31)
	  lfs       f1, 0x1FC(r31)
	  stfs      f1, 0x1A8(r31)
	  stfs      f27, 0x1D4(r31)
	  stfs      f28, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  lwz       r3, 0x2F0(r31)
	  addi      r0, r3, 0x1
	  stw       r0, 0x2F0(r31)
	  lwz       r0, 0x2F0(r31)
	  cmpwi     r0, 0x78
	  ble-      .loc_0x300
	  lfs       f1, 0x194(r31)
	  lfs       f0, 0x2EC(r31)
	  lfs       f2, 0x18C(r31)
	  fsubs     f3, f1, f0
	  lfs       f1, 0x2E4(r31)
	  lfs       f0, 0xA7C(r2)
	  fsubs     f2, f2, f1
	  fmuls     f1, f3, f3
	  fmadds    f1, f2, f2, f1
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x2E0
	  li        r3, 0x78
	  li        r0, 0
	  stw       r3, 0x2E0(r31)
	  stw       r0, 0x230(r31)
	  lfs       f0, 0x198(r31)
	  stfs      f0, 0x2BC(r31)
	  lfs       f0, 0x19C(r31)
	  stfs      f0, 0x2C0(r31)
	  lfs       f0, 0x1A0(r31)
	  stfs      f0, 0x2C4(r31)

	.loc_0x2E0:
	  lfs       f0, 0x18C(r31)
	  li        r0, 0
	  stfs      f0, 0x2E4(r31)
	  lfs       f0, 0x190(r31)
	  stfs      f0, 0x2E8(r31)
	  lfs       f0, 0x194(r31)
	  stfs      f0, 0x2EC(r31)
	  stw       r0, 0x2F0(r31)

	.loc_0x300:
	  lwz       r3, 0x28C(r31)
	  li        r4, 0x513C
	  li        r5, 0
	  lwz       r12, 0x28(r3)
	  lwz       r12, 0x88(r12)
	  mtctr     r12
	  bctrl
	  psq_l     f31,0x98(r1),0,0
	  lfd       f31, 0x90(r1)
	  psq_l     f30,0x88(r1),0,0
	  lfd       f30, 0x80(r1)
	  psq_l     f29,0x78(r1),0,0
	  lfd       f29, 0x70(r1)
	  psq_l     f28,0x68(r1),0,0
	  lfd       f28, 0x60(r1)
	  psq_l     f27,0x58(r1),0,0
	  lfd       f27, 0x50(r1)
	  lwz       r0, 0xA4(r1)
	  lwz       r31, 0x4C(r1)
	  mtlr      r0
	  addi      r1, r1, 0xA0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80384F98
 * Size:	000150
 */
void Game::UmiMushi::Obj::setNextGoal(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stfd      f31, 0x30(r1)
	  psq_st    f31,0x38(r1),0,0
	  stw       r31, 0x2C(r1)
	  mr        r31, r3
	  lwz       r3, -0x6C18(r13)
	  lwz       r4, 0xC0(r31)
	  cmplwi    r3, 0
	  lfs       f31, 0x35C(r4)
	  beq-      .loc_0x40
	  lbz       r0, 0x48(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x40
	  lfs       f31, 0x934(r4)

	.loc_0x40:
	  lfs       f0, 0x198(r31)
	  stfs      f0, 0x2BC(r31)
	  lfs       f0, 0x19C(r31)
	  stfs      f0, 0x2C0(r31)
	  lfs       f0, 0x1A0(r31)
	  stfs      f0, 0x2C4(r31)
	  bl        -0x2BBA50
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0xC(r1)
	  lfd       f3, 0xA88(r2)
	  stw       r0, 0x8(r1)
	  lfs       f2, 0xA80(r2)
	  lfd       f0, 0x8(r1)
	  lfs       f1, 0xA84(r2)
	  fsubs     f3, f0, f3
	  lfs       f0, 0xA40(r2)
	  fdivs     f2, f3, f2
	  fmuls     f3, f1, f2
	  fcmpo     cr0, f3, f0
	  bge-      .loc_0xC0
	  lfs       f0, 0xA74(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fmuls     f0, f3, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x10(r1)
	  lwz       r0, 0x14(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r3, r0
	  fneg      f2, f0
	  b         .loc_0xE4

	.loc_0xC0:
	  lfs       f0, 0xA78(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fmuls     f0, f3, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x18(r1)
	  lwz       r0, 0x1C(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f2, r3, r0

	.loc_0xE4:
	  lfs       f1, 0x2BC(r31)
	  lfs       f0, 0xA40(r2)
	  fmadds    f1, f31, f2, f1
	  fcmpo     cr0, f3, f0
	  stfs      f1, 0x2BC(r31)
	  bge-      .loc_0x100
	  fneg      f3, f3

	.loc_0x100:
	  lfs       f1, 0xA78(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  lfs       f0, 0x2C4(r31)
	  fmuls     f1, f3, f1
	  fctiwz    f1, f1
	  stfd      f1, 0x20(r1)
	  lwz       r0, 0x24(r1)
	  rlwinm    r0,r0,3,18,28
	  add       r3, r3, r0
	  lfs       f1, 0x4(r3)
	  fmadds    f0, f31, f1, f0
	  stfs      f0, 0x2C4(r31)
	  psq_l     f31,0x38(r1),0,0
	  lwz       r0, 0x44(r1)
	  lfd       f31, 0x30(r1)
	  lwz       r31, 0x2C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803850E8
 * Size:	000810
 */
void Game::UmiMushi::Obj::changeColor(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x90(r1)
	  mflr      r0
	  stw       r0, 0x94(r1)
	  stfd      f31, 0x80(r1)
	  psq_st    f31,0x88(r1),0,0
	  stfd      f30, 0x70(r1)
	  psq_st    f30,0x78(r1),0,0
	  stfd      f29, 0x60(r1)
	  psq_st    f29,0x68(r1),0,0
	  stw       r31, 0x5C(r1)
	  mr        r31, r3
	  bl        -0x27FEA8
	  lfs       f0, 0xA30(r2)
	  mr        r3, r31
	  fsubs     f31, f1, f0
	  bl        -0x27DD30
	  cmpwi     r3, 0x2
	  bne-      .loc_0x498
	  lfs       f30, 0xA40(r2)
	  mr        r3, r31
	  lfs       f29, 0xA30(r2)
	  bl        -0x27DDF4
	  cmpwi     r3, 0xA
	  bne-      .loc_0x104
	  mr        r3, r31
	  bl        -0x27DF2C
	  lfs       f2, 0xA30(r2)
	  lwz       r3, 0x188(r31)
	  fsubs     f0, f1, f2
	  lwz       r0, 0x1C(r3)
	  fdivs     f31, f31, f0
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x88
	  fmr       f31, f2

	.loc_0x88:
	  lfs       f1, 0xA90(r2)
	  lfs       f0, 0xA40(r2)
	  fmuls     f1, f1, f31
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0xC8
	  lfs       f0, 0xA74(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fmuls     f0, f1, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x8(r1)
	  lwz       r0, 0xC(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r3, r0
	  fneg      f0, f0
	  b         .loc_0xEC

	.loc_0xC8:
	  lfs       f0, 0xA78(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fmuls     f0, f1, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x10(r1)
	  lwz       r0, 0x14(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r3, r0

	.loc_0xEC:
	  fabs      f1, f0
	  lfs       f0, 0xA30(r2)
	  frsp      f1, f1
	  fmr       f30, f1
	  fsubs     f29, f0, f1
	  b         .loc_0x2C0

	.loc_0x104:
	  lwz       r0, 0x2D8(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x2C0
	  lfs       f0, 0xA54(r2)
	  fcmpo     cr0, f31, f0
	  bge-      .loc_0x208
	  fdivs     f31, f31, f0
	  lis       r3, 0x4330
	  lha       r0, 0x31C(r31)
	  lha       r4, 0x344(r31)
	  xoris     r0, r0, 0x8000
	  lfs       f0, 0xA30(r2)
	  xoris     r4, r4, 0x8000
	  stw       r0, 0xC(r1)
	  lfd       f2, 0xA88(r2)
	  fsubs     f3, f0, f31
	  stw       r3, 0x8(r1)
	  lfd       f0, 0x8(r1)
	  stw       r4, 0x14(r1)
	  fsubs     f0, f0, f2
	  stw       r3, 0x10(r1)
	  lfd       f1, 0x10(r1)
	  fmuls     f0, f0, f3
	  stw       r3, 0x28(r1)
	  fsubs     f1, f1, f2
	  stw       r3, 0x20(r1)
	  fmadds    f0, f1, f31, f0
	  stw       r3, 0x40(r1)
	  stw       r3, 0x38(r1)
	  fctiwz    f0, f0
	  stfd      f0, 0x18(r1)
	  lwz       r0, 0x1C(r1)
	  sth       r0, 0x314(r31)
	  lha       r0, 0x31E(r31)
	  lha       r3, 0x346(r31)
	  xoris     r0, r0, 0x8000
	  stw       r0, 0x2C(r1)
	  xoris     r0, r3, 0x8000
	  lfd       f0, 0x28(r1)
	  stw       r0, 0x24(r1)
	  fsubs     f0, f0, f2
	  lfd       f1, 0x20(r1)
	  fsubs     f1, f1, f2
	  fmuls     f0, f0, f3
	  fmadds    f0, f1, f31, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x30(r1)
	  lwz       r0, 0x34(r1)
	  sth       r0, 0x316(r31)
	  lha       r0, 0x320(r31)
	  lha       r3, 0x348(r31)
	  xoris     r0, r0, 0x8000
	  stw       r0, 0x44(r1)
	  xoris     r0, r3, 0x8000
	  lfd       f0, 0x40(r1)
	  stw       r0, 0x3C(r1)
	  fsubs     f0, f0, f2
	  lfd       f1, 0x38(r1)
	  fsubs     f1, f1, f2
	  fmuls     f0, f0, f3
	  fmadds    f0, f1, f31, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x48(r1)
	  lwz       r0, 0x4C(r1)
	  sth       r0, 0x318(r31)

	.loc_0x208:
	  lfs       f0, 0xA94(r2)
	  fcmpo     cr0, f31, f0
	  blt-      .loc_0x7E4
	  fsubs     f31, f31, f0
	  mr        r3, r31
	  bl        -0x27E0E4
	  lfs       f0, 0xA94(r2)
	  lwz       r3, 0x188(r31)
	  fsubs     f0, f1, f0
	  lfs       f1, 0xA30(r2)
	  lwz       r0, 0x1C(r3)
	  fsubs     f0, f0, f1
	  cmplwi    r0, 0x3E8
	  fdivs     f31, f31, f0
	  bne-      .loc_0x248
	  fmr       f31, f1

	.loc_0x248:
	  lfs       f1, 0xA90(r2)
	  lfs       f0, 0xA40(r2)
	  fmuls     f1, f1, f31
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x288
	  lfs       f0, 0xA74(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fmuls     f0, f1, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x48(r1)
	  lwz       r0, 0x4C(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r3, r0
	  fneg      f0, f0
	  b         .loc_0x2AC

	.loc_0x288:
	  lfs       f0, 0xA78(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fmuls     f0, f1, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x40(r1)
	  lwz       r0, 0x44(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r3, r0

	.loc_0x2AC:
	  fabs      f1, f0
	  lfs       f0, 0xA30(r2)
	  frsp      f1, f1
	  fmr       f30, f1
	  fsubs     f29, f0, f1

	.loc_0x2C0:
	  lwz       r3, 0x2D8(r31)
	  lhz       r0, 0x2DC(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x3B4
	  lha       r0, 0x324(r31)
	  lis       r3, 0x4330
	  lha       r4, 0x32C(r31)
	  xoris     r0, r0, 0x8000
	  stw       r3, 0x40(r1)
	  xoris     r4, r4, 0x8000
	  lfd       f2, 0xA88(r2)
	  stw       r0, 0x44(r1)
	  lfd       f0, 0x40(r1)
	  stw       r4, 0x4C(r1)
	  fsubs     f0, f0, f2
	  stw       r3, 0x48(r1)
	  lfd       f1, 0x48(r1)
	  fmuls     f0, f29, f0
	  stw       r3, 0x28(r1)
	  fsubs     f1, f1, f2
	  stw       r3, 0x30(r1)
	  fmadds    f0, f30, f1, f0
	  stw       r3, 0x10(r1)
	  stw       r3, 0x18(r1)
	  fctiwz    f0, f0
	  stfd      f0, 0x38(r1)
	  lwz       r0, 0x3C(r1)
	  sth       r0, 0x314(r31)
	  lha       r0, 0x326(r31)
	  lha       r3, 0x32E(r31)
	  xoris     r0, r0, 0x8000
	  stw       r0, 0x2C(r1)
	  xoris     r0, r3, 0x8000
	  lfd       f0, 0x28(r1)
	  stw       r0, 0x34(r1)
	  fsubs     f0, f0, f2
	  lfd       f1, 0x30(r1)
	  fsubs     f1, f1, f2
	  fmuls     f0, f29, f0
	  fmadds    f0, f30, f1, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x20(r1)
	  lwz       r0, 0x24(r1)
	  sth       r0, 0x316(r31)
	  lha       r0, 0x328(r31)
	  lha       r3, 0x330(r31)
	  xoris     r0, r0, 0x8000
	  stw       r0, 0x14(r1)
	  xoris     r0, r3, 0x8000
	  lfd       f0, 0x10(r1)
	  stw       r0, 0x1C(r1)
	  fsubs     f0, f0, f2
	  lfd       f1, 0x18(r1)
	  fsubs     f1, f1, f2
	  fmuls     f0, f29, f0
	  fmadds    f0, f30, f1, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x8(r1)
	  lwz       r0, 0xC(r1)
	  sth       r0, 0x318(r31)
	  b         .loc_0x7E4

	.loc_0x3B4:
	  lha       r0, 0x334(r31)
	  lis       r3, 0x4330
	  lha       r4, 0x33C(r31)
	  xoris     r0, r0, 0x8000
	  stw       r3, 0x40(r1)
	  xoris     r4, r4, 0x8000
	  lfd       f2, 0xA88(r2)
	  stw       r0, 0x44(r1)
	  lfd       f0, 0x40(r1)
	  stw       r4, 0x4C(r1)
	  fsubs     f0, f0, f2
	  stw       r3, 0x48(r1)
	  lfd       f1, 0x48(r1)
	  fmuls     f0, f29, f0
	  stw       r3, 0x28(r1)
	  fsubs     f1, f1, f2
	  stw       r3, 0x30(r1)
	  fmadds    f0, f30, f1, f0
	  stw       r3, 0x10(r1)
	  stw       r3, 0x18(r1)
	  fctiwz    f0, f0
	  stfd      f0, 0x38(r1)
	  lwz       r0, 0x3C(r1)
	  sth       r0, 0x314(r31)
	  lha       r0, 0x336(r31)
	  lha       r3, 0x33E(r31)
	  xoris     r0, r0, 0x8000
	  stw       r0, 0x2C(r1)
	  xoris     r0, r3, 0x8000
	  lfd       f0, 0x28(r1)
	  stw       r0, 0x34(r1)
	  fsubs     f0, f0, f2
	  lfd       f1, 0x30(r1)
	  fsubs     f1, f1, f2
	  fmuls     f0, f29, f0
	  fmadds    f0, f30, f1, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x20(r1)
	  lwz       r0, 0x24(r1)
	  sth       r0, 0x316(r31)
	  lha       r0, 0x338(r31)
	  lha       r3, 0x340(r31)
	  xoris     r0, r0, 0x8000
	  stw       r0, 0x14(r1)
	  xoris     r0, r3, 0x8000
	  lfd       f0, 0x10(r1)
	  stw       r0, 0x1C(r1)
	  fsubs     f0, f0, f2
	  lfd       f1, 0x18(r1)
	  fsubs     f1, f1, f2
	  fmuls     f0, f29, f0
	  fmadds    f0, f30, f1, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x8(r1)
	  lwz       r0, 0xC(r1)
	  sth       r0, 0x318(r31)
	  b         .loc_0x7E4

	.loc_0x498:
	  lfs       f0, 0xA3C(r2)
	  fcmpo     cr0, f31, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x4B4
	  lfs       f0, 0xA98(r2)
	  fmuls     f31, f31, f0
	  b         .loc_0x4B8

	.loc_0x4B4:
	  lfs       f31, 0xA30(r2)

	.loc_0x4B8:
	  lfs       f1, 0xA9C(r2)
	  lfs       f0, 0xA40(r2)
	  fmuls     f1, f1, f31
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x4F8
	  lfs       f0, 0xA74(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fmuls     f0, f1, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x48(r1)
	  lwz       r0, 0x4C(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r3, r0
	  fneg      f0, f0
	  b         .loc_0x51C

	.loc_0x4F8:
	  lfs       f0, 0xA78(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fmuls     f0, f1, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x40(r1)
	  lwz       r0, 0x44(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r3, r0

	.loc_0x51C:
	  lfs       f1, 0xA30(r2)
	  lwz       r3, 0x2D8(r31)
	  fsubs     f1, f1, f0
	  cmplwi    r3, 0
	  beq-      .loc_0x704
	  lhz       r0, 0x2DC(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x620
	  lha       r0, 0x32C(r31)
	  lis       r3, 0x4330
	  lha       r4, 0x34C(r31)
	  xoris     r0, r0, 0x8000
	  stw       r3, 0x40(r1)
	  xoris     r4, r4, 0x8000
	  lfd       f4, 0xA88(r2)
	  stw       r0, 0x44(r1)
	  lfd       f2, 0x40(r1)
	  stw       r4, 0x4C(r1)
	  fsubs     f2, f2, f4
	  stw       r3, 0x48(r1)
	  lfd       f3, 0x48(r1)
	  fmuls     f2, f1, f2
	  stw       r3, 0x28(r1)
	  fsubs     f3, f3, f4
	  stw       r3, 0x30(r1)
	  fmadds    f2, f0, f3, f2
	  stw       r3, 0x10(r1)
	  stw       r3, 0x18(r1)
	  fctiwz    f2, f2
	  stfd      f2, 0x38(r1)
	  lwz       r0, 0x3C(r1)
	  sth       r0, 0x314(r31)
	  lha       r0, 0x32E(r31)
	  lha       r3, 0x34E(r31)
	  xoris     r0, r0, 0x8000
	  stw       r0, 0x2C(r1)
	  xoris     r0, r3, 0x8000
	  lfd       f2, 0x28(r1)
	  stw       r0, 0x34(r1)
	  fsubs     f2, f2, f4
	  lfd       f3, 0x30(r1)
	  fsubs     f3, f3, f4
	  fmuls     f2, f1, f2
	  fmadds    f2, f0, f3, f2
	  fctiwz    f2, f2
	  stfd      f2, 0x20(r1)
	  lwz       r0, 0x24(r1)
	  sth       r0, 0x316(r31)
	  lha       r0, 0x330(r31)
	  lha       r3, 0x350(r31)
	  xoris     r0, r0, 0x8000
	  stw       r0, 0x14(r1)
	  xoris     r0, r3, 0x8000
	  lfd       f2, 0x10(r1)
	  stw       r0, 0x1C(r1)
	  fsubs     f2, f2, f4
	  lfd       f3, 0x18(r1)
	  fsubs     f3, f3, f4
	  fmuls     f1, f1, f2
	  fmadds    f0, f0, f3, f1
	  fctiwz    f0, f0
	  stfd      f0, 0x8(r1)
	  lwz       r0, 0xC(r1)
	  sth       r0, 0x318(r31)
	  b         .loc_0x7E4

	.loc_0x620:
	  lha       r0, 0x33C(r31)
	  lis       r3, 0x4330
	  lha       r4, 0x34C(r31)
	  xoris     r0, r0, 0x8000
	  stw       r3, 0x40(r1)
	  xoris     r4, r4, 0x8000
	  lfd       f4, 0xA88(r2)
	  stw       r0, 0x44(r1)
	  lfd       f2, 0x40(r1)
	  stw       r4, 0x4C(r1)
	  fsubs     f2, f2, f4
	  stw       r3, 0x48(r1)
	  lfd       f3, 0x48(r1)
	  fmuls     f2, f1, f2
	  stw       r3, 0x28(r1)
	  fsubs     f3, f3, f4
	  stw       r3, 0x30(r1)
	  fmadds    f2, f0, f3, f2
	  stw       r3, 0x10(r1)
	  stw       r3, 0x18(r1)
	  fctiwz    f2, f2
	  stfd      f2, 0x38(r1)
	  lwz       r0, 0x3C(r1)
	  sth       r0, 0x314(r31)
	  lha       r0, 0x33E(r31)
	  lha       r3, 0x34E(r31)
	  xoris     r0, r0, 0x8000
	  stw       r0, 0x2C(r1)
	  xoris     r0, r3, 0x8000
	  lfd       f2, 0x28(r1)
	  stw       r0, 0x34(r1)
	  fsubs     f2, f2, f4
	  lfd       f3, 0x30(r1)
	  fsubs     f3, f3, f4
	  fmuls     f2, f1, f2
	  fmadds    f2, f0, f3, f2
	  fctiwz    f2, f2
	  stfd      f2, 0x20(r1)
	  lwz       r0, 0x24(r1)
	  sth       r0, 0x316(r31)
	  lha       r0, 0x340(r31)
	  lha       r3, 0x350(r31)
	  xoris     r0, r0, 0x8000
	  stw       r0, 0x14(r1)
	  xoris     r0, r3, 0x8000
	  lfd       f2, 0x10(r1)
	  stw       r0, 0x1C(r1)
	  fsubs     f2, f2, f4
	  lfd       f3, 0x18(r1)
	  fsubs     f3, f3, f4
	  fmuls     f1, f1, f2
	  fmadds    f0, f0, f3, f1
	  fctiwz    f0, f0
	  stfd      f0, 0x8(r1)
	  lwz       r0, 0xC(r1)
	  sth       r0, 0x318(r31)
	  b         .loc_0x7E4

	.loc_0x704:
	  lha       r0, 0x344(r31)
	  lis       r3, 0x4330
	  lha       r4, 0x34C(r31)
	  xoris     r0, r0, 0x8000
	  stw       r3, 0x40(r1)
	  xoris     r4, r4, 0x8000
	  lfd       f4, 0xA88(r2)
	  stw       r0, 0x44(r1)
	  lfd       f2, 0x40(r1)
	  stw       r4, 0x4C(r1)
	  fsubs     f2, f2, f4
	  stw       r3, 0x48(r1)
	  lfd       f3, 0x48(r1)
	  fmuls     f2, f1, f2
	  stw       r3, 0x28(r1)
	  fsubs     f3, f3, f4
	  stw       r3, 0x30(r1)
	  fmadds    f2, f0, f3, f2
	  stw       r3, 0x10(r1)
	  stw       r3, 0x18(r1)
	  fctiwz    f2, f2
	  stfd      f2, 0x38(r1)
	  lwz       r0, 0x3C(r1)
	  sth       r0, 0x314(r31)
	  lha       r0, 0x346(r31)
	  lha       r3, 0x34E(r31)
	  xoris     r0, r0, 0x8000
	  stw       r0, 0x2C(r1)
	  xoris     r0, r3, 0x8000
	  lfd       f2, 0x28(r1)
	  stw       r0, 0x34(r1)
	  fsubs     f2, f2, f4
	  lfd       f3, 0x30(r1)
	  fsubs     f3, f3, f4
	  fmuls     f2, f1, f2
	  fmadds    f2, f0, f3, f2
	  fctiwz    f2, f2
	  stfd      f2, 0x20(r1)
	  lwz       r0, 0x24(r1)
	  sth       r0, 0x316(r31)
	  lha       r0, 0x348(r31)
	  lha       r3, 0x350(r31)
	  xoris     r0, r0, 0x8000
	  stw       r0, 0x14(r1)
	  xoris     r0, r3, 0x8000
	  lfd       f2, 0x10(r1)
	  stw       r0, 0x1C(r1)
	  fsubs     f2, f2, f4
	  lfd       f3, 0x18(r1)
	  fsubs     f3, f3, f4
	  fmuls     f1, f1, f2
	  fmadds    f0, f0, f3, f1
	  fctiwz    f0, f0
	  stfd      f0, 0x8(r1)
	  lwz       r0, 0xC(r1)
	  sth       r0, 0x318(r31)

	.loc_0x7E4:
	  psq_l     f31,0x88(r1),0,0
	  lfd       f31, 0x80(r1)
	  psq_l     f30,0x78(r1),0,0
	  lfd       f30, 0x70(r1)
	  psq_l     f29,0x68(r1),0,0
	  lfd       f29, 0x60(r1)
	  lwz       r0, 0x94(r1)
	  lwz       r31, 0x5C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x90
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803858F8
 * Size:	0001C0
 */
void Game::UmiMushi::Obj::resetColor(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x80(r1)
	  mflr      r0
	  stw       r0, 0x84(r1)
	  stfd      f31, 0x70(r1)
	  psq_st    f31,0x78(r1),0,0
	  stw       r31, 0x6C(r1)
	  mr        r31, r3
	  bl        -0x2806A8
	  lfs       f0, 0xA30(r2)
	  mr        r3, r31
	  fsubs     f31, f1, f0
	  bl        -0x27E704
	  lfs       f2, 0xA30(r2)
	  lwz       r3, 0x188(r31)
	  fsubs     f0, f1, f2
	  lwz       r0, 0x1C(r3)
	  fdivs     f31, f31, f0
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x50
	  fmr       f31, f2

	.loc_0x50:
	  lfs       f1, 0xA90(r2)
	  lfs       f0, 0xA40(r2)
	  fmuls     f1, f1, f31
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x90
	  lfs       f0, 0xA74(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fmuls     f0, f1, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x8(r1)
	  lwz       r0, 0xC(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r3, r0
	  fneg      f0, f0
	  b         .loc_0xB4

	.loc_0x90:
	  lfs       f0, 0xA78(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fmuls     f0, f1, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x10(r1)
	  lwz       r0, 0x14(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r3, r0

	.loc_0xB4:
	  lha       r0, 0x31C(r31)
	  lis       r3, 0x4330
	  fabs      f0, f0
	  lha       r4, 0x344(r31)
	  xoris     r0, r0, 0x8000
	  stw       r3, 0x20(r1)
	  xoris     r4, r4, 0x8000
	  lfs       f1, 0xA30(r2)
	  stw       r0, 0x24(r1)
	  frsp      f3, f0
	  lfd       f2, 0xA88(r2)
	  lfd       f0, 0x20(r1)
	  stw       r4, 0x1C(r1)
	  fsubs     f4, f1, f3
	  fsubs     f0, f0, f2
	  stw       r3, 0x18(r1)
	  lfd       f1, 0x18(r1)
	  fmuls     f0, f4, f0
	  stw       r3, 0x38(r1)
	  fsubs     f1, f1, f2
	  stw       r3, 0x30(r1)
	  fmadds    f0, f3, f1, f0
	  stw       r3, 0x50(r1)
	  stw       r3, 0x48(r1)
	  fctiwz    f0, f0
	  stfd      f0, 0x28(r1)
	  lwz       r0, 0x2C(r1)
	  sth       r0, 0x314(r31)
	  lha       r0, 0x31E(r31)
	  lha       r3, 0x346(r31)
	  xoris     r0, r0, 0x8000
	  stw       r0, 0x3C(r1)
	  xoris     r0, r3, 0x8000
	  lfd       f0, 0x38(r1)
	  stw       r0, 0x34(r1)
	  fsubs     f0, f0, f2
	  lfd       f1, 0x30(r1)
	  fsubs     f1, f1, f2
	  fmuls     f0, f4, f0
	  fmadds    f0, f3, f1, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x40(r1)
	  lwz       r0, 0x44(r1)
	  sth       r0, 0x316(r31)
	  lha       r0, 0x320(r31)
	  lha       r3, 0x348(r31)
	  xoris     r0, r0, 0x8000
	  stw       r0, 0x54(r1)
	  xoris     r0, r3, 0x8000
	  lfd       f0, 0x50(r1)
	  stw       r0, 0x4C(r1)
	  fsubs     f0, f0, f2
	  lfd       f1, 0x48(r1)
	  fsubs     f1, f1, f2
	  fmuls     f0, f4, f0
	  fmadds    f0, f3, f1, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x58(r1)
	  lwz       r0, 0x5C(r1)
	  sth       r0, 0x318(r31)
	  psq_l     f31,0x78(r1),0,0
	  lwz       r0, 0x84(r1)
	  lfd       f31, 0x70(r1)
	  lwz       r31, 0x6C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x80
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80385AB8
 * Size:	0001BC
 */
void Game::UmiMushi::Obj::turnFunc(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x70(r1)
	  mflr      r0
	  stw       r0, 0x74(r1)
	  stfd      f31, 0x60(r1)
	  psq_st    f31,0x68(r1),0,0
	  stfd      f30, 0x50(r1)
	  psq_st    f30,0x58(r1),0,0
	  stfd      f29, 0x40(r1)
	  psq_st    f29,0x48(r1),0,0
	  stfd      f28, 0x30(r1)
	  psq_st    f28,0x38(r1),0,0
	  stw       r31, 0x2C(r1)
	  mr        r31, r3
	  lwz       r4, 0x2D8(r3)
	  cmplwi    r4, 0
	  beq-      .loc_0x6C
	  lwz       r12, 0x0(r4)
	  addi      r3, r1, 0x14
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, 0x14(r1)
	  stfs      f0, 0x2BC(r31)
	  lfs       f0, 0x18(r1)
	  stfs      f0, 0x2C0(r31)
	  lfs       f0, 0x1C(r1)
	  stfs      f0, 0x2C4(r31)

	.loc_0x6C:
	  lwz       r3, 0x28C(r31)
	  li        r4, 0x513C
	  li        r5, 0
	  lwz       r12, 0x28(r3)
	  lwz       r12, 0x88(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x39C(r31)
	  lfs       f31, 0x2BC(r31)
	  cmpwi     r0, 0x65
	  lfs       f28, 0x2C4(r31)
	  lfs       f2, 0xA30(r2)
	  bne-      .loc_0xA8
	  lwz       r3, 0xC0(r31)
	  lfs       f2, 0xA2C(r3)

	.loc_0xA8:
	  lwz       r5, 0xC0(r31)
	  mr        r4, r31
	  lwz       r12, 0x0(r31)
	  addi      r3, r1, 0x8
	  lfs       f1, 0x8E4(r5)
	  lfs       f0, 0x8BC(r5)
	  lwz       r12, 0x8(r12)
	  fmuls     f29, f2, f1
	  fmuls     f30, f2, f0
	  mtctr     r12
	  bctrl
	  lfs       f1, 0x8(r1)
	  lis       r3, 0x8051
	  lfs       f0, 0x10(r1)
	  subi      r3, r3, 0x2E20
	  fsubs     f1, f31, f1
	  fsubs     f2, f28, f0
	  bl        -0x350A9C
	  bl        0x8C028
	  lwz       r12, 0x0(r31)
	  fmr       f31, f1
	  mr        r3, r31
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fmr       f2, f1
	  fmr       f1, f31
	  bl        0x8C030
	  fmr       f31, f1
	  lfs       f0, 0xA70(r2)
	  lfs       f1, 0xA6C(r2)
	  fmuls     f0, f0, f29
	  fmuls     f29, f31, f30
	  fmuls     f1, f1, f0
	  fabs      f0, f29
	  frsp      f0, f0
	  fcmpo     cr0, f0, f1
	  ble-      .loc_0x158
	  lfs       f0, 0xA40(r2)
	  fcmpo     cr0, f29, f0
	  ble-      .loc_0x154
	  fmr       f29, f1
	  b         .loc_0x158

	.loc_0x154:
	  fneg      f29, f1

	.loc_0x158:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fadds     f1, f29, f1
	  bl        0x8BFA8
	  stfs      f1, 0x1FC(r31)
	  fabs      f1, f31
	  lfs       f0, 0x1FC(r31)
	  frsp      f1, f1
	  stfs      f0, 0x1A8(r31)
	  psq_l     f31,0x68(r1),0,0
	  lfd       f31, 0x60(r1)
	  psq_l     f30,0x58(r1),0,0
	  lfd       f30, 0x50(r1)
	  psq_l     f29,0x48(r1),0,0
	  lfd       f29, 0x40(r1)
	  psq_l     f28,0x38(r1),0,0
	  lfd       f28, 0x30(r1)
	  lwz       r0, 0x74(r1)
	  lwz       r31, 0x2C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x70
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80385C74
 * Size:	000014
 */
void Game::UmiMushi::Obj::resetWalkParm(void)
{
	/*
	.loc_0x0:
	  lfs       f1, 0x1FC(r3)
	  lfs       f0, 0xA40(r2)
	  stfs      f1, 0x2F8(r3)
	  stfs      f0, 0x2FC(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80385C88
 * Size:	000248
 */
void Game::UmiMushi::Obj::isChangeNavi(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x70(r1)
	  mflr      r0
	  stw       r0, 0x74(r1)
	  stfd      f31, 0x60(r1)
	  psq_st    f31,0x68(r1),0,0
	  stfd      f30, 0x50(r1)
	  psq_st    f30,0x58(r1),0,0
	  stfd      f29, 0x40(r1)
	  psq_st    f29,0x48(r1),0,0
	  stw       r31, 0x3C(r1)
	  stw       r30, 0x38(r1)
	  mr        r31, r3
	  lwz       r0, 0x39C(r3)
	  cmpwi     r0, 0x65
	  bne-      .loc_0x44
	  li        r3, 0
	  b         .loc_0x218

	.loc_0x44:
	  lwz       r4, -0x6C18(r13)
	  cmplwi    r4, 0
	  beq-      .loc_0x7C
	  lwz       r0, 0x44(r4)
	  cmpwi     r0, 0x3
	  bne-      .loc_0x7C
	  lwz       r6, 0xC0(r31)
	  li        r4, 0
	  lfs       f1, 0xA68(r2)
	  li        r5, 0
	  lfs       f2, 0x44C(r6)
	  bl        -0x273604
	  mr        r30, r3
	  b         .loc_0x88

	.loc_0x7C:
	  lwz       r3, -0x6D20(r13)
	  bl        -0x22B0E8
	  mr        r30, r3

	.loc_0x88:
	  cmplwi    r30, 0
	  beq-      .loc_0x214
	  lwz       r0, 0x2D8(r31)
	  lwz       r3, 0xC0(r31)
	  cmplwi    r0, 0
	  lfs       f29, 0x44C(r3)
	  beq-      .loc_0xAC
	  lfs       f0, 0xAA0(r2)
	  fmuls     f29, f29, f0

	.loc_0xAC:
	  mr        r3, r30
	  fmuls     f29, f29, f29
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x1CC
	  mr        r4, r30
	  addi      r3, r1, 0x14
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r30
	  addi      r3, r1, 0x20
	  lwz       r12, 0x0(r30)
	  lfs       f30, 0x1C(r1)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r30
	  addi      r3, r1, 0x2C
	  lwz       r12, 0x0(r30)
	  lfs       f31, 0x24(r1)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f1, 0x190(r31)
	  lfs       f0, 0x194(r31)
	  fsubs     f3, f1, f31
	  lfs       f4, 0x2C(r1)
	  lfs       f1, 0x18C(r31)
	  fsubs     f2, f0, f30
	  fsubs     f1, f1, f4
	  fmuls     f0, f3, f3
	  fmadds    f0, f1, f1, f0
	  fmadds    f0, f2, f2, f0
	  fcmpo     cr0, f0, f29
	  bge-      .loc_0x1CC
	  lwz       r0, 0x2D8(r31)
	  cmplw     r0, r30
	  beq-      .loc_0x1C4
	  lha       r0, 0x314(r31)
	  addi      r3, r1, 0x8
	  sth       r0, 0x31C(r31)
	  lha       r0, 0x316(r31)
	  sth       r0, 0x31E(r31)
	  lha       r0, 0x318(r31)
	  sth       r0, 0x320(r31)
	  lha       r0, 0x31A(r31)
	  sth       r0, 0x322(r31)
	  stw       r30, 0x2D8(r31)
	  lwz       r0, 0x2D8(r31)
	  stw       r0, 0x230(r31)
	  lwz       r4, 0x2D8(r31)
	  lwz       r12, 0x0(r4)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, 0x8(r1)
	  li        r0, 0
	  li        r3, 0x1
	  stfs      f0, 0x2BC(r31)
	  lfs       f0, 0xC(r1)
	  stfs      f0, 0x2C0(r31)
	  lfs       f0, 0x10(r1)
	  stfs      f0, 0x2C4(r31)
	  stb       r0, 0x2DC(r31)
	  b         .loc_0x218

	.loc_0x1C4:
	  li        r3, 0
	  b         .loc_0x218

	.loc_0x1CC:
	  lwz       r0, 0x2D8(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x1E0
	  cmplw     r0, r30
	  bne-      .loc_0x214

	.loc_0x1E0:
	  li        r4, 0
	  li        r3, 0x1
	  stw       r4, 0x2D8(r31)
	  lha       r0, 0x314(r31)
	  sth       r0, 0x31C(r31)
	  lha       r0, 0x316(r31)
	  sth       r0, 0x31E(r31)
	  lha       r0, 0x318(r31)
	  sth       r0, 0x320(r31)
	  lha       r0, 0x31A(r31)
	  sth       r0, 0x322(r31)
	  stb       r4, 0x2DC(r31)
	  b         .loc_0x218

	.loc_0x214:
	  li        r3, 0

	.loc_0x218:
	  psq_l     f31,0x68(r1),0,0
	  lfd       f31, 0x60(r1)
	  psq_l     f30,0x58(r1),0,0
	  lfd       f30, 0x50(r1)
	  psq_l     f29,0x48(r1),0,0
	  lfd       f29, 0x40(r1)
	  lwz       r31, 0x3C(r1)
	  lwz       r0, 0x74(r1)
	  lwz       r30, 0x38(r1)
	  mtlr      r0
	  addi      r1, r1, 0x70
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80385ED0
 * Size:	0001D8
 */
void Game::UmiMushi::Obj::isFindTarget(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x90(r1)
	  mflr      r0
	  stw       r0, 0x94(r1)
	  stfd      f31, 0x80(r1)
	  psq_st    f31,0x88(r1),0,0
	  stfd      f30, 0x70(r1)
	  psq_st    f30,0x78(r1),0,0
	  stfd      f29, 0x60(r1)
	  psq_st    f29,0x68(r1),0,0
	  stfd      f28, 0x50(r1)
	  psq_st    f28,0x58(r1),0,0
	  stw       r31, 0x4C(r1)
	  mr        r31, r3
	  li        r0, 0
	  stw       r0, 0x230(r3)
	  lwz       r0, 0x2E0(r3)
	  cmpwi     r0, 0
	  ble-      .loc_0x50
	  li        r3, 0
	  b         .loc_0x1A4

	.loc_0x50:
	  lwz       r3, 0xC0(r31)
	  lfs       f1, 0x44C(r3)
	  fmuls     f0, f1, f1
	  stfs      f1, 0x8(r1)
	  stfs      f0, 0x8(r1)
	  lwz       r4, 0x2D8(r31)
	  cmplwi    r4, 0
	  beq-      .loc_0x110
	  lwz       r5, 0xC0(r31)
	  addi      r3, r1, 0x24
	  lwz       r12, 0x0(r4)
	  lfs       f28, 0x44C(r5)
	  lwz       r12, 0x8(r12)
	  fmuls     f28, f28, f28
	  lfs       f29, 0x194(r31)
	  lfs       f30, 0x18C(r31)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x2D8(r31)
	  addi      r3, r1, 0x30
	  lfs       f31, 0x2C(r1)
	  lwz       r12, 0x0(r4)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  fsubs     f0, f31, f29
	  lfs       f1, 0x30(r1)
	  fsubs     f1, f1, f30
	  fmuls     f0, f0, f0
	  fmadds    f0, f1, f1, f0
	  fcmpo     cr0, f0, f28
	  bge-      .loc_0x110
	  lwz       r0, 0x2D8(r31)
	  addi      r3, r1, 0x18
	  stw       r0, 0x230(r31)
	  lwz       r4, 0x230(r31)
	  lwz       r12, 0x0(r4)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, 0x18(r1)
	  li        r3, 0x1
	  stfs      f0, 0x2BC(r31)
	  lfs       f0, 0x1C(r1)
	  stfs      f0, 0x2C0(r31)
	  lfs       f0, 0x20(r1)
	  stfs      f0, 0x2C4(r31)
	  b         .loc_0x1A4

	.loc_0x110:
	  lwz       r6, 0xC0(r31)
	  mr        r3, r31
	  addi      r4, r1, 0x8
	  li        r5, 0
	  lfs       f1, 0x49C(r6)
	  lfs       f2, 0x44C(r6)
	  bl        -0x273904
	  stw       r3, 0x230(r31)
	  mr        r3, r31
	  addi      r4, r1, 0x8
	  li        r5, 0
	  lwz       r6, 0xC0(r31)
	  lfs       f28, 0x8(r1)
	  lfs       f1, 0x49C(r6)
	  lfs       f2, 0x44C(r6)
	  bl        -0x2734B8
	  lfs       f0, 0x8(r1)
	  fcmpo     cr0, f0, f28
	  bge-      .loc_0x160
	  stw       r3, 0x230(r31)

	.loc_0x160:
	  lwz       r4, 0x230(r31)
	  cmplwi    r4, 0
	  beq-      .loc_0x1A0
	  lwz       r12, 0x0(r4)
	  addi      r3, r1, 0xC
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, 0xC(r1)
	  li        r3, 0x1
	  stfs      f0, 0x2BC(r31)
	  lfs       f0, 0x10(r1)
	  stfs      f0, 0x2C0(r31)
	  lfs       f0, 0x14(r1)
	  stfs      f0, 0x2C4(r31)
	  b         .loc_0x1A4

	.loc_0x1A0:
	  li        r3, 0

	.loc_0x1A4:
	  psq_l     f31,0x88(r1),0,0
	  lfd       f31, 0x80(r1)
	  psq_l     f30,0x78(r1),0,0
	  lfd       f30, 0x70(r1)
	  psq_l     f29,0x68(r1),0,0
	  lfd       f29, 0x60(r1)
	  psq_l     f28,0x58(r1),0,0
	  lfd       f28, 0x50(r1)
	  lwz       r0, 0x94(r1)
	  lwz       r31, 0x4C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x90
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803860A8
 * Size:	000240
 */
void Game::UmiMushi::Obj::isAttackStart(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0xB0(r1)
	  mflr      r0
	  stw       r0, 0xB4(r1)
	  stfd      f31, 0xA0(r1)
	  psq_st    f31,0xA8(r1),0,0
	  stfd      f30, 0x90(r1)
	  psq_st    f30,0x98(r1),0,0
	  stfd      f29, 0x80(r1)
	  psq_st    f29,0x88(r1),0,0
	  stfd      f28, 0x70(r1)
	  psq_st    f28,0x78(r1),0,0
	  stfd      f27, 0x60(r1)
	  psq_st    f27,0x68(r1),0,0
	  stw       r31, 0x5C(r1)
	  mr        r31, r3
	  lfs       f1, 0xA70(r2)
	  lwz       r4, 0xC0(r3)
	  lwz       r3, 0x2D8(r3)
	  lfs       f0, 0x5DC(r4)
	  lfs       f2, 0x5B4(r4)
	  cmplwi    r3, 0
	  fmuls     f0, f1, f0
	  lfs       f1, 0xA6C(r2)
	  fmuls     f31, f2, f2
	  fmuls     f30, f1, f0
	  beq-      .loc_0x198
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x198
	  lwz       r4, 0x2D8(r31)
	  addi      r3, r1, 0x20
	  lwz       r12, 0x0(r4)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r31
	  lfs       f2, 0x20(r1)
	  lwz       r12, 0x0(r31)
	  addi      r3, r1, 0x2C
	  lfs       f1, 0x24(r1)
	  lfs       f0, 0x28(r1)
	  lwz       r12, 0x8(r12)
	  stfs      f2, 0x8(r1)
	  stfs      f1, 0xC(r1)
	  stfs      f0, 0x10(r1)
	  mtctr     r12
	  bctrl
	  lfs       f5, 0x2C(r1)
	  lis       r3, 0x8051
	  lfs       f3, 0x34(r1)
	  subi      r3, r3, 0x2E20
	  lfs       f1, 0x8(r1)
	  lfs       f0, 0x10(r1)
	  lfs       f4, 0x30(r1)
	  fsubs     f1, f1, f5
	  fsubs     f2, f0, f3
	  stfs      f5, 0x14(r1)
	  stfs      f4, 0x18(r1)
	  stfs      f3, 0x1C(r1)
	  bl        -0x351098
	  bl        0x8BA2C
	  lwz       r12, 0x0(r31)
	  fmr       f27, f1
	  mr        r3, r31
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fmr       f2, f1
	  fmr       f1, f27
	  bl        0x8BA34
	  fabs      f0, f1
	  frsp      f0, f0
	  fcmpo     cr0, f0, f30
	  cror      2, 0, 0x2
	  bne-      .loc_0x198
	  lwz       r4, 0x2D8(r31)
	  addi      r3, r1, 0x38
	  lfs       f27, 0x194(r31)
	  lwz       r12, 0x0(r4)
	  lfs       f28, 0x18C(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x2D8(r31)
	  addi      r3, r1, 0x44
	  lfs       f29, 0x40(r1)
	  lwz       r12, 0x0(r4)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  fsubs     f0, f29, f27
	  lfs       f1, 0x44(r1)
	  fsubs     f1, f1, f28
	  fmuls     f0, f0, f0
	  fmadds    f0, f1, f1, f0
	  fcmpo     cr0, f0, f31
	  bge-      .loc_0x198
	  li        r3, 0x1
	  b         .loc_0x204

	.loc_0x198:
	  lwz       r5, 0xC0(r31)
	  fmr       f1, f30
	  mr        r3, r31
	  li        r4, 0
	  lfs       f2, 0x5B4(r5)
	  li        r5, 0
	  bl        -0x2736F4
	  cmplwi    r3, 0
	  beq-      .loc_0x1C8
	  stw       r3, 0x230(r31)
	  li        r3, 0x1
	  b         .loc_0x204

	.loc_0x1C8:
	  lwz       r0, 0x39C(r31)
	  cmpwi     r0, 0x65
	  bne-      .loc_0x200
	  lwz       r5, 0xC0(r31)
	  fmr       f1, f30
	  mr        r3, r31
	  li        r4, 0
	  lfs       f2, 0x5B4(r5)
	  li        r5, 0
	  bl        -0x273BA0
	  cmplwi    r3, 0
	  beq-      .loc_0x200
	  li        r3, 0x1
	  b         .loc_0x204

	.loc_0x200:
	  li        r3, 0

	.loc_0x204:
	  psq_l     f31,0xA8(r1),0,0
	  lfd       f31, 0xA0(r1)
	  psq_l     f30,0x98(r1),0,0
	  lfd       f30, 0x90(r1)
	  psq_l     f29,0x88(r1),0,0
	  lfd       f29, 0x80(r1)
	  psq_l     f28,0x78(r1),0,0
	  lfd       f28, 0x70(r1)
	  psq_l     f27,0x68(r1),0,0
	  lfd       f27, 0x60(r1)
	  lwz       r0, 0xB4(r1)
	  lwz       r31, 0x5C(r1)
	  mtlr      r0
	  addi      r1, r1, 0xB0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803862E8
 * Size:	0001B4
 */
void Game::UmiMushi::Obj::isNeedTurn(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x70(r1)
	  mflr      r0
	  stw       r0, 0x74(r1)
	  stfd      f31, 0x60(r1)
	  psq_st    f31,0x68(r1),0,0
	  stfd      f30, 0x50(r1)
	  psq_st    f30,0x58(r1),0,0
	  stw       r31, 0x4C(r1)
	  mr        r31, r3
	  addi      r3, r1, 0x2C
	  mr        r4, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f5, 0x2C(r1)
	  lis       r3, 0x8051
	  lfs       f3, 0x34(r1)
	  subi      r3, r3, 0x2E20
	  lfs       f1, 0x2BC(r31)
	  lfs       f0, 0x2C4(r31)
	  lfs       f4, 0x30(r1)
	  fsubs     f1, f1, f5
	  fsubs     f2, f0, f3
	  stfs      f5, 0x20(r1)
	  stfs      f4, 0x24(r1)
	  stfs      f3, 0x28(r1)
	  bl        -0x35124C
	  bl        0x8B878
	  lwz       r12, 0x0(r31)
	  fmr       f31, f1
	  mr        r3, r31
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fmr       f2, f1
	  fmr       f1, f31
	  bl        0x8B880
	  lwz       r3, 0xC0(r31)
	  fabs      f3, f1
	  lfs       f1, 0xA70(r2)
	  lfs       f0, 0x844(r3)
	  lfs       f2, 0xA6C(r2)
	  frsp      f3, f3
	  fmuls     f0, f1, f0
	  fmuls     f0, f2, f0
	  fcmpo     cr0, f3, f0
	  ble-      .loc_0xC8
	  li        r3, 0x1
	  b         .loc_0x190

	.loc_0xC8:
	  lwz       r4, 0x2D8(r31)
	  cmplwi    r4, 0
	  beq-      .loc_0x18C
	  lwz       r12, 0x0(r4)
	  addi      r3, r1, 0x38
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r31
	  addi      r3, r1, 0x14
	  lwz       r12, 0x0(r31)
	  lfs       f31, 0x38(r1)
	  lwz       r12, 0x8(r12)
	  lfs       f30, 0x40(r1)
	  mtctr     r12
	  bctrl
	  lfs       f4, 0x14(r1)
	  lis       r3, 0x8051
	  lfs       f0, 0x1C(r1)
	  subi      r3, r3, 0x2E20
	  lfs       f3, 0x18(r1)
	  fsubs     f1, f31, f4
	  fsubs     f2, f30, f0
	  stfs      f4, 0x8(r1)
	  stfs      f3, 0xC(r1)
	  stfs      f0, 0x10(r1)
	  bl        -0x351310
	  bl        0x8B7B4
	  lwz       r12, 0x0(r31)
	  fmr       f31, f1
	  mr        r3, r31
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fmr       f2, f1
	  fmr       f1, f31
	  bl        0x8B7BC
	  lwz       r3, 0xC0(r31)
	  fabs      f3, f1
	  lfs       f1, 0xA70(r2)
	  lfs       f0, 0x844(r3)
	  lfs       f2, 0xA6C(r2)
	  frsp      f3, f3
	  fmuls     f0, f1, f0
	  fmuls     f0, f2, f0
	  fcmpo     cr0, f3, f0
	  ble-      .loc_0x18C
	  li        r3, 0x1
	  b         .loc_0x190

	.loc_0x18C:
	  li        r3, 0

	.loc_0x190:
	  psq_l     f31,0x68(r1),0,0
	  lfd       f31, 0x60(r1)
	  psq_l     f30,0x58(r1),0,0
	  lfd       f30, 0x50(r1)
	  lwz       r0, 0x74(r1)
	  lwz       r31, 0x4C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x70
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8038649C
 * Size:	00005C
 */
void Game::UmiMushi::Obj::isOutOfTerritory((float))
{
	/*
	.loc_0x0:
	  lwz       r4, -0x6C18(r13)
	  lwz       r5, 0xC0(r3)
	  cmplwi    r4, 0
	  lfs       f0, 0x35C(r5)
	  beq-      .loc_0x24
	  lbz       r0, 0x48(r4)
	  cmplwi    r0, 0
	  beq-      .loc_0x24
	  lfs       f0, 0x934(r5)

	.loc_0x24:
	  fmuls     f4, f0, f1
	  lfs       f2, 0x1A0(r3)
	  lfs       f0, 0x194(r3)
	  lfs       f3, 0x198(r3)
	  fsubs     f2, f2, f0
	  lfs       f1, 0x18C(r3)
	  fmuls     f0, f4, f4
	  fsubs     f3, f3, f1
	  fmuls     f1, f2, f2
	  fmadds    f1, f3, f3, f1
	  fcmpo     cr0, f1, f0
	  mfcr      r0
	  rlwinm    r3,r0,2,31,31
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000044
 */
void Game::UmiMushi::Obj::returnHome(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803864F8
 * Size:	00012C
 */
void Game::UmiMushi::Obj::canMove(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stfd      f31, 0x20(r1)
	  psq_st    f31,0x28(r1),0,0
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  lwz       r3, -0x6C18(r13)
	  lwz       r5, 0xC0(r31)
	  cmplwi    r3, 0
	  lfs       f3, 0x35C(r5)
	  beq-      .loc_0x40
	  lbz       r0, 0x48(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x40
	  lfs       f3, 0x934(r5)

	.loc_0x40:
	  lfs       f1, 0x1A0(r31)
	  lfs       f0, 0x194(r31)
	  lfs       f2, 0xA30(r2)
	  fsubs     f4, f1, f0
	  lfs       f1, 0x198(r31)
	  lfs       f0, 0x18C(r31)
	  fmuls     f2, f3, f2
	  fsubs     f3, f1, f0
	  fmuls     f1, f4, f4
	  fmuls     f0, f2, f2
	  fmadds    f1, f3, f3, f1
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x10C
	  lwz       r4, 0x2D8(r31)
	  cmplwi    r4, 0
	  beq-      .loc_0x10C
	  cmplwi    r3, 0
	  lfs       f31, 0x35C(r5)
	  beq-      .loc_0x9C
	  lbz       r0, 0x48(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x9C
	  lfs       f31, 0x934(r5)

	.loc_0x9C:
	  lwz       r12, 0x0(r4)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f5, 0x10(r1)
	  fmuls     f0, f31, f31
	  lfs       f1, 0x1A0(r31)
	  lfs       f4, 0xC(r1)
	  fsubs     f2, f1, f5
	  lfs       f1, 0x198(r31)
	  lfs       f3, 0x8(r1)
	  stfs      f3, 0x2BC(r31)
	  fsubs     f3, f1, f3
	  fmuls     f1, f2, f2
	  stfs      f4, 0x2C0(r31)
	  stfs      f5, 0x2C4(r31)
	  fmadds    f1, f3, f3, f1
	  lwz       r0, 0x2D8(r31)
	  fcmpo     cr0, f1, f0
	  stw       r0, 0x230(r31)
	  ble-      .loc_0x10C
	  lfs       f0, 0xA40(r2)
	  li        r3, 0
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  b         .loc_0x110

	.loc_0x10C:
	  li        r3, 0x1

	.loc_0x110:
	  psq_l     f31,0x28(r1),0,0
	  lwz       r0, 0x34(r1)
	  lfd       f31, 0x20(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80386624
 * Size:	000490
 */
void Game::UmiMushi::Obj::outMove(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0xC0(r1)
	  mflr      r0
	  stw       r0, 0xC4(r1)
	  stfd      f31, 0xB0(r1)
	  psq_st    f31,0xB8(r1),0,0
	  stfd      f30, 0xA0(r1)
	  psq_st    f30,0xA8(r1),0,0
	  stfd      f29, 0x90(r1)
	  psq_st    f29,0x98(r1),0,0
	  stfd      f28, 0x80(r1)
	  psq_st    f28,0x88(r1),0,0
	  stfd      f27, 0x70(r1)
	  psq_st    f27,0x78(r1),0,0
	  stfd      f26, 0x60(r1)
	  psq_st    f26,0x68(r1),0,0
	  stw       r31, 0x5C(r1)
	  mr        r31, r3
	  lwz       r4, 0x2D8(r3)
	  cmplwi    r4, 0
	  beq-      .loc_0x42C
	  lwz       r12, 0x0(r4)
	  addi      r3, r1, 0x44
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f29, 0x44(r1)
	  lfs       f8, 0x198(r31)
	  lfs       f31, 0x4C(r1)
	  lfs       f6, 0x1A0(r31)
	  fsubs     f2, f29, f8
	  lfs       f3, 0xA40(r2)
	  fsubs     f4, f31, f6
	  lfs       f7, 0x19C(r31)
	  fmadds    f0, f2, f2, f3
	  fmuls     f1, f4, f4
	  fadds     f1, f1, f0
	  fcmpo     cr0, f1, f3
	  ble-      .loc_0xA8
	  ble-      .loc_0xAC
	  fsqrte    f0, f1
	  fmuls     f1, f0, f1
	  b         .loc_0xAC

	.loc_0xA8:
	  fmr       f1, f3

	.loc_0xAC:
	  lfs       f0, 0xA40(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0xCC
	  lfs       f0, 0xA30(r2)
	  fdivs     f0, f0, f1
	  fmuls     f2, f2, f0
	  fmuls     f3, f3, f0
	  fmuls     f4, f4, f0

	.loc_0xCC:
	  lwz       r3, -0x6C18(r13)
	  lwz       r4, 0xC0(r31)
	  cmplwi    r3, 0
	  lfs       f5, 0x35C(r4)
	  beq-      .loc_0xF0
	  lbz       r0, 0x48(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0xF0
	  lfs       f5, 0x934(r4)

	.loc_0xF0:
	  lfs       f0, 0xAA4(r2)
	  lis       r3, 0x8051
	  lfs       f1, 0x894(r4)
	  subi      r3, r3, 0x2E20
	  fmuls     f5, f0, f5
	  lfs       f0, 0xA34(r2)
	  fmuls     f28, f0, f1
	  fmuls     f1, f2, f5
	  fmuls     f0, f3, f5
	  fmuls     f3, f4, f5
	  fadds     f2, f8, f1
	  fadds     f1, f7, f0
	  fadds     f0, f6, f3
	  stfs      f2, 0x304(r31)
	  stfs      f1, 0x308(r31)
	  stfs      f0, 0x30C(r31)
	  lfs       f3, 0x304(r31)
	  lfs       f1, 0x18C(r31)
	  lfs       f2, 0x30C(r31)
	  lfs       f0, 0x194(r31)
	  fsubs     f1, f3, f1
	  fsubs     f2, f2, f0
	  bl        -0x351664
	  bl        0x8B460
	  fmr       f27, f1
	  lfs       f1, 0x18C(r31)
	  lfs       f0, 0x194(r31)
	  lis       r3, 0x8051
	  fsubs     f1, f29, f1
	  subi      r3, r3, 0x2E20
	  fsubs     f2, f31, f0
	  bl        -0x351688
	  bl        0x8B43C
	  fmr       f2, f27
	  bl        0x8B460
	  fabs      f1, f1
	  lfs       f0, 0xA30(r2)
	  frsp      f1, f1
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x344
	  lfs       f3, 0x194(r31)
	  lfs       f4, 0x30C(r31)
	  lfs       f5, 0x18C(r31)
	  fsubs     f1, f3, f4
	  lfs       f6, 0x304(r31)
	  lfs       f0, 0xA3C(r2)
	  fsubs     f2, f5, f6
	  fmuls     f1, f1, f1
	  fmadds    f1, f2, f2, f1
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x1D4
	  lfs       f0, 0xA40(r2)
	  li        r3, 0x1
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  b         .loc_0x44C

	.loc_0x1D4:
	  fsubs     f4, f4, f3
	  lfs       f1, 0xA40(r2)
	  fsubs     f3, f6, f5
	  fmuls     f2, f4, f4
	  fmadds    f0, f3, f3, f1
	  fadds     f2, f2, f0
	  fcmpo     cr0, f2, f1
	  ble-      .loc_0x204
	  ble-      .loc_0x208
	  fsqrte    f0, f2
	  fmuls     f2, f0, f2
	  b         .loc_0x208

	.loc_0x204:
	  fmr       f2, f1

	.loc_0x208:
	  lfs       f0, 0xA40(r2)
	  fcmpo     cr0, f2, f0
	  ble-      .loc_0x224
	  lfs       f0, 0xA30(r2)
	  fdivs     f0, f0, f2
	  fmuls     f3, f3, f0
	  fmuls     f4, f4, f0

	.loc_0x224:
	  lwz       r5, 0xC0(r31)
	  mr        r4, r31
	  lwz       r12, 0x0(r31)
	  fmuls     f30, f3, f28
	  lfs       f2, 0xA34(r2)
	  fmuls     f29, f4, f28
	  lfs       f1, 0x8E4(r5)
	  addi      r3, r1, 0x2C
	  lfs       f0, 0x8BC(r5)
	  lfs       f3, 0x1D4(r31)
	  fmuls     f27, f2, f1
	  lfs       f31, 0x1D8(r31)
	  fmuls     f28, f2, f0
	  lfs       f0, 0x1DC(r31)
	  lwz       r12, 0x8(r12)
	  stfs      f3, 0x38(r1)
	  stfs      f31, 0x3C(r1)
	  stfs      f0, 0x40(r1)
	  mtctr     r12
	  bctrl
	  lfs       f5, 0x2C(r1)
	  lis       r3, 0x8051
	  lfs       f3, 0x34(r1)
	  subi      r3, r3, 0x2E20
	  lfs       f1, 0x304(r31)
	  lfs       f0, 0x30C(r31)
	  lfs       f4, 0x30(r1)
	  fsubs     f1, f1, f5
	  fsubs     f2, f0, f3
	  stfs      f5, 0x20(r1)
	  stfs      f4, 0x24(r1)
	  stfs      f3, 0x28(r1)
	  bl        -0x3517C0
	  bl        0x8B304
	  lwz       r12, 0x0(r31)
	  fmr       f26, f1
	  mr        r3, r31
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fmr       f2, f1
	  fmr       f1, f26
	  bl        0x8B30C
	  fmuls     f28, f1, f28
	  lfs       f0, 0xA70(r2)
	  lfs       f1, 0xA6C(r2)
	  fmuls     f0, f0, f27
	  fabs      f2, f28
	  fmuls     f1, f1, f0
	  frsp      f0, f2
	  fcmpo     cr0, f0, f1
	  ble-      .loc_0x30C
	  lfs       f0, 0xA40(r2)
	  fcmpo     cr0, f28, f0
	  ble-      .loc_0x308
	  fmr       f28, f1
	  b         .loc_0x30C

	.loc_0x308:
	  fneg      f28, f1

	.loc_0x30C:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fadds     f1, f28, f1
	  bl        0x8B288
	  stfs      f1, 0x1FC(r31)
	  lfs       f0, 0x1FC(r31)
	  stfs      f0, 0x1A8(r31)
	  stfs      f30, 0x1D4(r31)
	  stfs      f31, 0x1D8(r31)
	  stfs      f29, 0x1DC(r31)
	  b         .loc_0x42C

	.loc_0x344:
	  lwz       r5, 0xC0(r31)
	  mr        r4, r31
	  lwz       r12, 0x0(r31)
	  addi      r3, r1, 0x14
	  lfs       f2, 0xA34(r2)
	  lfs       f1, 0x8E4(r5)
	  lfs       f0, 0x8BC(r5)
	  lwz       r12, 0x8(r12)
	  fmuls     f28, f2, f1
	  fmuls     f27, f2, f0
	  mtctr     r12
	  bctrl
	  lfs       f4, 0x14(r1)
	  lis       r3, 0x8051
	  lfs       f0, 0x1C(r1)
	  subi      r3, r3, 0x2E20
	  lfs       f3, 0x18(r1)
	  fsubs     f1, f29, f4
	  fsubs     f2, f31, f0
	  stfs      f4, 0x8(r1)
	  stfs      f3, 0xC(r1)
	  stfs      f0, 0x10(r1)
	  bl        -0x3518B8
	  bl        0x8B20C
	  lwz       r12, 0x0(r31)
	  fmr       f26, f1
	  mr        r3, r31
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fmr       f2, f1
	  fmr       f1, f26
	  bl        0x8B214
	  fmuls     f27, f1, f27
	  lfs       f0, 0xA70(r2)
	  lfs       f1, 0xA6C(r2)
	  fmuls     f0, f0, f28
	  fabs      f2, f27
	  fmuls     f1, f1, f0
	  frsp      f0, f2
	  fcmpo     cr0, f0, f1
	  ble-      .loc_0x404
	  lfs       f0, 0xA40(r2)
	  fcmpo     cr0, f27, f0
	  ble-      .loc_0x400
	  fmr       f27, f1
	  b         .loc_0x404

	.loc_0x400:
	  fneg      f27, f1

	.loc_0x404:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fadds     f1, f27, f1
	  bl        0x8B190
	  stfs      f1, 0x1FC(r31)
	  lfs       f0, 0x1FC(r31)
	  stfs      f0, 0x1A8(r31)

	.loc_0x42C:
	  lwz       r3, 0x28C(r31)
	  li        r4, 0x513C
	  li        r5, 0
	  lwz       r12, 0x28(r3)
	  lwz       r12, 0x88(r12)
	  mtctr     r12
	  bctrl
	  li        r3, 0

	.loc_0x44C:
	  psq_l     f31,0xB8(r1),0,0
	  lfd       f31, 0xB0(r1)
	  psq_l     f30,0xA8(r1),0,0
	  lfd       f30, 0xA0(r1)
	  psq_l     f29,0x98(r1),0,0
	  lfd       f29, 0x90(r1)
	  psq_l     f28,0x88(r1),0,0
	  lfd       f28, 0x80(r1)
	  psq_l     f27,0x78(r1),0,0
	  lfd       f27, 0x70(r1)
	  psq_l     f26,0x68(r1),0,0
	  lfd       f26, 0x60(r1)
	  lwz       r0, 0xC4(r1)
	  lwz       r31, 0x5C(r1)
	  mtlr      r0
	  addi      r1, r1, 0xC0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80386AB4
 * Size:	000080
 */
void Game::UmiMushi::Obj::setFindAnim(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lha       r4, 0x314(r3)
	  lha       r0, 0x344(r3)
	  cmpw      r4, r0
	  bne-      .loc_0x54
	  lha       r4, 0x316(r31)
	  lha       r0, 0x346(r31)
	  cmpw      r4, r0
	  bne-      .loc_0x54
	  lha       r4, 0x318(r31)
	  lha       r0, 0x348(r31)
	  cmpw      r4, r0
	  bne-      .loc_0x54
	  li        r4, 0xA
	  li        r5, 0
	  bl        -0x281AFC
	  b         .loc_0x6C

	.loc_0x54:
	  mr        r3, r31
	  bl        0x6C
	  mr        r3, r31
	  li        r4, 0x5
	  li        r5, 0
	  bl        -0x281B18

	.loc_0x6C:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80386B34
 * Size:	000044
 */
void Game::UmiMushi::Obj::fadeAllEffect(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r3, 0x364(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  bl        .loc_0x44
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr

	.loc_0x44:
	*/
}

/*
 * --INFO--
 * Address:	80386B78
 * Size:	0000A8
 */
void Game::UmiMushi::Obj::fadeColorEffect(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r3, 0x368(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x36C(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x370(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x374(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x378(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x37C(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  li        r0, 0
	  stb       r0, 0x2DC(r31)
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80386C20
 * Size:	00010C
 */
void Game::UmiMushi::Obj::createColorEffect(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  lwz       r0, 0x2D8(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0xF8
	  lis       r4, 0x804B
	  li        r3, 0
	  subi      r4, r4, 0x5814
	  li        r0, 0x1
	  stw       r4, 0x8(r1)
	  lfs       f0, 0x18C(r31)
	  stfs      f0, 0xC(r1)
	  lfs       f0, 0x190(r31)
	  stfs      f0, 0x10(r1)
	  lfs       f0, 0x194(r31)
	  stfs      f0, 0x14(r1)
	  stw       r3, 0x300(r31)
	  stb       r0, 0x2DC(r31)
	  lwz       r3, 0x2D8(r31)
	  lhz       r0, 0x2DC(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0xB0
	  lwz       r3, 0x368(r31)
	  addi      r4, r1, 0x8
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x370(r31)
	  addi      r4, r1, 0x8
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x374(r31)
	  addi      r4, r1, 0x8
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0xF8

	.loc_0xB0:
	  lwz       r3, 0x36C(r31)
	  addi      r4, r1, 0x8
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x378(r31)
	  addi      r4, r1, 0x8
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x37C(r31)
	  addi      r4, r1, 0x8
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl

	.loc_0xF8:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80386D2C
 * Size:	0000C0
 */
void Game::UmiMushi::Obj::attackEffect(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  lis       r4, 0x804B
	  lis       r5, 0x804E
	  stw       r0, 0x44(r1)
	  subi      r0, r4, 0x5808
	  lis       r4, 0x804E
	  li        r8, 0x1D3
	  lwz       r9, 0x388(r3)
	  li        r7, 0
	  stw       r0, 0x14(r1)
	  addi      r0, r4, 0x6A78
	  lis       r4, 0x804E
	  stw       r0, 0x14(r1)
	  addi      r0, r5, 0x6A14
	  addi      r6, r4, 0x6FCC
	  lis       r5, 0x804B
	  stw       r0, 0x14(r1)
	  lis       r4, 0x804B
	  subi      r0, r4, 0x5D24
	  subi      r5, r5, 0x5814
	  sth       r8, 0x18(r1)
	  addi      r4, r1, 0x24
	  stw       r7, 0x1C(r1)
	  stw       r9, 0x20(r1)
	  stw       r6, 0x14(r1)
	  lwz       r8, 0x18C(r3)
	  lwz       r7, 0x190(r3)
	  lwz       r6, 0x194(r3)
	  lfs       f3, 0x1F8(r3)
	  addi      r3, r1, 0x14
	  stw       r8, 0x8(r1)
	  stw       r7, 0xC(r1)
	  lfs       f2, 0x8(r1)
	  stw       r6, 0x10(r1)
	  lfs       f1, 0xC(r1)
	  stw       r5, 0x24(r1)
	  lfs       f0, 0x10(r1)
	  stfs      f2, 0x28(r1)
	  stfs      f1, 0x2C(r1)
	  stfs      f0, 0x30(r1)
	  stw       r0, 0x24(r1)
	  stfs      f3, 0x34(r1)
	  bl        0x2C2F4
	  lwz       r0, 0x44(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80386DEC
 * Size:	0000C0
 */
void Game::UmiMushi::Obj::meltEffect(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  lis       r5, 0x804E
	  lis       r4, 0x804B
	  stw       r0, 0x44(r1)
	  subi      r0, r4, 0x5808
	  addi      r6, r5, 0x6A78
	  lis       r4, 0x804E
	  stw       r31, 0x3C(r1)
	  li        r5, 0x1D5
	  mr        r31, r3
	  lis       r3, 0x804B
	  stw       r0, 0x14(r1)
	  li        r0, 0
	  stw       r6, 0x14(r1)
	  addi      r6, r4, 0x6FB8
	  lis       r4, 0x804B
	  sth       r5, 0x18(r1)
	  subi      r5, r3, 0x5814
	  addi      r3, r1, 0x14
	  stw       r0, 0x1C(r1)
	  subi      r0, r4, 0x5D24
	  addi      r4, r1, 0x20
	  stw       r6, 0x14(r1)
	  lwz       r8, 0x38C(r31)
	  lwz       r7, 0x390(r31)
	  lwz       r6, 0x394(r31)
	  lfs       f3, 0x1F8(r31)
	  stw       r8, 0x8(r1)
	  stw       r7, 0xC(r1)
	  lfs       f2, 0x8(r1)
	  stw       r6, 0x10(r1)
	  lfs       f1, 0xC(r1)
	  stw       r5, 0x20(r1)
	  lfs       f0, 0x10(r1)
	  stfs      f2, 0x24(r1)
	  stfs      f1, 0x28(r1)
	  stfs      f0, 0x2C(r1)
	  stw       r0, 0x20(r1)
	  stfs      f3, 0x30(r1)
	  bl        0x2C358
	  li        r0, 0x1
	  stb       r0, 0x2DD(r31)
	  lwz       r0, 0x44(r1)
	  lwz       r31, 0x3C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80386EAC
 * Size:	00010C
 */
void Game::UmiMushi::Obj::flickEffect(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  mflr      r0
	  stw       r0, 0x54(r1)
	  stw       r31, 0x4C(r1)
	  mr        r31, r3
	  lwz       r0, 0x280(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0xF8
	  lis       r3, 0x804B
	  li        r7, 0
	  subi      r0, r3, 0x5808
	  lis       r3, 0x804E
	  stw       r0, 0x28(r1)
	  addi      r0, r3, 0x6A50
	  lis       r3, 0x804E
	  li        r4, 0x1DB
	  stw       r0, 0x28(r1)
	  addi      r6, r3, 0x6FE0
	  li        r0, 0x1DC
	  li        r8, 0x1DD
	  sth       r4, 0x2C(r1)
	  lis       r5, 0x804B
	  lis       r4, 0x804B
	  addi      r3, r1, 0x28
	  sth       r0, 0x2E(r1)
	  subi      r5, r5, 0x5814
	  subi      r0, r4, 0x5D24
	  addi      r4, r1, 0x14
	  sth       r8, 0x30(r1)
	  stw       r7, 0x34(r1)
	  stw       r7, 0x38(r1)
	  stw       r7, 0x3C(r1)
	  stw       r6, 0x28(r1)
	  lwz       r8, 0x38C(r31)
	  lwz       r7, 0x390(r31)
	  lwz       r6, 0x394(r31)
	  lfs       f3, 0x1F8(r31)
	  stw       r8, 0x8(r1)
	  stw       r7, 0xC(r1)
	  lfs       f2, 0x8(r1)
	  stw       r6, 0x10(r1)
	  lfs       f1, 0xC(r1)
	  stw       r5, 0x14(r1)
	  lfs       f0, 0x10(r1)
	  stfs      f2, 0x18(r1)
	  stfs      f1, 0x1C(r1)
	  stfs      f0, 0x20(r1)
	  stw       r0, 0x14(r1)
	  stfs      f3, 0x24(r1)
	  bl        0x2C05C
	  addi      r4, r31, 0x38C
	  li        r3, 0x3849
	  bl        0xE7138
	  cmplwi    r3, 0
	  beq-      .loc_0xF8
	  lwz       r12, 0x10(r3)
	  li        r4, 0
	  lfs       f1, 0xAA8(r2)
	  li        r5, 0
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl

	.loc_0xF8:
	  lwz       r0, 0x54(r1)
	  lwz       r31, 0x4C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80386FB8
 * Size:	000070
 */
void Game::UmiMushi::Obj::eatEffect(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r4, 0x804B
	  stw       r0, 0x24(r1)
	  subi      r0, r4, 0x5814
	  addi      r4, r1, 0x8
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  stw       r0, 0x8(r1)
	  lfs       f0, 0x18C(r3)
	  stfs      f0, 0xC(r1)
	  lfs       f0, 0x190(r3)
	  stfs      f0, 0x10(r1)
	  lfs       f0, 0x194(r3)
	  stfs      f0, 0x14(r1)
	  lwz       r3, 0x380(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x380(r31)
	  lfs       f1, 0x1F8(r31)
	  bl        0x2C18C
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80387028
 * Size:	000070
 */
void Game::UmiMushi::Obj::bubbleEffect(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r4, 0x804B
	  stw       r0, 0x24(r1)
	  subi      r0, r4, 0x5814
	  addi      r4, r1, 0x8
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  stw       r0, 0x8(r1)
	  lfs       f0, 0x18C(r3)
	  stfs      f0, 0xC(r1)
	  lfs       f0, 0x190(r3)
	  stfs      f0, 0x10(r1)
	  lfs       f0, 0x194(r3)
	  stfs      f0, 0x14(r1)
	  lwz       r3, 0x384(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x384(r31)
	  lfs       f1, 0x1F8(r31)
	  bl        0x2C140
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80387098
 * Size:	000028
 */
void Game::UmiMushi::Obj::delShadow(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r4, r3
	  stw       r0, 0x14(r1)
	  lwz       r3, -0x6980(r13)
	  bl        -0x145214
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803870C0
 * Size:	0002C8
 */
void Game::UmiMushi::Obj::eyeScaleMtxCalc(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stfd      f31, 0x30(r1)
	  psq_st    f31,0x38(r1),0,0
	  stfd      f30, 0x20(r1)
	  psq_st    f30,0x28(r1),0,0
	  stfd      f29, 0x10(r1)
	  psq_st    f29,0x18(r1),0,0
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  lbz       r0, 0x2DD(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x298
	  lwz       r3, 0x174(r30)
	  lwz       r5, 0xC0(r30)
	  lwz       r4, 0x8(r3)
	  lhz       r3, 0x360(r30)
	  lwz       r4, 0x84(r4)
	  lbz       r0, 0xA15(r5)
	  mulli     r3, r3, 0x30
	  lwz       r4, 0xC(r4)
	  cmplwi    r0, 0
	  add       r31, r4, r3
	  beq-      .loc_0x74
	  lfs       f0, 0xA30(r5)
	  stfs      f0, 0x35C(r30)
	  b         .loc_0x7C

	.loc_0x74:
	  lfs       f0, 0xA44(r2)
	  stfs      f0, 0x35C(r30)

	.loc_0x7C:
	  lfs       f1, 0x10(r31)
	  lfs       f2, 0x20(r31)
	  fmuls     f4, f1, f1
	  lfs       f0, 0x0(r31)
	  fmuls     f5, f2, f2
	  lfs       f3, 0xA40(r2)
	  fmadds    f4, f0, f0, f4
	  fadds     f4, f5, f4
	  fcmpo     cr0, f4, f3
	  ble-      .loc_0xB4
	  ble-      .loc_0xB8
	  fsqrte    f3, f4
	  fmuls     f4, f3, f4
	  b         .loc_0xB8

	.loc_0xB4:
	  fmr       f4, f3

	.loc_0xB8:
	  lfs       f3, 0xA40(r2)
	  fcmpo     cr0, f4, f3
	  ble-      .loc_0xD8
	  lfs       f3, 0xA30(r2)
	  fdivs     f3, f3, f4
	  fmuls     f0, f0, f3
	  fmuls     f1, f1, f3
	  fmuls     f2, f2, f3

	.loc_0xD8:
	  lfs       f4, 0x14(r31)
	  lfs       f5, 0x24(r31)
	  fmuls     f7, f4, f4
	  lfs       f3, 0x4(r31)
	  fmuls     f8, f5, f5
	  lfs       f6, 0xA40(r2)
	  fmadds    f7, f3, f3, f7
	  fadds     f7, f8, f7
	  fcmpo     cr0, f7, f6
	  ble-      .loc_0x110
	  ble-      .loc_0x114
	  fsqrte    f6, f7
	  fmuls     f7, f6, f7
	  b         .loc_0x114

	.loc_0x110:
	  fmr       f7, f6

	.loc_0x114:
	  lfs       f6, 0xA40(r2)
	  fcmpo     cr0, f7, f6
	  ble-      .loc_0x134
	  lfs       f6, 0xA30(r2)
	  fdivs     f6, f6, f7
	  fmuls     f3, f3, f6
	  fmuls     f4, f4, f6
	  fmuls     f5, f5, f6

	.loc_0x134:
	  lfs       f9, 0x18(r31)
	  lfs       f10, 0x28(r31)
	  fmuls     f7, f9, f9
	  lfs       f8, 0x8(r31)
	  fmuls     f11, f10, f10
	  lfs       f6, 0xA40(r2)
	  fmadds    f7, f8, f8, f7
	  fadds     f7, f11, f7
	  fcmpo     cr0, f7, f6
	  ble-      .loc_0x16C
	  ble-      .loc_0x170
	  fsqrte    f6, f7
	  fmuls     f7, f6, f7
	  b         .loc_0x170

	.loc_0x16C:
	  fmr       f7, f6

	.loc_0x170:
	  lfs       f6, 0xA40(r2)
	  fcmpo     cr0, f7, f6
	  ble-      .loc_0x190
	  lfs       f6, 0xA30(r2)
	  fdivs     f6, f6, f7
	  fmuls     f8, f8, f6
	  fmuls     f9, f9, f6
	  fmuls     f10, f10, f6

	.loc_0x190:
	  lfs       f31, 0x35C(r30)
	  lis       r3, 0x8049
	  addi      r4, r3, 0x3BEC
	  fmuls     f6, f0, f31
	  fmuls     f0, f2, f31
	  fmuls     f1, f1, f31
	  stfs      f6, 0x0(r31)
	  fmuls     f6, f3, f31
	  fmuls     f4, f4, f31
	  stfs      f1, 0x10(r31)
	  fmuls     f3, f5, f31
	  fmuls     f2, f8, f31
	  stfs      f0, 0x20(r31)
	  fmuls     f1, f9, f31
	  fmuls     f0, f10, f31
	  stfs      f6, 0x4(r31)
	  stfs      f4, 0x14(r31)
	  stfs      f3, 0x24(r31)
	  stfs      f2, 0x8(r31)
	  stfs      f1, 0x18(r31)
	  stfs      f0, 0x28(r31)
	  lfs       f30, 0x1C(r31)
	  lwz       r3, 0x174(r30)
	  bl        0xB7D08
	  lwz       r7, 0x174(r30)
	  rlwinm    r0,r3,0,16,31
	  mulli     r5, r0, 0x30
	  lis       r4, 0x8049
	  lwz       r6, 0x8(r7)
	  mr        r3, r7
	  addi      r4, r4, 0x3BEC
	  lwz       r6, 0x84(r6)
	  addi      r0, r5, 0x1C
	  lwz       r5, 0xC(r6)
	  lfsx      f29, r5, r0
	  bl        0xB7CD8
	  lfs       f0, 0xA30(r2)
	  rlwinm    r0,r3,0,16,31
	  lwz       r4, 0x174(r30)
	  mulli     r0, r0, 0x30
	  fsubs     f4, f0, f31
	  lwz       r3, 0xC0(r30)
	  lwz       r4, 0x8(r4)
	  lfs       f2, 0xA28(r3)
	  fmuls     f1, f29, f4
	  lwz       r3, 0x84(r4)
	  lfs       f0, 0xA50(r2)
	  lwz       r3, 0xC(r3)
	  fmadds    f3, f30, f31, f1
	  add       r4, r3, r0
	  fmadds    f1, f2, f4, f3
	  fnmsubs   f0, f0, f4, f3
	  stfs      f1, 0x1C(r31)
	  stfs      f0, 0x1C(r31)
	  lwz       r3, 0xC0(r30)
	  lbz       r0, 0xA15(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x298
	  lfs       f0, 0xC(r4)
	  stfs      f0, 0xC(r31)
	  lwz       r3, 0xC0(r30)
	  lfs       f0, 0xA28(r3)
	  fadds     f0, f29, f0
	  stfs      f0, 0x1C(r31)
	  lfs       f0, 0x2C(r4)
	  stfs      f0, 0x2C(r31)

	.loc_0x298:
	  psq_l     f31,0x38(r1),0,0
	  lfd       f31, 0x30(r1)
	  psq_l     f30,0x28(r1),0,0
	  lfd       f30, 0x20(r1)
	  psq_l     f29,0x18(r1),0,0
	  lfd       f29, 0x10(r1)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x44(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80387388
 * Size:	000184
 */
void Game::UmiMushi::Obj::weakScaleMtxCalc(void)
{
	/*
	.loc_0x0:
	  lwz       r4, 0x174(r3)
	  lhz       r0, 0x362(r3)
	  lwz       r4, 0x8(r4)
	  mulli     r0, r0, 0x30
	  lfs       f3, 0xA40(r2)
	  lwz       r4, 0x84(r4)
	  lwz       r4, 0xC(r4)
	  add       r4, r4, r0
	  lfs       f1, 0x10(r4)
	  lfs       f2, 0x20(r4)
	  fmuls     f4, f1, f1
	  lfs       f0, 0x0(r4)
	  fmuls     f5, f2, f2
	  fmadds    f4, f0, f0, f4
	  fadds     f4, f5, f4
	  fcmpo     cr0, f4, f3
	  ble-      .loc_0x54
	  ble-      .loc_0x58
	  fsqrte    f3, f4
	  fmuls     f4, f3, f4
	  b         .loc_0x58

	.loc_0x54:
	  fmr       f4, f3

	.loc_0x58:
	  lfs       f3, 0xA40(r2)
	  fcmpo     cr0, f4, f3
	  ble-      .loc_0x78
	  lfs       f3, 0xA30(r2)
	  fdivs     f3, f3, f4
	  fmuls     f0, f0, f3
	  fmuls     f1, f1, f3
	  fmuls     f2, f2, f3

	.loc_0x78:
	  lfs       f3, 0x14(r4)
	  lfs       f4, 0x24(r4)
	  fmuls     f6, f3, f3
	  lfs       f7, 0x4(r4)
	  fmuls     f8, f4, f4
	  lfs       f5, 0xA40(r2)
	  fmadds    f6, f7, f7, f6
	  fadds     f6, f8, f6
	  fcmpo     cr0, f6, f5
	  ble-      .loc_0xB0
	  ble-      .loc_0xB4
	  fsqrte    f5, f6
	  fmuls     f6, f5, f6
	  b         .loc_0xB4

	.loc_0xB0:
	  fmr       f6, f5

	.loc_0xB4:
	  lfs       f5, 0xA40(r2)
	  fcmpo     cr0, f6, f5
	  ble-      .loc_0xD4
	  lfs       f5, 0xA30(r2)
	  fdivs     f5, f5, f6
	  fmuls     f7, f7, f5
	  fmuls     f3, f3, f5
	  fmuls     f4, f4, f5

	.loc_0xD4:
	  lfs       f9, 0x18(r4)
	  lfs       f10, 0x28(r4)
	  fmuls     f6, f9, f9
	  lfs       f8, 0x8(r4)
	  fmuls     f11, f10, f10
	  lfs       f5, 0xA40(r2)
	  fmadds    f6, f8, f8, f6
	  fadds     f6, f11, f6
	  fcmpo     cr0, f6, f5
	  ble-      .loc_0x10C
	  ble-      .loc_0x110
	  fsqrte    f5, f6
	  fmuls     f6, f5, f6
	  b         .loc_0x110

	.loc_0x10C:
	  fmr       f6, f5

	.loc_0x110:
	  lfs       f5, 0xA40(r2)
	  fcmpo     cr0, f6, f5
	  ble-      .loc_0x130
	  lfs       f5, 0xA30(r2)
	  fdivs     f5, f5, f6
	  fmuls     f8, f8, f5
	  fmuls     f9, f9, f5
	  fmuls     f10, f10, f5

	.loc_0x130:
	  lwz       r3, 0xC0(r3)
	  lfs       f11, 0xA34(r3)
	  fmuls     f5, f0, f11
	  fmuls     f1, f1, f11
	  fmuls     f0, f2, f11
	  stfs      f5, 0x0(r4)
	  fmuls     f6, f7, f11
	  fmuls     f5, f3, f11
	  stfs      f1, 0x10(r4)
	  fmuls     f3, f4, f11
	  fmuls     f2, f8, f11
	  stfs      f0, 0x20(r4)
	  fmuls     f1, f9, f11
	  fmuls     f0, f10, f11
	  stfs      f6, 0x4(r4)
	  stfs      f5, 0x14(r4)
	  stfs      f3, 0x24(r4)
	  stfs      f2, 0x8(r4)
	  stfs      f1, 0x18(r4)
	  stfs      f0, 0x28(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8038750C
 * Size:	00009C
 */
void efx::TUmiDeadawa::__dt(void)
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
	  beq-      .loc_0x80
	  lis       r3, 0x804E
	  addi      r3, r3, 0x4658
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x14
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x70
	  lis       r3, 0x804E
	  addi      r3, r3, 0x68A8
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x14
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x70
	  lis       r4, 0x804E
	  addi      r3, r30, 0x4
	  addi      r5, r4, 0x698C
	  li        r4, 0
	  stw       r5, 0x0(r30)
	  addi      r0, r5, 0x14
	  stw       r0, 0x4(r30)
	  bl        -0x2F78DC

	.loc_0x70:
	  extsh.    r0, r31
	  ble-      .loc_0x80
	  mr        r3, r30
	  bl        -0x3634D4

	.loc_0x80:
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
 * Address:	803875A8
 * Size:	00009C
 */
void efx::TUmiEat::__dt(void)
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
	  beq-      .loc_0x80
	  lis       r3, 0x804E
	  addi      r3, r3, 0x46A4
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x14
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x70
	  lis       r3, 0x804E
	  addi      r3, r3, 0x68A8
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x14
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x70
	  lis       r4, 0x804E
	  addi      r3, r30, 0x4
	  addi      r5, r4, 0x698C
	  li        r4, 0
	  stw       r5, 0x0(r30)
	  addi      r0, r5, 0x14
	  stw       r0, 0x4(r30)
	  bl        -0x2F7978

	.loc_0x70:
	  extsh.    r0, r31
	  ble-      .loc_0x80
	  mr        r3, r30
	  bl        -0x363570

	.loc_0x80:
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
 * Address:	80387644
 * Size:	000004
 */
void Game::UmiMushi::Obj::setInitialSetting((Game::EnemyInitialParamBase*)) { }

/*
 * --INFO--
 * Address:	80387648
 * Size:	000004
 */
void applyImpulse__Q34Game8UmiMushi3ObjFR10Vector3<float>
R10Vector3<float>(void)
{
}

/*
 * --INFO--
 * Address:	8038764C
 * Size:	00000C
 */
void Game::UmiMushi::Obj::getDamageCoeStoneState(void)
{
	/*
	.loc_0x0:
	  lwz       r3, 0xC0(r3)
	  lfs       f1, 0x81C(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80387658
 * Size:	000028
 */
void Game::UmiMushi::Obj::eatWhitePikminCallBack((Game::Creature*, float))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r5, 0xC0(r3)
	  lfs       f1, 0x95C(r5)
	  bl        -0x28019C
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80387680
 * Size:	000008
 */
void Game::UmiMushi::Obj::getEnemyTypeID(void)
{
	/*
	.loc_0x0:
	  lwz       r3, 0x39C(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80387688
 * Size:	000008
 */
void Game::UmiMushi::Obj::getMouthSlots(void)
{
	/*
	.loc_0x0:
	  addi      r3, r3, 0x2CC
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80387690
 * Size:	000014
 */
void @932 @12 @Game::EnemyBase::viewOnPelletKilled(void)
{
	/*
	.loc_0x0:
	  li        r11, 0xC
	  lwzx      r11, r3, r11
	  add       r3, r3, r11
	  subi      r3, r3, 0x3A4
	  b         -0x280D84
	*/
}

/*
 * --INFO--
 * Address:	803876A4
 * Size:	000014
 */
void @932 @12 @Game::EnemyBase::viewStartCarryMotion(void)
{
	/*
	.loc_0x0:
	  li        r11, 0xC
	  lwzx      r11, r3, r11
	  add       r3, r3, r11
	  subi      r3, r3, 0x3A4
	  b         -0x28100C
	*/
}

/*
 * --INFO--
 * Address:	803876B8
 * Size:	000014
 */
void @932 @12 @Game::EnemyBase::viewStartPreCarryMotion(void)
{
	/*
	.loc_0x0:
	  li        r11, 0xC
	  lwzx      r11, r3, r11
	  add       r3, r3, r11
	  subi      r3, r3, 0x3A4
	  b         -0x281000
	*/
}

/*
 * --INFO--
 * Address:	803876CC
 * Size:	000014
 */
void @932 @12 @Game::EnemyBase::view_finish_carrymotion(void)
{
	/*
	.loc_0x0:
	  li        r11, 0xC
	  lwzx      r11, r3, r11
	  add       r3, r3, r11
	  subi      r3, r3, 0x3A4
	  b         -0x280C64
	*/
}

/*
 * --INFO--
 * Address:	803876E0
 * Size:	000014
 */
void @932 @12 @Game::EnemyBase::view_start_carrymotion(void)
{
	/*
	.loc_0x0:
	  li        r11, 0xC
	  lwzx      r11, r3, r11
	  add       r3, r3, r11
	  subi      r3, r3, 0x3A4
	  b         -0x280CA4
	*/
}

/*
 * --INFO--
 * Address:	803876F4
 * Size:	000014
 */
void @932 @12 @Game::EnemyBase::viewGetShape(void)
{
	/*
	.loc_0x0:
	  li        r11, 0xC
	  lwzx      r11, r3, r11
	  add       r3, r3, r11
	  subi      r3, r3, 0x3A4
	  b         -0x281064
	*/
}

/*
 * --INFO--
 * Address:	80387708
 * Size:	000008
 */
void @4 @efx::TUmiEat::__dt(void)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x4
	  b         -0x164
	*/
}

/*
 * --INFO--
 * Address:	80387710
 * Size:	000008
 */
void @4 @efx::TUmiDeadawa::__dt(void)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x4
	  b         -0x208
	*/
}
