

/*
 * --INFO--
 * Address:	........
 * Size:	00004C
 */
void JKRArchive::JKRArchive()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8001A4BC
 * Size:	0000A8
 */
void JKRArchive::JKRArchive(long, JKRArchive::EMountMode)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  mr        r31, r5
  stw       r30, 0x18(r1)
  mr        r30, r4
  stw       r29, 0x14(r1)
  mr        r29, r3
  bl        0x89B8
  lis       r3, 0x804A
  li        r4, 0
  subi      r3, r3, 0x388
  li        r0, 0x1
  stw       r3, 0x0(r29)
  mr        r3, r29
  stb       r4, 0x30(r29)
  stb       r31, 0x3C(r29)
  stw       r0, 0x34(r29)
  stw       r0, 0x58(r29)
  bl        0x93E8
  stw       r3, 0x38(r29)
  lwz       r0, 0x38(r29)
  cmplwi    r0, 0
  bne-      .loc_0x6C
  lwz       r0, -0x77D4(r13)
  stw       r0, 0x38(r29)

.loc_0x6C:
  stw       r30, 0x40(r29)
  lwz       r0, -0x77E0(r13)
  cmplwi    r0, 0
  bne-      .loc_0x88
  li        r0, 0
  stw       r29, -0x77E0(r13)
  stw       r0, -0x7890(r13)

.loc_0x88:
  lwz       r0, 0x24(r1)
  mr        r3, r29
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
 * Size:	0000B8
 */
void JKRArchive::JKRArchive(const char *, JKRArchive::EMountMode)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8001A564
 * Size:	000060
 */
void JKRArchive::~JKRArchive()
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
  lis       r5, 0x804A
  li        r4, 0
  subi      r0, r5, 0x388
  stw       r0, 0x0(r30)
  bl        0x895C
  extsh.    r0, r31
  ble-      .loc_0x44
  mr        r3, r30
  bl        0x9B10

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
 * Address:	8001A5C4
 * Size:	00004C
 */
void JKRArchive::isSameName(JKRArchive::CArcName &, unsigned long, unsigned short) const
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  rlwinm    r0,r6,0,16,31
  lhz       r6, 0x0(r4)
  cmplw     r6, r0
  beq-      .loc_0x24
  li        r3, 0
  b         .loc_0x3C

.loc_0x24:
  lwz       r0, 0x54(r3)
  addi      r4, r4, 0x4
  add       r3, r0, r5
  bl        0xB00CC
  cntlzw    r0, r3
  rlwinm    r3,r0,27,5,31

.loc_0x3C:
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000034
 */
void JKRArchive::findResType(unsigned long) const
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8001A610
 * Size:	00031C
 */
