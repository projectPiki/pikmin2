

/*
 * --INFO--
 * Address:	8005AF0C
 * Size:	00056C
 */
void J2DAnmTransformFull::getTransform(unsigned short, J3DTransformInfo*) const
{
	/*
	.loc_0x0:
	  mulli     r0, r4, 0x3
	  lwz       r8, 0x24(r3)
	  lfs       f2, 0x8(r3)
	  lfs       f0, -0x7A00(r2)
	  rlwinm    r6,r0,0,16,31
	  stwu      r1, -0x10(r1)
	  mulli     r7, r6, 0xC
	  fcmpo     cr0, f2, f0
	  addi      r0, r6, 0x2
	  addi      r4, r6, 0x1
	  mulli     r6, r4, 0xC
	  add       r4, r8, r7
	  lhz       r10, 0x0(r4)
	  mulli     r0, r0, 0xC
	  add       r6, r8, r6
	  add       r7, r8, r0
	  bge-      .loc_0x5C
	  lhz       r0, 0x2(r4)
	  lwz       r8, 0x10(r3)
	  rlwinm    r0,r0,2,0,29
	  lfsx      f0, r8, r0
	  stfs      f0, 0x0(r5)
	  b         .loc_0xC4

	.loc_0x5C:
	  lis       r0, 0x4330
	  stw       r10, 0xC(r1)
	  lfd       f1, -0x79F8(r2)
	  stw       r0, 0x8(r1)
	  lfd       f0, 0x8(r1)
	  fsubs     f0, f0, f1
	  fcmpo     cr0, f2, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0xA0
	  lhz       r0, 0x2(r4)
	  lwz       r9, 0x10(r3)
	  add       r8, r10, r0
	  subi      r0, r8, 0x1
	  rlwinm    r0,r0,2,0,29
	  lfsx      f0, r9, r0
	  stfs      f0, 0x0(r5)
	  b         .loc_0xC4

	.loc_0xA0:
	  fctiwz    f0, f2
	  lhz       r8, 0x2(r4)
	  lwz       r9, 0x10(r3)
	  stfd      f0, 0x8(r1)
	  lwz       r0, 0xC(r1)
	  add       r0, r8, r0
	  rlwinm    r0,r0,2,0,29
	  lfsx      f0, r9, r0
	  stfs      f0, 0x0(r5)

	.loc_0xC4:
	  lfs       f2, 0x8(r3)
	  lfs       f0, -0x7A00(r2)
	  lhz       r8, 0x0(r6)
	  fcmpo     cr0, f2, f0
	  bge-      .loc_0xF0
	  lhz       r0, 0x2(r6)
	  lwz       r8, 0x10(r3)
	  rlwinm    r0,r0,2,0,29
	  lfsx      f0, r8, r0
	  stfs      f0, 0x4(r5)
	  b         .loc_0x158

	.loc_0xF0:
	  lis       r0, 0x4330
	  stw       r8, 0xC(r1)
	  lfd       f1, -0x79F8(r2)
	  stw       r0, 0x8(r1)
	  lfd       f0, 0x8(r1)
	  fsubs     f0, f0, f1
	  fcmpo     cr0, f2, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x134
	  lhz       r0, 0x2(r6)
	  lwz       r9, 0x10(r3)
	  add       r8, r8, r0
	  subi      r0, r8, 0x1
	  rlwinm    r0,r0,2,0,29
	  lfsx      f0, r9, r0
	  stfs      f0, 0x4(r5)
	  b         .loc_0x158

	.loc_0x134:
	  fctiwz    f0, f2
	  lhz       r8, 0x2(r6)
	  lwz       r9, 0x10(r3)
	  stfd      f0, 0x8(r1)
	  lwz       r0, 0xC(r1)
	  add       r0, r8, r0
	  rlwinm    r0,r0,2,0,29
	  lfsx      f0, r9, r0
	  stfs      f0, 0x4(r5)

	.loc_0x158:
	  lfs       f2, 0x8(r3)
	  lfs       f0, -0x7A00(r2)
	  lhz       r8, 0x0(r7)
	  fcmpo     cr0, f2, f0
	  bge-      .loc_0x184
	  lhz       r0, 0x2(r7)
	  lwz       r8, 0x10(r3)
	  rlwinm    r0,r0,2,0,29
	  lfsx      f0, r8, r0
	  stfs      f0, 0x8(r5)
	  b         .loc_0x1EC

	.loc_0x184:
	  lis       r0, 0x4330
	  stw       r8, 0xC(r1)
	  lfd       f1, -0x79F8(r2)
	  stw       r0, 0x8(r1)
	  lfd       f0, 0x8(r1)
	  fsubs     f0, f0, f1
	  fcmpo     cr0, f2, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x1C8
	  lhz       r0, 0x2(r7)
	  lwz       r9, 0x10(r3)
	  add       r8, r8, r0
	  subi      r0, r8, 0x1
	  rlwinm    r0,r0,2,0,29
	  lfsx      f0, r9, r0
	  stfs      f0, 0x8(r5)
	  b         .loc_0x1EC

	.loc_0x1C8:
	  fctiwz    f0, f2
	  lhz       r8, 0x2(r7)
	  lwz       r9, 0x10(r3)
	  stfd      f0, 0x8(r1)
	  lwz       r0, 0xC(r1)
	  add       r0, r8, r0
	  rlwinm    r0,r0,2,0,29
	  lfsx      f0, r9, r0
	  stfs      f0, 0x8(r5)

	.loc_0x1EC:
	  lfs       f2, 0x8(r3)
	  lfs       f0, -0x7A00(r2)
	  lhz       r8, 0x4(r4)
	  fcmpo     cr0, f2, f0
	  bge-      .loc_0x218
	  lhz       r0, 0x6(r4)
	  lwz       r8, 0x14(r3)
	  rlwinm    r0,r0,1,0,30
	  lhax      r0, r8, r0
	  sth       r0, 0xC(r5)
	  b         .loc_0x280

	.loc_0x218:
	  lis       r0, 0x4330
	  stw       r8, 0xC(r1)
	  lfd       f1, -0x79F8(r2)
	  stw       r0, 0x8(r1)
	  lfd       f0, 0x8(r1)
	  fsubs     f0, f0, f1
	  fcmpo     cr0, f2, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x25C
	  lhz       r0, 0x6(r4)
	  lwz       r9, 0x14(r3)
	  add       r8, r8, r0
	  subi      r0, r8, 0x1
	  rlwinm    r0,r0,1,0,30
	  lhax      r0, r9, r0
	  sth       r0, 0xC(r5)
	  b         .loc_0x280

	.loc_0x25C:
	  fctiwz    f0, f2
	  lhz       r8, 0x6(r4)
	  lwz       r9, 0x14(r3)
	  stfd      f0, 0x8(r1)
	  lwz       r0, 0xC(r1)
	  add       r0, r8, r0
	  rlwinm    r0,r0,1,0,30
	  lhax      r0, r9, r0
	  sth       r0, 0xC(r5)

	.loc_0x280:
	  lfs       f2, 0x8(r3)
	  lfs       f0, -0x7A00(r2)
	  lhz       r8, 0x4(r6)
	  fcmpo     cr0, f2, f0
	  bge-      .loc_0x2AC
	  lhz       r0, 0x6(r6)
	  lwz       r8, 0x14(r3)
	  rlwinm    r0,r0,1,0,30
	  lhax      r0, r8, r0
	  sth       r0, 0xE(r5)
	  b         .loc_0x314

	.loc_0x2AC:
	  lis       r0, 0x4330
	  stw       r8, 0xC(r1)
	  lfd       f1, -0x79F8(r2)
	  stw       r0, 0x8(r1)
	  lfd       f0, 0x8(r1)
	  fsubs     f0, f0, f1
	  fcmpo     cr0, f2, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x2F0
	  lhz       r0, 0x6(r6)
	  lwz       r9, 0x14(r3)
	  add       r8, r8, r0
	  subi      r0, r8, 0x1
	  rlwinm    r0,r0,1,0,30
	  lhax      r0, r9, r0
	  sth       r0, 0xE(r5)
	  b         .loc_0x314

	.loc_0x2F0:
	  fctiwz    f0, f2
	  lhz       r8, 0x6(r6)
	  lwz       r9, 0x14(r3)
	  stfd      f0, 0x8(r1)
	  lwz       r0, 0xC(r1)
	  add       r0, r8, r0
	  rlwinm    r0,r0,1,0,30
	  lhax      r0, r9, r0
	  sth       r0, 0xE(r5)

	.loc_0x314:
	  lfs       f2, 0x8(r3)
	  lfs       f0, -0x7A00(r2)
	  lhz       r8, 0x4(r7)
	  fcmpo     cr0, f2, f0
	  bge-      .loc_0x340
	  lhz       r0, 0x6(r7)
	  lwz       r8, 0x14(r3)
	  rlwinm    r0,r0,1,0,30
	  lhax      r0, r8, r0
	  sth       r0, 0x10(r5)
	  b         .loc_0x3A8

	.loc_0x340:
	  lis       r0, 0x4330
	  stw       r8, 0xC(r1)
	  lfd       f1, -0x79F8(r2)
	  stw       r0, 0x8(r1)
	  lfd       f0, 0x8(r1)
	  fsubs     f0, f0, f1
	  fcmpo     cr0, f2, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x384
	  lhz       r0, 0x6(r7)
	  lwz       r9, 0x14(r3)
	  add       r8, r8, r0
	  subi      r0, r8, 0x1
	  rlwinm    r0,r0,1,0,30
	  lhax      r0, r9, r0
	  sth       r0, 0x10(r5)
	  b         .loc_0x3A8

	.loc_0x384:
	  fctiwz    f0, f2
	  lhz       r8, 0x6(r7)
	  lwz       r9, 0x14(r3)
	  stfd      f0, 0x8(r1)
	  lwz       r0, 0xC(r1)
	  add       r0, r8, r0
	  rlwinm    r0,r0,1,0,30
	  lhax      r0, r9, r0
	  sth       r0, 0x10(r5)

	.loc_0x3A8:
	  lfs       f2, 0x8(r3)
	  lfs       f0, -0x7A00(r2)
	  lhz       r9, 0x8(r4)
	  fcmpo     cr0, f2, f0
	  bge-      .loc_0x3D4
	  lhz       r0, 0xA(r4)
	  lwz       r4, 0x18(r3)
	  rlwinm    r0,r0,2,0,29
	  lfsx      f0, r4, r0
	  stfs      f0, 0x14(r5)
	  b         .loc_0x43C

	.loc_0x3D4:
	  lis       r0, 0x4330
	  stw       r9, 0xC(r1)
	  lfd       f1, -0x79F8(r2)
	  stw       r0, 0x8(r1)
	  lfd       f0, 0x8(r1)
	  fsubs     f0, f0, f1
	  fcmpo     cr0, f2, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x418
	  lhz       r0, 0xA(r4)
	  lwz       r8, 0x18(r3)
	  add       r4, r9, r0
	  subi      r0, r4, 0x1
	  rlwinm    r0,r0,2,0,29
	  lfsx      f0, r8, r0
	  stfs      f0, 0x14(r5)
	  b         .loc_0x43C

	.loc_0x418:
	  fctiwz    f0, f2
	  lhz       r4, 0xA(r4)
	  lwz       r8, 0x18(r3)
	  stfd      f0, 0x8(r1)
	  lwz       r0, 0xC(r1)
	  add       r0, r4, r0
	  rlwinm    r0,r0,2,0,29
	  lfsx      f0, r8, r0
	  stfs      f0, 0x14(r5)

	.loc_0x43C:
	  lfs       f2, 0x8(r3)
	  lfs       f0, -0x7A00(r2)
	  lhz       r4, 0x8(r6)
	  fcmpo     cr0, f2, f0
	  bge-      .loc_0x468
	  lhz       r0, 0xA(r6)
	  lwz       r4, 0x18(r3)
	  rlwinm    r0,r0,2,0,29
	  lfsx      f0, r4, r0
	  stfs      f0, 0x18(r5)
	  b         .loc_0x4D0

	.loc_0x468:
	  lis       r0, 0x4330
	  stw       r4, 0xC(r1)
	  lfd       f1, -0x79F8(r2)
	  stw       r0, 0x8(r1)
	  lfd       f0, 0x8(r1)
	  fsubs     f0, f0, f1
	  fcmpo     cr0, f2, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x4AC
	  lhz       r0, 0xA(r6)
	  lwz       r6, 0x18(r3)
	  add       r4, r4, r0
	  subi      r0, r4, 0x1
	  rlwinm    r0,r0,2,0,29
	  lfsx      f0, r6, r0
	  stfs      f0, 0x18(r5)
	  b         .loc_0x4D0

	.loc_0x4AC:
	  fctiwz    f0, f2
	  lhz       r4, 0xA(r6)
	  lwz       r6, 0x18(r3)
	  stfd      f0, 0x8(r1)
	  lwz       r0, 0xC(r1)
	  add       r0, r4, r0
	  rlwinm    r0,r0,2,0,29
	  lfsx      f0, r6, r0
	  stfs      f0, 0x18(r5)

	.loc_0x4D0:
	  lfs       f2, 0x8(r3)
	  lfs       f0, -0x7A00(r2)
	  lhz       r6, 0x8(r7)
	  fcmpo     cr0, f2, f0
	  bge-      .loc_0x4FC
	  lhz       r0, 0xA(r7)
	  lwz       r3, 0x18(r3)
	  rlwinm    r0,r0,2,0,29
	  lfsx      f0, r3, r0
	  stfs      f0, 0x1C(r5)
	  b         .loc_0x564

	.loc_0x4FC:
	  lis       r0, 0x4330
	  stw       r6, 0xC(r1)
	  lfd       f1, -0x79F8(r2)
	  stw       r0, 0x8(r1)
	  lfd       f0, 0x8(r1)
	  fsubs     f0, f0, f1
	  fcmpo     cr0, f2, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x540
	  lhz       r0, 0xA(r7)
	  lwz       r4, 0x18(r3)
	  add       r3, r6, r0
	  subi      r0, r3, 0x1
	  rlwinm    r0,r0,2,0,29
	  lfsx      f0, r4, r0
	  stfs      f0, 0x1C(r5)
	  b         .loc_0x564

	.loc_0x540:
	  fctiwz    f0, f2
	  lhz       r4, 0xA(r7)
	  lwz       r3, 0x18(r3)
	  stfd      f0, 0x8(r1)
	  lwz       r0, 0xC(r1)
	  add       r0, r4, r0
	  rlwinm    r0,r0,2,0,29
	  lfsx      f0, r3, r0
	  stfs      f0, 0x1C(r5)

	.loc_0x564:
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8005B478
 * Size:	000420
 */
void J2DAnmTransformKey::calcTransform(float, unsigned short,
                                       J3DTransformInfo*) const
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stfd      f31, 0x30(r1)
	  psq_st    f31,0x38(r1),0,0
	  stmw      r27, 0x1C(r1)
	  mulli     r0, r4, 0x3
	  mr        r27, r3
	  lwz       r6, 0x28(r3)
	  fmr       f31, f1
	  mr        r28, r5
	  rlwinm    r3,r0,0,16,31
	  mulli     r0, r3, 0x12
	  addi      r4, r3, 0x1
	  addi      r3, r3, 0x2
	  add       r31, r6, r0
	  lhz       r0, 0x0(r31)
	  mulli     r4, r4, 0x12
	  cmpwi     r0, 0x1
	  mulli     r3, r3, 0x12
	  add       r30, r6, r4
	  add       r29, r6, r3
	  beq-      .loc_0x78
	  bge-      .loc_0x90
	  cmpwi     r0, 0
	  bge-      .loc_0x6C
	  b         .loc_0x90

	.loc_0x6C:
	  lfs       f0, -0x79F0(r2)
	  stfs      f0, 0x0(r28)
	  b         .loc_0xB0

	.loc_0x78:
	  lhz       r0, 0x2(r31)
	  lwz       r3, 0x10(r27)
	  rlwinm    r0,r0,2,0,29
	  lfsx      f0, r3, r0
	  stfs      f0, 0x0(r28)
	  b         .loc_0xB0

	.loc_0x90:
	  lhz       r0, 0x2(r31)
	  fmr       f1, f31
	  lwz       r4, 0x10(r27)
	  mr        r3, r31
	  rlwinm    r0,r0,2,0,29
	  add       r4, r4, r0
	  bl        0x2410
	  stfs      f1, 0x0(r28)

	.loc_0xB0:
	  lhz       r0, 0x0(r30)
	  cmpwi     r0, 0x1
	  beq-      .loc_0xD8
	  bge-      .loc_0xF0
	  cmpwi     r0, 0
	  bge-      .loc_0xCC
	  b         .loc_0xF0

	.loc_0xCC:
	  lfs       f0, -0x79F0(r2)
	  stfs      f0, 0x4(r28)
	  b         .loc_0x110

	.loc_0xD8:
	  lhz       r0, 0x2(r30)
	  lwz       r3, 0x10(r27)
	  rlwinm    r0,r0,2,0,29
	  lfsx      f0, r3, r0
	  stfs      f0, 0x4(r28)
	  b         .loc_0x110

	.loc_0xF0:
	  lhz       r0, 0x2(r30)
	  fmr       f1, f31
	  lwz       r4, 0x10(r27)
	  mr        r3, r30
	  rlwinm    r0,r0,2,0,29
	  add       r4, r4, r0
	  bl        0x23B0
	  stfs      f1, 0x4(r28)

	.loc_0x110:
	  lhz       r0, 0x0(r29)
	  cmpwi     r0, 0x1
	  beq-      .loc_0x138
	  bge-      .loc_0x150
	  cmpwi     r0, 0
	  bge-      .loc_0x12C
	  b         .loc_0x150

	.loc_0x12C:
	  lfs       f0, -0x79F0(r2)
	  stfs      f0, 0x8(r28)
	  b         .loc_0x170

	.loc_0x138:
	  lhz       r0, 0x2(r29)
	  lwz       r3, 0x10(r27)
	  rlwinm    r0,r0,2,0,29
	  lfsx      f0, r3, r0
	  stfs      f0, 0x8(r28)
	  b         .loc_0x170

	.loc_0x150:
	  lhz       r0, 0x2(r29)
	  fmr       f1, f31
	  lwz       r4, 0x10(r27)
	  mr        r3, r29
	  rlwinm    r0,r0,2,0,29
	  add       r4, r4, r0
	  bl        0x2350
	  stfs      f1, 0x8(r28)

	.loc_0x170:
	  lhz       r0, 0x6(r31)
	  cmpwi     r0, 0x1
	  beq-      .loc_0x198
	  bge-      .loc_0x1B8
	  cmpwi     r0, 0
	  bge-      .loc_0x18C
	  b         .loc_0x1B8

	.loc_0x18C:
	  li        r0, 0
	  sth       r0, 0xC(r28)
	  b         .loc_0x1EC

	.loc_0x198:
	  lhz       r0, 0x8(r31)
	  lwz       r4, 0x14(r27)
	  rlwinm    r3,r0,1,0,30
	  lwz       r0, 0x24(r27)
	  lhax      r3, r4, r3
	  slw       r0, r3, r0
	  sth       r0, 0xC(r28)
	  b         .loc_0x1EC

	.loc_0x1B8:
	  lhz       r0, 0x8(r31)
	  fmr       f1, f31
	  lwz       r4, 0x14(r27)
	  addi      r3, r31, 0x6
	  rlwinm    r0,r0,1,0,30
	  add       r4, r4, r0
	  bl        0x20B4
	  fctiwz    f0, f1
	  lwz       r0, 0x24(r27)
	  stfd      f0, 0x8(r1)
	  lwz       r3, 0xC(r1)
	  slw       r0, r3, r0
	  sth       r0, 0xC(r28)

	.loc_0x1EC:
	  lhz       r0, 0x6(r30)
	  cmpwi     r0, 0x1
	  beq-      .loc_0x214
	  bge-      .loc_0x234
	  cmpwi     r0, 0
	  bge-      .loc_0x208
	  b         .loc_0x234

	.loc_0x208:
	  li        r0, 0
	  sth       r0, 0xE(r28)
	  b         .loc_0x268

	.loc_0x214:
	  lhz       r0, 0x8(r30)
	  lwz       r4, 0x14(r27)
	  rlwinm    r3,r0,1,0,30
	  lwz       r0, 0x24(r27)
	  lhax      r3, r4, r3
	  slw       r0, r3, r0
	  sth       r0, 0xE(r28)
	  b         .loc_0x268

	.loc_0x234:
	  lhz       r0, 0x8(r30)
	  fmr       f1, f31
	  lwz       r4, 0x14(r27)
	  addi      r3, r30, 0x6
	  rlwinm    r0,r0,1,0,30
	  add       r4, r4, r0
	  bl        0x2038
	  fctiwz    f0, f1
	  lwz       r0, 0x24(r27)
	  stfd      f0, 0x8(r1)
	  lwz       r3, 0xC(r1)
	  slw       r0, r3, r0
	  sth       r0, 0xE(r28)

	.loc_0x268:
	  lhz       r0, 0x6(r29)
	  cmpwi     r0, 0x1
	  beq-      .loc_0x290
	  bge-      .loc_0x2B0
	  cmpwi     r0, 0
	  bge-      .loc_0x284
	  b         .loc_0x2B0

	.loc_0x284:
	  li        r0, 0
	  sth       r0, 0x10(r28)
	  b         .loc_0x2E4

	.loc_0x290:
	  lhz       r0, 0x8(r29)
	  lwz       r4, 0x14(r27)
	  rlwinm    r3,r0,1,0,30
	  lwz       r0, 0x24(r27)
	  lhax      r3, r4, r3
	  slw       r0, r3, r0
	  sth       r0, 0x10(r28)
	  b         .loc_0x2E4

	.loc_0x2B0:
	  lhz       r0, 0x8(r29)
	  fmr       f1, f31
	  lwz       r4, 0x14(r27)
	  addi      r3, r29, 0x6
	  rlwinm    r0,r0,1,0,30
	  add       r4, r4, r0
	  bl        0x1FBC
	  fctiwz    f0, f1
	  lwz       r0, 0x24(r27)
	  stfd      f0, 0x8(r1)
	  lwz       r3, 0xC(r1)
	  slw       r0, r3, r0
	  sth       r0, 0x10(r28)

	.loc_0x2E4:
	  lhz       r0, 0xC(r31)
	  cmpwi     r0, 0x1
	  beq-      .loc_0x30C
	  bge-      .loc_0x324
	  cmpwi     r0, 0
	  bge-      .loc_0x300
	  b         .loc_0x324

	.loc_0x300:
	  lfs       f0, -0x7A00(r2)
	  stfs      f0, 0x14(r28)
	  b         .loc_0x344

	.loc_0x30C:
	  lhz       r0, 0xE(r31)
	  lwz       r3, 0x18(r27)
	  rlwinm    r0,r0,2,0,29
	  lfsx      f0, r3, r0
	  stfs      f0, 0x14(r28)
	  b         .loc_0x344

	.loc_0x324:
	  lhz       r0, 0xE(r31)
	  fmr       f1, f31
	  lwz       r4, 0x18(r27)
	  addi      r3, r31, 0xC
	  rlwinm    r0,r0,2,0,29
	  add       r4, r4, r0
	  bl        0x217C
	  stfs      f1, 0x14(r28)

	.loc_0x344:
	  lhz       r0, 0xC(r30)
	  cmpwi     r0, 0x1
	  beq-      .loc_0x36C
	  bge-      .loc_0x384
	  cmpwi     r0, 0
	  bge-      .loc_0x360
	  b         .loc_0x384

	.loc_0x360:
	  lfs       f0, -0x7A00(r2)
	  stfs      f0, 0x18(r28)
	  b         .loc_0x3A4

	.loc_0x36C:
	  lhz       r0, 0xE(r30)
	  lwz       r3, 0x18(r27)
	  rlwinm    r0,r0,2,0,29
	  lfsx      f0, r3, r0
	  stfs      f0, 0x18(r28)
	  b         .loc_0x3A4

	.loc_0x384:
	  lhz       r0, 0xE(r30)
	  fmr       f1, f31
	  lwz       r4, 0x18(r27)
	  addi      r3, r30, 0xC
	  rlwinm    r0,r0,2,0,29
	  add       r4, r4, r0
	  bl        0x211C
	  stfs      f1, 0x18(r28)

	.loc_0x3A4:
	  lhz       r0, 0xC(r29)
	  cmpwi     r0, 0x1
	  beq-      .loc_0x3CC
	  bge-      .loc_0x3E4
	  cmpwi     r0, 0
	  bge-      .loc_0x3C0
	  b         .loc_0x3E4

	.loc_0x3C0:
	  lfs       f0, -0x7A00(r2)
	  stfs      f0, 0x1C(r28)
	  b         .loc_0x404

	.loc_0x3CC:
	  lhz       r0, 0xE(r29)
	  lwz       r3, 0x18(r27)
	  rlwinm    r0,r0,2,0,29
	  lfsx      f0, r3, r0
	  stfs      f0, 0x1C(r28)
	  b         .loc_0x404

	.loc_0x3E4:
	  lhz       r0, 0xE(r29)
	  fmr       f1, f31
	  lwz       r4, 0x18(r27)
	  addi      r3, r29, 0xC
	  rlwinm    r0,r0,2,0,29
	  add       r4, r4, r0
	  bl        0x20BC
	  stfs      f1, 0x1C(r28)

	.loc_0x404:
	  psq_l     f31,0x38(r1),0,0
	  lfd       f31, 0x30(r1)
	  lmw       r27, 0x1C(r1)
	  lwz       r0, 0x44(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8005B898
 * Size:	0000AC
 */
void J2DAnmColor::searchUpdateMaterialID(J2DScreen*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  mr.       r30, r4
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  beq-      .loc_0x90
	  lwz       r0, 0x110(r30)
	  cmplwi    r0, 0
	  beq-      .loc_0x90
	  li        r31, 0
	  b         .loc_0x80

	.loc_0x38:
	  mr        r4, r31
	  addi      r3, r29, 0x20
	  bl        -0x2CABC
	  mr        r4, r3
	  lwz       r3, 0x110(r30)
	  bl        -0x2CB60
	  cmpwi     r3, -0x1
	  beq-      .loc_0x68
	  lwz       r4, 0x1C(r29)
	  rlwinm    r0,r31,1,15,30
	  sthx      r3, r4, r0
	  b         .loc_0x7C

	.loc_0x68:
	  lis       r4, 0x1
	  lwz       r3, 0x1C(r29)
	  subi      r4, r4, 0x1
	  rlwinm    r0,r31,1,15,30
	  sthx      r4, r3, r0

	.loc_0x7C:
	  addi      r31, r31, 0x1

	.loc_0x80:
	  lhz       r0, 0x18(r29)
	  rlwinm    r3,r31,0,16,31
	  cmplw     r3, r0
	  blt+      .loc_0x38

	.loc_0x90:
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
 * Address:	8005B944
 * Size:	000238
 */
void J2DAnmColorFull::getColor(unsigned short, _GXColor*) const
{
	/*
	.loc_0x0:
	  lwz       r6, 0x40(r3)
	  rlwinm    r0,r4,4,12,27
	  lfs       f2, 0x8(r3)
	  lfs       f0, -0x7A00(r2)
	  add       r4, r6, r0
	  stwu      r1, -0x10(r1)
	  fcmpo     cr0, f2, f0
	  lhz       r7, 0x0(r4)
	  bge-      .loc_0x38
	  lwz       r6, 0x30(r3)
	  lhz       r0, 0x2(r4)
	  lbzx      r0, r6, r0
	  stb       r0, 0x0(r5)
	  b         .loc_0x98

	.loc_0x38:
	  lis       r0, 0x4330
	  stw       r7, 0xC(r1)
	  lfd       f1, -0x79F8(r2)
	  stw       r0, 0x8(r1)
	  lfd       f0, 0x8(r1)
	  fsubs     f0, f0, f1
	  fcmpo     cr0, f2, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x78
	  lwz       r6, 0x30(r3)
	  lhz       r0, 0x2(r4)
	  add       r0, r6, r0
	  add       r6, r0, r7
	  lbz       r0, -0x1(r6)
	  stb       r0, 0x0(r5)
	  b         .loc_0x98

	.loc_0x78:
	  fctiwz    f0, f2
	  lhz       r6, 0x2(r4)
	  lwz       r7, 0x30(r3)
	  stfd      f0, 0x8(r1)
	  lwz       r0, 0xC(r1)
	  add       r0, r6, r0
	  lbzx      r0, r7, r0
	  stb       r0, 0x0(r5)

	.loc_0x98:
	  lfs       f2, 0x8(r3)
	  lfs       f0, -0x7A00(r2)
	  lhz       r7, 0x4(r4)
	  fcmpo     cr0, f2, f0
	  bge-      .loc_0xC0
	  lwz       r6, 0x34(r3)
	  lhz       r0, 0x6(r4)
	  lbzx      r0, r6, r0
	  stb       r0, 0x1(r5)
	  b         .loc_0x120

	.loc_0xC0:
	  lis       r0, 0x4330
	  stw       r7, 0xC(r1)
	  lfd       f1, -0x79F8(r2)
	  stw       r0, 0x8(r1)
	  lfd       f0, 0x8(r1)
	  fsubs     f0, f0, f1
	  fcmpo     cr0, f2, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x100
	  lwz       r6, 0x34(r3)
	  lhz       r0, 0x6(r4)
	  add       r0, r6, r0
	  add       r6, r0, r7
	  lbz       r0, -0x1(r6)
	  stb       r0, 0x1(r5)
	  b         .loc_0x120

	.loc_0x100:
	  fctiwz    f0, f2
	  lhz       r6, 0x6(r4)
	  lwz       r7, 0x34(r3)
	  stfd      f0, 0x8(r1)
	  lwz       r0, 0xC(r1)
	  add       r0, r6, r0
	  lbzx      r0, r7, r0
	  stb       r0, 0x1(r5)

	.loc_0x120:
	  lfs       f2, 0x8(r3)
	  lfs       f0, -0x7A00(r2)
	  lhz       r7, 0x8(r4)
	  fcmpo     cr0, f2, f0
	  bge-      .loc_0x148
	  lwz       r6, 0x38(r3)
	  lhz       r0, 0xA(r4)
	  lbzx      r0, r6, r0
	  stb       r0, 0x2(r5)
	  b         .loc_0x1A8

	.loc_0x148:
	  lis       r0, 0x4330
	  stw       r7, 0xC(r1)
	  lfd       f1, -0x79F8(r2)
	  stw       r0, 0x8(r1)
	  lfd       f0, 0x8(r1)
	  fsubs     f0, f0, f1
	  fcmpo     cr0, f2, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x188
	  lwz       r6, 0x38(r3)
	  lhz       r0, 0xA(r4)
	  add       r0, r6, r0
	  add       r6, r0, r7
	  lbz       r0, -0x1(r6)
	  stb       r0, 0x2(r5)
	  b         .loc_0x1A8

	.loc_0x188:
	  fctiwz    f0, f2
	  lhz       r6, 0xA(r4)
	  lwz       r7, 0x38(r3)
	  stfd      f0, 0x8(r1)
	  lwz       r0, 0xC(r1)
	  add       r0, r6, r0
	  lbzx      r0, r7, r0
	  stb       r0, 0x2(r5)

	.loc_0x1A8:
	  lfs       f2, 0x8(r3)
	  lfs       f0, -0x7A00(r2)
	  lhz       r6, 0xC(r4)
	  fcmpo     cr0, f2, f0
	  bge-      .loc_0x1D0
	  lwz       r3, 0x3C(r3)
	  lhz       r0, 0xE(r4)
	  lbzx      r0, r3, r0
	  stb       r0, 0x3(r5)
	  b         .loc_0x230

	.loc_0x1D0:
	  lis       r0, 0x4330
	  stw       r6, 0xC(r1)
	  lfd       f1, -0x79F8(r2)
	  stw       r0, 0x8(r1)
	  lfd       f0, 0x8(r1)
	  fsubs     f0, f0, f1
	  fcmpo     cr0, f2, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x210
	  lwz       r3, 0x3C(r3)
	  lhz       r0, 0xE(r4)
	  add       r0, r3, r0
	  add       r3, r0, r6
	  lbz       r0, -0x1(r3)
	  stb       r0, 0x3(r5)
	  b         .loc_0x230

	.loc_0x210:
	  fctiwz    f0, f2
	  lhz       r4, 0xE(r4)
	  lwz       r3, 0x3C(r3)
	  stfd      f0, 0x8(r1)
	  lwz       r0, 0xC(r1)
	  add       r0, r4, r0
	  lbzx      r0, r3, r0
	  stb       r0, 0x3(r5)

	.loc_0x230:
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8005BB7C
 * Size:	0002CC
 */
void J2DAnmColorKey::getColor(unsigned short, _GXColor*) const
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stfd      f31, 0x30(r1)
	  psq_st    f31,0x38(r1),0,0
	  stw       r31, 0x2C(r1)
	  stw       r30, 0x28(r1)
	  stw       r29, 0x24(r1)
	  rlwinm    r0,r4,0,16,31
	  mr        r29, r3
	  mulli     r0, r0, 0x18
	  lwz       r3, 0x40(r3)
	  mr        r30, r5
	  add       r31, r3, r0
	  lhz       r0, 0x0(r31)
	  cmpwi     r0, 0x1
	  beq-      .loc_0x60
	  bge-      .loc_0x78
	  cmpwi     r0, 0
	  bge-      .loc_0x54
	  b         .loc_0x78

	.loc_0x54:
	  li        r0, 0
	  stb       r0, 0x0(r30)
	  b         .loc_0xD4

	.loc_0x60:
	  lhz       r0, 0x2(r31)
	  lwz       r3, 0x30(r29)
	  rlwinm    r0,r0,1,0,30
	  lhax      r0, r3, r0
	  stb       r0, 0x0(r30)
	  b         .loc_0xD4

	.loc_0x78:
	  lhz       r0, 0x2(r31)
	  mr        r3, r31
	  lwz       r4, 0x30(r29)
	  rlwinm    r0,r0,1,0,30
	  lfs       f1, 0x8(r29)
	  add       r4, r4, r0
	  bl        0x1AF0
	  fmr       f31, f1
	  lfs       f0, -0x7A00(r2)
	  fcmpo     cr0, f31, f0
	  bge-      .loc_0xB0
	  li        r0, 0
	  stb       r0, 0x0(r30)
	  b         .loc_0xD4

	.loc_0xB0:
	  lfs       f0, -0x79EC(r2)
	  fcmpo     cr0, f31, f0
	  ble-      .loc_0xC8
	  li        r0, 0xFF
	  stb       r0, 0x0(r30)
	  b         .loc_0xD4

	.loc_0xC8:
	  psq_st    f31,0x14(r1),0x1,0x2
	  lbz       r0, 0x14(r1)
	  stb       r0, 0x0(r30)

	.loc_0xD4:
	  lhz       r0, 0x6(r31)
	  cmpwi     r0, 0x1
	  beq-      .loc_0xFC
	  bge-      .loc_0x114
	  cmpwi     r0, 0
	  bge-      .loc_0xF0
	  b         .loc_0x114

	.loc_0xF0:
	  li        r0, 0
	  stb       r0, 0x1(r30)
	  b         .loc_0x170

	.loc_0xFC:
	  lhz       r0, 0x8(r31)
	  lwz       r3, 0x34(r29)
	  rlwinm    r0,r0,1,0,30
	  lhax      r0, r3, r0
	  stb       r0, 0x1(r30)
	  b         .loc_0x170

	.loc_0x114:
	  lhz       r0, 0x8(r31)
	  addi      r3, r31, 0x6
	  lwz       r4, 0x34(r29)
	  rlwinm    r0,r0,1,0,30
	  lfs       f1, 0x8(r29)
	  add       r4, r4, r0
	  bl        0x1A54
	  fmr       f31, f1
	  lfs       f0, -0x7A00(r2)
	  fcmpo     cr0, f31, f0
	  bge-      .loc_0x14C
	  li        r0, 0
	  stb       r0, 0x1(r30)
	  b         .loc_0x170

	.loc_0x14C:
	  lfs       f0, -0x79EC(r2)
	  fcmpo     cr0, f31, f0
	  ble-      .loc_0x164
	  li        r0, 0xFF
	  stb       r0, 0x1(r30)
	  b         .loc_0x170

	.loc_0x164:
	  psq_st    f31,0x10(r1),0x1,0x2
	  lbz       r0, 0x10(r1)
	  stb       r0, 0x1(r30)

	.loc_0x170:
	  lhz       r0, 0xC(r31)
	  cmpwi     r0, 0x1
	  beq-      .loc_0x198
	  bge-      .loc_0x1B0
	  cmpwi     r0, 0
	  bge-      .loc_0x18C
	  b         .loc_0x1B0

	.loc_0x18C:
	  li        r0, 0
	  stb       r0, 0x2(r30)
	  b         .loc_0x20C

	.loc_0x198:
	  lhz       r0, 0xE(r31)
	  lwz       r3, 0x38(r29)
	  rlwinm    r0,r0,1,0,30
	  lhax      r0, r3, r0
	  stb       r0, 0x2(r30)
	  b         .loc_0x20C

	.loc_0x1B0:
	  lhz       r0, 0xE(r31)
	  addi      r3, r31, 0xC
	  lwz       r4, 0x38(r29)
	  rlwinm    r0,r0,1,0,30
	  lfs       f1, 0x8(r29)
	  add       r4, r4, r0
	  bl        0x19B8
	  fmr       f31, f1
	  lfs       f0, -0x7A00(r2)
	  fcmpo     cr0, f31, f0
	  bge-      .loc_0x1E8
	  li        r0, 0
	  stb       r0, 0x2(r30)
	  b         .loc_0x20C

	.loc_0x1E8:
	  lfs       f0, -0x79EC(r2)
	  fcmpo     cr0, f31, f0
	  ble-      .loc_0x200
	  li        r0, 0xFF
	  stb       r0, 0x2(r30)
	  b         .loc_0x20C

	.loc_0x200:
	  psq_st    f31,0xC(r1),0x1,0x2
	  lbz       r0, 0xC(r1)
	  stb       r0, 0x2(r30)

	.loc_0x20C:
	  lhz       r0, 0x12(r31)
	  cmpwi     r0, 0x1
	  beq-      .loc_0x234
	  bge-      .loc_0x24C
	  cmpwi     r0, 0
	  bge-      .loc_0x228
	  b         .loc_0x24C

	.loc_0x228:
	  li        r0, 0
	  stb       r0, 0x3(r30)
	  b         .loc_0x2A8

	.loc_0x234:
	  lhz       r0, 0x14(r31)
	  lwz       r3, 0x3C(r29)
	  rlwinm    r0,r0,1,0,30
	  lhax      r0, r3, r0
	  stb       r0, 0x3(r30)
	  b         .loc_0x2A8

	.loc_0x24C:
	  lhz       r0, 0x14(r31)
	  addi      r3, r31, 0x12
	  lwz       r4, 0x3C(r29)
	  rlwinm    r0,r0,1,0,30
	  lfs       f1, 0x8(r29)
	  add       r4, r4, r0
	  bl        0x191C
	  fmr       f31, f1
	  lfs       f0, -0x7A00(r2)
	  fcmpo     cr0, f31, f0
	  bge-      .loc_0x284
	  li        r0, 0
	  stb       r0, 0x3(r30)
	  b         .loc_0x2A8

	.loc_0x284:
	  lfs       f0, -0x79EC(r2)
	  fcmpo     cr0, f31, f0
	  ble-      .loc_0x29C
	  li        r0, 0xFF
	  stb       r0, 0x3(r30)
	  b         .loc_0x2A8

	.loc_0x29C:
	  psq_st    f31,0x8(r1),0x1,0x2
	  lbz       r0, 0x8(r1)
	  stb       r0, 0x3(r30)

	.loc_0x2A8:
	  psq_l     f31,0x38(r1),0,0
	  lwz       r0, 0x44(r1)
	  lfd       f31, 0x30(r1)
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  lwz       r29, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8005BE48
 * Size:	000240
 */
void J2DAnmVtxColorFull::getColor(unsigned char, unsigned short,
                                  _GXColor*) const
{
	/*
	.loc_0x0:
	  rlwinm    r0,r4,2,22,29
	  lfs       f2, 0x8(r3)
	  add       r4, r3, r0
	  lfs       f0, -0x7A00(r2)
	  lwz       r4, 0x24(r4)
	  rlwinm    r0,r5,4,12,27
	  stwu      r1, -0x10(r1)
	  fcmpo     cr0, f2, f0
	  add       r4, r4, r0
	  lhz       r7, 0x0(r4)
	  bge-      .loc_0x40
	  lwz       r5, 0x2C(r3)
	  lhz       r0, 0x2(r4)
	  lbzx      r0, r5, r0
	  stb       r0, 0x0(r6)
	  b         .loc_0xA0

	.loc_0x40:
	  lis       r0, 0x4330
	  stw       r7, 0xC(r1)
	  lfd       f1, -0x79F8(r2)
	  stw       r0, 0x8(r1)
	  lfd       f0, 0x8(r1)
	  fsubs     f0, f0, f1
	  fcmpo     cr0, f2, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x80
	  lwz       r5, 0x2C(r3)
	  lhz       r0, 0x2(r4)
	  add       r0, r5, r0
	  add       r5, r0, r7
	  lbz       r0, -0x1(r5)
	  stb       r0, 0x0(r6)
	  b         .loc_0xA0

	.loc_0x80:
	  fctiwz    f0, f2
	  lhz       r5, 0x2(r4)
	  lwz       r7, 0x2C(r3)
	  stfd      f0, 0x8(r1)
	  lwz       r0, 0xC(r1)
	  add       r0, r5, r0
	  lbzx      r0, r7, r0
	  stb       r0, 0x0(r6)

	.loc_0xA0:
	  lfs       f2, 0x8(r3)
	  lfs       f0, -0x7A00(r2)
	  lhz       r7, 0x4(r4)
	  fcmpo     cr0, f2, f0
	  bge-      .loc_0xC8
	  lwz       r5, 0x30(r3)
	  lhz       r0, 0x6(r4)
	  lbzx      r0, r5, r0
	  stb       r0, 0x1(r6)
	  b         .loc_0x128

	.loc_0xC8:
	  lis       r0, 0x4330
	  stw       r7, 0xC(r1)
	  lfd       f1, -0x79F8(r2)
	  stw       r0, 0x8(r1)
	  lfd       f0, 0x8(r1)
	  fsubs     f0, f0, f1
	  fcmpo     cr0, f2, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x108
	  lwz       r5, 0x30(r3)
	  lhz       r0, 0x6(r4)
	  add       r0, r5, r0
	  add       r5, r0, r7
	  lbz       r0, -0x1(r5)
	  stb       r0, 0x1(r6)
	  b         .loc_0x128

	.loc_0x108:
	  fctiwz    f0, f2
	  lhz       r5, 0x6(r4)
	  lwz       r7, 0x30(r3)
	  stfd      f0, 0x8(r1)
	  lwz       r0, 0xC(r1)
	  add       r0, r5, r0
	  lbzx      r0, r7, r0
	  stb       r0, 0x1(r6)

	.loc_0x128:
	  lfs       f2, 0x8(r3)
	  lfs       f0, -0x7A00(r2)
	  lhz       r7, 0x8(r4)
	  fcmpo     cr0, f2, f0
	  bge-      .loc_0x150
	  lwz       r5, 0x34(r3)
	  lhz       r0, 0xA(r4)
	  lbzx      r0, r5, r0
	  stb       r0, 0x2(r6)
	  b         .loc_0x1B0

	.loc_0x150:
	  lis       r0, 0x4330
	  stw       r7, 0xC(r1)
	  lfd       f1, -0x79F8(r2)
	  stw       r0, 0x8(r1)
	  lfd       f0, 0x8(r1)
	  fsubs     f0, f0, f1
	  fcmpo     cr0, f2, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x190
	  lwz       r5, 0x34(r3)
	  lhz       r0, 0xA(r4)
	  add       r0, r5, r0
	  add       r5, r0, r7
	  lbz       r0, -0x1(r5)
	  stb       r0, 0x2(r6)
	  b         .loc_0x1B0

	.loc_0x190:
	  fctiwz    f0, f2
	  lhz       r5, 0xA(r4)
	  lwz       r7, 0x34(r3)
	  stfd      f0, 0x8(r1)
	  lwz       r0, 0xC(r1)
	  add       r0, r5, r0
	  lbzx      r0, r7, r0
	  stb       r0, 0x2(r6)

	.loc_0x1B0:
	  lfs       f2, 0x8(r3)
	  lfs       f0, -0x7A00(r2)
	  lhz       r5, 0xC(r4)
	  fcmpo     cr0, f2, f0
	  bge-      .loc_0x1D8
	  lwz       r3, 0x38(r3)
	  lhz       r0, 0xE(r4)
	  lbzx      r0, r3, r0
	  stb       r0, 0x3(r6)
	  b         .loc_0x238

	.loc_0x1D8:
	  lis       r0, 0x4330
	  stw       r5, 0xC(r1)
	  lfd       f1, -0x79F8(r2)
	  stw       r0, 0x8(r1)
	  lfd       f0, 0x8(r1)
	  fsubs     f0, f0, f1
	  fcmpo     cr0, f2, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x218
	  lwz       r3, 0x38(r3)
	  lhz       r0, 0xE(r4)
	  add       r0, r3, r0
	  add       r3, r0, r5
	  lbz       r0, -0x1(r3)
	  stb       r0, 0x3(r6)
	  b         .loc_0x238

	.loc_0x218:
	  fctiwz    f0, f2
	  lhz       r4, 0xE(r4)
	  lwz       r3, 0x38(r3)
	  stfd      f0, 0x8(r1)
	  lwz       r0, 0xC(r1)
	  add       r0, r4, r0
	  lbzx      r0, r3, r0
	  stb       r0, 0x3(r6)

	.loc_0x238:
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8005C088
 * Size:	0002F4
 */
void J2DAnmVtxColorKey::getColor(unsigned char, unsigned short, _GXColor*) const
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stfd      f31, 0x30(r1)
	  psq_st    f31,0x38(r1),0,0
	  stw       r31, 0x2C(r1)
	  stw       r30, 0x28(r1)
	  stw       r29, 0x24(r1)
	  rlwinm    r0,r5,0,16,31
	  mr        r29, r3
	  rlwinm    r3,r4,2,22,29
	  mr        r30, r6
	  add       r3, r29, r3
	  mulli     r0, r0, 0x18
	  lwz       r3, 0x24(r3)
	  add       r31, r3, r0
	  lhz       r0, 0x0(r31)
	  cmpwi     r0, 0x1
	  beq-      .loc_0x68
	  bge-      .loc_0x80
	  cmpwi     r0, 0
	  bge-      .loc_0x5C
	  b         .loc_0x80

	.loc_0x5C:
	  li        r0, 0
	  stb       r0, 0x0(r30)
	  b         .loc_0xE4

	.loc_0x68:
	  lhz       r0, 0x2(r31)
	  lwz       r3, 0x2C(r29)
	  rlwinm    r0,r0,1,0,30
	  lhax      r0, r3, r0
	  stb       r0, 0x0(r30)
	  b         .loc_0xE4

	.loc_0x80:
	  lhz       r0, 0x2(r31)
	  mr        r3, r31
	  lwz       r4, 0x2C(r29)
	  rlwinm    r0,r0,1,0,30
	  lfs       f1, 0x8(r29)
	  add       r4, r4, r0
	  bl        0x15DC
	  fmr       f31, f1
	  lfs       f0, -0x7A00(r2)
	  fcmpo     cr0, f31, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0xBC
	  li        r0, 0
	  stb       r0, 0x0(r30)
	  b         .loc_0xE4

	.loc_0xBC:
	  lfs       f0, -0x79EC(r2)
	  fcmpo     cr0, f31, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0xDC
	  psq_st    f31,0x14(r1),0x1,0x2
	  lbz       r0, 0x14(r1)
	  stb       r0, 0x0(r30)
	  b         .loc_0xE4

	.loc_0xDC:
	  li        r0, 0xFF
	  stb       r0, 0x0(r30)

	.loc_0xE4:
	  lhz       r0, 0x6(r31)
	  cmpwi     r0, 0x1
	  beq-      .loc_0x10C
	  bge-      .loc_0x124
	  cmpwi     r0, 0
	  bge-      .loc_0x100
	  b         .loc_0x124

	.loc_0x100:
	  li        r0, 0
	  stb       r0, 0x1(r30)
	  b         .loc_0x188

	.loc_0x10C:
	  lhz       r0, 0x8(r31)
	  lwz       r3, 0x30(r29)
	  rlwinm    r0,r0,1,0,30
	  lhax      r0, r3, r0
	  stb       r0, 0x1(r30)
	  b         .loc_0x188

	.loc_0x124:
	  lhz       r0, 0x8(r31)
	  addi      r3, r31, 0x6
	  lwz       r4, 0x30(r29)
	  rlwinm    r0,r0,1,0,30
	  lfs       f1, 0x8(r29)
	  add       r4, r4, r0
	  bl        0x1538
	  fmr       f31, f1
	  lfs       f0, -0x7A00(r2)
	  fcmpo     cr0, f31, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x160
	  li        r0, 0
	  stb       r0, 0x1(r30)
	  b         .loc_0x188

	.loc_0x160:
	  lfs       f0, -0x79EC(r2)
	  fcmpo     cr0, f31, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x180
	  psq_st    f31,0x10(r1),0x1,0x2
	  lbz       r0, 0x10(r1)
	  stb       r0, 0x1(r30)
	  b         .loc_0x188

	.loc_0x180:
	  li        r0, 0xFF
	  stb       r0, 0x1(r30)

	.loc_0x188:
	  lhz       r0, 0xC(r31)
	  cmpwi     r0, 0x1
	  beq-      .loc_0x1B0
	  bge-      .loc_0x1C8
	  cmpwi     r0, 0
	  bge-      .loc_0x1A4
	  b         .loc_0x1C8

	.loc_0x1A4:
	  li        r0, 0
	  stb       r0, 0x2(r30)
	  b         .loc_0x22C

	.loc_0x1B0:
	  lhz       r0, 0xE(r31)
	  lwz       r3, 0x34(r29)
	  rlwinm    r0,r0,1,0,30
	  lhax      r0, r3, r0
	  stb       r0, 0x2(r30)
	  b         .loc_0x22C

	.loc_0x1C8:
	  lhz       r0, 0xE(r31)
	  addi      r3, r31, 0xC
	  lwz       r4, 0x34(r29)
	  rlwinm    r0,r0,1,0,30
	  lfs       f1, 0x8(r29)
	  add       r4, r4, r0
	  bl        0x1494
	  fmr       f31, f1
	  lfs       f0, -0x7A00(r2)
	  fcmpo     cr0, f31, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x204
	  li        r0, 0
	  stb       r0, 0x2(r30)
	  b         .loc_0x22C

	.loc_0x204:
	  lfs       f0, -0x79EC(r2)
	  fcmpo     cr0, f31, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x224
	  psq_st    f31,0xC(r1),0x1,0x2
	  lbz       r0, 0xC(r1)
	  stb       r0, 0x2(r30)
	  b         .loc_0x22C

	.loc_0x224:
	  li        r0, 0xFF
	  stb       r0, 0x2(r30)

	.loc_0x22C:
	  lhz       r0, 0x12(r31)
	  cmpwi     r0, 0x1
	  beq-      .loc_0x254
	  bge-      .loc_0x26C
	  cmpwi     r0, 0
	  bge-      .loc_0x248
	  b         .loc_0x26C

	.loc_0x248:
	  li        r0, 0
	  stb       r0, 0x3(r30)
	  b         .loc_0x2D0

	.loc_0x254:
	  lhz       r0, 0x14(r31)
	  lwz       r3, 0x38(r29)
	  rlwinm    r0,r0,1,0,30
	  lhax      r0, r3, r0
	  stb       r0, 0x3(r30)
	  b         .loc_0x2D0

	.loc_0x26C:
	  lhz       r0, 0x14(r31)
	  addi      r3, r31, 0x12
	  lwz       r4, 0x38(r29)
	  rlwinm    r0,r0,1,0,30
	  lfs       f1, 0x8(r29)
	  add       r4, r4, r0
	  bl        0x13F0
	  fmr       f31, f1
	  lfs       f0, -0x7A00(r2)
	  fcmpo     cr0, f31, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x2A8
	  li        r0, 0
	  stb       r0, 0x3(r30)
	  b         .loc_0x2D0

	.loc_0x2A8:
	  lfs       f0, -0x79EC(r2)
	  fcmpo     cr0, f31, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x2C8
	  psq_st    f31,0x8(r1),0x1,0x2
	  lbz       r0, 0x8(r1)
	  stb       r0, 0x3(r30)
	  b         .loc_0x2D0

	.loc_0x2C8:
	  li        r0, 0xFF
	  stb       r0, 0x3(r30)

	.loc_0x2D0:
	  psq_l     f31,0x38(r1),0,0
	  lwz       r0, 0x44(r1)
	  lfd       f31, 0x30(r1)
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  lwz       r29, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8005C37C
 * Size:	000268
 */
void J2DAnmTextureSRTKey::calcTransform(float, unsigned short,
                                        J3DTextureSRTInfo*) const
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stfd      f31, 0x30(r1)
	  psq_st    f31,0x38(r1),0,0
	  stmw      r27, 0x1C(r1)
	  mulli     r0, r4, 0x3
	  mr        r27, r3
	  lwz       r6, 0x18(r3)
	  fmr       f31, f1
	  mr        r28, r5
	  rlwinm    r3,r0,0,16,31
	  mulli     r0, r3, 0x12
	  addi      r4, r3, 0x1
	  addi      r3, r3, 0x2
	  add       r31, r6, r0
	  lhz       r0, 0x0(r31)
	  mulli     r4, r4, 0x12
	  cmpwi     r0, 0x1
	  mulli     r3, r3, 0x12
	  add       r30, r6, r4
	  add       r29, r6, r3
	  beq-      .loc_0x78
	  bge-      .loc_0x90
	  cmpwi     r0, 0
	  bge-      .loc_0x6C
	  b         .loc_0x90

	.loc_0x6C:
	  lfs       f0, -0x79F0(r2)
	  stfs      f0, 0x0(r28)
	  b         .loc_0xB0

	.loc_0x78:
	  lhz       r0, 0x2(r31)
	  lwz       r3, 0x24(r27)
	  rlwinm    r0,r0,2,0,29
	  lfsx      f0, r3, r0
	  stfs      f0, 0x0(r28)
	  b         .loc_0xB0

	.loc_0x90:
	  lhz       r0, 0x2(r31)
	  fmr       f1, f31
	  lwz       r4, 0x24(r27)
	  mr        r3, r31
	  rlwinm    r0,r0,2,0,29
	  add       r4, r4, r0
	  bl        0x150C
	  stfs      f1, 0x0(r28)

	.loc_0xB0:
	  lhz       r0, 0x0(r30)
	  cmpwi     r0, 0x1
	  beq-      .loc_0xD8
	  bge-      .loc_0xF0
	  cmpwi     r0, 0
	  bge-      .loc_0xCC
	  b         .loc_0xF0

	.loc_0xCC:
	  lfs       f0, -0x79F0(r2)
	  stfs      f0, 0x4(r28)
	  b         .loc_0x110

	.loc_0xD8:
	  lhz       r0, 0x2(r30)
	  lwz       r3, 0x24(r27)
	  rlwinm    r0,r0,2,0,29
	  lfsx      f0, r3, r0
	  stfs      f0, 0x4(r28)
	  b         .loc_0x110

	.loc_0xF0:
	  lhz       r0, 0x2(r30)
	  fmr       f1, f31
	  lwz       r4, 0x24(r27)
	  mr        r3, r30
	  rlwinm    r0,r0,2,0,29
	  add       r4, r4, r0
	  bl        0x14AC
	  stfs      f1, 0x4(r28)

	.loc_0x110:
	  lhz       r0, 0x6(r29)
	  cmpwi     r0, 0x1
	  beq-      .loc_0x138
	  bge-      .loc_0x158
	  cmpwi     r0, 0
	  bge-      .loc_0x12C
	  b         .loc_0x158

	.loc_0x12C:
	  li        r0, 0
	  sth       r0, 0x8(r28)
	  b         .loc_0x18C

	.loc_0x138:
	  lhz       r0, 0x8(r29)
	  lwz       r4, 0x28(r27)
	  rlwinm    r3,r0,1,0,30
	  lwz       r0, 0x10(r27)
	  lhax      r3, r4, r3
	  slw       r0, r3, r0
	  sth       r0, 0x8(r28)
	  b         .loc_0x18C

	.loc_0x158:
	  lhz       r0, 0x8(r29)
	  fmr       f1, f31
	  lwz       r4, 0x28(r27)
	  addi      r3, r29, 0x6
	  rlwinm    r0,r0,1,0,30
	  add       r4, r4, r0
	  bl        0x1210
	  fctiwz    f0, f1
	  lwz       r0, 0x10(r27)
	  stfd      f0, 0x8(r1)
	  lwz       r3, 0xC(r1)
	  slw       r0, r3, r0
	  sth       r0, 0x8(r28)

	.loc_0x18C:
	  lhz       r0, 0xC(r31)
	  cmpwi     r0, 0x1
	  beq-      .loc_0x1B4
	  bge-      .loc_0x1CC
	  cmpwi     r0, 0
	  bge-      .loc_0x1A8
	  b         .loc_0x1CC

	.loc_0x1A8:
	  lfs       f0, -0x7A00(r2)
	  stfs      f0, 0xC(r28)
	  b         .loc_0x1EC

	.loc_0x1B4:
	  lhz       r0, 0xE(r31)
	  lwz       r3, 0x2C(r27)
	  rlwinm    r0,r0,2,0,29
	  lfsx      f0, r3, r0
	  stfs      f0, 0xC(r28)
	  b         .loc_0x1EC

	.loc_0x1CC:
	  lhz       r0, 0xE(r31)
	  fmr       f1, f31
	  lwz       r4, 0x2C(r27)
	  addi      r3, r31, 0xC
	  rlwinm    r0,r0,2,0,29
	  add       r4, r4, r0
	  bl        0x13D0
	  stfs      f1, 0xC(r28)

	.loc_0x1EC:
	  lhz       r0, 0xC(r30)
	  cmpwi     r0, 0x1
	  beq-      .loc_0x214
	  bge-      .loc_0x22C
	  cmpwi     r0, 0
	  bge-      .loc_0x208
	  b         .loc_0x22C

	.loc_0x208:
	  lfs       f0, -0x7A00(r2)
	  stfs      f0, 0x10(r28)
	  b         .loc_0x24C

	.loc_0x214:
	  lhz       r0, 0xE(r30)
	  lwz       r3, 0x2C(r27)
	  rlwinm    r0,r0,2,0,29
	  lfsx      f0, r3, r0
	  stfs      f0, 0x10(r28)
	  b         .loc_0x24C

	.loc_0x22C:
	  lhz       r0, 0xE(r30)
	  fmr       f1, f31
	  lwz       r4, 0x2C(r27)
	  addi      r3, r30, 0xC
	  rlwinm    r0,r0,2,0,29
	  add       r4, r4, r0
	  bl        0x1370
	  stfs      f1, 0x10(r28)

	.loc_0x24C:
	  psq_l     f31,0x38(r1),0,0
	  lfd       f31, 0x30(r1)
	  lmw       r27, 0x1C(r1)
	  lwz       r0, 0x44(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000274
 */
void J2DAnmTextureSRTKey::calcPostTransform(float, unsigned short,
                                            J3DTextureSRTInfo*) const
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8005C5E4
 * Size:	0000CC
 */
void J2DAnmTextureSRTKey::searchUpdateMaterialID(J2DScreen*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr.       r31, r4
	  stw       r30, 0x18(r1)
	  mr        r30, r3
	  stw       r29, 0x14(r1)
	  stw       r28, 0x10(r1)
	  beq-      .loc_0xAC
	  lwz       r0, 0x110(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0xAC
	  lis       r3, 0x5555
	  li        r28, 0
	  addi      r29, r3, 0x5556
	  b         .loc_0x8C

	.loc_0x44:
	  mr        r4, r28
	  addi      r3, r30, 0x38
	  bl        -0x2D814
	  mr        r4, r3
	  lwz       r3, 0x110(r31)
	  bl        -0x2D8B8
	  cmpwi     r3, -0x1
	  beq-      .loc_0x74
	  lwz       r4, 0x34(r30)
	  rlwinm    r0,r28,1,15,30
	  sthx      r3, r4, r0
	  b         .loc_0x88

	.loc_0x74:
	  lis       r4, 0x1
	  lwz       r3, 0x34(r30)
	  subi      r4, r4, 0x1
	  rlwinm    r0,r28,1,15,30
	  sthx      r4, r3, r0

	.loc_0x88:
	  addi      r28, r28, 0x1

	.loc_0x8C:
	  lhz       r0, 0x14(r30)
	  rlwinm    r4,r28,0,16,31
	  mulhw     r3, r29, r0
	  rlwinm    r0,r3,1,31,31
	  add       r0, r3, r0
	  rlwinm    r0,r0,0,16,31
	  cmplw     r4, r0
	  blt+      .loc_0x44

	.loc_0xAC:
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
 * Address:	8005C6B0
 * Size:	0001D4
 */
void J2DAnmTexPattern::searchUpdateMaterialID(J2DScreen*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x130(r1)
	  mflr      r0
	  stw       r0, 0x134(r1)
	  stmw      r26, 0x118(r1)
	  mr.       r30, r4
	  mr        r29, r3
	  beq-      .loc_0x1C0
	  lwz       r0, 0x110(r30)
	  cmplwi    r0, 0
	  beq-      .loc_0x1C0
	  lwz       r0, 0x108(r30)
	  cmplwi    r0, 0
	  beq-      .loc_0x1C0
	  li        r27, 0
	  b         .loc_0x84

	.loc_0x3C:
	  mr        r4, r27
	  addi      r3, r29, 0x20
	  bl        -0x2D8D8
	  mr        r4, r3
	  lwz       r3, 0x110(r30)
	  bl        -0x2D97C
	  cmpwi     r3, -0x1
	  beq-      .loc_0x6C
	  lwz       r4, 0x1C(r29)
	  rlwinm    r0,r27,1,15,30
	  sthx      r3, r4, r0
	  b         .loc_0x80

	.loc_0x6C:
	  lis       r4, 0x1
	  lwz       r3, 0x1C(r29)
	  subi      r4, r4, 0x1
	  rlwinm    r0,r27,1,15,30
	  sthx      r4, r3, r0

	.loc_0x80:
	  addi      r27, r27, 0x1

	.loc_0x84:
	  lhz       r0, 0x1A(r29)
	  rlwinm    r3,r27,0,16,31
	  cmplw     r3, r0
	  blt+      .loc_0x3C
	  lis       r4, 0x8006
	  lwz       r3, 0x30(r29)
	  subi      r4, r4, 0x376C
	  bl        0x64FF8
	  lwz       r3, 0x108(r30)
	  lhz       r28, 0x0(r3)
	  rlwinm    r3,r28,3,0,28
	  addi      r3, r3, 0x10
	  bl        -0x387B8
	  lis       r4, 0x8006
	  lis       r5, 0x8006
	  subi      r4, r4, 0x377C
	  mr        r7, r28
	  subi      r5, r5, 0x376C
	  li        r6, 0x8
	  bl        0x65270
	  stw       r3, 0x30(r29)
	  lwz       r0, 0x30(r29)
	  cmplwi    r0, 0
	  beq-      .loc_0x1C0
	  li        r0, 0
	  li        r31, 0
	  stb       r0, 0x8(r1)
	  b         .loc_0x1AC

	.loc_0xF4:
	  mr        r4, r31
	  bl        -0x12E20
	  cmplwi    r3, 0
	  li        r26, 0
	  beq-      .loc_0x150
	  lis       r5, 0x5449
	  mr        r4, r3
	  addi      r3, r1, 0x8
	  li        r6, 0
	  addi      r5, r5, 0x4D47
	  bl        -0x2A29C
	  mr.       r26, r3
	  bne-      .loc_0x150
	  lwz       r28, -0x76B0(r13)
	  cmplwi    r28, 0
	  beq-      .loc_0x150
	  lwz       r3, 0x108(r30)
	  mr        r4, r31
	  bl        -0x12E30
	  mr        r4, r3
	  mr        r3, r28
	  bl        -0x12F9C
	  mr        r26, r3

	.loc_0x150:
	  lwz       r3, 0x30(r29)
	  rlwinm    r27,r31,3,13,28
	  cmplwi    r26, 0
	  stwx      r26, r3, r27
	  beq-      .loc_0x1A8
	  lbz       r0, 0x8(r26)
	  cmplwi    r0, 0
	  beq-      .loc_0x1A8
	  li        r3, 0x18
	  bl        -0x38980
	  mr.       r28, r3
	  beq-      .loc_0x19C
	  lwz       r0, 0xC(r26)
	  li        r4, 0
	  lbz       r5, 0x9(r26)
	  lbz       r6, 0x1(r26)
	  add       r8, r26, r0
	  lhz       r7, 0xA(r26)
	  bl        -0x2D8EC

	.loc_0x19C:
	  lwz       r3, 0x30(r29)
	  addi      r0, r27, 0x4
	  stwx      r28, r3, r0

	.loc_0x1A8:
	  addi      r31, r31, 0x1

	.loc_0x1AC:
	  lwz       r3, 0x108(r30)
	  rlwinm    r4,r31,0,16,31
	  lhz       r0, 0x0(r3)
	  cmplw     r4, r0
	  blt+      .loc_0xF4

	.loc_0x1C0:
	  lmw       r26, 0x118(r1)
	  lwz       r0, 0x134(r1)
	  mtlr      r0
	  addi      r1, r1, 0x130
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8005C884
 * Size:	000010
 */
void J2DAnmTexPattern::J2DAnmTexPatternTIMGPointer::__ct(void)
{
	/*
	.loc_0x0:
	  li        r0, 0
	  stw       r0, 0x0(r3)
	  stw       r0, 0x4(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8005C894
 * Size:	000054
 */
void J2DAnmTexPattern::J2DAnmTexPatternTIMGPointer::__dt(void)
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
	  beq-      .loc_0x38
	  lwz       r3, 0x4(r30)
	  bl        -0x38804
	  extsh.    r0, r31
	  ble-      .loc_0x38
	  mr        r3, r30
	  bl        -0x38814

	.loc_0x38:
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
 * Address:	8005C8E8
 * Size:	0000B4
 */
void J2DAnmTexPattern::getTexNo(unsigned short, unsigned short*) const
{
	/*
	.loc_0x0:
	  lfs       f2, 0x8(r3)
	  rlwinm    r4,r4,3,13,28
	  lfs       f0, -0x7A00(r2)
	  stwu      r1, -0x10(r1)
	  lwz       r6, 0x14(r3)
	  fcmpo     cr0, f2, f0
	  lhzx      r7, r6, r4
	  bge-      .loc_0x3C
	  add       r4, r6, r4
	  lwz       r3, 0x10(r3)
	  lhz       r0, 0x2(r4)
	  rlwinm    r0,r0,1,0,30
	  lhzx      r0, r3, r0
	  sth       r0, 0x0(r5)
	  b         .loc_0xAC

	.loc_0x3C:
	  lis       r0, 0x4330
	  stw       r7, 0xC(r1)
	  lfd       f1, -0x79F8(r2)
	  stw       r0, 0x8(r1)
	  lfd       f0, 0x8(r1)
	  fsubs     f0, f0, f1
	  fcmpo     cr0, f2, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x84
	  add       r4, r6, r4
	  lwz       r6, 0x10(r3)
	  lhz       r0, 0x2(r4)
	  add       r3, r7, r0
	  subi      r0, r3, 0x1
	  rlwinm    r0,r0,1,0,30
	  lhzx      r0, r6, r0
	  sth       r0, 0x0(r5)
	  b         .loc_0xAC

	.loc_0x84:
	  fctiwz    f0, f2
	  add       r4, r6, r4
	  lhz       r0, 0x2(r4)
	  lwz       r4, 0x10(r3)
	  stfd      f0, 0x8(r1)
	  lwz       r3, 0xC(r1)
	  add       r0, r3, r0
	  rlwinm    r0,r0,1,0,30
	  lhzx      r0, r4, r0
	  sth       r0, 0x0(r5)

	.loc_0xAC:
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8005C99C
 * Size:	0000C4
 */
void J2DAnmTexPattern::getResTIMG(unsigned short) const
{
	/*
	.loc_0x0:
	  lwz       r7, 0x30(r3)
	  stwu      r1, -0x10(r1)
	  cmplwi    r7, 0
	  bne-      .loc_0x18
	  li        r3, 0
	  b         .loc_0xBC

	.loc_0x18:
	  lfs       f2, 0x8(r3)
	  rlwinm    r4,r4,3,13,28
	  lfs       f0, -0x7A00(r2)
	  lwz       r5, 0x14(r3)
	  fcmpo     cr0, f2, f0
	  lhzx      r6, r5, r4
	  bge-      .loc_0x4C
	  add       r4, r5, r4
	  lwz       r3, 0x10(r3)
	  lhz       r0, 0x2(r4)
	  rlwinm    r0,r0,1,0,30
	  lhzx      r0, r3, r0
	  b         .loc_0xB4

	.loc_0x4C:
	  lis       r0, 0x4330
	  stw       r6, 0xC(r1)
	  lfd       f1, -0x79F8(r2)
	  stw       r0, 0x8(r1)
	  lfd       f0, 0x8(r1)
	  fsubs     f0, f0, f1
	  fcmpo     cr0, f2, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x90
	  add       r4, r5, r4
	  lwz       r5, 0x10(r3)
	  lhz       r0, 0x2(r4)
	  add       r3, r6, r0
	  subi      r0, r3, 0x1
	  rlwinm    r0,r0,1,0,30
	  lhzx      r0, r5, r0
	  b         .loc_0xB4

	.loc_0x90:
	  fctiwz    f0, f2
	  add       r4, r5, r4
	  lhz       r0, 0x2(r4)
	  lwz       r4, 0x10(r3)
	  stfd      f0, 0x8(r1)
	  lwz       r3, 0xC(r1)
	  add       r0, r3, r0
	  rlwinm    r0,r0,1,0,30
	  lhzx      r0, r4, r0

	.loc_0xB4:
	  rlwinm    r0,r0,3,13,28
	  lwzx      r3, r7, r0

	.loc_0xBC:
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8005CA60
 * Size:	0000C8
 */
void J2DAnmTexPattern::getPalette(unsigned short) const
{
	/*
	.loc_0x0:
	  lwz       r7, 0x30(r3)
	  stwu      r1, -0x10(r1)
	  cmplwi    r7, 0
	  bne-      .loc_0x18
	  li        r3, 0
	  b         .loc_0xC0

	.loc_0x18:
	  lfs       f2, 0x8(r3)
	  rlwinm    r4,r4,3,13,28
	  lfs       f0, -0x7A00(r2)
	  lwz       r5, 0x14(r3)
	  fcmpo     cr0, f2, f0
	  lhzx      r6, r5, r4
	  bge-      .loc_0x4C
	  add       r4, r5, r4
	  lwz       r3, 0x10(r3)
	  lhz       r0, 0x2(r4)
	  rlwinm    r0,r0,1,0,30
	  lhzx      r0, r3, r0
	  b         .loc_0xB4

	.loc_0x4C:
	  lis       r0, 0x4330
	  stw       r6, 0xC(r1)
	  lfd       f1, -0x79F8(r2)
	  stw       r0, 0x8(r1)
	  lfd       f0, 0x8(r1)
	  fsubs     f0, f0, f1
	  fcmpo     cr0, f2, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x90
	  add       r4, r5, r4
	  lwz       r5, 0x10(r3)
	  lhz       r0, 0x2(r4)
	  add       r3, r6, r0
	  subi      r0, r3, 0x1
	  rlwinm    r0,r0,1,0,30
	  lhzx      r0, r5, r0
	  b         .loc_0xB4

	.loc_0x90:
	  fctiwz    f0, f2
	  add       r4, r5, r4
	  lhz       r0, 0x2(r4)
	  lwz       r4, 0x10(r3)
	  stfd      f0, 0x8(r1)
	  lwz       r3, 0xC(r1)
	  add       r0, r3, r0
	  rlwinm    r0,r0,1,0,30
	  lhzx      r0, r4, r0

	.loc_0xB4:
	  rlwinm    r0,r0,3,13,28
	  add       r3, r7, r0
	  lwz       r3, 0x4(r3)

	.loc_0xC0:
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8005CB28
 * Size:	0000A8
 */
void J2DAnmVisibilityFull::getVisibility(unsigned short, unsigned char*) const
{
	/*
	.loc_0x0:
	  lfs       f2, 0x8(r3)
	  rlwinm    r4,r4,2,14,29
	  lfs       f0, -0x7A00(r2)
	  stwu      r1, -0x10(r1)
	  lwz       r6, 0x14(r3)
	  fcmpo     cr0, f2, f0
	  lhzx      r7, r6, r4
	  bge-      .loc_0x38
	  add       r4, r6, r4
	  lwz       r3, 0x18(r3)
	  lhz       r0, 0x2(r4)
	  lbzx      r0, r3, r0
	  stb       r0, 0x0(r5)
	  b         .loc_0xA0

	.loc_0x38:
	  lis       r0, 0x4330
	  stw       r7, 0xC(r1)
	  lfd       f1, -0x79F8(r2)
	  stw       r0, 0x8(r1)
	  lfd       f0, 0x8(r1)
	  fsubs     f0, f0, f1
	  fcmpo     cr0, f2, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x7C
	  add       r4, r6, r4
	  lwz       r3, 0x18(r3)
	  lhz       r0, 0x2(r4)
	  add       r3, r3, r7
	  add       r3, r3, r0
	  lbz       r0, -0x1(r3)
	  stb       r0, 0x0(r5)
	  b         .loc_0xA0

	.loc_0x7C:
	  fctiwz    f0, f2
	  add       r4, r6, r4
	  lhz       r0, 0x2(r4)
	  lwz       r4, 0x18(r3)
	  stfd      f0, 0x8(r1)
	  lwz       r3, 0xC(r1)
	  add       r0, r3, r0
	  lbzx      r0, r4, r0
	  stb       r0, 0x0(r5)

	.loc_0xA0:
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8005CBD0
 * Size:	0002CC
 */
void J2DAnmTevRegKey::getTevColorReg(unsigned short, _GXColorS10*) const
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stfd      f31, 0x30(r1)
	  psq_st    f31,0x38(r1),0,0
	  stw       r31, 0x2C(r1)
	  stw       r30, 0x28(r1)
	  stw       r29, 0x24(r1)
	  rlwinm    r0,r4,0,16,31
	  mr        r29, r3
	  mulli     r0, r0, 0x1C
	  lwz       r3, 0x4C(r3)
	  mr        r30, r5
	  add       r31, r3, r0
	  lhz       r0, 0x0(r31)
	  cmpwi     r0, 0x1
	  beq-      .loc_0x60
	  bge-      .loc_0x78
	  cmpwi     r0, 0
	  bge-      .loc_0x54
	  b         .loc_0x78

	.loc_0x54:
	  li        r0, 0
	  sth       r0, 0x0(r30)
	  b         .loc_0xD4

	.loc_0x60:
	  lhz       r0, 0x2(r31)
	  lwz       r3, 0x54(r29)
	  rlwinm    r0,r0,1,0,30
	  lhax      r0, r3, r0
	  sth       r0, 0x0(r30)
	  b         .loc_0xD4

	.loc_0x78:
	  lhz       r0, 0x2(r31)
	  mr        r3, r31
	  lwz       r4, 0x54(r29)
	  rlwinm    r0,r0,1,0,30
	  lfs       f1, 0x8(r29)
	  add       r4, r4, r0
	  bl        0xA9C
	  fmr       f31, f1
	  lfs       f0, -0x79E8(r2)
	  fcmpo     cr0, f31, f0
	  bge-      .loc_0xB0
	  li        r0, -0x400
	  sth       r0, 0x0(r30)
	  b         .loc_0xD4

	.loc_0xB0:
	  lfs       f0, -0x79E4(r2)
	  fcmpo     cr0, f31, f0
	  ble-      .loc_0xC8
	  li        r0, 0x3FF
	  sth       r0, 0x0(r30)
	  b         .loc_0xD4

	.loc_0xC8:
	  psq_st    f31,0x14(r1),0x1,0x5
	  lha       r0, 0x14(r1)
	  sth       r0, 0x0(r30)

	.loc_0xD4:
	  lhz       r0, 0x6(r31)
	  cmpwi     r0, 0x1
	  beq-      .loc_0xFC
	  bge-      .loc_0x114
	  cmpwi     r0, 0
	  bge-      .loc_0xF0
	  b         .loc_0x114

	.loc_0xF0:
	  li        r0, 0
	  sth       r0, 0x2(r30)
	  b         .loc_0x170

	.loc_0xFC:
	  lhz       r0, 0x8(r31)
	  lwz       r3, 0x58(r29)
	  rlwinm    r0,r0,1,0,30
	  lhax      r0, r3, r0
	  sth       r0, 0x2(r30)
	  b         .loc_0x170

	.loc_0x114:
	  lhz       r0, 0x8(r31)
	  addi      r3, r31, 0x6
	  lwz       r4, 0x58(r29)
	  rlwinm    r0,r0,1,0,30
	  lfs       f1, 0x8(r29)
	  add       r4, r4, r0
	  bl        0xA00
	  fmr       f31, f1
	  lfs       f0, -0x79E8(r2)
	  fcmpo     cr0, f31, f0
	  bge-      .loc_0x14C
	  li        r0, -0x400
	  sth       r0, 0x2(r30)
	  b         .loc_0x170

	.loc_0x14C:
	  lfs       f0, -0x79E4(r2)
	  fcmpo     cr0, f31, f0
	  ble-      .loc_0x164
	  li        r0, 0x3FF
	  sth       r0, 0x2(r30)
	  b         .loc_0x170

	.loc_0x164:
	  psq_st    f31,0x10(r1),0x1,0x5
	  lha       r0, 0x10(r1)
	  sth       r0, 0x2(r30)

	.loc_0x170:
	  lhz       r0, 0xC(r31)
	  cmpwi     r0, 0x1
	  beq-      .loc_0x198
	  bge-      .loc_0x1B0
	  cmpwi     r0, 0
	  bge-      .loc_0x18C
	  b         .loc_0x1B0

	.loc_0x18C:
	  li        r0, 0
	  sth       r0, 0x4(r30)
	  b         .loc_0x20C

	.loc_0x198:
	  lhz       r0, 0xE(r31)
	  lwz       r3, 0x5C(r29)
	  rlwinm    r0,r0,1,0,30
	  lhax      r0, r3, r0
	  sth       r0, 0x4(r30)
	  b         .loc_0x20C

	.loc_0x1B0:
	  lhz       r0, 0xE(r31)
	  addi      r3, r31, 0xC
	  lwz       r4, 0x5C(r29)
	  rlwinm    r0,r0,1,0,30
	  lfs       f1, 0x8(r29)
	  add       r4, r4, r0
	  bl        0x964
	  fmr       f31, f1
	  lfs       f0, -0x79E8(r2)
	  fcmpo     cr0, f31, f0
	  bge-      .loc_0x1E8
	  li        r0, -0x400
	  sth       r0, 0x4(r30)
	  b         .loc_0x20C

	.loc_0x1E8:
	  lfs       f0, -0x79E4(r2)
	  fcmpo     cr0, f31, f0
	  ble-      .loc_0x200
	  li        r0, 0x3FF
	  sth       r0, 0x4(r30)
	  b         .loc_0x20C

	.loc_0x200:
	  psq_st    f31,0xC(r1),0x1,0x5
	  lha       r0, 0xC(r1)
	  sth       r0, 0x4(r30)

	.loc_0x20C:
	  lhz       r0, 0x12(r31)
	  cmpwi     r0, 0x1
	  beq-      .loc_0x234
	  bge-      .loc_0x24C
	  cmpwi     r0, 0
	  bge-      .loc_0x228
	  b         .loc_0x24C

	.loc_0x228:
	  li        r0, 0
	  sth       r0, 0x6(r30)
	  b         .loc_0x2A8

	.loc_0x234:
	  lhz       r0, 0x14(r31)
	  lwz       r3, 0x60(r29)
	  rlwinm    r0,r0,1,0,30
	  lhax      r0, r3, r0
	  sth       r0, 0x6(r30)
	  b         .loc_0x2A8

	.loc_0x24C:
	  lhz       r0, 0x14(r31)
	  addi      r3, r31, 0x12
	  lwz       r4, 0x60(r29)
	  rlwinm    r0,r0,1,0,30
	  lfs       f1, 0x8(r29)
	  add       r4, r4, r0
	  bl        0x8C8
	  fmr       f31, f1
	  lfs       f0, -0x79E8(r2)
	  fcmpo     cr0, f31, f0
	  bge-      .loc_0x284
	  li        r0, -0x400
	  sth       r0, 0x6(r30)
	  b         .loc_0x2A8

	.loc_0x284:
	  lfs       f0, -0x79E4(r2)
	  fcmpo     cr0, f31, f0
	  ble-      .loc_0x29C
	  li        r0, 0x3FF
	  sth       r0, 0x6(r30)
	  b         .loc_0x2A8

	.loc_0x29C:
	  psq_st    f31,0x8(r1),0x1,0x5
	  lha       r0, 0x8(r1)
	  sth       r0, 0x6(r30)

	.loc_0x2A8:
	  psq_l     f31,0x38(r1),0,0
	  lwz       r0, 0x44(r1)
	  lfd       f31, 0x30(r1)
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  lwz       r29, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8005CE9C
 * Size:	0002CC
 */
void J2DAnmTevRegKey::getTevKonstReg(unsigned short, _GXColor*) const
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stfd      f31, 0x30(r1)
	  psq_st    f31,0x38(r1),0,0
	  stw       r31, 0x2C(r1)
	  stw       r30, 0x28(r1)
	  stw       r29, 0x24(r1)
	  rlwinm    r0,r4,0,16,31
	  mr        r29, r3
	  mulli     r0, r0, 0x1C
	  lwz       r3, 0x50(r3)
	  mr        r30, r5
	  add       r31, r3, r0
	  lhz       r0, 0x0(r31)
	  cmpwi     r0, 0x1
	  beq-      .loc_0x60
	  bge-      .loc_0x78
	  cmpwi     r0, 0
	  bge-      .loc_0x54
	  b         .loc_0x78

	.loc_0x54:
	  li        r0, 0
	  stb       r0, 0x0(r30)
	  b         .loc_0xD4

	.loc_0x60:
	  lhz       r0, 0x2(r31)
	  lwz       r3, 0x64(r29)
	  rlwinm    r0,r0,1,0,30
	  lhax      r0, r3, r0
	  stb       r0, 0x0(r30)
	  b         .loc_0xD4

	.loc_0x78:
	  lhz       r0, 0x2(r31)
	  mr        r3, r31
	  lwz       r4, 0x64(r29)
	  rlwinm    r0,r0,1,0,30
	  lfs       f1, 0x8(r29)
	  add       r4, r4, r0
	  bl        0x7D0
	  fmr       f31, f1
	  lfs       f0, -0x7A00(r2)
	  fcmpo     cr0, f31, f0
	  bge-      .loc_0xB0
	  li        r0, 0
	  stb       r0, 0x0(r30)
	  b         .loc_0xD4

	.loc_0xB0:
	  lfs       f0, -0x79EC(r2)
	  fcmpo     cr0, f31, f0
	  ble-      .loc_0xC8
	  li        r0, 0xFF
	  stb       r0, 0x0(r30)
	  b         .loc_0xD4

	.loc_0xC8:
	  psq_st    f31,0x14(r1),0x1,0x2
	  lbz       r0, 0x14(r1)
	  stb       r0, 0x0(r30)

	.loc_0xD4:
	  lhz       r0, 0x6(r31)
	  cmpwi     r0, 0x1
	  beq-      .loc_0xFC
	  bge-      .loc_0x114
	  cmpwi     r0, 0
	  bge-      .loc_0xF0
	  b         .loc_0x114

	.loc_0xF0:
	  li        r0, 0
	  stb       r0, 0x1(r30)
	  b         .loc_0x170

	.loc_0xFC:
	  lhz       r0, 0x8(r31)
	  lwz       r3, 0x68(r29)
	  rlwinm    r0,r0,1,0,30
	  lhax      r0, r3, r0
	  stb       r0, 0x1(r30)
	  b         .loc_0x170

	.loc_0x114:
	  lhz       r0, 0x8(r31)
	  addi      r3, r31, 0x6
	  lwz       r4, 0x68(r29)
	  rlwinm    r0,r0,1,0,30
	  lfs       f1, 0x8(r29)
	  add       r4, r4, r0
	  bl        0x734
	  fmr       f31, f1
	  lfs       f0, -0x7A00(r2)
	  fcmpo     cr0, f31, f0
	  bge-      .loc_0x14C
	  li        r0, 0
	  stb       r0, 0x1(r30)
	  b         .loc_0x170

	.loc_0x14C:
	  lfs       f0, -0x79EC(r2)
	  fcmpo     cr0, f31, f0
	  ble-      .loc_0x164
	  li        r0, 0xFF
	  stb       r0, 0x1(r30)
	  b         .loc_0x170

	.loc_0x164:
	  psq_st    f31,0x10(r1),0x1,0x2
	  lbz       r0, 0x10(r1)
	  stb       r0, 0x1(r30)

	.loc_0x170:
	  lhz       r0, 0xC(r31)
	  cmpwi     r0, 0x1
	  beq-      .loc_0x198
	  bge-      .loc_0x1B0
	  cmpwi     r0, 0
	  bge-      .loc_0x18C
	  b         .loc_0x1B0

	.loc_0x18C:
	  li        r0, 0
	  stb       r0, 0x2(r30)
	  b         .loc_0x20C

	.loc_0x198:
	  lhz       r0, 0xE(r31)
	  lwz       r3, 0x6C(r29)
	  rlwinm    r0,r0,1,0,30
	  lhax      r0, r3, r0
	  stb       r0, 0x2(r30)
	  b         .loc_0x20C

	.loc_0x1B0:
	  lhz       r0, 0xE(r31)
	  addi      r3, r31, 0xC
	  lwz       r4, 0x6C(r29)
	  rlwinm    r0,r0,1,0,30
	  lfs       f1, 0x8(r29)
	  add       r4, r4, r0
	  bl        0x698
	  fmr       f31, f1
	  lfs       f0, -0x7A00(r2)
	  fcmpo     cr0, f31, f0
	  bge-      .loc_0x1E8
	  li        r0, 0
	  stb       r0, 0x2(r30)
	  b         .loc_0x20C

	.loc_0x1E8:
	  lfs       f0, -0x79EC(r2)
	  fcmpo     cr0, f31, f0
	  ble-      .loc_0x200
	  li        r0, 0xFF
	  stb       r0, 0x2(r30)
	  b         .loc_0x20C

	.loc_0x200:
	  psq_st    f31,0xC(r1),0x1,0x2
	  lbz       r0, 0xC(r1)
	  stb       r0, 0x2(r30)

	.loc_0x20C:
	  lhz       r0, 0x12(r31)
	  cmpwi     r0, 0x1
	  beq-      .loc_0x234
	  bge-      .loc_0x24C
	  cmpwi     r0, 0
	  bge-      .loc_0x228
	  b         .loc_0x24C

	.loc_0x228:
	  li        r0, 0
	  stb       r0, 0x3(r30)
	  b         .loc_0x2A8

	.loc_0x234:
	  lhz       r0, 0x14(r31)
	  lwz       r3, 0x70(r29)
	  rlwinm    r0,r0,1,0,30
	  lhax      r0, r3, r0
	  stb       r0, 0x3(r30)
	  b         .loc_0x2A8

	.loc_0x24C:
	  lhz       r0, 0x14(r31)
	  addi      r3, r31, 0x12
	  lwz       r4, 0x70(r29)
	  rlwinm    r0,r0,1,0,30
	  lfs       f1, 0x8(r29)
	  add       r4, r4, r0
	  bl        0x5FC
	  fmr       f31, f1
	  lfs       f0, -0x7A00(r2)
	  fcmpo     cr0, f31, f0
	  bge-      .loc_0x284
	  li        r0, 0
	  stb       r0, 0x3(r30)
	  b         .loc_0x2A8

	.loc_0x284:
	  lfs       f0, -0x79EC(r2)
	  fcmpo     cr0, f31, f0
	  ble-      .loc_0x29C
	  li        r0, 0xFF
	  stb       r0, 0x3(r30)
	  b         .loc_0x2A8

	.loc_0x29C:
	  psq_st    f31,0x8(r1),0x1,0x2
	  lbz       r0, 0x8(r1)
	  stb       r0, 0x3(r30)

	.loc_0x2A8:
	  psq_l     f31,0x38(r1),0,0
	  lwz       r0, 0x44(r1)
	  lfd       f31, 0x30(r1)
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  lwz       r29, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8005D168
 * Size:	00010C
 */
void J2DAnmTevRegKey::searchUpdateMaterialID(J2DScreen*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr.       r31, r4
	  stw       r30, 0x18(r1)
	  mr        r30, r3
	  stw       r29, 0x14(r1)
	  beq-      .loc_0xF0
	  lwz       r0, 0x110(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0xF0
	  li        r29, 0
	  b         .loc_0x80

	.loc_0x38:
	  mr        r4, r29
	  addi      r3, r30, 0x28
	  bl        -0x2E38C
	  mr        r4, r3
	  lwz       r3, 0x110(r31)
	  bl        -0x2E430
	  cmpwi     r3, -0x1
	  beq-      .loc_0x68
	  lwz       r4, 0x24(r30)
	  rlwinm    r0,r29,1,15,30
	  sthx      r3, r4, r0
	  b         .loc_0x7C

	.loc_0x68:
	  lis       r4, 0x1
	  lwz       r3, 0x24(r30)
	  subi      r4, r4, 0x1
	  rlwinm    r0,r29,1,15,30
	  sthx      r4, r3, r0

	.loc_0x7C:
	  addi      r29, r29, 0x1

	.loc_0x80:
	  lhz       r0, 0x10(r30)
	  rlwinm    r3,r29,0,16,31
	  cmplw     r3, r0
	  blt+      .loc_0x38
	  li        r29, 0
	  b         .loc_0xE0

	.loc_0x98:
	  mr        r4, r29
	  addi      r3, r30, 0x3C
	  bl        -0x2E3EC
	  mr        r4, r3
	  lwz       r3, 0x110(r31)
	  bl        -0x2E490
	  cmpwi     r3, -0x1
	  beq-      .loc_0xC8
	  lwz       r4, 0x38(r30)
	  rlwinm    r0,r29,1,15,30
	  sthx      r3, r4, r0
	  b         .loc_0xDC

	.loc_0xC8:
	  lis       r4, 0x1
	  lwz       r3, 0x38(r30)
	  subi      r4, r4, 0x1
	  rlwinm    r0,r29,1,15,30
	  sthx      r4, r3, r0

	.loc_0xDC:
	  addi      r29, r29, 0x1

	.loc_0xE0:
	  lhz       r0, 0x12(r30)
	  rlwinm    r3,r29,0,16,31
	  cmplw     r3, r0
	  blt+      .loc_0x98

	.loc_0xF0:
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
 * Address:	8005D274
 * Size:	000088
 */
void J2DAnmTevRegKey::~J2DAnmTevRegKey()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr.       r31, r3
	  beq-      .loc_0x70
	  lis       r3, 0x804A
	  addic.    r0, r31, 0x3C
	  addi      r0, r3, 0x13C0
	  stw       r0, 0x0(r31)
	  beq-      .loc_0x38
	  lis       r3, 0x804A
	  addi      r0, r3, 0x4E0
	  stw       r0, 0x3C(r31)

	.loc_0x38:
	  addic.    r0, r31, 0x28
	  beq-      .loc_0x4C
	  lis       r3, 0x804A
	  addi      r0, r3, 0x4E0
	  stw       r0, 0x28(r31)

	.loc_0x4C:
	  cmplwi    r31, 0
	  beq-      .loc_0x60
	  lis       r3, 0x804A
	  addi      r0, r3, 0xC64
	  stw       r0, 0x0(r31)

	.loc_0x60:
	  extsh.    r0, r4
	  ble-      .loc_0x70
	  mr        r3, r31
	  bl        -0x3922C

	.loc_0x70:
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
 * Address:	8005D2FC
 * Size:	000090
 */
void J2DAnmTexPattern::~J2DAnmTexPattern()
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
	  lis       r4, 0x804A
	  lis       r3, 0x8006
	  addi      r0, r4, 0x13D0
	  stw       r0, 0x0(r30)
	  subi      r4, r3, 0x376C
	  lwz       r3, 0x30(r30)
	  bl        0x64414
	  addic.    r0, r30, 0x20
	  beq-      .loc_0x50
	  lis       r3, 0x804A
	  addi      r0, r3, 0x4E0
	  stw       r0, 0x20(r30)

	.loc_0x50:
	  cmplwi    r30, 0
	  beq-      .loc_0x64
	  lis       r3, 0x804A
	  addi      r0, r3, 0xC64
	  stw       r0, 0x0(r30)

	.loc_0x64:
	  extsh.    r0, r31
	  ble-      .loc_0x74
	  mr        r3, r30
	  bl        -0x392B8

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
 * Address:	8005D38C
 * Size:	000088
 */
void J2DAnmTextureSRTKey::~J2DAnmTextureSRTKey()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr.       r31, r3
	  beq-      .loc_0x70
	  lis       r3, 0x804A
	  addic.    r0, r31, 0x70
	  addi      r0, r3, 0x13E0
	  stw       r0, 0x0(r31)
	  beq-      .loc_0x38
	  lis       r3, 0x804A
	  addi      r0, r3, 0x4E0
	  stw       r0, 0x70(r31)

	.loc_0x38:
	  addic.    r0, r31, 0x38
	  beq-      .loc_0x4C
	  lis       r3, 0x804A
	  addi      r0, r3, 0x4E0
	  stw       r0, 0x38(r31)

	.loc_0x4C:
	  cmplwi    r31, 0
	  beq-      .loc_0x60
	  lis       r3, 0x804A
	  addi      r0, r3, 0xC64
	  stw       r0, 0x0(r31)

	.loc_0x60:
	  extsh.    r0, r4
	  ble-      .loc_0x70
	  mr        r3, r31
	  bl        -0x39344

	.loc_0x70:
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
 * Address:	8005D414
 * Size:	00006C
 */
void J2DAnmVtxColorKey::~J2DAnmVtxColorKey()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr.       r31, r3
	  beq-      .loc_0x54
	  lis       r3, 0x804A
	  addi      r0, r3, 0x13F0
	  stw       r0, 0x0(r31)
	  beq-      .loc_0x44
	  lis       r3, 0x804A
	  addi      r0, r3, 0xC3C
	  stw       r0, 0x0(r31)
	  beq-      .loc_0x44
	  lis       r3, 0x804A
	  addi      r0, r3, 0xC64
	  stw       r0, 0x0(r31)

	.loc_0x44:
	  extsh.    r0, r4
	  ble-      .loc_0x54
	  mr        r3, r31
	  bl        -0x393B0

	.loc_0x54:
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
 * Address:	8005D480
 * Size:	00006C
 */
void J2DAnmVtxColorFull::~J2DAnmVtxColorFull()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr.       r31, r3
	  beq-      .loc_0x54
	  lis       r3, 0x804A
	  addi      r0, r3, 0x1404
	  stw       r0, 0x0(r31)
	  beq-      .loc_0x44
	  lis       r3, 0x804A
	  addi      r0, r3, 0xC3C
	  stw       r0, 0x0(r31)
	  beq-      .loc_0x44
	  lis       r3, 0x804A
	  addi      r0, r3, 0xC64
	  stw       r0, 0x0(r31)

	.loc_0x44:
	  extsh.    r0, r4
	  ble-      .loc_0x54
	  mr        r3, r31
	  bl        -0x3941C

	.loc_0x54:
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
 * Address:	8005D4EC
 * Size:	000084
 */
void J2DAnmColorKey::~J2DAnmColorKey()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr.       r31, r3
	  beq-      .loc_0x6C
	  lis       r3, 0x804A
	  addi      r0, r3, 0x1418
	  stw       r0, 0x0(r31)
	  beq-      .loc_0x5C
	  lis       r3, 0x804A
	  addic.    r0, r31, 0x20
	  addi      r0, r3, 0x1440
	  stw       r0, 0x0(r31)
	  beq-      .loc_0x48
	  lis       r3, 0x804A
	  addi      r0, r3, 0x4E0
	  stw       r0, 0x20(r31)

	.loc_0x48:
	  cmplwi    r31, 0
	  beq-      .loc_0x5C
	  lis       r3, 0x804A
	  addi      r0, r3, 0xC64
	  stw       r0, 0x0(r31)

	.loc_0x5C:
	  extsh.    r0, r4
	  ble-      .loc_0x6C
	  mr        r3, r31
	  bl        -0x394A0

	.loc_0x6C:
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
 * Address:	8005D570
 * Size:	000084
 */
void J2DAnmColorFull::~J2DAnmColorFull()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr.       r31, r3
	  beq-      .loc_0x6C
	  lis       r3, 0x804A
	  addi      r0, r3, 0x142C
	  stw       r0, 0x0(r31)
	  beq-      .loc_0x5C
	  lis       r3, 0x804A
	  addic.    r0, r31, 0x20
	  addi      r0, r3, 0x1440
	  stw       r0, 0x0(r31)
	  beq-      .loc_0x48
	  lis       r3, 0x804A
	  addi      r0, r3, 0x4E0
	  stw       r0, 0x20(r31)

	.loc_0x48:
	  cmplwi    r31, 0
	  beq-      .loc_0x5C
	  lis       r3, 0x804A
	  addi      r0, r3, 0xC64
	  stw       r0, 0x0(r31)

	.loc_0x5C:
	  extsh.    r0, r4
	  ble-      .loc_0x6C
	  mr        r3, r31
	  bl        -0x39524

	.loc_0x6C:
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
 * Address:	8005D5F4
 * Size:	00006C
 */
void J2DAnmTransformKey::~J2DAnmTransformKey()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr.       r31, r3
	  beq-      .loc_0x54
	  lis       r3, 0x804A
	  addi      r0, r3, 0x1454
	  stw       r0, 0x0(r31)
	  beq-      .loc_0x44
	  lis       r3, 0x804A
	  addi      r0, r3, 0xC50
	  stw       r0, 0x0(r31)
	  beq-      .loc_0x44
	  lis       r3, 0x804A
	  addi      r0, r3, 0xC64
	  stw       r0, 0x0(r31)

	.loc_0x44:
	  extsh.    r0, r4
	  ble-      .loc_0x54
	  mr        r3, r31
	  bl        -0x39590

	.loc_0x54:
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
 * Address:	8005D660
 * Size:	000030
 */
void J2DAnmTransformKey::getTransform(unsigned short, J3DTransformInfo*) const
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f1, 0x8(r3)
	  stw       r0, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
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
 * Address:	8005D690
 * Size:	00006C
 */
void J2DAnmTransformFull::~J2DAnmTransformFull()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr.       r31, r3
	  beq-      .loc_0x54
	  lis       r3, 0x804A
	  addi      r0, r3, 0x146C
	  stw       r0, 0x0(r31)
	  beq-      .loc_0x44
	  lis       r3, 0x804A
	  addi      r0, r3, 0xC50
	  stw       r0, 0x0(r31)
	  beq-      .loc_0x44
	  lis       r3, 0x804A
	  addi      r0, r3, 0xC64
	  stw       r0, 0x0(r31)

	.loc_0x44:
	  extsh.    r0, r4
	  ble-      .loc_0x54
	  mr        r3, r31
	  bl        -0x3962C

	.loc_0x54:
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
 * Address:	8005D6FC
 * Size:	000234
 */
void J2DGetKeyFrameInterpolation<short>(float, J3DAnmKeyTableBase*, short*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  lis       r5, 0x4330
	  lfd       f2, -0x79E0(r2)
	  lha       r0, 0x0(r4)
	  stw       r5, 0x8(r1)
	  xoris     r0, r0, 0x8000
	  stw       r0, 0xC(r1)
	  lfd       f0, 0x8(r1)
	  fsubs     f0, f0, f2
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x48
	  lha       r0, 0x2(r4)
	  stw       r5, 0x8(r1)
	  xoris     r0, r0, 0x8000
	  stw       r0, 0xC(r1)
	  lfd       f0, 0x8(r1)
	  fsubs     f1, f0, f2
	  b         .loc_0x22C

	.loc_0x48:
	  lhz       r0, 0x4(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x144
	  lhz       r6, 0x0(r3)
	  stw       r5, 0x8(r1)
	  subi      r0, r6, 0x1
	  mulli     r3, r0, 0x6
	  lhax      r0, r4, r3
	  xoris     r0, r0, 0x8000
	  stw       r0, 0xC(r1)
	  lfd       f0, 0x8(r1)
	  fsubs     f0, f0, f2
	  fcmpo     cr0, f0, f1
	  cror      2, 0, 0x2
	  bne-      .loc_0xE8
	  add       r3, r4, r3
	  stw       r5, 0x8(r1)
	  lha       r0, 0x2(r3)
	  xoris     r0, r0, 0x8000
	  stw       r0, 0xC(r1)
	  lfd       f0, 0x8(r1)
	  fsubs     f1, f0, f2
	  b         .loc_0x22C
	  b         .loc_0xE8

	.loc_0xA8:
	  rlwinm    r7,r6,31,1,31
	  stw       r5, 0x8(r1)
	  mulli     r0, r7, 0x3
	  rlwinm    r3,r0,1,0,30
	  lhax      r0, r4, r3
	  xoris     r0, r0, 0x8000
	  stw       r0, 0xC(r1)
	  lfd       f0, 0x8(r1)
	  fsubs     f0, f0, f2
	  fcmpo     cr0, f1, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0xE4
	  add       r4, r4, r3
	  sub       r6, r6, r7
	  b         .loc_0xE8

	.loc_0xE4:
	  mr        r6, r7

	.loc_0xE8:
	  cmplwi    r6, 0x1
	  bgt+      .loc_0xA8
	  psq_l     f2,0x0(r4),0x1,0x5
	  psq_l     f0,0x6(r4),0x1,0x5
	  psq_l     f7,0x2(r4),0x1,0x5
	  fsubs     f5, f0, f2
	  psq_l     f6,0x8(r4),0x1,0x5
	  fsubs     f3, f1, f2
	  psq_l     f0,0xA(r4),0x1,0x5
	  fsubs     f4, f6, f7
	  fdivs     f3, f3, f5
	  psq_l     f1,0x4(r4),0x1,0x5
	  fmadds    f0, f0, f5, f7
	  fnmsubs   f4, f5, f1, f4
	  fmuls     f2, f3, f3
	  fsubs     f0, f0, f6
	  fsubs     f0, f0, f4
	  fmuls     f0, f2, f0
	  fmadds    f1, f5, f1, f0
	  fmadds    f1, f1, f3, f7
	  fmadds    f1, f4, f2, f1
	  fsubs     f1, f1, f0
	  b         .loc_0x22C

	.loc_0x144:
	  lhz       r6, 0x0(r3)
	  stw       r5, 0x8(r1)
	  subi      r0, r6, 0x1
	  rlwinm    r3,r0,3,0,28
	  lhax      r0, r4, r3
	  xoris     r0, r0, 0x8000
	  stw       r0, 0xC(r1)
	  lfd       f0, 0x8(r1)
	  fsubs     f0, f0, f2
	  fcmpo     cr0, f0, f1
	  cror      2, 0, 0x2
	  bne-      .loc_0x1D4
	  add       r3, r4, r3
	  stw       r5, 0x8(r1)
	  lha       r0, 0x2(r3)
	  xoris     r0, r0, 0x8000
	  stw       r0, 0xC(r1)
	  lfd       f0, 0x8(r1)
	  fsubs     f1, f0, f2
	  b         .loc_0x22C
	  b         .loc_0x1D4

	.loc_0x198:
	  rlwinm    r3,r6,2,0,28
	  stw       r5, 0x8(r1)
	  lhax      r0, r4, r3
	  rlwinm    r7,r6,31,1,31
	  xoris     r0, r0, 0x8000
	  stw       r0, 0xC(r1)
	  lfd       f0, 0x8(r1)
	  fsubs     f0, f0, f2
	  fcmpo     cr0, f1, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x1D0
	  add       r4, r4, r3
	  sub       r6, r6, r7
	  b         .loc_0x1D4

	.loc_0x1D0:
	  mr        r6, r7

	.loc_0x1D4:
	  cmplwi    r6, 0x1
	  bgt+      .loc_0x198
	  psq_l     f2,0x0(r4),0x1,0x5
	  psq_l     f0,0x8(r4),0x1,0x5
	  psq_l     f7,0x2(r4),0x1,0x5
	  fsubs     f5, f0, f2
	  psq_l     f6,0xA(r4),0x1,0x5
	  fsubs     f3, f1, f2
	  psq_l     f0,0xC(r4),0x1,0x5
	  fsubs     f4, f6, f7
	  fdivs     f3, f3, f5
	  psq_l     f1,0x6(r4),0x1,0x5
	  fmadds    f0, f0, f5, f7
	  fnmsubs   f4, f5, f1, f4
	  fmuls     f2, f3, f3
	  fsubs     f0, f0, f6
	  fsubs     f0, f0, f4
	  fmuls     f0, f2, f0
	  fmadds    f1, f5, f1, f0
	  fmadds    f1, f1, f3, f7
	  fmadds    f1, f4, f2, f1
	  fsubs     f1, f1, f0

	.loc_0x22C:
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8005D930
 * Size:	00017C
 */
void J2DGetKeyFrameInterpolation<float>(float, J3DAnmKeyTableBase*, float*)
{
	/*
	.loc_0x0:
	  lfs       f0, 0x0(r4)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x14
	  lfs       f1, 0x4(r4)
	  blr

	.loc_0x14:
	  lhz       r0, 0x4(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0xD0
	  lhz       r3, 0x0(r3)
	  subi      r0, r3, 0x1
	  mulli     r0, r0, 0xC
	  lfsx      f0, r4, r0
	  fcmpo     cr0, f0, f1
	  cror      2, 0, 0x2
	  bne-      .loc_0x78
	  add       r3, r4, r0
	  lfs       f1, 0x4(r3)
	  blr
	  b         .loc_0x78

	.loc_0x4C:
	  rlwinm    r5,r3,31,1,31
	  mulli     r0, r5, 0x3
	  rlwinm    r0,r0,2,0,29
	  lfsx      f0, r4, r0
	  fcmpo     cr0, f1, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x74
	  add       r4, r4, r0
	  sub       r3, r3, r5
	  b         .loc_0x78

	.loc_0x74:
	  mr        r3, r5

	.loc_0x78:
	  cmplwi    r3, 0x1
	  bgt+      .loc_0x4C
	  lfs       f0, 0x0(r4)
	  lfs       f2, 0xC(r4)
	  fsubs     f5, f1, f0
	  lfs       f6, 0x4(r4)
	  fsubs     f4, f2, f0
	  lfs       f2, 0x10(r4)
	  lfs       f7, 0x8(r4)
	  lfs       f8, 0x14(r4)
	  fdivs     f3, f5, f4
	  fmuls     f0, f3, f3
	  fsubs     f4, f6, f2
	  fadds     f1, f3, f3
	  fsubs     f2, f0, f3
	  fmsubs    f0, f1, f2, f0
	  fmadds    f1, f7, f2, f7
	  fmadds    f0, f0, f4, f6
	  fmadds    f1, f8, f2, f1
	  fmsubs    f1, f3, f7, f1
	  fnmsubs   f1, f5, f1, f0
	  blr

	.loc_0xD0:
	  lhz       r3, 0x0(r3)
	  subi      r0, r3, 0x1
	  rlwinm    r0,r0,4,0,27
	  lfsx      f0, r4, r0
	  fcmpo     cr0, f0, f1
	  cror      2, 0, 0x2
	  bne-      .loc_0x124
	  add       r3, r4, r0
	  lfs       f1, 0x4(r3)
	  blr
	  b         .loc_0x124

	.loc_0xFC:
	  rlwinm    r0,r3,3,0,27
	  rlwinm    r5,r3,31,1,31
	  lfsx      f0, r4, r0
	  fcmpo     cr0, f1, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x120
	  add       r4, r4, r0
	  sub       r3, r3, r5
	  b         .loc_0x124

	.loc_0x120:
	  mr        r3, r5

	.loc_0x124:
	  cmplwi    r3, 0x1
	  bgt+      .loc_0xFC
	  lfs       f0, 0x0(r4)
	  lfs       f2, 0x10(r4)
	  fsubs     f5, f1, f0
	  lfs       f6, 0x4(r4)
	  fsubs     f4, f2, f0
	  lfs       f2, 0x14(r4)
	  lfs       f7, 0xC(r4)
	  lfs       f8, 0x18(r4)
	  fdivs     f3, f5, f4
	  fmuls     f0, f3, f3
	  fsubs     f4, f6, f2
	  fadds     f1, f3, f3
	  fsubs     f2, f0, f3
	  fmsubs    f0, f1, f2, f0
	  fmadds    f1, f7, f2, f7
	  fmadds    f0, f0, f4, f6
	  fmadds    f1, f8, f2, f1
	  fmsubs    f1, f3, f7, f1
	  fnmsubs   f1, f5, f1, f0
	  blr
	*/
}
