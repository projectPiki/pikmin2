

/*
 * --INFO--
 * Address:	80032478
 * Size:	0000B8
 */
void JUTResReference::getResource(JSUInputStream *, unsigned long, JKRArchive *)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  mr        r31, r6
  stw       r30, 0x18(r1)
  mr        r30, r5
  li        r5, 0x1
  stw       r29, 0x14(r1)
  mr        r29, r4
  stw       r28, 0x10(r1)
  mr        r28, r3
  mr        r3, r29
  mr        r4, r28
  bl        -0xC0DC
  mr        r3, r29
  addi      r4, r28, 0x1
  li        r5, 0x1
  bl        -0xC0EC
  lbz       r5, 0x1(r28)
  mr        r3, r29
  addi      r4, r28, 0x2
  bl        -0xC0FC
  lbz       r0, 0x0(r28)
  cmplwi    r0, 0x2
  beq-      .loc_0x78
  cmplwi    r0, 0x3
  beq-      .loc_0x78
  cmplwi    r0, 0x4
  bne-      .loc_0x88

.loc_0x78:
  lbz       r0, 0x1(r28)
  li        r4, 0
  add       r3, r28, r0
  stb       r4, 0x2(r3)

.loc_0x88:
  mr        r3, r28
  mr        r4, r30
  mr        r5, r31
  bl        0xC8
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
 * Address:	80032530
 * Size:	0000A4
 */
void JUTResReference::getResource(const void *, unsigned long, JKRArchive *)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  lbz       r0, 0x1(r4)
  stw       r31, 0x1C(r1)
  mr        r31, r6
  stw       r30, 0x18(r1)
  mr        r30, r5
  stw       r29, 0x14(r1)
  mr        r29, r3
  lbz       r3, 0x0(r4)
  stb       r3, 0x0(r29)
  stb       r0, 0x1(r29)
  lbz       r5, 0x1(r29)
  cmplwi    r5, 0
  beq-      .loc_0x4C
  addi      r3, r29, 0x2
  addi      r4, r4, 0x2
  bl        -0x2D3DC

.loc_0x4C:
  lbz       r0, 0x0(r29)
  cmplwi    r0, 0x2
  beq-      .loc_0x68
  cmplwi    r0, 0x3
  beq-      .loc_0x68
  cmplwi    r0, 0x4
  bne-      .loc_0x78

.loc_0x68:
  lbz       r0, 0x1(r29)
  li        r4, 0
  add       r3, r29, r0
  stb       r4, 0x2(r3)

.loc_0x78:
  mr        r3, r29
  mr        r4, r30
  mr        r5, r31
  bl        .loc_0xA4
  lwz       r0, 0x24(r1)
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  lwz       r29, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr       

.loc_0xA4:
*/
}

/*
 * --INFO--
 * Address:	800325D4
 * Size:	000078
 */
void JUTResReference::getResource(unsigned long, JKRArchive *)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  mr        r6, r3
  stw       r0, 0x14(r1)
  lbz       r0, 0x0(r3)
  li        r3, 0
  cmpwi     r0, 0x3
  beq-      .loc_0x50
  bge-      .loc_0x34
  cmpwi     r0, 0x1
  beq-      .loc_0x68
  bge-      .loc_0x40
  b         .loc_0x68

.loc_0x34:
  cmpwi     r0, 0x5
  bge-      .loc_0x68
  b         .loc_0x60

.loc_0x40:
  mr        r3, r4
  addi      r4, r6, 0x2
  bl        -0x170D8
  b         .loc_0x68

.loc_0x50:
  mr        r4, r5
  addi      r3, r6, 0x2
  bl        -0xF614
  b         .loc_0x68

.loc_0x60:
  addi      r3, r6, 0x2
  bl        -0xF66C

.loc_0x68:
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}