void JKRArchive::findDirectory(const char *, unsigned long) const
{
/*
.loc_0x0:
  stwu      r1, -0x450(r1)
  mflr      r0
  cmplwi    r4, 0
  stw       r0, 0x454(r1)
  stmw      r25, 0x434(r1)
  mr        r28, r3
  mr        r25, r5
  bne-      .loc_0x30
  lwz       r3, 0x48(r28)
  rlwinm    r0,r25,4,0,27
  add       r3, r3, r0
  b         .loc_0x308

.loc_0x30:
  addi      r3, r1, 0x324
  li        r5, 0x2F
  bl        0x984
  lwz       r5, 0x48(r28)
  rlwinm    r0,r25,4,0,27
  lwz       r4, 0x4C(r28)
  mr        r31, r3
  add       r29, r5, r0
  lwz       r27, 0x54(r28)
  lwz       r0, 0xC(r29)
  addi      r25, r1, 0x328
  li        r30, 0
  mulli     r0, r0, 0x14
  add       r26, r4, r0
  b         .loc_0x2F8

.loc_0x6C:
  lhz       r3, 0x324(r1)
  lhz       r0, 0x2(r26)
  lwz       r4, 0x4(r26)
  cmplw     r3, r0
  rlwinm    r0,r4,0,8,31
  beq-      .loc_0x8C
  li        r0, 0
  b         .loc_0xA0

.loc_0x8C:
  mr        r4, r25
  add       r3, r27, r0
  bl        0xB001C
  cntlzw    r0, r3
  rlwinm    r0,r0,27,5,31

.loc_0xA0:
  rlwinm.   r0,r0,0,24,31
  beq-      .loc_0x2F0
  lwz       r0, 0x4(r26)
  rlwinm.   r0,r0,8,30,30
  beq-      .loc_0x304
  cmplwi    r31, 0
  lwz       r25, 0x8(r26)
  bne-      .loc_0xD0
  lwz       r3, 0x48(r28)
  rlwinm    r0,r25,4,0,27
  add       r3, r3, r0
  b         .loc_0x308

.loc_0xD0:
  mr        r4, r31
  addi      r3, r1, 0x21C
  li        r5, 0x2F
  bl        0x8E0
  lwz       r5, 0x48(r28)
  rlwinm    r0,r25,4,0,27
  lwz       r4, 0x4C(r28)
  mr        r30, r3
  add       r31, r5, r0
  lwz       r27, 0x54(r28)
  lwz       r0, 0xC(r31)
  addi      r29, r1, 0x220
  li        r26, 0
  mulli     r0, r0, 0x14
  add       r25, r4, r0
  b         .loc_0x2DC

.loc_0x110:
  lhz       r3, 0x21C(r1)
  lhz       r0, 0x2(r25)
  lwz       r4, 0x4(r25)
  cmplw     r3, r0
  rlwinm    r0,r4,0,8,31
  beq-      .loc_0x130
  li        r0, 0
  b         .loc_0x144

.loc_0x130:
  mr        r4, r29
  add       r3, r27, r0
  bl        0xAFF78
  cntlzw    r0, r3
  rlwinm    r0,r0,27,5,31

.loc_0x144:
  rlwinm.   r0,r0,0,24,31
  beq-      .loc_0x2D4
  lwz       r0, 0x4(r25)
  rlwinm.   r0,r0,8,30,30
  beq-      .loc_0x2E8
  cmplwi    r30, 0
  lwz       r25, 0x8(r25)
  bne-      .loc_0x174
  lwz       r3, 0x48(r28)
  rlwinm    r0,r25,4,0,27
  add       r3, r3, r0
  b         .loc_0x308

.loc_0x174:
  mr        r4, r30
  addi      r3, r1, 0x114
  li        r5, 0x2F
  bl        0x83C
  lwz       r5, 0x48(r28)
  rlwinm    r0,r25,4,0,27
  lwz       r4, 0x4C(r28)
  mr        r29, r3
  add       r27, r5, r0
  li        r25, 0
  lwz       r0, 0xC(r27)
  mulli     r0, r0, 0x14
  add       r26, r4, r0
  b         .loc_0x2C0

.loc_0x1AC:
  lwz       r0, 0x4(r26)
  addi      r3, r1, 0x114
  lhz       r31, 0x2(r26)
  rlwinm    r30,r0,0,8,31
  bl        0x1AC
  rlwinm    r0,r3,0,16,31
  cmplw     r0, r31
  beq-      .loc_0x1D4
  li        r0, 0
  b         .loc_0x1F4

.loc_0x1D4:
  addi      r3, r1, 0x114
  bl        0x188
  lwz       r0, 0x54(r28)
  mr        r4, r3
  add       r3, r0, r30
  bl        0xAFEC8
  cntlzw    r0, r3
  rlwinm    r0,r0,27,5,31

.loc_0x1F4:
  rlwinm.   r0,r0,0,24,31
  beq-      .loc_0x2B8
  lwz       r0, 0x4(r26)
  rlwinm.   r0,r0,8,30,30
  beq-      .loc_0x2CC
  lwz       r25, 0x8(r26)
  cmplwi    r29, 0
  stw       r29, 0x8(r1)
  bne-      .loc_0x228
  lwz       r3, 0x48(r28)
  rlwinm    r0,r25,4,0,27
  add       r3, r3, r0
  b         .loc_0x308

.loc_0x228:
  addi      r3, r1, 0xC
  addi      r4, r1, 0x8
  li        r5, 0x2F
  bl        .loc_0x31C
  lwz       r4, 0x48(r28)
  rlwinm    r0,r25,4,0,27
  lwz       r3, 0x4C(r28)
  li        r25, 0
  add       r27, r4, r0
  lwz       r0, 0xC(r27)
  mulli     r0, r0, 0x14
  add       r26, r3, r0
  b         .loc_0x2A4

.loc_0x25C:
  lwz       r0, 0x4(r26)
  mr        r3, r28
  lhz       r6, 0x2(r26)
  addi      r4, r1, 0xC
  rlwinm    r5,r0,0,8,31
  bl        -0x2BC
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x29C
  lwz       r0, 0x4(r26)
  rlwinm.   r0,r0,8,30,30
  beq-      .loc_0x2B0
  lwz       r4, 0x8(r1)
  mr        r3, r28
  lwz       r5, 0x8(r26)
  bl        .loc_0x0
  b         .loc_0x308

.loc_0x29C:
  addi      r26, r26, 0x14
  addi      r25, r25, 0x1

.loc_0x2A4:
  lhz       r0, 0xA(r27)
  cmpw      r25, r0
  blt+      .loc_0x25C

.loc_0x2B0:
  li        r3, 0
  b         .loc_0x308

.loc_0x2B8:
  addi      r26, r26, 0x14
  addi      r25, r25, 0x1

.loc_0x2C0:
  lhz       r0, 0xA(r27)
  cmpw      r25, r0
  blt+      .loc_0x1AC

.loc_0x2CC:
  li        r3, 0
  b         .loc_0x308

.loc_0x2D4:
  addi      r25, r25, 0x14
  addi      r26, r26, 0x1

.loc_0x2DC:
  lhz       r0, 0xA(r31)
  cmpw      r26, r0
  blt+      .loc_0x110

.loc_0x2E8:
  li        r3, 0
  b         .loc_0x308

.loc_0x2F0:
  addi      r26, r26, 0x14
  addi      r30, r30, 0x1

.loc_0x2F8:
  lhz       r0, 0xA(r29)
  cmpw      r30, r0
  blt+      .loc_0x6C

.loc_0x304:
  li        r3, 0

.loc_0x308:
  lmw       r25, 0x434(r1)
  lwz       r0, 0x454(r1)
  mtlr      r0
  addi      r1, r1, 0x450
  blr       

.loc_0x31C:
*/
}

