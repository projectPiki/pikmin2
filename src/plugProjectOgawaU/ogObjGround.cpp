

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
 * Address:	8030DEB8
 * Size:	000094
 */
void __ct__Q32og9newScreen9ObjGroundFPCc(void)
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
  bl        0x145C14
  lis       r3, 0x804E
  lfs       f0, -0xC70(r2)
  subi      r3, r3, 0x7D1C
  li        r0, 0
  stw       r3, 0x0(r30)
  addi      r4, r3, 0x10
  mr        r3, r30
  stw       r4, 0x18(r30)
  stfs      f0, 0x5C(r30)
  stfs      f0, 0x60(r30)
  stw       r31, 0x14(r30)
  stw       r0, 0x38(r30)
  stw       r0, 0x3C(r30)
  stw       r0, 0x40(r30)
  stw       r0, 0x44(r30)
  stw       r0, 0x48(r30)
  stw       r0, 0x4C(r30)
  stw       r0, 0x50(r30)
  stw       r0, 0x54(r30)
  stw       r0, 0x58(r30)
  stb       r0, 0x64(r30)
  stw       r0, 0x68(r30)
  stfs      f0, 0x6C(r30)
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
 * Address:	8030DF4C
 * Size:	0000AC
 */
void __dt__Q32og9newScreen9ObjGroundFv(void)
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
  subi      r4, r4, 0x7D1C
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
  bl        0x103620
  addi      r3, r30, 0x18
  li        r4, 0
  bl        -0x2F0F88
  mr        r3, r30
  li        r4, 0
  bl        0x1035C0

.loc_0x80:
  extsh.    r0, r31
  ble-      .loc_0x90
  mr        r3, r30
  bl        -0x2E9F24

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
 * Address:	8030DFF8
 * Size:	000464
 */
