

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
 * Address:	80329CFC
 * Size:	00003C
 */
void __ct__Q32og9newScreen12SMenuPauseVSFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        0x127A80
  lis       r4, 0x804E
  mr        r3, r31
  subi      r0, r4, 0x6354
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
void __dt__Q32og9newScreen12SMenuPauseVSFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80329D38
 * Size:	000004
 */
void doUserCallBackFunc__Q32og9newScreen12SMenuPauseVSFPQ28Resource10MgrCommand(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	80329D3C
 * Size:	000078
 */
void doCreateObj__Q32og9newScreen12SMenuPauseVSFP10JKRArchive(void)
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
  li        r3, 0xCC
  bl        -0x305EB8
  mr.       r4, r3
  beq-      .loc_0x3C
  lis       r4, 0x8049
  subi      r4, r4, 0xAE0
  bl        -0xBE0
  mr        r4, r3

.loc_0x3C:
  mr        r3, r30
  mr        r5, r31
  bl        0x127FF4
  mr        r3, r30
  li        r4, 0
  li        r5, 0
  li        r6, 0
  li        r7, 0xB4
  bl        0x1284EC
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
 * Address:	80329DB4
 * Size:	000088
 */
void doGetFinishState__Q32og9newScreen12SMenuPauseVSFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lis       r4, 0x4F
  lis       r5, 0x5F41
  stw       r0, 0x14(r1)
  addi      r6, r5, 0x4C4C
  addi      r4, r4, 0x4741
  li        r5, 0x534D
  stw       r31, 0xC(r1)
  stw       r30, 0x8(r1)
  li        r30, 0
  lwz       r31, 0x21C(r3)
  mr        r3, r31
  bl        -0x1AACC
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x6C
  lis       r4, 0x4F
  lis       r6, 0x535F
  lis       r5, 0x534D
  mr        r3, r31
  addi      r4, r4, 0x4741
  addi      r6, r6, 0x5653
  addi      r5, r5, 0x5F50
  bl        -0x1A950
  cmplwi    r3, 0
  beq-      .loc_0x6C
  lwz       r30, 0x8(r3)

.loc_0x6C:
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
 * Address:	80329E3C
 * Size:	000004
 */
void doUpdateActive__Q32og9newScreen12SMenuPauseVSFv(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	80329E40
 * Size:	000068
 */
void doConfirmSetScene__Q32og9newScreen12SMenuPauseVSFRQ26Screen11SetSceneArg(void)
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
  cmpwi     r3, 0x2724
  beq-      .loc_0x4C
  bge-      .loc_0x40
  cmpwi     r3, 0x2712
  beq-      .loc_0x4C
  b         .loc_0x50

.loc_0x40:
  cmpwi     r3, 0x2727
  beq-      .loc_0x4C
  b         .loc_0x50

.loc_0x4C:
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
 * Address:	80329EA8
 * Size:	00000C
 */
void doSetBackupScene__Q32og9newScreen12SMenuPauseVSFRQ26Screen11SetSceneArg(void)
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
 * Address:	80329EB4
 * Size:	00000C
 */
void getResName__Q32og9newScreen12SMenuPauseVSCFv(void)
{
/*
.loc_0x0:
  lis       r3, 0x8049
  subi      r3, r3, 0xACC
  blr
*/
}

/*
 * --INFO--
 * Address:	80329EC0
 * Size:	000008
 */
void getSceneType__Q32og9newScreen12SMenuPauseVSFv(void)
{
/*
.loc_0x0:
  li        r3, 0x2728
  blr
*/
}

/*
 * --INFO--
 * Address:	80329EC8
 * Size:	00000C
 */
void getOwnerID__Q32og9newScreen12SMenuPauseVSFv(void)
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
 * Address:	80329ED4
 * Size:	000014
 */
void getMemberID__Q32og9newScreen12SMenuPauseVSFv(void)
{
/*
.loc_0x0:
  lis       r4, 0x535F
  lis       r3, 0x534D
  addi      r4, r4, 0x5653
  addi      r3, r3, 0x5F50
  blr
*/
}

/*
 * --INFO--
 * Address:	80329EE8
 * Size:	000008
 */
void isUseBackupSceneInfo__Q32og9newScreen12SMenuPauseVSFv(void)
{
/*
.loc_0x0:
  li        r3, 0x1
  blr
*/
}

/*
 * --INFO--
 * Address:	80329EF0
 * Size:	000028
 */
void __sinit_ogSceneSMenuPauseVs_cpp(void)
{
/*
.loc_0x0:
  lis       r4, 0x8051
  li        r0, -0x1
  lfs       f0, 0x48B0(r4)
  lis       r3, 0x804E
  stw       r0, -0x67E8(r13)
  stfsu     f0, -0x6360(r3)
  stfs      f0, -0x67E4(r13)
  stfs      f0, 0x4(r3)
  stfs      f0, 0x8(r3)
  blr
*/
}