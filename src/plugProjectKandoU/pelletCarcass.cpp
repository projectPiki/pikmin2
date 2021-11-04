#include "types.h"

namespace Game {

/*
 * --INFO--
 * Address:	801FB8CC
 * Size:	0000B0
 */
PelletCarcass::Mgr::Mgr(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  extsh.    r0, r4
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  beq-      .loc_0x28
	  addi      r0, r30, 0xA0
	  stw       r0, 0x4(r30)

	.loc_0x28:
	  mr        r3, r30
	  li        r4, 0
	  li        r5, 0x1
	  bl        -0x8FF40
	  addi      r31, r30, 0x54
	  mr        r3, r31
	  bl        0x215A84
	  lis       r3, 0x804B
	  lis       r4, 0x804C
	  subi      r0, r3, 0x5324
	  lis       r3, 0x804C
	  stw       r0, 0x0(r31)
	  subi      r0, r4, 0x2290
	  subi      r4, r3, 0x235C
	  li        r5, 0
	  stw       r0, 0x0(r31)
	  addi      r0, r4, 0x98
	  addi      r3, r30, 0x70
	  stb       r5, 0x18(r31)
	  stw       r4, 0x0(r30)
	  stw       r0, 0x54(r30)
	  bl        0x18EC
	  lis       r4, 0x804C
	  mr        r3, r30
	  subi      r4, r4, 0x2530
	  stw       r4, 0x0(r30)
	  addi      r0, r4, 0x98
	  stw       r0, 0x54(r30)
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

} // namespace Game

/*
 * --INFO--
 * Address:	801FB97C
 * Size:	00019C
 */
void __dt__Q24Game49FixedSizePelletMgr<Game::PelletCarcass::Object> Fv(void)
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
	  beq-      .loc_0x180
	  lis       r3, 0x804C
	  addic.    r0, r30, 0x70
	  subi      r3, r3, 0x235C
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x98
	  stw       r0, 0x54(r30)
	  beq-      .loc_0xA0
	  lis       r3, 0x804C
	  addic.    r0, r30, 0x70
	  subi      r3, r3, 0x23E8
	  stw       r3, 0x70(r30)
	  addi      r0, r3, 0x2C
	  stw       r0, 0x8C(r30)
	  beq-      .loc_0xA0
	  lis       r3, 0x804C
	  addic.    r0, r30, 0x70
	  subi      r3, r3, 0x2464
	  stw       r3, 0x70(r30)
	  addi      r0, r3, 0x2C
	  stw       r0, 0x8C(r30)
	  beq-      .loc_0xA0
	  lis       r3, 0x804C
	  addic.    r0, r30, 0x70
	  subi      r0, r3, 0x2290
	  stw       r0, 0x70(r30)
	  beq-      .loc_0xA0
	  lis       r4, 0x804B
	  addi      r3, r30, 0x70
	  subi      r0, r4, 0x5324
	  li        r4, 0
	  stw       r0, 0x70(r30)
	  bl        0x215B70

	.loc_0xA0:
	  addic.    r0, r30, 0x54
	  beq-      .loc_0xD4
	  lis       r3, 0x804C
	  addic.    r0, r30, 0x54
	  subi      r0, r3, 0x2290
	  stw       r0, 0x54(r30)
	  beq-      .loc_0xD4
	  lis       r4, 0x804B
	  addi      r3, r30, 0x54
	  subi      r0, r4, 0x5324
	  li        r4, 0
	  stw       r0, 0x54(r30)
	  bl        0x215B3C

	.loc_0xD4:
	  cmplwi    r30, 0
	  beq-      .loc_0x170
	  lis       r3, 0x804B
	  addic.    r0, r30, 0x18
	  addi      r0, r3, 0x1CDC
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x170
	  lis       r3, 0x804B
	  addic.    r0, r30, 0x18
	  addi      r3, r3, 0x1EB4
	  stw       r3, 0x18(r30)
	  addi      r0, r3, 0x2C
	  stw       r0, 0x34(r30)
	  beq-      .loc_0x170
	  lis       r3, 0x804B
	  addic.    r0, r30, 0x18
	  addi      r3, r3, 0x1E28
	  stw       r3, 0x18(r30)
	  addi      r0, r3, 0x2C
	  stw       r0, 0x34(r30)
	  beq-      .loc_0x170
	  lis       r3, 0x804B
	  addic.    r0, r30, 0x18
	  addi      r3, r3, 0x1DAC
	  stw       r3, 0x18(r30)
	  addi      r0, r3, 0x2C
	  stw       r0, 0x34(r30)
	  beq-      .loc_0x170
	  lis       r3, 0x804B
	  addic.    r0, r30, 0x18
	  addi      r0, r3, 0x1D80
	  stw       r0, 0x18(r30)
	  beq-      .loc_0x170
	  lis       r4, 0x804B
	  addi      r3, r30, 0x18
	  subi      r0, r4, 0x5324
	  li        r4, 0
	  stw       r0, 0x18(r30)
	  bl        0x215AA0

