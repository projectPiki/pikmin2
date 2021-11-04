#include "types.h"

/*
 * --INFO--
 * Address:	802A50CC
 * Size:	000050
 */
void Game::Damagumo::Mgr::Mgr(int, unsigned char)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x17644C
	  lis       r3, 0x804D
	  lis       r4, 0x8049
	  subi      r5, r3, 0x28D8
	  mr        r3, r31
	  stw       r5, 0x0(r31)
	  addi      r5, r5, 0x38
	  subi      r0, r4, 0x6AE8
	  stw       r5, 0x4(r31)
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
 * Address:	802A511C
 * Size:	000048
 */
void Game::Damagumo::Mgr::doAlloc()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  li        r3, 0x8F8
	  bl        -0x281290
	  mr.       r4, r3
	  beq-      .loc_0x2C
	  bl        .loc_0x48
	  mr        r4, r3

	.loc_0x2C:
	  mr        r3, r31
	  bl        -0x1758B0
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr

	.loc_0x48:
	*/
}

/*
 * --INFO--
 * Address:	802A5164
 * Size:	0001C8
 */
void Game::Damagumo::Parms::Parms()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r4, 0x8049
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  subi      r31, r4, 0x6B48
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  bl        -0x19B9E8
	  lis       r3, 0x804D
	  lis       r5, 0x6670
	  subi      r0, r3, 0x27F8
	  addi      r4, r30, 0x8F4
	  stw       r0, 0xD8(r30)
	  li        r7, 0
	  addi      r0, r31, 0x74
	  addi      r3, r30, 0x804
	  stw       r4, 0x7F8(r30)
	  addi      r4, r30, 0x7F8
	  addi      r5, r5, 0x3031
	  addi      r6, r31, 0x84
	  stw       r7, 0x7FC(r30)
	  stw       r0, 0x800(r30)
	  bl        0x16E498
	  lis       r3, 0x804B
	  lis       r5, 0x6670
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x24C0(r2)
	  stw       r0, 0x804(r30)
	  addi      r3, r30, 0x82C
	  lfs       f1, -0x24BC(r2)
	  addi      r4, r30, 0x7F8
	  stfs      f0, 0x81C(r30)
	  addi      r5, r5, 0x3032
	  lfs       f0, -0x24B8(r2)
	  addi      r6, r31, 0x90
	  stfs      f1, 0x824(r30)
	  stfs      f0, 0x828(r30)
	  bl        0x16E45C
	  lis       r3, 0x804B
	  lis       r5, 0x6670
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x24B4(r2)
	  stw       r0, 0x82C(r30)
	  addi      r3, r30, 0x854
	  lfs       f1, -0x24B0(r2)
	  addi      r4, r30, 0x7F8
	  stfs      f0, 0x844(r30)
	  addi      r5, r5, 0x3033
	  lfs       f0, -0x24AC(r2)
	  addi      r6, r31, 0xA0
	  stfs      f1, 0x84C(r30)
	  stfs      f0, 0x850(r30)
	  bl        0x16E420
	  lis       r3, 0x804B
	  lis       r5, 0x6670
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x24A8(r2)
	  stw       r0, 0x854(r30)
	  addi      r3, r30, 0x87C
	  lfs       f1, -0x24B0(r2)
	  addi      r4, r30, 0x7F8
	  stfs      f0, 0x86C(r30)
	  addi      r5, r5, 0x3034
	  lfs       f0, -0x24AC(r2)
	  addi      r6, r31, 0xB0
	  stfs      f1, 0x874(r30)
	  stfs      f0, 0x878(r30)
	  bl        0x16E3E4
	  lis       r3, 0x804B
	  lis       r5, 0x6670
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x24A4(r2)
	  stw       r0, 0x87C(r30)
	  addi      r3, r30, 0x8A4
	  lfs       f1, -0x24A0(r2)
	  addi      r4, r30, 0x7F8
	  stfs      f0, 0x894(r30)
	  addi      r5, r5, 0x3035
	  lfs       f0, -0x24B8(r2)
	  addi      r6, r31, 0xC0
	  stfs      f1, 0x89C(r30)
	  stfs      f0, 0x8A0(r30)
	  bl        0x16E3A8
	  lis       r3, 0x804B
	  lis       r5, 0x6670
	  subi      r0, r3, 0x5344
	  lfs       f1, -0x24B8(r2)
	  stw       r0, 0x8A4(r30)
	  addi      r3, r30, 0x8CC
	  lfs       f0, -0x24A0(r2)
	  addi      r4, r30, 0x7F8
	  stfs      f1, 0x8BC(r30)
	  addi      r5, r5, 0x3036
	  addi      r6, r31, 0xD0
	  stfs      f0, 0x8C4(r30)
	  stfs      f1, 0x8C8(r30)
	  bl        0x16E370
	  lis       r3, 0x804B
	  lfs       f2, -0x249C(r2)
	  subi      r0, r3, 0x5344
	  lfs       f1, -0x24BC(r2)
	  stw       r0, 0x8CC(r30)
	  mr        r3, r30
	  lfs       f0, -0x2498(r2)
	  stfs      f2, 0x8E4(r30)
	  stfs      f1, 0x8EC(r30)
	  stfs      f0, 0x8F0(r30)
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
 * Address:	802A532C
 * Size:	000060
 */
