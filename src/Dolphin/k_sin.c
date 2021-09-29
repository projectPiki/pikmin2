

/*
 * --INFO--
 * Address:	800CEC7C
 * Size:	0000A0
 */
void __kernel_sin(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  lis       r0, 0x3E40
  stfd      f1, 0x8(r1)
  lwz       r4, 0x8(r1)
  rlwinm    r4,r4,0,1,31
  cmpw      r4, r0
  bge-      .loc_0x34
  fctiwz    f0, f1
  stfd      f0, 0x10(r1)
  lwz       r0, 0x14(r1)
  cmpwi     r0, 0
  bne-      .loc_0x34
  b         .loc_0x98

.loc_0x34:
  lfd       f6, 0x8(r1)
  cmpwi     r3, 0
  lfd       f5, -0x6E58(r2)
  fmul      f7, f6, f6
  lfd       f4, -0x6E60(r2)
  lfd       f3, -0x6E68(r2)
  lfd       f1, -0x6E70(r2)
  lfd       f0, -0x6E78(r2)
  fmadd     f4, f5, f7, f4
  fmul      f5, f7, f6
  fmadd     f3, f7, f4, f3
  fmadd     f1, f7, f3, f1
  fmadd     f1, f7, f1, f0
  bne-      .loc_0x7C
  lfd       f0, -0x6E50(r2)
  fmadd     f0, f7, f1, f0
  fmadd     f1, f5, f0, f6
  b         .loc_0x98

.loc_0x7C:
  fmul      f0, f5, f1
  lfd       f1, -0x6E48(r2)
  lfd       f3, -0x6E50(r2)
  fmsub     f0, f1, f2, f0
  fmsub     f0, f7, f0, f2
  fnmsub    f0, f3, f5, f0
  fsub      f1, f6, f0

.loc_0x98:
  addi      r1, r1, 0x20
  blr
*/
}