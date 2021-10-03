

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
 * Address:	8031EA58
 * Size:	000080
 */
void og::newScreen::AnaDemo::__ct( (long))
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
  bl        0x132D1C
  subi      r0, r31, 0x271F
  lis       r3, 0x804E
  subi      r3, r3, 0x6B90
  cmplwi    r0, 0x1
  stw       r3, 0x0(r30)
  ble-      .loc_0x40
  cmpwi     r31, 0x2721
  bne-      .loc_0x48

.loc_0x40:
  stw       r31, 0x220(r30)
  b         .loc_0x64

.loc_0x48:
  lis       r3, 0x8049
  lis       r5, 0x8049
  subi      r3, r3, 0x1168
  li        r4, 0x23
  subi      r5, r5, 0x1154
  crclr     6, 0x6
  bl        -0x2F4478

.loc_0x64:
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
 * Size:	000074
 */
void og::newScreen::AnaDemo::__dt(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8031EAD8
 * Size:	000004
 */
void og::newScreen::AnaDemo::doUserCallBackFunc( (Resource::MgrCommand *))
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	8031EADC
 * Size:	000078
 */
void og::newScreen::AnaDemo::doCreateObj( (JKRArchive *))
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
  li        r3, 0x94
  bl        -0x2FAC58
  mr.       r4, r3
  beq-      .loc_0x3C
  lis       r4, 0x8049
  subi      r4, r4, 0x1134
  bl        -0x1CF4
  mr        r4, r3

.loc_0x3C:
  mr        r3, r30
  mr        r5, r31
  bl        0x133254
  mr        r3, r30
  li        r4, 0
  li        r5, 0
  li        r6, 0
  li        r7, 0x96
  bl        0x13374C
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
 * Address:	8031EB54
 * Size:	00000C
 */
void og::newScreen::AnaDemo::getResName( const
{
/*
.loc_0x0:
  lis       r3, 0x8049
  subi      r3, r3, 0x1124
  blr
*/
}

/*
 * --INFO--
 * Address:	8031EB60
 * Size:	000008
 */
void og::newScreen::AnaDemo::getSceneType(void)
{
/*
.loc_0x0:
  lwz       r3, 0x220(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	8031EB68
 * Size:	00000C
 */
void og::newScreen::AnaDemo::getOwnerID(void)
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
 * Address:	8031EB74
 * Size:	00006C
 */
void og::newScreen::AnaDemo::getMemberID(void)
{
/*
.loc_0x0:
  lwz       r0, 0x220(r3)
  li        r4, 0
  li        r3, 0
  cmpwi     r0, 0x2720
  beq-      .loc_0x44
  bge-      .loc_0x24
  cmpwi     r0, 0x271F
  bge-      .loc_0x30
  blr       

.loc_0x24:
  cmpwi     r0, 0x2722
  bgelr-    
  b         .loc_0x58

.loc_0x30:
  lis       r4, 0x4445
  lis       r3, 0x414E
  addi      r4, r4, 0x4D4F
  addi      r3, r3, 0x415F
  blr       

.loc_0x44:
  lis       r4, 0x4B45
  lis       r3, 0x4B
  addi      r4, r4, 0x5455
  addi      r3, r3, 0x414E
  blr       

.loc_0x58:
  lis       r4, 0x4D4F
  lis       r3, 0x4341
  addi      r4, r4, 0x5245
  addi      r3, r3, 0x5645
  blr
*/
}

/*
 * --INFO--
 * Address:	8031EBE0
 * Size:	000008
 */
void og::newScreen::AnaDemo::isUseBackupSceneInfo(void)
{
/*
.loc_0x0:
  li        r3, 0x1
  blr
*/
}
