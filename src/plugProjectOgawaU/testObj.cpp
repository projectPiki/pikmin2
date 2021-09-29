

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
 * Size:	000060
 */
void __ct__Q32og9newScreen4TestFPCc(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8030D868
 * Size:	000094
 */
void __dt__Q26Screen7ObjBaseFv(void)
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
void __dt__Q32og9newScreen4TestFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00011C
 */
void doCreate__Q32og9newScreen4TestFP10JKRArchive(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000040
 */
void doUpdate__Q32og9newScreen4TestFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000034
 */
void doDraw__Q32og9newScreen4TestFR8Graphics(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void doStart__Q32og9newScreen4TestFPCQ26Screen13StartSceneArg(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void doEnd__Q32og9newScreen4TestFPCQ26Screen11EndSceneArg(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000004
 */
void doUpdateFadeinFinish__Q32og9newScreen4TestFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000004
 */
void doUpdateFinish__Q32og9newScreen4TestFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000004
 */
void doUpdateFadeoutFinish__Q32og9newScreen4TestFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void doUpdateFadein__Q32og9newScreen4TestFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void doUpdateFadeout__Q32og9newScreen4TestFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void getSize__Q32og6Screen14DispMemberTestFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00000C
 */
void getOwnerID__Q32og6Screen14DispMemberTestFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000010
 */
void getMemberID__Q32og6Screen14DispMemberTestFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8030D8FC
 * Size:	000060
 */
void setOwner__Q26Screen7ObjBaseFPQ26Screen9SceneBase(void)
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
void getOwner__Q26Screen7ObjBaseCFv(void)
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
void doConfirmSetScene__Q26Screen7ObjBaseFRQ26Screen11SetSceneArg(void)
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
void doConfirmStartScene__Q26Screen7ObjBaseFPQ26Screen13StartSceneArg(void)
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
void doConfirmEndScene__Q26Screen7ObjBaseFRPQ26Screen11EndSceneArg(void)
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
void __dt__Q26Screen8IObjBaseFv(void)
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
void @24@__dt__Q26Screen8IObjBaseFv(void)
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
void @24@__dt__Q32og9newScreen4TestFv(void)
{
	// UNUSED FUNCTION
}