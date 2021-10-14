

/*
 * --INFO--
 * Address:	80033CFC
 * Size:	000014
 */
void JUTXfb::clearIndex()
{
	/*
	.loc_0x0:
	  li        r0, -0x1
	  sth       r0, 0x14(r3)
	  sth       r0, 0x16(r3)
	  sth       r0, 0x18(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000020
 */
void JUTXfb::common_init(int)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000B0
 */
void JUTXfb::JUTXfb(const _GXRenderModeObj*, JKRHeap*, JUTXfb::EXfbNumber)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00005C
 */
void JUTXfb::JUTXfb(const _GXRenderModeObj*, void*, void*, void*,
                    JUTXfb::EXfbNumber)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000078
 */
void JUTXfb::~JUTXfb()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000040
 */
void JUTXfb::delXfb(int)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000034
 */
void JUTXfb::exchangeXfbIndex(int, int)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00003C
 */
void JUTXfb::addToDoubleXfb(void*, bool)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000BC
 */
void JUTXfb::addToDoubleXfb(JKRHeap*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000CC
 */
void JUTXfb::createManager(const _GXRenderModeObj*, JKRHeap*,
                           JUTXfb::EXfbNumber)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000088
 */
void JUTXfb::createManager(const _GXRenderModeObj*, void*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000094
 */
void JUTXfb::createManager(const _GXRenderModeObj*, void*, void*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000A0
 */
void JUTXfb::createManager(const _GXRenderModeObj*, void*, void*, void*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80033D10
 * Size:	0000A8
 */
void JUTXfb::createManager(JKRHeap*, JUTXfb::EXfbNumber)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stmw      r27, 0xC(r1)
	  mr        r27, r3
	  mr        r28, r4
	  lwz       r0, -0x76C8(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x90
	  li        r3, 0x20
	  bl        -0xFE94
	  mr.       r31, r3
	  beq-      .loc_0x8C
	  stw       r28, 0x10(r31)
	  li        r3, -0x1
	  li        r0, 0x63
	  sth       r3, 0x14(r31)
	  sth       r3, 0x16(r31)
	  sth       r3, 0x18(r31)
	  stw       r0, 0x1C(r31)
	  lwz       r3, -0x76E0(r13)
	  lwz       r3, 0x4(r3)
	  lhz       r30, 0x6(r3)
	  lhz       r29, 0x4(r3)
	  lhz       r4, 0x8(r3)
	  mr        r3, r30
	  bl        0xB2234
	  mr        r3, r30
	  bl        0xB219C
	  mr        r5, r3
	  mr        r3, r31
	  mr        r4, r29
	  mr        r6, r27
	  mr        r7, r28
	  bl        0xB0

	.loc_0x8C:
	  stw       r31, -0x76C8(r13)

	.loc_0x90:
	  lmw       r27, 0xC(r1)
	  lwz       r0, 0x24(r1)
	  lwz       r3, -0x76C8(r13)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000088
 */
void JUTXfb::createManager(void*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000094
 */
void JUTXfb::createManager(void*, void*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000A0
 */
void JUTXfb::createManager(void*, void*, void*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80033DB8
 * Size:	000090
 */
void JUTXfb::destroyManager()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  lwz       r29, -0x76C8(r13)
	  cmplwi    r29, 0
	  beq-      .loc_0x6C
	  li        r31, 0
	  mr        r30, r29

	.loc_0x2C:
	  addi      r0, r31, 0xC
	  lbzx      r0, r29, r0
	  cmplwi    r0, 0
	  beq-      .loc_0x4C
	  lwz       r3, 0x0(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0x4C
	  bl        -0xFD4C

	.loc_0x4C:
	  addi      r31, r31, 0x1
	  addi      r30, r30, 0x4
	  cmpwi     r31, 0x3
	  blt+      .loc_0x2C
	  li        r0, 0
	  mr        r3, r29
	  stw       r0, -0x76C8(r13)
	  bl        -0xFD6C

	.loc_0x6C:
	  li        r0, 0
	  stw       r0, -0x76C8(r13)
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
 * Address:	80033E48
 * Size:	0000E8
 */
void JUTXfb::initiate(unsigned short, unsigned short, JKRHeap*,
                      JUTXfb::EXfbNumber)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  mr        r30, r7
	  stw       r29, 0x14(r1)
	  mr.       r29, r6
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  bne-      .loc_0x30
	  lwz       r29, -0x77D8(r13)

	.loc_0x30:
	  addi      r3, r4, 0xF
	  rlwinm    r0,r5,0,16,31
	  rlwinm    r3,r3,0,16,27
	  mr        r4, r29
	  mullw     r0, r3, r0
	  li        r5, 0x20
	  rlwinm    r31,r0,1,0,30
	  mr        r3, r31
	  bl        -0xFE50
	  stw       r3, 0x0(r28)
	  li        r0, 0x1
	  cmpwi     r30, 0x2
	  stb       r0, 0xC(r28)
	  blt-      .loc_0x88
	  mr        r3, r31
	  mr        r4, r29
	  li        r5, 0x20
	  bl        -0xFE74
	  stw       r3, 0x4(r28)
	  li        r0, 0x1
	  stb       r0, 0xD(r28)
	  b         .loc_0x94

	.loc_0x88:
	  li        r0, 0
	  stw       r0, 0x4(r28)
	  stb       r0, 0xD(r28)

	.loc_0x94:
	  cmpwi     r30, 0x3
	  blt-      .loc_0xBC
	  mr        r3, r31
	  mr        r4, r29
	  li        r5, 0x20
	  bl        -0xFEA8
	  stw       r3, 0x8(r28)
	  li        r0, 0x1
	  stb       r0, 0xE(r28)
	  b         .loc_0xC8

	.loc_0xBC:
	  li        r0, 0
	  stw       r0, 0x8(r28)
	  stb       r0, 0xE(r28)

	.loc_0xC8:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  lwz       r28, 0x10(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000040
 */
void JUTXfb::initiate(void*, void*, void*, JUTXfb::EXfbNumber)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80033F30
 * Size:	000064
 */
void JUTXfb::accumeXfbSize()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  lwz       r3, -0x76E0(r13)
	  lwz       r3, 0x4(r3)
	  lhz       r30, 0x6(r3)
	  lhz       r31, 0x4(r3)
	  lhz       r4, 0x8(r3)
	  mr        r3, r30
	  bl        0xB2050
	  mr        r3, r30
	  bl        0xB1FB8
	  addi      r4, r31, 0xF
	  rlwinm    r0,r3,0,16,31
	  rlwinm    r3,r4,0,16,27
	  lwz       r31, 0xC(r1)
	  mullw     r0, r3, r0
	  lwz       r30, 0x8(r1)
	  rlwinm    r3,r0,1,0,30
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00003C
 */
void JUTXfb::switchXfb()
{
	// UNUSED FUNCTION
}
