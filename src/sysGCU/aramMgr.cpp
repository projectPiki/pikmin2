

/*
 * --INFO--
 * Address:	........
 * Size:	0000E0
 */
void _Print(char*, ...)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00003C
 */
void ARAM::Node::__ct(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000A8
 */
void ARAM::Node::dvdToAram((char const*, bool))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000140
 */
void ARAM::Node::aramToMainRam((unsigned char*, unsigned long, unsigned long,
                                JKRExpandSwitch, unsigned long, JKRHeap*,
                                JKRDvdRipper::EAllocDirection, int,
                                unsigned long*))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000004
 */
void ARAM::Node::dump(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80432B18
 * Size:	000030
 */
void ARAM::Mgr::init(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r3, 0x18
	  stw       r0, 0x14(r1)
	  bl        -0x40EC84
	  cmplwi    r3, 0
	  beq-      .loc_0x20
	  bl        .loc_0x30

	.loc_0x20:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr

	.loc_0x30:
	*/
}

/*
 * --INFO--
 * Address:	80432B48
 * Size:	000080
 */
void ARAM::Mgr::__ct(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r4, 0x804F
	  stw       r0, 0x14(r1)
	  subi      r0, r4, 0x4AD8
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  li        r3, 0
	  stw       r0, 0x0(r31)
	  addi      r0, r2, 0x2414
	  stw       r3, 0x10(r31)
	  stw       r3, 0xC(r31)
	  stw       r3, 0x8(r31)
	  stw       r3, 0x4(r31)
	  stw       r0, 0x14(r31)
	  lwz       r0, -0x6458(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0x64
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x59D8
	  li        r4, 0xF8
	  subi      r5, r5, 0x59CC
	  crclr     6, 0x6
	  bl        -0x408568

	.loc_0x64:
	  stw       r31, -0x6458(r13)
	  mr        r3, r31
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80432BC8
 * Size:	00024C
 */
void ARAM::Mgr::dvdToAram((char const*, bool))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stmw      r26, 0x8(r1)
	  mr        r28, r3
	  mr        r26, r4
	  mr        r29, r5
	  li        r30, 0
	  bl        0x480
	  mr.       r31, r3
	  bne-      .loc_0x1C4
	  lwz       r4, -0x77D8(r13)
	  li        r3, 0x1C
	  li        r5, 0
	  bl        -0x40ECC0
	  mr.       r31, r3
	  beq-      .loc_0x7C
	  lis       r4, 0x804F
	  lis       r3, 0x804F
	  subi      r0, r4, 0x4AD8
	  li        r5, 0
	  stw       r0, 0x0(r31)
	  addi      r4, r2, 0x2410
	  subi      r0, r3, 0x3C38
	  stw       r5, 0x10(r31)
	  stw       r5, 0xC(r31)
	  stw       r5, 0x8(r31)
	  stw       r5, 0x4(r31)
	  stw       r4, 0x14(r31)
	  stw       r0, 0x0(r31)
	  stw       r5, 0x18(r31)

	.loc_0x7C:
	  lwz       r27, -0x77D8(r13)
	  mr        r3, r26
	  bl        -0x36833C
	  addi      r3, r3, 0x1
	  mr        r4, r27
	  li        r5, 0
	  bl        -0x40EC14
	  mr        r4, r26
	  mr        r27, r3
	  bl        -0x368410
	  rlwinm.   r0,r29,0,24,31
	  beq-      .loc_0x124
	  cmplwi    r27, 0
	  bne-      .loc_0xD0
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x59D8
	  li        r4, 0x69
	  subi      r5, r5, 0x59CC
	  crclr     6, 0x6
	  bl        -0x408654

	.loc_0xD0:
	  stw       r27, 0x14(r31)
	  lwz       r0, 0x18(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x114
	  rlwinm.   r0,r29,0,24,31
	  beq-      .loc_0xF4
	  li        r0, 0
	  stw       r0, 0x18(r31)
	  b         .loc_0x114

	.loc_0xF4:
	  lwz       r3, 0x14(r31)
	  li        r4, 0
	  li        r5, 0
	  li        r6, 0
	  li        r7, 0
	  li        r8, 0
	  bl        -0x4155E4
	  stw       r3, 0x18(r31)

	.loc_0x114:
	  mr        r3, r28
	  mr        r4, r31
	  bl        -0x218DC
	  b         .loc_0x234

	.loc_0x124:
	  cmplwi    r27, 0
	  bne-      .loc_0x148
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x59D8
	  li        r4, 0x69
	  subi      r5, r5, 0x59CC
	  crclr     6, 0x6
	  bl        -0x4086CC

	.loc_0x148:
	  stw       r27, 0x14(r31)
	  lwz       r0, 0x18(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x178
	  lwz       r3, 0x14(r31)
	  li        r4, 0
	  li        r5, 0
	  li        r6, 0
	  li        r7, 0
	  li        r8, 0
	  bl        -0x415648
	  stw       r3, 0x18(r31)

	.loc_0x178:
	  lwz       r0, 0x18(r31)
	  cmplwi    r0, 0
	  mr        r30, r0
	  beq-      .loc_0x198
	  mr        r3, r28
	  mr        r4, r31
	  bl        -0x21950
	  b         .loc_0x234

	.loc_0x198:
	  mr        r3, r27
	  bl        -0x40ECB0
	  cmplwi    r31, 0
	  beq-      .loc_0x234
	  mr        r3, r31
	  li        r4, 0x1
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x234

	.loc_0x1C4:
	  lwz       r28, 0x14(r31)
	  cmplwi    r28, 0
	  bne-      .loc_0x1EC
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x59D8
	  li        r4, 0x69
	  subi      r5, r5, 0x59CC
	  crclr     6, 0x6
	  bl        -0x408770

	.loc_0x1EC:
	  stw       r28, 0x14(r31)
	  lwz       r0, 0x18(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x230
	  rlwinm.   r0,r29,0,24,31
	  beq-      .loc_0x210
	  li        r0, 0
	  stw       r0, 0x18(r31)
	  b         .loc_0x230

	.loc_0x210:
	  lwz       r3, 0x14(r31)
	  li        r4, 0
	  li        r5, 0
	  li        r6, 0
	  li        r7, 0
	  li        r8, 0
	  bl        -0x415700
	  stw       r3, 0x18(r31)

	.loc_0x230:
	  lwz       r30, 0x18(r31)

	.loc_0x234:
	  mr        r3, r30
	  lmw       r26, 0x8(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80432E14
 * Size:	000060
 */
void ARAM::Node::__dt(void)
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
	  beq-      .loc_0x44
	  lis       r5, 0x804F
	  li        r4, 0
	  subi      r0, r5, 0x3C38
	  stw       r0, 0x0(r30)
	  bl        -0x218BC
	  extsh.    r0, r31
	  ble-      .loc_0x44
	  mr        r3, r30
	  bl        -0x40EDA0

	.loc_0x44:
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
 * Address:	80432E74
 * Size:	000154
 */
void ARAM::Mgr::aramToMainRam((char const*, unsigned char*, unsigned long,
                               unsigned long, JKRExpandSwitch, unsigned long,
                               JKRHeap*, JKRDvdRipper::EAllocDirection, int,
                               unsigned long*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  mflr      r0
	  stw       r0, 0x54(r1)
	  stmw      r20, 0x20(r1)
	  mr        r21, r5
	  lwz       r27, 0x58(r1)
	  mr        r22, r6
	  lwz       r28, 0x5C(r1)
	  mr        r23, r7
	  lwz       r30, 0x60(r1)
	  mr        r24, r8
	  mr        r25, r9
	  mr        r26, r10
	  li        r20, 0
	  bl        0x1BC
	  mr.       r31, r3
	  beq-      .loc_0x13C
	  cmplwi    r26, 0
	  bne-      .loc_0x50
	  lwz       r26, -0x77D4(r13)

	.loc_0x50:
	  li        r29, 0
	  cmplwi    r30, 0
	  stw       r29, 0x10(r1)
	  bne-      .loc_0x64
	  addi      r30, r1, 0x10

	.loc_0x64:
	  lwz       r0, 0x18(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0xC8
	  lwz       r20, 0x14(r31)
	  cmplwi    r20, 0
	  bne-      .loc_0x98
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x59D8
	  li        r4, 0x69
	  subi      r5, r5, 0x59CC
	  crclr     6, 0x6
	  bl        -0x4088C8

	.loc_0x98:
	  stw       r20, 0x14(r31)
	  lwz       r0, 0x18(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0xC8
	  lwz       r3, 0x14(r31)
	  li        r4, 0
	  li        r5, 0
	  li        r6, 0
	  li        r7, 0
	  li        r8, 0
	  bl        -0x415844
	  stw       r3, 0x18(r31)

	.loc_0xC8:
	  lwz       r3, 0x18(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x138
	  stw       r30, 0x8(r1)
	  mr        r4, r21
	  mr        r5, r22
	  mr        r6, r23
	  mr        r7, r24
	  mr        r8, r25
	  mr        r9, r26
	  mr        r10, r28
	  bl        -0x41AD40
	  lwz       r4, 0x0(r30)
	  mr        r29, r3
	  bl        -0x34685C
	  cmpwi     r27, 0x2
	  bne-      .loc_0x138
	  lwz       r3, 0x0(r30)
	  mr        r4, r26
	  li        r5, -0x20
	  bl        -0x40EF44
	  lwz       r5, 0x0(r30)
	  mr        r21, r3
	  mr        r4, r29
	  bl        -0x42DE00
	  mr        r3, r29
	  bl        -0x40EEF0
	  mr        r29, r21

	.loc_0x138:
	  mr        r20, r29

	.loc_0x13C:
	  mr        r3, r20
	  lmw       r20, 0x20(r1)
	  lwz       r0, 0x54(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80432FC8
 * Size:	0000A0
 */
void ARAM::Mgr::dump(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  li        r31, -0x1
	  stw       r30, 0x18(r1)
	  li        r30, 0
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  lwz       r4, -0x78E0(r13)
	  lwz       r3, 0x94(r4)
	  bl        -0x41962C
	  lwz       r3, -0x78E0(r13)
	  lwz       r3, 0x94(r3)
	  bl        -0x419638
	  lwz       r4, 0x10(r29)
	  b         .loc_0x7C

	.loc_0x44:
	  lwz       r3, 0x18(r4)
	  cmplwi    r3, 0
	  beq-      .loc_0x58
	  lwz       r0, 0x18(r3)
	  b         .loc_0x5C

	.loc_0x58:
	  li        r0, 0

	.loc_0x5C:
	  cmplw     r31, r0
	  ble-      .loc_0x6C
	  mr        r31, r0
	  b         .loc_0x78

	.loc_0x6C:
	  cmplw     r30, r0
	  bge-      .loc_0x78
	  mr        r30, r0

	.loc_0x78:
	  lwz       r4, 0x4(r4)

	.loc_0x7C:
	  cmplwi    r4, 0
	  bne+      .loc_0x44
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
 * Address:	80433068
 * Size:	000070
 */
void ARAM::Mgr::search((char const*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  li        r31, 0
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  mr        r29, r4
	  lwz       r30, 0x10(r3)
	  b         .loc_0x48

	.loc_0x28:
	  lwz       r4, 0x14(r30)
	  mr        r3, r29
	  bl        -0x3689D8
	  cmpwi     r3, 0
	  bne-      .loc_0x44
	  mr        r31, r30
	  b         .loc_0x50

	.loc_0x44:
	  lwz       r30, 0x4(r30)

	.loc_0x48:
	  cmplwi    r30, 0
	  bne+      .loc_0x28

	.loc_0x50:
	  lwz       r0, 0x24(r1)
	  mr        r3, r31
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}
