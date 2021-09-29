

/*
 * --INFO--
 * Address:	8033028C
 * Size:	00002C
 */
void __ct__Q32og6Screen8AngleMgrFv(void)
{
/*
.loc_0x0:
  lfs       f2, -0x2F0(r2)
  li        r0, 0
  lfs       f1, -0x2EC(r2)
  stfs      f2, 0x0(r3)
  lfs       f0, -0x2E8(r2)
  stfs      f2, 0x4(r3)
  stfs      f2, 0x8(r3)
  stfs      f1, 0xC(r3)
  stfs      f0, 0x10(r3)
  stw       r0, 0x14(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	803302B8
 * Size:	000010
 */
void init__Q32og6Screen8AngleMgrFfff(void)
{
/*
.loc_0x0:
  stfs      f1, 0x0(r3)
  stfs      f2, 0xC(r3)
  stfs      f3, 0x10(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	803302C8
 * Size:	000080
 */
void chase__Q32og6Screen8AngleMgrFff(void)
{
/*
.loc_0x0:
  stfs      f1, 0x8(r3)
  lfs       f3, -0x2E4(r2)
  lfs       f0, -0x2F0(r2)
  b         .loc_0x1C

.loc_0x10:
  lfs       f1, 0x8(r3)
  fadds     f1, f1, f3
  stfs      f1, 0x8(r3)

.loc_0x1C:
  lfs       f1, 0x8(r3)
  fcmpo     cr0, f1, f0
  blt+      .loc_0x10
  lfs       f1, -0x2E4(r2)
  b         .loc_0x3C

.loc_0x30:
  lfs       f0, 0x8(r3)
  fsubs     f0, f0, f1
  stfs      f0, 0x8(r3)

.loc_0x3C:
  lfs       f0, 0x8(r3)
  fcmpo     cr0, f0, f1
  bgt+      .loc_0x30
  stfs      f2, 0x4(r3)
  lfs       f0, -0x2E0(r2)
  lfs       f1, 0x4(r3)
  fcmpo     cr0, f1, f0
  ble-      .loc_0x60
  stfs      f0, 0x4(r3)

.loc_0x60:
  lfs       f1, 0x4(r3)
  lfs       f0, -0x2DC(r2)
  fcmpo     cr0, f1, f0
  bge-      .loc_0x74
  stfs      f0, 0x4(r3)

.loc_0x74:
  li        r0, 0x1
  stw       r0, 0x14(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000030
 */
void reverseSpeed__Q32og6Screen8AngleMgrFf(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80330348
 * Size:	0001A8
 */
void calc__Q32og6Screen8AngleMgrFv(void)
{
/*
.loc_0x0:
  lwz       r0, 0x14(r3)
  cmpwi     r0, 0x1
  bne-      .loc_0x1A0
  lfs       f2, 0x0(r3)
  lfs       f1, 0x4(r3)
  lfs       f0, -0x2F0(r2)
  fadds     f1, f2, f1
  stfs      f1, 0x0(r3)
  lfs       f1, 0x0(r3)
  fcmpo     cr0, f1, f0
  bge-      .loc_0x3C
  lfs       f0, -0x2E4(r2)
  fadds     f0, f1, f0
  stfs      f0, 0x0(r3)
  b         .loc_0x54

.loc_0x3C:
  lfs       f0, -0x2E4(r2)
  fcmpo     cr0, f1, f0
  cror      2, 0x1, 0x2
  bne-      .loc_0x54
  fsubs     f0, f1, f0
  stfs      f0, 0x0(r3)

.loc_0x54:
  lfs       f2, 0x8(r3)
  lfs       f1, 0x0(r3)
  lfs       f0, -0x2D8(r2)
  fsubs     f3, f2, f1
  fabs      f1, f3
  frsp      f2, f1
  fcmpo     cr0, f2, f0
  ble-      .loc_0xF8
  lfs       f1, -0x2E4(r2)
  lfs       f0, -0x2F0(r2)
  fsubs     f2, f1, f2
  fcmpo     cr0, f3, f0
  ble-      .loc_0xC0
  lfs       f1, 0x4(r3)
  fcmpo     cr0, f1, f0
  ble-      .loc_0x170
  lfs       f0, 0x10(r3)
  fmuls     f0, f1, f0
  fabs      f0, f0
  frsp      f0, f0
  fcmpo     cr0, f2, f0
  ble-      .loc_0x170
  fneg      f1, f1
  lfs       f0, 0xC(r3)
  fmuls     f0, f1, f0
  stfs      f0, 0x4(r3)
  b         .loc_0x170

.loc_0xC0:
  lfs       f1, 0x4(r3)
  fcmpo     cr0, f1, f0
  bge-      .loc_0x170
  lfs       f0, 0x10(r3)
  fmuls     f0, f1, f0
  fabs      f0, f0
  frsp      f0, f0
  fcmpo     cr0, f2, f0
  ble-      .loc_0x170
  fneg      f1, f1
  lfs       f0, 0xC(r3)
  fmuls     f0, f1, f0
  stfs      f0, 0x4(r3)
  b         .loc_0x170

.loc_0xF8:
  lfs       f0, -0x2F0(r2)
  fcmpo     cr0, f3, f0
  ble-      .loc_0x13C
  lfs       f1, 0x4(r3)
  fcmpo     cr0, f1, f0
  bge-      .loc_0x170
  lfs       f0, 0x10(r3)
  fmuls     f0, f1, f0
  fabs      f0, f0
  frsp      f0, f0
  fcmpo     cr0, f2, f0
  ble-      .loc_0x170
  fneg      f1, f1
  lfs       f0, 0xC(r3)
  fmuls     f0, f1, f0
  stfs      f0, 0x4(r3)
  b         .loc_0x170

.loc_0x13C:
  lfs       f1, 0x4(r3)
  fcmpo     cr0, f1, f0
  ble-      .loc_0x170
  lfs       f0, 0x10(r3)
  fmuls     f0, f1, f0
  fabs      f0, f0
  frsp      f0, f0
  fcmpo     cr0, f2, f0
  ble-      .loc_0x170
  fneg      f1, f1
  lfs       f0, 0xC(r3)
  fmuls     f0, f1, f0
  stfs      f0, 0x4(r3)

.loc_0x170:
  lfs       f1, 0x4(r3)
  lfs       f0, -0x2D4(r2)
  fabs      f1, f1
  frsp      f1, f1
  fcmpo     cr0, f1, f0
  bge-      .loc_0x1A0
  li        r0, 0x2
  lfs       f0, -0x2F0(r2)
  stw       r0, 0x14(r3)
  lfs       f1, 0x8(r3)
  stfs      f1, 0x0(r3)
  stfs      f0, 0x4(r3)

.loc_0x1A0:
  lfs       f1, 0x0(r3)
  blr
*/
}