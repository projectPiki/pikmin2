

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
 * Address:	80253304
 * Size:	000048
 */
void Game::RumbleMgr::__ct(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        0x1BE078
	  lis       r3, 0x804C
	  lis       r4, 0x8048
	  addi      r0, r3, 0x1BF8
	  mr        r3, r31
	  stw       r0, 0x0(r31)
	  addi      r0, r4, 0x4878
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
 * Address:	8025334C
 * Size:	000158
 */
void Game::RumbleMgr::loadResource(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r4, 0x8048
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  li        r3, 0x38
	  stw       r30, 0x18(r1)
	  addi      r30, r4, 0x4868
	  stw       r29, 0x14(r1)
	  stw       r28, 0x10(r1)
	  bl        -0x22F4D4
	  mr.       r29, r3
	  beq-      .loc_0x8C
	  addi      r0, r29, 0x34
	  lis       r5, 0x7272
	  stw       r0, 0x0(r29)
	  li        r3, 0
	  addi      r0, r30, 0x1C
	  mr        r4, r29
	  stw       r3, 0x4(r29)
	  addi      r3, r29, 0xC
	  addi      r5, r5, 0x646D
	  addi      r6, r30, 0x28
	  stw       r0, 0x8(r29)
	  bl        0x1C02A8
	  lis       r3, 0x804B
	  lfs       f2, -0x39E8(r2)
	  subi      r0, r3, 0x5344
	  lfs       f1, -0x39E4(r2)
	  stw       r0, 0xC(r29)
	  lfs       f0, -0x39E0(r2)
	  stfs      f2, 0x24(r29)
	  stfs      f1, 0x2C(r29)
	  stfs      f0, 0x30(r29)

	.loc_0x8C:
	  stw       r29, 0x24(r31)
	  mr        r3, r31
	  addi      r4, r30, 0x38
	  bl        0x854
	  li        r3, 0x8
	  bl        -0x22F548
	  mr.       r0, r3
	  beq-      .loc_0xB4
	  bl        0xDFD4
	  mr        r0, r3

	.loc_0xB4:
	  stw       r0, 0x28(r31)
	  mr        r3, r31
	  addi      r4, r30, 0x60
	  bl        0x8EC
	  li        r0, 0x1
	  li        r3, 0x8
	  stb       r0, 0x18(r31)
	  bl        -0x22F470
	  stw       r3, 0x20(r31)
	  li        r3, 0x8
	  bl        -0x22F47C
	  stw       r3, 0x1C(r31)
	  li        r30, 0
	  mr        r29, r30
	  li        r28, 0
	  stw       r30, 0x2C(r31)
	  stw       r30, 0x30(r31)

	.loc_0xF8:
	  li        r3, 0x20
	  bl        -0x22F5A4
	  mr.       r0, r3
	  beq-      .loc_0x118
	  mr        r4, r28
	  li        r5, 0x8
	  bl        -0x93C
	  mr        r0, r3

	.loc_0x118:
	  lwz       r3, 0x20(r31)
	  addi      r28, r28, 0x1
	  cmpwi     r28, 0x2
	  stwx      r0, r3, r29
	  lwz       r3, 0x1C(r31)
	  stwx      r30, r3, r29
	  addi      r29, r29, 0x4
	  blt+      .loc_0xF8
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
 * Address:	802534A4
 * Size:	000108
 */
void Game::RumbleMgr::init(void)
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
	  stw       r28, 0x10(r1)
	  lwz       r4, -0x6514(r13)
	  lwz       r3, 0x60(r4)
	  cmplwi    r3, 0
	  beq-      .loc_0x48
	  lbz       r3, 0x3B(r3)
	  neg       r0, r3
	  or        r0, r0, r3
	  rlwinm    r0,r0,1,31,31
	  stb       r0, 0x18(r31)
	  b         .loc_0x50

	.loc_0x48:
	  li        r0, 0x1
	  stb       r0, 0x18(r31)

	.loc_0x50:
	  li        r30, 0
	  li        r28, 0
	  stw       r30, 0x2C(r31)
	  mr        r29, r30
	  stw       r30, 0x30(r31)

	.loc_0x64:
	  lwz       r3, 0x20(r31)
	  lwz       r0, 0x28(r31)
	  lwzx      r3, r3, r29
	  stw       r0, 0x1C(r3)
	  lwz       r3, 0x20(r31)
	  lwzx      r3, r3, r29
	  bl        -0x8A8
	  lwz       r3, 0x1C(r31)
	  addi      r28, r28, 0x1
	  cmpwi     r28, 0x2
	  stwx      r30, r3, r29
	  addi      r29, r29, 0x4
	  blt+      .loc_0x64
	  lwz       r3, -0x6C18(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0xE8
	  lwz       r0, 0x44(r3)
	  cmpwi     r0, 0x4
	  beq-      .loc_0xE8
	  li        r28, 0
	  li        r29, 0

	.loc_0xB8:
	  lwz       r3, -0x6D20(r13)
	  mr        r4, r28
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x1C(r31)
	  addi      r28, r28, 0x1
	  cmpwi     r28, 0x2
	  stwx      r3, r4, r29
	  addi      r29, r29, 0x4
	  blt+      .loc_0xB8

	.loc_0xE8:
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
 * Address:	802535AC
 * Size:	0001D4
 */
void Game::RumbleMgr::update(void)
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
	  stw       r28, 0x10(r1)
	  bl        0x52C
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x1B4
	  lwz       r3, -0x6C18(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x134
	  lwz       r3, 0x44(r3)
	  li        r0, 0
	  cmpwi     r3, 0x1
	  beq-      .loc_0x50
	  cmpwi     r3, 0x3
	  bne-      .loc_0x54

	.loc_0x50:
	  li        r0, 0x1

	.loc_0x54:
	  rlwinm.   r0,r0,0,24,31
	  bne-      .loc_0x134
	  lwz       r0, 0x2C(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x9C
	  lwz       r3, 0x20(r31)
	  li        r4, 0x1
	  lwz       r3, 0x0(r3)
	  bl        -0x68C
	  lwz       r4, 0x2C(r31)
	  lwz       r3, 0x20(r31)
	  lha       r0, 0x7C(r4)
	  lwz       r3, 0x0(r3)
	  stw       r0, 0x4(r3)
	  lwz       r3, 0x20(r31)
	  lwz       r3, 0x0(r3)
	  bl        -0x93C
	  b         .loc_0x1B4

	.loc_0x9C:
	  lwz       r3, -0x6D20(r13)
	  bl        -0xF8A2C
	  mr        r30, r3
	  li        r28, 0
	  li        r29, 0

	.loc_0xB0:
	  lwz       r3, 0x1C(r31)
	  lwzx      r3, r3, r29
	  cmplwi    r3, 0
	  beq-      .loc_0x104
	  lwz       r0, 0x278(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x104
	  cmplw     r3, r30
	  bne-      .loc_0x104
	  lwz       r3, 0x20(r31)
	  li        r4, 0x1
	  lwzx      r3, r3, r29
	  bl        -0x6F8
	  lwz       r4, 0x1C(r31)
	  lwz       r3, 0x20(r31)
	  lwzx      r4, r4, r29
	  lwzx      r3, r3, r29
	  lwz       r4, 0x278(r4)
	  lha       r0, 0x7C(r4)
	  stw       r0, 0x4(r3)
	  b         .loc_0x114

	.loc_0x104:
	  lwz       r3, 0x20(r31)
	  li        r4, 0
	  lwzx      r3, r3, r29
	  bl        -0x728

	.loc_0x114:
	  lwz       r3, 0x20(r31)
	  lwzx      r3, r3, r29
	  bl        -0x9C4
	  addi      r28, r28, 0x1
	  addi      r29, r29, 0x4
	  cmpwi     r28, 0x2
	  blt+      .loc_0xB0
	  b         .loc_0x1B4

	.loc_0x134:
	  li        r28, 0
	  li        r29, 0

	.loc_0x13C:
	  lwz       r3, 0x1C(r31)
	  lwzx      r3, r3, r29
	  cmplwi    r3, 0
	  beq-      .loc_0x188
	  lwz       r0, 0x278(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x188
	  lwz       r3, 0x20(r31)
	  li        r4, 0x1
	  lwzx      r3, r3, r29
	  bl        -0x77C
	  lwz       r4, 0x1C(r31)
	  lwz       r3, 0x20(r31)
	  lwzx      r4, r4, r29
	  lwzx      r3, r3, r29
	  lwz       r4, 0x278(r4)
	  lha       r0, 0x7C(r4)
	  stw       r0, 0x4(r3)
	  b         .loc_0x198

	.loc_0x188:
	  lwz       r3, 0x20(r31)
	  li        r4, 0
	  lwzx      r3, r3, r29
	  bl        -0x7AC

	.loc_0x198:
	  lwz       r3, 0x20(r31)
	  lwzx      r3, r3, r29
	  bl        -0xA48
	  addi      r28, r28, 0x1
	  addi      r29, r29, 0x4
	  cmpwi     r28, 0x2
	  blt+      .loc_0x13C

	.loc_0x1B4:
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
 * Address:	80253780
 * Size:	0001A4
 */
void startRumble__Q24Game9RumbleMgrFiR10Vector3<float> i(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stmw      r27, 0x2C(r1)
	  mr        r27, r3
	  mr        r28, r4
	  mr        r29, r5
	  lbz       r0, 0x18(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x190
	  lwz       r4, 0x30(r27)
	  cmplwi    r4, 0
	  beq-      .loc_0xB8
	  lfs       f1, 0x4(r4)
	  lfs       f0, 0x4(r29)
	  lfs       f3, 0x0(r4)
	  fsubs     f4, f1, f0
	  lfs       f2, 0x0(r29)
	  lfs       f1, 0x8(r4)
	  lfs       f0, 0x8(r29)
	  fsubs     f3, f3, f2
	  fmuls     f4, f4, f4
	  fsubs     f2, f1, f0
	  lfs       f0, -0x39E4(r2)
	  fmadds    f1, f3, f3, f4
	  fmuls     f2, f2, f2
	  fadds     f1, f2, f1
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x84
	  ble-      .loc_0x88
	  fsqrte    f0, f1
	  fmuls     f1, f0, f1
	  b         .loc_0x88

	.loc_0x84:
	  fmr       f1, f0

	.loc_0x88:
	  lfs       f2, -0x39E0(r2)
	  fcmpo     cr0, f1, f2
	  bge-      .loc_0x190
	  fsubs     f0, f2, f1
	  lwz       r3, 0x20(r27)
	  lfs       f1, -0x39DC(r2)
	  mr        r4, r28
	  lwz       r3, 0x0(r3)
	  fdivs     f0, f0, f2
	  fmuls     f1, f1, f0
	  bl        -0x844
	  b         .loc_0x190

	.loc_0xB8:
	  mr        r5, r6
	  addi      r4, r1, 0x8
	  bl        0x390
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x190
	  lwz       r0, 0x8(r1)
	  mr        r30, r0
	  rlwinm    r31,r0,2,0,29
	  b         .loc_0x184

	.loc_0xDC:
	  lwz       r3, 0x1C(r27)
	  lwzx      r4, r3, r31
	  cmplwi    r4, 0
	  beq-      .loc_0x17C
	  lwz       r12, 0x0(r4)
	  addi      r3, r1, 0x10
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f1, 0x4(r29)
	  lfs       f0, 0x14(r1)
	  lfs       f3, 0x0(r29)
	  fsubs     f4, f1, f0
	  lfs       f2, 0x10(r1)
	  lfs       f1, 0x8(r29)
	  lfs       f0, 0x18(r1)
	  fsubs     f3, f3, f2
	  fmuls     f4, f4, f4
	  fsubs     f2, f1, f0
	  lfs       f0, -0x39E4(r2)
	  fmadds    f1, f3, f3, f4
	  fmuls     f2, f2, f2
	  fadds     f1, f2, f1
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x150
	  ble-      .loc_0x154
	  fsqrte    f0, f1
	  fmuls     f1, f0, f1
	  b         .loc_0x154

	.loc_0x150:
	  fmr       f1, f0

	.loc_0x154:
	  lwz       r3, 0x24(r27)
	  lfs       f2, 0x24(r3)
	  fcmpo     cr0, f1, f2
	  bge-      .loc_0x17C
	  fsubs     f0, f2, f1
	  lwz       r3, 0x20(r27)
	  mr        r4, r28
	  lwzx      r3, r3, r31
	  fdivs     f1, f0, f2
	  bl        -0x90C

	.loc_0x17C:
	  addi      r31, r31, 0x4
	  addi      r30, r30, 0x1

	.loc_0x184:
	  lwz       r0, 0xC(r1)
	  cmpw      r30, r0
	  blt+      .loc_0xDC

	.loc_0x190:
	  lmw       r27, 0x2C(r1)
	  lwz       r0, 0x44(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80253924
 * Size:	0000B8
 */
void Game::RumbleMgr::startRumble((int, int))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  mr        r29, r4
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  lbz       r0, 0x18(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x98
	  lwz       r0, 0x30(r28)
	  cmplwi    r0, 0
	  beq-      .loc_0x50
	  lwz       r3, 0x20(r28)
	  lfs       f1, -0x39D8(r2)
	  lwz       r3, 0x0(r3)
	  bl        -0x980
	  b         .loc_0x98

	.loc_0x50:
	  addi      r4, r1, 0x8
	  bl        0x258
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x98
	  lwz       r0, 0x8(r1)
	  mr        r30, r0
	  rlwinm    r31,r0,2,0,29
	  b         .loc_0x8C

	.loc_0x70:
	  lwz       r3, 0x20(r28)
	  mr        r4, r29
	  lfs       f1, -0x39D8(r2)
	  lwzx      r3, r3, r31
	  bl        -0x9B8
	  addi      r31, r31, 0x4
	  addi      r30, r30, 0x1

	.loc_0x8C:
	  lwz       r0, 0xC(r1)
	  cmpw      r30, r0
	  blt+      .loc_0x70

	.loc_0x98:
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
 * Address:	802539DC
 * Size:	000094
 */
void Game::RumbleMgr::stopRumble((int, int))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  mr        r29, r4
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  lbz       r0, 0x18(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x74
	  addi      r4, r1, 0x8
	  bl        0x1C0
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x74
	  lwz       r0, 0x8(r1)
	  mr        r30, r0
	  rlwinm    r31,r0,2,0,29
	  b         .loc_0x68

	.loc_0x50:
	  lwz       r3, 0x20(r28)
	  mr        r4, r29
	  lwzx      r3, r3, r31
	  bl        -0x8C0
	  addi      r31, r31, 0x4
	  addi      r30, r30, 0x1

	.loc_0x68:
	  lwz       r0, 0xC(r1)
	  cmpw      r30, r0
	  blt+      .loc_0x50

	.loc_0x74:
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
 * Address:	80253A70
 * Size:	000088
 */
void Game::RumbleMgr::stopRumble((int))
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
	  lbz       r0, 0x18(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x6C
	  mr        r5, r4
	  addi      r4, r1, 0x8
	  bl        0x130
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x6C
	  lwz       r0, 0x8(r1)
	  mr        r30, r0
	  rlwinm    r31,r0,2,0,29
	  b         .loc_0x60

	.loc_0x4C:
	  lwz       r3, 0x20(r29)
	  lwzx      r3, r3, r31
	  bl        -0x9D4
	  addi      r31, r31, 0x4
	  addi      r30, r30, 0x1

	.loc_0x60:
	  lwz       r0, 0xC(r1)
	  cmpw      r30, r0
	  blt+      .loc_0x4C

	.loc_0x6C:
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
 * Address:	80253AF8
 * Size:	00007C
 */
void Game::RumbleMgr::isRumbleUpdateOn(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  lbz       r0, 0x18(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x48
	  lwz       r3, -0x6C18(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x48
	  lbz       r0, 0x4A(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x48
	  bl        -0x9EB64
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x48
	  li        r3, 0x1
	  b         .loc_0x68

	.loc_0x48:
	  li        r31, 0

	.loc_0x4C:
	  mr        r3, r31
	  li        r4, 0x2
	  bl        -0x15F720
	  addi      r31, r31, 0x1
	  cmpwi     r31, 0x4
	  blt+      .loc_0x4C
	  li        r3, 0

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
 * Address:	80253B74
 * Size:	00005C
 */
void setZukanRumble__Q24Game9RumbleMgrFP10ControllerP10Vector3<float>(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r6, -0x6C18(r13)
	  cmplwi    r6, 0
	  beq-      .loc_0x30
	  lwz       r0, 0x44(r6)
	  cmpwi     r0, 0x4
	  bne-      .loc_0x30
	  stw       r4, 0x2C(r3)
	  stw       r5, 0x30(r3)
	  b         .loc_0x4C

	.loc_0x30:
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  addi      r3, r3, 0x48F0
	  li        r4, 0x15E
	  addi      r5, r5, 0x4900
	  crclr     6, 0x6
	  bl        -0x22957C

	.loc_0x4C:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80253BD0
 * Size:	000068
 */
void Game::RumbleMgr::isStartAndEnd((int*, int))
{
	/*
	.loc_0x0:
	  cmpwi     r5, 0x2
	  bne-      .loc_0x20
	  li        r3, 0
	  li        r0, 0x2
	  stw       r3, 0x0(r4)
	  li        r3, 0x1
	  stw       r0, 0x4(r4)
	  blr

	.loc_0x20:
	  cmpwi     r5, 0
	  bne-      .loc_0x40
	  li        r3, 0
	  li        r0, 0x1
	  stw       r3, 0x0(r4)
	  li        r3, 0x1
	  stw       r0, 0x4(r4)
	  blr

	.loc_0x40:
	  cmpwi     r5, 0x1
	  bne-      .loc_0x60
	  li        r3, 0x1
	  li        r0, 0x2
	  stw       r3, 0x0(r4)
	  li        r3, 0x1
	  stw       r0, 0x4(r4)
	  blr

	.loc_0x60:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80253C38
 * Size:	0000C0
 */
void Game::RumbleMgr::readRumbleParms((char*))
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
	  mr        r30, r3
	  mr        r3, r4
	  li        r4, 0
	  stw       r0, 0x8(r1)
	  bl        -0x234AF0
	  mr.       r31, r3
	  beq-      .loc_0x8C
	  mr        r4, r31
	  addi      r3, r1, 0x10
	  li        r5, -0x1
	  bl        0x1C1C68
	  li        r0, 0x1
	  cmpwi     r0, 0x1
	  stw       r0, 0x1C(r1)
	  bne-      .loc_0x74
	  li        r0, 0
	  stw       r0, 0x424(r1)

	.loc_0x74:
	  lwz       r3, 0x24(r30)
	  addi      r4, r1, 0x10
	  bl        0x1BFB40
	  mr        r3, r31
	  bl        -0x22FBE4
	  b         .loc_0xA8

	.loc_0x8C:
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  addi      r3, r3, 0x48F0
	  li        r4, 0x199
	  addi      r5, r5, 0x4910
	  crclr     6, 0x6
	  bl        -0x22969C

	.loc_0xA8:
	  lwz       r0, 0x444(r1)
	  lwz       r31, 0x43C(r1)
	  lwz       r30, 0x438(r1)
	  mtlr      r0
	  addi      r1, r1, 0x440
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80253CF8
 * Size:	0000C0
 */
void Game::RumbleMgr::readRumbleData((char*))
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
	  mr        r30, r3
	  mr        r3, r4
	  li        r4, 0
	  stw       r0, 0x8(r1)
	  bl        -0x234BB0
	  mr.       r31, r3
	  beq-      .loc_0x8C
	  mr        r4, r31
	  addi      r3, r1, 0x10
	  li        r5, -0x1
	  bl        0x1C1BA8
	  li        r0, 0x1
	  cmpwi     r0, 0x1
	  stw       r0, 0x1C(r1)
	  bne-      .loc_0x74
	  li        r0, 0
	  stw       r0, 0x424(r1)

	.loc_0x74:
	  lwz       r3, 0x28(r30)
	  addi      r4, r1, 0x10
	  bl        0xD690
	  mr        r3, r31
	  bl        -0x22FCA4
	  b         .loc_0xA8

	.loc_0x8C:
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  addi      r3, r3, 0x48F0
	  li        r4, 0x1B8
	  addi      r5, r5, 0x4928
	  crclr     6, 0x6
	  bl        -0x22975C

	.loc_0xA8:
	  lwz       r0, 0x444(r1)
	  lwz       r31, 0x43C(r1)
	  lwz       r30, 0x438(r1)
	  mtlr      r0
	  addi      r1, r1, 0x440
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80253DB8
 * Size:	000060
 */
void Game::RumbleMgr::__dt(void)
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
	  lis       r5, 0x804C
	  li        r4, 0
	  addi      r0, r5, 0x1BF8
	  stw       r0, 0x0(r30)
	  bl        0x1BD7A0
	  extsh.    r0, r31
	  ble-      .loc_0x44
	  mr        r3, r30
	  bl        -0x22FD44

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
