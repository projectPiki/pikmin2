

/*
 * --INFO--
 * Address:	8012E510
 * Size:	000134
 */
void Game::EnemyEffectNodeHamon::__ct(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  lis       r4, 0x804F
	  subi      r0, r4, 0x4AD8
	  lis       r5, 0x804F
	  stmw      r25, 0x14(r1)
	  lis       r4, 0x804E
	  addi      r31, r4, 0x698C
	  lis       r12, 0x804B
	  lis       r4, 0x804E
	  lis       r6, 0x804A
	  addi      r11, r4, 0x6940
	  subi      r29, r2, 0x6238
	  subi      r30, r6, 0x1D84
	  lis       r28, 0x804B
	  lis       r4, 0x804F
	  subi      r8, r5, 0x7ADC
	  subi      r5, r4, 0x7B28
	  subi      r12, r12, 0x798
	  subi      r4, r28, 0x77C
	  lis       r10, 0x804B
	  subi      r28, r10, 0x5808
	  lis       r9, 0x804F
	  stw       r0, 0x0(r3)
	  li        r0, 0
	  lis       r7, 0x804F
	  addi      r27, r31, 0x14
	  stw       r0, 0x10(r3)
	  addi      r26, r11, 0x14
	  addi      r10, r3, 0x4C
	  li        r6, 0x58
	  stw       r0, 0xC(r3)
	  stw       r0, 0x8(r3)
	  stw       r0, 0x4(r3)
	  stw       r29, 0x14(r3)
	  subi      r29, r7, 0x7B3C
	  addi      r7, r8, 0x14
	  stw       r4, 0x0(r3)
	  subi      r4, r9, 0x7B50
	  li        r9, 0x57
	  stw       r12, 0x0(r3)
	  li        r12, 0x2B2
	  stw       r28, 0x18(r3)
	  stw       r4, 0x18(r3)
	  addi      r4, r5, 0x14
	  stw       r28, 0x1C(r3)
	  stw       r29, 0x1C(r3)
	  stw       r28, 0x20(r3)
	  stw       r30, 0x24(r3)
	  stw       r31, 0x20(r3)
	  stw       r27, 0x24(r3)
	  stw       r0, 0x28(r3)
	  sth       r12, 0x2C(r3)
	  stb       r0, 0x2E(r3)
	  stw       r11, 0x20(r3)
	  stw       r26, 0x24(r3)
	  stw       r10, 0x30(r3)
	  sth       r9, 0x2C(r3)
	  stw       r8, 0x20(r3)
	  stw       r7, 0x24(r3)
	  stw       r28, 0x34(r3)
	  stw       r30, 0x38(r3)
	  stw       r31, 0x34(r3)
	  stw       r27, 0x38(r3)
	  stw       r0, 0x3C(r3)
	  sth       r12, 0x40(r3)
	  stb       r0, 0x42(r3)
	  stw       r11, 0x34(r3)
	  stw       r26, 0x38(r3)
	  stw       r10, 0x44(r3)
	  sth       r6, 0x40(r3)
	  stw       r5, 0x34(r3)
	  stw       r4, 0x38(r3)
	  stw       r0, 0x48(r3)
	  stb       r0, 0x58(r3)
	  lmw       r25, 0x14(r1)
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000124
 */
void efx::TEnemyHamon::__dt(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000118
 */
void efx::TEnemyHamonChasePos::__dt(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8012E644
 * Size:	00009C
 */
void efx::TEnemyHamonMInd::__dt(void)
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
	  lis       r3, 0x804F
	  subi      r3, r3, 0x7B28
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
	  bl        -0x9EA14

	.loc_0x70:
	  extsh.    r0, r31
	  ble-      .loc_0x80
	  mr        r3, r30
	  bl        -0x10A60C

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
 * Address:	8012E6E0
 * Size:	00009C
 */
void efx::TEnemyHamonM::__dt(void)
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
	  lis       r3, 0x804F
	  subi      r3, r3, 0x7ADC
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
	  bl        -0x9EAB0

	.loc_0x70:
	  extsh.    r0, r31
	  ble-      .loc_0x80
	  mr        r3, r30
	  bl        -0x10A6A8

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
 * Address:	8012E77C
 * Size:	000060
 */
void Game::EnemyEffectNodeBase::__dt(void)
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
	  beq-      .loc_0x44
	  lis       r5, 0x804B
	  li        r4, 0
	  subi      r0, r5, 0x77C
	  stw       r0, 0x0(r30)
	  bl        0x2E2DDC
	  extsh.    r0, r31
	  ble-      .loc_0x44
	  mr        r3, r30
	  bl        -0x10A708

	.loc_0x44:
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
 * Address:	8012E7DC
 * Size:	00011C
 */
void Game::EnemyEffectNodeHamon::create((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x60(r1)
	  mflr      r0
	  stw       r0, 0x64(r1)
	  stfd      f31, 0x50(r1)
	  psq_st    f31,0x58(r1),0,0
	  stw       r31, 0x4C(r1)
	  stw       r30, 0x48(r1)
	  stw       r29, 0x44(r1)
	  mr        r30, r4
	  mr        r29, r3
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x8C(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xF8
	  mr        r3, r30
	  lfs       f31, 0x1F8(r30)
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x258(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r30
	  mr        r31, r3
	  lwz       r12, 0x0(r30)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x8(r1)
	  lis       r3, 0x804B
	  lwz       r7, 0xC(r1)
	  subi      r5, r3, 0x5814
	  lwz       r6, 0x10(r1)
	  lis       r3, 0x804B
	  stw       r0, 0x14(r1)
	  subi      r0, r3, 0x5820
	  addi      r3, r29, 0x18
	  addi      r4, r1, 0x20
	  stw       r7, 0x18(r1)
	  lfs       f2, 0x14(r1)
	  stw       r6, 0x1C(r1)
	  lfs       f1, 0x18(r1)
	  stw       r5, 0x20(r1)
	  lfs       f0, 0x1C(r1)
	  stfs      f2, 0x24(r1)
	  stfs      f1, 0x28(r1)
	  stfs      f0, 0x2C(r1)
	  stw       r0, 0x20(r1)
	  stw       r31, 0x30(r1)
	  stfs      f31, 0x34(r1)
	  lwz       r12, 0x18(r29)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x280(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x48(r29)

	.loc_0xF8:
	  psq_l     f31,0x58(r1),0,0
	  lwz       r0, 0x64(r1)
	  lfd       f31, 0x50(r1)
	  lwz       r31, 0x4C(r1)
	  lwz       r30, 0x48(r1)
	  lwz       r29, 0x44(r1)
	  mtlr      r0
	  addi      r1, r1, 0x60
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8012E8F8
 * Size:	00002C
 */
void Game::EnemyEffectNodeHamon::fade((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwzu      r12, 0x18(r3)
	  lwz       r12, 0x10(r12)
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
 * Address:	8012E924
 * Size:	000044
 */
void efx::TEnemyHamon::fade(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  addi      r3, r31, 0x4
	  lwz       r12, 0x4(r31)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  li        r0, 0
	  stb       r0, 0x40(r31)
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8012E968
 * Size:	000050
 */
void efx::TEnemyHamonChasePos::fade(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  addi      r3, r31, 0x4
	  lwz       r12, 0x4(r31)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  addi      r3, r31, 0x18
	  lwz       r12, 0x18(r31)
	  lwz       r12, 0x10(r12)
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
 * Address:	8012E9B8
 * Size:	00002C
 */
void Game::EnemyEffectNodeHamon::forceKill((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwzu      r12, 0x18(r3)
	  lwz       r12, 0xC(r12)
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
 * Address:	8012E9E4
 * Size:	000044
 */
void efx::TEnemyHamon::forceKill(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  addi      r3, r31, 0x4
	  lwz       r12, 0x4(r31)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  li        r0, 0
	  stb       r0, 0x40(r31)
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8012EA28
 * Size:	000050
 */
void efx::TEnemyHamonChasePos::forceKill(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  addi      r3, r31, 0x4
	  lwz       r12, 0x4(r31)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  addi      r3, r31, 0x18
	  lwz       r12, 0x18(r31)
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
 * Address:	8012EA78
 * Size:	00004C
 */
void Game::EnemyEffectNodeHamon::update((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  mr        r3, r4
	  addi      r4, r1, 0x8
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x244(r12)
	  mtctr     r12
	  bctrl
	  addi      r3, r31, 0x18
	  addi      r4, r1, 0x8
	  bl        0x29AF1C
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8012EAC4
 * Size:	000160
 */
void Game::EnemyEffectNodeHamon::__dt(void)
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
	  mr.       r29, r3
	  beq-      .loc_0x140
	  lis       r3, 0x804B
	  addic.    r0, r29, 0x18
	  subi      r0, r3, 0x798
	  stw       r0, 0x0(r29)
	  beq-      .loc_0x110
	  lis       r3, 0x804F
	  addic.    r31, r29, 0x1C
	  subi      r0, r3, 0x7B50
	  stw       r0, 0x18(r29)
	  beq-      .loc_0x110
	  lis       r3, 0x804F
	  addic.    r4, r31, 0x18
	  subi      r0, r3, 0x7B3C
	  stw       r0, 0x1C(r29)
	  beq-      .loc_0xB4
	  lis       r3, 0x804F
	  cmplwi    r4, 0
	  subi      r3, r3, 0x7B28
	  stw       r3, 0x34(r29)
	  addi      r0, r3, 0x14
	  stw       r0, 0x38(r29)
	  beq-      .loc_0xB4
	  lis       r3, 0x804E
	  addi      r3, r3, 0x6940
	  stw       r3, 0x34(r29)
	  addi      r0, r3, 0x14
	  stw       r0, 0x38(r29)
	  beq-      .loc_0xB4
	  lis       r4, 0x804E
	  addi      r3, r31, 0x1C
	  addi      r5, r4, 0x698C
	  li        r4, 0
	  stw       r5, 0x34(r29)
	  addi      r0, r5, 0x14
	  stw       r0, 0x38(r29)
	  bl        -0x9EED8

	.loc_0xB4:
	  addic.    r0, r31, 0x4
	  beq-      .loc_0x110
	  lis       r3, 0x804F
	  cmplwi    r0, 0
	  subi      r3, r3, 0x7ADC
	  stw       r3, 0x20(r29)
	  addi      r0, r3, 0x14
	  stw       r0, 0x24(r29)
	  beq-      .loc_0x110
	  lis       r3, 0x804E
	  addi      r3, r3, 0x6940
	  stw       r3, 0x20(r29)
	  addi      r0, r3, 0x14
	  stw       r0, 0x24(r29)
	  beq-      .loc_0x110
	  lis       r4, 0x804E
	  addi      r3, r31, 0x8
	  addi      r5, r4, 0x698C
	  li        r4, 0
	  stw       r5, 0x20(r29)
	  addi      r0, r5, 0x14
	  stw       r0, 0x24(r29)
	  bl        -0x9EF34

	.loc_0x110:
	  cmplwi    r29, 0
	  beq-      .loc_0x130
	  lis       r4, 0x804B
	  mr        r3, r29
	  subi      r0, r4, 0x77C
	  li        r4, 0
	  stw       r0, 0x0(r29)
	  bl        0x2E2998

	.loc_0x130:
	  extsh.    r0, r30
	  ble-      .loc_0x140
	  mr        r3, r29
	  bl        -0x10AB4C

	.loc_0x140:
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
