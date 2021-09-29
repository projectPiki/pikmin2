

/*
 * --INFO--
 * Address:	........
 * Size:	0000E0
 */
void _Print(char *, ...)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80413254
 * Size:	00001C
 */
void ID32::isEof()
{
/*
.loc_0x0:
  lis       r4, 0x5F65
  lwz       r3, 0x8(r3)
  addi      r0, r4, 0x6F66
  sub       r0, r0, r3
  cntlzw    r0, r0
  rlwinm    r3,r0,27,5,31
  blr
*/
}

/*
 * --INFO--
 * Address:	80413270
 * Size:	000038
 */
void ID32::ID32()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lis       r4, 0x6E6F
  stw       r0, 0x14(r1)
  addi      r4, r4, 0x6E65
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        0x4C
  lwz       r0, 0x14(r1)
  mr        r3, r31
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	804132A8
 * Size:	000030
 */
void ID32::ID32(unsigned long)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        .loc_0x30
  lwz       r0, 0x14(r1)
  mr        r3, r31
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr       

.loc_0x30:
*/
}

/*
 * --INFO--
 * Address:	804132D8
 * Size:	000024
 */
void ID32::setID(unsigned long)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r4, 0x8(r3)
  bl        0xF0
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	804132FC
 * Size:	0000B8
 */
void ID32::match(unsigned long, char)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  extsb     r5, r5
  stw       r4, 0x8(r1)
  lbz       r0, 0x8(r1)
  extsb     r4, r0
  cmpw      r5, r4
  beq-      .loc_0x34
  lbz       r0, 0x8(r3)
  extsb     r0, r0
  cmpw      r4, r0
  beq-      .loc_0x34
  li        r3, 0
  b         .loc_0xB0

.loc_0x34:
  lbz       r0, 0x9(r1)
  extsb     r4, r0
  cmpw      r5, r4
  beq-      .loc_0x5C
  lbz       r0, 0x9(r3)
  extsb     r0, r0
  cmpw      r4, r0
  beq-      .loc_0x5C
  li        r3, 0
  b         .loc_0xB0

.loc_0x5C:
  lbz       r0, 0xA(r1)
  extsb     r4, r0
  cmpw      r5, r4
  beq-      .loc_0x84
  lbz       r0, 0xA(r3)
  extsb     r0, r0
  cmpw      r4, r0
  beq-      .loc_0x84
  li        r3, 0
  b         .loc_0xB0

.loc_0x84:
  lbz       r0, 0xB(r1)
  extsb     r4, r0
  cmpw      r5, r4
  beq-      .loc_0xAC
  lbz       r0, 0xB(r3)
  extsb     r0, r0
  cmpw      r4, r0
  beq-      .loc_0xAC
  li        r3, 0
  b         .loc_0xB0

.loc_0xAC:
  li        r3, 0x1

.loc_0xB0:
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	804133B4
 * Size:	000024
 */
