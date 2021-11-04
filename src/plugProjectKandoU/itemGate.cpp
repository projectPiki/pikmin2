#include "types.h"

namespace Game {

/*
 * --INFO--
 * Address:	801C7604
 * Size:	000134
 */
void GateFSM::init(Game::ItemGate*)
{
	/*
	.loc_0x0:
	  lfd       f0, 0x8(r1)
	  fsubs     f0, f0, f1
	  fcmpo     cr0, f2, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x34
	  lhz       r0, 0x2(r4)
	  lwz       r9, 0x10(r3)
	  add       r8, r10, r0
	  subi      r0, r8, 0x1
	  rlwinm    r0,r0,2,0,29
	  lfsx      f0, r9, r0
	  stfs      f0, 0x0(r5)
	  b         .loc_0x58

	.loc_0x34:
	  fctiwz    f0, f2
	  lhz       r8, 0x2(r4)
	  lwz       r9, 0x10(r3)
	  stfd      f0, 0x8(r1)
	  lwz       r0, 0xC(r1)
	  add       r0, r8, r0
	  rlwinm    r0,r0,2,0,29
	  lfsx      f0, r9, r0
	  stfs      f0, 0x0(r5)

	.loc_0x58:
	  lfs       f2, 0x8(r3)
	  lfs       f0, -0x7A00(r2)
	  lhz       r8, 0x0(r6)
	  fcmpo     cr0, f2, f0
	  bge-      .loc_0x84
	  lhz       r0, 0x2(r6)
	  lwz       r8, 0x10(r3)
	  rlwinm    r0,r0,2,0,29
	  lfsx      f0, r8, r0
	  stfs      f0, 0x4(r5)
	  b         .loc_0xEC

	.loc_0x84:
	  lis       r0, 0x4330
	  stw       r8, 0xC(r1)
	  lfd       f1, -0x79F8(r2)
	  stw       r0, 0x8(r1)
	  lfd       f0, 0x8(r1)
	  fsubs     f0, f0, f1
	  fcmpo     cr0, f2, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0xC8
	  lhz       r0, 0x2(r6)
	  lwz       r9, 0x10(r3)
	  add       r8, r8, r0
	  subi      r0, r8, 0x1
	  rlwinm    r0,r0,2,0,29
	  lfsx      f0, r9, r0
	  stfs      f0, 0x4(r5)
	  b         .loc_0xEC

	.loc_0xC8:
	  fctiwz    f0, f2
	  lhz       r8, 0x2(r6)
	  lwz       r9, 0x10(r3)
	  stfd      f0, 0x8(r1)
	  lwz       r0, 0xC(r1)
	  add       r0, r8, r0
	  rlwinm    r0,r0,2,0,29
	  lfsx      f0, r9, r0
	  stfs      f0, 0x4(r5)

	.loc_0xEC:
	  lfs       f2, 0x8(r3)
	  lfs       f0, -0x7A00(r2)
	  lhz       r8, 0x0(r7)
	  fcmpo     cr0, f2, f0
	  bge-      .loc_0x118
	  lhz       r0, 0x2(r7)
	  lwz       r8, 0x10(r3)
	  rlwinm    r0,r0,2,0,29
	  lfsx      f0, r8, r0
	  stfs      f0, 0x8(r5)
	  b         0x6C

	.loc_0x118:
	  lis       r0, 0x4330
	  stw       r8, 0xC(r1)
	  lfd       f1, -0x79F8(r2)
	  stw       r0, 0x8(r1)
	  lfd       f0, 0x8(r1)
	  fsubs     f0, f0, f1
	  fcmpo     cr0, f2, f0
	*/
}

/*
 * --INFO--
 * Address:	801C7738
 * Size:	000048
 */
void ItemGate::constructor()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  li        r3, 0x84
	  bl        -0x1A38AC
	  mr.       r0, r3
	  beq-      .loc_0x30
	  mr        r4, r31
	  bl        0x299EC0
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
 * Address:	801C7780
 * Size:	000248
 */
void ItemGate::onInit(Game::CreatureInitArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  stw       r30, 0x18(r1)
	  mr        r30, r4
	  lbz       r0, 0x218(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x38
	  lwz       r3, -0x6BCC(r13)
	  mr        r4, r31
	  bl        0x27D0
	  b         .loc_0x44

	.loc_0x38:
	  lwz       r3, -0x6BD0(r13)
	  mr        r4, r31
	  bl        0x15D4

	.loc_0x44:
	  lwz       r0, 0x174(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x6C
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  addi      r3, r3, 0x1A0
	  li        r4, 0xE8
	  addi      r5, r5, 0x1B0
	  crclr     6, 0x6
	  bl        -0x19D1A8

	.loc_0x6C:
	  lwz       r3, 0x1D8(r31)
	  mr        r4, r31
	  li        r5, 0
	  li        r6, 0
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
	  cmplwi    r30, 0
	  beq-      .loc_0xB8
	  lfs       f0, 0x4(r30)
	  stfs      f0, 0x214(r31)
	  b         .loc_0xEC

	.loc_0xB8:
	  bl        -0xFE298
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0xC(r1)
	  lfd       f3, -0x4DB8(r2)
	  stw       r0, 0x8(r1)
	  lfs       f1, -0x4DC4(r2)
	  lfd       f2, 0x8(r1)
	  lfs       f0, -0x4DC0(r2)
	  fsubs     f2, f2, f3
	  fdivs     f1, f2, f1
	  fmuls     f0, f0, f1
	  stfs      f0, 0x214(r31)

	.loc_0xEC:
	  lbz       r0, 0x218(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x1F0
	  li        r3, 0xC
	  bl        -0x1A39D8
	  mr.       r30, r3
	  beq-      .loc_0x118
	  bl        0x26CACC
	  lis       r3, 0x804F
	  subi      r0, r3, 0x3B74
	  stw       r0, 0x0(r30)

	.loc_0x118:
	  stw       r30, 0x280(r31)
	  lwz       r3, 0x280(r31)
	  lwz       r4, -0x6BCC(r13)
	  lwz       r12, 0x0(r3)
	  addi      r4, r4, 0x90
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  li        r3, 0x14
	  bl        -0x1A3A18
	  cmplwi    r3, 0
	  beq-      .loc_0x1BC
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
	  lis       r4, 0x804B
	  addi      r0, r5, 0x14
	  stw       r5, 0x0(r3)
	  addi      r4, r4, 0x696C
	  li        r9, 0
	  li        r8, 0x2B2
	  stw       r0, 0x4(r3)
	  addi      r6, r7, 0x14
	  li        r5, 0x46
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

	.loc_0x1BC:
	  stw       r3, 0x21C(r31)
	  li        r3, 0x24
	  bl        -0x1A3AA0
	  mr.       r30, r3
	  beq-      .loc_0x1E8
	  li        r4, 0x47
	  li        r5, 0x48
	  bl        0x1E86B8
	  lis       r3, 0x804E
	  addi      r0, r3, 0x7120
	  stw       r0, 0x0(r30)

	.loc_0x1E8:
	  stw       r30, 0x220(r31)
	  b         .loc_0x230

	.loc_0x1F0:
	  li        r3, 0xC
	  bl        -0x1A3AD0
	  mr.       r30, r3
	  beq-      .loc_0x210
	  bl        0x26C9D4
	  lis       r3, 0x804F
	  subi      r0, r3, 0x3B74
	  stw       r0, 0x0(r30)

	.loc_0x210:
	  stw       r30, 0x280(r31)
	  lwz       r3, 0x280(r31)
	  lwz       r4, -0x6BD0(r13)
	  lwz       r12, 0x0(r3)
	  addi      r4, r4, 0x74
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl

	.loc_0x230:
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
 * Address:	801C79C8
 * Size:	000034
 */
void StateMachine<Game::ItemGate>::start(Game::ItemGate*, int, Game::StateArg*)
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
 * Address:	801C79FC
 * Size:	0001E4
 */
void ItemGate::onSetPosition()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x60(r1)
	  mflr      r0
	  lfs       f0, -0x4DC8(r2)
	  stw       r0, 0x64(r1)
	  addi      r5, r1, 0x18
	  stw       r31, 0x5C(r1)
	  mr        r31, r3
	  addi      r4, r31, 0x19C
	  lfs       f1, 0x214(r3)
	  addi      r3, r31, 0x138
	  stfs      f0, 0x18(r1)
	  stfs      f1, 0x1C(r1)
	  stfs      f0, 0x20(r1)
	  bl        0x260E58
	  lwz       r4, 0x174(r31)
	  addi      r3, r31, 0x138
	  lwz       r4, 0x8(r4)
	  addi      r4, r4, 0x24
	  bl        -0xDD778
	  lwz       r3, 0x174(r31)
	  lwz       r3, 0x8(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lbz       r0, 0x218(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x80
	  lwz       r3, -0x6BCC(r13)
	  mr        r4, r31
	  bl        0x25B0
	  b         .loc_0x8C

	.loc_0x80:
	  lwz       r3, -0x6BD0(r13)
	  mr        r4, r31
	  bl        0x13B0

	.loc_0x8C:
	  mr        r3, r31
	  bl        0x9D0
	  lfs       f0, 0x19C(r31)
	  li        r0, 0
	  lwz       r3, -0x6CF8(r13)
	  stfs      f0, 0x38(r1)
	  lfs       f0, -0x4DB0(r2)
	  cmplwi    r3, 0
	  lfs       f1, 0x1A0(r31)
	  stfs      f1, 0x3C(r1)
	  lfs       f1, 0x1A4(r31)
	  stfs      f1, 0x40(r1)
	  stw       r0, 0x44(r1)
	  stb       r0, 0x48(r1)
	  stfs      f0, 0x4C(r1)
	  beq-      .loc_0x110
	  lwz       r3, 0x8(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x110
	  addi      r4, r1, 0x38
	  bl        -0x54B14
	  stw       r3, 0x1FC(r31)
	  li        r4, 0
	  lwz       r3, 0x1FC(r31)
	  bl        -0x55274
	  lwz       r3, 0x1FC(r31)
	  lfs       f0, 0x19C(r31)
	  stfs      f0, 0x4C(r3)
	  lfs       f0, 0x1A0(r31)
	  stfs      f0, 0x50(r3)
	  lfs       f0, 0x1A4(r31)
	  stfs      f0, 0x54(r3)
	  b         .loc_0x118

	.loc_0x110:
	  li        r0, 0
	  stw       r0, 0x1FC(r31)

	.loc_0x118:
	  lwz       r0, 0x21C(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x178
	  lis       r3, 0x804B
	  subi      r4, r2, 0x4DAC
	  subi      r0, r3, 0x5814
	  stw       r0, 0x8(r1)
	  lfs       f0, 0x19C(r31)
	  stfs      f0, 0xC(r1)
	  lfs       f0, 0x1A0(r31)
	  stfs      f0, 0x10(r1)
	  lfs       f0, 0x1A4(r31)
	  stfs      f0, 0x14(r1)
	  lwz       r3, 0x174(r31)
	  bl        0x277498
	  bl        0x261D50
	  lwz       r5, 0x21C(r31)
	  addi      r4, r1, 0x8
	  stw       r3, 0x10(r5)
	  lwz       r3, 0x21C(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl

	.loc_0x178:
	  lwz       r3, 0x220(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x1D0
	  lis       r4, 0x804B
	  lfs       f1, 0x214(r31)
	  subi      r0, r4, 0x5814
	  stw       r0, 0x24(r1)
	  lis       r4, 0x804B
	  addi      r0, r4, 0x6960
	  lfs       f0, 0x19C(r31)
	  addi      r4, r1, 0x24
	  stfs      f0, 0x28(r1)
	  lfs       f0, 0x1A0(r31)
	  stfs      f0, 0x2C(r1)
	  lfs       f0, 0x1A4(r31)
	  stfs      f0, 0x30(r1)
	  stw       r0, 0x24(r1)
	  stfs      f1, 0x34(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl

	.loc_0x1D0:
	  lwz       r0, 0x64(r1)
	  lwz       r31, 0x5C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x60
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801C7BE0
 * Size:	0000E8
 */
void ItemGate::doLoad(Stream&)
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
	  bl        0x24D1AC
	  stfs      f1, 0x200(r30)
	  mr        r3, r31
	  bl        0x24CE84
	  stw       r3, 0x20C(r30)
	  mr        r3, r30
	  bl        0x42C
	  lwz       r3, 0x20C(r30)
	  lwz       r0, 0x210(r30)
	  cmpw      r3, r0
	  blt-      .loc_0xBC
	  lwz       r3, 0x1F4(r30)
	  li        r4, 0
	  bl        -0x3060
	  mr        r3, r30
	  li        r4, 0
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0xAC(r12)
	  mtctr     r12
	  bctrl
	  lbz       r0, 0x218(r30)
	  cmplwi    r0, 0
	  beq-      .loc_0xA4
	  lwz       r3, 0x21C(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x220(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl

	.loc_0xA4:
	  lwz       r3, 0x1FC(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0xD0
	  li        r4, 0x1
	  bl        -0x55420
	  b         .loc_0xD0

	.loc_0xBC:
	  lwz       r3, 0x1FC(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0xD0
	  li        r4, 0
	  bl        -0x55438

	.loc_0xD0:
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
 * Address:	801C7CC8
 * Size:	00004C
 */
void ItemGate::doSave(Stream&)
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
	  lfs       f1, 0x200(r3)
	  mr        r3, r31
	  bl        0x24DB5C
	  lwz       r4, 0x20C(r30)
	  mr        r3, r31
	  bl        0x24DAC8
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
 * Address:	801C7D14
 * Size:	00001C
 */
void ItemGate::updateBoundSphere()
{
	/*
	.loc_0x0:
	  lfs       f0, 0x19C(r3)
	  stfs      f0, 0x1C4(r3)
	  lfs       f0, 0x1A0(r3)
	  stfs      f0, 0x1C8(r3)
	  lfs       f0, 0x1A4(r3)
	  stfs      f0, 0x1CC(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801C7D30
 * Size:	00007C
 */
void ItemGate::update()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C8(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x210(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x17C(r31)
	  lwz       r12, 0x28(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  bl        -0x8C018
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x1D4(r12)
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
 * Address:	801C7DAC
 * Size:	000130
 */
void ItemGate::doAI()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r3, 0x1F0(r3)
	  cmpwi     r3, 0
	  ble-      .loc_0x30
	  lwz       r0, 0x1EC(r31)
	  add       r0, r0, r3
	  stw       r0, 0x1EC(r31)
	  b         .loc_0x58

	.loc_0x30:
	  lwz       r3, 0x1EC(r31)
	  cmpwi     r3, 0
	  ble-      .loc_0x58
	  subi      r0, r3, 0x4
	  stw       r0, 0x1EC(r31)
	  lwz       r0, 0x1EC(r31)
	  cmpwi     r0, 0
	  bge-      .loc_0x58
	  li        r0, 0
	  stw       r0, 0x1EC(r31)

	.loc_0x58:
	  li        r0, 0
	  mr        r4, r31
	  stw       r0, 0x1F0(r31)
	  lwz       r3, 0x1D8(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  addi      r3, r31, 0x1E0
	  bl        0x66E18
	  cmpwi     r3, 0x2
	  beq-      .loc_0x8C
	  b         .loc_0xD8

	.loc_0x8C:
	  lwz       r3, 0x17C(r31)
	  lwz       r12, 0x28(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  cmpwi     r3, 0xA
	  beq-      .loc_0xC4
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  addi      r3, r3, 0x1A0
	  li        r4, 0x162
	  addi      r5, r5, 0x1BC
	  crclr     6, 0x6
	  bl        -0x19D82C

	.loc_0xC4:
	  lwz       r3, 0x17C(r31)
	  lwz       r12, 0x28(r3)
	  lwz       r12, 0x90(r12)
	  mtctr     r12
	  bctrl

	.loc_0xD8:
	  lbz       r0, 0x218(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x11C
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x11C
	  lwz       r3, 0x17C(r31)
	  li        r4, 0x3038
	  li        r5, 0
	  lwz       r12, 0x28(r3)
	  lwz       r12, 0x7C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x11C:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801C7EDC
 * Size:	000044
 */
void ItemGate::onKeyEvent(const SysShape::KeyEvent&)
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
 * Address:	801C7F20
 * Size:	000004
 */
void GateState::onKeyEvent(Game::ItemGate*, const SysShape::KeyEvent&) { }

/*
 * --INFO--
 * Address:	801C7F24
 * Size:	00011C
 */
void ItemGate::interactAttack(Game::InteractAttack&)
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
	  bl        0x66C84
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
	  addi      r3, r3, 0x1A0
	  li        r4, 0x17C
	  addi      r5, r5, 0x1BC
	  crclr     6, 0x6
	  bl        -0x19D980

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
	  addi      r3, r3, 0x1A0
	  li        r4, 0x182
	  addi      r5, r5, 0x1BC
	  crclr     6, 0x6
	  bl        -0x19D9D0

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
 * Address:	801C8040
 * Size:	000004
 */
void GateState::onDamage(Game::ItemGate*, float) { }

/*
 * --INFO--
 * Address:	801C8044
 * Size:	00006C
 */
void ItemGate::initMotion()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r4, 0x20C(r3)
	  lwz       r0, 0x210(r3)
	  cmpw      r4, r0
	  bge-      .loc_0x38
	  addi      r3, r31, 0x1A8
	  addi      r4, r4, 0x3
	  li        r5, 0
	  bl        0x260C14
	  b         .loc_0x50

	.loc_0x38:
	  addi      r3, r31, 0x1A8
	  li        r4, 0x5
	  li        r5, 0
	  bl        0x260C00
	  addi      r3, r31, 0x1A8
	  bl        0x260E70

	.loc_0x50:
	  lfs       f0, -0x4DC8(r2)
	  stfs      f0, 0x1D4(r31)
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801C80B0
 * Size:	000290
 */
void ItemGate::getVectorField(Sys::Sphere&, Vector3f&)
{
	/*
	.loc_0x0:
	  lfs       f0, 0x4(r4)
	  lfs       f1, 0x228(r3)
	  lfs       f2, 0xC(r4)
	  fmuls     f4, f0, f1
	  lfs       f1, 0x0(r4)
	  lfs       f5, 0x224(r3)
	  fneg      f3, f2
	  lfs       f2, 0x8(r4)
	  fmadds    f5, f1, f5, f4
	  lfs       f6, 0x22C(r3)
	  lfs       f4, 0x230(r3)
	  fmadds    f5, f2, f6, f5
	  fsubs     f4, f5, f4
	  fcmpo     cr0, f4, f3
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x104
	  lfs       f4, 0x248(r3)
	  lfs       f6, 0x244(r3)
	  fmuls     f5, f0, f4
	  lfs       f7, 0x24C(r3)
	  lfs       f4, 0x250(r3)
	  fmadds    f5, f1, f6, f5
	  fmadds    f5, f2, f7, f5
	  fsubs     f4, f5, f4
	  fcmpo     cr0, f4, f3
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x94
	  lfs       f0, 0x264(r3)
	  lfs       f1, 0x268(r3)
	  fneg      f0, f0
	  lfs       f2, 0x26C(r3)
	  fneg      f1, f1
	  fneg      f2, f2
	  stfs      f0, 0x0(r5)
	  stfs      f1, 0x4(r5)
	  stfs      f2, 0x8(r5)
	  b         .loc_0x288

	.loc_0x94:
	  lfs       f4, 0x258(r3)
	  lfs       f5, 0x254(r3)
	  fmuls     f4, f0, f4
	  lfs       f6, 0x25C(r3)
	  lfs       f0, 0x260(r3)
	  fmadds    f1, f1, f5, f4
	  fmadds    f1, f2, f6, f1
	  fsubs     f0, f1, f0
	  fcmpo     cr0, f0, f3
	  cror      2, 0x1, 0x2
	  bne-      .loc_0xDC
	  lfs       f0, 0x264(r3)
	  stfs      f0, 0x0(r5)
	  lfs       f0, 0x268(r3)
	  stfs      f0, 0x4(r5)
	  lfs       f0, 0x26C(r3)
	  stfs      f0, 0x8(r5)
	  b         .loc_0x288

	.loc_0xDC:
	  lfs       f0, 0x270(r3)
	  lfs       f1, 0x274(r3)
	  fneg      f0, f0
	  lfs       f2, 0x278(r3)
	  fneg      f1, f1
	  fneg      f2, f2
	  stfs      f0, 0x0(r5)
	  stfs      f1, 0x4(r5)
	  stfs      f2, 0x8(r5)
	  b         .loc_0x288

	.loc_0x104:
	  lfs       f4, 0x238(r3)
	  lfs       f6, 0x234(r3)
	  fmuls     f5, f0, f4
	  lfs       f7, 0x23C(r3)
	  lfs       f4, 0x240(r3)
	  fmadds    f5, f1, f6, f5
	  fmadds    f5, f2, f7, f5
	  fsubs     f4, f5, f4
	  fcmpo     cr0, f4, f3
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x1E8
	  lfs       f4, 0x248(r3)
	  lfs       f6, 0x244(r3)
	  fmuls     f5, f0, f4
	  lfs       f7, 0x24C(r3)
	  lfs       f4, 0x250(r3)
	  fmadds    f5, f1, f6, f5
	  fmadds    f5, f2, f7, f5
	  fsubs     f4, f5, f4
	  fcmpo     cr0, f4, f3
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x184
	  lfs       f0, 0x264(r3)
	  lfs       f1, 0x268(r3)
	  fneg      f0, f0
	  lfs       f2, 0x26C(r3)
	  fneg      f1, f1
	  fneg      f2, f2
	  stfs      f0, 0x0(r5)
	  stfs      f1, 0x4(r5)
	  stfs      f2, 0x8(r5)
	  b         .loc_0x288

	.loc_0x184:
	  lfs       f4, 0x258(r3)
	  lfs       f5, 0x254(r3)
	  fmuls     f4, f0, f4
	  lfs       f6, 0x25C(r3)
	  lfs       f0, 0x260(r3)
	  fmadds    f1, f1, f5, f4
	  fmadds    f1, f2, f6, f1
	  fsubs     f0, f1, f0
	  fcmpo     cr0, f0, f3
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x1CC
	  lfs       f0, 0x264(r3)
	  stfs      f0, 0x0(r5)
	  lfs       f0, 0x268(r3)
	  stfs      f0, 0x4(r5)
	  lfs       f0, 0x26C(r3)
	  stfs      f0, 0x8(r5)
	  b         .loc_0x288

	.loc_0x1CC:
	  lfs       f0, 0x270(r3)
	  stfs      f0, 0x0(r5)
	  lfs       f0, 0x274(r3)
	  stfs      f0, 0x4(r5)
	  lfs       f0, 0x278(r3)
	  stfs      f0, 0x8(r5)
	  b         .loc_0x288

	.loc_0x1E8:
	  lfs       f4, 0x248(r3)
	  lfs       f6, 0x244(r3)
	  fmuls     f5, f0, f4
	  lfs       f7, 0x24C(r3)
	  lfs       f4, 0x250(r3)
	  fmadds    f5, f1, f6, f5
	  fmadds    f5, f2, f7, f5
	  fsubs     f4, f5, f4
	  fcmpo     cr0, f4, f3
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x230
	  lfs       f0, 0x270(r3)
	  stfs      f0, 0x0(r5)
	  lfs       f0, 0x274(r3)
	  stfs      f0, 0x4(r5)
	  lfs       f0, 0x278(r3)
	  stfs      f0, 0x8(r5)
	  b         .loc_0x288

	.loc_0x230:
	  lfs       f4, 0x258(r3)
	  lfs       f5, 0x254(r3)
	  fmuls     f4, f0, f4
	  lfs       f6, 0x25C(r3)
	  lfs       f0, 0x260(r3)
	  fmadds    f1, f1, f5, f4
	  fmadds    f1, f2, f6, f1
	  fsubs     f0, f1, f0
	  fcmpo     cr0, f0, f3
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x278
	  lfs       f0, 0x270(r3)
	  stfs      f0, 0x0(r5)
	  lfs       f0, 0x274(r3)
	  stfs      f0, 0x4(r5)
	  lfs       f0, 0x278(r3)
	  stfs      f0, 0x8(r5)
	  b         .loc_0x288

	.loc_0x278:
	  lfs       f0, -0x4DC8(r2)
	  stfs      f0, 0x0(r5)
	  stfs      f0, 0x4(r5)
	  stfs      f0, 0x8(r5)

	.loc_0x288:
	  li        r3, 0x1
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801C8340
 * Size:	00011C
 */
void ItemGate::getWorkDistance(Sys::Sphere&)
{
	/*
	.loc_0x0:
	  lfs       f5, 0x4(r4)
	  lfs       f0, 0x248(r3)
	  lfs       f3, 0x228(r3)
	  lfs       f2, 0x238(r3)
	  fmuls     f1, f5, f0
	  lfs       f0, 0x258(r3)
	  fmuls     f3, f5, f3
	  lfs       f8, 0x0(r4)
	  fmuls     f4, f5, f2
	  lfs       f2, 0x244(r3)
	  lfs       f6, 0x224(r3)
	  fmuls     f0, f5, f0
	  lfs       f5, 0x234(r3)
	  fmadds    f2, f8, f2, f1
	  lfs       f1, 0x254(r3)
	  fmadds    f6, f8, f6, f3
	  lfs       f9, 0x8(r4)
	  lfs       f3, 0x24C(r3)
	  fmadds    f4, f8, f5, f4
	  lfs       f7, 0x22C(r3)
	  fmadds    f1, f8, f1, f0
	  lfs       f5, 0x23C(r3)
	  fmadds    f3, f9, f3, f2
	  lfs       f0, 0x250(r3)
	  lfs       f2, 0x25C(r3)
	  fmadds    f7, f9, f7, f6
	  lfs       f6, 0x230(r3)
	  fmadds    f5, f9, f5, f4
	  lfs       f4, 0x240(r3)
	  fsubs     f3, f3, f0
	  lfs       f8, 0xC(r4)
	  fsubs     f6, f7, f6
	  lfs       f0, 0x260(r3)
	  fmadds    f1, f9, f2, f1
	  lfs       f7, -0x4DC8(r2)
	  fsubs     f2, f5, f4
	  fsubs     f4, f3, f8
	  fsubs     f0, f1, f0
	  fsubs     f3, f6, f8
	  fcmpo     cr0, f4, f7
	  fsubs     f2, f2, f8
	  fsubs     f0, f0, f8
	  ble-      .loc_0xB4
	  fmr       f7, f4
	  b         .loc_0xC0

	.loc_0xB4:
	  fcmpo     cr0, f0, f7
	  ble-      .loc_0xC0
	  fmr       f7, f0

	.loc_0xC0:
	  lfs       f1, -0x4DC8(r2)
	  fcmpo     cr0, f3, f1
	  ble-      .loc_0xD4
	  fmr       f1, f3
	  b         .loc_0xF4

	.loc_0xD4:
	  fcmpo     cr0, f2, f1
	  ble-      .loc_0xE4
	  fmr       f1, f2
	  b         .loc_0xF4

	.loc_0xE4:
	  fcmpu     cr0, f1, f7
	  beqlr-
	  lfs       f1, -0x4DA0(r2)
	  blr

	.loc_0xF4:
	  lfs       f0, -0x4D9C(r2)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x114
	  lfs       f0, -0x4DA4(r2)
	  fcmpo     cr0, f7, f0
	  bge-      .loc_0x114
	  fadds     f1, f1, f7
	  blr

	.loc_0x114:
	  lfs       f1, -0x4DA0(r2)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801C845C
 * Size:	0003A8
 */
void ItemGate::initPlanes()
{
	/*
	.loc_0x0:
	  stwu      r1, -0xB0(r1)
	  mflr      r0
	  lfs       f0, -0x4DC8(r2)
	  stw       r0, 0xB4(r1)
	  stw       r31, 0xAC(r1)
	  mr        r31, r3
	  lfs       f3, 0x214(r3)
	  fmr       f1, f3
	  fcmpo     cr0, f3, f0
	  bge-      .loc_0x2C
	  fneg      f1, f3

	.loc_0x2C:
	  lfs       f2, -0x4D98(r2)
	  lis       r3, 0x8050
	  lfs       f0, -0x4DC8(r2)
	  addi      r3, r3, 0x71A0
	  fmuls     f1, f1, f2
	  addi      r5, r3, 0x4
	  fcmpo     cr0, f3, f0
	  fctiwz    f0, f1
	  stfd      f0, 0x78(r1)
	  lwz       r0, 0x7C(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f1, r5, r0
	  bge-      .loc_0x84
	  lfs       f0, -0x4D94(r2)
	  fmuls     f0, f3, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x80(r1)
	  lwz       r0, 0x84(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r3, r0
	  fneg      f0, f0
	  b         .loc_0x9C

	.loc_0x84:
	  fmuls     f0, f3, f2
	  fctiwz    f0, f0
	  stfd      f0, 0x88(r1)
	  lwz       r0, 0x8C(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r3, r0

	.loc_0x9C:
	  stfs      f0, 0x270(r31)
	  lfs       f0, -0x4DC8(r2)
	  stfs      f0, 0x274(r31)
	  stfs      f1, 0x278(r31)
	  lfs       f3, 0x214(r31)
	  fcmpo     cr0, f3, f0
	  bge-      .loc_0xE4
	  lfs       f0, -0x4D94(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fmuls     f0, f3, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x90(r1)
	  lwz       r0, 0x94(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r3, r0
	  fneg      f1, f0
	  b         .loc_0x108

	.loc_0xE4:
	  lfs       f0, -0x4D98(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fmuls     f0, f3, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x98(r1)
	  lwz       r0, 0x9C(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f1, r3, r0

	.loc_0x108:
	  lfs       f0, -0x4DC8(r2)
	  fneg      f2, f1
	  fcmpo     cr0, f3, f0
	  bge-      .loc_0x11C
	  fneg      f3, f3

	.loc_0x11C:
	  lfs       f1, -0x4D98(r2)
	  mr        r4, r31
	  lfs       f0, -0x4DC8(r2)
	  addi      r3, r1, 0x38
	  fmuls     f1, f3, f1
	  fctiwz    f1, f1
	  stfd      f1, 0xA0(r1)
	  lwz       r0, 0xA4(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f1, r5, r0
	  stfs      f1, 0x264(r31)
	  stfs      f0, 0x268(r31)
	  stfs      f2, 0x26C(r31)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x270(r31)
	  lfs       f1, 0x274(r31)
	  stfs      f2, 0x68(r1)
	  lfs       f7, -0x4D90(r2)
	  lfs       f0, 0x278(r31)
	  stfs      f1, 0x6C(r1)
	  fmuls     f3, f1, f7
	  lwz       r3, 0x68(r1)
	  fmuls     f1, f2, f7
	  stfs      f0, 0x70(r1)
	  fmuls     f4, f0, f7
	  lwz       r0, 0x6C(r1)
	  stw       r3, 0x2C(r1)
	  lfs       f2, 0x38(r1)
	  stw       r0, 0x30(r1)
	  lfs       f0, 0x3C(r1)
	  fadds     f8, f2, f1
	  lfs       f1, 0x40(r1)
	  lwz       r0, 0x70(r1)
	  fadds     f5, f0, f3
	  lfs       f3, 0x2C(r1)
	  fadds     f9, f1, f4
	  stw       r0, 0x34(r1)
	  lfs       f4, 0x30(r1)
	  stfs      f3, 0x224(r31)
	  lfs       f3, 0x34(r1)
	  stfs      f4, 0x228(r31)
	  lfs       f6, -0x4D8C(r2)
	  stfs      f3, 0x22C(r31)
	  lfs       f3, 0x228(r31)
	  lfs       f4, 0x224(r31)
	  fmuls     f3, f3, f5
	  lfs       f5, 0x22C(r31)
	  fmadds    f3, f4, f8, f3
	  fmadds    f3, f5, f9, f3
	  stfs      f3, 0x230(r31)
	  lfs       f3, 0x270(r31)
	  lfs       f4, 0x274(r31)
	  fneg      f3, f3
	  lfs       f5, 0x278(r31)
	  fneg      f8, f4
	  fneg      f9, f5
	  stfs      f3, 0x5C(r1)
	  frsp      f3, f3
	  frsp      f4, f8
	  stfs      f8, 0x60(r1)
	  frsp      f5, f9
	  lwz       r0, 0x5C(r1)
	  fmuls     f3, f3, f7
	  stfs      f9, 0x64(r1)
	  lwz       r3, 0x60(r1)
	  fmuls     f4, f4, f7
	  stw       r0, 0x20(r1)
	  fmuls     f5, f5, f7
	  lwz       r0, 0x64(r1)
	  fadds     f7, f2, f3
	  stw       r3, 0x24(r1)
	  lfs       f3, 0x20(r1)
	  fadds     f8, f0, f4
	  stw       r0, 0x28(r1)
	  fadds     f9, f1, f5
	  lfs       f4, 0x24(r1)
	  stfs      f3, 0x234(r31)
	  lfs       f3, 0x28(r1)
	  stfs      f4, 0x238(r31)
	  stfs      f3, 0x23C(r31)
	  lfs       f3, 0x238(r31)
	  lfs       f4, 0x234(r31)
	  fmuls     f3, f3, f8
	  lfs       f5, 0x23C(r31)
	  fmadds    f3, f4, f7, f3
	  fmadds    f3, f5, f9, f3
	  stfs      f3, 0x240(r31)
	  lfs       f7, 0x268(r31)
	  lfs       f5, 0x26C(r31)
	  fmuls     f3, f7, f6
	  lfs       f8, 0x264(r31)
	  fmuls     f4, f5, f6
	  stfs      f7, 0x54(r1)
	  fadds     f9, f0, f3
	  stfs      f8, 0x50(r1)
	  fadds     f10, f1, f4
	  stfs      f5, 0x58(r1)
	  lwz       r0, 0x50(r1)
	  fmuls     f3, f8, f6
	  lwz       r3, 0x54(r1)
	  stw       r0, 0x14(r1)
	  lwz       r0, 0x58(r1)
	  fadds     f7, f2, f3
	  stw       r3, 0x18(r1)
	  lfs       f3, 0x14(r1)
	  stw       r0, 0x1C(r1)
	  lfs       f4, 0x18(r1)
	  stfs      f3, 0x244(r31)
	  lfs       f3, 0x1C(r1)
	  stfs      f4, 0x248(r31)
	  stfs      f3, 0x24C(r31)
	  lfs       f3, 0x248(r31)
	  lfs       f4, 0x244(r31)
	  fmuls     f3, f3, f9
	  lfs       f5, 0x24C(r31)
	  fmadds    f3, f4, f7, f3
	  fmadds    f3, f5, f10, f3
	  stfs      f3, 0x250(r31)
	  lfs       f3, 0x264(r31)
	  lfs       f4, 0x268(r31)
	  fneg      f3, f3
	  lfs       f5, 0x26C(r31)
	  fneg      f7, f4
	  fneg      f8, f5
	  stfs      f3, 0x44(r1)
	  frsp      f3, f3
	  frsp      f4, f7
	  stfs      f7, 0x48(r1)
	  frsp      f5, f8
	  lwz       r0, 0x44(r1)
	  fmuls     f3, f3, f6
	  stfs      f8, 0x4C(r1)
	  lwz       r3, 0x48(r1)
	  fmuls     f4, f4, f6
	  stw       r0, 0x8(r1)
	  fmuls     f5, f5, f6
	  lwz       r0, 0x4C(r1)
	  fadds     f3, f2, f3
	  stw       r3, 0xC(r1)
	  lfs       f2, 0x8(r1)
	  fadds     f4, f0, f4
	  stw       r0, 0x10(r1)
	  fadds     f5, f1, f5
	  lfs       f1, 0xC(r1)
	  stfs      f2, 0x254(r31)
	  lfs       f0, 0x10(r1)
	  stfs      f1, 0x258(r31)
	  stfs      f0, 0x25C(r31)
	  lfs       f0, 0x258(r31)
	  lfs       f1, 0x254(r31)
	  fmuls     f0, f0, f4
	  lfs       f2, 0x25C(r31)
	  fmadds    f0, f1, f3, f0
	  fmadds    f0, f2, f5, f0
	  stfs      f0, 0x260(r31)
	  lwz       r31, 0xAC(r1)
	  lwz       r0, 0xB4(r1)
	  mtlr      r0
	  addi      r1, r1, 0xB0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801C8804
 * Size:	0000D4
 */
void ItemGate::changeMaterial()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  lbz       r0, 0x218(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x28
	  li        r6, 0
	  b         .loc_0x38

	.loc_0x28:
	  lwz       r3, 0x174(r31)
	  subi      r4, r2, 0x4D88
	  bl        0x2767B0
	  lhz       r6, 0x38(r3)

	.loc_0x38:
	  lwz       r5, 0x1F4(r31)
	  li        r4, 0
	  lwz       r3, 0x174(r31)
	  lbz       r0, 0x108(r5)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0x60
	  lbz       r0, 0xD8(r31)
	  rlwinm.   r0,r0,0,29,29
	  beq-      .loc_0x60
	  li        r4, 0x1

	.loc_0x60:
	  lwz       r12, 0x0(r3)
	  rlwinm    r5,r6,0,16,31
	  lwz       r12, 0x28(r12)
	  mtctr     r12
	  bctrl
	  lbz       r0, 0x218(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x90
	  lwz       r3, 0x280(r31)
	  lfs       f1, -0x4DA4(r2)
	  bl        0x26BCC0
	  b         .loc_0xC0

	.loc_0x90:
	  lbz       r3, 0x27C(r31)
	  lis       r0, 0x4330
	  stw       r0, 0x8(r1)
	  lfd       f1, -0x4D80(r2)
	  stw       r3, 0xC(r1)
	  lwz       r3, 0x280(r31)
	  lfd       f0, 0x8(r1)
	  fsubs     f1, f0, f1
	  bl        0x26BB28
	  lwz       r3, 0x280(r31)
	  lfs       f1, -0x4DC8(r2)
	  bl        0x26BC8C

	.loc_0xC0:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801C88D8
 * Size:	0000A0
 */
void ItemGate::getLifeGaugeParam(Game::LifeGaugeParam&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  lis       r0, 0x4330
	  lfs       f1, -0x4D78(r2)
	  lfs       f0, 0x19C(r3)
	  stw       r0, 0x8(r1)
	  lfd       f3, -0x4DB8(r2)
	  stfs      f0, 0x0(r4)
	  lfs       f0, -0x4DB0(r2)
	  lfs       f2, 0x1A0(r3)
	  stw       r0, 0x10(r1)
	  stfs      f2, 0x4(r4)
	  lfs       f2, 0x1A4(r3)
	  stfs      f2, 0x8(r4)
	  lfs       f2, 0x4(r4)
	  fadds     f1, f2, f1
	  stfs      f1, 0x4(r4)
	  stfs      f0, 0x10(r4)
	  lwz       r6, 0x210(r3)
	  lwz       r5, 0x20C(r3)
	  xoris     r0, r6, 0x8000
	  lfs       f4, 0x204(r3)
	  stw       r0, 0x14(r1)
	  sub       r5, r6, r5
	  subi      r0, r5, 0x1
	  lfs       f1, 0x200(r3)
	  xoris     r0, r0, 0x8000
	  lfd       f0, 0x10(r1)
	  stw       r0, 0xC(r1)
	  fsubs     f0, f0, f3
	  lfd       f2, 0x8(r1)
	  fsubs     f2, f2, f3
	  fmuls     f0, f4, f0
	  fmadds    f1, f4, f2, f1
	  fdivs     f0, f1, f0
	  stfs      f0, 0xC(r4)
	  lbz       r0, 0xD8(r3)
	  rlwinm    r0,r0,30,31,31
	  stb       r0, 0x14(r4)
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801C8978
 * Size:	0001FC
 */
ItemGateMgr::ItemGateMgr()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  extsh.    r0, r4
	  lis       r4, 0x8048
	  stw       r31, 0x1C(r1)
	  addi      r31, r4, 0x188
	  stw       r30, 0x18(r1)
	  mr        r30, r3
	  stw       r29, 0x14(r1)
	  stw       r28, 0x10(r1)
	  beq-      .loc_0x38
	  addi      r0, r30, 0x88
	  stw       r0, 0x4(r30)

	.loc_0x38:
	  mr        r3, r30
	  li        r4, 0
	  li        r5, 0x1
	  bl        0x43B4
	  lis       r3, 0x804B
	  addi      r29, r30, 0x30
	  addi      r0, r3, 0x6784
	  stw       r0, 0x0(r30)
	  mr        r3, r29
	  bl        0x2489BC
	  lis       r4, 0x804B
	  lis       r3, 0x804B
	  subi      r0, r4, 0x5324
	  lis       r5, 0x804B
	  stw       r0, 0x0(r29)
	  addi      r0, r3, 0x690C
	  lis       r4, 0x804B
	  lis       r3, 0x804B
	  stw       r0, 0x0(r29)
	  li        r0, 0
	  addi      r6, r4, 0x6890
	  addi      r4, r3, 0x6810
	  stb       r0, 0x18(r29)
	  subi      r0, r5, 0x4A10
	  addi      r28, r29, 0x20
	  addi      r5, r6, 0x2C
	  stw       r0, 0x1C(r29)
	  addi      r0, r4, 0x2C
	  mr        r3, r28
	  stw       r6, 0x0(r29)
	  stw       r5, 0x1C(r29)
	  stw       r4, 0x0(r29)
	  stw       r0, 0x1C(r29)
	  bl        0x24895C
	  lis       r4, 0x804B
	  addi      r3, r30, 0x74
	  addi      r0, r4, 0x6800
	  stw       r0, 0x0(r28)
	  bl        0x26B7F8
	  subi      r0, r2, 0x4D74
	  addi      r4, r31, 0x40
	  stw       r0, 0x8(r30)
	  li        r5, 0
	  lwz       r3, -0x6514(r13)
	  bl        0x25A8FC
	  addi      r0, r31, 0x4C
	  mr        r3, r30
	  stw       r0, 0x28(r30)
	  li        r4, 0x1
	  bl        0x4358
	  mr        r3, r30
	  addi      r4, r31, 0x68
	  bl        0x4454
	  mr        r3, r30
	  addi      r4, r31, 0x78
	  li        r5, 0
	  lis       r6, 0x2000
	  bl        0x44BC
	  mr        r3, r30
	  addi      r4, r31, 0x88
	  bl        0x472C
	  mr        r0, r3
	  mr        r3, r30
	  mr        r29, r0
	  addi      r5, r31, 0x98
	  mr        r4, r29
	  bl        0x4544
	  mr        r3, r30
	  mr        r4, r29
	  addi      r5, r31, 0xA8
	  bl        0x45B4
	  mr        r3, r30
	  mr        r4, r29
	  addi      r5, r31, 0xB8
	  bl        0x47C8
	  stw       r3, 0x6C(r30)
	  mr        r3, r30
	  mr        r4, r29
	  addi      r5, r31, 0xC4
	  bl        0x47B4
	  stw       r3, 0x70(r30)
	  mr        r3, r30
	  mr        r4, r29
	  bl        0x4754
	  addi      r3, r31, 0xD0
	  li        r4, 0x1
	  li        r5, 0
	  li        r6, 0x1
	  bl        -0x1AD9E0
	  lwz       r3, 0x1C(r30)
	  li        r4, 0
	  lwz       r3, 0x0(r3)
	  bl        0x27577C
	  addi      r3, r31, 0xF0
	  li        r4, 0
	  bl        -0x1A5B14
	  lwz       r5, 0x1C(r30)
	  mr        r4, r3
	  addi      r3, r30, 0x74
	  lwz       r5, 0x0(r5)
	  bl        0x26B4E0
	  lwz       r3, -0x6514(r13)
	  addi      r4, r31, 0x40
	  bl        0x25A818
	  lwz       r0, 0x24(r1)
	  mr        r3, r30
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  lwz       r28, 0x10(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

} // namespace Game

/*
 * --INFO--
 * Address:	801C8B74
 * Size:	0000C8
 */
void NodeObjectMgr<Game::ItemGate>::~NodeObjectMgr()
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
	  beq-      .loc_0xAC
	  lis       r3, 0x804B
	  addic.    r0, r30, 0x20
	  addi      r3, r3, 0x6810
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x2C
	  stw       r0, 0x1C(r30)
	  beq-      .loc_0x54
	  lis       r4, 0x804B
	  addi      r3, r30, 0x20
	  addi      r0, r4, 0x6800
	  li        r4, 0
	  stw       r0, 0x20(r30)
	  bl        0x2489C4

	.loc_0x54:
	  cmplwi    r30, 0
	  beq-      .loc_0x9C
	  lis       r3, 0x804B
	  addi      r3, r3, 0x6890
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x2C
	  stw       r0, 0x1C(r30)
	  beq-      .loc_0x9C
	  lis       r3, 0x804B
	  addi      r0, r3, 0x690C
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x9C
	  lis       r4, 0x804B
	  mr        r3, r30
	  subi      r0, r4, 0x5324
	  li        r4, 0
	  stw       r0, 0x0(r30)
	  bl        0x24897C

	.loc_0x9C:
	  extsh.    r0, r31
	  ble-      .loc_0xAC
	  mr        r3, r30
	  bl        -0x1A4B68

	.loc_0xAC:
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
 * Address:	801C8C3C
 * Size:	000060
 */
void TObjectNode<Game::ItemGate>::~TObjectNode()
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
	  beq-      .loc_0x44
	  lis       r5, 0x804B
	  li        r4, 0
	  addi      r0, r5, 0x6800
	  stw       r0, 0x0(r30)
	  bl        0x24891C
	  extsh.    r0, r31
	  ble-      .loc_0x44
	  mr        r3, r30
	  bl        -0x1A4BC8

	.loc_0x44:
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
 * Address:	801C8C9C
 * Size:	000088
 */
void ObjectMgr<Game::ItemGate>::~ObjectMgr()
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
	  beq-      .loc_0x6C
	  lis       r4, 0x804B
	  addi      r4, r4, 0x6890
	  stw       r4, 0x0(r30)
	  addi      r0, r4, 0x2C
	  stw       r0, 0x1C(r30)
	  beq-      .loc_0x5C
	  lis       r4, 0x804B
	  addi      r0, r4, 0x690C
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x5C
	  lis       r5, 0x804B
	  li        r4, 0
	  subi      r0, r5, 0x5324
	  stw       r0, 0x0(r30)
	  bl        0x248894

	.loc_0x5C:
	  extsh.    r0, r31
	  ble-      .loc_0x6C
	  mr        r3, r30
	  bl        -0x1A4C50

	.loc_0x6C:
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
 * Address:	801C8D24
 * Size:	000070
 */
void Container<Game::ItemGate>::~Container()
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
	  beq-      .loc_0x54
	  lis       r4, 0x804B
	  addi      r0, r4, 0x690C
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x44
	  lis       r5, 0x804B
	  li        r4, 0
	  subi      r0, r5, 0x5324
	  stw       r0, 0x0(r30)
	  bl        0x248824

	.loc_0x44:
	  extsh.    r0, r31
	  ble-      .loc_0x54
	  mr        r3, r30
	  bl        -0x1A4CC0

	.loc_0x54:
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

/*
 * --INFO--
 * Address:	801C8D94
 * Size:	0000A0
 */
void ItemGateMgr::setupGate(Game::ItemGate*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r5, 0x8048
	  stw       r0, 0x14(r1)
	  addi      r0, r5, 0x288
	  li        r5, 0
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r4, r0
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  lwz       r3, -0x6514(r13)
	  bl        0x25A598
	  li        r3, 0x14
	  bl        -0x1A4F28
	  mr.       r0, r3
	  beq-      .loc_0x5C
	  lwz       r4, 0x1C(r30)
	  li        r5, 0
	  li        r6, 0x2
	  lwz       r4, 0x0(r4)
	  bl        0x2753F0
	  mr        r0, r3

	.loc_0x5C:
	  stw       r0, 0x174(r31)
	  lis       r3, 0x8048
	  addi      r4, r3, 0x288
	  lwz       r3, -0x6514(r13)
	  bl        0x25A564
	  lwz       r0, 0x20(r30)
	  addi      r3, r31, 0x1A8
	  li        r4, 0
	  li        r5, 0
	  stw       r0, 0x1B8(r31)
	  bl        0x25FE70
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
 * Address:	801C8E34
 * Size:	000158
 */
void ItemGateMgr::setupPlatform(Game::ItemGate*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x70(r1)
	  mflr      r0
	  lis       r5, 0x8048
	  stw       r0, 0x74(r1)
	  addi      r0, r5, 0x294
	  li        r5, 0
	  stw       r31, 0x6C(r1)
	  stw       r30, 0x68(r1)
	  mr        r30, r4
	  mr        r4, r0
	  stw       r29, 0x64(r1)
	  mr        r29, r3
	  lwz       r3, -0x6514(r13)
	  bl        0x25A4F4
	  lwz       r3, 0x174(r30)
	  subi      r4, r2, 0x4D88
	  bl        0x276170
	  bl        0x260A28
	  lis       r4, 0x6761
	  mr        r31, r3
	  addi      r3, r1, 0x14
	  addi      r4, r4, 0x7465
	  bl        0x24A41C
	  addi      r3, r1, 0x40
	  bl        -0x35D4
	  stw       r30, 0x40(r1)
	  addi      r3, r1, 0x44
	  addi      r4, r1, 0x14
	  li        r5, 0x5
	  bl        -0x107790
	  lwz       r0, 0x1C(r1)
	  addi      r4, r1, 0x40
	  lwz       r3, -0x6BE0(r13)
	  stw       r0, 0x4C(r1)
	  lwz       r0, 0x6C(r29)
	  stw       r0, 0x50(r1)
	  stw       r31, 0x54(r1)
	  bl        -0x35A4
	  stw       r3, 0x1F4(r30)
	  lis       r3, 0x8048
	  addi      r4, r3, 0x2A0
	  li        r5, 0
	  lwz       r3, -0x6514(r13)
	  bl        0x25A47C
	  lwz       r3, 0x174(r30)
	  subi      r4, r2, 0x4D6C
	  bl        0x2760F8
	  bl        0x2609B0
	  lis       r4, 0x6E6F
	  mr        r31, r3
	  addi      r3, r1, 0x8
	  addi      r4, r4, 0x6E65
	  bl        0x24A3A4
	  addi      r3, r1, 0x20
	  bl        -0x364C
	  stw       r30, 0x20(r1)
	  addi      r3, r1, 0x24
	  addi      r4, r1, 0x8
	  li        r5, 0x5
	  bl        -0x107808
	  lwz       r5, 0x10(r1)
	  li        r0, 0x1
	  lwz       r3, -0x6BE0(r13)
	  addi      r4, r1, 0x20
	  stw       r5, 0x2C(r1)
	  lwz       r5, 0x70(r29)
	  stw       r5, 0x30(r1)
	  stw       r31, 0x34(r1)
	  stb       r0, 0x38(r1)
	  bl        -0x3624
	  stw       r3, 0x1F8(r30)
	  lis       r3, 0x8048
	  addi      r4, r3, 0x2A0
	  lwz       r3, -0x6514(r13)
	  bl        0x25A408
	  lis       r4, 0x8048
	  lwz       r3, -0x6514(r13)
	  addi      r4, r4, 0x294
	  bl        0x25A3F8
	  lwz       r0, 0x74(r1)
	  lwz       r31, 0x6C(r1)
	  lwz       r30, 0x68(r1)
	  lwz       r29, 0x64(r1)
	  mtlr      r0
	  addi      r1, r1, 0x70
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801C8F8C
 * Size:	0001D4
 */
void ItemGateMgr::birth()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r4, 0x8048
	  li        r5, 0
	  stw       r0, 0x24(r1)
	  addi      r4, r4, 0x1C8
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  mr        r30, r3
	  stw       r29, 0x14(r1)
	  lwz       r3, -0x6514(r13)
	  bl        0x25A3A4
	  li        r3, 0x284
	  bl        -0x1A511C
	  mr.       r31, r3
	  beq-      .loc_0x160
	  li        r4, 0x404
	  bl        0x3018
	  lis       r3, 0x804B
	  li        r0, 0
	  addi      r4, r3, 0x6E30
	  li        r3, 0x1C
	  stw       r4, 0x0(r31)
	  addi      r4, r4, 0x1B0
	  stw       r4, 0x178(r31)
	  stw       r0, 0x1D8(r31)
	  stw       r0, 0x1DC(r31)
	  bl        -0x1A5154
	  cmplwi    r3, 0
	  beq-      .loc_0xA4
	  lis       r4, 0x804B
	  lis       r5, 0x804B
	  addi      r0, r4, 0x6E18
	  lis       r4, 0x804B
	  stw       r0, 0x0(r3)
	  li        r6, -0x1
	  addi      r5, r5, 0x6E00
	  addi      r0, r4, 0x70DC
	  stw       r6, 0x18(r3)
	  stw       r5, 0x0(r3)
	  stw       r0, 0x0(r3)

	.loc_0xA4:
	  stw       r3, 0x1D8(r31)
	  mr        r4, r31
	  lwz       r3, 0x1D8(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lis       r4, 0x804B
	  addi      r3, r31, 0x1E0
	  addi      r4, r4, 0x6BDC
	  stw       r4, 0x0(r31)
	  addi      r0, r4, 0x1B0
	  stw       r0, 0x178(r31)
	  bl        0x65B68
	  lis       r3, 0x804B
	  lis       r4, 0x8015
	  addi      r5, r3, 0x69B8
	  li        r6, 0x10
	  stw       r5, 0x0(r31)
	  addi      r0, r5, 0x1B0
	  addi      r3, r31, 0x224
	  addi      r4, r4, 0x1C68
	  stw       r0, 0x178(r31)
	  li        r5, 0
	  li        r7, 0x4
	  bl        -0x107858
	  li        r3, 0x8
	  bl        -0x1A51F8
	  mr.       r0, r3
	  beq-      .loc_0x124
	  bl        -0x9504C
	  mr        r0, r3

	.loc_0x124:
	  stw       r0, 0x114(r31)
	  li        r3, 0
	  lfs       f0, -0x4DD0(r2)
	  li        r0, 0x3
	  lfs       f1, -0x4DCC(r2)
	  stfs      f0, 0x1D0(r31)
	  lfs       f0, -0x4DC8(r2)
	  stfs      f1, 0x200(r31)
	  stfs      f0, 0x208(r31)
	  stw       r3, 0x20C(r31)
	  stw       r0, 0x210(r31)
	  stfs      f1, 0x204(r31)
	  stb       r3, 0x218(r31)
	  stw       r3, 0x21C(r31)
	  stw       r3, 0x220(r31)

	.loc_0x160:
	  li        r3, 0x1C
	  bl        -0x1A524C
	  mr.       r29, r3
	  beq-      .loc_0x180
	  bl        0x248294
	  lis       r3, 0x804B
	  addi      r0, r3, 0x6800
	  stw       r0, 0x0(r29)

	.loc_0x180:
	  stw       r31, 0x18(r29)
	  mr        r4, r29
	  addi      r3, r30, 0x50
	  bl        0x2482F0
	  lwz       r3, 0x18(r29)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  lis       r4, 0x8048
	  lwz       r3, -0x6514(r13)
	  addi      r4, r4, 0x1C8
	  bl        0x25A228
	  lwz       r0, 0x24(r1)
	  mr        r3, r31
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
 * Address:	801C9160
 * Size:	0001E8
 */
void ItemGateMgr::initDependency()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r4, 0x804B
	  addi      r3, r3, 0x30
	  stw       r0, 0x24(r1)
	  li        r0, 0
	  addi      r4, r4, 0x5A7C
	  cmplwi    r0, 0
	  stw       r4, 0x8(r1)
	  stw       r0, 0x14(r1)
	  stw       r0, 0xC(r1)
	  stw       r3, 0x10(r1)
	  bne-      .loc_0x4C
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1B8

	.loc_0x4C:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0xB8

	.loc_0x64:
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
	  bne-      .loc_0x1B8
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0xB8:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x64
	  b         .loc_0x1B8

	.loc_0xD8:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1BC(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x128
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1B8

	.loc_0x128:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x19C

	.loc_0x148:
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
	  bne-      .loc_0x1B8
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0x19C:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x148

	.loc_0x1B8:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0xC(r1)
	  cmplw     r4, r3
	  bne+      .loc_0xD8
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801C9348
 * Size:	000054
 */
void ItemGateMgr::generatorNewItemParm()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r3, 0xC
	  stw       r0, 0x14(r1)
	  bl        -0x1A54B4
	  cmplwi    r3, 0
	  beq-      .loc_0x44
	  lis       r5, 0x804B
	  lis       r4, 0x804B
	  addi      r0, r5, 0x2624
	  lfs       f0, -0x4DCC(r2)
	  stw       r0, 0x0(r3)
	  addi      r4, r4, 0x6778
	  li        r0, 0
	  stw       r4, 0x0(r3)
	  stfs      f0, 0x4(r3)
	  sth       r0, 0x8(r3)

	.loc_0x44:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801C939C
 * Size:	0000B0
 */
void ItemGateMgr::generatorWrite(Stream&, Game::GenItemParm*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r3, 0x8048
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  addi      r31, r3, 0x188
	  stw       r30, 0x18(r1)
	  mr.       r30, r5
	  stw       r29, 0x14(r1)
	  mr        r29, r4
	  bne-      .loc_0x40
	  addi      r3, r31, 0x18
	  addi      r5, r31, 0x34
	  li        r4, 0x31A
	  crclr     6, 0x6
	  bl        -0x19ED98

	.loc_0x40:
	  lwz       r4, 0x414(r29)
	  mr        r3, r29
	  bl        0x24B050
	  lfs       f1, 0x4(r30)
	  mr        r3, r29
	  bl        0x24C458
	  mr        r3, r29
	  addi      r4, r31, 0x124
	  crclr     6, 0x6
	  bl        0x24ADDC
	  lwz       r4, 0x414(r29)
	  mr        r3, r29
	  bl        0x24B028
	  lha       r0, 0x8(r30)
	  mr        r3, r29
	  rlwinm    r4,r0,0,24,31
	  bl        0x24C254
	  mr        r3, r29
	  addi      r4, r31, 0x130
	  crclr     6, 0x6
	  bl        0x24ADB0
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
 * Address:	801C944C
 * Size:	0000A8
 */
void ItemGateMgr::generatorRead(Stream&, Game::GenItemParm*, unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r6
	  stw       r30, 0x18(r1)
	  mr.       r30, r5
	  stw       r29, 0x14(r1)
	  mr        r29, r4
	  bne-      .loc_0x44
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  addi      r3, r3, 0x1A0
	  li        r4, 0x328
	  addi      r5, r5, 0x1BC
	  crclr     6, 0x6
	  bl        -0x19EE4C

	.loc_0x44:
	  lis       r3, 0x3030
	  addi      r0, r3, 0x3031
	  cmplw     r31, r0
	  blt-      .loc_0x60
	  mr        r3, r29
	  bl        0x24B908
	  stfs      f1, 0x4(r30)

	.loc_0x60:
	  lis       r3, 0x3030
	  addi      r0, r3, 0x3032
	  cmplw     r31, r0
	  blt-      .loc_0x84
	  mr        r3, r29
	  bl        0x24AFDC
	  rlwinm    r0,r3,0,24,31
	  sth       r0, 0x8(r30)
	  b         .loc_0x8C

	.loc_0x84:
	  li        r0, 0
	  sth       r0, 0x8(r30)

	.loc_0x8C:
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
 * Address:	801C94F4
 * Size:	000228
 */
void ItemGateMgr::generatorBirth(Vector3f&, Vector3f&, Game::GenItemParm*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stmw      r25, 0x14(r1)
	  mr.       r29, r6
	  lis       r6, 0x8048
	  mr        r26, r3
	  mr        r27, r4
	  mr        r28, r5
	  addi      r31, r6, 0x188
	  bne-      .loc_0x40
	  addi      r3, r31, 0x18
	  addi      r5, r31, 0x34
	  li        r4, 0x337
	  crclr     6, 0x6
	  bl        -0x19EEF0

	.loc_0x40:
	  lwz       r3, -0x6514(r13)
	  addi      r4, r31, 0x40
	  li        r5, 0
	  bl        0x259E1C
	  li        r3, 0x284
	  bl        -0x1A56A4
	  mr.       r30, r3
	  beq-      .loc_0x180
	  li        r4, 0x404
	  bl        0x2A90
	  lis       r3, 0x804B
	  li        r0, 0
	  addi      r4, r3, 0x6E30
	  li        r3, 0x1C
	  stw       r4, 0x0(r30)
	  addi      r4, r4, 0x1B0
	  stw       r4, 0x178(r30)
	  stw       r0, 0x1D8(r30)
	  stw       r0, 0x1DC(r30)
	  bl        -0x1A56DC
	  cmplwi    r3, 0
	  beq-      .loc_0xC4
	  lis       r4, 0x804B
	  lis       r5, 0x804B
	  addi      r0, r4, 0x6E18
	  lis       r4, 0x804B
	  stw       r0, 0x0(r3)
	  li        r6, -0x1
	  addi      r5, r5, 0x6E00
	  addi      r0, r4, 0x70DC
	  stw       r6, 0x18(r3)
	  stw       r5, 0x0(r3)
	  stw       r0, 0x0(r3)

	.loc_0xC4:
	  stw       r3, 0x1D8(r30)
	  mr        r4, r30
	  lwz       r3, 0x1D8(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lis       r4, 0x804B
	  addi      r3, r30, 0x1E0
	  addi      r4, r4, 0x6BDC
	  stw       r4, 0x0(r30)
	  addi      r0, r4, 0x1B0
	  stw       r0, 0x178(r30)
	  bl        0x655E0
	  lis       r3, 0x804B
	  lis       r4, 0x8015
	  addi      r5, r3, 0x69B8
	  li        r6, 0x10
	  stw       r5, 0x0(r30)
	  addi      r0, r5, 0x1B0
	  addi      r3, r30, 0x224
	  addi      r4, r4, 0x1C68
	  stw       r0, 0x178(r30)
	  li        r5, 0
	  li        r7, 0x4
	  bl        -0x107DE0
	  li        r3, 0x8
	  bl        -0x1A5780
	  mr.       r0, r3
	  beq-      .loc_0x144
	  bl        -0x955D4
	  mr        r0, r3

	.loc_0x144:
	  stw       r0, 0x114(r30)
	  li        r3, 0
	  lfs       f0, -0x4DD0(r2)
	  li        r0, 0x3
	  lfs       f1, -0x4DCC(r2)
	  stfs      f0, 0x1D0(r30)
	  lfs       f0, -0x4DC8(r2)
	  stfs      f1, 0x200(r30)
	  stfs      f0, 0x208(r30)
	  stw       r3, 0x20C(r30)
	  stw       r0, 0x210(r30)
	  stfs      f1, 0x204(r30)
	  stb       r3, 0x218(r30)
	  stw       r3, 0x21C(r30)
	  stw       r3, 0x220(r30)

	.loc_0x180:
	  li        r3, 0x1C
	  bl        -0x1A57D4
	  mr.       r25, r3
	  beq-      .loc_0x1A0
	  bl        0x247D0C
	  lis       r3, 0x804B
	  addi      r0, r3, 0x6800
	  stw       r0, 0x0(r25)

	.loc_0x1A0:
	  stw       r30, 0x18(r25)
	  mr        r4, r25
	  addi      r3, r26, 0x50
	  bl        0x247D68
	  lwz       r3, 0x18(r25)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, -0x6514(r13)
	  addi      r4, r31, 0x40
	  bl        0x259CA4
	  lfs       f0, 0x4(r29)
	  mr        r3, r30
	  li        r4, 0
	  stfs      f0, 0x204(r30)
	  lfs       f0, 0x204(r30)
	  stfs      f0, 0x200(r30)
	  lha       r0, 0x8(r29)
	  stb       r0, 0x27C(r30)
	  bl        -0x8E71C
	  lfs       f1, 0x4(r28)
	  bl        0x2484E4
	  stfs      f1, 0x214(r30)
	  mr        r3, r30
	  mr        r4, r27
	  li        r5, 0
	  bl        -0x8E558
	  mr        r3, r30
	  lmw       r25, 0x14(r1)
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801C971C
 * Size:	000014
 */
void ItemGateMgr::getCaveName(int)
{
	/*
	.loc_0x0:
	  cmpwi     r4, 0
	  li        r3, 0
	  bnelr-
	  subi      r3, r2, 0x4DAC
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801C9730
 * Size:	00004C
 */
void ItemGateMgr::getCaveID(char*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  subi      r3, r2, 0x4DAC
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  bl        -0xFEE38
	  mr        r5, r3
	  mr        r4, r31
	  subi      r3, r2, 0x4DAC
	  bl        -0xFF0D8
	  neg       r0, r3
	  or        r0, r0, r3
	  srawi     r3, r0, 0x1F
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801C977C
 * Size:	000004
 */
void GateWaitState::init(Game::ItemGate*, Game::StateArg*) { }

/*
 * --INFO--
 * Address:	801C9780
 * Size:	000004
 */
void GateWaitState::exec(Game::ItemGate*) { }

/*
 * --INFO--
 * Address:	801C9784
 * Size:	000004
 */
void GateWaitState::cleanup(Game::ItemGate*) { }

/*
 * --INFO--
 * Address:	801C9788
 * Size:	000040
 */
void GateWaitState::onDamage(Game::ItemGate*, float)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r5, 0x1
	  li        r6, 0
	  stw       r0, 0x14(r1)
	  lfs       f0, 0x208(r4)
	  fadds     f0, f0, f1
	  stfs      f0, 0x208(r4)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
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
 * Address:	801C97C8
 * Size:	000030
 */
void FSMState<Game::ItemGate>::transit(Game::ItemGate*, int, Game::StateArg*)
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
 * Address:	801C97F8
 * Size:	000004
 */
void GateWaitState::onKeyEvent(Game::ItemGate*, const SysShape::KeyEvent&) { }

/*
 * --INFO--
 * Address:	801C97FC
 * Size:	00005C
 */
void GateDamagedState::init(Game::ItemGate*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr.       r31, r4
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  mr        r5, r31
	  beq-      .loc_0x28
	  addi      r5, r5, 0x178

	.loc_0x28:
	  lwz       r4, 0x20C(r31)
	  addi      r3, r31, 0x1A8
	  bl        0x25F45C
	  lfs       f0, -0x4DA4(r2)
	  li        r0, 0
	  stfs      f0, 0x1D4(r31)
	  stb       r0, 0x10(r30)
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
 * Address:	801C9858
 * Size:	0000C0
 */
void GateDamagedState::exec(Game::ItemGate*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f1, -0x4DC8(r2)
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  lfs       f2, 0x200(r4)
	  lfs       f0, 0x208(r4)
	  fsubs     f0, f2, f0
	  stfs      f0, 0x200(r4)
	  stfs      f1, 0x208(r4)
	  lfs       f0, 0x200(r4)
	  fcmpo     cr0, f0, f1
	  bge-      .loc_0x54
	  lwz       r12, 0x0(r3)
	  li        r5, 0x2
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0xAC

	.loc_0x54:
	  lbz       r0, 0x10(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0xAC
	  lfs       f0, 0x208(r31)
	  fcmpo     cr0, f0, f1
	  ble-      .loc_0x94
	  cmplwi    r31, 0
	  mr        r5, r31
	  beq-      .loc_0x7C
	  addi      r5, r5, 0x178

	.loc_0x7C:
	  lwz       r4, 0x20C(r31)
	  addi      r3, r31, 0x1A8
	  bl        0x25F3AC
	  lfs       f0, -0x4DA4(r2)
	  stfs      f0, 0x1D4(r31)
	  b         .loc_0xAC

	.loc_0x94:
	  lwz       r12, 0x0(r3)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0xAC:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801C9918
 * Size:	000004
 */
void GateDamagedState::cleanup(Game::ItemGate*) { }

/*
 * --INFO--
 * Address:	801C991C
 * Size:	000010
 */
void GateDamagedState::onDamage(Game::ItemGate*, float)
{
	/*
	.loc_0x0:
	  lfs       f0, 0x208(r4)
	  fadds     f0, f0, f1
	  stfs      f0, 0x208(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801C992C
 * Size:	00000C
 */
void GateDamagedState::onKeyEvent(Game::ItemGate*, const SysShape::KeyEvent&)
{
	// Generated from stb r0, 0x10(r3)
	_10 = 1;
}

/*
 * --INFO--
 * Address:	801C9938
 * Size:	000224
 */
void GateDownState::init(Game::ItemGate*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x80(r1)
	  mflr      r0
	  stw       r0, 0x84(r1)
	  stw       r31, 0x7C(r1)
	  mr.       r31, r4
	  mr        r5, r31
	  beq-      .loc_0x20
	  addi      r5, r5, 0x178

	.loc_0x20:
	  lwz       r4, 0x20C(r31)
	  addi      r3, r31, 0x1A8
	  addi      r4, r4, 0x3
	  bl        0x25F324
	  lfs       f0, -0x4DA4(r2)
	  stfs      f0, 0x1D4(r31)
	  lbz       r0, 0x27C(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0xA8
	  lis       r3, 0x804B
	  li        r6, 0
	  subi      r0, r3, 0x5808
	  lis       r3, 0x804E
	  stw       r0, 0x14(r1)
	  addi      r0, r3, 0x6A64
	  lis       r4, 0x804E
	  lis       r3, 0x804B
	  stw       r0, 0x14(r1)
	  addi      r0, r4, 0x6A00
	  addi      r5, r31, 0x138
	  li        r4, 0x78
	  stw       r0, 0x14(r1)
	  addi      r0, r3, 0x694C
	  li        r7, 0x79
	  addi      r3, r1, 0x14
	  sth       r4, 0x18(r1)
	  li        r4, 0
	  sth       r7, 0x1A(r1)
	  stw       r6, 0x1C(r1)
	  stw       r6, 0x20(r1)
	  stw       r5, 0x24(r1)
	  stw       r0, 0x14(r1)
	  bl        0x1E59C0
	  b         .loc_0x108

	.loc_0xA8:
	  lis       r3, 0x804B
	  li        r6, 0
	  subi      r0, r3, 0x5808
	  lis       r3, 0x804E
	  stw       r0, 0x28(r1)
	  addi      r0, r3, 0x6A64
	  lis       r4, 0x804E
	  lis       r3, 0x804B
	  stw       r0, 0x28(r1)
	  addi      r0, r4, 0x6A00
	  addi      r5, r31, 0x138
	  li        r4, 0x7C
	  stw       r0, 0x28(r1)
	  addi      r0, r3, 0x6938
	  li        r7, 0x7D
	  addi      r3, r1, 0x28
	  sth       r4, 0x2C(r1)
	  li        r4, 0
	  sth       r7, 0x2E(r1)
	  stw       r6, 0x30(r1)
	  stw       r6, 0x34(r1)
	  stw       r5, 0x38(r1)
	  stw       r0, 0x28(r1)
	  bl        0x1E595C

	.loc_0x108:
	  lwz       r5, 0x1F0(r31)
	  mr        r3, r31
	  li        r4, 0x3803
	  addi      r0, r5, 0xC8
	  stw       r0, 0x1F0(r31)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x1C0(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x20C(r31)
	  lwz       r0, 0x210(r31)
	  addi      r3, r3, 0x1
	  cmpw      r3, r0
	  bne-      .loc_0x210
	  lwz       r3, -0x6C18(r13)
	  lbz       r0, 0x3C(r3)
	  rlwinm.   r0,r0,0,26,26
	  beq-      .loc_0x210
	  lwz       r3, -0x6B70(r13)
	  li        r4, 0x8
	  bl        0x1D950
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x210
	  lfs       f0, -0x4DC8(r2)
	  lis       r3, 0x8048
	  li        r0, 0
	  mr        r4, r31
	  addi      r5, r3, 0x2C4
	  stw       r0, 0x40(r1)
	  addi      r3, r1, 0x8
	  stw       r5, 0x3C(r1)
	  stw       r0, 0x48(r1)
	  stfs      f0, 0x54(r1)
	  stfs      f0, 0x58(r1)
	  stfs      f0, 0x5C(r1)
	  stfs      f0, 0x60(r1)
	  stw       r0, 0x64(r1)
	  stw       r0, 0x4C(r1)
	  stw       r0, 0x44(r1)
	  stw       r0, 0x68(r1)
	  stw       r0, 0x50(r1)
	  stw       r0, 0x6C(r1)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x8(r1)
	  mr        r3, r31
	  lfs       f1, 0xC(r1)
	  lfs       f0, 0x10(r1)
	  stfs      f2, 0x54(r1)
	  stfs      f1, 0x58(r1)
	  stfs      f0, 0x5C(r1)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  stfs      f1, 0x60(r1)
	  addi      r4, r1, 0x3C
	  lwz       r3, -0x64AC(r13)
	  stw       r31, 0x194(r3)
	  lwz       r3, -0x64AC(r13)
	  bl        0x262E98
	  lwz       r3, -0x6B70(r13)
	  li        r4, 0x8
	  bl        0x1D860

	.loc_0x210:
	  lwz       r0, 0x84(r1)
	  lwz       r31, 0x7C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x80
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801C9B5C
 * Size:	000008
 */
void ItemGate::getFaceDir()
{
	/*
	.loc_0x0:
	  lfs       f1, 0x214(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801C9B64
 * Size:	000004
 */
void GateDownState::exec(Game::ItemGate*) { }

/*
 * --INFO--
 * Address:	801C9B68
 * Size:	000004
 */
void GateDownState::cleanup(Game::ItemGate*) { }

/*
 * --INFO--
 * Address:	801C9B6C
 * Size:	000010
 */
void GateDownState::onDamage(Game::ItemGate*, float)
{
	/*
	.loc_0x0:
	  lfs       f0, 0x208(r4)
	  fadds     f0, f0, f1
	  stfs      f0, 0x208(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801C9B7C
 * Size:	000168
 */
void GateDownState::onKeyEvent(Game::ItemGate*, const SysShape::KeyEvent&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  lwz       r5, 0x20C(r4)
	  addi      r0, r5, 0x1
	  stw       r0, 0x20C(r4)
	  lfs       f0, 0x204(r4)
	  stfs      f0, 0x200(r4)
	  lwz       r5, 0x20C(r4)
	  lwz       r0, 0x210(r4)
	  cmpw      r5, r0
	  bne-      .loc_0x110
	  lwz       r3, 0x1F4(r31)
	  li        r4, 0
	  bl        -0x4FE8
	  lwz       r3, -0x6BE0(r13)
	  lwz       r4, 0x1F4(r31)
	  bl        -0x4030
	  mr        r3, r31
	  li        r4, 0
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xAC(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x1FC(r31)
	  li        r4, 0x1
	  bl        -0x57378
	  lbz       r0, 0x218(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0xA8
	  lwz       r3, 0x21C(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x220(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl

	.loc_0xA8:
	  addi      r3, r31, 0x1E0
	  bl        0x65008
	  lwz       r3, 0x17C(r31)
	  lwz       r12, 0x28(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  cmpwi     r3, 0xA
	  beq-      .loc_0xE8
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  addi      r3, r3, 0x1A0
	  li        r4, 0x3E5
	  addi      r5, r5, 0x1BC
	  crclr     6, 0x6
	  bl        -0x19F620

	.loc_0xE8:
	  lwz       r3, 0x17C(r31)
	  lwz       r12, 0x28(r3)
	  lwz       r12, 0x94(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, -0x67A8(r13)
	  li        r4, 0x181C
	  li        r5, 0
	  bl        0x16E9AC
	  b         .loc_0x154

	.loc_0x110:
	  lfs       f1, 0x208(r31)
	  lfs       f0, -0x4DC8(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x13C
	  lwz       r12, 0x0(r3)
	  li        r5, 0x1
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x154

	.loc_0x13C:
	  lwz       r12, 0x0(r3)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x154:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801C9CE4
 * Size:	000180
 */
ItemDengekiGate::Mgr::Mgr()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  extsh.    r0, r4
	  lis       r4, 0x8048
	  stw       r31, 0x1C(r1)
	  addi      r31, r4, 0x188
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  beq-      .loc_0x34
	  addi      r0, r29, 0xA0
	  stw       r0, 0x4(r29)

	.loc_0x34:
	  mr        r3, r29
	  li        r4, 0
	  bl        0xA1C
	  lis       r4, 0x804B
	  addi      r3, r29, 0x90
	  addi      r4, r4, 0x6564
	  stw       r4, 0x0(r29)
	  addi      r0, r4, 0x74
	  stw       r0, 0x30(r29)
	  bl        0x26A3F8
	  addi      r0, r31, 0x14C
	  addi      r4, r31, 0x158
	  stw       r0, 0x8(r29)
	  li        r5, 0
	  lwz       r3, -0x6514(r13)
	  bl        0x259608
	  addi      r0, r31, 0x4C
	  mr        r3, r29
	  stw       r0, 0x28(r29)
	  li        r4, 0x1
	  bl        0x3064
	  mr        r3, r29
	  addi      r4, r31, 0x168
	  bl        0x3160
	  mr        r3, r29
	  addi      r4, r31, 0x178
	  li        r5, 0
	  lis       r6, 0x2100
	  bl        0x31C8
	  mr        r3, r29
	  addi      r4, r31, 0x184
	  bl        0x3438
	  mr        r0, r3
	  mr        r3, r29
	  mr        r30, r0
	  addi      r5, r31, 0x198
	  mr        r4, r30
	  bl        0x3250
	  mr        r3, r29
	  mr        r4, r30
	  addi      r5, r31, 0x1A8
	  bl        0x32C0
	  mr        r3, r29
	  mr        r4, r30
	  addi      r5, r31, 0x1B4
	  bl        0x34D4
	  stw       r3, 0x88(r29)
	  mr        r3, r29
	  mr        r4, r30
	  addi      r5, r31, 0x1C0
	  bl        0x34C0
	  stw       r3, 0x8C(r29)
	  mr        r3, r29
	  mr        r4, r30
	  bl        0x3460
	  addi      r3, r31, 0x1CC
	  li        r4, 0x1
	  li        r5, 0
	  li        r6, 0x1
	  bl        -0x1AECD4
	  lwz       r3, 0x1C(r29)
	  li        r4, 0
	  lwz       r3, 0x0(r3)
	  bl        0x274488
	  addi      r3, r31, 0x1EC
	  li        r4, 0
	  bl        -0x1A6E08
	  lwz       r5, 0x1C(r29)
	  mr        r4, r3
	  addi      r3, r29, 0x90
	  lwz       r5, 0x0(r5)
	  bl        0x26A1EC
	  lwz       r3, -0x6514(r13)
	  addi      r4, r31, 0x158
	  bl        0x259524
	  lwz       r0, 0x24(r1)
	  mr        r3, r29
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
 * Address:	801C9E64
 * Size:	00011C
 */
void NodeItemMgr<Game::ItemGate>::~NodeItemMgr()
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
	  beq-      .loc_0x100
	  lis       r3, 0x804B
	  addic.    r0, r30, 0x4C
	  addi      r3, r3, 0x6624
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x74
	  stw       r0, 0x30(r30)
	  beq-      .loc_0xBC
	  lis       r4, 0x804B
	  addic.    r3, r30, 0x6C
	  addi      r4, r4, 0x6810
	  stw       r4, 0x4C(r30)
	  addi      r0, r4, 0x2C
	  stw       r0, 0x68(r30)
	  beq-      .loc_0x6C
	  lis       r4, 0x804B
	  addi      r0, r4, 0x6800
	  stw       r0, 0x6C(r30)
	  li        r4, 0
	  bl        0x2476BC

	.loc_0x6C:
	  addic.    r0, r30, 0x4C
	  beq-      .loc_0xBC
	  lis       r3, 0x804B
	  addic.    r0, r30, 0x4C
	  addi      r3, r3, 0x6890
	  stw       r3, 0x4C(r30)
	  addi      r0, r3, 0x2C
	  stw       r0, 0x68(r30)
	  beq-      .loc_0xBC
	  lis       r3, 0x804B
	  addic.    r0, r30, 0x4C
	  addi      r0, r3, 0x690C
	  stw       r0, 0x4C(r30)
	  beq-      .loc_0xBC
	  lis       r4, 0x804B
	  addi      r3, r30, 0x4C
	  subi      r0, r4, 0x5324
	  li        r4, 0
	  stw       r0, 0x4C(r30)
	  bl        0x24766C

	.loc_0xBC:
	  addic.    r0, r30, 0x30
	  beq-      .loc_0xF0
	  lis       r3, 0x804B
	  addic.    r0, r30, 0x30
	  addi      r0, r3, 0x690C
	  stw       r0, 0x30(r30)
	  beq-      .loc_0xF0
	  lis       r4, 0x804B
	  addi      r3, r30, 0x30
	  subi      r0, r4, 0x5324
	  li        r4, 0
	  stw       r0, 0x30(r30)
	  bl        0x247638

	.loc_0xF0:
	  extsh.    r0, r31
	  ble-      .loc_0x100
	  mr        r3, r30
	  bl        -0x1A5EAC

	.loc_0x100:
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
 * Address:	801C9F80
 * Size:	0000A4
 */
void ItemDengekiGate::Mgr::setupGate(Game::ItemGate*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r5, 0
	  stw       r0, 0x14(r1)
	  li        r0, 0x1
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  stb       r0, 0x218(r4)
	  lis       r4, 0x8048
	  addi      r4, r4, 0x288
	  lwz       r3, -0x6514(r13)
	  bl        0x2593A8
	  li        r3, 0x14
	  bl        -0x1A6118
	  mr.       r0, r3
	  beq-      .loc_0x60
	  lwz       r4, 0x1C(r30)
	  li        r5, 0
	  li        r6, 0x2
	  lwz       r4, 0x0(r4)
	  bl        0x274200
	  mr        r0, r3

	.loc_0x60:
	  stw       r0, 0x174(r31)
	  lis       r3, 0x8048
	  addi      r4, r3, 0x288
	  lwz       r3, -0x6514(r13)
	  bl        0x259374
	  lwz       r0, 0x20(r30)
	  addi      r3, r31, 0x1A8
	  li        r4, 0
	  li        r5, 0
	  stw       r0, 0x1B8(r31)
	  bl        0x25EC80
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
 * Address:	801CA024
 * Size:	000158
 */
void ItemDengekiGate::Mgr::setupPlatform(Game::ItemGate*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x70(r1)
	  mflr      r0
	  lis       r5, 0x8048
	  stw       r0, 0x74(r1)
	  addi      r0, r5, 0x294
	  li        r5, 0
	  stw       r31, 0x6C(r1)
	  stw       r30, 0x68(r1)
	  mr        r30, r4
	  mr        r4, r0
	  stw       r29, 0x64(r1)
	  mr        r29, r3
	  lwz       r3, -0x6514(r13)
	  bl        0x259304
	  lwz       r3, 0x174(r30)
	  subi      r4, r2, 0x4DAC
	  bl        0x274F80
	  bl        0x25F838
	  lis       r4, 0x656C
	  mr        r31, r3
	  addi      r3, r1, 0x14
	  addi      r4, r4, 0x6563
	  bl        0x24922C
	  addi      r3, r1, 0x40
	  bl        -0x47C4
	  stw       r30, 0x40(r1)
	  addi      r3, r1, 0x44
	  addi      r4, r1, 0x14
	  li        r5, 0x5
	  bl        -0x108980
	  lwz       r0, 0x1C(r1)
	  addi      r4, r1, 0x40
	  lwz       r3, -0x6BE0(r13)
	  stw       r0, 0x4C(r1)
	  lwz       r0, 0x88(r29)
	  stw       r0, 0x50(r1)
	  stw       r31, 0x54(r1)
	  bl        -0x4794
	  stw       r3, 0x1F4(r30)
	  lis       r3, 0x8048
	  addi      r4, r3, 0x2A0
	  li        r5, 0
	  lwz       r3, -0x6514(r13)
	  bl        0x25928C
	  lwz       r3, 0x174(r30)
	  subi      r4, r2, 0x4D68
	  bl        0x274F08
	  bl        0x25F7C0
	  lis       r4, 0x7369
	  mr        r31, r3
	  addi      r3, r1, 0x8
	  addi      r4, r4, 0x6465
	  bl        0x2491B4
	  addi      r3, r1, 0x20
	  bl        -0x483C
	  stw       r30, 0x20(r1)
	  addi      r3, r1, 0x24
	  addi      r4, r1, 0x8
	  li        r5, 0x5
	  bl        -0x1089F8
	  lwz       r5, 0x10(r1)
	  li        r0, 0x1
	  lwz       r3, -0x6BE0(r13)
	  addi      r4, r1, 0x20
	  stw       r5, 0x2C(r1)
	  lwz       r5, 0x8C(r29)
	  stw       r5, 0x30(r1)
	  stw       r31, 0x34(r1)
	  stb       r0, 0x38(r1)
	  bl        -0x4814
	  stw       r3, 0x1F8(r30)
	  lis       r3, 0x8048
	  addi      r4, r3, 0x2A0
	  lwz       r3, -0x6514(r13)
	  bl        0x259218
	  lis       r4, 0x8048
	  lwz       r3, -0x6514(r13)
	  addi      r4, r4, 0x294
	  bl        0x259208
	  lwz       r0, 0x74(r1)
	  lwz       r31, 0x6C(r1)
	  lwz       r30, 0x68(r1)
	  lwz       r29, 0x64(r1)
	  mtlr      r0
	  addi      r1, r1, 0x70
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801CA17C
 * Size:	000054
 */
void ItemDengekiGate::Mgr::generatorNewItemParm()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r3, 0xC
	  stw       r0, 0x14(r1)
	  bl        -0x1A62E8
	  cmplwi    r3, 0
	  beq-      .loc_0x44
	  lis       r5, 0x804B
	  lis       r4, 0x804B
	  addi      r0, r5, 0x2624
	  lfs       f0, -0x4DCC(r2)
	  stw       r0, 0x0(r3)
	  addi      r4, r4, 0x6778
	  li        r0, 0
	  stw       r4, 0x0(r3)
	  stfs      f0, 0x4(r3)
	  sth       r0, 0x8(r3)

	.loc_0x44:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801CA1D0
 * Size:	000084
 */
void ItemDengekiGate::Mgr::generatorWrite(Stream&, Game::GenItemParm*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r3, 0x8048
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  addi      r31, r3, 0x188
	  stw       r30, 0x18(r1)
	  mr.       r30, r5
	  stw       r29, 0x14(r1)
	  mr        r29, r4
	  bne-      .loc_0x40
	  addi      r3, r31, 0x18
	  addi      r5, r31, 0x34
	  li        r4, 0x499
	  crclr     6, 0x6
	  bl        -0x19FBCC

	.loc_0x40:
	  lwz       r4, 0x414(r29)
	  mr        r3, r29
	  bl        0x24A21C
	  lfs       f1, 0x4(r30)
	  mr        r3, r29
	  bl        0x24B624
	  mr        r3, r29
	  addi      r4, r31, 0x124
	  crclr     6, 0x6
	  bl        0x249FA8
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
 * Address:	801CA254
 * Size:	000060
 */
void ItemDengekiGate::Mgr::generatorRead(Stream&, Game::GenItemParm*,
                                         unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr.       r31, r5
	  stw       r30, 0x8(r1)
	  mr        r30, r4
	  bne-      .loc_0x3C
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  addi      r3, r3, 0x1A0
	  li        r4, 0x4A3
	  addi      r5, r5, 0x1BC
	  crclr     6, 0x6
	  bl        -0x19FC4C

	.loc_0x3C:
	  mr        r3, r30
	  bl        0x24AB18
	  stfs      f1, 0x4(r31)
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
 * Address:	801CA2B4
 * Size:	0000B8
 */
void ItemDengekiGate::Mgr::generatorBirth(Vector3f&, Vector3f&,
                                          Game::GenItemParm*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr.       r31, r6
	  stw       r30, 0x18(r1)
	  mr        r30, r5
	  stw       r29, 0x14(r1)
	  mr        r29, r4
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  bne-      .loc_0x4C
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  addi      r3, r3, 0x1A0
	  li        r4, 0x4AD
	  addi      r5, r5, 0x1BC
	  crclr     6, 0x6
	  bl        -0x19FCBC

	.loc_0x4C:
	  mr        r3, r28
	  bl        0x54C
	  lfs       f0, 0x4(r31)
	  li        r0, 0x1
	  mr        r31, r3
	  li        r4, 0
	  stfs      f0, 0x204(r3)
	  lfs       f0, 0x204(r3)
	  stfs      f0, 0x200(r3)
	  stb       r0, 0x218(r3)
	  bl        -0x8F360
	  lfs       f1, 0x4(r30)
	  bl        0x2478A0
	  stfs      f1, 0x214(r31)
	  mr        r3, r31
	  mr        r4, r29
	  li        r5, 0
	  bl        -0x8F19C
	  lwz       r0, 0x24(r1)
	  mr        r3, r31
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
 * Address:	801CA36C
 * Size:	000014
 */
void ItemDengekiGate::Mgr::getCaveName(int)
{
	/*
	.loc_0x0:
	  cmpwi     r4, 0
	  li        r3, 0
	  bnelr-
	  subi      r3, r2, 0x4D60
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801CA380
 * Size:	00004C
 */
void ItemDengekiGate::Mgr::getCaveID(char*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  subi      r3, r2, 0x4D60
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  bl        -0xFFA88
	  mr        r5, r3
	  mr        r4, r31
	  subi      r3, r2, 0x4D60
	  bl        -0xFFD28
	  neg       r0, r3
	  or        r0, r0, r3
	  srawi     r3, r0, 0x1F
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801CA3CC
 * Size:	000134
 */
ItemDengekiGate::Mgr::~Mgr()
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
	  lis       r3, 0x804B
	  addi      r3, r3, 0x6564
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x74
	  stw       r0, 0x30(r30)
	  beq-      .loc_0x108
	  lis       r3, 0x804B
	  addic.    r0, r30, 0x4C
	  addi      r3, r3, 0x6624
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x74
	  stw       r0, 0x30(r30)
	  beq-      .loc_0xD4
	  lis       r4, 0x804B
	  addic.    r3, r30, 0x6C
	  addi      r4, r4, 0x6810
	  stw       r4, 0x4C(r30)
	  addi      r0, r4, 0x2C
	  stw       r0, 0x68(r30)
	  beq-      .loc_0x84
	  lis       r4, 0x804B
	  addi      r0, r4, 0x6800
	  stw       r0, 0x6C(r30)
	  li        r4, 0
	  bl        0x24713C

	.loc_0x84:
	  addic.    r0, r30, 0x4C
	  beq-      .loc_0xD4
	  lis       r3, 0x804B
	  addic.    r0, r30, 0x4C
	  addi      r3, r3, 0x6890
	  stw       r3, 0x4C(r30)
	  addi      r0, r3, 0x2C
	  stw       r0, 0x68(r30)
	  beq-      .loc_0xD4
	  lis       r3, 0x804B
	  addic.    r0, r30, 0x4C
	  addi      r0, r3, 0x690C
	  stw       r0, 0x4C(r30)
	  beq-      .loc_0xD4
	  lis       r4, 0x804B
	  addi      r3, r30, 0x4C
	  subi      r0, r4, 0x5324
	  li        r4, 0
	  stw       r0, 0x4C(r30)
	  bl        0x2470EC

	.loc_0xD4:
	  addic.    r0, r30, 0x30
	  beq-      .loc_0x108
	  lis       r3, 0x804B
	  addic.    r0, r30, 0x30
	  addi      r0, r3, 0x690C
	  stw       r0, 0x30(r30)
	  beq-      .loc_0x108
	  lis       r4, 0x804B
	  addi      r3, r30, 0x30
	  subi      r0, r4, 0x5324
	  li        r4, 0
	  stw       r0, 0x30(r30)
	  bl        0x2470B8

	.loc_0x108:
	  extsh.    r0, r31
	  ble-      .loc_0x118
	  mr        r3, r30
	  bl        -0x1A642C

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
 * Address:	801CA500
 * Size:	00000C
 */
void ItemDengekiGate::Mgr::generatorGetID()
{
	/*
	.loc_0x0:
	  lis       r3, 0x6467
	  addi      r3, r3, 0x6174
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801CA50C
 * Size:	00000C
 */
void ItemDengekiGate::Mgr::generatorLocalVersion()
{
	/*
	.loc_0x0:
	  lis       r3, 0x3030
	  addi      r3, r3, 0x3030
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801CA518
 * Size:	00000C
 */
void ItemGateMgr::generatorGetID()
{
	/*
	.loc_0x0:
	  lis       r3, 0x6761
	  addi      r3, r3, 0x7465
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801CA524
 * Size:	00000C
 */
void ItemGateMgr::generatorLocalVersion()
{
	/*
	.loc_0x0:
	  lis       r3, 0x3030
	  addi      r3, r3, 0x3032
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801CA530
 * Size:	00002C
 */
void ItemGateMgr::doAnimation()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwzu      r12, 0x30(r3)
	  lwz       r12, 0x64(r12)
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
 * Address:	801CA55C
 * Size:	00002C
 */
void ItemGateMgr::doEntry()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwzu      r12, 0x30(r3)
	  lwz       r12, 0x68(r12)
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
 * Address:	801CA588
 * Size:	00002C
 */
void ItemGateMgr::doSetView(int)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwzu      r12, 0x30(r3)
	  lwz       r12, 0x6C(r12)
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
 * Address:	801CA5B4
 * Size:	00002C
 */
void ItemGateMgr::doViewCalc()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwzu      r12, 0x30(r3)
	  lwz       r12, 0x70(r12)
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
 * Address:	801CA5E0
 * Size:	00002C
 */
void ItemGateMgr::doSimulation(float)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwzu      r12, 0x30(r3)
	  lwz       r12, 0x74(r12)
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
 * Address:	801CA60C
 * Size:	00002C
 */
void ItemGateMgr::doDirectDraw(Graphics&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwzu      r12, 0x30(r3)
	  lwz       r12, 0x78(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

} // namespace Game

namespace efx {

/*
 * --INFO--
 * Address:	801CA638
 * Size:	000008
 */
void ArgRotY::getName()
{
	/*
	.loc_0x0:
	  subi      r3, r2, 0x4D58
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801CA640
 * Size:	00009C
 */
TEgateA::~TEgateA()
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
	  lis       r3, 0x804B
	  addi      r3, r3, 0x696C
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
	  bl        -0x13AA10

	.loc_0x70:
	  extsh.    r0, r31
	  ble-      .loc_0x80
	  mr        r3, r30
	  bl        -0x1A6608

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
 * Address:	801CA6DC
 * Size:	000008
 */
void ItemGate::getCreatureName()
{
	/*
	.loc_0x0:
	  subi      r3, r2, 0x4D74
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801CA6E4
 * Size:	000008
 */
void ItemGate::getMabiki()
{
	/*
	.loc_0x0:
	  addi      r3, r3, 0x1EC
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801CA6EC
 * Size:	000004
 */
void ItemGate::makeTrMatrix() { }

/*
 * --INFO--
 * Address:	801CA6F0
 * Size:	000004
 */
void BaseItem::do_doAnimation() { }

/*
 * --INFO--
 * Address:	801CA6F4
 * Size:	000034
 */
void FSMItem<Game::ItemGate, Game::GateFSM, Game::GateState>::doAI()
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
 * Address:	801CA728
 * Size:	000008
 */
void BaseItem::getCreatureName()
{
	/*
	.loc_0x0:
	  subi      r3, r2, 0x4D50
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801CA730
 * Size:	000004
 */
void BaseItem::changeMaterial() { }

/*
 * --INFO--
 * Address:	801CA734
 * Size:	000008
 */
void BaseItem::getFaceDir()
{
	/*
	.loc_0x0:
	  lfs       f1, -0x4DC8(r2)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801CA73C
 * Size:	000114
 */
void NodeItemMgr<Game::ItemGate>::NodeItemMgr()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  extsh.    r0, r4
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  beq-      .loc_0x2C
	  addi      r0, r31, 0x88
	  stw       r0, 0x4(r31)

	.loc_0x2C:
	  mr        r3, r31
	  li        r4, 0
	  li        r5, 0x1
	  bl        0x25FC
	  addi      r29, r31, 0x30
	  mr        r3, r29
	  bl        0x246C10
	  lis       r3, 0x804B
	  li        r5, 0
	  subi      r0, r3, 0x5324
	  addi      r30, r31, 0x4C
	  lis       r3, 0x804B
	  stw       r0, 0x0(r29)
	  addi      r0, r3, 0x690C
	  stw       r0, 0x0(r29)
	  lis       r3, 0x804B
	  addi      r4, r3, 0x6624
	  stb       r5, 0x18(r29)
	  addi      r0, r4, 0x74
	  mr        r3, r30
	  stw       r4, 0x0(r31)
	  stw       r0, 0x30(r31)
	  bl        0x246BD0
	  lis       r4, 0x804B
	  lis       r3, 0x804B
	  subi      r0, r4, 0x5324
	  lis       r5, 0x804B
	  stw       r0, 0x0(r30)
	  addi      r0, r3, 0x690C
	  lis       r4, 0x804B
	  lis       r3, 0x804B
	  stw       r0, 0x0(r30)
	  li        r0, 0
	  addi      r6, r4, 0x6890
	  addi      r4, r3, 0x6810
	  stb       r0, 0x18(r30)
	  subi      r0, r5, 0x4A10
	  addi      r29, r30, 0x20
	  addi      r5, r6, 0x2C
	  stw       r0, 0x1C(r30)
	  addi      r0, r4, 0x2C
	  mr        r3, r29
	  stw       r6, 0x0(r30)
	  stw       r5, 0x1C(r30)
	  stw       r4, 0x0(r30)
	  stw       r0, 0x1C(r30)
	  bl        0x246B70
	  lis       r4, 0x804B
	  mr        r3, r31
	  addi      r0, r4, 0x6800
	  stw       r0, 0x0(r29)
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
 * Address:	801CA850
 * Size:	0001B4
 */
void NodeItemMgr<Game::ItemGate>::birth()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  mr        r30, r3
	  li        r3, 0x284
	  stw       r29, 0x14(r1)
	  bl        -0x1A69CC
	  mr.       r31, r3
	  beq-      .loc_0x14C
	  li        r4, 0x404
	  bl        0x1768
	  lis       r3, 0x804B
	  li        r0, 0
	  addi      r4, r3, 0x6E30
	  li        r3, 0x1C
	  stw       r4, 0x0(r31)
	  addi      r4, r4, 0x1B0
	  stw       r4, 0x178(r31)
	  stw       r0, 0x1D8(r31)
	  stw       r0, 0x1DC(r31)
	  bl        -0x1A6A04
	  cmplwi    r3, 0
	  beq-      .loc_0x90
	  lis       r4, 0x804B
	  lis       r5, 0x804B
	  addi      r0, r4, 0x6E18
	  lis       r4, 0x804B
	  stw       r0, 0x0(r3)
	  li        r6, -0x1
	  addi      r5, r5, 0x6E00
	  addi      r0, r4, 0x70DC
	  stw       r6, 0x18(r3)
	  stw       r5, 0x0(r3)
	  stw       r0, 0x0(r3)

	.loc_0x90:
	  stw       r3, 0x1D8(r31)
	  mr        r4, r31
	  lwz       r3, 0x1D8(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lis       r4, 0x804B
	  addi      r3, r31, 0x1E0
	  addi      r4, r4, 0x6BDC
	  stw       r4, 0x0(r31)
	  addi      r0, r4, 0x1B0
	  stw       r0, 0x178(r31)
	  bl        0x642B8
	  lis       r3, 0x804B
	  lis       r4, 0x8015
	  addi      r5, r3, 0x69B8
	  li        r6, 0x10
	  stw       r5, 0x0(r31)
	  addi      r0, r5, 0x1B0
	  addi      r3, r31, 0x224
	  addi      r4, r4, 0x1C68
	  stw       r0, 0x178(r31)
	  li        r5, 0
	  li        r7, 0x4
	  bl        -0x109108
	  li        r3, 0x8
	  bl        -0x1A6AA8
	  mr.       r0, r3
	  beq-      .loc_0x110
	  bl        -0x968FC
	  mr        r0, r3

	.loc_0x110:
	  stw       r0, 0x114(r31)
	  li        r3, 0
	  lfs       f0, -0x4DD0(r2)
	  li        r0, 0x3
	  lfs       f1, -0x4DCC(r2)
	  stfs      f0, 0x1D0(r31)
	  lfs       f0, -0x4DC8(r2)
	  stfs      f1, 0x200(r31)
	  stfs      f0, 0x208(r31)
	  stw       r3, 0x20C(r31)
	  stw       r0, 0x210(r31)
	  stfs      f1, 0x204(r31)
	  stb       r3, 0x218(r31)
	  stw       r3, 0x21C(r31)
	  stw       r3, 0x220(r31)

	.loc_0x14C:
	  stw       r30, 0x180(r31)
	  li        r3, 0x1C
	  bl        -0x1A6B00
	  mr.       r29, r3
	  beq-      .loc_0x170
	  bl        0x2469E0
	  lis       r3, 0x804B
	  addi      r0, r3, 0x6800
	  stw       r0, 0x0(r29)

	.loc_0x170:
	  stw       r31, 0x18(r29)
	  mr        r4, r29
	  addi      r3, r30, 0x6C
	  bl        0x246A3C
	  lwz       r3, 0x18(r29)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x24(r1)
	  mr        r3, r31
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
 * Address:	801CAA04
 * Size:	0001E8
 */
void NodeItemMgr<Game::ItemGate>::initDependency()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r4, 0x804B
	  addi      r3, r3, 0x4C
	  stw       r0, 0x24(r1)
	  li        r0, 0
	  addi      r4, r4, 0x5A7C
	  cmplwi    r0, 0
	  stw       r4, 0x8(r1)
	  stw       r0, 0x14(r1)
	  stw       r0, 0xC(r1)
	  stw       r3, 0x10(r1)
	  bne-      .loc_0x4C
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1B8

	.loc_0x4C:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0xB8

	.loc_0x64:
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
	  bne-      .loc_0x1B8
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0xB8:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x64
	  b         .loc_0x1B8

	.loc_0xD8:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1BC(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x128
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1B8

	.loc_0x128:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x19C

	.loc_0x148:
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
	  bne-      .loc_0x1B8
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0x19C:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x148

	.loc_0x1B8:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0xC(r1)
	  cmplw     r4, r3
	  bne+      .loc_0xD8
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801CABEC
 * Size:	000024
 */
void NodeItemMgr<Game::ItemGate>::kill(Game::ItemGate*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  addi      r3, r3, 0x4C
	  stw       r0, 0x14(r1)
	  bl        0x248
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801CAC10
 * Size:	00002C
 */
void NodeItemMgr<Game::ItemGate>::doAnimation()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwzu      r12, 0x4C(r3)
	  lwz       r12, 0x64(r12)
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
 * Address:	801CAC3C
 * Size:	00002C
 */
void NodeItemMgr<Game::ItemGate>::doEntry()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwzu      r12, 0x4C(r3)
	  lwz       r12, 0x68(r12)
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
 * Address:	801CAC68
 * Size:	00002C
 */
void NodeItemMgr<Game::ItemGate>::doSetView(int)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwzu      r12, 0x4C(r3)
	  lwz       r12, 0x6C(r12)
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
 * Address:	801CAC94
 * Size:	00002C
 */
void NodeItemMgr<Game::ItemGate>::doViewCalc()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwzu      r12, 0x4C(r3)
	  lwz       r12, 0x70(r12)
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
 * Address:	801CACC0
 * Size:	00002C
 */
void NodeItemMgr<Game::ItemGate>::doSimulation(float)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwzu      r12, 0x4C(r3)
	  lwz       r12, 0x74(r12)
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
 * Address:	801CACEC
 * Size:	00002C
 */
void NodeItemMgr<Game::ItemGate>::doDirectDraw(Graphics&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwzu      r12, 0x4C(r3)
	  lwz       r12, 0x78(r12)
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
 * Address:	801CAD18
 * Size:	000044
 */
void FSMItem<Game::ItemGate, Game::GateFSM, Game::GateState>::onKeyEvent(
    const SysShape::KeyEvent&)
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
 * Address:	801CAD5C
 * Size:	000004
 */
void ItemState<Game::ItemGate>::onDamage(Game::ItemGate*, float) { }

/*
 * --INFO--
 * Address:	801CAD60
 * Size:	000004
 */
void ItemState<Game::ItemGate>::onKeyEvent(Game::ItemGate*,
                                           const SysShape::KeyEvent&)
{
}

/*
 * --INFO--
 * Address:	801CAD64
 * Size:	000004
 */
void ItemState<Game::ItemGate>::onBounce(Game::ItemGate*, Sys::Triangle*) { }

/*
 * --INFO--
 * Address:	801CAD68
 * Size:	000004
 */
void ItemState<Game::ItemGate>::onPlatCollision(Game::ItemGate*,
                                                Game::PlatEvent&)
{
}

/*
 * --INFO--
 * Address:	801CAD6C
 * Size:	000004
 */
void ItemState<Game::ItemGate>::onCollision(Game::ItemGate*, Game::CollEvent&)
{
}

/*
 * --INFO--
 * Address:	801CAD70
 * Size:	000004
 */
void FSMState<Game::ItemGate>::init(Game::ItemGate*, Game::StateArg*) { }

/*
 * --INFO--
 * Address:	801CAD74
 * Size:	000004
 */
void FSMState<Game::ItemGate>::exec(Game::ItemGate*) { }

/*
 * --INFO--
 * Address:	801CAD78
 * Size:	000004
 */
void FSMState<Game::ItemGate>::cleanup(Game::ItemGate*) { }

/*
 * --INFO--
 * Address:	801CAD7C
 * Size:	000004
 */
void FSMState<Game::ItemGate>::resume(Game::ItemGate*) { }

/*
 * --INFO--
 * Address:	801CAD80
 * Size:	000004
 */
void FSMState<Game::ItemGate>::restart(Game::ItemGate*) { }

/*
 * --INFO--
 * Address:	801CAD84
 * Size:	000004
 */
void StateMachine<Game::ItemGate>::init(Game::ItemGate*) { }

/*
 * --INFO--
 * Address:	801CAD88
 * Size:	000038
 */
void StateMachine<Game::ItemGate>::exec(Game::ItemGate*)
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
 * Address:	801CADC0
 * Size:	000064
 */
void StateMachine<Game::ItemGate>::create(int)
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
	  bl        -0x1A6E3C
	  stw       r3, 0x4(r31)
	  lwz       r0, 0xC(r31)
	  rlwinm    r3,r0,2,0,29
	  bl        -0x1A6E4C
	  stw       r3, 0x10(r31)
	  lwz       r0, 0xC(r31)
	  rlwinm    r3,r0,2,0,29
	  bl        -0x1A6E5C
	  stw       r3, 0x14(r31)
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

} // namespace efx

/*
 * --INFO--
 * Address:	801CAE24
 * Size:	000008
 */
void NodeObjectMgr<Game::ItemGate>::get(void*)
{
	/*
	.loc_0x0:
	  lwz       r3, 0x18(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801CAE2C
 * Size:	000008
 */
void NodeObjectMgr<Game::ItemGate>::getNext(void*)
{
	/*
	.loc_0x0:
	  lwz       r3, 0x4(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801CAE34
 * Size:	000008
 */
void NodeObjectMgr<Game::ItemGate>::getStart()
{
	/*
	.loc_0x0:
	  lwz       r3, 0x30(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801CAE3C
 * Size:	000008
 */
u32 NodeObjectMgr<Game::ItemGate>::getEnd() { return 0x0; }

/*
 * --INFO--
 * Address:	801CAE44
 * Size:	000044
 */
void NodeObjectMgr<Game::ItemGate>::delNode(Game::ItemGate*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x30(r3)
	  b         .loc_0x2C

	.loc_0x14:
	  lwz       r0, 0x18(r3)
	  cmplw     r0, r4
	  bne-      .loc_0x28
	  bl        0x24676C
	  b         .loc_0x34

	.loc_0x28:
	  lwz       r3, 0x4(r3)

	.loc_0x2C:
	  cmplwi    r3, 0
	  bne+      .loc_0x14

	.loc_0x34:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801CAE88
 * Size:	000018
 */
void NodeObjectMgr<Game::ItemGate>::resetMgr()
{
	/*
	.loc_0x0:
	  li        r0, 0
	  stw       r0, 0x30(r3)
	  stw       r0, 0x2C(r3)
	  stw       r0, 0x28(r3)
	  stw       r0, 0x24(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801CAEA0
 * Size:	0001E4
 */
void ObjectMgr<Game::ItemGate>::doAnimation()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r4, 0x804B
	  stw       r0, 0x24(r1)
	  li        r0, 0
	  addi      r4, r4, 0x5A7C
	  cmplwi    r0, 0
	  stw       r0, 0x14(r1)
	  stw       r4, 0x8(r1)
	  stw       r0, 0xC(r1)
	  stw       r3, 0x10(r1)
	  bne-      .loc_0x48
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1B4

	.loc_0x48:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0xB4

	.loc_0x60:
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
	  bne-      .loc_0x1B4
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0xB4:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x60
	  b         .loc_0x1B4

	.loc_0xD4:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x124
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1B4

	.loc_0x124:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x198

	.loc_0x144:
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
	  bne-      .loc_0x1B4
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0x198:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x144

	.loc_0x1B4:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0xC(r1)
	  cmplw     r4, r3
	  bne+      .loc_0xD4
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801CB084
 * Size:	0001E4
 */
void ObjectMgr<Game::ItemGate>::doEntry()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r4, 0x804B
	  stw       r0, 0x24(r1)
	  li        r0, 0
	  addi      r4, r4, 0x5A7C
	  cmplwi    r0, 0
	  stw       r0, 0x14(r1)
	  stw       r4, 0x8(r1)
	  stw       r0, 0xC(r1)
	  stw       r3, 0x10(r1)
	  bne-      .loc_0x48
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1B4

	.loc_0x48:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0xB4

	.loc_0x60:
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
	  bne-      .loc_0x1B4
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0xB4:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x60
	  b         .loc_0x1B4

	.loc_0xD4:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x40(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x124
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1B4

	.loc_0x124:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x198

	.loc_0x144:
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
	  bne-      .loc_0x1B4
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0x198:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x144

	.loc_0x1B4:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0xC(r1)
	  cmplw     r4, r3
	  bne+      .loc_0xD4
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801CB268
 * Size:	0001F4
 */
void ObjectMgr<Game::ItemGate>::doSetView(int)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r5, 0x804B
	  stw       r0, 0x24(r1)
	  li        r0, 0
	  addi      r5, r5, 0x5A7C
	  stw       r31, 0x1C(r1)
	  cmplwi    r0, 0
	  mr        r31, r4
	  stw       r0, 0x14(r1)
	  stw       r5, 0x8(r1)
	  stw       r0, 0xC(r1)
	  stw       r3, 0x10(r1)
	  bne-      .loc_0x50
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1C0

	.loc_0x50:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0xBC

	.loc_0x68:
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
	  bne-      .loc_0x1C0
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0xBC:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x68
	  b         .loc_0x1C0

	.loc_0xDC:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  mr        r4, r31
	  lwz       r12, 0x44(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x130
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1C0

	.loc_0x130:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1A4

	.loc_0x150:
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
	  bne-      .loc_0x1C0
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0x1A4:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x150

	.loc_0x1C0:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0xC(r1)
	  cmplw     r4, r3
	  bne+      .loc_0xDC
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801CB45C
 * Size:	0001E4
 */
void ObjectMgr<Game::ItemGate>::doViewCalc()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r4, 0x804B
	  stw       r0, 0x24(r1)
	  li        r0, 0
	  addi      r4, r4, 0x5A7C
	  cmplwi    r0, 0
	  stw       r0, 0x14(r1)
	  stw       r4, 0x8(r1)
	  stw       r0, 0xC(r1)
	  stw       r3, 0x10(r1)
	  bne-      .loc_0x48
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1B4

	.loc_0x48:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0xB4

	.loc_0x60:
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
	  bne-      .loc_0x1B4
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0xB4:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x60
	  b         .loc_0x1B4

	.loc_0xD4:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x48(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x124
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1B4

	.loc_0x124:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x198

	.loc_0x144:
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
	  bne-      .loc_0x1B4
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0x198:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x144

	.loc_0x1B4:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0xC(r1)
	  cmplw     r4, r3
	  bne+      .loc_0xD4
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801CB640
 * Size:	0001F4
 */
void ObjectMgr<Game::ItemGate>::doSimulation(float)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r4, 0x804B
	  stw       r0, 0x24(r1)
	  li        r0, 0
	  addi      r4, r4, 0x5A7C
	  stfd      f31, 0x18(r1)
	  fmr       f31, f1
	  cmplwi    r0, 0
	  stw       r4, 0x8(r1)
	  stw       r0, 0x14(r1)
	  stw       r0, 0xC(r1)
	  stw       r3, 0x10(r1)
	  bne-      .loc_0x50
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1C0

	.loc_0x50:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0xBC

	.loc_0x68:
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
	  bne-      .loc_0x1C0
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0xBC:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x68
	  b         .loc_0x1C0

	.loc_0xDC:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  fmr       f1, f31
	  lwz       r12, 0x4C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x130
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1C0

	.loc_0x130:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1A4

	.loc_0x150:
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
	  bne-      .loc_0x1C0
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0x1A4:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x150

	.loc_0x1C0:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0xC(r1)
	  cmplw     r4, r3
	  bne+      .loc_0xDC
	  lwz       r0, 0x24(r1)
	  lfd       f31, 0x18(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801CB834
 * Size:	0001F4
 */
void ObjectMgr<Game::ItemGate>::doDirectDraw(Graphics&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r5, 0x804B
	  stw       r0, 0x24(r1)
	  li        r0, 0
	  addi      r5, r5, 0x5A7C
	  stw       r31, 0x1C(r1)
	  cmplwi    r0, 0
	  mr        r31, r4
	  stw       r0, 0x14(r1)
	  stw       r5, 0x8(r1)
	  stw       r0, 0xC(r1)
	  stw       r3, 0x10(r1)
	  bne-      .loc_0x50
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1C0

	.loc_0x50:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0xBC

	.loc_0x68:
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
	  bne-      .loc_0x1C0
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0xBC:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x68
	  b         .loc_0x1C0

	.loc_0xDC:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  mr        r4, r31
	  lwz       r12, 0x50(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x130
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1C0

	.loc_0x130:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1A4

	.loc_0x150:
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
	  bne-      .loc_0x1C0
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0x1A4:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x150

	.loc_0x1C0:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0xC(r1)
	  cmplw     r4, r3
	  bne+      .loc_0xDC
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801CBA28
 * Size:	00002C
 */
void Container<Game::ItemGate>::getObject(void*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
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
 * Address:	801CBA54
 * Size:	000008
 */
u32 Container<Game::ItemGate>::getAt(int) { return 0x0; }

/*
 * --INFO--
 * Address:	801CBA5C
 * Size:	000008
 */
u32 Container<Game::ItemGate>::getTo() { return 0x0; }

namespace Game {

/*
 * --INFO--
 * Address:	801CBA64
 * Size:	00009C
 */
void StateMachine<Game::ItemGate>::transit(Game::ItemGate*, int,
                                           Game::StateArg*)
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
 * Address:	801CBB00
 * Size:	000084
 */
void StateMachine<Game::ItemGate>::registerState(
    Game::FSMState<Game::ItemGate>*)
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

namespace Game {

	/*
	 * --INFO--
	 * Address:	801CBB84
	 * Size:	000044
	 */
	void FSMItem<Game::ItemGate, Game::GateFSM, GateState>::platCallback(
	    Game::PlatEvent&)
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
	 * Address:	801CBBC8
	 * Size:	000044
	 */
	void FSMItem<Game::ItemGate, Game::GateFSM, GateState>::collisionCallback(
	    Game::CollEvent&)
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
	 * Address:	801CBC0C
	 * Size:	000044
	 */
	void FSMItem<Game::ItemGate, Game::GateFSM, GateState>::bounceCallback(
	    Sys::Triangle*)
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

} // namespace Game

/*
 * --INFO--
 * Address:	801CBC50
 * Size:	00002C
 */
void NodeItemMgr<Game::ItemGate>::getEnd()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwzu      r12, 0x4C(r3)
	  lwz       r12, 0x1C(r12)
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
 * Address:	801CBC7C
 * Size:	00002C
 */
void NodeItemMgr<Game::ItemGate>::getStart()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwzu      r12, 0x4C(r3)
	  lwz       r12, 0x18(r12)
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
 * Address:	801CBCA8
 * Size:	00002C
 */
void NodeItemMgr<Game::ItemGate>::getNext(void*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwzu      r12, 0x4C(r3)
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
 * Address:	801CBCD4
 * Size:	00002C
 */
void NodeItemMgr<Game::ItemGate>::get(void*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwzu      r12, 0x4C(r3)
	  lwz       r12, 0x20(r12)
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
 * Address:	801CBD00
 * Size:	000240
 */
void NodeItemMgr<Game::ItemGate>::killAll()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  lis       r4, 0x804B
	  addi      r3, r3, 0x4C
	  stw       r0, 0x34(r1)
	  li        r0, 0
	  addi      r4, r4, 0x5A7C
	  stw       r31, 0x2C(r1)
	  cmplwi    r0, 0
	  stw       r30, 0x28(r1)
	  stw       r4, 0x10(r1)
	  stw       r0, 0x1C(r1)
	  stw       r0, 0x14(r1)
	  stw       r3, 0x18(r1)
	  bne-      .loc_0x54
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x14(r1)
	  b         .loc_0xDC

	.loc_0x54:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x14(r1)
	  b         .loc_0xC0

	.loc_0x6C:
	  lwz       r3, 0x18(r1)
	  lwz       r4, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x1C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0xDC
	  lwz       r3, 0x18(r1)
	  lwz       r4, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x14(r1)

	.loc_0xC0:
	  lwz       r12, 0x10(r1)
	  addi      r3, r1, 0x10
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x6C

	.loc_0xDC:
	  lis       r3, 0x804B
	  subi      r31, r3, 0x5D30
	  b         .loc_0x208

	.loc_0xE8:
	  lwz       r3, 0x18(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  li        r0, 0x1
	  stw       r31, 0x8(r1)
	  mr        r30, r3
	  stw       r0, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x130
	  mr        r3, r30
	  addi      r4, r1, 0x8
	  bl        -0x90D3C

	.loc_0x130:
	  lwz       r4, 0x17C(r30)
	  cmplwi    r4, 0
	  beq-      .loc_0x14C
	  lwz       r3, -0x6E44(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x14C
	  bl        -0x1A5224

	.loc_0x14C:
	  lwz       r0, 0x1C(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x178
	  lwz       r3, 0x18(r1)
	  lwz       r4, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x14(r1)
	  b         .loc_0x208

	.loc_0x178:
	  lwz       r3, 0x18(r1)
	  lwz       r4, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x14(r1)
	  b         .loc_0x1EC

	.loc_0x198:
	  lwz       r3, 0x18(r1)
	  lwz       r4, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x1C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x208
	  lwz       r3, 0x18(r1)
	  lwz       r4, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x14(r1)

	.loc_0x1EC:
	  lwz       r12, 0x10(r1)
	  addi      r3, r1, 0x10
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x198

	.loc_0x208:
	  lwz       r3, 0x18(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x14(r1)
	  cmplw     r4, r3
	  bne+      .loc_0xE8
	  lwz       r0, 0x34(r1)
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

} // namespace Game

/*
 * --INFO--
 * Address:	801CBF40
 * Size:	000028
 */
void __sinit_itemGate_cpp(void)
{
	/*
	.loc_0x0:
	  lis       r4, 0x8051
	  li        r0, -0x1
	  lfs       f0, 0x48B0(r4)
	  lis       r3, 0x804B
	  stw       r0, -0x6BD8(r13)
	  stfsu     f0, 0x6558(r3)
	  stfs      f0, -0x6BD4(r13)
	  stfs      f0, 0x4(r3)
	  stfs      f0, 0x8(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801CBF68
 * Size:	000008
 */
void Game::FSMItem<Game::ItemGate, Game::GateFSM, Game::GateState>::@376
    @onKeyEvent(const SysShape::KeyEvent&)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x178
	  b         -0x1254
	*/
}

namespace Game {

/*
 * --INFO--
 * Address:	801CBF70
 * Size:	000008
 */
void ItemGate::@376 @onKeyEvent(const SysShape::KeyEvent&)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x178
	  b         -0x4098
	*/
}

namespace efx {

	/*
	 * --INFO--
	 * Address:	801CBF78
	 * Size:	000008
	 */
	TEgateA::@4 @~TEgateA()
	{
		/*
		.loc_0x0:
		  subi      r3, r3, 0x4
		  b         -0x193C
		*/
	}

} // namespace efx

} // namespace Game

/*
 * --INFO--
 * Address:	801CBF80
 * Size:	000008
 */
void NodeObjectMgr<Game::ItemGate>::@28 @resetMgr()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x1C
	  b         -0x10FC
	*/
}

/*
 * --INFO--
 * Address:	801CBF88
 * Size:	000008
 */
void ObjectMgr<Game::ItemGate>::@28 @doDirectDraw(Graphics&)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x1C
	  b         -0x758
	*/
}

/*
 * --INFO--
 * Address:	801CBF90
 * Size:	000008
 */
void ObjectMgr<Game::ItemGate>::@28 @doSimulation(float)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x1C
	  b         -0x954
	*/
}

/*
 * --INFO--
 * Address:	801CBF98
 * Size:	000008
 */
void ObjectMgr<Game::ItemGate>::@28 @doViewCalc()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x1C
	  b         -0xB40
	*/
}

/*
 * --INFO--
 * Address:	801CBFA0
 * Size:	000008
 */
void ObjectMgr<Game::ItemGate>::@28 @doSetView(int)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x1C
	  b         -0xD3C
	*/
}

/*
 * --INFO--
 * Address:	801CBFA8
 * Size:	000008
 */
void ObjectMgr<Game::ItemGate>::@28 @doEntry()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x1C
	  b         -0xF28
	*/
}

/*
 * --INFO--
 * Address:	801CBFB0
 * Size:	000008
 */
void ObjectMgr<Game::ItemGate>::@28 @doAnimation()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x1C
	  b         -0x1114
	*/
}

namespace Game {

/*
 * --INFO--
 * Address:	801CBFB8
 * Size:	000008
 */
NodeItemMgr<Game::ItemGate>::@48 @~ItemGate > ()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x30
	  b         -0x2158
	*/
}

/*
 * --INFO--
 * Address:	801CBFC0
 * Size:	000008
 */
void NodeItemMgr<Game::ItemGate>::@48 @getEnd()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x30
	  b         -0x374
	*/
}

/*
 * --INFO--
 * Address:	801CBFC8
 * Size:	000008
 */
void NodeItemMgr<Game::ItemGate>::@48 @getStart()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x30
	  b         -0x350
	*/
}

/*
 * --INFO--
 * Address:	801CBFD0
 * Size:	000008
 */
void NodeItemMgr<Game::ItemGate>::@48 @getNext(void*)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x30
	  b         -0x32C
	*/
}

/*
 * --INFO--
 * Address:	801CBFD8
 * Size:	000008
 */
void NodeItemMgr<Game::ItemGate>::@48 @get(void*)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x30
	  b         -0x308
	*/
}

/*
 * --INFO--
 * Address:	801CBFE0
 * Size:	000008
 */
ItemDengekiGate::Mgr::@48 @~Mgr()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x30
	  b         -0x1C18
	*/
}
} // namespace Game
