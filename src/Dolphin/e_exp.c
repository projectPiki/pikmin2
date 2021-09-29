

/*
 * --INFO--
 * Address:	800CC878
 * Size:	000224
 */
void __ieee754_exp(void)
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  lis       r3, 0x4086
  lis       r4, 0x8048
  stfd      f1, 0x8(r1)
  addi      r0, r3, 0x2E42
  subi      r5, r4, 0x5EC8
  lwz       r8, 0x8(r1)
  rlwinm    r4,r8,0,1,31
  rlwinm    r7,r8,1,31,31
  cmplw     r4, r0
  blt-      .loc_0x8C
  lis       r0, 0x7FF0
  cmplw     r4, r0
  blt-      .loc_0x64
  lwz       r0, 0xC(r1)
  rlwinm    r3,r8,0,12,31
  or.       r0, r3, r0
  beq-      .loc_0x50
  fadd      f1, f1, f1
  b         .loc_0x21C

.loc_0x50:
  cmpwi     r7, 0
  bne-      .loc_0x5C
  b         .loc_0x21C

.loc_0x5C:
  lfd       f1, -0x7190(r2)
  b         .loc_0x21C

.loc_0x64:
  lfd       f0, -0x7188(r2)
  fcmpo     cr0, f1, f0
  ble-      .loc_0x78
  lfd       f1, -0x7180(r2)
  b         .loc_0x21C

.loc_0x78:
  lfd       f0, -0x7178(r2)
  fcmpo     cr0, f1, f0
  bge-      .loc_0x8C
  lfd       f1, -0x7190(r2)
  b         .loc_0x21C

.loc_0x8C:
  lis       r3, 0x3FD6
  addi      r0, r3, 0x2E42
  cmplw     r4, r0
  ble-      .loc_0x130
  lis       r3, 0x3FF1
  subi      r0, r3, 0x5D4E
  cmplw     r4, r0
  bge-      .loc_0xD4
  rlwinm    r6,r7,3,0,28
  addi      r4, r5, 0x10
  lfd       f1, 0x8(r1)
  addi      r3, r5, 0x20
  lfdx      f0, r4, r6
  subfic    r0, r7, 0x1
  lfdx      f8, r3, r6
  sub       r6, r0, r7
  fsub      f7, f1, f0
  b         .loc_0x124

.loc_0xD4:
  rlwinm    r4,r7,3,0,28
  addi      r3, r5, 0
  lfd       f1, -0x7170(r2)
  lis       r0, 0x4330
  lfd       f4, 0x8(r1)
  lfdx      f0, r3, r4
  stw       r0, 0x20(r1)
  fmadd     f2, f1, f4, f0
  lfd       f3, -0x7120(r2)
  lfd       f1, 0x10(r5)
  lfd       f0, 0x20(r5)
  fctiwz    f2, f2
  stfd      f2, 0x18(r1)
  lwz       r6, 0x1C(r1)
  xoris     r0, r6, 0x8000
  stw       r0, 0x24(r1)
  lfd       f2, 0x20(r1)
  fsub      f2, f2, f3
  fnmsub    f7, f2, f1, f4
  fmul      f8, f2, f0

.loc_0x124:
  fsub      f0, f7, f8
  stfd      f0, 0x8(r1)
  b         .loc_0x160

.loc_0x130:
  lis       r0, 0x3E30
  cmplw     r4, r0
  bge-      .loc_0x15C
  lfd       f1, -0x7168(r2)
  lfd       f2, 0x8(r1)
  lfd       f0, -0x7160(r2)
  fadd      f1, f1, f2
  fcmpo     cr0, f1, f0
  ble-      .loc_0x160
  fadd      f1, f0, f2
  b         .loc_0x21C

.loc_0x15C:
  li        r6, 0

.loc_0x160:
  lfd       f5, 0x8(r1)
  cmpwi     r6, 0
  lfd       f4, -0x7138(r2)
  fmul      f6, f5, f5
  lfd       f3, -0x7140(r2)
  lfd       f2, -0x7148(r2)
  lfd       f1, -0x7150(r2)
  lfd       f0, -0x7158(r2)
  fmadd     f3, f4, f6, f3
  fmadd     f2, f6, f3, f2
  fmadd     f1, f6, f2, f1
  fmadd     f0, f6, f1, f0
  fnmsub    f3, f6, f0, f5
  bne-      .loc_0x1B8
  lfd       f0, -0x7130(r2)
  fmul      f1, f5, f3
  lfd       f2, -0x7160(r2)
  fsub      f0, f3, f0
  fdiv      f0, f1, f0
  fsub      f0, f0, f5
  fsub      f1, f2, f0
  b         .loc_0x21C

.loc_0x1B8:
  lfd       f0, -0x7130(r2)
  fmul      f1, f5, f3
  lfd       f2, -0x7160(r2)
  cmpwi     r6, -0x3FD
  fsub      f0, f0, f3
  fdiv      f0, f1, f0
  fsub      f0, f8, f0
  fsub      f0, f0, f7
  fsub      f0, f2, f0
  stfd      f0, 0x10(r1)
  blt-      .loc_0x1FC
  lwz       r3, 0x10(r1)
  rlwinm    r0,r6,20,0,11
  add       r0, r3, r0
  stw       r0, 0x10(r1)
  lfd       f1, 0x10(r1)
  b         .loc_0x21C

.loc_0x1FC:
  addi      r0, r6, 0x3E8
  lwz       r3, 0x10(r1)
  rlwinm    r0,r0,20,0,11
  lfd       f1, -0x7128(r2)
  add       r0, r3, r0
  stw       r0, 0x10(r1)
  lfd       f0, 0x10(r1)
  fmul      f1, f1, f0

.loc_0x21C:
  addi      r1, r1, 0x30
  blr
*/
}