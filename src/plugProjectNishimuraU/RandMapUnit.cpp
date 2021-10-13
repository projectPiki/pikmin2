

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
 * Address:	80245C5C
 * Size:	000030
 */
void Game::Cave::EditMapUnit::__ct(void)
{
	/*
	.loc_0x0:
	  lfs       f0, -0x3C00(r2)
	  li        r4, 0
	  li        r0, -0x80
	  stfs      f0, 0x0(r3)
	  stw       r4, 0x4(r3)
	  stw       r4, 0x8(r3)
	  stw       r4, 0xC(r3)
	  stw       r4, 0x10(r3)
	  stw       r4, 0x14(r3)
	  stw       r4, 0x18(r3)
	  stw       r0, 0x1C(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80245C8C
 * Size:	0000B8
 */
void Game::Cave::EditMapUnit::read((char*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x440(r1)
	  mflr      r0
	  li        r5, 0
	  li        r6, 0
	  stw       r0, 0x444(r1)
	  li        r0, 0
	  li        r7, 0
	  li        r8, 0x2
	  stw       r31, 0x43C(r1)
	  li        r9, 0
	  li        r10, 0
	  stw       r30, 0x438(r1)
	  mr        r30, r4
	  li        r4, 0
	  stw       r29, 0x434(r1)
	  mr        r29, r3
	  mr        r3, r30
	  stw       r0, 0x8(r1)
	  bl        -0x226B4C
	  mr.       r31, r3
	  beq-      .loc_0x7C
	  mr        r4, r31
	  addi      r3, r1, 0x10
	  li        r5, -0x1
	  bl        0x1CFC0C
	  mr        r3, r29
	  addi      r4, r1, 0x10
	  bl        .loc_0xB8
	  mr        r3, r31
	  bl        -0x221C28
	  b         .loc_0x9C

	.loc_0x7C:
	  lis       r3, 0x8048
	  lis       r4, 0x8048
	  addi      r5, r4, 0x40A0
	  mr        r6, r30
	  addi      r3, r3, 0x4090
	  li        r4, 0x55
	  crclr     6, 0x6
	  bl        -0x21B6E4

	.loc_0x9C:
	  lwz       r0, 0x444(r1)
	  lwz       r31, 0x43C(r1)
	  lwz       r30, 0x438(r1)
	  lwz       r29, 0x434(r1)
	  mtlr      r0
	  addi      r1, r1, 0x440
	  blr

	.loc_0xB8:
	*/
}

/*
 * --INFO--
 * Address:	80245D44
 * Size:	0001E8
 */
void Game::Cave::EditMapUnit::read((Stream*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  li        r0, 0x1
	  stmw      r25, 0x14(r1)
	  mr        r27, r4
	  mr        r26, r3
	  stw       r0, 0xC(r4)
	  lwz       r0, 0xC(r4)
	  cmpwi     r0, 0x1
	  bne-      .loc_0x34
	  li        r0, 0
	  stw       r0, 0x414(r27)

	.loc_0x34:
	  mr        r3, r27
	  bl        0x1CF030
	  stfs      f1, 0x0(r26)
	  mr        r3, r27
	  bl        0x1CED08
	  stw       r3, 0x4(r26)
	  lwz       r0, 0x4(r26)
	  rlwinm    r3,r0,2,0,29
	  bl        -0x221DEC
	  stw       r3, 0x8(r26)
	  lwz       r0, 0x4(r26)
	  rlwinm    r3,r0,2,0,29
	  bl        -0x221DFC
	  stw       r3, 0xC(r26)
	  lwz       r0, 0x4(r26)
	  rlwinm    r3,r0,2,0,29
	  bl        -0x221E0C
	  stw       r3, 0x10(r26)
	  lwz       r0, 0x4(r26)
	  rlwinm    r3,r0,2,0,29
	  bl        -0x221E1C
	  stw       r3, 0x14(r26)
	  lwz       r0, 0x4(r26)
	  rlwinm    r3,r0,2,0,29
	  bl        -0x221E2C
	  stw       r3, 0x18(r26)
	  li        r29, 0
	  li        r30, 0
	  b         .loc_0x1C0

	.loc_0xA8:
	  mr        r3, r27
	  bl        0x1CECA0
	  lwz       r4, 0x8(r26)
	  stwx      r3, r4, r30
	  lwz       r3, 0x8(r26)
	  lwzx      r0, r3, r30
	  rlwinm    r3,r0,2,0,29
	  bl        -0x221E5C
	  lwz       r4, 0xC(r26)
	  stwx      r3, r4, r30
	  lwz       r3, 0x8(r26)
	  lwzx      r0, r3, r30
	  rlwinm    r3,r0,2,0,29
	  bl        -0x221E74
	  lwz       r4, 0x10(r26)
	  stwx      r3, r4, r30
	  lwz       r3, 0x8(r26)
	  lwzx      r0, r3, r30
	  rlwinm    r3,r0,2,0,29
	  bl        -0x221E8C
	  lwz       r4, 0x14(r26)
	  stwx      r3, r4, r30
	  lwz       r3, 0x8(r26)
	  lwzx      r0, r3, r30
	  rlwinm    r3,r0,2,0,29
	  bl        -0x221EA4
	  lwz       r4, 0x18(r26)
	  li        r28, 0
	  li        r31, 0
	  stwx      r3, r4, r30
	  b         .loc_0x1A8

	.loc_0x124:
	  mr        r3, r27
	  li        r4, 0
	  li        r5, 0
	  bl        0x1CF260
	  mr        r25, r3
	  bl        -0x17B56C
	  addi      r3, r3, 0x1
	  bl        -0x221ED8
	  lwz       r0, 0xC(r26)
	  mr        r4, r25
	  lwzx      r5, r30, r0
	  stwx      r3, r5, r31
	  lwz       r0, 0xC(r26)
	  lwzx      r3, r30, r0
	  lwzx      r3, r3, r31
	  bl        -0x17B64C
	  mr        r3, r27
	  bl        0x1CEBE4
	  lwz       r0, 0x10(r26)
	  lwzx      r4, r30, r0
	  stwx      r3, r4, r31
	  mr        r3, r27
	  bl        0x1CEBD0
	  lwz       r0, 0x14(r26)
	  lwzx      r4, r30, r0
	  stwx      r3, r4, r31
	  mr        r3, r27
	  bl        0x1CEBBC
	  lwz       r0, 0x18(r26)
	  addi      r28, r28, 0x1
	  lwzx      r4, r30, r0
	  stwx      r3, r4, r31
	  addi      r31, r31, 0x4

	.loc_0x1A8:
	  lwz       r0, 0x8(r26)
	  lwzx      r0, r30, r0
	  cmpw      r28, r0
	  blt+      .loc_0x124
	  addi      r30, r30, 0x4
	  addi      r29, r29, 0x1

	.loc_0x1C0:
	  lwz       r0, 0x4(r26)
	  cmpw      r29, r0
	  blt+      .loc_0xA8
	  li        r0, -0x80
	  stw       r0, 0x1C(r26)
	  lmw       r25, 0x14(r1)
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80245F2C
 * Size:	000054
 */
void Game::Cave::EditMapUnit::setEditNumber((int))
{
	/*
	.loc_0x0:
	  cmpwi     r4, -0x1
	  bne-      .loc_0x10
	  stw       r4, 0x1C(r3)
	  blr

	.loc_0x10:
	  lwz       r5, 0x4(r3)
	  cmpwi     r5, 0
	  ble-      .loc_0x48
	  cmpwi     r4, 0
	  bltlr-
	  subi      r0, r5, 0x1
	  bge-      .loc_0x34
	  li        r4, 0
	  b         .loc_0x40

	.loc_0x34:
	  cmpw      r4, r0
	  ble-      .loc_0x40
	  mr        r4, r0

	.loc_0x40:
	  stw       r4, 0x1C(r3)
	  blr

	.loc_0x48:
	  li        r0, -0x1
	  stw       r0, 0x1C(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80245F80
 * Size:	00019C
 */
void Game::Cave::RandMapUnit::__ct((Game::Cave::MapUnitGenerator*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stmw      r26, 0x18(r1)
	  mr        r26, r4
	  mr        r31, r3
	  stw       r26, 0x20(r3)
	  li        r3, 0xC
	  lwz       r4, 0x20(r31)
	  lwz       r29, 0x10(r4)
	  lwz       r30, 0x28(r4)
	  bl        -0x222000
	  stw       r3, 0x24(r31)
	  li        r27, 0
	  li        r28, 0

	.loc_0x3C:
	  mr        r3, r29
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x24(r31)
	  addi      r27, r27, 0x1
	  cmpwi     r27, 0x3
	  addi      r29, r29, 0x40
	  stwx      r3, r4, r28
	  addi      r28, r28, 0x4
	  blt+      .loc_0x3C
	  lwz       r3, 0x20(r31)
	  lwz       r29, 0x8(r3)
	  cmplwi    r29, 0
	  beq-      .loc_0xEC
	  mr        r3, r29
	  bl        -0x6EF90
	  stw       r3, 0x4(r31)
	  mr        r3, r29
	  bl        -0x6EF94
	  stfs      f1, 0x8(r31)
	  mr        r3, r29
	  bl        -0x6F070
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0xC(r1)
	  lfd       f3, -0x3BF0(r2)
	  stw       r0, 0x8(r1)
	  lfs       f1, -0x3BFC(r2)
	  lfd       f2, 0x8(r1)
	  lfs       f0, -0x3C00(r2)
	  fsubs     f2, f2, f3
	  fmuls     f1, f1, f2
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0xD0
	  b         .loc_0xE4

	.loc_0xD0:
	  lfs       f0, -0x3BF8(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0xE0
	  b         .loc_0xE4

	.loc_0xE0:
	  fmr       f0, f1

	.loc_0xE4:
	  stfs      f0, 0x14(r31)
	  b         .loc_0x100

	.loc_0xEC:
	  li        r0, 0x2
	  lfs       f0, -0x3C00(r2)
	  stw       r0, 0x4(r31)
	  stfs      f0, 0x8(r31)
	  stfs      f0, 0x14(r31)

	.loc_0x100:
	  li        r0, 0
	  stb       r0, 0xC(r31)
	  stw       r0, 0x0(r31)
	  lwz       r3, 0xC(r26)
	  lwz       r27, 0x10(r3)
	  b         .loc_0x134

	.loc_0x118:
	  mr        r3, r27
	  bl        -0x203C
	  lwz       r0, 0x0(r31)
	  cmpw      r3, r0
	  ble-      .loc_0x130
	  stw       r3, 0x0(r31)

	.loc_0x130:
	  lwz       r27, 0x4(r27)

	.loc_0x134:
	  cmplwi    r27, 0
	  bne+      .loc_0x118
	  li        r3, 0x4
	  bl        -0x22221C
	  mr.       r0, r3
	  beq-      .loc_0x158
	  mr        r4, r30
	  bl        -0xA6C
	  mr        r0, r3

	.loc_0x158:
	  stw       r0, 0x28(r31)
	  li        r4, 0x1
	  li        r0, 0
	  li        r3, 0x40
	  stb       r4, 0xD(r31)
	  stw       r0, 0x10(r31)
	  bl        -0x222144
	  stw       r3, 0x18(r31)
	  li        r3, 0x40
	  bl        -0x222150
	  stw       r3, 0x1C(r31)
	  mr        r3, r31
	  lmw       r26, 0x18(r1)
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8024611C
 * Size:	0000F4
 */
void Game::Cave::RandMapUnit::setMapUnit(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  lwz       r4, 0x20(r3)
	  lwz       r0, 0x30(r4)
	  cmplwi    r0, 0
	  beq-      .loc_0x38
	  bl        0x7E8
	  b         .loc_0x3C

	.loc_0x38:
	  bl        0x924

	.loc_0x3C:
	  mr        r3, r28
	  bl        0x1E20
	  cmpwi     r3, 0
	  beq-      .loc_0xD4
	  li        r30, 0

	.loc_0x50:
	  mr        r3, r28
	  bl        0x174
	  mr.       r29, r3
	  beq-      .loc_0x88
	  bl        -0x27D8
	  mr        r31, r3
	  mr        r3, r29
	  bl        -0x27EC
	  lwz       r4, 0x18(r29)
	  mr        r5, r3
	  mr        r3, r28
	  mr        r6, r31
	  li        r7, 0x1
	  bl        0x1E68

	.loc_0x88:
	  mr        r3, r28
	  bl        0x1DD4
	  cmpwi     r3, 0
	  bne-      .loc_0xC8
	  mr        r3, r28
	  bl        0x198
	  mr        r3, r28
	  bl        0x1DBC
	  cmpwi     r3, 0
	  bne-      .loc_0xC8
	  mr        r3, r28
	  bl        0x404
	  mr        r3, r28
	  bl        0x1DA4
	  cmpwi     r3, 0
	  beq-      .loc_0xD4

	.loc_0xC8:
	  addi      r30, r30, 0x1
	  cmpwi     r30, 0x1F4
	  blt+      .loc_0x50

	.loc_0xD4:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  lwz       r28, 0x10(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80246210
 * Size:	000034
 */
void Game::Cave::RandMapUnit::getAliveMapIndex((Game::Cave::MapNode*))
{
	/*
	.loc_0x0:
	  lwz       r5, 0x20(r3)
	  li        r3, 0
	  lwz       r5, 0x28(r5)
	  lwz       r5, 0x10(r5)
	  b         .loc_0x24

	.loc_0x14:
	  cmplw     r4, r5
	  beqlr-
	  lwz       r5, 0x4(r5)
	  addi      r3, r3, 0x1

	.loc_0x24:
	  cmplwi    r5, 0
	  bne+      .loc_0x14
	  li        r3, -0x1
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80246244
 * Size:	0000A0
 */
void Game::Cave::RandMapUnit::getTextureSize((int&, int&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stmw      r25, 0x14(r1)
	  mr        r25, r4
	  mr        r26, r5
	  li        r30, -0x3200
	  li        r29, -0x3200
	  lwz       r3, 0x20(r3)
	  lwz       r3, 0x28(r3)
	  lwz       r28, 0x10(r3)
	  b         .loc_0x7C

	.loc_0x30:
	  lwz       r3, 0x18(r28)
	  bl        -0x36F4
	  mr        r31, r3
	  mr        r3, r28
	  bl        -0x28E8
	  add       r27, r3, r31
	  lwz       r3, 0x18(r28)
	  bl        -0x3704
	  mr        r31, r3
	  mr        r3, r28
	  bl        -0x28F8
	  cmpw      r27, r30
	  add       r0, r3, r31
	  ble-      .loc_0x6C
	  mr        r30, r27

	.loc_0x6C:
	  cmpw      r0, r29
	  ble-      .loc_0x78
	  mr        r29, r0

	.loc_0x78:
	  lwz       r28, 0x4(r28)

	.loc_0x7C:
	  cmplwi    r28, 0
	  bne+      .loc_0x30
	  stw       r30, 0x0(r25)
	  stw       r29, 0x0(r26)
	  lmw       r25, 0x14(r1)
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802462E4
 * Size:	00006C
 */
void Game::Cave::RandMapUnit::getRandMapUnit(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r4, 0x1
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        0x1C10
	  lwz       r0, 0x4(r31)
	  cmpw      r3, r0
	  bge-      .loc_0x34
	  mr        r3, r31
	  bl        0x860
	  b         .loc_0x58

	.loc_0x34:
	  mr        r3, r31
	  bl        0x2414
	  mr        r3, r31
	  bl        0xF14
	  cmplwi    r3, 0
	  beq-      .loc_0x50
	  b         .loc_0x58

	.loc_0x50:
	  mr        r3, r31
	  bl        0x18E4

	.loc_0x58:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80246350
 * Size:	000284
 */
void Game::Cave::RandMapUnit::changeCapToRootLoopMapUnit(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x90(r1)
	  mflr      r0
	  stw       r0, 0x94(r1)
	  stmw      r20, 0x60(r1)
	  mr        r31, r3
	  addi      r30, r1, 0x8
	  li        r27, 0
	  lwz       r3, 0x20(r3)
	  lwz       r28, 0x10(r3)
	  lwz       r29, 0x28(r3)
	  lwz       r26, 0x90(r28)
	  b         .loc_0xA0

	.loc_0x30:
	  lwz       r3, 0x18(r26)
	  bl        -0x3800
	  cmpwi     r3, 0x1
	  bne-      .loc_0x9C
	  lwz       r3, 0x18(r26)
	  bl        -0x3808
	  cmpwi     r3, 0x1
	  bne-      .loc_0x9C
	  mr        r3, r26
	  bl        -0x2344
	  cmpwi     r3, 0x2
	  bne-      .loc_0x9C
	  mr        r3, r26
	  li        r4, 0
	  bl        -0x3390
	  cmpwi     r3, 0
	  bne-      .loc_0x9C
	  mr        r3, r26
	  li        r4, 0x1
	  bl        -0x33A4
	  cmpwi     r3, 0x2
	  bne-      .loc_0x9C
	  lwz       r3, 0x18(r26)
	  bl        -0x3870
	  stw       r3, 0x0(r30)
	  addi      r30, r30, 0x4
	  addi      r27, r27, 0x1

	.loc_0x9C:
	  lwz       r26, 0x4(r26)

	.loc_0xA0:
	  cmplwi    r26, 0
	  bne+      .loc_0x30
	  cmpwi     r27, 0
	  beq-      .loc_0x270
	  lwz       r26, 0x10(r29)
	  b         .loc_0x268

	.loc_0xB8:
	  lwz       r3, 0x18(r26)
	  bl        -0x3894
	  cmpwi     r3, 0
	  bne-      .loc_0x264
	  mr        r3, r26
	  li        r25, 0
	  bl        -0x2A84
	  mr        r0, r3
	  mr        r3, r26
	  mr        r24, r0
	  bl        -0x2A8C
	  mr        r23, r3
	  mr        r22, r24
	  mr        r3, r26
	  li        r4, 0
	  mr        r21, r23
	  bl        -0x3420
	  mr        r30, r3
	  cmpwi     r30, 0x2
	  beq-      .loc_0x138
	  bge-      .loc_0x11C
	  cmpwi     r30, 0
	  beq-      .loc_0x128
	  bge-      .loc_0x130
	  b         .loc_0x144

	.loc_0x11C:
	  cmpwi     r30, 0x4
	  bge-      .loc_0x144
	  b         .loc_0x140

	.loc_0x128:
	  addi      r21, r21, 0x1
	  b         .loc_0x144

	.loc_0x130:
	  subi      r22, r24, 0x1
	  b         .loc_0x144

	.loc_0x138:
	  subi      r21, r21, 0x1
	  b         .loc_0x144

	.loc_0x140:
	  addi      r22, r24, 0x1

	.loc_0x144:
	  lwz       r20, 0x10(r29)
	  b         .loc_0x190

	.loc_0x14C:
	  cmplw     r26, r20
	  beq-      .loc_0x18C
	  lwz       r3, 0x18(r20)
	  bl        -0x3930
	  cmpwi     r3, 0x2
	  bne-      .loc_0x18C
	  mr        r3, r20
	  bl        -0x2B1C
	  cmpw      r22, r3
	  bne-      .loc_0x18C
	  mr        r3, r20
	  bl        -0x2B24
	  cmpw      r21, r3
	  bne-      .loc_0x18C
	  mr        r25, r20
	  b         .loc_0x198

	.loc_0x18C:
	  lwz       r20, 0x4(r20)

	.loc_0x190:
	  cmplwi    r20, 0
	  bne+      .loc_0x14C

	.loc_0x198:
	  cmplwi    r25, 0
	  beq-      .loc_0x264
	  mr        r3, r31
	  mr        r4, r26
	  bl        0x2200
	  mr        r3, r31
	  mr        r4, r25
	  bl        0x21F4
	  bl        -0x17CF68
	  lis       r4, 0x4330
	  xoris     r0, r3, 0x8000
	  stw       r0, 0x4C(r1)
	  xoris     r0, r27, 0x8000
	  lfd       f2, -0x3BF0(r2)
	  addi      r3, r1, 0x8
	  stw       r4, 0x48(r1)
	  lfs       f0, -0x3BE8(r2)
	  lfd       f1, 0x48(r1)
	  stw       r0, 0x54(r1)
	  fsubs     f1, f1, f2
	  lwz       r21, 0x90(r28)
	  stw       r4, 0x50(r1)
	  fdivs     f1, f1, f0
	  lfd       f0, 0x50(r1)
	  fsubs     f0, f0, f2
	  fmuls     f0, f0, f1
	  fctiwz    f0, f0
	  stfd      f0, 0x58(r1)
	  lwz       r0, 0x5C(r1)
	  rlwinm    r0,r0,2,0,29
	  lwzx      r20, r3, r0
	  b         .loc_0x25C

	.loc_0x218:
	  lwz       r3, 0x18(r21)
	  bl        -0x3A00
	  cmplw     r3, r20
	  bne-      .loc_0x258
	  mr        r3, r21
	  li        r4, 0
	  bl        -0x3558
	  cmpw      r30, r3
	  bne-      .loc_0x258
	  lwz       r4, 0x18(r21)
	  mr        r3, r31
	  mr        r5, r24
	  mr        r6, r23
	  li        r7, 0x1
	  bl        0x1A68
	  b         .loc_0x270

	.loc_0x258:
	  lwz       r21, 0x4(r21)

	.loc_0x25C:
	  cmplwi    r21, 0
	  bne+      .loc_0x218

	.loc_0x264:
	  lwz       r26, 0x4(r26)

	.loc_0x268:
	  cmplwi    r26, 0
	  bne+      .loc_0xB8

	.loc_0x270:
	  lmw       r20, 0x60(r1)
	  lwz       r0, 0x94(r1)
	  mtlr      r0
	  addi      r1, r1, 0x90
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802465D4
 * Size:	000360
 */
void Game::Cave::RandMapUnit::changeTwoToOneMapUnit(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0xE0(r1)
	  mflr      r0
	  stw       r0, 0xE4(r1)
	  stmw      r19, 0xAC(r1)
	  mr        r25, r3
	  addi      r30, r1, 0x48
	  li        r29, 0
	  mr        r21, r30
	  li        r28, 0
	  lwz       r3, 0x20(r3)
	  lwz       r31, 0x10(r3)
	  lwz       r24, 0x28(r3)
	  lwz       r20, 0x90(r31)
	  b         .loc_0xA8

	.loc_0x38:
	  lwz       r3, 0x18(r20)
	  bl        -0x3A8C
	  cmpwi     r3, 0x1
	  bne-      .loc_0xA4
	  lwz       r3, 0x18(r20)
	  bl        -0x3A94
	  cmpwi     r3, 0x1
	  bne-      .loc_0xA4
	  mr        r3, r20
	  bl        -0x25D0
	  cmpwi     r3, 0x2
	  bne-      .loc_0xA4
	  mr        r3, r20
	  li        r4, 0
	  bl        -0x361C
	  cmpwi     r3, 0
	  bne-      .loc_0xA4
	  mr        r3, r20
	  li        r4, 0x1
	  bl        -0x3630
	  cmpwi     r3, 0x2
	  bne-      .loc_0xA4
	  lwz       r3, 0x18(r20)
	  bl        -0x3AFC
	  stw       r3, 0x0(r21)
	  addi      r21, r21, 0x4
	  addi      r29, r29, 0x1

	.loc_0xA4:
	  lwz       r20, 0x4(r20)

	.loc_0xA8:
	  cmplwi    r20, 0
	  bne+      .loc_0x38
	  lwz       r20, 0x90(r31)
	  addi      r21, r1, 0x8
	  b         .loc_0x12C

	.loc_0xBC:
	  lwz       r3, 0x18(r20)
	  bl        -0x3B10
	  cmpwi     r3, 0x1
	  bne-      .loc_0x128
	  lwz       r3, 0x18(r20)
	  bl        -0x3B18
	  cmpwi     r3, 0x2
	  bne-      .loc_0x128
	  mr        r3, r20
	  bl        -0x2654
	  cmpwi     r3, 0x2
	  bne-      .loc_0x128
	  mr        r3, r20
	  li        r4, 0
	  bl        -0x36A0
	  cmpwi     r3, 0
	  bne-      .loc_0x128
	  mr        r3, r20
	  li        r4, 0x1
	  bl        -0x36B4
	  cmpwi     r3, 0x2
	  bne-      .loc_0x128
	  lwz       r3, 0x18(r20)
	  bl        -0x3B80
	  stw       r3, 0x0(r21)
	  addi      r21, r21, 0x4
	  addi      r28, r28, 0x1

	.loc_0x128:
	  lwz       r20, 0x4(r20)

	.loc_0x12C:
	  cmplwi    r20, 0
	  bne+      .loc_0xBC
	  cmpwi     r29, 0
	  beq-      .loc_0x34C
	  cmpwi     r28, 0
	  beq-      .loc_0x34C
	  lwz       r3, 0x10(r24)
	  b         .loc_0x344

	.loc_0x14C:
	  lwz       r23, 0x4(r3)
	  mr        r27, r3
	  mr        r21, r30
	  li        r20, 0
	  li        r22, 0
	  b         .loc_0x184

	.loc_0x164:
	  lwz       r3, 0x18(r27)
	  bl        -0x3BD0
	  lwz       r0, 0x0(r21)
	  cmplw     r3, r0
	  bne-      .loc_0x17C
	  li        r20, 0x1

	.loc_0x17C:
	  addi      r21, r21, 0x4
	  addi      r22, r22, 0x1

	.loc_0x184:
	  cmpw      r22, r29
	  blt+      .loc_0x164
	  rlwinm.   r0,r20,0,24,31
	  li        r26, 0
	  beq-      .loc_0x20C
	  li        r21, 0
	  li        r22, 0

	.loc_0x1A0:
	  cmplwi    r26, 0
	  bne-      .loc_0x1FC
	  lwz       r3, 0x28(r27)
	  lwzx      r0, r3, r22
	  cmplwi    r0, 0
	  beq-      .loc_0x1FC
	  mr        r20, r30
	  li        r19, 0
	  b         .loc_0x1F4

	.loc_0x1C4:
	  lwz       r0, 0x28(r27)
	  lwzx      r3, r22, r0
	  lwz       r3, 0x18(r3)
	  bl        -0x3C38
	  lwz       r0, 0x0(r20)
	  cmplw     r3, r0
	  bne-      .loc_0x1EC
	  lwz       r3, 0x28(r27)
	  lwzx      r26, r3, r22
	  b         .loc_0x1FC

	.loc_0x1EC:
	  addi      r20, r20, 0x4
	  addi      r19, r19, 0x1

	.loc_0x1F4:
	  cmpw      r19, r29
	  blt+      .loc_0x1C4

	.loc_0x1FC:
	  addi      r21, r21, 0x1
	  addi      r22, r22, 0xC
	  cmpwi     r21, 0x2
	  blt+      .loc_0x1A0

	.loc_0x20C:
	  cmplwi    r26, 0
	  beq-      .loc_0x340
	  mr        r3, r26
	  bl        -0x2E50
	  mr        r23, r3
	  mr        r3, r27
	  bl        -0x2E5C
	  cmpw      r3, r23
	  bge-      .loc_0x234
	  mr        r23, r3

	.loc_0x234:
	  mr        r3, r26
	  bl        -0x2E68
	  mr        r22, r3
	  mr        r3, r27
	  bl        -0x2E74
	  cmpw      r3, r22
	  bge-      .loc_0x254
	  mr        r22, r3

	.loc_0x254:
	  mr        r3, r26
	  bl        -0x2E90
	  mr        r21, r3
	  mr        r3, r27
	  bl        -0x2E9C
	  sub       r4, r21, r3
	  sub       r0, r3, r21
	  or        r0, r4, r0
	  mr        r3, r25
	  mr        r4, r27
	  rlwinm    r19,r0,1,31,31
	  bl        0x1EA4
	  mr        r3, r25
	  mr        r4, r26
	  bl        0x1E98
	  bl        -0x17D2C4
	  lis       r4, 0x4330
	  xoris     r0, r3, 0x8000
	  stw       r0, 0x8C(r1)
	  xoris     r0, r28, 0x8000
	  lfd       f2, -0x3BF0(r2)
	  addi      r3, r1, 0x8
	  stw       r4, 0x88(r1)
	  lfs       f0, -0x3BE8(r2)
	  lfd       f1, 0x88(r1)
	  stw       r0, 0x94(r1)
	  fsubs     f1, f1, f2
	  lwz       r21, 0x90(r31)
	  stw       r4, 0x90(r1)
	  fdivs     f1, f1, f0
	  lfd       f0, 0x90(r1)
	  fsubs     f0, f0, f2
	  fmuls     f0, f0, f1
	  fctiwz    f0, f0
	  stfd      f0, 0x98(r1)
	  lwz       r0, 0x9C(r1)
	  rlwinm    r0,r0,2,0,29
	  lwzx      r20, r3, r0
	  b         .loc_0x334

	.loc_0x2F0:
	  lwz       r3, 0x18(r21)
	  bl        -0x3D5C
	  cmplw     r3, r20
	  bne-      .loc_0x330
	  mr        r3, r21
	  li        r4, 0
	  bl        -0x38B4
	  cmpw      r19, r3
	  bne-      .loc_0x330
	  lwz       r4, 0x18(r21)
	  mr        r3, r25
	  mr        r5, r23
	  mr        r6, r22
	  li        r7, 0x1
	  bl        0x170C
	  b         .loc_0x33C

	.loc_0x330:
	  lwz       r21, 0x4(r21)

	.loc_0x334:
	  cmplwi    r21, 0
	  bne+      .loc_0x2F0

	.loc_0x33C:
	  lwz       r23, 0x10(r24)

	.loc_0x340:
	  mr        r3, r23

	.loc_0x344:
	  cmplwi    r3, 0
	  bne+      .loc_0x14C

	.loc_0x34C:
	  lmw       r19, 0xAC(r1)
	  lwz       r0, 0xE4(r1)
	  mtlr      r0
	  addi      r1, r1, 0xE0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80246934
 * Size:	000144
 */
void Game::Cave::RandMapUnit::setEditorMapUnit(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stmw      r24, 0x20(r1)
	  mr        r24, r3
	  lwz       r3, 0x20(r3)
	  lwz       r30, 0x30(r3)
	  lwz       r31, 0xC(r3)
	  lwz       r0, 0x1C(r30)
	  cmpwi     r0, 0
	  bge-      .loc_0x7C
	  lwz       r25, 0x4(r30)
	  bl        -0x17D3C4
	  lis       r4, 0x4330
	  xoris     r0, r3, 0x8000
	  stw       r0, 0xC(r1)
	  xoris     r0, r25, 0x8000
	  lfd       f2, -0x3BF0(r2)
	  stw       r4, 0x8(r1)
	  lfs       f0, -0x3BE8(r2)
	  lfd       f1, 0x8(r1)
	  stw       r0, 0x14(r1)
	  fsubs     f1, f1, f2
	  stw       r4, 0x10(r1)
	  fdivs     f1, f1, f0
	  lfd       f0, 0x10(r1)
	  fsubs     f0, f0, f2
	  fmuls     f0, f0, f1
	  fctiwz    f0, f0
	  stfd      f0, 0x18(r1)
	  lwz       r0, 0x1C(r1)

	.loc_0x7C:
	  lwz       r3, 0x8(r30)
	  rlwinm    r28,r0,2,0,29
	  li        r26, 0
	  li        r29, 0
	  lwzx      r3, r3, r28
	  subi      r27, r3, 0x1
	  b         .loc_0x120

	.loc_0x98:
	  lwz       r25, 0x10(r31)
	  b         .loc_0x110

	.loc_0xA0:
	  mr        r3, r25
	  bl        -0x2F20
	  lwz       r0, 0x10(r30)
	  lwzx      r0, r28, r0
	  lwzx      r0, r29, r0
	  cmpw      r0, r3
	  bne-      .loc_0x10C
	  mr        r3, r25
	  bl        -0x3030
	  lwz       r0, 0xC(r30)
	  lwzx      r0, r28, r0
	  lwzx      r4, r29, r0
	  bl        -0x17C344
	  cmpwi     r3, 0
	  bne-      .loc_0x10C
	  lwz       r3, 0x14(r30)
	  sub       r0, r27, r26
	  lwz       r4, 0x18(r30)
	  cntlzw    r0, r0
	  lwzx      r5, r28, r3
	  mr        r3, r24
	  lwzx      r6, r28, r4
	  rlwinm    r7,r0,27,5,31
	  lwz       r4, 0x18(r25)
	  lwzx      r5, r29, r5
	  lwzx      r6, r29, r6
	  bl        0x15CC

	.loc_0x10C:
	  lwz       r25, 0x4(r25)

	.loc_0x110:
	  cmplwi    r25, 0
	  bne+      .loc_0xA0
	  addi      r29, r29, 0x4
	  addi      r26, r26, 0x1

	.loc_0x120:
	  lwz       r0, 0x8(r30)
	  lwzx      r0, r28, r0
	  cmpw      r26, r0
	  blt+      .loc_0x98
	  lmw       r24, 0x20(r1)
	  lwz       r0, 0x44(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80246A78
 * Size:	00006C
 */
void Game::Cave::RandMapUnit::setFirstMapUnit(void)
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
	  bl        .loc_0x6C
	  mr.       r30, r3
	  beq-      .loc_0x50
	  bl        -0x30FC
	  mr        r31, r3
	  mr        r3, r30
	  bl        -0x3110
	  lwz       r4, 0x18(r30)
	  mr        r5, r3
	  mr        r3, r29
	  mr        r6, r31
	  li        r7, 0x1
	  bl        0x1544

	.loc_0x50:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr

	.loc_0x6C:
	*/
}

/*
 * --INFO--
 * Address:	80246AE4
 * Size:	00008C
 */
void Game::Cave::RandMapUnit::getFirstMapUnit(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  lwz       r3, 0x20(r3)
	  lwz       r3, 0x10(r3)
	  lwz       r31, 0x50(r3)
	  b         .loc_0x6C

	.loc_0x20:
	  lwz       r3, 0x18(r31)
	  bl        -0x3F48
	  cmplwi    r3, 0
	  beq-      .loc_0x68
	  lwz       r3, 0x10(r3)
	  b         .loc_0x60

	.loc_0x38:
	  lwz       r0, 0x18(r3)
	  cmpwi     r0, 0x7
	  bne-      .loc_0x5C
	  mr        r3, r31
	  li        r4, 0
	  li        r5, 0
	  bl        -0x3B18
	  mr        r3, r31
	  b         .loc_0x78

	.loc_0x5C:
	  lwz       r3, 0x4(r3)

	.loc_0x60:
	  cmplwi    r3, 0
	  bne+      .loc_0x38

	.loc_0x68:
	  lwz       r31, 0x4(r31)

	.loc_0x6C:
	  cmplwi    r31, 0
	  bne+      .loc_0x20
	  li        r3, 0

	.loc_0x78:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80246B70
 * Size:	000188
 */
void Game::Cave::RandMapUnit::getNormalRandMapUnit(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0xA0(r1)
	  mflr      r0
	  stw       r0, 0xA4(r1)
	  stmw      r23, 0x7C(r1)
	  mr        r31, r3
	  bl        0x13F8
	  mr        r30, r3
	  bl        -0x17D5EC
	  xoris     r0, r3, 0x8000
	  lis       r8, 0x4330
	  stw       r0, 0x64(r1)
	  xoris     r0, r30, 0x8000
	  lwz       r7, 0x20(r31)
	  mr        r3, r31
	  stw       r8, 0x60(r1)
	  addi      r4, r1, 0x10
	  lfd       f2, -0x3BF0(r2)
	  addi      r5, r1, 0xC
	  lfd       f1, 0x60(r1)
	  addi      r6, r1, 0x8
	  lfs       f0, -0x3BE8(r2)
	  fsubs     f1, f1, f2
	  stw       r0, 0x6C(r1)
	  lwz       r30, 0x10(r7)
	  stw       r8, 0x68(r1)
	  fdivs     f1, f1, f0
	  lfd       f0, 0x68(r1)
	  fsubs     f0, f0, f2
	  fmuls     f0, f0, f1
	  fctiwz    f0, f0
	  stfd      f0, 0x70(r1)
	  lwz       r7, 0x74(r1)
	  bl        0x850
	  lwz       r4, 0x10(r1)
	  mr        r28, r3
	  bl        -0x3778
	  cmplwi    r28, 0
	  mr        r27, r3
	  beq-      .loc_0x170
	  cmplwi    r27, 0
	  beq-      .loc_0x170
	  mr        r3, r31
	  mr        r4, r28
	  addi      r5, r1, 0x14
	  bl        .loc_0x188
	  li        r26, 0
	  addi      r28, r1, 0x14

	.loc_0xBC:
	  lwz       r4, 0x0(r28)
	  mr        r3, r31
	  bl        0x18C
	  lwz       r0, 0x0(r28)
	  rlwinm    r3,r0,6,0,25
	  addi      r0, r3, 0x10
	  lwzx      r25, r30, r0
	  b         .loc_0x158

	.loc_0xDC:
	  mr        r3, r25
	  bl        -0x2BF0
	  mr        r0, r3
	  mr        r3, r31
	  mr        r24, r0
	  addi      r4, r1, 0x20
	  mr        r5, r24
	  bl        0x46C
	  addi      r29, r1, 0x20
	  li        r23, 0
	  b         .loc_0x14C

	.loc_0x108:
	  lwz       r5, 0xC(r1)
	  mr        r3, r25
	  lwz       r6, 0x8(r1)
	  mr        r4, r27
	  lwz       r7, 0x0(r29)
	  bl        -0x3B40
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x144
	  lwz       r3, 0x28(r31)
	  mr        r4, r25
	  bl        -0x1634
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x144
	  mr        r3, r25
	  b         .loc_0x174

	.loc_0x144:
	  addi      r29, r29, 0x4
	  addi      r23, r23, 0x1

	.loc_0x14C:
	  cmpw      r23, r24
	  blt+      .loc_0x108
	  lwz       r25, 0x4(r25)

	.loc_0x158:
	  cmplwi    r25, 0
	  bne+      .loc_0xDC
	  addi      r26, r26, 0x1
	  addi      r28, r28, 0x4
	  cmpwi     r26, 0x3
	  blt+      .loc_0xBC

	.loc_0x170:
	  li        r3, 0

	.loc_0x174:
	  lmw       r23, 0x7C(r1)
	  lwz       r0, 0xA4(r1)
	  mtlr      r0
	  addi      r1, r1, 0xA0
	  blr

	.loc_0x188:
	*/
}

/*
 * --INFO--
 * Address:	80246CF8
 * Size:	0000C8
 */
void Game::Cave::RandMapUnit::setUnitKindOrder((Game::Cave::MapNode*, int*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stfd      f31, 0x20(r1)
	  psq_st    f31,0x28(r1),0,0
	  stw       r31, 0x1C(r1)
	  lbz       r0, 0xC(r3)
	  mr        r31, r5
	  lfs       f31, 0x8(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x30
	  lfs       f31, -0x3C00(r2)

	.loc_0x30:
	  lwz       r3, 0x18(r4)
	  bl        -0x41B4
	  cmpwi     r3, 0x1
	  bne-      .loc_0x48
	  lfs       f0, -0x3BE4(r2)
	  fmuls     f31, f31, f0

	.loc_0x48:
	  li        r0, 0
	  stw       r0, 0x8(r31)
	  bl        -0x17D7A8
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0xC(r1)
	  lfd       f3, -0x3BF0(r2)
	  stw       r0, 0x8(r1)
	  lfs       f1, -0x3BF8(r2)
	  lfd       f2, 0x8(r1)
	  lfs       f0, -0x3BE8(r2)
	  fsubs     f2, f2, f3
	  fmuls     f1, f1, f2
	  fdivs     f0, f1, f0
	  fcmpo     cr0, f0, f31
	  bge-      .loc_0x9C
	  li        r3, 0x2
	  li        r0, 0x1
	  stw       r3, 0x0(r31)
	  stw       r0, 0x4(r31)
	  b         .loc_0xAC

	.loc_0x9C:
	  li        r3, 0x1
	  li        r0, 0x2
	  stw       r3, 0x0(r31)
	  stw       r0, 0x4(r31)

	.loc_0xAC:
	  psq_l     f31,0x28(r1),0,0
	  lwz       r0, 0x34(r1)
	  lfd       f31, 0x20(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80246DC0
 * Size:	000314
 */
void Game::Cave::RandMapUnit::setUnitDoorSorting((int))
{
	/*
	.loc_0x0:
	  stwu      r1, -0xA0(r1)
	  mflr      r0
	  stw       r0, 0xA4(r1)
	  stfd      f31, 0x90(r1)
	  psq_st    f31,0x98(r1),0,0
	  stfd      f30, 0x80(r1)
	  psq_st    f30,0x88(r1),0,0
	  stmw      r25, 0x64(r1)
	  cmpwi     r4, 0x2
	  mr        r30, r3
	  bne-      .loc_0x2F0
	  lwz       r5, 0x20(r30)
	  rlwinm    r0,r4,6,0,25
	  lwz       r4, 0x10(r5)
	  add       r31, r4, r0
	  bl        0x1180
	  cmpwi     r3, 0x4
	  bge-      .loc_0x118
	  lwz       r3, 0x0(r30)
	  li        r10, 0
	  cmpwi     r3, 0
	  ble-      .loc_0x250
	  cmpwi     r3, 0x8
	  subi      r3, r3, 0x8
	  ble-      .loc_0xE8
	  addi      r0, r3, 0x7
	  addi      r9, r1, 0x8
	  rlwinm    r0,r0,29,3,31
	  mtctr     r0
	  cmpwi     r3, 0
	  ble-      .loc_0xE8

	.loc_0x7C:
	  lwz       r8, 0x0(r30)
	  addi      r0, r10, 0x1
	  addi      r7, r10, 0x2
	  addi      r6, r10, 0x3
	  sub       r3, r8, r10
	  addi      r5, r10, 0x4
	  stw       r3, 0x0(r9)
	  sub       r0, r8, r0
	  addi      r4, r10, 0x5
	  addi      r3, r10, 0x6
	  stw       r0, 0x4(r9)
	  addi      r0, r10, 0x7
	  sub       r7, r8, r7
	  sub       r6, r8, r6
	  stw       r7, 0x8(r9)
	  sub       r5, r8, r5
	  sub       r4, r8, r4
	  sub       r3, r8, r3
	  stw       r6, 0xC(r9)
	  sub       r0, r8, r0
	  addi      r10, r10, 0x8
	  stw       r5, 0x10(r9)
	  stw       r4, 0x14(r9)
	  stw       r3, 0x18(r9)
	  stw       r0, 0x1C(r9)
	  addi      r9, r9, 0x20
	  bdnz+     .loc_0x7C

	.loc_0xE8:
	  rlwinm    r0,r10,2,0,29
	  addi      r3, r1, 0x8
	  add       r3, r3, r0
	  b         .loc_0x108

	.loc_0xF8:
	  sub       r0, r0, r10
	  addi      r10, r10, 0x1
	  stw       r0, 0x0(r3)
	  addi      r3, r3, 0x4

	.loc_0x108:
	  lwz       r0, 0x0(r30)
	  cmpw      r10, r0
	  blt+      .loc_0xF8
	  b         .loc_0x250

	.loc_0x118:
	  lwz       r4, 0x0(r30)
	  li        r10, 0
	  cmpwi     r4, 0
	  ble-      .loc_0x1C4
	  cmpwi     r4, 0x8
	  subi      r4, r4, 0x8
	  ble-      .loc_0x198
	  addi      r0, r4, 0x7
	  addi      r9, r1, 0x8
	  rlwinm    r0,r0,29,3,31
	  mtctr     r0
	  cmpwi     r4, 0
	  ble-      .loc_0x198

	.loc_0x14C:
	  addi      r4, r10, 0x1
	  addi      r0, r10, 0x2
	  stw       r4, 0x0(r9)
	  addi      r8, r10, 0x3
	  addi      r7, r10, 0x4
	  addi      r6, r10, 0x5
	  stw       r0, 0x4(r9)
	  addi      r5, r10, 0x6
	  addi      r4, r10, 0x7
	  addi      r0, r10, 0x8
	  stw       r8, 0x8(r9)
	  addi      r10, r10, 0x8
	  stw       r7, 0xC(r9)
	  stw       r6, 0x10(r9)
	  stw       r5, 0x14(r9)
	  stw       r4, 0x18(r9)
	  stw       r0, 0x1C(r9)
	  addi      r9, r9, 0x20
	  bdnz+     .loc_0x14C

	.loc_0x198:
	  rlwinm    r0,r10,2,0,29
	  addi      r4, r1, 0x8
	  add       r4, r4, r0
	  b         .loc_0x1B8

	.loc_0x1A8:
	  addi      r0, r10, 0x1
	  addi      r10, r10, 0x1
	  stw       r0, 0x0(r4)
	  addi      r4, r4, 0x4

	.loc_0x1B8:
	  lwz       r0, 0x0(r30)
	  cmpw      r10, r0
	  blt+      .loc_0x1A8

	.loc_0x1C4:
	  cmpwi     r3, 0xA
	  bge-      .loc_0x250
	  addi      r28, r1, 0x8
	  lfd       f30, -0x3BF0(r2)
	  lfs       f31, -0x3BE8(r2)
	  mr        r26, r28
	  li        r25, 0
	  lis       r29, 0x4330
	  b         .loc_0x244

	.loc_0x1E8:
	  bl        -0x17DA08
	  xoris     r3, r3, 0x8000
	  xoris     r0, r27, 0x8000
	  stw       r3, 0x4C(r1)
	  addi      r25, r25, 0x1
	  lwz       r4, 0x0(r28)
	  stw       r29, 0x48(r1)
	  lfd       f0, 0x48(r1)
	  stw       r0, 0x54(r1)
	  fsubs     f0, f0, f30
	  stw       r29, 0x50(r1)
	  fdivs     f1, f0, f31
	  lfd       f0, 0x50(r1)
	  fsubs     f0, f0, f30
	  fmuls     f0, f0, f1
	  fctiwz    f0, f0
	  stfd      f0, 0x58(r1)
	  lwz       r0, 0x5C(r1)
	  rlwinm    r3,r0,2,0,29
	  lwzx      r0, r26, r3
	  stw       r0, 0x0(r28)
	  addi      r28, r28, 0x4
	  stwx      r4, r26, r3

	.loc_0x244:
	  lwz       r27, 0x0(r30)
	  cmpw      r25, r27
	  blt+      .loc_0x1E8

	.loc_0x250:
	  addi      r28, r1, 0x8
	  li        r25, 0
	  b         .loc_0x2E4

	.loc_0x25C:
	  lwz       r27, 0x10(r31)
	  li        r26, 0
	  b         .loc_0x284

	.loc_0x268:
	  mr        r3, r27
	  bl        -0x2FCC
	  lwz       r0, 0x0(r28)
	  cmpw      r0, r3
	  bne-      .loc_0x280
	  addi      r26, r26, 0x1

	.loc_0x280:
	  lwz       r27, 0x4(r27)

	.loc_0x284:
	  cmplwi    r27, 0
	  bne+      .loc_0x268
	  li        r27, 0
	  b         .loc_0x2D4

	.loc_0x294:
	  lwz       r29, 0x10(r31)
	  b         .loc_0x2C8

	.loc_0x29C:
	  mr        r3, r29
	  bl        -0x3000
	  lwz       r0, 0x0(r28)
	  cmpw      r0, r3
	  bne-      .loc_0x2C4
	  mr        r3, r29
	  bl        0x1CA55C
	  mr        r3, r31
	  mr        r4, r29
	  bl        0x1CA388

	.loc_0x2C4:
	  lwz       r29, 0x4(r29)

	.loc_0x2C8:
	  cmplwi    r29, 0
	  bne+      .loc_0x29C
	  addi      r27, r27, 0x1

	.loc_0x2D4:
	  cmpw      r27, r26
	  blt+      .loc_0x294
	  addi      r28, r28, 0x4
	  addi      r25, r25, 0x1

	.loc_0x2E4:
	  lwz       r0, 0x0(r30)
	  cmpw      r25, r0
	  blt+      .loc_0x25C

	.loc_0x2F0:
	  psq_l     f31,0x98(r1),0,0
	  lfd       f31, 0x90(r1)
	  psq_l     f30,0x88(r1),0,0
	  lfd       f30, 0x80(r1)
	  lmw       r25, 0x64(r1)
	  lwz       r0, 0xA4(r1)
	  mtlr      r0
	  addi      r1, r1, 0xA0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802470D4
 * Size:	000164
 */
void Game::Cave::RandMapUnit::setRandomDoorIndex((int*, int))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x60(r1)
	  mflr      r0
	  stw       r0, 0x64(r1)
	  stfd      f31, 0x50(r1)
	  psq_st    f31,0x58(r1),0,0
	  stfd      f30, 0x40(r1)
	  psq_st    f30,0x48(r1),0,0
	  stmw      r26, 0x28(r1)
	  mr.       r31, r5
	  mr        r30, r4
	  li        r8, 0
	  ble-      .loc_0xC4
	  cmpwi     r31, 0x8
	  subi      r3, r31, 0x8
	  ble-      .loc_0x9C
	  addi      r0, r3, 0x7
	  mr        r7, r30
	  rlwinm    r0,r0,29,3,31
	  mtctr     r0
	  cmpwi     r3, 0
	  ble-      .loc_0x9C

	.loc_0x54:
	  stw       r8, 0x0(r7)
	  addi      r3, r8, 0x1
	  addi      r0, r8, 0x2
	  addi      r6, r8, 0x3
	  stw       r3, 0x4(r7)
	  addi      r5, r8, 0x4
	  addi      r4, r8, 0x5
	  addi      r3, r8, 0x6
	  stw       r0, 0x8(r7)
	  addi      r0, r8, 0x7
	  addi      r8, r8, 0x8
	  stw       r6, 0xC(r7)
	  stw       r5, 0x10(r7)
	  stw       r4, 0x14(r7)
	  stw       r3, 0x18(r7)
	  stw       r0, 0x1C(r7)
	  addi      r7, r7, 0x20
	  bdnz+     .loc_0x54

	.loc_0x9C:
	  rlwinm    r3,r8,2,0,29
	  sub       r0, r31, r8
	  add       r3, r30, r3
	  mtctr     r0
	  cmpw      r8, r31
	  bge-      .loc_0xC4

	.loc_0xB4:
	  stw       r8, 0x0(r3)
	  addi      r3, r3, 0x4
	  addi      r8, r8, 0x1
	  bdnz+     .loc_0xB4

	.loc_0xC4:
	  lfd       f30, -0x3BF0(r2)
	  mr        r27, r30
	  lfs       f31, -0x3BE8(r2)
	  xoris     r29, r31, 0x8000
	  li        r26, 0
	  lis       r28, 0x4330
	  b         .loc_0x138

	.loc_0xE0:
	  bl        -0x17DC14
	  xoris     r0, r3, 0x8000
	  stw       r28, 0x8(r1)
	  lwz       r4, 0x0(r27)
	  addi      r26, r26, 0x1
	  stw       r0, 0xC(r1)
	  lfd       f0, 0x8(r1)
	  stw       r29, 0x14(r1)
	  fsubs     f0, f0, f30
	  stw       r28, 0x10(r1)
	  fdivs     f1, f0, f31
	  lfd       f0, 0x10(r1)
	  fsubs     f0, f0, f30
	  fmuls     f0, f0, f1
	  fctiwz    f0, f0
	  stfd      f0, 0x18(r1)
	  lwz       r0, 0x1C(r1)
	  rlwinm    r3,r0,2,0,29
	  lwzx      r0, r30, r3
	  stw       r0, 0x0(r27)
	  addi      r27, r27, 0x4
	  stwx      r4, r30, r3

	.loc_0x138:
	  cmpw      r26, r31
	  blt+      .loc_0xE0
	  psq_l     f31,0x58(r1),0,0
	  lfd       f31, 0x50(r1)
	  psq_l     f30,0x48(r1),0,0
	  lfd       f30, 0x40(r1)
	  lmw       r26, 0x28(r1)
	  lwz       r0, 0x64(r1)
	  mtlr      r0
	  addi      r1, r1, 0x60
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80247238
 * Size:	000208
 */
void Game::Cave::RandMapUnit::getLoopRandMapUnit(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x850(r1)
	  mflr      r0
	  stw       r0, 0x854(r1)
	  stmw      r21, 0x824(r1)
	  mr        r25, r3
	  bl        0xD30
	  mr        r30, r3
	  mr        r3, r25
	  addi      r4, r1, 0x20
	  bl        0x4A8
	  mr        r31, r3
	  li        r28, 0
	  b         .loc_0x1E8

	.loc_0x34:
	  mr        r3, r25
	  mr        r7, r28
	  addi      r4, r1, 0x14
	  addi      r5, r1, 0x10
	  addi      r6, r1, 0xC
	  bl        .loc_0x208
	  mr        r22, r3
	  lwz       r5, 0x14(r1)
	  mr        r3, r25
	  mr        r4, r22
	  bl        0x1634
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x1E4
	  lwz       r4, 0x14(r1)
	  mr        r3, r22
	  bl        -0x3E24
	  lwz       r5, 0x14(r1)
	  mr        r27, r3
	  lwz       r6, 0x10(r1)
	  mr        r3, r25
	  lwz       r7, 0xC(r1)
	  mr        r4, r22
	  addi      r8, r1, 0x8
	  bl        0x240
	  mr.       r23, r3
	  beq-      .loc_0x1E4
	  lwz       r4, 0x14(r1)
	  mr        r3, r22
	  bl        -0x42B4
	  lwz       r5, 0x14(r1)
	  mr        r24, r3
	  lwz       r7, 0x8(r1)
	  mr        r3, r25
	  mr        r4, r22
	  mr        r6, r23
	  bl        0x53C
	  addi      r4, r24, 0x2
	  stw       r3, 0x18(r1)
	  rlwinm    r0,r4,30,0,1
	  addi      r29, r1, 0x18
	  rlwinm    r3,r4,1,31,31
	  stw       r24, 0x1C(r1)
	  sub       r0, r0, r3
	  li        r26, 0
	  rlwinm    r0,r0,2,0,31
	  add       r22, r0, r3

	.loc_0xEC:
	  addi      r23, r1, 0x20
	  li        r21, 0
	  b         .loc_0x1CC

	.loc_0xF8:
	  lwz       r3, 0x0(r23)
	  li        r4, 0
	  bl        -0x4310
	  mr        r24, r3
	  lwz       r3, 0x0(r23)
	  li        r4, 0x1
	  bl        -0x4320
	  cmpw      r24, r22
	  bne-      .loc_0x16C
	  lwz       r0, 0x0(r29)
	  cmpw      r3, r0
	  bne-      .loc_0x16C
	  lwz       r3, 0x0(r23)
	  mr        r4, r27
	  lwz       r5, 0x10(r1)
	  li        r7, 0
	  lwz       r6, 0xC(r1)
	  bl        -0x4228
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x1C4
	  lwz       r3, 0x28(r25)
	  lwz       r4, 0x0(r23)
	  bl        -0x1D1C
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x1C4
	  rlwinm    r0,r21,2,0,29
	  addi      r3, r1, 0x20
	  lwzx      r3, r3, r0
	  b         .loc_0x1F4

	.loc_0x16C:
	  cmpw      r3, r22
	  bne-      .loc_0x1C4
	  lwz       r0, 0x0(r29)
	  cmpw      r24, r0
	  bne-      .loc_0x1C4
	  lwz       r3, 0x0(r23)
	  mr        r4, r27
	  lwz       r5, 0x10(r1)
	  li        r7, 0x1
	  lwz       r6, 0xC(r1)
	  bl        -0x4280
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x1C4
	  lwz       r3, 0x28(r25)
	  lwz       r4, 0x0(r23)
	  bl        -0x1D74
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x1C4
	  rlwinm    r0,r21,2,0,29
	  addi      r3, r1, 0x20
	  lwzx      r3, r3, r0
	  b         .loc_0x1F4

	.loc_0x1C4:
	  addi      r23, r23, 0x4
	  addi      r21, r21, 0x1

	.loc_0x1CC:
	  cmpw      r21, r31
	  blt+      .loc_0xF8
	  addi      r26, r26, 0x1
	  addi      r29, r29, 0x4
	  cmpwi     r26, 0x2
	  blt+      .loc_0xEC

	.loc_0x1E4:
	  addi      r28, r28, 0x1

	.loc_0x1E8:
	  cmpw      r28, r30
	  blt+      .loc_0x34
	  li        r3, 0

	.loc_0x1F4:
	  lmw       r21, 0x824(r1)
	  lwz       r0, 0x854(r1)
	  mtlr      r0
	  addi      r1, r1, 0x850
	  blr

	.loc_0x208:
	*/
}

/*
 * --INFO--
 * Address:	80247440
 * Size:	0000C8
 */
void Game::Cave::RandMapUnit::getCalcDoorIndex((int&, int&, int&, int))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stmw      r26, 0x8(r1)
	  mr        r26, r4
	  mr        r27, r5
	  mr        r28, r6
	  mr        r29, r7
	  li        r31, 0
	  lwz       r3, 0x20(r3)
	  lwz       r3, 0x28(r3)
	  lwz       r30, 0x10(r3)
	  b         .loc_0xA8

	.loc_0x34:
	  li        r0, 0
	  stw       r0, 0x0(r26)
	  b         .loc_0x90

	.loc_0x40:
	  mr        r3, r30
	  bl        -0x416C
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x84
	  cmpw      r31, r29
	  bne-      .loc_0x80
	  lwz       r4, 0x0(r26)
	  mr        r3, r30
	  bl        -0x401C
	  lwz       r4, 0x0(r26)
	  mr        r3, r30
	  mr        r5, r27
	  mr        r6, r28
	  bl        -0x4468
	  mr        r3, r30
	  b         .loc_0xB4

	.loc_0x80:
	  addi      r31, r31, 0x1

	.loc_0x84:
	  lwz       r3, 0x0(r26)
	  addi      r0, r3, 0x1
	  stw       r0, 0x0(r26)

	.loc_0x90:
	  mr        r3, r30
	  bl        -0x3474
	  lwz       r4, 0x0(r26)
	  cmpw      r4, r3
	  blt+      .loc_0x40
	  lwz       r30, 0x4(r30)

	.loc_0xA8:
	  cmplwi    r30, 0
	  bne+      .loc_0x34
	  li        r3, 0

	.loc_0xB4:
	  lmw       r26, 0x8(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80247508
 * Size:	00012C
 */
void Game::Cave::RandMapUnit::getLinkDoorNodeFirst((Game::Cave::MapNode*, int,
                                                    int, int, int&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stmw      r22, 0x18(r1)
	  mr        r23, r4
	  mr        r22, r3
	  mr        r24, r6
	  mr        r25, r7
	  mr        r26, r8
	  mr        r3, r23
	  mr        r4, r5
	  li        r31, 0xFF
	  bl        -0x4510
	  lwz       r4, 0x20(r22)
	  mr        r30, r3
	  li        r29, 0
	  lwz       r3, 0x28(r4)
	  lwz       r28, 0x10(r3)
	  b         .loc_0x10C

	.loc_0x4C:
	  cmplw     r23, r28
	  beq-      .loc_0x108
	  li        r27, 0
	  b         .loc_0xF8

	.loc_0x5C:
	  mr        r3, r28
	  mr        r4, r27
	  bl        -0x4254
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0xF4
	  mr        r3, r28
	  mr        r4, r27
	  bl        -0x40FC
	  mr        r3, r28
	  mr        r4, r27
	  addi      r5, r1, 0xC
	  addi      r6, r1, 0x8
	  bl        -0x4548
	  lwz       r7, 0xC(r1)
	  mr        r3, r22
	  lwz       r8, 0x8(r1)
	  mr        r4, r30
	  mr        r5, r24
	  mr        r6, r25
	  bl        .loc_0x12C
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xF4
	  lwz       r3, 0x8(r1)
	  lwz       r0, 0xC(r1)
	  sub       r4, r25, r3
	  srawi     r5, r4, 0x1F
	  sub       r0, r24, r0
	  srawi     r3, r0, 0x1F
	  xor       r4, r5, r4
	  xor       r0, r3, r0
	  sub       r4, r4, r5
	  sub       r0, r0, r3
	  add       r0, r0, r4
	  cmpw      r0, r31
	  bge-      .loc_0xF4
	  stw       r27, 0x0(r26)
	  mr        r31, r0
	  mr        r29, r28

	.loc_0xF4:
	  addi      r27, r27, 0x1

	.loc_0xF8:
	  mr        r3, r28
	  bl        -0x35A4
	  cmpw      r27, r3
	  blt+      .loc_0x5C

	.loc_0x108:
	  lwz       r28, 0x4(r28)

	.loc_0x10C:
	  cmplwi    r28, 0
	  bne+      .loc_0x4C
	  mr        r3, r29
	  lmw       r22, 0x18(r1)
	  lwz       r0, 0x44(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr

	.loc_0x12C:
	*/
}

/*
 * --INFO--
 * Address:	80247634
 * Size:	0000D0
 */
void Game::Cave::RandMapUnit::isInLinkArea((int, int, int, int, int))
{
	/*
	.loc_0x0:
	  sub       r7, r7, r5
	  sub       r8, r8, r6
	  srawi     r6, r7, 0x1F
	  cmpwi     r4, 0x2
	  srawi     r3, r8, 0x1F
	  xor       r5, r6, r7
	  xor       r0, r3, r8
	  sub       r5, r5, r6
	  sub       r0, r0, r3
	  beq-      .loc_0x88
	  bge-      .loc_0x3C
	  cmpwi     r4, 0
	  beq-      .loc_0x48
	  bge-      .loc_0x68
	  b         .loc_0xC8

	.loc_0x3C:
	  cmpwi     r4, 0x4
	  bge-      .loc_0xC8
	  b         .loc_0xA8

	.loc_0x48:
	  cmpwi     r5, 0xA
	  bge-      .loc_0xC8
	  cmpwi     r0, 0xA
	  bge-      .loc_0xC8
	  cmpwi     r8, 0
	  bgt-      .loc_0xC8
	  li        r3, 0x1
	  blr

	.loc_0x68:
	  cmpwi     r5, 0xA
	  bge-      .loc_0xC8
	  cmpwi     r7, 0
	  blt-      .loc_0xC8
	  cmpwi     r0, 0xA
	  bge-      .loc_0xC8
	  li        r3, 0x1
	  blr

	.loc_0x88:
	  cmpwi     r5, 0xA
	  bge-      .loc_0xC8
	  cmpwi     r0, 0xA
	  bge-      .loc_0xC8
	  cmpwi     r8, 0
	  blt-      .loc_0xC8
	  li        r3, 0x1
	  blr

	.loc_0xA8:
	  cmpwi     r5, 0xA
	  bge-      .loc_0xC8
	  cmpwi     r7, 0
	  bgt-      .loc_0xC8
	  cmpwi     r0, 0xA
	  bge-      .loc_0xC8
	  li        r3, 0x1
	  blr

	.loc_0xC8:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80247704
 * Size:	000130
 */
void Game::Cave::RandMapUnit::getLoopMapNode((Game::Cave::MapNode**))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x60(r1)
	  mflr      r0
	  stw       r0, 0x64(r1)
	  stfd      f31, 0x50(r1)
	  psq_st    f31,0x58(r1),0,0
	  stfd      f30, 0x40(r1)
	  psq_st    f30,0x48(r1),0,0
	  stmw      r26, 0x28(r1)
	  lwz       r3, 0x20(r3)
	  mr        r26, r4
	  mr        r30, r26
	  li        r28, 0
	  lwz       r3, 0x10(r3)
	  lwz       r29, 0x90(r3)
	  b         .loc_0x7C

	.loc_0x3C:
	  lwz       r3, 0x18(r29)
	  bl        -0x4BC0
	  cmpwi     r3, 0x1
	  bne-      .loc_0x78
	  lwz       r3, 0x18(r29)
	  bl        -0x4BC8
	  cmpwi     r3, 0x1
	  bne-      .loc_0x78
	  mr        r3, r29
	  bl        -0x3704
	  cmpwi     r3, 0x2
	  bne-      .loc_0x78
	  stw       r29, 0x0(r30)
	  addi      r30, r30, 0x4
	  addi      r28, r28, 0x1

	.loc_0x78:
	  lwz       r29, 0x4(r29)

	.loc_0x7C:
	  cmplwi    r29, 0
	  bne+      .loc_0x3C
	  cmpwi     r28, 0
	  beq-      .loc_0x108
	  lfd       f30, -0x3BF0(r2)
	  mr        r29, r26
	  lfs       f31, -0x3BE8(r2)
	  xoris     r31, r28, 0x8000
	  li        r27, 0
	  lis       r30, 0x4330
	  b         .loc_0x100

	.loc_0xA8:
	  bl        -0x17E20C
	  xoris     r0, r3, 0x8000
	  stw       r30, 0x8(r1)
	  lwz       r4, 0x0(r29)
	  addi      r27, r27, 0x1
	  stw       r0, 0xC(r1)
	  lfd       f0, 0x8(r1)
	  stw       r31, 0x14(r1)
	  fsubs     f0, f0, f30
	  stw       r30, 0x10(r1)
	  fdivs     f1, f0, f31
	  lfd       f0, 0x10(r1)
	  fsubs     f0, f0, f30
	  fmuls     f0, f0, f1
	  fctiwz    f0, f0
	  stfd      f0, 0x18(r1)
	  lwz       r0, 0x1C(r1)
	  rlwinm    r3,r0,2,0,29
	  lwzx      r0, r26, r3
	  stw       r0, 0x0(r29)
	  addi      r29, r29, 0x4
	  stwx      r4, r26, r3

	.loc_0x100:
	  cmpw      r27, r28
	  blt+      .loc_0xA8

	.loc_0x108:
	  mr        r3, r28
	  psq_l     f31,0x58(r1),0,0
	  lfd       f31, 0x50(r1)
	  psq_l     f30,0x48(r1),0,0
	  lfd       f30, 0x40(r1)
	  lmw       r26, 0x28(r1)
	  lwz       r0, 0x64(r1)
	  mtlr      r0
	  addi      r1, r1, 0x60
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80247834
 * Size:	0000EC
 */
void Game::Cave::RandMapUnit::getLinkDoorDirection((Game::Cave::MapNode*, int,
                                                    Game::Cave::MapNode*, int))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stmw      r27, 0x1C(r1)
	  mr        r31, r5
	  mr        r28, r4
	  mr        r27, r3
	  mr        r29, r6
	  mr        r30, r7
	  mr        r3, r28
	  mr        r4, r31
	  addi      r5, r1, 0x14
	  addi      r6, r1, 0x10
	  bl        -0x481C
	  mr        r3, r29
	  mr        r4, r30
	  addi      r5, r1, 0xC
	  addi      r6, r1, 0x8
	  bl        -0x4830
	  mr        r3, r28
	  mr        r4, r31
	  bl        -0x4860
	  mr        r31, r3
	  mr        r3, r29
	  mr        r4, r30
	  bl        -0x4870
	  cmpwi     r31, 0
	  lwz       r7, 0x14(r1)
	  lwz       r5, 0xC(r1)
	  mr        r4, r3
	  lwz       r6, 0x10(r1)
	  lwz       r0, 0x8(r1)
	  sub       r5, r5, r7
	  sub       r6, r0, r6
	  bne-      .loc_0x98
	  mr        r3, r27
	  bl        .loc_0xEC
	  b         .loc_0xD8

	.loc_0x98:
	  cmpwi     r31, 0x1
	  bne-      .loc_0xAC
	  mr        r3, r27
	  bl        0x104
	  b         .loc_0xD8

	.loc_0xAC:
	  cmpwi     r31, 0x2
	  bne-      .loc_0xC0
	  mr        r3, r27
	  bl        0x1B4
	  b         .loc_0xD8

	.loc_0xC0:
	  cmpwi     r31, 0x3
	  bne-      .loc_0xD4
	  mr        r3, r27
	  bl        0x25C
	  b         .loc_0xD8

	.loc_0xD4:
	  li        r3, -0x1

	.loc_0xD8:
	  lmw       r27, 0x1C(r1)
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr

	.loc_0xEC:
	*/
}

/*
 * --INFO--
 * Address:	80247920
 * Size:	0000BC
 */
void Game::Cave::RandMapUnit::getUpToLinkDoorDir((int, int, int))
{
	/*
	.loc_0x0:
	  cmpwi     r6, -0x2
	  ble-      .loc_0x1C
	  cmpwi     r5, 0
	  li        r3, 0x1
	  bgelr-
	  li        r3, 0x3
	  blr

	.loc_0x1C:
	  cmpwi     r5, -0x1
	  bge-      .loc_0x2C
	  li        r3, 0x3
	  blr

	.loc_0x2C:
	  bne-      .loc_0x50
	  cmpwi     r4, 0x2
	  beq-      .loc_0x40
	  cmpwi     r4, 0x3
	  bne-      .loc_0x48

	.loc_0x40:
	  li        r3, 0x3
	  blr

	.loc_0x48:
	  li        r3, 0
	  blr

	.loc_0x50:
	  cmpwi     r5, 0
	  bne-      .loc_0x78
	  cmpwi     r4, 0
	  beq-      .loc_0x68
	  cmpwi     r4, 0x3
	  bne-      .loc_0x70

	.loc_0x68:
	  li        r3, 0x3
	  blr

	.loc_0x70:
	  li        r3, 0
	  blr

	.loc_0x78:
	  cmpwi     r5, 0x1
	  bne-      .loc_0xA0
	  cmpwi     r4, 0x1
	  beq-      .loc_0x90
	  cmpwi     r4, 0x2
	  bne-      .loc_0x98

	.loc_0x90:
	  li        r3, 0x1
	  blr

	.loc_0x98:
	  li        r3, 0
	  blr

	.loc_0xA0:
	  li        r0, 0x1
	  xor       r0, r5, r0
	  srawi     r3, r0, 0x1
	  and       r0, r0, r5
	  sub       r0, r3, r0
	  rlwinm    r3,r0,1,31,31
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802479DC
 * Size:	0000C4
 */
void Game::Cave::RandMapUnit::getRightToLinkDoorDir((int, int, int))
{
	/*
	.loc_0x0:
	  cmpwi     r5, 0
	  bne-      .loc_0x20
	  neg       r3, r6
	  li        r0, 0x2
	  andc      r3, r3, r6
	  srawi     r3, r3, 0x1F
	  and       r3, r0, r3
	  blr

	.loc_0x20:
	  cmpwi     r6, -0x1
	  bge-      .loc_0x30
	  li        r3, 0
	  blr

	.loc_0x30:
	  bne-      .loc_0x54
	  cmpwi     r4, 0
	  beq-      .loc_0x44
	  cmpwi     r4, 0x3
	  bne-      .loc_0x4C

	.loc_0x44:
	  li        r3, 0
	  blr

	.loc_0x4C:
	  li        r3, 0x1
	  blr

	.loc_0x54:
	  cmpwi     r6, 0
	  bne-      .loc_0x7C
	  cmpwi     r4, 0
	  beq-      .loc_0x6C
	  cmpwi     r4, 0x1
	  bne-      .loc_0x74

	.loc_0x6C:
	  li        r3, 0
	  blr

	.loc_0x74:
	  li        r3, 0x1
	  blr

	.loc_0x7C:
	  cmpwi     r6, 0x1
	  bne-      .loc_0xA4
	  cmpwi     r4, 0x2
	  beq-      .loc_0x94
	  cmpwi     r4, 0x3
	  bne-      .loc_0x9C

	.loc_0x94:
	  li        r3, 0x2
	  blr

	.loc_0x9C:
	  li        r3, 0x1
	  blr

	.loc_0xA4:
	  li        r0, 0x1
	  xor       r0, r6, r0
	  srawi     r3, r0, 0x1
	  and       r0, r0, r6
	  sub       r0, r3, r0
	  rlwinm    r3,r0,1,31,31
	  addi      r3, r3, 0x1
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80247AA0
 * Size:	0000BC
 */
void Game::Cave::RandMapUnit::getDownToLinkDoorDir((int, int, int))
{
	/*
	.loc_0x0:
	  cmpwi     r6, 0
	  bne-      .loc_0x1C
	  cmpwi     r5, 0
	  li        r3, 0x3
	  blelr-
	  li        r3, 0x1
	  blr

	.loc_0x1C:
	  cmpwi     r5, -0x1
	  bge-      .loc_0x2C
	  li        r3, 0x3
	  blr

	.loc_0x2C:
	  bne-      .loc_0x50
	  cmpwi     r4, 0
	  beq-      .loc_0x40
	  cmpwi     r4, 0x3
	  bne-      .loc_0x48

	.loc_0x40:
	  li        r3, 0x3
	  blr

	.loc_0x48:
	  li        r3, 0x2
	  blr

	.loc_0x50:
	  cmpwi     r5, 0
	  bne-      .loc_0x78
	  cmpwi     r4, 0x2
	  beq-      .loc_0x68
	  cmpwi     r4, 0x3
	  bne-      .loc_0x70

	.loc_0x68:
	  li        r3, 0x3
	  blr

	.loc_0x70:
	  li        r3, 0x2
	  blr

	.loc_0x78:
	  cmpwi     r5, 0x1
	  bne-      .loc_0xA0
	  cmpwi     r4, 0
	  beq-      .loc_0x90
	  cmpwi     r4, 0x1
	  bne-      .loc_0x98

	.loc_0x90:
	  li        r3, 0x1
	  blr

	.loc_0x98:
	  li        r3, 0x2
	  blr

	.loc_0xA0:
	  li        r4, 0x1
	  rlwinm    r3,r5,1,31,31
	  subc      r0, r4, r5
	  rlwinm    r0,r4,1,31,31
	  subfe     r3, r0, r3
	  addi      r3, r3, 0x2
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80247B5C
 * Size:	0000C0
 */
void Game::Cave::RandMapUnit::getLeftToLinkDoorDir((int, int, int))
{
	/*
	.loc_0x0:
	  cmpwi     r5, -0x2
	  ble-      .loc_0x20
	  neg       r3, r6
	  li        r0, 0x2
	  andc      r3, r3, r6
	  srawi     r3, r3, 0x1F
	  and       r3, r0, r3
	  blr

	.loc_0x20:
	  cmpwi     r6, -0x1
	  bge-      .loc_0x30
	  li        r3, 0
	  blr

	.loc_0x30:
	  bne-      .loc_0x54
	  cmpwi     r4, 0
	  beq-      .loc_0x44
	  cmpwi     r4, 0x1
	  bne-      .loc_0x4C

	.loc_0x44:
	  li        r3, 0
	  blr

	.loc_0x4C:
	  li        r3, 0x3
	  blr

	.loc_0x54:
	  cmpwi     r6, 0
	  bne-      .loc_0x7C
	  cmpwi     r4, 0
	  beq-      .loc_0x6C
	  cmpwi     r4, 0x3
	  bne-      .loc_0x74

	.loc_0x6C:
	  li        r3, 0
	  blr

	.loc_0x74:
	  li        r3, 0x3
	  blr

	.loc_0x7C:
	  cmpwi     r6, 0x1
	  bne-      .loc_0xA4
	  cmpwi     r4, 0x1
	  beq-      .loc_0x94
	  cmpwi     r4, 0x2
	  bne-      .loc_0x9C

	.loc_0x94:
	  li        r3, 0x2
	  blr

	.loc_0x9C:
	  li        r3, 0x3
	  blr

	.loc_0xA4:
	  li        r4, 0x1
	  rlwinm    r3,r6,1,31,31
	  subc      r0, r4, r6
	  rlwinm    r0,r4,1,31,31
	  subfe     r3, r0, r3
	  addi      r3, r3, 0x3
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80247C1C
 * Size:	0002F0
 */
void Game::Cave::RandMapUnit::getLoopEndMapUnit(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0xD0(r1)
	  mflr      r0
	  stw       r0, 0xD4(r1)
	  stfd      f31, 0xC0(r1)
	  psq_st    f31,0xC8(r1),0,0
	  stfd      f30, 0xB0(r1)
	  psq_st    f30,0xB8(r1),0,0
	  stmw      r19, 0x7C(r1)
	  mr        r21, r3
	  li        r20, 0
	  lwz       r4, 0x20(r3)
	  lwz       r3, 0x28(r4)
	  lwz       r31, 0x10(r4)
	  lwz       r19, 0x10(r3)
	  b         .loc_0xA0

	.loc_0x3C:
	  li        r22, 0
	  b         .loc_0x8C

	.loc_0x44:
	  mr        r3, r19
	  mr        r4, r22
	  bl        -0x4950
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x88
	  cmpwi     r20, 0
	  bne-      .loc_0x84
	  mr        r3, r19
	  mr        r4, r22
	  bl        -0x4800
	  mr        r3, r19
	  mr        r4, r22
	  addi      r5, r1, 0xC
	  addi      r6, r1, 0x8
	  bl        -0x4C4C
	  b         .loc_0xAC

	.loc_0x84:
	  addi      r20, r20, 0x1

	.loc_0x88:
	  addi      r22, r22, 0x1

	.loc_0x8C:
	  mr        r3, r19
	  bl        -0x3C4C
	  cmpw      r22, r3
	  blt+      .loc_0x44
	  lwz       r19, 0x4(r19)

	.loc_0xA0:
	  cmplwi    r19, 0
	  bne+      .loc_0x3C
	  li        r19, 0

	.loc_0xAC:
	  mr        r3, r19
	  mr        r4, r22
	  bl        -0x484C
	  lis       r4, 0x8048
	  mr        r26, r3
	  addi      r5, r4, 0x40B4
	  cmplwi    r19, 0
	  lwz       r4, 0x0(r5)
	  lwz       r3, 0x4(r5)
	  lwz       r0, 0x8(r5)
	  stw       r4, 0x10(r1)
	  stw       r3, 0x14(r1)
	  stw       r0, 0x18(r1)
	  beq-      .loc_0x2C8
	  cmplwi    r26, 0
	  beq-      .loc_0x2C8
	  li        r25, 0
	  addi      r29, r1, 0x10

	.loc_0xF4:
	  li        r24, 0
	  b         .loc_0x2AC

	.loc_0xFC:
	  lwz       r0, 0x0(r29)
	  addi      r23, r24, 0x1
	  rlwinm    r3,r0,6,0,25
	  addi      r0, r3, 0x10
	  lwzx      r22, r31, r0
	  b         .loc_0x2A0

	.loc_0x114:
	  mr        r3, r22
	  bl        -0x3CD4
	  cmpw      r23, r3
	  bne-      .loc_0x29C
	  cmpwi     r23, 0
	  li        r7, 0
	  ble-      .loc_0x1C8
	  cmpwi     r23, 0x8
	  subi      r3, r23, 0x8
	  ble-      .loc_0x19C
	  addi      r0, r3, 0x7
	  addi      r8, r1, 0x1C
	  rlwinm    r0,r0,29,3,31
	  mtctr     r0
	  cmpwi     r3, 0
	  ble-      .loc_0x19C

	.loc_0x154:
	  stw       r7, 0x0(r8)
	  addi      r3, r7, 0x1
	  addi      r0, r7, 0x2
	  addi      r6, r7, 0x3
	  stw       r3, 0x4(r8)
	  addi      r5, r7, 0x4
	  addi      r4, r7, 0x5
	  addi      r3, r7, 0x6
	  stw       r0, 0x8(r8)
	  addi      r0, r7, 0x7
	  addi      r7, r7, 0x8
	  stw       r6, 0xC(r8)
	  stw       r5, 0x10(r8)
	  stw       r4, 0x14(r8)
	  stw       r3, 0x18(r8)
	  stw       r0, 0x1C(r8)
	  addi      r8, r8, 0x20
	  bdnz+     .loc_0x154

	.loc_0x19C:
	  rlwinm    r3,r7,2,0,29
	  addi      r4, r1, 0x1C
	  sub       r0, r23, r7
	  add       r4, r4, r3
	  mtctr     r0
	  cmpw      r7, r23
	  bge-      .loc_0x1C8

	.loc_0x1B8:
	  stw       r7, 0x0(r4)
	  addi      r4, r4, 0x4
	  addi      r7, r7, 0x1
	  bdnz+     .loc_0x1B8

	.loc_0x1C8:
	  addi      r28, r1, 0x1C
	  lfd       f30, -0x3BF0(r2)
	  lfs       f31, -0x3BE8(r2)
	  mr        r30, r28
	  xoris     r20, r23, 0x8000
	  li        r27, 0
	  lis       r19, 0x4330
	  b         .loc_0x240

	.loc_0x1E8:
	  bl        -0x17E864
	  xoris     r0, r3, 0x8000
	  stw       r19, 0x60(r1)
	  lwz       r4, 0x0(r30)
	  addi      r27, r27, 0x1
	  stw       r0, 0x64(r1)
	  lfd       f0, 0x60(r1)
	  stw       r20, 0x6C(r1)
	  fsubs     f0, f0, f30
	  stw       r19, 0x68(r1)
	  fdivs     f1, f0, f31
	  lfd       f0, 0x68(r1)
	  fsubs     f0, f0, f30
	  fmuls     f0, f0, f1
	  fctiwz    f0, f0
	  stfd      f0, 0x70(r1)
	  lwz       r0, 0x74(r1)
	  rlwinm    r3,r0,2,0,29
	  lwzx      r0, r28, r3
	  stw       r0, 0x0(r30)
	  addi      r30, r30, 0x4
	  stwx      r4, r28, r3

	.loc_0x240:
	  cmpw      r27, r23
	  blt+      .loc_0x1E8
	  li        r19, 0
	  b         .loc_0x294

	.loc_0x250:
	  lwz       r5, 0xC(r1)
	  mr        r3, r22
	  lwz       r6, 0x8(r1)
	  mr        r4, r26
	  lwz       r7, 0x0(r28)
	  bl        -0x4D34
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x28C
	  lwz       r3, 0x28(r21)
	  mr        r4, r22
	  bl        -0x2828
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x28C
	  mr        r3, r22
	  b         .loc_0x2CC

	.loc_0x28C:
	  addi      r28, r28, 0x4
	  addi      r19, r19, 0x1

	.loc_0x294:
	  cmpw      r19, r23
	  blt+      .loc_0x250

	.loc_0x29C:
	  lwz       r22, 0x4(r22)

	.loc_0x2A0:
	  cmplwi    r22, 0
	  bne+      .loc_0x114
	  addi      r24, r24, 0x1

	.loc_0x2AC:
	  lwz       r0, 0x0(r21)
	  cmpw      r24, r0
	  blt+      .loc_0xFC
	  addi      r25, r25, 0x1
	  addi      r29, r29, 0x4
	  cmpwi     r25, 0x3
	  blt+      .loc_0xF4

	.loc_0x2C8:
	  li        r3, 0

	.loc_0x2CC:
	  psq_l     f31,0xC8(r1),0,0
	  lfd       f31, 0xC0(r1)
	  psq_l     f30,0xB8(r1),0,0
	  lfd       f30, 0xB0(r1)
	  lmw       r19, 0x7C(r1)
	  lwz       r0, 0xD4(r1)
	  mtlr      r0
	  addi      r1, r1, 0xD0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80247F0C
 * Size:	000070
 */
void Game::Cave::RandMapUnit::getPartsKindNum((int))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  li        r31, 0
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  mr        r29, r4
	  lwz       r3, 0x20(r3)
	  lwz       r3, 0x28(r3)
	  lwz       r30, 0x10(r3)
	  b         .loc_0x48

	.loc_0x30:
	  lwz       r3, 0x18(r30)
	  bl        -0x53C8
	  cmpw      r29, r3
	  bne-      .loc_0x44
	  addi      r31, r31, 0x1

	.loc_0x44:
	  lwz       r30, 0x4(r30)

	.loc_0x48:
	  cmplwi    r30, 0
	  bne+      .loc_0x30
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
 * Address:	80247F7C
 * Size:	00008C
 */
void Game::Cave::RandMapUnit::getOpenDoorNum(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  li        r31, 0
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  lwz       r3, 0x20(r3)
	  lwz       r3, 0x28(r3)
	  lwz       r30, 0x10(r3)
	  b         .loc_0x64

	.loc_0x2C:
	  li        r29, 0
	  b         .loc_0x50

	.loc_0x34:
	  mr        r3, r30
	  mr        r4, r29
	  bl        -0x4CA0
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x4C
	  addi      r31, r31, 0x1

	.loc_0x4C:
	  addi      r29, r29, 0x1

	.loc_0x50:
	  mr        r3, r30
	  bl        -0x3F70
	  cmpw      r29, r3
	  blt+      .loc_0x34
	  lwz       r30, 0x4(r30)

	.loc_0x64:
	  cmplwi    r30, 0
	  bne+      .loc_0x2C
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
 * Address:	80248008
 * Size:	0000B4
 */
void Game::Cave::RandMapUnit::addMap((Game::Cave::UnitInfo*, int, int, bool))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stmw      r26, 0x8(r1)
	  mr        r26, r3
	  mr        r27, r4
	  mr        r28, r5
	  mr        r29, r6
	  mr        r30, r7
	  li        r3, 0x40
	  bl        -0x22418C
	  mr.       r31, r3
	  beq-      .loc_0x40
	  mr        r4, r27
	  bl        -0x52D0
	  mr        r31, r3

	.loc_0x40:
	  cmplwi    r31, 0
	  beq-      .loc_0x7C
	  li        r0, 0
	  mr        r3, r31
	  stw       r0, 0x10(r31)
	  mr        r4, r28
	  mr        r5, r29
	  stw       r0, 0xC(r31)
	  stw       r0, 0x8(r31)
	  stw       r0, 0x4(r31)
	  bl        -0x5054
	  lwz       r3, 0x20(r26)
	  mr        r4, r31
	  lwz       r3, 0x28(r3)
	  bl        0x1C9388

	.loc_0x7C:
	  rlwinm.   r0,r30,0,24,31
	  beq-      .loc_0xA0
	  mr        r3, r26
	  bl        0x534
	  mr        r3, r26
	  bl        0x400
	  mr        r3, r26
	  mr        r4, r27
	  bl        .loc_0xB4

	.loc_0xA0:
	  lmw       r26, 0x8(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr

	.loc_0xB4:
	*/
}

/*
 * --INFO--
 * Address:	802480BC
 * Size:	0003DC
 */
void Game::Cave::RandMapUnit::changeMapPriority((Game::Cave::UnitInfo*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x480(r1)
	  mflr      r0
	  stw       r0, 0x484(r1)
	  stfd      f31, 0x470(r1)
	  psq_st    f31,0x478(r1),0,0
	  stfd      f30, 0x460(r1)
	  psq_st    f30,0x468(r1),0,0
	  stfd      f29, 0x450(r1)
	  psq_st    f29,0x458(r1),0,0
	  stmw      r21, 0x424(r1)
	  mr        r21, r4
	  mr        r23, r3
	  mr        r3, r21
	  bl        -0x5578
	  lwz       r5, 0x20(r23)
	  cmpwi     r3, 0x1
	  rlwinm    r0,r3,6,0,25
	  lwz       r4, 0x10(r5)
	  add       r29, r4, r0
	  bne-      .loc_0x324
	  lwz       r26, 0x28(r5)
	  mr        r3, r21
	  bl        -0x55A8
	  lwz       r3, 0x24(r23)
	  addi      r30, r1, 0x208
	  addi      r31, r1, 0x8
	  li        r0, 0x8
	  lwz       r3, 0x4(r3)
	  mr        r4, r30
	  mr        r5, r31
	  li        r27, 0
	  subi      r28, r3, 0x4
	  mtctr     r0

	.loc_0x84:
	  li        r0, 0
	  stw       r0, 0x0(r4)
	  stw       r0, 0x0(r5)
	  stw       r0, 0x4(r4)
	  stw       r0, 0x4(r5)
	  stw       r0, 0x8(r4)
	  stw       r0, 0x8(r5)
	  stw       r0, 0xC(r4)
	  stw       r0, 0xC(r5)
	  stw       r0, 0x10(r4)
	  stw       r0, 0x10(r5)
	  stw       r0, 0x14(r4)
	  stw       r0, 0x14(r5)
	  stw       r0, 0x18(r4)
	  stw       r0, 0x18(r5)
	  stw       r0, 0x1C(r4)
	  stw       r0, 0x1C(r5)
	  stw       r0, 0x20(r4)
	  stw       r0, 0x20(r5)
	  stw       r0, 0x24(r4)
	  stw       r0, 0x24(r5)
	  stw       r0, 0x28(r4)
	  stw       r0, 0x28(r5)
	  stw       r0, 0x2C(r4)
	  stw       r0, 0x2C(r5)
	  stw       r0, 0x30(r4)
	  stw       r0, 0x30(r5)
	  stw       r0, 0x34(r4)
	  stw       r0, 0x34(r5)
	  stw       r0, 0x38(r4)
	  stw       r0, 0x38(r5)
	  stw       r0, 0x3C(r4)
	  addi      r4, r4, 0x40
	  stw       r0, 0x3C(r5)
	  addi      r5, r5, 0x40
	  bdnz+     .loc_0x84
	  lwz       r23, 0x10(r26)
	  mr        r25, r31
	  mr        r24, r30
	  b         .loc_0x1BC

	.loc_0x124:
	  lwz       r3, 0x18(r23)
	  bl        -0x566C
	  cmpwi     r3, 0x1
	  bne-      .loc_0x1B8
	  mr        r26, r31
	  li        r22, 0x1
	  li        r21, 0
	  b         .loc_0x184

	.loc_0x144:
	  mr        r3, r23
	  bl        -0x4840
	  mr        r4, r3
	  lwz       r3, 0x0(r26)
	  bl        -0x17DB50
	  cmpwi     r3, 0
	  bne-      .loc_0x17C
	  rlwinm    r5,r21,2,0,29
	  addi      r4, r1, 0x208
	  lwzx      r3, r4, r5
	  li        r22, 0
	  addi      r0, r3, 0x1
	  stwx      r0, r4, r5
	  b         .loc_0x18C

	.loc_0x17C:
	  addi      r26, r26, 0x4
	  addi      r21, r21, 0x1

	.loc_0x184:
	  cmpw      r21, r27
	  blt+      .loc_0x144

	.loc_0x18C:
	  rlwinm.   r0,r22,0,24,31
	  beq-      .loc_0x1B8
	  mr        r3, r23
	  bl        -0x4890
	  lwz       r4, 0x0(r24)
	  addi      r27, r27, 0x1
	  stw       r3, 0x0(r25)
	  addi      r25, r25, 0x4
	  addi      r0, r4, 0x1
	  stw       r0, 0x0(r24)
	  addi      r24, r24, 0x4

	.loc_0x1B8:
	  lwz       r23, 0x4(r23)

	.loc_0x1BC:
	  cmplwi    r23, 0
	  bne+      .loc_0x124
	  mr        r6, r31
	  subi      r3, r27, 0x1
	  li        r9, 0
	  b         .loc_0x240

	.loc_0x1D4:
	  addi      r10, r9, 0x1
	  addi      r4, r1, 0x208
	  rlwinm    r7,r10,2,0,29
	  addi      r5, r1, 0x8
	  sub       r0, r27, r10
	  add       r4, r4, r7
	  add       r5, r5, r7
	  mtctr     r0
	  cmpw      r10, r27
	  bge-      .loc_0x234

	.loc_0x1FC:
	  lwz       r7, 0x0(r30)
	  lwz       r8, 0x0(r4)
	  cmpw      r7, r8
	  ble-      .loc_0x224
	  lwz       r11, 0x0(r6)
	  lwz       r0, 0x0(r5)
	  stw       r8, 0x0(r30)
	  stw       r0, 0x0(r6)
	  stw       r7, 0x0(r4)
	  stw       r11, 0x0(r5)

	.loc_0x224:
	  addi      r4, r4, 0x4
	  addi      r5, r5, 0x4
	  addi      r10, r10, 0x1
	  bdnz+     .loc_0x1FC

	.loc_0x234:
	  addi      r30, r30, 0x4
	  addi      r6, r6, 0x4
	  addi      r9, r9, 0x1

	.loc_0x240:
	  cmpw      r9, r3
	  blt+      .loc_0x1D4
	  lfd       f29, -0x3BF0(r2)
	  li        r21, 0
	  lfs       f31, -0x3BE8(r2)
	  lis       r30, 0x4330
	  lfs       f30, -0x3BE0(r2)
	  b         .loc_0x318

	.loc_0x260:
	  li        r22, 0

	.loc_0x264:
	  lwz       r23, 0x10(r29)
	  b         .loc_0x29C

	.loc_0x26C:
	  mr        r3, r23
	  bl        -0x4968
	  lwz       r4, 0x0(r31)
	  bl        -0x17DC74
	  cmpwi     r3, 0
	  bne-      .loc_0x298
	  mr        r3, r23
	  bl        0x1C928C
	  mr        r3, r29
	  mr        r4, r23
	  bl        0x1C90B8

	.loc_0x298:
	  lwz       r23, 0x4(r23)

	.loc_0x29C:
	  cmplwi    r23, 0
	  bne+      .loc_0x26C
	  addi      r22, r22, 0x1
	  cmpwi     r22, 0x4
	  blt+      .loc_0x264
	  li        r22, 0

	.loc_0x2B4:
	  bl        -0x17EDD0
	  xoris     r0, r3, 0x8000
	  stw       r30, 0x408(r1)
	  mr        r3, r29
	  stw       r0, 0x40C(r1)
	  lfd       f0, 0x408(r1)
	  fsubs     f0, f0, f29
	  fdivs     f0, f0, f31
	  fmuls     f0, f30, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x410(r1)
	  lwz       r0, 0x414(r1)
	  add       r4, r28, r0
	  bl        0x1C92F8
	  mr.       r23, r3
	  beq-      .loc_0x304
	  bl        0x1C9220
	  mr        r3, r29
	  mr        r4, r23
	  bl        0x1C904C

	.loc_0x304:
	  addi      r22, r22, 0x1
	  cmpwi     r22, 0x4
	  blt+      .loc_0x2B4
	  addi      r31, r31, 0x4
	  addi      r21, r21, 0x1

	.loc_0x318:
	  cmpw      r21, r27
	  blt+      .loc_0x260
	  b         .loc_0x3B0

	.loc_0x324:
	  lfd       f30, -0x3BF0(r2)
	  rlwinm    r24,r3,2,0,29
	  lfs       f31, -0x3BE8(r2)
	  li        r21, 0
	  lis       r27, 0x4330
	  b         .loc_0x3A0

	.loc_0x33C:
	  bl        -0x17EE58
	  xoris     r3, r3, 0x8000
	  xoris     r0, r25, 0x8000
	  stw       r3, 0x414(r1)
	  mr        r3, r29
	  stw       r27, 0x410(r1)
	  lfd       f0, 0x410(r1)
	  stw       r0, 0x40C(r1)
	  fsubs     f0, f0, f30
	  stw       r27, 0x408(r1)
	  fdivs     f1, f0, f31
	  lfd       f0, 0x408(r1)
	  fsubs     f0, f0, f30
	  fmuls     f0, f0, f1
	  fctiwz    f0, f0
	  stfd      f0, 0x418(r1)
	  lwz       r4, 0x41C(r1)
	  bl        0x1C9260
	  mr.       r22, r3
	  beq-      .loc_0x39C
	  bl        0x1C9188
	  mr        r3, r29
	  mr        r4, r22
	  bl        0x1C8FB4

	.loc_0x39C:
	  addi      r21, r21, 0x1

	.loc_0x3A0:
	  lwz       r0, 0x24(r23)
	  lwzx      r25, r24, r0
	  cmpw      r21, r25
	  blt+      .loc_0x33C

	.loc_0x3B0:
	  psq_l     f31,0x478(r1),0,0
	  lfd       f31, 0x470(r1)
	  psq_l     f30,0x468(r1),0,0
	  lfd       f30, 0x460(r1)
	  psq_l     f29,0x458(r1),0,0
	  lfd       f29, 0x450(r1)
	  lmw       r21, 0x424(r1)
	  lwz       r0, 0x484(r1)
	  mtlr      r0
	  addi      r1, r1, 0x480
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80248498
 * Size:	00012C
 */
void Game::Cave::RandMapUnit::moveCentre(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stmw      r22, 0x8(r1)
	  mr        r31, r3
	  li        r29, -0x3200
	  li        r28, -0x3200
	  li        r27, 0x3200
	  li        r26, 0x3200
	  lwz       r3, 0x20(r3)
	  lwz       r30, 0x28(r3)
	  lwz       r25, 0x10(r30)
	  b         .loc_0xA0

	.loc_0x34:
	  mr        r3, r25
	  bl        -0x4B34
	  mr        r0, r3
	  lwz       r3, 0x18(r25)
	  mr        r24, r0
	  bl        -0x595C
	  add       r23, r24, r3
	  mr        r3, r25
	  bl        -0x4B48
	  mr        r0, r3
	  lwz       r3, 0x18(r25)
	  mr        r22, r0
	  bl        -0x5970
	  cmpw      r24, r27
	  add       r0, r22, r3
	  bge-      .loc_0x78
	  mr        r27, r24

	.loc_0x78:
	  cmpw      r23, r29
	  ble-      .loc_0x84
	  mr        r29, r23

	.loc_0x84:
	  cmpw      r22, r26
	  bge-      .loc_0x90
	  mr        r26, r22

	.loc_0x90:
	  cmpw      r0, r28
	  ble-      .loc_0x9C
	  mr        r28, r0

	.loc_0x9C:
	  lwz       r25, 0x4(r25)

	.loc_0xA0:
	  cmplwi    r25, 0
	  bne+      .loc_0x34
	  lwz       r22, 0x10(r30)
	  b         .loc_0xDC

	.loc_0xB0:
	  mr        r3, r22
	  bl        -0x4BB0
	  mr        r30, r3
	  mr        r3, r22
	  bl        -0x4BB4
	  mr        r0, r3
	  mr        r3, r22
	  sub       r4, r30, r27
	  sub       r5, r0, r26
	  bl        -0x5550
	  lwz       r22, 0x4(r22)

	.loc_0xDC:
	  cmplwi    r22, 0
	  bne+      .loc_0xB0
	  lbz       r0, 0xC(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x118
	  sub       r0, r29, r27
	  cmpwi     r0, 0x23
	  ble-      .loc_0x104
	  li        r0, 0x1
	  stb       r0, 0xC(r31)

	.loc_0x104:
	  sub       r0, r28, r26
	  cmpwi     r0, 0x23
	  ble-      .loc_0x118
	  li        r0, 0x1
	  stb       r0, 0xC(r31)

	.loc_0x118:
	  lmw       r22, 0x8(r1)
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802485C4
 * Size:	000134
 */
void Game::Cave::RandMapUnit::closeDoorCheck(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stmw      r26, 0x18(r1)
	  lwz       r3, 0x20(r3)
	  lwz       r31, 0x28(r3)
	  lwz       r30, 0x10(r31)
	  b         .loc_0x118

	.loc_0x20:
	  li        r29, 0
	  b         .loc_0x104

	.loc_0x28:
	  mr        r3, r30
	  mr        r4, r29
	  bl        -0x52DC
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x100
	  mr        r3, r30
	  mr        r4, r29
	  addi      r5, r1, 0x14
	  addi      r6, r1, 0x10
	  bl        -0x55C4
	  mr        r3, r30
	  mr        r4, r29
	  bl        -0x5198
	  lwz       r27, 0x10(r31)
	  mr        r28, r3
	  b         .loc_0xF8

	.loc_0x68:
	  cmplw     r30, r27
	  beq-      .loc_0xF4
	  li        r26, 0
	  b         .loc_0xE4

	.loc_0x78:
	  mr        r3, r27
	  mr        r4, r26
	  bl        -0x51C0
	  mr        r4, r3
	  mr        r3, r28
	  bl        0x338C
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xE0
	  mr        r3, r27
	  mr        r4, r26
	  addi      r5, r1, 0xC
	  addi      r6, r1, 0x8
	  bl        -0x5620
	  lwz       r3, 0x14(r1)
	  lwz       r0, 0xC(r1)
	  cmpw      r3, r0
	  bne-      .loc_0xE0
	  lwz       r3, 0x10(r1)
	  lwz       r0, 0x8(r1)
	  cmpw      r3, r0
	  bne-      .loc_0xE0
	  mr        r3, r30
	  mr        r4, r29
	  mr        r5, r27
	  mr        r6, r26
	  bl        -0x5458

	.loc_0xE0:
	  addi      r26, r26, 0x1

	.loc_0xE4:
	  mr        r3, r27
	  bl        -0x464C
	  cmpw      r26, r3
	  blt+      .loc_0x78

	.loc_0xF4:
	  lwz       r27, 0x4(r27)

	.loc_0xF8:
	  cmplwi    r27, 0
	  bne+      .loc_0x68

	.loc_0x100:
	  addi      r29, r29, 0x1

	.loc_0x104:
	  mr        r3, r30
	  bl        -0x466C
	  cmpw      r29, r3
	  blt+      .loc_0x28
	  lwz       r30, 0x4(r30)

	.loc_0x118:
	  cmplwi    r30, 0
	  bne+      .loc_0x20
	  lmw       r26, 0x18(r1)
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802486F8
 * Size:	000038
 */
void Game::Cave::RandMapUnit::deleteMapNode((Game::Cave::MapNode*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  bl        -0x5494
	  mr        r3, r31
	  bl        0x1C8EB8
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80248730
 * Size:	000198
 */
void Game::Cave::RandMapUnit::createLoopMapNodeCheck(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stmw      r26, 0x18(r1)
	  mr        r28, r3
	  lbz       r0, 0xD(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x184
	  li        r31, 0
	  stb       r31, 0xD(r28)
	  lwz       r3, 0x20(r28)
	  lwz       r3, 0x28(r3)
	  lwz       r27, 0x10(r3)
	  b         .loc_0x70

	.loc_0x38:
	  li        r29, 0
	  b         .loc_0x5C

	.loc_0x40:
	  mr        r3, r27
	  mr        r4, r29
	  bl        -0x5460
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x58
	  addi      r31, r31, 0x1

	.loc_0x58:
	  addi      r29, r29, 0x1

	.loc_0x5C:
	  mr        r3, r27
	  bl        -0x4730
	  cmpw      r29, r3
	  blt+      .loc_0x40
	  lwz       r27, 0x4(r27)

	.loc_0x70:
	  cmplwi    r27, 0
	  bne+      .loc_0x38
	  li        r29, 0
	  b         .loc_0x17C

	.loc_0x80:
	  lwz       r0, 0x10(r28)
	  cmpwi     r0, 0x10
	  bge-      .loc_0x178
	  bl        -0x17F21C
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x14(r1)
	  lfd       f3, -0x3BF0(r2)
	  stw       r0, 0x10(r1)
	  lfs       f2, -0x3BF8(r2)
	  lfd       f0, 0x10(r1)
	  lfs       f1, -0x3BE8(r2)
	  fsubs     f3, f0, f3
	  lfs       f0, 0x14(r28)
	  fmuls     f2, f2, f3
	  fdivs     f1, f2, f1
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x178
	  lwz       r3, 0x20(r28)
	  li        r26, 0
	  lwz       r3, 0x28(r3)
	  lwz       r27, 0x10(r3)
	  b         .loc_0x140

	.loc_0xDC:
	  li        r30, 0
	  b         .loc_0x12C

	.loc_0xE4:
	  mr        r3, r27
	  mr        r4, r30
	  bl        -0x5504
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x128
	  cmpw      r26, r29
	  bne-      .loc_0x124
	  mr        r3, r27
	  mr        r4, r30
	  bl        -0x53B4
	  mr        r3, r27
	  mr        r4, r30
	  addi      r5, r1, 0xC
	  addi      r6, r1, 0x8
	  bl        -0x5800
	  b         .loc_0x14C

	.loc_0x124:
	  addi      r26, r26, 0x1

	.loc_0x128:
	  addi      r30, r30, 0x1

	.loc_0x12C:
	  mr        r3, r27
	  bl        -0x4800
	  cmpw      r30, r3
	  blt+      .loc_0xE4
	  lwz       r27, 0x4(r27)

	.loc_0x140:
	  cmplwi    r27, 0
	  bne+      .loc_0xDC
	  li        r27, 0

	.loc_0x14C:
	  lwz       r0, 0x10(r28)
	  lwz       r3, 0x18(r28)
	  rlwinm    r0,r0,2,0,29
	  stwx      r27, r3, r0
	  lwz       r0, 0x10(r28)
	  lwz       r3, 0x1C(r28)
	  rlwinm    r0,r0,2,0,29
	  stwx      r30, r3, r0
	  lwz       r3, 0x10(r28)
	  addi      r0, r3, 0x1
	  stw       r0, 0x10(r28)

	.loc_0x178:
	  addi      r29, r29, 0x1

	.loc_0x17C:
	  cmpw      r29, r31
	  blt+      .loc_0x80

	.loc_0x184:
	  lmw       r26, 0x18(r1)
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802488C8
 * Size:	00004C
 */
void Game::Cave::RandMapUnit::isLoopMapNodeCheck((Game::Cave::MapNode*, int))
{
	/*
	.loc_0x0:
	  lwz       r0, 0x10(r3)
	  li        r7, 0
	  mtctr     r0
	  cmpwi     r0, 0
	  ble-      .loc_0x44

	.loc_0x14:
	  lwz       r6, 0x18(r3)
	  lwzx      r0, r6, r7
	  cmplw     r4, r0
	  bne-      .loc_0x3C
	  lwz       r6, 0x1C(r3)
	  lwzx      r0, r6, r7
	  cmpw      r5, r0
	  bne-      .loc_0x3C
	  li        r3, 0
	  blr

	.loc_0x3C:
	  addi      r7, r7, 0x4
	  bdnz+     .loc_0x14

	.loc_0x44:
	  li        r3, 0x1
	  blr
	*/
}
