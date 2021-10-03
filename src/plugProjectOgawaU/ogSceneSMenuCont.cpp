

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
 * Address:	803304F0
 * Size:	000050
 */
void og::newScreen::SMenuCont::__ct(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        0x12128C
  lis       r4, 0x804E
  lis       r3, 0x804E
  subi      r0, r4, 0x7A14
  li        r4, 0x1
  stw       r0, 0x0(r31)
  subi      r0, r3, 0x5C78
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
 * Size:	000084
 */
void og::newScreen::SMenuCont::__dt(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80330540
 * Size:	000068
 */
void og::newScreen::SMenuCont::doConfirmSetScene( (Screen::SetSceneArg &))
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
  cmplwi    r0, 0x17
  bgt-      .loc_0x50
  lis       r3, 0x804E
  rlwinm    r0,r0,2,0,29
  subi      r3, r3, 0x5CD8
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
 * Address:	803305A8
 * Size:	00000C
 */
void og::newScreen::SMenuCont::doSetBackupScene( (Screen::SetSceneArg &))
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
 * Address:	803305B4
 * Size:	000004
 */
void og::newScreen::SMenuCont::doUserCallBackFunc( (Resource::MgrCommand *))
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	803305B8
 * Size:	000060
 */
void og::newScreen::SMenuCont::doCreateObj( (JKRArchive *))
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
  li        r3, 0xBC
  bl        -0x30C734
  mr.       r4, r3
  beq-      .loc_0x3C
  lis       r4, 0x8049
  subi      r4, r4, 0x860
  bl        0x6C
  mr        r4, r3

.loc_0x3C:
  mr        r3, r30
  mr        r5, r31
  bl        0x121778
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
 * Address:	80330618
 * Size:	000004
 */
void og::newScreen::SMenuCont::doUpdateActive(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	8033061C
 * Size:	00000C
 */
void og::newScreen::SMenuCont::getResName( const
{
/*
.loc_0x0:
  lis       r3, 0x8049
  subi      r3, r3, 0x84C
  blr
*/
}

/*
 * --INFO--
 * Address:	80330628
 * Size:	000008
 */
void og::newScreen::SMenuCont::getSceneType(void)
{
/*
.loc_0x0:
  li        r3, 0x272B
  blr
*/
}

/*
 * --INFO--
 * Address:	80330630
 * Size:	00000C
 */
void og::newScreen::SMenuCont::getOwnerID(void)
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
 * Address:	8033063C
 * Size:	000014
 */
void og::newScreen::SMenuCont::getMemberID(void)
{
/*
.loc_0x0:
  lis       r4, 0x434F
  lis       r3, 0x53
  addi      r4, r4, 0x4E54
  addi      r3, r3, 0x4D5F
  blr
*/
}

/*
 * --INFO--
 * Address:	80330650
 * Size:	000008
 */
void og::newScreen::SMenuCont::isUseBackupSceneInfo(void)
{
/*
.loc_0x0:
  li        r3, 0x1
  blr
*/
}
