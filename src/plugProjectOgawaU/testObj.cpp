

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
 * Address:	........
 * Size:	000060
 */
void og::newScreen::Test::__ct((char const*))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8030D868
 * Size:	000094
 */
void Screen::ObjBase::__dt(void)
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
	  beq-      .loc_0x78
	  lis       r4, 0x804F
	  subi      r4, r4, 0x28A8
	  stw       r4, 0x0(r30)
	  addi      r0, r4, 0x10
	  stw       r0, 0x18(r30)
	  beq-      .loc_0x68
	  lis       r4, 0x804E
	  subi      r4, r4, 0x7DC0
	  stw       r4, 0x0(r30)
	  addi      r0, r4, 0x10
	  stw       r0, 0x18(r30)
	  bl        0x103D1C
	  addi      r3, r30, 0x18
	  li        r4, 0
	  bl        -0x2F088C
	  mr        r3, r30
	  li        r4, 0
	  bl        0x103CBC

	.loc_0x68:
	  extsh.    r0, r31
	  ble-      .loc_0x78
	  mr        r3, r30
	  bl        -0x2E9828

	.loc_0x78:
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
 * Address:	........
 * Size:	0000AC
 */
void og::newScreen::Test::__dt(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00011C
 */
void og::newScreen::Test::doCreate((JKRArchive*))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000040
 */
void og::newScreen::Test::doUpdate(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000034
 */
void og::newScreen::Test::doDraw((Graphics&))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void og::newScreen::Test::doStart((Screen::StartSceneArg const*))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void og::newScreen::Test::doEnd((Screen::EndSceneArg const*))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000004
 */
void og::newScreen::Test::doUpdateFadeinFinish(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000004
 */
void og::newScreen::Test::doUpdateFinish(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000004
 */
void og::newScreen::Test::doUpdateFadeoutFinish(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void og::newScreen::Test::doUpdateFadein(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void og::newScreen::Test::doUpdateFadeout(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void og::Screen::DispMemberTest::getSize(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00000C
 */
void og::Screen::DispMemberTest::getOwnerID(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000010
 */
void og::Screen::DispMemberTest::getMemberID(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8030D8FC
 * Size:	000060
 */
void Screen::ObjBase::setOwner((Screen::SceneBase*))
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
	  lwz       r0, 0x34(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x44
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  subi      r3, r3, 0x1F88
	  li        r4, 0x81
	  subi      r5, r5, 0x1F7C
	  crclr     6, 0x6
	  bl        -0x2E32FC

	.loc_0x44:
	  stw       r31, 0x34(r30)
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
 * Address:	8030D95C
 * Size:	000008
 */
void Screen::ObjBase::getOwner( const
{
	/*
	.loc_0x0:
	  lwz       r3, 0x34(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8030D964
 * Size:	000008
 */
void Screen::ObjBase::doConfirmSetScene( (Screen::SetSceneArg &))
{
	/*
	.loc_0x0:
	  li        r3, 0x1
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8030D96C
 * Size:	000008
 */
void Screen::ObjBase::doConfirmStartScene( (Screen::StartSceneArg *))
{
	/*
	.loc_0x0:
	  li        r3, 0x1
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8030D974
 * Size:	000008
 */
void Screen::ObjBase::doConfirmEndScene( (Screen::EndSceneArg *&))
{
	/*
	.loc_0x0:
	  li        r3, 0x1
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8030D97C
 * Size:	00007C
 */
void Screen::IObjBase::__dt(void)
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
	  beq-      .loc_0x60
	  lis       r4, 0x804E
	  subi      r4, r4, 0x7DC0
	  stw       r4, 0x0(r30)
	  addi      r0, r4, 0x10
	  stw       r0, 0x18(r30)
	  bl        0x103C20
	  addi      r3, r30, 0x18
	  li        r4, 0
	  bl        -0x2F0988
	  mr        r3, r30
	  li        r4, 0
	  bl        0x103BC0
	  extsh.    r0, r31
	  ble-      .loc_0x60
	  mr        r3, r30
	  bl        -0x2E9924

	.loc_0x60:
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
 * Address:	8030D9F8
 * Size:	000008
 */
void @24@Screen::IObjBase::__dt(void)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x18
	  b         -0x80
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void @24@og::newScreen::Test::__dt(void)
{
	// UNUSED FUNCTION
}
