

/*
 * --INFO--
 * Address:	80022E98
 * Size:	000058
 */
void JKRFileLoader::JKRFileLoader()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x5EE0
	  lis       r3, 0x804A
	  mr        r4, r31
	  subi      r0, r3, 0x140
	  addi      r3, r31, 0x18
	  stw       r0, 0x0(r31)
	  bl        0x38F4
	  li        r0, 0
	  mr        r3, r31
	  stw       r0, 0x28(r31)
	  stw       r0, 0x2C(r31)
	  stw       r0, 0x34(r31)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80022EF0
 * Size:	00008C
 */
void JKRFileLoader::~JKRFileLoader()
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
	  beq-      .loc_0x70
	  lis       r3, 0x804A
	  subi      r0, r3, 0x140
	  stw       r0, 0x0(r30)
	  lwz       r0, -0x77E0(r13)
	  cmplw     r0, r30
	  bne-      .loc_0x40
	  li        r0, 0
	  stw       r0, -0x77E0(r13)

	.loc_0x40:
	  addic.    r0, r30, 0x18
	  beq-      .loc_0x54
	  addi      r3, r30, 0x18
	  li        r4, 0
	  bl        0x3890

	.loc_0x54:
	  mr        r3, r30
	  li        r4, 0
	  bl        -0x5F18
	  extsh.    r0, r31
	  ble-      .loc_0x70
	  mr        r3, r30
	  bl        0x1158

	.loc_0x70:
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
 * Address:	80022F7C
 * Size:	000050
 */
void JKRFileLoader::unmount()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r4, 0x34(r3)
	  cmplwi    r4, 0
	  beq-      .loc_0x40
	  subic.    r0, r4, 0x1
	  stw       r0, 0x34(r3)
	  bne-      .loc_0x40
	  cmplwi    r3, 0
	  beq-      .loc_0x40
	  lwz       r12, 0x0(r3)
	  li        r4, 0x1
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl

	.loc_0x40:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80022FCC
 * Size:	00004C
 */
void JKRFileLoader::getGlbResource(const char*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r3, 0x8(r1)
	  addi      r3, r1, 0x8
	  bl        0xD0
	  cmplwi    r3, 0
	  bne-      .loc_0x28
	  li        r3, 0
	  b         .loc_0x3C

	.loc_0x28:
	  lwz       r12, 0x0(r3)
	  lwz       r4, 0x8(r1)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl

	.loc_0x3C:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80023018
 * Size:	000098
 */
void JKRFileLoader::getGlbResource(const char*, JKRFileLoader*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  cmplwi    r4, 0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  li        r3, 0
	  beq-      .loc_0x44
	  mr        r3, r4
	  mr        r5, r30
	  lwz       r12, 0x0(r4)
	  li        r4, 0
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x80

	.loc_0x44:
	  lis       r4, 0x8050
	  lwz       r31, 0x6E24(r4)
	  b         .loc_0x78

	.loc_0x50:
	  lwz       r3, 0x0(r31)
	  mr        r5, r30
	  li        r4, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  cmplwi    r3, 0
	  bne-      .loc_0x80
	  lwz       r31, 0xC(r31)

	.loc_0x78:
	  cmplwi    r31, 0
	  bne+      .loc_0x50

	.loc_0x80:
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
 * Address:	800230B0
 * Size:	00008C
 */
void JKRFileLoader::findVolume(const char**)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x120(r1)
	  mflr      r0
	  stw       r0, 0x124(r1)
	  stw       r31, 0x11C(r1)
	  mr        r31, r3
	  lwz       r5, 0x0(r3)
	  lbz       r0, 0x0(r5)
	  cmpwi     r0, 0x2F
	  beq-      .loc_0x2C
	  lwz       r3, -0x77E0(r13)
	  b         .loc_0x78

	.loc_0x2C:
	  addi      r3, r1, 0x8
	  li        r4, 0x101
	  bl        .loc_0x8C
	  stw       r3, 0x0(r31)
	  lis       r4, 0x8050
	  lwz       r31, 0x6E24(r4)
	  b         .loc_0x6C

	.loc_0x48:
	  lwz       r4, 0x0(r31)
	  addi      r3, r1, 0x8
	  lwz       r4, 0x28(r4)
	  bl        0xA75BC
	  cmpwi     r3, 0
	  bne-      .loc_0x68
	  lwz       r3, 0x0(r31)
	  b         .loc_0x78

	.loc_0x68:
	  lwz       r31, 0xC(r31)

	.loc_0x6C:
	  cmplwi    r31, 0
	  bne+      .loc_0x48
	  li        r3, 0

	.loc_0x78:
	  lwz       r0, 0x124(r1)
	  lwz       r31, 0x11C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x120
	  blr

	.loc_0x8C:
	*/
}

/*
 * --INFO--
 * Address:	8002313C
 * Size:	0000E0
 */
void JKRFileLoader::fetchVolumeName(char*, long, const char*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r5
	  stw       r30, 0x18(r1)
	  mr        r30, r4
	  subi      r4, r2, 0x7E38
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  mr        r3, r31
	  bl        0xA7558
	  cmpwi     r3, 0
	  bne-      .loc_0x4C
	  mr        r3, r29
	  subi      r4, r13, 0x7FE8
	  bl        0xA76DC
	  subi      r3, r13, 0x7FE8
	  b         .loc_0xC4

	.loc_0x4C:
	  lis       r3, 0x804A
	  addi      r31, r31, 0x1
	  addi      r3, r3, 0x6CF0
	  b         .loc_0x90

	.loc_0x5C:
	  cmpwi     r30, 0x1
	  ble-      .loc_0x8C
	  extsb     r0, r4
	  cmpwi     r0, -0x1
	  bne-      .loc_0x78
	  li        r0, -0x1
	  b         .loc_0x80

	.loc_0x78:
	  rlwinm    r0,r0,0,24,31
	  lbzx      r0, r3, r0

	.loc_0x80:
	  stb       r0, 0x0(r29)
	  addi      r29, r29, 0x1
	  subi      r30, r30, 0x1

	.loc_0x8C:
	  addi      r31, r31, 0x1

	.loc_0x90:
	  lbz       r4, 0x0(r31)
	  extsb.    r0, r4
	  beq-      .loc_0xA8
	  extsb     r0, r4
	  cmpwi     r0, 0x2F
	  bne+      .loc_0x5C

	.loc_0xA8:
	  li        r0, 0
	  stb       r0, 0x0(r29)
	  lbz       r0, 0x0(r31)
	  extsb.    r0, r0
	  bne-      .loc_0xC0
	  subi      r31, r13, 0x7FE8

	.loc_0xC0:
	  mr        r3, r31

	.loc_0xC4:
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
 * Address:	8002321C
 * Size:	000044
 */
void __sinit_JKRFileLoader_cpp(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r3, 0x8050
	  stw       r0, 0x14(r1)
	  addi      r3, r3, 0x6E24
	  bl        0x36A0
	  lis       r3, 0x8050
	  lis       r4, 0x8002
	  lis       r5, 0x804F
	  addi      r3, r3, 0x6E24
	  addi      r4, r4, 0x3260
	  subi      r5, r5, 0x60
	  bl        0x9E4B4
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80023260
 * Size:	000054
 */
void JSUList<JKRFileLoader>::~JSUList()
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
	  beq-      .loc_0x38
	  li        r4, 0
	  bl        0x35E4
	  extsh.    r0, r31
	  ble-      .loc_0x38
	  mr        r3, r30
	  bl        0xE20

	.loc_0x38:
	  lwz       r0, 0x14(r1)
	  mr        r3, r30
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}
