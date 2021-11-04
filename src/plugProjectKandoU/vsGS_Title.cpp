#include "types.h"

namespace Game {

/*
 * --INFO--
 * Address:	80228328
 * Size:	0000F8
 */
VsGame::TitleState::TitleState(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r4, 0x804C
	  li        r5, 0
	  stw       r0, 0x24(r1)
	  addi      r0, r4, 0xEE4
	  lis       r4, 0x804C
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  addi      r4, r4, 0xE98
	  stw       r0, 0x0(r3)
	  lis       r3, 0x804C
	  addi      r0, r3, 0xE40
	  stw       r5, 0x4(r31)
	  li        r3, 0xB0
	  stw       r5, 0x8(r31)
	  stw       r4, 0x0(r31)
	  stw       r0, 0x0(r31)
	  bl        -0x2044CC
	  mr.       r0, r3
	  beq-      .loc_0x60
	  li        r4, 0
	  bl        0x1FCAD4
	  mr        r0, r3

	.loc_0x60:
	  stw       r0, 0x30(r31)
	  li        r3, 0x14
	  bl        -0x2044EC
	  cmplwi    r3, 0
	  beq-      .loc_0xBC
	  lis       r4, 0x804C
	  lis       r5, 0x804B
	  addi      r8, r4, 0xE04
	  lis       r4, 0x804C
	  lwz       r7, 0x0(r8)
	  addi      r5, r5, 0xF00
	  lwz       r6, 0x4(r8)
	  addi      r0, r4, 0xE8C
	  lwz       r4, 0x8(r8)
	  stw       r7, 0x8(r1)
	  stw       r5, 0x0(r3)
	  stw       r0, 0x0(r3)
	  stw       r31, 0x4(r3)
	  stw       r7, 0x8(r3)
	  stw       r6, 0xC(r3)
	  stw       r6, 0xC(r1)
	  stw       r4, 0x10(r1)
	  stw       r4, 0x10(r3)

	.loc_0xBC:
	  stw       r3, 0x1C(r31)
	  li        r3, 0xB0
	  bl        -0x204548
	  mr.       r0, r3
	  beq-      .loc_0xDC
	  li        r4, 0x1
	  bl        0x1FCA58
	  mr        r0, r3

	.loc_0xDC:
	  stw       r0, 0x34(r31)
	  mr        r3, r31
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80228420
 * Size:	000134
 */
void VsGame::TitleState::init(Game::VsGameSection*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r5
	  stw       r30, 0x18(r1)
	  mr        r30, r4
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  lwz       r3, -0x6D20(r13)
	  bl        -0xCD258
	  lfs       f0, -0x4110(r2)
	  li        r0, 0
	  mr        r3, r30
	  stfs      f0, 0x1F4(r30)
	  stfs      f0, 0x1F0(r30)
	  stw       r0, 0x3BC(r30)
	  stfs      f0, 0x3C0(r30)
	  bl        -0x63BA8
	  mr        r3, r30
	  bl        -0x63AC8
	  li        r0, 0
	  cmplwi    r31, 0
	  stw       r0, 0x324(r30)
	  beq-      .loc_0x78
	  lbz       r0, 0x0(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x78
	  mr        r3, r30
	  bl        -0xD86F0

	.loc_0x78:
	  li        r0, 0x1
	  lis       r3, 0x804C
	  stb       r0, 0x205(r30)
	  li        r0, 0
	  addi      r4, r3, 0xDF4
	  addi      r3, r30, 0x224
	  stw       r0, 0x208(r30)
	  stw       r0, 0x18(r29)
	  stw       r0, 0x14(r29)
	  stb       r0, 0x10(r29)
	  stw       r0, 0x2C(r29)
	  stw       r0, 0x24(r29)
	  lwz       r0, 0x24(r29)
	  rlwinm    r0,r0,2,0,29
	  lwzx      r4, r4, r0
	  bl        -0x15DC7C
	  li        r0, 0
	  stw       r0, 0x20(r29)
	  lwz       r3, 0x20C(r30)
	  lwzu      r12, 0x18(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x28(r29)
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x4C(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r30
	  bl        -0x66CCC
	  lwz       r3, -0x6560(r13)
	  lwz       r3, 0x18(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  li        r0, 0
	  stw       r0, 0x334(r30)
	  stw       r0, 0x33C(r30)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000084
 */
void VsGame::TitleState::initNext(Game::VsGameSection*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80228554
 * Size:	0003F4
 */
void VsGame::TitleState::dvdload(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x60(r1)
	  mflr      r0
	  lis       r4, 0x8048
	  stw       r0, 0x64(r1)
	  stw       r31, 0x5C(r1)
	  stw       r30, 0x58(r1)
	  stw       r29, 0x54(r1)
	  mr        r29, r3
	  addi      r3, r1, 0x8
	  stw       r28, 0x50(r1)
	  addi      r28, r4, 0x3458
	  bl        0x10CF30
	  lwz       r4, -0x6C18(r13)
	  li        r3, 0
	  lwz       r0, 0x44(r4)
	  cmpwi     r0, 0x2
	  beq-      .loc_0x4C
	  cmpwi     r0, 0x3
	  bne-      .loc_0x50

	.loc_0x4C:
	  li        r3, 0x1

	.loc_0x50:
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x64
	  li        r0, 0x11
	  stb       r0, 0xE(r1)
	  b         .loc_0x6C

	.loc_0x64:
	  li        r0, 0x13
	  stb       r0, 0xE(r1)

	.loc_0x6C:
	  lwz       r0, -0x6780(r13)
	  li        r3, 0
	  stb       r3, 0xF(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x94
	  addi      r3, r28, 0x74
	  addi      r5, r28, 0x80
	  li        r4, 0x1D3
	  crclr     6, 0x6
	  bl        -0x1FDFA4

	.loc_0x94:
	  lwz       r3, -0x6780(r13)
	  addi      r4, r1, 0x8
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, -0x6780(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0xCC
	  addi      r3, r28, 0x74
	  addi      r5, r28, 0x80
	  li        r4, 0x1D3
	  crclr     6, 0x6
	  bl        -0x1FDFDC

	.loc_0xCC:
	  lwz       r30, -0x6780(r13)
	  lwz       r0, 0x4(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0xF0
	  addi      r3, r28, 0x8C
	  addi      r5, r28, 0x80
	  li        r4, 0xC7
	  crclr     6, 0x6
	  bl        -0x1FE000

	.loc_0xF0:
	  lwz       r3, 0x4(r30)
	  lwz       r3, 0x4(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, -0x6780(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x128
	  addi      r3, r28, 0x74
	  addi      r5, r28, 0x80
	  li        r4, 0x1D3
	  crclr     6, 0x6
	  bl        -0x1FE038

	.loc_0x128:
	  lwz       r30, -0x6780(r13)
	  lwz       r0, 0x4(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0x14C
	  addi      r3, r28, 0x8C
	  addi      r5, r28, 0x80
	  li        r4, 0xC7
	  crclr     6, 0x6
	  bl        -0x1FE05C

	.loc_0x14C:
	  lwz       r3, 0x4(r30)
	  lwz       r3, 0x4(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  li        r3, 0x8
	  bl        -0x204818
	  mr.       r0, r3
	  beq-      .loc_0x180
	  li        r4, 0x1E
	  bl        0xC9D4
	  mr        r0, r3

	.loc_0x180:
	  stw       r0, 0x3C(r29)
	  li        r3, 0x8
	  bl        -0x204838
	  mr.       r28, r3
	  beq-      .loc_0x1BC
	  lwz       r3, 0x38(r29)
	  lwz       r3, 0x210(r3)
	  lwzu      r12, 0x18(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  mr        r3, r28
	  bl        0xCAA8
	  mr        r28, r3

	.loc_0x1BC:
	  stw       r28, 0x40(r29)
	  li        r28, 0

	.loc_0x1C4:
	  lwz       r3, -0x6514(r13)
	  bl        0x1FA814
	  mr        r4, r28
	  bl        0xC11C
	  addi      r28, r28, 0x1
	  cmpwi     r28, 0x5
	  blt+      .loc_0x1C4
	  li        r30, 0

	.loc_0x1E4:
	  lwz       r3, -0x6514(r13)
	  bl        0x1FA7F4
	  mr        r4, r30
	  bl        0xC0FC
	  mr        r28, r3
	  lwz       r3, 0x3C(r29)
	  mr        r4, r30
	  bl        0xC9E0
	  lwz       r5, 0x38(r29)
	  mr        r31, r3
	  mr        r4, r30
	  lwz       r3, 0x20C(r5)
	  bl        0x537C
	  cmplwi    r3, 0
	  beq-      .loc_0x34C
	  lwz       r0, 0x6C(r3)
	  addi      r6, r3, 0x18
	  addi      r5, r28, 0x4
	  addi      r4, r28, 0x10
	  stw       r0, 0x0(r31)
	  li        r0, 0
	  lfs       f0, 0x60(r3)
	  fctiwz    f0, f0
	  stfd      f0, 0x40(r1)
	  lwz       r7, 0x44(r1)
	  stw       r7, 0xC(r31)
	  lwz       r7, 0x64(r3)
	  stw       r7, 0x4(r31)
	  lwz       r7, 0x68(r3)
	  stw       r7, 0x8(r31)
	  stw       r6, 0x10(r31)
	  stw       r5, 0x14(r31)
	  stw       r4, 0x18(r31)
	  lwz       r3, 0x74(r3)
	  stw       r3, 0x1C(r31)
	  stb       r0, 0x20(r31)
	  lwz       r3, -0x6514(r13)
	  bl        0x1FA764
	  mr        r4, r30
	  bl        0xC090
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x298
	  lbz       r0, 0x20(r31)
	  ori       r0, r0, 0x1
	  stb       r0, 0x20(r31)

	.loc_0x298:
	  lwz       r3, -0x6514(r13)
	  bl        0x1FA740
	  mr        r4, r30
	  bl        0xC098
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x2BC
	  lbz       r0, 0x20(r31)
	  ori       r0, r0, 0x2
	  stb       r0, 0x20(r31)

	.loc_0x2BC:
	  lwz       r3, -0x6514(r13)
	  bl        0x1FA71C
	  mr        r4, r30
	  bl        0xC0CC
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x2E0
	  lbz       r0, 0x20(r31)
	  ori       r0, r0, 0x8
	  stb       r0, 0x20(r31)

	.loc_0x2E0:
	  lwz       r3, -0x6514(r13)
	  bl        0x1FA6F8
	  mr        r4, r30
	  bl        0xC0F4
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x304
	  lbz       r0, 0x20(r31)
	  ori       r0, r0, 0x10
	  stb       r0, 0x20(r31)

	.loc_0x304:
	  lwz       r3, -0x6514(r13)
	  bl        0x1FA6D4
	  mr        r4, r30
	  bl        0xC11C
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x328
	  lbz       r0, 0x20(r31)
	  ori       r0, r0, 0x20
	  stb       r0, 0x20(r31)

	.loc_0x328:
	  lwz       r3, -0x6514(r13)
	  bl        0x1FA6B0
	  mr        r4, r30
	  bl        0xC034
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x34C
	  lbz       r0, 0x20(r31)
	  ori       r0, r0, 0x4
	  stb       r0, 0x20(r31)

	.loc_0x34C:
	  addi      r30, r30, 0x1
	  cmpwi     r30, 0x1E
	  blt+      .loc_0x1E4
	  li        r28, 0

	.loc_0x35C:
	  lwz       r3, -0x6514(r13)
	  bl        0x1FA67C
	  mr        r4, r28
	  bl        0xBF84
	  addi      r28, r28, 0x1
	  cmpwi     r28, 0x5
	  blt+      .loc_0x35C
	  li        r28, 0
	  b         .loc_0x3B4

	.loc_0x380:
	  lwz       r3, 0x40(r29)
	  mr        r4, r28
	  bl        0xC944
	  lwz       r5, 0x38(r29)
	  mr        r30, r3
	  mr        r4, r28
	  lwz       r3, 0x210(r5)
	  bl        0x56E4
	  cmplwi    r3, 0
	  beq-      .loc_0x3B0
	  lwz       r0, 0x6C(r3)
	  stw       r0, 0x0(r30)

	.loc_0x3B0:
	  addi      r28, r28, 0x1

	.loc_0x3B4:
	  lwz       r3, 0x38(r29)
	  lwz       r3, 0x210(r3)
	  lwzu      r12, 0x18(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  cmpw      r28, r3
	  blt+      .loc_0x380
	  lwz       r0, 0x64(r1)
	  lwz       r31, 0x5C(r1)
	  lwz       r30, 0x58(r1)
	  lwz       r29, 0x54(r1)
	  lwz       r28, 0x50(r1)
	  mtlr      r0
	  addi      r1, r1, 0x60
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80228948
 * Size:	000038
 */
void VsGame::TitleState::exec(Game::VsGameSection*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r5, -0x6C18(r13)
	  lwz       r0, 0x44(r5)
	  cmpwi     r0, 0x1
	  bne-      .loc_0x24
	  bl        0x328
	  b         .loc_0x28

	.loc_0x24:
	  bl        .loc_0x38

	.loc_0x28:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr

	.loc_0x38:
	*/
}

/*
 * --INFO--
 * Address:	80228980
 * Size:	0002DC
 */
void VsGame::TitleState::execChallenge(Game::VsGameSection*)
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
	  lis       r3, 0x8048
	  stw       r29, 0x44(r1)
	  stw       r28, 0x40(r1)
	  addi      r28, r3, 0x3458
	  lbz       r0, 0x10(r30)
	  cmpwi     r0, 0x1
	  beq-      .loc_0xA0
	  bge-      .loc_0x48
	  cmpwi     r0, 0
	  bge-      .loc_0x54
	  b         .loc_0x29C

	.loc_0x48:
	  cmpwi     r0, 0x3
	  bge-      .loc_0x29C
	  b         .loc_0x158

	.loc_0x54:
	  lwz       r0, -0x77D4(r13)
	  stw       r0, 0x18(r30)
	  lwz       r28, 0x18(r30)
	  mr        r3, r28
	  bl        -0x205230
	  mr        r4, r28
	  li        r5, 0x1
	  bl        -0x208B28
	  stw       r3, 0x14(r30)
	  lwz       r3, 0x14(r30)
	  bl        -0x205458
	  li        r0, 0x1
	  addi      r4, r31, 0x184
	  stb       r0, 0x10(r30)
	  stw       r31, 0x38(r30)
	  lwz       r3, -0x6514(r13)
	  lwz       r5, 0x1C(r30)
	  bl        0x1FA520
	  b         .loc_0x2BC

	.loc_0xA0:
	  lwz       r0, 0x19C(r31)
	  cmpwi     r0, 0x2
	  bne-      .loc_0x2BC
	  li        r0, 0x2
	  lis       r3, 0x804B
	  stb       r0, 0x10(r30)
	  li        r4, 0
	  addi      r0, r3, 0x1148
	  lis       r3, 0x804C
	  stw       r0, 0x1C(r1)
	  addi      r3, r3, 0xE28
	  li        r0, -0x1
	  lwz       r5, -0x6C18(r13)
	  stw       r4, 0x20(r1)
	  stw       r3, 0x1C(r1)
	  stw       r4, 0x24(r1)
	  stw       r4, 0x28(r1)
	  stw       r0, 0x2C(r1)
	  stw       r4, 0x30(r1)
	  stw       r4, 0x34(r1)
	  stw       r4, 0x38(r1)
	  stw       r4, 0x3C(r1)
	  lwz       r0, 0x3C(r30)
	  stw       r0, 0x24(r1)
	  lwz       r0, 0x338(r31)
	  stw       r0, 0x30(r1)
	  lwz       r0, 0x14(r30)
	  stw       r0, 0x28(r1)
	  lwz       r0, 0x44(r5)
	  cmpwi     r0, 0x1
	  beq-      .loc_0x124
	  cmpwi     r0, 0x3
	  bne-      .loc_0x128

	.loc_0x124:
	  li        r4, 0x1

	.loc_0x128:
	  rlwinm    r4,r4,0,24,31
	  lwz       r3, -0x6560(r13)
	  neg       r0, r4
	  or        r0, r0, r4
	  rlwinm    r0,r0,1,31,31
	  stw       r0, 0x34(r1)
	  lwz       r4, 0x30(r30)
	  bl        0x1D35B4
	  lwz       r3, -0x6560(r13)
	  addi      r4, r1, 0x1C
	  bl        0x1D71C0
	  b         .loc_0x2BC

	.loc_0x158:
	  lwz       r3, -0x6560(r13)
	  addi      r4, r1, 0xC
	  addi      r5, r1, 0x8
	  bl        0x1D7248
	  cmpwi     r3, 0x3
	  beq-      .loc_0x18C
	  bge-      .loc_0x29C
	  cmpwi     r3, 0x2
	  bge-      .loc_0x180
	  b         .loc_0x29C

	.loc_0x180:
	  li        r0, 0x1
	  stb       r0, 0x204(r31)
	  b         .loc_0x2BC

	.loc_0x18C:
	  lwz       r4, 0xC(r1)
	  addi      r3, r28, 0x98
	  lwz       r5, 0x8(r1)
	  crclr     6, 0x6
	  bl        -0x13B430
	  lbz       r0, 0x174(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x1BC
	  lwz       r3, -0x6C18(r13)
	  li        r0, 0x1
	  stw       r0, 0x44(r3)
	  b         .loc_0x1E4

	.loc_0x1BC:
	  lwz       r0, 0x8(r1)
	  cmpwi     r0, 0
	  bne-      .loc_0x1D8
	  lwz       r3, -0x6C18(r13)
	  li        r0, 0x2
	  stw       r0, 0x44(r3)
	  b         .loc_0x1E4

	.loc_0x1D8:
	  lwz       r3, -0x6C18(r13)
	  li        r0, 0x3
	  stw       r0, 0x44(r3)

	.loc_0x1E4:
	  li        r0, 0
	  lwz       r4, 0xC(r1)
	  stw       r0, 0x10(r1)
	  stw       r0, 0x14(r1)
	  stb       r0, 0x18(r1)
	  lwz       r3, 0x20C(r31)
	  bl        0x4F68
	  mr.       r29, r3
	  bne-      .loc_0x21C
	  addi      r3, r28, 0xC8
	  addi      r5, r28, 0x80
	  li        r4, 0x143
	  crclr     6, 0x6
	  bl        -0x1FE558

	.loc_0x21C:
	  stw       r29, 0x334(r31)
	  addi      r3, r31, 0x224
	  addi      r4, r29, 0x20
	  lwz       r0, 0xC(r1)
	  stw       r0, 0x338(r31)
	  bl        -0x15E358
	  li        r0, 0
	  addi      r3, r31, 0x214
	  stw       r0, 0x14(r1)
	  addi      r4, r29, 0x18
	  bl        -0x378CC
	  lwz       r3, -0x6B70(r13)
	  li        r4, 0
	  lwz       r5, 0x68(r29)
	  bl        -0x40784
	  lwz       r3, -0x6B70(r13)
	  li        r4, 0x1
	  lwz       r5, 0x64(r29)
	  bl        -0x40794
	  lfs       f0, -0x4110(r2)
	  addi      r3, r29, 0x18
	  addi      r4, r28, 0xD8
	  stfs      f0, 0x3C0(r31)
	  bl        -0x37850
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  addi      r6, r1, 0x10
	  li        r5, 0x1
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x29C:
	  mr        r3, r31
	  bl        -0xC3C78
	  lwz       r3, -0x6560(r13)
	  bl        0x1D3404
	  lwz       r3, -0x65F8(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x2BC
	  bl        0x190978

	.loc_0x2BC:
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
 * Address:	80228C5C
 * Size:	000030
 */
void transit__Q24Game32FSMState<Game::VsGameSection>
FPQ24Game13VsGameSectioniPQ24Game8StateArg(void)
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
 * Address:	80228C8C
 * Size:	000430
 */
void VsGame::TitleState::execVs(Game::VsGameSection*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0xA0(r1)
	  mflr      r0
	  stw       r0, 0xA4(r1)
	  stw       r31, 0x9C(r1)
	  stw       r30, 0x98(r1)
	  mr        r30, r4
	  stw       r29, 0x94(r1)
	  mr        r29, r3
	  lis       r3, 0x8048
	  stw       r28, 0x90(r1)
	  addi      r31, r3, 0x3458
	  lbz       r0, 0x10(r29)
	  cmpwi     r0, 0x1
	  beq-      .loc_0xA0
	  bge-      .loc_0x48
	  cmpwi     r0, 0
	  bge-      .loc_0x54
	  b         .loc_0x3F0

	.loc_0x48:
	  cmpwi     r0, 0x3
	  bge-      .loc_0x3F0
	  b         .loc_0x180

	.loc_0x54:
	  lwz       r0, -0x77D4(r13)
	  stw       r0, 0x18(r29)
	  lwz       r28, 0x18(r29)
	  mr        r3, r28
	  bl        -0x20553C
	  mr        r4, r28
	  li        r5, 0x1
	  bl        -0x208E34
	  stw       r3, 0x14(r29)
	  lwz       r3, 0x14(r29)
	  bl        -0x205764
	  li        r0, 0x1
	  addi      r4, r30, 0x184
	  stb       r0, 0x10(r29)
	  stw       r30, 0x38(r29)
	  lwz       r3, -0x6514(r13)
	  lwz       r5, 0x1C(r29)
	  bl        0x1FA214
	  b         .loc_0x410

	.loc_0xA0:
	  lwz       r0, 0x19C(r30)
	  cmpwi     r0, 0x2
	  bne-      .loc_0x410
	  li        r0, 0x2
	  lis       r6, 0x804C
	  lis       r3, 0x804B
	  stb       r0, 0x10(r29)
	  addi      r0, r3, 0x1148
	  li        r7, 0
	  stw       r0, 0x58(r1)
	  li        r5, -0x1
	  li        r4, 0x3
	  addi      r6, r6, 0xE10
	  stw       r7, 0x5C(r1)
	  lwz       r3, -0x6BF0(r13)
	  stw       r6, 0x58(r1)
	  lwz       r0, -0x6BEC(r13)
	  stw       r7, 0x60(r1)
	  stw       r7, 0x64(r1)
	  stw       r7, 0x68(r1)
	  stw       r5, 0x6C(r1)
	  stw       r7, 0x70(r1)
	  stw       r4, 0x74(r1)
	  stw       r4, 0x78(r1)
	  stw       r7, 0x7C(r1)
	  stw       r7, 0x80(r1)
	  stw       r5, 0x84(r1)
	  stw       r7, 0x88(r1)
	  stw       r7, 0x8C(r1)
	  lwz       r4, 0x40(r29)
	  stw       r4, 0x60(r1)
	  lwz       r4, 0x340(r30)
	  stw       r4, 0x70(r1)
	  lwz       r4, 0x14(r29)
	  stw       r4, 0x64(r1)
	  lwz       r4, 0x344(r30)
	  stw       r4, 0x74(r1)
	  lwz       r4, 0x348(r30)
	  stw       r4, 0x78(r1)
	  stw       r3, 0x7C(r1)
	  stw       r0, 0x80(r1)
	  lwz       r0, 0x34C(r30)
	  stw       r0, 0x84(r1)
	  lwz       r3, 0x210(r30)
	  lwzu      r12, 0x18(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x88(r1)
	  lwz       r3, -0x6560(r13)
	  lwz       r4, 0x30(r29)
	  bl        0x1D3280
	  lwz       r3, -0x6560(r13)
	  addi      r4, r1, 0x58
	  bl        0x1D7064
	  b         .loc_0x410

	.loc_0x180:
	  lwz       r3, 0x30(r29)
	  lfs       f3, -0x4110(r2)
	  lfs       f5, 0x5C(r3)
	  lfs       f6, 0x58(r3)
	  fmuls     f4, f5, f5
	  lfs       f2, -0x410C(r2)
	  fmadds    f0, f6, f6, f3
	  lfs       f1, -0x4108(r2)
	  lwz       r5, 0xE8(r31)
	  lwz       r4, 0xEC(r31)
	  fadds     f4, f4, f0
	  lwz       r3, 0xF0(r31)
	  lwz       r0, 0xF4(r31)
	  stfs      f3, 0x28(r1)
	  fcmpo     cr0, f4, f3
	  stfs      f3, 0x2C(r1)
	  stfs      f2, 0x30(r1)
	  stfs      f2, 0x34(r1)
	  stfs      f3, 0x38(r1)
	  stfs      f3, 0x3C(r1)
	  stfs      f3, 0x40(r1)
	  stfs      f3, 0x44(r1)
	  stfs      f1, 0x48(r1)
	  stfs      f1, 0x4C(r1)
	  stfs      f3, 0x50(r1)
	  stfs      f3, 0x54(r1)
	  stw       r5, 0x18(r1)
	  stw       r4, 0x1C(r1)
	  stw       r3, 0x20(r1)
	  stw       r0, 0x24(r1)
	  ble-      .loc_0x20C
	  ble-      .loc_0x210
	  fsqrte    f0, f4
	  fmuls     f4, f0, f4
	  b         .loc_0x210

	.loc_0x20C:
	  fmr       f4, f3

	.loc_0x210:
	  lfs       f0, -0x4104(r2)
	  fcmpo     cr0, f4, f0
	  ble-      .loc_0x2D8
	  lfs       f4, -0x4110(r2)
	  li        r0, 0
	  lfs       f0, 0x2C(r1)
	  lfs       f2, 0x28(r1)
	  fmr       f1, f4
	  fmuls     f0, f0, f4
	  lfs       f3, 0x30(r1)
	  fmadds    f0, f2, f6, f0
	  fmadds    f0, f3, f5, f0
	  fcmpo     cr0, f0, f4
	  ble-      .loc_0x250
	  fmr       f4, f0
	  li        r0, 0

	.loc_0x250:
	  lfs       f0, 0x38(r1)
	  lfs       f2, 0x34(r1)
	  fmuls     f0, f0, f1
	  lfs       f3, 0x3C(r1)
	  fmadds    f0, f2, f6, f0
	  fmadds    f0, f3, f5, f0
	  fcmpo     cr0, f0, f4
	  ble-      .loc_0x278
	  fmr       f4, f0
	  li        r0, 0x1

	.loc_0x278:
	  lfs       f0, 0x44(r1)
	  lfs       f2, 0x40(r1)
	  fmuls     f0, f0, f1
	  lfs       f3, 0x48(r1)
	  fmadds    f0, f2, f6, f0
	  fmadds    f0, f3, f5, f0
	  fcmpo     cr0, f0, f4
	  ble-      .loc_0x2A0
	  fmr       f4, f0
	  li        r0, 0x2

	.loc_0x2A0:
	  lfs       f0, 0x50(r1)
	  lfs       f2, 0x4C(r1)
	  fmuls     f0, f0, f1
	  lfs       f3, 0x54(r1)
	  fmadds    f0, f2, f6, f0
	  fmadds    f0, f3, f5, f0
	  fcmpo     cr0, f0, f4
	  ble-      .loc_0x2C4
	  li        r0, 0x3

	.loc_0x2C4:
	  rlwinm    r0,r0,2,0,29
	  addi      r3, r1, 0x18
	  lwzx      r0, r3, r0
	  stw       r0, 0x328(r30)
	  b         .loc_0x2E0

	.loc_0x2D8:
	  li        r0, -0x2
	  stw       r0, 0x328(r30)

	.loc_0x2E0:
	  lwz       r3, -0x6560(r13)
	  addi      r4, r1, 0x8
	  addi      r5, r30, 0x344
	  addi      r6, r30, 0x348
	  bl        0x1D6F88
	  cmpwi     r3, 0x3
	  beq-      .loc_0x318
	  bge-      .loc_0x3F0
	  cmpwi     r3, 0x2
	  bge-      .loc_0x30C
	  b         .loc_0x3F0

	.loc_0x30C:
	  li        r0, 0x1
	  stb       r0, 0x204(r30)
	  b         .loc_0x410

	.loc_0x318:
	  lwz       r3, -0x6C18(r13)
	  li        r4, 0x1
	  li        r0, 0
	  stw       r4, 0x44(r3)
	  stw       r0, 0xC(r1)
	  lwz       r4, 0x8(r1)
	  stw       r0, 0x10(r1)
	  stb       r0, 0x14(r1)
	  lwz       r3, 0x210(r30)
	  bl        0x500C
	  mr.       r28, r3
	  bne-      .loc_0x35C
	  addi      r3, r31, 0xC8
	  addi      r5, r31, 0x80
	  li        r4, 0x1C3
	  crclr     6, 0x6
	  bl        -0x1FE9A4

	.loc_0x35C:
	  stw       r28, 0x33C(r30)
	  addi      r3, r30, 0x224
	  addi      r4, r28, 0x20
	  lwz       r0, 0x8(r1)
	  stw       r0, 0x340(r30)
	  bl        -0x15E7A4
	  addi      r3, r30, 0x2A4
	  addi      r4, r28, 0x70
	  bl        -0x15E7B0
	  li        r0, 0
	  addi      r3, r30, 0x214
	  stw       r0, 0x10(r1)
	  addi      r4, r28, 0x18
	  bl        -0x37D24
	  lwz       r3, -0x6B70(r13)
	  li        r4, 0
	  lwz       r5, 0x68(r28)
	  bl        -0x40BDC
	  lwz       r3, -0x6B70(r13)
	  li        r4, 0x1
	  lwz       r5, 0x64(r28)
	  bl        -0x40BEC
	  lfs       f1, -0x4100(r2)
	  addi      r3, r28, 0x18
	  lfs       f0, 0x60(r28)
	  addi      r4, r31, 0xD8
	  fadds     f0, f1, f0
	  stfs      f0, 0x3C0(r30)
	  bl        -0x37CB0
	  mr        r3, r29
	  mr        r4, r30
	  lwz       r12, 0x0(r29)
	  addi      r6, r1, 0xC
	  li        r5, 0x1
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x3F0:
	  mr        r3, r30
	  bl        -0xC40D8
	  lwz       r3, -0x6560(r13)
	  bl        0x1D2FA4
	  lwz       r3, -0x65F8(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x410
	  bl        0x190518

	.loc_0x410:
	  lwz       r0, 0xA4(r1)
	  lwz       r31, 0x9C(r1)
	  lwz       r30, 0x98(r1)
	  lwz       r29, 0x94(r1)
	  lwz       r28, 0x90(r1)
	  mtlr      r0
	  addi      r1, r1, 0xA0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802290BC
 * Size:	000088
 */
void VsGame::TitleState::draw(Game::VsGameSection*, Graphics&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r5
	  lbz       r0, 0x10(r3)
	  cmplwi    r0, 0x2
	  bne-      .loc_0x74
	  addi      r3, r31, 0x190
	  lwz       r12, 0x190(r31)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, -0x65F8(r13)
	  li        r4, 0x1
	  li        r5, 0
	  bl        0x1904D8
	  lwz       r3, -0x6560(r13)
	  mr        r4, r31
	  bl        0x1D2F48
	  addi      r3, r31, 0x190
	  lwz       r12, 0x190(r31)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, -0x65F8(r13)
	  li        r4, 0
	  li        r5, 0
	  bl        0x1904A8

	.loc_0x74:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80229144
 * Size:	0000B0
 */
void VsGame::TitleState::cleanup(Game::VsGameSection*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  lwz       r0, -0x6780(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x40
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  addi      r3, r3, 0x34CC
	  li        r4, 0x1D3
	  addi      r5, r5, 0x34D8
	  crclr     6, 0x6
	  bl        -0x1FEB40

	.loc_0x40:
	  lwz       r31, -0x6780(r13)
	  cmplwi    r31, 0
	  bne-      .loc_0x68
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  addi      r3, r3, 0x34CC
	  li        r4, 0x1DC
	  addi      r5, r5, 0x34D8
	  crclr     6, 0x6
	  bl        -0x1FEB68

	.loc_0x68:
	  mr        r3, r31
	  bl        0x119030
	  lwz       r3, -0x65F8(r13)
	  bl        0x1905FC
	  lwz       r3, 0x14(r30)
	  bl        -0x205A90
	  lwz       r3, 0x14(r30)
	  bl        -0x205C14
	  li        r0, 0
	  stw       r0, 0x14(r30)
	  lwz       r3, 0x18(r30)
	  bl        -0x205C34
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

} // namespace Game

/*
 * --INFO--
 * Address:	802291F4
 * Size:	000008
 */
u32 Morimura::DispMemberVsSelect::getSize(void) { return 0x38; }

/*
 * --INFO--
 * Address:	802291FC
 * Size:	00000C
 */
void Morimura::DispMemberVsSelect::getOwnerID(void)
{
	/*
	.loc_0x0:
	  lis       r3, 0x4D52
	  addi      r3, r3, 0x4D52
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80229208
 * Size:	000014
 */
void Morimura::DispMemberVsSelect::getMemberID(void)
{
	/*
	.loc_0x0:
	  lis       r4, 0x4C45
	  lis       r3, 0x5653
	  addi      r4, r4, 0x4354
	  addi      r3, r3, 0x5345
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8022921C
 * Size:	000008
 */
u32 Morimura::DispMemberChallengeSelect::getSize(void) { return 0x24; }

/*
 * --INFO--
 * Address:	80229224
 * Size:	00000C
 */
void Morimura::DispMemberChallengeSelect::getOwnerID(void)
{
	/*
	.loc_0x0:
	  lis       r3, 0x4D52
	  addi      r3, r3, 0x4D52
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80229230
 * Size:	000014
 */
void Morimura::DispMemberChallengeSelect::getMemberID(void)
{
	/*
	.loc_0x0:
	  lis       r4, 0x4C45
	  lis       r3, 0x4348
	  addi      r4, r4, 0x4354
	  addi      r3, r3, 0x5345
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80229244
 * Size:	000004
 */
void resume__Q24Game32FSMState<Game::VsGameSection>
FPQ24Game13VsGameSection(void)
{
}

/*
 * --INFO--
 * Address:	80229248
 * Size:	000004
 */
void restart__Q24Game32FSMState<Game::VsGameSection>
FPQ24Game13VsGameSection(void)
{
}

/*
 * --INFO--
 * Address:	8022924C
 * Size:	000030
 */
void Delegate<Game::VsGame::TitleState>::invoke()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r4, r3
	  stw       r0, 0x14(r1)
	  addi      r12, r4, 0x8
	  lwz       r3, 0x4(r3)
	  bl        -0x167740
	  nop
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8022927C
 * Size:	000028
 */
void __sinit_vsGS_Title_cpp(void)
{
	/*
	.loc_0x0:
	  lis       r4, 0x8051
	  li        r0, -0x1
	  lfs       f0, 0x48B0(r4)
	  lis       r3, 0x804C
	  stw       r0, -0x6A20(r13)
	  stfsu     f0, 0xDE8(r3)
	  stfs      f0, -0x6A1C(r13)
	  stfs      f0, 0x4(r3)
	  stfs      f0, 0x8(r3)
	  blr
	*/
}
