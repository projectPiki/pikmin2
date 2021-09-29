

/*
 * --INFO--
 * Address:	80019444
 * Size:	00006C
 */
void JKRAramBlock::JKRAramBlock(unsigned long, unsigned long, unsigned long, unsigned char, bool)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  lis       r9, 0x804A
  stw       r0, 0x24(r1)
  subi      r0, r9, 0x3E8
  stmw      r26, 0x8(r1)
  mr        r26, r3
  mr        r27, r4
  mr        r28, r5
  mr        r29, r6
  mr        r30, r7
  mr        r31, r8
  mr        r4, r26
  stw       r0, 0x0(r3)
  addi      r3, r26, 0x4
  bl        0xD338
  stw       r27, 0x14(r26)
  mr        r3, r26
  stw       r28, 0x18(r26)
  stw       r29, 0x1C(r26)
  stb       r30, 0x20(r26)
  stb       r31, 0x21(r26)
  lmw       r26, 0x8(r1)
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000054
 */
void JSULink<JKRAramBlock>::~JSULink()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800194B0
 * Size:	0000BC
 */
void JKRAramBlock::~JKRAramBlock()
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
  beq-      .loc_0xA0
  lis       r3, 0x804A
  subi      r0, r3, 0x3E8
  stw       r0, 0x0(r30)
  lwz       r4, 0xC(r30)
  lwz       r3, 0x8(r30)
  cmplwi    r4, 0
  beq-      .loc_0x64
  lwz       r7, 0x0(r4)
  addi      r4, r30, 0x4
  lwz       r0, 0x1C(r30)
  lwz       r6, 0x1C(r7)
  lwz       r5, 0x18(r30)
  add       r0, r0, r6
  add       r0, r5, r0
  stw       r0, 0x1C(r7)
  bl        0xD718
  b         .loc_0x7C

.loc_0x64:
  lwz       r4, 0x1C(r30)
  li        r0, 0
  lwz       r3, 0x18(r30)
  add       r3, r4, r3
  stw       r3, 0x1C(r30)
  stw       r0, 0x18(r30)

.loc_0x7C:
  addic.    r0, r30, 0x4
  beq-      .loc_0x90
  addi      r3, r30, 0x4
  li        r4, 0
  bl        0xD294

.loc_0x90:
  extsh.    r0, r31
  ble-      .loc_0xA0
  mr        r3, r30
  bl        0xAB68

.loc_0xA0:
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
 * Address:	8001956C
 * Size:	0000A8
 */
void JKRAramBlock::allocHead(unsigned long, unsigned char, JKRAramHeap *)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stmw      r26, 0x8(r1)
  mr        r26, r3
  mr        r27, r4
  mr        r28, r5
  li        r5, 0
  lwz       r0, 0x1C(r3)
  lwz       r8, 0x14(r3)
  li        r3, 0x24
  lwz       r7, 0x18(r26)
  sub       r29, r0, r27
  lwz       r4, 0x30(r6)
  add       r30, r8, r7
  bl        0xA998
  mr.       r31, r3
  beq-      .loc_0x78
  lis       r3, 0x804A
  mr        r4, r31
  subi      r0, r3, 0x3E8
  addi      r3, r31, 0x4
  stw       r0, 0x0(r31)
  bl        0xD1F0
  stw       r30, 0x14(r31)
  li        r0, 0
  stw       r27, 0x18(r31)
  stw       r29, 0x1C(r31)
  stb       r28, 0x20(r31)
  stb       r0, 0x21(r31)

.loc_0x78:
  li        r0, 0
  addi      r5, r31, 0x4
  stw       r0, 0x1C(r26)
  lwz       r3, 0x8(r26)
  lwz       r4, 0x10(r26)
  bl        0xD45C
  mr        r3, r31
  lmw       r26, 0x8(r1)
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	80019614
 * Size:	0000B4
 */
void JKRAramBlock::allocTail(unsigned long, unsigned char, JKRAramHeap *)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stmw      r27, 0xC(r1)
  mr        r27, r3
  mr        r28, r4
  mr        r29, r5
  li        r5, 0
  lwz       r4, 0x1C(r3)
  lwz       r0, 0x18(r3)
  li        r3, 0x24
  lwz       r7, 0x14(r27)
  add       r0, r0, r4
  lwz       r4, 0x30(r6)
  add       r0, r7, r0
  sub       r30, r0, r28
  bl        0xA8EC
  mr.       r31, r3
  beq-      .loc_0x80
  lis       r3, 0x804A
  mr        r4, r31
  subi      r0, r3, 0x3E8
  addi      r3, r31, 0x4
  stw       r0, 0x0(r31)
  bl        0xD144
  stw       r30, 0x14(r31)
  li        r3, 0
  li        r0, 0x1
  stw       r28, 0x18(r31)
  stw       r3, 0x1C(r31)
  stb       r29, 0x20(r31)
  stb       r0, 0x21(r31)

.loc_0x80:
  lwz       r0, 0x1C(r27)
  addi      r5, r31, 0x4
  sub       r0, r0, r28
  stw       r0, 0x1C(r27)
  lwz       r3, 0x8(r27)
  lwz       r4, 0x10(r27)
  bl        0xD3A8
  mr        r3, r31
  lmw       r27, 0xC(r1)
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}