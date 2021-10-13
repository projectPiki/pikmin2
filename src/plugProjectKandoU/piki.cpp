

/*
 * --INFO--
 * Address:	........
 * Size:	0000E0
 */
void _Print(char*, ...)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801476DC
 * Size:	0001A4
 */
void Game::Piki::__ct(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  stw       r30, 0x8(r1)
	  bl        -0xAA8C
	  lis       r4, 0x804B
	  addi      r3, r31, 0x298
	  addi      r4, r4, 0x99C
	  stw       r4, 0x0(r31)
	  addi      r0, r4, 0x1B0
	  stw       r0, 0x178(r31)
	  bl        0x4EF60
	  li        r3, 0x20
	  bl        -0x123874
	  cmplwi    r3, 0
	  beq-      .loc_0x68
	  lis       r5, 0x804B
	  lis       r4, 0x804B
	  addi      r0, r5, 0xC54
	  li        r5, -0x1
	  stw       r0, 0x0(r3)
	  addi      r0, r4, 0x4744
	  stw       r5, 0x18(r3)
	  stw       r0, 0x0(r3)

	.loc_0x68:
	  stw       r3, 0x28C(r31)
	  mr        r4, r31
	  lwz       r3, 0x28C(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, -0x5F50(r2)
	  li        r3, 0x10
	  stfs      f0, 0x224(r31)
	  bl        -0x1238C8
	  mr.       r0, r3
	  beq-      .loc_0xA8
	  mr        r4, r31
	  bl        0x4F2E8
	  mr        r0, r3

	.loc_0xA8:
	  stw       r0, 0x294(r31)
	  addi      r6, r31, 0x218
	  li        r4, 0
	  li        r5, 0
	  lwz       r3, 0x114(r31)
	  li        r7, 0
	  bl        -0x136EC
	  li        r0, 0
	  lis       r3, 0x8048
	  sth       r0, 0x128(r31)
	  subi      r4, r3, 0x3774
	  li        r5, 0
	  stw       r0, 0x2C4(r31)
	  stw       r0, 0x290(r31)
	  lwz       r3, -0x6514(r13)
	  bl        0x2DBB9C
	  li        r3, 0x1A8
	  bl        -0x123924
	  mr.       r0, r3
	  beq-      .loc_0x100
	  bl        .loc_0x1A4
	  mr        r0, r3

	.loc_0x100:
	  stw       r0, 0x258(r31)
	  li        r3, 0x24
	  bl        -0x123940
	  mr.       r30, r3
	  beq-      .loc_0x138
	  bl        0x2C9BA0
	  lis       r3, 0x804B
	  li        r0, 0
	  addi      r3, r3, 0x8B8
	  stw       r3, 0x0(r30)
	  stw       r0, 0x10(r30)
	  stw       r0, 0xC(r30)
	  stw       r0, 0x8(r30)
	  stw       r0, 0x4(r30)

	.loc_0x138:
	  stw       r30, 0x27C(r31)
	  lis       r3, 0x8048
	  subi      r4, r3, 0x3774
	  lwz       r3, -0x6514(r13)
	  bl        0x2DBB40
	  lwz       r3, -0x6514(r13)
	  subi      r4, r2, 0x5F4C
	  li        r5, 0
	  bl        0x2DBB28
	  li        r3, 0x78
	  bl        -0x123998
	  mr.       r0, r3
	  beq-      .loc_0x178
	  mr        r4, r31
	  bl        0x31AA54
	  mr        r0, r3

	.loc_0x178:
	  stw       r0, 0x250(r31)
	  subi      r4, r2, 0x5F4C
	  lwz       r3, -0x6514(r13)
	  bl        0x2DBB04
	  lwz       r0, 0x14(r1)
	  mr        r3, r31
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr

	.loc_0x1A4:
	*/
}

/*
 * --INFO--
 * Address:	80147880
 * Size:	0002BC
 */
void efx::TPkEffect::__ct(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  li        r9, -0x1
	  lis       r7, 0x804B
	  stw       r0, 0x44(r1)
	  li        r0, 0
	  lis       r6, 0x804A
	  lis       r4, 0x804E
	  stmw      r18, 0x8(r1)
	  addi      r23, r4, 0x68A8
	  subi      r20, r7, 0x5808
	  subi      r21, r6, 0x1D84
	  lis       r4, 0x804B
	  mr        r31, r3
	  addi      r30, r4, 0xC08
	  li        r22, 0x2B2
	  lis       r4, 0x8014
	  addi      r24, r23, 0x14
	  li        r25, 0x174
	  li        r29, 0x16F
	  addi      r12, r30, 0x14
	  li        r11, 0x14A
	  addi      r4, r4, 0x5C
	  li        r6, 0x1C
	  li        r7, 0x1
	  stb       r0, 0x0(r3)
	  lis       r3, 0x804E
	  addi      r8, r3, 0x698C
	  stb       r0, 0x1(r31)
	  lis       r3, 0x804E
	  addi      r26, r3, 0x7318
	  addi      r19, r8, 0x14
	  stb       r0, 0x2(r31)
	  lis       r3, 0x804E
	  addi      r28, r3, 0x6940
	  addi      r27, r26, 0x14
	  stb       r0, 0x3(r31)
	  lis       r3, 0x804B
	  addi      r10, r3, 0xBBC
	  addi      r18, r28, 0x14
	  stb       r0, 0x4(r31)
	  lis       r3, 0x8014
	  subi      r5, r3, 0x4
	  stb       r0, 0x5(r31)
	  addi      r3, r31, 0x70
	  stb       r0, 0x6(r31)
	  stb       r0, 0x7(r31)
	  stw       r9, 0x8(r31)
	  addi      r9, r10, 0x14
	  stw       r0, 0xC(r31)
	  stw       r0, 0x10(r31)
	  stw       r0, 0x14(r31)
	  stw       r0, 0x18(r31)
	  stw       r0, 0x1C(r31)
	  stw       r0, 0x20(r31)
	  stw       r0, 0x24(r31)
	  stw       r20, 0x34(r31)
	  stw       r21, 0x38(r31)
	  stw       r8, 0x34(r31)
	  stw       r19, 0x38(r31)
	  stw       r0, 0x3C(r31)
	  sth       r22, 0x40(r31)
	  stb       r0, 0x42(r31)
	  stw       r23, 0x34(r31)
	  stw       r24, 0x38(r31)
	  stw       r0, 0x44(r31)
	  sth       r25, 0x40(r31)
	  stw       r26, 0x34(r31)
	  stw       r27, 0x38(r31)
	  stw       r20, 0x48(r31)
	  stw       r21, 0x4C(r31)
	  stw       r8, 0x48(r31)
	  stw       r19, 0x4C(r31)
	  stw       r0, 0x50(r31)
	  sth       r22, 0x54(r31)
	  stb       r0, 0x56(r31)
	  stw       r28, 0x48(r31)
	  stw       r18, 0x4C(r31)
	  stw       r0, 0x58(r31)
	  sth       r29, 0x54(r31)
	  stw       r30, 0x48(r31)
	  stw       r12, 0x4C(r31)
	  stw       r20, 0x5C(r31)
	  stw       r21, 0x60(r31)
	  stw       r8, 0x5C(r31)
	  stw       r19, 0x60(r31)
	  stw       r0, 0x64(r31)
	  sth       r22, 0x68(r31)
	  stb       r0, 0x6A(r31)
	  stw       r28, 0x5C(r31)
	  stw       r18, 0x60(r31)
	  stw       r0, 0x6C(r31)
	  sth       r11, 0x68(r31)
	  stw       r10, 0x5C(r31)
	  stw       r9, 0x60(r31)
	  bl        -0x861C0
	  lis       r3, 0x8014
	  lis       r5, 0x8014
	  addi      r4, r3, 0x5C
	  li        r6, 0x1C
	  addi      r3, r31, 0x90
	  subi      r5, r5, 0x4
	  li        r7, 0x1
	  bl        -0x861E0
	  lis       r3, 0x8014
	  lis       r5, 0x8014
	  addi      r4, r3, 0x5C
	  li        r6, 0x1C
	  addi      r3, r31, 0xAC
	  subi      r5, r5, 0x4
	  li        r7, 0x1
	  bl        -0x86200
	  lis       r3, 0x8014
	  lis       r5, 0x8014
	  addi      r4, r3, 0x5C
	  li        r6, 0x1C
	  addi      r3, r31, 0xC8
	  subi      r5, r5, 0x4
	  li        r7, 0x2
	  bl        -0x86220
	  lis       r3, 0x8014
	  lis       r5, 0x8014
	  addi      r4, r3, 0x5C
	  li        r6, 0x1C
	  addi      r3, r31, 0x100
	  subi      r5, r5, 0x4
	  li        r7, 0x1
	  bl        -0x86240
	  lis       r3, 0x8014
	  lis       r5, 0x8014
	  addi      r4, r3, 0x5C
	  li        r6, 0x1C
	  addi      r3, r31, 0x11C
	  subi      r5, r5, 0x4
	  li        r7, 0x2
	  bl        -0x86260
	  lis       r3, 0x8014
	  lis       r5, 0x8014
	  addi      r4, r3, 0x5C
	  li        r6, 0x1C
	  addi      r3, r31, 0x154
	  subi      r5, r5, 0x4
	  li        r7, 0x1
	  bl        -0x86280
	  lis       r3, 0x8014
	  lis       r5, 0x8014
	  addi      r4, r3, 0x5C
	  li        r6, 0x1C
	  addi      r3, r31, 0x170
	  subi      r5, r5, 0x4
	  li        r7, 0x1
	  bl        -0x862A0
	  lis       r3, 0x8014
	  lis       r5, 0x8014
	  addi      r4, r3, 0x5C
	  li        r6, 0x1C
	  addi      r3, r31, 0x18C
	  subi      r5, r5, 0x4
	  li        r7, 0x1
	  bl        -0x862C0
	  li        r0, 0
	  mr        r3, r31
	  stb       r0, 0x0(r31)
	  stb       r0, 0x1(r31)
	  stb       r0, 0x2(r31)
	  stb       r0, 0x3(r31)
	  stb       r0, 0x4(r31)
	  stb       r0, 0x5(r31)
	  stb       r0, 0x6(r31)
	  stb       r0, 0x7(r31)
	  lmw       r18, 0x8(r1)
	  lwz       r0, 0x44(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000060
 */
void efx::ToeMoeSmoke::__dt(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000060
 */
void efx::ToeWater::__dt(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000060
 */
void efx::ToeChudoku::__dt(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000060
 */
void efx::ToeMoeBC::__dt(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000060
 */
void efx::ToeNagekira::__dt(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000060
 */
void efx::ToeDoping::__dt(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000060
 */
void efx::ToeKourin::__dt(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80147B3C
 * Size:	00009C
 */
void efx::TPkBlackDown::__dt(void)
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
	  beq-      .loc_0x80
	  lis       r3, 0x804B
	  addi      r3, r3, 0xBBC
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x14
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x70
	  lis       r3, 0x804E
	  addi      r3, r3, 0x6940
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x14
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x70
	  lis       r4, 0x804E
	  addi      r3, r30, 0x4
	  addi      r5, r4, 0x698C
	  li        r4, 0
	  stw       r5, 0x0(r30)
	  addi      r0, r5, 0x14
	  stw       r0, 0x4(r30)
	  bl        -0xB7F0C

	.loc_0x70:
	  extsh.    r0, r31
	  ble-      .loc_0x80
	  mr        r3, r30
	  bl        -0x123B04

	.loc_0x80:
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
 * Address:	80147BD8
 * Size:	00009C
 */
void efx::TPkMoeA::__dt(void)
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
	  beq-      .loc_0x80
	  lis       r3, 0x804B
	  addi      r3, r3, 0xC08
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x14
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x70
	  lis       r3, 0x804E
	  addi      r3, r3, 0x6940
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x14
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x70
	  lis       r4, 0x804E
	  addi      r3, r30, 0x4
	  addi      r5, r4, 0x698C
	  li        r4, 0
	  stw       r5, 0x0(r30)
	  addi      r0, r5, 0x14
	  stw       r0, 0x4(r30)
	  bl        -0xB7FA8

	.loc_0x70:
	  extsh.    r0, r31
	  ble-      .loc_0x80
	  mr        r3, r30
	  bl        -0x123BA0

	.loc_0x80:
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
 * Address:	80147C74
 * Size:	00009C
 */
void efx::TPkNageBlur::__dt(void)
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
	  beq-      .loc_0x80
	  lis       r3, 0x804E
	  addi      r3, r3, 0x7318
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x14
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x70
	  lis       r3, 0x804E
	  addi      r3, r3, 0x68A8
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x14
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x70
	  lis       r4, 0x804E
	  addi      r3, r30, 0x4
	  addi      r5, r4, 0x698C
	  li        r4, 0
	  stw       r5, 0x0(r30)
	  addi      r0, r5, 0x14
	  stw       r0, 0x4(r30)
	  bl        -0xB8044

	.loc_0x70:
	  extsh.    r0, r31
	  ble-      .loc_0x80
	  mr        r3, r30
	  bl        -0x123C3C

	.loc_0x80:
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
 * Address:	80147D10
 * Size:	0000B4
 */
void Game::Piki::isWalking(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        0x124
	  cmpwi     r3, 0
	  bne-      .loc_0x9C
	  mr        r3, r31
	  bl        0xE0
	  cmplwi    r3, 0
	  beq-      .loc_0x9C
	  lhz       r0, 0x28(r3)
	  cmplwi    r0, 0x1
	  bne-      .loc_0x9C
	  lfs       f2, 0x1E4(r31)
	  lfs       f1, 0x1E8(r31)
	  fmuls     f0, f2, f2
	  lfs       f3, 0x1EC(r31)
	  fmuls     f4, f1, f1
	  lfs       f1, -0x5F44(r2)
	  fmuls     f3, f3, f3
	  fadds     f0, f0, f4
	  fadds     f0, f3, f0
	  fcmpo     cr0, f0, f1
	  ble-      .loc_0x84
	  fmadds    f0, f2, f2, f4
	  fadds     f2, f3, f0
	  fcmpo     cr0, f2, f1
	  ble-      .loc_0x88
	  fsqrte    f0, f2
	  fmuls     f2, f0, f2
	  b         .loc_0x88

	.loc_0x84:
	  fmr       f2, f1

	.loc_0x88:
	  lfs       f0, -0x5F40(r2)
	  fcmpo     cr0, f2, f0
	  ble-      .loc_0x9C
	  li        r3, 0x1
	  b         .loc_0xA0

	.loc_0x9C:
	  li        r3, 0

	.loc_0xA0:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80147DC4
 * Size:	000050
 */
void Game::Piki::getFormationSlotID(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        0x70
	  cmpwi     r3, 0
	  bne-      .loc_0x38
	  mr        r3, r31
	  bl        .loc_0x50
	  cmplwi    r3, 0
	  beq-      .loc_0x38
	  lwz       r3, 0x34(r3)
	  b         .loc_0x3C

	.loc_0x38:
	  li        r3, -0x1

	.loc_0x3C:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr

	.loc_0x50:
	*/
}

/*
 * --INFO--
 * Address:	80147E14
 * Size:	000024
 */
void Game::Piki::getCurrAction(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x294(r3)
	  bl        0x4EEDC
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80147E38
 * Size:	000010
 */
void Game::Piki::clearCurrAction(void)
{
	/*
	.loc_0x0:
	  lwz       r3, 0x294(r3)
	  li        r0, -0x1
	  stw       r0, 0x8(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80147E48
 * Size:	00000C
 */
void Game::Piki::getCurrActionID(void)
{
	/*
	.loc_0x0:
	  lwz       r3, 0x294(r3)
	  lwz       r3, 0x8(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80147E54
 * Size:	000280
 */
void Game::Piki::onInit((Game::CreatureInitArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r5, 0x8048
	  stw       r0, 0x24(r1)
	  li        r0, -0x1
	  stw       r31, 0x1C(r1)
	  subi      r31, r5, 0x3780
	  stw       r30, 0x18(r1)
	  mr        r30, r4
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  sth       r0, 0x2A4(r3)
	  li        r0, 0
	  stw       r0, 0x2C4(r3)
	  bl        0x216C
	  mr        r3, r29
	  bl        -0xB100
	  mr        r3, r29
	  li        r4, 0x1
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x1E8(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r29
	  li        r4, 0x1
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x1D8(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r29
	  li        r4, 0x1
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x1E0(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r29
	  li        r4, 0
	  bl        0x15E4
	  li        r0, 0
	  mr        r4, r29
	  stb       r0, 0x2B8(r29)
	  stb       r0, 0x2B9(r29)
	  lwz       r3, -0x6D0C(r13)
	  bl        0x16838
	  mr        r3, r29
	  bl        -0xB094
	  lwz       r3, 0x258(r29)
	  bl        0x2707A0
	  lwz       r3, 0x258(r29)
	  addi      r5, r29, 0x25C
	  addi      r4, r29, 0x26C
	  li        r0, -0x1
	  stw       r5, 0xC(r3)
	  lwz       r3, 0x258(r29)
	  stw       r4, 0x14(r3)
	  lwz       r3, 0x258(r29)
	  stw       r0, 0x8(r3)
	  lwz       r3, 0x114(r29)
	  lwz       r4, 0x174(r29)
	  bl        -0x12478
	  cmplwi    r30, 0
	  beq-      .loc_0x14C
	  lwz       r0, 0x8(r30)
	  cmplwi    r0, 0
	  beq-      .loc_0x14C
	  lis       r4, 0x804B
	  lis       r3, 0x804B
	  addi      r4, r4, 0x530
	  stw       r0, 0xC(r1)
	  addi      r0, r3, 0x524
	  addi      r5, r1, 0x8
	  stw       r4, 0x8(r1)
	  li        r4, 0xB
	  stw       r0, 0x8(r1)
	  lwz       r3, 0x294(r29)
	  bl        0x4F014
	  mr        r3, r29
	  li        r4, 0x5
	  bl        0x2634
	  lwz       r0, 0x17C(r29)
	  ori       r0, r0, 0x100
	  stw       r0, 0x17C(r29)
	  b         .loc_0x16C

	.loc_0x14C:
	  lwz       r3, 0x294(r29)
	  li        r4, 0x1
	  li        r5, 0
	  bl        0x4EFE8
	  lis       r3, 0x8051
	  mr        r4, r29
	  addi      r3, r3, 0x25EC
	  bl        0x890D8

	.loc_0x16C:
	  cmplwi    r30, 0
	  beq-      .loc_0x180
	  lwz       r5, 0x4(r30)
	  cmpwi     r5, -0x1
	  bne-      .loc_0x1A4

	.loc_0x180:
	  lwz       r3, 0x28C(r29)
	  mr        r4, r29
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x1C0

	.loc_0x1A4:
	  lwz       r3, 0x28C(r29)
	  mr        r4, r29
	  li        r6, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl

	.loc_0x1C0:
	  lwz       r4, -0x6D0C(r13)
	  addi      r3, r29, 0x298
	  lwz       r4, 0x78(r4)
	  bl        0x4E6C4
	  lwz       r3, 0x174(r29)
	  addi      r4, r31, 0x18
	  bl        0x2F6FB8
	  stw       r3, 0x268(r29)
	  addi      r4, r31, 0x24
	  lwz       r3, 0x174(r29)
	  bl        0x2F6FA8
	  stw       r3, 0x278(r29)
	  lwz       r0, 0x268(r29)
	  cmplwi    r0, 0
	  bne-      .loc_0x210
	  addi      r3, r31, 0x30
	  addi      r5, r31, 0x3C
	  li        r4, 0x2B4
	  crclr     6, 0x6
	  bl        -0x11DA20

	.loc_0x210:
	  lwz       r0, 0x278(r29)
	  cmplwi    r0, 0
	  bne-      .loc_0x230
	  addi      r3, r31, 0x30
	  addi      r5, r31, 0x54
	  li        r4, 0x2B7
	  crclr     6, 0x6
	  bl        -0x11DA40

	.loc_0x230:
	  mr        r3, r29
	  addi      r4, r31, 0x6C
	  bl        -0x8BBC
	  lwz       r3, -0x6D0C(r13)
	  addi      r4, r31, 0x78
	  bl        0x17168
	  lfs       f0, -0x5F44(r2)
	  li        r0, -0x1
	  mr        r3, r29
	  li        r4, 0
	  stfs      f0, 0x288(r29)
	  sth       r0, 0x284(r29)
	  bl        0x1C70
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
 * Address:	801480D4
 * Size:	000034
 */
void start__Q24Game26StateMachine<Game::Piki>
FPQ24Game4PikiiPQ24Game8StateArg(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  li        r0, 0
	  stw       r0, 0x290(r4)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
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
 * Address:	80148108
 * Size:	00038C
 */
void Game::Piki::onKill((Game::CreatureKillArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stw       r31, 0x2C(r1)
	  mr        r31, r3
	  stw       r30, 0x28(r1)
	  stw       r29, 0x24(r1)
	  mr        r29, r4
	  lwz       r5, -0x6C18(r13)
	  lwz       r0, 0x44(r5)
	  cmpwi     r0, 0x1
	  bne-      .loc_0x5C
	  cmplwi    r29, 0
	  beq-      .loc_0x5C
	  lwz       r0, 0x4(r29)
	  rlwinm.   r0,r0,0,0,0
	  beq-      .loc_0x5C
	  lwz       r3, -0x6CD0(r13)
	  lbz       r4, 0x2B8(r31)
	  bl        0x33948
	  cmplwi    r3, 0
	  beq-      .loc_0x5C
	  bl        0x3002C

	.loc_0x5C:
	  mr        r3, r31
	  bl        0x1C40
	  lwz       r30, 0x258(r31)
	  li        r0, 0
	  stb       r0, 0x0(r30)
	  mr        r3, r30
	  stb       r0, 0x1(r30)
	  stb       r0, 0x2(r30)
	  stb       r0, 0x3(r30)
	  stb       r0, 0x4(r30)
	  stb       r0, 0x5(r30)
	  stb       r0, 0x6(r30)
	  stb       r0, 0x7(r30)
	  bl        0x2706F4
	  mr        r3, r30
	  bl        0x270770
	  mr        r3, r30
	  bl        0x270884
	  mr        r3, r30
	  bl        0x27093C
	  mr        r3, r30
	  bl        0x2709D8
	  mr        r3, r30
	  bl        0x270A54
	  mr        r3, r30
	  bl        0x270AE0
	  mr        r3, r30
	  bl        0x270B64
	  mr        r3, r30
	  bl        0x270BE0
	  mr        r3, r30
	  bl        0x270C5C
	  cmplwi    r29, 0
	  beq-      .loc_0xF0
	  lwz       r0, 0x4(r29)
	  rlwinm.   r0,r0,0,31,31
	  bne-      .loc_0x2B0

	.loc_0xF0:
	  lwz       r3, -0x6C18(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x170
	  lwz       r3, 0x44(r3)
	  li        r0, 0
	  cmpwi     r3, 0x2
	  beq-      .loc_0x114
	  cmpwi     r3, 0x3
	  bne-      .loc_0x118

	.loc_0x114:
	  li        r0, 0x1

	.loc_0x118:
	  rlwinm.   r0,r0,0,24,31
	  beq-      .loc_0x170
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x1C0(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x170
	  lis       r3, 0x804B
	  lis       r4, 0x804B
	  addi      r0, r3, 0x590
	  lwz       r3, -0x6C18(r13)
	  stw       r0, 0x8(r1)
	  addi      r0, r4, 0x611C
	  addi      r4, r1, 0x8
	  stw       r0, 0x8(r1)
	  lwz       r3, 0x58(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x50(r12)
	  mtctr     r12
	  bctrl

	.loc_0x170:
	  mr        r4, r31
	  addi      r3, r1, 0xC
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r30, 0x258(r31)
	  li        r0, 0
	  stb       r0, 0x0(r30)
	  mr        r3, r30
	  stb       r0, 0x1(r30)
	  stb       r0, 0x2(r30)
	  stb       r0, 0x3(r30)
	  stb       r0, 0x4(r30)
	  stb       r0, 0x5(r30)
	  stb       r0, 0x6(r30)
	  stb       r0, 0x7(r30)
	  bl        0x2705D0
	  mr        r3, r30
	  bl        0x27064C
	  mr        r3, r30
	  bl        0x270760
	  mr        r3, r30
	  bl        0x270818
	  mr        r3, r30
	  bl        0x2708B4
	  mr        r3, r30
	  bl        0x270930
	  mr        r3, r30
	  bl        0x2709BC
	  mr        r3, r30
	  bl        0x270A40
	  mr        r3, r30
	  bl        0x270ABC
	  mr        r3, r30
	  bl        0x270B38
	  lwz       r3, 0x10(r30)
	  lwz       r4, 0x8(r30)
	  bl        0x26F1B4
	  lwz       r3, 0x250(r31)
	  li        r4, 0x2810
	  li        r5, 0x5A
	  li        r6, 0
	  bl        0x31A25C
	  lwz       r3, -0x6C18(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x2B0
	  lbz       r0, 0x3C(r3)
	  rlwinm.   r0,r0,0,27,27
	  bne-      .loc_0x2B0
	  lbz       r0, 0x2B8(r31)
	  cmpwi     r0, 0x5
	  bge-      .loc_0x284
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x1F4(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x284
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x1C0(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x284
	  li        r3, 0x7
	  bl        0xE8390

	.loc_0x284:
	  lha       r4, 0x2A4(r31)
	  cmpwi     r4, -0x1
	  beq-      .loc_0x2B0
	  lwz       r3, -0x6C18(r13)
	  lwz       r0, 0x44(r3)
	  cmpwi     r0, 0
	  bne-      .loc_0x2B0
	  lwz       r3, -0x6B70(r13)
	  addi      r3, r3, 0x40
	  bl        0xEB714
	  bl        0xEB49C

	.loc_0x2B0:
	  mr        r3, r31
	  li        r30, 0
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x1C0(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x2E0
	  lbz       r0, 0x2B8(r31)
	  cmpwi     r0, 0x5
	  bne-      .loc_0x2E0
	  li        r30, 0x1

	.loc_0x2E0:
	  mr        r3, r31
	  bl        -0xB5A0
	  mr        r3, r31
	  li        r4, 0
	  bl        0x18CC
	  mr        r3, r31
	  li        r4, 0
	  bl        0x1920
	  lwz       r3, 0x294(r31)
	  bl        0x4E8F4
	  cmplwi    r3, 0
	  beq-      .loc_0x328
	  lwz       r3, 0x294(r31)
	  bl        0x4E8E4
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl

	.loc_0x328:
	  lwz       r4, 0x294(r31)
	  li        r0, -0x1
	  addi      r3, r31, 0x298
	  stw       r0, 0x8(r4)
	  bl        0x4E2E0
	  rlwinm.   r0,r30,0,24,31
	  bne-      .loc_0x354
	  lis       r3, 0x8051
	  mr        r4, r31
	  addi      r3, r3, 0x25EC
	  bl        0x88CC0

	.loc_0x354:
	  lwz       r3, -0x6D0C(r13)
	  mr        r4, r31
	  bl        0x267C
	  li        r0, 0
	  mr        r3, r31
	  stw       r0, 0x2C4(r31)
	  bl        0xD6180
	  lwz       r0, 0x34(r1)
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  lwz       r29, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80148494
 * Size:	000004
 */
void PikiAI::Action::cleanup(void)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80148498
 * Size:	00001C
 */
void Game::Piki::onSetPosition(void)
{
	/*
	.loc_0x0:
	  lfs       f0, 0x20C(r3)
	  stfs      f0, 0x218(r3)
	  lfs       f0, 0x210(r3)
	  stfs      f0, 0x21C(r3)
	  lfs       f0, 0x214(r3)
	  stfs      f0, 0x220(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801484B4
 * Size:	000024
 */
void Game::Piki::getLODSphere((Sys::Sphere&))
{
	/*
	.loc_0x0:
	  lfs       f1, 0x20C(r3)
	  lfs       f0, -0x5F3C(r2)
	  stfs      f1, 0x0(r4)
	  lfs       f1, 0x210(r3)
	  stfs      f1, 0x4(r4)
	  lfs       f1, 0x214(r3)
	  stfs      f1, 0x8(r4)
	  stfs      f0, 0xC(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801484D8
 * Size:	000210
 */
void Game::Piki::update(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  subi      r4, r2, 0x5F38
	  li        r5, 0x1
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  lwz       r6, -0x6514(r13)
	  lwz       r3, 0x28(r6)
	  bl        0x2E25F8
	  lwz       r3, 0x250(r30)
	  lwz       r12, 0x28(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r30
	  bl        0xFB8
	  mr        r3, r30
	  bl        -0xACE8
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x210(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, -0x6514(r13)
	  subi      r4, r2, 0x5F30
	  li        r5, 0x1
	  lwz       r3, 0x28(r3)
	  bl        0x2E25AC
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0xB8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xB0
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0xBC(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xC8

	.loc_0xB0:
	  lwz       r3, 0x28C(r30)
	  mr        r4, r30
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl

	.loc_0xC8:
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x1F8
	  lwz       r3, -0x6514(r13)
	  subi      r4, r2, 0x5F30
	  lwz       r3, 0x28(r3)
	  bl        0x2E2534
	  lwz       r3, 0x258(r30)
	  bl        0x27011C
	  lwz       r3, 0x27C(r30)
	  subi      r4, r2, 0x5F38
	  lfs       f0, 0x25C(r30)
	  stfs      f0, 0x18(r3)
	  lfs       f0, 0x260(r30)
	  stfs      f0, 0x1C(r3)
	  lfs       f0, 0x264(r30)
	  stfs      f0, 0x20(r3)
	  lwz       r3, -0x6514(r13)
	  lwz       r3, 0x28(r3)
	  bl        0x2E2500
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x1F8
	  lwz       r0, 0x190(r30)
	  cmplwi    r0, 0
	  beq-      .loc_0x1F8
	  mr        r3, r30
	  bl        0x908
	  cmpwi     r3, 0x5
	  lbz       r31, 0x2B8(r30)
	  beq-      .loc_0x1F8
	  cmpwi     r3, 0xA
	  beq-      .loc_0x1F8
	  lwz       r3, 0x290(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x58(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1F8
	  cmpwi     r31, 0
	  beq-      .loc_0x1F8
	  cmpwi     r31, 0x5
	  beq-      .loc_0x1F8
	  lwz       r3, -0x64AC(r13)
	  lwz       r0, 0x18(r3)
	  cmpwi     r0, 0
	  bne-      .loc_0x1F8
	  lfs       f1, 0x204(r30)
	  lfs       f0, -0x5F28(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x1F8
	  lwz       r3, 0x28C(r30)
	  mr        r4, r30
	  li        r5, 0xA
	  li        r6, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x190(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x258(r30)
	  stw       r3, 0x20(r4)

	.loc_0x1F8:
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
 * Address:	801486E8
 * Size:	000008
 */
void Game::PikiState::dead(void)
{
	/*
	.loc_0x0:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801486F0
 * Size:	000058
 */
void Game::Piki::isAlive(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r0, 0xBC(r3)
	  rlwinm.   r0,r0,31,31,31
	  beq-      .loc_0x44
	  lwz       r3, 0x290(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x44
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x58(r12)
	  mtctr     r12
	  bctrl
	  rlwinm    r0,r3,0,24,31
	  cntlzw    r0, r0
	  rlwinm    r3,r0,27,5,31
	  b         .loc_0x48

	.loc_0x44:
	  mr        r3, r0

	.loc_0x48:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80148748
 * Size:	000004
 */
void Game::Piki::on_movie_begin((bool))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8014874C
 * Size:	000064
 */
void Game::Piki::on_movie_end((bool))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  rlwinm.   r0,r4,0,24,31
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  beq-      .loc_0x50
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1AC(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  li        r4, 0x1F
	  lwz       r12, 0x0(r31)
	  li        r5, 0x1F
	  li        r6, 0
	  li        r7, 0
	  lwz       r12, 0x208(r12)
	  mtctr     r12
	  bctrl

	.loc_0x50:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801487B0
 * Size:	000008
 */
void Game::Piki::getCreatureID(void)
{
	/*
	.loc_0x0:
	  lwz       r3, 0x2C0(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801487B8
 * Size:	000004
 */
void Game::Piki::movieUserCommand((unsigned long, Game::MoviePlayer*))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801487BC
 * Size:	000038
 */
void Game::Piki::movieStartAnimation((unsigned long))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r5, r4
	  li        r6, 0
	  stw       r0, 0x14(r1)
	  li        r7, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x208(r12)
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
 * Address:	801487F4
 * Size:	000048
 */
void Game::Piki::movieStartDemoAnimation((SysShape::AnimInfo*))
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
	  addi      r3, r30, 0x1C8
	  bl        0x2E053C
	  mr        r4, r31
	  addi      r3, r30, 0x1AC
	  bl        0x2E0530
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
 * Address:	8014883C
 * Size:	000088
 */
void movieSetTranslation__Q24Game4PikiFR10Vector3<float> f(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stfd      f31, 0x10(r1)
	  psq_st    f31,0x18(r1),0,0
	  stw       r31, 0xC(r1)
	  lfs       f0, -0x5F44(r2)
	  mr        r31, r3
	  fmr       f31, f1
	  li        r5, 0
	  stfs      f0, 0x200(r3)
	  stfs      f0, 0x204(r3)
	  stfs      f0, 0x208(r3)
	  stfs      f0, 0x1E4(r3)
	  stfs      f0, 0x1E8(r3)
	  stfs      f0, 0x1EC(r3)
	  stfs      f0, 0x11C(r3)
	  stfs      f0, 0x120(r3)
	  stfs      f0, 0x124(r3)
	  lfs       f0, 0x20C(r3)
	  stfs      f0, 0x238(r3)
	  lfs       f0, 0x210(r3)
	  stfs      f0, 0x23C(r3)
	  lfs       f0, 0x214(r3)
	  stfs      f0, 0x240(r3)
	  bl        -0xD6F8
	  stfs      f31, 0x1FC(r31)
	  psq_l     f31,0x18(r1),0,0
	  lwz       r0, 0x24(r1)
	  lfd       f31, 0x10(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801488C4
 * Size:	000008
 */
void movieGotoPosition__Q24Game4PikiFR10Vector3<float>(void)
{
	/*
	.loc_0x0:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801488CC
 * Size:	000040
 */
void Game::Piki::startSound((unsigned long, bool))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  rlwinm.   r0,r5,0,24,31
	  beq-      .loc_0x20
	  li        r5, 0
	  bl        .loc_0x40
	  b         .loc_0x30

	.loc_0x20:
	  lwz       r3, 0x250(r3)
	  li        r5, 0x5A
	  li        r6, 0
	  bl        0x319C88

	.loc_0x30:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr

	.loc_0x40:
	*/
}

/*
 * --INFO--
 * Address:	8014890C
 * Size:	000048
 */
void Game::Piki::startSound((unsigned long, PSGame::SeMgr::SetSeId))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  cmpwi     r5, 0x8
	  stw       r0, 0x14(r1)
	  bge-      .loc_0x28
	  lwz       r3, 0x250(r3)
	  li        r6, 0x5A
	  li        r7, 0
	  bl        0x319EBC
	  b         .loc_0x38

	.loc_0x28:
	  lwz       r3, 0x250(r3)
	  li        r5, 0x5A
	  li        r6, 0
	  bl        0x319C40

	.loc_0x38:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80148954
 * Size:	000070
 */
void Game::Piki::startSound((Game::Creature*, unsigned long, bool))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  rlwinm.   r0,r6,0,24,31
	  stw       r31, 0xC(r1)
	  mr        r31, r5
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  beq-      .loc_0x30
	  li        r6, 0
	  bl        .loc_0x70
	  b         .loc_0x58

	.loc_0x30:
	  mr        r3, r4
	  lwz       r12, 0x0(r4)
	  lwz       r12, 0xF4(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x250(r30)
	  mr        r5, r31
	  li        r6, 0
	  bl        0x319D1C

	.loc_0x58:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr

	.loc_0x70:
	*/
}

/*
 * --INFO--
 * Address:	801489C4
 * Size:	0000CC
 */
void Game::Piki::startSound((Game::Creature*, unsigned long,
                             PSGame::SeMgr::SetSeId))
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
	  mr.       r29, r4
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  beq-      .loc_0xAC
	  mr        r3, r29
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0xF4(r12)
	  mtctr     r12
	  bctrl
	  cmplwi    r3, 0
	  beq-      .loc_0xAC
	  cmpwi     r31, 0x8
	  bge-      .loc_0x84
	  mr        r3, r29
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0xF4(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x250(r28)
	  mr        r5, r30
	  mr        r6, r31
	  li        r7, 0
	  bl        0x319CF4
	  b         .loc_0xAC

	.loc_0x84:
	  mr        r3, r29
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0xF4(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x250(r28)
	  mr        r5, r30
	  li        r6, 0
	  bl        0x319C58

	.loc_0xAC:
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
 * Address:	80148A90
 * Size:	000014
 */
void Game::Piki::getJAIObject(void)
{
	/*
	.loc_0x0:
	  lwz       r3, 0x250(r3)
	  cmplwi    r3, 0
	  beqlr-
	  addi      r3, r3, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80148AA4
 * Size:	000008
 */
void Game::Piki::getPSCreature(void)
{
	/*
	.loc_0x0:
	  lwz       r3, 0x250(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80148AAC
 * Size:	000030
 */
void Game::Piki::canVsBattle(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x290(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x5C(r12)
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
 * Address:	80148ADC
 * Size:	000008
 */
void Game::PikiState::battleOK(void)
{
	/*
	.loc_0x0:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80148AE4
 * Size:	00003C
 */
void Game::Piki::getVsBattlePiki(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x294(r3)
	  lwz       r0, 0x8(r3)
	  cmpwi     r0, 0xD
	  bne-      .loc_0x28
	  bl        0x4E200
	  lwz       r3, 0x10(r3)
	  b         .loc_0x2C

	.loc_0x28:
	  li        r3, 0

	.loc_0x2C:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80148B20
 * Size:	0000B0
 */
void Game::Piki::attachRadar((bool))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lbz       r0, 0x2B8(r3)
	  cmpwi     r0, 0x3
	  beq-      .loc_0x84
	  bge-      .loc_0x34
	  cmpwi     r0, 0x1
	  beq-      .loc_0x54
	  bge-      .loc_0x64
	  cmpwi     r0, 0
	  bge-      .loc_0x44
	  b         .loc_0xA0

	.loc_0x34:
	  cmpwi     r0, 0x5
	  beq-      .loc_0x94
	  bge-      .loc_0xA0
	  b         .loc_0x74

	.loc_0x44:
	  li        r4, 0x4
	  li        r5, 0
	  bl        0xD5A18
	  b         .loc_0xA0

	.loc_0x54:
	  li        r4, 0x3
	  li        r5, 0
	  bl        0xD5A08
	  b         .loc_0xA0

	.loc_0x64:
	  li        r4, 0x5
	  li        r5, 0
	  bl        0xD59F8
	  b         .loc_0xA0

	.loc_0x74:
	  li        r4, 0x7
	  li        r5, 0
	  bl        0xD59E8
	  b         .loc_0xA0

	.loc_0x84:
	  li        r4, 0x6
	  li        r5, 0
	  bl        0xD59D8
	  b         .loc_0xA0

	.loc_0x94:
	  li        r4, 0x8
	  li        r5, 0
	  bl        0xD59C8

	.loc_0xA0:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80148BD0
 * Size:	000148
 */
void Game::Piki::inWaterCallback((Game::WaterBox*))
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
	  bl        0x344
	  cmpwi     r3, 0x5
	  lbz       r31, 0x2B8(r29)
	  beq-      .loc_0xB0
	  cmpwi     r3, 0xA
	  beq-      .loc_0xB0
	  lwz       r3, 0x290(r29)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x58(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0xB0
	  cmpwi     r31, 0
	  beq-      .loc_0xB0
	  cmpwi     r31, 0x5
	  beq-      .loc_0xB0
	  lwz       r3, -0x64AC(r13)
	  lwz       r0, 0x18(r3)
	  cmpwi     r0, 0
	  bne-      .loc_0x12C
	  lfs       f1, 0x204(r29)
	  lfs       f0, -0x5F28(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x12C
	  lwz       r3, 0x28C(r29)
	  mr        r4, r29
	  li        r5, 0xA
	  li        r6, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0xB0
	  b         .loc_0x12C

	.loc_0xB0:
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x258(r29)
	  stw       r3, 0x20(r4)
	  mr        r3, r29
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x12C
	  lwz       r31, 0x258(r29)
	  lwz       r4, 0x0(r31)
	  mr        r3, r31
	  ori       r0, r4, 0x20
	  rlwinm    r30,r4,27,31,31
	  stw       r0, 0x0(r31)
	  bl        0x26FA88
	  cmplwi    r30, 0
	  bne-      .loc_0x114
	  addi      r3, r31, 0x28
	  bl        0x26EBB4

	.loc_0x114:
	  lwz       r3, 0x250(r29)
	  li        r4, 0x2811
	  li        r5, 0x6
	  li        r6, 0x5A
	  li        r7, 0
	  bl        0x319AF0

	.loc_0x12C:
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
 * Address:	80148D18
 * Size:	000068
 */
void Game::Piki::outWaterCallback(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r3, 0x290(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x34
	  lwz       r12, 0x0(r3)
	  mr        r4, r31
	  lwz       r12, 0x38(r12)
	  mtctr     r12
	  bctrl

	.loc_0x34:
	  lwz       r31, 0x258(r31)
	  lwz       r0, 0x0(r31)
	  mr        r3, r31
	  rlwinm    r0,r0,0,27,25
	  stw       r0, 0x0(r31)
	  bl        0x270058
	  mr        r3, r31
	  bl        0x2700D4
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80148D80
 * Size:	000004
 */
void Game::PikiState::outWaterCallback((Game::Piki*))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80148D84
 * Size:	000154
 */
void Game::Piki::might_bury(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0xA0(r1)
	  mflr      r0
	  stw       r0, 0xA4(r1)
	  stw       r31, 0x9C(r1)
	  mr        r31, r3
	  lwz       r3, 0xC8(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x38
	  addi      r3, r3, 0x5C
	  bl        0x2D36A4
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x38
	  li        r3, 0
	  b         .loc_0x140

	.loc_0x38:
	  lfs       f1, 0x20C(r31)
	  addi      r3, r1, 0x24
	  lfs       f0, -0x5F24(r2)
	  addi      r4, r1, 0x14
	  stfs      f1, 0x14(r1)
	  lfs       f1, 0x210(r31)
	  stfs      f1, 0x18(r1)
	  lfs       f1, 0x214(r31)
	  stfs      f1, 0x1C(r1)
	  stfs      f0, 0x20(r1)
	  bl        0xE55BC
	  addi      r3, r1, 0x44
	  addi      r4, r1, 0x24
	  bl        0xE55F0
	  addi      r3, r1, 0x44
	  bl        0xE5664
	  b         .loc_0x12C

	.loc_0x7C:
	  addi      r3, r1, 0x44
	  bl        0xE5740
	  lhz       r0, 0x128(r3)
	  cmplwi    r0, 0x40A
	  beq-      .loc_0xA0
	  cmplwi    r0, 0x40C
	  beq-      .loc_0xA0
	  cmplwi    r0, 0x405
	  bne-      .loc_0x124

	.loc_0xA0:
	  mr        r4, r3
	  addi      r3, r1, 0x8
	  lwz       r12, 0x0(r4)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f1, 0xC(r1)
	  lfs       f0, 0x210(r31)
	  lfs       f3, 0x8(r1)
	  fsubs     f4, f1, f0
	  lfs       f2, 0x20C(r31)
	  lfs       f1, 0x10(r1)
	  lfs       f0, 0x214(r31)
	  fsubs     f3, f3, f2
	  fmuls     f4, f4, f4
	  fsubs     f2, f1, f0
	  lfs       f0, -0x5F44(r2)
	  fmadds    f1, f3, f3, f4
	  fmuls     f2, f2, f2
	  fadds     f1, f2, f1
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x108
	  ble-      .loc_0x10C
	  fsqrte    f0, f1
	  fmuls     f1, f0, f1
	  b         .loc_0x10C

	.loc_0x108:
	  fmr       f1, f0

	.loc_0x10C:
	  lfs       f0, -0x5F24(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x124
	  li        r3, 0
	  b         .loc_0x140

	.loc_0x124:
	  addi      r3, r1, 0x44
	  bl        0xE5654

	.loc_0x12C:
	  addi      r3, r1, 0x44
	  bl        0xE5680
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x7C
	  li        r3, 0x1

	.loc_0x140:
	  lwz       r0, 0xA4(r1)
	  lwz       r31, 0x9C(r1)
	  mtlr      r0
	  addi      r1, r1, 0xA0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80148ED8
 * Size:	000014
 */
void Game::Piki::surviveDayEnd(void)
{
	/*
	.loc_0x0:
	  lwz       r3, 0x294(r3)
	  lwz       r0, 0x8(r3)
	  cntlzw    r0, r0
	  rlwinm    r3,r0,27,24,31
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80148EEC
 * Size:	000044
 */
void Game::Piki::onKeyEvent((SysShape::KeyEvent const&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r6, r3
	  mr        r5, r4
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x290(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x34
	  lwz       r12, 0x0(r3)
	  mr        r4, r6
	  lwz       r12, 0x30(r12)
	  mtctr     r12
	  bctrl

	.loc_0x34:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80148F30
 * Size:	000004
 */
void Game::PikiState::onKeyEvent((Game::Piki*, SysShape::KeyEvent const&))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80148F34
 * Size:	00001C
 */
void Game::Piki::getStateID(void)
{
	/*
	.loc_0x0:
	  lwz       r3, 0x290(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x14
	  lwz       r3, 0x4(r3)
	  blr

	.loc_0x14:
	  li        r3, -0x1
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80148F50
 * Size:	0000C8
 */
void Game::Piki::getSpeed((float))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stfd      f31, 0x10(r1)
	  psq_st    f31,0x18(r1),0,0
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  fmr       f31, f1
	  bl        0x1070
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x3C
	  lwz       r3, -0x6D0C(r13)
	  lwz       r3, 0x6C(r3)
	  lfs       f1, 0x11A0(r3)
	  b         .loc_0xAC

	.loc_0x3C:
	  lwz       r3, -0x6D0C(r13)
	  lbz       r0, 0x2B9(r31)
	  lwz       r3, 0x6C(r3)
	  lfs       f1, -0x5F20(r2)
	  cmplwi    r0, 0x2
	  lfs       f0, 0x2C8(r3)
	  fmuls     f2, f1, f0
	  bne-      .loc_0x64
	  lfs       f2, 0x2F0(r3)
	  b         .loc_0x70

	.loc_0x64:
	  cmplwi    r0, 0x1
	  bne-      .loc_0x70
	  lfs       f2, 0x318(r3)

	.loc_0x70:
	  lfs       f1, -0x5F20(r2)
	  lfs       f0, 0x2A0(r3)
	  lbz       r0, 0x2B8(r31)
	  fmuls     f1, f1, f0
	  cmpwi     r0, 0x4
	  fsubs     f0, f2, f1
	  fmadds    f1, f31, f0, f1
	  bne-      .loc_0x9C
	  lfs       f0, 0x1010(r3)
	  fmuls     f1, f1, f0
	  b         .loc_0xAC

	.loc_0x9C:
	  cmpwi     r0, 0x3
	  bne-      .loc_0xAC
	  lfs       f0, 0x1038(r3)
	  fmuls     f1, f1, f0

	.loc_0xAC:
	  psq_l     f31,0x18(r1),0,0
	  lwz       r0, 0x24(r1)
	  lfd       f31, 0x10(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80149018
 * Size:	0001C0
 */
void setSpeed__Q24Game4PikiFfR10Vector3<float>(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stfd      f31, 0x10(r1)
	  psq_st    f31,0x18(r1),0,0
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  fmr       f31, f1
	  lfs       f0, -0x5F44(r2)
	  mr        r30, r3
	  mr        r31, r4
	  fcmpo     cr0, f31, f0
	  bge-      .loc_0xF0
	  bl        0xF94
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x50
	  lwz       r3, -0x6D0C(r13)
	  lwz       r3, 0x6C(r3)
	  lfs       f1, 0x11A0(r3)
	  b         .loc_0xC4

	.loc_0x50:
	  lwz       r3, -0x6D0C(r13)
	  lbz       r0, 0x2B9(r30)
	  lwz       r3, 0x6C(r3)
	  lfs       f1, -0x5F20(r2)
	  cmplwi    r0, 0x2
	  lfs       f0, 0x2C8(r3)
	  fmuls     f3, f1, f0
	  bne-      .loc_0x78
	  lfs       f3, 0x2F0(r3)
	  b         .loc_0x84

	.loc_0x78:
	  cmplwi    r0, 0x1
	  bne-      .loc_0x84
	  lfs       f3, 0x318(r3)

	.loc_0x84:
	  lfs       f2, -0x5F20(r2)
	  fneg      f1, f31
	  lfs       f0, 0x2A0(r3)
	  lbz       r0, 0x2B8(r30)
	  fmuls     f2, f2, f0
	  cmpwi     r0, 0x4
	  fsubs     f0, f3, f2
	  fmadds    f1, f1, f0, f2
	  bne-      .loc_0xB4
	  lfs       f0, 0x1010(r3)
	  fmuls     f1, f1, f0
	  b         .loc_0xC4

	.loc_0xB4:
	  cmpwi     r0, 0x3
	  bne-      .loc_0xC4
	  lfs       f0, 0x1038(r3)
	  fmuls     f1, f1, f0

	.loc_0xC4:
	  fneg      f3, f1
	  lfs       f0, 0x0(r31)
	  lfs       f1, 0x4(r31)
	  lfs       f2, 0x8(r31)
	  fmuls     f0, f0, f3
	  fmuls     f1, f1, f3
	  fmuls     f2, f2, f3
	  stfs      f0, 0x1E4(r30)
	  stfs      f1, 0x1E8(r30)
	  stfs      f2, 0x1EC(r30)
	  b         .loc_0x1A0

	.loc_0xF0:
	  bl        0xED8
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x10C
	  lwz       r3, -0x6D0C(r13)
	  lwz       r3, 0x6C(r3)
	  lfs       f3, 0x11A0(r3)
	  b         .loc_0x17C

	.loc_0x10C:
	  lwz       r3, -0x6D0C(r13)
	  lbz       r0, 0x2B9(r30)
	  lwz       r3, 0x6C(r3)
	  lfs       f1, -0x5F20(r2)
	  cmplwi    r0, 0x2
	  lfs       f0, 0x2C8(r3)
	  fmuls     f2, f1, f0
	  bne-      .loc_0x134
	  lfs       f2, 0x2F0(r3)
	  b         .loc_0x140

	.loc_0x134:
	  cmplwi    r0, 0x1
	  bne-      .loc_0x140
	  lfs       f2, 0x318(r3)

	.loc_0x140:
	  lfs       f1, -0x5F20(r2)
	  lfs       f0, 0x2A0(r3)
	  lbz       r0, 0x2B8(r30)
	  fmuls     f1, f1, f0
	  cmpwi     r0, 0x4
	  fsubs     f0, f2, f1
	  fmadds    f3, f31, f0, f1
	  bne-      .loc_0x16C
	  lfs       f0, 0x1010(r3)
	  fmuls     f3, f3, f0
	  b         .loc_0x17C

	.loc_0x16C:
	  cmpwi     r0, 0x3
	  bne-      .loc_0x17C
	  lfs       f0, 0x1038(r3)
	  fmuls     f3, f3, f0

	.loc_0x17C:
	  lfs       f0, 0x0(r31)
	  lfs       f1, 0x4(r31)
	  fmuls     f0, f0, f3
	  lfs       f2, 0x8(r31)
	  fmuls     f1, f1, f3
	  fmuls     f2, f2, f3
	  stfs      f0, 0x1E4(r30)
	  stfs      f1, 0x1E8(r30)
	  stfs      f2, 0x1EC(r30)

	.loc_0x1A0:
	  psq_l     f31,0x18(r1),0,0
	  lwz       r0, 0x24(r1)
	  lfd       f31, 0x10(r1)
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000F8
 */
void Game::Piki::getSpeed((float, float))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801491D8
 * Size:	00020C
 */
void setSpeed__Q24Game4PikiFfR10Vector3<float> f(void)
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
	  fmr       f30, f1
	  lfs       f0, -0x5F44(r2)
	  fmr       f31, f2
	  mr        r30, r3
	  mr        r31, r4
	  fcmpo     cr0, f30, f0
	  bge-      .loc_0x118
	  bl        0xDC8
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x5C
	  lwz       r3, -0x6D0C(r13)
	  lwz       r3, 0x6C(r3)
	  lfs       f1, 0x11A0(r3)
	  b         .loc_0xD0

	.loc_0x5C:
	  lwz       r3, -0x6D0C(r13)
	  lbz       r0, 0x2B9(r30)
	  lwz       r3, 0x6C(r3)
	  lfs       f1, -0x5F20(r2)
	  cmplwi    r0, 0x2
	  lfs       f0, 0x2C8(r3)
	  fmuls     f3, f1, f0
	  bne-      .loc_0x84
	  lfs       f3, 0x2F0(r3)
	  b         .loc_0x90

	.loc_0x84:
	  cmplwi    r0, 0x1
	  bne-      .loc_0x90
	  lfs       f3, 0x318(r3)

	.loc_0x90:
	  lfs       f2, -0x5F20(r2)
	  fneg      f1, f30
	  lfs       f0, 0x2A0(r3)
	  lbz       r0, 0x2B8(r30)
	  fmuls     f2, f2, f0
	  cmpwi     r0, 0x4
	  fsubs     f0, f3, f2
	  fmadds    f1, f1, f0, f2
	  bne-      .loc_0xC0
	  lfs       f0, 0x1010(r3)
	  fmuls     f1, f1, f0
	  b         .loc_0xD0

	.loc_0xC0:
	  cmpwi     r0, 0x3
	  bne-      .loc_0xD0
	  lfs       f0, 0x1038(r3)
	  fmuls     f1, f1, f0

	.loc_0xD0:
	  lwz       r3, -0x6514(r13)
	  lfs       f2, 0x54(r3)
	  fmuls     f0, f1, f2
	  fcmpo     cr0, f0, f31
	  bge-      .loc_0xE8
	  b         .loc_0xEC

	.loc_0xE8:
	  fdivs     f1, f31, f2

	.loc_0xEC:
	  fneg      f3, f1
	  lfs       f0, 0x0(r31)
	  lfs       f1, 0x4(r31)
	  lfs       f2, 0x8(r31)
	  fmuls     f0, f0, f3
	  fmuls     f1, f1, f3
	  fmuls     f2, f2, f3
	  stfs      f0, 0x1E4(r30)
	  stfs      f1, 0x1E8(r30)
	  stfs      f2, 0x1EC(r30)
	  b         .loc_0x1E4

	.loc_0x118:
	  bl        0xCF0
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x134
	  lwz       r3, -0x6D0C(r13)
	  lwz       r3, 0x6C(r3)
	  lfs       f3, 0x11A0(r3)
	  b         .loc_0x1A4

	.loc_0x134:
	  lwz       r3, -0x6D0C(r13)
	  lbz       r0, 0x2B9(r30)
	  lwz       r3, 0x6C(r3)
	  lfs       f1, -0x5F20(r2)
	  cmplwi    r0, 0x2
	  lfs       f0, 0x2C8(r3)
	  fmuls     f2, f1, f0
	  bne-      .loc_0x15C
	  lfs       f2, 0x2F0(r3)
	  b         .loc_0x168

	.loc_0x15C:
	  cmplwi    r0, 0x1
	  bne-      .loc_0x168
	  lfs       f2, 0x318(r3)

	.loc_0x168:
	  lfs       f1, -0x5F20(r2)
	  lfs       f0, 0x2A0(r3)
	  lbz       r0, 0x2B8(r30)
	  fmuls     f1, f1, f0
	  cmpwi     r0, 0x4
	  fsubs     f0, f2, f1
	  fmadds    f3, f30, f0, f1
	  bne-      .loc_0x194
	  lfs       f0, 0x1010(r3)
	  fmuls     f3, f3, f0
	  b         .loc_0x1A4

	.loc_0x194:
	  cmpwi     r0, 0x3
	  bne-      .loc_0x1A4
	  lfs       f0, 0x1038(r3)
	  fmuls     f3, f3, f0

	.loc_0x1A4:
	  lwz       r3, -0x6514(r13)
	  lfs       f1, 0x54(r3)
	  fmuls     f0, f3, f1
	  fcmpo     cr0, f0, f31
	  bge-      .loc_0x1BC
	  b         .loc_0x1C0

	.loc_0x1BC:
	  fdivs     f3, f31, f1

	.loc_0x1C0:
	  lfs       f0, 0x0(r31)
	  lfs       f1, 0x4(r31)
	  fmuls     f0, f0, f3
	  lfs       f2, 0x8(r31)
	  fmuls     f1, f1, f3
	  fmuls     f2, f2, f3
	  stfs      f0, 0x1E4(r30)
	  stfs      f1, 0x1E8(r30)
	  stfs      f2, 0x1EC(r30)

	.loc_0x1E4:
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
 * Address:	801493E4
 * Size:	000040
 */
void Game::Piki::isPikmin(void)
{
	/*
	.loc_0x0:
	  lbz       r0, -0x7B93(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0x20
	  lwz       r0, 0x17C(r3)
	  rlwinm.   r0,r0,0,23,23
	  beq-      .loc_0x20
	  li        r3, 0
	  blr

	.loc_0x20:
	  lwz       r3, 0x294(r3)
	  lwz       r0, 0x8(r3)
	  cmpwi     r0, 0xB
	  bne-      .loc_0x38
	  li        r3, 0
	  blr

	.loc_0x38:
	  li        r3, 0x1
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80149424
 * Size:	00004C
 */
void Game::Piki::isThrowable(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x290(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x38
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x54(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x38
	  li        r3, 0x1
	  b         .loc_0x3C

	.loc_0x38:
	  li        r3, 0

	.loc_0x3C:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80149470
 * Size:	000008
 */
void Game::PikiState::throwable(void)
{
	/*
	.loc_0x0:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80149478
 * Size:	000040
 */
void Game::Piki::getDownfloorMass(void)
{
	/*
	.loc_0x0:
	  lwz       r4, 0x290(r3)
	  cmplwi    r4, 0
	  beq-      .loc_0x14
	  lwz       r0, 0x4(r4)
	  b         .loc_0x18

	.loc_0x14:
	  li        r0, -0x1

	.loc_0x18:
	  cmpwi     r0, 0x4
	  bne-      .loc_0x28
	  li        r3, 0
	  blr

	.loc_0x28:
	  lbz       r0, 0x2B8(r3)
	  li        r3, 0x1
	  cmpwi     r0, 0x3
	  bnelr-
	  li        r3, 0xA
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801494B8
 * Size:	000014
 */
void Game::Piki::gasInvicible(void)
{
	/*
	.loc_0x0:
	  lbz       r3, 0x2A6(r3)
	  neg       r0, r3
	  or        r0, r0, r3
	  rlwinm    r3,r0,1,31,31
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801494CC
 * Size:	000008
 */
void Game::Piki::setGasInvincible((unsigned char))
{
	/*
	.loc_0x0:
	  stb       r4, 0x2A6(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801494D4
 * Size:	000018
 */
void Game::Piki::updateGasInvincible(void)
{
	/*
	.loc_0x0:
	  lbz       r4, 0x2A6(r3)
	  cmplwi    r4, 0
	  beqlr-
	  subi      r0, r4, 0x1
	  stb       r0, 0x2A6(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801494EC
 * Size:	0000F8
 */
void Game::Piki::getAttackDamage(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        0xAE0
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x30
	  lwz       r3, -0x6D0C(r13)
	  lwz       r3, 0x6C(r3)
	  lfs       f1, 0x1178(r3)
	  b         .loc_0xE4

	.loc_0x30:
	  lwz       r3, -0x6C18(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x58
	  lwz       r0, 0x44(r3)
	  cmpwi     r0, 0x1
	  bne-      .loc_0x58
	  lwz       r3, -0x6D0C(r13)
	  lwz       r3, 0x6C(r3)
	  lfs       f1, 0x408(r3)
	  b         .loc_0xE4

	.loc_0x58:
	  lbz       r0, 0x2B8(r31)
	  cmpwi     r0, 0x2
	  beq-      .loc_0xA8
	  bge-      .loc_0x78
	  cmpwi     r0, 0
	  beq-      .loc_0x98
	  bge-      .loc_0x88
	  b         .loc_0xD8

	.loc_0x78:
	  cmpwi     r0, 0x4
	  beq-      .loc_0xC8
	  bge-      .loc_0xD8
	  b         .loc_0xB8

	.loc_0x88:
	  lwz       r3, -0x6D0C(r13)
	  lwz       r3, 0x6C(r3)
	  lfs       f1, 0x408(r3)
	  b         .loc_0xE4

	.loc_0x98:
	  lwz       r3, -0x6D0C(r13)
	  lwz       r3, 0x6C(r3)
	  lfs       f1, 0x3E0(r3)
	  b         .loc_0xE4

	.loc_0xA8:
	  lwz       r3, -0x6D0C(r13)
	  lwz       r3, 0x6C(r3)
	  lfs       f1, 0x430(r3)
	  b         .loc_0xE4

	.loc_0xB8:
	  lwz       r3, -0x6D0C(r13)
	  lwz       r3, 0x6C(r3)
	  lfs       f1, 0x458(r3)
	  b         .loc_0xE4

	.loc_0xC8:
	  lwz       r3, -0x6D0C(r13)
	  lwz       r3, 0x6C(r3)
	  lfs       f1, 0x480(r3)
	  b         .loc_0xE4

	.loc_0xD8:
	  lwz       r3, -0x6D0C(r13)
	  lwz       r3, 0x6C(r3)
	  lfs       f1, 0x3E0(r3)

	.loc_0xE4:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801495E4
 * Size:	0000C0
 */
void Game::Piki::getThrowHeight(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r0, 0x2C4(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x28
	  lfs       f1, -0x5F44(r2)
	  b         .loc_0xAC

	.loc_0x28:
	  bne-      .loc_0x48
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  subi      r3, r3, 0x3750
	  li        r4, 0x57B
	  subi      r5, r5, 0x36F4
	  crclr     6, 0x6
	  bl        -0x11EFE8

	.loc_0x48:
	  lbz       r0, 0x2B8(r31)
	  cmpwi     r0, 0x3
	  beq-      .loc_0x80
	  bge-      .loc_0x64
	  cmpwi     r0, 0x2
	  bge-      .loc_0x70
	  b         .loc_0xA0

	.loc_0x64:
	  cmpwi     r0, 0x5
	  bge-      .loc_0xA0
	  b         .loc_0x90

	.loc_0x70:
	  lwz       r3, 0x2C4(r31)
	  lwz       r3, 0xC0(r3)
	  lfs       f1, 0x5C0(r3)
	  b         .loc_0xAC

	.loc_0x80:
	  lwz       r3, 0x2C4(r31)
	  lwz       r3, 0xC0(r3)
	  lfs       f1, 0x5E8(r3)
	  b         .loc_0xAC

	.loc_0x90:
	  lwz       r3, 0x2C4(r31)
	  lwz       r3, 0xC0(r3)
	  lfs       f1, 0x610(r3)
	  b         .loc_0xAC

	.loc_0xA0:
	  lwz       r3, 0x2C4(r31)
	  lwz       r3, 0xC0(r3)
	  lfs       f1, 0x598(r3)

	.loc_0xAC:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801496A4
 * Size:	0000C4
 */
void Game::Piki::getPelletCarryPower(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stfd      f31, 0x10(r1)
	  psq_st    f31,0x18(r1),0,0
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lbz       r0, 0x2B8(r3)
	  cmpwi     r0, 0x4
	  beq-      .loc_0x38
	  bge-      .loc_0x58
	  cmpwi     r0, 0x3
	  bge-      .loc_0x48
	  b         .loc_0x58

	.loc_0x38:
	  lwz       r3, -0x6D0C(r13)
	  lwz       r3, 0x6C(r3)
	  lfs       f31, 0x1088(r3)
	  b         .loc_0x5C

	.loc_0x48:
	  lwz       r3, -0x6D0C(r13)
	  lwz       r3, 0x6C(r3)
	  lfs       f31, 0x1060(r3)
	  b         .loc_0x5C

	.loc_0x58:
	  lfs       f31, -0x5F20(r2)

	.loc_0x5C:
	  mr        r3, r31
	  bl        0x8DC
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x78
	  lbz       r0, 0x2B9(r31)
	  cmpwi     r0, 0x2
	  bne-      .loc_0x8C

	.loc_0x78:
	  lwz       r3, -0x6D0C(r13)
	  lwz       r3, 0x6C(r3)
	  lfs       f0, 0x10D8(r3)
	  fadds     f31, f31, f0
	  b         .loc_0xA4

	.loc_0x8C:
	  cmpwi     r0, 0x1
	  bne-      .loc_0xA4
	  lwz       r3, -0x6D0C(r13)
	  lwz       r3, 0x6C(r3)
	  lfs       f0, 0x10B0(r3)
	  fadds     f31, f31, f0

	.loc_0xA4:
	  fmr       f1, f31
	  psq_l     f31,0x18(r1),0,0
	  lwz       r0, 0x24(r1)
	  lfd       f31, 0x10(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80149768
 * Size:	000004
 */
void Game::Piki::onStickStartSelf((Game::Creature*))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8014976C
 * Size:	0000E8
 */
void Game::Piki::onStickEndSelf((Game::Creature*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x60(r1)
	  mflr      r0
	  stw       r0, 0x64(r1)
	  stw       r31, 0x5C(r1)
	  mr        r31, r3
	  addi      r3, r1, 0x8
	  lwz       r12, 0x0(r31)
	  mr        r4, r31
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, -0x6CF8(r13)
	  lfs       f6, 0x8(r1)
	  lfs       f5, 0xC(r1)
	  cmplwi    r3, 0
	  lfs       f4, 0x10(r1)
	  stfs      f6, 0x14(r1)
	  stfs      f5, 0x18(r1)
	  stfs      f4, 0x1C(r1)
	  beq-      .loc_0xD4
	  li        r0, 0x1
	  li        r5, 0
	  lfs       f1, -0x5F44(r2)
	  addi      r4, r1, 0x20
	  stb       r0, 0x2C(r1)
	  lfs       f3, -0x5F1C(r2)
	  lfs       f2, -0x5F18(r2)
	  lfs       f0, -0x5F20(r2)
	  stw       r5, 0x34(r1)
	  stfs      f3, 0x38(r1)
	  stfs      f2, 0x3C(r1)
	  stw       r5, 0x30(r1)
	  stfs      f1, 0x40(r1)
	  stfs      f0, 0x44(r1)
	  stfs      f1, 0x48(r1)
	  stb       r5, 0x2D(r1)
	  stfs      f6, 0x20(r1)
	  stfs      f5, 0x24(r1)
	  stfs      f4, 0x28(r1)
	  stb       r0, 0x2C(r1)
	  lwz       r12, 0x4(r3)
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, 0x18(r1)
	  lfs       f1, 0x38(r1)
	  fcmpo     cr0, f0, f1
	  bge-      .loc_0xD4
	  stfs      f1, 0x18(r1)
	  mr        r3, r31
	  addi      r4, r1, 0x14
	  li        r5, 0
	  bl        -0xE694

	.loc_0xD4:
	  lwz       r0, 0x64(r1)
	  lwz       r31, 0x5C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x60
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80149854
 * Size:	000088
 */
void Game::Piki::stimulate((Game::Interaction&))
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
	  lwz       r0, 0xBC(r3)
	  rlwinm.   r0,r0,0,30,30
	  bne-      .loc_0x30
	  li        r3, 0
	  b         .loc_0x70

	.loc_0x30:
	  mr        r3, r31
	  mr        r4, r30
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x6C
	  mr        r3, r31
	  mr        r4, r30
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x70

	.loc_0x6C:
	  li        r3, 0

	.loc_0x70:
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
 * Address:	801498DC
 * Size:	0000A4
 */
void Game::Piki::bounceCallback((Sys::Triangle*))
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
	  lwz       r3, 0x290(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x40
	  lwz       r12, 0x0(r3)
	  mr        r4, r30
	  mr        r5, r31
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl

	.loc_0x40:
	  lwz       r3, 0x290(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x48(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x8C
	  lwz       r3, 0x294(r30)
	  bl        0x4D3C4
	  cmplwi    r3, 0
	  beq-      .loc_0x8C
	  lwz       r3, 0x294(r30)
	  bl        0x4D3B4
	  lwz       r12, 0x0(r3)
	  mr        r4, r30
	  mr        r5, r31
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl

	.loc_0x8C:
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
 * Address:	80149980
 * Size:	000004
 */
void PikiAI::Action::bounceCallback((Game::Piki*, Sys::Triangle*))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80149984
 * Size:	000008
 */
void Game::PikiState::aiActive(void)
{
	/*
	.loc_0x0:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8014998C
 * Size:	000004
 */
void Game::PikiState::bounceCallback((Game::Piki*, Sys::Triangle*))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80149990
 * Size:	0000A0
 */
void wallCallback__Q24Game4PikiFR10Vector3<float>(void)
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
	  lwz       r3, 0x290(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x40
	  lwz       r12, 0x0(r3)
	  mr        r4, r30
	  mr        r5, r31
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x40:
	  lwz       r3, 0x290(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x48(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x88
	  lwz       r3, 0x294(r30)
	  bl        0x4D310
	  cmplwi    r3, 0
	  beq-      .loc_0x88
	  lwz       r3, 0x294(r30)
	  bl        0x4D300
	  lwz       r12, 0x0(r3)
	  mr        r4, r31
	  lwz       r12, 0x34(r12)
	  mtctr     r12
	  bctrl

	.loc_0x88:
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
 * Address:	80149A30
 * Size:	000004
 */
void wallCallback__Q26PikiAI6ActionFR10Vector3<float>(void)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80149A34
 * Size:	000004
 */
void wallCallback__Q24Game9PikiStateFPQ24Game4PikiR10Vector3<float>(void)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80149A38
 * Size:	0000AC
 */
void Game::Piki::collisionCallback((Game::CollEvent&))
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
	  lwz       r3, 0x290(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x40
	  lwz       r12, 0x0(r3)
	  mr        r4, r30
	  mr        r5, r31
	  lwz       r12, 0x28(r12)
	  mtctr     r12
	  bctrl

	.loc_0x40:
	  lwz       r3, 0x290(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0x94
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x48(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x94
	  lwz       r3, 0x294(r30)
	  bl        0x4D260
	  cmplwi    r3, 0
	  beq-      .loc_0x94
	  lwz       r3, 0x294(r30)
	  bl        0x4D250
	  lwz       r12, 0x0(r3)
	  mr        r4, r30
	  mr        r5, r31
	  lwz       r12, 0x28(r12)
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
 * Address:	80149AE4
 * Size:	000004
 */
void PikiAI::Action::collisionCallback((Game::Piki*, Game::CollEvent&))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80149AE8
 * Size:	000004
 */
void Game::PikiState::collisionCallback((Game::Piki*, Game::CollEvent&))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80149AEC
 * Size:	000178
 */
void Game::Piki::platCallback((Game::PlatEvent&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stw       r31, 0x2C(r1)
	  mr        r31, r3
	  stw       r30, 0x28(r1)
	  mr        r30, r4
	  lwz       r3, 0x290(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x40
	  lwz       r12, 0x0(r3)
	  mr        r4, r31
	  mr        r5, r30
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x40:
	  lwz       r3, 0x290(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x48(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x8C
	  lwz       r3, 0x294(r31)
	  bl        0x4D1B4
	  cmplwi    r3, 0
	  beq-      .loc_0x8C
	  lwz       r3, 0x294(r31)
	  bl        0x4D1A4
	  lwz       r12, 0x0(r3)
	  mr        r4, r31
	  mr        r5, r30
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x8C:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x160
	  lwz       r3, 0x290(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x58(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x160
	  lwz       r6, 0x0(r30)
	  lis       r3, 0x656C
	  addi      r4, r3, 0x6563
	  li        r5, 0x2A
	  addi      r3, r6, 0xF8
	  bl        0x2C9738
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x160
	  lbz       r0, 0x2B8(r31)
	  cmpwi     r0, 0x2
	  beq-      .loc_0x160
	  li        r0, -0x1
	  lis       r3, 0x804B
	  sth       r0, 0x2A4(r31)
	  subi      r0, r3, 0x5D00
	  lis       r5, 0x804B
	  lis       r3, 0x8051
	  stw       r0, 0x8(r1)
	  addi      r4, r3, 0x41E4
	  addi      r5, r5, 0x4974
	  lfs       f3, -0x5F44(r2)
	  lfs       f2, 0x0(r4)
	  lis       r3, 0x804B
	  lfs       f1, 0x4(r4)
	  addi      r0, r3, 0x4908
	  stw       r5, 0x8(r1)
	  mr        r3, r31
	  lfs       f0, 0x8(r4)
	  addi      r4, r1, 0x8
	  stw       r31, 0xC(r1)
	  stfs      f3, 0x10(r1)
	  stfs      f2, 0x14(r1)
	  stfs      f1, 0x18(r1)
	  stfs      f0, 0x1C(r1)
	  stw       r0, 0x8(r1)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x1A4(r12)
	  mtctr     r12
	  bctrl

	.loc_0x160:
	  lwz       r0, 0x34(r1)
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80149C64
 * Size:	000004
 */
void PikiAI::Action::platCallback((Game::Piki*, Game::PlatEvent&))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80149C68
 * Size:	000004
 */
void Game::PikiState::platCallback((Game::Piki*, Game::PlatEvent&))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80149C6C
 * Size:	000050
 */
void Game::Piki::ignoreAtari((Game::Creature*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r6, r3
	  mr        r5, r4
	  stw       r0, 0x14(r1)
	  li        r0, 0
	  lwz       r3, 0x290(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x3C
	  lwz       r12, 0x0(r3)
	  mr        r4, r6
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r0, r3

	.loc_0x3C:
	  mr        r3, r0
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80149CBC
 * Size:	000008
 */
void Game::PikiState::ignoreAtari((Game::Piki*, Game::Creature*))
{
	/*
	.loc_0x0:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80149CC4
 * Size:	000060
 */
void Game::Piki::setFreeLightEffect((bool))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  rlwinm.   r0,r4,0,24,31
	  beq-      .loc_0x3C
	  lwz       r3, 0x258(r3)
	  lwz       r0, 0x0(r3)
	  ori       r0, r0, 0x1
	  stw       r0, 0x0(r3)
	  lwz       r0, 0x0(r3)
	  rlwinm.   r0,r0,0,30,30
	  bne-      .loc_0x50
	  lwz       r4, 0xC(r3)
	  bl        0x26EB30
	  b         .loc_0x50

	.loc_0x3C:
	  lwz       r3, 0x258(r3)
	  lwz       r0, 0x0(r3)
	  rlwinm    r0,r0,0,0,30
	  stw       r0, 0x0(r3)
	  bl        0x26EB7C

	.loc_0x50:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80149D24
 * Size:	000084
 */
void Game::Piki::setDopeEffect((bool))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  rlwinm.   r0,r4,0,24,31
	  stw       r31, 0xC(r1)
	  beq-      .loc_0x40
	  lwz       r31, 0x258(r3)
	  lwz       r0, 0x0(r31)
	  mr        r3, r31
	  ori       r0, r0, 0x2
	  stw       r0, 0x0(r31)
	  lwz       r4, 0xC(r31)
	  bl        0x26EB5C
	  mr        r3, r31
	  bl        0x26EB30
	  b         .loc_0x70

	.loc_0x40:
	  lwz       r31, 0x258(r3)
	  lwz       r0, 0x0(r31)
	  mr        r3, r31
	  rlwinm    r0,r0,0,31,29
	  stw       r0, 0x0(r31)
	  bl        0x26EB98
	  lwz       r0, 0x0(r31)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0x70
	  lwz       r4, 0xC(r31)
	  mr        r3, r31
	  bl        0x26EA98

	.loc_0x70:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80149DA8
 * Size:	000088
 */
void Game::Piki::clearDope(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  lha       r0, 0x284(r3)
	  cmpwi     r0, -0x1
	  beq-      .loc_0x3C
	  li        r0, -0x1
	  sth       r0, 0x284(r3)
	  lwz       r5, -0x6D0C(r13)
	  lwz       r4, 0x30(r5)
	  cmpwi     r4, 0
	  ble-      .loc_0x3C
	  subi      r0, r4, 0x1
	  stw       r0, 0x30(r5)

	.loc_0x3C:
	  lfs       f0, -0x5F44(r2)
	  stfs      f0, 0x288(r3)
	  lwz       r31, 0x258(r3)
	  lwz       r0, 0x0(r31)
	  mr        r3, r31
	  rlwinm    r0,r0,0,31,29
	  stw       r0, 0x0(r31)
	  bl        0x26EB10
	  lwz       r0, 0x0(r31)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0x74
	  lwz       r4, 0xC(r31)
	  mr        r3, r31
	  bl        0x26EA10

	.loc_0x74:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80149E30
 * Size:	000014
 */
void Game::Piki::extendDopeTime(void)
{
	/*
	.loc_0x0:
	  lwz       r4, -0x6D0C(r13)
	  lwz       r4, 0x6C(r4)
	  lfs       f0, 0x1150(r4)
	  stfs      f0, 0x288(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80149E44
 * Size:	00019C
 */
void Game::Piki::startDope((int))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  mflr      r0
	  stw       r0, 0x54(r1)
	  stw       r31, 0x4C(r1)
	  mr        r31, r3
	  stw       r30, 0x48(r1)
	  lha       r0, 0x284(r3)
	  cmpwi     r0, -0x1
	  bne-      .loc_0x180
	  lwz       r5, -0x6D0C(r13)
	  lwz       r3, 0x30(r5)
	  addi      r0, r3, 0x1
	  stw       r0, 0x30(r5)
	  sth       r4, 0x284(r31)
	  lwz       r3, -0x6D0C(r13)
	  lwz       r3, 0x6C(r3)
	  lfs       f0, 0x1150(r3)
	  stfs      f0, 0x288(r31)
	  lwz       r30, 0x258(r31)
	  lwz       r0, 0x0(r30)
	  mr        r3, r30
	  ori       r0, r0, 0x2
	  stw       r0, 0x0(r30)
	  lwz       r4, 0xC(r30)
	  bl        0x26EA0C
	  mr        r3, r30
	  bl        0x26E9E0
	  lwz       r3, 0x250(r31)
	  li        r4, 0x2851
	  li        r5, 0
	  li        r6, 0x5A
	  li        r7, 0
	  bl        0x318924
	  lwz       r3, 0x250(r31)
	  li        r4, 0x2855
	  li        r5, 0
	  li        r6, 0x5A
	  li        r7, 0
	  bl        0x31890C
	  lwz       r3, -0x6C18(r13)
	  lbz       r0, 0x3C(r3)
	  rlwinm.   r0,r0,0,26,26
	  beq-      .loc_0x178
	  lwz       r3, -0x6B70(r13)
	  li        r4, 0xA
	  bl        0x9D4E8
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x178
	  lwz       r0, -0x64AC(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0x16C
	  lfs       f0, -0x5F44(r2)
	  lis       r3, 0x8048
	  li        r0, 0
	  mr        r4, r31
	  subi      r5, r3, 0x36E8
	  stw       r0, 0x18(r1)
	  addi      r3, r1, 0x8
	  stw       r5, 0x14(r1)
	  stw       r0, 0x20(r1)
	  stfs      f0, 0x2C(r1)
	  stfs      f0, 0x30(r1)
	  stfs      f0, 0x34(r1)
	  stfs      f0, 0x38(r1)
	  stw       r0, 0x3C(r1)
	  stw       r0, 0x24(r1)
	  stw       r0, 0x1C(r1)
	  stw       r0, 0x40(r1)
	  stw       r0, 0x28(r1)
	  stw       r0, 0x44(r1)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x8(r1)
	  mr        r3, r31
	  lfs       f1, 0xC(r1)
	  lfs       f0, 0x10(r1)
	  stfs      f2, 0x2C(r1)
	  stfs      f1, 0x30(r1)
	  stfs      f0, 0x34(r1)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  stfs      f1, 0x38(r1)
	  addi      r4, r1, 0x14
	  lwz       r3, -0x64AC(r13)
	  stw       r31, 0x194(r3)
	  lwz       r3, -0x64AC(r13)
	  bl        0x2E2A24

	.loc_0x16C:
	  lwz       r3, -0x6B70(r13)
	  li        r4, 0xA
	  bl        0x9D3EC

	.loc_0x178:
	  li        r3, 0x1
	  b         .loc_0x184

	.loc_0x180:
	  li        r3, 0

	.loc_0x184:
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
 * Address:	80149FE0
 * Size:	000018
 */
void Game::Piki::doped(void)
{
	/*
	.loc_0x0:
	  lha       r4, 0x284(r3)
	  subfic    r3, r4, -0x1
	  addi      r0, r4, 0x1
	  or        r0, r3, r0
	  rlwinm    r3,r0,1,31,31
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000E0
 */
void Game::Piki::updateDope(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80149FF8
 * Size:	000040
 */
void Game::Piki::initColor(void)
{
	/*
	.loc_0x0:
	  lfs       f0, -0x5F20(r2)
	  lis       r4, 0x8051
	  addi      r0, r4, 0x228C
	  stfs      f0, 0x2B4(r3)
	  lbz       r4, 0x2B8(r3)
	  rlwinm    r4,r4,2,0,29
	  add       r4, r0, r4
	  lbz       r0, 0x0(r4)
	  stb       r0, 0x2A7(r3)
	  lbz       r0, 0x1(r4)
	  stb       r0, 0x2A8(r3)
	  lbz       r0, 0x2(r4)
	  stb       r0, 0x2A9(r3)
	  lbz       r0, 0x3(r4)
	  stb       r0, 0x2AA(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000194
 */
void Game::Piki::updateColor(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8014A038
 * Size:	000100
 */
void Game::Piki::setPastel((bool))
{
	/*
	.loc_0x0:
	  lfs       f0, -0x5F44(r2)
	  rlwinm.   r0,r4,0,24,31
	  lis       r4, 0x8051
	  stfs      f0, 0x2B4(r3)
	  addi      r0, r4, 0x228C
	  lbz       r4, 0x2B8(r3)
	  rlwinm    r4,r4,2,0,29
	  add       r5, r0, r4
	  bne-      .loc_0x68
	  lbz       r0, 0x0(r5)
	  stb       r0, 0x2AF(r3)
	  lbz       r0, 0x1(r5)
	  stb       r0, 0x2B0(r3)
	  lbz       r0, 0x2(r5)
	  stb       r0, 0x2B1(r3)
	  lbz       r0, 0x3(r5)
	  stb       r0, 0x2B2(r3)
	  lbz       r0, 0x2A7(r3)
	  stb       r0, 0x2AB(r3)
	  lbz       r0, 0x2A8(r3)
	  stb       r0, 0x2AC(r3)
	  lbz       r0, 0x2A9(r3)
	  stb       r0, 0x2AD(r3)
	  lbz       r0, 0x2AA(r3)
	  stb       r0, 0x2AE(r3)
	  blr

	.loc_0x68:
	  lbz       r4, 0x0(r5)
	  li        r0, 0xFF
	  stb       r4, 0x2AF(r3)
	  lbz       r4, 0x1(r5)
	  stb       r4, 0x2B0(r3)
	  lbz       r4, 0x2(r5)
	  stb       r4, 0x2B1(r3)
	  lbz       r4, 0x3(r5)
	  stb       r4, 0x2B2(r3)
	  lbz       r4, 0x0(r5)
	  addi      r4, r4, 0xA0
	  cmpwi     r4, 0xFF
	  bge-      .loc_0xA0
	  mr        r0, r4

	.loc_0xA0:
	  stb       r0, 0x2AF(r3)
	  li        r0, 0xFF
	  lbz       r4, 0x1(r5)
	  addi      r4, r4, 0xA0
	  cmpwi     r4, 0xFF
	  bge-      .loc_0xBC
	  mr        r0, r4

	.loc_0xBC:
	  stb       r0, 0x2B0(r3)
	  li        r0, 0xFF
	  lbz       r4, 0x2(r5)
	  addi      r4, r4, 0xA0
	  cmpwi     r4, 0xFF
	  bge-      .loc_0xD8
	  mr        r0, r4

	.loc_0xD8:
	  stb       r0, 0x2B1(r3)
	  lbz       r0, 0x2A7(r3)
	  stb       r0, 0x2AB(r3)
	  lbz       r0, 0x2A8(r3)
	  stb       r0, 0x2AC(r3)
	  lbz       r0, 0x2A9(r3)
	  stb       r0, 0x2AD(r3)
	  lbz       r0, 0x2AA(r3)
	  stb       r0, 0x2AE(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8014A138
 * Size:	0000D0
 */
void Game::Piki::getShadowParam((Game::ShadowParam&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r4
	  lwz       r4, 0x290(r3)
	  cmplwi    r4, 0
	  beq-      .loc_0x28
	  lwz       r0, 0x4(r4)
	  b         .loc_0x2C

	.loc_0x28:
	  li        r0, -0x1

	.loc_0x2C:
	  cmpwi     r0, 0xC
	  bne-      .loc_0x58
	  lwz       r3, 0x114(r3)
	  lwz       r3, 0x0(r3)
	  lfs       f0, 0x4C(r3)
	  stfs      f0, 0x0(r31)
	  lfs       f0, 0x50(r3)
	  stfs      f0, 0x4(r31)
	  lfs       f0, 0x54(r3)
	  stfs      f0, 0x8(r31)
	  b         .loc_0x88

	.loc_0x58:
	  mr        r4, r3
	  addi      r3, r1, 0x8
	  lwz       r12, 0x0(r4)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, 0x8(r1)
	  stfs      f0, 0x0(r31)
	  lfs       f0, 0xC(r1)
	  stfs      f0, 0x4(r31)
	  lfs       f0, 0x10(r1)
	  stfs      f0, 0x8(r31)

	.loc_0x88:
	  lfs       f1, 0x4(r31)
	  lfs       f0, -0x5F14(r2)
	  lfs       f3, -0x5F10(r2)
	  fadds     f4, f1, f0
	  lfs       f2, -0x5F0C(r2)
	  lfs       f1, -0x5F44(r2)
	  lfs       f0, -0x5F20(r2)
	  stfs      f4, 0x4(r31)
	  stfs      f3, 0x18(r31)
	  stfs      f2, 0x1C(r31)
	  stfs      f1, 0xC(r31)
	  stfs      f0, 0x10(r31)
	  stfs      f1, 0x14(r31)
	  lwz       r31, 0x1C(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8014A208
 * Size:	000080
 */
void Game::Piki::isMyPikmin((Game::Creature*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  mr        r30, r4
	  lwz       r3, 0x294(r3)
	  lwz       r0, 0x8(r3)
	  cmpwi     r0, 0xB
	  bne-      .loc_0x64
	  bl        0x4CAD0
	  mr.       r31, r3
	  bne-      .loc_0x50
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  subi      r3, r3, 0x3750
	  li        r4, 0x6B6
	  subi      r5, r5, 0x36F4
	  crclr     6, 0x6
	  bl        -0x11FC14

	.loc_0x50:
	  lwz       r0, 0x10(r31)
	  sub       r0, r30, r0
	  cntlzw    r0, r0
	  rlwinm    r3,r0,27,5,31
	  b         .loc_0x68

	.loc_0x64:
	  li        r3, 0

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
 * Address:	8014A288
 * Size:	000018
 */
void Game::Piki::isTekiFollowAI(void)
{
	/*
	.loc_0x0:
	  lwz       r3, 0x294(r3)
	  lwz       r0, 0x8(r3)
	  subfic    r0, r0, 0xB
	  cntlzw    r0, r0
	  rlwinm    r3,r0,27,24,31
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8014A2A0
 * Size:	0000EC
 */
void Game::Piki::doColorChange(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stw       r31, 0x2C(r1)
	  stw       r30, 0x28(r1)
	  mr        r30, r3
	  lwz       r31, 0x278(r3)
	  lwz       r3, 0x268(r3)
	  bl        0x2DF5E0
	  lbz       r0, 0xD8(r30)
	  rlwinm.   r0,r0,0,29,29
	  bne-      .loc_0x7C
	  mr        r4, r30
	  addi      r3, r1, 0x14
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, 0x14(r1)
	  stfs      f0, 0x25C(r30)
	  lfs       f0, 0x18(r1)
	  stfs      f0, 0x260(r30)
	  lfs       f0, 0x1C(r1)
	  stfs      f0, 0x264(r30)
	  lfs       f0, 0x25C(r30)
	  stfs      f0, 0x26C(r30)
	  lfs       f0, 0x260(r30)
	  stfs      f0, 0x270(r30)
	  lfs       f0, 0x264(r30)
	  stfs      f0, 0x274(r30)
	  b         .loc_0xD4

	.loc_0x7C:
	  lfs       f1, -0x5F08(r2)
	  addi      r4, r30, 0x25C
	  lfs       f0, -0x5F44(r2)
	  addi      r5, r1, 0x8
	  stfs      f1, 0x25C(r30)
	  stfs      f0, 0x260(r30)
	  stfs      f0, 0x264(r30)
	  bl        -0x5F760
	  lfs       f1, 0xC(r1)
	  mr        r3, r31
	  lfs       f2, 0x10(r1)
	  lfs       f0, 0x8(r1)
	  stfs      f0, 0x25C(r30)
	  stfs      f1, 0x260(r30)
	  stfs      f2, 0x264(r30)
	  bl        0x2DF548
	  lfs       f0, 0xC(r3)
	  stfs      f0, 0x26C(r30)
	  lfs       f0, 0x1C(r3)
	  stfs      f0, 0x270(r30)
	  lfs       f0, 0x2C(r3)
	  stfs      f0, 0x274(r30)

	.loc_0xD4:
	  lwz       r0, 0x34(r1)
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8014A38C
 * Size:	00002C
 */
void Game::Piki::doDebugDL(void)
{
	/*
	.loc_0x0:
	  lwz       r3, 0x174(r3)
	  li        r5, 0
	  lwz       r3, 0x8(r3)
	  lwz       r4, 0x4(r3)
	  b         .loc_0x18

	.loc_0x14:
	  addi      r5, r5, 0x1

	.loc_0x18:
	  lhz       r0, 0x7C(r4)
	  rlwinm    r3,r5,0,16,31
	  cmplw     r3, r0
	  blt+      .loc_0x14
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8014A3B8
 * Size:	0000F8
 */
void Game::Piki::startMotion((int, int, SysShape::MotionListener*,
                              SysShape::MotionListener*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stmw      r27, 0x1C(r1)
	  mr        r28, r4
	  cmpwi     r28, 0x33
	  mr        r27, r3
	  mr        r29, r5
	  mr        r30, r6
	  mr        r31, r7
	  beq-      .loc_0x98
	  bge-      .loc_0x3C
	  cmpwi     r28, 0x32
	  bge-      .loc_0x48
	  b         .loc_0xCC

	.loc_0x3C:
	  cmpwi     r28, 0x35
	  bge-      .loc_0xCC
	  b         .loc_0xB4

	.loc_0x48:
	  bl        -0x80E60
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0xC(r1)
	  lfd       f3, -0x5EF8(r2)
	  stw       r0, 0x8(r1)
	  lfs       f1, -0x5F04(r2)
	  lfd       f2, 0x8(r1)
	  lfs       f0, -0x5F00(r2)
	  fsubs     f2, f2, f3
	  fdivs     f1, f2, f1
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0xCC
	  lwz       r3, 0x250(r27)
	  li        r4, 0x2839
	  li        r5, 0
	  li        r6, 0x5A
	  li        r7, 0
	  bl        0x3183A0
	  b         .loc_0xCC

	.loc_0x98:
	  lwz       r3, 0x250(r27)
	  li        r4, 0x283A
	  li        r5, 0
	  li        r6, 0x5A
	  li        r7, 0
	  bl        0x318384
	  b         .loc_0xCC

	.loc_0xB4:
	  lwz       r3, 0x250(r27)
	  li        r4, 0x283B
	  li        r5, 0
	  li        r6, 0x5A
	  li        r7, 0
	  bl        0x318368

	.loc_0xCC:
	  mr        r3, r27
	  mr        r4, r28
	  mr        r5, r29
	  mr        r6, r30
	  mr        r7, r31
	  bl        -0xD4D8
	  lmw       r27, 0x1C(r1)
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8014A4B0
 * Size:	0000E4
 */
void Game::Piki::doAnimation(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0xBC40
	  lha       r0, 0x284(r31)
	  cmpwi     r0, -0x1
	  beq-      .loc_0xD0
	  lfs       f2, 0x288(r31)
	  lfs       f1, -0x5F44(r2)
	  fcmpo     cr0, f2, f1
	  ble-      .loc_0xD0
	  lwz       r3, -0x6514(r13)
	  lfs       f0, 0x54(r3)
	  fsubs     f0, f2, f0
	  stfs      f0, 0x288(r31)
	  lfs       f0, 0x288(r31)
	  fcmpo     cr0, f0, f1
	  cror      2, 0, 0x2
	  bne-      .loc_0xD0
	  lwz       r3, 0x250(r31)
	  li        r4, 0x2853
	  li        r5, 0
	  li        r6, 0x5A
	  li        r7, 0
	  bl        0x3182D0
	  lha       r0, 0x284(r31)
	  cmpwi     r0, -0x1
	  beq-      .loc_0x98
	  li        r0, -0x1
	  sth       r0, 0x284(r31)
	  lwz       r4, -0x6D0C(r13)
	  lwz       r3, 0x30(r4)
	  cmpwi     r3, 0
	  ble-      .loc_0x98
	  subi      r0, r3, 0x1
	  stw       r0, 0x30(r4)

	.loc_0x98:
	  lfs       f0, -0x5F44(r2)
	  stfs      f0, 0x288(r31)
	  lwz       r31, 0x258(r31)
	  lwz       r0, 0x0(r31)
	  mr        r3, r31
	  rlwinm    r0,r0,0,31,29
	  stw       r0, 0x0(r31)
	  bl        0x26E3AC
	  lwz       r0, 0x0(r31)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0xD0
	  lwz       r4, 0xC(r31)
	  mr        r3, r31
	  bl        0x26E2AC

	.loc_0xD0:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8014A594
 * Size:	000004
 */
void Game::Piki::doDirectDraw((Graphics&))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8014A598
 * Size:	000028
 */
void Game::Piki::getBaseScale(void)
{
	/*
	.loc_0x0:
	  lbz       r0, 0x2B8(r3)
	  lfs       f1, -0x5F20(r2)
	  cmplwi    r0, 0x3
	  bne-      .loc_0x18
	  lfs       f1, -0x5EF0(r2)
	  blr

	.loc_0x18:
	  cmplwi    r0, 0x4
	  bnelr-
	  lfs       f1, -0x5EEC(r2)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8014A5C0
 * Size:	0001B0
 */
void Game::Piki::changeShape((int))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r4
	  cmpwi     r31, 0x5
	  stw       r30, 0x18(r1)
	  mr        r30, r3
	  stw       r29, 0x14(r1)
	  lbz       r29, 0x2B8(r3)
	  beq-      .loc_0x38
	  lfs       f0, -0x5F50(r2)
	  stfs      f0, 0x224(r30)
	  b         .loc_0x40

	.loc_0x38:
	  lfs       f0, -0x5EE8(r2)
	  stfs      f0, 0x224(r30)

	.loc_0x40:
	  stb       r31, 0x2B8(r30)
	  mr        r4, r30
	  lwz       r3, -0x6D0C(r13)
	  bl        0x1412C
	  lbz       r0, 0x2B8(r30)
	  lfs       f1, -0x5F20(r2)
	  cmplwi    r0, 0x3
	  bne-      .loc_0x68
	  lfs       f1, -0x5EF0(r2)
	  b         .loc_0x74

	.loc_0x68:
	  cmplwi    r0, 0x4
	  bne-      .loc_0x74
	  lfs       f1, -0x5EEC(r2)

	.loc_0x74:
	  stfs      f1, 0x168(r30)
	  lis       r3, 0x8051
	  lfs       f0, -0x5F20(r2)
	  addi      r0, r3, 0x228C
	  stfs      f1, 0x16C(r30)
	  cmpwi     r31, 0x5
	  stfs      f1, 0x170(r30)
	  stfs      f0, 0x2B4(r30)
	  lbz       r3, 0x2B8(r30)
	  rlwinm    r3,r3,2,0,29
	  add       r3, r0, r3
	  lbz       r0, 0x0(r3)
	  stb       r0, 0x2A7(r30)
	  lbz       r0, 0x1(r3)
	  stb       r0, 0x2A8(r30)
	  lbz       r0, 0x2(r3)
	  stb       r0, 0x2A9(r30)
	  lbz       r0, 0x3(r3)
	  stb       r0, 0x2AA(r30)
	  bne-      .loc_0xE0
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x1C0(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x100

	.loc_0xE0:
	  lis       r3, 0x8051
	  mr        r4, r29
	  addi      r3, r3, 0x25EC
	  bl        0x86B70
	  lis       r3, 0x8051
	  mr        r4, r30
	  addi      r3, r3, 0x25EC
	  bl        0x869D8

	.loc_0x100:
	  lis       r3, 0x8051
	  lwzu      r12, 0x25EC(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r6, 0x258(r30)
	  lis       r3, 0x8048
	  subi      r4, r3, 0x3768
	  addi      r5, r30, 0x20C
	  stw       r31, 0x8(r6)
	  addi      r0, r30, 0x138
	  lwz       r3, 0x258(r30)
	  stw       r5, 0x10(r3)
	  lwz       r3, 0x258(r30)
	  stw       r0, 0x1C(r3)
	  lwz       r3, 0x174(r30)
	  bl        0x2F48E4
	  stw       r3, 0x268(r30)
	  lis       r3, 0x8048
	  subi      r4, r3, 0x375C
	  lwz       r3, 0x174(r30)
	  bl        0x2F48D0
	  stw       r3, 0x278(r30)
	  lis       r3, 0x8048
	  subi      r4, r3, 0x3768
	  lwz       r3, 0x174(r30)
	  bl        0x2F48BC
	  bl        0x2DF174
	  lwz       r5, 0x258(r30)
	  subi      r4, r2, 0x5EE4
	  stw       r3, 0x18(r5)
	  lwz       r3, 0x174(r30)
	  bl        0x2F48A4
	  lis       r4, 0x8014
	  lwz       r3, 0x18(r3)
	  subi      r0, r4, 0x2B4C
	  stw       r0, 0x4(r3)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8014A770
 * Size:	000008
 */
void Game::Piki::changeHappa((int))
{
	/*
	.loc_0x0:
	  stb       r4, 0x2B9(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8014A778
 * Size:	000344
 */
void Game::Piki::do_updateLookCreature(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0xC0(r1)
	  mflr      r0
	  stw       r0, 0xC4(r1)
	  stfd      f31, 0xB0(r1)
	  psq_st    f31,0xB8(r1),0,0
	  stw       r31, 0xAC(r1)
	  stw       r30, 0xA8(r1)
	  stw       r29, 0xA4(r1)
	  lwz       r12, 0x0(r3)
	  mr        r31, r3
	  lwz       r12, 0xB8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x74
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xBC(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x74
	  li        r0, 0
	  lfs       f0, -0x5F44(r2)
	  stw       r0, 0x1A0(r31)
	  stfs      f0, 0x19C(r31)
	  stfs      f0, 0x198(r31)
	  stb       r0, 0x1A4(r31)
	  b         .loc_0x320

	.loc_0x74:
	  lwz       r3, -0x6C14(r13)
	  lbz       r0, 0x3C(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x320
	  lwz       r0, 0x1A8(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x138
	  lwz       r3, -0x6514(r13)
	  lfs       f2, 0x254(r31)
	  lfs       f1, 0x54(r3)
	  lfs       f0, -0x5F44(r2)
	  fsubs     f1, f2, f1
	  stfs      f1, 0x254(r31)
	  lfs       f1, 0x254(r31)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x138
	  lwz       r4, 0x1A8(r31)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x0(r4)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f1, 0xC(r1)
	  lfs       f0, 0x210(r31)
	  lfs       f3, 0x8(r1)
	  fsubs     f4, f1, f0
	  lfs       f2, 0x20C(r31)
	  lfs       f1, 0x10(r1)
	  lfs       f0, 0x214(r31)
	  fsubs     f3, f3, f2
	  fmuls     f4, f4, f4
	  fsubs     f2, f1, f0
	  lfs       f0, -0x5F44(r2)
	  fmadds    f1, f3, f3, f4
	  fmuls     f2, f2, f2
	  fadds     f1, f2, f1
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x11C
	  ble-      .loc_0x120
	  fsqrte    f0, f1
	  fmuls     f1, f0, f1
	  b         .loc_0x120

	.loc_0x11C:
	  fmr       f1, f0

	.loc_0x120:
	  lfs       f0, -0x5EDC(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x320
	  mr        r3, r31
	  bl        -0xD084
	  b         .loc_0x320

	.loc_0x138:
	  addi      r3, r31, 0x298
	  bl        0x4BDD4
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x320
	  lwz       r3, 0x1B8(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x15C
	  lha       r0, 0x20(r3)
	  b         .loc_0x160

	.loc_0x15C:
	  li        r0, -0x1

	.loc_0x160:
	  cmpwi     r0, 0x20
	  bge-      .loc_0x180
	  cmpwi     r0, 0x15
	  beq-      .loc_0x194
	  blt-      .loc_0x188
	  cmpwi     r0, 0x1C
	  bge-      .loc_0x194
	  b         .loc_0x188

	.loc_0x180:
	  cmpwi     r0, 0x38
	  beq-      .loc_0x194

	.loc_0x188:
	  mr        r3, r31
	  bl        -0xD0E0
	  b         .loc_0x320

	.loc_0x194:
	  lfs       f1, 0x20C(r31)
	  addi      r3, r1, 0x24
	  lfs       f0, -0x5EDC(r2)
	  addi      r4, r1, 0x14
	  stfs      f1, 0x14(r1)
	  lfs       f1, 0x210(r31)
	  stfs      f1, 0x18(r1)
	  lfs       f1, 0x214(r31)
	  stfs      f1, 0x1C(r1)
	  stfs      f0, 0x20(r1)
	  bl        0xE3A6C
	  li        r0, 0x1
	  addi      r3, r1, 0x44
	  stw       r0, 0x38(r1)
	  addi      r4, r1, 0x24
	  bl        0xE3A98
	  addi      r3, r1, 0x44
	  li        r30, 0
	  bl        0xE3B08
	  b         .loc_0x210

	.loc_0x1E4:
	  addi      r3, r1, 0x44
	  bl        0xE3BE4
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x208
	  addi      r30, r30, 0x1

	.loc_0x208:
	  addi      r3, r1, 0x44
	  bl        0xE3B7C

	.loc_0x210:
	  addi      r3, r1, 0x44
	  bl        0xE3BA8
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x1E4
	  cmpwi     r30, 0
	  li        r29, 0
	  ble-      .loc_0x320
	  xoris     r3, r30, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x94(r1)
	  addi      r3, r1, 0x44
	  lfd       f1, -0x5EF8(r2)
	  stw       r0, 0x90(r1)
	  lfd       f0, 0x90(r1)
	  fsubs     f31, f0, f1
	  bl        0xE3A98
	  b         .loc_0x2C8

	.loc_0x254:
	  addi      r3, r1, 0x44
	  bl        0xE3B74
	  lwz       r12, 0x0(r3)
	  mr        r30, r3
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x2C0
	  bl        -0x81450
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x94(r1)
	  lfs       f1, -0x5F20(r2)
	  stw       r0, 0x90(r1)
	  lfd       f4, -0x5EF8(r2)
	  fdivs     f0, f1, f31
	  lfd       f3, 0x90(r1)
	  lfs       f2, -0x5F04(r2)
	  fsubs     f3, f3, f4
	  fdivs     f2, f3, f2
	  fcmpo     cr0, f2, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x2BC
	  mr        r29, r30
	  b         .loc_0x2D8

	.loc_0x2BC:
	  fsubs     f31, f31, f1

	.loc_0x2C0:
	  addi      r3, r1, 0x44
	  bl        0xE3AC4

	.loc_0x2C8:
	  addi      r3, r1, 0x44
	  bl        0xE3AF0
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x254

	.loc_0x2D8:
	  cmplwi    r29, 0
	  beq-      .loc_0x320
	  mr        r3, r31
	  mr        r4, r29
	  bl        -0xD370
	  bl        -0x814C4
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x94(r1)
	  lfd       f3, -0x5EF8(r2)
	  stw       r0, 0x90(r1)
	  lfs       f1, -0x5F04(r2)
	  lfd       f2, 0x90(r1)
	  lfs       f0, -0x5ED8(r2)
	  fsubs     f2, f2, f3
	  fdivs     f1, f2, f1
	  fmadds    f0, f0, f1, f0
	  stfs      f0, 0x254(r31)

	.loc_0x320:
	  psq_l     f31,0xB8(r1),0,0
	  lwz       r0, 0xC4(r1)
	  lfd       f31, 0xB0(r1)
	  lwz       r31, 0xAC(r1)
	  lwz       r30, 0xA8(r1)
	  lwz       r29, 0xA4(r1)
	  mtlr      r0
	  addi      r1, r1, 0xC0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8014AABC
 * Size:	000014
 */
void Game::Piki::setTekiKillID((int))
{
	/*
	.loc_0x0:
	  cmpwi     r4, 0x62
	  bne-      .loc_0xC
	  li        r4, 0x63

	.loc_0xC:
	  sth       r4, 0x2A4(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8014AAD0
 * Size:	000008
 */
void Game::Piki::deferPikiCollision(void)
{
	/*
	.loc_0x0:
	  li        r3, 0x1
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8014AAD8
 * Size:	000008
 */
void Game::Piki::getCreatureName(void)
{
	/*
	.loc_0x0:
	  subi      r3, r2, 0x5ED4
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8014AAE0
 * Size:	000054
 */
void MonoObjectMgr<Game::Piki>::kill(Game::Piki*)
{
	/*
	.loc_0x0:
	  lwz       r0, 0x24(r3)
	  li        r6, 0
	  li        r5, 0
	  mtctr     r0
	  cmpwi     r0, 0
	  blelr-

	.loc_0x18:
	  lwz       r0, 0x28(r3)
	  add       r0, r0, r5
	  cmplw     r0, r4
	  bne-      .loc_0x44
	  lwz       r4, 0x2C(r3)
	  li        r0, 0x1
	  stbx      r0, r4, r6
	  lwz       r4, 0x20(r3)
	  subi      r0, r4, 0x1
	  stw       r0, 0x20(r3)
	  blr

	.loc_0x44:
	  addi      r5, r5, 0x2C8
	  addi      r6, r6, 0x1
	  bdnz+     .loc_0x18
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8014AB34
 * Size:	000004
 */
void init__Q24Game26StateMachine<Game::Piki> FPQ24Game4Piki(void)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8014AB38
 * Size:	00009C
 */
void transit__Q24Game26StateMachine<Game::Piki>
FPQ24Game4PikiiPQ24Game8StateArg(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  rlwinm    r0,r5,2,0,29
	  stmw      r27, 0xC(r1)
	  mr        r27, r3
	  mr        r28, r4
	  mr        r29, r6
	  lwz       r30, 0x290(r4)
	  lwz       r3, 0x14(r3)
	  cmplwi    r30, 0
	  lwzx      r31, r3, r0
	  beq-      .loc_0x50
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x4(r30)
	  stw       r0, 0x18(r27)

	.loc_0x50:
	  lwz       r0, 0xC(r27)
	  cmpw      r31, r0
	  blt-      .loc_0x60

	.loc_0x5C:
	  b         .loc_0x5C

	.loc_0x60:
	  lwz       r3, 0x4(r27)
	  rlwinm    r0,r31,2,0,29
	  mr        r4, r28
	  mr        r5, r29
	  lwzx      r3, r3, r0
	  stw       r3, 0x290(r28)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lmw       r27, 0xC(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8014ABD4
 * Size:	000004
 */
void init__Q24Game22FSMState<Game::Piki> FPQ24Game4PikiPQ24Game8StateArg(void)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8014ABD8
 * Size:	000004
 */
void cleanup__Q24Game22FSMState<Game::Piki> FPQ24Game4Piki(void)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8014ABDC
 * Size:	000038
 */
void exec__Q24Game26StateMachine<Game::Piki> FPQ24Game4Piki(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x290(r4)
	  cmplwi    r3, 0
	  beq-      .loc_0x28
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl

	.loc_0x28:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8014AC14
 * Size:	000004
 */
void exec__Q24Game22FSMState<Game::Piki> FPQ24Game4Piki(void)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8014AC18
 * Size:	000170
 */
void __sinit_piki_cpp(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  lis       r3, 0x8051
	  lis       r5, 0x804B
	  lis       r4, 0x8051
	  stw       r31, 0x1C(r1)
	  addi      r31, r4, 0x228C
	  li        r11, 0xFF
	  li        r12, 0x32
	  stw       r30, 0x18(r1)
	  li        r30, 0
	  li        r10, 0x1E
	  li        r9, 0xD2
	  stw       r29, 0x14(r1)
	  addi      r29, r5, 0x990
	  li        r6, 0xE6
	  li        r5, 0x8C
	  stw       r28, 0x10(r1)
	  li        r8, 0x1C
	  li        r7, 0x34
	  li        r28, -0x1
	  lfs       f0, 0x48B0(r3)
	  lis       r3, 0x8051
	  addi      r4, r3, 0x22CC
	  li        r0, 0xFA
	  li        r3, 0x78
	  stb       r30, 0x0(r31)
	  stb       r12, 0x1(r31)
	  stb       r11, 0x2(r31)
	  stb       r11, 0x3(r31)
	  stb       r11, 0x4(r31)
	  stb       r10, 0x5(r31)
	  stb       r30, 0x6(r31)
	  stb       r11, 0x7(r31)
	  stb       r11, 0x8(r31)
	  stb       r9, 0x9(r31)
	  stb       r30, 0xA(r31)
	  stb       r11, 0xB(r31)
	  stb       r8, 0xC(r31)
	  stb       r30, 0xD(r31)
	  stb       r7, 0xE(r31)
	  stb       r11, 0xF(r31)
	  stb       r11, 0x10(r31)
	  stb       r6, 0x11(r31)
	  stb       r11, 0x12(r31)
	  stb       r11, 0x13(r31)
	  stb       r11, 0x14(r31)
	  stb       r5, 0x15(r31)
	  stb       r30, 0x16(r31)
	  stb       r11, 0x17(r31)
	  stb       r11, 0x18(r31)
	  stb       r11, 0x19(r31)
	  stb       r11, 0x1A(r31)
	  stb       r30, 0x1B(r31)
	  stb       r30, 0x0(r4)
	  stb       r12, 0x1(r4)
	  stb       r11, 0x2(r4)
	  stb       r11, 0x3(r4)
	  stb       r11, 0x4(r4)
	  stb       r10, 0x5(r4)
	  stb       r30, 0x6(r4)
	  stb       r11, 0x7(r4)
	  stb       r11, 0x8(r4)
	  stb       r9, 0x9(r4)
	  stb       r30, 0xA(r4)
	  stb       r11, 0xB(r4)
	  stb       r3, 0xC(r4)
	  stb       r30, 0xD(r4)
	  stb       r0, 0xE(r4)
	  stb       r11, 0xF(r4)
	  stb       r11, 0x10(r4)
	  stb       r6, 0x11(r4)
	  stb       r11, 0x12(r4)
	  stb       r11, 0x13(r4)
	  stb       r11, 0x14(r4)
	  stb       r5, 0x15(r4)
	  stb       r30, 0x16(r4)
	  stb       r11, 0x17(r4)
	  stb       r11, 0x18(r4)
	  stb       r11, 0x19(r4)
	  stb       r11, 0x1A(r4)
	  stb       r30, 0x1B(r4)
	  lwz       r31, 0x1C(r1)
	  stw       r28, -0x6D60(r13)
	  lwz       r30, 0x18(r1)
	  stfs      f0, -0x6D5C(r13)
	  stfs      f0, 0x0(r29)
	  stfs      f0, 0x4(r29)
	  stfs      f0, 0x8(r29)
	  lwz       r29, 0x14(r1)
	  lwz       r28, 0x10(r1)
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8014AD88
 * Size:	000008
 */
void @4 @efx::TPkMoeA::__dt(void)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x4
	  b         -0x31B4
	*/
}

/*
 * --INFO--
 * Address:	8014AD90
 * Size:	000008
 */
void @4 @efx::TPkBlackDown::__dt(void)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x4
	  b         -0x3258
	*/
}

/*
 * --INFO--
 * Address:	8014AD98
 * Size:	000008
 */
void @376 @Game::Piki::onKeyEvent((SysShape::KeyEvent const&))
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x178
	  b         -0x1EB0
	*/
}
