

/*
 * --INFO--
 * Address:	........
 * Size:	0000E4
 */
void _Print(char*, ...)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80307B58
 * Size:	000090
 */
void og::Screen::ContenaCounter::__ct((og::Screen::DispMemberContena*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  bl        0x12D238
	  lis       r3, 0x804E
	  li        r0, 0
	  subi      r4, r3, 0x7FD8
	  mr        r3, r30
	  stw       r4, 0x0(r30)
	  stw       r31, 0x148(r30)
	  lwz       r4, 0x148(r30)
	  addi      r4, r4, 0xC
	  stw       r4, 0x164(r30)
	  lwz       r4, 0x148(r30)
	  addi      r4, r4, 0x28
	  stw       r4, 0x168(r30)
	  lwz       r4, 0x148(r30)
	  addi      r4, r4, 0x14
	  stw       r4, 0x16C(r30)
	  lwz       r4, 0x148(r30)
	  addi      r4, r4, 0x20
	  stw       r4, 0x170(r30)
	  stw       r0, 0x14C(r30)
	  stw       r0, 0x150(r30)
	  stw       r0, 0x154(r30)
	  stw       r0, 0x158(r30)
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
 * Address:	80307BE8
 * Size:	000140
 */
void og::Screen::ContenaCounter::setblo((char*, JKRArchive*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r5
	  mr        r6, r31
	  lis       r5, 0x104
	  stw       r30, 0x18(r1)
	  mr        r30, r3
	  bl        -0x2C85E8
	  li        r3, 0x4
	  oris      r3, r3, 0x4
	  mtspr     914, r3
	  li        r3, 0x5
	  oris      r3, r3, 0x5
	  mtspr     915, r3
	  li        r3, 0x6
	  oris      r3, r3, 0x6
	  mtspr     916, r3
	  li        r3, 0x7
	  oris      r3, r3, 0x7
	  mtspr     917, r3
	  mr        r3, r30
	  bl        -0x4930
	  mr        r3, r30
	  li        r4, 0xFF
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  stw       r31, 0x8(r1)
	  lis       r4, 0x615F
	  mr        r3, r30
	  li        r5, 0
	  lwz       r7, 0x164(r30)
	  addi      r6, r4, 0x6B31
	  li        r8, 0x5
	  li        r9, 0x1
	  li        r10, 0x1
	  bl        0x4984
	  stw       r3, 0x14C(r30)
	  lis       r4, 0x625F
	  mr        r3, r30
	  li        r5, 0
	  stw       r31, 0x8(r1)
	  addi      r6, r4, 0x6B31
	  li        r8, 0x4
	  li        r9, 0
	  lwz       r7, 0x168(r30)
	  li        r10, 0x1
	  bl        0x4958
	  stw       r3, 0x150(r30)
	  lis       r4, 0x635F
	  mr        r3, r30
	  li        r5, 0
	  stw       r31, 0x8(r1)
	  addi      r6, r4, 0x6B31
	  li        r8, 0x4
	  li        r9, 0x1
	  lwz       r7, 0x16C(r30)
	  li        r10, 0x1
	  bl        0x492C
	  stw       r3, 0x154(r30)
	  lis       r4, 0x645F
	  mr        r3, r30
	  li        r5, 0
	  stw       r31, 0x8(r1)
	  addi      r6, r4, 0x6B31
	  li        r8, 0x4
	  li        r9, 0x1
	  lwz       r7, 0x170(r30)
	  li        r10, 0x1
	  bl        0x4900
	  stw       r3, 0x158(r30)
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80307D28
 * Size:	0000A4
 */
void og::Screen::ContenaCounter::__dt(void)
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
	  beq-      .loc_0x88
	  lis       r3, 0x804E
	  subi      r0, r3, 0x7FD8
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x78
	  lis       r3, 0x804F
	  subi      r0, r3, 0x3B00
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x78
	  lis       r3, 0x804F
	  addic.    r0, r30, 0x118
	  subi      r0, r3, 0x3A60
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x6C
	  lis       r4, 0x804D
	  addi      r3, r30, 0x118
	  addi      r0, r4, 0x7B0C
	  li        r4, 0
	  stw       r0, 0x118(r30)
	  bl        0x1097F8

	.loc_0x6C:
	  mr        r3, r30
	  li        r4, 0
	  bl        -0x2C8880

	.loc_0x78:
	  extsh.    r0, r31
	  ble-      .loc_0x88
	  mr        r3, r30
	  bl        -0x2E3CF8

	.loc_0x88:
	  lwz       r0, 0x14(r1)
	  mr        r3, r30
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}
