

/*
 * --INFO--
 * Address:	8043DBEC
 * Size:	000004
 */
void __ct__Q25P2JME13SimpleMessageFv(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	8043DBF0
 * Size:	00006C
 */
void init__Q25P2JME13SimpleMessageFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  li        r3, 0x110
  bl        -0x419D64
  mr.       r0, r3
  beq-      .loc_0x34
  lwz       r4, -0x6428(r13)
  lwz       r4, 0x34(r4)
  bl        -0x483C
  mr        r0, r3

.loc_0x34:
  stw       r0, 0x0(r31)
  lwz       r4, -0x6428(r13)
  lwz       r3, 0x0(r31)
  lwz       r4, 0x18(r4)
  bl        -0xDD0
  lwz       r4, -0x6428(r13)
  lwz       r3, 0x0(r31)
  lwz       r0, 0x18(r4)
  stw       r0, 0x50(r3)
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
 * Size:	00007C
 */
void drawMessageCode__Q25P2JME13SimpleMessageFR8GraphicsUsUs(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00006C
 */
void drawMessageCode__Q25P2JME13SimpleMessageFR8GraphicsUl(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8043DC5C
 * Size:	000080
 */
void drawMessageID__Q25P2JME13SimpleMessageFR8GraphicsUlUl(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  mr        r31, r3
  stw       r30, 0x18(r1)
  mr        r30, r6
  stw       r29, 0x14(r1)
  mr        r29, r5
  mr        r4, r29
  mr        r5, r30
  lwz       r3, 0x0(r3)
  bl        -0x1590
  lwz       r31, 0x0(r31)
  li        r4, 0
  mr        r3, r31
  bl        -0x436B44
  mr        r3, r31
  mr        r4, r29
  mr        r5, r30
  li        r6, 0
  bl        -0x436E50
  mr        r3, r31
  li        r4, 0
  bl        -0x435B64
  lwz       r0, 0x24(r1)
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  lwz       r29, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000090
 */
void drawMessageID__Q25P2JME13SimpleMessageFR8GraphicsPc(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000050
 */
void locate__Q25P2JME13SimpleMessageFii(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0003B0
 */
void setInfo__Q25P2JME13SimpleMessageFP7J2DPane(void)
{
	// UNUSED FUNCTION
}