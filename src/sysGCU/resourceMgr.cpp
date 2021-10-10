

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
 * Address:	........
 * Size:	00007C
 */
void Resource::Node::__ct((char const*))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	804330D8
 * Size:	0000DC
 */
void Resource::Node::__dt(void)
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
	  beq-      .loc_0xC0
	  lis       r3, 0x804F
	  subi      r3, r3, 0x3BB8
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x10
	  stw       r0, 0x18(r30)
	  lwz       r0, 0x3C(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0x5C
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x59C0
	  li        r4, 0x63
	  subi      r5, r5, 0x59B0
	  crclr     6, 0x6
	  bl        -0x408AF0

	.loc_0x5C:
	  lwz       r3, 0x3C(r30)
	  lwz       r0, 0x38(r3)
	  cmplw     r0, r30
	  beq-      .loc_0x88
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x59C0
	  li        r4, 0x65
	  subi      r5, r5, 0x59B0
	  crclr     6, 0x6
	  bl        -0x408B1C

	.loc_0x88:
	  lwz       r3, 0x3C(r30)
	  bl        0x344
	  mr        r3, r30
	  bl        -0x21B9C
	  addi      r3, r30, 0x18
	  li        r4, 0
	  bl        -0x416144
	  mr        r3, r30
	  li        r4, 0
	  bl        -0x21BFC
	  extsh.    r0, r31
	  ble-      .loc_0xC0
	  mr        r3, r30
	  bl        -0x40F0E0

	.loc_0xC0:
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
 * Size:	000040
 */
void Resource::Node::dump(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0001CC
 */
void Resource::Node::drawDump((Graphics&, int&, int&))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00003C
 */
void Resource::Node::becomeCurrentHeap(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000030
 */
void Resource::Node::destroy((Resource::Node*))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	804331B4
 * Size:	000138
 */
void Resource::MgrCommand::__ct((char*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  lis       r5, 0x804F
	  stw       r0, 0x44(r1)
	  subi      r0, r5, 0x4AD8
	  stw       r31, 0x3C(r1)
	  stw       r30, 0x38(r1)
	  mr        r30, r3
	  lis       r3, 0x804F
	  stw       r0, 0x0(r30)
	  li        r0, 0
	  subi      r31, r3, 0x3C28
	  addi      r3, r30, 0x18
	  stw       r0, 0x10(r30)
	  stw       r0, 0xC(r30)
	  stw       r0, 0x8(r30)
	  stw       r0, 0x4(r30)
	  stw       r4, 0x14(r30)
	  bl        -0x416230
	  lis       r4, 0x804F
	  addi      r3, r30, 0x3C
	  subi      r4, r4, 0x3BF8
	  stw       r4, 0x0(r30)
	  addi      r0, r4, 0x10
	  stw       r0, 0x18(r30)
	  bl        -0xEA00
	  li        r0, 0
	  lis       r3, 0x804B
	  stw       r0, 0xAC(r30)
	  lis       r4, 0x804F
	  addi      r10, r3, 0xF00
	  mr        r3, r30
	  stw       r0, 0xB0(r30)
	  subi      r9, r4, 0x3BD0
	  lwz       r4, 0x0(r31)
	  lwz       r0, 0x4(r31)
	  lwz       r11, 0x8(r31)
	  stw       r4, 0x20(r1)
	  stw       r10, 0xB4(r30)
	  stw       r9, 0xB4(r30)
	  stw       r30, 0xB8(r30)
	  stw       r4, 0xBC(r30)
	  stw       r0, 0xC0(r30)
	  stw       r11, 0xC4(r30)
	  lwz       r8, 0xC(r31)
	  lwz       r7, 0x10(r31)
	  lwz       r6, 0x14(r31)
	  stw       r0, 0x24(r1)
	  stw       r10, 0xC8(r30)
	  stw       r9, 0xC8(r30)
	  stw       r30, 0xCC(r30)
	  stw       r8, 0xD0(r30)
	  stw       r7, 0xD4(r30)
	  stw       r6, 0xD8(r30)
	  lwz       r5, 0x18(r31)
	  lwz       r4, 0x1C(r31)
	  lwz       r0, 0x20(r31)
	  stw       r11, 0x28(r1)
	  stw       r10, 0xDC(r30)
	  stw       r9, 0xDC(r30)
	  stw       r30, 0xE0(r30)
	  stw       r5, 0xE4(r30)
	  stw       r4, 0xE8(r30)
	  stw       r8, 0x14(r1)
	  stw       r7, 0x18(r1)
	  stw       r6, 0x1C(r1)
	  stw       r5, 0x8(r1)
	  stw       r4, 0xC(r1)
	  stw       r0, 0x10(r1)
	  stw       r0, 0xEC(r30)
	  bl        0x1DC
	  lwz       r0, 0x44(r1)
	  mr        r3, r30
	  lwz       r31, 0x3C(r1)
	  lwz       r30, 0x38(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000064
 */
void __dt__Q38Resource10MgrCommand26 @class$2436resourceMgr_cppFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	804332EC
 * Size:	0000B8
 */
void Resource::MgrCommand::__dt(void)
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
	  beq-      .loc_0x9C
	  lis       r3, 0x804F
	  subi      r3, r3, 0x3BF8
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x10
	  stw       r0, 0x18(r30)
	  lwz       r4, 0x38(r30)
	  cmplwi    r4, 0
	  beq-      .loc_0x4C
	  lwz       r3, 0x30(r4)
	  lbz       r4, 0x34(r4)
	  bl        -0x412B04

	.loc_0x4C:
	  mr        r3, r30
	  bl        -0x21D6C
	  addic.    r0, r30, 0x34
	  beq-      .loc_0x74
	  addic.    r3, r30, 0x3C
	  beq-      .loc_0x74
	  addic.    r3, r3, 0x5C
	  beq-      .loc_0x74
	  li        r4, 0
	  bl        -0x40CB8C

	.loc_0x74:
	  addi      r3, r30, 0x18
	  li        r4, 0
	  bl        -0x416334
	  mr        r3, r30
	  li        r4, 0
	  bl        -0x21DEC
	  extsh.    r0, r31
	  ble-      .loc_0x9C
	  mr        r3, r30
	  bl        -0x40F2D0

	.loc_0x9C:
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
 * Address:	804333A4
 * Size:	000070
 */
void Resource::MgrCommand::becomeCurrentHeap(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r0, 0x30(r3)
	  cmpwi     r0, -0x1
	  bne-      .loc_0x3C
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x59C0
	  li        r4, 0xBB
	  subi      r5, r5, 0x59B0
	  crclr     6, 0x6
	  bl        -0x408D9C

	.loc_0x3C:
	  lwz       r0, -0x77D4(r13)
	  stw       r0, 0xAC(r31)
	  lwz       r31, 0x38(r31)
	  lwz       r3, 0x30(r31)
	  bl        -0x40FE4C
	  lwz       r3, 0x30(r31)
	  lbz       r4, 0x34(r31)
	  bl        -0x40FBF0
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80433414
 * Size:	000088
 */
void Resource::MgrCommand::releaseCurrentHeap(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r0, 0x30(r3)
	  cmpwi     r0, -0x1
	  bne-      .loc_0x3C
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x59C0
	  li        r4, 0xC7
	  subi      r5, r5, 0x59B0
	  crclr     6, 0x6
	  bl        -0x408E0C

	.loc_0x3C:
	  lwz       r0, 0xAC(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x64
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x59C0
	  li        r4, 0xC9
	  subi      r5, r5, 0x59B0
	  crclr     6, 0x6
	  bl        -0x408E34

	.loc_0x64:
	  lwz       r3, 0xAC(r31)
	  bl        -0x40FED8
	  li        r0, 0
	  stw       r0, 0xAC(r31)
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000E8
 */
void Resource::MgrCommand::isFinish(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8043349C
 * Size:	00000C
 */
void Resource::MgrCommand::getResource(void)
{
	/*
	.loc_0x0:
	  lwz       r3, 0x38(r3)
	  lwz       r3, 0x38(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000040
 */
void Resource::MgrCommand::setModeMemory((Resource::Node*))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000040
 */
void Resource::MgrCommand::setModeAram((Resource::Node*, ARAM::Node*))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000040
 */
void Resource::MgrCommand::setModeDvd((Resource::Node*))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	804334A8
 * Size:	00001C
 */
void Resource::MgrCommand::setModeInvalid(void)
{
	/*
	.loc_0x0:
	  li        r4, -0x1
	  li        r0, 0
	  stw       r4, 0x30(r3)
	  stw       r0, 0x38(r3)
	  stb       r0, 0x34(r3)
	  stw       r0, 0xB0(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	804334C4
 * Size:	000048
 */
void Resource::MgrCommand::memoryCallBackFunc(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r4, 0x38(r3)
	  lwz       r3, 0x30(r4)
	  lbz       r4, 0x34(r4)
	  bl        -0x40FCD0
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x59C0
	  li        r4, 0x157
	  subi      r5, r5, 0x59A4
	  crclr     6, 0x6
	  bl        -0x408EB8
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8043350C
 * Size:	000094
 */
void Resource::MgrCommand::aramLoadCallBackFunc(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  lwz       r4, 0x38(r3)
	  lwz       r3, 0x30(r4)
	  lbz       r4, 0x34(r4)
	  bl        -0x40FD20
	  li        r0, 0x1
	  li        r3, -0x1
	  stw       r0, 0x8(r1)
	  li        r0, 0
	  li        r5, 0
	  li        r6, 0
	  stw       r3, 0xC(r1)
	  li        r7, 0
	  li        r8, 0x1
	  li        r9, 0
	  stw       r0, 0x10(r1)
	  lwz       r4, 0xA8(r31)
	  lwz       r10, 0x38(r31)
	  lwz       r3, -0x6458(r13)
	  lwz       r4, 0x14(r4)
	  lwz       r10, 0x30(r10)
	  bl        -0x6FC
	  cmplwi    r3, 0
	  beq-      .loc_0x80
	  lwz       r4, 0x38(r31)
	  stw       r3, 0x38(r4)
	  mr        r3, r31
	  bl        0xD4

	.loc_0x80:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	804335A0
 * Size:	0000BC
 */
void Resource::MgrCommand::dvdLoadCallBackFunc(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stw       r31, 0x2C(r1)
	  stw       r30, 0x28(r1)
	  li        r30, 0x1
	  stw       r29, 0x24(r1)
	  mr        r29, r3
	  lwz       r4, 0x38(r3)
	  lwz       r31, 0x14(r4)
	  lwz       r3, 0x30(r4)
	  lbz       r4, 0x34(r4)
	  bl        -0x40FDC4
	  lbz       r0, 0x0(r31)
	  extsb.    r0, r0
	  beq-      .loc_0x90
	  addi      r0, r1, 0x10
	  mr        r3, r31
	  stw       r0, 0x8(r1)
	  li        r4, 0
	  li        r5, 0x1
	  li        r6, 0
	  lwz       r7, 0x38(r29)
	  li        r8, 0x1
	  li        r9, 0
	  li        r10, 0
	  lwz       r7, 0x30(r7)
	  bl        -0x414484
	  mr.       r31, r3
	  beq-      .loc_0x8C
	  lwz       r4, 0x10(r1)
	  bl        -0x346F04
	  lwz       r3, 0x38(r29)
	  stw       r31, 0x38(r3)
	  b         .loc_0x90

	.loc_0x8C:
	  li        r30, 0

	.loc_0x90:
	  rlwinm.   r0,r30,0,24,31
	  beq-      .loc_0xA0
	  mr        r3, r29
	  bl        .loc_0xBC

	.loc_0xA0:
	  lwz       r0, 0x34(r1)
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  lwz       r29, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr

	.loc_0xBC:
	*/
}

/*
 * --INFO--
 * Address:	8043365C
 * Size:	000074
 */
void Resource::MgrCommand::userCallBackInvoke(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  lwz       r0, 0xB0(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x5C
	  lwz       r3, 0x38(r30)
	  lwz       r31, -0x77D4(r13)
	  lwz       r3, 0x30(r3)
	  bl        -0x4100E8
	  lwz       r3, 0xB0(r30)
	  mr        r4, r30
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  li        r0, 0
	  mr        r3, r31
	  stw       r0, 0xB0(r30)
	  bl        -0x410110

	.loc_0x5C:
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
 * Address:	........
 * Size:	000070
 */
void Resource::MgrCommand::destroy(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	804336D0
 * Size:	00010C
 */
void Resource::Mgr::__ct((JKRHeap*, unsigned long))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r6, 0x804F
	  stw       r0, 0x24(r1)
	  li        r0, 0
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  mr        r30, r5
	  stw       r29, 0x14(r1)
	  mr        r29, r4
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  subi      r3, r6, 0x3C04
	  stw       r3, 0x0(r28)
	  addi      r3, r28, 0x10
	  stw       r0, 0x4(r28)
	  stw       r0, 0x8(r28)
	  stw       r0, 0xC(r28)
	  bl        -0x22388
	  addi      r3, r28, 0x28
	  bl        -0x22390
	  li        r0, 0
	  cmplwi    r29, 0
	  stb       r0, 0x40(r28)
	  stb       r0, 0x41(r28)
	  stb       r0, 0x42(r28)
	  stb       r0, 0x43(r28)
	  lwz       r31, -0x77D4(r13)
	  bne-      .loc_0x78
	  mr        r29, r31

	.loc_0x78:
	  mr        r3, r30
	  mr        r4, r29
	  li        r5, 0x1
	  bl        -0x41388C
	  stw       r3, 0x4(r28)
	  lwz       r0, 0x4(r28)
	  cmplwi    r0, 0
	  bne-      .loc_0xB4
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x59C0
	  li        r4, 0x1E7
	  subi      r5, r5, 0x59B0
	  crclr     6, 0x6
	  bl        -0x409140

	.loc_0xB4:
	  stw       r30, 0x8(r28)
	  li        r0, 0
	  mr        r3, r31
	  lwz       r4, 0x8(r28)
	  stw       r4, 0xC(r28)
	  stb       r0, 0x40(r28)
	  stb       r0, 0x41(r28)
	  stb       r0, 0x42(r28)
	  stb       r0, 0x43(r28)
	  lwz       r0, 0x40(r28)
	  rlwinm    r0,r0,0,0,30
	  stw       r0, 0x40(r28)
	  bl        -0x410210
	  lwz       r0, 0x24(r1)
	  mr        r3, r28
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
 * Size:	00006C
 */
void Resource::Mgr::search((char const*))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000064
 */
void Resource::Mgr::dump(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	804337DC
 * Size:	000004
 */
void Resource::Mgr::drawDump((Graphics&, int, int))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	804337E0
 * Size:	0001B4
 */
void Resource::Mgr::createNewNode((char const*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x130(r1)
	  mflr      r0
	  stw       r0, 0x134(r1)
	  stmw      r23, 0x10C(r1)
	  mr        r29, r3
	  mr        r30, r4
	  lwz       r3, 0x4(r3)
	  bl        -0x40FFBC
	  li        r0, 0x8
	  mr        r31, r3
	  addi      r4, r1, 0x8
	  li        r24, 0
	  li        r3, 0
	  mtctr     r0

	.loc_0x38:
	  stw       r3, 0x0(r4)
	  stw       r3, 0x4(r4)
	  stw       r3, 0x8(r4)
	  stw       r3, 0xC(r4)
	  stw       r3, 0x10(r4)
	  stw       r3, 0x14(r4)
	  stw       r3, 0x18(r4)
	  stw       r3, 0x1C(r4)
	  addi      r4, r4, 0x20
	  bdnz+     .loc_0x38
	  lis       r4, 0x804A
	  lis       r3, 0x804A
	  lwz       r23, 0x20(r29)
	  addi      r25, r1, 0x8
	  subi      r27, r4, 0x59C0
	  subi      r28, r3, 0x59B0
	  li        r26, 0x1
	  b         .loc_0xB4

	.loc_0x80:
	  lbz       r3, 0x34(r23)
	  lbzx      r0, r25, r3
	  cmplwi    r0, 0
	  bne-      .loc_0x98
	  stbx      r26, r25, r3
	  b         .loc_0xAC

	.loc_0x98:
	  mr        r3, r27
	  mr        r5, r28
	  li        r4, 0x26F
	  crclr     6, 0x6
	  bl        -0x409248

	.loc_0xAC:
	  lwz       r23, 0x4(r23)
	  addi      r24, r24, 0x1

	.loc_0xB4:
	  cmplwi    r23, 0
	  bne+      .loc_0x80
	  cmpwi     r24, 0xFF
	  blt-      .loc_0xE0
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x59C0
	  li        r4, 0x275
	  subi      r5, r5, 0x59B0
	  crclr     6, 0x6
	  bl        -0x40927C

	.loc_0xE0:
	  addi      r3, r1, 0x8
	  b         .loc_0xFC

	.loc_0xE8:
	  subi      r31, r31, 0x1
	  rlwinm    r0,r31,0,24,31
	  cmplwi    r0, 0x1
	  bge-      .loc_0xFC
	  li        r31, 0xFF

	.loc_0xFC:
	  rlwinm    r0,r31,0,24,31
	  lbzx      r0, r3, r0
	  cmplwi    r0, 0
	  bne+      .loc_0xE8
	  lwz       r3, 0x4(r29)
	  mr        r4, r31
	  bl        -0x4100E8
	  lwz       r4, 0x4(r29)
	  li        r3, 0x40
	  li        r5, 0
	  bl        -0x40F9C4
	  mr.       r26, r3
	  beq-      .loc_0x184
	  lis       r3, 0x804F
	  mr        r23, r26
	  subi      r3, r3, 0x4AD8
	  li        r0, 0
	  stw       r3, 0x0(r26)
	  addi      r3, r23, 0x18
	  stw       r0, 0x10(r26)
	  stw       r0, 0xC(r26)
	  stw       r0, 0x8(r26)
	  stw       r0, 0x4(r26)
	  stw       r30, 0x14(r26)
	  bl        -0x416970
	  lis       r3, 0x804F
	  li        r0, 0
	  subi      r3, r3, 0x3BB8
	  stw       r3, 0x0(r23)
	  addi      r3, r3, 0x10
	  stw       r3, 0x18(r23)
	  stw       r0, 0x30(r23)
	  stb       r0, 0x34(r23)
	  stw       r0, 0x38(r23)

	.loc_0x184:
	  stb       r31, 0x34(r26)
	  mr        r4, r26
	  addi      r3, r29, 0x10
	  lwz       r0, 0x4(r29)
	  stw       r0, 0x30(r26)
	  bl        -0x22570
	  mr        r3, r26
	  lmw       r23, 0x10C(r1)
	  lwz       r0, 0x134(r1)
	  mtlr      r0
	  addi      r1, r1, 0x130
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80433994
 * Size:	000188
 */
void Resource::Mgr::loadResource((Resource::MgrCommand*, char const*, bool))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stmw      r27, 0xC(r1)
	  mr        r31, r4
	  mr        r30, r3
	  mr        r27, r5
	  lwz       r0, 0x30(r4)
	  cmpwi     r0, -0x1
	  bne-      .loc_0x174
	  bl        0x414
	  mr        r3, r30
	  mr        r4, r31
	  bl        0x538
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x5C
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x59C0
	  li        r4, 0x2A2
	  subi      r5, r5, 0x59B0
	  crclr     6, 0x6
	  bl        -0x4093AC

	.loc_0x5C:
	  lwz       r29, 0x20(r30)
	  li        r28, 0
	  b         .loc_0x84

	.loc_0x68:
	  lwz       r4, 0x14(r29)
	  mr        r3, r27
	  bl        -0x369344
	  cmpwi     r3, 0
	  bne-      .loc_0x80
	  mr        r28, r29

	.loc_0x80:
	  lwz       r29, 0x4(r29)

	.loc_0x84:
	  cmplwi    r29, 0
	  bne+      .loc_0x68
	  cmplwi    r28, 0
	  beq-      .loc_0xC4
	  li        r3, 0
	  li        r0, 0x1
	  stw       r3, 0x30(r31)
	  addi      r4, r31, 0x3C
	  addi      r5, r31, 0xB4
	  stw       r28, 0x38(r31)
	  stb       r0, 0x34(r31)
	  lwz       r3, -0x6514(r13)
	  bl        -0x10B10
	  mr        r4, r31
	  addi      r3, r30, 0x28
	  bl        -0x2264C

	.loc_0xC4:
	  cmplwi    r28, 0
	  bne-      .loc_0x120
	  lwz       r3, -0x6458(r13)
	  mr        r4, r27
	  bl        -0xA00
	  mr.       r29, r3
	  beq-      .loc_0x120
	  mr        r3, r30
	  mr        r4, r27
	  bl        -0x29C
	  li        r0, 0x1
	  mr        r28, r3
	  stw       r0, 0x30(r31)
	  addi      r4, r31, 0x3C
	  addi      r5, r31, 0xDC
	  stw       r28, 0x38(r31)
	  stb       r0, 0x34(r31)
	  stw       r29, 0xA8(r31)
	  lwz       r3, -0x6514(r13)
	  bl        -0x10B6C
	  mr        r4, r31
	  addi      r3, r30, 0x28
	  bl        -0x226A8

	.loc_0x120:
	  cmplwi    r28, 0
	  bne-      .loc_0x168
	  mr        r3, r30
	  mr        r4, r27
	  bl        -0x2E4
	  li        r0, 0x2
	  mr        r28, r3
	  stw       r0, 0x30(r31)
	  li        r0, 0x1
	  addi      r4, r31, 0x3C
	  addi      r5, r31, 0xC8
	  stw       r28, 0x38(r31)
	  stb       r0, 0x34(r31)
	  lwz       r3, -0x6514(r13)
	  bl        -0x10BB4
	  mr        r4, r31
	  addi      r3, r30, 0x28
	  bl        -0x226F0

	.loc_0x168:
	  cmplwi    r28, 0
	  beq-      .loc_0x174
	  stw       r31, 0x3C(r28)

	.loc_0x174:
	  lmw       r27, 0xC(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80433B1C
 * Size:	000070
 */
void Resource::Mgr::destroy((Resource::MgrCommand*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r3, 0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  lwz       r0, 0x30(r4)
	  cmpwi     r0, -0x1
	  beq-      .loc_0x5C
	  lwz       r4, 0x38(r31)
	  cmplwi    r4, 0
	  beq-      .loc_0x5C
	  beq-      .loc_0x40
	  lwz       r3, 0x30(r4)
	  lbz       r4, 0x34(r4)
	  bl        -0x413328

	.loc_0x40:
	  li        r3, -0x1
	  li        r0, 0
	  stw       r3, 0x30(r31)
	  li        r3, 0x1
	  stw       r0, 0x38(r31)
	  stb       r0, 0x34(r31)
	  stw       r0, 0xB0(r31)

	.loc_0x5C:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80433B8C
 * Size:	000064
 */
void Resource::Mgr::destroyAll(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  lwz       r4, 0x20(r3)
	  b         .loc_0x3C

	.loc_0x20:
	  cmplwi    r4, 0
	  lwz       r31, 0x4(r4)
	  beq-      .loc_0x38
	  lwz       r3, 0x30(r4)
	  lbz       r4, 0x34(r4)
	  bl        -0x413390

	.loc_0x38:
	  mr        r4, r31

	.loc_0x3C:
	  cmplwi    r4, 0
	  bne+      .loc_0x20
	  lwz       r3, 0x4(r30)
	  bl        -0x4104A4
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
 * Address:	80433BF0
 * Size:	0001E0
 */
void Resource::Mgr::sync((Resource::MgrCommand*, bool))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  rlwinm.   r0,r5,0,24,31
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  stw       r30, 0x8(r1)
	  li        r30, 0
	  beq-      .loc_0xF4
	  b         .loc_0xE8

	.loc_0x28:
	  lwz       r0, 0x30(r31)
	  li        r30, 0
	  cmpwi     r0, 0x1
	  beq-      .loc_0x7C
	  bge-      .loc_0x48
	  cmpwi     r0, 0
	  bge-      .loc_0x54
	  b         .loc_0xCC

	.loc_0x48:
	  cmpwi     r0, 0x3
	  bge-      .loc_0xCC
	  b         .loc_0xA4

	.loc_0x54:
	  lbz       r0, 0x34(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x74
	  lwz       r0, 0x54(r31)
	  subfic    r0, r0, 0x2
	  cntlzw    r0, r0
	  rlwinm    r30,r0,27,5,31
	  b         .loc_0xE8

	.loc_0x74:
	  li        r30, 0x1
	  b         .loc_0xE8

	.loc_0x7C:
	  lbz       r0, 0x34(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x9C
	  lwz       r0, 0x54(r31)
	  subfic    r0, r0, 0x2
	  cntlzw    r0, r0
	  rlwinm    r30,r0,27,5,31
	  b         .loc_0xE8

	.loc_0x9C:
	  li        r30, 0x1
	  b         .loc_0xE8

	.loc_0xA4:
	  lbz       r0, 0x34(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0xC4
	  lwz       r0, 0x54(r31)
	  subfic    r0, r0, 0x2
	  cntlzw    r0, r0
	  rlwinm    r30,r0,27,5,31
	  b         .loc_0xE8

	.loc_0xC4:
	  li        r30, 0x1
	  b         .loc_0xE8

	.loc_0xCC:
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x59C0
	  li        r4, 0xFC
	  subi      r5, r5, 0x59B0
	  crclr     6, 0x6
	  bl        -0x409694

	.loc_0xE8:
	  rlwinm.   r0,r30,0,24,31
	  beq+      .loc_0x28
	  b         .loc_0x1B4

	.loc_0xF4:
	  lwz       r0, 0x30(r31)
	  li        r30, 0
	  cmpwi     r0, 0x1
	  beq-      .loc_0x148
	  bge-      .loc_0x114
	  cmpwi     r0, 0
	  bge-      .loc_0x120
	  b         .loc_0x198

	.loc_0x114:
	  cmpwi     r0, 0x3
	  bge-      .loc_0x198
	  b         .loc_0x170

	.loc_0x120:
	  lbz       r0, 0x34(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x140
	  lwz       r0, 0x54(r31)
	  subfic    r0, r0, 0x2
	  cntlzw    r0, r0
	  rlwinm    r30,r0,27,5,31
	  b         .loc_0x1B4

	.loc_0x140:
	  li        r30, 0x1
	  b         .loc_0x1B4

	.loc_0x148:
	  lbz       r0, 0x34(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x168
	  lwz       r0, 0x54(r31)
	  subfic    r0, r0, 0x2
	  cntlzw    r0, r0
	  rlwinm    r30,r0,27,5,31
	  b         .loc_0x1B4

	.loc_0x168:
	  li        r30, 0x1
	  b         .loc_0x1B4

	.loc_0x170:
	  lbz       r0, 0x34(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x190
	  lwz       r0, 0x54(r31)
	  subfic    r0, r0, 0x2
	  cntlzw    r0, r0
	  rlwinm    r30,r0,27,5,31
	  b         .loc_0x1B4

	.loc_0x190:
	  li        r30, 0x1
	  b         .loc_0x1B4

	.loc_0x198:
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x59C0
	  li        r4, 0xFC
	  subi      r5, r5, 0x59B0
	  crclr     6, 0x6
	  bl        -0x409760

	.loc_0x1B4:
	  rlwinm.   r0,r30,0,24,31
	  beq-      .loc_0x1C4
	  mr        r3, r31
	  bl        -0x227E0

	.loc_0x1C4:
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
 * Size:	00013C
 */
void Resource::Mgr::syncAll((bool))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80433DD0
 * Size:	000130
 */
void Resource::Mgr::delFinishCommand(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  lwz       r3, 0x38(r3)
	  b         .loc_0x10C

	.loc_0x20:
	  lwz       r0, 0x30(r3)
	  mr        r30, r3
	  lwz       r31, 0x4(r3)
	  cmpwi     r0, -0x1
	  bne-      .loc_0x3C
	  bl        -0x22834
	  b         .loc_0x108

	.loc_0x3C:
	  cmpwi     r0, 0x1
	  li        r29, 0
	  beq-      .loc_0x8C
	  bge-      .loc_0x58
	  cmpwi     r0, 0
	  bge-      .loc_0x64
	  b         .loc_0xDC

	.loc_0x58:
	  cmpwi     r0, 0x3
	  bge-      .loc_0xDC
	  b         .loc_0xB4

	.loc_0x64:
	  lbz       r0, 0x34(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x84
	  lwz       r0, 0x54(r3)
	  subfic    r0, r0, 0x2
	  cntlzw    r0, r0
	  rlwinm    r29,r0,27,5,31
	  b         .loc_0xF8

	.loc_0x84:
	  li        r29, 0x1
	  b         .loc_0xF8

	.loc_0x8C:
	  lbz       r0, 0x34(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0xAC
	  lwz       r0, 0x54(r3)
	  subfic    r0, r0, 0x2
	  cntlzw    r0, r0
	  rlwinm    r29,r0,27,5,31
	  b         .loc_0xF8

	.loc_0xAC:
	  li        r29, 0x1
	  b         .loc_0xF8

	.loc_0xB4:
	  lbz       r0, 0x34(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0xD4
	  lwz       r0, 0x54(r3)
	  subfic    r0, r0, 0x2
	  cntlzw    r0, r0
	  rlwinm    r29,r0,27,5,31
	  b         .loc_0xF8

	.loc_0xD4:
	  li        r29, 0x1
	  b         .loc_0xF8

	.loc_0xDC:
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x59C0
	  li        r4, 0xFC
	  subi      r5, r5, 0x59B0
	  crclr     6, 0x6
	  bl        -0x409884

	.loc_0xF8:
	  rlwinm.   r0,r29,0,24,31
	  beq-      .loc_0x108
	  mr        r3, r30
	  bl        -0x22904

	.loc_0x108:
	  mr        r3, r31

	.loc_0x10C:
	  cmplwi    r3, 0
	  bne+      .loc_0x20
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
 * Address:	80433F00
 * Size:	000030
 */
void Resource::Mgr::searchCommand((Resource::MgrCommand*))
{
	/*
	.loc_0x0:
	  lwz       r5, 0x38(r3)
	  li        r3, 0
	  b         .loc_0x24

	.loc_0xC:
	  cmplw     r4, r5
	  lwz       r0, 0x4(r5)
	  bne-      .loc_0x20
	  li        r3, 0x1
	  blr

	.loc_0x20:
	  mr        r5, r0

	.loc_0x24:
	  cmplwi    r5, 0
	  bne+      .loc_0xC
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000004
 */
void Resource::Mgr::watchHeap(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80433F30
 * Size:	000030
 */
void Delegate<Resource::MgrCommand>::invoke()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r4, r3
	  stw       r0, 0x14(r1)
	  addi      r12, r4, 0x8
	  lwz       r3, 0x4(r3)
	  bl        -0x372424
	  nop
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80433F60
 * Size:	000008
 */
void @24 @Resource::Node::__dt(void)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x18
	  b         -0xE8C
	*/
}

/*
 * --INFO--
 * Address:	80433F68
 * Size:	000008
 */
void @24 @Resource::MgrCommand::__dt(void)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x18
	  b         -0xC80
	*/
}
