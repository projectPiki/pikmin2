

/*
 * --INFO--
 * Address:	80108300
 * Size:	0000B0
 */
void Game::Pelplant::BlendAccelerationFunc::getValue(float)
{
	/*
	.loc_0x0:
	  fneg      f2, f1
	  lfs       f3, -0x6B04(r2)
	  lfs       f4, -0x6B08(r2)
	  lfs       f0, -0x6B00(r2)
	  fmuls     f2, f3, f2
	  stwu      r1, -0x20(r1)
	  fmuls     f2, f4, f2
	  fcmpo     cr0, f2, f0
	  bge-      .loc_0x50
	  lfs       f0, -0x6B10(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fmuls     f0, f2, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x8(r1)
	  lwz       r0, 0xC(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r3, r0
	  fneg      f4, f0
	  b         .loc_0x74

	.loc_0x50:
	  lfs       f0, -0x6B0C(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fmuls     f0, f2, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x10(r1)
	  lwz       r0, 0x14(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f4, r3, r0

	.loc_0x74:
	  lfs       f2, -0x6AF8(r2)
	  lfs       f3, -0x6AFC(r2)
	  fsubs     f0, f2, f1
	  fmuls     f0, f3, f0
	  fmadds    f1, f0, f4, f1
	  fcmpo     cr0, f1, f2
	  ble-      .loc_0x98
	  fmr       f1, f2
	  b         .loc_0xA8

	.loc_0x98:
	  lfs       f0, -0x6B00(r2)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0xA8
	  fmr       f1, f0

	.loc_0xA8:
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801083B0
 * Size:	0000B4
 */
void Game::Pelplant::Obj::birth(Vector3<float>&, float)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x59C4
	  li        r0, 0
	  stb       r0, 0x2D6(r31)
	  lwz       r3, -0x6E28(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x34
	  mr        r4, r31
	  bl        0x1C1B4

	.loc_0x34:
	  lwz       r3, -0x6C18(r13)
	  lwz       r0, 0x44(r3)
	  cmpwi     r0, 0x1
	  bne-      .loc_0x68
	  lwz       r3, 0x2BC(r31)
	  mr        r4, r31
	  li        r5, 0x4
	  li        r6, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x88

	.loc_0x68:
	  lwz       r3, 0x2BC(r31)
	  mr        r4, r31
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl

	.loc_0x88:
	  lis       r4, 0x8048
	  lwz       r3, 0x174(r31)
	  subi      r4, r4, 0x5960
	  bl        0x336BA0
	  bl        0x321458
	  stw       r3, 0x2C4(r31)
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80108464
 * Size:	000280
 */
void Game::Pelplant::Obj::setInitialSetting(Game::EnemyInitialParamBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stfd      f31, 0x20(r1)
	  psq_st    f31,0x28(r1),0,0
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  stw       r28, 0x10(r1)
	  mr        r29, r3
	  lis       r3, 0x8048
	  lbz       r0, 0x2D6(r29)
	  mr        r30, r4
	  subi      r31, r3, 0x59A0
	  extsb.    r0, r0
	  bne-      .loc_0x50
	  lbz       r0, 0x2C8(r29)
	  ori       r0, r0, 0x1
	  stb       r0, 0x2C8(r29)
	  b         .loc_0x5C

	.loc_0x50:
	  lbz       r0, 0x2C8(r29)
	  rlwinm    r0,r0,0,24,30
	  stb       r0, 0x2C8(r29)

	.loc_0x5C:
	  lbz       r0, 0x2D6(r29)
	  extsb.    r0, r0
	  bge-      .loc_0x70
	  li        r0, 0
	  stb       r0, 0x2(r30)

	.loc_0x70:
	  lbz       r0, 0x0(r30)
	  mr        r3, r29
	  li        r5, 0
	  stb       r0, 0x2D4(r29)
	  lbz       r4, 0x2D4(r29)
	  bl        0x96C
	  lbz       r0, 0x1(r30)
	  stb       r0, 0x2D5(r29)
	  lbz       r0, 0x2(r30)
	  cmpwi     r0, 0x1
	  beq-      .loc_0xDC
	  bge-      .loc_0xAC
	  cmpwi     r0, 0
	  bge-      .loc_0xB8
	  b         .loc_0x128

	.loc_0xAC:
	  cmpwi     r0, 0x3
	  bge-      .loc_0x128
	  b         .loc_0x100

	.loc_0xB8:
	  lwz       r3, 0x2BC(r29)
	  mr        r4, r29
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x128

	.loc_0xDC:
	  lwz       r3, 0x2BC(r29)
	  mr        r4, r29
	  li        r5, 0x1
	  li        r6, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x128

	.loc_0x100:
	  lwz       r3, 0x2BC(r29)
	  mr        r4, r29
	  li        r5, 0x2
	  li        r6, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r29
	  bl        0xB4C

	.loc_0x128:
	  lbz       r0, 0x1(r30)
	  cmplwi    r0, 0x5
	  bne-      .loc_0x178
	  stw       r29, -0x6E24(r13)
	  subi      r4, r2, 0x6AF4
	  lwz       r3, 0x174(r29)
	  bl        0x336A40
	  mr.       r28, r3
	  bne-      .loc_0x160
	  addi      r3, r31, 0
	  addi      r5, r31, 0x4C
	  li        r4, 0x16D
	  crclr     6, 0x6
	  bl        -0xDDF80

	.loc_0x160:
	  lis       r4, 0x8011
	  lwz       r3, 0x18(r28)
	  subi      r4, r4, 0x6CA0
	  li        r0, 0
	  stw       r4, 0x4(r3)
	  stw       r0, -0x6E24(r13)

	.loc_0x178:
	  lbz       r0, 0x1(r30)
	  cmplwi    r0, 0xA
	  beq-      .loc_0x18C
	  cmplwi    r0, 0x14
	  bne-      .loc_0x208

	.loc_0x18C:
	  stw       r29, -0x6E24(r13)
	  subi      r4, r2, 0x6AF4
	  lwz       r3, 0x174(r29)
	  bl        0x3369E8
	  mr.       r30, r3
	  bne-      .loc_0x1B8
	  addi      r3, r31, 0
	  addi      r5, r31, 0x4C
	  li        r4, 0x178
	  crclr     6, 0x6
	  bl        -0xDDFD8

	.loc_0x1B8:
	  lis       r4, 0x8011
	  lwz       r3, 0x18(r30)
	  subi      r0, r4, 0x6CA0
	  addi      r4, r31, 0x58
	  stw       r0, 0x4(r3)
	  lwz       r3, 0x174(r29)
	  bl        0x3369B0
	  mr.       r30, r3
	  bne-      .loc_0x1F0
	  addi      r3, r31, 0
	  addi      r5, r31, 0x4C
	  li        r4, 0x17D
	  crclr     6, 0x6
	  bl        -0xDE010

	.loc_0x1F0:
	  lis       r4, 0x8011
	  lwz       r3, 0x18(r30)
	  subi      r4, r4, 0x6BB0
	  li        r0, 0
	  stw       r4, 0x4(r3)
	  stw       r0, -0x6E24(r13)

	.loc_0x208:
	  lis       r4, 0x6865
	  lwz       r3, 0x114(r29)
	  addi      r4, r4, 0x6164
	  bl        0x2D7CC
	  mr        r0, r3
	  mr        r3, r29
	  mr        r28, r0
	  bl        0x5D8
	  fmr       f31, f1
	  mr        r3, r28
	  bl        0x2F778
	  lfs       f0, 0x20(r28)
	  fmuls     f0, f0, f31
	  stfs      f0, 0x20(r28)
	  lfs       f0, 0x24(r28)
	  fmuls     f0, f0, f31
	  stfs      f0, 0x24(r28)
	  lfs       f0, 0x28(r28)
	  fmuls     f0, f0, f31
	  stfs      f0, 0x28(r28)
	  psq_l     f31,0x28(r1),0,0
	  lwz       r0, 0x34(r1)
	  lfd       f31, 0x20(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  lwz       r28, 0x10(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801086E4
 * Size:	000138
 */
void Game::Pelplant::Obj::Obj()
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
	  addi      r0, r31, 0x2D8
	  lis       r3, 0x804B
	  stw       r0, 0x17C(r31)
	  subi      r3, r3, 0x5988
	  li        r0, 0
	  stw       r3, 0x2D8(r31)
	  stw       r0, 0x2DC(r31)
	  stw       r0, 0x2E0(r31)

	.loc_0x40:
	  mr        r3, r31
	  li        r4, 0
	  bl        -0x738C
	  lis       r3, 0x804B
	  addi      r6, r31, 0x2D8
	  subi      r3, r3, 0x5238
	  li        r5, 0
	  stw       r3, 0x0(r31)
	  addi      r0, r3, 0x1B0
	  addi      r8, r3, 0x2FC
	  lfs       f0, -0x6B00(r2)
	  stw       r0, 0x178(r31)
	  li        r4, 0x3
	  li        r0, 0x1
	  li        r3, 0x60
	  lwz       r7, 0x17C(r31)
	  stw       r8, 0x0(r7)
	  lwz       r7, 0x17C(r31)
	  sub       r6, r6, r7
	  stw       r6, 0xC(r7)
	  stw       r5, 0x2BC(r31)
	  stw       r5, 0x2C4(r31)
	  stb       r5, 0x2C8(r31)
	  stw       r5, 0x2CC(r31)
	  stfs      f0, 0x2D0(r31)
	  stb       r4, 0x2D4(r31)
	  stb       r0, 0x2D5(r31)
	  stb       r5, 0x2D6(r31)
	  bl        -0xE48F0
	  mr.       r30, r3
	  beq-      .loc_0xCC
	  bl        0x25948
	  lis       r3, 0x804B
	  subi      r0, r3, 0x5260
	  stw       r0, 0x0(r30)

	.loc_0xCC:
	  stw       r30, 0x184(r31)
	  li        r3, 0x1C
	  bl        -0xE4914
	  mr.       r4, r3
	  beq-      .loc_0x100
	  lis       r5, 0x804B
	  lis       r3, 0x804B
	  subi      r0, r5, 0x680
	  li        r5, -0x1
	  stw       r0, 0x0(r4)
	  subi      r0, r3, 0x4D4C
	  stw       r5, 0x18(r4)
	  stw       r0, 0x0(r4)

	.loc_0x100:
	  lwz       r12, 0x0(r31)
	  mr        r3, r31
	  lwz       r12, 0x2F8(r12)
	  mtctr     r12
	  bctrl
	  li        r0, 0
	  mr        r3, r31
	  stb       r0, 0x2C8(r31)
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
 * Address:	8010881C
 * Size:	00004C
 */
void Game::Pelplant::Obj::setFSM(Game::Pelplant::FSM*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  stw       r4, 0x2BC(r3)
	  mr        r4, r31
	  lwz       r3, 0x2BC(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  li        r0, 0
	  stw       r0, 0x2B4(r31)
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80108868
 * Size:	00005C
 */
void Game::EnemyBlendAnimatorBase::~EnemyBlendAnimatorBase()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr.       r31, r3
	  beq-      .loc_0x44
	  lis       r3, 0x804B
	  subi      r0, r3, 0x7DC
	  stw       r0, 0x0(r31)
	  beq-      .loc_0x34
	  lis       r3, 0x804B
	  subi      r0, r3, 0x23A8
	  stw       r0, 0x0(r31)

	.loc_0x34:
	  extsh.    r0, r4
	  ble-      .loc_0x44
	  mr        r3, r31
	  bl        -0xE47F4

	.loc_0x44:
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
 * Address:	801088C4
 * Size:	000034
 */
void Game::Pelplant::Obj::doUpdate()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r4, r3
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x2BC(r3)
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
 * Address:	801088F8
 * Size:	000088
 */
void Game::Pelplant::Obj::updateLODSphereRadius(int)
{
	/*
	.loc_0x0:
	  cmpwi     r4, 0x2
	  bne-      .loc_0x78
	  lbz       r0, 0x2D5(r3)
	  cmplwi    r0, 0x14
	  bgtlr-
	  lis       r4, 0x804B
	  rlwinm    r0,r0,2,0,29
	  subi      r4, r4, 0x5648
	  lwzx      r0, r4, r0
	  mtctr     r0
	  bctr
	  lis       r4, 0x804B
	  lfs       f0, -0x5658(r4)
	  stfs      f0, 0x27C(r3)
	  blr
	  lis       r4, 0x804B
	  subi      r4, r4, 0x5658
	  lfs       f0, 0x4(r4)
	  stfs      f0, 0x27C(r3)
	  blr
	  lis       r4, 0x804B
	  subi      r4, r4, 0x5658
	  lfs       f0, 0x8(r4)
	  stfs      f0, 0x27C(r3)
	  blr
	  lis       r4, 0x804B
	  subi      r4, r4, 0x5658
	  lfs       f0, 0xC(r4)
	  stfs      f0, 0x27C(r3)
	  blr

	.loc_0x78:
	  lis       r4, 0x804B
	  lfs       f0, -0x5658(r4)
	  stfs      f0, 0x27C(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80108980
 * Size:	000004
 */
void Game::Pelplant::Obj::doDirectDraw(Graphics&)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80108984
 * Size:	00018C
 */
void Game::Pelplant::Obj::doDebugDraw(Graphics&)
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
	  bl        -0x2B34
	  lwz       r3, 0xC0(r30)
	  lhz       r0, 0xDC(r3)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0x174
	  lwz       r4, 0x25C(r31)
	  mr        r3, r31
	  bl        0x31EEEC
	  lwz       r0, -0x7628(r13)
	  li        r12, 0
	  li        r9, 0xFF
	  li        r11, 0x66
	  lfs       f0, -0x6AF8(r2)
	  li        r10, 0x99
	  stw       r0, 0x14(r1)
	  lis       r3, 0x8048
	  lfs       f2, -0x6AEC(r2)
	  subi      r6, r3, 0x593C
	  stw       r12, 0x18(r1)
	  li        r7, 0xC8
	  li        r0, 0x64
	  mr        r3, r31
	  stw       r12, 0x1C(r1)
	  addi      r4, r1, 0x14
	  addi      r5, r1, 0x8
	  subi      r8, r2, 0x6AE4
	  stw       r12, 0x20(r1)
	  stfs      f0, 0x24(r1)
	  stb       r11, 0x28(r1)
	  stb       r10, 0x29(r1)
	  stb       r9, 0x2A(r1)
	  stb       r9, 0x2B(r1)
	  stb       r12, 0x2C(r1)
	  stb       r11, 0x2D(r1)
	  stb       r9, 0x2E(r1)
	  stb       r9, 0x2F(r1)
	  lfs       f1, 0x190(r30)
	  lfs       f3, 0x194(r30)
	  lfs       f0, 0x18C(r30)
	  fadds     f1, f2, f1
	  stfs      f0, 0x8(r1)
	  stfs      f1, 0xC(r1)
	  stfs      f3, 0x10(r1)
	  stb       r7, 0x28(r1)
	  stb       r7, 0x29(r1)
	  stb       r9, 0x2A(r1)
	  stb       r7, 0x2B(r1)
	  stb       r0, 0x2C(r1)
	  stb       r0, 0x2D(r1)
	  stb       r9, 0x2E(r1)
	  stb       r7, 0x2F(r1)
	  lbz       r0, 0x2C8(r30)
	  lbz       r7, 0x2D6(r30)
	  rlwinm.   r0,r0,0,31,31
	  extsb     r7, r7
	  beq-      .loc_0x100
	  subi      r8, r2, 0x6AE8

	.loc_0x100:
	  crclr     6, 0x6
	  bl        0x31F054
	  lfs       f1, 0xC(r1)
	  li        r3, 0xC8
	  lfs       f0, -0x6AE0(r2)
	  li        r5, 0xFF
	  li        r0, 0x64
	  stb       r5, 0x28(r1)
	  fadds     f0, f1, f0
	  mr        r4, r30
	  stb       r3, 0x29(r1)
	  stfs      f0, 0xC(r1)
	  stb       r5, 0x2A(r1)
	  stb       r3, 0x2B(r1)
	  stb       r3, 0x2C(r1)
	  stb       r0, 0x2D(r1)
	  stb       r5, 0x2E(r1)
	  stb       r3, 0x2F(r1)
	  lwz       r3, 0x2BC(r30)
	  bl        0x27F2C
	  lis       r4, 0x8048
	  lfs       f1, 0x2C0(r30)
	  mr        r7, r3
	  mr        r3, r31
	  subi      r6, r4, 0x5928
	  addi      r4, r1, 0x14
	  addi      r5, r1, 0x8
	  crset     6, 0x6
	  bl        0x31EFE8

	.loc_0x174:
	  lwz       r0, 0x44(r1)
	  lwz       r31, 0x3C(r1)
	  lwz       r30, 0x38(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80108B10
 * Size:	0000C0
 */
void Game::Pelplant::Obj::getShadowParam(Game::ShadowParam&)
{
	/*
	.loc_0x0:
	  lfs       f1, 0x18C(r3)
	  lfs       f0, -0x6ADC(r2)
	  stfs      f1, 0x0(r4)
	  lfs       f1, 0x190(r3)
	  stfs      f1, 0x4(r4)
	  lfs       f1, 0x194(r3)
	  stfs      f1, 0x8(r4)
	  lfs       f1, 0x4(r4)
	  fadds     f0, f1, f0
	  stfs      f0, 0x4(r4)
	  lwz       r5, 0xC8(r3)
	  cmplwi    r5, 0
	  beq-      .loc_0x50
	  lfs       f0, 0xC(r5)
	  stfs      f0, 0xC(r4)
	  lfs       f0, 0x10(r5)
	  stfs      f0, 0x10(r4)
	  lfs       f0, 0x14(r5)
	  stfs      f0, 0x14(r4)
	  b         .loc_0x64

	.loc_0x50:
	  lfs       f1, -0x6B00(r2)
	  lfs       f0, -0x6AF8(r2)
	  stfs      f1, 0xC(r4)
	  stfs      f0, 0x10(r4)
	  stfs      f1, 0x14(r4)

	.loc_0x64:
	  lfs       f1, -0x6AD8(r2)
	  lfs       f0, -0x6B00(r2)
	  stfs      f1, 0x18(r4)
	  lwz       r3, 0x2C4(r3)
	  lfs       f1, 0x0(r3)
	  lfs       f2, 0x4(r3)
	  fmuls     f3, f1, f1
	  lfs       f1, 0x8(r3)
	  fmuls     f2, f2, f2
	  fmuls     f1, f1, f1
	  fadds     f3, f3, f2
	  fadds     f3, f3, f1
	  fcmpo     cr0, f3, f0
	  ble-      .loc_0xAC
	  ble-      .loc_0xB0
	  fsqrte    f0, f3
	  fmuls     f3, f0, f3
	  b         .loc_0xB0

	.loc_0xAC:
	  fmr       f3, f0

	.loc_0xB0:
	  lfs       f0, -0x6AD4(r2)
	  fmuls     f0, f0, f3
	  stfs      f0, 0x1C(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80108BD0
 * Size:	000090
 */
void Game::Pelplant::Obj::doAnimationUpdateAnimator()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r5, 0x804B
	  lis       r4, 0x804B
	  stw       r0, 0x24(r1)
	  subi      r0, r5, 0x526C
	  lfs       f1, -0x63C8(r2)
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  stw       r0, 0x8(r1)
	  subi      r0, r4, 0x4F0C
	  lwz       r5, -0x6514(r13)
	  addi      r4, r1, 0x8
	  stw       r0, 0x8(r1)
	  lfs       f0, 0x54(r5)
	  lwz       r3, 0x184(r3)
	  fmuls     f1, f1, f0
	  fmr       f2, f1
	  fmr       f3, f1
	  bl        0x25610
	  lwz       r3, 0x184(r31)
	  lwzu      r12, 0x10(r3)
	  lwz       r31, 0x174(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x8(r31)
	  lwz       r4, 0x4(r4)
	  lwz       r4, 0x28(r4)
	  lwz       r4, 0x0(r4)
	  stw       r3, 0x54(r4)
	  lwz       r31, 0x1C(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80108C60
 * Size:	000058
 */
void Game::Pelplant::Obj::getHeadScale()
{
	/*
	.loc_0x0:
	  lwz       r0, 0x2CC(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x50
	  lbz       r0, 0x2D5(r3)
	  cmplwi    r0, 0x14
	  bgtlr-
	  lis       r3, 0x804B
	  rlwinm    r0,r0,2,0,29
	  subi      r3, r3, 0x55F4
	  lwzx      r0, r3, r0
	  mtctr     r0
	  bctr
	  lfs       f1, -0x6AF8(r2)
	  blr
	  lfs       f1, -0x6ADC(r2)
	  blr
	  lfs       f1, -0x6AD0(r2)
	  blr
	  lfs       f1, -0x6ACC(r2)
	  blr

	.loc_0x50:
	  lfs       f1, -0x6AF8(r2)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80108CB8
 * Size:	000198
 */
void Game::Pelplant::Obj::doAnimation()
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
	  stw       r31, 0x6C(r1)
	  lwz       r6, -0x6514(r13)
	  mr        r31, r3
	  subi      r4, r2, 0x6ABC
	  li        r5, 0x1
	  lwz       r3, 0x28(r6)
	  bl        0x321E0C
	  lwz       r0, 0x2CC(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x88
	  lbz       r0, 0x2D5(r31)
	  cmplwi    r0, 0x14
	  bgt-      .loc_0x8C
	  lis       r3, 0x804B
	  rlwinm    r0,r0,2,0,29
	  subi      r3, r3, 0x554C
	  lwzx      r0, r3, r0
	  mtctr     r0
	  bctr
	  lfs       f31, -0x6AF8(r2)
	  b         .loc_0x8C
	  lfs       f31, -0x6ADC(r2)
	  b         .loc_0x8C
	  lfs       f31, -0x6AD0(r2)
	  b         .loc_0x8C
	  lfs       f31, -0x6ACC(r2)
	  b         .loc_0x8C

	.loc_0x88:
	  lfs       f31, -0x6AF8(r2)

	.loc_0x8C:
	  stw       r31, -0x6E24(r13)
	  mr        r3, r31
	  bl        -0x5DB8
	  li        r0, 0
	  stw       r0, -0x6E24(r13)
	  lwz       r0, 0x2CC(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x164
	  lbz       r6, 0x2D5(r31)
	  cmplwi    r6, 0x14
	  bgt-      .loc_0xF0
	  lis       r3, 0x804B
	  rlwinm    r0,r6,2,0,29
	  subi      r3, r3, 0x55A0
	  lwzx      r0, r3, r0
	  mtctr     r0
	  bctr
	  lfs       f30, -0x6AB4(r2)
	  b         .loc_0x10C
	  lfs       f30, -0x6AB4(r2)
	  b         .loc_0x10C
	  lfs       f30, -0x6AB4(r2)
	  b         .loc_0x10C
	  lfs       f30, -0x6AB4(r2)
	  b         .loc_0x10C

	.loc_0xF0:
	  lis       r3, 0x8048
	  lis       r4, 0x8048
	  subi      r5, r4, 0x591C
	  subi      r3, r3, 0x59A0
	  li        r4, 0x297
	  crclr     6, 0x6
	  bl        -0xDE780

	.loc_0x10C:
	  lfs       f0, -0x6AF8(r2)
	  addi      r3, r1, 0x2C
	  lfs       f2, -0x6B00(r2)
	  addi      r4, r1, 0x8
	  fdivs     f3, f0, f31
	  lfs       f1, -0x6AB0(r2)
	  lfs       f0, -0x6AAC(r2)
	  addi      r5, r1, 0x14
	  stfs      f30, 0x20(r1)
	  addi      r6, r1, 0x20
	  stfs      f2, 0x24(r1)
	  stfs      f2, 0x28(r1)
	  stfs      f2, 0x14(r1)
	  stfs      f1, 0x18(r1)
	  stfs      f0, 0x1C(r1)
	  stfs      f3, 0x8(r1)
	  stfs      f3, 0xC(r1)
	  stfs      f3, 0x10(r1)
	  bl        0x31F4CC
	  lwz       r3, 0x2CC(r31)
	  addi      r4, r1, 0x2C
	  bl        0x96CE4

	.loc_0x164:
	  lwz       r3, -0x6514(r13)
	  subi      r4, r2, 0x6ABC
	  lwz       r3, 0x28(r3)
	  bl        0x321CD4
	  psq_l     f31,0x88(r1),0,0
	  lfd       f31, 0x80(r1)
	  psq_l     f30,0x78(r1),0,0
	  lfd       f30, 0x70(r1)
	  lwz       r0, 0x94(r1)
	  lwz       r31, 0x6C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x90
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80108E50
 * Size:	000004
 */
void Game::Pelplant::Obj::doSimulation(float)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80108E54
 * Size:	0000F0
 */
void Game::Pelplant::Obj::setPelletColor(unsigned short, bool)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  mr        r30, r4
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  lwz       r31, 0x2CC(r3)
	  cmplwi    r31, 0
	  beq-      .loc_0xD4
	  rlwinm    r4,r30,0,16,31
	  cmpwi     r4, 0x3
	  bge-      .loc_0xCC
	  cmpwi     r4, 0
	  bge-      .loc_0x44
	  b         .loc_0xCC

	.loc_0x44:
	  rlwinm.   r0,r5,0,24,31
	  beq-      .loc_0xA0
	  lwz       r3, -0x6B70(r13)
	  bl        0xDE204
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x90
	  rlwinm    r0,r30,0,16,31
	  lwz       r31, 0x2CC(r29)
	  cmplwi    r0, 0x2
	  ble-      .loc_0x88
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  subi      r3, r3, 0x5900
	  li        r4, 0x38D
	  subi      r5, r5, 0x5954
	  crclr     6, 0x6
	  bl        -0xDE898

	.loc_0x88:
	  sth       r30, 0x43E(r31)
	  b         .loc_0xD4

	.loc_0x90:
	  lwz       r3, 0x2CC(r29)
	  li        r0, 0x1
	  sth       r0, 0x43E(r3)
	  b         .loc_0xD4

	.loc_0xA0:
	  cmplwi    r4, 0x2
	  ble-      .loc_0xC4
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  subi      r3, r3, 0x5900
	  li        r4, 0x38D
	  subi      r5, r5, 0x5954
	  crclr     6, 0x6
	  bl        -0xDE8D4

	.loc_0xC4:
	  sth       r30, 0x43E(r31)
	  b         .loc_0xD4

	.loc_0xCC:
	  li        r0, 0x1
	  sth       r0, 0x43E(r31)

	.loc_0xD4:
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
 * Address:	80108F44
 * Size:	000190
 */
void Game::Pelplant::Obj::changePelletColor()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  lwz       r4, 0x2CC(r3)
	  cmplwi    r4, 0
	  beq-      .loc_0x174
	  lbz       r0, 0x2D4(r31)
	  cmplwi    r0, 0x3
	  bne-      .loc_0x174
	  lwz       r3, 0xC0(r31)
	  lfs       f1, 0x2D0(r31)
	  lfs       f0, 0x86C(r3)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x158
	  cmplwi    r4, 0
	  beq-      .loc_0x58
	  lhz       r3, 0x43E(r4)
	  b         .loc_0x5C

	.loc_0x58:
	  li        r3, 0

	.loc_0x5C:
	  addi      r0, r3, 0x1
	  rlwinm    r29,r0,0,16,31
	  mr        r30, r29
	  b         .loc_0x90

	.loc_0x6C:
	  addi      r29, r29, 0x1
	  rlwinm    r0,r29,0,16,31
	  cmplwi    r0, 0x2
	  ble-      .loc_0x80
	  li        r29, 0

	.loc_0x80:
	  rlwinm    r0,r29,0,16,31
	  cmplw     r0, r30
	  bne-      .loc_0x90
	  li        r29, 0x1

	.loc_0x90:
	  lwz       r3, -0x6B70(r13)
	  rlwinm    r4,r29,0,16,31
	  bl        0xDE0CC
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x6C
	  rlwinm    r0,r29,0,16,31
	  cmplwi    r0, 0x2
	  ble-      .loc_0xB4
	  li        r29, 0

	.loc_0xB4:
	  lwz       r3, 0x2CC(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x134
	  rlwinm    r4,r29,0,16,31
	  cmpwi     r4, 0x3
	  bge-      .loc_0x12C
	  cmpwi     r4, 0
	  bge-      .loc_0xD8
	  b         .loc_0x12C

	.loc_0xD8:
	  lwz       r3, -0x6B70(r13)
	  bl        0xDE088
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x11C
	  rlwinm    r0,r29,0,16,31
	  lwz       r30, 0x2CC(r31)
	  cmplwi    r0, 0x2
	  ble-      .loc_0x114
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  subi      r3, r3, 0x5900
	  li        r4, 0x38D
	  subi      r5, r5, 0x5954
	  crclr     6, 0x6
	  bl        -0xDEA14

	.loc_0x114:
	  sth       r29, 0x43E(r30)
	  b         .loc_0x134

	.loc_0x11C:
	  lwz       r3, 0x2CC(r31)
	  li        r0, 0x1
	  sth       r0, 0x43E(r3)
	  b         .loc_0x134

	.loc_0x12C:
	  li        r0, 0x1
	  sth       r0, 0x43E(r3)

	.loc_0x134:
	  lbz       r0, 0x2C8(r31)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0x14C
	  lfs       f0, -0x6B00(r2)
	  stfs      f0, 0x2D0(r31)
	  b         .loc_0x174

	.loc_0x14C:
	  lfs       f0, -0x6B00(r2)
	  stfs      f0, 0x2D0(r31)
	  b         .loc_0x174

	.loc_0x158:
	  lbz       r0, 0x2C8(r31)
	  lwz       r3, -0x6514(r13)
	  rlwinm.   r0,r0,0,31,31
	  lfs       f0, 0x54(r3)
	  beq-      .loc_0x174
	  fadds     f0, f1, f0
	  stfs      f0, 0x2D0(r31)

	.loc_0x174:
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
 * Address:	801090D4
 * Size:	000110
 */
void Game::Pelplant::Obj::attachPellet()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stw       r31, 0x3C(r1)
	  stw       r30, 0x38(r1)
	  stw       r29, 0x34(r1)
	  stw       r28, 0x30(r1)
	  mr        r28, r3
	  lis       r3, 0x8048
	  lwz       r0, 0x2CC(r28)
	  subi      r31, r3, 0x59A0
	  cmplwi    r0, 0
	  bne-      .loc_0xF0
	  stw       r28, -0x6E24(r13)
	  addi      r3, r1, 0x8
	  li        r5, 0
	  lbz       r4, 0x2D5(r28)
	  bl        0x5DA5C
	  lwz       r3, -0x6CE0(r13)
	  addi      r4, r1, 0x8
	  bl        0x6439C
	  mr.       r29, r3
	  beq-      .loc_0xE8
	  lwz       r3, 0x174(r28)
	  subi      r4, r2, 0x6AF4
	  bl        0x335EAC
	  bl        0x320764
	  mr.       r30, r3
	  bne-      .loc_0x88
	  addi      r3, r31, 0
	  addi      r5, r31, 0x4C
	  li        r4, 0x309
	  crclr     6, 0x6
	  bl        -0xDEB18

	.loc_0x88:
	  mr        r3, r29
	  mr        r4, r30
	  bl        0x96944
	  stw       r29, 0x2CC(r28)
	  lwz       r29, 0x2CC(r28)
	  lbz       r30, 0x2D4(r28)
	  cmplwi    r29, 0
	  beq-      .loc_0xE8
	  cmpwi     r30, 0x3
	  bge-      .loc_0xE0
	  cmpwi     r30, 0
	  bge-      .loc_0xBC
	  b         .loc_0xE0

	.loc_0xBC:
	  cmplwi    r30, 0x2
	  ble-      .loc_0xD8
	  addi      r3, r31, 0xA0
	  addi      r5, r31, 0x4C
	  li        r4, 0x38D
	  crclr     6, 0x6
	  bl        -0xDEB68

	.loc_0xD8:
	  sth       r30, 0x43E(r29)
	  b         .loc_0xE8

	.loc_0xE0:
	  li        r0, 0x1
	  sth       r0, 0x43E(r29)

	.loc_0xE8:
	  li        r0, 0
	  stw       r0, -0x6E24(r13)

	.loc_0xF0:
	  lwz       r0, 0x44(r1)
	  lwz       r31, 0x3C(r1)
	  lwz       r30, 0x38(r1)
	  lwz       r29, 0x34(r1)
	  lwz       r28, 0x30(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801091E4
 * Size:	000098
 */
void Game::Pelplant::Obj::damageCallBack(Game::Creature*, float, CollPart*)
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
	  lwz       r12, 0x0(r3)
	  fmr       f31, f1
	  mr        r30, r3
	  mr        r31, r5
	  lwz       r12, 0xD4(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x74
	  fmr       f1, f31
	  lfs       f2, -0x6AF8(r2)
	  mr        r3, r30
	  bl        -0x3204
	  cmplwi    r31, 0
	  beq-      .loc_0x74
	  lbz       r0, 0x47(r31)
	  cmpwi     r0, 0x30
	  bne-      .loc_0x74
	  lfs       f1, 0x204(r30)
	  mr        r3, r30
	  lfs       f2, -0x6AF8(r2)
	  bl        -0x3228

	.loc_0x74:
	  li        r3, 0x1
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
 * Address:	8010927C
 * Size:	00000C
 */
void Game::Pelplant::Obj::isLivingThing()
{
	/*
	.loc_0x0:
	  lbz       r0, 0x2C8(r3)
	  rlwinm    r3,r0,31,31,31
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80109288
 * Size:	000078
 */
void Game::Pelplant::Obj::farmCallBack(Game::Creature*, float)
{
	/*
	.loc_0x0:
	  lfs       f0, -0x6B00(r2)
	  stwu      r1, -0x10(r1)
	  fcmpo     cr0, f1, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x20
	  lfs       f0, -0x6AFC(r2)
	  fadds     f0, f0, f1
	  b         .loc_0x28

	.loc_0x20:
	  lfs       f0, -0x6AFC(r2)
	  fsubs     f0, f1, f0

	.loc_0x28:
	  fctiwz    f0, f0
	  stfd      f0, 0x8(r1)
	  lwz       r0, 0xC(r1)
	  stb       r0, 0x2D6(r3)
	  lbz       r0, 0x2D6(r3)
	  extsb.    r0, r0
	  bge-      .loc_0x54
	  lbz       r0, 0x2C8(r3)
	  rlwinm    r0,r0,0,24,30
	  stb       r0, 0x2C8(r3)
	  b         .loc_0x60

	.loc_0x54:
	  lbz       r0, 0x2C8(r3)
	  ori       r0, r0, 0x1
	  stb       r0, 0x2C8(r3)

	.loc_0x60:
	  lwz       r0, 0x1E0(r3)
	  rlwinm    r0,r0,0,26,24
	  stw       r0, 0x1E0(r3)
	  li        r3, 0x1
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80109300
 * Size:	000060
 */
void Game::Pelplant::Obj::onStickStart(Game::Creature*)
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
	  bl        -0x33EC
	  lwz       r3, 0xF8(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x48
	  lbz       r0, 0x47(r3)
	  cmpwi     r0, 0x30
	  bne-      .loc_0x48
	  lfs       f1, 0x204(r30)
	  mr        r3, r30
	  lfs       f2, -0x6AF8(r2)
	  bl        -0x3318

	.loc_0x48:
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
 * Address:	80109360
 * Size:	0000F0
 */
void Game::Pelplant::Obj::headJointCallBack(J3DJoint*, int)
{
	/*
	.loc_0x0:
	  lwz       r5, -0x6E24(r13)
	  cmplwi    r5, 0
	  beq-      .loc_0xE8
	  cmpwi     r4, 0x1
	  bne-      .loc_0xE8
	  lhz       r3, 0x14(r3)
	  lwz       r4, -0x7678(r13)
	  lwz       r0, 0x2CC(r5)
	  mulli     r3, r3, 0x30
	  lwz       r4, 0xC(r4)
	  cmplwi    r0, 0
	  add       r4, r4, r3
	  beq-      .loc_0x78
	  lbz       r0, 0x2D5(r5)
	  cmplwi    r0, 0x14
	  bgt-      .loc_0x7C
	  lis       r3, 0x804B
	  rlwinm    r0,r0,2,0,29
	  subi      r3, r3, 0x54F8
	  lwzx      r0, r3, r0
	  mtctr     r0
	  bctr
	  lfs       f1, -0x6AF8(r2)
	  b         .loc_0x7C
	  lfs       f1, -0x6ADC(r2)
	  b         .loc_0x7C
	  lfs       f1, -0x6AD0(r2)
	  b         .loc_0x7C
	  lfs       f1, -0x6ACC(r2)
	  b         .loc_0x7C

	.loc_0x78:
	  lfs       f1, -0x6AF8(r2)

	.loc_0x7C:
	  lfs       f0, 0x0(r4)
	  fmuls     f0, f0, f1
	  stfs      f0, 0x0(r4)
	  lfs       f0, 0x4(r4)
	  fmuls     f0, f0, f1
	  stfs      f0, 0x4(r4)
	  lfs       f0, 0x8(r4)
	  fmuls     f0, f0, f1
	  stfs      f0, 0x8(r4)
	  lfs       f0, 0x10(r4)
	  fmuls     f0, f0, f1
	  stfs      f0, 0x10(r4)
	  lfs       f0, 0x14(r4)
	  fmuls     f0, f0, f1
	  stfs      f0, 0x14(r4)
	  lfs       f0, 0x18(r4)
	  fmuls     f0, f0, f1
	  stfs      f0, 0x18(r4)
	  lfs       f0, 0x20(r4)
	  fmuls     f0, f0, f1
	  stfs      f0, 0x20(r4)
	  lfs       f0, 0x24(r4)
	  fmuls     f0, f0, f1
	  stfs      f0, 0x24(r4)
	  lfs       f0, 0x28(r4)
	  fmuls     f0, f0, f1
	  stfs      f0, 0x28(r4)

	.loc_0xE8:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80109450
 * Size:	000104
 */
void Game::Pelplant::Obj::neckJointCallBack(J3DJoint*, int)
{
	/*
	.loc_0x0:
	  lwz       r5, -0x6E24(r13)
	  cmplwi    r5, 0
	  beq-      .loc_0xFC
	  cmpwi     r4, 0x1
	  bne-      .loc_0xFC
	  lhz       r3, 0x14(r3)
	  lwz       r4, -0x7678(r13)
	  lwz       r0, 0x2CC(r5)
	  mulli     r3, r3, 0x30
	  lwz       r4, 0xC(r4)
	  cmplwi    r0, 0
	  add       r4, r4, r3
	  beq-      .loc_0x88
	  lbz       r0, 0x2D5(r5)
	  cmplwi    r0, 0x14
	  bgt-      .loc_0x90
	  lis       r3, 0x804B
	  rlwinm    r0,r0,2,0,29
	  subi      r3, r3, 0x54A4
	  lwzx      r0, r3, r0
	  mtctr     r0
	  bctr
	  lfs       f2, -0x6AF8(r2)
	  fmr       f1, f2
	  b         .loc_0x90
	  lfs       f2, -0x6AF8(r2)
	  fmr       f1, f2
	  b         .loc_0x90
	  lfs       f2, -0x6AC8(r2)
	  lfs       f1, -0x6AC4(r2)
	  b         .loc_0x90
	  lfs       f2, -0x6ADC(r2)
	  lfs       f1, -0x6AC0(r2)
	  b         .loc_0x90

	.loc_0x88:
	  lfs       f2, -0x6AF8(r2)
	  fmr       f1, f2

	.loc_0x90:
	  lfs       f0, 0x0(r4)
	  fmuls     f0, f0, f2
	  stfs      f0, 0x0(r4)
	  lfs       f0, 0x4(r4)
	  fmuls     f0, f0, f2
	  stfs      f0, 0x4(r4)
	  lfs       f0, 0x8(r4)
	  fmuls     f0, f0, f2
	  stfs      f0, 0x8(r4)
	  lfs       f0, 0x10(r4)
	  fmuls     f0, f0, f1
	  stfs      f0, 0x10(r4)
	  lfs       f0, 0x14(r4)
	  fmuls     f0, f0, f1
	  stfs      f0, 0x14(r4)
	  lfs       f0, 0x18(r4)
	  fmuls     f0, f0, f1
	  stfs      f0, 0x18(r4)
	  lfs       f0, 0x20(r4)
	  fmuls     f0, f0, f2
	  stfs      f0, 0x20(r4)
	  lfs       f0, 0x24(r4)
	  fmuls     f0, f0, f2
	  stfs      f0, 0x24(r4)
	  lfs       f0, 0x28(r4)
	  fmuls     f0, f0, f2
	  stfs      f0, 0x28(r4)

	.loc_0xFC:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80109554
 * Size:	000050
 */
void Game::Pelplant::Mgr::Mgr(int, unsigned char)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        0x2572C
	  lis       r3, 0x804B
	  lis       r4, 0x8048
	  subi      r5, r3, 0x5450
	  mr        r3, r31
	  stw       r5, 0x0(r31)
	  addi      r5, r5, 0x38
	  subi      r0, r4, 0x58F4
	  stw       r5, 0x4(r31)
	  stw       r0, 0x18(r31)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801095A4
 * Size:	000098
 */
void Game::EnemyMgrBase::~EnemyMgrBase()
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
	  beq-      .loc_0x7C
	  lis       r3, 0x804B
	  subi      r3, r3, 0x760
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x38
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x6C
	  lis       r3, 0x804B
	  addic.    r0, r30, 0x4
	  subi      r3, r3, 0x5304
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x38
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x6C
	  lis       r4, 0x804B
	  addi      r3, r30, 0x4
	  subi      r0, r4, 0x5324
	  li        r4, 0
	  stw       r0, 0x4(r30)
	  bl        0x307F7C

	.loc_0x6C:
	  extsh.    r0, r31
	  ble-      .loc_0x7C
	  mr        r3, r30
	  bl        -0xE5568

	.loc_0x7C:
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
 * Address:	8010963C
 * Size:	000048
 */
void Game::Pelplant::Mgr::doAlloc()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  li        r3, 0x880
	  bl        -0xE57B0
	  mr.       r4, r3
	  beq-      .loc_0x2C
	  bl        .loc_0x48
	  mr        r4, r3

	.loc_0x2C:
	  mr        r3, r31
	  bl        0x26230
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr

	.loc_0x48:
	*/
}

/*
 * --INFO--
 * Address:	80109684
 * Size:	000118
 */
void Game::Pelplant::Parms::Parms()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r4, 0x8048
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  subi      r31, r4, 0x59A0
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  bl        .loc_0x118
	  lis       r3, 0x804B
	  lis       r5, 0x6670
	  subi      r0, r3, 0x5330
	  addi      r4, r30, 0x87C
	  stw       r0, 0xD8(r30)
	  li        r7, 0
	  addi      r0, r31, 0xC4
	  addi      r3, r30, 0x804
	  stw       r4, 0x7F8(r30)
	  addi      r4, r30, 0x7F8
	  addi      r5, r5, 0x3031
	  addi      r6, r31, 0xD4
	  stw       r7, 0x7FC(r30)
	  stw       r0, 0x800(r30)
	  bl        0x309F78
	  lis       r3, 0x804B
	  lis       r5, 0x6670
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x6AA8(r2)
	  stw       r0, 0x804(r30)
	  addi      r3, r30, 0x82C
	  lfs       f1, -0x6B00(r2)
	  addi      r4, r30, 0x7F8
	  stfs      f0, 0x81C(r30)
	  addi      r5, r5, 0x3032
	  lfs       f0, -0x6AA4(r2)
	  addi      r6, r31, 0xE4
	  stfs      f1, 0x824(r30)
	  stfs      f0, 0x828(r30)
	  bl        0x309F3C
	  lis       r3, 0x804B
	  lis       r5, 0x6670
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x6AA8(r2)
	  stw       r0, 0x82C(r30)
	  addi      r3, r30, 0x854
	  lfs       f1, -0x6B00(r2)
	  addi      r4, r30, 0x7F8
	  stfs      f0, 0x844(r30)
	  addi      r5, r5, 0x3033
	  lfs       f0, -0x6AA4(r2)
	  addi      r6, r31, 0xF4
	  stfs      f1, 0x84C(r30)
	  stfs      f0, 0x850(r30)
	  bl        0x309F00
	  lis       r3, 0x804B
	  lfs       f2, -0x6AC8(r2)
	  subi      r0, r3, 0x5344
	  lfs       f1, -0x6B00(r2)
	  stw       r0, 0x854(r30)
	  mr        r3, r30
	  lfs       f0, -0x6AA0(r2)
	  stfs      f2, 0x86C(r30)
	  stfs      f1, 0x874(r30)
	  stfs      f0, 0x878(r30)
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr

	.loc_0x118:
	*/
}

/*
 * --INFO--
 * Address:	8010979C
 * Size:	0001D4
 */
void Game::EnemyParmsBase::EnemyParmsBase()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r5, 0x7330
	  lis       r4, 0x804B
	  stw       r0, 0x14(r1)
	  subi      r0, r4, 0x5350
	  addi      r5, r5, 0x3030
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lis       r3, 0x8048
	  stw       r30, 0x8(r1)
	  subi      r30, r3, 0x59A0
	  li        r3, 0
	  mr        r4, r31
	  stw       r0, 0xD8(r31)
	  addi      r0, r31, 0xD4
	  addi      r6, r30, 0x118
	  stw       r0, 0x0(r31)
	  addi      r0, r30, 0x104
	  stw       r3, 0x4(r31)
	  addi      r3, r31, 0xC
	  stw       r0, 0x8(r31)
	  bl        0x309E64
	  lis       r3, 0x804B
	  lis       r5, 0x7330
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x6AFC(r2)
	  stw       r0, 0xC(r31)
	  mr        r4, r31
	  lfs       f1, -0x6B00(r2)
	  addi      r3, r31, 0x34
	  stfs      f0, 0x24(r31)
	  addi      r5, r5, 0x3031
	  lfs       f0, -0x6AF8(r2)
	  addi      r6, r30, 0x12C
	  stfs      f1, 0x2C(r31)
	  stfs      f0, 0x30(r31)
	  bl        0x309E28
	  lis       r3, 0x804B
	  lis       r5, 0x7330
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x6AFC(r2)
	  stw       r0, 0x34(r31)
	  mr        r4, r31
	  lfs       f1, -0x6B00(r2)
	  addi      r3, r31, 0x5C
	  stfs      f0, 0x4C(r31)
	  addi      r5, r5, 0x3032
	  lfs       f0, -0x6AF8(r2)
	  addi      r6, r30, 0x13C
	  stfs      f1, 0x54(r31)
	  stfs      f0, 0x58(r31)
	  bl        0x309DEC
	  lis       r3, 0x804B
	  lis       r5, 0x7330
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x6A9C(r2)
	  stw       r0, 0x5C(r31)
	  mr        r4, r31
	  lfs       f1, -0x6B00(r2)
	  addi      r3, r31, 0x84
	  stfs      f0, 0x74(r31)
	  addi      r5, r5, 0x3033
	  lfs       f0, -0x6AF8(r2)
	  subi      r6, r2, 0x6A98
	  stfs      f1, 0x7C(r31)
	  stfs      f0, 0x80(r31)
	  bl        0x309DB0
	  lis       r3, 0x804B
	  lis       r5, 0x7330
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x6A90(r2)
	  stw       r0, 0x84(r31)
	  mr        r4, r31
	  lfs       f1, -0x6A8C(r2)
	  addi      r3, r31, 0xAC
	  stfs      f0, 0x9C(r31)
	  addi      r5, r5, 0x3034
	  lfs       f0, -0x6ADC(r2)
	  addi      r6, r30, 0x14C
	  stfs      f1, 0xA4(r31)
	  stfs      f0, 0xA8(r31)
	  bl        0x309D74
	  lis       r3, 0x804B
	  lfs       f0, -0x6A88(r2)
	  subi      r0, r3, 0x5344
	  lfs       f1, -0x6A8C(r2)
	  stw       r0, 0xAC(r31)
	  lis       r5, 0x804B
	  subi      r0, r5, 0x535C
	  lis       r3, 0x8011
	  stfs      f0, 0xC4(r31)
	  subi      r4, r3, 0x5BB0
	  lfs       f0, -0x6ADC(r2)
	  addi      r3, r31, 0xDC
	  stfs      f1, 0xCC(r31)
	  li        r5, 0
	  li        r6, 0x2
	  li        r7, 0x2
	  stfs      f0, 0xD0(r31)
	  stw       r0, 0xD8(r31)
	  bl        -0x480F4
	  addi      r3, r31, 0xE0
	  li        r4, 0x1
	  bl        .loc_0x1D4
	  li        r0, 0
	  mr        r3, r31
	  stb       r0, 0xDC(r31)
	  stb       r0, 0xDD(r31)
	  stb       r0, 0xDE(r31)
	  stb       r0, 0xDF(r31)
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr

	.loc_0x1D4:
	*/
}

/*
 * --INFO--
 * Address:	80109970
 * Size:	000AE0
 */
void Game::EnemyParmsBase::Parms::Parms()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  extsh.    r0, r4
	  lis       r4, 0x8048
	  stw       r31, 0xC(r1)
	  subi      r31, r4, 0x59A0
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  beq-      .loc_0x30
	  addi      r0, r30, 0x714
	  stw       r0, 0x0(r30)

	.loc_0x30:
	  li        r0, 0
	  lis       r5, 0x6670
	  stw       r0, 0x4(r30)
	  addi      r0, r31, 0xC4
	  mr        r4, r30
	  addi      r3, r30, 0xC
	  stw       r0, 0x8(r30)
	  addi      r5, r5, 0x3030
	  subi      r6, r2, 0x6A84
	  bl        0x309C94
	  lis       r3, 0x804B
	  lis       r5, 0x6670
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x6AEC(r2)
	  stw       r0, 0xC(r30)
	  mr        r4, r30
	  lfs       f1, -0x6B00(r2)
	  addi      r3, r30, 0x34
	  stfs      f0, 0x24(r30)
	  addi      r5, r5, 0x3237
	  lfs       f0, -0x6A7C(r2)
	  addi      r6, r31, 0x15C
	  stfs      f1, 0x2C(r30)
	  stfs      f0, 0x30(r30)
	  bl        0x309C58
	  lis       r3, 0x804B
	  lis       r5, 0x6670
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x6AD8(r2)
	  stw       r0, 0x34(r30)
	  mr        r4, r30
	  lfs       f1, -0x6B00(r2)
	  addi      r3, r30, 0x5C
	  stfs      f0, 0x4C(r30)
	  addi      r5, r5, 0x3331
	  lfs       f0, -0x6A78(r2)
	  addi      r6, r31, 0x16C
	  stfs      f1, 0x54(r30)
	  stfs      f0, 0x58(r30)
	  bl        0x309C1C
	  lis       r3, 0x804B
	  lis       r5, 0x6670
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x6A8C(r2)
	  stw       r0, 0x5C(r30)
	  mr        r4, r30
	  lfs       f1, -0x6B00(r2)
	  addi      r3, r30, 0x84
	  stfs      f0, 0x74(r30)
	  addi      r5, r5, 0x3330
	  lfs       f0, -0x6AF8(r2)
	  addi      r6, r31, 0x17C
	  stfs      f1, 0x7C(r30)
	  stfs      f0, 0x80(r30)
	  bl        0x309BE0
	  lis       r3, 0x804B
	  lis       r5, 0x6670
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x6A74(r2)
	  stw       r0, 0x84(r30)
	  mr        r4, r30
	  lfs       f1, -0x6B00(r2)
	  addi      r3, r30, 0xAC
	  stfs      f0, 0x9C(r30)
	  addi      r5, r5, 0x3031
	  lfs       f0, -0x6A7C(r2)
	  addi      r6, r31, 0x188
	  stfs      f1, 0xA4(r30)
	  stfs      f0, 0xA8(r30)
	  bl        0x309BA4
	  lis       r3, 0x804B
	  lis       r5, 0x6670
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x6A70(r2)
	  stw       r0, 0xAC(r30)
	  mr        r4, r30
	  lfs       f1, -0x6B00(r2)
	  addi      r3, r30, 0xD4
	  stfs      f0, 0xC4(r30)
	  addi      r5, r5, 0x3333
	  lfs       f0, -0x6AEC(r2)
	  addi      r6, r31, 0x198
	  stfs      f1, 0xCC(r30)
	  stfs      f0, 0xD0(r30)
	  bl        0x309B68
	  lis       r3, 0x804B
	  lis       r5, 0x6670
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x6A70(r2)
	  stw       r0, 0xD4(r30)
	  mr        r4, r30
	  lfs       f1, -0x6B00(r2)
	  addi      r3, r30, 0xFC
	  stfs      f0, 0xEC(r30)
	  addi      r5, r5, 0x3334
	  lfs       f0, -0x6A6C(r2)
	  addi      r6, r31, 0x1B8
	  stfs      f1, 0xF4(r30)
	  stfs      f0, 0xF8(r30)
	  bl        0x309B2C
	  lis       r3, 0x804B
	  lis       r5, 0x6670
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x6A70(r2)
	  stw       r0, 0xFC(r30)
	  mr        r4, r30
	  lfs       f1, -0x6B00(r2)
	  addi      r3, r30, 0x124
	  stfs      f0, 0x114(r30)
	  addi      r5, r5, 0x3332
	  lfs       f0, -0x6A6C(r2)
	  subi      r6, r2, 0x6A68
	  stfs      f1, 0x11C(r30)
	  stfs      f0, 0x120(r30)
	  bl        0x309AF0
	  lis       r3, 0x804B
	  lis       r5, 0x6670
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x6A70(r2)
	  stw       r0, 0x124(r30)
	  mr        r4, r30
	  lfs       f1, -0x6B00(r2)
	  addi      r3, r30, 0x14C
	  stfs      f0, 0x13C(r30)
	  addi      r5, r5, 0x3032
	  lfs       f0, -0x6A6C(r2)
	  addi      r6, r31, 0x1CC
	  stfs      f1, 0x144(r30)
	  stfs      f0, 0x148(r30)
	  bl        0x309AB4
	  lis       r3, 0x804B
	  lis       r5, 0x6670
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x6A60(r2)
	  stw       r0, 0x14C(r30)
	  mr        r4, r30
	  lfs       f1, -0x6B00(r2)
	  addi      r3, r30, 0x174
	  stfs      f0, 0x164(r30)
	  addi      r5, r5, 0x3033
	  lfs       f0, -0x6AF8(r2)
	  addi      r6, r31, 0x1E0
	  stfs      f1, 0x16C(r30)
	  stfs      f0, 0x170(r30)
	  bl        0x309A78
	  lis       r3, 0x804B
	  lis       r5, 0x6670
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x6A9C(r2)
	  stw       r0, 0x174(r30)
	  mr        r4, r30
	  lfs       f1, -0x6B00(r2)
	  addi      r3, r30, 0x19C
	  stfs      f0, 0x18C(r30)
	  addi      r5, r5, 0x3034
	  lfs       f0, -0x6AF8(r2)
	  addi      r6, r31, 0x1F4
	  stfs      f1, 0x194(r30)
	  stfs      f0, 0x198(r30)
	  bl        0x309A3C
	  lis       r3, 0x804B
	  lis       r5, 0x6670
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x6A5C(r2)
	  stw       r0, 0x19C(r30)
	  mr        r4, r30
	  lfs       f1, -0x6B00(r2)
	  addi      r3, r30, 0x1C4
	  stfs      f0, 0x1B4(r30)
	  addi      r5, r5, 0x3035
	  lfs       f0, -0x6AF8(r2)
	  subi      r6, r2, 0x6A58
	  stfs      f1, 0x1BC(r30)
	  stfs      f0, 0x1C0(r30)
	  bl        0x309A00
	  lis       r3, 0x804B
	  lis       r5, 0x6670
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x6AF8(r2)
	  stw       r0, 0x1C4(r30)
	  mr        r4, r30
	  lfs       f1, -0x6B00(r2)
	  addi      r3, r30, 0x1EC
	  stfs      f0, 0x1DC(r30)
	  addi      r5, r5, 0x3036
	  lfs       f0, -0x6AEC(r2)
	  subi      r6, r2, 0x6A50
	  stfs      f1, 0x1E4(r30)
	  stfs      f0, 0x1E8(r30)
	  bl        0x3099C4
	  lis       r3, 0x804B
	  lis       r5, 0x6670
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x6A48(r2)
	  stw       r0, 0x1EC(r30)
	  mr        r4, r30
	  lfs       f1, -0x6B00(r2)
	  addi      r3, r30, 0x214
	  stfs      f0, 0x204(r30)
	  addi      r5, r5, 0x3038
	  lfs       f0, -0x6A78(r2)
	  addi      r6, r31, 0x208
	  stfs      f1, 0x20C(r30)
	  stfs      f0, 0x210(r30)
	  bl        0x309988
	  lis       r3, 0x804B
	  lis       r5, 0x6670
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x6A90(r2)
	  stw       r0, 0x214(r30)
	  mr        r4, r30
	  lfs       f1, -0x6B00(r2)
	  addi      r3, r30, 0x23C
	  stfs      f0, 0x22C(r30)
	  addi      r5, r5, 0x3238
	  lfs       f0, -0x6AF8(r2)
	  addi      r6, r31, 0x214
	  stfs      f1, 0x234(r30)
	  stfs      f0, 0x238(r30)
	  bl        0x30994C
	  lis       r3, 0x804B
	  lis       r5, 0x6670
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x6A44(r2)
	  stw       r0, 0x23C(r30)
	  mr        r4, r30
	  lfs       f1, -0x6B00(r2)
	  addi      r3, r30, 0x264
	  stfs      f0, 0x254(r30)
	  addi      r5, r5, 0x3039
	  lfs       f0, -0x6A40(r2)
	  addi      r6, r31, 0x224
	  stfs      f1, 0x25C(r30)
	  stfs      f0, 0x260(r30)
	  bl        0x309910
	  lis       r3, 0x804B
	  lis       r5, 0x6670
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x6A3C(r2)
	  stw       r0, 0x264(r30)
	  mr        r4, r30
	  lfs       f1, -0x6AF8(r2)
	  addi      r3, r30, 0x28C
	  stfs      f0, 0x27C(r30)
	  addi      r5, r5, 0x3130
	  lfs       f0, -0x6A78(r2)
	  addi      r6, r31, 0x230
	  stfs      f1, 0x284(r30)
	  stfs      f0, 0x288(r30)
	  bl        0x3098D4
	  lis       r3, 0x804B
	  lis       r5, 0x6670
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x6A38(r2)
	  stw       r0, 0x28C(r30)
	  mr        r4, r30
	  lfs       f1, -0x6AF8(r2)
	  addi      r3, r30, 0x2B4
	  stfs      f0, 0x2A4(r30)
	  addi      r5, r5, 0x3131
	  lfs       f0, -0x6A78(r2)
	  addi      r6, r31, 0x23C
	  stfs      f1, 0x2AC(r30)
	  stfs      f0, 0x2B0(r30)
	  bl        0x309898
	  lis       r3, 0x804B
	  lis       r5, 0x6670
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x6A34(r2)
	  stw       r0, 0x2B4(r30)
	  mr        r4, r30
	  lfs       f1, -0x6B00(r2)
	  addi      r3, r30, 0x2DC
	  stfs      f0, 0x2CC(r30)
	  addi      r5, r5, 0x3132
	  lfs       f0, -0x6A78(r2)
	  addi      r6, r31, 0x250
	  stfs      f1, 0x2D4(r30)
	  stfs      f0, 0x2D8(r30)
	  bl        0x30985C
	  lis       r3, 0x804B
	  lis       r5, 0x6670
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x6A3C(r2)
	  stw       r0, 0x2DC(r30)
	  mr        r4, r30
	  lfs       f1, -0x6B00(r2)
	  addi      r3, r30, 0x304
	  stfs      f0, 0x2F4(r30)
	  addi      r5, r5, 0x3235
	  lfs       f0, -0x6A78(r2)
	  subi      r6, r2, 0x6A30
	  stfs      f1, 0x2FC(r30)
	  stfs      f0, 0x300(r30)
	  bl        0x309820
	  lis       r3, 0x804B
	  lis       r5, 0x6670
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x6AD8(r2)
	  stw       r0, 0x304(r30)
	  mr        r4, r30
	  lfs       f1, -0x6B00(r2)
	  addi      r3, r30, 0x32C
	  stfs      f0, 0x31C(r30)
	  addi      r5, r5, 0x3133
	  lfs       f0, -0x6A78(r2)
	  addi      r6, r31, 0x25C
	  stfs      f1, 0x324(r30)
	  stfs      f0, 0x328(r30)
	  bl        0x3097E4
	  lis       r3, 0x804B
	  lis       r5, 0x6670
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x6A28(r2)
	  stw       r0, 0x32C(r30)
	  mr        r4, r30
	  lfs       f1, -0x6B00(r2)
	  addi      r3, r30, 0x354
	  stfs      f0, 0x344(r30)
	  addi      r5, r5, 0x3134
	  lfs       f0, -0x6A24(r2)
	  addi      r6, r31, 0x268
	  stfs      f1, 0x34C(r30)
	  stfs      f0, 0x350(r30)
	  bl        0x3097A8
	  lis       r3, 0x804B
	  lis       r5, 0x6670
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x6A3C(r2)
	  stw       r0, 0x354(r30)
	  mr        r4, r30
	  lfs       f1, -0x6B00(r2)
	  addi      r3, r30, 0x37C
	  stfs      f0, 0x36C(r30)
	  addi      r5, r5, 0x3236
	  lfs       f0, -0x6A78(r2)
	  subi      r6, r2, 0x6A20
	  stfs      f1, 0x374(r30)
	  stfs      f0, 0x378(r30)
	  bl        0x30976C
	  lis       r3, 0x804B
	  lis       r5, 0x6670
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x6AD8(r2)
	  stw       r0, 0x37C(r30)
	  mr        r4, r30
	  lfs       f1, -0x6B00(r2)
	  addi      r3, r30, 0x3A4
	  stfs      f0, 0x394(r30)
	  addi      r5, r5, 0x3135
	  lfs       f0, -0x6A78(r2)
	  addi      r6, r31, 0x274
	  stfs      f1, 0x39C(r30)
	  stfs      f0, 0x3A0(r30)
	  bl        0x309730
	  lis       r3, 0x804B
	  lis       r5, 0x6670
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x6AA8(r2)
	  stw       r0, 0x3A4(r30)
	  mr        r4, r30
	  lfs       f1, -0x6B00(r2)
	  addi      r3, r30, 0x3CC
	  stfs      f0, 0x3BC(r30)
	  addi      r5, r5, 0x3137
	  lfs       f0, -0x6A24(r2)
	  addi      r6, r31, 0x280
	  stfs      f1, 0x3C4(r30)
	  stfs      f0, 0x3C8(r30)
	  bl        0x3096F4
	  lis       r3, 0x804B
	  lis       r5, 0x6670
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x6AA4(r2)
	  stw       r0, 0x3CC(r30)
	  mr        r4, r30
	  lfs       f1, -0x6B00(r2)
	  addi      r3, r30, 0x3F4
	  stfs      f0, 0x3E4(r30)
	  addi      r5, r5, 0x3138
	  lfs       f0, -0x6A78(r2)
	  addi      r6, r31, 0x28C
	  stfs      f1, 0x3EC(r30)
	  stfs      f0, 0x3F0(r30)
	  bl        0x3096B8
	  lis       r3, 0x804B
	  lis       r5, 0x6670
	  subi      r0, r3, 0x5344
	  lfs       f1, -0x6B00(r2)
	  stw       r0, 0x3F4(r30)
	  mr        r4, r30
	  lfs       f0, -0x6A78(r2)
	  addi      r3, r30, 0x41C
	  stfs      f1, 0x40C(r30)
	  addi      r5, r5, 0x3139
	  addi      r6, r31, 0x2A0
	  stfs      f1, 0x414(r30)
	  stfs      f0, 0x418(r30)
	  bl        0x309680
	  lis       r3, 0x804B
	  lis       r5, 0x6670
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x6AA8(r2)
	  stw       r0, 0x41C(r30)
	  mr        r4, r30
	  lfs       f1, -0x6B00(r2)
	  addi      r3, r30, 0x444
	  stfs      f0, 0x434(r30)
	  addi      r5, r5, 0x3136
	  lfs       f0, -0x6A78(r2)
	  addi      r6, r31, 0x2B0
	  stfs      f1, 0x43C(r30)
	  stfs      f0, 0x440(r30)
	  bl        0x309644
	  lis       r3, 0x804B
	  lis       r5, 0x6670
	  subi      r0, r3, 0x5344
	  lfs       f1, -0x6AF8(r2)
	  stw       r0, 0x444(r30)
	  mr        r4, r30
	  lfs       f0, -0x6B00(r2)
	  addi      r3, r30, 0x46C
	  stfs      f1, 0x45C(r30)
	  addi      r5, r5, 0x3230
	  addi      r6, r31, 0x2BC
	  stfs      f0, 0x464(r30)
	  stfs      f1, 0x468(r30)
	  bl        0x30960C
	  lis       r3, 0x804B
	  lis       r5, 0x6670
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x6A34(r2)
	  stw       r0, 0x46C(r30)
	  mr        r4, r30
	  lfs       f1, -0x6B00(r2)
	  addi      r3, r30, 0x494
	  stfs      f0, 0x484(r30)
	  addi      r5, r5, 0x3231
	  lfs       f0, -0x6A78(r2)
	  addi      r6, r31, 0x2CC
	  stfs      f1, 0x48C(r30)
	  stfs      f0, 0x490(r30)
	  bl        0x3095D0
	  lis       r3, 0x804B
	  lis       r5, 0x6670
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x6A38(r2)
	  stw       r0, 0x494(r30)
	  mr        r4, r30
	  lfs       f1, -0x6B00(r2)
	  addi      r3, r30, 0x4BC
	  stfs      f0, 0x4AC(r30)
	  addi      r5, r5, 0x3232
	  lfs       f0, -0x6A24(r2)
	  addi      r6, r31, 0x2DC
	  stfs      f1, 0x4B4(r30)
	  stfs      f0, 0x4B8(r30)
	  bl        0x309594
	  lis       r3, 0x804B
	  lis       r5, 0x6670
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x6A34(r2)
	  stw       r0, 0x4BC(r30)
	  mr        r4, r30
	  lfs       f1, -0x6B00(r2)
	  addi      r3, r30, 0x4E4
	  stfs      f0, 0x4D4(r30)
	  addi      r5, r5, 0x3233
	  lfs       f0, -0x6A78(r2)
	  addi      r6, r31, 0x2EC
	  stfs      f1, 0x4DC(r30)
	  stfs      f0, 0x4E0(r30)
	  bl        0x309558
	  lis       r3, 0x804B
	  lis       r5, 0x6670
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x6A38(r2)
	  stw       r0, 0x4E4(r30)
	  mr        r4, r30
	  lfs       f1, -0x6B00(r2)
	  addi      r3, r30, 0x50C
	  stfs      f0, 0x4FC(r30)
	  addi      r5, r5, 0x3234
	  lfs       f0, -0x6A24(r2)
	  subi      r6, r2, 0x6A18
	  stfs      f1, 0x504(r30)
	  stfs      f0, 0x508(r30)
	  bl        0x30951C
	  lis       r3, 0x804B
	  lis       r5, 0x6670
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x6A44(r2)
	  stw       r0, 0x50C(r30)
	  mr        r4, r30
	  lfs       f1, -0x6B00(r2)
	  addi      r3, r30, 0x534
	  stfs      f0, 0x524(r30)
	  addi      r5, r5, 0x3239
	  lfs       f0, -0x6A78(r2)
	  addi      r6, r31, 0x2FC
	  stfs      f1, 0x52C(r30)
	  stfs      f0, 0x530(r30)
	  bl        0x3094E0
	  lis       r3, 0x804B
	  lis       r5, 0x6670
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x6A38(r2)
	  stw       r0, 0x534(r30)
	  mr        r4, r30
	  lfs       f1, -0x6B00(r2)
	  addi      r3, r30, 0x55C
	  stfs      f0, 0x54C(r30)
	  addi      r5, r5, 0x3335
	  lfs       f0, -0x6A10(r2)
	  addi      r6, r31, 0x308
	  stfs      f1, 0x554(r30)
	  stfs      f0, 0x558(r30)
	  bl        0x3094A4
	  lis       r3, 0x804B
	  lis       r5, 0x6670
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x6AF8(r2)
	  stw       r0, 0x55C(r30)
	  mr        r4, r30
	  lfs       f1, -0x6B00(r2)
	  addi      r3, r30, 0x584
	  stfs      f0, 0x574(r30)
	  addi      r5, r5, 0x3336
	  lfs       f0, -0x6A0C(r2)
	  addi      r6, r31, 0x314
	  stfs      f1, 0x57C(r30)
	  stfs      f0, 0x580(r30)
	  bl        0x309468
	  lis       r3, 0x804B
	  lis       r5, 0x6670
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x6A44(r2)
	  stw       r0, 0x584(r30)
	  mr        r4, r30
	  lfs       f1, -0x6B00(r2)
	  addi      r3, r30, 0x5AC
	  stfs      f0, 0x59C(r30)
	  addi      r5, r5, 0x3337
	  lfs       f0, -0x6A78(r2)
	  addi      r6, r31, 0x32C
	  stfs      f1, 0x5A4(r30)
	  stfs      f0, 0x5A8(r30)
	  bl        0x30942C
	  lis       r3, 0x804B
	  lis       r5, 0x6670
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x6A08(r2)
	  stw       r0, 0x5AC(r30)
	  mr        r4, r30
	  lfs       f1, -0x6B00(r2)
	  addi      r3, r30, 0x5D4
	  stfs      f0, 0x5C4(r30)
	  addi      r5, r5, 0x3338
	  lfs       f0, -0x6AF8(r2)
	  addi      r6, r31, 0x33C
	  stfs      f1, 0x5CC(r30)
	  stfs      f0, 0x5D0(r30)
	  bl        0x3093F0
	  lis       r3, 0x804B
	  lis       r5, 0x6970
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x6A44(r2)
	  stw       r0, 0x5D4(r30)
	  mr        r4, r30
	  lfs       f1, -0x6B00(r2)
	  addi      r3, r30, 0x5FC
	  stfs      f0, 0x5EC(r30)
	  addi      r5, r5, 0x3031
	  lfs       f0, -0x6A0C(r2)
	  addi      r6, r31, 0x34C
	  stfs      f1, 0x5F4(r30)
	  stfs      f0, 0x5F8(r30)
	  bl        0x3093B4
	  lis       r3, 0x804B
	  lis       r5, 0x6970
	  subi      r0, r3, 0x5370
	  li        r3, 0x3
	  stw       r0, 0x5FC(r30)
	  li        r7, 0
	  li        r0, 0xC8
	  mr        r4, r30
	  stw       r3, 0x614(r30)
	  addi      r3, r30, 0x624
	  addi      r5, r5, 0x3032
	  addi      r6, r31, 0x35C
	  stw       r7, 0x61C(r30)
	  stw       r0, 0x620(r30)
	  bl        0x309378
	  lis       r3, 0x804B
	  lis       r5, 0x6970
	  subi      r0, r3, 0x5370
	  li        r3, 0x3
	  stw       r0, 0x624(r30)
	  li        r7, 0
	  li        r0, 0x64
	  mr        r4, r30
	  stw       r3, 0x63C(r30)
	  addi      r3, r30, 0x64C
	  addi      r5, r5, 0x3033
	  addi      r6, r31, 0x36C
	  stw       r7, 0x644(r30)
	  stw       r0, 0x648(r30)
	  bl        0x30933C
	  lis       r3, 0x804B
	  lis       r5, 0x6970
	  subi      r0, r3, 0x5370
	  li        r3, 0x8
	  stw       r0, 0x64C(r30)
	  li        r7, 0
	  li        r0, 0xC8
	  mr        r4, r30
	  stw       r3, 0x664(r30)
	  addi      r3, r30, 0x674
	  addi      r5, r5, 0x3034
	  addi      r6, r31, 0x37C
	  stw       r7, 0x66C(r30)
	  stw       r0, 0x670(r30)
	  bl        0x309300
	  lis       r3, 0x804B
	  lis       r5, 0x6970
	  subi      r0, r3, 0x5370
	  li        r3, 0x5
	  stw       r0, 0x674(r30)
	  li        r7, 0
	  li        r0, 0x64
	  mr        r4, r30
	  stw       r3, 0x68C(r30)
	  addi      r3, r30, 0x69C
	  addi      r5, r5, 0x3035
	  addi      r6, r31, 0x38C
	  stw       r7, 0x694(r30)
	  stw       r0, 0x698(r30)
	  bl        0x3092C4
	  lis       r3, 0x804B
	  lis       r5, 0x6970
	  subi      r0, r3, 0x5370
	  li        r3, 0xF
	  stw       r0, 0x69C(r30)
	  li        r7, 0
	  li        r0, 0xC8
	  mr        r4, r30
	  stw       r3, 0x6B4(r30)
	  addi      r3, r30, 0x6C4
	  addi      r5, r5, 0x3036
	  addi      r6, r31, 0x39C
	  stw       r7, 0x6BC(r30)
	  stw       r0, 0x6C0(r30)
	  bl        0x309288
	  lis       r3, 0x804B
	  lis       r5, 0x6970
	  subi      r0, r3, 0x5370
	  li        r3, 0xA
	  stw       r0, 0x6C4(r30)
	  li        r7, 0
	  li        r0, 0x64
	  mr        r4, r30
	  stw       r3, 0x6DC(r30)
	  addi      r3, r30, 0x6EC
	  addi      r5, r5, 0x3037
	  addi      r6, r31, 0x3AC
	  stw       r7, 0x6E4(r30)
	  stw       r0, 0x6E8(r30)
	  bl        0x30924C
	  lis       r3, 0x804B
	  li        r5, 0x1E
	  subi      r0, r3, 0x5370
	  li        r4, 0
	  stw       r0, 0x6EC(r30)
	  li        r0, 0xC8
	  mr        r3, r30
	  stw       r5, 0x704(r30)
	  stw       r4, 0x70C(r30)
	  stw       r0, 0x710(r30)
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
 * Address:	8010A450
 * Size:	000010
 */
void BitFlag<unsigned short>::BitFlag()
{
	/*
	.loc_0x0:
	  li        r0, 0
	  stb       r0, 0x0(r3)
	  stb       r0, 0x1(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8010A460
 * Size:	000020
 */
void Game::Pelplant::Mgr::birth(Game::EnemyBirthArg&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        0x24F5C
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8010A480
 * Size:	0000D0
 */
void Game::Pelplant::Obj::onInit(Game::CreatureInitArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x8A3C
	  lfs       f0, -0x6B00(r2)
	  mr        r3, r31
	  stfs      f0, 0x2C0(r31)
	  bl        -0x8A9C
	  lbz       r0, 0x2D6(r31)
	  extsb.    r0, r0
	  bne-      .loc_0x44
	  lbz       r0, 0x2C8(r31)
	  ori       r0, r0, 0x1
	  stb       r0, 0x2C8(r31)
	  b         .loc_0x50

	.loc_0x44:
	  lbz       r0, 0x2C8(r31)
	  rlwinm    r0,r0,0,24,30
	  stb       r0, 0x2C8(r31)

	.loc_0x50:
	  mr        r3, r31
	  bl        -0x30E0
	  mr        r5, r3
	  cmpwi     r5, -0x1
	  bne-      .loc_0x68
	  li        r5, 0

	.loc_0x68:
	  lwz       r3, 0x2BC(r31)
	  mr        r4, r31
	  li        r6, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x1E0(r31)
	  mr        r3, r31
	  rlwinm    r0,r0,0,24,22
	  stw       r0, 0x1E0(r31)
	  lwz       r0, 0x1E0(r31)
	  rlwinm    r0,r0,0,25,23
	  stw       r0, 0x1E0(r31)
	  lwz       r0, 0x1E0(r31)
	  rlwinm    r0,r0,0,20,18
	  stw       r0, 0x1E0(r31)
	  lwz       r0, 0x1E0(r31)
	  oris      r0, r0, 0x40
	  stw       r0, 0x1E0(r31)
	  bl        -0x2DBC
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8010A550
 * Size:	000048
 */
void Game::Pelplant::Obj::doGetLifeGaugeParam(Game::LifeGaugeParam&)
{
	/*
	.loc_0x0:
	  lwz       r5, 0x2C4(r3)
	  lfs       f1, -0x6A0C(r2)
	  lfs       f2, 0xC(r5)
	  lfs       f0, -0x6A44(r2)
	  stfs      f2, 0x0(r4)
	  lfs       f2, 0x1C(r5)
	  stfs      f2, 0x4(r4)
	  lfs       f2, 0x2C(r5)
	  stfs      f2, 0x8(r4)
	  lfs       f2, 0x4(r4)
	  fadds     f1, f2, f1
	  stfs      f1, 0x4(r4)
	  lfs       f2, 0x200(r3)
	  lfs       f1, 0x204(r3)
	  fdivs     f1, f2, f1
	  stfs      f1, 0xC(r4)
	  stfs      f0, 0x10(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8010A598
 * Size:	0000B0
 */
void Game::Pelplant::Mgr::~Mgr()
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
	  beq-      .loc_0x94
	  lis       r3, 0x804B
	  subi      r3, r3, 0x5450
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x38
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x84
	  lis       r3, 0x804B
	  subi      r3, r3, 0x760
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x38
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x84
	  lis       r3, 0x804B
	  addic.    r0, r30, 0x4
	  subi      r3, r3, 0x5304
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x38
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x84
	  lis       r4, 0x804B
	  addi      r3, r30, 0x4
	  subi      r0, r4, 0x5324
	  li        r4, 0
	  stw       r0, 0x4(r30)
	  bl        0x306F70

	.loc_0x84:
	  extsh.    r0, r31
	  ble-      .loc_0x94
	  mr        r3, r30
	  bl        -0xE6574

	.loc_0x94:
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
 * Address:	8010A648
 * Size:	000008
 */
void Game::Pelplant::Mgr::getEnemyTypeID()
{
	/*
	.loc_0x0:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8010A650
 * Size:	000060
 */
void Game::Pelplant::Mgr::createObj(int)
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
	  mulli     r3, r31, 0x2E8
	  addi      r3, r3, 0x10
	  bl        -0xE66C8
	  lis       r4, 0x8011
	  lis       r5, 0x8011
	  subi      r4, r4, 0x791C
	  mr        r7, r31
	  subi      r5, r5, 0x5950
	  li        r6, 0x2E8
	  bl        -0x48CA0
	  stw       r3, 0x44(r30)
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
 * Address:	8010A6B0
 * Size:	0000BC
 */
void Game::Pelplant::Obj::~Obj()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr.       r31, r3
	  stw       r30, 0x8(r1)
	  mr        r30, r4
	  beq-      .loc_0xA0
	  lis       r3, 0x804B
	  addi      r0, r31, 0x2D8
	  subi      r4, r3, 0x5238
	  stw       r4, 0x0(r31)
	  addi      r3, r4, 0x1B0
	  addi      r4, r4, 0x2FC
	  stw       r3, 0x178(r31)
	  lwz       r3, 0x17C(r31)
	  stw       r4, 0x0(r3)
	  lwz       r3, 0x17C(r31)
	  sub       r0, r0, r3
	  stw       r0, 0xC(r3)
	  beq-      .loc_0x90
	  lis       r3, 0x804B
	  addi      r0, r31, 0x2BC
	  subi      r4, r3, 0x5CDC
	  addi      r3, r31, 0x290
	  stw       r4, 0x0(r31)
	  addi      r5, r4, 0x1B0
	  addi      r6, r4, 0x2F8
	  li        r4, -0x1
	  stw       r5, 0x178(r31)
	  lwz       r5, 0x17C(r31)
	  stw       r6, 0x0(r5)
	  lwz       r5, 0x17C(r31)
	  sub       r0, r0, r5
	  stw       r0, 0xC(r5)
	  bl        0x306E4C

	.loc_0x90:
	  extsh.    r0, r30
	  ble-      .loc_0xA0
	  mr        r3, r31
	  bl        -0xE6698

	.loc_0xA0:
	  lwz       r0, 0x14(r1)
	  mr        r3, r31
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8010A76C
 * Size:	000010
 */
void Game::Pelplant::Mgr::getEnemy(int)
{
	/*
	.loc_0x0:
	  mulli     r0, r4, 0x2E8
	  lwz       r3, 0x44(r3)
	  add       r3, r3, r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8010A77C
 * Size:	000004
 */
void Game::Pelplant::Mgr::initStoneSetting()
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8010A780
 * Size:	00002C
 */
void Game::EnemyMgrBase::get(void*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xA4(r12)
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
 * Address:	8010A7AC
 * Size:	000008
 */
void Game::EnemyMgrBase::getJ3DModelData() const
{
	/*
	.loc_0x0:
	  lwz       r3, 0x1C(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8010A7B4
 * Size:	000008
 */
void Game::EnemyMgrBase::getGenerator() const
{
	/*
	.loc_0x0:
	  lwz       r3, 0x38(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8010A7BC
 * Size:	000008
 */
void Game::EnemyMgrBase::getMaxObjects() const
{
	/*
	.loc_0x0:
	  lwz       r3, 0x2C(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8010A7C4
 * Size:	000004
 */
void GenericObjectMgr::doSimpleDraw(Viewport*)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8010A7C8
 * Size:	000004
 */
void GenericObjectMgr::loadResources()
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8010A7CC
 * Size:	000004
 */
void GenericObjectMgr::resetMgr()
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8010A7D0
 * Size:	000008
 */
void GenericObjectMgr::pausable()
{
	/*
	.loc_0x0:
	  li        r3, 0x1
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8010A7D8
 * Size:	000008
 */
void GenericObjectMgr::frozenable()
{
	/*
	.loc_0x0:
	  li        r3, 0x1
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8010A7E0
 * Size:	000008
 */
void GenericObjectMgr::getMatrixLoadType()
{
	/*
	.loc_0x0:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8010A7E8
 * Size:	000008
 */
void Game::EnemyMgrBase::getEnd()
{
	/*
	.loc_0x0:
	  lwz       r3, 0x2C(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8010A7F0
 * Size:	000030
 */
void Game::EnemyMgrBase::getStart()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r4, -0x1
	  stw       r0, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x60(r12)
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
 * Address:	8010A820
 * Size:	00002C
 */
void Game::EnemyMgrBase::getObject(void*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x98(r12)
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
 * Address:	8010A84C
 * Size:	000044
 */
void Game::EnemyParmsBase::read(Stream&)
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
	  bl        0x308F8C
	  mr        r4, r31
	  addi      r3, r30, 0xE0
	  bl        0x308F80
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
 * Address:	8010A890
 * Size:	000020
 */
void Game::CreatureParms::read(Stream&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        0x308F58
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8010A8B0
 * Size:	000050
 */
void Game::Pelplant::Parms::read(Stream&)
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
	  bl        0x308F28
	  mr        r4, r31
	  addi      r3, r30, 0xE0
	  bl        0x308F1C
	  mr        r4, r31
	  addi      r3, r30, 0x7F8
	  bl        0x308F10
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
 * Address:	8010A900
 * Size:	000060
 */
void GenericContainer::~GenericContainer()
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
	  beq-      .loc_0x44
	  lis       r5, 0x804B
	  li        r4, 0
	  subi      r0, r5, 0x5324
	  stw       r0, 0x0(r30)
	  bl        0x306C58
	  extsh.    r0, r31
	  ble-      .loc_0x44
	  mr        r3, r30
	  bl        -0xE688C

	.loc_0x44:
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
 * Address:	8010A960
 * Size:	000080
 */
void Game::IEnemyMgrBase::~IEnemyMgrBase()
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
	  beq-      .loc_0x64
	  lis       r3, 0x804B
	  addic.    r0, r30, 0x4
	  subi      r3, r3, 0x5304
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x38
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x54
	  lis       r4, 0x804B
	  addi      r3, r30, 0x4
	  subi      r0, r4, 0x5324
	  li        r4, 0
	  stw       r0, 0x4(r30)
	  bl        0x306BD8

	.loc_0x54:
	  extsh.    r0, r31
	  ble-      .loc_0x64
	  mr        r3, r30
	  bl        -0xE690C

	.loc_0x64:
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
 * Address:	8010A9E0
 * Size:	00006C
 */
void Game::Pelplant::ProperAnimator::~ProperAnimator()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr.       r31, r3
	  beq-      .loc_0x54
	  lis       r3, 0x804B
	  subi      r0, r3, 0x5260
	  stw       r0, 0x0(r31)
	  beq-      .loc_0x44
	  lis       r3, 0x804B
	  subi      r0, r3, 0x7DC
	  stw       r0, 0x0(r31)
	  beq-      .loc_0x44
	  lis       r3, 0x804B
	  subi      r0, r3, 0x23A8
	  stw       r0, 0x0(r31)

	.loc_0x44:
	  extsh.    r0, r4
	  ble-      .loc_0x54
	  mr        r3, r31
	  bl        -0xE697C

	.loc_0x54:
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
 * Address:	8010AA4C
 * Size:	000020
 */
void Game::EnemyBlendAnimatorBase::animate(int, float)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        0x1D084
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8010AA6C
 * Size:	00000C
 */
void Game::EnemyBlendAnimatorBase::getTypeID()
{
	/*
	.loc_0x0:
	  lis       r3, 0x626C
	  addi      r3, r3, 0x6E64
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8010AA78
 * Size:	000008
 */
void Game::Pelplant::Obj::getEnemyTypeID()
{
	/*
	.loc_0x0:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8010AA80
 * Size:	000008
 */
void Parm<int>::size()
{
	/*
	.loc_0x0:
	  li        r3, 0x4
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8010AA88
 * Size:	000008
 */
void Parm<float>::size()
{
	/*
	.loc_0x0:
	  li        r3, 0x4
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8010AA90
 * Size:	000014
 */
void Game::EnemyBase::@728 @12 @viewOnPelletKilled()
{
	/*
	.loc_0x0:
	  li        r11, 0xC
	  lwzx      r11, r3, r11
	  add       r3, r3, r11
	  subi      r3, r3, 0x2D8
	  b         -0x4184
	*/
}

/*
 * --INFO--
 * Address:	8010AAA4
 * Size:	000014
 */
void Game::EnemyBase::@728 @12 @viewStartCarryMotion()
{
	/*
	.loc_0x0:
	  li        r11, 0xC
	  lwzx      r11, r3, r11
	  add       r3, r3, r11
	  subi      r3, r3, 0x2D8
	  b         -0x440C
	*/
}

/*
 * --INFO--
 * Address:	8010AAB8
 * Size:	000014
 */
void Game::EnemyBase::@728 @12 @viewStartPreCarryMotion()
{
	/*
	.loc_0x0:
	  li        r11, 0xC
	  lwzx      r11, r3, r11
	  add       r3, r3, r11
	  subi      r3, r3, 0x2D8
	  b         -0x4400
	*/
}

/*
 * --INFO--
 * Address:	8010AACC
 * Size:	000014
 */
void Game::EnemyBase::@728 @12 @view_finish_carrymotion()
{
	/*
	.loc_0x0:
	  li        r11, 0xC
	  lwzx      r11, r3, r11
	  add       r3, r3, r11
	  subi      r3, r3, 0x2D8
	  b         -0x4064
	*/
}

/*
 * --INFO--
 * Address:	8010AAE0
 * Size:	000014
 */
void Game::EnemyBase::@728 @12 @view_start_carrymotion()
{
	/*
	.loc_0x0:
	  li        r11, 0xC
	  lwzx      r11, r3, r11
	  add       r3, r3, r11
	  subi      r3, r3, 0x2D8
	  b         -0x40A4
	*/
}

/*
 * --INFO--
 * Address:	8010AAF4
 * Size:	000014
 */
void Game::EnemyBase::@728 @12 @viewGetShape()
{
	/*
	.loc_0x0:
	  li        r11, 0xC
	  lwzx      r11, r3, r11
	  add       r3, r3, r11
	  subi      r3, r3, 0x2D8
	  b         -0x4464
	*/
}

/*
 * --INFO--
 * Address:	8010AB08
 * Size:	000008
 */
void Game::IEnemyMgrBase::@4 @__dt()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x4
	  b         -0x1AC
	*/
}

/*
 * --INFO--
 * Address:	8010AB10
 * Size:	000008
 */
void Game::Pelplant::Mgr::@4 @__dt()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x4
	  b         -0x57C
	*/
}

/*
 * --INFO--
 * Address:	8010AB18
 * Size:	000008
 */
void Game::EnemyMgrBase::@4 @getEnd()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x4
	  b         -0x334
	*/
}

/*
 * --INFO--
 * Address:	8010AB20
 * Size:	000008
 */
void Game::EnemyMgrBase::@4 @getStart()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x4
	  b         -0x334
	*/
}

/*
 * --INFO--
 * Address:	8010AB28
 * Size:	000008
 */
void Game::EnemyMgrBase::@4 @getNext(void*)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x4
	  b         0x24828
	*/
}

/*
 * --INFO--
 * Address:	8010AB30
 * Size:	000008
 */
void Game::EnemyMgrBase::@4 @getObject(void*)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x4
	  b         -0x314
	*/
}
