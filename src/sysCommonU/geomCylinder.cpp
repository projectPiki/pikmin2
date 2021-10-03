

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
 * Size:	000104
 */
void __ct__Q23Sys8CylinderFRC10Vector3<float>RC10Vector3<float>f(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80421628
 * Size:	00003C
 */
void __ct__Q23Sys8CylinderFRC10Vector3<float>RC10Vector3<float>ff(void)
{
/*
.loc_0x0:
  lfs       f3, 0x0(r4)
  lfs       f0, 0x4(r4)
  stfs      f3, 0x0(r3)
  lfs       f3, 0x8(r4)
  stfs      f0, 0x4(r3)
  lfs       f0, 0x0(r5)
  stfs      f3, 0x8(r3)
  lfs       f3, 0x4(r5)
  stfs      f0, 0xC(r3)
  lfs       f0, 0x8(r5)
  stfs      f3, 0x10(r3)
  stfs      f0, 0x14(r3)
  stfs      f1, 0x18(r3)
  stfs      f2, 0x1C(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	80421664
 * Size:	000100
 */
void set__Q23Sys8CylinderFRC10Vector3<float>RC10Vector3<float>f(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stfd      f31, 0x10(r1)
  psq_st    f31,0x18(r1),0,0
  stw       r31, 0xC(r1)
  lfs       f2, 0x0(r4)
  mr        r31, r3
  lfs       f0, 0x0(r5)
  fmr       f31, f1
  lfs       f4, 0x4(r4)
  lfs       f3, 0x4(r5)
  fadds     f1, f2, f0
  lfs       f5, 0x2088(r2)
  fsubs     f0, f0, f2
  fadds     f2, f4, f3
  lfs       f8, 0x8(r4)
  lfs       f7, 0x8(r5)
  fmuls     f1, f1, f5
  fadds     f6, f8, f7
  fmuls     f2, f2, f5
  stfs      f1, 0x0(r3)
  fsubs     f3, f3, f4
  fmuls     f1, f6, f5
  stfs      f2, 0x4(r3)
  fsubs     f2, f7, f8
  stfs      f1, 0x8(r3)
  stfs      f0, 0xC(r3)
  stfs      f3, 0x10(r3)
  stfs      f2, 0x14(r3)
  lfs       f1, 0xC(r3)
  lfs       f0, 0x10(r3)
  lfs       f2, 0x14(r3)
  fmuls     f1, f1, f1
  fmuls     f0, f0, f0
  fmuls     f2, f2, f2
  fadds     f0, f1, f0
  fadds     f1, f2, f0
  bl        -0xFEF8
  lfs       f0, 0x208C(r2)
  fcmpo     cr0, f1, f0
  ble-      .loc_0xD8
  lfs       f2, 0x2090(r2)
  lfs       f0, 0xC(r31)
  fdivs     f2, f2, f1
  fmuls     f0, f0, f2
  stfs      f0, 0xC(r31)
  lfs       f0, 0x10(r31)
  fmuls     f0, f0, f2
  stfs      f0, 0x10(r31)
  lfs       f0, 0x14(r31)
  fmuls     f0, f0, f2
  stfs      f0, 0x14(r31)
  b         .loc_0xDC

.loc_0xD8:
  fmr       f1, f0

.loc_0xDC:
  stfs      f1, 0x18(r31)
  stfs      f31, 0x1C(r31)
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
 * Size:	000188
 */
void Sys::Cylinder::intersect( (Plane const &))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80421764
 * Size:	000190
 */
void Sys::Cylinder::culled( (Plane const &))
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
  stfd      f26, 0x40(r1)
  psq_st    f26,0x48(r1),0,0
  stfd      f25, 0x30(r1)
  psq_st    f25,0x38(r1),0,0
  stfd      f24, 0x20(r1)
  psq_st    f24,0x28(r1),0,0
  stfd      f23, 0x10(r1)
  psq_st    f23,0x18(r1),0,0
  stw       r31, 0xC(r1)
  stw       r30, 0x8(r1)
  mr        r30, r3
  mr        r31, r4
  lfs       f3, 0x10(r3)
  lfs       f0, 0x4(r4)
  lfs       f2, 0x2088(r2)
  lfs       f1, 0x18(r3)
  fmuls     f0, f3, f0
  lfs       f4, 0xC(r3)
  fmuls     f5, f2, f1
  lfs       f1, 0x0(r4)
  lfs       f2, 0x14(r3)
  fmadds    f0, f4, f1, f0
  lfs       f1, 0x8(r4)
  fmuls     f28, f2, f5
  lfs       f25, 0x8(r3)
  fmuls     f27, f3, f5
  lfs       f24, 0x4(r3)
  fmuls     f26, f4, f5
  lfs       f23, 0x0(r3)
  fmadds    f1, f2, f1, f0
  lfs       f0, 0x2090(r2)
  fsubs     f29, f25, f28
  fsubs     f30, f24, f27
  fsubs     f31, f23, f26
  fnmsubs   f1, f1, f1, f0
  bl        -0x10020
  lfs       f3, 0x4(r31)
  fadds     f2, f24, f27
  lfs       f6, 0x1C(r30)
  fadds     f4, f23, f26
  fmuls     f0, f30, f3
  lfs       f7, 0x0(r31)
  fmuls     f3, f2, f3
  lfs       f8, 0x8(r31)
  fadds     f5, f25, f28
  fmadds    f2, f31, f7, f0
  fmadds    f3, f4, f7, f3
  lfs       f4, 0xC(r31)
  fmuls     f6, f6, f1
  lfs       f0, 0x208C(r2)
  fmadds    f1, f29, f8, f2
  fmadds    f2, f5, f8, f3
  fsubs     f1, f1, f4
  fsubs     f2, f2, f4
  fadds     f1, f6, f1
  fadds     f2, f6, f2
  fcmpo     cr0, f1, f0
  bgt-      .loc_0x124
  fcmpo     cr0, f2, f0
  ble-      .loc_0x12C

.loc_0x124:
  li        r3, 0
  b         .loc_0x130

.loc_0x12C:
  li        r3, 0x1

.loc_0x130:
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
  psq_l     f26,0x48(r1),0,0
  lfd       f26, 0x40(r1)
  psq_l     f25,0x38(r1),0,0
  lfd       f25, 0x30(r1)
  psq_l     f24,0x28(r1),0,0
  lfd       f24, 0x20(r1)
  psq_l     f23,0x18(r1),0,0
  lfd       f23, 0x10(r1)
  lwz       r31, 0xC(r1)
  lwz       r0, 0xA4(r1)
  lwz       r30, 0x8(r1)
  mtlr      r0
  addi      r1, r1, 0xA0
  blr
*/
}

/*
 * --INFO--
 * Address:	804218F4
 * Size:	0001D8
 */
void Sys::Cylinder::intersect( (Sys::Triangle const &, float &))
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
  stfd      f27, 0x60(r1)
  psq_st    f27,0x68(r1),0,0
  stfd      f26, 0x50(r1)
  psq_st    f26,0x58(r1),0,0
  stfd      f25, 0x40(r1)
  psq_st    f25,0x48(r1),0,0
  stfd      f24, 0x30(r1)
  psq_st    f24,0x38(r1),0,0
  stfd      f23, 0x20(r1)
  psq_st    f23,0x28(r1),0,0
  stmw      r27, 0xC(r1)
  mr        r28, r4
  mr        r27, r3
  mr        r29, r5
  li        r30, 0
  mr        r31, r28

.loc_0x6C:
  mr        r3, r27
  addi      r4, r31, 0x1C
  bl        -0x204
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x88
  li        r3, 0
  b         .loc_0x17C

.loc_0x88:
  addi      r30, r30, 0x1
  addi      r31, r31, 0x10
  cmpwi     r30, 0x3
  blt+      .loc_0x6C
  lfs       f3, 0x10(r27)
  lfs       f0, 0x10(r28)
  lfs       f2, 0x2088(r2)
  lfs       f1, 0x18(r27)
  fmuls     f0, f3, f0
  lfs       f4, 0xC(r27)
  fmuls     f5, f2, f1
  lfs       f1, 0xC(r28)
  lfs       f2, 0x14(r27)
  fmadds    f0, f4, f1, f0
  lfs       f1, 0x14(r28)
  fmuls     f28, f2, f5
  lfs       f25, 0x8(r27)
  fmuls     f27, f3, f5
  lfs       f24, 0x4(r27)
  fmuls     f26, f4, f5
  lfs       f23, 0x0(r27)
  fmadds    f1, f2, f1, f0
  lfs       f0, 0x2090(r2)
  fsubs     f29, f25, f28
  fsubs     f30, f24, f27
  fsubs     f31, f23, f26
  fnmsubs   f1, f1, f1, f0
  bl        -0x101E4
  fadds     f0, f24, f27
  lfs       f2, 0x10(r28)
  lfs       f6, 0x1C(r27)
  fadds     f3, f23, f26
  fmuls     f4, f30, f2
  lfs       f7, 0xC(r28)
  fmuls     f2, f0, f2
  lfs       f8, 0x14(r28)
  fmadds    f5, f31, f7, f4
  lfs       f9, 0x18(r28)
  fadds     f4, f25, f28
  lfs       f0, 0x208C(r2)
  fmadds    f2, f3, f7, f2
  fmadds    f3, f29, f8, f5
  fmuls     f5, f6, f1
  fmadds    f1, f4, f8, f2
  fsubs     f2, f3, f9
  fsubs     f1, f1, f9
  fsubs     f2, f2, f5
  fadds     f3, f5, f1
  fmuls     f1, f2, f3
  fcmpo     cr0, f1, f0
  ble-      .loc_0x15C
  li        r3, 0
  b         .loc_0x17C

.loc_0x15C:
  fcmpo     cr0, f2, f0
  bge-      .loc_0x170
  fneg      f0, f2
  stfs      f0, 0x0(r29)
  b         .loc_0x178

.loc_0x170:
  fneg      f0, f3
  stfs      f0, 0x0(r29)

.loc_0x178:
  li        r3, 0x1

.loc_0x17C:
  psq_l     f31,0xA8(r1),0,0
  lfd       f31, 0xA0(r1)
  psq_l     f30,0x98(r1),0,0
  lfd       f30, 0x90(r1)
  psq_l     f29,0x88(r1),0,0
  lfd       f29, 0x80(r1)
  psq_l     f28,0x78(r1),0,0
  lfd       f28, 0x70(r1)
  psq_l     f27,0x68(r1),0,0
  lfd       f27, 0x60(r1)
  psq_l     f26,0x58(r1),0,0
  lfd       f26, 0x50(r1)
  psq_l     f25,0x48(r1),0,0
  lfd       f25, 0x40(r1)
  psq_l     f24,0x38(r1),0,0
  lfd       f24, 0x30(r1)
  psq_l     f23,0x28(r1),0,0
  lfd       f23, 0x20(r1)
  lmw       r27, 0xC(r1)
  lwz       r0, 0xB4(r1)
  mtlr      r0
  addi      r1, r1, 0xB0
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0004A0
 */
void Sys::Cylinder::draw( (Graphics &))
{
	// UNUSED FUNCTION
}
