

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
 * Address:	803D3850
 * Size:	00003C
 */
void setArchive__Q33ebi6Screen11TScreenBaseFP10JKRArchive(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r0, 0x4(r3)
  cmplwi    r0, 0
  bne-      .loc_0x2C
  stw       r4, 0x4(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     

.loc_0x2C:
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	803D388C
 * Size:	000004
 */
void doSetArchive__Q33ebi6Screen11TScreenBaseFP10JKRArchive(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	803D3890
 * Size:	000058
 */
void openScreen__Q33ebi6Screen11TScreenBaseFPQ33ebi6Screen7ArgOpen(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  lwz       r0, 0x8(r3)
  cmpwi     r0, 0
  bne-      .loc_0x40
  lwz       r12, 0x0(r3)
  lwz       r12, 0x28(r12)
  mtctr     r12
  bctrl     
  li        r0, 0x1
  li        r3, 0x1
  stw       r0, 0x8(r31)
  b         .loc_0x44

.loc_0x40:
  li        r3, 0

.loc_0x44:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	803D38E8
 * Size:	000004
 */
void doOpenScreen__Q33ebi6Screen11TScreenBaseFPQ33ebi6Screen7ArgOpen(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	803D38EC
 * Size:	000058
 */
void closeScreen__Q33ebi6Screen11TScreenBaseFPQ33ebi6Screen8ArgClose(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  lwz       r0, 0x8(r3)
  cmpwi     r0, 0x2
  bne-      .loc_0x40
  lwz       r12, 0x0(r3)
  lwz       r12, 0x2C(r12)
  mtctr     r12
  bctrl     
  li        r0, 0x3
  li        r3, 0x1
  stw       r0, 0x8(r31)
  b         .loc_0x44

.loc_0x40:
  li        r3, 0

.loc_0x44:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	803D3944
 * Size:	000004
 */
void doCloseScreen__Q33ebi6Screen11TScreenBaseFPQ33ebi6Screen8ArgClose(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	803D3948
 * Size:	000040
 */
void killScreen__Q33ebi6Screen11TScreenBaseFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  lwz       r12, 0x0(r3)
  lwz       r12, 0x30(r12)
  mtctr     r12
  bctrl     
  li        r0, 0
  stw       r0, 0x8(r31)
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	803D3988
 * Size:	000010
 */
void isFinishScreen__Q33ebi6Screen11TScreenBaseFv(void)
{
/*
.loc_0x0:
  lwz       r0, 0x8(r3)
  cntlzw    r0, r0
  rlwinm    r3,r0,27,24,31
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000014
 */
void isOpenScreen__Q33ebi6Screen11TScreenBaseFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803D3998
 * Size:	000014
 */
void isWaitScreen__Q33ebi6Screen11TScreenBaseFv(void)
{
/*
.loc_0x0:
  lwz       r0, 0x8(r3)
  subfic    r0, r0, 0x2
  cntlzw    r0, r0
  rlwinm    r3,r0,27,24,31
  blr
*/
}

/*
 * --INFO--
 * Address:	803D39AC
 * Size:	000014
 */
void isCloseScreen__Q33ebi6Screen11TScreenBaseFv(void)
{
/*
.loc_0x0:
  lwz       r0, 0x8(r3)
  subfic    r0, r0, 0x3
  cntlzw    r0, r0
  rlwinm    r3,r0,27,24,31
  blr
*/
}

/*
 * --INFO--
 * Address:	803D39C0
 * Size:	0000EC
 */
void update__Q33ebi6Screen11TScreenBaseFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  lwz       r0, 0x8(r3)
  cmpwi     r0, 0x2
  beq-      .loc_0x78
  bge-      .loc_0x34
  cmpwi     r0, 0
  beq-      .loc_0xD8
  bge-      .loc_0x40
  b         .loc_0xD8

.loc_0x34:
  cmpwi     r0, 0x4
  bge-      .loc_0xD8
  b         .loc_0xAC

.loc_0x40:
  lwz       r12, 0x0(r3)
  lwz       r12, 0x38(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0xD8
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x34(r12)
  mtctr     r12
  bctrl     
  li        r0, 0x2
  stw       r0, 0x8(r31)
  b         .loc_0xD8

.loc_0x78:
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0xD8
  mr        r3, r31
  li        r4, 0
  lwz       r12, 0x0(r31)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  b         .loc_0xD8

.loc_0xAC:
  lwz       r12, 0x0(r3)
  lwz       r12, 0x40(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0xD8
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     

.loc_0xD8:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	803D3AAC
 * Size:	000008
 */
void doUpdateStateClose__Q33ebi6Screen11TScreenBaseFv(void)
{
/*
.loc_0x0:
  li        r3, 0x1
  blr
*/
}

/*
 * --INFO--
 * Address:	803D3AB4
 * Size:	000008
 */
void doUpdateStateWait__Q33ebi6Screen11TScreenBaseFv(void)
{
/*
.loc_0x0:
  li        r3, 0x1
  blr
*/
}

/*
 * --INFO--
 * Address:	803D3ABC
 * Size:	000004
 */
void doInitWaitState__Q33ebi6Screen11TScreenBaseFv(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	803D3AC0
 * Size:	000008
 */
void doUpdateStateOpen__Q33ebi6Screen11TScreenBaseFv(void)
{
/*
.loc_0x0:
  li        r3, 0x1
  blr
*/
}

/*
 * --INFO--
 * Address:	803D3AC8
 * Size:	000038
 */
void draw__Q33ebi6Screen11TScreenBaseFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r0, 0x8(r3)
  cmpwi     r0, 0
  beq-      .loc_0x28
  lwz       r12, 0x0(r3)
  lwz       r12, 0x44(r12)
  mtctr     r12
  bctrl     

.loc_0x28:
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	803D3B00
 * Size:	000004
 */
void doDraw__Q33ebi6Screen11TScreenBaseFv(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	803D3B04
 * Size:	00000C
 */
void getName__Q33ebi6Screen11TScreenBaseFv(void)
{
/*
.loc_0x0:
  lis       r3, 0x8049
  addi      r3, r3, 0x68F8
  blr
*/
}