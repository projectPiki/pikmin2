#include "types.h"

namespace Game {

/*
 * --INFO--
 * Address:	8021EED8
 * Size:	00008C
 */
SingleGame::MovieState::MovieState(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r4, 0x804B
	  li        r5, 0
	  stw       r0, 0x14(r1)
	  addi      r0, r4, 0x1318
	  lis       r4, 0x804B
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  addi      r4, r4, 0x12D0
	  stw       r0, 0x0(r3)
	  li        r0, 0x9
	  lis       r3, 0x804C
	  stw       r0, 0x4(r31)
	  addi      r0, r3, 0x968
	  li        r3, 0xB0
	  stw       r5, 0x8(r31)
	  stw       r4, 0x0(r31)
	  stw       r0, 0x0(r31)
	  bl        -0x1FB080
	  mr.       r0, r3
	  beq-      .loc_0x64
	  li        r4, 0
	  bl        0x205F20
	  mr        r0, r3

	.loc_0x64:
	  stw       r0, 0x14(r31)
	  li        r0, 0
	  mr        r3, r31
	  stw       r0, 0x1C(r31)
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
 * Address:	8021EF64
 * Size:	000290
 */
void SingleGame::MovieState::init(Game::SingleGameSection*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  li        r0, 0
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  mr        r29, r5
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  stw       r0, 0x1C(r3)
	  lis       r3, 0x804C
	  addi      r31, r3, 0x880
	  stw       r0, 0x18(r28)
	  lwz       r0, -0x77D4(r13)
	  stw       r0, 0x18(r28)
	  lwz       r3, 0x18(r28)
	  bl        -0x1FB7F4
	  lwz       r30, 0x18(r28)
	  mr        r3, r30
	  bl        -0x1FB800
	  mr        r4, r30
	  li        r5, 0x1
	  bl        -0x1FF0F8
	  stw       r3, 0x1C(r28)
	  lwz       r3, 0x1C(r28)
	  bl        -0x1FBA28
	  lwz       r3, 0x1C(r28)
	  bl        -0x1FB820
	  li        r3, 0xEC
	  bl        -0x1FB138
	  mr.       r0, r3
	  beq-      .loc_0x8C
	  bl        0x230E08
	  mr        r0, r3

	.loc_0x8C:
	  stw       r0, 0x20(r28)
	  li        r4, 0
	  lwz       r3, 0x20(r28)
	  bl        0x2313C8
	  li        r0, 0
	  li        r4, 0
	  stb       r0, 0x24(r28)
	  lwz       r3, 0x20(r28)
	  bl        0x230F90
	  cmplwi    r29, 0
	  bne-      .loc_0xD4
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  addi      r3, r3, 0x2D0C
	  li        r4, 0xDF
	  addi      r5, r5, 0x2D20
	  crclr     6, 0x6
	  bl        -0x1F49F4

	.loc_0xD4:
	  lwz       r0, 0x0(r29)
	  stw       r0, 0x10(r28)
	  lwz       r0, 0x10(r28)
	  cmpwi     r0, 0x2
	  beq-      .loc_0x19C
	  bge-      .loc_0xFC
	  cmpwi     r0, 0
	  beq-      .loc_0x10C
	  bge-      .loc_0x154
	  b         .loc_0x270

	.loc_0xFC:
	  cmpwi     r0, 0x4
	  beq-      .loc_0x22C
	  bge-      .loc_0x270
	  b         .loc_0x1E4

	.loc_0x10C:
	  lis       r4, 0x804F
	  li        r3, 0
	  addi      r4, r4, 0x79C0
	  addi      r5, r31, 0x1C
	  rlwinm    r0,r3,2,0,29
	  stw       r5, 0x8(r4)
	  add       r6, r5, r0
	  li        r5, 0
	  stw       r3, 0x0(r4)

	.loc_0x130:
	  lwz       r0, 0x0(r6)
	  cmplwi    r0, 0
	  beq-      .loc_0x148
	  addi      r6, r6, 0x4
	  addi      r5, r5, 0x1
	  b         .loc_0x130

	.loc_0x148:
	  lis       r3, 0x804F
	  stw       r5, 0x79C0(r3)
	  b         .loc_0x270

	.loc_0x154:
	  lis       r4, 0x804F
	  li        r3, 0
	  addi      r4, r4, 0x79C0
	  addi      r5, r31, 0x68
	  rlwinm    r0,r3,2,0,29
	  stw       r5, 0x8(r4)
	  add       r6, r5, r0
	  li        r5, 0
	  stw       r3, 0x0(r4)

	.loc_0x178:
	  lwz       r0, 0x0(r6)
	  cmplwi    r0, 0
	  beq-      .loc_0x190
	  addi      r6, r6, 0x4
	  addi      r5, r5, 0x1
	  b         .loc_0x178

	.loc_0x190:
	  lis       r3, 0x804F
	  stw       r5, 0x79C0(r3)
	  b         .loc_0x270

	.loc_0x19C:
	  lis       r4, 0x804F
	  li        r3, 0
	  addi      r4, r4, 0x79C0
	  addi      r5, r31, 0x84
	  rlwinm    r0,r3,2,0,29
	  stw       r5, 0x8(r4)
	  add       r6, r5, r0
	  li        r5, 0
	  stw       r3, 0x0(r4)

	.loc_0x1C0:
	  lwz       r0, 0x0(r6)
	  cmplwi    r0, 0
	  beq-      .loc_0x1D8
	  addi      r6, r6, 0x4
	  addi      r5, r5, 0x1
	  b         .loc_0x1C0

	.loc_0x1D8:
	  lis       r3, 0x804F
	  stw       r5, 0x79C0(r3)
	  b         .loc_0x270

	.loc_0x1E4:
	  lis       r4, 0x804F
	  li        r3, 0
	  addi      r4, r4, 0x79C0
	  addi      r5, r31, 0xA0
	  rlwinm    r0,r3,2,0,29
	  stw       r5, 0x8(r4)
	  add       r6, r5, r0
	  li        r5, 0
	  stw       r3, 0x0(r4)

	.loc_0x208:
	  lwz       r0, 0x0(r6)
	  cmplwi    r0, 0
	  beq-      .loc_0x220
	  addi      r6, r6, 0x4
	  addi      r5, r5, 0x1
	  b         .loc_0x208

	.loc_0x220:
	  lis       r3, 0x804F
	  stw       r5, 0x79C0(r3)
	  b         .loc_0x270

	.loc_0x22C:
	  lis       r4, 0x804F
	  li        r3, 0
	  addi      r4, r4, 0x79C0
	  addi      r5, r31, 0xCC
	  rlwinm    r0,r3,2,0,29
	  stw       r5, 0x8(r4)
	  add       r6, r5, r0
	  li        r5, 0
	  stw       r3, 0x0(r4)

	.loc_0x250:
	  lwz       r0, 0x0(r6)
	  cmplwi    r0, 0
	  beq-      .loc_0x268
	  addi      r6, r6, 0x4
	  addi      r5, r5, 0x1
	  b         .loc_0x250

	.loc_0x268:
	  lis       r3, 0x804F
	  stw       r5, 0x79C0(r3)

	.loc_0x270:
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
 * Address:	8021F1F4
 * Size:	000114
 */
void SingleGame::MovieState::exec(Game::SingleGameSection*)
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
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0xFC
	  lwz       r3, 0x20(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lbz       r0, 0x24(r30)
	  cmpwi     r0, 0x1
	  beq-      .loc_0x7C
	  bge-      .loc_0xFC
	  cmpwi     r0, 0
	  bge-      .loc_0x58
	  b         .loc_0xFC

	.loc_0x58:
	  lwz       r3, 0x20(r30)
	  bl        0x2315E8
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xFC
	  li        r0, 0x1
	  stb       r0, 0x24(r30)
	  lwz       r3, 0x20(r30)
	  bl        0x23121C
	  b         .loc_0xFC

	.loc_0x7C:
	  lwz       r3, 0x14(r30)
	  lwz       r0, 0x1C(r3)
	  rlwinm.   r0,r0,0,19,19
	  bne-      .loc_0x9C
	  lwz       r3, 0x20(r30)
	  bl        0x231610
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xFC

	.loc_0x9C:
	  lwz       r0, 0xD4(r31)
	  lfs       f1, -0x4294(r2)
	  stw       r0, 0x18(r31)
	  lwz       r3, 0xD4(r31)
	  bl        0x20CAC8
	  lwz       r3, -0x6C38(r13)
	  li        r4, 0
	  bl        -0x71300
	  stw       r3, 0x22C(r31)
	  li        r7, 0
	  li        r5, 0x1
	  li        r0, 0x5
	  stb       r7, 0x8(r1)
	  mr        r3, r30
	  mr        r4, r31
	  addi      r6, r1, 0x8
	  stb       r5, 0x9(r1)
	  li        r5, 0x2
	  stb       r7, 0xA(r1)
	  sth       r0, 0xC(r1)
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0xFC:
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
 * Address:	8021F308
 * Size:	000040
 */
void SingleGame::MovieState::draw(Game::SingleGameSection*, Graphics&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x30
	  lwz       r3, 0x20(r3)
	  mr        r4, r5
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl

	.loc_0x30:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8021F348
 * Size:	000048
 */
void SingleGame::MovieState::cleanup(Game::SingleGameSection*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r3, 0x1C(r3)
	  bl        -0x1FBC30
	  lwz       r3, 0x1C(r31)
	  bl        -0x1FBDB4
	  li        r0, 0
	  stw       r0, 0x1C(r31)
	  lwz       r3, 0x18(r31)
	  bl        -0x1FBDD4
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

} // namespace Game

/*
 * --INFO--
 * Address:	8021F390
 * Size:	000040
 */
void __sinit_singleGS_Movie_cpp(void)
{
	/*
	.loc_0x0:
	  lis       r3, 0x8051
	  li        r0, 0
	  addi      r5, r3, 0x48B0
	  lis       r4, 0x804C
	  lfs       f1, 0x0(r5)
	  lis       r3, 0x804F
	  li        r5, -0x1
	  lfs       f0, -0x4290(r2)
	  stfsu     f1, 0x880(r4)
	  stwu      r0, 0x79C0(r3)
	  stw       r5, -0x6A48(r13)
	  stfs      f1, -0x6A44(r13)
	  stfs      f1, 0x4(r4)
	  stfs      f1, 0x8(r4)
	  stfs      f0, 0x4(r3)
	  blr
	*/
}
