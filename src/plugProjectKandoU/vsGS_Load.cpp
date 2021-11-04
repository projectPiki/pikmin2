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
 * Address:	8022D0E8
 * Size:	0000F0
 */
void Game::VsGame::LoadState::__ct(void)
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
	  li        r0, 0x1
	  lis       r3, 0x804C
	  stw       r0, 0x4(r31)
	  addi      r0, r3, 0x1098
	  addi      r3, r31, 0x30
	  stw       r5, 0x8(r31)
	  stw       r4, 0x0(r31)
	  stw       r0, 0x0(r31)
	  stw       r5, 0x20(r31)
	  stw       r5, 0x24(r31)
	  stb       r5, 0x28(r31)
	  bl        0x1F76D8
	  li        r3, 0xB0
	  bl        -0x2092A4
	  mr.       r0, r3
	  beq-      .loc_0x78
	  li        r4, 0
	  bl        0x1F7CFC
	  mr        r0, r3

	.loc_0x78:
	  stw       r0, 0x14(r31)
	  li        r3, 0x14
	  bl        -0x2092C4
	  cmplwi    r3, 0
	  beq-      .loc_0xD4
	  lis       r4, 0x804C
	  lis       r5, 0x804B
	  addi      r8, r4, 0x1074
	  lis       r4, 0x804C
	  lwz       r7, 0x0(r8)
	  addi      r5, r5, 0xF00
	  lwz       r6, 0x4(r8)
	  addi      r0, r4, 0x10E4
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

	.loc_0xD4:
	  stw       r3, 0x2C(r31)
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
 * Address:	8022D1D8
 * Size:	0000D0
 */
