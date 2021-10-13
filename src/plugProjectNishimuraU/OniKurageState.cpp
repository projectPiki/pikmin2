

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
 * Address:	802D1AE0
 * Size:	000424
 */
void Game::OniKurage::FSM::init((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r4, 0xC
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x1A1294
	  li        r3, 0x10
	  bl        -0x2ADC5C
	  mr.       r4, r3
	  beq-      .loc_0x64
	  lis       r3, 0x804B
	  lis       r5, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804D
	  stw       r0, 0x0(r4)
	  li        r7, 0
	  addi      r6, r5, 0x2978
	  subi      r5, r2, 0x1A78
	  stw       r7, 0x4(r4)
	  addi      r0, r3, 0x2954
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x64:
	  mr        r3, r31
	  bl        -0x1A1240
	  li        r3, 0x10
	  bl        -0x2ADCAC
	  mr.       r4, r3
	  beq-      .loc_0xB8
	  lis       r3, 0x804B
	  lis       r5, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804D
	  stw       r0, 0x0(r4)
	  li        r0, 0x1
	  li        r7, 0
	  addi      r6, r5, 0x2978
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x1A70
	  addi      r0, r3, 0x2930
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0xB8:
	  mr        r3, r31
	  bl        -0x1A1294
	  li        r3, 0x10
	  bl        -0x2ADD00
	  mr.       r4, r3
	  beq-      .loc_0x10C
	  lis       r3, 0x804B
	  lis       r5, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804D
	  stw       r0, 0x0(r4)
	  li        r0, 0x2
	  li        r7, 0
	  addi      r6, r5, 0x2978
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x1A68
	  addi      r0, r3, 0x290C
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x10C:
	  mr        r3, r31
	  bl        -0x1A12E8
	  li        r3, 0x10
	  bl        -0x2ADD54
	  mr.       r4, r3
	  beq-      .loc_0x160
	  lis       r3, 0x804B
	  lis       r5, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804D
	  stw       r0, 0x0(r4)
	  li        r0, 0x3
	  li        r7, 0
	  addi      r6, r5, 0x2978
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x1A60
	  addi      r0, r3, 0x28E8
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x160:
	  mr        r3, r31
	  bl        -0x1A133C
	  li        r3, 0x10
	  bl        -0x2ADDA8
	  mr.       r4, r3
	  beq-      .loc_0x1B4
	  lis       r3, 0x804B
	  lis       r5, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804D
	  stw       r0, 0x0(r4)
	  li        r0, 0x4
	  li        r7, 0
	  addi      r6, r5, 0x2978
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x1A58
	  addi      r0, r3, 0x28C4
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x1B4:
	  mr        r3, r31
	  bl        -0x1A1390
	  li        r3, 0x10
	  bl        -0x2ADDFC
	  mr.       r4, r3
	  beq-      .loc_0x208
	  lis       r3, 0x804B
	  lis       r5, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804D
	  stw       r0, 0x0(r4)
	  li        r0, 0x5
	  li        r7, 0
	  addi      r6, r5, 0x2978
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x1A50
	  addi      r0, r3, 0x28A0
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x208:
	  mr        r3, r31
	  bl        -0x1A13E4
	  li        r3, 0x10
	  bl        -0x2ADE50
	  mr.       r4, r3
	  beq-      .loc_0x25C
	  lis       r3, 0x804B
	  lis       r5, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804D
	  stw       r0, 0x0(r4)
	  li        r0, 0x6
	  li        r7, 0
	  addi      r6, r5, 0x2978
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x1A48
	  addi      r0, r3, 0x287C
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x25C:
	  mr        r3, r31
	  bl        -0x1A1438
	  li        r3, 0x10
	  bl        -0x2ADEA4
	  mr.       r4, r3
	  beq-      .loc_0x2B0
	  lis       r3, 0x804B
	  lis       r5, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804D
	  stw       r0, 0x0(r4)
	  li        r0, 0x7
	  li        r7, 0
	  addi      r6, r5, 0x2978
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x1A40
	  addi      r0, r3, 0x2858
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x2B0:
	  mr        r3, r31
	  bl        -0x1A148C
	  li        r3, 0x10
	  bl        -0x2ADEF8
	  mr.       r4, r3
	  beq-      .loc_0x304
	  lis       r3, 0x804B
	  lis       r5, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804D
	  stw       r0, 0x0(r4)
	  li        r0, 0x8
	  li        r7, 0
	  addi      r6, r5, 0x2978
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x1A38
	  addi      r0, r3, 0x2810
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x304:
	  mr        r3, r31
	  bl        -0x1A14E0
	  li        r3, 0x10
	  bl        -0x2ADF4C
	  mr.       r4, r3
	  beq-      .loc_0x358
	  lis       r3, 0x804B
	  lis       r5, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804D
	  stw       r0, 0x0(r4)
	  li        r0, 0x9
	  li        r7, 0
	  addi      r6, r5, 0x2978
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x1A30
	  addi      r0, r3, 0x2834
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x358:
	  mr        r3, r31
	  bl        -0x1A1534
	  li        r3, 0x10
	  bl        -0x2ADFA0
	  mr.       r4, r3
	  beq-      .loc_0x3B0
	  lis       r3, 0x804B
	  lis       r6, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r5, 0x8049
	  stw       r0, 0x0(r4)
	  li        r0, 0xA
	  lis       r3, 0x804D
	  li        r7, 0
	  stw       r0, 0x4(r4)
	  addi      r6, r6, 0x2978
	  subi      r5, r5, 0x42C8
	  addi      r0, r3, 0x27EC
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x3B0:
	  mr        r3, r31
	  bl        -0x1A158C
	  li        r3, 0x10
	  bl        -0x2ADFF8
	  mr.       r4, r3
	  beq-      .loc_0x408
	  lis       r3, 0x804B
	  lis       r6, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r5, 0x8049
	  stw       r0, 0x0(r4)
	  li        r0, 0xB
	  lis       r3, 0x804D
	  li        r7, 0
	  stw       r0, 0x4(r4)
	  addi      r6, r6, 0x2978
	  subi      r5, r5, 0x42BC
	  addi      r0, r3, 0x27B4
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x408:
	  mr        r3, r31
	  bl        -0x1A15E4
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802D1F04
 * Size:	0000CC
 */
void Game::OniKurage::StateDead::init((Game::EnemyBase*, Game::StateArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x1A28(r2)
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  lwz       r0, 0x1E0(r4)
	  rlwinm    r0,r0,0,26,24
	  stw       r0, 0x1E0(r4)
	  lwz       r0, 0x1E0(r4)
	  rlwinm    r0,r0,0,29,27
	  stw       r0, 0x1E0(r4)
	  stfs      f0, 0x1D4(r4)
	  stfs      f0, 0x1D8(r4)
	  stfs      f0, 0x1DC(r4)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xCC(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x6C
	  mr        r3, r31
	  li        r4, 0
	  li        r5, 0
	  bl        -0x1CCF64
	  b         .loc_0x7C

	.loc_0x6C:
	  mr        r3, r31
	  li        r4, 0x1
	  li        r5, 0
	  bl        -0x1CCF78

	.loc_0x7C:
	  lwz       r0, 0x1E0(r31)
	  mr        r3, r31
	  ori       r0, r0, 0x4
	  stw       r0, 0x1E0(r31)
	  bl        -0x1CC71C
	  mr        r3, r31
	  bl        0x4C44
	  lfs       f1, -0x1A28(r2)
	  mr        r3, r31
	  bl        0x19C470
	  lwz       r3, 0x28C(r31)
	  lwz       r12, 0x28(r3)
	  lwz       r12, 0xC8(r12)
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
 * Address:	802D1FD0
 * Size:	00018C
 */
void Game::OniKurage::StateDead::exec((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stfd      f31, 0x30(r1)
	  psq_st    f31,0x38(r1),0,0
	  stw       r31, 0x2C(r1)
	  mr        r31, r4
	  mr        r3, r31
	  bl        -0x1CCD84
	  fmr       f31, f1
	  lfs       f0, -0x1A24(r2)
	  fcmpo     cr0, f31, f0
	  ble-      .loc_0x40
	  mr        r3, r31
	  li        r4, 0x1
	  bl        0x43B0

	.loc_0x40:
	  lfs       f0, -0x1A20(r2)
	  fcmpo     cr0, f31, f0
	  ble-      .loc_0x78
	  fsubs     f2, f31, f0
	  lfs       f1, -0x1A24(r2)
	  lfs       f3, -0x1A18(r2)
	  mr        r3, r31
	  lfs       f0, -0x1A1C(r2)
	  fdivs     f1, f2, f1
	  fnmsubs   f0, f3, f1, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x20(r1)
	  lwz       r4, 0x24(r1)
	  bl        0x4C14

	.loc_0x78:
	  lwz       r3, 0x188(r31)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x170
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x2
	  bne-      .loc_0xB4
	  lfs       f1, -0x1A14(r2)
	  mr        r3, r31
	  lfs       f2, -0x1A10(r2)
	  li        r4, 0
	  lfs       f3, -0x1A28(r2)
	  lfs       f4, -0x1A0C(r2)
	  bl        -0x1BEF60
	  b         .loc_0x170

	.loc_0xB4:
	  cmplwi    r0, 0x3
	  bne-      .loc_0x15C
	  mr        r3, r31
	  bl        -0x1CC970
	  mr        r3, r31
	  bl        0x4BE4
	  mr        r3, r31
	  bl        0x4D0C
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xF4(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  li        r4, 0x590A
	  li        r5, 0
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r31
	  addi      r3, r1, 0x8
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x8(r1)
	  addi      r5, r1, 0x14
	  lfs       f1, 0xC(r1)
	  li        r4, 0x6
	  lfs       f0, 0x10(r1)
	  li        r6, 0x2
	  stfs      f2, 0x14(r1)
	  lwz       r3, -0x6960(r13)
	  stfs      f1, 0x18(r1)
	  stfs      f0, 0x1C(r1)
	  bl        -0x7FED4
	  lwz       r3, -0x6958(r13)
	  addi      r5, r1, 0x14
	  li        r4, 0xA
	  li        r6, 0x2
	  bl        -0x7E9A4
	  b         .loc_0x170

	.loc_0x15C:
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x170
	  mr        r3, r31
	  li        r4, 0
	  bl        -0x19704C

	.loc_0x170:
	  psq_l     f31,0x38(r1),0,0
	  lwz       r0, 0x44(r1)
	  lfd       f31, 0x30(r1)
	  lwz       r31, 0x2C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802D215C
 * Size:	000004
 */
void Game::OniKurage::StateDead::cleanup((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802D2160
 * Size:	00005C
 */
void Game::OniKurage::StateWait::init((Game::EnemyBase*, Game::StateArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f1, -0x1A28(r2)
	  mr        r3, r4
	  stw       r0, 0x14(r1)
	  li        r0, -0x1
	  lfs       f0, -0x1A08(r2)
	  li        r5, 0
	  stw       r0, 0x2C0(r4)
	  li        r4, 0x5
	  stfs      f1, 0x2C4(r3)
	  lwz       r0, 0x1E0(r3)
	  ori       r0, r0, 0x4
	  stw       r0, 0x1E0(r3)
	  stfs      f1, 0x1D4(r3)
	  stfs      f1, 0x1D8(r3)
	  stfs      f1, 0x1DC(r3)
	  stfs      f0, 0x2C8(r3)
	  bl        -0x1CD1A4
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802D21BC
 * Size:	000148
 */
void Game::OniKurage::StateWait::exec((Game::EnemyBase*))
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
	  mr        r31, r4
	  mr        r30, r3
	  mr        r3, r31
	  bl        0x27B4
	  lfs       f2, -0x1A28(r2)
	  mr        r3, r31
	  bl        0x2538
	  fmr       f31, f1
	  mr        r3, r31
	  bl        0x2F10
	  mr.       r4, r3
	  beq-      .loc_0x88
	  fmr       f1, f31
	  mr        r3, r31
	  bl        0x323C
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x74
	  li        r0, 0x4
	  mr        r3, r31
	  stw       r0, 0x2C0(r31)
	  bl        -0x1CCF88
	  b         .loc_0xA8

	.loc_0x74:
	  li        r0, 0x3
	  mr        r3, r31
	  stw       r0, 0x2C0(r31)
	  bl        -0x1CCF9C
	  b         .loc_0xA8

	.loc_0x88:
	  lfs       f1, 0x2C4(r31)
	  lfs       f0, -0x1A04(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0xA8
	  li        r0, 0x2
	  mr        r3, r31
	  stw       r0, 0x2C0(r31)
	  bl        -0x1CCFC0

	.loc_0xA8:
	  mr        r3, r31
	  bl        0x2E00
	  mr.       r5, r3
	  blt-      .loc_0xD8
	  lwz       r12, 0x0(r30)
	  mr        r3, r30
	  mr        r4, r31
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x128

	.loc_0xD8:
	  lwz       r3, -0x6514(r13)
	  lfs       f1, 0x2C4(r31)
	  lfs       f0, 0x54(r3)
	  fadds     f0, f1, f0
	  stfs      f0, 0x2C4(r31)
	  lwz       r3, 0x188(r31)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x128
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x128
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r6, 0
	  lwz       r5, 0x2C0(r31)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x128:
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
 * Address:	802D2304
 * Size:	000004
 */
void Game::OniKurage::StateWait::cleanup((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802D2308
 * Size:	000074
 */
void Game::OniKurage::StateMove::init((Game::EnemyBase*, Game::StateArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x1A28(r2)
	  stw       r0, 0x14(r1)
	  li        r0, -0x1
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  stw       r0, 0x2C0(r4)
	  stfs      f0, 0x2C4(r4)
	  bl        0x2490
	  lwz       r0, 0x1E0(r31)
	  mr        r3, r31
	  lfs       f1, -0x1A28(r2)
	  li        r4, 0x5
	  ori       r0, r0, 0x4
	  lfs       f0, -0x1A08(r2)
	  stw       r0, 0x1E0(r31)
	  li        r5, 0
	  stfs      f1, 0x1D4(r31)
	  stfs      f1, 0x1D8(r31)
	  stfs      f1, 0x1DC(r31)
	  stfs      f0, 0x2C8(r31)
	  bl        -0x1CD360
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802D237C
 * Size:	0001DC
 */
void Game::OniKurage::StateMove::exec((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stfd      f31, 0x30(r1)
	  psq_st    f31,0x38(r1),0,0
	  stw       r31, 0x2C(r1)
	  stw       r30, 0x28(r1)
	  mr        r31, r4
	  mr        r30, r3
	  mr        r3, r31
	  bl        0x25F4
	  lfs       f2, -0x1A28(r2)
	  mr        r3, r31
	  bl        0x2378
	  fmr       f31, f1
	  mr        r3, r31
	  bl        0x2D50
	  mr.       r4, r3
	  beq-      .loc_0x88
	  fmr       f1, f31
	  mr        r3, r31
	  bl        0x307C
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x74
	  li        r0, 0x4
	  mr        r3, r31
	  stw       r0, 0x2C0(r31)
	  bl        -0x1CD148
	  b         .loc_0x11C

	.loc_0x74:
	  li        r0, 0x3
	  mr        r3, r31
	  stw       r0, 0x2C0(r31)
	  bl        -0x1CD15C
	  b         .loc_0x11C

	.loc_0x88:
	  mr        r4, r31
	  addi      r3, r1, 0x8
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f1, 0x2D4(r31)
	  lfs       f5, 0x2D8(r31)
	  lfs       f2, 0x2D0(r31)
	  lfs       f0, -0x1A00(r2)
	  stfs      f2, 0x14(r1)
	  lfs       f3, 0x8(r1)
	  stfs      f1, 0x18(r1)
	  lfs       f4, 0x10(r1)
	  stfs      f5, 0x1C(r1)
	  lfs       f1, 0x2C4(r31)
	  fcmpo     cr0, f1, f0
	  bgt-      .loc_0xEC
	  fsubs     f1, f4, f5
	  lfs       f0, -0x19FC(r2)
	  fsubs     f2, f3, f2
	  fmuls     f1, f1, f1
	  fmadds    f1, f2, f2, f1
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x100

	.loc_0xEC:
	  li        r0, 0x1
	  mr        r3, r31
	  stw       r0, 0x2C0(r31)
	  bl        -0x1CD1D4
	  b         .loc_0x11C

	.loc_0x100:
	  lwz       r5, 0xC0(r31)
	  mr        r3, r31
	  addi      r4, r1, 0x14
	  lfs       f1, 0x2E4(r5)
	  lfs       f2, 0x30C(r5)
	  lfs       f3, 0x334(r5)
	  bl        -0x1BCEB8

	.loc_0x11C:
	  mr        r3, r31
	  bl        0x2BCC
	  mr.       r5, r3
	  blt-      .loc_0x14C
	  lwz       r12, 0x0(r30)
	  mr        r3, r30
	  mr        r4, r31
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x1BC

	.loc_0x14C:
	  mr        r3, r31
	  bl        -0x1CB1CC
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x16C
	  lfs       f0, -0x1A28(r2)
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)

	.loc_0x16C:
	  lwz       r3, -0x6514(r13)
	  lfs       f1, 0x2C4(r31)
	  lfs       f0, 0x54(r3)
	  fadds     f0, f1, f0
	  stfs      f0, 0x2C4(r31)
	  lwz       r3, 0x188(r31)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x1BC
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x1BC
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r6, 0
	  lwz       r5, 0x2C0(r31)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x1BC:
	  psq_l     f31,0x38(r1),0,0
	  lwz       r0, 0x44(r1)
	  lfd       f31, 0x30(r1)
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802D2558
 * Size:	000004
 */
void Game::OniKurage::StateMove::cleanup((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802D255C
 * Size:	00006C
 */
void Game::OniKurage::StateChase::init((Game::EnemyBase*, Game::StateArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  li        r0, -0x1
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  lwz       r4, 0x1E0(r4)
	  ori       r4, r4, 0x4
	  stw       r4, 0x1E0(r31)
	  stw       r0, 0x2C0(r31)
	  bl        -0x1D0BBC
	  lfs       f1, -0x1A28(r2)
	  mr        r3, r31
	  lfs       f0, -0x1A08(r2)
	  li        r4, 0x5
	  stfs      f1, 0x1D4(r31)
	  li        r5, 0
	  stfs      f1, 0x1D8(r31)
	  stfs      f1, 0x1DC(r31)
	  stfs      f0, 0x2C8(r31)
	  bl        -0x1CD5AC
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802D25C8
 * Size:	00015C
 */
void Game::OniKurage::StateChase::exec((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stfd      f31, 0x20(r1)
	  psq_st    f31,0x28(r1),0,0
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  mr        r31, r4
	  mr        r29, r3
	  mr        r3, r31
	  bl        0x23A4
	  lfs       f2, -0x1A28(r2)
	  mr        r3, r31
	  bl        0x2128
	  fmr       f31, f1
	  mr        r3, r31
	  bl        0x2B00
	  mr.       r30, r3
	  beq-      .loc_0x9C
	  fmr       f1, f31
	  mr        r3, r31
	  mr        r4, r30
	  bl        0x2E28
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x7C
	  li        r0, 0x4
	  mr        r3, r31
	  stw       r0, 0x2C0(r31)
	  bl        -0x1CD39C
	  b         .loc_0xAC

	.loc_0x7C:
	  lwz       r5, 0xC0(r31)
	  mr        r3, r31
	  mr        r4, r30
	  lfs       f1, 0x2E4(r5)
	  lfs       f2, 0x30C(r5)
	  lfs       f3, 0x334(r5)
	  bl        -0x1BD25C
	  b         .loc_0xAC

	.loc_0x9C:
	  li        r0, 0x2
	  mr        r3, r31
	  stw       r0, 0x2C0(r31)
	  bl        -0x1CD3D0

	.loc_0xAC:
	  mr        r3, r31
	  bl        0x29F0
	  mr.       r5, r3
	  blt-      .loc_0xDC
	  lwz       r12, 0x0(r29)
	  mr        r3, r29
	  mr        r4, r31
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x138

	.loc_0xDC:
	  mr        r3, r31
	  bl        -0x1CB3A8
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xFC
	  lfs       f0, -0x1A28(r2)
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)

	.loc_0xFC:
	  lwz       r3, 0x188(r31)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x138
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x138
	  mr        r3, r29
	  mr        r4, r31
	  lwz       r12, 0x0(r29)
	  li        r6, 0
	  lwz       r5, 0x2C0(r31)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x138:
	  psq_l     f31,0x28(r1),0,0
	  lwz       r0, 0x34(r1)
	  lfd       f31, 0x20(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802D2724
 * Size:	000024
 */
void Game::OniKurage::StateChase::cleanup((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r3, r4
	  stw       r0, 0x14(r1)
	  bl        -0x1D0DB8
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802D2748
 * Size:	000080
 */
void Game::OniKurage::StateAttack::init((Game::EnemyBase*, Game::StateArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r5, -0x1
	  lfs       f0, -0x1A28(r2)
	  stw       r0, 0x14(r1)
	  li        r0, 0
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  lwz       r4, 0x1E0(r4)
	  ori       r4, r4, 0x4
	  stw       r4, 0x1E0(r31)
	  stw       r5, 0x2C0(r31)
	  stfs      f0, 0x2C4(r31)
	  stw       r0, 0x2E0(r31)
	  stb       r0, 0x2DC(r31)
	  lwz       r0, 0x1E0(r31)
	  rlwinm    r0,r0,0,26,24
	  stw       r0, 0x1E0(r31)
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  bl        -0x1D0DD4
	  mr        r3, r31
	  li        r4, 0x9
	  li        r5, 0
	  bl        -0x1CD7AC
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802D27C8
 * Size:	000320
 */
void Game::OniKurage::StateAttack::exec((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  mflr      r0
	  stw       r0, 0x54(r1)
	  stfd      f31, 0x40(r1)
	  psq_st    f31,0x48(r1),0,0
	  stw       r31, 0x3C(r1)
	  stw       r30, 0x38(r1)
	  lfs       f0, -0x1A28(r2)
	  mr        r31, r4
	  lfs       f1, 0x200(r4)
	  mr        r30, r3
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  beq-      .loc_0x48
	  mr        r3, r31
	  bl        0x3A90
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x84

	.loc_0x48:
	  mr        r3, r31
	  bl        0x3B80
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x7C
	  lwz       r3, 0xC0(r31)
	  lfs       f1, 0x2C4(r31)
	  lfs       f0, 0x894(r3)
	  fcmpo     cr0, f1, f0
	  bgt-      .loc_0x7C
	  lfs       f1, 0x2CC(r31)
	  lfs       f0, 0x8E4(r3)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x84

	.loc_0x7C:
	  mr        r3, r31
	  bl        -0x1CD5A8

	.loc_0x84:
	  mr        r3, r31
	  bl        0x21EC
	  lfs       f2, -0x1A28(r2)
	  mr        r3, r31
	  bl        0x1ECC
	  lbz       r0, 0x2DC(r31)
	  fmr       f31, f1
	  cmplwi    r0, 0
	  beq-      .loc_0x13C
	  mr        r3, r31
	  bl        0x2E10
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xD4
	  mr        r3, r31
	  bl        0x3A10
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xF0
	  mr        r3, r31
	  bl        -0x1CD5F4
	  b         .loc_0xF0

	.loc_0xD4:
	  mr        r3, r31
	  bl        -0x1CB5A0
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0xF0
	  fmr       f1, f31
	  mr        r3, r31
	  bl        0x3204

	.loc_0xF0:
	  mr        r4, r31
	  addi      r3, r1, 0x14
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f1, 0x18(r1)
	  mr        r3, r31
	  lfs       f2, 0x14(r1)
	  addi      r4, r1, 0x2C
	  fsubs     f0, f1, f31
	  stfs      f1, 0x30(r1)
	  lfs       f1, 0x1C(r1)
	  stfs      f2, 0x2C(r1)
	  stfs      f1, 0x34(r1)
	  stfs      f0, 0x30(r1)
	  bl        0x442C
	  mr        r3, r31
	  bl        0x3728

	.loc_0x13C:
	  lwz       r3, -0x6514(r13)
	  lfs       f1, 0x2C4(r31)
	  lfs       f0, 0x54(r3)
	  fadds     f0, f1, f0
	  stfs      f0, 0x2C4(r31)
	  lwz       r3, 0x188(r31)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x300
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x2
	  bne-      .loc_0x1C8
	  mr        r4, r31
	  addi      r3, r1, 0x8
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f1, 0xC(r1)
	  mr        r3, r31
	  lfs       f2, 0x8(r1)
	  addi      r4, r1, 0x20
	  fsubs     f0, f1, f31
	  stfs      f1, 0x24(r1)
	  lfs       f1, 0x10(r1)
	  stfs      f2, 0x20(r1)
	  stfs      f1, 0x28(r1)
	  stfs      f0, 0x24(r1)
	  bl        0x4358
	  li        r0, 0x1
	  stb       r0, 0x2DC(r31)
	  lwz       r0, 0x1E0(r31)
	  oris      r0, r0, 0x20
	  stw       r0, 0x1E0(r31)
	  b         .loc_0x300

	.loc_0x1C8:
	  cmplwi    r0, 0x1
	  bne-      .loc_0x200
	  mr        r3, r31
	  bl        -0x1CB69C
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x300
	  mr        r3, r31
	  bl        0x439C
	  li        r0, 0
	  stb       r0, 0x2DC(r31)
	  lwz       r0, 0x1E0(r31)
	  rlwinm    r0,r0,0,11,9
	  stw       r0, 0x1E0(r31)
	  b         .loc_0x300

	.loc_0x200:
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x300
	  lfs       f1, 0x200(r31)
	  lfs       f0, -0x1A28(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x240
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x300

	.loc_0x240:
	  mr        r3, r31
	  bl        0x3988
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x274
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x6
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x300

	.loc_0x274:
	  mr        r3, r31
	  bl        0x2628
	  mr.       r5, r3
	  blt-      .loc_0x2A4
	  lwz       r12, 0x0(r30)
	  mr        r3, r30
	  mr        r4, r31
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x300

	.loc_0x2A4:
	  fmr       f1, f31
	  mr        r3, r31
	  li        r4, 0
	  bl        0x29D4
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x2E0
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x4
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x300

	.loc_0x2E0:
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x1
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x300:
	  psq_l     f31,0x48(r1),0,0
	  lwz       r0, 0x54(r1)
	  lfd       f31, 0x40(r1)
	  lwz       r31, 0x3C(r1)
	  lwz       r30, 0x38(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802D2AE8
 * Size:	000044
 */
void Game::OniKurage::StateAttack::cleanup((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r3, r4
	  stw       r0, 0x14(r1)
	  li        r0, 0
	  stb       r0, 0x2DC(r4)
	  lwz       r0, 0x1E0(r4)
	  rlwinm    r0,r0,0,11,9
	  stw       r0, 0x1E0(r4)
	  lwz       r0, 0x1E0(r4)
	  ori       r0, r0, 0x40
	  stw       r0, 0x1E0(r4)
	  bl        -0x1D119C
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802D2B2C
 * Size:	000068
 */
void Game::OniKurage::StateFall::init((Game::EnemyBase*, Game::StateArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x1A28(r2)
	  stw       r0, 0x14(r1)
	  li        r0, -0x1
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  stw       r0, 0x2C0(r4)
	  stfs      f0, 0x2C4(r4)
	  lwz       r0, 0x1E0(r4)
	  ori       r0, r0, 0x4
	  stw       r0, 0x1E0(r4)
	  stfs      f0, 0x1D4(r4)
	  stfs      f0, 0x1D8(r4)
	  stfs      f0, 0x1DC(r4)
	  bl        -0x1D11A0
	  mr        r3, r31
	  li        r4, 0x8
	  li        r5, 0
	  bl        -0x1CDB78
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802D2B94
 * Size:	000180
 */
void Game::OniKurage::StateFall::exec((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stfd      f31, 0x30(r1)
	  psq_st    f31,0x38(r1),0,0
	  stw       r31, 0x2C(r1)
	  stw       r30, 0x28(r1)
	  mr        r31, r4
	  mr        r30, r3
	  lwz       r12, 0x0(r31)
	  mr        r3, r31
	  lwz       r12, 0xCC(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xD8
	  lfs       f31, 0x2C4(r31)
	  mr        r3, r31
	  fmr       f1, f31
	  bl        0x22F0
	  lfs       f2, -0x1A28(r2)
	  mr        r3, r31
	  bl        0x1B3C
	  lfs       f1, -0x1A24(r2)
	  lfs       f0, -0x1A20(r2)
	  fmuls     f1, f31, f1
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0xD8
	  mr        r4, r31
	  addi      r3, r1, 0x8
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x6C(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0xC(r1)
	  mr        r3, r31
	  lfs       f0, -0x1A10(r2)
	  addi      r4, r1, 0x14
	  lfs       f3, 0x8(r1)
	  lfs       f1, 0x10(r1)
	  fsubs     f0, f2, f0
	  stfs      f2, 0x18(r1)
	  stfs      f3, 0x14(r1)
	  stfs      f1, 0x1C(r1)
	  stfs      f0, 0x18(r1)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x68(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x1E0(r31)
	  mr        r3, r31
	  rlwinm    r0,r0,0,30,28
	  stw       r0, 0x1E0(r31)
	  bl        -0x1CD9C8

	.loc_0xD8:
	  lwz       r3, -0x6514(r13)
	  lfs       f1, 0x2C4(r31)
	  lfs       f0, 0x54(r3)
	  fadds     f0, f1, f0
	  stfs      f0, 0x2C4(r31)
	  lwz       r3, 0x188(r31)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x160
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x160
	  lfs       f1, 0x200(r31)
	  lfs       f0, -0x1A28(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x140
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x160

	.loc_0x140:
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x7
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x160:
	  psq_l     f31,0x38(r1),0,0
	  lwz       r0, 0x44(r1)
	  lfd       f31, 0x30(r1)
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802D2D14
 * Size:	000024
 */
void Game::OniKurage::StateFall::cleanup((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r3, r4
	  stw       r0, 0x14(r1)
	  bl        -0x1D13A8
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802D2D38
 * Size:	000094
 */
void Game::OniKurage::StateDrop::init((Game::EnemyBase*, Game::StateArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x1A28(r2)
	  stw       r0, 0x14(r1)
	  li        r0, -0x1
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  stw       r0, 0x2C0(r4)
	  stfs      f0, 0x2C4(r4)
	  lwz       r0, 0x1E0(r4)
	  rlwinm    r0,r0,0,30,28
	  stw       r0, 0x1E0(r4)
	  stfs      f0, 0x1D4(r4)
	  stfs      f0, 0x1D8(r4)
	  stfs      f0, 0x1DC(r4)
	  bl        -0x1D13AC
	  mr        r3, r31
	  li        r4, 0x8
	  li        r5, 0
	  bl        -0x1CDD84
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xF4(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  li        r4, 0x5912
	  li        r5, 0
	  lwz       r12, 0xC(r12)
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
 * Address:	802D2DCC
 * Size:	000164
 */
void Game::OniKurage::StateDrop::exec((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  mflr      r0
	  stw       r0, 0x54(r1)
	  stfd      f31, 0x40(r1)
	  psq_st    f31,0x48(r1),0,0
	  stw       r31, 0x3C(r1)
	  stw       r30, 0x38(r1)
	  lwz       r12, 0x0(r4)
	  mr        r30, r3
	  addi      r3, r1, 0x14
	  mr        r31, r4
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x14(r1)
	  mr        r4, r31
	  lfs       f1, 0x18(r1)
	  addi      r3, r1, 0x8
	  lfs       f0, 0x1C(r1)
	  stfs      f2, 0x20(r1)
	  stfs      f1, 0x24(r1)
	  stfs      f0, 0x28(r1)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x6C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, -0x6CF8(r13)
	  addi      r4, r1, 0x20
	  lfs       f31, 0xC(r1)
	  lwz       r12, 0x4(r3)
	  lwz       r12, 0x28(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x24(r1)
	  lfs       f0, -0x19F8(r2)
	  fsubs     f1, f2, f1
	  fcmpo     cr0, f1, f0
	  blt-      .loc_0xB4
	  lfs       f0, -0x1A28(r2)
	  fcmpo     cr0, f31, f0
	  bgt-      .loc_0xB4
	  lfs       f1, 0x2C4(r31)
	  lfs       f0, -0x1A04(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0xBC

	.loc_0xB4:
	  mr        r3, r31
	  bl        -0x1CDBE4

	.loc_0xBC:
	  lwz       r3, -0x6514(r13)
	  lfs       f1, 0x2C4(r31)
	  lfs       f0, 0x54(r3)
	  fadds     f0, f1, f0
	  stfs      f0, 0x2C4(r31)
	  lwz       r3, 0x188(r31)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x144
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x144
	  lfs       f1, 0x200(r31)
	  lfs       f0, -0x1A28(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x124
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x144

	.loc_0x124:
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x7
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x144:
	  psq_l     f31,0x48(r1),0,0
	  lwz       r0, 0x54(r1)
	  lfd       f31, 0x40(r1)
	  lwz       r31, 0x3C(r1)
	  lwz       r30, 0x38(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802D2F30
 * Size:	000024
 */
void Game::OniKurage::StateDrop::cleanup((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r3, r4
	  stw       r0, 0x14(r1)
	  bl        -0x1D15C4
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802D2F54
 * Size:	0000C0
 */
void Game::OniKurage::StateLand::init((Game::EnemyBase*, Game::StateArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  lfs       f0, -0x1A28(r2)
	  stw       r0, 0x34(r1)
	  stw       r31, 0x2C(r1)
	  mr        r31, r4
	  mr        r3, r31
	  stfs      f0, 0x2C4(r4)
	  lwz       r0, 0x1E0(r4)
	  rlwinm    r0,r0,0,30,28
	  stw       r0, 0x1E0(r4)
	  stfs      f0, 0x1D4(r4)
	  stfs      f0, 0x1D8(r4)
	  stfs      f0, 0x1DC(r4)
	  bl        -0x1D15C0
	  mr        r3, r31
	  li        r4, 0x6
	  li        r5, 0
	  bl        -0x1CDF98
	  mr        r3, r31
	  bl        0x3EA4
	  mr        r4, r31
	  addi      r3, r1, 0x8
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x8(r1)
	  addi      r5, r1, 0x14
	  lfs       f1, 0xC(r1)
	  li        r4, 0x6
	  lfs       f0, 0x10(r1)
	  li        r6, 0x2
	  stfs      f2, 0x14(r1)
	  lwz       r3, -0x6960(r13)
	  stfs      f1, 0x18(r1)
	  stfs      f0, 0x1C(r1)
	  bl        -0x80DAC
	  lwz       r3, -0x6958(r13)
	  addi      r5, r1, 0x14
	  li        r4, 0x9
	  li        r6, 0x2
	  bl        -0x7F87C
	  lwz       r0, 0x34(r1)
	  lwz       r31, 0x2C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802D3014
 * Size:	000080
 */
void Game::OniKurage::StateLand::exec((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r5, 0x188(r4)
	  lbz       r0, 0x24(r5)
	  cmplwi    r0, 0
	  beq-      .loc_0x70
	  lwz       r0, 0x1C(r5)
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x70
	  lfs       f1, 0x200(r4)
	  lfs       f0, -0x1A28(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x58
	  lwz       r12, 0x0(r3)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x70

	.loc_0x58:
	  lwz       r12, 0x0(r3)
	  li        r5, 0x8
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x70:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802D3094
 * Size:	000024
 */
void Game::OniKurage::StateLand::cleanup((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r3, r4
	  stw       r0, 0x14(r1)
	  bl        -0x1D1728
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802D30B8
 * Size:	000068
 */
void Game::OniKurage::StateTakeOff::init((Game::EnemyBase*, Game::StateArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x1A28(r2)
	  stw       r0, 0x14(r1)
	  li        r0, -0x1
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  stw       r0, 0x2C0(r4)
	  stfs      f0, 0x2C4(r4)
	  lwz       r0, 0x1E0(r4)
	  rlwinm    r0,r0,0,30,28
	  stw       r0, 0x1E0(r4)
	  stfs      f0, 0x1D4(r4)
	  stfs      f0, 0x1D8(r4)
	  stfs      f0, 0x1DC(r4)
	  bl        -0x1D172C
	  mr        r3, r31
	  li        r4, 0x7
	  li        r5, 0
	  bl        -0x1CE104
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802D3120
 * Size:	0000F0
 */
void Game::OniKurage::StateTakeOff::exec((Game::EnemyBase*))
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
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xCC(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x4C
	  mr        r3, r31
	  bl        0x1C30
	  lfs       f2, -0x1A28(r2)
	  mr        r3, r31
	  bl        0x15C0

	.loc_0x4C:
	  lwz       r3, 0x188(r31)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0xD8
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x2
	  bne-      .loc_0x78
	  lwz       r0, 0x1E0(r31)
	  ori       r0, r0, 0x4
	  stw       r0, 0x1E0(r31)
	  b         .loc_0xD8

	.loc_0x78:
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0xD8
	  lfs       f1, 0x200(r31)
	  lfs       f0, -0x1A28(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0xB8
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0xD8

	.loc_0xB8:
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x1
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0xD8:
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
 * Address:	802D3210
 * Size:	000024
 */
void Game::OniKurage::StateTakeOff::cleanup((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r3, r4
	  stw       r0, 0x14(r1)
	  bl        -0x1D18A4
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802D3234
 * Size:	000060
 */
void Game::OniKurage::StateGround::init((Game::EnemyBase*, Game::StateArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x1A28(r2)
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  stfs      f0, 0x2C4(r4)
	  lwz       r0, 0x1E0(r4)
	  rlwinm    r0,r0,0,30,28
	  stw       r0, 0x1E0(r4)
	  stfs      f0, 0x1D4(r4)
	  stfs      f0, 0x1D8(r4)
	  stfs      f0, 0x1DC(r4)
	  bl        -0x1D18A0
	  mr        r3, r31
	  li        r4, 0x4
	  li        r5, 0
	  bl        -0x1CE278
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802D3294
 * Size:	000138
 */
void Game::OniKurage::StateGround::exec((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x1A28(r2)
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  lfs       f1, 0x200(r4)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  beq-      .loc_0x50
	  lwz       r0, 0x1F4(r31)
	  cmpwi     r0, 0
	  beq-      .loc_0x50
	  lwz       r3, 0xC0(r31)
	  lfs       f1, 0x2C4(r31)
	  lfs       f0, 0x86C(r3)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x58

	.loc_0x50:
	  mr        r3, r31
	  bl        -0x1CE048

	.loc_0x58:
	  lwz       r3, -0x6514(r13)
	  lfs       f1, 0x2C4(r31)
	  lfs       f0, 0x54(r3)
	  fadds     f0, f1, f0
	  stfs      f0, 0x2C4(r31)
	  lwz       r3, 0x188(r31)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x120
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x120
	  lfs       f1, 0x200(r31)
	  lfs       f0, -0x1A28(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0xC0
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x120

	.loc_0xC0:
	  lwz       r0, 0x1F4(r31)
	  cmpwi     r0, 0
	  bne-      .loc_0xDC
	  mr        r3, r31
	  bl        0x3030
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x100

	.loc_0xDC:
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0xB
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x120

	.loc_0x100:
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x9
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x120:
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
 * Address:	802D33CC
 * Size:	000024
 */
void Game::OniKurage::StateGround::cleanup((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r3, r4
	  stw       r0, 0x14(r1)
	  bl        -0x1D1A60
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802D33F0
 * Size:	0000E0
 */
void Game::OniKurage::StateFlyFlick::init((Game::EnemyBase*, Game::StateArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  lfs       f0, -0x1A28(r2)
	  stw       r0, 0x44(r1)
	  li        r0, -0x1
	  stw       r31, 0x3C(r1)
	  mr        r31, r4
	  mr        r3, r31
	  lwz       r4, 0x1E0(r4)
	  ori       r4, r4, 0x4
	  stw       r4, 0x1E0(r31)
	  stw       r0, 0x2C0(r31)
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  bl        -0x1D1A60
	  mr        r3, r31
	  li        r4, 0x2
	  li        r5, 0
	  bl        -0x1CE438
	  mr        r4, r31
	  addi      r3, r1, 0x8
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lis       r4, 0x804B
	  lis       r3, 0x804E
	  subi      r0, r4, 0x5808
	  lfs       f2, 0x8(r1)
	  stw       r0, 0x14(r1)
	  addi      r0, r3, 0x6A78
	  lfs       f1, 0xC(r1)
	  lis       r4, 0x804B
	  lfs       f0, 0x10(r1)
	  lis       r3, 0x804D
	  subi      r4, r4, 0x5814
	  li        r6, 0xD6
	  li        r5, 0
	  stw       r0, 0x14(r1)
	  addi      r0, r3, 0x27D8
	  addi      r3, r1, 0x14
	  stw       r4, 0x20(r1)
	  addi      r4, r1, 0x20
	  stfs      f2, 0x24(r1)
	  stfs      f1, 0x28(r1)
	  stfs      f0, 0x2C(r1)
	  sth       r6, 0x18(r1)
	  stw       r5, 0x1C(r1)
	  stw       r0, 0x14(r1)
	  bl        0xDBACC
	  lwz       r0, 0x44(r1)
	  lwz       r31, 0x3C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802D34D0
 * Size:	00017C
 */
void Game::OniKurage::StateFlyFlick::exec((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stfd      f31, 0x30(r1)
	  psq_st    f31,0x38(r1),0,0
	  stw       r31, 0x2C(r1)
	  stw       r30, 0x28(r1)
	  mr        r31, r4
	  mr        r30, r3
	  mr        r3, r31
	  bl        0x16EC
	  lfs       f2, -0x1A28(r2)
	  mr        r3, r31
	  bl        0x1224
	  lwz       r3, 0x188(r31)
	  fmr       f31, f1
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x15C
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x2
	  bne-      .loc_0xC8
	  lwz       r5, 0xC0(r31)
	  mr        r3, r31
	  lfs       f4, -0x1A0C(r2)
	  li        r4, 0
	  lfs       f1, 0x53C(r5)
	  lfs       f2, 0x4C4(r5)
	  lfs       f3, 0x4EC(r5)
	  bl        -0x1C0428
	  lfs       f0, -0x1A28(r2)
	  mr        r4, r31
	  addi      r3, r1, 0x8
	  stfs      f0, 0x20C(r31)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x8(r1)
	  addi      r5, r1, 0x14
	  lfs       f1, 0xC(r1)
	  li        r4, 0xC
	  lfs       f0, 0x10(r1)
	  li        r6, 0x2
	  stfs      f2, 0x14(r1)
	  lwz       r3, -0x6958(r13)
	  stfs      f1, 0x18(r1)
	  stfs      f0, 0x1C(r1)
	  bl        -0x7FE10
	  b         .loc_0x15C

	.loc_0xC8:
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x15C
	  mr        r3, r31
	  bl        0x1AC4
	  mr.       r5, r3
	  blt-      .loc_0x100
	  lwz       r12, 0x0(r30)
	  mr        r3, r30
	  mr        r4, r31
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x15C

	.loc_0x100:
	  fmr       f1, f31
	  mr        r3, r31
	  li        r4, 0
	  bl        0x1E70
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x13C
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x4
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x15C

	.loc_0x13C:
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x1
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x15C:
	  psq_l     f31,0x38(r1),0,0
	  lwz       r0, 0x44(r1)
	  lfd       f31, 0x30(r1)
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802D364C
 * Size:	000024
 */
void Game::OniKurage::StateFlyFlick::cleanup((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r3, r4
	  stw       r0, 0x14(r1)
	  bl        -0x1D1CE0
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802D3670
 * Size:	0000DC
 */
void Game::OniKurage::StateGroundFlick::init((Game::EnemyBase*,
                                              Game::StateArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  lfs       f0, -0x1A28(r2)
	  stw       r0, 0x44(r1)
	  stw       r31, 0x3C(r1)
	  mr        r31, r4
	  mr        r3, r31
	  stfs      f0, 0x2C4(r4)
	  lwz       r0, 0x1E0(r4)
	  rlwinm    r0,r0,0,30,28
	  stw       r0, 0x1E0(r4)
	  stfs      f0, 0x1D4(r4)
	  stfs      f0, 0x1D8(r4)
	  stfs      f0, 0x1DC(r4)
	  bl        -0x1D1CDC
	  mr        r3, r31
	  li        r4, 0x3
	  li        r5, 0
	  bl        -0x1CE6B4
	  mr        r4, r31
	  addi      r3, r1, 0x8
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lis       r4, 0x804B
	  lis       r3, 0x804E
	  subi      r0, r4, 0x5808
	  lfs       f2, 0x8(r1)
	  stw       r0, 0x14(r1)
	  addi      r0, r3, 0x6A78
	  lfs       f1, 0xC(r1)
	  lis       r4, 0x804B
	  lfs       f0, 0x10(r1)
	  lis       r3, 0x804D
	  subi      r4, r4, 0x5814
	  li        r6, 0xD6
	  li        r5, 0
	  stw       r0, 0x14(r1)
	  addi      r0, r3, 0x27D8
	  addi      r3, r1, 0x14
	  stw       r4, 0x20(r1)
	  addi      r4, r1, 0x20
	  stfs      f2, 0x24(r1)
	  stfs      f1, 0x28(r1)
	  stfs      f0, 0x2C(r1)
	  sth       r6, 0x18(r1)
	  stw       r5, 0x1C(r1)
	  stw       r0, 0x14(r1)
	  bl        0xDB850
	  lwz       r0, 0x44(r1)
	  lwz       r31, 0x3C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802D374C
 * Size:	00018C
 */
void Game::OniKurage::StateGroundFlick::exec((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stw       r31, 0x2C(r1)
	  mr        r31, r4
	  stw       r30, 0x28(r1)
	  mr        r30, r3
	  mr        r3, r31
	  bl        -0x1CE500
	  lfs       f0, -0x19F8(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x3C
	  mr        r3, r31
	  li        r4, 0
	  bl        0x2C38

	.loc_0x3C:
	  lwz       r3, 0x188(r31)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x174
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x2
	  bne-      .loc_0xA0
	  mr        r4, r31
	  addi      r3, r1, 0x8
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x8(r1)
	  addi      r5, r1, 0x14
	  lfs       f1, 0xC(r1)
	  li        r4, 0xC
	  lfs       f0, 0x10(r1)
	  li        r6, 0x2
	  stfs      f2, 0x14(r1)
	  lwz       r3, -0x6958(r13)
	  stfs      f1, 0x18(r1)
	  stfs      f0, 0x1C(r1)
	  bl        -0x80064
	  b         .loc_0x174

	.loc_0xA0:
	  cmplwi    r0, 0x3
	  bne-      .loc_0x114
	  lwz       r5, 0xC0(r31)
	  mr        r3, r31
	  lfs       f4, -0x1A0C(r2)
	  li        r4, 0
	  lfs       f1, 0x514(r5)
	  lfs       f2, 0x4C4(r5)
	  lfs       f3, 0x4EC(r5)
	  bl        -0x1C0080
	  lwz       r5, 0xC0(r31)
	  mr        r3, r31
	  lfs       f4, -0x1A0C(r2)
	  li        r4, 0
	  lfs       f1, 0x514(r5)
	  lfs       f2, 0x4C4(r5)
	  lfs       f3, 0x4EC(r5)
	  bl        -0x1C035C
	  lwz       r5, 0xC0(r31)
	  mr        r3, r31
	  lfs       f4, -0x1A0C(r2)
	  li        r4, 0
	  lfs       f1, 0x53C(r5)
	  lfs       f2, 0x4C4(r5)
	  lfs       f3, 0x4EC(r5)
	  bl        -0x1C0734
	  lfs       f0, -0x1A28(r2)
	  stfs      f0, 0x20C(r31)
	  b         .loc_0x174

	.loc_0x114:
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x174
	  lfs       f1, 0x200(r31)
	  lfs       f0, -0x1A28(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x154
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x174

	.loc_0x154:
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x9
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x174:
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
 * Address:	802D38D8
 * Size:	000024
 */
void Game::OniKurage::StateGroundFlick::cleanup((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r3, r4
	  stw       r0, 0x14(r1)
	  bl        -0x1D1F6C
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802D38FC
 * Size:	000028
 */
void __sinit_OniKurageState_cpp(void)
{
	/*
	.loc_0x0:
	  lis       r4, 0x8051
	  li        r0, -0x1
	  lfs       f0, 0x48B0(r4)
	  lis       r3, 0x804D
	  stw       r0, -0x68B8(r13)
	  stfsu     f0, 0x27A8(r3)
	  stfs      f0, -0x68B4(r13)
	  stfs      f0, 0x4(r3)
	  stfs      f0, 0x8(r3)
	  blr
	*/
}
