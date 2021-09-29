

/*
 * --INFO--
 * Address:	800CC5E8
 * Size:	000290
 */
void __ieee754_atan2(void)
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  lis       r3, 0x7FF0
  stfd      f2, 0x10(r1)
  lwz       r8, 0x14(r1)
  stw       r0, 0x34(r1)
  neg       r0, r8
  lwz       r4, 0x10(r1)
  or        r0, r8, r0
  stfd      f1, 0x8(r1)
  rlwinm    r6,r4,0,1,31
  rlwinm    r0,r0,1,31,31
  lwz       r5, 0x8(r1)
  or        r0, r6, r0
  stw       r31, 0x2C(r1)
  cmplw     r0, r3
  lwz       r9, 0xC(r1)
  rlwinm    r7,r5,0,1,31
  bgt-      .loc_0x64
  neg       r0, r9
  or        r0, r9, r0
  rlwinm    r0,r0,1,31,31
  or        r0, r7, r0
  cmplw     r0, r3
  ble-      .loc_0x74

.loc_0x64:
  lfd       f1, 0x10(r1)
  lfd       f0, 0x8(r1)
  fadd      f1, f1, f0
  b         .loc_0x27C

.loc_0x74:
  subis     r0, r4, 0x3FF0
  or.       r0, r0, r8
  bne-      .loc_0x88
  bl        0x28C8
  b         .loc_0x27C

.loc_0x88:
  or.       r0, r7, r9
  rlwinm    r0,r4,2,30,30
  mr        r31, r0
  rlwimi    r31,r5,1,31,31
  bne-      .loc_0xD4
  cmpwi     r31, 0x2
  beq-      .loc_0xC4
  bge-      .loc_0xB4
  cmpwi     r31, 0
  bge-      .loc_0x27C
  b         .loc_0xD4

.loc_0xB4:
  cmpwi     r31, 0x4
  bge-      .loc_0xD4
  b         .loc_0xCC
  b         .loc_0x27C

.loc_0xC4:
  lfd       f1, -0x71E8(r2)
  b         .loc_0x27C

.loc_0xCC:
  lfd       f1, -0x71E0(r2)
  b         .loc_0x27C

.loc_0xD4:
  or.       r0, r6, r8
  bne-      .loc_0xF4
  cmpwi     r5, 0
  bge-      .loc_0xEC
  lfd       f1, -0x71D8(r2)
  b         .loc_0x27C

.loc_0xEC:
  lfd       f1, -0x71D0(r2)
  b         .loc_0x27C

.loc_0xF4:
  subis     r0, r6, 0x7FF0
  cmplwi    r0, 0
  bne-      .loc_0x19C
  subis     r0, r7, 0x7FF0
  cmplwi    r0, 0
  bne-      .loc_0x154
  cmpwi     r31, 0x2
  beq-      .loc_0x144
  bge-      .loc_0x128
  cmpwi     r31, 0
  beq-      .loc_0x134
  bge-      .loc_0x13C
  b         .loc_0x19C

.loc_0x128:
  cmpwi     r31, 0x4
  bge-      .loc_0x19C
  b         .loc_0x14C

.loc_0x134:
  lfd       f1, -0x71C8(r2)
  b         .loc_0x27C

.loc_0x13C:
  lfd       f1, -0x71C0(r2)
  b         .loc_0x27C

.loc_0x144:
  lfd       f1, -0x71B8(r2)
  b         .loc_0x27C

.loc_0x14C:
  lfd       f1, -0x71B0(r2)
  b         .loc_0x27C

.loc_0x154:
  cmpwi     r31, 0x2
  beq-      .loc_0x18C
  bge-      .loc_0x170
  cmpwi     r31, 0
  beq-      .loc_0x17C
  bge-      .loc_0x184
  b         .loc_0x19C

.loc_0x170:
  cmpwi     r31, 0x4
  bge-      .loc_0x19C
  b         .loc_0x194

.loc_0x17C:
  lfd       f1, -0x71A8(r2)
  b         .loc_0x27C

.loc_0x184:
  lfd       f1, -0x71A0(r2)
  b         .loc_0x27C

.loc_0x18C:
  lfd       f1, -0x71E8(r2)
  b         .loc_0x27C

.loc_0x194:
  lfd       f1, -0x71E0(r2)
  b         .loc_0x27C

.loc_0x19C:
  subis     r0, r7, 0x7FF0
  cmplwi    r0, 0
  bne-      .loc_0x1C0
  cmpwi     r5, 0
  bge-      .loc_0x1B8
  lfd       f1, -0x71D8(r2)
  b         .loc_0x27C

.loc_0x1B8:
  lfd       f1, -0x71D0(r2)
  b         .loc_0x27C

.loc_0x1C0:
  sub       r0, r7, r6
  srawi     r0, r0, 0x14
  cmpwi     r0, 0x3C
  ble-      .loc_0x1DC
  lfd       f0, -0x71D0(r2)
  stfd      f0, 0x18(r1)
  b         .loc_0x210

.loc_0x1DC:
  cmpwi     r4, 0
  bge-      .loc_0x1F8
  cmpwi     r0, -0x3C
  bge-      .loc_0x1F8
  lfd       f0, -0x71A8(r2)
  stfd      f0, 0x18(r1)
  b         .loc_0x210

.loc_0x1F8:
  lfd       f1, 0x8(r1)
  lfd       f0, 0x10(r1)
  fdiv      f0, f1, f0
  fabs      f1, f0
  bl        0x2740
  stfd      f1, 0x18(r1)

.loc_0x210:
  cmpwi     r31, 0x1
  beq-      .loc_0x23C
  bge-      .loc_0x228
  cmpwi     r31, 0
  bge-      .loc_0x234
  b         .loc_0x268

.loc_0x228:
  cmpwi     r31, 0x3
  bge-      .loc_0x268
  b         .loc_0x250

.loc_0x234:
  lfd       f1, 0x18(r1)
  b         .loc_0x27C

.loc_0x23C:
  lwz       r0, 0x18(r1)
  xoris     r0, r0, 0x8000
  stw       r0, 0x18(r1)
  lfd       f1, 0x18(r1)
  b         .loc_0x27C

.loc_0x250:
  lfd       f1, 0x18(r1)
  lfd       f0, -0x7198(r2)
  lfd       f2, -0x71E8(r2)
  fsub      f0, f1, f0
  fsub      f1, f2, f0
  b         .loc_0x27C

.loc_0x268:
  lfd       f2, 0x18(r1)
  lfd       f1, -0x7198(r2)
  lfd       f0, -0x71E8(r2)
  fsub      f1, f2, f1
  fsub      f1, f1, f0

.loc_0x27C:
  lwz       r0, 0x34(r1)
  lwz       r31, 0x2C(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}