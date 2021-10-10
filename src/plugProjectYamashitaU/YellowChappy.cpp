

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
 * Address:	8012C378
 * Size:	000154
 */
void Game::YellowChappy::Obj::__ct(void)
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
	  addi      r0, r31, 0x2F0
	  lis       r3, 0x804B
	  stw       r0, 0x17C(r31)
	  subi      r3, r3, 0x5988
	  li        r0, 0
	  stw       r3, 0x2F0(r31)
	  stw       r0, 0x2F4(r31)
	  stw       r0, 0x2F8(r31)

	.loc_0x40:
	  mr        r3, r31
	  li        r4, 0
	  bl        -0x1A70
	  lis       r3, 0x804B
	  addi      r5, r31, 0x2F0
	  subi      r6, r3, 0x17B0
	  li        r4, 0
	  stw       r6, 0x0(r31)
	  addi      r3, r6, 0x1B0
	  addi      r7, r6, 0x334
	  li        r0, 0xFF
	  stw       r3, 0x178(r31)
	  li        r3, 0x2C
	  lwz       r6, 0x17C(r31)
	  stw       r7, 0x0(r6)
	  lwz       r6, 0x17C(r31)
	  sub       r5, r5, r6
	  stw       r5, 0xC(r6)
	  stw       r4, 0x2E4(r31)
	  stb       r0, 0x2E8(r31)
	  bl        -0x108564
	  mr.       r30, r3
	  beq-      .loc_0xDC
	  bl        -0x4AA0
	  lis       r3, 0x804B
	  lis       r4, 0x804B
	  subi      r0, r3, 0x3E18
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

	.loc_0xDC:
	  stw       r30, 0x184(r31)
	  li        r3, 0x1C
	  bl        -0x1085B8
	  mr.       r4, r3
	  beq-      .loc_0x110
	  lis       r5, 0x804B
	  lis       r3, 0x804B
	  subi      r0, r5, 0x680
	  li        r5, -0x1
	  stw       r0, 0x0(r4)
	  subi      r0, r3, 0x3E3C
	  stw       r5, 0x18(r4)
	  stw       r0, 0x0(r4)

	.loc_0x110:
	  lwz       r12, 0x0(r31)
	  mr        r3, r31
	  lwz       r12, 0x2F8(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x31C(r12)
	  mtctr     r12
	  bctrl
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
 * Address:	8012C4CC
 * Size:	000048
 */
void Game::YellowChappy::Obj::onInit((Game::CreatureInitArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x19EC
	  li        r3, 0xFF
	  li        r0, 0x1
	  stb       r3, 0x2E8(r31)
	  stb       r0, 0x2E9(r31)
	  lwz       r3, 0x180(r31)
	  addi      r0, r3, 0x50
	  stw       r0, 0x2EC(r31)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8012C514
 * Size:	0001B0
 */
void Game::YellowChappy::Obj::doUpdateCommon(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stfd      f31, 0x30(r1)
	  psq_st    f31,0x38(r1),0,0
	  stw       r31, 0x2C(r1)
	  stw       r30, 0x28(r1)
	  stw       r29, 0x24(r1)
	  mr        r30, r3
	  bl        -0x29624
	  lwz       r0, 0x1E0(r30)
	  lbz       r31, 0x2E8(r30)
	  rlwinm.   r0,r0,0,22,22
	  beq-      .loc_0x40
	  subi      r31, r31, 0xA
	  b         .loc_0x124

	.loc_0x40:
	  lfs       f1, -0x6290(r2)
	  lfs       f0, 0x204(r30)
	  lfs       f2, 0x200(r30)
	  fmuls     f0, f1, f0
	  fcmpo     cr0, f2, f0
	  bge-      .loc_0x120
	  lbz       r0, 0x2E9(r30)
	  cmplwi    r0, 0
	  beq-      .loc_0x118
	  lwz       r3, 0x174(r30)
	  subi      r4, r2, 0x628C
	  bl        0x312A64
	  mr.       r29, r3
	  bne-      .loc_0x94
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  subi      r3, r3, 0x3F60
	  li        r4, 0x7C
	  subi      r5, r5, 0x3F4C
	  crclr     6, 0x6
	  bl        -0x101F64

	.loc_0x94:
	  mr        r3, r29
	  bl        0x2FD2F4
	  mr.       r29, r3
	  bne-      .loc_0xC0
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  subi      r3, r3, 0x3F60
	  li        r4, 0x7E
	  subi      r5, r5, 0x3F4C
	  crclr     6, 0x6
	  bl        -0x101F90

	.loc_0xC0:
	  lis       r4, 0x804B
	  lis       r3, 0x804E
	  subi      r0, r4, 0x5808
	  lis       r4, 0x804E
	  stw       r0, 0x8(r1)
	  addi      r0, r3, 0x6A78
	  lis       r3, 0x804B
	  li        r6, 0x294
	  stw       r0, 0x8(r1)
	  addi      r4, r4, 0x6A14
	  li        r5, 0
	  subi      r0, r3, 0x17C4
	  stw       r4, 0x8(r1)
	  addi      r3, r1, 0x8
	  li        r4, 0
	  sth       r6, 0xC(r1)
	  stw       r5, 0x10(r1)
	  stw       r29, 0x14(r1)
	  stw       r0, 0x8(r1)
	  bl        0x282C94
	  li        r0, 0
	  stb       r0, 0x2E9(r30)

	.loc_0x118:
	  subi      r31, r31, 0x32
	  b         .loc_0x124

	.loc_0x120:
	  addi      r31, r31, 0xA

	.loc_0x124:
	  cmpwi     r31, 0
	  bge-      .loc_0x134
	  li        r31, 0
	  b         .loc_0x148

	.loc_0x134:
	  cmpwi     r31, 0xFF
	  ble-      .loc_0x148
	  li        r0, 0x1
	  li        r31, 0xFF
	  stb       r0, 0x2E9(r30)

	.loc_0x148:
	  stb       r31, 0x2E8(r30)
	  lwz       r3, 0x2E4(r30)
	  lbz       r4, 0x2E8(r30)
	  bl        0x2874E4
	  lwz       r3, 0x2E4(r30)
	  addi      r4, r30, 0x168
	  bl        0x287578
	  mr        r3, r30
	  bl        -0x27410
	  fmr       f31, f1
	  mr        r3, r30
	  bl        -0x25340
	  fmr       f1, f31
	  mr        r5, r3
	  lwz       r3, 0x2EC(r30)
	  lwz       r4, 0x2E4(r30)
	  bl        0x6A34
	  psq_l     f31,0x38(r1),0,0
	  lwz       r0, 0x44(r1)
	  lfd       f31, 0x30(r1)
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  lwz       r29, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8012C6C4
 * Size:	000040
 */
void Game::YellowChappy::Obj::onKill((Game::CreatureKillArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x2A7F0
	  lwz       r3, 0x2E4(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
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
 * Address:	8012C704
 * Size:	000068
 */
void Game::YellowChappy::Obj::createEffect(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  bl        -0x1130
	  li        r3, 0x40
	  bl        -0x108880
	  mr.       r31, r3
	  beq-      .loc_0x4C
	  li        r4, 0
	  li        r5, 0x283
	  li        r6, 0x284
	  li        r7, 0x285
	  bl        0x283E6C
	  lis       r3, 0x804B
	  subi      r0, r3, 0x17E0
	  stw       r0, 0x0(r31)

	.loc_0x4C:
	  stw       r31, 0x2E4(r30)
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
 * Address:	........
 * Size:	000080
 */
void efx::TChaseMtx3::__dt(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8012C76C
 * Size:	0000B4
 */
void Game::YellowChappy::Obj::setupEffect(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  bl        -0x1064
	  lwz       r3, 0x174(r30)
	  subi      r4, r2, 0x628C
	  bl        0x312854
	  mr.       r31, r3
	  bne-      .loc_0x4C
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  subi      r3, r3, 0x3F60
	  li        r4, 0xC0
	  subi      r5, r5, 0x3F4C
	  crclr     6, 0x6
	  bl        -0x102174

	.loc_0x4C:
	  mr        r3, r31
	  bl        0x2FD0E4
	  mr.       r31, r3
	  bne-      .loc_0x78
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  subi      r3, r3, 0x3F60
	  li        r4, 0xC2
	  subi      r5, r5, 0x3F4C
	  crclr     6, 0x6
	  bl        -0x1021A0

	.loc_0x78:
	  lwz       r3, 0x2E4(r30)
	  mr        r4, r31
	  bl        0x283E60
	  lwz       r3, 0x2E4(r30)
	  li        r4, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
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
 * Address:	8012C820
 * Size:	000028
 */
void Game::YellowChappy::Obj::doStartMovie(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r4, 0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x2E4(r3)
	  bl        0x287318
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8012C848
 * Size:	000004
 */
void Game::YellowChappy::Obj::doEndMovie(void)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8012C84C
 * Size:	0002B0
 */
void Game::YellowChappy::Obj::changeMaterial(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stmw      r27, 0xC(r1)
	  mr        r27, r3
	  lwz       r3, 0x180(r3)
	  lwz       r4, 0x174(r27)
	  lwz       r12, 0x0(r3)
	  lwz       r28, 0x8(r4)
	  lwz       r12, 0xE0(r12)
	  lwz       r29, 0x4(r28)
	  mtctr     r12
	  bctrl
	  mr        r30, r3
	  lwz       r3, 0x180(r27)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xE4(r12)
	  mtctr     r12
	  bctrl
	  mr        r31, r3
	  mr        r3, r28
	  lwz       r12, 0x0(r28)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x174(r27)
	  lbz       r0, 0x0(r30)
	  lwz       r3, 0x8(r3)
	  lwz       r3, 0x4(r3)
	  lwz       r4, 0x6C(r3)
	  lwz       r3, 0x4(r4)
	  stb       r0, 0x0(r3)
	  lbz       r0, 0x1(r30)
	  stb       r0, 0x1(r3)
	  lhz       r0, 0x2(r30)
	  sth       r0, 0x2(r3)
	  lhz       r0, 0x4(r30)
	  sth       r0, 0x4(r3)
	  lbz       r0, 0x6(r30)
	  stb       r0, 0x6(r3)
	  lbz       r0, 0x7(r30)
	  stb       r0, 0x7(r3)
	  lbz       r0, 0x8(r30)
	  stb       r0, 0x8(r3)
	  lbz       r0, 0x9(r30)
	  stb       r0, 0x9(r3)
	  lhz       r0, 0xA(r30)
	  sth       r0, 0xA(r3)
	  lwz       r0, 0xC(r30)
	  stw       r0, 0xC(r3)
	  lbz       r0, 0x10(r30)
	  stb       r0, 0x10(r3)
	  lbz       r0, 0x11(r30)
	  stb       r0, 0x11(r3)
	  lbz       r0, 0x12(r30)
	  stb       r0, 0x12(r3)
	  lbz       r0, 0x13(r30)
	  stb       r0, 0x13(r3)
	  lbz       r0, 0x14(r30)
	  stb       r0, 0x14(r3)
	  lbz       r0, 0x15(r30)
	  stb       r0, 0x15(r3)
	  lbz       r0, 0x16(r30)
	  stb       r0, 0x16(r3)
	  lbz       r0, 0x17(r30)
	  stb       r0, 0x17(r3)
	  lbz       r0, 0x18(r30)
	  stb       r0, 0x18(r3)
	  lbz       r0, 0x19(r30)
	  stb       r0, 0x19(r3)
	  lha       r0, 0x1A(r30)
	  sth       r0, 0x1A(r3)
	  lwz       r0, 0x1C(r30)
	  stw       r0, 0x1C(r3)
	  lwz       r3, 0x4(r4)
	  lwz       r0, 0x1C(r3)
	  add       r0, r30, r0
	  sub       r0, r0, r3
	  stw       r0, 0x1C(r3)
	  lwz       r3, 0x4(r4)
	  lwz       r0, 0xC(r3)
	  add       r0, r30, r0
	  sub       r0, r0, r3
	  stw       r0, 0xC(r3)
	  lwz       r3, 0x174(r27)
	  lbz       r0, 0x0(r31)
	  lwz       r3, 0x8(r3)
	  lwz       r3, 0x4(r3)
	  lwz       r4, 0x6C(r3)
	  lwz       r3, 0x4(r4)
	  stb       r0, 0x20(r3)
	  lbz       r0, 0x1(r31)
	  stb       r0, 0x21(r3)
	  lhz       r0, 0x2(r31)
	  sth       r0, 0x22(r3)
	  lhz       r0, 0x4(r31)
	  sth       r0, 0x24(r3)
	  lbz       r0, 0x6(r31)
	  stb       r0, 0x26(r3)
	  lbz       r0, 0x7(r31)
	  stb       r0, 0x27(r3)
	  lbz       r0, 0x8(r31)
	  stb       r0, 0x28(r3)
	  lbz       r0, 0x9(r31)
	  stb       r0, 0x29(r3)
	  lhz       r0, 0xA(r31)
	  sth       r0, 0x2A(r3)
	  lwz       r0, 0xC(r31)
	  stw       r0, 0x2C(r3)
	  lbz       r0, 0x10(r31)
	  stb       r0, 0x30(r3)
	  lbz       r0, 0x11(r31)
	  stb       r0, 0x31(r3)
	  lbz       r0, 0x12(r31)
	  stb       r0, 0x32(r3)
	  lbz       r0, 0x13(r31)
	  stb       r0, 0x33(r3)
	  lbz       r0, 0x14(r31)
	  stb       r0, 0x34(r3)
	  lbz       r0, 0x15(r31)
	  stb       r0, 0x35(r3)
	  lbz       r0, 0x16(r31)
	  stb       r0, 0x36(r3)
	  lbz       r0, 0x17(r31)
	  lis       r5, 0x8051
	  subi      r27, r5, 0xDD0
	  li        r30, 0
	  stb       r0, 0x37(r3)
	  lbz       r0, 0x18(r31)
	  stb       r0, 0x38(r3)
	  lbz       r0, 0x19(r31)
	  stb       r0, 0x39(r3)
	  lha       r0, 0x1A(r31)
	  sth       r0, 0x3A(r3)
	  lwz       r0, 0x1C(r31)
	  stw       r0, 0x3C(r3)
	  lwz       r5, 0x4(r4)
	  lwz       r0, 0x3C(r5)
	  addi      r3, r5, 0x20
	  add       r0, r31, r0
	  sub       r0, r0, r3
	  stw       r0, 0x3C(r5)
	  lwz       r4, 0x4(r4)
	  lwz       r0, 0x2C(r4)
	  addi      r3, r4, 0x20
	  add       r0, r31, r0
	  sub       r0, r0, r3
	  stw       r0, 0x2C(r4)
	  b         .loc_0x28C

	.loc_0x254:
	  lwz       r4, 0xC0(r28)
	  rlwinm    r3,r30,6,10,25
	  rlwinm    r0,r30,2,14,29
	  add       r4, r4, r3
	  stw       r4, 0x3C(r27)
	  lwz       r3, 0x60(r29)
	  lwz       r4, 0x2C(r4)
	  lwzx      r3, r3, r0
	  lwz       r4, 0x34(r4)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  addi      r30, r30, 0x1

	.loc_0x28C:
	  lhz       r0, 0x5C(r29)
	  rlwinm    r3,r30,0,16,31
	  cmplw     r3, r0
	  blt+      .loc_0x254
	  lmw       r27, 0xC(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8012CAFC
 * Size:	00004C
 */
void Game::YellowChappy::Obj::doStartWaitingBirthTypeDrop(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x25178
	  lwz       r3, 0x2E4(r31)
	  li        r4, 0
	  bl        0x287030
	  lwz       r3, 0x2E4(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
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
 * Address:	8012CB48
 * Size:	00004C
 */
void Game::YellowChappy::Obj::doFinishWaitingBirthTypeDrop(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x25194
	  lwz       r3, 0x2E4(r31)
	  li        r4, 0xFF
	  bl        0x286FE4
	  lwz       r3, 0x2E4(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
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
 * Address:	8012CB94
 * Size:	000004
 */
void efx::TSimple1::forceKill(void)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8012CB98
 * Size:	000004
 */
void efx::TSimple1::fade(void)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8012CB9C
 * Size:	000008
 */
void Game::YellowChappy::Obj::getEnemyTypeID(void)
{
	/*
	.loc_0x0:
	  li        r3, 0x2B
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8012CBA4
 * Size:	000014
 */
void @752 @12 @Game::EnemyBase::viewOnPelletKilled(void)
{
	/*
	.loc_0x0:
	  li        r11, 0xC
	  lwzx      r11, r3, r11
	  add       r3, r3, r11
	  subi      r3, r3, 0x2F0
	  b         -0x26298
	*/
}

/*
 * --INFO--
 * Address:	8012CBB8
 * Size:	000014
 */
void @752 @12 @Game::EnemyBase::viewStartCarryMotion(void)
{
	/*
	.loc_0x0:
	  li        r11, 0xC
	  lwzx      r11, r3, r11
	  add       r3, r3, r11
	  subi      r3, r3, 0x2F0
	  b         -0x26520
	*/
}

/*
 * --INFO--
 * Address:	8012CBCC
 * Size:	000014
 */
void @752 @12 @Game::EnemyBase::viewStartPreCarryMotion(void)
{
	/*
	.loc_0x0:
	  li        r11, 0xC
	  lwzx      r11, r3, r11
	  add       r3, r3, r11
	  subi      r3, r3, 0x2F0
	  b         -0x26514
	*/
}

/*
 * --INFO--
 * Address:	8012CBE0
 * Size:	000014
 */
void @752 @12 @Game::EnemyBase::view_finish_carrymotion(void)
{
	/*
	.loc_0x0:
	  li        r11, 0xC
	  lwzx      r11, r3, r11
	  add       r3, r3, r11
	  subi      r3, r3, 0x2F0
	  b         -0x26178
	*/
}

/*
 * --INFO--
 * Address:	8012CBF4
 * Size:	000014
 */
void @752 @12 @Game::EnemyBase::view_start_carrymotion(void)
{
	/*
	.loc_0x0:
	  li        r11, 0xC
	  lwzx      r11, r3, r11
	  add       r3, r3, r11
	  subi      r3, r3, 0x2F0
	  b         -0x261B8
	*/
}

/*
 * --INFO--
 * Address:	8012CC08
 * Size:	000014
 */
void @752 @12 @Game::EnemyBase::viewGetShape(void)
{
	/*
	.loc_0x0:
	  li        r11, 0xC
	  lwzx      r11, r3, r11
	  add       r3, r3, r11
	  subi      r3, r3, 0x2F0
	  b         -0x26578
	*/
}
