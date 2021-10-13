

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
 * Address:	802613C0
 * Size:	00000C
 */
void Game::RumbleData::__ct(void)
{
	/*
	.loc_0x0:
	  li        r0, 0
	  stw       r0, 0x0(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000D8
 */
void Game::RumbleData::read((Stream&))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	802613CC
 * Size:	00000C
 */
void Game::RumbleDataMgr::__ct(void)
{
	/*
	.loc_0x0:
	  li        r0, 0
	  stw       r0, 0x0(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802613D8
 * Size:	00002C
 */
void Game::RumbleDataMgr::getRumbleData((int))
{
	/*
	.loc_0x0:
	  cmpwi     r4, 0
	  blt-      .loc_0x24
	  lwz       r0, 0x0(r3)
	  cmpw      r4, r0
	  bge-      .loc_0x24
	  mulli     r0, r4, 0xC
	  lwz       r3, 0x4(r3)
	  add       r3, r3, r0
	  blr

	.loc_0x24:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80261404
 * Size:	000128
 */
void Game::RumbleDataMgr::read((Stream&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stmw      r25, 0x14(r1)
	  mr        r31, r4
	  mr        r30, r3
	  mr        r3, r31
	  bl        0x1B3670
	  stw       r3, 0x0(r30)
	  lwz       r26, 0x0(r30)
	  cmpwi     r26, 0
	  beq-      .loc_0x114
	  mulli     r3, r26, 0xC
	  addi      r3, r3, 0x10
	  bl        -0x23D490
	  lis       r4, 0x8026
	  mr        r7, r26
	  addi      r4, r4, 0x13C0
	  li        r5, 0
	  li        r6, 0xC
	  bl        -0x19FA64
	  stw       r3, 0x4(r30)
	  li        r25, 0
	  li        r26, 0
	  b         .loc_0x108

	.loc_0x64:
	  lwz       r0, 0x4(r30)
	  mr        r3, r31
	  add       r28, r0, r26
	  bl        0x1B361C
	  stw       r3, 0x0(r28)
	  lwz       r0, 0x0(r28)
	  cmpwi     r0, 0
	  ble-      .loc_0x100
	  rlwinm    r3,r0,2,0,29
	  bl        -0x23D4E0
	  stw       r3, 0x4(r28)
	  lwz       r0, 0x0(r28)
	  rlwinm    r3,r0,2,0,29
	  bl        -0x23D4F0
	  li        r29, 0
	  stw       r3, 0x8(r28)
	  mr        r27, r29
	  b         .loc_0xC4

	.loc_0xAC:
	  mr        r3, r31
	  bl        0x1B38F8
	  lwz       r3, 0x4(r28)
	  addi      r29, r29, 0x1
	  stfsx     f1, r3, r27
	  addi      r27, r27, 0x4

	.loc_0xC4:
	  lwz       r0, 0x0(r28)
	  cmpw      r29, r0
	  blt+      .loc_0xAC
	  li        r29, 0
	  mr        r27, r29
	  b         .loc_0xF4

	.loc_0xDC:
	  mr        r3, r31
	  bl        0x1B38C8
	  lwz       r3, 0x8(r28)
	  addi      r29, r29, 0x1
	  stfsx     f1, r3, r27
	  addi      r27, r27, 0x4

	.loc_0xF4:
	  lwz       r0, 0x0(r28)
	  cmpw      r29, r0
	  blt+      .loc_0xDC

	.loc_0x100:
	  addi      r26, r26, 0xC
	  addi      r25, r25, 0x1

	.loc_0x108:
	  lwz       r0, 0x0(r30)
	  cmpw      r25, r0
	  blt+      .loc_0x64

	.loc_0x114:
	  lmw       r25, 0x14(r1)
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}
