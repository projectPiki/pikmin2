

/*
 * --INFO--
 * Address:	800CCDD8
 * Size:	00027C
 */
void __ieee754_log(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  lis       r0, 0x10
  li        r8, 0
  stfd      f1, 0x8(r1)
  lwz       r3, 0x8(r1)
  lwz       r4, 0xC(r1)
  cmpw      r3, r0
  bge-      .loc_0x70
  rlwinm    r0,r3,0,1,31
  or.       r0, r0, r4
  bne-      .loc_0x3C
  lfd       f1, -0x7118(r2)
  lfd       f0, -0x7330(r13)
  fdiv      f1, f1, f0
  b         .loc_0x274

.loc_0x3C:
  cmpwi     r3, 0
  bge-      .loc_0x5C
  fsub      f1, f1, f1
  lfd       f0, -0x7330(r13)
  li        r0, 0x21
  stw       r0, -0x7340(r13)
  fdiv      f1, f1, f0
  b         .loc_0x274

.loc_0x5C:
  lfd       f0, -0x7110(r2)
  li        r8, -0x36
  fmul      f0, f1, f0
  stfd      f0, 0x8(r1)
  lwz       r3, 0x8(r1)

.loc_0x70:
  lis       r0, 0x7FF0
  cmpw      r3, r0
  blt-      .loc_0x88
  lfd       f0, 0x8(r1)
  fadd      f1, f0, f0
  b         .loc_0x274

.loc_0x88:
  rlwinm    r6,r3,0,12,31
  srawi     r4, r3, 0x14
  addis     r3, r6, 0x9
  lfd       f0, -0x7108(r2)
  addi      r5, r3, 0x5F64
  add       r8, r4, r8
  rlwinm    r3,r5,0,11,11
  addi      r0, r6, 0x2
  xoris     r3, r3, 0x3FF0
  subi      r8, r8, 0x3FF
  or        r4, r6, r3
  rlwinm    r0,r0,0,12,31
  stw       r4, 0x8(r1)
  rlwinm    r3,r5,12,31,31
  cmpwi     r0, 0x3
  lfd       f1, 0x8(r1)
  add       r8, r8, r3
  fsub      f0, f1, f0
  bge-      .loc_0x174
  lfd       f1, -0x7330(r13)
  fcmpu     cr0, f0, f1
  bne-      .loc_0x11C
  cmpwi     r8, 0
  bne-      .loc_0xEC
  b         .loc_0x274

.loc_0xEC:
  xoris     r3, r8, 0x8000
  lis       r0, 0x4330
  stw       r3, 0x14(r1)
  lfd       f3, -0x70A0(r2)
  stw       r0, 0x10(r1)
  lfd       f0, -0x70F8(r2)
  lfd       f2, 0x10(r1)
  lfd       f1, -0x7100(r2)
  fsub      f2, f2, f3
  fmul      f0, f0, f2
  fmadd     f1, f1, f2, f0
  b         .loc_0x274

.loc_0x11C:
  lfd       f3, -0x70E8(r2)
  fmul      f1, f0, f0
  lfd       f2, -0x70F0(r2)
  cmpwi     r8, 0
  fnmsub    f2, f3, f0, f2
  fmul      f5, f2, f1
  bne-      .loc_0x140
  fsub      f1, f0, f5
  b         .loc_0x274

.loc_0x140:
  xoris     r3, r8, 0x8000
  lis       r0, 0x4330
  stw       r3, 0x14(r1)
  lfd       f4, -0x70A0(r2)
  stw       r0, 0x10(r1)
  lfd       f1, -0x70F8(r2)
  lfd       f3, 0x10(r1)
  lfd       f2, -0x7100(r2)
  fsub      f3, f3, f4
  fnmsub    f1, f1, f3, f5
  fsub      f0, f1, f0
  fmsub     f1, f2, f3, f0
  b         .loc_0x274

.loc_0x174:
  lfd       f1, -0x70E0(r2)
  xoris     r5, r8, 0x8000
  lis       r4, 0x4330
  lis       r3, 0x7
  fadd      f1, f1, f0
  subis     r7, r6, 0x6
  subi      r0, r3, 0x47AF
  lfd       f8, -0x70C0(r2)
  lfd       f7, -0x70C8(r2)
  sub       r0, r0, r6
  fdiv      f1, f0, f1
  subi      r7, r7, 0x147A
  lfd       f6, -0x70D0(r2)
  or.       r7, r7, r0
  lfd       f4, -0x70A8(r2)
  lfd       f3, -0x70B0(r2)
  fmul      f11, f1, f1
  lfd       f5, -0x70D8(r2)
  lfd       f2, -0x70B8(r2)
  stw       r5, 0x14(r1)
  lfd       f10, -0x70A0(r2)
  fmul      f12, f11, f11
  stw       r4, 0x10(r1)
  lfd       f9, 0x10(r1)
  fmadd     f7, f8, f12, f7
  fmadd     f3, f4, f12, f3
  fmadd     f4, f12, f7, f6
  fmadd     f2, f12, f3, f2
  fmadd     f3, f12, f4, f5
  fmul      f2, f12, f2
  fmul      f3, f11, f3
  fsub      f5, f9, f10
  fadd      f3, f3, f2
  ble-      .loc_0x244
  lfd       f2, -0x70F0(r2)
  cmpwi     r8, 0
  fmul      f2, f2, f0
  fmul      f6, f2, f0
  bne-      .loc_0x220
  fadd      f2, f6, f3
  fnmsub    f1, f1, f2, f6
  fsub      f1, f0, f1
  b         .loc_0x274

.loc_0x220:
  lfd       f2, -0x70F8(r2)
  fadd      f3, f6, f3
  lfd       f4, -0x7100(r2)
  fmul      f2, f2, f5
  fmadd     f1, f1, f3, f2
  fsub      f1, f6, f1
  fsub      f0, f1, f0
  fmsub     f1, f4, f5, f0
  b         .loc_0x274

.loc_0x244:
  cmpwi     r8, 0
  bne-      .loc_0x258
  fsub      f2, f0, f3
  fnmsub    f1, f1, f2, f0
  b         .loc_0x274

.loc_0x258:
  lfd       f2, -0x70F8(r2)
  fsub      f3, f0, f3
  lfd       f4, -0x7100(r2)
  fmul      f2, f2, f5
  fmsub     f1, f1, f3, f2
  fsub      f0, f1, f0
  fmsub     f1, f4, f5, f0

.loc_0x274:
  addi      r1, r1, 0x20
  blr
*/
}