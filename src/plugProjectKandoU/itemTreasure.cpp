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
 * Address:	801F316C
 * Size:	000084
 */
void Game::ItemTreasure::FSM::init((Game::ItemTreasure::Item*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r4, 0x1
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        0x188C
	  li        r3, 0x10
	  bl        -0x1CF2E8
	  mr.       r4, r3
	  beq-      .loc_0x68
	  lis       r3, 0x804C
	  lis       r6, 0x804C
	  subi      r0, r3, 0x3BB8
	  lis       r5, 0x804C
	  stw       r0, 0x0(r4)
	  li        r7, 0
	  lis       r3, 0x804C
	  subi      r6, r6, 0x3BEC
	  stw       r7, 0x4(r4)
	  subi      r5, r5, 0x3C20
	  subi      r0, r3, 0x3C54
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0x0(r4)
	  stw       r0, 0x0(r4)

	.loc_0x68:
	  mr        r3, r31
	  bl        0x1938
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801F31F0
 * Size:	00000C
 */
void Game::ItemTreasure::NormalState::init((Game::ItemTreasure::Item*,
                                            Game::StateArg*))
{
	/*
	.loc_0x0:
	  lfs       f0, -0x4790(r2)
	  stfs      f0, 0x1D4(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801F31FC
 * Size:	000004
 */
void Game::ItemTreasure::NormalState::exec((Game::ItemTreasure::Item*)) { }

/*
 * --INFO--
 * Address:	801F3200
 * Size:	000004
 */
void Game::ItemTreasure::NormalState::cleanup((Game::ItemTreasure::Item*)) { }

/*
 * --INFO--
 * Address:	801F3204
 * Size:	0003C8
 */
void Game::ItemTreasure::NormalState::onDamage((Game::ItemTreasure::Item*,
                                                float))
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
	  stw       r31, 0x5C(r1)
	  lwz       r3, -0x6C18(r13)
	  fmr       f30, f1
	  mr        r31, r4
	  lbz       r0, 0x3C(r3)
	  rlwinm.   r0,r0,0,26,26
	  beq-      .loc_0x2FC
	  lwz       r0, 0x44(r3)
	  cmpwi     r0, 0
	  bne-      .loc_0x2FC
	  lwz       r3, -0x6B70(r13)
	  li        r4, 0x2D
	  bl        -0xBE70
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x2FC
	  lwz       r3, 0x1FC(r31)
	  bl        -0x8D018
	  fmr       f31, f1
	  lwz       r3, 0x1FC(r31)
	  bl        -0x8D030
	  fcmpu     cr0, f1, f31
	  bne-      .loc_0x2FC
	  lwz       r3, -0x6B70(r13)
	  li        r4, 0x2D
	  bl        -0xBEDC
	  li        r5, 0
	  lfs       f0, -0x4790(r2)
	  lwz       r3, -0x6D0C(r13)
	  lis       r6, 0x8048
	  lis       r4, 0x804B
	  cmplwi    r5, 0
	  addi      r6, r6, 0x16D4
	  stw       r5, 0x28(r1)
	  subi      r0, r4, 0x4364
	  stw       r6, 0x24(r1)
	  stw       r5, 0x30(r1)
	  stfs      f0, 0x3C(r1)
	  stfs      f0, 0x40(r1)
	  stfs      f0, 0x44(r1)
	  stfs      f0, 0x48(r1)
	  stw       r5, 0x4C(r1)
	  stw       r5, 0x34(r1)
	  stw       r5, 0x2C(r1)
	  stw       r5, 0x50(r1)
	  stw       r5, 0x38(r1)
	  stw       r5, 0x54(r1)
	  stw       r0, 0x14(r1)
	  stw       r5, 0x20(r1)
	  stw       r5, 0x18(r1)
	  stw       r3, 0x1C(r1)
	  bne-      .loc_0x100
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x18(r1)
	  b         .loc_0x270

	.loc_0x100:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x18(r1)
	  b         .loc_0x16C

	.loc_0x118:
	  lwz       r3, 0x1C(r1)
	  lwz       r4, 0x18(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x20(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x270
	  lwz       r3, 0x1C(r1)
	  lwz       r4, 0x18(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x18(r1)

	.loc_0x16C:
	  lwz       r12, 0x14(r1)
	  addi      r3, r1, 0x14
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x118
	  b         .loc_0x270

	.loc_0x18C:
	  lwz       r3, 0x1C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lbz       r0, 0x2B8(r3)
	  cmpwi     r0, 0x4
	  bne-      .loc_0x1B4
	  li        r4, 0
	  bl        -0xB7964

	.loc_0x1B4:
	  lwz       r0, 0x20(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x1E0
	  lwz       r3, 0x1C(r1)
	  lwz       r4, 0x18(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x18(r1)
	  b         .loc_0x270

	.loc_0x1E0:
	  lwz       r3, 0x1C(r1)
	  lwz       r4, 0x18(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x18(r1)
	  b         .loc_0x254

	.loc_0x200:
	  lwz       r3, 0x1C(r1)
	  lwz       r4, 0x18(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x20(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x270
	  lwz       r3, 0x1C(r1)
	  lwz       r4, 0x18(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x18(r1)

	.loc_0x254:
	  lwz       r12, 0x14(r1)
	  addi      r3, r1, 0x14
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x200

	.loc_0x270:
	  lwz       r3, 0x1C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x18(r1)
	  cmplw     r4, r3
	  bne+      .loc_0x18C
	  mr        r3, r31
	  li        r4, 0
	  bl        -0xB7A4C
	  lwz       r4, 0x1FC(r31)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x0(r4)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x8(r1)
	  lfs       f1, 0xC(r1)
	  lfs       f0, 0x10(r1)
	  stfs      f2, 0x3C(r1)
	  stfs      f1, 0x40(r1)
	  stfs      f0, 0x44(r1)
	  lwz       r3, 0x1FC(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  stfs      f1, 0x48(r1)
	  addi      r4, r1, 0x24
	  lwz       r3, -0x64AC(r13)
	  lwz       r0, 0x1FC(r31)
	  stw       r0, 0x194(r3)
	  lwz       r3, -0x64AC(r13)
	  bl        0x2394D4

	.loc_0x2FC:
	  lfs       f1, 0x230(r31)
	  mr        r3, r31
	  lfs       f0, -0x4790(r2)
	  fadds     f1, f1, f30
	  stfs      f1, 0x230(r31)
	  lfs       f2, 0x1F4(r31)
	  lfs       f1, 0x230(r31)
	  fsubs     f1, f2, f1
	  stfs      f1, 0x1F4(r31)
	  stfs      f0, 0x230(r31)
	  bl        0x920
	  fmr       f31, f1
	  lwz       r3, 0x1FC(r31)
	  bl        -0x8D2F8
	  fdivs     f3, f30, f31
	  lfs       f4, -0x478C(r2)
	  lfs       f2, 0x1F8(r31)
	  lfs       f0, -0x4790(r2)
	  fmuls     f1, f4, f1
	  fnmsubs   f1, f1, f3, f2
	  stfs      f1, 0x1F8(r31)
	  lfs       f1, 0x1F4(r31)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x384
	  lwz       r3, 0x17C(r31)
	  li        r4, 0x3832
	  li        r5, 0
	  lwz       r12, 0x28(r3)
	  lwz       r12, 0x7C(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  bl        0x894

	.loc_0x384:
	  lfs       f1, 0x1F8(r31)
	  lfs       f0, -0x4790(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x3A4
	  stfs      f0, 0x1F8(r31)
	  mr        r3, r31
	  bl        .loc_0x3C8

	.loc_0x3A4:
	  psq_l     f31,0x78(r1),0,0
	  lfd       f31, 0x70(r1)
	  psq_l     f30,0x68(r1),0,0
	  lfd       f30, 0x60(r1)
	  lwz       r0, 0x84(r1)
	  lwz       r31, 0x5C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x80
	  blr

	.loc_0x3C8:
	*/
}

/*
 * --INFO--
 * Address:	801F35CC
 * Size:	000298
 */
void Game::ItemTreasure::Item::releasePellet(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x70(r1)
	  mflr      r0
	  stw       r0, 0x74(r1)
	  stw       r31, 0x6C(r1)
	  mr        r31, r3
	  lwz       r3, 0x1FC(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x284
	  bl        -0x53A50
	  lwz       r3, 0x1FC(r31)
	  lwz       r3, 0x328(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x3C
	  lfs       f1, -0x4788(r2)
	  bl        0x493CC

	.loc_0x3C:
	  lwz       r3, 0x1FC(r31)
	  bl        -0x8CC44
	  lwz       r5, 0x19C(r31)
	  lis       r4, 0x804B
	  lwz       r0, 0x1A0(r31)
	  lis       r3, 0x804B
	  lwz       r8, 0x1A4(r31)
	  subi      r7, r4, 0x5814
	  stw       r5, 0xC(r1)
	  subi      r5, r3, 0x5808
	  lis       r4, 0x804B
	  lis       r3, 0x804E
	  stw       r0, 0x10(r1)
	  subi      r6, r4, 0x5D24
	  lfs       f3, 0xC(r1)
	  addi      r0, r3, 0x713C
	  stw       r8, 0x14(r1)
	  addi      r3, r1, 0x8
	  lfs       f2, 0x10(r1)
	  addi      r4, r1, 0x3C
	  stw       r7, 0x3C(r1)
	  lfs       f0, 0x14(r1)
	  stw       r5, 0x8(r1)
	  stfs      f3, 0x40(r1)
	  stfs      f2, 0x44(r1)
	  stfs      f0, 0x48(r1)
	  stw       r6, 0x3C(r1)
	  stfs      f1, 0x4C(r1)
	  stw       r0, 0x8(r1)
	  bl        0x1C2538
	  lwz       r3, 0x17C(r31)
	  li        r4, 0x3833
	  li        r5, 0
	  lwz       r12, 0x28(r3)
	  lwz       r12, 0x7C(r12)
	  mtctr     r12
	  bctrl
	  bl        -0x12A0FC
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x54(r1)
	  lfd       f3, -0x4770(r2)
	  stw       r0, 0x50(r1)
	  lfs       f2, -0x4784(r2)
	  lfd       f1, 0x50(r1)
	  lfs       f0, -0x4788(r2)
	  fsubs     f3, f1, f3
	  lfs       f1, -0x4780(r2)
	  fdivs     f2, f3, f2
	  fsubs     f0, f2, f0
	  fmuls     f0, f1, f0
	  stfs      f0, 0x18(r1)
	  bl        -0x12A138
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x5C(r1)
	  addi      r4, r1, 0x18
	  lfs       f0, -0x477C(r2)
	  stw       r0, 0x58(r1)
	  lfd       f2, -0x4770(r2)
	  lfd       f1, 0x58(r1)
	  lfs       f3, -0x4784(r2)
	  fsubs     f4, f1, f2
	  lfs       f1, -0x4788(r2)
	  lfs       f2, -0x4780(r2)
	  stfs      f0, 0x1C(r1)
	  fdivs     f0, f4, f3
	  fsubs     f0, f0, f1
	  fmuls     f0, f2, f0
	  stfs      f0, 0x20(r1)
	  lwz       r3, 0x1FC(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x68(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, -0x6C18(r13)
	  lwz       r0, 0x44(r3)
	  cmpwi     r0, 0x1
	  bne-      .loc_0x210
	  bl        -0x12A1A4
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x5C(r1)
	  lis       r3, 0x804B
	  addi      r5, r3, 0x590
	  lis       r3, 0x804B
	  stw       r0, 0x58(r1)
	  addi      r3, r3, 0x6130
	  lfd       f2, -0x4770(r2)
	  li        r0, 0
	  lfd       f0, 0x58(r1)
	  addi      r4, r1, 0x24
	  lfs       f1, -0x4784(r2)
	  fsubs     f2, f0, f2
	  stw       r5, 0x24(r1)
	  lfs       f0, -0x4778(r2)
	  stw       r3, 0x24(r1)
	  fdivs     f2, f2, f1
	  lwz       r3, -0x6C18(r13)
	  lfs       f1, 0x19C(r31)
	  stfs      f1, 0x28(r1)
	  lfs       f1, 0x1A0(r31)
	  stfs      f1, 0x2C(r1)
	  fmuls     f0, f0, f2
	  lfs       f1, 0x1A4(r31)
	  stfs      f1, 0x30(r1)
	  fctiwz    f0, f0
	  stb       r0, 0x38(r1)
	  stfd      f0, 0x50(r1)
	  lwz       r5, 0x54(r1)
	  addi      r0, r5, 0x1
	  stw       r0, 0x34(r1)
	  lwz       r3, 0x58(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x50(r12)
	  mtctr     r12
	  bctrl

	.loc_0x210:
	  addi      r3, r31, 0x1E0
	  bl        0x3B450
	  lwz       r3, 0x17C(r31)
	  lwz       r12, 0x28(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  cmpwi     r3, 0xA
	  beq-      .loc_0x250
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  addi      r3, r3, 0x16E4
	  li        r4, 0x147
	  addi      r5, r5, 0x16F8
	  crclr     6, 0x6
	  bl        -0x1C91D8

	.loc_0x250:
	  lwz       r3, 0x17C(r31)
	  lwz       r12, 0x28(r3)
	  lwz       r12, 0x94(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  li        r4, 0
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xAC(r12)
	  mtctr     r12
	  bctrl
	  li        r0, 0
	  stw       r0, 0x1FC(r31)

	.loc_0x284:
	  lwz       r0, 0x74(r1)
	  lwz       r31, 0x6C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x70
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00010C
 */
void Game::ItemTreasure::Item::__ct(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801F3864
 * Size:	000048
 */
void Game::ItemTreasure::Item::constructor(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  li        r3, 0x84
	  bl        -0x1CF9D8
	  mr.       r0, r3
	  beq-      .loc_0x30
	  mr        r4, r31
	  bl        0x26DD94
	  mr        r0, r3

	.loc_0x30:
	  stw       r0, 0x17C(r31)
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801F38AC
 * Size:	000080
 */
void Game::ItemTreasure::Item::onInit((Game::CreatureInitArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r5, 0
	  li        r6, 0
	  stw       r0, 0x14(r1)
	  li        r0, 0
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  mr        r4, r31
	  stw       r0, 0x174(r3)
	  lwz       r3, 0x1D8(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  li        r4, 0x1
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xAC(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x114(r31)
	  addi      r4, r31, 0x1EC
	  addi      r6, r31, 0x1C4
	  li        r5, 0
	  li        r7, 0
	  bl        -0xBF864
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801F392C
 * Size:	000034
 */
void start__Q24Game40StateMachine<Game::ItemTreasure::Item>
FPQ34Game12ItemTreasure4ItemiPQ24Game8StateArg(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  li        r0, 0
	  stw       r0, 0x1DC(r4)
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
 * Address:	801F3960
 * Size:	000044
 */
void Game::ItemTreasure::Item::onSetPosition(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x210(r12)
	  mtctr     r12
	  bctrl
	  addi      r3, r31, 0x138
	  addi      r4, r31, 0x19C
	  bl        0x234EB4
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801F39A4
 * Size:	000048
 */
void Game::ItemTreasure::Item::updateBoundSphere(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        0x648
	  lfs       f0, 0x19C(r31)
	  stfs      f0, 0x1C4(r31)
	  lfs       f0, 0x1A0(r31)
	  stfs      f0, 0x1C8(r31)
	  lfs       f0, 0x1A4(r31)
	  stfs      f0, 0x1CC(r31)
	  stfs      f1, 0x1D0(r31)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801F39EC
 * Size:	000180
 */
void Game::ItemTreasure::Item::doAI(void)
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
	  mr        r30, r3
	  lwz       r3, 0x1D8(r3)
	  mr        r4, r30
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r30
	  bl        0x5D8
	  stfs      f1, 0x1D0(r30)
	  mr        r3, r30
	  bl        -0x27428
	  lwz       r4, 0x114(r30)
	  mr        r3, r30
	  lwz       r31, 0x0(r4)
	  bl        0x5BC
	  stfs      f1, 0x1C(r31)
	  lwz       r3, 0x1FC(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0xE4
	  bl        -0x8D81C
	  lfs       f0, -0x4788(r2)
	  addi      r4, r1, 0x8
	  lwz       r3, 0x1FC(r30)
	  fmuls     f1, f0, f1
	  lfs       f0, 0x1F8(r30)
	  addi      r3, r3, 0x138
	  fsubs     f31, f1, f0
	  bl        -0x1097AC
	  lfs       f0, -0x4790(r2)
	  addi      r4, r1, 0x8
	  stfs      f31, 0x24(r1)
	  stfs      f0, 0x14(r1)
	  stfs      f0, 0x34(r1)
	  lwz       r3, 0x1FC(r30)
	  bl        -0x53F98
	  lwz       r3, 0x1FC(r30)
	  bl        -0x8D860
	  lfs       f0, 0x1F8(r30)
	  fcmpo     cr0, f0, f1
	  cror      2, 0x1, 0x2
	  bne-      .loc_0xD8
	  lwz       r4, 0x1FC(r30)
	  li        r0, -0x35
	  lbz       r3, 0xD8(r4)
	  and       r0, r3, r0
	  stb       r0, 0xD8(r4)

	.loc_0xD8:
	  lfs       f0, 0x1F8(r30)
	  lwz       r3, 0x1FC(r30)
	  stfs      f0, 0x320(r3)

	.loc_0xE4:
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x160
	  addi      r3, r30, 0x1E0
	  bl        0x3B150
	  cmpwi     r3, 0x2
	  beq-      .loc_0x114
	  b         .loc_0x160

	.loc_0x114:
	  lwz       r3, 0x17C(r30)
	  lwz       r12, 0x28(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  cmpwi     r3, 0xA
	  beq-      .loc_0x14C
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  addi      r3, r3, 0x16E4
	  li        r4, 0x196
	  addi      r5, r5, 0x16F8
	  crclr     6, 0x6
	  bl        -0x1C94F4

	.loc_0x14C:
	  lwz       r3, 0x17C(r30)
	  lwz       r12, 0x28(r3)
	  lwz       r12, 0x90(r12)
	  mtctr     r12
	  bctrl

	.loc_0x160:
	  psq_l     f31,0x48(r1),0,0
	  lwz       r0, 0x54(r1)
	  lfd       f31, 0x40(r1)
	  lwz       r31, 0x3C(r1)
	  lwz       r30, 0x38(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801F3B6C
 * Size:	000050
 */
void Game::ItemTreasure::Item::doDirectDraw((Graphics&))
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
	  mr        r3, r31
	  bl        0x231C8C
	  lfs       f1, 0x1D0(r30)
	  mr        r3, r31
	  addi      r4, r30, 0x1C4
	  bl        0x231F0C
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
 * Address:	801F3BBC
 * Size:	00011C
 */
void getVectorField__Q34Game12ItemTreasure4ItemFRQ23Sys6SphereR10Vector3<float>(
    void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  mflr      r0
	  stw       r0, 0x54(r1)
	  stfd      f31, 0x40(r1)
	  psq_st    f31,0x48(r1),0,0
	  stfd      f30, 0x30(r1)
	  psq_st    f30,0x38(r1),0,0
	  stfd      f29, 0x20(r1)
	  psq_st    f29,0x28(r1),0,0
	  stfd      f28, 0x10(r1)
	  psq_st    f28,0x18(r1),0,0
	  stw       r31, 0xC(r1)
	  lfs       f0, 0x4(r4)
	  mr        r31, r5
	  lfs       f1, 0x1A0(r3)
	  lfs       f3, 0x1A4(r3)
	  fsubs     f31, f1, f0
	  lfs       f2, 0x8(r4)
	  lfs       f1, 0x19C(r3)
	  fsubs     f28, f3, f2
	  lfs       f0, 0x0(r4)
	  fmuls     f2, f31, f31
	  fsubs     f29, f1, f0
	  lfs       f0, -0x4790(r2)
	  fmuls     f3, f28, f28
	  fmadds    f1, f29, f29, f2
	  fadds     f30, f3, f1
	  fcmpo     cr0, f30, f0
	  ble-      .loc_0x84
	  ble-      .loc_0x88
	  fsqrte    f0, f30
	  fmuls     f30, f0, f30
	  b         .loc_0x88

	.loc_0x84:
	  fmr       f30, f0

	.loc_0x88:
	  lfs       f0, -0x4790(r2)
	  fcmpo     cr0, f30, f0
	  ble-      .loc_0xAC
	  lfs       f0, -0x4768(r2)
	  fdivs     f0, f0, f30
	  fmuls     f29, f29, f0
	  fmuls     f31, f31, f0
	  fmuls     f28, f28, f0
	  b         .loc_0xB0

	.loc_0xAC:
	  fmr       f30, f0

	.loc_0xB0:
	  bl        0x394
	  lfs       f0, -0x4764(r2)
	  fadds     f0, f0, f1
	  fcmpo     cr0, f30, f0
	  ble-      .loc_0xD4
	  stfs      f29, 0x0(r31)
	  stfs      f31, 0x4(r31)
	  stfs      f28, 0x8(r31)
	  b         .loc_0xE4

	.loc_0xD4:
	  lfs       f0, -0x4790(r2)
	  stfs      f0, 0x0(r31)
	  stfs      f0, 0x4(r31)
	  stfs      f0, 0x8(r31)

	.loc_0xE4:
	  li        r3, 0x1
	  psq_l     f31,0x48(r1),0,0
	  lfd       f31, 0x40(r1)
	  psq_l     f30,0x38(r1),0,0
	  lfd       f30, 0x30(r1)
	  psq_l     f29,0x28(r1),0,0
	  lfd       f29, 0x20(r1)
	  psq_l     f28,0x18(r1),0,0
	  lfd       f28, 0x10(r1)
	  lwz       r0, 0x54(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801F3CD8
 * Size:	000088
 */
void Game::ItemTreasure::Item::getWorkDistance((Sys::Sphere&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stfd      f31, 0x10(r1)
	  psq_st    f31,0x18(r1),0,0
	  lfs       f0, 0x4(r4)
	  lfs       f1, 0x1A0(r3)
	  lfs       f3, 0x1A4(r3)
	  fsubs     f4, f1, f0
	  lfs       f2, 0x8(r4)
	  lfs       f1, 0x19C(r3)
	  fsubs     f2, f3, f2
	  lfs       f0, 0x0(r4)
	  fmuls     f3, f4, f4
	  fsubs     f1, f1, f0
	  lfs       f0, -0x4790(r2)
	  fmuls     f2, f2, f2
	  fmadds    f1, f1, f1, f3
	  fadds     f31, f2, f1
	  fcmpo     cr0, f31, f0
	  ble-      .loc_0x64
	  ble-      .loc_0x68
	  fsqrte    f0, f31
	  fmuls     f31, f0, f31
	  b         .loc_0x68

	.loc_0x64:
	  fmr       f31, f0

	.loc_0x68:
	  bl        0x2C0
	  fsubs     f1, f31, f1
	  psq_l     f31,0x18(r1),0,0
	  lwz       r0, 0x24(r1)
	  lfd       f31, 0x10(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801F3D60
 * Size:	0000B8
 */
void Game::ItemTreasure::Item::setTreasure((Game::Pellet*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r4
	  addi      r4, r1, 0x8
	  stw       r30, 0x18(r1)
	  mr        r30, r3
	  lfs       f0, 0x19C(r3)
	  addi      r3, r30, 0x200
	  stfs      f0, 0x8(r1)
	  lfs       f0, 0x1A0(r30)
	  stfs      f0, 0xC(r1)
	  lfs       f0, 0x1A4(r30)
	  stfs      f0, 0x10(r1)
	  bl        0x234AA4
	  stw       r31, 0x1FC(r30)
	  lwz       r3, 0x1FC(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0xA0
	  addi      r4, r30, 0x200
	  bl        -0x5430C
	  lwz       r3, 0x1FC(r30)
	  bl        -0x8DB74
	  stfs      f1, 0x1F8(r30)
	  lwz       r3, -0x6C18(r13)
	  lwz       r0, 0x44(r3)
	  cmpwi     r0, 0x1
	  bne-      .loc_0x8C
	  lwz       r3, 0x1FC(r30)
	  lbz       r0, 0x32C(r3)
	  cmplwi    r0, 0x6
	  bne-      .loc_0x8C
	  lfs       f0, -0x7B78(r13)
	  stfs      f0, 0x1F8(r30)

	.loc_0x8C:
	  lfs       f0, 0x1F8(r30)
	  mr        r3, r30
	  lwz       r4, 0x1FC(r30)
	  stfs      f0, 0x320(r4)
	  bl        .loc_0xB8

	.loc_0xA0:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr

	.loc_0xB8:
	*/
}

/*
 * --INFO--
 * Address:	801F3E18
 * Size:	000030
 */
void Game::ItemTreasure::Item::setLife(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        .loc_0x30
	  stfs      f1, 0x1F4(r31)
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr

	.loc_0x30:
	*/
}

/*
 * --INFO--
 * Address:	801F3E48
 * Size:	000098
 */
void Game::ItemTreasure::Item::getCurrMaxLife(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r3, 0x1FC(r3)
	  bl        -0x8DC24
	  lfs       f2, 0x1F8(r31)
	  lfs       f0, -0x478C(r2)
	  fdivs     f1, f2, f1
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x40
	  lwz       r3, -0x6B30(r13)
	  lwz       r3, 0x88(r3)
	  lfs       f1, 0x178(r3)
	  b         .loc_0x84

	.loc_0x40:
	  lfs       f0, -0x4788(r2)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x5C
	  lwz       r3, -0x6B30(r13)
	  lwz       r3, 0x88(r3)
	  lfs       f1, 0x150(r3)
	  b         .loc_0x84

	.loc_0x5C:
	  lfs       f0, -0x4760(r2)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x78
	  lwz       r3, -0x6B30(r13)
	  lwz       r3, 0x88(r3)
	  lfs       f1, 0x128(r3)
	  b         .loc_0x84

	.loc_0x78:
	  lwz       r3, -0x6B30(r13)
	  lwz       r3, 0x88(r3)
	  lfs       f1, 0x100(r3)

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
 * Address:	........
 * Size:	000144
 */
void Game::ItemTreasure::Item::createTreasure(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801F3EE0
 * Size:	00011C
 */
void Game::ItemTreasure::Item::interactAttack((Game::InteractAttack&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r5, r4
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r3, 0x1DC(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x104
	  lwz       r12, 0x0(r3)
	  mr        r4, r31
	  lfs       f1, 0x8(r5)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  addi      r3, r31, 0x1E0
	  bl        0x3ACC8
	  cmpwi     r3, 0x2
	  beq-      .loc_0x104
	  bge-      .loc_0x5C
	  cmpwi     r3, 0x1
	  bge-      .loc_0x68
	  b         .loc_0x104

	.loc_0x5C:
	  cmpwi     r3, 0x4
	  bge-      .loc_0x104
	  b         .loc_0xB8

	.loc_0x68:
	  lwz       r3, 0x17C(r31)
	  lwz       r12, 0x28(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  cmpwi     r3, 0xA
	  beq-      .loc_0xA0
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  addi      r3, r3, 0x16E4
	  li        r4, 0x22B
	  addi      r5, r5, 0x16F8
	  crclr     6, 0x6
	  bl        -0x1C993C

	.loc_0xA0:
	  lwz       r3, 0x17C(r31)
	  lwz       r12, 0x28(r3)
	  lwz       r12, 0x88(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x104

	.loc_0xB8:
	  lwz       r3, 0x17C(r31)
	  lwz       r12, 0x28(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  cmpwi     r3, 0xA
	  beq-      .loc_0xF0
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  addi      r3, r3, 0x16E4
	  li        r4, 0x231
	  addi      r5, r5, 0x16F8
	  crclr     6, 0x6
	  bl        -0x1C998C

	.loc_0xF0:
	  lwz       r3, 0x17C(r31)
	  lwz       r12, 0x28(r3)
	  lwz       r12, 0x8C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x104:
	  lwz       r0, 0x14(r1)
	  li        r3, 0x1
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801F3FFC
 * Size:	000004
 */
void Game::ItemTreasure::State::onDamage((Game::ItemTreasure::Item*, float)) { }

/*
 * --INFO--
 * Address:	801F4000
 * Size:	000058
 */
void Game::ItemTreasure::Item::getWorkRadius(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r3, 0x1FC(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x40
	  bl        -0x8DDE4
	  lfs       f2, 0x1F8(r31)
	  lfs       f0, -0x4768(r2)
	  fdivs     f1, f2, f1
	  lwz       r3, 0x1FC(r31)
	  fsubs     f1, f0, f1
	  bl        -0x8DDE4
	  b         .loc_0x44

	.loc_0x40:
	  lfs       f1, -0x4780(r2)

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
 * Address:	801F4058
 * Size:	000060
 */
void Game::ItemTreasure::Item::isVisible(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r3, 0x1FC(r3)
	  cmplwi    r3, 0
	  bne-      .loc_0x28
	  li        r3, 0
	  b         .loc_0x4C

	.loc_0x28:
	  bl        -0x8DE44
	  lfs       f2, 0x1F8(r31)
	  lfs       f0, -0x475C(r2)
	  fdivs     f1, f2, f1
	  fcmpo     cr0, f1, f0
	  mfcr      r0
	  rlwinm    r0,r0,2,31,31
	  cntlzw    r0, r0
	  rlwinm    r3,r0,27,5,31

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
 * Address:	801F40B8
 * Size:	0000B0
 */
void Game::ItemTreasure::Item::ignoreAtari((Game::Creature*))
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
	  lwz       r3, 0x1FC(r3)
	  cmplwi    r3, 0
	  bne-      .loc_0x30
	  li        r0, 0
	  b         .loc_0x54

	.loc_0x30:
	  bl        -0x8DEAC
	  lfs       f2, 0x1F8(r30)
	  lfs       f0, -0x475C(r2)
	  fdivs     f1, f2, f1
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x50
	  li        r0, 0
	  b         .loc_0x54

	.loc_0x50:
	  li        r0, 0x1

	.loc_0x54:
	  rlwinm.   r0,r0,0,24,31
	  bne-      .loc_0x94
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x8C
	  lbz       r0, 0x2B8(r31)
	  cmpwi     r0, 0x4
	  bne-      .loc_0x8C
	  li        r3, 0
	  b         .loc_0x98

	.loc_0x8C:
	  li        r3, 0x1
	  b         .loc_0x98

	.loc_0x94:
	  li        r3, 0

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
 * Address:	801F4168
 * Size:	000114
 */
void Game::ItemTreasure::Mgr::__ct(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x440(r1)
	  mflr      r0
	  stw       r0, 0x444(r1)
	  extsh.    r0, r4
	  lis       r4, 0x8048
	  stw       r31, 0x43C(r1)
	  addi      r31, r4, 0x16B8
	  stw       r30, 0x438(r1)
	  mr        r30, r3
	  beq-      .loc_0x30
	  addi      r0, r30, 0x8C
	  stw       r0, 0x4(r30)

	.loc_0x30:
	  mr        r3, r30
	  li        r4, 0
	  bl        -0x26D80
	  lis       r3, 0x804C
	  addi      r4, r31, 0x4C
	  subi      r3, r3, 0x43DC
	  addi      r0, r31, 0x58
	  stw       r3, 0x0(r30)
	  addi      r5, r3, 0x74
	  li        r3, 0x18C
	  stw       r5, 0x30(r30)
	  stw       r4, 0x8(r30)
	  stw       r0, 0x28(r30)
	  bl        -0x1D0328
	  mr.       r0, r3
	  beq-      .loc_0x78
	  bl        0xC8
	  mr        r0, r3

	.loc_0x78:
	  stw       r0, 0x88(r30)
	  li        r0, 0
	  addi      r3, r31, 0x74
	  li        r4, 0
	  stw       r0, 0x8(r1)
	  li        r5, 0
	  li        r6, 0
	  li        r7, 0
	  li        r8, 0x2
	  li        r9, 0
	  li        r10, 0
	  bl        -0x1D5084
	  mr.       r31, r3
	  beq-      .loc_0xF8
	  mr        r4, r31
	  addi      r3, r1, 0x10
	  li        r5, -0x1
	  bl        0x2216D4
	  li        r0, 0x1
	  cmpwi     r0, 0x1
	  stw       r0, 0x1C(r1)
	  bne-      .loc_0xD8
	  li        r0, 0
	  stw       r0, 0x424(r1)

	.loc_0xD8:
	  lwz       r3, 0x88(r30)
	  addi      r4, r1, 0x10
	  lwz       r12, 0xD8(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  bl        -0x1D0184

	.loc_0xF8:
	  lwz       r0, 0x444(r1)
	  mr        r3, r30
	  lwz       r31, 0x43C(r1)
	  lwz       r30, 0x438(r1)
	  mtlr      r0
	  addi      r1, r1, 0x440
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801F427C
 * Size:	000024
 */
void Game::ItemTreasure::TreasureParms::read((Stream&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  addi      r3, r3, 0xDC
	  stw       r0, 0x14(r1)
	  bl        0x21F568
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801F42A0
 * Size:	0002A0
 */
void Game::ItemTreasure::TreasureParms::__ct(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r5, 0x7330
	  lis       r4, 0x804B
	  stw       r0, 0x14(r1)
	  subi      r0, r4, 0x5350
	  addi      r5, r5, 0x3030
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  lis       r3, 0x8048
	  stw       r0, 0xD8(r30)
	  addi      r31, r3, 0x16B8
	  addi      r0, r30, 0xD4
	  li        r3, 0
	  stw       r0, 0x0(r30)
	  addi      r0, r31, 0x94
	  mr        r4, r30
	  addi      r6, r31, 0xA8
	  stw       r3, 0x4(r30)
	  addi      r3, r30, 0xC
	  stw       r0, 0x8(r30)
	  bl        0x21F360
	  lis       r3, 0x804B
	  lis       r5, 0x7330
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x4788(r2)
	  stw       r0, 0xC(r30)
	  mr        r4, r30
	  lfs       f1, -0x4790(r2)
	  addi      r3, r30, 0x34
	  stfs      f0, 0x24(r30)
	  addi      r5, r5, 0x3031
	  lfs       f0, -0x4768(r2)
	  addi      r6, r31, 0xBC
	  stfs      f1, 0x2C(r30)
	  stfs      f0, 0x30(r30)
	  bl        0x21F324
	  lis       r3, 0x804B
	  lis       r5, 0x7330
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x4788(r2)
	  stw       r0, 0x34(r30)
	  mr        r4, r30
	  lfs       f1, -0x4790(r2)
	  addi      r3, r30, 0x5C
	  stfs      f0, 0x4C(r30)
	  addi      r5, r5, 0x3032
	  lfs       f0, -0x4768(r2)
	  addi      r6, r31, 0xCC
	  stfs      f1, 0x54(r30)
	  stfs      f0, 0x58(r30)
	  bl        0x21F2E8
	  lis       r3, 0x804B
	  lis       r5, 0x7330
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x478C(r2)
	  stw       r0, 0x5C(r30)
	  mr        r4, r30
	  lfs       f1, -0x4790(r2)
	  addi      r3, r30, 0x84
	  stfs      f0, 0x74(r30)
	  addi      r5, r5, 0x3033
	  lfs       f0, -0x4768(r2)
	  subi      r6, r2, 0x4758
	  stfs      f1, 0x7C(r30)
	  stfs      f0, 0x80(r30)
	  bl        0x21F2AC
	  lis       r3, 0x804B
	  lis       r5, 0x7330
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x4750(r2)
	  stw       r0, 0x84(r30)
	  mr        r4, r30
	  lfs       f1, -0x474C(r2)
	  addi      r3, r30, 0xAC
	  stfs      f0, 0x9C(r30)
	  addi      r5, r5, 0x3034
	  lfs       f0, -0x4748(r2)
	  addi      r6, r31, 0xDC
	  stfs      f1, 0xA4(r30)
	  stfs      f0, 0xA8(r30)
	  bl        0x21F270
	  lis       r4, 0x804B
	  lis       r3, 0x804C
	  subi      r0, r4, 0x5344
	  lis       r5, 0x7030
	  stw       r0, 0xAC(r30)
	  subi      r9, r3, 0x431C
	  lfs       f0, -0x4744(r2)
	  addi      r8, r30, 0x188
	  lfs       f1, -0x474C(r2)
	  li        r7, 0
	  stfs      f0, 0xC4(r30)
	  addi      r0, r31, 0xEC
	  lfs       f0, -0x4748(r2)
	  addi      r3, r30, 0xE8
	  stfs      f1, 0xCC(r30)
	  addi      r4, r30, 0xDC
	  addi      r5, r5, 0x3030
	  addi      r6, r31, 0xFC
	  stfs      f0, 0xD0(r30)
	  stw       r9, 0xD8(r30)
	  stw       r8, 0xDC(r30)
	  stw       r7, 0xE0(r30)
	  stw       r0, 0xE4(r30)
	  bl        0x21F210
	  lis       r3, 0x804B
	  lis       r5, 0x7030
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x4740(r2)
	  stw       r0, 0xE8(r30)
	  addi      r3, r30, 0x110
	  lfs       f1, -0x4768(r2)
	  addi      r4, r30, 0xDC
	  stfs      f0, 0x100(r30)
	  addi      r5, r5, 0x3031
	  lfs       f0, -0x473C(r2)
	  addi      r6, r31, 0x108
	  stfs      f1, 0x108(r30)
	  stfs      f0, 0x10C(r30)
	  bl        0x21F1D4
	  lis       r3, 0x804B
	  lis       r5, 0x7030
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x4738(r2)
	  stw       r0, 0x110(r30)
	  addi      r3, r30, 0x138
	  lfs       f1, -0x4768(r2)
	  addi      r4, r30, 0xDC
	  stfs      f0, 0x128(r30)
	  addi      r5, r5, 0x3032
	  lfs       f0, -0x473C(r2)
	  addi      r6, r31, 0x114
	  stfs      f1, 0x130(r30)
	  stfs      f0, 0x134(r30)
	  bl        0x21F198
	  lis       r3, 0x804B
	  lis       r5, 0x7030
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x4734(r2)
	  stw       r0, 0x138(r30)
	  addi      r3, r30, 0x160
	  lfs       f1, -0x4768(r2)
	  addi      r4, r30, 0xDC
	  stfs      f0, 0x150(r30)
	  addi      r5, r5, 0x3033
	  lfs       f0, -0x473C(r2)
	  addi      r6, r31, 0x120
	  stfs      f1, 0x158(r30)
	  stfs      f0, 0x15C(r30)
	  bl        0x21F15C
	  lis       r3, 0x804B
	  lfs       f2, -0x4730(r2)
	  subi      r0, r3, 0x5344
	  lfs       f1, -0x4768(r2)
	  stw       r0, 0x160(r30)
	  mr        r3, r30
	  lfs       f0, -0x473C(r2)
	  stfs      f2, 0x178(r30)
	  stfs      f1, 0x180(r30)
	  stfs      f0, 0x184(r30)
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
 * Address:	801F4540
 * Size:	000130
 */
void Game::ItemTreasure::Mgr::birth(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  li        r3, 0x234
	  bl        -0x1D06B8
	  mr.       r31, r3
	  beq-      .loc_0x108
	  li        r4, 0x40E
	  bl        -0x28584
	  lis       r3, 0x804C
	  li        r0, 0
	  subi      r4, r3, 0x3E78
	  li        r3, 0x1C
	  stw       r4, 0x0(r31)
	  addi      r4, r4, 0x1B0
	  stw       r4, 0x178(r31)
	  stw       r0, 0x1D8(r31)
	  stw       r0, 0x1DC(r31)
	  bl        -0x1D06F0
	  cmplwi    r3, 0
	  beq-      .loc_0x8C
	  lis       r4, 0x804C
	  lis       r5, 0x804C
	  subi      r0, r4, 0x3E90
	  lis       r4, 0x804C
	  stw       r0, 0x0(r3)
	  li        r6, -0x1
	  subi      r5, r5, 0x3EA8
	  subi      r0, r4, 0x3B98
	  stw       r6, 0x18(r3)
	  stw       r5, 0x0(r3)
	  stw       r0, 0x0(r3)

	.loc_0x8C:
	  stw       r3, 0x1D8(r31)
	  mr        r4, r31
	  lwz       r3, 0x1D8(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lis       r4, 0x804C
	  addi      r3, r31, 0x1E0
	  subi      r4, r4, 0x40CC
	  stw       r4, 0x0(r31)
	  addi      r0, r4, 0x1B0
	  stw       r0, 0x178(r31)
	  bl        0x3A5CC
	  lis       r3, 0x804C
	  lis       r4, 0x804C
	  subi      r5, r3, 0x4310
	  lis       r3, 0x804C
	  stw       r5, 0x0(r31)
	  addi      r0, r5, 0x1B0
	  subi      r5, r4, 0x40DC
	  subi      r4, r3, 0x40EC
	  stw       r0, 0x178(r31)
	  addi      r3, r31, 0x138
	  lfs       f0, -0x4790(r2)
	  li        r0, 0
	  stw       r5, 0x1EC(r31)
	  stw       r4, 0x1EC(r31)
	  stfs      f0, 0x118(r31)
	  stw       r3, 0x1F0(r31)
	  stw       r0, 0x1FC(r31)

	.loc_0x108:
	  mr        r3, r30
	  mr        r4, r31
	  bl        -0x26E28
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
 * Address:	801F4670
 * Size:	000060
 */
void generatorBirth__Q34Game12ItemTreasure3MgrFR10Vector3<float>
    R10Vector3<float> PQ24Game11GenItemParm(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  mr        r30, r4
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xBC(r12)
	  mtctr     r12
	  bctrl
	  li        r4, 0
	  mr        r31, r3
	  bl        -0xB96D8
	  mr        r3, r31
	  mr        r4, r30
	  li        r5, 0
	  bl        -0xB9508
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
 * Address:	801F46D0
 * Size:	000004
 */
void Game::ItemTreasure::Mgr::onLoadResources(void) { }

/*
 * --INFO--
 * Address:	801F46D4
 * Size:	000134
 */
void Game::ItemTreasure::Mgr::__dt(void)
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
	  beq-      .loc_0x118
	  lis       r3, 0x804C
	  subi      r3, r3, 0x43DC
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x74
	  stw       r0, 0x30(r30)
	  beq-      .loc_0x108
	  lis       r3, 0x804B
	  addic.    r0, r30, 0x4C
	  addi      r3, r3, 0x7180
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x74
	  stw       r0, 0x30(r30)
	  beq-      .loc_0xD4
	  lis       r4, 0x804B
	  addic.    r3, r30, 0x6C
	  addi      r4, r4, 0x724C
	  stw       r4, 0x4C(r30)
	  addi      r0, r4, 0x2C
	  stw       r0, 0x68(r30)
	  beq-      .loc_0x84
	  lis       r4, 0x804B
	  addi      r0, r4, 0x723C
	  stw       r0, 0x6C(r30)
	  li        r4, 0
	  bl        0x21CE34

	.loc_0x84:
	  addic.    r0, r30, 0x4C
	  beq-      .loc_0xD4
	  lis       r3, 0x804B
	  addic.    r0, r30, 0x4C
	  addi      r3, r3, 0x72CC
	  stw       r3, 0x4C(r30)
	  addi      r0, r3, 0x2C
	  stw       r0, 0x68(r30)
	  beq-      .loc_0xD4
	  lis       r3, 0x804B
	  addic.    r0, r30, 0x4C
	  addi      r0, r3, 0x7348
	  stw       r0, 0x4C(r30)
	  beq-      .loc_0xD4
	  lis       r4, 0x804B
	  addi      r3, r30, 0x4C
	  subi      r0, r4, 0x5324
	  li        r4, 0
	  stw       r0, 0x4C(r30)
	  bl        0x21CDE4

	.loc_0xD4:
	  addic.    r0, r30, 0x30
	  beq-      .loc_0x108
	  lis       r3, 0x804B
	  addic.    r0, r30, 0x30
	  addi      r0, r3, 0x7348
	  stw       r0, 0x30(r30)
	  beq-      .loc_0x108
	  lis       r4, 0x804B
	  addi      r3, r30, 0x30
	  subi      r0, r4, 0x5324
	  li        r4, 0
	  stw       r0, 0x30(r30)
	  bl        0x21CDB0

	.loc_0x108:
	  extsh.    r0, r31
	  ble-      .loc_0x118
	  mr        r3, r30
	  bl        -0x1D0734

	.loc_0x118:
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
 * Address:	801F4808
 * Size:	000118
 */
void Game::ItemTreasure::Mgr::doNew(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r3, 0x234
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  bl        -0x1D0978
	  mr.       r31, r3
	  beq-      .loc_0x100
	  li        r4, 0x40E
	  bl        -0x28844
	  lis       r3, 0x804C
	  li        r0, 0
	  subi      r4, r3, 0x3E78
	  li        r3, 0x1C
	  stw       r4, 0x0(r31)
	  addi      r4, r4, 0x1B0
	  stw       r4, 0x178(r31)
	  stw       r0, 0x1D8(r31)
	  stw       r0, 0x1DC(r31)
	  bl        -0x1D09B0
	  cmplwi    r3, 0
	  beq-      .loc_0x84
	  lis       r4, 0x804C
	  lis       r5, 0x804C
	  subi      r0, r4, 0x3E90
	  lis       r4, 0x804C
	  stw       r0, 0x0(r3)
	  li        r6, -0x1
	  subi      r5, r5, 0x3EA8
	  subi      r0, r4, 0x3B98
	  stw       r6, 0x18(r3)
	  stw       r5, 0x0(r3)
	  stw       r0, 0x0(r3)

	.loc_0x84:
	  stw       r3, 0x1D8(r31)
	  mr        r4, r31
	  lwz       r3, 0x1D8(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lis       r4, 0x804C
	  addi      r3, r31, 0x1E0
	  subi      r4, r4, 0x40CC
	  stw       r4, 0x0(r31)
	  addi      r0, r4, 0x1B0
	  stw       r0, 0x178(r31)
	  bl        0x3A30C
	  lis       r3, 0x804C
	  lis       r4, 0x804C
	  subi      r5, r3, 0x4310
	  lis       r3, 0x804C
	  stw       r5, 0x0(r31)
	  addi      r0, r5, 0x1B0
	  subi      r5, r4, 0x40DC
	  subi      r4, r3, 0x40EC
	  stw       r0, 0x178(r31)
	  addi      r3, r31, 0x138
	  lfs       f0, -0x4790(r2)
	  li        r0, 0
	  stw       r5, 0x1EC(r31)
	  stw       r4, 0x1EC(r31)
	  stfs      f0, 0x118(r31)
	  stw       r3, 0x1F0(r31)
	  stw       r0, 0x1FC(r31)

	.loc_0x100:
	  lwz       r0, 0x14(r1)
	  mr        r3, r31
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801F4920
 * Size:	00000C
 */
void Game::ItemTreasure::Mgr::generatorGetID(void)
{
	/*
	.loc_0x0:
	  lis       r3, 0x7472
	  addi      r3, r3, 0x7372
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801F492C
 * Size:	00000C
 */
void Game::ItemTreasure::Item::getCreatureName(void)
{
	/*
	.loc_0x0:
	  lis       r3, 0x8048
	  addi      r3, r3, 0x1704
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801F4938
 * Size:	000008
 */
void Game::ItemTreasure::Item::DummyShape::getMatrix((int))
{
	/*
	.loc_0x0:
	  lwz       r3, 0x4(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801F4940
 * Size:	000008
 */
void SysShape::MtxObject::isModel(void)
{
	/*
	.loc_0x0:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801F4948
 * Size:	000034
 */
void doAI__Q24Game89FSMItem<Game::ItemTreasure::Item, Game::ItemTreasure::FSM,
                            Game::ItemTreasure::State>
Fv(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r4, r3
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x1D8(r3)
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
 * Address:	801F497C
 * Size:	000004
 */
void onDamage__Q24Game37ItemState<Game::ItemTreasure::Item>
FPQ34Game12ItemTreasure4Itemf(void)
{
}

/*
 * --INFO--
 * Address:	801F4980
 * Size:	000004
 */
void onKeyEvent__Q24Game37ItemState<Game::ItemTreasure::Item>
FPQ34Game12ItemTreasure4ItemRCQ28SysShape8KeyEvent(void)
{
}

/*
 * --INFO--
 * Address:	801F4984
 * Size:	000004
 */
void onBounce__Q24Game37ItemState<Game::ItemTreasure::Item>
FPQ34Game12ItemTreasure4ItemPQ23Sys8Triangle(void)
{
}

/*
 * --INFO--
 * Address:	801F4988
 * Size:	000004
 */
void onPlatCollision__Q24Game37ItemState<Game::ItemTreasure::Item>
FPQ34Game12ItemTreasure4ItemRQ24Game9PlatEvent(void)
{
}

/*
 * --INFO--
 * Address:	801F498C
 * Size:	000004
 */
void onCollision__Q24Game37ItemState<Game::ItemTreasure::Item>
FPQ34Game12ItemTreasure4ItemRQ24Game9CollEvent(void)
{
}

/*
 * --INFO--
 * Address:	801F4990
 * Size:	000004
 */
void init__Q24Game36FSMState<Game::ItemTreasure::Item>
FPQ34Game12ItemTreasure4ItemPQ24Game8StateArg(void)
{
}

/*
 * --INFO--
 * Address:	801F4994
 * Size:	000004
 */
void exec__Q24Game36FSMState<Game::ItemTreasure::Item>
FPQ34Game12ItemTreasure4Item(void)
{
}

/*
 * --INFO--
 * Address:	801F4998
 * Size:	000004
 */
void cleanup__Q24Game36FSMState<Game::ItemTreasure::Item>
FPQ34Game12ItemTreasure4Item(void)
{
}

/*
 * --INFO--
 * Address:	801F499C
 * Size:	000004
 */
void resume__Q24Game36FSMState<Game::ItemTreasure::Item>
FPQ34Game12ItemTreasure4Item(void)
{
}

/*
 * --INFO--
 * Address:	801F49A0
 * Size:	000004
 */
void restart__Q24Game36FSMState<Game::ItemTreasure::Item>
FPQ34Game12ItemTreasure4Item(void)
{
}

/*
 * --INFO--
 * Address:	801F49A4
 * Size:	000030
 */
void transit__Q24Game36FSMState<Game::ItemTreasure::Item>
FPQ34Game12ItemTreasure4ItemiPQ24Game8StateArg(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x8(r3)
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
 * Address:	801F49D4
 * Size:	000004
 */
void init__Q24Game40StateMachine<Game::ItemTreasure::Item>
FPQ34Game12ItemTreasure4Item(void)
{
}

/*
 * --INFO--
 * Address:	801F49D8
 * Size:	000038
 */
void exec__Q24Game40StateMachine<Game::ItemTreasure::Item>
FPQ34Game12ItemTreasure4Item(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x1DC(r4)
	  cmplwi    r3, 0
	  beq-      .loc_0x28
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl

	.loc_0x28:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801F4A10
 * Size:	000064
 */
void create__Q24Game40StateMachine<Game::ItemTreasure::Item> Fi(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  li        r0, 0
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  stw       r4, 0xC(r3)
	  stw       r0, 0x8(r3)
	  lwz       r0, 0xC(r3)
	  rlwinm    r3,r0,2,0,29
	  bl        -0x1D0A8C
	  stw       r3, 0x4(r31)
	  lwz       r0, 0xC(r31)
	  rlwinm    r3,r0,2,0,29
	  bl        -0x1D0A9C
	  stw       r3, 0x10(r31)
	  lwz       r0, 0xC(r31)
	  rlwinm    r3,r0,2,0,29
	  bl        -0x1D0AAC
	  stw       r3, 0x14(r31)
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801F4A74
 * Size:	00009C
 */
void transit__Q24Game40StateMachine<Game::ItemTreasure::Item>
FPQ34Game12ItemTreasure4ItemiPQ24Game8StateArg(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  rlwinm    r0,r5,2,0,29
	  stmw      r27, 0xC(r1)
	  mr        r27, r3
	  mr        r28, r4
	  mr        r29, r6
	  lwz       r30, 0x1DC(r4)
	  lwz       r3, 0x14(r3)
	  cmplwi    r30, 0
	  lwzx      r31, r3, r0
	  beq-      .loc_0x50
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x4(r30)
	  stw       r0, 0x18(r27)

	.loc_0x50:
	  lwz       r0, 0xC(r27)
	  cmpw      r31, r0
	  blt-      .loc_0x60

	.loc_0x5C:
	  b         .loc_0x5C

	.loc_0x60:
	  lwz       r3, 0x4(r27)
	  rlwinm    r0,r31,2,0,29
	  mr        r4, r28
	  mr        r5, r29
	  lwzx      r3, r3, r0
	  stw       r3, 0x1DC(r28)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lmw       r27, 0xC(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801F4B10
 * Size:	000084
 */
void registerState__Q24Game40StateMachine<Game::ItemTreasure::Item>
FPQ24Game36FSMState<Game::ItemTreasure::Item>(void)
{
	/*
	.loc_0x0:
	  lwz       r6, 0x8(r3)
	  lwz       r0, 0xC(r3)
	  cmpw      r6, r0
	  bgelr-
	  lwz       r5, 0x4(r3)
	  rlwinm    r0,r6,2,0,29
	  stwx      r4, r5, r0
	  lwz       r5, 0x4(r4)
	  cmpwi     r5, 0
	  blt-      .loc_0x34
	  lwz       r0, 0xC(r3)
	  cmpw      r5, r0
	  blt-      .loc_0x3C

	.loc_0x34:
	  li        r0, 0
	  b         .loc_0x40

	.loc_0x3C:
	  li        r0, 0x1

	.loc_0x40:
	  rlwinm.   r0,r0,0,24,31
	  beqlr-
	  stw       r3, 0x8(r4)
	  lwz       r0, 0x8(r3)
	  lwz       r6, 0x4(r4)
	  lwz       r5, 0x10(r3)
	  rlwinm    r0,r0,2,0,29
	  stwx      r6, r5, r0
	  lwz       r0, 0x4(r4)
	  lwz       r5, 0x8(r3)
	  lwz       r4, 0x14(r3)
	  rlwinm    r0,r0,2,0,29
	  stwx      r5, r4, r0
	  lwz       r4, 0x8(r3)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801F4B94
 * Size:	000044
 */
void onKeyEvent__Q24Game89FSMItem<Game::ItemTreasure::Item,
                                  Game::ItemTreasure::FSM,
                                  Game::ItemTreasure::State>
FRCQ28SysShape8KeyEvent(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r6, r3
	  mr        r5, r4
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x1DC(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x34
	  lwz       r12, 0x0(r3)
	  mr        r4, r6
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl

	.loc_0x34:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801F4BD8
 * Size:	000044
 */
void platCallback__Q24Game89FSMItem<Game::ItemTreasure::Item,
                                    Game::ItemTreasure::FSM,
                                    Game::ItemTreasure::State>
FRQ24Game9PlatEvent(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r6, r3
	  mr        r5, r4
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x1DC(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x34
	  lwz       r12, 0x0(r3)
	  mr        r4, r6
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x34:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801F4C1C
 * Size:	000044
 */
void collisionCallback__Q24Game89FSMItem<Game::ItemTreasure::Item,
                                         Game::ItemTreasure::FSM,
                                         Game::ItemTreasure::State>
FRQ24Game9CollEvent(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r6, r3
	  mr        r5, r4
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x1DC(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x34
	  lwz       r12, 0x0(r3)
	  mr        r4, r6
	  lwz       r12, 0x30(r12)
	  mtctr     r12
	  bctrl

	.loc_0x34:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801F4C60
 * Size:	000044
 */
void bounceCallback__Q24Game89FSMItem<Game::ItemTreasure::Item,
                                      Game::ItemTreasure::FSM,
                                      Game::ItemTreasure::State>
FPQ23Sys8Triangle(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r6, r3
	  mr        r5, r4
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x1DC(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x34
	  lwz       r12, 0x0(r3)
	  mr        r4, r6
	  lwz       r12, 0x28(r12)
	  mtctr     r12
	  bctrl

	.loc_0x34:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801F4CA4
 * Size:	000028
 */
void __sinit_itemTreasure_cpp(void)
{
	/*
	.loc_0x0:
	  lis       r4, 0x8051
	  li        r0, -0x1
	  lfs       f0, 0x48B0(r4)
	  lis       r3, 0x804C
	  stw       r0, -0x6B38(r13)
	  stfsu     f0, -0x43E8(r3)
	  stfs      f0, -0x6B34(r13)
	  stfs      f0, 0x4(r3)
	  stfs      f0, 0x8(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801F4CCC
 * Size:	000008
 */
void @376 @onKeyEvent__Q24Game89FSMItem<Game::ItemTreasure::Item,
                                        Game::ItemTreasure::FSM,
                                        Game::ItemTreasure::State>
FRCQ28SysShape8KeyEvent(void)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x178
	  b         -0x13C
	*/
}

/*
 * --INFO--
 * Address:	801F4CD4
 * Size:	000008
 */
void @48 @Game::ItemTreasure::Mgr::__dt(void)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x30
	  b         -0x604
	*/
}
