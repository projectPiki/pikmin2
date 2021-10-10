

/*
 * --INFO--
 * Address:	80022E1C
 * Size:	00007C
 */
void JKRFile::read(void*, long, long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r6
	  stw       r30, 0x18(r1)
	  mr        r30, r5
	  stw       r29, 0x14(r1)
	  mr        r29, r4
	  stw       r28, 0x10(r1)
	  mr        r28, r3

	.loc_0x2C:
	  mr        r3, r28
	  mr        r4, r29
	  lwz       r12, 0x0(r28)
	  mr        r5, r30
	  mr        r6, r31
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  cmpw      r30, r3
	  beq-      .loc_0x5C
	  bl        0xAE3C4
	  b         .loc_0x2C

	.loc_0x5C:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  lwz       r28, 0x10(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00007C
 */
void JKRFile::write(const void*, long, long)
{
	// UNUSED FUNCTION
}