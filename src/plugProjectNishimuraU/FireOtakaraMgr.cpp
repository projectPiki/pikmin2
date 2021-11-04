#include "types.h"

/*
 * --INFO--
 * Address:	802B7CCC
 * Size:	000050
 */
void Game::FireOtakara::Mgr::Mgr(int, unsigned char)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x1E48
	  lis       r3, 0x804D
	  lis       r4, 0x8049
	  subi      r5, r3, 0xC28
	  mr        r3, r31
	  stw       r5, 0x0(r31)
	  addi      r5, r5, 0x38
	  subi      r0, r4, 0x5C04
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
 * Address:	802B7D1C
 * Size:	000048
 */
void Game::FireOtakara::Mgr::doAlloc()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  li        r3, 0x8A8
	  bl        -0x293E90
	  mr.       r4, r3
	  beq-      .loc_0x2C
	  bl        .loc_0x48
	  mr        r4, r3

	.loc_0x2C:
	  mr        r3, r31
	  bl        -0x1884B0
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
 * Address:	802B7D64
 * Size:	000154
 */
void Game::OtakaraBase::Parms::Parms()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r4, 0x8049
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  stw       r30, 0x8(r1)
	  subi      r30, r4, 0x5C48
	  bl        -0x1AE5E8
	  lis       r3, 0x804D
	  lis       r5, 0x6670
	  subi      r0, r3, 0xB44
	  addi      r4, r31, 0x8A4
	  stw       r0, 0xD8(r31)
	  li        r7, 0
	  addi      r0, r30, 0x60
	  addi      r3, r31, 0x804
	  stw       r4, 0x7F8(r31)
	  addi      r4, r31, 0x7F8
	  addi      r5, r5, 0x3031
	  addi      r6, r30, 0x74
	  stw       r7, 0x7FC(r31)
	  stw       r0, 0x800(r31)
	  bl        0x15B898
	  lis       r3, 0x804B
	  lis       r5, 0x6670
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x2078(r2)
	  stw       r0, 0x804(r31)
	  addi      r3, r31, 0x82C
	  lfs       f1, -0x2074(r2)
	  addi      r4, r31, 0x7F8
	  stfs      f0, 0x81C(r31)
	  addi      r5, r5, 0x3130
	  lfs       f0, -0x2070(r2)
	  addi      r6, r30, 0x84
	  stfs      f1, 0x824(r31)
	  stfs      f0, 0x828(r31)
	  bl        0x15B85C
	  lis       r3, 0x804B
	  lis       r5, 0x6670
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x206C(r2)
	  stw       r0, 0x82C(r31)
	  addi      r3, r31, 0x854
	  lfs       f1, -0x2074(r2)
	  addi      r4, r31, 0x7F8
	  stfs      f0, 0x844(r31)
	  addi      r5, r5, 0x3131
	  lfs       f0, -0x2068(r2)
	  addi      r6, r30, 0x98
	  stfs      f1, 0x84C(r31)
	  stfs      f0, 0x850(r31)
	  bl        0x15B820
	  lis       r3, 0x804B
	  lis       r5, 0x6670
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x2064(r2)
	  stw       r0, 0x854(r31)
	  addi      r3, r31, 0x87C
	  lfs       f1, -0x2074(r2)
	  addi      r4, r31, 0x7F8
	  stfs      f0, 0x86C(r31)
	  addi      r5, r5, 0x3231
	  lfs       f0, -0x2068(r2)
	  addi      r6, r30, 0xAC
	  stfs      f1, 0x874(r31)
	  stfs      f0, 0x878(r31)
	  bl        0x15B7E4
	  lis       r3, 0x804B
	  lfs       f2, -0x2060(r2)
	  subi      r0, r3, 0x5344
	  lfs       f1, -0x2074(r2)
	  stw       r0, 0x87C(r31)
	  mr        r3, r31
	  lfs       f0, -0x2068(r2)
	  stfs      f2, 0x894(r31)
	  stfs      f1, 0x89C(r31)
	  stfs      f0, 0x8A0(r31)
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
 * Address:	802B7EB8
 * Size:	000060
 */
void Game::FireOtakara::Mgr::createObj(int)
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
	  mulli     r3, r31, 0x308
	  addi      r3, r3, 0x10
	  bl        -0x293F30
	  lis       r4, 0x802C
	  lis       r5, 0x802B
	  subi      r4, r4, 0x7E38
	  mr        r7, r31
	  addi      r5, r5, 0x7F18
	  li        r6, 0x308
	  bl        -0x1F6508
	  stw       r3, 0x48(r30)
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
 * Address:	802B7F18
 * Size:	0000F0
 */
