

/*
 * --INFO--
 * Address:	........
 * Size:	0000B4
 */
void og::Screen::CallBack_SunMeter::__ct(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000108
 */
void og::Screen::CallBack_SunMeter::init((J2DScreen*, float*))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80307294
 * Size:	00023C
 */
void og::Screen::CallBack_SunMeter::update(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  mflr      r0
	  stw       r0, 0x54(r1)
	  stfd      f31, 0x40(r1)
	  psq_st    f31,0x48(r1),0,0
	  stfd      f30, 0x30(r1)
	  psq_st    f30,0x38(r1),0,0
	  stfd      f29, 0x20(r1)
	  psq_st    f29,0x28(r1),0,0
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  lfs       f0, -0xD6C(r2)
	  lwz       r3, 0x20(r3)
	  lfs       f31, 0x0(r3)
	  fcmpo     cr0, f0, f31
	  bge-      .loc_0x70
	  lfs       f0, -0xD68(r2)
	  fcmpo     cr0, f31, f0
	  bge-      .loc_0x70
	  lbz       r0, 0x39(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x70
	  li        r0, 0x1
	  stb       r0, 0x39(r31)
	  lwz       r3, -0x6858(r13)
	  bl        0x5800
	  mr        r3, r31
	  bl        .loc_0x23C

	.loc_0x70:
	  lfs       f0, -0xD64(r2)
	  fcmpo     cr0, f0, f31
	  bge-      .loc_0xAC
	  lfs       f0, -0xD60(r2)
	  fcmpo     cr0, f31, f0
	  bge-      .loc_0xAC
	  lbz       r0, 0x38(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0xAC
	  li        r0, 0x1
	  stb       r0, 0x38(r31)
	  lwz       r3, -0x6858(r13)
	  bl        0x56D0
	  mr        r3, r31
	  bl        .loc_0x23C

	.loc_0xAC:
	  lfs       f0, -0xD5C(r2)
	  fcmpo     cr0, f0, f31
	  bge-      .loc_0xE8
	  lfs       f0, -0xD58(r2)
	  fcmpo     cr0, f31, f0
	  bge-      .loc_0xE8
	  lbz       r0, 0x3A(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0xE8
	  li        r0, 0x1
	  stb       r0, 0x3A(r31)
	  lwz       r3, -0x6858(r13)
	  bl        0x5788
	  mr        r3, r31
	  bl        .loc_0x23C

	.loc_0xE8:
	  lfs       f1, 0x1C(r31)
	  lfs       f0, -0xD54(r2)
	  fadds     f0, f1, f0
	  stfs      f0, 0x1C(r31)
	  lwz       r3, 0x24(r31)
	  bl        -0x2CF070
	  lfs       f30, 0x0(r3)
	  lwz       r3, 0x28(r31)
	  bl        -0x2CF07C
	  lfs       f29, 0x0(r3)
	  lwz       r3, 0x2C(r31)
	  bl        -0x2CF088
	  lfs       f2, 0x4(r3)
	  fsubs     f0, f29, f30
	  lwz       r3, 0x2C(r31)
	  lwz       r12, 0x0(r3)
	  fmadds    f1, f31, f0, f30
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x30(r31)
	  li        r4, 0x7A
	  lfs       f0, 0x1C(r31)
	  lfs       f4, 0x28(r3)
	  lfs       f2, 0x20(r3)
	  fneg      f3, f0
	  lfs       f1, 0x2C(r3)
	  lfs       f0, 0x24(r3)
	  fsubs     f4, f4, f2
	  lfs       f2, -0xD60(r2)
	  fsubs     f0, f1, f0
	  fmuls     f1, f4, f2
	  fmuls     f2, f0, f2
	  bl        -0x2CF000
	  lfs       f0, 0x1C(r31)
	  lfs       f1, -0xD48(r2)
	  fneg      f0, f0
	  lfs       f2, -0xD4C(r2)
	  lfs       f3, -0xD50(r2)
	  fmuls     f0, f1, f0
	  fmuls     f0, f2, f0
	  fmuls     f1, f3, f0
	  bl        -0x237C08
	  frsp      f3, f1
	  lfs       f2, -0xD40(r2)
	  lfs       f1, -0xD44(r2)
	  lfs       f0, -0xD70(r2)
	  fmadds    f1, f2, f3, f1
	  lwz       r3, 0x30(r31)
	  fcmpo     cr0, f1, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x1C4
	  lfs       f0, -0xD60(r2)
	  fadds     f0, f0, f1
	  b         .loc_0x1CC

	.loc_0x1C4:
	  lfs       f0, -0xD60(r2)
	  fsubs     f0, f1, f0

	.loc_0x1CC:
	  fctiwz    f0, f0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  stfd      f0, 0x8(r1)
	  lwz       r0, 0xC(r1)
	  rlwinm    r4,r0,0,24,31
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x3C(r31)
	  bl        0x21B00
	  lwz       r3, 0x2C(r31)
	  stfs      f1, 0xCC(r3)
	  stfs      f1, 0xD0(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  psq_l     f31,0x48(r1),0,0
	  lfd       f31, 0x40(r1)
	  psq_l     f30,0x38(r1),0,0
	  lfd       f30, 0x30(r1)
	  psq_l     f29,0x28(r1),0,0
	  lfd       f29, 0x20(r1)
	  lwz       r0, 0x54(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr

	.loc_0x23C:
	*/
}

/*
 * --INFO--
 * Address:	803074D0
 * Size:	000034
 */
void og::Screen::CallBack_SunMeter::startEffectChime(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f1, -0xD68(r2)
	  stw       r0, 0x14(r1)
	  lfs       f2, -0xD3C(r2)
	  lwz       r3, 0x3C(r3)
	  lfs       f3, -0xD58(r2)
	  lfs       f4, -0xD70(r2)
	  bl        0x219E8
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80307504
 * Size:	000044
 */
void og::Screen::SunMeter::__ct(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        0x12D894
	  lis       r3, 0x804D
	  lfs       f0, -0xD70(r2)
	  addi      r0, r3, 0x7F48
	  mr        r3, r31
	  stw       r0, 0x0(r31)
	  stfs      f0, 0x14C(r31)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80307548
 * Size:	0001B4
 */
void og::Screen::SunMeter::setCallBack(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  stw       r30, 0x8(r1)
	  bl        -0x424C
	  li        r3, 0x40
	  bl        -0x2E36C4
	  mr.       r30, r3
	  beq-      .loc_0xA4
	  bl        0x109E1C
	  lis       r3, 0x804D
	  lis       r4, 0x804D
	  addi      r0, r3, 0x7B0C
	  lis       r3, 0x804D
	  stw       r0, 0x0(r30)
	  li        r5, 0
	  addi      r4, r4, 0x7F2C
	  addi      r0, r3, 0x7FE8
	  stw       r5, 0x18(r30)
	  li        r3, 0x1C
	  lfs       f0, -0xD70(r2)
	  stw       r4, 0x0(r30)
	  stw       r0, 0x0(r30)
	  stfs      f0, 0x1C(r30)
	  stw       r5, 0x20(r30)
	  stw       r5, 0x24(r30)
	  stw       r5, 0x28(r30)
	  stw       r5, 0x2C(r30)
	  stw       r5, 0x30(r30)
	  stw       r5, 0x34(r30)
	  stb       r5, 0x38(r30)
	  stb       r5, 0x39(r30)
	  stb       r5, 0x3A(r30)
	  bl        -0x2E3730
	  mr.       r0, r3
	  beq-      .loc_0xA0
	  bl        0x21824
	  mr        r0, r3

	.loc_0xA0:
	  stw       r0, 0x3C(r30)

	.loc_0xA4:
	  stw       r30, 0x148(r31)
	  lis       r4, 0x7374
	  addi      r0, r31, 0x14C
	  mr        r3, r31
	  lwz       r30, 0x148(r31)
	  addi      r6, r4, 0x6174
	  li        r5, 0
	  stw       r0, 0x20(r30)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x24(r30)
	  mr        r3, r31
	  lis       r4, 0x676F
	  li        r5, 0
	  lwz       r12, 0x0(r31)
	  addi      r6, r4, 0x616C
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x28(r30)
	  mr        r3, r31
	  lis       r4, 0x7375
	  li        r5, 0
	  lwz       r12, 0x0(r31)
	  addi      r6, r4, 0x6E69
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x2C(r30)
	  mr        r3, r31
	  lis       r4, 0x7375
	  li        r5, 0
	  lwz       r12, 0x0(r31)
	  addi      r6, r4, 0x6E31
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x30(r30)
	  mr        r3, r31
	  lis       r4, 0x7375
	  li        r5, 0
	  lwz       r12, 0x0(r31)
	  addi      r6, r4, 0x6E32
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x34(r30)
	  li        r0, 0
	  li        r4, 0x4
	  stb       r0, 0x38(r30)
	  stb       r0, 0x39(r30)
	  stb       r0, 0x3A(r30)
	  lwz       r3, 0x2C(r30)
	  bl        -0x2CEA0C
	  lis       r4, 0x7375
	  lwz       r7, 0x148(r31)
	  mr        r3, r31
	  li        r5, 0
	  addi      r6, r4, 0x6E69
	  bl        0x12D444
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
 * Address:	803076FC
 * Size:	0000A4
 */
void og::Screen::SunMeter::__dt(void)
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
	  beq-      .loc_0x88
	  lis       r3, 0x804D
	  addi      r0, r3, 0x7F48
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x78
	  lis       r3, 0x804F
	  subi      r0, r3, 0x3B00
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x78
	  lis       r3, 0x804F
	  addic.    r0, r30, 0x118
	  subi      r0, r3, 0x3A60
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x6C
	  lis       r4, 0x804D
	  addi      r3, r30, 0x118
	  addi      r0, r4, 0x7B0C
	  li        r4, 0
	  stw       r0, 0x118(r30)
	  bl        0x109E24

	.loc_0x6C:
	  mr        r3, r30
	  li        r4, 0
	  bl        -0x2C8254

	.loc_0x78:
	  extsh.    r0, r31
	  ble-      .loc_0x88
	  mr        r3, r30
	  bl        -0x2E36CC

	.loc_0x88:
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
 * Address:	803077A0
 * Size:	000080
 */
void og::Screen::CallBack_SunMeter::__dt(void)
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
	  beq-      .loc_0x64
	  lis       r4, 0x804D
	  addi      r0, r4, 0x7FE8
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x54
	  lis       r4, 0x804D
	  addi      r0, r4, 0x7F2C
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x54
	  lis       r5, 0x804D
	  li        r4, 0
	  addi      r0, r5, 0x7B0C
	  stw       r0, 0x0(r30)
	  bl        0x109D98

	.loc_0x54:
	  extsh.    r0, r31
	  ble-      .loc_0x64
	  mr        r3, r30
	  bl        -0x2E374C

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
