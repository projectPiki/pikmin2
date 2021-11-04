#include "types.h"

namespace ebi {

namespace title {

	/*
	 * --INFO--
	 * Address:	803E85D8
	 * Size:	000150
	 */
	Chappy::TMgr::TMgr(void)
	{
		/*
		.loc_0x0:
		  stwu      r1, -0x10(r1)
		  mflr      r0
		  lis       r4, 0x804F
		  li        r6, 0
		  stw       r0, 0x14(r1)
		  subi      r0, r4, 0x4AD8
		  lis       r4, 0x8049
		  stw       r31, 0xC(r1)
		  addi      r5, r4, 0x7648
		  mr        r31, r3
		  li        r4, 0x1
		  stw       r30, 0x8(r1)
		  stw       r0, 0x0(r3)
		  lis       r3, 0x804E
		  addi      r0, r3, 0x789C
		  stw       r6, 0x10(r31)
		  addi      r3, r31, 0x1C
		  stw       r6, 0xC(r31)
		  stw       r6, 0x8(r31)
		  stw       r6, 0x4(r31)
		  stw       r5, 0x14(r31)
		  stw       r0, 0x0(r31)
		  bl        0x1248
		  li        r3, 0x88
		  bl        -0x3C4794
		  mr.       r0, r3
		  beq-      .loc_0x74
		  bl        0x15C
		  mr        r0, r3

		.loc_0x74:
		  stw       r0, 0x18(r31)
		  li        r3, 0x70
		  bl        -0x3C47B0
		  mr.       r30, r3
		  beq-      .loc_0x130
		  lis       r4, 0x804E
		  lis       r3, 0x804F
		  addi      r0, r4, 0x79A8
		  lfs       f2, 0x1A08(r2)
		  stw       r0, 0x0(r30)
		  li        r4, 0
		  lfs       f1, 0x1A0C(r2)
		  subi      r0, r3, 0x6154
		  stfs      f2, 0x4(r30)
		  lfs       f0, 0x1A10(r2)
		  stfs      f2, 0x8(r30)
		  stfs      f2, 0xC(r30)
		  stfs      f1, 0x10(r30)
		  stfs      f2, 0x14(r30)
		  stfs      f0, 0x18(r30)
		  stfs      f2, 0x1C(r30)
		  stfs      f2, 0x20(r30)
		  stfs      f2, 0x24(r30)
		  stw       r4, 0x28(r30)
		  stw       r0, 0x0(r30)
		  stw       r4, 0x3C(r30)
		  stw       r4, 0x40(r30)
		  stw       r4, 0x5C(r30)
		  stw       r4, 0x60(r30)
		  stfs      f2, 0x2C(r30)
		  stfs      f2, 0x30(r30)
		  stfs      f0, 0x34(r30)
		  stfs      f2, 0x38(r30)
		  lwz       r3, -0x6514(r13)
		  lfs       f0, 0x54(r3)
		  fdivs     f1, f2, f0
		  bl        -0x326B90
		  stw       r3, 0x3C(r30)
		  li        r4, 0
		  li        r0, -0x1
		  stw       r3, 0x40(r30)
		  stw       r4, 0x44(r30)
		  stb       r4, 0x48(r30)
		  stw       r4, 0x4C(r30)
		  stw       r4, 0x68(r30)
		  stw       r0, 0x6C(r30)
		  stw       r4, 0x64(r30)

		.loc_0x130:
		  stw       r30, 0x25C(r31)
		  mr        r3, r31
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
	 * Address:	803E8728
	 * Size:	000050
	 */
	void Chappy::TMgr::setArchive(JKRArchive*)
	{
		/*
		.loc_0x0:
		  stwu      r1, -0x10(r1)
		  mflr      r0
		  lis       r5, 0x8049
		  stw       r0, 0x14(r1)
		  addi      r5, r5, 0x7748
		  stw       r31, 0xC(r1)
		  mr        r31, r4
		  stw       r30, 0x8(r1)
		  mr        r30, r3
		  addi      r3, r30, 0x1C
		  bl        -0x27C58
		  lwz       r3, 0x18(r30)
		  mr        r4, r31
		  bl        0xAC
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
	 * Address:	803E8778
	 * Size:	000028
	 */
	void Chappy::TMgr::initUnit(void)
	{
		/*
		.loc_0x0:
		  stwu      r1, -0x10(r1)
		  mflr      r0
		  mr        r4, r3
		  stw       r0, 0x14(r1)
		  lwz       r3, 0x25C(r3)
		  bl        0x1AC
		  lwz       r0, 0x14(r1)
		  mtlr      r0
		  addi      r1, r1, 0x10
		  blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	........
	 * Size:	0000C8
	 */
	void Chappy::TAnimFolder::load(J3DModelData*, JKRArchive*)
	{
		// UNUSED FUNCTION
	}

	/*
	 * --INFO--
	 * Address:	803E87A0
	 * Size:	000068
	 */
	Chappy::TAnimator::TAnimator(void)
	{
		/*
		.loc_0x0:
		  stwu      r1, -0x10(r1)
		  mflr      r0
		  lis       r4, 0x804F
		  li        r5, 0
		  stw       r0, 0x14(r1)
		  subi      r0, r4, 0x61AC
		  lis       r4, 0x803F
		  li        r6, 0x20
		  stw       r31, 0xC(r1)
		  mr        r31, r3
		  lis       r3, 0x804F
		  subi      r4, r4, 0x7A54
		  stw       r0, 0x0(r31)
		  subi      r0, r3, 0x6144
		  addi      r3, r31, 0x4
		  li        r7, 0x4
		  stw       r0, 0x0(r31)
		  bl        -0x326FA8
		  li        r0, 0
		  mr        r3, r31
		  stw       r0, 0x84(r31)
		  lwz       r31, 0xC(r1)
		  lwz       r0, 0x14(r1)
		  mtlr      r0
		  addi      r1, r1, 0x10
		  blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	803E8808
	 * Size:	000128
	 */
	void Chappy::TAnimator::setArchive(JKRArchive*)
	{
		/*
		.loc_0x0:
		  stwu      r1, -0x20(r1)
		  mflr      r0
		  stw       r0, 0x24(r1)
		  stw       r31, 0x1C(r1)
		  stw       r30, 0x18(r1)
		  stw       r29, 0x14(r1)
		  mr        r29, r4
		  lis       r4, 0x8049
		  stw       r28, 0x10(r1)
		  addi      r31, r4, 0x7628
		  mr        r28, r3
		  mr        r3, r29
		  lwz       r12, 0x0(r29)
		  addi      r4, r31, 0x188
		  lwz       r12, 0x14(r12)
		  mtctr     r12
		  bctrl
		  mr.       r30, r3
		  bne-      .loc_0x60
		  addi      r3, r31, 0x1A4
		  addi      r5, r31, 0x1BC
		  li        r4, 0x7A
		  crclr     6, 0x6
		  bl        -0x3BE224

		.loc_0x60:
		  mr        r3, r30
		  lis       r4, 0x10
		  bl        -0x378FDC
		  stw       r3, 0x84(r28)
		  lis       r4, 0x4
		  lwz       r3, 0x84(r28)
		  bl        -0x364FA8
		  lwz       r3, 0x84(r28)
		  bl        -0x364E58
		  lwz       r30, 0x84(r28)
		  mr        r5, r29
		  addi      r3, r28, 0x4
		  addi      r6, r31, 0x138
		  mr        r4, r30
		  bl        -0x1EB90
		  lfs       f1, 0x1A54(r2)
		  li        r0, 0x1
		  lfs       f0, 0x1A5C(r2)
		  mr        r4, r30
		  stfs      f1, 0x14(r28)
		  mr        r5, r29
		  addi      r3, r28, 0x24
		  addi      r6, r31, 0x14C
		  stfs      f0, 0x18(r28)
		  stw       r0, 0x20(r28)
		  bl        -0x1EBBC
		  lfs       f1, 0x1A40(r2)
		  li        r0, 0x1
		  lfs       f0, 0x1A60(r2)
		  mr        r4, r30
		  stfs      f1, 0x34(r28)
		  mr        r5, r29
		  addi      r3, r28, 0x44
		  addi      r6, r31, 0x160
		  stfs      f0, 0x38(r28)
		  stw       r0, 0x40(r28)
		  bl        -0x1EBE8
		  mr        r4, r30
		  mr        r5, r29
		  addi      r3, r28, 0x64
		  addi      r6, r31, 0x174
		  bl        -0x1EBFC
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
	 * Size:	000078
	 */
	void Chappy::TAnimator::newJ3DModel(void)
	{
		// UNUSED FUNCTION
	}

	/*
	 * --INFO--
	 * Address:	803E8930
	 * Size:	000008
	 */
	void Chappy::TUnit::setController(Controller* a1)
	{
		// Generated from stw r4, 0x44(r3)
		_44 = a1;
	}

	/*
	 * --INFO--
	 * Address:	803E8938
	 * Size:	0000F4
	 */
	void Chappy::TUnit::init(ebi::title::Chappy::TMgr*)
	{
		/*
		.loc_0x0:
		  stwu      r1, -0x20(r1)
		  mflr      r0
		  stw       r0, 0x24(r1)
		  stw       r31, 0x1C(r1)
		  stw       r30, 0x18(r1)
		  stw       r29, 0x14(r1)
		  mr        r29, r3
		  li        r3, 0xDC
		  stw       r4, 0x4C(r29)
		  lwz       r4, 0x4C(r29)
		  lwz       r31, 0x18(r4)
		  bl        -0x3C4AC0
		  mr.       r30, r3
		  beq-      .loc_0x6C
		  lis       r3, 0x804A
		  lwz       r31, 0x84(r31)
		  addi      r0, r3, 0x19F0
		  stw       r0, 0x0(r30)
		  addi      r3, r30, 0x88
		  bl        -0x389D3C
		  mr        r3, r30
		  bl        -0x382690
		  mr        r3, r30
		  mr        r4, r31
		  lis       r5, 0x2
		  li        r6, 0x1
		  bl        -0x382620

		.loc_0x6C:
		  stw       r30, 0x28(r29)
		  addi      r3, r29, 0x50
		  lwz       r4, 0x4C(r29)
		  lwz       r4, 0x18(r4)
		  bl        -0x1EBA0
		  lwz       r4, -0x65D8(r13)
		  addi      r3, r1, 0x8
		  bl        -0x29948
		  lfs       f0, 0x8(r1)
		  stfs      f0, 0x4(r29)
		  lfs       f0, 0xC(r1)
		  stfs      f0, 0x8(r29)
		  lwz       r3, 0x4C(r29)
		  lfs       f0, 0x158(r3)
		  stfs      f0, 0x14(r29)
		  lwz       r3, 0x4C(r29)
		  lfs       f0, 0x40(r3)
		  stfs      f0, 0x18(r29)
		  lwz       r3, 0x4C(r29)
		  lfs       f0, 0x68(r3)
		  stfs      f0, 0x24(r29)
		  lwz       r3, 0x4C(r29)
		  lfs       f0, 0x90(r3)
		  stfs      f0, 0x1C(r29)
		  lwz       r3, 0x4C(r29)
		  lfs       f0, 0xB8(r3)
		  stfs      f0, 0x20(r29)
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
	 * Address:	803E8A2C
	 * Size:	000054
	 */
	void startZigzagWalk__Q43ebi5title6Chappy5TUnitFR10Vector2<float>
	R10Vector2<float>(void)
	{
		/*
		.loc_0x0:
		  stwu      r1, -0x10(r1)
		  mflr      r0
		  li        r6, -0x1
		  stw       r0, 0x14(r1)
		  li        r0, 0
		  lfs       f0, 0x0(r4)
		  stfs      f0, 0x4(r3)
		  lfs       f0, 0x4(r4)
		  li        r4, 0x5
		  stfs      f0, 0x8(r3)
		  lfs       f0, 0x0(r5)
		  stfs      f0, 0x2C(r3)
		  lfs       f0, 0x4(r5)
		  stfs      f0, 0x30(r3)
		  stw       r6, 0x6C(r3)
		  stb       r0, 0x48(r3)
		  bl        0x90
		  lwz       r0, 0x14(r1)
		  mtlr      r0
		  addi      r1, r1, 0x10
		  blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	803E8A80
	 * Size:	000030
	 */
	void Chappy::TUnit::goHome(void)
	{
		/*
		.loc_0x0:
		  stwu      r1, -0x10(r1)
		  mflr      r0
		  stw       r0, 0x14(r1)
		  lwz       r0, 0x68(r3)
		  cmpwi     r0, 0
		  beq-      .loc_0x20
		  li        r4, 0x6
		  bl        0x60

		.loc_0x20:
		  lwz       r0, 0x14(r1)
		  mtlr      r0
		  addi      r1, r1, 0x10
		  blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	803E8AB0
	 * Size:	000024
	 */
	void Chappy::TUnit::outOfCalc(void)
	{
		/*
		.loc_0x0:
		  stwu      r1, -0x10(r1)
		  mflr      r0
		  li        r4, 0
		  stw       r0, 0x14(r1)
		  bl        0x3C
		  lwz       r0, 0x14(r1)
		  mtlr      r0
		  addi      r1, r1, 0x10
		  blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	803E8AD4
	 * Size:	000014
	 */
	void Chappy::TUnit::isCalc(void)
	{
		/*
		.loc_0x0:
		  lwz       r3, 0x68(r3)
		  neg       r0, r3
		  or        r0, r0, r3
		  rlwinm    r3,r0,1,31,31
		  blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	803E8AE8
	 * Size:	000014
	 */
	void Chappy::TUnit::isController(void)
	{
		/*
		.loc_0x0:
		  lwz       r0, 0x68(r3)
		  subfic    r0, r0, 0x7
		  cntlzw    r0, r0
		  rlwinm    r3,r0,27,24,31
		  blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	803E8AFC
	 * Size:	000318
	 */
	void Chappy::TUnit::startAIState_((ebi::title::Chappy::TUnit::enumAIState))
	{
		/*
		.loc_0x0:
		  stwu      r1, -0x60(r1)
		  mflr      r0
		  stw       r0, 0x64(r1)
		  stfd      f31, 0x50(r1)
		  psq_st    f31,0x58(r1),0,0
		  stfd      f30, 0x40(r1)
		  psq_st    f30,0x48(r1),0,0
		  stw       r31, 0x3C(r1)
		  stw       r30, 0x38(r1)
		  mr        r31, r3
		  mr        r30, r4
		  lwz       r0, 0x68(r3)
		  cmpw      r0, r30
		  bne-      .loc_0x68
		  cmpwi     r0, 0x7
		  bne-      .loc_0x2F0
		  lwz       r4, 0x4C(r31)
		  lwz       r3, -0x6514(r13)
		  lfs       f1, 0x248(r4)
		  lfs       f0, 0x54(r3)
		  fdivs     f1, f1, f0
		  bl        -0x327004
		  stw       r3, 0x3C(r31)
		  stw       r3, 0x40(r31)
		  b         .loc_0x68
		  b         .loc_0x2F0

		.loc_0x68:
		  cmplwi    r30, 0x7
		  stw       r30, 0x68(r31)
		  bgt-      .loc_0x2F0
		  lis       r3, 0x804F
		  rlwinm    r0,r30,2,0,29
		  subi      r3, r3, 0x6194
		  lwzx      r0, r3, r0
		  mtctr     r0
		  bctr
		  lwz       r4, -0x65D8(r13)
		  addi      r3, r1, 0x8
		  bl        -0x29B18
		  lfs       f0, 0x8(r1)
		  stfs      f0, 0x4(r31)
		  lfs       f0, 0xC(r1)
		  stfs      f0, 0x8(r31)
		  lwz       r4, 0x4C(r31)
		  lwz       r3, -0x6514(r13)
		  lfs       f1, 0x248(r4)
		  lfs       f0, 0x54(r3)
		  fdivs     f1, f1, f0
		  bl        -0x32706C
		  stw       r3, 0x3C(r31)
		  stw       r3, 0x40(r31)
		  b         .loc_0x2F0
		  lwz       r3, 0x4C(r31)
		  lfs       f30, 0x1A8(r3)
		  lfs       f31, 0x1D0(r3)
		  bl        -0x31F634
		  xoris     r3, r3, 0x8000
		  lis       r0, 0x4330
		  stw       r3, 0x14(r1)
		  fsubs     f1, f31, f30
		  lwz       r3, -0x6514(r13)
		  stw       r0, 0x10(r1)
		  lfd       f3, 0x1A78(r2)
		  lfd       f0, 0x10(r1)
		  lfs       f2, 0x1A64(r2)
		  fsubs     f3, f0, f3
		  lfs       f0, 0x54(r3)
		  fdivs     f2, f3, f2
		  fmadds    f1, f1, f2, f30
		  fdivs     f1, f1, f0
		  bl        -0x3270C4
		  stw       r3, 0x3C(r31)
		  stw       r3, 0x40(r31)
		  b         .loc_0x2F0
		  lfs       f1, 0x30(r31)
		  lis       r3, 0x8051
		  lfs       f0, 0x8(r31)
		  subi      r3, r3, 0x2E20
		  lfs       f2, 0x2C(r31)
		  fsubs     f1, f1, f0
		  lfs       f0, 0x4(r31)
		  lwz       r4, 0x4C(r31)
		  fsubs     f2, f2, f0
		  lfs       f30, 0x130(r4)
		  bl        -0x3B3B40
		  fmr       f31, f1
		  bl        -0x31F6B0
		  xoris     r3, r3, 0x8000
		  lis       r0, 0x4330
		  stw       r3, 0x14(r1)
		  lfs       f0, 0x1A6C(r2)
		  stw       r0, 0x10(r1)
		  lfd       f2, 0x1A78(r2)
		  fmuls     f0, f0, f30
		  lfd       f1, 0x10(r1)
		  lfs       f4, 0x1A64(r2)
		  fsubs     f5, f1, f2
		  lfs       f3, 0x1A68(r2)
		  lfs       f2, 0x1A1C(r2)
		  lfs       f1, 0x1A0C(r2)
		  fmuls     f3, f3, f0
		  fdivs     f4, f5, f4
		  lfs       f0, 0x1A08(r2)
		  fmadds    f1, f2, f4, f1
		  fmadds    f2, f3, f1, f31
		  fcmpo     cr0, f2, f0
		  bge-      .loc_0x1D4
		  lfs       f0, 0x1A70(r2)
		  lis       r3, 0x8050
		  addi      r3, r3, 0x71A0
		  fmuls     f0, f2, f0
		  fctiwz    f0, f0
		  stfd      f0, 0x18(r1)
		  lwz       r0, 0x1C(r1)
		  rlwinm    r0,r0,3,18,28
		  lfsx      f0, r3, r0
		  fneg      f1, f0
		  b         .loc_0x1F8

		.loc_0x1D4:
		  lfs       f0, 0x1A74(r2)
		  lis       r3, 0x8050
		  addi      r3, r3, 0x71A0
		  fmuls     f0, f2, f0
		  fctiwz    f0, f0
		  stfd      f0, 0x20(r1)
		  lwz       r0, 0x24(r1)
		  rlwinm    r0,r0,3,18,28
		  lfsx      f1, r3, r0

		.loc_0x1F8:
		  lfs       f0, 0x1A08(r2)
		  fcmpo     cr0, f2, f0
		  bge-      .loc_0x208
		  fneg      f2, f2

		.loc_0x208:
		  lfs       f0, 0x1A74(r2)
		  lis       r3, 0x8050
		  addi      r3, r3, 0x71A0
		  fmuls     f0, f2, f0
		  fctiwz    f0, f0
		  stfd      f0, 0x28(r1)
		  lwz       r0, 0x2C(r1)
		  rlwinm    r0,r0,3,18,28
		  add       r3, r3, r0
		  lfs       f0, 0x4(r3)
		  stfs      f0, 0x34(r31)
		  stfs      f1, 0x38(r31)
		  b         .loc_0x2F0
		  lwz       r3, 0x4C(r31)
		  lfs       f30, 0x220(r3)
		  lfs       f31, 0x1F8(r3)
		  bl        -0x31F7A4
		  xoris     r3, r3, 0x8000
		  lis       r0, 0x4330
		  stw       r3, 0x2C(r1)
		  fsubs     f1, f30, f31
		  lwz       r3, -0x6514(r13)
		  stw       r0, 0x28(r1)
		  lfd       f3, 0x1A78(r2)
		  lfd       f0, 0x28(r1)
		  lfs       f2, 0x1A64(r2)
		  fsubs     f3, f0, f3
		  lfs       f0, 0x54(r3)
		  fdivs     f2, f3, f2
		  fmadds    f1, f1, f2, f31
		  fdivs     f1, f1, f0
		  bl        -0x327234
		  stw       r3, 0x3C(r31)
		  stw       r3, 0x40(r31)
		  b         .loc_0x2F0
		  lfs       f0, 0x8(r31)
		  lfs       f1, 0x4(r31)
		  fneg      f3, f0
		  lfs       f0, 0x1A08(r2)
		  fneg      f2, f1
		  fmuls     f1, f3, f3
		  fmadds    f1, f2, f2, f1
		  fcmpo     cr0, f1, f0
		  ble-      .loc_0x2C8
		  ble-      .loc_0x2CC
		  fsqrte    f0, f1
		  fmuls     f1, f0, f1
		  b         .loc_0x2CC

		.loc_0x2C8:
		  fmr       f1, f0

		.loc_0x2CC:
		  lfs       f0, 0x1A08(r2)
		  fcmpu     cr0, f0, f1
		  beq-      .loc_0x2E8
		  lfs       f0, 0x1A10(r2)
		  fdivs     f0, f0, f1
		  fmuls     f2, f2, f0
		  fmuls     f3, f3, f0

		.loc_0x2E8:
		  stfs      f2, 0xC(r31)
		  stfs      f3, 0x10(r31)

		.loc_0x2F0:
		  psq_l     f31,0x58(r1),0,0
		  lfd       f31, 0x50(r1)
		  psq_l     f30,0x48(r1),0,0
		  lfd       f30, 0x40(r1)
		  lwz       r31, 0x3C(r1)
		  lwz       r0, 0x64(r1)
		  lwz       r30, 0x38(r1)
		  mtlr      r0
		  addi      r1, r1, 0x60
		  blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	........
	 * Size:	000100
	 */
	void Chappy::TUnit::startAction_(ebi::title::Chappy::TUnit::enumAction)
	{
		// UNUSED FUNCTION
	}

	/*
	 * --INFO--
	 * Address:	803E8E14
	 * Size:	000A64
	 */
	void Chappy::TUnit::update(void)
	{
		/*
		.loc_0x0:
		  stwu      r1, -0x80(r1)
		  mflr      r0
		  stw       r0, 0x84(r1)
		  stfd      f31, 0x70(r1)
		  psq_st    f31,0x78(r1),0,0
		  stfd      f30, 0x60(r1)
		  psq_st    f30,0x68(r1),0,0
		  stfd      f29, 0x50(r1)
		  psq_st    f29,0x58(r1),0,0
		  stw       r31, 0x4C(r1)
		  stw       r30, 0x48(r1)
		  stw       r29, 0x44(r1)
		  stw       r28, 0x40(r1)
		  lwz       r12, 0x0(r3)
		  mr        r30, r3
		  lwz       r12, 0xC(r12)
		  mtctr     r12
		  bctrl
		  rlwinm.   r0,r3,0,24,31
		  beq-      .loc_0xA2C
		  lwz       r0, 0x68(r30)
		  cmpwi     r0, 0
		  beq-      .loc_0xB8
		  cmpwi     r0, 0x6
		  beq-      .loc_0xB8
		  cmpwi     r0, 0x5
		  beq-      .loc_0xB8
		  lwz       r3, 0x44(r30)
		  li        r4, 0
		  cmplwi    r3, 0
		  beq-      .loc_0xA4
		  lfs       f1, 0x60(r3)
		  lfs       f0, 0x1A84(r2)
		  fcmpo     cr0, f1, f0
		  ble-      .loc_0x94
		  li        r4, 0x1
		  b         .loc_0xA4

		.loc_0x94:
		  lwz       r0, 0x1C(r3)
		  rlwinm.   r0,r0,0,27,27
		  beq-      .loc_0xA4
		  li        r4, 0x1

		.loc_0xA4:
		  rlwinm.   r0,r4,0,24,31
		  beq-      .loc_0xB8
		  mr        r3, r30
		  li        r4, 0x7
		  bl        -0x3CC

		.loc_0xB8:
		  lfs       f31, 0x1A08(r2)
		  li        r31, 0
		  lwz       r3, 0x3C(r30)
		  fmr       f30, f31
		  cmplwi    r3, 0
		  beq-      .loc_0xD8
		  subi      r0, r3, 0x1
		  stw       r0, 0x3C(r30)

		.loc_0xD8:
		  lwz       r0, 0x68(r30)
		  cmplwi    r0, 0x7
		  bgt-      .loc_0x338
		  lis       r3, 0x804F
		  rlwinm    r0,r0,2,0,29
		  subi      r3, r3, 0x6174
		  lwzx      r0, r3, r0
		  mtctr     r0
		  bctr
		  lwz       r3, 0x44(r30)
		  cmplwi    r3, 0
		  beq-      .loc_0x118
		  lwz       r0, 0x1C(r3)
		  lfs       f31, 0x58(r3)
		  lfs       f30, 0x5C(r3)
		  rlwinm    r31,r0,28,31,31

		.loc_0x118:
		  lwz       r0, 0x3C(r30)
		  cmplwi    r0, 0
		  bne-      .loc_0x338
		  mr        r3, r30
		  li        r4, 0x6
		  bl        -0x444
		  b         .loc_0x338
		  lfs       f31, 0x1A08(r2)
		  li        r31, 0
		  lwz       r0, 0x3C(r30)
		  fmr       f30, f31
		  cmplwi    r0, 0
		  bne-      .loc_0x338
		  mr        r3, r30
		  li        r4, 0x2
		  bl        -0x46C
		  b         .loc_0x338
		  lis       r3, 0x8051
		  lfs       f1, 0x10(r30)
		  lfs       f2, 0xC(r30)
		  subi      r3, r3, 0x2E20
		  bl        -0x3B3E78
		  fmr       f29, f1
		  lis       r3, 0x8051
		  lfs       f1, 0x38(r30)
		  subi      r3, r3, 0x2E20
		  lfs       f2, 0x34(r30)
		  bl        -0x3B3E90
		  fsubs     f2, f29, f1
		  lfs       f1, 0x1A88(r2)
		  lfs       f0, 0x1A8C(r2)
		  b         .loc_0x19C

		.loc_0x198:
		  fadds     f2, f2, f1

		.loc_0x19C:
		  fcmpo     cr0, f2, f0
		  blt+      .loc_0x198
		  lfs       f1, 0x1A88(r2)
		  lfs       f0, 0x1A68(r2)
		  b         .loc_0x1B4

		.loc_0x1B0:
		  fsubs     f2, f2, f1

		.loc_0x1B4:
		  fcmpo     cr0, f2, f0
		  cror      2, 0x1, 0x2
		  beq+      .loc_0x1B0
		  fabs      f1, f2
		  lfs       f0, 0x1A90(r2)
		  frsp      f1, f1
		  fcmpo     cr0, f1, f0
		  bge-      .loc_0x1E4
		  mr        r3, r30
		  li        r4, 0x3
		  bl        -0x4F4
		  b         .loc_0x338

		.loc_0x1E4:
		  lfs       f0, 0x1A08(r2)
		  fcmpo     cr0, f2, f0
		  ble-      .loc_0x200
		  fmr       f30, f0
		  lfs       f31, 0x1A10(r2)
		  li        r31, 0
		  b         .loc_0x338

		.loc_0x200:
		  fmr       f30, f0
		  lfs       f31, 0x1A0C(r2)
		  li        r31, 0
		  b         .loc_0x338
		  lwz       r0, 0x3C(r30)
		  cmplwi    r0, 0
		  beq-      .loc_0x22C
		  lfs       f31, 0x1A08(r2)
		  li        r31, 0
		  lfs       f30, 0x1A10(r2)
		  b         .loc_0x338

		.loc_0x22C:
		  lfs       f31, 0x1A08(r2)
		  li        r31, 0
		  lwz       r0, 0x58(r30)
		  fmr       f30, f31
		  cmpwi     r0, 0x3
		  bne-      .loc_0x338
		  li        r29, 0
		  li        r28, 0

		.loc_0x24C:
		  lwz       r5, 0x4C(r30)
		  mr        r4, r28
		  lwz       r3, -0x65D8(r13)
		  lfs       f0, 0x108(r5)
		  addi      r3, r3, 0x154
		  stfs      f0, 0x34(r1)
		  lfs       f4, 0xE0(r5)
		  lfs       f1, 0x10(r30)
		  lfs       f0, 0xC(r30)
		  fmuls     f2, f1, f4
		  lfs       f3, 0x8(r30)
		  fmuls     f0, f0, f4
		  lfs       f1, 0x4(r30)
		  fadds     f2, f3, f2
		  fadds     f0, f1, f0
		  stfs      f2, 0x30(r1)
		  stfs      f0, 0x2C(r1)
		  bl        -0x3E18
		  lfs       f1, 0x8(r3)
		  addi      r4, r1, 0x18
		  lfs       f0, 0x4(r3)
		  addi      r3, r1, 0x2C
		  stfs      f0, 0x18(r1)
		  stfs      f1, 0x1C(r1)
		  bl        -0x1EF38
		  rlwinm.   r0,r3,0,24,31
		  bne-      .loc_0x2C0
		  li        r29, 0x1
		  b         .loc_0x2CC

		.loc_0x2C0:
		  addi      r28, r28, 0x1
		  cmpwi     r28, 0x1F4
		  blt+      .loc_0x24C

		.loc_0x2CC:
		  rlwinm.   r0,r29,0,24,31
		  beq-      .loc_0x2E4
		  mr        r3, r30
		  li        r4, 0x4
		  bl        -0x5F4
		  b         .loc_0x338

		.loc_0x2E4:
		  mr        r3, r30
		  li        r4, 0x2
		  bl        -0x604
		  b         .loc_0x338
		  lfs       f31, 0x1A08(r2)
		  li        r31, 0x1
		  lwz       r0, 0x58(r30)
		  fmr       f30, f31
		  cmpwi     r0, 0x3
		  bne-      .loc_0x338
		  mr        r3, r30
		  li        r4, 0x2
		  bl        -0x62C
		  b         .loc_0x338
		  lfs       f31, 0x1A08(r2)
		  li        r31, 0
		  lfs       f30, 0x1A10(r2)
		  b         .loc_0x338
		  lfs       f31, 0x1A08(r2)
		  li        r31, 0
		  lfs       f30, 0x1A10(r2)

		.loc_0x338:
		  lbz       r0, 0x48(r30)
		  cmplwi    r0, 0
		  beq-      .loc_0x34C
		  li        r3, 0
		  b         .loc_0x388

		.loc_0x34C:
		  fabs      f1, f31
		  lfs       f0, 0x1A84(r2)
		  li        r3, 0
		  frsp      f1, f1
		  fcmpo     cr0, f1, f0
		  ble-      .loc_0x368
		  li        r3, 0x1

		.loc_0x368:
		  lfs       f0, 0x1A84(r2)
		  fcmpo     cr0, f30, f0
		  ble-      .loc_0x378
		  li        r3, 0x4

		.loc_0x378:
		  rlwinm    r0,r31,0,24,31
		  cmplwi    r0, 0x1
		  bne-      .loc_0x388
		  li        r3, 0x2

		.loc_0x388:
		  lwz       r0, 0x6C(r30)
		  cmpw      r0, r3
		  beq-      .loc_0x57C
		  cmpwi     r0, 0x1
		  bge-      .loc_0x3A0
		  b         .loc_0x4A8

		.loc_0x3A0:
		  cmpwi     r0, 0x5
		  bge-      .loc_0x4A8
		  addi      r3, r30, 0x50
		  bl        -0x1F230
		  li        r0, 0x1
		  stb       r0, 0x48(r30)
		  lwz       r0, 0x58(r30)
		  cmpwi     r0, 0x3
		  bne-      .loc_0x57C
		  li        r3, 0
		  stb       r3, 0x48(r30)
		  lwz       r0, 0x6C(r30)
		  cmpwi     r0, 0
		  beq-      .loc_0x57C
		  stw       r3, 0x6C(r30)
		  lwz       r0, 0x6C(r30)
		  cmpwi     r0, 0x2
		  beq-      .loc_0x468
		  bge-      .loc_0x3FC
		  cmpwi     r0, 0
		  beq-      .loc_0x40C
		  bge-      .loc_0x430
		  b         .loc_0x57C

		.loc_0x3FC:
		  cmpwi     r0, 0x4
		  beq-      .loc_0x44C
		  bge-      .loc_0x57C
		  b         .loc_0x48C

		.loc_0x40C:
		  lfs       f1, 0x1A10(r2)
		  addi      r3, r30, 0x50
		  li        r4, 0x1
		  bl        -0x1F3C0
		  lfs       f0, 0x1A80(r2)
		  addi      r3, r30, 0x50
		  stfs      f0, 0x54(r30)
		  bl        -0x1F32C
		  b         .loc_0x57C

		.loc_0x430:
		  lfs       f1, 0x1A10(r2)
		  addi      r3, r30, 0x50
		  li        r4, 0x1
		  bl        -0x1F3E4
		  addi      r3, r30, 0x50
		  bl        -0x1F348
		  b         .loc_0x57C

		.loc_0x44C:
		  lfs       f1, 0x1A10(r2)
		  addi      r3, r30, 0x50
		  li        r4, 0
		  bl        -0x1F400
		  addi      r3, r30, 0x50
		  bl        -0x1F364
		  b         .loc_0x57C

		.loc_0x468:
		  lfs       f1, 0x1A10(r2)
		  addi      r3, r30, 0x50
		  li        r4, 0x2
		  bl        -0x1F41C
		  addi      r3, r30, 0x50
		  bl        -0x1F380
		  li        r0, 0
		  stw       r0, 0x64(r30)
		  b         .loc_0x57C

		.loc_0x48C:
		  lfs       f1, 0x1A10(r2)
		  addi      r3, r30, 0x50
		  li        r4, 0x3
		  bl        -0x1F440
		  addi      r3, r30, 0x50
		  bl        -0x1F3A4
		  b         .loc_0x57C

		.loc_0x4A8:
		  cmpw      r3, r0
		  beq-      .loc_0x57C
		  stw       r3, 0x6C(r30)
		  lwz       r0, 0x6C(r30)
		  cmpwi     r0, 0x2
		  beq-      .loc_0x540
		  bge-      .loc_0x4D4
		  cmpwi     r0, 0
		  beq-      .loc_0x4E4
		  bge-      .loc_0x508
		  b         .loc_0x57C

		.loc_0x4D4:
		  cmpwi     r0, 0x4
		  beq-      .loc_0x524
		  bge-      .loc_0x57C
		  b         .loc_0x564

		.loc_0x4E4:
		  lfs       f1, 0x1A10(r2)
		  addi      r3, r30, 0x50
		  li        r4, 0x1
		  bl        -0x1F498
		  lfs       f0, 0x1A80(r2)
		  addi      r3, r30, 0x50
		  stfs      f0, 0x54(r30)
		  bl        -0x1F404
		  b         .loc_0x57C

		.loc_0x508:
		  lfs       f1, 0x1A10(r2)
		  addi      r3, r30, 0x50
		  li        r4, 0x1
		  bl        -0x1F4BC
		  addi      r3, r30, 0x50
		  bl        -0x1F420
		  b         .loc_0x57C

		.loc_0x524:
		  lfs       f1, 0x1A10(r2)
		  addi      r3, r30, 0x50
		  li        r4, 0
		  bl        -0x1F4D8
		  addi      r3, r30, 0x50
		  bl        -0x1F43C
		  b         .loc_0x57C

		.loc_0x540:
		  lfs       f1, 0x1A10(r2)
		  addi      r3, r30, 0x50
		  li        r4, 0x2
		  bl        -0x1F4F4
		  addi      r3, r30, 0x50
		  bl        -0x1F458
		  li        r0, 0
		  stw       r0, 0x64(r30)
		  b         .loc_0x57C

		.loc_0x564:
		  lfs       f1, 0x1A10(r2)
		  addi      r3, r30, 0x50
		  li        r4, 0x3
		  bl        -0x1F518
		  addi      r3, r30, 0x50
		  bl        -0x1F47C

		.loc_0x57C:
		  lwz       r0, 0x6C(r30)
		  cmpwi     r0, 0x2
		  beq-      .loc_0x6C0
		  bge-      .loc_0x59C
		  cmpwi     r0, 0
		  beq-      .loc_0x878
		  bge-      .loc_0x5A8
		  b         .loc_0x878

		.loc_0x59C:
		  cmpwi     r0, 0x4
		  beq-      .loc_0x664
		  b         .loc_0x878

		.loc_0x5A8:
		  fabs      f1, f31
		  lfs       f0, 0x1A84(r2)
		  frsp      f1, f1
		  fcmpo     cr0, f1, f0
		  ble-      .loc_0x5C4
		  fmr       f2, f31
		  b         .loc_0x5C8

		.loc_0x5C4:
		  lfs       f2, 0x1A08(r2)

		.loc_0x5C8:
		  lwz       r3, 0x4C(r30)
		  lfs       f5, 0xC(r30)
		  lfs       f0, 0x180(r3)
		  lfs       f4, 0x10(r30)
		  fneg      f1, f5
		  fmuls     f3, f2, f0
		  lfs       f0, 0x1A08(r2)
		  fmuls     f2, f4, f3
		  fmuls     f1, f1, f3
		  fadds     f2, f5, f2
		  fadds     f1, f4, f1
		  stfs      f2, 0xC(r30)
		  stfs      f1, 0x10(r30)
		  lfs       f3, 0xC(r30)
		  lfs       f2, 0x10(r30)
		  fmuls     f1, f3, f3
		  fmuls     f2, f2, f2
		  fadds     f1, f1, f2
		  fcmpo     cr0, f1, f0
		  ble-      .loc_0x630
		  fmadds    f2, f3, f3, f2
		  fcmpo     cr0, f2, f0
		  ble-      .loc_0x634
		  fsqrte    f0, f2
		  fmuls     f2, f0, f2
		  b         .loc_0x634

		.loc_0x630:
		  fmr       f2, f0

		.loc_0x634:
		  lfs       f0, 0x1A08(r2)
		  fcmpu     cr0, f0, f2
		  beq-      .loc_0x878
		  lfs       f1, 0x1A10(r2)
		  lfs       f0, 0xC(r30)
		  fdivs     f1, f1, f2
		  fmuls     f0, f0, f1
		  stfs      f0, 0xC(r30)
		  lfs       f0, 0x10(r30)
		  fmuls     f0, f0, f1
		  stfs      f0, 0x10(r30)
		  b         .loc_0x878

		.loc_0x664:
		  lfs       f0, 0x1A84(r2)
		  fcmpo     cr0, f30, f0
		  ble-      .loc_0x678
		  fmr       f2, f30
		  b         .loc_0x67C

		.loc_0x678:
		  lfs       f2, 0x1A48(r2)

		.loc_0x67C:
		  lbz       r0, 0x48(r30)
		  cmplwi    r0, 0
		  beq-      .loc_0x68C
		  lfs       f2, 0x1A48(r2)

		.loc_0x68C:
		  lfs       f1, 0x14(r30)
		  lfs       f0, 0xC(r30)
		  fmuls     f4, f2, f1
		  lfs       f2, 0x10(r30)
		  lfs       f1, 0x4(r30)
		  lfs       f3, 0x8(r30)
		  fmuls     f0, f0, f4
		  fmuls     f2, f2, f4
		  fadds     f0, f1, f0
		  fadds     f1, f3, f2
		  stfs      f0, 0x4(r30)
		  stfs      f1, 0x8(r30)
		  b         .loc_0x878

		.loc_0x6C0:
		  lfs       f29, 0x50(r30)
		  lfs       f0, 0x1A40(r2)
		  fcmpo     cr0, f0, f29
		  bge-      .loc_0x77C
		  lfs       f0, 0x1A20(r2)
		  fcmpo     cr0, f29, f0
		  bge-      .loc_0x77C
		  lwz       r3, 0x4C(r30)
		  li        r28, 0
		  lfs       f0, 0x108(r3)
		  stfs      f0, 0x28(r1)
		  lfs       f4, 0xE0(r3)
		  lfs       f1, 0x10(r30)
		  lfs       f0, 0xC(r30)
		  fmuls     f2, f1, f4
		  lfs       f3, 0x8(r30)
		  fmuls     f0, f0, f4
		  lfs       f1, 0x4(r30)
		  fadds     f2, f3, f2
		  fadds     f0, f1, f0
		  stfs      f2, 0x24(r1)
		  stfs      f0, 0x20(r1)

		.loc_0x718:
		  lwz       r3, -0x65D8(r13)
		  mr        r4, r28
		  addi      r3, r3, 0x154
		  bl        -0x42AC
		  mr        r0, r3
		  addi      r3, r1, 0x20
		  mr        r29, r0
		  addi      r4, r1, 0x10
		  lfs       f1, 0x8(r29)
		  lfs       f0, 0x4(r29)
		  stfs      f0, 0x10(r1)
		  stfs      f1, 0x14(r1)
		  bl        -0x1F3D4
		  rlwinm.   r0,r3,0,24,31
		  bne-      .loc_0x770
		  mr        r3, r29
		  bl        -0x3ED8
		  rlwinm.   r0,r3,0,24,31
		  beq-      .loc_0x770
		  lwz       r3, 0x64(r30)
		  addi      r0, r3, 0x1
		  stw       r0, 0x64(r30)

		.loc_0x770:
		  addi      r28, r28, 0x1
		  cmpwi     r28, 0x1F4
		  blt+      .loc_0x718

		.loc_0x77C:
		  fctiwz    f0, f29
		  stfd      f0, 0x38(r1)
		  lwz       r0, 0x3C(r1)
		  cmpwi     r0, 0xA
		  bne-      .loc_0x878
		  lwz       r0, 0x64(r30)
		  cmpwi     r0, 0
		  bne-      .loc_0x878
		  lwz       r0, 0x6C(r30)
		  cmpwi     r0, 0x3
		  beq-      .loc_0x878
		  li        r0, 0x3
		  stw       r0, 0x6C(r30)
		  lwz       r0, 0x6C(r30)
		  cmpwi     r0, 0x2
		  beq-      .loc_0x83C
		  bge-      .loc_0x7D0
		  cmpwi     r0, 0
		  beq-      .loc_0x7E0
		  bge-      .loc_0x804
		  b         .loc_0x878

		.loc_0x7D0:
		  cmpwi     r0, 0x4
		  beq-      .loc_0x820
		  bge-      .loc_0x878
		  b         .loc_0x860

		.loc_0x7E0:
		  lfs       f1, 0x1A10(r2)
		  addi      r3, r30, 0x50
		  li        r4, 0x1
		  bl        -0x1F794
		  lfs       f0, 0x1A80(r2)
		  addi      r3, r30, 0x50
		  stfs      f0, 0x54(r30)
		  bl        -0x1F700
		  b         .loc_0x878

		.loc_0x804:
		  lfs       f1, 0x1A10(r2)
		  addi      r3, r30, 0x50
		  li        r4, 0x1
		  bl        -0x1F7B8
		  addi      r3, r30, 0x50
		  bl        -0x1F71C
		  b         .loc_0x878

		.loc_0x820:
		  lfs       f1, 0x1A10(r2)
		  addi      r3, r30, 0x50
		  li        r4, 0
		  bl        -0x1F7D4
		  addi      r3, r30, 0x50
		  bl        -0x1F738
		  b         .loc_0x878

		.loc_0x83C:
		  lfs       f1, 0x1A10(r2)
		  addi      r3, r30, 0x50
		  li        r4, 0x2
		  bl        -0x1F7F0
		  addi      r3, r30, 0x50
		  bl        -0x1F754
		  li        r0, 0
		  stw       r0, 0x64(r30)
		  b         .loc_0x878

		.loc_0x860:
		  lfs       f1, 0x1A10(r2)
		  addi      r3, r30, 0x50
		  li        r4, 0x3
		  bl        -0x1F814
		  addi      r3, r30, 0x50
		  bl        -0x1F778

		.loc_0x878:
		  lwz       r0, 0x68(r30)
		  cmpwi     r0, 0x5
		  beq-      .loc_0x8BC
		  bge-      .loc_0x894
		  cmpwi     r0, 0
		  beq-      .loc_0x8A0
		  b         .loc_0x904

		.loc_0x894:
		  cmpwi     r0, 0x7
		  bge-      .loc_0x904
		  b         .loc_0x8E0

		.loc_0x8A0:
		  lwz       r4, -0x65D8(r13)
		  addi      r3, r1, 0x8
		  bl        -0x2A644
		  lfs       f0, 0x8(r1)
		  stfs      f0, 0x4(r30)
		  lfs       f0, 0xC(r1)
		  stfs      f0, 0x8(r30)

		.loc_0x8BC:
		  lwz       r3, -0x65D8(r13)
		  mr        r4, r30
		  bl        -0x2A7B4
		  rlwinm.   r0,r3,0,24,31
		  beq-      .loc_0x910
		  mr        r3, r30
		  li        r4, 0x3
		  bl        -0xBF0
		  b         .loc_0x910

		.loc_0x8E0:
		  lwz       r3, -0x65D8(r13)
		  mr        r4, r30
		  bl        -0x2A70C
		  rlwinm.   r0,r3,0,24,31
		  beq-      .loc_0x910
		  mr        r3, r30
		  li        r4, 0
		  bl        -0xC14
		  b         .loc_0x910

		.loc_0x904:
		  lwz       r3, -0x65D8(r13)
		  mr        r4, r30
		  bl        -0x2A87C

		.loc_0x910:
		  mr        r3, r30
		  bl        -0x28BA8
		  lwz       r3, 0x5C(r30)
		  cmplwi    r3, 0
		  beq-      .loc_0x9BC
		  lwz       r0, 0x58(r30)
		  cmpwi     r0, 0x2
		  beq-      .loc_0x984
		  bge-      .loc_0x9BC
		  cmpwi     r0, 0
		  beq-      .loc_0x9BC
		  bge-      .loc_0x948
		  b         .loc_0x9BC
		  b         .loc_0x9BC

		.loc_0x948:
		  lfs       f2, 0x54(r30)
		  lfs       f1, 0x18(r3)
		  lfs       f0, 0x50(r30)
		  fmadds    f0, f2, f1, f0
		  stfs      f0, 0x50(r30)
		  lwz       r3, 0x5C(r30)
		  lfs       f1, 0x50(r30)
		  lfs       f2, 0x14(r3)
		  fcmpo     cr0, f1, f2
		  ble-      .loc_0x9BC
		  lfs       f0, 0x10(r3)
		  fsubs     f0, f2, f0
		  fsubs     f0, f1, f0
		  stfs      f0, 0x50(r30)
		  b         .loc_0x9BC

		.loc_0x984:
		  lfs       f2, 0x54(r30)
		  lfs       f1, 0x18(r3)
		  lfs       f0, 0x50(r30)
		  fmadds    f0, f2, f1, f0
		  stfs      f0, 0x50(r30)
		  lwz       r3, 0x5C(r30)
		  lfs       f0, 0x50(r30)
		  lfs       f1, 0xC(r3)
		  fcmpo     cr0, f0, f1
		  cror      2, 0x1, 0x2
		  bne-      .loc_0x9BC
		  stfs      f1, 0x50(r30)
		  li        r0, 0x3
		  stw       r0, 0x58(r30)

		.loc_0x9BC:
		  lwz       r3, 0x5C(r30)
		  lwz       r4, 0x28(r30)
		  cmplwi    r3, 0
		  beq-      .loc_0x9F0
		  lfs       f0, 0x50(r30)
		  lwz       r3, 0x0(r3)
		  stfs      f0, 0x8(r3)
		  lwz       r3, 0x4(r4)
		  lwz       r4, 0x5C(r30)
		  lwz       r3, 0x28(r3)
		  lwz       r0, 0x4(r4)
		  lwz       r3, 0x0(r3)
		  stw       r0, 0x54(r3)

		.loc_0x9F0:
		  lwz       r3, 0x28(r30)
		  lwz       r12, 0x0(r3)
		  lwz       r12, 0x10(r12)
		  mtctr     r12
		  bctrl
		  lwz       r3, 0x28(r30)
		  lwz       r12, 0x0(r3)
		  lwz       r12, 0xC(r12)
		  mtctr     r12
		  bctrl
		  lwz       r3, 0x28(r30)
		  lwz       r12, 0x0(r3)
		  lwz       r12, 0x1C(r12)
		  mtctr     r12
		  bctrl

		.loc_0xA2C:
		  psq_l     f31,0x78(r1),0,0
		  lfd       f31, 0x70(r1)
		  psq_l     f30,0x68(r1),0,0
		  lfd       f30, 0x60(r1)
		  psq_l     f29,0x58(r1),0,0
		  lfd       f29, 0x50(r1)
		  lwz       r31, 0x4C(r1)
		  lwz       r30, 0x48(r1)
		  lwz       r29, 0x44(r1)
		  lwz       r0, 0x84(r1)
		  lwz       r28, 0x40(r1)
		  mtlr      r0
		  addi      r1, r1, 0x80
		  blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	803E9878
	 * Size:	0003A4
	 */
	Chappy::TParam::TParam(void)
	{
		/*
		.loc_0x0:
		  stwu      r1, -0x10(r1)
		  mflr      r0
		  stw       r0, 0x14(r1)
		  extsh.    r0, r4
		  lis       r4, 0x8049
		  stw       r31, 0xC(r1)
		  addi      r31, r4, 0x7628
		  stw       r30, 0x8(r1)
		  mr        r30, r3
		  beq-      .loc_0x30
		  addi      r0, r30, 0x23C
		  stw       r0, 0x0(r30)

		.loc_0x30:
		  li        r0, 0
		  lis       r5, 0x6230
		  stw       r0, 0x4(r30)
		  addi      r0, r2, 0x1A14
		  mr        r4, r30
		  addi      r3, r30, 0xC
		  stw       r0, 0x8(r30)
		  addi      r5, r5, 0x3030
		  addi      r6, r31, 0x2C
		  bl        0x29D8C
		  lis       r3, 0x804B
		  lis       r5, 0x6230
		  subi      r0, r3, 0x5344
		  lfs       f0, 0x1A1C(r2)
		  stw       r0, 0xC(r30)
		  mr        r4, r30
		  lfs       f1, 0x1A08(r2)
		  addi      r3, r30, 0x34
		  stfs      f0, 0x24(r30)
		  addi      r5, r5, 0x3031
		  lfs       f0, 0x1A20(r2)
		  addi      r6, r31, 0x38
		  stfs      f1, 0x2C(r30)
		  stfs      f0, 0x30(r30)
		  bl        0x29D50
		  lis       r3, 0x804B
		  lis       r5, 0x6230
		  subi      r0, r3, 0x5344
		  lfs       f0, 0x1A24(r2)
		  stw       r0, 0x34(r30)
		  mr        r4, r30
		  lfs       f1, 0x1A08(r2)
		  addi      r3, r30, 0x5C
		  stfs      f0, 0x4C(r30)
		  addi      r5, r5, 0x3032
		  lfs       f0, 0x1A28(r2)
		  addi      r6, r31, 0x48
		  stfs      f1, 0x54(r30)
		  stfs      f0, 0x58(r30)
		  bl        0x29D14
		  lis       r3, 0x804B
		  lis       r5, 0x6230
		  subi      r0, r3, 0x5344
		  lfs       f0, 0x1A2C(r2)
		  stw       r0, 0x5C(r30)
		  mr        r4, r30
		  lfs       f1, 0x1A08(r2)
		  addi      r3, r30, 0x84
		  stfs      f0, 0x74(r30)
		  addi      r5, r5, 0x3033
		  lfs       f0, 0x1A28(r2)
		  addi      r6, r31, 0x58
		  stfs      f1, 0x7C(r30)
		  stfs      f0, 0x80(r30)
		  bl        0x29CD8
		  lis       r3, 0x804B
		  lis       r5, 0x6368
		  subi      r0, r3, 0x5344
		  lfs       f0, 0x1A30(r2)
		  stw       r0, 0x84(r30)
		  mr        r4, r30
		  lfs       f1, 0x1A08(r2)
		  addi      r3, r30, 0xAC
		  stfs      f0, 0x9C(r30)
		  addi      r5, r5, 0x3230
		  lfs       f0, 0x1A28(r2)
		  addi      r6, r31, 0x6C
		  stfs      f1, 0xA4(r30)
		  stfs      f0, 0xA8(r30)
		  bl        0x29C9C
		  lis       r3, 0x804B
		  lis       r5, 0x6368
		  subi      r0, r3, 0x5344
		  lfs       f0, 0x1A34(r2)
		  stw       r0, 0xAC(r30)
		  mr        r4, r30
		  lfs       f1, 0x1A08(r2)
		  addi      r3, r30, 0xD4
		  stfs      f0, 0xC4(r30)
		  addi      r5, r5, 0x3231
		  lfs       f0, 0x1A28(r2)
		  addi      r6, r31, 0x7C
		  stfs      f1, 0xCC(r30)
		  stfs      f0, 0xD0(r30)
		  bl        0x29C60
		  lis       r3, 0x804B
		  lis       r5, 0x6368
		  subi      r0, r3, 0x5344
		  lfs       f0, 0x1A24(r2)
		  stw       r0, 0xD4(r30)
		  mr        r4, r30
		  lfs       f1, 0x1A08(r2)
		  addi      r3, r30, 0xFC
		  stfs      f0, 0xEC(r30)
		  addi      r5, r5, 0x3030
		  lfs       f0, 0x1A28(r2)
		  addi      r6, r31, 0x88
		  stfs      f1, 0xF4(r30)
		  stfs      f0, 0xF8(r30)
		  bl        0x29C24
		  lis       r3, 0x804B
		  lis       r5, 0x6368
		  subi      r0, r3, 0x5344
		  lfs       f0, 0x1A38(r2)
		  stw       r0, 0xFC(r30)
		  mr        r4, r30
		  lfs       f1, 0x1A08(r2)
		  addi      r3, r30, 0x124
		  stfs      f0, 0x114(r30)
		  addi      r5, r5, 0x3031
		  lfs       f0, 0x1A3C(r2)
		  addi      r6, r31, 0x9C
		  stfs      f1, 0x11C(r30)
		  stfs      f0, 0x120(r30)
		  bl        0x29BE8
		  lis       r3, 0x804B
		  lis       r5, 0x6368
		  subi      r0, r3, 0x5344
		  lfs       f0, 0x1A40(r2)
		  stw       r0, 0x124(r30)
		  mr        r4, r30
		  lfs       f1, 0x1A08(r2)
		  addi      r3, r30, 0x14C
		  stfs      f0, 0x13C(r30)
		  addi      r5, r5, 0x3233
		  lfs       f0, 0x1A24(r2)
		  addi      r6, r31, 0xA8
		  stfs      f1, 0x144(r30)
		  stfs      f0, 0x148(r30)
		  bl        0x29BAC
		  lis       r3, 0x804B
		  lis       r5, 0x6368
		  subi      r0, r3, 0x5344
		  lfs       f0, 0x1A44(r2)
		  stw       r0, 0x14C(r30)
		  mr        r4, r30
		  lfs       f1, 0x1A08(r2)
		  addi      r3, r30, 0x174
		  stfs      f0, 0x164(r30)
		  addi      r5, r5, 0x3130
		  lfs       f0, 0x1A10(r2)
		  addi      r6, r31, 0xB4
		  stfs      f1, 0x16C(r30)
		  stfs      f0, 0x170(r30)
		  bl        0x29B70
		  lis       r3, 0x804B
		  lis       r5, 0x6368
		  subi      r0, r3, 0x5344
		  lfs       f0, 0x1A48(r2)
		  stw       r0, 0x174(r30)
		  mr        r4, r30
		  lfs       f1, 0x1A08(r2)
		  addi      r3, r30, 0x19C
		  stfs      f0, 0x18C(r30)
		  addi      r5, r5, 0x3131
		  lfs       f0, 0x1A20(r2)
		  addi      r6, r31, 0xC8
		  stfs      f1, 0x194(r30)
		  stfs      f0, 0x198(r30)
		  bl        0x29B34
		  lis       r3, 0x804B
		  lis       r5, 0x6368
		  subi      r0, r3, 0x5344
		  lfs       f0, 0x1A10(r2)
		  stw       r0, 0x19C(r30)
		  mr        r4, r30
		  lfs       f1, 0x1A08(r2)
		  addi      r3, r30, 0x1C4
		  stfs      f0, 0x1B4(r30)
		  addi      r5, r5, 0x3132
		  lfs       f0, 0x1A20(r2)
		  addi      r6, r31, 0xDC
		  stfs      f1, 0x1BC(r30)
		  stfs      f0, 0x1C0(r30)
		  bl        0x29AF8
		  lis       r3, 0x804B
		  lis       r5, 0x6368
		  subi      r0, r3, 0x5344
		  lfs       f0, 0x1A4C(r2)
		  stw       r0, 0x1C4(r30)
		  mr        r4, r30
		  lfs       f1, 0x1A08(r2)
		  addi      r3, r30, 0x1EC
		  stfs      f0, 0x1DC(r30)
		  addi      r5, r5, 0x3133
		  lfs       f0, 0x1A20(r2)
		  addi      r6, r31, 0xF0
		  stfs      f1, 0x1E4(r30)
		  stfs      f0, 0x1E8(r30)
		  bl        0x29ABC
		  lis       r3, 0x804B
		  lis       r5, 0x6368
		  subi      r0, r3, 0x5344
		  lfs       f0, 0x1A50(r2)
		  stw       r0, 0x1EC(r30)
		  mr        r4, r30
		  lfs       f1, 0x1A08(r2)
		  addi      r3, r30, 0x214
		  stfs      f0, 0x204(r30)
		  addi      r5, r5, 0x3232
		  lfs       f0, 0x1A20(r2)
		  addi      r6, r31, 0x104
		  stfs      f1, 0x20C(r30)
		  stfs      f0, 0x210(r30)
		  bl        0x29A80
		  lis       r3, 0x804B
		  lfs       f2, 0x1A54(r2)
		  subi      r0, r3, 0x5344
		  lfs       f1, 0x1A08(r2)
		  stw       r0, 0x214(r30)
		  mr        r3, r30
		  lfs       f0, 0x1A58(r2)
		  stfs      f2, 0x22C(r30)
		  stfs      f1, 0x234(r30)
		  stfs      f0, 0x238(r30)
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
	 * Address:	803E9C1C
	 * Size:	000008
	 */
	u32 Chappy::TUnit::getCreatureType(void) { return 0x6; }

	/*
	 * --INFO--
	 * Address:	803E9C24
	 * Size:	000014
	 */
	void Chappy::TAnimFolder::getAnimRes(long)
	{
		/*
		.loc_0x0:
		  rlwinm    r4,r4,5,0,26
		  mr        r0, r3
		  addi      r3, r4, 0x4
		  add       r3, r0, r3
		  blr
		*/
	}

} // namespace title

} // namespace ebi

/*
 * --INFO--
 * Address:	803E9C38
 * Size:	000028
 */
void __sinit_ebiP2TitleChappy_cpp(void)
{
	/*
	.loc_0x0:
	  lis       r4, 0x8051
	  li        r0, -0x1
	  lfs       f0, 0x48B0(r4)
	  lis       r3, 0x804F
	  stw       r0, -0x6580(r13)
	  stfsu     f0, -0x61A0(r3)
	  stfs      f0, -0x657C(r13)
	  stfs      f0, 0x4(r3)
	  stfs      f0, 0x8(r3)
	  blr
	*/
}