void Game::FireOtakara::Obj::~Obj()
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
	  beq-      .loc_0xD4
	  lis       r3, 0x804D
	  addi      r0, r30, 0x2F8
	  subi      r4, r3, 0xB08
	  stw       r4, 0x0(r30)
	  addi      r3, r4, 0x1B0
	  addi      r4, r4, 0x324
	  stw       r3, 0x178(r30)
	  lwz       r3, 0x17C(r30)
	  stw       r4, 0x0(r3)
	  lwz       r3, 0x17C(r30)
	  sub       r0, r0, r3
	  stw       r0, 0xC(r3)
	  beq-      .loc_0xC4
	  lis       r3, 0x804D
	  addi      r0, r30, 0x2F4
	  subi      r4, r3, 0xF7C
	  stw       r4, 0x0(r30)
	  addi      r3, r4, 0x1B0
	  addi      r4, r4, 0x324
	  stw       r3, 0x178(r30)
	  lwz       r3, 0x17C(r30)
	  stw       r4, 0x0(r3)
	  lwz       r3, 0x17C(r30)
	  sub       r0, r0, r3
	  stw       r0, 0xC(r3)
	  beq-      .loc_0xC4
	  lis       r3, 0x804B
	  addi      r0, r30, 0x2BC
	  subi      r4, r3, 0x5CDC
	  addi      r3, r30, 0x290
	  stw       r4, 0x0(r30)
	  addi      r5, r4, 0x1B0
	  addi      r6, r4, 0x2F8
	  li        r4, -0x1
	  stw       r5, 0x178(r30)
	  lwz       r5, 0x17C(r30)
	  stw       r6, 0x0(r5)
	  lwz       r5, 0x17C(r30)
	  sub       r0, r0, r5
	  stw       r0, 0xC(r5)
	  bl        0x1595B0

	.loc_0xC4:
	  extsh.    r0, r31
	  ble-      .loc_0xD4
	  mr        r3, r30
	  bl        -0x293F34

	.loc_0xD4:
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
 * Address:	802B8008
 * Size:	000010
 */
void Game::FireOtakara::Mgr::getEnemy(int)
{
	/*
	.loc_0x0:
	  mulli     r0, r4, 0x308
	  lwz       r3, 0x48(r3)
	  add       r3, r3, r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802B8018
 * Size:	000080
 */
void Game::FireOtakara::Mgr::loadTexData()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  li        r0, 0
	  stw       r31, 0x3C(r1)
	  mr        r31, r3
	  stw       r0, 0x44(r3)
	  addi      r3, r1, 0x8
	  lwz       r4, -0x7B20(r13)
	  bl        0x19459C
	  lwz       r3, -0x63D8(r13)
	  addi      r4, r1, 0x8
	  bl        0x194758
	  cmplwi    r3, 0
	  beq-      .loc_0x44
	  lwz       r0, 0x30(r3)
	  stw       r0, 0x44(r31)

	.loc_0x44:
	  lwz       r0, 0x44(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x6C
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  subi      r3, r3, 0x58C0
	  li        r4, 0x53
	  subi      r5, r5, 0x58AC
	  crclr     6, 0x6
	  bl        -0x28DA40

	.loc_0x6C:
	  lwz       r0, 0x44(r1)
	  lwz       r31, 0x3C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802B8098
 * Size:	0000C8
 */
void Game::FireOtakara::Mgr::~Mgr()
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
	  lis       r3, 0x804D
	  subi      r3, r3, 0xC28
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x38
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x9C
	  lis       r3, 0x804D
	  subi      r3, r3, 0x1070
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x38
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x9C
	  lis       r3, 0x804B
	  subi      r3, r3, 0x760
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x38
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x9C
	  lis       r3, 0x804B
	  addic.    r0, r30, 0x4
	  subi      r3, r3, 0x5304
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x38
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x9C
	  lis       r4, 0x804B
	  addi      r3, r30, 0x4
	  subi      r0, r4, 0x5324
	  li        r4, 0
	  stw       r0, 0x4(r30)
	  bl        0x159458

	.loc_0x9C:
	  extsh.    r0, r31
	  ble-      .loc_0xAC
	  mr        r3, r30
	  bl        -0x29408C

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
 * Address:	802B8160
 * Size:	000008
 */
u32 Game::FireOtakara::Mgr::getEnemyTypeID() { return 0x3B; }

/*
 * --INFO--
 * Address:	802B8168
 * Size:	000008
 */
void Game::FireOtakara::Mgr::getChangeTexture()
{
	/*
	.loc_0x0:
	  lwz       r3, 0x44(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802B8170
 * Size:	000050
 */
void Game::OtakaraBase::Parms::read(Stream&)
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
	  bl        0x15B668
	  mr        r4, r31
	  addi      r3, r30, 0xE0
	  bl        0x15B65C
	  mr        r4, r31
	  addi      r3, r30, 0x7F8
	  bl        0x15B650
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
 * Address:	802B81C0
 * Size:	000008
 */
void Game::FireOtakara::Mgr::@4 @__dt()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x4
	  b         -0x12C
	*/
}
