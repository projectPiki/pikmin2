

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
 * Size:	00002C
 */
void ebi::EGEBox2f::isIn(Vector2<float>&)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803C9FF4
 * Size:	000058
 */
bool ebi::EGEBox2f::isOut(Vector2<float>&)
{
	/*
	.loc_0x0:
	  lfs       f1, 0x0(r4)
	  lfs       f0, 0x0(r3)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x18
	  li        r3, 0x1
	  blr

	.loc_0x18:
	  lfs       f0, 0x8(r3)
	  fcmpo     cr0, f0, f1
	  bge-      .loc_0x2C
	  li        r3, 0x1
	  blr

	.loc_0x2C:
	  lfs       f1, 0x4(r4)
	  lfs       f0, 0x4(r3)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x44
	  li        r3, 0x1
	  blr

	.loc_0x44:
	  lfs       f0, 0xC(r3)
	  fcmpo     cr0, f0, f1
	  mfcr      r0
	  rlwinm    r3,r0,1,31,31
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000054
 */
void in__Q23ebi8EGEBox2fFP10Vector2<float>(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803CA04C
 * Size:	000070
 */
void isIn__Q23ebi8EGEBox2fFR10Vector2<float> f(void)
{
	/*
	.loc_0x0:
	  lfs       f3, 0x0(r4)
	  lfs       f0, 0x0(r3)
	  fsubs     f2, f3, f1
	  fcmpo     cr0, f2, f0
	  bge-      .loc_0x1C
	  li        r3, 0
	  blr

	.loc_0x1C:
	  fadds     f0, f3, f1
	  lfs       f2, 0x8(r3)
	  fcmpo     cr0, f2, f0
	  bge-      .loc_0x34
	  li        r3, 0
	  blr

	.loc_0x34:
	  lfs       f3, 0x4(r4)
	  lfs       f0, 0x4(r3)
	  fsubs     f2, f3, f1
	  fcmpo     cr0, f2, f0
	  bge-      .loc_0x50
	  li        r3, 0
	  blr

	.loc_0x50:
	  fadds     f0, f3, f1
	  lfs       f1, 0xC(r3)
	  fcmpo     cr0, f1, f0
	  mfcr      r0
	  rlwinm    r0,r0,1,31,31
	  cntlzw    r0, r0
	  rlwinm    r3,r0,27,5,31
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803CA0BC
 * Size:	000068
 */
void isOut__Q23ebi8EGEBox2fFR10Vector2<float> f(void)
{
	/*
	.loc_0x0:
	  lfs       f3, 0x0(r4)
	  lfs       f0, 0x0(r3)
	  fadds     f2, f3, f1
	  fcmpo     cr0, f2, f0
	  bge-      .loc_0x1C
	  li        r3, 0x1
	  blr

	.loc_0x1C:
	  fsubs     f0, f3, f1
	  lfs       f2, 0x8(r3)
	  fcmpo     cr0, f2, f0
	  bge-      .loc_0x34
	  li        r3, 0x1
	  blr

	.loc_0x34:
	  lfs       f3, 0x4(r4)
	  lfs       f0, 0x4(r3)
	  fadds     f2, f3, f1
	  fcmpo     cr0, f2, f0
	  bge-      .loc_0x50
	  li        r3, 0x1
	  blr

	.loc_0x50:
	  fsubs     f0, f3, f1
	  lfs       f1, 0xC(r3)
	  fcmpo     cr0, f1, f0
	  mfcr      r0
	  rlwinm    r3,r0,1,31,31
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803CA124
 * Size:	000064
 */
void in__Q23ebi8EGEBox2fFP10Vector2<float> f(void)
{
	/*
	.loc_0x0:
	  lfs       f0, 0x0(r3)
	  lfs       f2, 0x0(r4)
	  fadds     f0, f0, f1
	  fcmpo     cr0, f2, f0
	  bge-      .loc_0x1C
	  stfs      f0, 0x0(r4)
	  b         .loc_0x30

	.loc_0x1C:
	  lfs       f0, 0x8(r3)
	  fsubs     f0, f0, f1
	  fcmpo     cr0, f0, f2
	  bge-      .loc_0x30
	  stfs      f0, 0x0(r4)

	.loc_0x30:
	  lfs       f0, 0x4(r3)
	  lfs       f2, 0x4(r4)
	  fadds     f0, f0, f1
	  fcmpo     cr0, f2, f0
	  bge-      .loc_0x4C
	  stfs      f0, 0x4(r4)
	  blr

	.loc_0x4C:
	  lfs       f0, 0xC(r3)
	  fsubs     f0, f0, f1
	  fcmpo     cr0, f0, f2
	  bgelr-
	  stfs      f0, 0x4(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803CA188
 * Size:	00005C
 */
void isOut__Q23ebi11EGECircle2fFR10Vector2<float>(void)
{
	/*
	.loc_0x0:
	  lfs       f1, 0x4(r4)
	  lfs       f0, 0x4(r3)
	  lfs       f2, 0x0(r4)
	  fsubs     f3, f1, f0
	  lfs       f1, 0x0(r3)
	  lfs       f0, 0x1690(r2)
	  fsubs     f1, f2, f1
	  fmuls     f2, f3, f3
	  fmadds    f1, f1, f1, f2
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x3C
	  ble-      .loc_0x40
	  fsqrte    f0, f1
	  fmuls     f1, f0, f1
	  b         .loc_0x40

	.loc_0x3C:
	  fmr       f1, f0

	.loc_0x40:
	  lfs       f0, 0x8(r3)
	  fcmpo     cr0, f0, f1
	  bge-      .loc_0x54
	  li        r3, 0x1
	  blr

	.loc_0x54:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803CA1E4
 * Size:	0000B8
 */
void in__Q23ebi11EGECircle2fFP10Vector2<float>(void)
{
	/*
	.loc_0x0:
	  lfs       f7, 0x4(r3)
	  lfs       f0, 0x4(r4)
	  lfs       f8, 0x0(r3)
	  fsubs     f3, f7, f0
	  lfs       f0, 0x0(r4)
	  lfs       f1, 0x1690(r2)
	  fsubs     f2, f8, f0
	  fmuls     f4, f3, f3
	  fmadds    f5, f2, f2, f4
	  fcmpo     cr0, f5, f1
	  ble-      .loc_0x40
	  ble-      .loc_0x3C
	  fsqrte    f0, f5
	  fmuls     f1, f0, f5
	  b         .loc_0x40

	.loc_0x3C:
	  fmr       f1, f5

	.loc_0x40:
	  lfs       f6, 0x8(r3)
	  fcmpo     cr0, f6, f1
	  bge-      .loc_0xB0
	  lfs       f0, 0x1690(r2)
	  fcmpo     cr0, f5, f0
	  ble-      .loc_0x70
	  fmadds    f1, f2, f2, f4
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x74
	  fsqrte    f0, f1
	  fmuls     f1, f0, f1
	  b         .loc_0x74

	.loc_0x70:
	  fmr       f1, f0

	.loc_0x74:
	  lfs       f0, 0x1690(r2)
	  fcmpu     cr0, f0, f1
	  beq-      .loc_0x90
	  lfs       f0, 0x1694(r2)
	  fdivs     f0, f0, f1
	  fmuls     f2, f2, f0
	  fmuls     f3, f3, f0

	.loc_0x90:
	  fmuls     f2, f2, f6
	  li        r3, 0x1
	  fmuls     f3, f3, f6
	  fsubs     f1, f8, f2
	  fsubs     f0, f7, f3
	  stfs      f1, 0x0(r4)
	  stfs      f0, 0x4(r4)
	  blr

	.loc_0xB0:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803CA29C
 * Size:	0000BC
 */
void out__Q23ebi11EGECircle2fFP10Vector2<float>(void)
{
	/*
	.loc_0x0:
	  lfs       f7, 0x4(r3)
	  lfs       f0, 0x4(r4)
	  lfs       f8, 0x0(r3)
	  fsubs     f3, f7, f0
	  lfs       f0, 0x0(r4)
	  lfs       f1, 0x1690(r2)
	  fsubs     f2, f8, f0
	  fmuls     f4, f3, f3
	  fmadds    f5, f2, f2, f4
	  fcmpo     cr0, f5, f1
	  ble-      .loc_0x40
	  ble-      .loc_0x3C
	  fsqrte    f0, f5
	  fmuls     f1, f0, f5
	  b         .loc_0x40

	.loc_0x3C:
	  fmr       f1, f5

	.loc_0x40:
	  lfs       f6, 0x8(r3)
	  fcmpo     cr0, f6, f1
	  cror      2, 0, 0x2
	  bne-      .loc_0x58
	  li        r3, 0
	  blr

	.loc_0x58:
	  lfs       f0, 0x1690(r2)
	  fcmpo     cr0, f5, f0
	  ble-      .loc_0x7C
	  fmadds    f1, f2, f2, f4
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x80
	  fsqrte    f0, f1
	  fmuls     f1, f0, f1
	  b         .loc_0x80

	.loc_0x7C:
	  fmr       f1, f0

	.loc_0x80:
	  lfs       f0, 0x1690(r2)
	  fcmpu     cr0, f0, f1
	  beq-      .loc_0x9C
	  lfs       f0, 0x1694(r2)
	  fdivs     f0, f0, f1
	  fmuls     f2, f2, f0
	  fmuls     f3, f3, f0

	.loc_0x9C:
	  fmuls     f2, f2, f6
	  li        r3, 0x1
	  fmuls     f3, f3, f6
	  fsubs     f1, f8, f2
	  fsubs     f0, f7, f3
	  stfs      f1, 0x0(r4)
	  stfs      f0, 0x4(r4)
	  blr
	*/
}