void Game::Damagumo::Mgr::createObj(int)
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
	  mulli     r3, r31, 0x4A8
	  addi      r3, r3, 0x10
	  bl        -0x2813A4
	  lis       r4, 0x802A
	  lis       r5, 0x802A
	  addi      r4, r4, 0x57EC
	  mr        r7, r31
	  addi      r5, r5, 0x538C
	  li        r6, 0x4A8
	  bl        -0x1E397C
	  stw       r3, 0x4C(r30)
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
 * Address:	802A538C
 * Size:	0000BC
 */
void Game::Damagumo::Obj::~Obj()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr.       r31, r3
	  stw       r30, 0x8(r1)
	  mr        r30, r4
	  beq-      .loc_0xA0
	  lis       r3, 0x804D
	  addi      r0, r31, 0x498
	  subi      r4, r3, 0x2484
	  stw       r4, 0x0(r31)
	  addi      r3, r4, 0x1B0
	  addi      r4, r4, 0x2FC
	  stw       r3, 0x178(r31)
	  lwz       r3, 0x17C(r31)
	  stw       r4, 0x0(r3)
	  lwz       r3, 0x17C(r31)
	  sub       r0, r0, r3
	  stw       r0, 0xC(r3)
	  beq-      .loc_0x90
	  lis       r3, 0x804B
	  addi      r0, r31, 0x2BC
	  subi      r4, r3, 0x5CDC
	  addi      r3, r31, 0x290
	  stw       r4, 0x0(r31)
	  addi      r5, r4, 0x1B0
	  addi      r6, r4, 0x2F8
	  li        r4, -0x1
	  stw       r5, 0x178(r31)
	  lwz       r5, 0x17C(r31)
	  stw       r6, 0x0(r5)
	  lwz       r5, 0x17C(r31)
	  sub       r0, r0, r5
	  stw       r0, 0xC(r5)
	  bl        0x16C170

	.loc_0x90:
	  extsh.    r0, r30
	  ble-      .loc_0xA0
	  mr        r3, r31
	  bl        -0x281374

	.loc_0xA0:
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
 * Address:	802A5448
 * Size:	000010
 */
