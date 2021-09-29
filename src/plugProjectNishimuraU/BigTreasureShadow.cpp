

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
 * Address:	802DA5C8
 * Size:	000418
 */
void __ct__Q34Game11BigTreasure20BigTreasureShadowMgrFPQ34Game11BigTreasure3Obj(void)
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  stw       r0, 0x34(r1)
  stmw      r24, 0x10(r1)
  mr        r24, r4
  mr        r28, r3
  stw       r24, 0x3C(r3)
  li        r3, 0x20
  bl        -0x2B6744
  mr.       r0, r3
  beq-      .loc_0x38
  mr        r4, r24
  bl        -0x9937C
  mr        r0, r3

.loc_0x38:
  stw       r0, 0x84(r28)
  li        r3, 0x24
  bl        -0x2B6764
  mr.       r27, r3
  beq-      .loc_0x60
  li        r4, 0x2
  bl        -0x9933C
  lis       r3, 0x804D
  subi      r0, r3, 0x2128
  stw       r0, 0x0(r27)

.loc_0x60:
  stw       r27, 0x88(r28)
  li        r3, 0x24
  bl        -0x2B678C
  mr.       r27, r3
  beq-      .loc_0x88
  li        r4, 0x2
  bl        -0x99364
  lis       r3, 0x804D
  subi      r0, r3, 0x2128
  stw       r0, 0x0(r27)

.loc_0x88:
  stw       r27, 0x8C(r28)
  lwz       r3, 0x84(r28)
  lwz       r4, 0x88(r28)
  bl        0x136DAC
  lwz       r3, 0x84(r28)
  lwz       r4, 0x8C(r28)
  bl        0x136DA0
  mr        r31, r28
  mr        r30, r28
  li        r29, 0

.loc_0xB0:
  li        r3, 0x28
  bl        -0x2B67D8
  mr.       r27, r3
  beq-      .loc_0xDC
  li        r4, 0x2
  bl        -0x993B0
  lis       r3, 0x804D
  li        r0, 0
  subi      r3, r3, 0x2148
  stw       r3, 0x0(r27)
  stw       r0, 0x24(r27)

.loc_0xDC:
  stw       r27, 0x90(r31)
  li        r3, 0x28
  bl        -0x2B6808
  mr.       r27, r3
  beq-      .loc_0x10C
  li        r4, 0x2
  bl        -0x993E0
  lis       r3, 0x804D
  li        r0, 0
  subi      r3, r3, 0x2148
  stw       r3, 0x0(r27)
  stw       r0, 0x24(r27)

.loc_0x10C:
  stw       r27, 0xA0(r31)
  li        r3, 0x28
  bl        -0x2B6838
  mr.       r27, r3
  beq-      .loc_0x13C
  li        r4, 0x2
  bl        -0x99410
  lis       r3, 0x804D
  li        r0, 0
  subi      r3, r3, 0x2148
  stw       r3, 0x0(r27)
  stw       r0, 0x24(r27)

.loc_0x13C:
  stw       r27, 0xB0(r31)
  li        r3, 0x28
  bl        -0x2B6868
  mr.       r27, r3
  beq-      .loc_0x16C
  li        r4, 0x2
  bl        -0x99440
  lis       r3, 0x804D
  li        r0, 0
  subi      r3, r3, 0x2148
  stw       r3, 0x0(r27)
  stw       r0, 0x24(r27)

.loc_0x16C:
  stw       r27, 0xC0(r31)
  li        r3, 0x24
  bl        -0x2B6898
  mr.       r27, r3
  beq-      .loc_0x194
  li        r4, 0x2
  bl        -0x99470
  lis       r3, 0x804D
  subi      r0, r3, 0x2128
  stw       r0, 0x0(r27)

.loc_0x194:
  stw       r27, 0xD0(r31)
  li        r3, 0x24
  bl        -0x2B68C0
  mr.       r27, r3
  beq-      .loc_0x1BC
  li        r4, 0x2
  bl        -0x99498
  lis       r3, 0x804D
  subi      r0, r3, 0x2128
  stw       r0, 0x0(r27)

.loc_0x1BC:
  stw       r27, 0xE0(r31)
  li        r3, 0x24
  bl        -0x2B68E8
  mr.       r27, r3
  beq-      .loc_0x1E4
  li        r4, 0x2
  bl        -0x994C0
  lis       r3, 0x804D
  subi      r0, r3, 0x2128
  stw       r0, 0x0(r27)

.loc_0x1E4:
  stw       r27, 0xF0(r31)
  lwz       r3, 0x84(r28)
  lwz       r4, 0x90(r31)
  bl        0x136C50
  lwz       r3, 0x84(r28)
  lwz       r4, 0xA0(r31)
  bl        0x136C44
  lwz       r3, 0x84(r28)
  lwz       r4, 0xB0(r31)
  bl        0x136C38
  lwz       r3, 0x84(r28)
  lwz       r4, 0xC0(r31)
  bl        0x136C2C
  lwz       r3, 0x84(r28)
  lwz       r4, 0xD0(r31)
  bl        0x136C20
  lwz       r3, 0x84(r28)
  lwz       r4, 0xE0(r31)
  bl        0x136C14
  lwz       r3, 0x84(r28)
  lwz       r4, 0xF0(r31)
  bl        0x136C08
  li        r0, 0
  addi      r29, r29, 0x1
  stw       r0, 0x44(r30)
  cmpwi     r29, 0x4
  addi      r31, r31, 0x4
  stw       r0, 0x48(r30)
  stw       r0, 0x4C(r30)
  stw       r0, 0x50(r30)
  addi      r30, r30, 0x10
  blt+      .loc_0xB0
  lis       r3, 0x804D
  mr        r27, r28
  subi      r29, r3, 0x2128
  li        r26, 0

.loc_0x274:
  li        r3, 0x24
  bl        -0x2B699C
  mr.       r30, r3
  beq-      .loc_0x290
  li        r4, 0x2
  bl        -0x99574
  stw       r29, 0x0(r30)

.loc_0x290:
  stw       r30, 0x100(r27)
  lwz       r3, 0x84(r28)
  lwz       r4, 0x100(r27)
  bl        0x136BA4
  addi      r26, r26, 0x1
  addi      r27, r27, 0x4
  cmpwi     r26, 0x4
  blt+      .loc_0x274
  mr        r31, r28
  mr        r26, r28
  li        r25, 0

.loc_0x2BC:
  mr        r27, r31
  mr        r30, r26
  li        r24, 0

.loc_0x2C8:
  li        r3, 0x24
  bl        -0x2B69F0
  mr.       r29, r3
  beq-      .loc_0x2EC
  li        r4, 0x2
  bl        -0x995C8
  lis       r3, 0x804D
  addi      r0, r3, 0x3288
  stw       r0, 0x0(r29)

