

/*
 * --INFO--
 * Address:	800CF81C
 * Size:	0000D8
 */
void sin(void)
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
  lfd       f2, -0x6D88(r2)
  li        r3, 0
  bl        -0xBD0
  b         .loc_0xC8

.loc_0x38:
  lis       r0, 0x7FF0
  cmpw      r3, r0
  blt-      .loc_0x4C
  fsub      f1, f1, f1
  b         .loc_0xC8

.loc_0x4C:
  addi      r3, r1, 0x10
  bl        -0x1ED8
  rlwinm    r0,r3,0,30,31
  cmpwi     r0, 0x1
  beq-      .loc_0x90
  bge-      .loc_0x70
  cmpwi     r0, 0
  bge-      .loc_0x7C
  b         .loc_0xB8

.loc_0x70:
  cmpwi     r0, 0x3
  bge-      .loc_0xB8
  b         .loc_0xA0

.loc_0x7C:
  lfd       f1, 0x10(r1)
  li        r3, 0x1
  lfd       f2, 0x18(r1)
  bl        -0xC28
  b         .loc_0xC8

.loc_0x90:
  lfd       f1, 0x10(r1)
  lfd       f2, 0x18(r1)
  bl        -0x1B80
  b         .loc_0xC8

.loc_0xA0:
  lfd       f1, 0x10(r1)
  li        r3, 0x1
  lfd       f2, 0x18(r1)
  bl        -0xC4C
  fneg      f1, f1
  b         .loc_0xC8

.loc_0xB8:
  lfd       f1, 0x10(r1)
  lfd       f2, 0x18(r1)
  bl        -0x1BA8
  fneg      f1, f1

.loc_0xC8:
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}