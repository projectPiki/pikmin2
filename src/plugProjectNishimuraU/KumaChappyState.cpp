#include "types.h"

namespace Game {

/*
 * --INFO--
 * Address:	80295E28
 * Size:	000328
 */
void KumaChappy::FSM::init(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r4, 0x9
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x1655DC
	  li        r3, 0x10
	  bl        -0x271FA4
	  mr.       r4, r3
	  beq-      .loc_0x64
	  lis       r3, 0x804B
	  lis       r5, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804D
	  stw       r0, 0x0(r4)
	  li        r7, 0
	  subi      r6, r5, 0x44D4
	  subi      r5, r2, 0x2880
	  stw       r7, 0x4(r4)
	  subi      r0, r3, 0x44F8
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x64:
	  mr        r3, r31
	  bl        -0x165588
	  li        r3, 0x10
	  bl        -0x271FF4
	  mr.       r4, r3
	  beq-      .loc_0xB8
	  lis       r3, 0x804B
	  lis       r5, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804D
	  stw       r0, 0x0(r4)
	  li        r0, 0x1
	  li        r7, 0
	  subi      r6, r5, 0x44D4
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x2878
	  subi      r0, r3, 0x451C
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0xB8:
	  mr        r3, r31
	  bl        -0x1655DC
	  li        r3, 0x10
	  bl        -0x272048
	  mr.       r4, r3
	  beq-      .loc_0x10C
	  lis       r3, 0x804B
	  lis       r5, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804D
	  stw       r0, 0x0(r4)
	  li        r0, 0x2
	  li        r7, 0
	  subi      r6, r5, 0x44D4
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x2870
	  subi      r0, r3, 0x4540
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x10C:
	  mr        r3, r31
	  bl        -0x165630
	  li        r3, 0x10
	  bl        -0x27209C
	  mr.       r4, r3
	  beq-      .loc_0x160
	  lis       r3, 0x804B
	  lis       r5, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804D
	  stw       r0, 0x0(r4)
	  li        r0, 0x3
	  li        r7, 0
	  subi      r6, r5, 0x44D4
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x2868
	  subi      r0, r3, 0x4564
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x160:
	  mr        r3, r31
	  bl        -0x165684
	  li        r3, 0x10
	  bl        -0x2720F0
	  mr.       r4, r3
	  beq-      .loc_0x1B4
	  lis       r3, 0x804B
	  lis       r5, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804D
	  stw       r0, 0x0(r4)
	  li        r0, 0x4
	  li        r7, 0
	  subi      r6, r5, 0x44D4
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x2860
	  subi      r0, r3, 0x4588
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x1B4:
	  mr        r3, r31
	  bl        -0x1656D8
	  li        r3, 0x10
	  bl        -0x272144
	  mr.       r4, r3
	  beq-      .loc_0x208
	  lis       r3, 0x804B
	  lis       r5, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804D
	  stw       r0, 0x0(r4)
	  li        r0, 0x5
	  li        r7, 0
	  subi      r6, r5, 0x44D4
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x2858
	  subi      r0, r3, 0x45AC
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x208:
	  mr        r3, r31
	  bl        -0x16572C
	  li        r3, 0x10
	  bl        -0x272198
	  mr.       r4, r3
	  beq-      .loc_0x260
	  lis       r3, 0x804B
	  lis       r6, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r5, 0x8049
	  stw       r0, 0x0(r4)
	  li        r0, 0x6
	  lis       r3, 0x804D
	  li        r7, 0
	  stw       r0, 0x4(r4)
	  subi      r6, r6, 0x44D4
	  subi      r5, r5, 0x7738
	  subi      r0, r3, 0x45D0
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x260:
	  mr        r3, r31
	  bl        -0x165784
	  li        r3, 0x10
	  bl        -0x2721F0
	  mr.       r4, r3
	  beq-      .loc_0x2B4
	  lis       r3, 0x804B
	  lis       r5, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804D
	  stw       r0, 0x0(r4)
	  li        r0, 0x7
	  li        r7, 0
	  subi      r6, r5, 0x44D4
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x2850
	  subi      r0, r3, 0x45F4
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x2B4:
	  mr        r3, r31
	  bl        -0x1657D8
	  li        r3, 0x10
	  bl        -0x272244
	  mr.       r4, r3
	  beq-      .loc_0x30C
	  lis       r3, 0x804B
	  lis       r6, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r5, 0x8049
	  stw       r0, 0x0(r4)
	  li        r0, 0x8
	  lis       r3, 0x804D
	  li        r7, 0
	  stw       r0, 0x4(r4)
	  subi      r6, r6, 0x44D4
	  subi      r5, r5, 0x772C
	  subi      r0, r3, 0x4618
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x30C:
	  mr        r3, r31
	  bl        -0x165830
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80296150
 * Size:	000050
 */
void KumaChappy::StateDead::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  bl        -0x190A48
	  lfs       f0, -0x2848(r2)
	  mr        r3, r31
	  li        r4, 0x1
	  li        r5, 0
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  bl        -0x191184
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802961A0
 * Size:	000098
 */
void KumaChappy::StateDead::exec(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  lwz       r3, 0x188(r4)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x84
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x2
	  bne-      .loc_0x48
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x304(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x84

	.loc_0x48:
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x84
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x258(r12)
	  mtctr     r12
	  bctrl
	  cmpwi     r3, 0x23
	  bne-      .loc_0x78
	  lwz       r0, 0x1E0(r31)
	  rlwinm    r0,r0,0,24,22
	  stw       r0, 0x1E0(r31)

	.loc_0x78:
	  mr        r3, r31
	  li        r4, 0
	  bl        -0x15B130

	.loc_0x84:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80296238
 * Size:	000008
 */
u32 KumaChappy::Obj::getEnemyTypeID() { return 0x23; }

/*
 * --INFO--
 * Address:	80296240
 * Size:	000004
 */
void KumaChappy::StateDead::cleanup(Game::EnemyBase*) { }

/*
 * --INFO--
 * Address:	80296244
 * Size:	000058
 */
void KumaChappy::StateRebirth::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r5, -0x1
	  mr        r3, r4
	  stw       r0, 0x14(r1)
	  li        r0, 0
	  lfs       f0, -0x2848(r2)
	  stw       r5, 0x2D4(r4)
	  li        r4, 0x8
	  li        r5, 0
	  lwz       r6, 0x1E0(r3)
	  rlwinm    r6,r6,0,11,9
	  stw       r6, 0x1E0(r3)
	  stw       r0, 0x230(r3)
	  stfs      f0, 0x1D4(r3)
	  stfs      f0, 0x1D8(r3)
	  stfs      f0, 0x1DC(r3)
	  bl        -0x191284
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8029629C
 * Size:	0005B0
 */
void KumaChappy::StateRebirth::exec(Game::EnemyBase*)
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
	  stw       r31, 0xDC(r1)
	  stw       r30, 0xD8(r1)
	  stw       r29, 0xD4(r1)
	  stw       r28, 0xD0(r1)
	  lwz       r5, 0x188(r4)
	  mr        r30, r3
	  mr        r31, r4
	  lbz       r0, 0x24(r5)
	  cmplwi    r0, 0
	  beq-      .loc_0x558
	  lwz       r0, 0x1C(r5)
	  cmplwi    r0, 0x2
	  bne-      .loc_0xE4
	  lwz       r5, 0xC0(r31)
	  mr        r3, r31
	  lfs       f4, -0x2844(r2)
	  li        r4, 0
	  lfs       f1, 0x53C(r5)
	  lfs       f2, 0x4C4(r5)
	  lfs       f3, 0x4EC(r5)
	  bl        -0x183214
	  lwz       r5, 0xC0(r31)
	  mr        r3, r31
	  lfs       f4, -0x2844(r2)
	  li        r4, 0
	  lfs       f1, 0x514(r5)
	  lfs       f2, 0x4C4(r5)
	  lfs       f3, 0x4EC(r5)
	  bl        -0x182E7C
	  lwz       r5, 0xC0(r31)
	  mr        r3, r31
	  lfs       f4, -0x2844(r2)
	  li        r4, 0
	  lfs       f1, 0x514(r5)
	  lfs       f2, 0x4C4(r5)
	  lfs       f3, 0x4EC(r5)
	  bl        -0x182BE0
	  lfs       f0, -0x2848(r2)
	  stfs      f0, 0x20C(r31)
	  b         .loc_0x558

	.loc_0xE4:
	  cmplwi    r0, 0x3
	  bne-      .loc_0xFC
	  lwz       r0, 0x1E0(r31)
	  oris      r0, r0, 0x20
	  stw       r0, 0x1E0(r31)
	  b         .loc_0x558

	.loc_0xFC:
	  cmplwi    r0, 0x4
	  bne-      .loc_0x114
	  lwz       r0, 0x1E0(r31)
	  rlwinm    r0,r0,0,11,9
	  stw       r0, 0x1E0(r31)
	  b         .loc_0x558

	.loc_0x114:
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x558
	  lfs       f1, 0x200(r31)
	  lfs       f0, -0x2848(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x14C
	  lwz       r12, 0x0(r3)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x558

	.loc_0x14C:
	  mr        r3, r31
	  li        r4, 0
	  bl        -0x181D98
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x184
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x4
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x558

	.loc_0x184:
	  mr        r3, r31
	  bl        0x3DEC
	  mr.       r28, r3
	  beq-      .loc_0x488
	  mr        r4, r28
	  addi      r3, r1, 0xB0
	  lwz       r12, 0x0(r28)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r31
	  lfs       f2, 0xB0(r1)
	  lwz       r12, 0x0(r31)
	  addi      r3, r1, 0xBC
	  lfs       f1, 0xB4(r1)
	  lfs       f0, 0xB8(r1)
	  lwz       r12, 0x8(r12)
	  stfs      f2, 0x98(r1)
	  stfs      f1, 0x9C(r1)
	  stfs      f0, 0xA0(r1)
	  mtctr     r12
	  bctrl
	  lfs       f5, 0xBC(r1)
	  lis       r3, 0x8051
	  lfs       f3, 0xC4(r1)
	  subi      r3, r3, 0x2E20
	  lfs       f1, 0x98(r1)
	  lfs       f0, 0xA0(r1)
	  lfs       f4, 0xC0(r1)
	  fsubs     f1, f1, f5
	  fsubs     f2, f0, f3
	  stfs      f5, 0xA4(r1)
	  stfs      f4, 0xA8(r1)
	  stfs      f3, 0xAC(r1)
	  bl        -0x2613A0
	  bl        0x17B724
	  lwz       r12, 0x0(r31)
	  fmr       f25, f1
	  mr        r3, r31
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fmr       f2, f1
	  fmr       f1, f25
	  bl        0x17B72C
	  mr        r4, r28
	  lwz       r5, 0xC0(r31)
	  lwz       r12, 0x0(r28)
	  fmr       f31, f1
	  addi      r3, r1, 0x68
	  lfs       f29, 0x58C(r5)
	  lwz       r12, 0x8(r12)
	  lfs       f30, 0x564(r5)
	  mtctr     r12
	  bctrl
	  mr        r4, r31
	  lfs       f2, 0x68(r1)
	  lwz       r12, 0x0(r31)
	  addi      r3, r1, 0x74
	  lfs       f1, 0x6C(r1)
	  lfs       f0, 0x70(r1)
	  lwz       r12, 0x8(r12)
	  stfs      f2, 0x50(r1)
	  stfs      f1, 0x54(r1)
	  stfs      f0, 0x58(r1)
	  mtctr     r12
	  bctrl
	  lfs       f5, 0x74(r1)
	  lis       r3, 0x8051
	  lfs       f3, 0x7C(r1)
	  subi      r3, r3, 0x2E20
	  lfs       f1, 0x50(r1)
	  lfs       f0, 0x58(r1)
	  lfs       f4, 0x78(r1)
	  fsubs     f1, f1, f5
	  fsubs     f2, f0, f3
	  stfs      f5, 0x5C(r1)
	  stfs      f4, 0x60(r1)
	  stfs      f3, 0x64(r1)
	  bl        -0x261454
	  bl        0x17B670
	  lwz       r12, 0x0(r31)
	  fmr       f25, f1
	  mr        r3, r31
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fmr       f2, f1
	  fmr       f1, f25
	  bl        0x17B678
	  mr        r4, r31
	  fmr       f27, f1
	  lwz       r12, 0x0(r31)
	  addi      r3, r1, 0x14
	  li        r29, 0
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r28
	  addi      r3, r1, 0x8
	  lwz       r12, 0x0(r28)
	  lfs       f28, 0x14(r1)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r31
	  lfs       f0, 0x8(r1)
	  lwz       r12, 0x0(r31)
	  addi      r3, r1, 0x2C
	  fsubs     f25, f0, f28
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r28
	  addi      r3, r1, 0x20
	  lwz       r12, 0x0(r28)
	  lfs       f28, 0x30(r1)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r31
	  lfs       f0, 0x24(r1)
	  lwz       r12, 0x0(r31)
	  addi      r3, r1, 0x44
	  fsubs     f26, f0, f28
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r28
	  addi      r3, r1, 0x38
	  lwz       r12, 0x0(r28)
	  lfs       f28, 0x4C(r1)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  fmuls     f1, f26, f26
	  lfs       f2, 0x40(r1)
	  fmuls     f0, f30, f30
	  fsubs     f2, f2, f28
	  fmadds    f1, f25, f25, f1
	  fmadds    f1, f2, f2, f1
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x3E8
	  lfs       f0, -0x283C(r2)
	  fabs      f2, f27
	  lfs       f1, -0x2840(r2)
	  fmuls     f0, f0, f29
	  frsp      f2, f2
	  fmuls     f0, f1, f0
	  fcmpo     cr0, f2, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x3E8
	  li        r29, 0x1

	.loc_0x3E8:
	  rlwinm.   r0,r29,0,24,31
	  beq-      .loc_0x414
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x3
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x558

	.loc_0x414:
	  lwz       r3, 0xC0(r31)
	  fabs      f2, f31
	  lfs       f0, -0x283C(r2)
	  lfs       f3, 0x58C(r3)
	  lfs       f1, -0x2840(r2)
	  frsp      f2, f2
	  fmuls     f0, f0, f3
	  fmuls     f0, f1, f0
	  fcmpo     cr0, f2, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x464
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x7
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x558

	.loc_0x464:
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x5
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x558

	.loc_0x488:
	  mr        r4, r31
	  addi      r3, r1, 0x8C
	  lwz       r12, 0x0(r31)
	  lfs       f25, 0x2E0(r31)
	  lwz       r12, 0x8(r12)
	  lfs       f26, 0x2E8(r31)
	  mtctr     r12
	  bctrl
	  lfs       f4, 0x8C(r1)
	  lis       r3, 0x8051
	  lfs       f0, 0x94(r1)
	  subi      r3, r3, 0x2E20
	  lfs       f3, 0x90(r1)
	  fsubs     f1, f25, f4
	  fsubs     f2, f26, f0
	  stfs      f4, 0x80(r1)
	  stfs      f3, 0x84(r1)
	  stfs      f0, 0x88(r1)
	  bl        -0x261664
	  bl        0x17B460
	  lwz       r12, 0x0(r31)
	  fmr       f25, f1
	  mr        r3, r31
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fmr       f2, f1
	  fmr       f1, f25
	  bl        0x17B468
	  fabs      f1, f1
	  lfs       f0, -0x2838(r2)
	  frsp      f1, f1
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x538
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x8
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x558

	.loc_0x538:
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x6
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x558:
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
	  lwz       r31, 0xDC(r1)
	  lwz       r30, 0xD8(r1)
	  lwz       r29, 0xD4(r1)
	  lwz       r0, 0x154(r1)
	  lwz       r28, 0xD0(r1)
	  mtlr      r0
	  addi      r1, r1, 0x150
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8029684C
 * Size:	000010
 */
void KumaChappy::StateRebirth::cleanup(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  lwz       r0, 0x1E0(r4)
	  rlwinm    r0,r0,0,11,9
	  stw       r0, 0x1E0(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8029685C
 * Size:	00004C
 */
void KumaChappy::StateLost::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r5, -0x1
	  mr        r3, r4
	  stw       r0, 0x14(r1)
	  li        r0, 0
	  lfs       f0, -0x2848(r2)
	  stw       r5, 0x2D4(r4)
	  li        r4, 0x5
	  li        r5, 0
	  stw       r0, 0x230(r3)
	  stfs      f0, 0x1D4(r3)
	  stfs      f0, 0x1D8(r3)
	  stfs      f0, 0x1DC(r3)
	  bl        -0x191890
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802968A8
 * Size:	00045C
 */
void KumaChappy::StateLost::exec(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x110(r1)
	  mflr      r0
	  stw       r0, 0x114(r1)
	  stfd      f31, 0x100(r1)
	  psq_st    f31,0x108(r1),0,0
	  stfd      f30, 0xF0(r1)
	  psq_st    f30,0xF8(r1),0,0
	  stfd      f29, 0xE0(r1)
	  psq_st    f29,0xE8(r1),0,0
	  stfd      f28, 0xD0(r1)
	  psq_st    f28,0xD8(r1),0,0
	  stfd      f27, 0xC0(r1)
	  psq_st    f27,0xC8(r1),0,0
	  stfd      f26, 0xB0(r1)
	  psq_st    f26,0xB8(r1),0,0
	  stw       r31, 0xAC(r1)
	  stw       r30, 0xA8(r1)
	  stw       r29, 0xA4(r1)
	  stw       r28, 0xA0(r1)
	  lwz       r5, 0x188(r4)
	  mr        r28, r3
	  mr        r30, r4
	  lbz       r0, 0x24(r5)
	  cmplwi    r0, 0
	  beq-      .loc_0x40C
	  lwz       r0, 0x1C(r5)
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x40C
	  lfs       f1, 0x200(r30)
	  lfs       f0, -0x2848(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0xA0
	  lwz       r12, 0x0(r3)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x40C

	.loc_0xA0:
	  mr        r3, r30
	  li        r4, 0
	  bl        -0x1822F8
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xD8
	  mr        r3, r28
	  mr        r4, r30
	  lwz       r12, 0x0(r28)
	  li        r5, 0x4
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x40C

	.loc_0xD8:
	  mr        r3, r30
	  bl        0x388C
	  mr.       r29, r3
	  beq-      .loc_0x334
	  mr        r4, r29
	  addi      r3, r1, 0x80
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r30
	  lfs       f2, 0x80(r1)
	  lwz       r12, 0x0(r30)
	  addi      r3, r1, 0x8C
	  lfs       f1, 0x84(r1)
	  lfs       f0, 0x88(r1)
	  lwz       r12, 0x8(r12)
	  stfs      f2, 0x68(r1)
	  stfs      f1, 0x6C(r1)
	  stfs      f0, 0x70(r1)
	  mtctr     r12
	  bctrl
	  lfs       f5, 0x8C(r1)
	  lis       r3, 0x8051
	  lfs       f3, 0x94(r1)
	  subi      r3, r3, 0x2E20
	  lfs       f1, 0x68(r1)
	  lfs       f0, 0x70(r1)
	  lfs       f4, 0x90(r1)
	  fsubs     f1, f1, f5
	  fsubs     f2, f0, f3
	  stfs      f5, 0x74(r1)
	  stfs      f4, 0x78(r1)
	  stfs      f3, 0x7C(r1)
	  bl        -0x261900
	  bl        0x17B1C4
	  lwz       r12, 0x0(r30)
	  fmr       f26, f1
	  mr        r3, r30
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fmr       f2, f1
	  fmr       f1, f26
	  bl        0x17B1CC
	  mr        r4, r30
	  lwz       r5, 0xC0(r30)
	  lwz       r12, 0x0(r30)
	  fmr       f30, f1
	  addi      r3, r1, 0x14
	  lfs       f28, 0x58C(r5)
	  lwz       r12, 0x8(r12)
	  li        r31, 0
	  lfs       f29, 0x564(r5)
	  mtctr     r12
	  bctrl
	  mr        r4, r29
	  addi      r3, r1, 0x8
	  lwz       r12, 0x0(r29)
	  lfs       f31, 0x14(r1)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r30
	  lfs       f0, 0x8(r1)
	  lwz       r12, 0x0(r30)
	  addi      r3, r1, 0x2C
	  fsubs     f26, f0, f31
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r29
	  addi      r3, r1, 0x20
	  lwz       r12, 0x0(r29)
	  lfs       f31, 0x30(r1)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r30
	  lfs       f0, 0x24(r1)
	  lwz       r12, 0x0(r30)
	  addi      r3, r1, 0x44
	  fsubs     f27, f0, f31
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r29
	  addi      r3, r1, 0x38
	  lwz       r12, 0x0(r29)
	  lfs       f31, 0x4C(r1)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  fmuls     f1, f27, f27
	  lfs       f2, 0x40(r1)
	  fmuls     f0, f29, f29
	  fsubs     f2, f2, f31
	  fmadds    f1, f26, f26, f1
	  fmadds    f1, f2, f2, f1
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x294
	  lfs       f0, -0x283C(r2)
	  fabs      f2, f30
	  lfs       f1, -0x2840(r2)
	  fmuls     f0, f0, f28
	  frsp      f2, f2
	  fmuls     f0, f1, f0
	  fcmpo     cr0, f2, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x294
	  li        r31, 0x1

	.loc_0x294:
	  rlwinm.   r0,r31,0,24,31
	  beq-      .loc_0x2C0
	  mr        r3, r28
	  mr        r4, r30
	  lwz       r12, 0x0(r28)
	  li        r5, 0x3
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x40C

	.loc_0x2C0:
	  lwz       r3, 0xC0(r30)
	  fabs      f2, f30
	  lfs       f0, -0x283C(r2)
	  lfs       f3, 0x58C(r3)
	  lfs       f1, -0x2840(r2)
	  frsp      f2, f2
	  fmuls     f0, f0, f3
	  fmuls     f0, f1, f0
	  fcmpo     cr0, f2, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x310
	  mr        r3, r28
	  mr        r4, r30
	  lwz       r12, 0x0(r28)
	  li        r5, 0x7
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x40C

	.loc_0x310:
	  mr        r3, r28
	  mr        r4, r30
	  lwz       r12, 0x0(r28)
	  li        r5, 0x5
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x40C

	.loc_0x334:
	  mr        r3, r30
	  bl        0x3320
	  mr        r4, r30
	  addi      r3, r1, 0x5C
	  lwz       r12, 0x0(r30)
	  lfs       f26, 0x2E0(r30)
	  lwz       r12, 0x8(r12)
	  lfs       f27, 0x2E8(r30)
	  mtctr     r12
	  bctrl
	  lfs       f4, 0x5C(r1)
	  lis       r3, 0x8051
	  lfs       f0, 0x64(r1)
	  subi      r3, r3, 0x2E20
	  lfs       f3, 0x60(r1)
	  fsubs     f1, f26, f4
	  fsubs     f2, f27, f0
	  stfs      f4, 0x50(r1)
	  stfs      f3, 0x54(r1)
	  stfs      f0, 0x58(r1)
	  bl        -0x261B24
	  bl        0x17AFA0
	  lwz       r12, 0x0(r30)
	  fmr       f26, f1
	  mr        r3, r30
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fmr       f2, f1
	  fmr       f1, f26
	  bl        0x17AFA8
	  fabs      f1, f1
	  lfs       f0, -0x2838(r2)
	  frsp      f1, f1
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x3EC
	  mr        r3, r28
	  mr        r4, r30
	  lwz       r12, 0x0(r28)
	  li        r5, 0x8
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x40C

	.loc_0x3EC:
	  mr        r3, r28
	  mr        r4, r30
	  lwz       r12, 0x0(r28)
	  li        r5, 0x6
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x40C:
	  psq_l     f31,0x108(r1),0,0
	  lfd       f31, 0x100(r1)
	  psq_l     f30,0xF8(r1),0,0
	  lfd       f30, 0xF0(r1)
	  psq_l     f29,0xE8(r1),0,0
	  lfd       f29, 0xE0(r1)
	  psq_l     f28,0xD8(r1),0,0
	  lfd       f28, 0xD0(r1)
	  psq_l     f27,0xC8(r1),0,0
	  lfd       f27, 0xC0(r1)
	  psq_l     f26,0xB8(r1),0,0
	  lfd       f26, 0xB0(r1)
	  lwz       r31, 0xAC(r1)
	  lwz       r30, 0xA8(r1)
	  lwz       r29, 0xA4(r1)
	  lwz       r0, 0x114(r1)
	  lwz       r28, 0xA0(r1)
	  mtlr      r0
	  addi      r1, r1, 0x110
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80296D04
 * Size:	000004
 */
void KumaChappy::StateLost::cleanup(Game::EnemyBase*) { }

/*
 * --INFO--
 * Address:	80296D08
 * Size:	000058
 */
void KumaChappy::StateAttack::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x2848(r2)
	  stw       r0, 0x14(r1)
	  li        r0, -0x1
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  stw       r0, 0x2D4(r4)
	  stfs      f0, 0x1D4(r4)
	  stfs      f0, 0x1D8(r4)
	  stfs      f0, 0x1DC(r4)
	  bl        -0x19536C
	  mr        r3, r31
	  li        r4, 0
	  li        r5, 0
	  bl        -0x191D44
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80296D60
 * Size:	000550
 */
void KumaChappy::StateAttack::exec(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x110(r1)
	  mflr      r0
	  stw       r0, 0x114(r1)
	  stfd      f31, 0x100(r1)
	  psq_st    f31,0x108(r1),0,0
	  stfd      f30, 0xF0(r1)
	  psq_st    f30,0xF8(r1),0,0
	  stfd      f29, 0xE0(r1)
	  psq_st    f29,0xE8(r1),0,0
	  stfd      f28, 0xD0(r1)
	  psq_st    f28,0xD8(r1),0,0
	  stfd      f27, 0xC0(r1)
	  psq_st    f27,0xC8(r1),0,0
	  stfd      f26, 0xB0(r1)
	  psq_st    f26,0xB8(r1),0,0
	  stw       r31, 0xAC(r1)
	  stw       r30, 0xA8(r1)
	  stw       r29, 0xA4(r1)
	  stw       r28, 0xA0(r1)
	  lwz       r5, 0x188(r4)
	  mr        r28, r3
	  mr        r31, r4
	  lbz       r0, 0x24(r5)
	  cmplwi    r0, 0
	  beq-      .loc_0x500
	  lwz       r0, 0x1C(r5)
	  cmplwi    r0, 0x2
	  bne-      .loc_0x11C
	  mr        r3, r31
	  bl        -0x18FA8C
	  cmpwi     r3, 0
	  bne-      .loc_0x104
	  lwz       r6, 0xC0(r31)
	  mr        r3, r31
	  li        r4, 0
	  li        r5, 0
	  lfs       f1, 0x5B4(r6)
	  lfs       f2, 0x5DC(r6)
	  lfs       f3, 0x604(r6)
	  bl        -0x182B9C
	  mr        r30, r3
	  mr        r3, r31
	  li        r4, 0
	  bl        -0x1832D8
	  add       r29, r30, r3
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r30, 0xC0(r31)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fmr       f4, f1
	  lfs       f1, 0x53C(r30)
	  lfs       f2, 0x4C4(r30)
	  mr        r3, r31
	  lfs       f3, 0x4EC(r30)
	  li        r4, 0
	  bl        -0x183D28
	  cmpwi     r29, 0
	  bne-      .loc_0x500
	  mr        r3, r31
	  li        r4, 0x7
	  li        r5, 0
	  bl        -0x191E58
	  b         .loc_0x500

	.loc_0x104:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x304(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x500

	.loc_0x11C:
	  cmplwi    r0, 0x3
	  bne-      .loc_0x15C
	  lwz       r5, 0xC0(r31)
	  mr        r3, r31
	  li        r4, 0
	  lfs       f1, 0x81C(r5)
	  bl        -0x183010
	  lfs       f1, 0x200(r31)
	  lfs       f0, -0x2848(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x500
	  lfs       f1, -0x2834(r2)
	  mr        r3, r31
	  bl        -0x18FB24
	  b         .loc_0x500

	.loc_0x15C:
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x500
	  lfs       f1, 0x200(r31)
	  lfs       f0, -0x2848(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x194
	  lwz       r12, 0x0(r3)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x500

	.loc_0x194:
	  mr        r3, r31
	  li        r4, 0
	  bl        -0x1828A4
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x1CC
	  mr        r3, r28
	  mr        r4, r31
	  lwz       r12, 0x0(r28)
	  li        r5, 0x4
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x500

	.loc_0x1CC:
	  mr        r3, r31
	  bl        0x32E0
	  mr.       r29, r3
	  beq-      .loc_0x428
	  mr        r4, r29
	  addi      r3, r1, 0x80
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r31
	  lfs       f2, 0x80(r1)
	  lwz       r12, 0x0(r31)
	  addi      r3, r1, 0x8C
	  lfs       f1, 0x84(r1)
	  lfs       f0, 0x88(r1)
	  lwz       r12, 0x8(r12)
	  stfs      f2, 0x68(r1)
	  stfs      f1, 0x6C(r1)
	  stfs      f0, 0x70(r1)
	  mtctr     r12
	  bctrl
	  lfs       f5, 0x8C(r1)
	  lis       r3, 0x8051
	  lfs       f3, 0x94(r1)
	  subi      r3, r3, 0x2E20
	  lfs       f1, 0x68(r1)
	  lfs       f0, 0x70(r1)
	  lfs       f4, 0x90(r1)
	  fsubs     f1, f1, f5
	  fsubs     f2, f0, f3
	  stfs      f5, 0x74(r1)
	  stfs      f4, 0x78(r1)
	  stfs      f3, 0x7C(r1)
	  bl        -0x261EAC
	  bl        0x17AC18
	  lwz       r12, 0x0(r31)
	  fmr       f26, f1
	  mr        r3, r31
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fmr       f2, f1
	  fmr       f1, f26
	  bl        0x17AC20
	  mr        r4, r31
	  lwz       r5, 0xC0(r31)
	  lwz       r12, 0x0(r31)
	  fmr       f30, f1
	  addi      r3, r1, 0x14
	  lfs       f28, 0x58C(r5)
	  lwz       r12, 0x8(r12)
	  li        r30, 0
	  lfs       f29, 0x564(r5)
	  mtctr     r12
	  bctrl
	  mr        r4, r29
	  addi      r3, r1, 0x8
	  lwz       r12, 0x0(r29)
	  lfs       f31, 0x14(r1)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r31
	  lfs       f0, 0x8(r1)
	  lwz       r12, 0x0(r31)
	  addi      r3, r1, 0x2C
	  fsubs     f26, f0, f31
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r29
	  addi      r3, r1, 0x20
	  lwz       r12, 0x0(r29)
	  lfs       f31, 0x30(r1)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r31
	  lfs       f0, 0x24(r1)
	  lwz       r12, 0x0(r31)
	  addi      r3, r1, 0x44
	  fsubs     f27, f0, f31
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r29
	  addi      r3, r1, 0x38
	  lwz       r12, 0x0(r29)
	  lfs       f31, 0x4C(r1)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  fmuls     f1, f27, f27
	  lfs       f2, 0x40(r1)
	  fmuls     f0, f29, f29
	  fsubs     f2, f2, f31
	  fmadds    f1, f26, f26, f1
	  fmadds    f1, f2, f2, f1
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x388
	  lfs       f0, -0x283C(r2)
	  fabs      f2, f30
	  lfs       f1, -0x2840(r2)
	  fmuls     f0, f0, f28
	  frsp      f2, f2
	  fmuls     f0, f1, f0
	  fcmpo     cr0, f2, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x388
	  li        r30, 0x1

	.loc_0x388:
	  rlwinm.   r0,r30,0,24,31
	  beq-      .loc_0x3B4
	  mr        r3, r28
	  mr        r4, r31
	  lwz       r12, 0x0(r28)
	  li        r5, 0x3
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x500

	.loc_0x3B4:
	  lwz       r3, 0xC0(r31)
	  fabs      f2, f30
	  lfs       f0, -0x283C(r2)
	  lfs       f3, 0x58C(r3)
	  lfs       f1, -0x2840(r2)
	  frsp      f2, f2
	  fmuls     f0, f0, f3
	  fmuls     f0, f1, f0
	  fcmpo     cr0, f2, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x404
	  mr        r3, r28
	  mr        r4, r31
	  lwz       r12, 0x0(r28)
	  li        r5, 0x7
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x500

	.loc_0x404:
	  mr        r3, r28
	  mr        r4, r31
	  lwz       r12, 0x0(r28)
	  li        r5, 0x5
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x500

	.loc_0x428:
	  mr        r3, r31
	  bl        0x2D74
	  mr        r4, r31
	  addi      r3, r1, 0x5C
	  lwz       r12, 0x0(r31)
	  lfs       f26, 0x2E0(r31)
	  lwz       r12, 0x8(r12)
	  lfs       f27, 0x2E8(r31)
	  mtctr     r12
	  bctrl
	  lfs       f4, 0x5C(r1)
	  lis       r3, 0x8051
	  lfs       f0, 0x64(r1)
	  subi      r3, r3, 0x2E20
	  lfs       f3, 0x60(r1)
	  fsubs     f1, f26, f4
	  fsubs     f2, f27, f0
	  stfs      f4, 0x50(r1)
	  stfs      f3, 0x54(r1)
	  stfs      f0, 0x58(r1)
	  bl        -0x2620D0
	  bl        0x17A9F4
	  lwz       r12, 0x0(r31)
	  fmr       f26, f1
	  mr        r3, r31
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fmr       f2, f1
	  fmr       f1, f26
	  bl        0x17A9FC
	  fabs      f1, f1
	  lfs       f0, -0x2838(r2)
	  frsp      f1, f1
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x4E0
	  mr        r3, r28
	  mr        r4, r31
	  lwz       r12, 0x0(r28)
	  li        r5, 0x8
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x500

	.loc_0x4E0:
	  mr        r3, r28
	  mr        r4, r31
	  lwz       r12, 0x0(r28)
	  li        r5, 0x6
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x500:
	  psq_l     f31,0x108(r1),0,0
	  lfd       f31, 0x100(r1)
	  psq_l     f30,0xF8(r1),0,0
	  lfd       f30, 0xF0(r1)
	  psq_l     f29,0xE8(r1),0,0
	  lfd       f29, 0xE0(r1)
	  psq_l     f28,0xD8(r1),0,0
	  lfd       f28, 0xD0(r1)
	  psq_l     f27,0xC8(r1),0,0
	  lfd       f27, 0xC0(r1)
	  psq_l     f26,0xB8(r1),0,0
	  lfd       f26, 0xB0(r1)
	  lwz       r31, 0xAC(r1)
	  lwz       r30, 0xA8(r1)
	  lwz       r29, 0xA4(r1)
	  lwz       r0, 0x114(r1)
	  lwz       r28, 0xA0(r1)
	  mtlr      r0
	  addi      r1, r1, 0x110
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802972B0
 * Size:	00003C
 */
void KumaChappy::StateAttack::cleanup(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  bl        -0x19594C
	  lfs       f1, -0x2830(r2)
	  mr        r3, r31
	  bl        -0x18FF44
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802972EC
 * Size:	000064
 */
void KumaChappy::StateFlick::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  li        r0, -0x1
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  stw       r0, 0x2D4(r4)
	  bl        -0x195940
	  lfs       f0, -0x2848(r2)
	  mr        r3, r31
	  li        r4, 0x2
	  li        r5, 0
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  bl        -0x192328
	  lfs       f1, -0x282C(r2)
	  mr        r3, r31
	  bl        -0x18FFA8
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80297350
 * Size:	0004D4
 */
void KumaChappy::StateFlick::exec(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x110(r1)
	  mflr      r0
	  stw       r0, 0x114(r1)
	  stfd      f31, 0x100(r1)
	  psq_st    f31,0x108(r1),0,0
	  stfd      f30, 0xF0(r1)
	  psq_st    f30,0xF8(r1),0,0
	  stfd      f29, 0xE0(r1)
	  psq_st    f29,0xE8(r1),0,0
	  stfd      f28, 0xD0(r1)
	  psq_st    f28,0xD8(r1),0,0
	  stfd      f27, 0xC0(r1)
	  psq_st    f27,0xC8(r1),0,0
	  stfd      f26, 0xB0(r1)
	  psq_st    f26,0xB8(r1),0,0
	  stw       r31, 0xAC(r1)
	  stw       r30, 0xA8(r1)
	  stw       r29, 0xA4(r1)
	  stw       r28, 0xA0(r1)
	  lwz       r5, 0x188(r4)
	  mr        r28, r3
	  mr        r30, r4
	  lbz       r0, 0x24(r5)
	  cmplwi    r0, 0
	  beq-      .loc_0x484
	  lwz       r0, 0x1C(r5)
	  cmplwi    r0, 0x2
	  bne-      .loc_0x118
	  mr        r3, r30
	  lwz       r31, 0xC0(r30)
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fmr       f4, f1
	  lfs       f1, 0x53C(r31)
	  lfs       f2, 0x4C4(r31)
	  mr        r3, r30
	  lfs       f3, 0x4EC(r31)
	  li        r4, 0
	  bl        -0x1842D4
	  mr        r3, r30
	  lwz       r31, 0xC0(r30)
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fmr       f4, f1
	  lfs       f1, 0x514(r31)
	  lfs       f2, 0x4C4(r31)
	  mr        r3, r30
	  lfs       f3, 0x4EC(r31)
	  li        r4, 0
	  bl        -0x183F50
	  mr        r3, r30
	  lwz       r31, 0xC0(r30)
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fmr       f4, f1
	  lfs       f1, 0x514(r31)
	  lfs       f2, 0x4C4(r31)
	  mr        r3, r30
	  lfs       f3, 0x4EC(r31)
	  li        r4, 0
	  bl        -0x183CC8
	  lfs       f0, -0x2848(r2)
	  stfs      f0, 0x20C(r30)
	  b         .loc_0x484

	.loc_0x118:
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x484
	  lfs       f1, 0x200(r30)
	  lfs       f0, -0x2848(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x150
	  lwz       r12, 0x0(r3)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x484

	.loc_0x150:
	  mr        r3, r30
	  bl        0x2D6C
	  mr.       r29, r3
	  beq-      .loc_0x3AC
	  mr        r4, r29
	  addi      r3, r1, 0x80
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r30
	  lfs       f2, 0x80(r1)
	  lwz       r12, 0x0(r30)
	  addi      r3, r1, 0x8C
	  lfs       f1, 0x84(r1)
	  lfs       f0, 0x88(r1)
	  lwz       r12, 0x8(r12)
	  stfs      f2, 0x68(r1)
	  stfs      f1, 0x6C(r1)
	  stfs      f0, 0x70(r1)
	  mtctr     r12
	  bctrl
	  lfs       f5, 0x8C(r1)
	  lis       r3, 0x8051
	  lfs       f3, 0x94(r1)
	  subi      r3, r3, 0x2E20
	  lfs       f1, 0x68(r1)
	  lfs       f0, 0x70(r1)
	  lfs       f4, 0x90(r1)
	  fsubs     f1, f1, f5
	  fsubs     f2, f0, f3
	  stfs      f5, 0x74(r1)
	  stfs      f4, 0x78(r1)
	  stfs      f3, 0x7C(r1)
	  bl        -0x262420
	  bl        0x17A6A4
	  lwz       r12, 0x0(r30)
	  fmr       f26, f1
	  mr        r3, r30
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fmr       f2, f1
	  fmr       f1, f26
	  bl        0x17A6AC
	  mr        r4, r30
	  lwz       r5, 0xC0(r30)
	  lwz       r12, 0x0(r30)
	  fmr       f30, f1
	  addi      r3, r1, 0x14
	  lfs       f28, 0x58C(r5)
	  lwz       r12, 0x8(r12)
	  li        r31, 0
	  lfs       f29, 0x564(r5)
	  mtctr     r12
	  bctrl
	  mr        r4, r29
	  addi      r3, r1, 0x8
	  lwz       r12, 0x0(r29)
	  lfs       f31, 0x14(r1)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r30
	  lfs       f0, 0x8(r1)
	  lwz       r12, 0x0(r30)
	  addi      r3, r1, 0x2C
	  fsubs     f26, f0, f31
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r29
	  addi      r3, r1, 0x20
	  lwz       r12, 0x0(r29)
	  lfs       f31, 0x30(r1)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r30
	  lfs       f0, 0x24(r1)
	  lwz       r12, 0x0(r30)
	  addi      r3, r1, 0x44
	  fsubs     f27, f0, f31
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r29
	  addi      r3, r1, 0x38
	  lwz       r12, 0x0(r29)
	  lfs       f31, 0x4C(r1)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  fmuls     f1, f27, f27
	  lfs       f2, 0x40(r1)
	  fmuls     f0, f29, f29
	  fsubs     f2, f2, f31
	  fmadds    f1, f26, f26, f1
	  fmadds    f1, f2, f2, f1
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x30C
	  lfs       f0, -0x283C(r2)
	  fabs      f2, f30
	  lfs       f1, -0x2840(r2)
	  fmuls     f0, f0, f28
	  frsp      f2, f2
	  fmuls     f0, f1, f0
	  fcmpo     cr0, f2, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x30C
	  li        r31, 0x1

	.loc_0x30C:
	  rlwinm.   r0,r31,0,24,31
	  beq-      .loc_0x338
	  mr        r3, r28
	  mr        r4, r30
	  lwz       r12, 0x0(r28)
	  li        r5, 0x3
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x484

	.loc_0x338:
	  lwz       r3, 0xC0(r30)
	  fabs      f2, f30
	  lfs       f0, -0x283C(r2)
	  lfs       f3, 0x58C(r3)
	  lfs       f1, -0x2840(r2)
	  frsp      f2, f2
	  fmuls     f0, f0, f3
	  fmuls     f0, f1, f0
	  fcmpo     cr0, f2, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x388
	  mr        r3, r28
	  mr        r4, r30
	  lwz       r12, 0x0(r28)
	  li        r5, 0x7
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x484

	.loc_0x388:
	  mr        r3, r28
	  mr        r4, r30
	  lwz       r12, 0x0(r28)
	  li        r5, 0x5
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x484

	.loc_0x3AC:
	  mr        r3, r30
	  bl        0x2800
	  mr        r4, r30
	  addi      r3, r1, 0x5C
	  lwz       r12, 0x0(r30)
	  lfs       f26, 0x2E0(r30)
	  lwz       r12, 0x8(r12)
	  lfs       f27, 0x2E8(r30)
	  mtctr     r12
	  bctrl
	  lfs       f4, 0x5C(r1)
	  lis       r3, 0x8051
	  lfs       f0, 0x64(r1)
	  subi      r3, r3, 0x2E20
	  lfs       f3, 0x60(r1)
	  fsubs     f1, f26, f4
	  fsubs     f2, f27, f0
	  stfs      f4, 0x50(r1)
	  stfs      f3, 0x54(r1)
	  stfs      f0, 0x58(r1)
	  bl        -0x262644
	  bl        0x17A480
	  lwz       r12, 0x0(r30)
	  fmr       f26, f1
	  mr        r3, r30
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fmr       f2, f1
	  fmr       f1, f26
	  bl        0x17A488
	  fabs      f1, f1
	  lfs       f0, -0x2838(r2)
	  frsp      f1, f1
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x464
	  mr        r3, r28
	  mr        r4, r30
	  lwz       r12, 0x0(r28)
	  li        r5, 0x8
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x484

	.loc_0x464:
	  mr        r3, r28
	  mr        r4, r30
	  lwz       r12, 0x0(r28)
	  li        r5, 0x6
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x484:
	  psq_l     f31,0x108(r1),0,0
	  lfd       f31, 0x100(r1)
	  psq_l     f30,0xF8(r1),0,0
	  lfd       f30, 0xF0(r1)
	  psq_l     f29,0xE8(r1),0,0
	  lfd       f29, 0xE0(r1)
	  psq_l     f28,0xD8(r1),0,0
	  lfd       f28, 0xD0(r1)
	  psq_l     f27,0xC8(r1),0,0
	  lfd       f27, 0xC0(r1)
	  psq_l     f26,0xB8(r1),0,0
	  lfd       f26, 0xB0(r1)
	  lwz       r31, 0xAC(r1)
	  lwz       r30, 0xA8(r1)
	  lwz       r29, 0xA4(r1)
	  lwz       r0, 0x114(r1)
	  lwz       r28, 0xA0(r1)
	  mtlr      r0
	  addi      r1, r1, 0x110
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80297824
 * Size:	00003C
 */
void KumaChappy::StateFlick::cleanup(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f1, -0x2830(r2)
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  bl        -0x1904B0
	  mr        r3, r31
	  bl        -0x195ECC
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80297860
 * Size:	000060
 */
void KumaChappy::StateTurn::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x2848(r2)
	  stw       r0, 0x14(r1)
	  li        r0, -0x1
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  stfs      f0, 0x2D0(r4)
	  stw       r0, 0x2D4(r4)
	  bl        -0x195EBC
	  lfs       f0, -0x2848(r2)
	  mr        r3, r31
	  li        r4, 0x6
	  li        r5, 0
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  bl        -0x1928A4
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802978C0
 * Size:	000670
 */
void KumaChappy::StateTurn::exec(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x160(r1)
	  mflr      r0
	  stw       r0, 0x164(r1)
	  stfd      f31, 0x150(r1)
	  psq_st    f31,0x158(r1),0,0
	  stfd      f30, 0x140(r1)
	  psq_st    f30,0x148(r1),0,0
	  stfd      f29, 0x130(r1)
	  psq_st    f29,0x138(r1),0,0
	  stfd      f28, 0x120(r1)
	  psq_st    f28,0x128(r1),0,0
	  stfd      f27, 0x110(r1)
	  psq_st    f27,0x118(r1),0,0
	  stfd      f26, 0x100(r1)
	  psq_st    f26,0x108(r1),0,0
	  stfd      f25, 0xF0(r1)
	  psq_st    f25,0xF8(r1),0,0
	  stfd      f24, 0xE0(r1)
	  psq_st    f24,0xE8(r1),0,0
	  stw       r31, 0xDC(r1)
	  stw       r30, 0xD8(r1)
	  stw       r29, 0xD4(r1)
	  stw       r28, 0xD0(r1)
	  lfs       f0, -0x2848(r2)
	  mr        r31, r4
	  lfs       f1, 0x200(r4)
	  mr        r30, r3
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x98
	  li        r0, 0
	  mr        r3, r31
	  stw       r0, 0x2D4(r31)
	  bl        -0x1926A4
	  lfs       f1, -0x2834(r2)
	  mr        r3, r31
	  bl        -0x1905C0
	  b         .loc_0x5D4

	.loc_0x98:
	  mr        r3, r31
	  li        r4, 0
	  bl        -0x183308
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xCC
	  li        r0, 0x4
	  mr        r3, r31
	  stw       r0, 0x2D4(r31)
	  bl        -0x1926D8
	  lfs       f1, -0x2834(r2)
	  mr        r3, r31
	  bl        -0x1905F4
	  b         .loc_0x5D4

	.loc_0xCC:
	  mr        r3, r31
	  bl        0x2880
	  mr.       r28, r3
	  beq-      .loc_0x4A8
	  mr        r4, r28
	  lwz       r5, 0xC0(r31)
	  lwz       r12, 0x0(r28)
	  addi      r3, r1, 0x68
	  lfs       f30, 0x334(r5)
	  lwz       r12, 0x8(r12)
	  lfs       f29, 0x30C(r5)
	  mtctr     r12
	  bctrl
	  mr        r4, r31
	  addi      r3, r1, 0x74
	  lwz       r12, 0x0(r31)
	  lfs       f24, 0x68(r1)
	  lwz       r12, 0x8(r12)
	  lfs       f25, 0x70(r1)
	  mtctr     r12
	  bctrl
	  lfs       f1, 0x74(r1)
	  lis       r3, 0x8051
	  lfs       f0, 0x7C(r1)
	  subi      r3, r3, 0x2E20
	  fsubs     f1, f24, f1
	  fsubs     f2, f25, f0
	  bl        -0x2628F0
	  bl        0x17A1D4
	  lwz       r12, 0x0(r31)
	  fmr       f24, f1
	  mr        r3, r31
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fmr       f2, f1
	  fmr       f1, f24
	  bl        0x17A1DC
	  fmr       f31, f1
	  lfs       f0, -0x283C(r2)
	  lfs       f1, -0x2840(r2)
	  fmuls     f0, f0, f30
	  fmuls     f24, f31, f29
	  fmuls     f1, f1, f0
	  fabs      f0, f24
	  frsp      f0, f0
	  fcmpo     cr0, f0, f1
	  ble-      .loc_0x1A4
	  lfs       f0, -0x2848(r2)
	  fcmpo     cr0, f24, f0
	  ble-      .loc_0x1A0
	  fmr       f24, f1
	  b         .loc_0x1A4

	.loc_0x1A0:
	  fneg      f24, f1

	.loc_0x1A4:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fadds     f1, f24, f1
	  bl        0x17A154
	  stfs      f1, 0x1FC(r31)
	  mr        r4, r31
	  addi      r3, r1, 0x2C
	  li        r29, 0
	  lfs       f0, 0x1FC(r31)
	  stfs      f0, 0x1A8(r31)
	  lwz       r12, 0x0(r31)
	  lwz       r5, 0xC0(r31)
	  lwz       r12, 0x8(r12)
	  lfs       f28, 0x58C(r5)
	  lfs       f30, 0x564(r5)
	  mtctr     r12
	  bctrl
	  mr        r4, r28
	  addi      r3, r1, 0x20
	  lwz       r12, 0x0(r28)
	  lfs       f29, 0x2C(r1)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r31
	  lfs       f0, 0x20(r1)
	  lwz       r12, 0x0(r31)
	  addi      r3, r1, 0x44
	  fsubs     f25, f0, f29
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r28
	  addi      r3, r1, 0x38
	  lwz       r12, 0x0(r28)
	  lfs       f29, 0x48(r1)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r31
	  lfs       f0, 0x3C(r1)
	  lwz       r12, 0x0(r31)
	  addi      r3, r1, 0x5C
	  fsubs     f24, f0, f29
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r28
	  addi      r3, r1, 0x50
	  lwz       r12, 0x0(r28)
	  lfs       f29, 0x64(r1)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  fmuls     f1, f24, f24
	  lfs       f2, 0x58(r1)
	  fmuls     f0, f30, f30
	  fsubs     f2, f2, f29
	  fmadds    f1, f25, f25, f1
	  fmadds    f1, f2, f2, f1
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x2D0
	  lfs       f0, -0x283C(r2)
	  fabs      f2, f31
	  lfs       f1, -0x2840(r2)
	  fmuls     f0, f0, f28
	  frsp      f2, f2
	  fmuls     f0, f1, f0
	  fcmpo     cr0, f2, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x2D0
	  li        r29, 0x1

	.loc_0x2D0:
	  rlwinm.   r0,r29,0,24,31
	  beq-      .loc_0x2F8
	  li        r0, 0x3
	  mr        r3, r31
	  stw       r0, 0x2D4(r31)
	  bl        -0x192904
	  lfs       f1, -0x2834(r2)
	  mr        r3, r31
	  bl        -0x190820
	  b         .loc_0x5D4

	.loc_0x2F8:
	  mr        r3, r31
	  bl        0x2310
	  mr        r4, r31
	  lwz       r5, 0xC0(r31)
	  lwz       r12, 0x0(r31)
	  fmr       f29, f1
	  addi      r3, r1, 0x8C
	  lfs       f24, 0x3FC(r5)
	  lwz       r12, 0x8(r12)
	  lfs       f25, 0x3D4(r5)
	  lfs       f26, 0x3AC(r5)
	  mtctr     r12
	  bctrl
	  mr        r4, r28
	  addi      r3, r1, 0x80
	  lwz       r12, 0x0(r28)
	  lfs       f30, 0x8C(r1)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r31
	  lfs       f0, 0x80(r1)
	  lwz       r12, 0x0(r31)
	  addi      r3, r1, 0xA4
	  fsubs     f27, f0, f30
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r28
	  addi      r3, r1, 0x98
	  lwz       r12, 0x0(r28)
	  lfs       f30, 0xA8(r1)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r31
	  lfs       f0, 0x9C(r1)
	  lwz       r12, 0x0(r31)
	  addi      r3, r1, 0xBC
	  fsubs     f28, f0, f30
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r28
	  addi      r3, r1, 0xB0
	  lwz       r12, 0x0(r28)
	  lfs       f30, 0xC4(r1)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, 0xB8(r1)
	  fmuls     f26, f26, f26
	  fmuls     f25, f25, f25
	  li        r3, 0x1
	  fsubs     f0, f0, f30
	  li        r4, 0
	  fmuls     f0, f0, f0
	  fmadds    f0, f27, f27, f0
	  fcmpo     cr0, f0, f26
	  ble-      .loc_0x414
	  fcmpo     cr0, f0, f25
	  mr        r0, r4
	  ble-      .loc_0x408
	  fabs      f0, f28
	  frsp      f0, f0
	  fcmpo     cr0, f0, f24
	  bge-      .loc_0x408
	  mr        r0, r3

	.loc_0x408:
	  rlwinm.   r0,r0,0,24,31
	  beq-      .loc_0x414
	  li        r4, 0x1

	.loc_0x414:
	  rlwinm.   r0,r4,0,24,31
	  bne-      .loc_0x44C
	  lfs       f0, -0x283C(r2)
	  fabs      f2, f31
	  lfs       f1, -0x2840(r2)
	  fmuls     f0, f0, f29
	  frsp      f2, f2
	  fmuls     f0, f1, f0
	  fcmpo     cr0, f2, f0
	  cror      2, 0, 0x2
	  mfcr      r0
	  rlwinm.   r0,r0,3,31,31
	  beq-      .loc_0x44C
	  li        r3, 0

	.loc_0x44C:
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x468
	  li        r0, 0x2
	  mr        r3, r31
	  stw       r0, 0x2D4(r31)
	  bl        -0x192A80
	  b         .loc_0x5D4

	.loc_0x468:
	  lwz       r3, 0xC0(r31)
	  fabs      f2, f31
	  lfs       f0, -0x283C(r2)
	  lfs       f3, 0x58C(r3)
	  lfs       f1, -0x2840(r2)
	  frsp      f2, f2
	  fmuls     f0, f0, f3
	  fmuls     f0, f1, f0
	  fcmpo     cr0, f2, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x5D4
	  li        r0, 0x7
	  mr        r3, r31
	  stw       r0, 0x2D4(r31)
	  bl        -0x192AC0
	  b         .loc_0x5D4

	.loc_0x4A8:
	  mr        r3, r31
	  bl        0x2194
	  mr        r4, r31
	  lwz       r5, 0xC0(r31)
	  lwz       r12, 0x0(r31)
	  addi      r3, r1, 0x14
	  lfs       f26, 0x2E0(r31)
	  lwz       r12, 0x8(r12)
	  lfs       f27, 0x2E8(r31)
	  lfs       f25, 0x334(r5)
	  lfs       f24, 0x30C(r5)
	  mtctr     r12
	  bctrl
	  lfs       f4, 0x14(r1)
	  lis       r3, 0x8051
	  lfs       f0, 0x1C(r1)
	  subi      r3, r3, 0x2E20
	  lfs       f3, 0x18(r1)
	  fsubs     f1, f26, f4
	  fsubs     f2, f27, f0
	  stfs      f4, 0x8(r1)
	  stfs      f3, 0xC(r1)
	  stfs      f0, 0x10(r1)
	  bl        -0x262CBC
	  bl        0x179E08
	  lwz       r12, 0x0(r31)
	  fmr       f26, f1
	  mr        r3, r31
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fmr       f2, f1
	  fmr       f1, f26
	  bl        0x179E10
	  fmr       f31, f1
	  lfs       f0, -0x283C(r2)
	  lfs       f1, -0x2840(r2)
	  fmuls     f0, f0, f25
	  fmuls     f24, f31, f24
	  fmuls     f1, f1, f0
	  fabs      f0, f24
	  frsp      f0, f0
	  fcmpo     cr0, f0, f1
	  ble-      .loc_0x570
	  lfs       f0, -0x2848(r2)
	  fcmpo     cr0, f24, f0
	  ble-      .loc_0x56C
	  fmr       f24, f1
	  b         .loc_0x570

	.loc_0x56C:
	  fneg      f24, f1

	.loc_0x570:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fadds     f1, f24, f1
	  bl        0x179D88
	  fabs      f3, f31
	  stfs      f1, 0x1FC(r31)
	  lfs       f0, -0x2838(r2)
	  lfs       f2, 0x1FC(r31)
	  frsp      f1, f3
	  stfs      f2, 0x1A8(r31)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x5C4
	  li        r0, 0x8
	  mr        r3, r31
	  stw       r0, 0x2D4(r31)
	  bl        -0x192BDC
	  b         .loc_0x5D4

	.loc_0x5C4:
	  li        r0, 0x6
	  mr        r3, r31
	  stw       r0, 0x2D4(r31)
	  bl        -0x192BF0

	.loc_0x5D4:
	  lwz       r3, 0x188(r31)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x610
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x610
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r6, 0
	  lwz       r5, 0x2D4(r31)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x610:
	  psq_l     f31,0x158(r1),0,0
	  lfd       f31, 0x150(r1)
	  psq_l     f30,0x148(r1),0,0
	  lfd       f30, 0x140(r1)
	  psq_l     f29,0x138(r1),0,0
	  lfd       f29, 0x130(r1)
	  psq_l     f28,0x128(r1),0,0
	  lfd       f28, 0x120(r1)
	  psq_l     f27,0x118(r1),0,0
	  lfd       f27, 0x110(r1)
	  psq_l     f26,0x108(r1),0,0
	  lfd       f26, 0x100(r1)
	  psq_l     f25,0xF8(r1),0,0
	  lfd       f25, 0xF0(r1)
	  psq_l     f24,0xE8(r1),0,0
	  lfd       f24, 0xE0(r1)
	  lwz       r31, 0xDC(r1)
	  lwz       r30, 0xD8(r1)
	  lwz       r29, 0xD4(r1)
	  lwz       r0, 0x164(r1)
	  lwz       r28, 0xD0(r1)
	  mtlr      r0
	  addi      r1, r1, 0x160
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80297F30
 * Size:	00003C
 */
void KumaChappy::StateTurn::cleanup(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f1, -0x2830(r2)
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  bl        -0x190BBC
	  mr        r3, r31
	  bl        -0x1965D8
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80297F6C
 * Size:	000044
 */
void KumaChappy::StateTurnPath::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x2848(r2)
	  mr        r3, r4
	  stw       r0, 0x14(r1)
	  li        r0, -0x1
	  li        r5, 0
	  stw       r0, 0x2D4(r4)
	  li        r4, 0x6
	  stfs      f0, 0x1D4(r3)
	  stfs      f0, 0x1D8(r3)
	  stfs      f0, 0x1DC(r3)
	  bl        -0x192F98
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80297FB0
 * Size:	0004E0
 */
void KumaChappy::StateTurnPath::exec(Game::EnemyBase*)
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
	  stfd      f28, 0xB0(r1)
	  psq_st    f28,0xB8(r1),0,0
	  stfd      f27, 0xA0(r1)
	  psq_st    f27,0xA8(r1),0,0
	  stfd      f26, 0x90(r1)
	  psq_st    f26,0x98(r1),0,0
	  stw       r31, 0x8C(r1)
	  stw       r30, 0x88(r1)
	  stw       r29, 0x84(r1)
	  stw       r28, 0x80(r1)
	  mr        r31, r4
	  mr        r30, r3
	  mr        r3, r31
	  bl        0x239C
	  lfs       f1, 0x200(r31)
	  lfs       f0, -0x2848(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x90
	  li        r0, 0
	  mr        r3, r31
	  stw       r0, 0x2D4(r31)
	  bl        -0x192D8C
	  lfs       f1, -0x2834(r2)
	  mr        r3, r31
	  bl        -0x190CA8
	  b         .loc_0x454

	.loc_0x90:
	  mr        r3, r31
	  li        r4, 0
	  bl        -0x1839F0
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xC4
	  li        r0, 0x4
	  mr        r3, r31
	  stw       r0, 0x2D4(r31)
	  bl        -0x192DC0
	  lfs       f1, -0x2834(r2)
	  mr        r3, r31
	  bl        -0x190CDC
	  b         .loc_0x454

	.loc_0xC4:
	  mr        r3, r31
	  bl        0x2198
	  mr.       r28, r3
	  beq-      .loc_0x344
	  mr        r4, r28
	  lwz       r5, 0xC0(r31)
	  lwz       r12, 0x0(r28)
	  addi      r3, r1, 0x68
	  lfs       f29, 0x334(r5)
	  lwz       r12, 0x8(r12)
	  lfs       f30, 0x30C(r5)
	  mtctr     r12
	  bctrl
	  mr        r4, r31
	  addi      r3, r1, 0x74
	  lwz       r12, 0x0(r31)
	  lfs       f26, 0x68(r1)
	  lwz       r12, 0x8(r12)
	  lfs       f27, 0x70(r1)
	  mtctr     r12
	  bctrl
	  lfs       f1, 0x74(r1)
	  lis       r3, 0x8051
	  lfs       f0, 0x7C(r1)
	  subi      r3, r3, 0x2E20
	  fsubs     f1, f26, f1
	  fsubs     f2, f27, f0
	  bl        -0x262FD8
	  bl        0x179AEC
	  lwz       r12, 0x0(r31)
	  fmr       f26, f1
	  mr        r3, r31
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fmr       f2, f1
	  fmr       f1, f26
	  bl        0x179AF4
	  fmr       f31, f1
	  lfs       f0, -0x283C(r2)
	  lfs       f1, -0x2840(r2)
	  fmuls     f0, f0, f29
	  fmuls     f28, f31, f30
	  fmuls     f1, f1, f0
	  fabs      f0, f28
	  frsp      f0, f0
	  fcmpo     cr0, f0, f1
	  ble-      .loc_0x19C
	  lfs       f0, -0x2848(r2)
	  fcmpo     cr0, f28, f0
	  ble-      .loc_0x198
	  fmr       f28, f1
	  b         .loc_0x19C

	.loc_0x198:
	  fneg      f28, f1

	.loc_0x19C:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fadds     f1, f28, f1
	  bl        0x179A6C
	  stfs      f1, 0x1FC(r31)
	  mr        r4, r31
	  addi      r3, r1, 0x2C
	  li        r29, 0
	  lfs       f0, 0x1FC(r31)
	  stfs      f0, 0x1A8(r31)
	  lwz       r12, 0x0(r31)
	  lwz       r5, 0xC0(r31)
	  lwz       r12, 0x8(r12)
	  lfs       f28, 0x58C(r5)
	  lfs       f29, 0x564(r5)
	  mtctr     r12
	  bctrl
	  mr        r4, r28
	  addi      r3, r1, 0x20
	  lwz       r12, 0x0(r28)
	  lfs       f30, 0x2C(r1)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r31
	  lfs       f0, 0x20(r1)
	  lwz       r12, 0x0(r31)
	  addi      r3, r1, 0x44
	  fsubs     f26, f0, f30
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r28
	  addi      r3, r1, 0x38
	  lwz       r12, 0x0(r28)
	  lfs       f30, 0x48(r1)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r31
	  lfs       f0, 0x3C(r1)
	  lwz       r12, 0x0(r31)
	  addi      r3, r1, 0x5C
	  fsubs     f27, f0, f30
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r28
	  addi      r3, r1, 0x50
	  lwz       r12, 0x0(r28)
	  lfs       f30, 0x64(r1)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  fmuls     f1, f27, f27
	  lfs       f2, 0x58(r1)
	  fmuls     f0, f29, f29
	  fsubs     f2, f2, f30
	  fmadds    f1, f26, f26, f1
	  fmadds    f1, f2, f2, f1
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x2C8
	  lfs       f0, -0x283C(r2)
	  fabs      f2, f31
	  lfs       f1, -0x2840(r2)
	  fmuls     f0, f0, f28
	  frsp      f2, f2
	  fmuls     f0, f1, f0
	  fcmpo     cr0, f2, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x2C8
	  li        r29, 0x1

	.loc_0x2C8:
	  rlwinm.   r0,r29,0,24,31
	  beq-      .loc_0x2F0
	  li        r0, 0x3
	  mr        r3, r31
	  stw       r0, 0x2D4(r31)
	  bl        -0x192FEC
	  lfs       f1, -0x2834(r2)
	  mr        r3, r31
	  bl        -0x190F08
	  b         .loc_0x454

	.loc_0x2F0:
	  lwz       r3, 0xC0(r31)
	  fabs      f2, f31
	  lfs       f0, -0x283C(r2)
	  lfs       f3, 0x58C(r3)
	  lfs       f1, -0x2840(r2)
	  frsp      f2, f2
	  fmuls     f0, f0, f3
	  fmuls     f0, f1, f0
	  fcmpo     cr0, f2, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x330
	  li        r0, 0x7
	  mr        r3, r31
	  stw       r0, 0x2D4(r31)
	  bl        -0x193038
	  b         .loc_0x454

	.loc_0x330:
	  li        r0, 0x5
	  mr        r3, r31
	  stw       r0, 0x2D4(r31)
	  bl        -0x19304C
	  b         .loc_0x454

	.loc_0x344:
	  mr        r4, r31
	  lwz       r5, 0xC0(r31)
	  lwz       r12, 0x0(r31)
	  addi      r3, r1, 0x14
	  lfs       f26, 0x2E0(r31)
	  lwz       r12, 0x8(r12)
	  lfs       f27, 0x2E8(r31)
	  lfs       f29, 0x334(r5)
	  lfs       f28, 0x30C(r5)
	  mtctr     r12
	  bctrl
	  lfs       f4, 0x14(r1)
	  lis       r3, 0x8051
	  lfs       f0, 0x1C(r1)
	  subi      r3, r3, 0x2E20
	  lfs       f3, 0x18(r1)
	  fsubs     f1, f26, f4
	  fsubs     f2, f27, f0
	  stfs      f4, 0x8(r1)
	  stfs      f3, 0xC(r1)
	  stfs      f0, 0x10(r1)
	  bl        -0x263240
	  bl        0x179884
	  lwz       r12, 0x0(r31)
	  fmr       f26, f1
	  mr        r3, r31
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fmr       f2, f1
	  fmr       f1, f26
	  bl        0x17988C
	  fmr       f31, f1
	  lfs       f0, -0x283C(r2)
	  lfs       f1, -0x2840(r2)
	  fmuls     f0, f0, f29
	  fmuls     f26, f31, f28
	  fmuls     f1, f1, f0
	  fabs      f0, f26
	  frsp      f0, f0
	  fcmpo     cr0, f0, f1
	  ble-      .loc_0x404
	  lfs       f0, -0x2848(r2)
	  fcmpo     cr0, f26, f0
	  ble-      .loc_0x400
	  fmr       f26, f1
	  b         .loc_0x404

	.loc_0x400:
	  fneg      f26, f1

	.loc_0x404:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fadds     f1, f26, f1
	  bl        0x179804
	  fabs      f3, f31
	  stfs      f1, 0x1FC(r31)
	  lfs       f0, -0x2838(r2)
	  lfs       f2, 0x1FC(r31)
	  frsp      f1, f3
	  stfs      f2, 0x1A8(r31)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x454
	  li        r0, 0x8
	  mr        r3, r31
	  stw       r0, 0x2D4(r31)
	  bl        -0x193160

	.loc_0x454:
	  lwz       r3, 0x188(r31)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x490
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x490
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r6, 0
	  lwz       r5, 0x2D4(r31)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x490:
	  psq_l     f31,0xE8(r1),0,0
	  lfd       f31, 0xE0(r1)
	  psq_l     f30,0xD8(r1),0,0
	  lfd       f30, 0xD0(r1)
	  psq_l     f29,0xC8(r1),0,0
	  lfd       f29, 0xC0(r1)
	  psq_l     f28,0xB8(r1),0,0
	  lfd       f28, 0xB0(r1)
	  psq_l     f27,0xA8(r1),0,0
	  lfd       f27, 0xA0(r1)
	  psq_l     f26,0x98(r1),0,0
	  lfd       f26, 0x90(r1)
	  lwz       r31, 0x8C(r1)
	  lwz       r30, 0x88(r1)
	  lwz       r29, 0x84(r1)
	  lwz       r0, 0xF4(r1)
	  lwz       r28, 0x80(r1)
	  mtlr      r0
	  addi      r1, r1, 0xF0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80298490
 * Size:	000028
 */
void KumaChappy::StateTurnPath::cleanup(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f1, -0x2830(r2)
	  mr        r3, r4
	  stw       r0, 0x14(r1)
	  bl        -0x191114
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802984B8
 * Size:	000050
 */
void KumaChappy::StateWalk::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x2848(r2)
	  stw       r0, 0x14(r1)
	  li        r0, -0x1
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  stfs      f0, 0x2D0(r4)
	  stw       r0, 0x2D4(r4)
	  bl        -0x196B14
	  mr        r3, r31
	  li        r4, 0x3
	  li        r5, 0
	  bl        -0x1934EC
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80298508
 * Size:	00070C
 */
void KumaChappy::StateWalk::exec(Game::EnemyBase*)
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
	  stw       r31, 0xEC(r1)
	  stw       r30, 0xE8(r1)
	  stw       r29, 0xE4(r1)
	  stw       r28, 0xE0(r1)
	  mr        r31, r4
	  lwz       r4, 0xC0(r4)
	  mr        r30, r3
	  lfs       f30, 0x30C(r4)
	  mr        r3, r31
	  lfs       f29, 0x334(r4)
	  bl        -0x19127C
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x88
	  lfs       f30, -0x2828(r2)
	  lfs       f29, -0x2824(r2)

	.loc_0x88:
	  lfs       f1, 0x200(r31)
	  lfs       f0, -0x2848(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0xBC
	  li        r0, 0
	  mr        r3, r31
	  stw       r0, 0x2D4(r31)
	  bl        -0x193310
	  lfs       f1, -0x2834(r2)
	  mr        r3, r31
	  bl        -0x19122C
	  b         .loc_0x5E0

	.loc_0xBC:
	  mr        r3, r31
	  li        r4, 0
	  bl        -0x183F74
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xF0
	  li        r0, 0x4
	  mr        r3, r31
	  stw       r0, 0x2D4(r31)
	  bl        -0x193344
	  lfs       f1, -0x2834(r2)
	  mr        r3, r31
	  bl        -0x191260
	  b         .loc_0x5E0

	.loc_0xF0:
	  mr        r3, r31
	  bl        0x1C14
	  mr.       r28, r3
	  beq-      .loc_0x4C0
	  mr        r4, r28
	  addi      r3, r1, 0x68
	  lwz       r12, 0x0(r28)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r31
	  addi      r3, r1, 0x74
	  lwz       r12, 0x0(r31)
	  lfs       f24, 0x68(r1)
	  lwz       r12, 0x8(r12)
	  lfs       f25, 0x70(r1)
	  mtctr     r12
	  bctrl
	  lfs       f1, 0x74(r1)
	  lis       r3, 0x8051
	  lfs       f0, 0x7C(r1)
	  subi      r3, r3, 0x2E20
	  fsubs     f1, f24, f1
	  fsubs     f2, f25, f0
	  bl        -0x263550
	  bl        0x179574
	  lwz       r12, 0x0(r31)
	  fmr       f24, f1
	  mr        r3, r31
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fmr       f2, f1
	  fmr       f1, f24
	  bl        0x17957C
	  fmr       f31, f1
	  lfs       f0, -0x283C(r2)
	  lfs       f1, -0x2840(r2)
	  fmuls     f0, f0, f29
	  fmuls     f24, f31, f30
	  fmuls     f1, f1, f0
	  fabs      f0, f24
	  frsp      f0, f0
	  fcmpo     cr0, f0, f1
	  ble-      .loc_0x1BC
	  lfs       f0, -0x2848(r2)
	  fcmpo     cr0, f24, f0
	  ble-      .loc_0x1B8
	  fmr       f24, f1
	  b         .loc_0x1BC

	.loc_0x1B8:
	  fneg      f24, f1

	.loc_0x1BC:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fadds     f1, f24, f1
	  bl        0x1794F4
	  stfs      f1, 0x1FC(r31)
	  mr        r4, r31
	  addi      r3, r1, 0x2C
	  li        r29, 0
	  lfs       f0, 0x1FC(r31)
	  stfs      f0, 0x1A8(r31)
	  lwz       r12, 0x0(r31)
	  lwz       r5, 0xC0(r31)
	  lwz       r12, 0x8(r12)
	  lfs       f28, 0x58C(r5)
	  lfs       f30, 0x564(r5)
	  mtctr     r12
	  bctrl
	  mr        r4, r28
	  addi      r3, r1, 0x20
	  lwz       r12, 0x0(r28)
	  lfs       f29, 0x2C(r1)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r31
	  lfs       f0, 0x20(r1)
	  lwz       r12, 0x0(r31)
	  addi      r3, r1, 0x44
	  fsubs     f25, f0, f29
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r28
	  addi      r3, r1, 0x38
	  lwz       r12, 0x0(r28)
	  lfs       f29, 0x48(r1)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r31
	  lfs       f0, 0x3C(r1)
	  lwz       r12, 0x0(r31)
	  addi      r3, r1, 0x5C
	  fsubs     f24, f0, f29
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r28
	  addi      r3, r1, 0x50
	  lwz       r12, 0x0(r28)
	  lfs       f29, 0x64(r1)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  fmuls     f1, f24, f24
	  lfs       f2, 0x58(r1)
	  fmuls     f0, f30, f30
	  fsubs     f2, f2, f29
	  fmadds    f1, f25, f25, f1
	  fmadds    f1, f2, f2, f1
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x2E8
	  lfs       f0, -0x283C(r2)
	  fabs      f2, f31
	  lfs       f1, -0x2840(r2)
	  fmuls     f0, f0, f28
	  frsp      f2, f2
	  fmuls     f0, f1, f0
	  fcmpo     cr0, f2, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x2E8
	  li        r29, 0x1

	.loc_0x2E8:
	  rlwinm.   r0,r29,0,24,31
	  beq-      .loc_0x310
	  li        r0, 0x3
	  mr        r3, r31
	  stw       r0, 0x2D4(r31)
	  bl        -0x193564
	  lfs       f1, -0x2834(r2)
	  mr        r3, r31
	  bl        -0x191480
	  b         .loc_0x5E0

	.loc_0x310:
	  mr        r3, r31
	  bl        0x16B0
	  mr        r4, r31
	  lwz       r5, 0xC0(r31)
	  lwz       r12, 0x0(r31)
	  fmr       f30, f1
	  addi      r3, r1, 0x98
	  lfs       f24, 0x3FC(r5)
	  lwz       r12, 0x8(r12)
	  lfs       f25, 0x3D4(r5)
	  lfs       f26, 0x3AC(r5)
	  mtctr     r12
	  bctrl
	  mr        r4, r28
	  addi      r3, r1, 0x8C
	  lwz       r12, 0x0(r28)
	  lfs       f29, 0x98(r1)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r31
	  lfs       f0, 0x8C(r1)
	  lwz       r12, 0x0(r31)
	  addi      r3, r1, 0xB0
	  fsubs     f27, f0, f29
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r28
	  addi      r3, r1, 0xA4
	  lwz       r12, 0x0(r28)
	  lfs       f29, 0xB4(r1)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r31
	  lfs       f0, 0xA8(r1)
	  lwz       r12, 0x0(r31)
	  addi      r3, r1, 0xC8
	  fsubs     f28, f0, f29
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r28
	  addi      r3, r1, 0xBC
	  lwz       r12, 0x0(r28)
	  lfs       f29, 0xD0(r1)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, 0xC4(r1)
	  fmuls     f26, f26, f26
	  fmuls     f25, f25, f25
	  li        r3, 0x1
	  fsubs     f0, f0, f29
	  li        r4, 0
	  fmuls     f0, f0, f0
	  fmadds    f0, f27, f27, f0
	  fcmpo     cr0, f0, f26
	  ble-      .loc_0x42C
	  fcmpo     cr0, f0, f25
	  mr        r0, r4
	  ble-      .loc_0x420
	  fabs      f0, f28
	  frsp      f0, f0
	  fcmpo     cr0, f0, f24
	  bge-      .loc_0x420
	  mr        r0, r3

	.loc_0x420:
	  rlwinm.   r0,r0,0,24,31
	  beq-      .loc_0x42C
	  li        r4, 0x1

	.loc_0x42C:
	  rlwinm.   r0,r4,0,24,31
	  bne-      .loc_0x464
	  lfs       f0, -0x283C(r2)
	  fabs      f2, f31
	  lfs       f1, -0x2840(r2)
	  fmuls     f0, f0, f30
	  frsp      f2, f2
	  fmuls     f0, f1, f0
	  fcmpo     cr0, f2, f0
	  cror      2, 0, 0x2
	  mfcr      r0
	  rlwinm.   r0,r0,3,31,31
	  beq-      .loc_0x464
	  li        r3, 0

	.loc_0x464:
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x480
	  li        r0, 0x2
	  mr        r3, r31
	  stw       r0, 0x2D4(r31)
	  bl        -0x1936E0
	  b         .loc_0x5E0

	.loc_0x480:
	  lwz       r3, 0xC0(r31)
	  fabs      f2, f31
	  lfs       f0, -0x283C(r2)
	  lfs       f3, 0x58C(r3)
	  lfs       f1, -0x2840(r2)
	  frsp      f2, f2
	  fmuls     f0, f0, f3
	  fmuls     f0, f1, f0
	  fcmpo     cr0, f2, f0
	  cror      2, 0, 0x2
	  beq-      .loc_0x5E0
	  li        r0, 0x5
	  mr        r3, r31
	  stw       r0, 0x2D4(r31)
	  bl        -0x193720
	  b         .loc_0x5E0

	.loc_0x4C0:
	  mr        r3, r31
	  bl        0x1534
	  mr        r4, r31
	  addi      r3, r1, 0x14
	  lwz       r12, 0x0(r31)
	  lfs       f24, 0x2E0(r31)
	  lwz       r12, 0x8(r12)
	  lfs       f25, 0x2E8(r31)
	  mtctr     r12
	  bctrl
	  lfs       f4, 0x14(r1)
	  lis       r3, 0x8051
	  lfs       f0, 0x1C(r1)
	  subi      r3, r3, 0x2E20
	  lfs       f3, 0x18(r1)
	  fsubs     f1, f24, f4
	  fsubs     f2, f25, f0
	  stfs      f4, 0x8(r1)
	  stfs      f3, 0xC(r1)
	  stfs      f0, 0x10(r1)
	  bl        -0x263910
	  bl        0x1791B4
	  lwz       r12, 0x0(r31)
	  fmr       f24, f1
	  mr        r3, r31
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fmr       f2, f1
	  fmr       f1, f24
	  bl        0x1791BC
	  fmr       f31, f1
	  lfs       f0, -0x283C(r2)
	  lfs       f1, -0x2840(r2)
	  fmuls     f0, f0, f29
	  fmuls     f24, f31, f30
	  fmuls     f1, f1, f0
	  fabs      f0, f24
	  frsp      f0, f0
	  fcmpo     cr0, f0, f1
	  ble-      .loc_0x57C
	  lfs       f0, -0x2848(r2)
	  fcmpo     cr0, f24, f0
	  ble-      .loc_0x578
	  fmr       f24, f1
	  b         .loc_0x57C

	.loc_0x578:
	  fneg      f24, f1

	.loc_0x57C:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fadds     f1, f24, f1
	  bl        0x179134
	  fabs      f3, f31
	  stfs      f1, 0x1FC(r31)
	  lfs       f0, -0x2838(r2)
	  lfs       f2, 0x1FC(r31)
	  frsp      f1, f3
	  stfs      f2, 0x1A8(r31)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x5D0
	  li        r0, 0x8
	  mr        r3, r31
	  stw       r0, 0x2D4(r31)
	  bl        -0x193830
	  b         .loc_0x5E0

	.loc_0x5D0:
	  li        r0, 0x6
	  mr        r3, r31
	  stw       r0, 0x2D4(r31)
	  bl        -0x193844

	.loc_0x5E0:
	  mr        r3, r31
	  bl        -0x1917EC
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x604
	  lfs       f0, -0x2848(r2)
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  b         .loc_0x670

	.loc_0x604:
	  mr        r3, r31
	  lwz       r4, 0xC0(r31)
	  lwz       r12, 0x0(r31)
	  lfs       f24, 0x2E4(r4)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  bl        -0x1C930C
	  mr        r3, r31
	  lfs       f2, 0x1D4(r31)
	  lwz       r12, 0x0(r31)
	  frsp      f25, f1
	  lfs       f29, 0x1D8(r31)
	  lfs       f0, 0x1DC(r31)
	  lwz       r12, 0x64(r12)
	  stfs      f2, 0x80(r1)
	  stfs      f29, 0x84(r1)
	  stfs      f0, 0x88(r1)
	  mtctr     r12
	  bctrl
	  bl        -0x1C98A8
	  fmuls     f0, f24, f25
	  frsp      f1, f1
	  stfs      f0, 0x1D4(r31)
	  fmuls     f0, f24, f1
	  stfs      f29, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)

	.loc_0x670:
	  lwz       r3, 0x188(r31)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x6AC
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x6AC
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r6, 0
	  lwz       r5, 0x2D4(r31)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x6AC:
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
	  lwz       r31, 0xEC(r1)
	  lwz       r30, 0xE8(r1)
	  lwz       r29, 0xE4(r1)
	  lwz       r0, 0x174(r1)
	  lwz       r28, 0xE0(r1)
	  mtlr      r0
	  addi      r1, r1, 0x170
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80298C14
 * Size:	00003C
 */
void KumaChappy::StateWalk::cleanup(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f1, -0x2830(r2)
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  bl        -0x1918A0
	  mr        r3, r31
	  bl        -0x1972BC
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80298C50
 * Size:	000034
 */
void KumaChappy::StateWalkPath::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r3, r4
	  li        r4, 0x3
	  stw       r0, 0x14(r1)
	  li        r0, -0x1
	  li        r5, 0
	  stw       r0, 0x2D4(r3)
	  bl        -0x193C6C
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80298C84
 * Size:	000594
 */
void KumaChappy::StateWalkPath::exec(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x100(r1)
	  mflr      r0
	  stw       r0, 0x104(r1)
	  stfd      f31, 0xF0(r1)
	  psq_st    f31,0xF8(r1),0,0
	  stfd      f30, 0xE0(r1)
	  psq_st    f30,0xE8(r1),0,0
	  stfd      f29, 0xD0(r1)
	  psq_st    f29,0xD8(r1),0,0
	  stfd      f28, 0xC0(r1)
	  psq_st    f28,0xC8(r1),0,0
	  stfd      f27, 0xB0(r1)
	  psq_st    f27,0xB8(r1),0,0
	  stfd      f26, 0xA0(r1)
	  psq_st    f26,0xA8(r1),0,0
	  stw       r31, 0x9C(r1)
	  stw       r30, 0x98(r1)
	  stw       r29, 0x94(r1)
	  stw       r28, 0x90(r1)
	  mr        r31, r4
	  mr        r30, r3
	  mr        r3, r31
	  bl        0x16C8
	  lwz       r4, 0xC0(r31)
	  mr        r3, r31
	  lfs       f30, 0x30C(r4)
	  lfs       f29, 0x334(r4)
	  bl        -0x1919F0
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x80
	  lfs       f30, -0x2828(r2)
	  lfs       f29, -0x2824(r2)

	.loc_0x80:
	  lfs       f1, 0x200(r31)
	  lfs       f0, -0x2848(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0xB4
	  li        r0, 0
	  mr        r3, r31
	  stw       r0, 0x2D4(r31)
	  bl        -0x193A84
	  lfs       f1, -0x2834(r2)
	  mr        r3, r31
	  bl        -0x1919A0
	  b         .loc_0x460

	.loc_0xB4:
	  mr        r3, r31
	  li        r4, 0
	  bl        -0x1846E8
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xE8
	  li        r0, 0x4
	  mr        r3, r31
	  stw       r0, 0x2D4(r31)
	  bl        -0x193AB8
	  lfs       f1, -0x2834(r2)
	  mr        r3, r31
	  bl        -0x1919D4
	  b         .loc_0x460

	.loc_0xE8:
	  mr        r3, r31
	  bl        0x14A0
	  mr.       r28, r3
	  beq-      .loc_0x35C
	  mr        r4, r28
	  addi      r3, r1, 0x68
	  lwz       r12, 0x0(r28)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r31
	  addi      r3, r1, 0x74
	  lwz       r12, 0x0(r31)
	  lfs       f26, 0x68(r1)
	  lwz       r12, 0x8(r12)
	  lfs       f27, 0x70(r1)
	  mtctr     r12
	  bctrl
	  lfs       f1, 0x74(r1)
	  lis       r3, 0x8051
	  lfs       f0, 0x7C(r1)
	  subi      r3, r3, 0x2E20
	  fsubs     f1, f26, f1
	  fsubs     f2, f27, f0
	  bl        -0x263CC4
	  bl        0x178E00
	  lwz       r12, 0x0(r31)
	  fmr       f26, f1
	  mr        r3, r31
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fmr       f2, f1
	  fmr       f1, f26
	  bl        0x178E08
	  fmr       f31, f1
	  lfs       f0, -0x283C(r2)
	  lfs       f1, -0x2840(r2)
	  fmuls     f0, f0, f29
	  fmuls     f28, f31, f30
	  fmuls     f1, f1, f0
	  fabs      f0, f28
	  frsp      f0, f0
	  fcmpo     cr0, f0, f1
	  ble-      .loc_0x1B4
	  lfs       f0, -0x2848(r2)
	  fcmpo     cr0, f28, f0
	  ble-      .loc_0x1B0
	  fmr       f28, f1
	  b         .loc_0x1B4

	.loc_0x1B0:
	  fneg      f28, f1

	.loc_0x1B4:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fadds     f1, f28, f1
	  bl        0x178D80
	  stfs      f1, 0x1FC(r31)
	  mr        r4, r31
	  addi      r3, r1, 0x2C
	  li        r29, 0
	  lfs       f0, 0x1FC(r31)
	  stfs      f0, 0x1A8(r31)
	  lwz       r12, 0x0(r31)
	  lwz       r5, 0xC0(r31)
	  lwz       r12, 0x8(r12)
	  lfs       f28, 0x58C(r5)
	  lfs       f30, 0x564(r5)
	  mtctr     r12
	  bctrl
	  mr        r4, r28
	  addi      r3, r1, 0x20
	  lwz       r12, 0x0(r28)
	  lfs       f29, 0x2C(r1)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r31
	  lfs       f0, 0x20(r1)
	  lwz       r12, 0x0(r31)
	  addi      r3, r1, 0x44
	  fsubs     f26, f0, f29
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r28
	  addi      r3, r1, 0x38
	  lwz       r12, 0x0(r28)
	  lfs       f29, 0x48(r1)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r31
	  lfs       f0, 0x3C(r1)
	  lwz       r12, 0x0(r31)
	  addi      r3, r1, 0x5C
	  fsubs     f27, f0, f29
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r28
	  addi      r3, r1, 0x50
	  lwz       r12, 0x0(r28)
	  lfs       f29, 0x64(r1)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  fmuls     f1, f27, f27
	  lfs       f2, 0x58(r1)
	  fmuls     f0, f30, f30
	  fsubs     f2, f2, f29
	  fmadds    f1, f26, f26, f1
	  fmadds    f1, f2, f2, f1
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x2E0
	  lfs       f0, -0x283C(r2)
	  fabs      f2, f31
	  lfs       f1, -0x2840(r2)
	  fmuls     f0, f0, f28
	  frsp      f2, f2
	  fmuls     f0, f1, f0
	  fcmpo     cr0, f2, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x2E0
	  li        r29, 0x1

	.loc_0x2E0:
	  rlwinm.   r0,r29,0,24,31
	  beq-      .loc_0x308
	  li        r0, 0x3
	  mr        r3, r31
	  stw       r0, 0x2D4(r31)
	  bl        -0x193CD8
	  lfs       f1, -0x2834(r2)
	  mr        r3, r31
	  bl        -0x191BF4
	  b         .loc_0x460

	.loc_0x308:
	  lwz       r3, 0xC0(r31)
	  fabs      f2, f31
	  lfs       f0, -0x283C(r2)
	  lfs       f3, 0x58C(r3)
	  lfs       f1, -0x2840(r2)
	  frsp      f2, f2
	  fmuls     f0, f0, f3
	  fmuls     f0, f1, f0
	  fcmpo     cr0, f2, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x348
	  li        r0, 0x7
	  mr        r3, r31
	  stw       r0, 0x2D4(r31)
	  bl        -0x193D24
	  b         .loc_0x460

	.loc_0x348:
	  li        r0, 0x5
	  mr        r3, r31
	  stw       r0, 0x2D4(r31)
	  bl        -0x193D38
	  b         .loc_0x460

	.loc_0x35C:
	  mr        r4, r31
	  addi      r3, r1, 0x14
	  lwz       r12, 0x0(r31)
	  lfs       f26, 0x2E0(r31)
	  lwz       r12, 0x8(r12)
	  lfs       f27, 0x2E8(r31)
	  mtctr     r12
	  bctrl
	  lfs       f4, 0x14(r1)
	  lis       r3, 0x8051
	  lfs       f0, 0x1C(r1)
	  subi      r3, r3, 0x2E20
	  lfs       f3, 0x18(r1)
	  fsubs     f1, f26, f4
	  fsubs     f2, f27, f0
	  stfs      f4, 0x8(r1)
	  stfs      f3, 0xC(r1)
	  stfs      f0, 0x10(r1)
	  bl        -0x263F20
	  bl        0x178BA4
	  lwz       r12, 0x0(r31)
	  fmr       f26, f1
	  mr        r3, r31
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fmr       f2, f1
	  fmr       f1, f26
	  bl        0x178BAC
	  fmr       f31, f1
	  lfs       f0, -0x283C(r2)
	  lfs       f1, -0x2840(r2)
	  fmuls     f0, f0, f29
	  fmuls     f26, f31, f30
	  fmuls     f1, f1, f0
	  fabs      f0, f26
	  frsp      f0, f0
	  fcmpo     cr0, f0, f1
	  ble-      .loc_0x410
	  lfs       f0, -0x2848(r2)
	  fcmpo     cr0, f26, f0
	  ble-      .loc_0x40C
	  fmr       f26, f1
	  b         .loc_0x410

	.loc_0x40C:
	  fneg      f26, f1

	.loc_0x410:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fadds     f1, f26, f1
	  bl        0x178B24
	  fabs      f3, f31
	  stfs      f1, 0x1FC(r31)
	  lfs       f0, -0x2838(r2)
	  lfs       f2, 0x1FC(r31)
	  frsp      f1, f3
	  stfs      f2, 0x1A8(r31)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  beq-      .loc_0x460
	  li        r0, 0x6
	  mr        r3, r31
	  stw       r0, 0x2D4(r31)
	  bl        -0x193E40

	.loc_0x460:
	  mr        r3, r31
	  bl        -0x191DE8
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x484
	  lfs       f0, -0x2848(r2)
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  b         .loc_0x4F0

	.loc_0x484:
	  mr        r3, r31
	  lwz       r4, 0xC0(r31)
	  lwz       r12, 0x0(r31)
	  lfs       f28, 0x2E4(r4)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  bl        -0x1C9908
	  mr        r3, r31
	  lfs       f2, 0x1D4(r31)
	  lwz       r12, 0x0(r31)
	  frsp      f26, f1
	  lfs       f29, 0x1D8(r31)
	  lfs       f0, 0x1DC(r31)
	  lwz       r12, 0x64(r12)
	  stfs      f2, 0x80(r1)
	  stfs      f29, 0x84(r1)
	  stfs      f0, 0x88(r1)
	  mtctr     r12
	  bctrl
	  bl        -0x1C9EA4
	  fmuls     f0, f28, f26
	  frsp      f1, f1
	  stfs      f0, 0x1D4(r31)
	  fmuls     f0, f28, f1
	  stfs      f29, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)

	.loc_0x4F0:
	  lwz       r3, -0x6514(r13)
	  lfs       f2, -0x2820(r2)
	  lfs       f1, 0x54(r3)
	  lfs       f0, 0x2D0(r31)
	  fmadds    f0, f2, f1, f0
	  stfs      f0, 0x2D0(r31)
	  lwz       r3, 0x188(r31)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x544
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x544
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r6, 0
	  lwz       r5, 0x2D4(r31)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x544:
	  psq_l     f31,0xF8(r1),0,0
	  lfd       f31, 0xF0(r1)
	  psq_l     f30,0xE8(r1),0,0
	  lfd       f30, 0xE0(r1)
	  psq_l     f29,0xD8(r1),0,0
	  lfd       f29, 0xD0(r1)
	  psq_l     f28,0xC8(r1),0,0
	  lfd       f28, 0xC0(r1)
	  psq_l     f27,0xB8(r1),0,0
	  lfd       f27, 0xB0(r1)
	  psq_l     f26,0xA8(r1),0,0
	  lfd       f26, 0xA0(r1)
	  lwz       r31, 0x9C(r1)
	  lwz       r30, 0x98(r1)
	  lwz       r29, 0x94(r1)
	  lwz       r0, 0x104(r1)
	  lwz       r28, 0x90(r1)
	  mtlr      r0
	  addi      r1, r1, 0x100
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80299218
 * Size:	000028
 */
void KumaChappy::StateWalkPath::cleanup(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f1, -0x2830(r2)
	  mr        r3, r4
	  stw       r0, 0x14(r1)
	  bl        -0x191E9C
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}
} // namespace Game
