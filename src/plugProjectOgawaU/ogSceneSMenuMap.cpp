

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
 * Address:	80312BFC
 * Size:	000050
 */
void og::newScreen::SMenuMap::__ct(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        0x13EB80
	  lis       r4, 0x804E
	  lis       r3, 0x804E
	  subi      r0, r4, 0x7A14
	  li        r4, 0x1
	  stw       r0, 0x0(r31)
	  subi      r0, r3, 0x7A64
	  mr        r3, r31
	  stw       r4, 0x220(r31)
	  stw       r0, 0x0(r31)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000074
 */
void og::newScreen::SceneSMenuBase::__dt(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000084
 */
void og::newScreen::SMenuMap::__dt(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80312C4C
 * Size:	000148
 */
void og::newScreen::SMenuMap::doUserCallBackFunc((Resource::MgrCommand*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  mflr      r0
	  lis       r4, 0x4F
	  lis       r5, 0x5F41
	  stw       r0, 0x54(r1)
	  addi      r6, r5, 0x4C4C
	  addi      r4, r4, 0x4741
	  li        r5, 0x534D
	  stw       r31, 0x4C(r1)
	  stw       r30, 0x48(r1)
	  stw       r29, 0x44(r1)
	  li        r29, 0
	  stw       r28, 0x40(r1)
	  mr        r28, r3
	  lis       r3, 0x8049
	  lwz       r30, 0x21C(r28)
	  subi      r31, r3, 0x1D00
	  mr        r3, r30
	  bl        -0x3978
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x5C
	  lwz       r29, 0x98(r30)
	  b         .loc_0x74

	.loc_0x5C:
	  addi      r3, r31, 0xC
	  addi      r5, r31, 0x20
	  li        r4, 0x46
	  li        r6, 0
	  crclr     6, 0x6
	  bl        -0x2E867C

	.loc_0x74:
	  cmpwi     r29, 0x2
	  beq-      .loc_0xAC
	  bge-      .loc_0x90
	  cmpwi     r29, 0
	  beq-      .loc_0x9C
	  bge-      .loc_0xA4
	  b         .loc_0xBC

	.loc_0x90:
	  cmpwi     r29, 0x4
	  bge-      .loc_0xBC
	  b         .loc_0xB4

	.loc_0x9C:
	  addi      r5, r31, 0x38
	  b         .loc_0xC0

	.loc_0xA4:
	  addi      r5, r31, 0x64
	  b         .loc_0xC0

	.loc_0xAC:
	  addi      r5, r31, 0x90
	  b         .loc_0xC0

	.loc_0xB4:
	  addi      r5, r31, 0xBC
	  b         .loc_0xC0

	.loc_0xBC:
	  addi      r5, r31, 0x38

	.loc_0xC0:
	  addi      r3, r28, 0x4
	  subi      r4, r2, 0xB38
	  crclr     6, 0x6
	  bl        -0x24B8E0
	  addi      r3, r1, 0x8
	  addi      r4, r28, 0x4
	  bl        0x1398B4
	  lwz       r3, -0x63D8(r13)
	  addi      r4, r1, 0x8
	  bl        0x1399E4
	  cmplwi    r3, 0
	  beq-      .loc_0x114
	  lwz       r0, 0x34(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x128
	  addi      r3, r31, 0xC
	  addi      r5, r31, 0xE4
	  li        r4, 0x61
	  crclr     6, 0x6
	  bl        -0x2E8718
	  b         .loc_0x128

	.loc_0x114:
	  addi      r3, r31, 0xC
	  addi      r5, r31, 0xF4
	  li        r4, 0x66
	  crclr     6, 0x6
	  bl        -0x2E8730

	.loc_0x128:
	  lwz       r0, 0x54(r1)
	  lwz       r31, 0x4C(r1)
	  lwz       r30, 0x48(r1)
	  lwz       r29, 0x44(r1)
	  lwz       r28, 0x40(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80312D94
 * Size:	000080
 */
void og::newScreen::SMenuMap::doCreateObj((JKRArchive*))
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
	  li        r3, 0x158
	  bl        -0x2EEF10
	  mr.       r4, r3
	  beq-      .loc_0x3C
	  lis       r4, 0x8049
	  subi      r4, r4, 0x1BFC
	  bl        -0x36D8
	  mr        r4, r3

	.loc_0x3C:
	  mr        r3, r30
	  mr        r5, r31
	  bl        0x13EF9C
	  lis       r4, 0x8051
	  mr        r3, r30
	  addi      r5, r4, 0x3C40
	  li        r4, 0
	  lbz       r7, 0x1B(r5)
	  li        r5, 0
	  li        r6, 0
	  bl        0x13F48C
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
 * Address:	80312E14
 * Size:	000004
 */
void og::newScreen::SMenuMap::doUpdateActive(void)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80312E18
 * Size:	000068
 */
void og::newScreen::SMenuMap::doConfirmSetScene((Screen::SetSceneArg&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r3, r4
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  li        r31, 0
	  lwz       r12, 0x0(r4)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  subi      r0, r3, 0x2710
	  cmplwi    r0, 0x1B
	  bgt-      .loc_0x50
	  lis       r3, 0x804E
	  rlwinm    r0,r0,2,0,29
	  subi      r3, r3, 0x7AD4
	  lwzx      r0, r3, r0
	  mtctr     r0
	  bctr
	  li        r31, 0x1

	.loc_0x50:
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
 * Address:	80312E80
 * Size:	00000C
 */
void og::newScreen::SMenuMap::doSetBackupScene((Screen::SetSceneArg&))
{
	/*
	.loc_0x0:
	  li        r0, 0
	  stb       r0, 0x9(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000084
 */
void og::newScreen::SMenuMap::close(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80312E8C
 * Size:	00000C
 */
void og::newScreen::SMenuMap::getResName( const
{
	/*
	.loc_0x0:
	  lis       r3, 0x8049
	  subi      r3, r3, 0x1BE0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80312E98
 * Size:	000008
 */
void og::newScreen::SMenuMap::getSceneType(void)
{
	/*
	.loc_0x0:
	  li        r3, 0x271D
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80312EA0
 * Size:	00000C
 */
void og::newScreen::SMenuMap::getOwnerID(void)
{
	/*
	.loc_0x0:
	  lis       r3, 0x4F
	  addi      r3, r3, 0x4741
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80312EAC
 * Size:	000010
 */
void og::newScreen::SMenuMap::getMemberID(void)
{
	/*
	.loc_0x0:
	  lis       r4, 0x5F4D
	  li        r3, 0x534D
	  addi      r4, r4, 0x4150
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80312EBC
 * Size:	000008
 */
void og::newScreen::SMenuMap::isUseBackupSceneInfo(void)
{
	/*
	.loc_0x0:
	  li        r3, 0x1
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80312EC4
 * Size:	000008
 */
void og::newScreen::SceneSMenuBase::doGetFinishState(void)
{
	/*
	.loc_0x0:
	  lwz       r3, 0x220(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80312ECC
 * Size:	000004
 */
void Screen::SceneBase::doUserCallBackFunc( (Resource::MgrCommand *))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80312ED0
 * Size:	000028
 */
void __sinit_ogSceneSMenuMap_cpp(void)
{
	/*
	.loc_0x0:
	  lis       r4, 0x8051
	  li        r0, -0x1
	  lfs       f0, 0x48B0(r4)
	  lis       r3, 0x804E
	  stw       r0, -0x6828(r13)
	  stfsu     f0, -0x7AE0(r3)
	  stfs      f0, -0x6824(r13)
	  stfs      f0, 0x4(r3)
	  stfs      f0, 0x8(r3)
	  blr
	*/
}
