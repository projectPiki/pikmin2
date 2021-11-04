#include "types.h"

namespace Game {

/*
 * --INFO--
 * Address:	8027730C
 * Size:	000224
 */
void Tadpole::FSM::init(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r4, 0x6
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x146AC0
	  li        r3, 0x10
	  bl        -0x253488
	  mr.       r4, r3
	  beq-      .loc_0x64
	  lis       r3, 0x804B
	  lis       r5, 0x804C
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804C
	  stw       r0, 0x0(r4)
	  li        r7, 0
	  addi      r6, r5, 0x7398
	  subi      r5, r2, 0x2FD0
	  stw       r7, 0x4(r4)
	  addi      r0, r3, 0x7374
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x64:
	  mr        r3, r31
	  bl        -0x146A6C
	  li        r3, 0x10
	  bl        -0x2534D8
	  mr.       r4, r3
	  beq-      .loc_0xB8
	  lis       r3, 0x804B
	  lis       r5, 0x804C
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804C
	  stw       r0, 0x0(r4)
	  li        r0, 0x1
	  li        r7, 0
	  addi      r6, r5, 0x7398
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x2FC8
	  addi      r0, r3, 0x7350
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0xB8:
	  mr        r3, r31
	  bl        -0x146AC0
	  li        r3, 0x10
	  bl        -0x25352C
	  mr.       r4, r3
	  beq-      .loc_0x10C
	  lis       r3, 0x804B
	  lis       r5, 0x804C
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804C
	  stw       r0, 0x0(r4)
	  li        r0, 0x2
	  li        r7, 0
	  addi      r6, r5, 0x7398
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x2FC0
	  addi      r0, r3, 0x732C
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x10C:
	  mr        r3, r31
	  bl        -0x146B14
	  li        r3, 0x10
	  bl        -0x253580
	  mr.       r4, r3
	  beq-      .loc_0x160
	  lis       r3, 0x804B
	  lis       r5, 0x804C
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804C
	  stw       r0, 0x0(r4)
	  li        r0, 0x3
	  li        r7, 0
	  addi      r6, r5, 0x7398
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x2FB8
	  addi      r0, r3, 0x7308
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x160:
	  mr        r3, r31
	  bl        -0x146B68
	  li        r3, 0x10
	  bl        -0x2535D4
	  mr.       r4, r3
	  beq-      .loc_0x1B4
	  lis       r3, 0x804B
	  lis       r5, 0x804C
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804C
	  stw       r0, 0x0(r4)
	  li        r0, 0x4
	  li        r7, 0
	  addi      r6, r5, 0x7398
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x2FB0
	  addi      r0, r3, 0x72E4
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x1B4:
	  mr        r3, r31
	  bl        -0x146BBC
	  li        r3, 0x10
	  bl        -0x253628
	  mr.       r4, r3
	  beq-      .loc_0x208
	  lis       r3, 0x804B
	  lis       r5, 0x804C
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804C
	  stw       r0, 0x0(r4)
	  li        r0, 0x5
	  li        r7, 0
	  addi      r6, r5, 0x7398
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x2FA8
	  addi      r0, r3, 0x72C0
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x208:
	  mr        r3, r31
	  bl        -0x146C10
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80277530
 * Size:	00005C
 */
void Tadpole::StateDead::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  bl        -0x171E28
	  lwz       r0, 0x1E0(r31)
	  mr        r3, r31
	  lfs       f0, -0x2FA0(r2)
	  li        r4, 0
	  rlwinm    r0,r0,0,26,24
	  li        r5, 0
	  stw       r0, 0x1E0(r31)
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  bl        -0x172570
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8027758C
 * Size:	000058
 */
void Tadpole::StateDead::exec(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x188(r4)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x48
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x2
	  bne-      .loc_0x34
	  mr        r3, r4
	  bl        0x1740
	  b         .loc_0x48

	.loc_0x34:
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x48
	  mr        r3, r4
	  li        r4, 0
	  bl        -0x13C4E0

	.loc_0x48:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802775E4
 * Size:	000004
 */
void Tadpole::StateDead::cleanup(Game::EnemyBase*) { }

/*
 * --INFO--
 * Address:	802775E8
 * Size:	000048
 */
void Tadpole::StateWait::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x2FA0(r2)
	  mr        r3, r4
	  stw       r0, 0x14(r1)
	  li        r0, 0x2
	  li        r5, 0
	  stfs      f0, 0x2C4(r4)
	  li        r4, 0x1
	  stw       r0, 0x2C8(r3)
	  stfs      f0, 0x1D4(r3)
	  stfs      f0, 0x1D8(r3)
	  stfs      f0, 0x1DC(r3)
	  bl        -0x172618
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80277630
 * Size:	00015C
 */
void Tadpole::StateWait::exec(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lfs       f0, -0x2F9C(r2)
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r4
	  stw       r30, 0x18(r1)
	  mr        r30, r3
	  lfs       f1, 0x2C4(r4)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x34
	  mr        r3, r31
	  bl        -0x1723C0

	.loc_0x34:
	  lwz       r6, 0xC0(r31)
	  mr        r3, r31
	  li        r4, 0
	  li        r5, 0
	  lfs       f1, 0x424(r6)
	  lfs       f2, 0x3D4(r6)
	  bl        -0x164F88
	  cmplwi    r3, 0
	  beq-      .loc_0x90
	  mr        r4, r31
	  mr        r5, r3
	  addi      r3, r1, 0x8
	  bl        0x149C
	  lfs       f1, 0xC(r1)
	  li        r0, 0x3
	  lfs       f2, 0x10(r1)
	  mr        r3, r31
	  lfs       f0, 0x8(r1)
	  stfs      f0, 0x2CC(r31)
	  stfs      f1, 0x2D0(r31)
	  stfs      f2, 0x2D4(r31)
	  stw       r0, 0x2C8(r31)
	  bl        -0x17241C

	.loc_0x90:
	  lwz       r3, -0x6514(r13)
	  lfs       f2, 0x2C4(r31)
	  lfs       f1, 0x54(r3)
	  lfs       f0, -0x2FA0(r2)
	  fadds     f1, f2, f1
	  stfs      f1, 0x2C4(r31)
	  lfs       f1, 0x200(r31)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0xDC
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x144

	.loc_0xDC:
	  lwz       r0, 0x280(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x108
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x5
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x108:
	  lwz       r3, 0x188(r31)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x144
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x144
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r6, 0
	  lwz       r5, 0x2C8(r31)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x144:
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
 * Address:	8027778C
 * Size:	000004
 */
void Tadpole::StateWait::cleanup(Game::EnemyBase*) { }

/*
 * --INFO--
 * Address:	80277790
 * Size:	000054
 */
void Tadpole::StateMove::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x2FA0(r2)
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  li        r4, 0
	  stfs      f0, 0x2C4(r31)
	  mr        r3, r31
	  bl        0x1198
	  li        r0, 0x1
	  mr        r3, r31
	  stw       r0, 0x2C8(r31)
	  li        r4, 0x2
	  li        r5, 0
	  bl        -0x1727C8
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802777E4
 * Size:	000210
 */
void Tadpole::StateMove::exec(Game::EnemyBase*)
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
	  lwz       r12, 0x0(r4)
	  mr        r30, r3
	  addi      r3, r1, 0x14
	  mr        r31, r4
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f1, 0x2D0(r31)
	  mr        r3, r31
	  lfs       f2, 0x2D4(r31)
	  addi      r4, r1, 0x20
	  lfs       f0, 0x2CC(r31)
	  lfs       f31, 0x14(r1)
	  stfs      f0, 0x20(r1)
	  lfs       f30, 0x1C(r1)
	  stfs      f1, 0x24(r1)
	  stfs      f2, 0x28(r1)
	  lwz       r5, 0xC0(r31)
	  lfs       f1, 0x2E4(r5)
	  lfs       f2, 0x30C(r5)
	  lfs       f3, 0x334(r5)
	  bl        -0x162280
	  lfs       f1, 0x2C4(r31)
	  lfs       f0, -0x2F9C(r2)
	  fcmpo     cr0, f1, f0
	  bgt-      .loc_0xB0
	  lfs       f0, 0x28(r1)
	  lfs       f1, 0x20(r1)
	  fsubs     f2, f30, f0
	  lfs       f0, -0x2F98(r2)
	  fsubs     f3, f31, f1
	  fmuls     f1, f2, f2
	  fmadds    f1, f3, f3, f1
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0xC8

	.loc_0xB0:
	  lfs       f0, -0x2FA0(r2)
	  mr        r3, r31
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  bl        -0x172608

	.loc_0xC8:
	  lwz       r6, 0xC0(r31)
	  mr        r3, r31
	  li        r4, 0
	  li        r5, 0
	  lfs       f1, 0x424(r6)
	  lfs       f2, 0x3D4(r6)
	  bl        -0x1651D0
	  cmplwi    r3, 0
	  beq-      .loc_0x134
	  mr        r4, r31
	  mr        r5, r3
	  addi      r3, r1, 0x8
	  bl        0x1254
	  lfs       f2, 0xC(r1)
	  li        r0, 0x3
	  lfs       f3, 0x10(r1)
	  mr        r3, r31
	  lfs       f1, 0x8(r1)
	  lfs       f0, -0x2FA0(r2)
	  stfs      f1, 0x2CC(r31)
	  stfs      f2, 0x2D0(r31)
	  stfs      f3, 0x2D4(r31)
	  stw       r0, 0x2C8(r31)
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  bl        -0x172674

	.loc_0x134:
	  lwz       r3, -0x6514(r13)
	  lfs       f2, 0x2C4(r31)
	  lfs       f1, 0x54(r3)
	  lfs       f0, -0x2FA0(r2)
	  fadds     f1, f2, f1
	  stfs      f1, 0x2C4(r31)
	  lfs       f1, 0x200(r31)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x180
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x1E8

	.loc_0x180:
	  lwz       r0, 0x280(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x1AC
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x5
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x1AC:
	  lwz       r3, 0x188(r31)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x1E8
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x1E8
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r6, 0
	  lwz       r5, 0x2C8(r31)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x1E8:
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
 * Address:	802779F4
 * Size:	000004
 */
void Tadpole::StateMove::cleanup(Game::EnemyBase*) { }

/*
 * --INFO--
 * Address:	802779F8
 * Size:	00005C
 */
void Tadpole::StateAmaze::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x2FA0(r2)
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  lwz       r0, 0x1E0(r4)
	  rlwinm    r0,r0,0,11,9
	  stw       r0, 0x1E0(r4)
	  stfs      f0, 0x1D4(r4)
	  stfs      f0, 0x1D8(r4)
	  stfs      f0, 0x1DC(r4)
	  bl        -0x176060
	  mr        r3, r31
	  li        r4, 0x3
	  li        r5, 0
	  bl        -0x172A38
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80277A54
 * Size:	0000B4
 */
void Tadpole::StateAmaze::exec(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  lwz       r5, 0x188(r4)
	  lbz       r0, 0x24(r5)
	  cmplwi    r0, 0
	  beq-      .loc_0xA0
	  lwz       r0, 0x1C(r5)
	  cmplwi    r0, 0x2
	  bne-      .loc_0x68
	  lwz       r0, 0x1E0(r31)
	  mr        r3, r31
	  oris      r0, r0, 0x20
	  stw       r0, 0x1E0(r31)
	  bl        0x1264
	  lwz       r5, 0xC0(r31)
	  mr        r3, r31
	  lfs       f4, -0x2F94(r2)
	  li        r4, 0
	  lfs       f1, 0x514(r5)
	  lfs       f2, 0x4C4(r5)
	  lfs       f3, 0x4EC(r5)
	  bl        -0x1645E0
	  b         .loc_0xA0

	.loc_0x68:
	  cmplwi    r0, 0x3
	  bne-      .loc_0x80
	  lwz       r0, 0x1E0(r31)
	  rlwinm    r0,r0,0,11,9
	  stw       r0, 0x1E0(r31)
	  b         .loc_0xA0

	.loc_0x80:
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0xA0
	  lwz       r12, 0x0(r3)
	  li        r5, 0x4
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0xA0:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80277B08
 * Size:	000030
 */
void Tadpole::StateAmaze::cleanup(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r3, r4
	  stw       r0, 0x14(r1)
	  lwz       r0, 0x1E0(r4)
	  rlwinm    r0,r0,0,11,9
	  stw       r0, 0x1E0(r4)
	  bl        -0x1761A8
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80277B38
 * Size:	000040
 */
void Tadpole::StateEscape::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  bl        -0x176184
	  mr        r3, r31
	  li        r4, 0x2
	  li        r5, 0
	  bl        -0x172B5C
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80277B78
 * Size:	000168
 */
void Tadpole::StateEscape::exec(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  li        r5, 0
	  stw       r0, 0x44(r1)
	  stw       r31, 0x3C(r1)
	  mr        r31, r4
	  li        r4, 0
	  stw       r30, 0x38(r1)
	  stw       r29, 0x34(r1)
	  mr        r29, r3
	  mr        r3, r31
	  lwz       r6, 0xC0(r31)
	  lfs       f1, 0x424(r6)
	  lfs       f2, 0x3D4(r6)
	  bl        -0x1654BC
	  mr.       r30, r3
	  beq-      .loc_0xA4
	  mr        r4, r31
	  addi      r3, r1, 0x14
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r31
	  mr        r5, r30
	  addi      r3, r1, 0x8
	  bl        0xF50
	  lfs       f2, 0x8(r1)
	  mr        r3, r31
	  lfs       f1, 0xC(r1)
	  addi      r4, r1, 0x20
	  lfs       f0, 0x10(r1)
	  stfs      f2, 0x20(r1)
	  stfs      f1, 0x24(r1)
	  stfs      f0, 0x28(r1)
	  lwz       r5, 0xC0(r31)
	  lfs       f1, 0x2E4(r5)
	  lfs       f2, 0x30C(r5)
	  lfs       f3, 0x334(r5)
	  bl        -0x162638
	  b         .loc_0xAC

	.loc_0xA4:
	  mr        r3, r31
	  bl        -0x172980

	.loc_0xAC:
	  lfs       f1, 0x200(r31)
	  lfs       f0, -0x2FA0(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0xE4
	  mr        r3, r29
	  mr        r4, r31
	  lwz       r12, 0x0(r29)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x14C

	.loc_0xE4:
	  lwz       r0, 0x280(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x110
	  mr        r3, r29
	  mr        r4, r31
	  lwz       r12, 0x0(r29)
	  li        r5, 0x5
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x110:
	  lwz       r3, 0x188(r31)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x14C
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x14C
	  mr        r3, r29
	  mr        r4, r31
	  lwz       r12, 0x0(r29)
	  li        r5, 0x1
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x14C:
	  lwz       r0, 0x44(r1)
	  lwz       r31, 0x3C(r1)
	  lwz       r30, 0x38(r1)
	  lwz       r29, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80277CE0
 * Size:	000024
 */
void Tadpole::StateEscape::cleanup(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r3, r4
	  stw       r0, 0x14(r1)
	  bl        -0x176374
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80277D04
 * Size:	0000E0
 */
void Tadpole::StateLeap::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  lfs       f0, -0x2FA0(r2)
	  stw       r0, 0x34(r1)
	  stw       r31, 0x2C(r1)
	  mr        r31, r4
	  li        r4, 0x1
	  stfs      f0, 0x2C4(r31)
	  mr        r3, r31
	  bl        0xC24
	  bl        -0x1AE78C
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x1C(r1)
	  lfd       f3, -0x2F80(r2)
	  stw       r0, 0x18(r1)
	  lfs       f2, -0x2F90(r2)
	  lfd       f0, 0x18(r1)
	  lfs       f1, -0x2F8C(r2)
	  fsubs     f3, f0, f3
	  lfs       f0, -0x2F88(r2)
	  fmuls     f2, f2, f3
	  fdivs     f1, f2, f1
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x70
	  li        r0, 0x1
	  stb       r0, 0x2C0(r31)
	  b         .loc_0x78

	.loc_0x70:
	  li        r0, 0
	  stb       r0, 0x2C0(r31)

	.loc_0x78:
	  li        r0, -0x1
	  mr        r3, r31
	  stw       r0, 0x2C8(r31)
	  li        r4, 0x4
	  li        r5, 0
	  lwz       r0, 0x1E0(r31)
	  oris      r0, r0, 0x20
	  stw       r0, 0x1E0(r31)
	  bl        -0x172D98
	  mr        r4, r31
	  addi      r3, r1, 0x8
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x6C(r12)
	  mtctr     r12
	  bctrl
	  lfs       f1, 0xC(r1)
	  lfs       f2, 0x10(r1)
	  lfs       f0, 0x8(r1)
	  stfs      f0, 0x1D4(r31)
	  stfs      f1, 0x1D8(r31)
	  stfs      f2, 0x1DC(r31)
	  lwz       r31, 0x2C(r1)
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80277DE4
 * Size:	0003FC
 */
void Tadpole::StateLeap::exec(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x80(r1)
	  mflr      r0
	  stw       r0, 0x84(r1)
	  stfd      f31, 0x70(r1)
	  psq_st    f31,0x78(r1),0,0
	  stfd      f30, 0x60(r1)
	  psq_st    f30,0x68(r1),0,0
	  stfd      f29, 0x50(r1)
	  psq_st    f29,0x58(r1),0,0
	  stfd      f28, 0x40(r1)
	  psq_st    f28,0x48(r1),0,0
	  stfd      f27, 0x30(r1)
	  psq_st    f27,0x38(r1),0,0
	  stw       r31, 0x2C(r1)
	  stw       r30, 0x28(r1)
	  mr        r31, r4
	  mr        r30, r3
	  mr        r3, r31
	  bl        -0x170B2C
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x68
	  lfs       f0, -0x2FA0(r2)
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  b         .loc_0x20C

	.loc_0x68:
	  mr        r3, r31
	  bl        -0x172BE4
	  lfs       f0, -0x2F78(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x20C
	  mr        r4, r31
	  addi      r3, r1, 0x14
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x280(r31)
	  lfs       f31, 0x14(r1)
	  cmplwi    r0, 0
	  lfs       f30, 0x1C(r1)
	  lfs       f29, 0x2CC(r31)
	  lfs       f28, 0x2D4(r31)
	  beq-      .loc_0xC8
	  li        r0, 0x1
	  mr        r3, r31
	  stw       r0, 0x2C8(r31)
	  bl        -0x172C04
	  b         .loc_0x108

	.loc_0xC8:
	  lfs       f1, 0x2C4(r31)
	  lfs       f0, -0x2F74(r2)
	  fcmpo     cr0, f1, f0
	  bgt-      .loc_0xF4
	  fsubs     f1, f30, f28
	  lfs       f0, -0x2F98(r2)
	  fsubs     f2, f31, f29
	  fmuls     f1, f1, f1
	  fmadds    f1, f2, f2, f1
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x108

	.loc_0xF4:
	  lfs       f0, -0x2FA0(r2)
	  mr        r3, r31
	  li        r4, 0x1
	  stfs      f0, 0x2C4(r31)
	  bl        0xA64

	.loc_0x108:
	  lbz       r0, 0x2C0(r31)
	  lfs       f27, -0x2FA0(r2)
	  cmplwi    r0, 0
	  beq-      .loc_0x124
	  lfs       f0, -0x2F70(r2)
	  fadds     f27, f27, f0
	  b         .loc_0x12C

	.loc_0x124:
	  lfs       f0, -0x2F70(r2)
	  fsubs     f27, f27, f0

	.loc_0x12C:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fadds     f1, f27, f1
	  lfs       f0, -0x2FA0(r2)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x15C
	  lfs       f0, -0x2F6C(r2)
	  fadds     f1, f0, f1
	  b         .loc_0x170

	.loc_0x15C:
	  lfs       f0, -0x2F6C(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x170
	  fsubs     f1, f1, f0

	.loc_0x170:
	  fsubs     f7, f28, f30
	  stfs      f1, 0x1FC(r31)
	  fsubs     f5, f29, f31
	  lfs       f6, -0x2FA0(r2)
	  lfs       f1, 0x1FC(r31)
	  fmuls     f2, f7, f7
	  fmadds    f0, f5, f5, f6
	  stfs      f1, 0x1A8(r31)
	  lfs       f3, 0x1D4(r31)
	  fadds     f1, f2, f0
	  lfs       f4, 0x1DC(r31)
	  fcmpo     cr0, f1, f6
	  ble-      .loc_0x1B4
	  ble-      .loc_0x1B8
	  fsqrte    f0, f1
	  fmuls     f1, f0, f1
	  b         .loc_0x1B8

	.loc_0x1B4:
	  fmr       f1, f6

	.loc_0x1B8:
	  lfs       f0, -0x2FA0(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x1D8
	  lfs       f0, -0x2F90(r2)
	  fdivs     f0, f0, f1
	  fmuls     f5, f5, f0
	  fmuls     f6, f6, f0
	  fmuls     f7, f7, f0

	.loc_0x1D8:
	  lwz       r3, 0xC0(r31)
	  lfs       f2, -0x2F68(r2)
	  lfs       f0, 0x81C(r3)
	  fmuls     f5, f5, f0
	  fmuls     f7, f7, f0
	  fmuls     f6, f6, f0
	  fsubs     f1, f5, f3
	  fsubs     f0, f7, f4
	  fmadds    f1, f2, f1, f3
	  fmadds    f0, f2, f0, f4
	  stfs      f1, 0x1D4(r31)
	  stfs      f6, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)

	.loc_0x20C:
	  lwz       r3, -0x6514(r13)
	  lfs       f2, 0x2C4(r31)
	  lfs       f1, 0x54(r3)
	  lfs       f0, -0x2FA0(r2)
	  fadds     f1, f2, f1
	  stfs      f1, 0x2C4(r31)
	  lfs       f1, 0x200(r31)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x258
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x3BC

	.loc_0x258:
	  lwz       r3, 0x188(r31)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x3BC
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x2
	  bne-      .loc_0x280
	  mr        r3, r31
	  bl        0xC9C
	  b         .loc_0x3BC

	.loc_0x280:
	  cmplwi    r0, 0x3
	  bne-      .loc_0x2A0
	  lwz       r0, 0x1E0(r31)
	  mr        r3, r31
	  rlwinm    r0,r0,0,11,9
	  stw       r0, 0x1E0(r31)
	  bl        0xC7C
	  b         .loc_0x3BC

	.loc_0x2A0:
	  cmplwi    r0, 0x4
	  bne-      .loc_0x2B8
	  lwz       r0, 0x1E0(r31)
	  oris      r0, r0, 0x20
	  stw       r0, 0x1E0(r31)
	  b         .loc_0x3BC

	.loc_0x2B8:
	  cmplwi    r0, 0
	  bne-      .loc_0x2D0
	  lwz       r0, 0x1E0(r31)
	  oris      r0, r0, 0x20
	  stw       r0, 0x1E0(r31)
	  b         .loc_0x3BC

	.loc_0x2D0:
	  cmplwi    r0, 0x1
	  bne-      .loc_0x340
	  lwz       r0, 0x1E0(r31)
	  mr        r3, r31
	  rlwinm    r0,r0,0,11,9
	  stw       r0, 0x1E0(r31)
	  bl        0xC2C
	  bl        -0x1AEB30
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x24(r1)
	  lfd       f3, -0x2F80(r2)
	  stw       r0, 0x20(r1)
	  lfs       f2, -0x2F90(r2)
	  lfd       f0, 0x20(r1)
	  lfs       f1, -0x2F8C(r2)
	  fsubs     f3, f0, f3
	  lfs       f0, -0x2F88(r2)
	  fmuls     f2, f2, f3
	  fdivs     f1, f2, f1
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x334
	  li        r0, 0x1
	  stb       r0, 0x2C0(r31)
	  b         .loc_0x3BC

	.loc_0x334:
	  li        r0, 0
	  stb       r0, 0x2C0(r31)
	  b         .loc_0x3BC

	.loc_0x340:
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x3BC
	  lwz       r6, 0xC0(r31)
	  mr        r3, r31
	  li        r4, 0
	  li        r5, 0
	  lfs       f1, 0x424(r6)
	  lfs       f2, 0x3D4(r6)
	  bl        -0x165A50
	  cmplwi    r3, 0
	  beq-      .loc_0x39C
	  mr        r4, r31
	  mr        r5, r3
	  addi      r3, r1, 0x8
	  bl        0x9D4
	  lfs       f1, 0xC(r1)
	  li        r0, 0x3
	  lfs       f2, 0x10(r1)
	  lfs       f0, 0x8(r1)
	  stfs      f0, 0x2CC(r31)
	  stfs      f1, 0x2D0(r31)
	  stfs      f2, 0x2D4(r31)
	  stw       r0, 0x2C8(r31)

	.loc_0x39C:
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r6, 0
	  lwz       r5, 0x2C8(r31)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x3BC:
	  psq_l     f31,0x78(r1),0,0
	  lfd       f31, 0x70(r1)
	  psq_l     f30,0x68(r1),0,0
	  lfd       f30, 0x60(r1)
	  psq_l     f29,0x58(r1),0,0
	  lfd       f29, 0x50(r1)
	  psq_l     f28,0x48(r1),0,0
	  lfd       f28, 0x40(r1)
	  psq_l     f27,0x38(r1),0,0
	  lfd       f27, 0x30(r1)
	  lwz       r31, 0x2C(r1)
	  lwz       r0, 0x84(r1)
	  lwz       r30, 0x28(r1)
	  mtlr      r0
	  addi      r1, r1, 0x80
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802781E0
 * Size:	000010
 */
void Tadpole::StateLeap::cleanup(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  lwz       r0, 0x1E0(r4)
	  rlwinm    r0,r0,0,11,9
	  stw       r0, 0x1E0(r4)
	  blr
	*/
}
} // namespace Game
