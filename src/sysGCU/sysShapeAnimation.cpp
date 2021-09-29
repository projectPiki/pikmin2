

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
 * Address:	8043DCDC
 * Size:	000080
 */
void attach__Q28SysShape8AnimInfoFP12J3DModelDataPv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  mr.       r31, r5
  stw       r30, 0x18(r1)
  mr        r30, r4
  stw       r29, 0x14(r1)
  mr        r29, r3
  bne-      .loc_0x44
  lis       r3, 0x804A
  lis       r5, 0x804A
  subi      r3, r3, 0x53A4
  li        r4, 0x40
  subi      r5, r5, 0x538C
  crclr     6, 0x6
  bl        -0x4136DC

.loc_0x44:
  mr        r3, r31
  bl        -0x3CB784
  stw       r3, 0x18(r29)
  lwz       r0, 0x18(r30)
  lwz       r4, 0x18(r29)
  rlwinm    r3,r0,0,28,31
  bl        -0x3D2610
  stw       r3, 0x1C(r29)
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
 * Address:	8043DD5C
 * Size:	000120
 */
void load__Q28SysShape7AnimMgrFP13JKRFileLoaderPcP12J3DModelDataP13JKRFileLoaderPc(void)
{
/*
.loc_0x0:
  stwu      r1, -0x440(r1)
  mflr      r0
  stw       r0, 0x444(r1)
  stmw      r26, 0x428(r1)
  mr        r28, r5
  mr        r29, r6
  mr        r30, r7
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  cmplwi    r3, 0
  bne-      .loc_0x3C
  li        r3, 0
  b         .loc_0x10C

.loc_0x3C:
  mr        r4, r3
  addi      r3, r1, 0x8
  li        r5, -0x1
  bl        -0x284AC
  li        r0, 0x1
  cmpwi     r0, 0x1
  stw       r0, 0x14(r1)
  bne-      .loc_0x64
  li        r0, 0
  stw       r0, 0x41C(r1)

.loc_0x64:
  li        r3, 0x74
  bl        -0x419F20
  mr.       r31, r3
  beq-      .loc_0xF0
  bl        -0x2CA40
  lis       r3, 0x804F
  addi      r27, r31, 0x1C
  subi      r0, r3, 0x421C
  stw       r0, 0x0(r31)
  mr        r3, r27
  bl        -0x2CA58
  lis       r3, 0x804F
  addi      r26, r27, 0x28
  subi      r0, r3, 0x422C
  stw       r0, 0x0(r27)
  mr        r3, r26
  bl        -0x2CA70
  lis       r4, 0x804B
  li        r3, 0
  subi      r4, r4, 0x59A4
  li        r0, -0x1
  stw       r4, 0x0(r26)
  stw       r3, 0x18(r26)
  stw       r3, 0x1C(r26)
  sth       r0, 0x20(r26)
  stw       r3, 0x18(r27)
  stw       r3, 0x1C(r27)
  stw       r3, 0x50(r27)
  stw       r3, 0x24(r27)
  sth       r3, 0x70(r31)
  stw       r3, 0x18(r31)
  stw       r3, 0x2C(r31)
  stw       r3, 0x28(r31)
  stw       r3, 0x24(r31)
  stw       r3, 0x20(r31)

.loc_0xF0:
  mr        r3, r31
  mr        r5, r28
  mr        r6, r29
  mr        r7, r30
  addi      r4, r1, 0x8
  bl        .loc_0x120
  mr        r3, r31

.loc_0x10C:
  lmw       r26, 0x428(r1)
  lwz       r0, 0x444(r1)
  mtlr      r0
  addi      r1, r1, 0x440
  blr       

.loc_0x120:
*/
}

/*
 * --INFO--
 * Address:	8043DE7C
 * Size:	000110
 */
