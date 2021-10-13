

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
 * Address:	8034F5E0
 * Size:	000070
 */
void Game::InteractSuckFinish::actEnemy((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x258(r12)
	  mtctr     r12
	  bctrl
	  cmpwi     r3, 0x27
	  beq-      .loc_0x58
	  bge-      .loc_0x40
	  cmpwi     r3, 0x26
	  bge-      .loc_0x48
	  b         .loc_0x58

	.loc_0x40:
	  cmpwi     r3, 0x29
	  bge-      .loc_0x58

	.loc_0x48:
	  mr        r3, r31
	  bl        0x35E8
	  li        r3, 0x1
	  b         .loc_0x5C

	.loc_0x58:
	  li        r3, 0

	.loc_0x5C:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8034F650
 * Size:	000068
 */
void Game::PanModokiBase::Obj::setParameters(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x24CA8C
	  lwz       r4, 0x378(r31)
	  cmplwi    r4, 0
	  beq-      .loc_0x54
	  lwz       r3, 0xC0(r31)
	  lfs       f0, 0x81C(r3)
	  stfs      f0, 0x1F8(r4)
	  stfs      f0, 0x168(r4)
	  stfs      f0, 0x16C(r4)
	  stfs      f0, 0x170(r4)
	  lwz       r4, 0x378(r31)
	  lwz       r3, 0xC0(r31)
	  lwz       r4, 0x114(r4)
	  lfs       f1, 0x81C(r3)
	  lwz       r3, 0x0(r4)
	  bl        -0x217894

	.loc_0x54:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8034F6B8
 * Size:	000120
 */
void birth__Q34Game13PanModokiBase3ObjFR10Vector3<float> f(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  mflr      r0
	  stw       r0, 0x54(r1)
	  stw       r31, 0x4C(r1)
	  stw       r30, 0x48(r1)
	  mr        r30, r3
	  bl        -0x24CCD0
	  lwz       r3, -0x6E20(r13)
	  li        r4, 0x53
	  bl        -0x241A38
	  mr.       r31, r3
	  beq-      .loc_0x108
	  addi      r3, r1, 0x8
	  bl        -0x220AC8
	  lfs       f0, 0x18C(r30)
	  mr        r3, r30
	  stfs      f0, 0x8(r1)
	  lfs       f0, 0x190(r30)
	  stfs      f0, 0xC(r1)
	  lfs       f0, 0x194(r30)
	  stfs      f0, 0x10(r1)
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  stfs      f1, 0x14(r1)
	  mr        r3, r31
	  addi      r4, r1, 0x8
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x70(r12)
	  mtctr     r12
	  bctrl
	  mr.       r31, r3
	  bne-      .loc_0xA4
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  addi      r3, r3, 0xEF8
	  li        r4, 0x59
	  addi      r5, r5, 0xF08
	  crclr     6, 0x6
	  bl        -0x325118

	.loc_0xA4:
	  cmplwi    r31, 0
	  beq-      .loc_0x108
	  mr        r3, r31
	  li        r4, 0
	  bl        -0x2147A4
	  stw       r31, 0x378(r30)
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x258(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x378(r30)
	  bl        0x1D4EC
	  lwz       r3, 0xC0(r30)
	  lwz       r4, 0x378(r30)
	  lfs       f1, 0x81C(r3)
	  stfs      f1, 0x1F8(r4)
	  stfs      f1, 0x168(r4)
	  stfs      f1, 0x16C(r4)
	  stfs      f1, 0x170(r4)
	  lwz       r3, 0x378(r30)
	  lwz       r3, 0x114(r3)
	  lwz       r3, 0x0(r3)
	  bl        -0x2179B0

	.loc_0x108:
	  lwz       r0, 0x54(r1)
	  lwz       r31, 0x4C(r1)
	  lwz       r30, 0x48(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8034F7D8
 * Size:	0001DC
 */
void Game::PanModokiBase::Obj::onInit((Game::CreatureInitArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x24DD94
	  lwz       r0, 0x1E0(r31)
	  mr        r3, r31
	  rlwinm    r0,r0,0,26,24
	  stw       r0, 0x1E0(r31)
	  lwz       r0, 0x1E0(r31)
	  rlwinm    r0,r0,0,29,27
	  stw       r0, 0x1E0(r31)
	  lfs       f0, 0x198(r31)
	  stfs      f0, 0x2BC(r31)
	  lfs       f0, 0x19C(r31)
	  stfs      f0, 0x2C0(r31)
	  lfs       f0, 0x1A0(r31)
	  stfs      f0, 0x2C4(r31)
	  lfs       f0, 0x1FC(r31)
	  stfs      f0, 0x2C8(r31)
	  bl        -0x24DE24
	  li        r3, 0
	  li        r0, 0x1
	  stw       r3, 0x304(r31)
	  addi      r4, r2, 0x134
	  lfs       f0, 0x130(r2)
	  lfs       f1, 0x198(r31)
	  stfs      f1, 0x308(r31)
	  lfs       f1, 0x19C(r31)
	  stfs      f1, 0x30C(r31)
	  lfs       f1, 0x1A0(r31)
	  stfs      f1, 0x310(r31)
	  lfs       f1, 0x190(r31)
	  stfs      f1, 0x334(r31)
	  stw       r3, 0x314(r31)
	  stb       r0, 0x2E4(r31)
	  stb       r3, 0x2F0(r31)
	  stb       r3, 0x2F1(r31)
	  stw       r3, 0x318(r31)
	  sth       r3, 0x2E6(r31)
	  sth       r3, 0x2EA(r31)
	  sth       r3, 0x2E8(r31)
	  stfs      f0, 0x320(r31)
	  stfs      f0, 0x324(r31)
	  stfs      f0, 0x328(r31)
	  stb       r3, 0x31C(r31)
	  lwz       r3, 0x174(r31)
	  bl        0xEF74C
	  stw       r3, 0x2D4(r31)
	  lwz       r0, 0x2D4(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0xF0
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  addi      r3, r3, 0xEF8
	  li        r4, 0x89
	  addi      r5, r5, 0xF08
	  crclr     6, 0x6
	  bl        -0x325284

	.loc_0xF0:
	  lwz       r3, 0x174(r31)
	  addi      r4, r2, 0x13C
	  bl        0xEF714
	  stw       r3, 0x2D8(r31)
	  lwz       r0, 0x2D8(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x128
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  addi      r3, r3, 0xEF8
	  li        r4, 0x8C
	  addi      r5, r5, 0xF08
	  crclr     6, 0x6
	  bl        -0x3252BC

	.loc_0x128:
	  lfs       f0, 0x190(r31)
	  mr        r4, r31
	  li        r5, 0x4
	  li        r6, 0
	  stfs      f0, 0x334(r31)
	  lwz       r3, 0x380(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x300(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x178
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  addi      r3, r3, 0xEF8
	  li        r4, 0x91
	  addi      r5, r5, 0xF08
	  crclr     6, 0x6
	  bl        -0x32530C

	.loc_0x178:
	  lwz       r3, 0x300(r31)
	  addi      r4, r31, 0x18C
	  li        r0, 0
	  stw       r4, 0x10(r3)
	  stw       r0, 0x388(r31)
	  stw       r0, 0x38C(r31)
	  stw       r0, 0x390(r31)
	  stw       r0, 0x394(r31)
	  stw       r0, 0x398(r31)
	  stw       r0, 0x39C(r31)
	  stw       r0, 0x3A0(r31)
	  stw       r0, 0x3A4(r31)
	  stw       r0, 0x3A8(r31)
	  stw       r0, 0x3AC(r31)
	  stw       r0, 0x3B0(r31)
	  stw       r0, 0x3B4(r31)
	  stw       r0, 0x3B8(r31)
	  stw       r0, 0x3BC(r31)
	  stw       r0, 0x3C0(r31)
	  stw       r0, 0x3C4(r31)
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8034F9B4
 * Size:	0002A0
 */
void Game::PanModokiBase::Obj::__ct(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  extsh.    r0, r4
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  stw       r30, 0x8(r1)
	  beq-      .loc_0x40
	  addi      r0, r31, 0x3C8
	  lis       r3, 0x804B
	  stw       r0, 0x17C(r31)
	  subi      r3, r3, 0x5988
	  li        r0, 0
	  stw       r3, 0x3C8(r31)
	  stw       r0, 0x3CC(r31)
	  stw       r0, 0x3D0(r31)

	.loc_0x40:
	  mr        r3, r31
	  li        r4, 0
	  bl        -0x24E65C
	  lis       r3, 0x804E
	  addi      r0, r31, 0x3C8
	  subi      r3, r3, 0x31F0
	  lfs       f0, 0x130(r2)
	  stw       r3, 0x0(r31)
	  addi      r4, r3, 0x1B0
	  addi      r5, r3, 0x310
	  addi      r3, r31, 0x2CC
	  stw       r4, 0x178(r31)
	  lwz       r4, 0x17C(r31)
	  stw       r5, 0x0(r4)
	  lwz       r4, 0x17C(r31)
	  sub       r0, r0, r4
	  stw       r0, 0xC(r4)
	  stfs      f0, 0x2C8(r31)
	  bl        -0x2174F4
	  li        r0, 0
	  addi      r3, r31, 0x2F4
	  stw       r0, 0x2D4(r31)
	  stw       r0, 0x2D8(r31)
	  bl        -0x2256FC
	  li        r0, 0
	  lfs       f1, 0x144(r2)
	  stw       r0, 0x2FC(r31)
	  li        r3, 0x2C
	  lfs       f0, 0x148(r2)
	  stw       r0, 0x300(r31)
	  lfs       f2, 0x14C(r2)
	  stfs      f1, 0x32C(r31)
	  lfs       f1, 0x150(r2)
	  stfs      f0, 0x330(r31)
	  lfs       f0, 0x154(r2)
	  stfs      f2, 0x338(r31)
	  stfs      f1, 0x33C(r31)
	  stfs      f0, 0x340(r31)
	  stw       r0, 0x378(r31)
	  stw       r0, 0x380(r31)
	  stw       r0, 0x384(r31)
	  stw       r0, 0x388(r31)
	  bl        -0x32BBF8
	  mr.       r30, r3
	  beq-      .loc_0x134
	  bl        -0x228134
	  lis       r3, 0x804E
	  lis       r4, 0x804B
	  subi      r0, r3, 0x3A80
	  lis       r3, 0x804F
	  stw       r0, 0x0(r30)
	  subi      r4, r4, 0x4678
	  subi      r3, r3, 0x4200
	  li        r0, 0
	  stw       r4, 0x10(r30)
	  stw       r3, 0x10(r30)
	  stb       r0, 0x28(r30)
	  stw       r0, 0x1C(r30)
	  stw       r0, 0x14(r30)
	  stb       r0, 0x28(r30)
	  stw       r0, 0x20(r30)

	.loc_0x134:
	  stw       r30, 0x184(r31)
	  li        r3, 0x1C
	  bl        -0x32BC4C
	  mr.       r4, r3
	  beq-      .loc_0x168
	  lis       r5, 0x804B
	  lis       r3, 0x804E
	  subi      r0, r5, 0x680
	  li        r5, -0x1
	  stw       r0, 0x0(r4)
	  subi      r0, r3, 0x3AA8
	  stw       r5, 0x18(r4)
	  stw       r0, 0x0(r4)

	.loc_0x168:
	  lwz       r12, 0x0(r31)
	  mr        r3, r31
	  lwz       r12, 0x30C(r12)
	  mtctr     r12
	  bctrl
	  li        r3, 0x10
	  bl        -0x32BC90
	  cmplwi    r3, 0
	  beq-      .loc_0x1F4
	  lis       r4, 0x804B
	  lis       r5, 0x804A
	  subi      r0, r4, 0x5808
	  lis       r4, 0x804E
	  stw       r0, 0x0(r3)
	  subi      r0, r5, 0x1D84
	  addi      r5, r4, 0x698C
	  lis       r4, 0x804B
	  stw       r0, 0x4(r3)
	  addi      r6, r4, 0x2C24
	  lis       r4, 0x804E
	  addi      r0, r5, 0x14
	  stw       r5, 0x0(r3)
	  addi      r4, r4, 0x6DD0
	  li        r8, 0
	  li        r7, 0x26F
	  stw       r0, 0x4(r3)
	  addi      r5, r6, 0x14
	  addi      r0, r4, 0x14
	  stw       r8, 0x8(r3)
	  sth       r7, 0xC(r3)
	  stb       r8, 0xE(r3)
	  stw       r6, 0x0(r3)
	  stw       r5, 0x4(r3)
	  stw       r4, 0x0(r3)
	  stw       r0, 0x4(r3)

	.loc_0x1F4:
	  stw       r3, 0x2FC(r31)
	  li        r3, 0x14
	  bl        -0x32BD0C
	  cmplwi    r3, 0
	  beq-      .loc_0x280
	  lis       r4, 0x804B
	  lis       r5, 0x804A
	  subi      r0, r4, 0x5808
	  lis       r4, 0x804E
	  stw       r0, 0x0(r3)
	  subi      r0, r5, 0x1D84
	  addi      r5, r4, 0x698C
	  lis       r4, 0x804E
	  stw       r0, 0x4(r3)
	  addi      r8, r4, 0x6940
	  lis       r4, 0x804E
	  addi      r0, r5, 0x14
	  stw       r5, 0x0(r3)
	  addi      r4, r4, 0x6D84
	  li        r10, 0
	  li        r9, 0x2B2
	  stw       r0, 0x4(r3)
	  addi      r7, r8, 0x14
	  addi      r6, r31, 0x18C
	  li        r5, 0x270
	  stw       r10, 0x8(r3)
	  addi      r0, r4, 0x14
	  sth       r9, 0xC(r3)
	  stb       r10, 0xE(r3)
	  stw       r8, 0x0(r3)
	  stw       r7, 0x4(r3)
	  stw       r6, 0x10(r3)
	  sth       r5, 0xC(r3)
	  stw       r4, 0x0(r3)
	  stw       r0, 0x4(r3)

	.loc_0x280:
	  stw       r3, 0x300(r31)
	  mr        r3, r31
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
 * Address:	8034FC54
 * Size:	000034
 */
void Game::PanModokiBase::Obj::doUpdate(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r4, r3
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x380(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
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
 * Address:	8034FC88
 * Size:	0000B4
 */
void Game::PanModokiBase::Obj::doAnimation(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  mflr      r0
	  stw       r0, 0x54(r1)
	  stw       r31, 0x4C(r1)
	  mr        r31, r3
	  bl        -0x24CD08
	  lwz       r0, 0x1E0(r31)
	  rlwinm.   r0,r0,0,22,22
	  bne-      .loc_0xA0
	  mr        r3, r31
	  bl        -0x2488BC
	  cmpwi     r3, 0x5
	  beq-      .loc_0x3C
	  cmpwi     r3, 0xA
	  bne-      .loc_0x50

	.loc_0x3C:
	  lwz       r0, 0x230(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x50
	  mr        r3, r31
	  bl        0x380

	.loc_0x50:
	  lwz       r3, 0x38C(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0xA0
	  lwz       r4, 0x378(r31)
	  cmplwi    r4, 0
	  beq-      .loc_0xA0
	  addi      r4, r4, 0x2BC
	  bl        -0x1B024C
	  lfs       f0, 0x158(r2)
	  lis       r3, 0x8051
	  addi      r5, r3, 0x41E4
	  addi      r4, r1, 0x8
	  stfs      f0, 0x8(r1)
	  addi      r3, r1, 0x14
	  stfs      f0, 0xC(r1)
	  stfs      f0, 0x10(r1)
	  bl        0xD8848
	  lwz       r3, 0x38C(r31)
	  addi      r4, r1, 0x14
	  bl        -0x1B0228

	.loc_0xA0:
	  lwz       r0, 0x54(r1)
	  lwz       r31, 0x4C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8034FD3C
 * Size:	000318
 */
void Game::PanModokiBase::Obj::doAnimationStick(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  mflr      r0
	  stw       r0, 0x54(r1)
	  stfd      f31, 0x40(r1)
	  psq_st    f31,0x48(r1),0,0
	  stw       r31, 0x3C(r1)
	  mr        r31, r3
	  bl        0x1EAC
	  cmplwi    r3, 0
	  beq-      .loc_0x2E8
	  lwz       r0, 0xB8(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x2E8
	  addi      r4, r1, 0x20
	  bl        -0x214A34
	  lfs       f2, 0x20(r1)
	  lfs       f1, 0x24(r1)
	  fmuls     f0, f2, f2
	  lfs       f3, 0x28(r1)
	  fmuls     f4, f1, f1
	  lfs       f1, 0x130(r2)
	  fmuls     f3, f3, f3
	  fadds     f0, f0, f4
	  fadds     f0, f3, f0
	  fcmpo     cr0, f0, f1
	  ble-      .loc_0x84
	  fmadds    f0, f2, f2, f4
	  fadds     f3, f3, f0
	  fcmpo     cr0, f3, f1
	  ble-      .loc_0x88
	  fsqrte    f0, f3
	  fmuls     f3, f0, f3
	  b         .loc_0x88

	.loc_0x84:
	  fmr       f3, f1

	.loc_0x88:
	  lfs       f0, 0x130(r2)
	  fcmpo     cr0, f3, f0
	  ble-      .loc_0xC0
	  lfs       f0, 0x154(r2)
	  lfs       f2, 0x20(r1)
	  fdivs     f3, f0, f3
	  lfs       f1, 0x24(r1)
	  lfs       f0, 0x28(r1)
	  fmuls     f2, f2, f3
	  fmuls     f1, f1, f3
	  fmuls     f0, f0, f3
	  stfs      f2, 0x20(r1)
	  stfs      f1, 0x24(r1)
	  stfs      f0, 0x28(r1)

	.loc_0xC0:
	  lfs       f1, 0x1FC(r31)
	  bl        -0x280B4C
	  frsp      f31, f1
	  lfs       f1, 0x1FC(r31)
	  bl        -0x2805F0
	  frsp      f2, f1
	  lfs       f1, 0x130(r2)
	  fmuls     f4, f31, f31
	  stfs      f31, 0x1C(r1)
	  fmuls     f3, f1, f1
	  fmuls     f0, f2, f2
	  stfs      f2, 0x14(r1)
	  fadds     f0, f0, f3
	  stfs      f1, 0x18(r1)
	  fadds     f0, f4, f0
	  fcmpo     cr0, f0, f1
	  ble-      .loc_0x120
	  fmadds    f0, f2, f2, f3
	  fadds     f3, f4, f0
	  fcmpo     cr0, f3, f1
	  ble-      .loc_0x124
	  fsqrte    f0, f3
	  fmuls     f3, f0, f3
	  b         .loc_0x124

	.loc_0x120:
	  fmr       f3, f1

	.loc_0x124:
	  lfs       f0, 0x130(r2)
	  fcmpo     cr0, f3, f0
	  ble-      .loc_0x15C
	  lfs       f0, 0x154(r2)
	  lfs       f2, 0x14(r1)
	  fdivs     f3, f0, f3
	  lfs       f1, 0x18(r1)
	  lfs       f0, 0x1C(r1)
	  fmuls     f2, f2, f3
	  fmuls     f1, f1, f3
	  fmuls     f0, f0, f3
	  stfs      f2, 0x14(r1)
	  stfs      f1, 0x18(r1)
	  stfs      f0, 0x1C(r1)

	.loc_0x15C:
	  addi      r3, r1, 0x20
	  addi      r4, r1, 0x14
	  addi      r5, r1, 0x8
	  bl        -0x264F20
	  lfs       f2, 0x8(r1)
	  lfs       f1, 0xC(r1)
	  fmuls     f0, f2, f2
	  lfs       f3, 0x10(r1)
	  fmuls     f4, f1, f1
	  lfs       f1, 0x130(r2)
	  fmuls     f3, f3, f3
	  fadds     f0, f0, f4
	  fadds     f0, f3, f0
	  fcmpo     cr0, f0, f1
	  ble-      .loc_0x1B4
	  fmadds    f0, f2, f2, f4
	  fadds     f3, f3, f0
	  fcmpo     cr0, f3, f1
	  ble-      .loc_0x1B8
	  fsqrte    f0, f3
	  fmuls     f3, f0, f3
	  b         .loc_0x1B8

	.loc_0x1B4:
	  fmr       f3, f1

	.loc_0x1B8:
	  lfs       f0, 0x130(r2)
	  fcmpo     cr0, f3, f0
	  ble-      .loc_0x1F0
	  lfs       f0, 0x154(r2)
	  lfs       f2, 0x8(r1)
	  fdivs     f3, f0, f3
	  lfs       f1, 0xC(r1)
	  lfs       f0, 0x10(r1)
	  fmuls     f2, f2, f3
	  fmuls     f1, f1, f3
	  fmuls     f0, f0, f3
	  stfs      f2, 0x8(r1)
	  stfs      f1, 0xC(r1)
	  stfs      f0, 0x10(r1)

	.loc_0x1F0:
	  addi      r3, r1, 0x8
	  addi      r4, r1, 0x20
	  addi      r5, r1, 0x14
	  bl        -0x264FB4
	  lfs       f2, 0x14(r1)
	  lfs       f1, 0x18(r1)
	  fmuls     f0, f2, f2
	  lfs       f3, 0x1C(r1)
	  fmuls     f4, f1, f1
	  lfs       f1, 0x130(r2)
	  fmuls     f3, f3, f3
	  fadds     f0, f0, f4
	  fadds     f0, f3, f0
	  fcmpo     cr0, f0, f1
	  ble-      .loc_0x248
	  fmadds    f0, f2, f2, f4
	  fadds     f3, f3, f0
	  fcmpo     cr0, f3, f1
	  ble-      .loc_0x24C
	  fsqrte    f0, f3
	  fmuls     f3, f0, f3
	  b         .loc_0x24C

	.loc_0x248:
	  fmr       f3, f1

	.loc_0x24C:
	  lfs       f0, 0x130(r2)
	  fcmpo     cr0, f3, f0
	  ble-      .loc_0x284
	  lfs       f0, 0x154(r2)
	  lfs       f2, 0x14(r1)
	  fdivs     f3, f0, f3
	  lfs       f1, 0x18(r1)
	  lfs       f0, 0x1C(r1)
	  fmuls     f2, f2, f3
	  fmuls     f1, f1, f3
	  fmuls     f0, f0, f3
	  stfs      f2, 0x14(r1)
	  stfs      f1, 0x18(r1)
	  stfs      f0, 0x1C(r1)

	.loc_0x284:
	  lfs       f0, 0x8(r1)
	  stfs      f0, 0x138(r31)
	  lfs       f0, 0xC(r1)
	  stfs      f0, 0x148(r31)
	  lfs       f0, 0x10(r1)
	  stfs      f0, 0x158(r31)
	  lfs       f0, 0x20(r1)
	  stfs      f0, 0x13C(r31)
	  lfs       f0, 0x24(r1)
	  stfs      f0, 0x14C(r31)
	  lfs       f0, 0x28(r1)
	  stfs      f0, 0x15C(r31)
	  lfs       f0, 0x14(r1)
	  stfs      f0, 0x140(r31)
	  lfs       f0, 0x18(r1)
	  stfs      f0, 0x150(r31)
	  lfs       f0, 0x1C(r1)
	  stfs      f0, 0x160(r31)
	  lfs       f0, 0x18C(r31)
	  stfs      f0, 0x144(r31)
	  lfs       f0, 0x190(r31)
	  stfs      f0, 0x154(r31)
	  lfs       f0, 0x194(r31)
	  stfs      f0, 0x164(r31)
	  b         .loc_0x2FC

	.loc_0x2E8:
	  addi      r3, r31, 0x138
	  addi      r4, r31, 0x168
	  addi      r5, r31, 0x1A4
	  addi      r6, r31, 0x18C
	  bl        0xD82A4

	.loc_0x2FC:
	  psq_l     f31,0x48(r1),0,0
	  lwz       r0, 0x54(r1)
	  lfd       f31, 0x40(r1)
	  lwz       r31, 0x3C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80350054
 * Size:	00027C
 */
void Game::PanModokiBase::Obj::updateCaptureMatrix(void)
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
	  stfd      f29, 0xA0(r1)
	  psq_st    f29,0xA8(r1),0,0
	  stfd      f28, 0x90(r1)
	  psq_st    f28,0x98(r1),0,0
	  stw       r31, 0x8C(r1)
	  stw       r30, 0x88(r1)
	  mr        r30, r3
	  bl        0x1B78
	  lwz       r4, -0x6C18(r13)
	  mr        r31, r3
	  cmplwi    r4, 0
	  beq-      .loc_0x78
	  lwz       r0, 0x44(r4)
	  cmpwi     r0, 0x1
	  bne-      .loc_0x78
	  cmplwi    r31, 0
	  beq-      .loc_0x78
	  mr        r3, r30
	  bl        -0x1B0B44
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x78
	  mr        r3, r30
	  bl        0x1BA4

	.loc_0x78:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x1F4(r12)
	  mtctr     r12
	  bctrl
	  rlwinm    r0,r3,0,24,31
	  cmplwi    r0, 0x1
	  bne-      .loc_0xBC
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0xBC
	  mr        r3, r30
	  bl        0x1B60

	.loc_0xBC:
	  mr        r3, r30
	  bl        0x1AF0
	  cmplwi    r3, 0
	  beq-      .loc_0x244
	  lwz       r3, 0x2D8(r30)
	  bl        0xD977C
	  lfs       f31, 0x0(r3)
	  addi      r4, r1, 0x44
	  lfs       f30, 0x10(r3)
	  lfs       f29, 0x20(r3)
	  mr        r3, r30
	  bl        0x32F0
	  mr        r4, r31
	  addi      r3, r1, 0x20
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r31
	  addi      r3, r1, 0x2C
	  lwz       r12, 0x0(r31)
	  lfs       f28, 0x28(r1)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, 0x4C(r1)
	  lfs       f2, 0x2C(r1)
	  fsubs     f1, f0, f28
	  lfs       f0, 0x44(r1)
	  lfs       f3, 0x130(r2)
	  fsubs     f2, f0, f2
	  fmuls     f0, f1, f1
	  fmadds    f0, f2, f2, f0
	  fcmpo     cr0, f0, f3
	  ble-      .loc_0x1AC
	  mr        r4, r31
	  addi      r3, r1, 0x14
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r31
	  addi      r3, r1, 0x8
	  lwz       r12, 0x0(r31)
	  lfs       f28, 0x1C(r1)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, 0x4C(r1)
	  lfs       f3, 0x8(r1)
	  fsubs     f2, f0, f28
	  lfs       f1, 0x44(r1)
	  lfs       f0, 0x130(r2)
	  fsubs     f3, f1, f3
	  fmuls     f1, f2, f2
	  fmadds    f3, f3, f3, f1
	  fcmpo     cr0, f3, f0
	  ble-      .loc_0x1AC
	  fsqrte    f0, f3
	  fmuls     f3, f0, f3

	.loc_0x1AC:
	  lfs       f1, 0x15C(r2)
	  lfs       f0, 0x32C(r30)
	  lwz       r3, 0x2D8(r30)
	  fmadds    f28, f1, f0, f3
	  bl        0xD9690
	  addi      r4, r30, 0x348
	  bl        -0x265F4C
	  fmuls     f2, f31, f28
	  lfs       f3, 0x354(r30)
	  fmuls     f1, f30, f28
	  mr        r3, r31
	  fmuls     f0, f29, f28
	  addi      r4, r30, 0x348
	  fadds     f2, f3, f2
	  stfs      f2, 0x354(r30)
	  lfs       f2, 0x364(r30)
	  fadds     f1, f2, f1
	  stfs      f1, 0x364(r30)
	  lfs       f1, 0x374(r30)
	  fadds     f0, f1, f0
	  stfs      f0, 0x374(r30)
	  bl        -0x1B07AC
	  lfs       f2, 0x160(r2)
	  lis       r3, 0x8051
	  lfs       f0, 0x2E0(r30)
	  addi      r4, r3, 0x41E4
	  lfs       f1, 0x130(r2)
	  addi      r3, r1, 0x50
	  fsubs     f2, f2, f0
	  lfs       f0, 0x164(r2)
	  stfs      f1, 0x38(r1)
	  addi      r5, r1, 0x38
	  stfs      f2, 0x3C(r1)
	  stfs      f0, 0x40(r1)
	  bl        0xD8600
	  mr        r3, r31
	  addi      r4, r1, 0x50
	  bl        -0x1B0798

	.loc_0x244:
	  psq_l     f31,0xC8(r1),0,0
	  lfd       f31, 0xC0(r1)
	  psq_l     f30,0xB8(r1),0,0
	  lfd       f30, 0xB0(r1)
	  psq_l     f29,0xA8(r1),0,0
	  lfd       f29, 0xA0(r1)
	  psq_l     f28,0x98(r1),0,0
	  lfd       f28, 0x90(r1)
	  lwz       r31, 0x8C(r1)
	  lwz       r0, 0xD4(r1)
	  lwz       r30, 0x88(r1)
	  mtlr      r0
	  addi      r1, r1, 0xD0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803502D0
 * Size:	000004
 */
void Game::PanModokiBase::Obj::doDirectDraw((Graphics&))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803502D4
 * Size:	000020
 */
void Game::PanModokiBase::Obj::doDebugDraw((Graphics&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        -0x24A474
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803502F4
 * Size:	000030
 */
void Game::PanModokiBase::Obj::damageCallBack((Game::Creature*, float,
                                               CollPart*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r0, 0x1E0(r3)
	  rlwinm.   r0,r0,0,22,22
	  beq-      .loc_0x1C
	  bl        -0x24A2A0

	.loc_0x1C:
	  lwz       r0, 0x14(r1)
	  li        r3, 0
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80350324
 * Size:	0001BC
 */
void Game::PanModokiBase::Obj::pressCallBack((Game::Creature*, float,
                                              CollPart*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, 0x130(r2)
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lfs       f1, 0x200(r3)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x30
	  li        r3, 0
	  b         .loc_0x1A8

	.loc_0x30:
	  cmplwi    r4, 0
	  beq-      .loc_0x1A4
	  mr        r3, r4
	  lwz       r12, 0x0(r4)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x1A4
	  lwz       r0, 0x1E0(r31)
	  rlwinm.   r0,r0,0,22,22
	  bne-      .loc_0x19C
	  lwz       r3, 0xC0(r31)
	  lbz       r0, 0x999(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x88
	  mr        r3, r31
	  bl        -0x249098
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x88
	  li        r3, 0
	  b         .loc_0x1A8

	.loc_0x88:
	  mr        r3, r31
	  bl        -0x248FBC
	  cmpwi     r3, 0x4
	  bge-      .loc_0xA8
	  cmpwi     r3, 0x1
	  beq-      .loc_0xBC
	  bge-      .loc_0x12C
	  b         .loc_0x19C

	.loc_0xA8:
	  cmpwi     r3, 0x9
	  bge-      .loc_0x19C
	  cmpwi     r3, 0x7
	  bge-      .loc_0xBC
	  b         .loc_0x19C

	.loc_0xBC:
	  lfs       f0, 0x130(r2)
	  li        r0, 0
	  stfs      f0, 0x1C8(r31)
	  stfs      f0, 0x1CC(r31)
	  stfs      f0, 0x1D0(r31)
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  stb       r0, 0x2F1(r31)
	  lwz       r3, 0xC0(r31)
	  lbz       r0, 0x999(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x104
	  mr        r3, r31
	  bl        -0x24B178
	  li        r0, 0x6
	  stw       r0, 0x344(r31)
	  b         .loc_0x124

	.loc_0x104:
	  lwz       r3, 0x380(r31)
	  mr        r4, r31
	  li        r5, 0x6
	  li        r6, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl

	.loc_0x124:
	  li        r3, 0x1
	  b         .loc_0x1A8

	.loc_0x12C:
	  lfs       f0, 0x130(r2)
	  li        r0, 0
	  stfs      f0, 0x1C8(r31)
	  stfs      f0, 0x1CC(r31)
	  stfs      f0, 0x1D0(r31)
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  stb       r0, 0x2F1(r31)
	  lwz       r3, 0xC0(r31)
	  lbz       r0, 0x999(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x174
	  mr        r3, r31
	  bl        -0x24B1E8
	  li        r0, 0x6
	  stw       r0, 0x344(r31)
	  b         .loc_0x194

	.loc_0x174:
	  lwz       r3, 0x380(r31)
	  mr        r4, r31
	  li        r5, 0x6
	  li        r6, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl

	.loc_0x194:
	  li        r3, 0x1
	  b         .loc_0x1A8

	.loc_0x19C:
	  li        r3, 0
	  b         .loc_0x1A8

	.loc_0x1A4:
	  li        r3, 0

	.loc_0x1A8:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803504E0
 * Size:	00002C
 */
void Game::PanModokiBase::Obj::hipdropCallBack((Game::Creature*, float,
                                                CollPart*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x27C(r12)
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
 * Address:	8035050C
 * Size:	0000AC
 */
void Game::PanModokiBase::Obj::collisionCallback((Game::CollEvent&))
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
	  lwz       r3, 0x0(r4)
	  cmplwi    r3, 0
	  beq-      .loc_0x6C
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x7C(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x6C
	  lwz       r3, 0x0(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x258(r12)
	  mtctr     r12
	  bctrl
	  cmpwi     r3, 0x53
	  bne-      .loc_0x6C
	  lfs       f0, 0x130(r2)
	  stfs      f0, 0x11C(r30)
	  stfs      f0, 0x120(r30)
	  stfs      f0, 0x124(r30)

	.loc_0x6C:
	  lwz       r0, 0x1E0(r30)
	  rlwinm.   r0,r0,0,22,22
	  beq-      .loc_0x88
	  lfs       f0, 0x130(r2)
	  stfs      f0, 0x11C(r30)
	  stfs      f0, 0x120(r30)
	  stfs      f0, 0x124(r30)

	.loc_0x88:
	  mr        r3, r30
	  mr        r4, r31
	  bl        -0x249F8C
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
 * Address:	803505B8
 * Size:	000044
 */
void Game::PanModokiBase::Obj::outWaterCallback(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x24C8A0
	  mr        r3, r31
	  bl        -0x2491E0
	  cmpwi     r3, 0x3
	  bne-      .loc_0x30
	  mr        r3, r31
	  bl        0x31E4

	.loc_0x30:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803505FC
 * Size:	000034
 */
void Game::PanModokiBase::Obj::inWaterCallback((Game::WaterBox*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x24C77C
	  mr        r3, r31
	  bl        0x3234
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80350630
 * Size:	000054
 */
void Game::PanModokiBase::Obj::bounceCallback((Sys::Triangle*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x249250
	  cmpwi     r3, 0x9
	  bne-      .loc_0x40
	  lwz       r3, 0x380(r31)
	  mr        r4, r31
	  li        r5, 0x6
	  li        r6, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl

	.loc_0x40:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80350684
 * Size:	000050
 */
void Game::PanModokiBase::Obj::damageRumble(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r4, 0x3
	  li        r6, 0x2
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  addi      r5, r31, 0x18C
	  lwz       r3, -0x6960(r13)
	  bl        -0xFE46C
	  lwz       r3, -0x6958(r13)
	  addi      r5, r31, 0x18C
	  li        r4, 0xB
	  li        r6, 0x2
	  bl        -0xFCF3C
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803506D4
 * Size:	00021C
 */
void Game::PanModokiBase::Obj::doSimulation((float))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  mflr      r0
	  stw       r0, 0x54(r1)
	  stfd      f31, 0x40(r1)
	  psq_st    f31,0x48(r1),0,0
	  stw       r31, 0x3C(r1)
	  mr        r31, r3
	  fmr       f31, f1
	  bl        -0x1B1180
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x3C
	  lfs       f0, 0x130(r2)
	  stfs      f0, 0x11C(r31)
	  stfs      f0, 0x120(r31)
	  stfs      f0, 0x124(r31)

	.loc_0x3C:
	  lwz       r3, 0x304(r31)
	  subi      r0, r3, 0x1
	  stw       r0, 0x304(r31)
	  lwz       r0, 0x304(r31)
	  cmpwi     r0, 0
	  bge-      .loc_0x5C
	  li        r0, 0
	  stw       r0, 0x304(r31)

	.loc_0x5C:
	  fmr       f1, f31
	  mr        r3, r31
	  bl        -0x24BCE0
	  mr        r3, r31
	  bl        -0x24934C
	  mr        r3, r31
	  bl        -0x24D0A0
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x200
	  mr        r3, r31
	  bl        -0x1B11E4
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x200
	  lwz       r4, 0x1E0(r31)
	  li        r3, 0
	  rlwinm.   r0,r4,0,21,21
	  bne-      .loc_0xA8
	  rlwinm.   r0,r4,0,13,13
	  beq-      .loc_0xAC

	.loc_0xA8:
	  li        r3, 0x1

	.loc_0xAC:
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x200
	  mr        r3, r31
	  bl        0x1478
	  cmplwi    r3, 0
	  beq-      .loc_0x200
	  mr        r3, r31
	  addi      r4, r1, 0x14
	  bl        0x2C8C
	  lfs       f3, 0x1FC(r31)
	  lfs       f0, 0x130(r2)
	  fmr       f1, f3
	  fcmpo     cr0, f3, f0
	  bge-      .loc_0xE8
	  fneg      f1, f3

	.loc_0xE8:
	  lfs       f2, 0x168(r2)
	  lis       r3, 0x8050
	  lfs       f0, 0x130(r2)
	  addi      r4, r3, 0x71A0
	  fmuls     f1, f1, f2
	  fcmpo     cr0, f3, f0
	  fctiwz    f0, f1
	  stfd      f0, 0x20(r1)
	  lwz       r0, 0x24(r1)
	  rlwinm    r0,r0,3,18,28
	  add       r3, r4, r0
	  lfs       f4, 0x4(r3)
	  bge-      .loc_0x140
	  lfs       f0, 0x16C(r2)
	  fmuls     f0, f3, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x28(r1)
	  lwz       r0, 0x2C(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r4, r0
	  fneg      f3, f0
	  b         .loc_0x158

	.loc_0x140:
	  fmuls     f0, f3, f2
	  fctiwz    f0, f0
	  stfd      f0, 0x30(r1)
	  lwz       r0, 0x34(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f3, r4, r0

	.loc_0x158:
	  lfs       f2, 0x32C(r31)
	  addi      r4, r1, 0x8
	  lfs       f1, 0x14(r1)
	  lfs       f0, 0x1C(r1)
	  fnmsubs   f3, f3, f2, f1
	  lfs       f1, 0x18(r1)
	  fnmsubs   f2, f4, f2, f0
	  lfs       f0, 0x144(r2)
	  stfs      f1, 0xC(r1)
	  fadds     f0, f1, f0
	  stfs      f3, 0x14(r1)
	  lwz       r3, -0x6CF8(r13)
	  stfs      f2, 0x1C(r1)
	  stfs      f3, 0x8(r1)
	  stfs      f2, 0x10(r1)
	  stfs      f0, 0xC(r1)
	  lwz       r12, 0x4(r3)
	  lwz       r12, 0x28(r12)
	  mtctr     r12
	  bctrl
	  stfs      f1, 0x334(r31)
	  lwz       r3, 0xC0(r31)
	  lfs       f2, 0x18(r1)
	  lfs       f0, 0x99C(r3)
	  fsubs     f0, f2, f0
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x1C8
	  fmr       f1, f0

	.loc_0x1C8:
	  lfs       f0, 0x334(r31)
	  fcmpo     cr0, f2, f0
	  bge-      .loc_0x1E0
	  fadds     f0, f2, f0
	  lfs       f1, 0x170(r2)
	  fmuls     f1, f1, f0

	.loc_0x1E0:
	  stfs      f1, 0x18(r1)
	  stfs      f1, 0x334(r31)
	  lfs       f0, 0x14(r1)
	  stfs      f0, 0x18C(r31)
	  lfs       f0, 0x18(r1)
	  stfs      f0, 0x190(r31)
	  lfs       f0, 0x1C(r1)
	  stfs      f0, 0x194(r31)

	.loc_0x200:
	  psq_l     f31,0x48(r1),0,0
	  lwz       r0, 0x54(r1)
	  lfd       f31, 0x40(r1)
	  lwz       r31, 0x3C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803508F0
 * Size:	000088
 */
void Game::PanModokiBase::Obj::getShadowParam((Game::ShadowParam&))
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
	  lwz       r3, 0x2D4(r3)
	  bl        0xD8F90
	  lfs       f0, 0xC(r3)
	  lfs       f4, 0x174(r2)
	  stfs      f0, 0x0(r31)
	  lfs       f2, 0x130(r2)
	  lfs       f0, 0x1C(r3)
	  lfs       f1, 0x154(r2)
	  stfs      f0, 0x4(r31)
	  lfs       f0, 0x178(r2)
	  lfs       f3, 0x2C(r3)
	  stfs      f3, 0x8(r31)
	  lfs       f3, 0x190(r30)
	  fadds     f3, f4, f3
	  stfs      f3, 0x4(r31)
	  stfs      f2, 0xC(r31)
	  stfs      f1, 0x10(r31)
	  stfs      f2, 0x14(r31)
	  stfs      f0, 0x18(r31)
	  lfs       f0, 0x330(r30)
	  stfs      f0, 0x1C(r31)
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80350978
 * Size:	000058
 */
void Game::PanModokiBase::Obj::needShadow(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x24957C
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x28
	  li        r3, 0
	  b         .loc_0x44

	.loc_0x28:
	  lwz       r4, 0x1E0(r31)
	  li        r3, 0
	  rlwinm.   r0,r4,0,21,21
	  bne-      .loc_0x44
	  rlwinm.   r0,r4,0,13,13
	  bne-      .loc_0x44
	  li        r3, 0x1

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
 * Address:	803509D0
 * Size:	000028
 */
void Game::PanModokiBase::Obj::startCarcassMotion(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r4, 0x7
	  li        r5, 0
	  stw       r0, 0x14(r1)
	  bl        -0x24B9E0
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803509F8
 * Size:	00008C
 */
void Game::PanModokiBase::Obj::initMouthSlots(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stfd      f31, 0x10(r1)
	  psq_st    f31,0x18(r1),0,0
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  li        r4, 0x1
	  addi      r3, r30, 0x2CC
	  bl        -0x2184C8
	  lwz       r5, 0x174(r30)
	  addi      r3, r30, 0x2CC
	  li        r4, 0
	  addi      r6, r2, 0x13C
	  bl        -0x2183A4
	  lfs       f31, 0x17C(r2)
	  li        r31, 0
	  b         .loc_0x60

	.loc_0x4C:
	  mr        r4, r31
	  addi      r3, r30, 0x2CC
	  bl        -0x2182D4
	  stfs      f31, 0x1C(r3)
	  addi      r31, r31, 0x1

	.loc_0x60:
	  lwz       r0, 0x2CC(r30)
	  cmpw      r31, r0
	  blt+      .loc_0x4C
	  psq_l     f31,0x18(r1),0,0
	  lwz       r0, 0x24(r1)
	  lfd       f31, 0x10(r1)
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80350A84
 * Size:	000044
 */
void Game::PanModokiBase::Obj::onKill((Game::CreatureKillArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x24EBB0
	  mr        r3, r31
	  bl        0x2DDC
	  mr        r3, r31
	  bl        0x25FC
	  mr        r3, r31
	  bl        0x2638
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80350AC8
 * Size:	000050
 */
void Game::PanModokiBase::Obj::doStartMovie(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r3, 0x2FC(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x40(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x300(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x40(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80350B18
 * Size:	000050
 */
void Game::PanModokiBase::Obj::doEndMovie(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r3, 0x2FC(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x44(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x300(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x44(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80350B68
 * Size:	000054
 */
void Game::PanModokiBase::Obj::doStartStoneState(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x24DC88
	  lis       r4, 0x626F
	  lwz       r3, 0x114(r31)
	  addi      r4, r4, 0x6479
	  bl        -0x21AD48
	  lis       r4, 0x7374
	  addi      r3, r3, 0x3C
	  addi      r4, r4, 0x5F5F
	  bl        0xC2868
	  mr        r3, r31
	  bl        0x10C8
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80350BBC
 * Size:	0000AC
 */
void Game::PanModokiBase::Obj::doFinishStoneState(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x24DCC8
	  lis       r4, 0x626F
	  lwz       r3, 0x114(r31)
	  addi      r4, r4, 0x6479
	  bl        -0x21AD9C
	  lis       r4, 0x5F5F
	  addi      r3, r3, 0x3C
	  addi      r4, r4, 0x5F5F
	  bl        0xC2814
	  lwz       r5, 0xC0(r31)
	  mr        r3, r31
	  lfs       f4, 0x180(r2)
	  li        r4, 0
	  lfs       f1, 0x53C(r5)
	  lfs       f2, 0x4C4(r5)
	  lfs       f3, 0x4EC(r5)
	  bl        -0x23DAF4
	  lfs       f0, 0x130(r2)
	  mr        r3, r31
	  stfs      f0, 0x20C(r31)
	  bl        -0x24982C
	  cmpwi     r3, 0x3
	  beq-      .loc_0x78
	  cmpwi     r3, 0x2
	  bne-      .loc_0x98

	.loc_0x78:
	  lwz       r3, 0x380(r31)
	  mr        r4, r31
	  li        r5, 0x7
	  li        r6, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl

	.loc_0x98:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80350C68
 * Size:	000064
 */
void Game::PanModokiBase::Obj::initWalkSmokeEffect(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r4, 0x2
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  addi      r3, r31, 0x2F4
	  bl        -0x226920
	  lwz       r5, 0x174(r31)
	  addi      r3, r31, 0x2F4
	  lfs       f1, 0x174(r2)
	  li        r4, 0
	  addi      r6, r2, 0x184
	  bl        -0x2266BC
	  lwz       r5, 0x174(r31)
	  addi      r3, r31, 0x2F4
	  lfs       f1, 0x174(r2)
	  li        r4, 0x1
	  addi      r6, r2, 0x18C
	  bl        -0x2266D4
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80350CCC
 * Size:	000008
 */
void Game::PanModokiBase::Obj::getWalkSmokeEffectMgr(void)
{
	/*
	.loc_0x0:
	  addi      r3, r3, 0x2F4
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80350CD4
 * Size:	0004B4
 */
void Game::PanModokiBase::Obj::findNextRoutePoint((bool))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x80(r1)
	  mflr      r0
	  stw       r0, 0x84(r1)
	  li        r0, 0
	  stmw      r27, 0x6C(r1)
	  mr        r28, r3
	  lwz       r5, -0x6CF8(r13)
	  lwz       r31, 0x8(r5)
	  stb       r0, 0x31C(r3)
	  lwz       r0, 0x304(r3)
	  cmpwi     r0, 0
	  ble-      .loc_0x2F0
	  rlwinm.   r0,r4,0,24,31
	  beq-      .loc_0x2F0
	  lha       r0, 0x2EA(r28)
	  lha       r3, 0x2E8(r28)
	  cmpw      r0, r3
	  bne-      .loc_0x70
	  lha       r0, 0x2E6(r28)
	  cmpw      r3, r0
	  bne-      .loc_0x70
	  lfs       f0, 0x198(r28)
	  stfs      f0, 0x2BC(r28)
	  lfs       f0, 0x19C(r28)
	  stfs      f0, 0x2C0(r28)
	  lfs       f0, 0x1A0(r28)
	  stfs      f0, 0x2C4(r28)
	  b         .loc_0x4A0

	.loc_0x70:
	  li        r5, 0
	  li        r0, -0x1
	  stw       r5, 0x40(r1)
	  mr        r3, r31
	  addi      r4, r1, 0x24
	  stw       r5, 0x3C(r1)
	  stb       r5, 0x30(r1)
	  sth       r0, 0x38(r1)
	  stw       r5, 0x34(r1)
	  lfs       f0, 0x18C(r28)
	  stfs      f0, 0x24(r1)
	  lfs       f0, 0x190(r28)
	  stfs      f0, 0x28(r1)
	  lfs       f0, 0x194(r28)
	  stfs      f0, 0x2C(r1)
	  bl        -0x1DDA14
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x2F0
	  lwz       r4, 0x3C(r1)
	  lha       r30, 0x2E8(r28)
	  lbz       r0, 0x34(r4)
	  lha       r29, 0x2EA(r28)
	  rlwinm.   r0,r0,0,31,31
	  bne-      .loc_0x178
	  mr        r3, r31
	  lha       r4, 0x36(r4)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  lha       r0, 0x38(r3)
	  cmpwi     r0, 0x1
	  bne-      .loc_0x11C
	  lwz       r3, 0x40(r1)
	  lbz       r0, 0x34(r3)
	  rlwinm.   r0,r0,0,31,31
	  bne-      .loc_0x11C
	  lha       r0, 0x2E8(r28)
	  sth       r0, 0x2EA(r28)
	  lwz       r3, 0x40(r1)
	  lha       r0, 0x36(r3)
	  sth       r0, 0x2E8(r28)
	  b         .loc_0x1D0

	.loc_0x11C:
	  lwz       r4, 0x3C(r1)
	  mr        r3, r31
	  lha       r0, 0x36(r4)
	  sth       r0, 0x2E8(r28)
	  lwz       r12, 0x0(r31)
	  lwz       r4, 0x40(r1)
	  lwz       r12, 0x2C(r12)
	  lha       r4, 0x36(r4)
	  mtctr     r12
	  bctrl
	  lha       r0, 0x38(r3)
	  cmpwi     r0, 0x1
	  ble-      .loc_0x16C
	  lwz       r3, 0x40(r1)
	  lbz       r0, 0x34(r3)
	  rlwinm.   r0,r0,0,31,31
	  bne-      .loc_0x16C
	  lha       r0, 0x36(r3)
	  sth       r0, 0x2EA(r28)
	  b         .loc_0x1D0

	.loc_0x16C:
	  lha       r0, 0x2E8(r28)
	  sth       r0, 0x2EA(r28)
	  b         .loc_0x1D0

	.loc_0x178:
	  lwz       r4, 0x40(r1)
	  mr        r3, r31
	  lha       r0, 0x36(r4)
	  sth       r0, 0x2E8(r28)
	  lwz       r12, 0x0(r31)
	  lwz       r4, 0x3C(r1)
	  lwz       r12, 0x2C(r12)
	  lha       r4, 0x36(r4)
	  mtctr     r12
	  bctrl
	  lha       r0, 0x38(r3)
	  cmpwi     r0, 0x1
	  ble-      .loc_0x1C8
	  lwz       r3, 0x3C(r1)
	  lbz       r0, 0x34(r3)
	  rlwinm.   r0,r0,0,31,31
	  bne-      .loc_0x1C8
	  lha       r0, 0x36(r3)
	  sth       r0, 0x2EA(r28)
	  b         .loc_0x1D0

	.loc_0x1C8:
	  lha       r0, 0x2E8(r28)
	  sth       r0, 0x2EA(r28)

	.loc_0x1D0:
	  lha       r4, 0x2E8(r28)
	  cmpw      r4, r30
	  bne-      .loc_0x2C0
	  lha       r0, 0x2EA(r28)
	  cmpw      r0, r29
	  bne-      .loc_0x2C0
	  lfs       f1, 0x18C(r28)
	  lfs       f0, 0x130(r2)
	  stfs      f1, 0x2BC(r28)
	  lfs       f3, 0x194(r2)
	  lfs       f1, 0x190(r28)
	  stfs      f1, 0x2C0(r28)
	  lfs       f1, 0x194(r28)
	  stfs      f1, 0x2C4(r28)
	  lfs       f1, 0x1FC(r28)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x240
	  lfs       f0, 0x16C(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fmuls     f0, f1, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x48(r1)
	  lwz       r0, 0x4C(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r3, r0
	  fneg      f2, f0
	  b         .loc_0x264

	.loc_0x240:
	  lfs       f0, 0x168(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fmuls     f0, f1, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x50(r1)
	  lwz       r0, 0x54(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f2, r3, r0

	.loc_0x264:
	  lfs       f1, 0x2BC(r28)
	  lfs       f0, 0x130(r2)
	  fnmsubs   f1, f3, f2, f1
	  stfs      f1, 0x2BC(r28)
	  lfs       f1, 0x1FC(r28)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x284
	  fneg      f1, f1

	.loc_0x284:
	  lfs       f0, 0x168(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  lfs       f2, 0x194(r2)
	  fmuls     f1, f1, f0
	  lfs       f0, 0x2C4(r28)
	  fctiwz    f1, f1
	  stfd      f1, 0x58(r1)
	  lwz       r0, 0x5C(r1)
	  rlwinm    r0,r0,3,18,28
	  add       r3, r3, r0
	  lfs       f1, 0x4(r3)
	  fnmsubs   f0, f2, f1, f0
	  stfs      f0, 0x2C4(r28)
	  b         .loc_0x4A0

	.loc_0x2C0:
	  lwz       r12, 0x0(r31)
	  mr        r3, r31
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  lfs       f1, 0x50(r3)
	  lfs       f2, 0x54(r3)
	  lfs       f0, 0x4C(r3)
	  stfs      f0, 0x2BC(r28)
	  stfs      f1, 0x2C0(r28)
	  stfs      f2, 0x2C4(r28)
	  b         .loc_0x4A0

	.loc_0x2F0:
	  mr        r3, r31
	  lha       r4, 0x2E8(r28)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  mr.       r29, r3
	  bne-      .loc_0x32C
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  addi      r3, r3, 0xEF8
	  li        r4, 0x3E1
	  addi      r5, r5, 0xF08
	  crclr     6, 0x6
	  bl        -0x3269BC

	.loc_0x32C:
	  mr        r4, r29
	  addi      r3, r1, 0x8
	  li        r30, 0
	  li        r5, 0x1
	  bl        -0x1DEAF0
	  addi      r3, r1, 0x8
	  bl        -0x1DEAE4
	  addi      r29, r1, 0x14
	  b         .loc_0x3B4

	.loc_0x350:
	  addi      r3, r1, 0x8
	  bl        -0x1DEA64
	  mr        r0, r3
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  mr        r27, r0
	  mr        r4, r27
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  cmplwi    r3, 0
	  beq-      .loc_0x3AC
	  lbz       r0, 0x34(r3)
	  rlwinm.   r0,r0,0,31,31
	  bne-      .loc_0x3AC
	  lha       r4, 0x5C(r3)
	  lha       r0, 0x38(r3)
	  add       r0, r4, r0
	  cmpwi     r0, 0x1
	  ble-      .loc_0x3AC
	  sth       r27, 0x0(r29)
	  addi      r29, r29, 0x2
	  addi      r30, r30, 0x1

	.loc_0x3AC:
	  addi      r3, r1, 0x8
	  bl        -0x1DEB28

	.loc_0x3B4:
	  addi      r3, r1, 0x8
	  bl        -0x1DEB04
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x350
	  cmpwi     r30, 0
	  beq-      .loc_0x468
	  bl        -0x287B00
	  lis       r4, 0x4330
	  xoris     r0, r3, 0x8000
	  stw       r0, 0x5C(r1)
	  xoris     r0, r30, 0x8000
	  lfd       f2, 0x1A0(r2)
	  stw       r4, 0x58(r1)
	  lfs       f0, 0x198(r2)
	  lfd       f1, 0x58(r1)
	  stw       r0, 0x54(r1)
	  fsubs     f1, f1, f2
	  stw       r4, 0x50(r1)
	  fdivs     f1, f1, f0
	  lfd       f0, 0x50(r1)
	  fsubs     f0, f0, f2
	  fmuls     f0, f0, f1
	  fctiwz    f0, f0
	  stfd      f0, 0x48(r1)
	  lwz       r0, 0x4C(r1)
	  cmpw      r0, r30
	  blt-      .loc_0x424
	  subi      r0, r30, 0x1

	.loc_0x424:
	  mr        r3, r31
	  rlwinm    r0,r0,1,0,30
	  lwz       r12, 0x0(r31)
	  addi      r4, r1, 0x14
	  lhax      r27, r4, r0
	  lwz       r12, 0x2C(r12)
	  mr        r4, r27
	  mtctr     r12
	  bctrl
	  cmpwi     r30, 0x1
	  beq-      .loc_0x45C
	  lha       r0, 0x2EA(r28)
	  cmpw      r27, r0
	  beq-      .loc_0x468

	.loc_0x45C:
	  lha       r0, 0x2E8(r28)
	  sth       r0, 0x2EA(r28)
	  sth       r27, 0x2E8(r28)

	.loc_0x468:
	  mr        r3, r31
	  lha       r4, 0x2E8(r28)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  cmplwi    r3, 0
	  beq-      .loc_0x4A0
	  lfs       f1, 0x50(r3)
	  lfs       f2, 0x54(r3)
	  lfs       f0, 0x4C(r3)
	  stfs      f0, 0x2BC(r28)
	  stfs      f1, 0x2C0(r28)
	  stfs      f2, 0x2C4(r28)

	.loc_0x4A0:
	  lmw       r27, 0x6C(r1)
	  lwz       r0, 0x84(r1)
	  mtlr      r0
	  addi      r1, r1, 0x80
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80351188
 * Size:	000274
 */
void Game::PanModokiBase::Obj::isCarryToGoal(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x90(r1)
	  mflr      r0
	  stw       r0, 0x94(r1)
	  stfd      f31, 0x80(r1)
	  psq_st    f31,0x88(r1),0,0
	  stfd      f30, 0x70(r1)
	  psq_st    f30,0x78(r1),0,0
	  stfd      f29, 0x60(r1)
	  psq_st    f29,0x68(r1),0,0
	  stfd      f28, 0x50(r1)
	  psq_st    f28,0x58(r1),0,0
	  stfd      f27, 0x40(r1)
	  psq_st    f27,0x48(r1),0,0
	  stfd      f26, 0x30(r1)
	  psq_st    f26,0x38(r1),0,0
	  stw       r31, 0x2C(r1)
	  stw       r30, 0x28(r1)
	  mr        r30, r3
	  lbz       r0, 0x2F0(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x5C
	  li        r3, 0
	  b         .loc_0x22C

	.loc_0x5C:
	  lwz       r0, 0x318(r30)
	  lwz       r3, 0xC0(r30)
	  cmpwi     r0, 0x64
	  lfs       f5, 0x384(r3)
	  ble-      .loc_0x74
	  lfs       f5, 0x1A8(r2)

	.loc_0x74:
	  lfs       f4, 0x194(r30)
	  fmuls     f5, f5, f5
	  lfs       f0, 0x1A0(r30)
	  lfs       f3, 0x18C(r30)
	  fsubs     f1, f4, f0
	  lfs       f0, 0x198(r30)
	  fsubs     f2, f3, f0
	  fmuls     f0, f1, f1
	  fmadds    f0, f2, f2, f0
	  fcmpo     cr0, f0, f5
	  bge-      .loc_0xB0
	  mr        r3, r30
	  bl        0x1E78
	  li        r3, 0x1
	  b         .loc_0x22C

	.loc_0xB0:
	  cmpwi     r0, 0x64
	  lfs       f26, 0x17C(r2)
	  lfs       f31, 0x178(r2)
	  ble-      .loc_0xC8
	  lfs       f26, 0x1A8(r2)
	  lfs       f31, 0x1AC(r2)

	.loc_0xC8:
	  lfs       f0, 0x2C4(r30)
	  fmuls     f26, f26, f26
	  lfs       f1, 0x2BC(r30)
	  fmuls     f31, f31, f31
	  fsubs     f0, f4, f0
	  mr        r3, r30
	  fsubs     f1, f3, f1
	  fmuls     f0, f0, f0
	  fmadds    f27, f1, f1, f0
	  bl        0x990
	  mr.       r31, r3
	  lfs       f1, 0x1B0(r2)
	  beq-      .loc_0x14C
	  mr        r4, r31
	  addi      r3, r1, 0x8
	  lwz       r12, 0x0(r31)
	  lfs       f28, 0x2C4(r30)
	  lwz       r12, 0x8(r12)
	  lfs       f29, 0x2BC(r30)
	  mtctr     r12
	  bctrl
	  mr        r4, r31
	  addi      r3, r1, 0x14
	  lwz       r12, 0x0(r31)
	  lfs       f30, 0x10(r1)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  fsubs     f0, f30, f28
	  lfs       f1, 0x14(r1)
	  fsubs     f1, f1, f29
	  fmuls     f0, f0, f0
	  fmadds    f1, f1, f1, f0

	.loc_0x14C:
	  fcmpo     cr0, f27, f26
	  blt-      .loc_0x168
	  lfs       f0, 0x130(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x228
	  fcmpo     cr0, f1, f31
	  bge-      .loc_0x228

	.loc_0x168:
	  li        r0, 0
	  stw       r0, 0x318(r30)
	  lha       r3, 0x2E8(r30)
	  lha       r0, 0x2E6(r30)
	  cmpw      r3, r0
	  bne-      .loc_0x1A8
	  lfs       f0, 0x198(r30)
	  fcmpo     cr0, f1, f31
	  stfs      f0, 0x2BC(r30)
	  lfs       f0, 0x19C(r30)
	  stfs      f0, 0x2C0(r30)
	  lfs       f0, 0x1A0(r30)
	  stfs      f0, 0x2C4(r30)
	  bge-      .loc_0x228
	  li        r3, 0x1
	  b         .loc_0x22C

	.loc_0x1A8:
	  lwz       r4, 0x384(r30)
	  b         .loc_0x220

	.loc_0x1B0:
	  lha       r0, 0x20(r4)
	  cmpw      r0, r3
	  bne-      .loc_0x21C
	  sth       r3, 0x2EA(r30)
	  lwz       r3, 0xC(r4)
	  cmplwi    r3, 0
	  beq-      .loc_0x1D8
	  lha       r0, 0x20(r3)
	  sth       r0, 0x2E8(r30)
	  b         .loc_0x1E0

	.loc_0x1D8:
	  lha       r0, 0x2E6(r30)
	  sth       r0, 0x2E8(r30)

	.loc_0x1E0:
	  lwz       r3, -0x6CF8(r13)
	  lha       r4, 0x2E8(r30)
	  lwz       r3, 0x8(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  lfs       f1, 0x50(r3)
	  lfs       f2, 0x54(r3)
	  lfs       f0, 0x4C(r3)
	  li        r3, 0
	  stfs      f0, 0x2BC(r30)
	  stfs      f1, 0x2C0(r30)
	  stfs      f2, 0x2C4(r30)
	  b         .loc_0x22C

	.loc_0x21C:
	  lwz       r4, 0xC(r4)

	.loc_0x220:
	  cmplwi    r4, 0
	  bne+      .loc_0x1B0

	.loc_0x228:
	  li        r3, 0

	.loc_0x22C:
	  psq_l     f31,0x88(r1),0,0
	  lfd       f31, 0x80(r1)
	  psq_l     f30,0x78(r1),0,0
	  lfd       f30, 0x70(r1)
	  psq_l     f29,0x68(r1),0,0
	  lfd       f29, 0x60(r1)
	  psq_l     f28,0x58(r1),0,0
	  lfd       f28, 0x50(r1)
	  psq_l     f27,0x48(r1),0,0
	  lfd       f27, 0x40(r1)
	  psq_l     f26,0x38(r1),0,0
	  lfd       f26, 0x30(r1)
	  lwz       r31, 0x2C(r1)
	  lwz       r0, 0x94(r1)
	  lwz       r30, 0x28(r1)
	  mtlr      r0
	  addi      r1, r1, 0x90
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803513FC
 * Size:	0002CC
 */
void Game::PanModokiBase::Obj::walkFunc(void)
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
	  stfd      f29, 0x30(r1)
	  psq_st    f29,0x38(r1),0,0
	  stfd      f28, 0x20(r1)
	  psq_st    f28,0x28(r1),0,0
	  stw       r31, 0x1C(r1)
	  lwz       r12, 0x0(r3)
	  mr        r31, r3
	  lwz       r4, 0xC0(r3)
	  lwz       r12, 0x258(r12)
	  lfs       f31, 0x2E4(r4)
	  lfs       f30, 0x334(r4)
	  lfs       f29, 0x30C(r4)
	  lfs       f28, 0x194(r2)
	  mtctr     r12
	  bctrl
	  cmpwi     r3, 0x28
	  bne-      .loc_0x64
	  lfs       f28, 0x1B4(r2)

	.loc_0x64:
	  lfs       f1, 0x2BC(r31)
	  lfs       f0, 0x18C(r31)
	  fsubs     f0, f1, f0
	  fabs      f0, f0
	  frsp      f0, f0
	  fcmpo     cr0, f0, f28
	  bge-      .loc_0xD0
	  lfs       f1, 0x2C4(r31)
	  lfs       f0, 0x194(r31)
	  fsubs     f0, f1, f0
	  fabs      f0, f0
	  frsp      f0, f0
	  fcmpo     cr0, f0, f28
	  bge-      .loc_0xD0
	  lwz       r3, 0x318(r31)
	  addi      r0, r3, 0x1
	  stw       r0, 0x318(r31)
	  lwz       r0, 0x318(r31)
	  cmpwi     r0, 0x64
	  ble-      .loc_0xBC
	  lfs       f0, 0x170(r2)
	  fmuls     f31, f31, f0

	.loc_0xBC:
	  cmpwi     r0, 0xC8
	  ble-      .loc_0xD8
	  li        r0, 0
	  stw       r0, 0x318(r31)
	  b         .loc_0xD8

	.loc_0xD0:
	  li        r0, 0
	  stw       r0, 0x318(r31)

	.loc_0xD8:
	  lwz       r0, 0x304(r31)
	  cmpwi     r0, 0
	  bne-      .loc_0x12C
	  mr        r3, r31
	  bl        0x3DC
	  stw       r3, 0x230(r31)
	  lwz       r4, 0x230(r31)
	  cmplwi    r4, 0
	  beq-      .loc_0x138
	  lwz       r12, 0x0(r4)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, 0x8(r1)
	  stfs      f0, 0x2BC(r31)
	  lfs       f0, 0xC(r1)
	  stfs      f0, 0x2C0(r31)
	  lfs       f0, 0x10(r1)
	  stfs      f0, 0x2C4(r31)
	  b         .loc_0x138

	.loc_0x12C:
	  lwz       r3, 0xC0(r31)
	  lfs       f30, 0x894(r3)
	  lfs       f29, 0x86C(r3)

	.loc_0x138:
	  fmr       f1, f31
	  mr        r3, r31
	  fmr       f2, f29
	  addi      r4, r31, 0x2BC
	  fmr       f3, f30
	  bl        -0x23BF6C
	  lwz       r0, 0xC8(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x20C
	  lfs       f1, 0xCC(r31)
	  lfs       f0, 0x158(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x17C
	  lfs       f0, 0x1B8(r2)
	  fneg      f0, f0
	  stfs      f0, 0x320(r31)
	  b         .loc_0x1A4

	.loc_0x17C:
	  lfs       f0, 0x1BC(r2)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x194
	  lfs       f0, 0x1B8(r2)
	  stfs      f0, 0x320(r31)
	  b         .loc_0x1A4

	.loc_0x194:
	  lfs       f1, 0x320(r31)
	  lfs       f0, 0x1C0(r2)
	  fmuls     f0, f1, f0
	  stfs      f0, 0x320(r31)

	.loc_0x1A4:
	  lfs       f2, 0x1C8(r31)
	  lfs       f1, 0x320(r31)
	  lfs       f0, 0x158(r2)
	  fadds     f1, f2, f1
	  stfs      f1, 0x1C8(r31)
	  lfs       f1, 0xD4(r31)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x1D4
	  lfs       f0, 0x1B8(r2)
	  fneg      f0, f0
	  stfs      f0, 0x328(r31)
	  b         .loc_0x1FC

	.loc_0x1D4:
	  lfs       f0, 0x1BC(r2)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x1EC
	  lfs       f0, 0x1B8(r2)
	  stfs      f0, 0x328(r31)
	  b         .loc_0x1FC

	.loc_0x1EC:
	  lfs       f1, 0x328(r31)
	  lfs       f0, 0x1C0(r2)
	  fmuls     f0, f1, f0
	  stfs      f0, 0x328(r31)

	.loc_0x1FC:
	  lfs       f1, 0x1D0(r31)
	  lfs       f0, 0x328(r31)
	  fadds     f0, f1, f0
	  stfs      f0, 0x1D0(r31)

	.loc_0x20C:
	  lwz       r0, 0x304(r31)
	  cmpwi     r0, 0
	  bne-      .loc_0x298
	  lwz       r3, 0x314(r31)
	  addi      r0, r3, 0x1
	  stw       r0, 0x314(r31)
	  lwz       r0, 0x314(r31)
	  cmpwi     r0, 0x3C
	  ble-      .loc_0x298
	  lfs       f1, 0x194(r31)
	  lfs       f0, 0x310(r31)
	  lfs       f2, 0x18C(r31)
	  fsubs     f3, f1, f0
	  lfs       f1, 0x308(r31)
	  lfs       f0, 0x194(r2)
	  fsubs     f2, f2, f1
	  fmuls     f1, f3, f3
	  fmadds    f1, f2, f2, f1
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x278
	  li        r3, 0x78
	  li        r0, 0
	  stw       r3, 0x304(r31)
	  mr        r3, r31
	  li        r4, 0x1
	  stw       r0, 0x230(r31)
	  bl        -0x99C

	.loc_0x278:
	  lfs       f0, 0x18C(r31)
	  li        r0, 0
	  stfs      f0, 0x308(r31)
	  lfs       f0, 0x190(r31)
	  stfs      f0, 0x30C(r31)
	  lfs       f0, 0x194(r31)
	  stfs      f0, 0x310(r31)
	  stw       r0, 0x314(r31)

	.loc_0x298:
	  psq_l     f31,0x58(r1),0,0
	  lfd       f31, 0x50(r1)
	  psq_l     f30,0x48(r1),0,0
	  lfd       f30, 0x40(r1)
	  psq_l     f29,0x38(r1),0,0
	  lfd       f29, 0x30(r1)
	  psq_l     f28,0x28(r1),0,0
	  lfd       f28, 0x20(r1)
	  lwz       r0, 0x64(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x60
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803516C8
 * Size:	000184
 */
void Game::PanModokiBase::Obj::isReachToGoal((float))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  mflr      r0
	  stw       r0, 0x54(r1)
	  stfd      f31, 0x40(r1)
	  psq_st    f31,0x48(r1),0,0
	  stfd      f30, 0x30(r1)
	  psq_st    f30,0x38(r1),0,0
	  stw       r31, 0x2C(r1)
	  stw       r30, 0x28(r1)
	  mr        r30, r3
	  lfs       f0, 0x130(r2)
	  lfs       f2, 0x200(r3)
	  fmr       f30, f1
	  fcmpo     cr0, f2, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x48
	  li        r3, 0
	  b         .loc_0x15C

	.loc_0x48:
	  lwz       r31, 0x230(r30)
	  cmplwi    r31, 0
	  beq-      .loc_0x84
	  bne-      .loc_0x74
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  addi      r3, r3, 0xEF8
	  li        r4, 0x4B0
	  addi      r5, r5, 0xF08
	  crclr     6, 0x6
	  bl        -0x3270F8

	.loc_0x74:
	  lwz       r3, 0x35C(r31)
	  lfs       f0, 0xA0(r3)
	  fadds     f30, f30, f0
	  b         .loc_0x8C

	.loc_0x84:
	  lfs       f0, 0x174(r2)
	  fmuls     f30, f30, f0

	.loc_0x8C:
	  lfs       f1, 0x194(r30)
	  fmuls     f30, f30, f30
	  lfs       f0, 0x2C4(r30)
	  lfs       f2, 0x18C(r30)
	  fsubs     f1, f1, f0
	  lfs       f0, 0x2BC(r30)
	  fsubs     f2, f2, f0
	  fmuls     f0, f1, f1
	  fmadds    f0, f2, f2, f0
	  fcmpo     cr0, f0, f30
	  bge-      .loc_0x158
	  mr        r3, r30
	  bl        -0x24A390
	  cmpwi     r3, 0x1
	  bne-      .loc_0x148
	  lwz       r4, 0x230(r30)
	  cmplwi    r4, 0
	  beq-      .loc_0x148
	  lwz       r12, 0x0(r4)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x230(r30)
	  addi      r3, r1, 0x14
	  lfs       f31, 0x10(r1)
	  lwz       r12, 0x0(r4)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, 0x194(r30)
	  lfs       f2, 0x14(r1)
	  fsubs     f1, f0, f31
	  lfs       f0, 0x18C(r30)
	  fsubs     f2, f0, f2
	  fmuls     f0, f1, f1
	  fmadds    f0, f2, f2, f0
	  fcmpo     cr0, f0, f30
	  bge-      .loc_0x148
	  lwz       r3, 0x380(r30)
	  mr        r4, r30
	  li        r5, 0x8
	  li        r6, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl

	.loc_0x148:
	  li        r0, 0
	  li        r3, 0x1
	  stw       r0, 0x318(r30)
	  b         .loc_0x15C

	.loc_0x158:
	  li        r3, 0

	.loc_0x15C:
	  psq_l     f31,0x48(r1),0,0
	  lfd       f31, 0x40(r1)
	  psq_l     f30,0x38(r1),0,0
	  lfd       f30, 0x30(r1)
	  lwz       r31, 0x2C(r1)
	  lwz       r0, 0x54(r1)
	  lwz       r30, 0x28(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8035184C
 * Size:	000074
 */
void Game::PanModokiBase::Obj::canBack(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        0x3A4
	  cmplwi    r3, 0
	  bne-      .loc_0x28
	  li        r3, 0
	  b         .loc_0x60

	.loc_0x28:
	  mr        r3, r31
	  bl        0x38C
	  lwz       r3, 0x334(r3)
	  li        r4, 0x2
	  lfs       f1, 0x37C(r31)
	  bl        -0x11C8B4
	  mr        r0, r3
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  mr        r31, r0
	  lwz       r12, 0x258(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31

	.loc_0x60:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803518C0
 * Size:	000344
 */
void Game::PanModokiBase::Obj::findNearestPellet(void)
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
	  stfd      f29, 0x70(r1)
	  psq_st    f29,0x78(r1),0,0
	  stw       r31, 0x6C(r1)
	  stw       r30, 0x68(r1)
	  stw       r29, 0x64(r1)
	  stw       r28, 0x60(r1)
	  mr        r30, r3
	  lfs       f1, 0x1C4(r2)
	  lwz       r3, 0xC0(r3)
	  li        r31, 0
	  lfs       f2, 0x164(r2)
	  lfs       f0, 0x49C(r3)
	  lfs       f3, 0x44C(r3)
	  fmuls     f1, f1, f0
	  lfs       f0, 0x130(r2)
	  fcmpo     cr0, f3, f0
	  fmuls     f30, f2, f1
	  bge-      .loc_0x70
	  lis       r3, 0x8051
	  lfs       f3, 0x48D8(r3)
	  b         .loc_0x74

	.loc_0x70:
	  fmuls     f3, f3, f3

	.loc_0x74:
	  fmr       f31, f3
	  addi      r3, r1, 0x50
	  bl        -0x1E4FD4
	  addi      r3, r1, 0x50
	  bl        -0x1E4FC4
	  b         .loc_0x2F8

	.loc_0x8C:
	  addi      r3, r1, 0x50
	  bl        -0x1E4F84
	  lwz       r12, 0x0(r3)
	  mr        r28, r3
	  lwz       r12, 0x1E4(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x2F0
	  mr        r3, r28
	  lwz       r12, 0x0(r28)
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x2F0
	  mr        r3, r28
	  lwz       r12, 0x0(r28)
	  lwz       r12, 0x1F4(r12)
	  mtctr     r12
	  bctrl
	  rlwinm    r0,r3,0,24,31
	  cmplwi    r0, 0x4
	  beq-      .loc_0x2F0
	  lwz       r0, 0xB8(r28)
	  cmplwi    r0, 0
	  bne-      .loc_0x2F0
	  mr        r3, r30
	  mr        r4, r28
	  bl        0x1748
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x2F0
	  mr        r3, r30
	  lwz       r4, 0x35C(r28)
	  lwz       r12, 0x0(r30)
	  lwz       r5, 0xC0(r30)
	  lwz       r12, 0x308(r12)
	  lwz       r4, 0x120(r4)
	  lwz       r5, 0x984(r5)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x2F0
	  mr        r4, r28
	  addi      r3, r1, 0x44
	  lwz       r12, 0x0(r28)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f29, 0x48(r1)
	  mr        r3, r28
	  bl        -0x1EB044
	  lfs       f0, 0x170(r2)
	  lfs       f2, 0x190(r30)
	  fnmsubs   f1, f0, f1, f29
	  lfs       f0, 0x1B8(r2)
	  fsubs     f1, f1, f2
	  fabs      f1, f1
	  frsp      f1, f1
	  fcmpo     cr0, f1, f0
	  bgt-      .loc_0x2F0
	  mr        r4, r28
	  addi      r3, r1, 0x20
	  lwz       r12, 0x0(r28)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r30
	  lfs       f2, 0x20(r1)
	  lwz       r12, 0x0(r30)
	  addi      r3, r1, 0x2C
	  lfs       f1, 0x24(r1)
	  lfs       f0, 0x28(r1)
	  lwz       r12, 0x8(r12)
	  stfs      f2, 0x8(r1)
	  stfs      f1, 0xC(r1)
	  stfs      f0, 0x10(r1)
	  mtctr     r12
	  bctrl
	  lfs       f5, 0x2C(r1)
	  lis       r3, 0x8051
	  lfs       f3, 0x34(r1)
	  subi      r3, r3, 0x2E20
	  lfs       f1, 0x8(r1)
	  lfs       f0, 0x10(r1)
	  lfs       f4, 0x30(r1)
	  fsubs     f1, f1, f5
	  fsubs     f2, f0, f3
	  stfs      f5, 0x14(r1)
	  stfs      f4, 0x18(r1)
	  stfs      f3, 0x1C(r1)
	  bl        -0x31C9B0
	  bl        0xC0114
	  lwz       r12, 0x0(r30)
	  fmr       f29, f1
	  mr        r3, r30
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fmr       f2, f1
	  fmr       f1, f29
	  bl        0xC011C
	  fabs      f0, f1
	  frsp      f0, f0
	  fcmpo     cr0, f0, f30
	  cror      2, 0, 0x2
	  bne-      .loc_0x2F0
	  mr        r3, r28
	  lwz       r12, 0x0(r28)
	  lwz       r12, 0x1AC(r12)
	  mtctr     r12
	  bctrl
	  mr        r29, r3
	  mr        r3, r28
	  lwz       r12, 0x0(r28)
	  lwz       r12, 0x1F4(r12)
	  mtctr     r12
	  bctrl
	  rlwinm    r0,r3,0,24,31
	  cmplwi    r0, 0x1
	  bne-      .loc_0x2A8
	  cmpwi     r29, 0
	  beq-      .loc_0x280
	  cmpwi     r29, 0x1
	  bne-      .loc_0x2A8

	.loc_0x280:
	  mr        r3, r28
	  lwz       r12, 0x0(r28)
	  lwz       r12, 0x1A8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  addi      r3, r2, 0x1C8
	  bl        -0x28749C
	  cmpwi     r3, 0
	  beq-      .loc_0x2F0

	.loc_0x2A8:
	  mr        r4, r28
	  addi      r3, r1, 0x38
	  lwz       r12, 0x0(r28)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f1, 0x194(r30)
	  lfs       f0, 0x40(r1)
	  lfs       f2, 0x18C(r30)
	  fsubs     f1, f1, f0
	  lfs       f0, 0x38(r1)
	  fsubs     f2, f2, f0
	  fmuls     f0, f1, f1
	  fmadds    f0, f2, f2, f0
	  fcmpo     cr0, f0, f31
	  bge-      .loc_0x2F0
	  mr        r31, r28
	  fmr       f31, f0

	.loc_0x2F0:
	  addi      r3, r1, 0x50
	  bl        -0x1E5180

	.loc_0x2F8:
	  addi      r3, r1, 0x50
	  bl        -0x1E50C8
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x8C
	  mr        r3, r31
	  psq_l     f31,0x98(r1),0,0
	  lfd       f31, 0x90(r1)
	  psq_l     f30,0x88(r1),0,0
	  lfd       f30, 0x80(r1)
	  psq_l     f29,0x78(r1),0,0
	  lfd       f29, 0x70(r1)
	  lwz       r31, 0x6C(r1)
	  lwz       r30, 0x68(r1)
	  lwz       r29, 0x64(r1)
	  lwz       r0, 0xA4(r1)
	  lwz       r28, 0x60(r1)
	  mtlr      r0
	  addi      r1, r1, 0xA0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80351C04
 * Size:	000068
 */
void Game::PanModokiBase::Obj::getCarryTarget(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r3, 0x230(r3)
	  cmplwi    r3, 0
	  bne-      .loc_0x28
	  li        r3, 0
	  b         .loc_0x54

	.loc_0x28:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x7C(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x50
	  lwz       r3, 0x230(r31)
	  lwz       r3, 0x17C(r3)
	  lwz       r3, 0x4(r3)
	  b         .loc_0x54

	.loc_0x50:
	  lwz       r3, 0x230(r31)

	.loc_0x54:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80351C6C
 * Size:	0001E4
 */
void Game::PanModokiBase::Obj::releaseCarryTarget(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  mflr      r0
	  stw       r0, 0x54(r1)
	  stw       r31, 0x4C(r1)
	  stw       r30, 0x48(r1)
	  mr        r30, r3
	  lwz       r3, 0x230(r3)
	  cmplwi    r3, 0
	  bne-      .loc_0x2C
	  li        r31, 0
	  b         .loc_0x58

	.loc_0x2C:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x7C(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x54
	  lwz       r3, 0x230(r30)
	  lwz       r3, 0x17C(r3)
	  lwz       r31, 0x4(r3)
	  b         .loc_0x58

	.loc_0x54:
	  lwz       r31, 0x230(r30)

	.loc_0x58:
	  cmplwi    r31, 0
	  beq-      .loc_0x1C4
	  mr        r3, r30
	  bl        -0x24A8DC
	  cmpwi     r3, 0x2
	  bne-      .loc_0xCC
	  mr        r4, r31
	  addi      r3, r1, 0x8
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x6C(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, 0x8(r1)
	  mr        r3, r31
	  lfs       f2, 0x10(r1)
	  addi      r4, r1, 0x20
	  fneg      f1, f0
	  stfs      f0, 0x20(r1)
	  lfs       f3, 0xC(r1)
	  fneg      f0, f2
	  stfs      f2, 0x28(r1)
	  stfs      f3, 0x24(r1)
	  stfs      f1, 0x20(r1)
	  stfs      f0, 0x28(r1)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x68(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x1B0

	.loc_0xCC:
	  lwz       r0, 0xB8(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x1B0
	  mr        r3, r31
	  bl        -0x1B21AC
	  lfs       f3, 0x1FC(r30)
	  lfs       f0, 0x130(r2)
	  fmr       f1, f3
	  fcmpo     cr0, f3, f0
	  bge-      .loc_0xF8
	  fneg      f1, f3

	.loc_0xF8:
	  lfs       f2, 0x168(r2)
	  lis       r3, 0x8050
	  lfs       f0, 0x130(r2)
	  addi      r4, r3, 0x71A0
	  fmuls     f1, f1, f2
	  fcmpo     cr0, f3, f0
	  fctiwz    f0, f1
	  stfd      f0, 0x30(r1)
	  lwz       r0, 0x34(r1)
	  rlwinm    r0,r0,3,18,28
	  add       r3, r4, r0
	  lfs       f5, 0x4(r3)
	  bge-      .loc_0x150
	  lfs       f0, 0x16C(r2)
	  fmuls     f0, f3, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x38(r1)
	  lwz       r0, 0x3C(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r4, r0
	  fneg      f4, f0
	  b         .loc_0x168

	.loc_0x150:
	  fmuls     f0, f3, f2
	  fctiwz    f0, f0
	  stfd      f0, 0x40(r1)
	  lwz       r0, 0x44(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f4, r4, r0

	.loc_0x168:
	  frsp      f2, f4
	  lfs       f1, 0x178(r2)
	  lfs       f3, 0x130(r2)
	  mr        r3, r31
	  fmuls     f0, f5, f1
	  stfs      f5, 0x1C(r1)
	  fmuls     f2, f2, f1
	  stfs      f4, 0x14(r1)
	  lfs       f1, 0x194(r2)
	  addi      r4, r1, 0x14
	  stfs      f3, 0x18(r1)
	  stfs      f2, 0x14(r1)
	  stfs      f1, 0x18(r1)
	  stfs      f0, 0x1C(r1)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x68(r12)
	  mtctr     r12
	  bctrl

	.loc_0x1B0:
	  mr        r3, r30
	  bl        -0x1B29FC
	  lwz       r3, 0x334(r31)
	  li        r4, 0x2
	  bl        -0x11CE24

	.loc_0x1C4:
	  li        r0, 0
	  stw       r0, 0x230(r30)
	  lwz       r0, 0x54(r1)
	  lwz       r31, 0x4C(r1)
	  lwz       r30, 0x48(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80351E50
 * Size:	000284
 */
void Game::PanModokiBase::Obj::checkNearHomeGraphIndex(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x80(r1)
	  mflr      r0
	  stw       r0, 0x84(r1)
	  stfd      f31, 0x70(r1)
	  psq_st    f31,0x78(r1),0,0
	  stw       r31, 0x6C(r1)
	  stw       r30, 0x68(r1)
	  stw       r29, 0x64(r1)
	  mr        r30, r3
	  lfs       f0, 0x1B8(r2)
	  lfs       f1, 0x18C(r3)
	  li        r0, 0
	  lwz       r3, -0x6CF8(r13)
	  addi      r4, r1, 0x40
	  stfs      f1, 0x40(r1)
	  lfs       f1, 0x190(r30)
	  stfs      f1, 0x44(r1)
	  lfs       f1, 0x194(r30)
	  stfs      f1, 0x48(r1)
	  stw       r0, 0x4C(r1)
	  stb       r0, 0x50(r1)
	  stfs      f0, 0x54(r1)
	  lwz       r31, 0x8(r3)
	  mr        r3, r31
	  bl        -0x1DEEEC
	  mr.       r29, r3
	  bne-      .loc_0x88
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  addi      r3, r3, 0xEF8
	  li        r4, 0x559
	  addi      r5, r5, 0xF08
	  crclr     6, 0x6
	  bl        -0x327894

	.loc_0x88:
	  lha       r0, 0x36(r29)
	  mr        r3, r31
	  sth       r0, 0x2E6(r30)
	  sth       r0, 0x2EA(r30)
	  sth       r0, 0x2E8(r30)
	  lwz       r12, 0x0(r31)
	  lha       r4, 0x2E8(r30)
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  mr.       r29, r3
	  bne-      .loc_0xD4
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  addi      r3, r3, 0xEF8
	  li        r4, 0x55E
	  addi      r5, r5, 0xF08
	  crclr     6, 0x6
	  bl        -0x3278E0

	.loc_0xD4:
	  lfs       f1, 0x50(r29)
	  li        r5, 0
	  lfs       f2, 0x54(r29)
	  li        r0, -0x1
	  lfs       f0, 0x4C(r29)
	  mr        r3, r31
	  addi      r4, r1, 0x20
	  stfs      f0, 0x2BC(r30)
	  stfs      f1, 0x2C0(r30)
	  stfs      f2, 0x2C4(r30)
	  stw       r5, 0x3C(r1)
	  stw       r5, 0x38(r1)
	  stb       r5, 0x2C(r1)
	  sth       r0, 0x34(r1)
	  stw       r5, 0x30(r1)
	  lfs       f0, 0x18C(r30)
	  stfs      f0, 0x20(r1)
	  lfs       f0, 0x190(r30)
	  stfs      f0, 0x24(r1)
	  lfs       f0, 0x194(r30)
	  stfs      f0, 0x28(r1)
	  bl        -0x1DEC0C
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x190
	  lwz       r3, 0x38(r1)
	  lbz       r0, 0x34(r3)
	  lha       r3, 0x36(r3)
	  rlwinm.   r0,r0,0,31,31
	  mr        r0, r3
	  beq-      .loc_0x154
	  lwz       r3, 0x3C(r1)
	  lha       r0, 0x36(r3)

	.loc_0x154:
	  sth       r0, 0x2E6(r30)
	  mr        r3, r31
	  sth       r0, 0x2EA(r30)
	  sth       r0, 0x2E8(r30)
	  lwz       r12, 0x0(r31)
	  lha       r4, 0x2E8(r30)
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  lfs       f1, 0x50(r3)
	  lfs       f2, 0x54(r3)
	  lfs       f0, 0x4C(r3)
	  stfs      f0, 0x2BC(r30)
	  stfs      f1, 0x2C0(r30)
	  stfs      f2, 0x2C4(r30)

	.loc_0x190:
	  mr        r4, r30
	  addi      r3, r1, 0x14
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f5, 0x14(r1)
	  lis       r3, 0x8051
	  lfs       f3, 0x1C(r1)
	  subi      r3, r3, 0x2E20
	  lfs       f1, 0x2BC(r30)
	  lfs       f0, 0x2C4(r30)
	  lfs       f4, 0x18(r1)
	  fsubs     f1, f1, f5
	  fsubs     f2, f0, f3
	  stfs      f5, 0x8(r1)
	  stfs      f4, 0xC(r1)
	  stfs      f3, 0x10(r1)
	  bl        -0x31CF20
	  bl        0xBFBA4
	  lwz       r12, 0x0(r30)
	  fmr       f31, f1
	  mr        r3, r30
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fmr       f2, f1
	  fmr       f1, f31
	  bl        0xBFBAC
	  lfs       f0, 0x154(r2)
	  lfs       f2, 0x1D0(r2)
	  fmuls     f31, f1, f0
	  fabs      f0, f31
	  frsp      f0, f0
	  fcmpo     cr0, f0, f2
	  ble-      .loc_0x238
	  lfs       f0, 0x130(r2)
	  fcmpo     cr0, f31, f0
	  ble-      .loc_0x234
	  fmr       f31, f2
	  b         .loc_0x238

	.loc_0x234:
	  fneg      f31, f2

	.loc_0x238:
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fadds     f1, f31, f1
	  bl        0xBFB30
	  stfs      f1, 0x1FC(r30)
	  lfs       f0, 0x1FC(r30)
	  stfs      f0, 0x1A8(r30)
	  psq_l     f31,0x78(r1),0,0
	  lwz       r0, 0x84(r1)
	  lfd       f31, 0x70(r1)
	  lwz       r31, 0x6C(r1)
	  lwz       r30, 0x68(r1)
	  lwz       r29, 0x64(r1)
	  mtlr      r0
	  addi      r1, r1, 0x80
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000D0
 */
void Game::PanModokiBase::Obj::clearCarryVelocity(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803520D4
 * Size:	000518
 */
void Game::PanModokiBase::Obj::carryTarget((float))
{
	/*
	.loc_0x0:
	  stwu      r1, -0xC0(r1)
	  mflr      r0
	  stw       r0, 0xC4(r1)
	  stfd      f31, 0xB0(r1)
	  psq_st    f31,0xB8(r1),0,0
	  stfd      f30, 0xA0(r1)
	  psq_st    f30,0xA8(r1),0,0
	  stfd      f29, 0x90(r1)
	  psq_st    f29,0x98(r1),0,0
	  stw       r31, 0x8C(r1)
	  stw       r30, 0x88(r1)
	  mr        r30, r3
	  lwz       r4, 0xC0(r3)
	  lwz       r3, 0x230(r3)
	  lfs       f0, 0x8BC(r4)
	  cmplwi    r3, 0
	  lfs       f30, 0x30C(r4)
	  fmuls     f29, f1, f0
	  lfs       f31, 0x334(r4)
	  bne-      .loc_0x58
	  li        r31, 0
	  b         .loc_0x84

	.loc_0x58:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x7C(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x80
	  lwz       r3, 0x230(r30)
	  lwz       r3, 0x17C(r3)
	  lwz       r31, 0x4(r3)
	  b         .loc_0x84

	.loc_0x80:
	  lwz       r31, 0x230(r30)

	.loc_0x84:
	  mr        r3, r30
	  bl        -0x24AD68
	  cmpwi     r3, 0x3
	  bne-      .loc_0x13C
	  lfs       f0, 0x170(r2)
	  cmplwi    r31, 0
	  fmuls     f30, f30, f0
	  beq-      .loc_0x13C
	  mr        r3, r31
	  bl        -0x1E99E0
	  cmpwi     r3, 0x1
	  beq-      .loc_0x13C
	  mr        r4, r31
	  addi      r3, r1, 0x5C
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, 0x5C(r1)
	  mr        r4, r31
	  addi      r3, r1, 0x50
	  stfs      f0, 0x2BC(r30)
	  lfs       f0, 0x60(r1)
	  stfs      f0, 0x2C0(r30)
	  lfs       f0, 0x64(r1)
	  stfs      f0, 0x2C4(r30)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x6C(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x50(r1)
	  mr        r4, r31
	  lfs       f1, 0x1B8(r2)
	  addi      r3, r1, 0x44
	  lfs       f0, 0x2BC(r30)
	  fnmsubs   f0, f1, f2, f0
	  stfs      f0, 0x2BC(r30)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x6C(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x4C(r1)
	  lfs       f1, 0x1B8(r2)
	  lfs       f0, 0x2C4(r30)
	  fnmsubs   f0, f1, f2, f0
	  stfs      f0, 0x2C4(r30)

	.loc_0x13C:
	  lfs       f1, 0x2BC(r30)
	  lfs       f0, 0x1D4(r2)
	  stfs      f1, 0x74(r1)
	  lfs       f1, 0x2C0(r30)
	  stfs      f1, 0x78(r1)
	  lfs       f1, 0x2C4(r30)
	  stfs      f1, 0x7C(r1)
	  lfs       f2, 0x194(r30)
	  lfs       f1, 0x2C4(r30)
	  lfs       f3, 0x18C(r30)
	  fsubs     f2, f2, f1
	  lfs       f1, 0x2BC(r30)
	  fsubs     f3, f3, f1
	  fmuls     f1, f2, f2
	  fmadds    f1, f3, f3, f1
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x18C
	  lwz       r3, 0xC0(r30)
	  lfs       f30, 0x86C(r3)
	  lfs       f31, 0x894(r3)

	.loc_0x18C:
	  cmplwi    r31, 0
	  beq-      .loc_0x4E4
	  lfs       f0, 0x2C8(r30)
	  fmr       f1, f29
	  fmr       f2, f30
	  mr        r3, r30
	  fmr       f3, f31
	  stfs      f0, 0x1FC(r30)
	  addi      r4, r1, 0x74
	  bl        -0x23CCA8
	  lfs       f0, 0x1FC(r30)
	  stfs      f0, 0x2C8(r30)
	  lwz       r3, 0x230(r30)
	  lfs       f31, 0x1D4(r30)
	  cmplwi    r3, 0
	  lfs       f30, 0x1DC(r30)
	  bne-      .loc_0x1D8
	  li        r4, 0
	  b         .loc_0x204

	.loc_0x1D8:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x7C(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x200
	  lwz       r3, 0x230(r30)
	  lwz       r3, 0x17C(r3)
	  lwz       r4, 0x4(r3)
	  b         .loc_0x204

	.loc_0x200:
	  lwz       r4, 0x230(r30)

	.loc_0x204:
	  lwz       r12, 0x0(r4)
	  addi      r3, r1, 0x38
	  lwz       r12, 0x6C(r12)
	  mtctr     r12
	  bctrl
	  lfs       f6, 0x38(r1)
	  lfs       f5, 0x40(r1)
	  lfs       f2, 0x3C(r1)
	  fsubs     f3, f31, f6
	  stfs      f6, 0x68(r1)
	  fsubs     f8, f30, f5
	  lwz       r3, -0x6514(r13)
	  stfs      f2, 0x6C(r1)
	  lfs       f0, 0x1D8(r2)
	  stfs      f5, 0x70(r1)
	  lfs       f4, 0x130(r2)
	  lfs       f1, 0x54(r3)
	  fsubs     f7, f4, f2
	  fdivs     f0, f1, f0
	  fmuls     f1, f7, f0
	  fmuls     f3, f3, f0
	  fmuls     f0, f8, f0
	  fadds     f2, f2, f1
	  fadds     f3, f6, f3
	  fadds     f1, f5, f0
	  fadds     f0, f2, f4
	  stfs      f2, 0x6C(r1)
	  stfs      f3, 0x68(r1)
	  stfs      f1, 0x70(r1)
	  stfs      f0, 0x6C(r1)
	  stfs      f31, 0x68(r1)
	  stfs      f30, 0x70(r1)
	  lwz       r3, 0xC0(r30)
	  lbz       r0, 0x99A(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x3F4
	  cmplwi    r31, 0
	  beq-      .loc_0x3F4
	  lbz       r0, 0x31C(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0x318
	  lwz       r3, 0x314(r30)
	  addi      r0, r3, 0x1
	  stw       r0, 0x314(r30)
	  lwz       r0, 0x314(r30)
	  cmpwi     r0, 0x5A
	  ble-      .loc_0x318
	  lfs       f1, 0x194(r30)
	  lfs       f0, 0x310(r30)
	  lfs       f2, 0x18C(r30)
	  fsubs     f3, f1, f0
	  lfs       f1, 0x308(r30)
	  lfs       f0, 0x194(r2)
	  fsubs     f2, f2, f1
	  fmuls     f1, f3, f3
	  fmadds    f1, f2, f2, f1
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x2F8
	  li        r0, 0x1
	  stb       r0, 0x31C(r30)
	  b         .loc_0x300

	.loc_0x2F8:
	  li        r0, 0
	  stw       r0, 0x314(r30)

	.loc_0x300:
	  lfs       f0, 0x18C(r30)
	  stfs      f0, 0x308(r30)
	  lfs       f0, 0x190(r30)
	  stfs      f0, 0x30C(r30)
	  lfs       f0, 0x194(r30)
	  stfs      f0, 0x310(r30)

	.loc_0x318:
	  lbz       r0, 0x31C(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0x3B8
	  lfs       f1, 0xCC(r30)
	  lfs       f0, 0x158(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x344
	  lfs       f0, 0x1B8(r2)
	  fneg      f0, f0
	  stfs      f0, 0x320(r30)
	  b         .loc_0x36C

	.loc_0x344:
	  lfs       f0, 0x1BC(r2)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x35C
	  lfs       f0, 0x1B8(r2)
	  stfs      f0, 0x320(r30)
	  b         .loc_0x36C

	.loc_0x35C:
	  lfs       f1, 0x320(r30)
	  lfs       f0, 0x1DC(r2)
	  fmuls     f0, f1, f0
	  stfs      f0, 0x320(r30)

	.loc_0x36C:
	  lfs       f1, 0xD4(r30)
	  lfs       f0, 0x158(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x38C
	  lfs       f0, 0x1B8(r2)
	  fneg      f0, f0
	  stfs      f0, 0x328(r30)
	  b         .loc_0x3D4

	.loc_0x38C:
	  lfs       f0, 0x1BC(r2)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x3A4
	  lfs       f0, 0x1B8(r2)
	  stfs      f0, 0x328(r30)
	  b         .loc_0x3D4

	.loc_0x3A4:
	  lfs       f1, 0x328(r30)
	  lfs       f0, 0x1DC(r2)
	  fmuls     f0, f1, f0
	  stfs      f0, 0x328(r30)
	  b         .loc_0x3D4

	.loc_0x3B8:
	  lfs       f0, 0x68(r1)
	  lfs       f1, 0x170(r2)
	  fmuls     f0, f0, f1
	  stfs      f0, 0x320(r30)
	  lfs       f0, 0x70(r1)
	  fmuls     f0, f0, f1
	  stfs      f0, 0x328(r30)

	.loc_0x3D4:
	  lfs       f2, 0x68(r1)
	  lfs       f0, 0x320(r30)
	  lfs       f1, 0x70(r1)
	  fadds     f0, f2, f0
	  stfs      f0, 0x68(r1)
	  lfs       f0, 0x328(r30)
	  fadds     f0, f1, f0
	  stfs      f0, 0x70(r1)

	.loc_0x3F4:
	  lwz       r3, 0x334(r31)
	  addi      r5, r1, 0x68
	  lfs       f1, 0x37C(r30)
	  li        r4, 0x2
	  bl        -0x11D588
	  mr        r4, r31
	  addi      r3, r1, 0x20
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r30
	  lfs       f2, 0x20(r1)
	  lwz       r12, 0x0(r30)
	  addi      r3, r1, 0x2C
	  lfs       f1, 0x24(r1)
	  lfs       f0, 0x28(r1)
	  lwz       r12, 0x8(r12)
	  stfs      f2, 0x8(r1)
	  stfs      f1, 0xC(r1)
	  stfs      f0, 0x10(r1)
	  mtctr     r12
	  bctrl
	  lfs       f5, 0x2C(r1)
	  lis       r3, 0x8051
	  lfs       f3, 0x34(r1)
	  subi      r3, r3, 0x2E20
	  lfs       f1, 0x8(r1)
	  lfs       f0, 0x10(r1)
	  lfs       f4, 0x30(r1)
	  fsubs     f1, f1, f5
	  fsubs     f2, f0, f3
	  stfs      f5, 0x14(r1)
	  stfs      f4, 0x18(r1)
	  stfs      f3, 0x1C(r1)
	  bl        -0x31D44C
	  bl        0xBF678
	  lwz       r12, 0x0(r30)
	  fmr       f29, f1
	  mr        r3, r30
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fmr       f2, f1
	  fmr       f1, f29
	  bl        0xBF680
	  lfs       f0, 0x1FC(r30)
	  fadds     f1, f0, f1
	  bl        0xBF648
	  stfs      f1, 0x1FC(r30)
	  lfs       f0, 0x1FC(r30)
	  stfs      f0, 0x1A8(r30)
	  lfs       f2, 0x2C8(r30)
	  lfs       f1, 0x2DC(r30)
	  lfs       f0, 0x2E0(r30)
	  fadds     f1, f2, f1
	  fsubs     f1, f1, f0
	  bl        0xBF624
	  mr        r3, r31
	  bl        -0x1EA248

	.loc_0x4E4:
	  li        r3, 0
	  psq_l     f31,0xB8(r1),0,0
	  lfd       f31, 0xB0(r1)
	  psq_l     f30,0xA8(r1),0,0
	  lfd       f30, 0xA0(r1)
	  psq_l     f29,0x98(r1),0,0
	  lfd       f29, 0x90(r1)
	  lwz       r31, 0x8C(r1)
	  lwz       r0, 0xC4(r1)
	  lwz       r30, 0x88(r1)
	  mtlr      r0
	  addi      r1, r1, 0xC0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803525EC
 * Size:	000050
 */
void Game::PanModokiBase::Obj::changeCarryDir((bool))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  rlwinm.   r0,r4,0,24,31
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  beq-      .loc_0x28
	  lfs       f0, 0x1FC(r31)
	  stfs      f0, 0x2C8(r31)
	  b         .loc_0x3C

	.loc_0x28:
	  lfs       f1, 0x164(r2)
	  lfs       f0, 0x1FC(r31)
	  fadds     f1, f1, f0
	  bl        0xBF5B0
	  stfs      f1, 0x2C8(r31)

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
 * Address:	8035263C
 * Size:	0001B4
 */
void Game::PanModokiBase::Obj::setCarryDir((bool))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x90(r1)
	  mflr      r0
	  stw       r0, 0x94(r1)
	  stfd      f31, 0x80(r1)
	  psq_st    f31,0x88(r1),0,0
	  stw       r31, 0x7C(r1)
	  stw       r30, 0x78(r1)
	  stw       r29, 0x74(r1)
	  rlwinm.   r0,r4,0,24,31
	  mr        r31, r4
	  mr        r29, r3
	  beq-      .loc_0x3C
	  lfs       f0, 0x1FC(r29)
	  stfs      f0, 0x2C8(r29)
	  b         .loc_0x50

	.loc_0x3C:
	  lfs       f1, 0x164(r2)
	  lfs       f0, 0x1FC(r29)
	  fadds     f1, f1, f0
	  bl        0xBF54C
	  stfs      f1, 0x2C8(r29)

	.loc_0x50:
	  lwz       r3, 0x230(r29)
	  cmplwi    r3, 0
	  bne-      .loc_0x64
	  li        r30, 0
	  b         .loc_0x90

	.loc_0x64:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x7C(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x8C
	  lwz       r3, 0x230(r29)
	  lwz       r3, 0x17C(r3)
	  lwz       r30, 0x4(r3)
	  b         .loc_0x90

	.loc_0x8C:
	  lwz       r30, 0x230(r29)

	.loc_0x90:
	  cmplwi    r30, 0
	  beq-      .loc_0x190
	  mr        r4, r30
	  addi      r3, r1, 0x14
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r30
	  lfs       f1, 0x1C(r1)
	  lwz       r12, 0x0(r30)
	  addi      r3, r1, 0x20
	  lfs       f0, 0x194(r29)
	  lwz       r12, 0x8(r12)
	  fsubs     f31, f0, f1
	  mtctr     r12
	  bctrl
	  lfs       f1, 0x18C(r29)
	  addi      r3, r30, 0x138
	  lfs       f2, 0x20(r1)
	  addi      r4, r1, 0x38
	  lfs       f0, 0x130(r2)
	  fsubs     f1, f1, f2
	  stfs      f31, 0x34(r1)
	  stfs      f0, 0x30(r1)
	  stfs      f1, 0x2C(r1)
	  lfs       f0, 0x18C(r29)
	  stfs      f0, 0x2C(r1)
	  lfs       f0, 0x190(r29)
	  stfs      f0, 0x30(r1)
	  lfs       f0, 0x194(r29)
	  stfs      f0, 0x34(r1)
	  bl        -0x268330
	  addi      r3, r1, 0x38
	  addi      r4, r1, 0x2C
	  addi      r5, r1, 0x8
	  bl        -0x267B84
	  lfs       f1, 0x8(r1)
	  lfs       f2, 0x10(r1)
	  bl        -0x282DDC
	  frsp      f1, f1
	  lfs       f0, 0x130(r2)
	  rlwinm.   r0,r31,0,24,31
	  stfs      f1, 0x2E0(r29)
	  stfs      f0, 0x2DC(r29)
	  beq-      .loc_0x150
	  lfs       f0, 0x164(r2)
	  stfs      f0, 0x2DC(r29)

	.loc_0x150:
	  mr        r3, r30
	  bl        -0x1EB1E0
	  mr        r31, r3
	  mr        r3, r30
	  bl        -0x1EB20C
	  add       r3, r3, r31
	  lis       r0, 0x4330
	  xoris     r3, r3, 0x8000
	  stw       r0, 0x68(r1)
	  lfd       f2, 0x1A0(r2)
	  stw       r3, 0x6C(r1)
	  lfs       f0, 0x170(r2)
	  lfd       f1, 0x68(r1)
	  fsubs     f1, f1, f2
	  fmuls     f0, f0, f1
	  stfs      f0, 0x37C(r29)

	.loc_0x190:
	  psq_l     f31,0x88(r1),0,0
	  lwz       r0, 0x94(r1)
	  lfd       f31, 0x80(r1)
	  lwz       r31, 0x7C(r1)
	  lwz       r30, 0x78(r1)
	  lwz       r29, 0x74(r1)
	  mtlr      r0
	  addi      r1, r1, 0x90
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803527F0
 * Size:	000384
 */
void Game::PanModokiBase::Obj::endCarry(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x60(r1)
	  mflr      r0
	  stw       r0, 0x64(r1)
	  stw       r31, 0x5C(r1)
	  stw       r30, 0x58(r1)
	  mr        r30, r3
	  stw       r29, 0x54(r1)
	  lwz       r3, 0x230(r3)
	  cmplwi    r3, 0
	  bne-      .loc_0x30
	  li        r31, 0
	  b         .loc_0x5C

	.loc_0x30:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x7C(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x58
	  lwz       r3, 0x230(r30)
	  lwz       r3, 0x17C(r3)
	  lwz       r31, 0x4(r3)
	  b         .loc_0x5C

	.loc_0x58:
	  lwz       r31, 0x230(r30)

	.loc_0x5C:
	  mr        r3, r30
	  bl        -0x24B0D4
	  cmplwi    r31, 0
	  beq-      .loc_0x368
	  mr        r4, r31
	  addi      r3, r1, 0x30
	  bl        -0x1B2C08
	  li        r0, 0
	  lis       r3, 0x804B
	  subi      r4, r3, 0x437C
	  addi      r3, r1, 0x30
	  cmplwi    r0, 0
	  stw       r4, 0x20(r1)
	  stw       r0, 0x2C(r1)
	  stw       r0, 0x24(r1)
	  stw       r3, 0x28(r1)
	  bne-      .loc_0xB8
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x24(r1)
	  b         .loc_0x26C

	.loc_0xB8:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x24(r1)
	  b         .loc_0x124

	.loc_0xD0:
	  lwz       r3, 0x28(r1)
	  lwz       r4, 0x24(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x2C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x26C
	  lwz       r3, 0x28(r1)
	  lwz       r4, 0x24(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x24(r1)

	.loc_0x124:
	  lwz       r12, 0x20(r1)
	  addi      r3, r1, 0x20
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0xD0
	  b         .loc_0x26C

	.loc_0x144:
	  lwz       r3, 0x28(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  mr        r29, r3
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x1B0
	  lis       r4, 0x804B
	  lis       r3, 0x804B
	  subi      r4, r4, 0x5D00
	  li        r0, 0
	  stw       r4, 0x14(r1)
	  addi      r5, r3, 0x4D98
	  mr        r3, r29
	  addi      r4, r1, 0x14
	  stw       r30, 0x18(r1)
	  stw       r5, 0x14(r1)
	  stw       r0, 0x1C(r1)
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x1A4(r12)
	  mtctr     r12
	  bctrl

	.loc_0x1B0:
	  lwz       r0, 0x2C(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x1DC
	  lwz       r3, 0x28(r1)
	  lwz       r4, 0x24(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x24(r1)
	  b         .loc_0x26C

	.loc_0x1DC:
	  lwz       r3, 0x28(r1)
	  lwz       r4, 0x24(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x24(r1)
	  b         .loc_0x250

	.loc_0x1FC:
	  lwz       r3, 0x28(r1)
	  lwz       r4, 0x24(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x2C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x26C
	  lwz       r3, 0x28(r1)
	  lwz       r4, 0x24(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x24(r1)

	.loc_0x250:
	  lwz       r12, 0x20(r1)
	  addi      r3, r1, 0x20
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x1FC

	.loc_0x26C:
	  lwz       r3, 0x28(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x24(r1)
	  cmplw     r4, r3
	  bne+      .loc_0x144
	  mr        r3, r30
	  bl        -0x1B365C
	  lwz       r3, 0x334(r31)
	  li        r4, 0x2
	  bl        -0x11DA84
	  mr        r3, r31
	  li        r29, 0x1
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x1F4(r12)
	  mtctr     r12
	  bctrl
	  rlwinm    r0,r3,0,24,31
	  cmplwi    r0, 0x3
	  bne-      .loc_0x318
	  lwz       r0, 0x388(r30)
	  rlwinm    r0,r0,2,0,29
	  add       r3, r30, r0
	  stw       r31, 0x38C(r3)
	  lwz       r0, 0x388(r30)
	  cmpwi     r0, 0
	  bne-      .loc_0x30C
	  mr        r3, r31
	  li        r4, 0
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xAC(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x378(r30)
	  mr        r3, r31
	  addi      r4, r4, 0x2BC
	  bl        -0x1B304C
	  li        r29, 0

	.loc_0x30C:
	  lwz       r3, 0x388(r30)
	  addi      r0, r3, 0x1
	  stw       r0, 0x388(r30)

	.loc_0x318:
	  rlwinm.   r0,r29,0,24,31
	  beq-      .loc_0x354
	  lis       r4, 0x804B
	  lis       r3, 0x804E
	  subi      r0, r4, 0x5D30
	  li        r4, 0
	  stw       r0, 0x8(r1)
	  subi      r5, r3, 0x31FC
	  li        r0, 0x1
	  mr        r3, r31
	  stw       r4, 0xC(r1)
	  addi      r4, r1, 0x8
	  stw       r5, 0x8(r1)
	  stb       r0, 0x10(r1)
	  bl        -0x217A50

	.loc_0x354:
	  li        r0, 0
	  addi      r3, r1, 0x30
	  stw       r0, 0x230(r30)
	  li        r4, -0x1
	  bl        -0x1B2DF0

	.loc_0x368:
	  lwz       r0, 0x64(r1)
	  lwz       r31, 0x5C(r1)
	  lwz       r30, 0x58(r1)
	  lwz       r29, 0x54(r1)
	  mtlr      r0
	  addi      r1, r1, 0x60
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80352B74
 * Size:	0000A0
 */
void Game::PanModokiBase::Obj::checkSucked(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, 0x130(r2)
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lfs       f1, 0x200(r3)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  beq-      .loc_0x8C
	  lwz       r3, 0x230(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x8C
	  bne-      .loc_0x40
	  li        r3, 0
	  b         .loc_0x6C

	.loc_0x40:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x7C(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x68
	  lwz       r3, 0x230(r31)
	  lwz       r3, 0x17C(r3)
	  lwz       r3, 0x4(r3)
	  b         .loc_0x6C

	.loc_0x68:
	  lwz       r3, 0x230(r31)

	.loc_0x6C:
	  bl        -0x1EA444
	  cmpwi     r3, 0x1
	  bne-      .loc_0x8C
	  lwz       r0, 0x1E0(r31)
	  mr        r3, r31
	  oris      r0, r0, 0x20
	  stw       r0, 0x1E0(r31)
	  bl        0xC50

	.loc_0x8C:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80352C14
 * Size:	0000BC
 */
void Game::PanModokiBase::Obj::suckFinish(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  lwz       r3, 0x230(r3)
	  cmplwi    r3, 0
	  bne-      .loc_0x2C
	  li        r31, 0
	  b         .loc_0x58

	.loc_0x2C:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x7C(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x54
	  lwz       r3, 0x230(r30)
	  lwz       r3, 0x17C(r3)
	  lwz       r31, 0x4(r3)
	  b         .loc_0x58

	.loc_0x54:
	  lwz       r31, 0x230(r30)

	.loc_0x58:
	  mr        r3, r30
	  bl        -0x1B384C
	  cmplwi    r31, 0
	  beq-      .loc_0x74
	  lwz       r3, 0x334(r31)
	  li        r4, 0x2
	  bl        -0x11DC7C

	.loc_0x74:
	  lwz       r3, 0x380(r30)
	  mr        r4, r30
	  li        r5, 0x9
	  li        r6, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  li        r0, 0
	  mr        r3, r30
	  stw       r0, 0x230(r30)
	  bl        0xB98
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
 * Address:	80352CD0
 * Size:	000118
 */
void Game::PanModokiBase::Obj::isEndPathFinder(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lbz       r0, 0x2F0(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x28
	  li        r3, 0x1
	  b         .loc_0x104

	.loc_0x28:
	  lwz       r0, -0x6C80(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x50
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  addi      r3, r3, 0xEF8
	  li        r4, 0x6AC
	  addi      r5, r5, 0xF08
	  crclr     6, 0x6
	  bl        -0x3286DC

	.loc_0x50:
	  lwz       r3, -0x6C80(r13)
	  lwz       r4, 0x2EC(r31)
	  bl        -0x1AF258
	  cmpwi     r3, 0x2
	  beq-      .loc_0xA4
	  bge-      .loc_0x78
	  cmpwi     r3, 0
	  beq-      .loc_0x84
	  bge-      .loc_0xB4
	  b         .loc_0x100

	.loc_0x78:
	  cmpwi     r3, 0x4
	  bge-      .loc_0x100
	  b         .loc_0xF0

	.loc_0x84:
	  lwz       r3, -0x6C80(r13)
	  addi      r5, r31, 0x384
	  lwz       r4, 0x2EC(r31)
	  bl        -0x1AF3C0
	  li        r0, 0x1
	  li        r3, 0x1
	  stb       r0, 0x2F0(r31)
	  b         .loc_0x104

	.loc_0xA4:
	  li        r0, 0
	  li        r3, 0
	  stb       r0, 0x2F0(r31)
	  b         .loc_0x104

	.loc_0xB4:
	  mr        r3, r31
	  bl        -0x24BA40
	  cmpwi     r3, 0x8
	  beq-      .loc_0xD4
	  mr        r3, r31
	  li        r4, 0x8
	  li        r5, 0
	  bl        -0x24DD9C

	.loc_0xD4:
	  mr        r3, r31
	  li        r4, 0x1
	  bl        .loc_0x118
	  li        r0, 0
	  li        r3, 0
	  stb       r0, 0x2F0(r31)
	  b         .loc_0x104

	.loc_0xF0:
	  li        r0, 0
	  li        r3, 0
	  stb       r0, 0x2F0(r31)
	  b         .loc_0x104

	.loc_0x100:
	  li        r3, 0

	.loc_0x104:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr

	.loc_0x118:
	*/
}

/*
 * --INFO--
 * Address:	80352DE8
 * Size:	0002BC
 */
void Game::PanModokiBase::Obj::setPathFinder((bool))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x70(r1)
	  mflr      r0
	  stw       r0, 0x74(r1)
	  stfd      f31, 0x60(r1)
	  psq_st    f31,0x68(r1),0,0
	  stfd      f30, 0x50(r1)
	  psq_st    f30,0x58(r1),0,0
	  stmw      r27, 0x3C(r1)
	  mr        r28, r3
	  mr        r29, r4
	  bl        .loc_0x2BC
	  lfs       f0, 0x130(r2)
	  li        r4, 0
	  li        r0, -0x1
	  stfs      f0, 0x320(r28)
	  stfs      f0, 0x324(r28)
	  stfs      f0, 0x328(r28)
	  stw       r4, 0x2C(r1)
	  lwz       r3, -0x6CF8(r13)
	  stw       r4, 0x28(r1)
	  stb       r4, 0x1C(r1)
	  sth       r0, 0x24(r1)
	  stw       r4, 0x20(r1)
	  lfs       f0, 0x18C(r28)
	  stfs      f0, 0x10(r1)
	  lfs       f0, 0x190(r28)
	  stfs      f0, 0x14(r1)
	  lfs       f0, 0x194(r28)
	  stfs      f0, 0x18(r1)
	  lwz       r30, 0x8(r3)
	  cmplwi    r30, 0
	  bne-      .loc_0x9C
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  addi      r3, r3, 0xEF8
	  li        r4, 0x6DC
	  addi      r5, r5, 0xF08
	  crclr     6, 0x6
	  bl        -0x328840

	.loc_0x9C:
	  mr        r3, r30
	  addi      r4, r1, 0x10
	  bl        -0x1DFB20
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x27C
	  lwz       r3, 0x28(r1)
	  lwz       r4, 0x2C(r1)
	  lfs       f3, 0x1A0(r28)
	  lfs       f1, 0x54(r4)
	  lfs       f0, 0x54(r3)
	  fsubs     f4, f1, f3
	  lfs       f2, 0x4C(r4)
	  fsubs     f3, f0, f3
	  lfs       f6, 0x198(r28)
	  lfs       f1, 0x4C(r3)
	  fsubs     f5, f2, f6
	  fmuls     f0, f4, f4
	  lha       r0, 0x36(r3)
	  fsubs     f2, f1, f6
	  lha       r5, 0x36(r4)
	  fmuls     f1, f3, f3
	  fmadds    f0, f5, f5, f0
	  lfs       f31, 0x50(r3)
	  mr        r31, r0
	  fmadds    f1, f2, f2, f1
	  lfs       f30, 0x50(r4)
	  mr        r27, r5
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x118
	  mr        r27, r0
	  mr        r31, r5

	.loc_0x118:
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  lbz       r0, 0x34(r3)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0x140
	  mr        r31, r27

	.loc_0x140:
	  mr        r3, r30
	  lwz       r4, 0x28(r1)
	  lwz       r12, 0x0(r30)
	  lha       r4, 0x36(r4)
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  lbz       r0, 0x34(r3)
	  rlwinm.   r0,r0,0,31,31
	  bne-      .loc_0x1EC
	  mr        r3, r30
	  lwz       r4, 0x2C(r1)
	  lwz       r12, 0x0(r30)
	  lha       r4, 0x36(r4)
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  lbz       r0, 0x34(r3)
	  rlwinm.   r0,r0,0,31,31
	  bne-      .loc_0x1EC
	  lwz       r3, 0x28(r1)
	  extsh     r4, r31
	  lha       r0, 0x36(r3)
	  cmpw      r4, r0
	  bne-      .loc_0x1CC
	  lfs       f1, 0x190(r28)
	  lfs       f0, 0x148(r2)
	  fsubs     f1, f31, f1
	  fabs      f1, f1
	  frsp      f1, f1
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x1EC
	  lwz       r3, 0x2C(r1)
	  lha       r31, 0x36(r3)
	  b         .loc_0x1EC

	.loc_0x1CC:
	  lfs       f1, 0x190(r28)
	  lfs       f0, 0x148(r2)
	  fsubs     f1, f30, f1
	  fabs      f1, f1
	  frsp      f1, f1
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x1EC
	  mr        r31, r0

	.loc_0x1EC:
	  lha       r4, 0x2E8(r28)
	  rlwinm    r3,r29,0,24,31
	  neg       r0, r3
	  sth       r4, 0x2EA(r28)
	  or        r0, r0, r3
	  srawi     r3, r0, 0x1F
	  sth       r31, 0x2E8(r28)
	  addi      r29, r3, 0xC3
	  lwz       r4, 0x2EC(r28)
	  cmplwi    r4, 0
	  beq-      .loc_0x220
	  lwz       r3, -0x6C80(r13)
	  bl        -0x1AF5A4

	.loc_0x220:
	  lha       r5, 0x2E6(r28)
	  addi      r4, r1, 0x8
	  lha       r0, 0x2E8(r28)
	  lwz       r3, -0x6C80(r13)
	  sth       r0, 0x8(r1)
	  sth       r5, 0xA(r1)
	  stb       r29, 0xC(r1)
	  bl        -0x1AF7D0
	  stw       r3, 0x2EC(r28)
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lha       r4, 0x2E8(r28)
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  lfs       f1, 0x50(r3)
	  lfs       f2, 0x54(r3)
	  lfs       f0, 0x4C(r3)
	  li        r3, 0x1
	  stfs      f0, 0x2BC(r28)
	  stfs      f1, 0x2C0(r28)
	  stfs      f2, 0x2C4(r28)
	  b         .loc_0x298

	.loc_0x27C:
	  lis       r3, 0x8049
	  li        r4, 0x712
	  addi      r3, r3, 0xEF8
	  li        r5, 0
	  crclr     6, 0x6
	  bl        -0x328A38
	  li        r3, 0

	.loc_0x298:
	  psq_l     f31,0x68(r1),0,0
	  lfd       f31, 0x60(r1)
	  psq_l     f30,0x58(r1),0,0
	  lfd       f30, 0x50(r1)
	  lmw       r27, 0x3C(r1)
	  lwz       r0, 0x74(r1)
	  mtlr      r0
	  addi      r1, r1, 0x70
	  blr

	.loc_0x2BC:
	*/
}

/*
 * --INFO--
 * Address:	803530A4
 * Size:	000044
 */
void Game::PanModokiBase::Obj::releasePathFinder(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  li        r0, 0
	  stb       r0, 0x2F0(r3)
	  lwz       r0, -0x6C80(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0x34
	  lwz       r4, 0x2EC(r3)
	  cmplwi    r4, 0
	  beq-      .loc_0x34
	  mr        r3, r0
	  bl        -0x1AF674

	.loc_0x34:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803530E8
 * Size:	000020
 */
void Game::PanModokiBase::Obj::killNest(void)
{
	/*
	.loc_0x0:
	  lwz       r4, 0x378(r3)
	  cmplwi    r4, 0
	  beq-      .loc_0x14
	  li        r0, 0x1
	  stw       r0, 0x2F0(r4)

	.loc_0x14:
	  li        r0, 0
	  stw       r0, 0x378(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80353108
 * Size:	000324
 */
void Game::PanModokiBase::Obj::isTargetable((Game::Pellet*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  mflr      r0
	  stw       r0, 0x54(r1)
	  stw       r31, 0x4C(r1)
	  mr        r31, r4
	  stw       r30, 0x48(r1)
	  mr        r30, r3
	  lwz       r5, -0x6C18(r13)
	  cmplwi    r5, 0
	  beq-      .loc_0x48
	  lwz       r0, 0x44(r5)
	  cmpwi     r0, 0x1
	  bne-      .loc_0x48
	  lbz       r0, 0x32C(r31)
	  cmplwi    r0, 0x3
	  bne-      .loc_0x48
	  li        r3, 0
	  b         .loc_0x30C

	.loc_0x48:
	  cmplwi    r31, 0
	  beq-      .loc_0x308
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x1F4(r12)
	  mtctr     r12
	  bctrl
	  rlwinm    r0,r3,0,24,31
	  cmplwi    r0, 0x3
	  blt-      .loc_0x84
	  lwz       r0, 0x388(r30)
	  cmpwi     r0, 0xF
	  blt-      .loc_0x84
	  li        r3, 0
	  b         .loc_0x30C

	.loc_0x84:
	  mr        r3, r31
	  bl        -0x1EB41C
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x9C
	  li        r3, 0
	  b         .loc_0x30C

	.loc_0x9C:
	  mr        r4, r31
	  addi      r3, r1, 0x18
	  bl        -0x1B3550
	  li        r0, 0
	  lis       r3, 0x804B
	  subi      r4, r3, 0x437C
	  addi      r3, r1, 0x18
	  cmplwi    r0, 0
	  stw       r4, 0x8(r1)
	  stw       r0, 0x14(r1)
	  stw       r0, 0xC(r1)
	  stw       r3, 0x10(r1)
	  bne-      .loc_0xE8
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x270

	.loc_0xE8:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x154

	.loc_0x100:
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
	  bne-      .loc_0x270
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0x154:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x100
	  b         .loc_0x270

	.loc_0x174:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x7C(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x1B4
	  addi      r3, r1, 0x18
	  li        r4, -0x1
	  bl        -0x1B354C
	  li        r3, 0
	  b         .loc_0x30C

	.loc_0x1B4:
	  lwz       r0, 0x14(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x1E0
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x270

	.loc_0x1E0:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x254

	.loc_0x200:
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
	  bne-      .loc_0x270
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0x254:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x200

	.loc_0x270:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0xC(r1)
	  cmplw     r4, r3
	  bne+      .loc_0x174
	  mr        r3, r31
	  bl        -0x1EBDEC
	  mr        r30, r3
	  mr        r3, r31
	  bl        -0x1EBE18
	  add       r3, r3, r30
	  lis       r0, 0x4330
	  xoris     r3, r3, 0x8000
	  stw       r0, 0x38(r1)
	  lfd       f2, 0x1A0(r2)
	  li        r4, 0x2
	  stw       r3, 0x3C(r1)
	  lfs       f0, 0x170(r2)
	  lfd       f1, 0x38(r1)
	  lwz       r3, 0x334(r31)
	  fsubs     f1, f1, f2
	  fmuls     f1, f0, f1
	  bl        -0x11E408
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x2F4
	  addi      r3, r1, 0x18
	  li        r4, -0x1
	  bl        -0x1B368C
	  li        r3, 0
	  b         .loc_0x30C

	.loc_0x2F4:
	  addi      r3, r1, 0x18
	  li        r4, -0x1
	  bl        -0x1B36A0
	  li        r3, 0x1
	  b         .loc_0x30C

	.loc_0x308:
	  li        r3, 0

	.loc_0x30C:
	  lwz       r0, 0x54(r1)
	  lwz       r31, 0x4C(r1)
	  lwz       r30, 0x48(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8035342C
 * Size:	00017C
 */
void calcSlotGlobalPos__Q34Game13PanModokiBase3ObjFR10Vector3<float>(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x80(r1)
	  mflr      r0
	  stw       r0, 0x84(r1)
	  stw       r31, 0x7C(r1)
	  mr        r31, r4
	  stw       r30, 0x78(r1)
	  stw       r29, 0x74(r1)
	  mr        r29, r3
	  lwz       r3, 0x230(r3)
	  cmplwi    r3, 0
	  bne-      .loc_0x34
	  li        r30, 0
	  b         .loc_0x60

	.loc_0x34:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x7C(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x5C
	  lwz       r3, 0x230(r29)
	  lwz       r3, 0x17C(r3)
	  lwz       r30, 0x4(r3)
	  b         .loc_0x60

	.loc_0x5C:
	  lwz       r30, 0x230(r29)

	.loc_0x60:
	  cmplwi    r30, 0
	  bne-      .loc_0x84
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  addi      r3, r3, 0xEF8
	  li        r4, 0x76F
	  addi      r5, r5, 0xF08
	  crclr     6, 0x6
	  bl        -0x328E6C

	.loc_0x84:
	  mr        r3, r30
	  bl        -0x1ECAEC
	  lfs       f4, 0x2E0(r29)
	  lfs       f0, 0x130(r2)
	  fmr       f2, f4
	  fcmpo     cr0, f4, f0
	  bge-      .loc_0xA4
	  fneg      f2, f4

	.loc_0xA4:
	  lfs       f3, 0x168(r2)
	  lis       r3, 0x8050
	  lfs       f0, 0x130(r2)
	  addi      r4, r3, 0x71A0
	  fmuls     f2, f2, f3
	  fcmpo     cr0, f4, f0
	  fctiwz    f0, f2
	  stfd      f0, 0x50(r1)
	  lwz       r0, 0x54(r1)
	  rlwinm    r0,r0,3,18,28
	  add       r3, r4, r0
	  lfs       f0, 0x4(r3)
	  fmuls     f2, f1, f0
	  bge-      .loc_0x100
	  lfs       f0, 0x16C(r2)
	  fmuls     f0, f4, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x58(r1)
	  lwz       r0, 0x5C(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r4, r0
	  fneg      f0, f0
	  b         .loc_0x118

	.loc_0x100:
	  fmuls     f0, f4, f3
	  fctiwz    f0, f0
	  stfd      f0, 0x60(r1)
	  lwz       r0, 0x64(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r4, r0

	.loc_0x118:
	  fmuls     f1, f1, f0
	  lfs       f0, 0x130(r2)
	  stfs      f2, 0x1C(r1)
	  addi      r3, r30, 0x138
	  addi      r4, r1, 0x20
	  stfs      f1, 0x14(r1)
	  stfs      f0, 0x18(r1)
	  bl        -0x269294
	  addi      r3, r1, 0x20
	  addi      r4, r1, 0x14
	  addi      r5, r1, 0x8
	  bl        -0x268998
	  lfs       f1, 0xC(r1)
	  lfs       f2, 0x10(r1)
	  lfs       f0, 0x8(r1)
	  stfs      f0, 0x0(r31)
	  stfs      f1, 0x4(r31)
	  stfs      f2, 0x8(r31)
	  lwz       r31, 0x7C(r1)
	  lwz       r30, 0x78(r1)
	  lwz       r29, 0x74(r1)
	  lwz       r0, 0x84(r1)
	  mtlr      r0
	  addi      r1, r1, 0x80
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803535A8
 * Size:	000028
 */
void Game::PanModokiBase::Obj::boundEffect(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  addi      r4, r3, 0x18C
	  stw       r0, 0x14(r1)
	  lfs       f1, 0x33C(r3)
	  bl        -0x24FA6C
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803535D0
 * Size:	0000E8
 */
void Game::PanModokiBase::Obj::createAppearEffect(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stw       r31, 0x3C(r1)
	  mr        r31, r3
	  lwz       r0, 0x280(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0xB4
	  lis       r3, 0x804B
	  lis       r4, 0x804E
	  subi      r0, r3, 0x5808
	  lis       r3, 0x804E
	  stw       r0, 0x14(r1)
	  addi      r4, r4, 0x6A78
	  li        r0, 0x26E
	  li        r7, 0
	  stw       r4, 0x14(r1)
	  addi      r6, r3, 0x6E1C
	  lis       r4, 0x804B
	  lis       r3, 0x804B
	  sth       r0, 0x18(r1)
	  subi      r5, r4, 0x5814
	  subi      r0, r3, 0x5D24
	  addi      r3, r1, 0x14
	  stw       r7, 0x1C(r1)
	  addi      r4, r1, 0x20
	  stw       r6, 0x14(r1)
	  lwz       r8, 0x18C(r31)
	  lwz       r7, 0x190(r31)
	  lwz       r6, 0x194(r31)
	  lfs       f3, 0x340(r31)
	  stw       r8, 0x8(r1)
	  stw       r7, 0xC(r1)
	  lfs       f2, 0x8(r1)
	  stw       r6, 0x10(r1)
	  lfs       f1, 0xC(r1)
	  stw       r5, 0x20(r1)
	  lfs       f0, 0x10(r1)
	  stfs      f2, 0x24(r1)
	  stfs      f1, 0x28(r1)
	  stfs      f0, 0x2C(r1)
	  stw       r0, 0x20(r1)
	  stfs      f3, 0x30(r1)
	  bl        0x60698
	  b         .loc_0xD4

	.loc_0xB4:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x250(r12)
	  mtctr     r12
	  bctrl
	  lfs       f1, 0x33C(r31)
	  mr        r3, r31
	  addi      r4, r31, 0x18C
	  bl        -0x24FCA8

	.loc_0xD4:
	  lwz       r0, 0x44(r1)
	  lwz       r31, 0x3C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803536B8
 * Size:	0000E0
 */
void Game::PanModokiBase::Obj::createHideEffect(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  mflr      r0
	  stw       r0, 0x54(r1)
	  stw       r31, 0x4C(r1)
	  mr        r31, r3
	  lwz       r0, 0x280(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0xBC
	  lwz       r4, 0x378(r31)
	  addi      r3, r1, 0x14
	  lwz       r12, 0x0(r4)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x14(r1)
	  lis       r4, 0x804B
	  lfs       f1, 0x18(r1)
	  lis       r3, 0x804B
	  lfs       f0, 0x1C(r1)
	  subi      r5, r4, 0x5814
	  stfs      f2, 0x20(r1)
	  subi      r0, r3, 0x5D24
	  lfs       f3, 0x340(r31)
	  addi      r4, r1, 0x2C
	  stfs      f1, 0x24(r1)
	  lwz       r7, 0x20(r1)
	  stfs      f0, 0x28(r1)
	  lwz       r6, 0x24(r1)
	  lwz       r3, 0x28(r1)
	  stw       r7, 0x8(r1)
	  stw       r6, 0xC(r1)
	  lfs       f2, 0x8(r1)
	  stw       r3, 0x10(r1)
	  lfs       f1, 0xC(r1)
	  stw       r5, 0x2C(r1)
	  lfs       f0, 0x10(r1)
	  stfs      f2, 0x30(r1)
	  stfs      f1, 0x34(r1)
	  stfs      f0, 0x38(r1)
	  stw       r0, 0x2C(r1)
	  stfs      f3, 0x3C(r1)
	  lwz       r3, 0x2FC(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0xCC

	.loc_0xBC:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x254(r12)
	  mtctr     r12
	  bctrl

	.loc_0xCC:
	  lwz       r0, 0x54(r1)
	  lwz       r31, 0x4C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80353798
 * Size:	000030
 */
void Game::PanModokiBase::Obj::fadeHideEffect(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x2FC(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
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
 * Address:	803537C8
 * Size:	000084
 */
void Game::PanModokiBase::Obj::createPulledSmokeEffect(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  lis       r5, 0x804B
	  lis       r4, 0x804B
	  stw       r0, 0x34(r1)
	  subi      r0, r4, 0x5D24
	  subi      r5, r5, 0x5814
	  addi      r4, r1, 0x14
	  lwz       r8, 0x18C(r3)
	  lwz       r7, 0x190(r3)
	  lwz       r6, 0x194(r3)
	  lfs       f3, 0x340(r3)
	  stw       r8, 0x8(r1)
	  stw       r7, 0xC(r1)
	  lfs       f2, 0x8(r1)
	  stw       r6, 0x10(r1)
	  lfs       f1, 0xC(r1)
	  stw       r5, 0x14(r1)
	  lfs       f0, 0x10(r1)
	  stfs      f2, 0x18(r1)
	  stfs      f1, 0x1C(r1)
	  stfs      f0, 0x20(r1)
	  stw       r0, 0x14(r1)
	  stfs      f3, 0x24(r1)
	  lwz       r3, 0x300(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8035384C
 * Size:	000030
 */
void Game::PanModokiBase::Obj::fadePulledSmokeEffect(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x300(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
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
 * Address:	8035387C
 * Size:	0002CC
 */
void Game::PanModokiBase::Obj::throwUpEatItem(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x90(r1)
	  mflr      r0
	  stw       r0, 0x94(r1)
	  stmw      r26, 0x78(r1)
	  mr        r26, r3
	  lwz       r3, 0x38C(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x50
	  lis       r5, 0x804B
	  li        r6, 0
	  subi      r0, r5, 0x5D30
	  lis       r4, 0x804E
	  stw       r0, 0x20(r1)
	  subi      r5, r4, 0x31FC
	  li        r0, 0x1
	  addi      r4, r1, 0x20
	  stw       r6, 0x24(r1)
	  stw       r5, 0x20(r1)
	  stb       r0, 0x28(r1)
	  bl        -0x2187D8

	.loc_0x50:
	  lis       r4, 0x804B
	  lis       r3, 0x804B
	  mr        r29, r26
	  li        r28, 0
	  subi      r30, r4, 0x5D0C
	  subi      r31, r3, 0x5D48
	  b         .loc_0x2AC

	.loc_0x6C:
	  stw       r30, 0x2C(r1)
	  li        r5, 0
	  li        r0, -0x1
	  li        r4, 0xFF
	  li        r3, 0x1
	  stw       r31, 0x2C(r1)
	  stb       r5, 0x48(r1)
	  sth       r5, 0x40(r1)
	  stb       r4, 0x42(r1)
	  stw       r5, 0x44(r1)
	  stb       r5, 0x43(r1)
	  stb       r3, 0x30(r1)
	  stb       r5, 0x49(r1)
	  stw       r0, 0x50(r1)
	  stw       r0, 0x4C(r1)
	  stb       r5, 0x4A(r1)
	  stb       r5, 0x4B(r1)
	  lwz       r3, 0x38C(r29)
	  bl        -0x1ECEF8
	  mr        r5, r3
	  lwz       r3, -0x6CE0(r13)
	  addi      r4, r1, 0x2C
	  bl        -0x1E5F5C
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x2A4
	  lwz       r27, 0x38C(r29)
	  cmplwi    r27, 0
	  beq-      .loc_0x2A4
	  lwz       r3, 0x454(r27)
	  mr        r4, r27
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x50(r12)
	  mtctr     r12
	  bctrl
	  li        r3, 0x2
	  li        r0, 0x1
	  sth       r3, 0x40(r1)
	  mr        r3, r27
	  addi      r4, r1, 0x2C
	  stb       r0, 0x48(r1)
	  bl        -0x2189C0
	  lfs       f1, 0x198(r26)
	  mr        r3, r26
	  lfs       f0, 0x1B8(r2)
	  addi      r4, r1, 0x8
	  stfs      f1, 0x14(r1)
	  lfs       f1, 0x19C(r26)
	  stfs      f1, 0x18(r1)
	  fadds     f0, f1, f0
	  lfs       f1, 0x1A0(r26)
	  stfs      f1, 0x1C(r1)
	  stfs      f0, 0x18(r1)
	  lwz       r12, 0x0(r26)
	  lwz       r12, 0x26C(r12)
	  mtctr     r12
	  bctrl
	  lis       r3, 0x4330
	  xoris     r0, r28, 0x8000
	  lwz       r4, 0x388(r26)
	  stw       r0, 0x5C(r1)
	  xoris     r0, r4, 0x8000
	  lfd       f2, 0x1A0(r2)
	  stw       r3, 0x58(r1)
	  cmpwi     r4, 0x1
	  lfs       f3, 0x1D0(r2)
	  lfd       f0, 0x58(r1)
	  stw       r0, 0x64(r1)
	  fsubs     f1, f0, f2
	  stw       r3, 0x60(r1)
	  lfd       f0, 0x60(r1)
	  fmuls     f1, f3, f1
	  fsubs     f0, f0, f2
	  fdivs     f4, f1, f0
	  beq-      .loc_0x248
	  lfs       f0, 0x130(r2)
	  lfs       f3, 0x178(r2)
	  fcmpo     cr0, f4, f0
	  bge-      .loc_0x1D0
	  lfs       f0, 0x16C(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fmuls     f0, f4, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x60(r1)
	  lwz       r0, 0x64(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r3, r0
	  fneg      f2, f0
	  b         .loc_0x1F4

	.loc_0x1D0:
	  lfs       f0, 0x168(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fmuls     f0, f4, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x58(r1)
	  lwz       r0, 0x5C(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f2, r3, r0

	.loc_0x1F4:
	  lfs       f1, 0x8(r1)
	  lfs       f0, 0x130(r2)
	  fmadds    f1, f3, f2, f1
	  fcmpo     cr0, f4, f0
	  stfs      f1, 0x8(r1)
	  bge-      .loc_0x210
	  fneg      f4, f4

	.loc_0x210:
	  lfs       f0, 0x168(r2)
	  lis       r3, 0x8050
	  addi      r0, r3, 0x71A0
	  lfs       f2, 0x178(r2)
	  fmuls     f1, f4, f0
	  lfs       f0, 0x10(r1)
	  fctiwz    f1, f1
	  stfd      f1, 0x68(r1)
	  lwz       r3, 0x6C(r1)
	  rlwinm    r3,r3,3,18,28
	  add       r3, r0, r3
	  lfs       f1, 0x4(r3)
	  fmadds    f0, f2, f1, f0
	  stfs      f0, 0x10(r1)

	.loc_0x248:
	  mr        r3, r27
	  addi      r4, r1, 0x14
	  li        r5, 0
	  bl        -0x218928
	  mr        r3, r27
	  addi      r4, r1, 0x8
	  lwz       r12, 0x0(r27)
	  lwz       r12, 0x68(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r27
	  addi      r4, r1, 0x14
	  lwz       r12, 0x0(r27)
	  lwz       r12, 0x1FC(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x28C(r26)
	  li        r4, 0x5810
	  li        r5, 0
	  lwz       r12, 0x28(r3)
	  lwz       r12, 0x88(r12)
	  mtctr     r12
	  bctrl

	.loc_0x2A4:
	  addi      r29, r29, 0x4
	  addi      r28, r28, 0x1

	.loc_0x2AC:
	  lwz       r0, 0x388(r26)
	  cmpw      r28, r0
	  blt+      .loc_0x6C
	  lmw       r26, 0x78(r1)
	  lwz       r0, 0x94(r1)
	  mtlr      r0
	  addi      r1, r1, 0x90
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80353B48
 * Size:	0000B8
 */
void Game::OoPanModoki::Obj::__ct(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  extsh.    r0, r4
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  beq-      .loc_0x3C
	  addi      r0, r31, 0x3C8
	  lis       r3, 0x804B
	  stw       r0, 0x17C(r31)
	  subi      r3, r3, 0x5988
	  li        r0, 0
	  stw       r3, 0x3C8(r31)
	  stw       r0, 0x3CC(r31)
	  stw       r0, 0x3D0(r31)

	.loc_0x3C:
	  mr        r3, r31
	  li        r4, 0
	  bl        -0x41D8
	  lis       r3, 0x804E
	  addi      r0, r31, 0x3C8
	  subi      r4, r3, 0x353C
	  lfs       f4, 0x1E0(r2)
	  stw       r4, 0x0(r31)
	  addi      r3, r4, 0x1B0
	  addi      r5, r4, 0x310
	  lfs       f3, 0x17C(r2)
	  stw       r3, 0x178(r31)
	  mr        r3, r31
	  lfs       f2, 0x1E4(r2)
	  lwz       r4, 0x17C(r31)
	  lfs       f1, 0x1C0(r2)
	  stw       r5, 0x0(r4)
	  lfs       f0, 0x1E8(r2)
	  lwz       r4, 0x17C(r31)
	  sub       r0, r0, r4
	  stw       r0, 0xC(r4)
	  stfs      f4, 0x32C(r31)
	  stfs      f3, 0x330(r31)
	  stfs      f2, 0x338(r31)
	  stfs      f1, 0x33C(r31)
	  stfs      f0, 0x340(r31)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80353C00
 * Size:	000034
 */
void Game::OoPanModoki::Obj::appearRumble(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r4, r3
	  li        r6, 0x2
	  stw       r0, 0x14(r1)
	  addi      r5, r4, 0x18C
	  li        r4, 0xB
	  lwz       r3, -0x6958(r13)
	  bl        -0x1004A0
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80353C34
 * Size:	000034
 */
void Game::OoPanModoki::Obj::hideRumble(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r4, r3
	  li        r6, 0x2
	  stw       r0, 0x14(r1)
	  addi      r5, r4, 0x18C
	  li        r4, 0xA
	  lwz       r3, -0x6958(r13)
	  bl        -0x1004D4
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80353C68
 * Size:	000094
 */
void Game::OoPanModoki::Obj::pressCallBack((Game::Creature*, float, CollPart*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stfd      f31, 0x18(r1)
	  fmr       f31, f1
	  stw       r31, 0x14(r1)
	  mr        r31, r5
	  stw       r30, 0x10(r1)
	  mr.       r30, r4
	  stw       r29, 0xC(r1)
	  mr        r29, r3
	  beq-      .loc_0x60
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x60
	  lbz       r0, 0x2B8(r30)
	  cmpwi     r0, 0x3
	  beq-      .loc_0x60
	  li        r3, 0
	  b         .loc_0x74

	.loc_0x60:
	  fmr       f1, f31
	  mr        r3, r29
	  mr        r4, r30
	  mr        r5, r31
	  bl        -0x39B4

	.loc_0x74:
	  lwz       r0, 0x24(r1)
	  lfd       f31, 0x18(r1)
	  lwz       r31, 0x14(r1)
	  lwz       r30, 0x10(r1)
	  lwz       r29, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80353CFC
 * Size:	000018
 */
void Game::OoPanModoki::Obj::canTarget((int, int))
{
	/*
	.loc_0x0:
	  srawi     r6, r4, 0x1F
	  rlwinm    r3,r5,1,31,31
	  subc      r0, r4, r5
	  adde      r0, r6, r3
	  rlwinm    r3,r0,0,24,31
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80353D14
 * Size:	000008
 */
void Game::OoPanModoki::Obj::getDownSmokeScale(void)
{
	/*
	.loc_0x0:
	  lfs       f1, 0x154(r2)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80353D1C
 * Size:	000008
 */
void Game::OoPanModoki::Obj::getEnemyTypeID(void)
{
	/*
	.loc_0x0:
	  li        r3, 0x28
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80353D24
 * Size:	000028
 */
void __sinit_panModoki_cpp(void)
{
	/*
	.loc_0x0:
	  lis       r4, 0x8051
	  li        r0, -0x1
	  lfs       f0, 0x48B0(r4)
	  lis       r3, 0x804E
	  stw       r0, -0x6750(r13)
	  stfsu     f0, -0x3548(r3)
	  stfs      f0, -0x674C(r13)
	  stfs      f0, 0x4(r3)
	  stfs      f0, 0x8(r3)
	  blr
	*/
}