void Game::VsGame::LoadState::init((Game::VsGameSection*, Game::StateArg*))
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
	  lwz       r0, -0x6A50(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0x38
	  mr        r3, r0
	  bl        -0xED74

	.loc_0x38:
	  lwz       r3, -0x6560(r13)
	  lwz       r3, 0x18(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r30, 0x18(r29)
	  bl        -0x5C474
	  lwz       r0, 0x0(r31)
	  mr        r3, r30
	  stw       r0, 0x20(r29)
	  lwz       r0, 0x4(r31)
	  stw       r0, 0x24(r29)
	  lbz       r0, 0x8(r31)
	  stb       r0, 0x28(r29)
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x4C(r12)
	  mtctr     r12
	  bctrl
	  li        r0, 0
	  lfs       f0, -0x4098(r2)
	  stb       r0, 0x1C(r29)
	  stb       r0, 0x9C(r29)
	  stfs      f0, 0xA0(r29)
	  stw       r0, 0x388(r30)
	  stw       r0, 0x38C(r30)
	  stw       r0, 0x390(r30)
	  stw       r0, 0x394(r30)
	  stw       r0, 0x398(r30)
	  stw       r0, 0x39C(r30)
	  stw       r0, 0x3A0(r30)
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
 * Address:	8022D2A8
 * Size:	000024
 */
void Game::VsGame::LoadState::dvdLoad(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x18(r3)
	  bl        -0xDCBA8
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8022D2CC
 * Size:	0002C4
 */
void Game::VsGame::LoadState::exec((Game::VsGameSection*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stw       r31, 0x2C(r1)
	  mr        r31, r4
	  stw       r30, 0x28(r1)
	  mr        r30, r3
	  lbz       r0, 0x1C(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x154
	  lbz       r0, 0x28(r30)
	  cmplwi    r0, 0
	  beq-      .loc_0x54
	  lwz       r3, -0x6514(r13)
	  li        r4, 0x1
	  bl        0x1F6060
	  mr        r3, r31
	  bl        -0xDD56C
	  lwz       r3, -0x6514(r13)
	  li        r4, 0x1
	  bl        0x1F604C

	.loc_0x54:
	  lis       r3, 0x804B
	  li        r6, 0
	  addi      r0, r3, 0x1148
	  lis       r4, 0x804C
	  lis       r3, 0x745F
	  stw       r0, 0x14(r1)
	  addi      r5, r4, 0x1080
	  li        r4, 0x37
	  addi      r0, r3, 0x3031
	  stw       r6, 0x18(r1)
	  mr        r3, r31
	  stw       r5, 0x14(r1)
	  stw       r4, 0x1C(r1)
	  stb       r6, 0x24(r1)
	  stb       r6, 0x25(r1)
	  stw       r0, 0x20(r1)
	  stb       r6, 0x26(r1)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x58(r12)
	  mtctr     r12
	  bctrl
	  addi      r0, r3, 0x1
	  addi      r3, r1, 0x8
	  stw       r0, 0x1C(r1)
	  bl        0x1E5EF0
	  lwz       r4, -0x6C18(r13)
	  li        r3, 0
	  lwz       r0, 0x44(r4)
	  cmpwi     r0, 0x2
	  beq-      .loc_0xD4
	  cmpwi     r0, 0x3
	  bne-      .loc_0xD8

	.loc_0xD4:
	  li        r3, 0x1

	.loc_0xD8:
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xFC
	  lwz       r5, 0x334(r31)
	  addi      r3, r1, 0x8
	  subi      r4, r2, 0x4094
	  lwz       r5, 0x74(r5)
	  crclr     6, 0x6
	  bl        -0x165F88
	  b         .loc_0x114

	.loc_0xFC:
	  lwz       r5, 0x33C(r31)
	  addi      r3, r1, 0x8
	  subi      r4, r2, 0x408C
	  lwz       r5, 0x6C(r5)
	  crclr     6, 0x6
	  bl        -0x165FA4

	.loc_0x114:
	  addi      r3, r1, 0x8
	  bl        0x1E5FD0
	  lwz       r0, 0x10(r1)
	  addi      r4, r1, 0x14
	  lwz       r3, -0x6560(r13)
	  stw       r0, 0x20(r1)
	  bl        0x1D01D8
	  lwz       r3, -0x6514(r13)
	  addi      r4, r30, 0x30
	  lwz       r5, 0x2C(r30)
	  bl        0x1F5B30
	  li        r3, 0x1
	  li        r0, 0
	  stb       r3, 0x1C(r30)
	  stb       r0, 0x9C(r30)
	  b         .loc_0x2AC

	.loc_0x154:
	  mr        r3, r31
	  bl        -0xC847C
	  lwz       r3, -0x65F8(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x16C
	  bl        0x18C17C

	.loc_0x16C:
	  lwz       r3, -0x6560(r13)
	  bl        0x1CEBF0
	  lwz       r3, -0x6C18(r13)
	  lwz       r0, 0x44(r3)
	  cmpwi     r0, 0x1
	  bne-      .loc_0x1E4
	  lfs       f1, 0xA0(r30)
	  lfs       f0, -0x4084(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x1E4
	  lwz       r0, 0x48(r30)
	  cmpwi     r0, 0x2
	  bne-      .loc_0x1D0
	  lwz       r3, -0x6560(r13)
	  bl        0x1D0260
	  lwz       r3, 0x14(r30)
	  lwz       r0, 0x1C(r3)
	  andi.     r0, r0, 0x1100
	  beq-      .loc_0x1D0
	  lwz       r3, -0x67A8(r13)
	  li        r4, 0x1886
	  li        r5, 0
	  bl        0x10B1A0
	  lfs       f0, -0x4084(r2)
	  stfs      f0, 0xA0(r30)

	.loc_0x1D0:
	  lwz       r3, -0x6514(r13)
	  lfs       f1, 0xA0(r30)
	  lfs       f0, 0x54(r3)
	  fsubs     f0, f1, f0
	  stfs      f0, 0xA0(r30)

	.loc_0x1E4:
	  lbz       r0, 0x9C(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0x2AC
	  lwz       r0, 0x48(r30)
	  cmpwi     r0, 0x2
	  bne-      .loc_0x2AC
	  lwz       r3, -0x6C18(r13)
	  li        r0, 0
	  lwz       r3, 0x44(r3)
	  cmpwi     r3, 0x2
	  beq-      .loc_0x218
	  cmpwi     r3, 0x3
	  bne-      .loc_0x21C

	.loc_0x218:
	  li        r0, 0x1

	.loc_0x21C:
	  rlwinm.   r0,r0,0,24,31
	  bne-      .loc_0x240
	  cmpwi     r3, 0x1
	  bne-      .loc_0x2AC
	  lfs       f1, 0xA0(r30)
	  lfs       f0, -0x4084(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x2AC

	.loc_0x240:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x124(r12)
	  mtctr     r12
	  bctrl
	  li        r0, 0x1
	  stb       r0, 0x9C(r30)
	  lwz       r0, 0x24(r30)
	  cmpwi     r0, 0
	  bne-      .loc_0x28C
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x2
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x2AC

	.loc_0x28C:
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x3
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x2AC:
	  lwz       r0, 0x34(r1)
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8022D590
 * Size:	00007C
 */
void Game::VsGame::LoadState::draw((Game::VsGameSection*, Graphics&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r5
	  addi      r3, r31, 0x190
	  lwz       r12, 0x190(r5)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, -0x65F8(r13)
	  li        r4, 0x1
	  li        r5, 0
	  bl        0x18C010
	  lwz       r3, -0x6560(r13)
	  mr        r4, r31
	  bl        0x1CEA80
	  addi      r3, r31, 0x190
	  lwz       r12, 0x190(r31)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, -0x65F8(r13)
	  li        r4, 0
	  li        r5, 0
	  bl        0x18BFE0
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8022D60C
 * Size:	000004
 */
void Game::VsGame::LoadState::cleanup((Game::VsGameSection*)) { }

/*
 * --INFO--
 * Address:	8022D610
 * Size:	000008
 */
u32 og::Screen::DispMemberFloor::getSize(void) { return 0x14; }

/*
 * --INFO--
 * Address:	8022D618
 * Size:	00000C
 */
void og::Screen::DispMemberFloor::getOwnerID(void)
{
	/*
	.loc_0x0:
	  lis       r3, 0x4F
	  addi      r3, r3, 0x4741
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8022D624
 * Size:	000010
 */
void og::Screen::DispMemberFloor::getMemberID(void)
{
	/*
	.loc_0x0:
	  lis       r4, 0x4C4F
	  li        r3, 0x46
	  addi      r4, r4, 0x4F52
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8022D634
 * Size:	000030
 */
void Delegate<Game::VsGame::LoadState>::invoke()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r4, r3
	  stw       r0, 0x14(r1)
	  addi      r12, r4, 0x8
	  lwz       r3, 0x4(r3)
	  bl        -0x16BB28
	  nop
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8022D664
 * Size:	000028
 */
void __sinit_vsGS_Load_cpp(void)
{
	/*
	.loc_0x0:
	  lis       r4, 0x8051
	  li        r0, -0x1
	  lfs       f0, 0x48B0(r4)
	  lis       r3, 0x804C
	  stw       r0, -0x6A08(r13)
	  stfsu     f0, 0x1068(r3)
	  stfs      f0, -0x6A04(r13)
	  stfs      f0, 0x4(r3)
	  stfs      f0, 0x8(r3)
	  blr
	*/
}
