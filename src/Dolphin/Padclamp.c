

/*
 * --INFO--
 * Address:	800F3048
 * Size:	000130
 */
void ClampStick(void)
{
/*
.loc_0x0:
  lbz       r0, 0x0(r3)
  lbz       r12, 0x0(r4)
  extsb.    r0, r0
  extsb     r12, r12
  mr        r11, r0
  blt-      .loc_0x20
  li        r0, 0x1
  b         .loc_0x28

.loc_0x20:
  li        r0, -0x1
  neg       r11, r11

.loc_0x28:
  cmpwi     r12, 0
  blt-      .loc_0x38
  li        r8, 0x1
  b         .loc_0x40

.loc_0x38:
  li        r8, -0x1
  neg       r12, r12

.loc_0x40:
  extsb     r7, r7
  cmpw      r11, r7
  bgt-      .loc_0x54
  li        r11, 0
  b         .loc_0x58

.loc_0x54:
  sub       r11, r11, r7

.loc_0x58:
  cmpw      r12, r7
  bgt-      .loc_0x68
  li        r12, 0
  b         .loc_0x6C

.loc_0x68:
  sub       r12, r12, r7

.loc_0x6C:
  cmpwi     r11, 0
  bne-      .loc_0x8C
  cmpwi     r12, 0
  bne-      .loc_0x8C
  li        r0, 0
  stb       r0, 0x0(r4)
  stb       r0, 0x0(r3)
  blr       

.loc_0x8C:
  extsb     r6, r6
  mullw     r9, r6, r12
  mullw     r7, r6, r11
  cmpw      r9, r7
  bgt-      .loc_0xE0
  extsb     r9, r5
  sub       r5, r9, r6
  mullw     r5, r12, r5
  mullw     r9, r6, r9
  add       r7, r7, r5
  cmpw      r9, r7
  bge-      .loc_0x11C
  mullw     r6, r11, r9
  mullw     r5, r12, r9
  divw      r6, r6, r7
  divw      r5, r5, r7
  extsb     r6, r6
  extsb     r5, r5
  addi      r11, r6, 0
  addi      r12, r5, 0
  b         .loc_0x11C

.loc_0xE0:
  extsb     r7, r5
  sub       r5, r7, r6
  mullw     r5, r11, r5
  mullw     r10, r6, r7
  add       r7, r9, r5
  cmpw      r10, r7
  bge-      .loc_0x11C
  mullw     r6, r11, r10
  mullw     r5, r12, r10
  divw      r6, r6, r7
  divw      r5, r5, r7
  extsb     r6, r6
  extsb     r5, r5
  addi      r11, r6, 0
  addi      r12, r5, 0

.loc_0x11C:
  mullw     r5, r0, r11
  mullw     r0, r8, r12
  stb       r5, 0x0(r3)
  stb       r0, 0x0(r4)
  blr
*/
}

/*
 * --INFO--
 * Address:	800F3178
 * Size:	0001A8
 */