	.loc_0x170:
	  extsh.    r0, r31
	  ble-      .loc_0x180
	  mr        r3, r30
	  bl        -0x1D7A44

	.loc_0x180:
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
 * Address:	801FBB18
 * Size:	0000A0
 */
void MonoObjectMgr<Game::PelletCarcass::Object>::~MonoObjectMgr()
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
	  subi      r4, r4, 0x23E8
	  stw       r4, 0x0(r30)
	  addi      r0, r4, 0x2C
	  stw       r0, 0x1C(r30)
	  beq-      .loc_0x74
	  lis       r4, 0x804C
	  subi      r4, r4, 0x2464
	  stw       r4, 0x0(r30)
	  addi      r0, r4, 0x2C
	  stw       r0, 0x1C(r30)
	  beq-      .loc_0x74
	  lis       r4, 0x804C
	  subi      r0, r4, 0x2290
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x74
	  lis       r5, 0x804B
	  li        r4, 0
	  subi      r0, r5, 0x5324
	  stw       r0, 0x0(r30)
	  bl        0x215A00

	.loc_0x74:
	  extsh.    r0, r31
	  ble-      .loc_0x84
	  mr        r3, r30
	  bl        -0x1D7AE4

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
 * Address:	801FBBB8
 * Size:	000070
 */
void Container<Game::PelletCarcass::Object>::~Container()
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
	  subi      r0, r4, 0x2290
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x44
	  lis       r5, 0x804B
	  li        r4, 0
	  subi      r0, r5, 0x5324
	  stw       r0, 0x0(r30)
	  bl        0x215990

