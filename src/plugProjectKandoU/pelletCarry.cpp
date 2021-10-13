

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
 * Address:	80234EF8
 * Size:	000030
 */
void Game::PelletCarry::__ct(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        .loc_0x30
	  lwz       r0, 0x14(r1)
	  mr        r3, r31
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr

	.loc_0x30:
	*/
}

/*
 * --INFO--
 * Address:	80234F28
 * Size:	000028
 */
void Game::PelletCarry::reset(void)
{
	/*
	.loc_0x0:
	  lis       r4, 0x1
	  lfs       f0, -0x3FB0(r2)
	  subi      r0, r4, 0x1
	  sth       r0, 0x0(r3)
	  stfs      f0, 0x8(r3)
	  stfs      f0, 0xC(r3)
	  stfs      f0, 0x10(r3)
	  stfs      f0, 0x14(r3)
	  stfs      f0, 0x4(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80234F50
 * Size:	000084
 */
void pull__Q24Game11PelletCarryFUsR10Vector3<float> f(void)
{
	/*
	.loc_0x0:
	  lhz       r6, 0x0(r3)
	  cmplwi    r6, 0xFFFF
	  beq-      .loc_0x18
	  rlwinm    r0,r4,0,16,31
	  cmplw     r6, r0
	  bne-      .loc_0x40

	.loc_0x18:
	  sth       r4, 0x0(r3)
	  lfs       f0, 0x0(r5)
	  stfs      f0, 0x8(r3)
	  lfs       f0, 0x4(r5)
	  stfs      f0, 0xC(r3)
	  lfs       f0, 0x8(r5)
	  stfs      f0, 0x10(r3)
	  stfs      f1, 0x4(r3)
	  li        r3, 0x1
	  blr

	.loc_0x40:
	  lfs       f0, 0x4(r3)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x7C
	  sth       r4, 0x0(r3)
	  lfs       f0, -0x3FAC(r2)
	  lfs       f2, 0x0(r5)
	  stfs      f2, 0x8(r3)
	  lfs       f2, 0x4(r5)
	  stfs      f2, 0xC(r3)
	  lfs       f2, 0x8(r5)
	  stfs      f2, 0x10(r3)
	  stfs      f1, 0x4(r3)
	  stfs      f0, 0x14(r3)
	  li        r3, 0x1
	  blr

	.loc_0x7C:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80234FD4
 * Size:	000034
 */
void Game::PelletCarry::pullable((unsigned short, float))
{
	/*
	.loc_0x0:
	  lhz       r5, 0x0(r3)
	  cmplwi    r5, 0xFFFF
	  beq-      .loc_0x18
	  rlwinm    r0,r4,0,16,31
	  cmplw     r5, r0
	  bne-      .loc_0x20

	.loc_0x18:
	  li        r3, 0x1
	  blr

	.loc_0x20:
	  lfs       f0, 0x4(r3)
	  fcmpo     cr0, f1, f0
	  mfcr      r0
	  rlwinm    r3,r0,2,31,31
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80235008
 * Size:	000034
 */
void Game::PelletCarry::giveup((unsigned short))
{
	/*
	.loc_0x0:
	  lhz       r5, 0x0(r3)
	  rlwinm    r0,r4,0,16,31
	  cmplw     r5, r0
	  bnelr-
	  lis       r4, 0x1
	  lfs       f0, -0x3FB0(r2)
	  subi      r0, r4, 0x1
	  sth       r0, 0x0(r3)
	  stfs      f0, 0x8(r3)
	  stfs      f0, 0xC(r3)
	  stfs      f0, 0x10(r3)
	  stfs      f0, 0x4(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8023503C
 * Size:	000064
 */
void frameWork__Q24Game11PelletCarryFR10Vector3<float>(void)
{
	/*
	.loc_0x0:
	  lhz       r0, 0x0(r3)
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0x5C
	  lfs       f2, 0x14(r3)
	  lfs       f1, -0x3FB0(r2)
	  fcmpo     cr0, f2, f1
	  ble-      .loc_0x3C
	  lwz       r5, -0x6514(r13)
	  lfs       f0, 0x54(r5)
	  fsubs     f0, f2, f0
	  stfs      f0, 0x14(r3)
	  stfs      f1, 0x0(r4)
	  stfs      f1, 0x4(r4)
	  stfs      f1, 0x8(r4)
	  b         .loc_0x54

	.loc_0x3C:
	  lfs       f0, 0x8(r3)
	  stfs      f0, 0x0(r4)
	  lfs       f0, 0xC(r3)
	  stfs      f0, 0x4(r4)
	  lfs       f0, 0x10(r3)
	  stfs      f0, 0x8(r4)

	.loc_0x54:
	  li        r3, 0x1
	  blr

	.loc_0x5C:
	  li        r3, 0
	  blr
	*/
}
