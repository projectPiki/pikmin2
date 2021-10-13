

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
 * Address:	80152074
 * Size:	000084
 */
void Game::SingleGameSection::__dt(void)
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
	  lis       r3, 0x804B
	  addic.    r0, r30, 0x1B8
	  addi      r3, r3, 0x1350
	  li        r0, 0
	  stw       r3, 0x0(r30)
	  stw       r0, -0x6A50(r13)
	  beq-      .loc_0x4C
	  addic.    r3, r30, 0x214
	  beq-      .loc_0x4C
	  li        r4, 0
	  bl        -0x12B8EC

	.loc_0x4C:
	  mr        r3, r30
	  li        r4, 0
	  bl        -0x6EEC
	  extsh.    r0, r31
	  ble-      .loc_0x68
	  mr        r3, r30
	  bl        -0x12E024

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
 * Address:	801520F8
 * Size:	000184
 */
void Game::SingleGameSection::startMainBgm(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r4, 0x8048
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  subi      r31, r4, 0x3268
	  stw       r30, 0x8(r1)
	  lwz       r3, -0x6C18(r13)
	  lbz       r0, 0x3C(r3)
	  ori       r0, r0, 0x2
	  stb       r0, 0x3C(r3)
	  lwz       r0, -0x6780(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x4C
	  addi      r3, r31, 0x20
	  addi      r5, r31, 0x2C
	  li        r4, 0x1D3
	  crclr     6, 0x6
	  bl        -0x127B00

	.loc_0x4C:
	  lwz       r30, -0x6780(r13)
	  lwz       r0, 0x4(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0x70
	  addi      r3, r31, 0x38
	  addi      r5, r31, 0x2C
	  li        r4, 0xC7
	  crclr     6, 0x6
	  bl        -0x127B24

	.loc_0x70:
	  lwz       r3, 0x4(r30)
	  lwz       r3, 0x4(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, -0x6A50(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0x16C
	  bl        0xCC4A4
	  cmpwi     r3, 0
	  bne-      .loc_0x16C
	  lwz       r3, -0x6C18(r13)
	  lbz       r0, 0x48(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x16C
	  lwz       r0, -0x6780(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0xD0
	  addi      r3, r31, 0x20
	  addi      r5, r31, 0x2C
	  li        r4, 0x1D3
	  crclr     6, 0x6
	  bl        -0x127B84

	.loc_0xD0:
	  lwz       r30, -0x6780(r13)
	  cmplwi    r30, 0
	  bne-      .loc_0xF0
	  addi      r3, r31, 0x20
	  addi      r5, r31, 0x2C
	  li        r4, 0x1DC
	  crclr     6, 0x6
	  bl        -0x127BA4

	.loc_0xF0:
	  lwz       r0, 0x4(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0x110
	  addi      r3, r31, 0x38
	  addi      r5, r31, 0x2C
	  li        r4, 0xCF
	  crclr     6, 0x6
	  bl        -0x127BC4

	.loc_0x110:
	  lwz       r3, 0x4(r30)
	  lwz       r30, 0x4(r3)
	  cmplwi    r30, 0
	  bne-      .loc_0x134
	  addi      r3, r31, 0x38
	  addi      r5, r31, 0x44
	  li        r4, 0xD1
	  crclr     6, 0x6
	  bl        -0x127BE8

	.loc_0x134:
	  lwz       r12, 0x0(r30)
	  mr        r3, r30
	  lwz       r12, 0x40(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x164
	  addi      r3, r31, 0x68
	  addi      r5, r31, 0x2C
	  li        r4, 0x177
	  crclr     6, 0x6
	  bl        -0x127C18

	.loc_0x164:
	  mr        r3, r30
	  bl        0x317E94

	.loc_0x16C:
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
 * Address:	8015227C
 * Size:	000008
 */
void PSM::SceneBase::isGameScene(void)
{
	/*
	.loc_0x0:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80152284
 * Size:	0002A0
 */
void Game::SingleGame::FSM::init((Game::SingleGameSection*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r4, 0xC
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  stw       r30, 0x8(r1)
	  bl        0x4134
	  li        r3, 0x38
	  bl        -0x12E404
	  mr.       r4, r3
	  beq-      .loc_0x38
	  bl        0xCA464
	  mr        r4, r3

	.loc_0x38:
	  mr        r3, r31
	  bl        0x4244
	  li        r3, 0x30
	  bl        -0x12E424
	  mr.       r4, r3
	  beq-      .loc_0x58
	  bl        0xC9678
	  mr        r4, r3

	.loc_0x58:
	  mr        r3, r31
	  bl        0x4224
	  li        r3, 0x2C
	  bl        -0x12E444
	  mr.       r4, r3
	  beq-      .loc_0xA4
	  lis       r3, 0x804B
	  lis       r5, 0x804B
	  addi      r0, r3, 0x1318
	  lis       r3, 0x804C
	  stw       r0, 0x0(r4)
	  li        r0, 0x2
	  li        r6, 0
	  addi      r5, r5, 0x12D0
	  stw       r0, 0x4(r4)
	  addi      r0, r3, 0x15E4
	  stw       r6, 0x8(r4)
	  stw       r5, 0x0(r4)
	  stw       r0, 0x0(r4)

	.loc_0xA4:
	  mr        r3, r31
	  bl        0x41D8
	  li        r3, 0x24
	  bl        -0x12E490
	  mr.       r4, r3
	  beq-      .loc_0xF0
	  lis       r3, 0x804B
	  lis       r5, 0x804B
	  addi      r0, r3, 0x1318
	  lis       r3, 0x804C
	  stw       r0, 0x0(r4)
	  li        r0, 0x3
	  li        r6, 0
	  addi      r5, r5, 0x12D0
	  stw       r0, 0x4(r4)
	  addi      r0, r3, 0x5A4
	  stw       r6, 0x8(r4)
	  stw       r5, 0x0(r4)
	  stw       r0, 0x0(r4)

	.loc_0xF0:
	  mr        r3, r31
	  bl        0x418C
	  li        r3, 0x1C
	  bl        -0x12E4DC
	  mr.       r4, r3
	  beq-      .loc_0x13C
	  lis       r3, 0x804B
	  lis       r5, 0x804B
	  addi      r0, r3, 0x1318
	  lis       r3, 0x804C
	  stw       r0, 0x0(r4)
	  li        r0, 0x4
	  li        r6, 0
	  addi      r5, r5, 0x12D0
	  stw       r0, 0x4(r4)
	  addi      r0, r3, 0x5FC
	  stw       r6, 0x8(r4)
	  stw       r5, 0x0(r4)
	  stw       r0, 0x0(r4)

	.loc_0x13C:
	  mr        r3, r31
	  bl        0x4140
	  li        r3, 0x20
	  bl        -0x12E528
	  mr.       r30, r3
	  beq-      .loc_0x190
	  lis       r3, 0x804B
	  lis       r4, 0x804B
	  addi      r0, r3, 0x1318
	  lis       r3, 0x804C
	  stw       r0, 0x0(r30)
	  li        r0, 0x5
	  li        r5, 0
	  addi      r4, r4, 0x12D0
	  stw       r0, 0x4(r30)
	  addi      r0, r3, 0x163C
	  addi      r3, r30, 0x18
	  stw       r5, 0x8(r30)
	  stw       r4, 0x0(r30)
	  stw       r0, 0x0(r30)
	  bl        0x9EE30

	.loc_0x190:
	  mr        r3, r31
	  mr        r4, r30
	  bl        0x40E8
	  li        r3, 0x14
	  bl        -0x12E580
	  mr.       r4, r3
	  beq-      .loc_0x1E0
	  lis       r3, 0x804B
	  lis       r5, 0x804B
	  addi      r0, r3, 0x1318
	  lis       r3, 0x804B
	  stw       r0, 0x0(r4)
	  li        r0, 0x6
	  li        r6, 0
	  addi      r5, r5, 0x12D0
	  stw       r0, 0x4(r4)
	  addi      r0, r3, 0x1288
	  stw       r6, 0x8(r4)
	  stw       r5, 0x0(r4)
	  stw       r0, 0x0(r4)

	.loc_0x1E0:
	  mr        r3, r31
	  bl        0x409C
	  li        r3, 0x140
	  bl        -0x12E5CC
	  mr.       r4, r3
	  beq-      .loc_0x200
	  bl        0xC7ACC
	  mr        r4, r3

	.loc_0x200:
	  mr        r3, r31
	  bl        0x407C
	  li        r3, 0x100
	  bl        -0x12E5EC
	  mr.       r4, r3
	  beq-      .loc_0x220
	  bl        0xC8784
	  mr        r4, r3

	.loc_0x220:
	  mr        r3, r31
	  bl        0x405C
	  li        r3, 0x28
	  bl        -0x12E60C
	  mr.       r4, r3
	  beq-      .loc_0x240
	  bl        0xCCA1C
	  mr        r4, r3

	.loc_0x240:
	  mr        r3, r31
	  bl        0x403C
	  li        r3, 0x118
	  bl        -0x12E62C
	  mr.       r4, r3
	  beq-      .loc_0x260
	  bl        0xD0010
	  mr        r4, r3

	.loc_0x260:
	  mr        r3, r31
	  bl        0x401C
	  li        r3, 0x30
	  bl        -0x12E64C
	  mr.       r4, r3
	  beq-      .loc_0x280
	  bl        0xE01AC
	  mr        r4, r3

	.loc_0x280:
	  mr        r3, r31
	  bl        0x3FFC
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
 * Address:	........
 * Size:	000038
 */
void Game::SingleGame::FSM::draw((Game::SingleGameSection*, Graphics&))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80152524
 * Size:	000004
 */
void Game::SingleGame::State::draw((Game::SingleGameSection*, Graphics&))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80152528
 * Size:	000020
 */
void Game::SingleGame::FSM::transit((Game::SingleGameSection*, int,
                                     Game::StateArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        0x3F34
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80152548
 * Size:	000040
 */
void Game::SingleGame::FSM::getState((int))
{
	/*
	.loc_0x0:
	  cmpwi     r4, 0
	  blt-      .loc_0x14
	  lwz       r0, 0xC(r3)
	  cmpw      r4, r0
	  blt-      .loc_0x1C

	.loc_0x14:
	  li        r0, 0
	  b         .loc_0x20

	.loc_0x1C:
	  li        r0, 0x1

	.loc_0x20:
	  rlwinm.   r0,r0,0,24,31
	  beq-      .loc_0x38
	  lwz       r3, 0x4(r3)
	  rlwinm    r0,r4,2,0,29
	  lwzx      r3, r3, r0
	  blr

	.loc_0x38:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80152588
 * Size:	000200
 */
void Game::SingleGame::State::accountEarnings((Game::SingleGameSection*,
                                               Game::PelletCropMemory*, bool))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stmw      r24, 0x10(r1)
	  mr        r30, r5
	  mr        r29, r4
	  mr        r31, r6
	  addi      r25, r30, 0x4
	  li        r24, 0
	  lwz       r26, -0x6AE0(r13)
	  b         .loc_0xC4

	.loc_0x2C:
	  mr        r3, r26
	  mr        r4, r24
	  bl        0x197CC
	  mr.       r28, r3
	  beq-      .loc_0xC0
	  lwz       r27, 0x170(r28)
	  mr        r3, r25
	  mr        r4, r24
	  bl        0x92E2C
	  lbz       r0, 0x0(r3)
	  mr        r3, r25
	  lwz       r5, -0x6B70(r13)
	  mr        r4, r24
	  mullw     r6, r0, r27
	  lwz       r0, 0xE8(r5)
	  add       r0, r0, r6
	  stw       r0, 0xE8(r5)
	  bl        0x92E08
	  lbz       r0, 0x0(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0xC0
	  lwz       r3, -0x6B70(r13)
	  mr        r4, r26
	  mr        r5, r24
	  bl        0x94F80
	  rlwinm.   r0,r31,0,24,31
	  beq-      .loc_0xC0
	  lwz       r4, 0x180(r28)
	  subi      r3, r2, 0x5DA0
	  bl        -0x87F68
	  cmpwi     r3, 0
	  bne-      .loc_0xC0
	  lwz       r4, 0x22C(r29)
	  addi      r5, r29, 0x230
	  lwz       r3, -0x6B70(r13)
	  lwz       r4, 0x48(r4)
	  bl        0x9631C

	.loc_0xC0:
	  addi      r24, r24, 0x1

	.loc_0xC4:
	  lhz       r0, 0x0(r25)
	  cmpw      r24, r0
	  blt+      .loc_0x2C
	  lbz       r0, 0x274(r29)
	  cmplwi    r0, 0
	  bne-      .loc_0x138
	  lwz       r28, -0x6B00(r13)
	  addi      r24, r30, 0x14
	  li        r25, 0
	  b         .loc_0x12C

	.loc_0xEC:
	  mr        r3, r28
	  mr        r4, r25
	  bl        0x1970C
	  cmplwi    r3, 0
	  beq-      .loc_0x128
	  lwz       r27, 0x170(r3)
	  mr        r3, r24
	  mr        r4, r25
	  bl        0x92D6C
	  lbz       r0, 0x0(r3)
	  lwz       r3, -0x6B70(r13)
	  mullw     r4, r0, r27
	  lwz       r0, 0xE8(r3)
	  add       r0, r0, r4
	  stw       r0, 0xE8(r3)

	.loc_0x128:
	  addi      r25, r25, 0x1

	.loc_0x12C:
	  lhz       r0, 0x0(r24)
	  cmpw      r25, r0
	  blt+      .loc_0xEC

	.loc_0x138:
	  lwz       r28, -0x6AD8(r13)
	  addi      r24, r30, 0xC
	  li        r25, 0
	  b         .loc_0x1E0

	.loc_0x148:
	  mr        r3, r28
	  mr        r4, r25
	  bl        0x196B0
	  mr.       r30, r3
	  beq-      .loc_0x1DC
	  lwz       r27, 0x170(r30)
	  mr        r3, r24
	  mr        r4, r25
	  bl        0x92D10
	  lbz       r0, 0x0(r3)
	  mr        r3, r24
	  lwz       r5, -0x6B70(r13)
	  mr        r4, r25
	  mullw     r6, r0, r27
	  lwz       r0, 0xE8(r5)
	  add       r0, r0, r6
	  stw       r0, 0xE8(r5)
	  bl        0x92CEC
	  lbz       r0, 0x0(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x1DC
	  lwz       r3, -0x6B70(r13)
	  mr        r4, r28
	  mr        r5, r25
	  bl        0x94E64
	  rlwinm.   r0,r31,0,24,31
	  beq-      .loc_0x1DC
	  lwz       r4, 0x180(r30)
	  subi      r3, r2, 0x5DA0
	  bl        -0x88084
	  cmpwi     r3, 0
	  bne-      .loc_0x1DC
	  lwz       r4, 0x22C(r29)
	  addi      r5, r29, 0x230
	  lwz       r3, -0x6B70(r13)
	  lwz       r4, 0x48(r4)
	  bl        0x96200

	.loc_0x1DC:
	  addi      r25, r25, 0x1

	.loc_0x1E0:
	  lhz       r0, 0x0(r24)
	  cmpw      r25, r0
	  blt+      .loc_0x148
	  lmw       r24, 0x10(r1)
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80152788
 * Size:	000160
 */
void Game::SingleGame::CaveDayEndState::init((Game::SingleGameSection*,
                                              Game::StateArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r5, 0x8048
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  subi      r31, r5, 0x3268
	  stw       r30, 0x18(r1)
	  mr        r30, r4
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  lwz       r3, -0x64AC(r13)
	  bl        0x2DA0FC
	  lwz       r0, 0xD8(r30)
	  lfs       f0, -0x5D9C(r2)
	  stw       r0, 0x18(r30)
	  stfs      f0, 0x10(r29)
	  lwz       r3, 0xD8(r30)
	  lfs       f1, 0x10(r29)
	  bl        0x2D9598
	  lwz       r3, -0x6C18(r13)
	  addi      r5, r31, 0x7C
	  li        r4, 0x1
	  li        r6, 0x3
	  bl        0x627B0
	  lwz       r0, -0x6780(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x80
	  addi      r3, r31, 0x20
	  addi      r5, r31, 0x2C
	  li        r4, 0x1D3
	  crclr     6, 0x6
	  bl        -0x1281C4

	.loc_0x80:
	  lwz       r30, -0x6780(r13)
	  cmplwi    r30, 0
	  bne-      .loc_0xA0
	  addi      r3, r31, 0x20
	  addi      r5, r31, 0x2C
	  li        r4, 0x1DC
	  crclr     6, 0x6
	  bl        -0x1281E4

	.loc_0xA0:
	  cmplwi    r30, 0
	  beq-      .loc_0x144
	  lwz       r0, -0x6780(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0xC8
	  addi      r3, r31, 0x20
	  addi      r5, r31, 0x2C
	  li        r4, 0x1D3
	  crclr     6, 0x6
	  bl        -0x12820C

	.loc_0xC8:
	  lwz       r30, -0x6780(r13)
	  cmplwi    r30, 0
	  bne-      .loc_0xE8
	  addi      r3, r31, 0x20
	  addi      r5, r31, 0x2C
	  li        r4, 0x1DC
	  crclr     6, 0x6
	  bl        -0x12822C

	.loc_0xE8:
	  lwz       r0, 0x4(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0x108
	  addi      r3, r31, 0x38
	  addi      r5, r31, 0x2C
	  li        r4, 0xC7
	  crclr     6, 0x6
	  bl        -0x12824C

	.loc_0x108:
	  lwz       r3, 0x4(r30)
	  lwz       r30, 0x4(r3)
	  cmplwi    r30, 0
	  beq-      .loc_0x144
	  lwz       r3, -0x6514(r13)
	  lfs       f1, 0x10(r29)
	  lfs       f0, 0x54(r3)
	  fdivs     f1, f1, f0
	  bl        -0x90D64
	  lwz       r12, 0x0(r30)
	  mr        r4, r3
	  mr        r3, r30
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl

	.loc_0x144:
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
 * Address:	801528E8
 * Size:	0000B4
 */
void Game::SingleGame::CaveDayEndState::exec((Game::SingleGameSection*))
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
	  bl        -0x708C
	  mr        r3, r31
	  bl        0x316C
	  lwz       r3, -0x6514(r13)
	  lfs       f2, 0x10(r30)
	  lfs       f1, 0x54(r3)
	  lfs       f0, -0x5D98(r2)
	  fsubs     f1, f2, f1
	  stfs      f1, 0x10(r30)
	  lfs       f1, 0x10(r30)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x9C
	  mr        r3, r31
	  bl        -0x5254
	  lwz       r3, -0x6C18(r13)
	  lwz       r3, 0x40(r3)
	  bl        -0x2B870
	  lwz       r3, -0x6D0C(r13)
	  li        r4, 0
	  bl        0xD35C
	  mr        r3, r31
	  bl        -0x2BBC
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x1
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x9C:
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
 * Address:	8015299C
 * Size:	000030
 */
void transit__Q24Game36FSMState<Game::SingleGameSection>
FPQ24Game17SingleGameSectioniPQ24Game8StateArg(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x8(r3)
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
 * Address:	801529CC
 * Size:	00003C
 */
void Game::SingleGame::CaveDayEndState::draw((Game::SingleGameSection*,
                                              Graphics&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  mr        r4, r5
	  bl        -0x6DC0
	  mr        r3, r31
	  bl        0x356C
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80152A08
 * Size:	000034
 */
void Game::SingleGame::CaveDayEndState::cleanup((Game::SingleGameSection*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r4, 0x8048
	  li        r6, 0x3
	  stw       r0, 0x14(r1)
	  subi      r5, r4, 0x31EC
	  li        r4, 0
	  lwz       r3, -0x6C18(r13)
	  bl        0x6256C
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80152A3C
 * Size:	0000E0
 */
void Game::SingleGameSection::__ct((JKRHeap*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  bl        -0x7CB0
	  lis       r3, 0x804B
	  li        r0, 0
	  addi      r4, r3, 0x1350
	  addi      r3, r31, 0x1B8
	  stw       r4, 0x0(r31)
	  stb       r0, 0x180(r31)
	  bl        0x2D1DAC
	  addi      r3, r31, 0x230
	  bl        0x2C07FC
	  addi      r3, r31, 0x254
	  bl        0x928D8
	  addi      r3, r31, 0x25C
	  bl        0x928D0
	  addi      r3, r31, 0x264
	  bl        0x928C8
	  addi      r3, r31, 0x26C
	  bl        0x928C0
	  li        r0, 0x2
	  li        r3, 0x14
	  stw       r0, 0x114(r31)
	  bl        -0x12EC00
	  cmplwi    r3, 0
	  beq-      .loc_0xBC
	  lis       r4, 0x804B
	  lis       r5, 0x804B
	  addi      r8, r4, 0x107C
	  lis       r4, 0x804B
	  lwz       r7, 0x0(r8)
	  addi      r5, r5, 0xF00
	  lwz       r6, 0x4(r8)
	  addi      r0, r4, 0x127C
	  lwz       r4, 0x8(r8)
	  stw       r7, 0x8(r1)
	  stw       r5, 0x0(r3)
	  stw       r0, 0x0(r3)
	  stw       r31, 0x4(r3)
	  stw       r7, 0x8(r3)
	  stw       r6, 0xC(r3)
	  stw       r6, 0xC(r1)
	  stw       r4, 0x10(r1)
	  stw       r4, 0x10(r3)

	.loc_0xBC:
	  stw       r3, 0x240(r31)
	  mr        r3, r31
	  bl        0x3460
	  lwz       r0, 0x24(r1)
	  mr        r3, r31
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80152B1C
 * Size:	000034
 */
void Game::SingleGameSection::section_fadeout(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r4, r3
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x250(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x40(r12)
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
 * Address:	80152B50
 * Size:	000004
 */
void Game::SingleGame::State::on_section_fadeout((Game::SingleGameSection*))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80152B54
 * Size:	00000C
 */
void Game::SingleGameSection::flow_goto_title(void)
{
	/*
	.loc_0x0:
	  li        r0, 0x1
	  stb       r0, 0x1B5(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80152B60
 * Size:	000188
 */
void Game::SingleGameSection::onInit(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  li        r0, 0
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  mr        r30, r3
	  stb       r0, 0x228(r3)
	  lis       r3, 0x8048
	  subi      r31, r3, 0x3268
	  lwz       r4, -0x6C18(r13)
	  addi      r3, r31, 0x88
	  stw       r0, 0x44(r4)
	  bl        0x2CF74C
	  li        r0, 0
	  mr        r3, r30
	  stw       r0, 0x244(r30)
	  stb       r0, 0x194(r30)
	  bl        0x13F0
	  li        r0, 0
	  li        r3, 0x14
	  stb       r0, 0x11C(r30)
	  bl        -0x12ED14
	  cmplwi    r3, 0
	  beq-      .loc_0xAC
	  lis       r4, 0x804B
	  lis       r5, 0x804B
	  addi      r8, r4, 0x1088
	  lis       r4, 0x804B
	  lwz       r7, 0x0(r8)
	  addi      r5, r5, 0xF00
	  lwz       r6, 0x4(r8)
	  addi      r0, r4, 0x127C
	  lwz       r4, 0x8(r8)
	  stw       r7, 0x8(r1)
	  stw       r5, 0x0(r3)
	  stw       r0, 0x0(r3)
	  stw       r30, 0x4(r3)
	  stw       r7, 0x8(r3)
	  stw       r6, 0xC(r3)
	  stw       r6, 0xC(r1)
	  stw       r4, 0x10(r1)
	  stw       r4, 0x10(r3)

	.loc_0xAC:
	  stw       r3, 0x224(r30)
	  li        r3, 0x1C
	  bl        -0x12ED70
	  cmplwi    r3, 0
	  beq-      .loc_0xE0
	  lis       r5, 0x804B
	  lis       r4, 0x804B
	  addi      r0, r5, 0x1264
	  li        r5, -0x1
	  stw       r0, 0x0(r3)
	  addi      r0, r4, 0x1338
	  stw       r5, 0x18(r3)
	  stw       r0, 0x0(r3)

	.loc_0xE0:
	  stw       r3, 0x24C(r30)
	  mr        r4, r30
	  lwz       r3, 0x24C(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x24C(r30)
	  mr        r4, r30
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  addi      r3, r31, 0x94
	  bl        0x2CF660
	  mr        r3, r30
	  bl        -0x2ADC
	  addi      r3, r31, 0xA0
	  bl        0x2CF650
	  li        r0, 0
	  li        r3, 0x5C
	  stb       r0, 0x1B5(r30)
	  bl        -0x12EDFC
	  mr.       r0, r3
	  beq-      .loc_0x154
	  bl        0xCB648
	  mr        r0, r3

	.loc_0x154:
	  stw       r0, -0x6A50(r13)
	  mr        r3, r30
	  li        r4, 0
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
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
 * Address:	80152CE8
 * Size:	000034
 */
void start__Q24Game40StateMachine<Game::SingleGameSection>
FPQ24Game17SingleGameSectioniPQ24Game8StateArg(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  li        r0, 0
	  stw       r0, 0x250(r4)
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
 * Address:	80152D1C
 * Size:	0000EC
 */
void Game::SingleGameSection::doUpdate(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lbz       r0, 0x1B5(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0xC0
	  lwz       r3, 0x24C(r31)
	  mr        r4, r31
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, -0x6C18(r13)
	  lbz       r0, 0x4A(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0xC0
	  bl        0x62264
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0xC0
	  lbz       r0, 0x178(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0xC0
	  lwz       r3, -0x64AC(r13)
	  lwz       r0, 0x18(r3)
	  cmpwi     r0, 0
	  bne-      .loc_0xC0
	  lwz       r3, -0x6C18(r13)
	  lbz       r0, 0x3C(r3)
	  rlwinm.   r0,r0,0,26,26
	  beq-      .loc_0xC0
	  lwz       r3, -0x6514(r13)
	  lfs       f2, 0x174(r31)
	  lfs       f1, 0x54(r3)
	  lfs       f0, -0x5D98(r2)
	  fsubs     f1, f2, f1
	  stfs      f1, 0x174(r31)
	  lfs       f1, 0x174(r31)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0xC0
	  lwz       r3, 0x250(r31)
	  mr        r4, r31
	  lwz       r5, 0x17C(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x44(r12)
	  mtctr     r12
	  bctrl

	.loc_0xC0:
	  lbz       r0, 0x1B5(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0xD4
	  li        r0, 0
	  stb       r0, 0x34(r31)

	.loc_0xD4:
	  lwz       r0, 0x14(r1)
	  lbz       r3, 0x34(r31)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80152E08
 * Size:	000004
 */
void Game::SingleGame::State::on_demo_timer((Game::SingleGameSection*,
                                             unsigned long))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80152E0C
 * Size:	000050
 */
void Game::SingleGameSection::doDraw((Graphics&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r6, r3
	  mr        r5, r4
	  stw       r0, 0x14(r1)
	  lbz       r0, 0x1B5(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x40
	  lwz       r3, 0x250(r6)
	  cmplwi    r3, 0
	  beq-      .loc_0x40
	  lwz       r12, 0x0(r3)
	  mr        r4, r6
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl

	.loc_0x40:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80152E5C
 * Size:	00005C
 */
void Game::SingleGameSection::on_setCamController((int))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r0, 0x244(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x48
	  lwz       r3, -0x6D20(r13)
	  bl        0x7DA0
	  cmplwi    r3, 0
	  beq-      .loc_0x48
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x100(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x244(r31)
	  stw       r3, 0x10(r4)

	.loc_0x48:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80152EB8
 * Size:	000260
 */
void Game::SingleGameSection::onSetSoundScene(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0xA0(r1)
	  mflr      r0
	  stw       r0, 0xA4(r1)
	  stw       r31, 0x9C(r1)
	  stw       r30, 0x98(r1)
	  mr        r30, r3
	  lis       r3, 0x8048
	  lbz       r0, 0x23C(r30)
	  subi      r31, r3, 0x3268
	  cmplwi    r0, 0
	  beq-      .loc_0x12C
	  addi      r3, r1, 0x40
	  bl        0x1E25C8
	  lis       r4, 0x804B
	  lis       r3, 0x1
	  li        r5, 0
	  li        r0, 0xFF
	  addi      r6, r4, 0x1250
	  subi      r4, r3, 0x1
	  stw       r6, 0x40(r1)
	  mr        r3, r30
	  lwz       r6, -0x6CF8(r13)
	  stw       r5, 0x78(r1)
	  stw       r5, 0x7C(r1)
	  stb       r5, 0x80(r1)
	  stw       r4, 0x84(r1)
	  stb       r0, 0x88(r1)
	  stb       r0, 0x89(r1)
	  lwz       r4, 0x2C(r6)
	  lwz       r5, 0x30(r6)
	  lwz       r0, 0x22C(r4)
	  stw       r0, 0x78(r1)
	  lwz       r0, 0x250(r4)
	  stw       r0, 0x7C(r1)
	  stb       r5, 0x80(r1)
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x78(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x84(r1)
	  mr        r3, r30
	  addi      r4, r1, 0x40
	  bl        -0x4FC4
	  addi      r3, r1, 0x40
	  li        r4, 0
	  li        r5, 0x1
	  bl        0x1E2578
	  lwz       r3, 0x22C(r30)
	  lwz       r0, 0x48(r3)
	  cmpwi     r0, 0x4
	  blt-      .loc_0xE0
	  addi      r3, r31, 0xB0
	  addi      r5, r31, 0x2C
	  li        r4, 0x485
	  crclr     6, 0x6
	  bl        -0x128954

	.loc_0xE0:
	  lwz       r3, 0x22C(r30)
	  lwz       r0, -0x6780(r13)
	  lwz       r3, 0x48(r3)
	  cmplwi    r0, 0
	  addi      r0, r3, 0x1
	  stb       r0, 0x46(r1)
	  bne-      .loc_0x110
	  addi      r3, r31, 0x20
	  addi      r5, r31, 0x2C
	  li        r4, 0x1D3
	  crclr     6, 0x6
	  bl        -0x128984

	.loc_0x110:
	  lwz       r3, -0x6780(r13)
	  addi      r4, r1, 0x40
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x1D4

	.loc_0x12C:
	  addi      r3, r1, 0x8
	  bl        0x1E24C8
	  mr        r3, r30
	  addi      r4, r1, 0x8
	  bl        -0x5058
	  addi      r3, r1, 0x8
	  li        r4, 0
	  li        r5, 0x1
	  bl        0x1E24E4
	  lwz       r3, 0x22C(r30)
	  lwz       r4, 0x48(r3)
	  cmpwi     r4, 0x4
	  blt-      .loc_0x16C
	  li        r0, 0x1
	  stb       r0, 0xE(r1)
	  b         .loc_0x19C

	.loc_0x16C:
	  cmpwi     r4, 0
	  bne-      .loc_0x194
	  lwz       r3, -0x6C18(r13)
	  lwz       r3, 0x40(r3)
	  lwz       r0, 0x218(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x194
	  li        r0, 0x14
	  stb       r0, 0xE(r1)
	  b         .loc_0x19C

	.loc_0x194:
	  addi      r0, r4, 0x1
	  stb       r0, 0xE(r1)

	.loc_0x19C:
	  lwz       r0, -0x6780(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x1BC
	  addi      r3, r31, 0x20
	  addi      r5, r31, 0x2C
	  li        r4, 0x1D3
	  crclr     6, 0x6
	  bl        -0x128A30

	.loc_0x1BC:
	  lwz       r3, -0x6780(r13)
	  addi      r4, r1, 0x8
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl

	.loc_0x1D4:
	  lwz       r0, -0x6780(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x1F4
	  addi      r3, r31, 0x20
	  addi      r5, r31, 0x2C
	  li        r4, 0x1D3
	  crclr     6, 0x6
	  bl        -0x128A68

	.loc_0x1F4:
	  lwz       r30, -0x6780(r13)
	  lwz       r0, 0x4(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0x218
	  addi      r3, r31, 0x38
	  addi      r5, r31, 0x2C
	  li        r4, 0xC7
	  crclr     6, 0x6
	  bl        -0x128A8C

	.loc_0x218:
	  lwz       r3, 0x4(r30)
	  lwz       r3, 0x4(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, -0x6C18(r13)
	  lwz       r0, 0x44(r3)
	  cmpwi     r0, 0
	  bne-      .loc_0x248
	  li        r3, 0
	  bl        0x3100F0

	.loc_0x248:
	  lwz       r0, 0xA4(r1)
	  lwz       r31, 0x9C(r1)
	  lwz       r30, 0x98(r1)
	  mtlr      r0
	  addi      r1, r1, 0xA0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80153118
 * Size:	000008
 */
void Game::SingleGameSection::getCaveID(void)
{
	/*
	.loc_0x0:
	  lwz       r3, 0x238(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80153120
 * Size:	0002A0
 */
void Game::SingleGameSection::onSetupFloatMemory(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lbz       r0, 0x23C(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x228
	  lwz       r0, 0x22C(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x48
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  subi      r3, r3, 0x31B8
	  li        r4, 0x4EC
	  subi      r5, r5, 0x323C
	  crclr     6, 0x6
	  bl        -0x128B24

	.loc_0x48:
	  lwz       r3, 0x22C(r31)
	  lwz       r0, 0x48(r3)
	  cmpwi     r0, 0x2
	  beq-      .loc_0x21C
	  bge-      .loc_0x6C
	  cmpwi     r0, 0
	  beq-      .loc_0x78
	  bge-      .loc_0x104
	  b         .loc_0x21C

	.loc_0x6C:
	  cmpwi     r0, 0x4
	  bge-      .loc_0x21C
	  b         .loc_0x190

	.loc_0x78:
	  li        r3, 0x14
	  bl        -0x12F2F8
	  cmplwi    r3, 0
	  beq-      .loc_0xFC
	  lis       r4, 0x804B
	  lis       r5, 0x804A
	  subi      r0, r4, 0x5808
	  lis       r4, 0x804E
	  stw       r0, 0x0(r3)
	  subi      r0, r5, 0x1D84
	  addi      r5, r4, 0x698C
	  lis       r4, 0x804E
	  stw       r0, 0x4(r3)
	  addi      r7, r4, 0x6940
	  lis       r4, 0x804B
	  addi      r0, r5, 0x14
	  stw       r5, 0x0(r3)
	  addi      r4, r4, 0x1204
	  li        r9, 0
	  li        r8, 0x2B2
	  stw       r0, 0x4(r3)
	  addi      r6, r7, 0x14
	  li        r5, 0x272
	  addi      r0, r4, 0x14
	  stw       r9, 0x8(r3)
	  sth       r8, 0xC(r3)
	  stb       r9, 0xE(r3)
	  stw       r7, 0x0(r3)
	  stw       r6, 0x4(r3)
	  stw       r9, 0x10(r3)
	  sth       r5, 0xC(r3)
	  stw       r4, 0x0(r3)
	  stw       r0, 0x4(r3)

	.loc_0xFC:
	  stw       r3, 0x244(r31)
	  b         .loc_0x230

	.loc_0x104:
	  li        r3, 0x14
	  bl        -0x12F384
	  cmplwi    r3, 0
	  beq-      .loc_0x188
	  lis       r4, 0x804B
	  lis       r5, 0x804A
	  subi      r0, r4, 0x5808
	  lis       r4, 0x804E
	  stw       r0, 0x0(r3)
	  subi      r0, r5, 0x1D84
	  addi      r5, r4, 0x698C
	  lis       r4, 0x804E
	  stw       r0, 0x4(r3)
	  addi      r7, r4, 0x6940
	  lis       r4, 0x804B
	  addi      r0, r5, 0x14
	  stw       r5, 0x0(r3)
	  addi      r4, r4, 0x11B8
	  li        r9, 0
	  li        r8, 0x2B2
	  stw       r0, 0x4(r3)
	  addi      r6, r7, 0x14
	  li        r5, 0x5B
	  addi      r0, r4, 0x14
	  stw       r9, 0x8(r3)
	  sth       r8, 0xC(r3)
	  stb       r9, 0xE(r3)
	  stw       r7, 0x0(r3)
	  stw       r6, 0x4(r3)
	  stw       r9, 0x10(r3)
	  sth       r5, 0xC(r3)
	  stw       r4, 0x0(r3)
	  stw       r0, 0x4(r3)

	.loc_0x188:
	  stw       r3, 0x244(r31)
	  b         .loc_0x230

	.loc_0x190:
	  li        r3, 0x14
	  bl        -0x12F410
	  cmplwi    r3, 0
	  beq-      .loc_0x214
	  lis       r4, 0x804B
	  lis       r5, 0x804A
	  subi      r0, r4, 0x5808
	  lis       r4, 0x804E
	  stw       r0, 0x0(r3)
	  subi      r0, r5, 0x1D84
	  addi      r5, r4, 0x698C
	  lis       r4, 0x804E
	  stw       r0, 0x4(r3)
	  addi      r7, r4, 0x6940
	  lis       r4, 0x804B
	  addi      r0, r5, 0x14
	  stw       r5, 0x0(r3)
	  addi      r4, r4, 0x116C
	  li        r9, 0
	  li        r8, 0x2B2
	  stw       r0, 0x4(r3)
	  addi      r6, r7, 0x14
	  li        r5, 0x27C
	  addi      r0, r4, 0x14
	  stw       r9, 0x8(r3)
	  sth       r8, 0xC(r3)
	  stb       r9, 0xE(r3)
	  stw       r7, 0x0(r3)
	  stw       r6, 0x4(r3)
	  stw       r9, 0x10(r3)
	  sth       r5, 0xC(r3)
	  stw       r4, 0x0(r3)
	  stw       r0, 0x4(r3)

	.loc_0x214:
	  stw       r3, 0x244(r31)
	  b         .loc_0x230

	.loc_0x21C:
	  li        r0, 0
	  stw       r0, 0x244(r31)
	  b         .loc_0x230

	.loc_0x228:
	  li        r0, 0
	  stw       r0, -0x6E28(r13)

	.loc_0x230:
	  lbz       r0, 0x23C(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x28C
	  lwz       r3, 0x22C(r31)
	  li        r4, 0
	  bl        0x5ACBC
	  lwz       r4, -0x6CF8(r13)
	  cmplwi    r4, 0
	  beq-      .loc_0x258
	  lwz       r4, 0x0(r4)

	.loc_0x258:
	  lwz       r3, -0x6C18(r13)
	  bl        0x62BCC
	  lwz       r4, -0x6E28(r13)
	  cmplwi    r4, 0
	  beq-      .loc_0x28C
	  lwz       r3, -0x6C18(r13)
	  bl        0x62BB8
	  lwz       r4, -0x6E28(r13)
	  cmplwi    r4, 0
	  beq-      .loc_0x284
	  addi      r4, r4, 0x4

	.loc_0x284:
	  mr        r3, r31
	  bl        0x11C08

	.loc_0x28C:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801533C0
 * Size:	000050
 */
void Game::SingleGameSection::onClearHeap(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r4, -0x6E28(r13)
	  cmplwi    r4, 0
	  beq-      .loc_0x3C
	  addi      r3, r4, 0x4
	  bl        0x2BE1EC
	  lwz       r3, -0x6C18(r13)
	  lwz       r4, -0x6E28(r13)
	  bl        0x62BC4
	  li        r0, 0
	  stw       r0, 0x244(r31)

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
 * Address:	80153410
 * Size:	00000C
 */
void Game::SingleGameSection::onStartHeap(void)
{
	/*
	.loc_0x0:
	  li        r0, 0
	  stb       r0, 0x194(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8015341C
 * Size:	000044
 */
void Game::SingleGameSection::gmOrimaDown((int))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r6, r3
	  mr        r5, r4
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x250(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x34
	  lwz       r12, 0x0(r3)
	  mr        r4, r6
	  lwz       r12, 0x24(r12)
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
 * Address:	80153460
 * Size:	000004
 */
void Game::SingleGame::State::onOrimaDown((Game::SingleGameSection*, int))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80153464
 * Size:	000004
 */
void Game::SingleGameSection::gmPikminZero(void)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80153468
 * Size:	000020
 */
void Game::SingleGameSection::enableTimer((float, unsigned long))
{
	/*
	.loc_0x0:
	  lwz       r0, 0x17C(r3)
	  cmplwi    r0, 0
	  bnelr-
	  stw       r4, 0x17C(r3)
	  li        r0, 0x1
	  stfs      f1, 0x174(r3)
	  stb       r0, 0x178(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80153488
 * Size:	000080
 */
void Game::SingleGameSection::disableTimer((unsigned long))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  cmplwi    r4, 0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bne-      .loc_0x2C
	  li        r0, 0
	  stb       r0, 0x178(r31)
	  stw       r0, 0x17C(r31)
	  b         .loc_0x6C

	.loc_0x2C:
	  lwz       r6, 0x17C(r31)
	  cmplwi    r6, 0
	  beq-      .loc_0x60
	  cmplw     r4, r6
	  beq-      .loc_0x60
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  mr        r7, r4
	  li        r4, 0x551
	  subi      r3, r3, 0x31B8
	  subi      r5, r5, 0x31A0
	  crclr     6, 0x6
	  bl        -0x128EA4

	.loc_0x60:
	  li        r0, 0
	  stb       r0, 0x178(r31)
	  stw       r0, 0x17C(r31)

	.loc_0x6C:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80153508
 * Size:	000054
 */
void Game::SingleGameSection::onMovieStart((Game::MovieConfig*, unsigned long,
                                            unsigned long))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r9, r3
	  mr        r8, r4
	  stw       r0, 0x14(r1)
	  mr        r0, r5
	  mr        r7, r6
	  lwz       r3, 0x250(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x44
	  lwz       r12, 0x0(r3)
	  mr        r4, r9
	  mr        r5, r8
	  mr        r6, r0
	  lwz       r12, 0x28(r12)
	  mtctr     r12
	  bctrl

	.loc_0x44:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8015355C
 * Size:	000004
 */
void Game::SingleGame::State::onMovieStart((Game::SingleGameSection*,
                                            Game::MovieConfig*, unsigned long,
                                            unsigned long))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80153560
 * Size:	000064
 */
void Game::SingleGameSection::onMovieDone((Game::MovieConfig*, unsigned long,
                                           unsigned long))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r11, r3
	  mr        r10, r4
	  stw       r0, 0x14(r1)
	  mr        r9, r5
	  mr        r7, r6
	  lwz       r8, -0x6C18(r13)
	  lbz       r0, 0x3C(r8)
	  rlwinm    r0,r0,0,29,27
	  stb       r0, 0x3C(r8)
	  lwz       r3, 0x250(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x54
	  lwz       r12, 0x0(r3)
	  mr        r4, r11
	  mr        r5, r10
	  mr        r6, r9
	  lwz       r12, 0x2C(r12)
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
 * Address:	801535C4
 * Size:	000004
 */
void Game::SingleGame::State::onMovieDone((Game::SingleGameSection*,
                                           Game::MovieConfig*, unsigned long,
                                           unsigned long))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801535C8
 * Size:	00005C
 */
void Game::SingleGameSection::onMovieCommand((int))
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
	  bl        -0x77CC
	  lwz       r3, 0x250(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0x44
	  lwz       r12, 0x0(r3)
	  mr        r4, r30
	  mr        r5, r31
	  lwz       r12, 0x30(r12)
	  mtctr     r12
	  bctrl

	.loc_0x44:
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
 * Address:	80153624
 * Size:	000004
 */
void Game::SingleGame::State::onMovieCommand((Game::SingleGameSection*, int))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80153628
 * Size:	000240
 */
void Game::SingleGameSection::playMovie_bootup((Game::Onyon*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0xD0(r1)
	  mflr      r0
	  lis       r5, 0x8048
	  stw       r0, 0xD4(r1)
	  subi      r5, r5, 0x3268
	  stw       r31, 0xCC(r1)
	  mr        r31, r4
	  lhz       r0, 0x22E(r4)
	  cmpwi     r0, 0x1
	  beq-      .loc_0x44
	  bge-      .loc_0x38
	  cmpwi     r0, 0
	  bge-      .loc_0x18C
	  b         .loc_0x22C

	.loc_0x38:
	  cmpwi     r0, 0x3
	  bge-      .loc_0x22C
	  b         .loc_0xE8

	.loc_0x44:
	  lwz       r6, 0xC8(r3)
	  li        r0, 0
	  lfs       f0, -0x5D98(r2)
	  addi      r3, r5, 0xEC
	  stw       r3, 0x94(r1)
	  addi      r3, r1, 0x20
	  stw       r0, 0x98(r1)
	  stw       r6, 0xA0(r1)
	  stfs      f0, 0xAC(r1)
	  stfs      f0, 0xB0(r1)
	  stfs      f0, 0xB4(r1)
	  stfs      f0, 0xB8(r1)
	  stw       r0, 0xBC(r1)
	  stw       r0, 0xA4(r1)
	  stw       r0, 0x9C(r1)
	  stw       r0, 0xC0(r1)
	  stw       r0, 0xA8(r1)
	  stw       r0, 0xC4(r1)
	  lwz       r12, 0x0(r4)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x20(r1)
	  mr        r3, r31
	  lfs       f1, 0x24(r1)
	  lfs       f0, 0x28(r1)
	  stfs      f2, 0xAC(r1)
	  stfs      f1, 0xB0(r1)
	  stfs      f0, 0xB4(r1)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  stfs      f1, 0xB8(r1)
	  addi      r4, r1, 0x94
	  lwz       r3, -0x64AC(r13)
	  bl        0x2D92D4
	  lwz       r3, -0x6B70(r13)
	  lhz       r4, 0x22E(r31)
	  bl        0x93B74
	  b         .loc_0x22C

	.loc_0xE8:
	  lwz       r6, 0xC8(r3)
	  li        r0, 0
	  lfs       f0, -0x5D98(r2)
	  addi      r3, r5, 0xFC
	  stw       r3, 0x60(r1)
	  addi      r3, r1, 0x14
	  stw       r0, 0x64(r1)
	  stw       r6, 0x6C(r1)
	  stfs      f0, 0x78(r1)
	  stfs      f0, 0x7C(r1)
	  stfs      f0, 0x80(r1)
	  stfs      f0, 0x84(r1)
	  stw       r0, 0x88(r1)
	  stw       r0, 0x70(r1)
	  stw       r0, 0x68(r1)
	  stw       r0, 0x8C(r1)
	  stw       r0, 0x74(r1)
	  stw       r0, 0x90(r1)
	  lwz       r12, 0x0(r4)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x14(r1)
	  mr        r3, r31
	  lfs       f1, 0x18(r1)
	  lfs       f0, 0x1C(r1)
	  stfs      f2, 0x78(r1)
	  stfs      f1, 0x7C(r1)
	  stfs      f0, 0x80(r1)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  stfs      f1, 0x84(r1)
	  addi      r4, r1, 0x60
	  lwz       r3, -0x64AC(r13)
	  bl        0x2D9230
	  lwz       r3, -0x6B70(r13)
	  lhz       r4, 0x22E(r31)
	  bl        0x93AD0
	  b         .loc_0x22C

	.loc_0x18C:
	  lwz       r6, 0xC8(r3)
	  li        r0, 0
	  lfs       f0, -0x5D98(r2)
	  addi      r3, r5, 0x10C
	  stw       r3, 0x2C(r1)
	  addi      r3, r1, 0x8
	  stw       r0, 0x30(r1)
	  stw       r6, 0x38(r1)
	  stfs      f0, 0x44(r1)
	  stfs      f0, 0x48(r1)
	  stfs      f0, 0x4C(r1)
	  stfs      f0, 0x50(r1)
	  stw       r0, 0x54(r1)
	  stw       r0, 0x3C(r1)
	  stw       r0, 0x34(r1)
	  stw       r0, 0x58(r1)
	  stw       r0, 0x40(r1)
	  stw       r0, 0x5C(r1)
	  lwz       r12, 0x0(r4)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x8(r1)
	  mr        r3, r31
	  lfs       f1, 0xC(r1)
	  lfs       f0, 0x10(r1)
	  stfs      f2, 0x44(r1)
	  stfs      f1, 0x48(r1)
	  stfs      f0, 0x4C(r1)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  stfs      f1, 0x50(r1)
	  addi      r4, r1, 0x2C
	  lwz       r3, -0x64AC(r13)
	  bl        0x2D918C
	  lwz       r3, -0x6B70(r13)
	  lhz       r4, 0x22E(r31)
	  bl        0x93A2C

	.loc_0x22C:
	  lwz       r0, 0xD4(r1)
	  lwz       r31, 0xCC(r1)
	  mtlr      r0
	  addi      r1, r1, 0xD0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80153868
 * Size:	000008
 */
void Game::Onyon::getFaceDir(void)
{
	/*
	.loc_0x0:
	  lfs       f1, 0x228(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80153870
 * Size:	000454
 */
void Game::SingleGameSection::playMovie_helloPikmin((Game::Piki*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x160(r1)
	  mflr      r0
	  lis       r5, 0x8048
	  stw       r0, 0x164(r1)
	  stw       r31, 0x15C(r1)
	  mr        r31, r4
	  stw       r30, 0x158(r1)
	  subi      r30, r5, 0x3268
	  stw       r29, 0x154(r1)
	  stw       r28, 0x150(r1)
	  mr        r28, r3
	  lbz       r0, 0x2B8(r4)
	  cmpwi     r0, 0x2
	  beq-      .loc_0x158
	  bge-      .loc_0x4C
	  cmpwi     r0, 0
	  beq-      .loc_0x210
	  bge-      .loc_0x5C
	  b         .loc_0x434

	.loc_0x4C:
	  cmpwi     r0, 0x4
	  beq-      .loc_0x380
	  bge-      .loc_0x434
	  b         .loc_0x2C8

	.loc_0x5C:
	  lwz       r5, 0xC8(r28)
	  li        r0, 0
	  lfs       f0, -0x5D98(r2)
	  addi      r3, r30, 0x11C
	  stw       r3, 0x114(r1)
	  li        r4, 0x1
	  lwz       r3, -0x6CD0(r13)
	  stw       r0, 0x118(r1)
	  stw       r5, 0x120(r1)
	  stfs      f0, 0x12C(r1)
	  stfs      f0, 0x130(r1)
	  stfs      f0, 0x134(r1)
	  stfs      f0, 0x138(r1)
	  stw       r0, 0x13C(r1)
	  stw       r0, 0x124(r1)
	  stw       r0, 0x11C(r1)
	  stw       r0, 0x140(r1)
	  stw       r0, 0x128(r1)
	  stw       r0, 0x144(r1)
	  bl        0x28184
	  mr.       r29, r3
	  bne-      .loc_0xC8
	  addi      r3, r30, 0xB0
	  addi      r5, r30, 0x130
	  li        r4, 0x5C9
	  crclr     6, 0x6
	  bl        -0x1292F4

	.loc_0xC8:
	  mr        r4, r29
	  addi      r3, r1, 0x38
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x38(r1)
	  mr        r3, r29
	  lfs       f1, 0x3C(r1)
	  lfs       f0, 0x40(r1)
	  stfs      f2, 0x12C(r1)
	  stfs      f1, 0x130(r1)
	  stfs      f0, 0x134(r1)
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  stfs      f1, 0x138(r1)
	  addi      r4, r1, 0x114
	  lwz       r3, -0x64AC(r13)
	  stw       r31, 0x194(r3)
	  lwz       r3, -0x64AC(r13)
	  bl        0x2D9040
	  lwz       r3, -0x6B70(r13)
	  lbz       r4, 0x2B8(r31)
	  bl        0x93860
	  lwz       r3, -0x6B70(r13)
	  lbz       r4, 0x2B8(r31)
	  bl        0x937D4
	  mr        r3, r28
	  li        r4, 0x1
	  lwz       r12, 0x0(r28)
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x434

	.loc_0x158:
	  lwz       r5, 0xC8(r28)
	  li        r0, 0
	  lfs       f0, -0x5D98(r2)
	  addi      r3, r30, 0x140
	  stw       r3, 0xE0(r1)
	  addi      r3, r1, 0x2C
	  stw       r0, 0xE4(r1)
	  stw       r5, 0xEC(r1)
	  stfs      f0, 0xF8(r1)
	  stfs      f0, 0xFC(r1)
	  stfs      f0, 0x100(r1)
	  stfs      f0, 0x104(r1)
	  stw       r0, 0x108(r1)
	  stw       r0, 0xF0(r1)
	  stw       r0, 0xE8(r1)
	  stw       r0, 0x10C(r1)
	  stw       r0, 0xF4(r1)
	  stw       r0, 0x110(r1)
	  lwz       r12, 0x0(r4)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x2C(r1)
	  mr        r3, r31
	  lfs       f1, 0x30(r1)
	  lfs       f0, 0x34(r1)
	  stfs      f2, 0xF8(r1)
	  stfs      f1, 0xFC(r1)
	  stfs      f0, 0x100(r1)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  stfs      f1, 0x104(r1)
	  addi      r4, r1, 0xE0
	  lwz       r3, -0x64AC(r13)
	  stw       r31, 0x194(r3)
	  lwz       r3, -0x64AC(r13)
	  bl        0x2D8F70
	  lwz       r3, -0x6B70(r13)
	  lbz       r4, 0x2B8(r31)
	  bl        0x93790
	  lwz       r3, -0x6B70(r13)
	  lbz       r4, 0x2B8(r31)
	  bl        0x93704
	  b         .loc_0x434

	.loc_0x210:
	  lwz       r5, 0xC8(r28)
	  li        r0, 0
	  lfs       f0, -0x5D98(r2)
	  addi      r3, r30, 0x158
	  stw       r3, 0xAC(r1)
	  addi      r3, r1, 0x20
	  stw       r0, 0xB0(r1)
	  stw       r5, 0xB8(r1)
	  stfs      f0, 0xC4(r1)
	  stfs      f0, 0xC8(r1)
	  stfs      f0, 0xCC(r1)
	  stfs      f0, 0xD0(r1)
	  stw       r0, 0xD4(r1)
	  stw       r0, 0xBC(r1)
	  stw       r0, 0xB4(r1)
	  stw       r0, 0xD8(r1)
	  stw       r0, 0xC0(r1)
	  stw       r0, 0xDC(r1)
	  lwz       r12, 0x0(r4)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x20(r1)
	  mr        r3, r31
	  lfs       f1, 0x24(r1)
	  lfs       f0, 0x28(r1)
	  stfs      f2, 0xC4(r1)
	  stfs      f1, 0xC8(r1)
	  stfs      f0, 0xCC(r1)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  stfs      f1, 0xD0(r1)
	  addi      r4, r1, 0xAC
	  lwz       r3, -0x64AC(r13)
	  stw       r31, 0x194(r3)
	  lwz       r3, -0x64AC(r13)
	  bl        0x2D8EB8
	  lwz       r3, -0x6B70(r13)
	  lbz       r4, 0x2B8(r31)
	  bl        0x936D8
	  lwz       r3, -0x6B70(r13)
	  lbz       r4, 0x2B8(r31)
	  bl        0x9364C
	  b         .loc_0x434

	.loc_0x2C8:
	  lwz       r5, 0xC8(r28)
	  li        r0, 0
	  lfs       f0, -0x5D98(r2)
	  addi      r3, r30, 0x16C
	  stw       r3, 0x78(r1)
	  addi      r3, r1, 0x14
	  stw       r0, 0x7C(r1)
	  stw       r5, 0x84(r1)
	  stfs      f0, 0x90(r1)
	  stfs      f0, 0x94(r1)
	  stfs      f0, 0x98(r1)
	  stfs      f0, 0x9C(r1)
	  stw       r0, 0xA0(r1)
	  stw       r0, 0x88(r1)
	  stw       r0, 0x80(r1)
	  stw       r0, 0xA4(r1)
	  stw       r0, 0x8C(r1)
	  stw       r0, 0xA8(r1)
	  lwz       r12, 0x0(r4)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x14(r1)
	  mr        r3, r31
	  lfs       f1, 0x18(r1)
	  lfs       f0, 0x1C(r1)
	  stfs      f2, 0x90(r1)
	  stfs      f1, 0x94(r1)
	  stfs      f0, 0x98(r1)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  stfs      f1, 0x9C(r1)
	  addi      r4, r1, 0x78
	  lwz       r3, -0x64AC(r13)
	  stw       r31, 0x194(r3)
	  lwz       r3, -0x64AC(r13)
	  bl        0x2D8E00
	  lwz       r3, -0x6B70(r13)
	  lbz       r4, 0x2B8(r31)
	  bl        0x93620
	  lwz       r3, -0x6B70(r13)
	  lbz       r4, 0x2B8(r31)
	  bl        0x93594
	  b         .loc_0x434

	.loc_0x380:
	  lwz       r5, 0xC8(r28)
	  li        r0, 0
	  lfs       f0, -0x5D98(r2)
	  addi      r3, r30, 0x184
	  stw       r3, 0x44(r1)
	  addi      r3, r1, 0x8
	  stw       r0, 0x48(r1)
	  stw       r5, 0x50(r1)
	  stfs      f0, 0x5C(r1)
	  stfs      f0, 0x60(r1)
	  stfs      f0, 0x64(r1)
	  stfs      f0, 0x68(r1)
	  stw       r0, 0x6C(r1)
	  stw       r0, 0x54(r1)
	  stw       r0, 0x4C(r1)
	  stw       r0, 0x70(r1)
	  stw       r0, 0x58(r1)
	  stw       r0, 0x74(r1)
	  lwz       r12, 0x0(r4)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x8(r1)
	  mr        r3, r31
	  lfs       f1, 0xC(r1)
	  lfs       f0, 0x10(r1)
	  stfs      f2, 0x5C(r1)
	  stfs      f1, 0x60(r1)
	  stfs      f0, 0x64(r1)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  stfs      f1, 0x68(r1)
	  addi      r4, r1, 0x44
	  lwz       r3, -0x64AC(r13)
	  stw       r31, 0x194(r3)
	  lwz       r3, -0x64AC(r13)
	  bl        0x2D8D48
	  lwz       r3, -0x6B70(r13)
	  lbz       r4, 0x2B8(r31)
	  bl        0x93568
	  lwz       r3, -0x6B70(r13)
	  lbz       r4, 0x2B8(r31)
	  bl        0x934DC

	.loc_0x434:
	  lwz       r0, 0x164(r1)
	  lwz       r31, 0x15C(r1)
	  lwz       r30, 0x158(r1)
	  lwz       r29, 0x154(r1)
	  lwz       r28, 0x150(r1)
	  mtlr      r0
	  addi      r1, r1, 0x160
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80153CC4
 * Size:	000004
 */
void Game::SingleGameSection::playMovie_firstexperience((int, Game::Creature*))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80153CC8
 * Size:	0002A0
 */
void Game::SingleGameSection::saveMainMapSituation((bool))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  rlwinm.   r0,r4,0,24,31
	  stw       r31, 0x2C(r1)
	  mr        r31, r3
	  stw       r30, 0x28(r1)
	  beq-      .loc_0x250
	  li        r0, 0
	  lwz       r3, -0x6D0C(r13)
	  lis       r4, 0x804B
	  stw       r0, 0x1C(r1)
	  subi      r4, r4, 0x4364
	  cmplwi    r0, 0
	  stw       r4, 0x10(r1)
	  stw       r0, 0x14(r1)
	  stw       r3, 0x18(r1)
	  bne-      .loc_0x60
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x14(r1)
	  b         .loc_0x230

	.loc_0x60:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x14(r1)
	  b         .loc_0xCC

	.loc_0x78:
	  lwz       r3, 0x18(r1)
	  lwz       r4, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x1C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x230
	  lwz       r3, 0x18(r1)
	  lwz       r4, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x14(r1)

	.loc_0xCC:
	  lwz       r12, 0x10(r1)
	  addi      r3, r1, 0x10
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x78
	  b         .loc_0x230

	.loc_0xEC:
	  lwz       r3, 0x18(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  mr        r30, r3
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x174
	  lbz       r4, 0x2B8(r30)
	  cmpwi     r4, 0
	  beq-      .loc_0x174
	  lwz       r3, -0x6B70(r13)
	  lbz       r5, 0x2B9(r30)
	  addi      r3, r3, 0xA8
	  bl        0x9D620
	  lwz       r7, 0x0(r3)
	  lis       r6, 0x804B
	  lis       r5, 0x1
	  lis       r4, 0x804B
	  addi      r0, r7, 0x1
	  subi      r6, r6, 0x5D30
	  stw       r0, 0x0(r3)
	  addi      r5, r5, 0x1
	  addi      r0, r4, 0x1160
	  mr        r3, r30
	  stw       r6, 0x8(r1)
	  addi      r4, r1, 0x8
	  stw       r5, 0xC(r1)
	  stw       r0, 0x8(r1)
	  bl        -0x18D48

	.loc_0x174:
	  lwz       r0, 0x1C(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x1A0
	  lwz       r3, 0x18(r1)
	  lwz       r4, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x14(r1)
	  b         .loc_0x230

	.loc_0x1A0:
	  lwz       r3, 0x18(r1)
	  lwz       r4, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x14(r1)
	  b         .loc_0x214

	.loc_0x1C0:
	  lwz       r3, 0x18(r1)
	  lwz       r4, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x1C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x230
	  lwz       r3, 0x18(r1)
	  lwz       r4, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x14(r1)

	.loc_0x214:
	  lwz       r12, 0x10(r1)
	  addi      r3, r1, 0x10
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x1C0

	.loc_0x230:
	  lwz       r3, 0x18(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x14(r1)
	  cmplw     r4, r3
	  bne+      .loc_0xEC

	.loc_0x250:
	  lwz       r3, -0x6D0C(r13)
	  li        r4, 0
	  bl        0xC890
	  lwz       r3, -0x6D0C(r13)
	  li        r4, 0x1
	  bl        0xBD88
	  lwz       r5, -0x6C18(r13)
	  mr        r3, r31
	  lwz       r4, -0x6B70(r13)
	  lwz       r5, 0x40(r5)
	  lfs       f0, 0x20C(r5)
	  stfs      f0, 0x68(r4)
	  lwz       r4, 0x22C(r31)
	  bl        -0x67BC
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
 * Address:	80153F68
 * Size:	000030
 */
void Game::SingleGameSection::loadMainMapSituation(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, -0x6C18(r13)
	  lwz       r4, -0x6B70(r13)
	  lwz       r3, 0x40(r3)
	  lfs       f1, 0x68(r4)
	  bl        -0x2CEE4
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80153F98
 * Size:	000018
 */
void Game::SingleGameSection::clearCaveMenus(void)
{
	/*
	.loc_0x0:
	  li        r0, 0
	  stb       r0, 0x180(r3)
	  stw       r0, 0x184(r3)
	  stw       r0, 0x188(r3)
	  stw       r0, 0x18C(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80153FB0
 * Size:	000418
 */
void Game::SingleGameSection::openCaveInMenu((Game::ItemCave::Item*, int))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x60(r1)
	  mflr      r0
	  stw       r0, 0x64(r1)
	  stmw      r26, 0x48(r1)
	  mr        r28, r4
	  mr        r27, r3
	  mr        r29, r5
	  li        r31, 0
	  lwz       r4, 0x1F0(r4)
	  subis     r0, r4, 0x795F
	  cmplwi    r0, 0x3034
	  bne-      .loc_0x34
	  li        r31, 0x1

	.loc_0x34:
	  lbz       r0, 0x194(r27)
	  cmplwi    r0, 0
	  bne-      .loc_0x404
	  lbz       r0, 0x180(r27)
	  rlwinm.   r0,r0,0,31,31
	  bne-      .loc_0x404
	  lis       r3, 0x804B
	  stw       r4, 0x190(r27)
	  li        r8, 0
	  li        r4, 0x1
	  addi      r9, r3, 0x1148
	  stw       r8, 0x38(r1)
	  lis       r7, 0x804B
	  lis       r3, 0x745F
	  addi      r0, r3, 0x3031
	  li        r6, 0x18
	  li        r5, 0x45
	  stw       r9, 0x18(r1)
	  addi      r7, r7, 0x1130
	  mr        r3, r28
	  stw       r8, 0x1C(r1)
	  stw       r7, 0x18(r1)
	  stw       r6, 0x20(r1)
	  stw       r5, 0x24(r1)
	  stb       r4, 0x37(r1)
	  stw       r4, 0x28(r1)
	  stw       r4, 0x2C(r1)
	  stw       r0, 0x30(r1)
	  stb       r8, 0x34(r1)
	  stb       r8, 0x35(r1)
	  stw       r8, 0x38(r1)
	  bl        0x96EA4
	  stw       r3, 0x20(r1)
	  mr        r3, r28
	  bl        0x96EF8
	  stw       r3, 0x24(r1)
	  li        r3, -0x1
	  lwz       r4, -0x6B70(r13)
	  lbz       r0, 0x2F(r4)
	  rlwinm    r0,r0,0,31,31
	  stb       r0, 0x35(r1)
	  bl        0x7CDD8
	  mr        r30, r3
	  li        r3, -0x1
	  bl        0x7CE58
	  li        r4, 0
	  lwz       r0, -0x6D0C(r13)
	  lis       r5, 0x804B
	  sub       r6, r30, r3
	  subi      r3, r5, 0x4364
	  cmplwi    r4, 0
	  stw       r6, 0x2C(r1)
	  li        r30, 0
	  stw       r3, 0x8(r1)
	  stw       r4, 0x14(r1)
	  stw       r4, 0xC(r1)
	  stw       r0, 0x10(r1)
	  bne-      .loc_0x138
	  mr        r3, r0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x324

	.loc_0x138:
	  mr        r3, r0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1A8

	.loc_0x154:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x324
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0x1A8:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x154
	  b         .loc_0x324

	.loc_0x1C8:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x17C(r3)
	  mr        r26, r3
	  rlwinm    r0,r0,0,26,24
	  stw       r0, 0x17C(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x268
	  mr        r3, r26
	  bl        -0xC370
	  cmpwi     r3, 0
	  bne-      .loc_0x268
	  mr        r3, r26
	  bl        -0xB294
	  cmpwi     r3, 0x6
	  beq-      .loc_0x268
	  cmpwi     r3, 0x12
	  beq-      .loc_0x268
	  lwz       r3, 0x2C4(r26)
	  cmplwi    r3, 0
	  beq-      .loc_0x268
	  lhz       r0, 0x2DC(r3)
	  cmpw      r29, r0
	  bne-      .loc_0x268
	  rlwinm.   r0,r31,0,24,31
	  beq-      .loc_0x258
	  lbz       r0, 0x2B8(r26)
	  cmpwi     r0, 0
	  bne-      .loc_0x268

	.loc_0x258:
	  lwz       r0, 0x17C(r26)
	  addi      r30, r30, 0x1
	  ori       r0, r0, 0x40
	  stw       r0, 0x17C(r26)

	.loc_0x268:
	  lwz       r0, 0x14(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x294
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x324

	.loc_0x294:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x308

	.loc_0x2B4:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x324
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0x308:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x2B4

	.loc_0x324:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0xC(r1)
	  cmplw     r4, r3
	  bne+      .loc_0x1C8
	  stw       r30, 0x28(r1)
	  addi      r4, r1, 0x18
	  lwz       r3, -0x6560(r13)
	  lwz       r0, 0x190(r27)
	  stw       r0, 0x30(r1)
	  bl        0x2A9948
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x404
	  lwz       r5, -0x6B70(r13)
	  li        r4, 0x3
	  li        r0, 0
	  mr        r3, r27
	  stb       r4, 0x19(r5)
	  stw       r0, 0x1C(r5)
	  lwz       r12, 0x0(r27)
	  lwz       r12, 0x7C(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, -0x6B70(r13)
	  lwz       r4, 0x48(r4)
	  bl        0x93124
	  lwz       r3, -0x6B70(r13)
	  addi      r4, r28, 0x1E8
	  li        r5, 0
	  bl        0x93128
	  mr        r3, r27
	  lwz       r12, 0x0(r27)
	  lwz       r12, 0x7C(r12)
	  mtctr     r12
	  bctrl
	  addi      r4, r28, 0x1E8
	  bl        0x5982C
	  stw       r28, 0x184(r27)
	  lis       r3, 0x8048
	  subi      r5, r3, 0x30CC
	  li        r4, 0x1
	  lbz       r0, 0x180(r27)
	  li        r6, 0x3
	  ori       r0, r0, 0x1
	  stb       r0, 0x180(r27)
	  lwz       r3, -0x6C18(r13)
	  bl        0x60BF8
	  lis       r4, 0x8048
	  lwz       r3, -0x6C18(r13)
	  subi      r5, r4, 0x30CC
	  li        r4, 0x1
	  bl        0x60BD4

	.loc_0x404:
	  lmw       r26, 0x48(r1)
	  lwz       r0, 0x64(r1)
	  mtlr      r0
	  addi      r1, r1, 0x60
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801543C8
 * Size:	000008
 */
void Game::SingleGameSection::getCurrentCourseInfo(void)
{
	/*
	.loc_0x0:
	  lwz       r3, 0x22C(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801543D0
 * Size:	00019C
 */
void Game::SingleGameSection::openCaveMoreMenu((Game::ItemHole::Item*,
                                                Controller*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stw       r31, 0x3C(r1)
	  mr        r31, r4
	  stw       r30, 0x38(r1)
	  mr        r30, r3
	  stw       r29, 0x34(r1)
	  lbz       r0, 0x194(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x180
	  lbz       r0, 0x180(r30)
	  rlwinm.   r0,r0,0,30,30
	  bne-      .loc_0x180
	  lis       r3, 0x804B
	  li        r9, 0
	  addi      r0, r3, 0x1148
	  li        r7, 0x1
	  lis       r3, 0x804B
	  stw       r0, 0x8(r1)
	  addi      r5, r3, 0x1130
	  li        r0, 0x18
	  li        r8, 0x45
	  stw       r9, 0x28(r1)
	  lis       r4, 0x745F
	  lis       r3, 0x804B
	  addi      r6, r4, 0x3031
	  stw       r5, 0x8(r1)
	  addi      r5, r3, 0x1118
	  li        r4, 0x4
	  stw       r0, 0x10(r1)
	  li        r0, 0xA
	  lis       r3, 0x8051
	  stw       r8, 0x14(r1)
	  stw       r7, 0x18(r1)
	  stw       r9, 0xC(r1)
	  stb       r7, 0x27(r1)
	  stw       r7, 0x1C(r1)
	  stw       r6, 0x20(r1)
	  stb       r9, 0x24(r1)
	  stb       r9, 0x25(r1)
	  stw       r5, 0x8(r1)
	  stb       r9, 0x2C(r1)
	  stb       r9, 0x2D(r1)
	  stw       r9, 0x28(r1)
	  stw       r4, 0x10(r1)
	  stw       r4, 0x14(r1)
	  stw       r0, 0x18(r1)
	  lwz       r0, 0x190(r30)
	  stw       r0, 0x20(r1)
	  lwzu      r12, 0x260C(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr.       r29, r3
	  ble-      .loc_0x110
	  li        r0, 0x1
	  li        r3, -0x1
	  stb       r0, 0x2C(r1)
	  bl        0x7C9A4
	  cmpw      r29, r3
	  bne-      .loc_0x104
	  li        r0, 0x1
	  stb       r0, 0x2D(r1)
	  b         .loc_0x11C

	.loc_0x104:
	  li        r0, 0
	  stb       r0, 0x2D(r1)
	  b         .loc_0x11C

	.loc_0x110:
	  li        r0, 0
	  stb       r0, 0x2D(r1)
	  stb       r0, 0x2C(r1)

	.loc_0x11C:
	  lwz       r3, -0x6560(r13)
	  addi      r4, r1, 0x8
	  bl        0x2A9B48
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x180
	  lwz       r6, -0x6B70(r13)
	  li        r4, 0x3
	  lis       r3, 0x8048
	  li        r0, 0
	  stb       r4, 0x19(r6)
	  subi      r5, r3, 0x30C0
	  li        r4, 0x1
	  stw       r0, 0x1C(r6)
	  li        r6, 0x3
	  stw       r31, 0x188(r30)
	  lbz       r0, 0x180(r30)
	  ori       r0, r0, 0x2
	  stb       r0, 0x180(r30)
	  lwz       r3, -0x6C18(r13)
	  bl        0x60A5C
	  lis       r4, 0x8048
	  lwz       r3, -0x6C18(r13)
	  subi      r5, r4, 0x30C0
	  li        r4, 0x1
	  bl        0x60A38

	.loc_0x180:
	  lwz       r0, 0x44(r1)
	  lwz       r31, 0x3C(r1)
	  lwz       r30, 0x38(r1)
	  lwz       r29, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8015456C
 * Size:	00002C
 */
void Game::SingleGameSection::saveCaveMore(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r4, 0
	  li        r5, 0
	  stw       r0, 0x14(r1)
	  lwz       r3, -0x6D0C(r13)
	  bl        0xC4F4
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80154598
 * Size:	000184
 */
void Game::SingleGameSection::openKanketuMenu((Game::ItemBigFountain::Item*,
                                               Controller*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stw       r31, 0x3C(r1)
	  mr        r31, r4
	  stw       r30, 0x38(r1)
	  mr        r30, r3
	  stw       r29, 0x34(r1)
	  lbz       r0, 0x194(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x168
	  lbz       r0, 0x180(r30)
	  rlwinm.   r0,r0,0,29,29
	  bne-      .loc_0x168
	  lis       r3, 0x804B
	  li        r9, 0
	  addi      r0, r3, 0x1148
	  li        r7, 0x1
	  lis       r3, 0x804B
	  stw       r0, 0x8(r1)
	  addi      r5, r3, 0x1130
	  li        r0, 0x18
	  li        r8, 0x45
	  stw       r9, 0x28(r1)
	  lis       r3, 0x745F
	  lis       r4, 0x804B
	  addi      r6, r3, 0x3031
	  stw       r5, 0x8(r1)
	  addi      r5, r4, 0x1100
	  li        r4, 0x4
	  stw       r0, 0x10(r1)
	  li        r0, 0xA
	  lis       r3, 0x8051
	  stw       r8, 0x14(r1)
	  stw       r7, 0x18(r1)
	  stw       r9, 0xC(r1)
	  stb       r7, 0x27(r1)
	  stw       r7, 0x1C(r1)
	  stw       r6, 0x20(r1)
	  stb       r9, 0x24(r1)
	  stb       r9, 0x25(r1)
	  stw       r5, 0x8(r1)
	  stb       r9, 0x2C(r1)
	  stb       r9, 0x2D(r1)
	  stb       r9, 0x2E(r1)
	  stw       r9, 0x28(r1)
	  stw       r4, 0x10(r1)
	  stw       r4, 0x14(r1)
	  stw       r0, 0x18(r1)
	  lwzu      r12, 0x260C(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr.       r29, r3
	  ble-      .loc_0x10C
	  li        r0, 0x1
	  li        r3, -0x1
	  stb       r0, 0x2C(r1)
	  bl        0x7C7E0
	  cmpw      r29, r3
	  bne-      .loc_0x100
	  li        r0, 0x1
	  stb       r0, 0x2D(r1)
	  b         .loc_0x118

	.loc_0x100:
	  li        r0, 0
	  stb       r0, 0x2D(r1)
	  b         .loc_0x118

	.loc_0x10C:
	  li        r0, 0
	  stb       r0, 0x2D(r1)
	  stb       r0, 0x2C(r1)

	.loc_0x118:
	  lwz       r3, -0x6560(r13)
	  addi      r4, r1, 0x8
	  bl        0x2A9714
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x168
	  stw       r31, 0x18C(r30)
	  lis       r3, 0x8048
	  subi      r5, r3, 0x30B0
	  li        r4, 0x1
	  lbz       r0, 0x180(r30)
	  li        r6, 0x3
	  ori       r0, r0, 0x4
	  stb       r0, 0x180(r30)
	  lwz       r3, -0x6C18(r13)
	  bl        0x608AC
	  lis       r4, 0x8048
	  lwz       r3, -0x6C18(r13)
	  subi      r5, r4, 0x30B0
	  li        r4, 0x1
	  bl        0x60888

	.loc_0x168:
	  lwz       r0, 0x44(r1)
	  lwz       r31, 0x3C(r1)
	  lwz       r30, 0x38(r1)
	  lwz       r29, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8015471C
 * Size:	000300
 */
void Game::SingleGameSection::updateCaveMenus(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lis       r3, 0x8048
	  stw       r30, 0x8(r1)
	  subi      r30, r3, 0x3268
	  lbz       r4, 0x180(r31)
	  rlwinm.   r0,r4,0,31,31
	  beq-      .loc_0x11C
	  lwz       r3, -0x6560(r13)
	  bl        0x2A95E4
	  cmpwi     r3, 0x2
	  beq-      .loc_0xD4
	  bge-      .loc_0x50
	  cmpwi     r3, 0
	  beq-      .loc_0x2E4
	  bge-      .loc_0x5C
	  b         .loc_0x2E4

	.loc_0x50:
	  cmpwi     r3, 0x4
	  bge-      .loc_0x2E4
	  b         .loc_0x108

	.loc_0x5C:
	  lwz       r6, -0x6D20(r13)
	  addi      r5, r30, 0x1C4
	  lwz       r3, -0x6B70(r13)
	  li        r4, 0
	  lwz       r7, 0xC8(r6)
	  li        r6, 0x3
	  lfs       f0, 0x9D0(r7)
	  stfs      f0, 0x24(r3)
	  lwz       r7, -0x6D20(r13)
	  lwz       r3, -0x6B70(r13)
	  lwz       r7, 0xC8(r7)
	  lfs       f0, 0x9D0(r7)
	  stfs      f0, 0x28(r3)
	  lwz       r3, -0x6C18(r13)
	  bl        0x607E4
	  lwz       r3, -0x6C18(r13)
	  addi      r5, r30, 0x1C4
	  li        r4, 0
	  bl        0x607C4
	  lbz       r0, 0x180(r31)
	  mr        r3, r31
	  rlwinm    r0,r0,0,24,30
	  stb       r0, 0x180(r31)
	  lwz       r12, 0x0(r31)
	  lwz       r4, 0x184(r31)
	  lwz       r12, 0x70(r12)
	  mtctr     r12
	  bctrl
	  li        r3, 0x1
	  b         .loc_0x2E8

	.loc_0xD4:
	  lwz       r3, -0x6C18(r13)
	  li        r4, 0
	  subi      r5, r2, 0x5D94
	  li        r6, 0x3
	  bl        0x60794
	  lwz       r3, -0x6C18(r13)
	  li        r4, 0
	  subi      r5, r2, 0x5D94
	  bl        0x60774
	  lbz       r0, 0x180(r31)
	  rlwinm    r0,r0,0,24,30
	  stb       r0, 0x180(r31)
	  b         .loc_0x2E4

	.loc_0x108:
	  lwz       r3, -0x6C18(r13)
	  addi      r5, r30, 0x1D0
	  li        r4, 0
	  bl        0x60754
	  b         .loc_0x2E4

	.loc_0x11C:
	  rlwinm.   r0,r4,0,30,30
	  beq-      .loc_0x234
	  lwz       r3, -0x6560(r13)
	  bl        0x2A98F8
	  cmpwi     r3, 0x2
	  beq-      .loc_0x1EC
	  bge-      .loc_0x148
	  cmpwi     r3, 0
	  beq-      .loc_0x2E4
	  bge-      .loc_0x154
	  b         .loc_0x2E4

	.loc_0x148:
	  cmpwi     r3, 0x4
	  bge-      .loc_0x2E4
	  b         .loc_0x220

	.loc_0x154:
	  lwz       r3, -0x6D20(r13)
	  li        r4, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, 0x2A0(r3)
	  li        r4, 0x1
	  lwz       r3, -0x6B70(r13)
	  stfs      f0, 0x24(r3)
	  lwz       r3, -0x6D20(r13)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, 0x2A0(r3)
	  addi      r5, r30, 0x1DC
	  lwz       r3, -0x6B70(r13)
	  li        r4, 0
	  li        r6, 0x3
	  stfs      f0, 0x28(r3)
	  lwz       r3, -0x6C18(r13)
	  bl        0x606CC
	  lwz       r3, -0x6C18(r13)
	  addi      r5, r30, 0x1DC
	  li        r4, 0
	  bl        0x606AC
	  lbz       r0, 0x180(r31)
	  mr        r3, r31
	  rlwinm    r0,r0,0,31,29
	  stb       r0, 0x180(r31)
	  lwz       r12, 0x0(r31)
	  lwz       r4, 0x188(r31)
	  lwz       r12, 0x6C(r12)
	  mtctr     r12
	  bctrl
	  li        r3, 0x1
	  b         .loc_0x2E8

	.loc_0x1EC:
	  lwz       r3, -0x6C18(r13)
	  li        r4, 0
	  subi      r5, r2, 0x5D8C
	  li        r6, 0x3
	  bl        0x6067C
	  lwz       r3, -0x6C18(r13)
	  li        r4, 0
	  subi      r5, r2, 0x5D8C
	  bl        0x6065C
	  lbz       r0, 0x180(r31)
	  rlwinm    r0,r0,0,31,29
	  stb       r0, 0x180(r31)
	  b         .loc_0x2E4

	.loc_0x220:
	  lwz       r3, -0x6C18(r13)
	  addi      r5, r30, 0x1E8
	  li        r4, 0
	  bl        0x6063C
	  b         .loc_0x2E4

	.loc_0x234:
	  rlwinm.   r0,r4,0,29,29
	  beq-      .loc_0x2E4
	  lwz       r3, -0x6560(r13)
	  bl        0x2A9644
	  cmpwi     r3, 0x2
	  beq-      .loc_0x2B4
	  bge-      .loc_0x2E4
	  cmpwi     r3, 0
	  beq-      .loc_0x2E4
	  bge-      .loc_0x264
	  b         .loc_0x2E4
	  b         .loc_0x2E4

	.loc_0x264:
	  lwz       r3, -0x6C18(r13)
	  addi      r5, r30, 0x1F4
	  li        r4, 0
	  li        r6, 0x3
	  bl        0x60604
	  lwz       r3, -0x6C18(r13)
	  addi      r5, r30, 0x1F4
	  li        r4, 0
	  bl        0x605E4
	  lbz       r0, 0x180(r31)
	  mr        r3, r31
	  rlwinm    r0,r0,0,30,28
	  stb       r0, 0x180(r31)
	  lwz       r12, 0x0(r31)
	  lwz       r4, 0x18C(r31)
	  lwz       r12, 0x74(r12)
	  mtctr     r12
	  bctrl
	  li        r3, 0x1
	  b         .loc_0x2E8

	.loc_0x2B4:
	  lwz       r3, -0x6C18(r13)
	  li        r4, 0
	  subi      r5, r2, 0x5D84
	  li        r6, 0x3
	  bl        0x605B4
	  lwz       r3, -0x6C18(r13)
	  li        r4, 0
	  subi      r5, r2, 0x5D84
	  bl        0x60594
	  lbz       r0, 0x180(r31)
	  rlwinm    r0,r0,0,30,28
	  stb       r0, 0x180(r31)

	.loc_0x2E4:
	  li        r3, 0

	.loc_0x2E8:
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
 * Address:	80154A1C
 * Size:	000040
 */
void Game::SingleGameSection::goNextFloor((Game::ItemHole::Item*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r5, r4
	  mr        r4, r3
	  stw       r0, 0x14(r1)
	  li        r0, 0x1
	  stb       r0, 0x194(r3)
	  lwz       r3, 0x250(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x38(r12)
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
 * Address:	80154A5C
 * Size:	000004
 */
void Game::SingleGame::State::onNextFloor((Game::SingleGameSection*,
                                           Game::ItemHole::Item*))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80154A60
 * Size:	000074
 */
void Game::SingleGameSection::goCave((Game::ItemCave::Item*))
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
	  addi      r3, r30, 0x195
	  lwz       r4, 0x1E0(r4)
	  bl        -0x8A22C
	  lwz       r4, 0x1F0(r31)
	  addi      r3, r30, 0x230
	  bl        0x2BE848
	  li        r0, 0x1
	  mr        r4, r30
	  stb       r0, 0x194(r30)
	  mr        r5, r31
	  stb       r0, 0x23C(r30)
	  lwz       r3, 0x250(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x34(r12)
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
 * Address:	80154AD4
 * Size:	000004
 */
void Game::SingleGame::State::onHoleIn((Game::SingleGameSection*,
                                        Game::ItemCave::Item*))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80154AD8
 * Size:	000048
 */
void Game::SingleGameSection::goMainMap((Game::ItemBigFountain::Item*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r5, r4
	  mr        r4, r3
	  stw       r0, 0x14(r1)
	  li        r0, 0x1
	  stb       r0, 0x194(r3)
	  li        r0, 0
	  stb       r0, 0x23C(r3)
	  lwz       r3, 0x250(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
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
 * Address:	80154B20
 * Size:	000004
 */
void Game::SingleGame::State::onFountainReturn((Game::SingleGameSection*,
                                                Game::ItemBigFountain::Item*))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80154B24
 * Size:	000020
 */
void Game::SingleGameSection::setupMainMapGames(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        0x34
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80154B44
 * Size:	000020
 */
void Game::SingleGameSection::setupCaveGames(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        .loc_0x20
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr

	.loc_0x20:
	*/
}

/*
 * --INFO--
 * Address:	80154B64
 * Size:	000474
 */
void Game::SingleGameSection::createFallPikmins(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x150(r1)
	  mflr      r0
	  stw       r0, 0x154(r1)
	  stfd      f31, 0x140(r1)
	  psq_st    f31,0x148(r1),0,0
	  stfd      f30, 0x130(r1)
	  psq_st    f30,0x138(r1),0,0
	  stfd      f29, 0x120(r1)
	  psq_st    f29,0x128(r1),0,0
	  stfd      f28, 0x110(r1)
	  psq_st    f28,0x118(r1),0,0
	  stfd      f27, 0x100(r1)
	  psq_st    f27,0x108(r1),0,0
	  stfd      f26, 0xF0(r1)
	  psq_st    f26,0xF8(r1),0,0
	  stfd      f25, 0xE0(r1)
	  psq_st    f25,0xE8(r1),0,0
	  stfd      f24, 0xD0(r1)
	  psq_st    f24,0xD8(r1),0,0
	  stfd      f23, 0xC0(r1)
	  psq_st    f23,0xC8(r1),0,0
	  stfd      f22, 0xB0(r1)
	  psq_st    f22,0xB8(r1),0,0
	  stfd      f21, 0xA0(r1)
	  psq_st    f21,0xA8(r1),0,0
	  stfd      f20, 0x90(r1)
	  psq_st    f20,0x98(r1),0,0
	  stmw      r26, 0x78(r1)
	  lwz       r3, -0x6CF8(r13)
	  addi      r4, r1, 0x38
	  li        r5, 0
	  lwz       r12, 0x4(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lwz       r5, -0x6B70(r13)
	  lis       r3, 0x8048
	  subi      r4, r3, 0x3068
	  addi      r3, r5, 0x60
	  bl        0x9C7A8
	  lwz       r3, -0x6D20(r13)
	  li        r4, 0
	  bl        0x66C0
	  cmplwi    r3, 0
	  beq-      .loc_0xE4
	  mr        r4, r3
	  addi      r3, r1, 0x8
	  lwz       r12, 0x0(r4)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x8(r1)
	  lfs       f1, 0xC(r1)
	  lfs       f0, 0x10(r1)
	  stfs      f2, 0x38(r1)
	  stfs      f1, 0x3C(r1)
	  stfs      f0, 0x40(r1)

	.loc_0xE4:
	  lwz       r3, -0x6CF8(r13)
	  addi      r4, r1, 0x38
	  lwz       r12, 0x4(r3)
	  lwz       r12, 0x28(r12)
	  mtctr     r12
	  bctrl
	  stfs      f1, 0x3C(r1)
	  li        r4, 0
	  lwz       r3, -0x6D20(r13)
	  bl        0x6614
	  lis       r3, 0x8050
	  lfd       f22, -0x5D50(r2)
	  lfs       f23, -0x5D7C(r2)
	  addi      r31, r3, 0x71A0
	  lfs       f24, -0x5D74(r2)
	  li        r29, 0
	  lfs       f25, -0x5D78(r2)
	  lis       r30, 0x4330
	  lfs       f26, -0x5D70(r2)
	  lfs       f27, -0x5D6C(r2)
	  lfs       f28, -0x5D64(r2)
	  lfs       f29, -0x5D68(r2)
	  lfs       f30, -0x5D98(r2)
	  lfs       f31, -0x5D60(r2)

	.loc_0x144:
	  li        r28, 0

	.loc_0x148:
	  li        r27, 0
	  b         .loc_0x3BC

	.loc_0x150:
	  bl        -0x8B714
	  xoris     r0, r3, 0x8000
	  stw       r30, 0x48(r1)
	  stw       r0, 0x4C(r1)
	  lfd       f0, 0x48(r1)
	  fsubs     f0, f0, f22
	  fdivs     f0, f0, f23
	  fmadds    f21, f24, f0, f25
	  bl        -0x8B734
	  xoris     r0, r3, 0x8000
	  stw       r30, 0x50(r1)
	  stw       r0, 0x54(r1)
	  lfd       f0, 0x50(r1)
	  fsubs     f0, f0, f22
	  fdivs     f0, f0, f23
	  fmuls     f20, f26, f0
	  bl        -0x8B754
	  xoris     r0, r3, 0x8000
	  stw       r30, 0x58(r1)
	  fmr       f1, f20
	  stw       r0, 0x5C(r1)
	  fcmpo     cr0, f20, f30
	  lfd       f0, 0x58(r1)
	  fsubs     f0, f0, f22
	  fdivs     f0, f0, f23
	  fmadds    f0, f28, f0, f29
	  fadds     f2, f27, f0
	  bge-      .loc_0x1C4
	  fneg      f1, f20

	.loc_0x1C4:
	  fmuls     f0, f1, f31
	  fcmpo     cr0, f20, f30
	  fctiwz    f0, f0
	  stfd      f0, 0x60(r1)
	  lwz       r0, 0x64(r1)
	  rlwinm    r0,r0,3,18,28
	  add       r3, r31, r0
	  lfs       f0, 0x4(r3)
	  fmuls     f1, f21, f0
	  bge-      .loc_0x218
	  lfs       f0, -0x5D5C(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fmuls     f0, f20, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x68(r1)
	  lwz       r0, 0x6C(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r3, r0
	  fneg      f0, f0
	  b         .loc_0x238

	.loc_0x218:
	  fmuls     f0, f20, f31
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fctiwz    f0, f0
	  stfd      f0, 0x70(r1)
	  lwz       r0, 0x74(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r3, r0

	.loc_0x238:
	  fmuls     f0, f21, f0
	  li        r0, 0x2
	  stfs      f2, 0x30(r1)
	  lwz       r3, -0x6D0C(r13)
	  stfs      f0, 0x2C(r1)
	  stfs      f1, 0x34(r1)
	  stw       r0, -0x6D08(r13)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x7C(r12)
	  mtctr     r12
	  bctrl
	  lfs       f1, 0x2C(r1)
	  li        r6, 0
	  lfs       f0, 0x38(r1)
	  mr.       r26, r3
	  lfs       f3, 0x30(r1)
	  fadds     f4, f1, f0
	  lfs       f2, 0x3C(r1)
	  lfs       f1, 0x34(r1)
	  lfs       f0, 0x40(r1)
	  fadds     f2, f3, f2
	  stw       r6, -0x6D08(r13)
	  fadds     f0, f1, f0
	  stfs      f4, 0x2C(r1)
	  stfs      f2, 0x30(r1)
	  stfs      f0, 0x34(r1)
	  beq-      .loc_0x398
	  lis       r5, 0x804B
	  lis       r4, 0x804B
	  subi      r5, r5, 0x5D0C
	  li        r0, 0xF
	  stw       r5, 0x20(r1)
	  addi      r5, r4, 0x10F4
	  addi      r4, r1, 0x20
	  stw       r5, 0x20(r1)
	  stw       r0, 0x24(r1)
	  stw       r6, 0x28(r1)
	  bl        -0x19E68
	  mr        r3, r26
	  addi      r4, r1, 0x2C
	  li        r5, 0
	  bl        -0x19C98
	  bl        -0x8B8A4
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x74(r1)
	  mr        r3, r26
	  lfd       f3, -0x5D50(r2)
	  mr        r4, r29
	  stw       r0, 0x70(r1)
	  lfs       f1, -0x5D7C(r2)
	  lfd       f2, 0x70(r1)
	  lfs       f0, -0x5D70(r2)
	  fsubs     f2, f2, f3
	  fdivs     f1, f2, f1
	  fmuls     f0, f0, f1
	  stfs      f0, 0x1FC(r26)
	  bl        -0xA8C0
	  mr        r3, r26
	  mr        r4, r28
	  bl        -0xA71C
	  bl        -0x8B8F0
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x6C(r1)
	  mr        r3, r26
	  lfs       f2, -0x5D98(r2)
	  addi      r4, r1, 0x14
	  stw       r0, 0x68(r1)
	  lfd       f1, -0x5D50(r2)
	  lfd       f0, 0x68(r1)
	  lfs       f3, -0x5D7C(r2)
	  fsubs     f4, f0, f1
	  lfs       f1, -0x5D54(r2)
	  lfs       f0, -0x5D58(r2)
	  stfs      f2, 0x14(r1)
	  fdivs     f3, f4, f3
	  stfs      f2, 0x1C(r1)
	  fnmadds   f0, f1, f3, f0
	  stfs      f0, 0x18(r1)
	  lwz       r12, 0x0(r26)
	  lwz       r12, 0x68(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r26
	  li        r4, 0
	  bl        -0x194A4
	  b         .loc_0x3B8

	.loc_0x398:
	  lwz       r3, -0x6B70(r13)
	  mr        r4, r29
	  mr        r5, r28
	  addi      r3, r3, 0xA8
	  bl        0x9C510
	  lwz       r4, 0x0(r3)
	  addi      r0, r4, 0x1
	  stw       r0, 0x0(r3)

	.loc_0x3B8:
	  addi      r27, r27, 0x1

	.loc_0x3BC:
	  lwz       r3, -0x6B70(r13)
	  mr        r4, r29
	  mr        r5, r28
	  addi      r3, r3, 0x60
	  bl        0x9C4EC
	  lwz       r0, 0x0(r3)
	  cmpw      r27, r0
	  blt+      .loc_0x150
	  addi      r28, r28, 0x1
	  cmpwi     r28, 0x3
	  blt+      .loc_0x148
	  addi      r29, r29, 0x1
	  cmpwi     r29, 0x7
	  blt+      .loc_0x144
	  lwz       r3, -0x6B70(r13)
	  addi      r3, r3, 0x60
	  bl        0x9C32C
	  psq_l     f31,0x148(r1),0,0
	  lfd       f31, 0x140(r1)
	  psq_l     f30,0x138(r1),0,0
	  lfd       f30, 0x130(r1)
	  psq_l     f29,0x128(r1),0,0
	  lfd       f29, 0x120(r1)
	  psq_l     f28,0x118(r1),0,0
	  lfd       f28, 0x110(r1)
	  psq_l     f27,0x108(r1),0,0
	  lfd       f27, 0x100(r1)
	  psq_l     f26,0xF8(r1),0,0
	  lfd       f26, 0xF0(r1)
	  psq_l     f25,0xE8(r1),0,0
	  lfd       f25, 0xE0(r1)
	  psq_l     f24,0xD8(r1),0,0
	  lfd       f24, 0xD0(r1)
	  psq_l     f23,0xC8(r1),0,0
	  lfd       f23, 0xC0(r1)
	  psq_l     f22,0xB8(r1),0,0
	  lfd       f22, 0xB0(r1)
	  psq_l     f21,0xA8(r1),0,0
	  lfd       f21, 0xA0(r1)
	  psq_l     f20,0x98(r1),0,0
	  lfd       f20, 0x90(r1)
	  lmw       r26, 0x78(r1)
	  lwz       r0, 0x154(r1)
	  mtlr      r0
	  addi      r1, r1, 0x150
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000440
 */
void Game::SingleGameSection::createFallPikmins((Game::PikiContainer&, int))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80154FD8
 * Size:	000504
 */
void Game::SingleGameSection::setDispMemberSMenu(
    (og::Screen::DispMemberSMenuAll&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stmw      r26, 0x8(r1)
	  mr        r28, r3
	  mr        r29, r4
	  lwz       r3, -0x6D20(r13)
	  bl        0x5C2C
	  cmplwi    r3, 0
	  li        r30, 0
	  beq-      .loc_0x30
	  lhz       r30, 0x2DC(r3)

	.loc_0x30:
	  lwz       r3, -0x6C18(r13)
	  lwz       r3, 0x40(r3)
	  lwz       r0, 0x218(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x4C
	  li        r0, 0x1
	  stb       r0, 0xC0(r29)

	.loc_0x4C:
	  lwz       r3, -0x6B70(r13)
	  li        r4, 0x9
	  addi      r3, r3, 0x48
	  bl        0x90FA0
	  lwz       r5, -0x6B70(r13)
	  mr        r31, r3
	  li        r4, 0x8
	  addi      r3, r5, 0x48
	  bl        0x90F8C
	  rlwinm.   r0,r3,0,24,31
	  li        r4, 0
	  beq-      .loc_0x88
	  rlwinm.   r0,r31,0,24,31
	  beq-      .loc_0x88
	  li        r4, 0x1

	.loc_0x88:
	  rlwinm.   r0,r4,0,24,31
	  beq-      .loc_0x98
	  li        r3, 0x3
	  b         .loc_0xB8

	.loc_0x98:
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xA8
	  li        r3, 0x1
	  b         .loc_0xB8

	.loc_0xA8:
	  rlwinm.   r0,r31,0,24,31
	  li        r3, 0
	  beq-      .loc_0xB8
	  li        r3, 0x2

	.loc_0xB8:
	  stw       r3, 0x64(r29)
	  li        r4, 0x1
	  lwz       r3, -0x6B70(r13)
	  addi      r3, r3, 0xA8
	  bl        0x9C510
	  stw       r3, 0x68(r29)
	  li        r4, 0x2
	  lwz       r3, -0x6B70(r13)
	  addi      r3, r3, 0xA8
	  bl        0x9C4FC
	  stw       r3, 0x6C(r29)
	  li        r4, 0
	  lwz       r3, -0x6B70(r13)
	  addi      r3, r3, 0xA8
	  bl        0x9C4E8
	  stw       r3, 0x70(r29)
	  li        r4, 0x4
	  lwz       r3, -0x6B70(r13)
	  addi      r3, r3, 0xA8
	  bl        0x9C4D4
	  stw       r3, 0x74(r29)
	  li        r4, 0x3
	  lwz       r3, -0x6B70(r13)
	  addi      r3, r3, 0xA8
	  bl        0x9C4C0
	  cmpwi     r30, 0
	  stw       r3, 0x78(r29)
	  li        r0, 0
	  blt-      .loc_0x138
	  cmpwi     r30, 0x7
	  bge-      .loc_0x138
	  li        r0, 0x1

	.loc_0x138:
	  rlwinm.   r0,r0,0,24,31
	  bne-      .loc_0x15C
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  subi      r3, r3, 0x3054
	  li        r4, 0x77
	  subi      r5, r5, 0x323C
	  crclr     6, 0x6
	  bl        -0x12AAF0

	.loc_0x15C:
	  lis       r3, 0x8051
	  rlwinm    r5,r30,5,0,26
	  addi      r0, r3, 0x22EC
	  li        r4, 0x1
	  add       r31, r0, r5
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  cmpwi     r30, 0
	  stw       r3, 0x7C(r29)
	  li        r0, 0
	  blt-      .loc_0x1A0
	  cmpwi     r30, 0x7
	  bge-      .loc_0x1A0
	  li        r0, 0x1

	.loc_0x1A0:
	  rlwinm.   r0,r0,0,24,31
	  bne-      .loc_0x1C4
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  subi      r3, r3, 0x3054
	  li        r4, 0x77
	  subi      r5, r5, 0x323C
	  crclr     6, 0x6
	  bl        -0x12AB58

	.loc_0x1C4:
	  mr        r3, r31
	  li        r4, 0x2
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  cmpwi     r30, 0
	  stw       r3, 0x80(r29)
	  li        r0, 0
	  blt-      .loc_0x1F8
	  cmpwi     r30, 0x7
	  bge-      .loc_0x1F8
	  li        r0, 0x1

	.loc_0x1F8:
	  rlwinm.   r0,r0,0,24,31
	  bne-      .loc_0x21C
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  subi      r3, r3, 0x3054
	  li        r4, 0x77
	  subi      r5, r5, 0x323C
	  crclr     6, 0x6
	  bl        -0x12ABB0

	.loc_0x21C:
	  mr        r3, r31
	  li        r4, 0
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  cmpwi     r30, 0
	  stw       r3, 0x84(r29)
	  li        r0, 0
	  blt-      .loc_0x250
	  cmpwi     r30, 0x7
	  bge-      .loc_0x250
	  li        r0, 0x1

	.loc_0x250:
	  rlwinm.   r0,r0,0,24,31
	  bne-      .loc_0x274
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  subi      r3, r3, 0x3054
	  li        r4, 0x77
	  subi      r5, r5, 0x323C
	  crclr     6, 0x6
	  bl        -0x12AC08

	.loc_0x274:
	  mr        r3, r31
	  li        r4, 0x4
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  cmpwi     r30, 0
	  stw       r3, 0x88(r29)
	  li        r0, 0
	  blt-      .loc_0x2A8
	  cmpwi     r30, 0x7
	  bge-      .loc_0x2A8
	  li        r0, 0x1

	.loc_0x2A8:
	  rlwinm.   r0,r0,0,24,31
	  bne-      .loc_0x2CC
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  subi      r3, r3, 0x3054
	  li        r4, 0x77
	  subi      r5, r5, 0x323C
	  crclr     6, 0x6
	  bl        -0x12AC60

	.loc_0x2CC:
	  mr        r3, r31
	  li        r4, 0x3
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  lis       r4, 0x8051
	  li        r31, 0
	  stw       r3, 0x8C(r29)
	  addi      r27, r4, 0x22EC
	  mr        r30, r31

	.loc_0x2F8:
	  mr        r3, r27
	  lwz       r12, 0x0(r27)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  addi      r30, r30, 0x1
	  add       r31, r31, r3
	  cmpwi     r30, 0x7
	  addi      r27, r27, 0x20
	  blt+      .loc_0x2F8
	  lis       r3, 0x8051
	  li        r27, 0
	  addi      r26, r3, 0x250C
	  mr        r30, r27

	.loc_0x330:
	  mr        r3, r26
	  lwz       r12, 0x0(r26)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  addi      r30, r30, 0x1
	  add       r27, r27, r3
	  cmpwi     r30, 0x7
	  addi      r26, r26, 0x20
	  blt+      .loc_0x330
	  lis       r3, 0x8051
	  lwzu      r12, 0x25EC(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  sub       r0, r3, r31
	  li        r4, 0x1
	  sub       r0, r0, r27
	  stw       r0, 0x90(r29)
	  lwz       r5, -0x6B70(r13)
	  lwz       r3, -0x6C10(r13)
	  lwz       r5, 0xE8(r5)
	  lwz       r0, 0x48(r3)
	  sub       r0, r0, r5
	  stw       r0, 0x94(r29)
	  lwz       r3, -0x6C18(r13)
	  lbz       r0, 0x48(r3)
	  stb       r0, 0xA5(r29)
	  lwz       r3, -0x6C18(r13)
	  lbz       r0, 0x48(r3)
	  cntlzw    r0, r0
	  rlwinm    r0,r0,27,5,31
	  stb       r0, 0xA6(r29)
	  lwz       r3, -0x6B70(r13)
	  bl        0x91C90
	  stb       r3, 0xA0(r29)
	  li        r4, 0x2
	  lwz       r3, -0x6B70(r13)
	  bl        0x91C80
	  stb       r3, 0xA1(r29)
	  li        r4, 0
	  lwz       r3, -0x6B70(r13)
	  bl        0x91C70
	  stb       r3, 0xA2(r29)
	  li        r4, 0x4
	  lwz       r3, -0x6B70(r13)
	  bl        0x91C60
	  stb       r3, 0xA3(r29)
	  li        r4, 0x3
	  lwz       r3, -0x6B70(r13)
	  bl        0x91C50
	  stb       r3, 0xA4(r29)
	  li        r4, 0x1
	  lwz       r0, 0x190(r28)
	  stw       r0, 0x9C(r29)
	  lwz       r3, 0x22C(r28)
	  lwz       r0, 0x48(r3)
	  stw       r0, 0x98(r29)
	  lwz       r3, -0x6B70(r13)
	  bl        0x92FE4
	  stw       r3, 0x3C(r29)
	  li        r4, 0x1
	  lwz       r3, -0x6B70(r13)
	  bl        0x931D4
	  stw       r3, 0x40(r29)
	  li        r4, 0
	  lwz       r3, -0x6B70(r13)
	  bl        0x92FC4
	  stw       r3, 0x44(r29)
	  li        r4, 0
	  lwz       r3, -0x6B70(r13)
	  bl        0x931B4
	  stw       r3, 0x48(r29)
	  li        r26, 0

	.loc_0x458:
	  lwz       r3, -0x6B70(r13)
	  mr        r4, r26
	  addi      r3, r3, 0x48
	  bl        0x90B94
	  addi      r0, r26, 0x4C
	  addi      r26, r26, 0x1
	  cmpwi     r26, 0xC
	  stbx      r3, r29, r0
	  blt+      .loc_0x458
	  lwz       r5, -0x6B70(r13)
	  lis       r3, 0x8051
	  lwz       r4, -0x6C10(r13)
	  lwz       r5, 0xE8(r5)
	  lwz       r0, 0x48(r4)
	  sub       r0, r0, r5
	  stw       r0, 0x10(r29)
	  lwz       r4, -0x6B70(r13)
	  lwz       r0, 0xE8(r4)
	  stw       r0, 0x14(r29)
	  lwz       r4, -0x6B70(r13)
	  lwz       r0, 0xEC(r4)
	  stw       r0, 0x24(r29)
	  lwzu      r12, 0x260C(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  neg       r0, r3
	  li        r4, 0x1E
	  or        r0, r0, r3
	  rlwinm    r0,r0,1,31,31
	  stb       r0, 0x2D(r29)
	  lwz       r3, -0x6B70(r13)
	  bl        0x91F30
	  stb       r3, 0x58(r29)
	  li        r4, 0x1D
	  lwz       r3, -0x6B70(r13)
	  bl        0x91F20
	  stb       r3, 0x59(r29)
	  lmw       r26, 0x8(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801554DC
 * Size:	000010
 */
void Game::GameStat::PikiCounter::operator()((int))
{
	/*
	.loc_0x0:
	  rlwinm    r0,r4,2,0,29
	  add       r3, r3, r0
	  lwz       r3, 0x4(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000E0
 */
void Game::SingleGameSection::setDispMemberNavi((og::Screen::DataNavi&, int))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000148
 */
void Game::SingleGameSection::calcOtakaraLevel((float&))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801554EC
 * Size:	00058C
 */
void Game::SingleGameSection::updateMainMapScreen(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0xD0(r1)
	  mflr      r0
	  lis       r11, 0x804B
	  lis       r5, 0x804B
	  stw       r0, 0xD4(r1)
	  lis       r4, 0x804B
	  lfs       f3, -0x5D44(r2)
	  li        r12, 0
	  stw       r31, 0xCC(r1)
	  li        r8, 0x1
	  lfs       f2, -0x5D40(r2)
	  li        r6, 0xA
	  stw       r30, 0xC8(r1)
	  li        r7, 0x2
	  lfs       f1, -0x5D3C(r2)
	  li        r10, 0x4D2
	  stw       r29, 0xC4(r1)
	  addi      r29, r4, 0x1148
	  lfs       f4, -0x5D98(r2)
	  lis       r4, 0x804B
	  lfs       f0, -0x5D48(r2)
	  li        r9, 0x32
	  stw       r29, 0x30(r1)
	  addi      r11, r11, 0x10DC
	  mr        r30, r3
	  addi      r5, r5, 0x10C4
	  stw       r29, 0x98(r1)
	  addi      r0, r4, 0x10AC
	  lwz       r3, -0x6D20(r13)
	  stw       r29, 0xA8(r1)
	  stw       r12, 0x34(r1)
	  stw       r11, 0x30(r1)
	  stfs      f4, 0x38(r1)
	  stw       r12, 0x3C(r1)
	  stw       r12, 0x44(r1)
	  stw       r10, 0x40(r1)
	  stw       r9, 0x48(r1)
	  stb       r12, 0x4C(r1)
	  stw       r12, 0x50(r1)
	  stfs      f3, 0x54(r1)
	  stw       r8, 0x58(r1)
	  stw       r7, 0x5C(r1)
	  stw       r6, 0x60(r1)
	  stw       r6, 0x64(r1)
	  stb       r8, 0x68(r1)
	  stfs      f3, 0x6C(r1)
	  stw       r8, 0x70(r1)
	  stw       r7, 0x74(r1)
	  stw       r6, 0x78(r1)
	  stw       r6, 0x7C(r1)
	  stb       r8, 0x80(r1)
	  stw       r12, 0x9C(r1)
	  stw       r5, 0x98(r1)
	  stfs      f2, 0xA4(r1)
	  stfs      f2, 0xA0(r1)
	  stw       r12, 0xAC(r1)
	  stw       r0, 0xA8(r1)
	  stfs      f1, 0xB4(r1)
	  stfs      f1, 0xB0(r1)
	  stb       r12, 0x8E(r1)
	  stfs      f0, 0x84(r1)
	  stb       r12, 0x8C(r1)
	  stb       r8, 0x8D(r1)
	  stw       r8, 0x88(r1)
	  stb       r12, 0x8F(r1)
	  stb       r12, 0x90(r1)
	  stb       r12, 0x91(r1)
	  stb       r12, 0x92(r1)
	  stb       r12, 0x93(r1)
	  stb       r12, 0x94(r1)
	  bl        0x561C
	  lfs       f0, -0x5D48(r2)
	  cmplwi    r3, 0
	  li        r29, 0x5
	  stfs      f0, 0x8(r1)
	  beq-      .loc_0x1B4
	  mr        r4, r3
	  addi      r3, r1, 0x24
	  lwz       r12, 0x0(r4)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x24(r1)
	  addi      r4, r1, 0xC
	  lfs       f1, 0x28(r1)
	  addi      r5, r1, 0x18
	  lfs       f0, 0x2C(r1)
	  addi      r6, r1, 0x8
	  stfs      f2, 0xC(r1)
	  lwz       r3, -0x6A50(r13)
	  stfs      f1, 0x10(r1)
	  lfs       f1, -0x5D48(r2)
	  stfs      f0, 0x14(r1)
	  bl        0xC9114
	  mr        r29, r3
	  cmpwi     r29, 0x2
	  bne-      .loc_0x1A8
	  lfs       f1, 0x8(r1)
	  lfs       f0, -0x5D48(r2)
	  lfs       f2, -0x5D44(r2)
	  fdivs     f1, f1, f0
	  lfs       f0, -0x5D98(r2)
	  fsubs     f1, f2, f1
	  fcmpo     cr0, f1, f0
	  blt-      .loc_0x1B4
	  b         .loc_0x1B4

	.loc_0x1A8:
	  cmpwi     r29, 0x1
	  bne-      .loc_0x1B4
	  bl        -0x8C0FC

	.loc_0x1B4:
	  lfs       f0, 0x8(r1)
	  li        r31, 0
	  stw       r29, 0x88(r1)
	  stfs      f0, 0x84(r1)
	  lbz       r0, 0x23E(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0x1F4
	  cmpwi     r29, 0
	  bne-      .loc_0x1F4
	  lwz       r3, -0x6560(r13)
	  bl        0x2A6AFC
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x1F4
	  li        r0, 0x1
	  li        r31, 0x1
	  stb       r0, 0x23E(r30)

	.loc_0x1F4:
	  lbz       r0, 0x23D(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0x210
	  cmpwi     r29, 0
	  bne-      .loc_0x210
	  li        r0, 0x1
	  stb       r0, 0x23D(r30)

	.loc_0x210:
	  lbz       r0, 0x23D(r30)
	  cmplwi    r0, 0
	  beq-      .loc_0x238
	  cmpwi     r29, 0
	  beq-      .loc_0x238
	  cmpwi     r29, 0x5
	  beq-      .loc_0x238
	  li        r0, 0
	  stb       r0, 0x23D(r30)
	  stb       r0, 0x23E(r30)

	.loc_0x238:
	  lbz       r0, 0x23D(r30)
	  li        r4, 0x8
	  lwz       r3, -0x6B70(r13)
	  stb       r0, 0x93(r1)
	  addi      r3, r3, 0x48
	  stb       r31, 0x94(r1)
	  bl        0x90894
	  stb       r3, 0x8C(r1)
	  li        r3, -0x1
	  lwz       r4, -0x6C18(r13)
	  lwz       r4, 0x40(r4)
	  lwz       r4, 0x218(r4)
	  neg       r0, r4
	  or        r0, r0, r4
	  rlwinm    r0,r0,1,31,31
	  stb       r0, 0x8D(r1)
	  bl        0x7B6FC
	  mr        r29, r3
	  li        r3, -0x1
	  bl        0x7B77C
	  sub       r0, r29, r3
	  li        r3, -0x1
	  stw       r0, 0x48(r1)
	  bl        0x7B7BC
	  mr        r29, r3
	  li        r3, -0x1
	  bl        0x7B760
	  sub       r0, r29, r3
	  lwz       r3, -0x6C18(r13)
	  stw       r0, 0x40(r1)
	  lwz       r3, 0x40(r3)
	  lwz       r4, 0x218(r3)
	  addi      r0, r4, 0x1
	  stw       r0, 0x3C(r1)
	  bl        -0x2E4E8
	  lwz       r3, -0x6B70(r13)
	  li        r4, 0x1E
	  stfs      f1, 0x38(r1)
	  lwz       r0, 0xE8(r3)
	  stw       r0, 0x50(r1)
	  bl        0x91C1C
	  mr        r29, r3
	  lwz       r3, -0x6B70(r13)
	  li        r4, 0x1D
	  bl        0x91C0C
	  mr        r31, r3
	  lwz       r3, -0x6B70(r13)
	  li        r4, 0x38
	  bl        0x91BFC
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x310
	  li        r0, 0x1
	  stb       r0, 0x8F(r1)
	  b         .loc_0x318

	.loc_0x310:
	  li        r0, 0
	  stb       r0, 0x8F(r1)

	.loc_0x318:
	  lwz       r3, -0x6B70(r13)
	  li        r4, 0x37
	  bl        0x91BD4
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x338
	  li        r0, 0x1
	  stb       r0, 0x90(r1)
	  b         .loc_0x340

	.loc_0x338:
	  li        r0, 0
	  stb       r0, 0x90(r1)

	.loc_0x340:
	  lwz       r3, -0x6560(r13)
	  bl        0x2A6994
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x394
	  lwz       r3, -0x64AC(r13)
	  lwz       r0, 0x18(r3)
	  cmpwi     r0, 0
	  bne-      .loc_0x394
	  rlwinm.   r0,r29,0,24,31
	  beq-      .loc_0x394
	  lwz       r3, -0x6B70(r13)
	  li        r4, 0x38
	  bl        0x91B84
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x394
	  lwz       r3, -0x6B70(r13)
	  li        r4, 0x38
	  bl        0x91B34
	  li        r0, 0x1
	  stb       r0, 0x91(r1)
	  b         .loc_0x39C

	.loc_0x394:
	  li        r0, 0
	  stb       r0, 0x91(r1)

	.loc_0x39C:
	  lwz       r3, -0x6560(r13)
	  bl        0x2A6938
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x3F0
	  lwz       r3, -0x64AC(r13)
	  lwz       r0, 0x18(r3)
	  cmpwi     r0, 0
	  bne-      .loc_0x3F0
	  rlwinm.   r0,r31,0,24,31
	  beq-      .loc_0x3F0
	  lwz       r3, -0x6B70(r13)
	  li        r4, 0x37
	  bl        0x91B28
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x3F0
	  lwz       r3, -0x6B70(r13)
	  li        r4, 0x37
	  bl        0x91AD8
	  li        r0, 0x1
	  stb       r0, 0x92(r1)
	  b         .loc_0x3F8

	.loc_0x3F0:
	  li        r0, 0
	  stb       r0, 0x92(r1)

	.loc_0x3F8:
	  lwz       r3, -0x6B70(r13)
	  lbz       r0, 0x2F(r3)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0x410
	  li        r0, 0x1
	  stb       r0, 0x8E(r1)

	.loc_0x410:
	  lwz       r3, -0x6D20(r13)
	  bl        0x5320
	  cmplwi    r3, 0
	  li        r31, 0x2
	  beq-      .loc_0x428
	  lhz       r31, 0x2DC(r3)

	.loc_0x428:
	  lis       r3, 0x8051
	  lwzu      r12, 0x22EC(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x58(r1)
	  li        r4, 0x1
	  lwz       r3, -0x6B70(r13)
	  bl        0x92AA4
	  stw       r3, 0x60(r1)
	  li        r4, 0
	  lwz       r3, -0x6B70(r13)
	  bl        0x92A94
	  stw       r3, 0x64(r1)
	  li        r4, 0
	  lwz       r3, -0x6D20(r13)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  mr        r29, r3
	  bl        -0x1396C
	  stfs      f1, 0x54(r1)
	  mr        r3, r29
	  bl        -0xEF4C
	  cmpwi     r31, 0
	  stw       r3, 0x5C(r1)
	  bne-      .loc_0x4AC
	  li        r3, 0x1
	  li        r0, 0
	  stb       r3, 0x68(r1)
	  stb       r0, 0x80(r1)
	  b         .loc_0x4F8

	.loc_0x4AC:
	  cmpwi     r31, 0x1
	  bne-      .loc_0x4C8
	  li        r3, 0
	  li        r0, 0x1
	  stb       r3, 0x68(r1)
	  stb       r0, 0x80(r1)
	  b         .loc_0x4F8

	.loc_0x4C8:
	  lwz       r0, 0xE4(r30)
	  cmpwi     r0, 0
	  bne-      .loc_0x4E8
	  li        r3, 0
	  li        r0, 0x1
	  stb       r3, 0x68(r1)
	  stb       r0, 0x80(r1)
	  b         .loc_0x4F8

	.loc_0x4E8:
	  li        r3, 0x1
	  li        r0, 0
	  stb       r3, 0x68(r1)
	  stb       r0, 0x80(r1)

	.loc_0x4F8:
	  lis       r3, 0x8051
	  addi      r3, r3, 0x22EC
	  lwzu      r12, 0x20(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x70(r1)
	  li        r4, 0x1
	  lwz       r3, -0x6B70(r13)
	  bl        0x929D0
	  stw       r3, 0x78(r1)
	  li        r4, 0
	  lwz       r3, -0x6B70(r13)
	  bl        0x929C0
	  stw       r3, 0x7C(r1)
	  li        r4, 0x1
	  lwz       r3, -0x6D20(r13)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  mr        r29, r3
	  bl        -0x13A40
	  stfs      f1, 0x6C(r1)
	  mr        r3, r29
	  bl        -0xF020
	  stw       r3, 0x74(r1)
	  addi      r4, r1, 0x30
	  lwz       r3, -0x6560(r13)
	  bl        0x2A6644
	  lwz       r0, 0xD4(r1)
	  lwz       r31, 0xCC(r1)
	  lwz       r30, 0xC8(r1)
	  lwz       r29, 0xC4(r1)
	  mtlr      r0
	  addi      r1, r1, 0xD0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80155A78
 * Size:	000004
 */
void Game::SingleGameSection::drawMainMapScreen(void)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80155A7C
 * Size:	0004D8
 */
void Game::SingleGameSection::updateCaveScreen(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0xB0(r1)
	  mflr      r0
	  lis       r4, 0x804B
	  lis       r8, 0x804B
	  stw       r0, 0xB4(r1)
	  addi      r10, r4, 0x1148
	  li        r9, 0
	  lfs       f1, -0x5D44(r2)
	  stw       r31, 0xAC(r1)
	  li        r5, 0x1
	  lfs       f2, -0x5D98(r2)
	  li        r0, 0xA
	  stw       r30, 0xA8(r1)
	  li        r4, 0x2
	  lfs       f0, -0x5D48(r2)
	  li        r7, 0x4D2
	  stw       r29, 0xA4(r1)
	  li        r6, 0x32
	  mr        r31, r3
	  addi      r8, r8, 0x1094
	  stb       r9, 0x4C(r1)
	  lwz       r3, -0x6D20(r13)
	  stw       r10, 0x30(r1)
	  stw       r9, 0x34(r1)
	  stw       r8, 0x30(r1)
	  stfs      f2, 0x38(r1)
	  stw       r9, 0x3C(r1)
	  stw       r9, 0x44(r1)
	  stw       r7, 0x40(r1)
	  stw       r6, 0x48(r1)
	  stw       r9, 0x50(r1)
	  stfs      f1, 0x54(r1)
	  stw       r5, 0x58(r1)
	  stw       r4, 0x5C(r1)
	  stw       r0, 0x60(r1)
	  stw       r0, 0x64(r1)
	  stb       r5, 0x68(r1)
	  stfs      f1, 0x6C(r1)
	  stw       r5, 0x70(r1)
	  stw       r4, 0x74(r1)
	  stw       r0, 0x78(r1)
	  stw       r0, 0x7C(r1)
	  stb       r5, 0x80(r1)
	  stb       r5, 0x4C(r1)
	  stb       r9, 0x8D(r1)
	  stb       r9, 0x8E(r1)
	  stfs      f0, 0x84(r1)
	  stb       r9, 0x8C(r1)
	  stw       r5, 0x88(r1)
	  stb       r9, 0x8F(r1)
	  stb       r9, 0x92(r1)
	  stb       r9, 0x93(r1)
	  stb       r9, 0x90(r1)
	  stb       r9, 0x91(r1)
	  bl        0x50CC
	  lfs       f0, -0x5D48(r2)
	  cmplwi    r3, 0
	  li        r30, 0x5
	  stfs      f0, 0x8(r1)
	  beq-      .loc_0x174
	  mr        r4, r3
	  addi      r3, r1, 0x24
	  lwz       r12, 0x0(r4)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x24(r1)
	  addi      r4, r1, 0xC
	  lfs       f1, 0x28(r1)
	  addi      r5, r1, 0x18
	  lfs       f0, 0x2C(r1)
	  addi      r6, r1, 0x8
	  stfs      f2, 0xC(r1)
	  lwz       r3, -0x6A50(r13)
	  stfs      f1, 0x10(r1)
	  lfs       f1, -0x5D48(r2)
	  stfs      f0, 0x14(r1)
	  bl        0xC8BC4
	  mr        r30, r3
	  cmpwi     r30, 0x2
	  bne-      .loc_0x168
	  lfs       f1, 0x8(r1)
	  lfs       f0, -0x5D48(r2)
	  lfs       f2, -0x5D44(r2)
	  fdivs     f1, f1, f0
	  lfs       f0, -0x5D98(r2)
	  fsubs     f1, f2, f1
	  fcmpo     cr0, f1, f0
	  blt-      .loc_0x174
	  b         .loc_0x174

	.loc_0x168:
	  cmpwi     r30, 0x1
	  bne-      .loc_0x174
	  bl        -0x8C64C

	.loc_0x174:
	  lfs       f0, 0x8(r1)
	  li        r29, 0
	  stw       r30, 0x88(r1)
	  stfs      f0, 0x84(r1)
	  lbz       r0, 0x23E(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x1B4
	  cmpwi     r30, 0
	  bne-      .loc_0x1B4
	  lwz       r3, -0x6560(r13)
	  bl        0x2A67C0
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x1B4
	  li        r0, 0x1
	  li        r29, 0x1
	  stb       r0, 0x23E(r31)

	.loc_0x1B4:
	  lbz       r0, 0x23D(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x1D0
	  cmpwi     r30, 0
	  bne-      .loc_0x1D0
	  li        r0, 0x1
	  stb       r0, 0x23D(r31)

	.loc_0x1D0:
	  lbz       r0, 0x23D(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x1F8
	  cmpwi     r30, 0
	  beq-      .loc_0x1F8
	  cmpwi     r30, 0x5
	  beq-      .loc_0x1F8
	  li        r0, 0
	  stb       r0, 0x23D(r31)
	  stb       r0, 0x23E(r31)

	.loc_0x1F8:
	  lbz       r0, 0x23D(r31)
	  lwz       r3, -0x6560(r13)
	  stb       r0, 0x90(r1)
	  stb       r29, 0x91(r1)
	  bl        0x2A6754
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x26C
	  lwz       r3, -0x64AC(r13)
	  lwz       r0, 0x18(r3)
	  cmpwi     r0, 0
	  bne-      .loc_0x26C
	  li        r0, 0
	  lwz       r3, -0x6B70(r13)
	  stb       r0, 0x8F(r1)
	  li        r4, 0x36
	  bl        0x91730
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x26C
	  lwz       r3, -0x6B70(r13)
	  li        r4, 0x8
	  addi      r3, r3, 0x48
	  bl        0x90308
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x26C
	  lwz       r3, -0x6B70(r13)
	  li        r4, 0x36
	  bl        0x916C8
	  li        r0, 0x1
	  stb       r0, 0x8F(r1)

	.loc_0x26C:
	  lwz       r3, -0x6B70(r13)
	  li        r30, 0
	  li        r4, 0x8
	  addi      r3, r3, 0x48
	  bl        0x902D8
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x2A0
	  lwz       r3, -0x6B70(r13)
	  li        r4, 0x36
	  bl        0x916D4
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x2A0
	  li        r30, 0x1

	.loc_0x2A0:
	  stb       r30, 0x8C(r1)
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x58(r12)
	  mtctr     r12
	  bctrl
	  addi      r0, r3, 0x1
	  lwz       r3, -0x6B70(r13)
	  stw       r0, 0x44(r1)
	  li        r4, 0x1E
	  bl        0x9169C
	  stb       r3, 0x92(r1)
	  li        r4, 0x1D
	  lwz       r3, -0x6B70(r13)
	  bl        0x9168C
	  stb       r3, 0x93(r1)
	  lwz       r3, -0x6CF8(r13)
	  lwz       r3, 0x28(r3)
	  bl        0x8178C
	  lwz       r0, 0x44(r1)
	  sub       r0, r3, r0
	  li        r3, -0x1
	  cntlzw    r0, r0
	  rlwinm    r0,r0,27,5,31
	  stb       r0, 0x8E(r1)
	  bl        0x7B0E0
	  stw       r3, 0x48(r1)
	  li        r3, -0x1
	  bl        0x7B1B0
	  stw       r3, 0x40(r1)
	  lwz       r3, -0x6C18(r13)
	  lwz       r3, 0x40(r3)
	  lwz       r4, 0x218(r3)
	  addi      r0, r4, 0x1
	  stw       r0, 0x3C(r1)
	  bl        -0x2EAE4
	  stfs      f1, 0x38(r1)
	  lwz       r4, -0x6B70(r13)
	  lwz       r3, 0xEC(r4)
	  lwz       r0, 0xE8(r4)
	  add       r0, r0, r3
	  stw       r0, 0x50(r1)
	  lbz       r0, 0x2F(r4)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0x35C
	  li        r0, 0x1
	  stb       r0, 0x8D(r1)

	.loc_0x35C:
	  lwz       r3, -0x6D20(r13)
	  bl        0x4E44
	  cmplwi    r3, 0
	  li        r29, 0x2
	  beq-      .loc_0x374
	  lhz       r29, 0x2DC(r3)

	.loc_0x374:
	  lis       r3, 0x8051
	  lwzu      r12, 0x22EC(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x58(r1)
	  li        r4, 0x1
	  lwz       r3, -0x6B70(r13)
	  bl        0x925C8
	  stw       r3, 0x60(r1)
	  li        r4, 0
	  lwz       r3, -0x6B70(r13)
	  bl        0x925B8
	  stw       r3, 0x64(r1)
	  li        r4, 0
	  lwz       r3, -0x6D20(r13)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  mr        r30, r3
	  bl        -0x13E48
	  stfs      f1, 0x54(r1)
	  mr        r3, r30
	  bl        -0xF428
	  cmpwi     r29, 0
	  stw       r3, 0x5C(r1)
	  bne-      .loc_0x3F8
	  li        r3, 0x1
	  li        r0, 0
	  stb       r3, 0x68(r1)
	  stb       r0, 0x80(r1)
	  b         .loc_0x444

	.loc_0x3F8:
	  cmpwi     r29, 0x1
	  bne-      .loc_0x414
	  li        r3, 0
	  li        r0, 0x1
	  stb       r3, 0x68(r1)
	  stb       r0, 0x80(r1)
	  b         .loc_0x444

	.loc_0x414:
	  lwz       r0, 0xE4(r31)
	  cmpwi     r0, 0
	  bne-      .loc_0x434
	  li        r3, 0
	  li        r0, 0x1
	  stb       r3, 0x68(r1)
	  stb       r0, 0x80(r1)
	  b         .loc_0x444

	.loc_0x434:
	  li        r3, 0x1
	  li        r0, 0
	  stb       r3, 0x68(r1)
	  stb       r0, 0x80(r1)

	.loc_0x444:
	  lis       r3, 0x8051
	  addi      r3, r3, 0x22EC
	  lwzu      r12, 0x20(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x70(r1)
	  li        r4, 0x1
	  lwz       r3, -0x6B70(r13)
	  bl        0x924F4
	  stw       r3, 0x78(r1)
	  li        r4, 0
	  lwz       r3, -0x6B70(r13)
	  bl        0x924E4
	  stw       r3, 0x7C(r1)
	  li        r4, 0x1
	  lwz       r3, -0x6D20(r13)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  mr        r30, r3
	  bl        -0x13F1C
	  stfs      f1, 0x6C(r1)
	  mr        r3, r30
	  bl        -0xF4FC
	  stw       r3, 0x74(r1)
	  addi      r4, r1, 0x30
	  lwz       r3, -0x6560(r13)
	  bl        0x2A6168
	  lwz       r0, 0xB4(r1)
	  lwz       r31, 0xAC(r1)
	  lwz       r30, 0xA8(r1)
	  lwz       r29, 0xA4(r1)
	  mtlr      r0
	  addi      r1, r1, 0xB0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80155F54
 * Size:	000008
 */
void Game::SingleGameSection::getCurrFloor(void)
{
	/*
	.loc_0x0:
	  lwz       r3, 0x248(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80155F5C
 * Size:	000004
 */
void Game::SingleGameSection::drawCaveScreen(void)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80155F60
 * Size:	00008C
 */
void Game::SingleGameSection::newCaveOtakaraEarningsAndDrops(void)
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
	  li        r3, 0x3
	  bl        0xD1E4C
	  mr        r0, r3
	  li        r3, 0x4
	  mr        r31, r0
	  bl        0xD1E3C
	  mr        r30, r3
	  mr        r4, r31
	  addi      r3, r29, 0x254
	  bl        0x8F3C4
	  mr        r4, r30
	  addi      r3, r29, 0x25C
	  bl        0x8F3B8
	  mr        r4, r31
	  addi      r3, r29, 0x264
	  bl        0x8F3AC
	  mr        r4, r30
	  addi      r3, r29, 0x26C
	  bl        0x8F3A0
	  li        r0, 0
	  stb       r0, 0x274(r29)
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
 * Address:	80155FEC
 * Size:	000050
 */
void Game::SingleGameSection::clearCaveOtakaraEarningsAndDrops(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  addi      r3, r31, 0x254
	  bl        0x8F3D4
	  addi      r3, r31, 0x25C
	  bl        0x8F3CC
	  addi      r3, r31, 0x264
	  bl        0x8F3C4
	  addi      r3, r31, 0x26C
	  bl        0x8F3BC
	  li        r0, 0
	  stb       r0, 0x274(r31)
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8015603C
 * Size:	000008
 */
void og::Screen::DispMemberCave::getSize(void)
{
	/*
	.loc_0x0:
	  li        r3, 0x64
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80156044
 * Size:	00000C
 */
void og::Screen::DispMemberCave::getOwnerID(void)
{
	/*
	.loc_0x0:
	  lis       r3, 0x4F
	  addi      r3, r3, 0x4741
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80156050
 * Size:	000010
 */
void og::Screen::DispMemberCave::getMemberID(void)
{
	/*
	.loc_0x0:
	  lis       r4, 0x4341
	  li        r3, 0
	  addi      r4, r4, 0x5645
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80156060
 * Size:	000004
 */
void og::Screen::DispMemberBase::doSetSubMemberAll(void)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80156064
 * Size:	000008
 */
void og::Screen::DispMemberHurryUp::getSize(void)
{
	/*
	.loc_0x0:
	  li        r3, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8015606C
 * Size:	00000C
 */
void og::Screen::DispMemberHurryUp::getOwnerID(void)
{
	/*
	.loc_0x0:
	  lis       r3, 0x4D52
	  addi      r3, r3, 0x4D52
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80156078
 * Size:	000014
 */
void og::Screen::DispMemberHurryUp::getMemberID(void)
{
	/*
	.loc_0x0:
	  lis       r4, 0x5259
	  lis       r3, 0x48
	  addi      r4, r4, 0x5550
	  addi      r3, r3, 0x5552
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8015608C
 * Size:	000008
 */
void og::Screen::DispMemberDayEndCount::getSize(void)
{
	/*
	.loc_0x0:
	  li        r3, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80156094
 * Size:	00000C
 */
void og::Screen::DispMemberDayEndCount::getOwnerID(void)
{
	/*
	.loc_0x0:
	  lis       r3, 0x4D52
	  addi      r3, r3, 0x4D52
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801560A0
 * Size:	000014
 */
void og::Screen::DispMemberDayEndCount::getMemberID(void)
{
	/*
	.loc_0x0:
	  lis       r4, 0x4E44
	  lis       r3, 0x4441
	  addi      r4, r4, 0x4344
	  addi      r3, r3, 0x5945
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801560B4
 * Size:	000008
 */
void og::Screen::DispMemberGround::getSize(void)
{
	/*
	.loc_0x0:
	  li        r3, 0x88
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801560BC
 * Size:	00000C
 */
void og::Screen::DispMemberGround::getOwnerID(void)
{
	/*
	.loc_0x0:
	  lis       r3, 0x4F
	  addi      r3, r3, 0x4741
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801560C8
 * Size:	000010
 */
void og::Screen::DispMemberGround::getMemberID(void)
{
	/*
	.loc_0x0:
	  lis       r4, 0x4F55
	  li        r3, 0x4752
	  addi      r4, r4, 0x4E44
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801560D8
 * Size:	00000C
 */
void Game::PikiInitArg::getName(void)
{
	/*
	.loc_0x0:
	  lis       r3, 0x8048
	  subi      r3, r3, 0x3048
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801560E4
 * Size:	000008
 */
void og::Screen::DispMemberKanketuMenu::getSize(void)
{
	/*
	.loc_0x0:
	  li        r3, 0x28
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801560EC
 * Size:	00000C
 */
void og::Screen::DispMemberKanketuMenu::getOwnerID(void)
{
	/*
	.loc_0x0:
	  lis       r3, 0x4F
	  addi      r3, r3, 0x4741
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801560F8
 * Size:	000014
 */
void og::Screen::DispMemberKanketuMenu::getMemberID(void)
{
	/*
	.loc_0x0:
	  lis       r4, 0x4B45
	  lis       r3, 0x4B
	  addi      r4, r4, 0x5455
	  addi      r3, r3, 0x414E
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8015610C
 * Size:	000008
 */
void og::Screen::DispMemberCaveMore::getSize(void)
{
	/*
	.loc_0x0:
	  li        r3, 0x28
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80156114
 * Size:	00000C
 */
void og::Screen::DispMemberCaveMore::getOwnerID(void)
{
	/*
	.loc_0x0:
	  lis       r3, 0x4F
	  addi      r3, r3, 0x4741
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80156120
 * Size:	000014
 */
void og::Screen::DispMemberCaveMore::getMemberID(void)
{
	/*
	.loc_0x0:
	  lis       r4, 0x4D4F
	  lis       r3, 0x4341
	  addi      r4, r4, 0x5245
	  addi      r3, r3, 0x5645
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80156134
 * Size:	000008
 */
void og::Screen::DispMemberAnaDemo::getSize(void)
{
	/*
	.loc_0x0:
	  li        r3, 0x24
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8015613C
 * Size:	00000C
 */
void og::Screen::DispMemberAnaDemo::getOwnerID(void)
{
	/*
	.loc_0x0:
	  lis       r3, 0x4F
	  addi      r3, r3, 0x4741
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80156148
 * Size:	000014
 */
void og::Screen::DispMemberAnaDemo::getMemberID(void)
{
	/*
	.loc_0x0:
	  lis       r4, 0x4445
	  lis       r3, 0x414E
	  addi      r4, r4, 0x4D4F
	  addi      r3, r3, 0x415F
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8015615C
 * Size:	00000C
 */
void Game::PikiKillArg::getName(void)
{
	/*
	.loc_0x0:
	  lis       r3, 0x8048
	  subi      r3, r3, 0x303C
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80156168
 * Size:	00009C
 */
void efx::TLastMomiji::__dt(void)
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
	  addi      r3, r3, 0x116C
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
	  bl        -0xC6538

	.loc_0x70:
	  extsh.    r0, r31
	  ble-      .loc_0x80
	  mr        r3, r30
	  bl        -0x132130

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
 * Address:	80156204
 * Size:	00009C
 */
void efx::TForestSakura::__dt(void)
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
	  addi      r3, r3, 0x11B8
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
	  bl        -0xC65D4

	.loc_0x70:
	  extsh.    r0, r31
	  ble-      .loc_0x80
	  mr        r3, r30
	  bl        -0x1321CC

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
 * Address:	801562A0
 * Size:	00009C
 */
void efx::TTutorialSnow::__dt(void)
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
	  addi      r3, r3, 0x1204
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
	  bl        -0xC6670

	.loc_0x70:
	  extsh.    r0, r31
	  ble-      .loc_0x80
	  mr        r3, r30
	  bl        -0x132268

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
 * Address:	8015633C
 * Size:	000008
 */
void PSGame::CaveFloorInfo::isCaveFloor(void)
{
	/*
	.loc_0x0:
	  li        r3, 0x1
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80156344
 * Size:	000014
 */
void PSGame::CaveFloorInfo::isBossFloor(void)
{
	/*
	.loc_0x0:
	  lwz       r0, 0x3C(r3)
	  subfic    r0, r0, 0x1
	  cntlzw    r0, r0
	  rlwinm    r3,r0,27,5,31
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80156358
 * Size:	000014
 */
void PSGame::CaveFloorInfo::isRelaxFloor(void)
{
	/*
	.loc_0x0:
	  lwz       r0, 0x3C(r3)
	  subfic    r0, r0, 0x2
	  cntlzw    r0, r0
	  rlwinm    r3,r0,27,5,31
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8015636C
 * Size:	000008
 */
void Game::SingleGameSection::isDevelopSection(void)
{
	/*
	.loc_0x0:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80156374
 * Size:	000008
 */
void Game::SingleGameSection::getTimerType(void)
{
	/*
	.loc_0x0:
	  lwz       r3, 0x17C(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8015637C
 * Size:	000008
 */
void Game::SingleGameSection::getCaveFilename(void)
{
	/*
	.loc_0x0:
	  addi      r3, r3, 0x195
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80156384
 * Size:	000004
 */
void init__Q24Game36FSMState<Game::SingleGameSection>
FPQ24Game17SingleGameSectionPQ24Game8StateArg(void)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80156388
 * Size:	000004
 */
void exec__Q24Game36FSMState<Game::SingleGameSection>
FPQ24Game17SingleGameSection(void)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8015638C
 * Size:	000004
 */
void cleanup__Q24Game36FSMState<Game::SingleGameSection>
FPQ24Game17SingleGameSection(void)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80156390
 * Size:	000004
 */
void resume__Q24Game36FSMState<Game::SingleGameSection>
FPQ24Game17SingleGameSection(void)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80156394
 * Size:	000004
 */
void restart__Q24Game36FSMState<Game::SingleGameSection>
FPQ24Game17SingleGameSection(void)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80156398
 * Size:	000004
 */
void init__Q24Game40StateMachine<Game::SingleGameSection>
FPQ24Game17SingleGameSection(void)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8015639C
 * Size:	000038
 */
void exec__Q24Game40StateMachine<Game::SingleGameSection>
FPQ24Game17SingleGameSection(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x250(r4)
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
 * Address:	801563D4
 * Size:	000064
 */
void create__Q24Game40StateMachine<Game::SingleGameSection> Fi(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  li        r0, 0
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  stw       r4, 0xC(r3)
	  stw       r0, 0x8(r3)
	  lwz       r0, 0xC(r3)
	  rlwinm    r3,r0,2,0,29
	  bl        -0x132450
	  stw       r3, 0x4(r31)
	  lwz       r0, 0xC(r31)
	  rlwinm    r3,r0,2,0,29
	  bl        -0x132460
	  stw       r3, 0x10(r31)
	  lwz       r0, 0xC(r31)
	  rlwinm    r3,r0,2,0,29
	  bl        -0x132470
	  stw       r3, 0x14(r31)
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80156438
 * Size:	000030
 */
void Delegate<Game::SingleGameSection>::invoke()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r4, r3
	  stw       r0, 0x14(r1)
	  addi      r12, r4, 0x8
	  lwz       r3, 0x4(r3)
	  bl        -0x9492C
	  nop
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80156468
 * Size:	00009C
 */
void transit__Q24Game40StateMachine<Game::SingleGameSection>
FPQ24Game17SingleGameSectioniPQ24Game8StateArg(void)
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
	  lwz       r30, 0x250(r4)
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
	  stw       r3, 0x250(r28)
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
 * Address:	80156504
 * Size:	000084
 */
void registerState__Q24Game40StateMachine<Game::SingleGameSection>
FPQ24Game36FSMState<Game::SingleGameSection>(void)
{
	/*
	.loc_0x0:
	  lwz       r6, 0x8(r3)
	  lwz       r0, 0xC(r3)
	  cmpw      r6, r0
	  bgelr-
	  lwz       r5, 0x4(r3)
	  rlwinm    r0,r6,2,0,29
	  stwx      r4, r5, r0
	  lwz       r5, 0x4(r4)
	  cmpwi     r5, 0
	  blt-      .loc_0x34
	  lwz       r0, 0xC(r3)
	  cmpw      r5, r0
	  blt-      .loc_0x3C

	.loc_0x34:
	  li        r0, 0
	  b         .loc_0x40

	.loc_0x3C:
	  li        r0, 0x1

	.loc_0x40:
	  rlwinm.   r0,r0,0,24,31
	  beqlr-
	  stw       r3, 0x8(r4)
	  lwz       r0, 0x8(r3)
	  lwz       r6, 0x4(r4)
	  lwz       r5, 0x10(r3)
	  rlwinm    r0,r0,2,0,29
	  stwx      r6, r5, r0
	  lwz       r0, 0x4(r4)
	  lwz       r5, 0x8(r3)
	  lwz       r4, 0x14(r3)
	  rlwinm    r0,r0,2,0,29
	  stwx      r5, r4, r0
	  lwz       r4, 0x8(r3)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80156588
 * Size:	000028
 */
void __sinit_singleGameSection_cpp(void)
{
	/*
	.loc_0x0:
	  lis       r4, 0x8051
	  li        r0, -0x1
	  lfs       f0, 0x48B0(r4)
	  lis       r3, 0x804B
	  stw       r0, -0x6D40(r13)
	  stfsu     f0, 0x1070(r3)
	  stfs      f0, -0x6D3C(r13)
	  stfs      f0, 0x4(r3)
	  stfs      f0, 0x8(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801565B0
 * Size:	000008
 */
void @4 @efx::TTutorialSnow::__dt(void)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x4
	  b         -0x314
	*/
}

/*
 * --INFO--
 * Address:	801565B8
 * Size:	000008
 */
void @4 @efx::TForestSakura::__dt(void)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x4
	  b         -0x3B8
	*/
}

/*
 * --INFO--
 * Address:	801565C0
 * Size:	000008
 */
void @4 @efx::TLastMomiji::__dt(void)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x4
	  b         -0x45C
	*/
}
