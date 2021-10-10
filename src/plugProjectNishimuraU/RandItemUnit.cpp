

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
 * Address:	8024E38C
 * Size:	000064
 */
void Game::Cave::RandItemUnit::__ct((Game::Cave::MapUnitGenerator*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  li        r0, 0
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  stw       r4, 0x8(r3)
	  stw       r0, 0x0(r3)
	  lwz       r3, 0x8(r3)
	  lwz       r3, 0x8(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x3C
	  bl        -0x775EC
	  stw       r3, 0x4(r31)
	  b         .loc_0x40

	.loc_0x3C:
	  stw       r0, 0x4(r31)

	.loc_0x40:
	  li        r0, 0
	  mr        r3, r31
	  stw       r0, 0x10(r31)
	  stw       r0, 0x14(r31)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8024E3F0
 * Size:	000008
 */
void Game::Cave::RandItemUnit::setManageClassPtr((Game::Cave::RandMapScore*))
{
	/*
	.loc_0x0:
	  stw       r4, 0xC(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8024E3F8
 * Size:	000104
 */
void Game::Cave::RandItemUnit::setItemSlot(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stmw      r27, 0x1C(r1)
	  mr        r31, r3
	  lwz       r3, 0x0(r3)
	  lwz       r0, 0x4(r31)
	  cmpw      r3, r0
	  bge-      .loc_0xF0
	  li        r29, 0

	.loc_0x28:
	  li        r0, 0
	  mr        r3, r31
	  stw       r0, 0x8(r1)
	  bl        0xE78
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x54
	  mr        r3, r31
	  addi      r4, r1, 0x8
	  bl        0x944
	  mr        r30, r3
	  b         .loc_0x64

	.loc_0x54:
	  mr        r3, r31
	  addi      r4, r1, 0x8
	  bl        0x5A4
	  mr        r30, r3

	.loc_0x64:
	  mr        r28, r30
	  mr        r3, r31
	  bl        0xC60
	  cmplwi    r30, 0
	  mr        r27, r3
	  beq-      .loc_0xF0
	  cmplwi    r27, 0
	  beq-      .loc_0xF0
	  li        r3, 0x34
	  bl        -0x22A5DC
	  mr.       r30, r3
	  beq-      .loc_0xA8
	  lwz       r5, 0x8(r1)
	  mr        r4, r27
	  li        r6, 0x1
	  bl        -0x2BC
	  mr        r30, r3

	.loc_0xA8:
	  mr        r3, r30
	  mr        r4, r28
	  bl        -0x240
	  lwz       r3, 0x24(r28)
	  mr        r4, r30
	  bl        0x1C2F54
	  lwz       r3, 0x0(r31)
	  addi      r0, r3, 0x1
	  stw       r0, 0x0(r31)
	  lwz       r3, 0x0(r31)
	  lwz       r0, 0x4(r31)
	  cmpw      r3, r0
	  blt-      .loc_0xE4
	  b         .loc_0xF0
	  b         .loc_0xF0

	.loc_0xE4:
	  addi      r29, r29, 0x1
	  cmpwi     r29, 0x64
	  blt+      .loc_0x28

	.loc_0xF0:
	  lmw       r27, 0x1C(r1)
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8024E4FC
 * Size:	000110
 */
void Game::Cave::RandItemUnit::isItemSetDone((Game::Cave::MapNode*,
                                              Game::Cave::BaseGen*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  cmplwi    r5, 0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  beq-      .loc_0x54
	  lwz       r3, 0x24(r31)
	  lwz       r3, 0x10(r3)
	  b         .loc_0x48

	.loc_0x30:
	  lwz       r0, 0x1C(r3)
	  cmplw     r0, r5
	  bne-      .loc_0x44
	  li        r3, 0x1
	  b         .loc_0xF8

	.loc_0x44:
	  lwz       r3, 0x4(r3)

	.loc_0x48:
	  cmplwi    r3, 0
	  bne+      .loc_0x30
	  b         .loc_0xF4

	.loc_0x54:
	  lwz       r3, 0xC(r30)
	  li        r4, 0x1
	  bl        -0x19B0
	  cmplw     r31, r3
	  bne-      .loc_0x70
	  li        r3, 0x1
	  b         .loc_0xF8

	.loc_0x70:
	  lwz       r3, 0xC(r30)
	  li        r4, 0x2
	  bl        -0x19CC
	  cmplw     r31, r3
	  bne-      .loc_0x8C
	  li        r3, 0x1
	  b         .loc_0xF8

	.loc_0x8C:
	  lwz       r3, 0x24(r31)
	  lwz       r0, 0x10(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0xA4
	  li        r3, 0x1
	  b         .loc_0xF8

	.loc_0xA4:
	  lwz       r3, 0x1C(r31)
	  lwz       r4, 0x10(r3)
	  b         .loc_0xEC

	.loc_0xB0:
	  lwz       r3, 0x18(r4)
	  lwz       r3, 0x0(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0xE8
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0xE8
	  lwz       r0, 0x20(r3)
	  cmpwi     r0, 0x5
	  beq-      .loc_0xE8
	  cmpwi     r0, 0x6
	  beq-      .loc_0xE8
	  li        r3, 0x1
	  b         .loc_0xF8

	.loc_0xE8:
	  lwz       r4, 0x4(r4)

	.loc_0xEC:
	  cmplwi    r4, 0
	  bne+      .loc_0xB0

	.loc_0xF4:
	  li        r3, 0

	.loc_0xF8:
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
 * Address:	8024E60C
 * Size:	0000E8
 */
void Game::Cave::RandItemUnit::isGroundCapEnemySetDone((Game::Cave::MapNode*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  li        r4, 0x1
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  lwz       r3, 0xC(r3)
	  bl        -0x1A88
	  cmplw     r31, r3
	  bne-      .loc_0x38
	  li        r3, 0x1
	  b         .loc_0xD0

	.loc_0x38:
	  lwz       r3, 0xC(r30)
	  li        r4, 0x2
	  bl        -0x1AA4
	  cmplw     r31, r3
	  bne-      .loc_0x54
	  li        r3, 0x1
	  b         .loc_0xD0

	.loc_0x54:
	  lwz       r3, 0x24(r31)
	  lwz       r0, 0x10(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x6C
	  li        r3, 0x1
	  b         .loc_0xD0

	.loc_0x6C:
	  lwz       r3, 0x1C(r31)
	  lwz       r31, 0x10(r3)
	  b         .loc_0xC4

	.loc_0x78:
	  lwz       r3, 0x18(r31)
	  lwz       r4, 0x0(r3)
	  cmplwi    r4, 0
	  beq-      .loc_0xC0
	  lwz       r0, 0x20(r4)
	  cmpwi     r0, 0x5
	  beq-      .loc_0xC0
	  cmpwi     r0, 0x6
	  beq-      .loc_0xC0
	  lbz       r0, 0x24(r4)
	  cmplwi    r0, 0
	  beq-      .loc_0xB8
	  lwz       r3, 0x8(r30)
	  bl        -0x22C0
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xC0

	.loc_0xB8:
	  li        r3, 0x1
	  b         .loc_0xD0

	.loc_0xC0:
	  lwz       r31, 0x4(r31)

	.loc_0xC4:
	  cmplwi    r31, 0
	  bne+      .loc_0x78
	  li        r3, 0

	.loc_0xD0:
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
 * Address:	8024E6F4
 * Size:	0000D0
 */
void Game::Cave::RandItemUnit::isFallCapEnemySetDone((Game::Cave::MapNode*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  li        r4, 0x1
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  lwz       r3, 0xC(r3)
	  bl        -0x1B70
	  cmplw     r31, r3
	  bne-      .loc_0x38
	  li        r3, 0x1
	  b         .loc_0xB8

	.loc_0x38:
	  lwz       r3, 0xC(r30)
	  li        r4, 0x2
	  bl        -0x1B8C
	  cmplw     r31, r3
	  bne-      .loc_0x54
	  li        r3, 0x1
	  b         .loc_0xB8

	.loc_0x54:
	  lwz       r3, 0x1C(r31)
	  lwz       r31, 0x10(r3)
	  b         .loc_0xAC

	.loc_0x60:
	  lwz       r3, 0x18(r31)
	  lwz       r4, 0x0(r3)
	  cmplwi    r4, 0
	  beq-      .loc_0xA8
	  lwz       r0, 0x20(r4)
	  cmpwi     r0, 0x5
	  beq-      .loc_0xA8
	  cmpwi     r0, 0x6
	  beq-      .loc_0xA8
	  lbz       r0, 0x24(r4)
	  cmplwi    r0, 0
	  bne-      .loc_0xA0
	  lwz       r3, 0x8(r30)
	  bl        -0x2390
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xA8

	.loc_0xA0:
	  li        r3, 0x1
	  b         .loc_0xB8

	.loc_0xA8:
	  lwz       r31, 0x4(r31)

	.loc_0xAC:
	  cmplwi    r31, 0
	  bne+      .loc_0x60
	  li        r3, 0

	.loc_0xB8:
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
 * Address:	8024E7C4
 * Size:	00000C
 */
void Game::Cave::RandItemUnit::setItemDropPositionList((Game::Cave::MapNode**,
                                                        Game::Cave::BaseGen**))
{
	/*
	.loc_0x0:
	  stw       r4, 0x10(r3)
	  stw       r5, 0x14(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8024E7D0
 * Size:	000228
 */
void getItemDropPosition__Q34Game4Cave12RandItemUnitFR10Vector3<float> fi(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x890(r1)
	  mflr      r0
	  stw       r0, 0x894(r1)
	  stfd      f31, 0x880(r1)
	  psq_st    f31,-0x778(r1),0,0
	  stfd      f30, 0x870(r1)
	  psq_st    f30,-0x788(r1),0,0
	  stmw      r24, 0x850(r1)
	  mr        r29, r3
	  lis       r7, 0x8048
	  lwz       r6, 0x8(r3)
	  fmr       f30, f1
	  lwz       r3, 0xC(r3)
	  mr        r30, r4
	  lwz       r4, 0x28(r6)
	  mr        r31, r5
	  lwz       r0, 0x2C(r6)
	  stw       r4, 0x14(r1)
	  addi      r28, r7, 0x4128
	  stw       r0, 0x18(r1)
	  bl        -0x1BF4
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x83C(r1)
	  lfs       f0, -0x3B20(r2)
	  stw       r0, 0x838(r1)
	  lfd       f2, -0x3B18(r2)
	  fsubs     f0, f0, f30
	  lfd       f1, 0x838(r1)
	  lwz       r3, 0xC(r29)
	  fsubs     f1, f1, f2
	  fmuls     f31, f0, f1
	  bl        -0x1C1C
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x844(r1)
	  cmpwi     r31, 0
	  lfd       f1, -0x3B18(r2)
	  stw       r0, 0x840(r1)
	  lfd       f0, 0x840(r1)
	  fsubs     f0, f0, f1
	  fmadds    f0, f30, f0, f31
	  fctiwz    f0, f0
	  stfd      f0, 0x848(r1)
	  lwz       r26, 0x84C(r1)
	  bge-      .loc_0x15C
	  lis       r3, 0x14
	  addi      r31, r1, 0x14
	  subi      r0, r3, 0x7800
	  li        r27, 0
	  stw       r0, 0xC(r1)

	.loc_0xCC:
	  lwz       r3, 0x0(r31)
	  lwz       r25, 0x10(r3)
	  b         .loc_0xF4

	.loc_0xD8:
	  mr        r3, r29
	  mr        r4, r25
	  mr        r6, r26
	  addi      r5, r1, 0x10
	  addi      r7, r1, 0xC
	  bl        0xA44
	  lwz       r25, 0x4(r25)

	.loc_0xF4:
	  cmplwi    r25, 0
	  bne+      .loc_0xD8
	  addi      r27, r27, 0x1
	  addi      r31, r31, 0x4
	  cmpwi     r27, 0x2
	  blt+      .loc_0xCC
	  lwz       r5, 0x10(r1)
	  cmplwi    r5, 0
	  beq-      .loc_0x144
	  mr        r4, r29
	  mr        r6, r26
	  addi      r3, r1, 0x28
	  bl        0xB54
	  lfs       f0, 0x28(r1)
	  stfs      f0, 0x0(r30)
	  lfs       f0, 0x2C(r1)
	  stfs      f0, 0x4(r30)
	  lfs       f0, 0x30(r1)
	  stfs      f0, 0x8(r30)
	  b         .loc_0x204

	.loc_0x144:
	  addi      r3, r28, 0x14
	  addi      r5, r28, 0x28
	  li        r4, 0x177
	  crclr     6, 0x6
	  bl        -0x2242E4
	  b         .loc_0x204

	.loc_0x15C:
	  li        r0, 0
	  addi      r27, r1, 0x14
	  stw       r0, 0x8(r1)
	  li        r25, 0

	.loc_0x16C:
	  lwz       r3, 0x0(r27)
	  lwz       r24, 0x10(r3)
	  b         .loc_0x194

	.loc_0x178:
	  mr        r3, r29
	  mr        r4, r24
	  addi      r5, r1, 0x434
	  addi      r6, r1, 0x34
	  addi      r7, r1, 0x8
	  bl        0xE00
	  lwz       r24, 0x4(r24)

	.loc_0x194:
	  cmplwi    r24, 0
	  bne+      .loc_0x178
	  addi      r25, r25, 0x1
	  addi      r27, r27, 0x4
	  cmpwi     r25, 0x2
	  blt+      .loc_0x16C
	  lwz       r7, 0x8(r1)
	  cmpw      r31, r7
	  bge-      .loc_0x1F0
	  mr        r4, r29
	  mr        r8, r26
	  mr        r9, r31
	  addi      r3, r1, 0x1C
	  addi      r5, r1, 0x434
	  addi      r6, r1, 0x34
	  bl        0xF48
	  lfs       f0, 0x1C(r1)
	  stfs      f0, 0x0(r30)
	  lfs       f0, 0x20(r1)
	  stfs      f0, 0x4(r30)
	  lfs       f0, 0x24(r1)
	  stfs      f0, 0x8(r30)
	  b         .loc_0x204

	.loc_0x1F0:
	  addi      r3, r28, 0x14
	  addi      r5, r28, 0x38
	  li        r4, 0x18E
	  crclr     6, 0x6
	  bl        -0x224390

	.loc_0x204:
	  psq_l     f31,-0x778(r1),0,0
	  lfd       f31, 0x880(r1)
	  psq_l     f30,-0x788(r1),0,0
	  lfd       f30, 0x870(r1)
	  lmw       r24, 0x850(r1)
	  lwz       r0, 0x894(r1)
	  mtlr      r0
	  addi      r1, r1, 0x890
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8024E9F8
 * Size:	00038C
 */
void Game::Cave::RandItemUnit::getItemNormalSetMapNode((Game::Cave::BaseGen**))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x1850(r1)
	  mflr      r0
	  stw       r0, 0x1854(r1)
	  stmw      r21, 0x1824(r1)
	  mr        r22, r3
	  mr        r23, r4
	  li        r27, 0
	  li        r21, 0
	  li        r26, 0
	  lwz       r3, 0x8(r3)
	  lwz       r3, 0x28(r3)
	  lwz       r25, 0x10(r3)
	  b         .loc_0x2C8

	.loc_0x34:
	  lwz       r3, 0x18(r25)
	  bl        -0xBEB8
	  cmpwi     r3, 0x1
	  bne-      .loc_0x1C0
	  mr        r3, r22
	  mr        r4, r25
	  bl        0x800
	  mr.       r31, r3
	  beq-      .loc_0x2C4
	  lwz       r3, 0x18(r25)
	  bl        -0xBE94
	  cmplwi    r3, 0
	  beq-      .loc_0x2C4
	  addi      r30, r1, 0x1008
	  addi      r29, r1, 0x808
	  addi      r28, r1, 0x8
	  lwz       r24, 0x10(r3)
	  add       r30, r30, r21
	  add       r29, r29, r21
	  add       r28, r28, r21
	  b         .loc_0x1B4

	.loc_0x88:
	  lwz       r0, 0x18(r24)
	  cmpwi     r0, 0x2
	  bne-      .loc_0x1B0
	  cmplwi    r24, 0
	  beq-      .loc_0xCC
	  lwz       r3, 0x24(r25)
	  lwz       r3, 0x10(r3)
	  b         .loc_0xC0

	.loc_0xA8:
	  lwz       r0, 0x1C(r3)
	  cmplw     r0, r24
	  bne-      .loc_0xBC
	  li        r0, 0x1
	  b         .loc_0x170

	.loc_0xBC:
	  lwz       r3, 0x4(r3)

	.loc_0xC0:
	  cmplwi    r3, 0
	  bne+      .loc_0xA8
	  b         .loc_0x16C

	.loc_0xCC:
	  lwz       r3, 0xC(r22)
	  li        r4, 0x1
	  bl        -0x1F24
	  cmplw     r25, r3
	  bne-      .loc_0xE8
	  li        r0, 0x1
	  b         .loc_0x170

	.loc_0xE8:
	  lwz       r3, 0xC(r22)
	  li        r4, 0x2
	  bl        -0x1F40
	  cmplw     r25, r3
	  bne-      .loc_0x104
	  li        r0, 0x1
	  b         .loc_0x170

	.loc_0x104:
	  lwz       r3, 0x24(r25)
	  lwz       r0, 0x10(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x11C
	  li        r0, 0x1
	  b         .loc_0x170

	.loc_0x11C:
	  lwz       r3, 0x1C(r25)
	  lwz       r4, 0x10(r3)
	  b         .loc_0x164

	.loc_0x128:
	  lwz       r3, 0x18(r4)
	  lwz       r3, 0x0(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x160
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x160
	  lwz       r0, 0x20(r3)
	  cmpwi     r0, 0x5
	  beq-      .loc_0x160
	  cmpwi     r0, 0x6
	  beq-      .loc_0x160
	  li        r0, 0x1
	  b         .loc_0x170

	.loc_0x160:
	  lwz       r4, 0x4(r4)

	.loc_0x164:
	  cmplwi    r4, 0
	  bne+      .loc_0x128

	.loc_0x16C:
	  li        r0, 0

	.loc_0x170:
	  rlwinm.   r0,r0,0,24,31
	  bne-      .loc_0x1B0
	  stw       r25, 0x0(r30)
	  mr        r3, r25
	  stw       r24, 0x0(r29)
	  bl        -0xB1C8
	  divw      r3, r3, r31
	  addi      r30, r30, 0x4
	  addi      r29, r29, 0x4
	  addi      r27, r27, 0x1
	  addi      r21, r21, 0x4
	  addi      r0, r3, 0x1
	  stw       r0, 0x0(r28)
	  lwz       r0, 0x0(r28)
	  addi      r28, r28, 0x4
	  add       r26, r26, r0

	.loc_0x1B0:
	  lwz       r24, 0x4(r24)

	.loc_0x1B4:
	  cmplwi    r24, 0
	  bne+      .loc_0x88
	  b         .loc_0x2C4

	.loc_0x1C0:
	  mr        r3, r25
	  bl        -0xB1F8
	  subi      r4, r2, 0x3B10
	  li        r5, 0x4
	  bl        -0x184548
	  cmpwi     r3, 0
	  bne-      .loc_0x2C4
	  lwz       r3, 0xC(r22)
	  li        r4, 0x1
	  bl        -0x2034
	  cmplw     r25, r3
	  bne-      .loc_0x1F8
	  li        r0, 0x1
	  b         .loc_0x280

	.loc_0x1F8:
	  lwz       r3, 0xC(r22)
	  li        r4, 0x2
	  bl        -0x2050
	  cmplw     r25, r3
	  bne-      .loc_0x214
	  li        r0, 0x1
	  b         .loc_0x280

	.loc_0x214:
	  lwz       r3, 0x24(r25)
	  lwz       r0, 0x10(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x22C
	  li        r0, 0x1
	  b         .loc_0x280

	.loc_0x22C:
	  lwz       r3, 0x1C(r25)
	  lwz       r4, 0x10(r3)
	  b         .loc_0x274

	.loc_0x238:
	  lwz       r3, 0x18(r4)
	  lwz       r3, 0x0(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x270
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x270
	  lwz       r0, 0x20(r3)
	  cmpwi     r0, 0x5
	  beq-      .loc_0x270
	  cmpwi     r0, 0x6
	  beq-      .loc_0x270
	  li        r0, 0x1
	  b         .loc_0x280

	.loc_0x270:
	  lwz       r4, 0x4(r4)

	.loc_0x274:
	  cmplwi    r4, 0
	  bne+      .loc_0x238
	  li        r0, 0

	.loc_0x280:
	  rlwinm.   r0,r0,0,24,31
	  bne-      .loc_0x2C4
	  addi      r3, r1, 0x1008
	  addi      r4, r1, 0x808
	  li        r0, 0
	  stwx      r25, r3, r21
	  mr        r3, r25
	  stwx      r0, r4, r21
	  bl        -0xB2E4
	  mulli     r3, r3, 0xA
	  addi      r4, r1, 0x8
	  addi      r27, r27, 0x1
	  addi      r0, r3, 0x1
	  stwx      r0, r4, r21
	  lwzx      r0, r4, r21
	  addi      r21, r21, 0x4
	  add       r26, r26, r0

	.loc_0x2C4:
	  lwz       r25, 0x4(r25)

	.loc_0x2C8:
	  cmplwi    r25, 0
	  bne+      .loc_0x34
	  cmpwi     r26, 0
	  beq-      .loc_0x374
	  bl        -0x185730
	  lis       r4, 0x4330
	  xoris     r0, r3, 0x8000
	  stw       r0, 0x180C(r1)
	  xoris     r0, r26, 0x8000
	  lfd       f2, -0x3B18(r2)
	  addi      r5, r1, 0x8
	  stw       r4, 0x1808(r1)
	  li        r6, 0
	  lfs       f0, -0x3B08(r2)
	  li        r7, 0
	  lfd       f1, 0x1808(r1)
	  stw       r0, 0x1814(r1)
	  fsubs     f1, f1, f2
	  stw       r4, 0x1810(r1)
	  fdivs     f1, f1, f0
	  lfd       f0, 0x1810(r1)
	  fsubs     f0, f0, f2
	  fmuls     f0, f0, f1
	  fctiwz    f0, f0
	  stfd      f0, 0x1818(r1)
	  lwz       r3, 0x181C(r1)
	  mtctr     r27
	  cmpwi     r27, 0
	  ble-      .loc_0x374

	.loc_0x33C:
	  lwz       r0, 0x0(r5)
	  add       r6, r6, r0
	  cmpw      r6, r3
	  ble-      .loc_0x368
	  rlwinm    r4,r7,2,0,29
	  addi      r3, r1, 0x808
	  lwzx      r0, r3, r4
	  addi      r3, r1, 0x1008
	  lwzx      r3, r3, r4
	  stw       r0, 0x0(r23)
	  b         .loc_0x378

	.loc_0x368:
	  addi      r5, r5, 0x4
	  addi      r7, r7, 0x1
	  bdnz+     .loc_0x33C

	.loc_0x374:
	  li        r3, 0

	.loc_0x378:
	  lmw       r21, 0x1824(r1)
	  lwz       r0, 0x1854(r1)
	  mtlr      r0
	  addi      r1, r1, 0x1850
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8024ED84
 * Size:	000340
 */
void Game::Cave::RandItemUnit::getItemHardSetMapNode((Game::Cave::BaseGen**))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x1040(r1)
	  mflr      r0
	  stw       r0, 0x1044(r1)
	  stmw      r25, 0x1024(r1)
	  mr        r25, r3
	  mr        r26, r4
	  li        r31, 0
	  li        r30, -0x1
	  lwz       r3, 0x8(r3)
	  lwz       r3, 0x28(r3)
	  lwz       r29, 0x10(r3)
	  b         .loc_0x2B0

	.loc_0x30:
	  lwz       r3, 0x18(r29)
	  bl        -0xC240
	  cmpwi     r3, 0x1
	  bne-      .loc_0x1A8
	  lwz       r3, 0x24(r29)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  addi      r27, r3, 0x1
	  mr        r3, r29
	  bl        -0xB42C
	  divw      r28, r3, r27
	  lwz       r3, 0x18(r29)
	  bl        -0xC22C
	  cmplwi    r3, 0
	  beq-      .loc_0x2AC
	  lwz       r27, 0x10(r3)
	  b         .loc_0x19C

	.loc_0x7C:
	  lwz       r0, 0x18(r27)
	  cmpwi     r0, 0x2
	  bne-      .loc_0x198
	  cmplwi    r27, 0
	  beq-      .loc_0xC0
	  lwz       r3, 0x24(r29)
	  lwz       r3, 0x10(r3)
	  b         .loc_0xB4

	.loc_0x9C:
	  lwz       r0, 0x1C(r3)
	  cmplw     r0, r27
	  bne-      .loc_0xB0
	  li        r0, 0x1
	  b         .loc_0x164

	.loc_0xB0:
	  lwz       r3, 0x4(r3)

	.loc_0xB4:
	  cmplwi    r3, 0
	  bne+      .loc_0x9C
	  b         .loc_0x160

	.loc_0xC0:
	  lwz       r3, 0xC(r25)
	  li        r4, 0x1
	  bl        -0x22A4
	  cmplw     r29, r3
	  bne-      .loc_0xDC
	  li        r0, 0x1
	  b         .loc_0x164

	.loc_0xDC:
	  lwz       r3, 0xC(r25)
	  li        r4, 0x2
	  bl        -0x22C0
	  cmplw     r29, r3
	  bne-      .loc_0xF8
	  li        r0, 0x1
	  b         .loc_0x164

	.loc_0xF8:
	  lwz       r3, 0x24(r29)
	  lwz       r0, 0x10(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x110
	  li        r0, 0x1
	  b         .loc_0x164

	.loc_0x110:
	  lwz       r3, 0x1C(r29)
	  lwz       r4, 0x10(r3)
	  b         .loc_0x158

	.loc_0x11C:
	  lwz       r3, 0x18(r4)
	  lwz       r3, 0x0(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x154
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x154
	  lwz       r0, 0x20(r3)
	  cmpwi     r0, 0x5
	  beq-      .loc_0x154
	  cmpwi     r0, 0x6
	  beq-      .loc_0x154
	  li        r0, 0x1
	  b         .loc_0x164

	.loc_0x154:
	  lwz       r4, 0x4(r4)

	.loc_0x158:
	  cmplwi    r4, 0
	  bne+      .loc_0x11C

	.loc_0x160:
	  li        r0, 0

	.loc_0x164:
	  rlwinm.   r0,r0,0,24,31
	  bne-      .loc_0x198
	  cmpw      r28, r30
	  blt-      .loc_0x198
	  ble-      .loc_0x180
	  li        r31, 0
	  mr        r30, r28

	.loc_0x180:
	  rlwinm    r0,r31,2,0,29
	  addi      r4, r1, 0x808
	  addi      r3, r1, 0x8
	  stwx      r29, r4, r0
	  addi      r31, r31, 0x1
	  stwx      r27, r3, r0

	.loc_0x198:
	  lwz       r27, 0x4(r27)

	.loc_0x19C:
	  cmplwi    r27, 0
	  bne+      .loc_0x7C
	  b         .loc_0x2AC

	.loc_0x1A8:
	  mr        r3, r29
	  bl        -0xB56C
	  subi      r4, r2, 0x3B10
	  li        r5, 0x4
	  bl        -0x1848BC
	  cmpwi     r3, 0
	  bne-      .loc_0x2AC
	  mr        r3, r29
	  bl        -0xB598
	  addi      r27, r3, 0x1
	  lwz       r3, 0xC(r25)
	  li        r4, 0x1
	  bl        -0x23B4
	  cmplw     r29, r3
	  bne-      .loc_0x1EC
	  li        r0, 0x1
	  b         .loc_0x274

	.loc_0x1EC:
	  lwz       r3, 0xC(r25)
	  li        r4, 0x2
	  bl        -0x23D0
	  cmplw     r29, r3
	  bne-      .loc_0x208
	  li        r0, 0x1
	  b         .loc_0x274

	.loc_0x208:
	  lwz       r3, 0x24(r29)
	  lwz       r0, 0x10(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x220
	  li        r0, 0x1
	  b         .loc_0x274

	.loc_0x220:
	  lwz       r3, 0x1C(r29)
	  lwz       r4, 0x10(r3)
	  b         .loc_0x268

	.loc_0x22C:
	  lwz       r3, 0x18(r4)
	  lwz       r3, 0x0(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x264
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x264
	  lwz       r0, 0x20(r3)
	  cmpwi     r0, 0x5
	  beq-      .loc_0x264
	  cmpwi     r0, 0x6
	  beq-      .loc_0x264
	  li        r0, 0x1
	  b         .loc_0x274

	.loc_0x264:
	  lwz       r4, 0x4(r4)

	.loc_0x268:
	  cmplwi    r4, 0
	  bne+      .loc_0x22C
	  li        r0, 0

	.loc_0x274:
	  rlwinm.   r0,r0,0,24,31
	  bne-      .loc_0x2AC
	  cmpw      r27, r30
	  blt-      .loc_0x2AC
	  ble-      .loc_0x290
	  li        r31, 0
	  mr        r30, r27

	.loc_0x290:
	  rlwinm    r5,r31,2,0,29
	  addi      r4, r1, 0x808
	  addi      r3, r1, 0x8
	  li        r0, 0
	  stwx      r29, r4, r5
	  addi      r31, r31, 0x1
	  stwx      r0, r3, r5

	.loc_0x2AC:
	  lwz       r29, 0x4(r29)

	.loc_0x2B0:
	  cmplwi    r29, 0
	  bne+      .loc_0x30
	  cmpwi     r31, 0
	  beq-      .loc_0x328
	  bl        -0x185AA4
	  lis       r5, 0x4330
	  xoris     r0, r3, 0x8000
	  stw       r0, 0x100C(r1)
	  xoris     r0, r31, 0x8000
	  lfd       f2, -0x3B18(r2)
	  addi      r4, r1, 0x8
	  stw       r5, 0x1008(r1)
	  addi      r3, r1, 0x808
	  lfs       f0, -0x3B08(r2)
	  lfd       f1, 0x1008(r1)
	  stw       r0, 0x1014(r1)
	  fsubs     f1, f1, f2
	  stw       r5, 0x1010(r1)
	  fdivs     f1, f1, f0
	  lfd       f0, 0x1010(r1)
	  fsubs     f0, f0, f2
	  fmuls     f0, f0, f1
	  fctiwz    f0, f0
	  stfd      f0, 0x1018(r1)
	  lwz       r0, 0x101C(r1)
	  rlwinm    r5,r0,2,0,29
	  lwzx      r0, r4, r5
	  lwzx      r3, r3, r5
	  stw       r0, 0x0(r26)
	  b         .loc_0x32C

	.loc_0x328:
	  li        r3, 0

	.loc_0x32C:
	  lmw       r25, 0x1024(r1)
	  lwz       r0, 0x1044(r1)
	  mtlr      r0
	  addi      r1, r1, 0x1040
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8024F0C4
 * Size:	000180
 */
void Game::Cave::RandItemUnit::getItemUnit(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x1030(r1)
	  mflr      r0
	  li        r10, 0
	  stw       r0, 0x1034(r1)
	  addi      r6, r1, 0x808
	  stw       r31, 0x102C(r1)
	  addi      r31, r1, 0x8
	  mr        r7, r31
	  stw       r30, 0x1028(r1)
	  li        r30, 0
	  stw       r29, 0x1024(r1)
	  li        r29, 0
	  lwz       r4, 0x8(r3)
	  lwz       r4, 0x24(r4)
	  lwz       r11, 0x10(r4)
	  b         .loc_0xC4

	.loc_0x40:
	  lwz       r9, 0x18(r11)
	  lwz       r5, 0x0(r9)
	  cmplwi    r5, 0
	  beq-      .loc_0xC0
	  lis       r4, 0x6666
	  lwz       r8, 0x1C(r5)
	  addi      r0, r4, 0x6667
	  mulhw     r0, r0, r8
	  srawi     r4, r0, 0x2
	  rlwinm    r5,r4,1,31,31
	  srawi     r0, r0, 0x2
	  add       r4, r4, r5
	  mulli     r5, r4, 0xA
	  rlwinm    r4,r0,1,31,31
	  add       r4, r0, r4
	  sub.      r0, r8, r5
	  beq-      .loc_0xA0
	  stw       r0, 0x0(r7)
	  addi      r30, r30, 0x1
	  lwz       r0, 0x0(r7)
	  addi      r7, r7, 0x4
	  stw       r9, 0x0(r6)
	  addi      r6, r6, 0x4
	  add       r29, r29, r0

	.loc_0xA0:
	  cmpwi     r4, 0
	  beq-      .loc_0xC0
	  lwz       r0, 0x0(r3)
	  add       r10, r10, r4
	  cmpw      r0, r10
	  bge-      .loc_0xC0
	  lwz       r3, 0x18(r11)
	  b         .loc_0x164

	.loc_0xC0:
	  lwz       r11, 0x4(r11)

	.loc_0xC4:
	  cmplwi    r11, 0
	  bne+      .loc_0x40
	  cmpwi     r29, 0
	  beq-      .loc_0x160
	  bl        -0x185BF8
	  lis       r4, 0x4330
	  xoris     r0, r3, 0x8000
	  stw       r0, 0x100C(r1)
	  xoris     r0, r29, 0x8000
	  lfd       f2, -0x3B18(r2)
	  li        r5, 0
	  stw       r4, 0x1008(r1)
	  li        r6, 0
	  lfs       f0, -0x3B08(r2)
	  lfd       f1, 0x1008(r1)
	  stw       r0, 0x1014(r1)
	  fsubs     f1, f1, f2
	  stw       r4, 0x1010(r1)
	  fdivs     f1, f1, f0
	  lfd       f0, 0x1010(r1)
	  fsubs     f0, f0, f2
	  fmuls     f0, f0, f1
	  fctiwz    f0, f0
	  stfd      f0, 0x1018(r1)
	  lwz       r3, 0x101C(r1)
	  mtctr     r30
	  cmpwi     r30, 0
	  ble-      .loc_0x160

	.loc_0x134:
	  lwz       r0, 0x0(r31)
	  add       r5, r5, r0
	  cmpw      r5, r3
	  ble-      .loc_0x154
	  rlwinm    r0,r6,2,0,29
	  addi      r3, r1, 0x808
	  lwzx      r3, r3, r0
	  b         .loc_0x164

	.loc_0x154:
	  addi      r31, r31, 0x4
	  addi      r6, r6, 0x1
	  bdnz+     .loc_0x134

	.loc_0x160:
	  li        r3, 0

	.loc_0x164:
	  lwz       r0, 0x1034(r1)
	  lwz       r31, 0x102C(r1)
	  lwz       r30, 0x1028(r1)
	  lwz       r29, 0x1024(r1)
	  mtlr      r0
	  addi      r1, r1, 0x1030
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8024F244
 * Size:	000060
 */
void Game::Cave::RandItemUnit::getItemSlotNum((Game::Cave::MapNode*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  li        r31, 0
	  lwz       r3, 0x18(r4)
	  bl        -0xC69C
	  cmplwi    r3, 0
	  beq-      .loc_0x48
	  lwz       r3, 0x10(r3)
	  b         .loc_0x40

	.loc_0x2C:
	  lwz       r0, 0x18(r3)
	  cmpwi     r0, 0x2
	  bne-      .loc_0x3C
	  addi      r31, r31, 0x1

	.loc_0x3C:
	  lwz       r3, 0x4(r3)

	.loc_0x40:
	  cmplwi    r3, 0
	  bne+      .loc_0x2C

	.loc_0x48:
	  lwz       r0, 0x14(r1)
	  mr        r3, r31
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8024F2A4
 * Size:	00005C
 */
void Game::Cave::RandItemUnit::isItemSetHard(void)
{
	/*
	.loc_0x0:
	  lwz       r4, 0x8(r3)
	  lwz       r0, 0x4(r4)
	  cmpwi     r0, 0x4
	  beq-      .loc_0x4C
	  bge-      .loc_0x54
	  cmpwi     r0, 0x2
	  bge-      .loc_0x30
	  cmpwi     r0, 0
	  bge-      .loc_0x28
	  b         .loc_0x54

	.loc_0x28:
	  li        r3, 0
	  blr

	.loc_0x30:
	  lwz       r0, 0x0(r3)
	  cmpwi     r0, 0
	  beq-      .loc_0x44
	  li        r3, 0
	  blr

	.loc_0x44:
	  li        r3, 0x1
	  blr

	.loc_0x4C:
	  li        r3, 0x1
	  blr

	.loc_0x54:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8024F300
 * Size:	000148
 */
void Game::Cave::RandItemUnit::getItemDropMapNode((Game::Cave::MapNode*,
                                                   Game::Cave::MapNode**, int,
                                                   int&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stmw      r26, 0x18(r1)
	  mr        r29, r4
	  mr        r30, r5
	  mr        r26, r6
	  mr        r31, r7
	  li        r27, 0
	  lwz       r3, 0x18(r4)
	  bl        -0xC7B0
	  cmpwi     r3, 0x1
	  bne-      .loc_0x3C
	  li        r27, 0x1
	  b         .loc_0xC0

	.loc_0x3C:
	  cmpwi     r3, 0
	  bne-      .loc_0x68
	  mr        r3, r29
	  bl        -0xB984
	  subi      r4, r2, 0x3B10
	  li        r5, 0x4
	  bl        -0x184CD4
	  cmpwi     r3, 0
	  bne-      .loc_0xC0
	  li        r27, 0x1
	  b         .loc_0xC0

	.loc_0x68:
	  cmpwi     r3, 0x2
	  bne-      .loc_0xC0
	  mr        r3, r29
	  bl        -0xB314
	  cmpwi     r3, 0x2
	  bne-      .loc_0xBC
	  mr        r3, r29
	  li        r4, 0x1
	  bl        -0xC360
	  mr        r28, r3
	  mr        r3, r29
	  li        r4, 0
	  bl        -0xC370
	  add       r0, r3, r28
	  rlwinm    r3,r0,1,31,31
	  rlwinm    r0,r0,0,31,31
	  xor       r0, r0, r3
	  sub.      r0, r0, r3
	  bne-      .loc_0xC0
	  li        r27, 0x1
	  b         .loc_0xC0

	.loc_0xBC:
	  li        r27, 0x1

	.loc_0xC0:
	  rlwinm.   r0,r27,0,24,31
	  beq-      .loc_0x134
	  mr        r3, r29
	  bl        -0xBA10
	  sub       r0, r3, r26
	  lwz       r4, 0x0(r31)
	  srawi     r3, r0, 0x1F
	  xor       r0, r3, r0
	  sub       r28, r0, r3
	  cmpw      r28, r4
	  blt-      .loc_0x12C
	  bne-      .loc_0x134
	  bl        -0x185E50
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0xC(r1)
	  lfd       f3, -0x3B18(r2)
	  stw       r0, 0x8(r1)
	  lfs       f2, -0x3B20(r2)
	  lfd       f0, 0x8(r1)
	  lfs       f1, -0x3B08(r2)
	  fsubs     f3, f0, f3
	  lfs       f0, -0x3B04(r2)
	  fmuls     f2, f2, f3
	  fdivs     f1, f2, f1
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x134

	.loc_0x12C:
	  stw       r29, 0x0(r30)
	  stw       r28, 0x0(r31)

	.loc_0x134:
	  lmw       r26, 0x18(r1)
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8024F448
 * Size:	000314
 */
void Game::Cave::RandItemUnit::getItemBaseGenPosition((Game::Cave::MapNode*,
                                                       int))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x330(r1)
	  mflr      r0
	  stw       r0, 0x334(r1)
	  stfd      f31, 0x320(r1)
	  psq_st    f31,0x328(r1),0,0
	  stfd      f30, 0x310(r1)
	  psq_st    f30,0x318(r1),0,0
	  stfd      f29, 0x300(r1)
	  psq_st    f29,0x308(r1),0,0
	  stfd      f28, 0x2F0(r1)
	  psq_st    f28,0x2F8(r1),0,0
	  stmw      r25, 0x2D4(r1)
	  mr        r31, r5
	  mr        r30, r3
	  mr        r26, r4
	  mr        r25, r6
	  mr        r4, r31
	  addi      r3, r1, 0x2C
	  li        r27, 0
	  li        r29, 0
	  li        r5, 0
	  bl        -0xB9C0
	  lfs       f31, 0x2C(r1)
	  lfs       f30, 0x30(r1)
	  lfs       f29, 0x34(r1)
	  lwz       r3, 0x18(r31)
	  bl        -0xC8F0
	  cmplwi    r3, 0
	  beq-      .loc_0xD4
	  lwz       r4, 0x10(r3)
	  addi      r3, r1, 0x38
	  b         .loc_0xCC

	.loc_0x80:
	  lwz       r0, 0x18(r4)
	  cmpwi     r0, 0x2
	  bne-      .loc_0x9C
	  stwx      r4, r3, r29
	  addi      r27, r27, 0x1
	  addi      r29, r29, 0x4
	  b         .loc_0xC8

	.loc_0x9C:
	  cmpwi     r0, 0
	  bne-      .loc_0xB4
	  stwx      r4, r3, r29
	  addi      r27, r27, 0x1
	  addi      r29, r29, 0x4
	  b         .loc_0xC8

	.loc_0xB4:
	  cmpwi     r0, 0x1
	  bne-      .loc_0xC8
	  stwx      r4, r3, r29
	  addi      r27, r27, 0x1
	  addi      r29, r29, 0x4

	.loc_0xC8:
	  lwz       r4, 0x4(r4)

	.loc_0xCC:
	  cmplwi    r4, 0
	  bne+      .loc_0x80

	.loc_0xD4:
	  cmpwi     r27, 0
	  ble-      .loc_0x2D4
	  lis       r4, 0x8012
	  addi      r3, r1, 0x138
	  subi      r4, r4, 0xCB8
	  li        r5, 0
	  li        r6, 0xC
	  li        r7, 0x20
	  bl        -0x18DD00
	  mr        r3, r31
	  bl        -0xBB88
	  sub.      r0, r3, r25
	  ble-      .loc_0x140
	  lwz       r3, 0xC(r26)
	  li        r4, 0x3
	  bl        -0x29A0
	  mr        r29, r3
	  lwz       r3, 0xC(r26)
	  li        r4, 0x3
	  bl        -0x29C0
	  mr        r4, r3
	  mr        r5, r29
	  addi      r3, r1, 0x20
	  bl        -0xBA9C
	  lfs       f30, 0x20(r1)
	  lfs       f28, 0x28(r1)
	  b         .loc_0x174

	.loc_0x140:
	  lwz       r3, 0xC(r26)
	  li        r4, 0x4
	  bl        -0x29D8
	  mr        r29, r3
	  lwz       r3, 0xC(r26)
	  li        r4, 0x4
	  bl        -0x29F8
	  mr        r4, r3
	  mr        r5, r29
	  addi      r3, r1, 0x14
	  bl        -0xBAD4
	  lfs       f30, 0x14(r1)
	  lfs       f28, 0x1C(r1)

	.loc_0x174:
	  fsubs     f0, f28, f29
	  addi      r29, r1, 0x38
	  fsubs     f1, f30, f31
	  addi      r28, r1, 0x138
	  li        r26, 0
	  li        r25, 0
	  fmuls     f0, f0, f0
	  fmadds    f31, f1, f1, f0
	  b         .loc_0x1E8

	.loc_0x198:
	  lwz       r5, 0x0(r29)
	  mr        r4, r31
	  addi      r3, r1, 0x8
	  bl        -0xBB10
	  lfs       f3, 0x10(r1)
	  lfs       f4, 0x8(r1)
	  fsubs     f0, f28, f3
	  lfs       f2, 0xC(r1)
	  fsubs     f1, f30, f4
	  fmuls     f0, f0, f0
	  fmadds    f0, f1, f1, f0
	  fcmpo     cr0, f0, f31
	  bge-      .loc_0x1E0
	  stfs      f4, 0x0(r28)
	  addi      r26, r26, 0x1
	  stfs      f2, 0x4(r28)
	  stfs      f3, 0x8(r28)
	  addi      r28, r28, 0xC

	.loc_0x1E0:
	  addi      r29, r29, 0x4
	  addi      r25, r25, 0x1

	.loc_0x1E8:
	  cmpw      r25, r27
	  blt+      .loc_0x198
	  cmpwi     r26, 0
	  beq-      .loc_0x26C
	  bl        -0x1860A0
	  lis       r4, 0x4330
	  xoris     r0, r3, 0x8000
	  stw       r0, 0x2BC(r1)
	  xoris     r0, r26, 0x8000
	  lfd       f2, -0x3B18(r2)
	  addi      r3, r1, 0x138
	  stw       r4, 0x2B8(r1)
	  lfs       f0, -0x3B08(r2)
	  lfd       f1, 0x2B8(r1)
	  stw       r0, 0x2C4(r1)
	  fsubs     f1, f1, f2
	  stw       r4, 0x2C0(r1)
	  fdivs     f1, f1, f0
	  lfd       f0, 0x2C0(r1)
	  fsubs     f0, f0, f2
	  fmuls     f0, f0, f1
	  fctiwz    f0, f0
	  stfd      f0, 0x2C8(r1)
	  lwz       r0, 0x2CC(r1)
	  mulli     r0, r0, 0xC
	  add       r3, r3, r0
	  lfs       f0, 0x0(r3)
	  stfs      f0, 0x0(r30)
	  lfs       f0, 0x4(r3)
	  stfs      f0, 0x4(r30)
	  lfs       f0, 0x8(r3)
	  stfs      f0, 0x8(r30)
	  b         .loc_0x2E0

	.loc_0x26C:
	  bl        -0x186114
	  xoris     r0, r3, 0x8000
	  lis       r6, 0x4330
	  stw       r0, 0x2CC(r1)
	  xoris     r0, r27, 0x8000
	  lfd       f2, -0x3B18(r2)
	  addi      r5, r1, 0x38
	  stw       r6, 0x2C8(r1)
	  mr        r3, r30
	  lfs       f0, -0x3B08(r2)
	  mr        r4, r31
	  lfd       f1, 0x2C8(r1)
	  stw       r0, 0x2C4(r1)
	  fsubs     f1, f1, f2
	  stw       r6, 0x2C0(r1)
	  fdivs     f1, f1, f0
	  lfd       f0, 0x2C0(r1)
	  fsubs     f0, f0, f2
	  fmuls     f0, f0, f1
	  fctiwz    f0, f0
	  stfd      f0, 0x2B8(r1)
	  lwz       r0, 0x2BC(r1)
	  rlwinm    r0,r0,2,0,29
	  lwzx      r5, r5, r0
	  bl        -0xBC38
	  b         .loc_0x2E0

	.loc_0x2D4:
	  stfs      f31, 0x0(r30)
	  stfs      f30, 0x4(r30)
	  stfs      f29, 0x8(r30)

	.loc_0x2E0:
	  psq_l     f31,0x328(r1),0,0
	  lfd       f31, 0x320(r1)
	  psq_l     f30,0x318(r1),0,0
	  lfd       f30, 0x310(r1)
	  psq_l     f29,0x308(r1),0,0
	  lfd       f29, 0x300(r1)
	  psq_l     f28,0x2F8(r1),0,0
	  lfd       f28, 0x2F0(r1)
	  lmw       r25, 0x2D4(r1)
	  lwz       r0, 0x334(r1)
	  mtlr      r0
	  addi      r1, r1, 0x330
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8024F75C
 * Size:	00018C
 */
void Game::Cave::RandItemUnit::getItemDropList((Game::Cave::MapNode*,
                                                Game::Cave::MapNode**,
                                                Game::Cave::BaseGen**, int&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stmw      r27, 0xC(r1)
	  mr        r28, r4
	  mr        r29, r5
	  mr        r30, r6
	  mr        r31, r7
	  lwz       r3, 0x18(r4)
	  bl        -0xCC08
	  cmpwi     r3, 0x1
	  bne-      .loc_0x88
	  lwz       r3, 0x18(r28)
	  bl        -0xCBD0
	  cmplwi    r3, 0
	  beq-      .loc_0x178
	  lwz       r4, 0x10(r3)
	  b         .loc_0x7C

	.loc_0x48:
	  lwz       r0, 0x18(r4)
	  cmpwi     r0, 0x2
	  bne-      .loc_0x78
	  lwz       r0, 0x0(r31)
	  rlwinm    r0,r0,2,0,29
	  stwx      r28, r29, r0
	  lwz       r0, 0x0(r31)
	  rlwinm    r0,r0,2,0,29
	  stwx      r4, r30, r0
	  lwz       r3, 0x0(r31)
	  addi      r0, r3, 0x1
	  stw       r0, 0x0(r31)

	.loc_0x78:
	  lwz       r4, 0x4(r4)

	.loc_0x7C:
	  cmplwi    r4, 0
	  bne+      .loc_0x48
	  b         .loc_0x178

	.loc_0x88:
	  cmpwi     r3, 0
	  bne-      .loc_0xD8
	  mr        r3, r28
	  bl        -0xBE2C
	  subi      r4, r2, 0x3B10
	  li        r5, 0x4
	  bl        -0x18517C
	  cmpwi     r3, 0
	  bne-      .loc_0x178
	  lwz       r0, 0x0(r31)
	  li        r3, 0
	  rlwinm    r0,r0,2,0,29
	  stwx      r28, r29, r0
	  lwz       r0, 0x0(r31)
	  rlwinm    r0,r0,2,0,29
	  stwx      r3, r30, r0
	  lwz       r3, 0x0(r31)
	  addi      r0, r3, 0x1
	  stw       r0, 0x0(r31)
	  b         .loc_0x178

	.loc_0xD8:
	  cmpwi     r3, 0x2
	  bne-      .loc_0x178
	  mr        r3, r28
	  bl        -0xB7E0
	  cmpwi     r3, 0x2
	  bne-      .loc_0x150
	  mr        r3, r28
	  li        r4, 0x1
	  bl        -0xC82C
	  mr        r27, r3
	  mr        r3, r28
	  li        r4, 0
	  bl        -0xC83C
	  add       r0, r3, r27
	  rlwinm    r3,r0,1,31,31
	  rlwinm    r0,r0,0,31,31
	  xor       r0, r0, r3
	  sub.      r0, r0, r3
	  bne-      .loc_0x178
	  lwz       r0, 0x0(r31)
	  li        r3, 0
	  rlwinm    r0,r0,2,0,29
	  stwx      r28, r29, r0
	  lwz       r0, 0x0(r31)
	  rlwinm    r0,r0,2,0,29
	  stwx      r3, r30, r0
	  lwz       r3, 0x0(r31)
	  addi      r0, r3, 0x1
	  stw       r0, 0x0(r31)
	  b         .loc_0x178

	.loc_0x150:
	  lwz       r0, 0x0(r31)
	  li        r3, 0
	  rlwinm    r0,r0,2,0,29
	  stwx      r28, r29, r0
	  lwz       r0, 0x0(r31)
	  rlwinm    r0,r0,2,0,29
	  stwx      r3, r30, r0
	  lwz       r3, 0x0(r31)
	  addi      r0, r3, 0x1
	  stw       r0, 0x0(r31)

	.loc_0x178:
	  lmw       r27, 0xC(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8024F8E8
 * Size:	0002CC
 */
void Game::Cave::RandItemUnit::getItemBaseGenPosition((Game::Cave::MapNode**,
                                                       Game::Cave::BaseGen**,
                                                       int, int, int))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x260(r1)
	  mflr      r0
	  stw       r0, 0x264(r1)
	  stfd      f31, 0x250(r1)
	  psq_st    f31,0x258(r1),0,0
	  stmw      r17, 0x214(r1)
	  mr        r17, r4
	  mr        r31, r3
	  lwz       r3, 0xC(r4)
	  mr        r18, r5
	  mr        r19, r6
	  mr        r20, r7
	  mr        r21, r8
	  mr        r22, r9
	  li        r4, 0x3
	  bl        -0x2D7C
	  mr        r27, r3
	  lwz       r3, 0xC(r17)
	  li        r4, 0x4
	  bl        -0x2D8C
	  mr        r28, r3
	  lwz       r3, 0xC(r17)
	  li        r4, 0x3
	  bl        -0x2D8C
	  mr        r29, r3
	  lwz       r3, 0xC(r17)
	  li        r4, 0x4
	  bl        -0x2D9C
	  lfs       f31, -0x3B00(r2)
	  mr        r30, r3
	  mr        r26, r18
	  mr        r25, r19
	  addi      r24, r1, 0x8
	  li        r23, 0
	  b         .loc_0x1A8

	.loc_0x8C:
	  lwz       r3, 0x0(r26)
	  lfs       f0, -0x3B00(r2)
	  cmplw     r27, r3
	  bne-      .loc_0xFC
	  lwz       r4, 0x0(r25)
	  lfs       f1, 0x20(r29)
	  lfs       f0, 0x20(r4)
	  lfs       f3, 0x1C(r29)
	  fsubs     f4, f1, f0
	  lfs       f2, 0x1C(r4)
	  lfs       f1, 0x24(r29)
	  lfs       f0, 0x24(r4)
	  fsubs     f3, f3, f2
	  fmuls     f4, f4, f4
	  fsubs     f2, f1, f0
	  lfs       f0, -0x3AFC(r2)
	  fmadds    f1, f3, f3, f4
	  fmuls     f2, f2, f2
	  fadds     f1, f2, f1
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0xF0
	  ble-      .loc_0xF4
	  fsqrte    f0, f1
	  fmuls     f1, f0, f1
	  b         .loc_0xF4

	.loc_0xF0:
	  fmr       f1, f0

	.loc_0xF4:
	  fmr       f0, f1
	  b         .loc_0x160

	.loc_0xFC:
	  cmplw     r28, r3
	  bne-      .loc_0x160
	  lwz       r4, 0x0(r25)
	  lfs       f1, 0x20(r30)
	  lfs       f0, 0x20(r4)
	  lfs       f3, 0x1C(r30)
	  fsubs     f4, f1, f0
	  lfs       f2, 0x1C(r4)
	  lfs       f1, 0x24(r30)
	  lfs       f0, 0x24(r4)
	  fsubs     f3, f3, f2
	  fmuls     f4, f4, f4
	  fsubs     f2, f1, f0
	  lfs       f0, -0x3AFC(r2)
	  fmadds    f1, f3, f3, f4
	  fmuls     f2, f2, f2
	  fadds     f1, f2, f1
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x158
	  ble-      .loc_0x15C
	  fsqrte    f0, f1
	  fmuls     f1, f0, f1
	  b         .loc_0x15C

	.loc_0x158:
	  fmr       f1, f0

	.loc_0x15C:
	  fmr       f0, f1

	.loc_0x160:
	  fcmpo     cr0, f0, f31
	  bge-      .loc_0x180
	  fctiwz    f0, f0
	  stfd      f0, 0x208(r1)
	  lwz       r0, 0x20C(r1)
	  subfic    r0, r0, 0x3200
	  stw       r0, 0x0(r24)
	  b         .loc_0x198

	.loc_0x180:
	  bl        -0xC0AC
	  sub       r0, r3, r21
	  srawi     r3, r0, 0x1F
	  xor       r0, r3, r0
	  sub       r0, r0, r3
	  stw       r0, 0x0(r24)

	.loc_0x198:
	  addi      r26, r26, 0x4
	  addi      r25, r25, 0x4
	  addi      r24, r24, 0x4
	  addi      r23, r23, 0x1

	.loc_0x1A8:
	  cmpw      r23, r20
	  blt+      .loc_0x8C
	  mr        r3, r17
	  mr        r4, r18
	  mr        r5, r19
	  mr        r7, r20
	  addi      r6, r1, 0x8
	  bl        .loc_0x2CC
	  mr        r6, r18
	  mr        r7, r19
	  li        r8, 0
	  b         .loc_0x270

	.loc_0x1D8:
	  li        r9, 0x1
	  li        r5, 0
	  mtctr     r22
	  cmpwi     r22, 0
	  ble-      .loc_0x220

	.loc_0x1EC:
	  lwz       r3, 0x10(r17)
	  lwz       r4, 0x0(r6)
	  lwzx      r0, r3, r5
	  cmplw     r4, r0
	  bne-      .loc_0x218
	  lwz       r3, 0x14(r17)
	  lwz       r4, 0x0(r7)
	  lwzx      r0, r3, r5
	  cmplw     r4, r0
	  bne-      .loc_0x218
	  li        r9, 0

	.loc_0x218:
	  addi      r5, r5, 0x4
	  bdnz+     .loc_0x1EC

	.loc_0x220:
	  rlwinm.   r0,r9,0,24,31
	  beq-      .loc_0x264
	  rlwinm    r5,r8,2,0,29
	  lwz       r4, 0x10(r17)
	  lwzx      r0, r18, r5
	  rlwinm    r6,r22,2,0,29
	  mr        r3, r31
	  stwx      r0, r4, r6
	  lwzx      r0, r19, r5
	  lwz       r4, 0x14(r17)
	  stwx      r0, r4, r6
	  lwz       r4, 0x10(r17)
	  lwz       r5, 0x14(r17)
	  lwzx      r4, r4, r6
	  lwzx      r5, r5, r6
	  bl        -0xC068
	  b         .loc_0x2B0

	.loc_0x264:
	  addi      r6, r6, 0x4
	  addi      r7, r7, 0x4
	  addi      r8, r8, 0x1

	.loc_0x270:
	  cmpw      r8, r20
	  blt+      .loc_0x1D8
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  addi      r3, r3, 0x413C
	  li        r4, 0x3A0
	  addi      r5, r5, 0x4178
	  crclr     6, 0x6
	  bl        -0x225538
	  lis       r3, 0x8051
	  lfsu      f0, 0x41E4(r3)
	  stfs      f0, 0x0(r31)
	  lfs       f0, 0x4(r3)
	  stfs      f0, 0x4(r31)
	  lfs       f0, 0x8(r3)
	  stfs      f0, 0x8(r31)

	.loc_0x2B0:
	  psq_l     f31,0x258(r1),0,0
	  lfd       f31, 0x250(r1)
	  lmw       r17, 0x214(r1)
	  lwz       r0, 0x264(r1)
	  mtlr      r0
	  addi      r1, r1, 0x260
	  blr

	.loc_0x2CC:
	*/
}

/*
 * --INFO--
 * Address:	8024FBB4
 * Size:	000114
 */
void Game::Cave::RandItemUnit::getItemDropSortingList((Game::Cave::MapNode**,
                                                       Game::Cave::BaseGen**,
                                                       int*, int))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  mflr      r0
	  stw       r0, 0x54(r1)
	  stmw      r19, 0x1C(r1)
	  mr        r19, r4
	  mr        r20, r5
	  mr        r21, r6
	  mr        r22, r7
	  mr        r27, r19
	  mr        r28, r21
	  mr        r26, r20
	  subi      r25, r22, 0x1
	  li        r24, 0
	  b         .loc_0xF8

	.loc_0x38:
	  addi      r23, r24, 0x1
	  rlwinm    r0,r23,2,0,29
	  add       r31, r21, r0
	  add       r30, r19, r0
	  add       r29, r20, r0
	  b         .loc_0xE0

	.loc_0x50:
	  lwz       r3, 0x0(r28)
	  lwz       r0, 0x0(r31)
	  cmpw      r3, r0
	  bgt-      .loc_0xA0
	  bne-      .loc_0xD0
	  bl        -0x186678
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0xC(r1)
	  lfd       f3, -0x3B18(r2)
	  stw       r0, 0x8(r1)
	  lfs       f2, -0x3B20(r2)
	  lfd       f0, 0x8(r1)
	  lfs       f1, -0x3B08(r2)
	  fsubs     f3, f0, f3
	  lfs       f0, -0x3B04(r2)
	  fmuls     f2, f2, f3
	  fdivs     f1, f2, f1
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0xD0

	.loc_0xA0:
	  lwz       r3, 0x0(r27)
	  lwz       r4, 0x0(r26)
	  lwz       r5, 0x0(r28)
	  lwz       r0, 0x0(r30)
	  stw       r0, 0x0(r27)
	  lwz       r0, 0x0(r29)
	  stw       r0, 0x0(r26)
	  lwz       r0, 0x0(r31)
	  stw       r0, 0x0(r28)
	  stw       r3, 0x0(r30)
	  stw       r4, 0x0(r29)
	  stw       r5, 0x0(r31)

	.loc_0xD0:
	  addi      r31, r31, 0x4
	  addi      r30, r30, 0x4
	  addi      r29, r29, 0x4
	  addi      r23, r23, 0x1

	.loc_0xE0:
	  cmpw      r23, r22
	  blt+      .loc_0x50
	  addi      r28, r28, 0x4
	  addi      r27, r27, 0x4
	  addi      r26, r26, 0x4
	  addi      r24, r24, 0x1

	.loc_0xF8:
	  cmpw      r24, r25
	  blt+      .loc_0x38
	  lmw       r19, 0x1C(r1)
	  lwz       r0, 0x54(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr
	*/
}
