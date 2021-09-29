

/*
 * --INFO--
 * Address:	800CD054
 * Size:	000110
 */
void __ieee754_log10(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  li        r4, 0
  stfd      f1, 0x8(r1)
  lwz       r5, 0x8(r1)
  stw       r0, 0x24(r1)
  lis       r0, 0x10
  cmpw      r5, r0
  lwz       r3, 0xC(r1)
  stfd      f31, 0x18(r1)
  bge-      .loc_0x84
  rlwinm    r0,r5,0,1,31
  or.       r0, r0, r3
  bne-      .loc_0x50
  lfd       f1, -0x7098(r2)
  li        r0, 0x21
  lfd       f0, -0x7328(r13)
  stw       r0, -0x7340(r13)
  fdiv      f1, f1, f0
  b         .loc_0xFC

.loc_0x50:
  cmpwi     r5, 0
  bge-      .loc_0x70
  fsub      f1, f1, f1
  lfd       f0, -0x7328(r13)
  li        r0, 0x21
  stw       r0, -0x7340(r13)
  fdiv      f1, f1, f0
  b         .loc_0xFC

.loc_0x70:
  lfd       f0, -0x7090(r2)
  li        r4, -0x36
  fmul      f0, f1, f0
  stfd      f0, 0x8(r1)
  lwz       r5, 0x8(r1)

.loc_0x84:
  lis       r0, 0x7FF0
  cmpw      r5, r0
  blt-      .loc_0x9C
  lfd       f0, 0x8(r1)
  fadd      f1, f0, f0
  b         .loc_0xFC

.loc_0x9C:
  srawi     r3, r5, 0x14
  lis       r0, 0x4330
  add       r4, r3, r4
  stw       r0, 0x10(r1)
  subi      r4, r4, 0x3FF
  lfd       f1, -0x7070(r2)
  rlwinm    r3,r4,1,31,31
  add       r0, r4, r3
  xoris     r0, r0, 0x8000
  subfic    r3, r3, 0x3FF
  stw       r0, 0x14(r1)
  rlwinm    r0,r3,20,0,11
  rlwimi    r0,r5,0,12,31
  lfd       f0, 0x10(r1)
  stw       r0, 0x8(r1)
  fsub      f31, f0, f1
  lfd       f1, 0x8(r1)
  bl        -0x35C
  lfd       f0, -0x7080(r2)
  lfd       f2, -0x7088(r2)
  fmul      f1, f0, f1
  lfd       f0, -0x7078(r2)
  fmadd     f1, f2, f31, f1
  fmadd     f1, f0, f31, f1

.loc_0xFC:
  lwz       r0, 0x24(r1)
  lfd       f31, 0x18(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}