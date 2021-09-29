

/*
 * --INFO--
 * Address:	8001D6F0
 * Size:	00009C
 */
void JKRDvdAramRipper::loadToAram(const char *, unsigned long, JKRExpandSwitch, unsigned long, unsigned long, unsigned long *)
{
/*
.loc_0x0:
  stwu      r1, -0x120(r1)
  mflr      r0
  stw       r0, 0x124(r1)
  stmw      r26, 0x108(r1)
  mr        r26, r3
  mr        r27, r4
  mr        r28, r5
  mr        r29, r6
  mr        r30, r7
  mr        r31, r8
  addi      r3, r1, 0x8
  bl        -0x664
  mr        r4, r26
  addi      r3, r1, 0x8
  bl        -0x394
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x58
  addi      r3, r1, 0x8
  li        r4, -0x1
  bl        -0x4B0
  li        r3, 0
  b         .loc_0x88

.loc_0x58:
  mr        r4, r27
  mr        r5, r28
  mr        r6, r29
  mr        r7, r30
  mr        r8, r31
  addi      r3, r1, 0x8
  bl        0xC8
  mr        r31, r3
  addi      r3, r1, 0x8
  li        r4, -0x1
  bl        -0x4E4
  mr        r3, r31

.loc_0x88:
  lmw       r26, 0x108(r1)
  lwz       r0, 0x124(r1)
  mtlr      r0
  addi      r1, r1, 0x120
  blr
*/
}

/*
 * --INFO--
 * Address:	8001D78C
 * Size:	00009C
 */
void JKRDvdAramRipper::loadToAram(long, unsigned long, JKRExpandSwitch, unsigned long, unsigned long, unsigned long *)
{
/*
.loc_0x0:
  stwu      r1, -0x120(r1)
  mflr      r0
  stw       r0, 0x124(r1)
  stmw      r26, 0x108(r1)
  mr        r26, r3
  mr        r27, r4
  mr        r28, r5
  mr        r29, r6
  mr        r30, r7
  mr        r31, r8
  addi      r3, r1, 0x8
  bl        -0x700
  mr        r4, r26
  addi      r3, r1, 0x8
  bl        -0x3B8
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x58
  addi      r3, r1, 0x8
  li        r4, -0x1
  bl        -0x54C
  li        r3, 0
  b         .loc_0x88

.loc_0x58:
  mr        r4, r27
  mr        r5, r28
  mr        r6, r29
  mr        r7, r30
  mr        r8, r31
  addi      r3, r1, 0x8
  bl        .loc_0x9C
  mr        r31, r3
  addi      r3, r1, 0x8
  li        r4, -0x1
  bl        -0x580
  mr        r3, r31

.loc_0x88:
  lmw       r26, 0x108(r1)
  lwz       r0, 0x124(r1)
  mtlr      r0
  addi      r1, r1, 0x120
  blr       

.loc_0x9C:
*/
}

/*
 * --INFO--
 * Address:	8001D828
 * Size:	0000A4
 */
void JKRDvdAramRipper::loadToAram(JKRDvdFile *, unsigned long, JKRExpandSwitch, unsigned long, unsigned long, unsigned long *)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  mr        r9, r8
  stw       r0, 0x14(r1)
  mr        r0, r7
  mr        r7, r6
  li        r6, 0
  stw       r31, 0xC(r1)
  mr        r8, r0
  stw       r30, 0x8(r1)
  mr        r30, r4
  bl        .loc_0xA4
  li        r4, 0
  mr        r31, r3
  bl        0x4D8
  lwz       r0, 0x48(r31)
  cmpwi     r0, 0
  bge-      .loc_0x5C
  mr        r3, r31
  li        r4, 0x1
  bl        0x5E0
  li        r3, 0
  b         .loc_0x8C

.loc_0x5C:
  cmplwi    r30, 0
  beq-      .loc_0x78
  mr        r3, r31
  li        r4, 0x1
  bl        0x5C4
  li        r3, -0x1
  b         .loc_0x8C

