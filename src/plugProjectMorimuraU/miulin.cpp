#include "types.h"

namespace Game {

/*
 * --INFO--
 * Address:	80364454
 * Size:	000020
 */
void Miulin::Obj::setParameters(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        -0x261888
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

} // namespace Game

/*
 * --INFO--
 * Address:	80364474
 * Size:	0000B0
 */
void birth__Q34Game6Miulin3ObjFR10Vector3f f(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x60(r1)
	  mflr      r0
	  stw       r0, 0x64(r1)
	  stfd      f31, 0x50(r1)
	  psq_st    f31,0x58(r1),0,0
	  stw       r31, 0x4C(r1)
	  stw       r30, 0x48(r1)
	  stw       r29, 0x44(r1)
	  fmr       f31, f1
	  mr        r29, r3
	  mr        r30, r4
	  bl        -0x261AA0
	  lwz       r3, -0x6E20(r13)
	  li        r4, 0x4D
	  bl        -0x256808
	  mr.       r31, r3
	  beq-      .loc_0x8C
	  addi      r3, r1, 0x8
	  bl        -0x235898
	  lfs       f1, 0x0(r30)
	  mr        r3, r31
	  lfs       f0, 0x4B0(r2)
	  mr        r5, r29
	  stfs      f1, 0x8(r1)
	  addi      r4, r1, 0x8
	  li        r6, 0x5
	  li        r7, 0x1
	  lfs       f1, 0x4(r30)
	  stfs      f1, 0xC(r1)
	  fadds     f0, f1, f0
	  lfs       f1, 0x8(r30)
	  stfs      f1, 0x10(r1)
	  stfs      f0, 0xC(r1)
	  stfs      f31, 0x14(r1)
	  bl        0x24D74

	.loc_0x8C:
	  psq_l     f31,0x58(r1),0,0
	  lwz       r0, 0x64(r1)
	  lfd       f31, 0x50(r1)
	  lwz       r31, 0x4C(r1)
	  lwz       r30, 0x48(r1)
	  lwz       r29, 0x44(r1)
	  mtlr      r0
	  addi      r1, r1, 0x60
	  blr
	*/
}

namespace Game {

/*
 * --INFO--
 * Address:	80364524
 * Size:	0000B4
 */
void Miulin::Obj::onInit(Game::CreatureInitArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r5, 0x8049
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  addi      r31, r5, 0x1A18
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  bl        -0x262AEC
	  lwz       r3, 0x174(r30)
	  addi      r4, r31, 0
	  bl        0xDAA94
	  stw       r3, 0x2CC(r30)
	  lwz       r0, 0x2CC(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0x54
	  addi      r3, r31, 0xC
	  addi      r5, r31, 0x18
	  li        r4, 0x4A
	  crclr     6, 0x6
	  bl        -0x339F34

	.loc_0x54:
	  li        r0, 0
	  mr        r4, r30
	  stw       r0, 0x2D0(r30)
	  li        r5, 0
	  li        r6, 0
	  lfs       f0, 0x198(r30)
	  stfs      f0, 0x2D4(r30)
	  lfs       f0, 0x19C(r30)
	  stfs      f0, 0x2D8(r30)
	  lfs       f0, 0x1A0(r30)
	  stfs      f0, 0x2DC(r30)
	  stw       r0, 0x2E0(r30)
	  stb       r0, 0x2E4(r30)
	  lwz       r3, 0x2F4(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
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
 * Address:	803645D8
 * Size:	000140
 */
Miulin::Obj::Obj(void)
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
	  addi      r0, r31, 0x2F8
	  lis       r3, 0x804B
	  stw       r0, 0x17C(r31)
	  subi      r3, r3, 0x5988
	  li        r0, 0
	  stw       r3, 0x2F8(r31)
	  stw       r0, 0x2FC(r31)
	  stw       r0, 0x300(r31)

	.loc_0x40:
	  mr        r3, r31
	  li        r4, 0
	  bl        -0x263280
	  lis       r3, 0x804E
	  addi      r0, r31, 0x2F8
	  addi      r5, r3, 0x25DC
	  addi      r3, r31, 0x2EC
	  stw       r5, 0x0(r31)
	  addi      r4, r5, 0x1B0
	  addi      r5, r5, 0x2FC
	  stw       r4, 0x178(r31)
	  lwz       r4, 0x17C(r31)
	  stw       r5, 0x0(r4)
	  lwz       r4, 0x17C(r31)
	  sub       r0, r0, r4
	  stw       r0, 0xC(r4)
	  bl        -0x23A304
	  li        r0, 0
	  li        r3, 0x2C
	  stw       r0, 0x2F4(r31)
	  bl        -0x3407C4
	  mr.       r30, r3
	  beq-      .loc_0xDC
	  bl        -0x23CD00
	  lis       r3, 0x804E
	  lis       r4, 0x804B
	  addi      r0, r3, 0x24B0
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

	.loc_0xDC:
	  stw       r30, 0x184(r31)
	  li        r3, 0x1C
	  bl        -0x340818
	  mr.       r4, r3
	  beq-      .loc_0x110
	  lis       r5, 0x804B
	  lis       r3, 0x804E
	  subi      r0, r5, 0x680
	  li        r5, -0x1
	  stw       r0, 0x0(r4)
	  addi      r0, r3, 0x248C
	  stw       r5, 0x18(r4)
	  stw       r0, 0x0(r4)

	.loc_0x110:
	  lwz       r12, 0x0(r31)
	  mr        r3, r31
	  lwz       r12, 0x2F8(r12)
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
 * Address:	80364718
 * Size:	00004C
 */
void Miulin::Obj::setFSM(Game::Miulin::FSM*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  stw       r4, 0x2F4(r3)
	  mr        r4, r31
	  lwz       r3, 0x2F4(r3)
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
 * Address:	80364764
 * Size:	000080
 */
void Miulin::Obj::doUpdate(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  mr        r4, r31
	  lwz       r3, 0x2F4(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, -0x6514(r13)
	  lfs       f1, 0x2E8(r31)
	  lfs       f0, 0x54(r3)
	  fadds     f0, f1, f0
	  stfs      f0, 0x2E8(r31)
	  lwz       r3, 0x230(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x6C
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x6C
	  li        r0, 0
	  stw       r0, 0x230(r31)

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
 * Address:	803647E4
 * Size:	000004
 */
void Miulin::Obj::doDirectDraw(Graphics&) { }

/*
 * --INFO--
 * Address:	803647E8
 * Size:	000020
 */
void Miulin::Obj::doDebugDraw(Graphics&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        -0x25E988
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80364808
 * Size:	000088
 */
void Miulin::Obj::getShadowParam(Game::ShadowParam&)
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
	  lwz       r3, 0x2CC(r3)
	  bl        0xC5078
	  lfs       f0, 0xC(r3)
	  lfs       f5, 0x4B4(r2)
	  stfs      f0, 0x0(r31)
	  lfs       f3, 0x4B8(r2)
	  lfs       f0, 0x1C(r3)
	  lfs       f2, 0x4BC(r2)
	  stfs      f0, 0x4(r31)
	  lfs       f1, 0x4C0(r2)
	  lfs       f4, 0x2C(r3)
	  lfs       f0, 0x4C4(r2)
	  stfs      f4, 0x8(r31)
	  lfs       f4, 0x190(r30)
	  fadds     f4, f5, f4
	  stfs      f4, 0x4(r31)
	  stfs      f3, 0xC(r31)
	  stfs      f2, 0x10(r31)
	  stfs      f3, 0x14(r31)
	  stfs      f1, 0x18(r31)
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
 * Address:	80364890
 * Size:	000040
 */
void Miulin::Obj::doSimulation(float)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r4, 0x2D0(r3)
	  subi      r0, r4, 0x1
	  stw       r0, 0x2D0(r3)
	  lwz       r0, 0x2D0(r3)
	  cmpwi     r0, 0
	  bge-      .loc_0x2C
	  li        r0, 0
	  stw       r0, 0x2D0(r3)

	.loc_0x2C:
	  bl        -0x25FE64
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803648D0
 * Size:	00002C
 */
void Miulin::Obj::wallCallback(Game::MoveInfo const&)
{
	/*
	.loc_0x0:
	  li        r4, 0x78
	  li        r0, 0
	  stw       r4, 0x2D0(r3)
	  stw       r0, 0x230(r3)
	  lfs       f0, 0x198(r3)
	  stfs      f0, 0x2BC(r3)
	  lfs       f0, 0x19C(r3)
	  stfs      f0, 0x2C0(r3)
	  lfs       f0, 0x1A0(r3)
	  stfs      f0, 0x2C4(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803648FC
 * Size:	000028
 */
void Miulin::Obj::startCarcassMotion(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r4, 0x6
	  li        r5, 0
	  stw       r0, 0x14(r1)
	  bl        -0x25F90C
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80364924
 * Size:	00006C
 */
void Miulin::Obj::initWalkSmokeEffect(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r4, 0x2
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  addi      r3, r31, 0x2EC
	  bl        -0x23A5DC
	  lis       r3, 0x8049
	  lwz       r5, 0x174(r31)
	  addi      r6, r3, 0x1A3C
	  lfs       f1, 0x4C8(r2)
	  addi      r3, r31, 0x2EC
	  li        r4, 0
	  bl        -0x23A37C
	  lis       r3, 0x8049
	  lwz       r5, 0x174(r31)
	  addi      r6, r3, 0x1A48
	  lfs       f1, 0x4C8(r2)
	  addi      r3, r31, 0x2EC
	  li        r4, 0x1
	  bl        -0x23A398
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80364990
 * Size:	000008
 */
void Miulin::Obj::getWalkSmokeEffectMgr(void)
{
	/*
	.loc_0x0:
	  addi      r3, r3, 0x2EC
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80364998
 * Size:	000534
 */
void Miulin::Obj::isAttackStart(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x120(r1)
	  mflr      r0
	  stw       r0, 0x124(r1)
	  stfd      f31, 0x110(r1)
	  psq_st    f31,0x118(r1),0,0
	  stfd      f30, 0x100(r1)
	  psq_st    f30,0x108(r1),0,0
	  stfd      f29, 0xF0(r1)
	  psq_st    f29,0xF8(r1),0,0
	  stfd      f28, 0xE0(r1)
	  psq_st    f28,0xE8(r1),0,0
	  stfd      f27, 0xD0(r1)
	  psq_st    f27,0xD8(r1),0,0
	  stfd      f26, 0xC0(r1)
	  psq_st    f26,0xC8(r1),0,0
	  stw       r31, 0xBC(r1)
	  stw       r30, 0xB8(r1)
	  stw       r29, 0xB4(r1)
	  mr        r31, r3
	  lfs       f1, 0x4D0(r2)
	  lwz       r3, 0xC0(r3)
	  lwz       r4, 0x230(r31)
	  lfs       f0, 0x844(r3)
	  lfs       f2, 0x5B4(r3)
	  cmplwi    r4, 0
	  fmuls     f0, f1, f0
	  lfs       f3, 0x90C(r3)
	  lfs       f1, 0x4CC(r2)
	  fmuls     f30, f2, f2
	  fmuls     f29, f3, f3
	  fmuls     f28, f1, f0
	  beq-      .loc_0x1A4
	  lwz       r12, 0x0(r4)
	  addi      r3, r1, 0x50
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r31
	  lfs       f2, 0x50(r1)
	  lwz       r12, 0x0(r31)
	  addi      r3, r1, 0x5C
	  lfs       f1, 0x54(r1)
	  lfs       f0, 0x58(r1)
	  lwz       r12, 0x8(r12)
	  stfs      f2, 0x38(r1)
	  stfs      f1, 0x3C(r1)
	  stfs      f0, 0x40(r1)
	  mtctr     r12
	  bctrl
	  lfs       f5, 0x5C(r1)
	  lis       r3, 0x8051
	  lfs       f3, 0x64(r1)
	  subi      r3, r3, 0x2E20
	  lfs       f1, 0x38(r1)
	  lfs       f0, 0x40(r1)
	  lfs       f4, 0x60(r1)
	  fsubs     f1, f1, f5
	  fsubs     f2, f0, f3
	  stfs      f5, 0x44(r1)
	  stfs      f4, 0x48(r1)
	  stfs      f3, 0x4C(r1)
	  bl        -0x32F984
	  bl        0xAD140
	  lwz       r12, 0x0(r31)
	  fmr       f26, f1
	  mr        r3, r31
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fmr       f2, f1
	  fmr       f1, f26
	  bl        0xAD148
	  fabs      f0, f1
	  frsp      f0, f0
	  fcmpo     cr0, f0, f28
	  cror      2, 0, 0x2
	  bne-      .loc_0x1A4
	  lwz       r4, 0x230(r31)
	  addi      r3, r1, 0x80
	  lfs       f26, 0x194(r31)
	  lwz       r12, 0x0(r4)
	  lfs       f27, 0x18C(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x230(r31)
	  addi      r3, r1, 0x8C
	  lfs       f31, 0x88(r1)
	  lwz       r12, 0x0(r4)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  fsubs     f1, f31, f26
	  lfs       f2, 0x8C(r1)
	  fadds     f0, f29, f30
	  fsubs     f2, f2, f27
	  fmuls     f1, f1, f1
	  fmadds    f1, f2, f2, f1
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x1A4
	  fsubs     f0, f29, f30
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x1A4
	  li        r3, 0x1
	  b         .loc_0x4E8

	.loc_0x1A4:
	  li        r0, 0
	  lwz       r3, -0x6D0C(r13)
	  lis       r4, 0x804B
	  stw       r0, 0xA4(r1)
	  subi      r4, r4, 0x4364
	  cmplwi    r0, 0
	  stw       r4, 0x98(r1)
	  stw       r0, 0x9C(r1)
	  stw       r3, 0xA0(r1)
	  bne-      .loc_0x1E4
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x9C(r1)
	  b         .loc_0x26C

	.loc_0x1E4:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x9C(r1)
	  b         .loc_0x250

	.loc_0x1FC:
	  lwz       r3, 0xA0(r1)
	  lwz       r4, 0x9C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0xA4(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x26C
	  lwz       r3, 0xA0(r1)
	  lwz       r4, 0x9C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x9C(r1)

	.loc_0x250:
	  lwz       r12, 0x98(r1)
	  addi      r3, r1, 0x98
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x1FC

	.loc_0x26C:
	  fadds     f31, f29, f30
	  fsubs     f30, f29, f30
	  b         .loc_0x4C4

	.loc_0x278:
	  lwz       r3, 0xA0(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  mr        r29, r3
	  li        r30, 0
	  lwz       r12, 0x1C0(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x2DC
	  mr        r3, r29
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x2DC
	  mr        r3, r29
	  bl        -0x1C56DC
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x2DC
	  li        r30, 0x1

	.loc_0x2DC:
	  rlwinm.   r0,r30,0,24,31
	  beq-      .loc_0x408
	  mr        r4, r29
	  addi      r3, r1, 0x20
	  lwz       r12, 0x0(r29)
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
	  bl        -0x32FBEC
	  bl        0xACED8
	  lwz       r12, 0x0(r31)
	  fmr       f26, f1
	  mr        r3, r31
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fmr       f2, f1
	  fmr       f1, f26
	  bl        0xACEE0
	  fabs      f0, f1
	  frsp      f0, f0
	  fcmpo     cr0, f0, f28
	  cror      2, 0, 0x2
	  bne-      .loc_0x408
	  mr        r4, r29
	  addi      r3, r1, 0x68
	  lwz       r12, 0x0(r29)
	  lfs       f29, 0x194(r31)
	  lwz       r12, 0x8(r12)
	  lfs       f27, 0x18C(r31)
	  mtctr     r12
	  bctrl
	  mr        r4, r29
	  addi      r3, r1, 0x74
	  lwz       r12, 0x0(r29)
	  lfs       f26, 0x70(r1)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  fsubs     f0, f26, f29
	  lfs       f1, 0x74(r1)
	  fsubs     f1, f1, f27
	  fmuls     f0, f0, f0
	  fmadds    f0, f1, f1, f0
	  fcmpo     cr0, f0, f31
	  bge-      .loc_0x408
	  fcmpo     cr0, f0, f30
	  ble-      .loc_0x408
	  stw       r29, 0x230(r31)
	  li        r3, 0x1
	  b         .loc_0x4E8

	.loc_0x408:
	  lwz       r0, 0xA4(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x434
	  lwz       r3, 0xA0(r1)
	  lwz       r4, 0x9C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x9C(r1)
	  b         .loc_0x4C4

	.loc_0x434:
	  lwz       r3, 0xA0(r1)
	  lwz       r4, 0x9C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x9C(r1)
	  b         .loc_0x4A8

	.loc_0x454:
	  lwz       r3, 0xA0(r1)
	  lwz       r4, 0x9C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0xA4(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x4C4
	  lwz       r3, 0xA0(r1)
	  lwz       r4, 0x9C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x9C(r1)

	.loc_0x4A8:
	  lwz       r12, 0x98(r1)
	  addi      r3, r1, 0x98
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x454

	.loc_0x4C4:
	  lwz       r3, 0xA0(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x9C(r1)
	  cmplw     r4, r3
	  bne+      .loc_0x278
	  li        r3, 0

	.loc_0x4E8:
	  psq_l     f31,0x118(r1),0,0
	  lfd       f31, 0x110(r1)
	  psq_l     f30,0x108(r1),0,0
	  lfd       f30, 0x100(r1)
	  psq_l     f29,0xF8(r1),0,0
	  lfd       f29, 0xF0(r1)
	  psq_l     f28,0xE8(r1),0,0
	  lfd       f28, 0xE0(r1)
	  psq_l     f27,0xD8(r1),0,0
	  lfd       f27, 0xD0(r1)
	  psq_l     f26,0xC8(r1),0,0
	  lfd       f26, 0xC0(r1)
	  lwz       r31, 0xBC(r1)
	  lwz       r30, 0xB8(r1)
	  lwz       r0, 0x124(r1)
	  lwz       r29, 0xB4(r1)
	  mtlr      r0
	  addi      r1, r1, 0x120
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80364ECC
 * Size:	0004A4
 */
void Miulin::Obj::isFindTarget(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0xD0(r1)
	  mflr      r0
	  stw       r0, 0xD4(r1)
	  stfd      f31, 0xC0(r1)
	  psq_st    f31,0xC8(r1),0,0
	  stfd      f30, 0xB0(r1)
	  psq_st    f30,0xB8(r1),0,0
	  stfd      f29, 0xA0(r1)
	  psq_st    f29,0xA8(r1),0,0
	  stfd      f28, 0x90(r1)
	  psq_st    f28,0x98(r1),0,0
	  stfd      f27, 0x80(r1)
	  psq_st    f27,0x88(r1),0,0
	  stw       r31, 0x7C(r1)
	  stw       r30, 0x78(r1)
	  stw       r29, 0x74(r1)
	  mr        r31, r3
	  lfs       f1, 0x4D0(r2)
	  lwz       r4, 0xC0(r3)
	  li        r0, 0
	  lfs       f2, 0x4CC(r2)
	  lfs       f0, 0x49C(r4)
	  fmuls     f0, f1, f0
	  stw       r0, 0x230(r3)
	  fmuls     f31, f2, f0
	  bl        0xE54
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x78
	  lfs       f31, 0x4CC(r2)
	  b         .loc_0x90

	.loc_0x78:
	  mr        r3, r31
	  bl        0x464
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x90
	  li        r3, 0
	  b         .loc_0x460

	.loc_0x90:
	  lwz       r6, 0xC0(r31)
	  mr        r3, r31
	  addi      r4, r1, 0x8
	  li        r5, 0
	  lfs       f1, 0x44C(r6)
	  fmuls     f0, f1, f1
	  stfs      f1, 0x8(r1)
	  stfs      f0, 0x8(r1)
	  lwz       r6, 0xC0(r31)
	  lfs       f1, 0x49C(r6)
	  lfs       f2, 0x44C(r6)
	  bl        -0x252894
	  stw       r3, 0x230(r31)
	  li        r0, 0
	  lfs       f30, 0x4D4(r2)
	  lis       r4, 0x804B
	  lwz       r3, -0x6D0C(r13)
	  subi      r4, r4, 0x4364
	  cmplwi    r0, 0
	  fmuls     f30, f30, f30
	  stw       r4, 0x60(r1)
	  stw       r0, 0x6C(r1)
	  stw       r0, 0x64(r1)
	  stw       r3, 0x68(r1)
	  bne-      .loc_0x10C
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x64(r1)
	  b         .loc_0x3F4

	.loc_0x10C:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x64(r1)
	  b         .loc_0x178

	.loc_0x124:
	  lwz       r3, 0x68(r1)
	  lwz       r4, 0x64(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x6C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x3F4
	  lwz       r3, 0x68(r1)
	  lwz       r4, 0x64(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x64(r1)

	.loc_0x178:
	  lwz       r12, 0x60(r1)
	  addi      r3, r1, 0x60
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x124
	  b         .loc_0x3F4

	.loc_0x198:
	  lwz       r3, 0x68(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  mr        r29, r3
	  li        r30, 0
	  lwz       r12, 0x1C0(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x1FC
	  mr        r3, r29
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x1FC
	  mr        r3, r29
	  bl        -0x1C5B30
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1FC
	  li        r30, 0x1

	.loc_0x1FC:
	  rlwinm.   r0,r30,0,24,31
	  beq-      .loc_0x338
	  mr        r3, r29
	  bl        -0x1C5B60
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x338
	  mr        r4, r29
	  addi      r3, r1, 0x24
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r31
	  lfs       f2, 0x24(r1)
	  lwz       r12, 0x0(r31)
	  addi      r3, r1, 0x30
	  lfs       f1, 0x28(r1)
	  lfs       f0, 0x2C(r1)
	  lwz       r12, 0x8(r12)
	  stfs      f2, 0xC(r1)
	  stfs      f1, 0x10(r1)
	  stfs      f0, 0x14(r1)
	  mtctr     r12
	  bctrl
	  lfs       f5, 0x30(r1)
	  lis       r3, 0x8051
	  lfs       f3, 0x38(r1)
	  subi      r3, r3, 0x2E20
	  lfs       f1, 0xC(r1)
	  lfs       f0, 0x14(r1)
	  lfs       f4, 0x34(r1)
	  fsubs     f1, f1, f5
	  fsubs     f2, f0, f3
	  stfs      f5, 0x18(r1)
	  stfs      f4, 0x1C(r1)
	  stfs      f3, 0x20(r1)
	  bl        -0x330050
	  bl        0xACA74
	  lwz       r12, 0x0(r31)
	  fmr       f27, f1
	  mr        r3, r31
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fmr       f2, f1
	  fmr       f1, f27
	  bl        0xACA7C
	  fabs      f0, f1
	  frsp      f0, f0
	  fcmpo     cr0, f0, f31
	  cror      2, 0, 0x2
	  bne-      .loc_0x338
	  mr        r4, r29
	  addi      r3, r1, 0x48
	  lwz       r12, 0x0(r29)
	  lfs       f27, 0x194(r31)
	  lwz       r12, 0x8(r12)
	  lfs       f28, 0x18C(r31)
	  mtctr     r12
	  bctrl
	  mr        r4, r29
	  addi      r3, r1, 0x54
	  lwz       r12, 0x0(r29)
	  lfs       f29, 0x50(r1)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  fsubs     f1, f29, f27
	  lfs       f2, 0x54(r1)
	  lfs       f0, 0x8(r1)
	  fsubs     f2, f2, f28
	  fmuls     f1, f1, f1
	  fmadds    f1, f2, f2, f1
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x338
	  fcmpo     cr0, f1, f30
	  ble-      .loc_0x338
	  stw       r29, 0x230(r31)
	  stfs      f1, 0x8(r1)

	.loc_0x338:
	  lwz       r0, 0x6C(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x364
	  lwz       r3, 0x68(r1)
	  lwz       r4, 0x64(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x64(r1)
	  b         .loc_0x3F4

	.loc_0x364:
	  lwz       r3, 0x68(r1)
	  lwz       r4, 0x64(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x64(r1)
	  b         .loc_0x3D8

	.loc_0x384:
	  lwz       r3, 0x68(r1)
	  lwz       r4, 0x64(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x6C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x3F4
	  lwz       r3, 0x68(r1)
	  lwz       r4, 0x64(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x64(r1)

	.loc_0x3D8:
	  lwz       r12, 0x60(r1)
	  addi      r3, r1, 0x60
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x384

	.loc_0x3F4:
	  lwz       r3, 0x68(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x64(r1)
	  cmplw     r4, r3
	  bne+      .loc_0x198
	  lwz       r4, 0x230(r31)
	  cmplwi    r4, 0
	  beq-      .loc_0x45C
	  lwz       r12, 0x0(r4)
	  addi      r3, r1, 0x3C
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, 0x3C(r1)
	  li        r0, 0
	  li        r3, 0x1
	  stfs      f0, 0x2BC(r31)
	  lfs       f0, 0x40(r1)
	  stfs      f0, 0x2C0(r31)
	  lfs       f0, 0x44(r1)
	  stfs      f0, 0x2C4(r31)
	  stb       r0, 0x2E4(r31)
	  b         .loc_0x460

	.loc_0x45C:
	  li        r3, 0

	.loc_0x460:
	  psq_l     f31,0xC8(r1),0,0
	  lfd       f31, 0xC0(r1)
	  psq_l     f30,0xB8(r1),0,0
	  lfd       f30, 0xB0(r1)
	  psq_l     f29,0xA8(r1),0,0
	  lfd       f29, 0xA0(r1)
	  psq_l     f28,0x98(r1),0,0
	  lfd       f28, 0x90(r1)
	  psq_l     f27,0x88(r1),0,0
	  lfd       f27, 0x80(r1)
	  lwz       r31, 0x7C(r1)
	  lwz       r30, 0x78(r1)
	  lwz       r0, 0xD4(r1)
	  lwz       r29, 0x74(r1)
	  mtlr      r0
	  addi      r1, r1, 0xD0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80365370
 * Size:	00003C
 */
void Miulin::Obj::isOutOfTerritory(void)
{
	/*
	.loc_0x0:
	  lfs       f1, 0x1A0(r3)
	  lfs       f0, 0x194(r3)
	  lwz       r4, 0xC0(r3)
	  fsubs     f2, f1, f0
	  lfs       f1, 0x198(r3)
	  lfs       f0, 0x18C(r3)
	  lfs       f4, 0x35C(r4)
	  fsubs     f3, f1, f0
	  fmuls     f1, f2, f2
	  fmuls     f0, f4, f4
	  fmadds    f1, f3, f3, f1
	  fcmpo     cr0, f1, f0
	  mfcr      r0
	  rlwinm    r3,r0,2,31,31
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803653AC
 * Size:	000088
 */
void Miulin::Obj::isProhibitedSearch(void)
{
	/*
	.loc_0x0:
	  lwz       r0, 0x2D0(r3)
	  cmpwi     r0, 0
	  ble-      .loc_0x14
	  li        r3, 0x1
	  blr

	.loc_0x14:
	  lbz       r0, 0x2E4(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x80
	  lwz       r4, 0xC0(r3)
	  lfs       f2, 0x4D8(r2)
	  lfs       f3, 0x35C(r4)
	  lfs       f1, 0x20C(r3)
	  lfs       f0, 0x4B8(r2)
	  fmuls     f3, f3, f2
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x4C
	  stfs      f0, 0x20C(r3)
	  li        r3, 0
	  blr

	.loc_0x4C:
	  lfs       f2, 0x1A0(r3)
	  fmuls     f0, f3, f3
	  lfs       f1, 0x194(r3)
	  lfs       f3, 0x198(r3)
	  fsubs     f2, f2, f1
	  lfs       f1, 0x18C(r3)
	  fsubs     f3, f3, f1
	  fmuls     f1, f2, f2
	  fmadds    f1, f3, f3, f1
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x80
	  li        r3, 0x1
	  blr

	.loc_0x80:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80365434
 * Size:	0000AC
 */
void Miulin::Obj::isStartWalk(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lfs       f0, 0x4B8(r2)
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  lfs       f1, 0x20C(r3)
	  lwz       r3, 0xC0(r3)
	  fcmpo     cr0, f1, f0
	  lfs       f1, 0x424(r3)
	  ble-      .loc_0x34
	  lfs       f1, 0x4DC(r2)
	  stfs      f0, 0x20C(r31)

	.loc_0x34:
	  lwz       r5, 0xC0(r31)
	  mr        r3, r31
	  li        r4, 0
	  li        r6, 0
	  lfs       f2, 0x44C(r5)
	  li        r5, 0
	  bl        -0x252430
	  stw       r3, 0x230(r31)
	  lwz       r4, 0x230(r31)
	  cmplwi    r4, 0
	  beq-      .loc_0x94
	  lwz       r12, 0x0(r4)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, 0x8(r1)
	  li        r3, 0x1
	  stfs      f0, 0x2BC(r31)
	  lfs       f0, 0xC(r1)
	  stfs      f0, 0x2C0(r31)
	  lfs       f0, 0x10(r1)
	  stfs      f0, 0x2C4(r31)
	  b         .loc_0x98

	.loc_0x94:
	  li        r3, 0

	.loc_0x98:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803654E0
 * Size:	00002C
 */
void Miulin::Obj::setReturnState(void)
{
	/*
	.loc_0x0:
	  li        r4, 0
	  li        r0, 0x1
	  stw       r4, 0x230(r3)
	  stb       r0, 0x2E4(r3)
	  lfs       f0, 0x198(r3)
	  stfs      f0, 0x2BC(r3)
	  lfs       f0, 0x19C(r3)
	  stfs      f0, 0x2C0(r3)
	  lfs       f0, 0x1A0(r3)
	  stfs      f0, 0x2C4(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8036550C
 * Size:	000270
 */
void Miulin::Obj::walkFunc(void)
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
	  bl        -0x2602D4
	  lfs       f31, 0x4BC(r2)
	  lwz       r4, 0x230(r31)
	  fmr       f30, f31
	  cmplwi    r4, 0
	  beq-      .loc_0x128
	  lwz       r12, 0x0(r4)
	  addi      r3, r1, 0x2C
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r31
	  lfs       f2, 0x2C(r1)
	  lwz       r12, 0x0(r31)
	  addi      r3, r1, 0x38
	  lfs       f1, 0x30(r1)
	  lfs       f0, 0x34(r1)
	  lwz       r12, 0x8(r12)
	  stfs      f2, 0x14(r1)
	  stfs      f1, 0x18(r1)
	  stfs      f0, 0x1C(r1)
	  mtctr     r12
	  bctrl
	  lfs       f5, 0x38(r1)
	  lis       r3, 0x8051
	  lfs       f3, 0x40(r1)
	  subi      r3, r3, 0x2E20
	  lfs       f1, 0x14(r1)
	  lfs       f0, 0x1C(r1)
	  lfs       f4, 0x3C(r1)
	  fsubs     f1, f1, f5
	  fsubs     f2, f0, f3
	  stfs      f5, 0x20(r1)
	  stfs      f4, 0x24(r1)
	  stfs      f3, 0x28(r1)
	  bl        -0x3304C4
	  bl        0xAC600
	  lwz       r12, 0x0(r31)
	  fmr       f29, f1
	  mr        r3, r31
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fmr       f2, f1
	  fmr       f1, f29
	  bl        0xAC608
	  lwz       r4, 0xC0(r31)
	  fabs      f3, f1
	  lfs       f1, 0x4D0(r2)
	  lfs       f0, 0x8E4(r4)
	  lfs       f2, 0x4CC(r2)
	  frsp      f3, f3
	  fmuls     f0, f1, f0
	  fmuls     f0, f2, f0
	  fcmpo     cr0, f3, f0
	  bge-      .loc_0x128
	  lfs       f31, 0x86C(r4)
	  mr        r3, r31
	  lfs       f30, 0x894(r4)
	  bl        -0x263C60
	  b         .loc_0x130

	.loc_0x128:
	  mr        r3, r31
	  bl        -0x263CBC

	.loc_0x130:
	  mr        r3, r31
	  lwz       r4, 0xC0(r31)
	  lwz       r12, 0x0(r31)
	  lfs       f0, 0x2E4(r4)
	  lwz       r12, 0x64(r12)
	  fmuls     f29, f31, f0
	  mtctr     r12
	  bctrl
	  bl        -0x295E40
	  mr        r3, r31
	  lfs       f2, 0x1D4(r31)
	  lwz       r12, 0x0(r31)
	  frsp      f28, f1
	  lfs       f31, 0x1D8(r31)
	  lfs       f0, 0x1DC(r31)
	  lwz       r12, 0x64(r12)
	  stfs      f2, 0x8(r1)
	  stfs      f31, 0xC(r1)
	  stfs      f0, 0x10(r1)
	  mtctr     r12
	  bctrl
	  bl        -0x2963DC
	  fmuls     f2, f29, f28
	  lfs       f0, -0x63C8(r2)
	  frsp      f3, f1
	  mr        r3, r31
	  fmuls     f1, f0, f30
	  stfs      f2, 0x1D4(r31)
	  fmuls     f0, f29, f3
	  stfs      f31, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  bl        -0x25E328
	  lwz       r3, 0x2E0(r31)
	  addi      r0, r3, 0x1
	  stw       r0, 0x2E0(r31)
	  lwz       r0, 0x2E0(r31)
	  cmpwi     r0, 0x78
	  ble-      .loc_0x23C
	  lfs       f1, 0x194(r31)
	  lfs       f0, 0x2DC(r31)
	  lfs       f2, 0x18C(r31)
	  fsubs     f3, f1, f0
	  lfs       f1, 0x2D4(r31)
	  lfs       f0, 0x4E0(r2)
	  fsubs     f2, f2, f1
	  fmuls     f1, f3, f3
	  fmadds    f1, f2, f2, f1
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x21C
	  li        r3, 0x78
	  li        r0, 0
	  stw       r3, 0x2D0(r31)
	  stw       r0, 0x230(r31)
	  lfs       f0, 0x198(r31)
	  stfs      f0, 0x2BC(r31)
	  lfs       f0, 0x19C(r31)
	  stfs      f0, 0x2C0(r31)
	  lfs       f0, 0x1A0(r31)
	  stfs      f0, 0x2C4(r31)

	.loc_0x21C:
	  lfs       f0, 0x18C(r31)
	  li        r0, 0
	  stfs      f0, 0x2D4(r31)
	  lfs       f0, 0x190(r31)
	  stfs      f0, 0x2D8(r31)
	  lfs       f0, 0x194(r31)
	  stfs      f0, 0x2DC(r31)
	  stw       r0, 0x2E0(r31)

	.loc_0x23C:
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
 * Address:	8036577C
 * Size:	00017C
 */
void Miulin::Obj::turnFunc(float)
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
	  fmr       f30, f1
	  lwz       r4, 0x230(r3)
	  lfs       f31, 0x2BC(r3)
	  cmplwi    r4, 0
	  lfs       f28, 0x2C4(r3)
	  beq-      .loc_0x68
	  lwz       r12, 0x0(r4)
	  addi      r3, r1, 0x14
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f31, 0x14(r1)
	  lfs       f28, 0x1C(r1)

	.loc_0x68:
	  lwz       r5, 0xC0(r31)
	  mr        r4, r31
	  lwz       r12, 0x0(r31)
	  addi      r3, r1, 0x8
	  lfs       f1, 0x334(r5)
	  lfs       f0, 0x30C(r5)
	  lwz       r12, 0x8(r12)
	  fmuls     f29, f30, f1
	  fmuls     f30, f30, f0
	  mtctr     r12
	  bctrl
	  lfs       f1, 0x8(r1)
	  lis       r3, 0x8051
	  lfs       f0, 0x10(r1)
	  subi      r3, r3, 0x2E20
	  fsubs     f1, f31, f1
	  fsubs     f2, f28, f0
	  bl        -0x330720
	  bl        0xAC3A4
	  lwz       r12, 0x0(r31)
	  fmr       f31, f1
	  mr        r3, r31
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fmr       f2, f1
	  fmr       f1, f31
	  bl        0xAC3AC
	  fmr       f31, f1
	  lfs       f0, 0x4D0(r2)
	  lfs       f1, 0x4CC(r2)
	  fmuls     f0, f0, f29
	  fmuls     f29, f31, f30
	  fmuls     f1, f1, f0
	  fabs      f0, f29
	  frsp      f0, f0
	  fcmpo     cr0, f0, f1
	  ble-      .loc_0x118
	  lfs       f0, 0x4B8(r2)
	  fcmpo     cr0, f29, f0
	  ble-      .loc_0x114
	  fmr       f29, f1
	  b         .loc_0x118

	.loc_0x114:
	  fneg      f29, f1

	.loc_0x118:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fadds     f1, f29, f1
	  bl        0xAC324
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
 * Address:	803658F8
 * Size:	000050
 */
void Miulin::Obj::isReachToGoal(float)
{
	/*
	.loc_0x0:
	  lbz       r0, 0x2E4(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x14
	  lwz       r4, 0xC0(r3)
	  lfs       f1, 0x384(r4)

	.loc_0x14:
	  lfs       f2, 0x194(r3)
	  fmuls     f0, f1, f1
	  lfs       f1, 0x2C4(r3)
	  lfs       f3, 0x18C(r3)
	  fsubs     f2, f2, f1
	  lfs       f1, 0x2BC(r3)
	  fsubs     f3, f3, f1
	  fmuls     f1, f2, f2
	  fmadds    f1, f3, f3, f1
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x48
	  li        r3, 0x1
	  blr

	.loc_0x48:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80365948
 * Size:	00015C
 */
void Miulin::Obj::setNextGoal(void)
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
	  lbz       r0, 0x2E4(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x44
	  lfs       f0, 0x198(r31)
	  stfs      f0, 0x2BC(r31)
	  lfs       f0, 0x19C(r31)
	  stfs      f0, 0x2C0(r31)
	  lfs       f0, 0x1A0(r31)
	  stfs      f0, 0x2C4(r31)
	  b         .loc_0x140

	.loc_0x44:
	  lwz       r3, 0xC0(r31)
	  lfs       f0, 0x198(r31)
	  lfs       f31, 0x35C(r3)
	  stfs      f0, 0x2BC(r31)
	  lfs       f0, 0x19C(r31)
	  stfs      f0, 0x2C0(r31)
	  lfs       f0, 0x1A0(r31)
	  stfs      f0, 0x2C4(r31)
	  bl        -0x29C40C
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0xC(r1)
	  lfd       f3, 0x4F8(r2)
	  stw       r0, 0x8(r1)
	  lfs       f2, 0x4E4(r2)
	  lfd       f0, 0x8(r1)
	  lfs       f1, 0x4F0(r2)
	  fsubs     f3, f0, f3
	  lfs       f0, 0x4B8(r2)
	  fdivs     f2, f3, f2
	  fmuls     f3, f1, f2
	  fcmpo     cr0, f3, f0
	  bge-      .loc_0xCC
	  lfs       f0, 0x4E8(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fmuls     f0, f3, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x10(r1)
	  lwz       r0, 0x14(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r3, r0
	  fneg      f2, f0
	  b         .loc_0xF0

	.loc_0xCC:
	  lfs       f0, 0x4EC(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fmuls     f0, f3, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x18(r1)
	  lwz       r0, 0x1C(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f2, r3, r0

	.loc_0xF0:
	  lfs       f1, 0x2BC(r31)
	  lfs       f0, 0x4B8(r2)
	  fmadds    f1, f31, f2, f1
	  fcmpo     cr0, f3, f0
	  stfs      f1, 0x2BC(r31)
	  bge-      .loc_0x10C
	  fneg      f3, f3

	.loc_0x10C:
	  lfs       f1, 0x4EC(r2)
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

	.loc_0x140:
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
 * Address:	80365AA4
 * Size:	0002E0
 */
void Miulin::Obj::nextTargetTurnCheck(void)
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
	  stw       r30, 0x48(r1)
	  mr        r31, r3
	  bl        -0xC10
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x168
	  lbz       r0, 0x2E4(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x6C
	  lfs       f0, 0x198(r31)
	  stfs      f0, 0x2BC(r31)
	  lfs       f0, 0x19C(r31)
	  stfs      f0, 0x2C0(r31)
	  lfs       f0, 0x1A0(r31)
	  stfs      f0, 0x2C4(r31)
	  b         .loc_0x168

	.loc_0x6C:
	  lwz       r3, 0xC0(r31)
	  lfs       f0, 0x198(r31)
	  lfs       f31, 0x35C(r3)
	  stfs      f0, 0x2BC(r31)
	  lfs       f0, 0x19C(r31)
	  stfs      f0, 0x2C0(r31)
	  lfs       f0, 0x1A0(r31)
	  stfs      f0, 0x2C4(r31)
	  bl        -0x29C590
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x24(r1)
	  lfd       f3, 0x4F8(r2)
	  stw       r0, 0x20(r1)
	  lfs       f2, 0x4E4(r2)
	  lfd       f0, 0x20(r1)
	  lfs       f1, 0x4F0(r2)
	  fsubs     f3, f0, f3
	  lfs       f0, 0x4B8(r2)
	  fdivs     f2, f3, f2
	  fmuls     f3, f1, f2
	  fcmpo     cr0, f3, f0
	  bge-      .loc_0xF4
	  lfs       f0, 0x4E8(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fmuls     f0, f3, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x28(r1)
	  lwz       r0, 0x2C(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r3, r0
	  fneg      f2, f0
	  b         .loc_0x118

	.loc_0xF4:
	  lfs       f0, 0x4EC(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fmuls     f0, f3, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x30(r1)
	  lwz       r0, 0x34(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f2, r3, r0

	.loc_0x118:
	  lfs       f1, 0x2BC(r31)
	  lfs       f0, 0x4B8(r2)
	  fmadds    f1, f31, f2, f1
	  fcmpo     cr0, f3, f0
	  stfs      f1, 0x2BC(r31)
	  bge-      .loc_0x134
	  fneg      f3, f3

	.loc_0x134:
	  lfs       f1, 0x4EC(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  lfs       f0, 0x2C4(r31)
	  fmuls     f1, f3, f1
	  fctiwz    f1, f1
	  stfd      f1, 0x38(r1)
	  lwz       r0, 0x3C(r1)
	  rlwinm    r0,r0,3,18,28
	  add       r3, r3, r0
	  lfs       f1, 0x4(r3)
	  fmadds    f0, f31, f1, f0
	  stfs      f0, 0x2C4(r31)

	.loc_0x168:
	  lwz       r4, 0x230(r31)
	  lwz       r30, 0xC0(r31)
	  cmplwi    r4, 0
	  lfs       f31, 0x2BC(r31)
	  lfs       f28, 0x2C4(r31)
	  beq-      .loc_0x19C
	  lwz       r12, 0x0(r4)
	  addi      r3, r1, 0x14
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f31, 0x14(r1)
	  lfs       f28, 0x1C(r1)

	.loc_0x19C:
	  lwz       r5, 0xC0(r31)
	  mr        r4, r31
	  lwz       r12, 0x0(r31)
	  addi      r3, r1, 0x8
	  lfs       f2, 0x500(r2)
	  lfs       f1, 0x334(r5)
	  lfs       f0, 0x30C(r5)
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
	  bl        -0x330B80
	  bl        0xABF44
	  lwz       r12, 0x0(r31)
	  fmr       f31, f1
	  mr        r3, r31
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fmr       f2, f1
	  fmr       f1, f31
	  bl        0xABF4C
	  fmr       f31, f1
	  lfs       f0, 0x4D0(r2)
	  lfs       f1, 0x4CC(r2)
	  fmuls     f0, f0, f29
	  fmuls     f29, f31, f30
	  fmuls     f1, f1, f0
	  fabs      f0, f29
	  frsp      f0, f0
	  fcmpo     cr0, f0, f1
	  ble-      .loc_0x250
	  lfs       f0, 0x4B8(r2)
	  fcmpo     cr0, f29, f0
	  ble-      .loc_0x24C
	  fmr       f29, f1
	  b         .loc_0x250

	.loc_0x24C:
	  fneg      f29, f1

	.loc_0x250:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fadds     f1, f29, f1
	  bl        0xABEC4
	  stfs      f1, 0x1FC(r31)
	  fabs      f3, f31
	  lfs       f1, 0x4D0(r2)
	  lfs       f0, 0x1FC(r31)
	  lfs       f2, 0x4CC(r2)
	  frsp      f3, f3
	  stfs      f0, 0x1A8(r31)
	  lfs       f0, 0x8BC(r30)
	  fmuls     f0, f1, f0
	  fmuls     f0, f2, f0
	  fcmpo     cr0, f3, f0
	  bge-      .loc_0x2A4
	  li        r3, 0
	  b         .loc_0x2A8

	.loc_0x2A4:
	  li        r3, 0x1

	.loc_0x2A8:
	  psq_l     f31,0x88(r1),0,0
	  lfd       f31, 0x80(r1)
	  psq_l     f30,0x78(r1),0,0
	  lfd       f30, 0x70(r1)
	  psq_l     f29,0x68(r1),0,0
	  lfd       f29, 0x60(r1)
	  psq_l     f28,0x58(r1),0,0
	  lfd       f28, 0x50(r1)
	  lwz       r31, 0x4C(r1)
	  lwz       r0, 0x94(r1)
	  lwz       r30, 0x48(r1)
	  mtlr      r0
	  addi      r1, r1, 0x90
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80365D84
 * Size:	0000D0
 */
void Miulin::Obj::isNowCaution(void)
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
	  li        r4, 0
	  lwz       r5, 0xC0(r3)
	  lfs       f31, 0x3AC(r5)
	  fmr       f1, f31
	  bl        -0x2512F0
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x40
	  li        r3, 0x1
	  b         .loc_0x64

	.loc_0x40:
	  fmr       f1, f31
	  mr        r3, r31
	  li        r4, 0
	  bl        -0x25169C
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x60
	  li        r3, 0x1
	  b         .loc_0x64

	.loc_0x60:
	  li        r3, 0

	.loc_0x64:
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x84
	  lwz       r3, 0xC0(r31)
	  lfs       f1, 0x200(r31)
	  lfs       f0, 0x17C(r3)
	  fcmpo     cr0, f1, f0
	  mfcr      r0
	  rlwinm    r3,r0,1,31,31

	.loc_0x84:
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x9C
	  lfs       f0, 0x4B8(r2)
	  li        r3, 0x1
	  stfs      f0, 0x2E8(r31)
	  b         .loc_0xB4

	.loc_0x9C:
	  lwz       r3, 0xC0(r31)
	  lfs       f1, 0x2E8(r31)
	  lfs       f0, 0x62C(r3)
	  fcmpo     cr0, f1, f0
	  mfcr      r0
	  rlwinm    r3,r0,1,31,31

	.loc_0xB4:
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
 * Address:	80365E54
 * Size:	000028
 */
void Miulin::Obj::landEffect(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f1, 0x504(r2)
	  addi      r4, r3, 0x18C
	  stw       r0, 0x14(r1)
	  bl        -0x262318
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

} // namespace Game

/*
 * --INFO--
 * Address:	80365E7C
 * Size:	000144
 */
void attackEffect__Q34Game6Miulin3ObjFR10Vector3f(void)
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
	  stw       r31, 0x6C(r1)
	  stw       r30, 0x68(r1)
	  mr        r30, r3
	  lis       r3, 0x8051
	  lfs       f31, 0x18C(r30)
	  addi      r0, r3, 0x41E4
	  lfs       f30, 0x190(r30)
	  mr        r31, r4
	  lfs       f29, 0x194(r30)
	  mr        r4, r0
	  lfs       f1, 0x1FC(r30)
	  addi      r3, r1, 0x34
	  lfs       f0, 0x4B8(r2)
	  addi      r5, r1, 0x28
	  stfs      f1, 0x2C(r1)
	  stfs      f0, 0x28(r1)
	  stfs      f0, 0x30(r1)
	  bl        0xC29A4
	  mr        r4, r31
	  mr        r5, r31
	  addi      r3, r1, 0x34
	  bl        -0x27B31C
	  lfs       f2, 0x0(r31)
	  lis       r3, 0x804B
	  lfs       f1, 0x4(r31)
	  subi      r0, r3, 0x5808
	  lfs       f0, 0x8(r31)
	  lis       r3, 0x804E
	  fadds     f31, f31, f2
	  addi      r5, r3, 0x6A64
	  stw       r0, 0x18(r1)
	  fadds     f30, f30, f1
	  li        r6, 0
	  fadds     f29, f29, f0
	  lis       r4, 0x804E
	  lis       r3, 0x804B
	  subi      r0, r3, 0x5814
	  li        r8, 0x1F7
	  li        r7, 0x1F8
	  stw       r5, 0x18(r1)
	  addi      r5, r4, 0x25C8
	  addi      r3, r1, 0x18
	  sth       r8, 0x1C(r1)
	  addi      r4, r1, 0x8
	  sth       r7, 0x1E(r1)
	  stw       r6, 0x20(r1)
	  stw       r6, 0x24(r1)
	  stw       r5, 0x18(r1)
	  stw       r0, 0x8(r1)
	  stfs      f31, 0xC(r1)
	  stfs      f30, 0x10(r1)
	  stfs      f29, 0x14(r1)
	  bl        0x490A4
	  lwz       r0, 0x280(r30)
	  cmplwi    r0, 0
	  beq-      .loc_0x114
	  lfs       f1, 0x508(r2)
	  mr        r3, r30
	  addi      r4, r30, 0x18C
	  bl        -0x26243C

	.loc_0x114:
	  psq_l     f31,0x98(r1),0,0
	  lfd       f31, 0x90(r1)
	  psq_l     f30,0x88(r1),0,0
	  lfd       f30, 0x80(r1)
	  psq_l     f29,0x78(r1),0,0
	  lfd       f29, 0x70(r1)
	  lwz       r31, 0x6C(r1)
	  lwz       r0, 0xA4(r1)
	  lwz       r30, 0x68(r1)
	  mtlr      r0
	  addi      r1, r1, 0xA0
	  blr
	*/
}

namespace Game {

/*
 * --INFO--
 * Address:	80365FC0
 * Size:	000004
 */
void Miulin::Obj::setInitialSetting(Game::EnemyInitialParamBase*) { }

} // namespace Game

/*
 * --INFO--
 * Address:	80365FC4
 * Size:	000004
 */
void applyImpulse__Q34Game6Miulin3ObjFR10Vector3f R10Vector3f(void) { }

namespace Game {

/*
 * --INFO--
 * Address:	80365FC8
 * Size:	000008
 */
u32 Miulin::Obj::getEnemyTypeID(void) { return 0x36; }

/*
 * --INFO--
 * Address:	80365FD0
 * Size:	000008
 */
void Miulin::Obj::getDownSmokeScale(void)
{
	/*
	.loc_0x0:
	  lfs       f1, 0x50C(r2)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80365FD8
 * Size:	00001C
 */
void Miulin::Obj::getGoalPos(void)
{
	/*
	.loc_0x0:
	  lfs       f0, 0x2BC(r4)
	  stfs      f0, 0x0(r3)
	  lfs       f0, 0x2C0(r4)
	  stfs      f0, 0x4(r3)
	  lfs       f0, 0x2C4(r4)
	  stfs      f0, 0x8(r3)
	  blr
	*/
}
} // namespace Game
