

/*
 * --INFO--
 * Address:	........
 * Size:	0000E4
 */
void _Print(char *, ...)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00002C
 */
void TagParm::read(Stream &)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8041BD2C
 * Size:	000004
 */
void TagParm::doRead(Stream &)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000084
 */
void TagParm::write(Stream &)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8041BD30
 * Size:	000004
 */
void TagParm::doWrite(Stream &)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00002C
 */
void TagParm::dump()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8041BD34
 * Size:	000004
 */
void TagParm::doDump()
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	8041BD38
 * Size:	000034
 */
void PrimTagParm<int>::doRead(Stream &)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  mr        r3, r4
  bl        -0x72C0
  stw       r3, 0xC(r31)
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8041BD6C
 * Size:	00002C
 */
void PrimTagParm<int>::doWrite(Stream &)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  mr        r0, r4
  lwz       r4, 0xC(r3)
  mr        r3, r0
  bl        -0x65C4
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8041BD98
 * Size:	000004
 */
void PrimTagParm<int>::doDump()
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	8041BD9C
 * Size:	000034
 */
void PrimTagParm<unsigned short>::doRead(Stream &)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  mr        r3, r4
  bl        -0x7650
  sth       r3, 0xC(r31)
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8041BDD0
 * Size:	00002C
 */
void PrimTagParm<unsigned short>::doWrite(Stream &)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lhz       r0, 0xC(r3)
  mr        r3, r4
  extsh     r4, r0
  bl        -0x66B8
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8041BDFC
 * Size:	000004
 */
void PrimTagParm<unsigned short>::doDump()
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	8041BE00
 * Size:	000078
 */
void PrimTagParm<unsigned long long>::doRead(Stream &)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  li        r5, 0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  mr        r3, r4
  li        r4, 0
  bl        -0x6D4C
  lbz       r0, 0x0(r3)
  stb       r0, 0x10(r31)
  lbz       r0, 0x1(r3)
  stb       r0, 0x11(r31)
  lbz       r0, 0x2(r3)
  stb       r0, 0x12(r31)
  lbz       r0, 0x3(r3)
  stb       r0, 0x13(r31)
  lbz       r0, 0x4(r3)
  stb       r0, 0x14(r31)
  lbz       r0, 0x5(r3)
  stb       r0, 0x15(r31)
  lbz       r0, 0x6(r3)
  stb       r0, 0x16(r31)
  lbz       r0, 0x7(r3)
  stb       r0, 0x17(r31)
  lwz       r31, 0xC(r1)
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8041BE78
 * Size:	00006C
 */
void PrimTagParm<unsigned long long>::doWrite(Stream &)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  mr        r5, r4
  stw       r0, 0x14(r1)
  addi      r4, r1, 0x8
  lbz       r0, 0x10(r3)
  stb       r0, 0x8(r1)
  lbz       r0, 0x11(r3)
  stb       r0, 0x9(r1)
  lbz       r0, 0x12(r3)
  stb       r0, 0xA(r1)
  lbz       r0, 0x13(r3)
  stb       r0, 0xB(r1)
  lbz       r0, 0x14(r3)
  stb       r0, 0xC(r1)
  lbz       r0, 0x15(r3)
  stb       r0, 0xD(r1)
  lbz       r0, 0x16(r3)
  stb       r0, 0xE(r1)
  lbz       r0, 0x17(r3)
  mr        r3, r5
  stb       r0, 0xF(r1)
  bl        -0x6904
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8041BEE4
 * Size:	000004
 */
void PrimTagParm<unsigned long long>::doDump()
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	8041BEE8
 * Size:	000034
 */
void PrimTagParm<float>::doRead(Stream &)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  mr        r3, r4
  bl        -0x7154
  stfs      f1, 0xC(r31)
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8041BF1C
 * Size:	000028
 */
void PrimTagParm<float>::doWrite(Stream &)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lfs       f1, 0xC(r3)
  mr        r3, r4
  bl        -0x66E8
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8041BF44
 * Size:	000004
 */
void PrimTagParm<float>::doDump()
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	8041BF48
 * Size:	000024
 */
void PrimTagParm<Vector3<float>>::doRead(Stream &)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  addi      r3, r3, 0xC
  stw       r0, 0x14(r1)
  bl        -0xA5C8
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8041BF6C
 * Size:	000024
 */
