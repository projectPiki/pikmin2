

/*
 * --INFO--
 * Address:	800CF4D0
 * Size:	00008C
 */
void frexp(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  li        r4, 0
  lis       r0, 0x7FF0
  stfd      f1, 0x8(r1)
  lwz       r5, 0x8(r1)
  stw       r4, 0x0(r3)
  rlwinm    r4,r5,0,1,31
  lwz       r6, 0xC(r1)
  cmpw      r4, r0
  bge-      .loc_0x30
  or.       r0, r4, r6
  bne-      .loc_0x38

.loc_0x30:
  lfd       f1, 0x8(r1)
  b         .loc_0x84

.loc_0x38:
  lis       r0, 0x10
  cmpw      r4, r0
  bge-      .loc_0x60
  lfd       f0, -0x6DB8(r2)
  li        r0, -0x36
  stw       r0, 0x0(r3)
  fmul      f0, f1, f0
  stfd      f0, 0x8(r1)
  lwz       r5, 0x8(r1)
  rlwinm    r4,r5,0,1,31

.loc_0x60:
  rlwinm    r0,r5,0,12,0
  lwz       r5, 0x0(r3)
  srawi     r4, r4, 0x14
  oris      r0, r0, 0x3FE0
  stw       r0, 0x8(r1)
  add       r4, r4, r5
  subi      r0, r4, 0x3FE
  stw       r0, 0x0(r3)
  lfd       f1, 0x8(r1)

.loc_0x84:
  addi      r1, r1, 0x10
  blr
*/
}