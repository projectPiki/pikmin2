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
 * Address:	801AA6E4
 * Size:	000050
 */
void Game::GenBase::__ct((unsigned long, char*, char*))
{
	/*
	.loc_0x0:
	  extsh.    r0, r4
	  beq-      .loc_0x10
	  addi      r0, r3, 0x24
	  stw       r0, 0x0(r3)

	.loc_0x10:
	  li        r9, 0
	  lis       r4, 0x8048
	  stw       r9, 0x4(r3)
	  subi      r0, r4, 0x980
	  lis       r8, 0x804B
	  lis       r4, 0x5F5F
	  stw       r0, 0x8(r3)
	  addi      r8, r8, 0x567C
	  addi      r0, r4, 0x5F5F
	  stw       r8, 0xC(r3)
	  stw       r5, 0x10(r3)
	  stw       r6, 0x18(r3)
	  stw       r7, 0x1C(r3)
	  stw       r0, 0x14(r3)
	  stw       r9, 0x20(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000054
 */
void Game::GenBase::writeVersion((Stream&))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801AA734
 * Size:	00000C
 */
void Game::GenBase::getLatestVersion(void)
{
	/*
	.loc_0x0:
	  lis       r3, 0x7564
	  addi      r3, r3, 0x6566
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000DC
 */
void Game::GenBase::write((Stream&))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801AA740
 * Size:	000004
 */
void Game::GenBase::doWrite((Stream&)) { }

/*
 * --INFO--
 * Address:	801AA744
 * Size:	000020
 */
void Game::GenBase::ramSaveParameters((Stream&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        0x268FB4
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801AA764
 * Size:	000020
 */
void Game::GenBase::ramLoadParameters((Stream&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        0x269084
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000050
 */
void Game::GenBase::readVersion((Stream&))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000C0
 */
void Game::GenBase::read((Stream&))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801AA784
 * Size:	000004
 */
void Game::GenBase::doRead((Stream&)) { }

/*
 * --INFO--
 * Address:	801AA788
 * Size:	000050
 */
void Game::GenObject::getLatestVersion(void)
{
	/*
	.loc_0x0:
	  lwz       r7, -0x6C60(r13)
	  li        r4, 0
	  mr        r5, r4
	  lwz       r3, 0x10(r3)
	  lwz       r0, 0x0(r7)
	  mtctr     r0
	  cmpwi     r0, 0
	  blelr-

	.loc_0x20:
	  lwz       r6, 0x8(r7)
	  lwzx      r0, r6, r5
	  cmplw     r3, r0
	  bne-      .loc_0x40
	  rlwinm    r0,r4,4,0,27
	  add       r3, r6, r0
	  lwz       r3, 0xC(r3)
	  blr

	.loc_0x40:
	  addi      r5, r5, 0x10
	  addi      r4, r4, 0x1
	  bdnz+     .loc_0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000060
 */
void Game::GenObjectFactory::createInstance(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801AA7D8
 * Size:	00000C
 */
void Game::Generator::initialiseSystem(void)
{
	/*
	.loc_0x0:
	  li        r0, 0
	  stw       r0, -0x6C60(r13)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801AA7E4
 * Size:	0000DC
 */
void Game::Generator::__ct(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        0x266B98
	  lis       r4, 0x804B
	  addi      r3, r31, 0x40
	  addi      r0, r4, 0x561C
	  stw       r0, 0x0(r31)
	  bl        0x268A64
	  addi      r3, r31, 0x4C
	  bl        0x268A5C
	  lfs       f0, -0x5108(r2)
	  lis       r3, 0x5F5F
	  lis       r4, 0x2020
	  li        r5, 0
	  stfs      f0, 0x94(r31)
	  addi      r0, r3, 0x5F5F
	  addi      r3, r31, 0x40
	  addi      r4, r4, 0x2020
	  stfs      f0, 0x98(r31)
	  stfs      f0, 0x9C(r31)
	  stw       r5, 0x18(r31)
	  stw       r0, 0x1C(r31)
	  sth       r5, 0x5C(r31)
	  bl        0x268A8C
	  lwz       r4, -0x7BC8(r13)
	  addi      r3, r31, 0x4C
	  bl        0x268A80
	  addi      r3, r31, 0x20
	  subi      r4, r2, 0x5104
	  bl        -0xE000C
	  li        r5, 0
	  li        r4, 0x1
	  stw       r5, 0x64(r31)
	  li        r0, -0x1
	  mr        r3, r31
	  stw       r5, 0x60(r31)
	  stw       r5, 0x6C(r31)
	  stw       r5, 0x7C(r31)
	  stw       r5, 0x10(r31)
	  stw       r5, 0xC(r31)
	  stw       r5, 0x8(r31)
	  stw       r5, 0x4(r31)
	  stb       r4, 0xAC(r31)
	  stw       r0, 0x84(r31)
	  stw       r5, 0x74(r31)
	  stw       r5, 0x78(r31)
	  stw       r5, 0x70(r31)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000D0
 */
void Game::Generator::__ct((int))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801AA8C0
 * Size:	000068
 */
void Game::Generator::__dt(void)
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
	  lis       r4, 0x804B
	  li        r0, 0
	  addi      r5, r4, 0x561C
	  li        r4, 0
	  stw       r5, 0x0(r30)
	  stw       r0, 0x64(r30)
	  bl        0x266C90
	  extsh.    r0, r31
	  ble-      .loc_0x4C
	  mr        r3, r30
	  bl        -0x186854

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
 * Address:	801AA928
 * Size:	000058
 */
void Game::Generator::updateUseList(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        0x48
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x44
	  lwz       r3, 0x18(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x44
	  lwz       r12, 0xC(r3)
	  mr        r4, r31
	  li        r5, 0x1
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x44:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801AA980
 * Size:	000004
 */
void Game::GenObject::updateUseList((Game::Generator*, int)) { }

/*
 * --INFO--
 * Address:	801AA984
 * Size:	000034
 */
void Game::Generator::isExpired(void)
{
	/*
	.loc_0x0:
	  lwz       r0, 0x84(r3)
	  cmpwi     r0, -0x1
	  bne-      .loc_0x14
	  li        r3, 0
	  blr

	.loc_0x14:
	  lwz       r3, -0x6C18(r13)
	  lwz       r3, 0x40(r3)
	  lwz       r3, 0x218(r3)
	  xor       r0, r3, r0
	  cntlzw    r0, r0
	  slw       r0, r3, r0
	  rlwinm    r3,r0,1,31,31
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801AA9B8
 * Size:	0000B8
 */
void Game::Generator::loadCreature((Stream&))
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
	  lwz       r3, 0x18(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x5C
	  lwz       r12, 0xC(r3)
	  mr        r4, r30
	  lwz       r12, 0x30(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x6C(r30)
	  lwz       r3, 0x6C(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0x5C
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl

	.loc_0x5C:
	  lwz       r3, 0x6C(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0x94
	  stw       r30, 0xC4(r3)
	  li        r5, 0
	  lhz       r0, 0x5C(r30)
	  rlwinm.   r0,r0,0,28,28
	  beq-      .loc_0x84
	  ori       r0, r5, 0x1
	  rlwinm    r5,r0,0,24,31

	.loc_0x84:
	  lwz       r3, 0x6C(r30)
	  mr        r4, r31
	  bl        -0x6F440
	  b         .loc_0x9C

	.loc_0x94:
	  li        r3, 0
	  b         .loc_0xA0

	.loc_0x9C:
	  li        r3, 0x1

	.loc_0xA0:
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
 * Address:	801AAA70
 * Size:	000008
 */
u32 Game::GenObject::generate((Game::Generator*)) { return 0x0; }

/*
 * --INFO--
 * Address:	801AAA78
 * Size:	00007C
 */
void Game::Generator::need_saveCreature(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r3, 0x6C(r3)
	  cmplwi    r3, 0
	  bne-      .loc_0x28
	  li        r3, 0x1
	  b         .loc_0x68

	.loc_0x28:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x64
	  lwz       r3, 0x6C(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x80(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x64
	  li        r3, 0
	  b         .loc_0x68

	.loc_0x64:
	  li        r3, 0x1

	.loc_0x68:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801AAAF4
 * Size:	0000C8
 */
void Game::Generator::saveCreature((Stream&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  mr        r30, r4
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  lwz       r3, 0x6C(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x90
	  lhz       r0, 0x5C(r29)
	  li        r31, 0
	  rlwinm.   r0,r0,0,28,28
	  beq-      .loc_0x44
	  ori       r0, r31, 0x1
	  rlwinm    r31,r0,0,24,31

	.loc_0x44:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x6C(r29)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1A8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x6C(r29)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1AC(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x6C(r29)
	  mr        r4, r30
	  mr        r5, r31
	  bl        -0x6F608
	  b         .loc_0xAC

	.loc_0x90:
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  subi      r3, r3, 0x974
	  li        r4, 0x1C0
	  subi      r5, r5, 0x960
	  crclr     6, 0x6
	  bl        -0x18055C

	.loc_0xAC:
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
 * Address:	801AABBC
 * Size:	000138
 */
void Game::Generator::generate(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r4, 0x84(r3)
	  cmpwi     r4, -0x1
	  bne-      .loc_0x28
	  li        r0, 0
	  b         .loc_0x48

	.loc_0x28:
	  lwz       r3, -0x6C18(r13)
	  lwz       r3, 0x40(r3)
	  lwz       r0, 0x218(r3)
	  cmplw     r4, r0
	  bge-      .loc_0x44
	  li        r0, 0x1
	  b         .loc_0x48

	.loc_0x44:
	  li        r0, 0

	.loc_0x48:
	  rlwinm.   r0,r0,0,24,31
	  beq-      .loc_0x60
	  li        r0, 0
	  stw       r0, 0x7C(r31)
	  stw       r0, 0x6C(r31)
	  b         .loc_0x124

	.loc_0x60:
	  lbz       r0, -0x6C5C(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x8C
	  li        r0, 0
	  stw       r0, 0x7C(r31)
	  stw       r0, 0x74(r31)
	  lwz       r3, -0x6C18(r13)
	  lwz       r3, 0x40(r3)
	  lwz       r0, 0x218(r3)
	  stw       r0, 0x78(r31)
	  b         .loc_0xA4

	.loc_0x8C:
	  lhz       r0, 0x5C(r31)
	  rlwinm.   r0,r0,0,29,29
	  bne-      .loc_0xA4
	  li        r0, 0
	  stw       r0, 0x7C(r31)
	  b         .loc_0x124

	.loc_0xA4:
	  li        r5, 0
	  stw       r5, 0x6C(r31)
	  lwz       r0, 0x18(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x124
	  lbz       r0, -0x6C5C(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0xF8
	  lhz       r0, 0x5C(r31)
	  rlwinm.   r0,r0,0,29,29
	  beq-      .loc_0xF8
	  lwz       r4, -0x6C18(r13)
	  lwz       r3, 0x78(r31)
	  lwz       r4, 0x40(r4)
	  lwz       r0, 0x70(r31)
	  lwz       r4, 0x218(r4)
	  add       r0, r3, r0
	  cmpw      r4, r0
	  blt-      .loc_0xF8
	  stw       r4, 0x78(r31)
	  stw       r5, 0x74(r31)

	.loc_0xF8:
	  lwz       r3, 0x18(r31)
	  mr        r4, r31
	  lwz       r12, 0xC(r3)
	  lwz       r12, 0x30(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x6C(r31)
	  lwz       r3, 0x6C(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x124
	  stw       r31, 0xC4(r3)

	.loc_0x124:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801AACF4
 * Size:	000024
 */
void Game::Generator::informDeath((Game::Creature*))
{
	/*
	.loc_0x0:
	  lwz       r0, 0x6C(r3)
	  cmplw     r4, r0
	  bne-      .loc_0x14
	  li        r0, 0
	  stw       r0, 0x6C(r3)

	.loc_0x14:
	  lwz       r4, 0x74(r3)
	  addi      r0, r4, 0x1
	  stw       r0, 0x74(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000004
 */
void Game::Generator::update(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000004
 */
void Game::Generator::render((Graphics&))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801AAD18
 * Size:	0003A4
 */
void Game::Generator::read((Stream&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  mflr      r0
	  stw       r0, 0x54(r1)
	  stw       r31, 0x4C(r1)
	  mr        r31, r4
	  stw       r30, 0x48(r1)
	  mr        r30, r3
	  addi      r3, r30, 0x4C
	  stw       r29, 0x44(r1)
	  stw       r28, 0x40(r1)
	  bl        0x2687B0
	  lis       r3, 0x7630
	  lwz       r4, 0x54(r30)
	  addi      r0, r3, 0x2E30
	  cmplw     r4, r0
	  blt-      .loc_0x50
	  mr        r3, r31
	  bl        0x269A08
	  sth       r3, 0x5C(r30)
	  b         .loc_0x5C

	.loc_0x50:
	  mr        r3, r31
	  bl        0x269D24
	  sth       r3, 0x5C(r30)

	.loc_0x5C:
	  lis       r3, 0x7630
	  lwz       r4, 0x54(r30)
	  addi      r0, r3, 0x2E33
	  cmplw     r4, r0
	  blt-      .loc_0x84
	  mr        r3, r31
	  bl        0x2699D8
	  extsh     r0, r3
	  stw       r0, 0x70(r30)
	  b         .loc_0xA8

	.loc_0x84:
	  addi      r0, r3, 0x2E31
	  cmplw     r4, r0
	  blt-      .loc_0xA0
	  mr        r3, r31
	  bl        0x269CE4
	  stw       r3, 0x70(r30)
	  b         .loc_0xA8

	.loc_0xA0:
	  li        r0, 0
	  stw       r0, 0x70(r30)

	.loc_0xA8:
	  lbz       r0, -0x6C5C(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0xD8
	  li        r29, 0

	.loc_0xB8:
	  mr        r3, r31
	  bl        0x2696C8
	  addi      r0, r29, 0x20
	  addi      r29, r29, 0x1
	  cmpwi     r29, 0x20
	  stbx      r3, r30, r0
	  blt+      .loc_0xB8
	  b         .loc_0x164

	.loc_0xD8:
	  lis       r3, 0x7630
	  lwz       r4, 0x54(r30)
	  addi      r0, r3, 0x2E32
	  cmplw     r4, r0
	  blt-      .loc_0x12C
	  mr        r3, r31
	  bl        0x269694
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x120
	  li        r29, 0

	.loc_0x100:
	  mr        r3, r31
	  bl        0x269680
	  addi      r0, r29, 0x20
	  addi      r29, r29, 0x1
	  cmpwi     r29, 0x20
	  stbx      r3, r30, r0
	  blt+      .loc_0x100
	  b         .loc_0x134

	.loc_0x120:
	  li        r0, 0
	  stb       r0, 0x20(r30)
	  b         .loc_0x134

	.loc_0x12C:
	  li        r0, 0
	  stb       r0, 0x20(r30)

	.loc_0x134:
	  mr        r3, r31
	  bl        0x269914
	  extsh     r0, r3
	  mr        r3, r31
	  stw       r0, 0x74(r30)
	  bl        0x269904
	  extsh     r0, r3
	  mr        r3, r31
	  stw       r0, 0x78(r30)
	  bl        0x2698F4
	  extsh     r0, r3
	  stw       r0, 0x84(r30)

	.loc_0x164:
	  lbz       r0, -0x6C5C(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0x1F8
	  mr        r3, r31
	  bl        0x2698D8
	  extsh     r3, r3
	  lis       r0, 0x4330
	  xoris     r4, r3, 0x8000
	  stw       r0, 0x20(r1)
	  lfd       f1, -0x50F8(r2)
	  mr        r3, r31
	  stw       r4, 0x24(r1)
	  lfd       f0, 0x20(r1)
	  fsubs     f0, f0, f1
	  stfs      f0, 0x94(r30)
	  bl        0x2698AC
	  extsh     r3, r3
	  lis       r0, 0x4330
	  xoris     r4, r3, 0x8000
	  stw       r0, 0x28(r1)
	  lfd       f1, -0x50F8(r2)
	  mr        r3, r31
	  stw       r4, 0x2C(r1)
	  lfd       f0, 0x28(r1)
	  fsubs     f0, f0, f1
	  stfs      f0, 0x98(r30)
	  bl        0x269880
	  extsh     r3, r3
	  lis       r0, 0x4330
	  xoris     r3, r3, 0x8000
	  stw       r0, 0x30(r1)
	  lfd       f1, -0x50F8(r2)
	  stw       r3, 0x34(r1)
	  lfd       f0, 0x30(r1)
	  fsubs     f0, f0, f1
	  stfs      f0, 0x9C(r30)
	  b         .loc_0x21C

	.loc_0x1F8:
	  mr        r3, r31
	  bl        0x269E98
	  stfs      f1, 0x94(r30)
	  mr        r3, r31
	  bl        0x269E8C
	  stfs      f1, 0x98(r30)
	  mr        r3, r31
	  bl        0x269E80
	  stfs      f1, 0x9C(r30)

	.loc_0x21C:
	  lbz       r0, -0x6C5C(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0x23C
	  lfs       f0, -0x5108(r2)
	  stfs      f0, 0xA0(r30)
	  stfs      f0, 0xA4(r30)
	  stfs      f0, 0xA8(r30)
	  b         .loc_0x260

	.loc_0x23C:
	  mr        r3, r31
	  bl        0x269E54
	  stfs      f1, 0xA0(r30)
	  mr        r3, r31
	  bl        0x269E48
	  stfs      f1, 0xA4(r30)
	  mr        r3, r31
	  bl        0x269E3C
	  stfs      f1, 0xA8(r30)

	.loc_0x260:
	  li        r0, 0
	  addi      r3, r1, 0x14
	  stw       r0, 0x18(r30)
	  bl        0x2682EC
	  mr        r4, r31
	  addi      r3, r1, 0x14
	  bl        0x268560
	  lwz       r6, -0x6C60(r13)
	  li        r3, 0
	  mr        r4, r3
	  lwz       r28, 0x1C(r1)
	  lwz       r0, 0x0(r6)
	  mtctr     r0
	  cmpwi     r0, 0
	  ble-      .loc_0x2D0

	.loc_0x29C:
	  lwz       r5, 0x8(r6)
	  lwzx      r0, r5, r4
	  cmplw     r28, r0
	  bne-      .loc_0x2C4
	  rlwinm    r0,r3,4,0,27
	  add       r3, r5, r0
	  lwz       r12, 0x4(r3)
	  mtctr     r12
	  bctrl
	  b         .loc_0x2D4

	.loc_0x2C4:
	  addi      r4, r4, 0x10
	  addi      r3, r3, 0x1
	  bdnz+     .loc_0x29C

	.loc_0x2D0:
	  li        r3, 0

	.loc_0x2D4:
	  stw       r3, 0x18(r30)
	  lwz       r29, 0x18(r30)
	  cmplwi    r29, 0
	  beq-      .loc_0x37C
	  lbz       r0, -0x6C5C(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x310
	  addi      r3, r1, 0x8
	  bl        0x268264
	  mr        r4, r31
	  addi      r3, r1, 0x8
	  bl        0x2684D8
	  lwz       r0, 0x10(r1)
	  stw       r0, 0x14(r29)
	  b         .loc_0x328

	.loc_0x310:
	  mr        r3, r29
	  lwz       r12, 0xC(r29)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x14(r29)

	.loc_0x328:
	  mr        r3, r29
	  mr        r4, r31
	  lwz       r12, 0xC(r29)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  lbz       r0, -0x6C5C(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0x368
	  mr        r3, r29
	  mr        r4, r31
	  lwz       r12, 0xC(r29)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x374

	.loc_0x368:
	  mr        r3, r29
	  mr        r4, r31
	  bl        0x26876C

	.loc_0x374:
	  stw       r28, 0x1C(r30)
	  b         .loc_0x384

	.loc_0x37C:
	  addi      r3, r1, 0x14
	  bl        0x268544

	.loc_0x384:
	  lwz       r0, 0x54(r1)
	  lwz       r31, 0x4C(r1)
	  lwz       r30, 0x48(r1)
	  lwz       r29, 0x44(r1)
	  lwz       r28, 0x40(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801AB0BC
 * Size:	00039C
 */
void Game::Generator::write((Stream&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x90(r1)
	  mflr      r0
	  lis       r5, 0x8048
	  stw       r0, 0x94(r1)
	  stw       r31, 0x8C(r1)
	  mr        r31, r4
	  stw       r30, 0x88(r1)
	  mr        r30, r3
	  mr        r3, r31
	  stw       r29, 0x84(r1)
	  subi      r29, r5, 0x998
	  stw       r28, 0x80(r1)
	  lwz       r4, 0x414(r4)
	  bl        0x269344
	  lwz       r4, -0x7BC8(r13)
	  addi      r3, r1, 0x20
	  bl        0x2681AC
	  mr        r4, r31
	  addi      r3, r1, 0x20
	  bl        0x268358
	  mr        r3, r31
	  addi      r4, r29, 0x6C
	  crclr     6, 0x6
	  bl        0x2690C4
	  lwz       r4, 0x414(r31)
	  mr        r3, r31
	  bl        0x269310
	  lhz       r0, 0x5C(r30)
	  mr        r3, r31
	  extsh     r4, r0
	  bl        0x26A5FC
	  mr        r3, r31
	  addi      r4, r29, 0x7C
	  crclr     6, 0x6
	  bl        0x269098
	  lwz       r4, 0x414(r31)
	  mr        r3, r31
	  bl        0x2692E4
	  lwz       r0, 0x70(r30)
	  mr        r3, r31
	  extsh     r4, r0
	  bl        0x26A5D0
	  mr        r3, r31
	  addi      r4, r29, 0x8C
	  crclr     6, 0x6
	  bl        0x26906C
	  lbz       r0, -0x6C5C(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x108
	  lwz       r4, 0x414(r31)
	  mr        r3, r31
	  bl        0x2692AC
	  li        r28, 0

	.loc_0xD4:
	  addi      r0, r28, 0x20
	  mr        r3, r31
	  lbzx      r4, r30, r0
	  bl        0x26A4D4
	  addi      r28, r28, 0x1
	  cmpwi     r28, 0x20
	  blt+      .loc_0xD4
	  mr        r3, r31
	  addi      r4, r29, 0x9C
	  addi      r5, r30, 0x20
	  crclr     6, 0x6
	  bl        0x269020
	  b         .loc_0x144

	.loc_0x108:
	  mr        r3, r31
	  li        r4, 0
	  bl        0x26A4A4
	  lwz       r0, 0x74(r30)
	  mr        r3, r31
	  extsh     r4, r0
	  bl        0x26A554
	  lwz       r0, 0x78(r30)
	  mr        r3, r31
	  extsh     r4, r0
	  bl        0x26A544
	  lwz       r0, 0x84(r30)
	  mr        r3, r31
	  extsh     r4, r0
	  bl        0x26A534

	.loc_0x144:
	  lbz       r0, -0x6C5C(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0x238
	  lfs       f0, 0x94(r30)
	  lis       r0, 0x4330
	  stw       r0, 0x38(r1)
	  mr        r3, r31
	  fctiwz    f1, f0
	  lfd       f2, -0x50F8(r2)
	  lfs       f0, 0xA0(r30)
	  stfd      f1, 0x30(r1)
	  lwz       r0, 0x34(r1)
	  extsh     r0, r0
	  xoris     r0, r0, 0x8000
	  stw       r0, 0x3C(r1)
	  lfd       f1, 0x38(r1)
	  fsubs     f1, f1, f2
	  fadds     f0, f1, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x40(r1)
	  lwz       r4, 0x44(r1)
	  bl        0x26A4DC
	  lfs       f0, 0x98(r30)
	  lis       r0, 0x4330
	  stw       r0, 0x50(r1)
	  mr        r3, r31
	  fctiwz    f1, f0
	  lfd       f2, -0x50F8(r2)
	  lfs       f0, 0xA4(r30)
	  stfd      f1, 0x48(r1)
	  lwz       r0, 0x4C(r1)
	  extsh     r0, r0
	  xoris     r0, r0, 0x8000
	  stw       r0, 0x54(r1)
	  lfd       f1, 0x50(r1)
	  fsubs     f1, f1, f2
	  fadds     f0, f1, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x58(r1)
	  lwz       r4, 0x5C(r1)
	  bl        0x26A490
	  lfs       f0, 0x9C(r30)
	  lis       r0, 0x4330
	  stw       r0, 0x68(r1)
	  mr        r3, r31
	  fctiwz    f1, f0
	  lfd       f2, -0x50F8(r2)
	  lfs       f0, 0xA8(r30)
	  stfd      f1, 0x60(r1)
	  lwz       r0, 0x64(r1)
	  extsh     r0, r0
	  xoris     r0, r0, 0x8000
	  stw       r0, 0x6C(r1)
	  lfd       f1, 0x68(r1)
	  fsubs     f1, f1, f2
	  fadds     f0, f1, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x70(r1)
	  lwz       r4, 0x74(r1)
	  bl        0x26A444
	  b         .loc_0x2B8

	.loc_0x238:
	  lwz       r4, 0x414(r31)
	  mr        r3, r31
	  bl        0x269138
	  lfs       f1, 0x94(r30)
	  mr        r3, r31
	  bl        0x26A540
	  lfs       f1, 0x98(r30)
	  mr        r3, r31
	  bl        0x26A534
	  lfs       f1, 0x9C(r30)
	  mr        r3, r31
	  bl        0x26A528
	  mr        r3, r31
	  addi      r4, r29, 0xA8
	  crclr     6, 0x6
	  bl        0x268EAC
	  lwz       r4, 0x414(r31)
	  mr        r3, r31
	  bl        0x2690F8
	  lfs       f1, 0xA0(r30)
	  mr        r3, r31
	  bl        0x26A500
	  lfs       f1, 0xA4(r30)
	  mr        r3, r31
	  bl        0x26A4F4
	  lfs       f1, 0xA8(r30)
	  mr        r3, r31
	  bl        0x26A4E8
	  mr        r3, r31
	  addi      r4, r29, 0xB4
	  crclr     6, 0x6
	  bl        0x268E6C

	.loc_0x2B8:
	  lwz       r29, 0x18(r30)
	  cmplwi    r29, 0
	  beq-      .loc_0x370
	  lwz       r4, 0x10(r29)
	  addi      r3, r1, 0x14
	  bl        0x267F20
	  lwz       r4, 0x414(r31)
	  mr        r3, r31
	  bl        0x2690A0
	  mr        r4, r31
	  addi      r3, r1, 0x14
	  bl        0x2680C0
	  lbz       r0, -0x6C5C(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x320
	  mr        r3, r29
	  lwz       r12, 0xC(r29)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  addi      r3, r1, 0x8
	  bl        0x267EDC
	  mr        r4, r31
	  addi      r3, r1, 0x8
	  bl        0x268088

	.loc_0x320:
	  mr        r3, r29
	  mr        r4, r31
	  lwz       r12, 0xC(r29)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lbz       r0, -0x6C5C(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0x360
	  mr        r3, r29
	  mr        r4, r31
	  lwz       r12, 0xC(r29)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x37C

	.loc_0x360:
	  mr        r3, r29
	  mr        r4, r31
	  bl        0x2682E0
	  b         .loc_0x37C

	.loc_0x370:
	  mr        r3, r31
	  li        r4, 0
	  bl        0x26A38C

	.loc_0x37C:
	  lwz       r0, 0x94(r1)
	  lwz       r31, 0x8C(r1)
	  lwz       r30, 0x88(r1)
	  lwz       r29, 0x84(r1)
	  lwz       r28, 0x80(r1)
	  mtlr      r0
	  addi      r1, r1, 0x90
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801AB458
 * Size:	000120
 */
void Game::GeneratorMgr::__ct(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r4, 0x804F
	  li        r5, 0
	  stw       r0, 0x14(r1)
	  subi      r0, r4, 0x4AD8
	  subi      r4, r2, 0x50F0
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  lis       r3, 0x804B
	  stw       r0, 0x0(r30)
	  addi      r0, r3, 0x55FC
	  addi      r3, r30, 0x34
	  stw       r5, 0x10(r30)
	  stw       r5, 0xC(r30)
	  stw       r5, 0x8(r30)
	  stw       r5, 0x4(r30)
	  stw       r4, 0x14(r30)
	  stw       r0, 0x0(r30)
	  bl        0x267DC8
	  addi      r3, r30, 0x40
	  bl        0x267DC0
	  addi      r3, r30, 0x50
	  bl        0x267DB8
	  li        r0, 0
	  lis       r4, 0x7630
	  stw       r0, 0x20(r30)
	  addi      r3, r30, 0x34
	  lfs       f0, -0x5108(r2)
	  addi      r4, r4, 0x2E31
	  stw       r0, 0x1C(r30)
	  stw       r0, 0x18(r30)
	  stb       r0, 0x6D(r30)
	  stfs      f0, 0x5C(r30)
	  stfs      f0, 0x60(r30)
	  stfs      f0, 0x64(r30)
	  stfs      f0, 0x68(r30)
	  stw       r0, 0x4C(r30)
	  stw       r0, 0x30(r30)
	  bl        0x267DE0
	  lis       r4, 0x7630
	  addi      r3, r30, 0x40
	  addi      r4, r4, 0x2E30
	  bl        0x267DD0
	  lwz       r0, -0x6C60(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0xF0
	  li        r3, 0x10
	  bl        -0x187678
	  mr.       r31, r3
	  beq-      .loc_0xEC
	  li        r3, 0xC0
	  bl        -0x187580
	  stw       r3, 0x8(r31)
	  li        r3, 0xC
	  li        r0, 0
	  stw       r3, 0x4(r31)
	  stw       r0, 0x0(r31)

	.loc_0xEC:
	  stw       r31, -0x6C60(r13)

	.loc_0xF0:
	  li        r0, 0
	  lis       r3, 0x8048
	  stb       r0, 0x6C(r30)
	  subi      r0, r3, 0x8D8
	  mr        r3, r30
	  stw       r0, 0x14(r30)
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
 * Address:	801AB578
 * Size:	00003C
 */
void Game::GeneratorMgr::addMgr((Game::GeneratorMgr*))
{
	/*
	.loc_0x0:
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x18
	  stw       r4, 0x1C(r3)
	  stw       r3, 0x20(r4)
	  blr

	.loc_0x18:
	  mr        r5, r0
	  b         .loc_0x24

	.loc_0x20:
	  mr        r5, r0

	.loc_0x24:
	  lwz       r0, 0x18(r5)
	  cmplwi    r0, 0
	  bne+      .loc_0x20
	  stw       r4, 0x18(r5)
	  stw       r3, 0x20(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000028
 */
void Game::GeneratorMgr::isRootMgr(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801AB5B4
 * Size:	000148
 */
void Game::GeneratorMgr::generate(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  lwz       r31, 0x30(r3)
	  b         .loc_0x12C

	.loc_0x18:
	  lwz       r4, 0x84(r31)
	  cmpwi     r4, -0x1
	  bne-      .loc_0x2C
	  li        r0, 0
	  b         .loc_0x4C

	.loc_0x2C:
	  lwz       r3, -0x6C18(r13)
	  lwz       r3, 0x40(r3)
	  lwz       r0, 0x218(r3)
	  cmplw     r4, r0
	  bge-      .loc_0x48
	  li        r0, 0x1
	  b         .loc_0x4C

	.loc_0x48:
	  li        r0, 0

	.loc_0x4C:
	  rlwinm.   r0,r0,0,24,31
	  beq-      .loc_0x64
	  li        r0, 0
	  stw       r0, 0x7C(r31)
	  stw       r0, 0x6C(r31)
	  b         .loc_0x128

	.loc_0x64:
	  lbz       r0, -0x6C5C(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x90
	  li        r0, 0
	  stw       r0, 0x7C(r31)
	  stw       r0, 0x74(r31)
	  lwz       r3, -0x6C18(r13)
	  lwz       r3, 0x40(r3)
	  lwz       r0, 0x218(r3)
	  stw       r0, 0x78(r31)
	  b         .loc_0xA8

	.loc_0x90:
	  lhz       r0, 0x5C(r31)
	  rlwinm.   r0,r0,0,29,29
	  bne-      .loc_0xA8
	  li        r0, 0
	  stw       r0, 0x7C(r31)
	  b         .loc_0x128

	.loc_0xA8:
	  li        r5, 0
	  stw       r5, 0x6C(r31)
	  lwz       r0, 0x18(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x128
	  lbz       r0, -0x6C5C(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0xFC
	  lhz       r0, 0x5C(r31)
	  rlwinm.   r0,r0,0,29,29
	  beq-      .loc_0xFC
	  lwz       r4, -0x6C18(r13)
	  lwz       r3, 0x78(r31)
	  lwz       r4, 0x40(r4)
	  lwz       r0, 0x70(r31)
	  lwz       r4, 0x218(r4)
	  add       r0, r3, r0
	  cmpw      r4, r0
	  blt-      .loc_0xFC
	  stw       r4, 0x78(r31)
	  stw       r5, 0x74(r31)

	.loc_0xFC:
	  lwz       r3, 0x18(r31)
	  mr        r4, r31
	  lwz       r12, 0xC(r3)
	  lwz       r12, 0x30(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x6C(r31)
	  lwz       r3, 0x6C(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x128
	  stw       r31, 0xC4(r3)

	.loc_0x128:
	  lwz       r31, 0x64(r31)

	.loc_0x12C:
	  cmplwi    r31, 0
	  bne+      .loc_0x18
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801AB6FC
 * Size:	00001C
 */
void Game::GeneratorMgr::setDayLimit((int))
{
	/*
	.loc_0x0:
	  lwz       r3, 0x30(r3)
	  b         .loc_0x10

	.loc_0x8:
	  stw       r4, 0x84(r3)
	  lwz       r3, 0x64(r3)

	.loc_0x10:
	  cmplwi    r3, 0
	  bne+      .loc_0x8
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801AB718
 * Size:	000098
 */
void Game::GeneratorMgr::updateUseList(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  lwz       r31, 0x30(r3)
	  b         .loc_0x7C

	.loc_0x18:
	  lwz       r4, 0x84(r31)
	  cmpwi     r4, -0x1
	  bne-      .loc_0x2C
	  li        r0, 0
	  b         .loc_0x4C

	.loc_0x2C:
	  lwz       r3, -0x6C18(r13)
	  lwz       r3, 0x40(r3)
	  lwz       r0, 0x218(r3)
	  cmplw     r4, r0
	  bge-      .loc_0x48
	  li        r0, 0x1
	  b         .loc_0x4C

	.loc_0x48:
	  li        r0, 0

	.loc_0x4C:
	  rlwinm.   r0,r0,0,24,31
	  bne-      .loc_0x78
	  lwz       r3, 0x18(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x78
	  lwz       r12, 0xC(r3)
	  mr        r4, r31
	  li        r5, 0x1
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x78:
	  lwz       r31, 0x64(r31)

	.loc_0x7C:
	  cmplwi    r31, 0
	  bne+      .loc_0x18
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000018
 */
void Game::GeneratorMgr::update(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00055C
 */
void Game::GeneratorMgr::render((Graphics&))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801AB7B0
 * Size:	000008
 */
void Game::GeneratorMgr::getNext(void)
{
	/*
	.loc_0x0:
	  lwz       r3, 0x18(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801AB7B8
 * Size:	000008
 */
void Game::GeneratorMgr::getChild(void)
{
	/*
	.loc_0x0:
	  lwz       r3, 0x1C(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801AB7C0
 * Size:	00043C
 */
void updateCursorPos__Q24Game12GeneratorMgrFR10Vector3<float>(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stmw      r27, 0xC(r1)
	  mr        r31, r4
	  mr        r27, r3
	  lfs       f0, 0x0(r4)
	  stfs      f0, 0x24(r3)
	  lfs       f0, 0x4(r4)
	  stfs      f0, 0x28(r3)
	  lfs       f0, 0x8(r4)
	  stfs      f0, 0x2C(r3)
	  lwz       r29, 0x1C(r3)
	  cmplwi    r29, 0
	  beq-      .loc_0x22C
	  lfs       f0, 0x0(r31)
	  stfs      f0, 0x24(r29)
	  lfs       f0, 0x4(r31)
	  stfs      f0, 0x28(r29)
	  lfs       f0, 0x8(r31)
	  stfs      f0, 0x2C(r29)
	  lwz       r28, 0x1C(r29)
	  cmplwi    r28, 0
	  beq-      .loc_0x140
	  lfs       f0, 0x0(r31)
	  stfs      f0, 0x24(r28)
	  lfs       f0, 0x4(r31)
	  stfs      f0, 0x28(r28)
	  lfs       f0, 0x8(r31)
	  stfs      f0, 0x2C(r28)
	  lwz       r0, 0x1C(r28)
	  cmplwi    r0, 0
	  beq-      .loc_0xDC
	  mr        r3, r28
	  bl        -0x90
	  mr        r30, r3
	  mr        r4, r31
	  addi      r3, r30, 0x24
	  bl        .loc_0x43C
	  mr        r3, r30
	  bl        -0xA8
	  cmplwi    r3, 0
	  beq-      .loc_0xBC
	  mr        r3, r30
	  bl        -0xB8
	  mr        r4, r31
	  bl        .loc_0x0

	.loc_0xBC:
	  mr        r3, r30
	  bl        -0xD0
	  cmplwi    r3, 0
	  beq-      .loc_0xDC
	  mr        r3, r30
	  bl        -0xE0
	  mr        r4, r31
	  bl        .loc_0x0

	.loc_0xDC:
	  lwz       r0, 0x18(r28)
	  cmplwi    r0, 0
	  beq-      .loc_0x140
	  mr        r3, r28
	  bl        -0xFC
	  mr        r30, r3
	  mr        r4, r31
	  addi      r3, r30, 0x24
	  bl        .loc_0x43C
	  mr        r3, r30
	  bl        -0x10C
	  cmplwi    r3, 0
	  beq-      .loc_0x120
	  mr        r3, r30
	  bl        -0x11C
	  mr        r4, r31
	  bl        .loc_0x0

	.loc_0x120:
	  mr        r3, r30
	  bl        -0x134
	  cmplwi    r3, 0
	  beq-      .loc_0x140
	  mr        r3, r30
	  bl        -0x144
	  mr        r4, r31
	  bl        .loc_0x0

	.loc_0x140:
	  lwz       r28, 0x18(r29)
	  cmplwi    r28, 0
	  beq-      .loc_0x22C
	  lfs       f0, 0x0(r31)
	  stfs      f0, 0x24(r28)
	  lfs       f0, 0x4(r31)
	  stfs      f0, 0x28(r28)
	  lfs       f0, 0x8(r31)
	  stfs      f0, 0x2C(r28)
	  lwz       r0, 0x1C(r28)
	  cmplwi    r0, 0
	  beq-      .loc_0x1C8
	  mr        r3, r28
	  bl        -0x17C
	  mr        r30, r3
	  mr        r4, r31
	  addi      r3, r30, 0x24
	  bl        .loc_0x43C
	  mr        r3, r30
	  bl        -0x194
	  cmplwi    r3, 0
	  beq-      .loc_0x1A8
	  mr        r3, r30
	  bl        -0x1A4
	  mr        r4, r31
	  bl        .loc_0x0

	.loc_0x1A8:
	  mr        r3, r30
	  bl        -0x1BC
	  cmplwi    r3, 0
	  beq-      .loc_0x1C8
	  mr        r3, r30
	  bl        -0x1CC
	  mr        r4, r31
	  bl        .loc_0x0

	.loc_0x1C8:
	  lwz       r0, 0x18(r28)
	  cmplwi    r0, 0
	  beq-      .loc_0x22C
	  mr        r3, r28
	  bl        -0x1E8
	  mr        r30, r3
	  mr        r4, r31
	  addi      r3, r30, 0x24
	  bl        .loc_0x43C
	  mr        r3, r30
	  bl        -0x1F8
	  cmplwi    r3, 0
	  beq-      .loc_0x20C
	  mr        r3, r30
	  bl        -0x208
	  mr        r4, r31
	  bl        .loc_0x0

	.loc_0x20C:
	  mr        r3, r30
	  bl        -0x220
	  cmplwi    r3, 0
	  beq-      .loc_0x22C
	  mr        r3, r30
	  bl        -0x230
	  mr        r4, r31
	  bl        .loc_0x0

	.loc_0x22C:
	  lwz       r28, 0x18(r27)
	  cmplwi    r28, 0
	  beq-      .loc_0x428
	  lfs       f0, 0x0(r31)
	  stfs      f0, 0x24(r28)
	  lfs       f0, 0x4(r31)
	  stfs      f0, 0x28(r28)
	  lfs       f0, 0x8(r31)
	  stfs      f0, 0x2C(r28)
	  lwz       r29, 0x1C(r28)
	  cmplwi    r29, 0
	  beq-      .loc_0x33C
	  lfs       f0, 0x0(r31)
	  stfs      f0, 0x24(r29)
	  lfs       f0, 0x4(r31)
	  stfs      f0, 0x28(r29)
	  lfs       f0, 0x8(r31)
	  stfs      f0, 0x2C(r29)
	  lwz       r0, 0x1C(r29)
	  cmplwi    r0, 0
	  beq-      .loc_0x2D8
	  mr        r3, r29
	  bl        -0x28C
	  mr        r30, r3
	  mr        r4, r31
	  addi      r3, r30, 0x24
	  bl        .loc_0x43C
	  mr        r3, r30
	  bl        -0x2A4
	  cmplwi    r3, 0
	  beq-      .loc_0x2B8
	  mr        r3, r30
	  bl        -0x2B4
	  mr        r4, r31
	  bl        .loc_0x0

	.loc_0x2B8:
	  mr        r3, r30
	  bl        -0x2CC
	  cmplwi    r3, 0
	  beq-      .loc_0x2D8
	  mr        r3, r30
	  bl        -0x2DC
	  mr        r4, r31
	  bl        .loc_0x0

	.loc_0x2D8:
	  lwz       r0, 0x18(r29)
	  cmplwi    r0, 0
	  beq-      .loc_0x33C
	  mr        r3, r29
	  bl        -0x2F8
	  mr        r30, r3
	  mr        r4, r31
	  addi      r3, r30, 0x24
	  bl        .loc_0x43C
	  mr        r3, r30
	  bl        -0x308
	  cmplwi    r3, 0
	  beq-      .loc_0x31C
	  mr        r3, r30
	  bl        -0x318
	  mr        r4, r31
	  bl        .loc_0x0

	.loc_0x31C:
	  mr        r3, r30
	  bl        -0x330
	  cmplwi    r3, 0
	  beq-      .loc_0x33C
	  mr        r3, r30
	  bl        -0x340
	  mr        r4, r31
	  bl        .loc_0x0

	.loc_0x33C:
	  lwz       r28, 0x18(r28)
	  cmplwi    r28, 0
	  beq-      .loc_0x428
	  lfs       f0, 0x0(r31)
	  stfs      f0, 0x24(r28)
	  lfs       f0, 0x4(r31)
	  stfs      f0, 0x28(r28)
	  lfs       f0, 0x8(r31)
	  stfs      f0, 0x2C(r28)
	  lwz       r0, 0x1C(r28)
	  cmplwi    r0, 0
	  beq-      .loc_0x3C4
	  mr        r3, r28
	  bl        -0x378
	  mr        r30, r3
	  mr        r4, r31
	  addi      r3, r30, 0x24
	  bl        .loc_0x43C
	  mr        r3, r30
	  bl        -0x390
	  cmplwi    r3, 0
	  beq-      .loc_0x3A4
	  mr        r3, r30
	  bl        -0x3A0
	  mr        r4, r31
	  bl        .loc_0x0

	.loc_0x3A4:
	  mr        r3, r30
	  bl        -0x3B8
	  cmplwi    r3, 0
	  beq-      .loc_0x3C4
	  mr        r3, r30
	  bl        -0x3C8
	  mr        r4, r31
	  bl        .loc_0x0

	.loc_0x3C4:
	  lwz       r0, 0x18(r28)
	  cmplwi    r0, 0
	  beq-      .loc_0x428
	  mr        r3, r28
	  bl        -0x3E4
	  mr        r30, r3
	  mr        r4, r31
	  addi      r3, r30, 0x24
	  bl        .loc_0x43C
	  mr        r3, r30
	  bl        -0x3F4
	  cmplwi    r3, 0
	  beq-      .loc_0x408
	  mr        r3, r30
	  bl        -0x404
	  mr        r4, r31
	  bl        .loc_0x0

	.loc_0x408:
	  mr        r3, r30
	  bl        -0x41C
	  cmplwi    r3, 0
	  beq-      .loc_0x428
	  mr        r3, r30
	  bl        -0x42C
	  mr        r4, r31
	  bl        .loc_0x0

	.loc_0x428:
	  lmw       r27, 0xC(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr

	.loc_0x43C:
	*/
}

/*
 * --INFO--
 * Address:	801ABBFC
 * Size:	00001C
 */
void Vector3<float>::operator=(const Vector3<float>&)
{
	/*
	.loc_0x0:
	  lfs       f0, 0x0(r4)
	  lfs       f1, 0x4(r4)
	  stfs      f0, 0x0(r3)
	  lfs       f0, 0x8(r4)
	  stfs      f1, 0x4(r3)
	  stfs      f0, 0x8(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801ABC18
 * Size:	0002F0
 */
void Game::GeneratorMgr::read((Stream&, bool))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  mr        r30, r4
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  stw       r28, 0x10(r1)
	  lwz       r3, 0x30(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x50
	  beq-      .loc_0x48
	  lwz       r12, 0x0(r3)
	  li        r4, 0x1
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl

	.loc_0x48:
	  li        r0, 0
	  stw       r0, 0x4C(r29)

	.loc_0x50:
	  mr        r4, r30
	  addi      r3, r29, 0x40
	  bl        0x267880
	  lis       r4, 0x7630
	  addi      r3, r29, 0x40
	  addi      r4, r4, 0x2E30
	  bl        0x2677B4
	  mr        r3, r30
	  bl        0x269124
	  stfs      f1, 0x5C(r29)
	  mr        r3, r30
	  bl        0x269118
	  stfs      f1, 0x60(r29)
	  mr        r3, r30
	  bl        0x26910C
	  lis       r4, 0x7630
	  stfs      f1, 0x64(r29)
	  addi      r3, r29, 0x40
	  addi      r4, r4, 0x2E31
	  bl        0x267780
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xB4
	  mr        r3, r30
	  bl        0x2690E8
	  stfs      f1, 0x68(r29)

	.loc_0xB4:
	  mr        r3, r30
	  bl        0x268DC0
	  stw       r3, 0x4C(r29)
	  li        r0, 0
	  li        r31, 0
	  stw       r0, 0x30(r29)
	  b         .loc_0x2C4

	.loc_0xD0:
	  lwz       r0, 0x30(r29)
	  cmplwi    r0, 0
	  bne-      .loc_0x1C4
	  li        r3, 0xB4
	  bl        -0x187E54
	  mr.       r28, r3
	  beq-      .loc_0x19C
	  bl        0x26568C
	  lis       r4, 0x804B
	  addi      r3, r28, 0x40
	  addi      r0, r4, 0x561C
	  stw       r0, 0x0(r28)
	  bl        0x267558
	  addi      r3, r28, 0x4C
	  bl        0x267550
	  lfs       f0, -0x5108(r2)
	  lis       r3, 0x5F5F
	  lis       r4, 0x2020
	  li        r5, 0
	  stfs      f0, 0x94(r28)
	  addi      r0, r3, 0x5F5F
	  addi      r3, r28, 0x40
	  addi      r4, r4, 0x2020
	  stfs      f0, 0x98(r28)
	  stfs      f0, 0x9C(r28)
	  stw       r5, 0x18(r28)
	  stw       r0, 0x1C(r28)
	  sth       r5, 0x5C(r28)
	  bl        0x267580
	  lwz       r4, -0x7BC8(r13)
	  addi      r3, r28, 0x4C
	  bl        0x267574
	  addi      r3, r28, 0x20
	  subi      r4, r2, 0x5104
	  bl        -0xE1518
	  li        r4, 0
	  li        r3, 0x1
	  stw       r4, 0x64(r28)
	  li        r0, -0x1
	  stw       r4, 0x60(r28)
	  stw       r4, 0x6C(r28)
	  stw       r4, 0x7C(r28)
	  stw       r4, 0x10(r28)
	  stw       r4, 0xC(r28)
	  stw       r4, 0x8(r28)
	  stw       r4, 0x4(r28)
	  stb       r3, 0xAC(r28)
	  stw       r0, 0x84(r28)
	  stw       r4, 0x74(r28)
	  stw       r4, 0x78(r28)
	  stw       r4, 0x70(r28)

	.loc_0x19C:
	  stw       r28, 0x30(r29)
	  mr        r4, r30
	  lwz       r3, 0x30(r29)
	  bl        -0x10A8
	  lwz       r3, 0x30(r29)
	  stw       r29, 0x68(r3)
	  lwz       r3, -0x6B40(r13)
	  lwz       r4, 0x30(r29)
	  bl        0x45CCC
	  b         .loc_0x2C0

	.loc_0x1C4:
	  li        r3, 0xB4
	  bl        -0x187F3C
	  mr.       r28, r3
	  beq-      .loc_0x284
	  bl        0x2655A4
	  lis       r4, 0x804B
	  addi      r3, r28, 0x40
	  addi      r0, r4, 0x561C
	  stw       r0, 0x0(r28)
	  bl        0x267470
	  addi      r3, r28, 0x4C
	  bl        0x267468
	  lfs       f0, -0x5108(r2)
	  lis       r3, 0x5F5F
	  lis       r4, 0x2020
	  li        r5, 0
	  stfs      f0, 0x94(r28)
	  addi      r0, r3, 0x5F5F
	  addi      r3, r28, 0x40
	  addi      r4, r4, 0x2020
	  stfs      f0, 0x98(r28)
	  stfs      f0, 0x9C(r28)
	  stw       r5, 0x18(r28)
	  stw       r0, 0x1C(r28)
	  sth       r5, 0x5C(r28)
	  bl        0x267498
	  lwz       r4, -0x7BC8(r13)
	  addi      r3, r28, 0x4C
	  bl        0x26748C
	  addi      r3, r28, 0x20
	  subi      r4, r2, 0x5104
	  bl        -0xE1600
	  li        r4, 0
	  li        r3, 0x1
	  stw       r4, 0x64(r28)
	  li        r0, -0x1
	  stw       r4, 0x60(r28)
	  stw       r4, 0x6C(r28)
	  stw       r4, 0x7C(r28)
	  stw       r4, 0x10(r28)
	  stw       r4, 0xC(r28)
	  stw       r4, 0x8(r28)
	  stw       r4, 0x4(r28)
	  stb       r3, 0xAC(r28)
	  stw       r0, 0x84(r28)
	  stw       r4, 0x74(r28)
	  stw       r4, 0x78(r28)
	  stw       r4, 0x70(r28)

	.loc_0x284:
	  stw       r29, 0x68(r28)
	  mr        r3, r28
	  mr        r4, r30
	  bl        -0x1190
	  lwz       r3, 0x30(r29)
	  b         .loc_0x2A0

	.loc_0x29C:
	  mr        r3, r0

	.loc_0x2A0:
	  lwz       r0, 0x64(r3)
	  cmplwi    r0, 0
	  bne+      .loc_0x29C
	  stw       r28, 0x64(r3)
	  mr        r4, r28
	  stw       r3, 0x60(r28)
	  lwz       r3, -0x6B40(r13)
	  bl        0x45BCC

	.loc_0x2C0:
	  addi      r31, r31, 0x1

	.loc_0x2C4:
	  lwz       r0, 0x4C(r29)
	  cmpw      r31, r0
	  blt+      .loc_0xD0
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
 * Address:	........
 * Size:	000118
 */
void Game::GeneratorMgr::write((Stream&))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801ABF08
 * Size:	0000D8
 */
void Game::Generator::doAnimation(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  mflr      r0
	  stw       r0, 0x54(r1)
	  stw       r31, 0x4C(r1)
	  mr        r31, r3
	  lwz       r3, 0x18(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0xA8
	  lwz       r0, 0x20(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0xA8
	  lfs       f1, 0x9C(r31)
	  addi      r4, r1, 0x14
	  lfs       f0, 0xA8(r31)
	  addi      r5, r1, 0x8
	  lfs       f3, 0x98(r31)
	  fadds     f4, f1, f0
	  lfs       f2, 0xA4(r31)
	  lfs       f1, 0x94(r31)
	  lfs       f0, 0xA0(r31)
	  fadds     f2, f3, f2
	  fadds     f0, f1, f0
	  stfs      f4, 0x10(r1)
	  stfs      f2, 0xC(r1)
	  stfs      f0, 0x8(r1)
	  lwz       r12, 0xC(r3)
	  lwz       r12, 0x38(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x18(r31)
	  addi      r3, r1, 0x14
	  lwz       r4, 0x20(r4)
	  lwz       r4, 0x8(r4)
	  addi      r4, r4, 0x24
	  bl        -0xC1CC4
	  lwz       r3, 0x18(r31)
	  lwz       r3, 0x20(r3)
	  lwz       r3, 0x8(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl

	.loc_0xA8:
	  lwz       r3, 0x64(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0xC4
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl

	.loc_0xC4:
	  lwz       r0, 0x54(r1)
	  lwz       r31, 0x4C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801ABFE0
 * Size:	000070
 */
void Game::Generator::doEntry(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r3, 0x18(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x40
	  lwz       r3, 0x20(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x40
	  lwz       r3, 0x8(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl

	.loc_0x40:
	  lwz       r3, 0x64(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x5C
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl

	.loc_0x5C:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801AC050
 * Size:	000070
 */
void Game::Generator::doSetView((int))
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
	  lwz       r3, 0x18(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x38
	  lwz       r3, 0x20(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x38
	  bl        0x29303C

	.loc_0x38:
	  lwz       r3, 0x64(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0x58
	  lwz       r12, 0x0(r3)
	  mr        r4, r31
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl

	.loc_0x58:
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
 * Address:	801AC0C0
 * Size:	000060
 */
void Game::Generator::doViewCalc(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r3, 0x18(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x30
	  lwz       r3, 0x20(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x30
	  bl        0x292F6C

	.loc_0x30:
	  lwz       r3, 0x64(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x4C
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

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
 * Address:	801AC120
 * Size:	00007C
 */
void Game::GeneratorMgr::doAnimation(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r3, 0x30(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x30
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl

	.loc_0x30:
	  lwz       r3, 0x1C(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x4C
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl

	.loc_0x4C:
	  lwz       r3, 0x18(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x68
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl

	.loc_0x68:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801AC19C
 * Size:	00007C
 */
void Game::GeneratorMgr::doEntry(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r3, 0x30(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x30
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl

	.loc_0x30:
	  lwz       r3, 0x1C(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x4C
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl

	.loc_0x4C:
	  lwz       r3, 0x18(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x68
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl

	.loc_0x68:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801AC218
 * Size:	000090
 */
void Game::GeneratorMgr::doSetView((int))
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
	  lwz       r3, 0x30(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x38
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl

	.loc_0x38:
	  lwz       r3, 0x1C(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0x58
	  lwz       r12, 0x0(r3)
	  mr        r4, r31
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl

	.loc_0x58:
	  lwz       r3, 0x18(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0x78
	  lwz       r12, 0x0(r3)
	  mr        r4, r31
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl

	.loc_0x78:
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
 * Address:	801AC2A8
 * Size:	00007C
 */
void Game::GeneratorMgr::doViewCalc(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r3, 0x30(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x30
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x30:
	  lwz       r3, 0x1C(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x4C
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x4C:
	  lwz       r3, 0x18(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x68
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x68:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801AC324
 * Size:	000060
 */
void Game::GeneratorMgr::__dt(void)
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
	  beq-      .loc_0x44
	  lis       r5, 0x804B
	  li        r4, 0
	  addi      r0, r5, 0x55FC
	  stw       r0, 0x0(r30)
	  bl        0x265234
	  extsh.    r0, r31
	  ble-      .loc_0x44
	  mr        r3, r30
	  bl        -0x1882B0

	.loc_0x44:
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
 * Address:	801AC384
 * Size:	000004
 */
void Game::GenObject::render((Graphics&, Game::Generator*)) { }

/*
 * --INFO--
 * Address:	801AC388
 * Size:	000008
 */
u32 Game::GenBase::getShape(void) { return 0x0; }

/*
 * --INFO--
 * Address:	801AC390
 * Size:	000004
 */
void Game::GenBase::update((Game::Generator*)) { }

/*
 * --INFO--
 * Address:	801AC394
 * Size:	000004
 */
void Game::GenBase::render((Graphics&, Game::Generator*)) { }

/*
 * --INFO--
 * Address:	801AC398
 * Size:	000028
 */
void __sinit_gameGenerator_cpp(void)
{
	/*
	.loc_0x0:
	  lis       r4, 0x8051
	  li        r0, -0x1
	  lfs       f0, 0x48B0(r4)
	  lis       r3, 0x804B
	  stw       r0, -0x6C68(r13)
	  stfsu     f0, 0x55F0(r3)
	  stfs      f0, -0x6C64(r13)
	  stfs      f0, 0x4(r3)
	  stfs      f0, 0x8(r3)
	  blr
	*/
}
