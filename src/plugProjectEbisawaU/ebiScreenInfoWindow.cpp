

/*
 * --INFO--
 * Address:	........
 * Size:	0000E4
 */
void _Print(char *, ...)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000224
 */
void ebi::Screen::TInfoWindow::__ct(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0002A0
 */
void ebi::Screen::TInfoWindow::doSetArchive( (JKRArchive *))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00007C
 */
void ebi::Screen::TInfoWindow::doOpenScreen( (ebi::Screen::ArgOpen *))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000064
 */
void ebi::Screen::TInfoWindow::doCloseScreen( (ebi::Screen::ArgClose *))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000060
 */
void ebi::Screen::TInfoWindow::doKillScreen(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000DC
 */
void ebi::Screen::TInfoWindow::doUpdateStateOpen(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000074
 */
void ebi::Screen::TInfoWindow::doUpdateStateWait(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000D4
 */
void ebi::Screen::TInfoWindow::doUpdateStateClose(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000234
 */
void ebi::Screen::TInfoWindow::doDraw(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000A4
 */
void ebi::Screen::TInfoWindow::loadResource(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000078
 */
void ebi::Screen::TInfoWindow::openMsgCommon_(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000170
 */
void ebi::Screen::TInfoWindow::openMsg_QuestionYesNo( (unsigned long long, unsigned long long, unsigned long long))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00014C
 */
void ebi::Screen::TInfoWindow::openMsg_YesNo( (unsigned long long, unsigned long long))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000C8
 */
void ebi::Screen::TInfoWindow::openMsg_Warning( (unsigned long long))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000AC
 */
void ebi::Screen::TInfoWindow::closeMsg(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000088
 */
void ebi::Screen::TInfoWindow::killMsg(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000010
 */
void ebi::Screen::TInfoWindow::isFinishMsg(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00047C
 */
void ebi::Screen::TInfoWindow::updateMsg_(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0001E0
 */
void ebi::T2DCallBack_AnimText::__ct(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803F1A80
 * Size:	000084
 */
void P2DScreen::Mgr::__dt(void)
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
  lis       r3, 0x804F
  addic.    r0, r30, 0x118
  subi      r0, r3, 0x3A60
  stw       r0, 0x0(r30)
  beq-      .loc_0x4C
  lis       r4, 0x804D
  addi      r3, r30, 0x118
  addi      r0, r4, 0x7B0C
  li        r4, 0
  stw       r0, 0x118(r30)
  bl        0x1FAC0

.loc_0x4C:
  mr        r3, r30
  li        r4, 0
  bl        -0x3B25B8
  extsh.    r0, r31
  ble-      .loc_0x68
  mr        r3, r30
  bl        -0x3CDA30

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
 * Address:	........
 * Size:	00000C
 */
void ebi::Screen::TInfoWindow::getName(void)
{
	// UNUSED FUNCTION
}
