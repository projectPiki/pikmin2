

/*
 * --INFO--
 * Address:	........
 * Size:	0000E4
 */
void _Print(char *, ...)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000064
 */
void TexCaster::Caster::__ct(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8023C95C
 * Size:	000060
 */
void TexCaster::Caster::__dt(void)
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
  addi      r0, r5, 0x1748
  stw       r0, 0x0(r30)
  bl        0x1D4BFC
  extsh.    r0, r31
  ble-      .loc_0x44
  mr        r3, r30
  bl        -0x2188E8

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
 * Address:	........
 * Size:	000014
 */
void TexCaster::Caster::show(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8023C9BC
 * Size:	000014
 */
void TexCaster::Caster::hide(void)
{
/*
.loc_0x0:
  lfs       f0, -0x3D88(r2)
  li        r0, 0
  stfs      f0, 0x40(r3)
  stb       r0, 0x3C(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	8023C9D0
 * Size:	000080
 */
void TexCaster::Caster::fadein( (float))
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stfd      f31, 0x10(r1)
  psq_st    f31,0x18(r1),0,0
  stw       r31, 0xC(r1)
  fmr       f31, f1
  lfs       f0, -0x3D88(r2)
  mr        r31, r3
  fcmpo     cr0, f31, f0
  bgt-      .loc_0x48
  lis       r3, 0x8048
  lis       r5, 0x8048
  addi      r3, r3, 0x3EAC
  li        r4, 0x3B
  addi      r5, r5, 0x3EBC
  crclr     6, 0x6
  bl        -0x2123D4

.loc_0x48:
  lfs       f1, -0x3D84(r2)
  li        r0, 0x2
  lfs       f0, -0x3D88(r2)
  fdivs     f1, f1, f31
  stfs      f1, 0x44(r31)
  stfs      f0, 0x40(r31)
  stb       r0, 0x3C(r31)
  psq_l     f31,0x18(r1),0,0
  lwz       r0, 0x24(r1)
  lfd       f31, 0x10(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00007C
 */
void TexCaster::Caster::fadeout( (float))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000150
 */
void TexCaster::Caster::makeDL(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000094
 */
void TexCaster::Caster::update(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000138
 */
void TexCaster::Caster::draw( (Graphics &))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000004
 */
void TexCaster::Caster::drawLine( (Graphics &))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000080
 */
void TexCaster::Mgr::__ct(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000074
 */
void TexCaster::Mgr::__dt(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8023CA50
 * Size:	0000A0
 */
void TexCaster::Mgr::globalInstance(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  stw       r30, 0x8(r1)
  lwz       r0, -0x69B0(r13)
  cmplwi    r0, 0
  bne-      .loc_0x88
  li        r3, 0x50
  bl        -0x218BD0
  mr.       r31, r3
  beq-      .loc_0x7C
  li        r0, 0
  addi      r30, r31, 0x8
  stw       r0, 0x0(r31)
  mr        r3, r30
  stw       r0, 0x4(r31)
  bl        0x1D48FC
  lis       r3, 0x804C
  li        r0, 0
  addi      r3, r3, 0x1748
  lfs       f0, -0x3D88(r2)
  stw       r3, 0x0(r30)
  stw       r0, 0x28(r30)
  stw       r0, 0x2C(r30)
  stw       r0, 0x30(r30)
  stw       r0, 0x34(r30)
  stw       r0, 0x38(r30)
  stb       r0, 0x3C(r30)
  stfs      f0, 0x40(r30)
  stfs      f0, 0x44(r30)

.loc_0x7C:
  stw       r31, -0x69B0(r13)
  mr        r3, r31
  bl        0x88

.loc_0x88:
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
 * Address:	8023CAF0
 * Size:	00006C
 */
void TexCaster::Mgr::deleteInstance(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  lwz       r31, -0x69B0(r13)
  cmplwi    r31, 0
  beq-      .loc_0x58
  beq-      .loc_0x50
  li        r3, 0
  addic.    r0, r31, 0x8
  stw       r3, -0x69B0(r13)
  beq-      .loc_0x48
  lis       r4, 0x804C
  addi      r3, r31, 0x8
  addi      r0, r4, 0x1748
  li        r4, 0
  stw       r0, 0x8(r31)
  bl        0x1D4A54

.loc_0x48:
  mr        r3, r31
  bl        -0x218A88

.loc_0x50:
  li        r0, 0
  stw       r0, -0x69B0(r13)

.loc_0x58:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8023CB5C
 * Size:	0000E8
 */
void TexCaster::Mgr::loadResource(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  lis       r4, 0x8048
  li        r5, 0
  stw       r0, 0x24(r1)
  li        r6, 0x1
  stw       r31, 0x1C(r1)
  addi      r31, r4, 0x3EA0
  li        r4, 0x1
  stw       r30, 0x18(r1)
  stw       r29, 0x14(r1)
  mr        r29, r3
  addi      r3, r31, 0x28
  bl        -0x221A60
  cmplwi    r3, 0
  bne-      .loc_0x54
  addi      r3, r31, 0xC
  addi      r5, r31, 0x1C
  li        r4, 0x120
  crclr     6, 0x6
  bl        -0x21256C

.loc_0x54:
  li        r0, 0x1
  stw       r0, 0x0(r29)
  lwz       r0, 0x0(r29)
  rlwinm    r3,r0,2,0,29
  bl        -0x218C14
  stw       r3, 0x4(r29)
  subi      r3, r2, 0x3D7C
  li        r4, 0
  bl        -0x219BB8
  mr.       r30, r3
  bne-      .loc_0x94
  addi      r3, r31, 0xC
  addi      r5, r31, 0x1C
  li        r4, 0x125
  crclr     6, 0x6
  bl        -0x2125AC

.loc_0x94:
  li        r3, 0x40
  bl        -0x218D50
  mr.       r31, r3
  beq-      .loc_0xC4
  li        r0, 0
  mr        r4, r30
  stw       r0, 0x28(r31)
  li        r5, 0
  bl        -0x209B8C
  lbz       r0, 0x3B(r31)
  rlwinm    r0,r0,0,30,30
  stb       r0, 0x3B(r31)

.loc_0xC4:
  lwz       r3, 0x4(r29)
  stw       r31, 0x0(r3)
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
 * Address:	8023CC44
 * Size:	000550
 */
void TexCaster::Mgr::create( (Sys::Sphere &, float))
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
  stfd      f28, 0xD0(r1)
  psq_st    f28,0xD8(r1),0,0
  stfd      f27, 0xC0(r1)
  psq_st    f27,0xC8(r1),0,0
  stfd      f26, 0xB0(r1)
  psq_st    f26,0xB8(r1),0,0
  stfd      f25, 0xA0(r1)
  psq_st    f25,0xA8(r1),0,0
  stfd      f24, 0x90(r1)
  psq_st    f24,0x98(r1),0,0
  stfd      f23, 0x80(r1)
  psq_st    f23,0x88(r1),0,0
  stfd      f22, 0x70(r1)
  psq_st    f22,0x78(r1),0,0
  stfd      f21, 0x60(r1)
  psq_st    f21,0x68(r1),0,0
  stfd      f20, 0x50(r1)
  psq_st    f20,0x58(r1),0,0
  stmw      r23, 0x2C(r1)
  lfs       f0, -0x3D74(r2)
  mr        r30, r4
  lfs       f2, -0x3D70(r2)
  mr        r29, r3
  stfs      f0, 0x18(r1)
  fmr       f30, f1
  lfs       f0, -0x3D6C(r2)
  addi      r4, r1, 0x8
  stfs      f2, 0x1C(r1)
  lwz       r3, -0x6CF8(r13)
  lfs       f1, 0x0(r30)
  stfs      f1, 0x8(r1)
  lfs       f1, 0x4(r30)
  stfs      f1, 0xC(r1)
  lfs       f1, 0x8(r30)
  stfs      f1, 0x10(r1)
  lfs       f1, 0xC(r30)
  stfs      f1, 0x14(r1)
  stfs      f0, 0x18(r1)
  stfs      f2, 0x1C(r1)
  lwz       r12, 0x4(r3)
  lwz       r12, 0x30(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x24(r1)
  cmpwi     r0, 0
  bne-      .loc_0x238
  li        r0, 0x2
  li        r3, 0x58
  stw       r0, 0x24(r1)
  bl        -0x218D80
  lis       r4, 0x8012
  li        r5, 0
  subi      r4, r4, 0xCB8
  li        r6, 0xC
  li        r7, 0x6
  bl        -0x17B354
  stw       r3, 0x20(r1)
  lfs       f7, -0x3D88(r2)
  lfs       f0, 0x0(r30)
  lfs       f8, 0xC(r30)
  lfs       f1, 0x4(r30)
  fsubs     f5, f0, f8
  lfs       f2, 0x8(r30)
  fsubs     f4, f1, f7
  fsubs     f3, f2, f7
  fsubs     f6, f5, f7
  fsubs     f10, f4, f7
  fadds     f9, f0, f8
  stfs      f6, 0x0(r3)
  fsubs     f11, f3, f8
  fadds     f1, f1, f7
  stfs      f10, 0x4(r3)
  fadds     f0, f2, f7
  fadds     f2, f5, f7
  stfs      f11, 0x8(r3)
  fadds     f5, f4, f7
  fadds     f4, f3, f8
  lwz       r3, 0x20(r1)
  fadds     f3, f9, f7
  fadds     f12, f1, f7
  stfs      f2, 0xC(r3)
  fadds     f13, f0, f8
  fsubs     f2, f9, f7
  stfs      f5, 0x10(r3)
  fsubs     f1, f1, f7
  fsubs     f0, f0, f8
  stfs      f4, 0x14(r3)
  lwz       r3, 0x20(r1)
  stfs      f3, 0x18(r3)
  stfs      f12, 0x1C(r3)
  stfs      f13, 0x20(r3)
  lwz       r3, 0x20(r1)
  stfs      f2, 0x24(r3)
  stfs      f1, 0x28(r3)
  stfs      f0, 0x2C(r3)
  lwz       r3, 0x20(r1)
  stfs      f6, 0x30(r3)
  stfs      f10, 0x34(r3)
  stfs      f11, 0x38(r3)
  lwz       r3, 0x20(r1)
  stfs      f3, 0x3C(r3)
  stfs      f12, 0x40(r3)
  stfs      f13, 0x44(r3)
  lwz       r3, 0x20(r1)
  lfs       f0, 0x18(r1)
  lfs       f1, 0x4(r3)
  fadds     f0, f1, f0
  stfs      f0, 0x4(r3)
  lwz       r3, 0x20(r1)
  lfs       f0, 0x18(r1)
  lfs       f1, 0x10(r3)
  fadds     f0, f1, f0
  stfs      f0, 0x10(r3)
  lwz       r3, 0x20(r1)
  lfs       f0, 0x18(r1)
  lfs       f1, 0x1C(r3)
  fadds     f0, f1, f0
  stfs      f0, 0x1C(r3)
  lwz       r3, 0x20(r1)
  lfs       f0, 0x18(r1)
  lfs       f1, 0x28(r3)
  fadds     f0, f1, f0
  stfs      f0, 0x28(r3)
  lwz       r3, 0x20(r1)
  lfs       f0, 0x18(r1)
  lfs       f1, 0x34(r3)
  fadds     f0, f1, f0
  stfs      f0, 0x34(r3)
  lwz       r3, 0x20(r1)
  lfs       f0, 0x18(r1)
  lfs       f1, 0x40(r3)
  fadds     f0, f1, f0
  stfs      f0, 0x40(r3)

.loc_0x238:
  li        r3, 0x48
  bl        -0x218FDC
  mr.       r31, r3
  beq-      .loc_0x280
  bl        0x1D4504
  lis       r3, 0x804C
  li        r0, 0
  addi      r3, r3, 0x1748
  lfs       f0, -0x3D88(r2)
  stw       r3, 0x0(r31)
  stw       r0, 0x28(r31)
  stw       r0, 0x2C(r31)
  stw       r0, 0x30(r31)
  stw       r0, 0x34(r31)
  stw       r0, 0x38(r31)
  stb       r0, 0x3C(r31)
  stfs      f0, 0x40(r31)
  stfs      f0, 0x44(r31)

.loc_0x280:
  lfs       f0, 0x0(r30)
  stfs      f0, 0x18(r31)
  lfs       f0, 0x4(r30)
  stfs      f0, 0x1C(r31)
  lfs       f0, 0x8(r30)
  stfs      f0, 0x20(r31)
  lfs       f0, 0xC(r30)
  stfs      f0, 0x24(r31)
  lwz       r0, 0x20(r1)
  stw       r0, 0x2C(r31)
  lwz       r0, 0x24(r1)
  stw       r0, 0x28(r31)
  lwz       r0, 0x28(r31)
  mulli     r0, r0, 0x6
  rlwinm    r3,r0,2,0,29
  bl        -0x218F54
  stw       r3, 0x38(r31)
  li        r24, 0
  lfs       f29, -0x3D70(r2)
  li        r25, 0
  lfs       f27, -0x3D68(r2)
  lfs       f28, -0x3D64(r2)
  b         .loc_0x39C

.loc_0x2DC:
  lfs       f0, 0xC(r30)
  mulli     r27, r25, 0xC
  lfs       f23, 0x0(r30)
  mr        r26, r25
  fdivs     f0, f28, f0
  lfs       f22, 0x8(r30)
  rlwinm    r28,r25,3,0,28
  li        r23, 0
  fmuls     f31, f27, f0

.loc_0x300:
  lwz       r0, 0x2C(r31)
  fmr       f1, f30
  add       r3, r0, r27
  lfs       f2, 0x0(r3)
  lfs       f0, 0x8(r3)
  fsubs     f21, f2, f23
  fsubs     f20, f0, f22
  bl        -0x16D744
  frsp      f26, f1
  fmr       f1, f30
  bl        -0x16DCB8
  frsp      f25, f1
  fmr       f1, f30
  bl        -0x16DCC4
  frsp      f24, f1
  fmr       f1, f30
  bl        -0x16D768
  frsp      f2, f1
  addi      r23, r23, 0x1
  fmuls     f1, f21, f24
  lwz       r3, 0x38(r31)
  fmuls     f0, f21, f26
  cmpwi     r23, 0x3
  fmadds    f1, f20, f2, f1
  addi      r0, r28, 0x4
  fmsubs    f2, f20, f25, f0
  addi      r26, r26, 0x1
  addi      r27, r27, 0xC
  fmuls     f0, f1, f31
  fmuls     f2, f2, f31
  fadds     f1, f29, f0
  fadds     f0, f29, f2
  stfsx     f1, r3, r28
  addi      r28, r28, 0x8
  lwz       r3, 0x38(r31)
  stfsx     f0, r3, r0
  blt+      .loc_0x300
  addi      r25, r25, 0x3
  addi      r24, r24, 0x1

.loc_0x39C:
  lwz       r0, 0x28(r31)
  cmpw      r24, r0
  blt+      .loc_0x2DC
  mulli     r3, r0, 0xC
  li        r4, 0x20
  addi      r0, r3, 0x22
  rlwinm    r0,r0,0,0,26
  stw       r0, 0x34(r31)
  lwz       r3, 0x34(r31)
  bl        -0x21900C
  stw       r3, 0x30(r31)
  li        r4, 0
  li        r0, 0x90
  lwz       r8, 0x30(r31)
  mr        r7, r4
  lwz       r3, 0x34(r31)
  addi      r6, r8, 0x3
  stb       r0, 0x0(r8)
  add       r5, r8, r3
  lwz       r0, 0x28(r31)
  mulli     r0, r0, 0x3
  srawi     r0, r0, 0x8
  stb       r0, 0x1(r8)
  lwz       r0, 0x28(r31)
  mulli     r0, r0, 0x3
  stb       r0, 0x2(r8)
  b         .loc_0x458

.loc_0x408:
  rlwinm    r8,r7,24,24,31
  addi      r3, r7, 0x1
  stb       r8, 0x0(r6)
  addi      r0, r7, 0x2
  rlwinm    r9,r3,24,24,31
  addi      r4, r4, 0x1
  stb       r7, 0x1(r6)
  rlwinm    r10,r0,24,24,31
  stb       r8, 0x2(r6)
  stb       r7, 0x3(r6)
  addi      r7, r7, 0x3
  stb       r9, 0x4(r6)
  stb       r3, 0x5(r6)
  stb       r9, 0x6(r6)
  stb       r3, 0x7(r6)
  stb       r10, 0x8(r6)
  stb       r0, 0x9(r6)
  stb       r10, 0xA(r6)
  stb       r0, 0xB(r6)
  addi      r6, r6, 0xC

.loc_0x458:
  lwz       r0, 0x28(r31)
  cmpw      r4, r0
  blt+      .loc_0x408
  cmplw     r6, r5
  sub       r3, r5, r6
  li        r4, 0
  bge-      .loc_0x4C0
  rlwinm.   r0,r3,29,3,31
  mtctr     r0
  beq-      .loc_0x4B0

.loc_0x480:
  stb       r4, 0x0(r6)
  stb       r4, 0x1(r6)
  stb       r4, 0x2(r6)
  stb       r4, 0x3(r6)
  stb       r4, 0x4(r6)
  stb       r4, 0x5(r6)
  stb       r4, 0x6(r6)
  stb       r4, 0x7(r6)
  addi      r6, r6, 0x8
  bdnz+     .loc_0x480
  andi.     r3, r3, 0x7
  beq-      .loc_0x4C0

.loc_0x4B0:
  mtctr     r3

.loc_0x4B4:
  stb       r4, 0x0(r6)
  addi      r6, r6, 0x1
  bdnz+     .loc_0x4B4

.loc_0x4C0:
  lwz       r3, 0x30(r31)
  lwz       r4, 0x34(r31)
  bl        -0x1509F4
  mr        r4, r31
  addi      r3, r29, 0x8
  bl        0x1D42F0
  mr        r3, r31
  psq_l     f31,0x108(r1),0,0
  lfd       f31, 0x100(r1)
  psq_l     f30,0xF8(r1),0,0
  lfd       f30, 0xF0(r1)
  psq_l     f29,0xE8(r1),0,0
  lfd       f29, 0xE0(r1)
  psq_l     f28,0xD8(r1),0,0
  lfd       f28, 0xD0(r1)
  psq_l     f27,0xC8(r1),0,0
  lfd       f27, 0xC0(r1)
  psq_l     f26,0xB8(r1),0,0
  lfd       f26, 0xB0(r1)
  psq_l     f25,0xA8(r1),0,0
  lfd       f25, 0xA0(r1)
  psq_l     f24,0x98(r1),0,0
  lfd       f24, 0x90(r1)
  psq_l     f23,0x88(r1),0,0
  lfd       f23, 0x80(r1)
  psq_l     f22,0x78(r1),0,0
  lfd       f22, 0x70(r1)
  psq_l     f21,0x68(r1),0,0
  lfd       f21, 0x60(r1)
  psq_l     f20,0x58(r1),0,0
  lfd       f20, 0x50(r1)
  lmw       r23, 0x2C(r1)
  lwz       r0, 0x114(r1)
  mtlr      r0
  addi      r1, r1, 0x110
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00007C
 */
void TexCaster::Mgr::getTexture( (int))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000118
 */
void TexCaster::Mgr::drawInit( (Graphics &))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8023D194
 * Size:	000288
 */
void TexCaster::Mgr::draw( (Graphics &))
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
  mr        r30, r3
  li        r3, 0
  bl        -0x157610
  bl        -0x158AEC
  li        r3, 0x1
  bl        -0x158228
  li        r3, 0
  li        r4, 0
  li        r5, 0
  li        r6, 0x4
  bl        -0x1547BC
  li        r3, 0
  li        r4, 0xF
  li        r5, 0x8
  li        r6, 0x2
  li        r7, 0xF
  bl        -0x154CE8
  li        r3, 0
  li        r4, 0
  li        r5, 0
  li        r6, 0x3
  li        r7, 0x1
  li        r8, 0
  bl        -0x154C7C
  li        r3, 0
  li        r4, 0x7
  li        r5, 0x1
  li        r6, 0x4
  li        r7, 0x7
  bl        -0x154CD8
  li        r3, 0
  li        r4, 0
  li        r5, 0
  li        r6, 0
  li        r7, 0x1
  li        r8, 0
  bl        -0x154C48
  li        r3, 0x9
  li        r4, 0x3
  bl        -0x158FC8
  li        r3, 0xD
  li        r4, 0x3
  bl        -0x158FD4
  li        r3, 0
  li        r4, 0x9
  li        r5, 0x1
  li        r6, 0x4
  li        r7, 0
  bl        -0x158B68
  li        r3, 0
  li        r4, 0xD
  li        r5, 0x1
  li        r6, 0x4
  li        r7, 0
  bl        -0x158B80
  li        r3, 0x1
  li        r4, 0x4
  li        r5, 0x5
  li        r6, 0xF
  bl        -0x1541C4
  li        r3, 0x1
  li        r4, 0x3
  li        r5, 0
  bl        -0x154128
  lwz       r30, 0x18(r30)
  lfs       f31, -0x3D80(r2)
  b         .loc_0x260

.loc_0x128:
  lbz       r0, 0x3C(r30)
  cmpwi     r0, 0x2
  beq-      .loc_0x148
  bge-      .loc_0x13C
  b         .loc_0x1BC

.loc_0x13C:
  cmpwi     r0, 0x4
  bge-      .loc_0x1BC
  b         .loc_0x184

.loc_0x148:
  lwz       r3, -0x6514(r13)
  lfs       f3, 0x44(r30)
  lfs       f2, 0x54(r3)
  lfs       f1, 0x40(r30)
  lfs       f0, -0x3D84(r2)
  fmadds    f1, f3, f2, f1
  stfs      f1, 0x40(r30)
  lfs       f1, 0x40(r30)
  fcmpo     cr0, f1, f0
  cror      2, 0x1, 0x2
  bne-      .loc_0x1BC
  stfs      f0, 0x40(r30)
  li        r0, 0x1
  stb       r0, 0x3C(r30)
  b         .loc_0x1BC

.loc_0x184:
  lwz       r3, -0x6514(r13)
  lfs       f3, 0x44(r30)
  lfs       f2, 0x54(r3)
  lfs       f1, 0x40(r30)
  lfs       f0, -0x3D88(r2)
  fnmsubs   f1, f3, f2, f1
  stfs      f1, 0x40(r30)
  lfs       f1, 0x40(r30)
  fcmpo     cr0, f1, f0
  cror      2, 0, 0x2
  bne-      .loc_0x1BC
  stfs      f0, 0x40(r30)
  li        r0, 0
  stb       r0, 0x3C(r30)

.loc_0x1BC:
  lfs       f0, 0x40(r30)
  addi      r4, r1, 0xC
  li        r3, 0x1
  fmuls     f0, f31, f0
  fctiwz    f0, f0
  stfd      f0, 0x10(r1)
  lwz       r0, 0x14(r1)
  stb       r0, 0xB(r1)
  stb       r0, 0xA(r1)
  stb       r0, 0x9(r1)
  stb       r0, 0x8(r1)
  lwz       r0, 0x8(r1)
  stw       r0, 0xC(r1)
  bl        -0x154D24
  lwz       r31, -0x69B0(r13)
  lwz       r0, 0x0(r31)
  cmpwi     r0, 0
  bgt-      .loc_0x220
  lis       r3, 0x8048
  lis       r5, 0x8048
  addi      r3, r3, 0x3EAC
  li        r4, 0x19A
  addi      r5, r5, 0x3EBC
  crclr     6, 0x6
  bl        -0x212D70

.loc_0x220:
  lwz       r3, 0x4(r31)
  li        r4, 0
  lwz       r3, 0x0(r3)
  bl        -0x209D90
  lwz       r4, 0x2C(r30)
  li        r3, 0x9
  li        r5, 0xC
  bl        -0x158750
  lwz       r4, 0x38(r30)
  li        r3, 0xD
  li        r5, 0x8
  bl        -0x158760
  lwz       r3, 0x30(r30)
  lwz       r4, 0x34(r30)
  bl        -0x154014
  lwz       r30, 0x4(r30)

.loc_0x260:
  cmplwi    r30, 0
  bne+      .loc_0x128
  psq_l     f31,0x28(r1),0,0
  lwz       r0, 0x34(r1)
  lfd       f31, 0x20(r1)
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}
