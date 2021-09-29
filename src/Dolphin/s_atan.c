

/*
 * --INFO--
 * Address:	800CEF30
 * Size:	000218
 */
void atan(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  lis       r3, 0x8048
  lis       r0, 0x4410
  stfd      f1, 0x8(r1)
  subi      r5, r3, 0x5C18
  lwz       r6, 0x8(r1)
  rlwinm    r4,r6,0,1,31
  cmpw      r4, r0
  blt-      .loc_0x90
  lis       r0, 0x7FF0
  cmpw      r4, r0
  bgt-      .loc_0x48
  subis     r0, r4, 0x7FF0
  cmplwi    r0, 0
  bne-      .loc_0x54
  lwz       r0, 0xC(r1)
  cmpwi     r0, 0
  beq-      .loc_0x54

.loc_0x48:
  lfd       f0, 0x8(r1)
  fadd      f1, f0, f0
  b         .loc_0x210

.loc_0x54:
  cmpwi     r6, 0
  ble-      .loc_0x74
  addi      r4, r5, 0
  addi      r3, r5, 0x20
  lfd       f1, 0x18(r4)
  lfd       f0, 0x18(r3)
  fadd      f1, f1, f0
  b         .loc_0x210

.loc_0x74:
  addi      r4, r5, 0
  addi      r3, r5, 0x20
  lfd       f1, 0x18(r4)
  lfd       f0, 0x18(r3)
  fneg      f1, f1
  fsub      f1, f1, f0
  b         .loc_0x210

.loc_0x90:
  lis       r0, 0x3FDC
  cmpw      r4, r0
  bge-      .loc_0xC8
  lis       r0, 0x3E20
  cmpw      r4, r0
  bge-      .loc_0xC0
  lfd       f2, -0x6E08(r2)
  lfd       f0, -0x6E00(r2)
  fadd      f2, f2, f1
  fcmpo     cr0, f2, f0
  ble-      .loc_0xC0
  b         .loc_0x210

.loc_0xC0:
  li        r0, -0x1
  b         .loc_0x164

.loc_0xC8:
  fabs      f3, f1
  lis       r0, 0x3FF3
  cmpw      r4, r0
  stfd      f3, 0x8(r1)
  bge-      .loc_0x124
  lis       r0, 0x3FE6
  cmpw      r4, r0
  bge-      .loc_0x108
  lfd       f2, -0x6DF8(r2)
  li        r0, 0
  lfd       f1, -0x6E00(r2)
  fadd      f0, f2, f3
  fmsub     f1, f2, f3, f1
  fdiv      f0, f1, f0
  stfd      f0, 0x8(r1)
  b         .loc_0x164

.loc_0x108:
  lfd       f0, -0x6E00(r2)
  li        r0, 0x1
  fsub      f1, f3, f0
  fadd      f0, f0, f3
  fdiv      f0, f1, f0
  stfd      f0, 0x8(r1)
  b         .loc_0x164

.loc_0x124:
  lis       r3, 0x4004
  subi      r0, r3, 0x8000
  cmpw      r4, r0
  bge-      .loc_0x154
  lfd       f2, -0x6DF0(r2)
  li        r0, 0x2
  lfd       f0, -0x6E00(r2)
  fsub      f1, f3, f2
  fmadd     f0, f2, f3, f0
  fdiv      f0, f1, f0
  stfd      f0, 0x8(r1)
  b         .loc_0x164

.loc_0x154:
  lfd       f0, -0x6DE8(r2)
  li        r0, 0x3
  fdiv      f0, f0, f3
  stfd      f0, 0x8(r1)

.loc_0x164:
  lfd       f9, 0x8(r1)
  addi      r3, r5, 0x40
  lfd       f4, 0x50(r3)
  cmpwi     r0, 0
  fmul      f11, f9, f9
  lfd       f1, 0x40(r3)
  lfd       f7, 0x30(r3)
  lfd       f3, 0x48(r3)
  lfd       f0, 0x38(r3)
  fmul      f10, f11, f11
  lfd       f6, 0x20(r3)
  lfd       f2, 0x28(r3)
  lfd       f5, 0x10(r3)
  fmadd     f8, f10, f4, f1
  lfd       f1, 0x18(r3)
  lfd       f4, 0x40(r5)
  fmadd     f3, f10, f3, f0
  lfd       f0, 0x8(r3)
  fmadd     f7, f10, f8, f7
  fmadd     f2, f10, f3, f2
  fmadd     f3, f10, f7, f6
  fmadd     f1, f10, f2, f1
  fmadd     f2, f10, f3, f5
  fmadd     f0, f10, f1, f0
  fmadd     f1, f10, f2, f4
  fmul      f2, f10, f0
  fmul      f0, f11, f1
  bge-      .loc_0x1E0
  fadd      f0, f0, f2
  fnmsub    f1, f9, f0, f9
  b         .loc_0x210

.loc_0x1E0:
  rlwinm    r0,r0,3,0,28
  addi      r3, r5, 0x20
  fadd      f1, f0, f2
  lfdx      f0, r3, r0
  addi      r3, r5, 0
  cmpwi     r6, 0
  lfdx      f2, r3, r0
  fmsub     f0, f9, f1, f0
  fsub      f0, f0, f9
  fsub      f1, f2, f0
  bge-      .loc_0x210
  fneg      f1, f1

.loc_0x210:
  addi      r1, r1, 0x10
  blr
*/
}