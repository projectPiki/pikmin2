

/*
 * --INFO--
 * Address:	8031A2A0
 * Size:	00003C
 */
void __ct__Q32og9newScreen11SpecialItemFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        0x1374DC
  lis       r4, 0x804E
  mr        r3, r31
  subi      r0, r4, 0x7280
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
void __dt__Q32og9newScreen11SpecialItemFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8031A2DC
 * Size:	000004
 */
void doUserCallBackFunc__Q32og9newScreen11SpecialItemFPQ28Resource10MgrCommand(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	8031A2E0
 * Size:	000060
 */
void doCreateObj__Q32og9newScreen11SpecialItemFP10JKRArchive(void)
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
  li        r3, 0x60
  bl        -0x2F645C
  mr.       r4, r3
  beq-      .loc_0x3C
  lis       r4, 0x8049
  subi      r4, r4, 0x1488
  bl        -0x650
  mr        r4, r3

.loc_0x3C:
  mr        r3, r30
  mr        r5, r31
  bl        0x137A50
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
 * Address:	8031A340
 * Size:	00004C
 */
void doConfirmSetScene__Q32og9newScreen11SpecialItemFRQ26Screen11SetSceneArg(void)
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
  cmpwi     r3, 0x2723
  beq-      .loc_0x34
  li        r31, 0x1

.loc_0x34:
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
 * Address:	8031A38C
 * Size:	00000C
 */
void getResName__Q32og9newScreen11SpecialItemCFv(void)
{
/*
.loc_0x0:
  lis       r3, 0x8049
  subi      r3, r3, 0x1474
  blr
*/
}

/*
 * --INFO--
 * Address:	8031A398
 * Size:	000008
 */
void getSceneType__Q32og9newScreen11SpecialItemFv(void)
{
/*
.loc_0x0:
  li        r3, 0x2723
  blr
*/
}

/*
 * --INFO--
 * Address:	8031A3A0
 * Size:	00000C
 */
void getOwnerID__Q32og9newScreen11SpecialItemFv(void)
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
 * Address:	8031A3AC
 * Size:	000014
 */
void getMemberID__Q32og9newScreen11SpecialItemFv(void)
{
/*
.loc_0x0:
  lis       r4, 0x4954
  lis       r3, 0x53
  addi      r4, r4, 0x454D
  addi      r3, r3, 0x505F
  blr
*/
}

/*
 * --INFO--
 * Address:	8031A3C0
 * Size:	000008
 */
void isUseBackupSceneInfo__Q32og9newScreen11SpecialItemFv(void)
{
/*
.loc_0x0:
  li        r3, 0x1
  blr
*/
}