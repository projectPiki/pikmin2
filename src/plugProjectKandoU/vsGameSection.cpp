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
 * Address:	801C0DF8
 * Size:	0000D0
 */
void Game::VsGame::FSM::init((Game::VsGameSection*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r4, 0x5
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        0x3BD4
	  li        r3, 0x44
	  bl        -0x19CF74
	  mr.       r4, r3
	  beq-      .loc_0x34
	  bl        0x67504
	  mr        r4, r3

	.loc_0x34:
	  mr        r3, r31
	  bl        0x3CBC
	  li        r3, 0xA4
	  bl        -0x19CF94
	  mr.       r4, r3
	  beq-      .loc_0x54
	  bl        0x6C2A4
	  mr        r4, r3

	.loc_0x54:
	  mr        r3, r31
	  bl        0x3C9C
	  li        r3, 0x28
	  bl        -0x19CFB4
	  mr.       r4, r3
	  beq-      .loc_0x74
	  bl        0x68440
	  mr        r4, r3

	.loc_0x74:
	  mr        r3, r31
	  bl        0x3C7C
	  li        r3, 0x28
	  bl        -0x19CFD4
	  mr.       r4, r3
	  beq-      .loc_0x94
	  bl        0x6DC10
	  mr        r4, r3

	.loc_0x94:
	  mr        r3, r31
	  bl        0x3C5C
	  li        r3, 0x3C
	  bl        -0x19CFF4
	  mr.       r4, r3
	  beq-      .loc_0xB4
	  bl        0x6B950
	  mr        r4, r3

	.loc_0xB4:
	  mr        r3, r31
	  bl        0x3C3C
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
 * Size:	000038
 */
void Game::VsGame::FSM::draw((Game::VsGameSection*, Graphics&))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801C0EC8
 * Size:	000004
 */
void Game::VsGame::State::draw((Game::VsGameSection*, Graphics&)) { }

/*
 * --INFO--
 * Address:	801C0ECC
 * Size:	000020
 */
void Game::VsGame::FSM::transit((Game::VsGameSection*, int, Game::StateArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        0x3B70
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801C0EEC
 * Size:	0000FC
 */
void Game::VsGameSection::__ct((JKRHeap*, bool))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r5
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  bl        -0x76168
	  lis       r4, 0x804B
	  addi      r3, r30, 0x184
	  addi      r0, r4, 0x61E8
	  stw       r0, 0x0(r30)
	  bl        0x2638FC
	  li        r0, 0
	  addi      r3, r30, 0x214
	  stb       r0, 0x1F8(r30)
	  bl        0x30314
	  addi      r3, r30, 0x21C
	  bl        0x3030C
	  stb       r31, 0x174(r30)
	  li        r0, 0x1
	  lis       r3, 0x8051
	  li        r6, 0
	  stb       r0, 0x205(r30)
	  li        r5, -0x1
	  li        r4, 0x2
	  li        r0, -0x2
	  stw       r6, 0x338(r30)
	  addi      r3, r3, 0x41FC
	  stw       r6, 0x340(r30)
	  stw       r5, 0x34C(r30)
	  stw       r4, 0x348(r30)
	  stw       r4, 0x344(r30)
	  stw       r6, 0x3D8(r30)
	  stw       r6, 0x3D4(r30)
	  stw       r6, 0x3E0(r30)
	  stw       r6, 0x3DC(r30)
	  stw       r0, 0x328(r30)
	  stw       r6, 0x178(r30)
	  lwz       r0, 0x278(r3)
	  cmpwi     r0, 0
	  ble-      .loc_0xE0
	  rlwinm    r31,r0,10,0,21
	  li        r3, 0x1C
	  bl        -0x19D0F8
	  mr.       r0, r3
	  beq-      .loc_0xC8
	  mr        r4, r31
	  bl        0x7C6A0
	  mr        r0, r3

	.loc_0xC8:
	  stw       r0, 0x178(r30)
	  lwz       r3, 0x178(r30)
	  bl        0x7C768
	  lwz       r3, 0x178(r30)
	  lwz       r3, 0x4(r3)
	  bl        -0xDD284

	.loc_0xE0:
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
 * Address:	801C0FE8
 * Size:	0000CC
 */
void Game::VsGameSection::__dt(void)
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
	  beq-      .loc_0xB0
	  lis       r3, 0x804B
	  addi      r0, r3, 0x61E8
	  stw       r0, 0x0(r30)
	  lwz       r3, 0x178(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0x7C
	  lwz       r3, 0x4(r3)
	  bl        -0xDD168

	.loc_0x40:
	  bl        .loc_0xCC
	  rlwinm.   r0,r3,0,24,31
	  bne+      .loc_0x40
	  bl        -0xDBAF8
	  lwz       r3, -0x7714(r13)
	  lwz       r4, 0x8(r3)
	  lwz       r3, 0x4(r3)
	  mr        r5, r4
	  bl        -0xDD4A8
	  lwz       r3, -0x7714(r13)
	  lwz       r3, 0x4(r3)
	  bl        -0xDD438
	  lwz       r3, -0x7714(r13)
	  lwz       r3, 0x4(r3)
	  bl        -0xDD31C

	.loc_0x7C:
	  addic.    r0, r30, 0x184
	  beq-      .loc_0x94
	  addic.    r3, r30, 0x1E0
	  beq-      .loc_0x94
	  li        r4, 0
	  bl        -0x19A8A8

	.loc_0x94:
	  mr        r3, r30
	  li        r4, 0
	  bl        -0x75EA8
	  extsh.    r0, r31
	  ble-      .loc_0xB0
	  mr        r3, r30
	  bl        -0x19CFE0

	.loc_0xB0:
	  lwz       r0, 0x14(r1)
	  mr        r3, r30
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr

	.loc_0xCC:
	*/
}

/*
 * --INFO--
 * Address:	801C10B4
 * Size:	00005C
 */
void VSFifo::isGPActive()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  subi      r4, r13, 0x69A0
	  subi      r6, r13, 0x69A0
	  stw       r0, 0x14(r1)
	  subi      r7, r13, 0x69A0
	  subi      r3, r13, 0x69A0
	  addi      r4, r4, 0x1
	  stw       r31, 0xC(r1)
	  subi      r31, r13, 0x69A0
	  addi      r31, r31, 0x2
	  addi      r6, r6, 0x3
	  mr        r5, r31
	  addi      r7, r7, 0x4
	  bl        -0xDD134
	  lbz       r0, 0x0(r31)
	  lwz       r31, 0xC(r1)
	  cntlzw    r0, r0
	  rlwinm    r3,r0,27,5,31
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801C1110
 * Size:	000034
 */
void Game::VsGameSection::section_fadeout(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r4, r3
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x180(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x38(r12)
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
 * Address:	801C1144
 * Size:	000004
 */
void Game::VsGame::State::on_section_fadeout((Game::VsGameSection*)) { }

/*
 * --INFO--
 * Address:	801C1148
 * Size:	000090
 */
void Game::VsGameSection::startMainBgm(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r3, 0x8048
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  subi      r31, r3, 0x68
	  stw       r30, 0x8(r1)
	  lwz       r0, -0x6780(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x3C
	  addi      r3, r31, 0x1C
	  addi      r5, r31, 0x28
	  li        r4, 0x1D3
	  crclr     6, 0x6
	  bl        -0x196B40

	.loc_0x3C:
	  lwz       r30, -0x6780(r13)
	  lwz       r0, 0x4(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0x60
	  addi      r3, r31, 0x34
	  addi      r5, r31, 0x28
	  li        r4, 0xC7
	  crclr     6, 0x6
	  bl        -0x196B64

	.loc_0x60:
	  lwz       r3, 0x4(r30)
	  lwz       r3, 0x4(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
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
 * Address:	801C11D8
 * Size:	00020C
 */
void Game::VsGameSection::onInit(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f1, -0x4EB8(r2)
	  stw       r0, 0x14(r1)
	  lfs       f0, -0x4EB4(r2)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  stfs      f1, 0x350(r3)
	  stfs      f0, 0x354(r3)
	  stfs      f1, 0x1F4(r3)
	  stfs      f1, 0x1F0(r3)
	  bl        0x36BC
	  mr        r3, r31
	  bl        0x379C
	  lbz       r0, 0x174(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x54
	  lwz       r3, -0x6C18(r13)
	  li        r0, 0x1
	  stw       r0, 0x44(r3)
	  b         .loc_0x60

	.loc_0x54:
	  lwz       r3, -0x6C18(r13)
	  li        r0, 0x2
	  stw       r0, 0x44(r3)

	.loc_0x60:
	  lwz       r4, -0x6C18(r13)
	  li        r5, 0x1
	  li        r0, 0
	  lis       r3, 0x8048
	  stb       r5, 0x48(r4)
	  subi      r4, r3, 0x28
	  addi      r3, r31, 0x224
	  stb       r0, 0x11C(r31)
	  stw       r0, 0x1FC(r31)
	  stw       r0, 0x3BC(r31)
	  stb       r0, 0x204(r31)
	  crclr     6, 0x6
	  bl        -0xF9E30
	  addi      r3, r31, 0x2A4
	  subi      r4, r2, 0x4EB0
	  crclr     6, 0x6
	  bl        -0xF9E40
	  mr        r3, r31
	  bl        -0x710D4
	  li        r3, 0x94
	  bl        -0x19D3E4
	  mr.       r0, r3
	  beq-      .loc_0xC4
	  bl        0x6C630
	  mr        r0, r3

	.loc_0xC4:
	  stw       r0, 0x20C(r31)
	  mr        r3, r31
	  lwz       r4, 0x20C(r31)
	  bl        -0x5C2F8
	  li        r3, 0xCC
	  bl        -0x19D40C
	  mr.       r0, r3
	  beq-      .loc_0xEC
	  bl        0x6C8AC
	  mr        r0, r3

	.loc_0xEC:
	  stw       r0, 0x210(r31)
	  mr        r3, r31
	  lwz       r4, 0x210(r31)
	  bl        -0x5C320
	  mr        r3, r31
	  bl        0x7F0
	  mr        r3, r31
	  bl        0x898
	  li        r3, 0x1C
	  bl        -0x19D444
	  cmplwi    r3, 0
	  beq-      .loc_0x13C
	  lis       r5, 0x804B
	  lis       r4, 0x804B
	  addi      r0, r5, 0x61D0
	  li        r5, -0x1
	  stw       r0, 0x0(r3)
	  addi      r0, r4, 0x6320
	  stw       r5, 0x18(r3)
	  stw       r0, 0x0(r3)

	.loc_0x13C:
	  stw       r3, 0x17C(r31)
	  mr        r4, r31
	  lwz       r3, 0x17C(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  bl        0x510
	  lwz       r3, 0x17C(r31)
	  mr        r4, r31
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  li        r0, 0
	  lfs       f0, -0x4EB8(r2)
	  stw       r0, 0x324(r31)
	  li        r3, 0x5C
	  stfs      f0, 0x35C(r31)
	  stfs      f0, 0x358(r31)
	  stfs      f0, 0x374(r31)
	  stfs      f0, 0x370(r31)
	  stfs      f0, 0x364(r31)
	  stfs      f0, 0x360(r31)
	  stfs      f0, 0x36C(r31)
	  stfs      f0, 0x368(r31)
	  stfs      f0, 0x37C(r31)
	  stfs      f0, 0x378(r31)
	  stw       r0, 0x384(r31)
	  stw       r0, 0x380(r31)
	  bl        -0x19D4F4
	  mr.       r0, r3
	  beq-      .loc_0x1D4
	  bl        0x5CF50
	  mr        r0, r3

	.loc_0x1D4:
	  stw       r0, -0x6A50(r13)
	  li        r0, 0
	  stw       r0, 0x388(r31)
	  stw       r0, 0x38C(r31)
	  stw       r0, 0x390(r31)
	  stw       r0, 0x394(r31)
	  stw       r0, 0x398(r31)
	  stw       r0, 0x39C(r31)
	  stw       r0, 0x3A0(r31)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801C13E4
 * Size:	000034
 */
void start__Q24Game36StateMachine<Game::VsGameSection>
FPQ24Game13VsGameSectioniPQ24Game8StateArg(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  li        r0, 0
	  stw       r0, 0x180(r4)
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
 * Address:	801C1418
 * Size:	000008
 */
void Game::VsGameSection::getCurrFloor(void)
{
	/*
	.loc_0x0:
	  lwz       r3, 0x324(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801C1420
 * Size:	0001B8
 */
void Game::VsGameSection::doUpdate(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stfd      f31, 0x30(r1)
	  psq_st    f31,0x38(r1),0,0
	  stw       r31, 0x2C(r1)
	  stw       r30, 0x28(r1)
	  stw       r29, 0x24(r1)
	  mr        r29, r3
	  lbz       r0, 0x204(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x40
	  li        r0, 0
	  li        r3, 0
	  stb       r0, 0x34(r29)
	  b         .loc_0x194

	.loc_0x40:
	  lwz       r3, 0x17C(r29)
	  mr        r4, r29
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, -0x6C18(r13)
	  lwz       r0, 0x44(r3)
	  cmpwi     r0, 0x1
	  bne-      .loc_0x190
	  li        r3, 0x1
	  bl        0xF9D4
	  lwz       r4, 0x344(r29)
	  subi      r0, r4, 0x3
	  sub       r31, r3, r0
	  li        r3, 0
	  bl        0xF9C0
	  lwz       r4, 0x348(r29)
	  cmpwi     r31, 0
	  subi      r0, r4, 0x3
	  sub       r30, r3, r0
	  bge-      .loc_0x9C
	  li        r31, 0x1

	.loc_0x9C:
	  cmpwi     r30, 0
	  bge-      .loc_0xA8
	  li        r30, 0x1

	.loc_0xA8:
	  cmpwi     r31, 0
	  beq-      .loc_0xB8
	  cmpwi     r30, 0
	  bne-      .loc_0xE0

	.loc_0xB8:
	  cmpwi     r31, 0
	  bne-      .loc_0xCC
	  lfs       f0, -0x4EA8(r2)
	  stfs      f0, 0x354(r29)
	  b         .loc_0x190

	.loc_0xCC:
	  cmpwi     r30, 0
	  bne-      .loc_0x190
	  lfs       f0, -0x4EB8(r2)
	  stfs      f0, 0x354(r29)
	  b         .loc_0x190

	.loc_0xE0:
	  cmpw      r30, r31
	  ble-      .loc_0x124
	  lis       r3, 0x4330
	  xoris     r4, r30, 0x8000
	  xoris     r0, r31, 0x8000
	  stw       r4, 0xC(r1)
	  lfd       f2, -0x4E98(r2)
	  stw       r3, 0x8(r1)
	  lfd       f0, 0x8(r1)
	  stw       r0, 0x14(r1)
	  fsubs     f1, f0, f2
	  stw       r3, 0x10(r1)
	  lfd       f0, 0x10(r1)
	  fsubs     f0, f0, f2
	  fdivs     f0, f1, f0
	  stfs      f0, 0x350(r29)
	  b         .loc_0x15C

	.loc_0x124:
	  lis       r3, 0x4330
	  xoris     r4, r31, 0x8000
	  xoris     r0, r30, 0x8000
	  stw       r4, 0x14(r1)
	  lfd       f2, -0x4E98(r2)
	  stw       r3, 0x10(r1)
	  lfd       f0, 0x10(r1)
	  stw       r0, 0xC(r1)
	  fsubs     f1, f0, f2
	  stw       r3, 0x8(r1)
	  lfd       f0, 0x8(r1)
	  fsubs     f0, f0, f2
	  fdivs     f0, f1, f0
	  stfs      f0, 0x350(r29)

	.loc_0x15C:
	  lfd       f1, -0x4EA0(r2)
	  bl        -0xF1B94
	  frsp      f31, f1
	  lfs       f1, 0x350(r29)
	  bl        -0xF1BA0
	  frsp      f0, f1
	  cmpw      r31, r30
	  fdivs     f0, f0, f31
	  stfs      f0, 0x354(r29)
	  bge-      .loc_0x190
	  lfs       f0, 0x354(r29)
	  fneg      f0, f0
	  stfs      f0, 0x354(r29)

	.loc_0x190:
	  lbz       r3, 0x34(r29)

	.loc_0x194:
	  psq_l     f31,0x38(r1),0,0
	  lwz       r0, 0x44(r1)
	  lfd       f31, 0x30(r1)
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  lwz       r29, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801C15D8
 * Size:	00003C
 */
void Game::VsGameSection::pre2dDraw((Graphics&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r5, r3
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x180(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x2C
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl

	.loc_0x2C:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801C1614
 * Size:	000004
 */
void Game::VsGame::State::pre2dDraw((Graphics&, Game::VsGameSection*)) { }

/*
 * --INFO--
 * Address:	801C1618
 * Size:	000050
 */
void Game::VsGameSection::doDraw((Graphics&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r6, r3
	  mr        r5, r4
	  stw       r0, 0x14(r1)
	  lbz       r0, 0x204(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x40
	  lwz       r3, 0x180(r6)
	  cmplwi    r3, 0
	  beq-      .loc_0x40
	  lwz       r12, 0x0(r3)
	  mr        r4, r6
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl

	.loc_0x40:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801C1668
 * Size:	0001DC
 */
void Game::VsGameSection::onSetSoundScene(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x60(r1)
	  mflr      r0
	  lis       r4, 0x8048
	  stw       r0, 0x64(r1)
	  stw       r31, 0x5C(r1)
	  subi      r31, r4, 0x68
	  stw       r30, 0x58(r1)
	  mr        r30, r3
	  addi      r3, r1, 0x8
	  bl        0x173E24
	  lis       r5, 0x804B
	  lis       r3, 0x1
	  li        r4, 0
	  li        r0, 0xFF
	  addi      r5, r5, 0x1250
	  subi      r3, r3, 0x1
	  stw       r5, 0x8(r1)
	  lwz       r5, -0x6C18(r13)
	  stw       r4, 0x40(r1)
	  stw       r4, 0x44(r1)
	  stb       r4, 0x48(r1)
	  stw       r3, 0x4C(r1)
	  stb       r0, 0x50(r1)
	  stb       r0, 0x51(r1)
	  lwz       r0, 0x44(r5)
	  cmpwi     r0, 0x2
	  beq-      .loc_0x74
	  cmpwi     r0, 0x3
	  bne-      .loc_0x78

	.loc_0x74:
	  li        r4, 0x1

	.loc_0x78:
	  rlwinm.   r0,r4,0,24,31
	  beq-      .loc_0xAC
	  li        r0, 0x6
	  mr        r3, r30
	  stb       r0, 0xE(r1)
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x58(r12)
	  mtctr     r12
	  bctrl
	  stb       r3, 0x48(r1)
	  lwz       r0, 0x338(r30)
	  stb       r0, 0x51(r1)
	  b         .loc_0xBC

	.loc_0xAC:
	  li        r0, 0x7
	  stb       r0, 0xE(r1)
	  lwz       r0, 0x340(r30)
	  stb       r0, 0x48(r1)

	.loc_0xBC:
	  lwz       r4, -0x6CF8(r13)
	  li        r3, 0
	  lwz       r5, -0x6C18(r13)
	  lwz       r4, 0x2C(r4)
	  lwz       r0, 0x22C(r4)
	  stw       r0, 0x40(r1)
	  stw       r3, 0x44(r1)
	  lwz       r0, 0x44(r5)
	  cmpwi     r0, 0x1
	  beq-      .loc_0xEC
	  cmpwi     r0, 0x3
	  bne-      .loc_0xF0

	.loc_0xEC:
	  li        r3, 0x1

	.loc_0xF0:
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x10C
	  addi      r3, r1, 0x8
	  li        r4, 0
	  li        r5, 0x1
	  bl        0x173D7C
	  b         .loc_0x11C

	.loc_0x10C:
	  addi      r3, r1, 0x8
	  li        r4, 0x1
	  li        r5, 0x1
	  bl        0x173D68

	.loc_0x11C:
	  mr        r3, r30
	  addi      r4, r1, 0x8
	  bl        -0x737F0
	  lwz       r0, -0x6780(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x148
	  addi      r3, r31, 0x1C
	  addi      r5, r31, 0x28
	  li        r4, 0x1D3
	  crclr     6, 0x6
	  bl        -0x19716C

	.loc_0x148:
	  lwz       r3, -0x6780(r13)
	  addi      r4, r1, 0x8
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, -0x6780(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x180
	  addi      r3, r31, 0x1C
	  addi      r5, r31, 0x28
	  li        r4, 0x1D3
	  crclr     6, 0x6
	  bl        -0x1971A4

	.loc_0x180:
	  lwz       r30, -0x6780(r13)
	  lwz       r0, 0x4(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0x1A4
	  addi      r3, r31, 0x34
	  addi      r5, r31, 0x28
	  li        r4, 0xC7
	  crclr     6, 0x6
	  bl        -0x1971C8

	.loc_0x1A4:
	  lwz       r3, 0x4(r30)
	  lwz       r3, 0x4(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, -0x6D20(r13)
	  bl        -0x66F58
	  lwz       r0, 0x64(r1)
	  lwz       r31, 0x5C(r1)
	  lwz       r30, 0x58(r1)
	  mtlr      r0
	  addi      r1, r1, 0x60
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801C1844
 * Size:	00005C
 */
void Game::VsGameSection::initPlayData(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, -0x6B70(r13)
	  bl        0x2526C
	  lwz       r3, -0x6B70(r13)
	  li        r4, 0x1
	  li        r5, 0x1
	  bl        0x2562C
	  lwz       r4, -0x6D20(r13)
	  lwz       r3, -0x6B70(r13)
	  lwz       r4, 0xC8(r4)
	  lfs       f0, 0x9D0(r4)
	  stfs      f0, 0x24(r3)
	  lwz       r4, -0x6D20(r13)
	  lwz       r3, -0x6B70(r13)
	  lwz       r4, 0xC8(r4)
	  lfs       f0, 0x9D0(r4)
	  stfs      f0, 0x28(r3)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801C18A0
 * Size:	000168
 */
void Game::VsGameSection::onSetupFloatMemory(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x60(r1)
	  mflr      r0
	  lis       r4, 0x8048
	  stw       r0, 0x64(r1)
	  li        r0, 0
	  stmw      r26, 0x48(r1)
	  mr        r26, r3
	  subi      r31, r4, 0x68
	  li        r3, 0x28
	  stw       r0, -0x6E28(r13)
	  bl        -0x19DA24
	  mr.       r0, r3
	  beq-      .loc_0x3C
	  bl        0x73A1C
	  mr        r0, r3

	.loc_0x3C:
	  stw       r0, 0x32C(r26)
	  li        r3, 0x114
	  bl        -0x19DA40
	  mr.       r0, r3
	  beq-      .loc_0x60
	  lwz       r5, 0x32C(r26)
	  mr        r4, r26
	  bl        0x73C14
	  mr        r0, r3

	.loc_0x60:
	  stw       r0, 0x330(r26)
	  lwz       r3, 0x330(r26)
	  bl        0x73DA4
	  lwz       r6, 0x50(r31)
	  lis       r4, 0x804B
	  lwz       r5, 0x54(r31)
	  lis       r3, 0x804B
	  lwz       r0, 0x58(r31)
	  addi      r30, r1, 0xC
	  stw       r6, 0xC(r1)
	  subi      r27, r4, 0x5D0C
	  lwz       r4, -0x7B80(r13)
	  subi      r28, r3, 0x5D48
	  stw       r5, 0x10(r1)
	  li        r26, 0
	  lwz       r3, -0x7B84(r13)
	  stw       r0, 0x14(r1)
	  lwz       r0, -0x7B7C(r13)
	  stw       r4, 0xC(r1)
	  stw       r3, 0x10(r1)
	  stw       r0, 0x14(r1)

	.loc_0xB4:
	  stw       r27, 0x18(r1)
	  li        r7, 0
	  li        r0, -0x1
	  li        r6, 0xFF
	  li        r5, 0x1
	  stw       r28, 0x18(r1)
	  lwz       r3, 0x0(r30)
	  addi      r4, r1, 0x8
	  stb       r7, 0x34(r1)
	  sth       r7, 0x2C(r1)
	  stb       r6, 0x2E(r1)
	  stw       r7, 0x30(r1)
	  stb       r7, 0x2F(r1)
	  stb       r5, 0x1C(r1)
	  stb       r7, 0x35(r1)
	  stw       r0, 0x3C(r1)
	  stw       r0, 0x38(r1)
	  stb       r7, 0x36(r1)
	  stb       r7, 0x37(r1)
	  bl        0x664A0
	  mr.       r29, r3
	  bne-      .loc_0x120
	  addi      r3, r31, 0x5C
	  addi      r5, r31, 0x70
	  li        r4, 0x388
	  crclr     6, 0x6
	  bl        -0x19737C

	.loc_0x120:
	  lha       r3, 0x258(r29)
	  addi      r4, r1, 0x18
	  lwz       r0, 0x8(r1)
	  stw       r3, 0x28(r1)
	  lwz       r3, -0x6CE0(r13)
	  lwz       r5, 0x40(r29)
	  stw       r5, 0x20(r1)
	  stb       r0, 0x2E(r1)
	  bl        -0x54304
	  addi      r26, r26, 0x1
	  addi      r30, r30, 0x4
	  cmpwi     r26, 0x3
	  blt+      .loc_0xB4
	  lmw       r26, 0x48(r1)
	  lwz       r0, 0x64(r1)
	  mtlr      r0
	  addi      r1, r1, 0x60
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801C1A08
 * Size:	0000A0
 */
void Game::VsGameSection::postSetupFloatMemory(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  lwz       r4, -0x6C18(r13)
	  lwz       r0, 0x44(r4)
	  cmpwi     r0, 0x1
	  bne-      .loc_0x84
	  lfs       f0, -0x4EB8(r2)
	  li        r0, 0
	  addi      r4, r1, 0x8
	  stfs      f0, 0x35C(r31)
	  stfs      f0, 0x358(r31)
	  stw       r0, 0x384(r31)
	  stw       r0, 0x380(r31)
	  stfs      f0, 0x8(r1)
	  stfs      f0, 0xC(r1)
	  stfs      f0, 0x10(r1)
	  bl        0x250C
	  li        r0, 0
	  mr        r3, r31
	  stw       r0, 0x388(r31)
	  li        r4, 0x7
	  stw       r0, 0x38C(r31)
	  stw       r0, 0x390(r31)
	  stw       r0, 0x394(r31)
	  stw       r0, 0x398(r31)
	  stw       r0, 0x39C(r31)
	  stw       r0, 0x3A0(r31)
	  bl        0x2334
	  mr        r3, r31
	  bl        0x1AA4

	.loc_0x84:
	  mr        r3, r31
	  bl        -0x70590
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801C1AA8
 * Size:	000020
 */
void Game::VsGameSection::onClearHeap(void)
{
	/*
	.loc_0x0:
	  lwz       r4, -0x6C18(r13)
	  lwz       r0, 0x44(r4)
	  cmpwi     r0, 0x1
	  bnelr-
	  li        r0, 0
	  stw       r0, 0x3D0(r3)
	  stw       r0, 0x3CC(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801C1AC8
 * Size:	0000B0
 */
void Game::VsGameSection::loadChallengeStageList(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x440(r1)
	  mflr      r0
	  lis       r4, 0x8051
	  stw       r0, 0x444(r1)
	  addi      r5, r4, 0x41FC
	  li        r0, 0
	  lis       r4, 0x8048
	  stw       r31, 0x43C(r1)
	  mr        r31, r3
	  addi      r3, r4, 0x3C
	  stw       r0, 0x8(r1)
	  lwz       r0, 0x228(r5)
	  cmpwi     r0, 0
	  beq-      .loc_0x40
	  lis       r3, 0x8048
	  addi      r3, r3, 0x14

	.loc_0x40:
	  li        r4, 0
	  li        r5, 0
	  li        r6, 0
	  li        r7, 0
	  li        r8, 0x2
	  li        r9, 0
	  li        r10, 0
	  bl        -0x1A299C
	  cmplwi    r3, 0
	  beq-      .loc_0x9C
	  mr        r4, r3
	  addi      r3, r1, 0x10
	  li        r5, -0x1
	  bl        0x253DBC
	  li        r0, 0x1
	  cmpwi     r0, 0x1
	  stw       r0, 0x1C(r1)
	  bne-      .loc_0x90
	  li        r0, 0
	  stw       r0, 0x424(r1)

	.loc_0x90:
	  lwz       r3, 0x20C(r31)
	  addi      r4, r1, 0x10
	  bl        0x6BE78

	.loc_0x9C:
	  lwz       r0, 0x444(r1)
	  lwz       r31, 0x43C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x440
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801C1B78
 * Size:	000098
 */
void Game::VsGameSection::loadVsStageList(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x440(r1)
	  mflr      r0
	  lis       r4, 0x8048
	  li        r5, 0
	  stw       r0, 0x444(r1)
	  li        r0, 0
	  li        r6, 0
	  li        r7, 0
	  stw       r31, 0x43C(r1)
	  mr        r31, r3
	  li        r8, 0x2
	  li        r9, 0
	  stw       r0, 0x8(r1)
	  addi      r0, r4, 0x60
	  li        r4, 0
	  li        r10, 0
	  mr        r3, r0
	  bl        -0x1A2A34
	  cmplwi    r3, 0
	  beq-      .loc_0x84
	  mr        r4, r3
	  addi      r3, r1, 0x10
	  li        r5, -0x1
	  bl        0x253D24
	  li        r0, 0x1
	  cmpwi     r0, 0x1
	  stw       r0, 0x1C(r1)
	  bne-      .loc_0x78
	  li        r0, 0
	  stw       r0, 0x424(r1)

	.loc_0x78:
	  lwz       r3, 0x210(r31)
	  addi      r4, r1, 0x10
	  bl        0x6C08C

	.loc_0x84:
	  lwz       r0, 0x444(r1)
	  lwz       r31, 0x43C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x440
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801C1C10
 * Size:	000044
 */
void Game::VsGameSection::gmOrimaDown((int))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r6, r3
	  mr        r5, r4
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x180(r3)
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
 * Address:	801C1C54
 * Size:	000004
 */
void Game::VsGame::State::onOrimaDown((Game::VsGameSection*, int)) { }

/*
 * --INFO--
 * Address:	801C1C58
 * Size:	000004
 */
void Game::VsGameSection::gmPikminZero(void) { }

/*
 * --INFO--
 * Address:	801C1C5C
 * Size:	00003C
 */
void Game::VsGameSection::goNextFloor((Game::ItemHole::Item*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r6, r3
	  mr        r5, r4
	  stw       r0, 0x14(r1)
	  mr        r4, r6
	  lwz       r3, 0x180(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x34(r12)
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
 * Address:	801C1C98
 * Size:	000004
 */
void Game::VsGame::State::onNextFloor((Game::VsGameSection*,
                                       Game::ItemHole::Item*))
{
}

/*
 * --INFO--
 * Address:	801C1C9C
 * Size:	0001D8
 */
void Game::VsGameSection::openCaveMoreMenu((Game::ItemHole::Item*, Controller*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stw       r31, 0x3C(r1)
	  mr        r31, r4
	  stw       r30, 0x38(r1)
	  mr        r30, r3
	  mr        r4, r30
	  stw       r29, 0x34(r1)
	  mr        r29, r5
	  lwz       r3, 0x180(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1BC
	  lwz       r4, -0x6C18(r13)
	  li        r3, 0
	  lwz       r0, 0x44(r4)
	  cmpwi     r0, 0x1
	  beq-      .loc_0x60
	  cmpwi     r0, 0x3
	  bne-      .loc_0x64

	.loc_0x60:
	  li        r3, 0x1

	.loc_0x64:
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x84
	  cmplwi    r29, 0
	  beq-      .loc_0x84
	  lwz       r3, -0x6560(r13)
	  mr        r4, r29
	  bl        0x23A360
	  b         .loc_0x90

	.loc_0x84:
	  lwz       r3, -0x6560(r13)
	  lwz       r4, 0x10C(r30)
	  bl        0x23A350

	.loc_0x90:
	  lis       r3, 0x804B
	  li        r11, 0
	  addi      r0, r3, 0x1148
	  li        r8, 0x1
	  lis       r3, 0x745F
	  lis       r6, 0x804B
	  addi      r7, r3, 0x3031
	  stw       r0, 0x8(r1)
	  li        r10, 0x18
	  li        r9, 0x45
	  addi      r0, r6, 0x1130
	  stw       r11, 0x28(r1)
	  lis       r5, 0x804B
	  lis       r4, 0x3270
	  stw       r0, 0x8(r1)
	  addi      r6, r5, 0x1118
	  addi      r0, r4, 0x5F63
	  li        r5, 0x4
	  stw       r10, 0x10(r1)
	  li        r4, 0xA
	  lis       r3, 0x8051
	  stw       r9, 0x14(r1)
	  stw       r8, 0x18(r1)
	  stw       r7, 0x20(r1)
	  stw       r11, 0xC(r1)
	  stb       r8, 0x27(r1)
	  stw       r8, 0x1C(r1)
	  stb       r11, 0x24(r1)
	  stb       r11, 0x25(r1)
	  stw       r6, 0x8(r1)
	  stb       r11, 0x2C(r1)
	  stb       r11, 0x2D(r1)
	  stw       r11, 0x28(r1)
	  stw       r5, 0x10(r1)
	  stw       r5, 0x14(r1)
	  stw       r4, 0x18(r1)
	  stw       r0, 0x20(r1)
	  lwzu      r12, 0x260C(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr.       r29, r3
	  ble-      .loc_0x16C
	  li        r0, 0x1
	  li        r3, -0x1
	  stb       r0, 0x2C(r1)
	  bl        0xF07C
	  cmpw      r29, r3
	  bne-      .loc_0x160
	  li        r0, 0x1
	  stb       r0, 0x2D(r1)
	  b         .loc_0x178

	.loc_0x160:
	  li        r0, 0
	  stb       r0, 0x2D(r1)
	  b         .loc_0x178

	.loc_0x16C:
	  li        r0, 0
	  stb       r0, 0x2D(r1)
	  stb       r0, 0x2C(r1)

	.loc_0x178:
	  lwz       r3, -0x6560(r13)
	  addi      r4, r1, 0x8
	  bl        0x23C220
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x1BC
	  stw       r31, 0x1FC(r30)
	  lis       r3, 0x8048
	  addi      r5, r3, 0x78
	  li        r4, 0x1
	  lwz       r3, -0x6C18(r13)
	  li        r6, 0x3
	  bl        -0xCEAC
	  lis       r4, 0x8048
	  lwz       r3, -0x6C18(r13)
	  addi      r5, r4, 0x78
	  li        r4, 0x1
	  bl        -0xCED0

	.loc_0x1BC:
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
 * Address:	801C1E74
 * Size:	000008
 */
void Game::VsGame::State::goingToCave((Game::VsGameSection*))
{
	/*
	.loc_0x0:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801C1E7C
 * Size:	0001B0
 */
void Game::VsGameSection::openKanketuMenu((Game::ItemBigFountain::Item*,
                                           Controller*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stw       r31, 0x3C(r1)
	  mr        r31, r4
	  stw       r30, 0x38(r1)
	  mr        r30, r3
	  li        r3, 0
	  stw       r29, 0x34(r1)
	  lwz       r6, -0x6C18(r13)
	  lwz       r0, 0x44(r6)
	  cmpwi     r0, 0x1
	  beq-      .loc_0x3C
	  cmpwi     r0, 0x3
	  bne-      .loc_0x40

	.loc_0x3C:
	  li        r3, 0x1

	.loc_0x40:
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x60
	  cmplwi    r5, 0
	  beq-      .loc_0x60
	  lwz       r3, -0x6560(r13)
	  mr        r4, r5
	  bl        0x23A1A4
	  b         .loc_0x6C

	.loc_0x60:
	  lwz       r3, -0x6560(r13)
	  lwz       r4, 0x10C(r30)
	  bl        0x23A194

	.loc_0x6C:
	  lis       r3, 0x804B
	  li        r9, 0
	  addi      r0, r3, 0x1148
	  li        r7, 0x1
	  lis       r3, 0x804B
	  stw       r0, 0x8(r1)
	  addi      r5, r3, 0x1130
	  li        r0, 0x18
	  li        r8, 0x45
	  stw       r9, 0x28(r1)
	  lis       r3, 0x745F
	  lis       r4, 0x804B
	  addi      r6, r3, 0x3031
	  stw       r5, 0x8(r1)
	  addi      r5, r4, 0x1100
	  li        r4, 0x4
	  stw       r0, 0x10(r1)
	  li        r0, 0xA
	  lis       r3, 0x8051
	  stw       r8, 0x14(r1)
	  stw       r7, 0x18(r1)
	  stw       r9, 0xC(r1)
	  stb       r7, 0x27(r1)
	  stw       r7, 0x1C(r1)
	  stw       r6, 0x20(r1)
	  stb       r9, 0x24(r1)
	  stb       r9, 0x25(r1)
	  stw       r5, 0x8(r1)
	  stb       r9, 0x2C(r1)
	  stb       r9, 0x2D(r1)
	  stb       r9, 0x2E(r1)
	  stw       r9, 0x28(r1)
	  stw       r4, 0x10(r1)
	  stw       r4, 0x14(r1)
	  stw       r0, 0x18(r1)
	  lwzu      r12, 0x260C(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr.       r29, r3
	  ble-      .loc_0x140
	  li        r0, 0x1
	  li        r3, -0x1
	  stb       r0, 0x2C(r1)
	  bl        0xEEC8
	  cmpw      r29, r3
	  bne-      .loc_0x134
	  li        r0, 0x1
	  stb       r0, 0x2D(r1)
	  b         .loc_0x14C

	.loc_0x134:
	  li        r0, 0
	  stb       r0, 0x2D(r1)
	  b         .loc_0x14C

	.loc_0x140:
	  li        r0, 0
	  stb       r0, 0x2D(r1)
	  stb       r0, 0x2C(r1)

	.loc_0x14C:
	  lwz       r3, -0x6560(r13)
	  addi      r4, r1, 0x8
	  bl        0x23BEDC
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x194
	  stw       r31, 0x200(r30)
	  li        r4, 0x1
	  subi      r5, r2, 0x4E90
	  li        r6, 0x3
	  lbz       r0, 0x1F8(r30)
	  ori       r0, r0, 0x4
	  stb       r0, 0x1F8(r30)
	  lwz       r3, -0x6C18(r13)
	  bl        -0xD068
	  lwz       r3, -0x6C18(r13)
	  li        r4, 0x1
	  subi      r5, r2, 0x4E90
	  bl        -0xD088

	.loc_0x194:
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
 * Address:	801C202C
 * Size:	000014
 */
void Game::VsGameSection::clearCaveMenus(void)
{
	/*
	.loc_0x0:
	  li        r0, 0
	  stb       r0, 0x1F8(r3)
	  stw       r0, 0x1FC(r3)
	  stw       r0, 0x200(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801C2040
 * Size:	0002A8
 */
void Game::VsGameSection::updateCaveMenus(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  mflr      r0
	  stw       r0, 0x54(r1)
	  stw       r31, 0x4C(r1)
	  mr        r31, r3
	  lis       r3, 0x8048
	  stw       r30, 0x48(r1)
	  subi      r30, r3, 0x68
	  lbz       r4, 0x1F8(r31)
	  rlwinm.   r0,r4,0,30,30
	  beq-      .loc_0x13C
	  lwz       r3, -0x6560(r13)
	  bl        0x23C0CC
	  cmpwi     r3, 0x2
	  beq-      .loc_0xF4
	  bge-      .loc_0x50
	  cmpwi     r3, 0
	  beq-      .loc_0x28C
	  bge-      .loc_0x5C
	  b         .loc_0x28C

	.loc_0x50:
	  cmpwi     r3, 0x4
	  bge-      .loc_0x28C
	  b         .loc_0x128

	.loc_0x5C:
	  lwz       r3, -0x6D20(r13)
	  li        r4, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, 0x2A0(r3)
	  li        r4, 0x1
	  lwz       r3, -0x6B70(r13)
	  stfs      f0, 0x24(r3)
	  lwz       r3, -0x6D20(r13)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, 0x2A0(r3)
	  addi      r5, r30, 0xEC
	  lwz       r3, -0x6B70(r13)
	  li        r4, 0
	  li        r6, 0x3
	  stfs      f0, 0x28(r3)
	  lwz       r3, -0x6C18(r13)
	  bl        -0xD160
	  lwz       r3, -0x6C18(r13)
	  addi      r5, r30, 0xEC
	  li        r4, 0
	  bl        -0xD180
	  lbz       r0, 0x1F8(r31)
	  mr        r3, r31
	  rlwinm    r0,r0,0,31,29
	  stb       r0, 0x1F8(r31)
	  lwz       r12, 0x0(r31)
	  lwz       r4, 0x1FC(r31)
	  lwz       r12, 0x6C(r12)
	  mtctr     r12
	  bctrl
	  li        r3, 0x1
	  b         .loc_0x290

	.loc_0xF4:
	  lwz       r3, -0x6C18(r13)
	  li        r4, 0
	  subi      r5, r2, 0x4E88
	  li        r6, 0x3
	  bl        -0xD1B0
	  lwz       r3, -0x6C18(r13)
	  li        r4, 0
	  subi      r5, r2, 0x4E88
	  bl        -0xD1D0
	  lbz       r0, 0x1F8(r31)
	  rlwinm    r0,r0,0,31,29
	  stb       r0, 0x1F8(r31)
	  b         .loc_0x28C

	.loc_0x128:
	  lwz       r3, -0x6C18(r13)
	  addi      r5, r30, 0xF8
	  li        r4, 0
	  bl        -0xD1F0
	  b         .loc_0x28C

	.loc_0x13C:
	  rlwinm.   r0,r4,0,29,29
	  beq-      .loc_0x28C
	  lwz       r3, -0x6560(r13)
	  bl        0x23BE18
	  cmpwi     r3, 0x2
	  beq-      .loc_0x25C
	  bge-      .loc_0x28C
	  cmpwi     r3, 0
	  beq-      .loc_0x28C
	  bge-      .loc_0x16C
	  b         .loc_0x28C
	  b         .loc_0x28C

	.loc_0x16C:
	  lwz       r3, -0x6C18(r13)
	  li        r4, 0
	  subi      r5, r2, 0x4E80
	  li        r6, 0x3
	  bl        -0xD228
	  lwz       r3, -0x6C18(r13)
	  li        r4, 0
	  subi      r5, r2, 0x4E80
	  bl        -0xD248
	  lbz       r3, 0x1F8(r31)
	  addi      r4, r30, 0x104
	  lfs       f0, -0x4EB8(r2)
	  li        r0, 0
	  rlwinm    r5,r3,0,30,28
	  addi      r3, r1, 0x8
	  stb       r5, 0x1F8(r31)
	  lwz       r5, 0xC8(r31)
	  stw       r4, 0x14(r1)
	  stw       r0, 0x18(r1)
	  stw       r5, 0x20(r1)
	  stfs      f0, 0x2C(r1)
	  stfs      f0, 0x30(r1)
	  stfs      f0, 0x34(r1)
	  stfs      f0, 0x38(r1)
	  stw       r0, 0x3C(r1)
	  stw       r0, 0x24(r1)
	  stw       r0, 0x1C(r1)
	  stw       r0, 0x40(r1)
	  stw       r0, 0x28(r1)
	  stw       r0, 0x44(r1)
	  lwz       r4, 0x200(r31)
	  lwz       r12, 0x0(r4)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x8(r1)
	  lfs       f1, 0xC(r1)
	  lfs       f0, 0x10(r1)
	  stfs      f2, 0x2C(r1)
	  stfs      f1, 0x30(r1)
	  stfs      f0, 0x34(r1)
	  lwz       r3, 0x200(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  stfs      f1, 0x38(r1)
	  li        r4, 0
	  lwz       r0, 0xCC(r31)
	  stw       r0, 0x24(r1)
	  lwz       r3, 0x200(r31)
	  bl        -0x86828
	  lwz       r0, 0x200(r31)
	  addi      r4, r1, 0x14
	  lwz       r3, -0x64AC(r13)
	  stw       r0, 0x194(r3)
	  lwz       r3, -0x64AC(r13)
	  bl        0x26A740
	  li        r3, 0x1
	  b         .loc_0x290

	.loc_0x25C:
	  lwz       r3, -0x6C18(r13)
	  li        r4, 0
	  subi      r5, r2, 0x4E78
	  li        r6, 0x3
	  bl        -0xD318
	  lwz       r3, -0x6C18(r13)
	  li        r4, 0
	  subi      r5, r2, 0x4E78
	  bl        -0xD338
	  lbz       r0, 0x1F8(r31)
	  rlwinm    r0,r0,0,30,28
	  stb       r0, 0x1F8(r31)

	.loc_0x28C:
	  li        r3, 0

	.loc_0x290:
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
 * Address:	801C22E8
 * Size:	000008
 */
void Game::ItemBigFountain::Item::getFaceDir(void)
{
	/*
	.loc_0x0:
	  lfs       f1, 0x1EC(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801C22F0
 * Size:	0000DC
 */
void Game::VsGameSection::onMovieStart((Game::MovieConfig*, unsigned long,
                                        unsigned long))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r7, 0x8048
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r6
	  stw       r30, 0x18(r1)
	  mr        r30, r5
	  stw       r29, 0x14(r1)
	  mr        r29, r4
	  addi      r4, r7, 0xAC
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  mr        r3, r29
	  bl        0x26F5A4
	  lwz       r4, -0x6C18(r13)
	  li        r3, 0
	  lwz       r0, 0x44(r4)
	  cmpwi     r0, 0x1
	  beq-      .loc_0x58
	  cmpwi     r0, 0x3
	  bne-      .loc_0x5C

	.loc_0x58:
	  li        r3, 0x1

	.loc_0x5C:
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x88
	  cmplwi    r31, 0x1
	  bne-      .loc_0x7C
	  mr        r3, r28
	  li        r4, 0x1
	  bl        -0x74A4C
	  b         .loc_0x88

	.loc_0x7C:
	  mr        r3, r28
	  li        r4, 0
	  bl        -0x74A5C

	.loc_0x88:
	  mr        r3, r28
	  bl        -0x745F4
	  lwz       r3, 0x180(r28)
	  cmplwi    r3, 0
	  beq-      .loc_0xBC
	  lwz       r12, 0x0(r3)
	  mr        r4, r28
	  mr        r5, r29
	  mr        r6, r30
	  lwz       r12, 0x2C(r12)
	  mr        r7, r31
	  mtctr     r12
	  bctrl

	.loc_0xBC:
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
 * Address:	801C23CC
 * Size:	000004
 */
void Game::VsGame::State::onMovieStart((Game::VsGameSection*,
                                        Game::MovieConfig*, unsigned long,
                                        unsigned long))
{
}

/*
 * --INFO--
 * Address:	801C23D0
 * Size:	000054
 */
void Game::VsGameSection::onMovieDone((Game::MovieConfig*, unsigned long,
                                       unsigned long))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r9, r3
	  mr        r8, r4
	  stw       r0, 0x14(r1)
	  mr        r0, r5
	  mr        r7, r6
	  lwz       r3, 0x180(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x44
	  lwz       r12, 0x0(r3)
	  mr        r4, r9
	  mr        r5, r8
	  mr        r6, r0
	  lwz       r12, 0x30(r12)
	  mtctr     r12
	  bctrl

	.loc_0x44:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801C2424
 * Size:	000004
 */
void Game::VsGame::State::onMovieDone((Game::VsGameSection*, Game::MovieConfig*,
                                       unsigned long, unsigned long))
{
}

/*
 * --INFO--
 * Address:	801C2428
 * Size:	000434
 */
void Game::VsGameSection::createFallPikmins((Game::PikiContainer&, int))
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
	  stfd      f23, 0xD0(r1)
	  psq_st    f23,0xD8(r1),0,0
	  stfd      f22, 0xC0(r1)
	  psq_st    f22,0xC8(r1),0,0
	  stfd      f21, 0xB0(r1)
	  psq_st    f21,0xB8(r1),0,0
	  stfd      f20, 0xA0(r1)
	  psq_st    f20,0xA8(r1),0,0
	  stmw      r25, 0x84(r1)
	  lwz       r3, -0x6CF8(r13)
	  mr        r26, r4
	  addi      r4, r1, 0x38
	  lwz       r12, 0x4(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lis       r4, 0x8048
	  mr        r3, r26
	  addi      r4, r4, 0xBC
	  bl        0x2EEE8
	  lwz       r3, -0x6D20(r13)
	  li        r4, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  mr        r0, r3
	  addi      r3, r1, 0x8
	  mr        r4, r0
	  lwz       r12, 0x0(r4)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x8(r1)
	  addi      r4, r1, 0x38
	  lfs       f1, 0xC(r1)
	  lfs       f0, 0x10(r1)
	  stfs      f2, 0x38(r1)
	  lwz       r3, -0x6CF8(r13)
	  stfs      f1, 0x3C(r1)
	  stfs      f0, 0x40(r1)
	  lwz       r12, 0x4(r3)
	  lwz       r12, 0x28(r12)
	  mtctr     r12
	  bctrl
	  lis       r3, 0x8050
	  stfs      f1, 0x3C(r1)
	  lfd       f22, -0x4E98(r2)
	  addi      r31, r3, 0x71A0
	  lfs       f23, -0x4E70(r2)
	  li        r29, 0
	  lfs       f24, -0x4E68(r2)
	  lis       r30, 0x4330
	  lfs       f25, -0x4E6C(r2)
	  lfs       f26, -0x4E64(r2)
	  lfs       f27, -0x4E60(r2)
	  lfs       f28, -0x4E58(r2)
	  lfs       f29, -0x4E5C(r2)
	  lfs       f30, -0x4EB8(r2)
	  lfs       f31, -0x4E54(r2)

	.loc_0x13C:
	  li        r28, 0

	.loc_0x140:
	  li        r27, 0
	  b         .loc_0x384

	.loc_0x148:
	  bl        -0xF8FD0
	  xoris     r0, r3, 0x8000
	  stw       r30, 0x48(r1)
	  stw       r0, 0x4C(r1)
	  lfd       f0, 0x48(r1)
	  fsubs     f0, f0, f22
	  fdivs     f0, f0, f23
	  fmadds    f21, f24, f0, f25
	  bl        -0xF8FF0
	  xoris     r0, r3, 0x8000
	  stw       r30, 0x50(r1)
	  stw       r0, 0x54(r1)
	  lfd       f0, 0x50(r1)
	  fsubs     f0, f0, f22
	  fdivs     f0, f0, f23
	  fmuls     f20, f26, f0
	  bl        -0xF9010
	  xoris     r0, r3, 0x8000
	  stw       r30, 0x58(r1)
	  fmr       f1, f20
	  stw       r0, 0x5C(r1)
	  fcmpo     cr0, f20, f30
	  lfd       f0, 0x58(r1)
	  fsubs     f0, f0, f22
	  fdivs     f0, f0, f23
	  fmadds    f0, f28, f0, f29
	  fadds     f2, f27, f0
	  bge-      .loc_0x1BC
	  fneg      f1, f20

	.loc_0x1BC:
	  fmuls     f0, f1, f31
	  fcmpo     cr0, f20, f30
	  fctiwz    f0, f0
	  stfd      f0, 0x60(r1)
	  lwz       r0, 0x64(r1)
	  rlwinm    r0,r0,3,18,28
	  add       r3, r31, r0
	  lfs       f0, 0x4(r3)
	  fmuls     f1, f21, f0
	  bge-      .loc_0x210
	  lfs       f0, -0x4E50(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fmuls     f0, f20, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x68(r1)
	  lwz       r0, 0x6C(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r3, r0
	  fneg      f0, f0
	  b         .loc_0x230

	.loc_0x210:
	  fmuls     f0, f20, f31
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fctiwz    f0, f0
	  stfd      f0, 0x70(r1)
	  lwz       r0, 0x74(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r3, r0

	.loc_0x230:
	  fmuls     f0, f21, f0
	  stfs      f2, 0x30(r1)
	  lwz       r3, -0x6D0C(r13)
	  stfs      f1, 0x34(r1)
	  stfs      f0, 0x2C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x7C(r12)
	  mtctr     r12
	  bctrl
	  lfs       f1, 0x2C(r1)
	  mr.       r25, r3
	  lfs       f0, 0x38(r1)
	  lfs       f3, 0x30(r1)
	  fadds     f4, f1, f0
	  lfs       f2, 0x3C(r1)
	  lfs       f1, 0x34(r1)
	  lfs       f0, 0x40(r1)
	  fadds     f2, f3, f2
	  stfs      f4, 0x2C(r1)
	  fadds     f0, f1, f0
	  stfs      f2, 0x30(r1)
	  stfs      f0, 0x34(r1)
	  beq-      .loc_0x380
	  lis       r5, 0x804B
	  lis       r4, 0x804B
	  subi      r0, r5, 0x5D0C
	  li        r5, 0xF
	  stw       r0, 0x20(r1)
	  addi      r6, r4, 0x10F4
	  li        r0, 0
	  addi      r4, r1, 0x20
	  stw       r6, 0x20(r1)
	  stw       r5, 0x24(r1)
	  stw       r0, 0x28(r1)
	  bl        -0x87718
	  bl        -0xF9144
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x74(r1)
	  mr        r3, r25
	  lfd       f3, -0x4E98(r2)
	  addi      r4, r1, 0x2C
	  stw       r0, 0x70(r1)
	  li        r5, 0
	  lfs       f1, -0x4E70(r2)
	  lfd       f2, 0x70(r1)
	  lfs       f0, -0x4E64(r2)
	  fsubs     f2, f2, f3
	  fdivs     f1, f2, f1
	  fmuls     f0, f0, f1
	  stfs      f0, 0x1FC(r25)
	  bl        -0x8757C
	  mr        r3, r25
	  mr        r4, r29
	  bl        -0x78170
	  mr        r3, r25
	  mr        r4, r28
	  bl        -0x77FCC
	  bl        -0xF91A0
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x6C(r1)
	  mr        r3, r25
	  lfs       f2, -0x4EB8(r2)
	  addi      r4, r1, 0x14
	  stw       r0, 0x68(r1)
	  lfd       f1, -0x4E98(r2)
	  lfd       f0, 0x68(r1)
	  lfs       f3, -0x4E70(r2)
	  fsubs     f4, f0, f1
	  lfs       f1, -0x4E48(r2)
	  lfs       f0, -0x4E4C(r2)
	  stfs      f2, 0x14(r1)
	  fdivs     f3, f4, f3
	  stfs      f2, 0x1C(r1)
	  fnmadds   f0, f1, f3, f0
	  stfs      f0, 0x18(r1)
	  lwz       r12, 0x0(r25)
	  lwz       r12, 0x68(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r25
	  li        r4, 0
	  bl        -0x86D54

	.loc_0x380:
	  addi      r27, r27, 0x1

	.loc_0x384:
	  mr        r3, r26
	  mr        r4, r29
	  mr        r5, r28
	  bl        0x2EC64
	  lwz       r0, 0x0(r3)
	  cmpw      r27, r0
	  blt+      .loc_0x148
	  addi      r28, r28, 0x1
	  cmpwi     r28, 0x3
	  blt+      .loc_0x140
	  addi      r29, r29, 0x1
	  cmpwi     r29, 0x7
	  blt+      .loc_0x13C
	  mr        r3, r26
	  bl        0x2EAA8
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
	  psq_l     f23,0xD8(r1),0,0
	  lfd       f23, 0xD0(r1)
	  psq_l     f22,0xC8(r1),0,0
	  lfd       f22, 0xC0(r1)
	  psq_l     f21,0xB8(r1),0,0
	  lfd       f21, 0xB0(r1)
	  psq_l     f20,0xA8(r1),0,0
	  lfd       f20, 0xA0(r1)
	  lmw       r25, 0x84(r1)
	  lwz       r0, 0x164(r1)
	  mtlr      r0
	  addi      r1, r1, 0x160
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801C285C
 * Size:	000564
 */
void Game::VsGameSection::createVsPikmins(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x1B0(r1)
	  mflr      r0
	  stw       r0, 0x1B4(r1)
	  stfd      f31, 0x1A0(r1)
	  psq_st    f31,0x1A8(r1),0,0
	  stfd      f30, 0x190(r1)
	  psq_st    f30,0x198(r1),0,0
	  stfd      f29, 0x180(r1)
	  psq_st    f29,0x188(r1),0,0
	  stfd      f28, 0x170(r1)
	  psq_st    f28,0x178(r1),0,0
	  stfd      f27, 0x160(r1)
	  psq_st    f27,0x168(r1),0,0
	  stfd      f26, 0x150(r1)
	  psq_st    f26,0x158(r1),0,0
	  stfd      f25, 0x140(r1)
	  psq_st    f25,0x148(r1),0,0
	  stfd      f24, 0x130(r1)
	  psq_st    f24,0x138(r1),0,0
	  stfd      f23, 0x120(r1)
	  psq_st    f23,0x128(r1),0,0
	  stfd      f22, 0x110(r1)
	  psq_st    f22,0x118(r1),0,0
	  stfd      f21, 0x100(r1)
	  psq_st    f21,0x108(r1),0,0
	  stfd      f20, 0xF0(r1)
	  psq_st    f20,0xF8(r1),0,0
	  stfd      f19, 0xE0(r1)
	  psq_st    f19,0xE8(r1),0,0
	  stfd      f18, 0xD0(r1)
	  psq_st    f18,0xD8(r1),0,0
	  stfd      f17, 0xC0(r1)
	  psq_st    f17,0xC8(r1),0,0
	  stfd      f16, 0xB0(r1)
	  psq_st    f16,0xB8(r1),0,0
	  stmw      r24, 0x90(r1)
	  mr        r25, r3
	  lwz       r3, -0x6CD0(r13)
	  li        r4, 0x1
	  bl        -0x46E5C
	  mr.       r26, r3
	  bne-      .loc_0xC4
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  subi      r3, r3, 0xC
	  li        r4, 0x545
	  subi      r5, r5, 0x40
	  crclr     6, 0x6
	  bl        -0x1982DC

	.loc_0xC4:
	  mr        r4, r26
	  addi      r3, r1, 0x28
	  lwz       r12, 0x0(r26)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f25, 0x28(r1)
	  li        r4, 0
	  lfs       f24, 0x2C(r1)
	  lfs       f23, 0x30(r1)
	  lwz       r3, -0x6CD0(r13)
	  bl        -0x46EB0
	  mr.       r26, r3
	  bne-      .loc_0x118
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  subi      r3, r3, 0xC
	  li        r4, 0x54A
	  subi      r5, r5, 0x40
	  crclr     6, 0x6
	  bl        -0x198330

	.loc_0x118:
	  mr        r4, r26
	  addi      r3, r1, 0x1C
	  lwz       r12, 0x0(r26)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  addi      r29, r25, 0x214
	  lfs       f22, 0x1C(r1)
	  lfs       f21, 0x20(r1)
	  mr        r3, r29
	  lfs       f20, 0x24(r1)
	  bl        0x2E8EC
	  mr        r3, r29
	  li        r4, 0x1
	  li        r5, 0
	  bl        0x2EA6C
	  lwz       r0, 0x344(r25)
	  li        r4, 0
	  li        r5, 0
	  mulli     r0, r0, 0x5
	  stw       r0, 0x0(r3)
	  mr        r3, r29
	  bl        0x2EA50
	  lwz       r0, 0x348(r25)
	  li        r28, 0
	  mulli     r0, r0, 0x5
	  stw       r0, 0x0(r3)

	.loc_0x184:
	  cmpwi     r28, 0x1
	  bne-      .loc_0x19C
	  fmr       f19, f25
	  fmr       f18, f24
	  fmr       f17, f23
	  b         .loc_0x1B0

	.loc_0x19C:
	  cmpwi     r28, 0
	  bne-      .loc_0x378
	  fmr       f19, f22
	  fmr       f18, f21
	  fmr       f17, f20

	.loc_0x1B0:
	  lis       r3, 0x8050
	  lfd       f26, -0x4E98(r2)
	  lfs       f27, -0x4E70(r2)
	  addi      r31, r3, 0x71A0
	  lfs       f28, -0x4E44(r2)
	  li        r27, 0
	  lfs       f29, -0x4E64(r2)
	  lis       r30, 0x4330
	  lfs       f30, -0x4EB8(r2)
	  lfs       f31, -0x4E54(r2)

	.loc_0x1D8:
	  li        r26, 0
	  b         .loc_0x350

	.loc_0x1E0:
	  bl        -0xF949C
	  xoris     r0, r3, 0x8000
	  stw       r30, 0x68(r1)
	  stw       r0, 0x6C(r1)
	  lfd       f0, 0x68(r1)
	  fsubs     f0, f0, f26
	  fdivs     f0, f0, f27
	  fmuls     f16, f28, f0
	  bl        -0xF94BC
	  xoris     r0, r3, 0x8000
	  stw       r30, 0x70(r1)
	  stw       r0, 0x74(r1)
	  lfd       f0, 0x70(r1)
	  fsubs     f0, f0, f26
	  fdivs     f0, f0, f27
	  fmuls     f2, f29, f0
	  fmr       f0, f2
	  fcmpo     cr0, f2, f30
	  bge-      .loc_0x230
	  fneg      f0, f2

	.loc_0x230:
	  fmuls     f0, f0, f31
	  fcmpo     cr0, f2, f30
	  fctiwz    f0, f0
	  stfd      f0, 0x78(r1)
	  lwz       r0, 0x7C(r1)
	  rlwinm    r0,r0,3,18,28
	  add       r3, r31, r0
	  lfs       f0, 0x4(r3)
	  fmuls     f1, f16, f0
	  bge-      .loc_0x284
	  lfs       f0, -0x4E50(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fmuls     f0, f2, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x80(r1)
	  lwz       r0, 0x84(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r3, r0
	  fneg      f0, f0
	  b         .loc_0x2A4

	.loc_0x284:
	  fmuls     f0, f2, f31
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fctiwz    f0, f0
	  stfd      f0, 0x88(r1)
	  lwz       r0, 0x8C(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r3, r0

	.loc_0x2A4:
	  fmuls     f0, f16, f0
	  stfs      f30, 0x60(r1)
	  lwz       r3, -0x6D0C(r13)
	  stfs      f1, 0x64(r1)
	  stfs      f0, 0x5C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x7C(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x5C(r1)
	  mr.       r24, r3
	  lfs       f1, 0x60(r1)
	  lfs       f0, 0x64(r1)
	  fadds     f2, f2, f19
	  fadds     f1, f1, f18
	  fadds     f0, f0, f17
	  stfs      f2, 0x5C(r1)
	  stfs      f1, 0x60(r1)
	  stfs      f0, 0x64(r1)
	  beq-      .loc_0x34C
	  lis       r5, 0x804B
	  lis       r4, 0x804B
	  subi      r0, r5, 0x5D0C
	  li        r5, -0x1
	  stw       r0, 0x50(r1)
	  addi      r6, r4, 0x10F4
	  li        r0, 0
	  addi      r4, r1, 0x50
	  stw       r6, 0x50(r1)
	  stw       r5, 0x54(r1)
	  stw       r0, 0x58(r1)
	  bl        -0x87BB4
	  mr        r3, r24
	  addi      r4, r1, 0x5C
	  li        r5, 0
	  bl        -0x879E4
	  mr        r3, r24
	  mr        r4, r28
	  bl        -0x785D8
	  mr        r3, r24
	  mr        r4, r27
	  bl        -0x78434

	.loc_0x34C:
	  addi      r26, r26, 0x1

	.loc_0x350:
	  mr        r3, r29
	  mr        r4, r28
	  mr        r5, r27
	  bl        0x2E864
	  lwz       r0, 0x0(r3)
	  cmpw      r26, r0
	  blt+      .loc_0x1E0
	  addi      r27, r27, 0x1
	  cmpwi     r27, 0x3
	  blt+      .loc_0x1D8

	.loc_0x378:
	  addi      r28, r28, 0x1
	  cmpwi     r28, 0x7
	  blt+      .loc_0x184
	  lwz       r3, 0x2B08(r2)
	  addi      r26, r1, 0x8
	  lwz       r0, 0x2B0C(r2)
	  li        r24, 0
	  stw       r3, 0x8(r1)
	  lwz       r3, -0x7B80(r13)
	  stw       r0, 0xC(r1)
	  lwz       r0, -0x7B84(r13)
	  stw       r3, 0x8(r1)
	  stw       r0, 0xC(r1)

	.loc_0x3AC:
	  lwz       r3, -0x6CD0(r13)
	  subfic    r4, r24, 0x1
	  bl        -0x47174
	  mr        r0, r3
	  addi      r3, r1, 0x40
	  mr        r27, r0
	  bl        -0x562B8
	  addi      r3, r1, 0x40
	  bl        -0x562A8
	  b         .loc_0x450

	.loc_0x3D4:
	  addi      r3, r1, 0x40
	  bl        -0x56268
	  mr        r0, r3
	  lwz       r3, 0x0(r26)
	  mr        r28, r0
	  lwz       r4, 0x35C(r28)
	  lwz       r4, 0x40(r4)
	  bl        -0xF858C
	  cmpwi     r3, 0
	  bne-      .loc_0x448
	  mr        r4, r27
	  addi      r3, r1, 0x10
	  bl        -0x4AC5C
	  lfs       f2, 0x10(r1)
	  mr        r3, r28
	  lfs       f1, 0x14(r1)
	  lfs       f0, 0x18(r1)
	  stfs      f2, 0x34(r1)
	  stfs      f1, 0x38(r1)
	  stfs      f0, 0x3C(r1)
	  bl        -0x5C2AC
	  lfs       f2, -0x4EB4(r2)
	  mr        r3, r28
	  lfs       f0, 0x38(r1)
	  addi      r4, r1, 0x34
	  li        r5, 0
	  fmadds    f0, f2, f1, f0
	  stfs      f0, 0x38(r1)
	  bl        -0x87AF8

	.loc_0x448:
	  addi      r3, r1, 0x40
	  bl        -0x56274

	.loc_0x450:
	  addi      r3, r1, 0x40
	  bl        -0x561BC
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x3D4
	  addi      r24, r24, 0x1
	  addi      r26, r26, 0x4
	  cmpwi     r24, 0x2
	  blt+      .loc_0x3AC
	  lwz       r3, -0x6D20(r13)
	  li        r4, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  lwz       r5, 0x33C(r25)
	  li        r4, 0x1
	  lwz       r0, 0x68(r5)
	  stw       r0, 0x25C(r3)
	  lwz       r5, 0x33C(r25)
	  lwz       r0, 0x64(r5)
	  stw       r0, 0x260(r3)
	  lwz       r3, -0x6D20(r13)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x33C(r25)
	  lwz       r0, 0x68(r4)
	  stw       r0, 0x25C(r3)
	  lwz       r4, 0x33C(r25)
	  lwz       r0, 0x64(r4)
	  stw       r0, 0x260(r3)
	  psq_l     f31,0x1A8(r1),0,0
	  lfd       f31, 0x1A0(r1)
	  psq_l     f30,0x198(r1),0,0
	  lfd       f30, 0x190(r1)
	  psq_l     f29,0x188(r1),0,0
	  lfd       f29, 0x180(r1)
	  psq_l     f28,0x178(r1),0,0
	  lfd       f28, 0x170(r1)
	  psq_l     f27,0x168(r1),0,0
	  lfd       f27, 0x160(r1)
	  psq_l     f26,0x158(r1),0,0
	  lfd       f26, 0x150(r1)
	  psq_l     f25,0x148(r1),0,0
	  lfd       f25, 0x140(r1)
	  psq_l     f24,0x138(r1),0,0
	  lfd       f24, 0x130(r1)
	  psq_l     f23,0x128(r1),0,0
	  lfd       f23, 0x120(r1)
	  psq_l     f22,0x118(r1),0,0
	  lfd       f22, 0x110(r1)
	  psq_l     f21,0x108(r1),0,0
	  lfd       f21, 0x100(r1)
	  psq_l     f20,0xF8(r1),0,0
	  lfd       f20, 0xF0(r1)
	  psq_l     f19,0xE8(r1),0,0
	  lfd       f19, 0xE0(r1)
	  psq_l     f18,0xD8(r1),0,0
	  lfd       f18, 0xD0(r1)
	  psq_l     f17,0xC8(r1),0,0
	  lfd       f17, 0xC0(r1)
	  psq_l     f16,0xB8(r1),0,0
	  lfd       f16, 0xB0(r1)
	  lmw       r24, 0x90(r1)
	  lwz       r0, 0x1B4(r1)
	  mtlr      r0
	  addi      r1, r1, 0x1B0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801C2DC0
 * Size:	000010
 */
void Game::VsGameSection::addChallengeScore((int))
{
	/*
	.loc_0x0:
	  lwz       r0, 0x3BC(r3)
	  add       r0, r0, r4
	  stw       r0, 0x3BC(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801C2DD0
 * Size:	00006C
 */
void Game::VsGameSection::sendMessage((Game::GameMessage&))
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
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  mr        r4, r30
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x54
	  mr        r3, r31
	  mr        r4, r30
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl

	.loc_0x54:
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
 * Address:	801C2E3C
 * Size:	000040
 */
void Game::GameMessageVsGetDoping::actVs((Game::VsGameSection*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r5, r3
	  mr        r3, r4
	  stw       r0, 0x14(r1)
	  lwz       r4, 0x4(r5)
	  lwz       r5, 0x8(r5)
	  bl        0x1A80
	  lwz       r4, 0x0(r3)
	  addi      r0, r4, 0x1
	  stw       r0, 0x0(r3)
	  li        r3, 0x1
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801C2E7C
 * Size:	00004C
 */
void Game::GameMessageVsBattleFinished::actVs((Game::VsGameSection*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r5, r3
	  stw       r0, 0x14(r1)
	  lwz       r0, 0x180(r4)
	  cmplwi    r0, 0
	  beq-      .loc_0x38
	  mr        r3, r0
	  lwz       r5, 0x4(r5)
	  lwz       r12, 0x0(r3)
	  li        r6, 0
	  lwz       r12, 0x40(r12)
	  mtctr     r12
	  bctrl

	.loc_0x38:
	  lwz       r0, 0x14(r1)
	  li        r3, 0x1
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801C2EC8
 * Size:	000004
 */
void Game::VsGame::State::onBattleFinished((Game::VsGameSection*, int, bool)) {
}

/*
 * --INFO--
 * Address:	801C2ECC
 * Size:	00004C
 */
void Game::GameMessageVsRedOrSuckStart::actVs((Game::VsGameSection*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r6, r3
	  stw       r0, 0x14(r1)
	  lwz       r0, 0x180(r4)
	  cmplwi    r0, 0
	  beq-      .loc_0x38
	  mr        r3, r0
	  lwz       r5, 0x4(r6)
	  lwz       r12, 0x0(r3)
	  lbz       r6, 0x8(r6)
	  lwz       r12, 0x44(r12)
	  mtctr     r12
	  bctrl

	.loc_0x38:
	  lwz       r0, 0x14(r1)
	  li        r3, 0x1
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801C2F18
 * Size:	000004
 */
void Game::VsGame::State::onRedOrBlueSuckStart((Game::VsGameSection*, int,
                                                bool))
{
}

/*
 * --INFO--
 * Address:	801C2F1C
 * Size:	0000B8
 */
void Game::GameMessageVsGetOtakara::actVs((Game::VsGameSection*))
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
	  lwz       r0, 0x180(r4)
	  cmplwi    r0, 0
	  beq-      .loc_0x9C
	  lwz       r0, 0x4(r30)
	  rlwinm    r0,r0,2,0,29
	  add       r4, r31, r0
	  lwz       r3, 0x3D4(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x3D4(r4)
	  lwz       r3, 0x4(r30)
	  rlwinm    r0,r3,2,0,29
	  cntlzw    r4, r3
	  add       r3, r31, r0
	  lwz       r0, 0x3D4(r3)
	  rlwinm    r3,r4,27,5,31
	  subfic    r0, r0, 0x3
	  cntlzw    r0, r0
	  rlwinm    r4,r0,27,5,31
	  bl        0x2A02CC
	  lwz       r5, 0x4(r30)
	  rlwinm    r0,r5,2,0,29
	  add       r3, r31, r0
	  lwz       r0, 0x3D4(r3)
	  cmpwi     r0, 0x4
	  blt-      .loc_0x9C
	  lwz       r3, 0x180(r31)
	  mr        r4, r31
	  li        r6, 0x1
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x40(r12)
	  mtctr     r12
	  bctrl

	.loc_0x9C:
	  lwz       r0, 0x14(r1)
	  li        r3, 0x1
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801C2FD4
 * Size:	000034
 */
void Game::GameMessageVsAddEnemy::actVs((Game::VsGameSection*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r5, r3
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x32C(r4)
	  lwz       r4, 0x4(r5)
	  lwz       r5, 0x8(r5)
	  bl        0x723A4
	  lwz       r0, 0x14(r1)
	  li        r3, 0x1
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000A4
 */
void Game::GameMessageVsBirthTeki::actVs((Game::VsGameSection*))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801C3008
 * Size:	000118
 */
void Game::GameMessagePelletBorn::actVs((Game::VsGameSection*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r5, 0x4(r3)
	  lbz       r0, 0x32C(r5)
	  cmplwi    r0, 0x6
	  bne-      .loc_0x104
	  lwz       r0, 0x388(r4)
	  cmplw     r0, r5
	  bne-      .loc_0x30
	  li        r3, 0
	  b         .loc_0x108

	.loc_0x30:
	  lwz       r0, 0x38C(r4)
	  cmplw     r0, r5
	  bne-      .loc_0x44
	  li        r3, 0
	  b         .loc_0x108

	.loc_0x44:
	  addi      r3, r4, 0x8
	  lwz       r0, 0x390(r4)
	  cmplw     r0, r5
	  bne-      .loc_0x5C
	  li        r3, 0
	  b         .loc_0x108

	.loc_0x5C:
	  lwz       r0, 0x38C(r3)
	  cmplw     r0, r5
	  bne-      .loc_0x70
	  li        r3, 0
	  b         .loc_0x108

	.loc_0x70:
	  lwz       r0, 0x390(r3)
	  cmplw     r0, r5
	  bne-      .loc_0x84
	  li        r3, 0
	  b         .loc_0x108

	.loc_0x84:
	  lwz       r0, 0x394(r3)
	  cmplw     r0, r5
	  bne-      .loc_0x98
	  li        r3, 0
	  b         .loc_0x108

	.loc_0x98:
	  lwz       r0, 0x398(r3)
	  cmplw     r0, r5
	  bne-      .loc_0xAC
	  li        r3, 0
	  b         .loc_0x108

	.loc_0xAC:
	  li        r0, 0x7
	  mr        r3, r4
	  li        r6, 0
	  mtctr     r0

	.loc_0xBC:
	  lwz       r0, 0x388(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0xDC
	  rlwinm    r0,r6,2,0,29
	  li        r3, 0x1
	  add       r4, r4, r0
	  stw       r5, 0x388(r4)
	  b         .loc_0x108

	.loc_0xDC:
	  addi      r3, r3, 0x4
	  addi      r6, r6, 0x1
	  bdnz+     .loc_0xBC
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  subi      r3, r3, 0xC
	  li        r4, 0x638
	  addi      r5, r5, 0xD0
	  crclr     6, 0x6
	  bl        -0x198AC8

	.loc_0x104:
	  li        r3, 0

	.loc_0x108:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801C3120
 * Size:	00008C
 */
void Game::GameMessagePelletDead::actVs((Game::VsGameSection*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r5, 0x4(r3)
	  lbz       r0, 0x32C(r5)
	  cmplwi    r0, 0x6
	  bne-      .loc_0x78
	  li        r0, 0x7
	  mr        r3, r4
	  li        r6, 0
	  mtctr     r0

	.loc_0x2C:
	  lwz       r0, 0x388(r3)
	  cmplw     r0, r5
	  bne-      .loc_0x50
	  rlwinm    r0,r6,2,0,29
	  li        r5, 0
	  add       r4, r4, r0
	  li        r3, 0x1
	  stw       r5, 0x388(r4)
	  b         .loc_0x7C

	.loc_0x50:
	  addi      r3, r3, 0x4
	  addi      r6, r6, 0x1
	  bdnz+     .loc_0x2C
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  subi      r3, r3, 0xC
	  li        r4, 0x651
	  addi      r5, r5, 0xEC
	  crclr     6, 0x6
	  bl        -0x198B54

	.loc_0x78:
	  li        r3, 0

	.loc_0x7C:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801C31AC
 * Size:	000228
 */
void Game::GameMessageVsBirthTekiTreasure::actVs((Game::VsGameSection*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0xB0(r1)
	  mflr      r0
	  stw       r0, 0xB4(r1)
	  stfd      f31, 0xA0(r1)
	  psq_st    f31,0xA8(r1),0,0
	  stmw      r26, 0x88(r1)
	  mr        r30, r3
	  mr        r31, r4
	  lfs       f1, 0x4(r3)
	  addi      r3, r1, 0x18
	  lfs       f0, -0x4E40(r2)
	  addi      r4, r1, 0x8
	  stfs      f1, 0x8(r1)
	  li        r29, 0
	  li        r28, 0
	  li        r27, 0
	  lfs       f1, 0x8(r30)
	  stfs      f1, 0xC(r1)
	  lfs       f1, 0xC(r30)
	  stfs      f1, 0x10(r1)
	  stfs      f0, 0x14(r1)
	  bl        0x6B1A0
	  addi      r3, r1, 0x38
	  addi      r4, r1, 0x18
	  bl        0x6B1D4
	  addi      r3, r1, 0x38
	  bl        0x6B248
	  b         .loc_0xD8

	.loc_0x70:
	  addi      r3, r1, 0x38
	  bl        0x6B324
	  lwz       r12, 0x0(r3)
	  mr        r26, r3
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xD0
	  mr        r3, r26
	  lwz       r12, 0x0(r26)
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xD0
	  lbz       r0, 0x2B8(r26)
	  cmpwi     r0, 0x1
	  bne-      .loc_0xC4
	  addi      r28, r28, 0x1
	  b         .loc_0xD0

	.loc_0xC4:
	  cmpwi     r0, 0
	  bne-      .loc_0xD0
	  addi      r27, r27, 0x1

	.loc_0xD0:
	  addi      r3, r1, 0x38
	  bl        0x6B280

	.loc_0xD8:
	  addi      r3, r1, 0x38
	  bl        0x6B2AC
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x70
	  cmpw      r27, r28
	  ble-      .loc_0xF4
	  li        r29, 0x1

	.loc_0xF4:
	  subfic    r0, r29, 0x1
	  rlwinm    r3,r29,2,0,29
	  rlwinm    r0,r0,2,0,29
	  lfs       f0, -0x4E38(r2)
	  add       r4, r31, r3
	  lfs       f31, -0x4E3C(r2)
	  add       r3, r31, r0
	  lfs       f2, 0x370(r4)
	  lfs       f1, 0x370(r3)
	  fsubs     f2, f2, f1
	  fcmpo     cr0, f2, f0
	  ble-      .loc_0x138
	  lwz       r3, 0x10(r30)
	  fmr       f31, f0
	  addi      r0, r3, 0x2
	  stw       r0, 0x10(r30)
	  b         .loc_0x1A0

	.loc_0x138:
	  lfs       f0, -0x4EB4(r2)
	  fcmpo     cr0, f2, f0
	  ble-      .loc_0x158
	  lwz       r3, 0x10(r30)
	  fmr       f31, f0
	  addi      r0, r3, 0x1
	  stw       r0, 0x10(r30)
	  b         .loc_0x1A0

	.loc_0x158:
	  lfs       f1, -0x4E34(r2)
	  fcmpo     cr0, f2, f1
	  ble-      .loc_0x168
	  b         .loc_0x1A0

	.loc_0x168:
	  lfs       f0, -0x4E30(r2)
	  fcmpo     cr0, f2, f0
	  bgt-      .loc_0x1A0
	  lfs       f0, -0x4E2C(r2)
	  fcmpo     cr0, f2, f0
	  ble-      .loc_0x188
	  fmr       f31, f1
	  b         .loc_0x1A0

	.loc_0x188:
	  lfs       f0, -0x4E28(r2)
	  fcmpo     cr0, f2, f0
	  ble-      .loc_0x19C
	  lfs       f31, -0x4E24(r2)
	  b         .loc_0x1A0

	.loc_0x19C:
	  lfs       f31, -0x4E20(r2)

	.loc_0x1A0:
	  bl        -0xF9DAC
	  xoris     r4, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r4, 0x84(r1)
	  lfd       f2, -0x4E98(r2)
	  stw       r0, 0x80(r1)
	  lfs       f0, -0x4E70(r2)
	  lfd       f1, 0x80(r1)
	  fsubs     f1, f1, f2
	  fdivs     f0, f1, f0
	  fcmpo     cr0, f0, f31
	  bgt-      .loc_0x20C
	  lwz       r3, 0x32C(r31)
	  li        r27, 0
	  lwz       r3, 0x24(r3)
	  subi      r26, r3, 0x1
	  b         .loc_0x1FC

	.loc_0x1E4:
	  lwz       r3, 0x32C(r31)
	  mr        r4, r26
	  lbz       r6, 0x14(r30)
	  addi      r5, r30, 0x4
	  bl        0x72094
	  addi      r27, r27, 0x1

	.loc_0x1FC:
	  lwz       r0, 0x10(r30)
	  cmpw      r27, r0
	  blt+      .loc_0x1E4
	  li        r3, 0x1

	.loc_0x20C:
	  psq_l     f31,0xA8(r1),0,0
	  lfd       f31, 0xA0(r1)
	  lmw       r26, 0x88(r1)
	  lwz       r0, 0xB4(r1)
	  mtlr      r0
	  addi      r1, r1, 0xB0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801C33D4
 * Size:	00001C
 */
void Game::GameMessageVsPikminDead::actVs((Game::VsGameSection*))
{
	/*
	.loc_0x0:
	  li        r0, 0
	  li        r3, 0x1
	  stb       r0, 0x205(r4)
	  lwz       r5, 0x208(r4)
	  addi      r0, r5, 0x1
	  stw       r0, 0x208(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801C33F0
 * Size:	00007C
 */
void Game::GameMessageVsGotCard::actVs((Game::VsGameSection*))
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
	  lwz       r0, 0x4(r3)
	  lwz       r4, 0x330(r4)
	  mulli     r3, r0, 0x70
	  addi      r3, r3, 0x18
	  add       r3, r4, r3
	  lbz       r0, 0x18(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x54
	  lwz       r3, 0x58(r3)
	  addis     r0, r3, 0
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0x54
	  mr        r3, r31
	  bl        0x568

	.loc_0x54:
	  lwz       r3, 0x330(r31)
	  lwz       r4, 0x4(r30)
	  bl        0x733C0
	  lwz       r0, 0x14(r1)
	  li        r3, 0x1
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801C346C
 * Size:	0000A8
 */
void Game::GameMessageVsUseCard::actVs((Game::VsGameSection*))
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
	  lwz       r3, 0x180(r4)
	  cmplwi    r3, 0
	  beq-      .loc_0x48
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x48(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x48
	  li        r3, 0
	  b         .loc_0x90

	.loc_0x48:
	  lis       r3, 0x8051
	  addi      r3, r3, 0x41FC
	  lwz       r0, 0x1B8(r3)
	  cmpwi     r0, 0
	  bne-      .loc_0x80
	  lwz       r3, 0x330(r31)
	  lwz       r4, 0x4(r30)
	  lwz       r5, 0x32C(r31)
	  bl        0x725AC
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x8C
	  mr        r3, r31
	  bl        0x4C4
	  b         .loc_0x8C

	.loc_0x80:
	  lwz       r3, 0x330(r31)
	  lwz       r4, 0x4(r30)
	  bl        0x7255C

	.loc_0x8C:
	  li        r3, 0x1

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
 * Address:	801C3514
 * Size:	000008
 */
void Game::VsGame::State::isCardUsable((Game::VsGameSection*))
{
	/*
	.loc_0x0:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000170
 */
void Game::VsGameSection::createCardPellet(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801C351C
 * Size:	000010
 */
void setComeAlive__Q24Game49FixedSizePelletMgr<Game::PelletOtakara::Object>
Fi(void)
{
	/*
	.loc_0x0:
	  lwz       r3, 0x9C(r3)
	  li        r0, 0
	  stbx      r0, r3, r4
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801C352C
 * Size:	000190
 */
void Game::VsGameSection::initCardPellets(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x60(r1)
	  mflr      r0
	  stw       r0, 0x64(r1)
	  li        r0, 0xA
	  stmw      r27, 0x4C(r1)
	  mr        r30, r3
	  stw       r0, 0x3CC(r3)
	  lis       r3, 0x8048
	  subi      r31, r3, 0x68
	  lwz       r0, 0x3CC(r30)
	  rlwinm    r3,r0,2,0,29
	  bl        -0x19F5AC
	  stw       r3, 0x3D0(r30)
	  lis       r3, 0x804B
	  subi      r0, r3, 0x5D0C
	  li        r7, 0
	  lis       r3, 0x804B
	  stw       r0, 0x18(r1)
	  li        r0, -0x1
	  li        r6, 0xFF
	  subi      r3, r3, 0x5D48
	  li        r5, 0x1
	  stw       r3, 0x18(r1)
	  addi      r4, r1, 0x8
	  lwz       r3, -0x7B88(r13)
	  stb       r7, 0x34(r1)
	  sth       r7, 0x2C(r1)
	  stb       r6, 0x2E(r1)
	  stw       r7, 0x30(r1)
	  stb       r7, 0x2F(r1)
	  stb       r5, 0x1C(r1)
	  stb       r7, 0x35(r1)
	  stw       r0, 0x3C(r1)
	  stw       r0, 0x38(r1)
	  stb       r7, 0x36(r1)
	  stb       r7, 0x37(r1)
	  bl        0x64884
	  mr.       r29, r3
	  bne-      .loc_0xB0
	  addi      r3, r31, 0x5C
	  addi      r5, r31, 0x70
	  li        r4, 0x704
	  crclr     6, 0x6
	  bl        -0x198F98

	.loc_0xB0:
	  lha       r4, 0x258(r29)
	  li        r0, 0x1
	  lwz       r3, 0x8(r1)
	  li        r27, 0
	  stw       r4, 0x28(r1)
	  li        r28, 0
	  lwz       r4, 0x40(r29)
	  stw       r4, 0x20(r1)
	  stb       r3, 0x2E(r1)
	  stw       r0, 0x38(r1)
	  stw       r0, 0x3C(r1)
	  b         .loc_0x140

	.loc_0xE0:
	  lwz       r3, -0x6CE0(r13)
	  addi      r4, r1, 0x18
	  bl        -0x56154
	  mr.       r29, r3
	  beq-      .loc_0x124
	  lfs       f0, -0x4EB8(r2)
	  addi      r4, r1, 0xC
	  li        r5, 0
	  stfs      f0, 0xC(r1)
	  stfs      f0, 0x10(r1)
	  stfs      f0, 0x14(r1)
	  lwz       r6, 0x3D0(r30)
	  stwx      r29, r6, r28
	  bl        -0x88498
	  lwz       r3, 0x3D0(r30)
	  stwx      r29, r3, r28
	  b         .loc_0x138

	.loc_0x124:
	  addi      r3, r31, 0x5C
	  addi      r5, r31, 0x16C
	  li        r4, 0x715
	  crclr     6, 0x6
	  bl        -0x199020

	.loc_0x138:
	  addi      r28, r28, 0x4
	  addi      r27, r27, 0x1

	.loc_0x140:
	  lwz       r0, 0x3CC(r30)
	  cmpw      r27, r0
	  blt+      .loc_0xE0
	  li        r27, 0
	  li        r28, 0
	  b         .loc_0x170

	.loc_0x158:
	  lwz       r3, 0x3D0(r30)
	  li        r4, 0
	  lwzx      r3, r3, r28
	  bl        -0x885A0
	  addi      r28, r28, 0x4
	  addi      r27, r27, 0x1

	.loc_0x170:
	  lwz       r0, 0x3CC(r30)
	  cmpw      r27, r0
	  blt+      .loc_0x158
	  lmw       r27, 0x4C(r1)
	  lwz       r0, 0x64(r1)
	  mtlr      r0
	  addi      r1, r1, 0x60
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801C36BC
 * Size:	000014
 */
void Game::VsGameSection::initCardGeneration(void)
{
	/*
	.loc_0x0:
	  li        r0, 0
	  lfs       f0, -0x4E1C(r2)
	  stw       r0, 0x3C4(r3)
	  stfs      f0, 0x3C8(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801C36D0
 * Size:	0002D8
 */
void Game::VsGameSection::updateCardGeneration(void)
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
	  stmw      r27, 0x1C(r1)
	  mr        r29, r3
	  lfs       f4, -0x4E3C(r2)
	  lfs       f3, 0x378(r3)
	  li        r31, 0
	  lfs       f2, 0x37C(r3)
	  li        r30, 0x5
	  lfs       f1, 0x370(r3)
	  lfs       f0, 0x374(r3)
	  fsubs     f2, f3, f2
	  lfs       f31, -0x4E18(r2)
	  fsubs     f0, f1, f0
	  lfs       f30, -0x4E14(r2)
	  fsubs     f6, f2, f0
	  fabs      f0, f6
	  frsp      f5, f0
	  fcmpo     cr0, f5, f4
	  blt-      .loc_0x108
	  fcmpo     cr0, f4, f5
	  cror      2, 0, 0x2
	  mfcr      r0
	  lis       r3, 0x4330
	  rlwinm    r0,r0,3,31,31
	  stw       r3, 0x10(r1)
	  lfd       f3, -0x4DF8(r2)
	  stw       r0, 0x14(r1)
	  lfd       f0, 0x10(r1)
	  fsubs     f0, f0, f3
	  fcmpo     cr0, f0, f31
	  bge-      .loc_0xA8
	  lfs       f31, -0x4E10(r2)
	  li        r30, 0x5
	  lfs       f30, -0x4EB4(r2)
	  li        r31, 0x1
	  b         .loc_0x108

	.loc_0xA8:
	  fcmpo     cr0, f31, f5
	  fmr       f2, f31
	  cror      2, 0, 0x2
	  mfcr      r0
	  stw       r3, 0x10(r1)
	  rlwinm    r0,r0,3,31,31
	  lfs       f0, -0x4E38(r2)
	  stw       r0, 0x14(r1)
	  lfd       f1, 0x10(r1)
	  fsubs     f1, f1, f3
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0xEC
	  fmr       f31, f4
	  li        r30, 0x6
	  fmr       f30, f2
	  li        r31, 0x1
	  b         .loc_0x108

	.loc_0xEC:
	  fcmpo     cr0, f0, f5
	  cror      2, 0, 0x2
	  bne-      .loc_0x108
	  fmr       f31, f4
	  li        r30, 0x7
	  fmr       f30, f2
	  li        r31, 0x1

	.loc_0x108:
	  lfs       f0, -0x4EB8(r2)
	  fcmpo     cr0, f6, f0
	  bge-      .loc_0x124
	  fmr       f1, f31
	  lfs       f0, -0x4EA8(r2)
	  fsubs     f31, f0, f30
	  fsubs     f30, f0, f1

	.loc_0x124:
	  rlwinm.   r0,r31,0,24,31
	  bne-      .loc_0x1C4
	  lfs       f2, 0x364(r29)
	  lfs       f0, 0x360(r29)
	  lfs       f1, -0x4EB4(r2)
	  fsubs     f3, f2, f0
	  lfs       f0, -0x4E34(r2)
	  fmuls     f3, f3, f1
	  fabs      f2, f3
	  frsp      f2, f2
	  fcmpo     cr0, f2, f0
	  cror      2, 0, 0x2
	  beq-      .loc_0x1C4
	  lfs       f0, -0x4E3C(r2)
	  fcmpo     cr0, f2, f0
	  bge-      .loc_0x170
	  lfs       f31, -0x4E18(r2)
	  lfs       f30, -0x4E0C(r2)
	  b         .loc_0x1A8

	.loc_0x170:
	  fcmpo     cr0, f2, f1
	  bge-      .loc_0x184
	  fmr       f30, f1
	  lfs       f31, -0x4E18(r2)
	  b         .loc_0x1A8

	.loc_0x184:
	  lfs       f0, -0x4EA8(r2)
	  fcmpo     cr0, f2, f0
	  bge-      .loc_0x1A8
	  lfs       f0, -0x4E08(r2)
	  fmr       f30, f1
	  lfs       f31, -0x4E10(r2)
	  fcmpo     cr0, f2, f0
	  ble-      .loc_0x1A8
	  li        r30, 0x5

	.loc_0x1A8:
	  lfs       f0, -0x4EB8(r2)
	  fcmpo     cr0, f3, f0
	  bge-      .loc_0x1C4
	  fmr       f1, f31
	  lfs       f0, -0x4EA8(r2)
	  fsubs     f31, f0, f30
	  fsubs     f30, f0, f1

	.loc_0x1C4:
	  li        r28, 0
	  li        r27, 0
	  stw       r28, 0x3C4(r29)
	  b         .loc_0x208

	.loc_0x1D4:
	  lwz       r3, 0x3D0(r29)
	  lwzx      r3, r3, r28
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x200
	  lwz       r3, 0x3C4(r29)
	  addi      r0, r3, 0x1
	  stw       r0, 0x3C4(r29)

	.loc_0x200:
	  addi      r28, r28, 0x4
	  addi      r27, r27, 0x1

	.loc_0x208:
	  lwz       r0, 0x3CC(r29)
	  cmpw      r27, r0
	  blt+      .loc_0x1D4
	  lwz       r3, 0x3C4(r29)
	  cmpwi     r3, 0x4
	  blt-      .loc_0x230
	  rlwinm.   r0,r31,0,24,31
	  beq-      .loc_0x2B4
	  cmpw      r3, r30
	  bge-      .loc_0x2B4

	.loc_0x230:
	  lwz       r3, -0x6514(r13)
	  rlwinm.   r0,r31,0,24,31
	  lfs       f2, 0x54(r3)
	  beq-      .loc_0x248
	  lfs       f0, -0x4E04(r2)
	  fmuls     f2, f2, f0

	.loc_0x248:
	  lfs       f1, 0x3C8(r29)
	  lfs       f0, -0x4EB8(r2)
	  fsubs     f1, f1, f2
	  stfs      f1, 0x3C8(r29)
	  lfs       f1, 0x3C8(r29)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x2B4
	  bl        -0xFA398
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x14(r1)
	  mr        r3, r29
	  lfd       f3, -0x4E98(r2)
	  addi      r4, r1, 0x8
	  stw       r0, 0x10(r1)
	  lfs       f2, -0x4E70(r2)
	  lfd       f0, 0x10(r1)
	  lfs       f1, -0x4E00(r2)
	  fsubs     f3, f0, f3
	  lfs       f0, -0x4E44(r2)
	  fdivs     f2, f3, f2
	  fmadds    f0, f1, f2, f0
	  stfs      f0, 0x3C8(r29)
	  stfs      f31, 0x8(r1)
	  stfs      f30, 0xC(r1)
	  bl        0x40

	.loc_0x2B4:
	  psq_l     f31,0x48(r1),0,0
	  lfd       f31, 0x40(r1)
	  psq_l     f30,0x38(r1),0,0
	  lfd       f30, 0x30(r1)
	  lmw       r27, 0x1C(r1)
	  lwz       r0, 0x54(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801C39A8
 * Size:	000018
 */
void Game::VsGameSection::useCard(void)
{
	/*
	.loc_0x0:
	  lwz       r4, 0x3C4(r3)
	  cmpwi     r4, 0
	  blelr-
	  subi      r0, r4, 0x1
	  stw       r0, 0x3C4(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801C39C0
 * Size:	0003F4
 */
void Game::VsGameSection::dropCard((Game::VsGameSection::DropCardArg&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0xF0(r1)
	  mflr      r0
	  stw       r0, 0xF4(r1)
	  stfd      f31, 0xE0(r1)
	  psq_st    f31,0xE8(r1),0,0
	  stw       r31, 0xDC(r1)
	  stw       r30, 0xD8(r1)
	  stw       r29, 0xD4(r1)
	  stw       r28, 0xD0(r1)
	  mr        r5, r4
	  mr        r30, r3
	  lwz       r3, -0x6978(r13)
	  addi      r4, r1, 0x28
	  lfs       f1, 0x0(r5)
	  lfs       f2, 0x4(r5)
	  bl        0x81140
	  bl        -0xFA460
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0xAC(r1)
	  lfd       f3, -0x4E98(r2)
	  stw       r0, 0xA8(r1)
	  lfs       f1, -0x4E70(r2)
	  lfd       f2, 0xA8(r1)
	  lfs       f0, -0x4E40(r2)
	  fsubs     f2, f2, f3
	  fdivs     f1, f2, f1
	  fmuls     f31, f0, f1
	  bl        -0xFA490
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0xB4(r1)
	  lfd       f3, -0x4E98(r2)
	  stw       r0, 0xB0(r1)
	  lfs       f2, -0x4E70(r2)
	  lfd       f0, 0xB0(r1)
	  lfs       f1, -0x4E64(r2)
	  fsubs     f3, f0, f3
	  lfs       f0, -0x4EB8(r2)
	  fdivs     f2, f3, f2
	  fmuls     f3, f1, f2
	  fmr       f1, f3
	  fcmpo     cr0, f3, f0
	  bge-      .loc_0xB4
	  fneg      f1, f3

	.loc_0xB4:
	  lfs       f2, -0x4E54(r2)
	  lis       r3, 0x8050
	  lfs       f0, -0x4EB8(r2)
	  addi      r4, r3, 0x71A0
	  fmuls     f1, f1, f2
	  lfs       f4, 0x28(r1)
	  fcmpo     cr0, f3, f0
	  fctiwz    f0, f1
	  stfd      f0, 0xB8(r1)
	  lwz       r0, 0xBC(r1)
	  rlwinm    r0,r0,3,18,28
	  add       r3, r4, r0
	  lfs       f0, 0x4(r3)
	  fmuls     f5, f31, f0
	  bge-      .loc_0x114
	  lfs       f0, -0x4E50(r2)
	  fmuls     f0, f3, f0
	  fctiwz    f0, f0
	  stfd      f0, 0xC0(r1)
	  lwz       r0, 0xC4(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r4, r0
	  fneg      f0, f0
	  b         .loc_0x12C

	.loc_0x114:
	  fmuls     f0, f3, f2
	  fctiwz    f0, f0
	  stfd      f0, 0xC8(r1)
	  lwz       r0, 0xCC(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r4, r0

	.loc_0x12C:
	  fmuls     f3, f31, f0
	  li        r7, 0
	  lfs       f0, 0x30(r1)
	  li        r0, -0x1
	  lis       r3, 0x804B
	  lfs       f2, 0x2C(r1)
	  lfs       f1, -0x4EB8(r2)
	  fadds     f3, f4, f3
	  fadds     f0, f0, f5
	  subi      r4, r3, 0x5D0C
	  fadds     f1, f2, f1
	  lis       r3, 0x804B
	  li        r6, 0xFF
	  li        r5, 0x1
	  stw       r4, 0x4C(r1)
	  subi      r8, r3, 0x5D48
	  lwz       r3, -0x7B88(r13)
	  addi      r4, r1, 0x8
	  stfs      f3, 0x28(r1)
	  stfs      f1, 0x2C(r1)
	  stfs      f0, 0x30(r1)
	  stw       r8, 0x4C(r1)
	  stb       r7, 0x68(r1)
	  sth       r7, 0x60(r1)
	  stb       r6, 0x62(r1)
	  stw       r7, 0x64(r1)
	  stb       r7, 0x63(r1)
	  stb       r5, 0x50(r1)
	  stb       r7, 0x69(r1)
	  stw       r0, 0x70(r1)
	  stw       r0, 0x6C(r1)
	  stb       r7, 0x6A(r1)
	  stb       r7, 0x6B(r1)
	  bl        0x642D0
	  mr.       r31, r3
	  bne-      .loc_0x1D8
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  subi      r3, r3, 0xC
	  li        r4, 0x6DF
	  addi      r5, r5, 0x8
	  crclr     6, 0x6
	  bl        -0x199554

	.loc_0x1D8:
	  lha       r4, 0x258(r31)
	  li        r29, 0
	  lwz       r3, 0x8(r1)
	  li        r0, 0x1
	  stw       r4, 0x5C(r1)
	  mr        r28, r29
	  lwz       r4, 0x40(r31)
	  stw       r4, 0x54(r1)
	  stb       r3, 0x62(r1)
	  stb       r0, 0x68(r1)
	  stw       r0, 0x6C(r1)
	  stw       r0, 0x70(r1)
	  b         .loc_0x270

	.loc_0x20C:
	  lwz       r3, 0x3D0(r30)
	  lwzx      r31, r3, r28
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x268
	  mr        r3, r31
	  bl        -0x5B458
	  cmpwi     r3, 0
	  bne-      .loc_0x268
	  lwz       r3, -0x6AE0(r13)
	  lwz       r4, 0x440(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x4C(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  addi      r4, r1, 0x4C
	  bl        -0x88C58
	  b         .loc_0x280

	.loc_0x268:
	  addi      r28, r28, 0x4
	  addi      r29, r29, 0x1

	.loc_0x270:
	  lwz       r0, 0x3CC(r30)
	  cmpw      r29, r0
	  blt+      .loc_0x20C
	  li        r31, 0

	.loc_0x280:
	  cmplwi    r31, 0
	  beq-      .loc_0x394
	  lfs       f1, 0x2C(r1)
	  mr        r3, r31
	  lfs       f0, -0x4DF0(r2)
	  addi      r4, r1, 0x28
	  li        r5, 0
	  fadds     f0, f1, f0
	  stfs      f0, 0x2C(r1)
	  bl        -0x88ABC
	  lwz       r5, 0x28(r1)
	  lis       r6, 0x804B
	  lwz       r0, 0x2C(r1)
	  lis       r3, 0x804B
	  lwz       r4, 0x30(r1)
	  subi      r8, r6, 0x5808
	  stw       r5, 0x10(r1)
	  subi      r6, r3, 0x5814
	  lfs       f0, -0x4EA8(r2)
	  lis       r5, 0x804F
	  stw       r0, 0x14(r1)
	  lis       r3, 0x804B
	  lfs       f3, 0x10(r1)
	  li        r0, 0x1
	  stw       r4, 0x18(r1)
	  subi      r7, r5, 0x7A68
	  lfs       f2, 0x14(r1)
	  subi      r5, r3, 0x5820
	  stw       r8, 0xC(r1)
	  addi      r3, r1, 0xC
	  lfs       f1, 0x18(r1)
	  addi      r4, r1, 0x34
	  stw       r6, 0x34(r1)
	  stw       r7, 0xC(r1)
	  stfs      f3, 0x38(r1)
	  stfs      f2, 0x3C(r1)
	  stfs      f1, 0x40(r1)
	  stw       r5, 0x34(r1)
	  stw       r0, 0x44(r1)
	  stfs      f0, 0x48(r1)
	  bl        0x2054D8
	  bl        -0xFA744
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0xCC(r1)
	  lis       r3, 0x8051
	  lfs       f1, -0x4EB8(r2)
	  addi      r4, r3, 0x41E4
	  stw       r0, 0xC8(r1)
	  addi      r3, r1, 0x74
	  lfd       f3, -0x4E98(r2)
	  addi      r5, r1, 0x1C
	  lfd       f0, 0xC8(r1)
	  lfs       f2, -0x4E70(r2)
	  fsubs     f3, f0, f3
	  lfs       f0, -0x4E64(r2)
	  stfs      f1, 0x1C(r1)
	  fdivs     f2, f3, f2
	  stfs      f1, 0x24(r1)
	  fmuls     f0, f0, f2
	  stfs      f0, 0x20(r1)
	  bl        0x264B54
	  mr        r3, r31
	  addi      r4, r1, 0x74
	  bl        -0x5B874
	  lwz       r3, 0x3C4(r30)
	  addi      r0, r3, 0x1
	  stw       r0, 0x3C4(r30)
	  b         .loc_0x3CC

	.loc_0x394:
	  li        r29, 0
	  li        r28, 0
	  b         .loc_0x3C0

	.loc_0x3A0:
	  lwz       r3, 0x3D0(r30)
	  lwzx      r3, r3, r28
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  addi      r28, r28, 0x4
	  addi      r29, r29, 0x1

	.loc_0x3C0:
	  lwz       r0, 0x3CC(r30)
	  cmpw      r29, r0
	  blt+      .loc_0x3A0

	.loc_0x3CC:
	  psq_l     f31,0xE8(r1),0,0
	  lwz       r0, 0xF4(r1)
	  lfd       f31, 0xE0(r1)
	  lwz       r31, 0xDC(r1)
	  lwz       r30, 0xD8(r1)
	  lwz       r29, 0xD4(r1)
	  lwz       r28, 0xD0(r1)
	  mtlr      r0
	  addi      r1, r1, 0xF0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801C3DB4
 * Size:	0001AC
 */
void Game::VsGameSection::createYellowBedamas((int))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x2B0(r1)
	  mflr      r0
	  stw       r0, 0x2B4(r1)
	  stmw      r27, 0x29C(r1)
	  mr        r30, r3
	  lis       r3, 0x8048
	  mr        r31, r4
	  subi      r28, r3, 0x68
	  lwz       r5, 0x33C(r30)
	  cmplwi    r5, 0
	  beq-      .loc_0x44
	  lwz       r31, 0xB0(r5)
	  cmpwi     r31, 0
	  beq-      .loc_0x198
	  cmpwi     r31, 0x7
	  blt-      .loc_0x44
	  li        r31, 0x7

	.loc_0x44:
	  lis       r3, 0x804B
	  li        r7, 0
	  subi      r4, r3, 0x5D0C
	  li        r0, -0x1
	  lis       r3, 0x804B
	  stw       r4, 0x18(r1)
	  subi      r3, r3, 0x5D48
	  li        r6, 0xFF
	  li        r5, 0x1
	  stw       r3, 0x18(r1)
	  lwz       r3, -0x7B7C(r13)
	  addi      r4, r1, 0x8
	  stb       r7, 0x34(r1)
	  sth       r7, 0x2C(r1)
	  stb       r6, 0x2E(r1)
	  stw       r7, 0x30(r1)
	  stb       r7, 0x2F(r1)
	  stb       r5, 0x1C(r1)
	  stb       r7, 0x35(r1)
	  stw       r0, 0x3C(r1)
	  stw       r0, 0x38(r1)
	  stb       r7, 0x36(r1)
	  stb       r7, 0x37(r1)
	  bl        0x63FEC
	  mr.       r29, r3
	  bne-      .loc_0xC0
	  addi      r3, r28, 0x5C
	  addi      r5, r28, 0x70
	  li        r4, 0x86A
	  crclr     6, 0x6
	  bl        -0x199830

	.loc_0xC0:
	  lha       r0, 0x258(r29)
	  cmpwi     r31, 0x32
	  lwz       r4, 0x8(r1)
	  li        r3, 0x1
	  stw       r0, 0x28(r1)
	  li        r0, 0x8
	  lwz       r5, 0x40(r29)
	  stw       r5, 0x20(r1)
	  stb       r4, 0x2E(r1)
	  stw       r3, 0x38(r1)
	  stw       r0, 0x3C(r1)
	  ble-      .loc_0x108
	  mr        r6, r31
	  addi      r3, r28, 0x5C
	  addi      r5, r28, 0x17C
	  li        r4, 0x873
	  crclr     6, 0x6
	  bl        -0x199878

	.loc_0x108:
	  lis       r4, 0x8012
	  addi      r3, r1, 0x40
	  subi      r4, r4, 0xCB8
	  li        r5, 0
	  li        r6, 0xC
	  li        r7, 0x32
	  bl        -0x102698
	  lwz       r3, -0x6978(r13)
	  mr        r5, r31
	  lfs       f1, -0x4E18(r2)
	  addi      r4, r1, 0x40
	  lfs       f2, -0x4E14(r2)
	  bl        0x80CF0
	  mr        r29, r30
	  addi      r28, r1, 0x40
	  li        r27, 0
	  b         .loc_0x190

	.loc_0x14C:
	  lwz       r3, -0x6CE0(r13)
	  addi      r4, r1, 0x18
	  bl        -0x56A48
	  lfs       f2, 0x0(r28)
	  mr        r30, r3
	  lfs       f1, 0x4(r28)
	  addi      r4, r1, 0xC
	  lfs       f0, 0x8(r28)
	  li        r5, 0
	  stfs      f2, 0xC(r1)
	  stfs      f1, 0x10(r1)
	  stfs      f0, 0x14(r1)
	  bl        -0x88D88
	  stw       r30, 0x388(r29)
	  addi      r28, r28, 0xC
	  addi      r29, r29, 0x4
	  addi      r27, r27, 0x1

	.loc_0x190:
	  cmpw      r27, r31
	  blt+      .loc_0x14C

	.loc_0x198:
	  lmw       r27, 0x29C(r1)
	  lwz       r0, 0x2B4(r1)
	  mtlr      r0
	  addi      r1, r1, 0x2B0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801C3F60
 * Size:	00014C
 */
void createRedBlueBedamas__Q24Game13VsGameSectionFR10Vector3<float>(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x60(r1)
	  mflr      r0
	  lis       r5, 0x804B
	  stw       r0, 0x64(r1)
	  stmw      r26, 0x48(r1)
	  mr        r28, r3
	  addi      r29, r1, 0xC
	  subi      r30, r5, 0x5D0C
	  li        r27, 0
	  lwz       r4, 0x2B10(r2)
	  lwz       r0, 0x2B14(r2)
	  stw       r4, 0xC(r1)
	  lis       r4, 0x804B
	  lwz       r6, -0x7B80(r13)
	  subi      r31, r4, 0x5D48
	  stw       r0, 0x10(r1)
	  lwz       r0, -0x7B84(r13)
	  stw       r6, 0xC(r1)
	  stw       r0, 0x10(r1)

	.loc_0x4C:
	  stw       r30, 0x20(r1)
	  li        r7, 0
	  li        r0, -0x1
	  li        r6, 0xFF
	  li        r5, 0x1
	  stw       r31, 0x20(r1)
	  lwz       r3, 0x0(r29)
	  addi      r4, r1, 0x8
	  stb       r7, 0x3C(r1)
	  sth       r7, 0x34(r1)
	  stb       r6, 0x36(r1)
	  stw       r7, 0x38(r1)
	  stb       r7, 0x37(r1)
	  stb       r5, 0x24(r1)
	  stb       r7, 0x3D(r1)
	  stw       r0, 0x44(r1)
	  stw       r0, 0x40(r1)
	  stb       r7, 0x3E(r1)
	  stb       r7, 0x3F(r1)
	  bl        0x63E48
	  mr.       r26, r3
	  bne-      .loc_0xC0
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  subi      r3, r3, 0xC
	  li        r4, 0x8A3
	  addi      r5, r5, 0x8
	  crclr     6, 0x6
	  bl        -0x1999DC

	.loc_0xC0:
	  lha       r3, 0x258(r26)
	  li        r5, 0x1
	  lwz       r6, 0x8(r1)
	  li        r0, 0x8
	  stw       r3, 0x30(r1)
	  addi      r4, r1, 0x20
	  lwz       r3, -0x6CE0(r13)
	  lwz       r7, 0x40(r26)
	  stw       r7, 0x28(r1)
	  stb       r6, 0x36(r1)
	  stw       r5, 0x40(r1)
	  stw       r0, 0x44(r1)
	  bl        -0x56B90
	  mr        r0, r3
	  lwz       r3, -0x6978(r13)
	  lfs       f1, -0x4E3C(r2)
	  mr        r26, r0
	  lfs       f2, -0x4E38(r2)
	  addi      r4, r1, 0x14
	  bl        0x80AD0
	  mr        r3, r26
	  addi      r4, r1, 0x14
	  li        r5, 0
	  bl        -0x88ED4
	  addi      r27, r27, 0x1
	  stw       r26, 0x380(r28)
	  cmpwi     r27, 0x2
	  addi      r29, r29, 0x4
	  addi      r28, r28, 0x4
	  blt+      .loc_0x4C
	  lmw       r26, 0x48(r1)
	  lwz       r0, 0x64(r1)
	  mtlr      r0
	  addi      r1, r1, 0x60
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801C40AC
 * Size:	000814
 */
void Game::VsGameSection::calcVsScores(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x180(r1)
	  mflr      r0
	  stw       r0, 0x184(r1)
	  stfd      f31, 0x170(r1)
	  psq_st    f31,0x178(r1),0,0
	  stfd      f30, 0x160(r1)
	  psq_st    f30,0x168(r1),0,0
	  stfd      f29, 0x150(r1)
	  psq_st    f29,0x158(r1),0,0
	  stmw      r22, 0x128(r1)
	  mr        r29, r3
	  lwz       r3, -0x6CD0(r13)
	  li        r4, 0x1
	  bl        -0x48644
	  stw       r3, 0x18(r1)
	  li        r4, 0
	  lwz       r3, -0x6CD0(r13)
	  bl        -0x48654
	  addi      r31, r1, 0xA8
	  addi      r30, r1, 0x8C
	  stw       r3, 0x1C(r1)
	  mr        r28, r29
	  mr        r27, r31
	  mr        r26, r30
	  mr        r25, r3
	  li        r24, 0

	.loc_0x68:
	  lwz       r23, 0x388(r28)
	  cmplwi    r23, 0
	  beq-      .loc_0x25C
	  mr        r3, r23
	  lwz       r12, 0x0(r23)
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x25C
	  mr        r3, r23
	  bl        -0x5B9A4
	  cmpwi     r3, 0
	  bne-      .loc_0x25C
	  mr        r3, r23
	  li        r22, -0x1
	  lwz       r12, 0x0(r23)
	  lwz       r12, 0x204(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xE8
	  lwz       r0, 0x3D4(r23)
	  cmpwi     r0, 0x1
	  beq-      .loc_0xDC
	  bge-      .loc_0xE8
	  cmpwi     r0, 0
	  bge-      .loc_0xE4
	  b         .loc_0xE8

	.loc_0xDC:
	  li        r22, 0
	  b         .loc_0xE8

	.loc_0xE4:
	  li        r22, 0x1

	.loc_0xE8:
	  mr        r4, r23
	  addi      r3, r1, 0x80
	  lwz       r12, 0x0(r23)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x18(r1)
	  addi      r3, r1, 0x74
	  lfs       f30, 0x80(r1)
	  lwz       r12, 0x0(r4)
	  lfs       f29, 0x88(r1)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, 0x7C(r1)
	  lfs       f1, 0x74(r1)
	  fsubs     f3, f29, f0
	  lfs       f0, -0x4EB8(r2)
	  fsubs     f2, f30, f1
	  fmuls     f1, f3, f3
	  fmadds    f31, f2, f2, f1
	  fcmpo     cr0, f31, f0
	  ble-      .loc_0x154
	  ble-      .loc_0x158
	  fsqrte    f0, f31
	  fmuls     f31, f0, f31
	  b         .loc_0x158

	.loc_0x154:
	  fmr       f31, f0

	.loc_0x158:
	  mr        r4, r25
	  addi      r3, r1, 0x68
	  lwz       r12, 0x0(r25)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, 0x70(r1)
	  lfs       f1, 0x68(r1)
	  fsubs     f3, f29, f0
	  lfs       f0, -0x4EB8(r2)
	  fsubs     f2, f30, f1
	  fmuls     f1, f3, f3
	  fmadds    f3, f2, f2, f1
	  fcmpo     cr0, f3, f0
	  ble-      .loc_0x1A4
	  ble-      .loc_0x1A8
	  fsqrte    f0, f3
	  fmuls     f3, f0, f3
	  b         .loc_0x1A8

	.loc_0x1A4:
	  fmr       f3, f0

	.loc_0x1A8:
	  fadds     f1, f31, f3
	  lfs       f0, -0x4EB4(r2)
	  lfs       f2, -0x4DEC(r2)
	  fdivs     f1, f3, f1
	  fsubs     f0, f1, f0
	  fmuls     f1, f2, f0
	  bl        -0xF48C0
	  frsp      f0, f1
	  lfs       f1, -0x4EA8(r2)
	  lwz       r0, 0xB8(r23)
	  li        r3, 0
	  fadds     f0, f1, f0
	  cmplwi    r0, 0
	  fdivs     f3, f1, f0
	  beq-      .loc_0x1E8
	  li        r3, 0x1

	.loc_0x1E8:
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x23C
	  cmpwi     r22, -0x1
	  bne-      .loc_0x20C
	  lfs       f0, -0x4EA8(r2)
	  stfs      f3, 0x0(r27)
	  fsubs     f0, f0, f3
	  stfs      f0, 0x0(r26)
	  b         .loc_0x268

	.loc_0x20C:
	  cmpwi     r22, 0
	  bne-      .loc_0x224
	  lfs       f0, -0x4EB8(r2)
	  stfs      f3, 0x0(r27)
	  stfs      f0, 0x0(r26)
	  b         .loc_0x268

	.loc_0x224:
	  lfs       f0, -0x4EA8(r2)
	  lfs       f1, -0x4EB8(r2)
	  fsubs     f0, f0, f3
	  stfs      f1, 0x0(r27)
	  stfs      f0, 0x0(r26)
	  b         .loc_0x268

	.loc_0x23C:
	  lfs       f0, -0x4EA8(r2)
	  lfs       f2, -0x4E34(r2)
	  fsubs     f0, f0, f3
	  fmuls     f1, f2, f3
	  fmuls     f0, f2, f0
	  stfs      f1, 0x0(r27)
	  stfs      f0, 0x0(r26)
	  b         .loc_0x268

	.loc_0x25C:
	  lfs       f0, -0x4DE8(r2)
	  stfs      f0, 0x0(r27)
	  stfs      f0, 0x0(r26)

	.loc_0x268:
	  addi      r24, r24, 0x1
	  addi      r27, r27, 0x4
	  cmpwi     r24, 0x7
	  addi      r26, r26, 0x4
	  addi      r28, r28, 0x4
	  blt+      .loc_0x68
	  lfs       f3, -0x4EB8(r2)
	  mr        r7, r29
	  lfd       f4, -0x4E98(r2)
	  addi      r8, r1, 0x10
	  lfs       f2, -0x4DE4(r2)
	  li        r9, 0
	  lfs       f1, -0x4DE0(r2)
	  lis       r3, 0x4330

	.loc_0x2A0:
	  lwz       r4, 0x3DC(r7)
	  li        r0, 0x7
	  stw       r3, 0x118(r1)
	  mr        r5, r31
	  xoris     r4, r4, 0x8000
	  mr        r6, r30
	  stw       r4, 0x11C(r1)
	  lfd       f0, 0x118(r1)
	  fsubs     f5, f0, f4
	  mtctr     r0

	.loc_0x2C8:
	  cmpwi     r9, 0
	  bne-      .loc_0x2E4
	  lfs       f0, 0x0(r5)
	  fcmpo     cr0, f0, f3
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x2E4
	  fadds     f5, f5, f0

	.loc_0x2E4:
	  cmpwi     r9, 0x1
	  bne-      .loc_0x300
	  lfs       f0, 0x0(r6)
	  fcmpo     cr0, f0, f3
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x300
	  fadds     f5, f5, f0

	.loc_0x300:
	  addi      r5, r5, 0x4
	  addi      r6, r6, 0x4
	  bdnz+     .loc_0x2C8
	  fcmpo     cr0, f5, f2
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x31C
	  fmr       f5, f2

	.loc_0x31C:
	  fmuls     f5, f5, f1
	  addi      r9, r9, 0x1
	  cmpwi     r9, 0x2
	  stfs      f5, 0x0(r8)
	  lfs       f0, 0x0(r8)
	  addi      r8, r8, 0x4
	  stfs      f0, 0x370(r7)
	  addi      r7, r7, 0x4
	  blt+      .loc_0x2A0
	  lwz       r3, 0x2B18(r2)
	  mr        r25, r29
	  lwz       r0, 0x2B1C(r2)
	  addi      r26, r1, 0x18
	  stw       r3, 0x8(r1)
	  addi      r27, r1, 0x8
	  li        r22, 0
	  stw       r0, 0xC(r1)

	.loc_0x360:
	  lwz       r4, 0x380(r25)
	  lwz       r23, 0x0(r26)
	  cmplwi    r4, 0
	  beq-      .loc_0x470
	  lwz       r12, 0x0(r4)
	  addi      r3, r1, 0x5C
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r23
	  addi      r3, r1, 0x50
	  lwz       r12, 0x0(r23)
	  lfs       f29, 0x5C(r1)
	  lwz       r12, 0x8(r12)
	  lfs       f30, 0x64(r1)
	  mtctr     r12
	  bctrl
	  lfs       f0, 0x58(r1)
	  lfs       f1, 0x50(r1)
	  fsubs     f3, f30, f0
	  lfs       f0, -0x4EB8(r2)
	  fsubs     f2, f29, f1
	  fmuls     f1, f3, f3
	  fmadds    f31, f2, f2, f1
	  fcmpo     cr0, f31, f0
	  ble-      .loc_0x3D8
	  ble-      .loc_0x3DC
	  fsqrte    f0, f31
	  fmuls     f31, f0, f31
	  b         .loc_0x3DC

	.loc_0x3D8:
	  fmr       f31, f0

	.loc_0x3DC:
	  subfic    r0, r22, 0x1
	  addi      r4, r1, 0x18
	  rlwinm    r0,r0,2,0,29
	  addi      r3, r1, 0x44
	  lwzx      r4, r4, r0
	  lwz       r12, 0x0(r4)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, 0x4C(r1)
	  lfs       f1, 0x44(r1)
	  fsubs     f3, f30, f0
	  lfs       f0, -0x4EB8(r2)
	  fsubs     f2, f29, f1
	  fmuls     f1, f3, f3
	  fmadds    f1, f2, f2, f1
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x434
	  ble-      .loc_0x438
	  fsqrte    f0, f1
	  fmuls     f1, f0, f1
	  b         .loc_0x438

	.loc_0x434:
	  fmr       f1, f0

	.loc_0x438:
	  fadds     f1, f31, f1
	  lfs       f0, -0x4EB4(r2)
	  lfs       f2, -0x4DEC(r2)
	  fdivs     f1, f31, f1
	  fsubs     f0, f1, f0
	  fmuls     f1, f2, f0
	  bl        -0xF4B50
	  frsp      f0, f1
	  lfs       f1, -0x4EA8(r2)
	  fadds     f0, f1, f0
	  fdivs     f0, f1, f0
	  stfs      f0, 0x0(r27)
	  lfs       f0, 0x0(r27)
	  stfs      f0, 0x378(r25)

	.loc_0x470:
	  addi      r22, r22, 0x1
	  addi      r26, r26, 0x4
	  cmpwi     r22, 0x2
	  addi      r27, r27, 0x4
	  addi      r25, r25, 0x4
	  blt+      .loc_0x360
	  lfs       f3, 0x10(r1)
	  addi      r28, r1, 0xEC
	  lfs       f0, 0x14(r1)
	  addi      r30, r1, 0xC4
	  lfs       f2, 0x8(r1)
	  mr        r26, r28
	  fsubs     f1, f3, f0
	  lfs       f4, 0xC(r1)
	  fsubs     f0, f0, f3
	  mr        r27, r30
	  li        r22, 0
	  li        r25, 0
	  fsubs     f1, f1, f2
	  fsubs     f0, f0, f4
	  fadds     f1, f4, f1
	  fadds     f0, f2, f0
	  stfs      f1, 0x358(r29)
	  stfs      f0, 0x35C(r29)

	.loc_0x4D0:
	  lwz       r3, 0x3D0(r29)
	  lwzx      r23, r3, r25
	  mr        r3, r23
	  lwz       r12, 0x0(r23)
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x6C0
	  mr        r3, r23
	  bl        -0x5BE08
	  cmpwi     r3, 0
	  bne-      .loc_0x6C0
	  mr        r3, r23
	  li        r24, -0x1
	  lwz       r12, 0x0(r23)
	  lwz       r12, 0x204(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x54C
	  lwz       r0, 0x3D4(r23)
	  cmpwi     r0, 0x1
	  beq-      .loc_0x540
	  bge-      .loc_0x54C
	  cmpwi     r0, 0
	  bge-      .loc_0x548
	  b         .loc_0x54C

	.loc_0x540:
	  li        r24, 0
	  b         .loc_0x54C

	.loc_0x548:
	  li        r24, 0x1

	.loc_0x54C:
	  mr        r4, r23
	  addi      r3, r1, 0x38
	  lwz       r12, 0x0(r23)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x18(r1)
	  addi      r3, r1, 0x2C
	  lfs       f29, 0x38(r1)
	  lwz       r12, 0x0(r4)
	  lfs       f30, 0x40(r1)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, 0x34(r1)
	  lfs       f1, 0x2C(r1)
	  fsubs     f3, f30, f0
	  lfs       f0, -0x4EB8(r2)
	  fsubs     f2, f29, f1
	  fmuls     f1, f3, f3
	  fmadds    f31, f2, f2, f1
	  fcmpo     cr0, f31, f0
	  ble-      .loc_0x5B8
	  ble-      .loc_0x5BC
	  fsqrte    f0, f31
	  fmuls     f31, f0, f31
	  b         .loc_0x5BC

	.loc_0x5B8:
	  fmr       f31, f0

	.loc_0x5BC:
	  lwz       r4, 0x1C(r1)
	  addi      r3, r1, 0x20
	  lwz       r12, 0x0(r4)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, 0x28(r1)
	  lfs       f1, 0x20(r1)
	  fsubs     f3, f30, f0
	  lfs       f0, -0x4EB8(r2)
	  fsubs     f2, f29, f1
	  fmuls     f1, f3, f3
	  fmadds    f3, f2, f2, f1
	  fcmpo     cr0, f3, f0
	  ble-      .loc_0x608
	  ble-      .loc_0x60C
	  fsqrte    f0, f3
	  fmuls     f3, f0, f3
	  b         .loc_0x60C

	.loc_0x608:
	  fmr       f3, f0

	.loc_0x60C:
	  fadds     f1, f31, f3
	  lfs       f0, -0x4EB4(r2)
	  lfs       f2, -0x4DEC(r2)
	  fdivs     f1, f3, f1
	  fsubs     f0, f1, f0
	  fmuls     f1, f2, f0
	  bl        -0xF4D24
	  frsp      f0, f1
	  lfs       f1, -0x4EA8(r2)
	  lwz       r0, 0xB8(r23)
	  li        r3, 0
	  fadds     f0, f1, f0
	  cmplwi    r0, 0
	  fdivs     f3, f1, f0
	  beq-      .loc_0x64C
	  li        r3, 0x1

	.loc_0x64C:
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x6A0
	  cmpwi     r24, -0x1
	  bne-      .loc_0x670
	  lfs       f0, -0x4EA8(r2)
	  stfs      f3, 0x0(r26)
	  fsubs     f0, f0, f3
	  stfs      f0, 0x0(r27)
	  b         .loc_0x6CC

	.loc_0x670:
	  cmpwi     r24, 0
	  bne-      .loc_0x688
	  lfs       f0, -0x4EB8(r2)
	  stfs      f3, 0x0(r26)
	  stfs      f0, 0x0(r27)
	  b         .loc_0x6CC

	.loc_0x688:
	  lfs       f0, -0x4EA8(r2)
	  lfs       f1, -0x4EB8(r2)
	  fsubs     f0, f0, f3
	  stfs      f1, 0x0(r26)
	  stfs      f0, 0x0(r27)
	  b         .loc_0x6CC

	.loc_0x6A0:
	  lfs       f0, -0x4EA8(r2)
	  lfs       f2, -0x4E34(r2)
	  fsubs     f0, f0, f3
	  fmuls     f1, f2, f3
	  fmuls     f0, f2, f0
	  stfs      f1, 0x0(r26)
	  stfs      f0, 0x0(r27)
	  b         .loc_0x6CC

	.loc_0x6C0:
	  lfs       f0, -0x4DE8(r2)
	  stfs      f0, 0x0(r26)
	  stfs      f0, 0x0(r27)

	.loc_0x6CC:
	  addi      r22, r22, 0x1
	  addi      r26, r26, 0x4
	  cmpwi     r22, 0xA
	  addi      r27, r27, 0x4
	  addi      r25, r25, 0x4
	  blt+      .loc_0x4D0
	  lfs       f1, -0x4EB8(r2)
	  mr        r5, r29
	  li        r6, 0

	.loc_0x6F0:
	  fmr       f3, f1
	  li        r0, 0x5
	  mr        r3, r28
	  mr        r4, r30
	  stfs      f1, 0x368(r5)
	  li        r7, 0
	  mtctr     r0

	.loc_0x70C:
	  cmpwi     r6, 0
	  lfs       f4, -0x4EB8(r2)
	  bne-      .loc_0x730
	  lfs       f0, 0x0(r3)
	  fcmpo     cr0, f0, f4
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x730
	  fadds     f3, f3, f0
	  fmr       f4, f0

	.loc_0x730:
	  cmpwi     r6, 0x1
	  bne-      .loc_0x754
	  lfs       f2, 0x0(r4)
	  lfs       f0, -0x4EB8(r2)
	  fcmpo     cr0, f2, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x754
	  fadds     f3, f3, f2
	  fmr       f4, f2

	.loc_0x754:
	  lfs       f0, 0x368(r5)
	  fcmpo     cr0, f0, f4
	  cror      2, 0, 0x2
	  bne-      .loc_0x768
	  stfs      f4, 0x368(r5)

	.loc_0x768:
	  cmpwi     r6, 0
	  lfs       f4, -0x4EB8(r2)
	  bne-      .loc_0x78C
	  lfs       f0, 0x4(r3)
	  fcmpo     cr0, f0, f4
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x78C
	  fadds     f3, f3, f0
	  fmr       f4, f0

	.loc_0x78C:
	  cmpwi     r6, 0x1
	  bne-      .loc_0x7B0
	  lfs       f2, 0x4(r4)
	  lfs       f0, -0x4EB8(r2)
	  fcmpo     cr0, f2, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x7B0
	  fadds     f3, f3, f2
	  fmr       f4, f2

	.loc_0x7B0:
	  lfs       f0, 0x368(r5)
	  fcmpo     cr0, f0, f4
	  cror      2, 0, 0x2
	  bne-      .loc_0x7C4
	  stfs      f4, 0x368(r5)

	.loc_0x7C4:
	  addi      r3, r3, 0x8
	  addi      r4, r4, 0x8
	  addi      r7, r7, 0x1
	  bdnz+     .loc_0x70C
	  addi      r6, r6, 0x1
	  stfs      f3, 0x360(r5)
	  cmpwi     r6, 0x2
	  addi      r5, r5, 0x4
	  blt+      .loc_0x6F0
	  psq_l     f31,0x178(r1),0,0
	  lfd       f31, 0x170(r1)
	  psq_l     f30,0x168(r1),0,0
	  lfd       f30, 0x160(r1)
	  psq_l     f29,0x158(r1),0,0
	  lfd       f29, 0x150(r1)
	  lmw       r22, 0x128(r1)
	  lwz       r0, 0x184(r1)
	  mtlr      r0
	  addi      r1, r1, 0x180
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801C48C0
 * Size:	000018
 */
void Game::VsGameSection::clearGetDopeCount(void)
{
	/*
	.loc_0x0:
	  li        r0, 0
	  stw       r0, 0x3B0(r3)
	  stw       r0, 0x3AC(r3)
	  stw       r0, 0x3A8(r3)
	  stw       r0, 0x3A4(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801C48D8
 * Size:	0000D0
 */
void Game::VsGameSection::getGetDopeCount((int, int))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  li        r0, 0
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  mr        r30, r5
	  stw       r29, 0x14(r1)
	  mr.       r29, r4
	  lis       r4, 0x8048
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  subi      r31, r4, 0x68
	  blt-      .loc_0x44
	  cmpwi     r29, 0x1
	  bgt-      .loc_0x44
	  li        r0, 0x1

	.loc_0x44:
	  rlwinm.   r0,r0,0,24,31
	  bne-      .loc_0x64
	  mr        r6, r29
	  addi      r3, r31, 0x5C
	  addi      r5, r31, 0x188
	  li        r4, 0xA07
	  crclr     6, 0x6
	  bl        -0x19A2F8

	.loc_0x64:
	  cmpwi     r30, 0
	  li        r0, 0
	  blt-      .loc_0x7C
	  cmpwi     r30, 0x1
	  bgt-      .loc_0x7C
	  li        r0, 0x1

	.loc_0x7C:
	  rlwinm.   r0,r0,0,24,31
	  bne-      .loc_0x9C
	  mr        r6, r30
	  addi      r3, r31, 0x5C
	  addi      r5, r31, 0x198
	  li        r4, 0xA08
	  crclr     6, 0x6
	  bl        -0x19A330

	.loc_0x9C:
	  rlwinm    r3,r29,3,0,28
	  rlwinm    r0,r30,2,0,29
	  add       r3, r3, r0
	  addi      r3, r3, 0x3A4
	  add       r3, r28, r3
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  lwz       r28, 0x10(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801C49A8
 * Size:	000010
 */
void Game::VsGameSection::clearGetCherryCount(void)
{
	/*
	.loc_0x0:
	  li        r0, 0
	  stw       r0, 0x3B8(r3)
	  stw       r0, 0x3B4(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00007C
 */
void Game::VsGameSection::getGetCherryCount((int))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801C49B8
 * Size:	000008
 */
void Game::VsGameSection::challengeDisablePelplant(void)
{
	/*
	.loc_0x0:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801C49C0
 * Size:	000008
 */
void Game::VsGameSection::player2enabled(void)
{
	/*
	.loc_0x0:
	  li        r3, 0x1
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801C49C8
 * Size:	000008
 */
void Game::VsGameSection::getCaveFilename(void)
{
	/*
	.loc_0x0:
	  addi      r3, r3, 0x224
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801C49D0
 * Size:	000008
 */
void Game::VsGameSection::getEditorFilename(void)
{
	/*
	.loc_0x0:
	  addi      r3, r3, 0x2A4
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801C49D8
 * Size:	000008
 */
void Game::VsGameSection::getVsEditNumber(void)
{
	/*
	.loc_0x0:
	  lwz       r3, 0x328(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801C49E0
 * Size:	000004
 */
void init__Q24Game36StateMachine<Game::VsGameSection>
FPQ24Game13VsGameSection(void)
{
}

/*
 * --INFO--
 * Address:	801C49E4
 * Size:	000064
 */
void create__Q24Game36StateMachine<Game::VsGameSection> Fi(void)
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
	  bl        -0x1A0A60
	  stw       r3, 0x4(r31)
	  lwz       r0, 0xC(r31)
	  rlwinm    r3,r0,2,0,29
	  bl        -0x1A0A70
	  stw       r3, 0x10(r31)
	  lwz       r0, 0xC(r31)
	  rlwinm    r3,r0,2,0,29
	  bl        -0x1A0A80
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
 * Address:	801C4A48
 * Size:	00009C
 */
void transit__Q24Game36StateMachine<Game::VsGameSection>
FPQ24Game13VsGameSectioniPQ24Game8StateArg(void)
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
	  lwz       r30, 0x180(r4)
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
	  stw       r3, 0x180(r28)
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
 * Address:	801C4AE4
 * Size:	000004
 */
void init__Q24Game32FSMState<Game::VsGameSection>
FPQ24Game13VsGameSectionPQ24Game8StateArg(void)
{
}

/*
 * --INFO--
 * Address:	801C4AE8
 * Size:	000004
 */
void cleanup__Q24Game32FSMState<Game::VsGameSection>
FPQ24Game13VsGameSection(void)
{
}

/*
 * --INFO--
 * Address:	801C4AEC
 * Size:	000084
 */
void registerState__Q24Game36StateMachine<Game::VsGameSection>
FPQ24Game32FSMState<Game::VsGameSection>(void)
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
 * Address:	801C4B70
 * Size:	000038
 */
void exec__Q24Game36StateMachine<Game::VsGameSection>
FPQ24Game13VsGameSection(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x180(r4)
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
 * Address:	801C4BA8
 * Size:	000004
 */
void exec__Q24Game32FSMState<Game::VsGameSection> FPQ24Game13VsGameSection(void)
{
}

/*
 * --INFO--
 * Address:	801C4BAC
 * Size:	000028
 */
void __sinit_vsGameSection_cpp(void)
{
	/*
	.loc_0x0:
	  lis       r4, 0x8051
	  li        r0, -0x1
	  lfs       f0, 0x48B0(r4)
	  lis       r3, 0x804B
	  stw       r0, -0x6BF8(r13)
	  stfsu     f0, 0x60E8(r3)
	  stfs      f0, -0x6BF4(r13)
	  stfs      f0, 0x4(r3)
	  stfs      f0, 0x8(r3)
	  blr
	*/
}
