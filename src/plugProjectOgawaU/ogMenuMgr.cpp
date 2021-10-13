

/*
 * --INFO--
 * Address:	80309E28
 * Size:	0001E8
 */
void og::Screen::MenuMgr::__ct(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f1, -0xCE0(r2)
	  stw       r0, 0x14(r1)
	  li        r0, 0
	  lfs       f0, -0xCDC(r2)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  sth       r0, 0x8(r3)
	  li        r3, 0x1C
	  sth       r0, 0xA(r31)
	  stfs      f1, 0xC(r31)
	  stfs      f0, 0x10(r31)
	  stw       r0, 0x14(r31)
	  stw       r0, 0x18(r31)
	  stw       r0, 0x1C(r31)
	  stw       r0, 0x20(r31)
	  stw       r0, 0x24(r31)
	  stw       r0, 0x28(r31)
	  stw       r0, 0x40(r31)
	  stw       r0, 0x44(r31)
	  stb       r0, 0x2C(r31)
	  stb       r0, 0x2D(r31)
	  stb       r0, 0x2E(r31)
	  stw       r0, 0x0(r31)
	  stfs      f1, 0x4(r31)
	  stfs      f1, 0x30(r31)
	  stfs      f1, 0x34(r31)
	  stfs      f1, 0x38(r31)
	  stfs      f1, 0x3C(r31)
	  stb       r0, 0x48(r31)
	  stfs      f1, 0x4C(r31)
	  stfs      f1, 0x50(r31)
	  stfs      f1, 0x54(r31)
	  stfs      f1, 0x58(r31)
	  stfs      f1, 0x5C(r31)
	  stfs      f1, 0x60(r31)
	  stfs      f1, 0x64(r31)
	  stfs      f1, 0x68(r31)
	  stfs      f1, 0x6C(r31)
	  sth       r0, 0x70(r31)
	  bl        -0x2E6028
	  cmplwi    r3, 0
	  beq-      .loc_0x134
	  lis       r5, 0x804C
	  lis       r4, 0x804C
	  addi      r0, r5, 0x14F0
	  lis       r6, 0x804A
	  stw       r0, 0x0(r3)
	  addi      r0, r4, 0x14D8
	  lis       r5, 0x804E
	  lis       r4, 0x804E
	  stw       r0, 0x0(r3)
	  li        r10, 0
	  addi      r9, r5, 0x7420
	  addi      r7, r4, 0x73CC
	  stb       r10, 0x4(r3)
	  lis       r4, 0x804E
	  addi      r4, r4, 0x7648
	  subi      r0, r6, 0x1D84
	  stb       r10, 0x5(r3)
	  addi      r8, r9, 0x18
	  addi      r6, r7, 0x18
	  addi      r5, r31, 0x30
	  stw       r0, 0x8(r3)
	  addi      r0, r4, 0x18
	  lfs       f0, -0xCDC(r2)
	  stw       r9, 0x0(r3)
	  stw       r8, 0x8(r3)
	  sth       r10, 0xC(r3)
	  stw       r10, 0x10(r3)
	  stw       r7, 0x0(r3)
	  stw       r6, 0x8(r3)
	  stw       r5, 0x14(r3)
	  stw       r4, 0x0(r3)
	  stw       r0, 0x8(r3)
	  stfs      f0, 0x18(r3)

	.loc_0x134:
	  stw       r3, 0x40(r31)
	  li        r3, 0x1C
	  bl        -0x2E60C0
	  cmplwi    r3, 0
	  beq-      .loc_0x1CC
	  lis       r5, 0x804C
	  lis       r4, 0x804C
	  addi      r0, r5, 0x14F0
	  lis       r6, 0x804A
	  stw       r0, 0x0(r3)
	  addi      r0, r4, 0x14D8
	  lis       r5, 0x804E
	  lis       r4, 0x804E
	  stw       r0, 0x0(r3)
	  li        r10, 0
	  addi      r9, r5, 0x7420
	  addi      r7, r4, 0x73CC
	  stb       r10, 0x4(r3)
	  lis       r4, 0x804E
	  addi      r4, r4, 0x7648
	  subi      r0, r6, 0x1D84
	  stb       r10, 0x5(r3)
	  addi      r8, r9, 0x18
	  addi      r6, r7, 0x18
	  addi      r5, r31, 0x38
	  stw       r0, 0x8(r3)
	  addi      r0, r4, 0x18
	  lfs       f0, -0xCDC(r2)
	  stw       r9, 0x0(r3)
	  stw       r8, 0x8(r3)
	  sth       r10, 0xC(r3)
	  stw       r10, 0x10(r3)
	  stw       r7, 0x0(r3)
	  stw       r6, 0x8(r3)
	  stw       r5, 0x14(r3)
	  stw       r4, 0x0(r3)
	  stw       r0, 0x8(r3)
	  stfs      f0, 0x18(r3)

	.loc_0x1CC:
	  stw       r3, 0x44(r31)
	  mr        r3, r31
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8030A010
 * Size:	000084
 */
void efx2d::TChasePos::__dt(void)
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
	  beq-      .loc_0x68
	  lis       r3, 0x804E
	  addi      r3, r3, 0x73CC
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x18
	  stw       r0, 0x8(r30)
	  beq-      .loc_0x58
	  lis       r4, 0x804E
	  addi      r3, r30, 0x8
	  addi      r5, r4, 0x7420
	  li        r4, 0
	  stw       r5, 0x0(r30)
	  addi      r0, r5, 0x18
	  stw       r0, 0x8(r30)
	  bl        -0x27A3C8

	.loc_0x58:
	  extsh.    r0, r31
	  ble-      .loc_0x68
	  mr        r3, r30
	  bl        -0x2E5FC0

	.loc_0x68:
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
 * Address:	8030A094
 * Size:	00006C
 */
void efx2d::TForever::__dt(void)
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
	  beq-      .loc_0x50
	  lis       r4, 0x804E
	  addi      r3, r30, 0x8
	  addi      r5, r4, 0x7420
	  li        r4, 0
	  stw       r5, 0x0(r30)
	  addi      r0, r5, 0x18
	  stw       r0, 0x8(r30)
	  bl        -0x27A434
	  extsh.    r0, r31
	  ble-      .loc_0x50
	  mr        r3, r30
	  bl        -0x2E602C

	.loc_0x50:
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
 * Address:	8030A100
 * Size:	000094
 */
void og::Screen::MenuMgr::startCursor((float))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0xCE0(r2)
	  stw       r0, 0x14(r1)
	  li        r0, 0x1
	  fcmpu     cr0, f0, f1
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  stb       r0, 0x2C(r3)
	  bne-      .loc_0x78
	  li        r0, 0x2
	  stw       r0, 0x0(r31)
	  stfs      f0, 0x4(r31)
	  lwz       r3, 0x40(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x54
	  lwz       r12, 0x0(r3)
	  li        r4, 0
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl

	.loc_0x54:
	  lwz       r3, 0x44(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x80
	  lwz       r12, 0x0(r3)
	  li        r4, 0
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x80

	.loc_0x78:
	  stw       r0, 0x0(r31)
	  stfs      f1, 0x4(r31)

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
 * Address:	8030A194
 * Size:	000070
 */
void og::Screen::MenuMgr::killCursor(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  li        r0, 0x3
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  stw       r0, 0x0(r3)
	  li        r0, 0
	  stb       r0, 0x2C(r3)
	  lwz       r3, 0x40(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x40
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl

	.loc_0x40:
	  lwz       r3, 0x44(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x5C
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl

	.loc_0x5C:
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
 * Size:	00004C
 */
void og::Screen::MenuMgr::initCommon(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0002F4
 */
void og::Screen::MenuMgr::initSub((J2DScreen*, unsigned short,
                                   unsigned long long, unsigned long long,
                                   unsigned long long))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8030A204
 * Size:	00021C
 */
void og::Screen::MenuMgr::init2taku((J2DScreen*, unsigned long long,
                                     unsigned long long, unsigned long long,
                                     unsigned long long, unsigned long long,
                                     unsigned long long, unsigned long long,
                                     unsigned long long))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  mflr      r0
	  stw       r0, 0x54(r1)
	  li        r0, 0x2
	  stmw      r14, 0x8(r1)
	  mr        r18, r3
	  lwz       r27, 0x58(r1)
	  mr        r19, r4
	  lwz       r26, 0x5C(r1)
	  mr        r21, r5
	  lwz       r29, 0x60(r1)
	  mr        r20, r6
	  lwz       r28, 0x64(r1)
	  mr        r23, r7
	  lwz       r31, 0x68(r1)
	  mr        r22, r8
	  lwz       r30, 0x6C(r1)
	  mr        r25, r9
	  lwz       r15, 0x70(r1)
	  mr        r24, r10
	  lwz       r17, 0x74(r1)
	  lwz       r14, 0x78(r1)
	  lwz       r16, 0x7C(r1)
	  sth       r0, 0x8(r3)
	  li        r3, 0x8
	  bl        -0x2E62BC
	  stw       r3, 0x14(r18)
	  li        r3, 0x8
	  bl        -0x2E62C8
	  stw       r3, 0x18(r18)
	  li        r3, 0x8
	  bl        -0x2E62D4
	  stw       r3, 0x1C(r18)
	  li        r3, 0x48
	  bl        -0x2E62E0
	  lis       r4, 0x8033
	  lis       r5, 0x8030
	  subi      r4, r4, 0x71FC
	  li        r6, 0x1C
	  addi      r5, r5, 0x78A0
	  li        r7, 0x2
	  bl        -0x2488B8
	  stw       r3, 0x20(r18)
	  mr        r3, r19
	  mr        r6, r20
	  mr        r5, r21
	  bl        -0x7410
	  lwz       r4, 0x14(r18)
	  li        r0, 0
	  mr        r6, r22
	  mr        r5, r23
	  stw       r3, 0x0(r4)
	  mr        r3, r19
	  lwz       r4, 0x18(r18)
	  stw       r0, 0x0(r4)
	  bl        -0x7434
	  lwz       r4, 0x1C(r18)
	  mr        r6, r28
	  mr        r5, r29
	  stw       r3, 0x0(r4)
	  mr        r3, r19
	  bl        -0x744C
	  lwz       r4, 0x14(r18)
	  li        r0, 0
	  mr        r6, r30
	  mr        r5, r31
	  stw       r3, 0x4(r4)
	  mr        r3, r19
	  lwz       r4, 0x18(r18)
	  stw       r0, 0x4(r4)
	  bl        -0x7470
	  lwz       r4, 0x1C(r18)
	  li        r0, 0
	  lfs       f1, -0xCE0(r2)
	  stw       r3, 0x4(r4)
	  mr        r3, r18
	  lfs       f0, -0xCDC(r2)
	  stfs      f1, 0xC(r18)
	  stfs      f0, 0x10(r18)
	  stw       r0, 0x24(r18)
	  stw       r0, 0x28(r18)
	  sth       r0, 0xA(r18)
	  stw       r0, 0x0(r18)
	  stfs      f1, 0x4(r18)
	  lhz       r4, 0xA(r18)
	  bl        0x778
	  li        r3, 0x8
	  bl        -0x2E63B4
	  stw       r3, 0x24(r18)
	  li        r3, 0x8
	  bl        -0x2E63C0
	  stw       r3, 0x28(r18)
	  mr        r3, r19
	  mr        r6, r24
	  mr        r5, r25
	  bl        -0x74D4
	  lwz       r4, 0x24(r18)
	  mr        r6, r26
	  mr        r5, r27
	  stw       r3, 0x0(r4)
	  mr        r3, r19
	  bl        -0x74EC
	  lwz       r4, 0x28(r18)
	  li        r0, 0
	  mr        r6, r17
	  mr        r5, r15
	  stw       r3, 0x0(r4)
	  mr        r3, r19
	  lwz       r4, 0x24(r18)
	  lwz       r4, 0x0(r4)
	  stb       r0, 0xB0(r4)
	  lwz       r4, 0x28(r18)
	  lwz       r4, 0x0(r4)
	  stb       r0, 0xB0(r4)
	  bl        -0x7520
	  lwz       r4, 0x24(r18)
	  mr        r6, r16
	  mr        r5, r14
	  stw       r3, 0x4(r4)
	  mr        r3, r19
	  bl        -0x7538
	  lwz       r4, 0x28(r18)
	  li        r0, 0
	  stw       r3, 0x4(r4)
	  lwz       r3, 0x24(r18)
	  lwz       r3, 0x4(r3)
	  stb       r0, 0xB0(r3)
	  lwz       r3, 0x28(r18)
	  lwz       r3, 0x4(r3)
	  stb       r0, 0xB0(r3)
	  lmw       r14, 0x8(r1)
	  lwz       r0, 0x54(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8030A420
 * Size:	00021C
 */
void og::Screen::MenuMgr::init2takuTitle(
    (J2DScreen*, unsigned long long, unsigned long long, unsigned long long,
     unsigned long long, unsigned long long, unsigned long long,
     unsigned long long, unsigned long long))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  mflr      r0
	  stw       r0, 0x54(r1)
	  li        r0, 0x2
	  stmw      r14, 0x8(r1)
	  mr        r18, r3
	  lwz       r27, 0x58(r1)
	  mr        r19, r4
	  lwz       r26, 0x5C(r1)
	  mr        r21, r5
	  lwz       r29, 0x60(r1)
	  mr        r20, r6
	  lwz       r28, 0x64(r1)
	  mr        r23, r7
	  lwz       r31, 0x68(r1)
	  mr        r22, r8
	  lwz       r30, 0x6C(r1)
	  mr        r25, r9
	  lwz       r15, 0x70(r1)
	  mr        r24, r10
	  lwz       r17, 0x74(r1)
	  lwz       r14, 0x78(r1)
	  lwz       r16, 0x7C(r1)
	  sth       r0, 0x8(r3)
	  li        r3, 0x8
	  bl        -0x2E64D8
	  stw       r3, 0x14(r18)
	  li        r3, 0x8
	  bl        -0x2E64E4
	  stw       r3, 0x18(r18)
	  li        r3, 0x8
	  bl        -0x2E64F0
	  stw       r3, 0x1C(r18)
	  li        r3, 0x48
	  bl        -0x2E64FC
	  lis       r4, 0x8033
	  lis       r5, 0x8030
	  subi      r4, r4, 0x71FC
	  li        r6, 0x1C
	  addi      r5, r5, 0x78A0
	  li        r7, 0x2
	  bl        -0x248AD4
	  stw       r3, 0x20(r18)
	  mr        r3, r19
	  mr        r6, r20
	  mr        r5, r21
	  bl        -0x762C
	  lwz       r4, 0x14(r18)
	  li        r0, 0
	  mr        r6, r22
	  mr        r5, r23
	  stw       r3, 0x0(r4)
	  mr        r3, r19
	  lwz       r4, 0x18(r18)
	  stw       r0, 0x0(r4)
	  bl        -0x7650
	  lwz       r4, 0x1C(r18)
	  mr        r6, r28
	  mr        r5, r29
	  stw       r3, 0x0(r4)
	  mr        r3, r19
	  bl        -0x7668
	  lwz       r4, 0x14(r18)
	  li        r0, 0
	  mr        r6, r30
	  mr        r5, r31
	  stw       r3, 0x4(r4)
	  mr        r3, r19
	  lwz       r4, 0x18(r18)
	  stw       r0, 0x4(r4)
	  bl        -0x768C
	  lwz       r4, 0x1C(r18)
	  li        r0, 0
	  lfs       f1, -0xCE0(r2)
	  stw       r3, 0x4(r4)
	  mr        r3, r18
	  lfs       f0, -0xCDC(r2)
	  stfs      f1, 0xC(r18)
	  stfs      f0, 0x10(r18)
	  stw       r0, 0x24(r18)
	  stw       r0, 0x28(r18)
	  sth       r0, 0xA(r18)
	  stw       r0, 0x0(r18)
	  stfs      f1, 0x4(r18)
	  lhz       r4, 0xA(r18)
	  bl        0x55C
	  li        r3, 0x8
	  bl        -0x2E65D0
	  stw       r3, 0x24(r18)
	  li        r3, 0x8
	  bl        -0x2E65DC
	  stw       r3, 0x28(r18)
	  mr        r3, r19
	  mr        r6, r24
	  mr        r5, r25
	  bl        -0x76F0
	  lwz       r4, 0x24(r18)
	  mr        r6, r26
	  mr        r5, r27
	  stw       r3, 0x0(r4)
	  mr        r3, r19
	  bl        -0x7708
	  lwz       r4, 0x28(r18)
	  li        r0, 0
	  mr        r6, r17
	  mr        r5, r15
	  stw       r3, 0x0(r4)
	  mr        r3, r19
	  lwz       r4, 0x24(r18)
	  lwz       r4, 0x0(r4)
	  stb       r0, 0xB0(r4)
	  lwz       r4, 0x28(r18)
	  lwz       r4, 0x0(r4)
	  stb       r0, 0xB0(r4)
	  bl        -0x773C
	  lwz       r4, 0x24(r18)
	  mr        r6, r16
	  mr        r5, r14
	  stw       r3, 0x4(r4)
	  mr        r3, r19
	  bl        -0x7754
	  lwz       r4, 0x28(r18)
	  li        r0, 0
	  stw       r3, 0x4(r4)
	  lwz       r3, 0x24(r18)
	  lwz       r3, 0x4(r3)
	  stb       r0, 0xB0(r3)
	  lwz       r3, 0x28(r18)
	  lwz       r3, 0x4(r3)
	  stb       r0, 0xB0(r3)
	  lmw       r14, 0x8(r1)
	  lwz       r0, 0x54(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0002F0
 */
void og::Screen::MenuMgr::init((J2DScreen*, unsigned short, unsigned long long,
                                unsigned long long, unsigned long long))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8030A63C
 * Size:	000494
 */
void og::Screen::MenuMgr::init((J2DScreen*, unsigned short, unsigned long long,
                                unsigned long long, unsigned long long,
                                unsigned long long, unsigned long long))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x60(r1)
	  mflr      r0
	  stw       r0, 0x64(r1)
	  rlwinm    r0,r5,2,14,29
	  stmw      r14, 0x18(r1)
	  mr        r17, r3
	  lwz       r15, 0x68(r1)
	  mr        r18, r4
	  stw       r0, 0xC(r1)
	  rlwinm    r0,r5,0,16,31
	  lwz       r14, 0x6C(r1)
	  mr        r23, r7
	  sth       r5, 0x8(r1)
	  mr        r20, r8
	  mr        r16, r9
	  mr        r19, r10
	  rlwinm    r21,r5,0,16,31
	  sth       r0, 0x8(r3)
	  lwz       r0, 0x70(r1)
	  lwz       r0, 0x74(r1)
	  lwz       r0, 0x78(r1)
	  lwz       r0, 0x7C(r1)
	  lwz       r3, 0xC(r1)
	  bl        -0x2E66EC
	  stw       r3, 0x14(r17)
	  lwz       r3, 0xC(r1)
	  bl        -0x2E66F8
	  stw       r3, 0x18(r17)
	  lwz       r3, 0xC(r1)
	  bl        -0x2E6704
	  mulli     r4, r21, 0x1C
	  stw       r3, 0x1C(r17)
	  addi      r3, r4, 0x10
	  bl        -0x2E6714
	  lis       r4, 0x8033
	  lis       r5, 0x8030
	  subi      r4, r4, 0x71FC
	  mr        r7, r21
	  addi      r5, r5, 0x78A0
	  li        r6, 0x1C
	  bl        -0x248CEC
	  li        r21, 0
	  stw       r3, 0x20(r17)
	  xor       r3, r20, r21
	  xor       r0, r23, r21
	  mr        r22, r21
	  or.       r0, r3, r0
	  beq-      .loc_0xD8
	  mr        r4, r20
	  mr        r3, r23
	  li        r5, 0x2
	  bl        -0x7C94
	  mr        r21, r4
	  mr        r22, r3

	.loc_0xD8:
	  mr        r4, r19
	  mr        r3, r16
	  li        r5, 0x2
	  bl        -0x7CAC
	  mr        r27, r4
	  mr        r28, r3
	  mr        r4, r14
	  mr        r3, r15
	  li        r5, 0x2
	  bl        -0x7CC4
	  lis       r5, 0xFFFF
	  li        r7, -0x1
	  and       r0, r20, r5
	  li        r26, 0
	  and       r6, r19, r5
	  and       r5, r14, r5
	  and       r14, r23, r7
	  ori       r23, r0, 0x3030
	  and       r0, r16, r7
	  mr        r29, r4
	  stw       r0, 0x10(r1)
	  and       r0, r15, r7
	  mr        r30, r3
	  mr        r20, r26
	  stw       r0, 0x14(r1)
	  ori       r24, r6, 0x3030
	  ori       r25, r5, 0x3030
	  b         .loc_0x2B8

	.loc_0x148:
	  srawi     r19, r26, 0x1F
	  li        r5, 0
	  addc      r31, r21, r26
	  li        r6, 0xA
	  adde      r16, r22, r19
	  mr        r3, r16
	  mr        r4, r31
	  bl        -0x248AC8
	  li        r5, 0
	  li        r6, 0xA
	  bl        -0x2488B0
	  rlwinm    r15,r3,8,0,23
	  mr        r3, r16
	  rlwinm    r16,r4,8,0,23
	  li        r5, 0
	  rlwimi    r15,r4,8,24,31
	  mr        r4, r31
	  li        r6, 0xA
	  bl        -0x2488D0
	  lwz       r12, 0x0(r18)
	  addc      r4, r23, r4
	  adde      r0, r14, r3
	  mr        r3, r18
	  lwz       r12, 0x3C(r12)
	  addc      r6, r4, r16
	  adde      r5, r0, r15
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x14(r17)
	  addc      r31, r27, r26
	  adde      r15, r28, r19
	  li        r5, 0
	  stwx      r3, r4, r20
	  mr        r3, r15
	  mr        r4, r31
	  li        r6, 0xA
	  bl        -0x248B3C
	  li        r5, 0
	  li        r6, 0xA
	  bl        -0x248924
	  rlwinm    r16,r3,8,0,23
	  mr        r3, r15
	  rlwinm    r15,r4,8,0,23
	  li        r5, 0
	  rlwimi    r16,r4,8,24,31
	  mr        r4, r31
	  li        r6, 0xA
	  bl        -0x248944
	  lwz       r12, 0x0(r18)
	  addc      r4, r24, r4
	  lwz       r0, 0x10(r1)
	  lwz       r12, 0x3C(r12)
	  adde      r0, r0, r3
	  mr        r3, r18
	  addc      r6, r4, r15
	  adde      r5, r0, r16
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x18(r17)
	  addc      r15, r29, r26
	  adde      r19, r30, r19
	  li        r5, 0
	  stwx      r3, r4, r20
	  mr        r3, r19
	  mr        r4, r15
	  li        r6, 0xA
	  bl        -0x248BB4
	  li        r5, 0
	  li        r6, 0xA
	  bl        -0x24899C
	  rlwinm    r16,r3,8,0,23
	  mr        r3, r19
	  rlwinm    r19,r4,8,0,23
	  li        r5, 0
	  rlwimi    r16,r4,8,24,31
	  mr        r4, r15
	  li        r6, 0xA
	  bl        -0x2489BC
	  lwz       r12, 0x0(r18)
	  addc      r4, r25, r4
	  lwz       r0, 0x14(r1)
	  lwz       r12, 0x3C(r12)
	  adde      r0, r0, r3
	  mr        r3, r18
	  addc      r6, r4, r19
	  adde      r5, r0, r16
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x1C(r17)
	  addi      r26, r26, 0x1
	  stwx      r3, r4, r20
	  addi      r20, r20, 0x4

	.loc_0x2B8:
	  lhz       r0, 0x8(r17)
	  cmpw      r26, r0
	  blt+      .loc_0x148
	  lfs       f1, -0xCE0(r2)
	  li        r0, 0
	  lfs       f0, -0xCDC(r2)
	  mr        r3, r17
	  stfs      f1, 0xC(r17)
	  stfs      f0, 0x10(r17)
	  stw       r0, 0x24(r17)
	  stw       r0, 0x28(r17)
	  sth       r0, 0xA(r17)
	  stw       r0, 0x0(r17)
	  stfs      f1, 0x4(r17)
	  lhz       r4, 0xA(r17)
	  bl        .loc_0x494
	  lwz       r4, 0x74(r1)
	  li        r5, 0x2
	  lwz       r3, 0x70(r1)
	  bl        -0x7ECC
	  mr        r21, r4
	  mr        r20, r3
	  lwz       r4, 0x7C(r1)
	  li        r5, 0x2
	  lwz       r3, 0x78(r1)
	  bl        -0x7EE4
	  lwz       r0, 0x74(r1)
	  lis       r5, 0xFFFF
	  mr        r16, r3
	  li        r7, -0x1
	  and       r6, r0, r5
	  lwz       r0, 0x7C(r1)
	  lwz       r3, 0xC(r1)
	  mr        r19, r4
	  and       r5, r0, r5
	  lwz       r0, 0x70(r1)
	  ori       r25, r6, 0x3030
	  and       r15, r0, r7
	  lwz       r0, 0x78(r1)
	  ori       r26, r5, 0x3030
	  and       r14, r0, r7
	  bl        -0x2E69EC
	  stw       r3, 0x24(r17)
	  lwz       r3, 0xC(r1)
	  bl        -0x2E69F8
	  stw       r3, 0x28(r17)
	  li        r27, 0
	  lhz       r23, 0x8(r1)
	  li        r22, 0
	  b         .loc_0x478

	.loc_0x380:
	  srawi     r24, r27, 0x1F
	  li        r5, 0
	  addc      r30, r21, r27
	  li        r6, 0xA
	  adde      r29, r20, r24
	  mr        r3, r29
	  mr        r4, r30
	  bl        -0x248D00
	  li        r5, 0
	  li        r6, 0xA
	  bl        -0x248AE8
	  rlwinm    r28,r3,8,0,23
	  mr        r3, r29
	  rlwinm    r29,r4,8,0,23
	  li        r5, 0
	  rlwimi    r28,r4,8,24,31
	  mr        r4, r30
	  li        r6, 0xA
	  bl        -0x248B08
	  addc      r4, r4, r29
	  adde      r0, r3, r28
	  mr        r3, r18
	  addc      r6, r25, r4
	  adde      r5, r15, r0
	  bl        -0x7B70
	  lwz       r4, 0x24(r17)
	  addc      r29, r19, r27
	  adde      r28, r16, r24
	  li        r5, 0
	  stwx      r3, r4, r22
	  mr        r3, r28
	  mr        r4, r29
	  li        r6, 0xA
	  bl        -0x248D68
	  li        r5, 0
	  li        r6, 0xA
	  bl        -0x248B50
	  rlwinm    r24,r3,8,0,23
	  mr        r3, r28
	  rlwinm    r28,r4,8,0,23
	  li        r5, 0
	  rlwimi    r24,r4,8,24,31
	  mr        r4, r29
	  li        r6, 0xA
	  bl        -0x248B70
	  addc      r4, r4, r28
	  adde      r0, r3, r24
	  mr        r3, r18
	  addc      r6, r26, r4
	  adde      r5, r14, r0
	  bl        -0x7BD8
	  lwz       r4, 0x28(r17)
	  li        r0, 0
	  addi      r27, r27, 0x1
	  stwx      r3, r4, r22
	  lwz       r3, 0x24(r17)
	  lwzx      r3, r3, r22
	  stb       r0, 0xB0(r3)
	  lwz       r3, 0x28(r17)
	  lwzx      r3, r3, r22
	  addi      r22, r22, 0x4
	  stb       r0, 0xB0(r3)

	.loc_0x478:
	  cmpw      r27, r23
	  blt+      .loc_0x380
	  lmw       r14, 0x18(r1)
	  lwz       r0, 0x64(r1)
	  mtlr      r0
	  addi      r1, r1, 0x60
	  blr

	.loc_0x494:
	*/
}

/*
 * --INFO--
 * Address:	8030AAD0
 * Size:	000090
 */
void og::Screen::MenuMgr::selectSub((unsigned short))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  rlwinm    r5,r4,0,16,31
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lhz       r0, 0x8(r3)
	  cmplw     r5, r0
	  bge-      .loc_0x7C
	  lhz       r5, 0xA(r31)
	  li        r0, 0x1
	  lfs       f0, -0xCE0(r2)
	  sth       r5, 0x70(r31)
	  sth       r4, 0xA(r31)
	  stb       r0, 0x48(r31)
	  stfs      f0, 0x6C(r31)
	  lbz       r0, 0x2D(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x50
	  bl        0x75C

	.loc_0x50:
	  lhz       r0, 0xA(r31)
	  lwz       r3, 0x20(r31)
	  mulli     r0, r0, 0x1C
	  lfs       f1, -0xCD8(r2)
	  lfs       f2, -0xCD4(r2)
	  lfs       f3, -0xCD0(r2)
	  lfs       f4, -0xCE0(r2)
	  add       r3, r3, r0
	  bl        0x1E398
	  lfs       f0, -0xCE0(r2)
	  stfs      f0, 0xC(r31)

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
 * Address:	8030AB60
 * Size:	000098
 */
void og::Screen::MenuMgr::select((unsigned short))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  rlwinm    r5,r4,0,16,31
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lhz       r0, 0x8(r3)
	  cmplw     r5, r0
	  bge-      .loc_0x7C
	  lhz       r5, 0xA(r31)
	  li        r0, 0x1
	  lfs       f0, -0xCE0(r2)
	  sth       r5, 0x70(r31)
	  sth       r4, 0xA(r31)
	  stb       r0, 0x48(r31)
	  stfs      f0, 0x6C(r31)
	  lbz       r0, 0x2D(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x50
	  bl        0x6CC

	.loc_0x50:
	  lhz       r0, 0xA(r31)
	  lwz       r3, 0x20(r31)
	  mulli     r0, r0, 0x1C
	  lfs       f1, -0xCD8(r2)
	  lfs       f2, -0xCD4(r2)
	  lfs       f3, -0xCD0(r2)
	  lfs       f4, -0xCE0(r2)
	  add       r3, r3, r0
	  bl        0x1E308
	  lfs       f0, -0xCE0(r2)
	  stfs      f0, 0xC(r31)

	.loc_0x7C:
	  lwz       r3, -0x6858(r13)
	  bl        0x1F9C
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8030ABF8
 * Size:	000014
 */
void og::Screen::MenuMgr::initSelNum((unsigned short))
{
	/*
	.loc_0x0:
	  sth       r4, 0x70(r3)
	  lfs       f0, -0xCE0(r2)
	  sth       r4, 0xA(r3)
	  stfs      f0, 0x6C(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000AC
 */
void calcCenter__Q32og6Screen7MenuMgrFP7J2DPaneP10Vector2<float>(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000034
 */
void calcPoint__Q32og6Screen7MenuMgrFR10Vector2<float> R10Vector2<float>
fP10Vector2<float>(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8030AC0C
 * Size:	000580
 */
void og::Screen::MenuMgr::update(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x140(r1)
	  mflr      r0
	  stw       r0, 0x144(r1)
	  stfd      f31, 0x130(r1)
	  psq_st    f31,0x138(r1),0,0
	  stw       r31, 0x12C(r1)
	  stw       r30, 0x128(r1)
	  mr        r31, r3
	  lwz       r0, 0x0(r3)
	  cmpwi     r0, 0x2
	  beq-      .loc_0xC8
	  bge-      .loc_0x40
	  cmpwi     r0, 0
	  beq-      .loc_0x560
	  bge-      .loc_0x4C
	  b         .loc_0x560

	.loc_0x40:
	  cmpwi     r0, 0x4
	  bge-      .loc_0x560
	  b         .loc_0x418

	.loc_0x4C:
	  lwz       r3, -0x6514(r13)
	  lfs       f2, 0x4(r31)
	  lfs       f1, 0x54(r3)
	  lfs       f0, -0xCE0(r2)
	  fsubs     f1, f2, f1
	  stfs      f1, 0x4(r31)
	  lfs       f1, 0x4(r31)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x560
	  li        r3, 0x1
	  li        r0, 0x2
	  stb       r3, 0x2C(r31)
	  stw       r0, 0x0(r31)
	  stfs      f0, 0x4(r31)
	  lwz       r3, 0x40(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0xA4
	  lwz       r12, 0x0(r3)
	  li        r4, 0
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl

	.loc_0xA4:
	  lwz       r3, 0x44(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x560
	  lwz       r12, 0x0(r3)
	  li        r4, 0
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x560

	.loc_0xC8:
	  lwz       r4, 0x24(r31)
	  cmplwi    r4, 0
	  beq-      .loc_0x15C
	  lhz       r0, 0xA(r31)
	  addi      r3, r1, 0x110
	  li        r5, 0
	  rlwinm    r0,r0,2,0,29
	  lwzx      r30, r4, r0
	  mr        r4, r30
	  bl        -0x2D1D60
	  lwz       r5, 0x110(r1)
	  mr        r4, r30
	  lwz       r6, 0x114(r1)
	  addi      r3, r1, 0x11C
	  lwz       r0, 0x118(r1)
	  stw       r5, 0xF8(r1)
	  li        r5, 0x3
	  stw       r6, 0xFC(r1)
	  stw       r0, 0x100(r1)
	  bl        -0x2D1D88
	  lwz       r0, 0x11C(r1)
	  lwz       r3, 0x120(r1)
	  stw       r0, 0x104(r1)
	  lwz       r0, 0x124(r1)
	  stw       r3, 0x108(r1)
	  lfs       f3, 0xF8(r1)
	  lfs       f2, 0x104(r1)
	  lfs       f1, 0xFC(r1)
	  lfs       f0, 0x108(r1)
	  fadds     f3, f3, f2
	  lfs       f2, -0xCD0(r2)
	  fadds     f0, f1, f0
	  stw       r0, 0x10C(r1)
	  fmuls     f1, f3, f2
	  fmuls     f0, f0, f2
	  stfs      f1, 0x5C(r31)
	  stfs      f0, 0x60(r31)

	.loc_0x15C:
	  lwz       r4, 0x28(r31)
	  cmplwi    r4, 0
	  beq-      .loc_0x1F0
	  lhz       r0, 0xA(r31)
	  addi      r3, r1, 0xE0
	  li        r5, 0
	  rlwinm    r0,r0,2,0,29
	  lwzx      r30, r4, r0
	  mr        r4, r30
	  bl        -0x2D1DF4
	  lwz       r5, 0xE0(r1)
	  mr        r4, r30
	  lwz       r6, 0xE4(r1)
	  addi      r3, r1, 0xEC
	  lwz       r0, 0xE8(r1)
	  stw       r5, 0xC8(r1)
	  li        r5, 0x3
	  stw       r6, 0xCC(r1)
	  stw       r0, 0xD0(r1)
	  bl        -0x2D1E1C
	  lwz       r0, 0xEC(r1)
	  lwz       r3, 0xF0(r1)
	  stw       r0, 0xD4(r1)
	  lwz       r0, 0xF4(r1)
	  stw       r3, 0xD8(r1)
	  lfs       f3, 0xC8(r1)
	  lfs       f2, 0xD4(r1)
	  lfs       f1, 0xCC(r1)
	  lfs       f0, 0xD8(r1)
	  fadds     f3, f3, f2
	  lfs       f2, -0xCD0(r2)
	  fadds     f0, f1, f0
	  stw       r0, 0xDC(r1)
	  fmuls     f1, f3, f2
	  fmuls     f0, f0, f2
	  stfs      f1, 0x64(r31)
	  stfs      f0, 0x68(r31)

	.loc_0x1F0:
	  lbz       r0, 0x48(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x3DC
	  lwz       r3, -0x6514(r13)
	  lfs       f2, 0x6C(r31)
	  lfs       f1, 0x54(r3)
	  lfs       f0, -0xCD8(r2)
	  fadds     f1, f2, f1
	  stfs      f1, 0x6C(r31)
	  lfs       f1, 0x6C(r31)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x24C
	  lfs       f0, 0x5C(r31)
	  li        r0, 0
	  stfs      f0, 0x30(r31)
	  lfs       f0, 0x60(r31)
	  stfs      f0, 0x34(r31)
	  lfs       f0, 0x64(r31)
	  stfs      f0, 0x38(r31)
	  lfs       f0, 0x68(r31)
	  stfs      f0, 0x3C(r31)
	  stb       r0, 0x48(r31)
	  b         .loc_0x560

	.loc_0x24C:
	  fdivs     f31, f1, f0
	  lwz       r4, 0x24(r31)
	  cmplwi    r4, 0
	  beq-      .loc_0x314
	  lhz       r0, 0x70(r31)
	  addi      r3, r1, 0xB0
	  li        r5, 0
	  rlwinm    r0,r0,2,0,29
	  lwzx      r30, r4, r0
	  mr        r4, r30
	  bl        -0x2D1EE8
	  lwz       r5, 0xB0(r1)
	  mr        r4, r30
	  lwz       r6, 0xB4(r1)
	  addi      r3, r1, 0xBC
	  lwz       r0, 0xB8(r1)
	  stw       r5, 0x98(r1)
	  li        r5, 0x3
	  stw       r6, 0x9C(r1)
	  stw       r0, 0xA0(r1)
	  bl        -0x2D1F10
	  lwz       r0, 0xBC(r1)
	  lwz       r3, 0xC0(r1)
	  stw       r0, 0xA4(r1)
	  lwz       r0, 0xC4(r1)
	  stw       r3, 0xA8(r1)
	  lfs       f3, 0x98(r1)
	  lfs       f2, 0xA4(r1)
	  lfs       f1, 0x9C(r1)
	  lfs       f0, 0xA8(r1)
	  fadds     f2, f3, f2
	  lfs       f3, -0xCD0(r2)
	  fadds     f1, f1, f0
	  lfs       f0, -0xCDC(r2)
	  fmuls     f2, f2, f3
	  stw       r0, 0xAC(r1)
	  fsubs     f4, f0, f31
	  fmuls     f0, f1, f3
	  stfs      f2, 0x4C(r31)
	  stfs      f0, 0x50(r31)
	  lfs       f0, 0x4C(r31)
	  lfs       f3, 0x50(r31)
	  fmuls     f1, f0, f4
	  lfs       f2, 0x5C(r31)
	  fmuls     f0, f3, f4
	  lfs       f3, 0x60(r31)
	  fmadds    f1, f2, f31, f1
	  fmadds    f0, f3, f31, f0
	  stfs      f1, 0x30(r31)
	  stfs      f0, 0x34(r31)

	.loc_0x314:
	  lwz       r4, 0x28(r31)
	  cmplwi    r4, 0
	  beq-      .loc_0x560
	  lhz       r0, 0x70(r31)
	  addi      r3, r1, 0x80
	  li        r5, 0
	  rlwinm    r0,r0,2,0,29
	  lwzx      r30, r4, r0
	  mr        r4, r30
	  bl        -0x2D1FAC
	  lwz       r5, 0x80(r1)
	  mr        r4, r30
	  lwz       r6, 0x84(r1)
	  addi      r3, r1, 0x8C
	  lwz       r0, 0x88(r1)
	  stw       r5, 0x68(r1)
	  li        r5, 0x3
	  stw       r6, 0x6C(r1)
	  stw       r0, 0x70(r1)
	  bl        -0x2D1FD4
	  lwz       r0, 0x8C(r1)
	  lwz       r3, 0x90(r1)
	  stw       r0, 0x74(r1)
	  lwz       r0, 0x94(r1)
	  stw       r3, 0x78(r1)
	  lfs       f3, 0x68(r1)
	  lfs       f2, 0x74(r1)
	  lfs       f1, 0x6C(r1)
	  lfs       f0, 0x78(r1)
	  fadds     f2, f3, f2
	  lfs       f3, -0xCD0(r2)
	  fadds     f1, f1, f0
	  lfs       f0, -0xCDC(r2)
	  fmuls     f2, f2, f3
	  stw       r0, 0x7C(r1)
	  fsubs     f4, f0, f31
	  fmuls     f0, f1, f3
	  stfs      f2, 0x54(r31)
	  stfs      f0, 0x58(r31)
	  lfs       f0, 0x54(r31)
	  lfs       f3, 0x58(r31)
	  fmuls     f1, f0, f4
	  lfs       f2, 0x64(r31)
	  fmuls     f0, f3, f4
	  lfs       f3, 0x68(r31)
	  fmadds    f1, f2, f31, f1
	  fmadds    f0, f3, f31, f0
	  stfs      f1, 0x38(r31)
	  stfs      f0, 0x3C(r31)
	  b         .loc_0x560

	.loc_0x3DC:
	  lwz       r0, 0x24(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x3F8
	  lfs       f0, 0x5C(r31)
	  stfs      f0, 0x30(r31)
	  lfs       f0, 0x60(r31)
	  stfs      f0, 0x34(r31)

	.loc_0x3F8:
	  lwz       r0, 0x28(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x560
	  lfs       f0, 0x64(r31)
	  stfs      f0, 0x38(r31)
	  lfs       f0, 0x68(r31)
	  stfs      f0, 0x3C(r31)
	  b         .loc_0x560

	.loc_0x418:
	  lwz       r4, 0x24(r31)
	  cmplwi    r4, 0
	  beq-      .loc_0x4BC
	  lhz       r0, 0xA(r31)
	  addi      r3, r1, 0x50
	  li        r5, 0
	  rlwinm    r0,r0,2,0,29
	  lwzx      r30, r4, r0
	  mr        r4, r30
	  bl        -0x2D20B0
	  lwz       r5, 0x50(r1)
	  mr        r4, r30
	  lwz       r6, 0x54(r1)
	  addi      r3, r1, 0x5C
	  lwz       r0, 0x58(r1)
	  stw       r5, 0x38(r1)
	  li        r5, 0x3
	  stw       r6, 0x3C(r1)
	  stw       r0, 0x40(r1)
	  bl        -0x2D20D8
	  lwz       r0, 0x5C(r1)
	  lwz       r3, 0x60(r1)
	  stw       r0, 0x44(r1)
	  lwz       r0, 0x64(r1)
	  stw       r3, 0x48(r1)
	  lfs       f3, 0x38(r1)
	  lfs       f2, 0x44(r1)
	  lfs       f1, 0x3C(r1)
	  lfs       f0, 0x48(r1)
	  fadds     f3, f3, f2
	  lfs       f2, -0xCD0(r2)
	  fadds     f0, f1, f0
	  stw       r0, 0x4C(r1)
	  fmuls     f1, f3, f2
	  fmuls     f0, f0, f2
	  stfs      f1, 0x5C(r31)
	  stfs      f0, 0x60(r31)
	  lfs       f0, 0x5C(r31)
	  stfs      f0, 0x30(r31)
	  lfs       f0, 0x60(r31)
	  stfs      f0, 0x34(r31)

	.loc_0x4BC:
	  lwz       r4, 0x28(r31)
	  cmplwi    r4, 0
	  beq-      .loc_0x560
	  lhz       r0, 0xA(r31)
	  addi      r3, r1, 0x20
	  li        r5, 0
	  rlwinm    r0,r0,2,0,29
	  lwzx      r30, r4, r0
	  mr        r4, r30
	  bl        -0x2D2154
	  lwz       r5, 0x20(r1)
	  mr        r4, r30
	  lwz       r6, 0x24(r1)
	  addi      r3, r1, 0x2C
	  lwz       r0, 0x28(r1)
	  stw       r5, 0x8(r1)
	  li        r5, 0x3
	  stw       r6, 0xC(r1)
	  stw       r0, 0x10(r1)
	  bl        -0x2D217C
	  lwz       r0, 0x2C(r1)
	  lwz       r3, 0x30(r1)
	  stw       r0, 0x14(r1)
	  lwz       r0, 0x34(r1)
	  stw       r3, 0x18(r1)
	  lfs       f3, 0x8(r1)
	  lfs       f2, 0x14(r1)
	  lfs       f1, 0xC(r1)
	  lfs       f0, 0x18(r1)
	  fadds     f3, f3, f2
	  lfs       f2, -0xCD0(r2)
	  fadds     f0, f1, f0
	  stw       r0, 0x1C(r1)
	  fmuls     f1, f3, f2
	  fmuls     f0, f0, f2
	  stfs      f1, 0x64(r31)
	  stfs      f0, 0x68(r31)
	  lfs       f0, 0x64(r31)
	  stfs      f0, 0x38(r31)
	  lfs       f0, 0x68(r31)
	  stfs      f0, 0x3C(r31)

	.loc_0x560:
	  psq_l     f31,0x138(r1),0,0
	  lwz       r0, 0x144(r1)
	  lfd       f31, 0x130(r1)
	  lwz       r31, 0x12C(r1)
	  lwz       r30, 0x128(r1)
	  mtlr      r0
	  addi      r1, r1, 0x140
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8030B18C
 * Size:	0000EC
 */
void og::Screen::MenuMgr::draw((J2DGrafContext*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  li        r31, 0
	  stw       r30, 0x18(r1)
	  mr        r30, r31
	  stw       r29, 0x14(r1)
	  li        r29, 0
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  b         .loc_0x88

	.loc_0x30:
	  lbz       r0, 0x2E(r28)
	  cmplwi    r0, 0
	  beq-      .loc_0x7C
	  lwz       r0, 0x20(r28)
	  add       r3, r0, r31
	  bl        0x1DDB4
	  lhz       r0, 0xA(r28)
	  cmpw      r0, r29
	  bne-      .loc_0x5C
	  lfs       f0, 0x74(r28)
	  fmuls     f1, f1, f0

	.loc_0x5C:
	  lwz       r3, 0x14(r28)
	  lwzx      r3, r3, r30
	  stfs      f1, 0xCC(r3)
	  stfs      f1, 0xD0(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x7C:
	  addi      r31, r31, 0x1C
	  addi      r30, r30, 0x4
	  addi      r29, r29, 0x1

	.loc_0x88:
	  lhz       r0, 0x8(r28)
	  cmpw      r29, r0
	  blt+      .loc_0x30
	  lbz       r0, 0x2E(r28)
	  cmplwi    r0, 0
	  beq-      .loc_0xCC
	  lwz       r3, -0x6514(r13)
	  lfs       f1, 0xC(r28)
	  lfs       f0, 0x54(r3)
	  fadds     f0, f1, f0
	  stfs      f0, 0xC(r28)
	  lfs       f0, 0xC(r28)
	  lfs       f1, 0x10(r28)
	  fcmpo     cr0, f0, f1
	  ble-      .loc_0xCC
	  fsubs     f0, f0, f1
	  stfs      f0, 0xC(r28)

	.loc_0xCC:
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
 * Address:	8030B278
 * Size:	0000F8
 */
void og::Screen::MenuMgr::MenuOnOff(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  li        r31, 0
	  stw       r30, 0x18(r1)
	  li        r30, 0
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  b         .loc_0xD0

	.loc_0x28:
	  lhz       r0, 0xA(r29)
	  cmpw      r30, r0
	  bne-      .loc_0x80
	  lwz       r3, 0x18(r29)
	  lwzx      r3, r3, r31
	  cmplwi    r3, 0
	  beq-      .loc_0x58
	  lwz       r12, 0x0(r3)
	  li        r4, 0xFF
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl

	.loc_0x58:
	  lwz       r3, 0x1C(r29)
	  lwzx      r3, r3, r31
	  cmplwi    r3, 0
	  beq-      .loc_0xC8
	  lwz       r12, 0x0(r3)
	  li        r4, 0xFF
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0xC8

	.loc_0x80:
	  lwz       r3, 0x18(r29)
	  lwzx      r3, r3, r31
	  cmplwi    r3, 0
	  beq-      .loc_0xA4
	  lwz       r12, 0x0(r3)
	  li        r4, 0
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl

	.loc_0xA4:
	  lwz       r3, 0x1C(r29)
	  lwzx      r3, r3, r31
	  cmplwi    r3, 0
	  beq-      .loc_0xC8
	  lwz       r12, 0x0(r3)
	  li        r4, 0xFF
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl

	.loc_0xC8:
	  addi      r31, r31, 0x4
	  addi      r30, r30, 0x1

	.loc_0xD0:
	  lhz       r0, 0x8(r29)
	  cmpw      r30, r0
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
