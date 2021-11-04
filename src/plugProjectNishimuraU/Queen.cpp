#include "types.h"

namespace Game {

/*
 * --INFO--
 * Address:	802894D4
 * Size:	00017C
 */
Queen::Obj::Obj()
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
	  addi      r0, r31, 0x310
	  lis       r3, 0x804B
	  stw       r0, 0x17C(r31)
	  subi      r3, r3, 0x5988
	  li        r0, 0
	  stw       r3, 0x310(r31)
	  stw       r0, 0x314(r31)
	  stw       r0, 0x318(r31)

	.loc_0x40:
	  mr        r3, r31
	  li        r4, 0
	  bl        -0x18817C
	  lis       r3, 0x804D
	  addi      r0, r31, 0x310
	  subi      r5, r3, 0x5FE4
	  li        r3, 0x2C
	  stw       r5, 0x0(r31)
	  addi      r4, r5, 0x1B0
	  addi      r5, r5, 0x2FC
	  stw       r4, 0x178(r31)
	  lwz       r4, 0x17C(r31)
	  stw       r5, 0x0(r4)
	  lwz       r4, 0x17C(r31)
	  sub       r0, r0, r4
	  stw       r0, 0xC(r4)
	  bl        -0x2656B0
	  mr.       r30, r3
	  beq-      .loc_0xCC
	  bl        -0x161BEC
	  lis       r3, 0x804D
	  lis       r4, 0x804B
	  subi      r0, r3, 0x63F8
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

	.loc_0xCC:
	  stw       r30, 0x184(r31)
	  li        r3, 0x1C
	  bl        -0x265704
	  mr.       r4, r3
	  beq-      .loc_0x100
	  lis       r5, 0x804B
	  lis       r3, 0x804D
	  subi      r0, r5, 0x680
	  li        r5, -0x1
	  stw       r0, 0x0(r4)
	  subi      r0, r3, 0x641C
	  stw       r5, 0x18(r4)
	  stw       r0, 0x0(r4)

	.loc_0x100:
	  lwz       r12, 0x0(r31)
	  mr        r3, r31
	  lwz       r12, 0x2F8(r12)
	  mtctr     r12
	  bctrl
	  li        r3, 0xC
	  bl        -0x265748
	  mr.       r0, r3
	  beq-      .loc_0x130
	  mr        r4, r31
	  bl        0x5718
	  mr        r0, r3

	.loc_0x130:
	  stw       r0, 0x2D8(r31)
	  li        r3, 0xC
	  bl        -0x265768
	  mr.       r30, r3
	  beq-      .loc_0x154
	  bl        0x1AAD3C
	  lis       r3, 0x804F
	  subi      r0, r3, 0x3B74
	  stw       r0, 0x0(r30)

