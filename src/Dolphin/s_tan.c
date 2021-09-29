

/*
 * --INFO--
 * Address:	800CF8F4
 * Size:	000078
 */
void tan(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  lis       r3, 0x3FE9
  stfd      f1, 0x8(r1)
  stw       r0, 0x24(r1)
  addi      r0, r3, 0x21FB
  lwz       r3, 0x8(r1)
  rlwinm    r3,r3,0,1,31
  cmpw      r3, r0
  bgt-      .loc_0x38
  lfd       f2, -0x6D80(r2)
  li        r3, 0x1
  bl        -0xC08
  b         .loc_0x68

.loc_0x38:
  lis       r0, 0x7FF0
  cmpw      r3, r0
  blt-      .loc_0x4C
  fsub      f1, f1, f1
  b         .loc_0x68

.loc_0x4C:
  addi      r3, r1, 0x10
  bl        -0x1FB0
  rlwinm    r0,r3,1,30,30
  lfd       f1, 0x10(r1)
  lfd       f2, 0x18(r1)
  subfic    r3, r0, 0x1
  bl        -0xC3C

.loc_0x68:
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}