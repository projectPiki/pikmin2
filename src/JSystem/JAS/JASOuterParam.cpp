

/*
 * --INFO--
 * Address:	8009C400
 * Size:	00004C
 */
void JASOuterParam::JASOuterParam()
{
	/*
	.loc_0x0:
	  li        r0, 0
	  lfs       f0, -0x7650(r2)
	  sth       r0, 0x0(r3)
	  sth       r0, 0x2(r3)
	  stfs      f0, 0x4(r3)
	  stfs      f0, 0x8(r3)
	  stfs      f0, 0xC(r3)
	  stfs      f0, 0x10(r3)
	  stfs      f0, 0x14(r3)
	  stfs      f0, 0x18(r3)
	  sth       r0, 0x1C(r3)
	  sth       r0, 0x1E(r3)
	  sth       r0, 0x20(r3)
	  sth       r0, 0x22(r3)
	  sth       r0, 0x24(r3)
	  sth       r0, 0x26(r3)
	  sth       r0, 0x28(r3)
	  sth       r0, 0x2A(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8009C44C
 * Size:	000010
 */
void JASOuterParam::initExtBuffer()
{
	/*
	.loc_0x0:
	  li        r0, 0
	  sth       r0, 0x0(r3)
	  sth       r0, 0x2(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8009C45C
 * Size:	000008
 */
void JASOuterParam::setOuterSwitch(unsigned short)
{
	/*
	.loc_0x0:
	  sth       r4, 0x0(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JASOuterParam::getSwitch()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8009C464
 * Size:	00001C
 */
void JASOuterParam::checkOuterSwitch(unsigned short)
{
	/*
	.loc_0x0:
	  lhz       r3, 0x0(r3)
	  rlwinm    r0,r4,0,16,31
	  and       r3, r3, r0
	  neg       r0, r3
	  or        r0, r0, r3
	  rlwinm    r3,r0,1,31,31
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8009C480
 * Size:	000008
 */
void JASOuterParam::setOuterUpdate(unsigned short)
{
	/*
	.loc_0x0:
	  sth       r4, 0x2(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8009C488
 * Size:	000008
 */
void JASOuterParam::getOuterUpdate()
{
	/*
	.loc_0x0:
	  lhz       r3, 0x2(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000010
 */
void JASOuterParam::setIntFirFilter(short, unsigned char)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8009C490
 * Size:	000010
 */
void JASOuterParam::getIntFirFilter(unsigned char)
{
	/*
	.loc_0x0:
	  rlwinm    r0,r4,1,23,30
	  add       r3, r3, r0
	  lha       r3, 0x1C(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8009C4A0
 * Size:	00009C
 */
void JASOuterParam::setParam(unsigned char, float)
{
	/*
	.loc_0x0:
	  rlwinm    r0,r4,0,24,31
	  cmpwi     r0, 0x8
	  beq-      .loc_0x70
	  bge-      .loc_0x38
	  cmpwi     r0, 0x3
	  beqlr-
	  bge-      .loc_0x2C
	  cmpwi     r0, 0x1
	  beq-      .loc_0x50
	  bge-      .loc_0x58
	  blr

	.loc_0x2C:
	  cmpwi     r0, 0x5
	  bgelr-
	  b         .loc_0x60

	.loc_0x38:
	  cmpwi     r0, 0x40
	  beq-      .loc_0x78
	  bgelr-
	  cmpwi     r0, 0x10
	  beq-      .loc_0x68
	  blr

	.loc_0x50:
	  addi      r5, r3, 0x4
	  b         .loc_0x84

	.loc_0x58:
	  addi      r5, r3, 0x8
	  b         .loc_0x84

	.loc_0x60:
	  addi      r5, r3, 0xC
	  b         .loc_0x84

	.loc_0x68:
	  addi      r5, r3, 0x10
	  b         .loc_0x84

	.loc_0x70:
	  addi      r5, r3, 0x14
	  b         .loc_0x84

	.loc_0x78:
	  addi      r5, r3, 0x18
	  b         .loc_0x84
	  blr

	.loc_0x84:
	  stfs      f1, 0x0(r5)
	  rlwinm    r0,r4,0,24,31
	  lhz       r4, 0x2(r3)
	  or        r0, r4, r0
	  sth       r0, 0x2(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8009C53C
 * Size:	00001C
 */
void JASOuterParam::onSwitch(unsigned short)
{
	/*
	.loc_0x0:
	  lhz       r0, 0x0(r3)
	  or        r0, r0, r4
	  sth       r0, 0x0(r3)
	  lhz       r0, 0x2(r3)
	  or        r0, r0, r4
	  sth       r0, 0x2(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8009C558
 * Size:	00005C
 */
void JASOuterParam::setFirFilter(short*)
{
	/*
	.loc_0x0:
	  lhz       r0, 0x2(r3)
	  ori       r0, r0, 0x80
	  sth       r0, 0x2(r3)
	  lhz       r0, 0x0(r3)
	  ori       r0, r0, 0x80
	  sth       r0, 0x0(r3)
	  lha       r0, 0x0(r4)
	  sth       r0, 0x1C(r3)
	  lha       r0, 0x2(r4)
	  sth       r0, 0x1E(r3)
	  lha       r0, 0x4(r4)
	  sth       r0, 0x20(r3)
	  lha       r0, 0x6(r4)
	  sth       r0, 0x22(r3)
	  lha       r0, 0x8(r4)
	  sth       r0, 0x24(r3)
	  lha       r0, 0xA(r4)
	  sth       r0, 0x26(r3)
	  lha       r0, 0xC(r4)
	  sth       r0, 0x28(r3)
	  lha       r0, 0xE(r4)
	  sth       r0, 0x2A(r3)
	  blr
	*/
}