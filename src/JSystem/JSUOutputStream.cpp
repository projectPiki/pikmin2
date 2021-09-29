

/*
 * --INFO--
 * Address:	........
 * Size:	00005C
 */
void JSUOutputStream::~JSUOutputStream()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800261E0
 * Size:	000058
 */
void JSUOutputStream::write(const void *, long)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r5
  stw       r30, 0x8(r1)
  mr        r30, r3
  lwz       r12, 0x0(r3)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  cmpw      r3, r31
  beq-      .loc_0x40
  lbz       r0, 0x4(r30)
  ori       r0, r0, 0x1
  stb       r0, 0x4(r30)

.loc_0x40:
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
 * Address:	80026238
 * Size:	0000F8
 */
void JSUOutputStream::write(const char *)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  mr.       r30, r4
  stw       r29, 0x14(r1)
  mr        r29, r3
  bne-      .loc_0x5C
  li        r0, 0
  addi      r4, r1, 0xA
  sth       r0, 0xA(r1)
  li        r5, 0x2
  lwz       r12, 0x0(r3)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  cmplwi    r3, 0x2
  beq-      .loc_0xDC
  lbz       r0, 0x4(r29)
  ori       r0, r0, 0x1
  stb       r0, 0x4(r29)
  b         .loc_0xDC

.loc_0x5C:
  mr        r3, r30
  bl        0xA4678
  lis       r0, 0x1
  mr        r31, r3
  cmpw      r31, r0
  blt-      .loc_0x84
  lbz       r0, 0x4(r29)
  ori       r0, r0, 0x2
  stb       r0, 0x4(r29)
  b         .loc_0xDC

.loc_0x84:
  sth       r31, 0x8(r1)
  mr        r3, r29
  addi      r4, r1, 0x8
  li        r5, 0x2
  lwz       r12, 0x0(r29)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  cmplwi    r3, 0x2
  bne-      .loc_0xD0
  mr        r3, r29
  mr        r4, r30
  lwz       r12, 0x0(r29)
  mr        r5, r31
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  cmpw      r31, r3
  beq-      .loc_0xDC

.loc_0xD0:
  lbz       r0, 0x4(r29)
  ori       r0, r0, 0x1
  stb       r0, 0x4(r29)

.loc_0xDC:
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
 * Size:	00008C
 */
void JSUOutputStream::skip(long, char)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000080
 */
void JSURandomOutputStream::align(long, char)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000BC
 */
void JSURandomOutputStream::poke(void *, long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000044
 */
void JSURandomOutputStream::seek(long, JSUStreamSeekFrom)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00006C
 */
void JSURandomOutputStream::~JSURandomOutputStream()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00005C
 */
void JSURandomOutputStream::getAvailable() const
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80026330
 * Size:	000048
 */
void JSUIosBase::~JSUIosBase()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr.       r31, r3
  beq-      .loc_0x30
  lis       r5, 0x804A
  extsh.    r0, r4
  addi      r0, r5, 0x30
  stw       r0, 0x0(r31)
  ble-      .loc_0x30
  bl        -0x22A8

.loc_0x30:
  lwz       r0, 0x14(r1)
  mr        r3, r31
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}