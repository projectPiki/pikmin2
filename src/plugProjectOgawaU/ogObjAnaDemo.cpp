

/*
 * --INFO--
 * Address:	........
 * Size:	0000E4
 */
void _Print(char*, ...)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8031CD80
 * Size:	00009C
 */
void og::newScreen::caveIDtoMsgID((unsigned long))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r4, 0x804E
	  li        r5, 0
	  stw       r0, 0x24(r1)
	  subi      r4, r4, 0x7060
	  stw       r31, 0x1C(r1)
	  li        r31, 0
	  stw       r30, 0x18(r1)
	  li        r30, 0

	.loc_0x28:
	  lwz       r6, 0x0(r4)
	  subis     r0, r6, 0x45
	  cmplwi    r0, 0x4E44
	  bne-      .loc_0x4C
	  mr        r4, r3
	  addi      r5, r1, 0x8
	  li        r3, 0
	  bl        -0x1A1F8
	  b         .loc_0x7C

	.loc_0x4C:
	  cmplw     r6, r3
	  bne-      .loc_0x70
	  mulli     r0, r5, 0x18
	  lis       r3, 0x804E
	  subi      r3, r3, 0x7060
	  add       r3, r3, r0
	  lwz       r31, 0x8(r3)
	  lwz       r30, 0xC(r3)
	  b         .loc_0x7C

	.loc_0x70:
	  addi      r4, r4, 0x18
	  addi      r5, r5, 0x1
	  b         .loc_0x28

	.loc_0x7C:
	  lwz       r0, 0x24(r1)
	  mr        r3, r31
	  mr        r4, r30
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000094
 */
void og::newScreen::caveIDtoATB((unsigned long, bool*, bool*, bool*, bool*))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8031CE1C
 * Size:	0000BC
 */
void og::newScreen::ObjAnaDemo::__ct((char const*))
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
	  bl        0x136CB0
	  lis       r3, 0x804E
	  li        r4, 0
	  subi      r3, r3, 0x6C0C
	  lfs       f0, -0x750(r2)
	  stw       r3, 0x0(r30)
	  addi      r5, r3, 0x10
	  li        r0, 0xFF
	  mr        r3, r30
	  stw       r5, 0x18(r30)
	  stw       r31, 0x14(r30)
	  stw       r4, 0x38(r30)
	  stw       r4, 0x3C(r30)
	  stw       r4, 0x40(r30)
	  stw       r4, 0x44(r30)
	  stw       r4, 0x48(r30)
	  stw       r4, 0x4C(r30)
	  stw       r4, 0x50(r30)
	  stw       r4, 0x64(r30)
	  stw       r4, 0x54(r30)
	  stw       r4, 0x58(r30)
	  stw       r4, 0x5C(r30)
	  stw       r4, 0x60(r30)
	  stfs      f0, 0x68(r30)
	  stw       r4, 0x6C(r30)
	  stw       r4, 0x70(r30)
	  stw       r4, 0x88(r30)
	  stfs      f0, 0x8C(r30)
	  stfs      f0, 0x90(r30)
	  stfs      f0, 0x74(r30)
	  stb       r0, 0x7C(r30)
	  stfs      f0, 0x78(r30)
	  stfs      f0, 0x80(r30)
	  stfs      f0, 0x84(r30)
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
 * Address:	8031CED8
 * Size:	0000AC
 */
void og::newScreen::ObjAnaDemo::__dt(void)
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
	  beq-      .loc_0x90
	  lis       r4, 0x804E
	  subi      r4, r4, 0x6C0C
	  stw       r4, 0x0(r30)
	  addi      r0, r4, 0x10
	  stw       r0, 0x18(r30)
	  beq-      .loc_0x80
	  lis       r4, 0x804F
	  subi      r4, r4, 0x28A8
	  stw       r4, 0x0(r30)
	  addi      r0, r4, 0x10
	  stw       r0, 0x18(r30)
	  beq-      .loc_0x80
	  lis       r4, 0x804E
	  subi      r4, r4, 0x7DC0
	  stw       r4, 0x0(r30)
	  addi      r0, r4, 0x10
	  stw       r0, 0x18(r30)
	  bl        0xF4694
	  addi      r3, r30, 0x18
	  li        r4, 0
	  bl        -0x2FFF14
	  mr        r3, r30
	  li        r4, 0
	  bl        0xF4634

	.loc_0x80:
	  extsh.    r0, r31
	  ble-      .loc_0x90
	  mr        r3, r30
	  bl        -0x2F8EB0

	.loc_0x90:
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
 * Address:	........
 * Size:	0000B8
 */
void og::newScreen::ObjAnaDemo::setWindowMsg((unsigned long long,
                                              unsigned long long,
                                              unsigned long long))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8031CF84
 * Size:	001120
 */
