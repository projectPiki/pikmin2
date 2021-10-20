

/*
 * --INFO--
 * Address:	80127974
 * Size:	000044
 */
void Game::EnemyAnimatorBase::EnemyAnimatorBase()
{
	/*
	.loc_0x0:
	  lis       r4, 0x804B
	  lfs       f1, -0x63C4(r2)
	  subi      r0, r4, 0x23A8
	  lfs       f0, -0x63C0(r2)
	  stw       r0, 0x0(r3)
	  li        r0, 0
	  stfs      f1, 0x4(r3)
	  stfs      f0, 0x8(r3)
	  stb       r0, 0xC(r3)
	  stb       r0, 0xD(r3)
	  stb       r0, 0xE(r3)
	  stb       r0, 0xF(r3)
	  stb       r0, 0xC(r3)
	  stb       r0, 0xD(r3)
	  stb       r0, 0xE(r3)
	  stb       r0, 0xF(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801279B8
 * Size:	000124
 */
void Game::EnemyAnimatorBase::animate(float)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stfd      f31, 0x10(r1)
	  psq_st    f31,0x18(r1),0,0
	  stw       r31, 0xC(r1)
	  lwz       r4, 0xC(r3)
	  fmr       f31, f1
	  mr        r31, r3
	  rlwinm.   r0,r4,0,31,31
	  bne-      .loc_0xE4
	  rlwinm.   r0,r4,0,30,30
	  beq-      .loc_0x78
	  lfs       f2, 0x8(r31)
	  lfs       f1, -0x63BC(r2)
	  lfs       f0, -0x63B8(r2)
	  fmuls     f1, f2, f1
	  stfs      f1, 0x8(r31)
	  lfs       f1, 0x8(r31)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0xB4
	  lfs       f0, -0x63B4(r2)
	  stfs      f0, 0x8(r31)
	  lwz       r0, 0xC(r31)
	  rlwinm    r0,r0,0,30,28
	  stw       r0, 0xC(r31)
	  lwz       r0, 0xC(r31)
	  ori       r0, r0, 0x1
	  stw       r0, 0xC(r31)
	  b         .loc_0xB4

	.loc_0x78:
	  rlwinm.   r0,r4,0,29,29
	  beq-      .loc_0xB4
	  lfs       f2, 0x8(r31)
	  lfs       f1, -0x63B0(r2)
	  lfs       f0, -0x63C0(r2)
	  fmuls     f1, f2, f1
	  stfs      f1, 0x8(r31)
	  lfs       f1, 0x8(r31)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0xB4
	  stfs      f0, 0x8(r31)
	  lwz       r0, 0xC(r31)
	  rlwinm    r0,r0,0,0,29
	  stw       r0, 0xC(r31)
	  stfs      f0, 0x8(r31)

	.loc_0xB4:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  lfs       f0, 0x8(r31)
	  lwz       r12, 0xC(r12)
	  fmuls     f1, f31, f0
	  mtctr     r12
	  bctrl
	  b         .loc_0x108

	.loc_0xE4:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  lfs       f1, -0x63B4(r2)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl

	.loc_0x108:
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
 * Address:	80127ADC
 * Size:	000124
 */
void Game::EnemyAnimatorBase::animate(int, float)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stfd      f31, 0x10(r1)
	  psq_st    f31,0x18(r1),0,0
	  stw       r31, 0xC(r1)
	  lwz       r5, 0xC(r3)
	  fmr       f31, f1
	  mr        r31, r3
	  rlwinm.   r0,r5,0,31,31
	  bne-      .loc_0xE4
	  rlwinm.   r0,r5,0,30,30
	  beq-      .loc_0x78
	  lfs       f2, 0x8(r31)
	  lfs       f1, -0x63BC(r2)
	  lfs       f0, -0x63B8(r2)
	  fmuls     f1, f2, f1
	  stfs      f1, 0x8(r31)
	  lfs       f1, 0x8(r31)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0xB4
	  lfs       f0, -0x63B4(r2)
	  stfs      f0, 0x8(r31)
	  lwz       r0, 0xC(r31)
	  rlwinm    r0,r0,0,30,28
	  stw       r0, 0xC(r31)
	  lwz       r0, 0xC(r31)
	  ori       r0, r0, 0x1
	  stw       r0, 0xC(r31)
	  b         .loc_0xB4

	.loc_0x78:
	  rlwinm.   r0,r5,0,29,29
	  beq-      .loc_0xB4
	  lfs       f2, 0x8(r31)
	  lfs       f1, -0x63B0(r2)
	  lfs       f0, -0x63C0(r2)
	  fmuls     f1, f2, f1
	  stfs      f1, 0x8(r31)
	  lfs       f1, 0x8(r31)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0xB4
	  stfs      f0, 0x8(r31)
	  lwz       r0, 0xC(r31)
	  rlwinm    r0,r0,0,0,29
	  stw       r0, 0xC(r31)
	  stfs      f0, 0x8(r31)

	.loc_0xB4:
	  lwz       r12, 0x0(r31)
	  mr        r3, r31
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  lfs       f0, 0x8(r31)
	  lwz       r12, 0xC(r12)
	  fmuls     f1, f31, f0
	  mtctr     r12
	  bctrl
	  b         .loc_0x108

	.loc_0xE4:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  lfs       f1, -0x63B4(r2)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl

	.loc_0x108:
	  psq_l     f31,0x18(r1),0,0
	  lwz       r0, 0x24(r1)
	  lfd       f31, 0x10(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}
