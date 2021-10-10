

/*
 * --INFO--
 * Address:	8030F31C
 * Size:	000080
 */
void og::Screen::DispMemberBase::isID((unsigned long, unsigned long long))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stmw      r27, 0xC(r1)
	  mr        r27, r3
	  mr        r28, r4
	  mr        r30, r5
	  mr        r29, r6
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  mr        r31, r3
	  mr        r3, r27
	  lwz       r12, 0x0(r27)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  cmplw     r28, r31
	  bne-      .loc_0x68
	  xor       r4, r29, r4
	  xor       r0, r30, r3
	  or.       r0, r4, r0
	  bne-      .loc_0x68
	  li        r3, 0x1
	  b         .loc_0x6C

	.loc_0x68:
	  li        r3, 0

	.loc_0x6C:
	  lmw       r27, 0xC(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8030F39C
 * Size:	000040
 */
void og::Screen::DispMemberBase::getMemberName((char*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  mr        r5, r31
	  bl        -0xC7F8
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8030F3DC
 * Size:	0000E4
 */
void og::Screen::DispMemberBase::setSubMember((og::Screen::DispMemberBase*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  li        r0, 0
	  stw       r31, 0x3C(r1)
	  mr        r31, r3
	  stw       r30, 0x38(r1)
	  mr        r30, r4
	  stw       r0, 0x4(r4)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  addi      r5, r1, 0x2C
	  li        r3, 0
	  bl        -0xC850
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  addi      r5, r1, 0x20
	  bl        -0xC86C
	  li        r0, 0xA
	  mtctr     r0

	.loc_0x68:
	  lwz       r0, 0x4(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0xC0
	  stw       r30, 0x4(r31)
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  addi      r5, r1, 0x14
	  li        r3, 0
	  bl        -0xC8A8
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  addi      r5, r1, 0x8
	  bl        -0xC8C4
	  li        r3, 0x1
	  b         .loc_0xCC

	.loc_0xC0:
	  mr        r31, r0
	  bdnz+     .loc_0x68
	  li        r3, 0

	.loc_0xCC:
	  lwz       r0, 0x44(r1)
	  lwz       r31, 0x3C(r1)
	  lwz       r30, 0x38(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8030F4C0
 * Size:	00010C
 */
void og::Screen::DispMemberBase::getSubMember((unsigned long,
                                               unsigned long long))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stmw      r25, 0x24(r1)
	  mr        r29, r4
	  mr        r31, r5
	  mr        r30, r6
	  li        r27, 0

	.loc_0x20:
	  lwz       r26, 0x4(r3)
	  cmplwi    r26, 0
	  beq-      .loc_0xF4
	  mr        r3, r26
	  lwz       r12, 0x0(r26)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  mr        r0, r3
	  mr        r3, r26
	  lwz       r12, 0x0(r26)
	  mr        r28, r0
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  mr        r25, r4
	  mr        r4, r28
	  mr        r28, r3
	  addi      r5, r1, 0x14
	  li        r3, 0
	  bl        -0xC964
	  mr        r4, r25
	  mr        r3, r28
	  addi      r5, r1, 0x8
	  bl        -0xC974
	  mr        r3, r26
	  lwz       r12, 0x0(r26)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  mr        r28, r3
	  mr        r3, r26
	  lwz       r12, 0x0(r26)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  cmplw     r29, r28
	  bne-      .loc_0xD0
	  xor       r4, r30, r4
	  xor       r0, r31, r3
	  or.       r0, r4, r0
	  bne-      .loc_0xD0
	  li        r0, 0x1
	  b         .loc_0xD4

	.loc_0xD0:
	  li        r0, 0

	.loc_0xD4:
	  rlwinm.   r0,r0,0,24,31
	  beq-      .loc_0xE4
	  mr        r3, r26
	  b         .loc_0xF8

	.loc_0xE4:
	  addi      r27, r27, 0x1
	  mr        r3, r26
	  cmpwi     r27, 0xA
	  blt+      .loc_0x20

	.loc_0xF4:
	  li        r3, 0

	.loc_0xF8:
	  lmw       r25, 0x24(r1)
	  lwz       r0, 0x44(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8030F5CC
 * Size:	000034
 */
void og::Screen::DispMemberBase::setSubMemberAll(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  li        r0, 0
	  stw       r0, 0x4(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}
