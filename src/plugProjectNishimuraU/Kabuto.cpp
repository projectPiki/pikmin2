#include "types.h"

namespace Game {

/*
 * --INFO--
 * Address:	802E4178
 * Size:	00014C
 */
Kabuto::Obj::Obj()
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
	  addi      r0, r31, 0x2E4
	  lis       r3, 0x804B
	  stw       r0, 0x17C(r31)
	  subi      r3, r3, 0x5988
	  li        r0, 0
	  stw       r3, 0x2E4(r31)
	  stw       r0, 0x2E8(r31)
	  stw       r0, 0x2EC(r31)

	.loc_0x40:
	  mr        r3, r31
	  li        r4, 0
	  bl        -0x1E2E20
	  lis       r3, 0x804D
	  addi      r0, r31, 0x2E4
	  addi      r5, r3, 0x3C54
	  addi      r3, r31, 0x2C0
	  stw       r5, 0x0(r31)
	  addi      r4, r5, 0x1B0
	  addi      r5, r5, 0x31C
	  stw       r4, 0x178(r31)
	  lwz       r4, 0x17C(r31)
	  stw       r5, 0x0(r4)
	  lwz       r4, 0x17C(r31)
	  sub       r0, r0, r4
	  stw       r0, 0xC(r4)
	  bl        -0x1B9EA4
	  li        r3, 0x2C
	  bl        -0x2C035C
	  mr.       r30, r3
	  beq-      .loc_0xD4
	  bl        -0x1BC898
	  lis       r3, 0x804D
	  lis       r4, 0x804B
	  addi      r0, r3, 0x3B30
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

	.loc_0xD4:
	  stw       r30, 0x184(r31)
	  li        r3, 0x1C
	  bl        -0x2C03B0
	  mr.       r4, r3
	  beq-      .loc_0x108
	  lis       r5, 0x804B
	  lis       r3, 0x804D
	  subi      r0, r5, 0x680
	  li        r5, -0x1
	  stw       r0, 0x0(r4)
	  addi      r0, r3, 0x3B08
	  stw       r5, 0x18(r4)
	  stw       r0, 0x0(r4)

