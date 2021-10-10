

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
 * Address:	8020F280
 * Size:	000038
 */
void Game::ItemWeed::Weed::__ct(void)
{
	/*
	.loc_0x0:
	  lis       r5, 0x804C
	  lis       r4, 0x804C
	  subi      r0, r5, 0x59C
	  li        r5, 0
	  stw       r0, 0xC(r3)
	  addi      r0, r4, 0x3FC
	  lfs       f0, -0x4468(r2)
	  stb       r5, 0x40(r3)
	  stw       r0, 0xC(r3)
	  stfs      f0, 0x0(r3)
	  stfs      f0, 0x4(r3)
	  stfs      f0, 0x8(r3)
	  stw       r5, 0x50(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000038
 */
void init__Q34Game8ItemWeed4WeedFPQ34Game8ItemWeed7WeedMgrR10Vector3<float>(
    void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8020F2B8
 * Size:	000008
 */
void Game::ItemWeed::Weed::damaged((float))
{
	/*
	.loc_0x0:
	  li        r3, 0x1
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000044
 */
void setPosition__Q34Game8ItemWeed4WeedFR10Vector3<float>(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8020F2C0
 * Size:	0000AC
 */
void Game::ItemWeed::Weed::makeMatrix(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stw       r31, 0x3C(r1)
	  mr        r31, r3
	  bl        -0x145D34
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x34(r1)
	  addi      r3, r31, 0x10
	  lfs       f1, -0x4468(r2)
	  addi      r4, r1, 0x14
	  stw       r0, 0x30(r1)
	  addi      r5, r1, 0x20
	  lfd       f3, -0x4458(r2)
	  addi      r6, r1, 0x8
	  lfd       f0, 0x30(r1)
	  lfs       f2, -0x4460(r2)
	  fsubs     f3, f0, f3
	  lfs       f0, -0x445C(r2)
	  stfs      f1, 0x20(r1)
	  fdivs     f2, f3, f2
	  stfs      f1, 0x28(r1)
	  fmuls     f0, f0, f2
	  stfs      f0, 0x24(r1)
	  lfs       f0, 0x44(r31)
	  stfs      f0, 0x14(r1)
	  lfs       f0, 0x48(r31)
	  stfs      f0, 0x18(r1)
	  lfs       f0, 0x4C(r31)
	  stfs      f0, 0x1C(r1)
	  lfs       f0, 0x0(r31)
	  stfs      f0, 0x8(r1)
	  lfs       f0, 0x4(r31)
	  stfs      f0, 0xC(r1)
	  lfs       f0, 0x8(r31)
	  stfs      f0, 0x10(r1)
	  bl        0x218F84
	  lwz       r0, 0x44(r1)
	  lwz       r31, 0x3C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000004
 */
void Game::ItemWeed::Weed::update(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000E8
 */
void Game::ItemWeed::WeedMgr::__ct((int))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8020F36C
 * Size:	000100
 */
void __dt__Q24Game32TFlockMgr<Game::ItemWeed::Weed> Fv(void)
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
	  beq-      .loc_0xE4
	  lis       r3, 0x804C
	  addic.    r0, r30, 0x3C
	  addi      r3, r3, 0x360
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x30
	  stw       r0, 0x20(r30)
	  beq-      .loc_0xA0
	  lis       r3, 0x804C
	  addic.    r0, r30, 0x3C
	  addi      r3, r3, 0x2D4
	  stw       r3, 0x3C(r30)
	  addi      r0, r3, 0x2C
	  stw       r0, 0x58(r30)
	  beq-      .loc_0xA0
	  lis       r3, 0x804C
	  addic.    r0, r30, 0x3C
	  addi      r3, r3, 0x258
	  stw       r3, 0x3C(r30)
	  addi      r0, r3, 0x2C
	  stw       r0, 0x58(r30)
	  beq-      .loc_0xA0
	  lis       r3, 0x804C
	  addic.    r0, r30, 0x3C
	  addi      r0, r3, 0x3D0
	  stw       r0, 0x3C(r30)
	  beq-      .loc_0xA0
	  lis       r4, 0x804B
	  addi      r3, r30, 0x3C
	  subi      r0, r4, 0x5324
	  li        r4, 0
	  stw       r0, 0x3C(r30)
	  bl        0x202180

	.loc_0xA0:
	  addic.    r0, r30, 0x20
	  beq-      .loc_0xD4
	  lis       r3, 0x804C
	  addic.    r0, r30, 0x20
	  addi      r0, r3, 0x3D0
	  stw       r0, 0x20(r30)
	  beq-      .loc_0xD4
	  lis       r4, 0x804B
	  addi      r3, r30, 0x20
	  subi      r0, r4, 0x5324
	  li        r4, 0
	  stw       r0, 0x20(r30)
	  bl        0x20214C

	.loc_0xD4:
	  extsh.    r0, r31
	  ble-      .loc_0xE4
	  mr        r3, r30
	  bl        -0x1EB398

	.loc_0xE4:
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
 * Address:	8020F46C
 * Size:	0000A0
 */
void MonoObjectMgr<Game::ItemWeed::Weed>::~MonoObjectMgr()
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
	  beq-      .loc_0x84
	  lis       r4, 0x804C
	  addi      r4, r4, 0x2D4
	  stw       r4, 0x0(r30)
	  addi      r0, r4, 0x2C
	  stw       r0, 0x1C(r30)
	  beq-      .loc_0x74
	  lis       r4, 0x804C
	  addi      r4, r4, 0x258
	  stw       r4, 0x0(r30)
	  addi      r0, r4, 0x2C
	  stw       r0, 0x1C(r30)
	  beq-      .loc_0x74
	  lis       r4, 0x804C
	  addi      r0, r4, 0x3D0
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x74
	  lis       r5, 0x804B
	  li        r4, 0
	  subi      r0, r5, 0x5324
	  stw       r0, 0x0(r30)
	  bl        0x2020AC

	.loc_0x74:
	  extsh.    r0, r31
	  ble-      .loc_0x84
	  mr        r3, r30
	  bl        -0x1EB438

	.loc_0x84:
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
 * Address:	8020F50C
 * Size:	000070
 */
void Container<Game::ItemWeed::Weed>::~Container()
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
	  addi      r0, r4, 0x3D0
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x44
	  lis       r5, 0x804B
	  li        r4, 0
	  subi      r0, r5, 0x5324
	  stw       r0, 0x0(r30)
	  bl        0x20203C

	.loc_0x44:
	  extsh.    r0, r31
	  ble-      .loc_0x54
	  mr        r3, r30
	  bl        -0x1EB4A8

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
 * Address:	........
 * Size:	00005C
 */
void Game::ItemWeed::WeedMgr::init((Sys::Sphere&, Game::ItemWeed::cWeedType))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00022C
 */
void Game::ItemWeed::WeedMgr::createWeeds((Game::ItemWeed::cWeedType))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8020F57C
 * Size:	000008
 */
void getMaxObjects__Q24Game32TFlockMgr<Game::ItemWeed::Weed> Fv(void)
{
	/*
	.loc_0x0:
	  lwz       r3, 0x60(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8020F584
 * Size:	000004
 */
void Game::ItemWeed::WeedMgr::do_update_boundSphere(void)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8020F588
 * Size:	000018
 */
void Game::ItemWeed::WeedMgr::do_update(void)
{
	/*
	.loc_0x0:
	  lbz       r0, 0x1C(r3)
	  cmplwi    r0, 0
	  bnelr-
	  lbz       r0, 0x1D(r3)
	  cmplwi    r0, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8020F5A0
 * Size:	000084
 */
void Game::ItemWeed::FSM::init((Game::ItemWeed::Item*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r4, 0x1
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        0x1580
	  li        r3, 0x10
	  bl        -0x1EB71C
	  mr.       r4, r3
	  beq-      .loc_0x68
	  lis       r3, 0x804C
	  lis       r6, 0x804C
	  addi      r0, r3, 0x1B0
	  lis       r5, 0x804C
	  stw       r0, 0x0(r4)
	  li        r7, 0
	  lis       r3, 0x804C
	  addi      r6, r6, 0x17C
	  stw       r7, 0x4(r4)
	  addi      r5, r5, 0x148
	  subi      r0, r3, 0x43C
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0x0(r4)
	  stw       r0, 0x0(r4)

	.loc_0x68:
	  mr        r3, r31
	  bl        0x277C
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00013C
 */
void Game::ItemWeed::Item::__ct(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8020F624
 * Size:	00015C
 */
void Game::ItemWeed::Item::onInit((Game::CreatureInitArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  li        r5, 0
	  li        r6, 0
	  stw       r0, 0x24(r1)
	  stmw      r27, 0xC(r1)
	  mr        r29, r3
	  mr        r31, r4
	  mr        r4, r29
	  lwz       r3, 0x1D8(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r29
	  li        r4, 0x1
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0xAC(r12)
	  mtctr     r12
	  bctrl
	  cmplwi    r31, 0
	  bne-      .loc_0x74
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  addi      r3, r3, 0x1FD8
	  li        r4, 0xC2
	  addi      r5, r5, 0x1FE8
	  crclr     6, 0x6
	  bl        -0x1E5054

	.loc_0x74:
	  lwz       r30, 0x4(r31)
	  li        r3, 0x6C
	  lwz       r0, 0x8(r31)
	  stw       r0, 0x1EC(r29)
	  bl        -0x1EB804
	  mr.       r31, r3
	  beq-      .loc_0x12C
	  lis       r3, 0x804C
	  mr        r27, r31
	  subi      r0, r3, 0x494
	  li        r5, 0x1
	  stw       r0, 0x0(r31)
	  addi      r28, r27, 0x20
	  li        r4, -0x1
	  li        r0, 0
	  stb       r5, 0x1D(r31)
	  mr        r3, r28
	  stb       r5, 0x1C(r31)
	  stw       r4, 0x4(r31)
	  stw       r0, 0x8(r31)
	  bl        0x201CA8
	  lis       r3, 0x804B
	  lis       r4, 0x804C
	  subi      r0, r3, 0x5324
	  lis       r3, 0x804C
	  stw       r0, 0x0(r28)
	  addi      r0, r4, 0x3D0
	  addi      r4, r3, 0x360
	  li        r5, 0
	  stw       r0, 0x0(r28)
	  addi      r0, r4, 0x30
	  addi      r3, r27, 0x3C
	  stb       r5, 0x18(r28)
	  stw       r4, 0x0(r27)
	  stw       r0, 0x20(r27)
	  bl        0x252C
	  lis       r3, 0x804C
	  mr        r4, r30
	  addi      r5, r3, 0x1E8
	  addi      r3, r31, 0x3C
	  stw       r5, 0x0(r31)
	  addi      r0, r5, 0x30
	  stw       r0, 0x20(r31)
	  bl        0x2384
	  li        r0, 0x5
	  stw       r0, 0x4(r31)

	.loc_0x12C:
	  stw       r31, 0x1E8(r29)
	  mr        r3, r29
	  li        r4, 0
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0xB4(r12)
	  mtctr     r12
	  bctrl
	  lmw       r27, 0xC(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8020F780
 * Size:	000034
 */
void start__Q24Game35StateMachine<Game::ItemWeed::Item>
FPQ34Game8ItemWeed4ItemiPQ24Game8StateArg(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  li        r0, 0
	  stw       r0, 0x1DC(r4)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
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
 * Address:	8020F7B4
 * Size:	000268
 */
void Game::ItemWeed::Item::onSetPosition(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  mflr      r0
	  stw       r0, 0x54(r1)
	  stfd      f31, 0x40(r1)
	  psq_st    f31,0x48(r1),0,0
	  stw       r31, 0x3C(r1)
	  stw       r30, 0x38(r1)
	  stw       r29, 0x34(r1)
	  stw       r28, 0x30(r1)
	  mr        r28, r3
	  addi      r3, r28, 0x138
	  addi      r4, r28, 0x19C
	  bl        0x21905C
	  lfs       f3, 0x1D0(r28)
	  li        r29, 0
	  lfs       f1, 0x1A0(r28)
	  lfs       f2, 0x1A4(r28)
	  lwz       r30, 0x1EC(r28)
	  lwz       r31, 0x1E8(r28)
	  lfs       f0, 0x19C(r28)
	  stfs      f0, 0xC(r31)
	  stfs      f1, 0x10(r31)
	  stfs      f2, 0x14(r31)
	  stfs      f3, 0x18(r31)
	  b         .loc_0x218

	.loc_0x64:
	  addi      r3, r31, 0x3C
	  lwz       r12, 0x3C(r31)
	  lwz       r12, 0x7C(r12)
	  mtctr     r12
	  bctrl
	  mr.       r28, r3
	  beq-      .loc_0x214
	  cmpwi     r30, 0x1
	  bne-      .loc_0x94
	  li        r0, 0
	  stb       r0, 0x40(r28)
	  b         .loc_0xD8

	.loc_0x94:
	  bl        -0x1462A8
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0xC(r1)
	  lfd       f3, -0x4458(r2)
	  stw       r0, 0x8(r1)
	  lfs       f1, -0x4460(r2)
	  lfd       f2, 0x8(r1)
	  lfs       f0, -0x444C(r2)
	  fsubs     f2, f2, f3
	  fdivs     f1, f2, f1
	  fmuls     f0, f0, f1
	  fctiwz    f0, f0
	  stfd      f0, 0x10(r1)
	  lwz       r3, 0x14(r1)
	  addi      r0, r3, 0x1
	  stb       r0, 0x40(r28)

	.loc_0xD8:
	  bl        -0x1462EC
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x14(r1)
	  lfd       f3, -0x4458(r2)
	  stw       r0, 0x10(r1)
	  lfs       f1, -0x4460(r2)
	  lfd       f2, 0x10(r1)
	  lfs       f0, 0x18(r31)
	  fsubs     f2, f2, f3
	  fdivs     f1, f2, f1
	  fmuls     f31, f0, f1
	  bl        -0x14631C
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0xC(r1)
	  lfd       f3, -0x4458(r2)
	  stw       r0, 0x8(r1)
	  lfs       f2, -0x4460(r2)
	  lfd       f0, 0x8(r1)
	  lfs       f1, -0x445C(r2)
	  fsubs     f3, f0, f3
	  lfs       f0, -0x4468(r2)
	  fdivs     f2, f3, f2
	  fmuls     f3, f1, f2
	  fmr       f1, f3
	  fcmpo     cr0, f3, f0
	  bge-      .loc_0x14C
	  fneg      f1, f3

	.loc_0x14C:
	  lfs       f2, -0x4448(r2)
	  lis       r3, 0x8050
	  lfs       f0, -0x4468(r2)
	  addi      r4, r3, 0x71A0
	  fmuls     f1, f1, f2
	  fcmpo     cr0, f3, f0
	  fctiwz    f0, f1
	  stfd      f0, 0x18(r1)
	  lwz       r0, 0x1C(r1)
	  rlwinm    r0,r0,3,18,28
	  add       r3, r4, r0
	  lfs       f0, 0x4(r3)
	  fmuls     f4, f31, f0
	  bge-      .loc_0x1A8
	  lfs       f0, -0x4444(r2)
	  fmuls     f0, f3, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x20(r1)
	  lwz       r0, 0x24(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r4, r0
	  fneg      f1, f0
	  b         .loc_0x1C0

	.loc_0x1A8:
	  fmuls     f0, f3, f2
	  fctiwz    f0, f0
	  stfd      f0, 0x28(r1)
	  lwz       r0, 0x2C(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f1, r4, r0

	.loc_0x1C0:
	  lfs       f0, 0x14(r31)
	  fmuls     f3, f31, f1
	  lfs       f2, 0xC(r31)
	  mr        r3, r28
	  lfs       f1, 0x10(r31)
	  fadds     f4, f4, f0
	  lfs       f0, -0x4464(r2)
	  stw       r31, 0x50(r28)
	  fadds     f3, f3, f2
	  lfs       f2, -0x4468(r2)
	  stfs      f0, 0x44(r28)
	  fadds     f2, f2, f1
	  stfs      f0, 0x48(r28)
	  stfs      f0, 0x4C(r28)
	  stfs      f3, 0x0(r28)
	  stfs      f2, 0x4(r28)
	  stfs      f4, 0x8(r28)
	  lwz       r12, 0xC(r28)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl

	.loc_0x214:
	  addi      r29, r29, 0x1

	.loc_0x218:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  cmpw      r29, r3
	  blt+      .loc_0x64
	  lfs       f1, -0x4450(r2)
	  mr        r3, r31
	  bl        -0xBC4
	  psq_l     f31,0x48(r1),0,0
	  lwz       r0, 0x54(r1)
	  lfd       f31, 0x40(r1)
	  lwz       r31, 0x3C(r1)
	  lwz       r30, 0x38(r1)
	  lwz       r29, 0x34(r1)
	  lwz       r28, 0x30(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8020FA1C
 * Size:	00003C
 */
void Game::ItemWeed::Item::ignoreAtari((Game::Creature*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r3, r4
	  stw       r0, 0x14(r1)
	  lwz       r12, 0x0(r4)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  rlwinm    r0,r3,0,24,31
	  cntlzw    r0, r0
	  rlwinm    r3,r0,27,5,31
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8020FA58
 * Size:	000078
 */
void Game::ItemWeed::Item::updateBoundSphere(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r4, 0x114(r3)
	  lfs       f0, 0x1D0(r3)
	  lwz       r4, 0x0(r4)
	  stfs      f0, 0x1C(r4)
	  lfs       f0, 0x19C(r3)
	  stfs      f0, 0x1C4(r3)
	  lfs       f0, 0x1A0(r3)
	  stfs      f0, 0x1C8(r3)
	  lfs       f0, 0x1A4(r3)
	  stfs      f0, 0x1CC(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xB0(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x68
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  addi      r3, r3, 0x1FD8
	  li        r4, 0xE1
	  addi      r5, r5, 0x1FF4
	  crclr     6, 0x6
	  bl        -0x1E547C

	.loc_0x68:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8020FAD0
 * Size:	0002E0
 */
void Game::ItemWeed::Item::interactFlockAttack((Game::InteractFlockAttack&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x70(r1)
	  mflr      r0
	  stw       r0, 0x74(r1)
	  stmw      r27, 0x5C(r1)
	  mr        r29, r4
	  mr        r28, r3
	  li        r30, 0
	  lwz       r27, 0x8(r4)
	  lwz       r31, 0x1E8(r3)
	  cmpwi     r27, 0
	  blt-      .loc_0x4C
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  cmpw      r27, r3
	  bge-      .loc_0x4C
	  li        r30, 0x1

	.loc_0x4C:
	  rlwinm.   r0,r30,0,24,31
	  bne-      .loc_0x70
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  addi      r3, r3, 0x2000
	  li        r4, 0xAB
	  addi      r5, r5, 0x1FE8
	  crclr     6, 0x6
	  bl        -0x1E54FC

	.loc_0x70:
	  mr        r3, r31
	  mr        r4, r27
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lfs       f1, 0x4(r3)
	  lfs       f2, 0x8(r3)
	  lfs       f0, 0x0(r3)
	  stfs      f0, 0x28(r1)
	  stfs      f1, 0x2C(r1)
	  stfs      f2, 0x30(r1)
	  stfs      f0, 0x14(r29)
	  lfs       f0, 0x2C(r1)
	  stfs      f0, 0x18(r29)
	  lfs       f0, 0x30(r1)
	  stfs      f0, 0x1C(r29)
	  lwz       r3, 0x1E8(r28)
	  lwz       r4, 0x8(r29)
	  lfs       f1, 0xC(r29)
	  bl        -0xE80
	  mr        r31, r3
	  cmpwi     r31, 0x1
	  bne-      .loc_0x2A0
	  lwz       r3, 0x4(r29)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x100
	  lwz       r0, 0x1EC(r28)
	  cmpwi     r0, 0
	  bne-      .loc_0x100
	  addi      r3, r1, 0x28
	  bl        0x1A808C

	.loc_0x100:
	  bl        -0x146630
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x3C(r1)
	  lfd       f3, -0x4458(r2)
	  stw       r0, 0x38(r1)
	  lfs       f1, -0x4460(r2)
	  lfd       f2, 0x38(r1)
	  lfs       f0, -0x443C(r2)
	  fsubs     f2, f2, f3
	  fdivs     f1, f2, f1
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x2A0
	  lwz       r3, -0x6BB0(r13)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xA4(r12)
	  mtctr     r12
	  bctrl
	  mr.       r30, r3
	  beq-      .loc_0x2A0
	  lis       r4, 0x804B
	  li        r0, 0
	  subi      r5, r4, 0x5D0C
	  lis       r4, 0x804B
	  stw       r5, 0x8(r1)
	  subi      r5, r4, 0x5D18
	  addi      r4, r1, 0x8
	  stw       r5, 0x8(r1)
	  stb       r0, 0xC(r1)
	  stb       r0, 0xD(r1)
	  bl        -0xD4C80
	  lfs       f2, 0x2C(r1)
	  lfs       f0, -0x4438(r2)
	  lfs       f3, 0x28(r1)
	  lfs       f1, 0x30(r1)
	  fadds     f0, f2, f0
	  stfs      f2, 0x20(r1)
	  stfs      f3, 0x1C(r1)
	  stfs      f1, 0x24(r1)
	  stfs      f0, 0x20(r1)
	  bl        -0x1466D0
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x3C(r1)
	  lfd       f2, -0x4458(r2)
	  stw       r0, 0x38(r1)
	  lfs       f3, -0x4460(r2)
	  lfd       f0, 0x38(r1)
	  lfs       f1, -0x4430(r2)
	  fsubs     f4, f0, f2
	  lfs       f2, -0x4434(r2)
	  lfs       f0, -0x4468(r2)
	  fdivs     f3, f4, f3
	  fmuls     f1, f1, f3
	  fmuls     f5, f2, f1
	  fmr       f1, f5
	  fcmpo     cr0, f5, f0
	  bge-      .loc_0x1EC
	  fneg      f1, f5

	.loc_0x1EC:
	  lfs       f2, -0x4448(r2)
	  lis       r3, 0x8050
	  lfs       f0, -0x4468(r2)
	  addi      r4, r3, 0x71A0
	  fmuls     f1, f1, f2
	  lfs       f3, -0x442C(r2)
	  fcmpo     cr0, f5, f0
	  fctiwz    f0, f1
	  stfd      f0, 0x40(r1)
	  lwz       r0, 0x44(r1)
	  rlwinm    r0,r0,3,18,28
	  add       r3, r4, r0
	  lfs       f0, 0x4(r3)
	  fmuls     f4, f3, f0
	  bge-      .loc_0x24C
	  lfs       f0, -0x4444(r2)
	  fmuls     f0, f5, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x48(r1)
	  lwz       r0, 0x4C(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r4, r0
	  fneg      f0, f0
	  b         .loc_0x264

	.loc_0x24C:
	  fmuls     f0, f5, f2
	  fctiwz    f0, f0
	  stfd      f0, 0x50(r1)
	  lwz       r0, 0x54(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r4, r0

	.loc_0x264:
	  fmuls     f1, f3, f0
	  lfs       f0, -0x4428(r2)
	  stfs      f4, 0x18(r1)
	  mr        r3, r30
	  addi      r4, r1, 0x1C
	  li        r5, 0
	  stfs      f1, 0x10(r1)
	  stfs      f0, 0x14(r1)
	  bl        -0xD4BAC
	  mr        r3, r30
	  addi      r4, r1, 0x10
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x68(r12)
	  mtctr     r12
	  bctrl

	.loc_0x2A0:
	  neg       r0, r31
	  or        r0, r0, r31
	  rlwinm    r0,r0,1,31,31
	  stb       r0, 0x10(r29)
	  lwz       r3, 0x1E8(r28)
	  lwz       r4, 0x8(r29)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lmw       r27, 0x5C(r1)
	  li        r3, 0x1
	  lwz       r0, 0x74(r1)
	  mtlr      r0
	  addi      r1, r1, 0x70
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8020FDB0
 * Size:	00002C
 */
void getFlock__Q24Game32TFlockMgr<Game::ItemWeed::Weed> Fi(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwzu      r12, 0x3C(r3)
	  lwz       r12, 0x24(r12)
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
 * Address:	8020FDDC
 * Size:	000010
 */
void MonoObjectMgr<Game::ItemWeed::Weed>::getAt(int)
{
	/*
	.loc_0x0:
	  mulli     r0, r4, 0x54
	  lwz       r3, 0x28(r3)
	  add       r3, r3, r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8020FDEC
 * Size:	000084
 */
void Game::ItemWeed::Item::doAI(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  mr        r4, r31
	  lwz       r3, 0x1D8(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  bl        -0x43810
	  lwz       r3, 0x1E8(r31)
	  bl        -0x1348
	  lwz       r3, 0x1E8(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  cmpwi     r3, 0
	  bne-      .loc_0x70
	  mr        r3, r31
	  li        r4, 0
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xAC(r12)
	  mtctr     r12
	  bctrl

	.loc_0x70:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8020FE70
 * Size:	000008
 */
void getNumObjects__Q24Game32TFlockMgr<Game::ItemWeed::Weed> Fv(void)
{
	/*
	.loc_0x0:
	  lwz       r3, 0x5C(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8020FE78
 * Size:	00003C
 */
void Game::ItemWeed::Item::doSimpleDraw((Viewport*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x1E8(r3)
	  lwz       r6, -0x6AA0(r13)
	  lwz       r12, 0x0(r3)
	  lwz       r5, 0x1C(r6)
	  lwz       r12, 0x24(r12)
	  lwz       r6, 0x18(r6)
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
 * Address:	8020FEB4
 * Size:	00013C
 */
void Game::ItemWeed::Mgr::__ct(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  extsh.    r0, r4
	  lis       r4, 0x8048
	  stw       r31, 0x1C(r1)
	  addi      r31, r4, 0x1FC0
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  beq-      .loc_0x38
	  addi      r0, r28, 0x88
	  stw       r0, 0x4(r28)

	.loc_0x38:
	  mr        r3, r28
	  li        r4, 0
	  bl        -0x42AD4
	  lis       r3, 0x804C
	  addi      r5, r31, 0x4C
	  subi      r3, r3, 0x408
	  addi      r0, r31, 0x58
	  stw       r3, 0x0(r28)
	  addi      r6, r3, 0x74
	  mr        r3, r28
	  li        r4, 0x4
	  stw       r6, 0x30(r28)
	  stw       r5, 0x8(r28)
	  stw       r0, 0x28(r28)
	  bl        -0x43158
	  mr        r3, r28
	  subi      r4, r2, 0x4424
	  bl        -0x4305C
	  mr        r3, r28
	  addi      r4, r31, 0x70
	  li        r5, 0
	  lis       r6, 0x2
	  bl        -0x42FF4
	  mr        r3, r28
	  addi      r4, r31, 0x7C
	  li        r5, 0x1
	  lis       r6, 0x2
	  bl        -0x43008
	  mr        r3, r28
	  addi      r4, r31, 0x88
	  li        r5, 0x2
	  lis       r6, 0x2
	  bl        -0x4301C
	  mr        r3, r28
	  addi      r4, r31, 0x94
	  li        r5, 0x3
	  lis       r6, 0x2
	  bl        -0x43030
	  lis       r3, 0x8048
	  li        r30, 0
	  subi      r31, r3, 0x7794

	.loc_0xDC:
	  mr        r3, r28
	  mr        r4, r30
	  bl        -0x42E48
	  lis       r4, 0x4
	  mr        r29, r3
	  bl        -0x18C6CC
	  mr        r3, r29
	  mr        r5, r31
	  li        r4, 0
	  bl        -0x18C504
	  mr        r3, r29
	  bl        -0x18C58C
	  addi      r30, r30, 0x1
	  cmpwi     r30, 0x4
	  blt+      .loc_0xDC
	  lwz       r0, 0x24(r1)
	  mr        r3, r28
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
 * Address:	8020FFF0
 * Size:	000200
 */
void Game::ItemWeed::Mgr::doSimpleDraw((Viewport*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  cmplwi    r3, 0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r4
	  beq-      .loc_0x20
	  addi      r3, r3, 0x30

	.loc_0x20:
	  li        r0, 0
	  lis       r4, 0x804B
	  addi      r4, r4, 0x560
	  stw       r0, 0x14(r1)
	  cmplwi    r0, 0
	  stw       r4, 0x8(r1)
	  stw       r0, 0xC(r1)
	  stw       r3, 0x10(r1)
	  bne-      .loc_0x5C
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1CC

	.loc_0x5C:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0xC8

	.loc_0x74:
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
	  bne-      .loc_0x1CC
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0xC8:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x74
	  b         .loc_0x1CC

	.loc_0xE8:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  mr        r4, r31
	  lwz       r12, 0x224(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x13C
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1CC

	.loc_0x13C:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1B0

	.loc_0x15C:
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
	  bne-      .loc_0x1CC
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0x1B0:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x15C

	.loc_0x1CC:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0xC(r1)
	  cmplw     r4, r3
	  bne+      .loc_0xE8
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802101F0
 * Size:	000004
 */
void Game::ItemWeed::Mgr::onLoadResources(void)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000160
 */
void Game::ItemWeed::Mgr::birth(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	802101F4
 * Size:	000008
 */
void Game::ItemWeed::Mgr::getCaveName((int))
{
	/*
	.loc_0x0:
	  subi      r3, r2, 0x441C
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802101FC
 * Size:	00004C
 */
void Game::ItemWeed::Mgr::getCaveID((char*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  subi      r3, r2, 0x441C
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  bl        -0x145904
	  mr        r5, r3
	  mr        r4, r31
	  subi      r3, r2, 0x441C
	  bl        -0x145BA4
	  neg       r0, r3
	  or        r0, r0, r3
	  srawi     r3, r0, 0x1F
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80210248
 * Size:	000004
 */
void Game::ItemWeed::WaitState::init((Game::ItemWeed::Item*, Game::StateArg*))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8021024C
 * Size:	000004
 */
void Game::ItemWeed::WaitState::exec((Game::ItemWeed::Item*))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80210250
 * Size:	000004
 */
void Game::ItemWeed::WaitState::cleanup((Game::ItemWeed::Item*))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80210254
 * Size:	000054
 */
void Game::ItemWeed::Mgr::generatorNewItemParm(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r3, 0xC
	  stw       r0, 0x14(r1)
	  bl        -0x1EC3C0
	  cmplwi    r3, 0
	  beq-      .loc_0x44
	  lis       r4, 0x804B
	  lis       r5, 0x804C
	  addi      r0, r4, 0x2624
	  li        r4, 0x32
	  stw       r0, 0x0(r3)
	  subi      r5, r5, 0x448
	  li        r0, 0
	  stw       r5, 0x0(r3)
	  stw       r4, 0x8(r3)
	  sth       r0, 0x4(r3)

	.loc_0x44:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802102A8
 * Size:	0000B0
 */
void Game::ItemWeed::Mgr::generatorWrite((Stream&, Game::GenItemParm*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r3, 0x8048
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  addi      r31, r3, 0x1FC0
	  stw       r30, 0x18(r1)
	  mr.       r30, r5
	  stw       r29, 0x14(r1)
	  mr        r29, r4
	  bne-      .loc_0x40
	  addi      r3, r31, 0x18
	  addi      r5, r31, 0x28
	  li        r4, 0x1CC
	  crclr     6, 0x6
	  bl        -0x1E5CA4

	.loc_0x40:
	  lwz       r4, 0x414(r29)
	  mr        r3, r29
	  bl        0x204144
	  lwz       r0, 0x8(r30)
	  mr        r3, r29
	  extsh     r4, r0
	  bl        0x205430
	  mr        r3, r29
	  addi      r4, r31, 0xA0
	  crclr     6, 0x6
	  bl        0x203ECC
	  lwz       r4, 0x414(r29)
	  mr        r3, r29
	  bl        0x204118
	  lha       r4, 0x4(r30)
	  mr        r3, r29
	  bl        0x205408
	  mr        r3, r29
	  addi      r4, r31, 0xB0
	  crclr     6, 0x6
	  bl        0x203EA4
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
 * Address:	80210358
 * Size:	00008C
 */
void Game::ItemWeed::Mgr::generatorRead((Stream&, Game::GenItemParm*,
                                         unsigned long))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r6
	  stw       r30, 0x18(r1)
	  mr.       r30, r5
	  stw       r29, 0x14(r1)
	  mr        r29, r4
	  bne-      .loc_0x44
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  addi      r3, r3, 0x1FD8
	  li        r4, 0x1DA
	  addi      r5, r5, 0x1FE8
	  crclr     6, 0x6
	  bl        -0x1E5D58

	.loc_0x44:
	  mr        r3, r29
	  bl        0x2043C4
	  lis       r4, 0x3030
	  extsh     r3, r3
	  addi      r0, r4, 0x3031
	  stw       r3, 0x8(r30)
	  cmplw     r31, r0
	  blt-      .loc_0x70
	  mr        r3, r29
	  bl        0x2043A4
	  sth       r3, 0x4(r30)

	.loc_0x70:
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
 * Address:	802103E4
 * Size:	0001DC
 */
void generatorBirth__Q34Game8ItemWeed3MgrFR10Vector3<float> R10Vector3<float>
PQ24Game11GenItemParm(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stw       r31, 0x2C(r1)
	  stw       r30, 0x28(r1)
	  mr.       r30, r6
	  stw       r29, 0x24(r1)
	  mr        r29, r4
	  stw       r28, 0x20(r1)
	  mr        r28, r3
	  bne-      .loc_0x48
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  addi      r3, r3, 0x1FD8
	  li        r4, 0x1E4
	  addi      r5, r5, 0x1FE8
	  crclr     6, 0x6
	  bl        -0x1E5DE8

	.loc_0x48:
	  li        r3, 0x1F0
	  bl        -0x1EC58C
	  mr.       r31, r3
	  beq-      .loc_0x168
	  li        r4, 0x412
	  bl        -0x44458
	  lis       r3, 0x804C
	  li        r0, 0
	  subi      r4, r3, 0xDC
	  li        r3, 0x1C
	  stw       r4, 0x0(r31)
	  addi      r4, r4, 0x1B0
	  stw       r4, 0x178(r31)
	  stw       r0, 0x1D8(r31)
	  stw       r0, 0x1DC(r31)
	  bl        -0x1EC5C4
	  cmplwi    r3, 0
	  beq-      .loc_0xBC
	  lis       r4, 0x804C
	  lis       r5, 0x804C
	  subi      r0, r4, 0xF4
	  lis       r4, 0x804C
	  stw       r0, 0x0(r3)
	  li        r6, -0x1
	  subi      r5, r5, 0x10C
	  addi      r0, r4, 0x1D0
	  stw       r6, 0x18(r3)
	  stw       r5, 0x0(r3)
	  stw       r0, 0x0(r3)

	.loc_0xBC:
	  stw       r3, 0x1D8(r31)
	  mr        r4, r31
	  lwz       r3, 0x1D8(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lis       r3, 0x804C
	  lis       r4, 0x804C
	  subi      r5, r3, 0x344
	  lis       r3, 0x804C
	  stw       r5, 0x0(r31)
	  addi      r5, r5, 0x1B0
	  subi      r4, r4, 0x40DC
	  subi      r0, r3, 0x11C
	  stw       r5, 0x178(r31)
	  li        r3, 0x8
	  stw       r4, 0x1E0(r31)
	  stw       r0, 0x1E0(r31)
	  bl        -0x1EC648
	  mr.       r0, r3
	  beq-      .loc_0x11C
	  bl        -0xDC49C
	  mr        r0, r3

	.loc_0x11C:
	  stw       r0, 0x114(r31)
	  addi      r0, r31, 0x138
	  lfs       f0, -0x4440(r2)
	  addi      r4, r31, 0x1E0
	  addi      r6, r31, 0x1C4
	  li        r5, 0
	  stfs      f0, 0x1D0(r31)
	  li        r7, 0
	  stw       r0, 0x1E4(r31)
	  lwz       r3, 0x114(r31)
	  bl        -0xDC478
	  mr        r3, r31
	  li        r4, 0
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xB4(r12)
	  mtctr     r12
	  bctrl
	  li        r0, 0
	  stw       r0, 0x1EC(r31)

	.loc_0x168:
	  mr        r3, r28
	  mr        r4, r31
	  bl        -0x42D2C
	  lis       r3, 0x804B
	  lha       r6, 0x4(r30)
	  lwz       r5, 0x8(r30)
	  subi      r0, r3, 0x5D0C
	  lis       r4, 0x804C
	  mr        r3, r31
	  stw       r0, 0x8(r1)
	  subi      r0, r4, 0x454
	  addi      r4, r1, 0x8
	  stw       r0, 0x8(r1)
	  stw       r5, 0xC(r1)
	  stw       r6, 0x10(r1)
	  bl        -0xD55C0
	  mr        r3, r31
	  mr        r4, r29
	  li        r5, 0
	  bl        -0xD53F0
	  lwz       r0, 0x34(r1)
	  mr        r3, r31
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  lwz       r29, 0x24(r1)
	  lwz       r28, 0x20(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802105C0
 * Size:	00000C
 */
void Game::ItemWeed::InitArg::getName(void)
{
	/*
	.loc_0x0:
	  lis       r3, 0x8048
	  addi      r3, r3, 0x2080
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802105CC
 * Size:	000134
 */
void Game::ItemWeed::Mgr::__dt(void)
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
	  beq-      .loc_0x118
	  lis       r3, 0x804C
	  subi      r3, r3, 0x408
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x74
	  stw       r0, 0x30(r30)
	  beq-      .loc_0x108
	  lis       r3, 0x804B
	  addic.    r0, r30, 0x4C
	  addi      r3, r3, 0x7180
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x74
	  stw       r0, 0x30(r30)
	  beq-      .loc_0xD4
	  lis       r4, 0x804B
	  addic.    r3, r30, 0x6C
	  addi      r4, r4, 0x724C
	  stw       r4, 0x4C(r30)
	  addi      r0, r4, 0x2C
	  stw       r0, 0x68(r30)
	  beq-      .loc_0x84
	  lis       r4, 0x804B
	  addi      r0, r4, 0x723C
	  stw       r0, 0x6C(r30)
	  li        r4, 0
	  bl        0x200F3C

	.loc_0x84:
	  addic.    r0, r30, 0x4C
	  beq-      .loc_0xD4
	  lis       r3, 0x804B
	  addic.    r0, r30, 0x4C
	  addi      r3, r3, 0x72CC
	  stw       r3, 0x4C(r30)
	  addi      r0, r3, 0x2C
	  stw       r0, 0x68(r30)
	  beq-      .loc_0xD4
	  lis       r3, 0x804B
	  addic.    r0, r30, 0x4C
	  addi      r0, r3, 0x7348
	  stw       r0, 0x4C(r30)
	  beq-      .loc_0xD4
	  lis       r4, 0x804B
	  addi      r3, r30, 0x4C
	  subi      r0, r4, 0x5324
	  li        r4, 0
	  stw       r0, 0x4C(r30)
	  bl        0x200EEC

	.loc_0xD4:
	  addic.    r0, r30, 0x30
	  beq-      .loc_0x108
	  lis       r3, 0x804B
	  addic.    r0, r30, 0x30
	  addi      r0, r3, 0x7348
	  stw       r0, 0x30(r30)
	  beq-      .loc_0x108
	  lis       r4, 0x804B
	  addi      r3, r30, 0x30
	  subi      r0, r4, 0x5324
	  li        r4, 0
	  stw       r0, 0x30(r30)
	  bl        0x200EB8

	.loc_0x108:
	  extsh.    r0, r31
	  ble-      .loc_0x118
	  mr        r3, r30
	  bl        -0x1EC62C

	.loc_0x118:
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
 * Address:	80210700
 * Size:	000148
 */
void Game::ItemWeed::Mgr::doNew(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r3, 0x1F0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  bl        -0x1EC870
	  mr.       r31, r3
	  beq-      .loc_0x130
	  li        r4, 0x412
	  bl        -0x4473C
	  lis       r3, 0x804C
	  li        r0, 0
	  subi      r4, r3, 0xDC
	  li        r3, 0x1C
	  stw       r4, 0x0(r31)
	  addi      r4, r4, 0x1B0
	  stw       r4, 0x178(r31)
	  stw       r0, 0x1D8(r31)
	  stw       r0, 0x1DC(r31)
	  bl        -0x1EC8A8
	  cmplwi    r3, 0
	  beq-      .loc_0x84
	  lis       r4, 0x804C
	  lis       r5, 0x804C
	  subi      r0, r4, 0xF4
	  lis       r4, 0x804C
	  stw       r0, 0x0(r3)
	  li        r6, -0x1
	  subi      r5, r5, 0x10C
	  addi      r0, r4, 0x1D0
	  stw       r6, 0x18(r3)
	  stw       r5, 0x0(r3)
	  stw       r0, 0x0(r3)

	.loc_0x84:
	  stw       r3, 0x1D8(r31)
	  mr        r4, r31
	  lwz       r3, 0x1D8(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lis       r3, 0x804C
	  lis       r4, 0x804C
	  subi      r5, r3, 0x344
	  lis       r3, 0x804C
	  stw       r5, 0x0(r31)
	  addi      r5, r5, 0x1B0
	  subi      r4, r4, 0x40DC
	  subi      r0, r3, 0x11C
	  stw       r5, 0x178(r31)
	  li        r3, 0x8
	  stw       r4, 0x1E0(r31)
	  stw       r0, 0x1E0(r31)
	  bl        -0x1EC92C
	  mr.       r0, r3
	  beq-      .loc_0xE4
	  bl        -0xDC780
	  mr        r0, r3

	.loc_0xE4:
	  stw       r0, 0x114(r31)
	  addi      r0, r31, 0x138
	  lfs       f0, -0x4440(r2)
	  addi      r4, r31, 0x1E0
	  addi      r6, r31, 0x1C4
	  li        r5, 0
	  stfs      f0, 0x1D0(r31)
	  li        r7, 0
	  stw       r0, 0x1E4(r31)
	  lwz       r3, 0x114(r31)
	  bl        -0xDC75C
	  mr        r3, r31
	  li        r4, 0
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xB4(r12)
	  mtctr     r12
	  bctrl
	  li        r0, 0
	  stw       r0, 0x1EC(r31)

	.loc_0x130:
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
 * Address:	80210848
 * Size:	00000C
 */
void Game::ItemWeed::Mgr::generatorGetID(void)
{
	/*
	.loc_0x0:
	  lis       r3, 0x7765
	  addi      r3, r3, 0x6564
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80210854
 * Size:	00000C
 */
void Game::ItemWeed::Mgr::generatorLocalVersion(void)
{
	/*
	.loc_0x0:
	  lis       r3, 0x3030
	  addi      r3, r3, 0x3031
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80210860
 * Size:	000008
 */
void Game::ItemWeed::Item::getCreatureName(void)
{
	/*
	.loc_0x0:
	  subi      r3, r2, 0x4414
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80210868
 * Size:	000008
 */
void Game::ItemWeed::Item::getFlockMgr(void)
{
	/*
	.loc_0x0:
	  lwz       r3, 0x1E8(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80210870
 * Size:	000004
 */
void Game::ItemWeed::Item::makeTrMatrix(void)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80210874
 * Size:	000008
 */
void Game::ItemWeed::Item::DummyShape::getMatrix((int))
{
	/*
	.loc_0x0:
	  lwz       r3, 0x4(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8021087C
 * Size:	000034
 */
void doAI__Q24Game74FSMItem<Game::ItemWeed::Item, Game::ItemWeed::FSM,
                            Game::ItemWeed::State>
Fv(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r4, r3
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x1D8(r3)
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
 * Address:	802108B0
 * Size:	000118
 */
void Game::ItemWeed::WeedMgr::__dt(void)
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
	  beq-      .loc_0xFC
	  lis       r3, 0x804C
	  addi      r3, r3, 0x1E8
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x30
	  stw       r0, 0x20(r30)
	  beq-      .loc_0xEC
	  lis       r3, 0x804C
	  addic.    r0, r30, 0x3C
	  addi      r3, r3, 0x360
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x30
	  stw       r0, 0x20(r30)
	  beq-      .loc_0xB8
	  lis       r3, 0x804C
	  addic.    r0, r30, 0x3C
	  addi      r3, r3, 0x2D4
	  stw       r3, 0x3C(r30)
	  addi      r0, r3, 0x2C
	  stw       r0, 0x58(r30)
	  beq-      .loc_0xB8
	  lis       r3, 0x804C
	  addic.    r0, r30, 0x3C
	  addi      r3, r3, 0x258
	  stw       r3, 0x3C(r30)
	  addi      r0, r3, 0x2C
	  stw       r0, 0x58(r30)
	  beq-      .loc_0xB8
	  lis       r3, 0x804C
	  addic.    r0, r30, 0x3C
	  addi      r0, r3, 0x3D0
	  stw       r0, 0x3C(r30)
	  beq-      .loc_0xB8
	  lis       r4, 0x804B
	  addi      r3, r30, 0x3C
	  subi      r0, r4, 0x5324
	  li        r4, 0
	  stw       r0, 0x3C(r30)
	  bl        0x200C24

	.loc_0xB8:
	  addic.    r0, r30, 0x20
	  beq-      .loc_0xEC
	  lis       r3, 0x804C
	  addic.    r0, r30, 0x20
	  addi      r0, r3, 0x3D0
	  stw       r0, 0x20(r30)
	  beq-      .loc_0xEC
	  lis       r4, 0x804B
	  addi      r3, r30, 0x20
	  subi      r0, r4, 0x5324
	  li        r4, 0
	  stw       r0, 0x20(r30)
	  bl        0x200BF0

	.loc_0xEC:
	  extsh.    r0, r31
	  ble-      .loc_0xFC
	  mr        r3, r30
	  bl        -0x1EC8F4

	.loc_0xFC:
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
 * Address:	802109C8
 * Size:	000088
 */
void ObjectMgr<Game::ItemWeed::Weed>::~ObjectMgr()
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
	  beq-      .loc_0x6C
	  lis       r4, 0x804C
	  addi      r4, r4, 0x258
	  stw       r4, 0x0(r30)
	  addi      r0, r4, 0x2C
	  stw       r0, 0x1C(r30)
	  beq-      .loc_0x5C
	  lis       r4, 0x804C
	  addi      r0, r4, 0x3D0
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x5C
	  lis       r5, 0x804B
	  li        r4, 0
	  subi      r0, r5, 0x5324
	  stw       r0, 0x0(r30)
	  bl        0x200B68

	.loc_0x5C:
	  extsh.    r0, r31
	  ble-      .loc_0x6C
	  mr        r3, r30
	  bl        -0x1EC97C

	.loc_0x6C:
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
 * Address:	80210A50
 * Size:	000010
 */
void Game::ItemWeed::Weed::isWeed(void)
{
	/*
	.loc_0x0:
	  lbz       r0, 0x40(r3)
	  cntlzw    r0, r0
	  rlwinm    r3,r0,27,5,31
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80210A60
 * Size:	00002C
 */
void getNext__Q24Game32TFlockMgr<Game::ItemWeed::Weed> FPv(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwzu      r12, 0x3C(r3)
	  lwz       r12, 0x14(r12)
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
 * Address:	80210A8C
 * Size:	00002C
 */
void getStart__Q24Game32TFlockMgr<Game::ItemWeed::Weed> Fv(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwzu      r12, 0x3C(r3)
	  lwz       r12, 0x18(r12)
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
 * Address:	80210AB8
 * Size:	000024
 */
void killFlock__Q24Game32TFlockMgr<Game::ItemWeed::Weed> FPQ24Game6TFlock(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  addi      r3, r3, 0x3C
	  stw       r0, 0x14(r1)
	  bl        0x134
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80210ADC
 * Size:	000004
 */
void onDamage__Q24Game32ItemState<Game::ItemWeed::Item>
FPQ34Game8ItemWeed4Itemf(void)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80210AE0
 * Size:	000004
 */
void onKeyEvent__Q24Game32ItemState<Game::ItemWeed::Item>
FPQ34Game8ItemWeed4ItemRCQ28SysShape8KeyEvent(void)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80210AE4
 * Size:	000004
 */
void onBounce__Q24Game32ItemState<Game::ItemWeed::Item>
FPQ34Game8ItemWeed4ItemPQ23Sys8Triangle(void)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80210AE8
 * Size:	000004
 */
void onPlatCollision__Q24Game32ItemState<Game::ItemWeed::Item>
FPQ34Game8ItemWeed4ItemRQ24Game9PlatEvent(void)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80210AEC
 * Size:	000004
 */
void onCollision__Q24Game32ItemState<Game::ItemWeed::Item>
FPQ34Game8ItemWeed4ItemRQ24Game9CollEvent(void)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80210AF0
 * Size:	000004
 */
void init__Q24Game31FSMState<Game::ItemWeed::Item>
FPQ34Game8ItemWeed4ItemPQ24Game8StateArg(void)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80210AF4
 * Size:	000004
 */
void exec__Q24Game31FSMState<Game::ItemWeed::Item> FPQ34Game8ItemWeed4Item(void)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80210AF8
 * Size:	000004
 */
void cleanup__Q24Game31FSMState<Game::ItemWeed::Item>
FPQ34Game8ItemWeed4Item(void)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80210AFC
 * Size:	000004
 */
void resume__Q24Game31FSMState<Game::ItemWeed::Item>
FPQ34Game8ItemWeed4Item(void)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80210B00
 * Size:	000004
 */
void restart__Q24Game31FSMState<Game::ItemWeed::Item>
FPQ34Game8ItemWeed4Item(void)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80210B04
 * Size:	000030
 */
void transit__Q24Game31FSMState<Game::ItemWeed::Item>
FPQ34Game8ItemWeed4ItemiPQ24Game8StateArg(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x8(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
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
 * Address:	80210B34
 * Size:	000004
 */
void init__Q24Game35StateMachine<Game::ItemWeed::Item>
FPQ34Game8ItemWeed4Item(void)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80210B38
 * Size:	000064
 */
void create__Q24Game35StateMachine<Game::ItemWeed::Item> Fi(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  li        r0, 0
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  stw       r4, 0xC(r3)
	  stw       r0, 0x8(r3)
	  lwz       r0, 0xC(r3)
	  rlwinm    r3,r0,2,0,29
	  bl        -0x1ECBB4
	  stw       r3, 0x4(r31)
	  lwz       r0, 0xC(r31)
	  rlwinm    r3,r0,2,0,29
	  bl        -0x1ECBC4
	  stw       r3, 0x10(r31)
	  lwz       r0, 0xC(r31)
	  rlwinm    r3,r0,2,0,29
	  bl        -0x1ECBD4
	  stw       r3, 0x14(r31)
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80210B9C
 * Size:	000060
 */
void MonoObjectMgr<Game::ItemWeed::Weed>::birth()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        0x34C
	  cmpwi     r3, -0x1
	  beq-      .loc_0x48
	  lwz       r6, 0x28(r31)
	  li        r0, 0
	  lwz       r4, 0x2C(r31)
	  mulli     r5, r3, 0x54
	  stbx      r0, r4, r3
	  add       r3, r6, r5
	  lwz       r4, 0x20(r31)
	  addi      r0, r4, 0x1
	  stw       r0, 0x20(r31)
	  b         .loc_0x4C

	.loc_0x48:
	  li        r3, 0

	.loc_0x4C:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80210BFC
 * Size:	000054
 */
void MonoObjectMgr<Game::ItemWeed::Weed>::kill(Game::ItemWeed::Weed*)
{
	/*
	.loc_0x0:
	  lwz       r0, 0x24(r3)
	  li        r6, 0
	  li        r5, 0
	  mtctr     r0
	  cmpwi     r0, 0
	  blelr-

	.loc_0x18:
	  lwz       r0, 0x28(r3)
	  add       r0, r0, r5
	  cmplw     r0, r4
	  bne-      .loc_0x44
	  lwz       r4, 0x2C(r3)
	  li        r0, 0x1
	  stbx      r0, r4, r6
	  lwz       r4, 0x20(r3)
	  subi      r0, r4, 0x1
	  stw       r0, 0x20(r3)
	  blr

	.loc_0x44:
	  addi      r5, r5, 0x54
	  addi      r6, r6, 0x1
	  bdnz+     .loc_0x18
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80210C50
 * Size:	000040
 */
void MonoObjectMgr<Game::ItemWeed::Weed>::getNext(void*)
{
	/*
	.loc_0x0:
	  lwz       r5, 0x24(r3)
	  addi      r6, r4, 0x1
	  sub       r0, r5, r6
	  mtctr     r0
	  cmpw      r6, r5
	  bge-      .loc_0x38

	.loc_0x18:
	  lwz       r4, 0x2C(r3)
	  lbzx      r0, r4, r6
	  cmplwi    r0, 0
	  bne-      .loc_0x30
	  mr        r3, r6
	  blr

	.loc_0x30:
	  addi      r6, r6, 0x1
	  bdnz+     .loc_0x18

	.loc_0x38:
	  mr        r3, r5
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80210C90
 * Size:	000030
 */
void MonoObjectMgr<Game::ItemWeed::Weed>::getStart()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r4, -0x1
	  stw       r0, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
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
 * Address:	80210CC0
 * Size:	000008
 */
void MonoObjectMgr<Game::ItemWeed::Weed>::getEnd()
{
	/*
	.loc_0x0:
	  lwz       r3, 0x24(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80210CC8
 * Size:	000008
 */
void MonoObjectMgr<Game::ItemWeed::Weed>::getTo()
{
	/*
	.loc_0x0:
	  lwz       r3, 0x24(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80210CD0
 * Size:	000050
 */
void MonoObjectMgr<Game::ItemWeed::Weed>::doAnimation()
{
	/*
	.loc_0x0:
	  lwz       r4, 0x24(r3)
	  li        r5, 0
	  cmpwi     r4, 0
	  blelr-
	  cmpwi     r4, 0x8
	  subi      r3, r4, 0x8
	  ble-      .loc_0x38
	  addi      r0, r3, 0x7
	  rlwinm    r0,r0,29,3,31
	  mtctr     r0
	  cmpwi     r3, 0
	  ble-      .loc_0x38

	.loc_0x30:
	  addi      r5, r5, 0x8
	  bdnz+     .loc_0x30

	.loc_0x38:
	  sub       r0, r4, r5
	  mtctr     r0
	  cmpw      r5, r4
	  bgelr-

	.loc_0x48:
	  bdnz-     .loc_0x48
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80210D20
 * Size:	000050
 */
void MonoObjectMgr<Game::ItemWeed::Weed>::doEntry()
{
	/*
	.loc_0x0:
	  lwz       r4, 0x24(r3)
	  li        r5, 0
	  cmpwi     r4, 0
	  blelr-
	  cmpwi     r4, 0x8
	  subi      r3, r4, 0x8
	  ble-      .loc_0x38
	  addi      r0, r3, 0x7
	  rlwinm    r0,r0,29,3,31
	  mtctr     r0
	  cmpwi     r3, 0
	  ble-      .loc_0x38

	.loc_0x30:
	  addi      r5, r5, 0x8
	  bdnz+     .loc_0x30

	.loc_0x38:
	  sub       r0, r4, r5
	  mtctr     r0
	  cmpw      r5, r4
	  bgelr-

	.loc_0x48:
	  bdnz-     .loc_0x48
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80210D70
 * Size:	000050
 */
void MonoObjectMgr<Game::ItemWeed::Weed>::doSetView(int)
{
	/*
	.loc_0x0:
	  lwz       r4, 0x24(r3)
	  li        r5, 0
	  cmpwi     r4, 0
	  blelr-
	  cmpwi     r4, 0x8
	  subi      r3, r4, 0x8
	  ble-      .loc_0x38
	  addi      r0, r3, 0x7
	  rlwinm    r0,r0,29,3,31
	  mtctr     r0
	  cmpwi     r3, 0
	  ble-      .loc_0x38

	.loc_0x30:
	  addi      r5, r5, 0x8
	  bdnz+     .loc_0x30

	.loc_0x38:
	  sub       r0, r4, r5
	  mtctr     r0
	  cmpw      r5, r4
	  bgelr-

	.loc_0x48:
	  bdnz-     .loc_0x48
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80210DC0
 * Size:	000050
 */
void MonoObjectMgr<Game::ItemWeed::Weed>::doViewCalc()
{
	/*
	.loc_0x0:
	  lwz       r4, 0x24(r3)
	  li        r5, 0
	  cmpwi     r4, 0
	  blelr-
	  cmpwi     r4, 0x8
	  subi      r3, r4, 0x8
	  ble-      .loc_0x38
	  addi      r0, r3, 0x7
	  rlwinm    r0,r0,29,3,31
	  mtctr     r0
	  cmpwi     r3, 0
	  ble-      .loc_0x38

	.loc_0x30:
	  addi      r5, r5, 0x8
	  bdnz+     .loc_0x30

	.loc_0x38:
	  sub       r0, r4, r5
	  mtctr     r0
	  cmpw      r5, r4
	  bgelr-

	.loc_0x48:
	  bdnz-     .loc_0x48
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80210E10
 * Size:	000050
 */
void MonoObjectMgr<Game::ItemWeed::Weed>::doSimulation(float)
{
	/*
	.loc_0x0:
	  lwz       r4, 0x24(r3)
	  li        r5, 0
	  cmpwi     r4, 0
	  blelr-
	  cmpwi     r4, 0x8
	  subi      r3, r4, 0x8
	  ble-      .loc_0x38
	  addi      r0, r3, 0x7
	  rlwinm    r0,r0,29,3,31
	  mtctr     r0
	  cmpwi     r3, 0
	  ble-      .loc_0x38

	.loc_0x30:
	  addi      r5, r5, 0x8
	  bdnz+     .loc_0x30

	.loc_0x38:
	  sub       r0, r4, r5
	  mtctr     r0
	  cmpw      r5, r4
	  bgelr-

	.loc_0x48:
	  bdnz-     .loc_0x48
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80210E60
 * Size:	000050
 */
void MonoObjectMgr<Game::ItemWeed::Weed>::doDirectDraw(Graphics&)
{
	/*
	.loc_0x0:
	  lwz       r4, 0x24(r3)
	  li        r5, 0
	  cmpwi     r4, 0
	  blelr-
	  cmpwi     r4, 0x8
	  subi      r3, r4, 0x8
	  ble-      .loc_0x38
	  addi      r0, r3, 0x7
	  rlwinm    r0,r0,29,3,31
	  mtctr     r0
	  cmpwi     r3, 0
	  ble-      .loc_0x38

	.loc_0x30:
	  addi      r5, r5, 0x8
	  bdnz+     .loc_0x30

	.loc_0x38:
	  sub       r0, r4, r5
	  mtctr     r0
	  cmpw      r5, r4
	  bgelr-

	.loc_0x48:
	  bdnz-     .loc_0x48
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80210EB0
 * Size:	000018
 */
void MonoObjectMgr<Game::ItemWeed::Weed>::resetMgr()
{
	/*
	.loc_0x0:
	  li        r0, 0
	  stw       r0, 0x28(r3)
	  stw       r0, 0x24(r3)
	  stw       r0, 0x20(r3)
	  stw       r0, 0x2C(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80210EC8
 * Size:	000030
 */
void MonoObjectMgr<Game::ItemWeed::Weed>::clearMgr()
{
	/*
	.loc_0x0:
	  li        r0, 0
	  li        r6, 0
	  stw       r0, 0x20(r3)
	  li        r5, 0x1
	  b         .loc_0x20

	.loc_0x14:
	  lwz       r4, 0x2C(r3)
	  stbx      r5, r4, r6
	  addi      r6, r6, 0x1

	.loc_0x20:
	  lwz       r0, 0x24(r3)
	  cmpw      r6, r0
	  blt+      .loc_0x14
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80210EF8
 * Size:	000004
 */
void MonoObjectMgr<Game::ItemWeed::Weed>::onAlloc()
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80210EFC
 * Size:	00003C
 */
void MonoObjectMgr<Game::ItemWeed::Weed>::getEmptyIndex()
{
	/*
	.loc_0x0:
	  lwz       r0, 0x24(r3)
	  li        r5, 0
	  mtctr     r0
	  cmpwi     r0, 0
	  ble-      .loc_0x34

	.loc_0x14:
	  lwz       r4, 0x2C(r3)
	  lbzx      r0, r4, r5
	  cmplwi    r0, 0x1
	  bne-      .loc_0x2C
	  mr        r3, r5
	  blr

	.loc_0x2C:
	  addi      r5, r5, 0x1
	  bdnz+     .loc_0x14

	.loc_0x34:
	  li        r3, -0x1
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80210F38
 * Size:	000010
 */
void MonoObjectMgr<Game::ItemWeed::Weed>::get(void*)
{
	/*
	.loc_0x0:
	  mulli     r0, r4, 0x54
	  lwz       r3, 0x28(r3)
	  add       r3, r3, r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80210F48
 * Size:	00002C
 */
void Container<Game::ItemWeed::Weed>::getObject(void*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
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
 * Address:	80210F74
 * Size:	000008
 */
void Container<Game::ItemWeed::Weed>::getAt(int)
{
	/*
	.loc_0x0:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80210F7C
 * Size:	000008
 */
void Container<Game::ItemWeed::Weed>::getTo()
{
	/*
	.loc_0x0:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80210F84
 * Size:	0001D4
 */
void ObjectMgr<Game::ItemWeed::Weed>::doDirectDraw(Graphics&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r4, 0x804C
	  stw       r0, 0x24(r1)
	  li        r0, 0
	  addi      r4, r4, 0x420
	  cmplwi    r0, 0
	  stw       r0, 0x14(r1)
	  stw       r4, 0x8(r1)
	  stw       r0, 0xC(r1)
	  stw       r3, 0x10(r1)
	  bne-      .loc_0x48
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1A4

	.loc_0x48:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0xB4

	.loc_0x60:
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
	  bne-      .loc_0x1A4
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0xB4:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x60
	  b         .loc_0x1A4

	.loc_0xD4:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x114
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1A4

	.loc_0x114:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x188

	.loc_0x134:
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
	  bne-      .loc_0x1A4
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0x188:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x134

	.loc_0x1A4:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0xC(r1)
	  cmplw     r4, r3
	  bne+      .loc_0xD4
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80211158
 * Size:	00004C
 */
void Iterator<Game::ItemWeed::Weed>::isDone()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r3, 0x8(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x4(r31)
	  sub       r0, r3, r0
	  cntlzw    r0, r0
	  rlwinm    r3,r0,27,5,31
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802111A4
 * Size:	0001D4
 */
void ObjectMgr<Game::ItemWeed::Weed>::doSimulation(float)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r4, 0x804C
	  stw       r0, 0x24(r1)
	  li        r0, 0
	  addi      r4, r4, 0x420
	  cmplwi    r0, 0
	  stw       r0, 0x14(r1)
	  stw       r4, 0x8(r1)
	  stw       r0, 0xC(r1)
	  stw       r3, 0x10(r1)
	  bne-      .loc_0x48
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1A4

	.loc_0x48:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0xB4

	.loc_0x60:
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
	  bne-      .loc_0x1A4
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0xB4:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x60
	  b         .loc_0x1A4

	.loc_0xD4:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x114
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1A4

	.loc_0x114:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x188

	.loc_0x134:
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
	  bne-      .loc_0x1A4
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0x188:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x134

	.loc_0x1A4:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0xC(r1)
	  cmplw     r4, r3
	  bne+      .loc_0xD4
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80211378
 * Size:	0001D4
 */
void ObjectMgr<Game::ItemWeed::Weed>::doViewCalc()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r4, 0x804C
	  stw       r0, 0x24(r1)
	  li        r0, 0
	  addi      r4, r4, 0x420
	  cmplwi    r0, 0
	  stw       r0, 0x14(r1)
	  stw       r4, 0x8(r1)
	  stw       r0, 0xC(r1)
	  stw       r3, 0x10(r1)
	  bne-      .loc_0x48
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1A4

	.loc_0x48:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0xB4

	.loc_0x60:
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
	  bne-      .loc_0x1A4
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0xB4:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x60
	  b         .loc_0x1A4

	.loc_0xD4:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x114
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1A4

	.loc_0x114:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x188

	.loc_0x134:
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
	  bne-      .loc_0x1A4
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0x188:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x134

	.loc_0x1A4:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0xC(r1)
	  cmplw     r4, r3
	  bne+      .loc_0xD4
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8021154C
 * Size:	0001D4
 */
void ObjectMgr<Game::ItemWeed::Weed>::doSetView(int)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r4, 0x804C
	  stw       r0, 0x24(r1)
	  li        r0, 0
	  addi      r4, r4, 0x420
	  cmplwi    r0, 0
	  stw       r0, 0x14(r1)
	  stw       r4, 0x8(r1)
	  stw       r0, 0xC(r1)
	  stw       r3, 0x10(r1)
	  bne-      .loc_0x48
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1A4

	.loc_0x48:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0xB4

	.loc_0x60:
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
	  bne-      .loc_0x1A4
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0xB4:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x60
	  b         .loc_0x1A4

	.loc_0xD4:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x114
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1A4

	.loc_0x114:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x188

	.loc_0x134:
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
	  bne-      .loc_0x1A4
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0x188:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x134

	.loc_0x1A4:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0xC(r1)
	  cmplw     r4, r3
	  bne+      .loc_0xD4
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80211720
 * Size:	0001D4
 */
void ObjectMgr<Game::ItemWeed::Weed>::doEntry()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r4, 0x804C
	  stw       r0, 0x24(r1)
	  li        r0, 0
	  addi      r4, r4, 0x420
	  cmplwi    r0, 0
	  stw       r0, 0x14(r1)
	  stw       r4, 0x8(r1)
	  stw       r0, 0xC(r1)
	  stw       r3, 0x10(r1)
	  bne-      .loc_0x48
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1A4

	.loc_0x48:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0xB4

	.loc_0x60:
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
	  bne-      .loc_0x1A4
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0xB4:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x60
	  b         .loc_0x1A4

	.loc_0xD4:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x114
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1A4

	.loc_0x114:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x188

	.loc_0x134:
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
	  bne-      .loc_0x1A4
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0x188:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x134

	.loc_0x1A4:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0xC(r1)
	  cmplw     r4, r3
	  bne+      .loc_0xD4
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802118F4
 * Size:	0001D4
 */
void ObjectMgr<Game::ItemWeed::Weed>::doAnimation()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r4, 0x804C
	  stw       r0, 0x24(r1)
	  li        r0, 0
	  addi      r4, r4, 0x420
	  cmplwi    r0, 0
	  stw       r0, 0x14(r1)
	  stw       r4, 0x8(r1)
	  stw       r0, 0xC(r1)
	  stw       r3, 0x10(r1)
	  bne-      .loc_0x48
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1A4

	.loc_0x48:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0xB4

	.loc_0x60:
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
	  bne-      .loc_0x1A4
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0xB4:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x60
	  b         .loc_0x1A4

	.loc_0xD4:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x114
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1A4

	.loc_0x114:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x188

	.loc_0x134:
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
	  bne-      .loc_0x1A4
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0x188:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x134

	.loc_0x1A4:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0xC(r1)
	  cmplw     r4, r3
	  bne+      .loc_0xD4
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80211AC8
 * Size:	000188
 */
void MonoObjectMgr<Game::ItemWeed::Weed>::alloc(int)
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
	  stw       r29, 0x14(r1)
	  mr        r29, r31
	  mulli     r3, r29, 0x54
	  stw       r28, 0x10(r1)
	  addi      r3, r3, 0x10
	  bl        -0x1EDB4C
	  lis       r4, 0x8021
	  mr        r7, r29
	  subi      r4, r4, 0xD80
	  li        r5, 0
	  li        r6, 0x54
	  bl        -0x150120
	  stw       r3, 0x28(r30)
	  li        r0, 0
	  mr        r3, r29
	  stw       r31, 0x24(r30)
	  stw       r0, 0x20(r30)
	  bl        -0x1EDB7C
	  cmpwi     r31, 0
	  stw       r3, 0x2C(r30)
	  li        r11, 0
	  ble-      .loc_0x120
	  cmpwi     r31, 0x8
	  subi      r3, r31, 0x8
	  ble-      .loc_0xFC
	  addi      r0, r3, 0x7
	  rlwinm    r0,r0,29,3,31
	  mtctr     r0
	  cmpwi     r3, 0
	  ble-      .loc_0xFC

	.loc_0x94:
	  lwz       r3, 0x2C(r30)
	  li        r10, 0x1
	  addi      r8, r11, 0x1
	  addi      r7, r11, 0x2
	  stbx      r10, r3, r11
	  addi      r6, r11, 0x3
	  addi      r5, r11, 0x4
	  addi      r4, r11, 0x5
	  lwz       r9, 0x2C(r30)
	  addi      r3, r11, 0x6
	  addi      r0, r11, 0x7
	  addi      r11, r11, 0x8
	  stbx      r10, r9, r8
	  lwz       r8, 0x2C(r30)
	  stbx      r10, r8, r7
	  lwz       r7, 0x2C(r30)
	  stbx      r10, r7, r6
	  lwz       r6, 0x2C(r30)
	  stbx      r10, r6, r5
	  lwz       r5, 0x2C(r30)
	  stbx      r10, r5, r4
	  lwz       r4, 0x2C(r30)
	  stbx      r10, r4, r3
	  lwz       r3, 0x2C(r30)
	  stbx      r10, r3, r0
	  bdnz+     .loc_0x94

	.loc_0xFC:
	  sub       r0, r31, r11
	  li        r4, 0x1
	  mtctr     r0
	  cmpw      r11, r31
	  bge-      .loc_0x120

	.loc_0x110:
	  lwz       r3, 0x2C(r30)
	  stbx      r4, r3, r11
	  addi      r11, r11, 0x1
	  bdnz+     .loc_0x110

	.loc_0x120:
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x88(r12)
	  mtctr     r12
	  bctrl
	  li        r28, 0
	  li        r29, 0
	  b         .loc_0x160

	.loc_0x140:
	  lwz       r0, 0x28(r30)
	  add       r3, r0, r29
	  lwz       r12, 0xC(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  addi      r29, r29, 0x54
	  addi      r28, r28, 0x1

	.loc_0x160:
	  cmpw      r28, r31
	  blt+      .loc_0x140
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
 * Address:	80211C50
 * Size:	00009C
 */
void MonoObjectMgr<Game::ItemWeed::Weed>::MonoObjectMgr()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        0x1FF72C
	  lis       r4, 0x804B
	  lis       r3, 0x804C
	  subi      r0, r4, 0x5324
	  lis       r6, 0x804B
	  stw       r0, 0x0(r31)
	  addi      r0, r3, 0x3D0
	  lis       r4, 0x804C
	  lis       r3, 0x804C
	  stw       r0, 0x0(r31)
	  li        r8, 0
	  addi      r7, r4, 0x258
	  addi      r5, r3, 0x2D4
	  stb       r8, 0x18(r31)
	  subi      r0, r6, 0x4A10
	  addi      r6, r7, 0x2C
	  addi      r4, r5, 0x2C
	  stw       r0, 0x1C(r31)
	  li        r0, 0x1
	  mr        r3, r31
	  stw       r7, 0x0(r31)
	  stw       r6, 0x1C(r31)
	  stw       r5, 0x0(r31)
	  stw       r4, 0x1C(r31)
	  stb       r0, 0x18(r31)
	  stw       r8, 0x24(r31)
	  stw       r8, 0x20(r31)
	  stw       r8, 0x28(r31)
	  stw       r8, 0x2C(r31)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80211CEC
 * Size:	00009C
 */
void transit__Q24Game35StateMachine<Game::ItemWeed::Item>
FPQ34Game8ItemWeed4ItemiPQ24Game8StateArg(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  rlwinm    r0,r5,2,0,29
	  stmw      r27, 0xC(r1)
	  mr        r27, r3
	  mr        r28, r4
	  mr        r29, r6
	  lwz       r30, 0x1DC(r4)
	  lwz       r3, 0x14(r3)
	  cmplwi    r30, 0
	  lwzx      r31, r3, r0
	  beq-      .loc_0x50
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x4(r30)
	  stw       r0, 0x18(r27)

	.loc_0x50:
	  lwz       r0, 0xC(r27)
	  cmpw      r31, r0
	  blt-      .loc_0x60

	.loc_0x5C:
	  b         .loc_0x5C

	.loc_0x60:
	  lwz       r3, 0x4(r27)
	  rlwinm    r0,r31,2,0,29
	  mr        r4, r28
	  mr        r5, r29
	  lwzx      r3, r3, r0
	  stw       r3, 0x1DC(r28)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lmw       r27, 0xC(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80211D88
 * Size:	000084
 */
void registerState__Q24Game35StateMachine<Game::ItemWeed::Item>
FPQ24Game31FSMState<Game::ItemWeed::Item>(void)
{
	/*
	.loc_0x0:
	  lwz       r6, 0x8(r3)
	  lwz       r0, 0xC(r3)
	  cmpw      r6, r0
	  bgelr-
	  lwz       r5, 0x4(r3)
	  rlwinm    r0,r6,2,0,29
	  stwx      r4, r5, r0
	  lwz       r5, 0x4(r4)
	  cmpwi     r5, 0
	  blt-      .loc_0x34
	  lwz       r0, 0xC(r3)
	  cmpw      r5, r0
	  blt-      .loc_0x3C

	.loc_0x34:
	  li        r0, 0
	  b         .loc_0x40

	.loc_0x3C:
	  li        r0, 0x1

	.loc_0x40:
	  rlwinm.   r0,r0,0,24,31
	  beqlr-
	  stw       r3, 0x8(r4)
	  lwz       r0, 0x8(r3)
	  lwz       r6, 0x4(r4)
	  lwz       r5, 0x10(r3)
	  rlwinm    r0,r0,2,0,29
	  stwx      r6, r5, r0
	  lwz       r0, 0x4(r4)
	  lwz       r5, 0x8(r3)
	  lwz       r4, 0x14(r3)
	  rlwinm    r0,r0,2,0,29
	  stwx      r5, r4, r0
	  lwz       r4, 0x8(r3)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80211E0C
 * Size:	000038
 */
void exec__Q24Game35StateMachine<Game::ItemWeed::Item>
FPQ34Game8ItemWeed4Item(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x1DC(r4)
	  cmplwi    r3, 0
	  beq-      .loc_0x28
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl

	.loc_0x28:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80211E44
 * Size:	000044
 */
void onKeyEvent__Q24Game74FSMItem<Game::ItemWeed::Item, Game::ItemWeed::FSM,
                                  Game::ItemWeed::State>
FRCQ28SysShape8KeyEvent(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r6, r3
	  mr        r5, r4
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x1DC(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x34
	  lwz       r12, 0x0(r3)
	  mr        r4, r6
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl

	.loc_0x34:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80211E88
 * Size:	000044
 */
void platCallback__Q24Game74FSMItem<Game::ItemWeed::Item, Game::ItemWeed::FSM,
                                    Game::ItemWeed::State>
FRQ24Game9PlatEvent(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r6, r3
	  mr        r5, r4
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x1DC(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x34
	  lwz       r12, 0x0(r3)
	  mr        r4, r6
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x34:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80211ECC
 * Size:	000044
 */
void collisionCallback__Q24Game74FSMItem<
    Game::ItemWeed::Item, Game::ItemWeed::FSM, Game::ItemWeed::State>
FRQ24Game9CollEvent(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r6, r3
	  mr        r5, r4
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x1DC(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x34
	  lwz       r12, 0x0(r3)
	  mr        r4, r6
	  lwz       r12, 0x30(r12)
	  mtctr     r12
	  bctrl

	.loc_0x34:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80211F10
 * Size:	000044
 */
void bounceCallback__Q24Game74FSMItem<Game::ItemWeed::Item, Game::ItemWeed::FSM,
                                      Game::ItemWeed::State>
FPQ23Sys8Triangle(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r6, r3
	  mr        r5, r4
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x1DC(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x34
	  lwz       r12, 0x0(r3)
	  mr        r4, r6
	  lwz       r12, 0x28(r12)
	  mtctr     r12
	  bctrl

	.loc_0x34:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80211F54
 * Size:	000014
 */
void isFlagAlive__Q24Game32TFlockMgr<Game::ItemWeed::Weed> Fi(void)
{
	/*
	.loc_0x0:
	  lwz       r3, 0x68(r3)
	  lbzx      r0, r3, r4
	  cntlzw    r0, r0
	  rlwinm    r3,r0,27,5,31
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80211F68
 * Size:	00002C
 */
void getEnd__Q24Game32TFlockMgr<Game::ItemWeed::Weed> Fv(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwzu      r12, 0x3C(r3)
	  lwz       r12, 0x1C(r12)
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
 * Address:	80211F94
 * Size:	00002C
 */
void get__Q24Game32TFlockMgr<Game::ItemWeed::Weed> FPv(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwzu      r12, 0x3C(r3)
	  lwz       r12, 0x20(r12)
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
 * Address:	80211FC0
 * Size:	000038
 */
void Iterator<Game::ItemWeed::Weed>::operator*()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r4, r3
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x8(r3)
	  lwz       r4, 0x4(r4)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
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
 * Address:	80211FF8
 * Size:	0000E4
 */
void Iterator<Game::ItemWeed::Weed>::next()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r0, 0xC(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x40
	  lwz       r3, 0x8(r31)
	  lwz       r4, 0x4(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x4(r31)
	  b         .loc_0xD0

	.loc_0x40:
	  lwz       r3, 0x8(r31)
	  lwz       r4, 0x4(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x4(r31)
	  b         .loc_0xB4

	.loc_0x60:
	  lwz       r3, 0x8(r31)
	  lwz       r4, 0x4(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0xC(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0xD0
	  lwz       r3, 0x8(r31)
	  lwz       r4, 0x4(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x4(r31)

	.loc_0xB4:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x60

	.loc_0xD0:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802120DC
 * Size:	0000DC
 */
void Iterator<Game::ItemWeed::Weed>::first()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r0, 0xC(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x3C
	  lwz       r3, 0x8(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x4(r31)
	  b         .loc_0xC8

	.loc_0x3C:
	  lwz       r3, 0x8(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x4(r31)
	  b         .loc_0xAC

	.loc_0x58:
	  lwz       r3, 0x8(r31)
	  lwz       r4, 0x4(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0xC(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0xC8
	  lwz       r3, 0x8(r31)
	  lwz       r4, 0x4(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x4(r31)

	.loc_0xAC:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x58

	.loc_0xC8:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802121B8
 * Size:	000028
 */
void __sinit_itemWeed_cpp(void)
{
	/*
	.loc_0x0:
	  lis       r4, 0x8051
	  li        r0, -0x1
	  lfs       f0, 0x48B0(r4)
	  lis       r3, 0x804C
	  stw       r0, -0x6AA8(r13)
	  stfsu     f0, -0x460(r3)
	  stfs      f0, -0x6AA4(r13)
	  stfs      f0, 0x4(r3)
	  stfs      f0, 0x8(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802121E0
 * Size:	000008
 */
void @32 @__dt__Q24Game32TFlockMgr<Game::ItemWeed::Weed> Fv(void)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x20
	  b         -0x2E78
	*/
}

/*
 * --INFO--
 * Address:	802121E8
 * Size:	000008
 */
void MonoObjectMgr<Game::ItemWeed::Weed>::@28 @resetMgr()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x1C
	  b         -0x133C
	*/
}

/*
 * --INFO--
 * Address:	802121F0
 * Size:	000008
 */
void MonoObjectMgr<Game::ItemWeed::Weed>::@28 @doDirectDraw(Graphics&)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x1C
	  b         -0x1394
	*/
}

/*
 * --INFO--
 * Address:	802121F8
 * Size:	000008
 */
void MonoObjectMgr<Game::ItemWeed::Weed>::@28 @doSimulation(float)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x1C
	  b         -0x13EC
	*/
}

/*
 * --INFO--
 * Address:	80212200
 * Size:	000008
 */
void MonoObjectMgr<Game::ItemWeed::Weed>::@28 @doViewCalc()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x1C
	  b         -0x1444
	*/
}

/*
 * --INFO--
 * Address:	80212208
 * Size:	000008
 */
void MonoObjectMgr<Game::ItemWeed::Weed>::@28 @doSetView(int)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x1C
	  b         -0x149C
	*/
}

/*
 * --INFO--
 * Address:	80212210
 * Size:	000008
 */
void MonoObjectMgr<Game::ItemWeed::Weed>::@28 @doEntry()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x1C
	  b         -0x14F4
	*/
}

/*
 * --INFO--
 * Address:	80212218
 * Size:	000008
 */
void MonoObjectMgr<Game::ItemWeed::Weed>::@28 @doAnimation()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x1C
	  b         -0x154C
	*/
}

/*
 * --INFO--
 * Address:	80212220
 * Size:	000008
 */
void ObjectMgr<Game::ItemWeed::Weed>::@28 @doDirectDraw(Graphics&)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x1C
	  b         -0x12A0
	*/
}

/*
 * --INFO--
 * Address:	80212228
 * Size:	000008
 */
void ObjectMgr<Game::ItemWeed::Weed>::@28 @doSimulation(float)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x1C
	  b         -0x1088
	*/
}

/*
 * --INFO--
 * Address:	80212230
 * Size:	000008
 */
void ObjectMgr<Game::ItemWeed::Weed>::@28 @doViewCalc()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x1C
	  b         -0xEBC
	*/
}

/*
 * --INFO--
 * Address:	80212238
 * Size:	000008
 */
void ObjectMgr<Game::ItemWeed::Weed>::@28 @doSetView(int)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x1C
	  b         -0xCF0
	*/
}

/*
 * --INFO--
 * Address:	80212240
 * Size:	000008
 */
void ObjectMgr<Game::ItemWeed::Weed>::@28 @doEntry()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x1C
	  b         -0xB24
	*/
}

/*
 * --INFO--
 * Address:	80212248
 * Size:	000008
 */
void ObjectMgr<Game::ItemWeed::Weed>::@28 @doAnimation()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x1C
	  b         -0x958
	*/
}

/*
 * --INFO--
 * Address:	80212250
 * Size:	000008
 */
void @32 @getEnd__Q24Game32TFlockMgr<Game::ItemWeed::Weed> Fv(void)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x20
	  b         -0x2EC
	*/
}

/*
 * --INFO--
 * Address:	80212258
 * Size:	000008
 */
void @32 @getStart__Q24Game32TFlockMgr<Game::ItemWeed::Weed> Fv(void)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x20
	  b         -0x17D0
	*/
}

/*
 * --INFO--
 * Address:	80212260
 * Size:	000008
 */
void @32 @getNext__Q24Game32TFlockMgr<Game::ItemWeed::Weed> FPv(void)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x20
	  b         -0x1804
	*/
}

/*
 * --INFO--
 * Address:	80212268
 * Size:	000008
 */
void @32 @get__Q24Game32TFlockMgr<Game::ItemWeed::Weed> FPv(void)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x20
	  b         -0x2D8
	*/
}

/*
 * --INFO--
 * Address:	80212270
 * Size:	000008
 */
void @32 @Game::ItemWeed::WeedMgr::__dt(void)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x20
	  b         -0x19C4
	*/
}

/*
 * --INFO--
 * Address:	80212278
 * Size:	000008
 */
void @376
    @onKeyEvent__Q24Game74FSMItem<Game::ItemWeed::Item, Game::ItemWeed::FSM,
                                  Game::ItemWeed::State>
    FRCQ28SysShape8KeyEvent(void)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x178
	  b         -0x438
	*/
}

/*
 * --INFO--
 * Address:	80212280
 * Size:	000008
 */
void @48 @Game::ItemWeed::Mgr::__dt(void)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x30
	  b         -0x1CB8
	*/
}