void load__Q28SysShape7AnimMgrFR6StreamP12J3DModelDataP13JKRFileLoaderPc(void)
{
/*
.loc_0x0:
  stwu      r1, -0x220(r1)
  mflr      r0
  lis       r8, 0x804A
  stw       r0, 0x224(r1)
  stmw      r26, 0x208(r1)
  mr        r29, r3
  mr        r26, r5
  mr        r27, r6
  mr        r28, r7
  subi      r31, r8, 0x53C0
  bl        .loc_0x110
  lwz       r30, 0x2C(r29)
  b         .loc_0xF4

.loc_0x34:
  cmplwi    r28, 0
  beq-      .loc_0x74
  lwz       r6, 0x14(r30)
  mr        r5, r28
  addi      r3, r1, 0x8
  addi      r4, r2, 0x2598
  crclr     6, 0x6
  bl        -0x376A94
  mr        r3, r27
  addi      r4, r1, 0x8
  lwz       r12, 0x0(r27)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  mr        r29, r3
  b         .loc_0x98

.loc_0x74:
  lwz       r5, 0x14(r30)
  addi      r3, r1, 0x8
  addi      r4, r2, 0x25A0
  crclr     6, 0x6
  bl        -0x376AC8
  lwz       r3, 0x14(r30)
  mr        r4, r27
  bl        -0x41AEF4
  mr        r29, r3

.loc_0x98:
  cmplwi    r29, 0
  bne-      .loc_0xB4
  addi      r3, r31, 0x1C
  addi      r5, r31, 0x44
  li        r4, 0x77
  crclr     6, 0x6
  bl        -0x4138EC

.loc_0xB4:
  cmplwi    r29, 0
  bne-      .loc_0xD0
  addi      r3, r31, 0x1C
  addi      r5, r31, 0x34
  li        r4, 0x40
  crclr     6, 0x6
  bl        -0x413908

.loc_0xD0:
  mr        r3, r29
  bl        -0x3CB9B0
  stw       r3, 0x18(r30)
  lwz       r0, 0x18(r26)
  lwz       r4, 0x18(r30)
  rlwinm    r3,r0,0,28,31
  bl        -0x3D283C
  stw       r3, 0x1C(r30)
  lwz       r30, 0x4(r30)

.loc_0xF4:
  cmplwi    r30, 0
  bne+      .loc_0x34
  lmw       r26, 0x208(r1)
  lwz       r0, 0x224(r1)
  mtlr      r0
  addi      r1, r1, 0x220
  blr       

.loc_0x110:
*/
}

/*
 * --INFO--
 * Address:	8043DF8C
 * Size:	0000D8
 */