	.loc_0x108:
	  lwz       r12, 0x0(r31)
	  mr        r3, r31
	  lwz       r12, 0x2F8(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x2FC(r12)
	  mtctr     r12
	  bctrl
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
 * Address:	802E42C4
 * Size:	000004
 */
void Kabuto::Obj::createEffect() { }

/*
 * --INFO--
 * Address:	802E42C8
 * Size:	000004
 */
void Kabuto::Obj::setInitialSetting(Game::EnemyInitialParamBase*) { }

/*
 * --INFO--
 * Address:	802E42CC
 * Size:	000108
 */
void Kabuto::Obj::onInit(Game::CreatureInitArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x1E2888
	  lwz       r3, -0x6C18(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x3C
	  lwz       r0, 0x44(r3)
	  cmpwi     r0, 0x4
	  bne-      .loc_0x3C
	  lwz       r0, 0x1E0(r31)
	  ori       r0, r0, 0x1
	  stw       r0, 0x1E0(r31)

	.loc_0x3C:
	  lfs       f1, -0x1598(r2)
	  li        r4, 0
	  lfs       f0, -0x1594(r2)
	  li        r0, -0x1
	  stfs      f1, 0x2DC(r31)
	  mr        r3, r31
	  stb       r4, 0x2E1(r31)
	  stfs      f0, 0x2C8(r31)
	  stfs      f0, 0x2DC(r31)
	  stw       r0, 0x2CC(r31)
	  stb       r4, 0x2E0(r31)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x300(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x258(r12)
	  mtctr     r12
	  bctrl
	  cmpwi     r3, 0x60
	  bne-      .loc_0xD4
	  mr        r3, r31
	  bl        -0x1DCBE8
	  lwz       r3, 0x2BC(r31)
	  mr        r4, r31
	  li        r5, 0x6
	  li        r6, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x1DC(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0xF4

	.loc_0xD4:
	  lwz       r3, 0x2BC(r31)
	  mr        r4, r31
	  li        r5, 0x1
	  li        r6, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl

	.loc_0xF4:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802E43D4
 * Size:	000004
 */
void Kabuto::Obj::setupEffect() { }

/*
 * --INFO--
 * Address:	802E43D8
 * Size:	000044
 */
void Kabuto::Obj::doUpdate()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        0x900
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
 * Address:	802E441C
 * Size:	000004
 */
void Kabuto::Obj::doDirectDraw(Graphics&) { }

/*
 * --INFO--
 * Address:	802E4420
 * Size:	000020
 */
void Kabuto::Obj::doDebugDraw(Graphics&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        -0x1DE5C0
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802E4440
 * Size:	00004C
 */
void Kabuto::Obj::setFSM(Game::Kabuto::FSM*)
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
 * Address:	802E448C
 * Size:	0000A8
 */
void Kabuto::Obj::getShadowParam(Game::ShadowParam&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  subi      r4, r2, 0x1590
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  lwz       r3, 0x174(r3)
	  bl        0x15AB34
	  bl        0x1453EC
	  lfs       f4, 0x2C(r3)
	  lfs       f2, 0x1C(r3)
	  lfs       f0, 0xC(r3)
	  lfs       f3, -0x1588(r2)
	  stfs      f0, 0x0(r31)
	  lfs       f1, -0x1594(r2)
	  stfs      f2, 0x4(r31)
	  lfs       f0, -0x1584(r2)
	  stfs      f4, 0x8(r31)
	  lfs       f2, 0x190(r30)
	  fadds     f2, f3, f2
	  stfs      f2, 0x4(r31)
	  stfs      f1, 0xC(r31)
	  stfs      f0, 0x10(r31)
	  stfs      f1, 0x14(r31)
	  lwz       r0, 0x1E4(r30)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0x80
	  lfs       f0, -0x1580(r2)
	  stfs      f0, 0x18(r31)
	  b         .loc_0x88

	.loc_0x80:
	  lfs       f0, -0x157C(r2)
	  stfs      f0, 0x18(r31)

	.loc_0x88:
	  lfs       f0, -0x1578(r2)
	  stfs      f0, 0x1C(r31)
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
 * Address:	802E4534
 * Size:	000054
 */
void Kabuto::Obj::doStartStoneState()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x1E1654
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x308(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x310(r12)
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
 * Address:	802E4588
 * Size:	0000B0
 */
void Kabuto::Obj::doFinishStoneState()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  bl        -0x1E1698
	  lfs       f1, -0x1584(r2)
	  mr        r3, r30
	  lfs       f2, -0x157C(r2)
	  li        r4, 0
	  lfs       f3, -0x1594(r2)
	  lfs       f4, -0x1574(r2)
	  bl        -0x1D14A0
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x258(r12)
	  mtctr     r12
	  bctrl
	  cmpwi     r3, 0x60
	  bne-      .loc_0x98
	  mr        r3, r30
	  bl        -0x1DD1EC
	  mr        r31, r3
	  cmpwi     r31, 0x9
	  blt-      .loc_0x7C
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x30C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x7C:
	  cmpwi     r31, 0xA
	  bne-      .loc_0x98
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x304(r12)
	  mtctr     r12
	  bctrl

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
 * Address:	802E4638
 * Size:	000028
 */
void Kabuto::Obj::startCarcassMotion()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r4, 0xD
	  li        r5, 0
	  stw       r0, 0x14(r1)
	  bl        -0x1DF648
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802E4660
 * Size:	00002C
 */
void Kabuto::Obj::doStartMovie()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x318(r12)
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
 * Address:	802E468C
 * Size:	000004
 */
void Kabuto::Obj::effectDrawOff() { }

/*
 * --INFO--
 * Address:	802E4690
 * Size:	00002C
 */
void Kabuto::Obj::doEndMovie()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x314(r12)
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
 * Address:	802E46BC
 * Size:	000004
 */
void Kabuto::Obj::effectDrawOn() { }

/*
 * --INFO--
 * Address:	802E46C0
 * Size:	000094
 */
void Kabuto::Obj::initWalkSmokeEffect()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r4, 0x4
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  addi      r3, r31, 0x2C0
	  bl        -0x1BA378
	  lwz       r5, 0x174(r31)
	  addi      r3, r31, 0x2C0
	  lfs       f1, -0x1568(r2)
	  li        r4, 0
	  subi      r6, r2, 0x1570
	  bl        -0x1BA114
	  lwz       r5, 0x174(r31)
	  addi      r3, r31, 0x2C0
	  lfs       f1, -0x155C(r2)
	  li        r4, 0x1
	  subi      r6, r2, 0x1564
	  bl        -0x1BA12C
	  lwz       r5, 0x174(r31)
	  addi      r3, r31, 0x2C0
	  lfs       f1, -0x1568(r2)
	  li        r4, 0x2
	  subi      r6, r2, 0x1558
	  bl        -0x1BA144
	  lwz       r5, 0x174(r31)
	  addi      r3, r31, 0x2C0
	  lfs       f1, -0x155C(r2)
	  li        r4, 0x3
	  subi      r6, r2, 0x1550
	  bl        -0x1BA15C
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802E4754
 * Size:	000008
 */
void Kabuto::Obj::getWalkSmokeEffectMgr()
{
	/*
	.loc_0x0:
	  addi      r3, r3, 0x2C0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802E475C
 * Size:	000198
 */
void Kabuto::Obj::setRandTarget()
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
	  mr        r31, r3
	  lwz       r3, 0xC0(r3)
	  lfs       f1, 0x35C(r3)
	  lfs       f0, 0x384(r3)
	  fsubs     f30, f1, f0
	  bl        -0x21B1F0
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0xC(r1)
	  lis       r3, 0x8051
	  lwz       r4, 0xC0(r31)
	  subi      r3, r3, 0x2E20
	  stw       r0, 0x8(r1)
	  lfd       f1, -0x1530(r2)
	  lfd       f0, 0x8(r1)
	  lfs       f5, -0x1548(r2)
	  fsubs     f0, f0, f1
	  lfs       f3, 0x18C(r31)
	  lfs       f1, 0x198(r31)
	  lfs       f4, 0x384(r4)
	  fmuls     f6, f30, f0
	  lfs       f2, 0x194(r31)
	  fsubs     f1, f3, f1
	  lfs       f0, 0x1A0(r31)
	  fdivs     f3, f6, f5
	  fadds     f31, f4, f3
	  fsubs     f2, f2, f0
	  bl        -0x2AF6E0
	  fmr       f30, f1
	  bl        -0x21B250
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x14(r1)
	  lfd       f2, -0x1530(r2)
	  stw       r0, 0x10(r1)
	  lfs       f3, -0x1544(r2)
	  lfd       f0, 0x10(r1)
	  lfs       f1, -0x1548(r2)
	  fsubs     f4, f0, f2
	  lfs       f2, -0x1540(r2)
	  lfs       f0, -0x1594(r2)
	  fmuls     f3, f3, f4
	  fdivs     f1, f3, f1
	  fadds     f1, f30, f1
	  fadds     f5, f2, f1
	  fmr       f1, f5
	  fcmpo     cr0, f5, f0
	  bge-      .loc_0xE4
	  fneg      f1, f5

	.loc_0xE4:
	  lfs       f3, -0x153C(r2)
	  lis       r3, 0x8050
	  lfs       f0, -0x1594(r2)
	  addi      r4, r3, 0x71A0
	  fmuls     f2, f1, f3
	  lfs       f1, 0x1A0(r31)
	  fcmpo     cr0, f5, f0
	  lfs       f4, 0x19C(r31)
	  fctiwz    f0, f2
	  stfd      f0, 0x18(r1)
	  lwz       r0, 0x1C(r1)
	  rlwinm    r0,r0,3,18,28
	  add       r3, r4, r0
	  lfs       f0, 0x4(r3)
	  fmadds    f2, f31, f0, f1
	  bge-      .loc_0x148
	  lfs       f0, -0x1538(r2)
	  fmuls     f0, f5, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x20(r1)
	  lwz       r0, 0x24(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r4, r0
	  fneg      f1, f0
	  b         .loc_0x160

	.loc_0x148:
	  fmuls     f0, f5, f3
	  fctiwz    f0, f0
	  stfd      f0, 0x28(r1)
	  lwz       r0, 0x2C(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f1, r4, r0

	.loc_0x160:
	  lfs       f0, 0x198(r31)
	  fmadds    f0, f31, f1, f0
	  stfs      f0, 0x2D0(r31)
	  stfs      f4, 0x2D4(r31)
	  stfs      f2, 0x2D8(r31)
	  psq_l     f31,0x58(r1),0,0
	  lfd       f31, 0x50(r1)
	  psq_l     f30,0x48(r1),0,0
	  lfd       f30, 0x40(r1)
	  lwz       r0, 0x64(r1)
	  lwz       r31, 0x3C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x60
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802E48F4
 * Size:	000058
 */
void Kabuto::Obj::getSearchedTarget()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        0x434
	  lwz       r6, 0xC0(r31)
	  mr        r3, r31
	  li        r4, 0
	  li        r5, 0
	  lfs       f2, 0x3D4(r6)
	  li        r6, 0
	  bl        -0x1D18D4
	  cmplwi    r3, 0
	  beq-      .loc_0x44
	  lfs       f0, -0x1594(r2)
	  stfs      f0, 0x2DC(r31)

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
 * Address:	802E494C
 * Size:	0002BC
 */
void Kabuto::Obj::isAttackableTarget()
{
	/*
	.loc_0x0:
	  stwu      r1, -0xF0(r1)
	  mflr      r0
	  stw       r0, 0xF4(r1)
	  stfd      f31, 0xE0(r1)
	  psq_st    f31,0xE8(r1),0,0
	  stfd      f30, 0xD0(r1)
	  psq_st    f30,0xD8(r1),0,0
	  stfd      f29, 0xC0(r1)
	  psq_st    f29,0xC8(r1),0,0
	  stw       r31, 0xBC(r1)
	  stw       r30, 0xB8(r1)
	  stw       r29, 0xB4(r1)
	  mr        r31, r3
	  lfs       f0, -0x1594(r2)
	  lfs       f3, 0x1FC(r3)
	  fmr       f1, f3
	  fcmpo     cr0, f3, f0
	  bge-      .loc_0x4C
	  fneg      f1, f3

	.loc_0x4C:
	  lfs       f2, -0x153C(r2)
	  lis       r3, 0x8050
	  lfs       f0, -0x1594(r2)
	  addi      r4, r3, 0x71A0
	  fmuls     f1, f1, f2
	  fcmpo     cr0, f3, f0
	  fctiwz    f0, f1
	  stfd      f0, 0x90(r1)
	  lwz       r0, 0x94(r1)
	  rlwinm    r0,r0,3,18,28
	  add       r3, r4, r0
	  lfs       f30, 0x4(r3)
	  bge-      .loc_0xA4
	  lfs       f0, -0x1538(r2)
	  fmuls     f0, f3, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x98(r1)
	  lwz       r0, 0x9C(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r4, r0
	  fneg      f29, f0
	  b         .loc_0xBC

	.loc_0xA4:
	  fmuls     f0, f3, f2
	  fctiwz    f0, f0
	  stfd      f0, 0xA0(r1)
	  lwz       r0, 0xA4(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f29, r4, r0

	.loc_0xBC:
	  lwz       r4, 0xC0(r31)
	  fneg      f31, f30
	  lfs       f0, -0x1528(r2)
	  addi      r3, r1, 0x24
	  lfs       f2, 0x3D4(r4)
	  addi      r4, r1, 0x14
	  lfs       f1, -0x1524(r2)
	  fmuls     f5, f0, f2
	  lfs       f3, 0x194(r31)
	  lfs       f0, 0x18C(r31)
	  fmuls     f4, f1, f2
	  lfs       f1, 0x190(r31)
	  lfs       f2, -0x1594(r2)
	  fmadds    f3, f30, f5, f3
	  stfs      f4, 0x20(r1)
	  fmadds    f1, f2, f5, f1
	  fmadds    f0, f29, f5, f0
	  stfs      f3, 0x1C(r1)
	  stfs      f0, 0x14(r1)
	  stfs      f1, 0x18(r1)
	  bl        -0xB66B8
	  li        r0, 0x1
	  addi      r3, r1, 0x44
	  stb       r0, 0x40(r1)
	  addi      r4, r1, 0x24
	  bl        -0xB668C
	  addi      r3, r1, 0x44
	  bl        -0xB6618
	  b         .loc_0x274

	.loc_0x130:
	  addi      r3, r1, 0x44
	  bl        -0xB653C
	  lwz       r12, 0x0(r3)
	  mr        r30, r3
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x26C
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  mr        r29, r3
	  bne-      .loc_0x1B0
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x1B0
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x1C0(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x1B0
	  li        r29, 0x1

	.loc_0x1B0:
	  rlwinm.   r0,r29,0,24,31
	  beq-      .loc_0x26C
	  mr        r4, r30
	  addi      r3, r1, 0x8
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f3, 0xC(r1)
	  lfs       f0, 0x190(r31)
	  lfs       f2, 0x8(r1)
	  lfs       f1, 0x18C(r31)
	  fsubs     f3, f3, f0
	  lfs       f0, -0x1594(r2)
	  lfs       f4, 0x10(r1)
	  fsubs     f2, f2, f1
	  lfs       f1, 0x194(r31)
	  fcmpo     cr0, f3, f0
	  lwz       r3, 0xC0(r31)
	  fsubs     f4, f4, f1
	  ble-      .loc_0x20C
	  fmr       f1, f3
	  b         .loc_0x210

	.loc_0x20C:
	  fneg      f1, f3

	.loc_0x210:
	  lfs       f0, 0x3FC(r3)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x26C
	  lfs       f1, -0x1594(r2)
	  fmuls     f3, f1, f3
	  fmadds    f0, f31, f2, f3
	  fmadds    f0, f29, f4, f0
	  fcmpo     cr0, f0, f1
	  ble-      .loc_0x238
	  b         .loc_0x23C

	.loc_0x238:
	  fneg      f0, f0

	.loc_0x23C:
	  lfs       f1, -0x1520(r2)
	  fcmpo     cr0, f0, f1
	  bge-      .loc_0x26C
	  fmadds    f0, f29, f2, f3
	  fmadds    f2, f30, f4, f0
	  fcmpo     cr0, f2, f1
	  ble-      .loc_0x26C
	  lfs       f0, 0x3D4(r3)
	  fcmpo     cr0, f2, f0
	  bge-      .loc_0x26C
	  li        r3, 0x1
	  b         .loc_0x288

	.loc_0x26C:
	  addi      r3, r1, 0x44
	  bl        -0xB66BC

	.loc_0x274:
	  addi      r3, r1, 0x44
	  bl        -0xB6690
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x130
	  li        r3, 0

	.loc_0x288:
	  psq_l     f31,0xE8(r1),0,0
	  lfd       f31, 0xE0(r1)
	  psq_l     f30,0xD8(r1),0,0
	  lfd       f30, 0xD0(r1)
	  psq_l     f29,0xC8(r1),0,0
	  lfd       f29, 0xC0(r1)
	  lwz       r31, 0xBC(r1)
	  lwz       r30, 0xB8(r1)
	  lwz       r0, 0xF4(r1)
	  lwz       r29, 0xB4(r1)
	  mtlr      r0
	  addi      r1, r1, 0xF0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802E4C08
 * Size:	0000E4
 */
void Kabuto::Obj::createStoneAttack()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  mflr      r0
	  li        r4, 0x13
	  stw       r0, 0x54(r1)
	  stw       r31, 0x4C(r1)
	  stw       r30, 0x48(r1)
	  mr        r30, r3
	  lwz       r3, -0x6E20(r13)
	  bl        -0x1D6F84
	  mr.       r31, r3
	  beq-      .loc_0xCC
	  addi      r3, r1, 0x8
	  bl        -0x1B6014
	  li        r0, 0x4A
	  subi      r4, r2, 0x151C
	  stw       r0, 0x30(r1)
	  lwz       r3, 0x174(r30)
	  bl        0x15A398
	  bl        0x144C50
	  cmplwi    r3, 0
	  beq-      .loc_0x74
	  lfs       f2, -0x1578(r2)
	  lfs       f1, 0x190(r30)
	  lfs       f3, 0x2C(r3)
	  lfs       f0, 0xC(r3)
	  fadds     f1, f2, f1
	  stfs      f0, 0x8(r1)
	  stfs      f1, 0xC(r1)
	  stfs      f3, 0x10(r1)

	.loc_0x74:
	  lfs       f0, 0x1FC(r30)
	  mr        r3, r31
	  addi      r4, r1, 0x8
	  stfs      f0, 0x14(r1)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x70(r12)
	  mtctr     r12
	  bctrl
	  mr.       r31, r3
	  beq-      .loc_0xCC
	  li        r4, 0
	  bl        -0x1A9CE0
	  stw       r30, 0x2C0(r31)
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x258(r12)
	  mtctr     r12
	  bctrl
	  cmpwi     r3, 0x5F
	  bne-      .loc_0xCC
	  li        r0, 0x1
	  stb       r0, 0x2C4(r31)

	.loc_0xCC:
	  lwz       r0, 0x54(r1)
	  lwz       r31, 0x4C(r1)
	  lwz       r30, 0x48(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802E4CEC
 * Size:	000050
 */
void Kabuto::Obj::updateCaution()
{
	/*
	.loc_0x0:
	  lwz       r4, 0x1E0(r3)
	  rlwinm.   r0,r4,0,27,27
	  bne-      .loc_0x20
	  rlwinm.   r0,r4,0,30,30
	  bne-      .loc_0x20
	  lwz       r0, 0x1F4(r3)
	  cmpwi     r0, 0
	  beq-      .loc_0x28

	.loc_0x20:
	  lfs       f0, -0x1594(r2)
	  stfs      f0, 0x2DC(r3)

	.loc_0x28:
	  lwz       r4, 0xC0(r3)
	  lfs       f1, 0x2DC(r3)
	  lfs       f0, 0x62C(r4)
	  fcmpo     cr0, f1, f0
	  bgelr-
	  lwz       r4, -0x6514(r13)
	  lfs       f0, 0x54(r4)
	  fadds     f0, f1, f0
	  stfs      f0, 0x2DC(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802E4D3C
 * Size:	000024
 */
void Kabuto::Obj::getViewAngle()
{
	/*
	.loc_0x0:
	  lwz       r4, 0xC0(r3)
	  lfs       f1, 0x2DC(r3)
	  lfs       f0, 0x62C(r4)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x1C
	  lfs       f1, -0x1514(r2)
	  blr

	.loc_0x1C:
	  lfs       f1, 0x424(r4)
	  blr
	*/
}
} // namespace Game
