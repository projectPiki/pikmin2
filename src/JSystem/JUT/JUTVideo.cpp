

/*
 * --INFO--
 * Address:	80033744
 * Size:	000058
 */
void JUTVideo::createManager(const _GXRenderModeObj*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r0, -0x76E0(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x40
	  li        r3, 0x58
	  bl        -0xF8C4
	  mr.       r0, r3
	  beq-      .loc_0x3C
	  mr        r4, r31
	  bl        0x6C
	  mr        r0, r3

	.loc_0x3C:
	  stw       r0, -0x76E0(r13)

	.loc_0x40:
	  lwz       r0, 0x14(r1)
	  lwz       r3, -0x76E0(r13)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8003379C
 * Size:	000048
 */
void JUTVideo::destroyManager()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, -0x76E0(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x38
	  beq-      .loc_0x30
	  lwz       r12, 0x0(r3)
	  li        r4, 0x1
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl

	.loc_0x30:
	  li        r0, 0
	  stw       r0, -0x76E0(r13)

	.loc_0x38:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800337E4
 * Size:	0000F4
 */
void JUTVideo::JUTVideo(const _GXRenderModeObj*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r5, 0x804A
	  stw       r0, 0x14(r1)
	  li        r0, 0
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  addi      r3, r5, 0x5A0
	  stw       r30, 0x8(r1)
	  mr        r30, r4
	  stw       r3, 0x0(r31)
	  stw       r0, 0x4(r31)
	  bl        0x9D570
	  li        r3, 0x1
	  li        r0, 0x2
	  stb       r3, 0x2C(r31)
	  mr        r3, r31
	  mr        r4, r30
	  stw       r0, 0x30(r31)
	  bl        0x440
	  li        r3, 0x1
	  bl        0x9E890
	  bl        0x9E6E8
	  li        r0, 0
	  stw       r0, 0x8(r31)
	  bl        0x9E8FC
	  stw       r3, 0xC(r31)
	  li        r3, 0x1
	  li        r0, 0
	  stw       r3, 0x10(r31)
	  stw       r0, 0x18(r31)
	  bl        0xBF348
	  lis       r5, 0xA
	  lis       r4, 0x8003
	  addi      r0, r5, 0x3930
	  stw       r3, -0x76DC(r13)
	  addi      r3, r4, 0x3940
	  stw       r0, -0x76D8(r13)
	  bl        0x9D1E0
	  lis       r4, 0x8003
	  stw       r3, 0x1C(r31)
	  addi      r3, r4, 0x3C24
	  bl        0x9D214
	  stw       r3, 0x20(r31)
	  li        r0, 0
	  addi      r3, r31, 0x38
	  addi      r4, r31, 0x34
	  stw       r0, 0x24(r31)
	  li        r5, 0x1
	  stw       r0, 0x28(r31)
	  bl        0xBBC10
	  lis       r3, 0x8003
	  addi      r3, r3, 0x3B9C
	  bl        0xB1F18
	  lwz       r0, 0x14(r1)
	  mr        r3, r31
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800338D8
 * Size:	000068
 */
void JUTVideo::~JUTVideo()
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
	  beq-      .loc_0x4C
	  lis       r3, 0x804A
	  addi      r0, r3, 0x5A0
	  stw       r0, 0x0(r30)
	  lwz       r3, 0x1C(r30)
	  bl        0x9D154
	  lwz       r3, 0x20(r30)
	  bl        0x9D190
	  extsh.    r0, r31
	  ble-      .loc_0x4C
	  mr        r3, r30
	  bl        -0xF86C

	.loc_0x4C:
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
 * Address:	80033940
 * Size:	000228
 */
void JUTVideo::preRetraceProc(unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  lwz       r4, -0x76E0(r13)
	  lwz       r12, 0x24(r4)
	  cmplwi    r12, 0
	  beq-      .loc_0x28
	  mtctr     r12
	  bctrl

	.loc_0x28:
	  bl        0xBF240
	  lwz       r0, -0x76DC(r13)
	  lwz       r31, -0x76C8(r13)
	  sub       r0, r3, r0
	  stw       r3, -0x76DC(r13)
	  cmplwi    r31, 0
	  stw       r0, -0x76D8(r13)
	  bne-      .loc_0x58
	  li        r3, 0x1
	  bl        0x9E73C
	  bl        0x9E594
	  b         .loc_0x214

	.loc_0x58:
	  lbz       r0, -0x76CC(r13)
	  extsb.    r0, r0
	  bne-      .loc_0x74
	  li        r3, 0
	  li        r0, 0x1
	  stw       r3, -0x76D0(r13)
	  stb       r0, -0x76CC(r13)

	.loc_0x74:
	  lwz       r4, -0x76D0(r13)
	  cmplwi    r4, 0
	  beq-      .loc_0x98
	  lwz       r5, -0x76E0(r13)
	  lwz       r3, -0x7778(r13)
	  lwz       r6, 0x4(r5)
	  lhz       r5, 0x4(r6)
	  lhz       r6, 0x6(r6)
	  bl        -0x9A48

	.loc_0x98:
	  lwz       r3, -0x76E0(r13)
	  lbz       r0, 0x2C(r3)
	  cmplwi    r0, 0x1
	  bne-      .loc_0xE0
	  lwz       r4, 0x30(r3)
	  cmpwi     r4, 0
	  ble-      .loc_0xB8
	  subi      r4, r4, 0x1

	.loc_0xB8:
	  stw       r4, 0x30(r3)
	  neg       r0, r4
	  or        r0, r0, r4
	  li        r3, 0x1
	  lwz       r4, -0x76E0(r13)
	  rlwinm    r0,r0,1,31,31
	  stb       r0, 0x2C(r4)
	  bl        0x9E6B4
	  bl        0x9E50C
	  b         .loc_0x214

	.loc_0xE0:
	  cmplwi    r31, 0
	  bne-      .loc_0xF8
	  li        r3, 0x1
	  bl        0x9E69C
	  bl        0x9E4F4
	  b         .loc_0x214

	.loc_0xF8:
	  lwz       r0, 0x10(r31)
	  cmpwi     r0, 0x3
	  beq-      .loc_0x10C
	  cmpwi     r0, 0x2
	  bne-      .loc_0x188

	.loc_0x10C:
	  lbz       r0, -0x76D4(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x214
	  lha       r3, 0x16(r31)
	  extsh.    r0, r3
	  sth       r3, 0x18(r31)
	  bge-      .loc_0x138
	  li        r3, 0x1
	  bl        0x9E65C
	  bl        0x9E4B4
	  b         .loc_0x214

	.loc_0x138:
	  lha       r3, 0x18(r31)
	  extsh.    r0, r3
	  blt-      .loc_0x150
	  rlwinm    r0,r3,2,0,29
	  lwzx      r3, r31, r0
	  b         .loc_0x154

	.loc_0x150:
	  li        r3, 0

	.loc_0x154:
	  bl        0x9E5C0
	  bl        0x9E48C
	  li        r3, 0
	  bl        0x9E628
	  lha       r3, 0x18(r31)
	  extsh.    r0, r3
	  blt-      .loc_0x17C
	  rlwinm    r0,r3,2,0,29
	  lwzx      r0, r31, r0
	  b         .loc_0x180

	.loc_0x17C:
	  li        r0, 0

	.loc_0x180:
	  stw       r0, -0x76D0(r13)
	  b         .loc_0x214

	.loc_0x188:
	  cmpwi     r0, 0x1
	  bne-      .loc_0x214
	  lwz       r0, 0x1C(r31)
	  cmpwi     r0, 0
	  bne-      .loc_0x210
	  lha       r3, 0x16(r31)
	  extsh.    r0, r3
	  blt-      .loc_0x208
	  sth       r3, 0x18(r31)
	  lha       r3, 0x18(r31)
	  extsh.    r0, r3
	  blt-      .loc_0x1C4
	  rlwinm    r0,r3,2,0,29
	  lwzx      r3, r31, r0
	  b         .loc_0x1C8

	.loc_0x1C4:
	  li        r3, 0

	.loc_0x1C8:
	  li        r4, 0x1
	  bl        0xB2A38
	  bl        0xB155C
	  li        r0, 0x2
	  stw       r0, 0x1C(r31)
	  lha       r3, 0x18(r31)
	  extsh.    r0, r3
	  blt-      .loc_0x1F4
	  rlwinm    r0,r3,2,0,29
	  lwzx      r0, r31, r0
	  b         .loc_0x1F8

	.loc_0x1F4:
	  li        r0, 0

	.loc_0x1F8:
	  stw       r0, -0x76D0(r13)
	  li        r3, 0
	  bl        0x9E588
	  b         .loc_0x210

	.loc_0x208:
	  li        r3, 0x1
	  bl        0x9E57C

	.loc_0x210:
	  bl        0x9E3D4

	.loc_0x214:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80033B68
 * Size:	000028
 */
void JUTVideo::drawDoneStart()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  li        r0, 0x1
	  stb       r0, -0x76D4(r13)
	  bl        0xB18DC
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80033B90
 * Size:	00000C
 */
void JUTVideo::dummyNoDrawWait()
{
	/*
	.loc_0x0:
	  li        r0, 0
	  stb       r0, -0x76D4(r13)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JUTVideo::getDrawWait()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80033B9C
 * Size:	000088
 */
void JUTVideo::drawDoneCallback()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r4, -0x76C8(r13)
	  cmplwi    r4, 0
	  beq-      .loc_0x78
	  li        r3, 0
	  stb       r3, -0x76D4(r13)
	  lwz       r0, 0x10(r4)
	  cmpwi     r0, 0x1
	  bne-      .loc_0x78
	  lwz       r0, 0x1C(r4)
	  cmpwi     r0, 0x1
	  bne-      .loc_0x78
	  stw       r3, 0x1C(r4)
	  lha       r5, 0x16(r4)
	  extsh.    r0, r5
	  blt-      .loc_0x50
	  rlwinm    r0,r5,2,0,29
	  lwzx      r3, r4, r0

	.loc_0x50:
	  cmplwi    r3, 0
	  beq-      .loc_0x78
	  extsh.    r0, r5
	  blt-      .loc_0x6C
	  rlwinm    r0,r5,2,0,29
	  lwzx      r3, r4, r0
	  b         .loc_0x70

	.loc_0x6C:
	  li        r3, 0

	.loc_0x70:
	  bl        0x9E448
	  bl        0x9E314

	.loc_0x78:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80033C24
 * Size:	00004C
 */
void JUTVideo::postRetraceProc(unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r4, -0x76E0(r13)
	  lwz       r12, 0x28(r4)
	  cmplwi    r12, 0
	  beq-      .loc_0x24
	  mtctr     r12
	  bctrl

	.loc_0x24:
	  bl        0x9E4FC
	  lwz       r6, -0x76E0(r13)
	  mr        r4, r3
	  li        r5, 0
	  addi      r3, r6, 0x38
	  bl        0xBB8C0
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80033C70
 * Size:	000078
 */
void JUTVideo::setRenderMode(const _GXRenderModeObj*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r5, 0x4(r3)
	  cmplwi    r5, 0
	  beq-      .loc_0x40
	  lwz       r3, 0x0(r4)
	  lwz       r0, 0x0(r5)
	  cmpw      r3, r0
	  beq-      .loc_0x40
	  li        r3, 0x1
	  li        r0, 0x4
	  stb       r3, 0x2C(r31)
	  stw       r0, 0x30(r31)

	.loc_0x40:
	  stw       r4, 0x4(r31)
	  lwz       r3, 0x4(r31)
	  bl        0x9DA44
	  bl        0x9E268
	  lbz       r0, 0x2C(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x64
	  bl        0x9D568
	  bl        0x9D564

	.loc_0x64:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80033CE8
 * Size:	000004
 */
void JUTVideo::waitRetraceIfNeed()
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000010
 */
void JUTVideo::setPreRetraceCallback(void (*)(unsigned long))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80033CEC
 * Size:	000010
 */
void JUTVideo::setPostRetraceCallback(void (*)(unsigned long))
{
	/*
	.loc_0x0:
	  lwz       r0, 0x28(r3)
	  stw       r4, 0x28(r3)
	  mr        r3, r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000094
 */
void JUTVideo::getPixelAspect(const _GXRenderModeObj*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000098
 */
void JUTVideo::getPixelAspect() const
{
	// UNUSED FUNCTION
}