.loc_0x2EC:
  stw       r29, 0x110(r27)
  lwz       r3, 0x84(r28)
  lwz       r4, 0x110(r27)
  bl        0x136B48
  cmpwi     r24, 0x2
  bge-      .loc_0x338
  li        r3, 0x24
  bl        -0x2B6A2C
  mr.       r29, r3
  beq-      .loc_0x328
  li        r4, 0x2
  bl        -0x99604
  lis       r3, 0x804D
  subi      r0, r3, 0x2128
  stw       r0, 0x0(r29)

.loc_0x328:
  stw       r29, 0x130(r30)
  lwz       r3, 0x84(r28)
  lwz       r4, 0x130(r30)
  bl        0x136B0C

.loc_0x338:
  addi      r24, r24, 0x1
  addi      r30, r30, 0x4
  cmpwi     r24, 0x4
  addi      r27, r27, 0x4
  blt+      .loc_0x2C8
  addi      r25, r25, 0x1
  addi      r26, r26, 0x8
  cmpwi     r25, 0x2
  addi      r31, r31, 0x10
  blt+      .loc_0x2BC
  lis       r3, 0x804D
  mr        r27, r28
  mr        r31, r28
  li        r24, 0
  addi      r29, r3, 0x3288

.loc_0x374:
  li        r3, 0x24
  bl        -0x2B6A9C
  mr.       r30, r3
  beq-      .loc_0x398
  li        r4, 0x2
  bl        -0x99674
  lis       r3, 0x804D
  subi      r0, r3, 0x2128
  stw       r0, 0x0(r30)

.loc_0x398:
  stw       r30, 0x168(r27)
  lwz       r3, 0x84(r28)
  lwz       r4, 0x168(r27)
  bl        0x136A9C
  li        r25, 0
  mr        r26, r31

.loc_0x3B0:
  li        r3, 0x24
  bl        -0x2B6AD8
  mr.       r30, r3
  beq-      .loc_0x3CC
  li        r4, 0x2
  bl        -0x996B0
  stw       r29, 0x0(r30)

