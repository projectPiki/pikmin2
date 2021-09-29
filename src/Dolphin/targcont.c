

/*
 * --INFO--
 * Address:	800C09BC
 * Size:	000034
 */
void TRKTargetContinue(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  li        r3, 0
  stw       r0, 0x14(r1)
  bl        -0x265C
  bl        -0x458
  bl        -0x28B0
  bl        -0x430
  lwz       r0, 0x14(r1)
  li        r3, 0
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000094
 */
void OutputGPR(void)
{
	// UNUSED FUNCTION
}