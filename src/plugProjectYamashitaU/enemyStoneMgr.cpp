

/*
 * --INFO--
 * Address:	80127C00
 * Size:	000088
 */
void Game::EnemyStone::Mgr::__ct(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  li        r0, 0
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  stw       r0, 0x0(r3)
	  addi      r3, r31, 0x8
	  stb       r0, 0x4(r31)
	  stb       r0, 0x5(r31)
	  stb       r0, 0x6(r31)
	  stb       r0, 0x7(r31)
	  bl        0x2E9760
	  addi      r3, r31, 0x20
	  bl        0x2E9758
	  li        r0, 0
	  mr        r3, r31
	  stb       r0, 0x4(r31)
	  stb       r0, 0x5(r31)
	  stb       r0, 0x6(r31)
	  stb       r0, 0x7(r31)
	  stw       r0, 0x18(r31)
	  stw       r0, 0x14(r31)
	  stw       r0, 0x10(r31)
	  stw       r0, 0xC(r31)
	  stw       r0, 0x30(r31)
	  stw       r0, 0x2C(r31)
	  stw       r0, 0x28(r31)
	  stw       r0, 0x24(r31)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80127C88
 * Size:	000174
 */
void Game::EnemyStone::Mgr::loadResource(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x60(r1)
	  mflr      r0
	  lis       r4, 0x8048
	  li        r5, 0
	  stw       r0, 0x64(r1)
	  stmw      r25, 0x44(r1)
	  mr        r31, r3
	  subi      r29, r4, 0x41A8
	  addi      r4, r29, 0x28
	  lwz       r3, -0x6514(r13)
	  bl        0x2FB6AC
	  lwz       r3, -0x6514(r13)
	  addi      r4, r29, 0x48
	  li        r5, 0
	  bl        0x2FB69C
	  li        r3, 0x8
	  bl        -0x103D1C
	  stw       r3, 0x0(r31)
	  addi      r3, r1, 0x8
	  addi      r4, r29, 0x64
	  bl        0x324944
	  lwz       r3, -0x63D8(r13)
	  addi      r4, r1, 0x8
	  bl        0x324A30
	  lis       r4, 0x8048
	  lwz       r28, 0x34(r3)
	  subi      r30, r4, 0x7794
	  li        r25, 0
	  subi      r27, r13, 0x7C28
	  li        r26, 0

	.loc_0x78:
	  mr        r3, r28
	  lwz       r4, 0x0(r27)
	  lwz       r12, 0x0(r28)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lis       r4, 0x24
	  bl        -0xB8488
	  lwz       r5, 0x0(r31)
	  lis       r4, 0x4
	  stwx      r3, r5, r26
	  lwz       r3, 0x0(r31)
	  lwzx      r3, r3, r26
	  bl        -0xA445C
	  lwz       r3, 0x0(r31)
	  mr        r5, r30
	  li        r4, 0
	  lwzx      r3, r3, r26
	  bl        -0xA4298
	  lwz       r3, 0x0(r31)
	  lwzx      r3, r3, r26
	  bl        -0xA4324
	  addi      r25, r25, 0x1
	  addi      r26, r26, 0x4
	  cmpwi     r25, 0x2
	  addi      r27, r27, 0x4
	  blt+      .loc_0x78
	  lwz       r3, -0x6514(r13)
	  addi      r4, r29, 0x48
	  bl        0x2FB5F0
	  lwz       r3, -0x6514(r13)
	  addi      r4, r29, 0x84
	  li        r5, 0
	  bl        0x2FB5D8
	  li        r3, 0x4810
	  bl        -0x103DE0
	  lis       r4, 0x8012
	  lis       r5, 0x8010
	  addi      r4, r4, 0x7DFC
	  li        r6, 0x48
	  addi      r5, r5, 0x7704
	  li        r7, 0x100
	  bl        -0x663B8
	  li        r25, 0
	  mr        r26, r3

	.loc_0x12C:
	  mr        r4, r26
	  addi      r3, r31, 0x8
	  bl        0x2E964C
	  addi      r25, r25, 0x1
	  addi      r26, r26, 0x48
	  cmplwi    r25, 0x100
	  blt+      .loc_0x12C
	  lwz       r3, -0x6514(r13)
	  addi      r4, r29, 0x84
	  bl        0x2FB58C
	  lwz       r3, -0x6514(r13)
	  addi      r4, r29, 0x28
	  bl        0x2FB580
	  lmw       r25, 0x44(r1)
	  lwz       r0, 0x64(r1)
	  mtlr      r0
	  addi      r1, r1, 0x60
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80127DFC
 * Size:	000024
 */
void Game::EnemyStone::DrawInfo::__defctor(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r4, 0x1
	  stw       r0, 0x14(r1)
	  bl        0x1674
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00003C
 */
void Game::EnemyStone::Mgr::getDrawInfo(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000048
 */
void Game::EnemyStone::Mgr::addDrawInfo((Game::EnemyStone::DrawInfo*))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80127E20
 * Size:	0000F8
 */
void Game::EnemyStone::Mgr::regist((Game::EnemyStone::Obj*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stmw      r25, 0x14(r1)
	  mr        r31, r4
	  mr        r30, r3
	  li        r26, 0x1
	  lbz       r0, 0x50(r4)
	  rlwinm.   r0,r0,0,31,31
	  bne-      .loc_0xE0
	  addi      r3, r30, 0x8
	  lwz       r4, 0x18(r31)
	  lwz       r12, 0x8(r30)
	  lbz       r29, 0x0(r4)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  cmpw      r29, r3
	  bgt-      .loc_0xDC
	  lbz       r0, 0x50(r31)
	  li        r25, 0
	  li        r27, 0
	  ori       r0, r0, 0x1
	  stb       r0, 0x50(r31)
	  b         .loc_0xBC

	.loc_0x64:
	  lwz       r29, 0x18(r30)
	  lwz       r0, 0x4(r3)
	  cmplwi    r29, 0
	  add       r28, r0, r27
	  beq-      .loc_0x80
	  mr        r3, r29
	  bl        0x2E9734

	.loc_0x80:
	  lwz       r3, 0x4C(r31)
	  lwz       r4, 0x0(r28)
	  lwz       r3, 0x174(r3)
	  bl        0x317138
	  bl        0x3019F0
	  stw       r3, 0x44(r29)
	  mr        r4, r29
	  stw       r28, 0x40(r29)
	  lwz       r0, 0x4(r28)
	  mulli     r3, r0, 0x18
	  addi      r3, r3, 0x1C
	  add       r3, r31, r3
	  bl        0x2E9538
	  addi      r27, r27, 0x38
	  addi      r25, r25, 0x1

	.loc_0xBC:
	  lwz       r3, 0x18(r31)
	  lbz       r0, 0x0(r3)
	  cmpw      r25, r0
	  blt+      .loc_0x64
	  mr        r4, r31
	  addi      r3, r30, 0x20
	  bl        0x2E9514
	  b         .loc_0xE0

	.loc_0xDC:
	  li        r26, 0

	.loc_0xE0:
	  mr        r3, r26
	  lmw       r25, 0x14(r1)
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80127F18
 * Size:	00008C
 */
void Game::EnemyStone::Mgr::release((Game::EnemyStone::Obj*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stmw      r26, 0x8(r1)
	  mr        r26, r3
	  mr        r27, r4
	  lbz       r3, 0x50(r4)
	  rlwinm.   r0,r3,0,31,31
	  beq-      .loc_0x78
	  rlwinm    r0,r3,0,24,30
	  mr        r31, r27
	  stb       r0, 0x50(r27)
	  li        r30, 0

	.loc_0x34:
	  lwz       r29, 0x2C(r31)
	  b         .loc_0x58

	.loc_0x3C:
	  lwz       r28, 0x4(r29)
	  mr        r3, r29
	  bl        0x15E0
	  mr        r4, r29
	  addi      r3, r26, 0x8
	  bl        0x2E94A0
	  mr        r29, r28

	.loc_0x58:
	  cmplwi    r29, 0
	  bne+      .loc_0x3C
	  addi      r30, r30, 0x1
	  addi      r31, r31, 0x18
	  cmpwi     r30, 0x2
	  blt+      .loc_0x34
	  mr        r3, r27
	  bl        0x2E9644

	.loc_0x78:
	  lmw       r26, 0x8(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80127FA4
 * Size:	000164
 */
void Game::EnemyStone::Mgr::draw((Viewport*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0xF0(r1)
	  mflr      r0
	  lis       r5, 0x8051
	  stw       r0, 0xF4(r1)
	  stmw      r23, 0xCC(r1)
	  li        r30, 0
	  mr        r25, r3
	  mr        r26, r4
	  mr        r29, r30
	  subi      r31, r5, 0xDD0
	  li        r28, 0

	.loc_0x2C:
	  lwz       r27, 0x30(r25)
	  cmplwi    r27, 0
	  beq-      .loc_0x13C
	  b         .loc_0x134

	.loc_0x3C:
	  lwz       r3, 0x4C(r27)
	  lbz       r0, 0xD8(r3)
	  rlwinm.   r0,r0,0,29,29
	  beq-      .loc_0x130
	  addi      r0, r30, 0x2C
	  lwzx      r24, r27, r0
	  b         .loc_0x128

	.loc_0x58:
	  lwz       r3, 0x0(r25)
	  li        r0, 0
	  lwzx      r5, r29, r3
	  lwz       r4, 0x28(r5)
	  lwz       r3, 0xA0(r5)
	  lwz       r4, 0x0(r4)
	  lwz       r23, 0x58(r4)
	  stw       r3, 0x10C(r31)
	  lwz       r3, 0xA4(r5)
	  stw       r3, 0x110(r31)
	  lwz       r3, 0xAC(r5)
	  stw       r3, 0x114(r31)
	  stw       r0, -0x7690(r13)
	  b         .loc_0x11C

	.loc_0x90:
	  mr        r3, r23
	  lwz       r12, 0x0(r23)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x8(r23)
	  bl        -0xC720C
	  mr        r3, r24
	  addi      r4, r1, 0x98
	  li        r5, 0x1
	  bl        0x15BC
	  mr        r3, r26
	  li        r4, 0x1
	  bl        0x2FD0F4
	  addi      r4, r1, 0x98
	  addi      r5, r1, 0x68
	  bl        -0x3DD74
	  addi      r3, r1, 0x68
	  addi      r4, r1, 0x38
	  bl        -0x3DC64
	  addi      r3, r1, 0x38
	  addi      r4, r1, 0x8
	  bl        -0x3DCC0
	  addi      r3, r1, 0x68
	  li        r4, 0
	  bl        -0x3EB20
	  addi      r3, r1, 0x8
	  li        r4, 0
	  bl        -0x3EADC
	  lwz       r3, 0x8(r23)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lwz       r23, 0x4(r23)

	.loc_0x11C:
	  cmplwi    r23, 0
	  bne+      .loc_0x90
	  lwz       r24, 0x4(r24)

	.loc_0x128:
	  cmplwi    r24, 0
	  bne+      .loc_0x58

	.loc_0x130:
	  lwz       r27, 0x4(r27)

	.loc_0x134:
	  cmplwi    r27, 0
	  bne+      .loc_0x3C

	.loc_0x13C:
	  addi      r28, r28, 0x1
	  addi      r29, r29, 0x4
	  cmpwi     r28, 0x2
	  addi      r30, r30, 0x18
	  blt+      .loc_0x2C
	  lmw       r23, 0xCC(r1)
	  lwz       r0, 0xF4(r1)
	  mtlr      r0
	  addi      r1, r1, 0xF0
	  blr
	*/
}
