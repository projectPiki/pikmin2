

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
 * Address:	803C1A3C
 * Size:	000060
 */
void ebi::EUTPadInterface_countNum::init( (Controller *, long, long, long *, ebi::EUTPadInterface_countNum::enumMode, float, float))
{
/*
.loc_0x0:
  stw       r4, 0x0(r3)
  li        r0, 0
  stw       r5, 0x10(r3)
  stw       r6, 0x14(r3)
  stw       r7, 0x18(r3)
  stw       r8, 0x28(r3)
  stfs      f1, 0x20(r3)
  stfs      f2, 0x24(r3)
  stw       r0, 0x4(r3)
  stw       r0, 0x8(r3)
  lwz       r4, 0x18(r3)
  lwz       r0, 0x0(r4)
  cmpw      r0, r5
  bge-      .loc_0x3C
  stw       r5, 0x0(r4)

.loc_0x3C:
  lwz       r4, 0x18(r3)
  lwz       r0, 0x0(r4)
  cmpw      r0, r6
  ble-      .loc_0x50
  stw       r6, 0x0(r4)

.loc_0x50:
  lwz       r4, 0x18(r3)
  lwz       r0, 0x0(r4)
  stw       r0, 0x1C(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	803C1A9C
 * Size:	000304
 */
void ebi::EUTPadInterface_countNum::update(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  lwz       r3, 0x4(r3)
  cmplwi    r3, 0
  beq-      .loc_0x28
  subi      r0, r3, 0x1
  stw       r0, 0x4(r31)

.loc_0x28:
  li        r3, 0
  stb       r3, 0xD(r31)
  lwz       r0, 0x28(r31)
  cmpwi     r0, 0x2
  beq-      .loc_0x10C
  bge-      .loc_0x50
  cmpwi     r0, 0
  beq-      .loc_0x5C
  bge-      .loc_0xB4
  b         .loc_0x1B8

.loc_0x50:
  cmpwi     r0, 0x4
  bge-      .loc_0x1B8
  b         .loc_0x164

.loc_0x5C:
  lwz       r4, 0x0(r31)
  lwz       r0, 0x18(r4)
  rlwinm.   r0,r0,0,31,31
  bne-      .loc_0x7C
  lfs       f1, 0x48(r4)
  lfs       f0, 0x1520(r2)
  fcmpo     cr0, f1, f0
  bge-      .loc_0x80

.loc_0x7C:
  li        r3, 0x1

.loc_0x80:
  lwz       r0, 0x18(r4)
  mr        r5, r3
  rlwinm.   r0,r0,0,30,30
  bne-      .loc_0xA0
  lfs       f1, 0x48(r4)
  lfs       f0, 0x1524(r2)
  fcmpo     cr0, f1, f0
  ble-      .loc_0xA8

.loc_0xA0:
  li        r0, 0x1
  b         .loc_0xAC

.loc_0xA8:
  li        r0, 0

.loc_0xAC:
  mr        r4, r0
  b         .loc_0x1B8

.loc_0xB4:
  lwz       r4, 0x0(r31)
  lwz       r0, 0x18(r4)
  rlwinm.   r0,r0,0,30,30
  bne-      .loc_0xD4
  lfs       f1, 0x48(r4)
  lfs       f0, 0x1524(r2)
  fcmpo     cr0, f1, f0
  ble-      .loc_0xD8

.loc_0xD4:
  li        r3, 0x1

.loc_0xD8:
  lwz       r0, 0x18(r4)
  mr        r5, r3
  rlwinm.   r0,r0,0,31,31
  bne-      .loc_0xF8
  lfs       f1, 0x48(r4)
  lfs       f0, 0x1520(r2)
  fcmpo     cr0, f1, f0
  bge-      .loc_0x100

.loc_0xF8:
  li        r0, 0x1
  b         .loc_0x104

.loc_0x100:
  li        r0, 0

.loc_0x104:
  mr        r4, r0
  b         .loc_0x1B8

.loc_0x10C:
  lwz       r4, 0x0(r31)
  lwz       r0, 0x18(r4)
  rlwinm.   r0,r0,0,28,28
  bne-      .loc_0x12C
  lfs       f1, 0x4C(r4)
  lfs       f0, 0x1524(r2)
  fcmpo     cr0, f1, f0
  ble-      .loc_0x130

.loc_0x12C:
  li        r3, 0x1

.loc_0x130:
  lwz       r0, 0x18(r4)
  mr        r5, r3
  rlwinm.   r0,r0,0,29,29
  bne-      .loc_0x150
  lfs       f1, 0x4C(r4)
  lfs       f0, 0x1520(r2)
  fcmpo     cr0, f1, f0
  bge-      .loc_0x158

.loc_0x150:
  li        r0, 0x1
  b         .loc_0x15C

.loc_0x158:
  li        r0, 0

.loc_0x15C:
  mr        r4, r0
  b         .loc_0x1B8

.loc_0x164:
  lwz       r4, 0x0(r31)
  lwz       r0, 0x18(r4)
  rlwinm.   r0,r0,0,29,29
  bne-      .loc_0x184
  lfs       f1, 0x4C(r4)
  lfs       f0, 0x1520(r2)
  fcmpo     cr0, f1, f0
  bge-      .loc_0x188

.loc_0x184:
  li        r3, 0x1

.loc_0x188:
  lwz       r0, 0x18(r4)
  mr        r5, r3
  rlwinm.   r0,r0,0,28,28
  bne-      .loc_0x1A8
  lfs       f1, 0x4C(r4)
  lfs       f0, 0x1524(r2)
  fcmpo     cr0, f1, f0
  ble-      .loc_0x1B0

.loc_0x1A8:
  li        r0, 0x1
  b         .loc_0x1B4

.loc_0x1B0:
  li        r0, 0

.loc_0x1B4:
  mr        r4, r0

.loc_0x1B8:
  rlwinm.   r0,r5,0,24,31
  beq-      .loc_0x24C
  lwz       r0, 0x4(r31)
  cmplwi    r0, 0
  bne-      .loc_0x2F0
  lwz       r3, 0x18(r31)
  lwz       r0, 0x14(r31)
  lwz       r3, 0x0(r3)
  cmpw      r3, r0
  bge-      .loc_0x2F0
  stw       r3, 0x1C(r31)
  li        r3, 0x1
  lwz       r5, 0x18(r31)
  lwz       r4, 0x0(r5)
  addi      r0, r4, 0x1
  stw       r0, 0x0(r5)
  stb       r3, 0xD(r31)
  lbz       r0, 0xC(r31)
  cmplwi    r0, 0
  bne-      .loc_0x22C
  stb       r3, 0xC(r31)
  lwz       r3, -0x6514(r13)
  lfs       f1, 0x20(r31)
  lfs       f0, 0x54(r3)
  fdivs     f1, f1, f0
  bl        -0x30016C
  stw       r3, 0x4(r31)
  stw       r3, 0x8(r31)
  b         .loc_0x2F0

.loc_0x22C:
  lwz       r3, -0x6514(r13)
  lfs       f1, 0x24(r31)
  lfs       f0, 0x54(r3)
  fdivs     f1, f1, f0
  bl        -0x30018C
  stw       r3, 0x4(r31)
  stw       r3, 0x8(r31)
  b         .loc_0x2F0

.loc_0x24C:
  rlwinm.   r0,r4,0,24,31
  beq-      .loc_0x2E0
  lwz       r0, 0x4(r31)
  cmplwi    r0, 0
  bne-      .loc_0x2F0
  lwz       r3, 0x18(r31)
  lwz       r0, 0x10(r31)
  lwz       r3, 0x0(r3)
  cmpw      r3, r0
  ble-      .loc_0x2F0
  stw       r3, 0x1C(r31)
  li        r3, 0x1
  lwz       r5, 0x18(r31)
  lwz       r4, 0x0(r5)
  subi      r0, r4, 0x1
  stw       r0, 0x0(r5)
  stb       r3, 0xD(r31)
  lbz       r0, 0xC(r31)
  cmplwi    r0, 0
  bne-      .loc_0x2C0
  stb       r3, 0xC(r31)
  lwz       r3, -0x6514(r13)
  lfs       f1, 0x20(r31)
  lfs       f0, 0x54(r3)
  fdivs     f1, f1, f0
  bl        -0x300200
  stw       r3, 0x4(r31)
  stw       r3, 0x8(r31)
  b         .loc_0x2F0

.loc_0x2C0:
  lwz       r3, -0x6514(r13)
  lfs       f1, 0x24(r31)
  lfs       f0, 0x54(r3)
  fdivs     f1, f1, f0
  bl        -0x300220
  stw       r3, 0x4(r31)
  stw       r3, 0x8(r31)
  b         .loc_0x2F0

.loc_0x2E0:
  li        r0, 0
  stb       r0, 0xC(r31)
  stw       r0, 0x4(r31)
  stw       r0, 0x8(r31)

.loc_0x2F0:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	803C1DA0
 * Size:	000114
 */
void ebi::EUTColor_complement(JUtility::TColor &, JUtility::TColor &, float, float, JUtility::TColor *)
{
/*
.loc_0x0:
  stwu      r1, -0x70(r1)
  lis       r6, 0x4330
  lfd       f4, 0x1528(r2)
  lbz       r0, 0x0(r4)
  lbz       r7, 0x0(r3)
  stw       r0, 0x14(r1)
  stw       r6, 0x10(r1)
  lfd       f0, 0x10(r1)
  stw       r7, 0xC(r1)
  fsubs     f0, f0, f4
  stw       r6, 0x8(r1)
  lfd       f3, 0x8(r1)
  fmuls     f0, f2, f0
  stw       r6, 0x28(r1)
  fsubs     f3, f3, f4
  stw       r6, 0x20(r1)
  fmadds    f0, f1, f3, f0
  stw       r6, 0x40(r1)
  stw       r6, 0x38(r1)
  fctiwz    f0, f0
  stw       r6, 0x58(r1)
  stfd      f0, 0x18(r1)
  lwz       r0, 0x1C(r1)
  stw       r6, 0x50(r1)
  stb       r0, 0x0(r5)
  lbz       r0, 0x1(r4)
  lbz       r6, 0x1(r3)
  stw       r0, 0x2C(r1)
  lfd       f0, 0x28(r1)
  stw       r6, 0x24(r1)
  fsubs     f0, f0, f4
  lfd       f3, 0x20(r1)
  fsubs     f3, f3, f4
  fmuls     f0, f2, f0
  fmadds    f0, f1, f3, f0
  fctiwz    f0, f0
  stfd      f0, 0x30(r1)
  lwz       r0, 0x34(r1)
  stb       r0, 0x1(r5)
  lbz       r0, 0x2(r4)
  lbz       r6, 0x2(r3)
  stw       r0, 0x44(r1)
  lfd       f0, 0x40(r1)
  stw       r6, 0x3C(r1)
  fsubs     f0, f0, f4
  lfd       f3, 0x38(r1)
  fsubs     f3, f3, f4
  fmuls     f0, f2, f0
  fmadds    f0, f1, f3, f0
  fctiwz    f0, f0
  stfd      f0, 0x48(r1)
  lwz       r0, 0x4C(r1)
  stb       r0, 0x2(r5)
  lbz       r0, 0x3(r4)
  lbz       r3, 0x3(r3)
  stw       r0, 0x5C(r1)
  lfd       f0, 0x58(r1)
  stw       r3, 0x54(r1)
  fsubs     f0, f0, f4
  lfd       f3, 0x50(r1)
  fsubs     f3, f3, f4
  fmuls     f0, f2, f0
  fmadds    f0, f1, f3, f0
  fctiwz    f0, f0
  stfd      f0, 0x60(r1)
  lwz       r0, 0x64(r1)
  stb       r0, 0x3(r5)
  addi      r1, r1, 0x70
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000004
 */
void ebi::EUTDebug_Wait()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803C1EB4
 * Size:	000004
 */
void ebi::EUTDebug_Tag64ToName(unsigned long long, char *)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	803C1EB8
 * Size:	000004
 */
void ebi::EUTDebug_Tag32ToName(unsigned long, char *)
{
/*
.loc_0x0:
  blr
*/
}
