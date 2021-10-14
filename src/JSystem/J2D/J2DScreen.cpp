

/*
 * --INFO--
 * Address:	8003F474
 * Size:	0000A8
 */
void J2DScreen::J2DScreen()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  lfs       f2, -0x7B20(r2)
	  lis       r4, 0x726F
	  stw       r0, 0x34(r1)
	  addi      r8, r4, 0x6F74
	  lfs       f1, -0x7B1C(r2)
	  addi      r9, r1, 0x10
	  stw       r31, 0x2C(r1)
	  mr        r31, r3
	  lfs       f0, -0x7B18(r2)
	  li        r4, 0
	  stfs      f2, 0x8(r1)
	  li        r5, 0x1
	  li        r7, 0
	  stfs      f2, 0xC(r1)
	  stfs      f2, 0x10(r1)
	  stfs      f2, 0x14(r1)
	  stfs      f1, 0x18(r1)
	  stfs      f0, 0x1C(r1)
	  bl        -0x8810
	  lis       r4, 0x804A
	  lis       r3, 0x1
	  addi      r0, r4, 0x8F0
	  li        r5, -0x1
	  stw       r0, 0x0(r31)
	  subi      r4, r3, 0x1
	  li        r0, 0
	  mr        r3, r31
	  stw       r5, 0x114(r31)
	  sth       r4, 0x4(r31)
	  stb       r0, 0x100(r31)
	  sth       r0, 0x102(r31)
	  stw       r0, 0x104(r31)
	  stw       r0, 0x108(r31)
	  stw       r0, 0x10C(r31)
	  stw       r0, 0x110(r31)
	  lwz       r31, 0x2C(r1)
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8003F51C
 * Size:	000068
 */
void J2DScreen::~J2DScreen()
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
	  lis       r4, 0x804A
	  addi      r0, r4, 0x8F0
	  stw       r0, 0x0(r30)
	  bl        .loc_0x68
	  mr        r3, r30
	  li        r4, 0
	  bl        -0x7F70
	  extsh.    r0, r31
	  ble-      .loc_0x4C
	  mr        r3, r30
	  bl        -0x1B4B0

	.loc_0x4C:
	  lwz       r0, 0x14(r1)
	  mr        r3, r30
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr

	.loc_0x68:
	*/
}

/*
 * --INFO--
 * Address:	8003F584
 * Size:	0000A0
 */