void og::newScreen::ObjAnaDemo::doCreate((JKRArchive*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x90(r1)
	  mflr      r0
	  lis       r5, 0x8049
	  stw       r0, 0x94(r1)
	  stmw      r17, 0x54(r1)
	  mr        r31, r3
	  mr        r30, r4
	  subi      r29, r5, 0x1228
	  bl        0x137004
	  lis       r4, 0x4F
	  lis       r6, 0x4445
	  lis       r5, 0x414E
	  mr        r22, r3
	  addi      r4, r4, 0x4741
	  addi      r6, r6, 0x4D4F
	  addi      r5, r5, 0x415F
	  bl        -0xDCA8
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x5C
	  stw       r22, 0x38(r31)
	  li        r0, 0
	  stw       r0, 0x3C(r31)
	  b         .loc_0x1E0

	.loc_0x5C:
	  lis       r4, 0x4F
	  lis       r6, 0x4B45
	  lis       r5, 0x4B
	  mr        r3, r22
	  addi      r4, r4, 0x4741
	  addi      r6, r6, 0x5455
	  addi      r5, r5, 0x414E
	  bl        -0xDCE0
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xD8
	  stw       r22, 0x38(r31)
	  lbz       r0, 0x26(r22)
	  cmplwi    r0, 0
	  beq-      .loc_0xA0
	  li        r0, 0x3
	  stw       r0, 0x3C(r31)
	  b         .loc_0xA8

	.loc_0xA0:
	  li        r0, 0x1
	  stw       r0, 0x3C(r31)

	.loc_0xA8:
	  lbz       r0, 0x25(r22)
	  cmplwi    r0, 0
	  beq-      .loc_0xC0
	  li        r0, 0x2
	  stw       r0, 0x44(r31)
	  b         .loc_0x1E0

	.loc_0xC0:
	  lbz       r0, 0x24(r22)
	  cmplwi    r0, 0
	  beq-      .loc_0x1E0
	  li        r0, 0x1
	  stw       r0, 0x44(r31)
	  b         .loc_0x1E0

	.loc_0xD8:
	  lis       r4, 0x4F
	  lis       r6, 0x4D4F
	  lis       r5, 0x4341
	  mr        r3, r22
	  addi      r4, r4, 0x4741
	  addi      r6, r6, 0x5245
	  addi      r5, r5, 0x5645
	  bl        -0xDD5C
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x138
	  stw       r22, 0x38(r31)
	  li        r3, 0x2
	  stw       r3, 0x3C(r31)
	  lbz       r0, 0x25(r22)
	  cmplwi    r0, 0
	  beq-      .loc_0x120
	  stw       r3, 0x44(r31)
	  b         .loc_0x1E0

	.loc_0x120:
	  lbz       r0, 0x24(r22)
	  cmplwi    r0, 0
	  beq-      .loc_0x1E0
	  li        r0, 0x1
	  stw       r0, 0x44(r31)
	  b         .loc_0x1E0

	.loc_0x138:
	  lis       r4, 0x4F
	  lis       r6, 0x554D
	  mr        r3, r22
	  li        r5, 0x44
	  addi      r4, r4, 0x4741
	  addi      r6, r6, 0x4D59
	  bl        -0xDDB8
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x1CC
	  li        r3, 0x24
	  bl        -0x2F9240
	  cmplwi    r3, 0
	  beq-      .loc_0x1C4
	  lis       r4, 0x804B
	  lis       r5, 0x804B
	  addi      r0, r4, 0x1148
	  lis       r4, 0x745F
	  stw       r0, 0x0(r3)
	  li        r9, 0
	  addi      r8, r5, 0x1130
	  li        r7, 0x18
	  stw       r9, 0x4(r3)
	  li        r6, 0x45
	  li        r5, 0x1
	  addi      r0, r4, 0x3031
	  stw       r8, 0x0(r3)
	  stw       r9, 0x20(r3)
	  stw       r7, 0x8(r3)
	  stw       r6, 0xC(r3)
	  stb       r5, 0x1F(r3)
	  stw       r5, 0x10(r3)
	  stw       r5, 0x14(r3)
	  stw       r0, 0x18(r3)
	  stb       r9, 0x1C(r3)
	  stb       r9, 0x1D(r3)

	.loc_0x1C4:
	  stw       r3, 0x38(r31)
	  b         .loc_0x1E0

	.loc_0x1CC:
	  addi      r3, r29, 0
	  addi      r5, r29, 0x14
	  li        r4, 0x1AF
	  crclr     6, 0x6
	  bl        -0x2F2B20

	.loc_0x1E0:
	  li        r3, 0x148
	  bl        -0x2F92C4
	  mr.       r0, r3
	  beq-      .loc_0x1F8
	  bl        0x117C38
	  mr        r0, r3

	.loc_0x1F8:
	  stw       r0, 0x4C(r31)
	  lwz       r0, 0x3C(r31)
	  cmpwi     r0, 0
	  bne-      .loc_0x220
	  lwz       r3, 0x4C(r31)
	  mr        r6, r30
	  addi      r4, r29, 0x38
	  lis       r5, 0x104
	  bl        -0x2DDB78
	  b         .loc_0x2FC

	.loc_0x220:
	  lwz       r0, 0x44(r31)
	  cmpwi     r0, 0x2
	  beq-      .loc_0x234
	  cmpwi     r0, 0x1
	  bne-      .loc_0x2A8

	.loc_0x234:
	  lwz       r3, 0x4C(r31)
	  mr        r6, r30
	  addi      r4, r29, 0x48
	  lis       r5, 0x104
	  bl        -0x2DDBA4
	  lis       r5, 0x6E75
	  lis       r4, 0x4E
	  lwz       r3, 0x4C(r31)
	  addi      r6, r5, 0x3031
	  addi      r5, r4, 0x6D65
	  bl        -0x1A334
	  li        r0, 0
	  lis       r5, 0x6E75
	  stb       r0, 0xB0(r3)
	  lis       r4, 0x4E
	  addi      r6, r5, 0x3032
	  lwz       r3, 0x4C(r31)
	  addi      r5, r4, 0x6D65
	  bl        -0x1A354
	  li        r0, 0
	  lis       r4, 0x7272
	  stb       r0, 0xB0(r3)
	  addi      r6, r4, 0x6F72
	  li        r5, 0x4E65
	  lwz       r3, 0x4C(r31)
	  bl        -0x1A370
	  li        r0, 0
	  stb       r0, 0xB0(r3)
	  b         .loc_0x2FC

	.loc_0x2A8:
	  lwz       r3, 0x4C(r31)
	  mr        r6, r30
	  addi      r4, r29, 0x5C
	  lis       r5, 0x104
	  bl        -0x2DDC18
	  lis       r5, 0x6E75
	  lis       r4, 0x4E
	  lwz       r3, 0x4C(r31)
	  addi      r6, r5, 0x3031
	  addi      r5, r4, 0x6D65
	  bl        -0x1A3A8
	  li        r0, 0
	  lis       r5, 0x6E75
	  stb       r0, 0xB0(r3)
	  lis       r4, 0x4E
	  addi      r6, r5, 0x3032
	  lwz       r3, 0x4C(r31)
	  addi      r5, r4, 0x6D65
	  bl        -0x1A3C8
	  li        r0, 0
	  stb       r0, 0xB0(r3)

	.loc_0x2FC:
	  lwz       r3, 0x4C(r31)
	  bl        -0x19F70
	  lwz       r3, 0x4C(r31)
	  bl        0xD1B4
	  lwz       r0, 0x3C(r31)
	  cmpwi     r0, 0
	  beq-      .loc_0x944
	  lwz       r3, 0x44(r31)
	  cmpwi     r3, 0x2
	  bne-      .loc_0x494
	  lis       r5, 0x6E75
	  lis       r4, 0x4E
	  lwz       r3, 0x4C(r31)
	  addi      r6, r5, 0x3030
	  addi      r5, r4, 0x6D65
	  bl        -0x1A410
	  li        r0, 0
	  lis       r4, 0x6D30
	  stb       r0, 0xB0(r3)
	  addi      r6, r4, 0x3071
	  li        r5, 0x54
	  lwz       r3, 0x4C(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  lis       r4, 0x395F
	  lis       r5, 0x39
	  addi      r0, r4, 0x3030
	  lis       r4, 0x6D30
	  stw       r0, 0x1C(r3)
	  addi      r0, r5, 0x3939
	  addi      r6, r4, 0x3079
	  li        r5, 0x54
	  stw       r0, 0x18(r3)
	  lwz       r3, 0x4C(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  lis       r4, 0x395F
	  lis       r5, 0x39
	  addi      r0, r4, 0x3030
	  lis       r4, 0x6D30
	  stw       r0, 0x1C(r3)
	  addi      r0, r5, 0x3939
	  addi      r6, r4, 0x306E
	  li        r5, 0x54
	  stw       r0, 0x18(r3)
	  lwz       r3, 0x4C(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  lis       r5, 0x395F
	  lis       r4, 0x39
	  addi      r0, r5, 0x3030
	  stw       r0, 0x1C(r3)
	  addi      r0, r4, 0x3939
	  stw       r0, 0x18(r3)
	  lwz       r0, 0x3C(r31)
	  cmpwi     r0, 0x2
	  bne-      .loc_0x438
	  lwz       r3, 0x4C(r31)
	  lis       r5, 0x746C
	  lis       r4, 0x545F
	  lwz       r12, 0x0(r3)
	  addi      r6, r5, 0x6531
	  addi      r5, r4, 0x7469
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  lis       r5, 0x305F
	  lis       r4, 0x38
	  addi      r0, r5, 0x3030
	  stw       r0, 0x1C(r3)
	  addi      r0, r4, 0x3630
	  stw       r0, 0x18(r3)
	  b         .loc_0x474

	.loc_0x438:
	  lwz       r3, 0x4C(r31)
	  lis       r5, 0x746C
	  lis       r4, 0x545F
	  lwz       r12, 0x0(r3)
	  addi      r6, r5, 0x6531
	  addi      r5, r4, 0x7469
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  lis       r5, 0x355F
	  lis       r4, 0x38
	  addi      r0, r5, 0x3030
	  stw       r0, 0x1C(r3)
	  addi      r0, r4, 0x3630
	  stw       r0, 0x18(r3)

	.loc_0x474:
	  lis       r4, 0x7272
	  lwz       r3, 0x4C(r31)
	  addi      r6, r4, 0x6F72
	  li        r5, 0x4E65
	  bl        -0x1A55C
	  li        r0, 0x1
	  stb       r0, 0xB0(r3)
	  b         .loc_0x944

	.loc_0x494:
	  cmpwi     r0, 0x2
	  beq-      .loc_0x774
	  bge-      .loc_0x4AC
	  cmpwi     r0, 0x1
	  bge-      .loc_0x614
	  b         .loc_0x8D4

	.loc_0x4AC:
	  cmpwi     r0, 0x4
	  bge-      .loc_0x8D4
	  cmpwi     r3, 0x1
	  bne-      .loc_0x568
	  lwz       r3, 0x4C(r31)
	  lis       r4, 0x6D30
	  addi      r6, r4, 0x3071
	  li        r5, 0x54
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  lis       r4, 0x365F
	  lis       r5, 0x38
	  addi      r0, r4, 0x3030
	  lis       r4, 0x6D30
	  stw       r0, 0x1C(r3)
	  addi      r0, r5, 0x3630
	  addi      r6, r4, 0x3079
	  li        r5, 0x54
	  stw       r0, 0x18(r3)
	  lwz       r3, 0x4C(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  lis       r4, 0x375F
	  lis       r5, 0x38
	  addi      r0, r4, 0x3030
	  lis       r4, 0x6D30
	  stw       r0, 0x1C(r3)
	  addi      r0, r5, 0x3630
	  addi      r6, r4, 0x306E
	  li        r5, 0x54
	  stw       r0, 0x18(r3)
	  lwz       r3, 0x4C(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  lis       r5, 0x385F
	  lis       r4, 0x38
	  addi      r0, r5, 0x3030
	  stw       r0, 0x1C(r3)
	  addi      r0, r4, 0x3630
	  stw       r0, 0x18(r3)
	  b         .loc_0x944

	.loc_0x568:
	  lwz       r3, 0x4C(r31)
	  lis       r4, 0x6D30
	  addi      r6, r4, 0x3071
	  li        r5, 0x54
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  lis       r4, 0x335F
	  lis       r5, 0x38
	  addi      r0, r4, 0x3030
	  lis       r4, 0x6D30
	  stw       r0, 0x1C(r3)
	  addi      r0, r5, 0x3338
	  addi      r6, r4, 0x3079
	  li        r5, 0x54
	  stw       r0, 0x18(r3)
	  lwz       r3, 0x4C(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  lis       r4, 0x345F
	  lis       r5, 0x38
	  addi      r0, r4, 0x3030
	  lis       r4, 0x6D30
	  stw       r0, 0x1C(r3)
	  addi      r0, r5, 0x3338
	  addi      r6, r4, 0x306E
	  li        r5, 0x54
	  stw       r0, 0x18(r3)
	  lwz       r3, 0x4C(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  lis       r5, 0x355F
	  lis       r4, 0x38
	  addi      r0, r5, 0x3030
	  stw       r0, 0x1C(r3)
	  addi      r0, r4, 0x3338
	  stw       r0, 0x18(r3)
	  b         .loc_0x944

	.loc_0x614:
	  cmpwi     r3, 0x1
	  bne-      .loc_0x6C8
	  lwz       r3, 0x4C(r31)
	  lis       r4, 0x6D30
	  addi      r6, r4, 0x3071
	  li        r5, 0x54
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  lis       r4, 0x365F
	  lis       r5, 0x38
	  addi      r0, r4, 0x3030
	  lis       r4, 0x6D30
	  stw       r0, 0x1C(r3)
	  addi      r0, r5, 0x3630
	  addi      r6, r4, 0x3079
	  li        r5, 0x54
	  stw       r0, 0x18(r3)
	  lwz       r3, 0x4C(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  lis       r4, 0x375F
	  lis       r5, 0x38
	  addi      r0, r4, 0x3030
	  lis       r4, 0x6D30
	  stw       r0, 0x1C(r3)
	  addi      r0, r5, 0x3630
	  addi      r6, r4, 0x306E
	  li        r5, 0x54
	  stw       r0, 0x18(r3)
	  lwz       r3, 0x4C(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  lis       r5, 0x385F
	  lis       r4, 0x38
	  addi      r0, r5, 0x3030
	  stw       r0, 0x1C(r3)
	  addi      r0, r4, 0x3630
	  stw       r0, 0x18(r3)
	  b         .loc_0x944

	.loc_0x6C8:
	  lwz       r3, 0x4C(r31)
	  lis       r4, 0x6D30
	  addi      r6, r4, 0x3071
	  li        r5, 0x54
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  lis       r4, 0x345F
	  lis       r5, 0x38
	  addi      r0, r4, 0x3030
	  lis       r4, 0x6D30
	  stw       r0, 0x1C(r3)
	  addi      r0, r5, 0x3336
	  addi      r6, r4, 0x3079
	  li        r5, 0x54
	  stw       r0, 0x18(r3)
	  lwz       r3, 0x4C(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  lis       r4, 0x355F
	  lis       r5, 0x38
	  addi      r0, r4, 0x3030
	  lis       r4, 0x6D30
	  stw       r0, 0x1C(r3)
	  addi      r0, r5, 0x3336
	  addi      r6, r4, 0x306E
	  li        r5, 0x54
	  stw       r0, 0x18(r3)
	  lwz       r3, 0x4C(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  lis       r5, 0x365F
	  lis       r4, 0x38
	  addi      r0, r5, 0x3030
	  stw       r0, 0x1C(r3)
	  addi      r0, r4, 0x3336
	  stw       r0, 0x18(r3)
	  b         .loc_0x944

	.loc_0x774:
	  cmpwi     r3, 0x1
	  bne-      .loc_0x828
	  lwz       r3, 0x4C(r31)
	  lis       r4, 0x6D30
	  addi      r6, r4, 0x3071
	  li        r5, 0x54
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  lis       r4, 0x315F
	  lis       r5, 0x38
	  addi      r0, r4, 0x3030
	  lis       r4, 0x6D30
	  stw       r0, 0x1C(r3)
	  addi      r0, r5, 0x3630
	  addi      r6, r4, 0x3079
	  li        r5, 0x54
	  stw       r0, 0x18(r3)
	  lwz       r3, 0x4C(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  lis       r4, 0x325F
	  lis       r5, 0x38
	  addi      r0, r4, 0x3030
	  lis       r4, 0x6D30
	  stw       r0, 0x1C(r3)
	  addi      r0, r5, 0x3630
	  addi      r6, r4, 0x306E
	  li        r5, 0x54
	  stw       r0, 0x18(r3)
	  lwz       r3, 0x4C(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  lis       r5, 0x335F
	  lis       r4, 0x38
	  addi      r0, r5, 0x3030
	  stw       r0, 0x1C(r3)
	  addi      r0, r4, 0x3630
	  stw       r0, 0x18(r3)
	  b         .loc_0x944

	.loc_0x828:
	  lwz       r3, 0x4C(r31)
	  lis       r4, 0x6D30
	  addi      r6, r4, 0x3071
	  li        r5, 0x54
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  lis       r4, 0x375F
	  lis       r5, 0x38
	  addi      r0, r4, 0x3030
	  lis       r4, 0x6D30
	  stw       r0, 0x1C(r3)
	  addi      r0, r5, 0x3336
	  addi      r6, r4, 0x3079
	  li        r5, 0x54
	  stw       r0, 0x18(r3)
	  lwz       r3, 0x4C(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  lis       r4, 0x385F
	  lis       r5, 0x38
	  addi      r0, r4, 0x3030
	  lis       r4, 0x6D30
	  stw       r0, 0x1C(r3)
	  addi      r0, r5, 0x3336
	  addi      r6, r4, 0x306E
	  li        r5, 0x54
	  stw       r0, 0x18(r3)
	  lwz       r3, 0x4C(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  lis       r5, 0x395F
	  lis       r4, 0x38
	  addi      r0, r5, 0x3030
	  stw       r0, 0x1C(r3)
	  addi      r0, r4, 0x3336
	  stw       r0, 0x18(r3)
	  b         .loc_0x944

	.loc_0x8D4:
	  lwz       r3, 0x4C(r31)
	  lis       r4, 0x6D30
	  addi      r6, r4, 0x3079
	  li        r5, 0x54
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  lis       r4, 0x385F
	  lis       r5, 0x38
	  addi      r0, r4, 0x3030
	  lis       r4, 0x6D30
	  stw       r0, 0x1C(r3)
	  addi      r0, r5, 0x3336
	  addi      r6, r4, 0x306E
	  li        r5, 0x54
	  stw       r0, 0x18(r3)
	  lwz       r3, 0x4C(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  lis       r5, 0x395F
	  lis       r4, 0x38
	  addi      r0, r5, 0x3030
	  stw       r0, 0x1C(r3)
	  addi      r0, r4, 0x3336
	  stw       r0, 0x18(r3)

	.loc_0x944:
	  lwz       r3, 0x4C(r31)
	  bl        -0x13ACC
	  lwz       r0, 0x3C(r31)
	  cmpwi     r0, 0
	  bne-      .loc_0xA24
	  lwz       r3, 0x4C(r31)
	  lis       r5, 0x6E61
	  lis       r4, 0x616E
	  lwz       r12, 0x0(r3)
	  addi      r6, r5, 0x6D65
	  addi      r5, r4, 0x615F
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r5, 0x38(r31)
	  lis       r4, 0x804E
	  li        r22, 0
	  mr        r24, r3
	  subi      r6, r4, 0x7060
	  lwz       r4, 0x18(r5)
	  mr        r23, r22
	  mr        r5, r22

	.loc_0x99C:
	  lwz       r3, 0x0(r6)
	  subis     r0, r3, 0x45
	  cmplwi    r0, 0x4E44
	  bne-      .loc_0x9BC
	  addi      r5, r1, 0x3C
	  li        r3, 0
	  bl        -0x1AD6C
	  b         .loc_0x9EC

	.loc_0x9BC:
	  cmplw     r3, r4
	  bne-      .loc_0x9E0
	  mulli     r0, r5, 0x18
	  lis       r3, 0x804E
	  subi      r3, r3, 0x7060
	  add       r3, r3, r0
	  lwz       r23, 0x8(r3)
	  lwz       r22, 0xC(r3)
	  b         .loc_0x9EC

	.loc_0x9E0:
	  addi      r6, r6, 0x18
	  addi      r5, r5, 0x1
	  b         .loc_0x99C

	.loc_0x9EC:
	  li        r0, 0
	  xor       r3, r22, r0
	  xor       r0, r23, r0
	  or.       r0, r3, r0
	  beq-      .loc_0xA0C
	  stw       r22, 0x1C(r24)
	  stw       r23, 0x18(r24)
	  b         .loc_0xA24

	.loc_0xA0C:
	  lis       r3, 0x804E
	  subi      r3, r3, 0x7060
	  lwz       r0, 0x8(r3)
	  lwz       r3, 0xC(r3)
	  stw       r3, 0x1C(r24)
	  stw       r0, 0x18(r24)

	.loc_0xA24:
	  lwz       r0, 0x3C(r31)
	  cmpwi     r0, 0
	  bne-      .loc_0xBE8
	  lwz       r3, 0x4C(r31)
	  lis       r5, 0x6F6E
	  lis       r4, 0x50
	  lwz       r12, 0x0(r3)
	  addi      r6, r5, 0x3030
	  addi      r5, r4, 0x6963
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  mr        r0, r3
	  lwz       r3, 0x4C(r31)
	  lis       r5, 0x6F6E
	  lis       r4, 0x50
	  lwz       r12, 0x0(r3)
	  mr        r22, r0
	  addi      r6, r5, 0x3031
	  addi      r5, r4, 0x6963
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  mr        r0, r3
	  lwz       r3, 0x4C(r31)
	  lis       r5, 0x6F6E
	  lis       r4, 0x50
	  lwz       r12, 0x0(r3)
	  mr        r23, r0
	  addi      r6, r5, 0x3032
	  addi      r5, r4, 0x6963
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  mr        r0, r3
	  lwz       r3, 0x4C(r31)
	  lis       r5, 0x6F6E
	  lis       r4, 0x50
	  lwz       r12, 0x0(r3)
	  mr        r24, r0
	  addi      r6, r5, 0x3033
	  addi      r5, r4, 0x6963
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r5, 0x38(r31)
	  lis       r4, 0x804E
	  subi      r6, r4, 0x7060
	  li        r20, 0x20
	  lwz       r4, 0x18(r5)
	  mr        r21, r3
	  li        r19, 0x20
	  li        r18, 0x20
	  li        r17, 0x20
	  li        r5, 0

	.loc_0xB00:
	  lwz       r3, 0x0(r6)
	  subis     r0, r3, 0x45
	  cmplwi    r0, 0x4E44
	  bne-      .loc_0xB20
	  addi      r5, r1, 0x30
	  li        r3, 0
	  bl        -0x1AED0
	  b         .loc_0xB58

	.loc_0xB20:
	  cmplw     r3, r4
	  bne-      .loc_0xB4C
	  mulli     r4, r5, 0x18
	  lis       r3, 0x804E
	  subi      r0, r3, 0x7060
	  add       r3, r0, r4
	  lbz       r28, 0x10(r3)
	  lbz       r27, 0x11(r3)
	  lbz       r26, 0x12(r3)
	  lbz       r25, 0x13(r3)
	  b         .loc_0xB58

	.loc_0xB4C:
	  addi      r6, r6, 0x18
	  addi      r5, r5, 0x1
	  b         .loc_0xB00

	.loc_0xB58:
	  cmplwi    r28, 0
	  beq-      .loc_0xB64
	  li        r20, 0xFF

	.loc_0xB64:
	  cmplwi    r27, 0
	  beq-      .loc_0xB70
	  li        r19, 0xFF

	.loc_0xB70:
	  cmplwi    r26, 0
	  beq-      .loc_0xB7C
	  li        r18, 0xFF

	.loc_0xB7C:
	  cmplwi    r25, 0
	  beq-      .loc_0xB88
	  li        r17, 0xFF

	.loc_0xB88:
	  mr        r3, r22
	  mr        r4, r20
	  lwz       r12, 0x0(r22)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r24
	  mr        r4, r19
	  lwz       r12, 0x0(r24)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r23
	  mr        r4, r18
	  lwz       r12, 0x0(r23)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r21
	  mr        r4, r17
	  lwz       r12, 0x0(r21)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl

	.loc_0xBE8:
	  lwz       r0, 0x3C(r31)
	  cmpwi     r0, 0
	  bne-      .loc_0xC60
	  lis       r5, 0x6974
	  lis       r4, 0x68
	  lwz       r3, 0x4C(r31)
	  addi      r6, r5, 0x6C65
	  addi      r5, r4, 0x5F74
	  bl        -0x1ACE0
	  lis       r4, 0x315F
	  lis       r5, 0x38
	  addi      r0, r4, 0x3030
	  lis       r4, 0x7272
	  stw       r0, 0x1C(r3)
	  addi      r0, r5, 0x3336
	  addi      r6, r4, 0x6F72
	  li        r5, 0x4E65
	  stw       r0, 0x18(r3)
	  lwz       r3, 0x4C(r31)
	  bl        -0x1AD0C
	  stw       r3, 0x70(r31)
	  li        r4, 0
	  lwz       r3, 0x70(r31)
	  lbz       r0, 0xB2(r3)
	  stb       r0, 0x7C(r31)
	  lwz       r3, 0x70(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl

	.loc_0xC60:
	  lwz       r0, 0x3C(r31)
	  cmpwi     r0, 0
	  bne-      .loc_0xCC8
	  lis       r6, 0x6974
	  lis       r5, 0x68
	  lwz       r4, 0x4C(r31)
	  mr        r3, r30
	  addi      r6, r6, 0x6C65
	  addi      r5, r5, 0x5F74
	  bl        -0x151E0
	  stw       r3, 0x58(r31)
	  lis       r6, 0x685F
	  mr        r3, r30
	  li        r5, 0
	  lwz       r4, 0x4C(r31)
	  addi      r6, r6, 0x3030
	  bl        -0x15338
	  stw       r3, 0x5C(r31)
	  lis       r6, 0x685F
	  mr        r3, r30
	  li        r5, 0
	  lwz       r4, 0x4C(r31)
	  addi      r6, r6, 0x3031
	  bl        -0x15354
	  stw       r3, 0x60(r31)
	  b         .loc_0xD28

	.loc_0xCC8:
	  lwz       r0, 0x44(r31)
	  cmpwi     r0, 0x2
	  beq-      .loc_0xD28
	  lis       r6, 0x6D30
	  lwz       r4, 0x4C(r31)
	  mr        r3, r30
	  li        r5, 0x54
	  addi      r6, r6, 0x3071
	  bl        -0x15244
	  stw       r3, 0x58(r31)
	  lis       r6, 0x6D30
	  mr        r3, r30
	  li        r5, 0x54
	  lwz       r4, 0x4C(r31)
	  addi      r6, r6, 0x3079
	  bl        -0x1539C
	  stw       r3, 0x5C(r31)
	  lis       r6, 0x6D30
	  mr        r3, r30
	  li        r5, 0x54
	  lwz       r4, 0x4C(r31)
	  addi      r6, r6, 0x306E
	  bl        -0x153B8
	  stw       r3, 0x60(r31)

	.loc_0xD28:
	  lwz       r3, 0x58(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0xD7C
	  lwz       r4, 0x38(r31)
	  lbz       r0, 0x1C(r4)
	  cmplwi    r0, 0
	  beq-      .loc_0xD5C
	  bl        -0x1488C
	  lwz       r3, 0x5C(r31)
	  bl        -0x14894
	  lwz       r3, 0x60(r31)
	  bl        -0x1489C
	  b         .loc_0xD7C

	.loc_0xD5C:
	  lfs       f1, -0x74C(r2)
	  bl        -0x14890
	  lwz       r3, 0x5C(r31)
	  lfs       f1, -0x748(r2)
	  bl        -0x1489C
	  lwz       r3, 0x60(r31)
	  lfs       f1, -0x744(r2)
	  bl        -0x148A8

	.loc_0xD7C:
	  li        r0, 0
	  stw       r0, 0x48(r31)
	  lwz       r0, 0x44(r31)
	  cmpwi     r0, 0x1
	  bne-      .loc_0xD98
	  li        r0, 0x1
	  stw       r0, 0x48(r31)

	.loc_0xD98:
	  lwz       r0, 0x44(r31)
	  cmpwi     r0, 0x2
	  beq-      .loc_0xEB8
	  li        r3, 0x78
	  bl        -0x2F9E88
	  mr.       r0, r3
	  beq-      .loc_0xDBC
	  bl        -0x13F10
	  mr        r0, r3

	.loc_0xDBC:
	  stw       r0, 0x50(r31)
	  lwz       r0, 0x3C(r31)
	  cmpwi     r0, 0
	  bne-      .loc_0xE2C
	  lis       r3, 0x735F
	  lis       r6, 0x696C
	  addi      r0, r3, 0x3030
	  lis       r5, 0x6972
	  stw       r0, 0xC(r1)
	  li        r11, 0
	  lis       r4, 0x755F
	  lis       r3, 0x685F
	  stw       r11, 0x8(r1)
	  addi      r6, r6, 0x3030
	  addi      r0, r5, 0x3030
	  addi      r8, r4, 0x3030
	  stw       r6, 0x14(r1)
	  addi      r10, r3, 0x3030
	  li        r5, 0x2
	  li        r7, 0x6E
	  stw       r11, 0x10(r1)
	  li        r9, 0
	  stw       r0, 0x1C(r1)
	  stw       r11, 0x18(r1)
	  lwz       r3, 0x50(r31)
	  lwz       r4, 0x4C(r31)
	  bl        -0x1376C
	  b         .loc_0xEA0

	.loc_0xE2C:
	  lis       r10, 0x795F
	  lis       r4, 0x6D30
	  addi      r0, r10, 0x6972
	  lis       r5, 0x506D
	  stw       r0, 0xC(r1)
	  addi      r9, r5, 0x3030
	  lis       r3, 0x6E5F
	  addi      r6, r4, 0x3079
	  stw       r9, 0x8(r1)
	  addi      r7, r4, 0x306E
	  li        r5, 0x4E
	  li        r11, 0x54
	  stw       r7, 0x14(r1)
	  addi      r4, r3, 0x696C
	  addi      r0, r3, 0x6972
	  mr        r8, r6
	  stw       r5, 0x10(r1)
	  addi      r10, r10, 0x696C
	  li        r5, 0x4E
	  stw       r7, 0x1C(r1)
	  li        r7, 0x54
	  stw       r11, 0x18(r1)
	  stw       r4, 0x24(r1)
	  stw       r9, 0x20(r1)
	  stw       r0, 0x2C(r1)
	  stw       r9, 0x28(r1)
	  lwz       r3, 0x50(r31)
	  lwz       r4, 0x4C(r31)
	  bl        -0x13A00

	.loc_0xEA0:
	  lwz       r0, 0x48(r31)
	  lwz       r3, 0x50(r31)
	  rlwinm    r4,r0,0,16,31
	  bl        -0x13238
	  mr        r3, r31
	  bl        .loc_0x1120

	.loc_0xEB8:
	  lwz       r0, 0x3C(r31)
	  cmpwi     r0, 0
	  bne-      .loc_0xF2C
	  li        r3, 0x1C
	  bl        -0x2F9FA8
	  mr.       r0, r3
	  beq-      .loc_0xEE0
	  li        r4, 0x3
	  bl        -0x18A04
	  mr        r0, r3

	.loc_0xEE0:
	  stw       r0, 0x64(r31)
	  mr        r4, r30
	  lfs       f1, -0x740(r2)
	  addi      r6, r29, 0x6C
	  lwz       r3, 0x64(r31)
	  lwz       r5, 0x4C(r31)
	  bl        -0x184E4
	  lwz       r3, 0x64(r31)
	  mr        r4, r30
	  lwz       r5, 0x4C(r31)
	  addi      r6, r29, 0x7C
	  lfs       f1, -0x740(r2)
	  bl        -0x184FC
	  lwz       r3, 0x64(r31)
	  mr        r4, r30
	  lwz       r5, 0x4C(r31)
	  addi      r6, r29, 0x8C
	  lfs       f1, -0x740(r2)
	  bl        -0x18514

	.loc_0xF2C:
	  lwz       r0, 0x3C(r31)
	  cmpwi     r0, 0
	  bne-      .loc_0x10FC
	  lwz       r3, 0x38(r31)
	  addi      r7, r3, 0x8
	  lwz       r0, 0x8(r3)
	  cmpwi     r0, 0
	  blt-      .loc_0x10FC
	  lwz       r0, 0xC(r3)
	  cmpwi     r0, 0
	  blt-      .loc_0x10FC
	  stw       r30, 0x8(r1)
	  lis       r5, 0x6D5F
	  lis       r4, 0x69
	  li        r8, 0x3
	  lwz       r3, 0x4C(r31)
	  addi      r6, r5, 0x3031
	  addi      r5, r4, 0x7465
	  li        r9, 0
	  li        r10, 0x1
	  bl        -0x118F8
	  stw       r30, 0x8(r1)
	  lis       r6, 0x656D
	  lis       r5, 0x54
	  mr        r17, r3
	  lwz       r4, 0x38(r31)
	  addi      r6, r6, 0x3031
	  lwz       r3, 0x4C(r31)
	  addi      r5, r5, 0x6974
	  addi      r7, r4, 0xC
	  li        r8, 0x3
	  li        r9, 0
	  li        r10, 0x1
	  bl        -0x1192C
	  stw       r30, 0x8(r1)
	  lis       r6, 0x6B69
	  lis       r5, 0x50
	  mr        r18, r3
	  lwz       r4, 0x38(r31)
	  addi      r6, r6, 0x3031
	  lwz       r3, 0x4C(r31)
	  addi      r5, r5, 0x7069
	  addi      r7, r4, 0x10
	  li        r8, 0x3
	  li        r9, 0
	  li        r10, 0x1
	  bl        -0x11960
	  stw       r30, 0x8(r1)
	  lis       r6, 0x6B69
	  lis       r5, 0x5061
	  mr        r19, r3
	  lwz       r4, 0x38(r31)
	  addi      r6, r6, 0x3031
	  lwz       r3, 0x4C(r31)
	  addi      r5, r5, 0x7069
	  addi      r7, r4, 0x14
	  li        r8, 0x3
	  li        r9, 0
	  li        r10, 0x1
	  bl        -0x11994
	  mr        r0, r3
	  mr        r3, r17
	  mr        r20, r0
	  li        r4, 0
	  bl        -0x126D4
	  mr        r3, r18
	  li        r4, 0x2
	  bl        -0x126E0
	  mr        r3, r19
	  li        r4, 0
	  bl        -0x126EC
	  mr        r3, r20
	  li        r4, 0x2
	  bl        -0x126F8
	  lwz       r4, 0x38(r31)
	  lbz       r0, 0x1D(r4)
	  cmplwi    r0, 0
	  bne-      .loc_0x1074
	  lwz       r3, 0x8(r4)
	  lwz       r0, 0xC(r4)
	  cmplw     r3, r0
	  bne-      .loc_0x108C

	.loc_0x1074:
	  mr        r3, r18
	  lwz       r12, 0x0(r18)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x10FC

	.loc_0x108C:
	  mr        r3, r17
	  li        r4, 0x1
	  bl        -0x1273C
	  mr        r3, r18
	  lwz       r12, 0x0(r18)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r17
	  bl        -0x12874
	  lwz       r12, 0x0(r3)
	  lis       r4, 0x8051
	  addi      r4, r4, 0x3E28
	  lfs       f2, -0x750(r2)
	  lwz       r12, 0x10(r12)
	  lfs       f1, 0x4(r4)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x4C(r31)
	  lis       r4, 0x7375
	  addi      r6, r4, 0x7261
	  li        r5, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  li        r0, 0
	  stb       r0, 0xB0(r3)

	.loc_0x10FC:
	  li        r0, 0x1
	  stw       r0, 0x40(r31)
	  lwz       r3, -0x6858(r13)
	  bl        -0x11368
	  lmw       r17, 0x54(r1)
	  lwz       r0, 0x94(r1)
	  mtlr      r0
	  addi      r1, r1, 0x90
	  blr

	.loc_0x1120:
	*/
}

/*
 * --INFO--
 * Address:	8031E0A4
 * Size:	000094
 */
void og::newScreen::ObjAnaDemo::setBlinkMenu(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r0, 0x58(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x80
	  lwz       r0, 0x48(r31)
	  cmpwi     r0, 0x1
	  beq-      .loc_0x60
	  bge-      .loc_0x80
	  cmpwi     r0, 0
	  bge-      .loc_0x3C
	  b         .loc_0x80

	.loc_0x3C:
	  lwz       r3, 0x5C(r31)
	  lfs       f1, -0x748(r2)
	  lfs       f2, -0x750(r2)
	  bl        -0x14C14
	  lfs       f1, -0x750(r2)
	  lwz       r3, 0x60(r31)
	  fmr       f2, f1
	  bl        -0x14C24
	  b         .loc_0x80

	.loc_0x60:
	  lfs       f1, -0x750(r2)
	  lwz       r3, 0x5C(r31)
	  fmr       f2, f1
	  bl        -0x14C38
	  lwz       r3, 0x60(r31)
	  lfs       f1, -0x748(r2)
	  lfs       f2, -0x750(r2)
	  bl        -0x14C48

	.loc_0x80:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8031E138
 * Size:	0005D4
 */
void og::newScreen::ObjAnaDemo::doUpdate(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  li        r31, 0
	  stw       r30, 0x18(r1)
	  mr        r30, r3
	  bl        .loc_0x5D4
	  mr        r3, r30
	  bl        0x135EE4
	  lwz       r0, 0x40(r30)
	  cmplwi    r0, 0x6
	  bgt-      .loc_0x5B8
	  lis       r4, 0x804E
	  rlwinm    r0,r0,2,0,29
	  subi      r4, r4, 0x6C28
	  lwzx      r0, r4, r0
	  mtctr     r0
	  bctr
	  li        r0, 0x2
	  lis       r3, 0x8051
	  stw       r0, 0x40(r30)
	  addi      r3, r3, 0x3E28
	  lfs       f0, 0x8(r3)
	  stfs      f0, 0x80(r30)
	  lfs       f0, 0xC(r3)
	  stfs      f0, 0x84(r30)
	  b         .loc_0x5B8
	  lfs       f2, 0x84(r30)
	  lfs       f1, -0x750(r2)
	  fcmpo     cr0, f2, f1
	  ble-      .loc_0xC4
	  lwz       r3, -0x6514(r13)
	  lfs       f0, 0x54(r3)
	  fsubs     f0, f2, f0
	  stfs      f0, 0x84(r30)
	  lfs       f0, 0x84(r30)
	  fcmpo     cr0, f0, f1
	  bge-      .loc_0xC4
	  lwz       r0, 0x44(r30)
	  cmpwi     r0, 0x1
	  bne-      .loc_0xB4
	  lwz       r3, -0x6858(r13)
	  bl        -0x10F58
	  b         .loc_0xC4

	.loc_0xB4:
	  cmpwi     r0, 0x2
	  bne-      .loc_0xC4
	  lwz       r3, -0x6858(r13)
	  bl        -0x11584

	.loc_0xC4:
	  lfs       f2, 0x80(r30)
	  lfs       f1, -0x750(r2)
	  fcmpo     cr0, f2, f1
	  ble-      .loc_0x5B8
	  lwz       r3, -0x6514(r13)
	  lfs       f0, 0x54(r3)
	  fsubs     f0, f2, f0
	  stfs      f0, 0x80(r30)
	  lfs       f0, 0x80(r30)
	  fcmpo     cr0, f0, f1
	  bge-      .loc_0x5B8
	  lwz       r3, 0x50(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0x100
	  bl        -0x14134

	.loc_0x100:
	  lwz       r0, 0x44(r30)
	  cmpwi     r0, 0x2
	  bne-      .loc_0x118
	  li        r0, 0x6
	  stw       r0, 0x40(r30)
	  b         .loc_0x5B8

	.loc_0x118:
	  li        r0, 0x3
	  stw       r0, 0x40(r30)
	  b         .loc_0x5B8
	  lis       r4, 0x800
	  lwz       r5, 0x1C(r3)
	  addi      r0, r4, 0x8
	  and.      r0, r5, r0
	  beq-      .loc_0x1D4
	  lwz       r3, 0x48(r30)
	  cmpwi     r3, 0
	  ble-      .loc_0x5B8
	  subi      r0, r3, 0x1
	  stw       r0, 0x48(r30)
	  lwz       r3, 0x50(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0x164
	  lwz       r0, 0x48(r30)
	  rlwinm    r4,r0,0,16,31
	  bl        -0x13738

	.loc_0x164:
	  lwz       r0, 0x58(r30)
	  cmplwi    r0, 0
	  beq-      .loc_0x5B8
	  lwz       r0, 0x48(r30)
	  cmpwi     r0, 0x1
	  beq-      .loc_0x1B0
	  bge-      .loc_0x5B8
	  cmpwi     r0, 0
	  bge-      .loc_0x18C
	  b         .loc_0x5B8

	.loc_0x18C:
	  lwz       r3, 0x5C(r30)
	  lfs       f1, -0x748(r2)
	  lfs       f2, -0x750(r2)
	  bl        -0x14DF8
	  lfs       f1, -0x750(r2)
	  lwz       r3, 0x60(r30)
	  fmr       f2, f1
	  bl        -0x14E08
	  b         .loc_0x5B8

	.loc_0x1B0:
	  lfs       f1, -0x750(r2)
	  lwz       r3, 0x5C(r30)
	  fmr       f2, f1
	  bl        -0x14E1C
	  lwz       r3, 0x60(r30)
	  lfs       f1, -0x748(r2)
	  lfs       f2, -0x750(r2)
	  bl        -0x14E2C
	  b         .loc_0x5B8

	.loc_0x1D4:
	  lis       r3, 0x400
	  addi      r0, r3, 0x4
	  and.      r0, r5, r0
	  beq-      .loc_0x280
	  lwz       r3, 0x48(r30)
	  cmpwi     r3, 0x1
	  bge-      .loc_0x5B8
	  addi      r0, r3, 0x1
	  stw       r0, 0x48(r30)
	  lwz       r3, 0x50(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0x210
	  lwz       r0, 0x48(r30)
	  rlwinm    r4,r0,0,16,31
	  bl        -0x137E4

	.loc_0x210:
	  lwz       r0, 0x58(r30)
	  cmplwi    r0, 0
	  beq-      .loc_0x5B8
	  lwz       r0, 0x48(r30)
	  cmpwi     r0, 0x1
	  beq-      .loc_0x25C
	  bge-      .loc_0x5B8
	  cmpwi     r0, 0
	  bge-      .loc_0x238
	  b         .loc_0x5B8

	.loc_0x238:
	  lwz       r3, 0x5C(r30)
	  lfs       f1, -0x748(r2)
	  lfs       f2, -0x750(r2)
	  bl        -0x14EA4
	  lfs       f1, -0x750(r2)
	  lwz       r3, 0x60(r30)
	  fmr       f2, f1
	  bl        -0x14EB4
	  b         .loc_0x5B8

	.loc_0x25C:
	  lfs       f1, -0x750(r2)
	  lwz       r3, 0x5C(r30)
	  fmr       f2, f1
	  bl        -0x14EC8
	  lwz       r3, 0x60(r30)
	  lfs       f1, -0x748(r2)
	  lfs       f2, -0x750(r2)
	  bl        -0x14ED8
	  b         .loc_0x5B8

	.loc_0x280:
	  rlwinm.   r0,r5,0,23,23
	  beq-      .loc_0x3A4
	  lwz       r3, 0x50(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0x298
	  bl        -0x14238

	.loc_0x298:
	  lwz       r0, 0x48(r30)
	  cmpwi     r0, 0
	  bne-      .loc_0x37C
	  lwz       r3, 0x38(r30)
	  li        r0, 0x1
	  stb       r0, 0x1E(r3)
	  lwz       r0, 0x58(r30)
	  cmplwi    r0, 0
	  beq-      .loc_0x2CC
	  lwz       r3, 0x5C(r30)
	  bl        -0x14F68
	  lwz       r3, 0x60(r30)
	  bl        -0x14F70

	.loc_0x2CC:
	  lwz       r3, 0x38(r30)
	  lwz       r0, 0x10(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x330
	  lwz       r3, 0x50(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0x2EC
	  bl        -0x1428C

	.loc_0x2EC:
	  li        r0, 0x5
	  lfs       f0, -0x74C(r2)
	  stw       r0, 0x40(r30)
	  stfs      f0, 0x78(r30)
	  lwz       r3, 0x58(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0x30C
	  stfs      f0, 0x6C(r3)

	.loc_0x30C:
	  lwz       r3, -0x6858(r13)
	  bl        -0x117D4
	  lwz       r3, 0x70(r30)
	  li        r4, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x5B8

	.loc_0x330:
	  lwz       r0, 0x3C(r30)
	  cmpwi     r0, 0x1
	  bne-      .loc_0x358
	  li        r0, 0x4
	  lfs       f0, -0x750(r2)
	  stw       r0, 0x40(r30)
	  stfs      f0, 0x90(r30)
	  lwz       r3, -0x6858(r13)
	  bl        -0x11964
	  b         .loc_0x5B8

	.loc_0x358:
	  lfs       f0, -0x74C(r2)
	  stfs      f0, 0x68(r30)
	  lwz       r3, -0x6858(r13)
	  bl        -0x11978
	  li        r0, 0x4
	  lfs       f0, -0x750(r2)
	  stw       r0, 0x40(r30)
	  stfs      f0, 0x90(r30)
	  b         .loc_0x5B8

	.loc_0x37C:
	  lwz       r3, 0x38(r30)
	  li        r4, 0
	  li        r0, 0x4
	  lfs       f0, -0x750(r2)
	  stb       r4, 0x1E(r3)
	  stw       r0, 0x40(r30)
	  stfs      f0, 0x90(r30)
	  lwz       r3, -0x6858(r13)
	  bl        -0x119B0
	  b         .loc_0x5B8

	.loc_0x3A4:
	  rlwinm.   r0,r5,0,22,22
	  beq-      .loc_0x5B8
	  lwz       r3, 0x50(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0x3BC
	  bl        -0x1435C

	.loc_0x3BC:
	  lwz       r3, 0x38(r30)
	  li        r4, 0
	  li        r0, 0x4
	  lfs       f0, -0x750(r2)
	  stb       r4, 0x1E(r3)
	  stw       r0, 0x40(r30)
	  stfs      f0, 0x90(r30)
	  lwz       r3, -0x6858(r13)
	  bl        -0x11940
	  b         .loc_0x5B8
	  lwz       r4, 0x1C(r3)
	  li        r3, 0
	  rlwinm.   r0,r4,0,23,23
	  bne-      .loc_0x414
	  rlwinm.   r0,r4,0,22,22
	  bne-      .loc_0x414
	  rlwinm.   r0,r4,0,21,21
	  bne-      .loc_0x414
	  rlwinm.   r0,r4,0,20,20
	  bne-      .loc_0x414
	  rlwinm.   r0,r4,0,19,19
	  beq-      .loc_0x418

	.loc_0x414:
	  li        r3, 0x1

	.loc_0x418:
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x5B8
	  li        r0, 0x4
	  lfs       f0, -0x750(r2)
	  stw       r0, 0x40(r30)
	  li        r0, 0
	  stfs      f0, 0x90(r30)
	  lwz       r3, 0x38(r30)
	  stb       r0, 0x1E(r3)
	  lwz       r3, -0x6858(r13)
	  bl        -0x119A4
	  b         .loc_0x5B8
	  lfs       f2, 0x74(r30)
	  lfs       f0, -0x740(r2)
	  fcmpo     cr0, f2, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x4C0
	  lwz       r4, 0x1C(r3)
	  li        r3, 0
	  rlwinm.   r0,r4,0,23,23
	  bne-      .loc_0x48C
	  rlwinm.   r0,r4,0,22,22
	  bne-      .loc_0x48C
	  rlwinm.   r0,r4,0,21,21
	  bne-      .loc_0x48C
	  rlwinm.   r0,r4,0,20,20
	  bne-      .loc_0x48C
	  rlwinm.   r0,r4,0,19,19
	  beq-      .loc_0x490

	.loc_0x48C:
	  li        r3, 0x1

	.loc_0x490:
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x5B8
	  li        r0, 0x4
	  lfs       f0, -0x750(r2)
	  stw       r0, 0x40(r30)
	  li        r0, 0
	  stfs      f0, 0x90(r30)
	  lwz       r3, 0x38(r30)
	  stb       r0, 0x1E(r3)
	  lwz       r3, -0x6858(r13)
	  bl        -0x11A1C
	  b         .loc_0x5B8

	.loc_0x4C0:
	  lfs       f1, 0x78(r30)
	  lfs       f0, -0x750(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x4E4
	  lwz       r3, -0x6514(r13)
	  lfs       f0, 0x54(r3)
	  fsubs     f0, f1, f0
	  stfs      f0, 0x78(r30)
	  b         .loc_0x5B8

	.loc_0x4E4:
	  lbz       r4, 0x7C(r30)
	  lis       r0, 0x4330
	  lwz       r3, 0x70(r30)
	  stw       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  stw       r0, 0x8(r1)
	  lfd       f1, -0x730(r2)
	  lfd       f0, 0x8(r1)
	  lwz       r12, 0x24(r12)
	  fsubs     f0, f0, f1
	  fmuls     f0, f0, f2
	  fctiwz    f0, f0
	  stfd      f0, 0x10(r1)
	  lwz       r4, 0x14(r1)
	  mtctr     r12
	  bctrl
	  lwz       r3, -0x6514(r13)
	  lfs       f1, -0x738(r2)
	  lfs       f0, 0x54(r3)
	  lfs       f3, -0x73C(r2)
	  fmuls     f2, f1, f0
	  lfs       f1, 0x74(r30)
	  lfs       f0, -0x740(r2)
	  fmadds    f1, f3, f2, f1
	  stfs      f1, 0x74(r30)
	  lfs       f1, 0x74(r30)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x5B8
	  stfs      f0, 0x74(r30)
	  b         .loc_0x5B8
	  lwz       r4, -0x6514(r13)
	  lis       r3, 0x8051
	  lfs       f1, 0x90(r30)
	  lfs       f0, 0x54(r4)
	  fadds     f0, f1, f0
	  stfs      f0, 0x90(r30)
	  lfs       f1, 0x90(r30)
	  lfs       f2, 0x3E28(r3)
	  bl        -0x1C018
	  lfs       f0, -0x734(r2)
	  lis       r3, 0x8051
	  fmuls     f0, f0, f1
	  stfs      f0, 0x8C(r30)
	  lfs       f1, 0x90(r30)
	  lfs       f0, 0x3E28(r3)
	  fcmpo     cr0, f1, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x5B8
	  lwz       r3, 0x38(r30)
	  li        r0, 0
	  li        r31, 0x1
	  stb       r0, 0x1F(r3)
	  stw       r0, 0x40(r30)

	.loc_0x5B8:
	  lwz       r0, 0x24(r1)
	  mr        r3, r31
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr

	.loc_0x5D4:
	*/
}

/*
 * --INFO--
 * Address:	8031E70C
 * Size:	000080
 */
void og::newScreen::ObjAnaDemo::commonUpdate(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r3, 0x50(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x24
	  bl        -0x13B20

	.loc_0x24:
	  lwz       r3, 0x64(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x34
	  bl        -0x19254

	.loc_0x34:
	  lfs       f3, 0x8C(r31)
	  lfs       f2, 0x243C(r2)
	  lfs       f1, -0x750(r2)
	  lfs       f0, 0x2440(r2)
	  fadds     f2, f3, f2
	  lwz       r3, 0x4C(r31)
	  fadds     f0, f1, f0
	  stfs      f2, 0x140(r3)
	  stfs      f0, 0x144(r3)
	  lwz       r3, 0x4C(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x30(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8031E78C
 * Size:	000074
 */
void og::newScreen::ObjAnaDemo::doDraw((Graphics&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  lwz       r0, 0x40(r3)
	  cmpwi     r0, 0
	  beq-      .loc_0x5C
	  lwz       r3, 0x4C(r30)
	  addi      r31, r4, 0x190
	  cmplwi    r3, 0
	  beq-      .loc_0x48
	  lwz       r12, 0x0(r3)
	  mr        r5, r31
	  lwz       r12, 0x9C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x48:
	  lwz       r3, 0x50(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0x5C
	  mr        r4, r31
	  bl        -0x13658

	.loc_0x5C:
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
 * Address:	8031E800
 * Size:	000018
 */
void og::newScreen::ObjAnaDemo::doStart((Screen::StartSceneArg const*))
{
	/*
	.loc_0x0:
	  lfs       f1, -0x750(r2)
	  lfs       f0, -0x728(r2)
	  stfs      f1, 0x90(r3)
	  stfs      f0, 0x8C(r3)
	  li        r3, 0x1
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8031E818
 * Size:	000008
 */
void og::newScreen::ObjAnaDemo::doEnd((Screen::EndSceneArg const*))
{
	/*
	.loc_0x0:
	  li        r3, 0x1
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8031E820
 * Size:	000004
 */
void og::newScreen::ObjAnaDemo::doUpdateFadeinFinish(void)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8031E824
 * Size:	00000C
 */
void og::newScreen::ObjAnaDemo::doUpdateFinish(void)
{
	/*
	.loc_0x0:
	  lfs       f0, -0x750(r2)
	  stfs      f0, 0x90(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8031E830
 * Size:	000094
 */
void og::newScreen::ObjAnaDemo::doUpdateFadeoutFinish(void)
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
	  lwz       r4, 0x38(r31)
	  mr        r31, r3
	  lbz       r0, 0x1E(r4)
	  cmplwi    r0, 0
	  beq-      .loc_0x44
	  li        r4, 0
	  bl        0x133724
	  b         .loc_0x80

	.loc_0x44:
	  bl        0x13374C
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x80
	  mr        r3, r31
	  li        r4, 0
	  bl        0x1336D8
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x80
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  subi      r3, r3, 0x1228
	  li        r4, 0x3E2
	  subi      r5, r5, 0x118C
	  crclr     6, 0x6
	  bl        -0x2F426C

	.loc_0x80:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8031E8C4
 * Size:	0000E4
 */
void og::newScreen::ObjAnaDemo::doUpdateFadein(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  li        r31, 0
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  lwz       r3, 0x50(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x2C
	  bl        -0x13CE0

	.loc_0x2C:
	  lwz       r3, 0x64(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0x3C
	  bl        -0x19414

	.loc_0x3C:
	  lfs       f3, 0x8C(r30)
	  lfs       f2, 0x243C(r2)
	  lfs       f1, -0x750(r2)
	  lfs       f0, 0x2440(r2)
	  fadds     f2, f3, f2
	  lwz       r3, 0x4C(r30)
	  fadds     f0, f1, f0
	  stfs      f2, 0x140(r3)
	  stfs      f0, 0x144(r3)
	  lwz       r3, 0x4C(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x30(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, -0x6514(r13)
	  lis       r3, 0x8051
	  lfs       f1, 0x90(r30)
	  lfs       f0, 0x54(r4)
	  fadds     f0, f1, f0
	  stfs      f0, 0x90(r30)
	  lfs       f1, 0x90(r30)
	  lfs       f2, 0x3E28(r3)
	  bl        -0x1C2BC
	  lfs       f2, -0x740(r2)
	  lis       r3, 0x8051
	  lfs       f0, -0x728(r2)
	  fsubs     f1, f2, f1
	  fmuls     f0, f0, f1
	  stfs      f0, 0x8C(r30)
	  lfs       f1, 0x90(r30)
	  lfs       f0, 0x3E28(r3)
	  fcmpo     cr0, f1, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0xC8
	  li        r31, 0x1

	.loc_0xC8:
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
 * Address:	8031E9A8
 * Size:	000084
 */
void og::newScreen::ObjAnaDemo::doUpdateFadeout(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r3, 0x50(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x24
	  bl        -0x13DBC

	.loc_0x24:
	  lwz       r3, 0x64(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x34
	  bl        -0x194F0

	.loc_0x34:
	  lfs       f3, 0x8C(r31)
	  lfs       f2, 0x243C(r2)
	  lfs       f1, -0x750(r2)
	  lfs       f0, 0x2440(r2)
	  fadds     f2, f3, f2
	  lwz       r3, 0x4C(r31)
	  fadds     f0, f1, f0
	  stfs      f2, 0x140(r3)
	  stfs      f0, 0x144(r3)
	  lwz       r3, 0x4C(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x30(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  li        r3, 0x1
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8031EA2C
 * Size:	000024
 */
void __sinit_ogObjAnaDemo_cpp(void)
{
	/*
	.loc_0x0:
	  lfs       f2, -0x724(r2)
	  lis       r3, 0x8051
	  lfs       f1, -0x720(r2)
	  stfsu     f2, 0x3E28(r3)
	  lfs       f0, -0x740(r2)
	  stfs      f1, 0x4(r3)
	  stfs      f0, 0x8(r3)
	  stfs      f2, 0xC(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8031EA50
 * Size:	000008
 */
void @24 @og::newScreen::ObjAnaDemo::__dt(void)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x18
	  b         -0x1B7C
	*/
}
