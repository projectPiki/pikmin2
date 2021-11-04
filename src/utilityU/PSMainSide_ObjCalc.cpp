

/*
 * --INFO--
 * Address:	804728A4
 * Size:	000060
 */
void PSM::ObjCalc_SingleGame::newInstance_SingleGame()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r3, 0xC
	  stw       r0, 0x14(r1)
	  bl        -0x44EA10
	  cmplwi    r3, 0
	  beq-      .loc_0x50
	  lis       r4, 0x804F
	  lis       r5, 0x804F
	  subi      r0, r4, 0xAA4
	  lis       r4, 0x804F
	  stw       r0, 0x0(r3)
	  subi      r6, r5, 0xA98
	  li        r5, 0
	  subi      r0, r4, 0x414
	  stw       r3, -0x6E4C(r13)
	  stw       r6, 0x0(r3)
	  stw       r5, 0x4(r3)
	  stw       r0, 0x0(r3)
	  stb       r5, 0x8(r3)

	.loc_0x50:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80472904
 * Size:	000008
 */
void PSM::ObjCalc_SingleGame::getPlayerNo(PSM::Creature*)
{
	/*
	.loc_0x0:
	  lbz       r3, 0x8(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8047290C
 * Size:	000008
 */
void PSM::ObjCalc_SingleGame::getPlayerNo(Vec&)
{
	/*
	.loc_0x0:
	  lbz       r3, 0x8(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80472914
 * Size:	00005C
 */
void PSM::ObjCalc_2PGame::newInstance_2PGame()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r3, 0x8
	  stw       r0, 0x14(r1)
	  bl        -0x44EA80
	  cmplwi    r3, 0
	  beq-      .loc_0x4C
	  lis       r4, 0x804F
	  lis       r5, 0x804F
	  subi      r0, r4, 0xAA4
	  lis       r4, 0x804F
	  stw       r0, 0x0(r3)
	  subi      r6, r5, 0xA98
	  li        r5, 0
	  subi      r0, r4, 0x430
	  stw       r3, -0x6E4C(r13)
	  stw       r6, 0x0(r3)
	  stw       r5, 0x4(r3)
	  stw       r0, 0x0(r3)

	.loc_0x4C:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80472970
 * Size:	0003BC
 */
void PSM::ObjCalc_2PGame::getPlayerNo(Vec&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x90(r1)
	  mflr      r0
	  stw       r0, 0x94(r1)
	  stw       r31, 0x8C(r1)
	  stw       r30, 0x88(r1)
	  stw       r29, 0x84(r1)
	  mr        r29, r4
	  lwz       r0, 0x4(r3)
	  cmpwi     r0, 0x1
	  beq-      .loc_0x38
	  bge-      .loc_0x380
	  cmpwi     r0, 0
	  bge-      .loc_0x40
	  b         .loc_0x380

	.loc_0x38:
	  li        r3, 0
	  b         .loc_0x3A0

	.loc_0x40:
	  li        r0, 0
	  lwz       r6, 0x2AC8(r2)
	  lwz       r5, 0x2ACC(r2)
	  lis       r4, 0x804B
	  lwz       r3, -0x6D20(r13)
	  subi      r4, r4, 0x434C
	  cmplwi    r0, 0
	  stw       r6, 0x8(r1)
	  li        r30, 0
	  stw       r5, 0xC(r1)
	  stw       r4, 0x64(r1)
	  stw       r0, 0x70(r1)
	  stw       r0, 0x68(r1)
	  stw       r3, 0x6C(r1)
	  bne-      .loc_0x94
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x68(r1)
	  b         .loc_0x11C

	.loc_0x94:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x68(r1)
	  b         .loc_0x100

	.loc_0xAC:
	  lwz       r3, 0x6C(r1)
	  lwz       r4, 0x68(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x70(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x11C
	  lwz       r3, 0x6C(r1)
	  lwz       r4, 0x68(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x68(r1)

	.loc_0x100:
	  lwz       r12, 0x64(r1)
	  addi      r3, r1, 0x64
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0xAC

	.loc_0x11C:
	  addi      r31, r1, 0x8
	  b         .loc_0x340

	.loc_0x124:
	  lwz       r3, 0x6C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  addi      r3, r1, 0x4C
	  lwz       r12, 0x0(r4)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x4C(r1)
	  addic.    r0, r1, 0x58
	  lfs       f1, 0x50(r1)
	  lfs       f0, 0x54(r1)
	  stfs      f2, 0x58(r1)
	  stfs      f1, 0x5C(r1)
	  stfs      f0, 0x60(r1)
	  bne-      .loc_0x18C
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x1E38
	  li        r4, 0x41
	  subi      r5, r5, 0x1E20
	  crclr     6, 0x6
	  bl        -0x4484B8

	.loc_0x18C:
	  cmpwi     r30, 0x2
	  blt-      .loc_0x1B0
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x1E38
	  li        r4, 0x42
	  subi      r5, r5, 0x1E20
	  crclr     6, 0x6
	  bl        -0x4484DC

	.loc_0x1B0:
	  lfs       f0, 0x58(r1)
	  addi      r30, r30, 0x1
	  lfs       f1, 0x5C(r1)
	  stfs      f0, 0x34(r1)
	  lfs       f0, 0x60(r1)
	  stfs      f1, 0x38(r1)
	  lwz       r0, 0x34(r1)
	  lwz       r3, 0x38(r1)
	  stw       r0, 0x40(r1)
	  lfs       f1, 0x0(r29)
	  stfs      f0, 0x3C(r1)
	  lfs       f0, 0x40(r1)
	  lwz       r0, 0x3C(r1)
	  fsubs     f3, f1, f0
	  stw       r3, 0x44(r1)
	  lfs       f2, 0x4(r29)
	  lfs       f0, 0x44(r1)
	  stw       r0, 0x48(r1)
	  fsubs     f2, f2, f0
	  lfs       f1, 0x8(r29)
	  lfs       f0, 0x48(r1)
	  stfs      f3, 0x28(r1)
	  fsubs     f0, f1, f0
	  lwz       r0, 0x70(r1)
	  stfs      f2, 0x2C(r1)
	  lwz       r4, 0x28(r1)
	  cmplwi    r0, 0
	  lwz       r3, 0x2C(r1)
	  stfs      f0, 0x30(r1)
	  stw       r4, 0x10(r1)
	  lwz       r0, 0x30(r1)
	  stw       r3, 0x14(r1)
	  lfs       f1, 0x10(r1)
	  lfs       f0, 0x14(r1)
	  fmuls     f2, f1, f1
	  stw       r0, 0x18(r1)
	  fmuls     f1, f0, f0
	  lfs       f0, 0x18(r1)
	  stfs      f2, 0x10(r1)
	  fmuls     f0, f0, f0
	  stfs      f1, 0x14(r1)
	  lwz       r0, 0x10(r1)
	  lwz       r3, 0x14(r1)
	  stw       r0, 0x1C(r1)
	  stfs      f0, 0x18(r1)
	  lfs       f1, 0x1C(r1)
	  stw       r3, 0x20(r1)
	  lwz       r0, 0x18(r1)
	  lfs       f0, 0x20(r1)
	  stw       r0, 0x24(r1)
	  fadds     f0, f1, f0
	  lfs       f1, 0x24(r1)
	  fadds     f0, f1, f0
	  stfs      f0, 0x0(r31)
	  addi      r31, r31, 0x4
	  bne-      .loc_0x2B0
	  lwz       r3, 0x6C(r1)
	  lwz       r4, 0x68(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x68(r1)
	  b         .loc_0x340

	.loc_0x2B0:
	  lwz       r3, 0x6C(r1)
	  lwz       r4, 0x68(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x68(r1)
	  b         .loc_0x324

	.loc_0x2D0:
	  lwz       r3, 0x6C(r1)
	  lwz       r4, 0x68(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x70(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x340
	  lwz       r3, 0x6C(r1)
	  lwz       r4, 0x68(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x68(r1)

	.loc_0x324:
	  lwz       r12, 0x64(r1)
	  addi      r3, r1, 0x64
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x2D0

	.loc_0x340:
	  lwz       r3, 0x6C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x68(r1)
	  cmplw     r4, r3
	  bne+      .loc_0x124
	  lfs       f1, 0x8(r1)
	  lfs       f0, 0xC(r1)
	  fcmpo     cr0, f1, f0
	  mfcr      r0
	  rlwinm    r0,r0,1,31,31
	  cntlzw    r0, r0
	  rlwinm    r3,r0,27,5,31
	  b         .loc_0x3A0

	.loc_0x380:
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x1E38
	  li        r4, 0x4D
	  subi      r5, r5, 0x1E20
	  crclr     6, 0x6
	  bl        -0x4486C8
	  li        r3, 0

	.loc_0x3A0:
	  lwz       r0, 0x94(r1)
	  lwz       r31, 0x8C(r1)
	  lwz       r30, 0x88(r1)
	  lwz       r29, 0x84(r1)
	  mtlr      r0
	  addi      r1, r1, 0x90
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80472D2C
 * Size:	0000C8
 */
void PSM::ObjCalc_2PGame::getPlayerNo(PSM::Creature*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  mr.       r30, r4
	  lis       r4, 0x804A
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  subi      r31, r4, 0x1E38
	  bne-      .loc_0x40
	  addi      r3, r31, 0
	  addi      r5, r31, 0x18
	  li        r4, 0x57
	  crclr     6, 0x6
	  bl        -0x448728

	.loc_0x40:
	  lwz       r0, 0x4(r29)
	  cmpwi     r0, 0x1
	  beq-      .loc_0x5C
	  bge-      .loc_0x80
	  cmpwi     r0, 0
	  bge-      .loc_0x64
	  b         .loc_0x80

	.loc_0x5C:
	  li        r3, 0
	  b         .loc_0xAC

	.loc_0x64:
	  lwz       r3, 0x2C(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xFC(r12)
	  mtctr     r12
	  bctrl
	  lbz       r3, 0x1(r3)
	  b         .loc_0xAC

	.loc_0x80:
	  addi      r3, r31, 0
	  addi      r5, r31, 0x24
	  li        r4, 0x7D
	  crclr     6, 0x6
	  bl        -0x44877C
	  addi      r3, r31, 0
	  addi      r5, r31, 0x38
	  li        r4, 0x80
	  crclr     6, 0x6
	  bl        -0x448790
	  li        r3, 0

	.loc_0xAC:
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
 * Address:	80472DF4
 * Size:	000074
 */
void PSM::ObjCalc_SingleGame::~ObjCalc_SingleGame()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr.       r31, r3
	  beq-      .loc_0x5C
	  lis       r3, 0x804F
	  subi      r0, r3, 0x414
	  stw       r0, 0x0(r31)
	  beq-      .loc_0x4C
	  lis       r3, 0x804F
	  subi      r0, r3, 0xA98
	  stw       r0, 0x0(r31)
	  beq-      .loc_0x4C
	  lis       r3, 0x804F
	  li        r0, 0
	  subi      r3, r3, 0xAA4
	  stw       r3, 0x0(r31)
	  stw       r0, -0x6E4C(r13)

	.loc_0x4C:
	  extsh.    r0, r4
	  ble-      .loc_0x5C
	  mr        r3, r31
	  bl        -0x44ED98

	.loc_0x5C:
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
 * Address:	80472E68
 * Size:	000074
 */
void PSM::ObjCalc_2PGame::~ObjCalc_2PGame()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr.       r31, r3
	  beq-      .loc_0x5C
	  lis       r3, 0x804F
	  subi      r0, r3, 0x430
	  stw       r0, 0x0(r31)
	  beq-      .loc_0x4C
	  lis       r3, 0x804F
	  subi      r0, r3, 0xA98
	  stw       r0, 0x0(r31)
	  beq-      .loc_0x4C
	  lis       r3, 0x804F
	  li        r0, 0
	  subi      r3, r3, 0xAA4
	  stw       r3, 0x0(r31)
	  stw       r0, -0x6E4C(r13)

	.loc_0x4C:
	  extsh.    r0, r4
	  ble-      .loc_0x5C
	  mr        r3, r31
	  bl        -0x44EE0C

	.loc_0x5C:
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
 * Address:	80472EDC
 * Size:	000008
 */
void PSM::ObjCalc_2PGame::is1PGame()
{
	/*
	.loc_0x0:
	  li        r3, 0
	  blr
	*/
}
