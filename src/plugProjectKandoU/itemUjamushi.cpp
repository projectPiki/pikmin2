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
 * Address:	80205A28
 * Size:	0003D4
 */
void Game::ItemUjamushi::BoidParms::__ct(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  extsh.    r0, r4
	  lis       r4, 0x8048
	  stw       r31, 0xC(r1)
	  addi      r31, r4, 0x1D40
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  beq-      .loc_0x30
	  addi      r0, r30, 0x264
	  stw       r0, 0x0(r30)

	.loc_0x30:
	  li        r0, 0
	  lis       r5, 0x7030
	  stw       r0, 0x4(r30)
	  addi      r0, r31, 0x1C
	  mr        r4, r30
	  addi      r3, r30, 0xC
	  stw       r0, 0x8(r30)
	  addi      r5, r5, 0x3030
	  addi      r6, r31, 0x28
	  bl        0x20DBDC
	  lis       r3, 0x804B
	  lis       r5, 0x7030
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x45D0(r2)
	  stw       r0, 0xC(r30)
	  mr        r4, r30
	  lfs       f1, -0x45CC(r2)
	  addi      r3, r30, 0x34
	  stfs      f0, 0x24(r30)
	  addi      r5, r5, 0x3031
	  lfs       f0, -0x45C8(r2)
	  addi      r6, r31, 0x34
	  stfs      f1, 0x2C(r30)
	  stfs      f0, 0x30(r30)
	  bl        0x20DBA0
	  lis       r3, 0x804B
	  lis       r5, 0x7030
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x45C4(r2)
	  stw       r0, 0x34(r30)
	  mr        r4, r30
	  lfs       f1, -0x45CC(r2)
	  addi      r3, r30, 0x5C
	  stfs      f0, 0x4C(r30)
	  addi      r5, r5, 0x3032
	  lfs       f0, -0x45C8(r2)
	  addi      r6, r31, 0x40
	  stfs      f1, 0x54(r30)
	  stfs      f0, 0x58(r30)
	  bl        0x20DB64
	  lis       r3, 0x804B
	  lis       r5, 0x7030
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x45C0(r2)
	  stw       r0, 0x5C(r30)
	  mr        r4, r30
	  lfs       f1, -0x45CC(r2)
	  addi      r3, r30, 0x84
	  stfs      f0, 0x74(r30)
	  addi      r5, r5, 0x3033
	  lfs       f0, -0x45C8(r2)
	  subi      r6, r2, 0x45BC
	  stfs      f1, 0x7C(r30)
	  stfs      f0, 0x80(r30)
	  bl        0x20DB28
	  lis       r3, 0x804B
	  lis       r5, 0x7030
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x45C0(r2)
	  stw       r0, 0x84(r30)
	  mr        r4, r30
	  lfs       f1, -0x45CC(r2)
	  addi      r3, r30, 0xAC
	  stfs      f0, 0x9C(r30)
	  addi      r5, r5, 0x3034
	  lfs       f0, -0x45C8(r2)
	  subi      r6, r2, 0x45B4
	  stfs      f1, 0xA4(r30)
	  stfs      f0, 0xA8(r30)
	  bl        0x20DAEC
	  lis       r3, 0x804B
	  lis       r5, 0x7030
	  subi      r0, r3, 0x5344
	  lfs       f1, -0x45CC(r2)
	  stw       r0, 0xAC(r30)
	  mr        r4, r30
	  lfs       f0, -0x45C8(r2)
	  addi      r3, r30, 0xD4
	  stfs      f1, 0xC4(r30)
	  addi      r5, r5, 0x3035
	  subi      r6, r2, 0x45AC
	  stfs      f1, 0xCC(r30)
	  stfs      f0, 0xD0(r30)
	  bl        0x20DAB4
	  lis       r3, 0x804B
	  lis       r5, 0x7030
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x45A4(r2)
	  stw       r0, 0xD4(r30)
	  mr        r4, r30
	  lfs       f1, -0x45CC(r2)
	  addi      r3, r30, 0xFC
	  stfs      f0, 0xEC(r30)
	  addi      r5, r5, 0x3036
	  lfs       f0, -0x45C8(r2)
	  subi      r6, r2, 0x45A0
	  stfs      f1, 0xF4(r30)
	  stfs      f0, 0xF8(r30)
	  bl        0x20DA78
	  lis       r3, 0x804B
	  lis       r5, 0x7030
	  subi      r0, r3, 0x5344
	  lfs       f1, -0x45CC(r2)
	  stw       r0, 0xFC(r30)
	  mr        r4, r30
	  lfs       f0, -0x45C8(r2)
	  addi      r3, r30, 0x124
	  stfs      f1, 0x114(r30)
	  addi      r5, r5, 0x3038
	  subi      r6, r2, 0x4598
	  stfs      f1, 0x11C(r30)
	  stfs      f0, 0x120(r30)
	  bl        0x20DA40
	  lis       r3, 0x804B
	  lis       r5, 0x7030
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x4590(r2)
	  stw       r0, 0x124(r30)
	  mr        r4, r30
	  lfs       f1, -0x45CC(r2)
	  addi      r3, r30, 0x14C
	  stfs      f0, 0x13C(r30)
	  addi      r5, r5, 0x3039
	  lfs       f0, -0x45C8(r2)
	  subi      r6, r2, 0x458C
	  stfs      f1, 0x144(r30)
	  stfs      f0, 0x148(r30)
	  bl        0x20DA04
	  lis       r3, 0x804B
	  lis       r5, 0x7030
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x4584(r2)
	  stw       r0, 0x14C(r30)
	  mr        r4, r30
	  lfs       f1, -0x45CC(r2)
	  addi      r3, r30, 0x174
	  stfs      f0, 0x164(r30)
	  addi      r5, r5, 0x3130
	  lfs       f0, -0x45C8(r2)
	  addi      r6, r31, 0x4C
	  stfs      f1, 0x16C(r30)
	  stfs      f0, 0x170(r30)
	  bl        0x20D9C8
	  lis       r3, 0x804B
	  lis       r5, 0x7030
	  subi      r0, r3, 0x5344
	  lfs       f1, -0x45C8(r2)
	  stw       r0, 0x174(r30)
	  mr        r4, r30
	  lfs       f0, -0x45CC(r2)
	  addi      r3, r30, 0x19C
	  stfs      f1, 0x18C(r30)
	  addi      r5, r5, 0x3131
	  addi      r6, r31, 0x58
	  stfs      f0, 0x194(r30)
	  stfs      f1, 0x198(r30)
	  bl        0x20D990
	  lis       r3, 0x804B
	  lis       r5, 0x7030
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x4580(r2)
	  stw       r0, 0x19C(r30)
	  mr        r4, r30
	  lfs       f1, -0x45C0(r2)
	  addi      r3, r30, 0x1C4
	  stfs      f0, 0x1B4(r30)
	  addi      r5, r5, 0x3132
	  lfs       f0, -0x457C(r2)
	  subi      r6, r2, 0x4578
	  stfs      f1, 0x1BC(r30)
	  stfs      f0, 0x1C0(r30)
	  bl        0x20D954
	  lis       r3, 0x804B
	  lis       r5, 0x7030
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x4580(r2)
	  stw       r0, 0x1C4(r30)
	  mr        r4, r30
	  lfs       f1, -0x45CC(r2)
	  addi      r3, r30, 0x1EC
	  stfs      f0, 0x1DC(r30)
	  addi      r5, r5, 0x3133
	  lfs       f0, -0x4574(r2)
	  addi      r6, r31, 0x64
	  stfs      f1, 0x1E4(r30)
	  stfs      f0, 0x1E8(r30)
	  bl        0x20D918
	  lis       r3, 0x804B
	  lis       r5, 0x7030
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x4570(r2)
	  stw       r0, 0x1EC(r30)
	  mr        r4, r30
	  lfs       f1, -0x45CC(r2)
	  addi      r3, r30, 0x214
	  stfs      f0, 0x204(r30)
	  addi      r5, r5, 0x3134
	  lfs       f0, -0x456C(r2)
	  addi      r6, r31, 0x70
	  stfs      f1, 0x20C(r30)
	  stfs      f0, 0x210(r30)
	  bl        0x20D8DC
	  lis       r3, 0x804B
	  lis       r5, 0x7030
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x4574(r2)
	  stw       r0, 0x214(r30)
	  mr        r4, r30
	  lfs       f1, -0x45CC(r2)
	  addi      r3, r30, 0x23C
	  stfs      f0, 0x22C(r30)
	  addi      r5, r5, 0x3037
	  lfs       f0, -0x4568(r2)
	  addi      r6, r31, 0x7C
	  stfs      f1, 0x234(r30)
	  stfs      f0, 0x238(r30)
	  bl        0x20D8A0
	  lis       r3, 0x804B
	  lfs       f2, -0x4564(r2)
	  subi      r0, r3, 0x5344
	  lfs       f1, -0x45CC(r2)
	  stw       r0, 0x23C(r30)
	  mr        r3, r30
	  lfs       f0, -0x4574(r2)
	  stfs      f2, 0x254(r30)
	  stfs      f1, 0x25C(r30)
	  stfs      f0, 0x260(r30)
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
 * Address:	80205DFC
 * Size:	000138
 */
void Game::ItemUjamushi::BoidParms::blendTo((Game::ItemUjamushi::BoidParms&,
                                             Game::ItemUjamushi::BoidParms&,
                                             float))
{
	/*
	.loc_0x0:
	  lfs       f0, -0x45C0(r2)
	  lfs       f2, 0x24(r4)
	  fsubs     f0, f0, f1
	  lfs       f3, 0x24(r3)
	  fmuls     f2, f1, f2
	  fmadds    f2, f0, f3, f2
	  stfs      f2, 0x24(r5)
	  lfs       f2, 0x4C(r4)
	  lfs       f3, 0x4C(r3)
	  fmuls     f2, f1, f2
	  fmadds    f2, f0, f3, f2
	  stfs      f2, 0x4C(r5)
	  lfs       f2, 0x74(r4)
	  lfs       f3, 0x74(r3)
	  fmuls     f2, f1, f2
	  fmadds    f2, f0, f3, f2
	  stfs      f2, 0x74(r5)
	  lfs       f2, 0x9C(r4)
	  lfs       f3, 0x9C(r3)
	  fmuls     f2, f1, f2
	  fmadds    f2, f0, f3, f2
	  stfs      f2, 0x9C(r5)
	  lfs       f2, 0xC4(r4)
	  lfs       f3, 0xC4(r3)
	  fmuls     f2, f1, f2
	  fmadds    f2, f0, f3, f2
	  stfs      f2, 0xC4(r5)
	  lfs       f2, 0xEC(r4)
	  lfs       f3, 0xEC(r3)
	  fmuls     f2, f1, f2
	  fmadds    f2, f0, f3, f2
	  stfs      f2, 0xEC(r5)
	  lfs       f2, 0x114(r4)
	  lfs       f3, 0x114(r3)
	  fmuls     f2, f1, f2
	  fmadds    f2, f0, f3, f2
	  stfs      f2, 0x114(r5)
	  lfs       f2, 0x13C(r4)
	  lfs       f3, 0x13C(r3)
	  fmuls     f2, f1, f2
	  fmadds    f2, f0, f3, f2
	  stfs      f2, 0x13C(r5)
	  lfs       f2, 0x164(r4)
	  lfs       f3, 0x164(r3)
	  fmuls     f2, f1, f2
	  fmadds    f2, f0, f3, f2
	  stfs      f2, 0x164(r5)
	  lfs       f2, 0x18C(r4)
	  lfs       f3, 0x18C(r3)
	  fmuls     f2, f1, f2
	  fmadds    f2, f0, f3, f2
	  stfs      f2, 0x18C(r5)
	  lfs       f2, 0x1B4(r4)
	  lfs       f3, 0x1B4(r3)
	  fmuls     f2, f1, f2
	  fmadds    f2, f0, f3, f2
	  stfs      f2, 0x1B4(r5)
	  lfs       f2, 0x1DC(r4)
	  lfs       f3, 0x1DC(r3)
	  fmuls     f2, f1, f2
	  fmadds    f2, f0, f3, f2
	  stfs      f2, 0x1DC(r5)
	  lfs       f2, 0x204(r4)
	  lfs       f3, 0x204(r3)
	  fmuls     f2, f1, f2
	  fmadds    f2, f0, f3, f2
	  stfs      f2, 0x204(r5)
	  lfs       f2, 0x22C(r4)
	  lfs       f3, 0x22C(r3)
	  fmuls     f2, f1, f2
	  fmadds    f2, f0, f3, f2
	  stfs      f2, 0x22C(r5)
	  lfs       f2, 0x254(r4)
	  lfs       f3, 0x254(r3)
	  fmuls     f1, f1, f2
	  fmadds    f0, f0, f3, f1
	  stfs      f0, 0x254(r5)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80205F34
 * Size:	00004C
 */
void Game::ItemUjamushi::BoidParameter::__ct(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        0x20B448
	  lis       r4, 0x804C
	  addi      r3, r31, 0x18
	  subi      r0, r4, 0x568
	  stw       r0, 0x0(r31)
	  bl        0x84
	  mr        r3, r31
	  bl        0x184
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
 * Address:	80205F80
 * Size:	000060
 */
void Game::ItemUjamushi::BoidParameter::TNode::__dt(void)
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
	  lis       r5, 0x804C
	  li        r4, 0
	  subi      r0, r5, 0x578
	  stw       r0, 0x0(r30)
	  bl        0x20B5D8
	  extsh.    r0, r31
	  ble-      .loc_0x44
	  mr        r3, r30
	  bl        -0x1E1F0C

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
 * Address:	80205FE0
 * Size:	000048
 */
void Game::ItemUjamushi::BoidParameter::TNode::__ct(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        0x20B39C
	  lis       r4, 0x804C
	  addi      r3, r31, 0x18
	  subi      r0, r4, 0x578
	  li        r4, 0x1
	  stw       r0, 0x0(r31)
	  bl        -0x5E4
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
 * Address:	80206028
 * Size:	0000C0
 */
void Game::ItemUjamushi::BoidParameter::getParms(
    (int, int, float, Game::ItemUjamushi::BoidParms&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stfd      f31, 0x18(r1)
	  fmr       f31, f1
	  stw       r31, 0x14(r1)
	  mr        r31, r5
	  stw       r30, 0x10(r1)
	  stw       r29, 0xC(r1)
	  mr        r29, r6
	  stw       r28, 0x8(r1)
	  mr        r28, r3
	  addi      r3, r28, 0x18
	  bl        0x20B640
	  mr        r30, r3
	  mr        r4, r31
	  addi      r3, r28, 0x18
	  bl        0x20B630
	  cmplwi    r30, 0
	  mr        r31, r3
	  li        r0, 0
	  beq-      .loc_0x64
	  cmplwi    r31, 0
	  beq-      .loc_0x64
	  li        r0, 0x1

	.loc_0x64:
	  rlwinm.   r0,r0,0,24,31
	  bne-      .loc_0x88
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  addi      r3, r3, 0x1DC8
	  li        r4, 0x8F
	  addi      r5, r5, 0x1DDC
	  crclr     6, 0x6
	  bl        -0x1DBA6C

	.loc_0x88:
	  fmr       f1, f31
	  mr        r5, r29
	  addi      r3, r30, 0x18
	  addi      r4, r31, 0x18
	  bl        -0x2C4
	  lwz       r0, 0x24(r1)
	  lfd       f31, 0x18(r1)
	  lwz       r31, 0x14(r1)
	  lwz       r30, 0x10(r1)
	  lwz       r29, 0xC(r1)
	  lwz       r28, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802060E8
 * Size:	000048
 */
void Game::ItemUjamushi::BoidParameter::newParms(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  li        r3, 0x280
	  bl        -0x1E225C
	  mr.       r4, r3
	  beq-      .loc_0x2C
	  bl        -0x12C
	  mr        r4, r3

	.loc_0x2C:
	  addi      r3, r31, 0x18
	  bl        0x20B2F0
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
 * Size:	0000A8
 */
void Game::ItemUjamushi::BoidParameter::write((Stream&))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80206130
 * Size:	0000A8
 */
void Game::ItemUjamushi::BoidParameter::read((Stream&))
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
	  mr        r29, r3
	  stw       r28, 0x10(r1)
	  mr        r28, r4
	  stw       r0, 0x28(r3)
	  mr        r3, r28
	  stw       r0, 0x24(r29)
	  stw       r0, 0x20(r29)
	  stw       r0, 0x1C(r29)
	  bl        0x20E924
	  mr        r31, r3
	  li        r30, 0
	  b         .loc_0x58

	.loc_0x4C:
	  mr        r3, r29
	  bl        -0x98
	  addi      r30, r30, 0x1

	.loc_0x58:
	  cmpw      r30, r31
	  blt+      .loc_0x4C
	  lwz       r30, 0x28(r29)
	  li        r29, 0
	  b         .loc_0x80

	.loc_0x6C:
	  mr        r4, r28
	  addi      r3, r30, 0x18
	  bl        0x20D650
	  lwz       r30, 0x4(r30)
	  addi      r29, r29, 0x1

	.loc_0x80:
	  cmpw      r29, r31
	  blt+      .loc_0x6C
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
 * Address:	........
 * Size:	000148
 */
void Game::ItemUjamushi::UjaParms::__ct(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	802061D8
 * Size:	0000A8
 */
void Game::ItemUjamushi::Uja::__ct(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r4, 0x804C
	  stw       r0, 0x14(r1)
	  subi      r0, r4, 0x59C
	  li        r4, 0
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lis       r3, 0x804C
	  stw       r0, 0xC(r31)
	  subi      r0, r3, 0x5C0
	  addi      r3, r31, 0x78
	  stb       r4, 0x40(r31)
	  stw       r0, 0xC(r31)
	  bl        -0x6FBA0
	  lfs       f0, -0x45CC(r2)
	  li        r3, 0
	  li        r0, 0x4
	  stfs      f0, 0x0(r31)
	  stfs      f0, 0x4(r31)
	  stfs      f0, 0x8(r31)
	  stfs      f0, 0x50(r31)
	  stfs      f0, 0x54(r31)
	  stfs      f0, 0x58(r31)
	  stw       r3, 0x74(r31)
	  stw       r0, 0xBC(r31)
	  lwz       r0, 0xBC(r31)
	  rlwinm    r3,r0,2,0,29
	  bl        -0x1E229C
	  stw       r3, 0xC0(r31)
	  lwz       r0, 0xBC(r31)
	  rlwinm    r3,r0,2,0,29
	  bl        -0x1E22AC
	  stw       r3, 0xC4(r31)
	  mr        r3, r31
	  bl        0x44
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
 * Address:	........
 * Size:	000160
 */
void init__Q34Game12ItemUjamushi3UjaFPQ34Game12ItemUjamushi6UjaMgrR10Vector3<
    float>(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80206280
 * Size:	000028
 */
void Game::ItemUjamushi::Uja::damaged((float))
{
	/*
	.loc_0x0:
	  lfs       f2, 0xA8(r3)
	  lfs       f0, -0x45CC(r2)
	  fsubs     f1, f2, f1
	  stfs      f1, 0xA8(r3)
	  lfs       f1, 0xA8(r3)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  mfcr      r0
	  rlwinm    r3,r0,3,31,31
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000A4
 */
void setPosition__Q34Game12ItemUjamushi3UjaFR10Vector3<float>(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	802062A8
 * Size:	00003C
 */
void Game::ItemUjamushi::Uja::clearBuffer(void)
{
	/*
	.loc_0x0:
	  li        r6, 0
	  lfs       f0, -0x4538(r2)
	  mr        r5, r6
	  li        r7, 0
	  b         .loc_0x2C

	.loc_0x14:
	  lwz       r4, 0xC0(r3)
	  addi      r7, r7, 0x1
	  stwx      r5, r4, r6
	  lwz       r4, 0xC4(r3)
	  stfsx     f0, r4, r6
	  addi      r6, r6, 0x4

	.loc_0x2C:
	  lwz       r0, 0xBC(r3)
	  cmpw      r7, r0
	  blt+      .loc_0x14
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802062E4
 * Size:	000318
 */
void Game::ItemUjamushi::Uja::updateBuffer(void)
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
	  stw       r29, 0x34(r1)
	  stw       r28, 0x30(r1)
	  mr        r31, r3
	  addi      r3, r31, 0x78
	  bl        -0x6FC88
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x2F0
	  li        r0, 0
	  lwz       r3, -0x6D0C(r13)
	  lis       r4, 0x804B
	  stw       r0, 0x20(r1)
	  subi      r4, r4, 0x4364
	  cmplwi    r0, 0
	  stw       r4, 0x14(r1)
	  stw       r0, 0x18(r1)
	  stw       r3, 0x1C(r1)
	  bne-      .loc_0x78
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x18(r1)
	  b         .loc_0x2D0

	.loc_0x78:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x18(r1)
	  b         .loc_0xE4

	.loc_0x90:
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
	  bne-      .loc_0x2D0
	  lwz       r3, 0x1C(r1)
	  lwz       r4, 0x18(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x18(r1)

	.loc_0xE4:
	  lwz       r12, 0x14(r1)
	  addi      r3, r1, 0x14
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x90
	  b         .loc_0x2D0

	.loc_0x104:
	  lwz       r3, 0x1C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  mr        r30, r3
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x214
	  mr        r4, r30
	  addi      r3, r1, 0x8
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f1, 0xC(r1)
	  lfs       f0, 0x4(r31)
	  lfs       f3, 0x10(r1)
	  fsubs     f4, f1, f0
	  lfs       f2, 0x8(r31)
	  lfs       f1, 0x8(r1)
	  lfs       f0, 0x0(r31)
	  fsubs     f2, f3, f2
	  fmuls     f3, f4, f4
	  fsubs     f1, f1, f0
	  lfs       f0, -0x45CC(r2)
	  fmuls     f2, f2, f2
	  fmadds    f1, f1, f1, f3
	  fadds     f31, f2, f1
	  fcmpo     cr0, f31, f0
	  ble-      .loc_0x19C
	  ble-      .loc_0x1A0
	  fsqrte    f0, f31
	  fmuls     f31, f0, f31
	  b         .loc_0x1A0

	.loc_0x19C:
	  fmr       f31, f0

	.loc_0x1A0:
	  lfs       f0, -0x4534(r2)
	  fcmpo     cr0, f31, f0
	  bge-      .loc_0x214
	  li        r28, 0
	  li        r29, 0
	  b         .loc_0x208

	.loc_0x1B8:
	  lwz       r3, 0xC0(r31)
	  lwzx      r3, r3, r29
	  cmplwi    r3, 0
	  beq-      .loc_0x1F0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x1F0
	  lwz       r3, 0xC4(r31)
	  lfsx      f0, r3, r29
	  fcmpo     cr0, f0, f31
	  ble-      .loc_0x200

	.loc_0x1F0:
	  lwz       r3, 0xC0(r31)
	  stwx      r30, r3, r29
	  lwz       r3, 0xC4(r31)
	  stfsx     f31, r3, r29

	.loc_0x200:
	  addi      r29, r29, 0x4
	  addi      r28, r28, 0x1

	.loc_0x208:
	  lwz       r0, 0xBC(r31)
	  cmpw      r28, r0
	  blt+      .loc_0x1B8

	.loc_0x214:
	  lwz       r0, 0x20(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x240
	  lwz       r3, 0x1C(r1)
	  lwz       r4, 0x18(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x18(r1)
	  b         .loc_0x2D0

	.loc_0x240:
	  lwz       r3, 0x1C(r1)
	  lwz       r4, 0x18(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x18(r1)
	  b         .loc_0x2B4

	.loc_0x260:
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
	  bne-      .loc_0x2D0
	  lwz       r3, 0x1C(r1)
	  lwz       r4, 0x18(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x18(r1)

	.loc_0x2B4:
	  lwz       r12, 0x14(r1)
	  addi      r3, r1, 0x14
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x260

	.loc_0x2D0:
	  lwz       r3, 0x1C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x18(r1)
	  cmplw     r4, r3
	  bne+      .loc_0x104

	.loc_0x2F0:
	  psq_l     f31,0x48(r1),0,0
	  lwz       r0, 0x54(r1)
	  lfd       f31, 0x40(r1)
	  lwz       r31, 0x3C(r1)
	  lwz       r30, 0x38(r1)
	  lwz       r29, 0x34(r1)
	  lwz       r28, 0x30(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802065FC
 * Size:	0000AC
 */
void Game::ItemUjamushi::Uja::makeMatrix(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  mr        r8, r3
	  lfs       f0, -0x45CC(r2)
	  stw       r0, 0x34(r1)
	  addi      r4, r1, 0x14
	  addi      r5, r1, 0x20
	  addi      r6, r1, 0x8
	  lfs       f2, 0x5C(r3)
	  addi      r3, r8, 0x10
	  lfs       f1, 0xB8(r8)
	  stfs      f1, 0x20(r1)
	  stfs      f2, 0x24(r1)
	  stfs      f0, 0x28(r1)
	  lfs       f2, 0x64(r8)
	  stfs      f2, 0x14(r1)
	  lfs       f1, 0x68(r8)
	  stfs      f1, 0x18(r1)
	  lfs       f0, 0x6C(r8)
	  stfs      f0, 0x1C(r1)
	  lwz       r7, 0x74(r8)
	  lwz       r7, 0x310(r7)
	  lfs       f3, 0x24(r7)
	  fmuls     f2, f2, f3
	  fmuls     f1, f1, f3
	  fmuls     f0, f0, f3
	  stfs      f2, 0x14(r1)
	  stfs      f1, 0x18(r1)
	  stfs      f0, 0x1C(r1)
	  lfs       f0, 0x0(r8)
	  stfs      f0, 0x8(r1)
	  lfs       f1, 0x4(r8)
	  stfs      f1, 0xC(r1)
	  lfs       f0, 0x8(r8)
	  stfs      f0, 0x10(r1)
	  lfs       f0, 0xB4(r8)
	  fadds     f0, f1, f0
	  stfs      f0, 0xC(r1)
	  bl        0x221C44
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802066A8
 * Size:	00015C
 */
void Game::ItemUjamushi::Uja::updateScale((float))
{
	/*
	.loc_0x0:
	  lfs       f0, -0x4528(r2)
	  stwu      r1, -0x30(r1)
	  fdivs     f0, f1, f0
	  lfs       f1, -0x452C(r2)
	  lwz       r5, -0x6514(r13)
	  lwz       r4, 0x74(r3)
	  lfs       f4, -0x4530(r2)
	  lwz       r4, 0x310(r4)
	  fmuls     f3, f1, f0
	  lfs       f5, 0x54(r5)
	  lfs       f2, 0x9C(r4)
	  lfs       f1, 0x70(r3)
	  fmuls     f3, f4, f3
	  lfs       f0, -0x4548(r2)
	  fmuls     f3, f5, f3
	  fmadds    f1, f3, f2, f1
	  stfs      f1, 0x70(r3)
	  lfs       f1, 0x70(r3)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x58
	  fsubs     f0, f1, f0
	  stfs      f0, 0x70(r3)

	.loc_0x58:
	  lfs       f1, 0x70(r3)
	  lfs       f0, -0x45CC(r2)
	  lfs       f3, -0x4524(r2)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x98
	  lfs       f0, -0x4520(r2)
	  lis       r4, 0x8050
	  addi      r4, r4, 0x71A0
	  fmuls     f0, f1, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x8(r1)
	  lwz       r0, 0xC(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r4, r0
	  fneg      f2, f0
	  b         .loc_0xBC

	.loc_0x98:
	  lfs       f0, -0x451C(r2)
	  lis       r4, 0x8050
	  addi      r4, r4, 0x71A0
	  fmuls     f0, f1, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x10(r1)
	  lwz       r0, 0x14(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f2, r4, r0

	.loc_0xBC:
	  lfs       f1, -0x45C0(r2)
	  lfs       f0, -0x45CC(r2)
	  fmadds    f1, f3, f2, f1
	  stfs      f1, 0x64(r3)
	  lfs       f1, 0x70(r3)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0xDC
	  fneg      f1, f1

	.loc_0xDC:
	  lfs       f0, -0x451C(r2)
	  lis       r4, 0x8050
	  addi      r4, r4, 0x71A0
	  lfs       f2, -0x4524(r2)
	  fmuls     f3, f1, f0
	  addi      r4, r4, 0x4
	  lfs       f1, -0x45C0(r2)
	  lfs       f0, -0x45CC(r2)
	  fctiwz    f3, f3
	  stfd      f3, 0x18(r1)
	  lwz       r0, 0x1C(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f3, r4, r0
	  fmadds    f1, f2, f3, f1
	  stfs      f1, 0x6C(r3)
	  lfs       f1, 0x70(r3)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x128
	  fneg      f1, f1

	.loc_0x128:
	  lfs       f0, -0x451C(r2)
	  lfs       f2, -0x4524(r2)
	  fmuls     f1, f1, f0
	  lfs       f0, -0x45C0(r2)
	  fctiwz    f1, f1
	  stfd      f1, 0x20(r1)
	  lwz       r0, 0x24(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f1, r4, r0
	  fmadds    f0, f2, f1, f0
	  stfs      f0, 0x68(r3)
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80206804
 * Size:	00134C
 */
void Game::ItemUjamushi::Uja::update((Game::ItemUjamushi::BoidParms&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x430(r1)
	  mflr      r0
	  stw       r0, 0x434(r1)
	  stfd      f31, 0x420(r1)
	  psq_st    f31,0x428(r1),0,0
	  stfd      f30, 0x410(r1)
	  psq_st    f30,0x418(r1),0,0
	  stfd      f29, 0x400(r1)
	  psq_st    f29,0x408(r1),0,0
	  stfd      f28, 0x3F0(r1)
	  psq_st    f28,0x3F8(r1),0,0
	  stfd      f27, 0x3E0(r1)
	  psq_st    f27,0x3E8(r1),0,0
	  stfd      f26, 0x3D0(r1)
	  psq_st    f26,0x3D8(r1),0,0
	  stfd      f25, 0x3C0(r1)
	  psq_st    f25,0x3C8(r1),0,0
	  stfd      f24, 0x3B0(r1)
	  psq_st    f24,0x3B8(r1),0,0
	  stfd      f23, 0x3A0(r1)
	  psq_st    f23,0x3A8(r1),0,0
	  stfd      f22, 0x390(r1)
	  psq_st    f22,0x398(r1),0,0
	  stfd      f21, 0x380(r1)
	  psq_st    f21,0x388(r1),0,0
	  stfd      f20, 0x370(r1)
	  psq_st    f20,0x378(r1),0,0
	  stfd      f19, 0x360(r1)
	  psq_st    f19,0x368(r1),0,0
	  stfd      f18, 0x350(r1)
	  psq_st    f18,0x358(r1),0,0
	  stfd      f17, 0x340(r1)
	  psq_st    f17,0x348(r1),0,0
	  stfd      f16, 0x330(r1)
	  psq_st    f16,0x338(r1),0,0
	  stfd      f15, 0x320(r1)
	  psq_st    f15,0x328(r1),0,0
	  stfd      f14, 0x310(r1)
	  psq_st    f14,0x318(r1),0,0
	  stw       r31, 0x30C(r1)
	  stw       r30, 0x308(r1)
	  stw       r29, 0x304(r1)
	  stw       r28, 0x300(r1)
	  mr        r29, r3
	  mr        r30, r4
	  lbz       r0, 0xAC(r3)
	  cmplwi    r0, 0x6
	  beq-      .loc_0x129C
	  lwz       r6, -0x6514(r13)
	  cmplwi    r0, 0x4
	  lfs       f26, 0x54(r6)
	  bne-      .loc_0x148
	  lfs       f2, 0xB8(r29)
	  lfs       f0, -0x4518(r2)
	  fcmpo     cr0, f2, f0
	  bge-      .loc_0xF4
	  fmuls     f0, f0, f26
	  lfs       f1, -0x4530(r2)
	  fmadds    f0, f1, f0, f2
	  stfs      f0, 0xB8(r29)
	  b         .loc_0x104

	.loc_0xF4:
	  lfs       f1, -0x45C8(r2)
	  lfs       f0, 0xB4(r29)
	  fnmsubs   f0, f1, f26, f0
	  stfs      f0, 0xB4(r29)

	.loc_0x104:
	  mr        r3, r29
	  lwz       r12, 0xC(r29)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f1, -0x4544(r2)
	  mr        r3, r29
	  bl        -0x27C
	  lfs       f1, 0xB4(r29)
	  lfs       f0, -0x4514(r2)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x129C
	  stfs      f0, 0xB4(r29)
	  li        r0, 0x6
	  stb       r0, 0xAC(r29)
	  b         .loc_0x129C
	  b         .loc_0x129C

	.loc_0x148:
	  lwz       r3, 0x74(r29)
	  subi      r4, r2, 0x4510
	  lfs       f25, -0x45CC(r2)
	  li        r5, 0x1
	  lwz       r3, 0x310(r3)
	  lfs       f1, -0x45C8(r2)
	  fmr       f24, f25
	  lfs       f0, 0x24(r3)
	  fmr       f23, f25
	  stfs      f25, 0x2F4(r1)
	  fmuls     f29, f1, f0
	  lfs       f30, 0x1B4(r30)
	  stfs      f25, 0x2F0(r1)
	  lwz       r3, 0x28(r6)
	  bl        0x224174
	  mr        r3, r29
	  bl        -0x6A8
	  lwz       r3, -0x6514(r13)
	  subi      r4, r2, 0x4510
	  lwz       r3, 0x28(r3)
	  bl        0x224160
	  lwz       r4, 0x74(r29)
	  mr        r5, r29
	  addi      r3, r1, 0x1DC
	  addi      r4, r4, 0x7C
	  bl        0x14C0
	  lfs       f2, 0x1DC(r1)
	  addi      r3, r1, 0x2B4
	  lfs       f1, 0x1E0(r1)
	  lfs       f0, 0x1E4(r1)
	  stfs      f2, 0x2B4(r1)
	  stfs      f1, 0x2B8(r1)
	  stfs      f0, 0x2BC(r1)
	  bl        0x1410
	  lwz       r3, -0x6514(r13)
	  subi      r4, r2, 0x4504
	  lfs       f28, -0x4508(r2)
	  li        r5, 0x1
	  lwz       r3, 0x28(r3)
	  bl        0x224110
	  addi      r3, r29, 0x78
	  bl        -0x70368
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x220
	  lfs       f22, 0x84(r29)
	  lfs       f21, 0x88(r29)
	  lfs       f20, 0x8C(r29)
	  lfs       f0, 0x90(r29)
	  stfs      f0, 0x2B4(r1)
	  lfs       f0, 0x94(r29)
	  stfs      f0, 0x2B8(r1)
	  lfs       f0, 0x98(r29)
	  stfs      f0, 0x2BC(r1)
	  b         .loc_0x4A4

	.loc_0x220:
	  lfs       f22, -0x45CC(r2)
	  fadds     f28, f29, f29
	  li        r28, 0
	  stfs      f22, 0x2B4(r1)
	  fmr       f21, f22
	  fmr       f20, f22
	  stfs      f22, 0x2B8(r1)
	  stfs      f22, 0x2BC(r1)
	  lfs       f0, 0x204(r30)
	  lwz       r5, 0x74(r29)
	  fadds     f14, f29, f0
	  cmplwi    r5, 0
	  beq-      .loc_0x258
	  addi      r5, r5, 0x20

	.loc_0x258:
	  lis       r3, 0x804C
	  li        r0, 0
	  subi      r4, r3, 0x5D8
	  stw       r0, 0x2B0(r1)
	  addi      r3, r1, 0x2A4
	  stw       r4, 0x2A4(r1)
	  stw       r0, 0x2A8(r1)
	  stw       r5, 0x2AC(r1)
	  bl        0x1288
	  lfs       f0, -0x44FC(r2)
	  fmuls     f15, f0, f29
	  b         .loc_0x3D4

	.loc_0x288:
	  lwz       r3, 0x2AC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r31, r3
	  cmplw     r31, r29
	  beq-      .loc_0x3CC
	  lbz       r0, 0xAC(r31)
	  cmplwi    r0, 0x2
	  beq-      .loc_0x3CC
	  mr        r4, r29
	  mr        r5, r31
	  addi      r3, r1, 0x1D0
	  bl        0x13AC
	  lfs       f2, 0x1D0(r1)
	  addi      r3, r1, 0x298
	  lfs       f1, 0x1D4(r1)
	  lfs       f0, 0x1D8(r1)
	  stfs      f2, 0x298(r1)
	  stfs      f1, 0x29C(r1)
	  stfs      f0, 0x2A0(r1)
	  bl        0x12FC
	  fmr       f16, f1
	  lfs       f17, 0x1DC(r30)
	  fcmpo     cr0, f16, f14
	  bge-      .loc_0x3AC
	  lfs       f0, -0x45CC(r2)
	  fcmpo     cr0, f16, f0
	  ble-      .loc_0x340
	  lis       r3, 0x8051
	  lfs       f1, 0x298(r1)
	  lfs       f2, 0x2A0(r1)
	  subi      r3, r3, 0x2E20
	  bl        -0x1D1A0C
	  bl        0x20B0B8
	  lfs       f2, 0x5C(r29)
	  bl        0x20B0DC
	  lfs       f0, -0x44F8(r2)
	  fabs      f2, f1
	  lfs       f1, -0x452C(r2)
	  fmuls     f0, f0, f17
	  frsp      f2, f2
	  fmuls     f0, f1, f0
	  fcmpo     cr0, f2, f0
	  bgt-      .loc_0x3CC

	.loc_0x340:
	  lfs       f1, 0x2B4(r1)
	  addi      r3, r1, 0x28C
	  lfs       f0, 0x0(r31)
	  lfs       f2, 0x2B8(r1)
	  fadds     f0, f1, f0
	  lfs       f1, 0x2BC(r1)
	  stfs      f0, 0x2B4(r1)
	  lfs       f0, 0x4(r31)
	  fadds     f0, f2, f0
	  stfs      f0, 0x2B8(r1)
	  lfs       f0, 0x8(r31)
	  fadds     f0, f1, f0
	  stfs      f0, 0x2BC(r1)
	  lfs       f0, 0x50(r31)
	  stfs      f0, 0x28C(r1)
	  lfs       f0, 0x54(r31)
	  stfs      f0, 0x290(r1)
	  lfs       f0, 0x58(r31)
	  stfs      f0, 0x294(r1)
	  bl        0x1250
	  lfs       f2, 0x50(r31)
	  addi      r28, r28, 0x1
	  lfs       f1, 0x54(r31)
	  lfs       f0, 0x58(r31)
	  fadds     f22, f22, f2
	  fadds     f21, f21, f1
	  fadds     f20, f20, f0

	.loc_0x3AC:
	  fcmpo     cr0, f16, f28
	  bge-      .loc_0x3CC
	  fsubs     f2, f15, f16
	  lfs       f1, 0x2A0(r1)
	  lfs       f0, 0x298(r1)
	  fmr       f28, f16
	  fmuls     f24, f1, f2
	  fmuls     f25, f0, f2

	.loc_0x3CC:
	  addi      r3, r1, 0x2A4
	  bl        0x1000

	.loc_0x3D4:
	  lwz       r3, 0x2AC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x2A8(r1)
	  cmplw     r4, r3
	  bne+      .loc_0x288
	  cmpwi     r28, 0
	  ble-      .loc_0x4A4
	  xoris     r3, r28, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x2C4(r1)
	  mr        r5, r29
	  lfd       f1, -0x4540(r2)
	  addi      r3, r1, 0x1C4
	  stw       r0, 0x2C0(r1)
	  addi      r4, r1, 0x2B4
	  lfs       f2, -0x45C0(r2)
	  lfd       f0, 0x2C0(r1)
	  fsubs     f0, f0, f1
	  fdivs     f3, f2, f0
	  fmuls     f22, f22, f3
	  fmuls     f21, f21, f3
	  fmuls     f20, f20, f3
	  stfs      f22, 0x84(r29)
	  stfs      f21, 0x88(r29)
	  stfs      f20, 0x8C(r29)
	  lfs       f2, 0x2B4(r1)
	  lfs       f1, 0x2B8(r1)
	  lfs       f0, 0x2BC(r1)
	  fmuls     f2, f2, f3
	  fmuls     f1, f1, f3
	  fmuls     f0, f0, f3
	  stfs      f2, 0x2B4(r1)
	  stfs      f1, 0x2B8(r1)
	  stfs      f0, 0x2BC(r1)
	  bl        0x1204
	  lfs       f2, 0x1C4(r1)
	  addi      r3, r1, 0x2B4
	  lfs       f1, 0x1C8(r1)
	  lfs       f0, 0x1CC(r1)
	  stfs      f2, 0x2B4(r1)
	  stfs      f1, 0x2B8(r1)
	  stfs      f0, 0x2BC(r1)
	  bl        0x1154
	  lfs       f0, 0x2B4(r1)
	  stfs      f0, 0x90(r29)
	  lfs       f0, 0x2B8(r1)
	  stfs      f0, 0x94(r29)
	  lfs       f0, 0x2BC(r1)
	  stfs      f0, 0x98(r29)

	.loc_0x4A4:
	  lwz       r3, -0x6514(r13)
	  subi      r4, r2, 0x4504
	  lwz       r3, 0x28(r3)
	  bl        0x223E48
	  lfs       f0, -0x45CC(r2)
	  mr        r5, r29
	  addi      r3, r1, 0x1B8
	  addi      r4, r29, 0x44
	  stfs      f0, 0x280(r1)
	  stfs      f0, 0x284(r1)
	  stfs      f0, 0x288(r1)
	  bl        0x119C
	  lfs       f2, 0x1B8(r1)
	  addi      r3, r1, 0x280
	  lfs       f1, 0x1BC(r1)
	  lfs       f0, 0x1C0(r1)
	  stfs      f2, 0x280(r1)
	  stfs      f1, 0x284(r1)
	  stfs      f0, 0x288(r1)
	  bl        0x10EC
	  lfs       f31, -0x45CC(r2)
	  addi      r3, r29, 0x78
	  fmr       f19, f31
	  fmr       f18, f31
	  bl        -0x70680
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x5F4
	  lfs       f0, -0x44FC(r2)
	  lwz       r5, 0x74(r29)
	  fmuls     f14, f0, f29
	  cmplwi    r5, 0
	  beq-      .loc_0x528
	  addi      r5, r5, 0x20

	.loc_0x528:
	  lis       r3, 0x804C
	  li        r0, 0
	  subi      r4, r3, 0x5D8
	  stw       r0, 0x27C(r1)
	  addi      r3, r1, 0x270
	  stw       r4, 0x270(r1)
	  stw       r0, 0x274(r1)
	  stw       r5, 0x278(r1)
	  bl        0xFB8
	  b         .loc_0x5D0

	.loc_0x550:
	  lwz       r3, 0x278(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  cmplw     r3, r29
	  beq-      .loc_0x5C8
	  mr        r4, r29
	  mr        r5, r3
	  addi      r3, r1, 0x1AC
	  bl        0x10F4
	  lfs       f2, 0x1AC(r1)
	  addi      r3, r1, 0x264
	  lfs       f1, 0x1B0(r1)
	  lfs       f0, 0x1B4(r1)
	  stfs      f2, 0x264(r1)
	  stfs      f1, 0x268(r1)
	  stfs      f0, 0x26C(r1)
	  bl        0x1044
	  fcmpo     cr0, f1, f14
	  bge-      .loc_0x5C8
	  lfs       f31, 0x264(r1)
	  fmr       f14, f1
	  lfs       f19, 0x268(r1)
	  lfs       f18, 0x26C(r1)
	  stfs      f31, 0x9C(r29)
	  lfs       f0, 0x268(r1)
	  stfs      f0, 0xA0(r29)
	  lfs       f0, 0x26C(r1)
	  stfs      f0, 0xA4(r29)

	.loc_0x5C8:
	  addi      r3, r1, 0x270
	  bl        0xE04

	.loc_0x5D0:
	  lwz       r3, 0x278(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x274(r1)
	  cmplw     r4, r3
	  bne+      .loc_0x550
	  b         .loc_0x600

	.loc_0x5F4:
	  lfs       f31, 0x9C(r29)
	  lfs       f19, 0xA0(r29)
	  lfs       f18, 0xA4(r29)

	.loc_0x600:
	  lwz       r6, 0x74(r29)
	  mr        r5, r29
	  lfs       f17, -0x45CC(r2)
	  addi      r3, r1, 0x1A0
	  lfs       f0, 0x6C(r6)
	  addi      r4, r1, 0x258
	  stfs      f17, 0x2EC(r1)
	  stfs      f0, 0x258(r1)
	  lfs       f0, 0x70(r6)
	  stfs      f17, 0x2E8(r1)
	  stfs      f0, 0x25C(r1)
	  lfs       f0, 0x74(r6)
	  stfs      f0, 0x260(r1)
	  lfs       f14, 0x78(r6)
	  bl        0x1034
	  lfs       f2, 0x1A0(r1)
	  addi      r3, r1, 0x24C
	  lfs       f1, 0x1A4(r1)
	  lfs       f0, 0x1A8(r1)
	  stfs      f2, 0x24C(r1)
	  stfs      f1, 0x250(r1)
	  stfs      f0, 0x254(r1)
	  bl        0xF84
	  fmr       f27, f1
	  lfs       f0, -0x45CC(r2)
	  fcmpo     cr0, f27, f0
	  ble-      .loc_0x710
	  lis       r3, 0x8051
	  lfs       f1, 0x24C(r1)
	  lfs       f2, 0x254(r1)
	  subi      r3, r3, 0x2E20
	  bl        -0x1D1D78
	  lfs       f2, -0x44F4(r2)
	  lfs       f0, -0x45CC(r2)
	  fmuls     f1, f2, f1
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x6C0
	  lfs       f0, -0x4520(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fmuls     f0, f1, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x2C0(r1)
	  lwz       r0, 0x2C4(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r3, r0
	  fneg      f2, f0
	  b         .loc_0x6E4

	.loc_0x6C0:
	  lfs       f0, -0x451C(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fmuls     f0, f1, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x2C8(r1)
	  lwz       r0, 0x2CC(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f2, r3, r0

	.loc_0x6E4:
	  lfs       f1, -0x4590(r2)
	  lfs       f0, -0x44F0(r2)
	  fmadds    f0, f1, f2, f0
	  fmuls     f0, f14, f0
	  fcmpo     cr0, f27, f0
	  ble-      .loc_0x710
	  lfs       f0, 0x250(r1)
	  lfs       f17, 0x24C(r1)
	  stfs      f0, 0x2EC(r1)
	  lfs       f0, 0x254(r1)
	  stfs      f0, 0x2E8(r1)

	.loc_0x710:
	  lfs       f1, -0x44F8(r2)
	  lfs       f0, 0x254(r30)
	  lfs       f2, -0x452C(r2)
	  fmuls     f0, f1, f0
	  fmuls     f14, f2, f0
	  bl        -0x13D988
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x2CC(r1)
	  lfd       f1, -0x4540(r2)
	  stw       r0, 0x2C8(r1)
	  lfs       f3, -0x454C(r2)
	  lfd       f0, 0x2C8(r1)
	  lfs       f2, -0x4550(r2)
	  fsubs     f4, f0, f1
	  lfs       f1, 0x5C(r29)
	  lfs       f0, -0x45CC(r2)
	  fdivs     f3, f4, f3
	  fsubs     f2, f3, f2
	  fmadds    f3, f14, f2, f1
	  fmr       f1, f3
	  fcmpo     cr0, f3, f0
	  bge-      .loc_0x770
	  fneg      f1, f3

	.loc_0x770:
	  lfs       f2, -0x451C(r2)
	  lis       r3, 0x8050
	  lfs       f0, -0x45CC(r2)
	  addi      r3, r3, 0x71A0
	  fmuls     f1, f1, f2
	  addi      r31, r3, 0x4
	  fcmpo     cr0, f3, f0
	  fctiwz    f0, f1
	  stfd      f0, 0x2C0(r1)
	  lwz       r0, 0x2C4(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r31, r0
	  stfs      f0, 0x2FC(r1)
	  bge-      .loc_0x7D0
	  lfs       f0, -0x4520(r2)
	  fmuls     f0, f3, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x2D0(r1)
	  lwz       r0, 0x2D4(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r3, r0
	  fneg      f0, f0
	  stfs      f0, 0x2F8(r1)
	  b         .loc_0x7EC

	.loc_0x7D0:
	  fmuls     f0, f3, f2
	  fctiwz    f0, f0
	  stfd      f0, 0x2D8(r1)
	  lwz       r0, 0x2DC(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r3, r0
	  stfs      f0, 0x2F8(r1)

	.loc_0x7EC:
	  lfs       f27, -0x45CC(r2)
	  li        r4, 0
	  lwz       r0, -0x6D20(r13)
	  lis       r3, 0x804B
	  subi      r3, r3, 0x434C
	  fmr       f16, f27
	  fmr       f15, f27
	  stw       r3, 0x23C(r1)
	  addi      r3, r1, 0x23C
	  stw       r4, 0x248(r1)
	  stw       r4, 0x240(r1)
	  stw       r0, 0x244(r1)
	  bl        -0xF1194
	  lfs       f1, -0x44EC(r2)
	  fadds     f0, f1, f29
	  fadds     f14, f1, f0
	  b         .loc_0x8FC

	.loc_0x830:
	  lwz       r3, 0x244(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  mr        r28, r3
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x8F4
	  mr        r4, r28
	  addi      r3, r1, 0x188
	  lwz       r12, 0x0(r28)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r5, r29
	  addi      r3, r1, 0x194
	  addi      r4, r1, 0x188
	  bl        0xDE8
	  lfs       f2, 0x194(r1)
	  addi      r3, r1, 0x230
	  lfs       f1, 0x198(r1)
	  lfs       f0, 0x19C(r1)
	  stfs      f2, 0x230(r1)
	  stfs      f1, 0x234(r1)
	  stfs      f0, 0x238(r1)
	  bl        0xD38
	  fcmpo     cr0, f1, f14
	  bge-      .loc_0x8DC
	  fcmpo     cr0, f1, f28
	  bge-      .loc_0x8F4
	  fsubs     f2, f14, f1
	  lfs       f3, -0x44E8(r2)
	  fmr       f28, f1
	  lfs       f4, 0x238(r1)
	  lfs       f0, 0x230(r1)
	  fmuls     f1, f3, f2
	  fmuls     f24, f4, f1
	  fmuls     f25, f0, f1
	  b         .loc_0x8F4

	.loc_0x8DC:
	  lfs       f0, -0x44E4(r2)
	  fcmpo     cr0, f1, f0
	  bgt-      .loc_0x8F4
	  lfs       f27, 0x230(r1)
	  lfs       f16, 0x234(r1)
	  lfs       f15, 0x238(r1)

	.loc_0x8F4:
	  addi      r3, r1, 0x23C
	  bl        -0xF1354

	.loc_0x8FC:
	  lwz       r3, 0x244(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x240(r1)
	  cmplw     r4, r3
	  bne+      .loc_0x830
	  lfs       f0, -0x45CC(r2)
	  mr        r5, r29
	  addi      r3, r1, 0x17C
	  stfs      f0, 0x224(r1)
	  stfs      f0, 0x228(r1)
	  stfs      f0, 0x22C(r1)
	  lwz       r4, 0x74(r29)
	  addi      r4, r4, 0x7C
	  bl        0xD30
	  lfs       f2, 0x17C(r1)
	  addi      r3, r1, 0x224
	  lfs       f1, 0x180(r1)
	  lfs       f0, 0x184(r1)
	  stfs      f2, 0x224(r1)
	  stfs      f1, 0x228(r1)
	  stfs      f0, 0x22C(r1)
	  bl        0xC80
	  lfs       f0, -0x45C8(r2)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x980
	  lbz       r0, 0xAC(r29)
	  cmplwi    r0, 0x3
	  bne-      .loc_0x980
	  li        r0, 0x6
	  stb       r0, 0xAC(r29)

	.loc_0x980:
	  lwz       r3, 0xC0(r29)
	  lfs       f29, -0x45CC(r2)
	  lwz       r3, 0x0(r3)
	  stfs      f29, 0x2E4(r1)
	  cmplwi    r3, 0
	  stfs      f29, 0x2E0(r1)
	  beq-      .loc_0xB90
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xB90
	  lwz       r4, 0xC0(r29)
	  addi      r3, r1, 0x164
	  lwz       r4, 0x0(r4)
	  lwz       r12, 0x0(r4)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r5, r29
	  addi      r3, r1, 0x170
	  addi      r4, r1, 0x164
	  bl        0xC90
	  lfs       f2, 0x170(r1)
	  addi      r3, r1, 0x218
	  lfs       f1, 0x174(r1)
	  lfs       f0, 0x178(r1)
	  stfs      f2, 0x218(r1)
	  stfs      f1, 0x21C(r1)
	  stfs      f0, 0x220(r1)
	  bl        0xBE0
	  fcmpo     cr0, f1, f14
	  bge-      .loc_0xA30
	  fcmpo     cr0, f1, f28
	  bge-      .loc_0xB90
	  fsubs     f1, f14, f1
	  lfs       f2, -0x44E8(r2)
	  lfs       f3, 0x220(r1)
	  lfs       f0, 0x218(r1)
	  fmuls     f1, f2, f1
	  fmuls     f24, f3, f1
	  fmuls     f25, f0, f1
	  b         .loc_0xB90

	.loc_0xA30:
	  lfs       f0, -0x44E4(r2)
	  fcmpo     cr0, f1, f0
	  bgt-      .loc_0xB90
	  lfs       f0, 0x21C(r1)
	  lbz       r0, 0xAC(r29)
	  stfs      f0, 0x2E4(r1)
	  lfs       f0, 0x220(r1)
	  cmplwi    r0, 0
	  lfs       f29, 0x218(r1)
	  stfs      f0, 0x2E0(r1)
	  bne-      .loc_0xB90
	  lfs       f0, -0x4580(r2)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0xB90
	  li        r0, 0x2
	  stb       r0, 0xAC(r29)
	  bl        -0x13DCD4
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x2DC(r1)
	  lfd       f3, -0x4540(r2)
	  stw       r0, 0x2D8(r1)
	  lfs       f2, -0x454C(r2)
	  lfd       f0, 0x2D8(r1)
	  lfs       f1, -0x45C8(r2)
	  fsubs     f3, f0, f3
	  lfs       f0, -0x4534(r2)
	  fdivs     f2, f3, f2
	  fmadds    f14, f1, f2, f0
	  bl        -0x13DD08
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x2D4(r1)
	  fmuls     f3, f29, f14
	  lfs       f0, 0x2E0(r1)
	  addi      r3, r1, 0x158
	  stw       r0, 0x2D0(r1)
	  addi      r4, r29, 0x50
	  lfd       f5, -0x4540(r2)
	  lfd       f1, 0x2D0(r1)
	  fmuls     f0, f0, f14
	  lfs       f4, -0x454C(r2)
	  addi      r5, r1, 0x20C
	  fsubs     f5, f1, f5
	  stfs      f3, 0x20C(r1)
	  lfs       f2, -0x45C8(r2)
	  lfs       f1, -0x44E0(r2)
	  fdivs     f3, f5, f4
	  stfs      f0, 0x214(r1)
	  fmadds    f0, f2, f3, f1
	  stfs      f0, 0x210(r1)
	  bl        0x8A0
	  lfs       f0, 0x158(r1)
	  stfs      f0, 0x50(r29)
	  lfs       f0, 0x15C(r1)
	  stfs      f0, 0x54(r29)
	  lfs       f0, 0x160(r1)
	  stfs      f0, 0x58(r29)
	  bl        -0x13DD7C
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x2CC(r1)
	  lfd       f3, -0x4540(r2)
	  stw       r0, 0x2C8(r1)
	  lfs       f1, -0x454C(r2)
	  lfd       f2, 0x2C8(r1)
	  lfs       f0, -0x44DC(r2)
	  fsubs     f2, f2, f3
	  fdivs     f1, f2, f1
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0xB90
	  lis       r3, 0x804B
	  lfs       f0, -0x45CC(r2)
	  subi      r0, r3, 0x5D00
	  lis       r3, 0x804B
	  stw       r0, 0x200(r1)
	  addi      r0, r3, 0x480C
	  li        r3, 0
	  addi      r4, r1, 0x200
	  stw       r3, 0x204(r1)
	  stw       r0, 0x200(r1)
	  stfs      f0, 0x208(r1)
	  lwz       r3, 0xC0(r29)
	  lwz       r3, 0x0(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1A4(r12)
	  mtctr     r12
	  bctrl

	.loc_0xB90:
	  lbz       r0, 0xAC(r29)
	  cmplwi    r0, 0x2
	  beq-      .loc_0xD8C
	  lfs       f0, 0xC4(r30)
	  addi      r3, r1, 0xF8
	  lfs       f2, 0x280(r1)
	  addi      r4, r1, 0xEC
	  fmuls     f3, f30, f0
	  lfs       f1, 0x284(r1)
	  lfs       f0, 0x288(r1)
	  addi      r5, r1, 0xE0
	  lfs       f7, -0x45CC(r2)
	  fmuls     f2, f2, f3
	  fmuls     f1, f1, f3
	  lfs       f6, 0x224(r1)
	  fmuls     f0, f0, f3
	  lfs       f5, 0x228(r1)
	  stfs      f2, 0x8C(r1)
	  lfs       f4, 0x22C(r1)
	  stfs      f1, 0x90(r1)
	  lfs       f3, 0x2B4(r1)
	  stfs      f0, 0x94(r1)
	  lfs       f2, 0x2B8(r1)
	  lfs       f0, 0xEC(r30)
	  lfs       f1, 0x2BC(r1)
	  fmuls     f9, f30, f0
	  lfs       f0, 0x2F8(r1)
	  fmuls     f8, f0, f9
	  lfs       f0, 0x2FC(r1)
	  fmuls     f7, f7, f9
	  fmuls     f0, f0, f9
	  stfs      f8, 0x98(r1)
	  stfs      f7, 0x9C(r1)
	  stfs      f0, 0xA0(r1)
	  lfs       f0, 0x164(r30)
	  fmuls     f0, f30, f0
	  fmuls     f8, f27, f0
	  fmuls     f7, f16, f0
	  fmuls     f0, f15, f0
	  stfs      f8, 0xA4(r1)
	  stfs      f7, 0xA8(r1)
	  stfs      f0, 0xAC(r1)
	  lfs       f0, 0x114(r30)
	  fmuls     f0, f30, f0
	  fmuls     f6, f6, f0
	  fmuls     f5, f5, f0
	  fmuls     f0, f4, f0
	  stfs      f6, 0xB0(r1)
	  stfs      f5, 0xB4(r1)
	  stfs      f0, 0xB8(r1)
	  lfs       f0, 0x13C(r30)
	  fmuls     f6, f30, f0
	  lfs       f0, 0x2E4(r1)
	  fmuls     f4, f0, f6
	  lfs       f0, 0x2E0(r1)
	  fmuls     f5, f29, f6
	  fmuls     f0, f0, f6
	  stfs      f4, 0xC0(r1)
	  stfs      f5, 0xBC(r1)
	  stfs      f0, 0xC4(r1)
	  lfs       f0, 0x9C(r30)
	  fmuls     f6, f30, f0
	  lfs       f0, 0x2EC(r1)
	  fmuls     f4, f0, f6
	  lfs       f0, 0x2E8(r1)
	  fmuls     f5, f17, f6
	  fmuls     f0, f0, f6
	  stfs      f4, 0xCC(r1)
	  stfs      f5, 0xC8(r1)
	  stfs      f0, 0xD0(r1)
	  lfs       f0, 0x74(r30)
	  fmuls     f0, f30, f0
	  fmuls     f5, f31, f0
	  fmuls     f4, f19, f0
	  fmuls     f0, f18, f0
	  stfs      f5, 0xD4(r1)
	  stfs      f4, 0xD8(r1)
	  stfs      f0, 0xDC(r1)
	  lfs       f0, 0x4C(r30)
	  fmuls     f5, f22, f0
	  fmuls     f4, f21, f0
	  fmuls     f0, f20, f0
	  stfs      f5, 0xE0(r1)
	  stfs      f4, 0xE4(r1)
	  stfs      f0, 0xE8(r1)
	  lfs       f0, 0x24(r30)
	  fmuls     f0, f30, f0
	  fmuls     f3, f3, f0
	  fmuls     f2, f2, f0
	  fmuls     f0, f1, f0
	  stfs      f3, 0xEC(r1)
	  stfs      f2, 0xF0(r1)
	  stfs      f0, 0xF4(r1)
	  bl        0x698
	  addi      r3, r1, 0x104
	  addi      r4, r1, 0xF8
	  addi      r5, r1, 0xD4
	  bl        0x688
	  addi      r3, r1, 0x110
	  addi      r4, r1, 0x104
	  addi      r5, r1, 0xC8
	  bl        0x678
	  addi      r3, r1, 0x11C
	  addi      r4, r1, 0x110
	  addi      r5, r1, 0xBC
	  bl        0x668
	  addi      r3, r1, 0x128
	  addi      r4, r1, 0x11C
	  addi      r5, r1, 0xB0
	  bl        0x658
	  addi      r3, r1, 0x134
	  addi      r4, r1, 0x128
	  addi      r5, r1, 0xA4
	  bl        0x648
	  addi      r3, r1, 0x140
	  addi      r4, r1, 0x134
	  addi      r5, r1, 0x98
	  bl        0x638
	  addi      r3, r1, 0x14C
	  addi      r4, r1, 0x140
	  addi      r5, r1, 0x8C
	  bl        0x628
	  lfs       f0, 0x14C(r1)
	  lfs       f23, 0x154(r1)
	  stfs      f0, 0x2F4(r1)
	  lfs       f0, 0x150(r1)
	  stfs      f0, 0x2F0(r1)

	.loc_0xD8C:
	  lfs       f0, -0x45CC(r2)
	  fcmpu     cr0, f0, f23
	  beq-      .loc_0xDD8
	  fmr       f2, f23
	  lis       r3, 0x8051
	  lfs       f1, 0x2F4(r1)
	  subi      r3, r3, 0x2E20
	  bl        -0x1D24A4
	  bl        0x20A620
	  lfs       f2, 0x5C(r29)
	  bl        0x20A644
	  lfs       f2, -0x44F4(r2)
	  lfs       f0, 0x5C(r29)
	  fmuls     f1, f2, f1
	  fmadds    f0, f1, f26, f0
	  stfs      f0, 0x5C(r29)
	  lfs       f1, 0x5C(r29)
	  bl        0x20A5FC
	  stfs      f1, 0x5C(r29)

	.loc_0xDD8:
	  lfs       f3, 0x5C(r29)
	  lfs       f0, -0x45CC(r2)
	  fmr       f1, f3
	  fcmpo     cr0, f3, f0
	  bge-      .loc_0xDF0
	  fneg      f1, f3

	.loc_0xDF0:
	  lfs       f2, -0x451C(r2)
	  lfs       f0, -0x45CC(r2)
	  fmuls     f1, f1, f2
	  fcmpo     cr0, f3, f0
	  fctiwz    f0, f1
	  stfd      f0, 0x2D8(r1)
	  lwz       r0, 0x2DC(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f5, r31, r0
	  bge-      .loc_0xE44
	  lfs       f0, -0x4520(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fmuls     f0, f3, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x2D0(r1)
	  lwz       r0, 0x2D4(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r3, r0
	  fneg      f2, f0
	  b         .loc_0xE64

	.loc_0xE44:
	  fmuls     f0, f3, f2
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fctiwz    f0, f0
	  stfd      f0, 0x2C8(r1)
	  lwz       r0, 0x2CC(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f2, r3, r0

	.loc_0xE64:
	  lfs       f3, -0x45CC(r2)
	  addi      r3, r1, 0x80
	  lfs       f0, 0x2F0(r1)
	  addi      r4, r29, 0x50
	  lwz       r6, 0x74(r29)
	  addi      r5, r1, 0x74
	  fmuls     f1, f3, f0
	  lfs       f0, 0x2F4(r1)
	  lwz       r6, 0x310(r6)
	  fmadds    f0, f2, f0, f1
	  lfs       f4, 0x4C(r6)
	  fmadds    f0, f5, f23, f0
	  fmuls     f2, f2, f0
	  fmuls     f1, f3, f0
	  fmuls     f0, f5, f0
	  fmuls     f2, f2, f4
	  fmuls     f1, f1, f4
	  fmuls     f0, f0, f4
	  stfs      f2, 0x74(r1)
	  stfs      f1, 0x78(r1)
	  stfs      f0, 0x7C(r1)
	  bl        0x4E4
	  lfs       f0, 0x80(r1)
	  stfs      f0, 0x50(r29)
	  lfs       f0, 0x84(r1)
	  stfs      f0, 0x54(r29)
	  lfs       f0, 0x88(r1)
	  stfs      f0, 0x58(r29)
	  lbz       r0, 0xAC(r29)
	  cmplwi    r0, 0x2
	  beq-      .loc_0xEE8
	  lfs       f0, -0x45CC(r2)
	  stfs      f0, 0x54(r29)

	.loc_0xEE8:
	  lbz       r0, 0xAC(r29)
	  cmplwi    r0, 0x2
	  bne-      .loc_0xF30
	  lwz       r3, -0x6514(r13)
	  lfs       f2, -0x44D8(r2)
	  lfs       f1, 0x54(r3)
	  lfs       f0, 0x54(r29)
	  fnmsubs   f0, f2, f1, f0
	  stfs      f0, 0x54(r29)
	  lwz       r3, 0x74(r29)
	  lfs       f0, 0x4(r29)
	  lfs       f1, 0x70(r3)
	  fcmpo     cr0, f0, f1
	  cror      2, 0, 0x2
	  bne-      .loc_0xF30
	  stfs      f1, 0x4(r29)
	  li        r0, 0
	  stb       r0, 0xAC(r29)

	.loc_0xF30:
	  addi      r3, r29, 0x50
	  bl        .loc_0x134C
	  lbz       r0, 0xAC(r29)
	  fmr       f14, f1
	  cmplwi    r0, 0x2
	  beq-      .loc_0xF84
	  fcmpo     cr0, f14, f30
	  ble-      .loc_0xF84
	  lfs       f0, -0x45C0(r2)
	  lfs       f1, 0x50(r29)
	  fdivs     f0, f0, f14
	  fmuls     f2, f0, f30
	  fmr       f14, f30
	  fmuls     f0, f1, f2
	  stfs      f0, 0x50(r29)
	  lfs       f0, 0x54(r29)
	  fmuls     f0, f0, f2
	  stfs      f0, 0x54(r29)
	  lfs       f0, 0x58(r29)
	  fmuls     f0, f0, f2
	  stfs      f0, 0x58(r29)

	.loc_0xF84:
	  lbz       r0, 0xAE(r29)
	  cmplwi    r0, 0
	  beq-      .loc_0xFF8
	  lbz       r0, 0xAD(r29)
	  cmplwi    r0, 0
	  bne-      .loc_0xFE8
	  li        r0, 0
	  stb       r0, 0xAE(r29)
	  bl        -0x13E208
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x2DC(r1)
	  lfd       f3, -0x4540(r2)
	  stw       r0, 0x2D8(r1)
	  lfs       f1, -0x454C(r2)
	  lfd       f2, 0x2D8(r1)
	  lfs       f0, -0x4544(r2)
	  fsubs     f2, f2, f3
	  fdivs     f1, f2, f1
	  fmuls     f0, f0, f1
	  fctiwz    f0, f0
	  stfd      f0, 0x2D0(r1)
	  lwz       r3, 0x2D4(r1)
	  addi      r0, r3, 0x32
	  stb       r0, 0xAD(r29)

	.loc_0xFE8:
	  lbz       r3, 0xAD(r29)
	  subi      r0, r3, 0x1
	  stb       r0, 0xAD(r29)
	  b         .loc_0x1104

	.loc_0xFF8:
	  lbz       r3, 0xAD(r29)
	  cmplwi    r3, 0
	  beq-      .loc_0x1064
	  subi      r0, r3, 0x1
	  stb       r0, 0xAD(r29)
	  lbz       r0, 0xAD(r29)
	  cmplwi    r0, 0
	  bne-      .loc_0x1064
	  li        r0, 0x1
	  stb       r0, 0xAE(r29)
	  bl        -0x13E284
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x2DC(r1)
	  lfd       f3, -0x4540(r2)
	  stw       r0, 0x2D8(r1)
	  lfs       f1, -0x454C(r2)
	  lfd       f2, 0x2D8(r1)
	  lfs       f0, -0x4580(r2)
	  fsubs     f2, f2, f3
	  fdivs     f1, f2, f1
	  fmuls     f0, f0, f1
	  fctiwz    f0, f0
	  stfd      f0, 0x2D0(r1)
	  lwz       r3, 0x2D4(r1)
	  addi      r0, r3, 0xA
	  stb       r0, 0xAD(r29)

	.loc_0x1064:
	  lfs       f1, -0x45CC(r2)
	  fmuls     f2, f25, f26
	  lfs       f3, -0x45C8(r2)
	  fmuls     f0, f24, f26
	  fmuls     f1, f1, f26
	  mr        r4, r29
	  fmuls     f2, f2, f3
	  fmuls     f0, f0, f3
	  addi      r3, r1, 0x68
	  fmuls     f1, f1, f3
	  stfs      f2, 0x5C(r1)
	  addi      r5, r1, 0x5C
	  stfs      f1, 0x60(r1)
	  stfs      f0, 0x64(r1)
	  bl        0x300
	  lfs       f0, 0x68(r1)
	  mr        r4, r29
	  addi      r3, r1, 0x50
	  addi      r5, r1, 0x44
	  stfs      f0, 0x0(r29)
	  lfs       f0, 0x6C(r1)
	  stfs      f0, 0x4(r29)
	  lfs       f0, 0x70(r1)
	  stfs      f0, 0x8(r29)
	  lfs       f2, 0x58(r29)
	  lfs       f1, 0x54(r29)
	  lfs       f0, 0x50(r29)
	  fmuls     f2, f2, f26
	  fmuls     f1, f1, f26
	  fmuls     f0, f0, f26
	  stfs      f2, 0x4C(r1)
	  stfs      f0, 0x44(r1)
	  stfs      f1, 0x48(r1)
	  bl        0x2B4
	  lfs       f0, 0x50(r1)
	  stfs      f0, 0x0(r29)
	  lfs       f0, 0x54(r1)
	  stfs      f0, 0x4(r29)
	  lfs       f0, 0x58(r1)
	  stfs      f0, 0x8(r29)

	.loc_0x1104:
	  lwz       r6, 0x74(r29)
	  mr        r5, r29
	  addi      r3, r1, 0x38
	  addi      r4, r1, 0x1F4
	  lfs       f0, 0x6C(r6)
	  stfs      f0, 0x1F4(r1)
	  lfs       f0, 0x70(r6)
	  stfs      f0, 0x1F8(r1)
	  lfs       f0, 0x74(r6)
	  stfs      f0, 0x1FC(r1)
	  lfs       f15, 0x78(r6)
	  bl        0x53C
	  lfs       f2, 0x38(r1)
	  addi      r3, r1, 0x1E8
	  lfs       f1, 0x3C(r1)
	  lfs       f0, 0x40(r1)
	  stfs      f2, 0x1E8(r1)
	  stfs      f1, 0x1EC(r1)
	  stfs      f0, 0x1F0(r1)
	  bl        0x48C
	  fmr       f17, f1
	  lfs       f0, -0x45CC(r2)
	  fcmpo     cr0, f17, f0
	  ble-      .loc_0x1238
	  lis       r3, 0x8051
	  lfs       f1, 0x1E8(r1)
	  lfs       f2, 0x1F0(r1)
	  subi      r3, r3, 0x2E20
	  bl        -0x1D2870
	  lfs       f0, -0x45C0(r2)
	  fmuls     f16, f15, f0
	  fcmpo     cr0, f17, f16
	  ble-      .loc_0x1238
	  lfs       f4, 0x1EC(r1)
	  addi      r3, r1, 0x2C
	  lfs       f0, 0x54(r29)
	  addi      r4, r29, 0x50
	  lfs       f3, 0x1E8(r1)
	  addi      r5, r1, 0x20
	  fmuls     f0, f4, f0
	  lfs       f1, 0x50(r29)
	  lfs       f5, 0x1F0(r1)
	  lfs       f2, 0x58(r29)
	  fmadds    f0, f3, f1, f0
	  fmadds    f0, f5, f2, f0
	  fmuls     f2, f3, f0
	  fmuls     f1, f4, f0
	  fmuls     f0, f5, f0
	  stfs      f2, 0x20(r1)
	  stfs      f1, 0x24(r1)
	  stfs      f0, 0x28(r1)
	  bl        0x49C
	  lfs       f0, 0x2C(r1)
	  addi      r3, r1, 0x14
	  addi      r4, r1, 0x1F4
	  addi      r5, r1, 0x8
	  stfs      f0, 0x50(r29)
	  lfs       f0, 0x30(r1)
	  stfs      f0, 0x54(r29)
	  lfs       f0, 0x34(r1)
	  stfs      f0, 0x58(r29)
	  lfs       f2, 0x1E8(r1)
	  lfs       f1, 0x1EC(r1)
	  lfs       f0, 0x1F0(r1)
	  fmuls     f2, f2, f16
	  fmuls     f1, f1, f16
	  fmuls     f0, f0, f16
	  stfs      f2, 0x8(r1)
	  stfs      f1, 0xC(r1)
	  stfs      f0, 0x10(r1)
	  bl        0x450
	  lfs       f0, 0x14(r1)
	  stfs      f0, 0x0(r29)
	  lfs       f0, 0x18(r1)
	  stfs      f0, 0x4(r29)
	  lfs       f0, 0x1C(r1)
	  stfs      f0, 0x8(r29)

	.loc_0x1238:
	  lwz       r3, 0x74(r29)
	  lfs       f1, 0x4(r29)
	  lfs       f2, 0x70(r3)
	  fcmpo     cr0, f1, f2
	  bge-      .loc_0x1268
	  stfs      f2, 0x4(r29)
	  lbz       r0, 0xAC(r29)
	  cmplwi    r0, 0x2
	  bne-      .loc_0x127C
	  li        r0, 0
	  stb       r0, 0xAC(r29)
	  b         .loc_0x127C

	.loc_0x1268:
	  lfs       f0, -0x44FC(r2)
	  fmadds    f0, f0, f15, f2
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x127C
	  stfs      f0, 0x4(r29)

	.loc_0x127C:
	  fmr       f1, f14
	  mr        r3, r29
	  bl        -0x13E0
	  mr        r3, r29
	  lwz       r12, 0xC(r29)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl

	.loc_0x129C:
	  psq_l     f31,0x428(r1),0,0
	  lfd       f31, 0x420(r1)
	  psq_l     f30,0x418(r1),0,0
	  lfd       f30, 0x410(r1)
	  psq_l     f29,0x408(r1),0,0
	  lfd       f29, 0x400(r1)
	  psq_l     f28,0x3F8(r1),0,0
	  lfd       f28, 0x3F0(r1)
	  psq_l     f27,0x3E8(r1),0,0
	  lfd       f27, 0x3E0(r1)
	  psq_l     f26,0x3D8(r1),0,0
	  lfd       f26, 0x3D0(r1)
	  psq_l     f25,0x3C8(r1),0,0
	  lfd       f25, 0x3C0(r1)
	  psq_l     f24,0x3B8(r1),0,0
	  lfd       f24, 0x3B0(r1)
	  psq_l     f23,0x3A8(r1),0,0
	  lfd       f23, 0x3A0(r1)
	  psq_l     f22,0x398(r1),0,0
	  lfd       f22, 0x390(r1)
	  psq_l     f21,0x388(r1),0,0
	  lfd       f21, 0x380(r1)
	  psq_l     f20,0x378(r1),0,0
	  lfd       f20, 0x370(r1)
	  psq_l     f19,0x368(r1),0,0
	  lfd       f19, 0x360(r1)
	  psq_l     f18,0x358(r1),0,0
	  lfd       f18, 0x350(r1)
	  psq_l     f17,0x348(r1),0,0
	  lfd       f17, 0x340(r1)
	  psq_l     f16,0x338(r1),0,0
	  lfd       f16, 0x330(r1)
	  psq_l     f15,0x328(r1),0,0
	  lfd       f15, 0x320(r1)
	  psq_l     f14,0x318(r1),0,0
	  lfd       f14, 0x310(r1)
	  lwz       r31, 0x30C(r1)
	  lwz       r30, 0x308(r1)
	  lwz       r29, 0x304(r1)
	  lwz       r0, 0x434(r1)
	  lwz       r28, 0x300(r1)
	  mtlr      r0
	  addi      r1, r1, 0x430
	  blr

	.loc_0x134C:
	*/
}

/*
 * --INFO--
 * Address:	80207B50
 * Size:	000050
 */
void Vector3<float>::length() const
{
	/*
	.loc_0x0:
	  lfs       f3, 0x0(r3)
	  lfs       f1, 0x4(r3)
	  fmuls     f0, f3, f3
	  lfs       f4, 0x8(r3)
	  fmuls     f1, f1, f1
	  lfs       f2, -0x45CC(r2)
	  fmuls     f4, f4, f4
	  fadds     f0, f0, f1
	  fadds     f0, f4, f0
	  fcmpo     cr0, f0, f2
	  ble-      .loc_0x48
	  fmadds    f0, f3, f3, f1
	  fadds     f1, f4, f0
	  fcmpo     cr0, f1, f2
	  blelr-
	  fsqrte    f0, f1
	  fmuls     f1, f0, f1
	  blr

	.loc_0x48:
	  fmr       f1, f2
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80207BA0
 * Size:	000034
 */
void operator+(const Vector3<float>&, const Vector3<float>&)
{
	/*
	.loc_0x0:
	  lfs       f1, 0x0(r4)
	  lfs       f0, 0x0(r5)
	  lfs       f2, 0x4(r4)
	  fadds     f0, f1, f0
	  lfs       f1, 0x4(r5)
	  lfs       f4, 0x8(r4)
	  lfs       f3, 0x8(r5)
	  fadds     f1, f2, f1
	  stfs      f0, 0x0(r3)
	  fadds     f0, f4, f3
	  stfs      f1, 0x4(r3)
	  stfs      f0, 0x8(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80207BD4
 * Size:	0000E4
 */
void Iterator<Game::ItemUjamushi::Uja>::next()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r0, 0xC(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x40
	  lwz       r3, 0x8(r31)
	  lwz       r4, 0x4(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x4(r31)
	  b         .loc_0xD0

	.loc_0x40:
	  lwz       r3, 0x8(r31)
	  lwz       r4, 0x4(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x4(r31)
	  b         .loc_0xB4

	.loc_0x60:
	  lwz       r3, 0x8(r31)
	  lwz       r4, 0x4(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0xC(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0xD0
	  lwz       r3, 0x8(r31)
	  lwz       r4, 0x4(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x4(r31)

	.loc_0xB4:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x60

	.loc_0xD0:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80207CB8
 * Size:	00004C
 */
void Iterator<Game::ItemUjamushi::Uja>::isDone()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r3, 0x8(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x4(r31)
	  sub       r0, r3, r0
	  cntlzw    r0, r0
	  rlwinm    r3,r0,27,5,31
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80207D04
 * Size:	0000DC
 */
void Iterator<Game::ItemUjamushi::Uja>::first()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r0, 0xC(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x3C
	  lwz       r3, 0x8(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x4(r31)
	  b         .loc_0xC8

	.loc_0x3C:
	  lwz       r3, 0x8(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x4(r31)
	  b         .loc_0xAC

	.loc_0x58:
	  lwz       r3, 0x8(r31)
	  lwz       r4, 0x4(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0xC(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0xC8
	  lwz       r3, 0x8(r31)
	  lwz       r4, 0x4(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x4(r31)

	.loc_0xAC:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x58

	.loc_0xC8:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80207DE0
 * Size:	000090
 */
void Vector3<float>::normalise()
{
	/*
	.loc_0x0:
	  lfs       f3, 0x0(r3)
	  lfs       f1, 0x4(r3)
	  fmuls     f0, f3, f3
	  lfs       f4, 0x8(r3)
	  fmuls     f1, f1, f1
	  lfs       f2, -0x45CC(r2)
	  fmuls     f4, f4, f4
	  fadds     f0, f0, f1
	  fadds     f0, f4, f0
	  fcmpo     cr0, f0, f2
	  ble-      .loc_0x48
	  fmadds    f0, f3, f3, f1
	  fadds     f1, f4, f0
	  fcmpo     cr0, f1, f2
	  ble-      .loc_0x4C
	  fsqrte    f0, f1
	  fmuls     f1, f0, f1
	  b         .loc_0x4C

	.loc_0x48:
	  fmr       f1, f2

	.loc_0x4C:
	  lfs       f0, -0x45CC(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x88
	  lfs       f2, -0x45C0(r2)
	  lfs       f0, 0x0(r3)
	  fdivs     f2, f2, f1
	  fmuls     f0, f0, f2
	  stfs      f0, 0x0(r3)
	  lfs       f0, 0x4(r3)
	  fmuls     f0, f0, f2
	  stfs      f0, 0x4(r3)
	  lfs       f0, 0x8(r3)
	  fmuls     f0, f0, f2
	  stfs      f0, 0x8(r3)
	  blr

	.loc_0x88:
	  fmr       f1, f0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80207E70
 * Size:	000034
 */
void operator-(const Vector3<float>&, const Vector3<float>&)
{
	/*
	.loc_0x0:
	  lfs       f1, 0x0(r4)
	  lfs       f0, 0x0(r5)
	  lfs       f2, 0x4(r4)
	  fsubs     f0, f1, f0
	  lfs       f1, 0x4(r5)
	  lfs       f4, 0x8(r4)
	  lfs       f3, 0x8(r5)
	  fsubs     f1, f2, f1
	  stfs      f0, 0x0(r3)
	  fsubs     f0, f4, f3
	  stfs      f1, 0x4(r3)
	  stfs      f0, 0x8(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80207EA4
 * Size:	000130
 */
void Game::ItemUjamushi::UjaMgr::__ct((int))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  li        r6, 0x1
	  li        r5, -0x1
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  lis       r3, 0x804C
	  stw       r30, 0x18(r1)
	  subi      r0, r3, 0x494
	  mr        r7, r31
	  mr        r30, r4
	  stw       r29, 0x14(r1)
	  stw       r28, 0x10(r1)
	  mr        r28, r7
	  addi      r29, r28, 0x20
	  stw       r0, 0x0(r31)
	  li        r0, 0
	  mr        r3, r29
	  stb       r6, 0x1D(r7)
	  stb       r6, 0x1C(r7)
	  stw       r5, 0x4(r7)
	  stw       r0, 0x8(r7)
	  bl        0x209490
	  lis       r3, 0x804B
	  lis       r4, 0x804C
	  subi      r0, r3, 0x5324
	  lis       r3, 0x804C
	  stw       r0, 0x0(r29)
	  subi      r0, r4, 0x604
	  subi      r4, r3, 0x674
	  li        r5, 0
	  stw       r0, 0x0(r29)
	  addi      r0, r4, 0x30
	  addi      r3, r28, 0x3C
	  stb       r5, 0x18(r29)
	  stw       r4, 0x0(r28)
	  stw       r0, 0x20(r28)
	  bl        0x4F34
	  lis       r4, 0x804C
	  addi      r3, r31, 0xA8
	  subi      r5, r4, 0x7EC
	  li        r4, 0x1
	  stw       r5, 0x0(r31)
	  addi      r0, r5, 0x30
	  stw       r0, 0x20(r31)
	  bl        -0x2534
	  mr        r4, r30
	  addi      r3, r31, 0x3C
	  bl        0x4D80
	  li        r3, 0x18
	  bl        -0x1E40CC
	  mr.       r0, r3
	  beq-      .loc_0xE0
	  bl        -0x71804
	  mr        r0, r3

	.loc_0xE0:
	  stw       r0, 0x94(r31)
	  li        r4, 0x1E
	  lwz       r3, 0x94(r31)
	  bl        -0x717B0
	  li        r0, 0
	  lfs       f0, -0x45CC(r2)
	  stw       r0, 0x9C(r31)
	  mr        r3, r31
	  stw       r0, 0x98(r31)
	  stfs      f0, 0xA0(r31)
	  stw       r0, 0xA4(r31)
	  stw       r0, 0x310(r31)
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
 * Address:	80207FD4
 * Size:	000100
 */
void __dt__Q24Game36TFlockMgr<Game::ItemUjamushi::Uja> Fv(void)
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
	  beq-      .loc_0xE4
	  lis       r3, 0x804C
	  addic.    r0, r30, 0x3C
	  subi      r3, r3, 0x674
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x30
	  stw       r0, 0x20(r30)
	  beq-      .loc_0xA0
	  lis       r3, 0x804C
	  addic.    r0, r30, 0x3C
	  subi      r3, r3, 0x700
	  stw       r3, 0x3C(r30)
	  addi      r0, r3, 0x2C
	  stw       r0, 0x58(r30)
	  beq-      .loc_0xA0
	  lis       r3, 0x804C
	  addic.    r0, r30, 0x3C
	  subi      r3, r3, 0x77C
	  stw       r3, 0x3C(r30)
	  addi      r0, r3, 0x2C
	  stw       r0, 0x58(r30)
	  beq-      .loc_0xA0
	  lis       r3, 0x804C
	  addic.    r0, r30, 0x3C
	  subi      r0, r3, 0x604
	  stw       r0, 0x3C(r30)
	  beq-      .loc_0xA0
	  lis       r4, 0x804B
	  addi      r3, r30, 0x3C
	  subi      r0, r4, 0x5324
	  li        r4, 0
	  stw       r0, 0x3C(r30)
	  bl        0x209518

	.loc_0xA0:
	  addic.    r0, r30, 0x20
	  beq-      .loc_0xD4
	  lis       r3, 0x804C
	  addic.    r0, r30, 0x20
	  subi      r0, r3, 0x604
	  stw       r0, 0x20(r30)
	  beq-      .loc_0xD4
	  lis       r4, 0x804B
	  addi      r3, r30, 0x20
	  subi      r0, r4, 0x5324
	  li        r4, 0
	  stw       r0, 0x20(r30)
	  bl        0x2094E4

	.loc_0xD4:
	  extsh.    r0, r31
	  ble-      .loc_0xE4
	  mr        r3, r30
	  bl        -0x1E4000

	.loc_0xE4:
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
 * Address:	802080D4
 * Size:	0000A0
 */
void MonoObjectMgr<Game::ItemUjamushi::Uja>::~MonoObjectMgr()
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
	  beq-      .loc_0x84
	  lis       r4, 0x804C
	  subi      r4, r4, 0x700
	  stw       r4, 0x0(r30)
	  addi      r0, r4, 0x2C
	  stw       r0, 0x1C(r30)
	  beq-      .loc_0x74
	  lis       r4, 0x804C
	  subi      r4, r4, 0x77C
	  stw       r4, 0x0(r30)
	  addi      r0, r4, 0x2C
	  stw       r0, 0x1C(r30)
	  beq-      .loc_0x74
	  lis       r4, 0x804C
	  subi      r0, r4, 0x604
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x74
	  lis       r5, 0x804B
	  li        r4, 0
	  subi      r0, r5, 0x5324
	  stw       r0, 0x0(r30)
	  bl        0x209444

	.loc_0x74:
	  extsh.    r0, r31
	  ble-      .loc_0x84
	  mr        r3, r30
	  bl        -0x1E40A0

	.loc_0x84:
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
 * Address:	80208174
 * Size:	000070
 */
void Container<Game::ItemUjamushi::Uja>::~Container()
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
	  lis       r4, 0x804C
	  subi      r0, r4, 0x604
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x44
	  lis       r5, 0x804B
	  li        r4, 0
	  subi      r0, r5, 0x5324
	  stw       r0, 0x0(r30)
	  bl        0x2093D4

	.loc_0x44:
	  extsh.    r0, r31
	  ble-      .loc_0x54
	  mr        r3, r30
	  bl        -0x1E4110

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

/*
 * --INFO--
 * Address:	802081E4
 * Size:	000050
 */
void Game::ItemUjamushi::UjaMgr::init((Game::ItemUjamushi::UjaMgrInitArg&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lfs       f0, 0x0(r4)
	  stfs      f0, 0x6C(r3)
	  lfs       f0, 0x4(r4)
	  stfs      f0, 0x70(r3)
	  lfs       f0, 0x8(r4)
	  stfs      f0, 0x74(r3)
	  lfs       f0, 0xC(r4)
	  stfs      f0, 0x78(r3)
	  lwz       r0, 0x10(r4)
	  stw       r0, 0xA4(r3)
	  lwz       r0, 0x14(r4)
	  stw       r0, 0x310(r3)
	  bl        0x58
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000E0
 */
void Game::ItemUjamushi::UjaMgr::updateBlend((int, int, float))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000B0
 */
void Game::ItemUjamushi::UjaMgr::appear(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80208234
 * Size:	000008
 */
void getMaxObjects__Q24Game36TFlockMgr<Game::ItemUjamushi::Uja> Fv(void)
{
	/*
	.loc_0x0:
	  lwz       r3, 0x60(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8020823C
 * Size:	00002C
 */
void getFlock__Q24Game36TFlockMgr<Game::ItemUjamushi::Uja> Fi(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwzu      r12, 0x3C(r3)
	  lwz       r12, 0x24(r12)
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
 * Address:	80208268
 * Size:	000010
 */
void MonoObjectMgr<Game::ItemUjamushi::Uja>::getAt(int)
{
	/*
	.loc_0x0:
	  mulli     r0, r4, 0xC8
	  lwz       r3, 0x28(r3)
	  add       r3, r3, r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000080
 */
void Game::ItemUjamushi::UjaMgr::disappear(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000080
 */
void Game::ItemUjamushi::UjaMgr::mogure(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80208278
 * Size:	000418
 */
void Game::ItemUjamushi::UjaMgr::test_createUjas(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x90(r1)
	  mflr      r0
	  stw       r0, 0x94(r1)
	  stfd      f31, 0x80(r1)
	  psq_st    f31,0x88(r1),0,0
	  stw       r31, 0x7C(r1)
	  stw       r30, 0x78(r1)
	  stw       r29, 0x74(r1)
	  lwz       r12, 0x0(r3)
	  mr        r29, r3
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  cmpwi     r3, 0
	  beq-      .loc_0x3F4
	  mr        r3, r29
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0xC(r1)
	  li        r30, 0
	  lfd       f2, -0x4540(r2)
	  stw       r0, 0x8(r1)
	  lfs       f0, -0x4548(r2)
	  lfd       f1, 0x8(r1)
	  fsubs     f1, f1, f2
	  fdivs     f31, f0, f1
	  b         .loc_0x3D8

	.loc_0x7C:
	  addi      r3, r29, 0x3C
	  lwz       r12, 0x3C(r29)
	  lwz       r12, 0x7C(r12)
	  mtctr     r12
	  bctrl
	  mr.       r31, r3
	  beq-      .loc_0x3D4
	  bl        -0x13ED70
	  bl        -0x13ED74
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0xC(r1)
	  lfd       f3, -0x4540(r2)
	  stw       r0, 0x8(r1)
	  lfs       f2, -0x454C(r2)
	  lfd       f0, 0x8(r1)
	  lfs       f1, -0x4548(r2)
	  fsubs     f3, f0, f3
	  lfs       f0, -0x45CC(r2)
	  fdivs     f2, f3, f2
	  fmuls     f4, f1, f2
	  fmr       f3, f4
	  fcmpo     cr0, f4, f0
	  bge-      .loc_0xE0
	  fneg      f3, f4

	.loc_0xE0:
	  lfs       f1, -0x451C(r2)
	  lis       r3, 0x8050
	  lfs       f2, -0x45CC(r2)
	  addi      r4, r3, 0x71A0
	  fmuls     f0, f3, f1
	  fcmpo     cr0, f4, f2
	  fctiwz    f0, f0
	  stfd      f0, 0x10(r1)
	  lwz       r0, 0x14(r1)
	  rlwinm    r0,r0,3,18,28
	  add       r3, r4, r0
	  lfs       f0, 0x4(r3)
	  fmuls     f3, f2, f0
	  bge-      .loc_0x13C
	  lfs       f0, -0x4520(r2)
	  fmuls     f0, f4, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x18(r1)
	  lwz       r0, 0x1C(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r4, r0
	  fneg      f0, f0
	  b         .loc_0x154

	.loc_0x13C:
	  fmuls     f0, f4, f1
	  fctiwz    f0, f0
	  stfd      f0, 0x20(r1)
	  lwz       r0, 0x24(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r4, r0

	.loc_0x154:
	  fmuls     f4, f2, f0
	  lfs       f2, 0x6C(r29)
	  lfs       f0, 0x74(r29)
	  lfs       f1, 0x70(r29)
	  lfs       f5, -0x45CC(r2)
	  fadds     f4, f4, f2
	  stw       r29, 0x74(r31)
	  fadds     f2, f3, f0
	  fadds     f5, f5, f1
	  lfs       f0, -0x45CC(r2)
	  stfs      f4, 0x0(r31)
	  stfs      f5, 0x4(r31)
	  stfs      f2, 0x8(r31)
	  stfs      f0, 0x50(r31)
	  stfs      f0, 0x54(r31)
	  stfs      f0, 0x58(r31)
	  bl        -0x13EE6C
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x2C(r1)
	  mr        r3, r31
	  lfd       f3, -0x4540(r2)
	  stw       r0, 0x28(r1)
	  lfs       f2, -0x454C(r2)
	  lfd       f0, 0x28(r1)
	  lfs       f1, -0x4548(r2)
	  fsubs     f3, f0, f3
	  lfs       f0, -0x45CC(r2)
	  fdivs     f2, f3, f2
	  fmuls     f1, f1, f2
	  stfs      f1, 0x5C(r31)
	  stfs      f0, 0xB8(r31)
	  stfs      f0, 0x60(r31)
	  lwz       r12, 0xC(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, -0x45C0(r2)
	  stfs      f0, 0x64(r31)
	  stfs      f0, 0x68(r31)
	  stfs      f0, 0x6C(r31)
	  bl        -0x13EED0
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x34(r1)
	  lfd       f3, -0x4540(r2)
	  stw       r0, 0x30(r1)
	  lfs       f2, -0x454C(r2)
	  lfd       f0, 0x30(r1)
	  lfs       f1, -0x4548(r2)
	  fsubs     f3, f0, f3
	  lfs       f0, -0x45CC(r2)
	  fdivs     f2, f3, f2
	  fmuls     f1, f1, f2
	  stfs      f1, 0x70(r31)
	  stfs      f0, 0x84(r31)
	  stfs      f0, 0x88(r31)
	  stfs      f0, 0x8C(r31)
	  stfs      f0, 0x90(r31)
	  stfs      f0, 0x94(r31)
	  stfs      f0, 0x98(r31)
	  stfs      f0, 0x9C(r31)
	  stfs      f0, 0xA0(r31)
	  stfs      f0, 0xA4(r31)
	  lwz       r3, 0x310(r29)
	  lfs       f0, 0x74(r3)
	  stfs      f0, 0xA8(r31)
	  bl        -0x13EF38
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x3C(r1)
	  addi      r3, r31, 0x78
	  lfd       f3, -0x4540(r2)
	  stw       r0, 0x38(r1)
	  lfs       f2, -0x454C(r2)
	  lfd       f1, 0x38(r1)
	  lfs       f0, -0x4584(r2)
	  fsubs     f3, f1, f3
	  lfs       f1, 0xA8(r31)
	  fmuls     f0, f0, f1
	  fdivs     f2, f3, f2
	  fmadds    f0, f0, f2, f1
	  stfs      f0, 0xA8(r31)
	  lwz       r4, 0x94(r29)
	  bl        -0x71E38
	  li        r0, 0
	  stb       r0, 0xAC(r31)
	  bl        -0x13EF88
	  lis       r4, 0x4330
	  xoris     r0, r3, 0x8000
	  stw       r0, 0x44(r1)
	  xoris     r0, r30, 0x8000
	  lfd       f4, -0x4540(r2)
	  li        r3, 0
	  stw       r4, 0x40(r1)
	  lfs       f0, -0x454C(r2)
	  lfd       f1, 0x40(r1)
	  lfs       f2, -0x4544(r2)
	  fsubs     f3, f1, f4
	  stw       r0, 0x54(r1)
	  lfs       f1, -0x45CC(r2)
	  stw       r4, 0x50(r1)
	  fdivs     f3, f3, f0
	  lfd       f0, 0x50(r1)
	  fmuls     f2, f2, f3
	  fsubs     f0, f0, f4
	  fctiwz    f2, f2
	  fmuls     f5, f31, f0
	  stfd      f2, 0x48(r1)
	  fmr       f3, f5
	  lwz       r4, 0x4C(r1)
	  fcmpo     cr0, f5, f1
	  addi      r0, r4, 0x14
	  stb       r0, 0xAD(r31)
	  stw       r3, 0xB0(r31)
	  stb       r3, 0xAE(r31)
	  stfs      f1, 0xB4(r31)
	  bge-      .loc_0x330
	  fneg      f3, f5

	.loc_0x330:
	  lfs       f2, -0x451C(r2)
	  lis       r3, 0x8050
	  lfs       f0, -0x45CC(r2)
	  addi      r4, r3, 0x71A0
	  fmuls     f1, f3, f2
	  lfs       f3, -0x44D4(r2)
	  fcmpo     cr0, f5, f0
	  fctiwz    f0, f1
	  stfd      f0, 0x58(r1)
	  lwz       r0, 0x5C(r1)
	  rlwinm    r0,r0,3,18,28
	  add       r3, r4, r0
	  lfs       f0, 0x4(r3)
	  fmuls     f4, f3, f0
	  bge-      .loc_0x390
	  lfs       f0, -0x4520(r2)
	  fmuls     f0, f5, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x60(r1)
	  lwz       r0, 0x64(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r4, r0
	  fneg      f0, f0
	  b         .loc_0x3A8

	.loc_0x390:
	  fmuls     f0, f5, f2
	  fctiwz    f0, f0
	  stfd      f0, 0x68(r1)
	  lwz       r0, 0x6C(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r4, r0

	.loc_0x3A8:
	  fmuls     f3, f3, f0
	  lfs       f2, 0x6C(r29)
	  lfs       f0, 0x74(r29)
	  lfs       f5, -0x45CC(r2)
	  lfs       f1, 0x70(r29)
	  fadds     f3, f3, f2
	  fadds     f0, f4, f0
	  fadds     f5, f5, f1
	  stfs      f3, 0x44(r31)
	  stfs      f5, 0x48(r31)
	  stfs      f0, 0x4C(r31)

	.loc_0x3D4:
	  addi      r30, r30, 0x1

	.loc_0x3D8:
	  mr        r3, r29
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  cmpw      r30, r3
	  blt+      .loc_0x7C

	.loc_0x3F4:
	  psq_l     f31,0x88(r1),0,0
	  lwz       r0, 0x94(r1)
	  lfd       f31, 0x80(r1)
	  lwz       r31, 0x7C(r1)
	  lwz       r30, 0x78(r1)
	  lwz       r29, 0x74(r1)
	  mtlr      r0
	  addi      r1, r1, 0x90
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80208690
 * Size:	000024
 */
void Game::ItemUjamushi::UjaMgr::do_update_boundSphere(void)
{
	/*
	.loc_0x0:
	  lfs       f0, 0x6C(r3)
	  stfs      f0, 0xC(r3)
	  lfs       f0, 0x70(r3)
	  stfs      f0, 0x10(r3)
	  lfs       f0, 0x74(r3)
	  stfs      f0, 0x14(r3)
	  lfs       f0, 0x78(r3)
	  stfs      f0, 0x18(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802086B4
 * Size:	00029C
 */
void Game::ItemUjamushi::UjaMgr::do_update(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  lbz       r0, 0x1C(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x38
	  lbz       r0, 0x1D(r28)
	  cmplwi    r0, 0
	  beq-      .loc_0x27C

	.loc_0x38:
	  lwz       r3, 0xA4(r28)
	  addi      r6, r28, 0xA8
	  lwz       r4, 0x98(r28)
	  lwz       r5, 0x9C(r28)
	  lfs       f1, 0xA0(r28)
	  bl        -0x26D8
	  lwz       r3, -0x6514(r13)
	  subi      r4, r2, 0x44D0
	  li        r5, 0x1
	  lwz       r3, 0x28(r3)
	  bl        0x2223E4
	  lwz       r3, 0x94(r28)
	  bl        -0x71F88
	  lfs       f0, -0x45CC(r2)
	  li        r31, 0
	  li        r30, 0
	  li        r29, 0
	  stfs      f0, 0x7C(r28)
	  stfs      f0, 0x80(r28)
	  stfs      f0, 0x84(r28)
	  stfs      f0, 0x88(r28)
	  stfs      f0, 0x8C(r28)
	  stfs      f0, 0x90(r28)
	  b         .loc_0x148

	.loc_0x98:
	  mr        r3, r28
	  mr        r4, r29
	  lwz       r12, 0x0(r28)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x144
	  mr        r3, r28
	  mr        r4, r29
	  lwz       r12, 0x0(r28)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lfs       f1, 0x7C(r28)
	  addi      r31, r31, 0x1
	  lfs       f0, 0x0(r3)
	  fadds     f0, f1, f0
	  stfs      f0, 0x7C(r28)
	  lfs       f1, 0x80(r28)
	  lfs       f0, 0x4(r3)
	  fadds     f0, f1, f0
	  stfs      f0, 0x80(r28)
	  lfs       f1, 0x84(r28)
	  lfs       f0, 0x8(r3)
	  fadds     f0, f1, f0
	  stfs      f0, 0x84(r28)
	  lbz       r0, 0xAC(r3)
	  cmplwi    r0, 0x2
	  beq-      .loc_0x144
	  lfs       f1, 0x88(r28)
	  addi      r30, r30, 0x1
	  lfs       f0, 0x50(r3)
	  fadds     f0, f1, f0
	  stfs      f0, 0x88(r28)
	  lfs       f1, 0x8C(r28)
	  lfs       f0, 0x54(r3)
	  fadds     f0, f1, f0
	  stfs      f0, 0x8C(r28)
	  lfs       f1, 0x90(r28)
	  lfs       f0, 0x58(r3)
	  fadds     f0, f1, f0
	  stfs      f0, 0x90(r28)

	.loc_0x144:
	  addi      r29, r29, 0x1

	.loc_0x148:
	  mr        r3, r28
	  lwz       r12, 0x0(r28)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  cmpw      r29, r3
	  blt+      .loc_0x98
	  cmpwi     r31, 0
	  ble-      .loc_0x1B4
	  xoris     r3, r31, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0xC(r1)
	  lfd       f1, -0x4540(r2)
	  stw       r0, 0x8(r1)
	  lfs       f2, -0x45C0(r2)
	  lfd       f0, 0x8(r1)
	  lfs       f3, 0x7C(r28)
	  fsubs     f0, f0, f1
	  fdivs     f1, f2, f0
	  fmuls     f0, f3, f1
	  stfs      f0, 0x7C(r28)
	  lfs       f0, 0x80(r28)
	  fmuls     f0, f0, f1
	  stfs      f0, 0x80(r28)
	  lfs       f0, 0x84(r28)
	  fmuls     f0, f0, f1
	  stfs      f0, 0x84(r28)

	.loc_0x1B4:
	  cmpwi     r30, 0
	  ble-      .loc_0x204
	  xoris     r3, r30, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0xC(r1)
	  lfd       f1, -0x4540(r2)
	  stw       r0, 0x8(r1)
	  lfs       f2, -0x45C0(r2)
	  lfd       f0, 0x8(r1)
	  lfs       f3, 0x88(r28)
	  fsubs     f0, f0, f1
	  fdivs     f1, f2, f0
	  fmuls     f0, f3, f1
	  stfs      f0, 0x88(r28)
	  lfs       f0, 0x8C(r28)
	  fmuls     f0, f0, f1
	  stfs      f0, 0x8C(r28)
	  lfs       f0, 0x90(r28)
	  fmuls     f0, f0, f1
	  stfs      f0, 0x90(r28)

	.loc_0x204:
	  li        r29, 0
	  b         .loc_0x250

	.loc_0x20C:
	  mr        r3, r28
	  mr        r4, r29
	  lwz       r12, 0x0(r28)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x24C
	  mr        r3, r28
	  mr        r4, r29
	  lwz       r12, 0x0(r28)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  addi      r4, r28, 0xA8
	  bl        -0x20F8

	.loc_0x24C:
	  addi      r29, r29, 0x1

	.loc_0x250:
	  mr        r3, r28
	  lwz       r12, 0x0(r28)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  cmpw      r29, r3
	  blt+      .loc_0x20C
	  lwz       r3, -0x6514(r13)
	  subi      r4, r2, 0x44D0
	  lwz       r3, 0x28(r3)
	  bl        0x2221D0

	.loc_0x27C:
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
 * Address:	80208950
 * Size:	000014
 */
void isFlagAlive__Q24Game36TFlockMgr<Game::ItemUjamushi::Uja> Fi(void)
{
	/*
	.loc_0x0:
	  lwz       r3, 0x68(r3)
	  lbzx      r0, r3, r4
	  cntlzw    r0, r0
	  rlwinm    r3,r0,27,5,31
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80208964
 * Size:	0002E4
 */
void Game::ItemUjamushi::UjaMgr::astonishPikmins(void)
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
	  stw       r31, 0x3C(r1)
	  lis       r4, 0x804B
	  lfs       f31, 0xC(r3)
	  lfs       f30, 0x10(r3)
	  subi      r0, r4, 0x5D00
	  lfs       f29, 0x14(r3)
	  li        r5, 0
	  lwz       r3, -0x6D0C(r13)
	  lis       r6, 0x804B
	  lfs       f0, -0x44C8(r2)
	  lis       r4, 0x804B
	  subi      r6, r6, 0x4364
	  stw       r0, 0x14(r1)
	  addi      r0, r4, 0x4854
	  cmplwi    r5, 0
	  stw       r6, 0x20(r1)
	  stw       r5, 0x2C(r1)
	  stw       r5, 0x24(r1)
	  stw       r3, 0x28(r1)
	  stw       r5, 0x18(r1)
	  stw       r0, 0x14(r1)
	  stfs      f0, 0x1C(r1)
	  bne-      .loc_0x98
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x24(r1)
	  b         .loc_0x298

	.loc_0x98:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x24(r1)
	  b         .loc_0x104

	.loc_0xB0:
	  lwz       r3, 0x28(r1)
	  lwz       r4, 0x24(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x2C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x298
	  lwz       r3, 0x28(r1)
	  lwz       r4, 0x24(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x24(r1)

	.loc_0x104:
	  lwz       r12, 0x20(r1)
	  addi      r3, r1, 0x20
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0xB0
	  b         .loc_0x298

	.loc_0x124:
	  lwz       r3, 0x28(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  mr        r31, r3
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x1DC
	  mr        r4, r31
	  addi      r3, r1, 0x8
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, 0xC(r1)
	  lfs       f2, 0x10(r1)
	  fsubs     f3, f0, f30
	  lfs       f1, 0x8(r1)
	  fsubs     f2, f2, f29
	  lfs       f0, -0x45CC(r2)
	  fsubs     f1, f1, f31
	  fmuls     f3, f3, f3
	  fmuls     f2, f2, f2
	  fmadds    f1, f1, f1, f3
	  fadds     f1, f2, f1
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x1B0
	  ble-      .loc_0x1B4
	  fsqrte    f0, f1
	  fmuls     f1, f0, f1
	  b         .loc_0x1B4

	.loc_0x1B0:
	  fmr       f1, f0

	.loc_0x1B4:
	  lfs       f0, -0x44C8(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x1DC
	  mr        r3, r31
	  addi      r4, r1, 0x14
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x1A4(r12)
	  mtctr     r12
	  bctrl

	.loc_0x1DC:
	  lwz       r0, 0x2C(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x208
	  lwz       r3, 0x28(r1)
	  lwz       r4, 0x24(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x24(r1)
	  b         .loc_0x298

	.loc_0x208:
	  lwz       r3, 0x28(r1)
	  lwz       r4, 0x24(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x24(r1)
	  b         .loc_0x27C

	.loc_0x228:
	  lwz       r3, 0x28(r1)
	  lwz       r4, 0x24(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x2C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x298
	  lwz       r3, 0x28(r1)
	  lwz       r4, 0x24(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x24(r1)

	.loc_0x27C:
	  lwz       r12, 0x20(r1)
	  addi      r3, r1, 0x20
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x228

	.loc_0x298:
	  lwz       r3, 0x28(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x24(r1)
	  cmplw     r4, r3
	  bne+      .loc_0x124
	  psq_l     f31,0x68(r1),0,0
	  lfd       f31, 0x60(r1)
	  psq_l     f30,0x58(r1),0,0
	  lfd       f30, 0x50(r1)
	  psq_l     f29,0x48(r1),0,0
	  lfd       f29, 0x40(r1)
	  lwz       r0, 0x74(r1)
	  lwz       r31, 0x3C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x70
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80208C48
 * Size:	000134
 */
void Game::ItemUjamushi::FSM::init((Game::ItemUjamushi::Item*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r4, 0x3
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        0x2504
	  li        r3, 0x14
	  bl        -0x1E4DC4
	  mr.       r4, r3
	  beq-      .loc_0x68
	  lis       r3, 0x804C
	  lis       r6, 0x804C
	  subi      r0, r3, 0x824
	  lis       r5, 0x804C
	  stw       r0, 0x0(r4)
	  li        r7, 0
	  lis       r3, 0x804C
	  subi      r6, r6, 0x858
	  stw       r7, 0x4(r4)
	  subi      r5, r5, 0x88C
	  subi      r0, r3, 0x1014
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0x0(r4)
	  stw       r0, 0x0(r4)

	.loc_0x68:
	  mr        r3, r31
	  bl        0x42F4
	  li        r3, 0x14
	  bl        -0x1E4E18
	  mr.       r4, r3
	  beq-      .loc_0xC0
	  lis       r3, 0x804C
	  lis       r6, 0x804C
	  subi      r0, r3, 0x824
	  lis       r5, 0x804C
	  stw       r0, 0x0(r4)
	  li        r0, 0x1
	  lis       r3, 0x804C
	  li        r7, 0
	  stw       r0, 0x4(r4)
	  subi      r6, r6, 0x858
	  subi      r5, r5, 0x88C
	  subi      r0, r3, 0x1048
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0x0(r4)
	  stw       r0, 0x0(r4)

	.loc_0xC0:
	  mr        r3, r31
	  bl        0x429C
	  li        r3, 0x14
	  bl        -0x1E4E70
	  mr.       r4, r3
	  beq-      .loc_0x118
	  lis       r3, 0x804C
	  lis       r6, 0x804C
	  subi      r0, r3, 0x824
	  lis       r5, 0x804C
	  stw       r0, 0x0(r4)
	  li        r0, 0x2
	  lis       r3, 0x804C
	  li        r7, 0
	  stw       r0, 0x4(r4)
	  subi      r6, r6, 0x858
	  subi      r5, r5, 0x88C
	  subi      r0, r3, 0x107C
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0x0(r4)
	  stw       r0, 0x0(r4)

	.loc_0x118:
	  mr        r3, r31
	  bl        0x4244
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
 * Size:	000134
 */
void Game::ItemUjamushi::Item::__ct(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80208D7C
 * Size:	0000C8
 */
void Game::ItemUjamushi::Item::onInit((Game::CreatureInitArg*))
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
	  bne-      .loc_0x3C
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  addi      r3, r3, 0x1DC8
	  li        r4, 0x42F
	  addi      r5, r5, 0x1DDC
	  crclr     6, 0x6
	  bl        -0x1DE774

	.loc_0x3C:
	  lwz       r31, 0x4(r31)
	  li        r3, 0x314
	  bl        -0x1E4F1C
	  mr.       r0, r3
	  beq-      .loc_0x5C
	  mr        r4, r31
	  bl        -0xF2C
	  mr        r0, r3

	.loc_0x5C:
	  stw       r0, 0x200(r30)
	  mr        r3, r30
	  li        r4, 0
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0xB4(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x1D8(r30)
	  mr        r4, r30
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r30
	  li        r4, 0x1
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0xAC(r12)
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
 * Address:	80208E44
 * Size:	000034
 */
void start__Q24Game40StateMachine<Game::ItemUjamushi::Item>
FPQ34Game12ItemUjamushi4ItemiPQ24Game8StateArg(void)
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
 * Address:	80208E78
 * Size:	0000C0
 */
void Game::ItemUjamushi::Item::onSetPosition(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stw       r31, 0x2C(r1)
	  mr        r31, r3
	  addi      r3, r31, 0x138
	  addi      r4, r31, 0x19C
	  bl        0x21F9AC
	  lwz       r4, -0x6AC0(r13)
	  lfs       f3, 0x1D0(r31)
	  lfs       f1, 0x1A0(r31)
	  addi      r3, r4, 0x310
	  lfs       f2, 0x1A4(r31)
	  addi      r0, r4, 0x5A8
	  lfs       f0, 0x19C(r31)
	  stfs      f0, 0x8(r1)
	  stfs      f1, 0xC(r1)
	  stfs      f2, 0x10(r1)
	  stfs      f3, 0x14(r1)
	  stw       r3, 0x18(r1)
	  stw       r0, 0x1C(r1)
	  lwz       r12, 0x310(r4)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x200(r31)
	  addi      r4, r1, 0x8
	  bl        -0xD00
	  lwz       r3, 0x200(r31)
	  bl        -0x588
	  li        r0, 0
	  stw       r0, 0x1E0(r31)
	  stw       r0, 0x1E4(r31)
	  lwz       r3, -0x6AC0(r13)
	  lwzu      r12, 0x328(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x1EC(r31)
	  mr        r3, r31
	  lfs       f0, -0x45CC(r2)
	  stfs      f0, 0x1E8(r31)
	  bl        .loc_0xC0
	  lwz       r0, 0x34(r1)
	  lwz       r31, 0x2C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr

	.loc_0xC0:
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00008C
 */
void Game::ItemUjamushi::Item::changeBoid(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80208F38
 * Size:	000064
 */
void Game::ItemUjamushi::Item::setBoidTimer(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  bl        -0x13F9AC
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0xC(r1)
	  lfd       f3, -0x4540(r2)
	  stw       r0, 0x8(r1)
	  lfs       f2, -0x454C(r2)
	  lfd       f0, 0x8(r1)
	  lfs       f1, -0x4590(r2)
	  fsubs     f3, f0, f3
	  lfs       f0, -0x4550(r2)
	  fdivs     f2, f3, f2
	  fmadds    f0, f1, f2, f0
	  stfs      f0, 0x1F0(r31)
	  stfs      f0, 0x1F4(r31)
	  lwz       r31, 0x1C(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80208F9C
 * Size:	00003C
 */
void Game::ItemUjamushi::Item::ignoreAtari((Game::Creature*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r3, r4
	  stw       r0, 0x14(r1)
	  lwz       r12, 0x0(r4)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  rlwinm    r0,r3,0,24,31
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
 * Address:	80208FD8
 * Size:	000078
 */
void Game::ItemUjamushi::Item::updateBoundSphere(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r4, 0x114(r3)
	  lfs       f0, 0x1D0(r3)
	  lwz       r4, 0x0(r4)
	  stfs      f0, 0x1C(r4)
	  lfs       f0, 0x19C(r3)
	  stfs      f0, 0x1C4(r3)
	  lfs       f0, 0x1A0(r3)
	  stfs      f0, 0x1C8(r3)
	  lfs       f0, 0x1A4(r3)
	  stfs      f0, 0x1CC(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xB0(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x68
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  addi      r3, r3, 0x1DC8
	  li        r4, 0x471
	  addi      r5, r5, 0x1E30
	  crclr     6, 0x6
	  bl        -0x1DE9FC

	.loc_0x68:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80209050
 * Size:	000008
 */
u32 Game::ItemUjamushi::Item::isCollisionFlick(void) { return 0x0; }

/*
 * --INFO--
 * Address:	80209058
 * Size:	000374
 */
void Game::ItemUjamushi::Item::interactFlockAttack((Game::InteractFlockAttack&))
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
	  stw       r31, 0x6C(r1)
	  stw       r30, 0x68(r1)
	  stw       r29, 0x64(r1)
	  stw       r28, 0x60(r1)
	  mr        r30, r4
	  mr        r29, r3
	  lwz       r3, 0x200(r3)
	  lwz       r4, 0x8(r4)
	  lfs       f1, 0xC(r30)
	  bl        0x5C78
	  neg       r0, r3
	  li        r31, 0
	  or        r0, r0, r3
	  rlwinm    r0,r0,1,31,31
	  stb       r0, 0x10(r30)
	  lwz       r28, 0x8(r30)
	  lwz       r29, 0x200(r29)
	  cmpwi     r28, 0
	  blt-      .loc_0x88
	  mr        r3, r29
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  cmpw      r28, r3
	  bge-      .loc_0x88
	  li        r31, 0x1

	.loc_0x88:
	  rlwinm.   r0,r31,0,24,31
	  bne-      .loc_0xAC
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  addi      r3, r3, 0x1E3C
	  li        r4, 0xAB
	  addi      r5, r5, 0x1DDC
	  crclr     6, 0x6
	  bl        -0x1DEAC0

	.loc_0xAC:
	  mr        r3, r29
	  mr        r4, r28
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lfs       f1, 0x4(r3)
	  lfs       f2, 0x8(r3)
	  lfs       f0, 0x0(r3)
	  stfs      f0, 0x14(r30)
	  stfs      f1, 0x18(r30)
	  stfs      f2, 0x1C(r30)
	  lbz       r0, 0x10(r30)
	  cmplwi    r0, 0
	  beq-      .loc_0x340
	  bl        -0x13FBA0
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x24(r1)
	  lfd       f3, -0x4540(r2)
	  stw       r0, 0x20(r1)
	  lfs       f1, -0x454C(r2)
	  lfd       f2, 0x20(r1)
	  lfs       f0, -0x44C0(r2)
	  fsubs     f2, f2, f3
	  fdivs     f1, f2, f1
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x340
	  lwz       r3, -0x6BB0(r13)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xA4(r12)
	  mtctr     r12
	  bctrl
	  mr.       r31, r3
	  beq-      .loc_0x340
	  bl        -0x13FBF0
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x24(r1)
	  lfd       f3, -0x4540(r2)
	  stw       r0, 0x20(r1)
	  lfs       f1, -0x454C(r2)
	  lfd       f2, 0x20(r1)
	  lfs       f0, -0x4548(r2)
	  fsubs     f2, f2, f3
	  fdivs     f1, f2, f1
	  fmuls     f31, f0, f1
	  bl        -0x13FC20
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x2C(r1)
	  lfd       f3, -0x4540(r2)
	  stw       r0, 0x28(r1)
	  lfs       f2, -0x454C(r2)
	  lfd       f0, 0x28(r1)
	  lfs       f1, -0x4580(r2)
	  fsubs     f3, f0, f3
	  lfs       f0, -0x4570(r2)
	  fdivs     f2, f3, f2
	  fmadds    f30, f1, f2, f0
	  bl        -0x13FC54
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x34(r1)
	  fmr       f4, f31
	  lfs       f0, -0x45CC(r2)
	  stw       r0, 0x30(r1)
	  lfd       f1, -0x4540(r2)
	  fcmpo     cr0, f31, f0
	  lfd       f0, 0x30(r1)
	  lfs       f2, -0x454C(r2)
	  fsubs     f3, f0, f1
	  lfs       f1, -0x45C8(r2)
	  lfs       f0, -0x457C(r2)
	  fdivs     f2, f3, f2
	  fmadds    f3, f1, f2, f0
	  bge-      .loc_0x1E4
	  fneg      f4, f31

	.loc_0x1E4:
	  lfs       f2, -0x451C(r2)
	  lis       r3, 0x8050
	  lfs       f0, -0x45CC(r2)
	  addi      r4, r3, 0x71A0
	  fmuls     f1, f4, f2
	  fcmpo     cr0, f31, f0
	  fctiwz    f0, f1
	  stfd      f0, 0x38(r1)
	  lwz       r0, 0x3C(r1)
	  rlwinm    r0,r0,3,18,28
	  add       r3, r4, r0
	  lfs       f0, 0x4(r3)
	  fmuls     f1, f30, f0
	  bge-      .loc_0x240
	  lfs       f0, -0x4520(r2)
	  fmuls     f0, f31, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x40(r1)
	  lwz       r0, 0x44(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r4, r0
	  fneg      f0, f0
	  b         .loc_0x258

	.loc_0x240:
	  fmuls     f0, f31, f2
	  fctiwz    f0, f0
	  stfd      f0, 0x48(r1)
	  lwz       r0, 0x4C(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r4, r0

	.loc_0x258:
	  fmuls     f0, f30, f0
	  stfs      f3, 0x18(r1)
	  stfs      f1, 0x1C(r1)
	  stfs      f0, 0x14(r1)
	  bl        -0x13FD20
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x54(r1)
	  lfd       f3, -0x4540(r2)
	  stw       r0, 0x50(r1)
	  lfs       f1, -0x454C(r2)
	  lfd       f2, 0x50(r1)
	  lfs       f0, -0x44BC(r2)
	  fsubs     f2, f2, f3
	  fdivs     f1, f2, f1
	  fmuls     f0, f0, f1
	  fctiwz    f0, f0
	  stfd      f0, 0x58(r1)
	  lwz       r28, 0x5C(r1)
	  cmpwi     r28, 0x1
	  bne-      .loc_0x2C4
	  lwz       r3, -0x6B70(r13)
	  li        r4, 0x1D
	  bl        -0x21F2C
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x2C4
	  li        r28, 0

	.loc_0x2C4:
	  cmpwi     r28, 0x2
	  bne-      .loc_0x2E4
	  lwz       r3, -0x6B70(r13)
	  li        r4, 0x1E
	  bl        -0x21F4C
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x2E4
	  li        r28, 0

	.loc_0x2E4:
	  mr        r3, r31
	  li        r4, 0
	  bl        -0xCE37C
	  stb       r28, 0x1E0(r31)
	  mr        r3, r31
	  lfs       f0, -0x45C8(r2)
	  addi      r4, r1, 0x8
	  lfs       f1, 0x14(r30)
	  li        r5, 0
	  stfs      f1, 0x8(r1)
	  lfs       f1, 0x18(r30)
	  stfs      f1, 0xC(r1)
	  fadds     f0, f1, f0
	  lfs       f1, 0x1C(r30)
	  stfs      f1, 0x10(r1)
	  stfs      f0, 0xC(r1)
	  bl        -0xCE1D4
	  mr        r3, r31
	  addi      r4, r1, 0x14
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x68(r12)
	  mtctr     r12
	  bctrl

	.loc_0x340:
	  li        r3, 0x1
	  psq_l     f31,0x88(r1),0,0
	  lfd       f31, 0x80(r1)
	  psq_l     f30,0x78(r1),0,0
	  lfd       f30, 0x70(r1)
	  lwz       r31, 0x6C(r1)
	  lwz       r30, 0x68(r1)
	  lwz       r29, 0x64(r1)
	  lwz       r0, 0x94(r1)
	  lwz       r28, 0x60(r1)
	  mtlr      r0
	  addi      r1, r1, 0x90
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802093CC
 * Size:	0002AC
 */
void Game::ItemUjamushi::Item::doAI(void)
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
	  stw       r29, 0x34(r1)
	  stw       r28, 0x30(r1)
	  mr        r28, r3
	  lwz       r3, 0x1D8(r3)
	  mr        r4, r28
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r28
	  bl        -0x3CE04
	  lfs       f0, 0x1E8(r28)
	  lfs       f3, -0x45C0(r2)
	  fcmpo     cr0, f0, f3
	  bge-      .loc_0xE4
	  lwz       r3, -0x6514(r13)
	  lfs       f2, 0x1F0(r28)
	  lfs       f1, 0x54(r3)
	  lfs       f0, -0x45CC(r2)
	  fsubs     f1, f2, f1
	  stfs      f1, 0x1F0(r28)
	  lfs       f1, 0x1F0(r28)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0xD0
	  lwz       r0, 0x1E4(r28)
	  stw       r0, 0x1E0(r28)
	  bl        -0x13FEB4
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0xC(r1)
	  lfd       f1, -0x4540(r2)
	  stw       r0, 0x8(r1)
	  lfs       f3, -0x454C(r2)
	  lfd       f0, 0x8(r1)
	  lfs       f2, -0x4590(r2)
	  fsubs     f4, f0, f1
	  lfs       f1, -0x4550(r2)
	  lfs       f0, -0x45C0(r2)
	  fdivs     f3, f4, f3
	  fmadds    f1, f2, f3, f1
	  stfs      f1, 0x1F0(r28)
	  stfs      f1, 0x1F4(r28)
	  stfs      f0, 0x1E8(r28)
	  b         .loc_0x1A4

	.loc_0xD0:
	  lfs       f0, 0x1F4(r28)
	  fdivs     f0, f1, f0
	  fsubs     f0, f3, f0
	  stfs      f0, 0x1E8(r28)
	  b         .loc_0x1A4

	.loc_0xE4:
	  lwz       r3, -0x6514(r13)
	  lfs       f2, 0x1F0(r28)
	  lfs       f1, 0x54(r3)
	  lfs       f0, -0x45CC(r2)
	  fsubs     f1, f2, f1
	  stfs      f1, 0x1F0(r28)
	  lfs       f1, 0x1F0(r28)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x1A4
	  bl        -0x13FF38
	  lis       r4, 0x4330
	  xoris     r0, r3, 0x8000
	  stw       r0, 0xC(r1)
	  lwz       r0, 0x1EC(r28)
	  stw       r4, 0x8(r1)
	  lfd       f2, -0x4540(r2)
	  xoris     r0, r0, 0x8000
	  lfd       f1, 0x8(r1)
	  lfs       f0, -0x454C(r2)
	  fsubs     f1, f1, f2
	  stw       r0, 0x14(r1)
	  stw       r4, 0x10(r1)
	  fdivs     f1, f1, f0
	  lfd       f0, 0x10(r1)
	  fsubs     f0, f0, f2
	  fmuls     f0, f0, f1
	  fctiwz    f0, f0
	  stfd      f0, 0x18(r1)
	  lwz       r0, 0x1C(r1)
	  stw       r0, 0x1E4(r28)
	  bl        -0x13FF8C
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x24(r1)
	  lfd       f1, -0x4540(r2)
	  stw       r0, 0x20(r1)
	  lfs       f3, -0x454C(r2)
	  lfd       f0, 0x20(r1)
	  lfs       f2, -0x4590(r2)
	  fsubs     f4, f0, f1
	  lfs       f1, -0x4550(r2)
	  lfs       f0, -0x45CC(r2)
	  fdivs     f3, f4, f3
	  fmadds    f1, f2, f3, f1
	  stfs      f1, 0x1F0(r28)
	  stfs      f1, 0x1F4(r28)
	  stfs      f0, 0x1E8(r28)

	.loc_0x1A4:
	  lwz       r31, 0x200(r28)
	  lfs       f31, 0x1E8(r28)
	  lwz       r3, 0xA4(r31)
	  lwzu      r12, 0x18(r3)
	  lwz       r29, 0x1E4(r28)
	  lwz       r12, 0xC(r12)
	  lwz       r30, 0x1E0(r28)
	  mtctr     r12
	  bctrl
	  rlwinm    r0,r30,1,31,31
	  xori      r0, r0, 0x1
	  rlwinm    r0,r0,0,24,31
	  cmpw      r0, r3
	  ble-      .loc_0x1F8
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  addi      r3, r3, 0x1DC8
	  li        r4, 0x385
	  addi      r5, r5, 0x1DDC
	  crclr     6, 0x6
	  bl        -0x1DEF80

	.loc_0x1F8:
	  lwz       r3, 0xA4(r31)
	  lwzu      r12, 0x18(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  rlwinm    r0,r29,1,31,31
	  xori      r0, r0, 0x1
	  rlwinm    r0,r0,0,24,31
	  cmpw      r0, r3
	  ble-      .loc_0x23C
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  addi      r3, r3, 0x1DC8
	  li        r4, 0x386
	  addi      r5, r5, 0x1DDC
	  crclr     6, 0x6
	  bl        -0x1DEFC4

	.loc_0x23C:
	  stw       r30, 0x98(r31)
	  stw       r29, 0x9C(r31)
	  stfs      f31, 0xA0(r31)
	  lwz       r3, 0x200(r28)
	  bl        0x54C4
	  lwz       r3, 0x200(r28)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  cmpwi     r3, 0
	  bne-      .loc_0x284
	  mr        r3, r28
	  li        r4, 0
	  lwz       r12, 0x0(r28)
	  lwz       r12, 0xAC(r12)
	  mtctr     r12
	  bctrl

	.loc_0x284:
	  psq_l     f31,0x48(r1),0,0
	  lwz       r0, 0x54(r1)
	  lfd       f31, 0x40(r1)
	  lwz       r31, 0x3C(r1)
	  lwz       r30, 0x38(r1)
	  lwz       r29, 0x34(r1)
	  lwz       r28, 0x30(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80209678
 * Size:	000008
 */
void getNumObjects__Q24Game36TFlockMgr<Game::ItemUjamushi::Uja> Fv(void)
{
	/*
	.loc_0x0:
	  lwz       r3, 0x5C(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80209680
 * Size:	000078
 */
void Game::ItemUjamushi::Item::doSimpleDraw((Viewport*))
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
	  lwz       r5, -0x6AC0(r13)
	  lbz       r0, 0x8E(r5)
	  mr        r3, r5
	  cntlzw    r0, r0
	  rlwinm    r4,r0,27,5,31
	  bl        -0x3C560
	  lwz       r0, 0x2B20(r2)
	  mr        r4, r31
	  addi      r5, r1, 0x8
	  li        r6, 0x1
	  stw       r0, 0x8(r1)
	  stw       r3, 0x8(r1)
	  lwz       r3, 0x200(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
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
 * Address:	802096F8
 * Size:	000310
 */
void Game::ItemUjamushi::Mgr::__ct(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x440(r1)
	  mflr      r0
	  stw       r0, 0x444(r1)
	  extsh.    r0, r4
	  lis       r4, 0x8048
	  stw       r31, 0x43C(r1)
	  addi      r31, r4, 0x1D40
	  stw       r30, 0x438(r1)
	  mr        r30, r3
	  stw       r29, 0x434(r1)
	  stw       r28, 0x430(r1)
	  beq-      .loc_0x38
	  addi      r0, r30, 0x658
	  stw       r0, 0x4(r30)

	.loc_0x38:
	  mr        r3, r30
	  li        r4, 0
	  bl        0x3DB0
	  lis       r4, 0x804C
	  addi      r3, r30, 0x9C
	  subi      r5, r4, 0xFE0
	  li        r4, 0x1
	  stw       r5, 0x0(r30)
	  addi      r0, r5, 0x74
	  stw       r0, 0x30(r30)
	  bl        -0x3D30
	  addi      r3, r30, 0x310
	  bl        -0x382C
	  addi      r0, r30, 0x654
	  lis       r5, 0x7530
	  stw       r0, 0x5A8(r30)
	  li        r3, 0
	  addi      r0, r31, 0xB8
	  addi      r4, r30, 0x5A8
	  stw       r3, 0x5AC(r30)
	  addi      r3, r4, 0xC
	  addi      r5, r5, 0x3031
	  addi      r6, r31, 0xC4
	  stw       r0, 0x5B0(r30)
	  bl        0x209EC8
	  lis       r3, 0x804B
	  lis       r5, 0x7530
	  subi      r0, r3, 0x5344
	  addi      r4, r30, 0x5A8
	  stw       r0, 0x5B4(r30)
	  addi      r3, r4, 0x34
	  lfs       f0, -0x4560(r2)
	  addi      r5, r5, 0x3032
	  lfs       f1, -0x4584(r2)
	  addi      r6, r31, 0xD4
	  stfs      f0, 0x5CC(r30)
	  lfs       f0, -0x45C0(r2)
	  stfs      f1, 0x5D4(r30)
	  stfs      f0, 0x5D8(r30)
	  bl        0x209E8C
	  lis       r3, 0x804B
	  lis       r5, 0x7530
	  subi      r0, r3, 0x5344
	  addi      r4, r30, 0x5A8
	  stw       r0, 0x5DC(r30)
	  addi      r3, r4, 0x5C
	  lfs       f0, -0x45C0(r2)
	  addi      r5, r5, 0x3033
	  lfs       f1, -0x45CC(r2)
	  subi      r6, r2, 0x455C
	  stfs      f0, 0x5F4(r30)
	  lfs       f0, -0x457C(r2)
	  stfs      f1, 0x5FC(r30)
	  stfs      f0, 0x600(r30)
	  bl        0x209E50
	  lis       r3, 0x804B
	  lis       r5, 0x7530
	  subi      r0, r3, 0x5344
	  addi      r4, r30, 0x5A8
	  stw       r0, 0x604(r30)
	  addi      r3, r4, 0x84
	  lfs       f1, -0x45CC(r2)
	  addi      r5, r5, 0x3034
	  lfs       f0, -0x4554(r2)
	  addi      r6, r31, 0xE0
	  stfs      f1, 0x61C(r30)
	  stfs      f1, 0x624(r30)
	  stfs      f0, 0x628(r30)
	  bl        0x209E18
	  lis       r3, 0x804B
	  lfs       f2, -0x4550(r2)
	  subi      r0, r3, 0x5344
	  lfs       f1, -0x45CC(r2)
	  stw       r0, 0x62C(r30)
	  addi      r5, r31, 0x108
	  lfs       f0, -0x45C8(r2)
	  addi      r0, r31, 0x114
	  stfs      f2, 0x644(r30)
	  mr        r3, r30
	  li        r4, 0x2
	  stfs      f1, 0x64C(r30)
	  stfs      f0, 0x650(r30)
	  stw       r5, 0x8(r30)
	  stw       r0, 0x28(r30)
	  bl        -0x3CAB4
	  mr        r3, r30
	  subi      r4, r2, 0x44B8
	  bl        -0x3C9B8
	  mr        r3, r30
	  addi      r4, r31, 0x130
	  li        r5, 0
	  lis       r6, 0x2
	  bl        -0x3C950
	  mr        r3, r30
	  addi      r4, r31, 0x144
	  li        r5, 0x1
	  lis       r6, 0x2002
	  bl        -0x3C964
	  li        r0, 0
	  lfs       f0, -0x45CC(r2)
	  stw       r0, 0x308(r30)
	  mr        r3, r30
	  li        r4, 0
	  stw       r0, 0x304(r30)
	  stfs      f0, 0x30C(r30)
	  bl        -0x3C784
	  lis       r4, 0x4
	  mr        r29, r3
	  bl        -0x186008
	  lis       r4, 0x8048
	  mr        r3, r29
	  subi      r5, r4, 0x7794
	  li        r4, 0
	  bl        -0x185E44
	  mr        r3, r29
	  bl        -0x185ECC
	  mr        r3, r30
	  li        r4, 0x1
	  bl        -0x3C7B8
	  lis       r4, 0x4
	  mr        r29, r3
	  bl        -0x18603C
	  lis       r4, 0x8048
	  mr        r3, r29
	  subi      r5, r4, 0x7794
	  li        r4, 0
	  bl        -0x185E78
	  mr        r3, r29
	  bl        -0x185F00
	  lfs       f0, -0x44B0(r2)
	  li        r0, 0x1
	  lfs       f2, -0x45C0(r2)
	  mr        r3, r30
	  stfs      f0, 0x88(r30)
	  addi      r4, r31, 0x158
	  lfs       f1, -0x45CC(r2)
	  stb       r0, 0x8C(r30)
	  lfs       f0, -0x4550(r2)
	  stb       r0, 0x8D(r30)
	  stb       r0, 0x8E(r30)
	  stfs      f2, 0x90(r30)
	  stfs      f1, 0x94(r30)
	  stfs      f0, 0x98(r30)
	  bl        -0x3C7A0
	  lwz       r12, 0x0(r3)
	  mr        r29, r3
	  addi      r4, r31, 0x164
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  mr.       r28, r3
	  bne-      .loc_0x2AC
	  addi      r3, r31, 0x88
	  addi      r5, r31, 0x9C
	  li        r4, 0x4F7
	  crclr     6, 0x6
	  bl        -0x1DF360

	.loc_0x2AC:
	  mr        r4, r28
	  addi      r3, r1, 0x8
	  li        r5, -0x1
	  bl        0x20BF48
	  li        r0, 0x1
	  cmpwi     r0, 0x1
	  stw       r0, 0x14(r1)
	  bne-      .loc_0x2D4
	  li        r0, 0
	  stw       r0, 0x41C(r1)

	.loc_0x2D4:
	  addi      r3, r30, 0x310
	  addi      r4, r1, 0x8
	  bl        -0x38A4
	  mr        r3, r30
	  mr        r4, r29
	  bl        -0x3C790
	  lwz       r0, 0x444(r1)
	  mr        r3, r30
	  lwz       r31, 0x43C(r1)
	  lwz       r30, 0x438(r1)
	  lwz       r29, 0x434(r1)
	  lwz       r28, 0x430(r1)
	  mtlr      r0
	  addi      r1, r1, 0x440
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80209A08
 * Size:	000084
 */
void Game::ItemUjamushi::BoidParameter::__dt(void)
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
	  beq-      .loc_0x68
	  lis       r3, 0x804C
	  addic.    r0, r30, 0x18
	  subi      r0, r3, 0x568
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x4C
	  lis       r4, 0x804C
	  addi      r3, r30, 0x18
	  subi      r0, r4, 0x578
	  li        r4, 0
	  stw       r0, 0x18(r30)
	  bl        0x207B38

	.loc_0x4C:
	  mr        r3, r30
	  li        r4, 0
	  bl        0x207B2C
	  extsh.    r0, r31
	  ble-      .loc_0x68
	  mr        r3, r30
	  bl        -0x1E59B8

	.loc_0x68:
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
 * Address:	80209A8C
 * Size:	00011C
 */
void __dt__Q24Game39NodeItemMgr<Game::ItemUjamushi::Item> Fv(void)
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
	  lis       r3, 0x804C
	  addic.    r0, r30, 0x4C
	  subi      r3, r3, 0xDD0
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x74
	  stw       r0, 0x30(r30)
	  beq-      .loc_0xBC
	  lis       r4, 0x804C
	  addic.    r3, r30, 0x6C
	  subi      r4, r4, 0xE50
	  stw       r4, 0x4C(r30)
	  addi      r0, r4, 0x2C
	  stw       r0, 0x68(r30)
	  beq-      .loc_0x6C
	  lis       r4, 0x804C
	  subi      r0, r4, 0xE60
	  stw       r0, 0x6C(r30)
	  li        r4, 0
	  bl        0x207A94

	.loc_0x6C:
	  addic.    r0, r30, 0x4C
	  beq-      .loc_0xBC
	  lis       r3, 0x804C
	  addic.    r0, r30, 0x4C
	  subi      r3, r3, 0xEDC
	  stw       r3, 0x4C(r30)
	  addi      r0, r3, 0x2C
	  stw       r0, 0x68(r30)
	  beq-      .loc_0xBC
	  lis       r3, 0x804C
	  addic.    r0, r30, 0x4C
	  subi      r0, r3, 0xF08
	  stw       r0, 0x4C(r30)
	  beq-      .loc_0xBC
	  lis       r4, 0x804B
	  addi      r3, r30, 0x4C
	  subi      r0, r4, 0x5324
	  li        r4, 0
	  stw       r0, 0x4C(r30)
	  bl        0x207A44

	.loc_0xBC:
	  addic.    r0, r30, 0x30
	  beq-      .loc_0xF0
	  lis       r3, 0x804C
	  addic.    r0, r30, 0x30
	  subi      r0, r3, 0xF08
	  stw       r0, 0x30(r30)
	  beq-      .loc_0xF0
	  lis       r4, 0x804B
	  addi      r3, r30, 0x30
	  subi      r0, r4, 0x5324
	  li        r4, 0
	  stw       r0, 0x30(r30)
	  bl        0x207A10

	.loc_0xF0:
	  extsh.    r0, r31
	  ble-      .loc_0x100
	  mr        r3, r30
	  bl        -0x1E5AD4

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
 * Address:	80209BA8
 * Size:	000200
 */
void Game::ItemUjamushi::Mgr::doSimpleDraw((Viewport*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  cmplwi    r3, 0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r4
	  beq-      .loc_0x20
	  addi      r3, r3, 0x30

	.loc_0x20:
	  li        r0, 0
	  lis       r4, 0x804C
	  subi      r4, r4, 0xF20
	  stw       r0, 0x14(r1)
	  cmplwi    r0, 0
	  stw       r4, 0x8(r1)
	  stw       r0, 0xC(r1)
	  stw       r3, 0x10(r1)
	  bne-      .loc_0x5C
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1CC

	.loc_0x5C:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0xC8

	.loc_0x74:
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
	  bne-      .loc_0x1CC
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0xC8:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x74
	  b         .loc_0x1CC

	.loc_0xE8:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  mr        r4, r31
	  lwz       r12, 0x224(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x13C
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1CC

	.loc_0x13C:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1B0

	.loc_0x15C:
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
	  bne-      .loc_0x1CC
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0x1B0:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x15C

	.loc_0x1CC:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0xC(r1)
	  cmplw     r4, r3
	  bne+      .loc_0xE8
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80209DA8
 * Size:	00004C
 */
void Iterator<Game::ItemUjamushi::Item>::isDone()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r3, 0x8(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x4(r31)
	  sub       r0, r3, r0
	  cntlzw    r0, r0
	  rlwinm    r3,r0,27,5,31
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80209DF4
 * Size:	000004
 */
void Game::ItemUjamushi::Mgr::onLoadResources(void) { }

/*
 * --INFO--
 * Address:	........
 * Size:	000158
 */
void Game::ItemUjamushi::Mgr::birth(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80209DF8
 * Size:	00000C
 */
void Game::ItemUjamushi::Mgr::getCaveName((int))
{
	/*
	.loc_0x0:
	  lis       r3, 0x8048
	  addi      r3, r3, 0x1EB0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80209E04
 * Size:	000054
 */
void Game::ItemUjamushi::Mgr::getCaveID((char*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r3, 0x8048
	  stw       r0, 0x14(r1)
	  addi      r3, r3, 0x1EB0
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  bl        -0x13F510
	  lis       r4, 0x8048
	  mr        r5, r3
	  addi      r3, r4, 0x1EB0
	  mr        r4, r31
	  bl        -0x13F7B4
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
 * Address:	80209E58
 * Size:	000094
 */
void Game::ItemUjamushi::WaitState::init((Game::ItemUjamushi::Item*,
                                          Game::StateArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  li        r31, 0x3
	  stw       r30, 0x18(r1)
	  li        r30, 0
	  stw       r29, 0x14(r1)
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  lwz       r29, 0x200(r4)
	  b         .loc_0x50

	.loc_0x30:
	  mr        r3, r29
	  mr        r4, r30
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stb       r31, 0xAC(r3)
	  addi      r30, r30, 0x1

	.loc_0x50:
	  mr        r3, r29
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  cmpw      r30, r3
	  blt+      .loc_0x30
	  lfs       f0, -0x45C8(r2)
	  stfs      f0, 0x10(r28)
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
 * Address:	80209EEC
 * Size:	000058
 */
void Game::ItemUjamushi::WaitState::exec((Game::ItemUjamushi::Item*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x45CC(r2)
	  stw       r0, 0x14(r1)
	  lwz       r5, -0x6514(r13)
	  lfs       f2, 0x10(r3)
	  lfs       f1, 0x54(r5)
	  fsubs     f1, f2, f1
	  stfs      f1, 0x10(r3)
	  lfs       f1, 0x10(r3)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x48
	  lwz       r12, 0x0(r3)
	  li        r5, 0x1
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x48:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80209F44
 * Size:	000030
 */
void transit__Q24Game36FSMState<Game::ItemUjamushi::Item>
FPQ34Game12ItemUjamushi4ItemiPQ24Game8StateArg(void)
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
 * Address:	80209F74
 * Size:	000004
 */
void Game::ItemUjamushi::WaitState::cleanup((Game::ItemUjamushi::Item*)) { }

/*
 * --INFO--
 * Address:	80209F78
 * Size:	0000C4
 */
void Game::ItemUjamushi::ActiveState::init((Game::ItemUjamushi::Item*,
                                            Game::StateArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stfd      f31, 0x20(r1)
	  psq_st    f31,0x28(r1),0,0
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  stw       r28, 0x10(r1)
	  li        r30, 0
	  lwz       r29, 0x200(r4)
	  lfs       f31, -0x45CC(r2)
	  mr        r28, r3
	  mr        r31, r30
	  b         .loc_0x78

	.loc_0x3C:
	  mr        r3, r29
	  mr        r4, r30
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lbz       r0, 0xAC(r3)
	  cmplwi    r0, 0x6
	  beq-      .loc_0x68
	  cmplwi    r0, 0x3
	  bne-      .loc_0x74

	.loc_0x68:
	  stb       r31, 0xAC(r3)
	  stfs      f31, 0xB4(r3)
	  stfs      f31, 0xB8(r3)

	.loc_0x74:
	  addi      r30, r30, 0x1

	.loc_0x78:
	  mr        r3, r29
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  cmpw      r30, r3
	  blt+      .loc_0x3C
	  lfs       f0, -0x4528(r2)
	  stfs      f0, 0x10(r28)
	  psq_l     f31,0x28(r1),0,0
	  lwz       r0, 0x34(r1)
	  lfd       f31, 0x20(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  lwz       r28, 0x10(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8020A03C
 * Size:	000004
 */
void Game::ItemUjamushi::ActiveState::exec((Game::ItemUjamushi::Item*)) { }

/*
 * --INFO--
 * Address:	8020A040
 * Size:	000004
 */
void Game::ItemUjamushi::ActiveState::cleanup((Game::ItemUjamushi::Item*)) { }

/*
 * --INFO--
 * Address:	8020A044
 * Size:	000094
 */
void Game::ItemUjamushi::DigState::init((Game::ItemUjamushi::Item*,
                                         Game::StateArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  li        r31, 0x4
	  stw       r30, 0x18(r1)
	  li        r30, 0
	  stw       r29, 0x14(r1)
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  lwz       r29, 0x200(r4)
	  b         .loc_0x50

	.loc_0x30:
	  mr        r3, r29
	  mr        r4, r30
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stb       r31, 0xAC(r3)
	  addi      r30, r30, 0x1

	.loc_0x50:
	  mr        r3, r29
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  cmpw      r30, r3
	  blt+      .loc_0x30
	  lfs       f0, -0x45C8(r2)
	  stfs      f0, 0x10(r28)
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
 * Address:	8020A0D8
 * Size:	000058
 */
void Game::ItemUjamushi::DigState::exec((Game::ItemUjamushi::Item*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x45CC(r2)
	  stw       r0, 0x14(r1)
	  lwz       r5, -0x6514(r13)
	  lfs       f2, 0x10(r3)
	  lfs       f1, 0x54(r5)
	  fsubs     f1, f2, f1
	  stfs      f1, 0x10(r3)
	  lfs       f1, 0x10(r3)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x48
	  lwz       r12, 0x0(r3)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x48:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8020A130
 * Size:	000004
 */
void Game::ItemUjamushi::DigState::cleanup((Game::ItemUjamushi::Item*)) { }

/*
 * --INFO--
 * Address:	8020A134
 * Size:	00004C
 */
void Game::ItemUjamushi::Mgr::generatorNewItemParm(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r3, 0x8
	  stw       r0, 0x14(r1)
	  bl        -0x1E62A0
	  cmplwi    r3, 0
	  beq-      .loc_0x3C
	  lis       r5, 0x804B
	  lis       r4, 0x804C
	  addi      r5, r5, 0x2624
	  li        r0, 0x64
	  stw       r5, 0x0(r3)
	  subi      r4, r4, 0x1088
	  stw       r4, 0x0(r3)
	  stw       r0, 0x4(r3)

	.loc_0x3C:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8020A180
 * Size:	000088
 */
void Game::ItemUjamushi::Mgr::generatorWrite((Stream&, Game::GenItemParm*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r3, 0x8048
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  addi      r31, r3, 0x1D40
	  stw       r30, 0x18(r1)
	  mr.       r30, r5
	  stw       r29, 0x14(r1)
	  mr        r29, r4
	  bne-      .loc_0x40
	  addi      r3, r31, 0x88
	  addi      r5, r31, 0x9C
	  li        r4, 0x5EA
	  crclr     6, 0x6
	  bl        -0x1DFB7C

	.loc_0x40:
	  lwz       r4, 0x414(r29)
	  mr        r3, r29
	  bl        0x20A26C
	  lwz       r0, 0x4(r30)
	  mr        r3, r29
	  extsh     r4, r0
	  bl        0x20B558
	  mr        r3, r29
	  addi      r4, r31, 0x17C
	  crclr     6, 0x6
	  bl        0x209FF4
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
 * Address:	8020A208
 * Size:	000064
 */
void Game::ItemUjamushi::Mgr::generatorRead((Stream&, Game::GenItemParm*,
                                             unsigned long))
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
	  addi      r3, r3, 0x1DC8
	  li        r4, 0x5F4
	  addi      r5, r5, 0x1DDC
	  crclr     6, 0x6
	  bl        -0x1DFC00

	.loc_0x3C:
	  mr        r3, r30
	  bl        0x20A51C
	  extsh     r0, r3
	  stw       r0, 0x4(r31)
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
 * Address:	8020A26C
 * Size:	0001CC
 */
void generatorBirth__Q34Game12ItemUjamushi3MgrFR10Vector3<float>
    R10Vector3<float> PQ24Game11GenItemParm(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  mr.       r30, r6
	  stw       r29, 0x14(r1)
	  mr        r29, r4
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  bne-      .loc_0x48
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  addi      r3, r3, 0x1DC8
	  li        r4, 0x5FB
	  addi      r5, r5, 0x1DDC
	  crclr     6, 0x6
	  bl        -0x1DFC70

	.loc_0x48:
	  li        r3, 0x204
	  bl        -0x1E6414
	  mr.       r31, r3
	  beq-      .loc_0x160
	  li        r4, 0x411
	  bl        -0x3E2E0
	  lis       r3, 0x804C
	  li        r0, 0
	  subi      r4, r3, 0xAB0
	  li        r3, 0x1C
	  stw       r4, 0x0(r31)
	  addi      r4, r4, 0x1B0
	  stw       r4, 0x178(r31)
	  stw       r0, 0x1D8(r31)
	  stw       r0, 0x1DC(r31)
	  bl        -0x1E644C
	  cmplwi    r3, 0
	  beq-      .loc_0xBC
	  lis       r4, 0x804C
	  lis       r5, 0x804C
	  subi      r0, r4, 0xAC8
	  lis       r4, 0x804C
	  stw       r0, 0x0(r3)
	  li        r6, -0x1
	  subi      r5, r5, 0xAE0
	  subi      r0, r4, 0x804
	  stw       r6, 0x18(r3)
	  stw       r5, 0x0(r3)
	  stw       r0, 0x0(r3)

	.loc_0xBC:
	  stw       r3, 0x1D8(r31)
	  mr        r4, r31
	  lwz       r3, 0x1D8(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lis       r3, 0x804C
	  lis       r4, 0x804C
	  subi      r5, r3, 0xD18
	  lis       r3, 0x804C
	  stw       r5, 0x0(r31)
	  addi      r5, r5, 0x1B0
	  subi      r4, r4, 0x40DC
	  subi      r0, r3, 0xAF0
	  stw       r5, 0x178(r31)
	  li        r3, 0x8
	  stw       r4, 0x1F8(r31)
	  stw       r0, 0x1F8(r31)
	  bl        -0x1E64D0
	  mr.       r0, r3
	  beq-      .loc_0x11C
	  bl        -0xD6324
	  mr        r0, r3

	.loc_0x11C:
	  stw       r0, 0x114(r31)
	  addi      r0, r31, 0x138
	  lfs       f0, -0x44C4(r2)
	  addi      r4, r31, 0x1F8
	  addi      r6, r31, 0x1C4
	  li        r5, 0
	  stfs      f0, 0x1D0(r31)
	  li        r7, 0
	  stw       r0, 0x1FC(r31)
	  lwz       r3, 0x114(r31)
	  bl        -0xD6300
	  mr        r3, r31
	  li        r4, 0
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xB4(r12)
	  mtctr     r12
	  bctrl

	.loc_0x160:
	  mr        r3, r28
	  mr        r4, r31
	  bl        0x3090
	  lwz       r5, 0x4(r30)
	  lis       r3, 0x804B
	  subi      r0, r3, 0x5D0C
	  lis       r3, 0x804C
	  stw       r0, 0x8(r1)
	  subi      r0, r3, 0x1094
	  mr        r3, r31
	  addi      r4, r1, 0x8
	  stw       r0, 0x8(r1)
	  stw       r5, 0xC(r1)
	  bl        -0xCF438
	  mr        r3, r31
	  mr        r4, r29
	  li        r5, 0
	  bl        -0xCF268
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
 * Address:	8020A438
 * Size:	00000C
 */
void Game::ItemUjamushi::InitArg::getName(void)
{
	/*
	.loc_0x0:
	  lis       r3, 0x8048
	  addi      r3, r3, 0x1ECC
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8020A444
 * Size:	000174
 */
void Game::ItemUjamushi::Mgr::__dt(void)
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
	  beq-      .loc_0x158
	  lis       r3, 0x804C
	  addic.    r0, r30, 0x310
	  subi      r3, r3, 0xFE0
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x74
	  stw       r0, 0x30(r30)
	  beq-      .loc_0x70
	  lis       r4, 0x804C
	  addic.    r3, r30, 0x328
	  subi      r0, r4, 0x568
	  stw       r0, 0x310(r30)
	  beq-      .loc_0x64
	  lis       r4, 0x804C
	  subi      r0, r4, 0x578
	  stw       r0, 0x328(r30)
	  li        r4, 0
	  bl        0x2070E4

	.loc_0x64:
	  addi      r3, r30, 0x310
	  li        r4, 0
	  bl        0x2070D8

	.loc_0x70:
	  cmplwi    r30, 0
	  beq-      .loc_0x148
	  lis       r3, 0x804C
	  addic.    r0, r30, 0x4C
	  subi      r3, r3, 0xDD0
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x74
	  stw       r0, 0x30(r30)
	  beq-      .loc_0x114
	  lis       r4, 0x804C
	  addic.    r3, r30, 0x6C
	  subi      r4, r4, 0xE50
	  stw       r4, 0x4C(r30)
	  addi      r0, r4, 0x2C
	  stw       r0, 0x68(r30)
	  beq-      .loc_0xC4
	  lis       r4, 0x804C
	  subi      r0, r4, 0xE60
	  stw       r0, 0x6C(r30)
	  li        r4, 0
	  bl        0x207084

	.loc_0xC4:
	  addic.    r0, r30, 0x4C
	  beq-      .loc_0x114
	  lis       r3, 0x804C
	  addic.    r0, r30, 0x4C
	  subi      r3, r3, 0xEDC
	  stw       r3, 0x4C(r30)
	  addi      r0, r3, 0x2C
	  stw       r0, 0x68(r30)
	  beq-      .loc_0x114
	  lis       r3, 0x804C
	  addic.    r0, r30, 0x4C
	  subi      r0, r3, 0xF08
	  stw       r0, 0x4C(r30)
	  beq-      .loc_0x114
	  lis       r4, 0x804B
	  addi      r3, r30, 0x4C
	  subi      r0, r4, 0x5324
	  li        r4, 0
	  stw       r0, 0x4C(r30)
	  bl        0x207034

	.loc_0x114:
	  addic.    r0, r30, 0x30
	  beq-      .loc_0x148
	  lis       r3, 0x804C
	  addic.    r0, r30, 0x30
	  subi      r0, r3, 0xF08
	  stw       r0, 0x30(r30)
	  beq-      .loc_0x148
	  lis       r4, 0x804B
	  addi      r3, r30, 0x30
	  subi      r0, r4, 0x5324
	  li        r4, 0
	  stw       r0, 0x30(r30)
	  bl        0x207000

	.loc_0x148:
	  extsh.    r0, r31
	  ble-      .loc_0x158
	  mr        r3, r30
	  bl        -0x1E64E4

	.loc_0x158:
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
 * Address:	8020A5B8
 * Size:	00000C
 */
void Game::ItemUjamushi::Mgr::generatorGetID(void)
{
	/*
	.loc_0x0:
	  lis       r3, 0x756A
	  addi      r3, r3, 0x6D73
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8020A5C4
 * Size:	00000C
 */
void Game::ItemUjamushi::Mgr::generatorLocalVersion(void)
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
 * Address:	8020A5D0
 * Size:	000038
 */
void Iterator<Game::ItemUjamushi::Item>::operator*()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r4, r3
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x8(r3)
	  lwz       r4, 0x4(r4)
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
 * Address:	8020A608
 * Size:	0000E4
 */
void Iterator<Game::ItemUjamushi::Item>::next()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r0, 0xC(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x40
	  lwz       r3, 0x8(r31)
	  lwz       r4, 0x4(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x4(r31)
	  b         .loc_0xD0

	.loc_0x40:
	  lwz       r3, 0x8(r31)
	  lwz       r4, 0x4(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x4(r31)
	  b         .loc_0xB4

	.loc_0x60:
	  lwz       r3, 0x8(r31)
	  lwz       r4, 0x4(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0xC(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0xD0
	  lwz       r3, 0x8(r31)
	  lwz       r4, 0x4(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x4(r31)

	.loc_0xB4:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x60

	.loc_0xD0:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8020A6EC
 * Size:	0000DC
 */
void Iterator<Game::ItemUjamushi::Item>::first()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r0, 0xC(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x3C
	  lwz       r3, 0x8(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x4(r31)
	  b         .loc_0xC8

	.loc_0x3C:
	  lwz       r3, 0x8(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x4(r31)
	  b         .loc_0xAC

	.loc_0x58:
	  lwz       r3, 0x8(r31)
	  lwz       r4, 0x4(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0xC(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0xC8
	  lwz       r3, 0x8(r31)
	  lwz       r4, 0x4(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x4(r31)

	.loc_0xAC:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x58

	.loc_0xC8:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8020A7C8
 * Size:	000070
 */
void Container<Game::ItemUjamushi::Item>::~Container()
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
	  lis       r4, 0x804C
	  subi      r0, r4, 0xF08
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x44
	  lis       r5, 0x804B
	  li        r4, 0
	  subi      r0, r5, 0x5324
	  stw       r0, 0x0(r30)
	  bl        0x206D80

	.loc_0x44:
	  extsh.    r0, r31
	  ble-      .loc_0x54
	  mr        r3, r30
	  bl        -0x1E6764

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

/*
 * --INFO--
 * Address:	8020A838
 * Size:	000088
 */
void ObjectMgr<Game::ItemUjamushi::Item>::~ObjectMgr()
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
	  lis       r4, 0x804C
	  subi      r4, r4, 0xEDC
	  stw       r4, 0x0(r30)
	  addi      r0, r4, 0x2C
	  stw       r0, 0x1C(r30)
	  beq-      .loc_0x5C
	  lis       r4, 0x804C
	  subi      r0, r4, 0xF08
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x5C
	  lis       r5, 0x804B
	  li        r4, 0
	  subi      r0, r5, 0x5324
	  stw       r0, 0x0(r30)
	  bl        0x206CF8

	.loc_0x5C:
	  extsh.    r0, r31
	  ble-      .loc_0x6C
	  mr        r3, r30
	  bl        -0x1E67EC

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
 * Address:	8020A8C0
 * Size:	000060
 */
void TObjectNode<Game::ItemUjamushi::Item>::~TObjectNode()
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
	  lis       r5, 0x804C
	  li        r4, 0
	  subi      r0, r5, 0xE60
	  stw       r0, 0x0(r30)
	  bl        0x206C98
	  extsh.    r0, r31
	  ble-      .loc_0x44
	  mr        r3, r30
	  bl        -0x1E684C

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
 * Address:	8020A920
 * Size:	0000C8
 */
void NodeObjectMgr<Game::ItemUjamushi::Item>::~NodeObjectMgr()
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
	  lis       r3, 0x804C
	  addic.    r0, r30, 0x20
	  subi      r3, r3, 0xE50
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x2C
	  stw       r0, 0x1C(r30)
	  beq-      .loc_0x54
	  lis       r4, 0x804C
	  addi      r3, r30, 0x20
	  subi      r0, r4, 0xE60
	  li        r4, 0
	  stw       r0, 0x20(r30)
	  bl        0x206C18

	.loc_0x54:
	  cmplwi    r30, 0
	  beq-      .loc_0x9C
	  lis       r3, 0x804C
	  subi      r3, r3, 0xEDC
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x2C
	  stw       r0, 0x1C(r30)
	  beq-      .loc_0x9C
	  lis       r3, 0x804C
	  subi      r0, r3, 0xF08
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x9C
	  lis       r4, 0x804B
	  mr        r3, r30
	  subi      r0, r4, 0x5324
	  li        r4, 0
	  stw       r0, 0x0(r30)
	  bl        0x206BD0

	.loc_0x9C:
	  extsh.    r0, r31
	  ble-      .loc_0xAC
	  mr        r3, r30
	  bl        -0x1E6914

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
 * Address:	8020A9E8
 * Size:	000008
 */
void Game::ItemUjamushi::Item::getFlockMgr(void)
{
	/*
	.loc_0x0:
	  lwz       r3, 0x200(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8020A9F0
 * Size:	000004
 */
void Game::ItemUjamushi::Item::makeTrMatrix(void) { }

/*
 * --INFO--
 * Address:	8020A9F4
 * Size:	000008
 */
void Game::ItemUjamushi::Item::DummyShape::getMatrix((int))
{
	/*
	.loc_0x0:
	  lwz       r3, 0x4(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8020A9FC
 * Size:	000034
 */
void doAI__Q24Game89FSMItem<Game::ItemUjamushi::Item, Game::ItemUjamushi::FSM,
                            Game::ItemUjamushi::State>
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
 * Address:	8020AA30
 * Size:	000118
 */
void Game::ItemUjamushi::UjaMgr::__dt(void)
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
	  beq-      .loc_0xFC
	  lis       r3, 0x804C
	  subi      r3, r3, 0x7EC
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x30
	  stw       r0, 0x20(r30)
	  beq-      .loc_0xEC
	  lis       r3, 0x804C
	  addic.    r0, r30, 0x3C
	  subi      r3, r3, 0x674
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x30
	  stw       r0, 0x20(r30)
	  beq-      .loc_0xB8
	  lis       r3, 0x804C
	  addic.    r0, r30, 0x3C
	  subi      r3, r3, 0x700
	  stw       r3, 0x3C(r30)
	  addi      r0, r3, 0x2C
	  stw       r0, 0x58(r30)
	  beq-      .loc_0xB8
	  lis       r3, 0x804C
	  addic.    r0, r30, 0x3C
	  subi      r3, r3, 0x77C
	  stw       r3, 0x3C(r30)
	  addi      r0, r3, 0x2C
	  stw       r0, 0x58(r30)
	  beq-      .loc_0xB8
	  lis       r3, 0x804C
	  addic.    r0, r30, 0x3C
	  subi      r0, r3, 0x604
	  stw       r0, 0x3C(r30)
	  beq-      .loc_0xB8
	  lis       r4, 0x804B
	  addi      r3, r30, 0x3C
	  subi      r0, r4, 0x5324
	  li        r4, 0
	  stw       r0, 0x3C(r30)
	  bl        0x206AA4

	.loc_0xB8:
	  addic.    r0, r30, 0x20
	  beq-      .loc_0xEC
	  lis       r3, 0x804C
	  addic.    r0, r30, 0x20
	  subi      r0, r3, 0x604
	  stw       r0, 0x20(r30)
	  beq-      .loc_0xEC
	  lis       r4, 0x804B
	  addi      r3, r30, 0x20
	  subi      r0, r4, 0x5324
	  li        r4, 0
	  stw       r0, 0x20(r30)
	  bl        0x206A70

	.loc_0xEC:
	  extsh.    r0, r31
	  ble-      .loc_0xFC
	  mr        r3, r30
	  bl        -0x1E6A74

	.loc_0xFC:
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
 * Address:	8020AB48
 * Size:	0000AC
 */
void Game::BaseFlockMgr::isWeed((int))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  li        r31, 0
	  stw       r30, 0x18(r1)
	  mr.       r30, r4
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  blt-      .loc_0x44
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  cmpw      r30, r3
	  bge-      .loc_0x44
	  li        r31, 0x1

	.loc_0x44:
	  rlwinm.   r0,r31,0,24,31
	  bne-      .loc_0x68
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  addi      r3, r3, 0x1E3C
	  li        r4, 0x91
	  addi      r5, r5, 0x1DDC
	  crclr     6, 0x6
	  bl        -0x1E056C

	.loc_0x68:
	  mr        r3, r29
	  mr        r4, r30
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0xC(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
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
 * Address:	8020ABF4
 * Size:	000008
 */
u32 Game::TFlock::isWeed(void) { return 0x0; }

/*
 * --INFO--
 * Address:	8020ABFC
 * Size:	0000AC
 */
void Game::BaseFlockMgr::fear((int))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  li        r31, 0
	  stw       r30, 0x18(r1)
	  mr.       r30, r4
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  blt-      .loc_0x44
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  cmpw      r30, r3
	  bge-      .loc_0x44
	  li        r31, 0x1

	.loc_0x44:
	  rlwinm.   r0,r31,0,24,31
	  bne-      .loc_0x68
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  addi      r3, r3, 0x1E3C
	  li        r4, 0x98
	  addi      r5, r5, 0x1DDC
	  crclr     6, 0x6
	  bl        -0x1E0620

	.loc_0x68:
	  mr        r3, r29
	  mr        r4, r30
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0xC(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
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
 * Address:	8020ACA8
 * Size:	000008
 */
u32 Game::TFlock::fear(void) { return 0x0; }

/*
 * --INFO--
 * Address:	8020ACB0
 * Size:	000088
 */
void ObjectMgr<Game::ItemUjamushi::Uja>::~ObjectMgr()
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
	  lis       r4, 0x804C
	  subi      r4, r4, 0x77C
	  stw       r4, 0x0(r30)
	  addi      r0, r4, 0x2C
	  stw       r0, 0x1C(r30)
	  beq-      .loc_0x5C
	  lis       r4, 0x804C
	  subi      r0, r4, 0x604
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x5C
	  lis       r5, 0x804B
	  li        r4, 0
	  subi      r0, r5, 0x5324
	  stw       r0, 0x0(r30)
	  bl        0x206880

	.loc_0x5C:
	  extsh.    r0, r31
	  ble-      .loc_0x6C
	  mr        r3, r30
	  bl        -0x1E6C64

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
 * Address:	8020AD38
 * Size:	000004
 */
void Game::BaseFlockMgr::do_update(void) { }

/*
 * --INFO--
 * Address:	8020AD3C
 * Size:	000038
 */
void Iterator<Game::ItemUjamushi::Uja>::operator*()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r4, r3
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x8(r3)
	  lwz       r4, 0x4(r4)
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
 * Address:	8020AD74
 * Size:	000018
 */
void Game::ItemUjamushi::Uja::isVisible(void)
{
	/*
	.loc_0x0:
	  lbz       r4, 0xAC(r3)
	  subfic    r3, r4, 0x6
	  subi      r0, r4, 0x6
	  or        r0, r3, r0
	  rlwinm    r3,r0,1,31,31
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8020AD8C
 * Size:	000008
 */
void Game::TFlock::getRadius(void)
{
	/*
	.loc_0x0:
	  lfs       f1, -0x45CC(r2)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8020AD94
 * Size:	000004
 */
void Game::TFlock::constructor(void) { }

/*
 * --INFO--
 * Address:	8020AD98
 * Size:	000008
 */
u32 Game::TFlock::isVisible(void) { return 0x1; }

/*
 * --INFO--
 * Address:	8020ADA0
 * Size:	000008
 */
u32 Game::TFlock::damaged((float)) { return 0x1; }

/*
 * --INFO--
 * Address:	8020ADA8
 * Size:	00002C
 */
void getNext__Q24Game36TFlockMgr<Game::ItemUjamushi::Uja> FPv(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwzu      r12, 0x3C(r3)
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
 * Address:	8020ADD4
 * Size:	00002C
 */
void getStart__Q24Game36TFlockMgr<Game::ItemUjamushi::Uja> Fv(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwzu      r12, 0x3C(r3)
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
 * Address:	8020AE00
 * Size:	000024
 */
void killFlock__Q24Game36TFlockMgr<Game::ItemUjamushi::Uja>
FPQ24Game6TFlock(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  addi      r3, r3, 0x3C
	  stw       r0, 0x14(r1)
	  bl        0x494
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8020AE24
 * Size:	0001E8
 */
void initDependency__Q24Game39NodeItemMgr<Game::ItemUjamushi::Item> Fv(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r4, 0x804C
	  addi      r3, r3, 0x4C
	  stw       r0, 0x24(r1)
	  li        r0, 0
	  subi      r4, r4, 0xF20
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
 * Address:	8020B00C
 * Size:	000024
 */
void kill__Q24Game39NodeItemMgr<Game::ItemUjamushi::Item>
FPQ34Game12ItemUjamushi4Item(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  addi      r3, r3, 0x4C
	  stw       r0, 0x14(r1)
	  bl        0x1CC
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8020B030
 * Size:	00002C
 */
void doAnimation__Q24Game39NodeItemMgr<Game::ItemUjamushi::Item> Fv(void)
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
 * Address:	8020B05C
 * Size:	00002C
 */
void doEntry__Q24Game39NodeItemMgr<Game::ItemUjamushi::Item> Fv(void)
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
 * Address:	8020B088
 * Size:	00002C
 */
void doSetView__Q24Game39NodeItemMgr<Game::ItemUjamushi::Item> Fi(void)
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
 * Address:	8020B0B4
 * Size:	00002C
 */
void doViewCalc__Q24Game39NodeItemMgr<Game::ItemUjamushi::Item> Fv(void)
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
 * Address:	8020B0E0
 * Size:	00002C
 */
void doSimulation__Q24Game39NodeItemMgr<Game::ItemUjamushi::Item> Ff(void)
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
 * Address:	8020B10C
 * Size:	00002C
 */
void doDirectDraw__Q24Game39NodeItemMgr<Game::ItemUjamushi::Item>
FR8Graphics(void)
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
 * Address:	8020B138
 * Size:	000004
 */
void onDamage__Q24Game37ItemState<Game::ItemUjamushi::Item>
FPQ34Game12ItemUjamushi4Itemf(void)
{
}

/*
 * --INFO--
 * Address:	8020B13C
 * Size:	000004
 */
void onKeyEvent__Q24Game37ItemState<Game::ItemUjamushi::Item>
FPQ34Game12ItemUjamushi4ItemRCQ28SysShape8KeyEvent(void)
{
}

/*
 * --INFO--
 * Address:	8020B140
 * Size:	000004
 */
void onBounce__Q24Game37ItemState<Game::ItemUjamushi::Item>
FPQ34Game12ItemUjamushi4ItemPQ23Sys8Triangle(void)
{
}

/*
 * --INFO--
 * Address:	8020B144
 * Size:	000004
 */
void onPlatCollision__Q24Game37ItemState<Game::ItemUjamushi::Item>
FPQ34Game12ItemUjamushi4ItemRQ24Game9PlatEvent(void)
{
}

/*
 * --INFO--
 * Address:	8020B148
 * Size:	000004
 */
void onCollision__Q24Game37ItemState<Game::ItemUjamushi::Item>
FPQ34Game12ItemUjamushi4ItemRQ24Game9CollEvent(void)
{
}

/*
 * --INFO--
 * Address:	8020B14C
 * Size:	000004
 */
void init__Q24Game36FSMState<Game::ItemUjamushi::Item>
FPQ34Game12ItemUjamushi4ItemPQ24Game8StateArg(void)
{
}

/*
 * --INFO--
 * Address:	8020B150
 * Size:	000004
 */
void exec__Q24Game36FSMState<Game::ItemUjamushi::Item>
FPQ34Game12ItemUjamushi4Item(void)
{
}

/*
 * --INFO--
 * Address:	8020B154
 * Size:	000004
 */
void cleanup__Q24Game36FSMState<Game::ItemUjamushi::Item>
FPQ34Game12ItemUjamushi4Item(void)
{
}

/*
 * --INFO--
 * Address:	8020B158
 * Size:	000004
 */
void resume__Q24Game36FSMState<Game::ItemUjamushi::Item>
FPQ34Game12ItemUjamushi4Item(void)
{
}

/*
 * --INFO--
 * Address:	8020B15C
 * Size:	000004
 */
void restart__Q24Game36FSMState<Game::ItemUjamushi::Item>
FPQ34Game12ItemUjamushi4Item(void)
{
}

/*
 * --INFO--
 * Address:	8020B160
 * Size:	000004
 */
void init__Q24Game40StateMachine<Game::ItemUjamushi::Item>
FPQ34Game12ItemUjamushi4Item(void)
{
}

/*
 * --INFO--
 * Address:	8020B164
 * Size:	000064
 */
void create__Q24Game40StateMachine<Game::ItemUjamushi::Item> Fi(void)
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
	  bl        -0x1E71E0
	  stw       r3, 0x4(r31)
	  lwz       r0, 0xC(r31)
	  rlwinm    r3,r0,2,0,29
	  bl        -0x1E71F0
	  stw       r3, 0x10(r31)
	  lwz       r0, 0xC(r31)
	  rlwinm    r3,r0,2,0,29
	  bl        -0x1E7200
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
 * Address:	8020B1C8
 * Size:	000008
 */
void NodeObjectMgr<Game::ItemUjamushi::Item>::get(void*)
{
	/*
	.loc_0x0:
	  lwz       r3, 0x18(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8020B1D0
 * Size:	000008
 */
void NodeObjectMgr<Game::ItemUjamushi::Item>::getNext(void*)
{
	/*
	.loc_0x0:
	  lwz       r3, 0x4(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8020B1D8
 * Size:	000008
 */
void NodeObjectMgr<Game::ItemUjamushi::Item>::getStart()
{
	/*
	.loc_0x0:
	  lwz       r3, 0x30(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8020B1E0
 * Size:	000008
 */
u32 NodeObjectMgr<Game::ItemUjamushi::Item>::getEnd() { return 0x0; }

/*
 * --INFO--
 * Address:	8020B1E8
 * Size:	000044
 */
void NodeObjectMgr<Game::ItemUjamushi::Item>::delNode(Game::ItemUjamushi::Item*)
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
	  bl        0x2063C8
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
 * Address:	8020B22C
 * Size:	000018
 */
void NodeObjectMgr<Game::ItemUjamushi::Item>::resetMgr()
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
 * Address:	8020B244
 * Size:	000060
 */
void MonoObjectMgr<Game::ItemUjamushi::Uja>::birth()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        0x34C
	  cmpwi     r3, -0x1
	  beq-      .loc_0x48
	  lwz       r6, 0x28(r31)
	  li        r0, 0
	  lwz       r4, 0x2C(r31)
	  mulli     r5, r3, 0xC8
	  stbx      r0, r4, r3
	  add       r3, r6, r5
	  lwz       r4, 0x20(r31)
	  addi      r0, r4, 0x1
	  stw       r0, 0x20(r31)
	  b         .loc_0x4C

	.loc_0x48:
	  li        r3, 0

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
 * Address:	8020B2A4
 * Size:	000054
 */
void MonoObjectMgr<Game::ItemUjamushi::Uja>::kill(Game::ItemUjamushi::Uja*)
{
	/*
	.loc_0x0:
	  lwz       r0, 0x24(r3)
	  li        r6, 0
	  li        r5, 0
	  mtctr     r0
	  cmpwi     r0, 0
	  blelr-

	.loc_0x18:
	  lwz       r0, 0x28(r3)
	  add       r0, r0, r5
	  cmplw     r0, r4
	  bne-      .loc_0x44
	  lwz       r4, 0x2C(r3)
	  li        r0, 0x1
	  stbx      r0, r4, r6
	  lwz       r4, 0x20(r3)
	  subi      r0, r4, 0x1
	  stw       r0, 0x20(r3)
	  blr

	.loc_0x44:
	  addi      r5, r5, 0xC8
	  addi      r6, r6, 0x1
	  bdnz+     .loc_0x18
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8020B2F8
 * Size:	000040
 */
void MonoObjectMgr<Game::ItemUjamushi::Uja>::getNext(void*)
{
	/*
	.loc_0x0:
	  lwz       r5, 0x24(r3)
	  addi      r6, r4, 0x1
	  sub       r0, r5, r6
	  mtctr     r0
	  cmpw      r6, r5
	  bge-      .loc_0x38

	.loc_0x18:
	  lwz       r4, 0x2C(r3)
	  lbzx      r0, r4, r6
	  cmplwi    r0, 0
	  bne-      .loc_0x30
	  mr        r3, r6
	  blr

	.loc_0x30:
	  addi      r6, r6, 0x1
	  bdnz+     .loc_0x18

	.loc_0x38:
	  mr        r3, r5
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8020B338
 * Size:	000030
 */
void MonoObjectMgr<Game::ItemUjamushi::Uja>::getStart()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r4, -0x1
	  stw       r0, 0x14(r1)
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
 * Address:	8020B368
 * Size:	000008
 */
void MonoObjectMgr<Game::ItemUjamushi::Uja>::getEnd()
{
	/*
	.loc_0x0:
	  lwz       r3, 0x24(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8020B370
 * Size:	000008
 */
void MonoObjectMgr<Game::ItemUjamushi::Uja>::getTo()
{
	/*
	.loc_0x0:
	  lwz       r3, 0x24(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8020B378
 * Size:	000050
 */
void MonoObjectMgr<Game::ItemUjamushi::Uja>::doAnimation()
{
	/*
	.loc_0x0:
	  lwz       r4, 0x24(r3)
	  li        r5, 0
	  cmpwi     r4, 0
	  blelr-
	  cmpwi     r4, 0x8
	  subi      r3, r4, 0x8
	  ble-      .loc_0x38
	  addi      r0, r3, 0x7
	  rlwinm    r0,r0,29,3,31
	  mtctr     r0
	  cmpwi     r3, 0
	  ble-      .loc_0x38

	.loc_0x30:
	  addi      r5, r5, 0x8
	  bdnz+     .loc_0x30

	.loc_0x38:
	  sub       r0, r4, r5
	  mtctr     r0
	  cmpw      r5, r4
	  bgelr-

	.loc_0x48:
	  bdnz-     .loc_0x48
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8020B3C8
 * Size:	000050
 */
void MonoObjectMgr<Game::ItemUjamushi::Uja>::doEntry()
{
	/*
	.loc_0x0:
	  lwz       r4, 0x24(r3)
	  li        r5, 0
	  cmpwi     r4, 0
	  blelr-
	  cmpwi     r4, 0x8
	  subi      r3, r4, 0x8
	  ble-      .loc_0x38
	  addi      r0, r3, 0x7
	  rlwinm    r0,r0,29,3,31
	  mtctr     r0
	  cmpwi     r3, 0
	  ble-      .loc_0x38

	.loc_0x30:
	  addi      r5, r5, 0x8
	  bdnz+     .loc_0x30

	.loc_0x38:
	  sub       r0, r4, r5
	  mtctr     r0
	  cmpw      r5, r4
	  bgelr-

	.loc_0x48:
	  bdnz-     .loc_0x48
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8020B418
 * Size:	000050
 */
void MonoObjectMgr<Game::ItemUjamushi::Uja>::doSetView(int)
{
	/*
	.loc_0x0:
	  lwz       r4, 0x24(r3)
	  li        r5, 0
	  cmpwi     r4, 0
	  blelr-
	  cmpwi     r4, 0x8
	  subi      r3, r4, 0x8
	  ble-      .loc_0x38
	  addi      r0, r3, 0x7
	  rlwinm    r0,r0,29,3,31
	  mtctr     r0
	  cmpwi     r3, 0
	  ble-      .loc_0x38

	.loc_0x30:
	  addi      r5, r5, 0x8
	  bdnz+     .loc_0x30

	.loc_0x38:
	  sub       r0, r4, r5
	  mtctr     r0
	  cmpw      r5, r4
	  bgelr-

	.loc_0x48:
	  bdnz-     .loc_0x48
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8020B468
 * Size:	000050
 */
void MonoObjectMgr<Game::ItemUjamushi::Uja>::doViewCalc()
{
	/*
	.loc_0x0:
	  lwz       r4, 0x24(r3)
	  li        r5, 0
	  cmpwi     r4, 0
	  blelr-
	  cmpwi     r4, 0x8
	  subi      r3, r4, 0x8
	  ble-      .loc_0x38
	  addi      r0, r3, 0x7
	  rlwinm    r0,r0,29,3,31
	  mtctr     r0
	  cmpwi     r3, 0
	  ble-      .loc_0x38

	.loc_0x30:
	  addi      r5, r5, 0x8
	  bdnz+     .loc_0x30

	.loc_0x38:
	  sub       r0, r4, r5
	  mtctr     r0
	  cmpw      r5, r4
	  bgelr-

	.loc_0x48:
	  bdnz-     .loc_0x48
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8020B4B8
 * Size:	000050
 */
void MonoObjectMgr<Game::ItemUjamushi::Uja>::doSimulation(float)
{
	/*
	.loc_0x0:
	  lwz       r4, 0x24(r3)
	  li        r5, 0
	  cmpwi     r4, 0
	  blelr-
	  cmpwi     r4, 0x8
	  subi      r3, r4, 0x8
	  ble-      .loc_0x38
	  addi      r0, r3, 0x7
	  rlwinm    r0,r0,29,3,31
	  mtctr     r0
	  cmpwi     r3, 0
	  ble-      .loc_0x38

	.loc_0x30:
	  addi      r5, r5, 0x8
	  bdnz+     .loc_0x30

	.loc_0x38:
	  sub       r0, r4, r5
	  mtctr     r0
	  cmpw      r5, r4
	  bgelr-

	.loc_0x48:
	  bdnz-     .loc_0x48
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8020B508
 * Size:	000050
 */
void MonoObjectMgr<Game::ItemUjamushi::Uja>::doDirectDraw(Graphics&)
{
	/*
	.loc_0x0:
	  lwz       r4, 0x24(r3)
	  li        r5, 0
	  cmpwi     r4, 0
	  blelr-
	  cmpwi     r4, 0x8
	  subi      r3, r4, 0x8
	  ble-      .loc_0x38
	  addi      r0, r3, 0x7
	  rlwinm    r0,r0,29,3,31
	  mtctr     r0
	  cmpwi     r3, 0
	  ble-      .loc_0x38

	.loc_0x30:
	  addi      r5, r5, 0x8
	  bdnz+     .loc_0x30

	.loc_0x38:
	  sub       r0, r4, r5
	  mtctr     r0
	  cmpw      r5, r4
	  bgelr-

	.loc_0x48:
	  bdnz-     .loc_0x48
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8020B558
 * Size:	000018
 */
void MonoObjectMgr<Game::ItemUjamushi::Uja>::resetMgr()
{
	/*
	.loc_0x0:
	  li        r0, 0
	  stw       r0, 0x28(r3)
	  stw       r0, 0x24(r3)
	  stw       r0, 0x20(r3)
	  stw       r0, 0x2C(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8020B570
 * Size:	000030
 */
void MonoObjectMgr<Game::ItemUjamushi::Uja>::clearMgr()
{
	/*
	.loc_0x0:
	  li        r0, 0
	  li        r6, 0
	  stw       r0, 0x20(r3)
	  li        r5, 0x1
	  b         .loc_0x20

	.loc_0x14:
	  lwz       r4, 0x2C(r3)
	  stbx      r5, r4, r6
	  addi      r6, r6, 0x1

	.loc_0x20:
	  lwz       r0, 0x24(r3)
	  cmpw      r6, r0
	  blt+      .loc_0x14
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8020B5A0
 * Size:	000004
 */
void MonoObjectMgr<Game::ItemUjamushi::Uja>::onAlloc() { }

/*
 * --INFO--
 * Address:	8020B5A4
 * Size:	00003C
 */
void MonoObjectMgr<Game::ItemUjamushi::Uja>::getEmptyIndex()
{
	/*
	.loc_0x0:
	  lwz       r0, 0x24(r3)
	  li        r5, 0
	  mtctr     r0
	  cmpwi     r0, 0
	  ble-      .loc_0x34

	.loc_0x14:
	  lwz       r4, 0x2C(r3)
	  lbzx      r0, r4, r5
	  cmplwi    r0, 0x1
	  bne-      .loc_0x2C
	  mr        r3, r5
	  blr

	.loc_0x2C:
	  addi      r5, r5, 0x1
	  bdnz+     .loc_0x14

	.loc_0x34:
	  li        r3, -0x1
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8020B5E0
 * Size:	000010
 */
void MonoObjectMgr<Game::ItemUjamushi::Uja>::get(void*)
{
	/*
	.loc_0x0:
	  mulli     r0, r4, 0xC8
	  lwz       r3, 0x28(r3)
	  add       r3, r3, r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8020B5F0
 * Size:	0001E4
 */
void ObjectMgr<Game::ItemUjamushi::Item>::doAnimation()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r4, 0x804C
	  stw       r0, 0x24(r1)
	  li        r0, 0
	  subi      r4, r4, 0xF20
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
 * Address:	8020B7D4
 * Size:	0001E4
 */
void ObjectMgr<Game::ItemUjamushi::Item>::doEntry()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r4, 0x804C
	  stw       r0, 0x24(r1)
	  li        r0, 0
	  subi      r4, r4, 0xF20
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
 * Address:	8020B9B8
 * Size:	0001F4
 */
void ObjectMgr<Game::ItemUjamushi::Item>::doSetView(int)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r5, 0x804C
	  stw       r0, 0x24(r1)
	  li        r0, 0
	  subi      r5, r5, 0xF20
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
 * Address:	8020BBAC
 * Size:	0001E4
 */
void ObjectMgr<Game::ItemUjamushi::Item>::doViewCalc()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r4, 0x804C
	  stw       r0, 0x24(r1)
	  li        r0, 0
	  subi      r4, r4, 0xF20
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
 * Address:	8020BD90
 * Size:	0001F4
 */
void ObjectMgr<Game::ItemUjamushi::Item>::doSimulation(float)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r4, 0x804C
	  stw       r0, 0x24(r1)
	  li        r0, 0
	  subi      r4, r4, 0xF20
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
 * Address:	8020BF84
 * Size:	0001F4
 */
void ObjectMgr<Game::ItemUjamushi::Item>::doDirectDraw(Graphics&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r5, 0x804C
	  stw       r0, 0x24(r1)
	  li        r0, 0
	  subi      r5, r5, 0xF20
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
 * Address:	8020C178
 * Size:	0001D4
 */
void ObjectMgr<Game::ItemUjamushi::Uja>::doAnimation()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r4, 0x804C
	  stw       r0, 0x24(r1)
	  li        r0, 0
	  subi      r4, r4, 0x5D8
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
	  b         .loc_0x1A4

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
	  bne-      .loc_0x1A4
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
	  b         .loc_0x1A4

	.loc_0xD4:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x114
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1A4

	.loc_0x114:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x188

	.loc_0x134:
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
	  bne-      .loc_0x1A4
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0x188:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x134

	.loc_0x1A4:
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
 * Address:	8020C34C
 * Size:	0001D4
 */
void ObjectMgr<Game::ItemUjamushi::Uja>::doEntry()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r4, 0x804C
	  stw       r0, 0x24(r1)
	  li        r0, 0
	  subi      r4, r4, 0x5D8
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
	  b         .loc_0x1A4

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
	  bne-      .loc_0x1A4
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
	  b         .loc_0x1A4

	.loc_0xD4:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x114
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1A4

	.loc_0x114:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x188

	.loc_0x134:
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
	  bne-      .loc_0x1A4
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0x188:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x134

	.loc_0x1A4:
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
 * Address:	8020C520
 * Size:	0001D4
 */
void ObjectMgr<Game::ItemUjamushi::Uja>::doSetView(int)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r4, 0x804C
	  stw       r0, 0x24(r1)
	  li        r0, 0
	  subi      r4, r4, 0x5D8
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
	  b         .loc_0x1A4

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
	  bne-      .loc_0x1A4
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
	  b         .loc_0x1A4

	.loc_0xD4:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x114
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1A4

	.loc_0x114:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x188

	.loc_0x134:
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
	  bne-      .loc_0x1A4
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0x188:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x134

	.loc_0x1A4:
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
 * Address:	8020C6F4
 * Size:	0001D4
 */
void ObjectMgr<Game::ItemUjamushi::Uja>::doViewCalc()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r4, 0x804C
	  stw       r0, 0x24(r1)
	  li        r0, 0
	  subi      r4, r4, 0x5D8
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
	  b         .loc_0x1A4

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
	  bne-      .loc_0x1A4
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
	  b         .loc_0x1A4

	.loc_0xD4:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x114
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1A4

	.loc_0x114:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x188

	.loc_0x134:
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
	  bne-      .loc_0x1A4
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0x188:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x134

	.loc_0x1A4:
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
 * Address:	8020C8C8
 * Size:	0001D4
 */
void ObjectMgr<Game::ItemUjamushi::Uja>::doSimulation(float)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r4, 0x804C
	  stw       r0, 0x24(r1)
	  li        r0, 0
	  subi      r4, r4, 0x5D8
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
	  b         .loc_0x1A4

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
	  bne-      .loc_0x1A4
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
	  b         .loc_0x1A4

	.loc_0xD4:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x114
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1A4

	.loc_0x114:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x188

	.loc_0x134:
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
	  bne-      .loc_0x1A4
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0x188:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x134

	.loc_0x1A4:
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
 * Address:	8020CA9C
 * Size:	0001D4
 */
void ObjectMgr<Game::ItemUjamushi::Uja>::doDirectDraw(Graphics&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r4, 0x804C
	  stw       r0, 0x24(r1)
	  li        r0, 0
	  subi      r4, r4, 0x5D8
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
	  b         .loc_0x1A4

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
	  bne-      .loc_0x1A4
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
	  b         .loc_0x1A4

	.loc_0xD4:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x114
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1A4

	.loc_0x114:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x188

	.loc_0x134:
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
	  bne-      .loc_0x1A4
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0x188:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x134

	.loc_0x1A4:
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
 * Address:	8020CC70
 * Size:	00002C
 */
void Container<Game::ItemUjamushi::Item>::getObject(void*)
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
 * Address:	8020CC9C
 * Size:	000008
 */
u32 Container<Game::ItemUjamushi::Item>::getAt(int) { return 0x0; }

/*
 * --INFO--
 * Address:	8020CCA4
 * Size:	000008
 */
u32 Container<Game::ItemUjamushi::Item>::getTo() { return 0x0; }

/*
 * --INFO--
 * Address:	8020CCAC
 * Size:	00002C
 */
void Container<Game::ItemUjamushi::Uja>::getObject(void*)
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
 * Address:	8020CCD8
 * Size:	000008
 */
u32 Container<Game::ItemUjamushi::Uja>::getAt(int) { return 0x0; }

/*
 * --INFO--
 * Address:	8020CCE0
 * Size:	000008
 */
u32 Container<Game::ItemUjamushi::Uja>::getTo() { return 0x0; }

/*
 * --INFO--
 * Address:	8020CCE8
 * Size:	000188
 */
void MonoObjectMgr<Game::ItemUjamushi::Uja>::alloc(int)
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
	  stw       r29, 0x14(r1)
	  mr        r29, r31
	  mulli     r3, r29, 0xC8
	  stw       r28, 0x10(r1)
	  addi      r3, r3, 0x10
	  bl        -0x1E8D6C
	  lis       r4, 0x8020
	  mr        r7, r29
	  addi      r4, r4, 0x61D8
	  li        r5, 0
	  li        r6, 0xC8
	  bl        -0x14B340
	  stw       r3, 0x28(r30)
	  li        r0, 0
	  mr        r3, r29
	  stw       r31, 0x24(r30)
	  stw       r0, 0x20(r30)
	  bl        -0x1E8D9C
	  cmpwi     r31, 0
	  stw       r3, 0x2C(r30)
	  li        r11, 0
	  ble-      .loc_0x120
	  cmpwi     r31, 0x8
	  subi      r3, r31, 0x8
	  ble-      .loc_0xFC
	  addi      r0, r3, 0x7
	  rlwinm    r0,r0,29,3,31
	  mtctr     r0
	  cmpwi     r3, 0
	  ble-      .loc_0xFC

	.loc_0x94:
	  lwz       r3, 0x2C(r30)
	  li        r10, 0x1
	  addi      r8, r11, 0x1
	  addi      r7, r11, 0x2
	  stbx      r10, r3, r11
	  addi      r6, r11, 0x3
	  addi      r5, r11, 0x4
	  addi      r4, r11, 0x5
	  lwz       r9, 0x2C(r30)
	  addi      r3, r11, 0x6
	  addi      r0, r11, 0x7
	  addi      r11, r11, 0x8
	  stbx      r10, r9, r8
	  lwz       r8, 0x2C(r30)
	  stbx      r10, r8, r7
	  lwz       r7, 0x2C(r30)
	  stbx      r10, r7, r6
	  lwz       r6, 0x2C(r30)
	  stbx      r10, r6, r5
	  lwz       r5, 0x2C(r30)
	  stbx      r10, r5, r4
	  lwz       r4, 0x2C(r30)
	  stbx      r10, r4, r3
	  lwz       r3, 0x2C(r30)
	  stbx      r10, r3, r0
	  bdnz+     .loc_0x94

	.loc_0xFC:
	  sub       r0, r31, r11
	  li        r4, 0x1
	  mtctr     r0
	  cmpw      r11, r31
	  bge-      .loc_0x120

	.loc_0x110:
	  lwz       r3, 0x2C(r30)
	  stbx      r4, r3, r11
	  addi      r11, r11, 0x1
	  bdnz+     .loc_0x110

	.loc_0x120:
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x88(r12)
	  mtctr     r12
	  bctrl
	  li        r28, 0
	  li        r29, 0
	  b         .loc_0x160

	.loc_0x140:
	  lwz       r0, 0x28(r30)
	  add       r3, r0, r29
	  lwz       r12, 0xC(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  addi      r29, r29, 0xC8
	  addi      r28, r28, 0x1

	.loc_0x160:
	  cmpw      r28, r31
	  blt+      .loc_0x140
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
 * Address:	8020CE70
 * Size:	00009C
 */
void MonoObjectMgr<Game::ItemUjamushi::Uja>::MonoObjectMgr()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        0x20450C
	  lis       r4, 0x804B
	  lis       r3, 0x804C
	  subi      r0, r4, 0x5324
	  lis       r6, 0x804B
	  stw       r0, 0x0(r31)
	  subi      r0, r3, 0x604
	  lis       r4, 0x804C
	  lis       r3, 0x804C
	  stw       r0, 0x0(r31)
	  li        r8, 0
	  subi      r7, r4, 0x77C
	  subi      r5, r3, 0x700
	  stb       r8, 0x18(r31)
	  subi      r0, r6, 0x4A10
	  addi      r6, r7, 0x2C
	  addi      r4, r5, 0x2C
	  stw       r0, 0x1C(r31)
	  li        r0, 0x1
	  mr        r3, r31
	  stw       r7, 0x0(r31)
	  stw       r6, 0x1C(r31)
	  stw       r5, 0x0(r31)
	  stw       r4, 0x1C(r31)
	  stb       r0, 0x18(r31)
	  stw       r8, 0x24(r31)
	  stw       r8, 0x20(r31)
	  stw       r8, 0x28(r31)
	  stw       r8, 0x2C(r31)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8020CF0C
 * Size:	00009C
 */
void transit__Q24Game40StateMachine<Game::ItemUjamushi::Item>
FPQ34Game12ItemUjamushi4ItemiPQ24Game8StateArg(void)
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
 * Address:	8020CFA8
 * Size:	000084
 */
void registerState__Q24Game40StateMachine<Game::ItemUjamushi::Item>
FPQ24Game36FSMState<Game::ItemUjamushi::Item>(void)
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
 * Address:	8020D02C
 * Size:	000038
 */
void exec__Q24Game40StateMachine<Game::ItemUjamushi::Item>
FPQ34Game12ItemUjamushi4Item(void)
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
 * Address:	8020D064
 * Size:	000044
 */
void onKeyEvent__Q24Game89FSMItem<Game::ItemUjamushi::Item,
                                  Game::ItemUjamushi::FSM,
                                  Game::ItemUjamushi::State>
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
 * Address:	8020D0A8
 * Size:	000044
 */
void platCallback__Q24Game89FSMItem<Game::ItemUjamushi::Item,
                                    Game::ItemUjamushi::FSM,
                                    Game::ItemUjamushi::State>
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
 * Address:	8020D0EC
 * Size:	000044
 */
void collisionCallback__Q24Game89FSMItem<Game::ItemUjamushi::Item,
                                         Game::ItemUjamushi::FSM,
                                         Game::ItemUjamushi::State>
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
 * Address:	8020D130
 * Size:	000044
 */
void bounceCallback__Q24Game89FSMItem<Game::ItemUjamushi::Item,
                                      Game::ItemUjamushi::FSM,
                                      Game::ItemUjamushi::State>
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
 * Address:	8020D174
 * Size:	00002C
 */
void getEnd__Q24Game39NodeItemMgr<Game::ItemUjamushi::Item> Fv(void)
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
 * Address:	8020D1A0
 * Size:	00002C
 */
void getStart__Q24Game39NodeItemMgr<Game::ItemUjamushi::Item> Fv(void)
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
 * Address:	8020D1CC
 * Size:	00002C
 */
void getNext__Q24Game39NodeItemMgr<Game::ItemUjamushi::Item> FPv(void)
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
 * Address:	8020D1F8
 * Size:	00002C
 */
void get__Q24Game39NodeItemMgr<Game::ItemUjamushi::Item> FPv(void)
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
 * Address:	8020D224
 * Size:	000240
 */
void killAll__Q24Game39NodeItemMgr<Game::ItemUjamushi::Item> Fv(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  lis       r4, 0x804C
	  addi      r3, r3, 0x4C
	  stw       r0, 0x34(r1)
	  li        r0, 0
	  subi      r4, r4, 0xF20
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
	  bl        -0xD2260

	.loc_0x130:
	  lwz       r4, 0x17C(r30)
	  cmplwi    r4, 0
	  beq-      .loc_0x14C
	  lwz       r3, -0x6E44(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x14C
	  bl        -0x1E6748

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

/*
 * --INFO--
 * Address:	8020D464
 * Size:	000084
 */
void entry__Q24Game39NodeItemMgr<Game::ItemUjamushi::Item>
FPQ34Game12ItemUjamushi4Item(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  mr        r30, r4
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  li        r3, 0x1C
	  stw       r29, 0x180(r4)
	  bl        -0x1E95E8
	  mr.       r31, r3
	  beq-      .loc_0x44
	  bl        0x203EF8
	  lis       r3, 0x804C
	  subi      r0, r3, 0xE60
	  stw       r0, 0x0(r31)

	.loc_0x44:
	  stw       r30, 0x18(r31)
	  mr        r4, r31
	  addi      r3, r29, 0x6C
	  bl        0x203F54
	  lwz       r3, 0x18(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
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
 * Address:	8020D4E8
 * Size:	000114
 */
void __ct__Q24Game39NodeItemMgr<Game::ItemUjamushi::Item> Fv(void)
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
	  bl        -0x407B0
	  addi      r29, r31, 0x30
	  mr        r3, r29
	  bl        0x203E64
	  lis       r3, 0x804B
	  li        r5, 0
	  subi      r0, r3, 0x5324
	  addi      r30, r31, 0x4C
	  lis       r3, 0x804C
	  stw       r0, 0x0(r29)
	  subi      r0, r3, 0xF08
	  stw       r0, 0x0(r29)
	  lis       r3, 0x804C
	  subi      r4, r3, 0xDD0
	  stb       r5, 0x18(r29)
	  addi      r0, r4, 0x74
	  mr        r3, r30
	  stw       r4, 0x0(r31)
	  stw       r0, 0x30(r31)
	  bl        0x203E24
	  lis       r4, 0x804B
	  lis       r3, 0x804C
	  subi      r0, r4, 0x5324
	  lis       r5, 0x804B
	  stw       r0, 0x0(r30)
	  subi      r0, r3, 0xF08
	  lis       r4, 0x804C
	  lis       r3, 0x804C
	  stw       r0, 0x0(r30)
	  li        r0, 0
	  subi      r6, r4, 0xEDC
	  subi      r4, r3, 0xE50
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
	  bl        0x203DC4
	  lis       r4, 0x804C
	  mr        r3, r31
	  subi      r0, r4, 0xE60
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
 * Address:	8020D5FC
 * Size:	00002C
 */
void getEnd__Q24Game36TFlockMgr<Game::ItemUjamushi::Uja> Fv(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwzu      r12, 0x3C(r3)
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
 * Address:	8020D628
 * Size:	00002C
 */
void get__Q24Game36TFlockMgr<Game::ItemUjamushi::Uja> FPv(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwzu      r12, 0x3C(r3)
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
 * Address:	8020D654
 * Size:	000028
 */
void __sinit_itemUjamushi_cpp(void)
{
	/*
	.loc_0x0:
	  lis       r4, 0x8051
	  li        r0, -0x1
	  lfs       f0, 0x48B0(r4)
	  lis       r3, 0x804C
	  stw       r0, -0x6AC8(r13)
	  stfsu     f0, -0x10A0(r3)
	  stfs      f0, -0x6AC4(r13)
	  stfs      f0, 0x4(r3)
	  stfs      f0, 0x8(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8020D67C
 * Size:	000008
 */
void @32 @__dt__Q24Game36TFlockMgr<Game::ItemUjamushi::Uja> Fv(void)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x20
	  b         -0x56AC
	*/
}

/*
 * --INFO--
 * Address:	8020D684
 * Size:	000008
 */
void MonoObjectMgr<Game::ItemUjamushi::Uja>::@28 @resetMgr()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x1C
	  b         -0x2130
	*/
}

/*
 * --INFO--
 * Address:	8020D68C
 * Size:	000008
 */
void MonoObjectMgr<Game::ItemUjamushi::Uja>::@28 @doDirectDraw(Graphics&)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x1C
	  b         -0x2188
	*/
}

/*
 * --INFO--
 * Address:	8020D694
 * Size:	000008
 */
void MonoObjectMgr<Game::ItemUjamushi::Uja>::@28 @doSimulation(float)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x1C
	  b         -0x21E0
	*/
}

/*
 * --INFO--
 * Address:	8020D69C
 * Size:	000008
 */
void MonoObjectMgr<Game::ItemUjamushi::Uja>::@28 @doViewCalc()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x1C
	  b         -0x2238
	*/
}

/*
 * --INFO--
 * Address:	8020D6A4
 * Size:	000008
 */
void MonoObjectMgr<Game::ItemUjamushi::Uja>::@28 @doSetView(int)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x1C
	  b         -0x2290
	*/
}

/*
 * --INFO--
 * Address:	8020D6AC
 * Size:	000008
 */
void MonoObjectMgr<Game::ItemUjamushi::Uja>::@28 @doEntry()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x1C
	  b         -0x22E8
	*/
}

/*
 * --INFO--
 * Address:	8020D6B4
 * Size:	000008
 */
void MonoObjectMgr<Game::ItemUjamushi::Uja>::@28 @doAnimation()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x1C
	  b         -0x2340
	*/
}

/*
 * --INFO--
 * Address:	8020D6BC
 * Size:	000008
 */
void ObjectMgr<Game::ItemUjamushi::Uja>::@28 @doDirectDraw(Graphics&)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x1C
	  b         -0xC24
	*/
}

/*
 * --INFO--
 * Address:	8020D6C4
 * Size:	000008
 */
void ObjectMgr<Game::ItemUjamushi::Uja>::@28 @doSimulation(float)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x1C
	  b         -0xE00
	*/
}

/*
 * --INFO--
 * Address:	8020D6CC
 * Size:	000008
 */
void ObjectMgr<Game::ItemUjamushi::Uja>::@28 @doViewCalc()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x1C
	  b         -0xFDC
	*/
}

/*
 * --INFO--
 * Address:	8020D6D4
 * Size:	000008
 */
void ObjectMgr<Game::ItemUjamushi::Uja>::@28 @doSetView(int)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x1C
	  b         -0x11B8
	*/
}

/*
 * --INFO--
 * Address:	8020D6DC
 * Size:	000008
 */
void ObjectMgr<Game::ItemUjamushi::Uja>::@28 @doEntry()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x1C
	  b         -0x1394
	*/
}

/*
 * --INFO--
 * Address:	8020D6E4
 * Size:	000008
 */
void ObjectMgr<Game::ItemUjamushi::Uja>::@28 @doAnimation()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x1C
	  b         -0x1570
	*/
}

/*
 * --INFO--
 * Address:	8020D6EC
 * Size:	000008
 */
void @32 @getEnd__Q24Game36TFlockMgr<Game::ItemUjamushi::Uja> Fv(void)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x20
	  b         -0xF4
	*/
}

/*
 * --INFO--
 * Address:	8020D6F4
 * Size:	000008
 */
void @32 @getStart__Q24Game36TFlockMgr<Game::ItemUjamushi::Uja> Fv(void)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x20
	  b         -0x2924
	*/
}

/*
 * --INFO--
 * Address:	8020D6FC
 * Size:	000008
 */
void @32 @getNext__Q24Game36TFlockMgr<Game::ItemUjamushi::Uja> FPv(void)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x20
	  b         -0x2958
	*/
}

/*
 * --INFO--
 * Address:	8020D704
 * Size:	000008
 */
void @32 @get__Q24Game36TFlockMgr<Game::ItemUjamushi::Uja> FPv(void)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x20
	  b         -0xE0
	*/
}

/*
 * --INFO--
 * Address:	8020D70C
 * Size:	000008
 */
void @32 @Game::ItemUjamushi::UjaMgr::__dt(void)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x20
	  b         -0x2CE0
	*/
}

/*
 * --INFO--
 * Address:	8020D714
 * Size:	000008
 */
void @376 @onKeyEvent__Q24Game89FSMItem<Game::ItemUjamushi::Item,
                                        Game::ItemUjamushi::FSM,
                                        Game::ItemUjamushi::State>
FRCQ28SysShape8KeyEvent(void)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x178
	  b         -0x6B4
	*/
}

/*
 * --INFO--
 * Address:	8020D71C
 * Size:	000008
 */
void @48 @__dt__Q24Game39NodeItemMgr<Game::ItemUjamushi::Item> Fv(void)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x30
	  b         -0x3C94
	*/
}

/*
 * --INFO--
 * Address:	8020D724
 * Size:	000008
 */
void NodeObjectMgr<Game::ItemUjamushi::Item>::@28 @resetMgr()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x1C
	  b         -0x24FC
	*/
}

/*
 * --INFO--
 * Address:	8020D72C
 * Size:	000008
 */
void ObjectMgr<Game::ItemUjamushi::Item>::@28 @doDirectDraw(Graphics&)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x1C
	  b         -0x17AC
	*/
}

/*
 * --INFO--
 * Address:	8020D734
 * Size:	000008
 */
void ObjectMgr<Game::ItemUjamushi::Item>::@28 @doSimulation(float)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x1C
	  b         -0x19A8
	*/
}

/*
 * --INFO--
 * Address:	8020D73C
 * Size:	000008
 */
void ObjectMgr<Game::ItemUjamushi::Item>::@28 @doViewCalc()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x1C
	  b         -0x1B94
	*/
}

/*
 * --INFO--
 * Address:	8020D744
 * Size:	000008
 */
void ObjectMgr<Game::ItemUjamushi::Item>::@28 @doSetView(int)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x1C
	  b         -0x1D90
	*/
}

/*
 * --INFO--
 * Address:	8020D74C
 * Size:	000008
 */
void ObjectMgr<Game::ItemUjamushi::Item>::@28 @doEntry()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x1C
	  b         -0x1F7C
	*/
}

/*
 * --INFO--
 * Address:	8020D754
 * Size:	000008
 */
void ObjectMgr<Game::ItemUjamushi::Item>::@28 @doAnimation()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x1C
	  b         -0x2168
	*/
}

/*
 * --INFO--
 * Address:	8020D75C
 * Size:	000008
 */
void @48 @getEnd__Q24Game39NodeItemMgr<Game::ItemUjamushi::Item> Fv(void)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x30
	  b         -0x5EC
	*/
}

/*
 * --INFO--
 * Address:	8020D764
 * Size:	000008
 */
void @48 @getStart__Q24Game39NodeItemMgr<Game::ItemUjamushi::Item> Fv(void)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x30
	  b         -0x5C8
	*/
}

/*
 * --INFO--
 * Address:	8020D76C
 * Size:	000008
 */
void @48 @getNext__Q24Game39NodeItemMgr<Game::ItemUjamushi::Item> FPv(void)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x30
	  b         -0x5A4
	*/
}

/*
 * --INFO--
 * Address:	8020D774
 * Size:	000008
 */
void @48 @get__Q24Game39NodeItemMgr<Game::ItemUjamushi::Item> FPv(void)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x30
	  b         -0x580
	*/
}

/*
 * --INFO--
 * Address:	8020D77C
 * Size:	000008
 */
void @48 @Game::ItemUjamushi::Mgr::__dt(void)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x30
	  b         -0x333C
	*/
}
