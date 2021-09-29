

/*
 * --INFO--
 * Address:	800CED1C
 * Size:	000214
 */
void __kernel_tan(void)
{
/*
.loc_0x0:
  stwu      r1, -0x40(r1)
  stfd      f31, 0x30(r1)
  psq_st    f31,0x38(r1),0,0
  stfd      f1, 0x8(r1)
  lis       r0, 0x3E30
  lwz       r7, 0x8(r1)
  rlwinm    r6,r7,0,1,31
  cmpw      r6, r0
  bge-      .loc_0x74
  fctiwz    f0, f1
  stfd      f0, 0x20(r1)
  lwz       r0, 0x24(r1)
  cmpwi     r0, 0
  bne-      .loc_0x74
  lwz       r0, 0xC(r1)
  addi      r4, r3, 0x1
  or        r0, r6, r0
  or.       r0, r4, r0
  bne-      .loc_0x5C
  fabs      f1, f1
  lfd       f0, -0x6E40(r2)
  fdiv      f1, f0, f1
  b         .loc_0x204

.loc_0x5C:
  cmpwi     r3, 0x1
  bne-      .loc_0x68
  b         .loc_0x204

.loc_0x68:
  lfd       f0, -0x6E38(r2)
  fdiv      f1, f0, f1
  b         .loc_0x204

.loc_0x74:
  lis       r4, 0x3FE6
  subi      r0, r4, 0x6BD8
  cmpw      r6, r0
  blt-      .loc_0xC0
  cmpwi     r7, 0
  bge-      .loc_0x9C
  lfd       f0, 0x8(r1)
  fneg      f2, f2
  fneg      f0, f0
  stfd      f0, 0x8(r1)

.loc_0x9C:
  lfd       f0, -0x6E28(r2)
  lfd       f3, -0x6E30(r2)
  lfd       f1, 0x8(r1)
  fsub      f0, f0, f2
  lfd       f2, -0x6E20(r2)
  fsub      f1, f3, f1
  fadd      f0, f1, f0
  stfd      f1, 0x18(r1)
  stfd      f0, 0x8(r1)

.loc_0xC0:
  lfd       f0, 0x8(r1)
  lis       r4, 0x8048
  subi      r5, r4, 0x5C80
  lis       r4, 0x3FE6
  fmul      f13, f0, f0
  subi      r0, r4, 0x6BD8
  lfd       f5, 0x60(r5)
  cmpw      r6, r0
  lfd       f4, 0x50(r5)
  lfd       f9, 0x58(r5)
  fmul      f31, f13, f13
  lfd       f8, 0x48(r5)
  lfd       f3, 0x40(r5)
  lfd       f11, 0x38(r5)
  fmul      f1, f13, f0
  lfd       f6, 0x30(r5)
  fmadd     f7, f31, f5, f4
  lfd       f10, 0x28(r5)
  lfd       f5, 0x20(r5)
  fmadd     f12, f31, f9, f8
  lfd       f9, 0x18(r5)
  lfd       f4, 0x10(r5)
  fmadd     f7, f31, f7, f3
  lfd       f8, 0x8(r5)
  lfd       f3, 0x0(r5)
  fmadd     f11, f31, f12, f11
  stfd      f13, 0x18(r1)
  fmadd     f6, f31, f7, f6
  fmadd     f7, f31, f11, f10
  fmadd     f5, f31, f6, f5
  fmadd     f6, f31, f7, f9
  fmadd     f4, f31, f5, f4
  fmadd     f5, f31, f6, f8
  fmul      f4, f13, f4
  fadd      f4, f5, f4
  fmadd     f4, f1, f4, f2
  fmadd     f6, f13, f4, f2
  fmadd     f6, f3, f1, f6
  fadd      f1, f0, f6
  blt-      .loc_0x1BC
  lis       r4, 0x4330
  xoris     r0, r3, 0x8000
  stw       r0, 0x24(r1)
  rlwinm    r0,r7,2,30,30
  subfic    r0, r0, 0x1
  lfd       f5, -0x6E10(r2)
  stw       r4, 0x20(r1)
  xoris     r0, r0, 0x8000
  fmul      f2, f1, f1
  lfd       f3, -0x6E18(r2)
  lfd       f4, 0x20(r1)
  stw       r0, 0x2C(r1)
  fsub      f7, f4, f5
  stw       r4, 0x28(r1)
  fadd      f1, f1, f7
  lfd       f4, 0x28(r1)
  fsub      f4, f4, f5
  fdiv      f1, f2, f1
  fsub      f1, f1, f6
  fsub      f0, f0, f1
  fnmsub    f0, f3, f0, f7
  fmul      f1, f4, f0
  b         .loc_0x204

.loc_0x1BC:
  cmpwi     r3, 0x1
  bne-      .loc_0x1C8
  b         .loc_0x204

.loc_0x1C8:
  lfd       f2, -0x6E38(r2)
  li        r0, 0
  stfd      f1, 0x18(r1)
  fdiv      f4, f2, f1
  lfd       f1, -0x6E40(r2)
  stw       r0, 0x1C(r1)
  lfd       f2, 0x18(r1)
  stfd      f4, 0x10(r1)
  fsub      f0, f2, f0
  stw       r0, 0x14(r1)
  fsub      f0, f6, f0
  lfd       f3, 0x10(r1)
  fmadd     f1, f3, f2, f1
  fmadd     f0, f3, f0, f1
  fmadd     f1, f4, f0, f3

.loc_0x204:
  psq_l     f31,0x38(r1),0,0
  lfd       f31, 0x30(r1)
  addi      r1, r1, 0x40
  blr
*/
}