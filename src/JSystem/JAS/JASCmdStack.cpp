

/*
 * --INFO--
 * Address:	800A6724
 * Size:	00005C
 */
void JASPortCmd::addPortCmdOnce()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  bl        0x484FC
	  lis       r4, 0x8051
	  addi      r0, r4, 0x218C
	  mr        r4, r30
	  mr        r30, r3
	  mr        r3, r0
	  bl        -0x7FE70
	  mr        r31, r3
	  mr        r3, r30
	  bl        0x48500
	  lwz       r0, 0x14(r1)
	  mr        r3, r31
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00005C
 */
void JASPortCmd::addPortCmdStay()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00005C
 */
void JASPortCmd::cancelPortCmdStay()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800A6780
 * Size:	000024
 */
void JASPortCmd::setPortCmd(void (*)(JASPortArgs*), JASPortArgs*)
{
	/*
	.loc_0x0:
	  lwz       r0, 0x4(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x14
	  li        r3, 0
	  blr

	.loc_0x14:
	  stw       r4, 0x10(r3)
	  stw       r5, 0x14(r3)
	  li        r3, 0x1
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800A67A4
 * Size:	000034
 */
void JASPortCmd::execAllCommand()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r3, 0x8051
	  stw       r0, 0x14(r1)
	  addi      r3, r3, 0x218C
	  bl        .loc_0x34
	  lis       r3, 0x8051
	  addi      r3, r3, 0x21A4
	  bl        0x9C
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr

	.loc_0x34:
	*/
}

/*
 * --INFO--
 * Address:	800A67D8
 * Size:	000088
 */
void JASPortCmd::TPortHead::execCommandOnce(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  bl        0x48440
	  lwz       r29, 0x0(r28)
	  mr        r30, r3
	  b         .loc_0x58

	.loc_0x30:
	  lwz       r3, 0x0(r29)
	  lwz       r31, 0xC(r29)
	  lwz       r12, 0x10(r3)
	  lwz       r3, 0x14(r3)
	  mtctr     r12
	  bctrl
	  mr        r3, r28
	  mr        r4, r29
	  bl        -0x7FC04
	  mr        r29, r31

	.loc_0x58:
	  cmplwi    r29, 0
	  bne+      .loc_0x30
	  mr        r3, r30
	  bl        0x48424
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
 * Address:	800A6860
 * Size:	000068
 */
void JASPortCmd::TPortHead::execCommandStay(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  bl        0x483C0
	  lwz       r30, 0x0(r30)
	  mr        r31, r3
	  b         .loc_0x40

	.loc_0x28:
	  lwz       r3, 0x0(r30)
	  lwz       r12, 0x10(r3)
	  lwz       r3, 0x14(r3)
	  mtctr     r12
	  bctrl
	  lwz       r30, 0xC(r30)

	.loc_0x40:
	  cmplwi    r30, 0
	  bne+      .loc_0x28
	  mr        r3, r31
	  bl        0x483B4
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800A68C8
 * Size:	00006C
 */
void __sinit_JASCmdStack_cpp(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r3, 0x8051
	  stw       r0, 0x14(r1)
	  addi      r3, r3, 0x218C
	  bl        -0x8000C
	  lis       r3, 0x8051
	  lis       r4, 0x800A
	  lis       r5, 0x804F
	  addi      r3, r3, 0x218C
	  addi      r4, r4, 0x6934
	  addi      r5, r5, 0x6E8
	  bl        0x1AE08
	  lis       r3, 0x8051
	  addi      r3, r3, 0x21A4
	  bl        -0x80034
	  lis       r3, 0x8051
	  lis       r4, 0x800A
	  lis       r5, 0x804F
	  addi      r3, r3, 0x21A4
	  addi      r4, r4, 0x6934
	  addi      r5, r5, 0x6F4
	  bl        0x1ADE0
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800A6934
 * Size:	000058
 */
void JASPortCmd::TPortHead::__dt(void)
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
	  beq-      .loc_0x3C
	  beq-      .loc_0x2C
	  li        r4, 0
	  bl        -0x800F4

	.loc_0x2C:
	  extsh.    r0, r31
	  ble-      .loc_0x3C
	  mr        r3, r30
	  bl        -0x828B8

	.loc_0x3C:
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
 * Address:	........
 * Size:	000054
 */
void JSUList<JASPortCmd>::~JSUList()
{
	// UNUSED FUNCTION
}
