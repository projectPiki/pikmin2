

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
 * Address:	8041C9CC
 * Size:	0004F0
 */
void Sys::Triangle::intersect( (Sys::VertexTable &, Sys::Triangle::SphereSweep &))
{
/*
.loc_0x0:
  stwu      r1, -0x80(r1)
  mflr      r0
  stw       r0, 0x84(r1)
  stfd      f31, 0x70(r1)
  psq_st    f31,0x78(r1),0,0
  stw       r31, 0x6C(r1)
  stw       r30, 0x68(r1)
  stw       r29, 0x64(r1)
  stw       r28, 0x60(r1)
  mr        r31, r5
  mr        r29, r3
  lfs       f2, 0x10(r5)
  mr        r30, r4
  lfs       f0, 0x10(r3)
  addi      r28, r31, 0x30
  lbz       r0, 0x1C(r5)
  fmuls     f0, f2, f0
  lfs       f3, 0xC(r5)
  lfs       f1, 0xC(r3)
  cmpwi     r0, 0x1
  lfs       f5, 0x14(r5)
  fmadds    f1, f3, f1, f0
  lfs       f4, 0x14(r3)
  lfs       f0, 0x18(r3)
  fmadds    f1, f5, f4, f1
  fsubs     f31, f1, f0
  beq-      .loc_0xA4
  bge-      .loc_0x7C
  cmpwi     r0, 0
  bge-      .loc_0x88
  b         .loc_0x170

.loc_0x7C:
  cmpwi     r0, 0x3
  bge-      .loc_0x170
  b         .loc_0xD4

.loc_0x88:
  fabs      f1, f31
  lfs       f0, 0x18(r31)
  frsp      f1, f1
  fcmpo     cr0, f1, f0
  ble-      .loc_0x170
  li        r3, 0
  b         .loc_0x4C8

.loc_0xA4:
  lfs       f0, 0x18(r31)
  fcmpo     cr0, f31, f0
  ble-      .loc_0xB8
  li        r3, 0
  b         .loc_0x4C8

.loc_0xB8:
  fneg      f1, f0
  lfs       f0, 0x2050(r2)
  fsubs     f0, f1, f0
  fcmpo     cr0, f31, f0
  bge-      .loc_0x170
  li        r3, 0
  b         .loc_0x4C8

.loc_0xD4:
  lfs       f0, 0x0(r31)
  stfs      f0, 0x40(r1)
  fsubs     f6, f0, f3
  lfs       f0, 0x4(r31)
  fsubs     f4, f0, f2
  stfs      f0, 0x44(r1)
  lfs       f1, 0x8(r31)
  fmuls     f0, f4, f4
  fsubs     f4, f1, f5
  stfs      f1, 0x48(r1)
  fmadds    f0, f6, f6, f0
  stfs      f3, 0x4C(r1)
  stfs      f2, 0x50(r1)
  fmadds    f1, f4, f4, f0
  stfs      f5, 0x54(r1)
  bl        -0xB2D8
  lfs       f0, 0x2054(r2)
  fcmpu     cr0, f0, f1
  bne-      .loc_0x134
  lfs       f0, 0x18(r31)
  fcmpo     cr0, f31, f0
  ble-      .loc_0x170
  li        r3, 0
  b         .loc_0x4C8

.loc_0x134:
  lfs       f1, 0x18(r31)
  mr        r3, r29
  mr        r5, r28
  addi      r4, r1, 0x40
  addi      r6, r31, 0x2C
  bl        -0x5B98
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x4C8
  lfs       f0, 0xC(r29)
  stfs      f0, 0x20(r31)
  lfs       f0, 0x10(r29)
  stfs      f0, 0x24(r31)
  lfs       f0, 0x14(r29)
  stfs      f0, 0x28(r31)
  b         .loc_0x4C8

.loc_0x170:
  lfs       f8, 0x10(r31)
  lfs       f2, 0x20(r29)
  lfs       f7, 0xC(r31)
  fmuls     f1, f8, f2
  lfs       f5, 0x1C(r29)
  lfs       f2, 0x30(r29)
  lfs       f9, 0x14(r31)
  fmadds    f0, f7, f5, f1
  lfs       f6, 0x24(r29)
  fmuls     f1, f8, f2
  lfs       f5, 0x2C(r29)
  lfs       f2, 0x40(r29)
  fmadds    f4, f9, f6, f0
  fmadds    f0, f7, f5, f1
  lfs       f3, 0x28(r29)
  fmuls     f1, f8, f2
  lfs       f6, 0x34(r29)
  fsubs     f2, f4, f3
  fmadds    f4, f9, f6, f0
  lfs       f5, 0x3C(r29)
  stfs      f2, 0x1C(r1)
  lfs       f3, 0x38(r29)
  fmadds    f0, f7, f5, f1
  lfs       f6, 0x44(r29)
  fsubs     f2, f4, f3
  lfs       f3, 0x48(r29)
  fmadds    f4, f9, f6, f0
  lfs       f0, 0x1C(r1)
  lfs       f1, 0x2054(r2)
  stfs      f2, 0x20(r1)
  fsubs     f2, f4, f3
  fcmpo     cr0, f0, f1
  stfs      f2, 0x24(r1)
  cror      2, 0, 0x2
  bne-      .loc_0x288
  lfs       f0, 0x20(r1)
  fcmpo     cr0, f0, f1
  cror      2, 0, 0x2
  bne-      .loc_0x288
  frsp      f0, f2
  fcmpo     cr0, f0, f1
  cror      2, 0, 0x2
  bne-      .loc_0x288
  lfs       f0, 0xC(r29)
  li        r3, 0x1
  stfs      f0, 0x20(r31)
  lfs       f0, 0x10(r29)
  stfs      f0, 0x24(r31)
  lfs       f0, 0x14(r29)
  stfs      f0, 0x28(r31)
  lfs       f0, 0x18(r31)
  fsubs     f0, f0, f31
  stfs      f0, 0x2C(r31)
  lfs       f6, 0x18(r31)
  lfs       f0, 0x20(r31)
  lfs       f2, 0x24(r31)
  fmuls     f0, f0, f6
  lfs       f1, 0xC(r31)
  lfs       f4, 0x28(r31)
  fmuls     f2, f2, f6
  lfs       f3, 0x10(r31)
  fsubs     f0, f1, f0
  lfs       f5, 0x14(r31)
  fmuls     f1, f4, f6
  fsubs     f2, f3, f2
  stfs      f0, 0x30(r31)
  fsubs     f0, f5, f1
  stfs      f2, 0x34(r31)
  stfs      f0, 0x38(r31)
  b         .loc_0x4C8

.loc_0x288:
  lfs       f1, 0x18(r31)
  addi      r3, r1, 0xC
  lfs       f0, 0xC(r31)
  addi      r4, r1, 0x28
  addi      r5, r1, 0x8
  addi      r6, r31, 0x20
  stfs      f0, 0xC(r1)
  addi      r7, r31, 0x2C
  lfs       f0, 0x10(r31)
  stfs      f0, 0x10(r1)
  lfs       f0, 0x14(r31)
  stfs      f0, 0x14(r1)
  stfs      f1, 0x18(r1)
  lwz       r0, 0x0(r29)
  lwz       r10, 0x24(r30)
  mulli     r0, r0, 0xC
  lwz       r8, 0x4(r29)
  add       r9, r10, r0
  lfs       f0, 0x0(r9)
  mulli     r0, r8, 0xC
  stfs      f0, 0x28(r1)
  add       r8, r10, r0
  lfs       f0, 0x4(r9)
  stfs      f0, 0x2C(r1)
  lfs       f0, 0x8(r9)
  stfs      f0, 0x30(r1)
  lfs       f0, 0x0(r8)
  stfs      f0, 0x34(r1)
  lfs       f0, 0x4(r8)
  stfs      f0, 0x38(r1)
  lfs       f0, 0x8(r8)
  stfs      f0, 0x3C(r1)
  bl        -0x67B8
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x35C
  lfs       f6, 0x18(r31)
  li        r3, 0x1
  lfs       f0, 0x20(r31)
  lfs       f2, 0x24(r31)
  fmuls     f0, f0, f6
  lfs       f1, 0xC(r31)
  lfs       f4, 0x28(r31)
  fmuls     f2, f2, f6
  lfs       f3, 0x10(r31)
  fsubs     f0, f1, f0
  lfs       f5, 0x14(r31)
  fmuls     f1, f4, f6
  fsubs     f2, f3, f2
  stfs      f0, 0x30(r31)
  fsubs     f0, f5, f1
  stfs      f2, 0x34(r31)
  stfs      f0, 0x38(r31)
  b         .loc_0x4C8

.loc_0x35C:
  lwz       r0, 0x4(r29)
  addi      r3, r1, 0xC
  lwz       r8, 0x8(r29)
  addi      r4, r1, 0x28
  mulli     r0, r0, 0xC
  lwz       r10, 0x24(r30)
  addi      r5, r1, 0x8
  addi      r6, r31, 0x20
  add       r9, r10, r0
  addi      r7, r31, 0x2C
  lfs       f0, 0x0(r9)
  mulli     r0, r8, 0xC
  stfs      f0, 0x28(r1)
  add       r8, r10, r0
  lfs       f0, 0x4(r9)
  stfs      f0, 0x2C(r1)
  lfs       f0, 0x8(r9)
  stfs      f0, 0x30(r1)
  lfs       f0, 0x0(r8)
  stfs      f0, 0x34(r1)
  lfs       f0, 0x4(r8)
  stfs      f0, 0x38(r1)
  lfs       f0, 0x8(r8)
  stfs      f0, 0x3C(r1)
  bl        -0x686C
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x410
  lfs       f6, 0x18(r31)
  li        r3, 0x1
  lfs       f0, 0x20(r31)
  lfs       f2, 0x24(r31)
  fmuls     f0, f0, f6
  lfs       f1, 0xC(r31)
  lfs       f4, 0x28(r31)
  fmuls     f2, f2, f6
  lfs       f3, 0x10(r31)
  fsubs     f0, f1, f0
  lfs       f5, 0x14(r31)
  fmuls     f1, f4, f6
  fsubs     f2, f3, f2
  stfs      f0, 0x30(r31)
  fsubs     f0, f5, f1
  stfs      f2, 0x34(r31)
  stfs      f0, 0x38(r31)
  b         .loc_0x4C8

.loc_0x410:
  lwz       r0, 0x8(r29)
  addi      r3, r1, 0xC
  lwz       r8, 0x0(r29)
  addi      r4, r1, 0x28
  mulli     r0, r0, 0xC
  lwz       r10, 0x24(r30)
  addi      r5, r1, 0x8
  addi      r6, r31, 0x20
  add       r9, r10, r0
  addi      r7, r31, 0x2C
  lfs       f0, 0x0(r9)
  mulli     r0, r8, 0xC
  stfs      f0, 0x28(r1)
  add       r8, r10, r0
  lfs       f0, 0x4(r9)
  stfs      f0, 0x2C(r1)
  lfs       f0, 0x8(r9)
  stfs      f0, 0x30(r1)
  lfs       f0, 0x0(r8)
  stfs      f0, 0x34(r1)
  lfs       f0, 0x4(r8)
  stfs      f0, 0x38(r1)
  lfs       f0, 0x8(r8)
  stfs      f0, 0x3C(r1)
  bl        -0x6920
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x4C4
  lfs       f6, 0x18(r31)
  li        r3, 0x1
  lfs       f0, 0x20(r31)
  lfs       f2, 0x24(r31)
  fmuls     f0, f0, f6
  lfs       f1, 0xC(r31)
  lfs       f4, 0x28(r31)
  fmuls     f2, f2, f6
  lfs       f3, 0x10(r31)
  fsubs     f0, f1, f0
  lfs       f5, 0x14(r31)
  fmuls     f1, f4, f6
  fsubs     f2, f3, f2
  stfs      f0, 0x30(r31)
  fsubs     f0, f5, f1
  stfs      f2, 0x34(r31)
  stfs      f0, 0x38(r31)
  b         .loc_0x4C8

.loc_0x4C4:
  li        r3, 0

.loc_0x4C8:
  psq_l     f31,0x78(r1),0,0
  lwz       r0, 0x84(r1)
  lfd       f31, 0x70(r1)
  lwz       r31, 0x6C(r1)
  lwz       r30, 0x68(r1)
  lwz       r29, 0x64(r1)
  lwz       r28, 0x60(r1)
  mtlr      r0
  addi      r1, r1, 0x80
  blr
*/
}
