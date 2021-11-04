

/*
 * --INFO--
 * Address:	........
 * Size:	0000CC
 */
void __temp_file_name(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void __rename_file(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void __delete_file(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000048
 */
void __init_uart_console(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800CC2E0
 * Size:	0000D0
 */
void __write_console(void)
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
	  bl        0x1EDE4
	  rlwinm.   r0,r3,0,2,2
	  bne-      .loc_0x98
	  lwz       r0, -0x7338(r13)
	  li        r3, 0
	  cmpwi     r0, 0
	  bne-      .loc_0x64
	  lis       r3, 0x1
	  subi      r3, r3, 0x1F00
	  bl        0x15548
	  cmpwi     r3, 0
	  bne-      .loc_0x64
	  li        r0, 0x1
	  stw       r0, -0x7338(r13)

	.loc_0x64:
	  cmpwi     r3, 0
	  beq-      .loc_0x74
	  li        r3, 0x1
	  b         .loc_0xB0

	.loc_0x74:
	  lwz       r4, 0x0(r30)
	  mr        r3, r29
	  bl        0x1558C
	  cmpwi     r3, 0
	  beq-      .loc_0x98
	  li        r0, 0
	  li        r3, 0x1
	  stw       r0, 0x0(r30)
	  b         .loc_0xB0

	.loc_0x98:
	  mr        r3, r28
	  mr        r4, r29
	  mr        r5, r30
	  mr        r6, r31
	  bl        -0xB8F8
	  li        r3, 0

	.loc_0xB0:
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