void Game::Damagumo::Mgr::getEnemy(int)
{
	/*
	.loc_0x0:
	  mulli     r0, r4, 0x4A8
	  lwz       r3, 0x4C(r3)
	  add       r3, r3, r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802A5458
 * Size:	000068
 */
void Game::Damagumo::Mgr::loadModelData()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x175360
	  li        r5, 0
	  b         .loc_0x40

	.loc_0x20:
	  lwz       r3, 0x80(r4)
	  rlwinm    r0,r5,2,14,29
	  addi      r5, r5, 0x1
	  lwzx      r3, r3, r0
	  lwz       r0, 0xC(r3)
	  rlwinm    r0,r0,0,20,15
	  ori       r0, r0, 0x2000
	  stw       r0, 0xC(r3)

	.loc_0x40:
	  lwz       r4, 0x1C(r31)
	  rlwinm    r0,r5,0,16,31
	  lhz       r3, 0x7C(r4)
	  cmplw     r0, r3
	  blt+      .loc_0x20
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802A54C0
 * Size:	00012C
 */
void Game::Damagumo::Mgr::loadTexData()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x70(r1)
	  mflr      r0
	  li        r4, 0
	  stw       r0, 0x74(r1)
	  stw       r31, 0x6C(r1)
	  stw       r30, 0x68(r1)
	  mr        r30, r3
	  lwz       r3, 0x1C(r3)
	  bl        0x198DBC
	  lwz       r4, -0x7B28(r13)
	  addi      r3, r1, 0x38
	  li        r31, 0
	  bl        0x1A70E8
	  lwz       r3, -0x63D8(r13)
	  addi      r4, r1, 0x38
	  bl        0x1A72A4
	  cmplwi    r3, 0
	  beq-      .loc_0x4C
	  lwz       r31, 0x30(r3)

	.loc_0x4C:
	  cmplwi    r31, 0
	  bne-      .loc_0x70
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  subi      r3, r3, 0x67B0
	  li        r4, 0x6D
	  subi      r5, r5, 0x67A0
	  crclr     6, 0x6
	  bl        -0x27AEEC

	.loc_0x70:
	  li        r3, 0x10
	  bl        -0x281690
	  mr.       r0, r3
	  beq-      .loc_0x88
	  bl        0x18EBF4
	  mr        r0, r3

	.loc_0x88:
	  stw       r0, 0x44(r30)
	  mr        r4, r31
	  lwz       r3, 0x44(r30)
	  lwz       r5, 0x1C(r30)
	  bl        0x18EAC8
	  lwz       r4, -0x7B24(r13)
	  addi      r3, r1, 0x8
	  li        r31, 0
	  bl        0x1A7070
	  lwz       r3, -0x63D8(r13)
	  addi      r4, r1, 0x8
	  bl        0x1A722C
	  cmplwi    r3, 0
	  beq-      .loc_0xC4
	  lwz       r31, 0x30(r3)

	.loc_0xC4:
	  cmplwi    r31, 0
	  bne-      .loc_0xE8
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  subi      r3, r3, 0x67B0
	  li        r4, 0x75
	  subi      r5, r5, 0x67A0
	  crclr     6, 0x6
	  bl        -0x27AF64

	.loc_0xE8:
	  li        r3, 0x14
	  bl        -0x281708
	  mr.       r0, r3
	  beq-      .loc_0x100
	  bl        0x18EC88
	  mr        r0, r3

	.loc_0x100:
	  stw       r0, 0x48(r30)
	  mr        r4, r31
	  lwz       r3, 0x48(r30)
	  lwz       r5, 0x1C(r30)
	  bl        0x18EA50
	  lwz       r0, 0x74(r1)
	  lwz       r31, 0x6C(r1)
	  lwz       r30, 0x68(r1)
	  mtlr      r0
	  addi      r1, r1, 0x70
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802A55EC
 * Size:	00007C
 */
void Game::Damagumo::Mgr::createModel()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  li        r3, 0x14
	  bl        -0x281764
	  mr.       r31, r3
	  beq-      .loc_0x3C
	  lwz       r4, 0x1C(r30)
	  lis       r5, 0x4
	  lbz       r6, 0x24(r30)
	  bl        0x198BB8
	  mr        r31, r3

	.loc_0x3C:
	  cmplwi    r31, 0
	  bne-      .loc_0x60
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  subi      r3, r3, 0x67B0
	  li        r4, 0x8F
	  subi      r5, r5, 0x67A0
	  crclr     6, 0x6
	  bl        -0x27B008

	.loc_0x60:
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
 * Address:	802A5668
 * Size:	0000B0
 */
void Game::Damagumo::Mgr::~Mgr()
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
	  beq-      .loc_0x94
	  lis       r3, 0x804D
	  subi      r3, r3, 0x28D8
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x38
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x84
	  lis       r3, 0x804B
	  subi      r3, r3, 0x760
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x38
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x84
	  lis       r3, 0x804B
	  addic.    r0, r30, 0x4
	  subi      r3, r3, 0x5304
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x38
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x84
	  lis       r4, 0x804B
	  addi      r3, r30, 0x4
	  subi      r0, r4, 0x5324
	  li        r4, 0
	  stw       r0, 0x4(r30)
	  bl        0x16BEA0

	.loc_0x84:
	  extsh.    r0, r31
	  ble-      .loc_0x94
	  mr        r3, r30
	  bl        -0x281644

	.loc_0x94:
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
 * Address:	802A5718
 * Size:	000008
 */
u32 Game::Damagumo::Mgr::getEnemyTypeID() { return 0x38; }

/*
 * --INFO--
 * Address:	802A5720
 * Size:	00002C
 */
void Game::Damagumo::Mgr::doLoadBmd(void*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r5, 0x2124
	  mr        r3, r4
	  stw       r0, 0x14(r1)
	  addi      r4, r5, 0x30
	  bl        -0x235EA4
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802A574C
 * Size:	000050
 */
void Game::Damagumo::Parms::read(Stream&)
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
	  bl        0x16E08C
	  mr        r4, r31
	  addi      r3, r30, 0xE0
	  bl        0x16E080
	  mr        r4, r31
	  addi      r3, r30, 0x7F8
	  bl        0x16E074
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
 * Address:	802A579C
 * Size:	000008
 */
void Game::Damagumo::Mgr::@4 @__dt()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x4
	  b         -0x138
	*/
}
