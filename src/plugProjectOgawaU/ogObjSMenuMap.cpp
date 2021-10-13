

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
 * Address:	........
 * Size:	000228
 */
void og::newScreen::getNaviPtr((int))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8030F6F0
 * Size:	000114
 */
void og::newScreen::ObjSMenuMap::__ct((char const*))
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
	  bl        0x6B04
	  lis       r3, 0x804E
	  lfs       f1, -0xC20(r2)
	  subi      r3, r3, 0x7B88
	  lfs       f0, -0xC1C(r2)
	  stw       r3, 0x0(r30)
	  addi      r3, r3, 0x10
	  li        r4, 0
	  li        r0, 0xFF
	  stw       r3, 0x18(r30)
	  mr        r3, r30
	  stfs      f1, 0xE0(r30)
	  stfs      f1, 0xE4(r30)
	  stfs      f0, 0xE8(r30)
	  stfs      f1, 0xEC(r30)
	  stfs      f0, 0xF0(r30)
	  stfs      f0, 0xF4(r30)
	  stfs      f1, 0xF8(r30)
	  stfs      f1, 0xFC(r30)
	  stfs      f1, 0x100(r30)
	  stfs      f1, 0x104(r30)
	  stfs      f0, 0x108(r30)
	  stfs      f0, 0x10C(r30)
	  stfs      f1, 0x110(r30)
	  stfs      f1, 0x114(r30)
	  stw       r4, 0xA8(r30)
	  stw       r4, 0xAC(r30)
	  stw       r4, 0xB0(r30)
	  stw       r31, 0x14(r30)
	  stw       r4, 0xB4(r30)
	  stw       r4, 0xB8(r30)
	  stw       r4, 0xBC(r30)
	  stw       r4, 0xC0(r30)
	  stw       r4, 0xC4(r30)
	  stw       r4, 0x128(r30)
	  stw       r4, 0xC8(r30)
	  stw       r4, 0xCC(r30)
	  stw       r4, 0xD0(r30)
	  stw       r4, 0xD4(r30)
	  stw       r4, 0xD8(r30)
	  stw       r4, 0xDC(r30)
	  stw       r4, 0x11C(r30)
	  stb       r4, 0x120(r30)
	  stw       r4, 0x118(r30)
	  stw       r4, 0x124(r30)
	  stw       r4, 0x12C(r30)
	  stw       r4, 0x130(r30)
	  stw       r4, 0x134(r30)
	  stfs      f0, 0x138(r30)
	  stb       r0, 0x13C(r30)
	  stw       r4, 0x154(r30)
	  stw       r4, 0x140(r30)
	  stw       r4, 0x144(r30)
	  stw       r4, 0x148(r30)
	  stw       r4, 0x14C(r30)
	  stw       r4, 0x150(r30)
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
 * Address:	8030F804
 * Size:	0000AC
 */
void og::newScreen::ObjSMenuBase::__dt(void)
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
	  beq-      .loc_0x90
	  lis       r4, 0x804E
	  subi      r4, r4, 0x7650
	  stw       r4, 0x0(r30)
	  addi      r0, r4, 0x10
	  stw       r0, 0x18(r30)
	  beq-      .loc_0x80
	  lis       r4, 0x804F
	  subi      r4, r4, 0x28A8
	  stw       r4, 0x0(r30)
	  addi      r0, r4, 0x10
	  stw       r0, 0x18(r30)
	  beq-      .loc_0x80
	  lis       r4, 0x804E
	  subi      r4, r4, 0x7DC0
	  stw       r4, 0x0(r30)
	  addi      r0, r4, 0x10
	  stw       r0, 0x18(r30)
	  bl        0x101D68
	  addi      r3, r30, 0x18
	  li        r4, 0
	  bl        -0x2F2840
	  mr        r3, r30
	  li        r4, 0
	  bl        0x101D08

	.loc_0x80:
	  extsh.    r0, r31
	  ble-      .loc_0x90
	  mr        r3, r30
	  bl        -0x2EB7DC

	.loc_0x90:
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
 * Address:	8030F8B0
 * Size:	0000C4
 */
void og::newScreen::ObjSMenuMap::__dt(void)
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
	  beq-      .loc_0xA8
	  lis       r4, 0x804E
	  subi      r4, r4, 0x7B88
	  stw       r4, 0x0(r30)
	  addi      r0, r4, 0x10
	  stw       r0, 0x18(r30)
	  beq-      .loc_0x98
	  lis       r4, 0x804E
	  subi      r4, r4, 0x7650
	  stw       r4, 0x0(r30)
	  addi      r0, r4, 0x10
	  stw       r0, 0x18(r30)
	  beq-      .loc_0x98
	  lis       r4, 0x804F
	  subi      r4, r4, 0x28A8
	  stw       r4, 0x0(r30)
	  addi      r0, r4, 0x10
	  stw       r0, 0x18(r30)
	  beq-      .loc_0x98
	  lis       r4, 0x804E
	  subi      r4, r4, 0x7DC0
	  stw       r4, 0x0(r30)
	  addi      r0, r4, 0x10
	  stw       r0, 0x18(r30)
	  bl        0x101CA4
	  addi      r3, r30, 0x18
	  li        r4, 0
	  bl        -0x2F2904
	  mr        r3, r30
	  li        r4, 0
	  bl        0x101C44

	.loc_0x98:
	  extsh.    r0, r31
	  ble-      .loc_0xA8
	  mr        r3, r30
	  bl        -0x2EB8A0

	.loc_0xA8:
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
 * Size:	000024
 */
