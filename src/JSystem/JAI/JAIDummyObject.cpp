

/*
 * --INFO--
 * Address:	800AD490
 * Size:	0000DC
 */
void JAInter::DummyObjectMgr::init(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  lwz       r31, -0x7494(r13)
	  bl        0x6C4
	  mulli     r3, r3, 0x1C
	  mr        r4, r31
	  li        r5, 0x20
	  bl        -0x89470
	  li        r0, 0
	  stw       r3, -0x7468(r13)
	  li        r31, 0x1
	  li        r30, 0x1C
	  stw       r3, -0x7470(r13)
	  stw       r0, -0x746C(r13)
	  stw       r0, 0x0(r3)
	  lwz       r3, -0x7468(r13)
	  addi      r0, r3, 0x1C
	  stw       r0, 0x4(r3)
	  b         .loc_0x8C

	.loc_0x58:
	  subi      r0, r31, 0x1
	  addi      r3, r31, 0x1
	  mulli     r4, r0, 0x1C
	  lwz       r5, -0x7468(r13)
	  addi      r0, r30, 0x4
	  addi      r31, r31, 0x1
	  add       r4, r5, r4
	  stwx      r4, r5, r30
	  mulli     r3, r3, 0x1C
	  addi      r30, r30, 0x1C
	  lwz       r4, -0x7468(r13)
	  add       r3, r4, r3
	  stwx      r3, r4, r0

	.loc_0x8C:
	  bl        0x650
	  subi      r0, r3, 0x1
	  cmplw     r31, r0
	  blt+      .loc_0x58
	  subi      r0, r31, 0x1
	  lwz       r3, -0x7468(r13)
	  mulli     r0, r0, 0x1C
	  li        r4, 0
	  mulli     r5, r31, 0x1C
	  add       r0, r3, r0
	  stwx      r0, r3, r5
	  lwz       r0, -0x7468(r13)
	  add       r3, r0, r5
	  stw       r4, 0x4(r3)
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800AD56C
 * Size:	000068
 */
void JAInter::DummyObjectMgr::getPointer((unsigned long))
{
	/*
	.loc_0x0:
	  lwz       r0, -0x7470(r13)
	  subi      r5, r13, 0x7470
	  subi      r6, r13, 0x746C
	  cmplwi    r0, 0
	  beq-      .loc_0x5C
	  lwz       r7, 0x0(r5)
	  lwz       r4, 0x0(r6)
	  lwz       r0, 0x4(r7)
	  cmplwi    r4, 0
	  stw       r0, 0x0(r5)
	  beq-      .loc_0x3C
	  stw       r4, 0x4(r7)
	  lwz       r4, 0x0(r6)
	  stw       r7, 0x0(r4)
	  b         .loc_0x44

	.loc_0x3C:
	  li        r0, 0
	  stw       r0, 0x4(r7)

	.loc_0x44:
	  li        r0, 0
	  stw       r0, 0x0(r7)
	  stw       r7, 0x0(r6)
	  stw       r3, 0x18(r7)
	  stw       r0, 0x8(r7)
	  b         .loc_0x60

	.loc_0x5C:
	  li        r7, 0

	.loc_0x60:
	  mr        r3, r7
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000074
 */
void JAInter::DummyObjectMgr::releasePointer((JAInter::DummyVec*))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800AD5D4
 * Size:	0000F8
 */
void JAInter::DummyObjectMgr::check(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  lwz       r31, -0x746C(r13)
	  b         .loc_0xD8

	.loc_0x1C:
	  lwz       r3, 0x18(r31)
	  lwz       r30, 0x4(r31)
	  subi      r0, r3, 0x1
	  stw       r0, 0x18(r31)
	  lwz       r0, 0x18(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x44
	  lwz       r0, 0x8(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0xD4

	.loc_0x44:
	  lwz       r3, 0x8(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x64
	  lwz       r12, 0x10(r3)
	  li        r4, 0
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl

	.loc_0x64:
	  lwz       r0, -0x746C(r13)
	  subi      r4, r13, 0x7470
	  subi      r3, r13, 0x746C
	  cmplw     r0, r31
	  beq-      .loc_0x9C
	  lwz       r0, 0x4(r31)
	  lwz       r3, 0x0(r31)
	  stw       r0, 0x4(r3)
	  lwz       r3, 0x4(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0xB8
	  lwz       r0, 0x0(r31)
	  stw       r0, 0x0(r3)
	  b         .loc_0xB8

	.loc_0x9C:
	  lwz       r0, 0x4(r31)
	  stw       r0, 0x0(r3)
	  lwz       r3, 0x4(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0xB8
	  li        r0, 0
	  stw       r0, 0x0(r3)

	.loc_0xB8:
	  lwz       r0, 0x0(r4)
	  stw       r0, 0x4(r31)
	  lwz       r3, 0x4(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0xD0
	  stw       r31, 0x0(r3)

	.loc_0xD0:
	  stw       r31, 0x0(r4)

	.loc_0xD4:
	  mr        r31, r30

	.loc_0xD8:
	  cmplwi    r31, 0
	  bne+      .loc_0x1C
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}