void ClampCircle(void)
{
/*
.loc_0x0:
  stwu      r1, -0x40(r1)
  extsb     r6, r6
  neg       r7, r6
  lbz       r0, 0x0(r3)
  lbz       r9, 0x0(r4)
  extsb     r0, r0
  cmpw      r7, r0
  extsb     r9, r9
  bge-      .loc_0x34
  cmpw      r0, r6
  bge-      .loc_0x34
  li        r8, 0
  b         .loc_0x48

.loc_0x34:
  cmpwi     r0, 0
  ble-      .loc_0x44
  sub       r8, r0, r6
  b         .loc_0x48

.loc_0x44:
  add       r8, r0, r6

.loc_0x48:
  cmpw      r7, r9
  bge-      .loc_0x60
  cmpw      r9, r6
  bge-      .loc_0x60
  li        r9, 0
  b         .loc_0x74

.loc_0x60:
  cmpwi     r9, 0
  ble-      .loc_0x70
  sub       r9, r9, r6
  b         .loc_0x74

.loc_0x70:
  add       r9, r9, r6

.loc_0x74:
  extsb     r7, r5
  mullw     r6, r8, r8
  mullw     r5, r9, r9
  mullw     r0, r7, r7
  add       r5, r6, r5
  cmpw      r0, r5
  bge-      .loc_0x190
  xoris     r5, r5, 0x8000
  lfd       f7, -0x6BF0(r2)
  stw       r5, 0x3C(r1)
  lis       r0, 0x4330
  lfs       f0, -0x6C08(r2)
  stw       r0, 0x38(r1)
  lfd       f1, 0x38(r1)
  fsubs     f1, f1, f7
  fcmpo     cr0, f1, f0
  ble-      .loc_0x164
  stw       r5, 0x3C(r1)
  lfd       f6, -0x6C00(r2)
  stw       r0, 0x38(r1)
  lfd       f5, -0x6BF8(r2)
  lfd       f0, 0x38(r1)
  stw       r5, 0x34(r1)
  fsubs     f0, f0, f7
  stw       r0, 0x30(r1)
  fsqrte    f3, f0
  lfd       f0, 0x30(r1)
  stw       r5, 0x2C(r1)
  fsubs     f2, f0, f7
  fmul      f1, f3, f3
  stw       r0, 0x28(r1)
  fmul      f4, f6, f3
  lfd       f0, 0x28(r1)
  fmul      f1, f2, f1
  stw       r5, 0x24(r1)
  fsubs     f3, f0, f7
  stw       r0, 0x20(r1)
  fsub      f1, f5, f1
  lfd       f0, 0x20(r1)
  stw       r5, 0x1C(r1)
  fmul      f4, f4, f1
  stw       r0, 0x18(r1)
  fsubs     f2, f0, f7
  lfd       f0, 0x18(r1)
  fmul      f1, f4, f4
  fmul      f4, f6, f4
  fmul      f1, f3, f1
  fsubs     f0, f0, f7
  fsub      f1, f5, f1
  fmul      f3, f4, f1
  fmul      f1, f3, f3
  fmul      f3, f6, f3
  fmul      f1, f2, f1
  fsub      f1, f5, f1
  fmul      f1, f3, f1
  fmul      f0, f0, f1
  frsp      f0, f0
  stfs      f0, 0x14(r1)
  lfs       f0, 0x14(r1)
  b         .loc_0x174

.loc_0x164:
  stw       r5, 0x1C(r1)
  stw       r0, 0x18(r1)
  lfd       f0, 0x18(r1)
  fsubs     f0, f0, f7

.loc_0x174:
  fctiwz    f0, f0
  mullw     r5, r8, r7
  stfd      f0, 0x18(r1)
  lwz       r6, 0x1C(r1)
  mullw     r0, r9, r7
  divw      r8, r5, r6
  divw      r9, r0, r6

.loc_0x190:
  extsb     r0, r8
  stb       r0, 0x0(r3)
  extsb     r0, r9
  stb       r0, 0x0(r4)
  addi      r1, r1, 0x40
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00003C
 */
void ClampTrigger(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800F3320
 * Size:	000114
 */
void PADClamp(void)
{
/*
.loc_0x0:
  mflr      r0
  lis       r4, 0x8048
  stw       r0, 0x4(r1)
  stwu      r1, -0x20(r1)
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  li        r30, 0
  stw       r29, 0x14(r1)
  addi      r29, r3, 0
  stw       r28, 0x10(r1)
  subi      r28, r4, 0x5B80
  addi      r31, r28, 0x1

.loc_0x30:
  lbz       r0, 0xA(r29)
  extsb.    r0, r0
  bne-      .loc_0xE4
  lbz       r5, 0x3(r28)
  addi      r3, r29, 0x2
  lbz       r6, 0x4(r28)
  addi      r4, r29, 0x3
  lbz       r7, 0x2(r28)
  bl        -0x328
  lbz       r5, 0x6(r28)
  addi      r3, r29, 0x4
  lbz       r6, 0x7(r28)
  addi      r4, r29, 0x5
  lbz       r7, 0x5(r28)
  bl        -0x340
  lbz       r4, 0x6(r29)
  lbz       r0, 0x0(r28)
  lbz       r3, 0x0(r31)
  cmplw     r4, r0
  bgt-      .loc_0x8C
  li        r0, 0
  stb       r0, 0x6(r29)
  b         .loc_0xA8

.loc_0x8C:
  cmplw     r3, r4
  bge-      .loc_0x98
  stb       r3, 0x6(r29)

.loc_0x98:
  lbz       r3, 0x0(r28)
  lbz       r0, 0x6(r29)
  sub       r0, r0, r3
  stb       r0, 0x6(r29)

.loc_0xA8:
  lbz       r4, 0x7(r29)
  lbz       r0, 0x0(r28)
  lbz       r3, 0x0(r31)
  cmplw     r4, r0
  bgt-      .loc_0xC8
  li        r0, 0
  stb       r0, 0x7(r29)
  b         .loc_0xE4

.loc_0xC8:
  cmplw     r3, r4
  bge-      .loc_0xD4
  stb       r3, 0x7(r29)

.loc_0xD4:
  lbz       r3, 0x0(r28)
  lbz       r0, 0x7(r29)
  sub       r0, r0, r3
  stb       r0, 0x7(r29)

.loc_0xE4:
  addi      r30, r30, 0x1
  cmpwi     r30, 0x4
  addi      r29, r29, 0xC
  blt+      .loc_0x30
  lwz       r0, 0x24(r1)
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  lwz       r29, 0x14(r1)
  lwz       r28, 0x10(r1)
  addi      r1, r1, 0x20
  mtlr      r0
  blr
*/
}

/*
 * --INFO--
 * Address:	800F3434
 * Size:	00010C
 */
void PADClampCircle(void)
{
/*
.loc_0x0:
  mflr      r0
  lis       r4, 0x8048
  stw       r0, 0x4(r1)
  stwu      r1, -0x20(r1)
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  li        r30, 0
  stw       r29, 0x14(r1)
  addi      r29, r3, 0
  stw       r28, 0x10(r1)
  subi      r28, r4, 0x5B80
  addi      r31, r28, 0x1

.loc_0x30:
  lbz       r0, 0xA(r29)
  extsb.    r0, r0
  bne-      .loc_0xDC
  lbz       r5, 0x8(r28)
  addi      r3, r29, 0x2
  lbz       r6, 0x2(r28)
  addi      r4, r29, 0x3
  bl        -0x308
  lbz       r5, 0x9(r28)
  addi      r3, r29, 0x4
  lbz       r6, 0x5(r28)
  addi      r4, r29, 0x5
  bl        -0x31C
  lbz       r4, 0x6(r29)
  lbz       r0, 0x0(r28)
  lbz       r3, 0x0(r31)
  cmplw     r4, r0
  bgt-      .loc_0x84
  li        r0, 0
  stb       r0, 0x6(r29)
  b         .loc_0xA0

.loc_0x84:
  cmplw     r3, r4
  bge-      .loc_0x90
  stb       r3, 0x6(r29)

.loc_0x90:
  lbz       r3, 0x0(r28)
  lbz       r0, 0x6(r29)
  sub       r0, r0, r3
  stb       r0, 0x6(r29)

.loc_0xA0:
  lbz       r4, 0x7(r29)
  lbz       r0, 0x0(r28)
  lbz       r3, 0x0(r31)
  cmplw     r4, r0
  bgt-      .loc_0xC0
  li        r0, 0
  stb       r0, 0x7(r29)
  b         .loc_0xDC

.loc_0xC0:
  cmplw     r3, r4
  bge-      .loc_0xCC
  stb       r3, 0x7(r29)

.loc_0xCC:
  lbz       r3, 0x0(r28)
  lbz       r0, 0x7(r29)
  sub       r0, r0, r3
  stb       r0, 0x7(r29)

.loc_0xDC:
  addi      r30, r30, 0x1
  cmpwi     r30, 0x4
  addi      r29, r29, 0xC
  blt+      .loc_0x30
  lwz       r0, 0x24(r1)
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  lwz       r29, 0x14(r1)
  lwz       r28, 0x10(r1)
  addi      r1, r1, 0x20
  mtlr      r0
  blr
*/
}