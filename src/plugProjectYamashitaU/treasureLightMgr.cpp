#include "types.h"

/*
 * --INFO--
 * Address:	8013286C
 * Size:	000150
 */
TreasureLight::Mgr::Mgr()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r4, 0x8048
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  stw       r30, 0x18(r1)
	  subi      r30, r4, 0x3AD0
	  addi      r4, r30, 0xC
	  bl        0x2F91FC
	  lis       r3, 0x804B
	  lfs       f1, -0x6190(r2)
	  subi      r0, r3, 0x574
	  lfs       f0, -0x618C(r2)
	  stw       r0, 0x0(r31)
	  li        r3, 0x58
	  stfs      f1, 0x58(r31)
	  stfs      f0, 0x5C(r31)
	  bl        -0x10EA10
	  mr.       r0, r3
	  beq-      .loc_0x88
	  li        r0, 0xFF
	  addi      r4, r30, 0x18
	  stb       r0, 0x10(r1)
	  addi      r7, r1, 0x14
	  li        r5, 0x1
	  li        r6, 0x2
	  stb       r0, 0x11(r1)
	  stb       r0, 0x12(r1)
	  stb       r0, 0x13(r1)
	  lwz       r0, 0x10(r1)
	  stw       r0, 0x14(r1)
	  bl        0x2F8B80
	  mr        r0, r3

	.loc_0x88:
	  stw       r0, 0x50(r31)
	  li        r0, 0x3
	  lfs       f1, -0x6188(r2)
	  mr        r3, r31
	  lwz       r4, 0x50(r31)
	  lfs       f0, -0x6184(r2)
	  stb       r0, 0x49(r4)
	  lwz       r4, 0x50(r31)
	  stfs      f1, 0x28(r4)
	  stfs      f0, 0x2C(r4)
	  stfs      f1, 0x30(r4)
	  lwz       r4, 0x50(r31)
	  bl        0x2F9240
	  li        r3, 0x58
	  bl        -0x10EA88
	  mr.       r0, r3
	  beq-      .loc_0x100
	  li        r0, 0xFF
	  addi      r4, r30, 0x28
	  stb       r0, 0x8(r1)
	  addi      r7, r1, 0xC
	  li        r5, 0x80
	  li        r6, 0x4
	  stb       r0, 0x9(r1)
	  stb       r0, 0xA(r1)
	  stb       r0, 0xB(r1)
	  lwz       r0, 0x8(r1)
	  stw       r0, 0xC(r1)
	  bl        0x2F8B08
	  mr        r0, r3

	.loc_0x100:
	  stw       r0, 0x54(r31)
	  mr        r3, r31
	  lfs       f0, -0x6180(r2)
	  lwz       r4, 0x54(r31)
	  stfs      f0, 0x4C(r4)
	  lwz       r4, 0x54(r31)
	  bl        0x2F91E0
	  li        r4, 0x32
	  li        r0, 0xFF
	  stb       r4, 0x30(r31)
	  mr        r3, r31
	  stb       r4, 0x31(r31)
	  stb       r4, 0x32(r31)
	  stb       r0, 0x33(r31)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801329BC
 * Size:	000004
 */
void TreasureLight::Mgr::update() { }

/*
 * --INFO--
 * Address:	801329C0
 * Size:	000044
 */
void TreasureLight::Mgr::set(Graphics&)
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
	  bl        0x6C
	  mr        r3, r30
	  mr        r4, r31
	  bl        0x2F91B8
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
 * Address:	80132A04
 * Size:	000044
 */
void TreasureLight::Mgr::set(Matrixf&)
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
	  bl        .loc_0x44
	  mr        r3, r30
	  mr        r4, r31
	  bl        0x2F91C4
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr

	.loc_0x44:
	*/
}

/*
 * --INFO--
 * Address:	80132A48
 * Size:	000184
 */
