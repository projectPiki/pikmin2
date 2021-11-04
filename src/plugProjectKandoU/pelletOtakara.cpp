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
 * Address:	801FFE64
 * Size:	000094
 */
void Game::PelletOtakara::Object::constructor(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  li        r31, 0
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  lwz       r4, -0x6C18(r13)
	  cmplwi    r4, 0
	  beq-      .loc_0x38
	  lwz       r0, 0x44(r4)
	  cmpwi     r0, 0x1
	  bne-      .loc_0x38
	  li        r31, 0x1

	.loc_0x38:
	  li        r3, 0x90
	  bl        -0x1DBFFC
	  mr.       r0, r3
	  beq-      .loc_0x58
	  mr        r4, r30
	  mr        r5, r31
	  bl        0x261EAC
	  mr        r0, r3

	.loc_0x58:
	  stw       r0, 0x330(r30)
	  mr        r4, r30
	  lwz       r3, -0x6980(r13)
	  bl        0x41C58
	  li        r3, 0
	  li        r0, -0x1
	  stw       r3, 0x458(r30)
	  sth       r0, 0x45C(r30)
	  stb       r0, 0x45E(r30)
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
 * Address:	801FFEF8
 * Size:	0000F4
 */
void Game::PelletOtakara::Object::do_onInit((Game::CreatureInitArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r3, 0x330(r3)
	  lwz       r12, 0x28(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  cmpwi     r3, 0xC
	  beq-      .loc_0x4C
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  addi      r3, r3, 0x1B50
	  li        r4, 0xAB
	  addi      r5, r5, 0x1B64
	  crclr     6, 0x6
	  bl        -0x1D5900

	.loc_0x4C:
	  lwz       r5, 0x330(r31)
	  li        r4, 0
	  stw       r4, 0x70(r5)
	  lwz       r3, -0x6C18(r13)
	  lwz       r0, 0x44(r3)
	  cmpwi     r0, 0x1
	  bne-      .loc_0xE0
	  lbz       r0, 0x32C(r31)
	  cmplwi    r0, 0x4
	  bne-      .loc_0x88
	  li        r3, 0x2
	  li        r0, 0x1
	  stw       r3, 0x70(r5)
	  stb       r0, 0x45E(r31)
	  b         .loc_0xE0

	.loc_0x88:
	  cmplwi    r0, 0x5
	  bne-      .loc_0xA0
	  li        r0, 0x3
	  stw       r0, 0x70(r5)
	  stb       r4, 0x45E(r31)
	  b         .loc_0xE0

	.loc_0xA0:
	  cmplwi    r0, 0x6
	  bne-      .loc_0xBC
	  li        r3, 0x4
	  li        r0, 0x2
	  stw       r3, 0x70(r5)
	  stb       r0, 0x45E(r31)
	  b         .loc_0xE0

	.loc_0xBC:
	  cmplwi    r0, 0x3
	  bne-      .loc_0xD8
	  li        r3, 0x1
	  li        r0, 0x2
	  stw       r3, 0x70(r5)
	  stb       r0, 0x45E(r31)
	  b         .loc_0xE0

	.loc_0xD8:
	  li        r0, -0x1
	  stb       r0, 0x45E(r31)

	.loc_0xE0:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801FFFEC
 * Size:	000020
 */
void Game::PelletOtakara::Object::getShadowParam((Game::ShadowParam&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        -0x9A6B8
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8020000C
 * Size:	000148
 */
void Game::PelletOtakara::Object::sound_otakaraEventStart(void)
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
	  lwz       r3, 0x330(r3)
	  lwz       r12, 0x28(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  cmpwi     r3, 0xC
	  beq-      .loc_0x54
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  addi      r3, r3, 0x1B50
	  li        r4, 0xFD
	  addi      r5, r5, 0x1B64
	  crclr     6, 0x6
	  bl        -0x1D5A1C

	.loc_0x54:
	  lwz       r3, -0x6C18(r13)
	  lwz       r31, 0x330(r29)
	  lwz       r0, 0x44(r3)
	  cmpwi     r0, 0x1
	  bne-      .loc_0x118
	  lwz       r0, 0x3D4(r29)
	  li        r30, -0x1
	  cmpwi     r0, 0
	  bne-      .loc_0x80
	  li        r30, 0
	  b         .loc_0x8C

	.loc_0x80:
	  cmpwi     r0, 0x1
	  bne-      .loc_0x8C
	  li        r30, 0x1

	.loc_0x8C:
	  cmpwi     r30, -0x1
	  beq-      .loc_0x12C
	  lwz       r3, -0x6CD0(r13)
	  mr        r4, r30
	  bl        -0x8460C
	  lbz       r0, 0x32C(r29)
	  mr        r29, r3
	  cmplwi    r0, 0x4
	  bne-      .loc_0xC0
	  cmpwi     r30, 0
	  beq-      .loc_0xEC
	  li        r29, 0
	  b         .loc_0xEC

	.loc_0xC0:
	  cmplwi    r0, 0x5
	  bne-      .loc_0xD8
	  cmpwi     r30, 0x1
	  beq-      .loc_0xEC
	  li        r29, 0
	  b         .loc_0xEC

	.loc_0xD8:
	  cmplwi    r0, 0x3
	  beq-      .loc_0xEC
	  cmplwi    r0, 0x6
	  beq-      .loc_0xEC
	  li        r29, 0

	.loc_0xEC:
	  mr        r3, r31
	  mr        r4, r29
	  bl        0x261750
	  cmplwi    r29, 0
	  beq-      .loc_0x12C
	  mr        r3, r31
	  lwz       r12, 0x28(r31)
	  lwz       r12, 0x88(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x12C

	.loc_0x118:
	  mr        r3, r31
	  lwz       r12, 0x28(r31)
	  lwz       r12, 0x88(r12)
	  mtctr     r12
	  bctrl

	.loc_0x12C:
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
 * Address:	80200154
 * Size:	000148
 */
void Game::PelletOtakara::Object::sound_otakaraEventRestart(void)
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
	  lwz       r3, 0x330(r3)
	  lwz       r12, 0x28(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  cmpwi     r3, 0xC
	  beq-      .loc_0x54
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  addi      r3, r3, 0x1B50
	  li        r4, 0x135
	  addi      r5, r5, 0x1B64
	  crclr     6, 0x6
	  bl        -0x1D5B64

	.loc_0x54:
	  lwz       r3, -0x6C18(r13)
	  lwz       r31, 0x330(r29)
	  lwz       r0, 0x44(r3)
	  cmpwi     r0, 0x1
	  bne-      .loc_0x118
	  lwz       r0, 0x3D4(r29)
	  li        r30, -0x1
	  cmpwi     r0, 0
	  bne-      .loc_0x80
	  li        r30, 0
	  b         .loc_0x8C

	.loc_0x80:
	  cmpwi     r0, 0x1
	  bne-      .loc_0x8C
	  li        r30, 0x1

	.loc_0x8C:
	  cmpwi     r30, -0x1
	  beq-      .loc_0x12C
	  lwz       r3, -0x6CD0(r13)
	  mr        r4, r30
	  bl        -0x84754
	  lbz       r0, 0x32C(r29)
	  mr        r29, r3
	  cmplwi    r0, 0x4
	  bne-      .loc_0xC0
	  cmpwi     r30, 0
	  beq-      .loc_0xEC
	  li        r29, 0
	  b         .loc_0xEC

	.loc_0xC0:
	  cmplwi    r0, 0x5
	  bne-      .loc_0xD8
	  cmpwi     r30, 0x1
	  beq-      .loc_0xEC
	  li        r29, 0
	  b         .loc_0xEC

	.loc_0xD8:
	  cmplwi    r0, 0x3
	  beq-      .loc_0xEC
	  cmplwi    r0, 0x6
	  beq-      .loc_0xEC
	  li        r29, 0

	.loc_0xEC:
	  mr        r3, r31
	  mr        r4, r29
	  bl        0x261608
	  cmplwi    r29, 0
	  beq-      .loc_0x12C
	  mr        r3, r31
	  lwz       r12, 0x28(r31)
	  lwz       r12, 0x8C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x12C

	.loc_0x118:
	  mr        r3, r31
	  lwz       r12, 0x28(r31)
	  lwz       r12, 0x8C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x12C:
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
 * Address:	8020029C
 * Size:	000074
 */
void Game::PelletOtakara::Object::sound_otakaraEventStop(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r3, 0x330(r3)
	  lwz       r12, 0x28(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  cmpwi     r3, 0xC
	  beq-      .loc_0x4C
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  addi      r3, r3, 0x1B50
	  li        r4, 0x168
	  addi      r5, r5, 0x1B64
	  crclr     6, 0x6
	  bl        -0x1D5CA4

	.loc_0x4C:
	  lwz       r3, 0x330(r31)
	  lwz       r12, 0x28(r3)
	  lwz       r12, 0x90(r12)
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
 * Address:	80200310
 * Size:	000074
 */
void Game::PelletOtakara::Object::sound_otakaraEventFinish(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r3, 0x330(r3)
	  lwz       r12, 0x28(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  cmpwi     r3, 0xC
	  beq-      .loc_0x4C
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  addi      r3, r3, 0x1B50
	  li        r4, 0x175
	  addi      r5, r5, 0x1B64
	  crclr     6, 0x6
	  bl        -0x1D5D18

	.loc_0x4C:
	  lwz       r3, 0x330(r31)
	  lwz       r12, 0x28(r3)
	  lwz       r12, 0x94(r12)
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
 * Address:	80200384
 * Size:	0000D8
 */
void Game::PelletOtakara::Object::onCreateShape(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  stw       r30, 0x8(r1)
	  lwz       r3, 0x35C(r3)
	  lbz       r0, 0x25A(r3)
	  cmplwi    r0, 0x2
	  bne-      .loc_0xB0
	  lwz       r5, 0x174(r31)
	  lis       r3, 0x8048
	  addi      r4, r3, 0x1B70
	  lwz       r3, 0x8(r5)
	  lwz       r3, 0x4(r3)
	  lwz       r3, 0x64(r3)
	  bl        -0x1D1640
	  lwz       r4, 0x174(r31)
	  rlwinm    r0,r3,2,14,29
	  li        r30, 0
	  lwz       r3, 0x8(r4)
	  lwz       r3, 0x4(r3)
	  lwz       r3, 0x60(r3)
	  lwzx      r0, r3, r0
	  stw       r0, 0x458(r31)
	  b         .loc_0x8C

	.loc_0x68:
	  lwz       r3, 0x70(r5)
	  mr        r4, r30
	  bl        -0x1D15D8
	  subi      r4, r2, 0x4648
	  bl        -0x135D3C
	  cmpwi     r3, 0
	  bne-      .loc_0x88
	  sth       r30, 0x45C(r31)

	.loc_0x88:
	  addi      r30, r30, 0x1

	.loc_0x8C:
	  lwz       r3, 0x174(r31)
	  rlwinm    r4,r30,0,16,31
	  lwz       r3, 0x8(r3)
	  lwz       r5, 0x4(r3)
	  lwz       r3, 0x6C(r5)
	  lhz       r0, 0x0(r3)
	  cmplw     r4, r0
	  blt+      .loc_0x68
	  b         .loc_0xC0

	.loc_0xB0:
	  li        r3, 0
	  li        r0, -0x1
	  stw       r3, 0x458(r31)
	  sth       r0, 0x45C(r31)

	.loc_0xC0:
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
 * Address:	8020045C
 * Size:	0000B8
 */
void Game::PelletOtakara::Object::theEntry(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  lwz       r4, -0x6C18(r13)
	  lwz       r31, 0x58(r4)
	  lwz       r0, 0x13C(r31)
	  cmplw     r0, r30
	  beq-      .loc_0x70
	  lwz       r3, 0x35C(r30)
	  lbz       r0, 0x25A(r3)
	  cmplwi    r0, 0x2
	  bne-      .loc_0x70
	  mr        r3, r31
	  li        r4, 0x8
	  bl        -0xAF044
	  lwz       r3, 0x174(r30)
	  lwz       r3, 0x8(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  li        r4, 0
	  bl        -0xAF068
	  b         .loc_0x88

	.loc_0x70:
	  lwz       r3, 0x174(r30)
	  lwz       r3, 0x8(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl

	.loc_0x88:
	  lwz       r3, 0x174(r30)
	  lwz       r3, 0x8(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
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
 * Address:	80200514
 * Size:	000268
 */
void Game::PelletOtakara::Object::changeMaterial(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  mflr      r0
	  stw       r0, 0x54(r1)
	  stw       r31, 0x4C(r1)
	  mr        r31, r3
	  lwz       r0, 0x458(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x254
	  lwz       r4, -0x6C18(r13)
	  li        r3, 0
	  lwz       r0, 0x44(r4)
	  cmpwi     r0, 0x1
	  beq-      .loc_0x3C
	  cmpwi     r0, 0x3
	  bne-      .loc_0x40

	.loc_0x3C:
	  li        r3, 0x1

	.loc_0x40:
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x254
	  lwz       r3, -0x6514(r13)
	  addi      r4, r1, 0x8
	  lwz       r3, 0x24(r3)
	  lwz       r3, 0x25C(r3)
	  lwz       r3, 0x44(r3)
	  addi      r3, r3, 0xB4
	  bl        -0x115704
	  lfs       f5, 0x38(r1)
	  lfs       f4, 0x3C(r1)
	  lfs       f1, -0x4640(r2)
	  lfs       f3, 0x40(r1)
	  lfs       f2, 0x44(r1)
	  lfs       f0, -0x463C(r2)
	  stfs      f5, 0x28(r1)
	  stfs      f4, 0x2C(r1)
	  stfs      f3, 0x30(r1)
	  stfs      f2, 0x34(r1)
	  stfs      f1, 0x38(r1)
	  stfs      f1, 0x3C(r1)
	  stfs      f1, 0x40(r1)
	  stfs      f0, 0x44(r1)
	  lwz       r3, 0x174(r31)
	  lwz       r3, 0x8(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x458(r31)
	  li        r4, 0x1
	  lwz       r3, 0x28(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x50(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, 0x8(r1)
	  lfs       f1, -0x4640(r2)
	  stfs      f0, 0x24(r3)
	  lfs       f0, -0x463C(r2)
	  lfs       f2, 0xC(r1)
	  stfs      f2, 0x28(r3)
	  lfs       f2, 0x10(r1)
	  stfs      f2, 0x2C(r3)
	  lfs       f2, 0x14(r1)
	  stfs      f2, 0x30(r3)
	  lfs       f2, 0x18(r1)
	  stfs      f2, 0x34(r3)
	  lfs       f2, 0x1C(r1)
	  stfs      f2, 0x38(r3)
	  lfs       f2, 0x20(r1)
	  stfs      f2, 0x3C(r3)
	  lfs       f2, 0x24(r1)
	  stfs      f2, 0x40(r3)
	  lfs       f2, 0x28(r1)
	  stfs      f2, 0x44(r3)
	  lfs       f2, 0x2C(r1)
	  stfs      f2, 0x48(r3)
	  lfs       f2, 0x30(r1)
	  stfs      f2, 0x4C(r3)
	  lfs       f2, 0x34(r1)
	  stfs      f2, 0x50(r3)
	  stfs      f1, 0x5C(r3)
	  stfs      f1, 0x58(r3)
	  stfs      f1, 0x54(r3)
	  stfs      f0, 0x60(r3)
	  lwz       r3, 0x174(r31)
	  lwz       r4, -0x6C18(r13)
	  lwz       r3, 0x8(r3)
	  lha       r0, 0x45C(r31)
	  lwz       r3, 0x4(r3)
	  lwz       r5, 0x54(r4)
	  rlwinm    r0,r0,5,11,26
	  lwz       r4, 0x6C(r3)
	  lwz       r3, 0x20(r5)
	  lwz       r6, 0x4(r4)
	  lbz       r5, 0x0(r3)
	  add       r6, r6, r0
	  stb       r5, 0x0(r6)
	  lbz       r5, 0x1(r3)
	  stb       r5, 0x1(r6)
	  lhz       r5, 0x2(r3)
	  sth       r5, 0x2(r6)
	  lhz       r5, 0x4(r3)
	  sth       r5, 0x4(r6)
	  lbz       r5, 0x6(r3)
	  stb       r5, 0x6(r6)
	  lbz       r5, 0x7(r3)
	  stb       r5, 0x7(r6)
	  lbz       r5, 0x8(r3)
	  stb       r5, 0x8(r6)
	  lbz       r5, 0x9(r3)
	  stb       r5, 0x9(r6)
	  lhz       r5, 0xA(r3)
	  sth       r5, 0xA(r6)
	  lwz       r5, 0xC(r3)
	  stw       r5, 0xC(r6)
	  lbz       r5, 0x10(r3)
	  stb       r5, 0x10(r6)
	  lbz       r5, 0x11(r3)
	  stb       r5, 0x11(r6)
	  lbz       r5, 0x12(r3)
	  stb       r5, 0x12(r6)
	  lbz       r5, 0x13(r3)
	  stb       r5, 0x13(r6)
	  lbz       r5, 0x14(r3)
	  stb       r5, 0x14(r6)
	  lbz       r5, 0x15(r3)
	  stb       r5, 0x15(r6)
	  lbz       r5, 0x16(r3)
	  stb       r5, 0x16(r6)
	  lbz       r5, 0x17(r3)
	  stb       r5, 0x17(r6)
	  lbz       r5, 0x18(r3)
	  stb       r5, 0x18(r6)
	  lbz       r5, 0x19(r3)
	  stb       r5, 0x19(r6)
	  lha       r5, 0x1A(r3)
	  sth       r5, 0x1A(r6)
	  lwz       r5, 0x1C(r3)
	  stw       r5, 0x1C(r6)
	  lwz       r5, 0x4(r4)
	  add       r6, r5, r0
	  lwz       r5, 0x1C(r6)
	  add       r5, r3, r5
	  sub       r5, r5, r6
	  stw       r5, 0x1C(r6)
	  lwz       r4, 0x4(r4)
	  add       r4, r4, r0
	  lwz       r0, 0xC(r4)
	  add       r0, r3, r0
	  sub       r0, r0, r4
	  stw       r0, 0xC(r4)

	.loc_0x254:
	  lwz       r0, 0x54(r1)
	  lwz       r31, 0x4C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8020077C
 * Size:	0000B0
 */
void Game::PelletOtakara::Mgr::__ct(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  extsh.    r0, r4
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  beq-      .loc_0x28
	  addi      r0, r30, 0xA0
	  stw       r0, 0x4(r30)

	.loc_0x28:
	  mr        r3, r30
	  li        r4, 0
	  li        r5, 0x3
	  bl        -0x94DF0
	  addi      r31, r30, 0x54
	  mr        r3, r31
	  bl        0x210BD4
	  lis       r3, 0x804B
	  lis       r4, 0x804C
	  subi      r0, r3, 0x5324
	  lis       r3, 0x804C
	  stw       r0, 0x0(r31)
	  subi      r0, r4, 0x1874
	  subi      r4, r3, 0x1940
	  li        r5, 0
	  stw       r0, 0x0(r31)
	  addi      r0, r4, 0x98
	  addi      r3, r30, 0x70
	  stb       r5, 0x18(r31)
	  stw       r4, 0x0(r30)
	  stw       r0, 0x54(r30)
	  bl        0x19F8
	  lis       r4, 0x804C
	  mr        r3, r30
	  subi      r4, r4, 0x1B14
	  stw       r4, 0x0(r30)
	  addi      r0, r4, 0x98
	  stw       r0, 0x54(r30)
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
 * Address:	8020082C
 * Size:	00019C
 */
void __dt__Q24Game49FixedSizePelletMgr<Game::PelletOtakara::Object> Fv(void)
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
	  beq-      .loc_0x180
	  lis       r3, 0x804C
	  addic.    r0, r30, 0x70
	  subi      r3, r3, 0x1940
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x98
	  stw       r0, 0x54(r30)
	  beq-      .loc_0xA0
	  lis       r3, 0x804C
	  addic.    r0, r30, 0x70
	  subi      r3, r3, 0x19CC
	  stw       r3, 0x70(r30)
	  addi      r0, r3, 0x2C
	  stw       r0, 0x8C(r30)
	  beq-      .loc_0xA0
	  lis       r3, 0x804C
	  addic.    r0, r30, 0x70
	  subi      r3, r3, 0x1A48
	  stw       r3, 0x70(r30)
	  addi      r0, r3, 0x2C
	  stw       r0, 0x8C(r30)
	  beq-      .loc_0xA0
	  lis       r3, 0x804C
	  addic.    r0, r30, 0x70
	  subi      r0, r3, 0x1874
	  stw       r0, 0x70(r30)
	  beq-      .loc_0xA0
	  lis       r4, 0x804B
	  addi      r3, r30, 0x70
	  subi      r0, r4, 0x5324
	  li        r4, 0
	  stw       r0, 0x70(r30)
	  bl        0x210CC0

	.loc_0xA0:
	  addic.    r0, r30, 0x54
	  beq-      .loc_0xD4
	  lis       r3, 0x804C
	  addic.    r0, r30, 0x54
	  subi      r0, r3, 0x1874
	  stw       r0, 0x54(r30)
	  beq-      .loc_0xD4
	  lis       r4, 0x804B
	  addi      r3, r30, 0x54
	  subi      r0, r4, 0x5324
	  li        r4, 0
	  stw       r0, 0x54(r30)
	  bl        0x210C8C

	.loc_0xD4:
	  cmplwi    r30, 0
	  beq-      .loc_0x170
	  lis       r3, 0x804B
	  addic.    r0, r30, 0x18
	  addi      r0, r3, 0x1CDC
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x170
	  lis       r3, 0x804B
	  addic.    r0, r30, 0x18
	  addi      r3, r3, 0x1EB4
	  stw       r3, 0x18(r30)
	  addi      r0, r3, 0x2C
	  stw       r0, 0x34(r30)
	  beq-      .loc_0x170
	  lis       r3, 0x804B
	  addic.    r0, r30, 0x18
	  addi      r3, r3, 0x1E28
	  stw       r3, 0x18(r30)
	  addi      r0, r3, 0x2C
	  stw       r0, 0x34(r30)
	  beq-      .loc_0x170
	  lis       r3, 0x804B
	  addic.    r0, r30, 0x18
	  addi      r3, r3, 0x1DAC
	  stw       r3, 0x18(r30)
	  addi      r0, r3, 0x2C
	  stw       r0, 0x34(r30)
	  beq-      .loc_0x170
	  lis       r3, 0x804B
	  addic.    r0, r30, 0x18
	  addi      r0, r3, 0x1D80
	  stw       r0, 0x18(r30)
	  beq-      .loc_0x170
	  lis       r4, 0x804B
	  addi      r3, r30, 0x18
	  subi      r0, r4, 0x5324
	  li        r4, 0
	  stw       r0, 0x18(r30)
	  bl        0x210BF0

	.loc_0x170:
	  extsh.    r0, r31
	  ble-      .loc_0x180
	  mr        r3, r30
	  bl        -0x1DC8F4

	.loc_0x180:
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
 * Address:	802009C8
 * Size:	0000A0
 */
void MonoObjectMgr<Game::PelletOtakara::Object>::~MonoObjectMgr()
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
	  beq-      .loc_0x84
	  lis       r4, 0x804C
	  subi      r4, r4, 0x19CC
	  stw       r4, 0x0(r30)
	  addi      r0, r4, 0x2C
	  stw       r0, 0x1C(r30)
	  beq-      .loc_0x74
	  lis       r4, 0x804C
	  subi      r4, r4, 0x1A48
	  stw       r4, 0x0(r30)
	  addi      r0, r4, 0x2C
	  stw       r0, 0x1C(r30)
	  beq-      .loc_0x74
	  lis       r4, 0x804C
	  subi      r0, r4, 0x1874
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x74
	  lis       r5, 0x804B
	  li        r4, 0
	  subi      r0, r5, 0x5324
	  stw       r0, 0x0(r30)
	  bl        0x210B50

	.loc_0x74:
	  extsh.    r0, r31
	  ble-      .loc_0x84
	  mr        r3, r30
	  bl        -0x1DC994

	.loc_0x84:
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
 * Address:	80200A68
 * Size:	000070
 */
void Container<Game::PelletOtakara::Object>::~Container()
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
	  beq-      .loc_0x54
	  lis       r4, 0x804C
	  subi      r0, r4, 0x1874
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x44
	  lis       r5, 0x804B
	  li        r4, 0
	  subi      r0, r5, 0x5324
	  stw       r0, 0x0(r30)
	  bl        0x210AE0

	.loc_0x44:
	  extsh.    r0, r31
	  ble-      .loc_0x54
	  mr        r3, r30
	  bl        -0x1DCA04

	.loc_0x54:
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
 * Address:	80200AD8
 * Size:	00006C
 */
void Game::PelletOtakara::Mgr::setupResources(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  subi      r4, r2, 0x4638
	  li        r5, 0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r3, -0x6514(r13)
	  bl        0x222864
	  mr        r3, r31
	  li        r4, 0x20
	  bl        0x1910
	  lis       r4, 0x8048
	  mr        r3, r31
	  addi      r4, r4, 0x1B80
	  bl        -0x94A48
	  addi      r3, r31, 0x18
	  li        r4, 0x100
	  bl        -0x5B5C
	  lwz       r3, -0x6514(r13)
	  subi      r4, r2, 0x4638
	  bl        0x222838
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80200B44
 * Size:	000024
 */
void Game::PelletOtakara::Mgr::generatorNewPelletParm(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r3, 0x4
	  stw       r0, 0x14(r1)
	  bl        -0x1DCCB0
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80200B68
 * Size:	000148
 */
void generatorBirth__Q34Game13PelletOtakara3MgrFR10Vector3<float>
    R10Vector3<float> PQ24Game13GenPelletParm(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x80(r1)
	  mflr      r0
	  stw       r0, 0x84(r1)
	  stfd      f31, 0x70(r1)
	  psq_st    f31,0x78(r1),0,0
	  stw       r31, 0x6C(r1)
	  stw       r30, 0x68(r1)
	  stw       r29, 0x64(r1)
	  mr        r31, r6
	  mr        r29, r4
	  lwz       r3, -0x6AE0(r13)
	  mr        r30, r5
	  lwz       r4, 0x0(r6)
	  bl        -0x94E14
	  lis       r4, 0x804B
	  li        r8, 0
	  subi      r0, r4, 0x5D0C
	  li        r5, -0x1
	  lis       r4, 0x804B
	  stw       r0, 0x38(r1)
	  subi      r0, r4, 0x5D48
	  li        r7, 0xFF
	  li        r6, 0x1
	  stw       r0, 0x38(r1)
	  li        r0, 0x3
	  addi      r4, r1, 0x38
	  stb       r8, 0x54(r1)
	  sth       r8, 0x4C(r1)
	  stb       r7, 0x4E(r1)
	  stw       r8, 0x50(r1)
	  stb       r8, 0x4F(r1)
	  stb       r6, 0x3C(r1)
	  stb       r8, 0x55(r1)
	  stw       r5, 0x5C(r1)
	  stw       r5, 0x58(r1)
	  stb       r8, 0x56(r1)
	  stb       r8, 0x57(r1)
	  lwz       r5, 0x40(r3)
	  lwz       r3, -0x6CE0(r13)
	  stw       r5, 0x40(r1)
	  stb       r0, 0x4E(r1)
	  lwz       r0, 0x0(r31)
	  stw       r0, 0x48(r1)
	  stw       r8, 0x50(r1)
	  bl        -0x93758
	  mr.       r31, r3
	  beq-      .loc_0x120
	  lwz       r3, -0x6CF8(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0xF4
	  lwz       r12, 0x4(r3)
	  mr        r4, r29
	  lwz       r12, 0x28(r12)
	  mtctr     r12
	  bctrl
	  fmr       f31, f1
	  mr        r3, r31
	  bl        -0x9A278
	  lfs       f0, -0x4630(r2)
	  fmadds    f0, f0, f1, f31
	  stfs      f0, 0x4(r29)

	.loc_0xF4:
	  mr        r3, r31
	  mr        r4, r29
	  li        r5, 0
	  bl        -0xC5AC0
	  mr        r4, r29
	  mr        r5, r30
	  addi      r3, r1, 0x8
	  bl        0x227C10
	  mr        r3, r31
	  addi      r4, r1, 0x8
	  bl        -0x987B8

	.loc_0x120:
	  mr        r3, r31
	  psq_l     f31,0x78(r1),0,0
	  lwz       r0, 0x84(r1)
	  lfd       f31, 0x70(r1)
	  lwz       r31, 0x6C(r1)
	  lwz       r30, 0x68(r1)
	  lwz       r29, 0x64(r1)
	  mtlr      r0
	  addi      r1, r1, 0x80
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80200CB0
 * Size:	000030
 */
void Game::PelletOtakara::Mgr::generatorWrite((Stream&, Game::GenPelletParm*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r3, r4
	  stw       r0, 0x14(r1)
	  lwz       r0, 0x0(r5)
	  rlwinm    r0,r0,0,16,31
	  extsh     r4, r0
	  bl        0x214A64
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80200CE0
 * Size:	000038
 */
void Game::PelletOtakara::Mgr::generatorRead((Stream&, Game::GenPelletParm*,
                                              unsigned long))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r3, r4
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r5
	  bl        0x213A6C
	  rlwinm    r0,r3,0,16,31
	  stw       r0, 0x0(r31)
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80200D18
 * Size:	0001B4
 */
void Game::PelletOtakara::Mgr::__dt(void)
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
	  beq-      .loc_0x198
	  lis       r3, 0x804C
	  subi      r3, r3, 0x1B14
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x98
	  stw       r0, 0x54(r30)
	  beq-      .loc_0x188
	  lis       r3, 0x804C
	  addic.    r0, r30, 0x70
	  subi      r3, r3, 0x1940
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x98
	  stw       r0, 0x54(r30)
	  beq-      .loc_0xB8
	  lis       r3, 0x804C
	  addic.    r0, r30, 0x70
	  subi      r3, r3, 0x19CC
	  stw       r3, 0x70(r30)
	  addi      r0, r3, 0x2C
	  stw       r0, 0x8C(r30)
	  beq-      .loc_0xB8
	  lis       r3, 0x804C
	  addic.    r0, r30, 0x70
	  subi      r3, r3, 0x1A48
	  stw       r3, 0x70(r30)
	  addi      r0, r3, 0x2C
	  stw       r0, 0x8C(r30)
	  beq-      .loc_0xB8
	  lis       r3, 0x804C
	  addic.    r0, r30, 0x70
	  subi      r0, r3, 0x1874
	  stw       r0, 0x70(r30)
	  beq-      .loc_0xB8
	  lis       r4, 0x804B
	  addi      r3, r30, 0x70
	  subi      r0, r4, 0x5324
	  li        r4, 0
	  stw       r0, 0x70(r30)
	  bl        0x2107BC

	.loc_0xB8:
	  addic.    r0, r30, 0x54
	  beq-      .loc_0xEC
	  lis       r3, 0x804C
	  addic.    r0, r30, 0x54
	  subi      r0, r3, 0x1874
	  stw       r0, 0x54(r30)
	  beq-      .loc_0xEC
	  lis       r4, 0x804B
	  addi      r3, r30, 0x54
	  subi      r0, r4, 0x5324
	  li        r4, 0
	  stw       r0, 0x54(r30)
	  bl        0x210788

	.loc_0xEC:
	  cmplwi    r30, 0
	  beq-      .loc_0x188
	  lis       r3, 0x804B
	  addic.    r0, r30, 0x18
	  addi      r0, r3, 0x1CDC
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x188
	  lis       r3, 0x804B
	  addic.    r0, r30, 0x18
	  addi      r3, r3, 0x1EB4
	  stw       r3, 0x18(r30)
	  addi      r0, r3, 0x2C
	  stw       r0, 0x34(r30)
	  beq-      .loc_0x188
	  lis       r3, 0x804B
	  addic.    r0, r30, 0x18
	  addi      r3, r3, 0x1E28
	  stw       r3, 0x18(r30)
	  addi      r0, r3, 0x2C
	  stw       r0, 0x34(r30)
	  beq-      .loc_0x188
	  lis       r3, 0x804B
	  addic.    r0, r30, 0x18
	  addi      r3, r3, 0x1DAC
	  stw       r3, 0x18(r30)
	  addi      r0, r3, 0x2C
	  stw       r0, 0x34(r30)
	  beq-      .loc_0x188
	  lis       r3, 0x804B
	  addic.    r0, r30, 0x18
	  addi      r0, r3, 0x1D80
	  stw       r0, 0x18(r30)
	  beq-      .loc_0x188
	  lis       r4, 0x804B
	  addi      r3, r30, 0x18
	  subi      r0, r4, 0x5324
	  li        r4, 0
	  stw       r0, 0x18(r30)
	  bl        0x2106EC

	.loc_0x188:
	  extsh.    r0, r31
	  ble-      .loc_0x198
	  mr        r3, r30
	  bl        -0x1DCDF8

	.loc_0x198:
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
 * Address:	80200ECC
 * Size:	000008
 */
void Game::PelletOtakara::Mgr::getMgrName(void)
{
	/*
	.loc_0x0:
	  subi      r3, r2, 0x462C
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80200ED4
 * Size:	000008
 */
void Game::PelletOtakara::Mgr::getMgrID(void)
{
	/*
	.loc_0x0:
	  li        r3, 0x3
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80200EDC
 * Size:	00000C
 */
void Game::PelletOtakara::Mgr::generatorLocalVersion(void)
{
	/*
	.loc_0x0:
	  lis       r3, 0x3030
	  addi      r3, r3, 0x3030
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80200EE8
 * Size:	000088
 */
void ObjectMgr<Game::PelletOtakara::Object>::~ObjectMgr()
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
	  beq-      .loc_0x6C
	  lis       r4, 0x804C
	  subi      r4, r4, 0x1A48
	  stw       r4, 0x0(r30)
	  addi      r0, r4, 0x2C
	  stw       r0, 0x1C(r30)
	  beq-      .loc_0x5C
	  lis       r4, 0x804C
	  subi      r0, r4, 0x1874
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x5C
	  lis       r5, 0x804B
	  li        r4, 0
	  subi      r0, r5, 0x5324
	  stw       r0, 0x0(r30)
	  bl        0x210648

	.loc_0x5C:
	  extsh.    r0, r31
	  ble-      .loc_0x6C
	  mr        r3, r30
	  bl        -0x1DCE9C

	.loc_0x6C:
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
 * Address:	80200F70
 * Size:	000008
 */
void Game::PelletOtakara::Object::getKind(void)
{
	/*
	.loc_0x0:
	  li        r3, 0x3
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80200F78
 * Size:	00000C
 */
void Game::PelletOtakara::Object::getBedamaColor(void)
{
	/*
	.loc_0x0:
	  lbz       r3, 0x45E(r3)
	  extsb     r3, r3
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80200F84
 * Size:	000004
 */
void onCreateModel__Q24Game49FixedSizePelletMgr<Game::PelletOtakara::Object>
FPQ28SysShape5Model(void)
{
}

/*
 * --INFO--
 * Address:	80200F88
 * Size:	00002C
 */
void birth__Q24Game49FixedSizePelletMgr<Game::PelletOtakara::Object> Fv(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwzu      r12, 0x70(r3)
	  lwz       r12, 0x7C(r12)
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
 * Address:	80200FB4
 * Size:	00002C
 */
void doAnimation__Q24Game49FixedSizePelletMgr<Game::PelletOtakara::Object>
Fv(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwzu      r12, 0x70(r3)
	  lwz       r12, 0x64(r12)
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
 * Address:	80200FE0
 * Size:	00002C
 */
void doEntry__Q24Game49FixedSizePelletMgr<Game::PelletOtakara::Object> Fv(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwzu      r12, 0x70(r3)
	  lwz       r12, 0x68(r12)
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
 * Address:	8020100C
 * Size:	00002C
 */
void doSetView__Q24Game49FixedSizePelletMgr<Game::PelletOtakara::Object>
Fi(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwzu      r12, 0x70(r3)
	  lwz       r12, 0x6C(r12)
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
 * Address:	80201038
 * Size:	00002C
 */
void doViewCalc__Q24Game49FixedSizePelletMgr<Game::PelletOtakara::Object>
Fv(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwzu      r12, 0x70(r3)
	  lwz       r12, 0x70(r12)
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
 * Address:	80201064
 * Size:	00002C
 */
void doSimulation__Q24Game49FixedSizePelletMgr<Game::PelletOtakara::Object>
Ff(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwzu      r12, 0x70(r3)
	  lwz       r12, 0x74(r12)
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
 * Address:	80201090
 * Size:	00002C
 */
void doDirectDraw__Q24Game49FixedSizePelletMgr<Game::PelletOtakara::Object>
FR8Graphics(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwzu      r12, 0x70(r3)
	  lwz       r12, 0x78(r12)
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
 * Address:	802010BC
 * Size:	000024
 */
void kill__Q24Game49FixedSizePelletMgr<Game::PelletOtakara::Object>
FPQ24Game6Pellet(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  addi      r3, r3, 0x70
	  stw       r0, 0x14(r1)
	  bl        0xCC
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802010E0
 * Size:	00002C
 */
void getNext__Q24Game49FixedSizePelletMgr<Game::PelletOtakara::Object> FPv(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwzu      r12, 0x70(r3)
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
 * Address:	8020110C
 * Size:	00002C
 */
void getStart__Q24Game49FixedSizePelletMgr<Game::PelletOtakara::Object> Fv(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwzu      r12, 0x70(r3)
	  lwz       r12, 0x18(r12)
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
 * Address:	80201138
 * Size:	000060
 */
void MonoObjectMgr<Game::PelletOtakara::Object>::birth()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        0x494
	  cmpwi     r3, -0x1
	  beq-      .loc_0x48
	  lwz       r6, 0x28(r31)
	  li        r0, 0
	  lwz       r4, 0x2C(r31)
	  mulli     r5, r3, 0x460
	  stbx      r0, r4, r3
	  add       r3, r6, r5
	  lwz       r4, 0x20(r31)
	  addi      r0, r4, 0x1
	  stw       r0, 0x20(r31)
	  b         .loc_0x4C

	.loc_0x48:
	  li        r3, 0

	.loc_0x4C:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80201198
 * Size:	000054
 */
void MonoObjectMgr<Game::PelletOtakara::Object>::kill(
    Game::PelletOtakara::Object*)
{
	/*
	.loc_0x0:
	  lwz       r0, 0x24(r3)
	  li        r6, 0
	  li        r5, 0
	  mtctr     r0
	  cmpwi     r0, 0
	  blelr-

	.loc_0x18:
	  lwz       r0, 0x28(r3)
	  add       r0, r0, r5
	  cmplw     r0, r4
	  bne-      .loc_0x44
	  lwz       r4, 0x2C(r3)
	  li        r0, 0x1
	  stbx      r0, r4, r6
	  lwz       r4, 0x20(r3)
	  subi      r0, r4, 0x1
	  stw       r0, 0x20(r3)
	  blr

	.loc_0x44:
	  addi      r5, r5, 0x460
	  addi      r6, r6, 0x1
	  bdnz+     .loc_0x18
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802011EC
 * Size:	000040
 */
void MonoObjectMgr<Game::PelletOtakara::Object>::getNext(void*)
{
	/*
	.loc_0x0:
	  lwz       r5, 0x24(r3)
	  addi      r6, r4, 0x1
	  sub       r0, r5, r6
	  mtctr     r0
	  cmpw      r6, r5
	  bge-      .loc_0x38

	.loc_0x18:
	  lwz       r4, 0x2C(r3)
	  lbzx      r0, r4, r6
	  cmplwi    r0, 0
	  bne-      .loc_0x30
	  mr        r3, r6
	  blr

	.loc_0x30:
	  addi      r6, r6, 0x1
	  bdnz+     .loc_0x18

	.loc_0x38:
	  mr        r3, r5
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8020122C
 * Size:	000030
 */
void MonoObjectMgr<Game::PelletOtakara::Object>::getStart()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r4, -0x1
	  stw       r0, 0x14(r1)
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
 * Address:	8020125C
 * Size:	000008
 */
void MonoObjectMgr<Game::PelletOtakara::Object>::getEnd()
{
	/*
	.loc_0x0:
	  lwz       r3, 0x24(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80201264
 * Size:	000010
 */
void MonoObjectMgr<Game::PelletOtakara::Object>::getAt(int)
{
	/*
	.loc_0x0:
	  mulli     r0, r4, 0x460
	  lwz       r3, 0x28(r3)
	  add       r3, r3, r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80201274
 * Size:	000008
 */
void MonoObjectMgr<Game::PelletOtakara::Object>::getTo()
{
	/*
	.loc_0x0:
	  lwz       r3, 0x24(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8020127C
 * Size:	000080
 */
void MonoObjectMgr<Game::PelletOtakara::Object>::doAnimation()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  li        r31, 0
	  stw       r30, 0x18(r1)
	  li        r30, 0
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  b         .loc_0x58

	.loc_0x28:
	  lwz       r3, 0x2C(r29)
	  lbzx      r0, r3, r30
	  cmplwi    r0, 0
	  bne-      .loc_0x50
	  lwz       r0, 0x28(r29)
	  add       r3, r0, r31
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x50:
	  addi      r31, r31, 0x460
	  addi      r30, r30, 0x1

	.loc_0x58:
	  lwz       r0, 0x24(r29)
	  cmpw      r30, r0
	  blt+      .loc_0x28
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
 * Address:	802012FC
 * Size:	000080
 */
void MonoObjectMgr<Game::PelletOtakara::Object>::doEntry()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  li        r31, 0
	  stw       r30, 0x18(r1)
	  li        r30, 0
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  b         .loc_0x58

	.loc_0x28:
	  lwz       r3, 0x2C(r29)
	  lbzx      r0, r3, r30
	  cmplwi    r0, 0
	  bne-      .loc_0x50
	  lwz       r0, 0x28(r29)
	  add       r3, r0, r31
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x40(r12)
	  mtctr     r12
	  bctrl

	.loc_0x50:
	  addi      r31, r31, 0x460
	  addi      r30, r30, 0x1

	.loc_0x58:
	  lwz       r0, 0x24(r29)
	  cmpw      r30, r0
	  blt+      .loc_0x28
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
 * Address:	8020137C
 * Size:	000090
 */
void MonoObjectMgr<Game::PelletOtakara::Object>::doSetView(int)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  li        r31, 0
	  stw       r30, 0x18(r1)
	  li        r30, 0
	  stw       r29, 0x14(r1)
	  mr        r29, r4
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  b         .loc_0x64

	.loc_0x30:
	  lwz       r3, 0x2C(r28)
	  lbzx      r0, r3, r30
	  cmplwi    r0, 0
	  bne-      .loc_0x5C
	  lwz       r0, 0x28(r28)
	  mr        r4, r29
	  add       r3, r0, r31
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x44(r12)
	  mtctr     r12
	  bctrl

	.loc_0x5C:
	  addi      r31, r31, 0x460
	  addi      r30, r30, 0x1

	.loc_0x64:
	  lwz       r0, 0x24(r28)
	  cmpw      r30, r0
	  blt+      .loc_0x30
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
 * Address:	8020140C
 * Size:	000080
 */
void MonoObjectMgr<Game::PelletOtakara::Object>::doViewCalc()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  li        r31, 0
	  stw       r30, 0x18(r1)
	  li        r30, 0
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  b         .loc_0x58

	.loc_0x28:
	  lwz       r3, 0x2C(r29)
	  lbzx      r0, r3, r30
	  cmplwi    r0, 0
	  bne-      .loc_0x50
	  lwz       r0, 0x28(r29)
	  add       r3, r0, r31
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x48(r12)
	  mtctr     r12
	  bctrl

	.loc_0x50:
	  addi      r31, r31, 0x460
	  addi      r30, r30, 0x1

	.loc_0x58:
	  lwz       r0, 0x24(r29)
	  cmpw      r30, r0
	  blt+      .loc_0x28
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
 * Address:	8020148C
 * Size:	000090
 */
void MonoObjectMgr<Game::PelletOtakara::Object>::doSimulation(float)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stfd      f31, 0x18(r1)
	  fmr       f31, f1
	  stw       r31, 0x14(r1)
	  li        r31, 0
	  stw       r30, 0x10(r1)
	  li        r30, 0
	  stw       r29, 0xC(r1)
	  mr        r29, r3
	  b         .loc_0x64

	.loc_0x30:
	  lwz       r3, 0x2C(r29)
	  lbzx      r0, r3, r30
	  cmplwi    r0, 0
	  bne-      .loc_0x5C
	  lwz       r0, 0x28(r29)
	  fmr       f1, f31
	  add       r3, r0, r31
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x4C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x5C:
	  addi      r31, r31, 0x460
	  addi      r30, r30, 0x1

	.loc_0x64:
	  lwz       r0, 0x24(r29)
	  cmpw      r30, r0
	  blt+      .loc_0x30
	  lwz       r0, 0x24(r1)
	  lfd       f31, 0x18(r1)
	  lwz       r31, 0x14(r1)
	  lwz       r30, 0x10(r1)
	  lwz       r29, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8020151C
 * Size:	000090
 */
void MonoObjectMgr<Game::PelletOtakara::Object>::doDirectDraw(Graphics&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  li        r31, 0
	  stw       r30, 0x18(r1)
	  li        r30, 0
	  stw       r29, 0x14(r1)
	  mr        r29, r4
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  b         .loc_0x64

	.loc_0x30:
	  lwz       r3, 0x2C(r28)
	  lbzx      r0, r3, r30
	  cmplwi    r0, 0
	  bne-      .loc_0x5C
	  lwz       r0, 0x28(r28)
	  mr        r4, r29
	  add       r3, r0, r31
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x50(r12)
	  mtctr     r12
	  bctrl

	.loc_0x5C:
	  addi      r31, r31, 0x460
	  addi      r30, r30, 0x1

	.loc_0x64:
	  lwz       r0, 0x24(r28)
	  cmpw      r30, r0
	  blt+      .loc_0x30
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
 * Address:	802015AC
 * Size:	000030
 */
void MonoObjectMgr<Game::PelletOtakara::Object>::clearMgr()
{
	/*
	.loc_0x0:
	  li        r0, 0
	  li        r6, 0
	  stw       r0, 0x20(r3)
	  li        r5, 0x1
	  b         .loc_0x20

	.loc_0x14:
	  lwz       r4, 0x2C(r3)
	  stbx      r5, r4, r6
	  addi      r6, r6, 0x1

	.loc_0x20:
	  lwz       r0, 0x24(r3)
	  cmpw      r6, r0
	  blt+      .loc_0x14
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802015DC
 * Size:	000004
 */
void MonoObjectMgr<Game::PelletOtakara::Object>::onAlloc() { }

/*
 * --INFO--
 * Address:	802015E0
 * Size:	00003C
 */
void MonoObjectMgr<Game::PelletOtakara::Object>::getEmptyIndex()
{
	/*
	.loc_0x0:
	  lwz       r0, 0x24(r3)
	  li        r5, 0
	  mtctr     r0
	  cmpwi     r0, 0
	  ble-      .loc_0x34

	.loc_0x14:
	  lwz       r4, 0x2C(r3)
	  lbzx      r0, r4, r5
	  cmplwi    r0, 0x1
	  bne-      .loc_0x2C
	  mr        r3, r5
	  blr

	.loc_0x2C:
	  addi      r5, r5, 0x1
	  bdnz+     .loc_0x14

	.loc_0x34:
	  li        r3, -0x1
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8020161C
 * Size:	000010
 */
void MonoObjectMgr<Game::PelletOtakara::Object>::get(void*)
{
	/*
	.loc_0x0:
	  mulli     r0, r4, 0x460
	  lwz       r3, 0x28(r3)
	  add       r3, r3, r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8020162C
 * Size:	00002C
 */
void Container<Game::PelletOtakara::Object>::getObject(void*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
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
 * Address:	80201658
 * Size:	000008
 */
void Container<Game::PelletOtakara::Object>::getAt(int)
{
	/*
	.loc_0x0:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80201660
 * Size:	000008
 */
void Container<Game::PelletOtakara::Object>::getTo()
{
	/*
	.loc_0x0:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80201668
 * Size:	0001F4
 */
void ObjectMgr<Game::PelletOtakara::Object>::doDirectDraw(Graphics&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r5, 0x804B
	  stw       r0, 0x24(r1)
	  li        r0, 0
	  addi      r5, r5, 0x1B8C
	  stw       r31, 0x1C(r1)
	  cmplwi    r0, 0
	  mr        r31, r4
	  stw       r0, 0x14(r1)
	  stw       r5, 0x8(r1)
	  stw       r0, 0xC(r1)
	  stw       r3, 0x10(r1)
	  bne-      .loc_0x50
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1C0

	.loc_0x50:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0xBC

	.loc_0x68:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1C0
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0xBC:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x68
	  b         .loc_0x1C0

	.loc_0xDC:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  mr        r4, r31
	  lwz       r12, 0x50(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x130
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1C0

	.loc_0x130:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1A4

	.loc_0x150:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1C0
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0x1A4:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x150

	.loc_0x1C0:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0xC(r1)
	  cmplw     r4, r3
	  bne+      .loc_0xDC
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8020185C
 * Size:	0001F4
 */
void ObjectMgr<Game::PelletOtakara::Object>::doSimulation(float)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r4, 0x804B
	  stw       r0, 0x24(r1)
	  li        r0, 0
	  addi      r4, r4, 0x1B8C
	  stfd      f31, 0x18(r1)
	  fmr       f31, f1
	  cmplwi    r0, 0
	  stw       r4, 0x8(r1)
	  stw       r0, 0x14(r1)
	  stw       r0, 0xC(r1)
	  stw       r3, 0x10(r1)
	  bne-      .loc_0x50
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1C0

	.loc_0x50:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0xBC

	.loc_0x68:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1C0
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0xBC:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x68
	  b         .loc_0x1C0

	.loc_0xDC:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  fmr       f1, f31
	  lwz       r12, 0x4C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x130
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1C0

	.loc_0x130:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1A4

	.loc_0x150:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1C0
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0x1A4:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x150

	.loc_0x1C0:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0xC(r1)
	  cmplw     r4, r3
	  bne+      .loc_0xDC
	  lwz       r0, 0x24(r1)
	  lfd       f31, 0x18(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80201A50
 * Size:	0001E4
 */
void ObjectMgr<Game::PelletOtakara::Object>::doViewCalc()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r4, 0x804B
	  stw       r0, 0x24(r1)
	  li        r0, 0
	  addi      r4, r4, 0x1B8C
	  cmplwi    r0, 0
	  stw       r0, 0x14(r1)
	  stw       r4, 0x8(r1)
	  stw       r0, 0xC(r1)
	  stw       r3, 0x10(r1)
	  bne-      .loc_0x48
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1B4

	.loc_0x48:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0xB4

	.loc_0x60:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1B4
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0xB4:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x60
	  b         .loc_0x1B4

	.loc_0xD4:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x48(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x124
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1B4

	.loc_0x124:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x198

	.loc_0x144:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1B4
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0x198:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x144

	.loc_0x1B4:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0xC(r1)
	  cmplw     r4, r3
	  bne+      .loc_0xD4
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80201C34
 * Size:	0001F4
 */
void ObjectMgr<Game::PelletOtakara::Object>::doSetView(int)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r5, 0x804B
	  stw       r0, 0x24(r1)
	  li        r0, 0
	  addi      r5, r5, 0x1B8C
	  stw       r31, 0x1C(r1)
	  cmplwi    r0, 0
	  mr        r31, r4
	  stw       r0, 0x14(r1)
	  stw       r5, 0x8(r1)
	  stw       r0, 0xC(r1)
	  stw       r3, 0x10(r1)
	  bne-      .loc_0x50
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1C0

	.loc_0x50:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0xBC

	.loc_0x68:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1C0
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0xBC:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x68
	  b         .loc_0x1C0

	.loc_0xDC:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  mr        r4, r31
	  lwz       r12, 0x44(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x130
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1C0

	.loc_0x130:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1A4

	.loc_0x150:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1C0
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0x1A4:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x150

	.loc_0x1C0:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0xC(r1)
	  cmplw     r4, r3
	  bne+      .loc_0xDC
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80201E28
 * Size:	0001E4
 */
void ObjectMgr<Game::PelletOtakara::Object>::doEntry()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r4, 0x804B
	  stw       r0, 0x24(r1)
	  li        r0, 0
	  addi      r4, r4, 0x1B8C
	  cmplwi    r0, 0
	  stw       r0, 0x14(r1)
	  stw       r4, 0x8(r1)
	  stw       r0, 0xC(r1)
	  stw       r3, 0x10(r1)
	  bne-      .loc_0x48
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1B4

	.loc_0x48:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0xB4

	.loc_0x60:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1B4
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0xB4:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x60
	  b         .loc_0x1B4

	.loc_0xD4:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x40(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x124
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1B4

	.loc_0x124:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x198

	.loc_0x144:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1B4
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0x198:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x144

	.loc_0x1B4:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0xC(r1)
	  cmplw     r4, r3
	  bne+      .loc_0xD4
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8020200C
 * Size:	0001E4
 */
void ObjectMgr<Game::PelletOtakara::Object>::doAnimation()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r4, 0x804B
	  stw       r0, 0x24(r1)
	  li        r0, 0
	  addi      r4, r4, 0x1B8C
	  cmplwi    r0, 0
	  stw       r0, 0x14(r1)
	  stw       r4, 0x8(r1)
	  stw       r0, 0xC(r1)
	  stw       r3, 0x10(r1)
	  bne-      .loc_0x48
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1B4

	.loc_0x48:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0xB4

	.loc_0x60:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1B4
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0xB4:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x60
	  b         .loc_0x1B4

	.loc_0xD4:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x124
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1B4

	.loc_0x124:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x198

	.loc_0x144:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1B4
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0x198:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x144

	.loc_0x1B4:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0xC(r1)
	  cmplw     r4, r3
	  bne+      .loc_0xD4
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802021F0
 * Size:	00009C
 */
void MonoObjectMgr<Game::PelletOtakara::Object>::MonoObjectMgr()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        0x20F18C
	  lis       r4, 0x804B
	  lis       r3, 0x804C
	  subi      r0, r4, 0x5324
	  lis       r6, 0x804B
	  stw       r0, 0x0(r31)
	  subi      r0, r3, 0x1874
	  lis       r4, 0x804C
	  lis       r3, 0x804C
	  stw       r0, 0x0(r31)
	  li        r8, 0
	  subi      r7, r4, 0x1A48
	  subi      r5, r3, 0x19CC
	  stb       r8, 0x18(r31)
	  subi      r0, r6, 0x4A10
	  addi      r6, r7, 0x2C
	  addi      r4, r5, 0x2C
	  stw       r0, 0x1C(r31)
	  li        r0, 0x1
	  mr        r3, r31
	  stw       r7, 0x0(r31)
	  stw       r6, 0x1C(r31)
	  stw       r5, 0x0(r31)
	  stw       r4, 0x1C(r31)
	  stb       r0, 0x18(r31)
	  stw       r8, 0x24(r31)
	  stw       r8, 0x20(r31)
	  stw       r8, 0x28(r31)
	  stw       r8, 0x2C(r31)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8020228C
 * Size:	000020
 */
void getFlag__Q24Game49FixedSizePelletMgr<Game::PelletOtakara::Object>
FPQ24Game6Pellet(void)
{
	/*
	.loc_0x0:
	  cmplwi    r4, 0
	  beq-      .loc_0x18
	  lwz       r3, 0x9C(r3)
	  lwz       r0, 0x440(r4)
	  lbzx      r3, r3, r0
	  blr

	.loc_0x18:
	  li        r3, -0x1
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802022AC
 * Size:	00001C
 */
void setFromTeki__Q24Game49FixedSizePelletMgr<Game::PelletOtakara::Object>
FPQ24Game6Pellet(void)
{
	/*
	.loc_0x0:
	  cmplwi    r4, 0
	  beqlr-
	  lwz       r3, 0x9C(r3)
	  li        r5, 0x65
	  lwz       r0, 0x440(r4)
	  stbx      r5, r3, r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802022C8
 * Size:	00001C
 */
void setRevival__Q24Game49FixedSizePelletMgr<Game::PelletOtakara::Object>
FPQ24Game6Pellet(void)
{
	/*
	.loc_0x0:
	  cmplwi    r4, 0
	  beqlr-
	  lwz       r3, 0x9C(r3)
	  li        r5, 0x64
	  lwz       r0, 0x440(r4)
	  stbx      r5, r3, r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802022E4
 * Size:	00001C
 */
void setComeAlive__Q24Game49FixedSizePelletMgr<Game::PelletOtakara::Object>
FPQ24Game6Pellet(void)
{
	/*
	.loc_0x0:
	  cmplwi    r4, 0
	  beqlr-
	  lwz       r3, 0x9C(r3)
	  li        r5, 0
	  lwz       r0, 0x440(r4)
	  stbx      r5, r3, r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80202300
 * Size:	00002C
 */
void getEnd__Q24Game49FixedSizePelletMgr<Game::PelletOtakara::Object> Fv(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwzu      r12, 0x70(r3)
	  lwz       r12, 0x1C(r12)
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
 * Address:	8020232C
 * Size:	00002C
 */
void get__Q24Game49FixedSizePelletMgr<Game::PelletOtakara::Object> FPv(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwzu      r12, 0x70(r3)
	  lwz       r12, 0x20(r12)
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
 * Address:	80202358
 * Size:	00002C
 */
void getObjectPtr__Q24Game49FixedSizePelletMgr<Game::PelletOtakara::Object>
FPv(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC4(r12)
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
 * Address:	80202384
 * Size:	000090
 */
void birthFromTeki__Q24Game49FixedSizePelletMgr<Game::PelletOtakara::Object>
FPQ24Game12PelletConfig(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  li        r31, 0
	  stw       r30, 0x18(r1)
	  mr        r30, r4
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  b         .loc_0x64

	.loc_0x28:
	  lwz       r3, 0x9C(r29)
	  lbzx      r0, r3, r31
	  cmplwi    r0, 0x65
	  bne-      .loc_0x60
	  addi      r3, r29, 0x70
	  mr        r4, r31
	  lwz       r12, 0x70(r29)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x35C(r3)
	  cmplw     r0, r30
	  bne-      .loc_0x60
	  b         .loc_0x74

	.loc_0x60:
	  addi      r31, r31, 0x1

	.loc_0x64:
	  lwz       r0, 0x94(r29)
	  cmpw      r31, r0
	  blt+      .loc_0x28
	  li        r3, 0

	.loc_0x74:
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
 * Address:	80202414
 * Size:	000080
 */
void alloc__Q24Game49FixedSizePelletMgr<Game::PelletOtakara::Object> Fi(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  addi      r3, r30, 0x70
	  bl        0xC8
	  mr        r3, r30
	  bl        .loc_0x80
	  li        r31, 0
	  b         .loc_0x5C

	.loc_0x30:
	  addi      r3, r30, 0x70
	  mr        r4, r31
	  lwz       r12, 0x70(r30)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  addi      r31, r31, 0x1

	.loc_0x5C:
	  lwz       r0, 0x94(r30)
	  cmpw      r31, r0
	  blt+      .loc_0x30
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr

	.loc_0x80:
	*/
}

/*
 * --INFO--
 * Address:	80202494
 * Size:	000064
 */
void onAlloc__Q24Game49FixedSizePelletMgr<Game::PelletOtakara::Object> Fv(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  li        r31, 0
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  b         .loc_0x40

	.loc_0x20:
	  addi      r3, r30, 0x70
	  mr        r4, r31
	  lwz       r12, 0x70(r30)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  stw       r31, 0x440(r3)
	  addi      r31, r31, 0x1

	.loc_0x40:
	  lwz       r0, 0x94(r30)
	  cmpw      r31, r0
	  blt+      .loc_0x20
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
 * Address:	802024F8
 * Size:	000188
 */
void MonoObjectMgr<Game::PelletOtakara::Object>::alloc(int)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r4
	  stw       r30, 0x18(r1)
	  mr        r30, r3
	  stw       r29, 0x14(r1)
	  mr        r29, r31
	  mulli     r3, r29, 0x460
	  stw       r28, 0x10(r1)
	  addi      r3, r3, 0x10
	  bl        -0x1DE57C
	  lis       r4, 0x8020
	  mr        r7, r29
	  addi      r4, r4, 0x2680
	  li        r5, 0
	  li        r6, 0x460
	  bl        -0x140B50
	  stw       r3, 0x28(r30)
	  li        r0, 0
	  mr        r3, r29
	  stw       r31, 0x24(r30)
	  stw       r0, 0x20(r30)
	  bl        -0x1DE5AC
	  cmpwi     r31, 0
	  stw       r3, 0x2C(r30)
	  li        r11, 0
	  ble-      .loc_0x120
	  cmpwi     r31, 0x8
	  subi      r3, r31, 0x8
	  ble-      .loc_0xFC
	  addi      r0, r3, 0x7
	  rlwinm    r0,r0,29,3,31
	  mtctr     r0
	  cmpwi     r3, 0
	  ble-      .loc_0xFC

	.loc_0x94:
	  lwz       r3, 0x2C(r30)
	  li        r10, 0x1
	  addi      r8, r11, 0x1
	  addi      r7, r11, 0x2
	  stbx      r10, r3, r11
	  addi      r6, r11, 0x3
	  addi      r5, r11, 0x4
	  addi      r4, r11, 0x5
	  lwz       r9, 0x2C(r30)
	  addi      r3, r11, 0x6
	  addi      r0, r11, 0x7
	  addi      r11, r11, 0x8
	  stbx      r10, r9, r8
	  lwz       r8, 0x2C(r30)
	  stbx      r10, r8, r7
	  lwz       r7, 0x2C(r30)
	  stbx      r10, r7, r6
	  lwz       r6, 0x2C(r30)
	  stbx      r10, r6, r5
	  lwz       r5, 0x2C(r30)
	  stbx      r10, r5, r4
	  lwz       r4, 0x2C(r30)
	  stbx      r10, r4, r3
	  lwz       r3, 0x2C(r30)
	  stbx      r10, r3, r0
	  bdnz+     .loc_0x94

	.loc_0xFC:
	  sub       r0, r31, r11
	  li        r4, 0x1
	  mtctr     r0
	  cmpw      r11, r31
	  bge-      .loc_0x120

	.loc_0x110:
	  lwz       r3, 0x2C(r30)
	  stbx      r4, r3, r11
	  addi      r11, r11, 0x1
	  bdnz+     .loc_0x110

	.loc_0x120:
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x88(r12)
	  mtctr     r12
	  bctrl
	  li        r28, 0
	  li        r29, 0
	  b         .loc_0x160

	.loc_0x140:
	  lwz       r0, 0x28(r30)
	  add       r3, r0, r29
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  addi      r29, r29, 0x460
	  addi      r28, r28, 0x1

	.loc_0x160:
	  cmpw      r28, r31
	  blt+      .loc_0x140
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
 * Address:	80202680
 * Size:	00004C
 */
void Game::PelletOtakara::Object::__ct(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x9C014
	  lis       r4, 0x804C
	  mr        r3, r31
	  subi      r5, r4, 0x1848
	  stw       r5, 0x0(r31)
	  addi      r4, r5, 0x1B4
	  addi      r0, r5, 0x1C0
	  stw       r4, 0x314(r31)
	  stw       r0, 0x318(r31)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802026CC
 * Size:	000028
 */
void __sinit_pelletOtakara_cpp(void)
{
	/*
	.loc_0x0:
	  lis       r4, 0x8051
	  li        r0, -0x1
	  lfs       f0, 0x48B0(r4)
	  lis       r3, 0x804C
	  stw       r0, -0x6AE8(r13)
	  stfsu     f0, -0x1B20(r3)
	  stfs      f0, -0x6AE4(r13)
	  stfs      f0, 0x4(r3)
	  stfs      f0, 0x8(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802026F4
 * Size:	000008
 */
void @84 @__dt__Q24Game49FixedSizePelletMgr<Game::PelletOtakara::Object>
Fv(void)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x54
	  b         -0x1ECC
	*/
}

/*
 * --INFO--
 * Address:	802026FC
 * Size:	000008
 */
void MonoObjectMgr<Game::PelletOtakara::Object>::@28 @resetMgr()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x1C
	  b         -0x90330
	*/
}

/*
 * --INFO--
 * Address:	80202704
 * Size:	000008
 */
void MonoObjectMgr<Game::PelletOtakara::Object>::@28 @doDirectDraw(Graphics&)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x1C
	  b         -0x11EC
	*/
}

/*
 * --INFO--
 * Address:	8020270C
 * Size:	000008
 */
void MonoObjectMgr<Game::PelletOtakara::Object>::@28 @doSimulation(float)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x1C
	  b         -0x1284
	*/
}

/*
 * --INFO--
 * Address:	80202714
 * Size:	000008
 */
void MonoObjectMgr<Game::PelletOtakara::Object>::@28 @doViewCalc()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x1C
	  b         -0x130C
	*/
}

/*
 * --INFO--
 * Address:	8020271C
 * Size:	000008
 */
void MonoObjectMgr<Game::PelletOtakara::Object>::@28 @doSetView(int)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x1C
	  b         -0x13A4
	*/
}

/*
 * --INFO--
 * Address:	80202724
 * Size:	000008
 */
void MonoObjectMgr<Game::PelletOtakara::Object>::@28 @doEntry()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x1C
	  b         -0x142C
	*/
}

/*
 * --INFO--
 * Address:	8020272C
 * Size:	000008
 */
void MonoObjectMgr<Game::PelletOtakara::Object>::@28 @doAnimation()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x1C
	  b         -0x14B4
	*/
}

/*
 * --INFO--
 * Address:	80202734
 * Size:	000008
 */
void ObjectMgr<Game::PelletOtakara::Object>::@28 @doDirectDraw(Graphics&)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x1C
	  b         -0x10D0
	*/
}

/*
 * --INFO--
 * Address:	8020273C
 * Size:	000008
 */
void ObjectMgr<Game::PelletOtakara::Object>::@28 @doSimulation(float)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x1C
	  b         -0xEE4
	*/
}

/*
 * --INFO--
 * Address:	80202744
 * Size:	000008
 */
void ObjectMgr<Game::PelletOtakara::Object>::@28 @doViewCalc()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x1C
	  b         -0xCF8
	*/
}

/*
 * --INFO--
 * Address:	8020274C
 * Size:	000008
 */
void ObjectMgr<Game::PelletOtakara::Object>::@28 @doSetView(int)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x1C
	  b         -0xB1C
	*/
}

/*
 * --INFO--
 * Address:	80202754
 * Size:	000008
 */
void ObjectMgr<Game::PelletOtakara::Object>::@28 @doEntry()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x1C
	  b         -0x930
	*/
}

/*
 * --INFO--
 * Address:	8020275C
 * Size:	000008
 */
void ObjectMgr<Game::PelletOtakara::Object>::@28 @doAnimation()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x1C
	  b         -0x754
	*/
}

/*
 * --INFO--
 * Address:	80202764
 * Size:	000008
 */
void @84 @getEnd__Q24Game49FixedSizePelletMgr<Game::PelletOtakara::Object>
Fv(void)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x54
	  b         -0x468
	*/
}

/*
 * --INFO--
 * Address:	8020276C
 * Size:	000008
 */
void @84 @getStart__Q24Game49FixedSizePelletMgr<Game::PelletOtakara::Object>
Fv(void)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x54
	  b         -0x1664
	*/
}

/*
 * --INFO--
 * Address:	80202774
 * Size:	000008
 */
void @84 @getNext__Q24Game49FixedSizePelletMgr<Game::PelletOtakara::Object>
FPv(void)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x54
	  b         -0x1698
	*/
}

/*
 * --INFO--
 * Address:	8020277C
 * Size:	000008
 */
void @84 @get__Q24Game49FixedSizePelletMgr<Game::PelletOtakara::Object>
FPv(void)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x54
	  b         -0x454
	*/
}

/*
 * --INFO--
 * Address:	80202784
 * Size:	000008
 */
void @84 @Game::PelletOtakara::Mgr::__dt(void)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x54
	  b         -0x1A70
	*/
}
