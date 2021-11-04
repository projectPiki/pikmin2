

/*
 * --INFO--
 * Address:	800C0C50
 * Size:	000024
 */
void ddh_cc_initinterrupts(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        0x119EC
	  lwz       r0, 0x14(r1)
	  li        r3, 0
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800C0C74
 * Size:	000070
 */
void ddh_cc_peek(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x810(r1)
	  mflr      r0
	  stw       r0, 0x814(r1)
	  stw       r31, 0x80C(r1)
	  bl        0x119C8
	  mr.       r31, r3
	  bgt-      .loc_0x24
	  li        r3, 0
	  b         .loc_0x5C

	.loc_0x24:
	  mr        r4, r31
	  addi      r3, r1, 0x8
	  bl        0x119B4
	  cmpwi     r3, 0
	  bne-      .loc_0x50
	  lis       r3, 0x804F
	  mr        r5, r31
	  addi      r3, r3, 0x5020
	  addi      r4, r1, 0x8
	  bl        0x3E0
	  b         .loc_0x58

	.loc_0x50:
	  li        r3, -0x2719
	  b         .loc_0x5C

	.loc_0x58:
	  mr        r3, r31

	.loc_0x5C:
	  lwz       r0, 0x814(r1)
	  lwz       r31, 0x80C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x810
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800C0CE4
 * Size:	000024
 */
void ddh_cc_post_stop(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        0x11974
	  lwz       r0, 0x14(r1)
	  li        r3, 0
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800C0D08
 * Size:	000024
 */
void ddh_cc_pre_continue(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        0x11954
	  lwz       r0, 0x14(r1)
	  li        r3, 0
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800C0D2C
 * Size:	0000C0
 */
void ddh_cc_write(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r5, 0x8048
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  subi      r31, r5, 0x62B0
	  stw       r30, 0x18(r1)
	  mr        r30, r4
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  lwz       r0, -0x7370(r13)
	  cmpwi     r0, 0
	  bne-      .loc_0x4C
	  addi      r4, r31, 0
	  li        r3, 0x8
	  crclr     6, 0x6
	  bl        0x7DC
	  li        r3, -0x2711
	  b         .loc_0xA4

	.loc_0x4C:
	  mr        r5, r3
	  mr        r6, r4
	  addi      r4, r31, 0x14
	  li        r3, 0x8
	  crclr     6, 0x6
	  bl        0x7BC
	  b         .loc_0x98

	.loc_0x68:
	  mr        r5, r30
	  addi      r4, r31, 0x40
	  li        r3, 0x1
	  crclr     6, 0x6
	  bl        0x7A4
	  mr        r3, r29
	  mr        r4, r30
	  bl        0x118AC
	  cmpwi     r3, 0
	  beq-      .loc_0xA0
	  add       r29, r29, r3
	  sub       r30, r30, r3

	.loc_0x98:
	  cmpwi     r30, 0
	  bgt+      .loc_0x68

	.loc_0xA0:
	  li        r3, 0

	.loc_0xA4:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800C0DEC
 * Size:	0000EC
 */
void ddh_cc_read(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x820(r1)
	  mflr      r0
	  stw       r0, 0x824(r1)
	  stmw      r27, 0x80C(r1)
	  mr        r27, r3
	  mr        r30, r4
	  li        r29, 0
	  lwz       r0, -0x7370(r13)
	  cmpwi     r0, 0
	  bne-      .loc_0x30
	  li        r3, -0x2711
	  b         .loc_0xD8

	.loc_0x30:
	  lis       r3, 0x8048
	  mr        r5, r30
	  subi      r4, r3, 0x6254
	  mr        r6, r30
	  li        r3, 0x1
	  crclr     6, 0x6
	  bl        0x714
	  lis       r3, 0x804F
	  addi      r31, r3, 0x5020
	  b         .loc_0x8C

	.loc_0x58:
	  li        r29, 0
	  bl        0x11804
	  mr.       r28, r3
	  beq-      .loc_0x8C
	  mr        r4, r28
	  addi      r3, r1, 0x8
	  bl        0x117F8
	  mr.       r29, r3
	  bne-      .loc_0x8C
	  mr        r3, r31
	  mr        r5, r28
	  addi      r4, r1, 0x8
	  bl        0x228

	.loc_0x8C:
	  mr        r3, r31
	  bl        0x378
	  cmplw     r3, r30
	  blt+      .loc_0x58
	  cmplwi    r29, 0
	  bne-      .loc_0xBC
	  lis       r3, 0x804F
	  mr        r4, r27
	  addi      r3, r3, 0x5020
	  mr        r5, r30
	  bl        0xF4
	  b         .loc_0xD4

	.loc_0xBC:
	  lis       r3, 0x8048
	  mr        r5, r29
	  subi      r4, r3, 0x622C
	  li        r3, 0x8
	  crclr     6, 0x6
	  bl        0x68C

	.loc_0xD4:
	  mr        r3, r29

	.loc_0xD8:
	  lmw       r27, 0x80C(r1)
	  lwz       r0, 0x824(r1)
	  mtlr      r0
	  addi      r1, r1, 0x820
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800C0ED8
 * Size:	000008
 */
void ddh_cc_close(void)
{
	/*
	.loc_0x0:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800C0EE0
 * Size:	000024
 */
void ddh_cc_open(void)
{
	/*
	.loc_0x0:
	  lwz       r0, -0x7370(r13)
	  cmpwi     r0, 0
	  beq-      .loc_0x14
	  li        r3, -0x2715
	  blr

	.loc_0x14:
	  li        r0, 0x1
	  li        r3, 0
	  stw       r0, -0x7370(r13)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800C0F04
 * Size:	000008
 */
void ddh_cc_shutdown(void)
{
	/*
	.loc_0x0:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800C0F0C
 * Size:	000088
 */
void ddh_cc_initialize(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r5, 0x8048
	  stw       r0, 0x14(r1)
	  subi      r0, r5, 0x61FC
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r4, r0
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  li        r3, 0x1
	  crclr     6, 0x6
	  bl        0x60C
	  mr        r3, r30
	  mr        r4, r31
	  bl        0x116FC
	  lis       r4, 0x8048
	  li        r3, 0x1
	  subi      r4, r4, 0x61E8
	  crclr     6, 0x6
	  bl        0x5EC
	  lis       r3, 0x804F
	  lis       r4, 0x804F
	  addi      r3, r3, 0x5020
	  li        r5, 0x800
	  addi      r4, r4, 0x4820
	  bl        0x230
	  lwz       r0, 0x14(r1)
	  li        r3, 0
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}
