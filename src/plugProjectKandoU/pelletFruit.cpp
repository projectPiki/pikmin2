#include "types.h"

namespace Game {

/*
 * --INFO--
 * Address:	801FD9B8
 * Size:	000070
 */
void PelletFruit::Object::do_onInit(Game::CreatureInitArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r4, -0x6C18(r13)
	  lwz       r0, 0x44(r4)
	  cmpwi     r0, 0
	  bne-      .loc_0x54
	  lwz       r3, 0x58(r4)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x7C(r12)
	  mtctr     r12
	  bctrl
	  cmplwi    r3, 0
	  beq-      .loc_0x54
	  lwz       r3, -0x6B88(r13)
	  lwz       r3, 0x8C(r3)
	  lfs       f0, 0x1C8(r3)
	  stfs      f0, 0x458(r31)
	  b         .loc_0x5C

	.loc_0x54:
	  lfs       f0, -0x4658(r2)
	  stfs      f0, 0x458(r31)

	.loc_0x5C:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801FDA28
 * Size:	000180
 */
void PelletFruit::Object::do_update(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  mflr      r0
	  stw       r0, 0x54(r1)
	  stw       r31, 0x4C(r1)
	  mr        r31, r3
	  lwz       r0, 0xF0(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x16C
	  lwz       r0, 0xB8(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x16C
	  bl        -0x952B8
	  cmpwi     r3, 0x1
	  beq-      .loc_0x16C
	  lwz       r3, -0x6514(r13)
	  lfs       f2, 0x458(r31)
	  lfs       f1, 0x54(r3)
	  lfs       f0, -0x4654(r2)
	  fsubs     f1, f2, f1
	  stfs      f1, 0x458(r31)
	  lfs       f1, 0x458(r31)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x16C
	  mr        r4, r31
	  addi      r3, r1, 0x8
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x8(r1)
	  lis       r3, 0x804B
	  lfs       f1, 0xC(r1)
	  subi      r0, r3, 0x5814
	  lfs       f0, 0x10(r1)
	  stw       r0, 0x34(r1)
	  stfs      f2, 0x38(r1)
	  stfs      f1, 0x3C(r1)
	  stfs      f0, 0x40(r1)
	  lhz       r0, 0x43E(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0xF8
	  lis       r3, 0x804B
	  li        r5, 0
	  subi      r0, r3, 0x5808
	  lis       r3, 0x804E
	  stw       r0, 0x24(r1)
	  addi      r0, r3, 0x6A64
	  lis       r3, 0x804B
	  li        r4, 0x65
	  stw       r0, 0x24(r1)
	  addi      r0, r3, 0x2288
	  li        r6, 0x66
	  addi      r3, r1, 0x24
	  sth       r4, 0x28(r1)
	  addi      r4, r1, 0x34
	  sth       r6, 0x2A(r1)
	  stw       r5, 0x2C(r1)
	  stw       r5, 0x30(r1)
	  stw       r0, 0x24(r1)
	  bl        0x1B14FC
	  b         .loc_0x144

	.loc_0xF8:
	  lis       r3, 0x804B
	  li        r5, 0
	  subi      r0, r3, 0x5808
	  lis       r3, 0x804E
	  stw       r0, 0x14(r1)
	  addi      r0, r3, 0x6A64
	  lis       r3, 0x804B
	  li        r4, 0x63
	  stw       r0, 0x14(r1)
	  addi      r0, r3, 0x2274
	  li        r6, 0x64
	  addi      r3, r1, 0x14
	  sth       r4, 0x18(r1)
	  addi      r4, r1, 0x34
	  sth       r6, 0x1A(r1)
	  stw       r5, 0x1C(r1)
	  stw       r5, 0x20(r1)
	  stw       r0, 0x14(r1)
	  bl        0x1B14AC

	.loc_0x144:
	  lwz       r3, 0x330(r31)
	  li        r4, 0x3842
	  li        r5, 0
	  lwz       r12, 0x28(r3)
	  lwz       r12, 0x7C(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  li        r4, 0
	  bl        -0xC2AA0

	.loc_0x16C:
	  lwz       r0, 0x54(r1)
	  lwz       r31, 0x4C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801FDBA8
 * Size:	00011C
 */
void PelletFruit::Object::changeMaterial(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  li        r8, 0
	  li        r5, 0xC0
	  stw       r0, 0x44(r1)
	  li        r12, 0x5C
	  li        r11, 0x74
	  li        r10, 0x96
	  stmw      r25, 0x24(r1)
	  li        r30, 0xFF
	  li        r29, 0x44
	  mr        r31, r3
	  li        r9, 0x6E
	  li        r7, 0x14
	  li        r6, 0x28
	  stb       r5, 0x10(r1)
	  addi      r27, r1, 0x11
	  addi      r26, r1, 0x12
	  stb       r29, 0x11(r1)
	  addi      r25, r1, 0x13
	  addi      r5, r1, 0x8
	  stb       r29, 0x12(r1)
	  lwz       r3, 0x174(r3)
	  lhz       r0, 0x43E(r31)
	  lwz       r3, 0x8(r3)
	  stb       r30, 0x13(r1)
	  rlwinm    r0,r0,2,0,29
	  lwz       r3, 0x4(r3)
	  stb       r12, 0x14(r1)
	  lwz       r4, 0x60(r3)
	  addi      r3, r1, 0x10
	  stb       r29, 0x15(r1)
	  lwz       r28, 0x0(r4)
	  li        r4, 0
	  stb       r11, 0x16(r1)
	  stb       r30, 0x17(r1)
	  stb       r10, 0x18(r1)
	  stb       r9, 0x19(r1)
	  stb       r8, 0x1A(r1)
	  stb       r30, 0x1B(r1)
	  stb       r7, 0x1C(r1)
	  stb       r8, 0x1D(r1)
	  stb       r6, 0x1E(r1)
	  stb       r30, 0x1F(r1)
	  lbzx      r6, r27, r0
	  lbzx      r7, r26, r0
	  lbzx      r8, r25, r0
	  lbzx      r0, r3, r0
	  sth       r6, 0xA(r1)
	  sth       r0, 0x8(r1)
	  sth       r7, 0xC(r1)
	  sth       r8, 0xE(r1)
	  lwz       r3, 0x2C(r28)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x174(r31)
	  lwz       r3, 0x8(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x174(r31)
	  lwz       r3, 0x8(r3)
	  bl        -0x197040
	  lmw       r25, 0x24(r1)
	  lwz       r0, 0x44(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801FDCC4
 * Size:	0000B0
 */
PelletFruit::Mgr::Mgr(void)
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
	  li        r5, 0x2
	  bl        -0x92338
	  addi      r31, r30, 0x54
	  mr        r3, r31
	  bl        0x21368C
	  lis       r3, 0x804B
	  lis       r4, 0x804C
	  subi      r0, r3, 0x5324
	  lis       r3, 0x804C
	  stw       r0, 0x0(r31)
	  subi      r0, r4, 0x1D84
	  subi      r4, r3, 0x1E50
	  li        r5, 0
	  stw       r0, 0x0(r31)
	  addi      r0, r4, 0x98
	  addi      r3, r30, 0x70
	  stb       r5, 0x18(r31)
	  stw       r4, 0x0(r30)
	  stw       r0, 0x54(r30)
	  bl        0x1980
	  lis       r4, 0x804C
	  mr        r3, r30
	  subi      r4, r4, 0x2024
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
 * Address:	801FDD74
 * Size:	00019C
 */
void __dt__Q24Game47FixedSizePelletMgr<Game::PelletFruit::Object> Fv(void)
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
	  subi      r3, r3, 0x1E50
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x98
	  stw       r0, 0x54(r30)
	  beq-      .loc_0xA0
	  lis       r3, 0x804C
	  addic.    r0, r30, 0x70
	  subi      r3, r3, 0x1EDC
	  stw       r3, 0x70(r30)
	  addi      r0, r3, 0x2C
	  stw       r0, 0x8C(r30)
	  beq-      .loc_0xA0
	  lis       r3, 0x804C
	  addic.    r0, r30, 0x70
	  subi      r3, r3, 0x1F58
	  stw       r3, 0x70(r30)
	  addi      r0, r3, 0x2C
	  stw       r0, 0x8C(r30)
	  beq-      .loc_0xA0
	  lis       r3, 0x804C
	  addic.    r0, r30, 0x70
	  subi      r0, r3, 0x1D84
	  stw       r0, 0x70(r30)
	  beq-      .loc_0xA0
	  lis       r4, 0x804B
	  addi      r3, r30, 0x70
	  subi      r0, r4, 0x5324
	  li        r4, 0
	  stw       r0, 0x70(r30)
	  bl        0x213778

	.loc_0xA0:
	  addic.    r0, r30, 0x54
	  beq-      .loc_0xD4
	  lis       r3, 0x804C
	  addic.    r0, r30, 0x54
	  subi      r0, r3, 0x1D84
	  stw       r0, 0x54(r30)
	  beq-      .loc_0xD4
	  lis       r4, 0x804B
	  addi      r3, r30, 0x54
	  subi      r0, r4, 0x5324
	  li        r4, 0
	  stw       r0, 0x54(r30)
	  bl        0x213744

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
	  bl        0x2136A8

	.loc_0x170:
	  extsh.    r0, r31
	  ble-      .loc_0x180
	  mr        r3, r30
	  bl        -0x1D9E3C

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
 * Address:	801FDF10
 * Size:	0000A0
 */
void MonoObjectMgr<Game::PelletFruit::Object>::~MonoObjectMgr()
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
	  subi      r4, r4, 0x1EDC
	  stw       r4, 0x0(r30)
	  addi      r0, r4, 0x2C
	  stw       r0, 0x1C(r30)
	  beq-      .loc_0x74
	  lis       r4, 0x804C
	  subi      r4, r4, 0x1F58
	  stw       r4, 0x0(r30)
	  addi      r0, r4, 0x2C
	  stw       r0, 0x1C(r30)
	  beq-      .loc_0x74
	  lis       r4, 0x804C
	  subi      r0, r4, 0x1D84
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x74
	  lis       r5, 0x804B
	  li        r4, 0
	  subi      r0, r5, 0x5324
	  stw       r0, 0x0(r30)
	  bl        0x213608

	.loc_0x74:
	  extsh.    r0, r31
	  ble-      .loc_0x84
	  mr        r3, r30
	  bl        -0x1D9EDC

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
 * Address:	801FDFB0
 * Size:	000070
 */
void Container<Game::PelletFruit::Object>::~Container()
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
	  subi      r0, r4, 0x1D84
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x44
	  lis       r5, 0x804B
	  li        r4, 0
	  subi      r0, r5, 0x5324
	  stw       r0, 0x0(r30)
	  bl        0x213598

	.loc_0x44:
	  extsh.    r0, r31
	  ble-      .loc_0x54
	  mr        r3, r30
	  bl        -0x1D9F4C

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
 * Address:	801FE020
 * Size:	00008C
 */
void PelletFruit::Mgr::setupResources(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r4, 0x8048
	  li        r5, 0
	  stw       r0, 0x14(r1)
	  addi      r4, r4, 0x1B40
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r3, -0x6514(r13)
	  bl        0x225318
	  mr        r3, r31
	  li        r4, 0x40
	  bl        0x18A4
	  mr        r3, r31
	  bl        -0x92224
	  lwz       r3, 0xC(r31)
	  lis       r4, 0x4
	  lwz       r3, 0x0(r3)
	  bl        -0x17A790
	  mr        r3, r31
	  li        r4, 0x40
	  lis       r5, 0x8
	  bl        -0x91A8C
	  addi      r3, r31, 0x18
	  li        r4, 0x80
	  bl        -0x30C0
	  lis       r4, 0x8048
	  lwz       r3, -0x6514(r13)
	  addi      r4, r4, 0x1B40
	  bl        0x2252D0
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801FE0AC
 * Size:	00006C
 */
void PelletFruit::Mgr::onCreateModel(SysShape::Model*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  lis       r4, 0x100
	  lwz       r3, 0x8(r31)
	  bl        -0x1979F0
	  lwz       r3, 0x8(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x8(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x8(r31)
	  bl        -0x1977D4
	  lwz       r3, 0x8(r31)
	  bl        -0x19790C
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801FE118
 * Size:	0001B4
 */
PelletFruit::Mgr::~Mgr(void)
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
	  subi      r3, r3, 0x2024
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x98
	  stw       r0, 0x54(r30)
	  beq-      .loc_0x188
	  lis       r3, 0x804C
	  addic.    r0, r30, 0x70
	  subi      r3, r3, 0x1E50
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x98
	  stw       r0, 0x54(r30)
	  beq-      .loc_0xB8
	  lis       r3, 0x804C
	  addic.    r0, r30, 0x70
	  subi      r3, r3, 0x1EDC
	  stw       r3, 0x70(r30)
	  addi      r0, r3, 0x2C
	  stw       r0, 0x8C(r30)
	  beq-      .loc_0xB8
	  lis       r3, 0x804C
	  addic.    r0, r30, 0x70
	  subi      r3, r3, 0x1F58
	  stw       r3, 0x70(r30)
	  addi      r0, r3, 0x2C
	  stw       r0, 0x8C(r30)
	  beq-      .loc_0xB8
	  lis       r3, 0x804C
	  addic.    r0, r30, 0x70
	  subi      r0, r3, 0x1D84
	  stw       r0, 0x70(r30)
	  beq-      .loc_0xB8
	  lis       r4, 0x804B
	  addi      r3, r30, 0x70
	  subi      r0, r4, 0x5324
	  li        r4, 0
	  stw       r0, 0x70(r30)
	  bl        0x2133BC

	.loc_0xB8:
	  addic.    r0, r30, 0x54
	  beq-      .loc_0xEC
	  lis       r3, 0x804C
	  addic.    r0, r30, 0x54
	  subi      r0, r3, 0x1D84
	  stw       r0, 0x54(r30)
	  beq-      .loc_0xEC
	  lis       r4, 0x804B
	  addi      r3, r30, 0x54
	  subi      r0, r4, 0x5324
	  li        r4, 0
	  stw       r0, 0x54(r30)
	  bl        0x213388

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
	  bl        0x2132EC

	.loc_0x188:
	  extsh.    r0, r31
	  ble-      .loc_0x198
	  mr        r3, r30
	  bl        -0x1DA1F8

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
 * Address:	801FE2CC
 * Size:	000008
 */
void PelletFruit::Mgr::getMgrName(void)
{
	/*
	.loc_0x0:
	  subi      r3, r2, 0x4650
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801FE2D4
 * Size:	000008
 */
u32 PelletFruit::Mgr::getMgrID(void) { return 0x2; }

} // namespace Game

/*
 * --INFO--
 * Address:	801FE2DC
 * Size:	000088
 */
void ObjectMgr<Game::PelletFruit::Object>::~ObjectMgr()
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
	  subi      r4, r4, 0x1F58
	  stw       r4, 0x0(r30)
	  addi      r0, r4, 0x2C
	  stw       r0, 0x1C(r30)
	  beq-      .loc_0x5C
	  lis       r4, 0x804C
	  subi      r0, r4, 0x1D84
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x5C
	  lis       r5, 0x804B
	  li        r4, 0
	  subi      r0, r5, 0x5324
	  stw       r0, 0x0(r30)
	  bl        0x213254

	.loc_0x5C:
	  extsh.    r0, r31
	  ble-      .loc_0x6C
	  mr        r3, r30
	  bl        -0x1DA290

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

namespace Game {

/*
 * --INFO--
 * Address:	801FE364
 * Size:	000008
 */
u32 PelletFruit::Object::getKind(void) { return 0x2; }

/*
 * --INFO--
 * Address:	801FE36C
 * Size:	00009C
 */
void
    resetMgrAndResources__Q24Game47FixedSizePelletMgr<Game::PelletFruit::Object>
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
 * Address:	801FE408
 * Size:	000004
 */
void onCreateModel__Q24Game47FixedSizePelletMgr<Game::PelletFruit::Object>
FPQ28SysShape5Model(void)
{
}

} // namespace Game

/*
 * --INFO--
 * Address:	801FE40C
 * Size:	00002C
 */
void birth__Q24Game47FixedSizePelletMgr<Game::PelletFruit::Object> Fv(void)
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
 * Address:	801FE438
 * Size:	00002C
 */
void doAnimation__Q24Game47FixedSizePelletMgr<Game::PelletFruit::Object>
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
 * Address:	801FE464
 * Size:	00002C
 */
void doEntry__Q24Game47FixedSizePelletMgr<Game::PelletFruit::Object> Fv(void)
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
 * Address:	801FE490
 * Size:	00002C
 */
void doSetView__Q24Game47FixedSizePelletMgr<Game::PelletFruit::Object> Fi(void)
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
 * Address:	801FE4BC
 * Size:	00002C
 */
void doViewCalc__Q24Game47FixedSizePelletMgr<Game::PelletFruit::Object> Fv(void)
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
 * Address:	801FE4E8
 * Size:	00002C
 */
void doSimulation__Q24Game47FixedSizePelletMgr<Game::PelletFruit::Object>
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
 * Address:	801FE514
 * Size:	00002C
 */
void doDirectDraw__Q24Game47FixedSizePelletMgr<Game::PelletFruit::Object>
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
 * Address:	801FE540
 * Size:	000024
 */
void kill__Q24Game47FixedSizePelletMgr<Game::PelletFruit::Object>
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
 * Address:	801FE564
 * Size:	00002C
 */
void getNext__Q24Game47FixedSizePelletMgr<Game::PelletFruit::Object> FPv(void)
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
 * Address:	801FE590
 * Size:	00002C
 */
void getStart__Q24Game47FixedSizePelletMgr<Game::PelletFruit::Object> Fv(void)
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
 * Address:	801FE5BC
 * Size:	000060
 */
void MonoObjectMgr<Game::PelletFruit::Object>::birth()
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
	  mulli     r5, r3, 0x45C
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
 * Address:	801FE61C
 * Size:	000054
 */
void MonoObjectMgr<Game::PelletFruit::Object>::kill(Game::PelletFruit::Object*)
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
	  addi      r5, r5, 0x45C
	  addi      r6, r6, 0x1
	  bdnz+     .loc_0x18
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801FE670
 * Size:	000040
 */
void MonoObjectMgr<Game::PelletFruit::Object>::getNext(void*)
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
 * Address:	801FE6B0
 * Size:	000030
 */
void MonoObjectMgr<Game::PelletFruit::Object>::getStart()
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
 * Address:	801FE6E0
 * Size:	000008
 */
void MonoObjectMgr<Game::PelletFruit::Object>::getEnd()
{
	/*
	.loc_0x0:
	  lwz       r3, 0x24(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801FE6E8
 * Size:	000010
 */
void MonoObjectMgr<Game::PelletFruit::Object>::getAt(int)
{
	/*
	.loc_0x0:
	  mulli     r0, r4, 0x45C
	  lwz       r3, 0x28(r3)
	  add       r3, r3, r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801FE6F8
 * Size:	000008
 */
void MonoObjectMgr<Game::PelletFruit::Object>::getTo()
{
	/*
	.loc_0x0:
	  lwz       r3, 0x24(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801FE700
 * Size:	000080
 */
void MonoObjectMgr<Game::PelletFruit::Object>::doAnimation()
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
	  addi      r31, r31, 0x45C
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
 * Address:	801FE780
 * Size:	000080
 */
void MonoObjectMgr<Game::PelletFruit::Object>::doEntry()
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
	  addi      r31, r31, 0x45C
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
 * Address:	801FE800
 * Size:	000090
 */
void MonoObjectMgr<Game::PelletFruit::Object>::doSetView(int)
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
	  addi      r31, r31, 0x45C
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
 * Address:	801FE890
 * Size:	000080
 */
void MonoObjectMgr<Game::PelletFruit::Object>::doViewCalc()
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
	  addi      r31, r31, 0x45C
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
 * Address:	801FE910
 * Size:	000090
 */
void MonoObjectMgr<Game::PelletFruit::Object>::doSimulation(float)
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
	  addi      r31, r31, 0x45C
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
 * Address:	801FE9A0
 * Size:	000090
 */
void MonoObjectMgr<Game::PelletFruit::Object>::doDirectDraw(Graphics&)
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
	  addi      r31, r31, 0x45C
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
 * Address:	801FEA30
 * Size:	000030
 */
void MonoObjectMgr<Game::PelletFruit::Object>::clearMgr()
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
 * Address:	801FEA60
 * Size:	000004
 */
void MonoObjectMgr<Game::PelletFruit::Object>::onAlloc() { }

/*
 * --INFO--
 * Address:	801FEA64
 * Size:	00003C
 */
void MonoObjectMgr<Game::PelletFruit::Object>::getEmptyIndex()
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
 * Address:	801FEAA0
 * Size:	000010
 */
void MonoObjectMgr<Game::PelletFruit::Object>::get(void*)
{
	/*
	.loc_0x0:
	  mulli     r0, r4, 0x45C
	  lwz       r3, 0x28(r3)
	  add       r3, r3, r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801FEAB0
 * Size:	00002C
 */
void Container<Game::PelletFruit::Object>::getObject(void*)
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
 * Address:	801FEADC
 * Size:	000008
 */
u32 Container<Game::PelletFruit::Object>::getAt(int) { return 0x0; }

/*
 * --INFO--
 * Address:	801FEAE4
 * Size:	000008
 */
u32 Container<Game::PelletFruit::Object>::getTo() { return 0x0; }

/*
 * --INFO--
 * Address:	801FEAEC
 * Size:	0001F4
 */
void ObjectMgr<Game::PelletFruit::Object>::doDirectDraw(Graphics&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r5, 0x804C
	  stw       r0, 0x24(r1)
	  li        r0, 0
	  subi      r5, r5, 0x1B3C
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
 * Address:	801FECE0
 * Size:	00004C
 */
void Iterator<Game::PelletFruit::Object>::isDone()
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
 * Address:	801FED2C
 * Size:	0001F4
 */
void ObjectMgr<Game::PelletFruit::Object>::doSimulation(float)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r4, 0x804C
	  stw       r0, 0x24(r1)
	  li        r0, 0
	  subi      r4, r4, 0x1B3C
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
 * Address:	801FEF20
 * Size:	0001E4
 */
void ObjectMgr<Game::PelletFruit::Object>::doViewCalc()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r4, 0x804C
	  stw       r0, 0x24(r1)
	  li        r0, 0
	  subi      r4, r4, 0x1B3C
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
 * Address:	801FF104
 * Size:	0001F4
 */
void ObjectMgr<Game::PelletFruit::Object>::doSetView(int)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r5, 0x804C
	  stw       r0, 0x24(r1)
	  li        r0, 0
	  subi      r5, r5, 0x1B3C
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
 * Address:	801FF2F8
 * Size:	0001E4
 */
void ObjectMgr<Game::PelletFruit::Object>::doEntry()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r4, 0x804C
	  stw       r0, 0x24(r1)
	  li        r0, 0
	  subi      r4, r4, 0x1B3C
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
 * Address:	801FF4DC
 * Size:	0001E4
 */
void ObjectMgr<Game::PelletFruit::Object>::doAnimation()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r4, 0x804C
	  stw       r0, 0x24(r1)
	  li        r0, 0
	  subi      r4, r4, 0x1B3C
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
 * Address:	801FF6C0
 * Size:	00009C
 */
void MonoObjectMgr<Game::PelletFruit::Object>::MonoObjectMgr()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        0x211CBC
	  lis       r4, 0x804B
	  lis       r3, 0x804C
	  subi      r0, r4, 0x5324
	  lis       r6, 0x804B
	  stw       r0, 0x0(r31)
	  subi      r0, r3, 0x1D84
	  lis       r4, 0x804C
	  lis       r3, 0x804C
	  stw       r0, 0x0(r31)
	  li        r8, 0
	  subi      r7, r4, 0x1F58
	  subi      r5, r3, 0x1EDC
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
 * Address:	801FF75C
 * Size:	000020
 */
void getFlag__Q24Game47FixedSizePelletMgr<Game::PelletFruit::Object>
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
 * Address:	801FF77C
 * Size:	00001C
 */
void setFromTeki__Q24Game47FixedSizePelletMgr<Game::PelletFruit::Object>
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
 * Address:	801FF798
 * Size:	00001C
 */
void setRevival__Q24Game47FixedSizePelletMgr<Game::PelletFruit::Object>
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
 * Address:	801FF7B4
 * Size:	00001C
 */
void setComeAlive__Q24Game47FixedSizePelletMgr<Game::PelletFruit::Object>
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
 * Address:	801FF7D0
 * Size:	000010
 */
void setComeAlive__Q24Game47FixedSizePelletMgr<Game::PelletFruit::Object>
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
 * Address:	801FF7E0
 * Size:	00002C
 */
void getEnd__Q24Game47FixedSizePelletMgr<Game::PelletFruit::Object> Fv(void)
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
 * Address:	801FF80C
 * Size:	00002C
 */
void get__Q24Game47FixedSizePelletMgr<Game::PelletFruit::Object> FPv(void)
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
 * Address:	801FF838
 * Size:	00002C
 */
void getObjectPtr__Q24Game47FixedSizePelletMgr<Game::PelletFruit::Object>
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
 * Address:	801FF864
 * Size:	000090
 */
void birthFromTeki__Q24Game47FixedSizePelletMgr<Game::PelletFruit::Object>
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
 * Address:	801FF8F4
 * Size:	000080
 */
void alloc__Q24Game47FixedSizePelletMgr<Game::PelletFruit::Object> Fi(void)
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
 * Address:	801FF974
 * Size:	000038
 */
void Iterator<Game::PelletFruit::Object>::operator*()
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
 * Address:	801FF9AC
 * Size:	0000E4
 */
void Iterator<Game::PelletFruit::Object>::next()
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
 * Address:	801FFA90
 * Size:	0000DC
 */
void Iterator<Game::PelletFruit::Object>::first()
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
 * Address:	801FFB6C
 * Size:	000064
 */
void onAlloc__Q24Game47FixedSizePelletMgr<Game::PelletFruit::Object> Fv(void)
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
 * Address:	801FFBD0
 * Size:	000188
 */
void MonoObjectMgr<Game::PelletFruit::Object>::alloc(int)
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
	  mulli     r3, r29, 0x45C
	  stw       r28, 0x10(r1)
	  addi      r3, r3, 0x10
	  bl        -0x1DBC54
	  lis       r4, 0x8020
	  mr        r7, r29
	  subi      r4, r4, 0x2A8
	  li        r5, 0
	  li        r6, 0x45C
	  bl        -0x13E228
	  stw       r3, 0x28(r30)
	  li        r0, 0
	  mr        r3, r29
	  stw       r31, 0x24(r30)
	  stw       r0, 0x20(r30)
	  bl        -0x1DBC84
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
	  addi      r29, r29, 0x45C
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
 * Address:	801FFD58
 * Size:	00004C
 */
PelletFruit::Object::Object(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x996EC
	  lis       r4, 0x804C
	  mr        r3, r31
	  subi      r5, r4, 0x1D58
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

} // namespace Game

/*
 * --INFO--
 * Address:	801FFDA4
 * Size:	000028
 */
void __sinit_pelletFruit_cpp(void)
{
	/*
	.loc_0x0:
	  lis       r4, 0x8051
	  li        r0, -0x1
	  lfs       f0, 0x48B0(r4)
	  lis       r3, 0x804C
	  stw       r0, -0x6AF8(r13)
	  stfsu     f0, -0x2030(r3)
	  stfs      f0, -0x6AF4(r13)
	  stfs      f0, 0x4(r3)
	  stfs      f0, 0x8(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801FFDCC
 * Size:	000008
 */
void @84 @__dt__Q24Game47FixedSizePelletMgr<Game::PelletFruit::Object> Fv(void)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x54
	  b         -0x205C
	*/
}

/*
 * --INFO--
 * Address:	801FFDD4
 * Size:	000008
 */
void MonoObjectMgr<Game::PelletFruit::Object>::@28 @resetMgr()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x1C
	  b         -0x8FBF0
	*/
}

/*
 * --INFO--
 * Address:	801FFDDC
 * Size:	000008
 */
void MonoObjectMgr<Game::PelletFruit::Object>::@28 @doDirectDraw(Graphics&)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x1C
	  b         -0x1440
	*/
}

/*
 * --INFO--
 * Address:	801FFDE4
 * Size:	000008
 */
void MonoObjectMgr<Game::PelletFruit::Object>::@28 @doSimulation(float)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x1C
	  b         -0x14D8
	*/
}

/*
 * --INFO--
 * Address:	801FFDEC
 * Size:	000008
 */
void MonoObjectMgr<Game::PelletFruit::Object>::@28 @doViewCalc()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x1C
	  b         -0x1560
	*/
}

/*
 * --INFO--
 * Address:	801FFDF4
 * Size:	000008
 */
void MonoObjectMgr<Game::PelletFruit::Object>::@28 @doSetView(int)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x1C
	  b         -0x15F8
	*/
}

/*
 * --INFO--
 * Address:	801FFDFC
 * Size:	000008
 */
void MonoObjectMgr<Game::PelletFruit::Object>::@28 @doEntry()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x1C
	  b         -0x1680
	*/
}

/*
 * --INFO--
 * Address:	801FFE04
 * Size:	000008
 */
void MonoObjectMgr<Game::PelletFruit::Object>::@28 @doAnimation()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x1C
	  b         -0x1708
	*/
}

/*
 * --INFO--
 * Address:	801FFE0C
 * Size:	000008
 */
void ObjectMgr<Game::PelletFruit::Object>::@28 @doDirectDraw(Graphics&)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x1C
	  b         -0x1324
	*/
}

/*
 * --INFO--
 * Address:	801FFE14
 * Size:	000008
 */
void ObjectMgr<Game::PelletFruit::Object>::@28 @doSimulation(float)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x1C
	  b         -0x10EC
	*/
}

/*
 * --INFO--
 * Address:	801FFE1C
 * Size:	000008
 */
void ObjectMgr<Game::PelletFruit::Object>::@28 @doViewCalc()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x1C
	  b         -0xF00
	*/
}

/*
 * --INFO--
 * Address:	801FFE24
 * Size:	000008
 */
void ObjectMgr<Game::PelletFruit::Object>::@28 @doSetView(int)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x1C
	  b         -0xD24
	*/
}

/*
 * --INFO--
 * Address:	801FFE2C
 * Size:	000008
 */
void ObjectMgr<Game::PelletFruit::Object>::@28 @doEntry()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x1C
	  b         -0xB38
	*/
}

/*
 * --INFO--
 * Address:	801FFE34
 * Size:	000008
 */
void ObjectMgr<Game::PelletFruit::Object>::@28 @doAnimation()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x1C
	  b         -0x95C
	*/
}

/*
 * --INFO--
 * Address:	801FFE3C
 * Size:	000008
 */
void @84 @getEnd__Q24Game47FixedSizePelletMgr<Game::PelletFruit::Object>
Fv(void)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x54
	  b         -0x660
	*/
}

/*
 * --INFO--
 * Address:	801FFE44
 * Size:	000008
 */
void @84 @getStart__Q24Game47FixedSizePelletMgr<Game::PelletFruit::Object>
Fv(void)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x54
	  b         -0x18B8
	*/
}

/*
 * --INFO--
 * Address:	801FFE4C
 * Size:	000008
 */
void @84 @getNext__Q24Game47FixedSizePelletMgr<Game::PelletFruit::Object>
FPv(void)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x54
	  b         -0x18EC
	*/
}

/*
 * --INFO--
 * Address:	801FFE54
 * Size:	000008
 */
void @84 @get__Q24Game47FixedSizePelletMgr<Game::PelletFruit::Object> FPv(void)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x54
	  b         -0x64C
	*/
}

/*
 * --INFO--
 * Address:	801FFE5C
 * Size:	000008
 */
@84 @Game::PelletFruit::Mgr::~Mgr(void)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x54
	  b         -0x1D48
	*/
}