void J2DScreen::clean()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lis       r3, 0x8005
	  addi      r4, r3, 0x2188
	  lwz       r3, 0x104(r31)
	  bl        0x821A4
	  li        r0, 0
	  sth       r0, 0x102(r31)
	  stw       r0, 0x104(r31)
	  lwz       r3, 0x108(r31)
	  bl        -0x1B4E0
	  li        r0, 0
	  stw       r0, 0x108(r31)
	  lwz       r3, 0x10C(r31)
	  bl        -0x1B4F0
	  li        r0, 0
	  stw       r0, 0x10C(r31)
	  lwz       r3, 0x110(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x8C
	  lwz       r3, 0x4(r3)
	  bl        -0x1B50C
	  lwz       r3, 0x110(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x84
	  lwz       r12, 0x0(r3)
	  li        r4, 0x1
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl

	.loc_0x84:
	  li        r0, 0
	  stw       r0, 0x110(r31)

	.loc_0x8C:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8003F624
 * Size:	000104
 */
void J2DScreen::set(const char*, unsigned long, JKRArchive*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stw       r31, 0x2C(r1)
	  stw       r30, 0x28(r1)
	  mr        r30, r6
	  stw       r29, 0x24(r1)
	  mr        r29, r5
	  stw       r28, 0x20(r1)
	  mr        r28, r3
	  mr        r3, r4
	  mr        r4, r30
	  bl        -0x1C63C
	  mr.       r31, r3
	  beq-      .loc_0xE0
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  lis       r5, 0x804A
	  li        r6, 0
	  addi      r0, r5, 0x30
	  lis       r4, 0x804A
	  stw       r0, 0x8(r1)
	  addi      r0, r4, 0x64
	  lis       r5, 0x804A
	  lis       r4, 0x804A
	  stw       r0, 0x8(r1)
	  addi      r0, r5, 0x40
	  addi      r7, r1, 0x8
	  mr        r5, r3
	  stw       r0, 0x8(r1)
	  addi      r0, r4, 0x80
	  mr        r3, r7
	  mr        r4, r31
	  stb       r6, 0xC(r1)
	  stw       r0, 0x8(r1)
	  bl        -0x18964
	  mr        r3, r28
	  mr        r5, r29
	  addi      r4, r1, 0x8
	  bl        .loc_0x104
	  lis       r4, 0x804A
	  mr        r31, r3
	  addi      r0, r4, 0x80
	  addi      r3, r1, 0x8
	  lis       r4, 0x804A
	  stw       r0, 0x8(r1)
	  addi      r0, r4, 0x40
	  stw       r0, 0x8(r1)
	  li        r4, 0
	  bl        -0x19380
	  mr        r3, r31
	  b         .loc_0xE4

	.loc_0xE0:
	  li        r3, 0

	.loc_0xE4:
	  lwz       r0, 0x34(r1)
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  lwz       r29, 0x24(r1)
	  lwz       r28, 0x20(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr

	.loc_0x104:
	*/
}

/*
 * --INFO--
 * Address:	8003F728
 * Size:	000024
 */
void J2DScreen::set(JSURandomInputStream*, unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r6, 0
	  stw       r0, 0x14(r1)
	  bl        .loc_0x24
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr

	.loc_0x24:
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000114
 */
void J2DScreen::setPriority(const char*, unsigned long, JKRArchive*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000030
 */
void J2DScreen::setPriority(JSURandomInputStream*, unsigned long, JKRArchive*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8003F74C
 * Size:	000140
 */
void J2DScreen::private_set(JSURandomInputStream*, unsigned long, JKRArchive*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r4
	  stw       r30, 0x18(r1)
	  mr        r30, r3
	  stw       r29, 0x14(r1)
	  mr        r29, r6
	  stw       r28, 0x10(r1)
	  mr        r28, r5
	  bl        .loc_0x140
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x40
	  li        r3, 0
	  b         .loc_0x120

	.loc_0x40:
	  mr        r3, r30
	  mr        r4, r31
	  bl        0x158
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x5C
	  li        r3, 0
	  b         .loc_0x120

	.loc_0x5C:
	  mr        r3, r30
	  mr        r4, r30
	  mr        r5, r31
	  mr        r6, r28
	  mr        r7, r29
	  bl        0x22C
	  subfic    r4, r3, 0x2
	  subi      r3, r3, 0x2
	  or        r3, r4, r3
	  rlwinm.   r0,r28,0,11,15
	  rlwinm    r29,r3,1,31,31
	  bne-      .loc_0x104
	  lis       r4, 0x8005
	  lwz       r3, 0x104(r30)
	  addi      r4, r4, 0x2188
	  bl        0x81F64
	  li        r0, 0
	  sth       r0, 0x102(r30)
	  stw       r0, 0x104(r30)
	  lwz       r3, 0x108(r30)
	  bl        -0x1B720
	  li        r0, 0
	  stw       r0, 0x108(r30)
	  lwz       r3, 0x10C(r30)
	  bl        -0x1B730
	  li        r0, 0
	  stw       r0, 0x10C(r30)
	  lwz       r3, 0x110(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0x104
	  lwz       r3, 0x4(r3)
	  bl        -0x1B74C
	  lwz       r3, 0x110(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0xFC
	  lwz       r12, 0x0(r3)
	  li        r4, 0x1
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl

	.loc_0xFC:
	  li        r0, 0
	  stw       r0, 0x110(r30)

	.loc_0x104:
	  cmplwi    r29, 0
	  beq-      .loc_0x11C
	  lbz       r0, 0x4(r31)
	  cntlzw    r0, r0
	  rlwinm    r3,r0,27,5,31
	  b         .loc_0x120

	.loc_0x11C:
	  li        r3, 0

	.loc_0x120:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  lwz       r28, 0x10(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr

	.loc_0x140:
	*/
}

/*
 * --INFO--
 * Address:	8003F88C
 * Size:	000060
 */
void J2DScreen::checkSignature(JSURandomInputStream*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  mr        r3, r4
	  li        r5, 0x20
	  stw       r0, 0x34(r1)
	  addi      r4, r1, 0x8
	  bl        -0x194D0
	  lwz       r3, 0x8(r1)
	  subis     r0, r3, 0x5343
	  cmplwi    r0, 0x524E
	  bne-      .loc_0x44
	  lwz       r3, 0xC(r1)
	  subis     r0, r3, 0x626C
	  cmplwi    r0, 0x6F31
	  beq-      .loc_0x4C
	  cmplwi    r0, 0x6F32
	  beq-      .loc_0x4C

	.loc_0x44:
	  li        r3, 0
	  b         .loc_0x50

	.loc_0x4C:
	  li        r3, 0x1

	.loc_0x50:
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8003F8EC
 * Size:	0000FC
 */
void J2DScreen::getScreenInformation(JSURandomInputStream*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  mflr      r0
	  li        r5, 0x10
	  stw       r0, 0x54(r1)
	  stw       r31, 0x4C(r1)
	  mr        r31, r4
	  addi      r4, r1, 0x1C
	  stw       r30, 0x48(r1)
	  mr        r30, r3
	  mr        r3, r31
	  bl        -0x19540
	  lwz       r3, 0x1C(r1)
	  subis     r0, r3, 0x494E
	  cmplwi    r0, 0x4631
	  beq-      .loc_0x44
	  li        r3, 0
	  b         .loc_0xE4

	.loc_0x44:
	  lhz       r4, 0x24(r1)
	  lis       r5, 0x4330
	  lhz       r0, 0x26(r1)
	  mr        r3, r30
	  stw       r4, 0x34(r1)
	  addi      r4, r1, 0xC
	  lfs       f3, -0x7B20(r2)
	  stw       r5, 0x30(r1)
	  lfd       f2, -0x7B10(r2)
	  lfd       f0, 0x30(r1)
	  stw       r0, 0x3C(r1)
	  fsubs     f1, f0, f2
	  stw       r5, 0x38(r1)
	  lfd       f0, 0x38(r1)
	  stfs      f3, 0xC(r1)
	  fsubs     f0, f0, f2
	  stfs      f3, 0x10(r1)
	  stfs      f1, 0x14(r1)
	  stfs      f0, 0x18(r1)
	  bl        -0x7A44
	  lwz       r0, 0x28(r1)
	  stw       r0, 0x8(r1)
	  lbz       r3, 0x8(r1)
	  lbz       r0, 0x9(r1)
	  stb       r3, 0x114(r30)
	  lbz       r3, 0xA(r1)
	  stb       r0, 0x115(r30)
	  lbz       r0, 0xB(r1)
	  stb       r3, 0x116(r30)
	  stb       r0, 0x117(r30)
	  lwz       r4, 0x20(r1)
	  cmplwi    r4, 0x10
	  ble-      .loc_0xE0
	  mr        r3, r31
	  subi      r4, r4, 0x10
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl

	.loc_0xE0:
	  li        r3, 0x1

	.loc_0xE4:
	  lwz       r0, 0x54(r1)
	  lwz       r31, 0x4C(r1)
	  lwz       r30, 0x48(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8003F9E8
 * Size:	000560
 */
void J2DScreen::makeHierarchyPanes(J2DPane*, JSURandomInputStream*,
                                   unsigned long, JKRArchive*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  mflr      r0
	  stw       r0, 0x54(r1)
	  stmw      r21, 0x24(r1)
	  mr        r27, r4
	  lis       r4, 0x464E
	  mr        r28, r3
	  mr        r29, r5
	  mr        r30, r6
	  mr        r31, r7
	  mr        r25, r27
	  addi      r26, r4, 0x5431

	.loc_0x30:
	  mr        r3, r29
	  addi      r4, r1, 0x18
	  li        r5, 0x8
	  bl        -0x193D8
	  lwz       r4, 0x18(r1)
	  cmpw      r4, r26
	  beq-      .loc_0x49C
	  bge-      .loc_0x8C
	  lis       r3, 0x454E
	  addi      r0, r3, 0x4431
	  cmpw      r4, r0
	  beq-      .loc_0x460
	  bge-      .loc_0x78
	  lis       r3, 0x4247
	  addi      r0, r3, 0x4E31
	  cmpw      r4, r0
	  beq-      .loc_0xCC
	  b         .loc_0x4E4

	.loc_0x78:
	  lis       r3, 0x4558
	  addi      r0, r3, 0x5431
	  cmpw      r4, r0
	  beq-      .loc_0xB4
	  b         .loc_0x4E4

	.loc_0x8C:
	  lis       r3, 0x5445
	  addi      r0, r3, 0x5831
	  cmpw      r4, r0
	  beq-      .loc_0x478
	  bge-      .loc_0x4E4
	  lis       r3, 0x4D41
	  addi      r0, r3, 0x5431
	  cmpw      r4, r0
	  beq-      .loc_0x4C0
	  b         .loc_0x4E4

	.loc_0xB4:
	  lwz       r4, 0x1C(r1)
	  mr        r3, r29
	  li        r5, 0x1
	  bl        -0x193A0
	  li        r3, 0x1
	  b         .loc_0x54C

	.loc_0xCC:
	  lwz       r4, 0x1C(r1)
	  mr        r3, r29
	  li        r5, 0x1
	  bl        -0x193B8
	  lis       r3, 0x464E
	  mr        r22, r25
	  addi      r24, r3, 0x5431

	.loc_0xE8:
	  mr        r3, r29
	  addi      r4, r1, 0x10
	  li        r5, 0x8
	  bl        -0x19490
	  lwz       r4, 0x10(r1)
	  cmpw      r4, r24
	  beq-      .loc_0x3A4
	  bge-      .loc_0x144
	  lis       r3, 0x454E
	  addi      r0, r3, 0x4431
	  cmpw      r4, r0
	  beq-      .loc_0x368
	  bge-      .loc_0x130
	  lis       r3, 0x4247
	  addi      r0, r3, 0x4E31
	  cmpw      r4, r0
	  beq-      .loc_0x184
	  b         .loc_0x3EC

	.loc_0x130:
	  lis       r3, 0x4558
	  addi      r0, r3, 0x5431
	  cmpw      r4, r0
	  beq-      .loc_0x16C
	  b         .loc_0x3EC

	.loc_0x144:
	  lis       r3, 0x5445
	  addi      r0, r3, 0x5831
	  cmpw      r4, r0
	  beq-      .loc_0x380
	  bge-      .loc_0x3EC
	  lis       r3, 0x4D41
	  addi      r0, r3, 0x5431
	  cmpw      r4, r0
	  beq-      .loc_0x3C8
	  b         .loc_0x3EC

	.loc_0x16C:
	  lwz       r4, 0x14(r1)
	  mr        r3, r29
	  li        r5, 0x1
	  bl        -0x19458
	  li        r3, 0x1
	  b         .loc_0x454

	.loc_0x184:
	  lwz       r4, 0x14(r1)
	  mr        r3, r29
	  li        r5, 0x1
	  bl        -0x19470
	  lis       r3, 0x464E
	  mr        r21, r22
	  addi      r23, r3, 0x5431

	.loc_0x1A0:
	  mr        r3, r29
	  addi      r4, r1, 0x8
	  li        r5, 0x8
	  bl        -0x19548
	  lwz       r4, 0x8(r1)
	  cmpw      r4, r23
	  beq-      .loc_0x2AC
	  bge-      .loc_0x1FC
	  lis       r3, 0x454E
	  addi      r0, r3, 0x4431
	  cmpw      r4, r0
	  beq-      .loc_0x270
	  bge-      .loc_0x1E8
	  lis       r3, 0x4247
	  addi      r0, r3, 0x4E31
	  cmpw      r4, r0
	  beq-      .loc_0x23C
	  b         .loc_0x2F4

	.loc_0x1E8:
	  lis       r3, 0x4558
	  addi      r0, r3, 0x5431
	  cmpw      r4, r0
	  beq-      .loc_0x224
	  b         .loc_0x2F4

	.loc_0x1FC:
	  lis       r3, 0x5445
	  addi      r0, r3, 0x5831
	  cmpw      r4, r0
	  beq-      .loc_0x288
	  bge-      .loc_0x2F4
	  lis       r3, 0x4D41
	  addi      r0, r3, 0x5431
	  cmpw      r4, r0
	  beq-      .loc_0x2D0
	  b         .loc_0x2F4

	.loc_0x224:
	  lwz       r4, 0xC(r1)
	  mr        r3, r29
	  li        r5, 0x1
	  bl        -0x19510
	  li        r3, 0x1
	  b         .loc_0x35C

	.loc_0x23C:
	  lwz       r4, 0xC(r1)
	  mr        r3, r29
	  li        r5, 0x1
	  bl        -0x19528
	  mr        r3, r28
	  mr        r4, r21
	  mr        r5, r29
	  mr        r6, r30
	  mr        r7, r31
	  bl        .loc_0x0
	  cmpwi     r3, 0
	  beq+      .loc_0x1A0
	  b         .loc_0x35C

	.loc_0x270:
	  lwz       r4, 0xC(r1)
	  mr        r3, r29
	  li        r5, 0x1
	  bl        -0x1955C
	  li        r3, 0
	  b         .loc_0x35C

	.loc_0x288:
	  mr        r3, r28
	  mr        r4, r29
	  mr        r5, r30
	  bl        0xA04
	  cmplwi    r3, 0
	  stw       r3, 0x108(r28)
	  bne+      .loc_0x1A0
	  li        r3, 0x2
	  b         .loc_0x35C

	.loc_0x2AC:
	  mr        r3, r28
	  mr        r4, r29
	  mr        r5, r30
	  bl        0x9E0
	  cmplwi    r3, 0
	  stw       r3, 0x10C(r28)
	  bne+      .loc_0x1A0
	  li        r3, 0x2
	  b         .loc_0x35C

	.loc_0x2D0:
	  mr        r3, r28
	  mr        r4, r29
	  mr        r5, r30
	  mr        r6, r31
	  bl        0xAAC
	  rlwinm.   r0,r3,0,24,31
	  bne+      .loc_0x1A0
	  li        r3, 0x2
	  b         .loc_0x35C

	.loc_0x2F4:
	  cmplwi    r31, 0
	  bne-      .loc_0x324
	  mr        r3, r28
	  mr        r5, r29
	  lwz       r12, 0x0(r28)
	  mr        r6, r22
	  mr        r7, r30
	  addi      r4, r1, 0x8
	  lwz       r12, 0x94(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x34C

	.loc_0x324:
	  mr        r3, r28
	  mr        r5, r29
	  lwz       r12, 0x0(r28)
	  mr        r6, r22
	  mr        r7, r30
	  mr        r8, r31
	  lwz       r12, 0x98(r12)
	  addi      r4, r1, 0x8
	  mtctr     r12
	  bctrl

	.loc_0x34C:
	  cmplwi    r3, 0
	  mr        r21, r3
	  bne+      .loc_0x1A0
	  li        r3, 0x2

	.loc_0x35C:
	  cmpwi     r3, 0
	  beq+      .loc_0xE8
	  b         .loc_0x454

	.loc_0x368:
	  lwz       r4, 0x14(r1)
	  mr        r3, r29
	  li        r5, 0x1
	  bl        -0x19654
	  li        r3, 0
	  b         .loc_0x454

	.loc_0x380:
	  mr        r3, r28
	  mr        r4, r29
	  mr        r5, r30
	  bl        0x90C
	  cmplwi    r3, 0
	  stw       r3, 0x108(r28)
	  bne+      .loc_0xE8
	  li        r3, 0x2
	  b         .loc_0x454

	.loc_0x3A4:
	  mr        r3, r28
	  mr        r4, r29
	  mr        r5, r30
	  bl        0x8E8
	  cmplwi    r3, 0
	  stw       r3, 0x10C(r28)
	  bne+      .loc_0xE8
	  li        r3, 0x2
	  b         .loc_0x454

	.loc_0x3C8:
	  mr        r3, r28
	  mr        r4, r29
	  mr        r5, r30
	  mr        r6, r31
	  bl        0x9B4
	  rlwinm.   r0,r3,0,24,31
	  bne+      .loc_0xE8
	  li        r3, 0x2
	  b         .loc_0x454

	.loc_0x3EC:
	  cmplwi    r31, 0
	  bne-      .loc_0x41C
	  mr        r3, r28
	  mr        r5, r29
	  lwz       r12, 0x0(r28)
	  mr        r6, r25
	  mr        r7, r30
	  addi      r4, r1, 0x10
	  lwz       r12, 0x94(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x444

	.loc_0x41C:
	  mr        r3, r28
	  mr        r5, r29
	  lwz       r12, 0x0(r28)
	  mr        r6, r25
	  mr        r7, r30
	  mr        r8, r31
	  lwz       r12, 0x98(r12)
	  addi      r4, r1, 0x10
	  mtctr     r12
	  bctrl

	.loc_0x444:
	  cmplwi    r3, 0
	  mr        r22, r3
	  bne+      .loc_0xE8
	  li        r3, 0x2

	.loc_0x454:
	  cmpwi     r3, 0
	  beq+      .loc_0x30
	  b         .loc_0x54C

	.loc_0x460:
	  lwz       r4, 0x1C(r1)
	  mr        r3, r29
	  li        r5, 0x1
	  bl        -0x1974C
	  li        r3, 0
	  b         .loc_0x54C

	.loc_0x478:
	  mr        r3, r28
	  mr        r4, r29
	  mr        r5, r30
	  bl        0x814
	  cmplwi    r3, 0
	  stw       r3, 0x108(r28)
	  bne+      .loc_0x30
	  li        r3, 0x2
	  b         .loc_0x54C

	.loc_0x49C:
	  mr        r3, r28
	  mr        r4, r29
	  mr        r5, r30
	  bl        0x7F0
	  cmplwi    r3, 0
	  stw       r3, 0x10C(r28)
	  bne+      .loc_0x30
	  li        r3, 0x2
	  b         .loc_0x54C

	.loc_0x4C0:
	  mr        r3, r28
	  mr        r4, r29
	  mr        r5, r30
	  mr        r6, r31
	  bl        0x8BC
	  rlwinm.   r0,r3,0,24,31
	  bne+      .loc_0x30
	  li        r3, 0x2
	  b         .loc_0x54C

	.loc_0x4E4:
	  cmplwi    r31, 0
	  bne-      .loc_0x514
	  mr        r3, r28
	  mr        r5, r29
	  lwz       r12, 0x0(r28)
	  mr        r6, r27
	  mr        r7, r30
	  addi      r4, r1, 0x18
	  lwz       r12, 0x94(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x53C

	.loc_0x514:
	  mr        r3, r28
	  mr        r5, r29
	  lwz       r12, 0x0(r28)
	  mr        r6, r27
	  mr        r7, r30
	  mr        r8, r31
	  lwz       r12, 0x98(r12)
	  addi      r4, r1, 0x18
	  mtctr     r12
	  bctrl

	.loc_0x53C:
	  cmplwi    r3, 0
	  mr        r25, r3
	  bne+      .loc_0x30
	  li        r3, 0x2

	.loc_0x54C:
	  lmw       r21, 0x24(r1)
	  lwz       r0, 0x54(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8003FF48
 * Size:	000030
 */
void J2DScreen::createPane(const J2DScrnBlockHeader&, JSURandomInputStream*,
                           J2DPane*, unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r8, 0
	  stw       r0, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x98(r12)
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
 * Address:	8003FF78
 * Size:	000334
 */
void J2DScreen::createPane(const J2DScrnBlockHeader&, JSURandomInputStream*,
                           J2DPane*, unsigned long, JKRArchive*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stmw      r26, 0x8(r1)
	  mr        r28, r4
	  lis       r4, 0x5442
	  lwz       r9, 0x0(r28)
	  addi      r0, r4, 0x5831
	  mr        r27, r3
	  cmpw      r9, r0
	  mr        r29, r5
	  mr        r30, r6
	  mr        r31, r7
	  mr        r26, r8
	  beq-      .loc_0x140
	  bge-      .loc_0x88
	  lis       r3, 0x5049
	  addi      r0, r3, 0x4331
	  cmpw      r9, r0
	  beq-      .loc_0x114
	  bge-      .loc_0x78
	  lis       r3, 0x5041
	  addi      r0, r3, 0x4E32
	  cmpw      r9, r0
	  beq-      .loc_0x16C
	  bge-      .loc_0x2C8
	  addi      r0, r3, 0x4E31
	  cmpw      r9, r0
	  bge-      .loc_0xBC
	  b         .loc_0x2C8

	.loc_0x78:
	  addi      r0, r3, 0x4333
	  cmpw      r9, r0
	  bge-      .loc_0x2C8
	  b         .loc_0x1FC

	.loc_0x88:
	  lis       r3, 0x5749
	  addi      r0, r3, 0x4E31
	  cmpw      r9, r0
	  beq-      .loc_0xE8
	  bge-      .loc_0xAC
	  addi      r0, r4, 0x5833
	  cmpw      r9, r0
	  bge-      .loc_0x2C8
	  b         .loc_0x260

	.loc_0xAC:
	  addi      r0, r3, 0x4E33
	  cmpw      r9, r0
	  bge-      .loc_0x2C8
	  b         .loc_0x198

	.loc_0xBC:
	  li        r3, 0x100
	  bl        -0x1C194
	  mr.       r0, r3
	  beq-      .loc_0xE0
	  mr        r4, r30
	  mr        r5, r29
	  li        r6, 0
	  bl        -0x9088
	  mr        r0, r3

	.loc_0xE0:
	  mr        r27, r0
	  b         .loc_0x31C

	.loc_0xE8:
	  li        r3, 0x148
	  bl        -0x1C1C0
	  mr.       r0, r3
	  beq-      .loc_0x10C
	  mr        r4, r30
	  mr        r5, r29
	  mr        r6, r26
	  bl        0x25C0
	  mr        r0, r3

	.loc_0x10C:
	  mr        r27, r0
	  b         .loc_0x31C

	.loc_0x114:
	  li        r3, 0x168
	  bl        -0x1C1EC
	  mr.       r0, r3
	  beq-      .loc_0x138
	  mr        r4, r30
	  mr        r5, r29
	  mr        r6, r26
	  bl        -0x6504
	  mr        r0, r3

	.loc_0x138:
	  mr        r27, r0
	  b         .loc_0x31C

	.loc_0x140:
	  li        r3, 0x138
	  bl        -0x1C218
	  mr.       r0, r3
	  beq-      .loc_0x164
	  mr        r4, r30
	  mr        r5, r29
	  mr        r6, r26
	  bl        0xF18
	  mr        r0, r3

	.loc_0x164:
	  mr        r27, r0
	  b         .loc_0x31C

	.loc_0x16C:
	  li        r3, 0x100
	  bl        -0x1C244
	  mr.       r0, r3
	  beq-      .loc_0x190
	  mr        r4, r30
	  mr        r5, r29
	  li        r6, 0x1
	  bl        -0x9138
	  mr        r0, r3

	.loc_0x190:
	  mr        r27, r0
	  b         .loc_0x31C

	.loc_0x198:
	  rlwinm.   r0,r31,0,11,15
	  beq-      .loc_0x1D0
	  li        r3, 0x180
	  bl        -0x1C278
	  mr.       r0, r3
	  beq-      .loc_0x1C8
	  lwz       r7, 0x104(r27)
	  mr        r4, r30
	  mr        r5, r29
	  mr        r6, r31
	  bl        0x4CFC
	  mr        r0, r3

	.loc_0x1C8:
	  mr        r27, r0
	  b         .loc_0x31C

	.loc_0x1D0:
	  li        r3, 0x148
	  bl        -0x1C2A8
	  mr.       r0, r3
	  beq-      .loc_0x1F4
	  lwz       r6, 0x104(r27)
	  mr        r4, r30
	  mr        r5, r29
	  bl        0x2584
	  mr        r0, r3

	.loc_0x1F4:
	  mr        r27, r0
	  b         .loc_0x31C

	.loc_0x1FC:
	  rlwinm.   r0,r31,0,11,15
	  beq-      .loc_0x234
	  li        r3, 0x1A8
	  bl        -0x1C2DC
	  mr.       r0, r3
	  beq-      .loc_0x22C
	  lwz       r7, 0x104(r27)
	  mr        r4, r30
	  mr        r5, r29
	  mr        r6, r31
	  bl        0x14BF4
	  mr        r0, r3

	.loc_0x22C:
	  mr        r27, r0
	  b         .loc_0x31C

	.loc_0x234:
	  li        r3, 0x168
	  bl        -0x1C30C
	  mr.       r0, r3
	  beq-      .loc_0x258
	  lwz       r6, 0x104(r27)
	  mr        r4, r30
	  mr        r5, r29
	  bl        -0x6558
	  mr        r0, r3

	.loc_0x258:
	  mr        r27, r0
	  b         .loc_0x31C

	.loc_0x260:
	  rlwinm.   r0,r31,0,11,15
	  beq-      .loc_0x298
	  li        r3, 0x148
	  bl        -0x1C340
	  mr.       r0, r3
	  beq-      .loc_0x290
	  lwz       r7, 0x104(r27)
	  mr        r4, r30
	  mr        r5, r29
	  mr        r6, r31
	  bl        0x194A8
	  mr        r0, r3

	.loc_0x290:
	  mr        r27, r0
	  b         .loc_0x31C

	.loc_0x298:
	  li        r3, 0x138
	  bl        -0x1C370
	  mr.       r0, r3
	  beq-      .loc_0x2C0
	  lwz       r7, 0x104(r27)
	  mr        r4, r30
	  mr        r5, r29
	  mr        r6, r31
	  bl        0xE50
	  mr        r0, r3

	.loc_0x2C0:
	  mr        r27, r0
	  b         .loc_0x31C

	.loc_0x2C8:
	  mr        r3, r29
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x4(r28)
	  add       r28, r0, r3
	  li        r3, 0x100
	  bl        -0x1C3BC
	  mr.       r0, r3
	  beq-      .loc_0x308
	  mr        r4, r30
	  mr        r5, r29
	  li        r6, 0
	  bl        -0x92B0
	  mr        r0, r3

	.loc_0x308:
	  mr        r27, r0
	  mr        r3, r29
	  mr        r4, r28
	  li        r5, 0
	  bl        -0x19B88

	.loc_0x31C:
	  mr        r3, r27
	  lmw       r26, 0x8(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800402AC
 * Size:	0001CC
 */
void J2DScreen::draw(float, float, const J2DGrafContext*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x120(r1)
	  mflr      r0
	  stw       r0, 0x124(r1)
	  stfd      f31, 0x110(r1)
	  psq_st    f31,0x118(r1),0,0
	  stfd      f30, 0x100(r1)
	  psq_st    f30,0x108(r1),0,0
	  stw       r31, 0xFC(r1)
	  stw       r30, 0xF8(r1)
	  mr        r30, r3
	  fmr       f30, f1
	  lbz       r0, 0x100(r3)
	  fmr       f31, f2
	  mr        r31, r4
	  cmplwi    r0, 0
	  beq-      .loc_0x54
	  addi      r3, r1, 0x14
	  addi      r4, r1, 0x10
	  addi      r5, r1, 0xC
	  addi      r6, r1, 0x8
	  bl        0xA9554

	.loc_0x54:
	  cmplwi    r31, 0
	  beq-      .loc_0x7C
	  fmr       f1, f30
	  lbz       r5, 0x100(r30)
	  fmr       f2, f31
	  mr        r3, r30
	  mr        r4, r31
	  li        r6, 0x1
	  bl        -0x8A48
	  b         .loc_0xD8

	.loc_0x7C:
	  lfs       f1, -0x7B20(r2)
	  addi      r3, r1, 0x18
	  lfs       f3, -0x7B1C(r2)
	  fmr       f2, f1
	  lfs       f4, -0x7B18(r2)
	  lfs       f5, -0x7B08(r2)
	  lfs       f6, -0x7B04(r2)
	  bl        -0xAD6C
	  addi      r3, r1, 0x18
	  bl        -0xAC90
	  fmr       f1, f30
	  lbz       r5, 0x100(r30)
	  fmr       f2, f31
	  mr        r3, r30
	  addi      r4, r1, 0x18
	  li        r6, 0x1
	  bl        -0x8A90
	  lis       r4, 0x804A
	  lis       r3, 0x804A
	  addi      r0, r4, 0x600
	  stw       r0, 0x18(r1)
	  addi      r0, r3, 0x650
	  stw       r0, 0x18(r1)

	.loc_0xD8:
	  lbz       r0, 0x100(r30)
	  cmplwi    r0, 0
	  beq-      .loc_0xF8
	  lwz       r3, 0x14(r1)
	  lwz       r4, 0x10(r1)
	  lwz       r5, 0xC(r1)
	  lwz       r6, 0x8(r1)
	  bl        0xA9438

	.loc_0xF8:
	  li        r3, 0
	  bl        0xA7FAC
	  li        r31, 0

	.loc_0x104:
	  mr        r3, r31
	  bl        0xA7FC4
	  addi      r31, r31, 0x1
	  cmpwi     r31, 0x10
	  blt+      .loc_0x104
	  li        r3, 0x1
	  bl        0xA87F0
	  li        r3, 0
	  li        r4, 0x4
	  bl        0xA80A8
	  li        r3, 0
	  li        r4, 0xFF
	  li        r5, 0xFF
	  li        r6, 0x4
	  bl        0xA8634
	  li        r3, 0xD
	  li        r4, 0
	  bl        0xA3E90
	  li        r3, 0
	  bl        0xA57AC
	  li        r3, 0
	  bl        0xA4B98
	  li        r3, 0x4
	  li        r4, 0
	  li        r5, 0
	  li        r6, 0x1
	  li        r7, 0
	  li        r8, 0
	  li        r9, 0x2
	  bl        0xA6A7C
	  li        r31, 0

	.loc_0x180:
	  mr        r3, r31
	  li        r4, 0
	  li        r5, 0x1
	  li        r6, 0x2
	  li        r7, 0x3
	  bl        0xA848C
	  addi      r31, r31, 0x1
	  cmpwi     r31, 0x4
	  blt+      .loc_0x180
	  psq_l     f31,0x118(r1),0,0
	  lfd       f31, 0x110(r1)
	  psq_l     f30,0x108(r1),0,0
	  lfd       f30, 0x100(r1)
	  lwz       r31, 0xFC(r1)
	  lwz       r0, 0x124(r1)
	  lwz       r30, 0xF8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x120
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80040478
 * Size:	000040
 */
void J2DScreen::search(unsigned long long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r7, 0
	  stw       r0, 0x14(r1)
	  xor       r4, r6, r7
	  xor       r0, r5, r7
	  or.       r0, r4, r0
	  bne-      .loc_0x24
	  b         .loc_0x2C

	.loc_0x24:
	  bl        -0x7F98
	  mr        r7, r3

	.loc_0x2C:
	  lwz       r0, 0x14(r1)
	  mr        r3, r7
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800404B8
 * Size:	000030
 */
void J2DScreen::gather(J2DPane**, unsigned long long, unsigned long long, int)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  li        r0, 0
	  addi      r10, r1, 0x8
	  stw       r0, 0x8(r1)
	  bl        -0x7F1C
	  lwz       r0, 0x14(r1)
	  lwz       r3, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800404E8
 * Size:	000040
 */
void J2DScreen::searchUserInfo(unsigned long long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r7, 0
	  stw       r0, 0x14(r1)
	  xor       r4, r6, r7
	  xor       r0, r5, r7
	  or.       r0, r4, r0
	  bne-      .loc_0x24
	  b         .loc_0x2C

	.loc_0x24:
	  bl        -0x7BC8
	  mr        r7, r3

	.loc_0x2C:
	  lwz       r0, 0x14(r1)
	  mr        r3, r7
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000030
 */
void J2DScreen::gatherUserInfo(J2DPane**, unsigned long long,
                               unsigned long long, int)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80040528
 * Size:	000158
 */
void J2DScreen::drawSelf(float, float, float (*)[3][4])
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  lis       r3, 0x8081
	  lwz       r4, 0x114(r31)
	  subi      r3, r3, 0x7F7F
	  lbz       r0, 0xB2(r31)
	  stw       r4, 0xC(r1)
	  lbz       r5, 0xF(r1)
	  mullw     r0, r5, r0
	  mulhw     r3, r3, r0
	  add       r0, r3, r0
	  srawi     r0, r0, 0x7
	  rlwinm    r3,r0,1,31,31
	  add       r0, r0, r3
	  rlwinm.   r0,r0,0,24,31
	  beq-      .loc_0x144
	  rlwimi    r4,r0,0,24,31
	  li        r3, 0x1
	  stw       r4, 0x8(r1)
	  li        r4, 0x4
	  li        r5, 0x5
	  li        r6, 0xF
	  lbz       r9, 0x8(r1)
	  lbz       r8, 0x9(r1)
	  lbz       r7, 0xA(r1)
	  lbz       r0, 0xB(r1)
	  stb       r9, 0xC(r1)
	  stb       r8, 0xD(r1)
	  stb       r7, 0xE(r1)
	  stb       r0, 0xF(r1)
	  bl        0xA8B2C
	  li        r3, 0
	  li        r4, 0x9
	  li        r5, 0x1
	  li        r6, 0x4
	  li        r7, 0
	  bl        0xA4144
	  li        r3, 0x80
	  li        r4, 0
	  li        r5, 0x4
	  bl        0xA53B4
	  lfs       f4, -0x7B20(r2)
	  lis       r8, 0xCC01
	  lwz       r0, 0xC(r1)
	  li        r3, 0
	  stfs      f4, -0x8000(r8)
	  li        r4, 0x9
	  li        r5, 0x1
	  li        r6, 0x3
	  stfs      f4, -0x8000(r8)
	  li        r7, 0
	  stfs      f4, -0x8000(r8)
	  stw       r0, -0x8000(r8)
	  lfs       f1, 0x28(r31)
	  lfs       f0, 0x20(r31)
	  fsubs     f0, f1, f0
	  stfs      f0, -0x8000(r8)
	  stfs      f4, -0x8000(r8)
	  stfs      f4, -0x8000(r8)
	  stw       r0, -0x8000(r8)
	  lfs       f1, 0x28(r31)
	  lfs       f0, 0x20(r31)
	  lfs       f3, 0x2C(r31)
	  lfs       f2, 0x24(r31)
	  fsubs     f0, f1, f0
	  fsubs     f1, f3, f2
	  stfs      f0, -0x8000(r8)
	  stfs      f1, -0x8000(r8)
	  stfs      f4, -0x8000(r8)
	  stw       r0, -0x8000(r8)
	  lfs       f1, 0x2C(r31)
	  lfs       f0, 0x24(r31)
	  fsubs     f0, f1, f0
	  stfs      f4, -0x8000(r8)
	  stfs      f0, -0x8000(r8)
	  stfs      f4, -0x8000(r8)
	  stw       r0, -0x8000(r8)
	  bl        0xA40A0

	.loc_0x144:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80040680
 * Size:	0000F4
 */
void J2DScreen::getResReference(JSURandomInputStream*, unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stmw      r27, 0x1C(r1)
	  mr        r27, r4
	  mr        r28, r5
	  mr        r3, r27
	  lwz       r12, 0x0(r27)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  mr        r31, r3
	  mr        r3, r27
	  lwz       r12, 0x0(r27)
	  li        r4, 0x4
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r27
	  addi      r4, r1, 0xC
	  li        r5, 0x4
	  bl        -0x1A300
	  mr        r3, r27
	  lwz       r29, 0xC(r1)
	  lwz       r12, 0x0(r27)
	  li        r4, 0x4
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r27
	  addi      r4, r1, 0x8
	  li        r5, 0x4
	  bl        -0x1A32C
	  lwz       r30, 0x8(r1)
	  mr        r3, r27
	  li        r5, 0
	  add       r4, r31, r30
	  bl        -0x1A00C
	  rlwinm.   r0,r28,0,11,15
	  sub       r29, r29, r30
	  beq-      .loc_0xB4
	  mr        r3, r29
	  bl        -0x1C77C
	  mr        r4, r3
	  b         .loc_0xC4

	.loc_0xB4:
	  mr        r3, r29
	  li        r4, -0x4
	  bl        -0x1C744
	  mr        r4, r3

	.loc_0xC4:
	  cmplwi    r4, 0
	  mr        r30, r4
	  beq-      .loc_0xDC
	  mr        r3, r27
	  mr        r5, r29
	  bl        -0x1A384

	.loc_0xDC:
	  mr        r3, r30
	  lmw       r27, 0x1C(r1)
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80040774
 * Size:	0002F0
 */
void J2DScreen::createMaterial(JSURandomInputStream*, unsigned long,
                               JKRArchive*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x90(r1)
	  mflr      r0
	  stw       r0, 0x94(r1)
	  stmw      r25, 0x74(r1)
	  mr        r25, r4
	  mr        r31, r3
	  mr        r26, r5
	  mr        r3, r25
	  mr        r27, r6
	  lwz       r12, 0x0(r25)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  mr        r0, r3
	  mr        r3, r25
	  mr        r29, r0
	  addi      r4, r1, 0xC
	  li        r5, 0x8
	  bl        -0x1A3E8
	  mr        r3, r25
	  addi      r4, r1, 0x8
	  li        r5, 0x2
	  bl        -0x1A3F8
	  lhz       r0, 0x8(r1)
	  mr        r3, r25
	  li        r4, 0x2
	  sth       r0, 0x102(r31)
	  lwz       r12, 0x0(r25)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r30,r26,0,11,15
	  beq-      .loc_0xB8
	  lhz       r28, 0x102(r31)
	  mulli     r3, r28, 0x88
	  addi      r3, r3, 0x10
	  bl        -0x1C858
	  lis       r4, 0x8005
	  lis       r5, 0x8005
	  addi      r4, r4, 0x1EA4
	  mr        r7, r28
	  addi      r5, r5, 0x2188
	  li        r6, 0x88
	  bl        0x811D0
	  stw       r3, 0x104(r31)
	  b         .loc_0xEC

	.loc_0xB8:
	  lhz       r28, 0x102(r31)
	  li        r4, -0x4
	  mulli     r3, r28, 0x88
	  addi      r3, r3, 0x10
	  bl        -0x1C844
	  lis       r4, 0x8005
	  lis       r5, 0x8005
	  addi      r4, r4, 0x1EA4
	  mr        r7, r28
	  addi      r5, r5, 0x2188
	  li        r6, 0x88
	  bl        0x81198
	  stw       r3, 0x104(r31)

	.loc_0xEC:
	  lwz       r3, 0x10(r1)
	  li        r4, -0x4
	  bl        -0x1C870
	  lwz       r0, 0x104(r31)
	  mr        r28, r3
	  cmplwi    r0, 0
	  beq-      .loc_0x258
	  cmplwi    r28, 0
	  beq-      .loc_0x258
	  mr        r3, r25
	  mr        r4, r29
	  li        r5, 0
	  bl        -0x1A188
	  lwz       r5, 0x10(r1)
	  mr        r3, r25
	  mr        r4, r28
	  bl        -0x1A4CC
	  mr        r4, r28
	  addi      r3, r1, 0x14
	  bl        0x12A3C
	  li        r25, 0
	  b         .loc_0x170

	.loc_0x144:
	  rlwinm    r5,r25,0,16,31
	  lwz       r4, 0x104(r31)
	  mulli     r0, r5, 0x88
	  lwz       r7, 0x108(r31)
	  lwz       r8, 0x10C(r31)
	  mr        r6, r26
	  mr        r9, r27
	  addi      r3, r1, 0x14
	  add       r4, r4, r0
	  bl        0x12BD0
	  addi      r25, r25, 0x1

	.loc_0x170:
	  lhz       r0, 0x102(r31)
	  rlwinm    r3,r25,0,16,31
	  cmplw     r3, r0
	  blt+      .loc_0x144
	  cmplwi    r30, 0
	  beq-      .loc_0x248
	  lbz       r0, 0x15(r28)
	  lbz       r3, 0x14(r28)
	  rlwinm    r0,r0,16,0,15
	  lbz       r4, 0x16(r28)
	  rlwimi    r0,r3,24,0,7
	  lbz       r5, 0x17(r28)
	  rlwimi    r0,r4,8,16,23
	  or        r0, r5, r0
	  add       r25, r28, r0
	  lhz       r0, 0x0(r25)
	  rlwinm    r0,r0,2,0,29
	  add       r3, r25, r0
	  lhz       r4, 0x2(r3)
	  b         .loc_0x1C4

	.loc_0x1C0:
	  addi      r4, r4, 0x1

	.loc_0x1C4:
	  rlwinm    r3,r4,0,16,31
	  lbzx      r0, r25, r3
	  extsb.    r0, r0
	  bne+      .loc_0x1C0
	  addi      r26, r3, 0x1
	  rlwinm    r3,r26,0,16,31
	  bl        -0x1C9A4
	  mr.       r27, r3
	  beq-      .loc_0x258
	  rlwinm    r0,r26,0,16,31
	  li        r5, 0
	  b         .loc_0x204

	.loc_0x1F4:
	  rlwinm    r4,r5,0,16,31
	  addi      r5, r5, 0x1
	  lbzx      r3, r25, r4
	  stbx      r3, r27, r4

	.loc_0x204:
	  rlwinm    r3,r5,0,16,31
	  cmplw     r3, r0
	  blt+      .loc_0x1F4
	  li        r3, 0x10
	  bl        -0x1CAE4
	  mr.       r0, r3
	  beq-      .loc_0x22C
	  mr        r4, r27
	  bl        -0x11C8C
	  mr        r0, r3

	.loc_0x22C:
	  stw       r0, 0x110(r31)
	  lwz       r0, 0x110(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x248
	  mr        r3, r27
	  bl        -0x1C8DC
	  b         .loc_0x258

	.loc_0x248:
	  mr        r3, r28
	  bl        -0x1C8E8
	  li        r3, 0x1
	  b         .loc_0x2DC

	.loc_0x258:
	  mr        r3, r28
	  bl        -0x1C8F8
	  lis       r4, 0x8005
	  lwz       r3, 0x104(r31)
	  addi      r4, r4, 0x2188
	  bl        0x80D68
	  li        r0, 0
	  sth       r0, 0x102(r31)
	  stw       r0, 0x104(r31)
	  lwz       r3, 0x108(r31)
	  bl        -0x1C91C
	  li        r0, 0
	  stw       r0, 0x108(r31)
	  lwz       r3, 0x10C(r31)
	  bl        -0x1C92C
	  li        r0, 0
	  stw       r0, 0x10C(r31)
	  lwz       r3, 0x110(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x2D8
	  lwz       r3, 0x4(r3)
	  bl        -0x1C948
	  lwz       r3, 0x110(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x2D0
	  lwz       r12, 0x0(r3)
	  li        r4, 0x1
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl

	.loc_0x2D0:
	  li        r0, 0
	  stw       r0, 0x110(r31)

	.loc_0x2D8:
	  li        r3, 0

	.loc_0x2DC:
	  lmw       r25, 0x74(r1)
	  lwz       r0, 0x94(r1)
	  mtlr      r0
	  addi      r1, r1, 0x90
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80040A64
 * Size:	000038
 */
void J2DScreen::getMaterial(unsigned short)
{
	/*
	.loc_0x0:
	  lhz       r0, 0x102(r3)
	  rlwinm    r4,r4,0,16,31
	  cmplw     r4, r0
	  blt-      .loc_0x18
	  li        r3, 0
	  blr

	.loc_0x18:
	  lwz       r3, 0x104(r3)
	  cmplwi    r3, 0
	  bne-      .loc_0x2C
	  li        r3, 0
	  blr

	.loc_0x2C:
	  mulli     r0, r4, 0x88
	  add       r3, r3, r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80040A9C
 * Size:	000020
 */
void J2DScreen::isUsed(const ResTIMG*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        -0x80B4
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80040ABC
 * Size:	000020
 */
void J2DScreen::isUsed(const ResFONT*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        -0x804C
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00009C
 */
void J2DScreen::isTextureInScreen(const char*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00009C
 */
void J2DScreen::isFontInScreen(const char*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80040ADC
 * Size:	000050
 */
void J2DScreen::getNameResource(const char*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r4, 0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x1DADC
	  cmplwi    r3, 0
	  bne-      .loc_0x3C
	  lwz       r0, -0x76B0(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0x3C
	  mr        r3, r0
	  mr        r4, r31
	  bl        0x8D48

	.loc_0x3C:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80040B2C
 * Size:	000074
 */
void J2DScreen::animation()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  lwz       r12, 0x0(r3)
	  lwz       r4, 0xF8(r3)
	  lwz       r12, 0x90(r12)
	  mtctr     r12
	  bctrl
	  li        r31, 0
	  b         .loc_0x4C

	.loc_0x34:
	  rlwinm    r0,r31,0,16,31
	  lwz       r3, 0x104(r30)
	  mulli     r0, r0, 0x88
	  add       r3, r3, r0
	  bl        0x12298
	  addi      r31, r31, 0x1

	.loc_0x4C:
	  lhz       r0, 0x102(r30)
	  rlwinm    r3,r31,0,16,31
	  cmplw     r3, r0
	  blt+      .loc_0x34
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
 * Address:	80040BA0
 * Size:	0000A4
 */
void J2DScreen::setAnimation(J2DAnmColor*)
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
	  mr        r3, r29
	  lwz       r12, 0x0(r29)
	  mr        r4, r28
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  lhz       r31, 0x18(r29)
	  li        r30, 0
	  b         .loc_0x78

	.loc_0x48:
	  lwz       r4, 0x1C(r29)
	  rlwinm    r3,r30,1,15,30
	  lhz       r0, 0x102(r28)
	  lhzx      r3, r4, r3
	  cmplw     r3, r0
	  bge-      .loc_0x74
	  mulli     r0, r3, 0x88
	  lwz       r3, 0x104(r28)
	  mr        r4, r29
	  add       r3, r3, r0
	  bl        0x11B80

	.loc_0x74:
	  addi      r30, r30, 0x1

	.loc_0x78:
	  rlwinm    r0,r30,0,16,31
	  cmplw     r0, r31
	  blt+      .loc_0x48
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
 * Address:	80040C44
 * Size:	0000BC
 */
void J2DScreen::setAnimation(J2DAnmTextureSRTKey*)
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
	  mr        r3, r29
	  lwz       r12, 0x0(r29)
	  mr        r4, r28
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  lis       r3, 0x5555
	  lhz       r0, 0x14(r29)
	  addi      r3, r3, 0x5556
	  li        r30, 0
	  mulhw     r3, r3, r0
	  rlwinm    r0,r3,1,31,31
	  add       r0, r3, r0
	  rlwinm    r31,r0,0,16,31
	  b         .loc_0x90

	.loc_0x60:
	  lwz       r4, 0x34(r29)
	  rlwinm    r3,r30,1,15,30
	  lhz       r0, 0x102(r28)
	  lhzx      r3, r4, r3
	  cmplw     r3, r0
	  bge-      .loc_0x8C
	  mulli     r0, r3, 0x88
	  lwz       r3, 0x104(r28)
	  mr        r4, r29
	  add       r3, r3, r0
	  bl        0x11C08

	.loc_0x8C:
	  addi      r30, r30, 0x1

	.loc_0x90:
	  rlwinm    r0,r30,0,16,31
	  cmplw     r0, r31
	  blt+      .loc_0x60
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
 * Address:	80040D00
 * Size:	0000A4
 */
void J2DScreen::setAnimation(J2DAnmTexPattern*)
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
	  mr        r3, r29
	  lwz       r12, 0x0(r29)
	  mr        r4, r28
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  lhz       r31, 0x1A(r29)
	  li        r30, 0
	  b         .loc_0x78

	.loc_0x48:
	  lwz       r4, 0x1C(r29)
	  rlwinm    r3,r30,1,15,30
	  lhz       r0, 0x102(r28)
	  lhzx      r3, r4, r3
	  cmplw     r3, r0
	  bge-      .loc_0x74
	  mulli     r0, r3, 0x88
	  lwz       r3, 0x104(r28)
	  mr        r4, r29
	  add       r3, r3, r0
	  bl        0x11D08

	.loc_0x74:
	  addi      r30, r30, 0x1

	.loc_0x78:
	  rlwinm    r0,r30,0,16,31
	  cmplw     r0, r31
	  blt+      .loc_0x48
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
 * Address:	80040DA4
 * Size:	0000EC
 */
void J2DScreen::setAnimation(J2DAnmTevRegKey*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r4
	  stw       r30, 0x18(r1)
	  mr        r30, r3
	  mr        r3, r31
	  stw       r29, 0x14(r1)
	  mr        r4, r30
	  stw       r28, 0x10(r1)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  lhz       r29, 0x10(r31)
	  li        r28, 0
	  b         .loc_0x78

	.loc_0x48:
	  lwz       r4, 0x24(r31)
	  rlwinm    r3,r28,1,15,30
	  lhz       r0, 0x102(r30)
	  lhzx      r3, r4, r3
	  cmplw     r3, r0
	  bge-      .loc_0x74
	  mulli     r0, r3, 0x88
	  lwz       r3, 0x104(r30)
	  mr        r4, r31
	  add       r3, r3, r0
	  bl        0x11DF8

	.loc_0x74:
	  addi      r28, r28, 0x1

	.loc_0x78:
	  rlwinm    r0,r28,0,16,31
	  cmplw     r0, r29
	  blt+      .loc_0x48
	  lhz       r29, 0x12(r31)
	  li        r28, 0
	  b         .loc_0xC0

	.loc_0x90:
	  lwz       r4, 0x38(r31)
	  rlwinm    r3,r28,1,15,30
	  lhz       r0, 0x102(r30)
	  lhzx      r3, r4, r3
	  cmplw     r3, r0
	  bge-      .loc_0xBC
	  mulli     r0, r3, 0x88
	  lwz       r3, 0x104(r30)
	  mr        r4, r31
	  add       r3, r3, r0
	  bl        0x11DB0

	.loc_0xBC:
	  addi      r28, r28, 0x1

	.loc_0xC0:
	  rlwinm    r0,r28,0,16,31
	  cmplw     r0, r29
	  blt+      .loc_0x90
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
 * Address:	80040E90
 * Size:	000020
 */
void J2DScreen::setAnimation(J2DAnmVtxColor*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        -0x7698
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80040EB0
 * Size:	000020
 */
void J2DScreen::setAnimation(J2DAnmVisibilityFull*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        -0x776C
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000064
 */
void J2DScreen::clearAnmColor()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000064
 */
void J2DScreen::clearAnmTextureSRTKey()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000064
 */
void J2DScreen::clearAnmTexPattern()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000064
 */
void J2DScreen::clearAnmTevRegKey()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80040ED0
 * Size:	000008
 */
void J2DScreen::getTypeID() const
{
	/*
	.loc_0x0:
	  li        r3, 0x8
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80040ED8
 * Size:	000034
 */
void J2DScreen::calcMtx()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lfs       f1, 0xD4(r3)
	  lwz       r12, 0x44(r12)
	  lfs       f2, 0xD8(r3)
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
 * Address:	80040F0C
 * Size:	000020
 */
void J2DScreen::setAnimation(J2DAnmTransform*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        -0x7924
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80040F2C
 * Size:	000020
 */
void J2DScreen::setAnimation(J2DAnmBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        -0x7A2C
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80040F4C
 * Size:	000020
 */
void J2DScreen::clearAnmTransform()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        -0x7924
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80040F6C
 * Size:	000004
 */
void J2DScreen::setAnimationVF(J2DAnmVisibilityFull*)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80040F70
 * Size:	000004
 */
void J2DScreen::setAnimationVC(J2DAnmVtxColor*)
{
	/*
	.loc_0x0:
	  blr
	*/
}