void ID32::updateID()
{
/*
.loc_0x0:
  lbz       r0, 0x0(r3)
  stb       r0, 0x8(r3)
  lbz       r0, 0x1(r3)
  stb       r0, 0x9(r3)
  lbz       r0, 0x2(r3)
  stb       r0, 0xA(r3)
  lbz       r0, 0x3(r3)
  stb       r0, 0xB(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	804133D8
 * Size:	00002C
 */
void ID32::updateString()
{
/*
.loc_0x0:
  lbz       r4, 0x8(r3)
  li        r0, 0
  stb       r4, 0x0(r3)
  lbz       r4, 0x9(r3)
  stb       r4, 0x1(r3)
  lbz       r4, 0xA(r3)
  stb       r4, 0x2(r3)
  lbz       r4, 0xB(r3)
  stb       r4, 0x3(r3)
  stb       r0, 0x4(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	80413404
 * Size:	000030
 */
void ID32::operator= (unsigned long)
{
/*
.loc_0x0:
  stw       r4, 0x8(r3)
  li        r0, 0
  lbz       r4, 0x8(r3)
  stb       r4, 0x0(r3)
  lbz       r4, 0x9(r3)
  stb       r4, 0x1(r3)
  lbz       r4, 0xA(r3)
  stb       r4, 0x2(r3)
  lbz       r4, 0xB(r3)
  stb       r4, 0x3(r3)
  stb       r0, 0x4(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	80413434
 * Size:	000014
 */
void ID32::operator== (unsigned long)
{
/*
.loc_0x0:
  lwz       r0, 0x8(r3)
  sub       r0, r4, r0
  cntlzw    r0, r0
  rlwinm    r3,r0,27,5,31
  blr
*/
}

/*
 * --INFO--
 * Address:	80413448
 * Size:	000018
 */
void ID32::operator!= (unsigned long)
{
/*
.loc_0x0:
  lwz       r0, 0x8(r3)
  sub       r3, r4, r0
  sub       r0, r0, r4
  or        r0, r3, r0
  rlwinm    r3,r0,1,31,31
  blr
*/
}

/*
 * --INFO--
 * Address:	80413460
 * Size:	000090
 */
void ID32::write(Stream &)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  mr        r31, r4
  stw       r30, 0x18(r1)
  mr        r30, r3
  lwz       r0, 0xC(r4)
  cmpwi     r0, 0x1
  bne-      .loc_0x48
  addi      r4, r1, 0x8
  bl        0x154
  mr        r3, r31
  addi      r5, r1, 0x8
  addi      r4, r2, 0x1F68
  crclr     6, 0x6
  bl        0xC58
  b         .loc_0x78

.loc_0x48:
  lbz       r4, 0xB(r30)
  mr        r3, r31
  bl        0x21C0
  lbz       r4, 0xA(r30)
  mr        r3, r31
  bl        0x21B4
  lbz       r4, 0x9(r30)
  mr        r3, r31
  bl        0x21A8
  lbz       r4, 0x8(r30)
  mr        r3, r31
  bl        0x219C

.loc_0x78:
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
 * Address:	804134F0
 * Size:	0000EC
 */
void ID32::read(Stream &)
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
  lwz       r0, 0xC(r4)
  cmpwi     r0, 0x1
  bne-      .loc_0x7C
  mr        r3, r31
  bl        0x8D8
  lbz       r4, 0x3(r3)
  li        r0, 0
  stb       r4, 0xB(r30)
  lbz       r4, 0x2(r3)
  stb       r4, 0xA(r30)
  lbz       r4, 0x1(r3)
  stb       r4, 0x9(r30)
  lbz       r3, 0x0(r3)
  stb       r3, 0x8(r30)
  lbz       r3, 0x8(r30)
  stb       r3, 0x0(r30)
  lbz       r3, 0x9(r30)
  stb       r3, 0x1(r30)
  lbz       r3, 0xA(r30)
  stb       r3, 0x2(r30)
  lbz       r3, 0xB(r30)
  stb       r3, 0x3(r30)
  stb       r0, 0x4(r30)
  b         .loc_0xD4

.loc_0x7C:
  mr        r3, r31
  bl        0xF2C
  stb       r3, 0xB(r30)
  mr        r3, r31
  bl        0xF20
  stb       r3, 0xA(r30)
  mr        r3, r31
  bl        0xF14
  stb       r3, 0x9(r30)
  mr        r3, r31
  bl        0xF08
  stb       r3, 0x8(r30)
  li        r0, 0
  lbz       r3, 0x8(r30)
  stb       r3, 0x0(r30)
  lbz       r3, 0x9(r30)
  stb       r3, 0x1(r30)
  lbz       r3, 0xA(r30)
  stb       r3, 0x2(r30)
  lbz       r3, 0xB(r30)
  stb       r3, 0x3(r30)
  stb       r0, 0x4(r30)

.loc_0xD4:
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
 * Address:	804135DC
 * Size:	000004
 */
void ID32::print()
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	804135E0
 * Size:	000038
 */
void ID32::sprint(char *)
{
/*
.loc_0x0:
  lwz       r5, 0x8(r3)
  li        r0, 0
  rlwinm    r5,r5,8,24,31
  stb       r5, 0x0(r4)
  lwz       r5, 0x8(r3)
  rlwinm    r5,r5,16,24,31
  stb       r5, 0x1(r4)
  lwz       r5, 0x8(r3)
  rlwinm    r5,r5,24,24,31
  stb       r5, 0x2(r4)
  lwz       r3, 0x8(r3)
  stb       r3, 0x3(r4)
  stb       r0, 0x4(r4)
  blr
*/
}

/*
 * --INFO--
 * Address:	80413618
 * Size:	000040
 */
void __sinit_id32_cpp(void)
{
/*
.loc_0x0:
  lis       r4, 0x5F65
  lis       r3, 0x8051
  addi      r4, r4, 0x6F66
  li        r0, 0
  addi      r7, r3, 0x41F0
  stw       r4, 0x8(r7)
  lbz       r6, 0x8(r7)
  lbz       r5, 0x9(r7)
  lbz       r4, 0xA(r7)
  lbz       r3, 0xB(r7)
  stb       r6, 0x0(r7)
  stb       r5, 0x1(r7)
  stb       r4, 0x2(r7)
  stb       r3, 0x3(r7)
  stb       r0, 0x4(r7)
  blr
*/
}