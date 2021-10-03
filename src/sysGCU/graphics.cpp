

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
 * Address:	80424E90
 * Size:	000150
 */
void HorizonalSplitter::HorizonalSplitter(Graphics *)
{
/*
.loc_0x0:
  stwu      r1, -0x50(r1)
  mflr      r0
  lis       r6, 0x804F
  lis       r5, 0x804F
  stw       r0, 0x54(r1)
  subi      r0, r5, 0x425C
  stw       r31, 0x4C(r1)
  stw       r30, 0x48(r1)
  stw       r29, 0x44(r1)
  mr        r29, r4
  stw       r28, 0x40(r1)
  mr        r28, r3
  subi      r3, r6, 0x424C
  stw       r3, 0x0(r28)
  stw       r0, 0x0(r28)
  stw       r29, 0x14(r28)
  bl        -0x1CAC
  lhz       r31, 0x6(r3)
  bl        -0x1CB4
  lhz       r4, 0x4(r3)
  lis       r0, 0x4330
  lfs       f3, 0x2158(r2)
  mr        r3, r29
  stw       r4, 0x2C(r1)
  li        r4, 0x2
  lfd       f2, 0x2160(r2)
  stw       r0, 0x28(r1)
  lfd       f0, 0x28(r1)
  stfs      f3, 0x4(r28)
  fsubs     f1, f0, f2
  stfs      f3, 0x8(r28)
  stw       r31, 0x34(r1)
  stw       r0, 0x30(r1)
  lfd       f0, 0x30(r1)
  stfs      f1, 0xC(r28)
  fsubs     f0, f0, f2
  stfs      f0, 0x10(r28)
  bl        0x644
  li        r3, 0x58
  bl        -0x401088
  mr.       r31, r3
  beq-      .loc_0xB0
  bl        0x164
  mr        r31, r3

.loc_0xB0:
  li        r3, 0x58
  bl        -0x4010A0
  mr.       r30, r3
  beq-      .loc_0xC8
  bl        0x14C
  mr        r30, r3

.loc_0xC8:
  lfs       f2, 0x215C(r2)
  mr        r3, r31
  lfs       f1, 0x10(r28)
  addi      r4, r1, 0x18
  lfs       f3, 0xC(r28)
  lfs       f0, 0x2158(r2)
  fmuls     f2, f2, f1
  stfs      f3, 0x20(r1)
  stfs      f0, 0x18(r1)
  stfs      f0, 0x1C(r1)
  stfs      f2, 0x24(r1)
  stfs      f0, 0x8(r1)
  stfs      f2, 0xC(r1)
  stfs      f3, 0x10(r1)
  stfs      f1, 0x14(r1)
  bl        0x3EC
  mr        r3, r30
  addi      r4, r1, 0x8
  bl        0x3E0
  mr        r3, r29
  mr        r4, r31
  bl        0x614
  mr        r3, r29
  mr        r4, r30
  bl        0x608
  lwz       r0, 0x54(r1)
  mr        r3, r28
  lwz       r31, 0x4C(r1)
  lwz       r30, 0x48(r1)
  lwz       r29, 0x44(r1)
  lwz       r28, 0x40(r1)
  mtlr      r0
  addi      r1, r1, 0x50
  blr
*/
}

/*
 * --INFO--
 * Address:	80424FE0
 * Size:	0000BC
 */
void HorizonalSplitter::split2(float)
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
  mr        r29, r3
  fmr       f31, f1
  lwz       r3, 0x14(r3)
  li        r4, 0
  bl        0x5E0
  mr        r0, r3
  lwz       r3, 0x14(r29)
  mr        r31, r0
  li        r4, 0x1
  bl        0x5CC
  lfs       f0, 0x2168(r2)
  mr        r30, r3
  lfs       f3, 0x215C(r2)
  mr        r3, r31
  fsubs     f0, f0, f31
  fdivs     f1, f31, f3
  fdivs     f0, f0, f3
  stfs      f1, 0x54(r31)
  stfs      f0, 0x54(r30)
  lfs       f0, 0x10(r29)
  lfs       f2, 0x28(r31)
  lfs       f1, 0x20(r31)
  fmuls     f0, f3, f0
  lfs       f3, 0x54(r31)
  fsubs     f1, f2, f1
  fmsubs    f0, f3, f1, f0
  stfs      f0, 0x4C(r30)
  bl        0x270
  mr        r3, r30
  bl        0x268
  psq_l     f31,0x28(r1),0,0
  lwz       r0, 0x34(r1)
  lfd       f31, 0x20(r1)
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  lwz       r29, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000150
 */
void VerticalSplitter::VerticalSplitter(Graphics *)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000BC
 */
void VerticalSplitter::split2(float)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0001C8
 */
void FourSplitter::FourSplitter(Graphics *)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00016C
 */
void FourSplitter::split4(float, float)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8042509C
 * Size:	0000C0
 */
void Viewport::Viewport()
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  mr        r30, r3
  bl        -0x13D24
  lis       r3, 0x804E
  li        r0, 0
  addi      r3, r3, 0x78BC
  stw       r3, 0x0(r30)
  sth       r0, 0x18(r30)
  bl        -0x1EA8
  lhz       r31, 0x6(r3)
  bl        -0x1EB0
  lhz       r3, 0x4(r3)
  lis       r4, 0x4330
  lfs       f4, 0x2158(r2)
  li        r0, 0
  stw       r3, 0xC(r1)
  mr        r3, r30
  lfd       f3, 0x2160(r2)
  stw       r4, 0x8(r1)
  lfs       f0, 0x2168(r2)
  lfd       f1, 0x8(r1)
  stfs      f4, 0x1C(r30)
  fsubs     f2, f1, f3
  stfs      f4, 0x20(r30)
  stw       r31, 0x14(r1)
  stw       r4, 0x10(r1)
  lfd       f1, 0x10(r1)
  stfs      f2, 0x24(r30)
  fsubs     f1, f1, f3
  stfs      f1, 0x28(r30)
  stb       r0, 0x3C(r30)
  stw       r0, 0x44(r30)
  stfs      f4, 0x48(r30)
  stfs      f4, 0x4C(r30)
  stfs      f0, 0x50(r30)
  stfs      f0, 0x54(r30)
  bl        0x1A0
  lwz       r0, 0x24(r1)
  mr        r3, r30
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	8042515C
 * Size:	000044
 */