	.loc_0x154:
	  stw       r30, 0x2DC(r31)
	  mr        r3, r31
	  bl        0x1CF0
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
 * Address:	80289650
 * Size:	000004
 */
void Queen::Obj::setInitialSetting(Game::EnemyInitialParamBase*) { }

/*
 * --INFO--
 * Address:	80289654
 * Size:	000100
 */
void Queen::Obj::onInit(Game::CreatureInitArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x187C10
	  lwz       r3, 0x1E0(r31)
	  li        r4, -0x1
	  li        r0, 0
	  lfs       f0, -0x2B48(r2)
	  rlwinm    r5,r3,0,20,18
	  mr        r3, r31
	  stw       r5, 0x1E0(r31)
	  lwz       r5, 0x1E0(r31)
	  rlwinm    r5,r5,0,26,24
	  stw       r5, 0x1E0(r31)
	  stw       r4, 0x2D4(r31)
	  stb       r0, 0x2C2(r31)
	  stfs      f0, 0x2C8(r31)
	  stb       r0, 0x2C1(r31)
	  stfs      f0, 0x2CC(r31)
	  stfs      f0, 0x2D0(r31)
	  bl        0x15C4
	  lwz       r3, 0x2D8(r31)
	  bl        0x5714
	  mr        r3, r31
	  bl        0x2198
	  li        r0, 0
	  mr        r3, r31
	  stb       r0, 0x2C4(r31)
	  stb       r0, 0x2C5(r31)
	  bl        0x1B28
	  lwz       r3, 0x2DC(r31)
	  lwz       r4, 0x180(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r4, 0x44(r4)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lbz       r0, 0x2C0(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0xCC
	  lwz       r3, 0x2BC(r31)
	  mr        r4, r31
	  li        r5, 0x2
	  li        r6, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0xEC

	.loc_0xCC:
	  lwz       r3, 0x2BC(r31)
	  mr        r4, r31
	  li        r5, 0x1
	  li        r6, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl

	.loc_0xEC:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80289754
 * Size:	000058
 */
void Queen::Obj::onKill(Game::CreatureKillArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  li        r4, 0
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  bl        0x220C
	  mr        r3, r30
	  bl        0x237C
	  mr        r3, r30
	  bl        0x2474
	  mr        r3, r30
	  mr        r4, r31
	  bl        -0x1878A8
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
 * Address:	802897AC
 * Size:	0000B8
 */
void Queen::Obj::setParameters()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  li        r0, 0x1
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  stb       r0, 0x2C0(r3)
	  li        r0, 0
	  stb       r0, 0x2C3(r3)
	  lwz       r3, -0x6C18(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x9C
	  lwz       r4, 0x44(r3)
	  cmpwi     r4, 0x4
	  bne-      .loc_0x44
	  stb       r0, 0x2C0(r31)
	  b         .loc_0x9C

	.loc_0x44:
	  lbz       r0, 0x48(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x9C
	  cmpwi     r4, 0
	  bne-      .loc_0x9C
	  lwz       r3, 0x58(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x9C
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x78(r12)
	  mtctr     r12
	  bctrl
	  subis     r0, r3, 0x665F
	  cmplwi    r0, 0x3031
	  bne-      .loc_0x9C
	  li        r3, 0
	  li        r0, 0x1
	  stb       r3, 0x2C0(r31)
	  stb       r0, 0x2C3(r31)
	  lwz       r3, 0xC0(r31)
	  lfs       f0, 0x86C(r3)
	  stfs      f0, 0x104(r3)

	.loc_0x9C:
	  mr        r3, r31
	  bl        -0x186C74
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80289864
 * Size:	000050
 */
void Queen::Obj::doUpdate()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r3, 0x2D8(r3)
	  bl        0x57F0
	  mr        r3, r31
	  bl        0x1124
	  lwz       r3, 0x2BC(r31)
	  mr        r4, r31
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
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
 * Address:	802898B4
 * Size:	000034
 */
void Queen::Obj::doUpdateCommon()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x1869B4
	  mr        r3, r31
	  bl        0x182C
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802898E8
 * Size:	000054
 */
void Queen::Obj::doAnimationCullingOff()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x18687C
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x40
	  lwz       r3, 0x2DC(r31)
	  lfs       f1, -0x2B44(r2)
	  bl        0x1AAC28

	.loc_0x40:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8028993C
 * Size:	000004
 */
void Queen::Obj::doDirectDraw(Graphics&) { }

/*
 * --INFO--
 * Address:	80289940
 * Size:	000020
 */
void Queen::Obj::doDebugDraw(Graphics&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        -0x183AE0
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80289960
 * Size:	00004C
 */
void Queen::Obj::setFSM(Game::Queen::FSM*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  stw       r4, 0x2BC(r3)
	  mr        r4, r31
	  lwz       r3, 0x2BC(r3)
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
 * Address:	802899AC
 * Size:	00008C
 */
void Queen::Obj::getShadowParam(Game::ShadowParam&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r4
	  mr        r4, r3
	  addi      r3, r1, 0x8
	  lwz       r12, 0x0(r4)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, 0x8(r1)
	  lfs       f4, -0x2B40(r2)
	  stfs      f0, 0x0(r31)
	  lfs       f3, -0x2B48(r2)
	  lfs       f0, 0xC(r1)
	  lfs       f2, -0x2B3C(r2)
	  stfs      f0, 0x4(r31)
	  lfs       f1, -0x2B38(r2)
	  lfs       f5, 0x10(r1)
	  lfs       f0, -0x2B34(r2)
	  stfs      f5, 0x8(r31)
	  lfs       f5, 0x4(r31)
	  fadds     f4, f5, f4
	  stfs      f4, 0x4(r31)
	  stfs      f3, 0xC(r31)
	  stfs      f2, 0x10(r31)
	  stfs      f3, 0x14(r31)
	  stfs      f1, 0x18(r31)
	  stfs      f0, 0x1C(r31)
	  lwz       r31, 0x1C(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80289A38
 * Size:	0000B0
 */
void Queen::Obj::damageCallBack(Game::Creature*, float, CollPart*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stfd      f31, 0x10(r1)
	  psq_st    f31,0x18(r1),0,0
	  stw       r31, 0xC(r1)
	  fmr       f31, f1
	  cmplwi    r5, 0
	  mr        r31, r3
	  beq-      .loc_0x90
	  cmplwi    r4, 0
	  beq-      .loc_0x90
	  mr        r3, r4
	  lwz       r12, 0x0(r4)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x90
	  mr        r3, r31
	  bl        -0x182694
	  cmpwi     r3, 0x1
	  bne-      .loc_0x68
	  lfs       f0, -0x2B30(r2)
	  fmuls     f31, f31, f0
	  b         .loc_0x78

	.loc_0x68:
	  cmpwi     r3, 0x4
	  bne-      .loc_0x78
	  lfs       f0, -0x2B2C(r2)
	  fmuls     f31, f31, f0

	.loc_0x78:
	  fmr       f1, f31
	  lfs       f2, -0x2B3C(r2)
	  mr        r3, r31
	  bl        -0x183A90
	  li        r3, 0x1
	  b         .loc_0x94

	.loc_0x90:
	  li        r3, 0

	.loc_0x94:
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
 * Address:	80289AE8
 * Size:	000008
 */
u32 Queen::Obj::earthquakeCallBack(Game::Creature*, float) { return 0x0; }

/*
 * --INFO--
 * Address:	80289AF0
 * Size:	00004C
 */
void Queen::Obj::doStartStoneState()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x186C10
	  mr        r3, r31
	  bl        0x20EC
	  mr        r3, r31
	  bl        0x1FE4
	  mr        r3, r31
	  bl        0x1F44
	  mr        r3, r31
	  bl        0x1430
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80289B3C
 * Size:	000088
 */
void Queen::Obj::doFinishStoneState()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x186C48
	  lfs       f1, -0x2B3C(r2)
	  mr        r3, r31
	  lfs       f2, -0x2B28(r2)
	  li        r4, 0
	  lfs       f3, -0x2B48(r2)
	  lfs       f4, -0x2B24(r2)
	  bl        -0x176A50
	  mr        r3, r31
	  bl        -0x182780
	  cmpwi     r3, 0x3
	  bne-      .loc_0x50
	  mr        r3, r31
	  bl        0x1F40
	  b         .loc_0x6C

	.loc_0x50:
	  cmpwi     r3, 0x5
	  bne-      .loc_0x6C
	  lbz       r0, 0x2C2(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x6C
	  mr        r3, r31
	  bl        0x1D5C

	.loc_0x6C:
	  mr        r3, r31
	  bl        0x147C
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80289BC4
 * Size:	000084
 */
void Queen::Obj::ignoreAtari(Game::Creature*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  lbz       r0, 0x2C2(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x6C
	  lwz       r0, 0x1E0(r3)
	  rlwinm.   r0,r0,0,22,22
	  bne-      .loc_0x6C
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x64
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x7C(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x6C

	.loc_0x64:
	  li        r3, 0x1
	  b         .loc_0x70

	.loc_0x6C:
	  li        r3, 0

	.loc_0x70:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80289C48
 * Size:	000028
 */
void Queen::Obj::startCarcassMotion()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r4, 0x8
	  li        r5, 0
	  stw       r0, 0x14(r1)
	  bl        -0x184C58
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80289C70
 * Size:	000020
 */
void Queen::Obj::doStartMovie()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        0x20C4
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80289C90
 * Size:	000020
 */
void Queen::Obj::doEndMovie()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        0x1F8C
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80289CB0
 * Size:	0002EC
 */
void Queen::Obj::rollingAttack()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x150(r1)
	  mflr      r0
	  stw       r0, 0x154(r1)
	  stfd      f31, 0x140(r1)
	  psq_st    f31,0x148(r1),0,0
	  stfd      f30, 0x130(r1)
	  psq_st    f30,0x138(r1),0,0
	  stfd      f29, 0x120(r1)
	  psq_st    f29,0x128(r1),0,0
	  stfd      f28, 0x110(r1)
	  psq_st    f28,0x118(r1),0,0
	  stfd      f27, 0x100(r1)
	  psq_st    f27,0x108(r1),0,0
	  stfd      f26, 0xF0(r1)
	  psq_st    f26,0xF8(r1),0,0
	  stfd      f25, 0xE0(r1)
	  psq_st    f25,0xE8(r1),0,0
	  stfd      f24, 0xD0(r1)
	  psq_st    f24,0xD8(r1),0,0
	  stw       r31, 0xCC(r1)
	  stw       r30, 0xC8(r1)
	  mr        r31, r3
	  addi      r3, r1, 0x14
	  mr        r4, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  lfs       f28, 0x14(r1)
	  lwz       r12, 0x0(r31)
	  lfs       f27, 0x18(r1)
	  lwz       r12, 0x64(r12)
	  lfs       f26, 0x1C(r1)
	  mtctr     r12
	  bctrl
	  fmr       f2, f1
	  lwz       r3, 0xC0(r31)
	  lfs       f0, -0x2B48(r2)
	  lfs       f25, 0x5B4(r3)
	  fcmpo     cr0, f2, f0
	  lfs       f24, 0x5DC(r3)
	  bge-      .loc_0xB0
	  fneg      f2, f2

	.loc_0xB0:
	  lfs       f3, -0x2B20(r2)
	  lis       r3, 0x8050
	  lfs       f0, -0x2B48(r2)
	  addi      r4, r3, 0x71A0
	  fmuls     f2, f2, f3
	  fcmpo     cr0, f1, f0
	  fctiwz    f0, f2
	  stfd      f0, 0xA8(r1)
	  lwz       r0, 0xAC(r1)
	  rlwinm    r0,r0,3,18,28
	  add       r3, r4, r0
	  lfs       f30, 0x4(r3)
	  bge-      .loc_0x108
	  lfs       f0, -0x2B1C(r2)
	  fmuls     f0, f1, f0
	  fctiwz    f0, f0
	  stfd      f0, 0xB0(r1)
	  lwz       r0, 0xB4(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r4, r0
	  fneg      f29, f0
	  b         .loc_0x120

	.loc_0x108:
	  fmuls     f0, f1, f3
	  fctiwz    f0, f0
	  stfd      f0, 0xB8(r1)
	  lwz       r0, 0xBC(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f29, r4, r0

	.loc_0x120:
	  lfs       f1, 0x18C(r31)
	  fneg      f31, f30
	  lfs       f0, -0x2B18(r2)
	  addi      r3, r1, 0x40
	  stfs      f1, 0x30(r1)
	  addi      r4, r1, 0x30
	  lfs       f1, 0x190(r31)
	  stfs      f1, 0x34(r1)
	  lfs       f1, 0x194(r31)
	  stfs      f1, 0x38(r1)
	  stfs      f0, 0x3C(r1)
	  bl        -0x5BA5C
	  li        r0, 0x1
	  addi      r3, r1, 0x60
	  stb       r0, 0x5C(r1)
	  addi      r4, r1, 0x40
	  bl        -0x5BA30
	  addi      r3, r1, 0x60
	  bl        -0x5B9BC
	  b         .loc_0x284

	.loc_0x170:
	  addi      r3, r1, 0x60
	  bl        -0x5B8E0
	  lwz       r12, 0x0(r3)
	  mr        r30, r3
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x27C
	  mr        r4, r30
	  addi      r3, r1, 0x8
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, 0xC(r1)
	  lfs       f2, 0x10(r1)
	  fsubs     f3, f0, f27
	  lfs       f1, 0x8(r1)
	  lfs       f0, -0x2B48(r2)
	  fsubs     f4, f2, f26
	  fsubs     f2, f1, f28
	  fcmpo     cr0, f3, f0
	  ble-      .loc_0x1D8
	  fmr       f1, f3
	  b         .loc_0x1DC

	.loc_0x1D8:
	  fneg      f1, f3

	.loc_0x1DC:
	  lfs       f0, -0x2B38(r2)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x27C
	  lfs       f1, -0x2B48(r2)
	  fmuls     f3, f1, f3
	  fmadds    f0, f31, f2, f3
	  fmadds    f0, f29, f4, f0
	  fcmpo     cr0, f0, f1
	  ble-      .loc_0x204
	  b         .loc_0x208

	.loc_0x204:
	  fneg      f0, f0

	.loc_0x208:
	  fcmpo     cr0, f0, f24
	  bge-      .loc_0x27C
	  fmadds    f1, f29, f2, f3
	  lfs       f0, -0x2B48(r2)
	  fmadds    f1, f30, f4, f1
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x228
	  b         .loc_0x22C

	.loc_0x228:
	  fneg      f1, f1

	.loc_0x22C:
	  fcmpo     cr0, f1, f25
	  bge-      .loc_0x27C
	  lwz       r5, 0xC0(r31)
	  lis       r4, 0x804B
	  lis       r3, 0x804B
	  li        r0, 0
	  lfs       f0, 0x604(r5)
	  subi      r4, r4, 0x5D00
	  subi      r5, r3, 0x4CE0
	  mr        r3, r30
	  stw       r4, 0x20(r1)
	  addi      r4, r1, 0x20
	  stw       r31, 0x24(r1)
	  stw       r5, 0x20(r1)
	  stfs      f0, 0x28(r1)
	  stw       r0, 0x2C(r1)
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x1A4(r12)
	  mtctr     r12
	  bctrl

	.loc_0x27C:
	  addi      r3, r1, 0x60
	  bl        -0x5BA30

	.loc_0x284:
	  addi      r3, r1, 0x60
	  bl        -0x5BA04
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x170
	  psq_l     f31,0x148(r1),0,0
	  lfd       f31, 0x140(r1)
	  psq_l     f30,0x138(r1),0,0
	  lfd       f30, 0x130(r1)
	  psq_l     f29,0x128(r1),0,0
	  lfd       f29, 0x120(r1)
	  psq_l     f28,0x118(r1),0,0
	  lfd       f28, 0x110(r1)
	  psq_l     f27,0x108(r1),0,0
	  lfd       f27, 0x100(r1)
	  psq_l     f26,0xF8(r1),0,0
	  lfd       f26, 0xF0(r1)
	  psq_l     f25,0xE8(r1),0,0
	  lfd       f25, 0xE0(r1)
	  psq_l     f24,0xD8(r1),0,0
	  lfd       f24, 0xD0(r1)
	  lwz       r31, 0xCC(r1)
	  lwz       r0, 0x154(r1)
	  lwz       r30, 0xC8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x150
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80289F9C
 * Size:	0003A8
 */
void Queen::Obj::flickPikmin(float)
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
	  stw       r31, 0x7C(r1)
	  stw       r30, 0x78(r1)
	  stw       r29, 0x74(r1)
	  fmr       f30, f1
	  mr        r30, r3
	  lfs       f0, -0x2B14(r2)
	  mr        r4, r30
	  addi      r3, r1, 0x54
	  fadds     f31, f0, f30
	  bl        -0xEA380
	  li        r0, 0
	  lis       r3, 0x804B
	  subi      r4, r3, 0x437C
	  addi      r3, r1, 0x54
	  cmplwi    r0, 0
	  stw       r4, 0x8(r1)
	  stw       r0, 0x14(r1)
	  stw       r0, 0xC(r1)
	  stw       r3, 0x10(r1)
	  bne-      .loc_0x84
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x350

	.loc_0x84:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0xF0

	.loc_0x9C:
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
	  bne-      .loc_0x350
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0xF0:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x9C
	  b         .loc_0x350

	.loc_0x110:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  mr        r31, r3
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x294
	  lwz       r29, 0xF8(r31)
	  cmplwi    r29, 0
	  beq-      .loc_0x294
	  lis       r4, 0x6E6F
	  addi      r3, r29, 0x30
	  addi      r4, r4, 0x7365
	  bl        0x189340
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x194
	  lis       r4, 0x6865
	  addi      r3, r29, 0x30
	  addi      r4, r4, 0x6164
	  bl        0x189328
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x194
	  lis       r4, 0x626F
	  addi      r3, r29, 0x30
	  addi      r4, r4, 0x6431
	  bl        0x189310
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x1E4

	.loc_0x194:
	  lwz       r6, 0xC0(r30)
	  lis       r5, 0x804B
	  lis       r4, 0x804B
	  mr        r3, r31
	  lfs       f1, 0x4EC(r6)
	  subi      r5, r5, 0x5D00
	  lfs       f0, 0x4C4(r6)
	  addi      r0, r4, 0x4E04
	  addi      r4, r1, 0x40
	  stw       r5, 0x40(r1)
	  stw       r30, 0x44(r1)
	  stw       r0, 0x40(r1)
	  stfs      f0, 0x48(r1)
	  stfs      f1, 0x4C(r1)
	  stfs      f30, 0x50(r1)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x1A4(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x294

	.loc_0x1E4:
	  lis       r4, 0x626F
	  addi      r3, r29, 0x30
	  addi      r4, r4, 0x6435
	  bl        0x1892A8
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x24C
	  lwz       r6, 0xC0(r30)
	  lis       r5, 0x804B
	  lis       r4, 0x804B
	  mr        r3, r31
	  lfs       f1, 0x4EC(r6)
	  subi      r5, r5, 0x5D00
	  lfs       f0, 0x4C4(r6)
	  addi      r0, r4, 0x4E04
	  addi      r4, r1, 0x2C
	  stw       r5, 0x2C(r1)
	  stw       r30, 0x30(r1)
	  stw       r0, 0x2C(r1)
	  stfs      f0, 0x34(r1)
	  stfs      f1, 0x38(r1)
	  stfs      f31, 0x3C(r1)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x1A4(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x294

	.loc_0x24C:
	  lis       r3, 0x804B
	  lfs       f1, -0x2B48(r2)
	  subi      r0, r3, 0x5D00
	  lfs       f0, -0x2B24(r2)
	  lis       r3, 0x804B
	  stw       r0, 0x18(r1)
	  addi      r0, r3, 0x4E04
	  mr        r3, r31
	  stw       r30, 0x1C(r1)
	  addi      r4, r1, 0x18
	  stw       r0, 0x18(r1)
	  stfs      f1, 0x20(r1)
	  stfs      f1, 0x24(r1)
	  stfs      f0, 0x28(r1)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x1A4(r12)
	  mtctr     r12
	  bctrl

	.loc_0x294:
	  lwz       r0, 0x14(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x2C0
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x350

	.loc_0x2C0:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x334

	.loc_0x2E0:
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
	  bne-      .loc_0x350
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0x334:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x2E0

	.loc_0x350:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0xC(r1)
	  cmplw     r4, r3
	  bne+      .loc_0x110
	  addi      r3, r1, 0x54
	  li        r4, -0x1
	  bl        -0xEA5B0
	  psq_l     f31,0x98(r1),0,0
	  lfd       f31, 0x90(r1)
	  psq_l     f30,0x88(r1),0,0
	  lfd       f30, 0x80(r1)
	  lwz       r31, 0x7C(r1)
	  lwz       r30, 0x78(r1)
	  lwz       r0, 0xA4(r1)
	  lwz       r29, 0x74(r1)
	  mtlr      r0
	  addi      r1, r1, 0xA0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8028A344
 * Size:	0001A8
 */
void Queen::Obj::isRollingAttackLeft()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x60(r1)
	  mflr      r0
	  stw       r0, 0x64(r1)
	  stfd      f31, 0x50(r1)
	  psq_st    f31,0x58(r1),0,0
	  stfd      f30, 0x40(r1)
	  psq_st    f30,0x48(r1),0,0
	  stw       r31, 0x3C(r1)
	  stw       r30, 0x38(r1)
	  mr        r30, r3
	  lbz       r0, 0x2C3(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x140
	  li        r0, 0
	  stb       r0, 0x2C3(r30)
	  lwz       r3, -0x6D20(r13)
	  bl        -0x12F764
	  mr.       r31, r3
	  beq-      .loc_0x138
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, -0x2B10(r2)
	  lfs       f0, -0x2B48(r2)
	  fadds     f3, f2, f1
	  fmr       f1, f3
	  fcmpo     cr0, f3, f0
	  bge-      .loc_0x7C
	  fneg      f1, f3

	.loc_0x7C:
	  lfs       f2, -0x2B20(r2)
	  lis       r3, 0x8050
	  lfs       f0, -0x2B48(r2)
	  addi      r4, r3, 0x71A0
	  fmuls     f1, f1, f2
	  fcmpo     cr0, f3, f0
	  fctiwz    f0, f1
	  stfd      f0, 0x18(r1)
	  lwz       r0, 0x1C(r1)
	  rlwinm    r0,r0,3,18,28
	  add       r3, r4, r0
	  lfs       f31, 0x4(r3)
	  bge-      .loc_0xD4
	  lfs       f0, -0x2B1C(r2)
	  fmuls     f0, f3, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x20(r1)
	  lwz       r0, 0x24(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r4, r0
	  fneg      f30, f0
	  b         .loc_0xEC

	.loc_0xD4:
	  fmuls     f0, f3, f2
	  fctiwz    f0, f0
	  stfd      f0, 0x28(r1)
	  lwz       r0, 0x2C(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f30, r4, r0

	.loc_0xEC:
	  mr        r4, r31
	  addi      r3, r1, 0x8
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f1, 0x8(r1)
	  lfs       f0, 0x18C(r30)
	  lfs       f3, 0x10(r1)
	  lfs       f2, 0x194(r30)
	  fsubs     f0, f1, f0
	  lfs       f1, -0x2B48(r2)
	  fsubs     f2, f3, f2
	  fmadds    f0, f30, f0, f1
	  fmadds    f0, f31, f2, f0
	  fcmpo     cr0, f0, f1
	  ble-      .loc_0x138
	  li        r3, 0
	  b         .loc_0x180

	.loc_0x138:
	  li        r3, 0x1
	  b         .loc_0x180

	.loc_0x140:
	  bl        -0x1C0EE4
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x2C(r1)
	  lfd       f3, -0x2B00(r2)
	  stw       r0, 0x28(r1)
	  lfs       f2, -0x2B3C(r2)
	  lfd       f0, 0x28(r1)
	  lfs       f1, -0x2B0C(r2)
	  fsubs     f3, f0, f3
	  lfs       f0, -0x2B08(r2)
	  fmuls     f2, f2, f3
	  fdivs     f1, f2, f1
	  fcmpo     cr0, f1, f0
	  mfcr      r0
	  rlwinm    r3,r0,1,31,31

	.loc_0x180:
	  psq_l     f31,0x58(r1),0,0
	  lfd       f31, 0x50(r1)
	  psq_l     f30,0x48(r1),0,0
	  lfd       f30, 0x40(r1)
	  lwz       r31, 0x3C(r1)
	  lwz       r0, 0x64(r1)
	  lwz       r30, 0x38(r1)
	  mtlr      r0
	  addi      r1, r1, 0x60
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8028A4EC
 * Size:	0002D4
 */
void Queen::Obj::createCrashFallRock()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x140(r1)
	  mflr      r0
	  stw       r0, 0x144(r1)
	  stfd      f31, 0x130(r1)
	  psq_st    f31,0x138(r1),0,0
	  stfd      f30, 0x120(r1)
	  psq_st    f30,0x128(r1),0,0
	  stfd      f29, 0x110(r1)
	  psq_st    f29,0x118(r1),0,0
	  stfd      f28, 0x100(r1)
	  psq_st    f28,0x108(r1),0,0
	  stfd      f27, 0xF0(r1)
	  psq_st    f27,0xF8(r1),0,0
	  stfd      f26, 0xE0(r1)
	  psq_st    f26,0xE8(r1),0,0
	  stfd      f25, 0xD0(r1)
	  psq_st    f25,0xD8(r1),0,0
	  stfd      f24, 0xC0(r1)
	  psq_st    f24,0xC8(r1),0,0
	  stfd      f23, 0xB0(r1)
	  psq_st    f23,0xB8(r1),0,0
	  stfd      f22, 0xA0(r1)
	  psq_st    f22,0xA8(r1),0,0
	  stfd      f21, 0x90(r1)
	  psq_st    f21,0x98(r1),0,0
	  stfd      f20, 0x80(r1)
	  psq_st    f20,0x88(r1),0,0
	  stfd      f19, 0x70(r1)
	  psq_st    f19,0x78(r1),0,0
	  stmw      r27, 0x5C(r1)
	  lwz       r4, -0x6C18(r13)
	  mr        r31, r3
	  cmplwi    r4, 0
	  beq-      .loc_0x258
	  lbz       r0, 0x48(r4)
	  cmplwi    r0, 0
	  beq-      .loc_0x258
	  lwz       r0, 0x44(r4)
	  cmpwi     r0, 0
	  bne-      .loc_0x258
	  lwz       r3, 0x58(r4)
	  cmplwi    r3, 0
	  beq-      .loc_0x258
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x78(r12)
	  mtctr     r12
	  bctrl
	  subis     r0, r3, 0x6C5F
	  cmplwi    r0, 0x3032
	  bne-      .loc_0x258
	  lfs       f3, 0x1FC(r31)
	  lfs       f0, -0x2B48(r2)
	  fmr       f1, f3
	  fcmpo     cr0, f3, f0
	  bge-      .loc_0xE0
	  fneg      f1, f3

	.loc_0xE0:
	  lfs       f2, -0x2B20(r2)
	  lis       r3, 0x8050
	  lfs       f0, -0x2B48(r2)
	  addi      r4, r3, 0x71A0
	  fmuls     f1, f1, f2
	  fcmpo     cr0, f3, f0
	  fctiwz    f0, f1
	  stfd      f0, 0x40(r1)
	  lwz       r0, 0x44(r1)
	  rlwinm    r0,r0,3,18,28
	  add       r3, r4, r0
	  lfs       f24, 0x4(r3)
	  bge-      .loc_0x138
	  lfs       f0, -0x2B1C(r2)
	  fmuls     f0, f3, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x48(r1)
	  lwz       r0, 0x4C(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r4, r0
	  fneg      f23, f0
	  b         .loc_0x150

	.loc_0x138:
	  fmuls     f0, f3, f2
	  fctiwz    f0, f0
	  stfd      f0, 0x50(r1)
	  lwz       r0, 0x54(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f23, r4, r0

	.loc_0x150:
	  lfs       f2, -0x2AF8(r2)
	  fneg      f27, f23
	  lfs       f1, 0x1A0(r31)
	  li        r4, 0x13
	  lfs       f0, 0x198(r31)
	  fmadds    f25, f2, f24, f1
	  lwz       r3, -0x6E20(r13)
	  fmadds    f26, f2, f23, f0
	  bl        -0x17C9B8
	  mr.       r28, r3
	  beq-      .loc_0x258
	  lfd       f28, -0x2B00(r2)
	  li        r27, 0
	  lfs       f29, -0x2AF4(r2)
	  lis       r29, 0x4330
	  lfs       f30, -0x2B0C(r2)
	  lfs       f31, -0x2B38(r2)
	  lfs       f21, -0x2B48(r2)
	  lfs       f22, -0x2B44(r2)

	.loc_0x19C:
	  bl        -0x1C10E8
	  xoris     r3, r3, 0x8000
	  xoris     r0, r27, 0x8000
	  stw       r3, 0x54(r1)
	  addi      r3, r1, 0x8
	  stw       r29, 0x50(r1)
	  lfd       f0, 0x50(r1)
	  stw       r0, 0x4C(r1)
	  fsubs     f0, f0, f28
	  stw       r29, 0x48(r1)
	  fmuls     f1, f29, f0
	  lfd       f0, 0x48(r1)
	  fsubs     f0, f0, f28
	  fdivs     f20, f1, f30
	  fmsubs    f19, f31, f0, f29
	  bl        -0x15BAA0
	  fmadds    f1, f23, f20, f26
	  li        r0, 0x13
	  fmadds    f0, f24, f20, f25
	  stw       r0, 0x30(r1)
	  mr        r3, r28
	  addi      r4, r1, 0x8
	  fmadds    f1, f24, f19, f1
	  stfs      f21, 0xC(r1)
	  fmadds    f0, f27, f19, f0
	  stfs      f1, 0x8(r1)
	  stfs      f0, 0x10(r1)
	  lfs       f0, 0x1FC(r31)
	  stfs      f0, 0x14(r1)
	  stfs      f22, 0x34(r1)
	  lwz       r12, 0x0(r28)
	  lwz       r12, 0x70(r12)
	  mtctr     r12
	  bctrl
	  mr.       r30, r3
	  beq-      .loc_0x24C
	  li        r4, 0
	  bl        -0x14F754
	  lwz       r0, 0x1E0(r30)
	  lfs       f0, -0x2AF0(r2)
	  rlwinm    r0,r0,0,26,24
	  stw       r0, 0x1E0(r30)
	  lwz       r3, 0xC0(r30)
	  stfs      f0, 0x3D4(r3)

	.loc_0x24C:
	  addi      r27, r27, 0x1
	  cmpwi     r27, 0x7
	  blt+      .loc_0x19C

	.loc_0x258:
	  psq_l     f31,0x138(r1),0,0
	  lfd       f31, 0x130(r1)
	  psq_l     f30,0x128(r1),0,0
	  lfd       f30, 0x120(r1)
	  psq_l     f29,0x118(r1),0,0
	  lfd       f29, 0x110(r1)
	  psq_l     f28,0x108(r1),0,0
	  lfd       f28, 0x100(r1)
	  psq_l     f27,0xF8(r1),0,0
	  lfd       f27, 0xF0(r1)
	  psq_l     f26,0xE8(r1),0,0
	  lfd       f26, 0xE0(r1)
	  psq_l     f25,0xD8(r1),0,0
	  lfd       f25, 0xD0(r1)
	  psq_l     f24,0xC8(r1),0,0
	  lfd       f24, 0xC0(r1)
	  psq_l     f23,0xB8(r1),0,0
	  lfd       f23, 0xB0(r1)
	  psq_l     f22,0xA8(r1),0,0
	  lfd       f22, 0xA0(r1)
	  psq_l     f21,0x98(r1),0,0
	  lfd       f21, 0x90(r1)
	  psq_l     f20,0x88(r1),0,0
	  lfd       f20, 0x80(r1)
	  psq_l     f19,0x78(r1),0,0
	  lfd       f19, 0x70(r1)
	  lmw       r27, 0x5C(r1)
	  lwz       r0, 0x144(r1)
	  mtlr      r0
	  addi      r1, r1, 0x140
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8028A7C0
 * Size:	00019C
 */
void Queen::Obj::createBabyChappy()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x70(r1)
	  mflr      r0
	  li        r4, 0x1F
	  stw       r0, 0x74(r1)
	  stw       r31, 0x6C(r1)
	  stw       r30, 0x68(r1)
	  mr        r30, r3
	  lwz       r3, -0x6E20(r13)
	  bl        -0x17CB3C
	  mr.       r31, r3
	  beq-      .loc_0x184
	  addi      r3, r1, 0x14
	  bl        -0x15BBCC
	  lis       r4, 0x8048
	  lwz       r3, 0x174(r30)
	  addi      r4, r4, 0x7FF8
	  bl        0x1B47E4
	  bl        0x19F09C
	  lfs       f2, 0x2C(r3)
	  lfs       f1, 0x1C(r3)
	  lfs       f0, 0xC(r3)
	  mr        r3, r30
	  stfs      f0, 0x14(r1)
	  stfs      f1, 0x18(r1)
	  stfs      f2, 0x1C(r1)
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, -0x2B14(r2)
	  mr        r3, r31
	  addi      r4, r1, 0x14
	  fadds     f0, f0, f1
	  stfs      f0, 0x20(r1)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x70(r12)
	  mtctr     r12
	  bctrl
	  mr.       r31, r3
	  beq-      .loc_0x184
	  lfs       f5, 0x20(r1)
	  lfs       f0, -0x2B48(r2)
	  fmr       f1, f5
	  lwz       r5, 0xC0(r30)
	  fcmpo     cr0, f5, f0
	  bge-      .loc_0xBC
	  fneg      f1, f5

	.loc_0xBC:
	  lfs       f2, -0x2B20(r2)
	  lis       r3, 0x8050
	  lfs       f0, -0x2B48(r2)
	  addi      r4, r3, 0x71A0
	  fmuls     f1, f1, f2
	  lfs       f3, 0x44C(r5)
	  fcmpo     cr0, f5, f0
	  fctiwz    f0, f1
	  stfd      f0, 0x48(r1)
	  lwz       r0, 0x4C(r1)
	  rlwinm    r0,r0,3,18,28
	  add       r3, r4, r0
	  lfs       f0, 0x4(r3)
	  fmuls     f4, f3, f0
	  bge-      .loc_0x11C
	  lfs       f0, -0x2B1C(r2)
	  fmuls     f0, f5, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x50(r1)
	  lwz       r0, 0x54(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r4, r0
	  fneg      f0, f0
	  b         .loc_0x134

	.loc_0x11C:
	  fmuls     f0, f5, f2
	  fctiwz    f0, f0
	  stfd      f0, 0x58(r1)
	  lwz       r0, 0x5C(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r4, r0

	.loc_0x134:
	  fmuls     f1, f3, f0
	  lfs       f0, -0x2B48(r2)
	  stfs      f4, 0x10(r1)
	  mr        r3, r31
	  li        r4, 0
	  stfs      f1, 0x8(r1)
	  stfs      f0, 0xC(r1)
	  bl        -0x14F948
	  mr        r3, r31
	  addi      r4, r1, 0x8
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x68(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, 0x8(r1)
	  stfs      f0, 0x1D4(r31)
	  lfs       f0, 0xC(r1)
	  stfs      f0, 0x1D8(r31)
	  lfs       f0, 0x10(r1)
	  stfs      f0, 0x1DC(r31)

	.loc_0x184:
	  lwz       r0, 0x74(r1)
	  lwz       r31, 0x6C(r1)
	  lwz       r30, 0x68(r1)
	  mtlr      r0
	  addi      r1, r1, 0x70
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8028A95C
 * Size:	00004C
 */
void EnemyIterator<Game::Baby::Obj>::isDone()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r3, 0x8(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x4(r31)
	  sub       r0, r3, r0
	  cntlzw    r0, r0
	  rlwinm    r3,r0,27,5,31
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8028A9A8
 * Size:	000274
 */
void Queen::Obj::updateCreateBaby()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  mr        r30, r3
	  lbz       r0, 0x2C0(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x25C
	  lwz       r3, -0x6514(r13)
	  li        r31, 0
	  lfs       f1, 0x2CC(r30)
	  li        r4, 0x1F
	  lfs       f0, 0x54(r3)
	  fadds     f0, f1, f0
	  stfs      f0, 0x2CC(r30)
	  lwz       r3, -0x6E20(r13)
	  bl        -0x17CD48
	  cmplwi    r3, 0
	  beq-      .loc_0x22C
	  beq-      .loc_0x58
	  addi      r3, r3, 0x4

	.loc_0x58:
	  li        r0, 0
	  lis       r4, 0x804D
	  subi      r4, r4, 0x5FFC
	  stw       r0, 0x14(r1)
	  cmplwi    r0, 0
	  stw       r4, 0x8(r1)
	  stw       r0, 0xC(r1)
	  stw       r3, 0x10(r1)
	  bne-      .loc_0x94
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x20C

	.loc_0x94:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x100

	.loc_0xAC:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x20C
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0x100:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0xAC
	  b         .loc_0x20C

	.loc_0x120:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x150
	  addi      r31, r31, 0x1

	.loc_0x150:
	  lwz       r0, 0x14(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x17C
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x20C

	.loc_0x17C:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1F0

	.loc_0x19C:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x20C
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0x1F0:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x19C

	.loc_0x20C:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0xC(r1)
	  cmplw     r4, r3
	  bne+      .loc_0x120

	.loc_0x22C:
	  lwz       r3, 0xC0(r30)
	  lwz       r0, 0x894(r3)
	  cmpw      r31, r0
	  blt-      .loc_0x248
	  li        r0, 0
	  stb       r0, 0x2C1(r30)
	  b         .loc_0x25C

	.loc_0x248:
	  lwz       r0, 0x8BC(r3)
	  cmpw      r31, r0
	  bgt-      .loc_0x25C
	  li        r0, 0x1
	  stb       r0, 0x2C1(r30)

	.loc_0x25C:
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
 * Address:	8028AC1C
 * Size:	00003C
 */
void Queen::Obj::isCreateBaby()
{
	/*
	.loc_0x0:
	  lbz       r0, 0x2C0(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x34
	  lbz       r0, 0x2C1(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x34
	  lwz       r4, 0xC0(r3)
	  lfs       f1, 0x2CC(r3)
	  lfs       f0, 0x844(r4)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x34
	  li        r3, 0x1
	  blr

	.loc_0x34:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8028AC58
 * Size:	000018
 */
void Queen::Obj::isHitCounterUp()
{
	/*
	.loc_0x0:
	  lfs       f1, 0x20C(r3)
	  lfs       f0, 0x2D0(r3)
	  fcmpo     cr0, f1, f0
	  mfcr      r0
	  rlwinm    r3,r0,2,31,31
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8028AC70
 * Size:	000028
 */
void Queen::Obj::resetJointShadow()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r4, r3
	  stw       r0, 0x14(r1)
	  lwz       r3, -0x6980(r13)
	  bl        -0x48DEC
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8028AC98
 * Size:	000040
 */
void Queen::Obj::releaseJointShadow()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  mr        r4, r31
	  lwz       r3, -0x6980(r13)
	  bl        -0x48F80
	  lwz       r3, -0x6980(r13)
	  mr        r4, r31
	  bl        -0x48DBC
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8028ACD8
 * Size:	0000C8
 */
void Queen::Obj::startBossChargeBGM()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  li        r31, 0
	  stw       r30, 0x8(r1)
	  lwz       r30, 0x28C(r3)
	  lwz       r12, 0x28(r30)
	  mr        r3, r30
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  cmpwi     r3, 0x5
	  beq-      .loc_0x70
	  mr        r3, r30
	  lwz       r12, 0x28(r30)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  cmpwi     r3, 0x6
	  beq-      .loc_0x70
	  mr        r3, r30
	  lwz       r12, 0x28(r30)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  cmpwi     r3, 0x7
	  bne-      .loc_0x74

	.loc_0x70:
	  li        r31, 0x1

	.loc_0x74:
	  rlwinm.   r0,r31,0,24,31
	  bne-      .loc_0x98
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  subi      r3, r3, 0x7FFC
	  li        r4, 0x454
	  subi      r5, r5, 0x7FE4
	  crclr     6, 0x6
	  bl        -0x26072C

	.loc_0x98:
	  mr        r3, r30
	  li        r4, 0x2
	  lwz       r12, 0x28(r30)
	  lwz       r12, 0xD4(r12)
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
 * Address:	8028ADA0
 * Size:	0000DC
 */
void Queen::Obj::startBossAttackLoopBGM()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  lbz       r0, 0x2C5(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0xC4
	  li        r0, 0x1
	  li        r31, 0
	  stb       r0, 0x2C5(r3)
	  lwz       r30, 0x28C(r3)
	  mr        r3, r30
	  lwz       r12, 0x28(r30)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  cmpwi     r3, 0x5
	  beq-      .loc_0x84
	  mr        r3, r30
	  lwz       r12, 0x28(r30)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  cmpwi     r3, 0x6
	  beq-      .loc_0x84
	  mr        r3, r30
	  lwz       r12, 0x28(r30)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  cmpwi     r3, 0x7
	  bne-      .loc_0x88

	.loc_0x84:
	  li        r31, 0x1

	.loc_0x88:
	  rlwinm.   r0,r31,0,24,31
	  bne-      .loc_0xAC
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  subi      r3, r3, 0x7FFC
	  li        r4, 0x454
	  subi      r5, r5, 0x7FE4
	  crclr     6, 0x6
	  bl        -0x260808

	.loc_0xAC:
	  mr        r3, r30
	  li        r4, 0x8
	  lwz       r12, 0x28(r30)
	  lwz       r12, 0xD4(r12)
	  mtctr     r12
	  bctrl

	.loc_0xC4:
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
 * Address:	8028AE7C
 * Size:	0000D8
 */
void Queen::Obj::finishBossAttackLoopBGM()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  lbz       r0, 0x2C5(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0xC0
	  li        r31, 0
	  stb       r31, 0x2C5(r3)
	  lwz       r30, 0x28C(r3)
	  lwz       r12, 0x28(r30)
	  mr        r3, r30
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  cmpwi     r3, 0x5
	  beq-      .loc_0x80
	  mr        r3, r30
	  lwz       r12, 0x28(r30)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  cmpwi     r3, 0x6
	  beq-      .loc_0x80
	  mr        r3, r30
	  lwz       r12, 0x28(r30)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  cmpwi     r3, 0x7
	  bne-      .loc_0x84

	.loc_0x80:
	  li        r31, 0x1

	.loc_0x84:
	  rlwinm.   r0,r31,0,24,31
	  bne-      .loc_0xA8
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  subi      r3, r3, 0x7FFC
	  li        r4, 0x454
	  subi      r5, r5, 0x7FE4
	  crclr     6, 0x6
	  bl        -0x2608E0

	.loc_0xA8:
	  mr        r3, r30
	  li        r4, 0x1
	  lwz       r12, 0x28(r30)
	  lwz       r12, 0xD4(r12)
	  mtctr     r12
	  bctrl

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
 * Address:	8028AF54
 * Size:	0000D4
 */
void Queen::Obj::startStoneStateBossAttackLoopBGM()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  lbz       r0, 0x2C5(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0xBC
	  lwz       r30, 0x28C(r3)
	  li        r31, 0
	  mr        r3, r30
	  lwz       r12, 0x28(r30)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  cmpwi     r3, 0x5
	  beq-      .loc_0x7C
	  mr        r3, r30
	  lwz       r12, 0x28(r30)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  cmpwi     r3, 0x6
	  beq-      .loc_0x7C
	  mr        r3, r30
	  lwz       r12, 0x28(r30)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  cmpwi     r3, 0x7
	  bne-      .loc_0x80

	.loc_0x7C:
	  li        r31, 0x1

	.loc_0x80:
	  rlwinm.   r0,r31,0,24,31
	  bne-      .loc_0xA4
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  subi      r3, r3, 0x7FFC
	  li        r4, 0x454
	  subi      r5, r5, 0x7FE4
	  crclr     6, 0x6
	  bl        -0x2609B4

	.loc_0xA4:
	  mr        r3, r30
	  li        r4, 0x1
	  lwz       r12, 0x28(r30)
	  lwz       r12, 0xD4(r12)
	  mtctr     r12
	  bctrl

	.loc_0xBC:
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
 * Address:	8028B028
 * Size:	0000D4
 */
void Queen::Obj::finishStoneStateBossAttackLoopBGM()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  lbz       r0, 0x2C5(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0xBC
	  lwz       r30, 0x28C(r3)
	  li        r31, 0
	  mr        r3, r30
	  lwz       r12, 0x28(r30)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  cmpwi     r3, 0x5
	  beq-      .loc_0x7C
	  mr        r3, r30
	  lwz       r12, 0x28(r30)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  cmpwi     r3, 0x6
	  beq-      .loc_0x7C
	  mr        r3, r30
	  lwz       r12, 0x28(r30)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  cmpwi     r3, 0x7
	  bne-      .loc_0x80

	.loc_0x7C:
	  li        r31, 0x1

	.loc_0x80:
	  rlwinm.   r0,r31,0,24,31
	  bne-      .loc_0xA4
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  subi      r3, r3, 0x7FFC
	  li        r4, 0x454
	  subi      r5, r5, 0x7FE4
	  crclr     6, 0x6
	  bl        -0x260A88

	.loc_0xA4:
	  mr        r3, r30
	  li        r4, 0x8
	  lwz       r12, 0x28(r30)
	  lwz       r12, 0xD4(r12)
	  mtctr     r12
	  bctrl

	.loc_0xBC:
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
 * Address:	8028B0FC
 * Size:	0000FC
 */
void Queen::Obj::updateBossBGM()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  li        r31, 0
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  lwz       r30, 0x28C(r3)
	  lwz       r12, 0x28(r30)
	  mr        r3, r30
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  cmpwi     r3, 0x5
	  beq-      .loc_0x78
	  mr        r3, r30
	  lwz       r12, 0x28(r30)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  cmpwi     r3, 0x6
	  beq-      .loc_0x78
	  mr        r3, r30
	  lwz       r12, 0x28(r30)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  cmpwi     r3, 0x7
	  bne-      .loc_0x7C

	.loc_0x78:
	  li        r31, 0x1

	.loc_0x7C:
	  rlwinm.   r0,r31,0,24,31
	  bne-      .loc_0xA0
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  subi      r3, r3, 0x7FFC
	  li        r4, 0x454
	  subi      r5, r5, 0x7FE4
	  crclr     6, 0x6
	  bl        -0x260B58

	.loc_0xA0:
	  lwz       r0, 0x1F4(r29)
	  cmpwi     r0, 0
	  beq-      .loc_0xC8
	  mr        r3, r30
	  li        r4, 0x1
	  lwz       r12, 0x28(r30)
	  lwz       r12, 0xD8(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0xE0

	.loc_0xC8:
	  mr        r3, r30
	  li        r4, 0
	  lwz       r12, 0x28(r30)
	  lwz       r12, 0xD8(r12)
	  mtctr     r12
	  bctrl

	.loc_0xE0:
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
 * Address:	8028B1F8
 * Size:	0000A8
 */
void Queen::Obj::resetMidBossAppearBGM()
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
	  cmplwi    r4, 0
	  beq-      .loc_0x90
	  lbz       r0, 0x48(r4)
	  cmplwi    r0, 0
	  beq-      .loc_0x90
	  lwz       r31, 0x28C(r30)
	  mr        r3, r31
	  lwz       r12, 0x28(r31)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  cmpwi     r3, 0x6
	  beq-      .loc_0x6C
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  subi      r3, r3, 0x7FFC
	  li        r4, 0x45A
	  subi      r5, r5, 0x7FE4
	  crclr     6, 0x6
	  bl        -0x260C20

	.loc_0x6C:
	  mr        r3, r31
	  li        r4, 0
	  bl        0x1D4784
	  lbz       r0, 0x2C0(r30)
	  cmplwi    r0, 0
	  beq-      .loc_0x90
	  li        r0, 0x1
	  stb       r0, 0x2C4(r30)
	  stb       r0, 0x118(r31)

	.loc_0x90:
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
 * Address:	8028B2A0
 * Size:	000080
 */
void Queen::Obj::setMidBossAppearBGM()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  lbz       r0, 0x2C4(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x6C
	  li        r0, 0x1
	  stb       r0, 0x2C4(r3)
	  lwz       r31, 0x28C(r3)
	  mr        r3, r31
	  lwz       r12, 0x28(r31)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  cmpwi     r3, 0x6
	  beq-      .loc_0x60
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  subi      r3, r3, 0x7FFC
	  li        r4, 0x45A
	  subi      r5, r5, 0x7FE4
	  crclr     6, 0x6
	  bl        -0x260CBC

	.loc_0x60:
	  mr        r3, r31
	  li        r4, 0x1
	  bl        0x1D46E8

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
 * Address:	8028B320
 * Size:	000534
 */
void Queen::Obj::createEffect()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  li        r3, 0x14
	  stw       r30, 0x8(r1)
	  bl        -0x267498
	  cmplwi    r3, 0
	  beq-      .loc_0x9C
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
	  lis       r4, 0x804D
	  addi      r0, r5, 0x14
	  stw       r5, 0x0(r3)
	  subi      r4, r4, 0x6048
	  li        r9, 0
	  li        r8, 0x2B2
	  stw       r0, 0x4(r3)
	  addi      r6, r7, 0x14
	  li        r5, 0x197
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

	.loc_0x9C:
	  stw       r3, 0x2E0(r31)
	  li        r3, 0x4C
	  bl        -0x267520
	  mr.       r30, r3
	  beq-      .loc_0xD4
	  addi      r4, r31, 0x18C
	  addi      r5, r31, 0x1FC
	  li        r6, 0x19B
	  li        r7, 0x19D
	  li        r8, 0x19F
	  bl        0x1256E0
	  lis       r3, 0x804D
	  subi      r0, r3, 0x6064
	  stw       r0, 0x0(r30)

	.loc_0xD4:
	  stw       r30, 0x2E4(r31)
	  li        r3, 0x4C
	  bl        -0x267558
	  mr.       r30, r3
	  beq-      .loc_0x10C
	  addi      r4, r31, 0x18C
	  addi      r5, r31, 0x1FC
	  li        r6, 0x19A
	  li        r7, 0x19C
	  li        r8, 0x19E
	  bl        0x1256A8
	  lis       r3, 0x804D
	  subi      r0, r3, 0x6080
	  stw       r0, 0x0(r30)

	.loc_0x10C:
	  stw       r30, 0x2E8(r31)
	  li        r3, 0x34
	  bl        -0x267590
	  mr.       r30, r3
	  beq-      .loc_0x140
	  addi      r4, r31, 0x18C
	  addi      r5, r31, 0x1FC
	  li        r6, 0x198
	  li        r7, 0x199
	  bl        0x12557C
	  lis       r3, 0x804D
	  subi      r0, r3, 0x609C
	  stw       r0, 0x0(r30)

	.loc_0x140:
	  stw       r30, 0x2EC(r31)
	  li        r3, 0x18
	  bl        -0x2675C4
	  cmplwi    r3, 0
	  beq-      .loc_0x1D4
	  lis       r4, 0x804B
	  lis       r5, 0x804A
	  subi      r0, r4, 0x5808
	  lis       r4, 0x804E
	  stw       r0, 0x0(r3)
	  subi      r0, r5, 0x1D84
	  addi      r5, r4, 0x698C
	  lis       r4, 0x804E
	  stw       r0, 0x4(r3)
	  addi      r9, r4, 0x68F4
	  lis       r4, 0x804D
	  addi      r0, r5, 0x14
	  stw       r5, 0x0(r3)
	  subi      r4, r4, 0x60E8
	  li        r11, 0
	  li        r10, 0x2B2
	  stw       r0, 0x4(r3)
	  addi      r8, r9, 0x14
	  addi      r7, r31, 0x18C
	  addi      r6, r31, 0x1FC
	  stw       r11, 0x8(r3)
	  li        r5, 0x18D
	  addi      r0, r4, 0x14
	  sth       r10, 0xC(r3)
	  stb       r11, 0xE(r3)
	  stw       r9, 0x0(r3)
	  stw       r8, 0x4(r3)
	  stw       r7, 0x10(r3)
	  stw       r6, 0x14(r3)
	  sth       r5, 0xC(r3)
	  stw       r4, 0x0(r3)
	  stw       r0, 0x4(r3)

	.loc_0x1D4:
	  stw       r3, 0x2F0(r31)
	  li        r3, 0x18
	  bl        -0x267658
	  cmplwi    r3, 0
	  beq-      .loc_0x268
	  lis       r4, 0x804B
	  lis       r5, 0x804A
	  subi      r0, r4, 0x5808
	  lis       r4, 0x804E
	  stw       r0, 0x0(r3)
	  subi      r0, r5, 0x1D84
	  addi      r5, r4, 0x698C
	  lis       r4, 0x804E
	  stw       r0, 0x4(r3)
	  addi      r9, r4, 0x68F4
	  lis       r4, 0x804D
	  addi      r0, r5, 0x14
	  stw       r5, 0x0(r3)
	  subi      r4, r4, 0x6134
	  li        r11, 0
	  li        r10, 0x2B2
	  stw       r0, 0x4(r3)
	  addi      r8, r9, 0x14
	  addi      r7, r31, 0x18C
	  addi      r6, r31, 0x1FC
	  stw       r11, 0x8(r3)
	  li        r5, 0x18C
	  addi      r0, r4, 0x14
	  sth       r10, 0xC(r3)
	  stb       r11, 0xE(r3)
	  stw       r9, 0x0(r3)
	  stw       r8, 0x4(r3)
	  stw       r7, 0x10(r3)
	  stw       r6, 0x14(r3)
	  sth       r5, 0xC(r3)
	  stw       r4, 0x0(r3)
	  stw       r0, 0x4(r3)

	.loc_0x268:
	  stw       r3, 0x2F4(r31)
	  li        r3, 0x18
	  bl        -0x2676EC
	  cmplwi    r3, 0
	  beq-      .loc_0x2FC
	  lis       r4, 0x804B
	  lis       r5, 0x804A
	  subi      r0, r4, 0x5808
	  lis       r4, 0x804E
	  stw       r0, 0x0(r3)
	  subi      r0, r5, 0x1D84
	  addi      r5, r4, 0x698C
	  lis       r4, 0x804E
	  stw       r0, 0x4(r3)
	  addi      r9, r4, 0x68F4
	  lis       r4, 0x804D
	  addi      r0, r5, 0x14
	  stw       r5, 0x0(r3)
	  subi      r4, r4, 0x6180
	  li        r11, 0
	  li        r10, 0x2B2
	  stw       r0, 0x4(r3)
	  addi      r8, r9, 0x14
	  addi      r7, r31, 0x18C
	  addi      r6, r31, 0x1FC
	  stw       r11, 0x8(r3)
	  li        r5, 0x18E
	  addi      r0, r4, 0x14
	  sth       r10, 0xC(r3)
	  stb       r11, 0xE(r3)
	  stw       r9, 0x0(r3)
	  stw       r8, 0x4(r3)
	  stw       r7, 0x10(r3)
	  stw       r6, 0x14(r3)
	  sth       r5, 0xC(r3)
	  stw       r4, 0x0(r3)
	  stw       r0, 0x4(r3)

	.loc_0x2FC:
	  stw       r3, 0x2F8(r31)
	  li        r3, 0x18
	  bl        -0x267780
	  cmplwi    r3, 0
	  beq-      .loc_0x390
	  lis       r4, 0x804B
	  lis       r5, 0x804A
	  subi      r0, r4, 0x5808
	  lis       r4, 0x804E
	  stw       r0, 0x0(r3)
	  subi      r0, r5, 0x1D84
	  addi      r5, r4, 0x698C
	  lis       r4, 0x804E
	  stw       r0, 0x4(r3)
	  addi      r9, r4, 0x68F4
	  lis       r4, 0x804D
	  addi      r0, r5, 0x14
	  stw       r5, 0x0(r3)
	  subi      r4, r4, 0x61CC
	  li        r11, 0
	  li        r10, 0x2B2
	  stw       r0, 0x4(r3)
	  addi      r8, r9, 0x14
	  addi      r7, r31, 0x18C
	  addi      r6, r31, 0x1FC
	  stw       r11, 0x8(r3)
	  li        r5, 0x18F
	  addi      r0, r4, 0x14
	  sth       r10, 0xC(r3)
	  stb       r11, 0xE(r3)
	  stw       r9, 0x0(r3)
	  stw       r8, 0x4(r3)
	  stw       r7, 0x10(r3)
	  stw       r6, 0x14(r3)
	  sth       r5, 0xC(r3)
	  stw       r4, 0x0(r3)
	  stw       r0, 0x4(r3)

	.loc_0x390:
	  stw       r3, 0x2FC(r31)
	  li        r3, 0x34
	  bl        -0x267814
	  mr.       r30, r3
	  beq-      .loc_0x3C4
	  addi      r4, r31, 0x18C
	  addi      r5, r31, 0x1FC
	  li        r6, 0x194
	  li        r7, 0x195
	  bl        0x1252F8
	  lis       r3, 0x804D
	  subi      r0, r3, 0x61E8
	  stw       r0, 0x0(r30)

	.loc_0x3C4:
	  stw       r30, 0x300(r31)
	  li        r3, 0x54
	  bl        -0x267848
	  mr.       r30, r3
	  beq-      .loc_0x3FC
	  li        r4, 0
	  li        r5, 0x190
	  li        r6, 0x191
	  li        r7, 0x192
	  li        r8, 0x193
	  bl        0x124F50
	  lis       r3, 0x804D
	  subi      r0, r3, 0x6204
	  stw       r0, 0x0(r30)

	.loc_0x3FC:
	  stw       r30, 0x304(r31)
	  li        r3, 0x18
	  bl        -0x267880
	  cmplwi    r3, 0
	  beq-      .loc_0x490
	  lis       r4, 0x804B
	  lis       r5, 0x804A
	  subi      r0, r4, 0x5808
	  lis       r4, 0x804E
	  stw       r0, 0x0(r3)
	  subi      r0, r5, 0x1D84
	  addi      r5, r4, 0x698C
	  lis       r4, 0x804E
	  stw       r0, 0x4(r3)
	  addi      r9, r4, 0x68F4
	  lis       r4, 0x804D
	  addi      r0, r5, 0x14
	  stw       r5, 0x0(r3)
	  subi      r4, r4, 0x6250
	  li        r11, 0
	  li        r10, 0x2B2
	  stw       r0, 0x4(r3)
	  addi      r8, r9, 0x14
	  addi      r7, r31, 0x18C
	  addi      r6, r31, 0x1FC
	  stw       r11, 0x8(r3)
	  li        r5, 0x1A0
	  addi      r0, r4, 0x14
	  sth       r10, 0xC(r3)
	  stb       r11, 0xE(r3)
	  stw       r9, 0x0(r3)
	  stw       r8, 0x4(r3)
	  stw       r7, 0x10(r3)
	  stw       r6, 0x14(r3)
	  sth       r5, 0xC(r3)
	  stw       r4, 0x0(r3)
	  stw       r0, 0x4(r3)

	.loc_0x490:
	  stw       r3, 0x308(r31)
	  li        r3, 0x14
	  bl        -0x267914
	  cmplwi    r3, 0
	  beq-      .loc_0x518
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
	  lis       r4, 0x804D
	  addi      r0, r5, 0x14
	  stw       r5, 0x0(r3)
	  subi      r4, r4, 0x629C
	  li        r9, 0
	  li        r8, 0x2B2
	  stw       r0, 0x4(r3)
	  addi      r6, r7, 0x14
	  li        r5, 0x196
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

	.loc_0x518:
	  stw       r3, 0x30C(r31)
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
 * Address:	8028B854
 * Size:	000078
 */
void Queen::Obj::setupEffect()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lis       r3, 0x8048
	  addi      r4, r3, 0x7FF8
	  lwz       r3, 0x174(r31)
	  bl        0x1B3770
	  bl        0x19E028
	  lwz       r5, 0x2E0(r31)
	  subi      r4, r2, 0x2AEC
	  stw       r3, 0x10(r5)
	  lwz       r3, 0x174(r31)
	  bl        0x1B3758
	  bl        0x19E010
	  mr        r4, r3
	  lwz       r3, 0x304(r31)
	  bl        0x124E6C
	  lwz       r3, 0x174(r31)
	  subi      r4, r2, 0x2AE4
	  bl        0x1B373C
	  bl        0x19DFF4
	  lwz       r4, 0x30C(r31)
	  stw       r3, 0x10(r4)
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8028B8CC
 * Size:	000034
 */
void Queen::Obj::createBornEffect()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r4, 0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x2E0(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
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
 * Address:	8028B900
 * Size:	000080
 */
void Queen::Obj::startRollingEffect()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x1845CC
	  cmpwi     r3, 0x6
	  bne-      .loc_0x3C
	  lwz       r3, 0x2E4(r31)
	  li        r4, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x54

	.loc_0x3C:
	  lwz       r3, 0x2E8(r31)
	  li        r4, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl

	.loc_0x54:
	  lwz       r3, 0x2EC(r31)
	  li        r4, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
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
 * Address:	8028B980
 * Size:	0000E0
 */
void Queen::Obj::finishRollingEffect(bool)
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
	  bl        -0x184654
	  cmpwi     r3, 0x6
	  bne-      .loc_0x60
	  rlwinm.   r0,r31,0,24,31
	  beq-      .loc_0x48
	  lwz       r3, 0x2F0(r30)
	  li        r4, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl

	.loc_0x48:
	  lwz       r3, 0x2E4(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x94

	.loc_0x60:
	  rlwinm.   r0,r31,0,24,31
	  beq-      .loc_0x80
	  lwz       r3, 0x2F4(r30)
	  li        r4, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl

	.loc_0x80:
	  lwz       r3, 0x2E8(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl

	.loc_0x94:
	  rlwinm.   r0,r31,0,24,31
	  beq-      .loc_0xB4
	  lwz       r3, 0x2F8(r30)
	  li        r4, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl

	.loc_0xB4:
	  lwz       r3, 0x2EC(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
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
 * Address:	8028BA60
 * Size:	000064
 */
void Queen::Obj::forceFinishRollingEffect()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r3, 0x2E4(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x2E8(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x2EC(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
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
 * Address:	8028BAC4
 * Size:	000034
 */
void Queen::Obj::startDamageEffect()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r4, 0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x2FC(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
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
 * Address:	8028BAF8
 * Size:	000030
 */
void Queen::Obj::finishDamageEffect()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x2FC(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
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
 * Address:	8028BB28
 * Size:	000034
 */
void Queen::Obj::createFlickEffect()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r4, 0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x300(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
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
 * Address:	8028BB5C
 * Size:	000034
 */
void Queen::Obj::createDeadEffect()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r4, 0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x304(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
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
 * Address:	8028BB90
 * Size:	000034
 */
void Queen::Obj::createWakeUpEffect()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r4, 0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x308(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
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
 * Address:	8028BBC4
 * Size:	000034
 */
void Queen::Obj::startSleepEffect()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r4, 0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x30C(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
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
 * Address:	8028BBF8
 * Size:	000030
 */
void Queen::Obj::finishSleepEffect()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x30C(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
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
 * Address:	8028BC28
 * Size:	000118
 */
void Queen::Obj::effectDrawOn()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r3, 0x2E0(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x44(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x2E4(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x2E8(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x2EC(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x2F0(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x44(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x2F4(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x44(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x2F8(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x44(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x2FC(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x44(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x300(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x304(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x308(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x44(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x30C(r31)
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
 * Address:	8028BD40
 * Size:	000118
 */
void Queen::Obj::effectDrawOff()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r3, 0x2E0(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x40(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x2E4(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x2E8(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x2EC(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x2F0(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x40(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x2F4(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x40(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x2F8(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x40(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x2FC(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x40(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x300(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x304(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x308(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x40(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x30C(r31)
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

} // namespace Game

namespace efx {

/*
 * --INFO--
 * Address:	8028BE58
 * Size:	00009C
 */
TQueenHanacho::~TQueenHanacho()
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
	  lis       r3, 0x804D
	  subi      r3, r3, 0x629C
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
	  bl        -0x1FC228

	.loc_0x70:
	  extsh.    r0, r31
	  ble-      .loc_0x80
	  mr        r3, r30
	  bl        -0x267E20

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
 * Address:	8028BEF4
 * Size:	00009C
 */
TQueenWakeup::~TQueenWakeup()
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
	  lis       r3, 0x804D
	  subi      r3, r3, 0x6250
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x14
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x70
	  lis       r3, 0x804E
	  addi      r3, r3, 0x68F4
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
	  bl        -0x1FC2C4

	.loc_0x70:
	  extsh.    r0, r31
	  ble-      .loc_0x80
	  mr        r3, r30
	  bl        -0x267EBC

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
 * Address:	8028BF90
 * Size:	00009C
 */
TQueenDamage::~TQueenDamage()
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
	  lis       r3, 0x804D
	  subi      r3, r3, 0x61CC
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x14
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x70
	  lis       r3, 0x804E
	  addi      r3, r3, 0x68F4
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
	  bl        -0x1FC360

	.loc_0x70:
	  extsh.    r0, r31
	  ble-      .loc_0x80
	  mr        r3, r30
	  bl        -0x267F58

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
 * Address:	8028C02C
 * Size:	00009C
 */
TQueenCrashRock::~TQueenCrashRock()
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
	  lis       r3, 0x804D
	  subi      r3, r3, 0x6180
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x14
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x70
	  lis       r3, 0x804E
	  addi      r3, r3, 0x68F4
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
	  bl        -0x1FC3FC

	.loc_0x70:
	  extsh.    r0, r31
	  ble-      .loc_0x80
	  mr        r3, r30
	  bl        -0x267FF4

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
 * Address:	8028C0C8
 * Size:	00009C
 */
TQueenCrashL::~TQueenCrashL()
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
	  lis       r3, 0x804D
	  subi      r3, r3, 0x6134
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x14
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x70
	  lis       r3, 0x804E
	  addi      r3, r3, 0x68F4
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
	  bl        -0x1FC498

	.loc_0x70:
	  extsh.    r0, r31
	  ble-      .loc_0x80
	  mr        r3, r30
	  bl        -0x268090

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
 * Address:	8028C164
 * Size:	00009C
 */
TQueenCrashR::~TQueenCrashR()
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
	  lis       r3, 0x804D
	  subi      r3, r3, 0x60E8
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x14
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x70
	  lis       r3, 0x804E
	  addi      r3, r3, 0x68F4
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
	  bl        -0x1FC534

	.loc_0x70:
	  extsh.    r0, r31
	  ble-      .loc_0x80
	  mr        r3, r30
	  bl        -0x26812C

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
 * Address:	8028C200
 * Size:	00009C
 */
TQueenLay::~TQueenLay()
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
	  lis       r3, 0x804D
	  subi      r3, r3, 0x6048
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
	  bl        -0x1FC5D0

	.loc_0x70:
	  extsh.    r0, r31
	  ble-      .loc_0x80
	  mr        r3, r30
	  bl        -0x2681C8

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

namespace Game {

} // namespace Game

/*
 * --INFO--
 * Address:	8028C29C
 * Size:	000038
 */
void EnemyIterator<Game::Baby::Obj>::operator*()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r4, r3
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x8(r3)
	  lwz       r4, 0x4(r4)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
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
 * Address:	8028C2D4
 * Size:	0000E4
 */
void EnemyIterator<Game::Baby::Obj>::next()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r0, 0xC(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x40
	  lwz       r3, 0x8(r31)
	  lwz       r4, 0x4(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x4(r31)
	  b         .loc_0xD0

	.loc_0x40:
	  lwz       r3, 0x8(r31)
	  lwz       r4, 0x4(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x4(r31)
	  b         .loc_0xB4

	.loc_0x60:
	  lwz       r3, 0x8(r31)
	  lwz       r4, 0x4(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0xC(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0xD0
	  lwz       r3, 0x8(r31)
	  lwz       r4, 0x4(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x4(r31)

	.loc_0xB4:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x60

	.loc_0xD0:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8028C3B8
 * Size:	0000DC
 */
void EnemyIterator<Game::Baby::Obj>::first()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r0, 0xC(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x3C
	  lwz       r3, 0x8(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x4(r31)
	  b         .loc_0xC8

	.loc_0x3C:
	  lwz       r3, 0x8(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x4(r31)
	  b         .loc_0xAC

	.loc_0x58:
	  lwz       r3, 0x8(r31)
	  lwz       r4, 0x4(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0xC(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0xC8
	  lwz       r3, 0x8(r31)
	  lwz       r4, 0x4(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x4(r31)

	.loc_0xAC:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x58

	.loc_0xC8:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8028C494
 * Size:	000004
 */
void Queen::Obj::inWaterCallback(Game::WaterBox*) { }

/*
 * --INFO--
 * Address:	8028C498
 * Size:	000004
 */
void Queen::Obj::outWaterCallback() { }

/*
 * --INFO--
 * Address:	8028C49C
 * Size:	000008
 */
void Queen::Obj::getDamageCoeStoneState()
{
	/*
	.loc_0x0:
	  lfs       f1, -0x2ADC(r2)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8028C4A4
 * Size:	000008
 */
u32 Queen::Obj::getEnemyTypeID() { return 0x1E; }

} // namespace efx

/*
 * --INFO--
 * Address:	8028C4AC
 * Size:	000028
 */
void __sinit_Queen_cpp(void)
{
	/*
	.loc_0x0:
	  lis       r4, 0x8051
	  li        r0, -0x1
	  lfs       f0, 0x48B0(r4)
	  lis       r3, 0x804D
	  stw       r0, -0x6930(r13)
	  stfsu     f0, -0x62E0(r3)
	  stfs      f0, -0x692C(r13)
	  stfs      f0, 0x4(r3)
	  stfs      f0, 0x8(r3)
	  blr
	*/
}

namespace Game {

/*
 * --INFO--
 * Address:	8028C4D4
 * Size:	000014
 */
void EnemyBase::@784 @12 @viewOnPelletKilled()
{
	/*
	.loc_0x0:
	  li        r11, 0xC
	  lwzx      r11, r3, r11
	  add       r3, r3, r11
	  subi      r3, r3, 0x310
	  b         -0x185BC8
	*/
}

/*
 * --INFO--
 * Address:	8028C4E8
 * Size:	000014
 */
void EnemyBase::@784 @12 @viewStartCarryMotion()
{
	/*
	.loc_0x0:
	  li        r11, 0xC
	  lwzx      r11, r3, r11
	  add       r3, r3, r11
	  subi      r3, r3, 0x310
	  b         -0x185E50
	*/
}

/*
 * --INFO--
 * Address:	8028C4FC
 * Size:	000014
 */
void EnemyBase::@784 @12 @viewStartPreCarryMotion()
{
	/*
	.loc_0x0:
	  li        r11, 0xC
	  lwzx      r11, r3, r11
	  add       r3, r3, r11
	  subi      r3, r3, 0x310
	  b         -0x185E44
	*/
}

/*
 * --INFO--
 * Address:	8028C510
 * Size:	000014
 */
void EnemyBase::@784 @12 @view_finish_carrymotion()
{
	/*
	.loc_0x0:
	  li        r11, 0xC
	  lwzx      r11, r3, r11
	  add       r3, r3, r11
	  subi      r3, r3, 0x310
	  b         -0x185AA8
	*/
}

/*
 * --INFO--
 * Address:	8028C524
 * Size:	000014
 */
void EnemyBase::@784 @12 @view_start_carrymotion()
{
	/*
	.loc_0x0:
	  li        r11, 0xC
	  lwzx      r11, r3, r11
	  add       r3, r3, r11
	  subi      r3, r3, 0x310
	  b         -0x185AE8
	*/
}

/*
 * --INFO--
 * Address:	8028C538
 * Size:	000014
 */
void EnemyBase::@784 @12 @viewGetShape()
{
	/*
	.loc_0x0:
	  li        r11, 0xC
	  lwzx      r11, r3, r11
	  add       r3, r3, r11
	  subi      r3, r3, 0x310
	  b         -0x185EA8
	*/
}

namespace efx {

	/*
	 * --INFO--
	 * Address:	8028C54C
	 * Size:	000008
	 */
	TQueenLay::@4 @~TQueenLay()
	{
		/*
		.loc_0x0:
		  subi      r3, r3, 0x4
		  b         -0x350
		*/
	}

	/*
	 * --INFO--
	 * Address:	8028C554
	 * Size:	000008
	 */
	TQueenCrashR::@4 @~TQueenCrashR()
	{
		/*
		.loc_0x0:
		  subi      r3, r3, 0x4
		  b         -0x3F4
		*/
	}

	/*
	 * --INFO--
	 * Address:	8028C55C
	 * Size:	000008
	 */
	TQueenCrashL::@4 @~TQueenCrashL()
	{
		/*
		.loc_0x0:
		  subi      r3, r3, 0x4
		  b         -0x498
		*/
	}

	/*
	 * --INFO--
	 * Address:	8028C564
	 * Size:	000008
	 */
	TQueenCrashRock::@4 @~TQueenCrashRock()
	{
		/*
		.loc_0x0:
		  subi      r3, r3, 0x4
		  b         -0x53C
		*/
	}

	/*
	 * --INFO--
	 * Address:	8028C56C
	 * Size:	000008
	 */
	TQueenDamage::@4 @~TQueenDamage()
	{
		/*
		.loc_0x0:
		  subi      r3, r3, 0x4
		  b         -0x5E0
		*/
	}

	/*
	 * --INFO--
	 * Address:	8028C574
	 * Size:	000008
	 */
	TQueenWakeup::@4 @~TQueenWakeup()
	{
		/*
		.loc_0x0:
		  subi      r3, r3, 0x4
		  b         -0x684
		*/
	}

	/*
	 * --INFO--
	 * Address:	8028C57C
	 * Size:	000008
	 */
	TQueenHanacho::@4 @~TQueenHanacho()
	{
		/*
		.loc_0x0:
		  subi      r3, r3, 0x4
		  b         -0x728
		*/
	}
} // namespace efx

} // namespace Game