void PrimTagParm<Vector3<float>>::doWrite(Stream &)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  addi      r3, r3, 0xC
  stw       r0, 0x14(r1)
  bl        -0xA594
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8041BF90
 * Size:	000004
 */
void PrimTagParm<Vector3<float>>::doDump()
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	8041BF94
 * Size:	000044
 */
void StringTagParm::StringTagParm(TagParameters *, char *)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        0xF4
  lis       r3, 0x804F
  li        r0, 0
  subi      r4, r3, 0x46F8
  mr        r3, r31
  stw       r4, 0x0(r31)
  stw       r0, 0xC(r31)
  lwz       r31, 0xC(r1)
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8041BFD8
 * Size:	000004
 */
void StringTagParm::flushValue()
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	8041BFDC
 * Size:	00003C
 */
void StringTagParm::doRead(Stream &)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  li        r5, 0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  mr        r3, r4
  li        r4, 0
  bl        -0x6F28
  stw       r3, 0xC(r31)
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8041C018
 * Size:	00002C
 */
void StringTagParm::doWrite(Stream &)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  mr        r0, r4
  lwz       r4, 0xC(r3)
  mr        r3, r0
  bl        -0x6A64
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8041C044
 * Size:	000004
 */
void StringTagParm::doDump()
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	8041C048
 * Size:	000054
 */
void TagParameters::TagParameters(char *)
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
  bl        -0xACD4
  lis       r3, 0x804B
  li        r0, 0
  addi      r4, r3, 0x5B10
  mr        r3, r30
  stw       r4, 0x0(r30)
  stw       r0, 0x18(r30)
  stw       r31, 0x14(r30)
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
 * Address:	........
 * Size:	000048
 */
void TagParameters::isEndToken(char *)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000020
 */
void TagParameters::add(TagParm *)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8041C09C
 * Size:	000038
 */
void TagParm::TagParm(TagParameters *, char *)
{
/*
.loc_0x0:
  lis       r6, 0x804F
  li        r0, 0
  subi      r6, r6, 0x4710
  stw       r6, 0x0(r3)
  stw       r5, 0x4(r3)
  stw       r0, 0x8(r3)
  lwz       r0, 0x18(r4)
  cmplwi    r0, 0
  beq-      .loc_0x30
  stw       r0, 0x8(r3)
  stw       r3, 0x18(r4)
  blr       

.loc_0x30:
  stw       r3, 0x18(r4)
  blr
*/
}

/*
 * --INFO--
 * Address:	8041C0D4
 * Size:	0000D4
 */
void TagParameters::read(Stream &)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stmw      r27, 0xC(r1)
  mr        r27, r3
  mr        r28, r4

.loc_0x18:
  mr        r3, r28
  li        r4, 0
  li        r5, 0
  bl        -0x7024
  mr        r0, r3
  addi      r3, r2, 0x2040
  mr        r30, r0
  bl        -0x3517F8
  mr        r5, r3
  mr        r4, r30
  addi      r3, r2, 0x2040
  bl        -0x351A98
  cntlzw    r0, r3
  rlwinm.   r0,r0,27,24,31
  bne-      .loc_0xC0
  lwz       r29, 0x18(r27)
  b         .loc_0xB4

.loc_0x5C:
  mr        r3, r30
  bl        -0x351824
  mr        r31, r3
  lwz       r3, 0x4(r29)
  bl        -0x351830
  cmpw      r31, r3
  bne-      .loc_0xB0
  mr        r3, r30
  bl        -0x351840
  mr        r5, r3
  lwz       r3, 0x4(r29)
  mr        r4, r30
  bl        -0x351AE0
  cmpwi     r3, 0
  bne-      .loc_0xB0
  mr        r3, r29
  mr        r4, r28
  lwz       r12, 0x0(r29)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     

.loc_0xB0:
  lwz       r29, 0x8(r29)

.loc_0xB4:
  cmplwi    r29, 0
  bne+      .loc_0x5C
  b         .loc_0x18

.loc_0xC0:
  lmw       r27, 0xC(r1)
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000C8
 */
void TagParameters::write(Stream &)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00004C
 */
void TagParameters::dump()
{
	// UNUSED FUNCTION
}