void read__Q28SysShape7AnimMgrFR6Stream(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stmw      r26, 0x8(r1)
  mr        r28, r4
  mr        r27, r3
  mr        r3, r28
  bl        -0x29518
  mr        r31, r3
  li        r29, 0
  b         .loc_0xBC

.loc_0x2C:
  li        r3, 0x54
  bl        -0x41A118
  mr.       r30, r3
  beq-      .loc_0x88
  bl        -0x2CC38
  lis       r3, 0x804F
  addi      r26, r30, 0x28
  subi      r0, r3, 0x422C
  stw       r0, 0x0(r30)
  mr        r3, r26
  bl        -0x2CC50
  lis       r4, 0x804B
  li        r3, 0
  subi      r4, r4, 0x59A4
  li        r0, -0x1
  stw       r4, 0x0(r26)
  stw       r3, 0x18(r26)
  stw       r3, 0x1C(r26)
  sth       r0, 0x20(r26)
  stw       r27, 0x50(r30)
  stw       r3, 0x18(r30)
  stw       r3, 0x1C(r30)
  stw       r3, 0x24(r30)

.loc_0x88:
  mr        r3, r30
  mr        r4, r28
  bl        -0x146A0
  lhz       r0, 0x70(r27)
  mr        r4, r30
  addi      r3, r27, 0x1C
  sth       r0, 0x20(r30)
  stw       r27, 0x50(r30)
  bl        -0x2CC2C
  lhz       r3, 0x70(r27)
  addi      r29, r29, 0x1
  addi      r0, r3, 0x1
  sth       r0, 0x70(r27)

.loc_0xBC:
  cmpw      r29, r31
  blt+      .loc_0x2C
  lmw       r26, 0x8(r1)
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	8043E064
 * Size:	0000F8
 */
void connectBasArc__Q28SysShape7AnimMgrFPcPcP13JKRFileLoader(void)
{
/*
.loc_0x0:
  stwu      r1, -0x220(r1)
  mflr      r0
  stw       r0, 0x224(r1)
  stmw      r27, 0x20C(r1)
  mr        r27, r4
  mr        r28, r6
  lwz       r30, 0x2C(r3)
  b         .loc_0xDC

.loc_0x20:
  cmplwi    r27, 0
  beq-      .loc_0x44
  lwz       r6, 0x14(r30)
  mr        r5, r27
  addi      r3, r1, 0x8
  addi      r4, r2, 0x2598
  crclr     6, 0x6
  bl        -0x376C68
  b         .loc_0x58

.loc_0x44:
  lwz       r5, 0x14(r30)
  addi      r3, r1, 0x8
  addi      r4, r2, 0x25A0
  crclr     6, 0x6
  bl        -0x376C80

.loc_0x58:
  addi      r31, r1, 0x8
  li        r29, 0
  b         .loc_0xA4

.loc_0x64:
  lbz       r0, 0x0(r31)
  cmpwi     r0, 0x2E
  bne-      .loc_0x9C
  addi      r5, r1, 0x8
  li        r0, 0x62
  add       r5, r5, r29
  li        r4, 0x61
  stb       r0, 0x1(r5)
  li        r3, 0x73
  li        r0, 0
  stb       r4, 0x2(r5)
  stb       r3, 0x3(r5)
  stb       r0, 0x4(r5)
  b         .loc_0xB4

.loc_0x9C:
  addi      r31, r31, 0x1
  addi      r29, r29, 0x1

.loc_0xA4:
  addi      r3, r1, 0x8
  bl        -0x3737FC
  cmplw     r29, r3
  blt+      .loc_0x64

.loc_0xB4:
  mr        r3, r28
  addi      r4, r1, 0x8
  lwz       r12, 0x0(r28)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  cmplwi    r3, 0
  beq-      .loc_0xD8
  stw       r3, 0x24(r30)

.loc_0xD8:
  lwz       r30, 0x4(r30)

.loc_0xDC:
  cmplwi    r30, 0
  bne+      .loc_0x20
  lmw       r27, 0x20C(r1)
  lwz       r0, 0x224(r1)
  mtlr      r0
  addi      r1, r1, 0x220
  blr
*/
}

/*
 * --INFO--
 * Address:	8043E15C
 * Size:	000054
 */
void registerSoundViewer__Q28SysShape7AnimMgrFPQ26PSGame16SoundCreatureMgr(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  stw       r30, 0x8(r1)
  mr        r30, r4
  lwz       r31, 0x2C(r3)
  b         .loc_0x34

.loc_0x20:
  lwz       r4, 0x18(r31)
  mr        r3, r30
  lwz       r5, 0x14(r31)
  bl        -0xFF2F0
  lwz       r31, 0x4(r31)

.loc_0x34:
  cmplwi    r31, 0
  bne+      .loc_0x20
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
 * Address:	8043E1B0
 * Size:	000028
 */
void __sinit_sysShapeAnimation_cpp(void)
{
/*
.loc_0x0:
  lis       r4, 0x8051
  li        r0, -0x1
  lfs       f0, 0x48B0(r4)
  lis       r3, 0x804F
  stw       r0, -0x6410(r13)
  stfsu     f0, -0x3410(r3)
  stfs      f0, -0x640C(r13)
  stfs      f0, 0x4(r3)
  stfs      f0, 0x8(r3)
  blr
*/
}