.loc_0x78:
  lwz       r30, 0x30(r31)
  mr        r3, r31
  li        r4, 0x1
  bl        0x5AC
  mr        r3, r30

.loc_0x8C:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  lwz       r30, 0x8(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr       

.loc_0xA4:
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00015C
 */
void JKRDvdAramRipper::loadToAram_Async(const char *, unsigned long, JKRExpandSwitch, void (*) (unsigned long), unsigned long, unsigned long, unsigned long *)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00006C
 */
void __dt__Q27JGadget29TPointer_delete<JKRDvdFile>Fv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00003C
 */
void __dt__Q27JGadget22TPointer<JKRDvdFile>Fv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000110
 */
void JKRDvdAramRipper::loadToAram_Async(long, unsigned long, JKRExpandSwitch, void (*) (unsigned long), unsigned long, unsigned long, unsigned long *)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8001D8CC
 * Size:	0000AC
 */
void JKRDvdAramRipper::loadToAram_Async(JKRDvdFile *, unsigned long, JKRExpandSwitch, void (*) (unsigned long), unsigned long, unsigned long, unsigned long *)
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  stw       r0, 0x34(r1)
  stmw      r24, 0x10(r1)
  mr        r25, r4
  mr        r24, r3
  mr        r26, r5
  mr        r27, r6
  mr        r28, r7
  mr        r29, r8
  mr        r30, r9
  li        r3, 0x54
  li        r5, -0x4
  lwz       r4, -0x77D8(r13)
  bl        0x663C
  mr.       r31, r3
  beq-      .loc_0x4C
  bl        0x508
  mr        r31, r3

.loc_0x4C:
  stw       r24, 0x28(r31)
  li        r0, 0
  mr        r3, r31
  stw       r25, 0x2C(r31)
  stw       r0, 0x30(r31)
  stw       r26, 0x34(r31)
  stw       r27, 0x38(r31)
  stw       r28, 0x3C(r31)
  stw       r29, 0x40(r31)
  stw       r30, 0x44(r31)
  bl        .loc_0xAC
  cmplwi    r3, 0
  bne-      .loc_0x94
  mr        r3, r31
  li        r4, 0x1
  bl        0x504
  li        r3, 0
  b         .loc_0x98

.loc_0x94:
  mr        r3, r31

.loc_0x98:
  lmw       r24, 0x10(r1)
  lwz       r0, 0x34(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr       

.loc_0xAC:
*/
}

/*
 * --INFO--
 * Address:	8001D978
 * Size:	000350
 */
void JKRDvdAramRipper::callCommand_Async(JKRADCommand *)
{
/*
.loc_0x0:
  stwu      r1, -0x70(r1)
  mflr      r0
  stw       r0, 0x74(r1)
  stmw      r25, 0x54(r1)
  mr        r31, r3
  li        r28, 0x1
  li        r26, 0
  lwz       r27, 0x28(r3)
  addi      r3, r27, 0x34
  bl        0xD21CC
  lwz       r3, 0x44(r31)
  cmplwi    r3, 0
  beq-      .loc_0x3C
  li        r0, 0
  stw       r0, 0x0(r3)

.loc_0x3C:
  lwz       r0, 0x50(r27)
  cmplwi    r0, 0
  beq-      .loc_0x50
  li        r28, 0
  b         .loc_0x31C

.loc_0x50:
  bl        0xD3FFC
  stw       r3, 0x50(r27)
  li        r3, 0x10
  li        r5, -0x4
  lwz       r4, -0x77D8(r13)
  bl        0x6564
  mr.       r30, r3
  beq-      .loc_0x7C
  mr        r4, r27
  bl        0x94F8
  mr        r30, r3

.loc_0x7C:
  stw       r30, 0x54(r27)
  mr        r3, r27
  lwz       r12, 0x0(r27)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x40(r31)
  cmplwi    r0, 0
  beq-      .loc_0xAC
  cmplw     r3, r0
  ble-      .loc_0xAC
  mr        r3, r0

.loc_0xAC:
  lwz       r0, 0x34(r31)
  addi      r3, r3, 0x1F
  rlwinm    r29,r3,0,0,26
  cmpwi     r0, 0x1
  bne-      .loc_0x178
  addi      r0, r1, 0x27
  rlwinm    r25,r0,0,0,26

.loc_0xC8:
  mr        r4, r25
  addi      r3, r27, 0x5C
  li        r5, 0x20
  li        r6, 0
  li        r7, 0x2
  bl        0xBF02C
  cmpwi     r3, 0
  bge-      .loc_0x124
  lbz       r0, -0x7FF8(r13)
  cmplwi    r0, 0
  bne-      .loc_0x11C
  cmplwi    r30, 0
  beq-      .loc_0x114
  mr        r3, r30
  li        r4, 0x1
  lwz       r12, 0x0(r30)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     

.loc_0x114:
  li        r3, 0
  b         .loc_0x33C

.loc_0x11C:
  bl        0xB37A0
  b         .loc_0xC8

.loc_0x124:
  mr        r3, r25
  li        r4, 0x20
  bl        0xCEC48
  mr        r3, r25
  bl        -0xBBC
  lbz       r0, 0x5(r25)
  mr        r26, r3
  lwz       r6, 0x40(r31)
  lbz       r4, 0x4(r25)
  rlwinm    r0,r0,16,0,15
  lbz       r5, 0x6(r25)
  cmplwi    r6, 0
  rlwimi    r0,r4,24,0,7
  lbz       r4, 0x7(r25)
  rlwimi    r0,r5,8,16,23
  or        r0, r4, r0
  mr        r25, r0
  beq-      .loc_0x178
  cmplw     r0, r6
  ble-      .loc_0x178
  mr        r25, r6

.loc_0x178:
  cmpwi     r26, 0
  bne-      .loc_0x188
  li        r0, 0
  stw       r0, 0x34(r31)

.loc_0x188:
  lwz       r0, 0x34(r31)
  cmpwi     r0, 0x1
  bne-      .loc_0x210
  lwz       r0, 0x2C(r31)
  cmplwi    r0, 0
  bne-      .loc_0x1E0
  lwz       r0, 0x30(r31)
  cmplwi    r0, 0
  bne-      .loc_0x1E0
  lwz       r3, -0x78E0(r13)
  mr        r4, r25
  li        r5, 0
  lwz       r3, 0x94(r3)
  bl        -0x42EC
  stw       r3, 0x30(r31)
  lwz       r3, 0x30(r31)
  cmplwi    r3, 0
  beq-      .loc_0x1D8
  lwz       r0, 0x14(r3)
  stw       r0, 0x2C(r31)

.loc_0x1D8:
  lwz       r0, 0x30(r31)
  stw       r0, 0x4C(r27)

.loc_0x1E0:
  lwz       r3, 0x30(r31)
  cmplwi    r3, 0
  beq-      .loc_0x1F4
  lwz       r0, 0x14(r3)
  stw       r0, 0x2C(r31)

.loc_0x1F4:
  lwz       r0, 0x2C(r31)
  cmplwi    r0, 0
  bne-      .loc_0x270
  li        r0, 0
  li        r3, 0
  stw       r0, 0x50(r27)
  b         .loc_0x33C

.loc_0x210:
  lwz       r0, 0x2C(r31)
  cmplwi    r0, 0
  bne-      .loc_0x240
  lwz       r0, 0x30(r31)
  cmplwi    r0, 0
  bne-      .loc_0x240
  lwz       r3, -0x78E0(r13)
  mr        r4, r29
  li        r5, 0
  lwz       r3, 0x94(r3)
  bl        -0x4368
  stw       r3, 0x30(r31)

.loc_0x240:
  lwz       r3, 0x30(r31)
  cmplwi    r3, 0
  beq-      .loc_0x254
  lwz       r0, 0x14(r3)
  stw       r0, 0x2C(r31)

.loc_0x254:
  lwz       r0, 0x2C(r31)
  cmplwi    r0, 0
  bne-      .loc_0x270
  li        r0, 0
  li        r3, 0
  stw       r0, 0x50(r27)
  b         .loc_0x33C

.loc_0x270:
  cmpwi     r26, 0
  bne-      .loc_0x298
  lwz       r6, 0x3C(r31)
  mr        r3, r30
  lwz       r4, 0x2C(r31)
  lwz       r7, 0x44(r31)
  sub       r5, r29, r6
  bl        -0x3904
  stw       r3, 0x50(r31)
  b         .loc_0x2F0

.loc_0x298:
  cmpwi     r26, 0x1
  bne-      .loc_0x2C0
  lwz       r6, 0x3C(r31)
  mr        r3, r30
  lwz       r4, 0x2C(r31)
  lwz       r7, 0x44(r31)
  sub       r5, r29, r6
  bl        -0x392C
  stw       r3, 0x50(r31)
  b         .loc_0x2F0

.loc_0x2C0:
  cmpwi     r26, 0x2
  bne-      .loc_0x2F0
  li        r0, 0
  mr        r5, r29
  stw       r0, 0x50(r31)
  mr        r6, r25
  li        r8, 0
  lwz       r3, 0x28(r31)
  lwz       r4, 0x2C(r31)
  lwz       r7, 0x3C(r31)
  lwz       r9, 0x44(r31)
  bl        0x280

.loc_0x2F0:
  lwz       r12, 0x38(r31)
  cmplwi    r12, 0
  bne-      .loc_0x310
  lis       r3, 0x8050
  mr        r4, r31
  addi      r3, r3, 0x6E0C
  bl        0x8C64
  b         .loc_0x31C

.loc_0x310:
  mr        r3, r31
  mtctr     r12
  bctrl     

.loc_0x31C:
  addi      r3, r27, 0x34
  bl        0xD1FAC
  rlwinm    r0,r28,0,24,31
  cmplwi    r0, 0x1
  bne-      .loc_0x338
  mr        r3, r31
  b         .loc_0x33C

.loc_0x338:
  li        r3, 0

.loc_0x33C:
  lmw       r25, 0x54(r1)
  lwz       r0, 0x74(r1)
  mtlr      r0
  addi      r1, r1, 0x70
  blr
*/
}

/*
 * --INFO--
 * Address:	8001DCC8
 * Size:	000070
 */
void JSUFileInputStream::~JSUFileInputStream()
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
  beq-      .loc_0x54
  lis       r4, 0x804A
  addi      r0, r4, 0xA8
  stw       r0, 0x0(r30)
  beq-      .loc_0x44
  lis       r5, 0x804A
  li        r4, 0
  addi      r0, r5, 0x40
  stw       r0, 0x0(r30)
  bl        0x8670

.loc_0x44:
  extsh.    r0, r31
  ble-      .loc_0x54
  mr        r3, r30
  bl        0x639C

.loc_0x54:
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
 * Address:	8001DD38
 * Size:	0000E0
 */
void JKRDvdAramRipper::syncAram(JKRADCommand *, int)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  mr        r30, r4
  stw       r29, 0x14(r1)
  mr        r29, r3
  lwz       r31, 0x28(r3)
  addi      r3, r31, 0x34
  bl        0xD1E08
  lwz       r3, 0x50(r29)
  cmplwi    r3, 0
  beq-      .loc_0x70
  mr        r4, r30
  bl        -0x39AC
  cntlzw    r0, r3
  cmpwi     r30, 0
  rlwinm    r0,r0,27,31,31
  neg       r0, r0
  stw       r0, 0x48(r29)
  beq-      .loc_0x70
  cmplwi    r3, 0
  bne-      .loc_0x70
  addi      r3, r31, 0x34
  bl        0xD1EA8
  li        r3, 0
  b         .loc_0xC4

.loc_0x70:
  lis       r3, 0x8050
  mr        r4, r29
  addi      r3, r3, 0x6E0C
  bl        0x8E70
  lwz       r3, 0x50(r29)
  cmplwi    r3, 0
  beq-      .loc_0x90
  bl        0x62F0

.loc_0x90:
  lwz       r3, 0x54(r31)
  cmplwi    r3, 0
  beq-      .loc_0xB0
  lwz       r12, 0x0(r3)
  li        r4, 0x1
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     

.loc_0xB0:
  li        r0, 0
  addi      r3, r31, 0x34
  stw       r0, 0x50(r31)
  bl        0xD1E50
  li        r3, 0x1

.loc_0xC4:
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
 * Address:	........
 * Size:	00010C
 */
void JKRDvdAramRipper::syncAramAll(int)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000034
 */
void JKRDvdAramRipper::countLeftSync()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000040
 */
void JKRDvdAramRipper::afterAramAsync(JKRADCommand *)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8001DE18
 * Size:	000040
 */
void JKRADCommand::JKRADCommand()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  mr        r4, r31
  bl        0x8988
  li        r0, 0
  mr        r3, r31
  stw       r0, 0x48(r31)
  stb       r0, 0x4C(r31)
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
void JSULink<JKRADCommand>::~JSULink()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8001DE58
 * Size:	00008C
 */
void JKRADCommand::~JKRADCommand()
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
  beq-      .loc_0x70
  lbz       r0, 0x4C(r30)
  cmplwi    r0, 0x1
  bne-      .loc_0x4C
  lwz       r3, 0x28(r30)
  cmplwi    r3, 0
  beq-      .loc_0x4C
  lwz       r12, 0x0(r3)
  li        r4, 0x1
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     

.loc_0x4C:
  cmplwi    r30, 0
  beq-      .loc_0x60
  mr        r3, r30
  li        r4, 0
  bl        0x891C

.loc_0x60:
  extsh.    r0, r31
  ble-      .loc_0x70
  mr        r3, r30
  bl        0x61F0

.loc_0x70:
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
 * Address:	8001DEE4
 * Size:	000178
 */
void JKRDecompressFromDVDToAram(JKRDvdFile *, unsigned long, unsigned long, unsigned long, unsigned long, unsigned long, unsigned long *)
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  stw       r0, 0x34(r1)
  stmw      r24, 0x10(r1)
  mr        r25, r3
  mr        r26, r4
  mr        r27, r5
  mr        r28, r6
  mr        r29, r7
  mr        r30, r8
  mr        r31, r9
  bl        0xD0D28
  lbz       r0, -0x7844(r13)
  mr        r24, r3
  cmplwi    r0, 0
  bne-      .loc_0x54
  lis       r3, 0x804F
  subi      r3, r3, 0xA4
  bl        0xD1C04
  li        r0, 0x1
  stb       r0, -0x7844(r13)

.loc_0x54:
  mr        r3, r24
  bl        0xD0D24
  lis       r3, 0x804F
  subi      r3, r3, 0xA4
  bl        0xD1C20
  lwz       r24, -0x7FF4(r13)
  li        r5, 0x20
  lwz       r3, -0x77D8(r13)
  mr        r4, r24
  bl        0x56E4
  mr        r4, r3
  lwz       r3, -0x77D8(r13)
  add       r0, r4, r24
  stw       r4, -0x7880(r13)
  li        r4, 0x1120
  li        r5, 0
  stw       r0, -0x787C(r13)
  bl        0x56C4
  mr        r6, r3
  lwz       r3, -0x77D8(r13)
  addi      r0, r6, 0x1120
  stw       r6, -0x7878(r13)
  li        r4, 0x100
  li        r5, 0x20
  stw       r0, -0x7874(r13)
  stw       r6, -0x7870(r13)
  bl        0x56A0
  sub       r4, r27, r30
  addi      r5, r3, 0x100
  li        r0, 0
  cmplwi    r31, 0
  stw       r3, -0x786C(r13)
  stw       r5, -0x7868(r13)
  stw       r3, -0x7864(r13)
  stw       r25, -0x7854(r13)
  stw       r30, -0x7860(r13)
  stw       r4, -0x785C(r13)
  stw       r29, -0x7850(r13)
  stw       r0, -0x784C(r13)
  stw       r28, -0x7848(r13)
  beq-      .loc_0x100
  mr        r3, r31
  b         .loc_0x104

.loc_0x100:
  subi      r3, r13, 0x783C

.loc_0x104:
  stw       r3, -0x7840(r13)
  li        r0, 0
  stw       r0, 0x0(r3)
  bl        0x2E8
  cmplwi    r3, 0
  beq-      .loc_0x12C
  mr        r4, r26
  bl        .loc_0x178
  mr        r25, r3
  b         .loc_0x130

.loc_0x12C:
  li        r25, -0x1

.loc_0x130:
  lwz       r3, -0x7880(r13)
  li        r4, 0
  bl        0x5650
  lwz       r3, -0x7878(r13)
  li        r4, 0
  bl        0x5644
  lwz       r3, -0x786C(r13)
  li        r4, 0
  bl        0x5638
  lis       r3, 0x804F
  subi      r3, r3, 0xA4
  bl        0xD1C04
  mr        r3, r25
  lmw       r24, 0x10(r1)
  lwz       r0, 0x34(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr       

.loc_0x178:
*/
}

/*
 * --INFO--
 * Address:	8001E05C
 * Size:	000280
 */
void decompSZS_subroutine(unsigned char *, unsigned long)
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  stw       r0, 0x34(r1)
  stmw      r23, 0xC(r1)
  mr        r24, r4
  mr        r25, r24
  li        r29, 0
  li        r28, 0
  li        r26, 0
  lbz       r0, 0x0(r3)
  cmpwi     r0, 0x59
  bne-      .loc_0x54
  lbz       r0, 0x1(r3)
  cmpwi     r0, 0x61
  bne-      .loc_0x54
  lbz       r0, 0x2(r3)
  cmpwi     r0, 0x7A
  bne-      .loc_0x54
  lbz       r0, 0x3(r3)
  cmpwi     r0, 0x30
  beq-      .loc_0x5C

.loc_0x54:
  li        r3, -0x1
  b         .loc_0x26C

.loc_0x5C:
  lwz       r5, -0x7850(r13)
  lwz       r4, 0x4(r3)
  lwz       r0, -0x7848(r13)
  sub       r4, r4, r5
  add       r31, r24, r4
  add       r0, r24, r0
  cmplw     r31, r0
  ble-      .loc_0x80
  mr        r31, r0

.loc_0x80:
  addi      r23, r3, 0x10

.loc_0x84:
  cmpwi     r29, 0
  bne-      .loc_0xBC
  lwz       r0, -0x7858(r13)
  cmplw     r23, r0
  ble-      .loc_0xB0
  lwz       r0, -0x785C(r13)
  cmplwi    r0, 0
  beq-      .loc_0xB0
  mr        r3, r23
  bl        0x28C
  mr        r23, r3

.loc_0xB0:
  lbz       r28, 0x0(r23)
  li        r29, 0x8
  addi      r23, r23, 0x1

.loc_0xBC:
  rlwinm.   r0,r28,0,24,24
  beq-      .loc_0x154
  lwz       r3, -0x784C(r13)
  lwz       r0, -0x7850(r13)
  cmplw     r3, r0
  blt-      .loc_0x114
  lwz       r3, -0x7864(r13)
  addi      r24, r24, 0x1
  lbz       r4, 0x0(r23)
  addi      r26, r26, 0x1
  addi      r0, r3, 0x1
  stw       r0, -0x7864(r13)
  stb       r4, 0x0(r3)
  lwz       r3, -0x7864(r13)
  lwz       r0, -0x7868(r13)
  cmplw     r3, r0
  bne-      .loc_0x10C
  mr        r3, r25
  bl        0x31C
  add       r25, r25, r3

.loc_0x10C:
  cmplw     r24, r31
  beq-      .loc_0x258

.loc_0x114:
  lwz       r3, -0x7870(r13)
  lbz       r4, 0x0(r23)
  addi      r0, r3, 0x1
  stw       r0, -0x7870(r13)
  stb       r4, 0x0(r3)
  lwz       r3, -0x7870(r13)
  lwz       r0, -0x7874(r13)
  cmplw     r3, r0
  bne-      .loc_0x140
  lwz       r0, -0x7878(r13)
  stw       r0, -0x7870(r13)

.loc_0x140:
  lwz       r3, -0x784C(r13)
  addi      r23, r23, 0x1
  addi      r0, r3, 0x1
  stw       r0, -0x784C(r13)
  b         .loc_0x248

.loc_0x154:
  lbz       r5, 0x0(r23)
  lbz       r3, 0x1(r23)
  addi      r23, r23, 0x2
  lwz       r0, -0x7870(r13)
  rlwimi    r3,r5,8,20,23
  lwz       r4, -0x7878(r13)
  srawi     r27, r5, 0x4
  sub       r3, r0, r3
  subi      r30, r3, 0x1
  cmplw     r30, r4
  bge-      .loc_0x18C
  lwz       r0, -0x7874(r13)
  sub       r0, r0, r4
  add       r30, r30, r0

.loc_0x18C:
  cmpwi     r27, 0
  bne-      .loc_0x1A4
  lbz       r3, 0x0(r23)
  addi      r23, r23, 0x1
  addi      r27, r3, 0x12
  b         .loc_0x1A8

.loc_0x1A4:
  addi      r27, r27, 0x2

.loc_0x1A8:
  lwz       r3, -0x784C(r13)
  lwz       r0, -0x7850(r13)
  cmplw     r3, r0
  blt-      .loc_0x1F8
  lwz       r3, -0x7864(r13)
  addi      r24, r24, 0x1
  lbz       r4, 0x0(r30)
  addi      r26, r26, 0x1
  addi      r0, r3, 0x1
  stw       r0, -0x7864(r13)
  stb       r4, 0x0(r3)
  lwz       r3, -0x7864(r13)
  lwz       r0, -0x7868(r13)
  cmplw     r3, r0
  bne-      .loc_0x1F0
  mr        r3, r25
  bl        0x238
  add       r25, r25, r3

.loc_0x1F0:
  cmplw     r24, r31
  beq-      .loc_0x248

.loc_0x1F8:
  lwz       r3, -0x7870(r13)
  lbz       r4, 0x0(r30)
  addi      r0, r3, 0x1
  stw       r0, -0x7870(r13)
  stb       r4, 0x0(r3)
  lwz       r0, -0x7870(r13)
  lwz       r3, -0x7874(r13)
  cmplw     r0, r3
  bne-      .loc_0x224
  lwz       r0, -0x7878(r13)
  stw       r0, -0x7870(r13)

.loc_0x224:
  addi      r30, r30, 0x1
  cmplw     r30, r3
  bne-      .loc_0x234
  lwz       r30, -0x7878(r13)

.loc_0x234:
  lwz       r3, -0x784C(r13)
  subic.    r27, r27, 0x1
  addi      r0, r3, 0x1
  stw       r0, -0x784C(r13)
  bne+      .loc_0x1A8

.loc_0x248:
  cmplw     r24, r31
  rlwinm    r28,r28,1,0,30
  subi      r29, r29, 0x1
  blt+      .loc_0x84

.loc_0x258:
  mr        r3, r25
  bl        0x1C4
  lwz       r4, -0x7840(r13)
  li        r3, 0
  stw       r26, 0x0(r4)

.loc_0x26C:
  lmw       r23, 0xC(r1)
  lwz       r0, 0x34(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	8001E2DC
 * Size:	0000B4
 */
void firstSrcData()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  stw       r30, 0x8(r1)
  lwz       r4, -0x787C(r13)
  lwz       r3, -0x7880(r13)
  subi      r0, r4, 0x19
  lwz       r5, -0x785C(r13)
  sub       r4, r4, r3
  stw       r0, -0x7858(r13)
  cmplw     r5, r4
  mr        r30, r3
  mr        r31, r4
  bge-      .loc_0x40
  mr        r31, r5

.loc_0x40:
  lwz       r3, -0x7854(r13)
  mr        r4, r30
  mr        r5, r31
  li        r6, 0
  addi      r3, r3, 0x5C
  li        r7, 0x2
  bl        0xBE74C
  cmpwi     r3, 0
  bge-      .loc_0x80
  lbz       r0, -0x7FF8(r13)
  cmplwi    r0, 0
  bne-      .loc_0x78
  li        r3, 0
  b         .loc_0x9C

.loc_0x78:
  bl        0xB2EE0
  b         .loc_0x40

.loc_0x80:
  lwz       r4, -0x7860(r13)
  mr        r3, r30
  lwz       r0, -0x785C(r13)
  add       r4, r4, r31
  sub       r0, r0, r31
  stw       r4, -0x7860(r13)
  stw       r0, -0x785C(r13)

.loc_0x9C:
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
 * Address:	8001E390
 * Size:	0000EC
 */
void nextSrcData(unsigned char *)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  mr        r4, r3
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  stw       r29, 0x14(r1)
  lwz       r0, -0x787C(r13)
  sub       r30, r0, r4
  rlwinm.   r5,r30,0,27,31
  beq-      .loc_0x3C
  lwz       r3, -0x7880(r13)
  addi      r0, r3, 0x20
  sub       r29, r0, r5
  b         .loc_0x40

.loc_0x3C:
  lwz       r29, -0x7880(r13)

.loc_0x40:
  mr        r3, r29
  mr        r5, r30
  bl        -0x1923C
  lwz       r0, -0x787C(r13)
  add       r30, r29, r30
  lwz       r3, -0x785C(r13)
  sub       r31, r0, r30
  cmplw     r31, r3
  ble-      .loc_0x68
  mr        r31, r3

.loc_0x68:
  lwz       r3, -0x7854(r13)
  mr        r4, r30
  lwz       r6, -0x7860(r13)
  mr        r5, r31
  addi      r3, r3, 0x5C
  li        r7, 0x2
  bl        0xBE670
  cmpwi     r3, 0
  bge-      .loc_0xA8
  lbz       r0, -0x7FF8(r13)
  cmplwi    r0, 0
  bne-      .loc_0xA0
  li        r3, 0
  b         .loc_0xD0

.loc_0xA0:
  bl        0xB2E04
  b         .loc_0x68

.loc_0xA8:
  lwz       r0, -0x785C(r13)
  lwz       r3, -0x7860(r13)
  sub.      r0, r0, r31
  add       r3, r3, r31
  stw       r3, -0x7860(r13)
  stw       r0, -0x785C(r13)
  bne-      .loc_0xCC
  add       r0, r30, r31
  stw       r0, -0x7858(r13)

.loc_0xCC:
  mr        r3, r29

.loc_0xD0:
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
 * Address:	8001E47C
 * Size:	000068
 */
void dmaBufferFlush(unsigned long)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  lwz       r0, -0x7864(r13)
  lwz       r4, -0x786C(r13)
  cmplw     r0, r4
  bne-      .loc_0x28
  li        r3, 0
  b         .loc_0x54

.loc_0x28:
  sub       r5, r0, r4
  li        r7, 0
  addi      r0, r5, 0x1F
  rlwinm    r31,r0,0,0,26
  mr        r5, r3
  li        r3, 0
  mr        r6, r31
  bl        -0x49C8
  lwz       r0, -0x786C(r13)
  mr        r3, r31
  stw       r0, -0x7864(r13)

.loc_0x54:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8001E4E4
 * Size:	000044
 */
void __sinit_JKRDvdAramRipper_cpp(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lis       r3, 0x8050
  stw       r0, 0x14(r1)
  addi      r3, r3, 0x6E0C
  bl        0x83D8
  lis       r3, 0x8050
  lis       r4, 0x8002
  lis       r5, 0x804F
  addi      r3, r3, 0x6E0C
  subi      r4, r4, 0x1AD8
  subi      r5, r5, 0xB0
  bl        0xA31EC
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8001E528
 * Size:	000054
 */
void JSUList<JKRADCommand>::~JSUList()
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
  beq-      .loc_0x38
  li        r4, 0
  bl        0x831C
  extsh.    r0, r31
  ble-      .loc_0x38
  mr        r3, r30
  bl        0x5B58

.loc_0x38:
  lwz       r0, 0x14(r1)
  mr        r3, r30
  lwz       r31, 0xC(r1)
  lwz       r30, 0x8(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}