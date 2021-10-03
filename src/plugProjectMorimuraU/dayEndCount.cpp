

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
 * Address:	80344088
 * Size:	0000E0
 */
void Morimura::TDayEndCount::__ct(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lis       r4, 0x8049
  stw       r0, 0x14(r1)
  addi      r4, r4, 0x1F4
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        0x5124
  lis       r4, 0x804E
  li        r8, 0
  subi      r4, r4, 0x4D98
  li        r0, -0x1
  stw       r4, 0x0(r31)
  addi      r5, r4, 0x10
  lis       r3, 0x8004
  li        r6, 0x4
  stw       r5, 0x18(r31)
  subi      r4, r3, 0x6460
  addi      r3, r31, 0x96
  li        r5, 0
  stw       r8, 0x80(r31)
  li        r7, 0x4
  stw       r8, 0x84(r31)
  stw       r8, 0x88(r31)
  stw       r8, 0x8C(r31)
  stw       r0, 0x90(r31)
  stb       r8, 0x94(r31)
  bl        -0x2828B8
  lis       r4, 0x8004
  addi      r3, r31, 0xA6
  subi      r4, r4, 0x6460
  li        r5, 0
  li        r6, 0x4
  li        r7, 0x4
  bl        -0x2828D4
  li        r0, 0x1
  li        r5, 0
  stb       r0, 0xC9(r31)
  li        r0, 0xFF
  lfs       f1, -0x168(r2)
  subi      r4, r13, 0x7A94
  stb       r5, 0xCA(r31)
  mr        r3, r31
  lfs       f0, -0x164(r2)
  stfs      f1, 0xCC(r31)
  stfs      f0, 0xD0(r31)
  stb       r5, -0x7A94(r13)
  stb       r0, 0x1(r4)
  stb       r5, 0x2(r4)
  stb       r0, 0x3(r4)
  stb       r5, -0x676F(r13)
  lwz       r31, 0xC(r1)
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80344168
 * Size:	0000AC
 */
void Morimura::TTestBase::__dt(void)
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
  subi      r4, r4, 0x4708
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
  bl        0xCD404
  addi      r3, r30, 0x18
  li        r4, 0
  bl        -0x3271A4
  mr        r3, r30
  li        r4, 0
  bl        0xCD3A4

.loc_0x80:
  extsh.    r0, r31
  ble-      .loc_0x90
  mr        r3, r30
  bl        -0x320140

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
 * Address:	80344214
 * Size:	0002EC
 */
void Morimura::TDayEndCount::doCreate( (JKRArchive *))
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  li        r0, 0xC8
  stmw      r27, 0xC(r1)
  mr        r30, r4
  lis       r4, 0x8049
  mr        r29, r3
  addi      r31, r4, 0x1E8
  stw       r30, 0x78(r3)
  stb       r0, -0x7AAC(r13)
  bl        0x10FD68
  lis       r4, 0x4F
  lis       r6, 0x4F55
  li        r5, 0x4752
  mr        r28, r3
  addi      r4, r4, 0x4741
  addi      r6, r6, 0x4E44
  bl        -0x34F40
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x60
  addi      r0, r28, 0x68
  stw       r0, 0x7C(r29)
  b         .loc_0x108

.loc_0x60:
  lis       r4, 0x4F
  lis       r6, 0x414C
  mr        r3, r28
  li        r5, 0x4348
  addi      r4, r4, 0x4741
  addi      r6, r6, 0x3150
  bl        -0x34F70
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x90
  addi      r0, r28, 0x68
  stw       r0, 0x7C(r29)
  b         .loc_0x108

.loc_0x90:
  lis       r4, 0x4F
  lis       r6, 0x414C
  mr        r3, r28
  li        r5, 0x4348
  addi      r4, r4, 0x4741
  addi      r6, r6, 0x3250
  bl        -0x34FA0
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0xC0
  addi      r0, r28, 0x68
  stw       r0, 0x7C(r29)
  b         .loc_0x108

.loc_0xC0:
  li        r3, 0x10
  bl        -0x320434
  cmplwi    r3, 0
  beq-      .loc_0xFC
  lis       r5, 0x804B
  lis       r4, 0x804B
  addi      r0, r5, 0x1148
  li        r5, 0
  stw       r0, 0x0(r3)
  addi      r0, r4, 0x10C4
  lfs       f0, -0x160(r2)
  stw       r5, 0x4(r3)
  stw       r0, 0x0(r3)
  stfs      f0, 0xC(r3)
  stfs      f0, 0x8(r3)

.loc_0xFC:
  stw       r3, 0x7C(r29)
  li        r0, 0x1
  stb       r0, -0x6760(r13)

.loc_0x108:
  li        r3, 0x148
  bl        -0x32047C
  mr.       r0, r3
  beq-      .loc_0x120
  bl        0xF0A80
  mr        r0, r3

.loc_0x120:
  stw       r0, 0x80(r29)
  mr        r6, r30
  addi      r4, r31, 0x18
  lis       r5, 0x2
  lwz       r3, 0x80(r29)
  bl        -0x304D24
  lwz       r3, 0x80(r29)
  lis       r4, 0x6761
  addi      r6, r4, 0x7468
  li        r5, 0
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x8C(r29)
  lwz       r0, 0x8C(r29)
  cmplwi    r0, 0
  bne-      .loc_0x17C
  addi      r3, r31, 0x24
  addi      r5, r31, 0x34
  li        r4, 0x5A
  crclr     6, 0x6
  bl        -0x319D4C

.loc_0x17C:
  lwz       r4, 0x8C(r29)
  li        r3, 0x2C
  lfs       f0, 0xD4(r4)
  stfs      f0, 0xC0(r29)
  lwz       r4, 0x8C(r29)
  lfs       f0, 0xD8(r4)
  stfs      f0, 0xC4(r29)
  bl        -0x320400
  lis       r4, 0x804E
  stw       r3, 0x88(r29)
  subi      r30, r4, 0x4F88
  li        r27, 0
  li        r28, 0

.loc_0x1B0:
  lwz       r3, 0x80(r29)
  li        r5, 0
  lwz       r6, 0x0(r30)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  lwz       r4, 0x88(r29)
  stwx      r3, r4, r28
  lwz       r3, 0x88(r29)
  lwzx      r0, r3, r28
  cmplwi    r0, 0
  bne-      .loc_0x1F8
  addi      r3, r31, 0x24
  addi      r5, r31, 0x34
  li        r4, 0x64
  crclr     6, 0x6
  bl        -0x319DC8

.loc_0x1F8:
  lwz       r3, 0x88(r29)
  li        r4, 0
  lwzx      r3, r3, r28
  lwz       r12, 0x0(r3)
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  addi      r27, r27, 0x1
  addi      r28, r28, 0x4
  cmpwi     r27, 0xB
  addi      r30, r30, 0x4
  blt+      .loc_0x1B0
  lwz       r3, 0x80(r29)
  lis       r4, 0x6364
  addi      r6, r4, 0x3130
  li        r5, 0
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  mr.       r27, r3
  bne-      .loc_0x264
  addi      r3, r31, 0x24
  addi      r5, r31, 0x34
  li        r4, 0x69
  crclr     6, 0x6
  bl        -0x319E34

.loc_0x264:
  mr        r3, r27
  li        r4, 0x4
  bl        -0x30B7C4
  lfs       f0, 0xD4(r27)
  li        r5, 0
  lfs       f1, -0x15C(r2)
  stfs      f0, 0xB8(r29)
  lfs       f0, 0xD8(r27)
  fadds     f0, f1, f0
  stfs      f0, 0xBC(r29)
  b         .loc_0x2C4

.loc_0x290:
  rlwinm    r4,r5,2,22,29
  addi      r5, r5, 0x1
  addi      r3, r4, 0x112
  add       r3, r27, r3
  add       r4, r29, r4
  lha       r0, 0x0(r3)
  sth       r0, 0xA6(r4)
  lha       r0, 0x2(r3)
  sth       r0, 0xA8(r4)
  lha       r0, 0xA6(r4)
  sth       r0, 0x96(r4)
  lha       r0, 0xA8(r4)
  sth       r0, 0x98(r4)

.loc_0x2C4:
  rlwinm    r0,r5,0,24,31
  cmplwi    r0, 0x4
  blt+      .loc_0x290
  mr        r3, r29
  bl        0xB18
  lmw       r27, 0xC(r1)
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	80344500
 * Size:	000A88
 */
void Morimura::TDayEndCount::doUpdate(void)
{
/*
.loc_0x0:
  stwu      r1, -0x120(r1)
  mflr      r0
  stw       r0, 0x124(r1)
  stfd      f31, 0x110(r1)
  psq_st    f31,0x118(r1),0,0
  stfd      f30, 0x100(r1)
  psq_st    f30,0x108(r1),0,0
  stmw      r24, 0xE0(r1)
  lbz       r0, -0x6760(r13)
  mr        r28, r3
  cmplwi    r0, 0
  beq-      .loc_0x78
  lwz       r3, 0x7C(r28)
  lfs       f1, -0x158(r2)
  lfs       f2, 0x8(r3)
  lfs       f0, -0x168(r2)
  fadds     f1, f2, f1
  stfs      f1, 0x8(r3)
  lwz       r3, 0x7C(r28)
  lfs       f1, 0x8(r3)
  fcmpo     cr0, f1, f0
  ble-      .loc_0x60
  lfs       f0, 0xC(r3)
  stfs      f0, 0x8(r3)

.loc_0x60:
  lwz       r3, 0x7C(r28)
  lfs       f0, 0x8(r3)
  lfs       f1, 0xC(r3)
  fcmpo     cr0, f0, f1
  bge-      .loc_0x78
  stfs      f1, 0x8(r3)

.loc_0x78:
  lwz       r3, 0x7C(r28)
  lbz       r0, -0x6760(r13)
  lfs       f2, -0x168(r2)
  lfs       f1, 0x8(r3)
  cmplwi    r0, 0
  lfs       f0, 0xC(r3)
  fsubs     f1, f2, f1
  fsubs     f0, f2, f0
  fdivs     f1, f1, f0
  bne-      .loc_0xB4
  lfs       f0, -0x154(r2)
  fcmpo     cr0, f1, f0
  bge-      .loc_0xB4
  li        r3, 0x1
  b         .loc_0xA64

.loc_0xB4:
  lfs       f0, -0x150(r2)
  fmuls     f2, f0, f1
  fcmpo     cr0, f2, f0
  cror      2, 0x1, 0x2
  bne-      .loc_0xD8
  mr        r3, r28
  bl        0xA34
  li        r3, 0
  b         .loc_0xA64

.loc_0xD8:
  lfs       f1, -0x14C(r2)
  lfs       f0, -0x148(r2)
  fmuls     f30, f2, f1
  fcmpo     cr0, f30, f0
  cror      2, 0x1, 0x2
  bne-      .loc_0xF4
  fmr       f30, f0

.loc_0xF4:
  lfs       f0, -0x164(r2)
  fcmpo     cr0, f30, f0
  cror      2, 0, 0x2
  bne-      .loc_0x108
  fmr       f30, f0

.loc_0x108:
  fctiwz    f0, f30
  stfd      f0, 0x30(r1)
  lwz       r31, 0x34(r1)
  cmpwi     r31, 0xA
  blt-      .loc_0x120
  li        r31, 0xA

.loc_0x120:
  lwz       r0, 0x90(r28)
  cmpw      r0, r31
  beq-      .loc_0x20C
  addi      r24, r31, 0x1
  lis       r5, 0x804E
  lis       r4, 0x8049
  lis       r3, 0x8049
  rlwinm    r6,r24,2,0,29
  subi      r0, r5, 0x4F88
  add       r25, r0, r6
  addi      r27, r4, 0x20C
  addi      r30, r3, 0x21C
  li        r29, 0
  b         .loc_0x19C

.loc_0x158:
  lwz       r3, 0x80(r28)
  li        r5, 0
  lwz       r6, 0x0(r25)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  mr.       r26, r3
  bne-      .loc_0x190
  mr        r3, r27
  mr        r5, r30
  li        r4, 0xA4
  crclr     6, 0x6
  bl        -0x31A04C

.loc_0x190:
  stb       r29, 0xB0(r26)
  addi      r25, r25, 0x4
  addi      r24, r24, 0x1

.loc_0x19C:
  cmpwi     r24, 0xB
  blt+      .loc_0x158
  stw       r31, 0x90(r28)
  lis       r4, 0x804E
  rlwinm    r0,r31,2,0,29
  li        r5, 0
  lwz       r3, 0x80(r28)
  subi      r4, r4, 0x4F88
  lwzx      r6, r4, r0
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x84(r28)
  lwz       r0, 0x84(r28)
  cmplwi    r0, 0
  bne-      .loc_0x1FC
  lis       r3, 0x8049
  lis       r5, 0x8049
  addi      r3, r3, 0x20C
  li        r4, 0xAC
  addi      r5, r5, 0x21C
  crclr     6, 0x6
  bl        -0x31A0B8

.loc_0x1FC:
  lwz       r3, 0x84(r28)
  li        r0, 0x1
  stb       r0, 0xB0(r3)
  stb       r0, 0xC8(r28)

.loc_0x20C:
  xoris     r3, r31, 0x8000
  lis       r0, 0x4330
  stw       r3, 0x34(r1)
  lfd       f1, -0x128(r2)
  stw       r0, 0x30(r1)
  lfs       f4, -0x168(r2)
  lfd       f0, 0x30(r1)
  lfs       f5, -0x7AB0(r13)
  fsubs     f3, f0, f1
  lfs       f2, -0x144(r2)
  fsubs     f1, f4, f5
  lbz       r30, -0x7AAC(r13)
  fadds     f0, f4, f5
  lfs       f31, -0x7AA4(r13)
  fsubs     f3, f30, f3
  lfs       f8, -0x7AA0(r13)
  fmuls     f5, f2, f1
  fmuls     f0, f2, f0
  fsubs     f7, f4, f3
  fcmpo     cr0, f7, f5
  bge-      .loc_0x330
  stw       r30, 0x34(r1)
  lwz       r3, 0x84(r28)
  stw       r0, 0x30(r1)
  lfd       f1, -0x120(r2)
  lfd       f0, 0x30(r1)
  lbz       r4, 0xB2(r3)
  fsubs     f0, f0, f1
  mr        r30, r4
  fdivs     f0, f0, f5
  fmuls     f0, f7, f0
  fctiwz    f0, f0
  stfd      f0, 0x38(r1)
  lwz       r5, 0x3C(r1)
  rlwinm    r0,r5,0,24,31
  cmplw     r0, r4
  ble-      .loc_0x2A4
  mr        r30, r5

.loc_0x2A4:
  fdivs     f0, f31, f5
  lfs       f1, 0xCC(r3)
  fmuls     f0, f7, f0
  fmr       f31, f1
  fcmpo     cr0, f0, f1
  ble-      .loc_0x2C0
  fmr       f31, f0

.loc_0x2C0:
  lbz       r0, 0x94(r28)
  cmplwi    r0, 0
  beq-      .loc_0x304
  lfs       f1, 0xB8(r28)
  lfs       f0, 0xD4(r3)
  lfs       f2, 0xBC(r28)
  fsubs     f3, f1, f0
  lfs       f1, 0xD8(r3)
  lwz       r12, 0x0(r3)
  fsubs     f2, f2, f1
  lfs       f0, 0xD0(r28)
  lwz       r12, 0x14(r12)
  fmuls     f1, f3, f31
  fmadds    f2, f2, f31, f0
  mtctr     r12
  bctrl     
  b         .loc_0x3D8

.loc_0x304:
  lfs       f2, 0xBC(r28)
  lfs       f1, 0xD0(r28)
  lfs       f0, 0xB8(r28)
  fadds     f1, f2, f1
  stfs      f0, 0xD4(r3)
  stfs      f1, 0xD8(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x2C(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x3D8

.loc_0x330:
  fcmpo     cr0, f7, f0
  ble-      .loc_0x3AC
  stw       r30, 0x3C(r1)
  fsubs     f3, f4, f0
  fsubs     f1, f31, f8
  lfd       f5, -0x120(r2)
  fsubs     f0, f0, f4
  stw       r0, 0x38(r1)
  lfs       f2, 0xBC(r28)
  lfd       f4, 0x38(r1)
  fdivs     f6, f1, f0
  lfs       f1, 0xD0(r28)
  lwz       r3, 0x84(r28)
  lfs       f0, 0xB8(r28)
  stfs      f0, 0xD4(r3)
  fadds     f1, f2, f1
  fsubs     f4, f4, f5
  fsubs     f0, f8, f6
  stfs      f1, 0xD8(r3)
  fdivs     f2, f4, f3
  lwz       r12, 0x0(r3)
  lwz       r12, 0x2C(r12)
  fneg      f1, f2
  fmadds    f31, f6, f7, f0
  fmadds    f0, f1, f7, f2
  fctiwz    f0, f0
  stfd      f0, 0x30(r1)
  lwz       r30, 0x34(r1)
  mtctr     r12
  bctrl     
  b         .loc_0x3D8

.loc_0x3AC:
  lfs       f2, 0xBC(r28)
  lfs       f1, 0xD0(r28)
  lwz       r3, 0x84(r28)
  lfs       f0, 0xB8(r28)
  fadds     f1, f2, f1
  stfs      f0, 0xD4(r3)
  stfs      f1, 0xD8(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x2C(r12)
  mtctr     r12
  bctrl     

.loc_0x3D8:
  lfs       f0, -0x168(r2)
  fcmpu     cr0, f0, f31
  bne-      .loc_0x43C
  lbz       r0, 0xC9(r28)
  cmplwi    r0, 0
  beq-      .loc_0x43C
  lbz       r0, 0xC8(r28)
  cmplwi    r0, 0
  beq-      .loc_0x43C
  lwz       r0, -0x67A8(r13)
  cmplwi    r0, 0
  bne-      .loc_0x424
  lis       r3, 0x8049
  lis       r5, 0x8049
  addi      r3, r3, 0x20C
  li        r4, 0xE4
  addi      r5, r5, 0x21C
  crclr     6, 0x6
  bl        -0x31A2E0

.loc_0x424:
  lwz       r3, -0x67A8(r13)
  li        r4, 0x1818
  li        r5, 0
  bl        -0xC300
  li        r0, 0
  stb       r0, 0xC8(r28)

.loc_0x43C:
  cmpwi     r31, 0
  mr        r29, r30
  blt-      .loc_0x458
  rlwinm    r0,r30,0,24,31
  cmplwi    r0, 0x64
  bgt-      .loc_0x458
  li        r29, 0x64

.loc_0x458:
  lbz       r0, -0x7AAC(r13)
  rlwinm    r3,r30,0,24,31
  li        r4, -0x1
  cmplw     r3, r0
  stw       r4, 0x28(r1)
  bge-      .loc_0x5E4
  lbz       r0, -0x6770(r13)
  cmplwi    r0, 0
  bne-      .loc_0x5E4
  cmpwi     r31, 0x3
  bgt-      .loc_0x4A4
  li        r5, 0xFF
  li        r4, 0x64
  subi      r3, r13, 0x7A94
  li        r0, 0
  stb       r5, -0x7A94(r13)
  stb       r4, 0x1(r3)
  stb       r0, 0x2(r3)
  b         .loc_0x4DC

.loc_0x4A4:
  cmpwi     r31, 0x6
  bgt-      .loc_0x4C8
  li        r4, 0xFF
  subi      r3, r13, 0x7A94
  li        r0, 0
  stb       r4, -0x7A94(r13)
  stb       r4, 0x1(r3)
  stb       r0, 0x2(r3)
  b         .loc_0x4DC

.loc_0x4C8:
  li        r0, 0xFF
  subi      r3, r13, 0x7A94
  stb       r0, -0x7A94(r13)
  stb       r0, 0x1(r3)
  stb       r0, 0x2(r3)

.loc_0x4DC:
  lis       r7, 0x4330
  rlwinm    r0,r29,0,24,31
  stw       r0, 0x3C(r1)
  subi      r3, r13, 0x7A94
  lbz       r6, -0x7A94(r13)
  li        r0, 0xFF
  stw       r7, 0x38(r1)
  addi      r4, r1, 0x1C
  lfd       f5, -0x120(r2)
  lfd       f1, 0x38(r1)
  lfs       f0, -0x140(r2)
  fsubs     f2, f1, f5
  lbz       r5, 0x1(r3)
  lbz       r3, 0x2(r3)
  lfs       f1, -0x168(r2)
  fdivs     f2, f2, f0
  stw       r6, 0x34(r1)
  lfs       f3, -0x13C(r2)
  stw       r7, 0x30(r1)
  lfd       f0, 0x30(r1)
  stw       r5, 0x4C(r1)
  fsubs     f6, f2, f1
  stw       r7, 0x48(r1)
  fsubs     f4, f0, f5
  lfd       f0, 0x48(r1)
  fsubs     f2, f1, f6
  stw       r3, 0x5C(r1)
  fsubs     f1, f0, f5
  stw       r7, 0x58(r1)
  fmuls     f3, f3, f2
  lfd       f0, 0x58(r1)
  stb       r0, 0x27(r1)
  fsubs     f0, f0, f5
  fmadds    f2, f4, f6, f3
  fmadds    f1, f1, f6, f3
  fmadds    f0, f0, f6, f3
  fctiwz    f2, f2
  fctiwz    f1, f1
  fctiwz    f0, f0
  stfd      f2, 0x40(r1)
  stfd      f1, 0x50(r1)
  lwz       r5, 0x44(r1)
  stfd      f0, 0x60(r1)
  lwz       r3, 0x54(r1)
  lwz       r0, 0x64(r1)
  stb       r5, 0x24(r1)
  stb       r3, 0x25(r1)
  stb       r0, 0x26(r1)
  lwz       r0, 0x24(r1)
  stw       r0, 0x20(r1)
  lbz       r6, 0x20(r1)
  lbz       r5, 0x21(r1)
  lbz       r3, 0x22(r1)
  lbz       r0, 0x23(r1)
  stb       r6, 0x28(r1)
  stb       r5, 0x29(r1)
  stb       r3, 0x2A(r1)
  stb       r0, 0x2B(r1)
  lwz       r0, 0x28(r1)
  stw       r0, 0x1C(r1)
  lwz       r3, 0x8C(r28)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x12C(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x62C

.loc_0x5E4:
  lwz       r0, -0x7A94(r13)
  addi      r4, r1, 0x14
  stw       r0, 0x18(r1)
  lbz       r6, 0x18(r1)
  lbz       r5, 0x19(r1)
  lbz       r3, 0x1A(r1)
  lbz       r0, 0x1B(r1)
  stb       r6, 0x28(r1)
  stb       r5, 0x29(r1)
  stb       r3, 0x2A(r1)
  stb       r0, 0x2B(r1)
  lwz       r0, 0x28(r1)
  stw       r0, 0x14(r1)
  lwz       r3, 0x8C(r28)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x12C(r12)
  mtctr     r12
  bctrl     

.loc_0x62C:
  lis       r3, 0x4330
  rlwinm    r0,r30,0,24,31
  stw       r0, 0x64(r1)
  lbz       r0, -0x7AAC(r13)
  stw       r3, 0x60(r1)
  lfd       f3, -0x120(r2)
  lfd       f0, 0x60(r1)
  stw       r0, 0x5C(r1)
  fsubs     f2, f0, f3
  lfs       f4, -0x138(r2)
  stw       r3, 0x58(r1)
  lfs       f0, -0x164(r2)
  lfd       f1, 0x58(r1)
  fmuls     f2, f4, f2
  lwz       r3, 0x84(r28)
  fsubs     f1, f1, f3
  fdivs     f2, f2, f1
  fcmpo     cr0, f2, f0
  bge-      .loc_0x6A4
  lfs       f0, -0x134(r2)
  lis       r4, 0x8050
  addi      r4, r4, 0x71A0
  fmuls     f0, f2, f0
  fctiwz    f0, f0
  stfd      f0, 0x50(r1)
  lwz       r0, 0x54(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f0, r4, r0
  fneg      f1, f0
  b         .loc_0x6C8

.loc_0x6A4:
  lfs       f0, -0x130(r2)
  lis       r4, 0x8050
  addi      r4, r4, 0x71A0
  fmuls     f0, f2, f0
  fctiwz    f0, f0
  stfd      f0, 0x48(r1)
  lwz       r0, 0x4C(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f1, r4, r0

.loc_0x6C8:
  lfs       f0, -0x164(r2)
  fcmpo     cr0, f2, f0
  bge-      .loc_0x6D8
  fneg      f2, f2

.loc_0x6D8:
  lfs       f0, -0x130(r2)
  lis       r5, 0x4330
  lha       r0, 0xA6(r28)
  lis       r4, 0x8050
  fmuls     f0, f2, f0
  lfs       f4, -0x12C(r2)
  xoris     r0, r0, 0x8000
  lha       r6, 0xA8(r28)
  stw       r0, 0x6C(r1)
  fmuls     f1, f4, f1
  fctiwz    f3, f0
  stw       r5, 0x68(r1)
  xoris     r6, r6, 0x8000
  lfd       f0, -0x128(r2)
  lfd       f2, 0x68(r1)
  addi      r4, r4, 0x71A0
  stfd      f3, 0x38(r1)
  fsubs     f2, f2, f0
  lwz       r0, 0x3C(r1)
  fsubs     f2, f2, f1
  stw       r6, 0x44(r1)
  rlwinm    r0,r0,3,18,28
  stw       r5, 0x40(r1)
  add       r4, r4, r0
  lfs       f3, 0x4(r4)
  fctiwz    f2, f2
  lfd       f5, 0x40(r1)
  fmuls     f4, f4, f3
  stw       r5, 0x88(r1)
  fsubs     f3, f5, f0
  stfd      f2, 0x70(r1)
  fsubs     f2, f3, f4
  lwz       r0, 0x74(r1)
  stw       r5, 0x78(r1)
  fctiwz    f2, f2
  sth       r0, 0x96(r28)
  stw       r5, 0xA8(r1)
  stfd      f2, 0x30(r1)
  lwz       r0, 0x34(r1)
  stw       r5, 0x98(r1)
  sth       r0, 0x98(r28)
  lha       r0, 0xAA(r28)
  lha       r4, 0xAC(r28)
  xoris     r0, r0, 0x8000
  stw       r5, 0xB8(r1)
  xoris     r4, r4, 0x8000
  stw       r0, 0x8C(r1)
  stw       r4, 0x7C(r1)
  lfd       f2, 0x88(r1)
  lfd       f3, 0x78(r1)
  fsubs     f2, f2, f0
  fsubs     f3, f3, f0
  fadds     f2, f2, f1
  fsubs     f3, f3, f4
  fctiwz    f2, f2
  fctiwz    f3, f3
  stfd      f2, 0x90(r1)
  lwz       r0, 0x94(r1)
  stfd      f3, 0x80(r1)
  lwz       r4, 0x84(r1)
  sth       r0, 0x9A(r28)
  sth       r4, 0x9C(r28)
  lha       r0, 0xAE(r28)
  lha       r4, 0xB0(r28)
  xoris     r0, r0, 0x8000
  stw       r0, 0xAC(r1)
  xoris     r0, r4, 0x8000
  stw       r0, 0x9C(r1)
  lfd       f2, 0xA8(r1)
  lfd       f3, 0x98(r1)
  fsubs     f2, f2, f0
  fsubs     f3, f3, f0
  fadds     f2, f2, f1
  fadds     f3, f3, f4
  fctiwz    f2, f2
  fctiwz    f3, f3
  stfd      f2, 0xB0(r1)
  lwz       r0, 0xB4(r1)
  stfd      f3, 0xA0(r1)
  lwz       r4, 0xA4(r1)
  sth       r0, 0x9E(r28)
  sth       r4, 0xA0(r28)
  lha       r0, 0xB4(r28)
  xoris     r0, r0, 0x8000
  stw       r0, 0xBC(r1)
  lfd       f2, 0xB8(r1)
  fsubs     f2, f2, f0
  fadds     f2, f2, f4
  fctiwz    f2, f2
  stfd      f2, 0xC0(r1)
  lwz       r6, 0xC4(r1)
  lha       r0, 0xB2(r28)
  addi      r4, r28, 0x96
  stw       r5, 0xC8(r1)
  xoris     r0, r0, 0x8000
  stw       r0, 0xCC(r1)
  lfd       f2, 0xC8(r1)
  fsubs     f0, f2, f0
  fsubs     f0, f0, f1
  fctiwz    f0, f0
  stfd      f0, 0xD0(r1)
  lwz       r0, 0xD4(r1)
  sth       r0, 0xA2(r28)
  sth       r6, 0xA4(r28)
  bl        -0x307F54
  lbz       r0, 0x94(r28)
  cmplwi    r0, 0
  beq-      .loc_0x8F4
  lbz       r3, -0x7AAB(r13)
  lis       r0, 0x4330
  stw       r0, 0xD0(r1)
  li        r26, 0
  lfd       f2, -0x120(r2)
  li        r25, 0
  stw       r3, 0xD4(r1)
  lfs       f0, 0x40(r28)
  lfd       f1, 0xD0(r1)
  fsubs     f1, f1, f2
  fmuls     f0, f1, f0
  fctiwz    f0, f0
  stfd      f0, 0xC8(r1)
  lwz       r24, 0xCC(r1)
  b         .loc_0x8E8

.loc_0x8C4:
  lwz       r3, 0x88(r28)
  mr        r4, r24
  lwzx      r3, r3, r25
  lwz       r12, 0x0(r3)
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  addi      r25, r25, 0x4
  addi      r26, r26, 0x1

.loc_0x8E8:
  lwz       r0, 0x90(r28)
  cmpw      r26, r0
  blt+      .loc_0x8C4

.loc_0x8F4:
  lfs       f2, 0xCC(r28)
  lfs       f1, 0x2434(r2)
  lfs       f0, 0x2438(r2)
  fmuls     f1, f2, f1
  lwz       r3, 0x80(r28)
  fmuls     f0, f2, f0
  stfs      f1, 0x138(r3)
  stfs      f0, 0x13C(r3)
  lbz       r0, 0xCA(r28)
  cmplwi    r0, 0
  bne-      .loc_0x92C
  lbz       r0, -0x676F(r13)
  cmplwi    r0, 0
  beq-      .loc_0x974

.loc_0x92C:
  lwz       r0, -0x7A90(r13)
  addi      r4, r1, 0x10
  stw       r0, 0x8(r1)
  lbz       r6, 0x8(r1)
  lbz       r5, 0x9(r1)
  lbz       r3, 0xA(r1)
  lbz       r0, 0xB(r1)
  stb       r6, 0xC(r1)
  stb       r5, 0xD(r1)
  stb       r3, 0xE(r1)
  stb       r0, 0xF(r1)
  lwz       r0, 0xC(r1)
  stw       r0, 0x10(r1)
  lwz       r3, 0x84(r28)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x12C(r12)
  mtctr     r12
  bctrl     

.loc_0x974:
  rlwinm    r3,r30,0,24,31
  lis       r0, 0x4330
  stw       r3, 0xD4(r1)
  lwz       r3, 0x84(r28)
  stw       r0, 0xD0(r1)
  lfd       f2, -0x120(r2)
  lfd       f1, 0xD0(r1)
  lfs       f0, 0x40(r28)
  fsubs     f1, f1, f2
  lwz       r12, 0x0(r3)
  lwz       r12, 0x24(r12)
  fmuls     f0, f1, f0
  fctiwz    f0, f0
  stfd      f0, 0xC8(r1)
  lwz       r4, 0xCC(r1)
  mtctr     r12
  bctrl     
  lfs       f0, 0xCC(r28)
  lwz       r3, 0x84(r28)
  fmuls     f0, f31, f0
  stfs      f0, 0xCC(r3)
  stfs      f0, 0xD0(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x2C(r12)
  mtctr     r12
  bctrl     
  lfs       f2, 0xC4(r28)
  lfs       f1, 0xD0(r28)
  lwz       r3, 0x8C(r28)
  lfs       f0, 0xC0(r28)
  fadds     f1, f2, f1
  stfs      f0, 0xD4(r3)
  stfs      f1, 0xD8(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x2C(r12)
  mtctr     r12
  bctrl     
  rlwinm    r3,r29,0,24,31
  lis       r0, 0x4330
  stw       r3, 0xC4(r1)
  lwz       r3, 0x8C(r28)
  stw       r0, 0xC0(r1)
  lfd       f2, -0x120(r2)
  lfd       f1, 0xC0(r1)
  lfs       f0, 0x40(r28)
  fsubs     f1, f1, f2
  lwz       r12, 0x0(r3)
  lwz       r12, 0x24(r12)
  fmuls     f0, f1, f0
  fctiwz    f0, f0
  stfd      f0, 0xB8(r1)
  lwz       r4, 0xBC(r1)
  mtctr     r12
  bctrl     
  lwz       r3, 0x80(r28)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x30(r12)
  mtctr     r12
  bctrl     
  li        r3, 0

.loc_0xA64:
  psq_l     f31,0x118(r1),0,0
  lfd       f31, 0x110(r1)
  psq_l     f30,0x108(r1),0,0
  lfd       f30, 0x100(r1)
  lmw       r24, 0xE0(r1)
  lwz       r0, 0x124(r1)
  mtlr      r0
  addi      r1, r1, 0x120
  blr
*/
}

/*
 * --INFO--
 * Address:	80344F88
 * Size:	000078
 */
void Morimura::TDayEndCount::doDraw( (Graphics &))
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
  lwz       r3, 0x7C(r3)
  lfs       f1, 0x8(r3)
  lfs       f0, 0xC(r3)
  fcmpo     cr0, f1, f0
  blt-      .loc_0x60
  addi      r3, r31, 0x190
  lwz       r12, 0x190(r31)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x80(r30)
  mr        r4, r31
  addi      r5, r31, 0x190
  lwz       r12, 0x0(r3)
  lwz       r12, 0x9C(r12)
  mtctr     r12
  bctrl     

.loc_0x60:
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
 * Address:	80345000
 * Size:	000414
 */
void Morimura::TDayEndCount::reset(void)
{
/*
.loc_0x0:
  stwu      r1, -0xA0(r1)
  mflr      r0
  stw       r0, 0xA4(r1)
  stfd      f31, 0x90(r1)
  psq_st    f31,0x98(r1),0,0
  stfd      f30, 0x80(r1)
  psq_st    f30,0x88(r1),0,0
  stfd      f29, 0x70(r1)
  psq_st    f29,0x78(r1),0,0
  stfd      f28, 0x60(r1)
  psq_st    f28,0x68(r1),0,0
  stfd      f27, 0x50(r1)
  psq_st    f27,0x58(r1),0,0
  stmw      r26, 0x38(r1)
  li        r0, 0xFF
  subi      r6, r13, 0x7A94
  stb       r0, -0x7A94(r13)
  li        r5, -0x1
  mr        r26, r3
  addi      r4, r1, 0x8
  stb       r0, 0x1(r6)
  stb       r0, 0x2(r6)
  stb       r0, 0x3(r6)
  lwz       r0, -0x7A94(r13)
  stw       r5, 0x10(r1)
  stw       r0, 0xC(r1)
  lbz       r6, 0xC(r1)
  lbz       r5, 0xD(r1)
  lbz       r3, 0xE(r1)
  lbz       r0, 0xF(r1)
  stb       r6, 0x10(r1)
  stb       r5, 0x11(r1)
  stb       r3, 0x12(r1)
  stb       r0, 0x13(r1)
  lwz       r0, 0x10(r1)
  stw       r0, 0x8(r1)
  lwz       r3, 0x8C(r26)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x12C(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x8C(r26)
  li        r4, 0
  lwz       r12, 0x0(r3)
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x80(r26)
  lis       r4, 0x6364
  addi      r6, r4, 0x3130
  li        r5, 0
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  mr.       r29, r3
  bne-      .loc_0x100
  lis       r3, 0x8049
  lis       r5, 0x8049
  addi      r3, r3, 0x20C
  li        r4, 0x167
  addi      r5, r5, 0x21C
  crclr     6, 0x6
  bl        -0x31AABC

.loc_0x100:
  lbz       r0, 0x94(r26)
  cmplwi    r0, 0
  beq-      .loc_0x148
  lfs       f0, -0x7AA8(r13)
  mr        r3, r29
  stfs      f0, 0xCC(r29)
  stfs      f0, 0xD0(r29)
  lwz       r12, 0x0(r29)
  lwz       r12, 0x2C(r12)
  mtctr     r12
  bctrl     
  mr        r3, r29
  li        r4, 0
  lwz       r12, 0x0(r29)
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x180

.loc_0x148:
  lfs       f0, -0x164(r2)
  mr        r3, r29
  stfs      f0, 0xCC(r29)
  stfs      f0, 0xD0(r29)
  lwz       r12, 0x0(r29)
  lwz       r12, 0x2C(r12)
  mtctr     r12
  bctrl     
  mr        r3, r29
  li        r4, 0
  lwz       r12, 0x0(r29)
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     

.loc_0x180:
  lis       r3, 0x804E
  lfs       f28, -0x118(r2)
  lfs       f29, -0x114(r2)
  subi      r30, r3, 0x4F88
  lfd       f30, -0x128(r2)
  li        r28, 0
  lfs       f31, -0x110(r2)
  lis       r31, 0x4330

.loc_0x1A0:
  xoris     r0, r28, 0x8000
  lwz       r3, 0x80(r26)
  stw       r0, 0x1C(r1)
  li        r5, 0
  lwz       r12, 0x0(r3)
  stw       r31, 0x18(r1)
  lwz       r12, 0x3C(r12)
  lfd       f0, 0x18(r1)
  lwz       r6, 0x0(r30)
  fsubs     f0, f0, f30
  fmuls     f0, f29, f0
  fmuls     f0, f28, f0
  fdivs     f27, f0, f31
  mtctr     r12
  bctrl     
  mr.       r27, r3
  bne-      .loc_0x200
  lis       r3, 0x8049
  lis       r5, 0x8049
  addi      r3, r3, 0x20C
  li        r4, 0x176
  addi      r5, r5, 0x21C
  crclr     6, 0x6
  bl        -0x31ABBC

.loc_0x200:
  lbz       r0, 0x94(r26)
  cmplwi    r0, 0
  beq-      .loc_0x318
  mr        r3, r27
  li        r4, 0x4
  bl        -0x30C558
  lfs       f0, -0x164(r2)
  fmr       f1, f27
  fcmpo     cr0, f27, f0
  bge-      .loc_0x22C
  fneg      f1, f27

.loc_0x22C:
  lfs       f3, -0x130(r2)
  lis       r3, 0x8050
  lfs       f0, -0x164(r2)
  addi      r4, r3, 0x71A0
  fmuls     f2, f1, f3
  lfs       f4, -0x10C(r2)
  fcmpo     cr0, f27, f0
  lfs       f1, 0xBC(r26)
  fctiwz    f0, f2
  stfd      f0, 0x18(r1)
  lwz       r0, 0x1C(r1)
  rlwinm    r0,r0,3,18,28
  add       r3, r4, r0
  lfs       f0, 0x4(r3)
  fnmsubs   f2, f4, f0, f1
  bge-      .loc_0x290
  lfs       f0, -0x134(r2)
  fmuls     f0, f27, f0
  fctiwz    f0, f0
  stfd      f0, 0x20(r1)
  lwz       r0, 0x24(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f0, r4, r0
  fneg      f1, f0
  b         .loc_0x2A8

.loc_0x290:
  fmuls     f0, f27, f3
  fctiwz    f0, f0
  stfd      f0, 0x28(r1)
  lwz       r0, 0x2C(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f1, r4, r0

.loc_0x2A8:
  lfs       f0, 0xB8(r26)
  mr        r3, r27
  fmadds    f0, f4, f1, f0
  stfs      f0, 0xD4(r27)
  stfs      f2, 0xD8(r27)
  lwz       r12, 0x0(r27)
  lwz       r12, 0x2C(r12)
  mtctr     r12
  bctrl     
  li        r0, 0x1
  mr        r3, r27
  stb       r0, 0xB0(r27)
  lfs       f1, -0x7AA8(r13)
  lfs       f0, 0xCC(r26)
  fmuls     f0, f1, f0
  stfs      f0, 0xCC(r27)
  stfs      f0, 0xD0(r27)
  lwz       r12, 0x0(r27)
  lwz       r12, 0x2C(r12)
  mtctr     r12
  bctrl     
  mr        r3, r27
  li        r4, 0
  lwz       r12, 0x0(r27)
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x37C

.loc_0x318:
  lfs       f1, 0xBC(r26)
  mr        r3, r27
  lfs       f0, 0xB8(r26)
  stfs      f0, 0xD4(r27)
  stfs      f1, 0xD8(r27)
  lwz       r12, 0x0(r27)
  lwz       r12, 0x2C(r12)
  mtctr     r12
  bctrl     
  li        r0, 0
  lfs       f0, -0x164(r2)
  stb       r0, 0xB0(r27)
  mr        r3, r27
  stfs      f0, 0xCC(r27)
  stfs      f0, 0xD0(r27)
  lwz       r12, 0x0(r27)
  lwz       r12, 0x2C(r12)
  mtctr     r12
  bctrl     
  mr        r3, r27
  li        r4, 0
  lwz       r12, 0x0(r27)
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     

.loc_0x37C:
  addi      r28, r28, 0x1
  addi      r30, r30, 0x4
  cmpwi     r28, 0xA
  blt+      .loc_0x1A0
  stw       r29, 0x84(r26)
  li        r0, 0x1
  lha       r3, 0xA6(r26)
  sth       r3, 0x96(r26)
  lha       r3, 0xA8(r26)
  sth       r3, 0x98(r26)
  lha       r3, 0xAA(r26)
  sth       r3, 0x9A(r26)
  lha       r3, 0xAC(r26)
  sth       r3, 0x9C(r26)
  lha       r3, 0xAE(r26)
  sth       r3, 0x9E(r26)
  lha       r3, 0xB0(r26)
  sth       r3, 0xA0(r26)
  lha       r3, 0xB2(r26)
  sth       r3, 0xA2(r26)
  lha       r3, 0xB4(r26)
  sth       r3, 0xA4(r26)
  stb       r0, 0xC8(r26)
  psq_l     f31,0x98(r1),0,0
  lfd       f31, 0x90(r1)
  psq_l     f30,0x88(r1),0,0
  lfd       f30, 0x80(r1)
  psq_l     f29,0x78(r1),0,0
  lfd       f29, 0x70(r1)
  psq_l     f28,0x68(r1),0,0
  lfd       f28, 0x60(r1)
  psq_l     f27,0x58(r1),0,0
  lfd       f27, 0x50(r1)
  lmw       r26, 0x38(r1)
  lwz       r0, 0xA4(r1)
  mtlr      r0
  addi      r1, r1, 0xA0
  blr
*/
}

/*
 * --INFO--
 * Address:	80345414
 * Size:	000104
 */
void Morimura::TChallengeEndCount::__ct(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lis       r4, 0x8049
  stw       r0, 0x14(r1)
  addi      r4, r4, 0x1F4
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        0x3D98
  lis       r4, 0x804E
  li        r8, 0
  subi      r4, r4, 0x4D98
  li        r0, -0x1
  stw       r4, 0x0(r31)
  addi      r5, r4, 0x10
  lis       r3, 0x8004
  li        r6, 0x4
  stw       r5, 0x18(r31)
  subi      r4, r3, 0x6460
  addi      r3, r31, 0x96
  li        r5, 0
  stw       r8, 0x80(r31)
  li        r7, 0x4
  stw       r8, 0x84(r31)
  stw       r8, 0x88(r31)
  stw       r8, 0x8C(r31)
  stw       r0, 0x90(r31)
  stb       r8, 0x94(r31)
  bl        -0x283C44
  lis       r4, 0x8004
  addi      r3, r31, 0xA6
  subi      r4, r4, 0x6460
  li        r5, 0
  li        r6, 0x4
  li        r7, 0x4
  bl        -0x283C60
  li        r9, 0x1
  lis       r3, 0x804E
  stb       r9, 0xC9(r31)
  li        r8, 0
  subi      r5, r3, 0x4E14
  lis       r3, 0x8049
  stb       r8, 0xCA(r31)
  li        r7, 0xFF
  lfs       f1, -0x168(r2)
  subi      r6, r13, 0x7A94
  lfs       f0, -0x164(r2)
  addi      r4, r5, 0x10
  stfs      f1, 0xCC(r31)
  addi      r0, r3, 0x228
  mr        r3, r31
  stfs      f0, 0xD0(r31)
  stb       r8, -0x7A94(r13)
  stb       r7, 0x1(r6)
  stb       r8, 0x2(r6)
  stb       r7, 0x3(r6)
  stb       r8, -0x676F(r13)
  stw       r5, 0x0(r31)
  stw       r4, 0x18(r31)
  stw       r0, 0x14(r31)
  stb       r9, 0xCA(r31)
  lwz       r31, 0xC(r1)
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80345518
 * Size:	0000C4
 */
void Morimura::TDayEndCount::__dt(void)
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
  beq-      .loc_0xA8
  lis       r4, 0x804E
  subi      r4, r4, 0x4D98
  stw       r4, 0x0(r30)
  addi      r0, r4, 0x10
  stw       r0, 0x18(r30)
  beq-      .loc_0x98
  lis       r4, 0x804E
  subi      r4, r4, 0x4708
  stw       r4, 0x0(r30)
  addi      r0, r4, 0x10
  stw       r0, 0x18(r30)
  beq-      .loc_0x98
  lis       r4, 0x804F
  subi      r4, r4, 0x28A8
  stw       r4, 0x0(r30)
  addi      r0, r4, 0x10
  stw       r0, 0x18(r30)
  beq-      .loc_0x98
  lis       r4, 0x804E
  subi      r4, r4, 0x7DC0
  stw       r4, 0x0(r30)
  addi      r0, r4, 0x10
  stw       r0, 0x18(r30)
  bl        0xCC03C
  addi      r3, r30, 0x18
  li        r4, 0
  bl        -0x32856C
  mr        r3, r30
  li        r4, 0
  bl        0xCBFDC

.loc_0x98:
  extsh.    r0, r31
  ble-      .loc_0xA8
  mr        r3, r30
  bl        -0x321508

.loc_0xA8:
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
 * Address:	803455DC
 * Size:	000040
 */
void Morimura::TChallengeEndCount::doCreate( (JKRArchive *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        -0x13DC
  li        r3, 0x80
  li        r0, 0
  stb       r3, -0x7AAC(r13)
  lwz       r3, 0x8C(r31)
  stb       r0, 0xB0(r3)
  lwz       r31, 0xC(r1)
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8034561C
 * Size:	00013C
 */
void Morimura::TChallengeEndCount1p::__ct(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lis       r4, 0x8049
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  addi      r31, r4, 0x1E8
  addi      r4, r31, 0xC
  stw       r30, 0x8(r1)
  mr        r30, r3
  bl        0x3B88
  lis       r4, 0x804E
  li        r8, 0
  subi      r4, r4, 0x4D98
  li        r0, -0x1
  stw       r4, 0x0(r30)
  addi      r5, r4, 0x10
  lis       r3, 0x8004
  li        r6, 0x4
  stw       r5, 0x18(r30)
  subi      r4, r3, 0x6460
  addi      r3, r30, 0x96
  li        r5, 0
  stw       r8, 0x80(r30)
  li        r7, 0x4
  stw       r8, 0x84(r30)
  stw       r8, 0x88(r30)
  stw       r8, 0x8C(r30)
  stw       r0, 0x90(r30)
  stb       r8, 0x94(r30)
  bl        -0x283E54
  lis       r4, 0x8004
  addi      r3, r30, 0xA6
  subi      r4, r4, 0x6460
  li        r5, 0
  li        r6, 0x4
  li        r7, 0x4
  bl        -0x283E70
  li        r12, 0x1
  lis       r3, 0x804E
  stb       r12, 0xC9(r30)
  li        r11, 0
  subi      r8, r3, 0x4E14
  lis       r3, 0x804E
  stb       r11, 0xCA(r30)
  subi      r5, r3, 0x4E90
  lfs       f1, -0x168(r2)
  li        r10, 0xFF
  lfs       f0, -0x164(r2)
  subi      r9, r13, 0x7A94
  stfs      f1, 0xCC(r30)
  addi      r7, r8, 0x10
  addi      r6, r31, 0x40
  addi      r4, r5, 0x10
  stfs      f0, 0xD0(r30)
  addi      r0, r31, 0x54
  mr        r3, r30
  stb       r11, -0x7A94(r13)
  stb       r10, 0x1(r9)
  stb       r11, 0x2(r9)
  stb       r10, 0x3(r9)
  stb       r11, -0x676F(r13)
  stw       r8, 0x0(r30)
  stw       r7, 0x18(r30)
  stw       r6, 0x14(r30)
  stb       r12, 0xCA(r30)
  stw       r5, 0x0(r30)
  stw       r4, 0x18(r30)
  stw       r0, 0x14(r30)
  lfs       f0, -0x7A9C(r13)
  stfs      f0, 0xCC(r30)
  lfs       f0, -0x7A98(r13)
  fneg      f0, f0
  stfs      f0, 0xD0(r30)
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
 * Address:	80345758
 * Size:	0000DC
 */
void Morimura::TChallengeEndCount::__dt(void)
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
  beq-      .loc_0xC0
  lis       r4, 0x804E
  subi      r4, r4, 0x4E14
  stw       r4, 0x0(r30)
  addi      r0, r4, 0x10
  stw       r0, 0x18(r30)
  beq-      .loc_0xB0
  lis       r4, 0x804E
  subi      r4, r4, 0x4D98
  stw       r4, 0x0(r30)
  addi      r0, r4, 0x10
  stw       r0, 0x18(r30)
  beq-      .loc_0xB0
  lis       r4, 0x804E
  subi      r4, r4, 0x4708
  stw       r4, 0x0(r30)
  addi      r0, r4, 0x10
  stw       r0, 0x18(r30)
  beq-      .loc_0xB0
  lis       r4, 0x804F
  subi      r4, r4, 0x28A8
  stw       r4, 0x0(r30)
  addi      r0, r4, 0x10
  stw       r0, 0x18(r30)
  beq-      .loc_0xB0
  lis       r4, 0x804E
  subi      r4, r4, 0x7DC0
  stw       r4, 0x0(r30)
  addi      r0, r4, 0x10
  stw       r0, 0x18(r30)
  bl        0xCBDE4
  addi      r3, r30, 0x18
  li        r4, 0
  bl        -0x3287C4
  mr        r3, r30
  li        r4, 0
  bl        0xCBD84

.loc_0xB0:
  extsh.    r0, r31
  ble-      .loc_0xC0
  mr        r3, r30
  bl        -0x321760

.loc_0xC0:
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
 * Address:	80345834
 * Size:	000034
 */
void Morimura::TChallengeEndCount1p::doUpdate(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lfs       f0, -0x7A9C(r13)
  stfs      f0, 0xCC(r3)
  lfs       f0, -0x7A98(r13)
  fneg      f0, f0
  stfs      f0, 0xD0(r3)
  bl        -0x1354
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80345868
 * Size:	00013C
 */
void Morimura::TChallengeEndCount2p::__ct(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lis       r4, 0x8049
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  addi      r31, r4, 0x1E8
  addi      r4, r31, 0xC
  stw       r30, 0x8(r1)
  mr        r30, r3
  bl        0x393C
  lis       r4, 0x804E
  li        r8, 0
  subi      r4, r4, 0x4D98
  li        r0, -0x1
  stw       r4, 0x0(r30)
  addi      r5, r4, 0x10
  lis       r3, 0x8004
  li        r6, 0x4
  stw       r5, 0x18(r30)
  subi      r4, r3, 0x6460
  addi      r3, r30, 0x96
  li        r5, 0
  stw       r8, 0x80(r30)
  li        r7, 0x4
  stw       r8, 0x84(r30)
  stw       r8, 0x88(r30)
  stw       r8, 0x8C(r30)
  stw       r0, 0x90(r30)
  stb       r8, 0x94(r30)
  bl        -0x2840A0
  lis       r4, 0x8004
  addi      r3, r30, 0xA6
  subi      r4, r4, 0x6460
  li        r5, 0
  li        r6, 0x4
  li        r7, 0x4
  bl        -0x2840BC
  li        r12, 0x1
  lis       r3, 0x804E
  stb       r12, 0xC9(r30)
  li        r11, 0
  subi      r8, r3, 0x4E14
  lis       r3, 0x804E
  stb       r11, 0xCA(r30)
  subi      r5, r3, 0x4F0C
  lfs       f1, -0x168(r2)
  li        r10, 0xFF
  lfs       f0, -0x164(r2)
  subi      r9, r13, 0x7A94
  stfs      f1, 0xCC(r30)
  addi      r7, r8, 0x10
  addi      r6, r31, 0x40
  addi      r4, r5, 0x10
  stfs      f0, 0xD0(r30)
  addi      r0, r31, 0x68
  mr        r3, r30
  stb       r11, -0x7A94(r13)
  stb       r10, 0x1(r9)
  stb       r11, 0x2(r9)
  stb       r10, 0x3(r9)
  stb       r11, -0x676F(r13)
  stw       r8, 0x0(r30)
  stw       r7, 0x18(r30)
  stw       r6, 0x14(r30)
  stb       r12, 0xCA(r30)
  stw       r5, 0x0(r30)
  stw       r4, 0x18(r30)
  stw       r0, 0x14(r30)
  lfs       f0, -0x7A9C(r13)
  stfs      f0, 0xCC(r30)
  lfs       f0, -0x7A98(r13)
  stfs      f0, 0xD0(r30)
  stb       r11, 0xC9(r30)
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
 * Address:	803459A4
 * Size:	000030
 */
void Morimura::TChallengeEndCount2p::doUpdate(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lfs       f0, -0x7A9C(r13)
  stfs      f0, 0xCC(r3)
  lfs       f0, -0x7A98(r13)
  stfs      f0, 0xD0(r3)
  bl        -0x14C0
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	803459D4
 * Size:	00048C
 */
void Morimura::TCountDownScene::doCreateObj( (JKRArchive *))
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  lis       r5, 0x8049
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  addi      r31, r5, 0x1E8
  stw       r30, 0x18(r1)
  stw       r29, 0x14(r1)
  mr        r29, r4
  stw       r28, 0x10(r1)
  mr        r28, r3
  lbz       r0, -0x676E(r13)
  cmpwi     r0, 0x1
  beq-      .loc_0x12C
  bge-      .loc_0x48
  cmpwi     r0, 0
  bge-      .loc_0x54
  b         .loc_0x46C

.loc_0x48:
  cmpwi     r0, 0x3
  bge-      .loc_0x46C
  b         .loc_0x224

.loc_0x54:
  li        r3, 0xD4
  bl        -0x321B88
  mr.       r30, r3
  beq-      .loc_0x114
  addi      r4, r31, 0xC
  bl        0x378C
  lis       r4, 0x804E
  li        r8, 0
  subi      r4, r4, 0x4D98
  li        r0, -0x1
  stw       r4, 0x0(r30)
  addi      r5, r4, 0x10
  lis       r3, 0x8004
  li        r6, 0x4
  stw       r5, 0x18(r30)
  subi      r4, r3, 0x6460
  addi      r3, r30, 0x96
  li        r5, 0
  stw       r8, 0x80(r30)
  li        r7, 0x4
  stw       r8, 0x84(r30)
  stw       r8, 0x88(r30)
  stw       r8, 0x8C(r30)
  stw       r0, 0x90(r30)
  stb       r8, 0x94(r30)
  bl        -0x284250
  lis       r4, 0x8004
  addi      r3, r30, 0xA6
  subi      r4, r4, 0x6460
  li        r5, 0
  li        r6, 0x4
  li        r7, 0x4
  bl        -0x28426C
  li        r0, 0x1
  li        r4, 0
  stb       r0, 0xC9(r30)
  li        r0, 0xFF
  lfs       f1, -0x168(r2)
  subi      r3, r13, 0x7A94
  stb       r4, 0xCA(r30)
  lfs       f0, -0x164(r2)
  stfs      f1, 0xCC(r30)
  stfs      f0, 0xD0(r30)
  stb       r4, -0x7A94(r13)
  stb       r0, 0x1(r3)
  stb       r4, 0x2(r3)
  stb       r0, 0x3(r3)
  stb       r4, -0x676F(r13)

.loc_0x114:
  mr        r3, r28
  mr        r4, r30
  mr        r5, r29
  bl        0x10C280
  stw       r30, 0x220(r28)
  b         .loc_0x46C

.loc_0x12C:
  li        r3, 0xD4
  bl        -0x321C60
  mr.       r30, r3
  beq-      .loc_0x20C
  addi      r4, r31, 0xC
  bl        0x36B4
  lis       r4, 0x804E
  li        r8, 0
  subi      r4, r4, 0x4D98
  li        r0, -0x1
  stw       r4, 0x0(r30)
  addi      r5, r4, 0x10
  lis       r3, 0x8004
  li        r6, 0x4
  stw       r5, 0x18(r30)
  subi      r4, r3, 0x6460
  addi      r3, r30, 0x96
  li        r5, 0
  stw       r8, 0x80(r30)
  li        r7, 0x4
  stw       r8, 0x84(r30)
  stw       r8, 0x88(r30)
  stw       r8, 0x8C(r30)
  stw       r0, 0x90(r30)
  stb       r8, 0x94(r30)
  bl        -0x284328
  lis       r4, 0x8004
  addi      r3, r30, 0xA6
  subi      r4, r4, 0x6460
  li        r5, 0
  li        r6, 0x4
  li        r7, 0x4
  bl        -0x284344
  li        r8, 0x1
  lis       r3, 0x804E
  stb       r8, 0xC9(r30)
  li        r7, 0
  subi      r4, r3, 0x4E14
  lfs       f1, -0x168(r2)
  stb       r7, 0xCA(r30)
  li        r6, 0xFF
  lfs       f0, -0x164(r2)
  subi      r5, r13, 0x7A94
  stfs      f1, 0xCC(r30)
  addi      r3, r4, 0x10
  addi      r0, r31, 0x40
  stfs      f0, 0xD0(r30)
  stb       r7, -0x7A94(r13)
  stb       r6, 0x1(r5)
  stb       r7, 0x2(r5)
  stb       r6, 0x3(r5)
  stb       r7, -0x676F(r13)
  stw       r4, 0x0(r30)
  stw       r3, 0x18(r30)
  stw       r0, 0x14(r30)
  stb       r8, 0xCA(r30)

.loc_0x20C:
  mr        r3, r28
  mr        r4, r30
  mr        r5, r29
  bl        0x10C188
  stw       r30, 0x220(r28)
  b         .loc_0x46C

.loc_0x224:
  li        r3, 0xD4
  bl        -0x321D58
  mr.       r30, r3
  beq-      .loc_0x334
  addi      r4, r31, 0xC
  bl        0x35BC
  lis       r4, 0x804E
  li        r8, 0
  subi      r4, r4, 0x4D98
  li        r0, -0x1
  stw       r4, 0x0(r30)
  addi      r5, r4, 0x10
  lis       r3, 0x8004
  li        r6, 0x4
  stw       r5, 0x18(r30)
  subi      r4, r3, 0x6460
  addi      r3, r30, 0x96
  li        r5, 0
  stw       r8, 0x80(r30)
  li        r7, 0x4
  stw       r8, 0x84(r30)
  stw       r8, 0x88(r30)
  stw       r8, 0x8C(r30)
  stw       r0, 0x90(r30)
  stb       r8, 0x94(r30)
  bl        -0x284420
  lis       r4, 0x8004
  addi      r3, r30, 0xA6
  subi      r4, r4, 0x6460
  li        r5, 0
  li        r6, 0x4
  li        r7, 0x4
  bl        -0x28443C
  li        r11, 0x1
  lis       r3, 0x804E
  stb       r11, 0xC9(r30)
  li        r10, 0
  subi      r7, r3, 0x4E14
  lis       r3, 0x804E
  stb       r10, 0xCA(r30)
  subi      r4, r3, 0x4E90
  lfs       f1, -0x168(r2)
  li        r9, 0xFF
  lfs       f0, -0x164(r2)
  subi      r8, r13, 0x7A94
  stfs      f1, 0xCC(r30)
  addi      r6, r7, 0x10
  addi      r5, r31, 0x40
  addi      r3, r4, 0x10
  stfs      f0, 0xD0(r30)
  addi      r0, r31, 0x54
  stb       r10, -0x7A94(r13)
  stb       r9, 0x1(r8)
  stb       r10, 0x2(r8)
  stb       r9, 0x3(r8)
  stb       r10, -0x676F(r13)
  stw       r7, 0x0(r30)
  stw       r6, 0x18(r30)
  stw       r5, 0x14(r30)
  stb       r11, 0xCA(r30)
  stw       r4, 0x0(r30)
  stw       r3, 0x18(r30)
  stw       r0, 0x14(r30)
  lfs       f0, -0x7A9C(r13)
  stfs      f0, 0xCC(r30)
  lfs       f0, -0x7A98(r13)
  fneg      f0, f0
  stfs      f0, 0xD0(r30)

.loc_0x334:
  mr        r3, r28
  mr        r4, r30
  mr        r5, r29
  bl        0x10C060
  stw       r30, 0x220(r28)
  li        r3, 0xD4
  bl        -0x321E7C
  mr.       r30, r3
  beq-      .loc_0x458
  addi      r4, r31, 0xC
  bl        0x3498
  lis       r4, 0x804E
  li        r8, 0
  subi      r4, r4, 0x4D98
  li        r0, -0x1
  stw       r4, 0x0(r30)
  addi      r5, r4, 0x10
  lis       r3, 0x8004
  li        r6, 0x4
  stw       r5, 0x18(r30)
  subi      r4, r3, 0x6460
  addi      r3, r30, 0x96
  li        r5, 0
  stw       r8, 0x80(r30)
  li        r7, 0x4
  stw       r8, 0x84(r30)
  stw       r8, 0x88(r30)
  stw       r8, 0x8C(r30)
  stw       r0, 0x90(r30)
  stb       r8, 0x94(r30)
  bl        -0x284544
  lis       r4, 0x8004
  addi      r3, r30, 0xA6
  subi      r4, r4, 0x6460
  li        r5, 0
  li        r6, 0x4
  li        r7, 0x4
  bl        -0x284560
  li        r11, 0x1
  lis       r3, 0x804E
  stb       r11, 0xC9(r30)
  li        r10, 0
  subi      r7, r3, 0x4E14
  lis       r3, 0x804E
  stb       r10, 0xCA(r30)
  subi      r4, r3, 0x4F0C
  lfs       f1, -0x168(r2)
  li        r9, 0xFF
  lfs       f0, -0x164(r2)
  subi      r8, r13, 0x7A94
  stfs      f1, 0xCC(r30)
  addi      r6, r7, 0x10
  addi      r5, r31, 0x40
  addi      r3, r4, 0x10
  stfs      f0, 0xD0(r30)
  addi      r0, r31, 0x68
  stb       r10, -0x7A94(r13)
  stb       r9, 0x1(r8)
  stb       r10, 0x2(r8)
  stb       r9, 0x3(r8)
  stb       r10, -0x676F(r13)
  stw       r7, 0x0(r30)
  stw       r6, 0x18(r30)
  stw       r5, 0x14(r30)
  stb       r11, 0xCA(r30)
  stw       r4, 0x0(r30)
  stw       r3, 0x18(r30)
  stw       r0, 0x14(r30)
  lfs       f0, -0x7A9C(r13)
  stfs      f0, 0xCC(r30)
  lfs       f0, -0x7A98(r13)
  stfs      f0, 0xD0(r30)
  stb       r10, 0xC9(r30)

.loc_0x458:
  stw       r30, 0x224(r28)
  mr        r3, r28
  mr        r5, r29
  lwz       r4, 0x224(r28)
  bl        0x10BF38

.loc_0x46C:
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
 * Address:	80345E60
 * Size:	000064
 */
void Morimura::TCountDownScene::doStart( (Screen::StartSceneArg *))
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
  bl        0x10BDEC
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x4C
  lwz       r0, 0x224(r30)
  cmplwi    r0, 0
  beq-      .loc_0x4C
  mr        r3, r0
  mr        r4, r31
  lwz       r12, 0x0(r3)
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     

.loc_0x4C:
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
 * Address:	80345EC4
 * Size:	00000C
 */
void Morimura::TCountDownScene::getResName( const
{
/*
.loc_0x0:
  lis       r3, 0x8049
  addi      r3, r3, 0x264
  blr
*/
}

/*
 * --INFO--
 * Address:	80345ED0
 * Size:	000008
 */
void Morimura::TCountDownScene::getSceneType(void)
{
/*
.loc_0x0:
  li        r3, 0x272D
  blr
*/
}

/*
 * --INFO--
 * Address:	80345ED8
 * Size:	00000C
 */
void Morimura::TCountDownScene::getOwnerID(void)
{
/*
.loc_0x0:
  lis       r3, 0x4D52
  addi      r3, r3, 0x4D52
  blr
*/
}

/*
 * --INFO--
 * Address:	80345EE4
 * Size:	000014
 */
void Morimura::TCountDownScene::getMemberID(void)
{
/*
.loc_0x0:
  lis       r4, 0x4E44
  lis       r3, 0x4441
  addi      r4, r4, 0x4344
  addi      r3, r3, 0x5945
  blr
*/
}

/*
 * --INFO--
 * Address:	80345EF8
 * Size:	000038
 */
void Morimura::TDayEndCount::doStart( (Screen::StartSceneArg const *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        0x3340
  mr        r3, r31
  bl        -0xF14
  lwz       r0, 0x14(r1)
  li        r3, 0x1
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80345F30
 * Size:	000034
 */
void Morimura::TDayEndCount::getDispMemberBase(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lbz       r0, -0x6760(r13)
  cmplwi    r0, 0
  beq-      .loc_0x20
  lwz       r3, 0x7C(r3)
  b         .loc_0x24

.loc_0x20:
  bl        0x10E058

.loc_0x24:
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80345F64
 * Size:	00000C
 */
void Morimura::TTestBase::doUpdateFadeinFinish(void)
{
/*
.loc_0x0:
  li        r0, 0x1
  stb       r0, 0x45(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	80345F70
 * Size:	0000F4
 */
void Morimura::TChallengeEndCount2p::__dt(void)
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
  beq-      .loc_0xD8
  lis       r4, 0x804E
  subi      r4, r4, 0x4F0C
  stw       r4, 0x0(r30)
  addi      r0, r4, 0x10
  stw       r0, 0x18(r30)
  beq-      .loc_0xC8
  lis       r4, 0x804E
  subi      r4, r4, 0x4E14
  stw       r4, 0x0(r30)
  addi      r0, r4, 0x10
  stw       r0, 0x18(r30)
  beq-      .loc_0xC8
  lis       r4, 0x804E
  subi      r4, r4, 0x4D98
  stw       r4, 0x0(r30)
  addi      r0, r4, 0x10
  stw       r0, 0x18(r30)
  beq-      .loc_0xC8
  lis       r4, 0x804E
  subi      r4, r4, 0x4708
  stw       r4, 0x0(r30)
  addi      r0, r4, 0x10
  stw       r0, 0x18(r30)
  beq-      .loc_0xC8
  lis       r4, 0x804F
  subi      r4, r4, 0x28A8
  stw       r4, 0x0(r30)
  addi      r0, r4, 0x10
  stw       r0, 0x18(r30)
  beq-      .loc_0xC8
  lis       r4, 0x804E
  subi      r4, r4, 0x7DC0
  stw       r4, 0x0(r30)
  addi      r0, r4, 0x10
  stw       r0, 0x18(r30)
  bl        0xCB5B4
  addi      r3, r30, 0x18
  li        r4, 0
  bl        -0x328FF4
  mr        r3, r30
  li        r4, 0
  bl        0xCB554

.loc_0xC8:
  extsh.    r0, r31
  ble-      .loc_0xD8
  mr        r3, r30
  bl        -0x321F90

.loc_0xD8:
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
 * Address:	80346064
 * Size:	0000F4
 */
void Morimura::TChallengeEndCount1p::__dt(void)
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
  beq-      .loc_0xD8
  lis       r4, 0x804E
  subi      r4, r4, 0x4E90
  stw       r4, 0x0(r30)
  addi      r0, r4, 0x10
  stw       r0, 0x18(r30)
  beq-      .loc_0xC8
  lis       r4, 0x804E
  subi      r4, r4, 0x4E14
  stw       r4, 0x0(r30)
  addi      r0, r4, 0x10
  stw       r0, 0x18(r30)
  beq-      .loc_0xC8
  lis       r4, 0x804E
  subi      r4, r4, 0x4D98
  stw       r4, 0x0(r30)
  addi      r0, r4, 0x10
  stw       r0, 0x18(r30)
  beq-      .loc_0xC8
  lis       r4, 0x804E
  subi      r4, r4, 0x4708
  stw       r4, 0x0(r30)
  addi      r0, r4, 0x10
  stw       r0, 0x18(r30)
  beq-      .loc_0xC8
  lis       r4, 0x804F
  subi      r4, r4, 0x28A8
  stw       r4, 0x0(r30)
  addi      r0, r4, 0x10
  stw       r0, 0x18(r30)
  beq-      .loc_0xC8
  lis       r4, 0x804E
  subi      r4, r4, 0x7DC0
  stw       r4, 0x0(r30)
  addi      r0, r4, 0x10
  stw       r0, 0x18(r30)
  bl        0xCB4C0
  addi      r3, r30, 0x18
  li        r4, 0
  bl        -0x3290E8
  mr        r3, r30
  li        r4, 0
  bl        0xCB460

.loc_0xC8:
  extsh.    r0, r31
  ble-      .loc_0xD8
  mr        r3, r30
  bl        -0x322084

.loc_0xD8:
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
 * Address:	80346158
 * Size:	000008
 */
void @24@Morimura::TDayEndCount::__dt(void)
{
/*
.loc_0x0:
  subi      r3, r3, 0x18
  b         -0xC44
*/
}

/*
 * --INFO--
 * Address:	80346160
 * Size:	000008
 */
void @24@Morimura::TChallengeEndCount::__dt(void)
{
/*
.loc_0x0:
  subi      r3, r3, 0x18
  b         -0xA0C
*/
}

/*
 * --INFO--
 * Address:	80346168
 * Size:	000008
 */
void @24@Morimura::TChallengeEndCount1p::__dt(void)
{
/*
.loc_0x0:
  subi      r3, r3, 0x18
  b         -0x108
*/
}

/*
 * --INFO--
 * Address:	80346170
 * Size:	000008
 */
void @24@Morimura::TChallengeEndCount2p::__dt(void)
{
/*
.loc_0x0:
  subi      r3, r3, 0x18
  b         -0x204
*/
}
