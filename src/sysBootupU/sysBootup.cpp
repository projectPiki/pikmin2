

/*
 * --INFO--
 * Address:	........
 * Size:	0000E4
 */
void _Print(char *, ...)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	804111B4
 * Size:	000050
 */
void main(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lis       r3, 0x804A
  stw       r0, 0x14(r1)
  subi      r3, r3, 0x6A30
  crclr     6, 0x6
  bl        -0x323AE0
  bl        0x11A94
  li        r3, 0xE0
  bl        -0x3ED334
  mr.       r0, r3
  beq-      .loc_0x38
  bl        0x11204
  mr        r0, r3

.loc_0x38:
  mr        r3, r0
  bl        0x11C94
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}
