

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
 * Address:	8042F6E4
 * Size:	0000F0
 */
void Game::P2JST::ObjectCamera::__ct((char const*, Game::MoviePlayer*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r6, 0x804A
	  li        r10, 0
	  stw       r0, 0x14(r1)
	  addi      r0, r6, 0x3680
	  lis       r6, 0x804F
	  li        r9, -0x1
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lis       r3, 0x804A
	  lfs       f0, -0x649C(r13)
	  stw       r0, 0x0(r31)
	  addi      r0, r3, 0x35E8
	  lis       r3, 0x804F
	  mr        r7, r31
	  stw       r0, 0x0(r31)
	  subi      r8, r3, 0x3EE4
	  subi      r0, r6, 0x3F10
	  lis       r3, 0x804F
	  stw       r0, 0x4(r31)
	  subi      r6, r3, 0x3EF0
	  addi      r7, r8, 0x94
	  lwz       r0, 0x8(r6)
	  stw       r5, 0x8(r31)
	  li        r3, 0x144
	  lwz       r5, 0x0(r6)
	  stw       r4, 0xC(r31)
	  lwz       r4, 0x4(r6)
	  stw       r10, 0x10(r31)
	  stw       r9, 0x14(r31)
	  stw       r10, 0x18(r31)
	  stw       r10, 0x1C(r31)
	  stw       r8, 0x0(r31)
	  stw       r7, 0x4(r31)
	  stw       r5, 0x90(r31)
	  stw       r4, 0x94(r31)
	  stw       r0, 0x98(r31)
	  stw       r5, 0x9C(r31)
	  stw       r4, 0xA0(r31)
	  stw       r0, 0xA4(r31)
	  stfs      f0, 0xA8(r31)
	  stfs      f0, 0xAC(r31)
	  stfs      f0, 0xB0(r31)
	  stfs      f0, 0xB4(r31)
	  stfs      f0, 0xB8(r31)
	  stw       r10, 0xBC(r31)
	  stb       r10, 0xC4(r31)
	  bl        -0x40B900
	  mr.       r0, r3
	  beq-      .loc_0xD4
	  bl        -0x15168
	  mr        r0, r3

	.loc_0xD4:
	  stw       r0, 0xC0(r31)
	  mr        r3, r31
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8042F7D4
 * Size:	000068
 */
void Game::P2JST::ObjectCamera::__dt(void)
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
	  beq-      .loc_0x4C
	  lis       r5, 0x804F
	  li        r4, 0
	  subi      r5, r5, 0x3EE4
	  stw       r5, 0x0(r30)
	  addi      r0, r5, 0x94
	  stw       r0, 0x4(r30)
	  bl        -0x397018
	  extsh.    r0, r31
	  ble-      .loc_0x4C
	  mr        r3, r30
	  bl        -0x40B768

	.loc_0x4C:
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
 * Address:	8042F83C
 * Size:	0000A8
 */
void Game::P2JST::ObjectCamera::reset(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r4, 0x804F
	  lfs       f1, -0x649C(r13)
	  stw       r0, 0x24(r1)
	  lfs       f0, 0x2338(r2)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  mr        r30, r3
	  subi      r3, r4, 0x3EF0
	  lfs       f4, 0x0(r3)
	  lfs       f3, 0x4(r3)
	  stfs      f4, 0x90(r30)
	  lfs       f2, 0x8(r3)
	  stfs      f3, 0x94(r30)
	  stfs      f2, 0x98(r30)
	  stfs      f4, 0x9C(r30)
	  stfs      f3, 0xA0(r30)
	  stfs      f2, 0xA4(r30)
	  stfs      f1, 0xA8(r30)
	  stfs      f1, 0xAC(r30)
	  stfs      f1, 0xB0(r30)
	  stfs      f0, 0xB4(r30)
	  bl        -0xC674
	  lhz       r31, 0x6(r3)
	  bl        -0xC67C
	  lhz       r3, 0x4(r3)
	  lis       r0, 0x4330
	  stw       r0, 0x8(r1)
	  divw      r0, r3, r31
	  lfd       f1, 0x2340(r2)
	  xoris     r0, r0, 0x8000
	  stw       r0, 0xC(r1)
	  lfd       f0, 0x8(r1)
	  fsubs     f0, f0, f1
	  stfs      f0, 0xB8(r30)
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
 * Address:	8042F8E4
 * Size:	000004
 */
void Game::P2JST::ObjectCamera::update(void)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8042F8E8
 * Size:	000024
 */
void Game::P2JST::ObjectCamera::setProjection(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0xBC(r3)
	  bl        -0x14BB4
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8042F90C
 * Size:	00007C
 */
void Game::P2JST::ObjectCamera::setView(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x80(r1)
	  mflr      r0
	  lfs       f1, 0x2348(r2)
	  stw       r0, 0x84(r1)
	  addi      r5, r1, 0x8
	  lfs       f0, 0x234C(r2)
	  stw       r31, 0x7C(r1)
	  mr        r31, r3
	  addi      r3, r1, 0x44
	  stfs      f1, 0x8(r1)
	  addi      r4, r31, 0x90
	  addi      r6, r31, 0x9C
	  stfs      f0, 0xC(r1)
	  stfs      f1, 0x10(r1)
	  bl        -0x34504C
	  lfs       f0, 0xA8(r31)
	  addi      r3, r1, 0x14
	  lfs       f1, 0x2350(r2)
	  li        r4, 0x7A
	  fneg      f0, f0
	  fmuls     f1, f1, f0
	  bl        -0x34544C
	  addi      r3, r1, 0x14
	  addi      r4, r1, 0x44
	  addi      r5, r31, 0x60
	  bl        -0x345670
	  lwz       r0, 0x84(r1)
	  lwz       r31, 0x7C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x80
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8042F988
 * Size:	00006C
 */
void Game::P2JST::ObjectCamera::updateCamera(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xB8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0xBC(r31)
	  addi      r0, r31, 0x60
	  stw       r0, 0x30(r3)
	  lfs       f0, -0x6498(r13)
	  lwz       r3, 0xBC(r31)
	  stfs      f0, 0x28(r3)
	  lfs       f0, 0xB4(r31)
	  stfs      f0, -0x6498(r13)
	  lfs       f1, 0xB0(r31)
	  lwz       r3, 0xBC(r31)
	  lfs       f0, 0xAC(r31)
	  stfs      f0, 0x70(r3)
	  stfs      f1, 0x74(r3)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8042F9F4
 * Size:	000008
 */
void Game::P2JST::ObjectCamera::JSGGetName( const
{
	/*
	.loc_0x0:
	  lwz       r3, 0xC(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8042F9FC
 * Size:	000008
 */
void Game::P2JST::ObjectCamera::JSGSetFlag( (unsigned long))
{
	/*
	.loc_0x0:
	  stw       r4, 0x10(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8042FA04
 * Size:	000008
 */
void Game::P2JST::ObjectCamera::JSGGetFlag( const
{
	/*
	.loc_0x0:
	  lwz       r3, 0x10(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8042FA0C
 * Size:	000010
 */
void Game::P2JST::ObjectCamera::JSGSetData( (unsigned long, void const *, unsigned long))
{
	/*
	.loc_0x0:
	  stw       r4, 0x14(r3)
	  stw       r5, 0x18(r3)
	  stw       r6, 0x1C(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8042FA1C
 * Size:	00001C
 */
void Game::P2JST::ObjectCamera::JSGSetViewPosition( (Vec const &))
{
	/*
	.loc_0x0:
	  lfs       f0, 0x0(r4)
	  lfs       f1, 0x4(r4)
	  stfs      f0, 0x90(r3)
	  lfs       f0, 0x8(r4)
	  stfs      f1, 0x94(r3)
	  stfs      f0, 0x98(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8042FA38
 * Size:	00001C
 */
void Game::P2JST::ObjectCamera::JSGGetViewPosition( const(Vec *))
{
	/*
	.loc_0x0:
	  lfs       f0, 0x90(r3)
	  lfs       f1, 0x94(r3)
	  stfs      f0, 0x0(r4)
	  lfs       f0, 0x98(r3)
	  stfs      f1, 0x4(r4)
	  stfs      f0, 0x8(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8042FA54
 * Size:	00001C
 */
void Game::P2JST::ObjectCamera::JSGSetViewTargetPosition( (Vec const &))
{
	/*
	.loc_0x0:
	  lfs       f0, 0x0(r4)
	  lfs       f1, 0x4(r4)
	  stfs      f0, 0x9C(r3)
	  lfs       f0, 0x8(r4)
	  stfs      f1, 0xA0(r3)
	  stfs      f0, 0xA4(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8042FA70
 * Size:	00001C
 */
void Game::P2JST::ObjectCamera::JSGGetViewTargetPosition( const(Vec *))
{
	/*
	.loc_0x0:
	  lfs       f0, 0x9C(r3)
	  lfs       f1, 0xA0(r3)
	  stfs      f0, 0x0(r4)
	  lfs       f0, 0xA4(r3)
	  stfs      f1, 0x4(r4)
	  stfs      f0, 0x8(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8042FA8C
 * Size:	000008
 */
void Game::P2JST::ObjectCamera::JSGSetViewRoll( (float))
{
	/*
	.loc_0x0:
	  stfs      f1, 0xA8(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8042FA94
 * Size:	000008
 */
void Game::P2JST::ObjectCamera::JSGGetViewRoll( const
{
	/*
	.loc_0x0:
	  lfs       f1, 0xA8(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8042FA9C
 * Size:	000008
 */
void Game::P2JST::ObjectCamera::JSGSetProjectionNear( (float))
{
	/*
	.loc_0x0:
	  stfs      f1, 0xAC(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8042FAA4
 * Size:	000008
 */
void Game::P2JST::ObjectCamera::JSGGetProjectionNear( const
{
	/*
	.loc_0x0:
	  lfs       f1, 0xAC(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8042FAAC
 * Size:	000008
 */
void Game::P2JST::ObjectCamera::JSGSetProjectionFar( (float))
{
	/*
	.loc_0x0:
	  stfs      f1, 0xB0(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8042FAB4
 * Size:	000008
 */
void Game::P2JST::ObjectCamera::JSGGetProjectionFar( const
{
	/*
	.loc_0x0:
	  lfs       f1, 0xB0(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8042FABC
 * Size:	000008
 */
void Game::P2JST::ObjectCamera::JSGSetProjectionFovy( (float))
{
	/*
	.loc_0x0:
	  stfs      f1, 0xB4(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8042FAC4
 * Size:	000008
 */
void Game::P2JST::ObjectCamera::JSGGetProjectionFovy( const
{
	/*
	.loc_0x0:
	  lfs       f1, 0xB4(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8042FACC
 * Size:	000064
 */
void Game::P2JST::ObjectCamera::JSGSetProjectionAspect( (float))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  mr        r30, r3
	  bl        -0xC8C0
	  lhz       r31, 0x6(r3)
	  bl        -0xC8C8
	  lhz       r3, 0x4(r3)
	  lis       r0, 0x4330
	  stw       r0, 0x8(r1)
	  divw      r0, r3, r31
	  lfd       f1, 0x2340(r2)
	  xoris     r0, r0, 0x8000
	  stw       r0, 0xC(r1)
	  lfd       f0, 0x8(r1)
	  fsubs     f0, f0, f1
	  stfs      f0, 0xB8(r30)
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
 * Address:	8042FB30
 * Size:	000008
 */
void Game::P2JST::ObjectCamera::JSGGetProjectionAspect( const
{
	/*
	.loc_0x0:
	  lfs       f1, 0xB8(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000168
 */
void Game::P2JST::ObjectCamera::setParms( (Camera *))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8042FB38
 * Size:	0001A0
 */
void Game::P2JST::ObjectCamera::setCamera( (Camera *))
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
	  addi      r3, r30, 0x60
	  bl        -0x3458B8
	  stw       r31, 0xBC(r30)
	  addi      r3, r1, 0x14
	  lwz       r4, 0xBC(r30)
	  stw       r30, 0x140(r4)
	  lwz       r4, 0xBC(r30)
	  lwz       r12, 0x0(r4)
	  lwz       r12, 0x4C(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, 0x14(r1)
	  mr        r3, r30
	  lfs       f1, 0x18(r1)
	  addi      r4, r1, 0x8
	  lfs       f2, 0x1C(r1)
	  stfs      f0, 0x8(r1)
	  stfs      f1, 0xC(r1)
	  stfs      f2, 0x10(r1)
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x78(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0xBC(r30)
	  addi      r3, r1, 0x20
	  bl        -0x158E4
	  lfs       f3, 0x20(r1)
	  mr        r3, r30
	  lfs       f0, 0x2354(r2)
	  addi      r4, r1, 0x8
	  lfs       f4, 0x24(r1)
	  lfs       f5, 0x28(r1)
	  fmuls     f3, f3, f0
	  lfs       f2, 0x8(r1)
	  fmuls     f4, f4, f0
	  lfs       f1, 0xC(r1)
	  fmuls     f5, f5, f0
	  lfs       f0, 0x10(r1)
	  fadds     f2, f2, f3
	  fadds     f1, f1, f4
	  fadds     f0, f0, f5
	  stfs      f2, 0x8(r1)
	  stfs      f1, 0xC(r1)
	  stfs      f0, 0x10(r1)
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x88(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r30
	  lfs       f1, 0x2348(r2)
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x90(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0xBC(r30)
	  bl        -0x14F24
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x48(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0xBC(r30)
	  bl        -0x14F24
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x50(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r30
	  lwz       r4, 0xBC(r30)
	  lwz       r12, 0x0(r30)
	  lfs       f1, 0x28(r4)
	  lwz       r12, 0x58(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r30
	  lwz       r4, 0xBC(r30)
	  lwz       r12, 0x0(r30)
	  lfs       f1, 0x2C(r4)
	  lwz       r12, 0x60(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0xBC(r30)
	  lfs       f0, 0x28(r3)
	  stfs      f0, -0x6498(r13)
	  lwz       r3, 0xC0(r30)
	  lwz       r4, 0xBC(r30)
	  bl        -0x15458
	  lwz       r3, 0xBC(r30)
	  addi      r0, r30, 0x60
	  stw       r0, 0x30(r3)
	  lwz       r31, 0x3C(r1)
	  lwz       r30, 0x38(r1)
	  lwz       r0, 0x44(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8042FCD8
 * Size:	000038
 */
void Game::P2JST::ObjectCamera::start(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r3, 0xBC(r3)
	  bl        -0x14F3C
	  li        r0, 0x1
	  stb       r0, 0xC4(r31)
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8042FD10
 * Size:	000050
 */
void Game::P2JST::ObjectCamera::stop(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r3, 0xBC(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x34
	  lwz       r4, 0xC0(r31)
	  bl        -0x154DC
	  lwz       r3, 0xBC(r31)
	  li        r0, 0
	  stw       r0, 0x140(r3)

	.loc_0x34:
	  li        r0, 0
	  stb       r0, 0xC4(r31)
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8042FD60
 * Size:	000028
 */
void __sinit_JSTObjectCamera_cpp(void)
{
	/*
	.loc_0x0:
	  lis       r4, 0x8051
	  li        r0, -0x1
	  lfs       f0, 0x48B0(r4)
	  lis       r3, 0x804F
	  stw       r0, -0x64A0(r13)
	  stfsu     f0, -0x3EF0(r3)
	  stfs      f0, -0x649C(r13)
	  stfs      f0, 0x4(r3)
	  stfs      f0, 0x8(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8042FD88
 * Size:	000008
 */
void @4@Game::P2JST::ObjectCamera::stop(void)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x4
	  b         -0x7C
	*/
}

/*
 * --INFO--
 * Address:	8042FD90
 * Size:	000008
 */
void @4@Game::P2JST::ObjectCamera::start(void)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x4
	  b         -0xBC
	*/
}

/*
 * --INFO--
 * Address:	8042FD98
 * Size:	000008
 */
void @4@Game::P2JST::ObjectCamera::update(void)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x4
	  b         -0x4B8
	*/
}

/*
 * --INFO--
 * Address:	8042FDA0
 * Size:	000008
 */
void @4@Game::P2JST::ObjectCamera::reset(void)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x4
	  b         -0x568
	*/
}
