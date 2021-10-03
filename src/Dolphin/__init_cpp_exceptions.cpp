

/*
 * --INFO--
 * Address:	800C22C4
 * Size:	000008
 */
void GetR2()
{
/*
.loc_0x0:
  mr        r3, r2
  blr
*/
}

/*
 * --INFO--
 * Address:	800C22CC
 * Size:	000034
 */
void __fini_cpp_exceptions(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r3, -0x7DE8(r13)
  cmpwi     r3, -0x2
  beq-      .loc_0x24
  bl        0x5C
  li        r0, -0x2
  stw       r0, -0x7DE8(r13)

.loc_0x24:
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	800C2300
 * Size:	000040
 */
void __init_cpp_exceptions(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r0, -0x7DE8(r13)
  cmpwi     r0, -0x2
  bne-      .loc_0x30
  bl        -0x54
  lis       r5, 0x8000
  mr        r4, r3
  addi      r3, r5, 0x569C
  bl        0x4C
  stw       r3, -0x7DE8(r13)

.loc_0x30:
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}