void doCreate__Q32og9newScreen9ObjGroundFP10JKRArchive(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  lis       r5, 0x8049
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  subi      r31, r5, 0x1EF0
  stw       r30, 0x18(r1)
  mr        r30, r4
  stw       r29, 0x14(r1)
  mr        r29, r3
  stw       r28, 0x10(r1)
  bl        0x145F84
  lis       r4, 0x4F
  lis       r6, 0x4F55
  li        r5, 0x4752
  mr        r28, r3
  addi      r4, r4, 0x4741
  addi      r6, r6, 0x4E44
  bl        0x12DC
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x5C
  stw       r28, 0x38(r29)
  b         .loc_0x1A4

.loc_0x5C:
  lis       r4, 0x4F
  lis       r6, 0x554D
  mr        r3, r28
  li        r5, 0x44
  addi      r4, r4, 0x4741
  addi      r6, r6, 0x4D59
  bl        0x12B0
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x190
  li        r3, 0x88
  bl        -0x2EA1D8
  cmplwi    r3, 0
  beq-      .loc_0x188
  lis       r4, 0x804B
  lis       r6, 0x804B
  addi      r12, r4, 0x1148
  lis       r5, 0x804B
  stw       r12, 0x0(r3)
  li        r11, 0
  lis       r4, 0x804B
  addi      r0, r6, 0x10DC
  stw       r11, 0x4(r3)
  li        r10, 0x4D2
  lfs       f0, -0xC70(r2)
  li        r9, 0x32
  stw       r0, 0x0(r3)
  li        r8, 0x1
  lfs       f3, -0xC6C(r2)
  li        r7, 0x2
  stfs      f0, 0x8(r3)
  li        r6, 0xA
  addi      r5, r5, 0x10C4
  lfs       f2, -0xC68(r2)
  stw       r11, 0xC(r3)
  addi      r0, r4, 0x10AC
  lfs       f1, -0xC64(r2)
  stw       r11, 0x14(r3)
  lfs       f0, -0xC60(r2)
  stw       r10, 0x10(r3)
  stw       r9, 0x18(r3)
  stb       r11, 0x1C(r3)
  stw       r11, 0x20(r3)
  stfs      f3, 0x24(r3)
  stw       r8, 0x28(r3)
  stw       r7, 0x2C(r3)
  stw       r6, 0x30(r3)
  stw       r6, 0x34(r3)
  stb       r8, 0x38(r3)
  stfs      f3, 0x3C(r3)
  stw       r8, 0x40(r3)
  stw       r7, 0x44(r3)
  stw       r6, 0x48(r3)
  stw       r6, 0x4C(r3)
  stb       r8, 0x50(r3)
  stw       r12, 0x68(r3)
  stw       r11, 0x6C(r3)
  stw       r5, 0x68(r3)
  stfs      f2, 0x74(r3)
  stfs      f2, 0x70(r3)
  stw       r12, 0x78(r3)
  stw       r11, 0x7C(r3)
  stw       r0, 0x78(r3)
  stfs      f1, 0x84(r3)
  stfs      f1, 0x80(r3)
  stb       r11, 0x5E(r3)
  stfs      f0, 0x54(r3)
  stb       r11, 0x5C(r3)
  stb       r8, 0x5D(r3)
  stw       r8, 0x58(r3)
  stb       r11, 0x5F(r3)
  stb       r11, 0x60(r3)
  stb       r11, 0x61(r3)
  stb       r11, 0x62(r3)
  stb       r11, 0x63(r3)
  stb       r11, 0x64(r3)

.loc_0x188:
  stw       r3, 0x38(r29)
  b         .loc_0x1A4

.loc_0x190:
  addi      r3, r31, 0xC
  addi      r5, r31, 0x1C
  li        r4, 0xBA
  crclr     6, 0x6
  bl        -0x2E3B58

.loc_0x1A4:
  li        r3, 0x150
  bl        -0x2EA2FC
  mr.       r0, r3
  beq-      .loc_0x1BC
  bl        -0x6CA8
  mr        r0, r3

.loc_0x1BC:
  stw       r0, 0x44(r29)
  li        r3, 0x198
  bl        -0x2EA318
  mr.       r0, r3
  beq-      .loc_0x1D8
  bl        -0xABBC
  mr        r0, r3

.loc_0x1D8:
  stw       r0, 0x48(r29)
  li        r3, 0x158
  bl        -0x2EA334
  mr.       r28, r3
  beq-      .loc_0x20C
  bl        0x126BC8
  lis       r3, 0x804D
  li        r0, 0
  addi      r3, r3, 0x7E70
  stw       r3, 0x0(r28)
  stw       r0, 0x148(r28)
  stw       r0, 0x14C(r28)
  stw       r0, 0x150(r28)

.loc_0x20C:
  stw       r28, 0x4C(r29)
  li        r3, 0x158
  bl        -0x2EA368
  mr.       r28, r3
  beq-      .loc_0x240
  bl        0x126B94
  lis       r3, 0x804D
  li        r0, 0
  addi      r3, r3, 0x7E70
  stw       r3, 0x0(r28)
  stw       r0, 0x148(r28)
  stw       r0, 0x14C(r28)
  stw       r0, 0x150(r28)

.loc_0x240:
  stw       r28, 0x50(r29)
  li        r3, 0x1A8
  bl        -0x2EA39C
  mr.       r0, r3
  beq-      .loc_0x25C
  bl        -0xA030
  mr        r0, r3

.loc_0x25C:
  stw       r0, 0x54(r29)
  li        r3, 0x148
  bl        -0x2EA3B8
  mr.       r0, r3
  beq-      .loc_0x278
  bl        0x126B44
  mr        r0, r3

.loc_0x278:
  stw       r0, 0x58(r29)
  li        r3, 0xC
  bl        -0x2EA3D4
  mr.       r0, r3
  beq-      .loc_0x298
  li        r4, 0x6
  bl        0xD00
  mr        r0, r3

.loc_0x298:
  stw       r0, 0x40(r29)
  mr        r7, r30
  addi      r4, r31, 0x3C
  lis       r6, 0x104
  lwz       r3, 0x40(r29)
  lwz       r5, 0x44(r29)
  bl        0xD78
  lwz       r3, 0x40(r29)
  mr        r7, r30
  lwz       r5, 0x48(r29)
  addi      r4, r31, 0x4C
  lis       r6, 0x104
  bl        0xD60
  lwz       r3, 0x40(r29)
  mr        r7, r30
  lwz       r5, 0x4C(r29)
  addi      r4, r31, 0x58
  lis       r6, 0x104
  bl        0xD48
  lwz       r3, 0x40(r29)
  mr        r7, r30
  lwz       r5, 0x50(r29)
  addi      r4, r31, 0x58
  lis       r6, 0x104
  bl        0xD30
  lwz       r3, 0x40(r29)
  mr        r7, r30
  lwz       r5, 0x54(r29)
  addi      r4, r31, 0x64
  lis       r6, 0x104
  bl        0xD18
  lwz       r3, 0x40(r29)
  mr        r7, r30
  lwz       r5, 0x58(r29)
  addi      r4, r31, 0x74
  lis       r6, 0x104
  bl        0xD00
  lwz       r3, 0x44(r29)
  bl        -0x6DE0
  lwz       r3, 0x48(r29)
  mr        r4, r30
  bl        -0xAC34
  lwz       r4, 0x38(r29)
  li        r5, 0
  lwz       r3, 0x4C(r29)
  addi      r4, r4, 0x24
  bl        -0x73A0
  lwz       r4, 0x38(r29)
  lbz       r0, 0x5E(r4)
  cmplwi    r0, 0
  beq-      .loc_0x378
  lwz       r3, 0x50(r29)
  addi      r4, r4, 0x3C
  li        r5, 0x2
  bl        -0x73C0
  b         .loc_0x388

.loc_0x378:
  lwz       r3, 0x50(r29)
  addi      r4, r4, 0x3C
  li        r5, 0x1
  bl        -0x73D4

.loc_0x388:
  lwz       r3, 0x54(r29)
  mr        r4, r30
  lwz       r12, 0x0(r3)
  lwz       r12, 0xA0(r12)
  mtctr     r12
  bctrl     
  lwz       r4, 0x38(r29)
  li        r3, 0x94
  lfs       f0, -0xC70(r2)
  lwz       r0, 0x20(r4)
  stw       r0, 0x68(r29)
  stfs      f0, 0x6C(r29)
  bl        -0x2EA50C
  mr.       r0, r3
  beq-      .loc_0x3CC
  bl        0x1F52C
  mr        r0, r3

.loc_0x3CC:
  stw       r0, 0x3C(r29)
  lis       r5, 0x6E73
  lis       r4, 0x4E
  lwz       r3, 0x58(r29)
  addi      r6, r5, 0x6F72
  addi      r5, r4, 0x7365
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  mr        r30, r3
  lwz       r3, 0x58(r29)
  lis       r4, 0x6861
  li        r5, 0x4E
  lwz       r12, 0x0(r3)
  addi      r6, r4, 0x7269
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  lwz       r5, 0x38(r29)
  mr        r4, r3
  lwz       r3, 0x3C(r29)
  lwz       r6, 0x58(r5)
  mr        r5, r30
  bl        0x1F604
  lwz       r5, 0x38(r29)
  lwz       r3, 0x48(r29)
  lbz       r4, 0x5F(r5)
  lbz       r5, 0x60(r5)
  bl        -0xA7A4
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
 * Address:	8030E45C
 * Size:	00029C
 */
void commonUpdate__Q32og9newScreen9ObjGroundFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  stw       r0, 0x34(r1)
  stw       r31, 0x2C(r1)
  mr        r31, r3
  stw       r30, 0x28(r1)
  bl        0x9AB4
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0xB4
  lwz       r4, 0x38(r31)
  lwz       r3, 0x44(r31)
  lfs       f0, 0x8(r4)
  stfs      f0, 0x14C(r3)
  lwz       r4, 0x38(r31)
  lbz       r0, 0x38(r4)
  cmplwi    r0, 0
  beq-      .loc_0x68
  lwz       r3, 0x48(r31)
  addi      r4, r4, 0x24
  bl        -0xAADC
  lwz       r5, 0x38(r31)
  lwz       r3, 0x54(r31)
  addi      r4, r5, 0x8
  addi      r5, r5, 0x24
  bl        -0xA1E4
  b         .loc_0x88

.loc_0x68:
  lwz       r3, 0x48(r31)
  addi      r4, r4, 0x3C
  bl        -0xAB00
  lwz       r5, 0x38(r31)
  lwz       r3, 0x54(r31)
  addi      r4, r5, 0x8
  addi      r5, r5, 0x3C
  bl        -0xA208

.loc_0x88:
  lwz       r3, 0x38(r31)
  lbz       r0, 0x5E(r3)
  cmplwi    r0, 0
  beq-      .loc_0xA8
  lwz       r3, 0x50(r31)
  li        r4, 0x2
  bl        -0x743C
  b         .loc_0xB4

.loc_0xA8:
  lwz       r3, 0x50(r31)
  li        r4, 0x1
  bl        -0x744C

.loc_0xB4:
  bl        0x114D14
  lhz       r30, 0x4(r3)
  bl        0x114D0C
  lhz       r3, 0x6(r3)
  lis       r0, 0x4330
  stw       r30, 0xC(r1)
  li        r4, 0x7A
  lfd       f4, -0xC48(r2)
  stw       r0, 0x8(r1)
  lfs       f2, -0xC5C(r2)
  lfd       f0, 0x8(r1)
  stw       r3, 0x14(r1)
  fsubs     f1, f0, f4
  lwz       r3, 0x40(r31)
  stw       r0, 0x10(r1)
  lfs       f3, -0xC70(r2)
  lfd       f0, 0x10(r1)
  fmuls     f1, f1, f2
  fsubs     f0, f0, f4
  fmuls     f2, f0, f2
  bl        0xBA4
  lfs       f1, -0xC6C(r2)
  lfs       f0, 0x60(r31)
  lfs       f3, -0xC58(r2)
  fadds     f2, f1, f0
  lfs       f1, -0xC5C(r2)
  lfs       f0, -0xC70(r2)
  fmuls     f2, f3, f2
  fmuls     f2, f2, f1
  fcmpo     cr0, f2, f0
  bge-      .loc_0x134
  fneg      f2, f2

.loc_0x134:
  lfs       f0, -0xC50(r2)
  lis       r3, 0x8050
  addi      r4, r3, 0x71A0
  lfs       f1, -0xC6C(r2)
  fmuls     f0, f2, f0
  lfs       f2, -0xC54(r2)
  lwz       r3, 0x40(r31)
  fctiwz    f0, f0
  stfd      f0, 0x18(r1)
  lwz       r0, 0x1C(r1)
  rlwinm    r0,r0,3,18,28
  add       r4, r4, r0
  lfs       f0, 0x4(r4)
  fneg      f0, f0
  fsubs     f0, f1, f0
  fmadds    f1, f2, f0, f1
  bl        0xAF0
  lwz       r3, 0x40(r31)
  bl        0xBD0
  lwz       r6, 0x38(r31)
  lwz       r3, 0x3C(r31)
  lfs       f1, 0x54(r6)
  lwz       r4, 0x58(r6)
  lbz       r5, 0x63(r6)
  lbz       r6, 0x64(r6)
  bl        0x1F4DC
  lwz       r3, 0x3C(r31)
  bl        0x1F81C
  lwz       r3, 0x38(r31)
  lbz       r0, 0x5C(r3)
  cmplwi    r0, 0
  beq-      .loc_0x224
  lwz       r3, 0x3C(r31)
  bl        0x1F668
  lwz       r3, 0x3C(r31)
  bl        0x1F774
  lis       r4, 0x8051
  lwz       r3, 0x3C(r31)
  addi      r4, r4, 0x3C18
  lfs       f1, 0x10(r4)
  lfs       f2, 0x14(r4)
  bl        0x1F67C
  lis       r4, 0x8051
  lwz       r3, 0x3C(r31)
  addi      r4, r4, 0x3C18
  lfs       f1, 0x18(r4)
  bl        0x1F740
  lis       r3, 0x8051
  lwz       r4, 0x3C(r31)
  addi      r3, r3, 0x3DDC
  lfs       f1, 0x38(r3)
  lfs       f0, 0x34(r3)
  stfs      f0, 0x5C(r4)
  stfs      f1, 0x60(r4)
  lfs       f1, 0x40(r3)
  lwz       r4, 0x3C(r31)
  lfs       f0, 0x3C(r3)
  stfs      f0, 0x64(r4)
  stfs      f1, 0x68(r4)
  b         .loc_0x22C

.loc_0x224:
  lwz       r3, 0x3C(r31)
  bl        0x1F608

.loc_0x22C:
  lwz       r3, 0x38(r31)
  lbz       r0, 0x61(r3)
  cmplwi    r0, 0
  beq-      .loc_0x24C
  lwz       r3, 0x48(r31)
  bl        -0xA9C4
  lwz       r3, 0x48(r31)
  bl        -0xA9AC

.loc_0x24C:
  lwz       r3, 0x38(r31)
  lbz       r0, 0x62(r3)
  cmplwi    r0, 0
  beq-      .loc_0x26C
  lwz       r3, 0x48(r31)
  bl        -0xA9D4
  lwz       r3, 0x48(r31)
  bl        -0xA9CC

.loc_0x26C:
  lis       r4, 0x8051
  lwz       r3, 0x48(r31)
  addi      r4, r4, 0x3C18
  lfs       f1, 0x1C(r4)
  lfs       f2, 0x20(r4)
  bl        -0xAA54
  lwz       r0, 0x34(r1)
  lwz       r31, 0x2C(r1)
  lwz       r30, 0x28(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	8030E6F8
 * Size:	000024
 */
void doUpdate__Q32og9newScreen9ObjGroundFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  bl        -0x2A8
  lwz       r0, 0x14(r1)
  li        r3, 0
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8030E71C
 * Size:	000090
 */
void doDraw__Q32og9newScreen9ObjGroundFR8Graphics(void)
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
  lwz       r3, 0x38(r3)
  lbz       r0, 0x5D(r3)
  cmplwi    r0, 0
  beq-      .loc_0x3C
  lwz       r3, 0x44(r30)
  li        r0, 0x1
  stb       r0, 0xB0(r3)
  b         .loc_0x48

.loc_0x3C:
  lwz       r3, 0x44(r30)
  li        r0, 0
  stb       r0, 0xB0(r3)

.loc_0x48:
  lwz       r3, 0x40(r30)
  cmplwi    r3, 0
  beq-      .loc_0x5C
  addi      r4, r31, 0x190
  bl        0xAA4

.loc_0x5C:
  lwz       r3, 0x38(r30)
  lbz       r0, 0x5C(r3)
  cmplwi    r0, 0
  beq-      .loc_0x78
  lwz       r3, 0x3C(r30)
  addi      r4, r31, 0x190
  bl        0x202BC

.loc_0x78:
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
 * Address:	8030E7AC
 * Size:	000014
 */
void doStart__Q32og9newScreen9ObjGroundFPCQ26Screen13StartSceneArg(void)
{
/*
.loc_0x0:
  lfs       f0, -0xC70(r2)
  stfs      f0, 0x5C(r3)
  stfs      f0, 0x60(r3)
  li        r3, 0x1
  blr
*/
}

/*
 * --INFO--
 * Address:	8030E7C0
 * Size:	000010
 */
void doEnd__Q32og9newScreen9ObjGroundFPCQ26Screen11EndSceneArg(void)
{
/*
.loc_0x0:
  lfs       f0, -0xC70(r2)
  stfs      f0, 0x5C(r3)
  li        r3, 0x1
  blr
*/
}

/*
 * --INFO--
 * Address:	8030E7D0
 * Size:	000074
 */
void doUpdateFadein__Q32og9newScreen9ObjGroundFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lis       r4, 0x8051
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  li        r31, 0
  lwz       r5, -0x6514(r13)
  lfs       f1, 0x5C(r3)
  lfs       f0, 0x54(r5)
  fadds     f0, f1, f0
  stfs      f0, 0x5C(r3)
  lfs       f0, 0x5C(r3)
  lfs       f1, 0x3C18(r4)
  fcmpo     cr0, f0, f1
  ble-      .loc_0x44
  stfs      f1, 0x5C(r3)
  li        r31, 0x1

.loc_0x44:
  lis       r4, 0x8051
  lfs       f1, 0x5C(r3)
  lfs       f0, 0x3C18(r4)
  fdivs     f0, f1, f0
  stfs      f0, 0x60(r3)
  bl        -0x3CC
  lwz       r0, 0x14(r1)
  mr        r3, r31
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8030E844
 * Size:	000004
 */
void doUpdateFadeinFinish__Q32og9newScreen9ObjGroundFv(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	8030E848
 * Size:	00000C
 */
void doUpdateFinish__Q32og9newScreen9ObjGroundFv(void)
{
/*
.loc_0x0:
  lfs       f0, -0xC70(r2)
  stfs      f0, 0x5C(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	8030E854
 * Size:	00007C
 */
void doUpdateFadeout__Q32og9newScreen9ObjGroundFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lis       r4, 0x8051
  stw       r0, 0x14(r1)
  addi      r4, r4, 0x3C18
  stw       r31, 0xC(r1)
  li        r31, 0
  lwz       r5, -0x6514(r13)
  lfs       f1, 0x5C(r3)
  lfs       f0, 0x54(r5)
  fadds     f0, f1, f0
  stfs      f0, 0x5C(r3)
  lfs       f0, 0x5C(r3)
  lfs       f1, 0x4(r4)
  fcmpo     cr0, f0, f1
  ble-      .loc_0x48
  stfs      f1, 0x5C(r3)
  li        r31, 0x1

.loc_0x48:
  lfs       f1, 0x5C(r3)
  lfs       f0, 0x4(r4)
  lfs       f2, -0xC6C(r2)
  fdivs     f0, f1, f0
  fsubs     f0, f2, f0
  stfs      f0, 0x60(r3)
  bl        -0x458
  lwz       r0, 0x14(r1)
  mr        r3, r31
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8030E8D0
 * Size:	000004
 */
void doUpdateFadeoutFinish__Q32og9newScreen9ObjGroundFv(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	8030E8D4
 * Size:	00007C
 */
void __sinit_ogObjGround_cpp(void)
{
/*
.loc_0x0:
  lis       r3, 0x8051
  lfs       f7, -0xC40(r2)
  addi      r5, r3, 0x48B0
  lis       r4, 0x804E
  lfs       f8, 0x0(r5)
  lis       r3, 0x8051
  li        r5, -0x1
  lfs       f4, -0xC70(r2)
  stfsu     f8, -0x7D28(r4)
  li        r0, 0
  lfs       f6, -0xC3C(r2)
  stfsu     f7, 0x3C18(r3)
  lfs       f5, -0xC38(r2)
  lfs       f3, -0xC34(r2)
  lfs       f2, -0xC30(r2)
  lfs       f1, -0xC68(r2)
  lfs       f0, -0xC2C(r2)
  stw       r5, -0x6848(r13)
  stfs      f8, -0x6844(r13)
  stfs      f8, 0x4(r4)
  stfs      f8, 0x8(r4)
  stfs      f6, 0x4(r3)
  stfs      f5, 0x8(r3)
  stfs      f4, 0xC(r3)
  stfs      f3, 0x10(r3)
  stfs      f2, 0x14(r3)
  stfs      f1, 0x18(r3)
  stb       r0, 0x24(r3)
  stfs      f4, 0x1C(r3)
  stfs      f0, 0x20(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	8030E950
 * Size:	000008
 */
void @24@__dt__Q32og9newScreen9ObjGroundFv(void)
{
/*
.loc_0x0:
  subi      r3, r3, 0x18
  b         -0xA08
*/
}