

/*
 * --INFO--
 * Address:	80054AF0
 * Size:	000048
 */
void J2DPictureEx::J2DPictureEx()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x1B028
	  lis       r4, 0x804A
	  mr        r3, r31
	  addi      r0, r4, 0x11B0
	  lis       r4, 0x110
	  stw       r0, 0x0(r31)
	  bl        0x1A4
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
 * Address:	........
 * Size:	000054
 */
void J2DPictureEx::J2DPictureEx(unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000078
 */
void J2DPictureEx::J2DPictureEx(unsigned char, unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80054B38
 * Size:	00007C
 */
void J2DPictureEx::J2DPictureEx(const ResTIMG*, unsigned long)
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
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  bl        -0x1B080
	  lis       r4, 0x804A
	  mr        r3, r29
	  addi      r0, r4, 0x11B0
	  mr        r4, r31
	  stw       r0, 0x0(r29)
	  bl        0x14C
	  mr        r3, r29
	  mr        r4, r30
	  lwz       r12, 0x0(r29)
	  lfs       f1, -0x7A80(r2)
	  lwz       r12, 0x9C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x24(r1)
	  mr        r3, r29
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
 * Address:	80054BB4
 * Size:	000030
 */
void J2DPictureEx::append(const ResTIMG*, float)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r5, 0
	  stw       r0, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xA0(r12)
	  mtctr     r12
	  bctrl
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
void J2DPictureEx::J2DPictureEx(const char*, unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80054BE4
 * Size:	000030
 */
void J2DPictureEx::append(const char*, float)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r5, 0
	  stw       r0, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
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
void J2DPictureEx::J2DPictureEx(JUTTexture*, unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80054C14
 * Size:	0000AC
 */
void J2DPictureEx::initiate(const ResTIMG*, const ResTLUT*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r5
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  lwz       r5, 0x168(r3)
	  lwz       r0, 0x28(r5)
	  cmplwi    r0, 0
	  bne-      .loc_0x94
	  lwz       r12, 0x0(r3)
	  lfs       f1, -0x7A80(r2)
	  lwz       r12, 0x9C(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x94
	  cmplwi    r31, 0
	  beq-      .loc_0x94
	  lwz       r3, 0x168(r30)
	  li        r4, 0
	  lwz       r3, 0x70(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xA4(r12)
	  mtctr     r12
	  bctrl
	  cmplwi    r3, 0
	  bne-      .loc_0x94
	  lwz       r3, 0x168(r30)
	  mr        r5, r31
	  li        r4, 0
	  lwz       r3, 0x70(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x98(r12)
	  mtctr     r12
	  bctrl

	.loc_0x94:
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
 * Address:	80054CC0
 * Size:	0000D0
 */
void J2DPictureEx::initialize(unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r5, 0x5049
	  stw       r0, 0x14(r1)
	  addi      r0, r5, 0x4332
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  stw       r0, 0x8(r3)
	  li        r3, 0x88
	  bl        -0x30E48
	  mr.       r0, r3
	  beq-      .loc_0x44
	  mr        r4, r31
	  bl        -0x2CC0
	  mr        r0, r3

	.loc_0x44:
	  stw       r0, 0x168(r30)
	  li        r0, 0x1
	  lis       r3, 0x1
	  lfs       f0, -0x7A80(r2)
	  stb       r0, 0x198(r30)
	  subi      r0, r3, 0x1
	  mr        r3, r30
	  li        r4, 0
	  sth       r0, 0x16C(r30)
	  li        r5, 0xF
	  li        r6, 0
	  li        r7, 0
	  sth       r0, 0x16E(r30)
	  sth       r0, 0x170(r30)
	  sth       r0, 0x172(r30)
	  sth       r0, 0x174(r30)
	  sth       r0, 0x176(r30)
	  stfs      f0, 0x178(r30)
	  stfs      f0, 0x188(r30)
	  stfs      f0, 0x17C(r30)
	  stfs      f0, 0x18C(r30)
	  stfs      f0, 0x180(r30)
	  stfs      f0, 0x190(r30)
	  stfs      f0, 0x184(r30)
	  stfs      f0, 0x194(r30)
	  bl        -0x17F00
	  li        r0, 0
	  stw       r0, 0x19C(r30)
	  stw       r0, 0x1A0(r30)
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80054D90
 * Size:	00029C
 */
void J2DPictureEx::J2DPictureEx(J2DPane*, JSURandomInputStream*, unsigned long,
                                J2DMaterial*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x70(r1)
	  mflr      r0
	  stw       r0, 0x74(r1)
	  stmw      r26, 0x58(r1)
	  mr        r28, r3
	  mr        r26, r4
	  mr        r29, r5
	  mr        r30, r7
	  bl        -0x1B2D4
	  lis       r3, 0x804A
	  li        r0, 0
	  addi      r4, r3, 0x11B0
	  mr        r3, r29
	  stw       r4, 0x0(r28)
	  stw       r0, 0x19C(r28)
	  stw       r0, 0x1A0(r28)
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  mr        r31, r3
	  mr        r3, r29
	  addi      r4, r1, 0x14
	  li        r5, 0x8
	  bl        -0x2EA1C
	  lwz       r0, 0x14(r1)
	  mr        r3, r29
	  stw       r0, 0x8(r28)
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  mr        r27, r3
	  mr        r3, r29
	  addi      r4, r1, 0xC
	  li        r5, 0x8
	  bl        -0x2E7D4
	  mr        r3, r28
	  mr        r4, r26
	  mr        r5, r29
	  bl        -0x1BD34
	  lwz       r0, 0x10(r1)
	  mr        r3, r29
	  li        r5, 0
	  add       r4, r27, r0
	  bl        -0x2E73C
	  lis       r4, 0x8004
	  addi      r3, r1, 0x2C
	  subi      r4, r4, 0x6460
	  li        r5, 0
	  li        r6, 0x4
	  li        r7, 0x4
	  bl        0x6C9DC
	  mr        r3, r29
	  addi      r4, r1, 0x1C
	  li        r5, 0x30
	  bl        -0x2EA9C
	  lhz       r3, 0x1E(r1)
	  addi      r26, r1, 0x1C
	  li        r11, 0
	  li        r0, 0x2
	  sth       r3, 0x16C(r28)
	  mr        r12, r26
	  mr        r27, r11
	  lhz       r3, 0x20(r1)
	  sth       r3, 0x16E(r28)
	  mtctr     r0

	.loc_0x10C:
	  lhz       r3, 0x8(r26)
	  addi      r10, r11, 0x170
	  addi      r9, r27, 0x112
	  addi      r8, r27, 0x114
	  sthx      r3, r28, r10
	  addi      r10, r11, 0x172
	  addi      r7, r27, 0x150
	  addi      r6, r27, 0x151
	  lha       r3, 0x10(r12)
	  addi      r4, r27, 0x152
	  addi      r0, r27, 0x153
	  addi      r11, r11, 0x4
	  sthx      r3, r28, r9
	  addi      r9, r27, 0x116
	  lha       r3, 0x12(r12)
	  sthx      r3, r28, r8
	  addi      r8, r27, 0x118
	  lwz       r3, 0x20(r12)
	  stw       r3, 0x8(r1)
	  lbz       r5, 0x8(r1)
	  lbz       r3, 0x9(r1)
	  stbx      r5, r28, r7
	  addi      r7, r27, 0x154
	  lbz       r5, 0xA(r1)
	  stbx      r3, r28, r6
	  addi      r6, r27, 0x155
	  lbz       r3, 0xB(r1)
	  stbx      r5, r28, r4
	  addi      r4, r27, 0x156
	  stbx      r3, r28, r0
	  addi      r0, r27, 0x157
	  addi      r27, r27, 0x8
	  lhz       r3, 0xA(r26)
	  addi      r26, r26, 0x4
	  sthx      r3, r28, r10
	  lha       r3, 0x14(r12)
	  sthx      r3, r28, r9
	  lha       r3, 0x16(r12)
	  sthx      r3, r28, r8
	  lwz       r3, 0x24(r12)
	  addi      r12, r12, 0x8
	  stw       r3, 0x8(r1)
	  lbz       r5, 0x8(r1)
	  lbz       r3, 0x9(r1)
	  stbx      r5, r28, r7
	  lbz       r5, 0xA(r1)
	  stbx      r3, r28, r6
	  lbz       r3, 0xB(r1)
	  stbx      r5, r28, r4
	  stbx      r3, r28, r0
	  bdnz+     .loc_0x10C
	  lwz       r0, 0x18(r1)
	  mr        r3, r29
	  li        r5, 0
	  add       r4, r31, r0
	  bl        -0x2E870
	  li        r0, 0
	  stw       r0, 0x168(r28)
	  lhz       r0, 0x16E(r28)
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0x21C
	  mulli     r0, r0, 0x88
	  add       r0, r30, r0
	  stw       r0, 0x168(r28)
	  lhz       r0, 0x16E(r28)
	  mulli     r0, r0, 0x88
	  add       r3, r30, r0
	  stw       r28, 0x4(r3)

	.loc_0x21C:
	  li        r3, 0
	  li        r0, 0xFF
	  stb       r3, 0x198(r28)
	  mr        r3, r28
	  stb       r0, 0xB2(r28)
	  lwz       r12, 0x0(r28)
	  lwz       r12, 0x58(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, -0x7A80(r2)
	  mr        r3, r28
	  stfs      f0, 0x124(r28)
	  stfs      f0, 0x134(r28)
	  stfs      f0, 0x128(r28)
	  stfs      f0, 0x138(r28)
	  stfs      f0, 0x12C(r28)
	  stfs      f0, 0x13C(r28)
	  stfs      f0, 0x130(r28)
	  stfs      f0, 0x140(r28)
	  stfs      f0, 0x178(r28)
	  stfs      f0, 0x188(r28)
	  stfs      f0, 0x17C(r28)
	  stfs      f0, 0x18C(r28)
	  stfs      f0, 0x180(r28)
	  stfs      f0, 0x190(r28)
	  stfs      f0, 0x184(r28)
	  stfs      f0, 0x194(r28)
	  lmw       r26, 0x58(r1)
	  lwz       r0, 0x74(r1)
	  mtlr      r0
	  addi      r1, r1, 0x70
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8005502C
 * Size:	000110
 */
void J2DPictureEx::J2DPictureEx(unsigned long long,
                                const JGeometry::TBox2<float>&, const ResTIMG*,
                                unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r9
	  stw       r30, 0x18(r1)
	  mr        r30, r8
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  bl        -0x1AA28
	  lis       r3, 0x804A
	  lis       r4, 0x5049
	  addi      r0, r3, 0x11B0
	  li        r3, 0x88
	  stw       r0, 0x0(r29)
	  addi      r0, r4, 0x4332
	  stw       r0, 0x8(r29)
	  stw       r0, 0x8(r29)
	  bl        -0x311D0
	  mr.       r0, r3
	  beq-      .loc_0x60
	  mr        r4, r31
	  bl        -0x3048
	  mr        r0, r3

	.loc_0x60:
	  stw       r0, 0x168(r29)
	  li        r0, 0x1
	  lis       r3, 0x1
	  lfs       f0, -0x7A80(r2)
	  stb       r0, 0x198(r29)
	  subi      r0, r3, 0x1
	  mr        r3, r29
	  li        r4, 0
	  sth       r0, 0x16C(r29)
	  li        r5, 0xF
	  li        r6, 0
	  li        r7, 0
	  sth       r0, 0x16E(r29)
	  sth       r0, 0x170(r29)
	  sth       r0, 0x172(r29)
	  sth       r0, 0x174(r29)
	  sth       r0, 0x176(r29)
	  stfs      f0, 0x178(r29)
	  stfs      f0, 0x188(r29)
	  stfs      f0, 0x17C(r29)
	  stfs      f0, 0x18C(r29)
	  stfs      f0, 0x180(r29)
	  stfs      f0, 0x190(r29)
	  stfs      f0, 0x184(r29)
	  stfs      f0, 0x194(r29)
	  bl        -0x18288
	  li        r0, 0
	  mr        r3, r29
	  stw       r0, 0x19C(r29)
	  mr        r4, r30
	  lfs       f1, -0x7A80(r2)
	  stw       r0, 0x1A0(r29)
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x9C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x24(r1)
	  mr        r3, r29
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
 * Address:	8005513C
 * Size:	000110
 */
void J2DPictureEx::J2DPictureEx(unsigned long long,
                                const JGeometry::TBox2<float>&, const char*,
                                unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r9
	  stw       r30, 0x18(r1)
	  mr        r30, r8
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  bl        -0x1AB38
	  lis       r3, 0x804A
	  lis       r4, 0x5049
	  addi      r0, r3, 0x11B0
	  li        r3, 0x88
	  stw       r0, 0x0(r29)
	  addi      r0, r4, 0x4332
	  stw       r0, 0x8(r29)
	  stw       r0, 0x8(r29)
	  bl        -0x312E0
	  mr.       r0, r3
	  beq-      .loc_0x60
	  mr        r4, r31
	  bl        -0x3158
	  mr        r0, r3

	.loc_0x60:
	  stw       r0, 0x168(r29)
	  li        r0, 0x1
	  lis       r3, 0x1
	  lfs       f0, -0x7A80(r2)
	  stb       r0, 0x198(r29)
	  subi      r0, r3, 0x1
	  mr        r3, r29
	  li        r4, 0
	  sth       r0, 0x16C(r29)
	  li        r5, 0xF
	  li        r6, 0
	  li        r7, 0
	  sth       r0, 0x16E(r29)
	  sth       r0, 0x170(r29)
	  sth       r0, 0x172(r29)
	  sth       r0, 0x174(r29)
	  sth       r0, 0x176(r29)
	  stfs      f0, 0x178(r29)
	  stfs      f0, 0x188(r29)
	  stfs      f0, 0x17C(r29)
	  stfs      f0, 0x18C(r29)
	  stfs      f0, 0x180(r29)
	  stfs      f0, 0x190(r29)
	  stfs      f0, 0x184(r29)
	  stfs      f0, 0x194(r29)
	  bl        -0x18398
	  li        r0, 0
	  mr        r3, r29
	  stw       r0, 0x19C(r29)
	  mr        r4, r30
	  lfs       f1, -0x7A80(r2)
	  stw       r0, 0x1A0(r29)
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0xA4(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x24(r1)
	  mr        r3, r29
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
 * Address:	8005524C
 * Size:	000090
 */
void J2DPictureEx::~J2DPictureEx()
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
	  beq-      .loc_0x74
	  lis       r3, 0x804A
	  addi      r0, r3, 0x11B0
	  stw       r0, 0x0(r30)
	  lbz       r0, 0x198(r30)
	  cmplwi    r0, 0
	  beq-      .loc_0x58
	  lwz       r3, 0x168(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0x58
	  lwz       r12, 0x0(r3)
	  li        r4, 0x1
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl

	.loc_0x58:
	  mr        r3, r30
	  li        r4, 0
	  bl        -0x1A3CC
	  extsh.    r0, r31
	  ble-      .loc_0x74
	  mr        r3, r30
	  bl        -0x31208

	.loc_0x74:
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
 * Address:	800552DC
 * Size:	0000F8
 */
void J2DPictureEx::prepareTexture(unsigned char)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x70(r1)
	  mflr      r0
	  stw       r0, 0x74(r1)
	  stw       r31, 0x6C(r1)
	  stw       r30, 0x68(r1)
	  stw       r29, 0x64(r1)
	  mr        r29, r4
	  stw       r28, 0x60(r1)
	  mr        r28, r3
	  lwz       r3, 0x168(r3)
	  lwz       r3, 0x70(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x9C(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x4C
	  li        r3, 0
	  b         .loc_0xD8

	.loc_0x4C:
	  lis       r3, 0x8048
	  rlwinm    r31,r29,0,24,31
	  subi      r30, r3, 0x7998
	  li        r29, 0
	  b         .loc_0xC8

	.loc_0x60:
	  lfs       f7, 0x4(r30)
	  rlwinm    r4,r29,0,24,31
	  lfs       f6, 0x8(r30)
	  addi      r5, r1, 0x8
	  lfs       f5, 0xC(r30)
	  lbz       r3, 0x0(r30)
	  lbz       r0, 0x1(r30)
	  lfs       f4, 0x10(r30)
	  lfs       f3, 0x14(r30)
	  lfs       f2, 0x18(r30)
	  lfs       f1, 0x1C(r30)
	  lfs       f0, 0x20(r30)
	  stfs      f7, 0xC(r1)
	  stfs      f6, 0x10(r1)
	  stfs      f5, 0x14(r1)
	  stb       r3, 0x8(r1)
	  stb       r0, 0x9(r1)
	  stfs      f4, 0x18(r1)
	  stfs      f3, 0x1C(r1)
	  stfs      f2, 0x20(r1)
	  stfs      f1, 0x24(r1)
	  stfs      f0, 0x28(r1)
	  lwz       r3, 0x168(r28)
	  addi      r3, r3, 0x28
	  bl        -0xB4A8
	  addi      r29, r29, 0x1

	.loc_0xC8:
	  rlwinm    r0,r29,0,24,31
	  cmplw     r0, r31
	  blt+      .loc_0x60
	  li        r3, 0x1

	.loc_0xD8:
	  lwz       r0, 0x74(r1)
	  lwz       r31, 0x6C(r1)
	  lwz       r30, 0x68(r1)
	  lwz       r29, 0x64(r1)
	  lwz       r28, 0x60(r1)
	  mtlr      r0
	  addi      r1, r1, 0x70
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800553D4
 * Size:	0000CC
 */
void J2DPictureEx::drawSelf(float, float, float (*)[3][4])
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stfd      f31, 0x20(r1)
	  psq_st    f31,0x28(r1),0,0
	  stfd      f30, 0x10(r1)
	  psq_st    f30,0x18(r1),0,0
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  fmr       f30, f1
	  lwz       r3, 0x168(r3)
	  fmr       f31, f2
	  mr        r31, r4
	  cmplwi    r3, 0
	  beq-      .loc_0xA4
	  bl        -0x31CC
	  bl        0x8F2B8
	  li        r3, 0x9
	  li        r4, 0x1
	  bl        0x8EE60
	  li        r3, 0xB
	  li        r4, 0x1
	  bl        0x8EE54
	  li        r3, 0xD
	  li        r4, 0x1
	  bl        0x8EE48
	  mr        r3, r30
	  lfs       f5, 0x28(r30)
	  lwz       r12, 0x0(r30)
	  fmr       f1, f30
	  lfs       f3, 0x20(r30)
	  fmr       f2, f31
	  lfs       f4, 0x2C(r30)
	  mr        r4, r31
	  lfs       f0, 0x24(r30)
	  lwz       r12, 0x140(r12)
	  fsubs     f3, f5, f3
	  fsubs     f4, f4, f0
	  mtctr     r12
	  bctrl

	.loc_0xA4:
	  psq_l     f31,0x28(r1),0,0
	  lfd       f31, 0x20(r1)
	  psq_l     f30,0x18(r1),0,0
	  lfd       f30, 0x10(r1)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x34(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800554A0
 * Size:	00005C
 */
void J2DPictureEx::drawFullSet(float, float, float, float, float (*)[3][4])
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lha       r0, 0x120(r3)
	  stw       r0, 0x8(r1)
	  stw       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lfs       f1, 0x20(r3)
	  lwz       r12, 0x144(r12)
	  lfs       f2, 0x24(r3)
	  lha       r4, 0x112(r3)
	  lha       r5, 0x114(r3)
	  lha       r6, 0x116(r3)
	  lha       r7, 0x118(r3)
	  lha       r8, 0x11A(r3)
	  lha       r9, 0x11C(r3)
	  lha       r10, 0x11E(r3)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800554FC
 * Size:	0002B4
 */
void J2DPictureEx::drawTexCoord(float, float, float, float, short, short, short,
                                short, short, short, short, short,
                                float (*)[3][4])
{
	/*
	.loc_0x0:
	  stwu      r1, -0xC0(r1)
	  mflr      r0
	  stw       r0, 0xC4(r1)
	  stfd      f31, 0xB0(r1)
	  psq_st    f31,0xB8(r1),0,0
	  stfd      f30, 0xA0(r1)
	  psq_st    f30,0xA8(r1),0,0
	  stfd      f29, 0x90(r1)
	  psq_st    f29,0x98(r1),0,0
	  stfd      f28, 0x80(r1)
	  psq_st    f28,0x88(r1),0,0
	  stmw      r23, 0x5C(r1)
	  fmr       f28, f1
	  mr        r25, r5
	  fmr       f29, f2
	  lwz       r0, 0xCC(r1)
	  mr        r23, r3
	  mr        r24, r4
	  fadds     f31, f28, f3
	  lha       r31, 0xCA(r1)
	  fadds     f30, f29, f4
	  mr        r26, r6
	  mr        r27, r7
	  mr        r28, r8
	  mr        r29, r9
	  mr        r30, r10
	  mr        r3, r0
	  addi      r4, r23, 0x80
	  addi      r5, r1, 0x20
	  bl        0x94D90
	  lwz       r3, 0x168(r23)
	  cmplwi    r3, 0
	  beq-      .loc_0x90
	  lbz       r0, 0xE(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x280

	.loc_0x90:
	  addi      r3, r1, 0x20
	  li        r4, 0
	  bl        0x93FE4
	  lwz       r6, 0x168(r23)
	  lwz       r5, 0x150(r23)
	  lwz       r4, 0x154(r23)
	  cmplwi    r6, 0
	  lwz       r3, 0x158(r23)
	  lwz       r0, 0x15C(r23)
	  stw       r5, 0x1C(r1)
	  stw       r4, 0x18(r1)
	  stw       r3, 0x14(r1)
	  stw       r0, 0x10(r1)
	  beq-      .loc_0x198
	  lhz       r0, 0x1C(r6)
	  rlwinm    r0,r0,0,31,31
	  cmplwi    r0, 0x1
	  bne-      .loc_0x174
	  lbz       r0, 0xF(r6)
	  cmpwi     r0, 0x1
	  bne-      .loc_0x198
	  lbz       r0, 0x1F(r1)
	  lis       r3, 0x8081
	  lbz       r7, 0xB3(r23)
	  subi      r9, r3, 0x7F7F
	  lbz       r4, 0x1B(r1)
	  mullw     r5, r0, r7
	  lbz       r0, 0x13(r1)
	  lbz       r3, 0x17(r1)
	  mullw     r6, r4, r7
	  mullw     r4, r3, r7
	  mullw     r0, r0, r7
	  mulhw     r7, r9, r5
	  mulhw     r3, r9, r6
	  add       r5, r7, r5
	  srawi     r7, r5, 0x7
	  mulhw     r5, r9, r4
	  rlwinm    r8,r7,1,31,31
	  add       r3, r3, r6
	  add       r7, r7, r8
	  srawi     r6, r3, 0x7
	  stb       r7, 0x1F(r1)
	  add       r4, r5, r4
	  rlwinm    r5,r6,1,31,31
	  mulhw     r3, r9, r0
	  add       r6, r6, r5
	  srawi     r4, r4, 0x7
	  stb       r6, 0x1B(r1)
	  rlwinm    r5,r4,1,31,31
	  add       r0, r3, r0
	  srawi     r0, r0, 0x7
	  add       r4, r4, r5
	  rlwinm    r3,r0,1,31,31
	  stb       r4, 0x17(r1)
	  add       r0, r0, r3
	  stb       r0, 0x13(r1)
	  b         .loc_0x198

	.loc_0x174:
	  lbz       r0, 0xB4(r23)
	  cmplwi    r0, 0
	  beq-      .loc_0x198
	  lbz       r0, 0xB3(r23)
	  addi      r4, r1, 0xC
	  li        r3, 0x2
	  stw       r0, 0x8(r1)
	  stw       r0, 0xC(r1)
	  bl        0x916E4

	.loc_0x198:
	  li        r3, 0
	  li        r4, 0x9
	  li        r5, 0x1
	  li        r6, 0x4
	  li        r7, 0
	  bl        0x8F060
	  li        r3, 0
	  li        r4, 0xD
	  li        r5, 0x1
	  li        r6, 0x3
	  li        r7, 0x8
	  bl        0x8F048
	  li        r3, 0x80
	  li        r4, 0
	  li        r5, 0x4
	  bl        0x902B8
	  lis       r10, 0xCC01
	  lfs       f0, -0x7A7C(r2)
	  stfs      f28, -0x8000(r10)
	  li        r3, 0
	  lwz       r0, 0x1C(r1)
	  li        r4, 0xD
	  stfs      f29, -0x8000(r10)
	  li        r5, 0x1
	  lwz       r9, 0x18(r1)
	  li        r6, 0x2
	  stfs      f0, -0x8000(r10)
	  li        r7, 0xF
	  lwz       r8, 0x10(r1)
	  stw       r0, -0x8000(r10)
	  lwz       r0, 0x14(r1)
	  sth       r24, -0x8000(r10)
	  sth       r25, -0x8000(r10)
	  stfs      f31, -0x8000(r10)
	  stfs      f29, -0x8000(r10)
	  stfs      f0, -0x8000(r10)
	  stw       r9, -0x8000(r10)
	  sth       r26, -0x8000(r10)
	  sth       r27, -0x8000(r10)
	  stfs      f31, -0x8000(r10)
	  stfs      f30, -0x8000(r10)
	  stfs      f0, -0x8000(r10)
	  stw       r8, -0x8000(r10)
	  sth       r30, -0x8000(r10)
	  sth       r31, -0x8000(r10)
	  stfs      f28, -0x8000(r10)
	  stfs      f30, -0x8000(r10)
	  stfs      f0, -0x8000(r10)
	  stw       r0, -0x8000(r10)
	  sth       r28, -0x8000(r10)
	  sth       r29, -0x8000(r10)
	  bl        0x8EFA8
	  li        r3, 0
	  li        r4, 0x9
	  li        r5, 0x1
	  li        r6, 0x3
	  li        r7, 0
	  bl        0x8EF90

	.loc_0x280:
	  psq_l     f31,0xB8(r1),0,0
	  lfd       f31, 0xB0(r1)
	  psq_l     f30,0xA8(r1),0,0
	  lfd       f30, 0xA0(r1)
	  psq_l     f29,0x98(r1),0,0
	  lfd       f29, 0x90(r1)
	  psq_l     f28,0x88(r1),0,0
	  lfd       f28, 0x80(r1)
	  lmw       r23, 0x5C(r1)
	  lwz       r0, 0xC4(r1)
	  mtlr      r0
	  addi      r1, r1, 0xC0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800557B0
 * Size:	000048
 */
void J2DPictureEx::append(const ResTIMG*, JUTPalette*, float)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r6, 0x168(r3)
	  cmplwi    r6, 0
	  bne-      .loc_0x20
	  li        r3, 0
	  b         .loc_0x38

	.loc_0x20:
	  lwz       r12, 0x0(r3)
	  lwz       r0, 0x28(r6)
	  lwz       r12, 0xC8(r12)
	  rlwinm    r6,r0,0,24,31
	  mtctr     r12
	  bctrl

	.loc_0x38:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800557F8
 * Size:	000048
 */
void J2DPictureEx::append(const char*, JUTPalette*, float)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r6, 0x168(r3)
	  cmplwi    r6, 0
	  bne-      .loc_0x20
	  li        r3, 0
	  b         .loc_0x38

	.loc_0x20:
	  lwz       r12, 0x0(r3)
	  lwz       r0, 0x28(r6)
	  lwz       r12, 0xD0(r12)
	  rlwinm    r6,r0,0,24,31
	  mtctr     r12
	  bctrl

	.loc_0x38:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80055840
 * Size:	000048
 */
void J2DPictureEx::append(JUTTexture*, float)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r5, 0x168(r3)
	  cmplwi    r5, 0
	  bne-      .loc_0x20
	  li        r3, 0
	  b         .loc_0x38

	.loc_0x20:
	  lwz       r12, 0x0(r3)
	  lwz       r0, 0x28(r5)
	  lwz       r12, 0xD4(r12)
	  rlwinm    r5,r0,0,24,31
	  mtctr     r12
	  bctrl

	.loc_0x38:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80055888
 * Size:	0000B4
 */
void J2DPictureEx::insert(const ResTIMG*, JUTPalette*, unsigned char, float)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stfd      f31, 0x18(r1)
	  fmr       f31, f1
	  stw       r31, 0x14(r1)
	  mr        r31, r6
	  stw       r30, 0x10(r1)
	  mr        r30, r5
	  stw       r29, 0xC(r1)
	  mr.       r29, r4
	  stw       r28, 0x8(r1)
	  mr        r28, r3
	  bne-      .loc_0x40
	  li        r3, 0
	  b         .loc_0x90

	.loc_0x40:
	  mr        r4, r31
	  bl        0x4C0
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x58
	  li        r3, 0
	  b         .loc_0x90

	.loc_0x58:
	  fmr       f1, f31
	  mr        r3, r28
	  mr        r4, r31
	  bl        0x16C
	  lwz       r3, 0x168(r28)
	  mr        r5, r29
	  mr        r6, r30
	  rlwinm    r4,r31,0,24,31
	  lwz       r3, 0x70(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x7C(r12)
	  mtctr     r12
	  bctrl
	  li        r3, 0x1

	.loc_0x90:
	  lwz       r0, 0x24(r1)
	  lfd       f31, 0x18(r1)
	  lwz       r31, 0x14(r1)
	  lwz       r30, 0x10(r1)
	  lwz       r29, 0xC(r1)
	  lwz       r28, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8005593C
 * Size:	000078
 */
void J2DPictureEx::insert(const char*, JUTPalette*, unsigned char, float)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stfd      f31, 0x18(r1)
	  fmr       f31, f1
	  stw       r31, 0x14(r1)
	  mr        r31, r6
	  stw       r30, 0x10(r1)
	  mr        r30, r5
	  stw       r29, 0xC(r1)
	  mr        r29, r3
	  mr        r3, r4
	  bl        -0x14E90
	  lwz       r12, 0x0(r29)
	  mr        r4, r3
	  fmr       f1, f31
	  mr        r3, r29
	  lwz       r12, 0xC8(r12)
	  mr        r5, r30
	  mr        r6, r31
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x24(r1)
	  lfd       f31, 0x18(r1)
	  lwz       r31, 0x14(r1)
	  lwz       r30, 0x10(r1)
	  lwz       r29, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800559B4
 * Size:	0000A4
 */
void J2DPictureEx::insert(JUTTexture*, unsigned char, float)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stfd      f31, 0x18(r1)
	  fmr       f31, f1
	  stw       r31, 0x14(r1)
	  mr        r31, r5
	  stw       r30, 0x10(r1)
	  mr.       r30, r4
	  stw       r29, 0xC(r1)
	  mr        r29, r3
	  bne-      .loc_0x38
	  li        r3, 0
	  b         .loc_0x84

	.loc_0x38:
	  mr        r4, r31
	  bl        0x39C
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x50
	  li        r3, 0
	  b         .loc_0x84

	.loc_0x50:
	  fmr       f1, f31
	  mr        r3, r29
	  mr        r4, r31
	  bl        .loc_0xA4
	  lwz       r3, 0x168(r29)
	  mr        r5, r30
	  rlwinm    r4,r31,0,24,31
	  lwz       r3, 0x70(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x80(r12)
	  mtctr     r12
	  bctrl
	  li        r3, 0x1

	.loc_0x84:
	  lwz       r0, 0x24(r1)
	  lfd       f31, 0x18(r1)
	  lwz       r31, 0x14(r1)
	  lwz       r30, 0x10(r1)
	  lwz       r29, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr

	.loc_0xA4:
	*/
}

/*
 * --INFO--
 * Address:	80055A58
 * Size:	000334
 */
void J2DPictureEx::insertCommon(unsigned char, float)
{
	/*
	.loc_0x0:
	  stwu      r1, -0xA0(r1)
	  mflr      r0
	  stw       r0, 0xA4(r1)
	  stfd      f31, 0x90(r1)
	  psq_st    f31,0x98(r1),0,0
	  stmw      r25, 0x74(r1)
	  mr        r26, r3
	  fmr       f31, f1
	  lwz       r5, 0x168(r3)
	  mr        r27, r4
	  lwz       r3, 0x70(r5)
	  lwz       r0, 0x28(r5)
	  lwz       r12, 0x0(r3)
	  rlwinm    r29,r0,0,24,31
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x168(r26)
	  lwz       r3, 0x70(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x58(r12)
	  mtctr     r12
	  bctrl
	  cmplwi    r29, 0x1
	  bgt-      .loc_0x7C
	  rlwinm    r4,r3,0,24,31
	  subfic    r3, r4, 0x1
	  subi      r0, r4, 0x1
	  or        r0, r3, r0
	  rlwinm    r28,r0,1,31,31
	  b         .loc_0x94

	.loc_0x7C:
	  rlwinm    r4,r3,0,24,31
	  addi      r0, r29, 0x1
	  sub       r3, r0, r4
	  sub       r0, r4, r0
	  or        r0, r3, r0
	  rlwinm    r28,r0,1,31,31

	.loc_0x94:
	  fmr       f1, f31
	  mr        r3, r26
	  mr        r4, r27
	  li        r5, 0x1
	  li        r6, 0x1
	  bl        0x20D0
	  fmr       f1, f31
	  mr        r3, r26
	  mr        r4, r27
	  li        r5, 0
	  li        r6, 0x1
	  bl        0x20B8
	  addi      r30, r29, 0x1
	  rlwinm    r29,r27,0,24,31
	  rlwinm    r31,r30,0,24,31
	  lwz       r3, 0x168(r26)
	  subi      r10, r31, 0x1
	  li        r7, 0x1
	  mulli     r4, r10, 0x3
	  stw       r31, 0x28(r3)
	  cmpw      r10, r29
	  addi      r3, r10, 0x1
	  mr        r11, r10
	  li        r6, 0x4
	  addi      r8, r4, 0x1E
	  sub       r3, r3, r29
	  blt-      .loc_0x1E0
	  rlwinm.   r0,r3,31,1,31
	  mtctr     r0
	  beq-      .loc_0x198

	.loc_0x10C:
	  stb       r8, 0xE(r1)
	  rlwinm    r5,r11,2,22,29
	  lwz       r0, 0x168(r26)
	  subi      r8, r8, 0x3
	  stb       r7, 0xC(r1)
	  subi      r11, r11, 0x1
	  add       r9, r0, r5
	  stb       r6, 0xD(r1)
	  rlwinm    r5,r11,2,22,29
	  subi      r11, r11, 0x1
	  lwz       r0, 0xC(r1)
	  stw       r0, 0x8(r1)
	  lbz       r0, 0x8(r1)
	  lbz       r4, 0x9(r1)
	  stb       r0, 0x2C(r9)
	  lbz       r0, 0xA(r1)
	  stb       r4, 0x2D(r9)
	  stb       r0, 0x2E(r9)
	  stb       r8, 0xE(r1)
	  subi      r8, r8, 0x3
	  lwz       r0, 0x168(r26)
	  stb       r7, 0xC(r1)
	  add       r9, r0, r5
	  stb       r6, 0xD(r1)
	  lwz       r0, 0xC(r1)
	  stw       r0, 0x8(r1)
	  lbz       r0, 0x8(r1)
	  lbz       r4, 0x9(r1)
	  stb       r0, 0x2C(r9)
	  lbz       r0, 0xA(r1)
	  stb       r4, 0x2D(r9)
	  stb       r0, 0x2E(r9)
	  bdnz+     .loc_0x10C
	  andi.     r3, r3, 0x1
	  beq-      .loc_0x1E0

	.loc_0x198:
	  mtctr     r3

	.loc_0x19C:
	  stb       r8, 0xE(r1)
	  rlwinm    r5,r11,2,22,29
	  lwz       r0, 0x168(r26)
	  subi      r11, r11, 0x1
	  stb       r7, 0xC(r1)
	  subi      r8, r8, 0x3
	  add       r9, r0, r5
	  stb       r6, 0xD(r1)
	  lwz       r0, 0xC(r1)
	  stw       r0, 0x8(r1)
	  lbz       r0, 0x8(r1)
	  lbz       r4, 0x9(r1)
	  stb       r0, 0x2C(r9)
	  lbz       r0, 0xA(r1)
	  stb       r4, 0x2D(r9)
	  stb       r0, 0x2E(r9)
	  bdnz+     .loc_0x19C

	.loc_0x1E0:
	  mr        r25, r10
	  b         .loc_0x20C

	.loc_0x1E8:
	  subi      r0, r25, 0x1
	  lwz       r3, 0x168(r26)
	  rlwinm    r5,r0,2,22,29
	  rlwinm    r4,r25,0,24,31
	  addi      r3, r3, 0x28
	  addi      r0, r5, 0x24
	  lwzx      r5, r3, r0
	  bl        -0xBD68
	  subi      r25, r25, 0x1

	.loc_0x20C:
	  cmpw      r25, r29
	  bgt+      .loc_0x1E8
	  lis       r3, 0x8048
	  rlwinm    r4,r27,0,24,31
	  subi      r6, r3, 0x7998
	  addi      r5, r1, 0x10
	  lfs       f7, 0x4(r6)
	  lfs       f6, 0x8(r6)
	  lfs       f5, 0xC(r6)
	  lbz       r3, 0x0(r6)
	  lbz       r0, 0x1(r6)
	  lfs       f4, 0x10(r6)
	  lfs       f3, 0x14(r6)
	  lfs       f2, 0x18(r6)
	  lfs       f1, 0x1C(r6)
	  lfs       f0, 0x20(r6)
	  stfs      f7, 0x14(r1)
	  stfs      f6, 0x18(r1)
	  stfs      f5, 0x1C(r1)
	  stb       r3, 0x10(r1)
	  stb       r0, 0x11(r1)
	  stfs      f4, 0x20(r1)
	  stfs      f3, 0x24(r1)
	  stfs      f2, 0x28(r1)
	  stfs      f1, 0x2C(r1)
	  stfs      f0, 0x30(r1)
	  lwz       r3, 0x168(r26)
	  addi      r3, r3, 0x28
	  bl        -0xBDE0
	  rlwinm    r0,r30,0,24,31
	  cmplwi    r0, 0x1
	  bne-      .loc_0x294
	  li        r27, 0x1
	  b         .loc_0x2B0

	.loc_0x294:
	  rlwinm    r3,r28,0,24,31
	  neg       r0, r3
	  or        r0, r0, r3
	  rlwinm    r3,r0,1,31,31
	  addi      r0, r3, 0x1
	  add       r0, r31, r0
	  rlwinm    r27,r0,0,24,31

	.loc_0x2B0:
	  lwz       r3, 0x168(r26)
	  mr        r4, r27
	  lwz       r3, 0x70(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x54(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r26
	  mr        r5, r27
	  mr        r6, r28
	  rlwinm    r4,r30,0,24,31
	  bl        0x10E0
	  mr        r3, r26
	  mr        r5, r27
	  mr        r6, r28
	  rlwinm    r4,r30,0,24,31
	  bl        0x12C8
	  mr        r3, r26
	  rlwinm    r4,r30,0,24,31
	  bl        0x1878
	  mr        r3, r26
	  rlwinm    r4,r30,0,24,31
	  bl        0x1D10
	  mr        r3, r26
	  rlwinm    r4,r30,0,24,31
	  bl        0x1DB4
	  psq_l     f31,0x98(r1),0,0
	  lfd       f31, 0x90(r1)
	  lmw       r25, 0x74(r1)
	  lwz       r0, 0xA4(r1)
	  mtlr      r0
	  addi      r1, r1, 0xA0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80055D8C
 * Size:	0000F8
 */
void J2DPictureEx::isInsert(unsigned char) const
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lwz       r5, 0x168(r3)
	  stw       r0, 0x24(r1)
	  cmplwi    r5, 0
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  bne-      .loc_0x30
	  li        r3, 0
	  b         .loc_0xDC

	.loc_0x30:
	  lwz       r3, 0x70(r5)
	  cmplwi    r3, 0
	  bne-      .loc_0x44
	  li        r3, 0
	  b         .loc_0xDC

	.loc_0x44:
	  lwz       r0, 0x28(r5)
	  rlwinm    r30,r0,0,24,31
	  cmplwi    r30, 0x8
	  bge-      .loc_0x68
	  rlwinm    r0,r4,0,24,31
	  cmplwi    r0, 0x8
	  bge-      .loc_0x68
	  cmplw     r0, r30
	  ble-      .loc_0x70

	.loc_0x68:
	  li        r3, 0
	  b         .loc_0xDC

	.loc_0x70:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  mr        r31, r3
	  rlwinm    r0,r3,0,24,31
	  cmplwi    r0, 0x2
	  bgt-      .loc_0xA0
	  cmplwi    r30, 0
	  beq-      .loc_0xA0
	  li        r3, 0
	  b         .loc_0xDC

	.loc_0xA0:
	  lwz       r3, 0x168(r29)
	  lwz       r3, 0x70(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x58(r12)
	  mtctr     r12
	  bctrl
	  rlwinm    r4,r31,0,24,31
	  rlwinm    r0,r3,0,24,31
	  cmplw     r4, r0
	  bne-      .loc_0xD8
	  cmplwi    r30, 0
	  beq-      .loc_0xD8
	  li        r3, 0
	  b         .loc_0xDC

	.loc_0xD8:
	  li        r3, 0x1

	.loc_0xDC:
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
 * Address:	80055E84
 * Size:	0001AC
 */
void J2DPictureEx::remove(unsigned char)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  stw       r28, 0x10(r1)
	  mr        r28, r4
	  bl        0x2B4
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x38
	  li        r3, 0
	  b         .loc_0x18C

	.loc_0x38:
	  lwz       r4, 0x168(r29)
	  lwz       r3, 0x70(r4)
	  lwz       r0, 0x28(r4)
	  lwz       r12, 0x0(r3)
	  rlwinm    r30,r0,0,24,31
	  lwz       r12, 0x58(r12)
	  mtctr     r12
	  bctrl
	  rlwinm    r3,r3,0,24,31
	  addi      r0, r30, 0x1
	  sub       r4, r0, r3
	  lfs       f1, -0x7A7C(r2)
	  sub       r0, r3, r0
	  mr        r3, r29
	  or        r0, r4, r0
	  mr        r4, r28
	  rlwinm    r31,r0,1,31,31
	  li        r5, 0x1
	  li        r6, 0
	  bl        0x1CC8
	  lfs       f1, -0x7A7C(r2)
	  mr        r3, r29
	  mr        r4, r28
	  li        r5, 0
	  li        r6, 0
	  bl        0x1CB0
	  subi      r0, r30, 0x1
	  lwz       r3, 0x168(r29)
	  rlwinm    r0,r0,0,24,31
	  rlwinm    r4,r28,0,24,31
	  stw       r0, 0x28(r3)
	  lwz       r3, 0x168(r29)
	  lwz       r3, 0x70(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8C(r12)
	  mtctr     r12
	  bctrl
	  subi      r0, r30, 0x1
	  rlwinm    r4,r0,0,24,31
	  cmplwi    r4, 0x1
	  beq-      .loc_0xF8
	  neg       r0, r31
	  or        r0, r0, r31
	  rlwinm    r3,r0,1,31,31
	  addi      r0, r3, 0x1
	  add       r0, r4, r0
	  rlwinm    r28,r0,0,24,31
	  b         .loc_0x10C

	.loc_0xF8:
	  neg       r0, r31
	  or        r0, r0, r31
	  rlwinm    r3,r0,1,31,31
	  addi      r0, r3, 0x1
	  rlwinm    r28,r0,0,24,31

	.loc_0x10C:
	  lwz       r3, 0x168(r29)
	  mr        r4, r28
	  lwz       r3, 0x70(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x54(r12)
	  mtctr     r12
	  bctrl
	  subi      r0, r30, 0x1
	  mr        r3, r29
	  mr        r5, r28
	  mr        r6, r31
	  rlwinm    r4,r0,0,24,31
	  bl        0xE54
	  subi      r0, r30, 0x1
	  mr        r3, r29
	  mr        r5, r28
	  mr        r6, r31
	  rlwinm    r4,r0,0,24,31
	  bl        0x1038
	  subi      r0, r30, 0x1
	  mr        r3, r29
	  rlwinm    r4,r0,0,24,31
	  bl        0x15E4
	  subi      r0, r30, 0x1
	  mr        r3, r29
	  rlwinm    r4,r0,0,24,31
	  bl        0x1A78
	  subi      r0, r30, 0x1
	  mr        r3, r29
	  rlwinm    r4,r0,0,24,31
	  bl        0x1B18
	  li        r3, 0x1

	.loc_0x18C:
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
 * Address:	80056030
 * Size:	000064
 */
void J2DPictureEx::remove()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r4, 0x168(r3)
	  cmplwi    r4, 0
	  bne-      .loc_0x20
	  li        r3, 0
	  b         .loc_0x54

	.loc_0x20:
	  lwz       r0, 0x70(r4)
	  cmplwi    r0, 0
	  bne-      .loc_0x34
	  li        r3, 0
	  b         .loc_0x54

	.loc_0x34:
	  lwz       r0, 0x28(r4)
	  lwz       r12, 0x0(r3)
	  rlwinm    r4,r0,0,24,31
	  subi      r0, r4, 0x1
	  lwz       r12, 0xD8(r12)
	  rlwinm    r4,r0,0,24,31
	  mtctr     r12
	  bctrl

	.loc_0x54:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80056094
 * Size:	0000C8
 */
void J2DPictureEx::remove(JUTTexture*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  mr        r29, r4
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  lwz       r3, 0x168(r3)
	  cmplwi    r3, 0
	  bne-      .loc_0x38
	  li        r3, 0
	  b         .loc_0xA8

	.loc_0x38:
	  lwz       r0, 0x70(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x4C
	  li        r3, 0
	  b         .loc_0xA8

	.loc_0x4C:
	  lwz       r0, 0x28(r3)
	  li        r30, 0
	  rlwinm    r31,r0,0,24,31
	  b         .loc_0x84

	.loc_0x5C:
	  lwz       r3, 0x168(r28)
	  rlwinm    r4,r30,0,24,31
	  lwz       r3, 0x70(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xA0(r12)
	  mtctr     r12
	  bctrl
	  cmplw     r3, r29
	  beq-      .loc_0x90
	  addi      r30, r30, 0x1

	.loc_0x84:
	  rlwinm    r0,r30,0,24,31
	  cmplw     r0, r31
	  blt+      .loc_0x5C

	.loc_0x90:
	  mr        r3, r28
	  mr        r4, r30
	  lwz       r12, 0x0(r28)
	  lwz       r12, 0xD8(r12)
	  mtctr     r12
	  bctrl

	.loc_0xA8:
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
 * Address:	8005615C
 * Size:	000054
 */
void J2DPictureEx::isRemove(unsigned char) const
{
	/*
	.loc_0x0:
	  lwz       r3, 0x168(r3)
	  cmplwi    r3, 0
	  bne-      .loc_0x14
	  li        r3, 0
	  blr

	.loc_0x14:
	  lwz       r0, 0x70(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x28
	  li        r3, 0
	  blr

	.loc_0x28:
	  lwz       r3, 0x28(r3)
	  rlwinm    r0,r4,0,24,31
	  rlwinm    r3,r3,0,24,31
	  cmplw     r3, r0
	  ble-      .loc_0x44
	  cmplwi    r3, 0x1
	  bne-      .loc_0x4C

	.loc_0x44:
	  li        r3, 0
	  blr

	.loc_0x4C:
	  li        r3, 0x1
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800561B0
 * Size:	000124
 */
void J2DPictureEx::draw(float, float, unsigned char, bool, bool, bool)
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
	  stw       r31, 0x2C(r1)
	  stw       r30, 0x28(r1)
	  stw       r29, 0x24(r1)
	  stw       r28, 0x20(r1)
	  mr        r28, r3
	  fmr       f30, f1
	  lwz       r8, 0x168(r3)
	  fmr       f31, f2
	  mr        r29, r5
	  mr        r30, r6
	  cmplwi    r8, 0
	  mr        r31, r7
	  beq-      .loc_0xF4
	  lwz       r3, 0x70(r8)
	  cmplwi    r3, 0
	  beq-      .loc_0xF4
	  lbz       r0, 0xB0(r28)
	  cmplwi    r0, 0
	  beq-      .loc_0xF4
	  lwz       r0, 0x28(r8)
	  rlwinm    r4,r4,0,24,31
	  cmplw     r4, r0
	  bge-      .loc_0xF4
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xA0(r12)
	  mtctr     r12
	  bctrl
	  cmplwi    r3, 0
	  beq-      .loc_0xF4
	  lwz       r5, 0x20(r3)
	  lis       r7, 0x4330
	  mr        r3, r28
	  stw       r7, 0x8(r1)
	  lhz       r4, 0x2(r5)
	  fmr       f1, f30
	  lhz       r0, 0x4(r5)
	  fmr       f2, f31
	  xoris     r4, r4, 0x8000
	  lwz       r12, 0x0(r28)
	  xoris     r0, r0, 0x8000
	  stw       r4, 0xC(r1)
	  mr        r4, r29
	  lfd       f4, -0x7A78(r2)
	  mr        r5, r30
	  lfd       f0, 0x8(r1)
	  mr        r6, r31
	  stw       r0, 0x14(r1)
	  lwz       r12, 0xEC(r12)
	  fsubs     f3, f0, f4
	  stw       r7, 0x10(r1)
	  lfd       f0, 0x10(r1)
	  fsubs     f4, f0, f4
	  mtctr     r12
	  bctrl

	.loc_0xF4:
	  psq_l     f31,0x48(r1),0,0
	  lfd       f31, 0x40(r1)
	  psq_l     f30,0x38(r1),0,0
	  lfd       f30, 0x30(r1)
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  lwz       r29, 0x24(r1)
	  lwz       r0, 0x54(r1)
	  lwz       r28, 0x20(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800562D4
 * Size:	0005A8
 */
void J2DPictureEx::draw(float, float, float, float, bool, bool, bool)
{
	/*
	.loc_0x0:
	  stwu      r1, -0xB0(r1)
	  mflr      r0
	  stw       r0, 0xB4(r1)
	  stfd      f31, 0xA0(r1)
	  psq_st    f31,0xA8(r1),0,0
	  stfd      f30, 0x90(r1)
	  psq_st    f30,0x98(r1),0,0
	  stfd      f29, 0x80(r1)
	  psq_st    f29,0x88(r1),0,0
	  stfd      f28, 0x70(r1)
	  psq_st    f28,0x78(r1),0,0
	  stmw      r23, 0x4C(r1)
	  mr        r28, r3
	  fmr       f28, f1
	  lbz       r0, 0xB0(r3)
	  fmr       f29, f2
	  fmr       f30, f3
	  mr        r29, r4
	  fmr       f31, f4
	  cmplwi    r0, 0
	  mr        r30, r5
	  mr        r31, r6
	  beq-      .loc_0x574
	  lwz       r3, 0x168(r28)
	  cmplwi    r3, 0
	  beq-      .loc_0x574
	  lwz       r0, 0x70(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x574
	  lwz       r0, 0x28(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x574
	  bl        -0x410C
	  mr        r3, r28
	  lfs       f3, -0x7A7C(r2)
	  lwz       r12, 0x0(r28)
	  fmr       f1, f28
	  fmr       f2, f29
	  lwz       r12, 0x48(r12)
	  fmr       f4, f3
	  mtctr     r12
	  bctrl
	  addi      r3, r28, 0x50
	  li        r4, 0
	  bl        0x931F4
	  li        r3, 0
	  bl        0x9328C
	  lwz       r3, 0x168(r28)
	  lbz       r0, 0xE(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x574
	  bl        0x8E330
	  li        r3, 0x9
	  li        r4, 0x1
	  bl        0x8DED8
	  li        r3, 0xB
	  li        r4, 0x1
	  bl        0x8DECC
	  li        r3, 0xD
	  li        r4, 0x1
	  bl        0x8DEC0
	  lbz       r3, 0xB2(r28)
	  li        r0, -0x1
	  stw       r0, 0x8(r1)
	  stb       r3, 0xB3(r28)
	  lwz       r3, 0x168(r28)
	  lbz       r23, 0x150(r28)
	  lbz       r3, 0xF(r3)
	  lbz       r24, 0x151(r28)
	  lbz       r25, 0x152(r28)
	  cmpwi     r3, 0x1
	  lbz       r26, 0x153(r28)
	  stw       r0, 0xC(r1)
	  lbz       r27, 0x154(r28)
	  lbz       r12, 0x155(r28)
	  lbz       r11, 0x156(r28)
	  lbz       r10, 0x157(r28)
	  stw       r0, 0x10(r1)
	  lbz       r9, 0x158(r28)
	  lbz       r8, 0x159(r28)
	  lbz       r5, 0x15A(r28)
	  lbz       r7, 0x15B(r28)
	  stw       r0, 0x14(r1)
	  lbz       r4, 0x15C(r28)
	  lbz       r3, 0x15D(r28)
	  lbz       r0, 0x15E(r28)
	  lbz       r6, 0x15F(r28)
	  stb       r23, 0x8(r1)
	  stb       r24, 0x9(r1)
	  stb       r25, 0xA(r1)
	  stb       r26, 0xB(r1)
	  stb       r27, 0xC(r1)
	  stb       r12, 0xD(r1)
	  stb       r11, 0xE(r1)
	  stb       r10, 0xF(r1)
	  stb       r9, 0x10(r1)
	  stb       r8, 0x11(r1)
	  stb       r5, 0x12(r1)
	  stb       r7, 0x13(r1)
	  stb       r4, 0x14(r1)
	  stb       r3, 0x15(r1)
	  stb       r0, 0x16(r1)
	  stb       r6, 0x17(r1)
	  bne-      .loc_0x21C
	  lbz       r0, 0xB3(r28)
	  lis       r3, 0x8081
	  subi      r9, r3, 0x7F7F
	  mullw     r5, r0, r26
	  mullw     r4, r0, r7
	  mullw     r3, r0, r10
	  mulhw     r7, r9, r5
	  mullw     r0, r0, r6
	  add       r5, r7, r5
	  srawi     r7, r5, 0x7
	  mulhw     r6, r9, r3
	  rlwinm    r8,r7,1,31,31
	  add       r7, r7, r8
	  stb       r7, 0xB(r1)
	  mulhw     r5, r9, r4
	  add       r3, r6, r3
	  srawi     r6, r3, 0x7
	  add       r4, r5, r4
	  mulhw     r3, r9, r0
	  rlwinm    r5,r6,1,31,31
	  srawi     r4, r4, 0x7
	  add       r6, r6, r5
	  rlwinm    r5,r4,1,31,31
	  stb       r6, 0xF(r1)
	  add       r0, r3, r0
	  add       r4, r4, r5
	  srawi     r0, r0, 0x7
	  stb       r4, 0x13(r1)
	  rlwinm    r3,r0,1,31,31
	  add       r0, r0, r3
	  stb       r0, 0x17(r1)

	.loc_0x21C:
	  li        r3, 0
	  li        r4, 0x9
	  li        r5, 0x1
	  li        r6, 0x4
	  li        r7, 0
	  bl        0x8E204
	  li        r3, 0x80
	  li        r4, 0
	  li        r5, 0x4
	  bl        0x8F474
	  lfs       f0, -0x7A7C(r2)
	  lis       r6, 0xCC01
	  lwz       r3, 0x8(r1)
	  rlwinm.   r0,r31,0,24,31
	  stfs      f0, -0x8000(r6)
	  stfs      f0, -0x8000(r6)
	  stfs      f0, -0x8000(r6)
	  stw       r3, -0x8000(r6)
	  bne-      .loc_0x2A4
	  rlwinm    r5,r29,0,24,31
	  lis       r4, 0x1
	  neg       r0, r5
	  rlwinm    r3,r30,0,24,31
	  or        r5, r0, r5
	  subi      r4, r4, 0x8000
	  neg       r0, r3
	  srawi     r5, r5, 0x1F
	  and       r5, r4, r5
	  or        r0, r0, r3
	  srawi     r0, r0, 0x1F
	  sth       r5, -0x8000(r6)
	  and       r0, r4, r0
	  sth       r0, -0x8000(r6)
	  b         .loc_0x2DC

	.loc_0x2A4:
	  rlwinm    r5,r29,0,24,31
	  lis       r4, 0x1
	  neg       r0, r5
	  rlwinm    r3,r30,0,24,31
	  or        r5, r0, r5
	  subi      r4, r4, 0x8000
	  neg       r0, r3
	  srawi     r5, r5, 0x1F
	  and       r5, r4, r5
	  or        r0, r0, r3
	  srawi     r0, r0, 0x1F
	  sth       r5, -0x8000(r6)
	  andc      r0, r4, r0
	  sth       r0, -0x8000(r6)

	.loc_0x2DC:
	  lis       r6, 0xCC01
	  rlwinm.   r0,r31,0,24,31
	  stfs      f30, -0x8000(r6)
	  lfs       f0, -0x7A7C(r2)
	  lwz       r0, 0xC(r1)
	  stfs      f0, -0x8000(r6)
	  stfs      f0, -0x8000(r6)
	  stw       r0, -0x8000(r6)
	  bne-      .loc_0x33C
	  rlwinm    r5,r29,0,24,31
	  lis       r4, 0x1
	  neg       r0, r5
	  rlwinm    r3,r30,0,24,31
	  or        r5, r0, r5
	  subi      r4, r4, 0x8000
	  neg       r0, r3
	  srawi     r5, r5, 0x1F
	  andc      r5, r4, r5
	  or        r0, r0, r3
	  srawi     r0, r0, 0x1F
	  sth       r5, -0x8000(r6)
	  and       r0, r4, r0
	  sth       r0, -0x8000(r6)
	  b         .loc_0x374

	.loc_0x33C:
	  rlwinm    r5,r29,0,24,31
	  lis       r4, 0x1
	  neg       r0, r5
	  rlwinm    r3,r30,0,24,31
	  or        r5, r0, r5
	  subi      r4, r4, 0x8000
	  neg       r0, r3
	  srawi     r5, r5, 0x1F
	  and       r5, r4, r5
	  or        r0, r0, r3
	  srawi     r0, r0, 0x1F
	  sth       r5, -0x8000(r6)
	  and       r0, r4, r0
	  sth       r0, -0x8000(r6)

	.loc_0x374:
	  lis       r6, 0xCC01
	  rlwinm.   r0,r31,0,24,31
	  stfs      f30, -0x8000(r6)
	  lfs       f0, -0x7A7C(r2)
	  stfs      f31, -0x8000(r6)
	  lwz       r0, 0x14(r1)
	  stfs      f0, -0x8000(r6)
	  stw       r0, -0x8000(r6)
	  bne-      .loc_0x3D4
	  rlwinm    r5,r29,0,24,31
	  lis       r4, 0x1
	  neg       r0, r5
	  rlwinm    r3,r30,0,24,31
	  or        r5, r0, r5
	  subi      r4, r4, 0x8000
	  neg       r0, r3
	  srawi     r5, r5, 0x1F
	  andc      r5, r4, r5
	  or        r0, r0, r3
	  srawi     r0, r0, 0x1F
	  sth       r5, -0x8000(r6)
	  andc      r0, r4, r0
	  sth       r0, -0x8000(r6)
	  b         .loc_0x40C

	.loc_0x3D4:
	  rlwinm    r5,r29,0,24,31
	  lis       r4, 0x1
	  neg       r0, r5
	  rlwinm    r3,r30,0,24,31
	  or        r5, r0, r5
	  subi      r4, r4, 0x8000
	  neg       r0, r3
	  srawi     r5, r5, 0x1F
	  andc      r5, r4, r5
	  or        r0, r0, r3
	  srawi     r0, r0, 0x1F
	  sth       r5, -0x8000(r6)
	  and       r0, r4, r0
	  sth       r0, -0x8000(r6)

	.loc_0x40C:
	  lfs       f0, -0x7A7C(r2)
	  lis       r6, 0xCC01
	  lwz       r3, 0x10(r1)
	  rlwinm.   r0,r31,0,24,31
	  stfs      f0, -0x8000(r6)
	  stfs      f31, -0x8000(r6)
	  stfs      f0, -0x8000(r6)
	  stw       r3, -0x8000(r6)
	  bne-      .loc_0x46C
	  rlwinm    r5,r29,0,24,31
	  lis       r4, 0x1
	  neg       r0, r5
	  rlwinm    r3,r30,0,24,31
	  or        r5, r0, r5
	  subi      r4, r4, 0x8000
	  neg       r0, r3
	  srawi     r5, r5, 0x1F
	  and       r5, r4, r5
	  or        r0, r0, r3
	  srawi     r0, r0, 0x1F
	  sth       r5, -0x8000(r6)
	  andc      r0, r4, r0
	  sth       r0, -0x8000(r6)
	  b         .loc_0x4A4

	.loc_0x46C:
	  rlwinm    r5,r29,0,24,31
	  lis       r4, 0x1
	  neg       r0, r5
	  rlwinm    r3,r30,0,24,31
	  or        r5, r0, r5
	  subi      r4, r4, 0x8000
	  neg       r0, r3
	  srawi     r5, r5, 0x1F
	  andc      r5, r4, r5
	  or        r0, r0, r3
	  srawi     r0, r0, 0x1F
	  sth       r5, -0x8000(r6)
	  andc      r0, r4, r0
	  sth       r0, -0x8000(r6)

	.loc_0x4A4:
	  li        r3, 0
	  li        r4, 0x9
	  li        r5, 0x1
	  li        r6, 0x3
	  li        r7, 0
	  bl        0x8DF7C
	  li        r3, 0
	  bl        0x8E808
	  li        r3, 0x1
	  bl        0x9241C
	  li        r3, 0
	  li        r4, 0x4
	  bl        0x91CD4
	  li        r3, 0
	  li        r4, 0xFF
	  li        r5, 0xFF
	  li        r6, 0x4
	  bl        0x92260
	  li        r23, 0

	.loc_0x4F0:
	  mr        r3, r23
	  li        r4, 0
	  li        r5, 0x1
	  li        r6, 0x2
	  li        r7, 0x3
	  bl        0x920F4
	  addi      r23, r23, 0x1
	  cmpwi     r23, 0x4
	  blt+      .loc_0x4F0
	  li        r3, 0
	  bl        0x91B68
	  li        r23, 0

	.loc_0x520:
	  mr        r3, r23
	  bl        0x91B80
	  addi      r23, r23, 0x1
	  cmpwi     r23, 0x10
	  blt+      .loc_0x520
	  addi      r3, r1, 0x18
	  bl        0x93A94
	  addi      r3, r1, 0x18
	  li        r4, 0
	  bl        0x92D60
	  li        r3, 0x4
	  li        r4, 0
	  li        r5, 0
	  li        r6, 0x1
	  li        r7, 0
	  li        r8, 0
	  li        r9, 0x2
	  bl        0x90668
	  li        r3, 0xD
	  li        r4, 0
	  bl        0x8DA40

	.loc_0x574:
	  psq_l     f31,0xA8(r1),0,0
	  lfd       f31, 0xA0(r1)
	  psq_l     f30,0x98(r1),0,0
	  lfd       f30, 0x90(r1)
	  psq_l     f29,0x88(r1),0,0
	  lfd       f29, 0x80(r1)
	  psq_l     f28,0x78(r1),0,0
	  lfd       f28, 0x70(r1)
	  lmw       r23, 0x4C(r1)
	  lwz       r0, 0xB4(r1)
	  mtlr      r0
	  addi      r1, r1, 0xB0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8005687C
 * Size:	000168
 */
void J2DPictureEx::drawOut(float, float, float, float, float, float)
{
	/*
	.loc_0x0:
	  stwu      r1, -0xA0(r1)
	  mflr      r0
	  stw       r0, 0xA4(r1)
	  stfd      f31, 0x90(r1)
	  psq_st    f31,0x98(r1),0,0
	  stfd      f30, 0x80(r1)
	  psq_st    f30,0x88(r1),0,0
	  stfd      f29, 0x70(r1)
	  psq_st    f29,0x78(r1),0,0
	  stfd      f28, 0x60(r1)
	  psq_st    f28,0x68(r1),0,0
	  stfd      f27, 0x50(r1)
	  psq_st    f27,0x58(r1),0,0
	  stfd      f26, 0x40(r1)
	  psq_st    f26,0x48(r1),0,0
	  stw       r31, 0x3C(r1)
	  mr        r31, r3
	  fmr       f26, f1
	  lwz       r3, 0x168(r3)
	  fmr       f27, f2
	  fmr       f28, f3
	  fmr       f29, f4
	  cmplwi    r3, 0
	  fmr       f30, f5
	  fmr       f31, f6
	  beq-      .loc_0x124
	  lwz       r3, 0x70(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x124
	  lbz       r0, 0xB0(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x124
	  lwz       r12, 0x0(r3)
	  li        r4, 0
	  lwz       r12, 0xA0(r12)
	  mtctr     r12
	  bctrl
	  cmplwi    r3, 0
	  beq-      .loc_0x124
	  lwz       r3, 0x20(r3)
	  lis       r6, 0x4330
	  stw       r6, 0x28(r1)
	  fadds     f1, f26, f28
	  lhz       r4, 0x4(r3)
	  fadds     f0, f27, f29
	  lhz       r0, 0x2(r3)
	  mr        r3, r31
	  xoris     r4, r4, 0x8000
	  xoris     r0, r0, 0x8000
	  stw       r4, 0x2C(r1)
	  lfd       f4, -0x7A78(r2)
	  addi      r4, r1, 0x18
	  lfd       f2, 0x28(r1)
	  addi      r5, r1, 0x8
	  stw       r0, 0x34(r1)
	  fsubs     f3, f2, f4
	  stw       r6, 0x30(r1)
	  lfd       f2, 0x30(r1)
	  fadds     f3, f31, f3
	  stfs      f30, 0x8(r1)
	  fsubs     f2, f2, f4
	  stfs      f31, 0xC(r1)
	  fadds     f2, f30, f2
	  stfs      f3, 0x14(r1)
	  stfs      f26, 0x18(r1)
	  stfs      f2, 0x10(r1)
	  stfs      f27, 0x1C(r1)
	  stfs      f1, 0x20(r1)
	  stfs      f0, 0x24(r1)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xF8(r12)
	  mtctr     r12
	  bctrl

	.loc_0x124:
	  psq_l     f31,0x98(r1),0,0
	  lfd       f31, 0x90(r1)
	  psq_l     f30,0x88(r1),0,0
	  lfd       f30, 0x80(r1)
	  psq_l     f29,0x78(r1),0,0
	  lfd       f29, 0x70(r1)
	  psq_l     f28,0x68(r1),0,0
	  lfd       f28, 0x60(r1)
	  psq_l     f27,0x58(r1),0,0
	  lfd       f27, 0x50(r1)
	  psq_l     f26,0x48(r1),0,0
	  lfd       f26, 0x40(r1)
	  lwz       r0, 0xA4(r1)
	  lwz       r31, 0x3C(r1)
	  mtlr      r0
	  addi      r1, r1, 0xA0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800569E4
 * Size:	0003E8
 */
void J2DPictureEx::drawOut(const JGeometry::TBox2<float>&,
                           const JGeometry::TBox2<float>&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x80(r1)
	  mflr      r0
	  stw       r0, 0x84(r1)
	  stfd      f31, 0x70(r1)
	  psq_st    f31,0x78(r1),0,0
	  stfd      f30, 0x60(r1)
	  psq_st    f30,0x68(r1),0,0
	  stfd      f29, 0x50(r1)
	  psq_st    f29,0x58(r1),0,0
	  stfd      f28, 0x40(r1)
	  psq_st    f28,0x48(r1),0,0
	  stmw      r24, 0x20(r1)
	  mr        r29, r3
	  mr        r30, r4
	  lwz       r3, 0x168(r3)
	  mr        r31, r5
	  cmplwi    r3, 0
	  beq-      .loc_0x3B4
	  lwz       r0, 0x70(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x3B4
	  lbz       r0, 0xB0(r29)
	  cmplwi    r0, 0
	  beq-      .loc_0x3B4
	  bl        -0x47FC
	  bl        0x8DC88
	  li        r3, 0x9
	  li        r4, 0x1
	  bl        0x8D830
	  li        r3, 0xB
	  li        r4, 0x1
	  bl        0x8D824
	  li        r3, 0xD
	  li        r4, 0x1
	  bl        0x8D818
	  lwz       r3, 0x168(r29)
	  lbz       r0, 0xE(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x3B4
	  lbz       r3, 0xB2(r29)
	  li        r0, -0x1
	  stw       r0, 0x8(r1)
	  stb       r3, 0xB3(r29)
	  lwz       r3, 0x168(r29)
	  lbz       r24, 0x150(r29)
	  lbz       r3, 0xF(r3)
	  lbz       r25, 0x151(r29)
	  lbz       r26, 0x152(r29)
	  cmpwi     r3, 0x1
	  lbz       r27, 0x153(r29)
	  stw       r0, 0xC(r1)
	  lbz       r28, 0x154(r29)
	  lbz       r12, 0x155(r29)
	  lbz       r11, 0x156(r29)
	  lbz       r10, 0x157(r29)
	  stw       r0, 0x10(r1)
	  lbz       r9, 0x158(r29)
	  lbz       r8, 0x159(r29)
	  lbz       r5, 0x15A(r29)
	  lbz       r7, 0x15B(r29)
	  stw       r0, 0x14(r1)
	  lbz       r4, 0x15C(r29)
	  lbz       r3, 0x15D(r29)
	  lbz       r0, 0x15E(r29)
	  lbz       r6, 0x15F(r29)
	  stb       r24, 0x8(r1)
	  stb       r25, 0x9(r1)
	  stb       r26, 0xA(r1)
	  stb       r27, 0xB(r1)
	  stb       r28, 0xC(r1)
	  stb       r12, 0xD(r1)
	  stb       r11, 0xE(r1)
	  stb       r10, 0xF(r1)
	  stb       r9, 0x10(r1)
	  stb       r8, 0x11(r1)
	  stb       r5, 0x12(r1)
	  stb       r7, 0x13(r1)
	  stb       r4, 0x14(r1)
	  stb       r3, 0x15(r1)
	  stb       r0, 0x16(r1)
	  stb       r6, 0x17(r1)
	  bne-      .loc_0x1C4
	  lbz       r0, 0xB3(r29)
	  lis       r3, 0x8081
	  subi      r9, r3, 0x7F7F
	  mullw     r5, r0, r27
	  mullw     r4, r0, r7
	  mullw     r3, r0, r10
	  mulhw     r7, r9, r5
	  mullw     r0, r0, r6
	  add       r5, r7, r5
	  srawi     r7, r5, 0x7
	  mulhw     r6, r9, r3
	  rlwinm    r8,r7,1,31,31
	  add       r7, r7, r8
	  stb       r7, 0xB(r1)
	  mulhw     r5, r9, r4
	  add       r3, r6, r3
	  srawi     r6, r3, 0x7
	  add       r4, r5, r4
	  mulhw     r3, r9, r0
	  rlwinm    r5,r6,1,31,31
	  srawi     r4, r4, 0x7
	  add       r6, r6, r5
	  rlwinm    r5,r4,1,31,31
	  stb       r6, 0xF(r1)
	  add       r0, r3, r0
	  add       r4, r4, r5
	  srawi     r0, r0, 0x7
	  stb       r4, 0x13(r1)
	  rlwinm    r3,r0,1,31,31
	  add       r0, r0, r3
	  stb       r0, 0x17(r1)

	.loc_0x1C4:
	  lfs       f3, 0x0(r31)
	  li        r3, 0
	  lfs       f2, 0x8(r31)
	  li        r4, 0xD
	  lfs       f0, 0x8(r30)
	  li        r5, 0x1
	  lfs       f1, 0x0(r30)
	  fsubs     f5, f2, f3
	  fsubs     f2, f0, f2
	  lfs       f6, 0x4(r31)
	  lfs       f8, 0xC(r31)
	  fsubs     f4, f1, f3
	  lfs       f0, 0xC(r30)
	  lfs       f1, 0x4(r30)
	  fsubs     f7, f8, f6
	  lfs       f3, -0x7A80(r2)
	  fsubs     f0, f0, f8
	  li        r6, 0x4
	  fdivs     f2, f2, f5
	  li        r7, 0
	  fsubs     f1, f1, f6
	  fdivs     f0, f0, f7
	  fdivs     f31, f4, f5
	  fdivs     f29, f1, f7
	  fadds     f30, f3, f2
	  fadds     f28, f3, f0
	  bl        0x8DAF8
	  li        r3, 0
	  li        r4, 0x9
	  li        r5, 0x1
	  li        r6, 0x4
	  li        r7, 0
	  bl        0x8DAE0
	  li        r3, 0x80
	  li        r4, 0
	  li        r5, 0x4
	  bl        0x8ED50
	  lfs       f2, 0x0(r30)
	  lis       r10, 0xCC01
	  lfs       f3, 0x4(r30)
	  li        r3, 0
	  stfs      f2, -0x8000(r10)
	  li        r4, 0x9
	  lfs       f1, -0x7A7C(r2)
	  li        r5, 0x1
	  stfs      f3, -0x8000(r10)
	  li        r6, 0x3
	  lwz       r0, 0x8(r1)
	  li        r7, 0
	  stfs      f1, -0x8000(r10)
	  lfs       f0, 0x8(r30)
	  stw       r0, -0x8000(r10)
	  lwz       r9, 0xC(r1)
	  stfs      f31, -0x8000(r10)
	  lfs       f4, 0xC(r30)
	  stfs      f29, -0x8000(r10)
	  lwz       r8, 0x14(r1)
	  stfs      f0, -0x8000(r10)
	  lwz       r0, 0x10(r1)
	  stfs      f3, -0x8000(r10)
	  stfs      f1, -0x8000(r10)
	  stw       r9, -0x8000(r10)
	  stfs      f30, -0x8000(r10)
	  stfs      f29, -0x8000(r10)
	  stfs      f0, -0x8000(r10)
	  stfs      f4, -0x8000(r10)
	  stfs      f1, -0x8000(r10)
	  stw       r8, -0x8000(r10)
	  stfs      f30, -0x8000(r10)
	  stfs      f28, -0x8000(r10)
	  stfs      f2, -0x8000(r10)
	  stfs      f4, -0x8000(r10)
	  stfs      f1, -0x8000(r10)
	  stw       r0, -0x8000(r10)
	  stfs      f31, -0x8000(r10)
	  stfs      f28, -0x8000(r10)
	  bl        0x8DA30
	  li        r3, 0
	  li        r4, 0xD
	  li        r5, 0x1
	  li        r6, 0x2
	  li        r7, 0xF
	  bl        0x8DA18
	  li        r3, 0
	  bl        0x8E2A4
	  li        r3, 0x1
	  bl        0x91EB8
	  li        r3, 0
	  li        r4, 0x4
	  bl        0x91770
	  li        r3, 0
	  li        r4, 0xFF
	  li        r5, 0xFF
	  li        r6, 0x4
	  bl        0x91CFC
	  li        r24, 0

	.loc_0x344:
	  mr        r3, r24
	  li        r4, 0
	  li        r5, 0x1
	  li        r6, 0x2
	  li        r7, 0x3
	  bl        0x91B90
	  addi      r24, r24, 0x1
	  cmpwi     r24, 0x4
	  blt+      .loc_0x344
	  li        r3, 0
	  bl        0x91604
	  li        r24, 0

	.loc_0x374:
	  mr        r3, r24
	  bl        0x9161C
	  addi      r24, r24, 0x1
	  cmpwi     r24, 0x10
	  blt+      .loc_0x374
	  li        r3, 0x4
	  li        r4, 0
	  li        r5, 0
	  li        r6, 0x1
	  li        r7, 0
	  li        r8, 0
	  li        r9, 0x2
	  bl        0x90118
	  li        r3, 0xD
	  li        r4, 0
	  bl        0x8D4F0

	.loc_0x3B4:
	  psq_l     f31,0x78(r1),0,0
	  lfd       f31, 0x70(r1)
	  psq_l     f30,0x68(r1),0,0
	  lfd       f30, 0x60(r1)
	  psq_l     f29,0x58(r1),0,0
	  lfd       f29, 0x50(r1)
	  psq_l     f28,0x48(r1),0,0
	  lfd       f28, 0x40(r1)
	  lmw       r24, 0x20(r1)
	  lwz       r0, 0x84(r1)
	  mtlr      r0
	  addi      r1, r1, 0x80
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80056DCC
 * Size:	000048
 */
void J2DPictureEx::load(_GXTexMapID, unsigned char)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x168(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x38
	  lwz       r3, 0x70(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x38
	  lwz       r12, 0x0(r3)
	  rlwinm    r5,r5,0,24,31
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl

	.loc_0x38:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80056E14
 * Size:	0001FC
 */
void J2DPictureEx::setTevOrder(unsigned char, unsigned char, bool)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  rlwinm    r0,r4,0,24,31
	  cmplwi    r0, 0x1
	  stw       r31, 0x3C(r1)
	  mr        r31, r3
	  stw       r30, 0x38(r1)
	  stw       r29, 0x34(r1)
	  stw       r28, 0x30(r1)
	  bne-      .loc_0x58
	  rlwinm.   r0,r6,0,24,31
	  bne-      .loc_0x40
	  li        r0, 0x4
	  sth       r0, 0x10(r1)
	  b         .loc_0x17C

	.loc_0x40:
	  lis       r3, 0x1
	  li        r4, 0xFF
	  subi      r0, r3, 0xFC
	  sth       r4, 0x10(r1)
	  sth       r0, 0x12(r1)
	  b         .loc_0x17C

	.loc_0x58:
	  cmplwi    r0, 0
	  li        r7, 0
	  ble-      .loc_0x13C
	  cmplwi    r0, 0x8
	  subi      r0, r4, 0x8
	  ble-      .loc_0x110
	  rlwinm    r0,r0,0,24,31
	  b         .loc_0x104

	.loc_0x78:
	  rlwinm    r9,r7,8,16,23
	  rlwinm    r10,r7,1,23,30
	  addi      r3, r1, 0x10
	  addi      r8, r7, 0x1
	  ori       r11, r9, 0xFF
	  addi      r9, r7, 0x2
	  add       r3, r3, r10
	  rlwinm    r8,r8,8,16,23
	  ori       r10, r8, 0xFF
	  sth       r11, 0x0(r3)
	  rlwinm    r9,r9,8,16,23
	  addi      r8, r7, 0x3
	  ori       r11, r9, 0xFF
	  sth       r10, 0x2(r3)
	  rlwinm    r8,r8,8,16,23
	  addi      r9, r7, 0x4
	  ori       r10, r8, 0xFF
	  sth       r11, 0x4(r3)
	  rlwinm    r9,r9,8,16,23
	  addi      r8, r7, 0x5
	  ori       r11, r9, 0xFF
	  sth       r10, 0x6(r3)
	  rlwinm    r8,r8,8,16,23
	  addi      r9, r7, 0x6
	  ori       r10, r8, 0xFF
	  sth       r11, 0x8(r3)
	  addi      r8, r7, 0x7
	  rlwinm    r9,r9,8,16,23
	  rlwinm    r8,r8,8,16,23
	  sth       r10, 0xA(r3)
	  ori       r9, r9, 0xFF
	  addi      r7, r7, 0x8
	  sth       r9, 0xC(r3)
	  ori       r8, r8, 0xFF
	  sth       r8, 0xE(r3)

	.loc_0x104:
	  rlwinm    r3,r7,0,24,31
	  cmplw     r3, r0
	  blt+      .loc_0x78

	.loc_0x110:
	  addi      r8, r1, 0x10
	  rlwinm    r0,r4,0,24,31
	  b         .loc_0x130

	.loc_0x11C:
	  rlwinm    r9,r7,8,16,23
	  rlwinm    r3,r7,1,23,30
	  ori       r9, r9, 0xFF
	  addi      r7, r7, 0x1
	  sthx      r9, r8, r3

	.loc_0x130:
	  rlwinm    r3,r7,0,24,31
	  cmplw     r3, r0
	  blt+      .loc_0x11C

	.loc_0x13C:
	  rlwinm.   r0,r6,0,24,31
	  bne-      .loc_0x15C
	  lis       r3, 0x1
	  rlwinm    r0,r4,1,23,30
	  subi      r4, r3, 0xFC
	  addi      r3, r1, 0x10
	  sthx      r4, r3, r0
	  b         .loc_0x17C

	.loc_0x15C:
	  lis       r6, 0x1
	  rlwinm    r4,r4,1,23,30
	  subi      r0, r6, 0x1
	  addi      r3, r1, 0x10
	  sthx      r0, r3, r4
	  subi      r0, r6, 0xFC
	  addi      r3, r1, 0x12
	  sthx      r0, r3, r4

	.loc_0x17C:
	  addi      r29, r1, 0x10
	  rlwinm    r30,r5,0,24,31
	  li        r28, 0
	  b         .loc_0x1D0

	.loc_0x18C:
	  rlwinm    r0,r28,1,23,30
	  rlwinm    r4,r28,0,24,31
	  lhzx      r0, r29, r0
	  addi      r5, r1, 0x8
	  srawi     r3, r0, 0x8
	  stb       r0, 0xE(r1)
	  stb       r3, 0xC(r1)
	  stb       r3, 0xD(r1)
	  lwz       r0, 0xC(r1)
	  stw       r0, 0x8(r1)
	  lwz       r3, 0x168(r31)
	  lwz       r3, 0x70(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  addi      r28, r28, 0x1

	.loc_0x1D0:
	  rlwinm    r0,r28,0,24,31
	  cmplw     r0, r30
	  blt+      .loc_0x18C
	  lwz       r0, 0x44(r1)
	  lwz       r31, 0x3C(r1)
	  lwz       r30, 0x38(r1)
	  lwz       r29, 0x34(r1)
	  lwz       r28, 0x30(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80057010
 * Size:	0002BC
 */
void J2DPictureEx::setTevStage(unsigned char, unsigned char, bool)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  rlwinm    r0,r4,0,24,31
	  cmplwi    r0, 0x1
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  stw       r30, 0x18(r1)
	  mr        r30, r4
	  stw       r29, 0x14(r1)
	  stw       r28, 0x10(r1)
	  mr        r28, r6
	  bne-      .loc_0x120
	  lwz       r3, 0x168(r31)
	  li        r4, 0
	  lwz       r3, 0x70(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x60(r12)
	  mtctr     r12
	  bctrl
	  lwz       r5, 0x168(r31)
	  mr        r29, r3
	  li        r4, 0
	  lwz       r3, 0x70(r5)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xA0(r12)
	  mtctr     r12
	  bctrl
	  cmplwi    r3, 0
	  li        r4, 0
	  beq-      .loc_0xAC
	  lwz       r3, 0x20(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0xAC
	  lbz       r0, 0x0(r3)
	  cmpwi     r0, 0
	  beq-      .loc_0x9C
	  cmpwi     r0, 0x1
	  bne-      .loc_0xAC

	.loc_0x9C:
	  lbz       r0, 0x1(r3)
	  cmpwi     r0, 0
	  bne-      .loc_0xAC
	  li        r4, 0x1

	.loc_0xAC:
	  rlwinm.   r0,r28,0,24,31
	  bne-      .loc_0xD4
	  rlwinm    r5,r4,0,24,31
	  mr        r3, r31
	  neg       r0, r5
	  mr        r4, r29
	  or        r0, r0, r5
	  rlwinm    r5,r0,1,31,31
	  bl        .loc_0x2BC
	  b         .loc_0x29C

	.loc_0xD4:
	  rlwinm.   r0,r4,0,24,31
	  mr        r3, r31
	  mr        r4, r29
	  li        r5, 0x5
	  beq-      .loc_0xEC
	  li        r5, 0x6

	.loc_0xEC:
	  bl        .loc_0x2BC
	  lwz       r3, 0x168(r31)
	  li        r4, 0x1
	  lwz       r3, 0x70(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x60(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  mr        r3, r31
	  li        r5, 0x4
	  bl        .loc_0x2BC
	  b         .loc_0x29C

	.loc_0x120:
	  rlwinm.   r0,r28,0,24,31
	  bne-      .loc_0x1CC
	  lwz       r3, 0x168(r31)
	  li        r4, 0
	  lwz       r3, 0x70(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x60(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  mr        r3, r31
	  li        r5, 0x2
	  bl        .loc_0x2BC
	  rlwinm    r29,r30,0,24,31
	  li        r30, 0x1
	  b         .loc_0x190

	.loc_0x160:
	  lwz       r3, 0x168(r31)
	  rlwinm    r4,r30,0,24,31
	  lwz       r3, 0x70(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x60(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  mr        r3, r31
	  li        r5, 0x3
	  bl        .loc_0x2BC
	  addi      r30, r30, 0x1

	.loc_0x190:
	  rlwinm    r0,r30,0,24,31
	  cmplw     r0, r29
	  blt+      .loc_0x160
	  lwz       r3, 0x168(r31)
	  mr        r4, r29
	  lwz       r3, 0x70(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x60(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  mr        r3, r31
	  li        r5, 0x4
	  bl        .loc_0x2BC
	  b         .loc_0x29C

	.loc_0x1CC:
	  lwz       r3, 0x168(r31)
	  li        r4, 0
	  lwz       r3, 0x70(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x60(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  mr        r3, r31
	  li        r5, 0x2
	  bl        .loc_0x2BC
	  rlwinm    r29,r30,0,24,31
	  li        r28, 0x1
	  b         .loc_0x234

	.loc_0x204:
	  lwz       r3, 0x168(r31)
	  rlwinm    r4,r28,0,24,31
	  lwz       r3, 0x70(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x60(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  mr        r3, r31
	  li        r5, 0x3
	  bl        .loc_0x2BC
	  addi      r28, r28, 0x1

	.loc_0x234:
	  rlwinm    r0,r28,0,24,31
	  cmplw     r0, r29
	  blt+      .loc_0x204
	  lwz       r3, 0x168(r31)
	  mr        r4, r29
	  lwz       r3, 0x70(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x60(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  mr        r3, r31
	  li        r5, 0x7
	  bl        .loc_0x2BC
	  lwz       r3, 0x168(r31)
	  addi      r0, r30, 0x1
	  rlwinm    r4,r0,0,24,31
	  lwz       r3, 0x70(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x60(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  mr        r3, r31
	  li        r5, 0x4
	  bl        .loc_0x2BC

	.loc_0x29C:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  lwz       r28, 0x10(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr

	.loc_0x2BC:
	*/
}

/*
 * --INFO--
 * Address:	800572CC
 * Size:	000300
 */
void J2DPictureEx::setStage(J2DTevStage*, J2DPictureEx::stage_enum)
{
	/*
	.loc_0x0:
	  stwu      r1, -0xC0(r1)
	  lis       r3, 0x8048
	  stmw      r14, 0x78(r1)
	  subi      r17, r3, 0x7A20
	  rlwinm    r16,r5,2,0,29
	  mulli     r15, r5, 0x5
	  lwz       r18, 0x0(r17)
	  lwz       r19, 0x4(r17)
	  lwz       r20, 0x8(r17)
	  lwz       r14, 0xC(r17)
	  lwz       r21, 0x10(r17)
	  lwz       r22, 0x14(r17)
	  lwz       r23, 0x18(r17)
	  lwz       r24, 0x1C(r17)
	  stw       r14, 0x34(r1)
	  addi      r14, r1, 0x28
	  lwz       r25, 0x20(r17)
	  lwz       r26, 0x24(r17)
	  lwz       r27, 0x28(r17)
	  lwz       r28, 0x2C(r17)
	  lwz       r29, 0x30(r17)
	  lwz       r30, 0x34(r17)
	  lwz       r31, 0x38(r17)
	  lwz       r12, 0x3C(r17)
	  lwz       r11, 0x40(r17)
	  lwz       r10, 0x44(r17)
	  lwz       r9, 0x48(r17)
	  lwz       r8, 0x4C(r17)
	  lwz       r7, 0x50(r17)
	  lwz       r6, 0x54(r17)
	  lwz       r5, 0x58(r17)
	  lwz       r3, 0x5C(r17)
	  lwz       r0, 0x60(r17)
	  lwz       r17, 0x64(r17)
	  stw       r5, 0x60(r1)
	  addi      r5, r1, 0x4B
	  stw       r3, 0x64(r1)
	  addi      r3, r1, 0x48
	  stw       r18, 0x28(r1)
	  stw       r19, 0x2C(r1)
	  stw       r20, 0x30(r1)
	  stw       r21, 0x38(r1)
	  stw       r22, 0x3C(r1)
	  stw       r23, 0x40(r1)
	  stw       r24, 0x44(r1)
	  lbzx      r20, r14, r16
	  addi      r14, r1, 0x2A
	  lbzx      r18, r14, r16
	  addi      r14, r1, 0x29
	  lbzx      r19, r14, r16
	  rlwinm    r20,r20,4,0,27
	  addi      r14, r1, 0x2B
	  rlwinm    r18,r18,4,0,27
	  or        r19, r20, r19
	  lbzx      r14, r14, r16
	  stw       r11, 0x48(r1)
	  or        r11, r18, r14
	  stb       r19, 0x2(r4)
	  stb       r11, 0x3(r4)
	  stw       r10, 0x4C(r1)
	  lbz       r11, 0x1(r4)
	  stw       r9, 0x50(r1)
	  rlwinm    r10,r11,0,30,28
	  stw       r8, 0x54(r1)
	  stw       r7, 0x58(r1)
	  stw       r6, 0x5C(r1)
	  stw       r0, 0x68(r1)
	  stw       r17, 0x6C(r1)
	  lbzx      r7, r3, r15
	  addi      r3, r1, 0x4C
	  stw       r25, 0x8(r1)
	  rlwinm    r0,r7,2,22,29
	  cmplwi    r7, 0x1
	  or        r6, r10, r0
	  lbzx      r0, r5, r15
	  addi      r5, r1, 0x4A
	  stw       r26, 0xC(r1)
	  lbzx      r9, r5, r15
	  addi      r5, r1, 0x49
	  lbzx      r3, r3, r15
	  stw       r27, 0x10(r1)
	  lbzx      r8, r5, r15
	  stw       r28, 0x14(r1)
	  stw       r29, 0x18(r1)
	  stw       r30, 0x1C(r1)
	  stw       r31, 0x20(r1)
	  stw       r12, 0x24(r1)
	  stb       r6, 0x1(r4)
	  bgt-      .loc_0x18C
	  lbz       r6, 0x1(r4)
	  rlwinm    r5,r9,4,20,27
	  rlwinm    r6,r6,0,28,25
	  or        r5, r6, r5
	  stb       r5, 0x1(r4)
	  lbz       r5, 0x1(r4)
	  rlwinm    r5,r5,0,0,29
	  or        r5, r5, r8
	  stb       r5, 0x1(r4)
	  b         .loc_0x1A8

	.loc_0x18C:
	  lbz       r5, 0x1(r4)
	  rlwimi    r5,r7,3,26,27
	  stb       r5, 0x1(r4)
	  lbz       r5, 0x1(r4)
	  rlwinm    r5,r5,0,0,29
	  ori       r5, r5, 0x3
	  stb       r5, 0x1(r4)

	.loc_0x1A8:
	  lbz       r6, 0x1(r4)
	  rlwinm    r7,r3,6,18,25
	  addi      r3, r1, 0x48
	  rlwinm    r0,r0,3,21,28
	  rlwinm    r6,r6,0,29,27
	  lbzx      r3, r3, r15
	  or        r6, r6, r0
	  addi      r5, r1, 0x8
	  stb       r6, 0x1(r4)
	  addi      r6, r1, 0xB
	  lbzx      r0, r5, r16
	  addi      r5, r1, 0x9
	  lbz       r8, 0x1(r4)
	  cmplwi    r3, 0x1
	  lbzx      r10, r5, r16
	  addi      r5, r1, 0xA
	  rlwimi    r7,r8,0,26,31
	  lbzx      r8, r5, r16
	  stb       r7, 0x1(r4)
	  rlwinm    r11,r10,2,22,29
	  rlwinm    r0,r0,5,0,26
	  lbzx      r6, r6, r16
	  lbz       r5, 0x6(r4)
	  rlwinm    r9,r8,7,17,24
	  rlwinm    r10,r8,31,25,31
	  rlwinm    r8,r6,4,20,27
	  rlwimi    r0,r5,0,27,31
	  addi      r5, r1, 0x4C
	  stb       r0, 0x6(r4)
	  addi      r6, r1, 0x4B
	  lbzx      r0, r6, r15
	  addi      r6, r1, 0x4A
	  lbz       r12, 0x6(r4)
	  rlwinm    r7,r3,2,22,29
	  lbzx      r14, r6, r15
	  addi      r6, r1, 0x49
	  rlwinm    r12,r12,0,30,26
	  lbzx      r5, r5, r15
	  or        r11, r12, r11
	  lbzx      r12, r6, r15
	  stb       r11, 0x6(r4)
	  lbz       r6, 0x6(r4)
	  rlwinm    r6,r6,0,0,29
	  or        r6, r6, r10
	  stb       r6, 0x6(r4)
	  lbz       r6, 0x7(r4)
	  rlwimi    r9,r6,0,25,31
	  stb       r9, 0x7(r4)
	  lbz       r6, 0x7(r4)
	  rlwinm    r6,r6,0,28,24
	  or        r6, r6, r8
	  stb       r6, 0x7(r4)
	  lbz       r6, 0x5(r4)
	  rlwinm    r6,r6,0,30,28
	  or        r6, r6, r7
	  stb       r6, 0x5(r4)
	  bgt-      .loc_0x2B4
	  lbz       r6, 0x5(r4)
	  rlwinm    r3,r14,4,20,27
	  rlwinm    r6,r6,0,0,29
	  or        r6, r6, r12
	  stb       r6, 0x5(r4)
	  lbz       r6, 0x5(r4)
	  rlwinm    r6,r6,0,28,25
	  or        r3, r6, r3
	  stb       r3, 0x5(r4)
	  b         .loc_0x2D0

	.loc_0x2B4:
	  lbz       r6, 0x5(r4)
	  rlwimi    r6,r3,3,26,27
	  stb       r6, 0x5(r4)
	  lbz       r3, 0x5(r4)
	  rlwinm    r3,r3,0,0,29
	  ori       r3, r3, 0x3
	  stb       r3, 0x5(r4)

	.loc_0x2D0:
	  lbz       r6, 0x5(r4)
	  rlwinm    r3,r5,6,18,25
	  rlwinm    r0,r0,3,21,28
	  rlwinm    r5,r6,0,29,27
	  or        r0, r5, r0
	  stb       r0, 0x5(r4)
	  lbz       r0, 0x5(r4)
	  rlwimi    r3,r0,0,26,31
	  stb       r3, 0x5(r4)
	  lmw       r14, 0x78(r1)
	  addi      r1, r1, 0xC0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800575CC
 * Size:	0004A4
 */
void J2DPictureEx::setTevKColor(unsigned char)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x70(r1)
	  mflr      r0
	  rlwinm    r5,r4,0,24,31
	  stw       r0, 0x74(r1)
	  cmplwi    r5, 0x1
	  stmw      r24, 0x50(r1)
	  mr        r30, r3
	  beq-      .loc_0x490
	  lfs       f0, -0x7A7C(r2)
	  cmplwi    r5, 0x4
	  fmr       f1, f0
	  bge-      .loc_0x10C
	  cmplwi    r5, 0
	  li        r6, 0
	  ble-      .loc_0x21C
	  cmplwi    r5, 0x8
	  subi      r0, r4, 0x8
	  ble-      .loc_0xD8
	  rlwinm    r0,r0,0,24,31
	  b         .loc_0xCC

	.loc_0x50:
	  rlwinm    r3,r6,2,22,29
	  addi      r6, r6, 0x8
	  add       r3, r30, r3
	  lfs       f2, 0x124(r3)
	  lfs       f9, 0x134(r3)
	  fadds     f0, f0, f2
	  lfs       f2, 0x128(r3)
	  fadds     f1, f1, f9
	  lfs       f8, 0x138(r3)
	  lfs       f3, 0x12C(r3)
	  fadds     f0, f0, f2
	  fadds     f1, f1, f8
	  lfs       f7, 0x13C(r3)
	  lfs       f2, 0x130(r3)
	  fadds     f0, f0, f3
	  lfs       f6, 0x140(r3)
	  fadds     f1, f1, f7
	  lfs       f5, 0x144(r3)
	  fadds     f0, f0, f2
	  lfs       f4, 0x148(r3)
	  fadds     f1, f1, f6
	  lfs       f3, 0x14C(r3)
	  lfs       f2, 0x150(r3)
	  fadds     f0, f0, f9
	  fadds     f1, f1, f5
	  fadds     f0, f0, f8
	  fadds     f1, f1, f4
	  fadds     f0, f0, f7
	  fadds     f1, f1, f3
	  fadds     f0, f0, f6
	  fadds     f1, f1, f2

	.loc_0xCC:
	  rlwinm    r3,r6,0,24,31
	  cmplw     r3, r0
	  blt+      .loc_0x50

	.loc_0xD8:
	  rlwinm    r0,r4,0,24,31
	  b         .loc_0xFC

	.loc_0xE0:
	  rlwinm    r3,r6,2,22,29
	  addi      r6, r6, 0x1
	  add       r3, r30, r3
	  lfs       f3, 0x124(r3)
	  lfs       f2, 0x134(r3)
	  fadds     f0, f0, f3
	  fadds     f1, f1, f2

	.loc_0xFC:
	  rlwinm    r3,r6,0,24,31
	  cmplw     r3, r0
	  blt+      .loc_0xE0
	  b         .loc_0x21C

	.loc_0x10C:
	  lfs       f3, 0x124(r30)
	  subic.    r6, r5, 0x4
	  lfs       f2, 0x134(r30)
	  li        r7, 0
	  fadds     f0, f0, f3
	  lfs       f4, 0x128(r30)
	  fadds     f1, f1, f2
	  lfs       f3, 0x138(r30)
	  lfs       f2, 0x12C(r30)
	  fadds     f0, f0, f4
	  fadds     f1, f1, f3
	  lfs       f4, 0x13C(r30)
	  lfs       f3, 0x130(r30)
	  fadds     f0, f0, f2
	  lfs       f2, 0x140(r30)
	  fadds     f1, f1, f4
	  fadds     f0, f0, f3
	  fadds     f1, f1, f2
	  ble-      .loc_0x21C
	  cmpwi     r6, 0x8
	  subi      r3, r5, 0xC
	  ble-      .loc_0x210
	  b         .loc_0x1E4

	.loc_0x168:
	  rlwinm    r0,r7,2,22,29
	  addi      r7, r7, 0x8
	  add       r5, r30, r0
	  lfs       f2, 0x178(r5)
	  lfs       f9, 0x188(r5)
	  fadds     f0, f0, f2
	  lfs       f2, 0x17C(r5)
	  fadds     f1, f1, f9
	  lfs       f8, 0x18C(r5)
	  lfs       f3, 0x180(r5)
	  fadds     f0, f0, f2
	  fadds     f1, f1, f8
	  lfs       f7, 0x190(r5)
	  lfs       f2, 0x184(r5)
	  fadds     f0, f0, f3
	  lfs       f6, 0x194(r5)
	  fadds     f1, f1, f7
	  lfs       f5, 0x198(r5)
	  fadds     f0, f0, f2
	  lfs       f4, 0x19C(r5)
	  fadds     f1, f1, f6
	  lfs       f3, 0x1A0(r5)
	  lfs       f2, 0x1A4(r5)
	  fadds     f0, f0, f9
	  fadds     f1, f1, f5
	  fadds     f0, f0, f8
	  fadds     f1, f1, f4
	  fadds     f0, f0, f7
	  fadds     f1, f1, f3
	  fadds     f0, f0, f6
	  fadds     f1, f1, f2

	.loc_0x1E4:
	  rlwinm    r0,r7,0,24,31
	  cmpw      r0, r3
	  blt+      .loc_0x168
	  b         .loc_0x210

	.loc_0x1F4:
	  rlwinm    r0,r7,2,22,29
	  addi      r7, r7, 0x1
	  add       r3, r30, r0
	  lfs       f3, 0x178(r3)
	  lfs       f2, 0x188(r3)
	  fadds     f0, f0, f3
	  fadds     f1, f1, f2

	.loc_0x210:
	  rlwinm    r0,r7,0,24,31
	  cmpw      r0, r6
	  blt+      .loc_0x1F4

	.loc_0x21C:
	  li        r3, 0xFF
	  rlwinm    r0,r4,0,24,31
	  stb       r3, 0x24(r1)
	  li        r8, 0
	  stb       r3, 0x1C(r1)
	  stb       r3, 0x25(r1)
	  stb       r3, 0x1D(r1)
	  stb       r3, 0x26(r1)
	  stb       r3, 0x1E(r1)
	  stb       r3, 0x27(r1)
	  stb       r3, 0x1F(r1)
	  stb       r3, 0x28(r1)
	  stb       r3, 0x20(r1)
	  stb       r3, 0x29(r1)
	  stb       r3, 0x21(r1)
	  stb       r3, 0x2A(r1)
	  stb       r3, 0x22(r1)
	  stb       r3, 0x2B(r1)
	  stb       r3, 0x23(r1)
	  b         .loc_0x318

	.loc_0x26C:
	  rlwinm    r7,r8,0,24,31
	  cmplwi    r7, 0x4
	  bge-      .loc_0x2C8
	  rlwinm    r3,r8,2,22,29
	  lfs       f4, -0x7A70(r2)
	  add       r4, r30, r3
	  addi      r5, r1, 0x24
	  lfs       f3, 0x124(r4)
	  addi      r3, r1, 0x1C
	  lfs       f2, 0x134(r4)
	  fmuls     f3, f4, f3
	  fmuls     f2, f4, f2
	  fdivs     f3, f3, f0
	  fdivs     f2, f2, f1
	  fctiwz    f3, f3
	  fctiwz    f2, f2
	  stfd      f3, 0x40(r1)
	  stfd      f2, 0x48(r1)
	  lwz       r6, 0x44(r1)
	  lwz       r4, 0x4C(r1)
	  stbx      r6, r5, r7
	  stbx      r4, r3, r7
	  b         .loc_0x314

	.loc_0x2C8:
	  rlwinm    r3,r8,2,22,29
	  lfs       f4, -0x7A70(r2)
	  add       r4, r30, r3
	  addi      r5, r1, 0x24
	  lfs       f3, 0x168(r4)
	  addi      r3, r1, 0x1C
	  lfs       f2, 0x178(r4)
	  fmuls     f3, f4, f3
	  fmuls     f2, f4, f2
	  fdivs     f3, f3, f0
	  fdivs     f2, f2, f1
	  fctiwz    f3, f3
	  fctiwz    f2, f2
	  stfd      f3, 0x48(r1)
	  stfd      f2, 0x40(r1)
	  lwz       r6, 0x4C(r1)
	  lwz       r4, 0x44(r1)
	  stbx      r6, r5, r7
	  stbx      r4, r3, r7

	.loc_0x314:
	  addi      r8, r8, 0x1

	.loc_0x318:
	  rlwinm    r3,r8,0,24,31
	  cmplw     r3, r0
	  blt+      .loc_0x26C
	  lbz       r3, 0x26(r1)
	  li        r0, -0x1
	  lbz       r4, 0x1E(r1)
	  addi      r29, r1, 0x2C
	  lbz       r5, 0x2A(r1)
	  rlwinm    r12,r3,16,0,15
	  lbz       r3, 0x22(r1)
	  rlwinm    r6,r4,16,0,15
	  lbz       r7, 0x1F(r1)
	  rlwinm    r9,r5,16,0,15
	  lbz       r5, 0x27(r1)
	  rlwinm    r3,r3,16,0,15
	  lbz       r4, 0x23(r1)
	  rlwimi    r6,r7,24,0,7
	  lbz       r10, 0x2B(r1)
	  rlwimi    r12,r5,24,0,7
	  lbz       r24, 0x25(r1)
	  rlwimi    r3,r4,24,0,7
	  lbz       r8, 0x1D(r1)
	  rlwimi    r9,r10,24,0,7
	  lbz       r11, 0x29(r1)
	  rlwimi    r12,r24,8,16,23
	  lbz       r7, 0x24(r1)
	  rlwimi    r6,r8,8,16,23
	  lbz       r5, 0x21(r1)
	  rlwimi    r9,r11,8,16,23
	  or        r10, r7, r12
	  lbz       r4, 0x28(r1)
	  stw       r10, 0x18(r1)
	  rlwimi    r3,r5,8,16,23
	  or        r8, r4, r9
	  lbz       r7, 0x1C(r1)
	  stw       r8, 0x14(r1)
	  li        r31, 0
	  lbz       r4, 0x20(r1)
	  or        r5, r7, r6
	  stw       r5, 0x10(r1)
	  or        r3, r4, r3
	  lbz       r24, 0x18(r1)
	  stw       r3, 0xC(r1)
	  lbz       r25, 0x19(r1)
	  stw       r0, 0x38(r1)
	  lbz       r26, 0x1A(r1)
	  lbz       r27, 0x1B(r1)
	  stw       r0, 0x2C(r1)
	  lbz       r6, 0xC(r1)
	  lbz       r5, 0xD(r1)
	  lbz       r4, 0xE(r1)
	  lbz       r3, 0xF(r1)
	  stw       r0, 0x30(r1)
	  lbz       r10, 0x10(r1)
	  lbz       r9, 0x11(r1)
	  lbz       r8, 0x12(r1)
	  lbz       r7, 0x13(r1)
	  stw       r0, 0x34(r1)
	  lbz       r28, 0x14(r1)
	  lbz       r12, 0x15(r1)
	  lbz       r11, 0x16(r1)
	  lbz       r0, 0x17(r1)
	  stb       r24, 0x38(r1)
	  stb       r25, 0x39(r1)
	  stb       r26, 0x3A(r1)
	  stb       r27, 0x3B(r1)
	  stb       r28, 0x34(r1)
	  stb       r12, 0x35(r1)
	  stb       r11, 0x36(r1)
	  stb       r0, 0x37(r1)
	  stb       r10, 0x30(r1)
	  stb       r9, 0x31(r1)
	  stb       r8, 0x32(r1)
	  stb       r7, 0x33(r1)
	  stb       r6, 0x2C(r1)
	  stb       r5, 0x2D(r1)
	  stb       r4, 0x2E(r1)
	  stb       r3, 0x2F(r1)
	  b         .loc_0x484

	.loc_0x454:
	  rlwinm    r0,r31,2,22,29
	  rlwinm    r4,r31,0,24,31
	  lwzx      r0, r29, r0
	  addi      r5, r1, 0x8
	  stw       r0, 0x8(r1)
	  lwz       r3, 0x168(r30)
	  lwz       r3, 0x70(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  addi      r31, r31, 0x1

	.loc_0x484:
	  rlwinm    r0,r31,0,24,31
	  cmplwi    r0, 0x4
	  blt+      .loc_0x454

	.loc_0x490:
	  lmw       r24, 0x50(r1)
	  lwz       r0, 0x74(r1)
	  mtlr      r0
	  addi      r1, r1, 0x70
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80057A70
 * Size:	0000B0
 */
void J2DPictureEx::setTevKColorSel(unsigned char)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  rlwinm    r31,r4,0,24,31
	  stw       r30, 0x18(r1)
	  li        r30, 0
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  b         .loc_0x88

	.loc_0x28:
	  rlwinm    r4,r30,0,24,31
	  cmplwi    r4, 0x4
	  bge-      .loc_0x5C
	  lwz       r3, 0x168(r29)
	  rlwinm    r0,r30,2,22,29
	  subfic    r0, r0, 0x1F
	  lwz       r3, 0x70(r3)
	  rlwinm    r5,r0,0,24,31
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x44(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x84

	.loc_0x5C:
	  lwz       r3, 0x168(r29)
	  subi      r0, r4, 0x4
	  rlwinm    r0,r0,2,0,29
	  lwz       r3, 0x70(r3)
	  subfic    r0, r0, 0x1E
	  rlwinm    r5,r0,0,24,31
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x44(r12)
	  mtctr     r12
	  bctrl

	.loc_0x84:
	  addi      r30, r30, 0x1

	.loc_0x88:
	  rlwinm    r0,r30,0,24,31
	  cmplw     r0, r31
	  blt+      .loc_0x28
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
 * Address:	80057B20
 * Size:	0000B0
 */
void J2DPictureEx::setTevKAlphaSel(unsigned char)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  rlwinm    r31,r4,0,24,31
	  stw       r30, 0x18(r1)
	  li        r30, 0
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  b         .loc_0x88

	.loc_0x28:
	  rlwinm    r4,r30,0,24,31
	  cmplwi    r4, 0x4
	  bge-      .loc_0x5C
	  lwz       r3, 0x168(r29)
	  rlwinm    r0,r30,2,22,29
	  subfic    r0, r0, 0x1D
	  lwz       r3, 0x70(r3)
	  rlwinm    r5,r0,0,24,31
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x4C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x84

	.loc_0x5C:
	  lwz       r3, 0x168(r29)
	  subi      r0, r4, 0x4
	  rlwinm    r0,r0,2,0,29
	  lwz       r3, 0x70(r3)
	  subfic    r0, r0, 0x1C
	  rlwinm    r5,r0,0,24,31
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x4C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x84:
	  addi      r30, r30, 0x1

	.loc_0x88:
	  rlwinm    r0,r30,0,24,31
	  cmplw     r0, r31
	  blt+      .loc_0x28
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
 * Address:	80057BD0
 * Size:	000118
 */
void J2DPictureEx::shiftSetBlendRatio(unsigned char, float, bool, bool)
{
	/*
	.loc_0x0:
	  rlwinm.   r0,r5,0,24,31
	  beq-      .loc_0x10
	  addi      r7, r3, 0x124
	  b         .loc_0x14

	.loc_0x10:
	  addi      r7, r3, 0x134

	.loc_0x14:
	  rlwinm.   r0,r5,0,24,31
	  beq-      .loc_0x24
	  addi      r5, r3, 0x178
	  b         .loc_0x28

	.loc_0x24:
	  addi      r5, r3, 0x188

	.loc_0x28:
	  rlwinm.   r0,r6,0,24,31
	  beq-      .loc_0xB4
	  rlwinm    r8,r4,0,24,31
	  addi      r3, r5, 0x1C
	  subfic    r0, r8, 0x7
	  addi      r6, r7, 0x1C
	  li        r9, 0x7
	  mtctr     r0
	  cmpwi     r8, 0x7
	  bge-      .loc_0x8C

	.loc_0x50:
	  cmpwi     r9, 0x4
	  ble-      .loc_0x64
	  lfs       f0, -0x14(r3)
	  stfs      f0, -0x10(r3)
	  b         .loc_0x7C

	.loc_0x64:
	  bne-      .loc_0x74
	  lfs       f0, 0xC(r7)
	  stfs      f0, 0x0(r5)
	  b         .loc_0x7C

	.loc_0x74:
	  lfs       f0, -0x4(r6)
	  stfs      f0, 0x0(r6)

	.loc_0x7C:
	  subi      r3, r3, 0x4
	  subi      r6, r6, 0x4
	  subi      r9, r9, 0x1
	  bdnz+     .loc_0x50

	.loc_0x8C:
	  rlwinm    r0,r4,0,24,31
	  cmplwi    r0, 0x4
	  blt-      .loc_0xA8
	  rlwinm    r0,r8,2,0,29
	  add       r3, r5, r0
	  stfs      f1, -0x10(r3)
	  blr

	.loc_0xA8:
	  rlwinm    r0,r4,2,22,29
	  stfsx     f1, r7, r0
	  blr

	.loc_0xB4:
	  rlwinm    r3,r4,0,24,31
	  addi      r6, r3, 0x1
	  rlwinm    r4,r6,2,0,29
	  subfic    r0, r6, 0x8
	  add       r3, r5, r4
	  add       r4, r7, r4
	  mtctr     r0
	  cmpwi     r6, 0x8
	  bgelr-

	.loc_0xD8:
	  cmpwi     r6, 0x4
	  ble-      .loc_0xEC
	  lfs       f0, -0x10(r3)
	  stfs      f0, -0x14(r3)
	  b         .loc_0x104

	.loc_0xEC:
	  bne-      .loc_0xFC
	  lfs       f0, 0x0(r5)
	  stfs      f0, 0xC(r7)
	  b         .loc_0x104

	.loc_0xFC:
	  lfs       f0, 0x0(r4)
	  stfs      f0, -0x4(r4)

	.loc_0x104:
	  addi      r3, r3, 0x4
	  addi      r4, r4, 0x4
	  addi      r6, r6, 0x1
	  bdnz+     .loc_0xD8
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80057CE8
 * Size:	000058
 */
void J2DPictureEx::setBlendColorRatio(float, float, float, float, float, float,
                                      float, float)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r0, 0x168(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x48
	  stfs      f1, 0x124(r3)
	  stfs      f2, 0x128(r3)
	  stfs      f3, 0x12C(r3)
	  stfs      f4, 0x130(r3)
	  stfs      f5, 0x178(r3)
	  stfs      f6, 0x17C(r3)
	  stfs      f7, 0x180(r3)
	  stfs      f8, 0x184(r3)
	  lwz       r4, 0x168(r3)
	  lwz       r0, 0x28(r4)
	  rlwinm    r4,r0,0,24,31
	  bl        -0x760

	.loc_0x48:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80057D40
 * Size:	000058
 */
void J2DPictureEx::setBlendAlphaRatio(float, float, float, float, float, float,
                                      float, float)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r0, 0x168(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x48
	  stfs      f1, 0x134(r3)
	  stfs      f2, 0x138(r3)
	  stfs      f3, 0x13C(r3)
	  stfs      f4, 0x140(r3)
	  stfs      f5, 0x188(r3)
	  stfs      f6, 0x18C(r3)
	  stfs      f7, 0x190(r3)
	  stfs      f8, 0x194(r3)
	  lwz       r4, 0x168(r3)
	  lwz       r0, 0x28(r4)
	  rlwinm    r4,r0,0,24,31
	  bl        -0x7B8

	.loc_0x48:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80057D98
 * Size:	000140
 */
void J2DPictureEx::changeTexture(const ResTIMG*, unsigned char)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stmw      r27, 0xC(r1)
	  mr        r27, r3
	  mr        r28, r4
	  mr        r29, r5
	  lwz       r3, 0x168(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x30
	  cmplwi    r28, 0
	  bne-      .loc_0x38

	.loc_0x30:
	  li        r3, 0
	  b         .loc_0x12C

	.loc_0x38:
	  lwz       r31, 0x28(r3)
	  rlwinm    r30,r29,0,24,31
	  cmplw     r30, r31
	  ble-      .loc_0x50
	  li        r3, 0
	  b         .loc_0x12C

	.loc_0x50:
	  lwz       r3, 0x70(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  rlwinm    r0,r3,0,24,31
	  mr        r5, r30
	  cmplwi    r0, 0x8
	  li        r4, 0x8
	  bgt-      .loc_0x7C
	  mr        r4, r3

	.loc_0x7C:
	  rlwinm    r0,r4,0,24,31
	  cmplw     r5, r0
	  blt-      .loc_0x90
	  li        r3, 0
	  b         .loc_0x12C

	.loc_0x90:
	  cmplw     r30, r31
	  bge-      .loc_0x10C
	  mr        r3, r27
	  mr        r4, r29
	  lwz       r12, 0x0(r27)
	  lwz       r12, 0x120(r12)
	  mtctr     r12
	  bctrl
	  lbz       r0, 0x8(r28)
	  li        r30, 0
	  lwz       r31, 0x20(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0xE0
	  mr        r3, r27
	  mr        r4, r29
	  lwz       r12, 0x0(r27)
	  lwz       r12, 0x148(r12)
	  mtctr     r12
	  bctrl
	  mr        r30, r3

	.loc_0xE0:
	  mr        r3, r27
	  mr        r4, r29
	  lwz       r12, 0x0(r27)
	  lwz       r12, 0x120(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r28
	  mr        r5, r30
	  bl        -0x24E14
	  mr        r3, r31
	  b         .loc_0x12C

	.loc_0x10C:
	  mr        r3, r27
	  mr        r4, r28
	  lwz       r12, 0x0(r27)
	  lfs       f1, -0x7A80(r2)
	  lwz       r12, 0x9C(r12)
	  mtctr     r12
	  bctrl
	  li        r3, 0

	.loc_0x12C:
	  lmw       r27, 0xC(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80057ED8
 * Size:	000058
 */
void J2DPictureEx::changeTexture(const char*, unsigned char)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r5
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  mr        r3, r4
	  bl        -0x1741C
	  lwz       r12, 0x0(r30)
	  mr        r4, r3
	  mr        r3, r30
	  mr        r5, r31
	  lwz       r12, 0x110(r12)
	  mtctr     r12
	  bctrl
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
 * Address:	80057F30
 * Size:	000160
 */
void J2DPictureEx::changeTexture(const ResTIMG*, unsigned char, JUTPalette*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stmw      r26, 0x8(r1)
	  mr        r28, r3
	  mr        r29, r4
	  mr        r30, r5
	  mr        r31, r6
	  lwz       r3, 0x168(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x34
	  cmplwi    r29, 0
	  bne-      .loc_0x3C

	.loc_0x34:
	  li        r3, 0
	  b         .loc_0x14C

	.loc_0x3C:
	  lwz       r27, 0x28(r3)
	  rlwinm    r26,r30,0,24,31
	  cmplw     r26, r27
	  ble-      .loc_0x54
	  li        r3, 0
	  b         .loc_0x14C

	.loc_0x54:
	  lwz       r3, 0x70(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  rlwinm    r0,r3,0,24,31
	  mr        r5, r26
	  cmplwi    r0, 0x8
	  li        r4, 0x8
	  bgt-      .loc_0x80
	  mr        r4, r3

	.loc_0x80:
	  rlwinm    r0,r4,0,24,31
	  cmplw     r5, r0
	  blt-      .loc_0x94
	  li        r3, 0
	  b         .loc_0x14C

	.loc_0x94:
	  cmplw     r26, r27
	  bge-      .loc_0x128
	  mr        r3, r28
	  mr        r4, r30
	  lwz       r12, 0x0(r28)
	  lwz       r12, 0x120(r12)
	  mtctr     r12
	  bctrl
	  lbz       r0, 0x8(r29)
	  li        r26, 0
	  lwz       r27, 0x20(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0xF8
	  mr        r3, r28
	  mr        r4, r30
	  lwz       r12, 0x0(r28)
	  lwz       r12, 0x148(r12)
	  mtctr     r12
	  bctrl
	  mr        r0, r3
	  mr        r3, r28
	  mr        r5, r0
	  mr        r4, r29
	  bl        -0x1AD30
	  mr        r26, r3

	.loc_0xF8:
	  mr        r3, r28
	  mr        r4, r30
	  lwz       r12, 0x0(r28)
	  lwz       r12, 0x120(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r29
	  mr        r5, r31
	  mr        r6, r26
	  bl        -0x24DE8
	  mr        r3, r27
	  b         .loc_0x14C

	.loc_0x128:
	  mr        r3, r28
	  mr        r4, r29
	  lwz       r12, 0x0(r28)
	  mr        r5, r31
	  lfs       f1, -0x7A80(r2)
	  lwz       r12, 0xA0(r12)
	  mtctr     r12
	  bctrl
	  li        r3, 0

	.loc_0x14C:
	  lmw       r26, 0x8(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80058090
 * Size:	000068
 */
void J2DPictureEx::changeTexture(const char*, unsigned char, JUTPalette*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r6
	  stw       r30, 0x18(r1)
	  mr        r30, r5
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  mr        r3, r4
	  bl        -0x175DC
	  lwz       r12, 0x0(r29)
	  mr        r4, r3
	  mr        r3, r29
	  mr        r5, r30
	  lwz       r12, 0x118(r12)
	  mr        r6, r31
	  mtctr     r12
	  bctrl
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
 * Address:	800580F8
 * Size:	000058
 */
void J2DPictureEx::getTexture(unsigned char) const
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lwz       r3, 0x168(r3)
	  stw       r0, 0x14(r1)
	  cmplwi    r3, 0
	  bne-      .loc_0x20
	  li        r3, 0
	  b         .loc_0x48

	.loc_0x20:
	  lwz       r3, 0x70(r3)
	  cmplwi    r3, 0
	  bne-      .loc_0x34
	  li        r3, 0
	  b         .loc_0x48

	.loc_0x34:
	  lwz       r12, 0x0(r3)
	  rlwinm    r4,r4,0,24,31
	  lwz       r12, 0xA0(r12)
	  mtctr     r12
	  bctrl

	.loc_0x48:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80058150
 * Size:	000020
 */
void J2DPictureEx::getTextureCount() const
{
	/*
	.loc_0x0:
	  lwz       r3, 0x168(r3)
	  cmplwi    r3, 0
	  bne-      .loc_0x14
	  li        r3, 0
	  blr

	.loc_0x14:
	  lwz       r0, 0x28(r3)
	  rlwinm    r3,r0,0,24,31
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80058170
 * Size:	000088
 */
void J2DPictureEx::setBlack(JUtility::TColor)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  li        r0, -0x1
	  addi      r5, r1, 0x10
	  stw       r31, 0x1C(r1)
	  mr        r31, r4
	  addi      r4, r1, 0x14
	  stw       r30, 0x18(r1)
	  mr        r30, r3
	  stw       r0, 0x14(r1)
	  stw       r0, 0x10(r1)
	  bl        0x534
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x44
	  li        r3, 0
	  b         .loc_0x70

	.loc_0x44:
	  lwz       r5, 0x10(r1)
	  mr        r3, r30
	  lwz       r0, 0x0(r31)
	  addi      r4, r1, 0xC
	  stw       r5, 0x8(r1)
	  addi      r5, r1, 0x8
	  stw       r0, 0xC(r1)
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x130(r12)
	  mtctr     r12
	  bctrl

	.loc_0x70:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800581F8
 * Size:	000088
 */
void J2DPictureEx::setWhite(JUtility::TColor)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  li        r0, -0x1
	  addi      r5, r1, 0x10
	  stw       r31, 0x1C(r1)
	  mr        r31, r4
	  addi      r4, r1, 0x14
	  stw       r30, 0x18(r1)
	  mr        r30, r3
	  stw       r0, 0x14(r1)
	  stw       r0, 0x10(r1)
	  bl        0x4AC
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x44
	  li        r3, 0
	  b         .loc_0x70

	.loc_0x44:
	  lwz       r5, 0x0(r31)
	  mr        r3, r30
	  lwz       r0, 0x14(r1)
	  addi      r4, r1, 0xC
	  stw       r5, 0x8(r1)
	  addi      r5, r1, 0x8
	  stw       r0, 0xC(r1)
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x130(r12)
	  mtctr     r12
	  bctrl

	.loc_0x70:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80058280
 * Size:	000454
 */
void J2DPictureEx::setBlackWhite(JUtility::TColor, JUtility::TColor)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x70(r1)
	  mflr      r0
	  stw       r0, 0x74(r1)
	  stmw      r23, 0x4C(r1)
	  mr        r27, r4
	  mr        r26, r3
	  mr        r28, r5
	  lwz       r4, 0x168(r3)
	  cmplwi    r4, 0
	  bne-      .loc_0x30
	  li        r3, 0
	  b         .loc_0x440

	.loc_0x30:
	  lwz       r0, 0x70(r4)
	  cmplwi    r0, 0
	  bne-      .loc_0x44
	  li        r3, 0
	  b         .loc_0x440

	.loc_0x44:
	  lwz       r6, 0x0(r28)
	  addi      r4, r1, 0x14
	  lwz       r0, 0x0(r27)
	  addi      r5, r1, 0x10
	  stw       r6, 0x10(r1)
	  stw       r0, 0x14(r1)
	  bl        0x5BC
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x70
	  li        r3, 0
	  b         .loc_0x440

	.loc_0x70:
	  lwz       r4, 0x168(r26)
	  li        r31, 0x1
	  lwz       r0, 0x0(r27)
	  lwz       r3, 0x28(r4)
	  cmplwi    r0, 0
	  rlwinm    r30,r3,0,24,31
	  bne-      .loc_0xA0
	  lwz       r3, 0x0(r28)
	  addis     r0, r3, 0x1
	  cmplwi    r0, 0xFFFF
	  bne-      .loc_0xA0
	  li        r31, 0

	.loc_0xA0:
	  cmplwi    r30, 0x1
	  bne-      .loc_0xC4
	  rlwinm    r3,r31,0,24,31
	  neg       r0, r3
	  or        r0, r0, r3
	  rlwinm    r3,r0,1,31,31
	  addi      r0, r3, 0x1
	  rlwinm    r29,r0,0,24,31
	  b         .loc_0xE0

	.loc_0xC4:
	  rlwinm    r3,r31,0,24,31
	  neg       r0, r3
	  or        r0, r0, r3
	  rlwinm    r3,r0,1,31,31
	  addi      r0, r3, 0x1
	  add       r0, r30, r0
	  rlwinm    r29,r0,0,24,31

	.loc_0xE0:
	  lwz       r3, 0x70(r4)
	  mr        r4, r29
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x54(r12)
	  mtctr     r12
	  bctrl
	  cmplwi    r30, 0x1
	  bne-      .loc_0x12C
	  rlwinm.   r0,r31,0,24,31
	  bne-      .loc_0x114
	  li        r0, 0x4
	  sth       r0, 0x28(r1)
	  b         .loc_0x24C

	.loc_0x114:
	  lis       r3, 0x1
	  li        r4, 0xFF
	  subi      r0, r3, 0xFC
	  sth       r4, 0x28(r1)
	  sth       r0, 0x2A(r1)
	  b         .loc_0x24C

	.loc_0x12C:
	  cmplwi    r30, 0
	  li        r3, 0
	  ble-      .loc_0x20C
	  cmplwi    r30, 0x8
	  subi      r0, r30, 0x8
	  ble-      .loc_0x1E4
	  rlwinm    r0,r0,0,24,31
	  b         .loc_0x1D8

	.loc_0x14C:
	  rlwinm    r6,r3,8,16,23
	  rlwinm    r7,r3,1,23,30
	  addi      r4, r1, 0x28
	  addi      r5, r3, 0x1
	  ori       r8, r6, 0xFF
	  addi      r6, r3, 0x2
	  add       r4, r4, r7
	  rlwinm    r5,r5,8,16,23
	  ori       r7, r5, 0xFF
	  sth       r8, 0x0(r4)
	  rlwinm    r6,r6,8,16,23
	  addi      r5, r3, 0x3
	  ori       r8, r6, 0xFF
	  sth       r7, 0x2(r4)
	  rlwinm    r5,r5,8,16,23
	  addi      r6, r3, 0x4
	  ori       r7, r5, 0xFF
	  sth       r8, 0x4(r4)
	  rlwinm    r6,r6,8,16,23
	  addi      r5, r3, 0x5
	  ori       r8, r6, 0xFF
	  sth       r7, 0x6(r4)
	  rlwinm    r5,r5,8,16,23
	  addi      r6, r3, 0x6
	  ori       r7, r5, 0xFF
	  sth       r8, 0x8(r4)
	  addi      r5, r3, 0x7
	  rlwinm    r6,r6,8,16,23
	  rlwinm    r5,r5,8,16,23
	  sth       r7, 0xA(r4)
	  ori       r6, r6, 0xFF
	  addi      r3, r3, 0x8
	  sth       r6, 0xC(r4)
	  ori       r5, r5, 0xFF
	  sth       r5, 0xE(r4)

	.loc_0x1D8:
	  rlwinm    r4,r3,0,24,31
	  cmplw     r4, r0
	  blt+      .loc_0x14C

	.loc_0x1E4:
	  addi      r4, r1, 0x28
	  b         .loc_0x200

	.loc_0x1EC:
	  rlwinm    r5,r3,8,16,23
	  rlwinm    r0,r3,1,23,30
	  ori       r5, r5, 0xFF
	  addi      r3, r3, 0x1
	  sthx      r5, r4, r0

	.loc_0x200:
	  rlwinm    r0,r3,0,24,31
	  cmplw     r0, r30
	  blt+      .loc_0x1EC

	.loc_0x20C:
	  rlwinm.   r0,r31,0,24,31
	  bne-      .loc_0x22C
	  lis       r3, 0x1
	  rlwinm    r0,r30,1,23,30
	  subi      r4, r3, 0xFC
	  addi      r3, r1, 0x28
	  sthx      r4, r3, r0
	  b         .loc_0x24C

	.loc_0x22C:
	  lis       r5, 0x1
	  rlwinm    r4,r30,1,23,30
	  subi      r0, r5, 0x1
	  addi      r3, r1, 0x28
	  sthx      r0, r3, r4
	  subi      r0, r5, 0xFC
	  addi      r3, r1, 0x2A
	  sthx      r0, r3, r4

	.loc_0x24C:
	  addi      r23, r1, 0x28
	  rlwinm    r25,r29,0,24,31
	  li        r24, 0
	  b         .loc_0x2A0

	.loc_0x25C:
	  rlwinm    r0,r24,1,23,30
	  rlwinm    r4,r24,0,24,31
	  lhzx      r0, r23, r0
	  addi      r5, r1, 0xC
	  srawi     r3, r0, 0x8
	  stb       r0, 0xA(r1)
	  stb       r3, 0x8(r1)
	  stb       r3, 0x9(r1)
	  lwz       r0, 0x8(r1)
	  stw       r0, 0xC(r1)
	  lwz       r3, 0x168(r26)
	  lwz       r3, 0x70(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  addi      r24, r24, 0x1

	.loc_0x2A0:
	  rlwinm    r0,r24,0,24,31
	  cmplw     r0, r25
	  blt+      .loc_0x25C
	  mr        r3, r26
	  mr        r4, r30
	  mr        r5, r29
	  mr        r6, r31
	  bl        -0x152C
	  mr        r3, r26
	  mr        r4, r30
	  bl        -0xF7C
	  li        r24, 0
	  b         .loc_0x334

	.loc_0x2D4:
	  rlwinm    r4,r24,0,24,31
	  cmplwi    r4, 0x4
	  bge-      .loc_0x308
	  lwz       r3, 0x168(r26)
	  rlwinm    r0,r24,2,22,29
	  subfic    r0, r0, 0x1F
	  lwz       r3, 0x70(r3)
	  rlwinm    r5,r0,0,24,31
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x44(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x330

	.loc_0x308:
	  lwz       r3, 0x168(r26)
	  subi      r0, r4, 0x4
	  rlwinm    r0,r0,2,0,29
	  lwz       r3, 0x70(r3)
	  subfic    r0, r0, 0x1E
	  rlwinm    r5,r0,0,24,31
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x44(r12)
	  mtctr     r12
	  bctrl

	.loc_0x330:
	  addi      r24, r24, 0x1

	.loc_0x334:
	  rlwinm    r0,r24,0,24,31
	  cmplw     r0, r30
	  blt+      .loc_0x2D4
	  li        r24, 0
	  b         .loc_0x3A8

	.loc_0x348:
	  rlwinm    r4,r24,0,24,31
	  cmplwi    r4, 0x4
	  bge-      .loc_0x37C
	  lwz       r3, 0x168(r26)
	  rlwinm    r0,r24,2,22,29
	  subfic    r0, r0, 0x1D
	  lwz       r3, 0x70(r3)
	  rlwinm    r5,r0,0,24,31
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x4C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x3A4

	.loc_0x37C:
	  lwz       r3, 0x168(r26)
	  subi      r0, r4, 0x4
	  rlwinm    r0,r0,2,0,29
	  lwz       r3, 0x70(r3)
	  subfic    r0, r0, 0x1C
	  rlwinm    r5,r0,0,24,31
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x4C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x3A4:
	  addi      r24, r24, 0x1

	.loc_0x3A8:
	  rlwinm    r0,r24,0,24,31
	  cmplw     r0, r30
	  blt+      .loc_0x348
	  rlwinm.   r0,r31,0,24,31
	  beq-      .loc_0x43C
	  lbz       r3, 0x1(r27)
	  addi      r5, r1, 0x20
	  lbz       r6, 0x2(r27)
	  li        r4, 0
	  lbz       r7, 0x3(r27)
	  lbz       r0, 0x0(r27)
	  sth       r3, 0x22(r1)
	  sth       r0, 0x20(r1)
	  sth       r6, 0x24(r1)
	  sth       r7, 0x26(r1)
	  lwz       r3, 0x168(r26)
	  lwz       r3, 0x70(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x34(r12)
	  mtctr     r12
	  bctrl
	  lbz       r3, 0x1(r28)
	  addi      r5, r1, 0x18
	  lbz       r6, 0x2(r28)
	  li        r4, 0x1
	  lbz       r7, 0x3(r28)
	  lbz       r0, 0x0(r28)
	  sth       r3, 0x1A(r1)
	  sth       r0, 0x18(r1)
	  sth       r6, 0x1C(r1)
	  sth       r7, 0x1E(r1)
	  lwz       r3, 0x168(r26)
	  lwz       r3, 0x70(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x34(r12)
	  mtctr     r12
	  bctrl

	.loc_0x43C:
	  li        r3, 0x1

	.loc_0x440:
	  lmw       r23, 0x4C(r1)
	  lwz       r0, 0x74(r1)
	  mtlr      r0
	  addi      r1, r1, 0x70
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800586D4
 * Size:	0001C4
 */
void J2DPictureEx::getBlackWhite(JUtility::TColor*, JUtility::TColor*) const
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stmw      r26, 0x18(r1)
	  mr        r30, r4
	  lwz       r4, 0x168(r3)
	  mr        r29, r3
	  mr        r31, r5
	  cmplwi    r4, 0
	  bne-      .loc_0x30
	  li        r3, 0
	  b         .loc_0x1B0

	.loc_0x30:
	  lwz       r3, 0x70(r4)
	  cmplwi    r3, 0
	  bne-      .loc_0x44
	  li        r3, 0
	  b         .loc_0x1B0

	.loc_0x44:
	  lwz       r12, 0x0(r3)
	  lwz       r0, 0x28(r4)
	  lwz       r12, 0x58(r12)
	  rlwinm    r26,r0,0,24,31
	  mtctr     r12
	  bctrl
	  cmplwi    r26, 0x1
	  bne-      .loc_0x7C
	  rlwinm    r4,r3,0,24,31
	  subfic    r3, r4, 0x1
	  subi      r0, r4, 0x1
	  or        r0, r3, r0
	  rlwinm    r4,r0,1,31,31
	  b         .loc_0x94

	.loc_0x7C:
	  rlwinm    r4,r3,0,24,31
	  addi      r0, r26, 0x1
	  sub       r3, r0, r4
	  sub       r0, r4, r0
	  or        r0, r3, r0
	  rlwinm    r4,r0,1,31,31

	.loc_0x94:
	  li        r0, 0
	  li        r3, -0x1
	  stw       r0, 0x14(r1)
	  rlwinm.   r0,r4,0,24,31
	  lbz       r4, 0x14(r1)
	  stw       r3, 0x10(r1)
	  lbz       r0, 0x15(r1)
	  stb       r4, 0x0(r30)
	  lbz       r3, 0x16(r1)
	  stb       r0, 0x1(r30)
	  lbz       r0, 0x17(r1)
	  stb       r3, 0x2(r30)
	  lbz       r3, 0x10(r1)
	  stb       r0, 0x3(r30)
	  lbz       r0, 0x11(r1)
	  stb       r3, 0x0(r31)
	  lbz       r3, 0x12(r1)
	  stb       r0, 0x1(r31)
	  lbz       r0, 0x13(r1)
	  stb       r3, 0x2(r31)
	  stb       r0, 0x3(r31)
	  beq-      .loc_0x1AC
	  lwz       r3, 0x168(r29)
	  li        r4, 0
	  lwz       r3, 0x70(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x38(r12)
	  mtctr     r12
	  bctrl
	  lwz       r5, 0x168(r29)
	  li        r4, 0x1
	  lha       r29, 0x0(r3)
	  lha       r28, 0x2(r3)
	  lha       r27, 0x4(r3)
	  lha       r26, 0x6(r3)
	  lwz       r3, 0x70(r5)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x38(r12)
	  mtctr     r12
	  bctrl
	  rlwinm    r4,r28,16,8,15
	  lha       r0, 0x2(r3)
	  rlwimi    r4,r29,24,0,7
	  lha       r5, 0x0(r3)
	  rlwimi    r4,r27,8,16,23
	  rlwinm    r0,r0,16,8,15
	  rlwimi    r4,r26,0,24,31
	  lha       r6, 0x4(r3)
	  stw       r4, 0xC(r1)
	  rlwimi    r0,r5,24,0,7
	  lha       r7, 0x6(r3)
	  rlwimi    r0,r6,8,16,23
	  lbz       r3, 0xC(r1)
	  lbz       r5, 0xD(r1)
	  rlwimi    r0,r7,0,24,31
	  stb       r3, 0x0(r30)
	  lbz       r4, 0xE(r1)
	  stb       r5, 0x1(r30)
	  lbz       r3, 0xF(r1)
	  stw       r0, 0x8(r1)
	  stb       r4, 0x2(r30)
	  lbz       r0, 0x8(r1)
	  stb       r3, 0x3(r30)
	  lbz       r4, 0x9(r1)
	  stb       r0, 0x0(r31)
	  lbz       r3, 0xA(r1)
	  stb       r4, 0x1(r31)
	  lbz       r0, 0xB(r1)
	  stb       r3, 0x2(r31)
	  stb       r0, 0x3(r31)

	.loc_0x1AC:
	  li        r3, 0x1

	.loc_0x1B0:
	  lmw       r26, 0x18(r1)
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80058898
 * Size:	0000DC
 */
void J2DPictureEx::isSetBlackWhite(JUtility::TColor, JUtility::TColor) const
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r0, 0x0(r4)
	  stw       r31, 0xC(r1)
	  cmplwi    r0, 0
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  bne-      .loc_0x3C
	  lwz       r3, 0x0(r5)
	  addis     r0, r3, 0x1
	  cmplwi    r0, 0xFFFF
	  bne-      .loc_0x3C
	  li        r3, 0x1
	  b         .loc_0xC4

	.loc_0x3C:
	  lwz       r4, 0x168(r30)
	  lwz       r3, 0x70(r4)
	  lwz       r0, 0x28(r4)
	  lwz       r12, 0x0(r3)
	  rlwinm    r31,r0,0,24,31
	  lwz       r12, 0x58(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x168(r30)
	  lwz       r3, 0x70(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  rlwinm    r0,r3,0,24,31
	  cmplwi    r0, 0x10
	  bne-      .loc_0x88
	  li        r3, 0x1
	  b         .loc_0xC4

	.loc_0x88:
	  cmplwi    r0, 0x1
	  bne-      .loc_0x98
	  li        r3, 0
	  b         .loc_0xC4

	.loc_0x98:
	  cmplwi    r31, 0x1
	  li        r0, 0x2
	  beq-      .loc_0xA8
	  addi      r0, r31, 0x2

	.loc_0xA8:
	  rlwinm    r4,r0,0,24,31
	  rlwinm    r3,r3,0,24,31
	  sub       r0, r3, r4
	  orc       r3, r3, r4
	  rlwinm    r0,r0,31,1,31
	  sub       r0, r3, r0
	  rlwinm    r3,r0,1,31,31

	.loc_0xC4:
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
 * Address:	80058974
 * Size:	000060
 */
void J2DPictureEx::getBlack() const
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  li        r0, -0x1
	  addi      r5, r1, 0x8
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  mr        r3, r4
	  addi      r4, r1, 0xC
	  stw       r0, 0xC(r1)
	  stw       r0, 0x8(r1)
	  bl        -0x2CC
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x44
	  li        r0, 0
	  stw       r0, 0x0(r31)
	  b         .loc_0x4C

	.loc_0x44:
	  lwz       r0, 0xC(r1)
	  stw       r0, 0x0(r31)

	.loc_0x4C:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800589D4
 * Size:	000060
 */
void J2DPictureEx::getWhite() const
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  li        r0, -0x1
	  addi      r5, r1, 0x8
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  mr        r3, r4
	  addi      r4, r1, 0xC
	  stw       r0, 0xC(r1)
	  stw       r0, 0x8(r1)
	  bl        -0x32C
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x44
	  li        r0, -0x1
	  stw       r0, 0x0(r31)
	  b         .loc_0x4C

	.loc_0x44:
	  lwz       r0, 0x8(r1)
	  stw       r0, 0x0(r31)

	.loc_0x4C:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80058A34
 * Size:	000020
 */
void J2DPictureEx::setAlpha(unsigned char)
{
	/*
	.loc_0x0:
	  stb       r4, 0xB2(r3)
	  lwz       r3, 0x168(r3)
	  cmplwi    r3, 0
	  beqlr-
	  addic.    r3, r3, 0x10
	  beqlr-
	  stb       r4, 0x3(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80058A54
 * Size:	000034
 */
void J2DPictureEx::setCullBack(_GXCullMode)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stb       r4, 0xB1(r3)
	  lwz       r5, 0x168(r3)
	  cmplwi    r5, 0
	  beq-      .loc_0x20
	  stb       r4, 0x22(r5)

	.loc_0x20:
	  bl        -0x1FE30
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80058A88
 * Size:	000018
 */
void J2DPictureEx::rewriteAlpha()
{
	/*
	.loc_0x0:
	  lwz       r4, 0x168(r3)
	  cmplwi    r4, 0
	  beqlr-
	  lbz       r0, 0x13(r4)
	  stb       r0, 0xB2(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80058AA0
 * Size:	0000A8
 */
void J2DPictureEx::isUsed(const ResTIMG*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  mr        r30, r4
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  lwz       r3, 0x168(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x80
	  lwz       r0, 0x70(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x80
	  li        r31, 0

	.loc_0x3C:
	  lwz       r3, 0x168(r29)
	  mr        r4, r31
	  lwz       r3, 0x70(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xA0(r12)
	  mtctr     r12
	  bctrl
	  cmplwi    r3, 0
	  beq-      .loc_0x74
	  lwz       r0, 0x20(r3)
	  cmplw     r0, r30
	  bne-      .loc_0x74
	  li        r3, 0x1
	  b         .loc_0x8C

	.loc_0x74:
	  addi      r31, r31, 0x1
	  cmplwi    r31, 0x8
	  blt+      .loc_0x3C

	.loc_0x80:
	  mr        r3, r29
	  mr        r4, r30
	  bl        -0x20134

	.loc_0x8C:
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
 * Address:	80058B48
 * Size:	00002C
 */
void J2DPictureEx::setAnimation(J2DAnmColor*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x168(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x1C
	  bl        -0x63D0

	.loc_0x1C:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80058B74
 * Size:	00002C
 */
void J2DPictureEx::setAnimation(J2DAnmTextureSRTKey*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x168(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x1C
	  bl        -0x62B8

	.loc_0x1C:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80058BA0
 * Size:	00002C
 */
void J2DPictureEx::setAnimation(J2DAnmTexPattern*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x168(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x1C
	  bl        -0x6140

	.loc_0x1C:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80058BCC
 * Size:	00002C
 */
void J2DPictureEx::setAnimation(J2DAnmTevRegKey*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x168(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x1C
	  bl        -0x5FD8

	.loc_0x1C:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80058BF8
 * Size:	000008
 */
void J2DPictureEx::setAnimation(J2DAnmVisibilityFull*)
{
	/*
	.loc_0x0:
	  stw       r4, 0x19C(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80058C00
 * Size:	0000E0
 */
void J2DPictureEx::setAnimation(J2DAnmVtxColor*)
{
	/*
	.loc_0x0:
	  stw       r4, 0x1A0(r3)
	  li        r0, 0
	  cmplwi    r4, 0
	  stb       r0, 0x1A4(r3)
	  beq-      .loc_0xC8
	  lhz       r7, 0x10(r4)
	  li        r9, 0
	  b         .loc_0xBC

	.loc_0x20:
	  rlwinm    r5,r9,1,23,30
	  addi      r8, r5, 0x170
	  lhzx      r0, r3, r8
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0xB8
	  li        r10, 0
	  b         .loc_0xAC

	.loc_0x3C:
	  lwz       r6, 0x14(r4)
	  rlwinm    r0,r10,3,13,28
	  lwz       r5, 0x1C(r4)
	  li        r12, 0
	  add       r6, r6, r0
	  lwz       r0, 0x4(r6)
	  lhz       r6, 0x0(r6)
	  rlwinm    r0,r0,1,0,30
	  add       r11, r5, r0
	  b         .loc_0x9C

	.loc_0x64:
	  rlwinm    r0,r12,1,15,30
	  lhzx      r5, r3, r8
	  lhzx      r0, r11, r0
	  cmplw     r5, r0
	  bne-      .loc_0x98
	  stw       r4, 0x1A0(r3)
	  rlwinm    r0,r9,0,24,31
	  li        r5, 0x1
	  lbz       r6, 0x1A4(r3)
	  slw       r0, r5, r0
	  or        r0, r6, r0
	  stb       r0, 0x1A4(r3)
	  b         .loc_0xB8

	.loc_0x98:
	  addi      r12, r12, 0x1

	.loc_0x9C:
	  rlwinm    r0,r12,0,16,31
	  cmplw     r0, r6
	  blt+      .loc_0x64
	  addi      r10, r10, 0x1

	.loc_0xAC:
	  rlwinm    r0,r10,0,16,31
	  cmplw     r0, r7
	  blt+      .loc_0x3C

	.loc_0xB8:
	  addi      r9, r9, 0x1

	.loc_0xBC:
	  rlwinm    r0,r9,0,24,31
	  cmplwi    r0, 0x4
	  blt+      .loc_0x20

	.loc_0xC8:
	  lbz       r0, 0x1A4(r3)
	  cmplwi    r0, 0
	  bnelr-
	  li        r0, 0
	  stw       r0, 0x1A0(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80058CE0
 * Size:	000164
 */
void J2DPictureEx::animationPane(const J2DAnmTransform*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  mr        r29, r4
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  lwz       r3, 0x19C(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x64
	  lhz       r4, 0x16C(r28)
	  cmplwi    r4, 0xFFFF
	  beq-      .loc_0x64
	  addi      r5, r1, 0x8
	  bl        0x3E08
	  lbz       r0, 0x8(r1)
	  cmplwi    r0, 0
	  beq-      .loc_0x5C
	  li        r0, 0x1
	  stb       r0, 0xB0(r28)
	  b         .loc_0x64

	.loc_0x5C:
	  li        r0, 0
	  stb       r0, 0xB0(r28)

	.loc_0x64:
	  lwz       r3, 0x1A0(r28)
	  cmplwi    r3, 0
	  beq-      .loc_0x138
	  lhz       r31, 0x10(r3)
	  li        r30, 0
	  b         .loc_0x12C

	.loc_0x7C:
	  rlwinm    r7,r30,0,24,31
	  li        r0, 0x1
	  lbz       r3, 0x1A4(r28)
	  slw       r0, r0, r7
	  and.      r0, r3, r0
	  beq-      .loc_0x128
	  rlwinm    r3,r30,1,23,30
	  li        r5, 0
	  addi      r8, r3, 0x170
	  b         .loc_0x11C

	.loc_0xA4:
	  lwz       r3, 0x1A0(r28)
	  rlwinm    r0,r5,3,13,28
	  li        r10, 0
	  lwz       r6, 0x14(r3)
	  lwz       r4, 0x1C(r3)
	  add       r6, r6, r0
	  lwz       r0, 0x4(r6)
	  lhz       r6, 0x0(r6)
	  rlwinm    r0,r0,1,0,30
	  add       r9, r4, r0
	  b         .loc_0x10C

	.loc_0xD0:
	  rlwinm    r0,r10,1,15,30
	  lhzx      r4, r28, r8
	  lhzx      r0, r9, r0
	  cmplw     r4, r0
	  bne-      .loc_0x108
	  lwz       r12, 0x0(r3)
	  rlwinm    r4,r7,2,0,29
	  addi      r6, r4, 0x150
	  lwz       r12, 0x10(r12)
	  li        r4, 0
	  add       r6, r28, r6
	  mtctr     r12
	  bctrl
	  b         .loc_0x128

	.loc_0x108:
	  addi      r10, r10, 0x1

	.loc_0x10C:
	  rlwinm    r0,r10,0,16,31
	  cmplw     r0, r6
	  blt+      .loc_0xD0
	  addi      r5, r5, 0x1

	.loc_0x11C:
	  rlwinm    r0,r5,0,16,31
	  cmplw     r0, r31
	  blt+      .loc_0xA4

	.loc_0x128:
	  addi      r30, r30, 0x1

	.loc_0x12C:
	  rlwinm    r0,r30,0,24,31
	  cmplwi    r0, 0x4
	  blt+      .loc_0x7C

	.loc_0x138:
	  mr        r3, r28
	  mr        r4, r29
	  bl        -0x1F568
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
 * Address:	80058E44
 * Size:	000104
 */
void J2DPictureEx::getUsableTlut(unsigned char)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stmw      r27, 0xC(r1)
	  mr        r27, r3
	  rlwinm    r31,r4,0,24,31
	  li        r29, 0
	  li        r28, 0
	  lwz       r3, 0x168(r3)
	  lwz       r30, 0x28(r3)
	  b         .loc_0xAC

	.loc_0x2C:
	  lwz       r3, 0x168(r27)
	  rlwinm    r4,r28,0,24,31
	  lwz       r3, 0x70(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xA0(r12)
	  mtctr     r12
	  bctrl
	  rlwinm    r0,r28,0,24,31
	  cmplw     r0, r31
	  beq-      .loc_0xA8
	  cmplwi    r3, 0
	  beq-      .loc_0xA8
	  lwz       r4, 0x20(r3)
	  cmplwi    r4, 0
	  beq-      .loc_0xA8
	  lbz       r0, 0x8(r4)
	  cmplwi    r0, 0
	  beq-      .loc_0xA8
	  lbz       r3, 0x3A(r3)
	  li        r0, 0
	  cmpwi     r3, 0x10
	  blt-      .loc_0x88
	  li        r0, 0x10

	.loc_0x88:
	  sub       r0, r3, r0
	  rlwinm    r3,r0,0,24,31
	  cmplwi    r3, 0x8
	  bge-      .loc_0xA8
	  li        r0, 0x1
	  slw       r0, r0, r3
	  or        r0, r29, r0
	  rlwinm    r29,r0,0,24,31

	.loc_0xA8:
	  addi      r28, r28, 0x1

	.loc_0xAC:
	  rlwinm    r0,r28,0,24,31
	  cmplw     r0, r30
	  blt+      .loc_0x2C
	  rlwinm    r5,r29,0,24,31
	  li        r3, 0
	  li        r4, 0x1
	  b         .loc_0xE0

	.loc_0xC8:
	  rlwinm    r0,r3,0,24,31
	  slw       r0, r4, r0
	  and.      r0, r5, r0
	  bne-      .loc_0xDC
	  b         .loc_0xF0

	.loc_0xDC:
	  addi      r3, r3, 0x1

	.loc_0xE0:
	  rlwinm    r0,r3,0,24,31
	  cmplwi    r0, 0x8
	  blt+      .loc_0xC8
	  li        r3, 0

	.loc_0xF0:
	  lmw       r27, 0xC(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80058F48
 * Size:	000008
 */
void J2DPictureEx::getMaterial() const
{
	/*
	.loc_0x0:
	  lwz       r3, 0x168(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80058F50
 * Size:	000030
 */
void J2DPictureEx::prepend(JUTTexture*, float)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r5, 0
	  stw       r0, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xD4(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80058F80
 * Size:	000030
 */
void J2DPictureEx::prepend(const char*, JUTPalette*, float)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r6, 0
	  stw       r0, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xD0(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80058FB0
 * Size:	000030
 */
void J2DPictureEx::prepend(const char*, float)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r5, 0
	  stw       r0, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xCC(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80058FE0
 * Size:	000030
 */
void J2DPictureEx::prepend(const ResTIMG*, JUTPalette*, float)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r6, 0
	  stw       r0, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80059010
 * Size:	000030
 */
void J2DPictureEx::prepend(const ResTIMG*, float)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r5, 0
	  stw       r0, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC4(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80059040
 * Size:	000034
 */
void J2DPictureEx::insert(const char*, unsigned char, float)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r6, r5
	  li        r5, 0
	  stw       r0, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xD0(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80059074
 * Size:	000034
 */
void J2DPictureEx::insert(const ResTIMG*, unsigned char, float)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r6, r5
	  li        r5, 0
	  stw       r0, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800590A8
 * Size:	000040
 */
void J2DPictureEx::draw(float, float, bool, bool, bool)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r7, r6
	  stw       r0, 0x14(r1)
	  mr        r0, r5
	  mr        r5, r4
	  li        r4, 0
	  lwz       r12, 0x0(r3)
	  mr        r6, r0
	  lwz       r12, 0xE8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800590E8
 * Size:	000064
 */
void J2DPictureEx::drawOut(float, float, float, float, float, float, float,
                           float)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  fadds     f7, f5, f7
	  stw       r0, 0x34(r1)
	  fadds     f3, f1, f3
	  fadds     f0, f2, f4
	  addi      r4, r1, 0x18
	  stfs      f5, 0x8(r1)
	  fadds     f5, f6, f8
	  addi      r5, r1, 0x8
	  stfs      f6, 0xC(r1)
	  stfs      f7, 0x10(r1)
	  stfs      f5, 0x14(r1)
	  stfs      f1, 0x18(r1)
	  stfs      f2, 0x1C(r1)
	  stfs      f3, 0x20(r1)
	  stfs      f0, 0x24(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xF8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8005914C
 * Size:	000034
 */
void J2DPictureEx::load(unsigned char)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r5, r4
	  rlwinm    r4,r4,0,24,31
	  stw       r0, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xFC(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80059180
 * Size:	00003C
 */
void J2DPictureEx::setCullBack(bool)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  rlwinm.   r0,r4,0,24,31
	  li        r4, 0
	  beq-      .loc_0x1C
	  li        r4, 0x2

	.loc_0x1C:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800591BC
 * Size:	000020
 */
void J2DPictureEx::isUsed(const ResFONT*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        -0x2074C
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800591DC
 * Size:	000020
 */
void J2DPictureEx::setAnimation(J2DAnmTransform*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        -0x1FBF4
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800591FC
 * Size:	000020
 */
void J2DPictureEx::setAnimation(J2DAnmBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        -0x1FCFC
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}
