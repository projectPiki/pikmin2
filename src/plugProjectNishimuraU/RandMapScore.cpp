

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
 * Address:	8024C878
 * Size:	0000A8
 */
void Game::Cave::RandMapScore::__ct((Game::Cave::MapUnitGenerator*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  li        r0, 0
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  stw       r4, 0x0(r3)
	  li        r3, 0x14
	  stw       r0, 0xC(r31)
	  stw       r0, 0x10(r31)
	  bl        -0x2288F4
	  stw       r3, 0x4(r31)
	  li        r3, 0x14
	  bl        -0x228900
	  stw       r3, 0x8(r31)
	  li        r0, 0
	  mr        r3, r31
	  lwz       r4, 0x4(r31)
	  stw       r0, 0x0(r4)
	  lwz       r4, 0x8(r31)
	  stw       r0, 0x0(r4)
	  lwz       r4, 0x4(r31)
	  stw       r0, 0x4(r4)
	  lwz       r4, 0x8(r31)
	  stw       r0, 0x4(r4)
	  lwz       r4, 0x4(r31)
	  stw       r0, 0x8(r4)
	  lwz       r4, 0x8(r31)
	  stw       r0, 0x8(r4)
	  lwz       r4, 0x4(r31)
	  stw       r0, 0xC(r4)
	  lwz       r4, 0x8(r31)
	  stw       r0, 0xC(r4)
	  lwz       r4, 0x4(r31)
	  stw       r0, 0x10(r4)
	  lwz       r4, 0x8(r31)
	  stw       r0, 0x10(r4)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8024C920
 * Size:	00006C
 */
void Game::Cave::RandMapScore::setMapUnitScore(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  bl        0x388
	  mr        r3, r30
	  bl        0x2FC
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x54
	  li        r31, 0

	.loc_0x30:
	  mr        r3, r30
	  bl        0x430
	  mr        r3, r30
	  bl        0x2E0
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x54
	  addi      r31, r31, 0x1
	  cmpwi     r31, 0x1F4
	  blt+      .loc_0x30

	.loc_0x54:
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
 * Address:	8024C98C
 * Size:	000038
 */
void Game::Cave::RandMapScore::setStartSlot(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r4, 0x0(r3)
	  lbz       r0, 0x2(r4)
	  cmplwi    r0, 0
	  beq-      .loc_0x24
	  bl        0x71C
	  b         .loc_0x28

	.loc_0x24:
	  bl        0x5D8

	.loc_0x28:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8024C9C4
 * Size:	000058
 */
void Game::Cave::RandMapScore::setGoalSlot(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r4, 0x0(r3)
	  lbz       r0, 0x2(r4)
	  cmplwi    r0, 0
	  bne-      .loc_0x44
	  bl        0x1558
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x3C
	  mr        r3, r31
	  bl        0x1224
	  b         .loc_0x44

	.loc_0x3C:
	  mr        r3, r31
	  bl        0xE5C

	.loc_0x44:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8024CA1C
 * Size:	00018C
 */
void Game::Cave::RandMapScore::makeObjectLayout((Game::Cave::MapNode*,
                                                 Game::Cave::ObjectLayout*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x80(r1)
	  mflr      r0
	  stw       r0, 0x84(r1)
	  stfd      f31, 0x70(r1)
	  psq_st    f31,0x78(r1),0,0
	  stfd      f30, 0x60(r1)
	  psq_st    f30,0x68(r1),0,0
	  stfd      f29, 0x50(r1)
	  psq_st    f29,0x58(r1),0,0
	  stmw      r24, 0x30(r1)
	  mr        r25, r3
	  mr        r26, r4
	  mr        r27, r5
	  addi      r29, r1, 0x14
	  li        r28, 0
	  li        r30, 0

	.loc_0x40:
	  lwz       r3, 0x4(r25)
	  lwzx      r0, r3, r30
	  cmplw     r26, r0
	  bne-      .loc_0x14C
	  lis       r4, 0x8048
	  li        r3, 0x2C
	  addi      r8, r4, 0x40F8
	  lwz       r7, 0x0(r8)
	  lwz       r6, 0x4(r8)
	  lwz       r5, 0x8(r8)
	  lwz       r4, 0xC(r8)
	  lwz       r0, 0x10(r8)
	  stw       r7, 0x14(r1)
	  stw       r6, 0x18(r1)
	  stw       r5, 0x1C(r1)
	  stw       r4, 0x20(r1)
	  stw       r0, 0x24(r1)
	  bl        -0x228BFC
	  mr.       r31, r3
	  beq-      .loc_0xB4
	  bl        0x1C48E4
	  lis       r4, 0x804C
	  lis       r3, 0x804C
	  addi      r4, r4, 0x1AA8
	  lwz       r0, 0x0(r29)
	  stw       r4, 0x0(r31)
	  addi      r3, r3, 0x1B18
	  stw       r3, 0x0(r31)
	  stw       r0, 0x18(r31)

	.loc_0xB4:
	  li        r3, 0x2C
	  bl        -0x228C30
	  mr.       r24, r3
	  beq-      .loc_0xE8
	  bl        0x1C48B0
	  lis       r4, 0x804C
	  lis       r3, 0x804C
	  addi      r4, r4, 0x1AA8
	  lwz       r0, 0x0(r29)
	  stw       r4, 0x0(r24)
	  addi      r3, r3, 0x1B18
	  stw       r3, 0x0(r24)
	  stw       r0, 0x18(r24)

	.loc_0xE8:
	  lwz       r4, 0x4(r25)
	  addi      r3, r1, 0x8
	  lwz       r5, 0x8(r25)
	  lwzx      r4, r4, r30
	  lwzx      r5, r5, r30
	  bl        -0x903C
	  lwz       r3, 0x4(r25)
	  lwz       r4, 0x8(r25)
	  lfs       f31, 0x8(r1)
	  lfs       f30, 0xC(r1)
	  lfs       f29, 0x10(r1)
	  lwzx      r3, r3, r30
	  lwzx      r4, r4, r30
	  bl        -0x8C3C
	  stfs      f31, 0x20(r24)
	  mr        r3, r31
	  mr        r4, r24
	  stfs      f30, 0x24(r24)
	  stfs      f29, 0x28(r24)
	  stfs      f1, 0x1C(r24)
	  bl        0x1C48B4
	  lwz       r4, 0x0(r29)
	  mr        r3, r27
	  mr        r5, r31
	  bl        0x3D8C

	.loc_0x14C:
	  addi      r28, r28, 0x1
	  addi      r29, r29, 0x4
	  cmpwi     r28, 0x5
	  addi      r30, r30, 0x4
	  blt+      .loc_0x40
	  psq_l     f31,0x78(r1),0,0
	  lfd       f31, 0x70(r1)
	  psq_l     f30,0x68(r1),0,0
	  lfd       f30, 0x60(r1)
	  psq_l     f29,0x58(r1),0,0
	  lfd       f29, 0x50(r1)
	  lmw       r24, 0x30(r1)
	  lwz       r0, 0x84(r1)
	  mtlr      r0
	  addi      r1, r1, 0x80
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8024CBA8
 * Size:	000010
 */
void Game::Cave::RandMapScore::getFixObjNode((int))
{
	/*
	.loc_0x0:
	  lwz       r3, 0x4(r3)
	  rlwinm    r0,r4,2,0,29
	  lwzx      r3, r3, r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8024CBB8
 * Size:	000010
 */
void Game::Cave::RandMapScore::getFixObjGen((int))
{
	/*
	.loc_0x0:
	  lwz       r3, 0x8(r3)
	  rlwinm    r0,r4,2,0,29
	  lwzx      r3, r3, r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8024CBC8
 * Size:	000064
 */
void getGlobalPosition__Q34Game4Cave12RandMapScoreFiR10Vector3<float>(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  rlwinm    r0,r4,2,0,29
	  stw       r31, 0x1C(r1)
	  mr        r31, r5
	  lwz       r4, 0x4(r3)
	  lwzx      r4, r4, r0
	  cmplwi    r4, 0
	  beq-      .loc_0x50
	  lwz       r5, 0x8(r3)
	  addi      r3, r1, 0x8
	  lwzx      r5, r5, r0
	  bl        -0x9120
	  lfs       f0, 0x8(r1)
	  stfs      f0, 0x0(r31)
	  lfs       f0, 0xC(r1)
	  stfs      f0, 0x4(r31)
	  lfs       f0, 0x10(r1)
	  stfs      f0, 0x8(r31)

	.loc_0x50:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8024CC2C
 * Size:	000008
 */
void Game::Cave::RandMapScore::getVersusHighScore(void)
{
	/*
	.loc_0x0:
	  lwz       r3, 0xC(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8024CC34
 * Size:	000008
 */
void Game::Cave::RandMapScore::getVersusLowScore(void)
{
	/*
	.loc_0x0:
	  lwz       r3, 0x10(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8024CC3C
 * Size:	000084
 */
void Game::Cave::RandMapScore::isScoreSetDone(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  lwz       r3, 0x0(r3)
	  lwz       r3, 0x28(r3)
	  lwz       r31, 0x10(r3)
	  b         .loc_0x60

	.loc_0x24:
	  li        r30, 0
	  b         .loc_0x4C

	.loc_0x2C:
	  mr        r3, r31
	  mr        r4, r30
	  bl        -0x9808
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x48
	  li        r3, 0
	  b         .loc_0x6C

	.loc_0x48:
	  addi      r30, r30, 0x1

	.loc_0x4C:
	  mr        r3, r31
	  bl        -0x8C2C
	  cmpw      r30, r3
	  blt+      .loc_0x2C
	  lwz       r31, 0x4(r31)

	.loc_0x60:
	  cmplwi    r31, 0
	  bne+      .loc_0x24
	  li        r3, 0x1

	.loc_0x6C:
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
 * Address:	8024CCC0
 * Size:	0000C4
 */
void Game::Cave::RandMapScore::clearRoomAndDoorScore(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  lwz       r3, 0x0(r3)
	  lwz       r3, 0x28(r3)
	  lwz       r31, 0x10(r3)
	  b         .loc_0x48

	.loc_0x28:
	  mr        r3, r31
	  bl        -0x9534
	  mr        r3, r31
	  li        r4, -0x1
	  bl        -0x9494
	  mr        r3, r31
	  bl        -0x99CC
	  lwz       r31, 0x4(r31)

	.loc_0x48:
	  cmplwi    r31, 0
	  bne+      .loc_0x28
	  lwz       r3, 0x0(r30)
	  lbz       r0, 0x2(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x94
	  lwz       r3, 0x4(r30)
	  lwz       r4, 0xC(r3)
	  cmplwi    r4, 0
	  beq-      .loc_0x78
	  mr        r3, r30
	  bl        0x1A4

	.loc_0x78:
	  lwz       r3, 0x4(r30)
	  lwz       r4, 0x10(r3)
	  cmplwi    r4, 0
	  beq-      .loc_0xAC
	  mr        r3, r30
	  bl        0x18C
	  b         .loc_0xAC

	.loc_0x94:
	  lwz       r3, 0x4(r30)
	  lwz       r4, 0x0(r3)
	  cmplwi    r4, 0
	  beq-      .loc_0xAC
	  mr        r3, r30
	  bl        0x170

	.loc_0xAC:
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
 * Address:	8024CD84
 * Size:	000154
 */
void Game::Cave::RandMapScore::setUnitAndDoorScore(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  lis       r4, 0xC3
	  stw       r0, 0x44(r1)
	  stmw      r20, 0x10(r1)
	  mr        r22, r3
	  addi      r27, r4, 0x5000
	  li        r29, 0
	  li        r28, -0x1
	  lwz       r3, 0x0(r3)
	  lwz       r3, 0x28(r3)
	  lwz       r26, 0x10(r3)
	  b         .loc_0x108

	.loc_0x34:
	  mr        r3, r26
	  bl        -0x9408
	  mr        r3, r26
	  bl        -0x8D64
	  mr        r31, r3
	  li        r25, 0
	  li        r30, 0
	  b         .loc_0xFC

	.loc_0x54:
	  mr        r3, r26
	  mr        r4, r25
	  bl        -0x9978
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xF4
	  mr        r3, r26
	  mr        r4, r25
	  bl        -0x994C
	  lwz       r24, 0x10(r3)
	  b         .loc_0xEC

	.loc_0x7C:
	  lwz       r4, 0x18(r24)
	  mr        r3, r26
	  lwz       r23, 0x0(r4)
	  mr        r4, r23
	  bl        -0x99A8
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0xE8
	  lwz       r20, 0x18(r24)
	  mr        r3, r26
	  bl        -0x9478
	  lwz       r0, 0x8(r20)
	  mr        r4, r23
	  lwz       r5, 0x28(r26)
	  mullw     r6, r0, r3
	  lwz       r20, 0x4(r20)
	  addi      r0, r5, 0x8
	  lwzx      r0, r30, r0
	  mr        r3, r26
	  add       r21, r0, r6
	  bl        -0x982C
	  add       r0, r21, r3
	  add       r0, r20, r0
	  cmpw      r27, r0
	  ble-      .loc_0xE8
	  mr        r27, r0
	  mr        r29, r26
	  mr        r28, r23

	.loc_0xE8:
	  lwz       r24, 0x4(r24)

	.loc_0xEC:
	  cmplwi    r24, 0
	  bne+      .loc_0x7C

	.loc_0xF4:
	  addi      r30, r30, 0xC
	  addi      r25, r25, 0x1

	.loc_0xFC:
	  cmpw      r25, r31
	  blt+      .loc_0x54
	  lwz       r26, 0x4(r26)

	.loc_0x108:
	  cmplwi    r26, 0
	  bne+      .loc_0x34
	  cmplwi    r29, 0
	  beq-      .loc_0x140
	  mr        r3, r29
	  mr        r4, r28
	  mr        r5, r27
	  bl        -0x9A74
	  mulli     r0, r28, 0xC
	  lwz       r4, 0x28(r29)
	  mr        r3, r22
	  mr        r5, r27
	  lwzx      r4, r4, r0
	  bl        0x93C

	.loc_0x140:
	  lmw       r20, 0x10(r1)
	  lwz       r0, 0x44(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8024CED8
 * Size:	0000B0
 */
void Game::Cave::RandMapScore::setStartMapNodeScore((Game::Cave::MapNode*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  li        r5, 0
	  stw       r0, 0x24(r1)
	  stmw      r27, 0xC(r1)
	  mr        r27, r3
	  mr        r28, r4
	  bl        0x908
	  li        r29, 0
	  li        r30, 0
	  b         .loc_0x8C

	.loc_0x2C:
	  mr        r3, r28
	  mr        r4, r29
	  bl        -0x9AA4
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x84
	  mr        r3, r28
	  mr        r4, r29
	  bl        -0x9900
	  mr        r31, r3
	  mr        r3, r28
	  bl        -0x9578
	  addi      r31, r31, 0x1
	  mr        r4, r29
	  add       r31, r3, r31
	  mr        r3, r28
	  mr        r5, r31
	  bl        -0x9B10
	  lwz       r4, 0x28(r28)
	  mr        r3, r27
	  mr        r5, r31
	  lwzx      r4, r4, r30
	  bl        0x8A4

	.loc_0x84:
	  addi      r30, r30, 0xC
	  addi      r29, r29, 0x1

	.loc_0x8C:
	  mr        r3, r28
	  bl        -0x8F08
	  cmpw      r29, r3
	  blt+      .loc_0x2C
	  lmw       r27, 0xC(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000DC
 */
void Game::Cave::RandMapScore::getRandRoomMapNode(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8024CF88
 * Size:	00013C
 */
void Game::Cave::RandMapScore::setChallengePod(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x70(r1)
	  mflr      r0
	  stw       r0, 0x74(r1)
	  stw       r31, 0x6C(r1)
	  stw       r30, 0x68(r1)
	  stw       r29, 0x64(r1)
	  mr        r29, r3
	  lwz       r3, 0x4(r3)
	  lwz       r0, 0x0(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x120
	  lwz       r3, 0x0(r29)
	  li        r31, 0
	  lwz       r3, 0x28(r3)
	  lwz       r30, 0x10(r3)
	  b         .loc_0x60

	.loc_0x40:
	  lwz       r3, 0x18(r30)
	  bl        -0xA454
	  cmpwi     r3, 0x1
	  bne-      .loc_0x5C
	  lwz       r3, 0x4(r29)
	  stw       r30, 0x0(r3)
	  b         .loc_0x68

	.loc_0x5C:
	  lwz       r30, 0x4(r30)

	.loc_0x60:
	  cmplwi    r30, 0
	  bne+      .loc_0x40

	.loc_0x68:
	  lwz       r3, 0x4(r29)
	  lwz       r3, 0x0(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x120
	  lwz       r3, 0x18(r3)
	  bl        -0xA444
	  cmplwi    r3, 0
	  beq-      .loc_0xB8
	  lwz       r4, 0x10(r3)
	  addi      r3, r1, 0x8
	  b         .loc_0xB0

	.loc_0x94:
	  lwz       r0, 0x18(r4)
	  cmpwi     r0, 0x7
	  bne-      .loc_0xAC
	  stw       r4, 0x0(r3)
	  addi      r3, r3, 0x4
	  addi      r31, r31, 0x1

	.loc_0xAC:
	  lwz       r4, 0x4(r4)

	.loc_0xB0:
	  cmplwi    r4, 0
	  bne+      .loc_0x94

	.loc_0xB8:
	  cmpwi     r31, 0
	  beq-      .loc_0x120
	  bl        -0x183AA8
	  lis       r5, 0x4330
	  xoris     r0, r3, 0x8000
	  stw       r0, 0x4C(r1)
	  xoris     r0, r31, 0x8000
	  lfd       f2, -0x3B60(r2)
	  addi      r4, r1, 0x8
	  stw       r5, 0x48(r1)
	  lfs       f0, -0x3B68(r2)
	  lfd       f1, 0x48(r1)
	  stw       r0, 0x54(r1)
	  fsubs     f1, f1, f2
	  lwz       r3, 0x8(r29)
	  stw       r5, 0x50(r1)
	  fdivs     f1, f1, f0
	  lfd       f0, 0x50(r1)
	  fsubs     f0, f0, f2
	  fmuls     f0, f0, f1
	  fctiwz    f0, f0
	  stfd      f0, 0x58(r1)
	  lwz       r0, 0x5C(r1)
	  rlwinm    r0,r0,2,0,29
	  lwzx      r0, r4, r0
	  stw       r0, 0x0(r3)

	.loc_0x120:
	  lwz       r0, 0x74(r1)
	  lwz       r31, 0x6C(r1)
	  lwz       r30, 0x68(r1)
	  lwz       r29, 0x64(r1)
	  mtlr      r0
	  addi      r1, r1, 0x70
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8024D0C4
 * Size:	0001B8
 */
void Game::Cave::RandMapScore::setVersusOnyon(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x80(r1)
	  mflr      r0
	  stw       r0, 0x84(r1)
	  stw       r31, 0x7C(r1)
	  mr        r31, r3
	  stw       r30, 0x78(r1)
	  stw       r29, 0x74(r1)
	  stw       r28, 0x70(r1)
	  lwz       r3, 0x4(r3)
	  lwz       r0, 0xC(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x198
	  lwz       r0, 0x10(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x198
	  lwz       r3, 0x0(r31)
	  addi      r28, r1, 0x18
	  li        r29, 0
	  lwz       r3, 0x28(r3)
	  lwz       r30, 0x10(r3)
	  b         .loc_0x74

	.loc_0x54:
	  lwz       r3, 0x18(r30)
	  bl        -0xA5A4
	  cmpwi     r3, 0x1
	  bne-      .loc_0x70
	  stw       r30, 0x0(r28)
	  addi      r28, r28, 0x4
	  addi      r29, r29, 0x1

	.loc_0x70:
	  lwz       r30, 0x4(r30)

	.loc_0x74:
	  cmplwi    r30, 0
	  bne+      .loc_0x54
	  cmpwi     r29, 0
	  beq-      .loc_0xE0
	  bl        -0x183BA8
	  lis       r4, 0x4330
	  xoris     r0, r3, 0x8000
	  stw       r0, 0x5C(r1)
	  xoris     r0, r29, 0x8000
	  lfd       f2, -0x3B60(r2)
	  addi      r3, r1, 0x18
	  stw       r4, 0x58(r1)
	  lfs       f0, -0x3B68(r2)
	  lfd       f1, 0x58(r1)
	  stw       r0, 0x64(r1)
	  fsubs     f1, f1, f2
	  stw       r4, 0x60(r1)
	  fdivs     f1, f1, f0
	  lfd       f0, 0x60(r1)
	  fsubs     f0, f0, f2
	  fmuls     f0, f0, f1
	  fctiwz    f0, f0
	  stfd      f0, 0x68(r1)
	  lwz       r0, 0x6C(r1)
	  rlwinm    r0,r0,2,0,29
	  lwzx      r30, r3, r0
	  b         .loc_0xE4

	.loc_0xE0:
	  li        r30, 0

	.loc_0xE4:
	  lwz       r5, 0x2B48(r2)
	  cmplwi    r30, 0
	  lwz       r4, 0x2B4C(r2)
	  lwz       r3, 0x2B50(r2)
	  lwz       r0, 0x2B54(r2)
	  stw       r5, 0x10(r1)
	  stw       r4, 0x14(r1)
	  stw       r3, 0x8(r1)
	  stw       r0, 0xC(r1)
	  beq-      .loc_0x198
	  mr        r3, r31
	  mr        r4, r30
	  bl        0x1A0
	  mr        r3, r31
	  mr        r4, r30
	  addi      r5, r1, 0x8
	  bl        .loc_0x1B8
	  mr        r4, r3
	  mr        r3, r31
	  stw       r4, 0x10(r1)
	  bl        0x180
	  mr        r3, r31
	  bl        0x528
	  lwz       r4, 0x10(r1)
	  addi      r5, r1, 0xC
	  mr        r3, r31
	  bl        .loc_0x1B8
	  mr        r30, r3
	  mr        r3, r31
	  stw       r30, 0x14(r1)
	  mr        r4, r30
	  bl        0x154
	  lwz       r0, 0x10(r1)
	  mr        r3, r31
	  lwz       r4, 0x4(r31)
	  stw       r0, 0xC(r4)
	  lwz       r4, 0x4(r31)
	  stw       r30, 0x10(r4)
	  lwz       r0, 0x8(r1)
	  lwz       r4, 0x8(r31)
	  stw       r0, 0xC(r4)
	  lwz       r0, 0xC(r1)
	  lwz       r4, 0x8(r31)
	  stw       r0, 0x10(r4)
	  bl        0x518

	.loc_0x198:
	  lwz       r0, 0x84(r1)
	  lwz       r31, 0x7C(r1)
	  lwz       r30, 0x78(r1)
	  lwz       r29, 0x74(r1)
	  lwz       r28, 0x70(r1)
	  mtlr      r0
	  addi      r1, r1, 0x80
	  blr

	.loc_0x1B8:
	*/
}

/*
 * --INFO--
 * Address:	8024D27C
 * Size:	0000FC
 */
void Game::Cave::RandMapScore::getMaxScoreRoomMapNode((Game::Cave::MapNode*,
                                                       Game::Cave::BaseGen**))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stmw      r25, 0x14(r1)
	  mr        r25, r4
	  mr        r26, r5
	  li        r31, 0
	  li        r30, 0
	  lwz       r3, 0x0(r3)
	  lwz       r3, 0x28(r3)
	  lwz       r29, 0x10(r3)
	  b         .loc_0xDC

	.loc_0x30:
	  cmplw     r29, r25
	  beq-      .loc_0xD8
	  lwz       r3, 0x18(r29)
	  bl        -0xA740
	  cmpwi     r3, 0x1
	  bne-      .loc_0xD8
	  mr        r3, r29
	  bl        -0x9914
	  addi      r28, r3, 0xA
	  lwz       r3, 0x18(r29)
	  bl        -0xA714
	  cmplwi    r3, 0
	  beq-      .loc_0xD8
	  lwz       r27, 0x10(r3)
	  b         .loc_0xD0

	.loc_0x6C:
	  lwz       r0, 0x18(r27)
	  cmpwi     r0, 0x7
	  bne-      .loc_0xCC
	  cmpw      r28, r30
	  bgt-      .loc_0xC0
	  bne-      .loc_0xCC
	  bl        -0x183D60
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0xC(r1)
	  lfd       f3, -0x3B60(r2)
	  stw       r0, 0x8(r1)
	  lfs       f2, -0x3B58(r2)
	  lfd       f0, 0x8(r1)
	  lfs       f1, -0x3B68(r2)
	  fsubs     f3, f0, f3
	  lfs       f0, -0x3B54(r2)
	  fmuls     f2, f2, f3
	  fdivs     f1, f2, f1
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0xCC

	.loc_0xC0:
	  stw       r27, 0x0(r26)
	  mr        r31, r29
	  mr        r30, r28

	.loc_0xCC:
	  lwz       r27, 0x4(r27)

	.loc_0xD0:
	  cmplwi    r27, 0
	  bne+      .loc_0x6C

	.loc_0xD8:
	  lwz       r29, 0x4(r29)

	.loc_0xDC:
	  cmplwi    r29, 0
	  bne+      .loc_0x30
	  mr        r3, r31
	  lmw       r25, 0x14(r1)
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8024D378
 * Size:	0003B0
 */
void Game::Cave::RandMapScore::calcNodeScore((Game::Cave::MapNode*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stmw      r25, 0x14(r1)
	  mr        r30, r3
	  mr        r31, r4
	  lwz       r3, 0x0(r3)
	  lwz       r3, 0x28(r3)
	  lwz       r29, 0x10(r3)
	  b         .loc_0x48

	.loc_0x28:
	  mr        r3, r29
	  bl        -0x9BEC
	  mr        r3, r29
	  li        r4, -0x1
	  bl        -0x9B4C
	  mr        r3, r29
	  bl        -0xA084
	  lwz       r29, 0x4(r29)

	.loc_0x48:
	  cmplwi    r29, 0
	  bne+      .loc_0x28
	  lwz       r3, 0x0(r30)
	  lbz       r0, 0x2(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x19C
	  lwz       r3, 0x4(r30)
	  lwz       r25, 0xC(r3)
	  cmplwi    r25, 0
	  beq-      .loc_0xFC
	  mr        r3, r30
	  mr        r4, r25
	  li        r5, 0
	  bl        0x408
	  li        r27, 0
	  mr        r26, r27
	  b         .loc_0xEC

	.loc_0x8C:
	  mr        r3, r25
	  mr        r4, r27
	  bl        -0x9FA4
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0xE4
	  mr        r3, r25
	  mr        r4, r27
	  bl        -0x9E00
	  mr        r29, r3
	  mr        r3, r25
	  bl        -0x9A78
	  addi      r28, r29, 0x1
	  mr        r4, r27
	  add       r28, r3, r28
	  mr        r3, r25
	  mr        r5, r28
	  bl        -0xA010
	  lwz       r4, 0x28(r25)
	  mr        r3, r30
	  mr        r5, r28
	  lwzx      r4, r4, r26
	  bl        0x3A4

	.loc_0xE4:
	  addi      r26, r26, 0xC
	  addi      r27, r27, 0x1

	.loc_0xEC:
	  mr        r3, r25
	  bl        -0x9408
	  cmpw      r27, r3
	  blt+      .loc_0x8C

	.loc_0xFC:
	  lwz       r3, 0x4(r30)
	  lwz       r25, 0x10(r3)
	  cmplwi    r25, 0
	  beq-      .loc_0x238
	  mr        r3, r30
	  mr        r4, r25
	  li        r5, 0
	  bl        0x36C
	  li        r28, 0
	  mr        r26, r28
	  b         .loc_0x188

	.loc_0x128:
	  mr        r3, r25
	  mr        r4, r28
	  bl        -0xA040
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x180
	  mr        r3, r25
	  mr        r4, r28
	  bl        -0x9E9C
	  mr        r29, r3
	  mr        r3, r25
	  bl        -0x9B14
	  addi      r27, r29, 0x1
	  mr        r4, r28
	  add       r27, r3, r27
	  mr        r3, r25
	  mr        r5, r27
	  bl        -0xA0AC
	  lwz       r4, 0x28(r25)
	  mr        r3, r30
	  mr        r5, r27
	  lwzx      r4, r4, r26
	  bl        0x308

	.loc_0x180:
	  addi      r26, r26, 0xC
	  addi      r28, r28, 0x1

	.loc_0x188:
	  mr        r3, r25
	  bl        -0x94A4
	  cmpw      r28, r3
	  blt+      .loc_0x128
	  b         .loc_0x238

	.loc_0x19C:
	  lwz       r3, 0x4(r30)
	  lwz       r25, 0x0(r3)
	  cmplwi    r25, 0
	  beq-      .loc_0x238
	  mr        r3, r30
	  mr        r4, r25
	  li        r5, 0
	  bl        0x2CC
	  li        r28, 0
	  mr        r26, r28
	  b         .loc_0x228

	.loc_0x1C8:
	  mr        r3, r25
	  mr        r4, r28
	  bl        -0xA0E0
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x220
	  mr        r3, r25
	  mr        r4, r28
	  bl        -0x9F3C
	  mr        r29, r3
	  mr        r3, r25
	  bl        -0x9BB4
	  addi      r27, r29, 0x1
	  mr        r4, r28
	  add       r27, r3, r27
	  mr        r3, r25
	  mr        r5, r27
	  bl        -0xA14C
	  lwz       r4, 0x28(r25)
	  mr        r3, r30
	  mr        r5, r27
	  lwzx      r4, r4, r26
	  bl        0x268

	.loc_0x220:
	  addi      r26, r26, 0xC
	  addi      r28, r28, 0x1

	.loc_0x228:
	  mr        r3, r25
	  bl        -0x9544
	  cmpw      r28, r3
	  blt+      .loc_0x1C8

	.loc_0x238:
	  mr        r3, r30
	  mr        r4, r31
	  li        r5, 0
	  bl        0x240
	  li        r28, 0
	  mr        r26, r28
	  b         .loc_0x2B4

	.loc_0x254:
	  mr        r3, r31
	  mr        r4, r28
	  bl        -0xA16C
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x2AC
	  mr        r3, r31
	  mr        r4, r28
	  bl        -0x9FC8
	  mr        r29, r3
	  mr        r3, r31
	  bl        -0x9C40
	  addi      r29, r29, 0x1
	  mr        r4, r28
	  add       r29, r3, r29
	  mr        r3, r31
	  mr        r5, r29
	  bl        -0xA1D8
	  lwz       r4, 0x28(r31)
	  mr        r3, r30
	  mr        r5, r29
	  lwzx      r4, r4, r26
	  bl        0x1DC

	.loc_0x2AC:
	  addi      r26, r26, 0xC
	  addi      r28, r28, 0x1

	.loc_0x2B4:
	  mr        r3, r31
	  bl        -0x95D0
	  cmpw      r28, r3
	  blt+      .loc_0x254
	  lwz       r3, 0x0(r30)
	  lwz       r3, 0x28(r3)
	  lwz       r29, 0x10(r3)
	  b         .loc_0x310

	.loc_0x2D4:
	  li        r28, 0
	  b         .loc_0x2FC

	.loc_0x2DC:
	  mr        r3, r29
	  mr        r4, r28
	  bl        -0xA1F4
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x2F8
	  li        r0, 0
	  b         .loc_0x31C

	.loc_0x2F8:
	  addi      r28, r28, 0x1

	.loc_0x2FC:
	  mr        r3, r29
	  bl        -0x9618
	  cmpw      r28, r3
	  blt+      .loc_0x2DC
	  lwz       r29, 0x4(r29)

	.loc_0x310:
	  cmplwi    r29, 0
	  bne+      .loc_0x2D4
	  li        r0, 0x1

	.loc_0x31C:
	  rlwinm.   r0,r0,0,24,31
	  bne-      .loc_0x39C
	  li        r25, 0

	.loc_0x328:
	  mr        r3, r30
	  bl        -0x920
	  lwz       r3, 0x0(r30)
	  lwz       r3, 0x28(r3)
	  lwz       r29, 0x10(r3)
	  b         .loc_0x37C

	.loc_0x340:
	  li        r28, 0
	  b         .loc_0x368

	.loc_0x348:
	  mr        r3, r29
	  mr        r4, r28
	  bl        -0xA260
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x364
	  li        r0, 0
	  b         .loc_0x388

	.loc_0x364:
	  addi      r28, r28, 0x1

	.loc_0x368:
	  mr        r3, r29
	  bl        -0x9684
	  cmpw      r28, r3
	  blt+      .loc_0x348
	  lwz       r29, 0x4(r29)

	.loc_0x37C:
	  cmplwi    r29, 0
	  bne+      .loc_0x340
	  li        r0, 0x1

	.loc_0x388:
	  rlwinm.   r0,r0,0,24,31
	  bne-      .loc_0x39C
	  addi      r25, r25, 0x1
	  cmpwi     r25, 0x1F4
	  blt+      .loc_0x328

	.loc_0x39C:
	  lmw       r25, 0x14(r1)
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8024D728
 * Size:	000048
 */
void Game::Cave::RandMapScore::copyNodeScore(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  lwz       r3, 0x0(r3)
	  lwz       r3, 0x28(r3)
	  lwz       r31, 0x10(r3)
	  b         .loc_0x2C

	.loc_0x20:
	  mr        r3, r31
	  bl        -0x9EE0
	  lwz       r31, 0x4(r31)

	.loc_0x2C:
	  cmplwi    r31, 0
	  bne+      .loc_0x20
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8024D770
 * Size:	00008C
 */
void Game::Cave::RandMapScore::subNodeScore(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  lwz       r3, 0x0(r3)
	  lwz       r3, 0x28(r3)
	  lwz       r31, 0x10(r3)
	  b         .loc_0x6C

	.loc_0x28:
	  mr        r3, r31
	  bl        -0x9F24
	  lwz       r3, 0x4(r30)
	  lwz       r0, 0xC(r3)
	  cmplw     r31, r0
	  bne-      .loc_0x50
	  mr        r3, r31
	  bl        -0x9DF8
	  stw       r3, 0x10(r30)
	  b         .loc_0x68

	.loc_0x50:
	  lwz       r0, 0x10(r3)
	  cmplw     r31, r0
	  bne-      .loc_0x68
	  mr        r3, r31
	  bl        -0x9E14
	  stw       r3, 0xC(r30)

	.loc_0x68:
	  lwz       r31, 0x4(r31)

	.loc_0x6C:
	  cmplwi    r31, 0
	  bne+      .loc_0x28
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
 * Address:	8024D7FC
 * Size:	000064
 */
void Game::Cave::RandMapScore::setMapNodeScore((Game::Cave::MapNode*, int))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r5
	  stw       r30, 0x8(r1)
	  mr        r30, r4
	  mr        r3, r30
	  bl        -0x9E70
	  add       r31, r31, r3
	  mr        r3, r30
	  bl        -0x9E74
	  cmpwi     r3, 0
	  blt-      .loc_0x40
	  cmpw      r3, r31
	  ble-      .loc_0x4C

	.loc_0x40:
	  mr        r3, r30
	  mr        r4, r31
	  bl        -0x9FE0

	.loc_0x4C:
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
 * Address:	8024D860
 * Size:	0003BC
 */
void Game::Cave::RandMapScore::setChallengeFixObjNormal(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x1880(r1)
	  mflr      r0
	  stw       r0, 0x1884(r1)
	  stmw      r16, 0x1840(r1)
	  mr        r17, r3
	  lwz       r3, 0x4(r3)
	  lwz       r0, 0x4(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x3A8
	  lwz       r0, 0x8(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x34
	  b         .loc_0x3A8

	.loc_0x34:
	  lwz       r6, 0x0(r17)
	  lwz       r5, -0x3B50(r2)
	  lbz       r0, 0x0(r6)
	  lwz       r4, -0x3B4C(r2)
	  lhz       r3, -0x3B48(r2)
	  cmplwi    r0, 0
	  stw       r5, 0xC(r1)
	  lwz       r31, 0x28(r6)
	  stw       r4, 0x10(r1)
	  sth       r3, 0x8(r1)
	  beq-      .loc_0x6C
	  li        r0, 0
	  stb       r0, 0x8(r1)
	  b         .loc_0x80

	.loc_0x6C:
	  lbz       r0, 0x1(r6)
	  cmplwi    r0, 0
	  bne-      .loc_0x80
	  li        r0, 0
	  stb       r0, 0x9(r1)

	.loc_0x80:
	  addi      r26, r1, 0x8
	  addi      r25, r1, 0xC
	  li        r24, 0

	.loc_0x8C:
	  lbz       r0, 0x0(r26)
	  cmplwi    r0, 0
	  beq-      .loc_0x394
	  lwz       r0, 0x0(r25)
	  lwz       r3, 0x4(r17)
	  rlwinm    r0,r0,2,0,29
	  lwzx      r0, r3, r0
	  cmplwi    r0, 0
	  bne-      .loc_0x394
	  lis       r3, 0x8048
	  li        r16, 0
	  addi      r5, r3, 0x410C
	  stw       r16, 0x1020(r1)
	  lwz       r4, 0x0(r5)
	  addi      r27, r1, 0x14
	  lwz       r3, 0x4(r5)
	  li        r23, 0
	  lwz       r0, 0x8(r5)
	  li        r22, 0
	  stw       r4, 0x14(r1)
	  li        r21, 0
	  stw       r3, 0x18(r1)
	  stw       r0, 0x1C(r1)

	.loc_0xE8:
	  lwz       r0, 0x1020(r1)
	  cmplwi    r0, 0
	  beq-      .loc_0xFC
	  cmpwi     r21, 0x2
	  bge-      .loc_0x2CC

	.loc_0xFC:
	  lwz       r20, 0x10(r31)
	  b         .loc_0x2C4

	.loc_0x104:
	  lwz       r3, 0x18(r20)
	  bl        -0xADF0
	  lwz       r0, 0x0(r27)
	  cmpw      r0, r3
	  bne-      .loc_0x2C0
	  mr        r3, r20
	  bl        -0x9FC8
	  cmpwi     r3, 0
	  ble-      .loc_0x164
	  mr        r3, r20
	  bl        -0x9FD8
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x1824(r1)
	  lfd       f2, -0x3B60(r2)
	  stw       r0, 0x1820(r1)
	  lfs       f0, -0x3B44(r2)
	  lfd       f1, 0x1820(r1)
	  fsubs     f1, f1, f2
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x168
	  fsqrte    f0, f1
	  fmuls     f1, f0, f1
	  b         .loc_0x168

	.loc_0x164:
	  lfs       f1, -0x3B44(r2)

	.loc_0x168:
	  fctiwz    f0, f1
	  lwz       r0, 0x0(r27)
	  cmpwi     r0, 0x1
	  stfd      f0, 0x1820(r1)
	  lwz       r3, 0x1824(r1)
	  addi      r19, r3, 0xA
	  bne-      .loc_0x210
	  lwz       r3, 0x18(r20)
	  bl        -0xAE28
	  cmplwi    r3, 0
	  beq-      .loc_0x2C0
	  addi      r30, r1, 0x1020
	  addi      r29, r1, 0x820
	  addi      r28, r1, 0x20
	  lwz       r18, 0x10(r3)
	  add       r30, r30, r16
	  add       r29, r29, r16
	  add       r28, r28, r16
	  b         .loc_0x204

	.loc_0x1B4:
	  lwz       r0, 0x18(r18)
	  cmpwi     r0, 0x4
	  bne-      .loc_0x200
	  mr        r3, r17
	  mr        r4, r20
	  mr        r5, r18
	  bl        0x578
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x200
	  stw       r19, 0x0(r28)
	  addi      r23, r23, 0x1
	  addi      r16, r16, 0x4
	  lwz       r0, 0x0(r28)
	  addi      r28, r28, 0x4
	  stw       r20, 0x0(r30)
	  addi      r30, r30, 0x4
	  add       r22, r22, r0
	  stw       r18, 0x0(r29)
	  addi      r29, r29, 0x4

	.loc_0x200:
	  lwz       r18, 0x4(r18)

	.loc_0x204:
	  cmplwi    r18, 0
	  bne+      .loc_0x1B4
	  b         .loc_0x2C0

	.loc_0x210:
	  cmpwi     r0, 0
	  bne-      .loc_0x27C
	  mr        r3, r20
	  bl        -0xA0B8
	  subi      r4, r2, 0x3B40
	  li        r5, 0x4
	  bl        -0x183408
	  cmpwi     r3, 0
	  bne-      .loc_0x2C0
	  mr        r3, r17
	  mr        r4, r20
	  li        r5, 0
	  bl        0x504
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x2C0
	  addi      r6, r1, 0x20
	  addi      r5, r1, 0x1020
	  stwx      r19, r6, r16
	  addi      r3, r1, 0x820
	  li        r4, 0
	  addi      r23, r23, 0x1
	  lwzx      r0, r6, r16
	  stwx      r20, r5, r16
	  add       r22, r22, r0
	  stwx      r4, r3, r16
	  addi      r16, r16, 0x4
	  b         .loc_0x2C0

	.loc_0x27C:
	  mr        r3, r17
	  mr        r4, r20
	  li        r5, 0
	  bl        0x4BC
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x2C0
	  addi      r6, r1, 0x20
	  addi      r5, r1, 0x1020
	  stwx      r19, r6, r16
	  addi      r3, r1, 0x820
	  li        r4, 0
	  addi      r23, r23, 0x1
	  lwzx      r0, r6, r16
	  stwx      r20, r5, r16
	  add       r22, r22, r0
	  stwx      r4, r3, r16
	  addi      r16, r16, 0x4

	.loc_0x2C0:
	  lwz       r20, 0x4(r20)

	.loc_0x2C4:
	  cmplwi    r20, 0
	  bne+      .loc_0x104

	.loc_0x2CC:
	  addi      r21, r21, 0x1
	  addi      r27, r27, 0x4
	  cmpwi     r21, 0x3
	  blt+      .loc_0xE8
	  cmpwi     r22, 0
	  beq-      .loc_0x394
	  bl        -0x1845A4
	  lis       r4, 0x4330
	  xoris     r0, r3, 0x8000
	  stw       r0, 0x1824(r1)
	  xoris     r0, r22, 0x8000
	  lfd       f2, -0x3B60(r2)
	  addi      r5, r1, 0x20
	  stw       r4, 0x1820(r1)
	  li        r6, 0
	  lfs       f0, -0x3B68(r2)
	  li        r7, 0
	  lfd       f1, 0x1820(r1)
	  stw       r0, 0x182C(r1)
	  fsubs     f1, f1, f2
	  stw       r4, 0x1828(r1)
	  fdivs     f1, f1, f0
	  lfd       f0, 0x1828(r1)
	  fsubs     f0, f0, f2
	  fmuls     f0, f0, f1
	  fctiwz    f0, f0
	  stfd      f0, 0x1830(r1)
	  lwz       r3, 0x1834(r1)
	  mtctr     r23
	  cmpwi     r23, 0
	  ble-      .loc_0x394

	.loc_0x348:
	  lwz       r0, 0x0(r5)
	  add       r6, r6, r0
	  cmpw      r6, r3
	  ble-      .loc_0x388
	  lwz       r0, 0x0(r25)
	  rlwinm    r7,r7,2,0,29
	  addi      r3, r1, 0x1020
	  lwz       r5, 0x4(r17)
	  lwzx      r6, r3, r7
	  rlwinm    r4,r0,2,0,29
	  addi      r3, r1, 0x820
	  stwx      r6, r5, r4
	  lwzx      r0, r3, r7
	  lwz       r3, 0x8(r17)
	  stwx      r0, r3, r4
	  b         .loc_0x394

	.loc_0x388:
	  addi      r5, r5, 0x4
	  addi      r7, r7, 0x1
	  bdnz+     .loc_0x348

	.loc_0x394:
	  addi      r24, r24, 0x1
	  addi      r25, r25, 0x4
	  cmpwi     r24, 0x2
	  addi      r26, r26, 0x1
	  blt+      .loc_0x8C

	.loc_0x3A8:
	  lmw       r16, 0x1840(r1)
	  lwz       r0, 0x1884(r1)
	  mtlr      r0
	  addi      r1, r1, 0x1880
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8024DC1C
 * Size:	000324
 */
void Game::Cave::RandMapScore::setChallengeFixObjHard(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x1070(r1)
	  mflr      r0
	  stw       r0, 0x1074(r1)
	  stmw      r18, 0x1038(r1)
	  mr        r20, r3
	  lwz       r3, 0x4(r3)
	  lwz       r0, 0x4(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x310
	  lwz       r0, 0x8(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x34
	  b         .loc_0x310

	.loc_0x34:
	  lwz       r6, 0x0(r20)
	  lwz       r5, -0x3B38(r2)
	  lbz       r0, 0x0(r6)
	  lwz       r4, -0x3B34(r2)
	  lhz       r3, -0x3B30(r2)
	  cmplwi    r0, 0
	  stw       r5, 0xC(r1)
	  lwz       r31, 0x28(r6)
	  stw       r4, 0x10(r1)
	  sth       r3, 0x8(r1)
	  beq-      .loc_0x6C
	  li        r0, 0
	  stb       r0, 0x8(r1)
	  b         .loc_0x80

	.loc_0x6C:
	  lbz       r0, 0x1(r6)
	  cmplwi    r0, 0
	  bne-      .loc_0x80
	  li        r0, 0
	  stb       r0, 0x9(r1)

	.loc_0x80:
	  addi      r29, r1, 0x8
	  addi      r28, r1, 0xC
	  li        r27, 0

	.loc_0x8C:
	  lbz       r0, 0x0(r29)
	  cmplwi    r0, 0
	  beq-      .loc_0x2FC
	  lwz       r0, 0x0(r28)
	  lwz       r3, 0x4(r20)
	  rlwinm    r0,r0,2,0,29
	  lwzx      r0, r3, r0
	  cmplwi    r0, 0
	  bne-      .loc_0x2FC
	  lis       r3, 0x8048
	  li        r0, 0
	  addi      r5, r3, 0x4118
	  stw       r0, 0x820(r1)
	  lwz       r4, 0x0(r5)
	  addi      r30, r1, 0x14
	  lwz       r3, 0x4(r5)
	  li        r26, 0
	  lwz       r0, 0x8(r5)
	  li        r25, -0x1
	  stw       r4, 0x14(r1)
	  li        r24, 0
	  stw       r3, 0x18(r1)
	  stw       r0, 0x1C(r1)

	.loc_0xE8:
	  lwz       r0, 0x820(r1)
	  cmplwi    r0, 0
	  beq-      .loc_0xFC
	  cmpwi     r24, 0x2
	  bge-      .loc_0x26C

	.loc_0xFC:
	  lwz       r23, 0x10(r31)
	  b         .loc_0x264

	.loc_0x104:
	  lwz       r3, 0x18(r23)
	  bl        -0xB1AC
	  lwz       r0, 0x0(r30)
	  cmpw      r0, r3
	  bne-      .loc_0x260
	  mr        r3, r23
	  bl        -0xA384
	  lwz       r0, 0x0(r30)
	  mr        r22, r3
	  cmpwi     r0, 0x1
	  bne-      .loc_0x1A8
	  lwz       r3, 0x18(r23)
	  bl        -0xB190
	  cmplwi    r3, 0
	  beq-      .loc_0x260
	  lwz       r21, 0x10(r3)
	  addi      r18, r1, 0x820
	  addi      r19, r1, 0x20
	  b         .loc_0x19C

	.loc_0x150:
	  lwz       r0, 0x18(r21)
	  cmpwi     r0, 0x4
	  bne-      .loc_0x198
	  mr        r3, r20
	  mr        r4, r23
	  mr        r5, r21
	  bl        0x220
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x198
	  cmpw      r22, r25
	  blt-      .loc_0x198
	  ble-      .loc_0x188
	  li        r26, 0
	  mr        r25, r22

	.loc_0x188:
	  rlwinm    r0,r26,2,0,29
	  addi      r26, r26, 0x1
	  stwx      r23, r18, r0
	  stwx      r21, r19, r0

	.loc_0x198:
	  lwz       r21, 0x4(r21)

	.loc_0x19C:
	  cmplwi    r21, 0
	  bne+      .loc_0x150
	  b         .loc_0x260

	.loc_0x1A8:
	  cmpwi     r0, 0
	  bne-      .loc_0x218
	  mr        r3, r23
	  bl        -0xA40C
	  subi      r4, r2, 0x3B40
	  li        r5, 0x4
	  bl        -0x18375C
	  cmpwi     r3, 0
	  bne-      .loc_0x260
	  mr        r3, r20
	  mr        r4, r23
	  li        r5, 0
	  bl        0x1B0
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x260
	  cmpw      r22, r25
	  blt-      .loc_0x260
	  ble-      .loc_0x1F8
	  li        r26, 0
	  mr        r25, r22

	.loc_0x1F8:
	  rlwinm    r5,r26,2,0,29
	  addi      r4, r1, 0x820
	  addi      r3, r1, 0x20
	  li        r0, 0
	  stwx      r23, r4, r5
	  addi      r26, r26, 0x1
	  stwx      r0, r3, r5
	  b         .loc_0x260

	.loc_0x218:
	  mr        r3, r20
	  mr        r4, r23
	  li        r5, 0
	  bl        0x164
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x260
	  cmpw      r22, r25
	  blt-      .loc_0x260
	  ble-      .loc_0x244
	  li        r26, 0
	  mr        r25, r22

	.loc_0x244:
	  rlwinm    r5,r26,2,0,29
	  addi      r4, r1, 0x820
	  addi      r3, r1, 0x20
	  li        r0, 0
	  stwx      r23, r4, r5
	  addi      r26, r26, 0x1
	  stwx      r0, r3, r5

	.loc_0x260:
	  lwz       r23, 0x4(r23)

	.loc_0x264:
	  cmplwi    r23, 0
	  bne+      .loc_0x104

	.loc_0x26C:
	  addi      r24, r24, 0x1
	  addi      r30, r30, 0x4
	  cmpwi     r24, 0x3
	  blt+      .loc_0xE8
	  cmpwi     r26, 0
	  beq-      .loc_0x2FC
	  bl        -0x184900
	  lis       r7, 0x4330
	  xoris     r0, r3, 0x8000
	  stw       r0, 0x1024(r1)
	  xoris     r5, r26, 0x8000
	  lwz       r0, 0x0(r28)
	  addi      r6, r1, 0x820
	  stw       r7, 0x1020(r1)
	  addi      r3, r1, 0x20
	  lfd       f2, -0x3B60(r2)
	  rlwinm    r4,r0,2,0,29
	  lfd       f1, 0x1020(r1)
	  lfs       f0, -0x3B68(r2)
	  fsubs     f1, f1, f2
	  stw       r5, 0x102C(r1)
	  lwz       r5, 0x4(r20)
	  stw       r7, 0x1028(r1)
	  fdivs     f1, f1, f0
	  lfd       f0, 0x1028(r1)
	  fsubs     f0, f0, f2
	  fmuls     f0, f0, f1
	  fctiwz    f0, f0
	  stfd      f0, 0x1030(r1)
	  lwz       r0, 0x1034(r1)
	  rlwinm    r0,r0,2,0,29
	  lwzx      r6, r6, r0
	  lwzx      r0, r3, r0
	  stwx      r6, r5, r4
	  lwz       r3, 0x8(r20)
	  stwx      r0, r3, r4

	.loc_0x2FC:
	  addi      r27, r27, 0x1
	  addi      r28, r28, 0x4
	  cmpwi     r27, 0x2
	  addi      r29, r29, 0x1
	  blt+      .loc_0x8C

	.loc_0x310:
	  lmw       r18, 0x1038(r1)
	  lwz       r0, 0x1074(r1)
	  mtlr      r0
	  addi      r1, r1, 0x1070
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8024DF40
 * Size:	000064
 */
void Game::Cave::RandMapScore::isGoalSetHard(void)
{
	/*
	.loc_0x0:
	  lwz       r3, 0x0(r3)
	  lwz       r0, 0x4(r3)
	  cmpwi     r0, 0x2
	  beq-      .loc_0x44
	  bge-      .loc_0x24
	  cmpwi     r0, 0
	  beq-      .loc_0x34
	  bge-      .loc_0x3C
	  b         .loc_0x5C

	.loc_0x24:
	  cmpwi     r0, 0x4
	  beq-      .loc_0x54
	  bge-      .loc_0x5C
	  b         .loc_0x4C

	.loc_0x34:
	  li        r3, 0
	  blr

	.loc_0x3C:
	  li        r3, 0x1
	  blr

	.loc_0x44:
	  li        r3, 0
	  blr

	.loc_0x4C:
	  li        r3, 0x1
	  blr

	.loc_0x54:
	  li        r3, 0x1
	  blr

	.loc_0x5C:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8024DFA4
 * Size:	000128
 */
void Game::Cave::RandMapScore::isFixObjSet((Game::Cave::MapNode*,
                                            Game::Cave::BaseGen*))
{
	/*
	.loc_0x0:
	  lwz       r7, 0x4(r3)
	  lwz       r0, 0x0(r7)
	  cmplw     r4, r0
	  bne-      .loc_0x90
	  cmplwi    r5, 0
	  beq-      .loc_0x90
	  lwz       r6, 0x8(r3)
	  lwz       r6, 0x0(r6)
	  cmplwi    r6, 0
	  beq-      .loc_0x90
	  lfs       f1, 0x20(r6)
	  lfs       f0, 0x20(r5)
	  lfs       f3, 0x1C(r6)
	  fsubs     f4, f1, f0
	  lfs       f2, 0x1C(r5)
	  lfs       f1, 0x24(r6)
	  lfs       f0, 0x24(r5)
	  fsubs     f3, f3, f2
	  fmuls     f4, f4, f4
	  fsubs     f2, f1, f0
	  lfs       f0, -0x3B44(r2)
	  fmadds    f1, f3, f3, f4
	  fmuls     f2, f2, f2
	  fadds     f1, f2, f1
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x78
	  ble-      .loc_0x7C
	  fsqrte    f0, f1
	  fmuls     f1, f0, f1
	  b         .loc_0x7C

	.loc_0x78:
	  fmr       f1, f0

	.loc_0x7C:
	  lfs       f0, -0x3B2C(r2)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x90
	  li        r3, 0
	  blr

	.loc_0x90:
	  lwz       r0, 0x4(r7)
	  cmplw     r4, r0
	  bne-      .loc_0xB4
	  lwz       r6, 0x8(r3)
	  lwz       r0, 0x4(r6)
	  cmplw     r5, r0
	  bne-      .loc_0xB4
	  li        r3, 0
	  blr

	.loc_0xB4:
	  lwz       r0, 0x8(r7)
	  cmplw     r4, r0
	  bne-      .loc_0xD8
	  lwz       r6, 0x8(r3)
	  lwz       r0, 0x8(r6)
	  cmplw     r5, r0
	  bne-      .loc_0xD8
	  li        r3, 0
	  blr

	.loc_0xD8:
	  lwz       r0, 0xC(r7)
	  cmplw     r4, r0
	  bne-      .loc_0xFC
	  lwz       r6, 0x8(r3)
	  lwz       r0, 0xC(r6)
	  cmplw     r5, r0
	  bne-      .loc_0xFC
	  li        r3, 0
	  blr

	.loc_0xFC:
	  lwz       r0, 0x10(r7)
	  cmplw     r4, r0
	  bne-      .loc_0x120
	  lwz       r6, 0x8(r3)
	  lwz       r0, 0x10(r6)
	  cmplw     r5, r0
	  bne-      .loc_0x120
	  li        r3, 0
	  blr

	.loc_0x120:
	  li        r3, 0x1
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8024E0CC
 * Size:	000070
 */
void Game::Cave::FixObjNode::__dt(void)
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
	  beq-      .loc_0x54
	  lis       r4, 0x804C
	  addi      r0, r4, 0x1B18
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x44
	  lis       r5, 0x804C
	  li        r4, 0
	  addi      r0, r5, 0x1AA8
	  stw       r0, 0x0(r30)
	  bl        0x1C347C

	.loc_0x44:
	  extsh.    r0, r31
	  ble-      .loc_0x54
	  mr        r3, r30
	  bl        -0x22A068

	.loc_0x54:
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
 * Address:	8024E13C
 * Size:	000008
 */
void Game::Cave::FixObjNode::getObjectId(void)
{
	/*
	.loc_0x0:
	  li        r3, 0x1
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8024E144
 * Size:	000008
 */
void Game::Cave::FixObjNode::getObjectType(void)
{
	/*
	.loc_0x0:
	  lwz       r3, 0x18(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8024E14C
 * Size:	000008
 */
void Game::Cave::FixObjNode::getBirthCount(void)
{
	/*
	.loc_0x0:
	  li        r3, 0x1
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8024E154
 * Size:	000008
 */
void Game::Cave::FixObjNode::getDirection(void)
{
	/*
	.loc_0x0:
	  lfs       f1, 0x1C(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8024E15C
 * Size:	000014
 */
void Game::Cave::FixObjNode::getBirthPosition((float&, float&))
{
	/*
	.loc_0x0:
	  lfs       f0, 0x20(r3)
	  stfs      f0, 0x0(r4)
	  lfs       f0, 0x28(r3)
	  stfs      f0, 0x0(r5)
	  blr
	*/
}