/*
 * --INFO--
 * Address:	8001A92C
 * Size:	000044
 */
void __ct__Q210JKRArchive8CArcNameFPPCcc(void)
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
  lwz       r4, 0x0(r4)
  bl        0x680
  stw       r3, 0x0(r31)
  mr        r3, r30
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
 * Address:	8001A970
 * Size:	000008
 */
void getString__Q210JKRArchive8CArcNameCFv(void)
{
/*
.loc_0x0:
  addi      r3, r3, 0x4
  blr
*/
}

/*
 * --INFO--
 * Address:	8001A978
 * Size:	000008
 */
void getHash__Q210JKRArchive8CArcNameCFv(void)
{
/*
.loc_0x0:
  lhz       r3, 0x0(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000098
 */
void JKRArchive::findTypeResource(unsigned long, unsigned long) const
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8001A980
 * Size:	0000F4
 */
void JKRArchive::findTypeResource(unsigned long, const char *) const
{
/*
.loc_0x0:
  stwu      r1, -0x130(r1)
  mflr      r0
  stw       r0, 0x134(r1)
  stmw      r27, 0x11C(r1)
  mr.       r27, r4
  mr        r28, r3
  beq-      .loc_0xDC
  mr        r4, r5
  addi      r3, r1, 0x8
  bl        0x590
  lwz       r3, 0x44(r28)
  lwz       r30, 0x48(r28)
  lwz       r0, 0x0(r3)
  mtctr     r0
  cmplwi    r0, 0
  ble-      .loc_0x58

.loc_0x40:
  lwz       r0, 0x0(r30)
  cmplw     r0, r27
  bne-      .loc_0x50
  b         .loc_0x5C

.loc_0x50:
  addi      r30, r30, 0x10
  bdnz+     .loc_0x40

.loc_0x58:
  li        r30, 0

.loc_0x5C:
  cmplwi    r30, 0
  beq-      .loc_0xDC
  lwz       r0, 0xC(r30)
  addi      r29, r1, 0xC
  lwz       r3, 0x4C(r28)
  li        r27, 0
  mulli     r0, r0, 0x14
  lwz       r31, 0x54(r28)
  add       r28, r3, r0
  b         .loc_0xD0

.loc_0x84:
  lhz       r3, 0x8(r1)
  lhz       r0, 0x2(r28)
  lwz       r4, 0x4(r28)
  cmplw     r3, r0
  rlwinm    r0,r4,0,8,31
  beq-      .loc_0xA4
  li        r0, 0
  b         .loc_0xB8

.loc_0xA4:
  mr        r4, r29
  add       r3, r31, r0
  bl        0xAFC94
  cntlzw    r0, r3
  rlwinm    r0,r0,27,5,31

.loc_0xB8:
  rlwinm.   r0,r0,0,24,31
  beq-      .loc_0xC8
  mr        r3, r28
  b         .loc_0xE0

.loc_0xC8:
  addi      r28, r28, 0x14
  addi      r27, r27, 0x1

.loc_0xD0:
  lhz       r0, 0xA(r30)
  cmpw      r27, r0
  blt+      .loc_0x84

.loc_0xDC:
  li        r3, 0

.loc_0xE0:
  lmw       r27, 0x11C(r1)
  lwz       r0, 0x134(r1)
  mtlr      r0
  addi      r1, r1, 0x130
  blr
*/
}

/*
 * --INFO--
 * Address:	8001AA74
 * Size:	000340
 */
void JKRArchive::findFsResource(const char *, unsigned long) const
{
/*
.loc_0x0:
  stwu      r1, -0x450(r1)
  mflr      r0
  cmplwi    r4, 0
  stw       r0, 0x454(r1)
  stmw      r25, 0x434(r1)
  mr        r28, r3
  mr        r25, r5
  beq-      .loc_0x328
  addi      r3, r1, 0x324
  li        r5, 0x2F
  bl        0x530
  lwz       r5, 0x48(r28)
  rlwinm    r0,r25,4,0,27
  lwz       r4, 0x4C(r28)
  mr        r31, r3
  add       r29, r5, r0
  lwz       r27, 0x54(r28)
  lwz       r0, 0xC(r29)
  addi      r25, r1, 0x328
  li        r30, 0
  mulli     r0, r0, 0x14
  add       r26, r4, r0
  b         .loc_0x31C

.loc_0x5C:
  lhz       r3, 0x324(r1)
  lhz       r0, 0x2(r26)
  lwz       r4, 0x4(r26)
  cmplw     r3, r0
  rlwinm    r0,r4,0,8,31
  beq-      .loc_0x7C
  li        r0, 0
  b         .loc_0x90

.loc_0x7C:
  mr        r4, r25
  add       r3, r27, r0
  bl        0xAFBC8
  cntlzw    r0, r3
  rlwinm    r0,r0,27,5,31

.loc_0x90:
  rlwinm.   r0,r0,0,24,31
  beq-      .loc_0x314
  lwz       r0, 0x4(r26)
  rlwinm.   r0,r0,8,30,30
  beq-      .loc_0x2FC
  cmplwi    r31, 0
  lwz       r25, 0x8(r26)
  beq-      .loc_0x2F4
  mr        r4, r31
  addi      r3, r1, 0x21C
  li        r5, 0x2F
  bl        0x49C
  lwz       r5, 0x48(r28)
  rlwinm    r0,r25,4,0,27
  lwz       r4, 0x4C(r28)
  mr        r30, r3
  add       r31, r5, r0
  lwz       r27, 0x54(r28)
  lwz       r0, 0xC(r31)
  addi      r29, r1, 0x220
  li        r26, 0
  mulli     r0, r0, 0x14
  add       r25, r4, r0
  b         .loc_0x2E8

.loc_0xF0:
  lhz       r3, 0x21C(r1)
  lhz       r0, 0x2(r25)
  lwz       r4, 0x4(r25)
  cmplw     r3, r0
  rlwinm    r0,r4,0,8,31
  beq-      .loc_0x110
  li        r0, 0
  b         .loc_0x124

.loc_0x110:
  mr        r4, r29
  add       r3, r27, r0
  bl        0xAFB34
  cntlzw    r0, r3
  rlwinm    r0,r0,27,5,31

.loc_0x124:
  rlwinm.   r0,r0,0,24,31
  beq-      .loc_0x2E0
  lwz       r0, 0x4(r25)
  rlwinm.   r0,r0,8,30,30
  beq-      .loc_0x2C8
  cmplwi    r30, 0
  lwz       r25, 0x8(r25)
  beq-      .loc_0x2C0
  mr        r4, r30
  addi      r3, r1, 0x114
  li        r5, 0x2F
  bl        0x408
  lwz       r5, 0x48(r28)
  rlwinm    r0,r25,4,0,27
  lwz       r4, 0x4C(r28)
  mr        r29, r3
  add       r27, r5, r0
  li        r25, 0
  lwz       r0, 0xC(r27)
  mulli     r0, r0, 0x14
  add       r26, r4, r0
  b         .loc_0x2B4

.loc_0x17C:
  lwz       r0, 0x4(r26)
  addi      r3, r1, 0x114
  lhz       r31, 0x2(r26)
  rlwinm    r30,r0,0,8,31
  bl        -0x288
  rlwinm    r0,r3,0,16,31
  cmplw     r0, r31
  beq-      .loc_0x1A4
  li        r0, 0
  b         .loc_0x1C4

.loc_0x1A4:
  addi      r3, r1, 0x114
  bl        -0x2AC
  lwz       r0, 0x54(r28)
  mr        r4, r3
  add       r3, r0, r30
  bl        0xAFA94
  cntlzw    r0, r3
  rlwinm    r0,r0,27,5,31

.loc_0x1C4:
  rlwinm.   r0,r0,0,24,31
  beq-      .loc_0x2AC
  lwz       r0, 0x4(r26)
  rlwinm.   r0,r0,8,30,30
  beq-      .loc_0x294
  lwz       r25, 0x8(r26)
  cmplwi    r29, 0
  stw       r29, 0x8(r1)
  beq-      .loc_0x28C
  addi      r3, r1, 0xC
  addi      r4, r1, 0x8
  li        r5, 0x2F
  bl        -0x33C
  lwz       r4, 0x48(r28)
  rlwinm    r0,r25,4,0,27
  lwz       r3, 0x4C(r28)
  li        r25, 0
  add       r27, r4, r0
  lwz       r0, 0xC(r27)
  mulli     r0, r0, 0x14
  add       r26, r3, r0
  b         .loc_0x280

.loc_0x21C:
  lwz       r0, 0x4(r26)
  mr        r3, r28
  lhz       r6, 0x2(r26)
  addi      r4, r1, 0xC
  rlwinm    r5,r0,0,8,31
  bl        -0x6E0
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x278
  lwz       r0, 0x4(r26)
  rlwinm.   r0,r0,8,30,30
  beq-      .loc_0x25C
  lwz       r4, 0x8(r1)
  mr        r3, r28
  lwz       r5, 0x8(r26)
  bl        .loc_0x0
  b         .loc_0x32C

.loc_0x25C:
  lwz       r0, 0x8(r1)
  cmplwi    r0, 0
  bne-      .loc_0x270
  mr        r3, r26
  b         .loc_0x32C

.loc_0x270:
  li        r3, 0
  b         .loc_0x32C

.loc_0x278:
  addi      r26, r26, 0x14
  addi      r25, r25, 0x1

.loc_0x280:
  lhz       r0, 0xA(r27)
  cmpw      r25, r0
  blt+      .loc_0x21C

.loc_0x28C:
  li        r3, 0
  b         .loc_0x32C

.loc_0x294:
  cmplwi    r29, 0
  bne-      .loc_0x2A4
  mr        r3, r26
  b         .loc_0x32C

.loc_0x2A4:
  li        r3, 0
  b         .loc_0x32C

.loc_0x2AC:
  addi      r26, r26, 0x14
  addi      r25, r25, 0x1

.loc_0x2B4:
  lhz       r0, 0xA(r27)
  cmpw      r25, r0
  blt+      .loc_0x17C

.loc_0x2C0:
  li        r3, 0
  b         .loc_0x32C

.loc_0x2C8:
  cmplwi    r30, 0
  bne-      .loc_0x2D8
  mr        r3, r25
  b         .loc_0x32C

.loc_0x2D8:
  li        r3, 0
  b         .loc_0x32C

.loc_0x2E0:
  addi      r25, r25, 0x14
  addi      r26, r26, 0x1

.loc_0x2E8:
  lhz       r0, 0xA(r31)
  cmpw      r26, r0
  blt+      .loc_0xF0

.loc_0x2F4:
  li        r3, 0
  b         .loc_0x32C

.loc_0x2FC:
  cmplwi    r31, 0
  bne-      .loc_0x30C
  mr        r3, r26
  b         .loc_0x32C

.loc_0x30C:
  li        r3, 0
  b         .loc_0x32C

.loc_0x314:
  addi      r26, r26, 0x14
  addi      r30, r30, 0x1

.loc_0x31C:
  lhz       r0, 0xA(r29)
  cmpw      r30, r0
  blt+      .loc_0x5C

.loc_0x328:
  li        r3, 0

.loc_0x32C:
  lmw       r25, 0x434(r1)
  lwz       r0, 0x454(r1)
  mtlr      r0
  addi      r1, r1, 0x450
  blr
*/
}

/*
 * --INFO--
 * Address:	8001ADB4
 * Size:	000028
 */
void JKRArchive::findIdxResource(unsigned long) const
{
/*
.loc_0x0:
  lwz       r5, 0x44(r3)
  lwz       r0, 0x8(r5)
  cmplw     r4, r0
  bge-      .loc_0x20
  mulli     r0, r4, 0x14
  lwz       r3, 0x4C(r3)
  add       r3, r3, r0
  blr       

.loc_0x20:
  li        r3, 0
  blr
*/
}

/*
 * --INFO--
 * Address:	8001ADDC
 * Size:	0000A4
 */
void JKRArchive::findNameResource(const char *) const
{
/*
.loc_0x0:
  stwu      r1, -0x130(r1)
  mflr      r0
  stw       r0, 0x134(r1)
  stmw      r27, 0x11C(r1)
  mr        r27, r3
  lwz       r28, 0x4C(r27)
  addi      r3, r1, 0x8
  bl        0x13C
  lwz       r30, 0x54(r27)
  addi      r29, r1, 0xC
  lwz       r31, 0x44(r27)
  li        r27, 0
  b         .loc_0x80

.loc_0x34:
  lhz       r3, 0x8(r1)
  lhz       r0, 0x2(r28)
  lwz       r4, 0x4(r28)
  cmplw     r3, r0
  rlwinm    r0,r4,0,8,31
  beq-      .loc_0x54
  li        r0, 0
  b         .loc_0x68

.loc_0x54:
  mr        r4, r29
  add       r3, r30, r0
  bl        0xAF888
  cntlzw    r0, r3
  rlwinm    r0,r0,27,5,31

.loc_0x68:
  rlwinm.   r0,r0,0,24,31
  beq-      .loc_0x78
  mr        r3, r28
  b         .loc_0x90

.loc_0x78:
  addi      r28, r28, 0x14
  addi      r27, r27, 0x1

.loc_0x80:
  lwz       r0, 0x8(r31)
  cmplw     r27, r0
  blt+      .loc_0x34
  li        r3, 0

.loc_0x90:
  lmw       r27, 0x11C(r1)
  lwz       r0, 0x134(r1)
  mtlr      r0
  addi      r1, r1, 0x130
  blr
*/
}

/*
 * --INFO--
 * Address:	8001AE80
 * Size:	000034
 */
void JKRArchive::findPtrResource(const void *) const
{
/*
.loc_0x0:
  lwz       r5, 0x44(r3)
  lwz       r3, 0x4C(r3)
  lwz       r0, 0x8(r5)
  mtctr     r0
  cmplwi    r0, 0
  ble-      .loc_0x2C

.loc_0x18:
  lwz       r0, 0x10(r3)
  cmplw     r0, r4
  beqlr-    
  addi      r3, r3, 0x14
  bdnz+     .loc_0x18

.loc_0x2C:
  li        r3, 0
  blr
*/
}

/*
 * --INFO--
 * Address:	8001AEB4
 * Size:	000080
 */
void JKRArchive::findIdResource(unsigned short) const
{
/*
.loc_0x0:
  rlwinm    r5,r4,0,16,31
  cmplwi    r5, 0xFFFF
  beq-      .loc_0x78
  mulli     r0, r5, 0x14
  lwz       r6, 0x4C(r3)
  add       r7, r6, r0
  lhz       r0, 0x0(r7)
  cmplw     r0, r5
  bne-      .loc_0x38
  lwz       r0, 0x4(r7)
  rlwinm.   r0,r0,8,31,31
  beq-      .loc_0x38
  mr        r3, r7
  blr       

.loc_0x38:
  lwz       r5, 0x44(r3)
  rlwinm    r3,r4,0,16,31
  lwz       r0, 0x8(r5)
  mtctr     r0
  cmplwi    r0, 0
  ble-      .loc_0x78

.loc_0x50:
  lhz       r0, 0x0(r6)
  cmplw     r0, r3
  bne-      .loc_0x70
  lwz       r0, 0x4(r6)
  rlwinm.   r0,r0,8,31,31
  beq-      .loc_0x70
  mr        r3, r6
  blr       

.loc_0x70:
  addi      r6, r6, 0x14
  bdnz+     .loc_0x50

.loc_0x78:
  li        r3, 0
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000014
 */
void __ct__Q210JKRArchive8CArcNameFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8001AF34
 * Size:	000098
 */
void store__Q210JKRArchive8CArcNameFPCc(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  li        r0, 0
  stw       r31, 0x1C(r1)
  li        r31, 0
  stw       r30, 0x18(r1)
  mr        r30, r4
  stw       r29, 0x14(r1)
  mr        r29, r3
  sth       r0, 0x0(r3)
  b         .loc_0x60

.loc_0x30:
  extsb     r3, r3
  bl        0xAB2FC
  lhz       r0, 0x0(r29)
  cmpwi     r31, 0x100
  mulli     r0, r0, 0x3
  add       r0, r3, r0
  sth       r0, 0x0(r29)
  bge-      .loc_0x5C
  addi      r0, r31, 0x4
  addi      r31, r31, 0x1
  stbx      r3, r29, r0

.loc_0x5C:
  addi      r30, r30, 0x1

.loc_0x60:
  lbz       r3, 0x0(r30)
  extsb.    r0, r3
  bne+      .loc_0x30
  sth       r31, 0x2(r29)
  add       r3, r29, r31
  li        r0, 0
  stb       r0, 0x4(r3)
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
 * Address:	8001AFCC
 * Size:	0000C8
 */
void store__Q210JKRArchive8CArcNameFPCcc(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  li        r0, 0
  stw       r31, 0x1C(r1)
  extsb     r31, r5
  stw       r30, 0x18(r1)
  li        r30, 0
  stw       r29, 0x14(r1)
  mr        r29, r4
  stw       r28, 0x10(r1)
  mr        r28, r3
  sth       r0, 0x0(r3)
  b         .loc_0x68

.loc_0x38:
  extsb     r3, r3
  bl        0xAB25C
  lhz       r0, 0x0(r28)
  cmpwi     r30, 0x100
  mulli     r0, r0, 0x3
  add       r0, r3, r0
  sth       r0, 0x0(r28)
  bge-      .loc_0x64
  addi      r0, r30, 0x4
  addi      r30, r30, 0x1
  stbx      r3, r28, r0

.loc_0x64:
  addi      r29, r29, 0x1

.loc_0x68:
  lbz       r3, 0x0(r29)
  extsb.    r0, r3
  beq-      .loc_0x80
  extsb     r0, r3
  cmpw      r0, r31
  bne+      .loc_0x38

.loc_0x80:
  lbz       r0, 0x0(r29)
  add       r3, r28, r30
  sth       r30, 0x2(r28)
  li        r4, 0
  extsb.    r0, r0
  stb       r4, 0x4(r3)
  bne-      .loc_0xA4
  li        r3, 0
  b         .loc_0xA8

.loc_0xA4:
  addi      r3, r29, 0x1

.loc_0xA8:
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
 * Address:	8001B094
 * Size:	00004C
 */
void JKRArchive::setExpandSize(JKRArchive::SDIFileEntry *, unsigned long)
{
/*
.loc_0x0:
  lwz       r0, 0x4C(r3)
  lis       r6, 0x6666
  lwz       r7, 0x50(r3)
  addi      r6, r6, 0x6667
  sub       r0, r4, r0
  mulhw     r0, r6, r0
  cmplwi    r7, 0
  srawi     r0, r0, 0x3
  rlwinm    r4,r0,1,31,31
  add       r4, r0, r4
  beqlr-    
  lwz       r3, 0x44(r3)
  lwz       r0, 0x8(r3)
  cmplw     r4, r0
  blt-      .loc_0x40
  blr       

.loc_0x40:
  rlwinm    r0,r4,2,0,29
  stwx      r5, r7, r0
  blr
*/
}

/*
 * --INFO--
 * Address:	8001B0E0
 * Size:	000050
 */
void JKRArchive::getExpandSize(JKRArchive::SDIFileEntry *) const
{
/*
.loc_0x0:
  lwz       r0, 0x4C(r3)
  lis       r5, 0x6666
  lwz       r6, 0x50(r3)
  addi      r5, r5, 0x6667
  sub       r0, r4, r0
  mulhw     r0, r5, r0
  cmplwi    r6, 0
  srawi     r0, r0, 0x3
  rlwinm    r4,r0,1,31,31
  add       r4, r0, r4
  beq-      .loc_0x3C
  lwz       r3, 0x44(r3)
  lwz       r0, 0x8(r3)
  cmplw     r4, r0
  blt-      .loc_0x44

.loc_0x3C:
  li        r3, 0
  blr       

.loc_0x44:
  rlwinm    r0,r4,2,0,29
  lwzx      r3, r6, r0
  blr
*/
}