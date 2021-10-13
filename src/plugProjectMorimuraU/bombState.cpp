

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
 * Address:	803493F8
 * Size:	000078
 */
void Game::Bomb::FSM::init((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r4, 0x2
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x218BAC
	  li        r3, 0x14
	  bl        -0x325574
	  mr.       r4, r3
	  beq-      .loc_0x38
	  li        r4, 0
	  bl        .loc_0x78
	  mr        r4, r3

	.loc_0x38:
	  mr        r3, r31
	  bl        -0x218B2C
	  li        r3, 0x14
	  bl        -0x325598
	  mr.       r4, r3
	  beq-      .loc_0x5C
	  li        r4, 0x1
	  bl        0x204
	  mr        r4, r3

	.loc_0x5C:
	  mr        r3, r31
	  bl        -0x218B50
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr

	.loc_0x78:
	*/
}

/*
 * --INFO--
 * Address:	80349470
 * Size:	00003C
 */
void Game::Bomb::StateWait::__ct((int))
{
	/*
	.loc_0x0:
	  lis       r5, 0x804B
	  lis       r6, 0x804E
	  subi      r0, r5, 0x65C
	  lis       r5, 0x804E
	  stw       r0, 0x0(r3)
	  li        r7, 0
	  subi      r6, r6, 0x45F8
	  subi      r5, r5, 0x461C
	  stw       r4, 0x4(r3)
	  subi      r0, r2, 0x60
	  stw       r7, 0x8(r3)
	  stw       r6, 0x0(r3)
	  stw       r5, 0x0(r3)
	  stw       r0, 0xC(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803494AC
 * Size:	00005C
 */
void Game::Bomb::StateWait::init((Game::EnemyBase*, Game::StateArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r5, 0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  li        r4, 0
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  mr        r3, r31
	  bl        -0x2444D0
	  mr        r3, r31
	  bl        -0x2421FC
	  mr        r3, r31
	  bl        -0x247B68
	  li        r0, 0
	  stw       r0, 0x10(r30)
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
 * Address:	80349508
 * Size:	000148
 */
void Game::Bomb::StateWait::exec((Game::EnemyBase*))
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
	  lbz       r0, 0x2BC(r4)
	  cmplwi    r0, 0
	  beq-      .loc_0x58
	  lwz       r0, 0xB8(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x58
	  lwz       r3, 0x10(r30)
	  addi      r0, r3, 0x1
	  stw       r0, 0x10(r30)
	  lwz       r0, 0x10(r30)
	  cmpwi     r0, 0xC8
	  ble-      .loc_0x58
	  mr        r3, r31
	  li        r4, 0
	  bl        -0x20E46C

	.loc_0x58:
	  mr        r3, r31
	  bl        -0x24222C
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x9C
	  lwz       r4, -0x6514(r13)
	  mr        r3, r31
	  lfs       f2, -0x58(r2)
	  lfs       f1, 0x54(r4)
	  bl        -0x243554
	  lwz       r3, 0x28C(r31)
	  li        r4, 0x5009
	  li        r5, 0
	  lwz       r12, 0x28(r3)
	  lwz       r12, 0x88(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0xD4

	.loc_0x9C:
	  mr        r3, r31
	  bl        0x1C0C
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xD4
	  lwz       r0, 0x1E0(r31)
	  mr        r3, r31
	  oris      r0, r0, 0x20
	  stw       r0, 0x1E0(r31)
	  bl        -0x2423C0
	  lwz       r0, 0x1E0(r31)
	  mr        r3, r31
	  rlwinm    r0,r0,0,26,24
	  stw       r0, 0x1E0(r31)
	  bl        -0x247C0C

	.loc_0xD4:
	  lwz       r3, 0x188(r31)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x130
	  lwz       r0, 0x1C(r3)
	  cmpwi     r0, 0x3E8
	  beq-      .loc_0x110
	  bge-      .loc_0x130
	  cmpwi     r0, 0x2
	  beq-      .loc_0x100
	  b         .loc_0x130

	.loc_0x100:
	  lwz       r0, 0x1E0(r31)
	  rlwinm    r0,r0,0,11,9
	  stw       r0, 0x1E0(r31)
	  b         .loc_0x130

	.loc_0x110:
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x1
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x130:
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
 * Address:	80349650
 * Size:	00003C
 */
void Game::Bomb::StateBomb::__ct((int))
{
	/*
	.loc_0x0:
	  lis       r5, 0x804B
	  lis       r6, 0x804E
	  subi      r0, r5, 0x65C
	  lis       r5, 0x804E
	  stw       r0, 0x0(r3)
	  li        r7, 0
	  subi      r6, r6, 0x45F8
	  subi      r5, r5, 0x4640
	  stw       r4, 0x4(r3)
	  subi      r0, r2, 0x54
	  stw       r7, 0x8(r3)
	  stw       r6, 0x0(r3)
	  stw       r5, 0x0(r3)
	  stw       r0, 0xC(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8034968C
 * Size:	000060
 */
void Game::Bomb::StateBomb::init((Game::EnemyBase*, Game::StateArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r5, 0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  mr        r3, r31
	  lwz       r0, 0x1E0(r4)
	  li        r4, 0x1
	  rlwinm    r0,r0,0,26,24
	  stw       r0, 0x1E0(r31)
	  bl        -0x2446BC
	  mr        r3, r31
	  bl        -0x247CFC
	  li        r0, 0
	  stw       r0, 0x10(r30)
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
 * Address:	803496EC
 * Size:	0005C4
 */
void Game::Bomb::StateBomb::exec((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x1F0(r1)
	  mflr      r0
	  stw       r0, 0x1F4(r1)
	  stfd      f31, 0x1E0(r1)
	  psq_st    f31,0x1E8(r1),0,0
	  stfd      f30, 0x1D0(r1)
	  psq_st    f30,0x1D8(r1),0,0
	  stfd      f29, 0x1C0(r1)
	  psq_st    f29,0x1C8(r1),0,0
	  stfd      f28, 0x1B0(r1)
	  psq_st    f28,0x1B8(r1),0,0
	  stfd      f27, 0x1A0(r1)
	  psq_st    f27,0x1A8(r1),0,0
	  stfd      f26, 0x190(r1)
	  psq_st    f26,0x198(r1),0,0
	  stfd      f25, 0x180(r1)
	  psq_st    f25,0x188(r1),0,0
	  stfd      f24, 0x170(r1)
	  psq_st    f24,0x178(r1),0,0
	  stmw      r23, 0x14C(r1)
	  mr        r29, r4
	  mr        r23, r3
	  lwz       r3, 0x28C(r4)
	  li        r4, 0x5009
	  li        r5, 0
	  lwz       r12, 0x28(r3)
	  lwz       r12, 0x88(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, -0x6514(r13)
	  mr        r3, r29
	  lfs       f2, -0x58(r2)
	  lfs       f1, 0x54(r4)
	  bl        -0x243744
	  lfs       f1, 0x200(r29)
	  lfs       f0, -0x4C(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x570
	  lwz       r3, 0x10(r23)
	  addi      r0, r3, 0x1
	  stw       r0, 0x10(r23)
	  lwz       r0, 0x10(r23)
	  cmpwi     r0, 0xA
	  blt-      .loc_0x570
	  li        r0, 0
	  mr        r3, r29
	  stw       r0, 0x10(r23)
	  bl        -0x247E30
	  mr        r3, r29
	  addi      r4, r1, 0x48
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x204(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r29
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x258(r12)
	  mtctr     r12
	  bctrl
	  lwz       r6, 0x48(r1)
	  lis       r4, 0x804B
	  subi      r25, r4, 0x5808
	  lwz       r5, 0x4C(r1)
	  lwz       r0, 0x50(r1)
	  lis       r4, 0x804B
	  stw       r6, 0x2C(r1)
	  lis       r27, 0x804E
	  subi      r31, r4, 0x5814
	  lfs       f0, -0x58(r2)
	  li        r10, 0
	  stw       r5, 0x30(r1)
	  lfs       f3, 0x2C(r1)
	  lis       r24, 0x804B
	  stw       r0, 0x34(r1)
	  lis       r26, 0x804E
	  lfs       f2, 0x30(r1)
	  lis       r9, 0x804E
	  lfs       f1, 0x34(r1)
	  lis       r4, 0x804E
	  li        r28, 0x8
	  li        r30, 0x9
	  li        r12, 0xA
	  li        r11, 0xB
	  li        r8, 0xC
	  li        r7, 0xD
	  li        r6, 0xE
	  li        r5, 0xF
	  stw       r25, 0xC0(r1)
	  addi      r27, r27, 0x6A3C
	  subi      r24, r24, 0x5820
	  subi      r26, r26, 0x4654
	  stw       r25, 0xDC(r1)
	  subi      r9, r9, 0x4668
	  subi      r0, r4, 0x467C
	  addi      r23, r1, 0xC0
	  stw       r31, 0xA4(r1)
	  addi      r31, r1, 0xDC
	  addi      r4, r1, 0xA4
	  stw       r25, 0xBC(r1)
	  stw       r27, 0xC0(r1)
	  stw       r27, 0xDC(r1)
	  stw       r3, 0xB4(r1)
	  mr        r3, r23
	  stfs      f3, 0xA8(r1)
	  stfs      f2, 0xAC(r1)
	  stfs      f1, 0xB0(r1)
	  stw       r24, 0xA4(r1)
	  stfs      f0, 0xB8(r1)
	  stw       r26, 0xBC(r1)
	  sth       r28, 0xC4(r1)
	  sth       r30, 0xC6(r1)
	  sth       r12, 0xC8(r1)
	  sth       r11, 0xCA(r1)
	  stw       r10, 0xCC(r1)
	  stw       r10, 0xD0(r1)
	  stw       r10, 0xD4(r1)
	  stw       r10, 0xD8(r1)
	  stw       r9, 0xC0(r1)
	  sth       r8, 0xE0(r1)
	  sth       r7, 0xE2(r1)
	  sth       r6, 0xE4(r1)
	  sth       r5, 0xE6(r1)
	  stw       r10, 0xE8(r1)
	  stw       r10, 0xEC(r1)
	  stw       r10, 0xF0(r1)
	  stw       r10, 0xF4(r1)
	  stw       r0, 0xDC(r1)
	  lwz       r12, 0x0(r23)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x230
	  mr        r3, r31
	  addi      r4, r1, 0xA4
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl

	.loc_0x230:
	  lwz       r3, 0x2D4(r29)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x28C(r29)
	  li        r4, 0x5800
	  li        r5, 0
	  lwz       r12, 0x28(r3)
	  lwz       r12, 0x88(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x280(r29)
	  cmplwi    r0, 0
	  beq-      .loc_0x274
	  mr        r3, r29
	  bl        0x17D4

	.loc_0x274:
	  lwz       r3, -0x6960(r13)
	  addi      r5, r1, 0x48
	  li        r4, 0xC
	  li        r6, 0x2
	  bl        -0xF7734
	  lwz       r3, -0x6958(r13)
	  addi      r5, r1, 0x48
	  li        r4, 0xF
	  li        r6, 0x2
	  bl        -0xF6204
	  mr        r4, r29
	  addi      r3, r1, 0x20
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r5, 0xC0(r29)
	  addi      r3, r1, 0x84
	  lfs       f29, 0x20(r1)
	  addi      r4, r1, 0x38
	  lfs       f0, 0x844(r5)
	  lfs       f31, 0x24(r1)
	  lfs       f30, 0x28(r1)
	  stfs      f29, 0x38(r1)
	  fadds     f28, f31, f0
	  fsubs     f27, f31, f0
	  stfs      f31, 0x3C(r1)
	  stfs      f30, 0x40(r1)
	  lfs       f0, 0x5B4(r5)
	  stfs      f0, 0x44(r1)
	  bl        -0x11B638
	  li        r0, 0x1
	  addi      r3, r1, 0xF8
	  stw       r0, 0x98(r1)
	  addi      r4, r1, 0x84
	  bl        -0x11B60C
	  addi      r3, r1, 0xF8
	  bl        -0x11B598
	  lis       r3, 0x8051
	  addi      r31, r3, 0x41E4
	  b         .loc_0x554

	.loc_0x318:
	  addi      r3, r1, 0xF8
	  bl        -0x11B4C4
	  lwz       r12, 0x0(r3)
	  mr        r30, r3
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x54C
	  cmplw     r30, r29
	  beq-      .loc_0x54C
	  mr        r4, r30
	  addi      r3, r1, 0x14
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, 0x18(r1)
	  fcmpo     cr0, f0, f28
	  bgt-      .loc_0x54C
	  fcmpo     cr0, f0, f27
	  blt-      .loc_0x54C
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x7C(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x400
	  lwz       r6, 0xC0(r29)
	  lis       r5, 0x804B
	  lis       r4, 0x804B
	  lis       r3, 0x8051
	  lfs       f0, 0x81C(r6)
	  subi      r0, r5, 0x5D00
	  lfs       f1, -0x58(r2)
	  addi      r4, r4, 0x4974
	  stw       r0, 0x6C(r1)
	  fmuls     f3, f1, f0
	  lfs       f2, 0x41E4(r3)
	  lfs       f1, 0x4(r31)
	  lis       r3, 0x804B
	  lfs       f0, 0x8(r31)
	  addi      r0, r3, 0x492C
	  stw       r4, 0x6C(r1)
	  mr        r3, r30
	  addi      r4, r1, 0x6C
	  stw       r29, 0x70(r1)
	  stfs      f3, 0x74(r1)
	  stfs      f2, 0x78(r1)
	  stfs      f1, 0x7C(r1)
	  stfs      f0, 0x80(r1)
	  stw       r0, 0x6C(r1)
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x1A4(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x54C

	.loc_0x400:
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x438
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x54C

	.loc_0x438:
	  lwz       r0, 0x2CC(r29)
	  cmplwi    r0, 0
	  mr        r23, r0
	  bne-      .loc_0x44C
	  mr        r23, r29

	.loc_0x44C:
	  mr        r4, r30
	  addi      r3, r1, 0x8
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f1, 0xC(r1)
	  lfs       f26, 0x8(r1)
	  fsubs     f1, f1, f31
	  lfs       f25, 0x10(r1)
	  fsubs     f26, f26, f29
	  lfs       f0, -0x4C(r2)
	  fsubs     f25, f25, f30
	  fmuls     f1, f1, f1
	  fmuls     f2, f25, f25
	  fmadds    f1, f26, f26, f1
	  fadds     f1, f2, f1
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x4A8
	  ble-      .loc_0x4AC
	  fsqrte    f0, f1
	  fmuls     f1, f0, f1
	  b         .loc_0x4AC

	.loc_0x4A8:
	  fmr       f1, f0

	.loc_0x4AC:
	  lfs       f0, -0x4C(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x4C8
	  lfs       f0, -0x58(r2)
	  fdivs     f0, f0, f1
	  fmuls     f26, f26, f0
	  fmuls     f25, f25, f0

	.loc_0x4C8:
	  mr        r3, r30
	  lfs       f24, -0x48(r2)
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x4EC
	  lfs       f24, -0x44(r2)

	.loc_0x4EC:
	  lwz       r6, 0xC0(r29)
	  lis       r5, 0x804B
	  lis       r4, 0x804B
	  lis       r3, 0x804B
	  lfs       f0, 0x604(r6)
	  subi      r0, r5, 0x5D00
	  fmuls     f26, f26, f24
	  addi      r4, r4, 0x4974
	  stw       r0, 0x54(r1)
	  fmuls     f25, f25, f24
	  addi      r0, r3, 0x492C
	  mr        r3, r30
	  stw       r4, 0x54(r1)
	  addi      r4, r1, 0x54
	  stw       r23, 0x58(r1)
	  stfs      f0, 0x5C(r1)
	  stfs      f26, 0x60(r1)
	  stfs      f24, 0x64(r1)
	  stfs      f25, 0x68(r1)
	  stw       r0, 0x54(r1)
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x1A4(r12)
	  mtctr     r12
	  bctrl

	.loc_0x54C:
	  addi      r3, r1, 0xF8
	  bl        -0x11B73C

	.loc_0x554:
	  addi      r3, r1, 0xF8
	  bl        -0x11B710
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x318
	  mr        r3, r29
	  li        r4, 0
	  bl        -0x20EB68

	.loc_0x570:
	  psq_l     f31,0x1E8(r1),0,0
	  lfd       f31, 0x1E0(r1)
	  psq_l     f30,0x1D8(r1),0,0
	  lfd       f30, 0x1D0(r1)
	  psq_l     f29,0x1C8(r1),0,0
	  lfd       f29, 0x1C0(r1)
	  psq_l     f28,0x1B8(r1),0,0
	  lfd       f28, 0x1B0(r1)
	  psq_l     f27,0x1A8(r1),0,0
	  lfd       f27, 0x1A0(r1)
	  psq_l     f26,0x198(r1),0,0
	  lfd       f26, 0x190(r1)
	  psq_l     f25,0x188(r1),0,0
	  lfd       f25, 0x180(r1)
	  psq_l     f24,0x178(r1),0,0
	  lfd       f24, 0x170(r1)
	  lmw       r23, 0x14C(r1)
	  lwz       r0, 0x1F4(r1)
	  mtlr      r0
	  addi      r1, r1, 0x1F0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80349CB0
 * Size:	000084
 */
void efx::TBombrock::create((efx::Arg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  li        r31, 0
	  stw       r30, 0x18(r1)
	  mr        r30, r4
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  addi      r3, r29, 0x4
	  lwz       r12, 0x4(r29)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x64
	  addi      r3, r29, 0x20
	  mr        r4, r30
	  lwz       r12, 0x20(r29)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x64
	  li        r31, 0x1

	.loc_0x64:
	  lwz       r0, 0x24(r1)
	  mr        r3, r31
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
 * Address:	80349D34
 * Size:	000004
 */
void efx::TBombrock::forceKill(void)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80349D38
 * Size:	000004
 */
void efx::TBombrock::fade(void)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80349D3C
 * Size:	000028
 */
void __sinit_bombState_cpp(void)
{
	/*
	.loc_0x0:
	  lis       r4, 0x8051
	  li        r0, -0x1
	  lfs       f0, 0x48B0(r4)
	  lis       r3, 0x804E
	  stw       r0, -0x6758(r13)
	  stfsu     f0, -0x4688(r3)
	  stfs      f0, -0x6754(r13)
	  stfs      f0, 0x4(r3)
	  stfs      f0, 0x8(r3)
	  blr
	*/
}
