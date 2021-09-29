

/*
 * --INFO--
 * Address:	........
 * Size:	000068
 */
void __ct__Q22og5Lib2DFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8030F600
 * Size:	000068
 */
void __dt__Q22og5Lib2DFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r4
  stw       r30, 0x8(r1)
  mr.       r30, r3
  beq-      .loc_0x4C
  lis       r4, 0x804E
  li        r0, 0
  subi      r5, r4, 0x7C78
  li        r4, 0
  stw       r5, 0x0(r30)
  stw       r0, -0x6840(r13)
  bl        -0x2F2604
  extsh.    r0, r31
  ble-      .loc_0x4C
  mr        r3, r30
  bl        -0x2EB594

.loc_0x4C:
  lwz       r0, 0x14(r1)
  mr        r3, r30
  lwz       r31, 0xC(r1)
  lwz       r30, 0x8(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8030F668
 * Size:	000088
 */
void create__Q22og5Lib2DFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  lwz       r0, -0x6840(r13)
  cmplwi    r0, 0
  bne-      .loc_0x74
  li        r3, 0x1C
  bl        -0x2EB7E4
  mr.       r0, r3
  beq-      .loc_0x70
  mr        r31, r0
  bl        -0x2F26CC
  lis       r3, 0x804E
  li        r0, 0
  subi      r4, r3, 0x7C78
  li        r3, 0x4
  stw       r4, 0x0(r31)
  stw       r0, 0x18(r31)
  bl        -0x2EB810
  mr.       r0, r3
  beq-      .loc_0x60
  bl        0x12E52C
  mr        r0, r3

.loc_0x60:
  stw       r0, 0x18(r31)
  lwz       r3, 0x18(r31)
  bl        0x12E520
  mr        r0, r31

.loc_0x70:
  stw       r0, -0x6840(r13)

.loc_0x74:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}