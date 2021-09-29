

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
 * Address:	8029EF0C
 * Size:	00005C
 */
void __ct__Q34Game4Cave13RandPlantUnitFPQ34Game4Cave16MapUnitGenerator(void)
{
/*
.loc_0x0:
  stw       r4, 0x0(r3)
  li        r0, 0
  stw       r0, 0x4(r3)
  stw       r0, 0x8(r3)
  lwz       r4, 0x0(r3)
  lwz       r4, 0x14(r4)
  lwz       r6, 0x10(r4)
  b         .loc_0x50

.loc_0x20:
  lwz       r4, 0x18(r6)
  lwz       r5, 0x0(r4)
  cmplwi    r5, 0
  beq-      .loc_0x4C
  lwz       r0, 0x20(r5)
  cmpwi     r0, 0x6
  bne-      .loc_0x4C
  lwz       r4, 0x8(r3)
  lwz       r0, 0x1C(r5)
  add       r0, r4, r0
  stw       r0, 0x8(r3)

.loc_0x4C:
  lwz       r6, 0x4(r6)

.loc_0x50:
  cmplwi    r6, 0
  bne+      .loc_0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	8029EF68
 * Size:	0000DC
 */
void setPlantSlot__Q34Game4Cave13RandPlantUnitFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  stw       r0, 0x34(r1)
  stmw      r27, 0x1C(r1)
  mr        r27, r3
  lwz       r3, 0x4(r3)
  lwz       r0, 0x8(r27)
  cmpw      r3, r0
  bge-      .loc_0xC8
  li        r30, 0

.loc_0x28:
  li        r0, 0
  mr        r3, r27
  stw       r0, 0x8(r1)
  addi      r4, r1, 0x8
  bl        .loc_0xDC
  lwz       r4, 0x8(r1)
  mr        r29, r3
  mr        r3, r27
  bl        0x1C8
  mr.       r28, r3
  beq-      .loc_0xC8
  cmplwi    r29, 0
  beq-      .loc_0xC8
  li        r3, 0x38
  bl        -0x27B124
  mr.       r31, r3
  beq-      .loc_0x80
  lwz       r5, 0x8(r1)
  mr        r4, r28
  li        r6, 0x1
  bl        -0x5AE18
  mr        r31, r3

.loc_0x80:
  mr        r3, r31
  mr        r4, r29
  bl        -0x5AD94
  lwz       r3, 0x1C(r29)
  mr        r4, r31
  bl        0x17240C
  lwz       r3, 0x4(r27)
  addi      r0, r3, 0x1
  stw       r0, 0x4(r27)
  lwz       r3, 0x4(r27)
  lwz       r0, 0x8(r27)
  cmpw      r3, r0
  blt-      .loc_0xBC
  b         .loc_0xC8
  b         .loc_0xC8

.loc_0xBC:
  addi      r30, r30, 0x1
  cmpwi     r30, 0x64
  blt+      .loc_0x28

.loc_0xC8:
  lmw       r27, 0x1C(r1)
  lwz       r0, 0x34(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr       

.loc_0xDC:
*/
}

/*
 * --INFO--
 * Address:	8029F044
 * Size:	000134
 */
void getPlantSetMapNode__Q34Game4Cave13RandPlantUnitFPPQ34Game4Cave7BaseGen(void)
{
/*
.loc_0x0:
  stwu      r1, -0x1050(r1)
  mflr      r0
  stw       r0, 0x1054(r1)
  stmw      r23, 0x102C(r1)
  mr        r23, r3
  mr        r31, r4
  addi      r28, r1, 0x808
  addi      r27, r1, 0x8
  li        r26, 0
  lwz       r3, 0x0(r3)
  lwz       r3, 0x28(r3)
  lwz       r25, 0x10(r3)
  b         .loc_0xA4

.loc_0x34:
  lwz       r3, 0x18(r25)
  bl        -0x5C4BC
  cmplwi    r3, 0
  beq-      .loc_0xA0
  lwz       r24, 0x10(r3)
  mr        r30, r28
  mr        r29, r27
  b         .loc_0x98

.loc_0x54:
  lwz       r0, 0x18(r24)
  cmpwi     r0, 0x6
  bne-      .loc_0x94
  mr        r3, r23
  mr        r4, r25
  mr        r5, r24
  bl        0x130
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x94
  stw       r25, 0x0(r30)
  addi      r26, r26, 0x1
  addi      r30, r30, 0x4
  addi      r28, r28, 0x4
  stw       r24, 0x0(r29)
  addi      r29, r29, 0x4
  addi      r27, r27, 0x4

.loc_0x94:
  lwz       r24, 0x4(r24)

.loc_0x98:
  cmplwi    r24, 0
  bne+      .loc_0x54

.loc_0xA0:
  lwz       r25, 0x4(r25)

.loc_0xA4:
  cmplwi    r25, 0
  bne+      .loc_0x34
  cmpwi     r26, 0
  beq-      .loc_0x11C
  bl        -0x1D5B58
  lis       r5, 0x4330
  xoris     r0, r3, 0x8000
  stw       r0, 0x100C(r1)
  xoris     r0, r26, 0x8000
  lfd       f2, -0x2660(r2)
  addi      r4, r1, 0x8
  stw       r5, 0x1008(r1)
  addi      r3, r1, 0x808
  lfs       f0, -0x2668(r2)
  lfd       f1, 0x1008(r1)
  stw       r0, 0x1014(r1)
  fsubs     f1, f1, f2
  stw       r5, 0x1010(r1)
  fdivs     f1, f1, f0
  lfd       f0, 0x1010(r1)
  fsubs     f0, f0, f2
  fmuls     f0, f0, f1
  fctiwz    f0, f0
  stfd      f0, 0x1018(r1)
  lwz       r0, 0x101C(r1)
  rlwinm    r5,r0,2,0,29
  lwzx      r0, r4, r5
  lwzx      r3, r3, r5
  stw       r0, 0x0(r31)
  b         .loc_0x120

.loc_0x11C:
  li        r3, 0

.loc_0x120:
  lmw       r23, 0x102C(r1)
  lwz       r0, 0x1054(r1)
  mtlr      r0
  addi      r1, r1, 0x1050
  blr
*/
}

/*
 * --INFO--
 * Address:	8029F178
 * Size:	000068
 */
void getPlantUnit__Q34Game4Cave13RandPlantUnitFPQ34Game4Cave7BaseGen(void)
{
/*
.loc_0x0:
  cmplwi    r4, 0
  li        r6, 0
  beq-      .loc_0x60
  lwz       r4, 0x0(r3)
  lwz       r4, 0x14(r4)
  lwz       r7, 0x10(r4)
  b         .loc_0x58

.loc_0x1C:
  lwz       r5, 0x18(r7)
  lwz       r4, 0x0(r5)
  cmplwi    r4, 0
  beq-      .loc_0x54
  lwz       r0, 0x20(r4)
  cmpwi     r0, 0x6
  bne-      .loc_0x54
  lwz       r4, 0x1C(r4)
  lwz       r0, 0x4(r3)
  add       r6, r6, r4
  cmpw      r0, r6
  bge-      .loc_0x54
  mr        r3, r5
  blr       

.loc_0x54:
  lwz       r7, 0x4(r7)

.loc_0x58:
  cmplwi    r7, 0
  bne+      .loc_0x1C

.loc_0x60:
  li        r3, 0
  blr
*/
}

/*
 * --INFO--
 * Address:	8029F1E0
 * Size:	000048
 */
void isPlantSet__Q34Game4Cave13RandPlantUnitFPQ34Game4Cave7MapNodePQ34Game4Cave7BaseGen(void)
{
/*
.loc_0x0:
  cmplwi    r5, 0
  beq-      .loc_0x38
  lwz       r3, 0x1C(r4)
  lwz       r3, 0x10(r3)
  b         .loc_0x2C

.loc_0x14:
  lwz       r0, 0x1C(r3)
  cmplw     r0, r5
  bne-      .loc_0x28
  li        r3, 0
  blr       

.loc_0x28:
  lwz       r3, 0x4(r3)

.loc_0x2C:
  cmplwi    r3, 0
  bne+      .loc_0x14
  b         .loc_0x40

.loc_0x38:
  li        r3, 0
  blr       

.loc_0x40:
  li        r3, 0x1
  blr
*/
}