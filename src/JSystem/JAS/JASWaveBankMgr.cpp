

/*
 * --INFO--
 * Address:	8009C044
 * Size:	000054
 */
void JASWaveBankMgr::init(int)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r5, 0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  rlwinm    r31,r3,2,0,29
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  mr        r3, r31
	  lwz       r4, -0x7548(r13)
	  bl        -0x78024
	  stw       r3, -0x75AC(r13)
	  mr        r4, r31
	  bl        0xA1EC
	  stw       r30, -0x75B0(r13)
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
 * Address:	8009C098
 * Size:	000034
 */
void JASWaveBankMgr::getWaveBank(int)
{
	/*
	.loc_0x0:
	  cmpwi     r3, 0
	  bge-      .loc_0x10
	  li        r3, 0
	  blr

	.loc_0x10:
	  lwz       r0, -0x75B0(r13)
	  cmpw      r3, r0
	  blt-      .loc_0x24
	  li        r3, 0
	  blr

	.loc_0x24:
	  lwz       r4, -0x75AC(r13)
	  rlwinm    r0,r3,2,0,29
	  lwzx      r3, r4, r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000014
 */
void JASWaveBankMgr::registWaveBank(int, JASWaveBank*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8009C0CC
 * Size:	000080
 */
void JASWaveBankMgr::registWaveBankWS(int, void*)
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
	  mr        r3, r31
	  bl        -0x3684
	  cmplwi    r3, 0x1
	  bne-      .loc_0x3C
	  mr        r3, r31
	  bl        -0x3468
	  mr        r5, r3
	  b         .loc_0x48

	.loc_0x3C:
	  mr        r3, r31
	  bl        -0x367C
	  mr        r5, r3

	.loc_0x48:
	  cmplwi    r5, 0
	  bne-      .loc_0x58
	  li        r3, 0
	  b         .loc_0x68

	.loc_0x58:
	  lwz       r4, -0x75AC(r13)
	  rlwinm    r0,r30,2,0,29
	  li        r3, 0x1
	  stwx      r5, r4, r0

	.loc_0x68:
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
 * Address:	........
 * Size:	00006C
 */
void JASWaveBankMgr::getWaveArc(int, int)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8009C14C
 * Size:	000090
 */
void JASWaveBankMgr::loadWave(int, int, JASHeap*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  cmpwi     r3, 0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r5
	  bge-      .loc_0x24
	  li        r3, 0
	  b         .loc_0x44

	.loc_0x24:
	  lwz       r0, -0x75B0(r13)
	  cmpw      r3, r0
	  blt-      .loc_0x38
	  li        r3, 0
	  b         .loc_0x44

	.loc_0x38:
	  lwz       r5, -0x75AC(r13)
	  rlwinm    r0,r3,2,0,29
	  lwzx      r3, r5, r0

	.loc_0x44:
	  cmplwi    r3, 0
	  bne-      .loc_0x54
	  li        r3, 0
	  b         .loc_0x64

	.loc_0x54:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl

	.loc_0x64:
	  cmplwi    r3, 0
	  bne-      .loc_0x74
	  li        r3, 0
	  b         .loc_0x7C

	.loc_0x74:
	  mr        r4, r31
	  bl        -0x584

	.loc_0x7C:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8009C1DC
 * Size:	000090
 */
void JASWaveBankMgr::loadWaveTail(int, int, JASHeap*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  cmpwi     r3, 0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r5
	  bge-      .loc_0x24
	  li        r3, 0
	  b         .loc_0x44

	.loc_0x24:
	  lwz       r0, -0x75B0(r13)
	  cmpw      r3, r0
	  blt-      .loc_0x38
	  li        r3, 0
	  b         .loc_0x44

	.loc_0x38:
	  lwz       r5, -0x75AC(r13)
	  rlwinm    r0,r3,2,0,29
	  lwzx      r3, r5, r0

	.loc_0x44:
	  cmplwi    r3, 0
	  bne-      .loc_0x54
	  li        r3, 0
	  b         .loc_0x64

	.loc_0x54:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl

	.loc_0x64:
	  cmplwi    r3, 0
	  bne-      .loc_0x74
	  li        r3, 0
	  b         .loc_0x7C

	.loc_0x74:
	  mr        r4, r31
	  bl        -0x4EC

	.loc_0x7C:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000090
 */
void JASWaveBankMgr::loadWaveBlock(int, int, JASHeap*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000090
 */
void JASWaveBankMgr::loadWaveBlockTail(int, int, JASHeap*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8009C26C
 * Size:	000090
 */
void JASWaveBankMgr::eraseWave(int, int)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  cmpwi     r3, 0
	  stw       r0, 0x14(r1)
	  bge-      .loc_0x1C
	  li        r3, 0
	  b         .loc_0x3C

	.loc_0x1C:
	  lwz       r0, -0x75B0(r13)
	  cmpw      r3, r0
	  blt-      .loc_0x30
	  li        r3, 0
	  b         .loc_0x3C

	.loc_0x30:
	  lwz       r5, -0x75AC(r13)
	  rlwinm    r0,r3,2,0,29
	  lwzx      r3, r5, r0

	.loc_0x3C:
	  cmplwi    r3, 0
	  bne-      .loc_0x4C
	  li        r3, 0
	  b         .loc_0x5C

	.loc_0x4C:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl

	.loc_0x5C:
	  cmplwi    r3, 0
	  bne-      .loc_0x6C
	  li        r3, 0
	  b         .loc_0x80

	.loc_0x6C:
	  bl        -0x448
	  rlwinm    r3,r3,0,24,31
	  neg       r0, r3
	  or        r0, r0, r3
	  rlwinm    r3,r0,1,31,31

	.loc_0x80:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000020
 */
void JASWaveBankMgr::getUsedHeapSize()
{
	// UNUSED FUNCTION
}