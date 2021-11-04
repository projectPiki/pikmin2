

/*
 * --INFO--
 * Address:	802A1AE8
 * Size:	00015C
 */
void Game::Hanachirashi::Obj::Obj()
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
	  addi      r0, r31, 0x32C
	  lis       r3, 0x804B
	  stw       r0, 0x17C(r31)
	  subi      r3, r3, 0x5988
	  li        r0, 0
	  stw       r3, 0x32C(r31)
	  stw       r0, 0x330(r31)
	  stw       r0, 0x334(r31)

	.loc_0x40:
	  mr        r3, r31
	  li        r4, 0
	  bl        -0x1A0790
	  lis       r3, 0x804D
	  addi      r0, r31, 0x32C
	  subi      r5, r3, 0x2D60
	  li        r3, 0x2C
	  stw       r5, 0x0(r31)
	  addi      r4, r5, 0x1B0
	  addi      r5, r5, 0x2FC
	  stw       r4, 0x178(r31)
	  lwz       r4, 0x17C(r31)
	  stw       r5, 0x0(r4)
	  lwz       r4, 0x17C(r31)
	  sub       r0, r0, r4
	  stw       r0, 0xC(r4)
	  bl        -0x27DCC4
	  mr.       r30, r3
	  beq-      .loc_0xCC
	  bl        -0x17A200
	  lis       r3, 0x804D
	  lis       r4, 0x804B
	  subi      r0, r3, 0x2EB0
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

	.loc_0xCC:
	  stw       r30, 0x184(r31)
	  li        r3, 0x1C
	  bl        -0x27DD18
	  mr.       r4, r3
	  beq-      .loc_0x100
	  lis       r5, 0x804B
	  lis       r3, 0x804D
	  subi      r0, r5, 0x680
	  li        r5, -0x1
	  stw       r0, 0x0(r4)
	  subi      r0, r3, 0x2ED8
	  stw       r5, 0x18(r4)
	  stw       r0, 0x0(r4)

	.loc_0x100:
	  lwz       r12, 0x0(r31)
	  mr        r3, r31
	  lwz       r12, 0x2F8(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  bl        0x22B0
	  li        r3, 0x28
	  bl        -0x27DC5C
	  lis       r4, 0x8016
	  li        r5, 0
	  addi      r4, r4, 0x38EC
	  li        r6, 0xC
	  li        r7, 0x2
	  bl        -0x1E0230
	  stw       r3, 0x328(r31)
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
 * Address:	802A1C44
 * Size:	000004
 */
void Game::Hanachirashi::Obj::setInitialSetting(Game::EnemyInitialParamBase*)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802A1C48
 * Size:	0000F4
 */
void Game::Hanachirashi::Obj::onInit(Game::CreatureInitArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x1A0204
	  lwz       r4, 0x1E0(r31)
	  li        r0, -0x1
	  lfs       f0, -0x25A8(r2)
	  mr        r3, r31
	  rlwinm    r4,r4,0,25,23
	  stw       r4, 0x1E0(r31)
	  lwz       r4, 0x1E0(r31)
	  ori       r4, r4, 0x4
	  stw       r4, 0x1E0(r31)
	  stw       r0, 0x2C0(r31)
	  stfs      f0, 0x2C4(r31)
	  stfs      f0, 0x2CC(r31)
	  bl        0x984
	  mr        r3, r31
	  bl        0x9E4
	  lfs       f0, -0x25A8(r2)
	  li        r0, 0
	  subi      r4, r2, 0x25A4
	  stfs      f0, 0x314(r31)
	  stb       r0, 0x310(r31)
	  lwz       r3, 0x174(r31)
	  bl        0x19D330
	  bl        0x187BE8
	  stw       r3, 0x2E4(r31)
	  mr        r3, r31
	  bl        0x233C
	  lfs       f0, -0x25A8(r2)
	  mr        r4, r31
	  li        r5, 0x1
	  li        r6, 0
	  stfs      f0, 0x30C(r31)
	  lwz       r3, 0x2BC(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x328(r31)
	  lwz       r4, 0x180(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r4, 0x44(r4)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x328(r31)
	  lwzu      r12, 0xC(r3)
	  lwz       r4, 0x180(r31)
	  lwz       r12, 0x8(r12)
	  lwz       r4, 0x48(r4)
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
 * Address:	802A1D3C
 * Size:	000044
 */
void Game::Hanachirashi::Obj::onKill(Game::CreatureKillArg*)
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
	  bl        0x2434
	  mr        r3, r30
	  mr        r4, r31
	  bl        -0x19FE7C
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
 * Address:	802A1D80
 * Size:	000050
 */
void Game::Hanachirashi::Obj::doUpdate()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  mr        r4, r31
	  lwz       r3, 0x2BC(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  bl        0x904
	  mr        r3, r31
	  bl        0x1458
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802A1DD0
 * Size:	0000D4
 */
void Game::Hanachirashi::Obj::changeMaterial()
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
	  lwz       r3, 0x174(r3)
	  lwz       r29, 0x8(r3)
	  lwz       r12, 0x0(r29)
	  mr        r3, r29
	  lwz       r30, 0x4(r29)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x328(r28)
	  lfs       f1, -0x259C(r2)
	  bl        0x192734
	  lwz       r3, 0x328(r28)
	  lfs       f1, -0x259C(r2)
	  addi      r3, r3, 0xC
	  bl        0x192724
	  lis       r3, 0x8051
	  li        r28, 0
	  subi      r31, r3, 0xDD0
	  b         .loc_0xA4

	.loc_0x6C:
	  lwz       r4, 0xC0(r29)
	  rlwinm    r3,r28,6,10,25
	  rlwinm    r0,r28,2,14,29
	  add       r4, r4, r3
	  stw       r4, 0x3C(r31)
	  lwz       r3, 0x60(r30)
	  lwz       r4, 0x2C(r4)
	  lwzx      r3, r3, r0
	  lwz       r4, 0x34(r4)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  addi      r28, r28, 0x1

	.loc_0xA4:
	  lhz       r0, 0x5C(r30)
	  rlwinm    r3,r28,0,16,31
	  cmplw     r3, r0
	  blt+      .loc_0x6C
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
 * Address:	802A1EA4
 * Size:	00004C
 */
void Game::Hanachirashi::Obj::setFSM(Game::Hanachirashi::FSM*)
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
 * Address:	802A1EF0
 * Size:	000004
 */
void Game::Hanachirashi::Obj::doDirectDraw(Graphics&)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802A1EF4
 * Size:	000020
 */
void Game::Hanachirashi::Obj::doDebugDraw(Graphics&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        -0x19C094
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802A1F14
 * Size:	000168
 */
void Game::Hanachirashi::Obj::getShadowParam(Game::ShadowParam&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stfd      f31, 0x30(r1)
	  psq_st    f31,0x38(r1),0,0
	  stfd      f30, 0x20(r1)
	  psq_st    f30,0x28(r1),0,0
	  stfd      f29, 0x10(r1)
	  psq_st    f29,0x18(r1),0,0
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  mr        r31, r4
	  lwz       r3, 0x174(r3)
	  subi      r4, r2, 0x2598
	  bl        0x19D094
	  bl        0x18794C
	  lfs       f29, 0x2C(r3)
	  subi      r4, r2, 0x2590
	  lfs       f30, 0x1C(r3)
	  lfs       f31, 0xC(r3)
	  lwz       r3, 0x174(r30)
	  bl        0x19D078
	  bl        0x187930
	  lfs       f4, 0x2C(r3)
	  lfs       f2, 0x1C(r3)
	  lfs       f0, 0xC(r3)
	  mr        r3, r30
	  lfs       f3, -0x2588(r2)
	  stfs      f0, 0x0(r31)
	  lfs       f1, -0x25A8(r2)
	  stfs      f2, 0x4(r31)
	  lfs       f0, -0x2584(r2)
	  stfs      f4, 0x8(r31)
	  lfs       f2, 0x0(r31)
	  fadds     f2, f2, f31
	  stfs      f2, 0x0(r31)
	  lfs       f2, 0x4(r31)
	  fadds     f2, f2, f30
	  stfs      f2, 0x4(r31)
	  lfs       f2, 0x8(r31)
	  fadds     f2, f2, f29
	  stfs      f2, 0x8(r31)
	  lfs       f2, 0x0(r31)
	  fmuls     f2, f2, f3
	  stfs      f2, 0x0(r31)
	  lfs       f2, 0x4(r31)
	  fmuls     f2, f2, f3
	  stfs      f2, 0x4(r31)
	  lfs       f2, 0x8(r31)
	  fmuls     f2, f2, f3
	  stfs      f2, 0x8(r31)
	  lfs       f3, 0x190(r30)
	  lfs       f2, 0x2D0(r30)
	  fadds     f2, f3, f2
	  stfs      f2, 0x4(r31)
	  stfs      f1, 0xC(r31)
	  stfs      f0, 0x10(r31)
	  stfs      f1, 0x14(r31)
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0xCC(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x110
	  lwz       r0, 0xC8(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0x128

	.loc_0x110:
	  lwz       r3, 0xC0(r30)
	  lfs       f1, -0x2580(r2)
	  lfs       f0, 0x81C(r3)
	  fadds     f0, f1, f0
	  stfs      f0, 0x18(r31)
	  b         .loc_0x130

	.loc_0x128:
	  lfs       f0, -0x257C(r2)
	  stfs      f0, 0x18(r31)

	.loc_0x130:
	  lfs       f0, 0x2D4(r30)
	  stfs      f0, 0x1C(r31)
	  psq_l     f31,0x38(r1),0,0
	  lfd       f31, 0x30(r1)
	  psq_l     f30,0x28(r1),0,0
	  lfd       f30, 0x20(r1)
	  psq_l     f29,0x18(r1),0,0
	  lfd       f29, 0x10(r1)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x44(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802A207C
 * Size:	00003C
 */
void Game::Hanachirashi::Obj::doStartStoneState()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x19F19C
	  mr        r3, r31
	  bl        0x20F4
	  mr        r3, r31
	  bl        0x580
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802A20B8
 * Size:	00007C
 */
void Game::Hanachirashi::Obj::doFinishStoneState()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x19F1C4
	  mr        r3, r31
	  bl        -0x19ACE0
	  cmpwi     r3, 0x1
	  blt-      .loc_0x30
	  cmpwi     r3, 0x6
	  ble-      .loc_0x48

	.loc_0x30:
	  cmpwi     r3, 0x9
	  blt-      .loc_0x40
	  cmpwi     r3, 0xA
	  ble-      .loc_0x48

	.loc_0x40:
	  cmpwi     r3, 0xC
	  bne-      .loc_0x68

	.loc_0x48:
	  lwz       r3, 0x2BC(r31)
	  mr        r4, r31
	  li        r5, 0x9
	  li        r6, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl

	.loc_0x68:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802A2134
 * Size:	000034
 */
void Game::Hanachirashi::Obj::doStartWaitingBirthTypeDrop()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x19A7B0
	  mr        r3, r31
	  bl        0x21A8
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802A2168
 * Size:	000034
 */
void Game::Hanachirashi::Obj::doFinishWaitingBirthTypeDrop()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x19A7B4
	  mr        r3, r31
	  bl        0x20FC
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802A219C
 * Size:	000020
 */
void Game::Hanachirashi::Obj::doStartMovie()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        0x2150
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802A21BC
 * Size:	000020
 */
void Game::Hanachirashi::Obj::doEndMovie()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        0x20B8
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802A21DC
 * Size:	000064
 */
void Game::Hanachirashi::Obj::getOffsetForMapCollision()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r4
	  stw       r30, 0x18(r1)
	  mr        r30, r3
	  addi      r3, r1, 0x8
	  bl        0xD4
	  lfs       f2, 0x8(r1)
	  lfs       f0, 0x18C(r31)
	  lfs       f3, 0x10(r1)
	  lfs       f1, 0x194(r31)
	  fsubs     f2, f2, f0
	  lfs       f0, -0x2578(r2)
	  fsubs     f3, f3, f1
	  stfs      f2, 0x0(r30)
	  stfs      f0, 0x4(r30)
	  stfs      f3, 0x8(r30)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802A2240
 * Size:	000050
 */
void Game::Hanachirashi::Obj::getThrowupItemPosition(Vector3<float>*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r0, 0x1E0(r3)
	  rlwinm.   r0,r0,0,22,22
	  beq-      .loc_0x20
	  bl        -0x19C90C
	  b         .loc_0x40

	.loc_0x20:
	  lfs       f2, -0x2574(r2)
	  lfs       f1, 0x190(r3)
	  lfs       f3, 0x194(r3)
	  lfs       f0, 0x18C(r3)
	  fadds     f1, f2, f1
	  stfs      f0, 0x0(r4)
	  stfs      f1, 0x4(r4)
	  stfs      f3, 0x8(r4)

	.loc_0x40:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802A2290
 * Size:	000040
 */
void Game::Hanachirashi::Obj::getThrowupItemVelocity(Vector3<float>*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r0, 0x1E0(r3)
	  rlwinm.   r0,r0,0,22,22
	  beq-      .loc_0x20
	  bl        -0x19C908
	  b         .loc_0x30

	.loc_0x20:
	  lfs       f0, -0x25A8(r2)
	  stfs      f0, 0x8(r4)
	  stfs      f0, 0x4(r4)
	  stfs      f0, 0x0(r4)

	.loc_0x30:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802A22D0
 * Size:	000050
 */
void Game::Hanachirashi::Obj::getHeadJointPos()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r3, 0x174(r4)
	  subi      r4, r2, 0x2590
	  bl        0x19CCF8
	  bl        0x1875B0
	  lfs       f2, 0x2C(r3)
	  lfs       f1, 0x1C(r3)
	  lfs       f0, 0xC(r3)
	  stfs      f0, 0x0(r31)
	  stfs      f1, 0x4(r31)
	  stfs      f2, 0x8(r31)
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802A2320
 * Size:	00011C
 */
void Game::Hanachirashi::Obj::setHeightVelocity()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stfd      f31, 0x30(r1)
	  psq_st    f31,0x38(r1),0,0
	  stfd      f30, 0x20(r1)
	  psq_st    f30,0x28(r1),0,0
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  lwz       r3, -0x6CF8(r13)
	  addi      r4, r31, 0x18C
	  lwz       r12, 0x4(r3)
	  lwz       r12, 0x28(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0xC0(r31)
	  fmr       f31, f1
	  lfs       f1, 0x190(r31)
	  lfs       f30, 0x81C(r3)
	  lfs       f0, 0x934(r3)
	  fsubs     f1, f1, f31
	  fsubs     f0, f30, f0
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0xD4
	  mr        r3, r31
	  bl        0x404
	  lfs       f2, 0x314(r31)
	  lfs       f0, -0x25A8(r2)
	  lwz       r3, 0xC0(r31)
	  fcmpo     cr0, f2, f0
	  lfs       f1, 0x934(r3)
	  bge-      .loc_0xAC
	  lfs       f0, -0x2570(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fmuls     f0, f2, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x8(r1)
	  lwz       r0, 0xC(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r3, r0
	  fneg      f0, f0
	  b         .loc_0xD0

	.loc_0xAC:
	  lfs       f0, -0x256C(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fmuls     f0, f2, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x10(r1)
	  lwz       r0, 0x14(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r3, r0

	.loc_0xD0:
	  fmadds    f30, f1, f0, f30

	.loc_0xD4:
	  fadds     f1, f31, f30
	  lfs       f0, 0x190(r31)
	  lwz       r3, 0xC0(r31)
	  fsubs     f1, f1, f0
	  lfs       f0, 0x844(r3)
	  fmuls     f0, f1, f0
	  stfs      f0, 0x1CC(r31)
	  lfs       f0, 0x190(r31)
	  fsubs     f1, f0, f31
	  psq_l     f31,0x38(r1),0,0
	  lfd       f31, 0x30(r1)
	  psq_l     f30,0x28(r1),0,0
	  lfd       f30, 0x20(r1)
	  lwz       r0, 0x44(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802A243C
 * Size:	0001D8
 */
void Game::Hanachirashi::Obj::setRandTarget()
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
	  stfd      f28, 0x60(r1)
	  psq_st    f28,0x68(r1),0,0
	  stfd      f27, 0x50(r1)
	  psq_st    f27,0x58(r1),0,0
	  stw       r31, 0x4C(r1)
	  mr        r31, r3
	  lwz       r3, 0xC0(r3)
	  lfs       f1, 0x35C(r3)
	  lfs       f0, 0x384(r3)
	  fsubs     f27, f1, f0
	  bl        -0x1D8EE8
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x1C(r1)
	  mr        r4, r31
	  lwz       r5, 0xC0(r31)
	  addi      r3, r1, 0x8
	  stw       r0, 0x18(r1)
	  lfd       f1, -0x2558(r2)
	  lfd       f0, 0x18(r1)
	  lwz       r12, 0x0(r31)
	  fsubs     f2, f0, f1
	  lfs       f1, -0x2568(r2)
	  lfs       f0, 0x384(r5)
	  lwz       r12, 0x8(r12)
	  fmuls     f2, f27, f2
	  fdivs     f1, f2, f1
	  fadds     f28, f0, f1
	  mtctr     r12
	  bctrl
	  lfs       f31, 0x198(r31)
	  lis       r3, 0x8051
	  lfs       f1, 0x8(r1)
	  subi      r3, r3, 0x2E20
	  lfs       f29, 0x1A0(r31)
	  lfs       f0, 0x10(r1)
	  fsubs     f1, f1, f31
	  lfs       f30, 0x19C(r31)
	  fsubs     f2, f0, f29
	  bl        -0x26D3F4
	  fmr       f27, f1
	  bl        -0x1D8F64
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x24(r1)
	  lfd       f2, -0x2558(r2)
	  stw       r0, 0x20(r1)
	  lfs       f3, -0x2564(r2)
	  lfd       f0, 0x20(r1)
	  lfs       f1, -0x2568(r2)
	  fsubs     f4, f0, f2
	  lfs       f2, -0x2560(r2)
	  lfs       f0, -0x25A8(r2)
	  fmuls     f3, f3, f4
	  fdivs     f1, f3, f1
	  fadds     f1, f27, f1
	  fadds     f3, f2, f1
	  fmr       f1, f3
	  fcmpo     cr0, f3, f0
	  bge-      .loc_0x118
	  fneg      f1, f3

	.loc_0x118:
	  lfs       f2, -0x256C(r2)
	  lis       r3, 0x8050
	  lfs       f0, -0x25A8(r2)
	  addi      r4, r3, 0x71A0
	  fmuls     f1, f1, f2
	  fcmpo     cr0, f3, f0
	  fctiwz    f0, f1
	  stfd      f0, 0x28(r1)
	  lwz       r0, 0x2C(r1)
	  rlwinm    r0,r0,3,18,28
	  add       r3, r4, r0
	  lfs       f0, 0x4(r3)
	  fmadds    f1, f28, f0, f29
	  bge-      .loc_0x174
	  lfs       f0, -0x2570(r2)
	  fmuls     f0, f3, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x30(r1)
	  lwz       r0, 0x34(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r4, r0
	  fneg      f0, f0
	  b         .loc_0x18C

	.loc_0x174:
	  fmuls     f0, f3, f2
	  fctiwz    f0, f0
	  stfd      f0, 0x38(r1)
	  lwz       r0, 0x3C(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r4, r0

	.loc_0x18C:
	  fmadds    f0, f28, f0, f31
	  stfs      f0, 0x2D8(r31)
	  stfs      f30, 0x2DC(r31)
	  stfs      f1, 0x2E0(r31)
	  psq_l     f31,0x98(r1),0,0
	  lfd       f31, 0x90(r1)
	  psq_l     f30,0x88(r1),0,0
	  lfd       f30, 0x80(r1)
	  psq_l     f29,0x78(r1),0,0
	  lfd       f29, 0x70(r1)
	  psq_l     f28,0x68(r1),0,0
	  lfd       f28, 0x60(r1)
	  psq_l     f27,0x58(r1),0,0
	  lfd       f27, 0x50(r1)
	  lwz       r0, 0xA4(r1)
	  lwz       r31, 0x4C(r1)
	  mtlr      r0
	  addi      r1, r1, 0xA0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802A2614
 * Size:	00000C
 */
void Game::Hanachirashi::Obj::resetShadowOffset()
{
	/*
	.loc_0x0:
	  lfs       f0, -0x2550(r2)
	  stfs      f0, 0x2D0(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802A2620
 * Size:	00000C
 */
void Game::Hanachirashi::Obj::setShadowOffsetMax()
{
	/*
	.loc_0x0:
	  lfs       f0, -0x254C(r2)
	  stfs      f0, 0x2D0(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802A262C
 * Size:	000028
 */
void Game::Hanachirashi::Obj::addShadowOffset()
{
	/*
	.loc_0x0:
	  lfs       f2, 0x2D0(r3)
	  lfs       f1, -0x2584(r2)
	  lfs       f0, -0x254C(r2)
	  fadds     f1, f2, f1
	  stfs      f1, 0x2D0(r3)
	  lfs       f1, 0x2D0(r3)
	  fcmpo     cr0, f1, f0
	  blelr-
	  stfs      f0, 0x2D0(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802A2654
 * Size:	000028
 */
void Game::Hanachirashi::Obj::subShadowOffset()
{
	/*
	.loc_0x0:
	  lfs       f2, 0x2D0(r3)
	  lfs       f1, -0x2584(r2)
	  lfs       f0, -0x2550(r2)
	  fsubs     f1, f2, f1
	  stfs      f1, 0x2D0(r3)
	  lfs       f1, 0x2D0(r3)
	  fcmpo     cr0, f1, f0
	  bgelr-
	  stfs      f0, 0x2D0(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802A267C
 * Size:	00000C
 */
void Game::Hanachirashi::Obj::resetShadowRadius()
{
	/*
	.loc_0x0:
	  lfs       f0, -0x2548(r2)
	  stfs      f0, 0x2D4(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802A2688
 * Size:	00002C
 */
void Game::Hanachirashi::Obj::subShadowRadius()
{
	/*
	.loc_0x0:
	  lfs       f0, 0x2D4(r3)
	  lfs       f1, -0x2584(r2)
	  fcmpo     cr0, f0, f1
	  blelr-
	  fsubs     f0, f0, f1
	  stfs      f0, 0x2D4(r3)
	  lfs       f0, 0x2D4(r3)
	  fcmpo     cr0, f0, f1
	  bgelr-
	  stfs      f1, 0x2D4(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802A26B4
 * Size:	000030
 */
void Game::Hanachirashi::Obj::updateFallTimer()
{
	/*
	.loc_0x0:
	  lwz       r0, 0x1F4(r3)
	  cmpwi     r0, 0
	  beq-      .loc_0x24
	  lwz       r4, -0x6514(r13)
	  lfs       f1, 0x2CC(r3)
	  lfs       f0, 0x54(r4)
	  fadds     f0, f1, f0
	  stfs      f0, 0x2CC(r3)
	  blr

	.loc_0x24:
	  lfs       f0, -0x25A8(r2)
	  stfs      f0, 0x2CC(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802A26E4
 * Size:	0000A4
 */
void Game::Hanachirashi::Obj::getFlyingNextState()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x25A8(r2)
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lfs       f1, 0x200(r3)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x30
	  li        r3, 0
	  b         .loc_0x90

	.loc_0x30:
	  li        r4, 0x3
	  bl        -0x18D564
	  cmpwi     r3, 0
	  ble-      .loc_0x48
	  li        r3, 0x6
	  b         .loc_0x90

	.loc_0x48:
	  lwz       r4, 0xC0(r31)
	  lfs       f1, 0x2CC(r31)
	  lfs       f0, 0x8BC(r4)
	  fcmpo     cr0, f1, f0
	  bgt-      .loc_0x6C
	  lwz       r3, 0x1F4(r31)
	  lwz       r0, 0x8E4(r4)
	  cmpw      r3, r0
	  blt-      .loc_0x8C

	.loc_0x6C:
	  lwz       r3, 0x1F4(r31)
	  lwz       r0, 0x8E4(r4)
	  cmpw      r3, r0
	  bge-      .loc_0x84
	  li        r3, 0xA
	  b         .loc_0x90

	.loc_0x84:
	  li        r3, 0x6
	  b         .loc_0x90

	.loc_0x8C:
	  li        r3, -0x1

	.loc_0x90:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802A2788
 * Size:	000038
 */
void Game::Hanachirashi::Obj::addPitchRatio()
{
	/*
	.loc_0x0:
	  lwz       r5, 0xC0(r3)
	  lwz       r4, -0x6514(r13)
	  lfs       f3, 0x90C(r5)
	  lfs       f2, 0x54(r4)
	  lfs       f1, 0x314(r3)
	  lfs       f0, -0x2544(r2)
	  fmadds    f1, f3, f2, f1
	  stfs      f1, 0x314(r3)
	  lfs       f1, 0x314(r3)
	  fcmpo     cr0, f1, f0
	  blelr-
	  fsubs     f0, f1, f0
	  stfs      f0, 0x314(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802A27C0
 * Size:	0003D4
 */
void Game::Hanachirashi::Obj::getSearchedPikmin()
{
	/*
	.loc_0x0:
	  stwu      r1, -0xB0(r1)
	  mflr      r0
	  stw       r0, 0xB4(r1)
	  stfd      f31, 0xA0(r1)
	  psq_st    f31,0xA8(r1),0,0
	  stfd      f30, 0x90(r1)
	  psq_st    f30,0x98(r1),0,0
	  stfd      f29, 0x80(r1)
	  psq_st    f29,0x88(r1),0,0
	  stfd      f28, 0x70(r1)
	  psq_st    f28,0x78(r1),0,0
	  stw       r31, 0x6C(r1)
	  stw       r30, 0x68(r1)
	  mr        r31, r3
	  lfs       f31, -0x2564(r2)
	  lwz       r3, 0xC0(r3)
	  lwz       r0, 0x1F4(r31)
	  lfs       f0, 0x3D4(r3)
	  cmpwi     r0, 0
	  fmuls     f30, f0, f0
	  bne-      .loc_0x64
	  lfs       f1, -0x2540(r2)
	  lfs       f0, 0x424(r3)
	  fmuls     f0, f1, f0
	  fmuls     f31, f31, f0

	.loc_0x64:
	  li        r0, 0
	  lwz       r3, -0x6D0C(r13)
	  lis       r4, 0x804B
	  stw       r0, 0x5C(r1)
	  subi      r4, r4, 0x4364
	  cmplwi    r0, 0
	  stw       r4, 0x50(r1)
	  stw       r0, 0x54(r1)
	  stw       r3, 0x58(r1)
	  bne-      .loc_0xA4
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x54(r1)
	  b         .loc_0x378

	.loc_0xA4:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x54(r1)
	  b         .loc_0x110

	.loc_0xBC:
	  lwz       r3, 0x58(r1)
	  lwz       r4, 0x54(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x5C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x378
	  lwz       r3, 0x58(r1)
	  lwz       r4, 0x54(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x54(r1)

	.loc_0x110:
	  lwz       r12, 0x50(r1)
	  addi      r3, r1, 0x50
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0xBC
	  b         .loc_0x378

	.loc_0x130:
	  lwz       r3, 0x58(r1)
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
	  beq-      .loc_0x2BC
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x1C0(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x2BC
	  lwz       r0, 0xC8(r30)
	  cmplwi    r0, 0
	  beq-      .loc_0x2BC
	  mr        r3, r30
	  bl        -0x1033C4
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x2BC
	  lwz       r0, 0xF4(r30)
	  cmplw     r0, r31
	  beq-      .loc_0x2BC
	  mr        r4, r30
	  addi      r3, r1, 0x20
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r31
	  lfs       f2, 0x20(r1)
	  lwz       r12, 0x0(r31)
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
	  bl        -0x26D8D4
	  bl        0x16F1F0
	  lwz       r12, 0x0(r31)
	  fmr       f29, f1
	  mr        r3, r31
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fmr       f2, f1
	  fmr       f1, f29
	  bl        0x16F1F8
	  fabs      f0, f1
	  frsp      f0, f0
	  fcmpo     cr0, f0, f31
	  cror      2, 0, 0x2
	  bne-      .loc_0x2BC
	  mr        r4, r31
	  addi      r3, r1, 0x44
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r30
	  addi      r3, r1, 0x38
	  lwz       r12, 0x0(r30)
	  lfs       f29, 0x44(r1)
	  lwz       r12, 0x8(r12)
	  lfs       f28, 0x4C(r1)
	  mtctr     r12
	  bctrl
	  lfs       f0, 0x40(r1)
	  lfs       f1, 0x38(r1)
	  fsubs     f0, f0, f28
	  fsubs     f1, f1, f29
	  fmuls     f0, f0, f0
	  fmadds    f0, f1, f1, f0
	  fcmpo     cr0, f0, f30
	  bge-      .loc_0x2BC
	  mr        r3, r30
	  b         .loc_0x39C

	.loc_0x2BC:
	  lwz       r0, 0x5C(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x2E8
	  lwz       r3, 0x58(r1)
	  lwz       r4, 0x54(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x54(r1)
	  b         .loc_0x378

	.loc_0x2E8:
	  lwz       r3, 0x58(r1)
	  lwz       r4, 0x54(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x54(r1)
	  b         .loc_0x35C

	.loc_0x308:
	  lwz       r3, 0x58(r1)
	  lwz       r4, 0x54(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x5C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x378
	  lwz       r3, 0x58(r1)
	  lwz       r4, 0x54(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x54(r1)

	.loc_0x35C:
	  lwz       r12, 0x50(r1)
	  addi      r3, r1, 0x50
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x308

	.loc_0x378:
	  lwz       r3, 0x58(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x54(r1)
	  cmplw     r4, r3
	  bne+      .loc_0x130
	  li        r3, 0

	.loc_0x39C:
	  psq_l     f31,0xA8(r1),0,0
	  lfd       f31, 0xA0(r1)
	  psq_l     f30,0x98(r1),0,0
	  lfd       f30, 0x90(r1)
	  psq_l     f29,0x88(r1),0,0
	  lfd       f29, 0x80(r1)
	  psq_l     f28,0x78(r1),0,0
	  lfd       f28, 0x70(r1)
	  lwz       r31, 0x6C(r1)
	  lwz       r0, 0xB4(r1)
	  lwz       r30, 0x68(r1)
	  mtlr      r0
	  addi      r1, r1, 0xB0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802A2B94
 * Size:	0002F0
 */
void Game::Hanachirashi::Obj::isTargetLost()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x100(r1)
	  mflr      r0
	  stw       r0, 0x104(r1)
	  stfd      f31, 0xF0(r1)
	  psq_st    f31,0xF8(r1),0,0
	  stfd      f30, 0xE0(r1)
	  psq_st    f30,0xE8(r1),0,0
	  stfd      f29, 0xD0(r1)
	  psq_st    f29,0xD8(r1),0,0
	  stfd      f28, 0xC0(r1)
	  psq_st    f28,0xC8(r1),0,0
	  stfd      f27, 0xB0(r1)
	  psq_st    f27,0xB8(r1),0,0
	  stfd      f26, 0xA0(r1)
	  psq_st    f26,0xA8(r1),0,0
	  stfd      f25, 0x90(r1)
	  psq_st    f25,0x98(r1),0,0
	  stw       r31, 0x8C(r1)
	  stw       r30, 0x88(r1)
	  mr        r30, r3
	  lwz       r31, 0x230(r3)
	  cmplwi    r31, 0
	  beq-      .loc_0x29C
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x29C
	  mr        r3, r31
	  bl        -0x103688
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x29C
	  lwz       r0, 0xF4(r31)
	  cmplw     r0, r30
	  beq-      .loc_0x29C
	  lwz       r0, 0x1F4(r30)
	  lwz       r5, 0xC0(r30)
	  cmpwi     r0, 0
	  lfs       f29, 0x424(r5)
	  beq-      .loc_0xAC
	  lfs       f29, -0x253C(r2)

	.loc_0xAC:
	  mr        r4, r31
	  addi      r3, r1, 0x20
	  lwz       r12, 0x0(r31)
	  lfs       f30, 0x3D4(r5)
	  lwz       r12, 0x8(r12)
	  lfs       f31, 0x3AC(r5)
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
	  bl        -0x26DBB8
	  bl        0x16EF0C
	  lwz       r12, 0x0(r30)
	  fmr       f25, f1
	  mr        r3, r30
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fmr       f2, f1
	  fmr       f1, f25
	  bl        0x16EF14
	  mr        r4, r30
	  fmr       f27, f1
	  lwz       r12, 0x0(r30)
	  addi      r3, r1, 0x44
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r31
	  addi      r3, r1, 0x38
	  lwz       r12, 0x0(r31)
	  lfs       f28, 0x44(r1)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r30
	  lfs       f0, 0x38(r1)
	  lwz       r12, 0x0(r30)
	  addi      r3, r1, 0x5C
	  fsubs     f25, f0, f28
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r31
	  addi      r3, r1, 0x50
	  lwz       r12, 0x0(r31)
	  lfs       f28, 0x60(r1)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r30
	  lfs       f0, 0x54(r1)
	  lwz       r12, 0x0(r30)
	  addi      r3, r1, 0x74
	  fsubs     f26, f0, f28
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r31
	  addi      r3, r1, 0x68
	  lwz       r12, 0x0(r31)
	  lfs       f28, 0x7C(r1)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, 0x70(r1)
	  fmuls     f1, f31, f31
	  fmuls     f2, f30, f30
	  li        r3, 0x1
	  fsubs     f0, f0, f28
	  li        r4, 0
	  fmuls     f0, f0, f0
	  fmadds    f0, f25, f25, f0
	  fcmpo     cr0, f0, f1
	  ble-      .loc_0x260
	  fcmpo     cr0, f0, f2
	  mr        r0, r4
	  ble-      .loc_0x254
	  fabs      f1, f26
	  lfs       f0, -0x2538(r2)
	  frsp      f1, f1
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x254
	  mr        r0, r3

	.loc_0x254:
	  rlwinm.   r0,r0,0,24,31
	  beq-      .loc_0x260
	  li        r4, 0x1

	.loc_0x260:
	  rlwinm.   r0,r4,0,24,31
	  bne-      .loc_0x2A0
	  lfs       f0, -0x2540(r2)
	  fabs      f2, f27
	  lfs       f1, -0x2564(r2)
	  fmuls     f0, f0, f29
	  frsp      f2, f2
	  fmuls     f0, f1, f0
	  fcmpo     cr0, f2, f0
	  cror      2, 0, 0x2
	  mfcr      r0
	  rlwinm.   r0,r0,3,31,31
	  beq-      .loc_0x2A0
	  li        r3, 0
	  b         .loc_0x2A0

	.loc_0x29C:
	  li        r3, 0x1

	.loc_0x2A0:
	  psq_l     f31,0xF8(r1),0,0
	  lfd       f31, 0xF0(r1)
	  psq_l     f30,0xE8(r1),0,0
	  lfd       f30, 0xE0(r1)
	  psq_l     f29,0xD8(r1),0,0
	  lfd       f29, 0xD0(r1)
	  psq_l     f28,0xC8(r1),0,0
	  lfd       f28, 0xC0(r1)
	  psq_l     f27,0xB8(r1),0,0
	  lfd       f27, 0xB0(r1)
	  psq_l     f26,0xA8(r1),0,0
	  lfd       f26, 0xA0(r1)
	  psq_l     f25,0x98(r1),0,0
	  lfd       f25, 0x90(r1)
	  lwz       r31, 0x8C(r1)
	  lwz       r0, 0x104(r1)
	  lwz       r30, 0x88(r1)
	  mtlr      r0
	  addi      r1, r1, 0x100
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802A2E84
 * Size:	00038C
 */
void Game::Hanachirashi::Obj::isAttackable()
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
	  stw       r31, 0x4C(r1)
	  stw       r30, 0x48(r1)
	  lwz       r12, 0x0(r3)
	  mr        r31, r3
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fmr       f2, f1
	  lfs       f0, -0x25A8(r2)
	  lwz       r5, 0xC0(r31)
	  fcmpo     cr0, f2, f0
	  bge-      .loc_0x58
	  fneg      f2, f2

	.loc_0x58:
	  lfs       f3, -0x256C(r2)
	  lis       r3, 0x8050
	  lfs       f0, -0x25A8(r2)
	  addi      r4, r3, 0x71A0
	  fmuls     f2, f2, f3
	  lfs       f4, 0x564(r5)
	  fcmpo     cr0, f1, f0
	  fctiwz    f0, f2
	  stfd      f0, 0x30(r1)
	  lwz       r0, 0x34(r1)
	  rlwinm    r0,r0,3,18,28
	  add       r3, r4, r0
	  lfs       f0, 0x4(r3)
	  fmuls     f31, f4, f0
	  bge-      .loc_0xB8
	  lfs       f0, -0x2570(r2)
	  fmuls     f0, f1, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x38(r1)
	  lwz       r0, 0x3C(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r4, r0
	  fneg      f0, f0
	  b         .loc_0xD0

	.loc_0xB8:
	  fmuls     f0, f1, f3
	  fctiwz    f0, f0
	  stfd      f0, 0x40(r1)
	  lwz       r0, 0x44(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r4, r0

	.loc_0xD0:
	  mr        r4, r31
	  fmuls     f30, f4, f0
	  lwz       r12, 0x0(r31)
	  addi      r3, r1, 0x14
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0xC0(r31)
	  lis       r3, 0x804B
	  lfs       f2, 0x14(r1)
	  li        r0, 0
	  lfs       f0, 0x58C(r4)
	  subi      r4, r3, 0x4364
	  lfs       f1, 0x1C(r1)
	  cmplwi    r0, 0
	  lwz       r3, -0x6D0C(r13)
	  fadds     f30, f30, f2
	  fadds     f31, f31, f1
	  stw       r4, 0x20(r1)
	  fmuls     f29, f0, f0
	  stw       r0, 0x2C(r1)
	  stw       r0, 0x24(r1)
	  stw       r3, 0x28(r1)
	  bne-      .loc_0x148
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x24(r1)
	  b         .loc_0x338

	.loc_0x148:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x24(r1)
	  b         .loc_0x1B4

	.loc_0x160:
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
	  bne-      .loc_0x338
	  lwz       r3, 0x28(r1)
	  lwz       r4, 0x24(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x24(r1)

	.loc_0x1B4:
	  lwz       r12, 0x20(r1)
	  addi      r3, r1, 0x20
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x160
	  b         .loc_0x338

	.loc_0x1D4:
	  lwz       r3, 0x28(r1)
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
	  beq-      .loc_0x27C
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x1C0(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x27C
	  mr        r3, r30
	  bl        -0x103B20
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x27C
	  lwz       r0, 0xF4(r30)
	  cmplw     r0, r31
	  beq-      .loc_0x27C
	  mr        r4, r30
	  addi      r3, r1, 0x8
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, 0x10(r1)
	  lfs       f1, 0x8(r1)
	  fsubs     f0, f0, f31
	  fsubs     f1, f1, f30
	  fmuls     f0, f0, f0
	  fmadds    f0, f1, f1, f0
	  fcmpo     cr0, f0, f29
	  bge-      .loc_0x27C
	  mr        r3, r30
	  b         .loc_0x35C

	.loc_0x27C:
	  lwz       r0, 0x2C(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x2A8
	  lwz       r3, 0x28(r1)
	  lwz       r4, 0x24(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x24(r1)
	  b         .loc_0x338

	.loc_0x2A8:
	  lwz       r3, 0x28(r1)
	  lwz       r4, 0x24(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x24(r1)
	  b         .loc_0x31C

	.loc_0x2C8:
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
	  bne-      .loc_0x338
	  lwz       r3, 0x28(r1)
	  lwz       r4, 0x24(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x24(r1)

	.loc_0x31C:
	  lwz       r12, 0x20(r1)
	  addi      r3, r1, 0x20
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x2C8

	.loc_0x338:
	  lwz       r3, 0x28(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x24(r1)
	  cmplw     r4, r3
	  bne+      .loc_0x1D4
	  li        r3, 0

	.loc_0x35C:
	  psq_l     f31,0x78(r1),0,0
	  lfd       f31, 0x70(r1)
	  psq_l     f30,0x68(r1),0,0
	  lfd       f30, 0x60(r1)
	  psq_l     f29,0x58(r1),0,0
	  lfd       f29, 0x50(r1)
	  lwz       r31, 0x4C(r1)
	  lwz       r0, 0x84(r1)
	  lwz       r30, 0x48(r1)
	  mtlr      r0
	  addi      r1, r1, 0x80
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802A3210
 * Size:	0001AC
 */
void Game::Hanachirashi::Obj::updateEmit()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stfd      f31, 0x30(r1)
	  psq_st    f31,0x38(r1),0,0
	  stw       r31, 0x2C(r1)
	  mr        r31, r3
	  lwz       r3, 0x2E4(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x40
	  lfs       f0, 0xC(r3)
	  stfs      f0, 0x2E8(r31)
	  lfs       f0, 0x1C(r3)
	  stfs      f0, 0x2EC(r31)
	  lfs       f0, 0x2C(r3)
	  stfs      f0, 0x2F0(r31)

	.loc_0x40:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, -0x25A8(r2)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x64
	  fneg      f1, f1

	.loc_0x64:
	  lfs       f0, -0x256C(r2)
	  lis       r4, 0x8050
	  lwz       r12, 0x0(r31)
	  addi      r4, r4, 0x71A0
	  fmuls     f0, f1, f0
	  mr        r3, r31
	  lwz       r12, 0x64(r12)
	  fctiwz    f0, f0
	  stfd      f0, 0x8(r1)
	  lwz       r0, 0xC(r1)
	  rlwinm    r0,r0,3,18,28
	  add       r4, r4, r0
	  lfs       f31, 0x4(r4)
	  mtctr     r12
	  bctrl
	  lfs       f0, -0x25A8(r2)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0xD8
	  lfs       f0, -0x2570(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fmuls     f0, f1, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x10(r1)
	  lwz       r0, 0x14(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r3, r0
	  fneg      f0, f0
	  b         .loc_0xFC

	.loc_0xD8:
	  lfs       f0, -0x256C(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fmuls     f0, f1, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x18(r1)
	  lwz       r0, 0x1C(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r3, r0

	.loc_0xFC:
	  stfs      f0, 0x2F4(r31)
	  lfs       f0, -0x2534(r2)
	  lfs       f1, -0x25A8(r2)
	  stfs      f0, 0x2F8(r31)
	  stfs      f31, 0x2FC(r31)
	  lfs       f3, 0x2F4(r31)
	  lfs       f2, 0x2F8(r31)
	  lfs       f4, 0x2FC(r31)
	  fmuls     f0, f3, f3
	  fmuls     f2, f2, f2
	  fmuls     f4, f4, f4
	  fadds     f0, f0, f2
	  fadds     f0, f4, f0
	  fcmpo     cr0, f0, f1
	  ble-      .loc_0x154
	  fmadds    f0, f3, f3, f2
	  fadds     f2, f4, f0
	  fcmpo     cr0, f2, f1
	  ble-      .loc_0x158
	  fsqrte    f0, f2
	  fmuls     f2, f0, f2
	  b         .loc_0x158

	.loc_0x154:
	  fmr       f2, f1

	.loc_0x158:
	  lfs       f0, -0x25A8(r2)
	  fcmpo     cr0, f2, f0
	  ble-      .loc_0x190
	  lfs       f1, -0x2584(r2)
	  lfs       f0, 0x2F4(r31)
	  fdivs     f1, f1, f2
	  fmuls     f0, f0, f1
	  stfs      f0, 0x2F4(r31)
	  lfs       f0, 0x2F8(r31)
	  fmuls     f0, f0, f1
	  stfs      f0, 0x2F8(r31)
	  lfs       f0, 0x2FC(r31)
	  fmuls     f0, f0, f1
	  stfs      f0, 0x2FC(r31)

	.loc_0x190:
	  psq_l     f31,0x38(r1),0,0
	  lwz       r0, 0x44(r1)
	  lfd       f31, 0x30(r1)
	  lwz       r31, 0x2C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802A33BC
 * Size:	0001E8
 */
void Game::Hanachirashi::Obj::getAttackPosition()
{
	/*
	.loc_0x0:
	  stwu      r1, -0xE0(r1)
	  mflr      r0
	  stw       r0, 0xE4(r1)
	  stfd      f31, 0xD0(r1)
	  psq_st    f31,0xD8(r1),0,0
	  stfd      f30, 0xC0(r1)
	  psq_st    f30,0xC8(r1),0,0
	  stfd      f29, 0xB0(r1)
	  psq_st    f29,0xB8(r1),0,0
	  stfd      f28, 0xA0(r1)
	  psq_st    f28,0xA8(r1),0,0
	  stfd      f27, 0x90(r1)
	  psq_st    f27,0x98(r1),0,0
	  stfd      f26, 0x80(r1)
	  psq_st    f26,0x88(r1),0,0
	  stfd      f25, 0x70(r1)
	  psq_st    f25,0x78(r1),0,0
	  stfd      f24, 0x60(r1)
	  psq_st    f24,0x68(r1),0,0
	  stfd      f23, 0x50(r1)
	  psq_st    f23,0x58(r1),0,0
	  stfd      f22, 0x40(r1)
	  psq_st    f22,0x48(r1),0,0
	  stfd      f21, 0x30(r1)
	  psq_st    f21,0x38(r1),0,0
	  stfd      f20, 0x20(r1)
	  psq_st    f20,0x28(r1),0,0
	  stw       r31, 0x1C(r1)
	  lwz       r5, 0xC0(r4)
	  mr        r31, r3
	  lfs       f0, -0x2580(r2)
	  lfs       f2, 0x5B4(r5)
	  lfs       f1, -0x2530(r2)
	  fdivs     f3, f0, f2
	  lfs       f27, 0x2F4(r4)
	  lfs       f26, 0x2F8(r4)
	  lfs       f25, 0x2FC(r4)
	  lfs       f31, -0x2584(r2)
	  lfs       f30, 0x2E8(r4)
	  fmuls     f27, f27, f2
	  lfs       f29, 0x2EC(r4)
	  fmuls     f26, f26, f2
	  lfs       f28, 0x2F0(r4)
	  fmuls     f25, f25, f2
	  fadds     f27, f27, f30
	  fadds     f26, f26, f29
	  fadds     f25, f25, f28
	  fdivs     f21, f1, f2
	  fsubs     f4, f31, f3
	  fmuls     f2, f27, f3
	  fmuls     f1, f26, f3
	  fmuls     f0, f25, f3
	  fmr       f20, f3
	  fmadds    f24, f30, f4, f2
	  fmadds    f23, f29, f4, f1
	  fmadds    f22, f28, f4, f0
	  b         .loc_0x154

	.loc_0xE4:
	  fsubs     f3, f31, f20
	  lwz       r3, -0x6CF8(r13)
	  fmuls     f2, f27, f20
	  addi      r4, r1, 0x8
	  fmuls     f1, f26, f20
	  fmuls     f0, f25, f20
	  fmadds    f2, f30, f3, f2
	  fmadds    f1, f29, f3, f1
	  fmadds    f0, f28, f3, f0
	  stfs      f2, 0x8(r1)
	  stfs      f1, 0xC(r1)
	  stfs      f0, 0x10(r1)
	  lwz       r12, 0x4(r3)
	  lwz       r12, 0x28(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, 0xC(r1)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x140
	  stfs      f24, 0x0(r31)
	  stfs      f23, 0x4(r31)
	  stfs      f22, 0x8(r31)
	  b         .loc_0x174

	.loc_0x140:
	  frsp      f23, f1
	  stfs      f1, 0xC(r1)
	  fadds     f20, f20, f21
	  lfs       f24, 0x8(r1)
	  lfs       f22, 0x10(r1)

	.loc_0x154:
	  fcmpo     cr0, f20, f31
	  blt+      .loc_0xE4
	  lfs       f0, 0x8(r1)
	  stfs      f0, 0x0(r31)
	  lfs       f0, 0xC(r1)
	  stfs      f0, 0x4(r31)
	  lfs       f0, 0x10(r1)
	  stfs      f0, 0x8(r31)

	.loc_0x174:
	  psq_l     f31,0xD8(r1),0,0
	  lfd       f31, 0xD0(r1)
	  psq_l     f30,0xC8(r1),0,0
	  lfd       f30, 0xC0(r1)
	  psq_l     f29,0xB8(r1),0,0
	  lfd       f29, 0xB0(r1)
	  psq_l     f28,0xA8(r1),0,0
	  lfd       f28, 0xA0(r1)
	  psq_l     f27,0x98(r1),0,0
	  lfd       f27, 0x90(r1)
	  psq_l     f26,0x88(r1),0,0
	  lfd       f26, 0x80(r1)
	  psq_l     f25,0x78(r1),0,0
	  lfd       f25, 0x70(r1)
	  psq_l     f24,0x68(r1),0,0
	  lfd       f24, 0x60(r1)
	  psq_l     f23,0x58(r1),0,0
	  lfd       f23, 0x50(r1)
	  psq_l     f22,0x48(r1),0,0
	  lfd       f22, 0x40(r1)
	  psq_l     f21,0x38(r1),0,0
	  lfd       f21, 0x30(r1)
	  psq_l     f20,0x28(r1),0,0
	  lfd       f20, 0x20(r1)
	  lwz       r0, 0xE4(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0xE0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802A35A4
 * Size:	00090C
 */
void Game::Hanachirashi::Obj::windTarget()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x190(r1)
	  mflr      r0
	  stw       r0, 0x194(r1)
	  stfd      f31, 0x180(r1)
	  psq_st    f31,0x188(r1),0,0
	  stfd      f30, 0x170(r1)
	  psq_st    f30,0x178(r1),0,0
	  stfd      f29, 0x160(r1)
	  psq_st    f29,0x168(r1),0,0
	  stfd      f28, 0x150(r1)
	  psq_st    f28,0x158(r1),0,0
	  stfd      f27, 0x140(r1)
	  psq_st    f27,0x148(r1),0,0
	  stfd      f26, 0x130(r1)
	  psq_st    f26,0x138(r1),0,0
	  stfd      f25, 0x120(r1)
	  psq_st    f25,0x128(r1),0,0
	  stfd      f24, 0x110(r1)
	  psq_st    f24,0x118(r1),0,0
	  stfd      f23, 0x100(r1)
	  psq_st    f23,0x108(r1),0,0
	  stfd      f22, 0xF0(r1)
	  psq_st    f22,0xF8(r1),0,0
	  stfd      f21, 0xE0(r1)
	  psq_st    f21,0xE8(r1),0,0
	  stfd      f20, 0xD0(r1)
	  psq_st    f20,0xD8(r1),0,0
	  stfd      f19, 0xC0(r1)
	  psq_st    f19,0xC8(r1),0,0
	  stfd      f18, 0xB0(r1)
	  psq_st    f18,0xB8(r1),0,0
	  stfd      f17, 0xA0(r1)
	  psq_st    f17,0xA8(r1),0,0
	  stfd      f16, 0x90(r1)
	  psq_st    f16,0x98(r1),0,0
	  stw       r31, 0x8C(r1)
	  stw       r30, 0x88(r1)
	  stw       r29, 0x84(r1)
	  mr        r30, r3
	  lfs       f2, -0x2584(r2)
	  lfs       f3, 0x30C(r3)
	  li        r31, 0
	  fcmpo     cr0, f3, f2
	  bge-      .loc_0xD4
	  lwz       r3, -0x6514(r13)
	  lfs       f1, -0x252C(r2)
	  lfs       f0, 0x54(r3)
	  fmadds    f0, f1, f0, f3
	  stfs      f0, 0x30C(r30)
	  lfs       f0, 0x30C(r30)
	  fcmpo     cr0, f0, f2
	  ble-      .loc_0xD4
	  stfs      f2, 0x30C(r30)

	.loc_0xD4:
	  lwz       r3, 0xC0(r30)
	  lfs       f1, -0x2540(r2)
	  lfs       f0, 0x5DC(r3)
	  lfs       f3, 0x30C(r30)
	  fmuls     f0, f1, f0
	  lfs       f2, 0x5B4(r3)
	  lfs       f1, -0x2564(r2)
	  fmuls     f19, f3, f2
	  lfs       f16, 0x2E8(r30)
	  fmuls     f1, f1, f0
	  lfs       f17, 0x2EC(r30)
	  lfs       f18, 0x2F0(r30)
	  lfs       f29, 0x2F4(r30)
	  lfs       f21, 0x2F8(r30)
	  lfs       f28, 0x2FC(r30)
	  bl        -0x1D3DC0
	  fneg      f27, f28
	  lfs       f31, -0x25A8(r2)
	  fmuls     f0, f29, f29
	  fmr       f30, f29
	  fmadds    f2, f27, f27, f31
	  frsp      f20, f1
	  fadds     f2, f0, f2
	  fcmpo     cr0, f2, f31
	  ble-      .loc_0x148
	  ble-      .loc_0x14C
	  fsqrte    f1, f2
	  fmuls     f2, f1, f2
	  b         .loc_0x14C

	.loc_0x148:
	  fmr       f2, f31

	.loc_0x14C:
	  lfs       f1, -0x25A8(r2)
	  fcmpo     cr0, f2, f1
	  ble-      .loc_0x16C
	  lfs       f1, -0x2584(r2)
	  fdivs     f1, f1, f2
	  fmuls     f27, f27, f1
	  fmuls     f31, f31, f1
	  fmuls     f30, f30, f1

	.loc_0x16C:
	  fmuls     f3, f27, f28
	  lfs       f1, -0x25A8(r2)
	  fmuls     f4, f30, f21
	  fmuls     f2, f31, f29
	  fmsubs    f25, f30, f29, f3
	  fmsubs    f26, f31, f28, f4
	  fmsubs    f24, f27, f21, f2
	  fmuls     f2, f25, f25
	  fmuls     f3, f24, f24
	  fmadds    f2, f26, f26, f2
	  fadds     f2, f3, f2
	  fcmpo     cr0, f2, f1
	  ble-      .loc_0x1B0
	  ble-      .loc_0x1B4
	  fsqrte    f1, f2
	  fmuls     f2, f1, f2
	  b         .loc_0x1B4

	.loc_0x1B0:
	  fmr       f2, f1

	.loc_0x1B4:
	  lfs       f1, -0x25A8(r2)
	  fcmpo     cr0, f2, f1
	  ble-      .loc_0x1D4
	  lfs       f1, -0x2584(r2)
	  fdivs     f1, f1, f2
	  fmuls     f26, f26, f1
	  fmuls     f25, f25, f1
	  fmuls     f24, f24, f1

	.loc_0x1D4:
	  lfs       f1, -0x25A8(r2)
	  fmuls     f2, f28, f28
	  fmr       f22, f29
	  fadds     f0, f0, f1
	  fmr       f23, f28
	  fadds     f0, f2, f0
	  fcmpo     cr0, f0, f1
	  ble-      .loc_0x210
	  fmadds    f0, f29, f29, f1
	  fadds     f2, f2, f0
	  fcmpo     cr0, f2, f1
	  ble-      .loc_0x214
	  fsqrte    f0, f2
	  fmuls     f2, f0, f2
	  b         .loc_0x214

	.loc_0x210:
	  fmr       f2, f1

	.loc_0x214:
	  lfs       f0, -0x25A8(r2)
	  fcmpo     cr0, f2, f0
	  ble-      .loc_0x230
	  lfs       f0, -0x2584(r2)
	  fdivs     f0, f0, f2
	  fmuls     f22, f22, f0
	  fmuls     f23, f23, f0

	.loc_0x230:
	  li        r0, 0
	  lwz       r3, -0x6D20(r13)
	  lis       r4, 0x804B
	  stw       r0, 0x48(r1)
	  subi      r4, r4, 0x434C
	  cmplwi    r0, 0
	  stw       r4, 0x3C(r1)
	  stw       r0, 0x40(r1)
	  stw       r3, 0x44(r1)
	  bne-      .loc_0x270
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x40(r1)
	  b         .loc_0x500

	.loc_0x270:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x40(r1)
	  b         .loc_0x2DC

	.loc_0x288:
	  lwz       r3, 0x44(r1)
	  lwz       r4, 0x40(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x48(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x500
	  lwz       r3, 0x44(r1)
	  lwz       r4, 0x40(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x40(r1)

	.loc_0x2DC:
	  lwz       r12, 0x3C(r1)
	  addi      r3, r1, 0x3C
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x288
	  b         .loc_0x500

	.loc_0x2FC:
	  lwz       r3, 0x44(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  mr        r29, r3
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x444
	  mr        r4, r29
	  addi      r3, r1, 0x20
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f1, 0x24(r1)
	  lfs       f0, 0x20(r1)
	  fsubs     f2, f1, f17
	  lfs       f1, 0x28(r1)
	  fsubs     f4, f0, f16
	  fsubs     f0, f1, f18
	  fmuls     f1, f21, f2
	  fmadds    f1, f29, f4, f1
	  fmadds    f5, f28, f0, f1
	  fcmpo     cr0, f5, f19
	  bge-      .loc_0x444
	  lfs       f6, -0x25A8(r2)
	  fcmpo     cr0, f5, f6
	  ble-      .loc_0x444
	  fmuls     f3, f25, f2
	  fmuls     f1, f31, f2
	  fmuls     f2, f5, f20
	  fmadds    f5, f26, f4, f3
	  fmadds    f4, f27, f4, f1
	  fmuls     f3, f2, f2
	  fmadds    f1, f24, f0, f5
	  fmadds    f0, f30, f0, f4
	  fmuls     f4, f1, f1
	  fmadds    f4, f0, f0, f4
	  fcmpo     cr0, f4, f3
	  bge-      .loc_0x444
	  fcmpo     cr0, f4, f6
	  ble-      .loc_0x3C8
	  ble-      .loc_0x3C4
	  fsqrte    f3, f4
	  fmuls     f6, f3, f4
	  b         .loc_0x3C8

	.loc_0x3C4:
	  fmr       f6, f4

	.loc_0x3C8:
	  fdivs     f7, f6, f2
	  lfs       f2, -0x2584(r2)
	  lwz       r5, 0xC0(r30)
	  lis       r4, 0x804B
	  lis       r3, 0x804B
	  lfs       f5, -0x2528(r2)
	  fsubs     f4, f2, f7
	  lfs       f6, 0x604(r5)
	  fmuls     f3, f27, f0
	  subi      r0, r4, 0x5D00
	  fmuls     f0, f30, f0
	  lfs       f2, -0x25A8(r2)
	  fmadds    f4, f5, f7, f4
	  stw       r0, 0x64(r1)
	  fmadds    f3, f22, f1, f3
	  addi      r0, r3, 0x4974
	  fmadds    f0, f23, f1, f0
	  stw       r30, 0x68(r1)
	  fmuls     f1, f4, f3
	  stw       r0, 0x64(r1)
	  fmuls     f0, f4, f0
	  mr        r3, r29
	  stfs      f6, 0x6C(r1)
	  addi      r4, r1, 0x64
	  stfs      f1, 0x70(r1)
	  stfs      f2, 0x74(r1)
	  stfs      f0, 0x78(r1)
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x1A4(r12)
	  mtctr     r12
	  bctrl

	.loc_0x444:
	  lwz       r0, 0x48(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x470
	  lwz       r3, 0x44(r1)
	  lwz       r4, 0x40(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x40(r1)
	  b         .loc_0x500

	.loc_0x470:
	  lwz       r3, 0x44(r1)
	  lwz       r4, 0x40(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x40(r1)
	  b         .loc_0x4E4

	.loc_0x490:
	  lwz       r3, 0x44(r1)
	  lwz       r4, 0x40(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x48(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x500
	  lwz       r3, 0x44(r1)
	  lwz       r4, 0x40(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x40(r1)

	.loc_0x4E4:
	  lwz       r12, 0x3C(r1)
	  addi      r3, r1, 0x3C
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x490

	.loc_0x500:
	  lwz       r3, 0x44(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x40(r1)
	  cmplw     r4, r3
	  bne+      .loc_0x2FC
	  li        r0, 0
	  lwz       r3, -0x6D0C(r13)
	  lis       r4, 0x804B
	  stw       r0, 0x38(r1)
	  subi      r4, r4, 0x4364
	  cmplwi    r0, 0
	  stw       r4, 0x2C(r1)
	  stw       r0, 0x30(r1)
	  stw       r3, 0x34(r1)
	  bne-      .loc_0x560
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x30(r1)
	  b         .loc_0x828

	.loc_0x560:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x30(r1)
	  b         .loc_0x5CC

	.loc_0x578:
	  lwz       r3, 0x34(r1)
	  lwz       r4, 0x30(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x38(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x828
	  lwz       r3, 0x34(r1)
	  lwz       r4, 0x30(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x30(r1)

	.loc_0x5CC:
	  lwz       r12, 0x2C(r1)
	  addi      r3, r1, 0x2C
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x578
	  b         .loc_0x828

	.loc_0x5EC:
	  lwz       r3, 0x34(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  mr        r29, r3
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x76C
	  mr        r3, r29
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x1C0(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x76C
	  mr        r4, r29
	  addi      r3, r1, 0x14
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f1, 0x18(r1)
	  lfs       f0, 0x14(r1)
	  fsubs     f4, f1, f17
	  lfs       f1, 0x1C(r1)
	  fsubs     f3, f0, f16
	  fsubs     f6, f1, f18
	  fmuls     f0, f21, f4
	  fmadds    f0, f29, f3, f0
	  fmadds    f0, f28, f6, f0
	  fcmpo     cr0, f0, f19
	  bge-      .loc_0x76C
	  lfs       f5, -0x25A8(r2)
	  fcmpo     cr0, f0, f5
	  ble-      .loc_0x76C
	  fmuls     f2, f25, f4
	  fmuls     f1, f31, f4
	  fmuls     f0, f0, f20
	  fmadds    f4, f26, f3, f2
	  fmadds    f2, f27, f3, f1
	  fmuls     f3, f0, f0
	  fmadds    f1, f24, f6, f4
	  fmadds    f2, f30, f6, f2
	  fmuls     f4, f1, f1
	  fmadds    f4, f2, f2, f4
	  fcmpo     cr0, f4, f3
	  bge-      .loc_0x76C
	  fcmpo     cr0, f4, f5
	  ble-      .loc_0x6D0
	  ble-      .loc_0x6D4
	  fsqrte    f3, f4
	  fmuls     f4, f3, f4
	  b         .loc_0x6D4

	.loc_0x6D0:
	  fmr       f4, f5

	.loc_0x6D4:
	  fdivs     f8, f4, f0
	  lfs       f0, -0x2584(r2)
	  lwz       r5, 0xC0(r30)
	  lis       r4, 0x804B
	  lfs       f5, -0x2524(r2)
	  lis       r3, 0x804B
	  fmuls     f7, f27, f2
	  lfs       f6, -0x254C(r2)
	  fsubs     f3, f0, f8
	  lfs       f0, 0x604(r5)
	  fmuls     f4, f30, f2
	  subi      r0, r4, 0x5D00
	  fmadds    f2, f6, f3, f8
	  lfs       f6, -0x257C(r2)
	  fmadds    f7, f22, f1, f7
	  stw       r0, 0x4C(r1)
	  fmuls     f5, f5, f8
	  addi      r0, r3, 0x4974
	  fmadds    f1, f23, f1, f4
	  lis       r3, 0x804B
	  fmuls     f4, f2, f7
	  stw       r0, 0x4C(r1)
	  fmadds    f3, f6, f3, f5
	  addi      r0, r3, 0x4950
	  fmuls     f1, f2, f1
	  stw       r30, 0x50(r1)
	  mr        r3, r29
	  addi      r4, r1, 0x4C
	  stfs      f0, 0x54(r1)
	  stfs      f4, 0x58(r1)
	  stfs      f3, 0x5C(r1)
	  stfs      f1, 0x60(r1)
	  stw       r0, 0x4C(r1)
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x1A4(r12)
	  mtctr     r12
	  bctrl
	  mr        r31, r3

	.loc_0x76C:
	  lwz       r0, 0x38(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x798
	  lwz       r3, 0x34(r1)
	  lwz       r4, 0x30(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x30(r1)
	  b         .loc_0x828

	.loc_0x798:
	  lwz       r3, 0x34(r1)
	  lwz       r4, 0x30(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x30(r1)
	  b         .loc_0x80C

	.loc_0x7B8:
	  lwz       r3, 0x34(r1)
	  lwz       r4, 0x30(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x38(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x828
	  lwz       r3, 0x34(r1)
	  lwz       r4, 0x30(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x30(r1)

	.loc_0x80C:
	  lwz       r12, 0x2C(r1)
	  addi      r3, r1, 0x2C
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x7B8

	.loc_0x828:
	  lwz       r3, 0x34(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x30(r1)
	  cmplw     r4, r3
	  bne+      .loc_0x5EC
	  mr        r4, r30
	  addi      r3, r1, 0x8
	  bl        -0xA38
	  lfs       f0, 0x8(r1)
	  mr        r3, r31
	  stfs      f0, 0x300(r30)
	  lfs       f0, 0xC(r1)
	  stfs      f0, 0x304(r30)
	  lfs       f0, 0x10(r1)
	  stfs      f0, 0x308(r30)
	  psq_l     f31,0x188(r1),0,0
	  lfd       f31, 0x180(r1)
	  psq_l     f30,0x178(r1),0,0
	  lfd       f30, 0x170(r1)
	  psq_l     f29,0x168(r1),0,0
	  lfd       f29, 0x160(r1)
	  psq_l     f28,0x158(r1),0,0
	  lfd       f28, 0x150(r1)
	  psq_l     f27,0x148(r1),0,0
	  lfd       f27, 0x140(r1)
	  psq_l     f26,0x138(r1),0,0
	  lfd       f26, 0x130(r1)
	  psq_l     f25,0x128(r1),0,0
	  lfd       f25, 0x120(r1)
	  psq_l     f24,0x118(r1),0,0
	  lfd       f24, 0x110(r1)
	  psq_l     f23,0x108(r1),0,0
	  lfd       f23, 0x100(r1)
	  psq_l     f22,0xF8(r1),0,0
	  lfd       f22, 0xF0(r1)
	  psq_l     f21,0xE8(r1),0,0
	  lfd       f21, 0xE0(r1)
	  psq_l     f20,0xD8(r1),0,0
	  lfd       f20, 0xD0(r1)
	  psq_l     f19,0xC8(r1),0,0
	  lfd       f19, 0xC0(r1)
	  psq_l     f18,0xB8(r1),0,0
	  lfd       f18, 0xB0(r1)
	  psq_l     f17,0xA8(r1),0,0
	  lfd       f17, 0xA0(r1)
	  psq_l     f16,0x98(r1),0,0
	  lfd       f16, 0x90(r1)
	  lwz       r31, 0x8C(r1)
	  lwz       r30, 0x88(r1)
	  lwz       r0, 0x194(r1)
	  lwz       r29, 0x84(r1)
	  mtlr      r0
	  addi      r1, r1, 0x190
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802A3EB0
 * Size:	000150
 */
void Game::Hanachirashi::Obj::createEffect()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  li        r3, 0x2C
	  stw       r30, 0x8(r1)
	  bl        -0x280028
	  mr.       r30, r3
	  beq-      .loc_0x44
	  li        r4, 0
	  li        r5, 0x71
	  li        r6, 0x72
	  bl        0x10C5B8
	  lis       r3, 0x804D
	  subi      r0, r3, 0x76D4
	  stw       r0, 0x0(r30)

	.loc_0x44:
	  stw       r30, 0x318(r31)
	  li        r3, 0x34
	  bl        -0x280058
	  mr.       r30, r3
	  beq-      .loc_0x78
	  addi      r4, r31, 0x300
	  addi      r5, r31, 0x1FC
	  li        r6, 0x252
	  li        r7, 0x253
	  bl        0x10CAB4
	  lis       r3, 0x804D
	  subi      r0, r3, 0x2D7C
	  stw       r0, 0x0(r30)

	.loc_0x78:
	  stw       r30, 0x31C(r31)
	  li        r3, 0x40
	  bl        -0x28008C
	  mr.       r30, r3
	  beq-      .loc_0xAC
	  li        r4, 0
	  li        r5, 0x254
	  li        r6, 0x255
	  li        r7, 0x256
	  bl        0x10C660
	  lis       r3, 0x804D
	  subi      r0, r3, 0x2D98
	  stw       r0, 0x0(r30)

	.loc_0xAC:
	  stw       r30, 0x320(r31)
	  li        r3, 0x14
	  bl        -0x2800C0
	  cmplwi    r3, 0
	  beq-      .loc_0x134
	  lis       r4, 0x804B
	  lis       r5, 0x804A
	  subi      r0, r4, 0x5808
	  lis       r4, 0x804E
	  stw       r0, 0x0(r3)
	  subi      r0, r5, 0x1D84
	  addi      r5, r4, 0x698C
	  lis       r4, 0x804E
	  stw       r0, 0x4(r3)
	  addi      r7, r4, 0x68A8
	  lis       r4, 0x804D
	  addi      r0, r5, 0x14
	  stw       r5, 0x0(r3)
	  subi      r4, r4, 0x7758
	  li        r9, 0
	  li        r8, 0x2B2
	  stw       r0, 0x4(r3)
	  addi      r6, r7, 0x14
	  li        r5, 0x73
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

	.loc_0x134:
	  stw       r3, 0x324(r31)
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
 * Address:	802A4000
 * Size:	00004C
 */
void Game::Hanachirashi::Obj::setupEffect()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r3, 0x318(r3)
	  lwz       r4, 0x2E4(r31)
	  bl        0x10C584
	  lwz       r3, 0x320(r31)
	  lwz       r4, 0x2E4(r31)
	  bl        0x10C624
	  lwz       r0, 0x2E4(r31)
	  lwz       r3, 0x324(r31)
	  stw       r0, 0x10(r3)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802A404C
 * Size:	00007C
 */
void Game::Hanachirashi::Obj::startDeadEffect()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r4, 0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r3, 0x318(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x31C(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x320(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x324(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
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
 * Address:	802A40C8
 * Size:	000034
 */
void Game::Hanachirashi::Obj::createSuckEffect()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r4, 0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x324(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
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
 * Address:	802A40FC
 * Size:	000090
 */
void Game::Hanachirashi::Obj::startWindEffect()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  addi      r3, r1, 0x8
	  mr        r4, r31
	  bl        -0xD5C
	  lfs       f0, 0x8(r1)
	  stfs      f0, 0x300(r31)
	  lfs       f0, 0xC(r1)
	  stfs      f0, 0x304(r31)
	  lfs       f0, 0x10(r1)
	  stfs      f0, 0x308(r31)
	  lwz       r3, 0x324(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x320(r31)
	  li        r4, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x31C(r31)
	  li        r4, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802A418C
 * Size:	000078
 */
void Game::Hanachirashi::Obj::finishWindEffect()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r3, 0x318(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x31C(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x320(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x324(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
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
 * Address:	802A4204
 * Size:	000074
 */
void Game::Hanachirashi::Obj::createDownEffect()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  lfs       f1, 0x194(r3)
	  lfs       f0, 0x248(r3)
	  lfs       f3, 0x190(r3)
	  fadds     f4, f1, f0
	  lfs       f2, 0x244(r3)
	  lfs       f1, 0x18C(r3)
	  lfs       f0, 0x240(r3)
	  fadds     f2, f3, f2
	  fadds     f0, f1, f0
	  stfs      f4, 0x10(r1)
	  stfs      f2, 0xC(r1)
	  stfs      f0, 0x8(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x2EC(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  addi      r4, r1, 0x8
	  bl        -0x1A0710
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802A4278
 * Size:	000008
 */
void Game::Hanachirashi::Obj::getDownSmokeScale()
{
	/*
	.loc_0x0:
	  lfs       f1, -0x2520(r2)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802A4280
 * Size:	000078
 */
void Game::Hanachirashi::Obj::effectDrawOn()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r3, 0x318(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x31C(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x320(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x324(r31)
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
 * Address:	802A42F8
 * Size:	000078
 */
void Game::Hanachirashi::Obj::effectDrawOff()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r3, 0x318(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x31C(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x320(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x324(r31)
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
 * Address:	802A4370
 * Size:	000004
 */
void Game::Hanachirashi::Obj::inWaterCallback(Game::WaterBox*)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802A4374
 * Size:	000004
 */
void Game::Hanachirashi::Obj::outWaterCallback()
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802A4378
 * Size:	000004
 */
void Game::Hanachirashi::Obj::throwupItemInDeathProcedure()
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802A437C
 * Size:	000008
 */
void Game::Hanachirashi::Obj::getEnemyTypeID()
{
	/*
	.loc_0x0:
	  li        r3, 0x37
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802A4384
 * Size:	000014
 */
void Game::EnemyBase::@812 @12 @viewOnPelletKilled()
{
	/*
	.loc_0x0:
	  li        r11, 0xC
	  lwzx      r11, r3, r11
	  add       r3, r3, r11
	  subi      r3, r3, 0x32C
	  b         -0x19DA78
	*/
}

/*
 * --INFO--
 * Address:	802A4398
 * Size:	000014
 */
void Game::EnemyBase::@812 @12 @viewStartCarryMotion()
{
	/*
	.loc_0x0:
	  li        r11, 0xC
	  lwzx      r11, r3, r11
	  add       r3, r3, r11
	  subi      r3, r3, 0x32C
	  b         -0x19DD00
	*/
}

/*
 * --INFO--
 * Address:	802A43AC
 * Size:	000014
 */
void Game::EnemyBase::@812 @12 @viewStartPreCarryMotion()
{
	/*
	.loc_0x0:
	  li        r11, 0xC
	  lwzx      r11, r3, r11
	  add       r3, r3, r11
	  subi      r3, r3, 0x32C
	  b         -0x19DCF4
	*/
}

/*
 * --INFO--
 * Address:	802A43C0
 * Size:	000014
 */
void Game::EnemyBase::@812 @12 @view_finish_carrymotion()
{
	/*
	.loc_0x0:
	  li        r11, 0xC
	  lwzx      r11, r3, r11
	  add       r3, r3, r11
	  subi      r3, r3, 0x32C
	  b         -0x19D958
	*/
}

/*
 * --INFO--
 * Address:	802A43D4
 * Size:	000014
 */
void Game::EnemyBase::@812 @12 @view_start_carrymotion()
{
	/*
	.loc_0x0:
	  li        r11, 0xC
	  lwzx      r11, r3, r11
	  add       r3, r3, r11
	  subi      r3, r3, 0x32C
	  b         -0x19D998
	*/
}

/*
 * --INFO--
 * Address:	802A43E8
 * Size:	000014
 */
void Game::EnemyBase::@812 @12 @viewGetShape()
{
	/*
	.loc_0x0:
	  li        r11, 0xC
	  lwzx      r11, r3, r11
	  add       r3, r3, r11
	  subi      r3, r3, 0x32C
	  b         -0x19DD58
	*/
}
