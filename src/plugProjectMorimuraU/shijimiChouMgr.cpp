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
 * Address:	803884C0
 * Size:	00005C
 */
void Game::ShijimiChou::Mgr::__ct((int, unsigned char))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x259840
	  lis       r4, 0x804E
	  lis       r3, 0x8049
	  addi      r5, r4, 0x4BF0
	  li        r4, 0
	  stw       r5, 0x0(r31)
	  addi      r5, r5, 0x38
	  addi      r0, r3, 0x3C18
	  mr        r3, r31
	  stw       r5, 0x4(r31)
	  stw       r4, 0x44(r31)
	  stw       r4, 0x48(r31)
	  stw       r0, 0x18(r31)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8038851C
 * Size:	000150
 */
void Game::ShijimiChou::Mgr::doAlloc(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  li        r3, 0x974
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  stw       r28, 0x10(r1)
	  bl        -0x36469C
	  mr.       r4, r3
	  beq-      .loc_0x38
	  bl        0x130
	  mr        r4, r3

	.loc_0x38:
	  mr        r3, r31
	  bl        -0x258CBC
	  li        r3, 0x18
	  bl        -0x3646BC
	  mr.       r0, r3
	  beq-      .loc_0x58
	  bl        -0x1F1DF4
	  mr        r0, r3

	.loc_0x58:
	  stw       r0, 0x44(r31)
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x8C(r12)
	  mtctr     r12
	  bctrl
	  lis       r4, 0x6666
	  addi      r0, r4, 0x6667
	  mulhw     r0, r0, r3
	  lwz       r3, 0x44(r31)
	  srawi     r0, r0, 0x1
	  rlwinm    r4,r0,1,31,31
	  add       r4, r0, r4
	  bl        -0x1F1DC8
	  li        r3, 0x8
	  bl        -0x36470C
	  mr.       r30, r3
	  beq-      .loc_0x12C
	  lwz       r3, 0x20(r31)
	  lwz       r4, 0x2C(r3)
	  b         .loc_0xC0

	.loc_0xAC:
	  lha       r0, 0x20(r4)
	  cmpwi     r0, 0x2
	  bne-      .loc_0xBC
	  b         .loc_0xCC

	.loc_0xBC:
	  lwz       r4, 0x4(r4)

	.loc_0xC0:
	  cmplwi    r4, 0
	  bne+      .loc_0xAC
	  li        r4, 0

	.loc_0xCC:
	  mr        r3, r31
	  lwz       r29, 0x18(r4)
	  lwz       r12, 0x0(r31)
	  li        r4, 0
	  lwz       r12, 0xA4(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x174(r3)
	  li        r3, 0x10
	  lwz       r28, 0x8(r4)
	  bl        -0x36476C
	  mr.       r5, r3
	  beq-      .loc_0x110
	  mr        r4, r28
	  mr        r5, r29
	  bl        -0x370DDC
	  mr        r5, r3

	.loc_0x110:
	  lis       r4, 0x804E
	  lis       r3, 0x804E
	  addi      r0, r4, 0x35D4
	  stw       r0, 0x0(r30)
	  addi      r0, r3, 0x35C4
	  stw       r0, 0x0(r30)
	  stw       r5, 0x4(r30)

	.loc_0x12C:
	  stw       r30, 0x4C(r31)
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
 * Address:	8038866C
 * Size:	000010
 */
void Game::ShijimiChou::Mgr::getEnemy((int))
{
	/*
	.loc_0x0:
	  mulli     r0, r4, 0x34C
	  lwz       r3, 0x50(r3)
	  add       r3, r3, r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8038867C
 * Size:	0000B0
 */
void Game::ShijimiChou::Parms::__ct(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x27EEF4
	  lis       r4, 0x804E
	  addi      r3, r31, 0x7F8
	  addi      r0, r4, 0x4CD0
	  li        r4, 0x1
	  stw       r0, 0xD8(r31)
	  bl        .loc_0xB0
	  li        r5, 0
	  li        r4, 0x19
	  stb       r5, 0x948(r31)
	  li        r0, 0x1
	  lfs       f1, 0xB18(r2)
	  mr        r3, r31
	  stb       r5, 0x949(r31)
	  lfs       f0, 0xB1C(r2)
	  stb       r5, 0x94A(r31)
	  lfs       f5, 0xB20(r2)
	  stb       r4, 0x94B(r31)
	  lfs       f4, 0xB24(r2)
	  stb       r0, 0x94C(r31)
	  lfs       f3, 0xB28(r2)
	  stb       r5, 0x94D(r31)
	  lfs       f2, 0xB2C(r2)
	  stfs      f1, 0x950(r31)
	  lfs       f1, 0xB30(r2)
	  stfs      f0, 0x954(r31)
	  lfs       f0, 0xB34(r2)
	  stfs      f5, 0x958(r31)
	  stfs      f4, 0x95C(r31)
	  stfs      f3, 0x960(r31)
	  stfs      f3, 0x964(r31)
	  stfs      f2, 0x968(r31)
	  stfs      f1, 0x96C(r31)
	  stfs      f0, 0x970(r31)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr

	.loc_0xB0:
	*/
}

/*
 * --INFO--
 * Address:	8038872C
 * Size:	000238
 */
void Game::ShijimiChou::Parms::ProperParms::__ct(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  extsh.    r0, r4
	  lis       r4, 0x8049
	  stw       r31, 0xC(r1)
	  addi      r31, r4, 0x3C08
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  beq-      .loc_0x30
	  addi      r0, r30, 0x14C
	  stw       r0, 0x0(r30)

	.loc_0x30:
	  li        r0, 0
	  lis       r5, 0x6670
	  stw       r0, 0x4(r30)
	  addi      r0, r31, 0x24
	  mr        r4, r30
	  addi      r3, r30, 0xC
	  stw       r0, 0x8(r30)
	  addi      r5, r5, 0x3031
	  addi      r6, r31, 0x34
	  bl        0x8AED8
	  lis       r3, 0x804B
	  lis       r5, 0x6670
	  subi      r0, r3, 0x5344
	  lfs       f0, 0xB38(r2)
	  stw       r0, 0xC(r30)
	  mr        r4, r30
	  lfs       f1, 0xB3C(r2)
	  addi      r3, r30, 0x34
	  stfs      f0, 0x24(r30)
	  addi      r5, r5, 0x3038
	  lfs       f0, 0xB40(r2)
	  addi      r6, r31, 0x40
	  stfs      f1, 0x2C(r30)
	  stfs      f0, 0x30(r30)
	  bl        0x8AE9C
	  lis       r3, 0x804B
	  lis       r5, 0x6670
	  subi      r0, r3, 0x5344
	  lfs       f0, 0xB44(r2)
	  stw       r0, 0x34(r30)
	  mr        r4, r30
	  lfs       f1, 0xB3C(r2)
	  addi      r3, r30, 0x5C
	  stfs      f0, 0x4C(r30)
	  addi      r5, r5, 0x3032
	  lfs       f0, 0xB40(r2)
	  addi      r6, r31, 0x58
	  stfs      f1, 0x54(r30)
	  stfs      f0, 0x58(r30)
	  bl        0x8AE60
	  lis       r3, 0x804B
	  lis       r5, 0x6670
	  subi      r0, r3, 0x5344
	  lfs       f1, 0xB28(r2)
	  stw       r0, 0x5C(r30)
	  mr        r4, r30
	  lfs       f0, 0xB3C(r2)
	  addi      r3, r30, 0x84
	  stfs      f1, 0x74(r30)
	  addi      r5, r5, 0x3033
	  addi      r6, r31, 0x64
	  stfs      f0, 0x7C(r30)
	  stfs      f1, 0x80(r30)
	  bl        0x8AE28
	  lis       r3, 0x804B
	  lis       r5, 0x6670
	  subi      r0, r3, 0x5344
	  lfs       f0, 0xB44(r2)
	  stw       r0, 0x84(r30)
	  mr        r4, r30
	  lfs       f1, 0xB3C(r2)
	  addi      r3, r30, 0xAC
	  stfs      f0, 0x9C(r30)
	  addi      r5, r5, 0x3034
	  lfs       f0, 0xB48(r2)
	  addi      r6, r31, 0x70
	  stfs      f1, 0xA4(r30)
	  stfs      f0, 0xA8(r30)
	  bl        0x8ADEC
	  lis       r3, 0x804B
	  lis       r5, 0x6670
	  subi      r0, r3, 0x5344
	  lfs       f0, 0xB4C(r2)
	  stw       r0, 0xAC(r30)
	  mr        r4, r30
	  lfs       f1, 0xB3C(r2)
	  addi      r3, r30, 0xD4
	  stfs      f0, 0xC4(r30)
	  addi      r5, r5, 0x3035
	  lfs       f0, 0xB28(r2)
	  addi      r6, r31, 0x7C
	  stfs      f1, 0xCC(r30)
	  stfs      f0, 0xD0(r30)
	  bl        0x8ADB0
	  lis       r3, 0x804B
	  lis       r5, 0x6670
	  subi      r0, r3, 0x5344
	  lfs       f0, 0xB28(r2)
	  stw       r0, 0xD4(r30)
	  mr        r4, r30
	  lfs       f1, 0xB3C(r2)
	  addi      r3, r30, 0xFC
	  stfs      f0, 0xEC(r30)
	  addi      r5, r5, 0x3036
	  lfs       f0, 0xB50(r2)
	  addi      r6, r2, 0xB54
	  stfs      f1, 0xF4(r30)
	  stfs      f0, 0xF8(r30)
	  bl        0x8AD74
	  lis       r3, 0x804B
	  lis       r5, 0x6670
	  subi      r0, r3, 0x5344
	  lfs       f0, 0xB5C(r2)
	  stw       r0, 0xFC(r30)
	  mr        r4, r30
	  lfs       f1, 0xB3C(r2)
	  addi      r3, r30, 0x124
	  stfs      f0, 0x114(r30)
	  addi      r5, r5, 0x3037
	  lfs       f0, 0xB28(r2)
	  addi      r6, r2, 0xB60
	  stfs      f1, 0x11C(r30)
	  stfs      f0, 0x120(r30)
	  bl        0x8AD38
	  lis       r3, 0x804B
	  lfs       f2, 0xB5C(r2)
	  subi      r0, r3, 0x5344
	  lfs       f1, 0xB3C(r2)
	  stw       r0, 0x124(r30)
	  mr        r3, r30
	  lfs       f0, 0xB28(r2)
	  stfs      f2, 0x13C(r30)
	  stfs      f1, 0x144(r30)
	  stfs      f0, 0x148(r30)
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
 * Address:	80388964
 * Size:	000038
 */
void Game::ShijimiChou::Mgr::loadModelData(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x25886C
	  lwz       r3, 0x1C(r31)
	  lis       r4, 0x4
	  bl        -0x3050AC
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8038899C
 * Size:	000138
 */
void Game::ShijimiChou::Mgr::createModel(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  mflr      r0
	  lis       r4, 0x8049
	  stw       r0, 0x54(r1)
	  stw       r31, 0x4C(r1)
	  addi      r31, r4, 0x3C08
	  stw       r30, 0x48(r1)
	  stw       r29, 0x44(r1)
	  stw       r28, 0x40(r1)
	  mr        r28, r3
	  li        r3, 0x14
	  bl        -0x364B24
	  mr.       r30, r3
	  beq-      .loc_0x4C
	  lwz       r4, 0x1C(r28)
	  lis       r5, 0x8
	  lbz       r6, 0x24(r28)
	  bl        0xB57F8
	  mr        r30, r3

	.loc_0x4C:
	  cmplwi    r30, 0
	  bne-      .loc_0x68
	  addi      r3, r31, 0x340
	  addi      r5, r31, 0x354
	  li        r4, 0x47
	  crclr     6, 0x6
	  bl        -0x35E3C0

	.loc_0x68:
	  li        r29, 0
	  b         .loc_0xAC

	.loc_0x70:
	  lwz       r3, 0x64(r4)
	  mr        r4, r29
	  bl        -0x359BF8
	  addi      r4, r31, 0x360
	  bl        -0x2BE35C
	  cmpwi     r3, 0
	  bne-      .loc_0xA8
	  lwz       r4, 0x8(r30)
	  rlwinm    r3,r29,6,10,25
	  addi      r0, r3, 0x2C
	  lwz       r3, 0xC0(r4)
	  lis       r4, 0x100
	  lwzx      r3, r3, r0
	  bl        -0x328768

	.loc_0xA8:
	  addi      r29, r29, 0x1

	.loc_0xAC:
	  lwz       r4, 0x1C(r28)
	  rlwinm    r0,r29,0,16,31
	  lhz       r3, 0x5C(r4)
	  cmplw     r0, r3
	  blt+      .loc_0x70
	  addi      r3, r1, 0x8
	  bl        -0x29E7C0
	  lis       r4, 0x8051
	  addi      r3, r1, 0x8
	  subi      r4, r4, 0xDD0
	  bl        -0x29E7A4
	  lwz       r31, 0x8(r30)
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  bl        -0x322180
	  mr        r3, r31
	  bl        -0x3222B8
	  lwz       r0, 0x54(r1)
	  mr        r3, r30
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
 * Address:	80388AD4
 * Size:	0000C8
 */
void Game::ShijimiChou::Mgr::birth((Game::EnemyBirthArg&))
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
	  bl        -0x25972C
	  mr.       r0, r3
	  beq-      .loc_0xA8
	  mr        r31, r0
	  lfs       f1, 0x4(r30)
	  lwz       r5, 0xC0(r31)
	  mr        r4, r30
	  lfs       f0, 0x894(r5)
	  fadds     f0, f1, f0
	  stfs      f0, 0x4(r30)
	  lfs       f0, 0x0(r30)
	  stfs      f0, 0x198(r31)
	  lfs       f0, 0x4(r30)
	  stfs      f0, 0x19C(r31)
	  lfs       f0, 0x8(r30)
	  stfs      f0, 0x1A0(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x70(r12)
	  mtctr     r12
	  bctrl
	  stw       r31, 0x2E8(r31)
	  li        r0, 0
	  mr        r3, r29
	  mr        r4, r31
	  lwz       r5, 0xC0(r31)
	  lbz       r5, 0x948(r5)
	  stw       r5, 0x32C(r31)
	  stw       r0, 0x2C8(r31)
	  stw       r31, 0x48(r29)
	  lwz       r5, 0xC0(r31)
	  lbz       r5, 0x94B(r5)
	  bl        0xD4
	  mr        r3, r31
	  b         .loc_0xAC

	.loc_0xA8:
	  li        r3, 0

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
 * Address:	80388B9C
 * Size:	000050
 */
void Game::ShijimiChou::Mgr::doAnimation(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x259CD8
	  lwz       r3, 0x48(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x3C
	  lwz       r3, 0xC0(r3)
	  lbz       r0, 0x949(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x3C
	  lwz       r3, 0x44(r31)
	  bl        -0x1F2440

	.loc_0x3C:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80388BEC
 * Size:	000058
 */
void Game::ShijimiChou::Mgr::fetch((J3DModel*, float))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r5, 0x4C(r3)
	  cmplwi    r5, 0
	  beq-      .loc_0x48
	  lfs       f0, 0xB68(r2)
	  lwz       r5, 0x4(r5)
	  fadds     f0, f0, f1
	  fctiwz    f0, f0
	  stfd      f0, 0x8(r1)
	  lwz       r0, 0xC(r1)
	  stw       r0, 0x0(r5)
	  lwz       r3, 0x4C(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl

	.loc_0x48:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80388C44
 * Size:	0004BC
 */
void Game::ShijimiChou::Mgr::createGroup((Game::ShijimiChou::Obj*, int))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x170(r1)
	  mflr      r0
	  stw       r0, 0x174(r1)
	  stfd      f31, 0x160(r1)
	  psq_st    f31,0x168(r1),0,0
	  stfd      f30, 0x150(r1)
	  psq_st    f30,0x158(r1),0,0
	  stfd      f29, 0x140(r1)
	  psq_st    f29,0x148(r1),0,0
	  stfd      f28, 0x130(r1)
	  psq_st    f28,0x138(r1),0,0
	  stfd      f27, 0x120(r1)
	  psq_st    f27,0x128(r1),0,0
	  stfd      f26, 0x110(r1)
	  psq_st    f26,0x118(r1),0,0
	  stfd      f25, 0x100(r1)
	  psq_st    f25,0x108(r1),0,0
	  stfd      f24, 0xF0(r1)
	  psq_st    f24,0xF8(r1),0,0
	  stfd      f23, 0xE0(r1)
	  psq_st    f23,0xE8(r1),0,0
	  stfd      f22, 0xD0(r1)
	  psq_st    f22,0xD8(r1),0,0
	  stfd      f21, 0xC0(r1)
	  psq_st    f21,0xC8(r1),0,0
	  stfd      f20, 0xB0(r1)
	  psq_st    f20,0xB8(r1),0,0
	  stfd      f19, 0xA0(r1)
	  psq_st    f19,0xA8(r1),0,0
	  stfd      f18, 0x90(r1)
	  psq_st    f18,0x98(r1),0,0
	  stmw      r25, 0x74(r1)
	  mr        r27, r3
	  mr        r28, r4
	  mr        r29, r5
	  addi      r3, r1, 0x14
	  bl        -0x25A0B0
	  mr        r4, r28
	  addi      r3, r1, 0x8
	  lwz       r12, 0x0(r28)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f26, 0x8(r1)
	  mr        r3, r28
	  lfs       f25, 0xC(r1)
	  lfs       f24, 0x10(r1)
	  bl        0x3514
	  lfs       f0, 0xB3C(r2)
	  stfs      f26, 0x14(r1)
	  lfs       f20, 0xB20(r2)
	  stfs      f0, 0x20(r1)
	  stfs      f25, 0x18(r1)
	  stfs      f24, 0x1C(r1)
	  lwz       r0, 0x2C0(r28)
	  cmpwi     r0, 0x1
	  bne-      .loc_0xE8
	  lfs       f20, 0xB70(r2)

	.loc_0xE8:
	  bl        -0x2BF78C
	  lfs       f1, 0x20(r1)
	  lfs       f0, 0xB3C(r2)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x128
	  lfs       f0, 0xB74(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fmuls     f0, f1, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x48(r1)
	  lwz       r0, 0x4C(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r3, r0
	  fneg      f1, f0
	  b         .loc_0x14C

	.loc_0x128:
	  lfs       f0, 0xB78(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fmuls     f0, f1, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x50(r1)
	  lwz       r0, 0x54(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f1, r3, r0

	.loc_0x14C:
	  lfs       f0, 0x14(r1)
	  lfs       f2, 0x20(r1)
	  fmadds    f1, f20, f1, f0
	  lfs       f0, 0xB3C(r2)
	  fcmpo     cr0, f2, f0
	  stfs      f1, 0x14(r1)
	  bge-      .loc_0x16C
	  fneg      f2, f2

	.loc_0x16C:
	  lfs       f0, 0xB78(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  lfs       f1, 0x1C(r1)
	  fmuls     f2, f2, f0
	  lfs       f0, 0x20(r1)
	  fctiwz    f2, f2
	  stfd      f2, 0x58(r1)
	  lwz       r0, 0x5C(r1)
	  rlwinm    r0,r0,3,18,28
	  add       r3, r3, r0
	  lfs       f2, 0x4(r3)
	  fmadds    f1, f20, f2, f1
	  stfs      f1, 0x1C(r1)
	  stfs      f0, 0x1FC(r28)
	  lfs       f0, 0x1FC(r28)
	  stfs      f0, 0x1A8(r28)
	  bl        -0x2BF854
	  xoris     r0, r3, 0x8000
	  lis       r3, 0x4330
	  stw       r0, 0x64(r1)
	  li        r0, 0x1
	  lfd       f3, 0xB88(r2)
	  stw       r3, 0x60(r1)
	  lfs       f1, 0xB7C(r2)
	  lfd       f2, 0x60(r1)
	  lfs       f0, 0xB68(r2)
	  fsubs     f2, f2, f3
	  stw       r0, 0x2BC(r28)
	  fdivs     f1, f2, f1
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x1F4
	  li        r0, 0x2
	  stw       r0, 0x2BC(r28)

	.loc_0x1F4:
	  lfs       f23, 0x198(r28)
	  xoris     r31, r29, 0x8000
	  lfs       f22, 0x19C(r28)
	  subi      r26, r29, 0x1
	  lfs       f21, 0x1A0(r28)
	  li        r29, 0
	  lfs       f27, 0xB80(r2)
	  lis       r30, 0x4330
	  lfd       f28, 0xB88(r2)
	  lfs       f29, 0xB7C(r2)
	  lfs       f30, 0xB6C(r2)
	  lfs       f31, 0xB84(r2)
	  b         .loc_0x430

	.loc_0x228:
	  addi      r0, r29, 0x1
	  stw       r30, 0x60(r1)
	  xoris     r0, r0, 0x8000
	  stw       r0, 0x64(r1)
	  lfd       f0, 0x60(r1)
	  stw       r31, 0x5C(r1)
	  fsubs     f1, f0, f28
	  stw       r30, 0x58(r1)
	  lfd       f0, 0x58(r1)
	  fmuls     f1, f27, f1
	  stfs      f26, 0x14(r1)
	  fsubs     f0, f0, f28
	  stfs      f25, 0x18(r1)
	  fdivs     f1, f1, f0
	  stfs      f24, 0x1C(r1)
	  stfs      f1, 0x20(r1)
	  lwz       r0, 0x2C0(r28)
	  cmpwi     r0, 0
	  bne-      .loc_0x324
	  lfs       f0, 0xB3C(r2)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x2AC
	  lfs       f0, 0xB74(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fmuls     f0, f1, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x60(r1)
	  lwz       r0, 0x64(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r3, r0
	  fneg      f1, f0
	  b         .loc_0x2D0

	.loc_0x2AC:
	  lfs       f0, 0xB78(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fmuls     f0, f1, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x58(r1)
	  lwz       r0, 0x5C(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f1, r3, r0

	.loc_0x2D0:
	  lfs       f0, 0x14(r1)
	  lfs       f2, 0x20(r1)
	  fmadds    f1, f20, f1, f0
	  lfs       f0, 0xB3C(r2)
	  fcmpo     cr0, f2, f0
	  stfs      f1, 0x14(r1)
	  bge-      .loc_0x2F0
	  fneg      f2, f2

	.loc_0x2F0:
	  lfs       f1, 0xB78(r2)
	  lis       r3, 0x8050
	  addi      r0, r3, 0x71A0
	  lfs       f0, 0x1C(r1)
	  fmuls     f1, f2, f1
	  fctiwz    f1, f1
	  stfd      f1, 0x50(r1)
	  lwz       r3, 0x54(r1)
	  rlwinm    r3,r3,3,18,28
	  add       r3, r0, r3
	  lfs       f1, 0x4(r3)
	  fmadds    f0, f20, f1, f0
	  stfs      f0, 0x1C(r1)

	.loc_0x324:
	  bl        -0x2BF9C8
	  xoris     r0, r3, 0x8000
	  stw       r30, 0x60(r1)
	  lfs       f1, 0x18(r1)
	  mr        r3, r27
	  stw       r0, 0x64(r1)
	  addi      r4, r1, 0x14
	  lfd       f0, 0x60(r1)
	  fsubs     f0, f0, f28
	  fdivs     f0, f0, f29
	  fmsubs    f0, f30, f0, f31
	  fadds     f0, f1, f0
	  stfs      f0, 0x18(r1)
	  lwz       r5, 0xC0(r28)
	  lfs       f19, 0x90C(r5)
	  lfs       f0, 0x934(r5)
	  fadds     f18, f19, f0
	  bl        -0x259BE4
	  cmplwi    r3, 0
	  beq-      .loc_0x42C
	  lwz       r0, 0x2C0(r28)
	  mr        r25, r3
	  stw       r0, 0x2C0(r3)
	  bl        -0x2BFA24
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x64(r1)
	  lfd       f2, 0xB88(r2)
	  stw       r0, 0x60(r1)
	  lfs       f0, 0xB7C(r2)
	  lfd       f1, 0x60(r1)
	  fsubs     f1, f1, f2
	  fdivs     f0, f1, f0
	  fcmpo     cr0, f0, f19
	  bge-      .loc_0x3BC
	  li        r0, 0x1
	  stw       r0, 0x2BC(r25)
	  b         .loc_0x3D8

	.loc_0x3BC:
	  fcmpo     cr0, f0, f18
	  bge-      .loc_0x3D0
	  li        r0, 0x2
	  stw       r0, 0x2BC(r25)
	  b         .loc_0x3D8

	.loc_0x3D0:
	  li        r0, 0
	  stw       r0, 0x2BC(r25)

	.loc_0x3D8:
	  lwz       r0, 0x2C0(r28)
	  cmpwi     r0, 0x2
	  bne-      .loc_0x3F4
	  mr        r3, r25
	  bl        0x3254
	  li        r0, 0
	  stw       r0, 0x2BC(r25)

	.loc_0x3F4:
	  stw       r28, 0x2E8(r25)
	  mr        r3, r28
	  bl        0x31B4
	  stw       r3, 0x32C(r25)
	  mr        r3, r25
	  li        r4, 0
	  stfs      f23, 0x198(r25)
	  stfs      f22, 0x19C(r25)
	  stfs      f21, 0x1A0(r25)
	  bl        -0x24E094
	  lwz       r3, 0x2C8(r28)
	  addi      r0, r29, 0x1
	  stw       r3, 0x2C8(r25)
	  stw       r0, 0x328(r28)

	.loc_0x42C:
	  addi      r29, r29, 0x1

	.loc_0x430:
	  cmpw      r29, r26
	  blt+      .loc_0x228
	  psq_l     f31,0x168(r1),0,0
	  lfd       f31, 0x160(r1)
	  psq_l     f30,0x158(r1),0,0
	  lfd       f30, 0x150(r1)
	  psq_l     f29,0x148(r1),0,0
	  lfd       f29, 0x140(r1)
	  psq_l     f28,0x138(r1),0,0
	  lfd       f28, 0x130(r1)
	  psq_l     f27,0x128(r1),0,0
	  lfd       f27, 0x120(r1)
	  psq_l     f26,0x118(r1),0,0
	  lfd       f26, 0x110(r1)
	  psq_l     f25,0x108(r1),0,0
	  lfd       f25, 0x100(r1)
	  psq_l     f24,0xF8(r1),0,0
	  lfd       f24, 0xF0(r1)
	  psq_l     f23,0xE8(r1),0,0
	  lfd       f23, 0xE0(r1)
	  psq_l     f22,0xD8(r1),0,0
	  lfd       f22, 0xD0(r1)
	  psq_l     f21,0xC8(r1),0,0
	  lfd       f21, 0xC0(r1)
	  psq_l     f20,0xB8(r1),0,0
	  lfd       f20, 0xB0(r1)
	  psq_l     f19,0xA8(r1),0,0
	  lfd       f19, 0xA0(r1)
	  psq_l     f18,0x98(r1),0,0
	  lfd       f18, 0x90(r1)
	  lmw       r25, 0x74(r1)
	  lwz       r0, 0x174(r1)
	  mtlr      r0
	  addi      r1, r1, 0x170
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80389100
 * Size:	0000B8
 */
void Game::ShijimiChou::Mgr::createGroupByBigFoot((Game::EnemyBirthArg&, int))
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
	  mr        r29, r4
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  bl        -0x259D60
	  mr.       r0, r3
	  beq-      .loc_0x98
	  mr        r31, r0
	  mr        r4, r29
	  stw       r31, 0x48(r28)
	  lfs       f0, 0x0(r29)
	  stfs      f0, 0x198(r31)
	  lfs       f0, 0x4(r29)
	  stfs      f0, 0x19C(r31)
	  lfs       f0, 0x8(r29)
	  stfs      f0, 0x1A0(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x70(r12)
	  mtctr     r12
	  bctrl
	  stw       r31, 0x2E8(r31)
	  li        r0, 0
	  mr        r3, r31
	  li        r4, 0
	  stw       r0, 0x32C(r31)
	  bl        -0x24E1B4
	  li        r0, 0x1
	  mr        r3, r28
	  stw       r0, 0x2C0(r31)
	  mr        r4, r31
	  mr        r5, r30
	  bl        -0x550

	.loc_0x98:
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
 * Address:	803891B8
 * Size:	0000B8
 */
void Game::ShijimiChou::Mgr::createGroupByPlants((Game::EnemyBirthArg&, int))
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
	  mr        r29, r4
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  bl        -0x259E18
	  mr.       r0, r3
	  beq-      .loc_0x98
	  mr        r31, r0
	  mr        r4, r29
	  stw       r31, 0x48(r28)
	  lfs       f0, 0x0(r29)
	  stfs      f0, 0x198(r31)
	  lfs       f0, 0x4(r29)
	  stfs      f0, 0x19C(r31)
	  lfs       f0, 0x8(r29)
	  stfs      f0, 0x1A0(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x70(r12)
	  mtctr     r12
	  bctrl
	  stw       r31, 0x2E8(r31)
	  li        r0, 0x1
	  mr        r3, r31
	  li        r4, 0
	  stw       r0, 0x32C(r31)
	  bl        -0x24E26C
	  li        r0, 0x2
	  mr        r3, r28
	  stw       r0, 0x2C0(r31)
	  mr        r4, r31
	  mr        r5, r30
	  bl        -0x608

	.loc_0x98:
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
 * Address:	80389270
 * Size:	000198
 */
void Game::ShijimiChou::Mgr::createGroupByEnemy((Game::EnemyBirthArg&,
                                                 Game::EnemyBase*, int, bool))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  mflr      r0
	  stw       r0, 0x54(r1)
	  stmw      r26, 0x38(r1)
	  mr        r28, r3
	  mr        r26, r4
	  mr        r29, r5
	  mr        r30, r6
	  mr        r27, r7
	  bl        -0x259ECC
	  mr.       r31, r3
	  beq-      .loc_0x184
	  lfs       f0, 0x0(r26)
	  rlwinm.   r0,r27,0,24,31
	  stfs      f0, 0x8(r1)
	  lfs       f0, 0x4(r26)
	  stfs      f0, 0xC(r1)
	  lfs       f0, 0x8(r26)
	  stfs      f0, 0x10(r1)
	  bne-      .loc_0x134
	  cmplwi    r29, 0
	  beq-      .loc_0x134
	  mr        r3, r29
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, 0xB3C(r2)
	  lfs       f2, 0xB90(r2)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0xA8
	  lfs       f0, 0xB74(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fmuls     f0, f1, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x18(r1)
	  lwz       r0, 0x1C(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r3, r0
	  fneg      f1, f0
	  b         .loc_0xCC

	.loc_0xA8:
	  lfs       f0, 0xB78(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fmuls     f0, f1, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x20(r1)
	  lwz       r0, 0x24(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f1, r3, r0

	.loc_0xCC:
	  lfs       f0, 0x8(r1)
	  mr        r3, r29
	  fnmsubs   f0, f2, f1, f0
	  stfs      f0, 0x8(r1)
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, 0xB3C(r2)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0xFC
	  fneg      f1, f1

	.loc_0xFC:
	  lfs       f0, 0xB78(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  lfs       f2, 0xB90(r2)
	  fmuls     f1, f1, f0
	  lfs       f0, 0x10(r1)
	  fctiwz    f1, f1
	  stfd      f1, 0x28(r1)
	  lwz       r0, 0x2C(r1)
	  rlwinm    r0,r0,3,18,28
	  add       r3, r3, r0
	  lfs       f1, 0x4(r3)
	  fnmsubs   f0, f2, f1, f0
	  stfs      f0, 0x10(r1)

	.loc_0x134:
	  stw       r31, 0x48(r28)
	  mr        r3, r31
	  addi      r4, r1, 0x8
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x70(r12)
	  mtctr     r12
	  bctrl
	  stw       r31, 0x2E8(r31)
	  li        r0, 0x1
	  mr        r3, r31
	  li        r4, 0
	  stw       r0, 0x32C(r31)
	  bl        -0x24E40C
	  li        r0, 0x3
	  mr        r3, r28
	  stw       r0, 0x2C0(r31)
	  mr        r4, r31
	  mr        r5, r30
	  stw       r29, 0x2C8(r31)
	  bl        -0x7AC

	.loc_0x184:
	  lmw       r26, 0x38(r1)
	  lwz       r0, 0x54(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80389408
 * Size:	0000B0
 */
void Game::ShijimiChou::Mgr::__dt(void)
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
	  beq-      .loc_0x94
	  lis       r3, 0x804E
	  addi      r3, r3, 0x4BF0
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x38
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x84
	  lis       r3, 0x804B
	  subi      r3, r3, 0x760
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x38
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x84
	  lis       r3, 0x804B
	  addic.    r0, r30, 0x4
	  subi      r3, r3, 0x5304
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x38
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x84
	  lis       r4, 0x804B
	  addi      r3, r30, 0x4
	  subi      r0, r4, 0x5324
	  li        r4, 0
	  stw       r0, 0x4(r30)
	  bl        0x88100

	.loc_0x84:
	  extsh.    r0, r31
	  ble-      .loc_0x94
	  mr        r3, r30
	  bl        -0x3653E4

	.loc_0x94:
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
 * Address:	803894B8
 * Size:	000008
 */
u32 Game::ShijimiChou::Mgr::getEnemyTypeID(void) { return 0x4D; }

/*
 * --INFO--
 * Address:	803894C0
 * Size:	000060
 */
void Game::ShijimiChou::Mgr::createObj((int))
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
	  mulli     r3, r31, 0x34C
	  addi      r3, r3, 0x10
	  bl        -0x365538
	  lis       r4, 0x8039
	  lis       r5, 0x8039
	  subi      r4, r4, 0x66BC
	  mr        r7, r31
	  subi      r5, r5, 0x6AE0
	  li        r6, 0x34C
	  bl        -0x2C7B10
	  stw       r3, 0x50(r30)
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
 * Address:	80389520
 * Size:	0000BC
 */
void Game::ShijimiChou::Obj::__dt(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr.       r31, r3
	  stw       r30, 0x8(r1)
	  mr        r30, r4
	  beq-      .loc_0xA0
	  lis       r3, 0x804E
	  addi      r0, r31, 0x33C
	  addi      r4, r3, 0x4D00
	  stw       r4, 0x0(r31)
	  addi      r3, r4, 0x1B0
	  addi      r4, r4, 0x2FC
	  stw       r3, 0x178(r31)
	  lwz       r3, 0x17C(r31)
	  stw       r4, 0x0(r3)
	  lwz       r3, 0x17C(r31)
	  sub       r0, r0, r3
	  stw       r0, 0xC(r3)
	  beq-      .loc_0x90
	  lis       r3, 0x804B
	  addi      r0, r31, 0x2BC
	  subi      r4, r3, 0x5CDC
	  addi      r3, r31, 0x290
	  stw       r4, 0x0(r31)
	  addi      r5, r4, 0x1B0
	  addi      r6, r4, 0x2F8
	  li        r4, -0x1
	  stw       r5, 0x178(r31)
	  lwz       r5, 0x17C(r31)
	  stw       r6, 0x0(r5)
	  lwz       r5, 0x17C(r31)
	  sub       r0, r0, r5
	  stw       r0, 0xC(r5)
	  bl        0x87FDC

	.loc_0x90:
	  extsh.    r0, r30
	  ble-      .loc_0xA0
	  mr        r3, r31
	  bl        -0x365508

	.loc_0xA0:
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
 * Address:	803895DC
 * Size:	000050
 */
void Game::ShijimiChou::Parms::read((Stream&))
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
	  bl        0x8A1FC
	  mr        r4, r31
	  addi      r3, r30, 0xE0
	  bl        0x8A1F0
	  mr        r4, r31
	  addi      r3, r30, 0x7F8
	  bl        0x8A1E4
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
 * Address:	8038962C
 * Size:	000008
 */
void @4 @Game::ShijimiChou::Mgr::__dt(void)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x4
	  b         -0x228
	*/
}
