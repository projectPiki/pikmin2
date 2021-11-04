

/*
 * --INFO--
 * Address:	800C040C
 * Size:	000058
 */
void TRK_main(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r4, 0x8048
	  li        r3, 0x1
	  stw       r0, 0x14(r1)
	  subi      r4, r4, 0x63C8
	  crclr     6, 0x6
	  bl        0x1120
	  bl        -0x4D30
	  lis       r4, 0x804F
	  cmpwi     r3, 0
	  stw       r3, 0x4808(r4)
	  bne-      .loc_0x3C
	  bl        -0x4D90
	  bl        -0x50B4

	.loc_0x3C:
	  bl        -0x4D70
	  lis       r4, 0x804F
	  stw       r3, 0x4808(r4)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}
