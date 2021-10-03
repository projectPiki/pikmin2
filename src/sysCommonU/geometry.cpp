

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
 * Size:	000238
 */
void calcNearestEdgePoint__Q23Sys4EdgeFR10Vector3<float>R10Vector3<float>(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80415AA4
 * Size:	0000B4
 */
void getAxisVector__Q23Sys4TubeFR10Vector3<float>(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r4
  lfs       f1, 0xC(r3)
  lfs       f0, 0x0(r3)
  lfs       f3, 0x10(r3)
  lfs       f2, 0x4(r3)
  fsubs     f0, f1, f0
  lfs       f4, 0x14(r3)
  lfs       f1, 0x8(r3)
  fsubs     f2, f3, f2
  stfs      f0, 0x0(r4)
  fsubs     f0, f4, f1
  stfs      f2, 0x4(r4)
  stfs      f0, 0x8(r4)
  lfs       f1, 0x0(r4)
  lfs       f0, 0x4(r4)
  lfs       f2, 0x8(r4)
  fmuls     f1, f1, f1
  fmuls     f0, f0, f0
  fmuls     f2, f2, f2
  fadds     f0, f1, f0
  fadds     f1, f2, f0
  bl        -0x4304
  lfs       f0, 0x1FA8(r2)
  fcmpo     cr0, f1, f0
  ble-      .loc_0xA0
  lfs       f2, 0x1FAC(r2)
  lfs       f0, 0x0(r31)
  fdivs     f1, f2, f1
  fmuls     f0, f0, f1
  stfs      f0, 0x0(r31)
  lfs       f0, 0x4(r31)
  fmuls     f0, f0, f1
  stfs      f0, 0x4(r31)
  lfs       f0, 0x8(r31)
  fmuls     f0, f0, f1
  stfs      f0, 0x8(r31)

.loc_0xA0:
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
 * Size:	00002C
 */
void Sys::Tube::getYRatio( (float))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80415B58
 * Size:	00027C
 */
void collide__Q23Sys4TubeFRQ23Sys6SphereR10Vector3<float>Rf(void)
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
  stfd      f26, 0x20(r1)
  psq_st    f26,0x28(r1),0,0
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  stw       r29, 0x14(r1)
  stw       r28, 0x10(r1)
  mr        r28, r3
  mr        r29, r4
  lfs       f2, 0x10(r3)
  mr        r30, r5
  lfs       f0, 0x4(r3)
  mr        r31, r6
  lfs       f1, 0xC(r3)
  fsubs     f30, f2, f0
  lfs       f0, 0x0(r3)
  lfs       f2, 0x14(r3)
  fsubs     f31, f1, f0
  lfs       f1, 0x8(r3)
  fmuls     f0, f30, f30
  fsubs     f29, f2, f1
  fmr       f28, f31
  fmadds    f0, f31, f31, f0
  fmr       f27, f30
  fmr       f26, f29
  fmadds    f1, f29, f29, f0
  bl        -0x43EC
  lfs       f0, 0x1FA8(r2)
  fcmpo     cr0, f1, f0
  ble-      .loc_0xC0
  lfs       f0, 0x1FAC(r2)
  fdivs     f0, f0, f1
  fmuls     f28, f28, f0
  fmuls     f27, f27, f0
  fmuls     f26, f26, f0
  b         .loc_0xC4

.loc_0xC0:
  fmr       f1, f0

.loc_0xC4:
  lfs       f0, 0x1FA8(r2)
  fcmpu     cr0, f0, f1
  bne-      .loc_0xD8
  li        r3, 0
  b         .loc_0x22C

.loc_0xD8:
  lfs       f4, 0x4(r29)
  lfs       f2, 0x4(r28)
  lfs       f6, 0x0(r29)
  fsubs     f0, f4, f2
  lfs       f5, 0x0(r28)
  lfs       f9, 0x8(r29)
  fsubs     f3, f6, f5
  lfs       f8, 0x8(r28)
  fmuls     f0, f27, f0
  fsubs     f7, f9, f8
  fmadds    f0, f28, f3, f0
  fmadds    f0, f26, f7, f0
  fdivs     f27, f0, f1
  fmuls     f1, f30, f27
  fmuls     f3, f31, f27
  fmuls     f0, f29, f27
  fadds     f2, f1, f2
  fadds     f3, f3, f5
  fadds     f1, f0, f8
  fsubs     f26, f2, f4
  fsubs     f29, f3, f6
  fsubs     f30, f1, f9
  fmuls     f0, f26, f26
  fmadds    f0, f29, f29, f0
  fmadds    f1, f30, f30, f0
  bl        -0x4490
  lfs       f5, 0x1FAC(r2)
  lfs       f2, 0x1C(r28)
  fsubs     f4, f5, f27
  lfs       f0, 0x1FA8(r2)
  fmuls     f2, f2, f27
  lfs       f3, 0x18(r28)
  lfs       f6, 0xC(r29)
  fcmpo     cr0, f27, f0
  fmadds    f2, f4, f3, f2
  fadds     f2, f6, f2
  fsubs     f28, f2, f1
  cror      2, 0x1, 0x2
  bne-      .loc_0x228
  fcmpo     cr0, f27, f5
  cror      2, 0, 0x2
  bne-      .loc_0x228
  fcmpo     cr0, f28, f0
  cror      2, 0x1, 0x2
  bne-      .loc_0x228
  stfs      f29, 0x0(r30)
  stfs      f26, 0x4(r30)
  stfs      f30, 0x8(r30)
  lfs       f1, 0x0(r30)
  lfs       f0, 0x4(r30)
  fmuls     f1, f1, f1
  lfs       f2, 0x8(r30)
  fmuls     f0, f0, f0
  fmuls     f2, f2, f2
  fadds     f0, f1, f0
  fadds     f1, f2, f0
  bl        -0x450C
  lfs       f0, 0x1FA8(r2)
  fcmpo     cr0, f1, f0
  ble-      .loc_0x1F4
  lfs       f2, 0x1FAC(r2)
  lfs       f0, 0x0(r30)
  fdivs     f1, f2, f1
  fmuls     f0, f0, f1
  stfs      f0, 0x0(r30)
  lfs       f0, 0x4(r30)
  fmuls     f0, f0, f1
  stfs      f0, 0x4(r30)
  lfs       f0, 0x8(r30)
  fmuls     f0, f0, f1
  stfs      f0, 0x8(r30)

.loc_0x1F4:
  fneg      f3, f28
  lfs       f0, 0x0(r30)
  lfs       f1, 0x4(r30)
  li        r3, 0x1
  lfs       f2, 0x8(r30)
  fmuls     f0, f0, f3
  fmuls     f1, f1, f3
  fmuls     f2, f2, f3
  stfs      f0, 0x0(r30)
  stfs      f1, 0x4(r30)
  stfs      f2, 0x8(r30)
  stfs      f27, 0x0(r31)
  b         .loc_0x22C

.loc_0x228:
  li        r3, 0

.loc_0x22C:
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
  psq_l     f26,0x28(r1),0,0
  lfd       f26, 0x20(r1)
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  lwz       r29, 0x14(r1)
  lwz       r0, 0x84(r1)
  lwz       r28, 0x10(r1)
  mtlr      r0
  addi      r1, r1, 0x80
  blr
*/
}

/*
 * --INFO--
 * Address:	80415DD4
 * Size:	0000F4
 */
void getPosRatio__Q23Sys4TubeFRC10Vector3<float>(void)
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
  lfs       f2, 0x10(r3)
  mr        r30, r3
  lfs       f0, 0x4(r3)
  mr        r31, r4
  lfs       f1, 0xC(r3)
  fsubs     f30, f2, f0
  lfs       f0, 0x0(r3)
  lfs       f2, 0x14(r3)
  fsubs     f31, f1, f0
  lfs       f1, 0x8(r3)
  fmuls     f0, f30, f30
  fsubs     f29, f2, f1
  fmadds    f0, f31, f31, f0
  fmadds    f1, f29, f29, f0
  bl        -0x4634
  lfs       f0, 0x1FA8(r2)
  fcmpo     cr0, f1, f0
  ble-      .loc_0x8C
  lfs       f0, 0x1FAC(r2)
  fdivs     f0, f0, f1
  fmuls     f31, f31, f0
  fmuls     f30, f30, f0
  fmuls     f29, f29, f0
  b         .loc_0x90

.loc_0x8C:
  fmr       f1, f0

.loc_0x90:
  lfs       f2, 0x4(r31)
  lfs       f0, 0x4(r30)
  lfs       f3, 0x0(r31)
  fsubs     f0, f2, f0
  lfs       f2, 0x0(r30)
  lfs       f4, 0x8(r31)
  fsubs     f2, f3, f2
  lfs       f3, 0x8(r30)
  fmuls     f0, f30, f0
  fsubs     f3, f4, f3
  fmadds    f0, f31, f2, f0
  fmadds    f0, f29, f3, f0
  fdivs     f1, f0, f1
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
 * Address:	........
 * Size:	00001C
 */
void Sys::Tube::getRatioRadius( (float))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000200
 */
void getPosGradient__Q23Sys4TubeFR10Vector3<float>fR10Vector3<float>R10Vector3<float>(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80415EC8
 * Size:	00004C
 */
void Sys::Tube::setPos( (float))
{
/*
.loc_0x0:
  lfs       f6, 0x0(r4)
  lfs       f0, 0xC(r4)
  lfs       f5, 0x4(r4)
  fsubs     f0, f0, f6
  lfs       f2, 0x10(r4)
  lfs       f4, 0x8(r4)
  fsubs     f2, f2, f5
  lfs       f3, 0x14(r4)
  fmuls     f0, f0, f1
  fsubs     f3, f3, f4
  fmuls     f2, f2, f1
  fadds     f0, f6, f0
  fmuls     f1, f3, f1
  fadds     f2, f5, f2
  stfs      f0, 0x0(r3)
  fadds     f0, f4, f1
  stfs      f2, 0x4(r3)
  stfs      f0, 0x8(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	80415F14
 * Size:	000058
 */
void Sys::Sphere::intersect( (Sys::Sphere &))
{
/*
.loc_0x0:
  lfs       f2, 0x4(r4)
  lfs       f0, 0x4(r3)
  lfs       f1, 0x0(r4)
  fsubs     f3, f2, f0
  lfs       f0, 0x0(r3)
  lfs       f2, 0x8(r4)
  fsubs     f4, f1, f0
  lfs       f1, 0x8(r3)
  fmuls     f0, f3, f3
  fsubs     f5, f2, f1
  lfs       f3, 0xC(r4)
  lfs       f2, 0xC(r3)
  fmadds    f1, f4, f4, f0
  lfs       f0, 0x1FA8(r2)
  fadds     f2, f3, f2
  fmadds    f1, f5, f5, f1
  fnmsubs   f1, f2, f2, f1
  fcmpo     cr0, f1, f0
  cror      2, 0, 0x2
  mfcr      r0
  rlwinm    r3,r0,3,31,31
  blr
*/
}

/*
 * --INFO--
 * Address:	80415F6C
 * Size:	000120
 */
void intersect__Q23Sys6SphereFRQ23Sys6SphereR10Vector3<float>(void)
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
  stw       r29, 0x14(r1)
  mr        r29, r3
  lfs       f1, 0x0(r4)
  lfs       f0, 0x0(r3)
  lfs       f3, 0x4(r4)
  lfs       f2, 0x4(r3)
  fsubs     f0, f1, f0
  lfs       f4, 0x8(r4)
  lfs       f1, 0x8(r3)
  fsubs     f2, f3, f2
  stfs      f0, 0x0(r5)
  fsubs     f0, f4, f1
  stfs      f2, 0x4(r5)
  stfs      f0, 0x8(r5)
  lfs       f1, 0x0(r5)
  lfs       f0, 0x4(r5)
  lfs       f2, 0x8(r5)
  fmuls     f1, f1, f1
  fmuls     f0, f0, f0
  fmuls     f2, f2, f2
  fadds     f0, f1, f0
  fadds     f1, f2, f0
  bl        -0x47DC
  lfs       f0, 0x1FA8(r2)
  fcmpo     cr0, f1, f0
  ble-      .loc_0xB4
  lfs       f2, 0x1FAC(r2)
  lfs       f0, 0x0(r31)
  fdivs     f2, f2, f1
  fmuls     f0, f0, f2
  stfs      f0, 0x0(r31)
  lfs       f0, 0x4(r31)
  fmuls     f0, f0, f2
  stfs      f0, 0x4(r31)
  lfs       f0, 0x8(r31)
  fmuls     f0, f0, f2
  stfs      f0, 0x8(r31)
  b         .loc_0xB8

.loc_0xB4:
  fmr       f1, f0

.loc_0xB8:
  lfs       f3, 0xC(r30)
  lfs       f2, 0xC(r29)
  lfs       f0, 0x1FA8(r2)
  fadds     f2, f3, f2
  fsubs     f3, f1, f2
  fcmpo     cr0, f3, f0
  ble-      .loc_0xDC
  li        r3, 0
  b         .loc_0x104

.loc_0xDC:
  lfs       f0, 0x0(r31)
  li        r3, 0x1
  lfs       f1, 0x4(r31)
  fmuls     f0, f0, f3
  lfs       f2, 0x8(r31)
  fmuls     f1, f1, f3
  fmuls     f2, f2, f3
  stfs      f0, 0x0(r31)
  stfs      f1, 0x4(r31)
  stfs      f2, 0x8(r31)

.loc_0x104:
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
 * Address:	8041608C
 * Size:	000204
 */
void Sys::Sphere::intersect( (Sys::Edge &, float &))
{
/*
.loc_0x0:
  stwu      r1, -0x50(r1)
  mflr      r0
  stw       r0, 0x54(r1)
  stfd      f31, 0x40(r1)
  psq_st    f31,0x48(r1),0,0
  stfd      f30, 0x30(r1)
  psq_st    f30,0x38(r1),0,0
  stfd      f29, 0x20(r1)
  psq_st    f29,0x28(r1),0,0
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  stw       r29, 0x14(r1)
  mr        r29, r3
  mr        r30, r4
  lfs       f2, 0x4(r4)
  mr        r31, r5
  lfs       f0, 0x4(r3)
  lfs       f1, 0x0(r4)
  fsubs     f4, f2, f0
  lfs       f0, 0x0(r3)
  lfs       f2, 0x8(r4)
  fsubs     f3, f1, f0
  lfs       f1, 0x8(r3)
  fmuls     f0, f4, f4
  fsubs     f1, f2, f1
  fmadds    f0, f3, f3, f0
  fmadds    f1, f1, f1, f0
  bl        -0x48F4
  lfs       f0, 0xC(r29)
  fcmpo     cr0, f1, f0
  cror      2, 0, 0x2
  bne-      .loc_0x90
  lfs       f0, 0x1FA8(r2)
  li        r3, 0x1
  stfs      f0, 0x0(r31)
  b         .loc_0x1D0

.loc_0x90:
  lfs       f2, 0x10(r30)
  lfs       f0, 0x4(r29)
  lfs       f1, 0xC(r30)
  fsubs     f4, f2, f0
  lfs       f0, 0x0(r29)
  lfs       f2, 0x14(r30)
  fsubs     f3, f1, f0
  lfs       f1, 0x8(r29)
  fmuls     f0, f4, f4
  fsubs     f1, f2, f1
  fmadds    f0, f3, f3, f0
  fmadds    f1, f1, f1, f0
  bl        -0x4948
  lfs       f0, 0xC(r29)
  fcmpo     cr0, f1, f0
  cror      2, 0, 0x2
  bne-      .loc_0xE4
  lfs       f0, 0x1FAC(r2)
  li        r3, 0x1
  stfs      f0, 0x0(r31)
  b         .loc_0x1D0

.loc_0xE4:
  lfs       f2, 0x10(r30)
  lfs       f0, 0x4(r30)
  lfs       f1, 0xC(r30)
  fsubs     f30, f2, f0
  lfs       f0, 0x0(r30)
  lfs       f2, 0x14(r30)
  fsubs     f31, f1, f0
  lfs       f1, 0x8(r30)
  fmuls     f0, f30, f30
  fsubs     f29, f2, f1
  fmadds    f0, f31, f31, f0
  fmadds    f1, f29, f29, f0
  bl        -0x499C
  lfs       f0, 0x1FA8(r2)
  fcmpo     cr0, f1, f0
  ble-      .loc_0x13C
  lfs       f0, 0x1FAC(r2)
  fdivs     f0, f0, f1
  fmuls     f31, f31, f0
  fmuls     f30, f30, f0
  fmuls     f29, f29, f0
  b         .loc_0x140

.loc_0x13C:
  fmr       f1, f0

.loc_0x140:
  lfs       f3, 0x4(r29)
  lfs       f0, 0x4(r30)
  lfs       f2, 0x0(r29)
  fsubs     f5, f3, f0
  lfs       f0, 0x0(r30)
  lfs       f3, 0x8(r29)
  fsubs     f4, f2, f0
  lfs       f0, 0x8(r30)
  fmuls     f2, f5, f30
  fsubs     f3, f3, f0
  lfs       f0, 0x1FA8(r2)
  fmadds    f2, f4, f31, f2
  fmadds    f2, f3, f29, f2
  stfs      f2, 0x0(r31)
  lfs       f2, 0x0(r31)
  fcmpo     cr0, f2, f0
  blt-      .loc_0x18C
  fcmpo     cr0, f2, f1
  ble-      .loc_0x194

.loc_0x18C:
  li        r3, 0
  b         .loc_0x1D0

.loc_0x194:
  fmuls     f1, f30, f2
  fmuls     f0, f31, f2
  fmuls     f2, f29, f2
  fsubs     f5, f5, f1
  fsubs     f1, f4, f0
  fsubs     f2, f3, f2
  fmuls     f0, f5, f5
  fmadds    f0, f1, f1, f0
  fmadds    f1, f2, f2, f0
  bl        -0x4A40
  lfs       f0, 0xC(r29)
  fcmpo     cr0, f1, f0
  cror      2, 0, 0x2
  mfcr      r0
  rlwinm    r3,r0,3,31,31

.loc_0x1D0:
  psq_l     f31,0x48(r1),0,0
  lfd       f31, 0x40(r1)
  psq_l     f30,0x38(r1),0,0
  lfd       f30, 0x30(r1)
  psq_l     f29,0x28(r1),0,0
  lfd       f29, 0x20(r1)
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  lwz       r0, 0x54(r1)
  lwz       r29, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x50
  blr
*/
}

/*
 * --INFO--
 * Address:	80416290
 * Size:	00028C
 */
void intersect__Q23Sys6SphereFRQ23Sys4EdgeRfR10Vector3<float>(void)
{
/*
.loc_0x0:
  stwu      r1, -0x60(r1)
  mflr      r0
  stw       r0, 0x64(r1)
  stfd      f31, 0x50(r1)
  psq_st    f31,0x58(r1),0,0
  stfd      f30, 0x40(r1)
  psq_st    f30,0x48(r1),0,0
  stfd      f29, 0x30(r1)
  psq_st    f29,0x38(r1),0,0
  stfd      f28, 0x20(r1)
  psq_st    f28,0x28(r1),0,0
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  stw       r29, 0x14(r1)
  stw       r28, 0x10(r1)
  mr        r28, r3
  mr        r29, r4
  lfs       f2, 0x4(r4)
  mr        r30, r5
  lfs       f0, 0x4(r3)
  mr        r31, r6
  lfs       f1, 0x0(r4)
  fsubs     f4, f2, f0
  lfs       f0, 0x0(r3)
  lfs       f2, 0x8(r4)
  fsubs     f3, f1, f0
  lfs       f1, 0x8(r3)
  fmuls     f0, f4, f4
  fsubs     f1, f2, f1
  fmadds    f0, f3, f3, f0
  fmadds    f1, f1, f1, f0
  bl        -0x4B08
  lfs       f0, 0xC(r28)
  fcmpo     cr0, f1, f0
  cror      2, 0, 0x2
  bne-      .loc_0xB8
  lfs       f0, 0x1FA8(r2)
  li        r3, 0x1
  stfs      f0, 0x0(r30)
  lfs       f0, 0x0(r29)
  stfs      f0, 0x0(r31)
  lfs       f0, 0x4(r29)
  stfs      f0, 0x4(r31)
  lfs       f0, 0x8(r29)
  stfs      f0, 0x8(r31)
  b         .loc_0x24C

.loc_0xB8:
  lfs       f2, 0x10(r29)
  lfs       f0, 0x4(r28)
  lfs       f1, 0xC(r29)
  fsubs     f4, f2, f0
  lfs       f0, 0x0(r28)
  lfs       f2, 0x14(r29)
  fsubs     f3, f1, f0
  lfs       f1, 0x8(r28)
  fmuls     f0, f4, f4
  fsubs     f1, f2, f1
  fmadds    f0, f3, f3, f0
  fmadds    f1, f1, f1, f0
  bl        -0x4B74
  lfs       f0, 0xC(r28)
  fcmpo     cr0, f1, f0
  cror      2, 0, 0x2
  bne-      .loc_0x124
  lfs       f0, 0x1FAC(r2)
  li        r3, 0x1
  stfs      f0, 0x0(r30)
  lfs       f0, 0xC(r29)
  stfs      f0, 0x0(r31)
  lfs       f0, 0x10(r29)
  stfs      f0, 0x4(r31)
  lfs       f0, 0x14(r29)
  stfs      f0, 0x8(r31)
  b         .loc_0x24C

.loc_0x124:
  lfs       f2, 0x10(r29)
  lfs       f0, 0x4(r29)
  lfs       f1, 0xC(r29)
  fsubs     f29, f2, f0
  lfs       f0, 0x0(r29)
  lfs       f2, 0x14(r29)
  fsubs     f30, f1, f0
  lfs       f1, 0x8(r29)
  fmuls     f0, f29, f29
  fsubs     f28, f2, f1
  fmadds    f0, f30, f30, f0
  fmadds    f1, f28, f28, f0
  bl        -0x4BE0
  lfs       f31, 0x1FA8(r2)
  fcmpo     cr0, f1, f31
  ble-      .loc_0x17C
  lfs       f0, 0x1FAC(r2)
  fmr       f31, f1
  fdivs     f0, f0, f1
  fmuls     f30, f30, f0
  fmuls     f29, f29, f0
  fmuls     f28, f28, f0

.loc_0x17C:
  lfs       f2, 0x4(r31)
  lfs       f0, 0x4(r29)
  lfs       f1, 0x0(r31)
  fsubs     f4, f2, f0
  lfs       f0, 0x0(r29)
  lfs       f2, 0x8(r31)
  fsubs     f3, f1, f0
  lfs       f0, 0x8(r29)
  fmuls     f1, f4, f29
  fsubs     f5, f2, f0
  lfs       f0, 0x1FA8(r2)
  fmadds    f1, f3, f30, f1
  fmadds    f1, f5, f28, f1
  stfs      f1, 0x0(r30)
  lfs       f2, 0x0(r30)
  fcmpo     cr0, f2, f0
  blt-      .loc_0x1C8
  fcmpo     cr0, f2, f31
  ble-      .loc_0x1D0

.loc_0x1C8:
  li        r3, 0
  b         .loc_0x24C

.loc_0x1D0:
  fmuls     f1, f29, f2
  fmuls     f0, f30, f2
  fmuls     f2, f28, f2
  fsubs     f4, f4, f1
  fsubs     f1, f3, f0
  fsubs     f2, f5, f2
  fmuls     f0, f4, f4
  fmadds    f0, f1, f1, f0
  fmadds    f1, f2, f2, f0
  bl        -0x4C80
  lfs       f0, 0xC(r28)
  fcmpo     cr0, f1, f0
  cror      2, 0, 0x2
  bne-      .loc_0x248
  lfs       f0, 0x0(r30)
  li        r3, 0x1
  lfs       f1, 0x0(r29)
  fmuls     f4, f0, f31
  lfs       f3, 0x4(r29)
  lfs       f5, 0x8(r29)
  fmuls     f0, f30, f4
  fmuls     f2, f29, f4
  fmuls     f4, f28, f4
  fadds     f0, f1, f0
  fadds     f1, f3, f2
  fadds     f2, f5, f4
  stfs      f0, 0x0(r31)
  stfs      f1, 0x4(r31)
  stfs      f2, 0x8(r31)
  b         .loc_0x24C

.loc_0x248:
  li        r3, 0

.loc_0x24C:
  psq_l     f31,0x58(r1),0,0
  lfd       f31, 0x50(r1)
  psq_l     f30,0x48(r1),0,0
  lfd       f30, 0x40(r1)
  psq_l     f29,0x38(r1),0,0
  lfd       f29, 0x30(r1)
  psq_l     f28,0x28(r1),0,0
  lfd       f28, 0x20(r1)
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  lwz       r29, 0x14(r1)
  lwz       r0, 0x64(r1)
  lwz       r28, 0x10(r1)
  mtlr      r0
  addi      r1, r1, 0x60
  blr
*/
}

/*
 * --INFO--
 * Address:	8041651C
 * Size:	0003D4
 */
void intersect__Q23Sys6SphereFRQ23Sys4EdgeRfR10Vector3<float>Rf(void)
{
/*
.loc_0x0:
  stwu      r1, -0x50(r1)
  mflr      r0
  stw       r0, 0x54(r1)
  stfd      f31, 0x40(r1)
  psq_st    f31,0x48(r1),0,0
  stfd      f30, 0x30(r1)
  psq_st    f30,0x38(r1),0,0
  stfd      f29, 0x20(r1)
  psq_st    f29,0x28(r1),0,0
  stmw      r27, 0xC(r1)
  lfs       f2, 0x10(r4)
  mr        r28, r4
  lfs       f0, 0x4(r4)
  mr        r27, r3
  lfs       f1, 0xC(r4)
  mr        r29, r5
  fsubs     f30, f2, f0
  lfs       f0, 0x0(r4)
  lfs       f2, 0x14(r4)
  mr        r30, r6
  fsubs     f31, f1, f0
  lfs       f1, 0x8(r4)
  fmuls     f0, f30, f30
  mr        r31, r7
  fsubs     f29, f2, f1
  fmadds    f0, f31, f31, f0
  fmadds    f1, f29, f29, f0
  bl        -0x4D84
  lfs       f0, 0x1FA8(r2)
  fcmpo     cr0, f1, f0
  ble-      .loc_0x94
  lfs       f0, 0x1FAC(r2)
  fdivs     f0, f0, f1
  fmuls     f31, f31, f0
  fmuls     f30, f30, f0
  fmuls     f29, f29, f0
  b         .loc_0x98

.loc_0x94:
  fmr       f1, f0

.loc_0x98:
  lfs       f3, 0x4(r27)
  lfs       f0, 0x4(r28)
  lfs       f2, 0x0(r27)
  fsubs     f5, f3, f0
  lfs       f0, 0x0(r28)
  lfs       f3, 0x8(r27)
  fsubs     f4, f2, f0
  lfs       f0, 0x8(r28)
  fmuls     f2, f5, f30
  fsubs     f3, f3, f0
  lfs       f0, 0x1FA8(r2)
  fmadds    f2, f4, f31, f2
  fmadds    f2, f3, f29, f2
  stfs      f2, 0x0(r29)
  lfs       f2, 0x0(r29)
  fcmpo     cr0, f2, f0
  blt-      .loc_0xE4
  fcmpo     cr0, f2, f1
  ble-      .loc_0x304

.loc_0xE4:
  lfs       f2, 0x4(r28)
  lfs       f0, 0x4(r27)
  lfs       f1, 0x0(r28)
  fsubs     f4, f2, f0
  lfs       f0, 0x0(r27)
  lfs       f2, 0x8(r28)
  fsubs     f3, f1, f0
  lfs       f1, 0x8(r27)
  fmuls     f0, f4, f4
  fsubs     f1, f2, f1
  fmadds    f0, f3, f3, f0
  fmadds    f1, f1, f1, f0
  bl        -0x4E2C
  lfs       f0, 0xC(r27)
  fcmpo     cr0, f1, f0
  cror      2, 0, 0x2
  bne-      .loc_0x1F0
  lfs       f0, 0x1FA8(r2)
  stfs      f0, 0x0(r29)
  lfs       f1, 0x0(r27)
  lfs       f0, 0x0(r28)
  lfs       f3, 0x4(r27)
  lfs       f2, 0x4(r28)
  fsubs     f0, f1, f0
  lfs       f4, 0x8(r27)
  lfs       f1, 0x8(r28)
  fsubs     f2, f3, f2
  stfs      f0, 0x0(r30)
  fsubs     f0, f4, f1
  stfs      f2, 0x4(r30)
  stfs      f0, 0x8(r30)
  lfs       f1, 0x0(r30)
  lfs       f0, 0x4(r30)
  lfs       f2, 0x8(r30)
  fmuls     f1, f1, f1
  fmuls     f0, f0, f0
  fmuls     f2, f2, f2
  fadds     f0, f1, f0
  fadds     f1, f2, f0
  bl        -0x4E98
  lfs       f0, 0x1FA8(r2)
  fcmpo     cr0, f1, f0
  ble-      .loc_0x1C0
  lfs       f2, 0x1FAC(r2)
  lfs       f0, 0x0(r30)
  fdivs     f2, f2, f1
  fmuls     f0, f0, f2
  stfs      f0, 0x0(r30)
  lfs       f0, 0x4(r30)
  fmuls     f0, f0, f2
  stfs      f0, 0x4(r30)
  lfs       f0, 0x8(r30)
  fmuls     f0, f0, f2
  stfs      f0, 0x8(r30)
  b         .loc_0x1C4

.loc_0x1C0:
  fmr       f1, f0

.loc_0x1C4:
  lfs       f2, 0xC(r27)
  lfs       f0, 0x1FA8(r2)
  fsubs     f2, f2, f1
  fcmpu     cr0, f0, f1
  stfs      f2, 0x0(r31)
  bne-      .loc_0x1E8
  stfs      f0, 0x0(r30)
  stfs      f0, 0x4(r30)
  stfs      f0, 0x8(r30)

.loc_0x1E8:
  li        r3, 0x1
  b         .loc_0x3A8

.loc_0x1F0:
  lfs       f2, 0x10(r28)
  lfs       f0, 0x4(r27)
  lfs       f1, 0xC(r28)
  fsubs     f4, f2, f0
  lfs       f0, 0x0(r27)
  lfs       f2, 0x14(r28)
  fsubs     f3, f1, f0
  lfs       f1, 0x8(r27)
  fmuls     f0, f4, f4
  fsubs     f1, f2, f1
  fmadds    f0, f3, f3, f0
  fmadds    f1, f1, f1, f0
  bl        -0x4F38
  lfs       f0, 0xC(r27)
  fcmpo     cr0, f1, f0
  cror      2, 0, 0x2
  bne-      .loc_0x2FC
  lfs       f0, 0x1FAC(r2)
  stfs      f0, 0x0(r29)
  lfs       f1, 0x0(r27)
  lfs       f0, 0xC(r28)
  lfs       f3, 0x4(r27)
  lfs       f2, 0x10(r28)
  fsubs     f0, f1, f0
  lfs       f4, 0x8(r27)
  lfs       f1, 0x14(r28)
  fsubs     f2, f3, f2
  stfs      f0, 0x0(r30)
  fsubs     f0, f4, f1
  stfs      f2, 0x4(r30)
  stfs      f0, 0x8(r30)
  lfs       f1, 0x0(r30)
  lfs       f0, 0x4(r30)
  lfs       f2, 0x8(r30)
  fmuls     f1, f1, f1
  fmuls     f0, f0, f0
  fmuls     f2, f2, f2
  fadds     f0, f1, f0
  fadds     f1, f2, f0
  bl        -0x4FA4
  lfs       f0, 0x1FA8(r2)
  fcmpo     cr0, f1, f0
  ble-      .loc_0x2CC
  lfs       f2, 0x1FAC(r2)
  lfs       f0, 0x0(r30)
  fdivs     f2, f2, f1
  fmuls     f0, f0, f2
  stfs      f0, 0x0(r30)
  lfs       f0, 0x4(r30)
  fmuls     f0, f0, f2
  stfs      f0, 0x4(r30)
  lfs       f0, 0x8(r30)
  fmuls     f0, f0, f2
  stfs      f0, 0x8(r30)
  b         .loc_0x2D0

.loc_0x2CC:
  fmr       f1, f0

.loc_0x2D0:
  lfs       f2, 0xC(r27)
  lfs       f0, 0x1FA8(r2)
  fsubs     f2, f2, f1
  fcmpu     cr0, f0, f1
  stfs      f2, 0x0(r31)
  bne-      .loc_0x2F4
  stfs      f0, 0x0(r30)
  stfs      f0, 0x4(r30)
  stfs      f0, 0x8(r30)

.loc_0x2F4:
  li        r3, 0x1
  b         .loc_0x3A8

.loc_0x2FC:
  li        r3, 0
  b         .loc_0x3A8

.loc_0x304:
  fmuls     f1, f30, f2
  fmuls     f0, f31, f2
  fmuls     f2, f29, f2
  fsubs     f30, f5, f1
  fsubs     f29, f4, f0
  fsubs     f31, f3, f2
  fmuls     f0, f30, f30
  fmadds    f0, f29, f29, f0
  fmadds    f1, f31, f31, f0
  bl        -0x5040
  lfs       f0, 0x1FA8(r2)
  fcmpo     cr0, f1, f0
  ble-      .loc_0x350
  lfs       f0, 0x1FAC(r2)
  fdivs     f0, f0, f1
  fmuls     f29, f29, f0
  fmuls     f30, f30, f0
  fmuls     f31, f31, f0
  b         .loc_0x354

.loc_0x350:
  fmr       f1, f0

.loc_0x354:
  lfs       f2, 0xC(r27)
  fcmpo     cr0, f1, f2
  bge-      .loc_0x3A4
  lfs       f0, 0x1FA8(r2)
  fcmpu     cr0, f0, f1
  bne-      .loc_0x388
  stfs      f0, 0x0(r30)
  li        r3, 0x1
  stfs      f0, 0x4(r30)
  stfs      f0, 0x8(r30)
  lfs       f0, 0xC(r27)
  stfs      f0, 0x0(r31)
  b         .loc_0x3A8

.loc_0x388:
  fsubs     f0, f2, f1
  li        r3, 0x1
  stfs      f0, 0x0(r31)
  stfs      f29, 0x0(r30)
  stfs      f30, 0x4(r30)
  stfs      f31, 0x8(r30)
  b         .loc_0x3A8

.loc_0x3A4:
  li        r3, 0

.loc_0x3A8:
  psq_l     f31,0x48(r1),0,0
  lfd       f31, 0x40(r1)
  psq_l     f30,0x38(r1),0,0
  lfd       f30, 0x30(r1)
  psq_l     f29,0x28(r1),0,0
  lfd       f29, 0x20(r1)
  lmw       r27, 0xC(r1)
  lwz       r0, 0x54(r1)
  mtlr      r0
  addi      r1, r1, 0x50
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000D8
 */
void intersectRay__Q23Sys6SphereFR10Vector3<float>R10Vector3<float>(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	804168F0
 * Size:	000068
 */
void Sys::Triangle::__ct(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lfs       f1, 0x1FA8(r2)
  li        r5, 0
  stw       r0, 0x14(r1)
  li        r6, 0x10
  lfs       f0, 0x1FAC(r2)
  li        r7, 0x3
  stw       r31, 0xC(r1)
  mr        r31, r3
  lis       r3, 0x8015
  stfs      f1, 0xC(r31)
  addi      r4, r3, 0x1C68
  addi      r3, r31, 0x1C
  stfs      f0, 0x10(r31)
  stfs      f1, 0x14(r31)
  stfs      f1, 0x18(r31)
  bl        -0x3550F8
  li        r0, 0
  mr        r3, r31
  stb       r0, 0x5C(r31)
  lwz       r31, 0xC(r1)
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00027C
 */
void findNearestPoint__Q23Sys8TriangleFRQ23Sys11VertexTableR10Vector3<float>R10Vector3<float>(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80416958
 * Size:	000168
 */
void Sys::Triangle::createSphere( (Sys::VertexTable &))
{
/*
.loc_0x0:
  stwu      r1, -0x60(r1)
  mflr      r0
  stw       r0, 0x64(r1)
  stfd      f31, 0x50(r1)
  psq_st    f31,0x58(r1),0,0
  stfd      f30, 0x40(r1)
  psq_st    f30,0x48(r1),0,0
  stfd      f29, 0x30(r1)
  psq_st    f29,0x38(r1),0,0
  stfd      f28, 0x20(r1)
  psq_st    f28,0x28(r1),0,0
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  stw       r29, 0x14(r1)
  stw       r28, 0x10(r1)
  mr        r28, r3
  mr        r29, r4
  lwz       r3, 0x4(r3)
  mr        r31, r28
  lwz       r0, 0x0(r28)
  li        r30, 0
  mulli     r3, r3, 0xC
  lwz       r5, 0x24(r4)
  lwz       r4, 0x8(r28)
  lfs       f4, 0x1FB4(r2)
  add       r3, r5, r3
  lfs       f31, 0x1FA8(r2)
  mulli     r0, r0, 0xC
  lfs       f5, 0x0(r3)
  lfs       f2, 0x4(r3)
  lfs       f0, 0x8(r3)
  add       r3, r5, r0
  mulli     r0, r4, 0xC
  lfs       f6, 0x0(r3)
  lfs       f3, 0x4(r3)
  lfs       f1, 0x8(r3)
  fadds     f6, f6, f5
  add       r3, r5, r0
  lfs       f5, 0x0(r3)
  fadds     f3, f3, f2
  lfs       f2, 0x4(r3)
  fadds     f1, f1, f0
  lfs       f0, 0x8(r3)
  fadds     f5, f6, f5
  fadds     f2, f3, f2
  fadds     f0, f1, f0
  fmuls     f30, f5, f4
  fmuls     f29, f2, f4
  fmuls     f28, f0, f4

.loc_0xC4:
  lwz       r0, 0x0(r31)
  lwz       r3, 0x24(r29)
  mulli     r0, r0, 0xC
  add       r3, r3, r0
  lfs       f1, 0x4(r3)
  lfs       f0, 0x0(r3)
  fsubs     f3, f1, f29
  lfs       f1, 0x8(r3)
  fsubs     f2, f0, f30
  fsubs     f1, f1, f28
  fmuls     f0, f3, f3
  fmadds    f0, f2, f2, f0
  fmadds    f1, f1, f1, f0
  bl        -0x524C
  fcmpo     cr0, f1, f31
  ble-      .loc_0x108
  fmr       f31, f1

.loc_0x108:
  addi      r30, r30, 0x1
  addi      r31, r31, 0x4
  cmpwi     r30, 0x3
  blt+      .loc_0xC4
  stfs      f31, 0x58(r28)
  stfs      f30, 0x4C(r28)
  stfs      f29, 0x50(r28)
  stfs      f28, 0x54(r28)
  psq_l     f31,0x58(r1),0,0
  lfd       f31, 0x50(r1)
  psq_l     f30,0x48(r1),0,0
  lfd       f30, 0x40(r1)
  psq_l     f29,0x38(r1),0,0
  lfd       f29, 0x30(r1)
  psq_l     f28,0x28(r1),0,0
  lfd       f28, 0x20(r1)
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  lwz       r29, 0x14(r1)
  lwz       r0, 0x64(r1)
  lwz       r28, 0x10(r1)
  mtlr      r0
  addi      r1, r1, 0x60
  blr
*/
}

/*
 * --INFO--
 * Address:	80416AC0
 * Size:	000084
 */
void Sys::Triangle::fastIntersect( (Sys::Sphere &))
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
  lfs       f1, 0x4(r4)
  lfs       f0, 0x50(r3)
  lfs       f3, 0x0(r4)
  fsubs     f4, f1, f0
  lfs       f0, 0x4C(r3)
  lfs       f2, 0x8(r4)
  fsubs     f3, f3, f0
  lfs       f1, 0x54(r3)
  fmuls     f0, f4, f4
  fsubs     f1, f2, f1
  fmadds    f0, f3, f3, f0
  fmadds    f1, f1, f1, f0
  bl        -0x5308
  lfs       f2, 0xC(r31)
  lfs       f0, 0x58(r30)
  fadds     f0, f2, f0
  fcmpo     cr0, f1, f0
  cror      2, 0, 0x2
  mfcr      r0
  rlwinm    r3,r0,3,31,31
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
 * Address:	........
 * Size:	000088
 */
void Sys::Triangle::write( (Stream &))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000088
 */
void Sys::Triangle::read( (Stream &))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000038
 */
void Sys::Triangle::constructFromJ3D( (Sys::VertexTable &, __J3DUTriangle &))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000004
 */
void Sys::Triangle::draw( (Graphics &, Sys::VertexTable &, bool))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80416B44
 * Size:	000104
 */
void Sys::Triangle::calcDist( (Plane &, Sys::VertexTable &))
{
/*
.loc_0x0:
  lwz       r0, 0x0(r3)
  lwz       r6, 0x4(r3)
  mulli     r7, r0, 0xC
  lwz       r8, 0x24(r5)
  lwz       r0, 0x8(r3)
  lfs       f6, 0x4(r4)
  add       r5, r8, r7
  lfs       f7, 0x0(r4)
  mulli     r3, r6, 0xC
  lfs       f0, 0x4(r5)
  lfs       f4, 0x0(r5)
  fmuls     f3, f0, f6
  lfs       f5, 0x8(r5)
  add       r3, r8, r3
  mulli     r0, r0, 0xC
  lfs       f0, 0x4(r3)
  lfs       f2, 0x0(r3)
  fmuls     f1, f0, f6
  lfs       f8, 0x8(r4)
  add       r5, r8, r0
  lfs       f0, 0x4(r5)
  fmadds    f4, f4, f7, f3
  fmadds    f2, f2, f7, f1
  lfs       f3, 0x8(r3)
  fmuls     f0, f0, f6
  lfs       f1, 0x0(r5)
  fmadds    f4, f5, f8, f4
  lfs       f5, 0xC(r4)
  fmadds    f3, f3, f8, f2
  lfs       f2, 0x8(r5)
  fmadds    f0, f1, f7, f0
  fsubs     f4, f4, f5
  fsubs     f3, f3, f5
  fmadds    f0, f2, f8, f0
  fcmpo     cr0, f4, f3
  fsubs     f0, f0, f5
  bge-      .loc_0xAC
  fcmpo     cr0, f4, f0
  bge-      .loc_0xA4
  fmr       f1, f4
  b         .loc_0xC0

.loc_0xA4:
  fmr       f1, f0
  b         .loc_0xC0

.loc_0xAC:
  fcmpo     cr0, f3, f0
  bge-      .loc_0xBC
  fmr       f1, f3
  b         .loc_0xC0

.loc_0xBC:
  fmr       f1, f0

.loc_0xC0:
  fcmpo     cr0, f4, f3
  bge-      .loc_0xDC
  fcmpo     cr0, f3, f0
  bge-      .loc_0xD4
  b         .loc_0xEC

.loc_0xD4:
  fmr       f0, f3
  b         .loc_0xEC

.loc_0xDC:
  fcmpo     cr0, f4, f0
  bge-      .loc_0xE8
  b         .loc_0xEC

.loc_0xE8:
  fmr       f0, f4

.loc_0xEC:
  fmuls     f2, f1, f0
  lfs       f0, 0x1FA8(r2)
  fcmpo     cr0, f2, f0
  bgtlr-    
  fmr       f1, f0
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0001EC
 */
void Sys::Triangle::intersect( (Sys::VertexTable &, BoundBox2d &))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0002F0
 */
void intersect__Q23Sys8TriangleFRQ23Sys4EdgeR10Vector3<float>(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80416C48
 * Size:	000334
 */
void intersect__Q23Sys8TriangleFRQ23Sys4EdgefR10Vector3<float>(void)
{
/*
.loc_0x0:
  stwu      r1, -0x60(r1)
  mflr      r0
  stw       r0, 0x64(r1)
  stfd      f31, 0x50(r1)
  psq_st    f31,0x58(r1),0,0
  stfd      f30, 0x40(r1)
  psq_st    f30,0x48(r1),0,0
  stfd      f29, 0x30(r1)
  psq_st    f29,0x38(r1),0,0
  stfd      f28, 0x20(r1)
  psq_st    f28,0x28(r1),0,0
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  stw       r29, 0x14(r1)
  mr        r30, r4
  fmr       f28, f1
  lfs       f2, 0x10(r4)
  mr        r29, r3
  lfs       f0, 0x4(r4)
  mr        r31, r5
  lfs       f1, 0xC(r4)
  fsubs     f30, f2, f0
  lfs       f0, 0x0(r4)
  lfs       f2, 0x14(r4)
  fsubs     f31, f1, f0
  lfs       f1, 0x8(r4)
  fmuls     f0, f30, f30
  fsubs     f29, f2, f1
  fmadds    f0, f31, f31, f0
  fmadds    f1, f29, f29, f0
  bl        -0x54BC
  lfs       f3, 0x10(r29)
  lfs       f0, 0x1FA8(r2)
  fmuls     f2, f3, f30
  lfs       f6, 0xC(r29)
  lfs       f7, 0x14(r29)
  fcmpu     cr0, f0, f1
  fmadds    f0, f6, f31, f2
  fmadds    f4, f7, f29, f0
  bne-      .loc_0xA8
  li        r3, 0
  b         .loc_0x2F8

.loc_0xA8:
  fdivs     f2, f28, f1
  lfs       f0, 0x1FC0(r2)
  fabs      f1, f4
  frsp      f1, f1
  fcmpo     cr0, f1, f0
  bge-      .loc_0x1EC
  lfs       f1, 0x4(r30)
  lfs       f4, 0x0(r30)
  fmuls     f3, f1, f3
  lfs       f5, 0x8(r30)
  lfs       f1, 0x18(r29)
  fmadds    f3, f4, f6, f3
  fmadds    f3, f5, f7, f3
  fsubs     f1, f3, f1
  fabs      f1, f1
  frsp      f1, f1
  fcmpo     cr0, f1, f28
  cror      2, 0, 0x2
  bne-      .loc_0x1DC
  lfs       f3, 0x1FAC(r2)
  fneg      f1, f2
  li        r0, 0x3
  mr        r3, r29
  fadds     f2, f3, f2
  mtctr     r0

.loc_0x10C:
  lfs       f4, 0x20(r3)
  lfs       f5, 0x1C(r3)
  fmuls     f3, f4, f30
  lfs       f6, 0x24(r3)
  fmadds    f3, f5, f31, f3
  fmadds    f7, f6, f29, f3
  fabs      f3, f7
  frsp      f3, f3
  fcmpo     cr0, f3, f0
  ble-      .loc_0x1D0
  lfs       f9, 0x4(r30)
  lfs       f10, 0x0(r30)
  fmuls     f3, f4, f9
  lfs       f8, 0x8(r30)
  lfs       f4, 0x28(r3)
  fmadds    f3, f5, f10, f3
  fmadds    f3, f6, f8, f3
  fsubs     f3, f4, f3
  fdivs     f3, f3, f7
  fcmpo     cr0, f3, f1
  ble-      .loc_0x1D0
  fcmpo     cr0, f3, f2
  bge-      .loc_0x1D0
  fmuls     f5, f31, f3
  fmuls     f4, f30, f3
  fmuls     f3, f29, f3
  fadds     f5, f10, f5
  fadds     f4, f9, f4
  fadds     f3, f8, f3
  stfs      f5, 0x0(r31)
  stfs      f4, 0x4(r31)
  stfs      f3, 0x8(r31)
  lfs       f4, 0x4(r31)
  lfs       f3, 0x10(r29)
  lfs       f5, 0x0(r31)
  fmuls     f3, f4, f3
  lfs       f4, 0xC(r29)
  lfs       f7, 0x8(r31)
  lfs       f6, 0x14(r29)
  fmadds    f4, f5, f4, f3
  lfs       f3, 0x18(r29)
  fmadds    f4, f7, f6, f4
  fsubs     f3, f4, f3
  fabs      f3, f3
  frsp      f3, f3
  fcmpo     cr0, f3, f28
  bge-      .loc_0x1D0
  li        r3, 0x1
  b         .loc_0x2F8

.loc_0x1D0:
  addi      r3, r3, 0x10
  bdnz+     .loc_0x10C
  b         .loc_0x1E4

.loc_0x1DC:
  li        r3, 0
  b         .loc_0x2F8

.loc_0x1E4:
  li        r3, 0
  b         .loc_0x2F8

.loc_0x1EC:
  lfs       f8, 0x4(r30)
  fneg      f0, f2
  lfs       f9, 0x0(r30)
  fmuls     f1, f3, f8
  lfs       f5, 0x8(r30)
  lfs       f3, 0x18(r29)
  fmadds    f1, f6, f9, f1
  fmadds    f1, f7, f5, f1
  fsubs     f1, f3, f1
  fdivs     f3, f1, f4
  fcmpo     cr0, f3, f0
  blt-      .loc_0x22C
  lfs       f0, 0x1FAC(r2)
  fadds     f0, f0, f2
  fcmpo     cr0, f3, f0
  ble-      .loc_0x234

.loc_0x22C:
  li        r3, 0
  b         .loc_0x2F8

.loc_0x234:
  fmuls     f2, f31, f3
  fmuls     f1, f30, f3
  fmuls     f0, f29, f3
  fadds     f2, f9, f2
  fadds     f1, f8, f1
  fadds     f0, f5, f0
  stfs      f2, 0x0(r31)
  stfs      f1, 0x4(r31)
  stfs      f0, 0x8(r31)
  lfs       f2, 0x4(r31)
  lfs       f0, 0x20(r29)
  lfs       f4, 0x0(r31)
  fmuls     f1, f2, f0
  lfs       f3, 0x1C(r29)
  lfs       f6, 0x8(r31)
  lfs       f5, 0x24(r29)
  fmadds    f1, f4, f3, f1
  lfs       f0, 0x28(r29)
  fmadds    f1, f6, f5, f1
  fsubs     f0, f1, f0
  fcmpo     cr0, f0, f28
  ble-      .loc_0x294
  li        r3, 0
  b         .loc_0x2F8

.loc_0x294:
  lfs       f0, 0x30(r29)
  lfs       f3, 0x2C(r29)
  fmuls     f1, f2, f0
  lfs       f5, 0x34(r29)
  lfs       f0, 0x38(r29)
  fmadds    f1, f4, f3, f1
  fmadds    f1, f6, f5, f1
  fsubs     f0, f1, f0
  fcmpo     cr0, f0, f28
  ble-      .loc_0x2C4
  li        r3, 0
  b         .loc_0x2F8

.loc_0x2C4:
  lfs       f0, 0x40(r29)
  lfs       f3, 0x3C(r29)
  fmuls     f1, f2, f0
  lfs       f5, 0x44(r29)
  lfs       f0, 0x48(r29)
  fmadds    f1, f4, f3, f1
  fmadds    f1, f6, f5, f1
  fsubs     f0, f1, f0
  fcmpo     cr0, f0, f28
  ble-      .loc_0x2F4
  li        r3, 0
  b         .loc_0x2F8

.loc_0x2F4:
  li        r3, 0x1

.loc_0x2F8:
  psq_l     f31,0x58(r1),0,0
  lfd       f31, 0x50(r1)
  psq_l     f30,0x48(r1),0,0
  lfd       f30, 0x40(r1)
  psq_l     f29,0x38(r1),0,0
  lfd       f29, 0x30(r1)
  psq_l     f28,0x28(r1),0,0
  lfd       f28, 0x20(r1)
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  lwz       r0, 0x64(r1)
  lwz       r29, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x60
  blr
*/
}

/*
 * --INFO--
 * Address:	80416F7C
 * Size:	000370
 */
void intersect__Q23Sys8TriangleFRQ23Sys4EdgefR10Vector3<float>Rf(void)
{
/*
.loc_0x0:
  stwu      r1, -0x60(r1)
  mflr      r0
  stw       r0, 0x64(r1)
  stfd      f31, 0x50(r1)
  psq_st    f31,0x58(r1),0,0
  stfd      f30, 0x40(r1)
  psq_st    f30,0x48(r1),0,0
  stfd      f29, 0x30(r1)
  psq_st    f29,0x38(r1),0,0
  stfd      f28, 0x20(r1)
  psq_st    f28,0x28(r1),0,0
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  stw       r29, 0x14(r1)
  stw       r28, 0x10(r1)
  mr        r29, r4
  fmr       f28, f1
  lfs       f2, 0x10(r4)
  mr        r28, r3
  lfs       f0, 0x4(r4)
  mr        r30, r5
  lfs       f1, 0xC(r4)
  fsubs     f30, f2, f0
  lfs       f0, 0x0(r4)
  lfs       f2, 0x14(r4)
  mr        r31, r6
  fsubs     f31, f1, f0
  lfs       f1, 0x8(r4)
  fmuls     f0, f30, f30
  fsubs     f29, f2, f1
  fmadds    f0, f31, f31, f0
  fmadds    f1, f29, f29, f0
  bl        -0x57F8
  lfs       f3, 0x10(r28)
  lfs       f0, 0x1FA8(r2)
  fmuls     f2, f3, f30
  lfs       f6, 0xC(r28)
  lfs       f7, 0x14(r28)
  fcmpu     cr0, f0, f1
  fmadds    f0, f6, f31, f2
  fmadds    f4, f7, f29, f0
  bne-      .loc_0xB0
  li        r3, 0
  b         .loc_0x330

.loc_0xB0:
  fdivs     f2, f28, f1
  lfs       f0, 0x1FC0(r2)
  fabs      f1, f4
  frsp      f1, f1
  fcmpo     cr0, f1, f0
  bge-      .loc_0x1FC
  lfs       f1, 0x4(r29)
  lfs       f4, 0x0(r29)
  fmuls     f3, f1, f3
  lfs       f5, 0x8(r29)
  lfs       f1, 0x18(r28)
  fmadds    f3, f4, f6, f3
  fmadds    f3, f5, f7, f3
  fsubs     f1, f3, f1
  fabs      f1, f1
  frsp      f1, f1
  fcmpo     cr0, f1, f28
  cror      2, 0, 0x2
  bne-      .loc_0x1EC
  lfs       f3, 0x1FAC(r2)
  fneg      f1, f2
  li        r0, 0x3
  mr        r3, r28
  fadds     f2, f3, f2
  mtctr     r0

.loc_0x114:
  lfs       f4, 0x20(r3)
  lfs       f5, 0x1C(r3)
  fmuls     f3, f4, f30
  lfs       f6, 0x24(r3)
  fmadds    f3, f5, f31, f3
  fmadds    f7, f6, f29, f3
  fabs      f3, f7
  frsp      f3, f3
  fcmpo     cr0, f3, f0
  ble-      .loc_0x1E0
  lfs       f9, 0x4(r29)
  lfs       f10, 0x0(r29)
  fmuls     f3, f4, f9
  lfs       f8, 0x8(r29)
  lfs       f4, 0x28(r3)
  fmadds    f3, f5, f10, f3
  fmadds    f3, f6, f8, f3
  fsubs     f3, f4, f3
  fdivs     f3, f3, f7
  fcmpo     cr0, f3, f1
  ble-      .loc_0x1E0
  fcmpo     cr0, f3, f2
  bge-      .loc_0x1E0
  fmuls     f5, f31, f3
  fmuls     f4, f30, f3
  fmuls     f3, f29, f3
  fadds     f5, f10, f5
  fadds     f4, f9, f4
  fadds     f3, f8, f3
  stfs      f5, 0x0(r30)
  stfs      f4, 0x4(r30)
  stfs      f3, 0x8(r30)
  lfs       f4, 0x4(r30)
  lfs       f3, 0x10(r28)
  lfs       f5, 0x0(r30)
  fmuls     f3, f4, f3
  lfs       f4, 0xC(r28)
  lfs       f7, 0x8(r30)
  lfs       f6, 0x14(r28)
  fmadds    f4, f5, f4, f3
  lfs       f3, 0x18(r28)
  fmadds    f4, f7, f6, f4
  fsubs     f4, f4, f3
  fabs      f3, f4
  frsp      f3, f3
  fcmpo     cr0, f3, f28
  bge-      .loc_0x1E0
  fsubs     f0, f28, f4
  li        r3, 0x1
  stfs      f0, 0x0(r31)
  b         .loc_0x330

.loc_0x1E0:
  addi      r3, r3, 0x10
  bdnz+     .loc_0x114
  b         .loc_0x1F4

.loc_0x1EC:
  li        r3, 0
  b         .loc_0x330

.loc_0x1F4:
  li        r3, 0
  b         .loc_0x330

.loc_0x1FC:
  lfs       f8, 0x4(r29)
  fneg      f0, f2
  lfs       f9, 0x0(r29)
  fmuls     f1, f3, f8
  lfs       f5, 0x8(r29)
  lfs       f3, 0x18(r28)
  fmadds    f1, f6, f9, f1
  fmadds    f1, f7, f5, f1
  fsubs     f1, f3, f1
  fdivs     f3, f1, f4
  fcmpo     cr0, f3, f0
  blt-      .loc_0x23C
  lfs       f0, 0x1FAC(r2)
  fadds     f0, f0, f2
  fcmpo     cr0, f3, f0
  ble-      .loc_0x244

.loc_0x23C:
  li        r3, 0
  b         .loc_0x330

.loc_0x244:
  fmuls     f2, f31, f3
  fmuls     f1, f30, f3
  fmuls     f0, f29, f3
  fadds     f2, f9, f2
  fadds     f1, f8, f1
  fadds     f0, f5, f0
  stfs      f2, 0x0(r30)
  stfs      f1, 0x4(r30)
  stfs      f0, 0x8(r30)
  lfs       f3, 0x4(r30)
  lfs       f0, 0x20(r28)
  lfs       f4, 0x0(r30)
  fmuls     f1, f3, f0
  lfs       f2, 0x1C(r28)
  lfs       f6, 0x8(r30)
  lfs       f5, 0x24(r28)
  fmadds    f1, f4, f2, f1
  lfs       f0, 0x28(r28)
  fmadds    f1, f6, f5, f1
  fsubs     f0, f1, f0
  fcmpo     cr0, f0, f28
  ble-      .loc_0x2A4
  li        r3, 0
  b         .loc_0x330

.loc_0x2A4:
  lfs       f0, 0x30(r28)
  lfs       f2, 0x2C(r28)
  fmuls     f1, f3, f0
  lfs       f5, 0x34(r28)
  lfs       f0, 0x38(r28)
  fmadds    f1, f4, f2, f1
  fmadds    f1, f6, f5, f1
  fsubs     f0, f1, f0
  fcmpo     cr0, f0, f28
  ble-      .loc_0x2D4
  li        r3, 0
  b         .loc_0x330

.loc_0x2D4:
  lfs       f0, 0x40(r28)
  lfs       f2, 0x3C(r28)
  fmuls     f1, f3, f0
  lfs       f5, 0x44(r28)
  lfs       f0, 0x48(r28)
  fmadds    f1, f4, f2, f1
  fmadds    f1, f6, f5, f1
  fsubs     f0, f1, f0
  fcmpo     cr0, f0, f28
  ble-      .loc_0x304
  li        r3, 0
  b         .loc_0x330

.loc_0x304:
  lfs       f0, 0x10(r28)
  li        r3, 0x1
  lfs       f2, 0xC(r28)
  fmuls     f1, f3, f0
  lfs       f3, 0x14(r28)
  lfs       f0, 0x18(r28)
  fmadds    f1, f4, f2, f1
  fmadds    f1, f6, f3, f1
  fsubs     f0, f1, f0
  fsubs     f0, f28, f0
  stfs      f0, 0x0(r31)

.loc_0x330:
  psq_l     f31,0x58(r1),0,0
  lfd       f31, 0x50(r1)
  psq_l     f30,0x48(r1),0,0
  lfd       f30, 0x40(r1)
  psq_l     f29,0x38(r1),0,0
  lfd       f29, 0x30(r1)
  psq_l     f28,0x28(r1),0,0
  lfd       f28, 0x20(r1)
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  lwz       r29, 0x14(r1)
  lwz       r0, 0x64(r1)
  lwz       r28, 0x10(r1)
  mtlr      r0
  addi      r1, r1, 0x60
  blr
*/
}

/*
 * --INFO--
 * Address:	804172EC
 * Size:	0002AC
 */
void Sys::Triangle::intersect( (Sys::VertexTable &, Sys::Sphere &))
{
/*
.loc_0x0:
  stwu      r1, -0x40(r1)
  mflr      r0
  stw       r0, 0x44(r1)
  stw       r31, 0x3C(r1)
  mr        r31, r5
  stw       r30, 0x38(r1)
  mr        r30, r4
  stw       r29, 0x34(r1)
  mr        r29, r3
  lfs       f5, 0x4(r5)
  lfs       f0, 0x10(r3)
  lfs       f6, 0x0(r5)
  fmuls     f0, f5, f0
  lfs       f1, 0xC(r3)
  lfs       f7, 0x8(r5)
  lfs       f2, 0x14(r3)
  fmadds    f1, f6, f1, f0
  lfs       f0, 0x18(r3)
  lfs       f4, 0xC(r5)
  fmadds    f1, f7, f2, f1
  fsubs     f0, f1, f0
  fabs      f0, f0
  frsp      f0, f0
  fcmpo     cr0, f0, f4
  ble-      .loc_0x6C
  li        r3, 0
  b         .loc_0x290

.loc_0x6C:
  lfs       f0, 0x20(r29)
  lfs       f2, 0x1C(r29)
  fmuls     f1, f5, f0
  lfs       f3, 0x24(r29)
  lfs       f0, 0x28(r29)
  fmadds    f1, f6, f2, f1
  fmadds    f1, f7, f3, f1
  fsubs     f8, f1, f0
  fcmpo     cr0, f8, f4
  ble-      .loc_0x9C
  li        r3, 0
  b         .loc_0x290

.loc_0x9C:
  lfs       f0, 0x30(r29)
  lfs       f2, 0x2C(r29)
  fmuls     f1, f5, f0
  lfs       f3, 0x34(r29)
  lfs       f0, 0x38(r29)
  stfs      f8, 0xC(r1)
  fmadds    f1, f6, f2, f1
  fmadds    f1, f7, f3, f1
  fsubs     f8, f1, f0
  fcmpo     cr0, f8, f4
  ble-      .loc_0xD0
  li        r3, 0
  b         .loc_0x290

.loc_0xD0:
  lfs       f0, 0x40(r29)
  lfs       f2, 0x3C(r29)
  fmuls     f1, f5, f0
  lfs       f3, 0x44(r29)
  lfs       f0, 0x48(r29)
  stfs      f8, 0x10(r1)
  fmadds    f1, f6, f2, f1
  fmadds    f1, f7, f3, f1
  fsubs     f8, f1, f0
  fcmpo     cr0, f8, f4
  ble-      .loc_0x104
  li        r3, 0
  b         .loc_0x290

.loc_0x104:
  lwz       r0, 0x0(r29)
  mr        r3, r31
  lwz       r6, 0x4(r29)
  addi      r4, r1, 0x18
  mulli     r0, r0, 0xC
  lwz       r8, 0x24(r30)
  stfs      f8, 0x14(r1)
  addi      r5, r1, 0x8
  add       r7, r8, r0
  lfs       f0, 0x0(r7)
  mulli     r0, r6, 0xC
  stfs      f0, 0x18(r1)
  add       r6, r8, r0
  lfs       f0, 0x4(r7)
  stfs      f0, 0x1C(r1)
  lfs       f0, 0x8(r7)
  stfs      f0, 0x20(r1)
  lfs       f0, 0x0(r6)
  stfs      f0, 0x24(r1)
  lfs       f0, 0x4(r6)
  stfs      f0, 0x28(r1)
  lfs       f0, 0x8(r6)
  stfs      f0, 0x2C(r1)
  bl        -0x13C0
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x174
  li        r3, 0x1
  b         .loc_0x290

.loc_0x174:
  lwz       r0, 0x4(r29)
  mr        r3, r31
  lwz       r6, 0x8(r29)
  addi      r4, r1, 0x18
  mulli     r0, r0, 0xC
  lwz       r8, 0x24(r30)
  addi      r5, r1, 0x8
  add       r7, r8, r0
  lfs       f0, 0x0(r7)
  mulli     r0, r6, 0xC
  stfs      f0, 0x18(r1)
  add       r6, r8, r0
  lfs       f0, 0x4(r7)
  stfs      f0, 0x1C(r1)
  lfs       f0, 0x8(r7)
  stfs      f0, 0x20(r1)
  lfs       f0, 0x0(r6)
  stfs      f0, 0x24(r1)
  lfs       f0, 0x4(r6)
  stfs      f0, 0x28(r1)
  lfs       f0, 0x8(r6)
  stfs      f0, 0x2C(r1)
  bl        -0x142C
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x1E0
  li        r3, 0x1
  b         .loc_0x290

.loc_0x1E0:
  lwz       r0, 0x8(r29)
  mr        r3, r31
  lwz       r6, 0x0(r29)
  addi      r4, r1, 0x18
  mulli     r0, r0, 0xC
  lwz       r8, 0x24(r30)
  addi      r5, r1, 0x8
  add       r7, r8, r0
  lfs       f0, 0x0(r7)
  mulli     r0, r6, 0xC
  stfs      f0, 0x18(r1)
  add       r6, r8, r0
  lfs       f0, 0x4(r7)
  stfs      f0, 0x1C(r1)
  lfs       f0, 0x8(r7)
  stfs      f0, 0x20(r1)
  lfs       f0, 0x0(r6)
  stfs      f0, 0x24(r1)
  lfs       f0, 0x4(r6)
  stfs      f0, 0x28(r1)
  lfs       f0, 0x8(r6)
  stfs      f0, 0x2C(r1)
  bl        -0x1498
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x24C
  li        r3, 0x1
  b         .loc_0x290

.loc_0x24C:
  lfs       f0, 0x1FA8(r2)
  lfs       f1, 0xC(r1)
  fcmpo     cr0, f1, f0
  ble-      .loc_0x264
  li        r3, 0
  b         .loc_0x290

.loc_0x264:
  lfs       f1, 0x10(r1)
  fcmpo     cr0, f1, f0
  ble-      .loc_0x278
  li        r3, 0
  b         .loc_0x290

.loc_0x278:
  lfs       f1, 0x14(r1)
  fcmpo     cr0, f1, f0
  ble-      .loc_0x28C
  li        r3, 0
  b         .loc_0x290

.loc_0x28C:
  li        r3, 0x1

.loc_0x290:
  lwz       r0, 0x44(r1)
  lwz       r31, 0x3C(r1)
  lwz       r30, 0x38(r1)
  lwz       r29, 0x34(r1)
  mtlr      r0
  addi      r1, r1, 0x40
  blr
*/
}

/*
 * --INFO--
 * Address:	80417598
 * Size:	0002F8
 */
void intersect__Q23Sys8TriangleFRQ23Sys11VertexTableRQ23Sys6SphereR10Vector3<float>(void)
{
/*
.loc_0x0:
  stwu      r1, -0x40(r1)
  mflr      r0
  stw       r0, 0x44(r1)
  stw       r31, 0x3C(r1)
  mr        r31, r6
  stw       r30, 0x38(r1)
  mr        r30, r5
  stw       r29, 0x34(r1)
  mr        r29, r4
  stw       r28, 0x30(r1)
  mr        r28, r3
  lfs       f8, 0x4(r5)
  lfs       f4, 0x10(r3)
  lfs       f10, 0x0(r5)
  fmuls     f3, f8, f4
  lfs       f9, 0xC(r3)
  lfs       f12, 0x8(r5)
  lfs       f11, 0x14(r3)
  fmadds    f2, f10, f9, f3
  lfs       f1, 0x18(r3)
  lfs       f0, 0xC(r5)
  fmadds    f2, f12, f11, f2
  fsubs     f1, f2, f1
  fabs      f1, f1
  frsp      f1, f1
  fcmpo     cr0, f1, f0
  ble-      .loc_0x74
  li        r3, 0
  b         .loc_0x2D8

.loc_0x74:
  fmadds    f1, f9, f10, f3
  lwz       r0, 0x0(r28)
  lwz       r4, 0x4(r28)
  mr        r3, r30
  lfs       f0, 0x18(r28)
  mulli     r0, r0, 0xC
  fmadds    f1, f11, f12, f1
  lwz       r5, 0x24(r29)
  mulli     r4, r4, 0xC
  lfs       f5, 0x20(r28)
  add       r8, r5, r0
  lfs       f6, 0x1C(r28)
  fsubs     f2, f1, f0
  lfs       f7, 0x24(r28)
  lfs       f1, 0x28(r28)
  add       r7, r5, r4
  lfs       f0, 0x0(r8)
  addi      r4, r1, 0x18
  fmuls     f3, f4, f2
  addi      r5, r1, 0x8
  fmuls     f4, f9, f2
  fmuls     f2, f11, f2
  fsubs     f9, f8, f3
  fsubs     f8, f10, f4
  fsubs     f10, f12, f2
  fmuls     f4, f9, f5
  lfs       f5, 0x30(r28)
  fmadds    f3, f8, f6, f4
  lfs       f6, 0x2C(r28)
  fmuls     f4, f9, f5
  lfs       f5, 0x40(r28)
  fmadds    f2, f10, f7, f3
  lfs       f7, 0x34(r28)
  fmadds    f3, f8, f6, f4
  lfs       f6, 0x3C(r28)
  fmuls     f4, f9, f5
  fsubs     f5, f2, f1
  fmadds    f2, f10, f7, f3
  lfs       f1, 0x38(r28)
  lfs       f7, 0x44(r28)
  fmadds    f3, f8, f6, f4
  stfs      f5, 0xC(r1)
  fsubs     f5, f2, f1
  lfs       f1, 0x48(r28)
  fmadds    f2, f10, f7, f3
  stfs      f0, 0x18(r1)
  lfs       f0, 0x4(r8)
  stfs      f5, 0x10(r1)
  fsubs     f5, f2, f1
  stfs      f0, 0x1C(r1)
  lfs       f0, 0x8(r8)
  stfs      f5, 0x14(r1)
  stfs      f0, 0x20(r1)
  lfs       f0, 0x0(r7)
  stfs      f0, 0x24(r1)
  lfs       f0, 0x4(r7)
  stfs      f0, 0x28(r1)
  lfs       f0, 0x8(r7)
  stfs      f0, 0x2C(r1)
  bl        -0x1468
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x174
  li        r3, 0x1
  b         .loc_0x2D8

.loc_0x174:
  lwz       r0, 0x4(r28)
  mr        r3, r30
  lwz       r7, 0x8(r28)
  mr        r6, r31
  mulli     r0, r0, 0xC
  lwz       r9, 0x24(r29)
  addi      r4, r1, 0x18
  addi      r5, r1, 0x8
  add       r8, r9, r0
  lfs       f0, 0x0(r8)
  mulli     r0, r7, 0xC
  stfs      f0, 0x18(r1)
  add       r7, r9, r0
  lfs       f0, 0x4(r8)
  stfs      f0, 0x1C(r1)
  lfs       f0, 0x8(r8)
  stfs      f0, 0x20(r1)
  lfs       f0, 0x0(r7)
  stfs      f0, 0x24(r1)
  lfs       f0, 0x4(r7)
  stfs      f0, 0x28(r1)
  lfs       f0, 0x8(r7)
  stfs      f0, 0x2C(r1)
  bl        -0x14D8
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x1E4
  li        r3, 0x1
  b         .loc_0x2D8

.loc_0x1E4:
  lwz       r0, 0x8(r28)
  mr        r3, r30
  lwz       r7, 0x0(r28)
  mr        r6, r31
  mulli     r0, r0, 0xC
  lwz       r9, 0x24(r29)
  addi      r4, r1, 0x18
  addi      r5, r1, 0x8
  add       r8, r9, r0
  lfs       f0, 0x0(r8)
  mulli     r0, r7, 0xC
  stfs      f0, 0x18(r1)
  add       r7, r9, r0
  lfs       f0, 0x4(r8)
  stfs      f0, 0x1C(r1)
  lfs       f0, 0x8(r8)
  stfs      f0, 0x20(r1)
  lfs       f0, 0x0(r7)
  stfs      f0, 0x24(r1)
  lfs       f0, 0x4(r7)
  stfs      f0, 0x28(r1)
  lfs       f0, 0x8(r7)
  stfs      f0, 0x2C(r1)
  bl        -0x1548
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x254
  li        r3, 0x1
  b         .loc_0x2D8

.loc_0x254:
  lfs       f0, 0x1FA8(r2)
  lfs       f1, 0xC(r1)
  fcmpo     cr0, f1, f0
  ble-      .loc_0x26C
  li        r3, 0
  b         .loc_0x2D8

.loc_0x26C:
  lfs       f1, 0x10(r1)
  fcmpo     cr0, f1, f0
  ble-      .loc_0x280
  li        r3, 0
  b         .loc_0x2D8

.loc_0x280:
  lfs       f1, 0x14(r1)
  fcmpo     cr0, f1, f0
  ble-      .loc_0x294
  li        r3, 0
  b         .loc_0x2D8

.loc_0x294:
  lfs       f6, 0xC(r30)
  li        r3, 0x1
  lfs       f0, 0xC(r28)
  lfs       f2, 0x10(r28)
  fmuls     f0, f0, f6
  lfs       f1, 0x0(r30)
  lfs       f4, 0x14(r28)
  fmuls     f2, f2, f6
  lfs       f3, 0x4(r30)
  fsubs     f0, f1, f0
  lfs       f5, 0x8(r30)
  fmuls     f1, f4, f6
  fsubs     f2, f3, f2
  stfs      f0, 0x0(r31)
  fsubs     f0, f5, f1
  stfs      f2, 0x4(r31)
  stfs      f0, 0x8(r31)

.loc_0x2D8:
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
 * Address:	80417890
 * Size:	0002F8
 */
void intersectHard__Q23Sys8TriangleFRQ23Sys11VertexTableRQ23Sys6SphereR10Vector3<float>(void)
{
/*
.loc_0x0:
  stwu      r1, -0x40(r1)
  mflr      r0
  stw       r0, 0x44(r1)
  stw       r31, 0x3C(r1)
  mr        r31, r6
  stw       r30, 0x38(r1)
  mr        r30, r5
  stw       r29, 0x34(r1)
  mr        r29, r4
  stw       r28, 0x30(r1)
  mr        r28, r3
  lfs       f5, 0x4(r5)
  lfs       f0, 0x10(r3)
  lfs       f6, 0x0(r5)
  fmuls     f0, f5, f0
  lfs       f1, 0xC(r3)
  lfs       f7, 0x8(r5)
  lfs       f2, 0x14(r3)
  fmadds    f1, f6, f1, f0
  lfs       f0, 0x18(r3)
  lfs       f4, 0xC(r5)
  fmadds    f1, f7, f2, f1
  fsubs     f0, f1, f0
  fcmpo     cr0, f0, f4
  ble-      .loc_0x6C
  li        r3, 0
  b         .loc_0x2D8

.loc_0x6C:
  lfs       f0, 0x20(r28)
  lfs       f2, 0x1C(r28)
  fmuls     f1, f5, f0
  lfs       f3, 0x24(r28)
  lfs       f0, 0x28(r28)
  fmadds    f1, f6, f2, f1
  fmadds    f1, f7, f3, f1
  fsubs     f8, f1, f0
  fcmpo     cr0, f8, f4
  ble-      .loc_0x9C
  li        r3, 0
  b         .loc_0x2D8

.loc_0x9C:
  lfs       f0, 0x30(r28)
  lfs       f2, 0x2C(r28)
  fmuls     f1, f5, f0
  lfs       f3, 0x34(r28)
  lfs       f0, 0x38(r28)
  stfs      f8, 0xC(r1)
  fmadds    f1, f6, f2, f1
  fmadds    f1, f7, f3, f1
  fsubs     f8, f1, f0
  fcmpo     cr0, f8, f4
  ble-      .loc_0xD0
  li        r3, 0
  b         .loc_0x2D8

.loc_0xD0:
  lfs       f0, 0x40(r28)
  lfs       f2, 0x3C(r28)
  fmuls     f1, f5, f0
  lfs       f3, 0x44(r28)
  lfs       f0, 0x48(r28)
  stfs      f8, 0x10(r1)
  fmadds    f1, f6, f2, f1
  fmadds    f1, f7, f3, f1
  fsubs     f8, f1, f0
  fcmpo     cr0, f8, f4
  ble-      .loc_0x104
  li        r3, 0
  b         .loc_0x2D8

.loc_0x104:
  lwz       r0, 0x0(r28)
  mr        r3, r30
  lwz       r7, 0x4(r28)
  addi      r4, r1, 0x18
  mulli     r0, r0, 0xC
  lwz       r9, 0x24(r29)
  stfs      f8, 0x14(r1)
  addi      r5, r1, 0x8
  add       r8, r9, r0
  lfs       f0, 0x0(r8)
  mulli     r0, r7, 0xC
  stfs      f0, 0x18(r1)
  add       r7, r9, r0
  lfs       f0, 0x4(r8)
  stfs      f0, 0x1C(r1)
  lfs       f0, 0x8(r8)
  stfs      f0, 0x20(r1)
  lfs       f0, 0x0(r7)
  stfs      f0, 0x24(r1)
  lfs       f0, 0x4(r7)
  stfs      f0, 0x28(r1)
  lfs       f0, 0x8(r7)
  stfs      f0, 0x2C(r1)
  bl        -0x1760
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x174
  li        r3, 0x1
  b         .loc_0x2D8

.loc_0x174:
  lwz       r0, 0x4(r28)
  mr        r3, r30
  lwz       r7, 0x8(r28)
  mr        r6, r31
  mulli     r0, r0, 0xC
  lwz       r9, 0x24(r29)
  addi      r4, r1, 0x18
  addi      r5, r1, 0x8
  add       r8, r9, r0
  lfs       f0, 0x0(r8)
  mulli     r0, r7, 0xC
  stfs      f0, 0x18(r1)
  add       r7, r9, r0
  lfs       f0, 0x4(r8)
  stfs      f0, 0x1C(r1)
  lfs       f0, 0x8(r8)
  stfs      f0, 0x20(r1)
  lfs       f0, 0x0(r7)
  stfs      f0, 0x24(r1)
  lfs       f0, 0x4(r7)
  stfs      f0, 0x28(r1)
  lfs       f0, 0x8(r7)
  stfs      f0, 0x2C(r1)
  bl        -0x17D0
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x1E4
  li        r3, 0x1
  b         .loc_0x2D8

.loc_0x1E4:
  lwz       r0, 0x8(r28)
  mr        r3, r30
  lwz       r7, 0x0(r28)
  mr        r6, r31
  mulli     r0, r0, 0xC
  lwz       r9, 0x24(r29)
  addi      r4, r1, 0x18
  addi      r5, r1, 0x8
  add       r8, r9, r0
  lfs       f0, 0x0(r8)
  mulli     r0, r7, 0xC
  stfs      f0, 0x18(r1)
  add       r7, r9, r0
  lfs       f0, 0x4(r8)
  stfs      f0, 0x1C(r1)
  lfs       f0, 0x8(r8)
  stfs      f0, 0x20(r1)
  lfs       f0, 0x0(r7)
  stfs      f0, 0x24(r1)
  lfs       f0, 0x4(r7)
  stfs      f0, 0x28(r1)
  lfs       f0, 0x8(r7)
  stfs      f0, 0x2C(r1)
  bl        -0x1840
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x254
  li        r3, 0x1
  b         .loc_0x2D8

.loc_0x254:
  lfs       f0, 0x1FA8(r2)
  lfs       f1, 0xC(r1)
  fcmpo     cr0, f1, f0
  ble-      .loc_0x26C
  li        r3, 0
  b         .loc_0x2D8

.loc_0x26C:
  lfs       f1, 0x10(r1)
  fcmpo     cr0, f1, f0
  ble-      .loc_0x280
  li        r3, 0
  b         .loc_0x2D8

.loc_0x280:
  lfs       f1, 0x14(r1)
  fcmpo     cr0, f1, f0
  ble-      .loc_0x294
  li        r3, 0
  b         .loc_0x2D8

.loc_0x294:
  lfs       f6, 0xC(r30)
  li        r3, 0x1
  lfs       f0, 0xC(r28)
  lfs       f2, 0x10(r28)
  fmuls     f0, f0, f6
  lfs       f1, 0x0(r30)
  lfs       f4, 0x14(r28)
  fmuls     f2, f2, f6
  lfs       f3, 0x4(r30)
  fsubs     f0, f1, f0
  lfs       f5, 0x8(r30)
  fmuls     f1, f4, f6
  fsubs     f2, f3, f2
  stfs      f0, 0x0(r31)
  fsubs     f0, f5, f1
  stfs      f2, 0x4(r31)
  stfs      f0, 0x8(r31)

.loc_0x2D8:
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
 * Address:	........
 * Size:	00014C
 */
void intersectOptimistic__Q23Sys8TriangleFRQ23Sys6SphereR10Vector3<float>(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80417B88
 * Size:	0000EC
 */
void insideXZ__Q23Sys8TriangleFR10Vector3<float>(void)
{
/*
.loc_0x0:
  lfs       f4, 0x10(r3)
  lfs       f7, 0x1FA8(r2)
  fcmpo     cr0, f4, f7
  cror      2, 0, 0x2
  bne-      .loc_0x1C
  li        r3, 0
  blr       

.loc_0x1C:
  lfs       f1, 0x14(r3)
  lfs       f0, 0x8(r4)
  lfs       f2, 0xC(r3)
  fmuls     f0, f1, f0
  lfs       f1, 0x0(r4)
  lfs       f3, 0x18(r3)
  fmadds    f0, f2, f1, f0
  fsubs     f0, f3, f0
  fdivs     f0, f0, f4
  stfs      f0, 0x4(r4)
  lfs       f2, 0x4(r4)
  lfs       f0, 0x20(r3)
  lfs       f4, 0x0(r4)
  fmuls     f1, f2, f0
  lfs       f3, 0x1C(r3)
  lfs       f6, 0x8(r4)
  lfs       f5, 0x24(r3)
  fmadds    f1, f4, f3, f1
  lfs       f0, 0x28(r3)
  fmadds    f1, f6, f5, f1
  fsubs     f0, f1, f0
  fcmpo     cr0, f0, f7
  ble-      .loc_0x80
  li        r3, 0
  blr       

.loc_0x80:
  lfs       f0, 0x30(r3)
  lfs       f3, 0x2C(r3)
  fmuls     f1, f2, f0
  lfs       f5, 0x34(r3)
  lfs       f0, 0x38(r3)
  fmadds    f1, f4, f3, f1
  fmadds    f1, f6, f5, f1
  fsubs     f0, f1, f0
  fcmpo     cr0, f0, f7
  ble-      .loc_0xB0
  li        r3, 0
  blr       

.loc_0xB0:
  addi      r3, r3, 0x20
  lfs       f0, 0x20(r3)
  lfs       f3, 0x1C(r3)
  fmuls     f1, f2, f0
  lfs       f5, 0x24(r3)
  lfs       f0, 0x28(r3)
  fmadds    f1, f4, f3, f1
  fmadds    f1, f6, f5, f1
  fsubs     f0, f1, f0
  fcmpo     cr0, f0, f7
  ble-      .loc_0xE4
  li        r3, 0
  blr       

.loc_0xE4:
  li        r3, 0x1
  blr
*/
}

/*
 * --INFO--
 * Address:	80417C74
 * Size:	0004C8
 */
void Sys::Triangle::makePlanes( (Sys::VertexTable &))
{
/*
.loc_0x0:
  stwu      r1, -0x140(r1)
  mflr      r0
  stw       r0, 0x144(r1)
  stfd      f31, 0x130(r1)
  psq_st    f31,0x138(r1),0,0
  stfd      f30, 0x120(r1)
  psq_st    f30,0x128(r1),0,0
  stfd      f29, 0x110(r1)
  psq_st    f29,0x118(r1),0,0
  stfd      f28, 0x100(r1)
  psq_st    f28,0x108(r1),0,0
  stfd      f27, 0xF0(r1)
  psq_st    f27,0xF8(r1),0,0
  stfd      f26, 0xE0(r1)
  psq_st    f26,0xE8(r1),0,0
  stfd      f25, 0xD0(r1)
  psq_st    f25,0xD8(r1),0,0
  stfd      f24, 0xC0(r1)
  psq_st    f24,0xC8(r1),0,0
  stfd      f23, 0xB0(r1)
  psq_st    f23,0xB8(r1),0,0
  stfd      f22, 0xA0(r1)
  psq_st    f22,0xA8(r1),0,0
  stfd      f21, 0x90(r1)
  psq_st    f21,0x98(r1),0,0
  stfd      f20, 0x80(r1)
  psq_st    f20,0x88(r1),0,0
  stfd      f19, 0x70(r1)
  psq_st    f19,0x78(r1),0,0
  stfd      f18, 0x60(r1)
  psq_st    f18,0x68(r1),0,0
  stw       r31, 0x5C(r1)
  mr        r31, r3
  lwz       r5, 0x24(r4)
  lwz       r4, 0x0(r3)
  lwz       r3, 0x4(r3)
  lwz       r0, 0x8(r31)
  mulli     r4, r4, 0xC
  add       r4, r5, r4
  mulli     r3, r3, 0xC
  lfs       f31, 0x0(r4)
  lfs       f30, 0x4(r4)
  lfs       f29, 0x8(r4)
  add       r3, r5, r3
  mulli     r0, r0, 0xC
  lfs       f27, 0x4(r3)
  lfs       f26, 0x8(r3)
  lfs       f28, 0x0(r3)
  fsubs     f4, f27, f30
  add       r3, r5, r0
  lfs       f25, 0x0(r3)
  fsubs     f5, f26, f29
  lfs       f23, 0x8(r3)
  fsubs     f3, f28, f31
  fsubs     f18, f25, f31
  lfs       f24, 0x4(r3)
  fsubs     f20, f23, f29
  fsubs     f19, f24, f30
  fmuls     f2, f18, f5
  stfs      f18, 0x44(r1)
  fmuls     f0, f20, f4
  fmuls     f1, f19, f3
  stfs      f19, 0x48(r1)
  fmsubs    f2, f20, f3, f2
  fmsubs    f3, f19, f5, f0
  stfs      f20, 0x4C(r1)
  fmsubs    f4, f18, f4, f1
  fmuls     f0, f2, f2
  stfs      f2, 0x48(r1)
  fmuls     f1, f3, f3
  fmuls     f2, f4, f4
  stfs      f3, 0x44(r1)
  fadds     f0, f1, f0
  stfs      f4, 0x4C(r1)
  fadds     f1, f2, f0
  bl        -0x659C
  lfs       f0, 0x1FA8(r2)
  fcmpo     cr0, f1, f0
  ble-      .loc_0x168
  lfs       f0, 0x1FAC(r2)
  lfs       f2, 0x44(r1)
  fdivs     f3, f0, f1
  lfs       f1, 0x48(r1)
  lfs       f0, 0x4C(r1)
  fmuls     f2, f2, f3
  fmuls     f1, f1, f3
  fmuls     f0, f0, f3
  stfs      f2, 0x44(r1)
  stfs      f1, 0x48(r1)
  stfs      f0, 0x4C(r1)

.loc_0x168:
  lwz       r0, 0x44(r1)
  fsubs     f3, f31, f28
  lwz       r3, 0x48(r1)
  fsubs     f5, f29, f26
  stw       r0, 0x2C(r1)
  fsubs     f6, f30, f27
  lwz       r0, 0x4C(r1)
  stw       r3, 0x30(r1)
  lfs       f0, 0x2C(r1)
  stw       r0, 0x34(r1)
  lfs       f2, 0x30(r1)
  stfs      f0, 0xC(r31)
  lfs       f21, 0x4C(r1)
  lfs       f22, 0x48(r1)
  lfs       f7, 0x44(r1)
  fmuls     f0, f3, f21
  fmuls     f1, f5, f22
  stfs      f2, 0x10(r31)
  lfs       f4, 0x34(r1)
  fmuls     f2, f6, f7
  fmsubs    f0, f5, f7, f0
  stfs      f4, 0x14(r31)
  fmsubs    f4, f6, f21, f1
  lfs       f7, 0x10(r31)
  fmsubs    f10, f3, f22, f2
  lfs       f8, 0xC(r31)
  fmuls     f1, f0, f0
  fmuls     f7, f7, f30
  fmuls     f2, f4, f4
  lfs       f9, 0x14(r31)
  stfs      f3, 0x38(r1)
  fmuls     f3, f10, f10
  fmadds    f7, f8, f31, f7
  fadds     f1, f2, f1
  stfs      f6, 0x3C(r1)
  fmadds    f2, f9, f29, f7
  stfs      f5, 0x40(r1)
  fadds     f1, f3, f1
  stfs      f2, 0x18(r31)
  stfs      f4, 0x38(r1)
  stfs      f0, 0x3C(r1)
  stfs      f10, 0x40(r1)
  bl        -0x6680
  lfs       f0, 0x1FA8(r2)
  fcmpo     cr0, f1, f0
  ble-      .loc_0x24C
  lfs       f0, 0x1FAC(r2)
  lfs       f2, 0x38(r1)
  fdivs     f3, f0, f1
  lfs       f1, 0x3C(r1)
  lfs       f0, 0x40(r1)
  fmuls     f2, f2, f3
  fmuls     f1, f1, f3
  fmuls     f0, f0, f3
  stfs      f2, 0x38(r1)
  stfs      f1, 0x3C(r1)
  stfs      f0, 0x40(r1)

.loc_0x24C:
  lwz       r0, 0x38(r1)
  fsubs     f6, f28, f25
  lwz       r3, 0x3C(r1)
  fsubs     f4, f26, f23
  stw       r0, 0x20(r1)
  fsubs     f5, f27, f24
  lwz       r0, 0x40(r1)
  stw       r3, 0x24(r1)
  fmuls     f0, f4, f22
  lfs       f7, 0x20(r1)
  fmuls     f2, f6, f21
  stw       r0, 0x28(r1)
  lfs       f1, 0x24(r1)
  fmsubs    f3, f5, f21, f0
  stfs      f7, 0x1C(r31)
  lfs       f0, 0x28(r1)
  stfs      f1, 0x20(r31)
  fmuls     f1, f3, f3
  lfs       f7, 0x44(r1)
  stfs      f0, 0x24(r31)
  fmsubs    f8, f4, f7, f2
  lfs       f2, 0x20(r31)
  fmuls     f0, f5, f7
  lfs       f7, 0x1C(r31)
  fmuls     f2, f2, f30
  stfs      f6, 0x38(r1)
  fmsubs    f9, f6, f22, f0
  lfs       f6, 0x24(r31)
  fmuls     f0, f8, f8
  stfs      f5, 0x3C(r1)
  fmadds    f5, f7, f31, f2
  stfs      f4, 0x40(r1)
  fmuls     f2, f9, f9
  fadds     f0, f1, f0
  stfs      f3, 0x38(r1)
  fmadds    f3, f6, f29, f5
  stfs      f8, 0x3C(r1)
  fadds     f1, f2, f0
  stfs      f3, 0x28(r31)
  stfs      f9, 0x40(r1)
  bl        -0x675C
  lfs       f0, 0x1FA8(r2)
  fcmpo     cr0, f1, f0
  ble-      .loc_0x328
  lfs       f0, 0x1FAC(r2)
  lfs       f2, 0x38(r1)
  fdivs     f3, f0, f1
  lfs       f1, 0x3C(r1)
  lfs       f0, 0x40(r1)
  fmuls     f2, f2, f3
  fmuls     f1, f1, f3
  fmuls     f0, f0, f3
  stfs      f2, 0x38(r1)
  stfs      f1, 0x3C(r1)
  stfs      f0, 0x40(r1)

.loc_0x328:
  lwz       r0, 0x38(r1)
  fmuls     f0, f20, f22
  lwz       r3, 0x3C(r1)
  fmuls     f2, f18, f21
  stw       r0, 0x14(r1)
  lwz       r0, 0x40(r1)
  fmsubs    f3, f19, f21, f0
  stw       r3, 0x18(r1)
  lfs       f0, 0x14(r1)
  stw       r0, 0x1C(r1)
  fmuls     f1, f3, f3
  lfs       f4, 0x18(r1)
  stfs      f0, 0x2C(r31)
  lfs       f0, 0x1C(r1)
  stfs      f4, 0x30(r31)
  lfs       f4, 0x44(r1)
  stfs      f0, 0x34(r31)
  fmsubs    f6, f20, f4, f2
  lfs       f2, 0x30(r31)
  fmuls     f0, f19, f4
  lfs       f4, 0x2C(r31)
  fmuls     f2, f2, f27
  stfs      f18, 0x38(r1)
  fmsubs    f7, f18, f22, f0
  lfs       f5, 0x34(r31)
  fmuls     f0, f6, f6
  stfs      f19, 0x3C(r1)
  fmadds    f4, f4, f28, f2
  stfs      f20, 0x40(r1)
  fmuls     f2, f7, f7
  fadds     f0, f1, f0
  stfs      f3, 0x38(r1)
  fmadds    f3, f5, f26, f4
  stfs      f6, 0x3C(r1)
  fadds     f1, f2, f0
  stfs      f3, 0x38(r31)
  stfs      f7, 0x40(r1)
  bl        -0x682C
  lfs       f0, 0x1FA8(r2)
  fcmpo     cr0, f1, f0
  ble-      .loc_0x3F8
  lfs       f0, 0x1FAC(r2)
  lfs       f2, 0x38(r1)
  fdivs     f3, f0, f1
  lfs       f1, 0x3C(r1)
  lfs       f0, 0x40(r1)
  fmuls     f2, f2, f3
  fmuls     f1, f1, f3
  fmuls     f0, f0, f3
  stfs      f2, 0x38(r1)
  stfs      f1, 0x3C(r1)
  stfs      f0, 0x40(r1)

.loc_0x3F8:
  lwz       r0, 0x38(r1)
  lwz       r3, 0x3C(r1)
  stw       r0, 0x8(r1)
  lwz       r0, 0x40(r1)
  stw       r3, 0xC(r1)
  lfs       f0, 0x8(r1)
  stw       r0, 0x10(r1)
  lfs       f1, 0xC(r1)
  stfs      f0, 0x3C(r31)
  lfs       f0, 0x10(r1)
  stfs      f1, 0x40(r31)
  stfs      f0, 0x44(r31)
  lfs       f0, 0x40(r31)
  lfs       f1, 0x3C(r31)
  fmuls     f0, f0, f24
  lfs       f2, 0x44(r31)
  fmadds    f0, f1, f25, f0
  fmadds    f0, f2, f23, f0
  stfs      f0, 0x48(r31)
  psq_l     f31,0x138(r1),0,0
  lfd       f31, 0x130(r1)
  psq_l     f30,0x128(r1),0,0
  lfd       f30, 0x120(r1)
  psq_l     f29,0x118(r1),0,0
  lfd       f29, 0x110(r1)
  psq_l     f28,0x108(r1),0,0
  lfd       f28, 0x100(r1)
  psq_l     f27,0xF8(r1),0,0
  lfd       f27, 0xF0(r1)
  psq_l     f26,0xE8(r1),0,0
  lfd       f26, 0xE0(r1)
  psq_l     f25,0xD8(r1),0,0
  lfd       f25, 0xD0(r1)
  psq_l     f24,0xC8(r1),0,0
  lfd       f24, 0xC0(r1)
  psq_l     f23,0xB8(r1),0,0
  lfd       f23, 0xB0(r1)
  psq_l     f22,0xA8(r1),0,0
  lfd       f22, 0xA0(r1)
  psq_l     f21,0x98(r1),0,0
  lfd       f21, 0x90(r1)
  psq_l     f20,0x88(r1),0,0
  lfd       f20, 0x80(r1)
  psq_l     f19,0x78(r1),0,0
  lfd       f19, 0x70(r1)
  psq_l     f18,0x68(r1),0,0
  lfd       f18, 0x60(r1)
  lwz       r0, 0x144(r1)
  lwz       r31, 0x5C(r1)
  mtlr      r0
  addi      r1, r1, 0x140
  blr
*/
}

/*
 * --INFO--
 * Address:	8041813C
 * Size:	000040
 */
void Sys::RayIntersectInfo::condition( (Sys::Triangle &))
{
/*
.loc_0x0:
  lbz       r0, 0x1C(r3)
  cmplwi    r0, 0
  beq-      .loc_0x38
  lfs       f1, 0x10(r4)
  lfs       f0, 0x1FB0(r2)
  fcmpo     cr0, f1, f0
  bge-      .loc_0x30
  lfs       f0, 0x1FC4(r2)
  fcmpo     cr0, f1, f0
  ble-      .loc_0x30
  li        r3, 0x1
  blr       

.loc_0x30:
  li        r3, 0
  blr       

.loc_0x38:
  li        r3, 0x1
  blr
*/
}

/*
 * --INFO--
 * Address:	8041817C
 * Size:	000428
 */
void Sys::GridDivider::createTriangles( (Sys::CreateTriangleArg &))
{
/*
.loc_0x0:
  stwu      r1, -0x1440(r1)
  mflr      r0
  stw       r0, 0x1444(r1)
  li        r0, 0x1438
  stfd      f31, 0x1430(r1)
  vpkuhum   v31, v1, v0
  stmw      r26, 0x1418(r1)
  li        r0, 0
  mr        r31, r3
  stw       r0, 0x18(r4)
  mr        r28, r4
  lis       r4, 0x8012
  addi      r3, r1, 0x208
  stw       r0, 0x1C(r28)
  subi      r4, r4, 0xCB8
  li        r5, 0
  li        r6, 0xC
  li        r7, 0x180
  bl        -0x356988
  lfs       f2, 0x0(r28)
  li        r29, 0
  lfs       f1, 0x2C(r31)
  li        r3, 0
  lfs       f3, 0x8(r28)
  lfs       f0, 0x34(r31)
  fsubs     f2, f2, f1
  lfs       f1, 0x44(r31)
  fsubs     f3, f3, f0
  lfs       f0, 0x48(r31)
  fdivs     f1, f2, f1
  fdivs     f0, f3, f0
  fctiwz    f1, f1
  fctiwz    f0, f0
  stfd      f1, 0x1408(r1)
  lwz       r4, 0x140C(r1)
  stfd      f0, 0x1410(r1)
  cmpwi     r4, 0
  lwz       r9, 0x1414(r1)
  blt-      .loc_0xC0
  cmpwi     r9, 0
  blt-      .loc_0xC0
  lwz       r0, 0x20(r31)
  cmpw      r4, r0
  bge-      .loc_0xC0
  lwz       r0, 0x24(r31)
  cmpw      r9, r0
  bge-      .loc_0xC0
  li        r3, 0x1

.loc_0xC0:
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x408
  lwz       r3, 0x24(r31)
  addi      r0, r1, 0x8
  addi      r30, r1, 0x208
  lwz       r8, 0x28(r31)
  mullw     r3, r4, r3
  mr        r5, r0
  mr        r6, r30
  li        r7, 0
  li        r4, 0
  add       r3, r9, r3
  mulli     r3, r3, 0x28
  add       r12, r8, r3
  b         .loc_0x228

.loc_0xFC:
  lwz       r9, 0x24(r12)
  mr        r3, r0
  lwz       r11, 0x1C(r31)
  li        r8, 0
  lwzx      r10, r9, r4
  lwz       r9, 0x18(r31)
  mulli     r10, r10, 0x60
  lwz       r11, 0x24(r11)
  lwz       r26, 0x24(r9)
  add       r27, r11, r10
  lwz       r11, 0x0(r27)
  lwz       r10, 0x4(r27)
  lwz       r9, 0x8(r27)
  mulli     r11, r11, 0xC
  add       r11, r26, r11
  mulli     r10, r10, 0xC
  lfs       f1, 0x0(r11)
  lfs       f3, 0x4(r11)
  lfs       f4, 0x8(r11)
  add       r10, r26, r10
  mulli     r9, r9, 0xC
  lfs       f5, 0x0(r10)
  lfs       f6, 0x4(r10)
  lfs       f7, 0x8(r10)
  add       r9, r26, r9
  lfs       f8, 0x0(r9)
  lfs       f9, 0x4(r9)
  lfs       f10, 0x8(r9)
  mtctr     r29
  cmpwi     r29, 0
  ble-      .loc_0x190

.loc_0x178:
  lwz       r9, 0x0(r3)
  cmplw     r27, r9
  bne-      .loc_0x188
  li        r8, 0x1

.loc_0x188:
  addi      r3, r3, 0x4
  bdnz+     .loc_0x178

.loc_0x190:
  rlwinm.   r3,r8,0,24,31
  bne-      .loc_0x220
  cmpwi     r29, 0x80
  bge-      .loc_0x220
  lfs       f11, 0x10(r27)
  lfs       f0, 0x14(r28)
  lfs       f2, 0xC(r27)
  fcmpo     cr0, f11, f0
  lfs       f0, 0x14(r27)
  ble-      .loc_0x220
  lfs       f31, 0x10(r28)
  addi      r29, r29, 0x1
  stw       r27, 0x0(r5)
  addi      r5, r5, 0x4
  fmuls     f13, f2, f31
  fmuls     f12, f11, f31
  fmuls     f11, f0, f31
  fadds     f2, f1, f13
  fadds     f1, f3, f12
  fadds     f0, f4, f11
  stfs      f2, 0x0(r6)
  fadds     f5, f5, f13
  fadds     f4, f6, f12
  stfs      f1, 0x4(r6)
  fadds     f3, f7, f11
  fadds     f2, f8, f13
  stfs      f0, 0x8(r6)
  fadds     f1, f9, f12
  fadds     f0, f10, f11
  stfs      f5, 0xC(r6)
  stfs      f4, 0x10(r6)
  stfs      f3, 0x14(r6)
  stfs      f2, 0x18(r6)
  stfs      f1, 0x1C(r6)
  stfs      f0, 0x20(r6)
  addi      r6, r6, 0x24

.loc_0x220:
  addi      r4, r4, 0x4
  addi      r7, r7, 0x1

.loc_0x228:
  lwz       r3, 0x1C(r12)
  cmpw      r7, r3
  blt+      .loc_0xFC
  mulli     r31, r29, 0x3
  mulli     r3, r31, 0xC
  addi      r3, r3, 0x10
  bl        -0x3F4410
  lis       r4, 0x8012
  mr        r7, r31
  subi      r4, r4, 0xCB8
  li        r5, 0
  li        r6, 0xC
  bl        -0x3569E4
  cmpwi     r31, 0
  stw       r3, 0x18(r28)
  li        r3, 0
  ble-      .loc_0x404
  cmpwi     r31, 0x8
  subi      r4, r31, 0x8
  ble-      .loc_0x3BC
  addi      r0, r4, 0x7
  li        r5, 0
  rlwinm    r0,r0,29,3,31
  mtctr     r0
  cmpwi     r4, 0
  ble-      .loc_0x3BC

.loc_0x290:
  lwz       r0, 0x18(r28)
  addi      r12, r5, 0xC
  lfs       f0, 0x0(r30)
  addi      r11, r5, 0x18
  add       r4, r0, r5
  addi      r10, r5, 0x24
  stfs      f0, 0x0(r4)
  addi      r9, r5, 0x30
  addi      r8, r5, 0x3C
  addi      r7, r5, 0x48
  lfs       f0, 0x4(r30)
  addi      r6, r5, 0x54
  addi      r5, r5, 0x60
  addi      r3, r3, 0x8
  stfs      f0, 0x4(r4)
  lfs       f0, 0x8(r30)
  stfs      f0, 0x8(r4)
  lwz       r0, 0x18(r28)
  lfs       f0, 0xC(r30)
  add       r12, r0, r12
  stfs      f0, 0x0(r12)
  lfs       f0, 0x10(r30)
  stfs      f0, 0x4(r12)
  lfs       f0, 0x14(r30)
  stfs      f0, 0x8(r12)
  lwz       r0, 0x18(r28)
  lfs       f0, 0x18(r30)
  add       r11, r0, r11
  stfs      f0, 0x0(r11)
  lfs       f0, 0x1C(r30)
  stfs      f0, 0x4(r11)
  lfs       f0, 0x20(r30)
  stfs      f0, 0x8(r11)
  lwz       r0, 0x18(r28)
  lfs       f0, 0x24(r30)
  add       r10, r0, r10
  stfs      f0, 0x0(r10)
  lfs       f0, 0x28(r30)
  stfs      f0, 0x4(r10)
  lfs       f0, 0x2C(r30)
  stfs      f0, 0x8(r10)
  lwz       r0, 0x18(r28)
  lfs       f0, 0x30(r30)
  add       r9, r0, r9
  stfs      f0, 0x0(r9)
  lfs       f0, 0x34(r30)
  stfs      f0, 0x4(r9)
  lfs       f0, 0x38(r30)
  stfs      f0, 0x8(r9)
  lwz       r0, 0x18(r28)
  lfs       f0, 0x3C(r30)
  add       r8, r0, r8
  stfs      f0, 0x0(r8)
  lfs       f0, 0x40(r30)
  stfs      f0, 0x4(r8)
  lfs       f0, 0x44(r30)
  stfs      f0, 0x8(r8)
  lwz       r0, 0x18(r28)
  lfs       f0, 0x48(r30)
  add       r7, r0, r7
  stfs      f0, 0x0(r7)
  lfs       f0, 0x4C(r30)
  stfs      f0, 0x4(r7)
  lfs       f0, 0x50(r30)
  stfs      f0, 0x8(r7)
  lwz       r0, 0x18(r28)
  lfs       f0, 0x54(r30)
  add       r6, r0, r6
  stfs      f0, 0x0(r6)
  lfs       f0, 0x58(r30)
  stfs      f0, 0x4(r6)
  lfs       f0, 0x5C(r30)
  addi      r30, r30, 0x60
  stfs      f0, 0x8(r6)
  bdnz+     .loc_0x290

.loc_0x3BC:
  mulli     r5, r3, 0xC
  addi      r4, r1, 0x208
  sub       r0, r31, r3
  add       r4, r4, r5
  mtctr     r0
  cmpw      r3, r31
  bge-      .loc_0x404

.loc_0x3D8:
  lwz       r0, 0x18(r28)
  lfs       f0, 0x0(r4)
  add       r3, r0, r5
  addi      r5, r5, 0xC
  stfs      f0, 0x0(r3)
  lfs       f0, 0x4(r4)
  stfs      f0, 0x4(r3)
  lfs       f0, 0x8(r4)
  addi      r4, r4, 0xC
  stfs      f0, 0x8(r3)
  bdnz+     .loc_0x3D8

.loc_0x404:
  stw       r29, 0x1C(r28)

.loc_0x408:
  li        r0, 0x1438
  vmrghb    v31, v1, v0
  lfd       f31, 0x1430(r1)
  lmw       r26, 0x1418(r1)
  lwz       r0, 0x1444(r1)
  mtlr      r0
  addi      r1, r1, 0x1440
  blr
*/
}

/*
 * --INFO--
 * Address:	804185A4
 * Size:	0001D8
 */
void getMinY__Q23Sys11GridDividerFR10Vector3<float>(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  li        r5, 0
  lfs       f9, 0x0(r4)
  lfs       f1, 0x2C(r3)
  lfs       f10, 0x8(r4)
  fsubs     f2, f9, f1
  lfs       f0, 0x34(r3)
  lfs       f1, 0x44(r3)
  fsubs     f3, f10, f0
  lfs       f0, 0x48(r3)
  fdivs     f1, f2, f1
  fdivs     f0, f3, f0
  fctiwz    f1, f1
  fctiwz    f0, f0
  stfd      f1, 0x8(r1)
  lwz       r6, 0xC(r1)
  stfd      f0, 0x10(r1)
  cmpwi     r6, 0
  lwz       r8, 0x14(r1)
  blt-      .loc_0x74
  cmpwi     r8, 0
  blt-      .loc_0x74
  lwz       r0, 0x20(r3)
  cmpw      r6, r0
  bge-      .loc_0x74
  lwz       r0, 0x24(r3)
  cmpw      r8, r0
  bge-      .loc_0x74
  li        r5, 0x1

.loc_0x74:
  rlwinm.   r0,r5,0,24,31
  bne-      .loc_0x84
  lfs       f1, 0x1FA8(r2)
  b         .loc_0x1D0

.loc_0x84:
  lwz       r0, 0x24(r3)
  li        r9, 0
  lwz       r5, 0x28(r3)
  li        r7, 0
  mullw     r0, r6, r0
  lfs       f1, 0x1FC8(r2)
  lfs       f6, 0x4(r4)
  lfs       f8, 0x1FA8(r2)
  add       r0, r8, r0
  mulli     r0, r0, 0x28
  add       r6, r5, r0
  lwz       r0, 0x1C(r6)
  mtctr     r0
  cmpwi     r0, 0
  ble-      .loc_0x1C0

.loc_0xC0:
  lwz       r4, 0x24(r6)
  lwz       r5, 0x1C(r3)
  lwzx      r0, r4, r7
  lwz       r4, 0x24(r5)
  mulli     r0, r0, 0x60
  add       r4, r4, r0
  lfs       f11, 0x10(r4)
  fcmpo     cr0, f11, f8
  cror      2, 0, 0x2
  bne-      .loc_0xF0
  li        r0, 0
  b         .loc_0x1A0

.loc_0xF0:
  lfs       f0, 0x14(r4)
  li        r0, 0
  lfs       f2, 0xC(r4)
  fmuls     f0, f0, f10
  lfs       f7, 0x18(r4)
  lfs       f3, 0x20(r4)
  lfs       f4, 0x1C(r4)
  fmadds    f6, f2, f9, f0
  lfs       f5, 0x24(r4)
  lfs       f2, 0x28(r4)
  lfs       f0, 0x1FA8(r2)
  fsubs     f6, f7, f6
  fdivs     f6, f6, f11
  fmuls     f3, f6, f3
  fmadds    f3, f9, f4, f3
  fmadds    f3, f10, f5, f3
  fsubs     f2, f3, f2
  fcmpo     cr0, f2, f0
  ble-      .loc_0x140
  b         .loc_0x1A0

.loc_0x140:
  lfs       f3, 0x30(r4)
  lfs       f4, 0x2C(r4)
  fmuls     f3, f6, f3
  lfs       f5, 0x34(r4)
  lfs       f2, 0x38(r4)
  fmadds    f3, f9, f4, f3
  fmadds    f3, f10, f5, f3
  fsubs     f2, f3, f2
  fcmpo     cr0, f2, f0
  ble-      .loc_0x16C
  b         .loc_0x1A0

.loc_0x16C:
  addi      r4, r4, 0x20
  lfs       f3, 0x20(r4)
  lfs       f4, 0x1C(r4)
  fmuls     f3, f6, f3
  lfs       f5, 0x24(r4)
  lfs       f2, 0x28(r4)
  fmadds    f3, f9, f4, f3
  fmadds    f3, f10, f5, f3
  fsubs     f2, f3, f2
  fcmpo     cr0, f2, f0
  ble-      .loc_0x19C
  b         .loc_0x1A0

.loc_0x19C:
  li        r0, 0x1

.loc_0x1A0:
  rlwinm.   r0,r0,0,24,31
  beq-      .loc_0x1B8
  fcmpo     cr0, f1, f6
  ble-      .loc_0x1B8
  fmr       f1, f6
  li        r9, 0x1

.loc_0x1B8:
  addi      r7, r7, 0x4
  bdnz+     .loc_0xC0

.loc_0x1C0:
  rlwinm.   r0,r9,0,24,31
  beq-      .loc_0x1CC
  b         .loc_0x1D0

.loc_0x1CC:
  lfs       f1, 0x1FA8(r2)

.loc_0x1D0:
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	8041877C
 * Size:	000234
 */
void Sys::GridDivider::getCurrTri( (Game::CurrTriInfo &))
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  li        r5, 0
  lfs       f0, 0x0(r4)
  lfs       f3, 0x2C(r3)
  lfs       f1, 0x8(r4)
  fsubs     f4, f0, f3
  lfs       f2, 0x34(r3)
  lfs       f3, 0x44(r3)
  fsubs     f5, f1, f2
  lfs       f2, 0x48(r3)
  fdivs     f3, f4, f3
  fdivs     f2, f5, f2
  fctiwz    f3, f3
  fctiwz    f2, f2
  stfd      f3, 0x8(r1)
  lwz       r6, 0xC(r1)
  stfd      f2, 0x10(r1)
  cmpwi     r6, 0
  lwz       r7, 0x14(r1)
  blt-      .loc_0x74
  cmpwi     r7, 0
  blt-      .loc_0x74
  lwz       r0, 0x20(r3)
  cmpw      r6, r0
  bge-      .loc_0x74
  lwz       r0, 0x24(r3)
  cmpw      r7, r0
  bge-      .loc_0x74
  li        r5, 0x1

.loc_0x74:
  rlwinm.   r0,r5,0,24,31
  beq-      .loc_0x22C
  lwz       r0, 0x24(r3)
  li        r9, 0
  lwz       r5, 0x28(r3)
  li        r10, 0
  mullw     r0, r6, r0
  lfs       f11, 0x1FC8(r2)
  lfs       f12, 0x1FCC(r2)
  li        r8, 0
  lfs       f7, 0x4(r4)
  lfs       f9, 0x1FA8(r2)
  add       r0, r7, r0
  mulli     r0, r0, 0x28
  add       r7, r5, r0
  b         .loc_0x210

.loc_0xB4:
  lwz       r5, 0x24(r7)
  lwz       r6, 0x1C(r3)
  lwzx      r0, r5, r8
  lwz       r5, 0x24(r6)
  mulli     r0, r0, 0x60
  add       r5, r5, r0
  lfs       f10, 0x10(r5)
  fcmpo     cr0, f10, f9
  cror      2, 0, 0x2
  bne-      .loc_0xE4
  li        r0, 0
  b         .loc_0x190

.loc_0xE4:
  lfs       f2, 0x14(r5)
  li        r0, 0
  lfs       f3, 0xC(r5)
  fmuls     f2, f2, f1
  lfs       f8, 0x18(r5)
  lfs       f4, 0x20(r5)
  lfs       f5, 0x1C(r5)
  fmadds    f7, f3, f0, f2
  lfs       f6, 0x24(r5)
  lfs       f3, 0x28(r5)
  lfs       f2, 0x1FA8(r2)
  fsubs     f7, f8, f7
  fdivs     f7, f7, f10
  fmuls     f4, f7, f4
  fmadds    f4, f0, f5, f4
  fmadds    f4, f1, f6, f4
  fsubs     f3, f4, f3
  fcmpo     cr0, f3, f2
  ble-      .loc_0x134
  b         .loc_0x190

.loc_0x134:
  lfs       f4, 0x30(r5)
  lfs       f5, 0x2C(r5)
  fmuls     f4, f7, f4
  lfs       f6, 0x34(r5)
  lfs       f3, 0x38(r5)
  fmadds    f4, f0, f5, f4
  fmadds    f4, f1, f6, f4
  fsubs     f3, f4, f3
  fcmpo     cr0, f3, f2
  ble-      .loc_0x160
  b         .loc_0x190

.loc_0x160:
  lfs       f4, 0x40(r5)
  lfs       f5, 0x3C(r5)
  fmuls     f4, f7, f4
  lfs       f6, 0x44(r5)
  lfs       f3, 0x48(r5)
  fmadds    f4, f0, f5, f4
  fmadds    f4, f1, f6, f4
  fsubs     f3, f4, f3
  fcmpo     cr0, f3, f2
  ble-      .loc_0x18C
  b         .loc_0x190

.loc_0x18C:
  li        r0, 0x1

.loc_0x190:
  rlwinm.   r0,r0,0,24,31
  beq-      .loc_0x208
  fcmpo     cr0, f11, f7
  ble-      .loc_0x1D0
  lbz       r0, 0xC(r4)
  fmr       f11, f7
  cmplwi    r0, 0
  beq-      .loc_0x1D0
  lfs       f2, 0xC(r5)
  li        r9, 0x1
  stfs      f2, 0x20(r4)
  lfs       f2, 0x10(r5)
  stfs      f2, 0x24(r4)
  lfs       f2, 0x14(r5)
  stfs      f2, 0x28(r4)
  stw       r5, 0x14(r4)

.loc_0x1D0:
  fcmpo     cr0, f7, f12
  ble-      .loc_0x208
  lbz       r0, 0xC(r4)
  fmr       f12, f7
  cmplwi    r0, 0
  bne-      .loc_0x208
  lfs       f2, 0xC(r5)
  li        r9, 0x1
  stfs      f2, 0x20(r4)
  lfs       f2, 0x10(r5)
  stfs      f2, 0x24(r4)
  lfs       f2, 0x14(r5)
  stfs      f2, 0x28(r4)
  stw       r5, 0x14(r4)

.loc_0x208:
  addi      r8, r8, 0x4
  addi      r10, r10, 0x1

.loc_0x210:
  lwz       r0, 0x1C(r7)
  cmpw      r10, r0
  blt+      .loc_0xB4
  rlwinm.   r0,r9,0,24,31
  beq-      .loc_0x22C
  stfs      f11, 0x18(r4)
  stfs      f12, 0x1C(r4)

.loc_0x22C:
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	804189B0
 * Size:	000230
 */
void Sys::GridDivider::findTriLists( (Sys::Sphere &))
{
/*
.loc_0x0:
  stwu      r1, -0x50(r1)
  mflr      r0
  stw       r0, 0x54(r1)
  stmw      r24, 0x30(r1)
  mr        r24, r3
  li        r28, 0
  lfs       f1, 0x0(r4)
  lfs       f4, 0xC(r4)
  lfs       f3, 0x8(r4)
  fsubs     f0, f1, f4
  lfs       f5, 0x2C(r3)
  fadds     f2, f1, f4
  lfs       f6, 0x44(r3)
  fsubs     f1, f3, f4
  lfs       f7, 0x34(r3)
  fsubs     f0, f0, f5
  lfs       f8, 0x48(r3)
  fadds     f4, f3, f4
  fsubs     f1, f1, f7
  fdivs     f3, f0, f6
  fsubs     f5, f2, f5
  fdivs     f2, f1, f8
  fsubs     f0, f4, f7
  fdivs     f1, f5, f6
  fdivs     f0, f0, f8
  fctiwz    f3, f3
  fctiwz    f2, f2
  fctiwz    f1, f1
  stfd      f3, 0x8(r1)
  fctiwz    f0, f0
  lwz       r0, 0xC(r1)
  stfd      f2, 0x10(r1)
  cmpwi     r0, 0
  stfd      f1, 0x18(r1)
  lwz       r4, 0x14(r1)
  stfd      f0, 0x20(r1)
  lwz       r5, 0x1C(r1)
  lwz       r6, 0x24(r1)
  bge-      .loc_0xA4
  li        r0, 0
  b         .loc_0xB4

.loc_0xA4:
  lwz       r3, 0x20(r24)
  cmpw      r0, r3
  blt-      .loc_0xB4
  subi      r0, r3, 0x1

.loc_0xB4:
  cmpwi     r4, 0
  bge-      .loc_0xC4
  li        r31, 0
  b         .loc_0xDC

.loc_0xC4:
  lwz       r3, 0x24(r24)
  cmpw      r4, r3
  blt-      .loc_0xD8
  subi      r31, r3, 0x1
  b         .loc_0xDC

.loc_0xD8:
  mr        r31, r4

.loc_0xDC:
  cmpwi     r5, 0
  bge-      .loc_0xEC
  li        r30, 0
  b         .loc_0x104

.loc_0xEC:
  lwz       r3, 0x20(r24)
  cmpw      r5, r3
  blt-      .loc_0x100
  subi      r30, r3, 0x1
  b         .loc_0x104

.loc_0x100:
  mr        r30, r5

.loc_0x104:
  cmpwi     r6, 0
  bge-      .loc_0x114
  li        r29, 0
  b         .loc_0x12C

.loc_0x114:
  lwz       r3, 0x24(r24)
  cmpw      r6, r3
  blt-      .loc_0x128
  subi      r29, r3, 0x1
  b         .loc_0x12C

.loc_0x128:
  mr        r29, r6

.loc_0x12C:
  mr        r26, r0
  li        r27, 0
  b         .loc_0x200

.loc_0x138:
  mr        r25, r31
  b         .loc_0x1F4

.loc_0x140:
  cmpwi     r26, 0
  li        r3, 0
  blt-      .loc_0x170
  cmpwi     r25, 0
  blt-      .loc_0x170
  lwz       r0, 0x20(r24)
  cmpw      r26, r0
  bge-      .loc_0x170
  lwz       r0, 0x24(r24)
  cmpw      r25, r0
  bge-      .loc_0x170
  li        r3, 0x1

.loc_0x170:
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x1F0
  cmplwi    r27, 0
  beq-      .loc_0x1BC
  lwz       r4, 0x24(r24)
  li        r0, 0
  lwz       r5, 0x28(r24)
  mr        r3, r27
  mullw     r4, r26, r4
  add       r4, r25, r4
  mulli     r4, r4, 0x28
  add       r4, r5, r4
  stw       r0, 0x10(r4)
  stw       r0, 0xC(r4)
  stw       r0, 0x8(r4)
  stw       r0, 0x4(r4)
  bl        -0x7688
  addi      r28, r28, 0x1
  b         .loc_0x1F0

.loc_0x1BC:
  lwz       r3, 0x24(r24)
  li        r0, 0
  lwz       r4, 0x28(r24)
  addi      r28, r28, 0x1
  mullw     r3, r26, r3
  add       r3, r25, r3
  mulli     r3, r3, 0x28
  add       r3, r4, r3
  stw       r0, 0x10(r3)
  mr        r27, r3
  stw       r0, 0xC(r3)
  stw       r0, 0x8(r3)
  stw       r0, 0x4(r3)

.loc_0x1F0:
  addi      r25, r25, 0x1

.loc_0x1F4:
  cmpw      r25, r29
  ble+      .loc_0x140
  addi      r26, r26, 0x1

.loc_0x200:
  cmpw      r26, r30
  ble+      .loc_0x138
  cmpwi     r28, 0x32
  ble-      .loc_0x218
  mr        r3, r27
  bl        -0x770C

.loc_0x218:
  mr        r3, r27
  lmw       r24, 0x30(r1)
  lwz       r0, 0x54(r1)
  mtlr      r0
  addi      r1, r1, 0x50
  blr
*/
}

/*
 * --INFO--
 * Address:	80418BE0
 * Size:	00045C
 */
void Sys::GridDivider::create( (BoundBox &, int, int, Sys::VertexTable *, Sys::TriangleTable *))
{
/*
.loc_0x0:
  stwu      r1, -0x1080(r1)
  mflr      r0
  stw       r0, 0x1084(r1)
  li        r0, 0x1078
  stfd      f31, 0x1070(r1)
  vpkuhum   v31, v1, v0
  li        r0, 0x1068
  stfd      f30, 0x1060(r1)
  vpkuhum   v30, v1, v0
  li        r0, 0x1058
  stfd      f29, 0x1050(r1)
  vpkuhum   v29, v1, v0
  stmw      r21, 0x1024(r1)
  mr        r25, r5
  mr        r26, r6
  mr        r24, r3
  mr        r21, r4
  mullw     r27, r25, r26
  stw       r7, 0x18(r3)
  stw       r8, 0x1C(r3)
  stw       r25, 0x20(r3)
  mulli     r3, r27, 0x28
  stw       r26, 0x24(r24)
  addi      r3, r3, 0x10
  bl        -0x3F4C94
  lis       r4, 0x8042
  lis       r5, 0x8013
  subi      r4, r4, 0x6FC4
  mr        r7, r27
  addi      r5, r5, 0x3E64
  li        r6, 0x28
  bl        -0x35726C
  stw       r3, 0x28(r24)
  lis       r30, 0x4330
  xoris     r3, r25, 0x8000
  xoris     r0, r26, 0x8000
  lfs       f0, 0x0(r21)
  li        r28, 0
  stw       r3, 0x100C(r1)
  lfd       f31, 0x1FD0(r2)
  stfs      f0, 0x2C(r24)
  lfs       f29, 0x1FB8(r2)
  lfs       f0, 0x4(r21)
  stw       r30, 0x1008(r1)
  lfs       f30, 0x1FBC(r2)
  stfs      f0, 0x30(r24)
  lfd       f0, 0x1008(r1)
  lfs       f2, 0x8(r21)
  fsubs     f1, f0, f31
  stw       r0, 0x1014(r1)
  stfs      f2, 0x34(r24)
  lfs       f0, 0xC(r21)
  stw       r30, 0x1010(r1)
  stfs      f0, 0x38(r24)
  lfd       f0, 0x1010(r1)
  lfs       f2, 0x10(r21)
  fsubs     f0, f0, f31
  stfs      f2, 0x3C(r24)
  lfs       f2, 0x14(r21)
  stfs      f2, 0x40(r24)
  lfs       f3, 0xC(r21)
  lfs       f2, 0x0(r21)
  fsubs     f2, f3, f2
  fabs      f2, f2
  frsp      f2, f2
  fdivs     f1, f2, f1
  stfs      f1, 0x44(r24)
  lfs       f2, 0x14(r21)
  lfs       f1, 0x8(r21)
  fsubs     f1, f2, f1
  fabs      f1, f1
  frsp      f1, f1
  fdivs     f0, f1, f0
  stfs      f0, 0x48(r24)
  b         .loc_0x41C

.loc_0x12C:
  xoris     r31, r28, 0x8000
  li        r27, 0
  b         .loc_0x410

.loc_0x138:
  xoris     r0, r27, 0x8000
  li        r5, 0
  stw       r31, 0x1014(r1)
  mr        r3, r5
  lfs       f4, 0x44(r24)
  li        r29, 0
  stw       r30, 0x1010(r1)
  li        r4, 0
  lfs       f2, 0x2C(r24)
  lfd       f0, 0x1010(r1)
  stw       r0, 0x100C(r1)
  fsubs     f3, f0, f31
  lfs       f5, 0x48(r24)
  stw       r30, 0x1008(r1)
  lfs       f0, 0x34(r24)
  lfd       f1, 0x1008(r1)
  fmadds    f2, f3, f4, f2
  fsubs     f1, f1, f31
  fadds     f3, f2, f4
  fmadds    f0, f1, f5, f0
  fadds     f1, f0, f5
  b         .loc_0x390

.loc_0x190:
  lwz       r0, 0x24(r6)
  lwz       r6, 0x18(r24)
  add       r7, r0, r3
  lfs       f4, 0x1FB8(r2)
  lwz       r0, 0x0(r7)
  lfs       f6, 0x1FBC(r2)
  fmr       f5, f4
  mulli     r0, r0, 0xC
  lwz       r8, 0x24(r6)
  fmr       f7, f6
  add       r6, r8, r0
  lfs       f8, 0x0(r6)
  fcmpo     cr0, f4, f8
  ble-      .loc_0x1CC
  fmr       f4, f8

.loc_0x1CC:
  lfs       f9, 0x8(r6)
  fcmpo     cr0, f29, f9
  ble-      .loc_0x1DC
  fmr       f5, f9

.loc_0x1DC:
  fcmpo     cr0, f30, f8
  bge-      .loc_0x1E8
  fmr       f6, f8

.loc_0x1E8:
  fcmpo     cr0, f30, f9
  bge-      .loc_0x1F4
  fmr       f7, f9

.loc_0x1F4:
  lwz       r0, 0x4(r7)
  mulli     r0, r0, 0xC
  add       r6, r8, r0
  lfs       f8, 0x0(r6)
  fcmpo     cr0, f4, f8
  ble-      .loc_0x210
  fmr       f4, f8

.loc_0x210:
  lfs       f9, 0x8(r6)
  fcmpo     cr0, f5, f9
  ble-      .loc_0x220
  fmr       f5, f9

.loc_0x220:
  fcmpo     cr0, f6, f8
  bge-      .loc_0x22C
  fmr       f6, f8

.loc_0x22C:
  fcmpo     cr0, f7, f9
  bge-      .loc_0x238
  fmr       f7, f9

.loc_0x238:
  lwz       r0, 0x8(r7)
  mulli     r0, r0, 0xC
  add       r6, r8, r0
  lfs       f8, 0x0(r6)
  fcmpo     cr0, f4, f8
  ble-      .loc_0x254
  fmr       f4, f8

.loc_0x254:
  lfs       f9, 0x8(r6)
  fcmpo     cr0, f5, f9
  ble-      .loc_0x264
  fmr       f5, f9

.loc_0x264:
  fcmpo     cr0, f6, f8
  bge-      .loc_0x270
  fmr       f6, f8

.loc_0x270:
  fcmpo     cr0, f7, f9
  bge-      .loc_0x27C
  fmr       f7, f9

.loc_0x27C:
  fcmpo     cr0, f3, f4
  bge-      .loc_0x28C
  li        r0, 0
  b         .loc_0x2E0

.loc_0x28C:
  fcmpo     cr0, f6, f2
  bge-      .loc_0x29C
  li        r0, 0
  b         .loc_0x2E0

.loc_0x29C:
  fcmpo     cr0, f2, f4
  cror      2, 0, 0x2
  bne-      .loc_0x2BC
  fcmpo     cr0, f4, f3
  cror      2, 0, 0x2
  bne-      .loc_0x2BC
  li        r0, 0x1
  b         .loc_0x2E0

.loc_0x2BC:
  fcmpo     cr0, f4, f2
  cror      2, 0, 0x2
  bne-      .loc_0x2DC
  fcmpo     cr0, f2, f6
  cror      2, 0, 0x2
  bne-      .loc_0x2DC
  li        r0, 0x1
  b         .loc_0x2E0

.loc_0x2DC:
  li        r0, 0

.loc_0x2E0:
  rlwinm.   r0,r0,0,24,31
  bne-      .loc_0x2F0
  li        r0, 0
  b         .loc_0x368

.loc_0x2F0:
  fcmpo     cr0, f1, f5
  bge-      .loc_0x300
  li        r0, 0
  b         .loc_0x354

.loc_0x300:
  fcmpo     cr0, f7, f0
  bge-      .loc_0x310
  li        r0, 0
  b         .loc_0x354

.loc_0x310:
  fcmpo     cr0, f0, f5
  cror      2, 0, 0x2
  bne-      .loc_0x330
  fcmpo     cr0, f5, f1
  cror      2, 0, 0x2
  bne-      .loc_0x330
  li        r0, 0x1
  b         .loc_0x354

.loc_0x330:
  fcmpo     cr0, f5, f0
  cror      2, 0, 0x2
  bne-      .loc_0x350
  fcmpo     cr0, f0, f7
  cror      2, 0, 0x2
  bne-      .loc_0x350
  li        r0, 0x1
  b         .loc_0x354

.loc_0x350:
  li        r0, 0

.loc_0x354:
  rlwinm.   r0,r0,0,24,31
  bne-      .loc_0x364
  li        r0, 0
  b         .loc_0x368

.loc_0x364:
  li        r0, 0x1

.loc_0x368:
  rlwinm.   r0,r0,0,24,31
  beq-      .loc_0x388
  cmpwi     r29, 0x400
  bge-      .loc_0x388
  addi      r6, r1, 0x8
  addi      r29, r29, 0x1
  stwx      r4, r6, r5
  addi      r5, r5, 0x4

.loc_0x388:
  addi      r3, r3, 0x60
  addi      r4, r4, 0x1

.loc_0x390:
  lwz       r6, 0x1C(r24)
  lwz       r0, 0x1C(r6)
  cmpw      r4, r0
  blt+      .loc_0x190
  lwz       r0, 0x24(r24)
  cmpwi     r29, 0
  lwz       r3, 0x28(r24)
  mullw     r0, r28, r0
  add       r0, r27, r0
  mulli     r0, r0, 0x28
  add       r23, r3, r0
  ble-      .loc_0x40C
  mr        r3, r23
  mr        r4, r29
  lwz       r12, 0x0(r23)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  addi      r22, r1, 0x8
  li        r21, 0
  b         .loc_0x404

.loc_0x3E4:
  mr        r3, r23
  mr        r4, r22
  lwz       r12, 0x0(r23)
  lwz       r12, 0x40(r12)
  mtctr     r12
  bctrl     
  addi      r22, r22, 0x4
  addi      r21, r21, 0x1

.loc_0x404:
  cmpw      r21, r29
  blt+      .loc_0x3E4

.loc_0x40C:
  addi      r27, r27, 0x1

.loc_0x410:
  cmpw      r27, r26
  blt+      .loc_0x138
  addi      r28, r28, 0x1

.loc_0x41C:
  cmpw      r28, r25
  blt+      .loc_0x12C
  li        r0, 0x1078
  vmrghb    v31, v1, v0
  lfd       f31, 0x1070(r1)
  li        r0, 0x1068
  vmrghb    v30, v1, v0
  lfd       f30, 0x1060(r1)
  li        r0, 0x1058
  vmrghb    v29, v1, v0
  lfd       f29, 0x1050(r1)
  lmw       r21, 0x1024(r1)
  lwz       r0, 0x1084(r1)
  mtlr      r0
  addi      r1, r1, 0x1080
  blr
*/
}

/*
 * --INFO--
 * Address:	8041903C
 * Size:	000088
 */
void Sys::TriIndexList::__ct(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        -0x7CC0
  lis       r4, 0x804B
  lis       r3, 0x804B
  subi      r0, r4, 0x5324
  lis       r5, 0x804B
  stw       r0, 0x0(r31)
  subi      r0, r3, 0x120
  lis       r4, 0x804B
  lis       r3, 0x804B
  stw       r0, 0x0(r31)
  li        r7, 0
  subi      r6, r5, 0xF4
  li        r5, 0x1
  stb       r7, 0x18(r31)
  subi      r4, r4, 0xAC
  subi      r0, r3, 0x64
  mr        r3, r31
  stw       r6, 0x0(r31)
  stb       r5, 0x18(r31)
  stw       r7, 0x20(r31)
  stw       r7, 0x1C(r31)
  stw       r7, 0x24(r31)
  stw       r4, 0x0(r31)
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
 * Address:	........
 * Size:	00006C
 */
void Sys::GridDivider::write( (Stream &))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	804190C4
 * Size:	0000D4
 */
void ArrayContainer<Sys::Triangle>::write(Stream &)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stmw      r27, 0xC(r1)
  mr        r28, r4
  mr        r27, r3
  lwz       r4, 0x14(r3)
  mr        r3, r28
  bl        -0x50C8
  lwz       r4, 0x414(r28)
  mr        r3, r28
  bl        -0x4CBC
  lwz       r4, 0x20(r27)
  mr        r3, r28
  bl        -0x393C
  mr        r3, r28
  addi      r4, r2, 0x1FD8
  crclr     6, 0x6
  bl        -0x4F30
  lis       r3, 0x804A
  li        r29, 0
  subi      r31, r3, 0x6858
  li        r30, 0
  b         .loc_0xAC

.loc_0x60:
  lwz       r4, 0x414(r28)
  mr        r3, r28
  bl        -0x4CF8
  mr        r3, r27
  lwz       r0, 0x24(r27)
  lwz       r12, 0x0(r27)
  mr        r4, r28
  add       r5, r0, r30
  lwz       r12, 0x2C(r12)
  mtctr     r12
  bctrl     
  lwz       r6, 0x20(r27)
  mr        r3, r28
  mr        r4, r31
  mr        r5, r29
  crclr     6, 0x6
  bl        -0x4F88
  addi      r30, r30, 0x60
  addi      r29, r29, 0x1

.loc_0xAC:
  lwz       r0, 0x20(r27)
  cmpw      r29, r0
  blt+      .loc_0x60
  mr        r3, r28
  bl        -0x50E0
  lmw       r27, 0xC(r1)
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	80419198
 * Size:	000004
 */
void ArrayContainer<Sys::Triangle>::writeObject(Stream &, Sys::Triangle &)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000C0
 */
void Sys::GridInfo::write( (Stream &))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8041919C
 * Size:	000248
 */
void Sys::GridDivider::read( (Stream &))
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  stw       r0, 0x34(r1)
  stmw      r27, 0x1C(r1)
  mr        r30, r3
  mr        r31, r4
  li        r3, 0x50
  bl        -0x3F5314
  mr.       r29, r3
  beq-      .loc_0x98
  bl        -0x7E34
  lis       r4, 0x804B
  lis       r3, 0x804B
  subi      r0, r4, 0x5324
  lis       r4, 0x804B
  stw       r0, 0x0(r29)
  addi      r0, r3, 0x2C
  lis       r3, 0x804F
  li        r6, 0
  stw       r0, 0x0(r29)
  subi      r5, r4, 0x1C
  li        r4, 0x1
  subi      r0, r3, 0x4A40
  stb       r6, 0x18(r29)
  lfs       f1, 0x1FDC(r2)
  stw       r5, 0x0(r29)
  lfs       f0, 0x1FE0(r2)
  stb       r4, 0x18(r29)
  stw       r6, 0x20(r29)
  stw       r6, 0x1C(r29)
  stw       r6, 0x24(r29)
  stw       r0, 0x0(r29)
  stfs      f1, 0x28(r29)
  stfs      f1, 0x2C(r29)
  stfs      f1, 0x30(r29)
  stfs      f0, 0x34(r29)
  stfs      f0, 0x38(r29)
  stfs      f0, 0x3C(r29)

.loc_0x98:
  stw       r29, 0x18(r30)
  mr        r4, r31
  lwz       r3, 0x18(r30)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x38(r12)
  mtctr     r12
  bctrl     
  li        r3, 0x28
  bl        -0x3F53B0
  mr.       r0, r3
  beq-      .loc_0xCC
  bl        0x71C
  mr        r0, r3

.loc_0xCC:
  stw       r0, 0x1C(r30)
  mr        r4, r31
  lwz       r3, 0x1C(r30)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x38(r12)
  mtctr     r12
  bctrl     
  mr        r4, r31
  addi      r3, r30, 0x2C
  bl        -0x7940
  mr        r3, r31
  bl        -0x4804
  stw       r3, 0x20(r30)
  mr        r3, r31
  bl        -0x4810
  stw       r3, 0x24(r30)
  mr        r3, r31
  bl        -0x4500
  stfs      f1, 0x44(r30)
  mr        r3, r31
  bl        -0x450C
  stfs      f1, 0x48(r30)
  lwz       r27, 0x24(r30)
  lwz       r28, 0x20(r30)
  mullw     r29, r28, r27
  mulli     r3, r29, 0x28
  addi      r3, r3, 0x10
  bl        -0x3F5328
  lis       r4, 0x8042
  lis       r5, 0x8013
  subi      r4, r4, 0x6FC4
  mr        r7, r29
  addi      r5, r5, 0x3E64
  li        r6, 0x28
  bl        -0x357900
  stw       r3, 0x28(r30)
  lis       r3, 0x4330
  xoris     r4, r28, 0x8000
  xoris     r0, r27, 0x8000
  lfs       f0, 0x2C(r30)
  li        r29, 0
  stw       r4, 0xC(r1)
  mr        r27, r29
  lfd       f2, 0x1FD0(r2)
  stfs      f0, 0x2C(r30)
  lfs       f0, 0x30(r30)
  stw       r3, 0x8(r1)
  stfs      f0, 0x30(r30)
  lfd       f0, 0x8(r1)
  lfs       f3, 0x34(r30)
  fsubs     f1, f0, f2
  stw       r0, 0x14(r1)
  stfs      f3, 0x34(r30)
  lfs       f0, 0x38(r30)
  stw       r3, 0x10(r1)
  stfs      f0, 0x38(r30)
  lfd       f0, 0x10(r1)
  lfs       f3, 0x38(r30)
  fsubs     f0, f0, f2
  lfs       f2, 0x2C(r30)
  fsubs     f2, f3, f2
  fabs      f2, f2
  frsp      f2, f2
  fdivs     f1, f2, f1
  stfs      f1, 0x44(r30)
  lfs       f2, 0x40(r30)
  lfs       f1, 0x34(r30)
  fsubs     f1, f2, f1
  fabs      f1, f1
  frsp      f1, f1
  fdivs     f0, f1, f0
  stfs      f0, 0x48(r30)
  b         .loc_0x214

.loc_0x1F0:
  lwz       r0, 0x28(r30)
  mr        r4, r31
  add       r3, r0, r27
  lwz       r12, 0x0(r3)
  lwz       r12, 0x38(r12)
  mtctr     r12
  bctrl     
  addi      r27, r27, 0x28
  addi      r29, r29, 0x1

.loc_0x214:
  lwz       r3, 0x20(r30)
  lwz       r0, 0x24(r30)
  mullw     r0, r3, r0
  cmpw      r29, r0
  blt+      .loc_0x1F0
  lwz       r3, 0x1C(r30)
  lwz       r4, 0x18(r30)
  bl        0xCC
  lmw       r27, 0x1C(r1)
  lwz       r0, 0x34(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	804193E4
 * Size:	0000B0
 */
void ArrayContainer<Sys::Triangle>::read(Stream &)
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
  mr        r3, r29
  bl        -0x497C
  stw       r3, 0x20(r28)
  mr        r3, r28
  lwz       r12, 0x0(r28)
  lwz       r4, 0x20(r28)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x20(r28)
  li        r30, 0
  li        r31, 0
  stw       r0, 0x1C(r28)
  b         .loc_0x84

.loc_0x5C:
  mr        r3, r28
  lwz       r0, 0x24(r28)
  lwz       r12, 0x0(r28)
  mr        r4, r29
  add       r5, r0, r31
  lwz       r12, 0x30(r12)
  mtctr     r12
  bctrl     
  addi      r31, r31, 0x60
  addi      r30, r30, 0x1

.loc_0x84:
  lwz       r0, 0x20(r28)
  cmpw      r30, r0
  blt+      .loc_0x5C
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
 * Address:	80419494
 * Size:	000004
 */
void ArrayContainer<Sys::Triangle>::readObject(Stream &, Sys::Triangle &)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	80419498
 * Size:	000074
 */
void Sys::TriangleTable::createTriangleSphere( (Sys::VertexTable &))
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
  b         .loc_0x48

.loc_0x30:
  lwz       r0, 0x24(r28)
  mr        r4, r29
  add       r3, r0, r31
  bl        -0x2B7C
  addi      r31, r31, 0x60
  addi      r30, r30, 0x1

.loc_0x48:
  lwz       r0, 0x20(r28)
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
 * Address:	8041950C
 * Size:	000088
 */
void Sys::TriIndexList::constructClone( (Sys::TriangleTable &))
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
  lwz       r12, 0x0(r3)
  lwz       r4, 0x1C(r4)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  li        r0, 0
  stw       r0, 0x8(r1)
  b         .loc_0x60

.loc_0x3C:
  mr        r3, r30
  addi      r4, r1, 0x8
  lwz       r12, 0x0(r30)
  lwz       r12, 0x40(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x8(r1)
  addi      r0, r3, 0x1
  stw       r0, 0x8(r1)

.loc_0x60:
  lwz       r3, 0x8(r1)
  lwz       r0, 0x1C(r31)
  cmpw      r3, r0
  blt+      .loc_0x3C
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
 * Address:	80419594
 * Size:	000150
 */
void getMinMax__Q23Sys12TriIndexListFRQ23Sys11VertexTableRQ23Sys13TriangleTableR10Vector3<float>R10Vector3<float>RfRf(void)
{
/*
.loc_0x0:
  stwu      r1, -0x40(r1)
  lfs       f1, 0x1FE4(r2)
  stw       r31, 0x3C(r1)
  lfs       f0, 0x1FE8(r2)
  stw       r30, 0x38(r1)
  stw       r29, 0x34(r1)
  li        r29, 0
  stw       r28, 0x30(r1)
  li        r28, 0
  stfs      f1, 0x0(r8)
  stfs      f0, 0x0(r9)
  b         .loc_0x12C

.loc_0x30:
  lwz       r10, 0x24(r3)
  li        r0, 0x3
  lwz       r11, 0x24(r5)
  addi      r30, r1, 0x8
  lwzx      r10, r10, r29
  lwz       r31, 0x24(r4)
  mulli     r10, r10, 0x60
  add       r10, r11, r10
  lwz       r12, 0x0(r10)
  lwz       r11, 0x4(r10)
  lwz       r10, 0x8(r10)
  mulli     r12, r12, 0xC
  add       r12, r31, r12
  mulli     r11, r11, 0xC
  lfs       f1, 0x0(r12)
  lfs       f0, 0x4(r12)
  lfs       f6, 0x8(r12)
  add       r11, r31, r11
  stfs      f1, 0x8(r1)
  mulli     r10, r10, 0xC
  lfs       f5, 0x0(r11)
  lfs       f4, 0x4(r11)
  lfs       f3, 0x8(r11)
  add       r10, r31, r10
  stfs      f0, 0xC(r1)
  lfs       f2, 0x0(r10)
  lfs       f1, 0x4(r10)
  lfs       f0, 0x8(r10)
  stfs      f6, 0x10(r1)
  stfs      f5, 0x14(r1)
  stfs      f4, 0x18(r1)
  stfs      f3, 0x1C(r1)
  stfs      f2, 0x20(r1)
  stfs      f1, 0x24(r1)
  stfs      f0, 0x28(r1)
  mtctr     r0

.loc_0xC0:
  lfs       f1, 0x4(r30)
  lfs       f0, 0x4(r7)
  lfs       f3, 0x0(r30)
  lfs       f2, 0x0(r7)
  fsubs     f1, f1, f0
  lfs       f0, 0x4(r6)
  fsubs     f2, f3, f2
  lfs       f4, 0x8(r30)
  lfs       f3, 0x8(r7)
  fmuls     f0, f1, f0
  lfs       f1, 0x0(r6)
  fsubs     f3, f4, f3
  fmadds    f1, f2, f1, f0
  lfs       f2, 0x8(r6)
  lfs       f0, 0x0(r9)
  fmadds    f1, f3, f2, f1
  fcmpo     cr0, f1, f0
  ble-      .loc_0x10C
  stfs      f1, 0x0(r9)

.loc_0x10C:
  lfs       f0, 0x0(r8)
  fcmpo     cr0, f1, f0
  bge-      .loc_0x11C
  stfs      f1, 0x0(r8)

.loc_0x11C:
  addi      r30, r30, 0xC
  bdnz+     .loc_0xC0
  addi      r29, r29, 0x4
  addi      r28, r28, 0x1

.loc_0x12C:
  lwz       r0, 0x1C(r3)
  cmpw      r28, r0
  blt+      .loc_0x30
  lwz       r31, 0x3C(r1)
  lwz       r30, 0x38(r1)
  lwz       r29, 0x34(r1)
  lwz       r28, 0x30(r1)
  addi      r1, r1, 0x40
  blr
*/
}

/*
 * --INFO--
 * Address:	804196E4
 * Size:	000294
 */
void makeCovarianceMatrix__Q23Sys12TriIndexListFRQ23Sys11VertexTableRQ23Sys13TriangleTableR8Matrix3fR10Vector3<float>(void)
{
/*
.loc_0x0:
  stwu      r1, -0x70(r1)
  lis       r0, 0x4330
  lfd       f2, 0x1FD0(r2)
  li        r11, 0
  stmw      r18, 0x38(r1)
  lfs       f0, 0x1FA8(r2)
  stw       r0, 0x30(r1)
  lfs       f3, 0x1FAC(r2)
  lwz       r19, 0x1C(r3)
  xoris     r0, r19, 0x8000
  stfs      f0, 0x0(r7)
  stw       r0, 0x34(r1)
  lfd       f1, 0x30(r1)
  stfs      f0, 0x4(r7)
  fsubs     f1, f1, f2
  lfs       f2, 0x1FEC(r2)
  stfs      f0, 0x8(r7)
  fmuls     f1, f2, f1
  fdivs     f0, f3, f1
  mtctr     r19
  cmpwi     r19, 0
  ble-      .loc_0xFC

.loc_0x58:
  lwz       r8, 0x24(r3)
  lwz       r9, 0x24(r5)
  lwzx      r0, r8, r11
  addi      r11, r11, 0x4
  lwz       r12, 0x24(r4)
  mulli     r0, r0, 0x60
  lfs       f3, 0x0(r7)
  lfs       f6, 0x4(r7)
  lfs       f9, 0x8(r7)
  add       r10, r9, r0
  lwz       r0, 0x0(r10)
  lwz       r8, 0x4(r10)
  mulli     r9, r0, 0xC
  lwz       r0, 0x8(r10)
  add       r9, r12, r9
  mulli     r8, r8, 0xC
  lfs       f2, 0x0(r9)
  lfs       f5, 0x4(r9)
  lfs       f8, 0x8(r9)
  add       r8, r12, r8
  lfs       f1, 0x0(r8)
  mulli     r0, r0, 0xC
  lfs       f4, 0x4(r8)
  lfs       f7, 0x8(r8)
  fadds     f2, f2, f1
  add       r8, r12, r0
  fadds     f5, f5, f4
  lfs       f1, 0x0(r8)
  fadds     f8, f8, f7
  lfs       f4, 0x4(r8)
  fadds     f1, f2, f1
  lfs       f7, 0x8(r8)
  fadds     f2, f5, f4
  fadds     f4, f8, f7
  fadds     f1, f3, f1
  fadds     f2, f6, f2
  fadds     f3, f9, f4
  stfs      f1, 0x0(r7)
  stfs      f2, 0x4(r7)
  stfs      f3, 0x8(r7)
  bdnz+     .loc_0x58

.loc_0xFC:
  lfs       f1, 0x0(r7)
  addi      r18, r1, 0x14
  lfs       f2, 0x4(r7)
  addi      r0, r1, 0x20
  fmuls     f1, f1, f0
  lfs       f3, 0x8(r7)
  addi      r27, r1, 0x8
  fmuls     f2, f2, f0
  fmuls     f3, f3, f0
  mr        r31, r7
  stfs      f1, 0x0(r7)
  mr        r30, r18
  mr        r29, r0
  mr        r28, r27
  stfs      f2, 0x4(r7)
  li        r25, 0
  stfs      f3, 0x8(r7)

.loc_0x140:
  mr        r8, r7
  mr        r9, r18
  mr        r10, r0
  mr        r11, r27
  mr        r12, r6
  li        r24, 0

.loc_0x158:
  li        r26, 0
  lfs       f11, 0x1FA8(r2)
  mtctr     r19
  cmpwi     r19, 0
  ble-      .loc_0x240

.loc_0x16C:
  lwz       r20, 0x24(r3)
  lwz       r21, 0x24(r5)
  lwzx      r22, r20, r26
  addi      r26, r26, 0x4
  lwz       r20, 0x24(r4)
  mulli     r22, r22, 0x60
  lfs       f9, 0x0(r8)
  lfs       f10, 0x0(r31)
  add       r23, r21, r22
  lwz       r22, 0x4(r23)
  lwz       r21, 0x0(r23)
  mulli     r22, r22, 0xC
  lwz       r23, 0x8(r23)
  add       r22, r20, r22
  lfs       f3, 0x0(r22)
  mulli     r21, r21, 0xC
  lfs       f2, 0x4(r22)
  lfs       f1, 0x8(r22)
  stfs      f3, 0x14(r1)
  add       r21, r20, r21
  lfs       f8, 0x0(r21)
  mulli     r22, r23, 0xC
  lfs       f7, 0x4(r21)
  lfs       f3, 0x8(r21)
  stfs      f2, 0x18(r1)
  add       r20, r20, r22
  lfs       f6, 0x0(r20)
  stfs      f1, 0x1C(r1)
  lfs       f5, 0x4(r20)
  lfs       f2, 0x0(r30)
  lfs       f1, 0x0(r9)
  lfs       f4, 0x8(r20)
  fsubs     f2, f2, f10
  fsubs     f1, f1, f9
  stfs      f8, 0x20(r1)
  stfs      f7, 0x24(r1)
  fmuls     f1, f2, f1
  stfs      f3, 0x28(r1)
  lfs       f3, 0x0(r29)
  lfs       f2, 0x0(r10)
  fsubs     f3, f3, f10
  stfs      f6, 0x8(r1)
  fsubs     f2, f2, f9
  stfs      f5, 0xC(r1)
  stfs      f4, 0x10(r1)
  fmadds    f1, f3, f2, f1
  lfs       f3, 0x0(r28)
  lfs       f2, 0x0(r11)
  fsubs     f3, f3, f10
  fsubs     f2, f2, f9
  fmadds    f1, f3, f2, f1
  fadds     f11, f11, f1
  bdnz+     .loc_0x16C

.loc_0x240:
  fmuls     f11, f11, f0
  addi      r24, r24, 0x1
  cmpwi     r24, 0x3
  addi      r11, r11, 0x4
  addi      r8, r8, 0x4
  addi      r9, r9, 0x4
  stfs      f11, 0x0(r12)
  addi      r12, r12, 0x4
  addi      r10, r10, 0x4
  blt+      .loc_0x158
  addi      r25, r25, 0x1
  addi      r31, r31, 0x4
  cmpwi     r25, 0x3
  addi      r30, r30, 0x4
  addi      r29, r29, 0x4
  addi      r28, r28, 0x4
  addi      r6, r6, 0xC
  blt+      .loc_0x140
  lmw       r18, 0x38(r1)
  addi      r1, r1, 0x70
  blr
*/
}

/*
 * --INFO--
 * Address:	80419978
 * Size:	000004
 */
void Sys::TriIndexList::draw( (Graphics &, Sys::VertexTable &, Sys::TriangleTable &, bool))
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	8041997C
 * Size:	00007C
 */
void Sys::TriangleTable::__ct(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        -0x8600
  lis       r4, 0x804B
  lis       r3, 0x804F
  subi      r0, r4, 0x5324
  lis       r4, 0x804F
  stw       r0, 0x0(r31)
  subi      r0, r3, 0x4968
  lis       r3, 0x804F
  li        r6, 0
  stw       r0, 0x0(r31)
  subi      r5, r4, 0x49B0
  li        r4, 0x1
  subi      r0, r3, 0x49F8
  stb       r6, 0x18(r31)
  mr        r3, r31
  stw       r5, 0x0(r31)
  stb       r4, 0x18(r31)
  stw       r6, 0x20(r31)
  stw       r6, 0x1C(r31)
  stw       r6, 0x24(r31)
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
 * Address:	804199F8
 * Size:	000080
 */
void ArrayContainer<Sys::Triangle>::~ArrayContainer()
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
  lis       r4, 0x804F
  subi      r0, r4, 0x49B0
  stw       r0, 0x0(r30)
  beq-      .loc_0x54
  lis       r4, 0x804F
  subi      r0, r4, 0x4968
  stw       r0, 0x0(r30)
  beq-      .loc_0x54
  lis       r5, 0x804B
  li        r4, 0
  subi      r0, r5, 0x5324
  stw       r0, 0x0(r30)
  bl        -0x84C0

.loc_0x54:
  extsh.    r0, r31
  ble-      .loc_0x64
  mr        r3, r30
  bl        -0x3F59A4

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
 * Address:	80419A78
 * Size:	000070
 */
void Container<Sys::Triangle>::~Container()
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
  lis       r4, 0x804F
  subi      r0, r4, 0x4968
  stw       r0, 0x0(r30)
  beq-      .loc_0x44
  lis       r5, 0x804B
  li        r4, 0
  subi      r0, r5, 0x5324
  stw       r0, 0x0(r30)
  bl        -0x8530

.loc_0x44:
  extsh.    r0, r31
  ble-      .loc_0x54
  mr        r3, r30
  bl        -0x3F5A14

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
 * Size:	000060
 */
void Sys::TriangleTable::findMaxVertexIndex(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80419AE8
 * Size:	00013C
 */
void Sys::VertexTable::transform( (Matrixf &))
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  stw       r0, 0x34(r1)
  stmw      r27, 0x1C(r1)
  mr        r27, r3
  mr        r28, r4
  li        r30, 0
  li        r31, 0
  b         .loc_0x5C

.loc_0x24:
  lwz       r0, 0x24(r27)
  mr        r3, r28
  addi      r5, r1, 0x8
  add       r29, r0, r31
  mr        r4, r29
  bl        -0x32EF48
  lfs       f1, 0xC(r1)
  addi      r31, r31, 0xC
  lfs       f2, 0x10(r1)
  addi      r30, r30, 0x1
  lfs       f0, 0x8(r1)
  stfs      f0, 0x0(r29)
  stfs      f1, 0x4(r29)
  stfs      f2, 0x8(r29)

.loc_0x5C:
  lwz       r0, 0x1C(r27)
  cmpw      r30, r0
  blt+      .loc_0x24
  lfs       f1, 0x1FDC(r2)
  li        r3, 0
  lfs       f0, 0x1FE0(r2)
  mr        r5, r3
  stfs      f1, 0x28(r27)
  stfs      f1, 0x2C(r27)
  stfs      f1, 0x30(r27)
  stfs      f0, 0x34(r27)
  stfs      f0, 0x38(r27)
  stfs      f0, 0x3C(r27)
  b         .loc_0x11C

.loc_0x94:
  lwz       r0, 0x24(r27)
  lfs       f0, 0x28(r27)
  add       r4, r0, r5
  lfs       f1, 0x0(r4)
  fcmpo     cr0, f1, f0
  bge-      .loc_0xB0
  stfs      f1, 0x28(r27)

.loc_0xB0:
  lfs       f1, 0x4(r4)
  lfs       f0, 0x2C(r27)
  fcmpo     cr0, f1, f0
  bge-      .loc_0xC4
  stfs      f1, 0x2C(r27)

.loc_0xC4:
  lfs       f1, 0x8(r4)
  lfs       f0, 0x30(r27)
  fcmpo     cr0, f1, f0
  bge-      .loc_0xD8
  stfs      f1, 0x30(r27)

.loc_0xD8:
  lfs       f1, 0x0(r4)
  lfs       f0, 0x34(r27)
  fcmpo     cr0, f1, f0
  ble-      .loc_0xEC
  stfs      f1, 0x34(r27)

.loc_0xEC:
  lfs       f1, 0x4(r4)
  lfs       f0, 0x38(r27)
  fcmpo     cr0, f1, f0
  ble-      .loc_0x100
  stfs      f1, 0x38(r27)

.loc_0x100:
  lfs       f1, 0x8(r4)
  lfs       f0, 0x3C(r27)
  fcmpo     cr0, f1, f0
  ble-      .loc_0x114
  stfs      f1, 0x3C(r27)

.loc_0x114:
  addi      r5, r5, 0xC
  addi      r3, r3, 0x1

.loc_0x11C:
  lwz       r0, 0x1C(r27)
  cmpw      r3, r0
  blt+      .loc_0x94
  lmw       r27, 0x1C(r1)
  lwz       r0, 0x34(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	80419C24
 * Size:	0000D4
 */
void Sys::VertexTable::write( (Stream &))
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stmw      r27, 0xC(r1)
  mr        r28, r4
  mr        r27, r3
  lwz       r4, 0x14(r3)
  mr        r3, r28
  bl        -0x5C28
  lwz       r4, 0x414(r28)
  mr        r3, r28
  bl        -0x581C
  lwz       r4, 0x20(r27)
  mr        r3, r28
  bl        -0x449C
  mr        r3, r28
  addi      r4, r2, 0x1FD8
  crclr     6, 0x6
  bl        -0x5A90
  lis       r3, 0x804A
  li        r29, 0
  subi      r31, r3, 0x6858
  li        r30, 0
  b         .loc_0xAC

.loc_0x60:
  lwz       r4, 0x414(r28)
  mr        r3, r28
  bl        -0x5858
  mr        r3, r27
  lwz       r0, 0x24(r27)
  lwz       r12, 0x0(r27)
  mr        r4, r28
  add       r5, r0, r30
  lwz       r12, 0x2C(r12)
  mtctr     r12
  bctrl     
  lwz       r6, 0x20(r27)
  mr        r3, r28
  mr        r4, r31
  mr        r5, r29
  crclr     6, 0x6
  bl        -0x5AE8
  addi      r30, r30, 0xC
  addi      r29, r29, 0x1

.loc_0xAC:
  lwz       r0, 0x20(r27)
  cmpw      r29, r0
  blt+      .loc_0x60
  mr        r3, r28
  bl        -0x5C40
  lmw       r27, 0xC(r1)
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	80419CF8
 * Size:	000024
 */
void writeObject__Q23Sys11VertexTableFR6StreamR10Vector3<float>(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  mr        r3, r5
  stw       r0, 0x14(r1)
  bl        -0x8320
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80419D1C
 * Size:	000090
 */
void Sys::VertexTable::__dt(void)
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
  beq-      .loc_0x74
  lis       r4, 0x804F
  subi      r0, r4, 0x4A40
  stw       r0, 0x0(r30)
  beq-      .loc_0x64
  lis       r4, 0x804B
  subi      r0, r4, 0x1C
  stw       r0, 0x0(r30)
  beq-      .loc_0x64
  lis       r4, 0x804B
  addi      r0, r4, 0x2C
  stw       r0, 0x0(r30)
  beq-      .loc_0x64
  lis       r5, 0x804B
  li        r4, 0
  subi      r0, r5, 0x5324
  stw       r0, 0x0(r30)
  bl        -0x87F4

.loc_0x64:
  extsh.    r0, r31
  ble-      .loc_0x74
  mr        r3, r30
  bl        -0x3F5CD8

.loc_0x74:
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
 * Address:	80419DAC
 * Size:	000024
 */
void readObject__Q23Sys11VertexTableFR6StreamR10Vector3<float>(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  mr        r3, r5
  stw       r0, 0x14(r1)
  bl        -0x842C
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80419DD0
 * Size:	000090
 */
void Sys::TriangleTable::__dt(void)
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
  beq-      .loc_0x74
  lis       r4, 0x804F
  subi      r0, r4, 0x49F8
  stw       r0, 0x0(r30)
  beq-      .loc_0x64
  lis       r4, 0x804F
  subi      r0, r4, 0x49B0
  stw       r0, 0x0(r30)
  beq-      .loc_0x64
  lis       r4, 0x804F
  subi      r0, r4, 0x4968
  stw       r0, 0x0(r30)
  beq-      .loc_0x64
  lis       r5, 0x804B
  li        r4, 0
  subi      r0, r5, 0x5324
  stw       r0, 0x0(r30)
  bl        -0x88A8

.loc_0x64:
  extsh.    r0, r31
  ble-      .loc_0x74
  mr        r3, r30
  bl        -0x3F5D8C

.loc_0x74:
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
 * Address:	80419E60
 * Size:	000088
 */
void Sys::TriangleTable::readObject( (Stream &, Sys::Triangle &))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r5
  stw       r30, 0x8(r1)
  mr        r30, r4
  mr        r3, r30
  bl        -0x53F0
  stw       r3, 0x0(r31)
  mr        r3, r30
  bl        -0x53FC
  stw       r3, 0x4(r31)
  mr        r3, r30
  bl        -0x5408
  stw       r3, 0x8(r31)
  mr        r4, r30
  addi      r3, r31, 0xC
  bl        -0x8404
  mr        r4, r30
  addi      r3, r31, 0x1C
  bl        -0x8410
  mr        r4, r30
  addi      r3, r31, 0x2C
  bl        -0x841C
  mr        r4, r30
  addi      r3, r31, 0x3C
  bl        -0x8428
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
 * Address:	80419EE8
 * Size:	000088
 */
void Sys::TriangleTable::writeObject( (Stream &, Sys::Triangle &))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r5
  stw       r30, 0x8(r1)
  mr        r30, r4
  mr        r3, r30
  lwz       r4, 0x0(r5)
  bl        -0x474C
  lwz       r4, 0x4(r31)
  mr        r3, r30
  bl        -0x4758
  lwz       r4, 0x8(r31)
  mr        r3, r30
  bl        -0x4764
  mr        r4, r30
  addi      r3, r31, 0xC
  bl        -0x84F0
  mr        r4, r30
  addi      r3, r31, 0x1C
  bl        -0x84FC
  mr        r4, r30
  addi      r3, r31, 0x2C
  bl        -0x8508
  mr        r4, r30
  addi      r3, r31, 0x3C
  bl        -0x8514
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
 * Address:	80419F70
 * Size:	000034
 */
void Sys::GridDivider::getBoundBox( (BoundBox &))
{
/*
.loc_0x0:
  lfs       f0, 0x2C(r3)
  stfs      f0, 0x0(r4)
  lfs       f0, 0x30(r3)
  stfs      f0, 0x4(r4)
  lfs       f0, 0x34(r3)
  stfs      f0, 0x8(r4)
  lfs       f0, 0x38(r3)
  stfs      f0, 0xC(r4)
  lfs       f0, 0x3C(r3)
  stfs      f0, 0x10(r4)
  lfs       f0, 0x40(r3)
  stfs      f0, 0x14(r4)
  blr
*/
}

/*
 * --INFO--
 * Address:	80419FA4
 * Size:	000010
 */
void ArrayContainer<Sys::Triangle>::setArray(Sys::Triangle *, int)
{
/*
.loc_0x0:
  stw       r4, 0x24(r3)
  stw       r5, 0x20(r3)
  stw       r5, 0x1C(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	80419FB4
 * Size:	000010
 */
void ArrayContainer<Sys::Triangle>::get(void *)
{
/*
.loc_0x0:
  mulli     r0, r4, 0x60
  lwz       r3, 0x24(r3)
  add       r3, r3, r0
  blr
*/
}

/*
 * --INFO--
 * Address:	80419FC4
 * Size:	000008
 */
void ArrayContainer<Sys::Triangle>::getNext(void *)
{
/*
.loc_0x0:
  addi      r3, r4, 0x1
  blr
*/
}

/*
 * --INFO--
 * Address:	80419FCC
 * Size:	000008
 */
void ArrayContainer<Sys::Triangle>::getStart()
{
/*
.loc_0x0:
  li        r3, 0
  blr
*/
}

/*
 * --INFO--
 * Address:	80419FD4
 * Size:	000008
 */
void ArrayContainer<Sys::Triangle>::getEnd()
{
/*
.loc_0x0:
  lwz       r3, 0x1C(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	80419FDC
 * Size:	000010
 */
void ArrayContainer<Sys::Triangle>::getAt(int)
{
/*
.loc_0x0:
  mulli     r0, r4, 0x60
  lwz       r3, 0x24(r3)
  add       r3, r3, r0
  blr
*/
}

/*
 * --INFO--
 * Address:	80419FEC
 * Size:	000008
 */
void ArrayContainer<Sys::Triangle>::getTo()
{
/*
.loc_0x0:
  lwz       r3, 0x20(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	80419FF4
 * Size:	00002C
 */
void Container<Sys::Triangle>::getObject(void *)
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
 * Address:	8041A020
 * Size:	000008
 */
void Container<Sys::Triangle>::getAt(int)
{
/*
.loc_0x0:
  li        r3, 0
  blr
*/
}

/*
 * --INFO--
 * Address:	8041A028
 * Size:	000008
 */
void Container<Sys::Triangle>::getTo()
{
/*
.loc_0x0:
  li        r3, 0
  blr
*/
}
