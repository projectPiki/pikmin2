

/*
 * --INFO--
 * Address:	800CD994
 * Size:	0003A0
 */
void __ieee754_rem_pio2(void)
{
/*
.loc_0x0:
  stwu      r1, -0x60(r1)
  mflr      r0
  lis       r4, 0x3FE9
  stw       r0, 0x64(r1)
  addi      r0, r4, 0x21FB
  stw       r31, 0x5C(r1)
  stfd      f1, 0x8(r1)
  lwz       r31, 0x8(r1)
  stw       r30, 0x58(r1)
  mr        r30, r3
  rlwinm    r6,r31,0,1,31
  cmpw      r6, r0
  bgt-      .loc_0x48
  stfd      f1, 0x0(r30)
  li        r3, 0
  lfd       f0, -0x6F58(r2)
  stfd      f0, 0x8(r30)
  b         .loc_0x388

.loc_0x48:
  lis       r3, 0x4003
  subi      r0, r3, 0x2684
  cmpw      r6, r0
  bge-      .loc_0x130
  cmpwi     r31, 0
  ble-      .loc_0xC8
  lfd       f0, -0x6F50(r2)
  subis     r0, r6, 0x3FF9
  cmplwi    r0, 0x21FB
  fsub      f2, f1, f0
  stfd      f2, 0x10(r1)
  beq-      .loc_0x98
  lfd       f1, -0x6F48(r2)
  fsub      f0, f2, f1
  stfd      f0, 0x0(r30)
  lfd       f0, 0x0(r30)
  fsub      f0, f2, f0
  fsub      f0, f0, f1
  stfd      f0, 0x8(r30)
  b         .loc_0xC0

.loc_0x98:
  lfd       f0, -0x6F40(r2)
  lfd       f1, -0x6F38(r2)
  fsub      f2, f2, f0
  fsub      f0, f2, f1
  stfd      f2, 0x10(r1)
  stfd      f0, 0x0(r30)
  lfd       f0, 0x0(r30)
  fsub      f0, f2, f0
  fsub      f0, f0, f1
  stfd      f0, 0x8(r30)

.loc_0xC0:
  li        r3, 0x1
  b         .loc_0x388

.loc_0xC8:
  lfd       f0, -0x6F50(r2)
  subis     r0, r6, 0x3FF9
  cmplwi    r0, 0x21FB
  fadd      f2, f0, f1
  stfd      f2, 0x10(r1)
  beq-      .loc_0x100
  lfd       f1, -0x6F48(r2)
  fadd      f0, f1, f2
  stfd      f0, 0x0(r30)
  lfd       f0, 0x0(r30)
  fsub      f0, f2, f0
  fadd      f0, f1, f0
  stfd      f0, 0x8(r30)
  b         .loc_0x128

.loc_0x100:
  lfd       f0, -0x6F40(r2)
  lfd       f1, -0x6F38(r2)
  fadd      f2, f2, f0
  fadd      f0, f1, f2
  stfd      f2, 0x10(r1)
  stfd      f0, 0x0(r30)
  lfd       f0, 0x0(r30)
  fsub      f0, f2, f0
  fadd      f0, f1, f0
  stfd      f0, 0x8(r30)

.loc_0x128:
  li        r3, -0x1
  b         .loc_0x388

.loc_0x130:
  lis       r3, 0x4139
  addi      r0, r3, 0x21FB
  cmpw      r6, r0
  bgt-      .loc_0x278
  fabs      f4, f1
  lis       r0, 0x4330
  lfd       f1, -0x6F28(r2)
  lfd       f0, -0x6F30(r2)
  stw       r0, 0x38(r1)
  fmadd     f2, f1, f4, f0
  lfd       f3, -0x6F08(r2)
  lfd       f1, -0x6F50(r2)
  lfd       f0, -0x6F48(r2)
  fctiwz    f2, f2
  stfd      f2, 0x30(r1)
  lwz       r3, 0x34(r1)
  xoris     r0, r3, 0x8000
  cmpwi     r3, 0x20
  stw       r0, 0x3C(r1)
  lfd       f2, 0x38(r1)
  fsub      f5, f2, f3
  fnmsub    f4, f1, f5, f4
  fmul      f1, f0, f5
  bge-      .loc_0x1B8
  lis       r4, 0x8048
  rlwinm    r0,r3,2,0,29
  subi      r4, r4, 0x5D50
  add       r4, r4, r0
  lwz       r0, -0x4(r4)
  cmpw      r6, r0
  beq-      .loc_0x1B8
  fsub      f0, f4, f1
  stfd      f0, 0x0(r30)
  b         .loc_0x23C

.loc_0x1B8:
  fsub      f0, f4, f1
  srawi     r4, r6, 0x14
  stfd      f0, 0x0(r30)
  lwz       r0, 0x0(r30)
  rlwinm    r0,r0,12,21,31
  sub       r0, r4, r0
  cmpwi     r0, 0x10
  ble-      .loc_0x23C
  lfd       f0, -0x6F40(r2)
  fmr       f3, f4
  lfd       f1, -0x6F38(r2)
  fmul      f2, f0, f5
  fsub      f4, f4, f2
  fsub      f0, f3, f4
  fsub      f0, f0, f2
  fmsub     f1, f1, f5, f0
  fsub      f0, f4, f1
  stfd      f0, 0x0(r30)
  lwz       r0, 0x0(r30)
  rlwinm    r0,r0,12,21,31
  sub       r0, r4, r0
  cmpwi     r0, 0x31
  ble-      .loc_0x23C
  lfd       f0, -0x6F20(r2)
  fmr       f2, f4
  lfd       f1, -0x6F18(r2)
  fmul      f3, f0, f5
  fsub      f4, f4, f3
  fsub      f0, f2, f4
  fsub      f0, f0, f3
  fmsub     f1, f1, f5, f0
  fsub      f0, f4, f1
  stfd      f0, 0x0(r30)

.loc_0x23C:
  lfd       f0, 0x0(r30)
  cmpwi     r31, 0
  fsub      f0, f4, f0
  fsub      f0, f0, f1
  stfd      f0, 0x8(r30)
  bge-      .loc_0x388
  lfd       f0, 0x0(r30)
  neg       r3, r3
  fneg      f0, f0
  stfd      f0, 0x0(r30)
  lfd       f0, 0x8(r30)
  fneg      f0, f0
  stfd      f0, 0x8(r30)
  b         .loc_0x388
  b         .loc_0x388

.loc_0x278:
  lis       r0, 0x7FF0
  cmpw      r6, r0
  blt-      .loc_0x298
  fsub      f0, f1, f1
  li        r3, 0
  stfd      f0, 0x8(r30)
  stfd      f0, 0x0(r30)
  b         .loc_0x388

.loc_0x298:
  srawi     r3, r6, 0x14
  lis       r0, 0x4330
  subi      r5, r3, 0x416
  lwz       r4, 0xC(r1)
  rlwinm    r3,r5,20,0,11
  stw       r0, 0x30(r1)
  sub       r3, r6, r3
  lfd       f5, -0x6F08(r2)
  stw       r4, 0x14(r1)
  addi      r4, r1, 0x30
  lfd       f4, -0x6F10(r2)
  li        r6, 0x3
  stw       r3, 0x10(r1)
  lfd       f1, -0x6F58(r2)
  lfd       f3, 0x10(r1)
  stw       r0, 0x48(r1)
  fctiwz    f0, f3
  stfd      f0, 0x38(r1)
  lwz       r0, 0x3C(r1)
  xoris     r0, r0, 0x8000
  stw       r0, 0x34(r1)
  lfd       f0, 0x30(r1)
  fsub      f2, f0, f5
  fsub      f0, f3, f2
  stfd      f2, 0x18(r1)
  fmul      f3, f4, f0
  fctiwz    f0, f3
  stfd      f3, 0x10(r1)
  stfd      f0, 0x40(r1)
  lwz       r0, 0x44(r1)
  xoris     r0, r0, 0x8000
  stw       r0, 0x4C(r1)
  lfd       f0, 0x48(r1)
  fsub      f2, f0, f5
  fsub      f0, f3, f2
  stfd      f2, 0x20(r1)
  fmul      f0, f4, f0
  stfd      f0, 0x10(r1)
  stfd      f0, 0x28(r1)
  b         .loc_0x340

.loc_0x338:
  subi      r4, r4, 0x8
  subi      r6, r6, 0x1

.loc_0x340:
  lfd       f0, -0x8(r4)
  fcmpu     cr0, f1, f0
  beq+      .loc_0x338
  lis       r3, 0x8048
  mr        r4, r30
  subi      r8, r3, 0x5E58
  li        r7, 0x2
  addi      r3, r1, 0x18
  bl        0x134
  cmpwi     r31, 0
  bge-      .loc_0x388
  lfd       f0, 0x0(r30)
  neg       r3, r3
  fneg      f0, f0
  stfd      f0, 0x0(r30)
  lfd       f0, 0x8(r30)
  fneg      f0, f0
  stfd      f0, 0x8(r30)

.loc_0x388:
  lwz       r0, 0x64(r1)
  lwz       r31, 0x5C(r1)
  lwz       r30, 0x58(r1)
  mtlr      r0
  addi      r1, r1, 0x60
  blr
*/
}