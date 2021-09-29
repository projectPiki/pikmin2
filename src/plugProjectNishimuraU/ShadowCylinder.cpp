

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
 * Size:	000108
 */
void __ct__Q24Game12CylinderListFi(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000210
 */
void createCylinder__Q24Game12CylinderListFif(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00002C
 */
void draw__Q24Game12CylinderListFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8023DA30
 * Size:	0004DC
 */
void __ct__Q24Game12CylinderBaseFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0xE0(r1)
  mflr      r0
  stw       r0, 0xE4(r1)
  stfd      f31, 0xD0(r1)
  psq_st    f31,0xD8(r1),0,0
  stfd      f30, 0xC0(r1)
  psq_st    f30,0xC8(r1),0,0
  stfd      f29, 0xB0(r1)
  psq_st    f29,0xB8(r1),0,0
  stfd      f28, 0xA0(r1)
  psq_st    f28,0xA8(r1),0,0
  stfd      f27, 0x90(r1)
  psq_st    f27,0x98(r1),0,0
  stfd      f26, 0x80(r1)
  psq_st    f26,0x88(r1),0,0
  stfd      f25, 0x70(r1)
  psq_st    f25,0x78(r1),0,0
  stfd      f24, 0x60(r1)
  psq_st    f24,0x68(r1),0,0
  stmw      r24, 0x40(r1)
  lis       r4, 0x804C
  mr        r24, r3
  addi      r0, r4, 0x1940
  lis       r3, 0x8012
  subi      r4, r3, 0xCB8
  stw       r0, 0x0(r24)
  lis       r3, 0x804C
  li        r5, 0
  addi      r27, r3, 0x1780
  li        r6, 0xC
  addi      r3, r24, 0x20
  li        r7, 0x2
  bl        -0x17C274
  lis       r4, 0x8012
  addi      r3, r24, 0x38
  subi      r4, r4, 0xCB8
  li        r5, 0
  li        r6, 0xC
  li        r7, 0x2
  bl        -0x17C290
  li        r3, 0xC
  bl        -0x219B28
  lis       r5, 0x8050
  lis       r4, 0x804F
  stw       r3, 0x4(r24)
  addi      r30, r5, 0x71A0
  lfd       f29, -0x3D28(r2)
  addi      r31, r4, 0x79D0
  lfs       f30, -0x3D40(r2)
  li        r25, 0
  lfs       f31, -0x3D3C(r2)
  li        r26, 0
  lfs       f24, -0x3D34(r2)
  lis       r29, 0x4330
  lfs       f26, -0x3D48(r2)
  lfd       f27, -0x3D30(r2)
  lfs       f28, -0x3D44(r2)

.loc_0xE4:
  cmpwi     r25, 0x1
  lfs       f25, -0x3D20(r2)
  beq-      .loc_0x110
  bge-      .loc_0x100
  cmpwi     r25, 0
  bge-      .loc_0x11C
  b         .loc_0x11C

.loc_0x100:
  cmpwi     r25, 0x3
  bge-      .loc_0x11C
  b         .loc_0x118
  b         .loc_0x11C

.loc_0x110:
  lfs       f25, -0x3D1C(r2)
  b         .loc_0x11C

.loc_0x118:
  lfs       f25, -0x3D18(r2)

.loc_0x11C:
  li        r3, 0xC
  bl        -0x219CAC
  mr.       r28, r3
  beq-      .loc_0x200
  li        r0, 0
  cmpwi     r25, 0x1
  stb       r0, 0x0(r28)
  stw       r0, 0x4(r28)
  stw       r0, 0x8(r28)
  beq-      .loc_0x17C
  bge-      .loc_0x154
  cmpwi     r25, 0
  bge-      .loc_0x160
  b         .loc_0x1B0

.loc_0x154:
  cmpwi     r25, 0x3
  bge-      .loc_0x1B0
  b         .loc_0x198

.loc_0x160:
  li        r0, 0xC
  addi      r3, r27, 0x20
  stb       r0, 0x0(r28)
  li        r0, 0x8D
  stw       r3, 0x4(r28)
  stw       r0, 0x8(r28)
  b         .loc_0x1B0

.loc_0x17C:
  li        r0, 0x8
  addi      r3, r27, 0xC0
  stb       r0, 0x0(r28)
  li        r0, 0x6D
  stw       r3, 0x4(r28)
  stw       r0, 0x8(r28)
  b         .loc_0x1B0

.loc_0x198:
  li        r0, 0x4
  addi      r3, r27, 0x140
  stb       r0, 0x0(r28)
  li        r0, 0x4D
  stw       r3, 0x4(r28)
  stw       r0, 0x8(r28)

.loc_0x1B0:
  lbz       r0, 0x0(r28)
  li        r3, 0
  cmplwi    r0, 0
  beq-      .loc_0x1DC
  lwz       r0, 0x4(r28)
  cmplwi    r0, 0
  beq-      .loc_0x1DC
  lwz       r0, 0x8(r28)
  cmpwi     r0, 0
  beq-      .loc_0x1DC
  li        r3, 0x1

.loc_0x1DC:
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x200
  lis       r3, 0x8048
  lis       r5, 0x8048
  addi      r3, r3, 0x3F78
  li        r4, 0xBC
  addi      r5, r5, 0x3F8C
  crclr     6, 0x6
  bl        -0x2135EC

.loc_0x200:
  lwz       r3, 0x4(r24)
  cmpwi     r25, 0x1
  li        r0, 0
  stwx      r28, r3, r26
  lwz       r3, 0x4(r24)
  lwzx      r4, r3, r26
  beq-      .loc_0x23C
  bge-      .loc_0x22C
  cmpwi     r25, 0
  bge-      .loc_0x248
  b         .loc_0x248

.loc_0x22C:
  cmpwi     r25, 0x3
  bge-      .loc_0x248
  b         .loc_0x244
  b         .loc_0x248

.loc_0x23C:
  li        r0, 0x48
  b         .loc_0x248

.loc_0x244:
  li        r0, 0x78

.loc_0x248:
  lbz       r7, 0x0(r4)
  mr        r5, r0
  stw       r29, 0x8(r1)
  rlwinm    r6,r0,2,0,29
  li        r3, 0
  stw       r7, 0xC(r1)
  lfd       f0, 0x8(r1)
  fsubs     f0, f0, f27
  fdivs     f1, f26, f0
  fmuls     f0, f1, f28
  b         .loc_0x3DC

.loc_0x274:
  xoris     r7, r3, 0x8000
  stw       r29, 0x8(r1)
  add       r9, r3, r8
  stw       r7, 0xC(r1)
  lfd       f2, 0x8(r1)
  fsubs     f2, f2, f29
  fmuls     f4, f2, f1
  fsubs     f3, f4, f0
  fmr       f2, f3
  fcmpo     cr0, f3, f30
  bge-      .loc_0x2A4
  fneg      f2, f3

.loc_0x2A4:
  fmuls     f2, f2, f31
  add       r10, r31, r6
  fcmpo     cr0, f3, f30
  fctiwz    f2, f2
  stfd      f2, 0x10(r1)
  lwz       r7, 0x14(r1)
  rlwinm    r7,r7,3,18,28
  add       r7, r30, r7
  lfs       f2, 0x4(r7)
  fmuls     f2, f25, f2
  stfs      f2, 0x0(r10)
  stfs      f30, 0x4(r10)
  bge-      .loc_0x304
  lfs       f2, -0x3D38(r2)
  lis       r7, 0x8050
  addi      r7, r7, 0x71A0
  fmuls     f2, f3, f2
  fctiwz    f2, f2
  stfd      f2, 0x18(r1)
  lwz       r8, 0x1C(r1)
  rlwinm    r8,r8,3,18,28
  lfsx      f2, r7, r8
  fneg      f2, f2
  b         .loc_0x324

.loc_0x304:
  fmuls     f2, f3, f31
  lis       r7, 0x8050
  addi      r7, r7, 0x71A0
  fctiwz    f2, f2
  stfd      f2, 0x20(r1)
  lwz       r8, 0x24(r1)
  rlwinm    r8,r8,3,18,28
  lfsx      f2, r7, r8

.loc_0x324:
  fmuls     f2, f25, f2
  fmr       f3, f4
  fcmpo     cr0, f4, f30
  stfs      f2, 0x8(r10)
  bge-      .loc_0x33C
  fneg      f3, f4

.loc_0x33C:
  fmuls     f2, f3, f31
  mulli     r7, r9, 0x3
  fcmpo     cr0, f4, f30
  fctiwz    f2, f2
  add       r7, r0, r7
  rlwinm    r7,r7,2,0,29
  add       r9, r31, r7
  stfd      f2, 0x28(r1)
  lwz       r7, 0x2C(r1)
  rlwinm    r7,r7,3,18,28
  add       r7, r30, r7
  lfs       f2, 0x4(r7)
  fmuls     f2, f25, f2
  stfs      f2, 0x0(r9)
  stfs      f24, 0x4(r9)
  bge-      .loc_0x3A8
  lfs       f2, -0x3D38(r2)
  lis       r7, 0x8050
  addi      r7, r7, 0x71A0
  fmuls     f2, f4, f2
  fctiwz    f2, f2
  stfd      f2, 0x30(r1)
  lwz       r8, 0x34(r1)
  rlwinm    r8,r8,3,18,28
  lfsx      f2, r7, r8
  fneg      f2, f2
  b         .loc_0x3C8

.loc_0x3A8:
  fmuls     f2, f4, f31
  lis       r7, 0x8050
  addi      r7, r7, 0x71A0
  fctiwz    f2, f2
  stfd      f2, 0x38(r1)
  lwz       r8, 0x3C(r1)
  rlwinm    r8,r8,3,18,28
  lfsx      f2, r7, r8

.loc_0x3C8:
  fmuls     f2, f25, f2
  addi      r5, r5, 0x3
  addi      r6, r6, 0xC
  addi      r3, r3, 0x1
  stfs      f2, 0x8(r9)

.loc_0x3DC:
  lbz       r8, 0x0(r4)
  cmpw      r3, r8
  blt+      .loc_0x274
  addi      r25, r25, 0x1
  addi      r26, r26, 0x4
  cmpwi     r25, 0x3
  blt+      .loc_0xE4
  bl        0x1E53FC
  lhz       r25, 0x6(r3)
  bl        0x1E53F4
  lhz       r4, 0x4(r3)
  lis       r0, 0x4330
  lfs       f5, -0x3D40(r2)
  mr        r3, r24
  stw       r4, 0x3C(r1)
  lfd       f4, -0x3D30(r2)
  stw       r0, 0x38(r1)
  lfs       f1, -0x3D20(r2)
  lfd       f0, 0x38(r1)
  stfs      f5, 0x10(r24)
  fsubs     f3, f0, f4
  lfs       f0, -0x3D14(r2)
  stfs      f5, 0x14(r24)
  stw       r25, 0x34(r1)
  stw       r0, 0x30(r1)
  lfd       f2, 0x30(r1)
  stfs      f3, 0x18(r24)
  fsubs     f2, f2, f4
  stfs      f2, 0x1C(r24)
  stfs      f5, 0x20(r24)
  stfs      f5, 0x24(r24)
  stfs      f1, 0x28(r24)
  stfs      f5, 0x38(r24)
  stfs      f5, 0x3C(r24)
  stfs      f1, 0x40(r24)
  stfs      f0, 0x50(r24)
  stfs      f5, 0x2C(r24)
  stfs      f5, 0x30(r24)
  stfs      f1, 0x34(r24)
  stfs      f5, 0x44(r24)
  stfs      f5, 0x48(r24)
  stfs      f1, 0x4C(r24)
  stfs      f0, 0x54(r24)
  psq_l     f31,0xD8(r1),0,0
  lfd       f31, 0xD0(r1)
  psq_l     f30,0xC8(r1),0,0
  lfd       f30, 0xC0(r1)
  psq_l     f29,0xB8(r1),0,0
  lfd       f29, 0xB0(r1)
  psq_l     f28,0xA8(r1),0,0
  lfd       f28, 0xA0(r1)
  psq_l     f27,0x98(r1),0,0
  lfd       f27, 0x90(r1)
  psq_l     f26,0x88(r1),0,0
  lfd       f26, 0x80(r1)
  psq_l     f25,0x78(r1),0,0
  lfd       f25, 0x70(r1)
  psq_l     f24,0x68(r1),0,0
  lfd       f24, 0x60(r1)
  lmw       r24, 0x40(r1)
  lwz       r0, 0xE4(r1)
  mtlr      r0
  addi      r1, r1, 0xE0
  blr
*/
}

/*
 * --INFO--
 * Address:	8023DF0C
 * Size:	000008
 */
void setColor__Q24Game12CylinderBaseFP6Color4(void)
{
/*
.loc_0x0:
  stw       r4, 0x8(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	8023DF14
 * Size:	000024
 */
void setShadowRect__Q24Game12CylinderBaseFR7Rect<float>(void)
{
/*
.loc_0x0:
  lfs       f0, 0x0(r4)
  stfs      f0, 0x10(r3)
  lfs       f0, 0x4(r4)
  stfs      f0, 0x14(r3)
  lfs       f0, 0x8(r4)
  stfs      f0, 0x18(r3)
  lfs       f0, 0xC(r4)
  stfs      f0, 0x1C(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	8023DF38
 * Size:	0000B4
 */
void setCameraParms__Q24Game12CylinderBaseFP6Camerai(void)
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  stw       r0, 0x34(r1)
  stw       r31, 0x2C(r1)
  stw       r30, 0x28(r1)
  mr        r30, r5
  stw       r29, 0x24(r1)
  mr        r29, r4
  stw       r28, 0x20(r1)
  mr        r28, r3
  addi      r3, r1, 0x14
  lwz       r12, 0x0(r4)
  lwz       r12, 0x4C(r12)
  mtctr     r12
  bctrl     
  mulli     r31, r30, 0xC
  lfs       f0, 0x14(r1)
  mr        r4, r29
  addi      r3, r1, 0x8
  add       r5, r28, r31
  stfs      f0, 0x20(r5)
  lfs       f0, 0x18(r1)
  stfs      f0, 0x24(r5)
  lfs       f0, 0x1C(r1)
  stfs      f0, 0x28(r5)
  bl        0x1DC338
  lfs       f0, 0x8(r1)
  add       r4, r28, r31
  rlwinm    r0,r30,2,0,29
  stfs      f0, 0x38(r4)
  add       r3, r28, r0
  lfs       f0, 0xC(r1)
  stfs      f0, 0x3C(r4)
  lfs       f0, 0x10(r1)
  stfs      f0, 0x40(r4)
  lfs       f0, 0x138(r29)
  stfs      f0, 0x50(r3)
  lwz       r31, 0x2C(r1)
  lwz       r30, 0x28(r1)
  lwz       r29, 0x24(r1)
  lwz       r28, 0x20(r1)
  lwz       r0, 0x34(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	8023DFEC
 * Size:	0000CC
 */
void makeSRT__Q24Game12CylinderBaseFR7MatrixfRQ24Game11ShadowParam(void)
{
/*
.loc_0x0:
  lfs       f1, 0x10(r5)
  lfs       f0, -0x3D20(r2)
  lfs       f3, 0x0(r5)
  fcmpo     cr0, f1, f0
  lfs       f4, 0x4(r5)
  lfs       f5, 0x8(r5)
  lfs       f6, 0x1C(r5)
  lfs       f7, 0x18(r5)
  cror      2, 0x1, 0x2
  beq-      .loc_0x38
  lfs       f2, -0x3D40(r2)
  fcmpo     cr0, f1, f2
  cror      2, 0, 0x2
  bne-      .loc_0x70

.loc_0x38:
  stfs      f6, 0x0(r4)
  lfs       f0, -0x3D40(r2)
  stfs      f0, 0x10(r4)
  stfs      f0, 0x20(r4)
  stfs      f0, 0x4(r4)
  stfs      f7, 0x14(r4)
  stfs      f0, 0x24(r4)
  stfs      f0, 0x8(r4)
  stfs      f0, 0x18(r4)
  stfs      f6, 0x28(r4)
  stfs      f3, 0xC(r4)
  stfs      f4, 0x1C(r4)
  stfs      f5, 0x2C(r4)
  blr       

.loc_0x70:
  stfs      f6, 0x0(r4)
  lfs       f1, 0xC(r5)
  lfs       f0, 0x10(r5)
  fneg      f1, f1
  fdivs     f0, f1, f0
  fmuls     f0, f6, f0
  stfs      f0, 0x10(r4)
  stfs      f2, 0x20(r4)
  stfs      f2, 0x4(r4)
  stfs      f7, 0x14(r4)
  stfs      f2, 0x24(r4)
  stfs      f2, 0x8(r4)
  lfs       f1, 0x14(r5)
  lfs       f0, 0x10(r5)
  fneg      f1, f1
  fdivs     f0, f1, f0
  fmuls     f0, f6, f0
  stfs      f0, 0x18(r4)
  stfs      f6, 0x28(r4)
  stfs      f3, 0xC(r4)
  stfs      f4, 0x1C(r4)
  stfs      f5, 0x2C(r4)
  blr
*/
}

/*
 * --INFO--
 * Address:	8023E0B8
 * Size:	0000A4
 */
void getCylinderType__Q24Game12CylinderBaseFRQ24Game11ShadowParami(void)
{
/*
.loc_0x0:
  mulli     r6, r5, 0xC
  rlwinm    r0,r5,2,0,29
  lwz       r7, 0xC(r3)
  add       r5, r3, r0
  lfs       f1, 0x4(r4)
  add       r3, r3, r6
  lfs       f0, 0x24(r3)
  lfs       f3, 0x0(r4)
  fsubs     f0, f1, f0
  lfs       f2, 0x20(r3)
  lfs       f1, 0x3C(r3)
  fsubs     f2, f3, f2
  lfs       f4, 0x8(r4)
  fmuls     f0, f1, f0
  lfs       f3, 0x28(r3)
  lfs       f1, 0x38(r3)
  fsubs     f5, f4, f3
  lfs       f4, 0x50(r5)
  lfs       f3, 0x1C(r4)
  fmadds    f0, f1, f2, f0
  lfs       f1, 0x40(r3)
  fmuls     f2, f4, f3
  fmadds    f1, f1, f5, f0
  lfs       f0, 0x24(r7)
  fdivs     f1, f2, f1
  fcmpo     cr0, f1, f0
  ble-      .loc_0x74
  li        r3, 0
  blr       

.loc_0x74:
  lfs       f0, 0x4C(r7)
  fcmpo     cr0, f1, f0
  ble-      .loc_0x88
  li        r3, 0x1
  blr       

.loc_0x88:
  lfs       f0, -0x3D40(r2)
  fcmpo     cr0, f1, f0
  ble-      .loc_0x9C
  li        r3, 0x2
  blr       

.loc_0x9C:
  li        r3, 0
  blr
*/
}

/*
 * --INFO--
 * Address:	8023E15C
 * Size:	000004
 */
void setFilterTextureID__Q24Game12CylinderBaseFi(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	8023E160
 * Size:	000004
 */
void drawInit__Q24Game12CylinderBaseFv(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	8023E164
 * Size:	000004
 */
void drawCylinder__Q24Game12CylinderBaseFR7Matrixfi(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	8023E168
 * Size:	000004
 */
void drawFinish__Q24Game12CylinderBaseFv(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00010C
 */
void setupFillGX__Q24Game12CylinderBaseFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00005C
 */
void setupDrawCylinderGX__Q24Game12CylinderBaseFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000088
 */
void setupFilterGX__Q24Game12CylinderBaseFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00004C
 */
void setOrthoProjection__Q24Game12CylinderBaseFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000A4
 */
void setOrthoCamera__Q24Game12CylinderBaseFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000D0
 */
void setScissorViewport__Q24Game12CylinderBaseFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000090
 */
void fillShadowRect__Q24Game12CylinderBaseFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000D4
 */
void fillRectAlphaZero__Q24Game12CylinderBaseFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000038
 */
void drawCylinderList__Q24Game12CylinderBaseFi(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8023E16C
 * Size:	000164
 */
void __ct__Q24Game15ShadowCylinder2FPQ24Game11ShadowParmsP6Color4(void)
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
  stw       r28, 0x10(r1)
  bl        -0x764
  lis       r4, 0x804C
  lis       r3, 0x8048
  addi      r0, r4, 0x1928
  li        r5, 0
  stw       r0, 0x0(r29)
  addi      r4, r3, 0x3FBC
  lwz       r3, -0x6514(r13)
  bl        0x1E51A8
  bl        0x1E506C
  lhz       r28, 0x6(r3)
  bl        0x1E5064
  lhz       r0, 0x4(r3)
  rlwinm    r4,r28,31,17,31
  li        r5, 0x27
  li        r6, 0
  rlwinm    r3,r0,31,17,31
  li        r7, 0
  bl        -0x157284
  lwz       r4, -0x6C18(r13)
  mr        r28, r3
  cmplwi    r4, 0
  beq-      .loc_0xDC
  lwz       r3, 0x44(r4)
  li        r0, 0
  cmpwi     r3, 0x1
  beq-      .loc_0x9C
  cmpwi     r3, 0x3
  bne-      .loc_0xA0

.loc_0x9C:
  li        r0, 0x1

.loc_0xA0:
  rlwinm.   r0,r0,0,24,31
  bne-      .loc_0xDC
  li        r3, 0x4
  li        r4, 0x20
  bl        -0x21A224
  stw       r3, 0x58(r29)
  mr        r3, r28
  li        r4, 0x20
  bl        -0x21A234
  lwz       r4, 0x58(r29)
  stw       r3, 0x0(r4)
  li        r3, 0x20
  bl        -0x21A290
  stw       r3, 0x5C(r29)
  b         .loc_0x120

.loc_0xDC:
  li        r3, 0x8
  li        r4, 0x20
  bl        -0x21A258
  stw       r3, 0x58(r29)
  mr        r3, r28
  li        r4, 0x20
  bl        -0x21A268
  lwz       r5, 0x58(r29)
  li        r4, 0x20
  stw       r3, 0x0(r5)
  mr        r3, r28
  bl        -0x21A27C
  lwz       r4, 0x58(r29)
  stw       r3, 0x4(r4)
  li        r3, 0x40
  bl        -0x21A2D8
  stw       r3, 0x5C(r29)

.loc_0x120:
  stw       r30, 0xC(r29)
  lis       r3, 0x8048
  li        r0, 0
  stw       r31, 0x8(r29)
  addi      r4, r3, 0x3FBC
  stw       r0, 0x60(r29)
  lwz       r3, -0x6514(r13)
  bl        0x1E50BC
  lwz       r0, 0x24(r1)
  mr        r3, r29
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
 * Address:	8023E2D0
 * Size:	000044
 */
void setFilterTextureID__Q24Game15ShadowCylinder2Fi(void)
{
/*
.loc_0x0:
  lwz       r5, -0x6C18(r13)
  cmplwi    r5, 0
  beq-      .loc_0x3C
  lwz       r5, 0x44(r5)
  li        r0, 0
  cmpwi     r5, 0x1
  beq-      .loc_0x24
  cmpwi     r5, 0x3
  bne-      .loc_0x28

.loc_0x24:
  li        r0, 0x1

.loc_0x28:
  rlwinm.   r0,r0,0,24,31
  bne-      .loc_0x3C
  li        r0, 0
  stw       r0, 0x60(r3)
  blr       

.loc_0x3C:
  stw       r4, 0x60(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	8023E314
 * Size:	000350
 */
void drawInit__Q24Game15ShadowCylinder2Fv(void)
{
/*
.loc_0x0:
  stwu      r1, -0xE0(r1)
  mflr      r0
  stw       r0, 0xE4(r1)
  stfd      f31, 0xD0(r1)
  psq_st    f31,0xD8(r1),0,0
  stfd      f30, 0xC0(r1)
  psq_st    f30,0xC8(r1),0,0
  stw       r31, 0xBC(r1)
  stw       r30, 0xB8(r1)
  stw       r29, 0xB4(r1)
  stw       r28, 0xB0(r1)
  mr        r31, r3
  lis       r3, 0x8048
  lfs       f1, 0x14(r31)
  addi      r30, r3, 0x3F58
  lfs       f2, 0x1C(r31)
  addi      r3, r1, 0x68
  lfs       f3, 0x10(r31)
  lfs       f4, 0x18(r31)
  lfs       f5, -0x3D40(r2)
  lfs       f6, -0x3D10(r2)
  bl        -0x153590
  addi      r3, r1, 0x68
  li        r4, 0x1
  bl        -0x154F2C
  lwz       r29, 0x40(r30)
  addi      r3, r1, 0x38
  lwz       r28, 0x44(r30)
  addi      r4, r1, 0x2C
  lwz       r12, 0x48(r30)
  addi      r5, r1, 0x14
  lwz       r11, 0x4C(r30)
  addi      r6, r1, 0x20
  lwz       r10, 0x50(r30)
  lwz       r9, 0x54(r30)
  lwz       r8, 0x58(r30)
  lwz       r7, 0x5C(r30)
  lwz       r0, 0x60(r30)
  stw       r29, 0x14(r1)
  stw       r28, 0x18(r1)
  stw       r12, 0x1C(r1)
  stw       r11, 0x20(r1)
  stw       r10, 0x24(r1)
  stw       r9, 0x28(r1)
  stw       r8, 0x2C(r1)
  stw       r7, 0x30(r1)
  stw       r0, 0x34(r1)
  bl        -0x153AD8
  addi      r3, r1, 0x38
  li        r4, 0
  bl        -0x154E64
  lfs       f31, 0x14(r31)
  lfs       f0, 0x1C(r31)
  lfs       f30, 0x10(r31)
  fsubs     f1, f0, f31
  bl        -0x17C8A4
  lfs       f0, 0x18(r31)
  mr        r28, r3
  fsubs     f1, f0, f30
  bl        -0x17C8B4
  fmr       f1, f31
  mr        r29, r3
  bl        -0x17C8C0
  fmr       f1, f30
  mr        r30, r3
  bl        -0x17C8CC
  mr        r4, r30
  mr        r5, r29
  mr        r6, r28
  bl        -0x154C50
  lfs       f2, 0x14(r31)
  lfs       f0, 0x1C(r31)
  lfs       f1, 0x10(r31)
  lfs       f3, 0x18(r31)
  fsubs     f4, f0, f2
  lfs       f5, -0x3D40(r2)
  fsubs     f3, f3, f1
  lfs       f6, -0x3D20(r2)
  bl        -0x154CBC
  li        r3, 0
  bl        -0x1594B8
  li        r3, 0
  bl        -0x156108
  li        r3, 0
  bl        -0x15603C
  li        r3, 0
  bl        -0x154E54
  li        r3, 0x1
  bl        -0x1558BC
  li        r3, 0
  li        r4, 0x4
  bl        -0x156004
  li        r3, 0
  li        r4, 0xFF
  li        r5, 0xFF
  li        r6, 0x4
  bl        -0x155A78
  li        r3, 0x1
  bl        -0x157638
  lwz       r8, 0x8(r31)
  addi      r4, r1, 0xC
  li        r3, 0x4
  lbz       r7, 0x0(r8)
  lbz       r6, 0x1(r8)
  lbz       r5, 0x2(r8)
  lbz       r0, 0x3(r8)
  stb       r7, 0x8(r1)
  stb       r6, 0x9(r1)
  stb       r5, 0xA(r1)
  stb       r0, 0xB(r1)
  lwz       r0, 0x8(r1)
  stw       r0, 0xC(r1)
  bl        -0x157760
  li        r3, 0x4
  li        r4, 0
  li        r5, 0
  li        r6, 0
  li        r7, 0
  li        r8, 0
  li        r9, 0x2
  bl        -0x157654
  li        r3, 0x2
  bl        -0x158954
  li        r3, 0
  li        r4, 0
  li        r5, 0
  bl        -0x155388
  li        r3, 0
  li        r4, 0x1
  li        r5, 0x1
  li        r6, 0
  bl        -0x155448
  li        r3, 0
  bl        -0x1553FC
  li        r3, 0x1
  bl        -0x1553D8
  li        r3, 0x1
  li        r4, 0
  bl        -0x155250
  bl        -0x159E70
  bl        -0x159838
  li        r3, 0x9
  li        r4, 0x1
  bl        -0x15A2CC
  li        r3, 0
  li        r4, 0x9
  li        r5, 0x1
  li        r6, 0x4
  li        r7, 0
  bl        -0x159E60
  li        r3, 0x80
  li        r4, 0
  li        r5, 0x4
  bl        -0x158BF0
  lfs       f2, 0x14(r31)
  lis       r5, 0xCC01
  lfs       f0, 0x10(r31)
  li        r3, 0
  lfs       f1, -0x3D40(r2)
  li        r4, 0
  stfs      f0, -0x8000(r5)
  stfs      f2, -0x8000(r5)
  stfs      f1, -0x8000(r5)
  lfs       f2, 0x14(r31)
  lfs       f0, 0x18(r31)
  stfs      f0, -0x8000(r5)
  stfs      f2, -0x8000(r5)
  stfs      f1, -0x8000(r5)
  lfs       f2, 0x1C(r31)
  lfs       f0, 0x18(r31)
  stfs      f0, -0x8000(r5)
  stfs      f2, -0x8000(r5)
  stfs      f1, -0x8000(r5)
  lfs       f2, 0x1C(r31)
  lfs       f0, 0x10(r31)
  stfs      f0, -0x8000(r5)
  stfs      f2, -0x8000(r5)
  stfs      f1, -0x8000(r5)
  bl        -0x1552F0
  lwz       r0, -0x3D0C(r2)
  addi      r4, r1, 0x10
  li        r3, 0x4
  stw       r0, 0x10(r1)
  bl        -0x15787C
  bl        -0x159F24
  bl        -0x1598EC
  li        r3, 0x9
  li        r4, 0x3
  bl        -0x15A380
  li        r3, 0
  li        r4, 0x9
  li        r5, 0x1
  li        r6, 0x4
  li        r7, 0
  bl        -0x159F14
  lis       r4, 0x804F
  li        r3, 0x9
  addi      r4, r4, 0x79D0
  li        r5, 0xC
  bl        -0x1599B0
  psq_l     f31,0xD8(r1),0,0
  lfd       f31, 0xD0(r1)
  psq_l     f30,0xC8(r1),0,0
  lfd       f30, 0xC0(r1)
  lwz       r31, 0xBC(r1)
  lwz       r30, 0xB8(r1)
  lwz       r29, 0xB4(r1)
  lwz       r0, 0xE4(r1)
  lwz       r28, 0xB0(r1)
  mtlr      r0
  addi      r1, r1, 0xE0
  blr
*/
}

/*
 * --INFO--
 * Address:	8023E664
 * Size:	0000C0
 */
void drawCylinder__Q24Game15ShadowCylinder2FR7Matrixfi(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  mr        r0, r4
  li        r4, 0
  stw       r31, 0xC(r1)
  mr        r31, r5
  stw       r30, 0x8(r1)
  mr        r30, r3
  mr        r3, r0
  bl        -0x155114
  li        r3, 0x1
  li        r4, 0x3
  li        r5, 0
  bl        -0x155518
  li        r3, 0x2
  bl        -0x158AFC
  li        r3, 0x1
  li        r4, 0x1
  li        r5, 0x1
  li        r6, 0x5
  bl        -0x1555E0
  lwz       r3, 0x4(r30)
  rlwinm    r31,r31,2,0,29
  lwzx      r3, r3, r31
  lwz       r0, 0x8(r3)
  lwz       r3, 0x4(r3)
  rlwinm    r4,r0,0,0,26
  bl        -0x1552FC
  li        r3, 0x1
  bl        -0x158B34
  li        r3, 0x3
  li        r4, 0x1
  li        r5, 0x1
  li        r6, 0x5
  bl        -0x155618
  lwz       r3, 0x4(r30)
  lwzx      r3, r3, r31
  lwz       r0, 0x8(r3)
  lwz       r3, 0x4(r3)
  rlwinm    r4,r0,0,0,26
  bl        -0x155330
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
 * Address:	8023E724
 * Size:	0001E4
 */
void drawFinish__Q24Game15ShadowCylinder2Fv(void)
{
/*
.loc_0x0:
  stwu      r1, -0xE0(r1)
  mflr      r0
  stw       r0, 0xE4(r1)
  stfd      f31, 0xD0(r1)
  psq_st    f31,0xD8(r1),0,0
  stfd      f30, 0xC0(r1)
  psq_st    f30,0xC8(r1),0,0
  stw       r31, 0xBC(r1)
  stw       r30, 0xB8(r1)
  stw       r29, 0xB4(r1)
  stw       r28, 0xB0(r1)
  mr        r31, r3
  lis       r3, 0x8048
  lfs       f1, 0x14(r31)
  addi      r30, r3, 0x3F58
  lfs       f2, 0x1C(r31)
  addi      r3, r1, 0x64
  lfs       f3, 0x10(r31)
  lfs       f4, 0x18(r31)
  lfs       f5, -0x3D40(r2)
  lfs       f6, -0x3D10(r2)
  bl        -0x1539A0
  addi      r3, r1, 0x64
  li        r4, 0x1
  bl        -0x15533C
  lwz       r29, 0x40(r30)
  addi      r3, r1, 0x34
  lwz       r28, 0x44(r30)
  addi      r4, r1, 0x28
  lwz       r12, 0x48(r30)
  addi      r5, r1, 0x10
  lwz       r11, 0x4C(r30)
  addi      r6, r1, 0x1C
  lwz       r10, 0x50(r30)
  lwz       r9, 0x54(r30)
  lwz       r8, 0x58(r30)
  lwz       r7, 0x5C(r30)
  lwz       r0, 0x60(r30)
  stw       r29, 0x10(r1)
  stw       r28, 0x14(r1)
  stw       r12, 0x18(r1)
  stw       r11, 0x1C(r1)
  stw       r10, 0x20(r1)
  stw       r9, 0x24(r1)
  stw       r8, 0x28(r1)
  stw       r7, 0x2C(r1)
  stw       r0, 0x30(r1)
  bl        -0x153EE8
  addi      r3, r1, 0x34
  li        r4, 0
  bl        -0x155274
  lfs       f31, 0x14(r31)
  lfs       f0, 0x1C(r31)
  lfs       f30, 0x10(r31)
  fsubs     f1, f0, f31
  bl        -0x17CCB4
  lfs       f0, 0x18(r31)
  mr        r28, r3
  fsubs     f1, f0, f30
  bl        -0x17CCC4
  fmr       f1, f31
  mr        r29, r3
  bl        -0x17CCD0
  fmr       f1, f30
  mr        r30, r3
  bl        -0x17CCDC
  mr        r4, r30
  mr        r5, r29
  mr        r6, r28
  bl        -0x155060
  lfs       f2, 0x14(r31)
  lfs       f0, 0x1C(r31)
  lfs       f1, 0x10(r31)
  lfs       f3, 0x18(r31)
  fsubs     f4, f0, f2
  lfs       f5, -0x3D40(r2)
  fsubs     f3, f3, f1
  lfs       f6, -0x3D20(r2)
  bl        -0x1550CC
  li        r3, 0x1
  bl        -0x155738
  li        r3, 0x1
  bl        -0x155714
  lwz       r8, 0x8(r31)
  addi      r4, r1, 0xC
  li        r3, 0x4
  lbz       r7, 0x0(r8)
  lbz       r6, 0x1(r8)
  lbz       r5, 0x2(r8)
  lbz       r0, 0x3(r8)
  stb       r7, 0x8(r1)
  stb       r6, 0x9(r1)
  stb       r5, 0xA(r1)
  stb       r0, 0xB(r1)
  lwz       r0, 0x8(r1)
  stw       r0, 0xC(r1)
  bl        -0x157B30
  li        r3, 0x2
  bl        -0x158D04
  li        r3, 0
  li        r4, 0
  li        r5, 0
  bl        -0x155738
  mr        r3, r31
  bl        .loc_0x1E4
  mr        r3, r31
  bl        0x1AC
  mr        r3, r31
  bl        0x2A0
  psq_l     f31,0xD8(r1),0,0
  lfd       f31, 0xD0(r1)
  psq_l     f30,0xC8(r1),0,0
  lfd       f30, 0xC0(r1)
  lwz       r31, 0xBC(r1)
  lwz       r30, 0xB8(r1)
  lwz       r29, 0xB4(r1)
  lwz       r0, 0xE4(r1)
  lwz       r28, 0xB0(r1)
  mtlr      r0
  addi      r1, r1, 0xE0
  blr       

.loc_0x1E4:
*/
}

/*
 * --INFO--
 * Address:	8023E908
 * Size:	000170
 */
void copyShadowTexture__Q24Game15ShadowCylinder2Fv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x50(r1)
  mflr      r0
  stw       r0, 0x54(r1)
  stw       r31, 0x4C(r1)
  mr        r31, r3
  lfs       f0, 0x10(r3)
  lfs       f2, 0x14(r3)
  fctiwz    f3, f0
  lfs       f1, 0x18(r3)
  lfs       f0, 0x1C(r3)
  fctiwz    f2, f2
  fctiwz    f1, f1
  fctiwz    f0, f0
  stfd      f3, 0x8(r1)
  stfd      f2, 0x10(r1)
  lwz       r3, 0xC(r1)
  stfd      f1, 0x18(r1)
  lwz       r4, 0x14(r1)
  stfd      f0, 0x20(r1)
  lwz       r5, 0x1C(r1)
  lwz       r6, 0x24(r1)
  bl        -0x158C9C
  lfs       f3, 0x18(r31)
  li        r5, 0x27
  lfs       f2, 0x10(r31)
  li        r6, 0x1
  lfs       f1, 0x1C(r31)
  lfs       f0, 0x14(r31)
  fsubs     f3, f3, f2
  lfs       f2, -0x3D44(r2)
  fsubs     f0, f1, f0
  fmuls     f1, f3, f2
  fmuls     f0, f0, f2
  fctiwz    f1, f1
  fctiwz    f0, f0
  stfd      f1, 0x28(r1)
  stfd      f0, 0x30(r1)
  lwz       r3, 0x2C(r1)
  lwz       r4, 0x34(r1)
  bl        -0x158C34
  lwz       r0, 0x60(r31)
  li        r4, 0
  lwz       r3, 0x58(r31)
  rlwinm    r0,r0,2,0,29
  lwzx      r3, r3, r0
  bl        -0x158310
  bl        -0x159404
  lfs       f3, 0x18(r31)
  li        r7, 0x1
  lfs       f2, 0x10(r31)
  li        r8, 0
  lfs       f1, 0x1C(r31)
  li        r9, 0
  lfs       f0, 0x14(r31)
  fsubs     f3, f3, f2
  lfs       f2, -0x3D44(r2)
  li        r10, 0
  fsubs     f0, f1, f0
  lwz       r4, 0x60(r31)
  fmuls     f1, f3, f2
  lwz       r3, 0x58(r31)
  rlwinm    r0,r4,2,0,29
  fmuls     f0, f0, f2
  fctiwz    f1, f1
  lwz       r6, 0x5C(r31)
  rlwinm    r5,r4,5,0,26
  lwzx      r4, r3, r0
  fctiwz    f0, f0
  stfd      f1, 0x38(r1)
  add       r3, r6, r5
  stfd      f0, 0x40(r1)
  lwz       r5, 0x3C(r1)
  lwz       r6, 0x44(r1)
  bl        -0x1578B0
  lfs       f1, -0x3D40(r2)
  li        r4, 0x1
  lwz       r0, 0x60(r31)
  li        r5, 0x1
  fmr       f2, f1
  lwz       r3, 0x5C(r31)
  rlwinm    r0,r0,5,0,26
  fmr       f3, f1
  add       r3, r3, r0
  li        r6, 0
  li        r7, 0
  li        r8, 0
  bl        -0x157650
  lwz       r0, 0x54(r1)
  lwz       r31, 0x4C(r1)
  mtlr      r0
  addi      r1, r1, 0x50
  blr
*/
}

/*
 * --INFO--
 * Address:	8023EA78
 * Size:	0000FC
 */
void setupTextureFilterGX__Q24Game15ShadowCylinder2Fv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  li        r4, 0
  stw       r0, 0x14(r1)
  lwz       r0, 0x60(r3)
  lwz       r3, 0x5C(r3)
  rlwinm    r0,r0,5,0,26
  add       r3, r3, r0
  bl        -0x157388
  li        r3, 0x1
  bl        -0x159B04
  li        r3, 0
  li        r4, 0x1
  li        r5, 0x4
  li        r6, 0x3C
  li        r7, 0
  li        r8, 0x7D
  bl        -0x159DA0
  li        r3, 0
  li        r4, 0
  li        r5, 0
  li        r6, 0x4
  bl        -0x1560B4
  lwz       r0, 0x2B28(r2)
  addi      r4, r1, 0x8
  li        r3, 0x1
  stw       r0, 0x8(r1)
  bl        -0x156484
  li        r3, 0
  li        r4, 0x9
  li        r5, 0x3
  li        r6, 0xA
  li        r7, 0xF
  bl        -0x1565F4
  li        r3, 0
  li        r4, 0x8
  li        r5, 0
  li        r6, 0
  li        r7, 0
  li        r8, 0
  bl        -0x156588
  li        r3, 0
  li        r4, 0x4
  li        r5, 0x1
  li        r6, 0x5
  li        r7, 0x7
  bl        -0x1565E4
  li        r3, 0
  li        r4, 0x8
  li        r5, 0
  li        r6, 0
  li        r7, 0
  li        r8, 0
  bl        -0x156554
  li        r3, 0x1
  li        r4, 0x4
  li        r5, 0x5
  li        r6, 0x5
  bl        -0x155A88
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8023EB74
 * Size:	000108
 */
void drawTextureFilter__Q24Game15ShadowCylinder2Fv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        -0x15A4B8
  bl        -0x159E80
  li        r3, 0x9
  li        r4, 0x1
  bl        -0x15A914
  li        r3, 0xD
  li        r4, 0x1
  bl        -0x15A920
  li        r3, 0
  li        r4, 0x9
  li        r5, 0x1
  li        r6, 0x4
  li        r7, 0
  bl        -0x15A4B4
  li        r3, 0
  li        r4, 0xD
  li        r5, 0x1
  li        r6, 0x1
  li        r7, 0x4
  bl        -0x15A4CC
  li        r3, 0x80
  li        r4, 0
  li        r5, 0x4
  bl        -0x15925C
  lfs       f2, 0x14(r31)
  lis       r4, 0xCC01
  lfs       f0, 0x10(r31)
  li        r3, 0
  lfs       f1, -0x3D40(r2)
  li        r0, 0x10
  stfs      f0, -0x8000(r4)
  stfs      f2, -0x8000(r4)
  stfs      f1, -0x8000(r4)
  stb       r3, -0x8000(r4)
  stb       r3, -0x8000(r4)
  lfs       f2, 0x14(r31)
  lfs       f0, 0x18(r31)
  stfs      f0, -0x8000(r4)
  stfs      f2, -0x8000(r4)
  stfs      f1, -0x8000(r4)
  stb       r0, -0x8000(r4)
  stb       r3, -0x8000(r4)
  lfs       f2, 0x1C(r31)
  lfs       f0, 0x18(r31)
  stfs      f0, -0x8000(r4)
  stfs      f2, -0x8000(r4)
  stfs      f1, -0x8000(r4)
  stb       r0, -0x8000(r4)
  stb       r0, -0x8000(r4)
  lfs       f2, 0x1C(r31)
  lfs       f0, 0x10(r31)
  stfs      f0, -0x8000(r4)
  stfs      f2, -0x8000(r4)
  stfs      f1, -0x8000(r4)
  stb       r3, -0x8000(r4)
  stb       r0, -0x8000(r4)
  lwz       r31, 0xC(r1)
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8023EC7C
 * Size:	00005C
 */
void __ct__Q24Game15ShadowCylinder3FPQ24Game11ShadowParmsP6Color4(void)
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
  bl        -0x1270
  lis       r4, 0x804C
  mr        r3, r29
  addi      r0, r4, 0x1910
  stw       r0, 0x0(r29)
  stw       r30, 0xC(r29)
  stw       r31, 0x8(r29)
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
 * Address:	8023ECD8
 * Size:	000350
 */
void drawInit__Q24Game15ShadowCylinder3Fv(void)
{
/*
.loc_0x0:
  stwu      r1, -0xE0(r1)
  mflr      r0
  stw       r0, 0xE4(r1)
  stfd      f31, 0xD0(r1)
  psq_st    f31,0xD8(r1),0,0
  stfd      f30, 0xC0(r1)
  psq_st    f30,0xC8(r1),0,0
  stw       r31, 0xBC(r1)
  stw       r30, 0xB8(r1)
  stw       r29, 0xB4(r1)
  stw       r28, 0xB0(r1)
  mr        r31, r3
  lis       r3, 0x8048
  lfs       f1, 0x14(r31)
  addi      r30, r3, 0x3F58
  lfs       f2, 0x1C(r31)
  addi      r3, r1, 0x68
  lfs       f3, 0x10(r31)
  lfs       f4, 0x18(r31)
  lfs       f5, -0x3D40(r2)
  lfs       f6, -0x3D10(r2)
  bl        -0x153F54
  addi      r3, r1, 0x68
  li        r4, 0x1
  bl        -0x1558F0
  lwz       r29, 0x40(r30)
  addi      r3, r1, 0x38
  lwz       r28, 0x44(r30)
  addi      r4, r1, 0x2C
  lwz       r12, 0x48(r30)
  addi      r5, r1, 0x14
  lwz       r11, 0x4C(r30)
  addi      r6, r1, 0x20
  lwz       r10, 0x50(r30)
  lwz       r9, 0x54(r30)
  lwz       r8, 0x58(r30)
  lwz       r7, 0x5C(r30)
  lwz       r0, 0x60(r30)
  stw       r29, 0x14(r1)
  stw       r28, 0x18(r1)
  stw       r12, 0x1C(r1)
  stw       r11, 0x20(r1)
  stw       r10, 0x24(r1)
  stw       r9, 0x28(r1)
  stw       r8, 0x2C(r1)
  stw       r7, 0x30(r1)
  stw       r0, 0x34(r1)
  bl        -0x15449C
  addi      r3, r1, 0x38
  li        r4, 0
  bl        -0x155828
  lfs       f31, 0x14(r31)
  lfs       f0, 0x1C(r31)
  lfs       f30, 0x10(r31)
  fsubs     f1, f0, f31
  bl        -0x17D268
  lfs       f0, 0x18(r31)
  mr        r28, r3
  fsubs     f1, f0, f30
  bl        -0x17D278
  fmr       f1, f31
  mr        r29, r3
  bl        -0x17D284
  fmr       f1, f30
  mr        r30, r3
  bl        -0x17D290
  mr        r4, r30
  mr        r5, r29
  mr        r6, r28
  bl        -0x155614
  lfs       f2, 0x14(r31)
  lfs       f0, 0x1C(r31)
  lfs       f1, 0x10(r31)
  lfs       f3, 0x18(r31)
  fsubs     f4, f0, f2
  lfs       f5, -0x3D40(r2)
  fsubs     f3, f3, f1
  lfs       f6, -0x3D20(r2)
  bl        -0x155680
  li        r3, 0
  bl        -0x159E7C
  li        r3, 0
  bl        -0x156ACC
  li        r3, 0
  bl        -0x156A00
  li        r3, 0
  bl        -0x155818
  li        r3, 0x1
  bl        -0x156280
  li        r3, 0
  li        r4, 0x4
  bl        -0x1569C8
  li        r3, 0
  li        r4, 0xFF
  li        r5, 0xFF
  li        r6, 0x4
  bl        -0x15643C
  li        r3, 0x1
  bl        -0x157FFC
  lwz       r8, 0x8(r31)
  addi      r4, r1, 0xC
  li        r3, 0x4
  lbz       r7, 0x0(r8)
  lbz       r6, 0x1(r8)
  lbz       r5, 0x2(r8)
  lbz       r0, 0x3(r8)
  stb       r7, 0x8(r1)
  stb       r6, 0x9(r1)
  stb       r5, 0xA(r1)
  stb       r0, 0xB(r1)
  lwz       r0, 0x8(r1)
  stw       r0, 0xC(r1)
  bl        -0x158124
  li        r3, 0x4
  li        r4, 0
  li        r5, 0
  li        r6, 0
  li        r7, 0
  li        r8, 0
  li        r9, 0x2
  bl        -0x158018
  li        r3, 0x2
  bl        -0x159318
  li        r3, 0
  li        r4, 0
  li        r5, 0
  bl        -0x155D4C
  li        r3, 0
  li        r4, 0x1
  li        r5, 0x1
  li        r6, 0
  bl        -0x155E0C
  li        r3, 0
  bl        -0x155DC0
  li        r3, 0x1
  bl        -0x155D9C
  li        r3, 0x1
  li        r4, 0
  bl        -0x155C14
  bl        -0x15A834
  bl        -0x15A1FC
  li        r3, 0x9
  li        r4, 0x1
  bl        -0x15AC90
  li        r3, 0
  li        r4, 0x9
  li        r5, 0x1
  li        r6, 0x4
  li        r7, 0
  bl        -0x15A824
  li        r3, 0x80
  li        r4, 0
  li        r5, 0x4
  bl        -0x1595B4
  lfs       f2, 0x14(r31)
  lis       r5, 0xCC01
  lfs       f0, 0x10(r31)
  li        r3, 0
  lfs       f1, -0x3D40(r2)
  li        r4, 0
  stfs      f0, -0x8000(r5)
  stfs      f2, -0x8000(r5)
  stfs      f1, -0x8000(r5)
  lfs       f2, 0x14(r31)
  lfs       f0, 0x18(r31)
  stfs      f0, -0x8000(r5)
  stfs      f2, -0x8000(r5)
  stfs      f1, -0x8000(r5)
  lfs       f2, 0x1C(r31)
  lfs       f0, 0x18(r31)
  stfs      f0, -0x8000(r5)
  stfs      f2, -0x8000(r5)
  stfs      f1, -0x8000(r5)
  lfs       f2, 0x1C(r31)
  lfs       f0, 0x10(r31)
  stfs      f0, -0x8000(r5)
  stfs      f2, -0x8000(r5)
  stfs      f1, -0x8000(r5)
  bl        -0x155CB4
  lwz       r0, -0x3D08(r2)
  addi      r4, r1, 0x10
  li        r3, 0x4
  stw       r0, 0x10(r1)
  bl        -0x158240
  bl        -0x15A8E8
  bl        -0x15A2B0
  li        r3, 0x9
  li        r4, 0x3
  bl        -0x15AD44
  li        r3, 0
  li        r4, 0x9
  li        r5, 0x1
  li        r6, 0x4
  li        r7, 0
  bl        -0x15A8D8
  lis       r4, 0x804F
  li        r3, 0x9
  addi      r4, r4, 0x79D0
  li        r5, 0xC
  bl        -0x15A374
  psq_l     f31,0xD8(r1),0,0
  lfd       f31, 0xD0(r1)
  psq_l     f30,0xC8(r1),0,0
  lfd       f30, 0xC0(r1)
  lwz       r31, 0xBC(r1)
  lwz       r30, 0xB8(r1)
  lwz       r29, 0xB4(r1)
  lwz       r0, 0xE4(r1)
  lwz       r28, 0xB0(r1)
  mtlr      r0
  addi      r1, r1, 0xE0
  blr
*/
}

/*
 * --INFO--
 * Address:	8023F028
 * Size:	0000F8
 */
void drawCylinder__Q24Game15ShadowCylinder3FR7Matrixfi(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  mr        r0, r4
  li        r4, 0
  stw       r31, 0xC(r1)
  mr        r31, r5
  stw       r30, 0x8(r1)
  mr        r30, r3
  mr        r3, r0
  bl        -0x155AD8
  li        r3, 0x1
  bl        -0x1594B0
  li        r3, 0x1
  li        r4, 0x6
  li        r5, 0
  bl        -0x155EE4
  li        r3, 0x1
  li        r4, 0x1
  li        r5, 0x1
  li        r6, 0x5
  bl        -0x155FA4
  lwz       r3, 0x4(r30)
  rlwinm    r31,r31,2,0,29
  lwzx      r3, r3, r31
  lwz       r0, 0x8(r3)
  lwz       r3, 0x4(r3)
  rlwinm    r4,r0,0,0,26
  bl        -0x155CC0
  li        r3, 0x2
  bl        -0x1594F8
  li        r3, 0x1
  li        r4, 0x3
  li        r5, 0
  bl        -0x155F2C
  lwz       r3, 0x4(r30)
  lwzx      r3, r3, r31
  lwz       r0, 0x8(r3)
  lwz       r3, 0x4(r3)
  rlwinm    r4,r0,0,0,26
  bl        -0x155CF0
  li        r3, 0
  li        r4, 0x7
  li        r5, 0
  bl        -0x155F54
  li        r3, 0x3
  li        r4, 0x1
  li        r5, 0x1
  li        r6, 0x5
  bl        -0x156014
  lwz       r3, 0x4(r30)
  lwzx      r3, r3, r31
  lwz       r0, 0x8(r3)
  lwz       r3, 0x4(r3)
  rlwinm    r4,r0,0,0,26
  bl        -0x155D2C
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
 * Address:	8023F120
 * Size:	0001D4
 */
void drawFinish__Q24Game15ShadowCylinder3Fv(void)
{
/*
.loc_0x0:
  stwu      r1, -0xE0(r1)
  mflr      r0
  stw       r0, 0xE4(r1)
  stfd      f31, 0xD0(r1)
  psq_st    f31,0xD8(r1),0,0
  stfd      f30, 0xC0(r1)
  psq_st    f30,0xC8(r1),0,0
  stw       r31, 0xBC(r1)
  stw       r30, 0xB8(r1)
  stw       r29, 0xB4(r1)
  stw       r28, 0xB0(r1)
  mr        r31, r3
  lis       r3, 0x8048
  lfs       f1, 0x14(r31)
  addi      r30, r3, 0x3F58
  lfs       f2, 0x1C(r31)
  addi      r3, r1, 0x64
  lfs       f3, 0x10(r31)
  lfs       f4, 0x18(r31)
  lfs       f5, -0x3D40(r2)
  lfs       f6, -0x3D10(r2)
  bl        -0x15439C
  addi      r3, r1, 0x64
  li        r4, 0x1
  bl        -0x155D38
  lwz       r29, 0x40(r30)
  addi      r3, r1, 0x34
  lwz       r28, 0x44(r30)
  addi      r4, r1, 0x28
  lwz       r12, 0x48(r30)
  addi      r5, r1, 0x10
  lwz       r11, 0x4C(r30)
  addi      r6, r1, 0x1C
  lwz       r10, 0x50(r30)
  lwz       r9, 0x54(r30)
  lwz       r8, 0x58(r30)
  lwz       r7, 0x5C(r30)
  lwz       r0, 0x60(r30)
  stw       r29, 0x10(r1)
  stw       r28, 0x14(r1)
  stw       r12, 0x18(r1)
  stw       r11, 0x1C(r1)
  stw       r10, 0x20(r1)
  stw       r9, 0x24(r1)
  stw       r8, 0x28(r1)
  stw       r7, 0x2C(r1)
  stw       r0, 0x30(r1)
  bl        -0x1548E4
  addi      r3, r1, 0x34
  li        r4, 0
  bl        -0x155C70
  lfs       f31, 0x14(r31)
  lfs       f0, 0x1C(r31)
  lfs       f30, 0x10(r31)
  fsubs     f1, f0, f31
  bl        -0x17D6B0
  lfs       f0, 0x18(r31)
  mr        r28, r3
  fsubs     f1, f0, f30
  bl        -0x17D6C0
  fmr       f1, f31
  mr        r29, r3
  bl        -0x17D6CC
  fmr       f1, f30
  mr        r30, r3
  bl        -0x17D6D8
  mr        r4, r30
  mr        r5, r29
  mr        r6, r28
  bl        -0x155A5C
  lfs       f2, 0x14(r31)
  lfs       f0, 0x1C(r31)
  lfs       f1, 0x10(r31)
  lfs       f3, 0x18(r31)
  fsubs     f4, f0, f2
  lfs       f5, -0x3D40(r2)
  fsubs     f3, f3, f1
  lfs       f6, -0x3D20(r2)
  bl        -0x155AC8
  li        r3, 0x1
  bl        -0x156134
  li        r3, 0x1
  bl        -0x156110
  lwz       r8, 0x8(r31)
  addi      r4, r1, 0xC
  li        r3, 0x4
  lbz       r7, 0x0(r8)
  lbz       r6, 0x1(r8)
  lbz       r5, 0x2(r8)
  lbz       r0, 0x3(r8)
  stb       r7, 0x8(r1)
  stb       r6, 0x9(r1)
  stb       r5, 0xA(r1)
  stb       r0, 0xB(r1)
  lwz       r0, 0x8(r1)
  stw       r0, 0xC(r1)
  bl        -0x15852C
  li        r3, 0x2
  bl        -0x159700
  li        r3, 0
  li        r4, 0
  li        r5, 0
  bl        -0x156134
  mr        r3, r31
  bl        .loc_0x1D4
  psq_l     f31,0xD8(r1),0,0
  lfd       f31, 0xD0(r1)
  psq_l     f30,0xC8(r1),0,0
  lfd       f30, 0xC0(r1)
  lwz       r31, 0xBC(r1)
  lwz       r30, 0xB8(r1)
  lwz       r29, 0xB4(r1)
  lwz       r0, 0xE4(r1)
  lwz       r28, 0xB0(r1)
  mtlr      r0
  addi      r1, r1, 0xE0
  blr       

.loc_0x1D4:
*/
}

/*
 * --INFO--
 * Address:	8023F2F4
 * Size:	0000D0
 */
void drawScreenFilter__Q24Game15ShadowCylinder3Fv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  li        r4, 0x6
  li        r5, 0x7
  stw       r0, 0x14(r1)
  li        r6, 0x5
  stw       r31, 0xC(r1)
  mr        r31, r3
  li        r3, 0x1
  bl        -0x156240
  bl        -0x15AC4C
  bl        -0x15A614
  li        r3, 0x9
  li        r4, 0x1
  bl        -0x15B0A8
  li        r3, 0
  li        r4, 0x9
  li        r5, 0x1
  li        r6, 0x4
  li        r7, 0
  bl        -0x15AC3C
  li        r3, 0x80
  li        r4, 0
  li        r5, 0x4
  bl        -0x1599CC
  lfs       f2, 0x14(r31)
  lis       r3, 0xCC01
  lfs       f0, 0x10(r31)
  lfs       f1, -0x3D40(r2)
  stfs      f0, -0x8000(r3)
  stfs      f2, -0x8000(r3)
  stfs      f1, -0x8000(r3)
  lfs       f2, 0x14(r31)
  lfs       f0, 0x18(r31)
  stfs      f0, -0x8000(r3)
  stfs      f2, -0x8000(r3)
  stfs      f1, -0x8000(r3)
  lfs       f2, 0x1C(r31)
  lfs       f0, 0x18(r31)
  stfs      f0, -0x8000(r3)
  stfs      f2, -0x8000(r3)
  stfs      f1, -0x8000(r3)
  lfs       f2, 0x1C(r31)
  lfs       f0, 0x10(r31)
  stfs      f0, -0x8000(r3)
  stfs      f2, -0x8000(r3)
  stfs      f1, -0x8000(r3)
  lwz       r31, 0xC(r1)
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8023F3C4
 * Size:	000004
 */
void setFilterTextureID__Q24Game15ShadowCylinder3Fi(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	8023F3C8
 * Size:	000028
 */
void __sinit_ShadowCylinder_cpp(void)
{
/*
.loc_0x0:
  lis       r4, 0x8051
  li        r0, -0x1
  lfs       f0, 0x48B0(r4)
  lis       r3, 0x804C
  stw       r0, -0x6998(r13)
  stfsu     f0, 0x1780(r3)
  stfs      f0, -0x6994(r13)
  stfs      f0, 0x4(r3)
  stfs      f0, 0x8(r3)
  blr
*/
}