

/*
 * --INFO--
 * Address:	........
 * Size:	0000E0
 */
void _Print(char*, ...)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000004
 */
void Game::TDispTriangleArray::__ct(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000068
 */
void Game::TDispTriangleArray::alloc((int))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000054
 */
void Game::TDispTriangle::__ct(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00000C
 */
void Game::TDispTriangleArray::clear(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8016239C
 * Size:	000044
 */
void Game::TDispTriangleArray::store((Sys::Triangle&, Sys::VertexTable&, int))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r7, 0x0(r3)
	  lwz       r0, 0x4(r3)
	  cmpw      r7, r0
	  bge-      .loc_0x34
	  mulli     r0, r7, 0x60
	  lwz       r8, 0x8(r3)
	  addi      r7, r7, 0x1
	  stw       r7, 0x0(r3)
	  add       r3, r8, r0
	  bl        0x58

	.loc_0x34:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801623E0
 * Size:	000044
 */
void Game::TDispTriangleArray::store((Matrixf&, Sys::Triangle&,
                                      Sys::VertexTable&, int))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r8, 0x0(r3)
	  lwz       r0, 0x4(r3)
	  cmpw      r8, r0
	  bge-      .loc_0x34
	  mulli     r0, r8, 0x60
	  lwz       r9, 0x8(r3)
	  addi      r8, r8, 0x1
	  stw       r8, 0x0(r3)
	  add       r3, r9, r0
	  bl        0xD4

	.loc_0x34:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000074
 */
void Game::TDispTriangleArray::draw((Graphics&))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80162424
 * Size:	0000C0
 */
void Game::TDispTriangle::store((Sys::Triangle&, Sys::VertexTable&, int))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r9, r3
	  stw       r0, 0x14(r1)
	  li        r0, 0
	  stw       r4, 0x0(r3)
	  addi      r3, r9, 0x30
	  lwz       r7, 0x0(r4)
	  lwz       r8, 0x24(r5)
	  mulli     r7, r7, 0xC
	  add       r7, r8, r7
	  lfs       f0, 0x0(r7)
	  stfs      f0, 0x4(r9)
	  lfs       f0, 0x4(r7)
	  stfs      f0, 0x8(r9)
	  lfs       f0, 0x8(r7)
	  stfs      f0, 0xC(r9)
	  lwz       r7, 0x4(r4)
	  lwz       r8, 0x24(r5)
	  mulli     r7, r7, 0xC
	  add       r7, r8, r7
	  lfs       f0, 0x0(r7)
	  stfs      f0, 0x10(r9)
	  lfs       f0, 0x4(r7)
	  stfs      f0, 0x14(r9)
	  lfs       f0, 0x8(r7)
	  stfs      f0, 0x18(r9)
	  lwz       r4, 0x8(r4)
	  lwz       r5, 0x24(r5)
	  mulli     r4, r4, 0xC
	  add       r4, r5, r4
	  lfs       f0, 0x0(r4)
	  stfs      f0, 0x1C(r9)
	  lfs       f0, 0x4(r4)
	  stfs      f0, 0x20(r9)
	  lfs       f0, 0x8(r4)
	  stfs      f0, 0x24(r9)
	  stb       r0, 0x28(r9)
	  stb       r0, 0x29(r9)
	  lhz       r0, 0x28(r9)
	  ori       r0, r0, 0x1
	  sth       r0, 0x28(r9)
	  stw       r6, 0x2C(r9)
	  bl        -0x78230
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801624E4
 * Size:	000100
 */
void Game::TDispTriangle::store((Matrixf&, Sys::Triangle&, Sys::VertexTable&,
                                 int))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  mflr      r0
	  stw       r0, 0x54(r1)
	  stmw      r27, 0x3C(r1)
	  mr        r29, r5
	  mr        r28, r4
	  mr        r27, r3
	  mr        r30, r6
	  mr        r31, r7
	  stw       r29, 0x0(r3)
	  mr        r3, r28
	  lwz       r0, 0x0(r5)
	  addi      r5, r1, 0x20
	  lwz       r4, 0x24(r6)
	  mulli     r0, r0, 0xC
	  add       r4, r4, r0
	  bl        -0x7794C
	  lfs       f1, 0x24(r1)
	  mr        r3, r28
	  lfs       f2, 0x28(r1)
	  addi      r5, r1, 0x14
	  lfs       f0, 0x20(r1)
	  stfs      f0, 0x4(r27)
	  stfs      f1, 0x8(r27)
	  stfs      f2, 0xC(r27)
	  lwz       r0, 0x4(r29)
	  lwz       r4, 0x24(r30)
	  mulli     r0, r0, 0xC
	  add       r4, r4, r0
	  bl        -0x77980
	  lfs       f1, 0x18(r1)
	  mr        r3, r28
	  lfs       f2, 0x1C(r1)
	  addi      r5, r1, 0x8
	  lfs       f0, 0x14(r1)
	  stfs      f0, 0x10(r27)
	  stfs      f1, 0x14(r27)
	  stfs      f2, 0x18(r27)
	  lwz       r0, 0x8(r29)
	  lwz       r4, 0x24(r30)
	  mulli     r0, r0, 0xC
	  add       r4, r4, r0
	  bl        -0x779B4
	  lfs       f1, 0xC(r1)
	  li        r0, 0
	  lfs       f2, 0x10(r1)
	  mr        r3, r28
	  lfs       f0, 0x8(r1)
	  addi      r4, r27, 0x30
	  stfs      f0, 0x1C(r27)
	  stfs      f1, 0x20(r27)
	  stfs      f2, 0x24(r27)
	  stb       r0, 0x28(r27)
	  stb       r0, 0x29(r27)
	  lhz       r0, 0x28(r27)
	  ori       r0, r0, 0x1
	  sth       r0, 0x28(r27)
	  stw       r31, 0x2C(r27)
	  bl        -0x78300
	  lmw       r27, 0x3C(r1)
	  lwz       r0, 0x54(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000004
 */
void Game::TDispTriangle::draw((Graphics&))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801625E4
 * Size:	000098
 */
void Game::MapMgr::__ct(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  extsh.    r0, r4
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  beq-      .loc_0x30
	  addi      r0, r31, 0x24
	  lis       r3, 0x804B
	  stw       r0, 0x0(r31)
	  subi      r0, r3, 0x4A10
	  stw       r0, 0x24(r31)

	.loc_0x30:
	  lis       r3, 0x804B
	  addi      r0, r31, 0x24
	  addi      r4, r3, 0x194C
	  li        r3, 0x48
	  stw       r4, 0x4(r31)
	  addi      r5, r4, 0x50
	  lwz       r4, 0x0(r31)
	  stw       r5, 0x0(r4)
	  lwz       r4, 0x0(r31)
	  sub       r0, r0, r4
	  stw       r0, 0x4(r4)
	  bl        -0x13E79C
	  mr.       r0, r3
	  beq-      .loc_0x70
	  bl        0x4CD04
	  mr        r0, r3

	.loc_0x70:
	  stw       r0, 0x10(r31)
	  li        r0, 0
	  mr        r3, r31
	  stw       r0, 0x8(r31)
	  stw       r0, 0xC(r31)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8016267C
 * Size:	00007C
 */
void getStartPosition__Q24Game6MapMgrFR10Vector3<float> i(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  lwz       r5, 0xC(r3)
	  cmplwi    r5, 0
	  beq-      .loc_0x58
	  lfs       f0, 0x38(r5)
	  stfs      f0, 0x0(r31)
	  lfs       f0, 0x3C(r5)
	  stfs      f0, 0x4(r31)
	  lfs       f0, 0x40(r5)
	  stfs      f0, 0x8(r31)
	  lwz       r12, 0x4(r3)
	  lwz       r12, 0x28(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, -0x5AF8(r2)
	  fadds     f0, f0, f1
	  stfs      f0, 0x4(r31)
	  b         .loc_0x68

	.loc_0x58:
	  lfs       f0, -0x5AF4(r2)
	  stfs      f0, 0x0(r31)
	  stfs      f0, 0x4(r31)
	  stfs      f0, 0x8(r31)

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
 * Address:	801626F8
 * Size:	00002C
 */
void Game::MapMgr::getMapRotation(void)
{
	/*
	.loc_0x0:
	  lwz       r3, 0xC(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x24
	  lfs       f1, -0x5AEC(r2)
	  lfs       f0, 0x44(r3)
	  lfs       f2, -0x5AF0(r2)
	  fmuls     f0, f1, f0
	  fmuls     f1, f2, f0
	  blr

	.loc_0x24:
	  lfs       f1, -0x5AF4(r2)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80162724
 * Size:	00001C
 */
void Game::MapMgr::getDemoMatrix(void)
{
	/*
	.loc_0x0:
	  lwz       r3, 0xC(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x14
	  addi      r3, r3, 0xD0
	  blr

	.loc_0x14:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80162740
 * Size:	000704
 */
void getBestAngle__Q24Game6MapMgrFR10Vector3<float> ff(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x180(r1)
	  mflr      r0
	  stw       r0, 0x184(r1)
	  stfd      f31, 0x170(r1)
	  psq_st    f31,0x178(r1),0,0
	  stfd      f30, 0x160(r1)
	  psq_st    f30,0x168(r1),0,0
	  stfd      f29, 0x150(r1)
	  psq_st    f29,0x158(r1),0,0
	  stfd      f28, 0x140(r1)
	  psq_st    f28,0x148(r1),0,0
	  stfd      f27, 0x130(r1)
	  psq_st    f27,0x138(r1),0,0
	  stfd      f26, 0x120(r1)
	  psq_st    f26,0x128(r1),0,0
	  stfd      f25, 0x110(r1)
	  psq_st    f25,0x118(r1),0,0
	  stfd      f24, 0x100(r1)
	  psq_st    f24,0x108(r1),0,0
	  stmw      r26, 0xE8(r1)
	  fmr       f27, f2
	  lfs       f0, -0x5AF4(r2)
	  fmr       f26, f1
	  mr        r27, r3
	  mr        r26, r4
	  fcmpo     cr0, f27, f0
	  bgt-      .loc_0x88
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  subi      r3, r3, 0x1E64
	  li        r4, 0x1E8
	  subi      r5, r5, 0x1E58
	  crclr     6, 0x6
	  bl        -0x138184

	.loc_0x88:
	  lfs       f0, 0x0(r26)
	  mr        r3, r27
	  addi      r4, r1, 0x8
	  stfs      f0, 0x8(r1)
	  lfs       f0, 0x4(r26)
	  stfs      f0, 0xC(r1)
	  lfs       f0, 0x8(r26)
	  stfs      f0, 0x10(r1)
	  lwz       r12, 0x4(r27)
	  lwz       r12, 0x28(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, -0x5AE8(r2)
	  addi      r29, r1, 0x7C
	  lfs       f28, -0x5AF4(r2)
	  lis       r3, 0x8050
	  fadds     f0, f0, f1
	  lfs       f29, -0x5AE4(r2)
	  stfs      f28, 0x7C(r1)
	  mr        r30, r29
	  lfd       f30, -0x5AC8(r2)
	  addi      r26, r3, 0x71A0
	  stfs      f0, 0xC(r1)
	  li        r28, 0
	  lfs       f31, -0x5AE0(r2)
	  lis       r31, 0x4330
	  stfs      f28, 0x80(r1)
	  lfs       f25, -0x5AD8(r2)
	  stfs      f28, 0x84(r1)
	  stfs      f28, 0x88(r1)
	  stfs      f28, 0x8C(r1)
	  stfs      f28, 0x90(r1)
	  stfs      f28, 0x94(r1)
	  stfs      f28, 0x98(r1)
	  stfs      f28, 0x9C(r1)
	  stfs      f28, 0xA0(r1)
	  stfs      f28, 0xA4(r1)
	  stfs      f28, 0xA8(r1)
	  stfs      f28, 0xAC(r1)
	  stfs      f28, 0xB0(r1)
	  stfs      f28, 0xB4(r1)
	  stfs      f28, 0xB8(r1)

	.loc_0x130:
	  xoris     r0, r28, 0x8000
	  stw       r31, 0xC0(r1)
	  fmr       f1, f27
	  stw       r0, 0xC4(r1)
	  lfd       f0, 0xC0(r1)
	  fsubs     f0, f0, f30
	  fmuls     f24, f29, f0
	  bl        -0x92F98
	  frsp      f1, f1
	  fmr       f0, f24
	  fcmpo     cr0, f24, f28
	  fmuls     f6, f26, f1
	  bge-      .loc_0x168
	  fneg      f0, f24

	.loc_0x168:
	  fmuls     f0, f0, f31
	  fcmpo     cr0, f24, f28
	  fctiwz    f0, f0
	  stfd      f0, 0xC8(r1)
	  lwz       r0, 0xCC(r1)
	  rlwinm    r0,r0,3,18,28
	  add       r3, r26, r0
	  lfs       f0, 0x4(r3)
	  fmuls     f4, f26, f0
	  bge-      .loc_0x1BC
	  lfs       f0, -0x5ADC(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fmuls     f0, f24, f0
	  fctiwz    f0, f0
	  stfd      f0, 0xD0(r1)
	  lwz       r0, 0xD4(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r3, r0
	  fneg      f0, f0
	  b         .loc_0x1DC

	.loc_0x1BC:
	  fmuls     f0, f24, f31
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fctiwz    f0, f0
	  stfd      f0, 0xD8(r1)
	  lwz       r0, 0xDC(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r3, r0

	.loc_0x1DC:
	  fmuls     f1, f26, f0
	  lfs       f3, 0x10(r1)
	  lfs       f2, 0xC(r1)
	  li        r0, 0
	  lfs       f0, 0x8(r1)
	  fadds     f5, f4, f3
	  fadds     f4, f6, f2
	  stfs      f25, 0x6C(r1)
	  fadds     f1, f1, f0
	  mr        r3, r27
	  stw       r0, 0x70(r1)
	  addi      r4, r1, 0x54
	  stb       r0, 0x74(r1)
	  stw       r28, 0x70(r1)
	  stfs      f0, 0x54(r1)
	  stfs      f2, 0x58(r1)
	  stfs      f3, 0x5C(r1)
	  stfs      f1, 0x60(r1)
	  stfs      f4, 0x64(r1)
	  stfs      f5, 0x68(r1)
	  stfs      f25, 0x6C(r1)
	  bl        .loc_0x704
	  lfs       f0, 0x78(r1)
	  addi      r28, r28, 0x1
	  cmpwi     r28, 0x10
	  stfs      f0, 0x0(r30)
	  addi      r30, r30, 0x4
	  blt+      .loc_0x130
	  li        r0, 0x2
	  addi      r4, r1, 0x14
	  addi      r3, r1, 0x7C
	  lfs       f1, -0x5AF4(r2)
	  li        r5, 0
	  lfs       f0, -0x5AD4(r2)
	  mtctr     r0

	.loc_0x268:
	  addi      r7, r5, 0xF
	  addi      r11, r5, 0x1
	  rlwinm    r6,r7,28,0,3
	  rlwinm    r0,r5,28,0,3
	  rlwinm    r10,r7,1,31,31
	  rlwinm    r9,r5,1,31,31
	  sub       r7, r6, r10
	  addi      r6, r5, 0x10
	  sub       r0, r0, r9
	  rlwinm    r12,r11,28,0,3
	  rlwinm    r8,r7,4,0,31
	  rlwinm    r28,r11,1,31,31
	  rlwinm    r7,r0,4,0,31
	  rlwinm    r0,r6,28,0,3
	  addi      r11, r5, 0x2
	  add       r10, r8, r10
	  addi      r8, r5, 0x11
	  add       r7, r7, r9
	  sub       r27, r12, r28
	  rlwinm    r12,r10,2,0,29
	  rlwinm    r7,r7,2,0,29
	  rlwinm    r9,r6,1,31,31
	  addi      r10, r5, 0x3
	  rlwinm    r27,r27,4,0,31
	  addi      r6, r5, 0x12
	  sub       r0, r0, r9
	  add       r27, r27, r28
	  lfsx      f3, r3, r12
	  lfsx      f2, r3, r7
	  rlwinm    r0,r0,4,0,31
	  addi      r7, r5, 0x4
	  rlwinm    r12,r27,2,0,29
	  add       r0, r0, r9
	  fadds     f3, f3, f2
	  rlwinm    r0,r0,2,0,29
	  lfsx      f4, r3, r12
	  lfsx      f2, r3, r0
	  rlwinm    r0,r11,28,0,3
	  rlwinm    r12,r11,1,31,31
	  sub       r0, r0, r12
	  fadds     f5, f4, f3
	  rlwinm    r11,r0,4,0,31
	  rlwinm    r0,r8,28,0,3
	  rlwinm    r9,r8,1,31,31
	  fadds     f3, f2, f4
	  sub       r0, r0, r9
	  add       r12, r11, r12
	  rlwinm    r11,r10,28,0,3
	  rlwinm    r8,r0,4,0,31
	  rlwinm    r10,r10,1,31,31
	  rlwinm    r12,r12,2,0,29
	  rlwinm    r0,r6,28,0,3
	  add       r8, r8, r9
	  sub       r9, r11, r10
	  rlwinm    r8,r8,2,0,29
	  rlwinm    r6,r6,1,31,31
	  lfsx      f4, r3, r12
	  rlwinm    r9,r9,4,0,31
	  sub       r0, r0, r6
	  lfsx      f2, r3, r8
	  fadds     f3, f4, f3
	  add       r8, r9, r10
	  rlwinm    r0,r0,4,0,31
	  fdivs     f5, f5, f0
	  rlwinm    r8,r8,2,0,29
	  stfs      f1, 0x0(r4)
	  add       r0, r0, r6
	  rlwinm    r6,r7,28,0,3
	  rlwinm    r7,r7,1,31,31
	  sub       r6, r6, r7
	  rlwinm    r0,r0,2,0,29
	  rlwinm    r6,r6,4,0,31
	  stfs      f5, 0x0(r4)
	  add       r6, r6, r7
	  fadds     f4, f2, f4
	  lfsx      f5, r3, r8
	  rlwinm    r6,r6,2,0,29
	  lfsx      f2, r3, r0
	  fdivs     f6, f3, f0
	  stfs      f1, 0x4(r4)
	  lfsx      f3, r3, r6
	  fadds     f4, f5, f4
	  stfs      f6, 0x4(r4)
	  fadds     f2, f2, f5
	  stfs      f1, 0x8(r4)
	  fdivs     f4, f4, f0
	  fadds     f2, f3, f2
	  stfs      f4, 0x8(r4)
	  stfs      f1, 0xC(r4)
	  fdivs     f2, f2, f0
	  stfs      f2, 0xC(r4)
	  addi      r7, r5, 0x13
	  addi      r11, r5, 0x5
	  rlwinm    r0,r7,28,0,3
	  addi      r6, r5, 0x14
	  rlwinm    r10,r7,1,31,31
	  rlwinm    r12,r11,28,0,3
	  sub       r0, r0, r10
	  rlwinm    r27,r11,1,31,31
	  rlwinm    r7,r0,4,0,31
	  addi      r9, r5, 0x6
	  add       r11, r7, r10
	  rlwinm    r0,r6,28,0,3
	  rlwinm    r7,r6,1,31,31
	  sub       r12, r12, r27
	  rlwinm    r6,r11,2,0,29
	  addi      r8, r5, 0x15
	  sub       r0, r0, r7
	  lfsx      f2, r3, r6
	  rlwinm    r11,r12,4,0,31
	  rlwinm    r12,r9,1,31,31
	  rlwinm    r0,r0,4,0,31
	  fadds     f3, f2, f3
	  add       r0, r0, r7
	  add       r6, r11, r27
	  rlwinm    r11,r6,2,0,29
	  addi      r10, r5, 0x7
	  rlwinm    r0,r0,2,0,29
	  lfsx      f2, r3, r0
	  rlwinm    r0,r9,28,0,3
	  sub       r9, r0, r12
	  lfsx      f4, r3, r11
	  rlwinm    r11,r9,4,0,31
	  rlwinm    r0,r8,28,0,3
	  add       r11, r11, r12
	  fadds     f6, f4, f3
	  rlwinm    r11,r11,2,0,29
	  fadds     f3, f2, f4
	  lfsx      f5, r3, r11
	  rlwinm    r8,r8,1,31,31
	  sub       r0, r0, r8
	  fadds     f4, f5, f3
	  rlwinm    r0,r0,4,0,31
	  fdivs     f3, f6, f0
	  add       r0, r0, r8
	  rlwinm    r0,r0,2,0,29
	  rlwinm    r9,r10,28,0,3
	  rlwinm    r10,r10,1,31,31
	  stfs      f1, 0x10(r4)
	  sub       r9, r9, r10
	  stfs      f3, 0x10(r4)
	  lfsx      f2, r3, r0
	  addi      r6, r5, 0x16
	  rlwinm    r0,r6,28,0,3
	  rlwinm    r8,r9,4,0,31
	  rlwinm    r6,r6,1,31,31
	  addi      r7, r5, 0x8
	  sub       r0, r0, r6
	  add       r8, r8, r10
	  rlwinm    r0,r0,4,0,31
	  fadds     f3, f2, f5
	  add       r0, r0, r6
	  rlwinm    r8,r8,2,0,29
	  rlwinm    r0,r0,2,0,29
	  rlwinm    r6,r7,1,31,31
	  lfsx      f2, r3, r0
	  rlwinm    r0,r7,28,0,3
	  lfsx      f5, r3, r8
	  sub       r0, r0, r6
	  fdivs     f6, f4, f0
	  rlwinm    r0,r0,4,0,31
	  stfs      f1, 0x14(r4)
	  add       r0, r0, r6
	  addi      r5, r5, 0x8
	  rlwinm    r0,r0,2,0,29
	  fadds     f4, f5, f3
	  stfs      f6, 0x14(r4)
	  fadds     f2, f2, f5
	  lfsx      f3, r3, r0
	  stfs      f1, 0x18(r4)
	  fdivs     f4, f4, f0
	  fadds     f2, f3, f2
	  stfs      f4, 0x18(r4)
	  stfs      f1, 0x1C(r4)
	  fdivs     f2, f2, f0
	  stfs      f2, 0x1C(r4)
	  addi      r4, r4, 0x20
	  bdnz+     .loc_0x268
	  lfs       f7, 0x14(r1)
	  li        r0, 0x2
	  lfs       f6, 0x18(r1)
	  li        r3, 0
	  lfs       f5, 0x1C(r1)
	  li        r4, 0
	  lfs       f4, 0x20(r1)
	  lfs       f3, 0x24(r1)
	  lfs       f2, 0x28(r1)
	  lfs       f1, 0x2C(r1)
	  lfs       f0, 0x30(r1)
	  stfs      f7, 0x7C(r1)
	  lfs       f7, 0x34(r1)
	  stfs      f6, 0x80(r1)
	  lfs       f6, 0x38(r1)
	  stfs      f5, 0x84(r1)
	  lfs       f5, 0x3C(r1)
	  stfs      f4, 0x88(r1)
	  lfs       f4, 0x40(r1)
	  stfs      f3, 0x8C(r1)
	  lfs       f3, 0x44(r1)
	  stfs      f2, 0x90(r1)
	  lfs       f2, 0x48(r1)
	  stfs      f1, 0x94(r1)
	  lfs       f1, 0x4C(r1)
	  stfs      f0, 0x98(r1)
	  lfs       f0, 0x50(r1)
	  stfs      f7, 0x9C(r1)
	  lfs       f7, -0x5AD0(r2)
	  stfs      f6, 0xA0(r1)
	  stfs      f5, 0xA4(r1)
	  stfs      f4, 0xA8(r1)
	  stfs      f3, 0xAC(r1)
	  stfs      f2, 0xB0(r1)
	  stfs      f1, 0xB4(r1)
	  stfs      f0, 0xB8(r1)
	  mtctr     r0

	.loc_0x5C4:
	  lfs       f0, 0x0(r29)
	  fcmpo     cr0, f7, f0
	  ble-      .loc_0x5D8
	  fmr       f7, f0
	  mr        r3, r4

	.loc_0x5D8:
	  lfs       f0, 0x4(r29)
	  addi      r4, r4, 0x1
	  fcmpo     cr0, f7, f0
	  ble-      .loc_0x5F0
	  fmr       f7, f0
	  mr        r3, r4

	.loc_0x5F0:
	  lfs       f0, 0x8(r29)
	  addi      r4, r4, 0x1
	  fcmpo     cr0, f7, f0
	  ble-      .loc_0x608
	  fmr       f7, f0
	  mr        r3, r4

	.loc_0x608:
	  lfs       f0, 0xC(r29)
	  addi      r4, r4, 0x1
	  fcmpo     cr0, f7, f0
	  ble-      .loc_0x620
	  fmr       f7, f0
	  mr        r3, r4

	.loc_0x620:
	  lfs       f0, 0x10(r29)
	  addi      r4, r4, 0x1
	  fcmpo     cr0, f7, f0
	  ble-      .loc_0x638
	  fmr       f7, f0
	  mr        r3, r4

	.loc_0x638:
	  lfs       f0, 0x14(r29)
	  addi      r4, r4, 0x1
	  fcmpo     cr0, f7, f0
	  ble-      .loc_0x650
	  fmr       f7, f0
	  mr        r3, r4

	.loc_0x650:
	  lfs       f0, 0x18(r29)
	  addi      r4, r4, 0x1
	  fcmpo     cr0, f7, f0
	  ble-      .loc_0x668
	  fmr       f7, f0
	  mr        r3, r4

	.loc_0x668:
	  lfs       f0, 0x1C(r29)
	  addi      r4, r4, 0x1
	  fcmpo     cr0, f7, f0
	  ble-      .loc_0x680
	  fmr       f7, f0
	  mr        r3, r4

	.loc_0x680:
	  addi      r29, r29, 0x20
	  addi      r4, r4, 0x1
	  bdnz+     .loc_0x5C4
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0xDC(r1)
	  lfd       f1, -0x5AC8(r2)
	  stw       r0, 0xD8(r1)
	  lfs       f2, -0x5AE4(r2)
	  lfd       f0, 0xD8(r1)
	  fsubs     f0, f0, f1
	  fmuls     f1, f2, f0
	  psq_l     f31,0x178(r1),0,0
	  lfd       f31, 0x170(r1)
	  psq_l     f30,0x168(r1),0,0
	  lfd       f30, 0x160(r1)
	  psq_l     f29,0x158(r1),0,0
	  lfd       f29, 0x150(r1)
	  psq_l     f28,0x148(r1),0,0
	  lfd       f28, 0x140(r1)
	  psq_l     f27,0x138(r1),0,0
	  lfd       f27, 0x130(r1)
	  psq_l     f26,0x128(r1),0,0
	  lfd       f26, 0x120(r1)
	  psq_l     f25,0x118(r1),0,0
	  lfd       f25, 0x110(r1)
	  psq_l     f24,0x108(r1),0,0
	  lfd       f24, 0x100(r1)
	  lmw       r26, 0xE8(r1)
	  lwz       r0, 0x184(r1)
	  mtlr      r0
	  addi      r1, r1, 0x180
	  blr

	.loc_0x704:
	*/
}

/*
 * --INFO--
 * Address:	80162E44
 * Size:	0002A4
 */
void Game::MapMgr::checkBeamCollision((Game::MapMgr::BeamCollisionArg&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x110(r1)
	  mflr      r0
	  stw       r0, 0x114(r1)
	  stfd      f31, 0x100(r1)
	  psq_st    f31,0x108(r1),0,0
	  stfd      f30, 0xF0(r1)
	  psq_st    f30,0xF8(r1),0,0
	  stfd      f29, 0xE0(r1)
	  psq_st    f29,0xE8(r1),0,0
	  stmw      r26, 0xC8(r1)
	  li        r0, 0
	  lfs       f1, -0x5AC0(r2)
	  stb       r0, 0x20(r4)
	  mr        r27, r4
	  lfs       f0, -0x5AF4(r2)
	  mr        r26, r3
	  stfs      f1, 0x24(r4)
	  lfs       f2, 0x10(r4)
	  lfs       f1, 0x4(r4)
	  lfs       f3, 0x14(r4)
	  fsubs     f4, f2, f1
	  lfs       f2, 0x8(r4)
	  lfs       f1, 0xC(r4)
	  fsubs     f5, f3, f2
	  lfs       f7, 0x0(r4)
	  fmuls     f2, f4, f4
	  fsubs     f3, f1, f7
	  fmuls     f6, f5, f5
	  fmadds    f1, f3, f3, f2
	  fadds     f2, f6, f1
	  fcmpo     cr0, f2, f0
	  ble-      .loc_0x90
	  ble-      .loc_0x94
	  fsqrte    f0, f2
	  fmuls     f2, f0, f2
	  b         .loc_0x94

	.loc_0x90:
	  fmr       f2, f0

	.loc_0x94:
	  lfs       f0, -0x5AF4(r2)
	  fcmpo     cr0, f2, f0
	  ble-      .loc_0xB8
	  lfs       f0, -0x5ABC(r2)
	  fdivs     f0, f0, f2
	  fmuls     f3, f3, f0
	  fmuls     f4, f4, f0
	  fmuls     f5, f5, f0
	  b         .loc_0xBC

	.loc_0xB8:
	  fmr       f2, f0

	.loc_0xBC:
	  lfs       f29, -0x5AF4(r2)
	  fcmpu     cr0, f29, f2
	  beq-      .loc_0x278
	  lfs       f0, -0x5AB8(r2)
	  lis       r3, 0x8050
	  lfs       f1, 0x18(r27)
	  addi      r29, r3, 0x71A0
	  fdivs     f6, f2, f0
	  lfs       f30, -0x5ABC(r2)
	  stfs      f7, 0x14(r1)
	  addi      r30, r1, 0x14
	  lfs       f31, -0x5AB4(r2)
	  addi      r31, r1, 0x8
	  lfs       f0, 0x4(r27)
	  fmuls     f2, f3, f6
	  fmuls     f3, f4, f6
	  li        r28, 0
	  stfs      f0, 0x18(r1)
	  fmuls     f4, f5, f6
	  lfs       f0, 0x8(r27)
	  stfs      f0, 0x1C(r1)
	  stfs      f1, 0x20(r1)

	.loc_0x114:
	  stfs      f2, 0x8(r1)
	  li        r5, 0
	  lfs       f0, 0x800(r29)
	  li        r0, -0x1
	  stfs      f3, 0xC(r1)
	  mr        r3, r26
	  fmr       f1, f30
	  addi      r4, r1, 0x24
	  stfs      f4, 0x10(r1)
	  lfs       f2, 0x0(r27)
	  stfs      f2, 0x14(r1)
	  lfs       f2, 0x4(r27)
	  stfs      f2, 0x18(r1)
	  lfs       f2, 0x8(r27)
	  stfs      f2, 0x1C(r1)
	  stw       r30, 0x24(r1)
	  stw       r31, 0x28(r1)
	  stfs      f30, 0x2C(r1)
	  stfs      f29, 0x30(r1)
	  stw       r5, 0x34(r1)
	  stw       r5, 0x68(r1)
	  stb       r5, 0x98(r1)
	  stb       r5, 0x3D(r1)
	  stb       r5, 0x3C(r1)
	  stw       r5, 0x6C(r1)
	  stw       r5, 0x38(r1)
	  stb       r5, 0xB4(r1)
	  stw       r5, 0xB8(r1)
	  stfs      f0, 0x50(r1)
	  stfs      f31, 0x54(r1)
	  stw       r0, 0xBC(r1)
	  stw       r5, 0x70(r1)
	  stb       r5, 0x3E(r1)
	  lwz       r12, 0x4(r26)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, -0x6BE0(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x1C0
	  lfs       f1, -0x5ABC(r2)
	  addi      r4, r1, 0x24
	  bl        0x62BB8

	.loc_0x1C0:
	  lwz       r0, 0x6C(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x1E4
	  lwz       r0, 0x68(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x1E4
	  lwz       r0, 0x70(r1)
	  cmplwi    r0, 0
	  beq-      .loc_0x1F0

	.loc_0x1E4:
	  li        r0, 0x1
	  stb       r0, 0x20(r27)
	  b         .loc_0x220

	.loc_0x1F0:
	  lfs       f0, 0x14(r1)
	  addi      r28, r28, 0x1
	  cmpwi     r28, 0x1E
	  stfs      f0, 0x0(r27)
	  lfs       f0, 0x18(r1)
	  stfs      f0, 0x4(r27)
	  lfs       f0, 0x1C(r1)
	  stfs      f0, 0x8(r27)
	  lfs       f2, 0x8(r1)
	  lfs       f3, 0xC(r1)
	  lfs       f4, 0x10(r1)
	  blt+      .loc_0x114

	.loc_0x220:
	  lfs       f1, 0x10(r27)
	  lfs       f0, 0x4(r27)
	  lfs       f3, 0x14(r27)
	  fsubs     f4, f1, f0
	  lfs       f2, 0x8(r27)
	  lfs       f1, 0xC(r27)
	  lfs       f0, 0x0(r27)
	  fsubs     f2, f3, f2
	  fmuls     f3, f4, f4
	  fsubs     f1, f1, f0
	  lfs       f0, -0x5AF4(r2)
	  fmuls     f2, f2, f2
	  fmadds    f1, f1, f1, f3
	  fadds     f1, f2, f1
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x270
	  ble-      .loc_0x274
	  fsqrte    f0, f1
	  fmuls     f1, f0, f1
	  b         .loc_0x274

	.loc_0x270:
	  fmr       f1, f0

	.loc_0x274:
	  stfs      f1, 0x24(r27)

	.loc_0x278:
	  psq_l     f31,0x108(r1),0,0
	  lfd       f31, 0x100(r1)
	  psq_l     f30,0xF8(r1),0,0
	  lfd       f30, 0xF0(r1)
	  psq_l     f29,0xE8(r1),0,0
	  lfd       f29, 0xE0(r1)
	  lmw       r26, 0xC8(r1)
	  lwz       r0, 0x114(r1)
	  mtlr      r0
	  addi      r1, r1, 0x110
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801630E8
 * Size:	000804
 */
void Game::ShapeMapMgr::load((Game::ShapeMapMgr::LoadArg&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x2B30(r1)
	  mflr      r0
	  lis       r5, 0x8048
	  stw       r0, 0x2B34(r1)
	  stmw      r26, 0x2B18(r1)
	  mr        r31, r3
	  mr        r29, r4
	  subi      r30, r5, 0x1E70
	  subi      r4, r2, 0x5B00
	  li        r5, 0
	  lwz       r3, -0x6514(r13)
	  bl        0x2C0248
	  lwz       r3, -0x6514(r13)
	  subi      r4, r2, 0x5AB0
	  li        r5, 0
	  bl        0x2C0238
	  lwz       r5, 0x0(r29)
	  addi      r3, r1, 0x810
	  addi      r4, r30, 0x24
	  crclr     6, 0x6
	  bl        -0x9BD00
	  addi      r3, r1, 0x810
	  li        r4, 0x1
	  li        r5, 0
	  li        r6, 0x1
	  bl        -0x14801C
	  cmplwi    r3, 0
	  bne-      .loc_0xC0
	  li        r0, 0xC
	  li        r3, 0
	  mtctr     r0

	.loc_0x7C:
	  addi      r3, r3, 0x8
	  bdnz+     .loc_0x7C
	  subfic    r0, r3, 0x64
	  mtctr     r0
	  cmpwi     r3, 0x64
	  bge-      .loc_0x98

	.loc_0x94:
	  bdnz-     .loc_0x94

	.loc_0x98:
	  lwz       r5, 0x0(r29)
	  addi      r3, r1, 0x810
	  addi      r4, r30, 0x30
	  crclr     6, 0x6
	  bl        -0x9BD58
	  addi      r3, r1, 0x810
	  li        r4, 0x1
	  li        r5, 0
	  li        r6, 0x1
	  bl        -0x148074

	.loc_0xC0:
	  cmplwi    r3, 0
	  bne-      .loc_0xDC
	  addi      r3, r30, 0xC
	  addi      r5, r30, 0x18
	  li        r4, 0x2D0
	  crclr     6, 0x6
	  bl        -0x138B80

	.loc_0xDC:
	  lwz       r3, -0x6514(r13)
	  subi      r4, r2, 0x5AB0
	  bl        0x2C0198
	  lwz       r3, -0x6514(r13)
	  addi      r4, r30, 0x3C
	  li        r5, 0
	  bl        0x2C0180
	  addi      r3, r30, 0x48
	  li        r4, 0
	  bl        -0x1401D0
	  mr.       r27, r3
	  li        r4, 0
	  beq-      .loc_0x120
	  lwz       r0, 0x0(r29)
	  cmplwi    r0, 0
	  beq-      .loc_0x120
	  li        r4, 0x1

	.loc_0x120:
	  rlwinm.   r0,r4,0,24,31
	  bne-      .loc_0x13C
	  addi      r3, r30, 0xC
	  addi      r5, r30, 0x18
	  li        r4, 0x2D9
	  crclr     6, 0x6
	  bl        -0x138BE0

	.loc_0x13C:
	  mr        r3, r27
	  lis       r4, 0x2004
	  bl        -0xF3998
	  lis       r4, 0x4
	  mr        r27, r3
	  bl        -0xDF960
	  mr        r3, r27
	  bl        -0xDF810
	  li        r3, 0x14
	  bl        -0x13F3A4
	  mr.       r0, r3
	  beq-      .loc_0x180
	  mr        r4, r27
	  lis       r5, 0x2
	  li        r6, 0x2
	  bl        0x2DAF78
	  mr        r0, r3

	.loc_0x180:
	  stw       r0, 0x34(r31)
	  li        r4, 0x200
	  lwz       r3, 0x34(r31)
	  lwz       r3, 0x8(r3)
	  bl        -0xFCBA0
	  lwz       r3, 0x34(r31)
	  lwz       r3, 0x8(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x34(r31)
	  lwz       r3, 0x8(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x34(r31)
	  lwz       r3, 0x8(r3)
	  bl        -0xFC990
	  lwz       r3, 0x34(r31)
	  lwz       r3, 0x8(r3)
	  bl        -0xFCACC
	  lwz       r3, -0x6514(r13)
	  addi      r4, r30, 0x3C
	  bl        0x2C0098
	  li        r3, 0x40
	  bl        -0x13F430
	  mr.       r0, r3
	  beq-      .loc_0x204
	  li        r4, 0x2
	  bl        -0x3F2CC
	  mr        r0, r3

	.loc_0x204:
	  stw       r0, -0x6E28(r13)
	  li        r27, 0

	.loc_0x20C:
	  addi      r3, r1, 0x610
	  addi      r4, r30, 0x54
	  addi      r5, r27, 0x1
	  crclr     6, 0x6
	  bl        -0x9BECC
	  addi      r3, r1, 0x610
	  li        r4, 0
	  bl        -0x1402F8
	  mr.       r4, r3
	  beq-      .loc_0x248
	  lwz       r3, -0x6E28(r13)
	  bl        -0x3EF88
	  addi      r27, r27, 0x1
	  cmpwi     r27, 0xA
	  blt+      .loc_0x20C

	.loc_0x248:
	  lwz       r3, 0x34(r31)
	  li        r4, 0
	  bl        0x2DB0E0
	  li        r0, 0
	  li        r27, 0
	  stw       r0, 0x24(r31)
	  stw       r0, 0x2C(r31)

	.loc_0x264:
	  addi      r3, r1, 0x110
	  addi      r4, r30, 0x60
	  addi      r5, r27, 0x1
	  crclr     6, 0x6
	  bl        -0x9BF24
	  addi      r3, r1, 0x110
	  li        r4, 0
	  bl        -0x140350
	  cmplwi    r3, 0
	  beq-      .loc_0x2A4
	  lwz       r3, 0x24(r31)
	  addi      r27, r27, 0x1
	  cmpwi     r27, 0x64
	  addi      r0, r3, 0x1
	  stw       r0, 0x24(r31)
	  blt+      .loc_0x264

	.loc_0x2A4:
	  lwz       r0, 0x24(r31)
	  cmpwi     r0, 0
	  ble-      .loc_0x390
	  stw       r0, 0x2C(r31)
	  lwz       r28, 0x24(r31)
	  rlwinm    r3,r28,4,0,27
	  addi      r3, r3, 0x10
	  bl        -0x13F3FC
	  lis       r4, 0x8043
	  mr        r7, r28
	  addi      r4, r4, 0x4134
	  li        r5, 0
	  li        r6, 0x10
	  bl        -0xA19D0
	  stw       r3, 0x28(r31)
	  lwz       r28, 0x2C(r31)
	  mulli     r3, r28, 0xC
	  addi      r3, r3, 0x10
	  bl        -0x13F428
	  lis       r4, 0x8016
	  mr        r7, r28
	  addi      r4, r4, 0x38EC
	  li        r5, 0
	  li        r6, 0xC
	  bl        -0xA19FC
	  li        r27, 0
	  stw       r3, 0x30(r31)
	  mr        r28, r27
	  li        r26, 0
	  b         .loc_0x384

	.loc_0x31C:
	  addi      r3, r1, 0x10
	  addi      r4, r30, 0x60
	  addi      r5, r26, 0x1
	  crclr     6, 0x6
	  bl        -0x9BFDC
	  addi      r3, r1, 0x10
	  li        r4, 0
	  bl        -0x140408
	  lwz       r4, 0x34(r31)
	  lwz       r0, 0x28(r31)
	  lwz       r5, 0x8(r4)
	  mr        r4, r3
	  add       r3, r0, r27
	  lwz       r5, 0x4(r5)
	  bl        0x2D0BE4
	  lwz       r3, 0x30(r31)
	  lwz       r0, 0x28(r31)
	  add       r3, r3, r28
	  lwz       r12, 0x0(r3)
	  add       r4, r0, r27
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  addi      r27, r27, 0x10
	  addi      r28, r28, 0xC
	  addi      r26, r26, 0x1

	.loc_0x384:
	  lwz       r0, 0x24(r31)
	  cmpw      r26, r0
	  blt+      .loc_0x31C

	.loc_0x390:
	  lwz       r3, 0x34(r31)
	  lwz       r3, 0x8(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lwz       r5, 0x4(r29)
	  addi      r3, r1, 0x410
	  addi      r4, r30, 0x70
	  crclr     6, 0x6
	  bl        -0x9C068
	  li        r0, 0
	  addi      r3, r1, 0x410
	  stw       r0, 0x8(r1)
	  li        r4, 0
	  li        r5, 0
	  li        r6, 0
	  li        r7, 0
	  li        r8, 0x2
	  li        r9, 0
	  li        r10, 0
	  bl        -0x144344
	  mr.       r28, r3
	  beq-      .loc_0x438
	  mr        r4, r28
	  addi      r3, r1, 0x26F0
	  li        r5, -0x1
	  bl        0x2B2414
	  li        r0, 0x1
	  cmpwi     r0, 0x1
	  stw       r0, 0x26FC(r1)
	  bne-      .loc_0x418
	  li        r0, 0
	  stw       r0, 0x2B04(r1)

	.loc_0x418:
	  lwz       r3, -0x6C18(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x430
	  bl        0x51B60
	  addi      r4, r1, 0x26F0
	  bl        -0x43F74

	.loc_0x430:
	  mr        r3, r28
	  bl        -0x13F444

	.loc_0x438:
	  lwz       r5, 0x0(r29)
	  addi      r3, r1, 0x210
	  addi      r4, r30, 0x80
	  crclr     6, 0x6
	  bl        -0x9C0F8
	  lwz       r5, -0x77D4(r13)
	  addi      r3, r1, 0x210
	  li        r4, 0x1
	  li        r6, 0x2
	  bl        -0x148414
	  mr.       r28, r3
	  beq-      .loc_0x59C
	  mr        r4, r28
	  addi      r3, r30, 0x90
	  bl        -0x140540
	  mr.       r26, r3
	  bne-      .loc_0x490
	  addi      r3, r30, 0xC
	  addi      r5, r30, 0x18
	  li        r4, 0x377
	  crclr     6, 0x6
	  bl        -0x138F34

	.loc_0x490:
	  lwz       r3, -0x6514(r13)
	  addi      r4, r30, 0x9C
	  li        r5, 0
	  bl        0x2BFDD8
	  mr        r4, r26
	  addi      r3, r1, 0x22D0
	  li        r5, -0x1
	  bl        0x2B2364
	  addi      r3, r31, 0x38
	  addi      r4, r1, 0x22D0
	  bl        0x2B6AC0
	  lwz       r3, -0x6514(r13)
	  addi      r4, r30, 0x9C
	  bl        0x2BFDB8
	  mr        r4, r28
	  addi      r3, r30, 0xAC
	  bl        -0x1405A0
	  mr.       r26, r3
	  beq-      .loc_0x52C
	  lwz       r3, -0x6514(r13)
	  addi      r4, r30, 0xBC
	  li        r5, 0
	  bl        0x2BFD8C
	  mr        r4, r26
	  addi      r3, r1, 0x1EB0
	  li        r5, -0x1
	  bl        0x2B2318
	  li        r0, 0x1
	  cmpwi     r0, 0x1
	  stw       r0, 0x1EBC(r1)
	  bne-      .loc_0x514
	  li        r0, 0
	  stw       r0, 0x22C4(r1)

	.loc_0x514:
	  lwz       r3, 0x10(r31)
	  addi      r4, r1, 0x1EB0
	  bl        0x4C698
	  lwz       r3, -0x6514(r13)
	  addi      r4, r30, 0xBC
	  bl        0x2BFD54

	.loc_0x52C:
	  mr        r4, r28
	  addi      r3, r30, 0xC8
	  bl        -0x140604
	  mr.       r26, r3
	  beq-      .loc_0x584
	  li        r3, 0x28
	  bl        -0x13F788
	  mr.       r27, r3
	  beq-      .loc_0x558
	  bl        0x2B8E44
	  mr        r27, r3

	.loc_0x558:
	  mr        r4, r26
	  addi      r3, r1, 0x1A90
	  li        r5, -0x1
	  bl        0x2B22AC
	  mr        r3, r27
	  addi      r4, r1, 0x1A90
	  bl        0x2B9108
	  lwz       r4, 0x50(r31)
	  mr        r3, r27
	  lwz       r4, 0x1C(r4)
	  bl        0x2B9214

	.loc_0x584:
	  mr        r3, r28
	  lwz       r12, 0x0(r28)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x720

	.loc_0x59C:
	  li        r0, 0
	  li        r4, 0
	  stw       r0, 0x8(r1)
	  li        r5, 0
	  li        r6, 0
	  li        r7, 0
	  lwz       r3, 0xC(r29)
	  li        r8, 0x2
	  li        r9, 0
	  li        r10, 0
	  bl        -0x144524
	  mr        r27, r3
	  lwz       r3, -0x6514(r13)
	  addi      r4, r30, 0x9C
	  li        r5, 0
	  bl        0x2BFC9C
	  mr        r4, r27
	  addi      r3, r1, 0x1670
	  li        r5, -0x1
	  bl        0x2B2228
	  addi      r3, r31, 0x38
	  addi      r4, r1, 0x1670
	  bl        0x2B6984
	  lwz       r3, -0x6514(r13)
	  addi      r4, r30, 0x9C
	  bl        0x2BFC7C
	  mr        r3, r27
	  bl        -0x13F618
	  lwz       r3, 0x10(r29)
	  cmplwi    r3, 0
	  beq-      .loc_0x69C
	  li        r0, 0
	  li        r4, 0
	  stw       r0, 0x8(r1)
	  li        r5, 0
	  li        r6, 0
	  li        r7, 0
	  li        r8, 0x2
	  li        r9, 0
	  li        r10, 0
	  bl        -0x14459C
	  mr        r27, r3
	  lwz       r3, -0x6514(r13)
	  addi      r4, r30, 0xBC
	  li        r5, 0
	  bl        0x2BFC24
	  mr        r4, r27
	  addi      r3, r1, 0x1250
	  li        r5, -0x1
	  bl        0x2B21B0
	  li        r0, 0x1
	  cmpwi     r0, 0x1
	  stw       r0, 0x125C(r1)
	  bne-      .loc_0x67C
	  li        r0, 0
	  stw       r0, 0x1664(r1)

	.loc_0x67C:
	  lwz       r3, 0x10(r31)
	  addi      r4, r1, 0x1250
	  bl        0x4C530
	  lwz       r3, -0x6514(r13)
	  addi      r4, r30, 0xBC
	  bl        0x2BFBEC
	  mr        r3, r27
	  bl        -0x13F6A8

	.loc_0x69C:
	  lwz       r3, 0x14(r29)
	  cmplwi    r3, 0
	  beq-      .loc_0x720
	  li        r0, 0
	  li        r4, 0
	  stw       r0, 0x8(r1)
	  li        r5, 0
	  li        r6, 0
	  li        r7, 0
	  li        r8, 0x2
	  li        r9, 0
	  li        r10, 0
	  bl        -0x14462C
	  mr        r27, r3
	  li        r3, 0x28
	  bl        -0x13F91C
	  mr.       r28, r3
	  beq-      .loc_0x6EC
	  bl        0x2B8CB0
	  mr        r28, r3

	.loc_0x6EC:
	  mr        r4, r27
	  addi      r3, r1, 0xE30
	  li        r5, -0x1
	  bl        0x2B2118
	  mr        r3, r28
	  addi      r4, r1, 0xE30
	  bl        0x2B8F74
	  lwz       r4, 0x50(r31)
	  mr        r3, r28
	  lwz       r4, 0x1C(r4)
	  bl        0x2B9080
	  mr        r3, r27
	  bl        -0x13F72C

	.loc_0x720:
	  lwz       r3, 0x1C(r29)
	  cmplwi    r3, 0
	  beq-      .loc_0x7E4
	  li        r0, 0
	  li        r4, 0
	  stw       r0, 0x8(r1)
	  li        r5, 0
	  li        r6, 0
	  li        r7, 0
	  li        r8, 0x2
	  li        r9, 0
	  li        r10, 0
	  bl        -0x1446B0
	  mr        r27, r3
	  lwz       r3, -0x6514(r13)
	  addi      r4, r30, 0xD4
	  li        r5, 0
	  bl        0x2BFB10
	  mr        r4, r27
	  addi      r3, r1, 0xA10
	  li        r5, -0x1
	  bl        0x2B209C
	  li        r0, 0x1
	  cmpwi     r0, 0x1
	  stw       r0, 0xA1C(r1)
	  bne-      .loc_0x790
	  li        r0, 0
	  stw       r0, 0xE24(r1)

	.loc_0x790:
	  lwz       r0, 0x8(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x7B8
	  li        r3, 0x24
	  bl        -0x13F9E4
	  mr.       r0, r3
	  beq-      .loc_0x7B4
	  bl        0x10A00
	  mr        r0, r3

	.loc_0x7B4:
	  stw       r0, 0x8(r31)

	.loc_0x7B8:
	  lwz       r3, 0x8(r31)
	  addi      r4, r1, 0xA10
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x30(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, -0x6514(r13)
	  addi      r4, r30, 0xD4
	  bl        0x2BFAA4
	  mr        r3, r27
	  bl        -0x13F7F0

	.loc_0x7E4:
	  lwz       r3, -0x6514(r13)
	  subi      r4, r2, 0x5B00
	  bl        0x2BFA90
	  lmw       r26, 0x2B18(r1)
	  lwz       r0, 0x2B34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x2B30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801638EC
 * Size:	00003C
 */
void Sys::MatLoopAnimator::__ct(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        0x2D0A54
	  lis       r4, 0x804F
	  mr        r3, r31
	  subi      r0, r4, 0x3B74
	  stw       r0, 0x0(r31)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80163928
 * Size:	000034
 */
void Game::MapMgr::findWater((Sys::Sphere&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x10(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x20
	  bl        0x4BF2C
	  b         .loc_0x24

	.loc_0x20:
	  li        r3, 0

	.loc_0x24:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8016395C
 * Size:	00009C
 */
void Game::ShapeMapMgr::do_update(void)
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
	  lwz       r3, -0x6C18(r13)
	  bl        0x5164C
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x80
	  li        r30, 0
	  li        r31, 0
	  b         .loc_0x50

	.loc_0x38:
	  lwz       r0, 0x30(r29)
	  lfs       f1, -0x5AB8(r2)
	  add       r3, r0, r31
	  bl        0x2D0BAC
	  addi      r31, r31, 0xC
	  addi      r30, r30, 0x1

	.loc_0x50:
	  lwz       r0, 0x24(r29)
	  cmpw      r30, r0
	  blt+      .loc_0x38
	  lwz       r3, 0x34(r29)
	  lwz       r3, 0x8(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x34(r29)
	  lwz       r3, 0x8(r3)
	  bl        -0xFCD6C

	.loc_0x80:
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
 * Address:	801639F8
 * Size:	000050
 */
void Game::MapMgr::update(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        0x40
	  lwz       r3, 0x10(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x28
	  bl        0x4B370

	.loc_0x28:
	  mr        r3, r31
	  lwz       r12, 0x4(r31)
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
 * Address:	80163A48
 * Size:	000004
 */
void Game::MapMgr::do_update(void)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80163A4C
 * Size:	000018
 */
void Game::MapMgr::clearPerfMonitor(void)
{
	/*
	.loc_0x0:
	  li        r0, 0
	  stw       r0, 0x14(r3)
	  stw       r0, 0x18(r3)
	  stw       r0, 0x1C(r3)
	  stw       r0, 0x20(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000258
 */
void Game::MapMgr::draw2d((Graphics&))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80163A64
 * Size:	0000AC
 */
void Game::ShapeMapMgr::drawCollision((Graphics&, Sys::Sphere&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r5
	  stw       r30, 0x18(r1)
	  mr        r30, r4
	  li        r4, 0
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  mr        r3, r30
	  bl        0x2C1D8C
	  li        r0, 0x32
	  li        r5, 0xFF
	  stb       r0, 0x84(r30)
	  li        r0, 0xA
	  li        r3, 0x20
	  li        r4, 0
	  stb       r5, 0x85(r30)
	  stb       r0, 0x86(r30)
	  stb       r5, 0x87(r30)
	  bl        -0x7DFD8
	  lwz       r3, 0x50(r29)
	  mr        r4, r31
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x50(r29)
	  cmplwi    r3, 0
	  lwz       r5, 0x18(r4)
	  lwz       r6, 0x1C(r4)
	  beq-      .loc_0x90
	  mr        r4, r30
	  li        r7, 0x1
	  bl        0x2B5E88

	.loc_0x90:
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
 * Address:	80163B10
 * Size:	00002C
 */
void Game::ShapeMapMgr::createTriangles((Sys::CreateTriangleArg&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwzu      r12, 0x38(r3)
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
 * Address:	80163B3C
 * Size:	000030
 */
void MapCollision::createTriangles(Sys::CreateTriangleArg&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x18(r3)
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
 * Address:	80163B6C
 * Size:	000004
 */
void Sys::TriDivider::createTriangles((Sys::CreateTriangleArg&))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80163B70
 * Size:	00008C
 */
void getMinY__Q24Game11ShapeMapMgrFR10Vector3<float>(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  lfs       f1, -0x5AF4(r2)
	  li        r5, 0
	  stw       r0, 0x44(r1)
	  li        r0, 0x1
	  lfs       f3, -0x5AD0(r2)
	  lfs       f2, -0x5AA8(r2)
	  lfs       f0, -0x5ABC(r2)
	  stw       r5, 0x1C(r1)
	  stfs      f3, 0x20(r1)
	  stfs      f2, 0x24(r1)
	  stw       r5, 0x18(r1)
	  stfs      f1, 0x28(r1)
	  stfs      f0, 0x2C(r1)
	  stfs      f1, 0x30(r1)
	  stb       r0, 0x14(r1)
	  stb       r5, 0x15(r1)
	  lfs       f0, 0x0(r4)
	  stfs      f0, 0x8(r1)
	  lfs       f0, 0x4(r4)
	  stfs      f0, 0xC(r1)
	  lfs       f0, 0x8(r4)
	  addi      r4, r1, 0x8
	  stfs      f0, 0x10(r1)
	  stb       r5, 0x14(r1)
	  lwzu      r12, 0x38(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x44(r1)
	  lfs       f1, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80163BFC
 * Size:	00002C
 */
void Game::ShapeMapMgr::getCurrTri((Game::CurrTriInfo&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwzu      r12, 0x38(r3)
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
 * Address:	80163C28
 * Size:	000038
 */
void Game::ShapeMapMgr::doAnimation(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x10(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x28
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x64(r12)
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
 * Address:	80163C60
 * Size:	000060
 */
void Game::ShapeMapMgr::doSetView((int))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  rlwinm    r4,r4,0,16,31
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  lwz       r3, 0x34(r3)
	  bl        0x2DB43C
	  lwz       r3, 0x10(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0x48
	  lwz       r12, 0x0(r3)
	  mr        r4, r31
	  lwz       r12, 0x6C(r12)
	  mtctr     r12
	  bctrl

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
 * Address:	80163CC0
 * Size:	00004C
 */
void Game::ShapeMapMgr::doViewCalc(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r3, 0x10(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x30
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x70(r12)
	  mtctr     r12
	  bctrl

	.loc_0x30:
	  lwz       r3, 0x34(r31)
	  bl        0x2DB364
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80163D0C
 * Size:	0000C0
 */
void Game::ShapeMapMgr::doEntry(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  subi      r4, r2, 0x5AA4
	  li        r5, 0x1
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r6, -0x6514(r13)
	  lwz       r3, 0x28(r6)
	  bl        0x2C6DC8
	  lwz       r0, -0x6C18(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0x84
	  lwz       r3, 0x10(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x50
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x68(r12)
	  mtctr     r12
	  bctrl

	.loc_0x50:
	  lwz       r3, -0x6C18(r13)
	  li        r4, 0x2
	  bl        0x512DC
	  lwz       r3, 0x34(r31)
	  lwz       r3, 0x8(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, -0x6C18(r13)
	  li        r4, 0
	  bl        0x512B8
	  b         .loc_0x9C

	.loc_0x84:
	  lwz       r3, 0x34(r31)
	  lwz       r3, 0x8(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl

	.loc_0x9C:
	  lwz       r3, -0x6514(r13)
	  subi      r4, r2, 0x5AA4
	  lwz       r3, 0x28(r3)
	  bl        0x2C6D48
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80163DCC
 * Size:	000214
 */
void Game::ShapeMapMgr::findRayIntersection((Sys::RayIntersectInfo&))
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
	  stfd      f28, 0x80(r1)
	  psq_st    f28,0x88(r1),0,0
	  stfd      f27, 0x70(r1)
	  psq_st    f27,0x78(r1),0,0
	  stfd      f26, 0x60(r1)
	  psq_st    f26,0x68(r1),0,0
	  stfd      f25, 0x50(r1)
	  psq_st    f25,0x58(r1),0,0
	  stmw      r25, 0x34(r1)
	  mr        r26, r4
	  lfs       f0, -0x5AF4(r2)
	  lfs       f30, 0x4(r4)
	  mr        r25, r3
	  lfs       f6, 0x10(r4)
	  lfs       f31, 0x0(r4)
	  fsubs     f1, f30, f6
	  lfs       f7, 0xC(r4)
	  lfs       f29, 0x8(r4)
	  lfs       f5, 0x14(r4)
	  fsubs     f3, f31, f7
	  fmuls     f1, f1, f1
	  fsubs     f2, f29, f5
	  fmadds    f1, f3, f3, f1
	  fmuls     f2, f2, f2
	  fadds     f4, f2, f1
	  fcmpo     cr0, f4, f0
	  ble-      .loc_0xA0
	  ble-      .loc_0xA4
	  fsqrte    f0, f4
	  fmuls     f4, f0, f4
	  b         .loc_0xA4

	.loc_0xA0:
	  fmr       f4, f0

	.loc_0xA4:
	  fadds     f2, f31, f7
	  lfs       f3, -0x5A9C(r2)
	  fadds     f1, f30, f6
	  stfs      f4, 0x20(r1)
	  fadds     f0, f29, f5
	  addi      r4, r1, 0x14
	  fmuls     f2, f2, f3
	  fmuls     f1, f1, f3
	  fmuls     f0, f0, f3
	  stfs      f2, 0x14(r1)
	  stfs      f1, 0x18(r1)
	  stfs      f0, 0x1C(r1)
	  lwz       r3, 0x50(r25)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lfs       f25, -0x5A98(r2)
	  mr        r29, r3
	  li        r28, 0
	  b         .loc_0x1B0

	.loc_0xF8:
	  li        r27, 0
	  li        r30, 0
	  b         .loc_0x1A0

	.loc_0x104:
	  lwz       r4, 0x24(r29)
	  mr        r3, r26
	  lwz       r5, 0x50(r25)
	  lwzx      r0, r4, r30
	  lwz       r4, 0x1C(r5)
	  mulli     r0, r0, 0x60
	  lwz       r4, 0x24(r4)
	  add       r31, r4, r0
	  mr        r4, r31
	  bl        0x2B4248
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x198
	  lfs       f1, 0x18(r26)
	  mr        r3, r31
	  mr        r4, r26
	  addi      r5, r1, 0x8
	  bl        0x2B2D38
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x198
	  lfs       f4, 0xC(r1)
	  li        r28, 0x1
	  lfs       f3, 0x8(r1)
	  fsubs     f0, f4, f30
	  lfs       f5, 0x10(r1)
	  fsubs     f1, f3, f31
	  fsubs     f2, f5, f29
	  fmuls     f0, f0, f0
	  fmadds    f0, f1, f1, f0
	  fmadds    f1, f2, f2, f0
	  fcmpo     cr0, f1, f25
	  bge-      .loc_0x198
	  lfs       f0, 0x10(r31)
	  fmr       f28, f3
	  fmr       f27, f4
	  fmr       f26, f5
	  stfs      f0, 0x48(r26)
	  fmr       f25, f1

	.loc_0x198:
	  addi      r30, r30, 0x4
	  addi      r27, r27, 0x1

	.loc_0x1A0:
	  lwz       r0, 0x1C(r29)
	  cmpw      r27, r0
	  blt+      .loc_0x104
	  lwz       r29, 0x4(r29)

	.loc_0x1B0:
	  cmplwi    r29, 0
	  bne+      .loc_0xF8
	  stfs      f28, 0x34(r26)
	  mr        r3, r28
	  stfs      f27, 0x38(r26)
	  stfs      f26, 0x3C(r26)
	  psq_l     f31,0xB8(r1),0,0
	  lfd       f31, 0xB0(r1)
	  psq_l     f30,0xA8(r1),0,0
	  lfd       f30, 0xA0(r1)
	  psq_l     f29,0x98(r1),0,0
	  lfd       f29, 0x90(r1)
	  psq_l     f28,0x88(r1),0,0
	  lfd       f28, 0x80(r1)
	  psq_l     f27,0x78(r1),0,0
	  lfd       f27, 0x70(r1)
	  psq_l     f26,0x68(r1),0,0
	  lfd       f26, 0x60(r1)
	  psq_l     f25,0x58(r1),0,0
	  lfd       f25, 0x50(r1)
	  lmw       r25, 0x34(r1)
	  lwz       r0, 0xC4(r1)
	  mtlr      r0
	  addi      r1, r1, 0xC0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80163FE0
 * Size:	000080
 */
void Game::ShapeMapMgr::getBoundBox2d((BoundBox2d&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  lfs       f1, -0x5A94(r2)
	  stw       r0, 0x34(r1)
	  lfs       f0, -0x5A90(r2)
	  stw       r31, 0x2C(r1)
	  mr        r31, r4
	  addi      r4, r1, 0x8
	  stfs      f1, 0x8(r1)
	  stfs      f1, 0xC(r1)
	  stfs      f1, 0x10(r1)
	  stfs      f0, 0x14(r1)
	  stfs      f0, 0x18(r1)
	  stfs      f0, 0x1C(r1)
	  lwz       r3, 0x50(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  lfs       f1, 0x10(r1)
	  lfs       f0, 0x8(r1)
	  stfs      f0, 0x0(r31)
	  stfs      f1, 0x4(r31)
	  lfs       f1, 0x1C(r1)
	  lfs       f0, 0x14(r1)
	  stfs      f0, 0x8(r31)
	  stfs      f1, 0xC(r31)
	  lwz       r31, 0x2C(r1)
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80164060
 * Size:	000090
 */
void Game::ShapeMapMgr::getBoundBox((BoundBox&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  lfs       f1, -0x5A94(r2)
	  stw       r0, 0x34(r1)
	  lfs       f0, -0x5A90(r2)
	  stw       r31, 0x2C(r1)
	  mr        r31, r4
	  addi      r4, r1, 0x8
	  stfs      f1, 0x8(r1)
	  stfs      f1, 0xC(r1)
	  stfs      f1, 0x10(r1)
	  stfs      f0, 0x14(r1)
	  stfs      f0, 0x18(r1)
	  stfs      f0, 0x1C(r1)
	  lwz       r3, 0x50(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, 0x8(r1)
	  stfs      f0, 0x0(r31)
	  lfs       f0, 0xC(r1)
	  stfs      f0, 0x4(r31)
	  lfs       f0, 0x10(r1)
	  stfs      f0, 0x8(r31)
	  lfs       f0, 0x14(r1)
	  stfs      f0, 0xC(r31)
	  lfs       f0, 0x18(r1)
	  stfs      f0, 0x10(r31)
	  lfs       f0, 0x1C(r1)
	  stfs      f0, 0x14(r31)
	  lwz       r31, 0x2C(r1)
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801640F0
 * Size:	000008
 */
void Game::MapMgr::frozenable(void)
{
	/*
	.loc_0x0:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801640F8
 * Size:	000004
 */
void Game::MapMgr::doDirectDraw((Graphics&))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801640FC
 * Size:	000004
 */
void Game::MapMgr::doSimulation((float))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80164100
 * Size:	000008
 */
void Game::MapMgr::findRayIntersection((Sys::RayIntersectInfo&))
{
	/*
	.loc_0x0:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80164108
 * Size:	000004
 */
void Game::MapMgr::createTriangles((Sys::CreateTriangleArg&))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8016410C
 * Size:	0001E4
 */
void ObjectMgr<Game::WaterBox>::doViewCalc()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r4, 0x804B
	  stw       r0, 0x24(r1)
	  li        r0, 0
	  addi      r4, r4, 0x19D4
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
	  b         .loc_0x1B4

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
	  bne-      .loc_0x1B4
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
	  b         .loc_0x1B4

	.loc_0xD4:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x34(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x124
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1B4

	.loc_0x124:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x198

	.loc_0x144:
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
	  bne-      .loc_0x1B4
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0x198:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x144

	.loc_0x1B4:
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
 * Address:	801642F0
 * Size:	000004
 */
void Game::WaterBox::doViewCalc(void)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801642F4
 * Size:	00004C
 */
void Iterator<Game::WaterBox>::isDone()
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
 * Address:	80164340
 * Size:	0001F4
 */
void ObjectMgr<Game::WaterBox>::doSetView(int)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r5, 0x804B
	  stw       r0, 0x24(r1)
	  li        r0, 0
	  addi      r5, r5, 0x19D4
	  stw       r31, 0x1C(r1)
	  cmplwi    r0, 0
	  mr        r31, r4
	  stw       r0, 0x14(r1)
	  stw       r5, 0x8(r1)
	  stw       r0, 0xC(r1)
	  stw       r3, 0x10(r1)
	  bne-      .loc_0x50
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1C0

	.loc_0x50:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0xBC

	.loc_0x68:
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
	  bne-      .loc_0x1C0
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0xBC:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x68
	  b         .loc_0x1C0

	.loc_0xDC:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  mr        r4, r31
	  lwz       r12, 0x30(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x130
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1C0

	.loc_0x130:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1A4

	.loc_0x150:
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
	  bne-      .loc_0x1C0
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0x1A4:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x150

	.loc_0x1C0:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0xC(r1)
	  cmplw     r4, r3
	  bne+      .loc_0xDC
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80164534
 * Size:	000004
 */
void Game::WaterBox::doSetView((int))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80164538
 * Size:	0001E4
 */
void ObjectMgr<Game::WaterBox>::doEntry()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r4, 0x804B
	  stw       r0, 0x24(r1)
	  li        r0, 0
	  addi      r4, r4, 0x19D4
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
	  b         .loc_0x1B4

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
	  bne-      .loc_0x1B4
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
	  b         .loc_0x1B4

	.loc_0xD4:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x124
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1B4

	.loc_0x124:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x198

	.loc_0x144:
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
	  bne-      .loc_0x1B4
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0x198:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x144

	.loc_0x1B4:
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
 * Address:	8016471C
 * Size:	000004
 */
void Game::WaterBox::doEntry(void)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80164720
 * Size:	0001E4
 */
void ObjectMgr<Game::WaterBox>::doAnimation()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r4, 0x804B
	  stw       r0, 0x24(r1)
	  li        r0, 0
	  addi      r4, r4, 0x19D4
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
	  b         .loc_0x1B4

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
	  bne-      .loc_0x1B4
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
	  b         .loc_0x1B4

	.loc_0xD4:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x28(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x124
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1B4

	.loc_0x124:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x198

	.loc_0x144:
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
	  bne-      .loc_0x1B4
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0x198:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x144

	.loc_0x1B4:
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
 * Address:	80164904
 * Size:	000004
 */
void Game::WaterBox::doAnimation(void)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80164908
 * Size:	000038
 */
void Iterator<Game::WaterBox>::operator*()
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
 * Address:	80164940
 * Size:	0000E4
 */
void Iterator<Game::WaterBox>::next()
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
 * Address:	80164A24
 * Size:	0000DC
 */
void Iterator<Game::WaterBox>::first()
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
 * Address:	80164B00
 * Size:	000028
 */
void __sinit_mapMgr_cpp(void)
{
	/*
	.loc_0x0:
	  lis       r4, 0x8051
	  li        r0, -0x1
	  lfs       f0, 0x48B0(r4)
	  lis       r3, 0x804B
	  stw       r0, -0x6D00(r13)
	  stfsu     f0, 0x18A8(r3)
	  stfs      f0, -0x6CFC(r13)
	  stfs      f0, 0x4(r3)
	  stfs      f0, 0x8(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80164B28
 * Size:	000014
 */
void @36 @4 @Game::MapMgr::frozenable(void)
{
	/*
	.loc_0x0:
	  li        r11, 0x4
	  lwzx      r11, r3, r11
	  add       r3, r3, r11
	  subi      r3, r3, 0x24
	  b         -0xA48
	*/
}

/*
 * --INFO--
 * Address:	80164B3C
 * Size:	000014
 */
void @36 @4 @Game::MapMgr::doDirectDraw((Graphics&))
{
	/*
	.loc_0x0:
	  li        r11, 0x4
	  lwzx      r11, r3, r11
	  add       r3, r3, r11
	  subi      r3, r3, 0x24
	  b         -0xA54
	*/
}

/*
 * --INFO--
 * Address:	80164B50
 * Size:	000014
 */
void @36 @4 @Game::MapMgr::doSimulation((float))
{
	/*
	.loc_0x0:
	  li        r11, 0x4
	  lwzx      r11, r3, r11
	  add       r3, r3, r11
	  subi      r3, r3, 0x24
	  b         -0xA64
	*/
}

/*
 * --INFO--
 * Address:	80164B64
 * Size:	000014
 */
void @84 @4 @Game::MapMgr::frozenable(void)
{
	/*
	.loc_0x0:
	  li        r11, 0x4
	  lwzx      r11, r3, r11
	  add       r3, r3, r11
	  subi      r3, r3, 0x54
	  b         -0xA84
	*/
}

/*
 * --INFO--
 * Address:	80164B78
 * Size:	000014
 */
void @84 @4 @Game::MapMgr::doDirectDraw((Graphics&))
{
	/*
	.loc_0x0:
	  li        r11, 0x4
	  lwzx      r11, r3, r11
	  add       r3, r3, r11
	  subi      r3, r3, 0x54
	  b         -0xA90
	*/
}

/*
 * --INFO--
 * Address:	80164B8C
 * Size:	000014
 */
void @84 @4 @Game::MapMgr::doSimulation((float))
{
	/*
	.loc_0x0:
	  li        r11, 0x4
	  lwzx      r11, r3, r11
	  add       r3, r3, r11
	  subi      r3, r3, 0x54
	  b         -0xAA0
	*/
}

/*
 * --INFO--
 * Address:	80164BA0
 * Size:	000014
 */
void @84 @4 @Game::ShapeMapMgr::doViewCalc(void)
{
	/*
	.loc_0x0:
	  li        r11, 0x4
	  lwzx      r11, r3, r11
	  add       r3, r3, r11
	  subi      r3, r3, 0x54
	  b         -0xEF0
	*/
}

/*
 * --INFO--
 * Address:	80164BB4
 * Size:	000014
 */
void @84 @4 @Game::ShapeMapMgr::doSetView((int))
{
	/*
	.loc_0x0:
	  li        r11, 0x4
	  lwzx      r11, r3, r11
	  add       r3, r3, r11
	  subi      r3, r3, 0x54
	  b         -0xF64
	*/
}

/*
 * --INFO--
 * Address:	80164BC8
 * Size:	000014
 */
void @84 @4 @Game::ShapeMapMgr::doEntry(void)
{
	/*
	.loc_0x0:
	  li        r11, 0x4
	  lwzx      r11, r3, r11
	  add       r3, r3, r11
	  subi      r3, r3, 0x54
	  b         -0xECC
	*/
}

/*
 * --INFO--
 * Address:	80164BDC
 * Size:	000014
 */
void @84 @4 @Game::ShapeMapMgr::doAnimation(void)
{
	/*
	.loc_0x0:
	  li        r11, 0x4
	  lwzx      r11, r3, r11
	  add       r3, r3, r11
	  subi      r3, r3, 0x54
	  b         -0xFC4
	*/
}
