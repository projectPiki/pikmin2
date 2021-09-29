

/*
 * --INFO--
 * Address:	800CF28C
 * Size:	000028
 */
void copysign(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  stfd      f1, 0x8(r1)
  stfd      f2, 0x10(r1)
  lwz       r3, 0x8(r1)
  lwz       r0, 0x10(r1)
  rlwimi    r0,r3,0,1,31
  stw       r0, 0x8(r1)
  lfd       f1, 0x8(r1)
  addi      r1, r1, 0x20
  blr
*/
}