	.loc_0x44:
	  extsh.    r0, r31
	  ble-      .loc_0x54
	  mr        r3, r30
	  bl        -0x1D7B54

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
 * Address:	801FBC28
 * Size:	000064
 */
void PelletCarcass::Mgr::setupResources(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  subi      r4, r2, 0x4668
	  li        r5, 0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r3, -0x6514(r13)
	  bl        0x227714
	  mr        r3, r31
	  li        r4, 0x40
	  bl        0x1814
	  mr        r3, r31
	  bl        -0x8FE28
	  addi      r3, r31, 0x18
	  li        r4, 0x80
	  bl        -0xCA4
	  lwz       r3, -0x6514(r13)
	  subi      r4, r2, 0x4668
	  bl        0x2276F0
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801FBC8C
 * Size:	0001B4
 */
PelletCarcass::Mgr::~Mgr(void)
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
	  beq-      .loc_0x198
	  lis       r3, 0x804C
	  subi      r3, r3, 0x2530
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x98
	  stw       r0, 0x54(r30)
	  beq-      .loc_0x188
	  lis       r3, 0x804C
	  addic.    r0, r30, 0x70
	  subi      r3, r3, 0x235C
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x98
	  stw       r0, 0x54(r30)
	  beq-      .loc_0xB8
	  lis       r3, 0x804C
	  addic.    r0, r30, 0x70
	  subi      r3, r3, 0x23E8
	  stw       r3, 0x70(r30)
	  addi      r0, r3, 0x2C
	  stw       r0, 0x8C(r30)
	  beq-      .loc_0xB8
	  lis       r3, 0x804C
	  addic.    r0, r30, 0x70
	  subi      r3, r3, 0x2464
	  stw       r3, 0x70(r30)
	  addi      r0, r3, 0x2C
	  stw       r0, 0x8C(r30)
	  beq-      .loc_0xB8
	  lis       r3, 0x804C
	  addic.    r0, r30, 0x70
	  subi      r0, r3, 0x2290
	  stw       r0, 0x70(r30)
	  beq-      .loc_0xB8
	  lis       r4, 0x804B
	  addi      r3, r30, 0x70
	  subi      r0, r4, 0x5324
	  li        r4, 0
	  stw       r0, 0x70(r30)
	  bl        0x215848

	.loc_0xB8:
	  addic.    r0, r30, 0x54
	  beq-      .loc_0xEC
	  lis       r3, 0x804C
	  addic.    r0, r30, 0x54
	  subi      r0, r3, 0x2290
	  stw       r0, 0x54(r30)
	  beq-      .loc_0xEC
	  lis       r4, 0x804B
	  addi      r3, r30, 0x54
	  subi      r0, r4, 0x5324
	  li        r4, 0
	  stw       r0, 0x54(r30)
	  bl        0x215814

	.loc_0xEC:
	  cmplwi    r30, 0
	  beq-      .loc_0x188
	  lis       r3, 0x804B
	  addic.    r0, r30, 0x18
	  addi      r0, r3, 0x1CDC
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x188
	  lis       r3, 0x804B
	  addic.    r0, r30, 0x18
	  addi      r3, r3, 0x1EB4
	  stw       r3, 0x18(r30)
	  addi      r0, r3, 0x2C
	  stw       r0, 0x34(r30)
	  beq-      .loc_0x188
	  lis       r3, 0x804B
	  addic.    r0, r30, 0x18
	  addi      r3, r3, 0x1E28
	  stw       r3, 0x18(r30)
	  addi      r0, r3, 0x2C
	  stw       r0, 0x34(r30)
	  beq-      .loc_0x188
	  lis       r3, 0x804B
	  addic.    r0, r30, 0x18
	  addi      r3, r3, 0x1DAC
	  stw       r3, 0x18(r30)
	  addi      r0, r3, 0x2C
	  stw       r0, 0x34(r30)
	  beq-      .loc_0x188
	  lis       r3, 0x804B
	  addic.    r0, r30, 0x18
	  addi      r0, r3, 0x1D80
	  stw       r0, 0x18(r30)
	  beq-      .loc_0x188
	  lis       r4, 0x804B
	  addi      r3, r30, 0x18
	  subi      r0, r4, 0x5324
	  li        r4, 0
	  stw       r0, 0x18(r30)
	  bl        0x215778

	.loc_0x188:
	  extsh.    r0, r31
	  ble-      .loc_0x198
	  mr        r3, r30
	  bl        -0x1D7D6C

	.loc_0x198:
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
 * Address:	801FBE40
 * Size:	000008
 */
u32 PelletCarcass::Mgr::createShape(int, int) { return 0x0; }

/*
 * --INFO--
 * Address:	801FBE48
 * Size:	000008
 */
void PelletCarcass::Mgr::getMgrName(void)
{
	/*
	.loc_0x0:
	  subi      r3, r2, 0x4660
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801FBE50
 * Size:	000008
 */
u32 PelletCarcass::Mgr::getMgrID(void) { return 0x1; }

} // namespace Game

/*
 * --INFO--
 * Address:	801FBE58
 * Size:	000088
 */
void ObjectMgr<Game::PelletCarcass::Object>::~ObjectMgr()
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
	  subi      r4, r4, 0x2464
	  stw       r4, 0x0(r30)
	  addi      r0, r4, 0x2C
	  stw       r0, 0x1C(r30)
	  beq-      .loc_0x5C
	  lis       r4, 0x804C
	  subi      r0, r4, 0x2290
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x5C
	  lis       r5, 0x804B
	  li        r4, 0
	  subi      r0, r5, 0x5324
	  stw       r0, 0x0(r30)
	  bl        0x2156D8

	.loc_0x5C:
	  extsh.    r0, r31
	  ble-      .loc_0x6C
	  mr        r3, r30
	  bl        -0x1D7E0C

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
 * Address:	801FBEE0
 * Size:	00009C
 */
void resetMgrAndResources__Q24Game49FixedSizePelletMgr<
    Game::PelletCarcass::Object>
Fv(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x28(r12)
	  mtctr     r12
	  bctrl
	  li        r8, 0
	  li        r9, 0
	  mr        r7, r8
	  mr        r6, r8
	  mr        r5, r8
	  mr        r4, r8
	  b         .loc_0x68

	.loc_0x40:
	  lwz       r3, 0xC(r31)
	  stwx      r7, r3, r8
	  lwz       r3, 0x10(r31)
	  stwx      r6, r3, r8
	  lwz       r3, 0x14(r31)
	  stwx      r5, r3, r8
	  addi      r8, r8, 0x4
	  lwz       r3, 0x4C(r31)
	  stbx      r4, r3, r9
	  addi      r9, r9, 0x1

	.loc_0x68:
	  lwz       r0, 0x50(r31)
	  cmpw      r9, r0
	  blt+      .loc_0x40
	  lwz       r0, 0x48(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x88
	  li        r0, 0
	  stw       r0, 0x48(r31)

	.loc_0x88:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801FBF7C
 * Size:	000004
 */
void onCreateModel__Q24Game49FixedSizePelletMgr<Game::PelletCarcass::Object>
FPQ28SysShape5Model(void)
{
}

/*
 * --INFO--
 * Address:	801FBF80
 * Size:	00002C
 */
void birth__Q24Game49FixedSizePelletMgr<Game::PelletCarcass::Object> Fv(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwzu      r12, 0x70(r3)
	  lwz       r12, 0x7C(r12)
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
 * Address:	801FBFAC
 * Size:	00002C
 */
void doAnimation__Q24Game49FixedSizePelletMgr<Game::PelletCarcass::Object>
Fv(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwzu      r12, 0x70(r3)
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
 * Address:	801FBFD8
 * Size:	00002C
 */
void doEntry__Q24Game49FixedSizePelletMgr<Game::PelletCarcass::Object> Fv(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwzu      r12, 0x70(r3)
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
 * Address:	801FC004
 * Size:	00002C
 */
void doSetView__Q24Game49FixedSizePelletMgr<Game::PelletCarcass::Object>
Fi(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwzu      r12, 0x70(r3)
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
 * Address:	801FC030
 * Size:	00002C
 */
void doViewCalc__Q24Game49FixedSizePelletMgr<Game::PelletCarcass::Object>
Fv(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwzu      r12, 0x70(r3)
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
 * Address:	801FC05C
 * Size:	00002C
 */
void doSimulation__Q24Game49FixedSizePelletMgr<Game::PelletCarcass::Object>
Ff(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwzu      r12, 0x70(r3)
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
 * Address:	801FC088
 * Size:	00002C
 */
void doDirectDraw__Q24Game49FixedSizePelletMgr<Game::PelletCarcass::Object>
FR8Graphics(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwzu      r12, 0x70(r3)
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
 * Address:	801FC0B4
 * Size:	000024
 */
void kill__Q24Game49FixedSizePelletMgr<Game::PelletCarcass::Object>
FPQ24Game6Pellet(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  addi      r3, r3, 0x70
	  stw       r0, 0x14(r1)
	  bl        0xCC
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801FC0D8
 * Size:	00002C
 */
void getNext__Q24Game49FixedSizePelletMgr<Game::PelletCarcass::Object> FPv(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwzu      r12, 0x70(r3)
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
 * Address:	801FC104
 * Size:	00002C
 */
void getStart__Q24Game49FixedSizePelletMgr<Game::PelletCarcass::Object> Fv(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwzu      r12, 0x70(r3)
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
 * Address:	801FC130
 * Size:	000060
 */
void MonoObjectMgr<Game::PelletCarcass::Object>::birth()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        0x494
	  cmpwi     r3, -0x1
	  beq-      .loc_0x48
	  lwz       r6, 0x28(r31)
	  li        r0, 0
	  lwz       r4, 0x2C(r31)
	  mulli     r5, r3, 0x458
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
 * Address:	801FC190
 * Size:	000054
 */
void MonoObjectMgr<Game::PelletCarcass::Object>::kill(
    Game::PelletCarcass::Object*)
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
	  addi      r5, r5, 0x458
	  addi      r6, r6, 0x1
	  bdnz+     .loc_0x18
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801FC1E4
 * Size:	000040
 */
void MonoObjectMgr<Game::PelletCarcass::Object>::getNext(void*)
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
 * Address:	801FC224
 * Size:	000030
 */
void MonoObjectMgr<Game::PelletCarcass::Object>::getStart()
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
 * Address:	801FC254
 * Size:	000008
 */
void MonoObjectMgr<Game::PelletCarcass::Object>::getEnd()
{
	/*
	.loc_0x0:
	  lwz       r3, 0x24(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801FC25C
 * Size:	000010
 */
void MonoObjectMgr<Game::PelletCarcass::Object>::getAt(int)
{
	/*
	.loc_0x0:
	  mulli     r0, r4, 0x458
	  lwz       r3, 0x28(r3)
	  add       r3, r3, r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801FC26C
 * Size:	000008
 */
void MonoObjectMgr<Game::PelletCarcass::Object>::getTo()
{
	/*
	.loc_0x0:
	  lwz       r3, 0x24(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801FC274
 * Size:	000080
 */
void MonoObjectMgr<Game::PelletCarcass::Object>::doAnimation()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  li        r31, 0
	  stw       r30, 0x18(r1)
	  li        r30, 0
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  b         .loc_0x58

	.loc_0x28:
	  lwz       r3, 0x2C(r29)
	  lbzx      r0, r3, r30
	  cmplwi    r0, 0
	  bne-      .loc_0x50
	  lwz       r0, 0x28(r29)
	  add       r3, r0, r31
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x50:
	  addi      r31, r31, 0x458
	  addi      r30, r30, 0x1

	.loc_0x58:
	  lwz       r0, 0x24(r29)
	  cmpw      r30, r0
	  blt+      .loc_0x28
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
 * Address:	801FC2F4
 * Size:	000080
 */
void MonoObjectMgr<Game::PelletCarcass::Object>::doEntry()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  li        r31, 0
	  stw       r30, 0x18(r1)
	  li        r30, 0
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  b         .loc_0x58

	.loc_0x28:
	  lwz       r3, 0x2C(r29)
	  lbzx      r0, r3, r30
	  cmplwi    r0, 0
	  bne-      .loc_0x50
	  lwz       r0, 0x28(r29)
	  add       r3, r0, r31
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x40(r12)
	  mtctr     r12
	  bctrl

	.loc_0x50:
	  addi      r31, r31, 0x458
	  addi      r30, r30, 0x1

	.loc_0x58:
	  lwz       r0, 0x24(r29)
	  cmpw      r30, r0
	  blt+      .loc_0x28
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
 * Address:	801FC374
 * Size:	000090
 */
void MonoObjectMgr<Game::PelletCarcass::Object>::doSetView(int)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  li        r31, 0
	  stw       r30, 0x18(r1)
	  li        r30, 0
	  stw       r29, 0x14(r1)
	  mr        r29, r4
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  b         .loc_0x64

	.loc_0x30:
	  lwz       r3, 0x2C(r28)
	  lbzx      r0, r3, r30
	  cmplwi    r0, 0
	  bne-      .loc_0x5C
	  lwz       r0, 0x28(r28)
	  mr        r4, r29
	  add       r3, r0, r31
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x44(r12)
	  mtctr     r12
	  bctrl

	.loc_0x5C:
	  addi      r31, r31, 0x458
	  addi      r30, r30, 0x1

	.loc_0x64:
	  lwz       r0, 0x24(r28)
	  cmpw      r30, r0
	  blt+      .loc_0x30
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
 * Address:	801FC404
 * Size:	000080
 */
void MonoObjectMgr<Game::PelletCarcass::Object>::doViewCalc()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  li        r31, 0
	  stw       r30, 0x18(r1)
	  li        r30, 0
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  b         .loc_0x58

	.loc_0x28:
	  lwz       r3, 0x2C(r29)
	  lbzx      r0, r3, r30
	  cmplwi    r0, 0
	  bne-      .loc_0x50
	  lwz       r0, 0x28(r29)
	  add       r3, r0, r31
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x48(r12)
	  mtctr     r12
	  bctrl

	.loc_0x50:
	  addi      r31, r31, 0x458
	  addi      r30, r30, 0x1

	.loc_0x58:
	  lwz       r0, 0x24(r29)
	  cmpw      r30, r0
	  blt+      .loc_0x28
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
 * Address:	801FC484
 * Size:	000090
 */
void MonoObjectMgr<Game::PelletCarcass::Object>::doSimulation(float)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stfd      f31, 0x18(r1)
	  fmr       f31, f1
	  stw       r31, 0x14(r1)
	  li        r31, 0
	  stw       r30, 0x10(r1)
	  li        r30, 0
	  stw       r29, 0xC(r1)
	  mr        r29, r3
	  b         .loc_0x64

	.loc_0x30:
	  lwz       r3, 0x2C(r29)
	  lbzx      r0, r3, r30
	  cmplwi    r0, 0
	  bne-      .loc_0x5C
	  lwz       r0, 0x28(r29)
	  fmr       f1, f31
	  add       r3, r0, r31
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x4C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x5C:
	  addi      r31, r31, 0x458
	  addi      r30, r30, 0x1

	.loc_0x64:
	  lwz       r0, 0x24(r29)
	  cmpw      r30, r0
	  blt+      .loc_0x30
	  lwz       r0, 0x24(r1)
	  lfd       f31, 0x18(r1)
	  lwz       r31, 0x14(r1)
	  lwz       r30, 0x10(r1)
	  lwz       r29, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801FC514
 * Size:	000090
 */
void MonoObjectMgr<Game::PelletCarcass::Object>::doDirectDraw(Graphics&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  li        r31, 0
	  stw       r30, 0x18(r1)
	  li        r30, 0
	  stw       r29, 0x14(r1)
	  mr        r29, r4
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  b         .loc_0x64

	.loc_0x30:
	  lwz       r3, 0x2C(r28)
	  lbzx      r0, r3, r30
	  cmplwi    r0, 0
	  bne-      .loc_0x5C
	  lwz       r0, 0x28(r28)
	  mr        r4, r29
	  add       r3, r0, r31
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x50(r12)
	  mtctr     r12
	  bctrl

	.loc_0x5C:
	  addi      r31, r31, 0x458
	  addi      r30, r30, 0x1

	.loc_0x64:
	  lwz       r0, 0x24(r28)
	  cmpw      r30, r0
	  blt+      .loc_0x30
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
 * Address:	801FC5A4
 * Size:	000030
 */
void MonoObjectMgr<Game::PelletCarcass::Object>::clearMgr()
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
 * Address:	801FC5D4
 * Size:	000004
 */
void MonoObjectMgr<Game::PelletCarcass::Object>::onAlloc() { }

/*
 * --INFO--
 * Address:	801FC5D8
 * Size:	00003C
 */
void MonoObjectMgr<Game::PelletCarcass::Object>::getEmptyIndex()
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
 * Address:	801FC614
 * Size:	000010
 */
void MonoObjectMgr<Game::PelletCarcass::Object>::get(void*)
{
	/*
	.loc_0x0:
	  mulli     r0, r4, 0x458
	  lwz       r3, 0x28(r3)
	  add       r3, r3, r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801FC624
 * Size:	00002C
 */
void Container<Game::PelletCarcass::Object>::getObject(void*)
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
 * Address:	801FC650
 * Size:	000008
 */
u32 Container<Game::PelletCarcass::Object>::getAt(int) { return 0x0; }

/*
 * --INFO--
 * Address:	801FC658
 * Size:	000008
 */
u32 Container<Game::PelletCarcass::Object>::getTo() { return 0x0; }

/*
 * --INFO--
 * Address:	801FC660
 * Size:	0001F4
 */
void ObjectMgr<Game::PelletCarcass::Object>::doDirectDraw(Graphics&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r5, 0x804C
	  stw       r0, 0x24(r1)
	  li        r0, 0
	  subi      r5, r5, 0x2264
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
 * Address:	801FC854
 * Size:	00004C
 */
void Iterator<Game::PelletCarcass::Object>::isDone()
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
 * Address:	801FC8A0
 * Size:	0001F4
 */
void ObjectMgr<Game::PelletCarcass::Object>::doSimulation(float)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r4, 0x804C
	  stw       r0, 0x24(r1)
	  li        r0, 0
	  subi      r4, r4, 0x2264
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
 * Address:	801FCA94
 * Size:	0001E4
 */
void ObjectMgr<Game::PelletCarcass::Object>::doViewCalc()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r4, 0x804C
	  stw       r0, 0x24(r1)
	  li        r0, 0
	  subi      r4, r4, 0x2264
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
 * Address:	801FCC78
 * Size:	0001F4
 */
void ObjectMgr<Game::PelletCarcass::Object>::doSetView(int)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r5, 0x804C
	  stw       r0, 0x24(r1)
	  li        r0, 0
	  subi      r5, r5, 0x2264
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
 * Address:	801FCE6C
 * Size:	0001E4
 */
void ObjectMgr<Game::PelletCarcass::Object>::doEntry()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r4, 0x804C
	  stw       r0, 0x24(r1)
	  li        r0, 0
	  subi      r4, r4, 0x2264
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
 * Address:	801FD050
 * Size:	0001E4
 */
void ObjectMgr<Game::PelletCarcass::Object>::doAnimation()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r4, 0x804C
	  stw       r0, 0x24(r1)
	  li        r0, 0
	  subi      r4, r4, 0x2264
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
 * Address:	801FD234
 * Size:	00009C
 */
void MonoObjectMgr<Game::PelletCarcass::Object>::MonoObjectMgr()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        0x214148
	  lis       r4, 0x804B
	  lis       r3, 0x804C
	  subi      r0, r4, 0x5324
	  lis       r6, 0x804B
	  stw       r0, 0x0(r31)
	  subi      r0, r3, 0x2290
	  lis       r4, 0x804C
	  lis       r3, 0x804C
	  stw       r0, 0x0(r31)
	  li        r8, 0
	  subi      r7, r4, 0x2464
	  subi      r5, r3, 0x23E8
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
 * Address:	801FD2D0
 * Size:	000020
 */
void getFlag__Q24Game49FixedSizePelletMgr<Game::PelletCarcass::Object>
FPQ24Game6Pellet(void)
{
	/*
	.loc_0x0:
	  cmplwi    r4, 0
	  beq-      .loc_0x18
	  lwz       r3, 0x9C(r3)
	  lwz       r0, 0x440(r4)
	  lbzx      r3, r3, r0
	  blr

	.loc_0x18:
	  li        r3, -0x1
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801FD2F0
 * Size:	00001C
 */
void setFromTeki__Q24Game49FixedSizePelletMgr<Game::PelletCarcass::Object>
FPQ24Game6Pellet(void)
{
	/*
	.loc_0x0:
	  cmplwi    r4, 0
	  beqlr-
	  lwz       r3, 0x9C(r3)
	  li        r5, 0x65
	  lwz       r0, 0x440(r4)
	  stbx      r5, r3, r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801FD30C
 * Size:	00001C
 */
void setRevival__Q24Game49FixedSizePelletMgr<Game::PelletCarcass::Object>
FPQ24Game6Pellet(void)
{
	/*
	.loc_0x0:
	  cmplwi    r4, 0
	  beqlr-
	  lwz       r3, 0x9C(r3)
	  li        r5, 0x64
	  lwz       r0, 0x440(r4)
	  stbx      r5, r3, r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801FD328
 * Size:	00001C
 */
void setComeAlive__Q24Game49FixedSizePelletMgr<Game::PelletCarcass::Object>
FPQ24Game6Pellet(void)
{
	/*
	.loc_0x0:
	  cmplwi    r4, 0
	  beqlr-
	  lwz       r3, 0x9C(r3)
	  li        r5, 0
	  lwz       r0, 0x440(r4)
	  stbx      r5, r3, r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801FD344
 * Size:	000010
 */
void setComeAlive__Q24Game49FixedSizePelletMgr<Game::PelletCarcass::Object>
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
 * Address:	801FD354
 * Size:	00002C
 */
void getEnd__Q24Game49FixedSizePelletMgr<Game::PelletCarcass::Object> Fv(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwzu      r12, 0x70(r3)
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
 * Address:	801FD380
 * Size:	00002C
 */
void get__Q24Game49FixedSizePelletMgr<Game::PelletCarcass::Object> FPv(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwzu      r12, 0x70(r3)
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
 * Address:	801FD3AC
 * Size:	00002C
 */
void getObjectPtr__Q24Game49FixedSizePelletMgr<Game::PelletCarcass::Object>
FPv(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC4(r12)
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
 * Address:	801FD3D8
 * Size:	000090
 */
void birthFromTeki__Q24Game49FixedSizePelletMgr<Game::PelletCarcass::Object>
FPQ24Game12PelletConfig(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  li        r31, 0
	  stw       r30, 0x18(r1)
	  mr        r30, r4
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  b         .loc_0x64

	.loc_0x28:
	  lwz       r3, 0x9C(r29)
	  lbzx      r0, r3, r31
	  cmplwi    r0, 0x65
	  bne-      .loc_0x60
	  addi      r3, r29, 0x70
	  mr        r4, r31
	  lwz       r12, 0x70(r29)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x35C(r3)
	  cmplw     r0, r30
	  bne-      .loc_0x60
	  b         .loc_0x74

	.loc_0x60:
	  addi      r31, r31, 0x1

	.loc_0x64:
	  lwz       r0, 0x94(r29)
	  cmpw      r31, r0
	  blt+      .loc_0x28
	  li        r3, 0

	.loc_0x74:
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
 * Address:	801FD468
 * Size:	000080
 */
void alloc__Q24Game49FixedSizePelletMgr<Game::PelletCarcass::Object> Fi(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  addi      r3, r30, 0x70
	  bl        0x2C0
	  mr        r3, r30
	  bl        0x254
	  li        r31, 0
	  b         .loc_0x5C

	.loc_0x30:
	  addi      r3, r30, 0x70
	  mr        r4, r31
	  lwz       r12, 0x70(r30)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  addi      r31, r31, 0x1

	.loc_0x5C:
	  lwz       r0, 0x94(r30)
	  cmpw      r31, r0
	  blt+      .loc_0x30
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
 * Address:	801FD4E8
 * Size:	000038
 */
void Iterator<Game::PelletCarcass::Object>::operator*()
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
 * Address:	801FD520
 * Size:	0000E4
 */
void Iterator<Game::PelletCarcass::Object>::next()
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
 * Address:	801FD604
 * Size:	0000DC
 */
void Iterator<Game::PelletCarcass::Object>::first()
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
 * Address:	801FD6E0
 * Size:	000064
 */
void onAlloc__Q24Game49FixedSizePelletMgr<Game::PelletCarcass::Object> Fv(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  li        r31, 0
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  b         .loc_0x40

	.loc_0x20:
	  addi      r3, r30, 0x70
	  mr        r4, r31
	  lwz       r12, 0x70(r30)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  stw       r31, 0x440(r3)
	  addi      r31, r31, 0x1

	.loc_0x40:
	  lwz       r0, 0x94(r30)
	  cmpw      r31, r0
	  blt+      .loc_0x20
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
 * Address:	801FD744
 * Size:	000188
 */
void MonoObjectMgr<Game::PelletCarcass::Object>::alloc(int)
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
	  mulli     r3, r29, 0x458
	  stw       r28, 0x10(r1)
	  addi      r3, r3, 0x10
	  bl        -0x1D97C8
	  lis       r4, 0x8020
	  mr        r7, r29
	  subi      r4, r4, 0x2734
	  li        r5, 0
	  li        r6, 0x458
	  bl        -0x13BD9C
	  stw       r3, 0x28(r30)
	  li        r0, 0
	  mr        r3, r29
	  stw       r31, 0x24(r30)
	  stw       r0, 0x20(r30)
	  bl        -0x1D97F8
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
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  addi      r29, r29, 0x458
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

namespace Game {

/*
 * --INFO--
 * Address:	801FD8CC
 * Size:	00004C
 */
PelletCarcass::Object::Object(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x97260
	  lis       r4, 0x804C
	  mr        r3, r31
	  subi      r5, r4, 0x224C
	  stw       r5, 0x0(r31)
	  addi      r4, r5, 0x1B4
	  addi      r0, r5, 0x1C0
	  stw       r4, 0x314(r31)
	  stw       r0, 0x318(r31)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801FD918
 * Size:	000008
 */
u32 PelletCarcass::Object::getKind(void) { return 0x1; }

/*
 * --INFO--
 * Address:	801FD920
 * Size:	000008
 */
void @84 @__dt__Q24Game49FixedSizePelletMgr<Game::PelletCarcass::Object>
Fv(void)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x54
	  b         -0x1FA8
	*/
}

} // namespace Game

/*
 * --INFO--
 * Address:	801FD928
 * Size:	000008
 */
void MonoObjectMgr<Game::PelletCarcass::Object>::@28 @resetMgr()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x1C
	  b         -0x8D72C
	*/
}

/*
 * --INFO--
 * Address:	801FD930
 * Size:	000008
 */
void MonoObjectMgr<Game::PelletCarcass::Object>::@28 @doDirectDraw(Graphics&)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x1C
	  b         -0x1420
	*/
}

/*
 * --INFO--
 * Address:	801FD938
 * Size:	000008
 */
void MonoObjectMgr<Game::PelletCarcass::Object>::@28 @doSimulation(float)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x1C
	  b         -0x14B8
	*/
}

/*
 * --INFO--
 * Address:	801FD940
 * Size:	000008
 */
void MonoObjectMgr<Game::PelletCarcass::Object>::@28 @doViewCalc()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x1C
	  b         -0x1540
	*/
}

/*
 * --INFO--
 * Address:	801FD948
 * Size:	000008
 */
void MonoObjectMgr<Game::PelletCarcass::Object>::@28 @doSetView(int)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x1C
	  b         -0x15D8
	*/
}

/*
 * --INFO--
 * Address:	801FD950
 * Size:	000008
 */
void MonoObjectMgr<Game::PelletCarcass::Object>::@28 @doEntry()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x1C
	  b         -0x1660
	*/
}

/*
 * --INFO--
 * Address:	801FD958
 * Size:	000008
 */
void MonoObjectMgr<Game::PelletCarcass::Object>::@28 @doAnimation()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x1C
	  b         -0x16E8
	*/
}

/*
 * --INFO--
 * Address:	801FD960
 * Size:	000008
 */
void ObjectMgr<Game::PelletCarcass::Object>::@28 @doDirectDraw(Graphics&)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x1C
	  b         -0x1304
	*/
}

/*
 * --INFO--
 * Address:	801FD968
 * Size:	000008
 */
void ObjectMgr<Game::PelletCarcass::Object>::@28 @doSimulation(float)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x1C
	  b         -0x10CC
	*/
}

/*
 * --INFO--
 * Address:	801FD970
 * Size:	000008
 */
void ObjectMgr<Game::PelletCarcass::Object>::@28 @doViewCalc()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x1C
	  b         -0xEE0
	*/
}

/*
 * --INFO--
 * Address:	801FD978
 * Size:	000008
 */
void ObjectMgr<Game::PelletCarcass::Object>::@28 @doSetView(int)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x1C
	  b         -0xD04
	*/
}

/*
 * --INFO--
 * Address:	801FD980
 * Size:	000008
 */
void ObjectMgr<Game::PelletCarcass::Object>::@28 @doEntry()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x1C
	  b         -0xB18
	*/
}

/*
 * --INFO--
 * Address:	801FD988
 * Size:	000008
 */
void ObjectMgr<Game::PelletCarcass::Object>::@28 @doAnimation()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x1C
	  b         -0x93C
	*/
}

/*
 * --INFO--
 * Address:	801FD990
 * Size:	000008
 */
void @84 @getEnd__Q24Game49FixedSizePelletMgr<Game::PelletCarcass::Object>
Fv(void)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x54
	  b         -0x640
	*/
}

/*
 * --INFO--
 * Address:	801FD998
 * Size:	000008
 */
void @84 @getStart__Q24Game49FixedSizePelletMgr<Game::PelletCarcass::Object>
Fv(void)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x54
	  b         -0x1898
	*/
}

/*
 * --INFO--
 * Address:	801FD9A0
 * Size:	000008
 */
void @84 @getNext__Q24Game49FixedSizePelletMgr<Game::PelletCarcass::Object>
FPv(void)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x54
	  b         -0x18CC
	*/
}

/*
 * --INFO--
 * Address:	801FD9A8
 * Size:	000008
 */
void @84 @get__Q24Game49FixedSizePelletMgr<Game::PelletCarcass::Object>
FPv(void)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x54
	  b         -0x62C
	*/
}

/*
 * --INFO--
 * Address:	801FD9B0
 * Size:	000008
 */
@84 @Game::PelletCarcass::Mgr::~Mgr(void)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x54
	  b         -0x1D28
	*/
}
