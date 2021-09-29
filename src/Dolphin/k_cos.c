

/*
 * --INFO--
 * Address:	800CDD34
 * Size:	0000F4
 */
void __kernel_cos(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  lis       r0, 0x3E40
  stfd      f1, 0x8(r1)
  lwz       r3, 0x8(r1)
  rlwinm    r4,r3,0,1,31
  cmpw      r4, r0
  bge-      .loc_0x38
  fctiwz    f0, f1
  stfd      f0, 0x18(r1)
  lwz       r0, 0x1C(r1)
  cmpwi     r0, 0
  bne-      .loc_0x38
  lfd       f1, -0x6F00(r2)
  b         .loc_0xEC

.loc_0x38:
  lfd       f6, 0x8(r1)
  lis       r3, 0x3FD3
  addi      r0, r3, 0x3333
  lfd       f5, -0x6ED0(r2)
  fmul      f7, f6, f6
  lfd       f0, -0x6ED8(r2)
  lfd       f4, -0x6EE0(r2)
  cmpw      r4, r0
  lfd       f3, -0x6EE8(r2)
  lfd       f1, -0x6EF0(r2)
  fmadd     f5, f5, f7, f0
  lfd       f0, -0x6EF8(r2)
  fmadd     f4, f7, f5, f4
  fmadd     f3, f7, f4, f3
  fmadd     f1, f7, f3, f1
  fmadd     f0, f7, f1, f0
  fmul      f4, f7, f0
  bge-      .loc_0x9C
  fmul      f0, f6, f2
  lfd       f1, -0x6EC8(r2)
  lfd       f2, -0x6F00(r2)
  fmsub     f0, f7, f4, f0
  fmsub     f0, f1, f7, f0
  fsub      f1, f2, f0
  b         .loc_0xEC

.loc_0x9C:
  lis       r0, 0x3FE9
  cmpw      r4, r0
  ble-      .loc_0xB4
  lfd       f0, -0x6EC0(r2)
  stfd      f0, 0x10(r1)
  b         .loc_0xC4

.loc_0xB4:
  subis     r3, r4, 0x20
  li        r0, 0
  stw       r3, 0x10(r1)
  stw       r0, 0x14(r1)

.loc_0xC4:
  lfd       f0, 0x8(r1)
  lfd       f3, 0x10(r1)
  fmul      f0, f0, f2
  lfd       f1, -0x6EC8(r2)
  lfd       f2, -0x6F00(r2)
  fmsub     f1, f1, f7, f3
  fmsub     f0, f7, f4, f0
  fsub      f2, f2, f3
  fsub      f0, f1, f0
  fsub      f1, f2, f0

.loc_0xEC:
  addi      r1, r1, 0x20
  blr
*/
}