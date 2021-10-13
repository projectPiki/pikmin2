

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
 * Address:	803E7358
 * Size:	000148
 */
void ebi::title::Kogane::TMgr::__ct(void)
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
	  addi      r5, r4, 0x74C0
	  mr        r31, r3
	  li        r4, 0x1
	  stw       r30, 0x8(r1)
	  stw       r0, 0x0(r3)
	  lis       r3, 0x804E
	  addi      r0, r3, 0x788C
	  stw       r6, 0x10(r31)
	  addi      r3, r31, 0x1C
	  stw       r6, 0xC(r31)
	  stw       r6, 0x8(r31)
	  stw       r6, 0x4(r31)
	  stw       r5, 0x14(r31)
	  stw       r0, 0x0(r31)
	  bl        0xEB4
	  li        r3, 0x48
	  bl        -0x3C3514
	  mr.       r0, r3
	  beq-      .loc_0x74
	  bl        0x154
	  mr        r0, r3

	.loc_0x74:
	  stw       r0, 0x18(r31)
	  li        r3, 0x68
	  bl        -0x3C3530
	  mr.       r30, r3
	  beq-      .loc_0x128
	  lis       r4, 0x804E
	  lis       r3, 0x804F
	  addi      r0, r4, 0x79A8
	  lfs       f2, 0x19A0(r2)
	  stw       r0, 0x0(r30)
	  li        r4, 0
	  lfs       f1, 0x19A4(r2)
	  subi      r0, r3, 0x61C8
	  stfs      f2, 0x4(r30)
	  lfs       f0, 0x19A8(r2)
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
	  stw       r4, 0x58(r30)
	  stw       r4, 0x5C(r30)
	  stfs      f2, 0x2C(r30)
	  stfs      f2, 0x30(r30)
	  stfs      f0, 0x34(r30)
	  stfs      f2, 0x38(r30)
	  lwz       r3, -0x6514(r13)
	  lfs       f0, 0x54(r3)
	  fdivs     f1, f2, f0
	  bl        -0x325910
	  stw       r3, 0x3C(r30)
	  li        r4, 0
	  li        r0, -0x1
	  stw       r3, 0x40(r30)
	  stw       r4, 0x44(r30)
	  stw       r4, 0x48(r30)
	  stw       r4, 0x60(r30)
	  stw       r0, 0x64(r30)

	.loc_0x128:
	  stw       r30, 0x20C(r31)
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
 * Address:	803E74A0
 * Size:	000050
 */