void TreasureLight::Mgr::setCommonProc()
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
	  stfd      f28, 0x30(r1)
	  psq_st    f28,0x38(r1),0,0
	  stfd      f27, 0x20(r1)
	  psq_st    f27,0x28(r1),0,0
	  stfd      f26, 0x10(r1)
	  psq_st    f26,0x18(r1),0,0
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lfs       f2, -0x6178(r2)
	  lfs       f1, 0x58(r3)
	  lfs       f0, 0x5C(r3)
	  fmuls     f1, f2, f1
	  lfs       f3, -0x617C(r2)
	  fmuls     f0, f2, f0
	  fmuls     f26, f3, f1
	  fmuls     f27, f3, f0
	  fmr       f1, f26
	  bl        0x2DEC80
	  fmr       f31, f1
	  fmr       f1, f27
	  bl        0x2DECDC
	  lfs       f0, -0x6174(r2)
	  fmuls     f0, f0, f1
	  fmr       f1, f27
	  fmuls     f30, f0, f31
	  bl        0x2DEC60
	  lfs       f0, -0x6174(r2)
	  fneg      f0, f0
	  fmuls     f29, f0, f1
	  fmr       f1, f26
	  bl        0x2DECB4
	  fmr       f31, f1
	  fmr       f1, f27
	  bl        0x2DECA8
	  lfs       f0, -0x6174(r2)
	  fneg      f27, f29
	  fneg      f28, f30
	  fmuls     f1, f0, f1
	  fmuls     f0, f27, f27
	  fmuls     f31, f1, f31
	  fmadds    f0, f28, f28, f0
	  fneg      f26, f31
	  fmadds    f1, f26, f26, f0
	  bl        0x2DECEC
	  lfs       f0, -0x6188(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0xF4
	  lfs       f0, -0x6170(r2)
	  fdivs     f0, f0, f1
	  fmuls     f28, f28, f0
	  fmuls     f27, f27, f0
	  fmuls     f26, f26, f0

	.loc_0xF4:
	  lwz       r3, 0x50(r31)
	  lfs       f0, -0x616C(r2)
	  stfs      f30, 0x1C(r3)
	  stfs      f29, 0x20(r3)
	  stfs      f31, 0x24(r3)
	  lwz       r3, 0x50(r31)
	  stfs      f28, 0x28(r3)
	  stfs      f27, 0x2C(r3)
	  stfs      f26, 0x30(r3)
	  lwz       r3, 0x50(r31)
	  stfs      f0, 0x40(r3)
	  lwz       r3, 0x54(r31)
	  stfs      f30, 0x1C(r3)
	  stfs      f29, 0x20(r3)
	  stfs      f31, 0x24(r3)
	  lwz       r3, 0x54(r31)
	  stfs      f28, 0x28(r3)
	  stfs      f27, 0x2C(r3)
	  stfs      f26, 0x30(r3)
	  psq_l     f31,0x68(r1),0,0
	  lfd       f31, 0x60(r1)
	  psq_l     f30,0x58(r1),0,0
	  lfd       f30, 0x50(r1)
	  psq_l     f29,0x48(r1),0,0
	  lfd       f29, 0x40(r1)
	  psq_l     f28,0x38(r1),0,0
	  lfd       f28, 0x30(r1)
	  psq_l     f27,0x28(r1),0,0
	  lfd       f27, 0x20(r1)
	  psq_l     f26,0x18(r1),0,0
	  lfd       f26, 0x10(r1)
	  lwz       r0, 0x74(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x70
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80132BCC
 * Size:	000020
 */
void TreasureLight::Mgr::drawDebugInfo(Graphics&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        0x2F90AC
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80132BEC
 * Size:	0000A0
 */
TreasureLight::Mgr::~Mgr()
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
	  lis       r3, 0x804B
	  subi      r0, r3, 0x574
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x74
	  lis       r4, 0x804F
	  addi      r3, r30, 0x34
	  subi      r0, r4, 0x416C
	  li        r4, -0x1
	  stw       r0, 0x0(r30)
	  bl        0x2DE958
	  addic.    r0, r30, 0x18
	  beq-      .loc_0x68
	  lis       r4, 0x804B
	  addi      r3, r30, 0x18
	  subi      r0, r4, 0x3BA0
	  li        r4, 0
	  stw       r0, 0x18(r30)
	  bl        0x2DE938

	.loc_0x68:
	  mr        r3, r30
	  li        r4, 0
	  bl        0x2DE92C

	.loc_0x74:
	  extsh.    r0, r31
	  ble-      .loc_0x84
	  mr        r3, r30
	  bl        -0x10EBB8

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
 * Address:	80132C8C
 * Size:	000028
 */
void __sinit_treasureLightMgr_cpp(void)
{
	/*
	.loc_0x0:
	  lis       r4, 0x8051
	  li        r0, -0x1
	  lfs       f0, 0x48B0(r4)
	  lis       r3, 0x804B
	  stw       r0, -0x6DA8(r13)
	  stfsu     f0, -0x580(r3)
	  stfs      f0, -0x6DA4(r13)
	  stfs      f0, 0x4(r3)
	  stfs      f0, 0x8(r3)
	  blr
	*/
}
