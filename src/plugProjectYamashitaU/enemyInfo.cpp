

/*
 * --INFO--
 * Address:	80123278
 * Size:	000064
 */
void Game::EnemyInfoFunc::getEnemyInfo((int, int))
{
	/*
	.loc_0x0:
	  lwz       r0, -0x7C30(r13)
	  lis       r5, 0x804B
	  subi      r5, r5, 0x3AC8
	  li        r6, 0
	  li        r7, 0
	  mtctr     r0
	  cmpwi     r0, 0
	  ble-      .loc_0x5C

	.loc_0x20:
	  lbz       r0, 0x4(r5)
	  extsb     r0, r0
	  cmpw      r3, r0
	  bne-      .loc_0x50
	  lhz       r0, 0x8(r5)
	  and.      r0, r4, r0
	  beq-      .loc_0x50
	  mulli     r4, r7, 0x34
	  lis       r3, 0x804B
	  subi      r0, r3, 0x3AC8
	  add       r6, r0, r4
	  b         .loc_0x5C

	.loc_0x50:
	  addi      r5, r5, 0x34
	  addi      r7, r7, 0x1
	  bdnz+     .loc_0x20

	.loc_0x5C:
	  mr        r3, r6
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801232DC
 * Size:	000074
 */
void Game::EnemyInfoFunc::getEnemyName((int, int))
{
	/*
	.loc_0x0:
	  lwz       r0, -0x7C30(r13)
	  lis       r5, 0x804B
	  li        r6, 0
	  subi      r7, r5, 0x3AC8
	  mr        r5, r6
	  mtctr     r0
	  cmpwi     r0, 0
	  ble-      .loc_0x5C

	.loc_0x20:
	  lbz       r0, 0x4(r7)
	  extsb     r0, r0
	  cmpw      r3, r0
	  bne-      .loc_0x50
	  lhz       r0, 0x8(r7)
	  and.      r0, r4, r0
	  beq-      .loc_0x50
	  mulli     r4, r5, 0x34
	  lis       r3, 0x804B
	  subi      r0, r3, 0x3AC8
	  add       r6, r0, r4
	  b         .loc_0x5C

	.loc_0x50:
	  addi      r7, r7, 0x34
	  addi      r5, r5, 0x1
	  bdnz+     .loc_0x20

	.loc_0x5C:
	  cmplwi    r6, 0
	  beq-      .loc_0x6C
	  lwz       r3, 0x0(r6)
	  blr

	.loc_0x6C:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80123350
 * Size:	0000A4
 */
void Game::EnemyInfoFunc::getEnemyResName((int, int))
{
	/*
	.loc_0x0:
	  cmpwi     r3, 0x3F
	  bge-      .loc_0x1C
	  cmpwi     r3, 0x3B
	  bge-      .loc_0x14
	  b         .loc_0x1C

	.loc_0x14:
	  subi      r3, r2, 0x6508
	  blr

	.loc_0x1C:
	  cmpwi     r3, 0x27
	  beq-      .loc_0x2C
	  cmpwi     r3, 0x40
	  bne-      .loc_0x30

	.loc_0x2C:
	  li        r3, 0x53

	.loc_0x30:
	  lwz       r0, -0x7C30(r13)
	  lis       r5, 0x804B
	  li        r6, 0
	  subi      r7, r5, 0x3AC8
	  mr        r5, r6
	  mtctr     r0
	  cmpwi     r0, 0
	  ble-      .loc_0x8C

	.loc_0x50:
	  lbz       r0, 0x4(r7)
	  extsb     r0, r0
	  cmpw      r3, r0
	  bne-      .loc_0x80
	  lhz       r0, 0x8(r7)
	  and.      r0, r4, r0
	  beq-      .loc_0x80
	  mulli     r4, r5, 0x34
	  lis       r3, 0x804B
	  subi      r0, r3, 0x3AC8
	  add       r6, r0, r4
	  b         .loc_0x8C

	.loc_0x80:
	  addi      r7, r7, 0x34
	  addi      r5, r5, 0x1
	  bdnz+     .loc_0x50

	.loc_0x8C:
	  lwz       r3, 0x10(r6)
	  subi      r0, r2, 0x6678
	  cmplw     r3, r0
	  bnelr-
	  lwz       r3, 0x0(r6)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801233F4
 * Size:	000074
 */
void Game::EnemyInfoFunc::getEnemyMember((int, int))
{
	/*
	.loc_0x0:
	  lwz       r0, -0x7C30(r13)
	  lis       r5, 0x804B
	  li        r6, 0
	  subi      r7, r5, 0x3AC8
	  mr        r5, r6
	  mtctr     r0
	  cmpwi     r0, 0
	  ble-      .loc_0x5C

	.loc_0x20:
	  lbz       r0, 0x4(r7)
	  extsb     r0, r0
	  cmpw      r3, r0
	  bne-      .loc_0x50
	  lhz       r0, 0x8(r7)
	  and.      r0, r4, r0
	  beq-      .loc_0x50
	  mulli     r4, r5, 0x34
	  lis       r3, 0x804B
	  subi      r0, r3, 0x3AC8
	  add       r6, r0, r4
	  b         .loc_0x5C

	.loc_0x50:
	  addi      r7, r7, 0x34
	  addi      r5, r5, 0x1
	  bdnz+     .loc_0x20

	.loc_0x5C:
	  cmplwi    r6, 0
	  beq-      .loc_0x6C
	  lbz       r3, 0x6(r6)
	  blr

	.loc_0x6C:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80123468
 * Size:	000090
 */
void Game::EnemyInfoFunc::getEnemyID((char*, int))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r5, 0x804B
	  stw       r0, 0x24(r1)
	  stmw      r27, 0xC(r1)
	  mr        r27, r3
	  subi      r31, r5, 0x3AC8
	  mr        r28, r4
	  li        r30, 0
	  li        r29, 0
	  b         .loc_0x68

	.loc_0x2C:
	  lwz       r3, 0x0(r31)
	  mr        r4, r27
	  bl        -0x537C0
	  cmpwi     r3, 0
	  bne-      .loc_0x60
	  lhz       r0, 0x8(r31)
	  and.      r0, r28, r0
	  beq-      .loc_0x60
	  mulli     r4, r29, 0x34
	  lis       r3, 0x804B
	  subi      r0, r3, 0x3AC8
	  add       r30, r0, r4
	  b         .loc_0x74

	.loc_0x60:
	  addi      r31, r31, 0x34
	  addi      r29, r29, 0x1

	.loc_0x68:
	  lwz       r0, -0x7C30(r13)
	  cmpw      r29, r0
	  blt+      .loc_0x2C

	.loc_0x74:
	  lbz       r3, 0x4(r30)
	  lmw       r27, 0xC(r1)
	  lwz       r0, 0x24(r1)
	  extsb     r3, r3
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}
