

/*
 * --INFO--
 * Address:	........
 * Size:	000038
 */
void JKRAramPiece::JKRAramPiece()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00003C
 */
void JKRAramPiece::~JKRAramPiece()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000078
 */
void JKRAramPiece::prepareCommand(int, unsigned long, unsigned long,
                                  unsigned long, JKRAramBlock*,
                                  void (*)(unsigned long))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80019AD8
 * Size:	000020
 */
void JKRAramPiece::sendCommand(JKRAMCommand*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        0x1C0
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000150
 */
void JKRAramPiece::orderAsync(int, unsigned long, unsigned long, unsigned long,
                              JKRAramBlock*, void (*)(unsigned long))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000C8
 */
void JKRAramPiece::sync(JKRAMCommand*, int)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000128
 */
void JKRAramPiece::syncAll(int)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80019AF8
 * Size:	0001AC
 */
void JKRAramPiece::orderSync(int, unsigned long, unsigned long, unsigned long,
                             JKRAramBlock*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  lis       r8, 0x8050
	  lis       r9, 0x8047
	  stw       r0, 0x34(r1)
	  addi      r0, r8, 0x6DE8
	  stmw      r25, 0x14(r1)
	  mr        r25, r3
	  mr        r27, r4
	  mr        r28, r5
	  mr        r29, r6
	  mr        r30, r7
	  mr        r3, r0
	  addi      r31, r9, 0x3540
	  bl        0xD6038
	  lis       r3, 0x8050
	  addi      r3, r3, 0x6DE8
	  bl        0xD602C
	  rlwinm.   r0,r27,0,27,31
	  bne-      .loc_0x58
	  rlwinm.   r0,r28,0,27,31
	  beq-      .loc_0xAC

	.loc_0x58:
	  mr        r4, r25
	  addi      r3, r31, 0
	  crclr     6, 0x6
	  bl        0xD3B90
	  mr        r4, r27
	  addi      r3, r31, 0x10
	  crclr     6, 0x6
	  bl        0xD3B80
	  mr        r4, r28
	  addi      r3, r31, 0x20
	  crclr     6, 0x6
	  bl        0xD3B70
	  mr        r4, r29
	  addi      r3, r31, 0x34
	  crclr     6, 0x6
	  bl        0xD3B60
	  addi      r3, r31, 0x44
	  li        r4, 0x6B
	  subi      r5, r2, 0x7E88
	  crclr     6, 0x6
	  bl        0xD3BCC

	.loc_0xAC:
	  lwz       r4, -0x77D8(r13)
	  li        r3, 0x8
	  li        r5, -0x4
	  bl        0xA390
	  lwz       r4, -0x77D8(r13)
	  mr        r26, r3
	  li        r3, 0x98
	  li        r5, -0x4
	  bl        0xA37C
	  mr.       r31, r3
	  beq-      .loc_0xE0
	  bl        0x1F4
	  mr        r31, r3

	.loc_0xE0:
	  stw       r25, 0x40(r31)
	  lis       r3, 0x804A
	  li        r6, 0
	  li        r0, 0x1
	  stw       r27, 0x48(r31)
	  subi      r3, r3, 0x488
	  mr        r4, r26
	  li        r5, 0x1
	  stw       r28, 0x4C(r31)
	  stw       r30, 0x50(r31)
	  stw       r29, 0x44(r31)
	  stw       r6, 0x58(r31)
	  stw       r0, 0x0(r26)
	  stw       r31, 0x4(r26)
	  bl        0xD590C
	  lwz       r0, 0x58(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x138
	  lis       r3, 0x8050
	  addi      r4, r31, 0x20
	  addi      r3, r3, 0x6DC4
	  bl        0xCCB8

	.loc_0x138:
	  lis       r3, 0x8050
	  addi      r3, r3, 0x6DE8
	  bl        0xD600C
	  lis       r3, 0x8050
	  addi      r3, r3, 0x6DE8
	  bl        0xD5F24
	  addi      r3, r31, 0x68
	  addi      r4, r1, 0x8
	  li        r5, 0x1
	  bl        0xD5990
	  lis       r3, 0x8050
	  addi      r4, r31, 0x20
	  addi      r3, r3, 0x6DC4
	  bl        0xCFC0
	  lis       r3, 0x8050
	  addi      r3, r3, 0x6DE8
	  bl        0xD5FD4
	  mr        r3, r31
	  li        r4, 0x1
	  bl        0x1B8
	  lis       r3, 0x8050
	  addi      r3, r3, 0x6DE8
	  bl        0xD5FBC
	  lmw       r25, 0x14(r1)
	  li        r3, 0x1
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80019CA4
 * Size:	000078
 */
void JKRAramPiece::startDMA(JKRAMCommand*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r0, 0x40(r3)
	  cmpwi     r0, 0x1
	  bne-      .loc_0x30
	  lwz       r3, 0x4C(r31)
	  lwz       r4, 0x44(r31)
	  bl        0xD2A20
	  b         .loc_0x3C

	.loc_0x30:
	  lwz       r3, 0x48(r31)
	  lwz       r4, 0x44(r31)
	  bl        0xD2A6C

	.loc_0x3C:
	  lis       r3, 0x8002
	  lwz       r5, 0x40(r31)
	  subi      r10, r3, 0x62E4
	  lwz       r7, 0x48(r31)
	  lwz       r8, 0x4C(r31)
	  mr        r3, r31
	  lwz       r9, 0x44(r31)
	  li        r4, 0
	  li        r6, 0
	  bl        0xBA6F8
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80019D1C
 * Size:	0000A8
 */
void JKRAramPiece::doneDMA(unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r0, 0x40(r3)
	  cmpwi     r0, 0x1
	  bne-      .loc_0x2C
	  lwz       r3, 0x4C(r31)
	  lwz       r4, 0x44(r31)
	  bl        0xD29A8

	.loc_0x2C:
	  lwz       r0, 0x60(r31)
	  cmpwi     r0, 0
	  beq-      .loc_0x4C
	  cmpwi     r0, 0x2
	  bne-      .loc_0x94
	  lwz       r3, 0x64(r31)
	  bl        0x2DAC
	  b         .loc_0x94

	.loc_0x4C:
	  lwz       r12, 0x58(r31)
	  cmplwi    r12, 0
	  beq-      .loc_0x68
	  mr        r3, r31
	  mtctr     r12
	  bctrl
	  b         .loc_0x94

	.loc_0x68:
	  lwz       r3, 0x5C(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x84
	  mr        r4, r31
	  li        r5, 0
	  bl        0xD5784
	  b         .loc_0x94

	.loc_0x84:
	  mr        r4, r31
	  addi      r3, r31, 0x68
	  li        r5, 0
	  bl        0xD5770

	.loc_0x94:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80019DC4
 * Size:	000070
 */
void JKRAMCommand::JKRAMCommand()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  mr        r4, r31
	  addi      r3, r4, 0x20
	  bl        0xC9D8
	  mr        r4, r31
	  addi      r3, r31, 0x30
	  bl        0xC9CC
	  addi      r3, r31, 0x68
	  addi      r4, r31, 0x88
	  li        r5, 0x1
	  bl        0xD56C0
	  li        r0, 0
	  mr        r3, r31
	  stw       r0, 0x58(r31)
	  stw       r0, 0x5C(r31)
	  stw       r0, 0x60(r31)
	  stw       r0, 0x8C(r31)
	  stw       r0, 0x90(r31)
	  stw       r0, 0x94(r31)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
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
void JSULink<JKRAMCommand>::~JSULink()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80019E34
 * Size:	0000A8
 */
void JKRAMCommand::~JKRAMCommand()
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
	  beq-      .loc_0x8C
	  lwz       r3, 0x8C(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0x30
	  bl        0xA254

	.loc_0x30:
	  lwz       r3, 0x90(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0x40
	  bl        0xA244

	.loc_0x40:
	  lwz       r3, 0x94(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0x54
	  li        r4, 0
	  bl        0x97E8

	.loc_0x54:
	  addic.    r0, r30, 0x30
	  beq-      .loc_0x68
	  addi      r3, r30, 0x30
	  li        r4, 0
	  bl        0xC938

	.loc_0x68:
	  addic.    r0, r30, 0x20
	  beq-      .loc_0x7C
	  addi      r3, r30, 0x20
	  li        r4, 0
	  bl        0xC924

	.loc_0x7C:
	  extsh.    r0, r31
	  ble-      .loc_0x8C
	  mr        r3, r30
	  bl        0xA1F8

	.loc_0x8C:
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
 * Size:	000020
 */
void JKRAMCommand::getDestination()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80019EDC
 * Size:	000044
 */
void __sinit_JKRAramPiece_cpp(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r3, 0x8050
	  stw       r0, 0x14(r1)
	  addi      r3, r3, 0x6DC4
	  bl        0xC9E0
	  lis       r3, 0x8050
	  lis       r4, 0x8002
	  lis       r5, 0x804F
	  addi      r3, r3, 0x6DC4
	  subi      r4, r4, 0x76FC
	  subi      r5, r5, 0xD0
	  bl        0xA77F4
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}