void Viewport::getMatrix(bool)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r0, 0x44(r3)
  cmplwi    r0, 0
  beq-      .loc_0x30
  mr        r3, r0
  lwz       r12, 0x0(r3)
  lwz       r12, 0x48(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x34

.loc_0x30:
  lwz       r3, 0x40(r3)

.loc_0x34:
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	804251A0
 * Size:	00002C
 */
void Viewport::setProjection()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r3, 0x44(r3)
  cmplwi    r3, 0
  beq-      .loc_0x1C
  bl        -0xA474

.loc_0x1C:
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	804251CC
 * Size:	000074
 */
void Graphics::getNumActiveViewports()
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  li        r31, 0
  stw       r30, 0x18(r1)
  li        r30, 0
  stw       r29, 0x14(r1)
  mr        r29, r3
  b         .loc_0x48

.loc_0x28:
  mr        r3, r29
  mr        r4, r30
  bl        0x3F4
  bl        .loc_0x74
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x44
  addi      r31, r31, 0x1

.loc_0x44:
  addi      r30, r30, 0x1

.loc_0x48:
  lwz       r0, 0x264(r29)
  cmpw      r30, r0
  blt+      .loc_0x28
  lwz       r0, 0x24(r1)
  mr        r3, r31
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  lwz       r29, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr       

.loc_0x74:
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00003C
 */
void Viewport::getAspect()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80425240
 * Size:	000050
 */
void Viewport::viewable()
{
/*
.loc_0x0:
  lbz       r0, 0x3C(r3)
  rlwinm.   r0,r0,0,31,31
  beq-      .loc_0x14
  li        r3, 0
  blr       

.loc_0x14:
  lfs       f1, 0x34(r3)
  lfs       f0, 0x2C(r3)
  lfs       f2, 0x2168(r2)
  fsubs     f0, f1, f0
  fcmpo     cr0, f0, f2
  blt-      .loc_0x40
  lfs       f1, 0x38(r3)
  lfs       f0, 0x30(r3)
  fsubs     f0, f1, f0
  fcmpo     cr0, f0, f2
  bge-      .loc_0x48

.loc_0x40:
  li        r3, 0
  blr       

.loc_0x48:
  li        r3, 0x1
  blr
*/
}

/*
 * --INFO--
 * Address:	80425290
 * Size:	00004C
 */
void Viewport::updateCameraAspect()
{
/*
.loc_0x0:
  lwz       r4, 0x44(r3)
  cmplwi    r4, 0
  beqlr-    
  lfs       f3, 0x38(r3)
  lfs       f0, 0x30(r3)
  lfs       f2, 0x34(r3)
  lfs       f1, 0x2C(r3)
  fsubs     f3, f3, f0
  lfs       f0, 0x2158(r2)
  fsubs     f1, f2, f1
  fcmpu     cr0, f0, f3
  beq-      .loc_0x38
  fcmpu     cr0, f0, f1
  bne-      .loc_0x40

.loc_0x38:
  lfs       f0, 0x2168(r2)
  b         .loc_0x44

.loc_0x40:
  fdivs     f0, f1, f3

.loc_0x44:
  stfs      f0, 0x2C(r4)
  blr
*/
}

/*
 * --INFO--
 * Address:	804252DC
 * Size:	0000A4
 */
void Viewport::refresh()
{
/*
.loc_0x0:
  lfs       f4, 0x1C(r3)
  lfs       f0, 0x48(r3)
  lfs       f7, 0x20(r3)
  lfs       f1, 0x4C(r3)
  fadds     f0, f4, f0
  lfs       f3, 0x24(r3)
  lfs       f2, 0x28(r3)
  fadds     f6, f7, f1
  lfs       f5, 0x50(r3)
  fsubs     f4, f3, f4
  lfs       f3, 0x54(r3)
  fsubs     f1, f2, f7
  stfs      f0, 0x2C(r3)
  fmuls     f2, f5, f4
  fmuls     f3, f3, f1
  stfs      f6, 0x30(r3)
  lfs       f0, 0x2C(r3)
  lfs       f1, 0x30(r3)
  fadds     f0, f0, f2
  fadds     f1, f1, f3
  stfs      f0, 0x34(r3)
  stfs      f1, 0x38(r3)
  lwz       r4, 0x44(r3)
  cmplwi    r4, 0
  beqlr-    
  lfs       f3, 0x38(r3)
  lfs       f0, 0x30(r3)
  lfs       f2, 0x34(r3)
  lfs       f1, 0x2C(r3)
  fsubs     f3, f3, f0
  lfs       f0, 0x2158(r2)
  fsubs     f1, f2, f1
  fcmpu     cr0, f0, f3
  beq-      .loc_0x90
  fcmpu     cr0, f0, f1
  bne-      .loc_0x98

.loc_0x90:
  lfs       f0, 0x2168(r2)
  b         .loc_0x9C

.loc_0x98:
  fdivs     f0, f1, f3

.loc_0x9C:
  stfs      f0, 0x2C(r4)
  blr
*/
}

/*
 * --INFO--
 * Address:	80425380
 * Size:	0000C4
 */
void Viewport::setRect(Rect<float> &)
{
/*
.loc_0x0:
  lfs       f0, 0x0(r4)
  stfs      f0, 0x1C(r3)
  lfs       f0, 0x4(r4)
  stfs      f0, 0x20(r3)
  lfs       f0, 0x8(r4)
  stfs      f0, 0x24(r3)
  lfs       f0, 0xC(r4)
  stfs      f0, 0x28(r3)
  lfs       f4, 0x1C(r3)
  lfs       f0, 0x48(r3)
  lfs       f7, 0x20(r3)
  lfs       f1, 0x4C(r3)
  fadds     f0, f4, f0
  lfs       f3, 0x24(r3)
  lfs       f2, 0x28(r3)
  fadds     f6, f7, f1
  lfs       f5, 0x50(r3)
  fsubs     f4, f3, f4
  lfs       f3, 0x54(r3)
  fsubs     f1, f2, f7
  stfs      f0, 0x2C(r3)
  fmuls     f4, f5, f4
  fmuls     f2, f3, f1
  stfs      f6, 0x30(r3)
  lfs       f0, 0x2C(r3)
  lfs       f1, 0x30(r3)
  fadds     f0, f0, f4
  fadds     f1, f1, f2
  stfs      f0, 0x34(r3)
  stfs      f1, 0x38(r3)
  lwz       r4, 0x44(r3)
  cmplwi    r4, 0
  beqlr-    
  lfs       f3, 0x38(r3)
  lfs       f0, 0x30(r3)
  lfs       f2, 0x34(r3)
  lfs       f1, 0x2C(r3)
  fsubs     f3, f3, f0
  lfs       f0, 0x2158(r2)
  fsubs     f1, f2, f1
  fcmpu     cr0, f0, f3
  beq-      .loc_0xB0
  fcmpu     cr0, f0, f1
  bne-      .loc_0xB8

.loc_0xB0:
  lfs       f0, 0x2168(r2)
  b         .loc_0xBC

.loc_0xB8:
  fdivs     f0, f1, f3

.loc_0xBC:
  stfs      f0, 0x2C(r4)
  blr
*/
}

/*
 * --INFO--
 * Address:	80425444
 * Size:	0000D4
 */
void Viewport::setViewport()
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
  stw       r30, 0x18(r1)
  stw       r29, 0x14(r1)
  stw       r28, 0x10(r1)
  lfs       f2, 0x30(r3)
  mr        r28, r3
  lfs       f0, 0x38(r3)
  lfs       f1, 0x2C(r3)
  lfs       f3, 0x34(r3)
  fsubs     f4, f0, f2
  lfs       f5, 0x2158(r2)
  fsubs     f3, f3, f1
  lfs       f6, 0x2168(r2)
  bl        -0x33BD04
  lfs       f31, 0x30(r28)
  lfs       f0, 0x38(r28)
  lfs       f30, 0x2C(r28)
  fsubs     f1, f0, f31
  bl        -0x36395C
  lfs       f0, 0x34(r28)
  mr        r28, r3
  lwz       r29, -0x64E8(r13)
  fsubs     f1, f0, f30
  bl        -0x363970
  fmr       f1, f31
  mr        r30, r3
  bl        -0x36397C
  fmr       f1, f30
  mr        r31, r3
  bl        -0x363988
  mr        r4, r31
  mr        r5, r30
  add       r6, r29, r28
  bl        -0x33BD0C
  psq_l     f31,0x38(r1),0,0
  lfd       f31, 0x30(r1)
  psq_l     f30,0x28(r1),0,0
  lfd       f30, 0x20(r1)
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  lwz       r29, 0x14(r1)
  lwz       r0, 0x44(r1)
  lwz       r28, 0x10(r1)
  mtlr      r0
  addi      r1, r1, 0x40
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0001EC
 */
void Viewport::setOrthoGraph2d(J2DOrthoGraph &)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80425518
 * Size:	000050
 */
void Viewport::setJ3DViewMtx(bool)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r0, 0x44(r3)
  cmplwi    r0, 0
  beq-      .loc_0x30
  mr        r3, r0
  lwz       r12, 0x0(r3)
  lwz       r12, 0x48(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x34

.loc_0x30:
  lwz       r3, 0x40(r3)

.loc_0x34:
  lis       r4, 0x8051
  subi      r4, r4, 0xDD0
  bl        -0x33B288
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000DC
 */
void Viewport::draw2dframe(J2DGrafContext &)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80425568
 * Size:	000044
 */
void Graphics::allocateViewports(int)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  stw       r4, 0x260(r3)
  lwz       r0, 0x260(r3)
  rlwinm    r3,r0,2,0,29
  bl        -0x4015DC
  stw       r3, 0x268(r31)
  li        r0, 0
  stw       r0, 0x264(r31)
  lwz       r31, 0xC(r1)
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	804255AC
 * Size:	000014
 */
void Graphics::deleteViewports()
{
/*
.loc_0x0:
  li        r0, 0
  stw       r0, 0x260(r3)
  stw       r0, 0x264(r3)
  stw       r0, 0x268(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	804255C0
 * Size:	000030
 */
void Graphics::addViewport(Viewport *)
{
/*
.loc_0x0:
  lwz       r0, 0x260(r3)
  lwz       r5, 0x264(r3)
  cmpw      r0, r5
  blelr-    
  sth       r5, 0x18(r4)
  lwz       r6, 0x264(r3)
  lwz       r7, 0x268(r3)
  addi      r5, r6, 0x1
  rlwinm    r0,r6,2,0,29
  stw       r5, 0x264(r3)
  stwx      r4, r7, r0
  blr
*/
}

/*
 * --INFO--
 * Address:	804255F0
 * Size:	000010
 */
void Graphics::getViewport(int)
{
/*
.loc_0x0:
  lwz       r3, 0x268(r3)
  rlwinm    r0,r4,2,0,29
  lwzx      r3, r3, r0
  blr
*/
}

/*
 * --INFO--
 * Address:	80425600
 * Size:	0000E0
 */
void Graphics::mapViewport(IDelegate1<Viewport *> *)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  li        r31, 0
  stw       r30, 0x18(r1)
  li        r30, 0
  stw       r29, 0x14(r1)
  mr        r29, r4
  stw       r28, 0x10(r1)
  mr        r28, r3
  b         .loc_0xB4

.loc_0x30:
  lwz       r3, 0x268(r28)
  lwzx      r3, r3, r31
  lbz       r0, 0x3C(r3)
  rlwinm.   r0,r0,0,31,31
  beq-      .loc_0x4C
  li        r0, 0
  b         .loc_0x84

.loc_0x4C:
  lfs       f1, 0x34(r3)
  lfs       f0, 0x2C(r3)
  lfs       f2, 0x2168(r2)
  fsubs     f0, f1, f0
  fcmpo     cr0, f0, f2
  blt-      .loc_0x78
  lfs       f1, 0x38(r3)
  lfs       f0, 0x30(r3)
  fsubs     f0, f1, f0
  fcmpo     cr0, f0, f2
  bge-      .loc_0x80

.loc_0x78:
  li        r0, 0
  b         .loc_0x84

.loc_0x80:
  li        r0, 0x1

.loc_0x84:
  rlwinm.   r0,r0,0,24,31
  beq-      .loc_0xAC
  stw       r3, 0x25C(r28)
  mr        r3, r29
  lwz       r12, 0x0(r29)
  lwz       r4, 0x268(r28)
  lwz       r12, 0x8(r12)
  lwzx      r4, r4, r31
  mtctr     r12
  bctrl     

.loc_0xAC:
  addi      r31, r31, 0x4
  addi      r30, r30, 0x1

.loc_0xB4:
  lwz       r0, 0x264(r28)
  cmpw      r30, r0
  blt+      .loc_0x30
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
 * Address:	........
 * Size:	0000E4
 */
void Graphics::mapViewport(IDelegate2<Graphics &, Viewport *> *)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000130
 */
void Graphics::renderJ3D()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000F0
 */
void Graphics::updateJ3D()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	804256E0
 * Size:	000030
 */
void graphicsTokenCallback(unsigned short)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  mr        r4, r3
  stw       r0, 0x14(r1)
  lwz       r5, -0x6514(r13)
  lwz       r3, 0x24(r5)
  bl        0x90
  stw       r3, -0x64E4(r13)
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80425710
 * Size:	000078
 */
void Graphics::setToken(char *)
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
  bl        0x6C
  cmpwi     r3, -0x1
  bne-      .loc_0x58
  lhz       r0, 0x0(r30)
  cmplwi    r0, 0x20
  bge-      .loc_0x60
  rlwinm    r0,r0,2,14,29
  add       r3, r30, r0
  stw       r31, 0x4(r3)
  lhz       r3, 0x0(r30)
  bl        -0x3403B0
  lhz       r3, 0x0(r30)
  addi      r0, r3, 0x1
  sth       r0, 0x0(r30)
  b         .loc_0x60

.loc_0x58:
  rlwinm    r3,r3,0,16,31
  bl        -0x3403C8

.loc_0x60:
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
 * Address:	80425788
 * Size:	000010
 */
void Graphics::getTokenName(unsigned short)
{
/*
.loc_0x0:
  rlwinm    r0,r4,2,14,29
  add       r3, r3, r0
  lwz       r3, 0x4(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000038
 */
void Graphics::getToken()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80425798
 * Size:	000084
 */
void Graphics::findTokenIndex(char *)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  li        r30, 0
  stw       r29, 0x14(r1)
  mr        r29, r4
  stw       r28, 0x10(r1)
  mr        r28, r3
  mr        r31, r28
  b         .loc_0x54

.loc_0x30:
  lwz       r3, 0x4(r31)
  mr        r4, r29
  bl        -0x35B110
  cmpwi     r3, 0
  bne-      .loc_0x4C
  mr        r3, r30
  b         .loc_0x64

.loc_0x4C:
  addi      r31, r31, 0x4
  addi      r30, r30, 0x1

.loc_0x54:
  lhz       r0, 0x0(r28)
  cmpw      r30, r0
  blt+      .loc_0x30
  li        r3, -0x1

.loc_0x64:
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
 * Address:	8042581C
 * Size:	0001CC
 */
void Graphics::initPrimDraw(Matrixf *)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stmw      r27, 0xC(r1)
  mr        r27, r3
  lis       r3, 0x804A
  mr        r28, r4
  li        r30, 0
  mr        r29, r27
  subi      r31, r3, 0x63C8
  b         .loc_0x4C

.loc_0x2C:
  lwz       r3, 0x4(r29)
  mr        r4, r31
  bl        -0x35B190
  cmpwi     r3, 0
  bne-      .loc_0x44
  b         .loc_0x5C

.loc_0x44:
  addi      r29, r29, 0x4
  addi      r30, r30, 0x1

.loc_0x4C:
  lhz       r0, 0x0(r27)
  cmpw      r30, r0
  blt+      .loc_0x2C
  li        r30, -0x1

.loc_0x5C:
  cmpwi     r30, -0x1
  bne-      .loc_0x9C
  lhz       r0, 0x0(r27)
  cmplwi    r0, 0x20
  bge-      .loc_0xA4
  rlwinm    r0,r0,2,14,29
  lis       r3, 0x804A
  subi      r4, r3, 0x63C8
  add       r3, r27, r0
  stw       r4, 0x4(r3)
  lhz       r3, 0x0(r27)
  bl        -0x340500
  lhz       r3, 0x0(r27)
  addi      r0, r3, 0x1
  sth       r0, 0x0(r27)
  b         .loc_0xA4

.loc_0x9C:
  rlwinm    r3,r30,0,16,31
  bl        -0x340518

.loc_0xA4:
  bl        0x25E0
  li        r3, 0x1
  bl        -0x33CD10
  li        r3, 0
  li        r4, 0x4
  bl        -0x33D458
  li        r3, 0
  li        r4, 0
  li        r5, 0
  li        r6, 0x4
  bl        -0x33CECC
  li        r3, 0x1
  bl        -0x33EA8C
  li        r3, 0x4
  li        r4, 0x1
  li        r5, 0x1
  li        r6, 0x1
  li        r7, 0
  li        r8, 0
  li        r9, 0x2
  bl        -0x33EA70
  mr        r3, r27
  bl        0x1E54
  mr        r3, r27
  bl        0x1DD0
  mr        r3, r27
  li        r4, 0x9
  li        r5, 0x1
  bl        0x1DE0
  mr        r3, r27
  li        r4, 0xB
  li        r5, 0x1
  bl        0x1DD0
  mr        r3, r27
  li        r4, 0
  li        r5, 0x9
  li        r6, 0x1
  li        r7, 0x4
  li        r8, 0
  bl        0x1DDC
  mr        r3, r27
  li        r4, 0
  li        r5, 0xB
  li        r6, 0x1
  li        r7, 0x5
  li        r8, 0
  bl        0x1DC0
  li        r3, 0
  bl        -0x33FDD8
  cmplwi    r28, 0
  beq-      .loc_0x17C
  mr        r3, r28
  addi      r4, r27, 0x8C
  bl        -0x33B6C8

.loc_0x17C:
  li        r3, 0x6
  li        r4, 0
  bl        -0x33FEC0
  li        r3, 0
  li        r4, 0x1
  li        r5, 0x1
  li        r6, 0
  bl        -0x33C8DC
  li        r3, 0x1
  li        r4, 0x1
  li        r5, 0x1
  bl        -0x33C840
  addi      r3, r27, 0x8C
  li        r4, 0
  bl        -0x33C458
  lmw       r27, 0xC(r1)
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000F0
 */
void Graphics::drawPoint(Vector3<float> &)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00012C
 */
void Graphics::drawPoint(Vector3<float> *, unsigned short)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	804259E8
 * Size:	0000C4
 */
void Graphics::drawLine(Vector3<float> &, Vector3<float> &)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  mr        r31, r5
  li        r5, 0x2
  stw       r30, 0x18(r1)
  mr        r30, r4
  li        r4, 0
  stw       r29, 0x14(r1)
  mr        r29, r3
  li        r3, 0xA8
  bl        -0x340090
  lfs       f2, 0x8(r30)
  lis       r6, 0xCC01
  lfs       f1, 0x4(r30)
  lfs       f0, 0x0(r30)
  stfs      f0, -0x8000(r6)
  stfs      f1, -0x8000(r6)
  stfs      f2, -0x8000(r6)
  lbz       r5, 0x87(r29)
  lbz       r4, 0x86(r29)
  lbz       r3, 0x85(r29)
  lbz       r0, 0x84(r29)
  stb       r0, -0x8000(r6)
  stb       r3, -0x8000(r6)
  stb       r4, -0x8000(r6)
  stb       r5, -0x8000(r6)
  lfs       f2, 0x8(r31)
  lfs       f1, 0x4(r31)
  lfs       f0, 0x0(r31)
  stfs      f0, -0x8000(r6)
  stfs      f1, -0x8000(r6)
  stfs      f2, -0x8000(r6)
  lbz       r5, 0x87(r29)
  lbz       r4, 0x86(r29)
  lbz       r3, 0x85(r29)
  lbz       r0, 0x84(r29)
  stb       r0, -0x8000(r6)
  stb       r3, -0x8000(r6)
  stb       r4, -0x8000(r6)
  stb       r5, -0x8000(r6)
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  lwz       r29, 0x14(r1)
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0002FC
 */
void Graphics::drawPlane(Plane &, float)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0007F0
 */
void Graphics::drawBox(Vector3<float> &, Vector3<float> *, float *, float *)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000790
 */
void Graphics::drawBox(Vector3<float> &, Vector3<float> &, Vector3<float> &, Vector3<float> &)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80425AAC
 * Size:	000598
 */
void Graphics::drawSphere(Vector3<float> &, float)
{
/*
.loc_0x0:
  stwu      r1, -0x1D0(r1)
  mflr      r0
  stw       r0, 0x1D4(r1)
  stfd      f31, 0x1C0(r1)
  psq_st    f31,0x1C8(r1),0,0
  stfd      f30, 0x1B0(r1)
  psq_st    f30,0x1B8(r1),0,0
  stfd      f29, 0x1A0(r1)
  psq_st    f29,0x1A8(r1),0,0
  stfd      f28, 0x190(r1)
  psq_st    f28,0x198(r1),0,0
  stfd      f27, 0x180(r1)
  psq_st    f27,0x188(r1),0,0
  stfd      f26, 0x170(r1)
  psq_st    f26,0x178(r1),0,0
  stfd      f25, 0x160(r1)
  psq_st    f25,0x168(r1),0,0
  stfd      f24, 0x150(r1)
  psq_st    f24,0x158(r1),0,0
  stfd      f23, 0x140(r1)
  psq_st    f23,0x148(r1),0,0
  stfd      f22, 0x130(r1)
  psq_st    f22,0x138(r1),0,0
  stmw      r25, 0x114(r1)
  fmr       f25, f1
  lis       r5, 0x8050
  lfs       f30, 0x2178(r2)
  mr        r26, r3
  lfd       f29, 0x2170(r2)
  mr        r27, r4
  lfs       f28, 0x2158(r2)
  addi      r30, r5, 0x71A0
  lfs       f27, 0x217C(r2)
  li        r29, 0
  lfs       f31, 0x2168(r2)
  lis       r31, 0x4330
  lis       r25, 0xCC01

.loc_0x94:
  xoris     r0, r29, 0x8000
  stw       r31, 0xC8(r1)
  mr        r6, r27
  addi      r3, r1, 0x68
  stw       r0, 0xCC(r1)
  addi      r4, r1, 0x2C
  addi      r5, r1, 0x20
  lfd       f0, 0xC8(r1)
  stfs      f31, 0x2C(r1)
  fsubs     f0, f0, f29
  stfs      f31, 0x30(r1)
  fmuls     f0, f30, f0
  stfs      f31, 0x34(r1)
  stfs      f28, 0x20(r1)
  stfs      f0, 0x24(r1)
  stfs      f28, 0x28(r1)
  bl        0x2758
  addi      r3, r26, 0x8C
  addi      r4, r1, 0x68
  addi      r5, r1, 0x98
  bl        -0x33B890
  addi      r3, r1, 0x98
  li        r4, 0
  bl        -0x33C624
  li        r28, 0

.loc_0xF8:
  addi      r3, r28, 0x1
  xoris     r4, r28, 0x8000
  rlwinm    r0,r3,27,0,4
  stw       r4, 0xCC(r1)
  rlwinm    r3,r3,1,31,31
  sub       r0, r0, r3
  stw       r31, 0xC8(r1)
  rlwinm    r0,r0,5,0,31
  add       r0, r0, r3
  lfd       f0, 0xC8(r1)
  xoris     r0, r0, 0x8000
  stw       r31, 0xD0(r1)
  fsubs     f0, f0, f29
  stw       r0, 0xD4(r1)
  fmuls     f2, f30, f0
  lfd       f0, 0xD0(r1)
  fsubs     f0, f0, f29
  fmr       f1, f2
  fcmpo     cr0, f2, f28
  fmuls     f3, f30, f0
  bge-      .loc_0x150
  fneg      f1, f2

.loc_0x150:
  fmuls     f0, f1, f27
  fcmpo     cr0, f2, f28
  fctiwz    f0, f0
  stfd      f0, 0xD8(r1)
  lwz       r0, 0xDC(r1)
  rlwinm    r0,r0,3,18,28
  add       r3, r30, r0
  lfs       f0, 0x4(r3)
  fmuls     f26, f25, f0
  bge-      .loc_0x1A4
  lfs       f0, 0x2180(r2)
  lis       r3, 0x8050
  addi      r3, r3, 0x71A0
  fmuls     f0, f2, f0
  fctiwz    f0, f0
  stfd      f0, 0xE0(r1)
  lwz       r0, 0xE4(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f0, r3, r0
  fneg      f0, f0
  b         .loc_0x1C4

.loc_0x1A4:
  fmuls     f0, f2, f27
  lis       r3, 0x8050
  addi      r3, r3, 0x71A0
  fctiwz    f0, f0
  stfd      f0, 0xE8(r1)
  lwz       r0, 0xEC(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f0, r3, r0

.loc_0x1C4:
  fmr       f1, f3
  fcmpo     cr0, f3, f28
  fmuls     f24, f25, f0
  bge-      .loc_0x1D8
  fneg      f1, f3

.loc_0x1D8:
  fmuls     f0, f1, f27
  fcmpo     cr0, f3, f28
  fctiwz    f0, f0
  stfd      f0, 0xF0(r1)
  lwz       r0, 0xF4(r1)
  rlwinm    r0,r0,3,18,28
  add       r3, r30, r0
  lfs       f0, 0x4(r3)
  fmuls     f23, f25, f0
  bge-      .loc_0x22C
  lfs       f0, 0x2180(r2)
  lis       r3, 0x8050
  addi      r3, r3, 0x71A0
  fmuls     f0, f3, f0
  fctiwz    f0, f0
  stfd      f0, 0xF8(r1)
  lwz       r0, 0xFC(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f0, r3, r0
  fneg      f22, f0
  b         .loc_0x24C

.loc_0x22C:
  fmuls     f0, f3, f27
  lis       r3, 0x8050
  addi      r3, r3, 0x71A0
  fctiwz    f0, f0
  stfd      f0, 0x100(r1)
  lwz       r0, 0x104(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f22, r3, r0

.loc_0x24C:
  li        r3, 0xA8
  li        r4, 0
  li        r5, 0x2
  bl        -0x34037C
  stfs      f24, -0x8000(r25)
  addi      r28, r28, 0x1
  fmuls     f0, f25, f22
  cmpwi     r28, 0x10
  stfs      f26, -0x8000(r25)
  stfs      f28, -0x8000(r25)
  lbz       r5, 0x87(r26)
  lbz       r4, 0x86(r26)
  lbz       r3, 0x85(r26)
  lbz       r0, 0x84(r26)
  stb       r0, -0x8000(r25)
  stb       r3, -0x8000(r25)
  stb       r4, -0x8000(r25)
  stb       r5, -0x8000(r25)
  stfs      f0, -0x8000(r25)
  stfs      f23, -0x8000(r25)
  stfs      f28, -0x8000(r25)
  lbz       r5, 0x87(r26)
  lbz       r4, 0x86(r26)
  lbz       r3, 0x85(r26)
  lbz       r0, 0x84(r26)
  stb       r0, -0x8000(r25)
  stb       r3, -0x8000(r25)
  stb       r4, -0x8000(r25)
  stb       r5, -0x8000(r25)
  blt+      .loc_0xF8
  addi      r29, r29, 0x1
  cmpwi     r29, 0x10
  blt+      .loc_0x94
  lis       r3, 0x8050
  lfs       f28, 0x2178(r2)
  lfd       f29, 0x2170(r2)
  addi      r31, r3, 0x71A0
  lfs       f30, 0x2158(r2)
  li        r28, 0
  lfs       f31, 0x217C(r2)
  lis       r30, 0x4330
  lfs       f27, 0x2168(r2)
  lis       r25, 0xCC01

.loc_0x2F8:
  xoris     r0, r28, 0x8000
  stw       r30, 0x100(r1)
  mr        r6, r27
  addi      r3, r1, 0x38
  stw       r0, 0x104(r1)
  addi      r4, r1, 0x14
  addi      r5, r1, 0x8
  lfd       f0, 0x100(r1)
  stfs      f27, 0x14(r1)
  fsubs     f0, f0, f29
  stfs      f27, 0x18(r1)
  fmuls     f0, f28, f0
  stfs      f27, 0x1C(r1)
  stfs      f30, 0xC(r1)
  stfs      f0, 0x8(r1)
  stfs      f30, 0x10(r1)
  bl        0x24F4
  addi      r3, r26, 0x8C
  addi      r4, r1, 0x38
  addi      r5, r1, 0x98
  bl        -0x33BAF4
  addi      r3, r1, 0x98
  li        r4, 0
  bl        -0x33C888
  li        r29, 0

.loc_0x35C:
  addi      r3, r29, 0x1
  xoris     r4, r29, 0x8000
  rlwinm    r0,r3,27,0,4
  stw       r4, 0x104(r1)
  rlwinm    r3,r3,1,31,31
  sub       r0, r0, r3
  stw       r30, 0x100(r1)
  rlwinm    r0,r0,5,0,31
  add       r0, r0, r3
  lfd       f0, 0x100(r1)
  xoris     r0, r0, 0x8000
  stw       r30, 0xF8(r1)
  fsubs     f0, f0, f29
  stw       r0, 0xFC(r1)
  fmuls     f2, f28, f0
  lfd       f0, 0xF8(r1)
  fsubs     f0, f0, f29
  fmr       f1, f2
  fcmpo     cr0, f2, f30
  fmuls     f3, f28, f0
  bge-      .loc_0x3B4
  fneg      f1, f2

.loc_0x3B4:
  fmuls     f0, f1, f31
  fcmpo     cr0, f2, f30
  fctiwz    f0, f0
  stfd      f0, 0xF0(r1)
  lwz       r0, 0xF4(r1)
  rlwinm    r0,r0,3,18,28
  add       r3, r31, r0
  lfs       f0, 0x4(r3)
  fmuls     f26, f25, f0
  bge-      .loc_0x408
  lfs       f0, 0x2180(r2)
  lis       r3, 0x8050
  addi      r3, r3, 0x71A0
  fmuls     f0, f2, f0
  fctiwz    f0, f0
  stfd      f0, 0xE8(r1)
  lwz       r0, 0xEC(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f0, r3, r0
  fneg      f0, f0
  b         .loc_0x428

.loc_0x408:
  fmuls     f0, f2, f31
  lis       r3, 0x8050
  addi      r3, r3, 0x71A0
  fctiwz    f0, f0
  stfd      f0, 0xE0(r1)
  lwz       r0, 0xE4(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f0, r3, r0

.loc_0x428:
  fmr       f1, f3
  fcmpo     cr0, f3, f30
  fmuls     f23, f25, f0
  bge-      .loc_0x43C
  fneg      f1, f3

.loc_0x43C:
  fmuls     f0, f1, f31
  fcmpo     cr0, f3, f30
  fctiwz    f0, f0
  stfd      f0, 0xD8(r1)
  lwz       r0, 0xDC(r1)
  rlwinm    r0,r0,3,18,28
  add       r3, r31, r0
  lfs       f0, 0x4(r3)
  fmuls     f24, f25, f0
  bge-      .loc_0x490
  lfs       f0, 0x2180(r2)
  lis       r3, 0x8050
  addi      r3, r3, 0x71A0
  fmuls     f0, f3, f0
  fctiwz    f0, f0
  stfd      f0, 0xD0(r1)
  lwz       r0, 0xD4(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f0, r3, r0
  fneg      f22, f0
  b         .loc_0x4B0

.loc_0x490:
  fmuls     f0, f3, f31
  lis       r3, 0x8050
  addi      r3, r3, 0x71A0
  fctiwz    f0, f0
  stfd      f0, 0xC8(r1)
  lwz       r0, 0xCC(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f22, r3, r0

.loc_0x4B0:
  li        r3, 0xA8
  li        r4, 0
  li        r5, 0x2
  bl        -0x3405E0
  stfs      f23, -0x8000(r25)
  addi      r29, r29, 0x1
  fmuls     f0, f25, f22
  cmpwi     r29, 0x10
  stfs      f30, -0x8000(r25)
  stfs      f26, -0x8000(r25)
  lbz       r5, 0x87(r26)
  lbz       r4, 0x86(r26)
  lbz       r3, 0x85(r26)
  lbz       r0, 0x84(r26)
  stb       r0, -0x8000(r25)
  stb       r3, -0x8000(r25)
  stb       r4, -0x8000(r25)
  stb       r5, -0x8000(r25)
  stfs      f0, -0x8000(r25)
  stfs      f30, -0x8000(r25)
  stfs      f24, -0x8000(r25)
  lbz       r5, 0x87(r26)
  lbz       r4, 0x86(r26)
  lbz       r3, 0x85(r26)
  lbz       r0, 0x84(r26)
  stb       r0, -0x8000(r25)
  stb       r3, -0x8000(r25)
  stb       r4, -0x8000(r25)
  stb       r5, -0x8000(r25)
  blt+      .loc_0x35C
  addi      r28, r28, 0x1
  cmpwi     r28, 0x10
  blt+      .loc_0x2F8
  psq_l     f31,0x1C8(r1),0,0
  lfd       f31, 0x1C0(r1)
  psq_l     f30,0x1B8(r1),0,0
  lfd       f30, 0x1B0(r1)
  psq_l     f29,0x1A8(r1),0,0
  lfd       f29, 0x1A0(r1)
  psq_l     f28,0x198(r1),0,0
  lfd       f28, 0x190(r1)
  psq_l     f27,0x188(r1),0,0
  lfd       f27, 0x180(r1)
  psq_l     f26,0x178(r1),0,0
  lfd       f26, 0x170(r1)
  psq_l     f25,0x168(r1),0,0
  lfd       f25, 0x160(r1)
  psq_l     f24,0x158(r1),0,0
  lfd       f24, 0x150(r1)
  psq_l     f23,0x148(r1),0,0
  lfd       f23, 0x140(r1)
  psq_l     f22,0x138(r1),0,0
  lfd       f22, 0x130(r1)
  lmw       r25, 0x114(r1)
  lwz       r0, 0x1D4(r1)
  mtlr      r0
  addi      r1, r1, 0x1D0
  blr
*/
}

/*
 * --INFO--
 * Address:	80426044
 * Size:	0005C8
 */
void Graphics::drawSphere(float, Matrixf *)
{
/*
.loc_0x0:
  stwu      r1, -0x1D0(r1)
  mflr      r0
  stw       r0, 0x1D4(r1)
  stfd      f31, 0x1C0(r1)
  psq_st    f31,0x1C8(r1),0,0
  stfd      f30, 0x1B0(r1)
  psq_st    f30,0x1B8(r1),0,0
  stfd      f29, 0x1A0(r1)
  psq_st    f29,0x1A8(r1),0,0
  stfd      f28, 0x190(r1)
  psq_st    f28,0x198(r1),0,0
  stfd      f27, 0x180(r1)
  psq_st    f27,0x188(r1),0,0
  stfd      f26, 0x170(r1)
  psq_st    f26,0x178(r1),0,0
  stfd      f25, 0x160(r1)
  psq_st    f25,0x168(r1),0,0
  stfd      f24, 0x150(r1)
  psq_st    f24,0x158(r1),0,0
  stfd      f23, 0x140(r1)
  psq_st    f23,0x148(r1),0,0
  stfd      f22, 0x130(r1)
  psq_st    f22,0x138(r1),0,0
  stmw      r24, 0x110(r1)
  fmr       f25, f1
  lis       r5, 0x8050
  lis       r6, 0x8051
  lfs       f30, 0x2178(r2)
  lfd       f29, 0x2170(r2)
  mr        r25, r3
  lfs       f28, 0x2158(r2)
  mr        r26, r4
  lfs       f27, 0x217C(r2)
  addi      r29, r5, 0x71A0
  lfs       f31, 0x2168(r2)
  addi      r31, r6, 0x41E4
  li        r28, 0
  lis       r30, 0x4330
  lis       r24, 0xCC01

.loc_0x9C:
  xoris     r0, r28, 0x8000
  stw       r30, 0xC8(r1)
  mr        r6, r31
  addi      r3, r1, 0x68
  stw       r0, 0xCC(r1)
  addi      r4, r1, 0x2C
  addi      r5, r1, 0x20
  lfd       f0, 0xC8(r1)
  stfs      f31, 0x2C(r1)
  fsubs     f0, f0, f29
  stfs      f31, 0x30(r1)
  fmuls     f0, f30, f0
  stfs      f31, 0x34(r1)
  stfs      f28, 0x20(r1)
  stfs      f0, 0x24(r1)
  stfs      f28, 0x28(r1)
  bl        0x21B8
  addi      r4, r1, 0x68
  mr        r3, r26
  mr        r5, r4
  bl        -0x33BE30
  addi      r3, r25, 0x8C
  addi      r4, r1, 0x68
  addi      r5, r1, 0x98
  bl        -0x33BE40
  addi      r3, r1, 0x98
  li        r4, 0
  bl        -0x33CBD4
  li        r27, 0

.loc_0x110:
  addi      r3, r27, 0x1
  xoris     r4, r27, 0x8000
  rlwinm    r0,r3,27,0,4
  stw       r4, 0xCC(r1)
  rlwinm    r3,r3,1,31,31
  sub       r0, r0, r3
  stw       r30, 0xC8(r1)
  rlwinm    r0,r0,5,0,31
  add       r0, r0, r3
  lfd       f0, 0xC8(r1)
  xoris     r0, r0, 0x8000
  stw       r30, 0xD0(r1)
  fsubs     f0, f0, f29
  stw       r0, 0xD4(r1)
  fmuls     f2, f30, f0
  lfd       f0, 0xD0(r1)
  fsubs     f0, f0, f29
  fmr       f1, f2
  fcmpo     cr0, f2, f28
  fmuls     f3, f30, f0
  bge-      .loc_0x168
  fneg      f1, f2

.loc_0x168:
  fmuls     f0, f1, f27
  fcmpo     cr0, f2, f28
  fctiwz    f0, f0
  stfd      f0, 0xD8(r1)
  lwz       r0, 0xDC(r1)
  rlwinm    r0,r0,3,18,28
  add       r3, r29, r0
  lfs       f0, 0x4(r3)
  fmuls     f26, f25, f0
  bge-      .loc_0x1BC
  lfs       f0, 0x2180(r2)
  lis       r3, 0x8050
  addi      r3, r3, 0x71A0
  fmuls     f0, f2, f0
  fctiwz    f0, f0
  stfd      f0, 0xE0(r1)
  lwz       r0, 0xE4(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f0, r3, r0
  fneg      f0, f0
  b         .loc_0x1DC

.loc_0x1BC:
  fmuls     f0, f2, f27
  lis       r3, 0x8050
  addi      r3, r3, 0x71A0
  fctiwz    f0, f0
  stfd      f0, 0xE8(r1)
  lwz       r0, 0xEC(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f0, r3, r0

.loc_0x1DC:
  fmr       f1, f3
  fcmpo     cr0, f3, f28
  fmuls     f24, f25, f0
  bge-      .loc_0x1F0
  fneg      f1, f3

.loc_0x1F0:
  fmuls     f0, f1, f27
  fcmpo     cr0, f3, f28
  fctiwz    f0, f0
  stfd      f0, 0xF0(r1)
  lwz       r0, 0xF4(r1)
  rlwinm    r0,r0,3,18,28
  add       r3, r29, r0
  lfs       f0, 0x4(r3)
  fmuls     f23, f25, f0
  bge-      .loc_0x244
  lfs       f0, 0x2180(r2)
  lis       r3, 0x8050
  addi      r3, r3, 0x71A0
  fmuls     f0, f3, f0
  fctiwz    f0, f0
  stfd      f0, 0xF8(r1)
  lwz       r0, 0xFC(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f0, r3, r0
  fneg      f22, f0
  b         .loc_0x264

.loc_0x244:
  fmuls     f0, f3, f27
  lis       r3, 0x8050
  addi      r3, r3, 0x71A0
  fctiwz    f0, f0
  stfd      f0, 0x100(r1)
  lwz       r0, 0x104(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f22, r3, r0

.loc_0x264:
  li        r3, 0xA8
  li        r4, 0
  li        r5, 0x2
  bl        -0x34092C
  stfs      f24, -0x8000(r24)
  addi      r27, r27, 0x1
  fmuls     f0, f25, f22
  cmpwi     r27, 0x10
  stfs      f26, -0x8000(r24)
  stfs      f28, -0x8000(r24)
  lbz       r5, 0x87(r25)
  lbz       r4, 0x86(r25)
  lbz       r3, 0x85(r25)
  lbz       r0, 0x84(r25)
  stb       r0, -0x8000(r24)
  stb       r3, -0x8000(r24)
  stb       r4, -0x8000(r24)
  stb       r5, -0x8000(r24)
  stfs      f0, -0x8000(r24)
  stfs      f23, -0x8000(r24)
  stfs      f28, -0x8000(r24)
  lbz       r5, 0x87(r25)
  lbz       r4, 0x86(r25)
  lbz       r3, 0x85(r25)
  lbz       r0, 0x84(r25)
  stb       r0, -0x8000(r24)
  stb       r3, -0x8000(r24)
  stb       r4, -0x8000(r24)
  stb       r5, -0x8000(r24)
  blt+      .loc_0x110
  addi      r28, r28, 0x1
  cmpwi     r28, 0x10
  blt+      .loc_0x9C
  lis       r3, 0x8050
  lis       r4, 0x8051
  lfs       f28, 0x2178(r2)
  addi      r31, r3, 0x71A0
  lfd       f29, 0x2170(r2)
  addi      r29, r4, 0x41E4
  lfs       f30, 0x2158(r2)
  li        r27, 0
  lfs       f31, 0x217C(r2)
  lis       r30, 0x4330
  lfs       f27, 0x2168(r2)
  lis       r24, 0xCC01

.loc_0x318:
  xoris     r0, r27, 0x8000
  stw       r30, 0x100(r1)
  mr        r6, r29
  addi      r3, r1, 0x38
  stw       r0, 0x104(r1)
  addi      r4, r1, 0x14
  addi      r5, r1, 0x8
  lfd       f0, 0x100(r1)
  stfs      f27, 0x14(r1)
  fsubs     f0, f0, f29
  stfs      f27, 0x18(r1)
  fmuls     f0, f28, f0
  stfs      f27, 0x1C(r1)
  stfs      f30, 0xC(r1)
  stfs      f0, 0x8(r1)
  stfs      f30, 0x10(r1)
  bl        0x1F3C
  addi      r4, r1, 0x38
  mr        r3, r26
  mr        r5, r4
  bl        -0x33C0AC
  addi      r3, r25, 0x8C
  addi      r4, r1, 0x38
  addi      r5, r1, 0x98
  bl        -0x33C0BC
  addi      r3, r1, 0x98
  li        r4, 0
  bl        -0x33CE50
  li        r28, 0

.loc_0x38C:
  addi      r3, r28, 0x1
  xoris     r4, r28, 0x8000
  rlwinm    r0,r3,27,0,4
  stw       r4, 0x104(r1)
  rlwinm    r3,r3,1,31,31
  sub       r0, r0, r3
  stw       r30, 0x100(r1)
  rlwinm    r0,r0,5,0,31
  add       r0, r0, r3
  lfd       f0, 0x100(r1)
  xoris     r0, r0, 0x8000
  stw       r30, 0xF8(r1)
  fsubs     f0, f0, f29
  stw       r0, 0xFC(r1)
  fmuls     f2, f28, f0
  lfd       f0, 0xF8(r1)
  fsubs     f0, f0, f29
  fmr       f1, f2
  fcmpo     cr0, f2, f30
  fmuls     f3, f28, f0
  bge-      .loc_0x3E4
  fneg      f1, f2

.loc_0x3E4:
  fmuls     f0, f1, f31
  fcmpo     cr0, f2, f30
  fctiwz    f0, f0
  stfd      f0, 0xF0(r1)
  lwz       r0, 0xF4(r1)
  rlwinm    r0,r0,3,18,28
  add       r3, r31, r0
  lfs       f0, 0x4(r3)
  fmuls     f26, f25, f0
  bge-      .loc_0x438
  lfs       f0, 0x2180(r2)
  lis       r3, 0x8050
  addi      r3, r3, 0x71A0
  fmuls     f0, f2, f0
  fctiwz    f0, f0
  stfd      f0, 0xE8(r1)
  lwz       r0, 0xEC(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f0, r3, r0
  fneg      f0, f0
  b         .loc_0x458

.loc_0x438:
  fmuls     f0, f2, f31
  lis       r3, 0x8050
  addi      r3, r3, 0x71A0
  fctiwz    f0, f0
  stfd      f0, 0xE0(r1)
  lwz       r0, 0xE4(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f0, r3, r0

.loc_0x458:
  fmr       f1, f3
  fcmpo     cr0, f3, f30
  fmuls     f23, f25, f0
  bge-      .loc_0x46C
  fneg      f1, f3

.loc_0x46C:
  fmuls     f0, f1, f31
  fcmpo     cr0, f3, f30
  fctiwz    f0, f0
  stfd      f0, 0xD8(r1)
  lwz       r0, 0xDC(r1)
  rlwinm    r0,r0,3,18,28
  add       r3, r31, r0
  lfs       f0, 0x4(r3)
  fmuls     f24, f25, f0
  bge-      .loc_0x4C0
  lfs       f0, 0x2180(r2)
  lis       r3, 0x8050
  addi      r3, r3, 0x71A0
  fmuls     f0, f3, f0
  fctiwz    f0, f0
  stfd      f0, 0xD0(r1)
  lwz       r0, 0xD4(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f0, r3, r0
  fneg      f22, f0
  b         .loc_0x4E0

.loc_0x4C0:
  fmuls     f0, f3, f31
  lis       r3, 0x8050
  addi      r3, r3, 0x71A0
  fctiwz    f0, f0
  stfd      f0, 0xC8(r1)
  lwz       r0, 0xCC(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f22, r3, r0

.loc_0x4E0:
  li        r3, 0xA8
  li        r4, 0
  li        r5, 0x2
  bl        -0x340BA8
  stfs      f23, -0x8000(r24)
  addi      r28, r28, 0x1
  fmuls     f0, f25, f22
  cmpwi     r28, 0x10
  stfs      f30, -0x8000(r24)
  stfs      f26, -0x8000(r24)
  lbz       r5, 0x87(r25)
  lbz       r4, 0x86(r25)
  lbz       r3, 0x85(r25)
  lbz       r0, 0x84(r25)
  stb       r0, -0x8000(r24)
  stb       r3, -0x8000(r24)
  stb       r4, -0x8000(r24)
  stb       r5, -0x8000(r24)
  stfs      f0, -0x8000(r24)
  stfs      f30, -0x8000(r24)
  stfs      f24, -0x8000(r24)
  lbz       r5, 0x87(r25)
  lbz       r4, 0x86(r25)
  lbz       r3, 0x85(r25)
  lbz       r0, 0x84(r25)
  stb       r0, -0x8000(r24)
  stb       r3, -0x8000(r24)
  stb       r4, -0x8000(r24)
  stb       r5, -0x8000(r24)
  blt+      .loc_0x38C
  addi      r27, r27, 0x1
  cmpwi     r27, 0x10
  blt+      .loc_0x318
  psq_l     f31,0x1C8(r1),0,0
  lfd       f31, 0x1C0(r1)
  psq_l     f30,0x1B8(r1),0,0
  lfd       f30, 0x1B0(r1)
  psq_l     f29,0x1A8(r1),0,0
  lfd       f29, 0x1A0(r1)
  psq_l     f28,0x198(r1),0,0
  lfd       f28, 0x190(r1)
  psq_l     f27,0x188(r1),0,0
  lfd       f27, 0x180(r1)
  psq_l     f26,0x178(r1),0,0
  lfd       f26, 0x170(r1)
  psq_l     f25,0x168(r1),0,0
  lfd       f25, 0x160(r1)
  psq_l     f24,0x158(r1),0,0
  lfd       f24, 0x150(r1)
  psq_l     f23,0x148(r1),0,0
  lfd       f23, 0x140(r1)
  psq_l     f22,0x138(r1),0,0
  lfd       f22, 0x130(r1)
  lmw       r24, 0x110(r1)
  lwz       r0, 0x1D4(r1)
  mtlr      r0
  addi      r1, r1, 0x1D0
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0005B4
 */
void Graphics::drawCylinder(Vector3<float> &, Vector3<float> &, float)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000028
 */
void Graphics::loadPrimViewMtx()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0005F8
 */
void Graphics::drawTube(Vector3<float> &, Vector3<float> &, float, float)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000E0
 */
void Graphics::drawMesh(Matrixf *)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8042660C
 * Size:	0002B8
 */
void Graphics::drawAxis(float, Matrixf *)
{
/*
.loc_0x0:
  stwu      r1, -0x60(r1)
  mflr      r0
  stw       r0, 0x64(r1)
  stfd      f31, 0x50(r1)
  psq_st    f31,0x58(r1),0,0
  stmw      r26, 0x38(r1)
  fmr       f31, f1
  mr        r26, r3
  lis       r3, 0x804A
  mr        r27, r4
  mr        r30, r26
  li        r29, 0
  subi      r28, r3, 0x63B8
  b         .loc_0x58

.loc_0x38:
  lwz       r3, 0x4(r30)
  mr        r4, r28
  bl        -0x35BF8C
  cmpwi     r3, 0
  bne-      .loc_0x50
  b         .loc_0x68

.loc_0x50:
  addi      r30, r30, 0x4
  addi      r29, r29, 0x1

.loc_0x58:
  lhz       r0, 0x0(r26)
  cmpw      r29, r0
  blt+      .loc_0x38
  li        r29, -0x1

.loc_0x68:
  cmpwi     r29, -0x1
  bne-      .loc_0xA8
  lhz       r0, 0x0(r26)
  cmplwi    r0, 0x20
  bge-      .loc_0xB0
  rlwinm    r0,r0,2,14,29
  lis       r3, 0x804A
  subi      r4, r3, 0x63B8
  add       r3, r26, r0
  stw       r4, 0x4(r3)
  lhz       r3, 0x0(r26)
  bl        -0x3412FC
  lhz       r3, 0x0(r26)
  addi      r0, r3, 0x1
  sth       r0, 0x0(r26)
  b         .loc_0xB0

.loc_0xA8:
  rlwinm    r3,r29,0,16,31
  bl        -0x341314

.loc_0xB0:
  cmplwi    r27, 0
  lbz       r31, 0x84(r26)
  lbz       r30, 0x85(r26)
  lbz       r29, 0x86(r26)
  lbz       r28, 0x87(r26)
  beq-      .loc_0xE8
  mr        r4, r27
  addi      r3, r26, 0x8C
  addi      r5, r1, 0x8
  bl        -0x33C3E0
  addi      r3, r1, 0x8
  li        r4, 0
  bl        -0x33D174
  b         .loc_0xF4

.loc_0xE8:
  addi      r3, r26, 0x8C
  li        r4, 0
  bl        -0x33D184

.loc_0xF4:
  li        r6, 0xFF
  li        r0, 0
  stb       r6, 0x84(r26)
  li        r3, 0xA8
  li        r4, 0
  li        r5, 0x2
  stb       r0, 0x85(r26)
  stb       r0, 0x86(r26)
  stb       r6, 0x87(r26)
  bl        -0x340D9C
  lfs       f0, 0x2158(r2)
  lis       r11, 0xCC01
  li        r6, 0
  li        r0, 0xFF
  stfs      f0, -0x8000(r11)
  li        r3, 0xA8
  li        r4, 0
  li        r5, 0x2
  stfs      f0, -0x8000(r11)
  stfs      f0, -0x8000(r11)
  lbz       r10, 0x87(r26)
  lbz       r9, 0x86(r26)
  lbz       r8, 0x85(r26)
  lbz       r7, 0x84(r26)
  stb       r7, -0x8000(r11)
  stb       r8, -0x8000(r11)
  stb       r9, -0x8000(r11)
  stb       r10, -0x8000(r11)
  stfs      f31, -0x8000(r11)
  stfs      f0, -0x8000(r11)
  stfs      f0, -0x8000(r11)
  lbz       r10, 0x87(r26)
  lbz       r9, 0x86(r26)
  lbz       r8, 0x85(r26)
  lbz       r7, 0x84(r26)
  stb       r7, -0x8000(r11)
  stb       r8, -0x8000(r11)
  stb       r9, -0x8000(r11)
  stb       r10, -0x8000(r11)
  stb       r6, 0x84(r26)
  stb       r0, 0x85(r26)
  stb       r6, 0x86(r26)
  stb       r0, 0x87(r26)
  bl        -0x340E24
  lfs       f0, 0x2158(r2)
  lis       r11, 0xCC01
  li        r6, 0
  li        r0, 0xFF
  stfs      f0, -0x8000(r11)
  li        r3, 0xA8
  li        r4, 0
  li        r5, 0x2
  stfs      f0, -0x8000(r11)
  stfs      f0, -0x8000(r11)
  lbz       r10, 0x87(r26)
  lbz       r9, 0x86(r26)
  lbz       r8, 0x85(r26)
  lbz       r7, 0x84(r26)
  stb       r7, -0x8000(r11)
  stb       r8, -0x8000(r11)
  stb       r9, -0x8000(r11)
  stb       r10, -0x8000(r11)
  stfs      f0, -0x8000(r11)
  stfs      f31, -0x8000(r11)
  stfs      f0, -0x8000(r11)
  lbz       r10, 0x87(r26)
  lbz       r9, 0x86(r26)
  lbz       r8, 0x85(r26)
  lbz       r7, 0x84(r26)
  stb       r7, -0x8000(r11)
  stb       r8, -0x8000(r11)
  stb       r9, -0x8000(r11)
  stb       r10, -0x8000(r11)
  stb       r6, 0x84(r26)
  stb       r6, 0x85(r26)
  stb       r0, 0x86(r26)
  stb       r0, 0x87(r26)
  bl        -0x340EAC
  lfs       f0, 0x2158(r2)
  lis       r6, 0xCC01
  stfs      f0, -0x8000(r6)
  stfs      f0, -0x8000(r6)
  stfs      f0, -0x8000(r6)
  lbz       r5, 0x87(r26)
  lbz       r4, 0x86(r26)
  lbz       r3, 0x85(r26)
  lbz       r0, 0x84(r26)
  stb       r0, -0x8000(r6)
  stb       r3, -0x8000(r6)
  stb       r4, -0x8000(r6)
  stb       r5, -0x8000(r6)
  stfs      f0, -0x8000(r6)
  stfs      f0, -0x8000(r6)
  stfs      f31, -0x8000(r6)
  lbz       r5, 0x87(r26)
  lbz       r4, 0x86(r26)
  lbz       r3, 0x85(r26)
  lbz       r0, 0x84(r26)
  stb       r0, -0x8000(r6)
  stb       r3, -0x8000(r6)
  stb       r4, -0x8000(r6)
  stb       r5, -0x8000(r6)
  stb       r31, 0x84(r26)
  stb       r30, 0x85(r26)
  stb       r29, 0x86(r26)
  stb       r28, 0x87(r26)
  psq_l     f31,0x58(r1),0,0
  lfd       f31, 0x50(r1)
  lmw       r26, 0x38(r1)
  lwz       r0, 0x64(r1)
  mtlr      r0
  addi      r1, r1, 0x60
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000274
 */
void Graphics::drawMarker(float, Matrixf *)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0001EC
 */
void Graphics::drawRect(Rect<float> &, Color4 &)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0001B8
 */
void Graphics::drawRect(Rect<float> &, JUTTexture *)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	804268C4
 * Size:	000024
 */
void Graphics::clearZBuffer(Rect<float> &)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lfs       f1, 0x2188(r2)
  stw       r0, 0x14(r1)
  bl        .loc_0x24
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr       

.loc_0x24:
*/
}

/*
 * --INFO--
 * Address:	804268E8
 * Size:	0003D0
 */
void Graphics::fillZBuffer(Rect<float> &, float)
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
  stmw      r27, 0x7C(r1)
  fmr       f29, f1
  mr        r27, r3
  lis       r3, 0x804A
  mr        r31, r4
  mr        r30, r27
  li        r29, 0
  subi      r28, r3, 0x63C8
  b         .loc_0x68

.loc_0x48:
  lwz       r3, 0x4(r30)
  mr        r4, r28
  bl        -0x35C278
  cmpwi     r3, 0
  bne-      .loc_0x60
  b         .loc_0x78

.loc_0x60:
  addi      r30, r30, 0x4
  addi      r29, r29, 0x1

.loc_0x68:
  lhz       r0, 0x0(r27)
  cmpw      r29, r0
  blt+      .loc_0x48
  li        r29, -0x1

.loc_0x78:
  cmpwi     r29, -0x1
  bne-      .loc_0xB8
  lhz       r0, 0x0(r27)
  cmplwi    r0, 0x20
  bge-      .loc_0xC0
  rlwinm    r0,r0,2,14,29
  lis       r3, 0x804A
  subi      r4, r3, 0x63C8
  add       r3, r27, r0
  stw       r4, 0x4(r3)
  lhz       r3, 0x0(r27)
  bl        -0x3415E8
  lhz       r3, 0x0(r27)
  addi      r0, r3, 0x1
  sth       r0, 0x0(r27)
  b         .loc_0xC0

.loc_0xB8:
  rlwinm    r3,r29,0,16,31
  bl        -0x341600

.loc_0xC0:
  bl        0x14F8
  li        r3, 0x1
  bl        -0x33DDF8
  li        r3, 0
  li        r4, 0x4
  bl        -0x33E540
  li        r3, 0
  li        r4, 0
  li        r5, 0
  li        r6, 0x4
  bl        -0x33DFB4
  li        r3, 0x1
  bl        -0x33FB74
  li        r3, 0x4
  li        r4, 0x1
  li        r5, 0x1
  li        r6, 0x1
  li        r7, 0
  li        r8, 0
  li        r9, 0x2
  bl        -0x33FB58
  mr        r3, r27
  bl        0xD6C
  mr        r3, r27
  bl        0xCE8
  mr        r3, r27
  li        r4, 0x9
  li        r5, 0x1
  bl        0xCF8
  mr        r3, r27
  li        r4, 0xB
  li        r5, 0x1
  bl        0xCE8
  mr        r3, r27
  li        r4, 0
  li        r5, 0x9
  li        r6, 0x1
  li        r7, 0x4
  li        r8, 0
  bl        0xCF4
  mr        r3, r27
  li        r4, 0
  li        r5, 0xB
  li        r6, 0x1
  li        r7, 0x5
  li        r8, 0
  bl        0xCD8
  li        r3, 0
  bl        -0x340EC0
  li        r3, 0x6
  li        r4, 0
  bl        -0x340F94
  li        r3, 0
  li        r4, 0x1
  li        r5, 0x1
  li        r6, 0
  bl        -0x33D9B0
  li        r3, 0x1
  li        r4, 0x1
  li        r5, 0x1
  bl        -0x33D914
  addi      r3, r27, 0x8C
  li        r4, 0
  bl        -0x33D52C
  lfs       f2, 0x4(r31)
  lfs       f0, 0xC(r31)
  lfs       f1, 0x0(r31)
  lfs       f3, 0x8(r31)
  fsubs     f4, f0, f2
  lfs       f5, 0x2158(r2)
  fsubs     f3, f3, f1
  lfs       f6, 0x2168(r2)
  bl        -0x33D338
  lfs       f31, 0x4(r31)
  lfs       f0, 0xC(r31)
  lfs       f30, 0x0(r31)
  fsubs     f1, f0, f31
  bl        -0x364F90
  lfs       f0, 0x8(r31)
  mr        r28, r3
  fsubs     f1, f0, f30
  bl        -0x364FA0
  fmr       f1, f31
  mr        r29, r3
  bl        -0x364FAC
  fmr       f1, f30
  mr        r30, r3
  bl        -0x364FB8
  mr        r4, r30
  mr        r5, r29
  mr        r6, r28
  bl        -0x33D33C
  li        r3, 0
  bl        -0x33D9F0
  li        r3, 0x1
  li        r4, 0x7
  li        r5, 0x1
  bl        -0x33D9A8
  lfs       f1, 0x4(r31)
  addi      r3, r1, 0x38
  lfs       f2, 0xC(r31)
  lfs       f3, 0x0(r31)
  lfs       f4, 0x8(r31)
  lfs       f5, 0x216C(r2)
  lfs       f6, 0x2168(r2)
  bl        -0x33BD74
  addi      r3, r1, 0x38
  li        r4, 0x1
  bl        -0x33D710
  addi      r3, r1, 0x8
  bl        -0x33C8C0
  addi      r3, r1, 0x8
  li        r4, 0
  bl        -0x33D5F4
  li        r3, 0
  bl        -0x340FCC
  bl        -0x3424A8
  li        r3, 0x9
  li        r4, 0x1
  bl        -0x342900
  li        r3, 0xB
  li        r4, 0x1
  bl        -0x34290C
  li        r3, 0
  li        r4, 0x9
  li        r5, 0x1
  li        r6, 0x4
  li        r7, 0
  bl        -0x3424A0
  li        r3, 0
  li        r4, 0xB
  li        r5, 0x1
  li        r6, 0x5
  li        r7, 0
  bl        -0x3424B8
  li        r3, 0x80
  li        r4, 0
  li        r5, 0x4
  bl        -0x341248
  lfs       f1, 0x4(r31)
  lis       r8, 0xCC01
  lfs       f0, 0x0(r31)
  li        r7, 0xA
  li        r6, 0x46
  li        r0, 0xFF
  stfs      f0, -0x8000(r8)
  li        r3, 0x1
  li        r4, 0x1
  li        r5, 0x1
  stfs      f1, -0x8000(r8)
  stfs      f29, -0x8000(r8)
  stb       r7, -0x8000(r8)
  stb       r6, -0x8000(r8)
  stb       r7, -0x8000(r8)
  stb       r0, -0x8000(r8)
  lfs       f1, 0xC(r31)
  lfs       f0, 0x0(r31)
  stfs      f0, -0x8000(r8)
  stfs      f1, -0x8000(r8)
  stfs      f29, -0x8000(r8)
  stb       r7, -0x8000(r8)
  stb       r6, -0x8000(r8)
  stb       r7, -0x8000(r8)
  stb       r0, -0x8000(r8)
  lfs       f1, 0xC(r31)
  lfs       f0, 0x8(r31)
  stfs      f0, -0x8000(r8)
  stfs      f1, -0x8000(r8)
  stfs      f29, -0x8000(r8)
  stb       r7, -0x8000(r8)
  stb       r6, -0x8000(r8)
  stb       r7, -0x8000(r8)
  stb       r0, -0x8000(r8)
  lfs       f1, 0x4(r31)
  lfs       f0, 0x8(r31)
  stfs      f0, -0x8000(r8)
  stfs      f1, -0x8000(r8)
  stfs      f29, -0x8000(r8)
  stb       r7, -0x8000(r8)
  stb       r6, -0x8000(r8)
  stb       r7, -0x8000(r8)
  stb       r0, -0x8000(r8)
  bl        -0x33DAFC
  li        r3, 0x1
  bl        -0x33DB5C
  psq_l     f31,0xB8(r1),0,0
  lfd       f31, 0xB0(r1)
  psq_l     f30,0xA8(r1),0,0
  lfd       f30, 0xA0(r1)
  psq_l     f29,0x98(r1),0,0
  lfd       f29, 0x90(r1)
  lmw       r27, 0x7C(r1)
  lwz       r0, 0xC4(r1)
  mtlr      r0
  addi      r1, r1, 0xC0
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00045C
 */
void Graphics::drawTile(Sys::Sphere &, Sys::Sphere &, JUTTexture *)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80426CB8
 * Size:	00070C
 */
void Graphics::drawCone(Vector3<float> &, Vector3<float> &, float, int)
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
  stmw      r24, 0xC0(r1)
  lfs       f3, 0x4(r5)
  mr        r24, r3
  lfs       f2, 0x4(r4)
  mr        r25, r6
  lfs       f0, 0x218C(r2)
  fsubs     f2, f3, f2
  lfs       f6, 0x0(r5)
  lfs       f5, 0x0(r4)
  fmuls     f4, f0, f1
  lfs       f3, 0x8(r5)
  lfs       f1, 0x8(r4)
  fsubs     f0, f6, f5
  lfs       f5, 0x2184(r2)
  fsubs     f1, f3, f1
  lfs       f3, 0x2158(r2)
  fmuls     f6, f2, f2
  fmuls     f7, f5, f4
  fmuls     f5, f1, f1
  fmadds    f4, f0, f0, f6
  fadds     f31, f5, f4
  fcmpo     cr0, f31, f3
  ble-      .loc_0xD0
  ble-      .loc_0xD4
  fsqrte    f3, f31
  fmuls     f31, f3, f31
  b         .loc_0xD4

.loc_0xD0:
  fmr       f31, f3

.loc_0xD4:
  lfs       f3, 0x2158(r2)
  fcmpo     cr0, f7, f3
  bge-      .loc_0x10C
  lfs       f3, 0x2180(r2)
  lis       r3, 0x8050
  addi      r3, r3, 0x71A0
  fmuls     f3, f7, f3
  fctiwz    f3, f3
  stfd      f3, 0x68(r1)
  lwz       r0, 0x6C(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f3, r3, r0
  fneg      f8, f3
  b         .loc_0x130

.loc_0x10C:
  lfs       f3, 0x217C(r2)
  lis       r3, 0x8050
  addi      r3, r3, 0x71A0
  fmuls     f3, f7, f3
  fctiwz    f3, f3
  stfd      f3, 0x70(r1)
  lwz       r0, 0x74(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f8, r3, r0

.loc_0x130:
  lfs       f3, 0x2158(r2)
  fmr       f5, f7
  fcmpo     cr0, f7, f3
  bge-      .loc_0x144
  fneg      f5, f7

.loc_0x144:
  lfs       f6, 0x2168(r2)
  lis       r3, 0x8050
  lfs       f4, 0x217C(r2)
  addi      r3, r3, 0x71A0
  fdivs     f7, f6, f31
  lfs       f9, 0x2158(r2)
  lfs       f3, 0x2190(r2)
  fmuls     f4, f5, f4
  fmuls     f2, f2, f7
  fmuls     f0, f0, f7
  fctiwz    f5, f4
  fmuls     f4, f2, f6
  fmuls     f1, f1, f7
  stfd      f5, 0x78(r1)
  fmadds    f4, f0, f9, f4
  lwz       r0, 0x7C(r1)
  rlwinm    r0,r0,3,18,28
  fmadds    f4, f1, f9, f4
  add       r3, r3, r0
  lfs       f5, 0x4(r3)
  fabs      f4, f4
  fdivs     f5, f8, f5
  frsp      f4, f4
  fmuls     f30, f31, f5
  fcmpo     cr0, f4, f3
  bge-      .loc_0x278
  fmuls     f3, f9, f1
  fmuls     f7, f9, f2
  fmsubs    f4, f9, f0, f3
  fnmsubs   f5, f6, f0, f7
  fmsubs    f3, f6, f1, f7
  fmuls     f6, f4, f4
  fmuls     f7, f5, f5
  fmadds    f6, f3, f3, f6
  fadds     f7, f7, f6
  fcmpo     cr0, f7, f9
  ble-      .loc_0x1E8
  ble-      .loc_0x1EC
  fsqrte    f6, f7
  fmuls     f7, f6, f7
  b         .loc_0x1EC

.loc_0x1E8:
  fmr       f7, f9

.loc_0x1EC:
  lfs       f6, 0x2158(r2)
  fcmpo     cr0, f7, f6
  ble-      .loc_0x20C
  lfs       f6, 0x2168(r2)
  fdivs     f6, f6, f7
  fmuls     f3, f3, f6
  fmuls     f4, f4, f6
  fmuls     f5, f5, f6

.loc_0x20C:
  fmuls     f6, f3, f1
  lfs       f9, 0x2158(r2)
  fmuls     f8, f4, f0
  fmuls     f10, f5, f2
  fmsubs    f7, f5, f0, f6
  fmsubs    f8, f3, f2, f8
  fmsubs    f6, f4, f1, f10
  fmuls     f10, f7, f7
  fmuls     f11, f8, f8
  fmadds    f10, f6, f6, f10
  fadds     f10, f11, f10
  fcmpo     cr0, f10, f9
  ble-      .loc_0x250
  ble-      .loc_0x254
  fsqrte    f9, f10
  fmuls     f10, f9, f10
  b         .loc_0x254

.loc_0x250:
  fmr       f10, f9

.loc_0x254:
  lfs       f9, 0x2158(r2)
  fcmpo     cr0, f10, f9
  ble-      .loc_0x340
  lfs       f9, 0x2168(r2)
  fdivs     f9, f9, f10
  fmuls     f6, f6, f9
  fmuls     f7, f7, f9
  fmuls     f8, f8, f9
  b         .loc_0x340

.loc_0x278:
  fmuls     f4, f9, f0
  fmuls     f3, f9, f2
  fnmsubs   f7, f6, f1, f4
  fmsubs    f8, f6, f2, f4
  fmsubs    f6, f9, f1, f3
  fmuls     f3, f7, f7
  fmuls     f4, f8, f8
  fmadds    f3, f6, f6, f3
  fadds     f4, f4, f3
  fcmpo     cr0, f4, f9
  ble-      .loc_0x2B4
  ble-      .loc_0x2B8
  fsqrte    f3, f4
  fmuls     f4, f3, f4
  b         .loc_0x2B8

.loc_0x2B4:
  fmr       f4, f9

.loc_0x2B8:
  lfs       f3, 0x2158(r2)
  fcmpo     cr0, f4, f3
  ble-      .loc_0x2D8
  lfs       f3, 0x2168(r2)
  fdivs     f3, f3, f4
  fmuls     f6, f6, f3
  fmuls     f7, f7, f3
  fmuls     f8, f8, f3

.loc_0x2D8:
  fmuls     f3, f6, f1
  lfs       f9, 0x2158(r2)
  fmuls     f5, f7, f0
  fmuls     f10, f8, f2
  fmsubs    f4, f8, f0, f3
  fmsubs    f5, f6, f2, f5
  fmsubs    f3, f7, f1, f10
  fmuls     f10, f4, f4
  fmuls     f11, f5, f5
  fmadds    f10, f3, f3, f10
  fadds     f10, f11, f10
  fcmpo     cr0, f10, f9
  ble-      .loc_0x31C
  ble-      .loc_0x320
  fsqrte    f9, f10
  fmuls     f10, f9, f10
  b         .loc_0x320

.loc_0x31C:
  fmr       f10, f9

.loc_0x320:
  lfs       f9, 0x2158(r2)
  fcmpo     cr0, f10, f9
  ble-      .loc_0x340
  lfs       f9, 0x2168(r2)
  fdivs     f9, f9, f10
  fmuls     f3, f3, f9
  fmuls     f4, f4, f9
  fmuls     f5, f5, f9

.loc_0x340:
  stfs      f3, 0x38(r1)
  addi      r3, r24, 0x8C
  addi      r5, r1, 0x8
  stfs      f4, 0x48(r1)
  stfs      f5, 0x58(r1)
  stfs      f6, 0x3C(r1)
  stfs      f7, 0x4C(r1)
  stfs      f8, 0x5C(r1)
  stfs      f0, 0x40(r1)
  stfs      f2, 0x50(r1)
  stfs      f1, 0x60(r1)
  lfs       f0, 0x0(r4)
  stfs      f0, 0x44(r1)
  lfs       f0, 0x4(r4)
  stfs      f0, 0x54(r1)
  lfs       f0, 0x8(r4)
  addi      r4, r1, 0x38
  stfs      f0, 0x64(r1)
  bl        -0x33CD40
  addi      r3, r1, 0x8
  li        r4, 0
  bl        -0x33DAD4
  lis       r4, 0x8051
  lis       r3, 0x8050
  lfs       f25, 0x2194(r2)
  addi      r27, r4, 0x41E4
  lfd       f26, 0x2170(r2)
  xoris     r29, r25, 0x8000
  lfs       f27, 0x215C(r2)
  addi      r30, r3, 0x71A0
  lfs       f28, 0x2158(r2)
  li        r26, 0
  lfs       f29, 0x217C(r2)
  lis       r28, 0x4330
  lis       r31, 0xCC01
  b         .loc_0x698

.loc_0x3D0:
  xoris     r0, r26, 0x8000
  stw       r28, 0x78(r1)
  stw       r0, 0x7C(r1)
  lfd       f0, 0x78(r1)
  stw       r29, 0x74(r1)
  fsubs     f0, f0, f26
  stw       r28, 0x70(r1)
  fsubs     f1, f0, f27
  lfd       f0, 0x70(r1)
  fsubs     f0, f0, f26
  fmuls     f1, f25, f1
  fdivs     f1, f1, f0
  fmr       f0, f1
  fcmpo     cr0, f1, f28
  bge-      .loc_0x410
  fneg      f0, f1

.loc_0x410:
  fmuls     f0, f0, f29
  fcmpo     cr0, f1, f28
  fctiwz    f0, f0
  stfd      f0, 0x68(r1)
  lwz       r0, 0x6C(r1)
  rlwinm    r0,r0,3,18,28
  add       r3, r30, r0
  lfs       f0, 0x4(r3)
  fmuls     f24, f30, f0
  bge-      .loc_0x464
  lfs       f0, 0x2180(r2)
  lis       r3, 0x8050
  addi      r3, r3, 0x71A0
  fmuls     f0, f1, f0
  fctiwz    f0, f0
  stfd      f0, 0x80(r1)
  lwz       r0, 0x84(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f0, r3, r0
  fneg      f0, f0
  b         .loc_0x484

.loc_0x464:
  fmuls     f0, f1, f29
  lis       r3, 0x8050
  addi      r3, r3, 0x71A0
  fctiwz    f0, f0
  stfd      f0, 0x88(r1)
  lwz       r0, 0x8C(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f0, r3, r0

.loc_0x484:
  addi      r0, r26, 0x1
  stw       r28, 0x90(r1)
  xoris     r0, r0, 0x8000
  fmuls     f23, f30, f0
  stw       r0, 0x94(r1)
  lfd       f0, 0x90(r1)
  stw       r29, 0x9C(r1)
  fsubs     f0, f0, f26
  stw       r28, 0x98(r1)
  fsubs     f1, f0, f27
  lfd       f0, 0x98(r1)
  fsubs     f0, f0, f26
  fmuls     f1, f25, f1
  fdivs     f1, f1, f0
  fmr       f0, f1
  fcmpo     cr0, f1, f28
  bge-      .loc_0x4CC
  fneg      f0, f1

.loc_0x4CC:
  fmuls     f0, f0, f29
  fcmpo     cr0, f1, f28
  fctiwz    f0, f0
  stfd      f0, 0xA0(r1)
  lwz       r0, 0xA4(r1)
  rlwinm    r0,r0,3,18,28
  add       r3, r30, r0
  lfs       f0, 0x4(r3)
  fmuls     f22, f30, f0
  bge-      .loc_0x520
  lfs       f0, 0x2180(r2)
  lis       r3, 0x8050
  addi      r3, r3, 0x71A0
  fmuls     f0, f1, f0
  fctiwz    f0, f0
  stfd      f0, 0xA8(r1)
  lwz       r0, 0xAC(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f0, r3, r0
  fneg      f0, f0
  b         .loc_0x540

.loc_0x520:
  fmuls     f0, f1, f29
  lis       r3, 0x8050
  addi      r3, r3, 0x71A0
  fctiwz    f0, f0
  stfd      f0, 0xB0(r1)
  lwz       r0, 0xB4(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f0, r3, r0

.loc_0x540:
  fmuls     f21, f30, f0
  li        r3, 0xA8
  li        r4, 0
  li        r5, 0x2
  bl        -0x341880
  lfs       f0, 0x0(r27)
  li        r3, 0xA8
  li        r4, 0
  li        r5, 0x2
  stfs      f0, -0x8000(r31)
  lfs       f0, 0x4(r27)
  stfs      f0, -0x8000(r31)
  lfs       f0, 0x8(r27)
  stfs      f0, -0x8000(r31)
  lbz       r8, 0x87(r24)
  lbz       r7, 0x86(r24)
  lbz       r6, 0x85(r24)
  lbz       r0, 0x84(r24)
  stb       r0, -0x8000(r31)
  stb       r6, -0x8000(r31)
  stb       r7, -0x8000(r31)
  stb       r8, -0x8000(r31)
  stfs      f24, -0x8000(r31)
  stfs      f23, -0x8000(r31)
  stfs      f31, -0x8000(r31)
  lbz       r8, 0x87(r24)
  lbz       r7, 0x86(r24)
  lbz       r6, 0x85(r24)
  lbz       r0, 0x84(r24)
  stb       r0, -0x8000(r31)
  stb       r6, -0x8000(r31)
  stb       r7, -0x8000(r31)
  stb       r8, -0x8000(r31)
  bl        -0x3418F4
  lfs       f0, 0x0(r27)
  li        r3, 0xA8
  li        r4, 0
  li        r5, 0x2
  stfs      f0, -0x8000(r31)
  lfs       f0, 0x4(r27)
  stfs      f0, -0x8000(r31)
  lfs       f0, 0x8(r27)
  stfs      f0, -0x8000(r31)
  lbz       r8, 0x87(r24)
  lbz       r7, 0x86(r24)
  lbz       r6, 0x85(r24)
  lbz       r0, 0x84(r24)
  stb       r0, -0x8000(r31)
  stb       r6, -0x8000(r31)
  stb       r7, -0x8000(r31)
  stb       r8, -0x8000(r31)
  stfs      f22, -0x8000(r31)
  stfs      f21, -0x8000(r31)
  stfs      f31, -0x8000(r31)
  lbz       r8, 0x87(r24)
  lbz       r7, 0x86(r24)
  lbz       r6, 0x85(r24)
  lbz       r0, 0x84(r24)
  stb       r0, -0x8000(r31)
  stb       r6, -0x8000(r31)
  stb       r7, -0x8000(r31)
  stb       r8, -0x8000(r31)
  bl        -0x341968
  stfs      f24, -0x8000(r31)
  addi      r26, r26, 0x1
  stfs      f23, -0x8000(r31)
  stfs      f31, -0x8000(r31)
  lbz       r5, 0x87(r24)
  lbz       r4, 0x86(r24)
  lbz       r3, 0x85(r24)
  lbz       r0, 0x84(r24)
  stb       r0, -0x8000(r31)
  stb       r3, -0x8000(r31)
  stb       r4, -0x8000(r31)
  stb       r5, -0x8000(r31)
  stfs      f22, -0x8000(r31)
  stfs      f21, -0x8000(r31)
  stfs      f31, -0x8000(r31)
  lbz       r5, 0x87(r24)
  lbz       r4, 0x86(r24)
  lbz       r3, 0x85(r24)
  lbz       r0, 0x84(r24)
  stb       r0, -0x8000(r31)
  stb       r3, -0x8000(r31)
  stb       r4, -0x8000(r31)
  stb       r5, -0x8000(r31)

.loc_0x698:
  cmpw      r26, r25
  blt+      .loc_0x3D0
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
  lmw       r24, 0xC0(r1)
  lwz       r0, 0x194(r1)
  mtlr      r0
  addi      r1, r1, 0x190
  blr
*/
}

/*
 * --INFO--
 * Address:	804273C4
 * Size:	0000A4
 */
void Graphics::Graphics()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lis       r4, 0x804E
  stw       r0, 0x14(r1)
  subi      r0, r4, 0x7CA0
  stw       r31, 0xC(r1)
  mr        r31, r3
  stw       r0, 0x26C(r3)
  addi      r3, r31, 0xBC
  bl        -0x3F1EB8
  addi      r3, r31, 0x190
  bl        -0x3F1628
  li        r4, 0
  lis       r3, 0x8042
  stw       r4, 0x260(r31)
  li        r0, 0xFF
  addi      r3, r3, 0x56E0
  stw       r4, 0x264(r31)
  stw       r4, 0x268(r31)
  stb       r0, 0x84(r31)
  stb       r0, 0x85(r31)
  stb       r0, 0x86(r31)
  stb       r0, 0x87(r31)
  stb       r0, 0x88(r31)
  stb       r0, 0x89(r31)
  stb       r0, 0x8A(r31)
  stb       r0, 0x8B(r31)
  sth       r4, 0x0(r31)
  bl        -0x341D30
  li        r0, 0
  mr        r3, r31
  stw       r0, 0x25C(r31)
  bl        .loc_0xA4
  mr        r3, r31
  bl        0x188
  lwz       r0, 0x14(r1)
  mr        r3, r31
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr       

.loc_0xA4:
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00016C
 */
void Graphics::initJ2DOrthoGraph(J2DOrthoGraph *)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00011C
 */
void Graphics::initJ2DPerspGraph(J2DPerspGraph *)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80427468
 * Size:	00016C
 */
void Graphics::setupJ2DOrthoGraphDefault()
{
/*
.loc_0x0:
  stwu      r1, -0x70(r1)
  mflr      r0
  stw       r0, 0x74(r1)
  stfd      f31, 0x60(r1)
  psq_st    f31,0x68(r1),0,0
  stw       r31, 0x5C(r1)
  stw       r30, 0x58(r1)
  mr        r30, r3
  bl        -0x4264
  bl        -0x4268
  lhz       r31, 0x6(r3)
  bl        -0x4270
  lhz       r4, 0x4(r3)
  lis       r0, 0x4330
  addi      r3, r30, 0xBC
  lfs       f1, 0x2158(r2)
  stw       r4, 0x2C(r1)
  lwz       r12, 0xBC(r30)
  fmr       f2, f1
  stw       r0, 0x28(r1)
  lfd       f4, 0x2160(r2)
  lfd       f0, 0x28(r1)
  stw       r31, 0x34(r1)
  lwz       r12, 0x10(r12)
  fsubs     f3, f0, f4
  stw       r0, 0x30(r1)
  lfd       f0, 0x30(r1)
  fsubs     f4, f0, f4
  mtctr     r12
  bctrl     
  bl        -0x42BC
  lhz       r4, 0x6(r3)
  lis       r0, 0x4330
  lwz       r3, -0x64E8(r13)
  stw       r0, 0x38(r1)
  add       r0, r3, r4
  lfd       f1, 0x2170(r2)
  xoris     r0, r0, 0x8000
  stw       r0, 0x3C(r1)
  lfd       f0, 0x38(r1)
  fsubs     f31, f0, f1
  bl        -0x42E8
  lhz       r4, 0x4(r3)
  lis       r0, 0x4330
  lfs       f3, 0x2158(r2)
  addi      r3, r30, 0xBC
  stw       r4, 0x44(r1)
  addi      r4, r1, 0x8
  fadds     f0, f3, f31
  lfd       f2, 0x2160(r2)
  stw       r0, 0x40(r1)
  lfd       f1, 0x40(r1)
  stfs      f3, 0x8(r1)
  fsubs     f1, f1, f2
  stfs      f3, 0xC(r1)
  fadds     f1, f3, f1
  stfs      f0, 0x14(r1)
  stfs      f1, 0x10(r1)
  bl        -0x3F0F1C
  bl        -0x4330
  lhz       r31, 0x6(r3)
  bl        -0x4338
  lhz       r4, 0x4(r3)
  lis       r0, 0x4330
  lfs       f5, 0x2158(r2)
  addi      r3, r30, 0xBC
  stw       r4, 0x4C(r1)
  addi      r4, r1, 0x18
  lfd       f4, 0x2160(r2)
  stw       r0, 0x48(r1)
  lfs       f1, 0x2198(r2)
  lfd       f0, 0x48(r1)
  stw       r31, 0x54(r1)
  fsubs     f3, f0, f4
  lfs       f2, 0x219C(r2)
  stw       r0, 0x50(r1)
  lfd       f0, 0x50(r1)
  stfs      f5, 0x18(r1)
  fsubs     f0, f0, f4
  stfs      f5, 0x1C(r1)
  stfs      f3, 0x20(r1)
  stfs      f0, 0x24(r1)
  bl        -0x3F1E9C
  psq_l     f31,0x68(r1),0,0
  lwz       r0, 0x74(r1)
  lfd       f31, 0x60(r1)
  lwz       r31, 0x5C(r1)
  lwz       r30, 0x58(r1)
  mtlr      r0
  addi      r1, r1, 0x70
  blr
*/
}

/*
 * --INFO--
 * Address:	804275D4
 * Size:	00011C
 */
void Graphics::setupJ2DPerspGraphDefault()
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
  mr        r30, r3
  bl        -0x43D0
  lhz       r31, 0x6(r3)
  bl        -0x43D8
  lhz       r4, 0x4(r3)
  lis       r0, 0x4330
  addi      r3, r30, 0x190
  lfs       f1, 0x2158(r2)
  stw       r4, 0x1C(r1)
  lwz       r12, 0x190(r30)
  fmr       f2, f1
  stw       r0, 0x18(r1)
  lfd       f4, 0x2160(r2)
  lfd       f0, 0x18(r1)
  stw       r31, 0x24(r1)
  lwz       r12, 0x10(r12)
  fsubs     f3, f0, f4
  stw       r0, 0x20(r1)
  lfd       f0, 0x20(r1)
  fsubs     f4, f0, f4
  mtctr     r12
  bctrl     
  bl        -0x4424
  lhz       r4, 0x6(r3)
  lis       r0, 0x4330
  lwz       r3, -0x64E8(r13)
  stw       r0, 0x28(r1)
  add       r0, r3, r4
  lfd       f1, 0x2170(r2)
  xoris     r0, r0, 0x8000
  stw       r0, 0x2C(r1)
  lfd       f0, 0x28(r1)
  fsubs     f31, f0, f1
  bl        -0x4450
  lhz       r4, 0x4(r3)
  lis       r0, 0x4330
  lfs       f3, 0x2158(r2)
  addi      r3, r30, 0x190
  stw       r4, 0x34(r1)
  addi      r4, r1, 0x8
  fadds     f0, f3, f31
  lfd       f2, 0x2160(r2)
  stw       r0, 0x30(r1)
  lfd       f1, 0x30(r1)
  stfs      f3, 0x8(r1)
  fsubs     f1, f1, f2
  stfs      f3, 0xC(r1)
  fadds     f1, f3, f1
  stfs      f0, 0x14(r1)
  stfs      f1, 0x10(r1)
  bl        -0x3F1084
  lfs       f1, 0x21A0(r2)
  addi      r3, r30, 0x190
  lfs       f2, 0x21A4(r2)
  lfs       f3, 0x21A8(r2)
  bl        -0x3F18B8
  psq_l     f31,0x48(r1),0,0
  lwz       r0, 0x54(r1)
  lfd       f31, 0x40(r1)
  lwz       r31, 0x3C(r1)
  lwz       r30, 0x38(r1)
  mtlr      r0
  addi      r1, r1, 0x50
  blr
*/
}

/*
 * --INFO--
 * Address:	804276F0
 * Size:	000020
 */
void Graphics::clearVtxDesc()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  bl        -0x34302C
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80427710
 * Size:	000028
 */
void Graphics::setVtxDesc(_GXAttr, _GXAttrType)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  mr        r3, r4
  mr        r4, r5
  stw       r0, 0x14(r1)
  bl        -0x3434A0
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80427738
 * Size:	000034
 */
void Graphics::setVtxAttrFmt(_GXVtxFmt, _GXAttr, _GXCompCnt, _GXCompType, unsigned char)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  mr        r3, r4
  mr        r4, r5
  stw       r0, 0x14(r1)
  mr        r5, r6
  mr        r6, r7
  mr        r7, r8
  bl        -0x343050
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0001DC
 */
void Graphics::drawRectangle(Rect<float> &, bool)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8042776C
 * Size:	00003C
 */
void Graphics::disableLight()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  li        r3, 0x4
  li        r4, 0
  stw       r0, 0x14(r1)
  li        r5, 0x1
  li        r6, 0x1
  li        r7, 0x1
  li        r8, 0x2
  li        r9, 0x2
  bl        -0x3408F4
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00004C
 */
void Graphics::disableTexture()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	804277A8
 * Size:	000100
 */
void Graphics::setTextureGX()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  li        r3, 0x4
  li        r4, 0
  stw       r0, 0x14(r1)
  li        r5, 0x1
  li        r6, 0x1
  li        r7, 0x1
  li        r8, 0x2
  li        r9, 0x2
  bl        -0x340930
  bl        -0x343104
  li        r3, 0x1
  bl        -0x33EC24
  li        r3, 0
  li        r4, 0
  li        r5, 0
  li        r6, 0x4
  bl        -0x33EDD4
  li        r3, 0
  li        r4, 0
  bl        -0x33F380
  li        r3, 0x1
  bl        -0x342868
  li        r3, 0
  li        r4, 0x1
  li        r5, 0x4
  li        r6, 0x3C
  li        r7, 0
  li        r8, 0x7D
  bl        -0x342B04
  li        r3, 0x9
  li        r4, 0x1
  bl        -0x3435A8
  li        r3, 0xD
  li        r4, 0x1
  bl        -0x3435B4
  li        r3, 0
  li        r4, 0x9
  li        r5, 0x1
  li        r6, 0x4
  li        r7, 0
  bl        -0x343148
  li        r3, 0
  li        r4, 0xD
  li        r5, 0x1
  li        r6, 0x1
  li        r7, 0x4
  bl        -0x343160
  li        r3, 0x2
  bl        -0x341CC8
  li        r3, 0
  li        r4, 0
  li        r5, 0
  bl        -0x33E6FC
  li        r3, 0x1
  li        r4, 0x4
  li        r5, 0x5
  li        r6, 0
  bl        -0x33E7BC
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000F0
 */
void Graphics::drawTexture(JUTTexture *, float, float, float, float)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	804278A8
 * Size:	000234
 */
void Graphics::initPerspPrintf(Viewport *)
{
/*
.loc_0x0:
  stwu      r1, -0x50(r1)
  mflr      r0
  stw       r0, 0x54(r1)
  stmw      r26, 0x38(r1)
  mr        r30, r3
  mr        r31, r4
  lwz       r3, 0x44(r4)
  cmplwi    r3, 0
  beq-      .loc_0x3C
  lwz       r12, 0x0(r3)
  li        r4, 0
  lwz       r12, 0x48(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x40

.loc_0x3C:
  lwz       r3, 0x40(r31)

.loc_0x40:
  lis       r4, 0x804A
  mr        r28, r3
  mr        r26, r30
  li        r27, 0
  subi      r29, r4, 0x63C8
  b         .loc_0x78

.loc_0x58:
  lwz       r3, 0x4(r26)
  mr        r4, r29
  bl        -0x35D248
  cmpwi     r3, 0
  bne-      .loc_0x70
  b         .loc_0x88

.loc_0x70:
  addi      r26, r26, 0x4
  addi      r27, r27, 0x1

.loc_0x78:
  lhz       r0, 0x0(r30)
  cmpw      r27, r0
  blt+      .loc_0x58
  li        r27, -0x1

.loc_0x88:
  cmpwi     r27, -0x1
  bne-      .loc_0xC8
  lhz       r0, 0x0(r30)
  cmplwi    r0, 0x20
  bge-      .loc_0xD0
  rlwinm    r0,r0,2,14,29
  lis       r3, 0x804A
  subi      r4, r3, 0x63C8
  add       r3, r30, r0
  stw       r4, 0x4(r3)
  lhz       r3, 0x0(r30)
  bl        -0x3425B8
  lhz       r3, 0x0(r30)
  addi      r0, r3, 0x1
  sth       r0, 0x0(r30)
  b         .loc_0xD0

.loc_0xC8:
  rlwinm    r3,r27,0,16,31
  bl        -0x3425D0

.loc_0xD0:
  bl        0x528
  li        r3, 0x1
  bl        -0x33EDC8
  li        r3, 0
  li        r4, 0x4
  bl        -0x33F510
  li        r3, 0
  li        r4, 0
  li        r5, 0
  li        r6, 0x4
  bl        -0x33EF84
  li        r3, 0x1
  bl        -0x340B44
  li        r3, 0x4
  li        r4, 0x1
  li        r5, 0x1
  li        r6, 0x1
  li        r7, 0
  li        r8, 0
  li        r9, 0x2
  bl        -0x340B28
  li        r3, 0x4
  li        r4, 0
  li        r5, 0x1
  li        r6, 0x1
  li        r7, 0x1
  li        r8, 0x2
  li        r9, 0x2
  bl        -0x340B48
  bl        -0x34331C
  li        r3, 0x9
  li        r4, 0x1
  bl        -0x343774
  li        r3, 0xB
  li        r4, 0x1
  bl        -0x343780
  li        r3, 0
  li        r4, 0x9
  li        r5, 0x1
  li        r6, 0x4
  li        r7, 0
  bl        -0x343314
  li        r3, 0
  li        r4, 0xB
  li        r5, 0x1
  li        r6, 0x5
  li        r7, 0
  bl        -0x34332C
  li        r3, 0
  bl        -0x341E94
  cmplwi    r28, 0
  beq-      .loc_0x1AC
  mr        r3, r28
  addi      r4, r30, 0x8C
  bl        -0x33D784

.loc_0x1AC:
  li        r3, 0x6
  li        r4, 0
  bl        -0x341F7C
  li        r3, 0
  li        r4, 0x1
  li        r5, 0x1
  li        r6, 0
  bl        -0x33E998
  li        r3, 0x1
  li        r4, 0x1
  li        r5, 0x1
  bl        -0x33E8FC
  addi      r3, r30, 0x8C
  li        r4, 0
  bl        -0x33E514
  addi      r3, r1, 0x8
  bl        -0x33D7F4
  addi      r3, r1, 0x8
  li        r4, 0x1E
  li        r5, 0
  bl        -0x33E458
  li        r3, 0x1
  li        r4, 0x1
  li        r5, 0
  bl        -0x33E930
  lwz       r3, 0x44(r31)
  cmplwi    r3, 0
  beq-      .loc_0x220
  bl        -0xCD80

.loc_0x220:
  lmw       r26, 0x38(r1)
  lwz       r0, 0x54(r1)
  mtlr      r0
  addi      r1, r1, 0x50
  blr
*/
}

/*
 * --INFO--
 * Address:	80427ADC
 * Size:	0003C4
 */
void Graphics::perspPrintf(PerspPrintfInfo &, Vector3<float> &, char *, ...)
{
/*
.loc_0x0:
  stwu      r1, -0x270(r1)
  mflr      r0
  stw       r0, 0x274(r1)
  stw       r31, 0x26C(r1)
  mr        r31, r4
  stw       r30, 0x268(r1)
  stw       r29, 0x264(r1)
  mr        r29, r5
  stw       r28, 0x260(r1)
  mr        r28, r3
  bne-      cr1, .loc_0x4C
  stfd      f1, 0x28(r1)
  stfd      f2, 0x30(r1)
  stfd      f3, 0x38(r1)
  stfd      f4, 0x40(r1)
  stfd      f5, 0x48(r1)
  stfd      f6, 0x50(r1)
  stfd      f7, 0x58(r1)
  stfd      f8, 0x60(r1)

.loc_0x4C:
  addi      r11, r1, 0x278
  addi      r0, r1, 0x8
  lis       r12, 0x400
  stw       r3, 0x8(r1)
  addi      r30, r1, 0x80
  addi      r3, r1, 0x148
  stw       r4, 0xC(r1)
  mr        r4, r6
  stw       r5, 0x10(r1)
  mr        r5, r30
  stw       r6, 0x14(r1)
  stw       r7, 0x18(r1)
  stw       r8, 0x1C(r1)
  stw       r9, 0x20(r1)
  stw       r10, 0x24(r1)
  stw       r12, 0x80(r1)
  stw       r11, 0x84(r1)
  stw       r0, 0x88(r1)
  bl        -0x360584
  lwz       r4, 0x25C(r28)
  lwz       r3, 0x44(r4)
  cmplwi    r3, 0
  beq-      .loc_0xC0
  lwz       r12, 0x0(r3)
  li        r4, 0
  lwz       r12, 0x48(r12)
  mtctr     r12
  bctrl     
  b         .loc_0xC4

.loc_0xC0:
  lwz       r3, 0x40(r4)

.loc_0xC4:
  lfs       f2, 0x10(r31)
  lfs       f0, 0x0(r3)
  fneg      f1, f2
  fmuls     f0, f0, f2
  stfs      f0, 0xBC(r1)
  lfs       f0, 0x4(r3)
  fmuls     f0, f0, f2
  stfs      f0, 0xCC(r1)
  lfs       f0, 0x8(r3)
  fmuls     f0, f0, f2
  stfs      f0, 0xDC(r1)
  lfs       f0, 0x10(r3)
  fmuls     f0, f0, f1
  stfs      f0, 0xC0(r1)
  lfs       f0, 0x14(r3)
  fmuls     f0, f0, f1
  stfs      f0, 0xD0(r1)
  lfs       f0, 0x18(r3)
  fmuls     f0, f0, f1
  stfs      f0, 0xE0(r1)
  lfs       f0, 0x20(r3)
  fmuls     f0, f0, f2
  stfs      f0, 0xC4(r1)
  lfs       f0, 0x24(r3)
  fmuls     f0, f0, f2
  stfs      f0, 0xD4(r1)
  lfs       f0, 0x28(r3)
  fmuls     f0, f0, f2
  stfs      f0, 0xE4(r1)
  lfs       f0, 0x0(r29)
  stfs      f0, 0xC8(r1)
  lfs       f0, 0x4(r29)
  stfs      f0, 0xD8(r1)
  lfs       f0, 0x8(r29)
  stfs      f0, 0xE8(r1)
  lwz       r4, 0x25C(r28)
  lwz       r3, 0x44(r4)
  cmplwi    r3, 0
  beq-      .loc_0x178
  lwz       r12, 0x0(r3)
  li        r4, 0
  lwz       r12, 0x48(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x17C

.loc_0x178:
  lwz       r3, 0x40(r4)

.loc_0x17C:
  addi      r4, r1, 0xBC
  addi      r5, r1, 0x8C
  bl        -0x33D960
  addi      r3, r1, 0x8C
  li        r4, 0
  bl        -0x33E6F4
  li        r7, -0x1
  lbz       r9, 0x1B(r31)
  stw       r7, 0x68(r1)
  addi      r3, r1, 0xEC
  lbz       r8, 0x1A(r31)
  addi      r5, r1, 0x7C
  lbz       r4, 0x19(r31)
  addi      r6, r1, 0x74
  lbz       r0, 0x18(r31)
  stb       r4, 0x69(r1)
  stb       r0, 0x68(r1)
  stb       r8, 0x6A(r1)
  stb       r9, 0x6B(r1)
  lwz       r4, 0x68(r1)
  stw       r7, 0x6C(r1)
  stw       r4, 0x74(r1)
  lbz       r9, 0x17(r31)
  lbz       r8, 0x16(r31)
  lbz       r7, 0x15(r31)
  lbz       r0, 0x14(r31)
  stb       r7, 0x6D(r1)
  stb       r0, 0x6C(r1)
  stb       r8, 0x6E(r1)
  stb       r9, 0x6F(r1)
  lwz       r0, 0x6C(r1)
  stw       r4, 0x70(r1)
  stw       r0, 0x7C(r1)
  stw       r0, 0x78(r1)
  lwz       r4, 0x0(r31)
  bl        -0x3EA500
  addi      r3, r1, 0xEC
  bl        -0x3EA394
  lwz       r0, 0xC(r31)
  cmpwi     r0, 0x2
  beq-      .loc_0x27C
  bge-      .loc_0x30C
  cmpwi     r0, 0x1
  bge-      .loc_0x230
  b         .loc_0x30C

.loc_0x230:
  lwz       r4, 0x4(r31)
  lis       r5, 0x4330
  lwz       r0, 0x8(r31)
  addi      r3, r1, 0xEC
  xoris     r4, r4, 0x8000
  stw       r5, 0x248(r1)
  xoris     r0, r0, 0x8000
  lfd       f2, 0x2170(r2)
  stw       r4, 0x24C(r1)
  addi      r4, r1, 0x148
  lfd       f0, 0x248(r1)
  stw       r0, 0x254(r1)
  fsubs     f1, f0, f2
  stw       r5, 0x250(r1)
  lfd       f0, 0x250(r1)
  fsubs     f2, f0, f2
  crset     6, 0x6
  bl        -0x3EA058
  b         .loc_0x398

.loc_0x27C:
  addi      r3, r1, 0xEC
  addi      r4, r1, 0x148
  crclr     6, 0x6
  bl        -0x3E9E38
  lfs       f0, 0x2158(r2)
  addi      r3, r1, 0xEC
  fcmpo     cr0, f1, f0
  cror      2, 0x1, 0x2
  bne-      .loc_0x2AC
  lfs       f0, 0x215C(r2)
  fadds     f0, f0, f1
  b         .loc_0x2B4

.loc_0x2AC:
  lfs       f0, 0x215C(r2)
  fsubs     f0, f1, f0

.loc_0x2B4:
  fctiwz    f0, f0
  lis       r5, 0x4330
  lwz       r0, 0x8(r31)
  addi      r4, r1, 0x148
  lwz       r6, 0x4(r31)
  stfd      f0, 0x250(r1)
  xoris     r0, r0, 0x8000
  lfd       f2, 0x2170(r2)
  lwz       r7, 0x254(r1)
  stw       r5, 0x248(r1)
  sub       r6, r6, r7
  xoris     r6, r6, 0x8000
  stw       r0, 0x25C(r1)
  stw       r6, 0x24C(r1)
  stw       r5, 0x258(r1)
  lfd       f1, 0x248(r1)
  lfd       f0, 0x258(r1)
  fsubs     f1, f1, f2
  fsubs     f2, f0, f2
  crset     6, 0x6
  bl        -0x3EA0E8
  b         .loc_0x398

.loc_0x30C:
  addi      r3, r1, 0xEC
  addi      r4, r1, 0x148
  crclr     6, 0x6
  bl        -0x3E9EC8
  lfs       f2, 0x215C(r2)
  addi      r3, r1, 0xEC
  lfs       f0, 0x2158(r2)
  fmuls     f1, f2, f1
  fcmpo     cr0, f1, f0
  cror      2, 0x1, 0x2
  bne-      .loc_0x340
  fadds     f0, f2, f1
  b         .loc_0x344

.loc_0x340:
  fsubs     f0, f1, f2

.loc_0x344:
  fctiwz    f0, f0
  lis       r5, 0x4330
  lwz       r0, 0x8(r31)
  addi      r4, r1, 0x148
  lwz       r6, 0x4(r31)
  stfd      f0, 0x258(r1)
  xoris     r0, r0, 0x8000
  lfd       f2, 0x2170(r2)
  lwz       r7, 0x25C(r1)
  stw       r5, 0x250(r1)
  sub       r6, r6, r7
  xoris     r6, r6, 0x8000
  stw       r0, 0x24C(r1)
  stw       r6, 0x254(r1)
  stw       r5, 0x248(r1)
  lfd       f1, 0x250(r1)
  lfd       f0, 0x248(r1)
  fsubs     f1, f1, f2
  fsubs     f2, f0, f2
  crset     6, 0x6
  bl        -0x3EA178

.loc_0x398:
  addi      r3, r1, 0xEC
  li        r4, -0x1
  bl        -0x3EA56C
  lwz       r0, 0x274(r1)
  lwz       r31, 0x26C(r1)
  lwz       r30, 0x268(r1)
  lwz       r29, 0x264(r1)
  lwz       r28, 0x260(r1)
  mtlr      r0
  addi      r1, r1, 0x270
  blr
*/
}

/*
 * --INFO--
 * Address:	80427EA0
 * Size:	000060
 */
void Graphics::initGX()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  bl        -0x3437DC
  bl        -0x3431A4
  li        r3, 0
  bl        -0x33E8A0
  li        r3, 0
  bl        -0x34105C
  li        r3, 0x1
  bl        -0x33F310
  li        r3, 0
  li        r4, 0x3
  bl        -0x33FA58
  li        r3, 0x1
  bl        -0x342F40
  li        r3, 0
  bl        -0x33FB90
  li        r3, 0
  bl        -0x33FB74
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80427F00
 * Size:	000004
 */
void Graphics::dirtyInitGX()
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	80427F04
 * Size:	000060
 */
void Graphics::clearInitGX()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  bl        -0x343840
  bl        -0x343208
  li        r3, 0
  bl        -0x33E904
  li        r3, 0
  bl        -0x3410C0
  li        r3, 0x1
  bl        -0x33F374
  li        r3, 0
  li        r4, 0x3
  bl        -0x33FABC
  li        r3, 0x1
  bl        -0x342FA4
  li        r3, 0
  bl        -0x33FBF4
  li        r3, 0
  bl        -0x33FBD8
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80427F64
 * Size:	000004
 */
void Splitter::split4(float, float)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	80427F68
 * Size:	000028
 */
void __sinit_graphics_cpp(void)
{
/*
.loc_0x0:
  lis       r4, 0x8051
  li        r0, -0x1
  lfs       f0, 0x48B0(r4)
  lis       r3, 0x804F
  stw       r0, -0x64F0(r13)
  stfsu     f0, -0x4268(r3)
  stfs      f0, -0x64EC(r13)
  stfs      f0, 0x4(r3)
  stfs      f0, 0x8(r3)
  blr
*/
}
