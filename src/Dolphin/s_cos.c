

/*
 * --INFO--
 * Address:	800CF2B4
 * Size:	0000D4
 */
void cos(void)
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
  bgt-      .loc_0x34
  lfd       f2, -0x6DD0(r2)
  bl        -0x15AC
  b         .loc_0xC4

.loc_0x34:
  lis       r0, 0x7FF0
  cmpw      r3, r0
  blt-      .loc_0x48
  fsub      f1, f1, f1
  b         .loc_0xC4

.loc_0x48:
  addi      r3, r1, 0x10
  bl        -0x196C
  rlwinm    r0,r3,0,30,31
  cmpwi     r0, 0x1
  beq-      .loc_0x88
  bge-      .loc_0x6C
  cmpwi     r0, 0
  bge-      .loc_0x78
  b         .loc_0xB4

.loc_0x6C:
  cmpwi     r0, 0x3
  bge-      .loc_0xB4
  b         .loc_0xA0

.loc_0x78:
  lfd       f1, 0x10(r1)
  lfd       f2, 0x18(r1)
  bl        -0x1600
  b         .loc_0xC4

.loc_0x88:
  lfd       f1, 0x10(r1)
  li        r3, 0x1
  lfd       f2, 0x18(r1)
  bl        -0x6CC
  fneg      f1, f1
  b         .loc_0xC4

.loc_0xA0:
  lfd       f1, 0x10(r1)
  lfd       f2, 0x18(r1)
  bl        -0x1628
  fneg      f1, f1
  b         .loc_0xC4

.loc_0xB4:
  lfd       f1, 0x10(r1)
  li        r3, 0x1
  lfd       f2, 0x18(r1)
  bl        -0x6F8

.loc_0xC4:
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}