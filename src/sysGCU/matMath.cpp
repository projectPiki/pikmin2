

/*
 * --INFO--
 * Address:	........
 * Size:	0000E0
 */
void _Print(char *, ...)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000228
 */
void Matrixf::makeNaturalPosture(Vector3<float> &)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80427F90
 * Size:	000344
 */
void Matrixf::makeNaturalPosture(Vector3<float> &, float)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  lfs       f2, 0x8(r4)
  lfs       f0, 0x0(r4)
  fabs      f2, f2
  fabs      f3, f0
  frsp      f0, f2
  frsp      f2, f3
  fcmpo     cr0, f2, f0
  ble-      .loc_0x188
  fmr       f2, f1
  lfs       f0, 0x21B4(r2)
  fcmpo     cr0, f2, f0
  bge-      .loc_0x38
  fneg      f2, f2

.loc_0x38:
  lfs       f3, 0x21B8(r2)
  lis       r5, 0x8050
  lfs       f0, 0x21B4(r2)
  addi      r6, r5, 0x71A0
  fmuls     f2, f2, f3
  fcmpo     cr0, f1, f0
  fctiwz    f0, f2
  stfd      f0, 0x8(r1)
  lwz       r0, 0xC(r1)
  rlwinm    r0,r0,3,18,28
  add       r5, r6, r0
  lfs       f6, 0x4(r5)
  bge-      .loc_0x90
  lfs       f0, 0x21BC(r2)
  fmuls     f0, f1, f0
  fctiwz    f0, f0
  stfd      f0, 0x10(r1)
  lwz       r0, 0x14(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f0, r6, r0
  fneg      f3, f0
  b         .loc_0xA8

.loc_0x90:
  fmuls     f0, f1, f3
  fctiwz    f0, f0
  stfd      f0, 0x18(r1)
  lwz       r0, 0x1C(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f3, r6, r0

.loc_0xA8:
  lfs       f10, 0x0(r4)
  lfs       f8, 0x4(r4)
  fmuls     f1, f10, f6
  lfs       f9, 0x8(r4)
  lfs       f2, 0x21B4(r2)
  fmuls     f0, f8, f3
  fmsubs    f4, f9, f3, f1
  fmuls     f1, f9, f2
  fmsubs    f5, f10, f2, f0
  fmuls     f0, f4, f4
  fmsubs    f3, f8, f6, f1
  fmuls     f1, f5, f5
  fmadds    f0, f3, f3, f0
  fadds     f1, f1, f0
  fcmpo     cr0, f1, f2
  ble-      .loc_0xF8
  ble-      .loc_0xFC
  fsqrte    f0, f1
  fmuls     f1, f0, f1
  b         .loc_0xFC

.loc_0xF8:
  fmr       f1, f2

.loc_0xFC:
  lfs       f0, 0x21B4(r2)
  fcmpo     cr0, f1, f0
  ble-      .loc_0x11C
  lfs       f0, 0x21B0(r2)
  fdivs     f0, f0, f1
  fmuls     f3, f3, f0
  fmuls     f4, f4, f0
  fmuls     f5, f5, f0

.loc_0x11C:
  fmuls     f0, f3, f9
  lfs       f6, 0x21B4(r2)
  fmuls     f2, f4, f10
  fmuls     f7, f5, f8
  fmsubs    f1, f5, f10, f0
  fmsubs    f2, f3, f8, f2
  fmsubs    f0, f4, f9, f7
  fmuls     f7, f1, f1
  fmuls     f8, f2, f2
  fmadds    f7, f0, f0, f7
  fadds     f7, f8, f7
  fcmpo     cr0, f7, f6
  ble-      .loc_0x160
  ble-      .loc_0x164
  fsqrte    f6, f7
  fmuls     f7, f6, f7
  b         .loc_0x164

.loc_0x160:
  fmr       f7, f6

.loc_0x164:
  lfs       f6, 0x21B4(r2)
  fcmpo     cr0, f7, f6
  ble-      .loc_0x2F0
  lfs       f6, 0x21B0(r2)
  fdivs     f6, f6, f7
  fmuls     f0, f0, f6
  fmuls     f1, f1, f6
  fmuls     f2, f2, f6
  b         .loc_0x2F0

.loc_0x188:
  lfs       f2, 0x21C0(r2)
  lfs       f0, 0x21B4(r2)
  fadds     f3, f2, f1
  fmr       f1, f3
  fcmpo     cr0, f3, f0
  bge-      .loc_0x1A4
  fneg      f1, f3

.loc_0x1A4:
  lfs       f2, 0x21B8(r2)
  lis       r5, 0x8050
  lfs       f0, 0x21B4(r2)
  addi      r6, r5, 0x71A0
  fmuls     f1, f1, f2
  fcmpo     cr0, f3, f0
  fctiwz    f0, f1
  stfd      f0, 0x18(r1)
  lwz       r0, 0x1C(r1)
  rlwinm    r0,r0,3,18,28
  add       r5, r6, r0
  lfs       f1, 0x4(r5)
  bge-      .loc_0x1FC
  lfs       f0, 0x21BC(r2)
  fmuls     f0, f3, f0
  fctiwz    f0, f0
  stfd      f0, 0x10(r1)
  lwz       r0, 0x14(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f0, r6, r0
  fneg      f4, f0
  b         .loc_0x214

.loc_0x1FC:
  fmuls     f0, f3, f2
  fctiwz    f0, f0
  stfd      f0, 0x8(r1)
  lwz       r0, 0xC(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f4, r6, r0

.loc_0x214:
  lfs       f8, 0x8(r4)
  lfs       f10, 0x4(r4)
  fmuls     f0, f4, f8
  lfs       f9, 0x0(r4)
  lfs       f5, 0x21B4(r2)
  fmuls     f3, f1, f10
  fmsubs    f1, f1, f9, f0
  fmuls     f2, f5, f9
  fmsubs    f0, f5, f8, f3
  fmuls     f3, f1, f1
  fmsubs    f2, f4, f10, f2
  fmadds    f3, f0, f0, f3
  fmuls     f4, f2, f2
  fadds     f4, f4, f3
  fcmpo     cr0, f4, f5
  ble-      .loc_0x264
  ble-      .loc_0x268
  fsqrte    f3, f4
  fmuls     f4, f3, f4
  b         .loc_0x268

.loc_0x264:
  fmr       f4, f5

.loc_0x268:
  lfs       f3, 0x21B4(r2)
  fcmpo     cr0, f4, f3
  ble-      .loc_0x288
  lfs       f3, 0x21B0(r2)
  fdivs     f3, f3, f4
  fmuls     f0, f0, f3
  fmuls     f1, f1, f3
  fmuls     f2, f2, f3

.loc_0x288:
  fmuls     f3, f9, f2
  lfs       f6, 0x21B4(r2)
  fmuls     f5, f10, f0
  fmuls     f7, f8, f1
  fmsubs    f4, f8, f0, f3
  fmsubs    f5, f9, f1, f5
  fmsubs    f3, f10, f2, f7
  fmuls     f7, f4, f4
  fmuls     f8, f5, f5
  fmadds    f7, f3, f3, f7
  fadds     f7, f8, f7
  fcmpo     cr0, f7, f6
  ble-      .loc_0x2CC
  ble-      .loc_0x2D0
  fsqrte    f6, f7
  fmuls     f7, f6, f7
  b         .loc_0x2D0

.loc_0x2CC:
  fmr       f7, f6

.loc_0x2D0:
  lfs       f6, 0x21B4(r2)
  fcmpo     cr0, f7, f6
  ble-      .loc_0x2F0
  lfs       f6, 0x21B0(r2)
  fdivs     f6, f6, f7
  fmuls     f3, f3, f6
  fmuls     f4, f4, f6
  fmuls     f5, f5, f6

.loc_0x2F0:
  stfs      f3, 0x0(r3)
  lis       r5, 0x8051
  stfs      f4, 0x10(r3)
  stfs      f5, 0x20(r3)
  lfs       f3, 0x0(r4)
  stfs      f3, 0x4(r3)
  lfs       f3, 0x4(r4)
  stfs      f3, 0x14(r3)
  lfs       f3, 0x8(r4)
  stfs      f3, 0x24(r3)
  stfs      f0, 0x8(r3)
  stfs      f1, 0x18(r3)
  stfs      f2, 0x28(r3)
  lfsu      f0, 0x41E4(r5)
  stfs      f0, 0xC(r3)
  lfs       f0, 0x4(r5)
  stfs      f0, 0x1C(r3)
  lfs       f0, 0x8(r5)
  stfs      f0, 0x2C(r3)
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	804282D4
 * Size:	000004
 */
void Matrixf::print(char *)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	804282D8
 * Size:	000288
 */
void Matrixf::makeSRT(Vector3<float> &, Vector3<float> &, Vector3<float> &)
{
/*
.loc_0x0:
  stwu      r1, -0x60(r1)
  stfd      f31, 0x50(r1)
  psq_st    f31,0x58(r1),0,0
  lfs       f4, 0x0(r5)
  lfs       f0, 0x21B4(r2)
  fcmpo     cr0, f4, f0
  bge-      .loc_0x48
  lfs       f0, 0x21BC(r2)
  lis       r7, 0x8050
  addi      r7, r7, 0x71A0
  fmuls     f0, f4, f0
  fctiwz    f0, f0
  stfd      f0, 0x8(r1)
  lwz       r0, 0xC(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f0, r7, r0
  fneg      f0, f0
  b         .loc_0x6C

.loc_0x48:
  lfs       f0, 0x21B8(r2)
  lis       r7, 0x8050
  addi      r7, r7, 0x71A0
  fmuls     f0, f4, f0
  fctiwz    f0, f0
  stfd      f0, 0x10(r1)
  lwz       r0, 0x14(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f0, r7, r0

.loc_0x6C:
  lfs       f5, 0x4(r5)
  lfs       f1, 0x21B4(r2)
  fcmpo     cr0, f5, f1
  bge-      .loc_0xA8
  lfs       f1, 0x21BC(r2)
  lis       r7, 0x8050
  addi      r7, r7, 0x71A0
  fmuls     f1, f5, f1
  fctiwz    f1, f1
  stfd      f1, 0x18(r1)
  lwz       r0, 0x1C(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f1, r7, r0
  fneg      f1, f1
  b         .loc_0xCC

.loc_0xA8:
  lfs       f1, 0x21B8(r2)
  lis       r7, 0x8050
  addi      r7, r7, 0x71A0
  fmuls     f1, f5, f1
  fctiwz    f1, f1
  stfd      f1, 0x20(r1)
  lwz       r0, 0x24(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f1, r7, r0

.loc_0xCC:
  lfs       f11, 0x8(r5)
  lfs       f2, 0x21B4(r2)
  fcmpo     cr0, f11, f2
  bge-      .loc_0x108
  lfs       f2, 0x21BC(r2)
  lis       r5, 0x8050
  addi      r5, r5, 0x71A0
  fmuls     f2, f11, f2
  fctiwz    f2, f2
  stfd      f2, 0x28(r1)
  lwz       r0, 0x2C(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f2, r5, r0
  fneg      f10, f2
  b         .loc_0x12C

.loc_0x108:
  lfs       f2, 0x21B8(r2)
  lis       r5, 0x8050
  addi      r5, r5, 0x71A0
  fmuls     f2, f11, f2
  fctiwz    f2, f2
  stfd      f2, 0x30(r1)
  lwz       r0, 0x34(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f10, r5, r0

.loc_0x12C:
  lfs       f2, 0x21B4(r2)
  fcmpo     cr0, f4, f2
  bge-      .loc_0x13C
  fneg      f4, f4

.loc_0x13C:
  lfs       f3, 0x21B8(r2)
  lis       r5, 0x8050
  lfs       f2, 0x21B4(r2)
  addi      r5, r5, 0x71A0
  fmuls     f3, f4, f3
  addi      r5, r5, 0x4
  fcmpo     cr0, f5, f2
  fctiwz    f2, f3
  stfd      f2, 0x38(r1)
  lwz       r0, 0x3C(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f9, r5, r0
  bge-      .loc_0x174
  fneg      f5, f5

.loc_0x174:
  lfs       f3, 0x21B8(r2)
  lfs       f2, 0x21B4(r2)
  fmuls     f3, f5, f3
  fcmpo     cr0, f11, f2
  fctiwz    f2, f3
  stfd      f2, 0x40(r1)
  lwz       r0, 0x44(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f5, r5, r0
  bge-      .loc_0x1A0
  fneg      f11, f11

.loc_0x1A0:
  lfs       f2, 0x21B8(r2)
  fmuls     f8, f5, f10
  fmuls     f4, f0, f5
  lfs       f6, 0x0(r4)
  fmuls     f2, f11, f2
  fmuls     f31, f9, f10
  fmuls     f13, f0, f1
  fctiwz    f2, f2
  fmuls     f3, f0, f10
  fneg      f7, f1
  stfd      f2, 0x48(r1)
  fmuls     f2, f9, f5
  lwz       r0, 0x4C(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f11, r5, r0
  fmuls     f5, f5, f11
  fmuls     f12, f9, f11
  fmuls     f0, f0, f11
  fmuls     f9, f6, f5
  fmadds    f3, f12, f1, f3
  fmsubs    f0, f31, f1, f0
  stfs      f9, 0x0(r3)
  fmsubs    f6, f13, f11, f31
  fmadds    f5, f13, f10, f12
  lfs       f1, 0x0(r4)
  fmuls     f1, f1, f8
  stfs      f1, 0x10(r3)
  lfs       f1, 0x0(r4)
  fmuls     f1, f1, f7
  stfs      f1, 0x20(r3)
  lfs       f1, 0x4(r4)
  fmuls     f1, f1, f6
  stfs      f1, 0x4(r3)
  lfs       f1, 0x4(r4)
  fmuls     f1, f1, f5
  stfs      f1, 0x14(r3)
  lfs       f1, 0x4(r4)
  fmuls     f1, f1, f4
  stfs      f1, 0x24(r3)
  lfs       f1, 0x8(r4)
  fmuls     f1, f1, f3
  stfs      f1, 0x8(r3)
  lfs       f1, 0x8(r4)
  fmuls     f0, f1, f0
  stfs      f0, 0x18(r3)
  lfs       f0, 0x8(r4)
  fmuls     f0, f0, f2
  stfs      f0, 0x28(r3)
  lfs       f0, 0x0(r6)
  stfs      f0, 0xC(r3)
  lfs       f0, 0x4(r6)
  stfs      f0, 0x1C(r3)
  lfs       f0, 0x8(r6)
  stfs      f0, 0x2C(r3)
  psq_l     f31,0x58(r1),0,0
  lfd       f31, 0x50(r1)
  addi      r1, r1, 0x60
  blr
*/
}

/*
 * --INFO--
 * Address:	80428560
 * Size:	000050
 */
void Matrixf::makeST(Vector3<float> &, Vector3<float> &)
{
/*
.loc_0x0:
  lfs       f0, 0x0(r4)
  lfs       f1, 0x21B4(r2)
  stfs      f0, 0x0(r3)
  stfs      f1, 0x10(r3)
  stfs      f1, 0x20(r3)
  stfs      f1, 0x4(r3)
  lfs       f0, 0x4(r4)
  stfs      f0, 0x14(r3)
  stfs      f1, 0x24(r3)
  stfs      f1, 0x8(r3)
  stfs      f1, 0x18(r3)
  lfs       f0, 0x8(r4)
  stfs      f0, 0x28(r3)
  lfs       f0, 0x0(r5)
  stfs      f0, 0xC(r3)
  lfs       f0, 0x4(r5)
  stfs      f0, 0x1C(r3)
  lfs       f0, 0x8(r5)
  stfs      f0, 0x2C(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	804285B0
 * Size:	000290
 */
void Matrixf::makeSR(Vector3<float> &, Vector3<float> &)
{
/*
.loc_0x0:
  stwu      r1, -0x70(r1)
  stfd      f31, 0x60(r1)
  psq_st    f31,0x68(r1),0,0
  stfd      f30, 0x50(r1)
  psq_st    f30,0x58(r1),0,0
  lfs       f4, 0x0(r5)
  lfs       f0, 0x21B4(r2)
  fcmpo     cr0, f4, f0
  bge-      .loc_0x50
  lfs       f0, 0x21BC(r2)
  lis       r6, 0x8050
  addi      r6, r6, 0x71A0
  fmuls     f0, f4, f0
  fctiwz    f0, f0
  stfd      f0, 0x8(r1)
  lwz       r0, 0xC(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f0, r6, r0
  fneg      f0, f0
  b         .loc_0x74

.loc_0x50:
  lfs       f0, 0x21B8(r2)
  lis       r6, 0x8050
  addi      r6, r6, 0x71A0
  fmuls     f0, f4, f0
  fctiwz    f0, f0
  stfd      f0, 0x10(r1)
  lwz       r0, 0x14(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f0, r6, r0

.loc_0x74:
  lfs       f5, 0x4(r5)
  lfs       f1, 0x21B4(r2)
  fcmpo     cr0, f5, f1
  bge-      .loc_0xB0
  lfs       f1, 0x21BC(r2)
  lis       r6, 0x8050
  addi      r6, r6, 0x71A0
  fmuls     f1, f5, f1
  fctiwz    f1, f1
  stfd      f1, 0x18(r1)
  lwz       r0, 0x1C(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f1, r6, r0
  fneg      f1, f1
  b         .loc_0xD4

.loc_0xB0:
  lfs       f1, 0x21B8(r2)
  lis       r6, 0x8050
  addi      r6, r6, 0x71A0
  fmuls     f1, f5, f1
  fctiwz    f1, f1
  stfd      f1, 0x20(r1)
  lwz       r0, 0x24(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f1, r6, r0

.loc_0xD4:
  lfs       f12, 0x8(r5)
  lfs       f2, 0x21B4(r2)
  fcmpo     cr0, f12, f2
  bge-      .loc_0x110
  lfs       f2, 0x21BC(r2)
  lis       r5, 0x8050
  addi      r5, r5, 0x71A0
  fmuls     f2, f12, f2
  fctiwz    f2, f2
  stfd      f2, 0x28(r1)
  lwz       r0, 0x2C(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f2, r5, r0
  fneg      f11, f2
  b         .loc_0x134

.loc_0x110:
  lfs       f2, 0x21B8(r2)
  lis       r5, 0x8050
  addi      r5, r5, 0x71A0
  fmuls     f2, f12, f2
  fctiwz    f2, f2
  stfd      f2, 0x30(r1)
  lwz       r0, 0x34(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f11, r5, r0

.loc_0x134:
  lfs       f2, 0x21B4(r2)
  fcmpo     cr0, f4, f2
  bge-      .loc_0x144
  fneg      f4, f4

.loc_0x144:
  lfs       f3, 0x21B8(r2)
  lis       r5, 0x8050
  lfs       f2, 0x21B4(r2)
  addi      r5, r5, 0x71A0
  fmuls     f3, f4, f3
  addi      r5, r5, 0x4
  fcmpo     cr0, f5, f2
  fctiwz    f2, f3
  stfd      f2, 0x38(r1)
  lwz       r0, 0x3C(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f10, r5, r0
  bge-      .loc_0x17C
  fneg      f5, f5

.loc_0x17C:
  lfs       f3, 0x21B8(r2)
  lfs       f2, 0x21B4(r2)
  fmuls     f3, f5, f3
  fcmpo     cr0, f12, f2
  fctiwz    f2, f3
  stfd      f2, 0x40(r1)
  lwz       r0, 0x44(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f6, r5, r0
  bge-      .loc_0x1A8
  fneg      f12, f12

.loc_0x1A8:
  lfs       f2, 0x21B8(r2)
  fmuls     f9, f6, f11
  fmuls     f5, f0, f6
  lfs       f7, 0x0(r4)
  fmuls     f3, f12, f2
  lfs       f2, 0x21B4(r2)
  fmuls     f30, f10, f11
  fmuls     f31, f0, f1
  fctiwz    f3, f3
  fmuls     f4, f0, f11
  fneg      f8, f1
  stfd      f3, 0x48(r1)
  fmuls     f3, f10, f6
  lwz       r0, 0x4C(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f12, r5, r0
  fmuls     f6, f6, f12
  fmuls     f13, f10, f12
  fmuls     f0, f0, f12
  fmuls     f10, f7, f6
  fmadds    f4, f13, f1, f4
  fmsubs    f0, f30, f1, f0
  stfs      f10, 0x0(r3)
  fmsubs    f7, f31, f12, f30
  fmadds    f6, f31, f11, f13
  lfs       f1, 0x0(r4)
  fmuls     f1, f1, f9
  stfs      f1, 0x10(r3)
  lfs       f1, 0x0(r4)
  fmuls     f1, f1, f8
  stfs      f1, 0x20(r3)
  lfs       f1, 0x4(r4)
  fmuls     f1, f1, f7
  stfs      f1, 0x4(r3)
  lfs       f1, 0x4(r4)
  fmuls     f1, f1, f6
  stfs      f1, 0x14(r3)
  lfs       f1, 0x4(r4)
  fmuls     f1, f1, f5
  stfs      f1, 0x24(r3)
  lfs       f1, 0x8(r4)
  fmuls     f1, f1, f4
  stfs      f1, 0x8(r3)
  lfs       f1, 0x8(r4)
  fmuls     f0, f1, f0
  stfs      f0, 0x18(r3)
  lfs       f0, 0x8(r4)
  fmuls     f0, f0, f3
  stfs      f0, 0x28(r3)
  stfs      f2, 0xC(r3)
  stfs      f2, 0x1C(r3)
  stfs      f2, 0x2C(r3)
  psq_l     f31,0x68(r1),0,0
  lfd       f31, 0x60(r1)
  psq_l     f30,0x58(r1),0,0
  lfd       f30, 0x50(r1)
  addi      r1, r1, 0x70
  blr
*/
}

/*
 * --INFO--
 * Address:	80428840
 * Size:	000048
 */
void Matrixf::makeT(Vector3<float> &)
{
/*
.loc_0x0:
  lfs       f1, 0x21B0(r2)
  lfs       f0, 0x21B4(r2)
  stfs      f1, 0x0(r3)
  stfs      f0, 0x10(r3)
  stfs      f0, 0x20(r3)
  stfs      f0, 0x4(r3)
  stfs      f1, 0x14(r3)
  stfs      f0, 0x24(r3)
  stfs      f0, 0x8(r3)
  stfs      f0, 0x18(r3)
  stfs      f1, 0x28(r3)
  lfs       f0, 0x0(r4)
  stfs      f0, 0xC(r3)
  lfs       f0, 0x4(r4)
  stfs      f0, 0x1C(r3)
  lfs       f0, 0x8(r4)
  stfs      f0, 0x2C(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	80428888
 * Size:	000230
 */
void Matrixf::makeTR(Vector3<float> &, Vector3<float> &)
{
/*
.loc_0x0:
  stwu      r1, -0x50(r1)
  lfs       f0, 0x21B4(r2)
  lfs       f4, 0x0(r5)
  fcmpo     cr0, f4, f0
  bge-      .loc_0x40
  lfs       f0, 0x21BC(r2)
  lis       r6, 0x8050
  addi      r6, r6, 0x71A0
  fmuls     f0, f4, f0
  fctiwz    f0, f0
  stfd      f0, 0x8(r1)
  lwz       r0, 0xC(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f0, r6, r0
  fneg      f0, f0
  b         .loc_0x64

.loc_0x40:
  lfs       f0, 0x21B8(r2)
  lis       r6, 0x8050
  addi      r6, r6, 0x71A0
  fmuls     f0, f4, f0
  fctiwz    f0, f0
  stfd      f0, 0x10(r1)
  lwz       r0, 0x14(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f0, r6, r0

.loc_0x64:
  lfs       f5, 0x4(r5)
  lfs       f1, 0x21B4(r2)
  fcmpo     cr0, f5, f1
  bge-      .loc_0xA0
  lfs       f1, 0x21BC(r2)
  lis       r6, 0x8050
  addi      r6, r6, 0x71A0
  fmuls     f1, f5, f1
  fctiwz    f1, f1
  stfd      f1, 0x18(r1)
  lwz       r0, 0x1C(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f1, r6, r0
  fneg      f1, f1
  b         .loc_0xC4

.loc_0xA0:
  lfs       f1, 0x21B8(r2)
  lis       r6, 0x8050
  addi      r6, r6, 0x71A0
  fmuls     f1, f5, f1
  fctiwz    f1, f1
  stfd      f1, 0x20(r1)
  lwz       r0, 0x24(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f1, r6, r0

.loc_0xC4:
  lfs       f7, 0x8(r5)
  lfs       f2, 0x21B4(r2)
  fcmpo     cr0, f7, f2
  bge-      .loc_0x100
  lfs       f2, 0x21BC(r2)
  lis       r5, 0x8050
  addi      r5, r5, 0x71A0
  fmuls     f2, f7, f2
  fctiwz    f2, f2
  stfd      f2, 0x28(r1)
  lwz       r0, 0x2C(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f2, r5, r0
  fneg      f9, f2
  b         .loc_0x124

.loc_0x100:
  lfs       f2, 0x21B8(r2)
  lis       r5, 0x8050
  addi      r5, r5, 0x71A0
  fmuls     f2, f7, f2
  fctiwz    f2, f2
  stfd      f2, 0x30(r1)
  lwz       r0, 0x34(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f9, r5, r0

.loc_0x124:
  lfs       f2, 0x21B4(r2)
  fcmpo     cr0, f4, f2
  bge-      .loc_0x134
  fneg      f4, f4

.loc_0x134:
  lfs       f3, 0x21B8(r2)
  lis       r5, 0x8050
  lfs       f2, 0x21B4(r2)
  addi      r5, r5, 0x71A0
  fmuls     f3, f4, f3
  addi      r5, r5, 0x4
  fcmpo     cr0, f5, f2
  fctiwz    f2, f3
  stfd      f2, 0x38(r1)
  lwz       r0, 0x3C(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f6, r5, r0
  bge-      .loc_0x16C
  fneg      f5, f5

.loc_0x16C:
  lfs       f3, 0x21B8(r2)
  lfs       f2, 0x21B4(r2)
  fmuls     f3, f5, f3
  fcmpo     cr0, f7, f2
  fctiwz    f2, f3
  stfd      f2, 0x40(r1)
  lwz       r0, 0x44(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f5, r5, r0
  bge-      .loc_0x198
  fneg      f7, f7

.loc_0x198:
  lfs       f2, 0x21B8(r2)
  fmuls     f8, f5, f9
  fmuls     f4, f0, f5
  fmuls     f2, f7, f2
  fmuls     f12, f0, f1
  fmuls     f13, f6, f9
  fctiwz    f2, f2
  fneg      f7, f1
  fmuls     f3, f0, f9
  stfd      f2, 0x48(r1)
  fmuls     f2, f6, f5
  lwz       r0, 0x4C(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f10, r5, r0
  fmuls     f5, f5, f10
  fmuls     f11, f6, f10
  fmuls     f0, f0, f10
  stfs      f5, 0x0(r3)
  fmsubs    f6, f12, f10, f13
  fmadds    f5, f12, f9, f11
  stfs      f8, 0x10(r3)
  fmadds    f3, f11, f1, f3
  fmsubs    f0, f13, f1, f0
  stfs      f7, 0x20(r3)
  stfs      f6, 0x4(r3)
  stfs      f5, 0x14(r3)
  stfs      f4, 0x24(r3)
  stfs      f3, 0x8(r3)
  stfs      f0, 0x18(r3)
  stfs      f2, 0x28(r3)
  lfs       f0, 0x0(r4)
  stfs      f0, 0xC(r3)
  lfs       f0, 0x4(r4)
  stfs      f0, 0x1C(r3)
  lfs       f0, 0x8(r4)
  stfs      f0, 0x2C(r3)
  addi      r1, r1, 0x50
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000128
 */
void Matrixf::makeSQT(Vector3<float> &, Quat &, Vector3<float> &)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80428AB8
 * Size:	0000D0
 */
void Matrixf::makeTQ(Vector3<float> &, Quat &)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  stfd      f31, 0x10(r1)
  psq_st    f31,0x18(r1),0,0
  lfs       f4, 0x8(r5)
  lfs       f3, 0x21C4(r2)
  lfs       f5, 0xC(r5)
  fmuls     f8, f3, f4
  lfs       f6, 0x4(r5)
  fmuls     f2, f3, f5
  lfs       f0, 0x0(r5)
  fmuls     f7, f3, f6
  lfs       f1, 0x21B0(r2)
  fmuls     f3, f3, f0
  fmuls     f9, f8, f4
  fmuls     f10, f2, f5
  fmuls     f11, f7, f4
  fmuls     f13, f3, f5
  fsubs     f0, f1, f9
  fmuls     f2, f7, f6
  fmuls     f12, f7, f5
  fmuls     f31, f3, f4
  fsubs     f7, f1, f2
  fsubs     f0, f0, f10
  fsubs     f2, f11, f13
  fadds     f1, f12, f31
  stfs      f0, 0x0(r3)
  fadds     f0, f11, f13
  fmuls     f5, f8, f5
  fmuls     f6, f3, f6
  stfs      f2, 0x4(r3)
  fsubs     f4, f7, f10
  stfs      f1, 0x8(r3)
  fsubs     f2, f12, f31
  fsubs     f3, f5, f6
  stfs      f0, 0x10(r3)
  fadds     f1, f5, f6
  fsubs     f0, f7, f9
  stfs      f4, 0x14(r3)
  stfs      f3, 0x18(r3)
  stfs      f2, 0x20(r3)
  stfs      f1, 0x24(r3)
  stfs      f0, 0x28(r3)
  lfs       f0, 0x0(r4)
  stfs      f0, 0xC(r3)
  lfs       f0, 0x4(r4)
  stfs      f0, 0x1C(r3)
  lfs       f0, 0x8(r4)
  stfs      f0, 0x2C(r3)
  psq_l     f31,0x18(r1),0,0
  lfd       f31, 0x10(r1)
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	80428B88
 * Size:	0000C8
 */
void Matrixf::makeQ(Quat &)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  stfd      f31, 0x10(r1)
  psq_st    f31,0x18(r1),0,0
  lfs       f4, 0x8(r4)
  lfs       f3, 0x21C4(r2)
  lfs       f5, 0xC(r4)
  fmuls     f8, f3, f4
  lfs       f6, 0x4(r4)
  fmuls     f1, f3, f5
  lfs       f0, 0x0(r4)
  fmuls     f7, f3, f6
  lfs       f2, 0x21B0(r2)
  fmuls     f9, f3, f0
  lfs       f0, 0x21B4(r2)
  fmuls     f10, f8, f4
  fmuls     f11, f1, f5
  fmuls     f12, f7, f4
  fmuls     f31, f9, f5
  fsubs     f1, f2, f10
  fmuls     f3, f7, f6
  fmuls     f13, f7, f5
  fmuls     f4, f9, f4
  fsubs     f7, f2, f3
  fsubs     f1, f1, f11
  fsubs     f3, f12, f31
  fadds     f2, f13, f4
  stfs      f1, 0x0(r3)
  fadds     f1, f12, f31
  fmuls     f8, f8, f5
  fmuls     f6, f9, f6
  stfs      f3, 0x4(r3)
  fsubs     f5, f7, f11
  stfs      f2, 0x8(r3)
  fsubs     f3, f13, f4
  fsubs     f4, f8, f6
  stfs      f1, 0x10(r3)
  fadds     f2, f8, f6
  fsubs     f1, f7, f10
  stfs      f5, 0x14(r3)
  stfs      f4, 0x18(r3)
  stfs      f3, 0x20(r3)
  stfs      f2, 0x24(r3)
  stfs      f1, 0x28(r3)
  stfs      f0, 0xC(r3)
  stfs      f0, 0x1C(r3)
  stfs      f0, 0x2C(r3)
  psq_l     f31,0x18(r1),0,0
  lfd       f31, 0x10(r1)
  addi      r1, r1, 0x20
  blr
*/
}