void og::newScreen::ObjSMenuMap::calcMapScale(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000AC
 */
void calcMapPos__Q32og9newScreen11ObjSMenuMapF10Vector2<float>
P10Vector2<float>(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8030F974
 * Size:	00026C
 */
void og::newScreen::ObjSMenuMap::setMapTexture(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lfs       f1, -0xC20(r2)
	  lis       r6, 0x5F6D
	  stw       r0, 0x24(r1)
	  lis       r5, 0x6E
	  lis       r4, 0x8049
	  fmr       f2, f1
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  addi      r6, r6, 0x6170
	  addi      r5, r5, 0x6577
	  stw       r30, 0x18(r1)
	  subi      r30, r4, 0x1E58
	  lwz       r3, 0xB4(r3)
	  lwz       r4, 0xC4(r31)
	  bl        -0xD64
	  stw       r3, 0xC8(r31)
	  li        r4, 0xFF
	  lwz       r3, 0xC8(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0xB4(r31)
	  li        r0, 0
	  stb       r0, 0xB0(r3)
	  lwz       r3, 0xA8(r31)
	  lbz       r0, 0x49(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0xE8
	  lbz       r0, 0x4A(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0xE8
	  lwz       r3, -0x6978(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0xD0
	  bl        -0xCAC5C
	  lwz       r3, -0x6978(r13)
	  bl        -0xCAB58
	  stw       r3, 0xC0(r31)
	  li        r5, 0
	  lwz       r3, 0xC8(r31)
	  lwz       r4, 0xC0(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r4, 0x20(r4)
	  lwz       r12, 0x110(r12)
	  mtctr     r12
	  bctrl
	  li        r0, 0x1
	  stb       r0, 0x120(r31)
	  b         .loc_0x190

	.loc_0xD0:
	  addi      r3, r30, 0xC
	  addi      r5, r30, 0x20
	  li        r4, 0x186
	  crclr     6, 0x6
	  bl        -0x2E5414
	  b         .loc_0x190

	.loc_0xE8:
	  lwz       r0, 0x3C(r3)
	  cmpwi     r0, 0x2
	  beq-      .loc_0x154
	  bge-      .loc_0x108
	  cmpwi     r0, 0
	  beq-      .loc_0x114
	  bge-      .loc_0x134
	  b         .loc_0x190

	.loc_0x108:
	  cmpwi     r0, 0x4
	  bge-      .loc_0x190
	  b         .loc_0x174

	.loc_0x114:
	  lwz       r3, 0xC8(r31)
	  addi      r4, r30, 0x48
	  li        r5, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x114(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x190

	.loc_0x134:
	  lwz       r3, 0xC8(r31)
	  addi      r4, r30, 0x5C
	  li        r5, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x114(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x190

	.loc_0x154:
	  lwz       r3, 0xC8(r31)
	  addi      r4, r30, 0x6C
	  li        r5, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x114(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x190

	.loc_0x174:
	  lwz       r3, 0xC8(r31)
	  addi      r4, r30, 0x80
	  li        r5, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x114(r12)
	  mtctr     r12
	  bctrl

	.loc_0x190:
	  lwz       r3, 0xC8(r31)
	  li        r4, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x120(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x20(r3)
	  lis       r0, 0x4330
	  stw       r0, 0x8(r1)
	  li        r4, 0
	  lhz       r0, 0x2(r3)
	  lfd       f1, -0xBF0(r2)
	  xoris     r0, r0, 0x8000
	  stw       r0, 0xC(r1)
	  lfd       f0, 0x8(r1)
	  fsubs     f0, f0, f1
	  stfs      f0, 0xF8(r31)
	  lwz       r3, 0xC8(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x120(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x20(r3)
	  lis       r0, 0x4330
	  stw       r0, 0x10(r1)
	  lhz       r0, 0x4(r3)
	  lfd       f1, -0xBF0(r2)
	  xoris     r0, r0, 0x8000
	  stw       r0, 0x14(r1)
	  lfd       f0, 0x10(r1)
	  fsubs     f0, f0, f1
	  stfs      f0, 0xFC(r31)
	  lwz       r3, 0xC8(r31)
	  lfs       f1, 0x28(r3)
	  lfs       f0, 0x20(r3)
	  fsubs     f0, f1, f0
	  stfs      f0, 0x100(r31)
	  lwz       r3, 0xC8(r31)
	  lfs       f1, 0x2C(r3)
	  lfs       f0, 0x24(r3)
	  fsubs     f0, f1, f0
	  stfs      f0, 0x104(r31)
	  lwz       r3, 0xC8(r31)
	  lfs       f1, 0xF8(r31)
	  lwz       r12, 0x0(r3)
	  lfs       f2, 0xFC(r31)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0001B0
 */
void og::newScreen::ObjSMenuMap::setMapPos(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000BC
 */
void og::newScreen::ObjSMenuMap::setCompass(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8030FBE0
 * Size:	0001B8
 */
void og::newScreen::ObjSMenuMap::tuningIcon(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stmw      r26, 0x28(r1)
	  mr        r31, r3
	  lwz       r3, 0xA8(r3)
	  lbz       r0, 0x4A(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x8C
	  lwz       r3, -0x6D20(r13)
	  bl        -0x1B4FE8
	  lhz       r0, 0x2DC(r3)
	  cmpwi     r0, 0
	  bne-      .loc_0x64
	  lwz       r4, 0xD8(r31)
	  cmplwi    r4, 0
	  beq-      .loc_0x4C
	  lwz       r3, 0xC8(r31)
	  bl        -0x2D8564

	.loc_0x4C:
	  lwz       r4, 0xD0(r31)
	  cmplwi    r4, 0
	  beq-      .loc_0x8C
	  lwz       r3, 0xC8(r31)
	  bl        -0x2D8578
	  b         .loc_0x8C

	.loc_0x64:
	  lwz       r4, 0xD0(r31)
	  cmplwi    r4, 0
	  beq-      .loc_0x78
	  lwz       r3, 0xC8(r31)
	  bl        -0x2D8590

	.loc_0x78:
	  lwz       r4, 0xD8(r31)
	  cmplwi    r4, 0
	  beq-      .loc_0x8C
	  lwz       r3, 0xC8(r31)
	  bl        -0x2D85A4

	.loc_0x8C:
	  lis       r3, 0x804E
	  li        r29, 0
	  subi      r30, r3, 0x7C58

	.loc_0x98:
	  lwz       r3, 0xBC(r31)
	  lwz       r28, 0x0(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r27, 0x4(r30)
	  mr        r5, r28
	  lwz       r12, 0x3C(r12)
	  mr        r6, r27
	  mtctr     r12
	  bctrl
	  mr.       r26, r3
	  beq-      .loc_0xE0
	  bl        -0x2D6BC4
	  cmplwi    r3, 0
	  beq-      .loc_0xE0
	  mr        r3, r26
	  bl        -0x2D6BD4
	  mr        r4, r26
	  bl        -0x2D8488

	.loc_0xE0:
	  lwz       r3, 0x124(r31)
	  mr        r6, r27
	  mr        r5, r28
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  mr.       r26, r3
	  beq-      .loc_0x120
	  bl        -0x2D6C04
	  cmplwi    r3, 0
	  beq-      .loc_0x120
	  mr        r3, r26
	  bl        -0x2D6C14
	  mr        r4, r26
	  bl        -0x2D84C8

	.loc_0x120:
	  addi      r29, r29, 0x1
	  addi      r30, r30, 0x8
	  cmpwi     r29, 0x16
	  blt+      .loc_0x98
	  lis       r3, 0x8049
	  lfdu      f2, -0x1DC8(r3)
	  addi      r30, r1, 0x8
	  li        r26, 0
	  lfd       f1, 0x8(r3)
	  lfd       f0, 0x10(r3)
	  stfd      f2, 0x8(r1)
	  stfd      f1, 0x10(r1)
	  stfd      f0, 0x18(r1)

	.loc_0x154:
	  lwz       r3, 0x124(r31)
	  lwz       r5, 0x0(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r6, 0x4(r30)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  mr.       r27, r3
	  beq-      .loc_0x194
	  bl        -0x2D6C78
	  cmplwi    r3, 0
	  beq-      .loc_0x194
	  mr        r3, r27
	  bl        -0x2D6C88
	  mr        r4, r27
	  bl        -0x2D853C

	.loc_0x194:
	  addi      r26, r26, 0x1
	  addi      r30, r30, 0x8
	  cmpwi     r26, 0x3
	  blt+      .loc_0x154
	  lmw       r26, 0x28(r1)
	  lwz       r0, 0x44(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8030FD98
 * Size:	000C74
 */
void og::newScreen::ObjSMenuMap::initMapIcon((JKRArchive*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0xF0(r1)
	  mflr      r0
	  stw       r0, 0xF4(r1)
	  stfd      f31, 0xE0(r1)
	  psq_st    f31,0xE8(r1),0,0
	  stfd      f30, 0xD0(r1)
	  psq_st    f30,0xD8(r1),0,0
	  stmw      r21, 0xA4(r1)
	  mr        r31, r3
	  lis       r5, 0x8049
	  li        r3, 0x4
	  mr        r23, r4
	  subi      r25, r5, 0x1E58
	  oris      r3, r3, 0x4
	  mtspr     914, r3
	  li        r3, 0x5
	  oris      r3, r3, 0x5
	  mtspr     915, r3
	  li        r3, 0x6
	  oris      r3, r3, 0x6
	  mtspr     916, r3
	  li        r3, 0x7
	  oris      r3, r3, 0x7
	  mtspr     917, r3
	  lwz       r3, 0xAC(r31)
	  lis       r4, 0x6D
	  li        r5, 0
	  lwz       r12, 0x0(r3)
	  addi      r6, r4, 0x6170
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  mr        r24, r3
	  bl        -0x2D6D3C
	  cmplwi    r3, 0
	  beq-      .loc_0xA0
	  mr        r3, r24
	  bl        -0x2D6D4C
	  mr        r4, r24
	  bl        -0x2D8600

	.loc_0xA0:
	  li        r3, 0x148
	  bl        -0x2EBF98
	  mr.       r0, r3
	  beq-      .loc_0xB8
	  bl        0x124F64
	  mr        r0, r3

	.loc_0xB8:
	  stw       r0, 0xBC(r31)
	  mr        r6, r23
	  addi      r4, r25, 0xA8
	  lis       r5, 0x4
	  lwz       r3, 0xBC(r31)
	  bl        -0x2D0840
	  lwz       r3, 0xBC(r31)
	  lis       r4, 0x524F
	  addi      r6, r4, 0x4F54
	  li        r5, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC4(r31)
	  lis       r5, 0x695F
	  lis       r4, 0x70
	  lwz       r3, 0xBC(r31)
	  addi      r6, r5, 0x5F62
	  addi      r5, r4, 0x696B
	  bl        -0xCFF4
	  lis       r4, 0x8051
	  mr        r24, r3
	  addi      r5, r4, 0x3C40
	  lwz       r0, 0x48(r5)
	  addi      r4, r1, 0x1C
	  stw       r0, 0x1C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x12C(r12)
	  mtctr     r12
	  bctrl
	  lis       r4, 0x8051
	  mr        r3, r24
	  addi      r5, r4, 0x3C40
	  addi      r4, r1, 0x18
	  lwz       r0, 0x4C(r5)
	  stw       r0, 0x18(r1)
	  lwz       r12, 0x0(r24)
	  lwz       r12, 0x128(r12)
	  mtctr     r12
	  bctrl
	  li        r3, 0x148
	  bl        -0x2EC054
	  mr.       r0, r3
	  beq-      .loc_0x174
	  bl        0x124EA8
	  mr        r0, r3

	.loc_0x174:
	  stw       r0, 0x124(r31)
	  mr        r6, r23
	  addi      r4, r25, 0xA8
	  lis       r5, 0x4
	  lwz       r3, 0x124(r31)
	  bl        -0x2D08FC
	  mr        r3, r31
	  bl        -0x5B4
	  lfs       f0, 0xF8(r31)
	  lfs       f1, -0xC00(r2)
	  fneg      f0, f0
	  fmuls     f0, f0, f1
	  stfs      f0, 0xE0(r31)
	  lfs       f0, 0xFC(r31)
	  fneg      f0, f0
	  fmuls     f0, f0, f1
	  stfs      f0, 0xE4(r31)
	  lwz       r4, 0xA8(r31)
	  lbz       r0, 0x4A(r4)
	  cmplwi    r0, 0
	  beq-      .loc_0x318
	  lwz       r3, -0x6D20(r13)
	  bl        -0x1B5344
	  mr        r4, r3
	  addi      r3, r1, 0x7C
	  lwz       r12, 0x0(r4)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x7C(r1)
	  lfs       f1, 0x80(r1)
	  lfs       f0, 0x84(r1)
	  stfs      f2, 0x70(r1)
	  stfs      f1, 0x74(r1)
	  stfs      f0, 0x78(r1)
	  lwz       r5, 0xA8(r31)
	  lbz       r0, 0x49(r5)
	  cmplwi    r0, 0
	  beq-      .loc_0x258
	  lwz       r3, -0x6978(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x318
	  addi      r4, r1, 0x70
	  addi      r5, r1, 0x8
	  addi      r6, r1, 0xC
	  bl        -0xCB0DC
	  lfs       f2, -0xC18(r2)
	  lfs       f0, 0x8(r1)
	  lfs       f1, -0xC10(r2)
	  fadds     f0, f2, f0
	  fneg      f0, f0
	  stfs      f0, 0xE0(r31)
	  lfs       f0, 0xC(r1)
	  fadds     f0, f1, f0
	  fneg      f0, f0
	  stfs      f0, 0xE4(r31)
	  b         .loc_0x318

	.loc_0x258:
	  stfs      f0, 0x2C(r1)
	  lfs       f8, -0xC20(r2)
	  stfs      f2, 0x28(r1)
	  lwz       r0, 0x2C(r1)
	  fmr       f7, f8
	  lwz       r4, 0x28(r1)
	  stw       r0, 0x34(r1)
	  stw       r4, 0x30(r1)
	  lfs       f4, 0x34(r1)
	  beq-      .loc_0x2A4
	  lfs       f3, -0xC14(r2)
	  lfs       f0, -0xC10(r2)
	  lfs       f2, 0x30(r1)
	  lfs       f1, -0xC18(r2)
	  fmadds    f0, f3, f4, f0
	  fmadds    f1, f3, f2, f1
	  fadds     f7, f7, f0
	  fadds     f8, f8, f1
	  b         .loc_0x308

	.loc_0x2A4:
	  lwz       r0, 0x3C(r5)
	  fmr       f6, f8
	  cmpwi     r0, 0x3
	  bne-      .loc_0x2C8
	  lfs       f2, -0xC0C(r2)
	  lfs       f1, 0xF8(r31)
	  lfs       f0, -0xC08(r2)
	  fmuls     f1, f2, f1
	  fdivs     f6, f1, f0

	.loc_0x2C8:
	  lfs       f2, -0xBFC(r2)
	  lfs       f1, 0x30(r1)
	  lfs       f3, 0xF8(r31)
	  fmuls     f0, f2, f4
	  fmuls     f2, f2, f1
	  lfs       f4, -0xC00(r2)
	  lfs       f1, 0xFC(r31)
	  lfs       f5, -0xC04(r2)
	  fmadds    f3, f3, f4, f2
	  lfs       f2, -0xBF8(r2)
	  fmadds    f0, f1, f4, f0
	  fadds     f1, f5, f3
	  fadds     f0, f2, f0
	  fadds     f1, f6, f1
	  fadds     f7, f7, f0
	  fadds     f8, f8, f1

	.loc_0x308:
	  fneg      f1, f8
	  fneg      f0, f7
	  stfs      f1, 0xE0(r31)
	  stfs      f0, 0xE4(r31)

	.loc_0x318:
	  lfs       f1, 0x100(r31)
	  lis       r5, 0x6D70
	  lfs       f0, 0xF8(r31)
	  lis       r4, 0x4E
	  addi      r6, r5, 0x6173
	  fdivs     f0, f1, f0
	  addi      r5, r4, 0x636F
	  stfs      f0, 0xF0(r31)
	  lfs       f1, 0x104(r31)
	  lfs       f0, 0xFC(r31)
	  fdivs     f0, f1, f0
	  stfs      f0, 0xF4(r31)
	  lwz       r3, 0xAC(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x128(r31)
	  lis       r5, 0x7061
	  lis       r4, 0x63
	  lwz       r3, 0x124(r31)
	  addi      r6, r5, 0x7373
	  addi      r5, r4, 0x6F6D
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x12C(r31)
	  lis       r5, 0x7061
	  lis       r4, 0x63
	  lwz       r3, 0xBC(r31)
	  addi      r6, r5, 0x7373
	  addi      r5, r4, 0x6F6D
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  mr        r23, r3
	  bl        -0x2D7068
	  cmplwi    r3, 0
	  beq-      .loc_0x3CC
	  mr        r3, r23
	  bl        -0x2D7078
	  mr        r4, r23
	  bl        -0x2D892C

	.loc_0x3CC:
	  li        r3, 0x320
	  bl        -0x2EC1BC
	  li        r24, 0
	  stw       r3, 0xCC(r31)
	  mr        r23, r24
	  li        r26, 0

	.loc_0x3E4:
	  li        r3, 0x4
	  bl        -0x2EC2DC
	  cmplwi    r3, 0
	  beq-      .loc_0x3F8
	  stw       r23, 0x0(r3)

	.loc_0x3F8:
	  lwz       r4, 0xCC(r31)
	  addi      r26, r26, 0x1
	  cmpwi     r26, 0xC8
	  stwx      r3, r4, r24
	  addi      r24, r24, 0x4
	  blt+      .loc_0x3E4
	  li        r0, 0
	  li        r29, 0
	  stw       r0, 0x154(r31)
	  lwz       r3, -0x6A50(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0xC44
	  lwz       r4, 0xA8(r31)
	  lbz       r0, 0x4A(r4)
	  cmplwi    r0, 0
	  bne-      .loc_0x43C
	  bl        -0xF187C

	.loc_0x43C:
	  lwz       r6, -0x6A50(r13)
	  lis       r5, 0x8051
	  lis       r4, 0x804E
	  li        r26, 0
	  lwz       r28, 0x10(r6)
	  addi      r30, r5, 0x3C40
	  subi      r24, r4, 0x7C58
	  b         .loc_0xC3C

	.loc_0x45C:
	  lwz       r23, 0x18(r28)
	  cmpwi     r23, 0
	  blt-      .loc_0x470
	  cmpwi     r23, 0x16
	  blt-      .loc_0x488

	.loc_0x470:
	  mr        r6, r23
	  addi      r3, r25, 0xC
	  addi      r5, r25, 0xB8
	  li        r4, 0x239
	  crclr     6, 0x6
	  bl        -0x2E5BDC

	.loc_0x488:
	  mr        r4, r28
	  addi      r3, r1, 0x40
	  bl        -0xF1F9C
	  lfs       f0, 0x44(r1)
	  lfs       f1, 0x40(r1)
	  stfs      f0, 0x4C(r1)
	  lwz       r5, 0xA8(r31)
	  stfs      f1, 0x48(r1)
	  lfs       f30, -0xC20(r2)
	  stfs      f1, 0x4C(r1)
	  lbz       r0, 0x49(r5)
	  fmr       f31, f30
	  stfs      f0, 0x48(r1)
	  lwz       r4, 0x4C(r1)
	  cmplwi    r0, 0
	  lwz       r0, 0x48(r1)
	  stw       r4, 0x3C(r1)
	  stw       r0, 0x38(r1)
	  lfs       f4, 0x3C(r1)
	  beq-      .loc_0x4FC
	  lfs       f3, -0xC14(r2)
	  lfs       f0, -0xC10(r2)
	  lfs       f2, 0x38(r1)
	  lfs       f1, -0xC18(r2)
	  fmadds    f0, f3, f4, f0
	  fmadds    f1, f3, f2, f1
	  fadds     f31, f31, f0
	  fadds     f30, f30, f1
	  b         .loc_0x560

	.loc_0x4FC:
	  lwz       r0, 0x3C(r5)
	  fmr       f6, f30
	  cmpwi     r0, 0x3
	  bne-      .loc_0x520
	  lfs       f2, -0xC0C(r2)
	  lfs       f1, 0xF8(r31)
	  lfs       f0, -0xC08(r2)
	  fmuls     f1, f2, f1
	  fdivs     f6, f1, f0

	.loc_0x520:
	  lfs       f2, -0xBFC(r2)
	  lfs       f1, 0x38(r1)
	  lfs       f3, 0xF8(r31)
	  fmuls     f0, f2, f4
	  fmuls     f2, f2, f1
	  lfs       f4, -0xC00(r2)
	  lfs       f1, 0xFC(r31)
	  lfs       f5, -0xC04(r2)
	  fmadds    f3, f3, f4, f2
	  lfs       f2, -0xBF8(r2)
	  fmadds    f0, f1, f4, f0
	  fadds     f1, f5, f3
	  fadds     f0, f2, f0
	  fadds     f1, f6, f1
	  fadds     f31, f31, f0
	  fadds     f30, f30, f1

	.loc_0x560:
	  rlwinm    r0,r23,3,0,28
	  lwz       r3, 0xBC(r31)
	  add       r4, r24, r0
	  lwz       r22, 0x0(r4)
	  lwz       r21, 0x4(r4)
	  mr        r5, r22
	  mr        r6, r21
	  bl        -0xD468
	  lwz       r12, 0x0(r3)
	  mr        r27, r3
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r21
	  mr        r3, r22
	  addi      r5, r1, 0x88
	  bl        -0xD76C
	  cmpwi     r23, 0xF
	  beq-      .loc_0xA90
	  bge-      .loc_0x5C0
	  cmpwi     r23, 0xD
	  beq-      .loc_0x830
	  bge-      .loc_0x5CC
	  b         .loc_0xA90

	.loc_0x5C0:
	  cmpwi     r23, 0x14
	  bge-      .loc_0xA90
	  b         .loc_0xC30

	.loc_0x5CC:
	  li        r0, 0
	  lwz       r3, -0x6D20(r13)
	  lis       r4, 0x804B
	  stw       r0, 0x6C(r1)
	  subi      r4, r4, 0x434C
	  cmplwi    r0, 0
	  stw       r4, 0x60(r1)
	  stw       r0, 0x64(r1)
	  stw       r3, 0x68(r1)
	  bne-      .loc_0x60C
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x64(r1)
	  b         .loc_0x794

	.loc_0x60C:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x64(r1)
	  b         .loc_0x678

	.loc_0x624:
	  lwz       r3, 0x68(r1)
	  lwz       r4, 0x64(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x6C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x794
	  lwz       r3, 0x68(r1)
	  lwz       r4, 0x64(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x64(r1)

	.loc_0x678:
	  lwz       r12, 0x60(r1)
	  addi      r3, r1, 0x60
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x624
	  b         .loc_0x794

	.loc_0x698:
	  lwz       r3, 0x68(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  mr        r23, r3
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x6D8
	  lhz       r0, 0x2DC(r23)
	  cmpwi     r0, 0
	  bne-      .loc_0x6D8
	  b         .loc_0x7B8

	.loc_0x6D8:
	  lwz       r0, 0x6C(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x704
	  lwz       r3, 0x68(r1)
	  lwz       r4, 0x64(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x64(r1)
	  b         .loc_0x794

	.loc_0x704:
	  lwz       r3, 0x68(r1)
	  lwz       r4, 0x64(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x64(r1)
	  b         .loc_0x778

	.loc_0x724:
	  lwz       r3, 0x68(r1)
	  lwz       r4, 0x64(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x6C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x794
	  lwz       r3, 0x68(r1)
	  lwz       r4, 0x64(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x64(r1)

	.loc_0x778:
	  lwz       r12, 0x60(r1)
	  addi      r3, r1, 0x60
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x724

	.loc_0x794:
	  lwz       r3, 0x68(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x64(r1)
	  cmplw     r4, r3
	  bne+      .loc_0x698
	  li        r23, 0

	.loc_0x7B8:
	  stw       r23, 0xD4(r31)
	  lwz       r0, 0xD4(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0xC30
	  lis       r5, 0x6D61
	  lis       r4, 0x6F
	  lwz       r3, 0xBC(r31)
	  addi      r6, r5, 0x5F6C
	  addi      r5, r4, 0x7269
	  bl        -0xD6C8
	  fmr       f1, f30
	  lis       r6, 0x7269
	  lis       r5, 0x6965
	  fmr       f2, f31
	  lwz       r4, 0xC8(r31)
	  addi      r6, r6, 0x6D61
	  addi      r5, r5, 0x5F4F
	  bl        -0x1944
	  stw       r3, 0x130(r31)
	  lis       r6, 0x7269
	  fmr       f1, f30
	  lis       r5, 0x6963
	  fmr       f2, f31
	  lwz       r4, 0xC8(r31)
	  mr        r3, r27
	  addi      r6, r6, 0x6D61
	  addi      r5, r5, 0x5F4F
	  bl        -0x196C
	  stw       r3, 0xD0(r31)
	  b         .loc_0xC30

	.loc_0x830:
	  li        r0, 0
	  lwz       r3, -0x6D20(r13)
	  lis       r4, 0x804B
	  stw       r0, 0x5C(r1)
	  subi      r4, r4, 0x434C
	  cmplwi    r0, 0
	  stw       r4, 0x50(r1)
	  stw       r0, 0x54(r1)
	  stw       r3, 0x58(r1)
	  bne-      .loc_0x870
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x54(r1)
	  b         .loc_0x9F8

	.loc_0x870:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x54(r1)
	  b         .loc_0x8DC

	.loc_0x888:
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
	  bne-      .loc_0x9F8
	  lwz       r3, 0x58(r1)
	  lwz       r4, 0x54(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x54(r1)

	.loc_0x8DC:
	  lwz       r12, 0x50(r1)
	  addi      r3, r1, 0x50
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x888
	  b         .loc_0x9F8

	.loc_0x8FC:
	  lwz       r3, 0x58(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  mr        r23, r3
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x93C
	  lhz       r0, 0x2DC(r23)
	  cmpwi     r0, 0x1
	  bne-      .loc_0x93C
	  b         .loc_0xA1C

	.loc_0x93C:
	  lwz       r0, 0x5C(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x968
	  lwz       r3, 0x58(r1)
	  lwz       r4, 0x54(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x54(r1)
	  b         .loc_0x9F8

	.loc_0x968:
	  lwz       r3, 0x58(r1)
	  lwz       r4, 0x54(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x54(r1)
	  b         .loc_0x9DC

	.loc_0x988:
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
	  bne-      .loc_0x9F8
	  lwz       r3, 0x58(r1)
	  lwz       r4, 0x54(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x54(r1)

	.loc_0x9DC:
	  lwz       r12, 0x50(r1)
	  addi      r3, r1, 0x50
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x988

	.loc_0x9F8:
	  lwz       r3, 0x58(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x54(r1)
	  cmplw     r4, r3
	  bne+      .loc_0x8FC
	  li        r23, 0

	.loc_0xA1C:
	  stw       r23, 0xDC(r31)
	  lwz       r0, 0xDC(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0xC30
	  lis       r4, 0x6A69
	  lwz       r3, 0xBC(r31)
	  addi      r6, r4, 0x5F6C
	  li        r5, 0x6C75
	  bl        -0xD928
	  fmr       f1, f30
	  lis       r6, 0x4C75
	  lis       r5, 0x69
	  fmr       f2, f31
	  lwz       r4, 0xC8(r31)
	  addi      r6, r6, 0x6A69
	  addi      r5, r5, 0x655F
	  bl        -0x1BA4
	  stw       r3, 0x134(r31)
	  lis       r6, 0x4C75
	  fmr       f1, f30
	  lis       r5, 0x69
	  fmr       f2, f31
	  lwz       r4, 0xC8(r31)
	  mr        r3, r27
	  addi      r6, r6, 0x6A69
	  addi      r5, r5, 0x635F
	  bl        -0x1BCC
	  stw       r3, 0xD8(r31)
	  b         .loc_0xC30

	.loc_0xA90:
	  lis       r4, 0x6666
	  lis       r5, 0x5F30
	  addi      r0, r4, 0x6667
	  lis       r6, 0x6963
	  mulhw     r11, r0, r29
	  addi      r7, r5, 0x3030
	  lis       r4, 0x51EC
	  fmr       f1, f30
	  addi      r6, r6, 0x6F6E
	  fmr       f2, f31
	  srawi     r8, r11, 0x2
	  subi      r5, r4, 0x7AE1
	  rlwinm    r9,r8,1,31,31
	  lwz       r4, 0xC8(r31)
	  add       r8, r8, r9
	  mr        r3, r27
	  mulli     r8, r8, 0xA
	  sub       r9, r29, r8
	  srawi     r8, r9, 0x1F
	  addc      r10, r9, r7
	  adde      r9, r8, r6
	  srawi     r6, r11, 0x2
	  rlwinm    r7,r6,1,31,31
	  add       r8, r6, r7
	  mulhw     r6, r0, r8
	  srawi     r6, r6, 0x2
	  rlwinm    r7,r6,1,31,31
	  add       r6, r6, r7
	  mulli     r6, r6, 0xA
	  sub       r6, r8, r6
	  rlwinm    r7,r6,8,0,23
	  srawi     r6, r7, 0x1F
	  addc      r8, r10, r7
	  mulhw     r5, r5, r29
	  adde      r7, r9, r6
	  srawi     r5, r5, 0x5
	  rlwinm    r6,r5,1,31,31
	  add       r6, r5, r6
	  mulhw     r0, r0, r6
	  srawi     r0, r0, 0x2
	  rlwinm    r5,r0,1,31,31
	  add       r0, r0, r5
	  mulli     r0, r0, 0xA
	  sub       r0, r6, r0
	  rlwinm    r5,r0,16,0,15
	  srawi     r0, r5, 0x1F
	  addc      r6, r8, r5
	  adde      r5, r7, r0
	  bl        -0x1C98
	  mr.       r27, r3
	  beq-      .loc_0xC30
	  cmpwi     r23, 0x12
	  bne-      .loc_0xBE0
	  lbz       r7, 0x13(r30)
	  addi      r4, r1, 0x14
	  lbz       r6, 0x14(r30)
	  lbz       r5, 0x15(r30)
	  lbz       r0, 0x16(r30)
	  stb       r7, 0x24(r1)
	  lbz       r8, 0x17(r30)
	  stb       r6, 0x25(r1)
	  lbz       r7, 0x18(r30)
	  stb       r5, 0x26(r1)
	  lbz       r6, 0x19(r30)
	  stb       r0, 0x27(r1)
	  lbz       r5, 0x1A(r30)
	  lwz       r0, 0x24(r1)
	  stb       r8, 0x20(r1)
	  stw       r0, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  stb       r7, 0x21(r1)
	  lwz       r12, 0x12C(r12)
	  stb       r6, 0x22(r1)
	  stb       r5, 0x23(r1)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x20(r1)
	  mr        r3, r27
	  addi      r4, r1, 0x10
	  stw       r0, 0x10(r1)
	  lwz       r12, 0x0(r27)
	  lwz       r12, 0x128(r12)
	  mtctr     r12
	  bctrl

	.loc_0xBE0:
	  cmpwi     r23, 0xB
	  beq-      .loc_0xBF0
	  cmpwi     r23, 0x14
	  bne-      .loc_0xC1C

	.loc_0xBF0:
	  lwz       r3, 0x20(r28)
	  bl        0xC3F4
	  li        r5, 0x1
	  li        r6, 0x3
	  bl        -0xE078
	  mr        r7, r3
	  mr        r8, r4
	  mr        r3, r31
	  mr        r4, r27
	  rlwinm    r5,r29,0,16,31
	  bl        .loc_0xC74

	.loc_0xC1C:
	  lwz       r4, 0xCC(r31)
	  addi      r29, r29, 0x1
	  lwzx      r4, r4, r26
	  addi      r26, r26, 0x4
	  stw       r27, 0x0(r4)

	.loc_0xC30:
	  cmpwi     r29, 0xC8
	  bge-      .loc_0xC44
	  lwz       r28, 0x4(r28)

	.loc_0xC3C:
	  cmplwi    r28, 0
	  bne+      .loc_0x45C

	.loc_0xC44:
	  stw       r29, 0x11C(r31)
	  mr        r3, r31
	  bl        -0xE04
	  psq_l     f31,0xE8(r1),0,0
	  lfd       f31, 0xE0(r1)
	  psq_l     f30,0xD8(r1),0,0
	  lfd       f30, 0xD0(r1)
	  lmw       r21, 0xA4(r1)
	  lwz       r0, 0xF4(r1)
	  mtlr      r0
	  addi      r1, r1, 0xF0
	  blr

	.loc_0xC74:
	*/
}

/*
 * --INFO--
 * Address:	80310A0C
 * Size:	0001E4
 */
void og::newScreen::ObjSMenuMap::appendCaveName((J2DPane*, unsigned short,
                                                 unsigned long long))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x70(r1)
	  mflr      r0
	  lis       r9, 0x5478
	  lis       r6, 0x6361
	  stw       r0, 0x74(r1)
	  stmw      r25, 0x54(r1)
	  mr        r27, r3
	  mr        r28, r4
	  mr        r30, r7
	  mr        r29, r8
	  addi      r4, r9, 0x3F3F
	  addi      r3, r6, 0x7665
	  bl        -0xE228
	  mr        r25, r4
	  mr        r26, r3
	  mr        r4, r29
	  mr        r3, r30
	  addi      r5, r1, 0x40
	  bl        -0xDE88
	  lfs       f3, -0xBE8(r2)
	  li        r3, 0x138
	  lfs       f2, -0xC20(r2)
	  lfs       f1, -0xBE4(r2)
	  lfs       f0, -0xBE0(r2)
	  stfs      f3, 0x30(r1)
	  stfs      f2, 0x34(r1)
	  stfs      f1, 0x38(r1)
	  stfs      f0, 0x3C(r1)
	  bl        -0x2ECBD8
	  mr.       r31, r3
	  beq-      .loc_0xA8
	  li        r0, 0x2
	  mr        r6, r25
	  stw       r0, 0x8(r1)
	  mr        r5, r26
	  addi      r7, r1, 0x30
	  li        r8, 0
	  stw       r0, 0xC(r1)
	  subi      r9, r2, 0xBDC
	  li        r10, -0x1
	  bl        -0x2CF5C0
	  mr        r31, r3

	.loc_0xA8:
	  li        r8, 0xFF
	  li        r0, 0
	  stb       r8, 0x2C(r1)
	  mr        r3, r31
	  lfs       f0, -0xBD8(r2)
	  addi      r4, r1, 0x14
	  stb       r8, 0x2D(r1)
	  addi      r5, r1, 0x10
	  stfs      f0, 0x11C(r31)
	  stb       r8, 0x2E(r1)
	  stb       r8, 0x2F(r1)
	  lwz       r6, 0x2C(r1)
	  stfs      f0, 0x120(r31)
	  stw       r6, 0x1C(r1)
	  lbz       r7, 0x1C(r1)
	  stb       r8, 0x28(r1)
	  lbz       r6, 0x1D(r1)
	  stb       r7, 0x104(r31)
	  lbz       r7, 0x1E(r1)
	  stb       r6, 0x105(r31)
	  lbz       r6, 0x1F(r1)
	  stb       r7, 0x106(r31)
	  stb       r8, 0x29(r1)
	  stb       r8, 0x2A(r1)
	  stb       r8, 0x2B(r1)
	  lwz       r7, 0x28(r1)
	  stb       r6, 0x107(r31)
	  stw       r7, 0x18(r1)
	  lbz       r6, 0x18(r1)
	  lbz       r7, 0x19(r1)
	  stb       r6, 0x108(r31)
	  lbz       r6, 0x1A(r1)
	  stb       r7, 0x109(r31)
	  lbz       r7, 0x1B(r1)
	  stb       r6, 0x10A(r31)
	  stb       r8, 0x24(r1)
	  stb       r8, 0x25(r1)
	  stb       r8, 0x26(r1)
	  stb       r8, 0x27(r1)
	  stb       r0, 0x20(r1)
	  lwz       r6, 0x24(r1)
	  stb       r7, 0x10B(r31)
	  stb       r0, 0x21(r1)
	  stb       r0, 0x22(r1)
	  stb       r0, 0x23(r1)
	  lwz       r0, 0x20(r1)
	  stw       r6, 0x10(r1)
	  stw       r0, 0x14(r1)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xAC(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r28
	  mr        r4, r31
	  bl        -0x2D94C8
	  stw       r29, 0x1C(r31)
	  stw       r30, 0x18(r31)
	  lwz       r0, 0x154(r27)
	  cmpwi     r0, 0x5
	  bge-      .loc_0x1B4
	  rlwinm    r0,r0,2,0,29
	  add       r3, r27, r0
	  stw       r31, 0x140(r3)
	  lwz       r3, 0x154(r27)
	  addi      r0, r3, 0x1
	  stw       r0, 0x154(r27)
	  b         .loc_0x1D0

	.loc_0x1B4:
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  subi      r3, r3, 0x1E4C
	  li        r4, 0x2E9
	  subi      r5, r5, 0x1D88
	  crclr     6, 0x6
	  bl        -0x2E6598

	.loc_0x1D0:
	  lmw       r25, 0x54(r1)
	  lwz       r0, 0x74(r1)
	  mtlr      r0
	  addi      r1, r1, 0x70
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000004
 */
void og::newScreen::ObjSMenuMap::rotateMap(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80310BF0
 * Size:	0002E8
 */
void og::newScreen::ObjSMenuMap::transMap(void)
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
	  stfd      f28, 0x40(r1)
	  psq_st    f28,0x48(r1),0,0
	  stfd      f27, 0x30(r1)
	  psq_st    f27,0x38(r1),0,0
	  stw       r31, 0x2C(r1)
	  mr        r31, r3
	  lis       r3, 0x8051
	  lwz       r0, 0xC0(r31)
	  addi      r3, r3, 0x3C40
	  lfs       f0, 0x1C(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x58
	  lfs       f0, 0x20(r3)

	.loc_0x58:
	  lfs       f3, -0xBD4(r2)
	  lfs       f1, 0xEC(r31)
	  lfs       f2, -0xBD0(r2)
	  fmuls     f3, f3, f1
	  lfs       f1, -0xC20(r2)
	  fdivs     f4, f3, f2
	  fmr       f2, f4
	  fcmpo     cr0, f4, f1
	  bge-      .loc_0x80
	  fneg      f2, f4

	.loc_0x80:
	  lfs       f3, -0xBCC(r2)
	  lis       r3, 0x8050
	  lfs       f1, -0xC20(r2)
	  addi      r4, r3, 0x71A0
	  fmuls     f2, f2, f3
	  fcmpo     cr0, f4, f1
	  fctiwz    f1, f2
	  stfd      f1, 0x8(r1)
	  lwz       r0, 0xC(r1)
	  rlwinm    r0,r0,3,18,28
	  add       r3, r4, r0
	  lfs       f31, 0x4(r3)
	  bge-      .loc_0xD8
	  lfs       f1, -0xBC8(r2)
	  fmuls     f1, f4, f1
	  fctiwz    f1, f1
	  stfd      f1, 0x10(r1)
	  lwz       r0, 0x14(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f1, r4, r0
	  fneg      f30, f1
	  b         .loc_0xF0

	.loc_0xD8:
	  fmuls     f1, f4, f3
	  fctiwz    f1, f1
	  stfd      f1, 0x18(r1)
	  lwz       r0, 0x1C(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f30, r4, r0

	.loc_0xF0:
	  lwz       r3, 0x118(r31)
	  lwz       r4, 0x18(r3)
	  lfs       f28, 0x48(r3)
	  rlwinm.   r0,r4,0,28,28
	  lfs       f27, 0x4C(r3)
	  beq-      .loc_0x10C
	  lfs       f27, -0xC1C(r2)

	.loc_0x10C:
	  rlwinm.   r0,r4,0,29,29
	  beq-      .loc_0x118
	  lfs       f27, -0xBC4(r2)

	.loc_0x118:
	  rlwinm.   r0,r4,0,31,31
	  beq-      .loc_0x124
	  lfs       f28, -0xBC4(r2)

	.loc_0x124:
	  rlwinm.   r0,r4,0,30,30
	  beq-      .loc_0x130
	  lfs       f28, -0xC1C(r2)

	.loc_0x130:
	  fmuls     f3, f28, f28
	  lfs       f1, -0xC20(r2)
	  fmuls     f2, f27, f27
	  fadds     f2, f3, f2
	  fcmpo     cr0, f2, f1
	  ble-      .loc_0x158
	  ble-      .loc_0x15C
	  fsqrte    f1, f2
	  fmuls     f2, f1, f2
	  b         .loc_0x15C

	.loc_0x158:
	  fmr       f2, f1

	.loc_0x15C:
	  lfs       f1, -0xC1C(r2)
	  fmr       f3, f2
	  fcmpo     cr0, f2, f1
	  ble-      .loc_0x170
	  fmr       f3, f1

	.loc_0x170:
	  lis       r3, 0x8051
	  lfs       f1, -0xBC0(r2)
	  addi      r3, r3, 0x3C40
	  lfs       f2, 0x3C(r3)
	  fmuls     f4, f3, f2
	  fcmpo     cr0, f4, f1
	  bge-      .loc_0x190
	  lfs       f4, -0xC20(r2)

	.loc_0x190:
	  lfs       f3, -0xC1C(r2)
	  lfs       f2, 0xE8(r31)
	  lfs       f1, -0xBC0(r2)
	  fdivs     f2, f3, f2
	  fmuls     f0, f0, f2
	  fcmpo     cr0, f28, f1
	  fmuls     f29, f4, f0
	  ble-      .loc_0x1D0
	  lfs       f0, 0xE0(r31)
	  fnmsubs   f0, f29, f31, f0
	  stfs      f0, 0xE0(r31)
	  lfs       f0, 0xE4(r31)
	  fnmsubs   f0, f29, f30, f0
	  stfs      f0, 0xE4(r31)
	  lwz       r3, -0x6858(r13)
	  bl        -0x40C4

	.loc_0x1D0:
	  lfs       f0, -0xBBC(r2)
	  fcmpo     cr0, f28, f0
	  bge-      .loc_0x1FC
	  lfs       f0, 0xE0(r31)
	  fmadds    f0, f29, f31, f0
	  stfs      f0, 0xE0(r31)
	  lfs       f0, 0xE4(r31)
	  fmadds    f0, f29, f30, f0
	  stfs      f0, 0xE4(r31)
	  lwz       r3, -0x6858(r13)
	  bl        -0x40F0

	.loc_0x1FC:
	  lfs       f0, -0xBC0(r2)
	  fcmpo     cr0, f27, f0
	  ble-      .loc_0x228
	  lfs       f0, 0xE0(r31)
	  fnmsubs   f0, f29, f30, f0
	  stfs      f0, 0xE0(r31)
	  lfs       f0, 0xE4(r31)
	  fmadds    f0, f29, f31, f0
	  stfs      f0, 0xE4(r31)
	  lwz       r3, -0x6858(r13)
	  bl        -0x411C

	.loc_0x228:
	  lfs       f0, -0xBBC(r2)
	  fcmpo     cr0, f27, f0
	  bge-      .loc_0x254
	  lfs       f0, 0xE0(r31)
	  fmadds    f0, f29, f30, f0
	  stfs      f0, 0xE0(r31)
	  lfs       f0, 0xE4(r31)
	  fnmsubs   f0, f29, f31, f0
	  stfs      f0, 0xE4(r31)
	  lwz       r3, -0x6858(r13)
	  bl        -0x4148

	.loc_0x254:
	  lfs       f0, 0xF8(r31)
	  lfs       f1, 0xE0(r31)
	  fneg      f0, f0
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x26C
	  stfs      f0, 0xE0(r31)

	.loc_0x26C:
	  lfs       f1, 0xE0(r31)
	  lfs       f0, -0xC20(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x280
	  stfs      f0, 0xE0(r31)

	.loc_0x280:
	  lfs       f0, 0xFC(r31)
	  lfs       f1, 0xE4(r31)
	  fneg      f0, f0
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x298
	  stfs      f0, 0xE4(r31)

	.loc_0x298:
	  lfs       f1, 0xE4(r31)
	  lfs       f0, -0xC20(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x2AC
	  stfs      f0, 0xE4(r31)

	.loc_0x2AC:
	  psq_l     f31,0x78(r1),0,0
	  lfd       f31, 0x70(r1)
	  psq_l     f30,0x68(r1),0,0
	  lfd       f30, 0x60(r1)
	  psq_l     f29,0x58(r1),0,0
	  lfd       f29, 0x50(r1)
	  psq_l     f28,0x48(r1),0,0
	  lfd       f28, 0x40(r1)
	  psq_l     f27,0x38(r1),0,0
	  lfd       f27, 0x30(r1)
	  lwz       r0, 0x84(r1)
	  lwz       r31, 0x2C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x80
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000C4
 */
void og::newScreen::ObjSMenuMap::scaleMap(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000B0
 */
void og::newScreen::ObjSMenuMap::setMapColor(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000054
 */
void og::newScreen::ObjSMenuMap::calcCaveNameAlpha(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80310ED8
 * Size:	000960
 */
void og::newScreen::ObjSMenuMap::doCreate((JKRArchive*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x70(r1)
	  mflr      r0
	  lis       r5, 0x8049
	  stw       r0, 0x74(r1)
	  stmw      r18, 0x38(r1)
	  mr        r29, r3
	  mr        r30, r4
	  subi      r18, r5, 0x1E58
	  bl        0x1430B0
	  lis       r4, 0x4F
	  lis       r6, 0x5F4D
	  li        r5, 0x534D
	  mr        r31, r3
	  addi      r4, r4, 0x4741
	  addi      r6, r6, 0x4150
	  bl        -0x1A54
	  stw       r3, 0xA8(r29)
	  lwz       r0, 0xA8(r29)
	  cmplwi    r0, 0
	  bne-      .loc_0x8C
	  li        r3, 0xC4
	  bl        -0x2ED088
	  mr.       r0, r3
	  beq-      .loc_0x68
	  bl        -0xFBC40
	  mr        r0, r3

	.loc_0x68:
	  lis       r4, 0x4F
	  lis       r5, 0x5F4D
	  mr        r31, r0
	  mr        r3, r0
	  addi      r4, r4, 0x4741
	  addi      r6, r5, 0x4150
	  li        r5, 0x534D
	  bl        -0x1A9C
	  stw       r3, 0xA8(r29)

	.loc_0x8C:
	  li        r3, 0x1A8
	  bl        -0x2ED0C4
	  mr.       r0, r3
	  beq-      .loc_0xAC
	  lwz       r4, 0xA8(r29)
	  addi      r4, r4, 0x8
	  bl        -0x91B0
	  mr        r0, r3

	.loc_0xAC:
	  stw       r0, 0xAC(r29)
	  mr        r6, r30
	  addi      r4, r18, 0xF0
	  lis       r5, 0x104
	  lwz       r3, 0xAC(r29)
	  bl        -0x2D1974
	  li        r3, 0x1C
	  bl        -0x2ED0FC
	  mr.       r0, r3
	  beq-      .loc_0xE0
	  li        r4, 0x3
	  bl        -0xBB58
	  mr        r0, r3

	.loc_0xE0:
	  stw       r0, 0xB0(r29)
	  lis       r3, 0x8051
	  addi      r7, r3, 0x3CF4
	  mr        r4, r30
	  lwz       r3, 0xB0(r29)
	  addi      r6, r18, 0x104
	  lwz       r5, 0xAC(r29)
	  lfs       f1, 0x0(r7)
	  bl        -0xB640
	  lis       r4, 0x8051
	  lwz       r3, 0xB0(r29)
	  lfs       f1, 0x3CF4(r4)
	  mr        r4, r30
	  lwz       r5, 0xAC(r29)
	  addi      r6, r18, 0x118
	  bl        -0xB65C
	  lis       r4, 0x8051
	  lwz       r3, 0xB0(r29)
	  lfs       f1, 0x3CF4(r4)
	  mr        r4, r30
	  lwz       r5, 0xAC(r29)
	  addi      r6, r18, 0x12C
	  bl        -0xB678
	  lwz       r3, 0xAC(r29)
	  mr        r4, r30
	  bl        -0x902C
	  lis       r5, 0x6365
	  lis       r4, 0x6D61
	  lwz       r3, 0xAC(r29)
	  addi      r6, r5, 0x6E74
	  addi      r5, r4, 0x705F
	  bl        -0xE188
	  stw       r3, 0xB4(r29)
	  lwz       r3, 0xA8(r29)
	  lbz       r0, 0x49(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x194
	  lbz       r0, 0x4A(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x194
	  lis       r3, 0x8051
	  addi      r3, r3, 0x3C40
	  lfs       f0, 0x30(r3)
	  stfs      f0, 0x138(r29)
	  b         .loc_0x1A4

	.loc_0x194:
	  lis       r3, 0x8051
	  addi      r3, r3, 0x3C40
	  lfs       f0, 0x2C(r3)
	  stfs      f0, 0x138(r29)

	.loc_0x1A4:
	  lfs       f1, 0x138(r29)
	  lfs       f0, -0xC20(r2)
	  stfs      f1, 0xE8(r29)
	  stfs      f0, 0xEC(r29)
	  lwz       r3, 0xA8(r29)
	  lbz       r0, 0x4A(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x214
	  lwz       r3, -0x6D20(r13)
	  bl        -0x1B6480
	  lwz       r4, -0x6960(r13)
	  lhz       r0, 0x2DC(r3)
	  addi      r3, r1, 0x18
	  lwz       r4, 0x24(r4)
	  rlwinm    r0,r0,2,0,29
	  lwzx      r4, r4, r0
	  bl        0x109218
	  lfs       f0, 0x20(r1)
	  lis       r3, 0x8051
	  lfs       f1, 0x18(r1)
	  subi      r3, r3, 0x2E20
	  fneg      f2, f0
	  bl        -0x2DBFCC
	  lfs       f0, -0xB94(r2)
	  lfs       f2, -0xB98(r2)
	  fdivs     f0, f1, f0
	  fmuls     f0, f2, f0
	  stfs      f0, 0xEC(r29)

	.loc_0x214:
	  mr        r3, r29
	  mr        r4, r30
	  bl        -0x135C
	  lis       r3, 0x8051
	  addi      r4, r1, 0x10
	  addi      r8, r3, 0x3C40
	  lbz       r3, 0xB(r8)
	  lbz       r6, 0xC(r8)
	  lbz       r5, 0xD(r8)
	  lbz       r0, 0xE(r8)
	  stb       r3, 0x8(r1)
	  lbz       r3, 0xF(r8)
	  stb       r6, 0x9(r1)
	  lbz       r7, 0x10(r8)
	  stb       r5, 0xA(r1)
	  lbz       r6, 0x11(r8)
	  stb       r0, 0xB(r1)
	  lbz       r5, 0x12(r8)
	  lwz       r0, 0x8(r1)
	  stb       r3, 0xC(r1)
	  stw       r0, 0x10(r1)
	  lwz       r3, 0xC8(r29)
	  stb       r7, 0xD(r1)
	  lwz       r12, 0x0(r3)
	  stb       r6, 0xE(r1)
	  lwz       r12, 0x12C(r12)
	  stb       r5, 0xF(r1)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0xC(r1)
	  addi      r4, r1, 0x14
	  stw       r0, 0x14(r1)
	  lwz       r3, 0xC8(r29)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x128(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0xA8(r29)
	  li        r19, 0
	  mr        r18, r19
	  lbz       r0, 0x49(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x2F4
	  lbz       r0, 0x4A(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x2F4
	  lwz       r3, 0x40(r3)
	  bl        0xBBD8
	  li        r5, 0x1
	  li        r6, 0x3
	  bl        -0xE894
	  mr        r19, r4
	  addi      r5, r1, 0x24
	  mr        r18, r3
	  bl        -0xE5F8
	  b         .loc_0x384

	.loc_0x2F4:
	  lwz       r0, 0x3C(r3)
	  cmpwi     r0, 0x2
	  beq-      .loc_0x34C
	  bge-      .loc_0x314
	  cmpwi     r0, 0
	  beq-      .loc_0x324
	  bge-      .loc_0x338
	  b         .loc_0x384

	.loc_0x314:
	  cmpwi     r0, 0x4
	  beq-      .loc_0x374
	  bge-      .loc_0x384
	  b         .loc_0x360

	.loc_0x324:
	  lis       r4, 0x305F
	  lis       r3, 0x38
	  addi      r19, r4, 0x3033
	  addi      r18, r3, 0x3339
	  b         .loc_0x384

	.loc_0x338:
	  lis       r4, 0x315F
	  lis       r3, 0x38
	  addi      r19, r4, 0x3033
	  addi      r18, r3, 0x3339
	  b         .loc_0x384

	.loc_0x34C:
	  lis       r4, 0x325F
	  lis       r3, 0x38
	  addi      r19, r4, 0x3033
	  addi      r18, r3, 0x3339
	  b         .loc_0x384

	.loc_0x360:
	  lis       r4, 0x335F
	  lis       r3, 0x38
	  addi      r19, r4, 0x3033
	  addi      r18, r3, 0x3339
	  b         .loc_0x384

	.loc_0x374:
	  lis       r4, 0x345F
	  lis       r3, 0x38
	  addi      r19, r4, 0x3033
	  addi      r18, r3, 0x3339

	.loc_0x384:
	  lwz       r3, 0xAC(r29)
	  lis       r4, 0x6170
	  addi      r6, r4, 0x7469
	  li        r5, 0x546D
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  stw       r19, 0x1C(r3)
	  stw       r18, 0x18(r3)
	  lwz       r3, 0xBC(r29)
	  bl        -0x7488
	  lwz       r3, 0xAC(r29)
	  lis       r4, 0x706B
	  addi      r6, r4, 0x3031
	  li        r5, 0x4E
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  mr        r18, r3
	  lwz       r3, 0xAC(r29)
	  lis       r4, 0x706B
	  li        r5, 0x4E
	  lwz       r12, 0x0(r3)
	  addi      r6, r4, 0x3032
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  mr        r19, r3
	  lwz       r3, 0xAC(r29)
	  lis       r4, 0x706B
	  li        r5, 0x4E
	  lwz       r12, 0x0(r3)
	  addi      r6, r4, 0x3033
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  mr        r20, r3
	  lwz       r3, 0xAC(r29)
	  lis       r4, 0x706B
	  li        r5, 0x4E
	  lwz       r12, 0x0(r3)
	  addi      r6, r4, 0x3034
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  mr        r21, r3
	  lwz       r3, 0xAC(r29)
	  lis       r4, 0x706B
	  li        r5, 0x4E
	  lwz       r12, 0x0(r3)
	  addi      r6, r4, 0x3035
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  mr        r22, r3
	  lwz       r3, 0xAC(r29)
	  lis       r4, 0x706B
	  li        r5, 0x4E
	  lwz       r12, 0x0(r3)
	  addi      r6, r4, 0x3036
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  mr        r23, r3
	  lwz       r3, 0xAC(r29)
	  lis       r4, 0x706B
	  li        r5, 0x4E
	  lwz       r12, 0x0(r3)
	  addi      r6, r4, 0x3037
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  mr        r24, r3
	  lwz       r3, 0xAC(r29)
	  lis       r4, 0x706B
	  li        r5, 0x4E
	  lwz       r12, 0x0(r3)
	  addi      r6, r4, 0x3038
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  mr        r25, r3
	  lwz       r3, 0xAC(r29)
	  lis       r4, 0x706B
	  li        r5, 0x4E
	  lwz       r12, 0x0(r3)
	  addi      r6, r4, 0x3039
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  mr        r26, r3
	  lwz       r3, 0xAC(r29)
	  lis       r4, 0x706B
	  li        r5, 0x4E
	  lwz       r12, 0x0(r3)
	  addi      r6, r4, 0x3130
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  mr        r27, r3
	  lwz       r3, 0xAC(r29)
	  lis       r4, 0x706B
	  li        r5, 0x4E
	  lwz       r12, 0x0(r3)
	  addi      r6, r4, 0x3131
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0xA8(r29)
	  mr        r28, r3
	  lbz       r0, 0x44(r4)
	  cmplwi    r0, 0
	  bne-      .loc_0x568
	  li        r0, 0
	  li        r4, 0
	  stb       r0, 0xB0(r18)
	  stb       r0, 0xB0(r23)
	  lwz       r3, 0xAC(r29)
	  bl        -0x958C

	.loc_0x568:
	  lwz       r3, 0xA8(r29)
	  lbz       r0, 0x45(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x590
	  li        r0, 0
	  li        r4, 0
	  stb       r0, 0xB0(r19)
	  stb       r0, 0xB0(r24)
	  lwz       r3, 0xAC(r29)
	  bl        -0x957C

	.loc_0x590:
	  lwz       r3, 0xA8(r29)
	  lbz       r0, 0x46(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x5B8
	  li        r0, 0
	  li        r4, 0
	  stb       r0, 0xB0(r20)
	  stb       r0, 0xB0(r25)
	  lwz       r3, 0xAC(r29)
	  bl        -0x956C

	.loc_0x5B8:
	  lwz       r3, 0xA8(r29)
	  lbz       r0, 0x47(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x5E0
	  li        r0, 0
	  li        r4, 0
	  stb       r0, 0xB0(r21)
	  stb       r0, 0xB0(r26)
	  lwz       r3, 0xAC(r29)
	  bl        -0x955C

	.loc_0x5E0:
	  lwz       r3, 0xA8(r29)
	  lbz       r0, 0x48(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x608
	  li        r0, 0
	  li        r4, 0
	  stb       r0, 0xB0(r22)
	  stb       r0, 0xB0(r27)
	  lwz       r3, 0xAC(r29)
	  bl        -0x954C

	.loc_0x608:
	  lwz       r3, 0xA8(r29)
	  lbz       r0, 0x44(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x65C
	  lbz       r0, 0x45(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x65C
	  lbz       r0, 0x46(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x65C
	  lbz       r0, 0x47(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x65C
	  lbz       r0, 0x48(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x65C
	  li        r0, 0
	  li        r4, 0
	  stb       r0, 0xB0(r28)
	  lwz       r3, 0xAC(r29)
	  bl        -0x9568

	.loc_0x65C:
	  lwz       r3, 0xAC(r29)
	  lis       r5, 0x636B
	  lis       r4, 0x4E
	  lwz       r12, 0x0(r3)
	  addi      r6, r5, 0x6574
	  addi      r5, r4, 0x726F
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0xA8(r29)
	  lbz       r0, 0x47(r4)
	  cmplwi    r0, 0
	  bne-      .loc_0x69C
	  lbz       r0, 0x48(r4)
	  cmplwi    r0, 0
	  beq-      .loc_0x744

	.loc_0x69C:
	  li        r0, 0x1
	  lis       r5, 0x636B
	  stb       r0, 0xB0(r3)
	  lis       r4, 0x4E
	  addi      r6, r5, 0x5F31
	  lwz       r3, 0xAC(r29)
	  addi      r5, r4, 0x726F
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  mr        r19, r3
	  lwz       r3, 0xAC(r29)
	  lis       r5, 0x636B
	  lis       r4, 0x4E
	  lwz       r12, 0x0(r3)
	  addi      r6, r5, 0x5F32
	  addi      r5, r4, 0x726F
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  li        r0, 0
	  mr        r18, r3
	  stb       r0, 0xB0(r19)
	  lis       r4, 0x4F
	  lis       r6, 0x4155
	  lis       r5, 0x534D
	  stb       r0, 0xB0(r3)
	  mr        r3, r31
	  addi      r4, r4, 0x4741
	  addi      r6, r6, 0x5345
	  addi      r5, r5, 0x5F50
	  bl        -0x2134
	  lwz       r0, 0xC(r3)
	  cmplwi    r0, 0x2710
	  blt-      .loc_0x738
	  li        r0, 0x1
	  stb       r0, 0xB0(r18)
	  b         .loc_0x788

	.loc_0x738:
	  li        r0, 0x1
	  stb       r0, 0xB0(r19)
	  b         .loc_0x788

	.loc_0x744:
	  li        r0, 0
	  lis       r5, 0x7265
	  stb       r0, 0xB0(r3)
	  lis       r4, 0x4E74
	  addi      r6, r5, 0x7475
	  lwz       r3, 0xAC(r29)
	  addi      r5, r4, 0x6169
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  lfs       f1, -0xC20(r2)
	  lwz       r12, 0x14(r12)
	  lfs       f2, -0xB90(r2)
	  mtctr     r12
	  bctrl

	.loc_0x788:
	  lwz       r3, 0xAC(r29)
	  lis       r5, 0x796E
	  lis       r4, 0x4E
	  lwz       r12, 0x0(r3)
	  addi      r6, r5, 0x5F31
	  addi      r5, r4, 0x6F6E
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  mr        r20, r3
	  lwz       r3, 0xAC(r29)
	  lis       r5, 0x796E
	  lis       r4, 0x4E
	  lwz       r12, 0x0(r3)
	  addi      r6, r5, 0x5F32
	  addi      r5, r4, 0x6F6E
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  mr        r19, r3
	  lwz       r3, 0xAC(r29)
	  lis       r5, 0x796E
	  lis       r4, 0x4E
	  lwz       r12, 0x0(r3)
	  addi      r6, r5, 0x5F33
	  addi      r5, r4, 0x6F6E
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  mr        r18, r3
	  lwz       r3, 0xAC(r29)
	  lis       r5, 0x796E
	  lis       r4, 0x4E
	  lwz       r12, 0x0(r3)
	  addi      r6, r5, 0x5F34
	  addi      r5, r4, 0x6F6E
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  li        r0, 0
	  stb       r0, 0xB0(r20)
	  stb       r0, 0xB0(r19)
	  stb       r0, 0xB0(r18)
	  stb       r0, 0xB0(r3)
	  lwz       r4, 0xA8(r29)
	  lbz       r5, 0x44(r4)
	  cmplwi    r5, 0
	  beq-      .loc_0x86C
	  lbz       r0, 0x45(r4)
	  cmplwi    r0, 0
	  beq-      .loc_0x86C
	  lbz       r0, 0x46(r4)
	  cmplwi    r0, 0
	  beq-      .loc_0x86C
	  li        r0, 0x1
	  stb       r0, 0xB0(r3)
	  b         .loc_0x8BC

	.loc_0x86C:
	  cmplwi    r5, 0
	  beq-      .loc_0x88C
	  lbz       r0, 0x46(r4)
	  cmplwi    r0, 0
	  beq-      .loc_0x88C
	  li        r0, 0x1
	  stb       r0, 0xB0(r18)
	  b         .loc_0x8BC

	.loc_0x88C:
	  cmplwi    r5, 0
	  beq-      .loc_0x8AC
	  lbz       r0, 0x45(r4)
	  cmplwi    r0, 0
	  beq-      .loc_0x8AC
	  li        r0, 0x1
	  stb       r0, 0xB0(r19)
	  b         .loc_0x8BC

	.loc_0x8AC:
	  cmplwi    r5, 0
	  beq-      .loc_0x8BC
	  li        r0, 0x1
	  stb       r0, 0xB0(r20)

	.loc_0x8BC:
	  lwz       r3, 0xAC(r29)
	  lis       r4, 0x6169
	  addi      r6, r4, 0x5F31
	  li        r5, 0x4E74
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  mr        r18, r3
	  lwz       r3, 0xAC(r29)
	  lis       r4, 0x6169
	  li        r5, 0x4E74
	  lwz       r12, 0x0(r3)
	  addi      r6, r4, 0x5F32
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  li        r0, 0
	  stb       r0, 0xB0(r18)
	  stb       r0, 0xB0(r3)
	  lwz       r4, 0xA8(r29)
	  lbz       r0, 0x46(r4)
	  cmplwi    r0, 0
	  beq-      .loc_0x924
	  li        r0, 0x1
	  stb       r0, 0xB0(r18)

	.loc_0x924:
	  lwz       r4, 0xA8(r29)
	  lbz       r0, 0x45(r4)
	  cmplwi    r0, 0
	  beq-      .loc_0x93C
	  li        r0, 0x1
	  stb       r0, 0xB0(r3)

	.loc_0x93C:
	  lwz       r5, 0xAC(r29)
	  mr        r3, r29
	  mr        r4, r30
	  bl        0x4B58
	  lmw       r18, 0x38(r1)
	  lwz       r0, 0x74(r1)
	  mtlr      r0
	  addi      r1, r1, 0x70
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80311838
 * Size:	000598
 */
void og::newScreen::ObjSMenuMap::updateMap(void)
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
	  stmw      r26, 0x48(r1)
	  lwz       r12, 0x0(r3)
	  mr        r28, r3
	  lwz       r12, 0x30(r12)
	  mtctr     r12
	  bctrl
	  bl        0x1409BC
	  stw       r3, 0x118(r28)
	  lbz       r0, -0x682C(r13)
	  extsb.    r0, r0
	  bne-      .loc_0x60
	  lfs       f0, -0xC20(r2)
	  li        r0, 0x1
	  stb       r0, -0x682C(r13)
	  stfs      f0, -0x6830(r13)

	.loc_0x60:
	  lwz       r3, -0x6514(r13)
	  lfs       f2, -0x6830(r13)
	  lfs       f1, 0x54(r3)
	  lfs       f0, -0xC1C(r2)
	  fadds     f1, f2, f1
	  fcmpo     cr0, f1, f0
	  stfs      f1, -0x6830(r13)
	  ble-      .loc_0x88
	  lfs       f0, -0xC20(r2)
	  stfs      f0, -0x6830(r13)

	.loc_0x88:
	  lfs       f2, -0xBD4(r2)
	  lfs       f1, -0x6830(r13)
	  lfs       f0, -0xC20(r2)
	  fmuls     f4, f2, f1
	  lfs       f7, -0xB8C(r2)
	  lfs       f6, -0xB88(r2)
	  lfs       f1, -0xC1C(r2)
	  fcmpo     cr0, f4, f0
	  bge-      .loc_0xD8
	  lfs       f0, -0xBC8(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fmuls     f0, f4, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x8(r1)
	  lwz       r0, 0xC(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r3, r0
	  fneg      f0, f0
	  b         .loc_0xFC

	.loc_0xD8:
	  lfs       f0, -0xBCC(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fmuls     f0, f4, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x10(r1)
	  lwz       r0, 0x14(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r3, r0

	.loc_0xFC:
	  fadds     f3, f1, f0
	  lfs       f0, -0xC00(r2)
	  lfs       f1, -0xB94(r2)
	  lfs       f2, -0xBB8(r2)
	  fmuls     f5, f3, f0
	  lfs       f0, -0xC20(r2)
	  fadds     f8, f1, f4
	  lfs       f4, -0xB8C(r2)
	  lfs       f3, -0xB88(r2)
	  fmadds    f2, f6, f5, f2
	  fcmpo     cr0, f8, f0
	  lfs       f1, -0xC1C(r2)
	  fmuls     f0, f7, f2
	  fctiwz    f0, f0
	  stfd      f0, 0x18(r1)
	  lwz       r30, 0x1C(r1)
	  bge-      .loc_0x16C
	  lfs       f0, -0xBC8(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fmuls     f0, f8, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x20(r1)
	  lwz       r0, 0x24(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r3, r0
	  fneg      f0, f0
	  b         .loc_0x190

	.loc_0x16C:
	  lfs       f0, -0xBCC(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fmuls     f0, f8, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x28(r1)
	  lwz       r0, 0x2C(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r3, r0

	.loc_0x190:
	  fadds     f2, f1, f0
	  lfs       f1, -0xC00(r2)
	  lfs       f0, -0xBB8(r2)
	  li        r0, 0xFF
	  lfs       f6, 0xE8(r28)
	  fmuls     f1, f2, f1
	  lfs       f5, 0x138(r28)
	  fmadds    f0, f3, f1, f0
	  fcmpo     cr0, f6, f5
	  fmuls     f0, f4, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x30(r1)
	  lwz       r29, 0x34(r1)
	  bge-      .loc_0x1F8
	  lis       r3, 0x8051
	  fsubs     f1, f5, f6
	  lfs       f0, 0x3C40(r3)
	  lfd       f2, -0xBA0(r2)
	  fsubs     f0, f5, f0
	  lfd       f3, -0xBA8(r2)
	  fdivs     f0, f1, f0
	  fsub      f0, f2, f0
	  fmul      f0, f3, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x38(r1)
	  lwz       r0, 0x3C(r1)

	.loc_0x1F8:
	  stb       r0, 0x13C(r28)
	  mr        r31, r28
	  li        r27, 0
	  b         .loc_0x228

	.loc_0x208:
	  lwz       r3, 0x140(r31)
	  lbz       r4, 0x13C(r28)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  addi      r31, r31, 0x4
	  addi      r27, r27, 0x1

	.loc_0x228:
	  lwz       r0, 0x154(r28)
	  cmpw      r27, r0
	  blt+      .loc_0x208
	  lwz       r3, 0xA8(r28)
	  lfs       f31, 0xE8(r28)
	  lbz       r0, 0x49(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x250
	  lfs       f0, -0xB84(r2)
	  fmuls     f31, f31, f0

	.loc_0x250:
	  lfs       f30, 0xE0(r28)
	  li        r4, 0x4
	  lfs       f29, 0xE4(r28)
	  fneg      f1, f30
	  fneg      f0, f29
	  stfs      f1, 0x110(r28)
	  stfs      f0, 0x114(r28)
	  lwz       r3, 0xC8(r28)
	  bl        -0x2D8DEC
	  lwz       r3, 0xC8(r28)
	  stfs      f31, 0xCC(r3)
	  stfs      f31, 0xD0(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0xC8(r28)
	  li        r4, 0x7A
	  lfs       f1, 0x110(r28)
	  lfs       f2, 0x114(r28)
	  lfs       f3, 0xEC(r28)
	  bl        -0x2D96DC
	  lwz       r3, 0xC8(r28)
	  lis       r4, 0x8051
	  addi      r4, r4, 0x3C40
	  lwz       r12, 0x0(r3)
	  lfs       f1, 0x34(r4)
	  lfs       f0, 0x38(r4)
	  lwz       r12, 0x10(r12)
	  fadds     f1, f30, f1
	  fadds     f2, f29, f0
	  mtctr     r12
	  bctrl
	  lis       r3, 0x8051
	  lfs       f30, -0xBD0(r2)
	  addi      r31, r3, 0x3C40
	  li        r26, 0
	  li        r27, 0
	  b         .loc_0x348

	.loc_0x2EC:
	  lfs       f0, 0x24(r31)
	  lwz       r3, 0xCC(r28)
	  fdivs     f0, f0, f31
	  lwzx      r3, r3, r27
	  lwz       r3, 0x0(r3)
	  stfs      f0, 0xCC(r3)
	  stfs      f0, 0xD0(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0xCC(r28)
	  lfs       f0, 0xEC(r28)
	  lwzx      r3, r3, r27
	  fsubs     f0, f30, f0
	  lwz       r3, 0x0(r3)
	  stfs      f0, 0xC0(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  addi      r27, r27, 0x4
	  addi      r26, r26, 0x1

	.loc_0x348:
	  lwz       r0, 0x11C(r28)
	  cmpw      r26, r0
	  blt+      .loc_0x2EC
	  lwz       r0, 0xD0(r28)
	  cmplwi    r0, 0
	  beq-      .loc_0x460
	  lwz       r3, 0xD4(r28)
	  cmplwi    r3, 0
	  beq-      .loc_0x460
	  lfs       f0, 0x24(r31)
	  lis       r4, 0x8051
	  lwz       r12, 0x0(r3)
	  addi      r4, r4, 0x3C40
	  fdivs     f0, f0, f31
	  lfs       f1, 0x28(r4)
	  lwz       r12, 0x64(r12)
	  fmuls     f29, f1, f0
	  mtctr     r12
	  bctrl
	  fmr       f30, f1
	  lwz       r3, 0xD0(r28)
	  li        r4, 0x4
	  bl        -0x2D8F1C
	  lwz       r3, 0xD0(r28)
	  stfs      f29, 0xCC(r3)
	  stfs      f29, 0xD0(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, -0xBD0(r2)
	  lfs       f2, -0xB80(r2)
	  fmuls     f1, f0, f30
	  lfs       f0, -0xBD4(r2)
	  lwz       r3, 0xD0(r28)
	  fdivs     f0, f1, f0
	  fadds     f30, f2, f0
	  stfs      f30, 0xC0(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x130(r28)
	  li        r4, 0x4
	  bl        -0x2D8F74
	  lwz       r3, 0x130(r28)
	  stfs      f29, 0xCC(r3)
	  stfs      f29, 0xD0(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x130(r28)
	  stfs      f30, 0xC0(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0xD0(r28)
	  mr        r4, r30
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x130(r28)
	  mr        r4, r30
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl

	.loc_0x460:
	  lwz       r0, 0xD8(r28)
	  cmplwi    r0, 0
	  beq-      .loc_0x56C
	  lwz       r3, 0xDC(r28)
	  cmplwi    r3, 0
	  beq-      .loc_0x56C
	  lfs       f0, 0x24(r31)
	  lis       r4, 0x8051
	  lwz       r12, 0x0(r3)
	  addi      r4, r4, 0x3C40
	  fdivs     f0, f0, f31
	  lfs       f1, 0x28(r4)
	  lwz       r12, 0x64(r12)
	  fmuls     f29, f1, f0
	  mtctr     r12
	  bctrl
	  fmr       f31, f1
	  lwz       r3, 0xD8(r28)
	  li        r4, 0x4
	  bl        -0x2D9028
	  lwz       r3, 0xD8(r28)
	  stfs      f29, 0xCC(r3)
	  stfs      f29, 0xD0(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, -0xBD0(r2)
	  lfs       f2, -0xB80(r2)
	  fmuls     f1, f0, f31
	  lfs       f0, -0xBD4(r2)
	  lwz       r3, 0xD8(r28)
	  fdivs     f0, f1, f0
	  fadds     f30, f2, f0
	  stfs      f30, 0xC0(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x134(r28)
	  li        r4, 0x4
	  bl        -0x2D9080
	  lwz       r3, 0x134(r28)
	  stfs      f29, 0xCC(r3)
	  stfs      f29, 0xD0(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x134(r28)
	  stfs      f30, 0xC0(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0xD8(r28)
	  mr        r4, r29
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x134(r28)
	  mr        r4, r29
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl

	.loc_0x56C:
	  psq_l     f31,0x88(r1),0,0
	  lfd       f31, 0x80(r1)
	  psq_l     f30,0x78(r1),0,0
	  lfd       f30, 0x70(r1)
	  psq_l     f29,0x68(r1),0,0
	  lfd       f29, 0x60(r1)
	  lmw       r26, 0x48(r1)
	  lwz       r0, 0x94(r1)
	  mtlr      r0
	  addi      r1, r1, 0x90
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80311DD0
 * Size:	0000A8
 */
void og::newScreen::ObjSMenuMap::commonUpdate(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        0x4758
	  lis       r4, 0x8051
	  mr        r3, r31
	  addi      r4, r4, 0x3C40
	  lfs       f1, 0x40(r4)
	  lfs       f2, 0x44(r4)
	  bl        0x453C
	  lwz       r3, 0xB0(r31)
	  bl        -0xC91C
	  mr        r3, r31
	  bl        -0x5D4
	  lfs       f3, 0x40(r31)
	  lfs       f2, 0x243C(r2)
	  lfs       f1, -0xC20(r2)
	  lfs       f0, 0x2440(r2)
	  fadds     f2, f3, f2
	  lwz       r3, 0xAC(r31)
	  fadds     f0, f1, f0
	  stfs      f2, 0x140(r3)
	  stfs      f0, 0x144(r3)
	  lwz       r3, 0xAC(r31)
	  bl        -0x2D130C
	  lwz       r3, 0xAC(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x30(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0xBC(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x30(r12)
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
 * Address:	80311E78
 * Size:	00006C
 */
void og::newScreen::ObjSMenuMap::doUpdateLAction(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  bl        0x14211C
	  lis       r5, 0x804E
	  lis       r4, 0x804E
	  subi      r0, r5, 0x7B98
	  li        r6, 0x271C
	  stw       r0, 0x8(r1)
	  subi      r7, r4, 0x7BA8
	  li        r5, 0
	  li        r0, 0x1
	  stw       r3, 0x14(r1)
	  mr        r3, r31
	  addi      r4, r1, 0x8
	  stw       r7, 0x8(r1)
	  stw       r6, 0xC(r1)
	  stb       r5, 0x10(r1)
	  stb       r0, 0x11(r1)
	  bl        0x492C
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80311EE4
 * Size:	0000C4
 */
void og::newScreen::ObjSMenuMap::doUpdateRAction(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stw       r31, 0x2C(r1)
	  mr        r31, r3
	  lwz       r4, 0xA8(r3)
	  lbz       r0, 0x49(r4)
	  cmplwi    r0, 0
	  beq-      .loc_0x6C
	  bl        0x1420A0
	  lis       r5, 0x804E
	  lis       r4, 0x804E
	  subi      r0, r5, 0x7B98
	  li        r6, 0x271B
	  stw       r0, 0x18(r1)
	  subi      r7, r4, 0x7BA8
	  li        r5, 0
	  li        r0, 0x1
	  stw       r3, 0x24(r1)
	  mr        r3, r31
	  addi      r4, r1, 0x18
	  stw       r7, 0x18(r1)
	  stw       r6, 0x1C(r1)
	  stb       r5, 0x20(r1)
	  stb       r0, 0x21(r1)
	  bl        0x4994
	  b         .loc_0xB0

	.loc_0x6C:
	  bl        0x142058
	  lis       r5, 0x804E
	  lis       r4, 0x804E
	  subi      r0, r5, 0x7B98
	  li        r6, 0x271A
	  stw       r0, 0x8(r1)
	  subi      r7, r4, 0x7BA8
	  li        r5, 0
	  li        r0, 0x1
	  stw       r3, 0x14(r1)
	  mr        r3, r31
	  addi      r4, r1, 0x8
	  stw       r7, 0x8(r1)
	  stw       r6, 0xC(r1)
	  stb       r5, 0x10(r1)
	  stb       r0, 0x11(r1)
	  bl        0x494C

	.loc_0xB0:
	  lwz       r0, 0x34(r1)
	  lwz       r31, 0x2C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80311FA8
 * Size:	00010C
 */
void og::newScreen::ObjSMenuMap::doUpdate(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x30(r12)
	  mtctr     r12
	  bctrl
	  bl        0x140264
	  stw       r3, 0x118(r31)
	  mr        r3, r31
	  bl        -0x13E8
	  lwz       r3, 0x118(r31)
	  li        r0, 0
	  lfs       f0, -0xBB8(r2)
	  mr        r4, r0
	  lfs       f1, 0x5C(r3)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x54
	  li        r0, 0x1

	.loc_0x54:
	  lfs       f0, -0xBB4(r2)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x64
	  li        r4, 0x1

	.loc_0x64:
	  rlwinm.   r0,r0,0,24,31
	  beq-      .loc_0xA4
	  lfs       f1, -0xBB0(r2)
	  lis       r3, 0x8051
	  lfs       f0, 0xE8(r31)
	  addi      r3, r3, 0x3C40
	  fmadds    f0, f1, f0, f0
	  stfs      f0, 0xE8(r31)
	  lfs       f0, 0xE8(r31)
	  lfs       f1, 0x4(r3)
	  fcmpo     cr0, f0, f1
	  ble-      .loc_0x98
	  stfs      f1, 0xE8(r31)

	.loc_0x98:
	  lwz       r3, -0x6858(r13)
	  bl        -0x53A4
	  b         .loc_0xDC

	.loc_0xA4:
	  rlwinm.   r0,r4,0,24,31
	  beq-      .loc_0xDC
	  lfs       f1, -0xBB0(r2)
	  lis       r3, 0x8051
	  lfs       f0, 0xE8(r31)
	  fnmsubs   f0, f1, f0, f0
	  stfs      f0, 0xE8(r31)
	  lfs       f0, 0xE8(r31)
	  lfs       f1, 0x3C40(r3)
	  fcmpo     cr0, f0, f1
	  bge-      .loc_0xD4
	  stfs      f1, 0xE8(r31)

	.loc_0xD4:
	  lwz       r3, -0x6858(r13)
	  bl        -0x53B4

	.loc_0xDC:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xA4(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  bl        0x44C0
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803120B4
 * Size:	000138
 */
void og::newScreen::ObjSMenuMap::doDraw((Graphics&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x2C0(r1)
	  mflr      r0
	  stw       r0, 0x2C4(r1)
	  stw       r31, 0x2BC(r1)
	  stw       r30, 0x2B8(r1)
	  mr        r30, r4
	  addi      r31, r30, 0x190
	  stw       r29, 0x2B4(r1)
	  mr        r29, r3
	  bl        .loc_0x138
	  addi      r3, r1, 0x8
	  bl        0x1152E4
	  lwz       r3, 0xBC(r29)
	  mr        r5, r31
	  addi      r4, r1, 0x8
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x9C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x12C(r29)
	  cmplwi    r4, 0
	  beq-      .loc_0x70
	  lwz       r3, 0x128(r29)
	  cmplwi    r3, 0
	  beq-      .loc_0x70
	  addi      r3, r3, 0x80
	  addi      r4, r4, 0x50
	  bl        -0x227E54

	.loc_0x70:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x124(r29)
	  mr        r4, r30
	  mr        r5, r31
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x9C(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r29
	  mr        r4, r30
	  bl        0x4D1C
	  lis       r3, 0x804E
	  addic.    r4, r1, 0x198
	  subi      r0, r3, 0x7CA0
	  stw       r0, 0x274(r1)
	  beq-      .loc_0xF4
	  lis       r3, 0x804A
	  cmplwi    r4, 0
	  addi      r0, r3, 0x628
	  stw       r0, 0x0(r4)
	  beq-      .loc_0xF4
	  lis       r3, 0x804A
	  addi      r0, r3, 0x650
	  stw       r0, 0x0(r4)

	.loc_0xF4:
	  addic.    r4, r1, 0xC4
	  beq-      .loc_0x11C
	  lis       r3, 0x804A
	  cmplwi    r4, 0
	  addi      r0, r3, 0x600
	  stw       r0, 0x0(r4)
	  beq-      .loc_0x11C
	  lis       r3, 0x804A
	  addi      r0, r3, 0x650
	  stw       r0, 0x0(r4)

	.loc_0x11C:
	  lwz       r0, 0x2C4(r1)
	  lwz       r31, 0x2BC(r1)
	  lwz       r30, 0x2B8(r1)
	  lwz       r29, 0x2B4(r1)
	  mtlr      r0
	  addi      r1, r1, 0x2C0
	  blr

	.loc_0x138:
	*/
}

/*
 * --INFO--
 * Address:	803121EC
 * Size:	00032C
 */
void og::newScreen::ObjSMenuMap::drawMap((Graphics&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0xA0(r1)
	  mflr      r0
	  stw       r0, 0xA4(r1)
	  stw       r31, 0x9C(r1)
	  stw       r30, 0x98(r1)
	  mr        r30, r4
	  addi      r31, r30, 0x190
	  stw       r29, 0x94(r1)
	  mr        r29, r3
	  lbz       r0, 0x120(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x104
	  lwz       r3, -0x6978(r13)
	  bl        -0xCD368
	  stw       r3, 0xC0(r29)
	  li        r5, 0
	  lwz       r3, 0xC8(r29)
	  lwz       r4, 0xC0(r29)
	  lwz       r12, 0x0(r3)
	  lwz       r4, 0x20(r4)
	  lwz       r12, 0x110(r12)
	  mtctr     r12
	  bctrl
	  li        r0, 0
	  li        r4, 0
	  stb       r0, 0x120(r29)
	  lwz       r3, 0xC8(r29)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x120(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x20(r3)
	  lis       r0, 0x4330
	  stw       r0, 0x80(r1)
	  li        r4, 0
	  lhz       r0, 0x2(r3)
	  lfd       f1, -0xBF0(r2)
	  xoris     r0, r0, 0x8000
	  stw       r0, 0x84(r1)
	  lfd       f0, 0x80(r1)
	  fsubs     f0, f0, f1
	  stfs      f0, 0xF8(r29)
	  lwz       r3, 0xC8(r29)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x120(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x20(r3)
	  lis       r0, 0x4330
	  stw       r0, 0x88(r1)
	  lhz       r0, 0x4(r3)
	  lfd       f1, -0xBF0(r2)
	  xoris     r0, r0, 0x8000
	  stw       r0, 0x8C(r1)
	  lfd       f0, 0x88(r1)
	  fsubs     f0, f0, f1
	  stfs      f0, 0xFC(r29)
	  lfs       f1, 0x100(r29)
	  lfs       f0, 0xF8(r29)
	  fdivs     f0, f1, f0
	  stfs      f0, 0xF0(r29)
	  lfs       f1, 0x104(r29)
	  lfs       f0, 0xFC(r29)
	  fdivs     f0, f1, f0
	  stfs      f0, 0xF4(r29)

	.loc_0x104:
	  lwz       r3, 0x128(r29)
	  cmplwi    r3, 0
	  beq-      .loc_0x128
	  lfs       f0, 0xEC(r29)
	  stfs      f0, 0xC0(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x128:
	  lwz       r3, 0xAC(r29)
	  cmplwi    r3, 0
	  beq-      .loc_0x14C
	  lwz       r12, 0x0(r3)
	  mr        r4, r30
	  mr        r5, r31
	  lwz       r12, 0x9C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x14C:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, -0x6514(r13)
	  lis       r3, 0x8051
	  subi      r3, r3, 0xDD0
	  lwz       r30, 0x24(r4)
	  bl        -0x2B4750
	  mr        r3, r30
	  li        r4, 0
	  bl        0x1134B4
	  li        r3, 0
	  bl        -0x229244
	  li        r3, 0
	  bl        -0x229220
	  li        r3, 0
	  bl        -0x229254
	  lfs       f3, -0xC20(r2)
	  li        r8, 0xC8
	  lfs       f2, -0xB7C(r2)
	  li        r7, 0xA
	  lfs       f0, -0xB78(r2)
	  li        r0, 0x9B
	  stfs      f3, 0x70(r1)
	  mr        r3, r29
	  lfs       f1, -0xB74(r2)
	  mr        r4, r30
	  stfs      f3, 0x74(r1)
	  addi      r5, r1, 0x70
	  addi      r6, r1, 0xC
	  stfs      f2, 0x78(r1)
	  stfs      f0, 0x7C(r1)
	  stb       r8, 0xC(r1)
	  stb       r7, 0xD(r1)
	  stb       r8, 0xE(r1)
	  stb       r0, 0xF(r1)
	  bl        .loc_0x32C
	  lwz       r4, 0xB4(r29)
	  addi      r3, r1, 0x34
	  li        r5, 0
	  bl        -0x2D9448
	  lwz       r6, 0x34(r1)
	  addi      r3, r1, 0x28
	  lwz       r4, 0x38(r1)
	  li        r5, 0x1
	  lwz       r0, 0x3C(r1)
	  stw       r6, 0x64(r1)
	  stw       r4, 0x68(r1)
	  stw       r0, 0x6C(r1)
	  lwz       r4, 0xB4(r29)
	  bl        -0x2D9470
	  lwz       r6, 0x28(r1)
	  addi      r3, r1, 0x1C
	  lwz       r4, 0x2C(r1)
	  li        r5, 0x2
	  lwz       r0, 0x30(r1)
	  stw       r6, 0x58(r1)
	  stw       r4, 0x5C(r1)
	  stw       r0, 0x60(r1)
	  lwz       r4, 0xB4(r29)
	  bl        -0x2D9498
	  lwz       r6, 0x1C(r1)
	  addi      r3, r1, 0x10
	  lwz       r4, 0x20(r1)
	  li        r5, 0x3
	  lwz       r0, 0x24(r1)
	  stw       r6, 0x4C(r1)
	  stw       r4, 0x50(r1)
	  stw       r0, 0x54(r1)
	  lwz       r4, 0xB4(r29)
	  bl        -0x2D94C0
	  lwz       r3, 0x10(r1)
	  li        r10, 0
	  lwz       r5, 0x14(r1)
	  li        r11, 0x64
	  lwz       r8, 0x18(r1)
	  li        r0, 0x9B
	  stw       r3, 0x40(r1)
	  mr        r3, r29
	  lfs       f1, -0xB70(r2)
	  mr        r4, r30
	  stw       r5, 0x44(r1)
	  addi      r5, r1, 0x64
	  addi      r6, r1, 0x58
	  addi      r7, r1, 0x4C
	  stw       r8, 0x48(r1)
	  addi      r8, r1, 0x40
	  addi      r9, r1, 0x8
	  stb       r11, 0x8(r1)
	  stb       r10, 0x9(r1)
	  stb       r10, 0xA(r1)
	  stb       r0, 0xB(r1)
	  bl        0x248
	  li        r3, 0x1
	  bl        -0x22938C
	  lwz       r3, 0xB4(r29)
	  lwz       r4, 0xC4(r29)
	  addi      r3, r3, 0x80
	  addi      r4, r4, 0x50
	  bl        -0x228200
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  li        r3, 0x1
	  bl        -0x229330
	  li        r3, 0x1
	  li        r4, 0x1
	  li        r5, 0
	  bl        -0x229374
	  lwz       r0, 0xA4(r1)
	  lwz       r31, 0x9C(r1)
	  lwz       r30, 0x98(r1)
	  lwz       r29, 0x94(r1)
	  mtlr      r0
	  addi      r1, r1, 0xA0
	  blr

	.loc_0x32C:
	*/
}

/*
 * --INFO--
 * Address:	80312518
 * Size:	0001E0
 */
void drawRectZ__Q32og9newScreen11ObjSMenuMapFR8GraphicsR7Rect<float>
R6Color4f(void)
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
	  fmr       f31, f1
	  mr        r30, r5
	  mr        r31, r6
	  li        r3, 0x1
	  li        r4, 0x7
	  li        r5, 0x1
	  bl        -0x2293C8
	  lfs       f1, -0xC20(r2)
	  addi      r3, r1, 0x38
	  lfs       f2, -0xB78(r2)
	  fmr       f3, f1
	  lfs       f4, -0xB7C(r2)
	  lfs       f5, -0xBC4(r2)
	  lfs       f6, -0xC1C(r2)
	  bl        -0x227794
	  addi      r3, r1, 0x38
	  li        r4, 0x1
	  bl        -0x229130
	  addi      r3, r1, 0x8
	  bl        -0x2282E0
	  addi      r3, r1, 0x8
	  li        r4, 0
	  bl        -0x229014
	  li        r3, 0
	  bl        -0x22C9EC
	  bl        -0x22DEC8
	  li        r3, 0x9
	  li        r4, 0x1
	  bl        -0x22E320
	  li        r3, 0xB
	  li        r4, 0x1
	  bl        -0x22E32C
	  li        r3, 0
	  li        r4, 0x9
	  li        r5, 0x1
	  li        r6, 0x4
	  li        r7, 0
	  bl        -0x22DEC0
	  li        r3, 0
	  li        r4, 0xB
	  li        r5, 0x1
	  li        r6, 0x5
	  li        r7, 0
	  bl        -0x22DED8
	  li        r3, 0x80
	  li        r4, 0
	  li        r5, 0x4
	  bl        -0x22CC68
	  lfs       f1, 0x4(r30)
	  lis       r9, 0xCC01
	  lfs       f0, 0x0(r30)
	  li        r3, 0x1
	  li        r4, 0x1
	  li        r5, 0x1
	  stfs      f0, -0x8000(r9)
	  stfs      f1, -0x8000(r9)
	  stfs      f31, -0x8000(r9)
	  lbz       r8, 0x3(r31)
	  lbz       r7, 0x2(r31)
	  lbz       r6, 0x1(r31)
	  lbz       r0, 0x0(r31)
	  stb       r0, -0x8000(r9)
	  stb       r6, -0x8000(r9)
	  stb       r7, -0x8000(r9)
	  stb       r8, -0x8000(r9)
	  lfs       f1, 0xC(r30)
	  lfs       f0, 0x0(r30)
	  stfs      f0, -0x8000(r9)
	  stfs      f1, -0x8000(r9)
	  stfs      f31, -0x8000(r9)
	  lbz       r8, 0x3(r31)
	  lbz       r7, 0x2(r31)
	  lbz       r6, 0x1(r31)
	  lbz       r0, 0x0(r31)
	  stb       r0, -0x8000(r9)
	  stb       r6, -0x8000(r9)
	  stb       r7, -0x8000(r9)
	  stb       r8, -0x8000(r9)
	  lfs       f1, 0xC(r30)
	  lfs       f0, 0x8(r30)
	  stfs      f0, -0x8000(r9)
	  stfs      f1, -0x8000(r9)
	  stfs      f31, -0x8000(r9)
	  lbz       r8, 0x3(r31)
	  lbz       r7, 0x2(r31)
	  lbz       r6, 0x1(r31)
	  lbz       r0, 0x0(r31)
	  stb       r0, -0x8000(r9)
	  stb       r6, -0x8000(r9)
	  stb       r7, -0x8000(r9)
	  stb       r8, -0x8000(r9)
	  lfs       f1, 0x4(r30)
	  lfs       f0, 0x8(r30)
	  stfs      f0, -0x8000(r9)
	  stfs      f1, -0x8000(r9)
	  stfs      f31, -0x8000(r9)
	  lbz       r8, 0x3(r31)
	  lbz       r7, 0x2(r31)
	  lbz       r6, 0x1(r31)
	  lbz       r0, 0x0(r31)
	  stb       r0, -0x8000(r9)
	  stb       r6, -0x8000(r9)
	  stb       r7, -0x8000(r9)
	  stb       r8, -0x8000(r9)
	  bl        -0x229550
	  psq_l     f31,0x88(r1),0,0
	  lwz       r0, 0x94(r1)
	  lfd       f31, 0x80(r1)
	  lwz       r31, 0x7C(r1)
	  lwz       r30, 0x78(r1)
	  mtlr      r0
	  addi      r1, r1, 0x90
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803126F8
 * Size:	000214
 */
void og::newScreen::ObjSMenuMap::drawVecZ((Graphics&, Vec&, Vec&, Vec&, Vec&,
                                           Color4&, float))
{
	/*
	.loc_0x0:
	  stwu      r1, -0xC0(r1)
	  mflr      r0
	  stw       r0, 0xC4(r1)
	  stfd      f31, 0xB0(r1)
	  psq_st    f31,0xB8(r1),0,0
	  stmw      r25, 0x94(r1)
	  fmr       f31, f1
	  mr        r25, r5
	  mr        r26, r6
	  mr        r30, r7
	  mr        r27, r8
	  mr        r31, r9
	  bl        0x110AFC
	  lhz       r29, 0x4(r3)
	  bl        0x110AF4
	  lhz       r28, 0x6(r3)
	  li        r3, 0x1
	  li        r4, 0x7
	  li        r5, 0x1
	  bl        -0x2295C0
	  lis       r0, 0x4330
	  lfs       f1, -0xC20(r2)
	  stw       r28, 0x7C(r1)
	  addi      r3, r1, 0x38
	  lfd       f4, -0xB68(r2)
	  fmr       f3, f1
	  stw       r0, 0x78(r1)
	  lfs       f5, -0xBC4(r2)
	  lfd       f0, 0x78(r1)
	  stw       r29, 0x84(r1)
	  fsubs     f2, f0, f4
	  lfs       f6, -0xC1C(r2)
	  stw       r0, 0x80(r1)
	  lfd       f0, 0x80(r1)
	  fsubs     f4, f0, f4
	  bl        -0x2279AC
	  addi      r3, r1, 0x38
	  li        r4, 0x1
	  bl        -0x229348
	  addi      r3, r1, 0x8
	  bl        -0x2284F8
	  addi      r3, r1, 0x8
	  li        r4, 0
	  bl        -0x22922C
	  li        r3, 0
	  bl        -0x22CC04
	  bl        -0x22E0E0
	  li        r3, 0x9
	  li        r4, 0x1
	  bl        -0x22E538
	  li        r3, 0xB
	  li        r4, 0x1
	  bl        -0x22E544
	  li        r3, 0
	  li        r4, 0x9
	  li        r5, 0x1
	  li        r6, 0x4
	  li        r7, 0
	  bl        -0x22E0D8
	  li        r3, 0
	  li        r4, 0xB
	  li        r5, 0x1
	  li        r6, 0x5
	  li        r7, 0
	  bl        -0x22E0F0
	  li        r3, 0x80
	  li        r4, 0
	  li        r5, 0x4
	  bl        -0x22CE80
	  lfs       f1, 0x4(r25)
	  lis       r9, 0xCC01
	  lfs       f0, 0x0(r25)
	  li        r3, 0x1
	  li        r4, 0x1
	  li        r5, 0x1
	  stfs      f0, -0x8000(r9)
	  stfs      f1, -0x8000(r9)
	  stfs      f31, -0x8000(r9)
	  lbz       r8, 0x3(r31)
	  lbz       r7, 0x2(r31)
	  lbz       r6, 0x1(r31)
	  lbz       r0, 0x0(r31)
	  stb       r0, -0x8000(r9)
	  stb       r6, -0x8000(r9)
	  stb       r7, -0x8000(r9)
	  stb       r8, -0x8000(r9)
	  lfs       f1, 0x4(r26)
	  lfs       f0, 0x0(r26)
	  stfs      f0, -0x8000(r9)
	  stfs      f1, -0x8000(r9)
	  stfs      f31, -0x8000(r9)
	  lbz       r8, 0x3(r31)
	  lbz       r7, 0x2(r31)
	  lbz       r6, 0x1(r31)
	  lbz       r0, 0x0(r31)
	  stb       r0, -0x8000(r9)
	  stb       r6, -0x8000(r9)
	  stb       r7, -0x8000(r9)
	  stb       r8, -0x8000(r9)
	  lfs       f1, 0x4(r27)
	  lfs       f0, 0x0(r27)
	  stfs      f0, -0x8000(r9)
	  stfs      f1, -0x8000(r9)
	  stfs      f31, -0x8000(r9)
	  lbz       r8, 0x3(r31)
	  lbz       r7, 0x2(r31)
	  lbz       r6, 0x1(r31)
	  lbz       r0, 0x0(r31)
	  stb       r0, -0x8000(r9)
	  stb       r6, -0x8000(r9)
	  stb       r7, -0x8000(r9)
	  stb       r8, -0x8000(r9)
	  lfs       f1, 0x4(r30)
	  lfs       f0, 0x0(r30)
	  stfs      f0, -0x8000(r9)
	  stfs      f1, -0x8000(r9)
	  stfs      f31, -0x8000(r9)
	  lbz       r8, 0x3(r31)
	  lbz       r7, 0x2(r31)
	  lbz       r6, 0x1(r31)
	  lbz       r0, 0x0(r31)
	  stb       r0, -0x8000(r9)
	  stb       r6, -0x8000(r9)
	  stb       r7, -0x8000(r9)
	  stb       r8, -0x8000(r9)
	  bl        -0x229768
	  psq_l     f31,0xB8(r1),0,0
	  lfd       f31, 0xB0(r1)
	  lmw       r25, 0x94(r1)
	  lwz       r0, 0xC4(r1)
	  mtlr      r0
	  addi      r1, r1, 0xC0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8031290C
 * Size:	0000A4
 */
void og::newScreen::ObjSMenuMap::doStart((Screen::StartSceneArg const*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f1, -0xC20(r2)
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  lwz       r3, 0xB0(r3)
	  bl        -0xD1D0
	  lwz       r3, 0xB0(r30)
	  li        r4, 0x1
	  bl        -0xD238
	  lwz       r3, 0xB0(r30)
	  lfs       f1, -0xC1C(r2)
	  bl        -0xD2A0
	  lwz       r3, 0xB0(r30)
	  bl        -0xD098
	  lis       r3, 0x36
	  lis       r6, 0x315F
	  addi      r5, r3, 0x3035
	  lis       r8, 0x325F
	  lis       r4, 0x305F
	  mr        r3, r30
	  mr        r7, r5
	  mr        r9, r5
	  addi      r6, r6, 0x3030
	  addi      r8, r8, 0x3030
	  addi      r10, r4, 0x3030
	  bl        0x4190
	  mr        r3, r30
	  bl        0x41F4
	  mr        r3, r30
	  mr        r4, r31
	  bl        0x402C
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
 * Address:	803129B0
 * Size:	000008
 */
void og::newScreen::ObjSMenuMap::doEnd((Screen::EndSceneArg const*))
{
	/*
	.loc_0x0:
	  li        r3, 0x1
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803129B8
 * Size:	000020
 */
void og::newScreen::ObjSMenuMap::doUpdateFinish(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        0x3CC4
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803129D8
 * Size:	00004C
 */
void og::newScreen::ObjSMenuMap::doUpdateFadeout(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xA4(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xA0(r12)
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
 * Address:	80312A24
 * Size:	000014
 */
void og::newScreen::ObjSMenuMap::in_L(void)
{
	/*
	.loc_0x0:
	  li        r0, 0
	  lfs       f0, -0xB60(r2)
	  stw       r0, 0x38(r3)
	  stfs      f0, 0x4C(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80312A38
 * Size:	000014
 */
void og::newScreen::ObjSMenuMap::in_R(void)
{
	/*
	.loc_0x0:
	  li        r0, 0x1
	  lfs       f0, -0xB60(r2)
	  stw       r0, 0x38(r3)
	  stfs      f0, 0x4C(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80312A4C
 * Size:	00000C
 */
void og::newScreen::ObjSMenuMap::wait(void)
{
	/*
	.loc_0x0:
	  li        r0, 0x4
	  stw       r0, 0x38(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80312A58
 * Size:	00002C
 */
void og::newScreen::ObjSMenuMap::out_L(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  li        r0, 0x2
	  stw       r0, 0x38(r3)
	  lwz       r3, -0x6858(r13)
	  bl        -0x5E28
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80312A84
 * Size:	00002C
 */
void og::newScreen::ObjSMenuMap::out_R(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  li        r0, 0x3
	  stw       r0, 0x38(r3)
	  lwz       r3, -0x6858(r13)
	  bl        -0x5E54
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80312AB0
 * Size:	000008
 */
void Screen::SetSceneArg::getClassSize(void)
{
	/*
	.loc_0x0:
	  li        r3, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80312AB8
 * Size:	000008
 */
void Screen::SetSceneArg::getSceneType( const
{
	/*
	.loc_0x0:
	  lwz       r3, 0x4(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80312AC0
 * Size:	000008
 */
void Screen::SceneArgBase::getSceneType( const
{
	/*
	.loc_0x0:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80312AC8
 * Size:	000004
 */
void og::newScreen::ObjSMenuMap::doUpdateCancelAction(void)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80312ACC
 * Size:	000128
 */
void __sinit_ogObjSMenuMap_cpp(void)
{
	/*
	.loc_0x0:
	  lis       r3, 0x8051
	  lis       r4, 0x8051
	  li        r11, -0x1
	  lfs       f11, 0x48B0(r4)
	  addi      r9, r3, 0x3C40
	  lfs       f8, -0xB58(r2)
	  li        r8, 0xFF
	  li        r5, 0
	  stw       r11, 0x4C(r9)
	  li        r6, 0xDC
	  lis       r3, 0x804E
	  lfs       f10, -0xB5C(r2)
	  subi      r10, r3, 0x7C68
	  stw       r11, 0x48(r9)
	  lfs       f9, -0xB84(r2)
	  li        r7, 0xD2
	  lfs       f7, -0xC00(r2)
	  li        r4, 0x32
	  lfs       f6, -0xB54(r2)
	  li        r3, 0x84
	  lfs       f5, -0xB50(r2)
	  li        r0, 0x80
	  lfs       f4, -0xB4C(r2)
	  lfs       f3, -0xB48(r2)
	  lfs       f2, -0xB44(r2)
	  lfs       f1, -0xC1C(r2)
	  lfs       f0, -0xB40(r2)
	  stw       r11, -0x6838(r13)
	  stfs      f11, -0x6834(r13)
	  stfs      f11, 0x0(r10)
	  stfs      f11, 0x4(r10)
	  stfs      f11, 0x8(r10)
	  stb       r8, 0x8(r9)
	  stb       r8, 0x9(r9)
	  stb       r8, 0xA(r9)
	  stb       r7, 0xB(r9)
	  stb       r6, 0xC(r9)
	  stb       r8, 0xD(r9)
	  stb       r8, 0xE(r9)
	  stb       r5, 0xF(r9)
	  stb       r5, 0x10(r9)
	  stb       r4, 0x11(r9)
	  stb       r5, 0x12(r9)
	  stb       r8, 0x13(r9)
	  stb       r3, 0x14(r9)
	  stb       r5, 0x15(r9)
	  stb       r8, 0x16(r9)
	  stb       r8, 0x17(r9)
	  stb       r5, 0x18(r9)
	  stb       r5, 0x19(r9)
	  stb       r5, 0x1A(r9)
	  stfs      f10, 0x1C(r9)
	  stfs      f9, 0x20(r9)
	  stfs      f8, 0x3C(r9)
	  stb       r6, 0x1B(r9)
	  stfs      f7, 0x0(r9)
	  stfs      f6, 0x4(r9)
	  stfs      f5, 0x24(r9)
	  stfs      f4, 0x28(r9)
	  stfs      f8, 0x2C(r9)
	  stfs      f8, 0x30(r9)
	  stfs      f3, 0x34(r9)
	  stfs      f2, 0x38(r9)
	  stfs      f1, 0x40(r9)
	  stfs      f0, 0x44(r9)
	  stb       r5, 0x48(r9)
	  stb       r0, 0x49(r9)
	  stb       r8, 0x4A(r9)
	  stb       r8, 0x4B(r9)
	  stb       r5, 0x4C(r9)
	  stb       r8, 0x4D(r9)
	  stb       r8, 0x4E(r9)
	  stb       r5, 0x4F(r9)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80312BF4
 * Size:	000008
 */
void @24@og::newScreen::ObjSMenuMap::__dt(void)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x18
	  b         -0x3348
	*/
}
