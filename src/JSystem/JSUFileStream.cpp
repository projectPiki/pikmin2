

/*
 * --INFO--
 * Address:	80026EE4
 * Size:	000044
 */
void JSUFileInputStream::JSUFileInputStream(JKRFile *)
{
/*
.loc_0x0:
  lis       r5, 0x804A
  lis       r7, 0x804A
  addi      r0, r5, 0x30
  lis       r6, 0x804A
  stw       r0, 0x0(r3)
  li        r8, 0
  lis       r5, 0x804A
  addi      r7, r7, 0x64
  stb       r8, 0x4(r3)
  addi      r6, r6, 0x40
  addi      r0, r5, 0xA8
  stw       r7, 0x0(r3)
  stw       r6, 0x0(r3)
  stw       r0, 0x0(r3)
  stw       r4, 0x8(r3)
  stw       r8, 0xC(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00004C
 */
void JSUFileInputStream::open(const char *)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000030
 */
void JSUFileInputStream::close()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80026F28
 * Size:	0000E0
 */
void JSUFileInputStream::readData(void *, long)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  li        r31, 0
  stw       r30, 0x18(r1)
  mr        r30, r5
  stw       r29, 0x14(r1)
  mr        r29, r4
  stw       r28, 0x10(r1)
  mr        r28, r3
  lwz       r3, 0x8(r3)
  lbz       r0, 0x18(r3)
  cmplwi    r0, 0
  beq-      .loc_0xBC
  lwz       r12, 0x0(r3)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0xC(r28)
  add       r0, r0, r30
  cmplw     r0, r3
  ble-      .loc_0x78
  lwz       r3, 0x8(r28)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0xC(r28)
  sub       r30, r3, r0

.loc_0x78:
  cmpwi     r30, 0
  ble-      .loc_0xBC
  lwz       r3, 0x8(r28)
  mr        r4, r29
  mr        r5, r30
  lwz       r6, 0xC(r28)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  mr.       r31, r3
  bge-      .loc_0xB0
  li        r3, 0
  b         .loc_0xC0

.loc_0xB0:
  lwz       r0, 0xC(r28)
  add       r0, r0, r31
  stw       r0, 0xC(r28)

.loc_0xBC:
  mr        r3, r31

.loc_0xC0:
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
 * Address:	80027008
 * Size:	0000E8
 */
void JSUFileInputStream::seekPos(long, JSUStreamSeekFrom)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  cmpwi     r5, 0x1
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  mr        r30, r4
  stw       r29, 0x14(r1)
  mr        r29, r3
  lwz       r31, 0xC(r3)
  beq-      .loc_0x70
  bge-      .loc_0x3C
  cmpwi     r5, 0
  bge-      .loc_0x48
  b         .loc_0x78

.loc_0x3C:
  cmpwi     r5, 0x3
  bge-      .loc_0x78
  b         .loc_0x50

.loc_0x48:
  stw       r30, 0xC(r29)
  b         .loc_0x78

.loc_0x50:
  lwz       r3, 0x8(r29)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  sub       r0, r3, r30
  stw       r0, 0xC(r29)
  b         .loc_0x78

.loc_0x70:
  add       r0, r31, r30
  stw       r0, 0xC(r29)

.loc_0x78:
  lwz       r0, 0xC(r29)
  cmpwi     r0, 0
  bge-      .loc_0x8C
  li        r0, 0
  stw       r0, 0xC(r29)

.loc_0x8C:
  lwz       r3, 0x8(r29)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0xC(r29)
  cmpw      r0, r3
  ble-      .loc_0xC4
  lwz       r3, 0x8(r29)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r29)

.loc_0xC4:
  lwz       r0, 0xC(r29)
  sub       r3, r0, r31
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
 * Size:	000044
 */
void JSUFileOutputStream::JSUFileOutputStream(JKRFile *)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00004C
 */
void JSUFileOutputStream::open(const char *)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000030
 */
void JSUFileOutputStream::close()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00006C
 */
void JSUFileOutputStream::writeData(const void *, long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000E8
 */
void JSUFileOutputStream::seekPos(long, JSUStreamSeekFrom)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000070
 */
void JSUFileOutputStream::~JSUFileOutputStream()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000030
 */
void JSUFileOutputStream::getLength() const
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JSUFileOutputStream::getPosition() const
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800270F0
 * Size:	000030
 */
void JSUFileInputStream::getLength() const
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lwz       r3, 0x8(r3)
  stw       r0, 0x14(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80027120
 * Size:	000008
 */
void JSUFileInputStream::getPosition() const
{
/*
.loc_0x0:
  lwz       r3, 0xC(r3)
  blr
*/
}