.loc_0x3CC:
  stw       r30, 0x140(r26)
  lwz       r3, 0x84(r28)
  lwz       r4, 0x140(r26)
  bl        0x136A68
  addi      r25, r25, 0x1
  addi      r26, r26, 0x4
  cmpwi     r25, 0x5
  blt+      .loc_0x3B0
  addi      r24, r24, 0x1
  addi      r31, r31, 0x14
  cmpwi     r24, 0x2
  addi      r27, r27, 0x4
  blt+      .loc_0x374
  mr        r3, r28
  lmw       r24, 0x10(r1)
  lwz       r0, 0x34(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	802DA9E0
 * Size:	0002B4
 */
void init__Q34Game11BigTreasure20BigTreasureShadowMgrFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  lis       r4, 0x8049
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  subi      r31, r4, 0x3698
  subi      r4, r2, 0x17D8
  stw       r30, 0x18(r1)
  stw       r29, 0x14(r1)
  mr        r29, r3
  lwz       r3, 0x3C(r3)
  lwz       r30, 0x174(r3)
  mr        r3, r30
  bl        0x1645D0
  bl        0x14EE88
  stw       r3, 0x0(r29)
  mr        r3, r30
  addi      r4, r31, 0x18
  bl        0x1645BC
  lwz       r5, 0x90(r29)
  addi      r4, r31, 0x24
  stw       r3, 0x24(r5)
  mr        r3, r30
  bl        0x1645A8
  lwz       r5, 0xA0(r29)
  addi      r4, r31, 0x24
  stw       r3, 0x24(r5)
  mr        r3, r30
  bl        0x164594
  lwz       r5, 0xB0(r29)
  addi      r4, r31, 0x30
  stw       r3, 0x24(r5)
  mr        r3, r30
  bl        0x164580
  lwz       r5, 0xC0(r29)
  addi      r4, r31, 0x3C
  stw       r3, 0x24(r5)
  mr        r3, r30
  bl        0x16456C
  lwz       r5, 0x94(r29)
  addi      r4, r31, 0x48
  stw       r3, 0x24(r5)
  mr        r3, r30
  bl        0x164558
  lwz       r5, 0xA4(r29)
  addi      r4, r31, 0x48
  stw       r3, 0x24(r5)
  mr        r3, r30
  bl        0x164544
  lwz       r5, 0xB4(r29)
  addi      r4, r31, 0x54
  stw       r3, 0x24(r5)
  mr        r3, r30
  bl        0x164530
  lwz       r5, 0xC4(r29)
  addi      r4, r31, 0x60
  stw       r3, 0x24(r5)
  mr        r3, r30
  bl        0x16451C
  lwz       r5, 0x98(r29)
  addi      r4, r31, 0x6C
  stw       r3, 0x24(r5)
  mr        r3, r30
  bl        0x164508
  lwz       r5, 0xA8(r29)
  addi      r4, r31, 0x6C
  stw       r3, 0x24(r5)
  mr        r3, r30
  bl        0x1644F4
  lwz       r5, 0xB8(r29)
  addi      r4, r31, 0x78
  stw       r3, 0x24(r5)
  mr        r3, r30
  bl        0x1644E0
  lwz       r5, 0xC8(r29)
  addi      r4, r31, 0x84
  stw       r3, 0x24(r5)
  mr        r3, r30
  bl        0x1644CC
  lwz       r5, 0x9C(r29)
  addi      r4, r31, 0x90
  stw       r3, 0x24(r5)
  mr        r3, r30
  bl        0x1644B8
  lwz       r5, 0xAC(r29)
  addi      r4, r31, 0x90
  stw       r3, 0x24(r5)
  mr        r3, r30
  bl        0x1644A4
  lwz       r5, 0xBC(r29)
  addi      r4, r31, 0x9C
  stw       r3, 0x24(r5)
  mr        r3, r30
  bl        0x164490
  lwz       r5, 0xCC(r29)
  addi      r4, r31, 0xA8
  stw       r3, 0x24(r5)
  mr        r3, r30
  bl        0x16447C
  bl        0x14ED34
  stw       r3, 0x4(r29)
  mr        r3, r30
  addi      r4, r31, 0xB8
  bl        0x164468
  bl        0x14ED20
  stw       r3, 0x8(r29)
  mr        r3, r30
  addi      r4, r31, 0xC8
  bl        0x164454
  bl        0x14ED0C
  stw       r3, 0xC(r29)
  mr        r3, r30
  addi      r4, r31, 0xD4
  bl        0x164440
  bl        0x14ECF8
  stw       r3, 0x10(r29)
  mr        r3, r30
  subi      r4, r2, 0x17D0
  bl        0x16442C
  bl        0x14ECE4
  stw       r3, 0x14(r29)
  mr        r3, r30
  subi      r4, r2, 0x17C8
  bl        0x164418
  bl        0x14ECD0
  stw       r3, 0x18(r29)
  mr        r3, r30
  subi      r4, r2, 0x17C0
  bl        0x164404
  bl        0x14ECBC
  stw       r3, 0x1C(r29)
  mr        r3, r30
  subi      r4, r2, 0x17B8
  bl        0x1643F0
  bl        0x14ECA8
  stw       r3, 0x20(r29)
  mr        r3, r30
  subi      r4, r2, 0x17B0
  bl        0x1643DC
  bl        0x14EC94
  stw       r3, 0x24(r29)
  mr        r3, r30
  subi      r4, r2, 0x17A8
  bl        0x1643C8
  bl        0x14EC80
  stw       r3, 0x28(r29)
  mr        r3, r30
  addi      r4, r31, 0xE4
  bl        0x1643B4
  bl        0x14EC6C
  stw       r3, 0x2C(r29)
  mr        r3, r30
  addi      r4, r31, 0xF0
  bl        0x1643A0
  bl        0x14EC58
  stw       r3, 0x30(r29)
  mr        r3, r30
  addi      r4, r31, 0xFC
  bl        0x16438C
  bl        0x14EC44
  stw       r3, 0x34(r29)
  mr        r3, r30
  addi      r4, r31, 0x108
  bl        0x164378
  bl        0x14EC30
  stw       r3, 0x38(r29)
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
 * Address:	802DAC94
 * Size:	000008
 */
void setKosiJointPosPtr__Q34Game11BigTreasure20BigTreasureShadowMgrFP10Vector3<float>(void)
{
/*
.loc_0x0:
  stw       r4, 0x40(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	802DAC9C
 * Size:	000018
 */
void setJointPosPtr__Q34Game11BigTreasure20BigTreasureShadowMgrFiiP10Vector3<float>(void)
{
/*
.loc_0x0:
  rlwinm    r4,r4,4,0,27
  rlwinm    r0,r5,2,0,29
  add       r3, r3, r4
  add       r3, r3, r0
  stw       r6, 0x44(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	802DACB4
 * Size:	000510
 */
void update__Q34Game11BigTreasure20BigTreasureShadowMgrFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x140(r1)
  mflr      r0
  stw       r0, 0x144(r1)
  stfd      f31, 0x130(r1)
  psq_st    f31,0x138(r1),0,0
  stfd      f30, 0x120(r1)
  psq_st    f30,0x128(r1),0,0
  stfd      f29, 0x110(r1)
  psq_st    f29,0x118(r1),0,0
  stfd      f28, 0x100(r1)
  psq_st    f28,0x108(r1),0,0
  stfd      f27, 0xF0(r1)
  psq_st    f27,0xF8(r1),0,0
  stfd      f26, 0xE0(r1)
  psq_st    f26,0xE8(r1),0,0
  stfd      f25, 0xD0(r1)
  psq_st    f25,0xD8(r1),0,0
  stfd      f24, 0xC0(r1)
  psq_st    f24,0xC8(r1),0,0
  stmw      r25, 0xA4(r1)
  mr        r31, r3
  addi      r3, r1, 0x8
  lwz       r4, 0x3C(r31)
  bl        0x2204
  lfs       f3, -0x17A0(r2)
  lfs       f2, -0x179C(r2)
  fmuls     f8, f3, f3
  lfs       f6, 0x8(r1)
  fmuls     f7, f2, f2
  lfs       f5, 0xC(r1)
  lfs       f4, 0x10(r1)
  lfs       f1, -0x1798(r2)
  fadds     f0, f8, f7
  stfs      f6, 0x5C(r1)
  stfs      f5, 0x60(r1)
  fadds     f0, f8, f0
  stfs      f4, 0x64(r1)
  fcmpo     cr0, f0, f1
  stfs      f3, 0x68(r1)
  stfs      f2, 0x6C(r1)
  stfs      f3, 0x70(r1)
  ble-      .loc_0xC4
  fmadds    f0, f3, f3, f7
  fadds     f3, f8, f0
  fcmpo     cr0, f3, f1
  ble-      .loc_0xC8
  fsqrte    f0, f3
  fmuls     f3, f0, f3
  b         .loc_0xC8

.loc_0xC4:
  fmr       f3, f1

.loc_0xC8:
  lfs       f0, -0x1798(r2)
  fcmpo     cr0, f3, f0
  ble-      .loc_0x100
  lfs       f0, -0x1794(r2)
  lfs       f2, 0x68(r1)
  fdivs     f3, f0, f3
  lfs       f1, 0x6C(r1)
  lfs       f0, 0x70(r1)
  fmuls     f2, f2, f3
  fmuls     f1, f1, f3
  fmuls     f0, f0, f3
  stfs      f2, 0x68(r1)
  stfs      f1, 0x6C(r1)
  stfs      f0, 0x70(r1)

.loc_0x100:
  lwz       r4, 0x0(r31)
  lwz       r3, 0x40(r31)
  lfs       f4, 0x2C(r4)
  lfs       f3, 0x1C(r4)
  lfs       f0, 0xC(r4)
  lfs       f2, -0x1790(r2)
  stfs      f0, 0x0(r3)
  lfs       f1, -0x178C(r2)
  stfs      f3, 0x4(r3)
  lfs       f0, -0x1788(r2)
  stfs      f4, 0x8(r3)
  lwz       r3, 0x40(r31)
  lfs       f3, 0x4(r3)
  fadds     f2, f3, f2
  stfs      f2, 0x4(r3)
  lwz       r3, 0x3C(r31)
  lfs       f2, 0x2D8(r3)
  lwz       r12, 0x0(r3)
  fmuls     f31, f1, f2
  lwz       r12, 0x64(r12)
  fmuls     f30, f0, f2
  mtctr     r12
  bctrl     
  fmr       f2, f1
  lfs       f0, -0x1798(r2)
  fcmpo     cr0, f2, f0
  bge-      .loc_0x170
  fneg      f2, f2

.loc_0x170:
  lfs       f3, -0x1784(r2)
  lis       r3, 0x8050
  lfs       f0, -0x1798(r2)
  addi      r4, r3, 0x71A0
  fmuls     f2, f2, f3
  fcmpo     cr0, f1, f0
  fctiwz    f0, f2
  stfd      f0, 0x88(r1)
  lwz       r0, 0x8C(r1)
  rlwinm    r0,r0,3,18,28
  add       r3, r4, r0
  lfs       f12, 0x4(r3)
  bge-      .loc_0x1C8
  lfs       f0, -0x1780(r2)
  fmuls     f0, f1, f0
  fctiwz    f0, f0
  stfd      f0, 0x90(r1)
  lwz       r0, 0x94(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f0, r4, r0
  fneg      f2, f0
  b         .loc_0x1E0

.loc_0x1C8:
  fmuls     f0, f1, f3
  fctiwz    f0, f0
  stfd      f0, 0x98(r1)
  lwz       r0, 0x9C(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f2, r4, r0

.loc_0x1E0:
  frsp      f10, f2
  lfs       f11, -0x1798(r2)
  lfs       f9, -0x177C(r2)
  frsp      f0, f12
  lfs       f4, -0x1774(r2)
  frsp      f1, f11
  stfs      f2, 0x20(r1)
  fmuls     f7, f10, f9
  fmuls     f6, f11, f9
  lfs       f8, -0x1778(r2)
  stfs      f11, 0x24(r1)
  fmuls     f5, f12, f9
  fmuls     f2, f10, f4
  stfs      f12, 0x28(r1)
  fmuls     f3, f1, f4
  addi      r4, r1, 0x5C
  stfs      f10, 0x14(r1)
  fmuls     f4, f0, f4
  addi      r5, r1, 0x20
  stfs      f11, 0x18(r1)
  stfs      f12, 0x1C(r1)
  stfs      f11, 0x74(r1)
  stfs      f11, 0x78(r1)
  lwz       r3, 0x3C(r31)
  lfs       f0, 0x2D8(r3)
  fmuls     f0, f9, f0
  stfs      f8, 0x80(r1)
  stfs      f7, 0x20(r1)
  stfs      f0, 0x7C(r1)
  stfs      f6, 0x24(r1)
  stfs      f5, 0x28(r1)
  stfs      f2, 0x14(r1)
  stfs      f3, 0x18(r1)
  stfs      f4, 0x1C(r1)
  lwz       r3, 0x40(r31)
  lfs       f0, 0x0(r3)
  fadds     f1, f7, f0
  fadds     f0, f2, f0
  stfs      f1, 0x20(r1)
  lfs       f1, 0x4(r3)
  fadds     f2, f6, f1
  fadds     f1, f3, f1
  stfs      f2, 0x24(r1)
  lfs       f3, 0x8(r3)
  fadds     f2, f5, f3
  stfs      f0, 0x14(r1)
  fadds     f0, f4, f3
  stfs      f1, 0x18(r1)
  stfs      f2, 0x28(r1)
  stfs      f0, 0x1C(r1)
  lwz       r3, 0x88(r31)
  bl        0x1777C
  lwz       r3, 0x3C(r31)
  addi      r4, r1, 0x5C
  lfs       f1, -0x1770(r2)
  addi      r5, r1, 0x14
  lfs       f0, 0x2D8(r3)
  fmuls     f0, f1, f0
  stfs      f0, 0x7C(r1)
  lwz       r3, 0x8C(r31)
  bl        0x17758
  lfs       f24, -0x176C(r2)
  mr        r30, r31
  lfs       f25, -0x1768(r2)
  mr        r29, r31
  lfs       f26, -0x1774(r2)
  addi      r28, r1, 0x38
  lfs       f27, -0x1798(r2)
  addi      r27, r1, 0x44
  lfs       f28, -0x1764(r2)
  addi      r26, r1, 0x50
  lfs       f29, -0x1790(r2)
  li        r25, 0

.loc_0x304:
  stfs      f24, 0x74(r1)
  addi      r4, r1, 0x5C
  addi      r6, r1, 0x2C
  stfs      f25, 0x78(r1)
  stfs      f31, 0x7C(r1)
  stfs      f26, 0x80(r1)
  lwz       r3, 0x90(r30)
  lwz       r5, 0x40(r31)
  bl        0x172E0
  stfs      f27, 0x74(r1)
  mr        r6, r28
  addi      r4, r1, 0x5C
  addi      r5, r1, 0x2C
  stfs      f27, 0x78(r1)
  stfs      f31, 0x7C(r1)
  stfs      f26, 0x80(r1)
  lwz       r3, 0xA0(r30)
  bl        0x172BC
  stfs      f28, 0x74(r1)
  mr        r5, r28
  mr        r6, r27
  addi      r4, r1, 0x5C
  stfs      f29, 0x78(r1)
  stfs      f31, 0x7C(r1)
  stfs      f26, 0x80(r1)
  lwz       r3, 0xB0(r30)
  bl        0x17298
  stfs      f27, 0x74(r1)
  mr        r5, r27
  mr        r6, r26
  addi      r4, r1, 0x5C
  stfs      f27, 0x78(r1)
  stfs      f31, 0x7C(r1)
  stfs      f26, 0x80(r1)
  lwz       r3, 0xC0(r30)
  bl        0x17274
  stfs      f27, 0x74(r1)
  addi      r4, r1, 0x5C
  addi      r5, r1, 0x2C
  stfs      f27, 0x78(r1)
  stfs      f30, 0x7C(r1)
  stfs      f26, 0x80(r1)
  lwz       r3, 0xD0(r30)
  bl        0x17678
  lwz       r3, 0xE0(r30)
  mr        r5, r28
  addi      r4, r1, 0x5C
  bl        0x17668
  lwz       r3, 0xF0(r30)
  mr        r5, r27
  addi      r4, r1, 0x5C
  bl        0x17658
  lwz       r3, 0x44(r29)
  cmplwi    r3, 0
  beq-      .loc_0x400
  lfs       f0, 0x2C(r1)
  stfs      f0, 0x0(r3)
  lfs       f0, 0x30(r1)
  lwz       r3, 0x44(r29)
  stfs      f0, 0x4(r3)
  lfs       f0, 0x34(r1)
  lwz       r3, 0x44(r29)
  stfs      f0, 0x8(r3)

.loc_0x400:
  lwz       r3, 0x48(r29)
  cmplwi    r3, 0
  beq-      .loc_0x42C
  lfs       f0, 0x38(r1)
  stfs      f0, 0x0(r3)
  lfs       f0, 0x3C(r1)
  lwz       r3, 0x48(r29)
  stfs      f0, 0x4(r3)
  lfs       f0, 0x40(r1)
  lwz       r3, 0x48(r29)
  stfs      f0, 0x8(r3)

.loc_0x42C:
  lwz       r3, 0x4C(r29)
  cmplwi    r3, 0
  beq-      .loc_0x458
  lfs       f0, 0x44(r1)
  stfs      f0, 0x0(r3)
  lfs       f0, 0x48(r1)
  lwz       r3, 0x4C(r29)
  stfs      f0, 0x4(r3)
  lfs       f0, 0x4C(r1)
  lwz       r3, 0x4C(r29)
  stfs      f0, 0x8(r3)

.loc_0x458:
  lwz       r3, 0x50(r29)
  cmplwi    r3, 0
  beq-      .loc_0x484
  lfs       f0, 0x50(r1)
  stfs      f0, 0x0(r3)
  lfs       f0, 0x54(r1)
  lwz       r3, 0x50(r29)
  stfs      f0, 0x4(r3)
  lfs       f0, 0x58(r1)
  lwz       r3, 0x50(r29)
  stfs      f0, 0x8(r3)

.loc_0x484:
  addi      r25, r25, 0x1
  addi      r29, r29, 0x10
  cmpwi     r25, 0x4
  addi      r30, r30, 0x4
  blt+      .loc_0x304
  mr        r3, r31
  addi      r4, r1, 0x5C
  bl        .loc_0x510
  mr        r3, r31
  addi      r4, r1, 0x5C
  bl        0x158
  mr        r3, r31
  addi      r4, r1, 0x5C
  bl        0x494
  psq_l     f31,0x138(r1),0,0
  lfd       f31, 0x130(r1)
  psq_l     f30,0x128(r1),0,0
  lfd       f30, 0x120(r1)
  psq_l     f29,0x118(r1),0,0
  lfd       f29, 0x110(r1)
  psq_l     f28,0x108(r1),0,0
  lfd       f28, 0x100(r1)
  psq_l     f27,0xF8(r1),0,0
  lfd       f27, 0xF0(r1)
  psq_l     f26,0xE8(r1),0,0
  lfd       f26, 0xE0(r1)
  psq_l     f25,0xD8(r1),0,0
  lfd       f25, 0xD0(r1)
  psq_l     f24,0xC8(r1),0,0
  lfd       f24, 0xC0(r1)
  lmw       r25, 0xA4(r1)
  lwz       r0, 0x144(r1)
  mtlr      r0
  addi      r1, r1, 0x140
  blr       

.loc_0x510:
*/
}

/*
 * --INFO--
 * Address:	802DB1C4
 * Size:	0000F4
 */
void updateTreasureShadow__Q34Game11BigTreasure20BigTreasureShadowMgrFRQ24Game15JointShadowParm(void)
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  lfs       f3, -0x1760(r2)
  stw       r0, 0x34(r1)
  lfs       f1, -0x1798(r2)
  stw       r31, 0x2C(r1)
  lfs       f0, -0x175C(r2)
  stw       r30, 0x28(r1)
  li        r30, 0
  stw       r29, 0x24(r1)
  mr        r29, r4
  stw       r28, 0x20(r1)
  mr        r28, r3
  mr        r31, r28
  lwz       r3, 0x3C(r3)
  lfs       f2, 0x2D8(r3)
  fmuls     f2, f3, f2
  stfs      f2, 0x20(r4)
  stfs      f1, 0x18(r4)
  stfs      f1, 0x1C(r4)
  stfs      f0, 0x24(r4)

.loc_0x54:
  lwz       r3, 0x3C(r28)
  mr        r4, r30
  bl        0x2614
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0xB0
  lwz       r4, 0x100(r31)
  lwz       r0, 0xC(r4)
  cmplwi    r0, 0
  bne-      .loc_0x80
  lwz       r3, 0x84(r28)
  bl        0x1361C8

.loc_0x80:
  lwz       r3, 0x4(r31)
  mr        r4, r29
  addi      r5, r1, 0x8
  lfs       f2, 0x2C(r3)
  lfs       f1, 0x1C(r3)
  lfs       f0, 0xC(r3)
  stfs      f0, 0x8(r1)
  stfs      f1, 0xC(r1)
  stfs      f2, 0x10(r1)
  lwz       r3, 0x100(r31)
  bl        0x17470
  b         .loc_0xC4

.loc_0xB0:
  lwz       r3, 0x100(r31)
  lwz       r0, 0xC(r3)
  cmplwi    r0, 0
  beq-      .loc_0xC4
  bl        0x13634C

.loc_0xC4:
  addi      r30, r30, 0x1
  addi      r31, r31, 0x4
  cmpwi     r30, 0x4
  blt+      .loc_0x54
  lwz       r0, 0x34(r1)
  lwz       r31, 0x2C(r1)
  lwz       r30, 0x28(r1)
  lwz       r29, 0x24(r1)
  lwz       r28, 0x20(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	802DB2B8
 * Size:	000348
 */
void updateHandShadow__Q34Game11BigTreasure20BigTreasureShadowMgrFRQ24Game15JointShadowParm(void)
{
/*
.loc_0x0:
  stwu      r1, -0x140(r1)
  mflr      r0
  stw       r0, 0x144(r1)
  stfd      f31, 0x130(r1)
  psq_st    f31,0x138(r1),0,0
  stfd      f30, 0x120(r1)
  psq_st    f30,0x128(r1),0,0
  stfd      f29, 0x110(r1)
  psq_st    f29,0x118(r1),0,0
  stfd      f28, 0x100(r1)
  psq_st    f28,0x108(r1),0,0
  stfd      f27, 0xF0(r1)
  psq_st    f27,0xF8(r1),0,0
  stfd      f26, 0xE0(r1)
  psq_st    f26,0xE8(r1),0,0
  stfd      f25, 0xD0(r1)
  psq_st    f25,0xD8(r1),0,0
  stfd      f24, 0xC0(r1)
  psq_st    f24,0xC8(r1),0,0
  stfd      f23, 0xB0(r1)
  psq_st    f23,0xB8(r1),0,0
  stfd      f22, 0xA0(r1)
  psq_st    f22,0xA8(r1),0,0
  stfd      f21, 0x90(r1)
  psq_st    f21,0x98(r1),0,0
  stfd      f20, 0x80(r1)
  psq_st    f20,0x88(r1),0,0
  stfd      f19, 0x70(r1)
  psq_st    f19,0x78(r1),0,0
  stfd      f18, 0x60(r1)
  psq_st    f18,0x68(r1),0,0
  stmw      r26, 0x48(r1)
  lfs       f1, -0x1798(r2)
  mr        r26, r3
  mr        r27, r4
  lfs       f0, -0x1774(r2)
  stfs      f1, 0x18(r4)
  mr        r31, r26
  lfs       f25, -0x1758(r2)
  mr        r30, r26
  stfs      f1, 0x1C(r4)
  mr        r29, r26
  lfs       f26, -0x179C(r2)
  li        r28, 0
  stfs      f0, 0x24(r4)
  lfs       f27, -0x1754(r2)
  lfs       f28, -0x1750(r2)
  lfs       f29, -0x174C(r2)
  lfs       f30, -0x1748(r2)
  lfs       f31, -0x178C(r2)
  lfs       f18, -0x1788(r2)

.loc_0xCC:
  lwz       r3, 0x3C(r26)
  mr        r4, r27
  addi      r5, r1, 0x38
  addi      r6, r1, 0x2C
  lfs       f0, 0x2D8(r3)
  fmuls     f0, f25, f0
  stfs      f0, 0x20(r27)
  lwz       r3, 0x14(r31)
  lfs       f2, 0x2C(r3)
  lfs       f1, 0x1C(r3)
  lfs       f0, 0xC(r3)
  stfs      f0, 0x38(r1)
  stfs      f1, 0x3C(r1)
  stfs      f2, 0x40(r1)
  lwz       r3, 0x18(r31)
  lfs       f2, 0x2C(r3)
  lfs       f1, 0x1C(r3)
  lfs       f0, 0xC(r3)
  stfs      f0, 0x2C(r1)
  stfs      f1, 0x30(r1)
  stfs      f2, 0x34(r1)
  lwz       r3, 0x1C(r31)
  lfs       f2, 0x2C(r3)
  lfs       f1, 0x1C(r3)
  lfs       f0, 0xC(r3)
  stfs      f0, 0x20(r1)
  stfs      f1, 0x24(r1)
  stfs      f2, 0x28(r1)
  stfs      f0, 0x14(r1)
  stfs      f1, 0x18(r1)
  stfs      f2, 0x1C(r1)
  stfs      f0, 0x8(r1)
  stfs      f1, 0xC(r1)
  stfs      f2, 0x10(r1)
  lwz       r3, 0x110(r30)
  bl        0x17120
  lwz       r3, 0x114(r30)
  mr        r4, r27
  addi      r5, r1, 0x2C
  addi      r6, r1, 0x20
  bl        0x1710C
  lwz       r3, 0x3C(r26)
  mr        r4, r27
  lwz       r7, 0x1C(r31)
  addi      r5, r1, 0x20
  lfs       f0, 0x2D8(r3)
  addi      r6, r1, 0x14
  lfs       f24, 0x0(r7)
  fmuls     f0, f26, f0
  lfs       f23, 0x10(r7)
  lfs       f22, 0x20(r7)
  fmuls     f2, f24, f27
  lfs       f21, 0x4(r7)
  fmuls     f3, f23, f27
  lfs       f20, 0x14(r7)
  fmuls     f6, f22, f27
  lfs       f19, 0x24(r7)
  fmuls     f7, f21, f28
  fmuls     f8, f20, f28
  stfs      f0, 0x20(r27)
  fmuls     f9, f19, f28
  lfs       f0, 0x14(r1)
  lfs       f1, 0x18(r1)
  fadds     f5, f0, f2
  lfs       f0, 0x1C(r1)
  fadds     f4, f1, f3
  fadds     f3, f0, f6
  fadds     f2, f5, f7
  stfs      f5, 0x14(r1)
  fadds     f1, f4, f8
  stfs      f4, 0x18(r1)
  fadds     f0, f3, f9
  stfs      f3, 0x1C(r1)
  stfs      f2, 0x14(r1)
  stfs      f1, 0x18(r1)
  stfs      f0, 0x1C(r1)
  lwz       r3, 0x118(r30)
  bl        0x17078
  lwz       r3, 0x3C(r26)
  fmuls     f2, f24, f30
  fmuls     f3, f23, f30
  mr        r4, r27
  lfs       f0, 0x2D8(r3)
  fmuls     f6, f22, f30
  fmuls     f7, f21, f31
  fmuls     f0, f29, f0
  fmuls     f8, f20, f31
  addi      r5, r1, 0x20
  fmuls     f9, f19, f31
  addi      r6, r1, 0x8
  stfs      f0, 0x20(r27)
  lfs       f0, 0x8(r1)
  lfs       f1, 0xC(r1)
  fadds     f5, f0, f2
  lfs       f0, 0x10(r1)
  fadds     f4, f1, f3
  fadds     f3, f0, f6
  fadds     f2, f5, f7
  stfs      f5, 0x8(r1)
  fadds     f1, f4, f8
  stfs      f4, 0xC(r1)
  fadds     f0, f3, f9
  stfs      f3, 0x10(r1)
  stfs      f2, 0x8(r1)
  stfs      f1, 0xC(r1)
  stfs      f0, 0x10(r1)
  lwz       r3, 0x11C(r30)
  bl        0x17000
  lwz       r3, 0x3C(r26)
  mr        r4, r27
  addi      r5, r1, 0x2C
  lfs       f0, 0x2D8(r3)
  fmuls     f0, f18, f0
  stfs      f0, 0x20(r27)
  lwz       r3, 0x130(r29)
  bl        0x1718C
  lwz       r3, 0x134(r29)
  mr        r4, r27
  addi      r5, r1, 0x20
  bl        0x1717C
  addi      r28, r28, 0x1
  addi      r30, r30, 0x10
  cmpwi     r28, 0x2
  addi      r29, r29, 0x8
  addi      r31, r31, 0xC
  blt+      .loc_0xCC
  psq_l     f31,0x138(r1),0,0
  lfd       f31, 0x130(r1)
  psq_l     f30,0x128(r1),0,0
  lfd       f30, 0x120(r1)
  psq_l     f29,0x118(r1),0,0
  lfd       f29, 0x110(r1)
  psq_l     f28,0x108(r1),0,0
  lfd       f28, 0x100(r1)
  psq_l     f27,0xF8(r1),0,0
  lfd       f27, 0xF0(r1)
  psq_l     f26,0xE8(r1),0,0
  lfd       f26, 0xE0(r1)
  psq_l     f25,0xD8(r1),0,0
  lfd       f25, 0xD0(r1)
  psq_l     f24,0xC8(r1),0,0
  lfd       f24, 0xC0(r1)
  psq_l     f23,0xB8(r1),0,0
  lfd       f23, 0xB0(r1)
  psq_l     f22,0xA8(r1),0,0
  lfd       f22, 0xA0(r1)
  psq_l     f21,0x98(r1),0,0
  lfd       f21, 0x90(r1)
  psq_l     f20,0x88(r1),0,0
  lfd       f20, 0x80(r1)
  psq_l     f19,0x78(r1),0,0
  lfd       f19, 0x70(r1)
  psq_l     f18,0x68(r1),0,0
  lfd       f18, 0x60(r1)
  lmw       r26, 0x48(r1)
  lwz       r0, 0x144(r1)
  mtlr      r0
  addi      r1, r1, 0x140
  blr
*/
}

/*
 * --INFO--
 * Address:	802DB600
 * Size:	000544
 */
void updateAntennaShadow__Q34Game11BigTreasure20BigTreasureShadowMgrFRQ24Game15JointShadowParm(void)
{
/*
.loc_0x0:
  stwu      r1, -0x1C0(r1)
  mflr      r0
  stw       r0, 0x1C4(r1)
  stfd      f31, 0x1B0(r1)
  psq_st    f31,0x1B8(r1),0,0
  stfd      f30, 0x1A0(r1)
  psq_st    f30,0x1A8(r1),0,0
  stfd      f29, 0x190(r1)
  psq_st    f29,0x198(r1),0,0
  stfd      f28, 0x180(r1)
  psq_st    f28,0x188(r1),0,0
  stfd      f27, 0x170(r1)
  psq_st    f27,0x178(r1),0,0
  stfd      f26, 0x160(r1)
  psq_st    f26,0x168(r1),0,0
  stfd      f25, 0x150(r1)
  psq_st    f25,0x158(r1),0,0
  stfd      f24, 0x140(r1)
  psq_st    f24,0x148(r1),0,0
  stfd      f23, 0x130(r1)
  psq_st    f23,0x138(r1),0,0
  stfd      f22, 0x120(r1)
  psq_st    f22,0x128(r1),0,0
  stfd      f21, 0x110(r1)
  psq_st    f21,0x118(r1),0,0
  stfd      f20, 0x100(r1)
  psq_st    f20,0x108(r1),0,0
  stfd      f19, 0xF0(r1)
  psq_st    f19,0xF8(r1),0,0
  stfd      f18, 0xE0(r1)
  psq_st    f18,0xE8(r1),0,0
  stfd      f17, 0xD0(r1)
  psq_st    f17,0xD8(r1),0,0
  stfd      f16, 0xC0(r1)
  psq_st    f16,0xC8(r1),0,0
  stfd      f15, 0xB0(r1)
  psq_st    f15,0xB8(r1),0,0
  stfd      f14, 0xA0(r1)
  psq_st    f14,0xA8(r1),0,0
  stmw      r26, 0x88(r1)
  lfs       f20, -0x1798(r2)
  mr        r26, r3
  lfs       f0, -0x1774(r2)
  mr        r27, r4
  stfs      f20, 0x18(r4)
  mr        r31, r26
  lfs       f21, -0x178C(r2)
  mr        r30, r26
  stfs      f20, 0x1C(r4)
  mr        r29, r26
  lfs       f22, -0x1758(r2)
  li        r28, 0
  stfs      f0, 0x24(r4)
  lfs       f0, -0x179C(r2)
  lfs       f23, -0x1744(r2)
  lfs       f24, -0x175C(r2)
  lfs       f25, -0x1754(r2)
  lfs       f26, -0x1740(r2)
  lfs       f27, -0x173C(r2)
  lfs       f28, -0x1738(r2)
  lfs       f29, -0x177C(r2)
  lfs       f30, -0x1790(r2)
  lfs       f31, -0x1748(r2)
  stfd      f0, 0x78(r1)

.loc_0x100:
  lwz       r3, 0x3C(r26)
  mr        r4, r27
  addi      r5, r1, 0x68
  addi      r6, r1, 0x5C
  lfs       f0, 0x2D8(r3)
  fmuls     f0, f21, f0
  stfs      f0, 0x20(r27)
  lwz       r3, 0x2C(r31)
  lfs       f2, 0x2C(r3)
  lfs       f1, 0x1C(r3)
  lfs       f0, 0xC(r3)
  stfs      f0, 0x68(r1)
  stfs      f1, 0x6C(r1)
  stfs      f2, 0x70(r1)
  lwz       r3, 0x30(r31)
  lfs       f2, 0x2C(r3)
  lfs       f1, 0x1C(r3)
  lfs       f0, 0xC(r3)
  stfs      f0, 0x5C(r1)
  stfs      f1, 0x60(r1)
  stfs      f2, 0x64(r1)
  lwz       r3, 0x140(r30)
  bl        0x16DD8
  lwz       r3, 0x3C(r26)
  mr        r4, r27
  lwz       r7, 0x30(r31)
  addi      r5, r1, 0x5C
  lfs       f0, 0x2D8(r3)
  addi      r6, r1, 0x50
  lfs       f19, 0x0(r7)
  fmuls     f0, f22, f0
  lfs       f18, 0x10(r7)
  lfs       f17, 0x20(r7)
  fmuls     f3, f19, f23
  lfs       f16, 0x4(r7)
  fmuls     f4, f18, f23
  lfs       f15, 0x14(r7)
  fmuls     f6, f17, f23
  lfs       f14, 0x24(r7)
  fmuls     f7, f16, f20
  fmuls     f8, f15, f20
  stfs      f0, 0x20(r27)
  fmuls     f9, f14, f20
  lfs       f2, 0x5C(r1)
  lfs       f1, 0x60(r1)
  lfs       f0, 0x64(r1)
  fadds     f5, f2, f3
  fadds     f4, f1, f4
  stfs      f2, 0x50(r1)
  fadds     f3, f0, f6
  stfs      f1, 0x54(r1)
  fadds     f2, f5, f7
  fadds     f1, f4, f8
  stfs      f0, 0x58(r1)
  fadds     f0, f3, f9
  stfs      f5, 0x50(r1)
  stfs      f4, 0x54(r1)
  stfs      f3, 0x58(r1)
  stfs      f2, 0x50(r1)
  stfs      f1, 0x54(r1)
  stfs      f0, 0x58(r1)
  lwz       r3, 0x144(r30)
  bl        0x16D38
  lwz       r3, 0x3C(r26)
  fmuls     f6, f19, f23
  fmuls     f1, f18, f23
  mr        r4, r27
  lfs       f0, 0x2D8(r3)
  fmuls     f4, f17, f23
  fmuls     f2, f19, f25
  fmuls     f5, f21, f0
  fmuls     f3, f18, f25
  addi      r5, r1, 0x44
  fmuls     f0, f17, f25
  addi      r6, r1, 0x38
  stfs      f5, 0x20(r27)
  fmuls     f11, f16, f24
  lfs       f10, 0x5C(r1)
  fmuls     f12, f15, f24
  lfs       f9, 0x60(r1)
  fmuls     f13, f14, f24
  lfs       f8, 0x64(r1)
  fadds     f7, f10, f6
  stfs      f10, 0x44(r1)
  fadds     f6, f9, f1
  fadds     f5, f8, f4
  stfs      f9, 0x48(r1)
  fmuls     f1, f16, f20
  fadds     f4, f10, f2
  stfs      f8, 0x4C(r1)
  fmuls     f2, f15, f20
  fadds     f3, f9, f3
  stfs      f10, 0x38(r1)
  fmuls     f10, f14, f20
  fadds     f0, f8, f0
  stfs      f9, 0x3C(r1)
  fadds     f9, f7, f11
  stfs      f8, 0x40(r1)
  fadds     f11, f6, f12
  fadds     f8, f5, f13
  stfs      f7, 0x44(r1)
  fadds     f7, f4, f1
  fadds     f2, f3, f2
  stfs      f6, 0x48(r1)
  fadds     f1, f0, f10
  stfs      f5, 0x4C(r1)
  stfs      f4, 0x38(r1)
  stfs      f3, 0x3C(r1)
  stfs      f0, 0x40(r1)
  stfs      f9, 0x44(r1)
  stfs      f11, 0x48(r1)
  stfs      f8, 0x4C(r1)
  stfs      f7, 0x38(r1)
  stfs      f2, 0x3C(r1)
  stfs      f1, 0x40(r1)
  lwz       r3, 0x148(r30)
  bl        0x16C60
  fmuls     f3, f19, f26
  lfs       f2, 0x5C(r1)
  lfs       f11, 0x60(r1)
  fmuls     f4, f18, f26
  lfs       f12, 0x64(r1)
  fmuls     f8, f17, f26
  fmuls     f0, f19, f28
  stfs      f2, 0x2C(r1)
  fmuls     f1, f18, f28
  mr        r4, r27
  fmuls     f9, f17, f28
  stfs      f11, 0x30(r1)
  fadds     f3, f2, f3
  stfs      f12, 0x34(r1)
  fmuls     f6, f16, f27
  addi      r5, r1, 0x2C
  fadds     f5, f11, f4
  stfs      f2, 0x20(r1)
  fmuls     f7, f15, f27
  stfs      f11, 0x24(r1)
  fadds     f4, f12, f8
  addi      r6, r1, 0x20
  fmuls     f8, f14, f27
  stfs      f12, 0x28(r1)
  fadds     f2, f2, f0
  stfs      f3, 0x2C(r1)
  fmuls     f10, f16, f20
  fadds     f1, f11, f1
  stfs      f5, 0x30(r1)
  fmuls     f11, f15, f20
  fadds     f0, f12, f9
  stfs      f4, 0x34(r1)
  fmuls     f9, f14, f20
  fadds     f3, f3, f6
  stfs      f2, 0x20(r1)
  fadds     f5, f5, f7
  fadds     f4, f4, f8
  stfs      f1, 0x24(r1)
  fadds     f2, f2, f10
  fadds     f1, f1, f11
  stfs      f0, 0x28(r1)
  fadds     f0, f0, f9
  stfs      f3, 0x2C(r1)
  stfs      f5, 0x30(r1)
  stfs      f4, 0x34(r1)
  stfs      f2, 0x20(r1)
  stfs      f1, 0x24(r1)
  stfs      f0, 0x28(r1)
  lwz       r3, 0x14C(r30)
  bl        0x16B98
  fmuls     f3, f19, f29
  lfs       f2, 0x5C(r1)
  lfs       f1, 0x60(r1)
  fmuls     f4, f18, f29
  lfs       f0, 0x64(r1)
  fmuls     f6, f17, f29
  fmuls     f9, f19, f31
  stfs      f2, 0x14(r1)
  fmuls     f10, f18, f31
  mr        r4, r27
  fmuls     f11, f17, f31
  stfs      f1, 0x18(r1)
  fadds     f5, f2, f3
  stfs      f0, 0x1C(r1)
  fmuls     f7, f16, f30
  addi      r5, r1, 0x14
  fadds     f4, f1, f4
  stfs      f2, 0x8(r1)
  fmuls     f8, f15, f30
  stfs      f1, 0xC(r1)
  fadds     f3, f0, f6
  addi      r6, r1, 0x8
  fmuls     f6, f14, f30
  stfs      f0, 0x10(r1)
  fadds     f2, f2, f9
  stfs      f5, 0x14(r1)
  fmuls     f9, f16, f20
  fadds     f1, f1, f10
  stfs      f4, 0x18(r1)
  fmuls     f10, f15, f20
  fadds     f0, f0, f11
  stfs      f3, 0x1C(r1)
  fmuls     f11, f14, f20
  fadds     f5, f5, f7
  stfs      f2, 0x8(r1)
  fadds     f4, f4, f8
  fadds     f3, f3, f6
  stfs      f1, 0xC(r1)
  fadds     f2, f2, f9
  fadds     f1, f1, f10
  stfs      f0, 0x10(r1)
  fadds     f0, f0, f11
  stfs      f5, 0x14(r1)
  stfs      f4, 0x18(r1)
  stfs      f3, 0x1C(r1)
  stfs      f2, 0x8(r1)
  stfs      f1, 0xC(r1)
  stfs      f0, 0x10(r1)
  lwz       r3, 0x150(r30)
  bl        0x16AD0
  lwz       r3, 0x3C(r26)
  mr        r4, r27
  lfd       f0, 0x78(r1)
  addi      r5, r1, 0x5C
  lfs       f1, 0x2D8(r3)
  fmuls     f0, f0, f1
  stfs      f0, 0x20(r27)
  lwz       r3, 0x168(r29)
  bl        0x16C58
  addi      r28, r28, 0x1
  addi      r30, r30, 0x14
  cmpwi     r28, 0x2
  addi      r29, r29, 0x4
  addi      r31, r31, 0x8
  blt+      .loc_0x100
  psq_l     f31,0x1B8(r1),0,0
  lfd       f31, 0x1B0(r1)
  psq_l     f30,0x1A8(r1),0,0
  lfd       f30, 0x1A0(r1)
  psq_l     f29,0x198(r1),0,0
  lfd       f29, 0x190(r1)
  psq_l     f28,0x188(r1),0,0
  lfd       f28, 0x180(r1)
  psq_l     f27,0x178(r1),0,0
  lfd       f27, 0x170(r1)
  psq_l     f26,0x168(r1),0,0
  lfd       f26, 0x160(r1)
  psq_l     f25,0x158(r1),0,0
  lfd       f25, 0x150(r1)
  psq_l     f24,0x148(r1),0,0
  lfd       f24, 0x140(r1)
  psq_l     f23,0x138(r1),0,0
  lfd       f23, 0x130(r1)
  psq_l     f22,0x128(r1),0,0
  lfd       f22, 0x120(r1)
  psq_l     f21,0x118(r1),0,0
  lfd       f21, 0x110(r1)
  psq_l     f20,0x108(r1),0,0
  lfd       f20, 0x100(r1)
  psq_l     f19,0xF8(r1),0,0
  lfd       f19, 0xF0(r1)
  psq_l     f18,0xE8(r1),0,0
  lfd       f18, 0xE0(r1)
  psq_l     f17,0xD8(r1),0,0
  lfd       f17, 0xD0(r1)
  psq_l     f16,0xC8(r1),0,0
  lfd       f16, 0xC0(r1)
  psq_l     f15,0xB8(r1),0,0
  lfd       f15, 0xB0(r1)
  psq_l     f14,0xA8(r1),0,0
  lfd       f14, 0xA0(r1)
  lmw       r26, 0x88(r1)
  lwz       r0, 0x1C4(r1)
  mtlr      r0
  addi      r1, r1, 0x1C0
  blr
*/
}

/*
 * --INFO--
 * Address:	802DBB44
 * Size:	000070
 */
void __dt__Q24Game17TubeShadowPosNodeFv(void)
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
  beq-      .loc_0x54
  lis       r4, 0x804D
  addi      r0, r4, 0x3288
  stw       r0, 0x0(r30)
  beq-      .loc_0x44
  lis       r5, 0x804C
  li        r4, 0
  addi      r0, r5, 0x1A34
  stw       r0, 0x0(r30)
  bl        0x135A04

.loc_0x44:
  extsh.    r0, r31
  ble-      .loc_0x54
  mr        r3, r30
  bl        -0x2B7AE0

.loc_0x54:
  lwz       r0, 0x14(r1)
  mr        r3, r30
  lwz       r31, 0xC(r1)
  lwz       r30, 0x8(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}