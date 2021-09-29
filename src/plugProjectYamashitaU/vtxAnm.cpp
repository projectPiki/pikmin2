

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
 * Size:	000014
 */
void setVtxColorIndex__Q24Game17FieldVtxColorInfoFUs(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000044
 */
void __ct__Q24Game20FieldVtxColorControlFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80122450
 * Size:	0000B0
 */
void __ct__Q24Game16FieldVtxColorMgrFP12J3DModelData(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lis       r7, 0x804F
  lis       r6, 0x8048
  stw       r0, 0x14(r1)
  lis       r5, 0x804A
  addi      r0, r5, 0x2FD0
  li        r8, 0
  stw       r31, 0xC(r1)
  lis       r5, 0x804B
  subi      r7, r7, 0x4AD8
  subi      r6, r6, 0x4BE0
  stw       r0, 0x0(r3)
  li        r0, 0x1
  subi      r5, r5, 0x3AE8
  lfs       f0, -0x6694(r2)
  stw       r0, 0x4(r3)
  addi      r0, r5, 0x10
  mr        r31, r3
  stw       r8, 0x8(r3)
  stw       r7, 0xC(r3)
  stw       r8, 0x1C(r3)
  stw       r8, 0x18(r3)
  stw       r8, 0x14(r3)
  stw       r8, 0x10(r3)
  stw       r6, 0x20(r3)
  stw       r5, 0x0(r3)
  stw       r0, 0xC(r3)
  stw       r8, 0x24(r3)
  stw       r8, 0x28(r3)
  stw       r8, 0x30(r3)
  stfs      f0, 0x34(r3)
  stb       r8, 0x38(r3)
  stb       r8, 0x39(r3)
  stb       r8, 0x3A(r3)
  stb       r8, 0x3B(r3)
  stw       r4, 0x24(r3)
  bl        .loc_0xB0
  lwz       r0, 0x14(r1)
  mr        r3, r31
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr       

.loc_0xB0:
*/
}

/*
 * --INFO--
 * Address:	80122500
 * Size:	0001F8
 */
void createFieldVtxColorInfo__Q24Game16FieldVtxColorMgrFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  li        r4, -0x4
  stw       r0, 0x24(r1)
  li        r0, 0
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  mr        r30, r3
  stw       r29, 0x14(r1)
  stw       r28, 0x10(r1)
  lwz       r3, 0x24(r3)
  lwz       r31, 0xAC(r3)
  stw       r0, 0x2C(r30)
  lwz       r3, 0x24(r30)
  lwz       r29, 0x88(r3)
  mulli     r3, r29, 0x6
  addi      r3, r3, 0x10
  bl        -0xFE54C
  lis       r4, 0x8012
  mr        r7, r29
  addi      r4, r4, 0x26F8
  li        r5, 0
  li        r6, 0x6
  bl        -0x60B6C
  stw       r3, 0x28(r30)
  li        r5, 0
  b         .loc_0x84

.loc_0x6C:
  rlwinm    r0,r5,0,16,31
  lwz       r4, 0x28(r30)
  mulli     r3, r0, 0x6
  addi      r0, r3, 0x2
  sthx      r5, r4, r0
  addi      r5, r5, 0x1

.loc_0x84:
  lwz       r4, 0x24(r30)
  rlwinm    r0,r5,0,16,31
  lwz       r3, 0x88(r4)
  cmplw     r0, r3
  blt+      .loc_0x6C
  lhz       r29, 0x7C(r4)
  li        r28, 0
  b         .loc_0xC0

.loc_0xA4:
  lwz       r4, 0x24(r30)
  rlwinm    r0,r28,2,14,29
  mr        r3, r30
  lwz       r4, 0x80(r4)
  lwzx      r4, r4, r0
  bl        0x6FC
  addi      r28, r28, 0x1

.loc_0xC0:
  rlwinm    r0,r28,0,16,31
  cmplw     r0, r29
  blt+      .loc_0xA4
  li        r6, 0
  li        r5, 0xFF
  b         .loc_0x118

.loc_0xD8:
  rlwinm    r0,r6,0,16,31
  lwz       r3, 0x28(r30)
  mulli     r0, r0, 0x6
  lhzx      r0, r3, r0
  rlwinm    r0,r0,2,0,29
  add       r4, r31, r0
  lbz       r0, 0x3(r4)
  cmplwi    r0, 0
  beq-      .loc_0x108
  lwz       r3, 0x2C(r30)
  addi      r0, r3, 0x1
  stw       r0, 0x2C(r30)

.loc_0x108:
  stb       r5, 0x2(r4)
  addi      r6, r6, 0x1
  stb       r5, 0x1(r4)
  stb       r5, 0x0(r4)

.loc_0x118:
  lwz       r3, 0x24(r30)
  rlwinm    r4,r6,0,16,31
  lwz       r0, 0x88(r3)
  cmplw     r4, r0
  blt+      .loc_0xD8
  lwz       r29, 0x2C(r30)
  mulli     r3, r29, 0x6
  addi      r3, r3, 0x10
  bl        -0xFE68C
  lis       r4, 0x8012
  mr        r7, r29
  addi      r4, r4, 0x26F8
  li        r5, 0
  li        r6, 0x6
  bl        -0x60C60
  mr        r29, r3
  li        r3, 0
  li        r7, 0
  b         .loc_0x1AC

.loc_0x164:
  rlwinm    r0,r7,0,16,31
  lwz       r4, 0x28(r30)
  mulli     r0, r0, 0x6
  add       r6, r4, r0
  lhz       r5, 0x0(r6)
  rlwinm    r4,r5,2,14,29
  addi      r0, r4, 0x3
  lbzx      r0, r31, r0
  cmplwi    r0, 0
  beq-      .loc_0x1A8
  add       r4, r29, r3
  addi      r3, r3, 0x6
  sth       r5, 0x0(r4)
  lhz       r0, 0x2(r6)
  sth       r0, 0x2(r4)
  lbz       r0, 0x4(r6)
  stb       r0, 0x4(r4)

.loc_0x1A8:
  addi      r7, r7, 0x1

.loc_0x1AC:
  lwz       r4, 0x24(r30)
  rlwinm    r5,r7,0,16,31
  lwz       r0, 0x88(r4)
  cmplw     r5, r0
  blt+      .loc_0x164
  lwz       r3, 0x28(r30)
  cmplwi    r3, 0
  beq-      .loc_0x1D4
  subi      r3, r3, 0x10
  bl        -0xFE5F8

.loc_0x1D4:
  stw       r29, 0x28(r30)
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
 * Address:	801226F8
 * Size:	00001C
 */
void __ct__Q24Game17FieldVtxColorInfoFv(void)
{
/*
.loc_0x0:
  lis       r4, 0x1
  li        r0, 0
  subi      r4, r4, 0x1
  sth       r4, 0x0(r3)
  sth       r4, 0x2(r3)
  stb       r0, 0x4(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000E0
 */
void updateFieldVtxColorControl__Q24Game16FieldVtxColorMgrFPQ24Game20FieldVtxColorControl(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80122714
 * Size:	0001C8
 */
void initVtxColor__Q24Game16FieldVtxColorMgrFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  stw       r0, 0x34(r1)
  stfd      f31, 0x20(r1)
  psq_st    f31,0x28(r1),0,0
  stw       r31, 0x1C(r1)
  mr        r31, r3
  li        r5, 0
  lfs       f31, 0x34(r3)
  mr        r4, r5
  lfs       f0, -0x6698(r2)
  li        r6, 0
  stfs      f0, 0x34(r3)
  b         .loc_0x4C

.loc_0x38:
  lwz       r3, 0x28(r31)
  addi      r0, r5, 0x4
  addi      r5, r5, 0x6
  addi      r6, r6, 0x1
  stbx      r4, r3, r0

.loc_0x4C:
  lwz       r0, 0x2C(r31)
  cmpw      r6, r0
  blt+      .loc_0x38
  lwz       r8, 0x30(r31)
  lfs       f2, -0x6690(r2)
  lfs       f1, -0x669C(r2)
  b         .loc_0x138

.loc_0x68:
  lfs       f4, 0x18(r8)
  lfs       f3, 0x14(r8)
  lfs       f5, 0x34(r31)
  fsubs     f0, f4, f3
  lwz       r7, 0x1C(r8)
  fabs      f0, f0
  frsp      f0, f0
  fcmpo     cr0, f0, f5
  bge-      .loc_0x94
  stfs      f3, 0x18(r8)
  b         .loc_0xB0

.loc_0x94:
  fcmpo     cr0, f4, f3
  bge-      .loc_0xA0
  b         .loc_0xA4

.loc_0xA0:
  fneg      f5, f5

.loc_0xA4:
  lfs       f0, 0x18(r8)
  fadds     f0, f0, f5
  stfs      f0, 0x18(r8)

.loc_0xB0:
  lfs       f0, 0x18(r8)
  fmuls     f3, f2, f0
  fcmpo     cr0, f3, f1
  cror      2, 0x1, 0x2
  bne-      .loc_0xD0
  lfs       f0, -0x668C(r2)
  fadds     f0, f0, f3
  b         .loc_0xD8

.loc_0xD0:
  lfs       f0, -0x668C(r2)
  fsubs     f0, f3, f0

.loc_0xD8:
  fctiwz    f0, f0
  li        r4, 0xFF
  li        r0, 0
  stfd      f0, 0x10(r1)
  lwz       r3, 0x14(r1)
  rlwinm    r6,r3,0,24,31
  b         .loc_0x12C

.loc_0xF4:
  lbz       r3, 0x8(r7)
  lwz       r5, 0x4(r7)
  cmplw     r3, r6
  bgt-      .loc_0x118
  lbz       r3, 0x4(r5)
  cmplwi    r3, 0xFF
  bge-      .loc_0x128
  stb       r4, 0x4(r5)
  b         .loc_0x128

.loc_0x118:
  lbz       r3, 0x4(r5)
  cmplwi    r3, 0
  bge-      .loc_0x128
  stb       r0, 0x4(r5)

.loc_0x128:
  lwz       r7, 0x0(r7)

.loc_0x12C:
  cmplwi    r7, 0
  bne+      .loc_0xF4
  lwz       r8, 0x0(r8)

.loc_0x138:
  cmplwi    r8, 0
  bne+      .loc_0x68
  lwz       r3, 0x24(r31)
  li        r0, 0xFF
  stb       r0, 0xA(r1)
  li        r7, 0
  lwz       r3, 0xAC(r3)
  li        r6, 0
  stb       r0, 0x9(r1)
  stb       r0, 0x8(r1)
  b         .loc_0x18C

.loc_0x164:
  lwz       r5, 0x28(r31)
  addi      r0, r6, 0x4
  addi      r7, r7, 0x1
  lbzx      r4, r5, r0
  lhzx      r0, r5, r6
  addi      r6, r6, 0x6
  stb       r4, 0xB(r1)
  rlwinm    r0,r0,2,0,29
  lwz       r4, 0x8(r1)
  stwx      r4, r3, r0

.loc_0x18C:
  lwz       r0, 0x2C(r31)
  cmpw      r7, r0
  blt+      .loc_0x164
  lwz       r4, 0x24(r31)
  lwz       r0, 0x90(r4)
  rlwinm    r4,r0,2,0,29
  bl        -0x36170
  stfs      f31, 0x34(r31)
  psq_l     f31,0x28(r1),0,0
  lwz       r0, 0x34(r1)
  lfd       f31, 0x20(r1)
  lwz       r31, 0x1C(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	801228DC
 * Size:	000280
 */
void calc__Q24Game16FieldVtxColorMgrFP15J3DVertexBuffer(void)
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
  lwz       r0, 0x38(r3)
  rlwinm.   r0,r0,0,31,31
  beq-      .loc_0x22C
  li        r5, 0
  lwz       r31, 0x14(r29)
  mr        r4, r5
  li        r30, 0x1
  li        r6, 0
  b         .loc_0x5C

.loc_0x48:
  lwz       r3, 0x28(r28)
  addi      r0, r5, 0x4
  addi      r5, r5, 0x6
  addi      r6, r6, 0x1
  stbx      r4, r3, r0

.loc_0x5C:
  lwz       r0, 0x2C(r28)
  cmpw      r6, r0
  blt+      .loc_0x48
  lwz       r8, 0x30(r28)
  lfs       f2, -0x6690(r2)
  lfs       f1, -0x669C(r2)
  b         .loc_0x148

.loc_0x78:
  lfs       f4, 0x18(r8)
  lfs       f3, 0x14(r8)
  lfs       f5, 0x34(r28)
  fsubs     f0, f4, f3
  lwz       r7, 0x1C(r8)
  fabs      f0, f0
  frsp      f0, f0
  fcmpo     cr0, f0, f5
  bge-      .loc_0xA4
  stfs      f3, 0x18(r8)
  b         .loc_0xC0

.loc_0xA4:
  fcmpo     cr0, f4, f3
  bge-      .loc_0xB0
  b         .loc_0xB4

.loc_0xB0:
  fneg      f5, f5

.loc_0xB4:
  lfs       f0, 0x18(r8)
  fadds     f0, f0, f5
  stfs      f0, 0x18(r8)

.loc_0xC0:
  lfs       f0, 0x18(r8)
  fmuls     f3, f2, f0
  fcmpo     cr0, f3, f1
  cror      2, 0x1, 0x2
  bne-      .loc_0xE0
  lfs       f0, -0x668C(r2)
  fadds     f0, f0, f3
  b         .loc_0xE8

.loc_0xE0:
  lfs       f0, -0x668C(r2)
  fsubs     f0, f3, f0

.loc_0xE8:
  fctiwz    f0, f0
  li        r4, 0xFF
  li        r0, 0
  stfd      f0, 0x8(r1)
  lwz       r3, 0xC(r1)
  rlwinm    r6,r3,0,24,31
  b         .loc_0x13C

.loc_0x104:
  lbz       r3, 0x8(r7)
  lwz       r5, 0x4(r7)
  cmplw     r3, r6
  bgt-      .loc_0x128
  lbz       r3, 0x4(r5)
  cmplwi    r3, 0xFF
  bge-      .loc_0x138
  stb       r4, 0x4(r5)
  b         .loc_0x138

.loc_0x128:
  lbz       r3, 0x4(r5)
  cmplwi    r3, 0
  bge-      .loc_0x138
  stb       r0, 0x4(r5)

.loc_0x138:
  lwz       r7, 0x0(r7)

.loc_0x13C:
  cmplwi    r7, 0
  bne+      .loc_0x104
  lwz       r8, 0x0(r8)

.loc_0x148:
  cmplwi    r8, 0
  bne+      .loc_0x78
  li        r7, 0
  li        r5, 0
  b         .loc_0x1F0

.loc_0x15C:
  lwz       r4, 0x28(r28)
  add       r3, r4, r5
  lhz       r0, 0x0(r3)
  lbz       r3, 0x4(r3)
  rlwinm    r0,r0,2,14,29
  add       r8, r31, r0
  lbz       r6, 0x3(r8)
  cmplw     r6, r3
  beq-      .loc_0x1E8
  sub       r3, r6, r3
  lis       r0, 0x4330
  xoris     r3, r3, 0x8000
  stw       r0, 0x8(r1)
  lfd       f2, -0x6680(r2)
  stw       r3, 0xC(r1)
  lfd       f0, -0x6688(r2)
  lfd       f1, 0x8(r1)
  fsub      f1, f1, f2
  fabs      f1, f1
  fcmpo     cr0, f1, f0
  bge-      .loc_0x1C0
  addi      r0, r5, 0x4
  lbzx      r0, r4, r0
  stb       r0, 0x3(r8)
  b         .loc_0x1E4

.loc_0x1C0:
  addi      r0, r5, 0x4
  li        r3, -0x7
  lbzx      r0, r4, r0
  cmplw     r6, r0
  bge-      .loc_0x1D8
  li        r3, 0x7

.loc_0x1D8:
  lbz       r0, 0x3(r8)
  add       r0, r0, r3
  stb       r0, 0x3(r8)

.loc_0x1E4:
  li        r30, 0

.loc_0x1E8:
  addi      r5, r5, 0x6
  addi      r7, r7, 0x1

.loc_0x1F0:
  lwz       r0, 0x2C(r28)
  cmpw      r7, r0
  blt+      .loc_0x15C
  lwz       r4, 0x0(r29)
  mr        r3, r31
  lwz       r0, 0x8(r4)
  rlwinm    r4,r0,2,0,29
  bl        -0x363A0
  rlwinm.   r0,r30,0,24,31
  stw       r31, 0x34(r29)
  beq-      .loc_0x260
  lwz       r0, 0x38(r28)
  rlwinm    r0,r0,0,0,30
  stw       r0, 0x38(r28)
  b         .loc_0x260

.loc_0x22C:
  lwz       r3, 0x30(r28)
  b         .loc_0x258

.loc_0x234:
  lfs       f1, 0x14(r3)
  lfs       f0, 0x18(r3)
  fcmpu     cr0, f1, f0
  beq-      .loc_0x254
  lwz       r0, 0x38(r28)
  ori       r0, r0, 0x1
  stw       r0, 0x38(r28)
  b         .loc_0x260

.loc_0x254:
  lwz       r3, 0x0(r3)

.loc_0x258:
  cmplwi    r3, 0
  bne+      .loc_0x234

.loc_0x260:
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
 * Size:	0000A4
 */
void setupFieldVtxColorInfoFromFan__Q24Game16FieldVtxColorMgrFPviiii(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80122B5C
 * Size:	000158
 */
void setupFieldVtxColorInfoFromStrip__Q24Game16FieldVtxColorMgrFPviiii(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  rlwinm    r0,r5,1,0,30
  add       r9, r4, r5
  cmpwi     r8, 0x3
  stw       r31, 0x1C(r1)
  add       r10, r4, r0
  stw       r30, 0x18(r1)
  stw       r29, 0x14(r1)
  stw       r28, 0x10(r1)
  lhzx      r11, r9, r6
  lhzx      r12, r10, r6
  lhzx      r0, r4, r6
  lhzx      r31, r4, r7
  lhzx      r9, r9, r7
  lhzx      r10, r10, r7
  bgt-      .loc_0x98
  mulli     r0, r0, 0x6
  lwz       r4, 0x28(r3)
  lhzx      r5, r4, r0
  cmplwi    r5, 0xFFFF
  beq-      .loc_0x58
  b         .loc_0x5C

.loc_0x58:
  sthx      r31, r4, r0

.loc_0x5C:
  mulli     r0, r11, 0x6
  lwz       r4, 0x28(r3)
  lhzx      r5, r4, r0
  cmplwi    r5, 0xFFFF
  beq-      .loc_0x74
  b         .loc_0x78

.loc_0x74:
  sthx      r9, r4, r0

.loc_0x78:
  mulli     r0, r12, 0x6
  lwz       r3, 0x28(r3)
  lhzx      r4, r3, r0
  cmplwi    r4, 0xFFFF
  beq-      .loc_0x90
  b         .loc_0x140

.loc_0x90:
  sthx      r10, r3, r0
  b         .loc_0x140

.loc_0x98:
  subic.    r0, r8, 0x2
  li        r12, 0
  li        r11, 0
  mtctr     r0
  ble-      .loc_0x140

.loc_0xAC:
  add       r31, r4, r11
  addi      r8, r12, 0x1
  lhzx      r0, r31, r6
  addi      r9, r12, 0x2
  mullw     r10, r5, r8
  lwz       r8, 0x28(r3)
  lhzx      r30, r31, r7
  mullw     r9, r5, r9
  add       r10, r4, r10
  lhzx      r31, r10, r6
  lhzx      r29, r10, r7
  add       r9, r4, r9
  mulli     r0, r0, 0x6
  lhzx      r10, r9, r6
  lhzx      r28, r9, r7
  lhzx      r9, r8, r0
  cmplwi    r9, 0xFFFF
  beq-      .loc_0xF8
  b         .loc_0xFC

.loc_0xF8:
  sthx      r30, r8, r0

.loc_0xFC:
  mulli     r0, r31, 0x6
  lwz       r8, 0x28(r3)
  lhzx      r9, r8, r0
  cmplwi    r9, 0xFFFF
  beq-      .loc_0x114
  b         .loc_0x118

.loc_0x114:
  sthx      r29, r8, r0

.loc_0x118:
  mulli     r0, r10, 0x6
  lwz       r8, 0x28(r3)
  lhzx      r9, r8, r0
  cmplwi    r9, 0xFFFF
  beq-      .loc_0x130
  b         .loc_0x134

.loc_0x130:
  sthx      r28, r8, r0

.loc_0x134:
  add       r11, r11, r5
  addi      r12, r12, 0x1
  bdnz+     .loc_0xAC

.loc_0x140:
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  lwz       r29, 0x14(r1)
  lwz       r28, 0x10(r1)
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	80122CB4
 * Size:	000210
 */
void setupFieldVtxColorInfo__Q24Game16FieldVtxColorMgrFP8J3DShape(void)
{
/*
.loc_0x0:
  stwu      r1, -0x40(r1)
  mflr      r0
  lis       r5, 0x8048
  stw       r0, 0x44(r1)
  subi      r7, r5, 0x4BCC
  stmw      r22, 0x18(r1)
  mr        r22, r3
  mr        r23, r4
  addi      r3, r1, 0x8
  li        r30, -0x1
  li        r29, -0x1
  li        r28, 0
  lwz       r8, 0x30(r4)
  lwz       r6, 0x0(r7)
  lwz       r5, 0x4(r7)
  lwz       r4, 0x8(r7)
  lwz       r0, 0xC(r7)
  stw       r6, 0x8(r1)
  stw       r5, 0xC(r1)
  stw       r4, 0x10(r1)
  stw       r0, 0x14(r1)
  b         .loc_0xB4

.loc_0x58:
  cmpwi     r0, 0xA
  beq-      .loc_0xA0
  bge-      .loc_0x70
  cmpwi     r0, 0x9
  bge-      .loc_0x7C
  b         .loc_0xA0

.loc_0x70:
  cmpwi     r0, 0xC
  bge-      .loc_0xA0
  b         .loc_0x90

.loc_0x7C:
  lwz       r0, 0x4(r8)
  mr        r30, r28
  cmpwi     r0, 0x3
  beq-      .loc_0xA0
  b         .loc_0x1FC

.loc_0x90:
  lwz       r0, 0x4(r8)
  mr        r29, r28
  cmpwi     r0, 0x3
  bne-      .loc_0x1FC

.loc_0xA0:
  lwz       r0, 0x4(r8)
  addi      r8, r8, 0x8
  rlwinm    r0,r0,2,0,29
  lwzx      r0, r3, r0
  add       r28, r28, r0

.loc_0xB4:
  lwz       r0, 0x0(r8)
  cmpwi     r0, 0xFF
  bne+      .loc_0x58
  li        r27, 0
  b         .loc_0x1EC

.loc_0xC8:
  lwz       r3, 0x3C(r23)
  rlwinm    r31,r27,2,14,29
  lwzx      r3, r3, r31
  lwz       r26, 0x8(r3)
  mr        r25, r26
  b         .loc_0x1D0

.loc_0xE0:
  lbz       r0, 0x0(r25)
  cmplwi    r0, 0
  beq-      .loc_0x1FC
  cmplwi    r0, 0x98
  lhz       r24, 0x1(r25)
  bne-      .loc_0x118
  mr        r3, r22
  mr        r5, r28
  mr        r6, r30
  mr        r7, r29
  mr        r8, r24
  addi      r4, r25, 0x3
  bl        -0x268
  b         .loc_0x1C4

.loc_0x118:
  cmplwi    r0, 0xA0
  bne-      .loc_0x1FC
  addi      r5, r25, 0x3
  add       r4, r25, r28
  lhzx      r0, r5, r30
  addi      r4, r4, 0x3
  lhzx      r6, r4, r30
  mulli     r0, r0, 0x6
  lwz       r3, 0x28(r22)
  lhzx      r5, r5, r29
  lhzx      r4, r4, r29
  lhzx      r7, r3, r0
  cmplwi    r7, 0xFFFF
  beq-      .loc_0x154
  b         .loc_0x158

.loc_0x154:
  sthx      r5, r3, r0

.loc_0x158:
  mulli     r0, r6, 0x6
  lwz       r3, 0x28(r22)
  lhzx      r5, r3, r0
  cmplwi    r5, 0xFFFF
  beq-      .loc_0x170
  b         .loc_0x174

.loc_0x170:
  sthx      r4, r3, r0

.loc_0x174:
  subi      r0, r24, 0x2
  rlwinm    r5,r28,1,0,30
  mtctr     r0
  cmpwi     r24, 0x2
  ble-      .loc_0x1C4

.loc_0x188:
  add       r4, r25, r5
  lwz       r3, 0x28(r22)
  addi      r4, r4, 0x3
  lhzx      r0, r4, r30
  lhzx      r4, r4, r29
  mulli     r0, r0, 0x6
  lhzx      r6, r3, r0
  cmplwi    r6, 0xFFFF
  beq-      .loc_0x1B0
  b         .loc_0x1B4

.loc_0x1B0:
  sthx      r4, r3, r0

.loc_0x1B4:
  add       r5, r5, r28
  bdnz+     .loc_0x188
  b         .loc_0x1C4
  b         .loc_0x1FC

.loc_0x1C4:
  mullw     r0, r28, r24
  add       r25, r25, r0
  addi      r25, r25, 0x3

.loc_0x1D0:
  lwz       r0, 0x3C(r23)
  sub       r4, r25, r26
  lwzx      r3, r31, r0
  lwz       r0, 0x4(r3)
  cmplw     r4, r0
  blt+      .loc_0xE0
  addi      r27, r27, 0x1

.loc_0x1EC:
  lhz       r0, 0xA(r23)
  rlwinm    r3,r27,0,16,31
  cmplw     r3, r0
  blt+      .loc_0xC8

.loc_0x1FC:
  lmw       r22, 0x18(r1)
  lwz       r0, 0x44(r1)
  mtlr      r0
  addi      r1, r1, 0x40
  blr
*/
}

/*
 * --INFO--
 * Address:	80122EC4
 * Size:	000128
 */
void createNewControl__Q24Game16FieldVtxColorMgrFR10Vector3<float>ff(void)
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
  fmr       f30, f1
  mr        r29, r3
  fmr       f31, f2
  mr        r30, r4
  li        r3, 0x20
  bl        -0xFF05C
  mr.       r31, r3
  beq-      .loc_0x88
  li        r0, 0
  lis       r3, 0x8051
  stw       r0, 0x0(r31)
  lfs       f2, -0x66A0(r2)
  lfsu      f0, 0x41E4(r3)
  lfs       f1, -0x669C(r2)
  stfs      f0, 0x4(r31)
  lfs       f0, -0x6698(r2)
  lfs       f3, 0x4(r3)
  stfs      f3, 0x8(r31)
  lfs       f3, 0x8(r3)
  stfs      f3, 0xC(r31)
  stfs      f2, 0x10(r31)
  stfs      f1, 0x14(r31)
  stfs      f0, 0x18(r31)
  stw       r0, 0x1C(r31)

.loc_0x88:
  cmplwi    r31, 0
  beq-      .loc_0xF8
  fmr       f1, f30
  mr        r3, r29
  fmr       f2, f31
  mr        r4, r31
  mr        r5, r30
  bl        .loc_0x128
  lwz       r3, 0x30(r29)
  cmplwi    r3, 0
  bne-      .loc_0xBC
  stw       r31, 0x30(r29)
  b         .loc_0xF8

.loc_0xBC:
  li        r0, 0
  stw       r0, 0x0(r31)
  lwz       r4, 0x0(r3)
  cmplwi    r4, 0
  bne-      .loc_0xEC
  stw       r31, 0x0(r3)
  b         .loc_0xF8
  b         .loc_0xEC

.loc_0xDC:
  lwz       r0, 0x0(r4)
  cmplwi    r0, 0
  beq-      .loc_0xF4
  mr        r4, r0

.loc_0xEC:
  cmplwi    r4, 0
  bne+      .loc_0xDC

.loc_0xF4:
  stw       r31, 0x0(r4)

.loc_0xF8:
  mr        r3, r31
  psq_l     f31,0x38(r1),0,0
  lfd       f31, 0x30(r1)
  psq_l     f30,0x28(r1),0,0
  lfd       f30, 0x20(r1)
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  lwz       r0, 0x44(r1)
  lwz       r29, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x40
  blr       

.loc_0x128:
*/
}

/*
 * --INFO--
 * Address:	80122FEC
 * Size:	000204
 */
void setupFieldVtxColorControl__Q24Game16FieldVtxColorMgrFPQ24Game20FieldVtxColorControlR10Vector3<float>ff(void)
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
  stmw      r26, 0x18(r1)
  mr        r27, r3
  mr        r29, r5
  lwz       r3, 0x24(r3)
  mr        r28, r4
  lfs       f0, 0x0(r5)
  fmr       f31, f1
  lwz       r31, 0xA0(r3)
  li        r30, 0
  lfs       f30, -0x669C(r2)
  stfs      f0, 0x4(r4)
  lfs       f0, 0x4(r5)
  stfs      f0, 0x8(r4)
  lfs       f0, 0x8(r5)
  stfs      f0, 0xC(r4)
  stfs      f31, 0x10(r4)
  stfs      f2, 0x14(r4)
  b         .loc_0x1C8

.loc_0x6C:
  rlwinm    r0,r30,0,16,31
  lwz       r3, 0x28(r27)
  mulli     r0, r0, 0x6
  lfs       f2, 0x4(r29)
  lfs       f4, 0x0(r29)
  lfs       f1, 0x8(r29)
  add       r26, r3, r0
  lhz       r0, 0x2(r26)
  mulli     r0, r0, 0xC
  add       r3, r31, r0
  lfs       f0, 0x4(r3)
  lfs       f3, 0x0(r3)
  fsubs     f2, f2, f0
  lfs       f0, 0x8(r3)
  fsubs     f3, f4, f3
  fsubs     f0, f1, f0
  fmuls     f1, f2, f2
  fmuls     f2, f0, f0
  fmadds    f0, f3, f3, f1
  fadds     f29, f2, f0
  fcmpo     cr0, f29, f30
  ble-      .loc_0xD4
  ble-      .loc_0xD8
  fsqrte    f0, f29
  fmuls     f29, f0, f29
  b         .loc_0xD8

.loc_0xD4:
  fmr       f29, f30

.loc_0xD8:
  fcmpo     cr0, f29, f31
  bge-      .loc_0x1C4
  li        r3, 0xC
  bl        -0xFF22C
  cmplwi    r3, 0
  beq-      .loc_0x174
  fdivs     f2, f29, f31
  lfs       f0, -0x669C(r2)
  li        r0, 0
  stw       r0, 0x0(r3)
  stw       r26, 0x4(r3)
  fcmpo     cr0, f2, f0
  blt-      .loc_0x118
  lfs       f0, -0x6698(r2)
  fcmpo     cr0, f2, f0
  ble-      .loc_0x138

.loc_0x118:
  lfs       f0, -0x669C(r2)
  fcmpo     cr0, f2, f0
  bge-      .loc_0x128
  fmr       f2, f0

.loc_0x128:
  lfs       f0, -0x6698(r2)
  fcmpo     cr0, f2, f0
  ble-      .loc_0x138
  fmr       f2, f0

.loc_0x138:
  lfs       f1, -0x6690(r2)
  lfs       f0, -0x669C(r2)
  fmuls     f1, f1, f2
  fcmpo     cr0, f1, f0
  cror      2, 0x1, 0x2
  bne-      .loc_0x15C
  lfs       f0, -0x668C(r2)
  fadds     f0, f0, f1
  b         .loc_0x164

.loc_0x15C:
  lfs       f0, -0x668C(r2)
  fsubs     f0, f1, f0

.loc_0x164:
  fctiwz    f0, f0
  stfd      f0, 0x8(r1)
  lwz       r0, 0xC(r1)
  stb       r0, 0x8(r3)

.loc_0x174:
  lwz       r4, 0x1C(r28)
  cmplwi    r4, 0
  bne-      .loc_0x188
  stw       r3, 0x1C(r28)
  b         .loc_0x1C4

.loc_0x188:
  li        r0, 0
  stw       r0, 0x0(r3)
  lwz       r5, 0x0(r4)
  cmplwi    r5, 0
  bne-      .loc_0x1B8
  stw       r3, 0x0(r4)
  b         .loc_0x1C4
  b         .loc_0x1B8

.loc_0x1A8:
  lwz       r0, 0x0(r5)
  cmplwi    r0, 0
  beq-      .loc_0x1C0
  mr        r5, r0

.loc_0x1B8:
  cmplwi    r5, 0
  bne+      .loc_0x1A8

.loc_0x1C0:
  stw       r3, 0x0(r5)

.loc_0x1C4:
  addi      r30, r30, 0x1

.loc_0x1C8:
  lwz       r0, 0x2C(r27)
  rlwinm    r3,r30,0,16,31
  cmpw      r3, r0
  blt+      .loc_0x6C
  psq_l     f31,0x58(r1),0,0
  lfd       f31, 0x50(r1)
  psq_l     f30,0x48(r1),0,0
  lfd       f30, 0x40(r1)
  psq_l     f29,0x38(r1),0,0
  lfd       f29, 0x30(r1)
  lmw       r26, 0x18(r1)
  lwz       r0, 0x64(r1)
  mtlr      r0
  addi      r1, r1, 0x60
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00006C
 */
void drawDebugInfo__Q24Game16FieldVtxColorMgrFR8Graphics(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801231F0
 * Size:	000080
 */
void __dt__Q24Game16FieldVtxColorMgrFv(void)
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
  lis       r4, 0x804B
  addi      r3, r30, 0xC
  subi      r5, r4, 0x3AE8
  li        r4, 0
  stw       r5, 0x0(r30)
  addi      r0, r5, 0x10
  stw       r0, 0xC(r30)
  bl        0x2EE35C
  cmplwi    r30, 0
  beq-      .loc_0x54
  lis       r3, 0x804A
  addi      r0, r3, 0x2FD0
  stw       r0, 0x0(r30)

.loc_0x54:
  extsh.    r0, r31
  ble-      .loc_0x64
  mr        r3, r30
  bl        -0xFF19C

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
 * Address:	80123270
 * Size:	000008
 */
void @12@__dt__Q24Game16FieldVtxColorMgrFv(void)
{
/*
.loc_0x0:
  subi      r3, r3, 0xC
  b         -0x84
*/
}