

/*
 * --INFO--
 * Address:	........
 * Size:	0000CC
 */
void GXBeginDisplayList(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000C4
 */
void GXEndDisplayList(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800E93D8
 * Size:	000070
 */
void GXCallDisplayList(void)
{
/*
.loc_0x0:
  mflr      r0
  stw       r0, 0x4(r1)
  stwu      r1, -0x18(r1)
  stw       r31, 0x14(r1)
  addi      r31, r4, 0
  stw       r30, 0x10(r1)
  addi      r30, r3, 0
  lwz       r5, -0x6D70(r2)
  lwz       r0, 0x5AC(r5)
  cmplwi    r0, 0
  beq-      .loc_0x30
  bl        -0x3AFC

.loc_0x30:
  lwz       r3, -0x6D70(r2)
  lwz       r0, 0x0(r3)
  cmplwi    r0, 0
  bne-      .loc_0x44
  bl        -0x39C0

.loc_0x44:
  li        r0, 0x40
  lis       r3, 0xCC01
  stb       r0, -0x8000(r3)
  stw       r30, -0x8000(r3)
  stw       r31, -0x8000(r3)
  lwz       r0, 0x1C(r1)
  lwz       r31, 0x14(r1)
  lwz       r30, 0x10(r1)
  addi      r1, r1, 0x18
  mtlr      r0
  blr
*/
}