void ebi::title::Kogane::TMgr::setArchive((JKRArchive*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r5, 0x8049
	  stw       r0, 0x14(r1)
	  addi      r5, r5, 0x75A4
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  addi      r3, r30, 0x1C
	  bl        -0x269D0
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
 * Address:	803E74F0
 * Size:	000028
 */
void ebi::title::Kogane::TMgr::initUnit(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r4, r3
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x20C(r3)
	  bl        0x1A0
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000078
 */
void ebi::title::Kogane::TAnimFolder::load((J3DModelData*, JKRArchive*))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803E7518
 * Size:	000068
 */
void ebi::title::Kogane::TAnimator::__ct(void)
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
	  subi      r0, r3, 0x61B8
	  addi      r3, r31, 0x4
	  li        r7, 0x2
	  stw       r0, 0x0(r31)
	  bl        -0x325D20
	  li        r0, 0
	  mr        r3, r31
	  stw       r0, 0x44(r31)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803E7580
 * Size:	00011C
 */
void ebi::title::Kogane::TAnimator::setArchive((JKRArchive*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r4
	  lis       r4, 0x8049
	  stw       r30, 0x18(r1)
	  mr        r30, r3
	  mr        r3, r31
	  stw       r29, 0x14(r1)
	  addi      r29, r4, 0x74A0
	  addi      r4, r29, 0x14C
	  stw       r28, 0x10(r1)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  mr.       r28, r3
	  bne-      .loc_0x60
	  addi      r3, r29, 0x164
	  addi      r5, r29, 0x17C
	  li        r4, 0x75
	  crclr     6, 0x6
	  bl        -0x3BCF9C

	.loc_0x60:
	  lis       r4, 0x24
	  mr        r3, r28
	  addi      r4, r4, 0x30
	  bl        -0x377D58
	  stw       r3, 0x44(r30)
	  li        r5, 0
	  b         .loc_0x9C

	.loc_0x7C:
	  lwz       r3, 0x80(r3)
	  rlwinm    r0,r5,2,14,29
	  addi      r5, r5, 0x1
	  lwzx      r3, r3, r0
	  lwz       r0, 0xC(r3)
	  rlwinm    r0,r0,0,20,15
	  ori       r0, r0, 0x2000
	  stw       r0, 0xC(r3)

	.loc_0x9C:
	  lwz       r3, 0x44(r30)
	  rlwinm    r0,r5,0,16,31
	  lhz       r4, 0x7C(r3)
	  cmplw     r0, r4
	  blt+      .loc_0x7C
	  lis       r4, 0x4
	  bl        -0x363D5C
	  lwz       r3, 0x44(r30)
	  bl        -0x363C0C
	  lwz       r28, 0x44(r30)
	  mr        r5, r31
	  addi      r3, r30, 0x4
	  addi      r6, r29, 0x11C
	  mr        r4, r28
	  bl        -0x1D944
	  li        r0, 0x1
	  mr        r4, r28
	  stw       r0, 0x20(r30)
	  mr        r5, r31
	  addi      r3, r30, 0x24
	  addi      r6, r29, 0x134
	  bl        -0x1D960
	  li        r0, 0x1
	  stw       r0, 0x40(r30)
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
void ebi::title::Kogane::TAnimator::newJ3DModel(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803E769C
 * Size:	000008
 */
void ebi::title::Kogane::TUnit::setController((Controller*))
{
	/*
	.loc_0x0:
	  stw       r4, 0x44(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803E76A4
 * Size:	0000F4
 */
void ebi::title::Kogane::TUnit::init((ebi::title::Kogane::TMgr*))
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
	  stw       r4, 0x48(r29)
	  lwz       r4, 0x48(r29)
	  lwz       r31, 0x18(r4)
	  bl        -0x3C382C
	  mr.       r30, r3
	  beq-      .loc_0x6C
	  lis       r3, 0x804A
	  lwz       r31, 0x44(r31)
	  addi      r0, r3, 0x19F0
	  stw       r0, 0x0(r30)
	  addi      r3, r30, 0x88
	  bl        -0x388AA8
	  mr        r3, r30
	  bl        -0x3813FC
	  mr        r3, r30
	  mr        r4, r31
	  lis       r5, 0x2
	  li        r6, 0x1
	  bl        -0x38138C

	.loc_0x6C:
	  stw       r30, 0x28(r29)
	  addi      r3, r29, 0x4C
	  lwz       r4, 0x48(r29)
	  lwz       r4, 0x18(r4)
	  bl        -0x1D90C
	  lwz       r4, -0x65D8(r13)
	  addi      r3, r1, 0x8
	  bl        -0x286B4
	  lfs       f0, 0x8(r1)
	  stfs      f0, 0x4(r29)
	  lfs       f0, 0xC(r1)
	  stfs      f0, 0x8(r29)
	  lwz       r3, 0x48(r29)
	  lfs       f0, 0x108(r3)
	  stfs      f0, 0x14(r29)
	  lwz       r3, 0x48(r29)
	  lfs       f0, 0x40(r3)
	  stfs      f0, 0x18(r29)
	  lwz       r3, 0x48(r29)
	  lfs       f0, 0x68(r3)
	  stfs      f0, 0x24(r29)
	  lwz       r3, 0x48(r29)
	  lfs       f0, 0x90(r3)
	  stfs      f0, 0x1C(r29)
	  lwz       r3, 0x48(r29)
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
 * Address:	803E7798
 * Size:	00004C
 */
void startZigzagWalk__Q43ebi5title6Kogane5TUnitFR10Vector2<float>
R10Vector2<float>(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  li        r0, -0x1
	  lfs       f0, 0x0(r4)
	  stfs      f0, 0x4(r3)
	  lfs       f0, 0x4(r4)
	  li        r4, 0x4
	  stfs      f0, 0x8(r3)
	  lfs       f0, 0x0(r5)
	  stfs      f0, 0x2C(r3)
	  lfs       f0, 0x4(r5)
	  stfs      f0, 0x30(r3)
	  stw       r0, 0x64(r3)
	  bl        0x90
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803E77E4
 * Size:	000030
 */
void ebi::title::Kogane::TUnit::goHome(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r0, 0x60(r3)
	  cmpwi     r0, 0
	  beq-      .loc_0x20
	  li        r4, 0x5
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
 * Address:	803E7814
 * Size:	000024
 */
void ebi::title::Kogane::TUnit::outOfCalc(void)
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
 * Address:	803E7838
 * Size:	000014
 */
void ebi::title::Kogane::TUnit::isCalc(void)
{
	/*
	.loc_0x0:
	  lwz       r3, 0x60(r3)
	  neg       r0, r3
	  or        r0, r0, r3
	  rlwinm    r3,r0,1,31,31
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803E784C
 * Size:	000014
 */
void ebi::title::Kogane::TUnit::isController(void)
{
	/*
	.loc_0x0:
	  lwz       r0, 0x60(r3)
	  subfic    r0, r0, 0x6
	  cntlzw    r0, r0
	  rlwinm    r3,r0,27,24,31
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803E7860
 * Size:	0002D0
 */
void ebi::title::Kogane::TUnit::startState(
    (ebi::title::Kogane::TUnit::enumState))
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
	  mr        r31, r3
	  cmplwi    r4, 0x6
	  stw       r4, 0x60(r3)
	  bgt-      .loc_0x2AC
	  lis       r3, 0x804F
	  rlwinm    r0,r4,2,0,29
	  subi      r3, r3, 0x61E4
	  lwzx      r0, r3, r0
	  mtctr     r0
	  bctr
	  lwz       r4, -0x65D8(r13)
	  addi      r3, r1, 0x8
	  bl        -0x28838
	  lfs       f0, 0x8(r1)
	  stfs      f0, 0x4(r31)
	  lfs       f0, 0xC(r1)
	  stfs      f0, 0x8(r31)
	  lwz       r4, 0x48(r31)
	  lwz       r3, -0x6514(r13)
	  lfs       f1, 0x1F8(r4)
	  lfs       f0, 0x54(r3)
	  fdivs     f1, f1, f0
	  bl        -0x325D8C
	  stw       r3, 0x3C(r31)
	  stw       r3, 0x40(r31)
	  b         .loc_0x2AC
	  lwz       r3, 0x48(r31)
	  lfs       f30, 0x158(r3)
	  lfs       f31, 0x180(r3)
	  bl        -0x31E354
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x14(r1)
	  fsubs     f1, f31, f30
	  lwz       r3, -0x6514(r13)
	  stw       r0, 0x10(r1)
	  lfd       f3, 0x19F8(r2)
	  lfd       f0, 0x10(r1)
	  lfs       f2, 0x19E4(r2)
	  fsubs     f3, f0, f3
	  lfs       f0, 0x54(r3)
	  fdivs     f2, f3, f2
	  fmadds    f1, f1, f2, f30
	  fdivs     f1, f1, f0
	  bl        -0x325DE4
	  stw       r3, 0x3C(r31)
	  stw       r3, 0x40(r31)
	  b         .loc_0x2AC
	  lfs       f1, 0x30(r31)
	  lis       r3, 0x8051
	  lfs       f0, 0x8(r31)
	  subi      r3, r3, 0x2E20
	  lfs       f2, 0x2C(r31)
	  fsubs     f1, f1, f0
	  lfs       f0, 0x4(r31)
	  lwz       r4, 0x48(r31)
	  fsubs     f2, f2, f0
	  lfs       f30, 0xE0(r4)
	  bl        -0x3B2860
	  fmr       f31, f1
	  bl        -0x31E3D0
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x14(r1)
	  lfs       f0, 0x19EC(r2)
	  stw       r0, 0x10(r1)
	  lfd       f2, 0x19F8(r2)
	  fmuls     f0, f0, f30
	  lfd       f1, 0x10(r1)
	  lfs       f4, 0x19E4(r2)
	  fsubs     f5, f1, f2
	  lfs       f3, 0x19E8(r2)
	  lfs       f2, 0x19B4(r2)
	  lfs       f1, 0x19A4(r2)
	  fmuls     f3, f3, f0
	  fdivs     f4, f5, f4
	  lfs       f0, 0x19A0(r2)
	  fmadds    f1, f2, f4, f1
	  fmadds    f2, f3, f1, f31
	  fcmpo     cr0, f2, f0
	  bge-      .loc_0x190
	  lfs       f0, 0x19F0(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fmuls     f0, f2, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x18(r1)
	  lwz       r0, 0x1C(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r3, r0
	  fneg      f1, f0
	  b         .loc_0x1B4

	.loc_0x190:
	  lfs       f0, 0x19F4(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fmuls     f0, f2, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x20(r1)
	  lwz       r0, 0x24(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f1, r3, r0

	.loc_0x1B4:
	  lfs       f0, 0x19A0(r2)
	  fcmpo     cr0, f2, f0
	  bge-      .loc_0x1C4
	  fneg      f2, f2

	.loc_0x1C4:
	  lfs       f0, 0x19F4(r2)
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
	  b         .loc_0x2AC
	  lwz       r3, 0x48(r31)
	  lfs       f30, 0x1D0(r3)
	  lfs       f31, 0x1A8(r3)
	  bl        -0x31E4C4
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x2C(r1)
	  fsubs     f1, f30, f31
	  lwz       r3, -0x6514(r13)
	  stw       r0, 0x28(r1)
	  lfd       f3, 0x19F8(r2)
	  lfd       f0, 0x28(r1)
	  lfs       f2, 0x19E4(r2)
	  fsubs     f3, f0, f3
	  lfs       f0, 0x54(r3)
	  fdivs     f2, f3, f2
	  fmadds    f1, f1, f2, f31
	  fdivs     f1, f1, f0
	  bl        -0x325F54
	  stw       r3, 0x3C(r31)
	  stw       r3, 0x40(r31)
	  b         .loc_0x2AC
	  lfs       f0, 0x8(r31)
	  lfs       f1, 0x4(r31)
	  fneg      f3, f0
	  lfs       f0, 0x19A0(r2)
	  fneg      f2, f1
	  fmuls     f1, f3, f3
	  fmadds    f1, f2, f2, f1
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x284
	  ble-      .loc_0x288
	  fsqrte    f0, f1
	  fmuls     f1, f0, f1
	  b         .loc_0x288

	.loc_0x284:
	  fmr       f1, f0

	.loc_0x288:
	  lfs       f0, 0x19A0(r2)
	  fcmpu     cr0, f0, f1
	  beq-      .loc_0x2A4
	  lfs       f0, 0x19A8(r2)
	  fdivs     f0, f0, f1
	  fmuls     f2, f2, f0
	  fmuls     f3, f3, f0

	.loc_0x2A4:
	  stfs      f2, 0xC(r31)
	  stfs      f3, 0x10(r31)

	.loc_0x2AC:
	  psq_l     f31,0x58(r1),0,0
	  lfd       f31, 0x50(r1)
	  psq_l     f30,0x48(r1),0,0
	  lfd       f30, 0x40(r1)
	  lwz       r0, 0x64(r1)
	  lwz       r31, 0x3C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x60
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803E7B30
 * Size:	000734
 */
void ebi::title::Kogane::TUnit::update(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  mr        r30, r3
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x71C
	  lwz       r0, 0x60(r30)
	  cmpwi     r0, 0
	  beq-      .loc_0x74
	  cmpwi     r0, 0x5
	  beq-      .loc_0x74
	  cmpwi     r0, 0x4
	  beq-      .loc_0x74
	  lwz       r3, 0x44(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0x74
	  lfs       f1, 0x60(r3)
	  lfs       f0, 0x1A00(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x74
	  mr        r3, r30
	  li        r4, 0x6
	  bl        -0x340

	.loc_0x74:
	  lwz       r0, 0x60(r30)
	  lwz       r31, 0x64(r30)
	  cmpwi     r0, 0x4
	  beq-      .loc_0x3AC
	  bge-      .loc_0xA0
	  cmpwi     r0, 0x2
	  beq-      .loc_0x230
	  bge-      .loc_0x344
	  cmpwi     r0, 0x1
	  bge-      .loc_0x1F8
	  b         .loc_0x4E8

	.loc_0xA0:
	  cmpwi     r0, 0x6
	  beq-      .loc_0xB0
	  bge-      .loc_0x4E8
	  b         .loc_0x44C

	.loc_0xB0:
	  lwz       r3, 0x3C(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0xC4
	  subi      r0, r3, 0x1
	  stw       r0, 0x3C(r30)

	.loc_0xC4:
	  li        r0, 0
	  stw       r0, 0x64(r30)
	  lwz       r3, 0x44(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0x1DC
	  lfs       f2, 0x58(r3)
	  lfs       f0, 0x1A00(r2)
	  fabs      f1, f2
	  frsp      f1, f1
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x190
	  lwz       r3, 0x48(r30)
	  lfs       f5, 0xC(r30)
	  lfs       f0, 0x130(r3)
	  lfs       f4, 0x10(r30)
	  fneg      f1, f5
	  fmuls     f3, f2, f0
	  lfs       f0, 0x19A0(r2)
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
	  ble-      .loc_0x158
	  fmadds    f2, f3, f3, f2
	  fcmpo     cr0, f2, f0
	  ble-      .loc_0x15C
	  fsqrte    f0, f2
	  fmuls     f2, f0, f2
	  b         .loc_0x15C

	.loc_0x158:
	  fmr       f2, f0

	.loc_0x15C:
	  lfs       f0, 0x19A0(r2)
	  fcmpu     cr0, f0, f2
	  beq-      .loc_0x188
	  lfs       f1, 0x19A8(r2)
	  lfs       f0, 0xC(r30)
	  fdivs     f1, f1, f2
	  fmuls     f0, f0, f1
	  stfs      f0, 0xC(r30)
	  lfs       f0, 0x10(r30)
	  fmuls     f0, f0, f1
	  stfs      f0, 0x10(r30)

	.loc_0x188:
	  li        r0, 0x1
	  stw       r0, 0x64(r30)

	.loc_0x190:
	  lwz       r3, 0x44(r30)
	  lfs       f0, 0x1A00(r2)
	  lfs       f2, 0x5C(r3)
	  fcmpo     cr0, f2, f0
	  ble-      .loc_0x1DC
	  lfs       f1, 0x14(r30)
	  li        r0, 0x2
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
	  stw       r0, 0x64(r30)

	.loc_0x1DC:
	  lwz       r0, 0x3C(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0x4E8
	  mr        r3, r30
	  li        r4, 0x5
	  bl        -0x4C0
	  b         .loc_0x4E8

	.loc_0x1F8:
	  li        r0, 0
	  stw       r0, 0x64(r30)
	  lwz       r3, 0x3C(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0x214
	  subi      r0, r3, 0x1
	  stw       r0, 0x3C(r30)

	.loc_0x214:
	  lwz       r0, 0x3C(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0x4E8
	  mr        r3, r30
	  li        r4, 0x2
	  bl        -0x4F8
	  b         .loc_0x4E8

	.loc_0x230:
	  li        r0, 0x1
	  lfs       f2, 0x19C8(r2)
	  stw       r0, 0x64(r30)
	  lfs       f5, 0x1A04(r2)
	  lwz       r3, -0x6514(r13)
	  lfs       f6, 0x19D4(r2)
	  lfs       f0, 0x54(r3)
	  lfs       f1, 0x34(r30)
	  fmuls     f0, f2, f0
	  lfs       f3, 0x38(r30)
	  lfs       f2, 0xC(r30)
	  lfs       f4, 0x10(r30)
	  fmuls     f5, f5, f0
	  lfs       f0, 0x19A0(r2)
	  fmuls     f5, f6, f5
	  fmuls     f1, f1, f5
	  fmuls     f3, f3, f5
	  fadds     f1, f2, f1
	  fadds     f2, f4, f3
	  stfs      f1, 0xC(r30)
	  stfs      f2, 0x10(r30)
	  lfs       f3, 0xC(r30)
	  lfs       f2, 0x10(r30)
	  fmuls     f1, f3, f3
	  fmuls     f2, f2, f2
	  fadds     f1, f1, f2
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x2B8
	  fmadds    f2, f3, f3, f2
	  fcmpo     cr0, f2, f0
	  ble-      .loc_0x2BC
	  fsqrte    f0, f2
	  fmuls     f2, f0, f2
	  b         .loc_0x2BC

	.loc_0x2B8:
	  fmr       f2, f0

	.loc_0x2BC:
	  lfs       f0, 0x19A0(r2)
	  fcmpu     cr0, f0, f2
	  beq-      .loc_0x2E8
	  lfs       f1, 0x19A8(r2)
	  lfs       f0, 0xC(r30)
	  fdivs     f1, f1, f2
	  fmuls     f0, f0, f1
	  stfs      f0, 0xC(r30)
	  lfs       f0, 0x10(r30)
	  fmuls     f0, f0, f1
	  stfs      f0, 0x10(r30)

	.loc_0x2E8:
	  lfs       f1, 0x10(r30)
	  lfs       f0, 0x38(r30)
	  lfs       f2, 0xC(r30)
	  fsubs     f3, f1, f0
	  lfs       f1, 0x34(r30)
	  lfs       f0, 0x19A0(r2)
	  fsubs     f1, f2, f1
	  fmuls     f2, f3, f3
	  fmadds    f1, f1, f1, f2
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x324
	  ble-      .loc_0x328
	  fsqrte    f0, f1
	  fmuls     f1, f0, f1
	  b         .loc_0x328

	.loc_0x324:
	  fmr       f1, f0

	.loc_0x328:
	  lfs       f0, 0x19D4(r2)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x4E8
	  mr        r3, r30
	  li        r4, 0x3
	  bl        -0x60C
	  b         .loc_0x4E8

	.loc_0x344:
	  li        r0, 0x2
	  stw       r0, 0x64(r30)
	  lwz       r3, 0x3C(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0x360
	  subi      r0, r3, 0x1
	  stw       r0, 0x3C(r30)

	.loc_0x360:
	  lwz       r0, 0x3C(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0x37C
	  mr        r3, r30
	  li        r4, 0x1
	  bl        -0x644
	  b         .loc_0x4E8

	.loc_0x37C:
	  lfs       f3, 0x14(r30)
	  lfs       f0, 0xC(r30)
	  lfs       f2, 0x10(r30)
	  fmuls     f0, f0, f3
	  lfs       f1, 0x4(r30)
	  fmuls     f2, f2, f3
	  lfs       f3, 0x8(r30)
	  fadds     f0, f1, f0
	  fadds     f1, f3, f2
	  stfs      f0, 0x4(r30)
	  stfs      f1, 0x8(r30)
	  b         .loc_0x4E8

	.loc_0x3AC:
	  li        r0, 0x2
	  lfs       f0, 0x19A0(r2)
	  stw       r0, 0x64(r30)
	  lfs       f3, 0xC(r30)
	  lfs       f2, 0x10(r30)
	  fmuls     f1, f3, f3
	  fmuls     f2, f2, f2
	  fadds     f1, f1, f2
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x3EC
	  fmadds    f2, f3, f3, f2
	  fcmpo     cr0, f2, f0
	  ble-      .loc_0x3F0
	  fsqrte    f0, f2
	  fmuls     f2, f0, f2
	  b         .loc_0x3F0

	.loc_0x3EC:
	  fmr       f2, f0

	.loc_0x3F0:
	  lfs       f0, 0x19A0(r2)
	  fcmpu     cr0, f0, f2
	  beq-      .loc_0x41C
	  lfs       f1, 0x19A8(r2)
	  lfs       f0, 0xC(r30)
	  fdivs     f1, f1, f2
	  fmuls     f0, f0, f1
	  stfs      f0, 0xC(r30)
	  lfs       f0, 0x10(r30)
	  fmuls     f0, f0, f1
	  stfs      f0, 0x10(r30)

	.loc_0x41C:
	  lfs       f3, 0x14(r30)
	  lfs       f0, 0xC(r30)
	  lfs       f2, 0x10(r30)
	  fmuls     f0, f0, f3
	  lfs       f1, 0x4(r30)
	  fmuls     f2, f2, f3
	  lfs       f3, 0x8(r30)
	  fadds     f0, f1, f0
	  fadds     f1, f3, f2
	  stfs      f0, 0x4(r30)
	  stfs      f1, 0x8(r30)
	  b         .loc_0x4E8

	.loc_0x44C:
	  li        r0, 0x2
	  lfs       f0, 0x19A0(r2)
	  stw       r0, 0x64(r30)
	  lfs       f3, 0xC(r30)
	  lfs       f2, 0x10(r30)
	  fmuls     f1, f3, f3
	  fmuls     f2, f2, f2
	  fadds     f1, f1, f2
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x48C
	  fmadds    f2, f3, f3, f2
	  fcmpo     cr0, f2, f0
	  ble-      .loc_0x490
	  fsqrte    f0, f2
	  fmuls     f2, f0, f2
	  b         .loc_0x490

	.loc_0x48C:
	  fmr       f2, f0

	.loc_0x490:
	  lfs       f0, 0x19A0(r2)
	  fcmpu     cr0, f0, f2
	  beq-      .loc_0x4BC
	  lfs       f1, 0x19A8(r2)
	  lfs       f0, 0xC(r30)
	  fdivs     f1, f1, f2
	  fmuls     f0, f0, f1
	  stfs      f0, 0xC(r30)
	  lfs       f0, 0x10(r30)
	  fmuls     f0, f0, f1
	  stfs      f0, 0x10(r30)

	.loc_0x4BC:
	  lfs       f3, 0x14(r30)
	  lfs       f0, 0xC(r30)
	  lfs       f2, 0x10(r30)
	  fmuls     f0, f0, f3
	  lfs       f1, 0x4(r30)
	  fmuls     f2, f2, f3
	  lfs       f3, 0x8(r30)
	  fadds     f0, f1, f0
	  fadds     f1, f3, f2
	  stfs      f0, 0x4(r30)
	  stfs      f1, 0x8(r30)

	.loc_0x4E8:
	  lwz       r0, 0x60(r30)
	  cmpwi     r0, 0x4
	  beq-      .loc_0x52C
	  bge-      .loc_0x504
	  cmpwi     r0, 0
	  beq-      .loc_0x510
	  b         .loc_0x574

	.loc_0x504:
	  cmpwi     r0, 0x6
	  bge-      .loc_0x574
	  b         .loc_0x550

	.loc_0x510:
	  lwz       r4, -0x65D8(r13)
	  addi      r3, r1, 0x8
	  bl        -0x28FD0
	  lfs       f0, 0x8(r1)
	  stfs      f0, 0x4(r30)
	  lfs       f0, 0xC(r1)
	  stfs      f0, 0x8(r30)

	.loc_0x52C:
	  lwz       r3, -0x65D8(r13)
	  mr        r4, r30
	  bl        -0x29140
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x580
	  mr        r3, r30
	  li        r4, 0x3
	  bl        -0x818
	  b         .loc_0x580

	.loc_0x550:
	  lwz       r3, -0x65D8(r13)
	  mr        r4, r30
	  bl        -0x29098
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x580
	  mr        r3, r30
	  li        r4, 0
	  bl        -0x83C
	  b         .loc_0x580

	.loc_0x574:
	  lwz       r3, -0x65D8(r13)
	  mr        r4, r30
	  bl        -0x29208

	.loc_0x580:
	  lwz       r0, 0x64(r30)
	  cmpw      r0, r31
	  beq-      .loc_0x600
	  cmpwi     r0, 0x1
	  beq-      .loc_0x5B0
	  bge-      .loc_0x5A4
	  cmpwi     r0, 0
	  bge-      .loc_0x5E8
	  b         .loc_0x600

	.loc_0x5A4:
	  cmpwi     r0, 0x3
	  bge-      .loc_0x600
	  b         .loc_0x5CC

	.loc_0x5B0:
	  lfs       f1, 0x19A8(r2)
	  addi      r3, r30, 0x4C
	  li        r4, 0
	  bl        -0x1E280
	  addi      r3, r30, 0x4C
	  bl        -0x1E1E4
	  b         .loc_0x600

	.loc_0x5CC:
	  lfs       f1, 0x19A8(r2)
	  addi      r3, r30, 0x4C
	  li        r4, 0
	  bl        -0x1E29C
	  addi      r3, r30, 0x4C
	  bl        -0x1E200
	  b         .loc_0x600

	.loc_0x5E8:
	  lfs       f1, 0x19A8(r2)
	  addi      r3, r30, 0x4C
	  li        r4, 0x1
	  bl        -0x1E2B8
	  addi      r3, r30, 0x4C
	  bl        -0x1E21C

	.loc_0x600:
	  mr        r3, r30
	  bl        -0x275B4
	  lwz       r3, 0x58(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0x6AC
	  lwz       r0, 0x54(r30)
	  cmpwi     r0, 0x2
	  beq-      .loc_0x674
	  bge-      .loc_0x6AC
	  cmpwi     r0, 0
	  beq-      .loc_0x6AC
	  bge-      .loc_0x638
	  b         .loc_0x6AC
	  b         .loc_0x6AC

	.loc_0x638:
	  lfs       f2, 0x50(r30)
	  lfs       f1, 0x18(r3)
	  lfs       f0, 0x4C(r30)
	  fmadds    f0, f2, f1, f0
	  stfs      f0, 0x4C(r30)
	  lwz       r3, 0x58(r30)
	  lfs       f1, 0x4C(r30)
	  lfs       f2, 0x14(r3)
	  fcmpo     cr0, f1, f2
	  ble-      .loc_0x6AC
	  lfs       f0, 0x10(r3)
	  fsubs     f0, f2, f0
	  fsubs     f0, f1, f0
	  stfs      f0, 0x4C(r30)
	  b         .loc_0x6AC

	.loc_0x674:
	  lfs       f2, 0x50(r30)
	  lfs       f1, 0x18(r3)
	  lfs       f0, 0x4C(r30)
	  fmadds    f0, f2, f1, f0
	  stfs      f0, 0x4C(r30)
	  lwz       r3, 0x58(r30)
	  lfs       f0, 0x4C(r30)
	  lfs       f1, 0xC(r3)
	  fcmpo     cr0, f0, f1
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x6AC
	  stfs      f1, 0x4C(r30)
	  li        r0, 0x3
	  stw       r0, 0x54(r30)

	.loc_0x6AC:
	  lwz       r3, 0x58(r30)
	  lwz       r4, 0x28(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0x6E0
	  lfs       f0, 0x4C(r30)
	  lwz       r3, 0x0(r3)
	  stfs      f0, 0x8(r3)
	  lwz       r3, 0x4(r4)
	  lwz       r4, 0x58(r30)
	  lwz       r3, 0x28(r3)
	  lwz       r0, 0x4(r4)
	  lwz       r3, 0x0(r3)
	  stw       r0, 0x54(r3)

	.loc_0x6E0:
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

	.loc_0x71C:
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
 * Address:	803E8264
 * Size:	00032C
 */
void ebi::title::Kogane::TParam::__ct(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  extsh.    r0, r4
	  lis       r4, 0x8049
	  stw       r31, 0xC(r1)
	  addi      r31, r4, 0x74A0
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  beq-      .loc_0x30
	  addi      r0, r30, 0x1EC
	  stw       r0, 0x0(r30)

	.loc_0x30:
	  li        r0, 0
	  lis       r5, 0x6230
	  stw       r0, 0x4(r30)
	  addi      r0, r2, 0x19AC
	  mr        r4, r30
	  addi      r3, r30, 0xC
	  stw       r0, 0x8(r30)
	  addi      r5, r5, 0x3030
	  addi      r6, r31, 0x2C
	  bl        0x2B3A0
	  lis       r3, 0x804B
	  lis       r5, 0x6230
	  subi      r0, r3, 0x5344
	  lfs       f0, 0x19B4(r2)
	  stw       r0, 0xC(r30)
	  mr        r4, r30
	  lfs       f1, 0x19A0(r2)
	  addi      r3, r30, 0x34
	  stfs      f0, 0x24(r30)
	  addi      r5, r5, 0x3031
	  lfs       f0, 0x19B8(r2)
	  addi      r6, r31, 0x38
	  stfs      f1, 0x2C(r30)
	  stfs      f0, 0x30(r30)
	  bl        0x2B364
	  lis       r3, 0x804B
	  lis       r5, 0x6230
	  subi      r0, r3, 0x5344
	  lfs       f0, 0x19BC(r2)
	  stw       r0, 0x34(r30)
	  mr        r4, r30
	  lfs       f1, 0x19A0(r2)
	  addi      r3, r30, 0x5C
	  stfs      f0, 0x4C(r30)
	  addi      r5, r5, 0x3032
	  lfs       f0, 0x19C0(r2)
	  addi      r6, r31, 0x48
	  stfs      f1, 0x54(r30)
	  stfs      f0, 0x58(r30)
	  bl        0x2B328
	  lis       r3, 0x804B
	  lis       r5, 0x6230
	  subi      r0, r3, 0x5344
	  lfs       f0, 0x19BC(r2)
	  stw       r0, 0x5C(r30)
	  mr        r4, r30
	  lfs       f1, 0x19A0(r2)
	  addi      r3, r30, 0x84
	  stfs      f0, 0x74(r30)
	  addi      r5, r5, 0x3033
	  lfs       f0, 0x19C0(r2)
	  addi      r6, r31, 0x58
	  stfs      f1, 0x7C(r30)
	  stfs      f0, 0x80(r30)
	  bl        0x2B2EC
	  lis       r3, 0x804B
	  lis       r5, 0x6B67
	  subi      r0, r3, 0x5344
	  lfs       f0, 0x19C4(r2)
	  stw       r0, 0x84(r30)
	  mr        r4, r30
	  lfs       f1, 0x19A0(r2)
	  addi      r3, r30, 0xAC
	  stfs      f0, 0x9C(r30)
	  addi      r5, r5, 0x3030
	  lfs       f0, 0x19C0(r2)
	  addi      r6, r31, 0x6C
	  stfs      f1, 0xA4(r30)
	  stfs      f0, 0xA8(r30)
	  bl        0x2B2B0
	  lis       r3, 0x804B
	  lis       r5, 0x6B67
	  subi      r0, r3, 0x5344
	  lfs       f0, 0x19C8(r2)
	  stw       r0, 0xAC(r30)
	  mr        r4, r30
	  lfs       f1, 0x19A0(r2)
	  addi      r3, r30, 0xD4
	  stfs      f0, 0xC4(r30)
	  addi      r5, r5, 0x3031
	  lfs       f0, 0x19CC(r2)
	  addi      r6, r31, 0x80
	  stfs      f1, 0xCC(r30)
	  stfs      f0, 0xD0(r30)
	  bl        0x2B274
	  lis       r3, 0x804B
	  lis       r5, 0x6B67
	  subi      r0, r3, 0x5344
	  lfs       f0, 0x19B8(r2)
	  stw       r0, 0xD4(r30)
	  mr        r4, r30
	  lfs       f1, 0x19A0(r2)
	  addi      r3, r30, 0xFC
	  stfs      f0, 0xEC(r30)
	  addi      r5, r5, 0x3135
	  lfs       f0, 0x19D0(r2)
	  addi      r6, r31, 0x8C
	  stfs      f1, 0xF4(r30)
	  stfs      f0, 0xF8(r30)
	  bl        0x2B238
	  lis       r3, 0x804B
	  lis       r5, 0x6B67
	  subi      r0, r3, 0x5344
	  lfs       f0, 0x19D4(r2)
	  stw       r0, 0xFC(r30)
	  mr        r4, r30
	  lfs       f1, 0x19A0(r2)
	  addi      r3, r30, 0x124
	  stfs      f0, 0x114(r30)
	  addi      r5, r5, 0x3130
	  lfs       f0, 0x19A8(r2)
	  addi      r6, r31, 0x98
	  stfs      f1, 0x11C(r30)
	  stfs      f0, 0x120(r30)
	  bl        0x2B1FC
	  lis       r3, 0x804B
	  lis       r5, 0x6B67
	  subi      r0, r3, 0x5344
	  lfs       f0, 0x19A8(r2)
	  stw       r0, 0x124(r30)
	  mr        r4, r30
	  lfs       f1, 0x19A0(r2)
	  addi      r3, r30, 0x14C
	  stfs      f0, 0x13C(r30)
	  addi      r5, r5, 0x3131
	  lfs       f0, 0x19B8(r2)
	  addi      r6, r31, 0xAC
	  stfs      f1, 0x144(r30)
	  stfs      f0, 0x148(r30)
	  bl        0x2B1C0
	  lis       r3, 0x804B
	  lis       r5, 0x6B67
	  subi      r0, r3, 0x5344
	  lfs       f0, 0x19D8(r2)
	  stw       r0, 0x14C(r30)
	  mr        r4, r30
	  lfs       f1, 0x19A0(r2)
	  addi      r3, r30, 0x174
	  stfs      f0, 0x164(r30)
	  addi      r5, r5, 0x3132
	  lfs       f0, 0x19B8(r2)
	  addi      r6, r31, 0xC0
	  stfs      f1, 0x16C(r30)
	  stfs      f0, 0x170(r30)
	  bl        0x2B184
	  lis       r3, 0x804B
	  lis       r5, 0x6B67
	  subi      r0, r3, 0x5344
	  lfs       f0, 0x19DC(r2)
	  stw       r0, 0x174(r30)
	  mr        r4, r30
	  lfs       f1, 0x19A0(r2)
	  addi      r3, r30, 0x19C
	  stfs      f0, 0x18C(r30)
	  addi      r5, r5, 0x3133
	  lfs       f0, 0x19B8(r2)
	  addi      r6, r31, 0xD4
	  stfs      f1, 0x194(r30)
	  stfs      f0, 0x198(r30)
	  bl        0x2B148
	  lis       r3, 0x804B
	  lis       r5, 0x6B67
	  subi      r0, r3, 0x5344
	  lfs       f0, 0x19A8(r2)
	  stw       r0, 0x19C(r30)
	  mr        r4, r30
	  lfs       f1, 0x19A0(r2)
	  addi      r3, r30, 0x1C4
	  stfs      f0, 0x1B4(r30)
	  addi      r5, r5, 0x3134
	  lfs       f0, 0x19B8(r2)
	  addi      r6, r31, 0xE8
	  stfs      f1, 0x1BC(r30)
	  stfs      f0, 0x1C0(r30)
	  bl        0x2B10C
	  lis       r3, 0x804B
	  lfs       f2, 0x19E0(r2)
	  subi      r0, r3, 0x5344
	  lfs       f1, 0x19A0(r2)
	  stw       r0, 0x1C4(r30)
	  mr        r3, r30
	  lfs       f0, 0x19C8(r2)
	  stfs      f2, 0x1DC(r30)
	  stfs      f1, 0x1E4(r30)
	  stfs      f0, 0x1E8(r30)
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
 * Address:	803E8590
 * Size:	000008
 */
void ebi::title::Kogane::TUnit::getCreatureType(void)
{
	/*
	.loc_0x0:
	  li        r3, 0x5
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803E8598
 * Size:	000014
 */
void ebi::title::Kogane::TAnimFolder::getAnimRes((long))
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

/*
 * --INFO--
 * Address:	803E85AC
 * Size:	000004
 */
void ebi::E3DAnimRes::__ct(void)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803E85B0
 * Size:	000028
 */
void __sinit_ebiP2TitleKogane_cpp(void)
{
	/*
	.loc_0x0:
	  lis       r4, 0x8051
	  li        r0, -0x1
	  lfs       f0, 0x48B0(r4)
	  lis       r3, 0x804F
	  stw       r0, -0x6588(r13)
	  stfsu     f0, -0x61F0(r3)
	  stfs      f0, -0x6584(r13)
	  stfs      f0, 0x4(r3)
	  stfs      f0, 0x8(r3)
	  blr
	*/
}
