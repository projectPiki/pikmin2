#include "types.h"

/*
 * --INFO--
 * Address:	........
 * Size:	000034
 */
Stream::Stream()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000030
 */
Stream::Stream(int)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000018
 */
void Stream::differentEndian()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000048
 */
void Stream::isSpace(char)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000EC
 */
void Stream::skipSpace()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80413DEC
 * Size:	000008
 */
u32 Stream::eof() { return 0x0; }

/*
 * --INFO--
 * Address:	........
 * Size:	000214
 */
void Stream::copyToTextBuffer()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80413DF4
 * Size:	000228
 */
void Stream::getNextToken()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  stw       r30, 0x8(r1)
	  lwz       r0, 0xC(r3)
	  cmpwi     r0, 0
	  bne-      .loc_0x2C
	  li        r3, 0
	  b         .loc_0x210

	.loc_0x2C:
	  li        r30, 0
	  stw       r30, 0x10(r31)
	  lwz       r0, 0xC(r31)
	  cmpwi     r0, 0x1
	  bne-      .loc_0xE8
	  b         .loc_0xCC

	.loc_0x44:
	  mr        r3, r31
	  bl        0x8D8
	  rlwinm.   r0,r30,0,24,31
	  extsb     r4, r3
	  beq-      .loc_0x70
	  cmpwi     r4, 0xD
	  beq-      .loc_0x68
	  cmpwi     r4, 0xA
	  bne-      .loc_0xCC

	.loc_0x68:
	  li        r30, 0
	  b         .loc_0xCC

	.loc_0x70:
	  cmpwi     r4, 0x23
	  bne-      .loc_0x80
	  li        r30, 0x1
	  b         .loc_0xCC

	.loc_0x80:
	  cmpwi     r4, 0xD
	  li        r0, 0
	  beq-      .loc_0xBC
	  cmpwi     r4, 0x20
	  beq-      .loc_0xBC
	  cmpwi     r4, 0xA
	  beq-      .loc_0xBC
	  cmpwi     r4, 0x9
	  beq-      .loc_0xBC
	  cmpwi     r4, 0x23
	  beq-      .loc_0xBC
	  cmpwi     r4, 0x7B
	  beq-      .loc_0xBC
	  cmpwi     r4, 0x7D
	  bne-      .loc_0xC0

	.loc_0xBC:
	  li        r0, 0x1

	.loc_0xC0:
	  rlwinm.   r0,r0,0,24,31
	  bne-      .loc_0xCC
	  b         .loc_0xEC

	.loc_0xCC:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x44

	.loc_0xE8:
	  li        r4, 0

	.loc_0xEC:
	  lwz       r3, 0x10(r31)
	  addi      r0, r3, 0x1
	  add       r3, r31, r3
	  stw       r0, 0x10(r31)
	  stb       r4, 0x14(r3)
	  b         .loc_0x1D4

	.loc_0x104:
	  mr        r3, r31
	  bl        0x818
	  extsb     r5, r3
	  li        r0, 0
	  cmpwi     r5, 0xD
	  beq-      .loc_0x14C
	  cmpwi     r5, 0x20
	  beq-      .loc_0x14C
	  cmpwi     r5, 0xA
	  beq-      .loc_0x14C
	  cmpwi     r5, 0x9
	  beq-      .loc_0x14C
	  cmpwi     r5, 0x23
	  beq-      .loc_0x14C
	  cmpwi     r5, 0x7B
	  beq-      .loc_0x14C
	  cmpwi     r5, 0x7D
	  bne-      .loc_0x150

	.loc_0x14C:
	  li        r0, 0x1

	.loc_0x150:
	  rlwinm.   r0,r0,0,24,31
	  beq-      .loc_0x1B8
	  lwz       r3, 0x10(r31)
	  cmpwi     r5, 0x23
	  li        r4, 0
	  addi      r0, r3, 0x1
	  add       r3, r31, r3
	  stw       r0, 0x10(r31)
	  stb       r4, 0x14(r3)
	  bne-      .loc_0x20C
	  b         .loc_0x198

	.loc_0x17C:
	  mr        r3, r31
	  bl        0x7A0
	  extsb     r0, r3
	  cmpwi     r0, 0xD
	  beq-      .loc_0x20C
	  cmpwi     r0, 0xA
	  beq-      .loc_0x20C

	.loc_0x198:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x17C
	  b         .loc_0x20C

	.loc_0x1B8:
	  lwz       r4, 0x10(r31)
	  extsb.    r0, r5
	  addi      r3, r4, 0x1
	  addi      r0, r4, 0x14
	  stw       r3, 0x10(r31)
	  stbx      r5, r31, r0
	  beq-      .loc_0x20C

	.loc_0x1D4:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x104
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x69A0
	  li        r4, 0x62
	  subi      r5, r5, 0x6994
	  crclr     6, 0x6
	  bl        -0x3E99BC

	.loc_0x20C:
	  addi      r3, r31, 0x14

	.loc_0x210:
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
 * Address:	8041401C
 * Size:	000084
 */
void Stream::textBeginGroup(char*)
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
	  lwz       r0, 0xC(r3)
	  cmpwi     r0, 0
	  beq-      .loc_0x6C
	  lwz       r4, 0x414(r30)
	  bl        0x3EC
	  mr        r3, r30
	  mr        r5, r31
	  addi      r4, r2, 0x1F80
	  crclr     6, 0x6
	  bl        0x180
	  lwz       r4, 0x414(r30)
	  mr        r3, r30
	  bl        0x3CC
	  mr        r3, r30
	  addi      r4, r2, 0x1F88
	  crclr     6, 0x6
	  bl        0x164
	  lwz       r3, 0x414(r30)
	  addi      r0, r3, 0x1
	  stw       r0, 0x414(r30)

	.loc_0x6C:
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
 * Address:	804140A0
 * Size:	000058
 */
void Stream::textEndGroup()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r0, 0xC(r3)
	  cmpwi     r0, 0
	  beq-      .loc_0x44
	  lwz       r4, 0x414(r31)
	  subi      r0, r4, 0x1
	  stw       r0, 0x414(r31)
	  lwz       r4, 0x414(r31)
	  bl        0x364
	  mr        r3, r31
	  addi      r4, r2, 0x1F8C
	  crclr     6, 0x6
	  bl        0xFC

	.loc_0x44:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	804140F8
 * Size:	0000E4
 */
void Stream::printf(char*, ...)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x490(r1)
	  mflr      r0
	  stw       r0, 0x494(r1)
	  stw       r31, 0x48C(r1)
	  stw       r30, 0x488(r1)
	  stw       r29, 0x484(r1)
	  stw       r28, 0x480(r1)
	  mr        r28, r3
	  bne-      cr1, .loc_0x44
	  stfd      f1, 0x28(r1)
	  stfd      f2, 0x30(r1)
	  stfd      f3, 0x38(r1)
	  stfd      f4, 0x40(r1)
	  stfd      f5, 0x48(r1)
	  stfd      f6, 0x50(r1)
	  stfd      f7, 0x58(r1)
	  stfd      f8, 0x60(r1)

	.loc_0x44:
	  addi      r11, r1, 0x498
	  addi      r0, r1, 0x8
	  lis       r12, 0x200
	  stw       r3, 0x8(r1)
	  addi      r31, r1, 0x68
	  addi      r3, r1, 0x74
	  stw       r5, 0x10(r1)
	  mr        r5, r31
	  stw       r4, 0xC(r1)
	  stw       r6, 0x14(r1)
	  stw       r7, 0x18(r1)
	  stw       r8, 0x1C(r1)
	  stw       r9, 0x20(r1)
	  stw       r10, 0x24(r1)
	  stw       r12, 0x68(r1)
	  stw       r11, 0x6C(r1)
	  stw       r0, 0x70(r1)
	  bl        -0x34CB94
	  addi      r3, r1, 0x74
	  bl        -0x349878
	  mr.       r31, r3
	  ble-      .loc_0xC4
	  addi      r30, r1, 0x74
	  li        r29, 0
	  b         .loc_0xBC

	.loc_0xA8:
	  lbz       r4, 0x0(r30)
	  mr        r3, r28
	  bl        0x1538
	  addi      r30, r30, 0x1
	  addi      r29, r29, 0x1

	.loc_0xBC:
	  cmpw      r29, r31
	  blt+      .loc_0xA8

	.loc_0xC4:
	  lwz       r0, 0x494(r1)
	  lwz       r31, 0x48C(r1)
	  lwz       r30, 0x488(r1)
	  lwz       r29, 0x484(r1)
	  lwz       r28, 0x480(r1)
	  mtlr      r0
	  addi      r1, r1, 0x490
	  blr
	*/
}

/*
 * --INFO--
 * Address:	804141DC
 * Size:	0000EC
 */
void Stream::textWriteText(char*, ...)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x490(r1)
	  mflr      r0
	  stw       r0, 0x494(r1)
	  stw       r31, 0x48C(r1)
	  stw       r30, 0x488(r1)
	  stw       r29, 0x484(r1)
	  stw       r28, 0x480(r1)
	  mr        r28, r3
	  bne-      cr1, .loc_0x44
	  stfd      f1, 0x28(r1)
	  stfd      f2, 0x30(r1)
	  stfd      f3, 0x38(r1)
	  stfd      f4, 0x40(r1)
	  stfd      f5, 0x48(r1)
	  stfd      f6, 0x50(r1)
	  stfd      f7, 0x58(r1)
	  stfd      f8, 0x60(r1)

	.loc_0x44:
	  stw       r3, 0x8(r1)
	  stw       r4, 0xC(r1)
	  stw       r5, 0x10(r1)
	  stw       r6, 0x14(r1)
	  stw       r7, 0x18(r1)
	  stw       r8, 0x1C(r1)
	  stw       r9, 0x20(r1)
	  stw       r10, 0x24(r1)
	  lwz       r0, 0xC(r28)
	  cmpwi     r0, 0
	  beq-      .loc_0xCC
	  addi      r6, r1, 0x498
	  addi      r0, r1, 0x8
	  lis       r3, 0x200
	  stw       r6, 0x6C(r1)
	  addi      r5, r1, 0x68
	  stw       r3, 0x68(r1)
	  addi      r3, r1, 0x74
	  stw       r0, 0x70(r1)
	  bl        -0x34CC80
	  addi      r3, r1, 0x74
	  bl        -0x349964
	  mr.       r31, r3
	  ble-      .loc_0xCC
	  addi      r30, r1, 0x74
	  li        r29, 0
	  b         .loc_0xC4

	.loc_0xB0:
	  lbz       r4, 0x0(r30)
	  mr        r3, r28
	  bl        0x144C
	  addi      r30, r30, 0x1
	  addi      r29, r29, 0x1

	.loc_0xC4:
	  cmpw      r29, r31
	  blt+      .loc_0xB0

	.loc_0xCC:
	  lwz       r0, 0x494(r1)
	  lwz       r31, 0x48C(r1)
	  lwz       r30, 0x488(r1)
	  lwz       r29, 0x484(r1)
	  lwz       r28, 0x480(r1)
	  mtlr      r0
	  addi      r1, r1, 0x490
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000070
 */
void Stream::writePadding(unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00006C
 */
void Stream::skipPadding(unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	804142C8
 * Size:	0000C4
 */
void Stream::skipReading(unsigned long)
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
	  lwz       r0, 0xC(r3)
	  cmpwi     r0, 0x1
	  bne-      .loc_0x70
	  b         .loc_0x50

	.loc_0x30:
	  mr        r3, r29
	  bl        0x418
	  extsb     r0, r3
	  cmpwi     r0, 0xD
	  beq-      .loc_0xA8
	  cmpwi     r0, 0xA
	  bne-      .loc_0x50
	  b         .loc_0xA8

	.loc_0x50:
	  mr        r3, r29
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x30
	  b         .loc_0xA8

	.loc_0x70:
	  li        r31, 0
	  b         .loc_0x84

	.loc_0x78:
	  mr        r3, r29
	  bl        0x158
	  addi      r31, r31, 0x1

	.loc_0x84:
	  cmplw     r31, r30
	  bge-      .loc_0xA8
	  mr        r3, r29
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x78

	.loc_0xA8:
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
 * Address:	8041438C
 * Size:	0000A8
 */
void Stream::skipReadingText()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r0, 0xC(r3)
	  cmpwi     r0, 0x1
	  bne-      .loc_0x78
	  b         .loc_0x44

	.loc_0x24:
	  mr        r3, r31
	  bl        0x360
	  extsb     r0, r3
	  cmpwi     r0, 0xD
	  beq-      .loc_0x94
	  cmpwi     r0, 0xA
	  bne-      .loc_0x44
	  b         .loc_0x94

	.loc_0x44:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x24
	  b         .loc_0x94
	  b         .loc_0x78

	.loc_0x68:
	  mr        r3, r31
	  bl        0xA4
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x94

	.loc_0x78:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x68

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
 * Address:	........
 * Size:	000050
 */
void Stream::_read(void*, int)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000050
 */
void Stream::_write(void*, int)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80414434
 * Size:	000068
 */
void Stream::textWriteTab(int)
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
	  lwz       r0, 0xC(r3)
	  cmpwi     r0, 0x1
	  bne-      .loc_0x4C
	  li        r31, 0
	  b         .loc_0x44

	.loc_0x34:
	  mr        r3, r29
	  li        r4, 0x9
	  bl        0x1270
	  addi      r31, r31, 0x1

	.loc_0x44:
	  cmpw      r31, r30
	  blt+      .loc_0x34

	.loc_0x4C:
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
 * Address:	8041449C
 * Size:	000278
 */
void Stream::readByte()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r4, 0x804A
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  subi      r31, r4, 0x69A0
	  stw       r30, 0x18(r1)
	  mr        r30, r3
	  stw       r29, 0x14(r1)
	  lwz       r0, 0xC(r3)
	  cmpwi     r0, 0x1
	  bne-      .loc_0x258
	  cmpwi     r0, 0
	  bne-      .loc_0x40
	  li        r30, 0
	  b         .loc_0x21C

	.loc_0x40:
	  li        r29, 0
	  stw       r29, 0x10(r30)
	  lwz       r0, 0xC(r30)
	  cmpwi     r0, 0x1
	  bne-      .loc_0xFC
	  b         .loc_0xE0

	.loc_0x58:
	  mr        r3, r30
	  bl        .loc_0x278
	  rlwinm.   r0,r29,0,24,31
	  extsb     r4, r3
	  beq-      .loc_0x84
	  cmpwi     r4, 0xD
	  beq-      .loc_0x7C
	  cmpwi     r4, 0xA
	  bne-      .loc_0xE0

	.loc_0x7C:
	  li        r29, 0
	  b         .loc_0xE0

	.loc_0x84:
	  cmpwi     r4, 0x23
	  bne-      .loc_0x94
	  li        r29, 0x1
	  b         .loc_0xE0

	.loc_0x94:
	  cmpwi     r4, 0xD
	  li        r0, 0
	  beq-      .loc_0xD0
	  cmpwi     r4, 0x20
	  beq-      .loc_0xD0
	  cmpwi     r4, 0xA
	  beq-      .loc_0xD0
	  cmpwi     r4, 0x9
	  beq-      .loc_0xD0
	  cmpwi     r4, 0x23
	  beq-      .loc_0xD0
	  cmpwi     r4, 0x7B
	  beq-      .loc_0xD0
	  cmpwi     r4, 0x7D
	  bne-      .loc_0xD4

	.loc_0xD0:
	  li        r0, 0x1

	.loc_0xD4:
	  rlwinm.   r0,r0,0,24,31
	  bne-      .loc_0xE0
	  b         .loc_0x100

	.loc_0xE0:
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x58

	.loc_0xFC:
	  li        r4, 0

	.loc_0x100:
	  lwz       r3, 0x10(r30)
	  addi      r0, r3, 0x1
	  add       r3, r30, r3
	  stw       r0, 0x10(r30)
	  stb       r4, 0x14(r3)
	  b         .loc_0x1E8

	.loc_0x118:
	  mr        r3, r30
	  bl        .loc_0x278
	  extsb     r5, r3
	  li        r0, 0
	  cmpwi     r5, 0xD
	  beq-      .loc_0x160
	  cmpwi     r5, 0x20
	  beq-      .loc_0x160
	  cmpwi     r5, 0xA
	  beq-      .loc_0x160
	  cmpwi     r5, 0x9
	  beq-      .loc_0x160
	  cmpwi     r5, 0x23
	  beq-      .loc_0x160
	  cmpwi     r5, 0x7B
	  beq-      .loc_0x160
	  cmpwi     r5, 0x7D
	  bne-      .loc_0x164

	.loc_0x160:
	  li        r0, 0x1

	.loc_0x164:
	  rlwinm.   r0,r0,0,24,31
	  beq-      .loc_0x1CC
	  lwz       r3, 0x10(r30)
	  cmpwi     r5, 0x23
	  li        r4, 0
	  addi      r0, r3, 0x1
	  add       r3, r30, r3
	  stw       r0, 0x10(r30)
	  stb       r4, 0x14(r3)
	  bne-      .loc_0x218
	  b         .loc_0x1AC

	.loc_0x190:
	  mr        r3, r30
	  bl        .loc_0x278
	  extsb     r0, r3
	  cmpwi     r0, 0xD
	  beq-      .loc_0x218
	  cmpwi     r0, 0xA
	  beq-      .loc_0x218

	.loc_0x1AC:
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x190
	  b         .loc_0x218

	.loc_0x1CC:
	  lwz       r4, 0x10(r30)
	  extsb.    r0, r5
	  addi      r3, r4, 0x1
	  addi      r0, r4, 0x14
	  stw       r3, 0x10(r30)
	  stbx      r5, r30, r0
	  beq-      .loc_0x218

	.loc_0x1E8:
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x118
	  addi      r3, r31, 0
	  addi      r5, r31, 0xC
	  li        r4, 0x62
	  crclr     6, 0x6
	  bl        -0x3EA070

	.loc_0x218:
	  addi      r30, r30, 0x14

	.loc_0x21C:
	  cmplwi    r30, 0
	  bne-      .loc_0x238
	  addi      r3, r31, 0
	  addi      r5, r31, 0x1C
	  li        r4, 0x104
	  crclr     6, 0x6
	  bl        -0x3EA090

	.loc_0x238:
	  mr        r3, r30
	  addi      r5, r1, 0x8
	  addi      r4, r2, 0x1F90
	  crclr     6, 0x6
	  bl        -0x34B124
	  lwz       r0, 0x8(r1)
	  rlwinm    r3,r0,0,24,31
	  b         .loc_0x25C

	.loc_0x258:
	  bl        .loc_0x278

	.loc_0x25C:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr

	.loc_0x278:
	*/
}

/*
 * --INFO--
 * Address:	80414714
 * Size:	000050
 */
void Stream::_readByte()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  li        r5, 0x1
	  stw       r0, 0x24(r1)
	  addi      r4, r1, 0x8
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x8(r31)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r31)
	  lbz       r3, 0x8(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80414764
 * Size:	00032C
 */
void Stream::readShort()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  lis       r4, 0x804A
	  stw       r0, 0x34(r1)
	  stw       r31, 0x2C(r1)
	  subi      r31, r4, 0x69A0
	  stw       r30, 0x28(r1)
	  mr        r30, r3
	  stw       r29, 0x24(r1)
	  lwz       r0, 0xC(r3)
	  cmpwi     r0, 0x1
	  bne-      .loc_0x2CC
	  cmpwi     r0, 0
	  bne-      .loc_0x40
	  li        r30, 0
	  b         .loc_0x288

	.loc_0x40:
	  li        r29, 0
	  stw       r29, 0x10(r30)
	  lwz       r0, 0xC(r30)
	  cmpwi     r0, 0x1
	  bne-      .loc_0x120
	  b         .loc_0x104

	.loc_0x58:
	  mr        r3, r30
	  addi      r4, r1, 0x8
	  lwz       r12, 0x0(r30)
	  li        r5, 0x1
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x8(r30)
	  rlwinm.   r0,r29,0,24,31
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r30)
	  lbz       r0, 0x8(r1)
	  extsb     r4, r0
	  beq-      .loc_0xA8
	  cmpwi     r4, 0xD
	  beq-      .loc_0xA0
	  cmpwi     r4, 0xA
	  bne-      .loc_0x104

	.loc_0xA0:
	  li        r29, 0
	  b         .loc_0x104

	.loc_0xA8:
	  cmpwi     r4, 0x23
	  bne-      .loc_0xB8
	  li        r29, 0x1
	  b         .loc_0x104

	.loc_0xB8:
	  cmpwi     r4, 0xD
	  li        r0, 0
	  beq-      .loc_0xF4
	  cmpwi     r4, 0x20
	  beq-      .loc_0xF4
	  cmpwi     r4, 0xA
	  beq-      .loc_0xF4
	  cmpwi     r4, 0x9
	  beq-      .loc_0xF4
	  cmpwi     r4, 0x23
	  beq-      .loc_0xF4
	  cmpwi     r4, 0x7B
	  beq-      .loc_0xF4
	  cmpwi     r4, 0x7D
	  bne-      .loc_0xF8

	.loc_0xF4:
	  li        r0, 0x1

	.loc_0xF8:
	  rlwinm.   r0,r0,0,24,31
	  bne-      .loc_0x104
	  b         .loc_0x124

	.loc_0x104:
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x58

	.loc_0x120:
	  li        r4, 0

	.loc_0x124:
	  lwz       r3, 0x10(r30)
	  addi      r0, r3, 0x1
	  add       r3, r30, r3
	  stw       r0, 0x10(r30)
	  stb       r4, 0x14(r3)
	  b         .loc_0x254

	.loc_0x13C:
	  mr        r3, r30
	  addi      r4, r1, 0xA
	  lwz       r12, 0x0(r30)
	  li        r5, 0x1
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x8(r30)
	  li        r0, 0
	  addi      r3, r3, 0x1
	  stw       r3, 0x8(r30)
	  lbz       r3, 0xA(r1)
	  extsb     r5, r3
	  cmpwi     r5, 0xD
	  beq-      .loc_0x1A8
	  cmpwi     r5, 0x20
	  beq-      .loc_0x1A8
	  cmpwi     r5, 0xA
	  beq-      .loc_0x1A8
	  cmpwi     r5, 0x9
	  beq-      .loc_0x1A8
	  cmpwi     r5, 0x23
	  beq-      .loc_0x1A8
	  cmpwi     r5, 0x7B
	  beq-      .loc_0x1A8
	  cmpwi     r5, 0x7D
	  bne-      .loc_0x1AC

	.loc_0x1A8:
	  li        r0, 0x1

	.loc_0x1AC:
	  rlwinm.   r0,r0,0,24,31
	  beq-      .loc_0x238
	  lwz       r3, 0x10(r30)
	  cmpwi     r5, 0x23
	  li        r4, 0
	  addi      r0, r3, 0x1
	  add       r3, r30, r3
	  stw       r0, 0x10(r30)
	  stb       r4, 0x14(r3)
	  bne-      .loc_0x284
	  b         .loc_0x218

	.loc_0x1D8:
	  mr        r3, r30
	  addi      r4, r1, 0x9
	  lwz       r12, 0x0(r30)
	  li        r5, 0x1
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x8(r30)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r30)
	  lbz       r0, 0x9(r1)
	  extsb     r0, r0
	  cmpwi     r0, 0xD
	  beq-      .loc_0x284
	  cmpwi     r0, 0xA
	  beq-      .loc_0x284

	.loc_0x218:
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x1D8
	  b         .loc_0x284

	.loc_0x238:
	  lwz       r4, 0x10(r30)
	  extsb.    r0, r5
	  addi      r3, r4, 0x1
	  addi      r0, r4, 0x14
	  stw       r3, 0x10(r30)
	  stbx      r5, r30, r0
	  beq-      .loc_0x284

	.loc_0x254:
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x13C
	  addi      r3, r31, 0
	  addi      r5, r31, 0xC
	  li        r4, 0x62
	  crclr     6, 0x6
	  bl        -0x3EA3A4

	.loc_0x284:
	  addi      r30, r30, 0x14

	.loc_0x288:
	  cmplwi    r30, 0
	  bne-      .loc_0x2A4
	  addi      r3, r31, 0
	  addi      r5, r31, 0x34
	  li        r4, 0x11C
	  crclr     6, 0x6
	  bl        -0x3EA3C4

	.loc_0x2A4:
	  mr        r3, r30
	  addi      r5, r1, 0x10
	  addi      r4, r2, 0x1F90
	  crclr     6, 0x6
	  bl        -0x34B458
	  lwz       r3, 0x10(r1)
	  rlwinm    r0,r3,0,16,31
	  sth       r3, 0xC(r1)
	  extsh     r3, r0
	  b         .loc_0x310

	.loc_0x2CC:
	  lwz       r12, 0x0(r3)
	  addi      r4, r1, 0xC
	  li        r5, 0x2
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x8(r30)
	  addi      r0, r3, 0x2
	  stw       r0, 0x8(r30)
	  lwz       r0, 0x4(r30)
	  cmpwi     r0, 0x1
	  beq-      .loc_0x308
	  lhz       r3, 0xC(r1)
	  addi      r0, r1, 0xC
	  sthbrx    r3, r0, r0

	.loc_0x308:
	  lhz       r0, 0xC(r1)
	  extsh     r3, r0

	.loc_0x310:
	  lwz       r0, 0x34(r1)
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  lwz       r29, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80414A90
 * Size:	00031C
 */
void Stream::readInt()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r4, 0x804A
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  subi      r31, r4, 0x69A0
	  stw       r30, 0x18(r1)
	  mr        r30, r3
	  stw       r29, 0x14(r1)
	  lwz       r0, 0xC(r3)
	  cmpwi     r0, 0x1
	  bne-      .loc_0x2C0
	  cmpwi     r0, 0
	  bne-      .loc_0x40
	  li        r30, 0
	  b         .loc_0x288

	.loc_0x40:
	  li        r29, 0
	  stw       r29, 0x10(r30)
	  lwz       r0, 0xC(r30)
	  cmpwi     r0, 0x1
	  bne-      .loc_0x120
	  b         .loc_0x104

	.loc_0x58:
	  mr        r3, r30
	  addi      r4, r1, 0x8
	  lwz       r12, 0x0(r30)
	  li        r5, 0x1
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x8(r30)
	  rlwinm.   r0,r29,0,24,31
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r30)
	  lbz       r0, 0x8(r1)
	  extsb     r4, r0
	  beq-      .loc_0xA8
	  cmpwi     r4, 0xD
	  beq-      .loc_0xA0
	  cmpwi     r4, 0xA
	  bne-      .loc_0x104

	.loc_0xA0:
	  li        r29, 0
	  b         .loc_0x104

	.loc_0xA8:
	  cmpwi     r4, 0x23
	  bne-      .loc_0xB8
	  li        r29, 0x1
	  b         .loc_0x104

	.loc_0xB8:
	  cmpwi     r4, 0xD
	  li        r0, 0
	  beq-      .loc_0xF4
	  cmpwi     r4, 0x20
	  beq-      .loc_0xF4
	  cmpwi     r4, 0xA
	  beq-      .loc_0xF4
	  cmpwi     r4, 0x9
	  beq-      .loc_0xF4
	  cmpwi     r4, 0x23
	  beq-      .loc_0xF4
	  cmpwi     r4, 0x7B
	  beq-      .loc_0xF4
	  cmpwi     r4, 0x7D
	  bne-      .loc_0xF8

	.loc_0xF4:
	  li        r0, 0x1

	.loc_0xF8:
	  rlwinm.   r0,r0,0,24,31
	  bne-      .loc_0x104
	  b         .loc_0x124

	.loc_0x104:
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x58

	.loc_0x120:
	  li        r4, 0

	.loc_0x124:
	  lwz       r3, 0x10(r30)
	  addi      r0, r3, 0x1
	  add       r3, r30, r3
	  stw       r0, 0x10(r30)
	  stb       r4, 0x14(r3)
	  b         .loc_0x254

	.loc_0x13C:
	  mr        r3, r30
	  addi      r4, r1, 0xA
	  lwz       r12, 0x0(r30)
	  li        r5, 0x1
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x8(r30)
	  li        r0, 0
	  addi      r3, r3, 0x1
	  stw       r3, 0x8(r30)
	  lbz       r3, 0xA(r1)
	  extsb     r5, r3
	  cmpwi     r5, 0xD
	  beq-      .loc_0x1A8
	  cmpwi     r5, 0x20
	  beq-      .loc_0x1A8
	  cmpwi     r5, 0xA
	  beq-      .loc_0x1A8
	  cmpwi     r5, 0x9
	  beq-      .loc_0x1A8
	  cmpwi     r5, 0x23
	  beq-      .loc_0x1A8
	  cmpwi     r5, 0x7B
	  beq-      .loc_0x1A8
	  cmpwi     r5, 0x7D
	  bne-      .loc_0x1AC

	.loc_0x1A8:
	  li        r0, 0x1

	.loc_0x1AC:
	  rlwinm.   r0,r0,0,24,31
	  beq-      .loc_0x238
	  lwz       r3, 0x10(r30)
	  cmpwi     r5, 0x23
	  li        r4, 0
	  addi      r0, r3, 0x1
	  add       r3, r30, r3
	  stw       r0, 0x10(r30)
	  stb       r4, 0x14(r3)
	  bne-      .loc_0x284
	  b         .loc_0x218

	.loc_0x1D8:
	  mr        r3, r30
	  addi      r4, r1, 0x9
	  lwz       r12, 0x0(r30)
	  li        r5, 0x1
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x8(r30)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r30)
	  lbz       r0, 0x9(r1)
	  extsb     r0, r0
	  cmpwi     r0, 0xD
	  beq-      .loc_0x284
	  cmpwi     r0, 0xA
	  beq-      .loc_0x284

	.loc_0x218:
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x1D8
	  b         .loc_0x284

	.loc_0x238:
	  lwz       r4, 0x10(r30)
	  extsb.    r0, r5
	  addi      r3, r4, 0x1
	  addi      r0, r4, 0x14
	  stw       r3, 0x10(r30)
	  stbx      r5, r30, r0
	  beq-      .loc_0x284

	.loc_0x254:
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x13C
	  addi      r3, r31, 0
	  addi      r5, r31, 0xC
	  li        r4, 0x62
	  crclr     6, 0x6
	  bl        -0x3EA6D0

	.loc_0x284:
	  addi      r30, r30, 0x14

	.loc_0x288:
	  cmplwi    r30, 0
	  bne-      .loc_0x2A4
	  addi      r3, r31, 0
	  addi      r5, r31, 0x4C
	  li        r4, 0x132
	  crclr     6, 0x6
	  bl        -0x3EA6F0

	.loc_0x2A4:
	  mr        r3, r30
	  addi      r5, r1, 0xC
	  addi      r4, r2, 0x1F90
	  crclr     6, 0x6
	  bl        -0x34B784
	  lwz       r3, 0xC(r1)
	  b         .loc_0x300

	.loc_0x2C0:
	  lwz       r12, 0x0(r3)
	  addi      r4, r1, 0xC
	  li        r5, 0x4
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x8(r30)
	  addi      r0, r3, 0x4
	  stw       r0, 0x8(r30)
	  lwz       r0, 0x4(r30)
	  cmpwi     r0, 0x1
	  beq-      .loc_0x2FC
	  lwz       r3, 0xC(r1)
	  addi      r0, r1, 0xC
	  stwbrx    r3, r0, r0

	.loc_0x2FC:
	  lwz       r3, 0xC(r1)

	.loc_0x300:
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
 * Address:	80414DAC
 * Size:	000328
 */
void Stream::readFloat()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  lis       r4, 0x804A
	  stw       r0, 0x34(r1)
	  stw       r31, 0x2C(r1)
	  subi      r31, r4, 0x69A0
	  stw       r30, 0x28(r1)
	  mr        r30, r3
	  stw       r29, 0x24(r1)
	  lwz       r0, 0xC(r3)
	  cmpwi     r0, 0x1
	  bne-      .loc_0x2C0
	  cmpwi     r0, 0
	  bne-      .loc_0x40
	  li        r30, 0
	  b         .loc_0x288

	.loc_0x40:
	  li        r29, 0
	  stw       r29, 0x10(r30)
	  lwz       r0, 0xC(r30)
	  cmpwi     r0, 0x1
	  bne-      .loc_0x120
	  b         .loc_0x104

	.loc_0x58:
	  mr        r3, r30
	  addi      r4, r1, 0x8
	  lwz       r12, 0x0(r30)
	  li        r5, 0x1
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x8(r30)
	  rlwinm.   r0,r29,0,24,31
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r30)
	  lbz       r0, 0x8(r1)
	  extsb     r4, r0
	  beq-      .loc_0xA8
	  cmpwi     r4, 0xD
	  beq-      .loc_0xA0
	  cmpwi     r4, 0xA
	  bne-      .loc_0x104

	.loc_0xA0:
	  li        r29, 0
	  b         .loc_0x104

	.loc_0xA8:
	  cmpwi     r4, 0x23
	  bne-      .loc_0xB8
	  li        r29, 0x1
	  b         .loc_0x104

	.loc_0xB8:
	  cmpwi     r4, 0xD
	  li        r0, 0
	  beq-      .loc_0xF4
	  cmpwi     r4, 0x20
	  beq-      .loc_0xF4
	  cmpwi     r4, 0xA
	  beq-      .loc_0xF4
	  cmpwi     r4, 0x9
	  beq-      .loc_0xF4
	  cmpwi     r4, 0x23
	  beq-      .loc_0xF4
	  cmpwi     r4, 0x7B
	  beq-      .loc_0xF4
	  cmpwi     r4, 0x7D
	  bne-      .loc_0xF8

	.loc_0xF4:
	  li        r0, 0x1

	.loc_0xF8:
	  rlwinm.   r0,r0,0,24,31
	  bne-      .loc_0x104
	  b         .loc_0x124

	.loc_0x104:
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x58

	.loc_0x120:
	  li        r4, 0

	.loc_0x124:
	  lwz       r3, 0x10(r30)
	  addi      r0, r3, 0x1
	  add       r3, r30, r3
	  stw       r0, 0x10(r30)
	  stb       r4, 0x14(r3)
	  b         .loc_0x254

	.loc_0x13C:
	  mr        r3, r30
	  addi      r4, r1, 0xA
	  lwz       r12, 0x0(r30)
	  li        r5, 0x1
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x8(r30)
	  li        r0, 0
	  addi      r3, r3, 0x1
	  stw       r3, 0x8(r30)
	  lbz       r3, 0xA(r1)
	  extsb     r5, r3
	  cmpwi     r5, 0xD
	  beq-      .loc_0x1A8
	  cmpwi     r5, 0x20
	  beq-      .loc_0x1A8
	  cmpwi     r5, 0xA
	  beq-      .loc_0x1A8
	  cmpwi     r5, 0x9
	  beq-      .loc_0x1A8
	  cmpwi     r5, 0x23
	  beq-      .loc_0x1A8
	  cmpwi     r5, 0x7B
	  beq-      .loc_0x1A8
	  cmpwi     r5, 0x7D
	  bne-      .loc_0x1AC

	.loc_0x1A8:
	  li        r0, 0x1

	.loc_0x1AC:
	  rlwinm.   r0,r0,0,24,31
	  beq-      .loc_0x238
	  lwz       r3, 0x10(r30)
	  cmpwi     r5, 0x23
	  li        r4, 0
	  addi      r0, r3, 0x1
	  add       r3, r30, r3
	  stw       r0, 0x10(r30)
	  stb       r4, 0x14(r3)
	  bne-      .loc_0x284
	  b         .loc_0x218

	.loc_0x1D8:
	  mr        r3, r30
	  addi      r4, r1, 0x9
	  lwz       r12, 0x0(r30)
	  li        r5, 0x1
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x8(r30)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r30)
	  lbz       r0, 0x9(r1)
	  extsb     r0, r0
	  cmpwi     r0, 0xD
	  beq-      .loc_0x284
	  cmpwi     r0, 0xA
	  beq-      .loc_0x284

	.loc_0x218:
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x1D8
	  b         .loc_0x284

	.loc_0x238:
	  lwz       r4, 0x10(r30)
	  extsb.    r0, r5
	  addi      r3, r4, 0x1
	  addi      r0, r4, 0x14
	  stw       r3, 0x10(r30)
	  stbx      r5, r30, r0
	  beq-      .loc_0x284

	.loc_0x254:
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x13C
	  addi      r3, r31, 0
	  addi      r5, r31, 0xC
	  li        r4, 0x62
	  crclr     6, 0x6
	  bl        -0x3EA9EC

	.loc_0x284:
	  addi      r30, r30, 0x14

	.loc_0x288:
	  cmplwi    r30, 0
	  bne-      .loc_0x2A4
	  addi      r3, r31, 0
	  addi      r5, r31, 0x64
	  li        r4, 0x144
	  crclr     6, 0x6
	  bl        -0x3EAA0C

	.loc_0x2A4:
	  mr        r3, r30
	  addi      r5, r1, 0x10
	  addi      r4, r2, 0x1F94
	  crclr     6, 0x6
	  bl        -0x34BAA0
	  lfs       f1, 0x10(r1)
	  b         .loc_0x30C

	.loc_0x2C0:
	  lwz       r12, 0x0(r3)
	  addi      r4, r1, 0x10
	  li        r5, 0x4
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x8(r30)
	  addi      r0, r3, 0x4
	  stw       r0, 0x8(r30)
	  lwz       r0, 0x4(r30)
	  cmpwi     r0, 0x1
	  beq-      .loc_0x308
	  lwz       r3, 0x10(r1)
	  addi      r0, r1, 0xC
	  stw       r3, 0xC(r1)
	  stwbrx    r3, r0, r0
	  lfs       f0, 0xC(r1)
	  stfs      f0, 0x10(r1)

	.loc_0x308:
	  lfs       f1, 0x10(r1)

	.loc_0x30C:
	  lwz       r0, 0x34(r1)
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  lwz       r29, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	804150D4
 * Size:	0004F8
 */
void Stream::readString(char*, int)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x430(r1)
	  mflr      r0
	  stw       r0, 0x434(r1)
	  stmw      r24, 0x410(r1)
	  mr        r26, r3
	  lis       r3, 0x804A
	  mr        r27, r4
	  mr        r28, r5
	  subi      r31, r3, 0x69A0
	  lwz       r0, 0xC(r26)
	  cmpwi     r0, 0x1
	  bne-      .loc_0x37C
	  cmpwi     r0, 0
	  bne-      .loc_0x40
	  li        r30, 0
	  b         .loc_0x288

	.loc_0x40:
	  li        r29, 0
	  stw       r29, 0x10(r26)
	  lwz       r0, 0xC(r26)
	  cmpwi     r0, 0x1
	  bne-      .loc_0x120
	  b         .loc_0x104

	.loc_0x58:
	  mr        r3, r26
	  addi      r4, r1, 0x8
	  lwz       r12, 0x0(r26)
	  li        r5, 0x1
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x8(r26)
	  rlwinm.   r0,r29,0,24,31
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r26)
	  lbz       r0, 0x8(r1)
	  extsb     r4, r0
	  beq-      .loc_0xA8
	  cmpwi     r4, 0xD
	  beq-      .loc_0xA0
	  cmpwi     r4, 0xA
	  bne-      .loc_0x104

	.loc_0xA0:
	  li        r29, 0
	  b         .loc_0x104

	.loc_0xA8:
	  cmpwi     r4, 0x23
	  bne-      .loc_0xB8
	  li        r29, 0x1
	  b         .loc_0x104

	.loc_0xB8:
	  cmpwi     r4, 0xD
	  li        r0, 0
	  beq-      .loc_0xF4
	  cmpwi     r4, 0x20
	  beq-      .loc_0xF4
	  cmpwi     r4, 0xA
	  beq-      .loc_0xF4
	  cmpwi     r4, 0x9
	  beq-      .loc_0xF4
	  cmpwi     r4, 0x23
	  beq-      .loc_0xF4
	  cmpwi     r4, 0x7B
	  beq-      .loc_0xF4
	  cmpwi     r4, 0x7D
	  bne-      .loc_0xF8

	.loc_0xF4:
	  li        r0, 0x1

	.loc_0xF8:
	  rlwinm.   r0,r0,0,24,31
	  bne-      .loc_0x104
	  b         .loc_0x124

	.loc_0x104:
	  mr        r3, r26
	  lwz       r12, 0x0(r26)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x58

	.loc_0x120:
	  li        r4, 0

	.loc_0x124:
	  lwz       r3, 0x10(r26)
	  addi      r0, r3, 0x1
	  add       r3, r26, r3
	  stw       r0, 0x10(r26)
	  stb       r4, 0x14(r3)
	  b         .loc_0x254

	.loc_0x13C:
	  mr        r3, r26
	  addi      r4, r1, 0xA
	  lwz       r12, 0x0(r26)
	  li        r5, 0x1
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x8(r26)
	  li        r0, 0
	  addi      r3, r3, 0x1
	  stw       r3, 0x8(r26)
	  lbz       r3, 0xA(r1)
	  extsb     r5, r3
	  cmpwi     r5, 0xD
	  beq-      .loc_0x1A8
	  cmpwi     r5, 0x20
	  beq-      .loc_0x1A8
	  cmpwi     r5, 0xA
	  beq-      .loc_0x1A8
	  cmpwi     r5, 0x9
	  beq-      .loc_0x1A8
	  cmpwi     r5, 0x23
	  beq-      .loc_0x1A8
	  cmpwi     r5, 0x7B
	  beq-      .loc_0x1A8
	  cmpwi     r5, 0x7D
	  bne-      .loc_0x1AC

	.loc_0x1A8:
	  li        r0, 0x1

	.loc_0x1AC:
	  rlwinm.   r0,r0,0,24,31
	  beq-      .loc_0x238
	  lwz       r3, 0x10(r26)
	  cmpwi     r5, 0x23
	  li        r4, 0
	  addi      r0, r3, 0x1
	  add       r3, r26, r3
	  stw       r0, 0x10(r26)
	  stb       r4, 0x14(r3)
	  bne-      .loc_0x284
	  b         .loc_0x218

	.loc_0x1D8:
	  mr        r3, r26
	  addi      r4, r1, 0x9
	  lwz       r12, 0x0(r26)
	  li        r5, 0x1
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x8(r26)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r26)
	  lbz       r0, 0x9(r1)
	  extsb     r0, r0
	  cmpwi     r0, 0xD
	  beq-      .loc_0x284
	  cmpwi     r0, 0xA
	  beq-      .loc_0x284

	.loc_0x218:
	  mr        r3, r26
	  lwz       r12, 0x0(r26)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x1D8
	  b         .loc_0x284

	.loc_0x238:
	  lwz       r4, 0x10(r26)
	  extsb.    r0, r5
	  addi      r3, r4, 0x1
	  addi      r0, r4, 0x14
	  stw       r3, 0x10(r26)
	  stbx      r5, r26, r0
	  beq-      .loc_0x284

	.loc_0x254:
	  mr        r3, r26
	  lwz       r12, 0x0(r26)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x13C
	  addi      r3, r31, 0
	  addi      r5, r31, 0xC
	  li        r4, 0x62
	  crclr     6, 0x6
	  bl        -0x3EAD14

	.loc_0x284:
	  addi      r30, r26, 0x14

	.loc_0x288:
	  mr        r3, r30
	  bl        -0x34AA50
	  cmplwi    r27, 0
	  mr        r26, r3
	  beq-      .loc_0x2C0
	  cmpw      r28, r26
	  bge-      .loc_0x2B8
	  addi      r3, r31, 0
	  addi      r5, r31, 0x7C
	  li        r4, 0x160
	  crclr     6, 0x6
	  bl        -0x3EAD48

	.loc_0x2B8:
	  mr        r3, r27
	  b         .loc_0x2C8

	.loc_0x2C0:
	  addi      r3, r26, 0x1
	  bl        -0x3F13EC

	.loc_0x2C8:
	  addic.    r0, r26, 0x1
	  li        r7, 0
	  ble-      .loc_0x4E4
	  addi      r0, r26, 0x1
	  subi      r4, r26, 0x7
	  cmpwi     r0, 0x8
	  ble-      .loc_0x348
	  addi      r0, r4, 0x7
	  rlwinm    r0,r0,29,3,31
	  mtctr     r0
	  cmpwi     r4, 0
	  ble-      .loc_0x348

	.loc_0x2F8:
	  add       r4, r30, r7
	  add       r5, r3, r7
	  lbz       r0, 0x0(r4)
	  addi      r7, r7, 0x8
	  stb       r0, 0x0(r5)
	  lbz       r0, 0x1(r4)
	  stb       r0, 0x1(r5)
	  lbz       r0, 0x2(r4)
	  stb       r0, 0x2(r5)
	  lbz       r0, 0x3(r4)
	  stb       r0, 0x3(r5)
	  lbz       r0, 0x4(r4)
	  stb       r0, 0x4(r5)
	  lbz       r0, 0x5(r4)
	  stb       r0, 0x5(r5)
	  lbz       r0, 0x6(r4)
	  stb       r0, 0x6(r5)
	  lbz       r0, 0x7(r4)
	  stb       r0, 0x7(r5)
	  bdnz+     .loc_0x2F8

	.loc_0x348:
	  addi      r6, r26, 0x1
	  add       r5, r30, r7
	  sub       r0, r6, r7
	  add       r4, r3, r7
	  mtctr     r0
	  cmpw      r7, r6
	  bge-      .loc_0x4E4

	.loc_0x364:
	  lbz       r0, 0x0(r5)
	  addi      r5, r5, 0x1
	  stb       r0, 0x0(r4)
	  addi      r4, r4, 0x1
	  bdnz+     .loc_0x364
	  b         .loc_0x4E4

	.loc_0x37C:
	  addi      r30, r1, 0xC
	  li        r29, 0
	  mr        r25, r30
	  li        r24, 0
	  b         .loc_0x3D8

	.loc_0x390:
	  mr        r3, r26
	  addi      r4, r1, 0xB
	  lwz       r12, 0x0(r26)
	  li        r5, 0x1
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x8(r26)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r26)
	  lbz       r0, 0xB(r1)
	  stb       r0, 0x0(r25)
	  lbz       r0, 0x0(r25)
	  extsb.    r0, r0
	  beq-      .loc_0x3FC
	  addi      r29, r29, 0x1
	  addi      r25, r25, 0x1
	  addi      r24, r24, 0x1

	.loc_0x3D8:
	  cmpwi     r24, 0x400
	  blt+      .loc_0x390
	  mr        r3, r26
	  lwz       r12, 0x0(r26)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x390

	.loc_0x3FC:
	  cmplwi    r27, 0
	  beq-      .loc_0x428
	  cmpw      r28, r29
	  bge-      .loc_0x420
	  addi      r3, r31, 0
	  addi      r5, r31, 0x7C
	  li        r4, 0x174
	  crclr     6, 0x6
	  bl        -0x3EAEB0

	.loc_0x420:
	  mr        r3, r27
	  b         .loc_0x430

	.loc_0x428:
	  addi      r3, r29, 0x1
	  bl        -0x3F1554

	.loc_0x430:
	  cmpwi     r29, 0
	  mr        r6, r3
	  li        r5, 0
	  ble-      .loc_0x4DC
	  cmpwi     r29, 0x8
	  subi      r4, r29, 0x8
	  ble-      .loc_0x4B0
	  addi      r0, r4, 0x7
	  rlwinm    r0,r0,29,3,31
	  mtctr     r0
	  cmpwi     r4, 0
	  ble-      .loc_0x4B0

	.loc_0x460:
	  lbz       r4, 0x0(r30)
	  addi      r5, r5, 0x8
	  lbz       r0, 0x1(r30)
	  stb       r4, 0x0(r6)
	  lbz       r4, 0x2(r30)
	  stb       r0, 0x1(r6)
	  lbz       r0, 0x3(r30)
	  stb       r4, 0x2(r6)
	  lbz       r4, 0x4(r30)
	  stb       r0, 0x3(r6)
	  lbz       r0, 0x5(r30)
	  stb       r4, 0x4(r6)
	  lbz       r4, 0x6(r30)
	  stb       r0, 0x5(r6)
	  lbz       r0, 0x7(r30)
	  addi      r30, r30, 0x8
	  stb       r4, 0x6(r6)
	  stb       r0, 0x7(r6)
	  addi      r6, r6, 0x8
	  bdnz+     .loc_0x460

	.loc_0x4B0:
	  addi      r4, r1, 0xC
	  sub       r0, r29, r5
	  add       r4, r4, r5
	  mtctr     r0
	  cmpw      r5, r29
	  bge-      .loc_0x4DC

	.loc_0x4C8:
	  lbz       r0, 0x0(r4)
	  addi      r4, r4, 0x1
	  stb       r0, 0x0(r6)
	  addi      r6, r6, 0x1
	  bdnz+     .loc_0x4C8

	.loc_0x4DC:
	  li        r0, 0
	  stb       r0, 0x0(r6)

	.loc_0x4E4:
	  lmw       r24, 0x410(r1)
	  lwz       r0, 0x434(r1)
	  mtlr      r0
	  addi      r1, r1, 0x430
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00064C
 */
void Stream::readFixedString()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	804155CC
 * Size:	0000A4
 */
void Stream::writeString(char*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  mr        r29, r4
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  mr        r3, r29
	  bl        -0x34ACE4
	  mr        r30, r3
	  mr        r31, r29
	  li        r29, 0
	  b         .loc_0x50

	.loc_0x3C:
	  lbz       r4, 0x0(r31)
	  mr        r3, r28
	  bl        0xD0
	  addi      r29, r29, 0x1
	  addi      r31, r31, 0x1

	.loc_0x50:
	  cmpw      r29, r30
	  blt+      .loc_0x3C
	  lwz       r0, 0xC(r28)
	  cmpwi     r0, 0x1
	  bne-      .loc_0x78
	  mr        r3, r28
	  addi      r4, r2, 0x1F98
	  crclr     6, 0x6
	  bl        -0x1544
	  b         .loc_0x84

	.loc_0x78:
	  mr        r3, r28
	  li        r4, 0
	  bl        0x94

	.loc_0x84:
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
 * Address:	........
 * Size:	0000BC
 */
void Stream::writeFixedString(char*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80415670
 * Size:	000070
 */
void Stream::writeByte(unsigned char)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  stb       r4, 0x8(r1)
	  lwz       r0, 0xC(r3)
	  cmpwi     r0, 0x1
	  bne-      .loc_0x38
	  rlwinm    r5,r4,0,24,31
	  addi      r4, r2, 0x1F9C
	  crclr     6, 0x6
	  bl        -0x15A8
	  b         .loc_0x5C

	.loc_0x38:
	  lwz       r12, 0x0(r3)
	  addi      r4, r1, 0x8
	  li        r5, 0x1
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x8(r31)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r31)

	.loc_0x5C:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	804156E0
 * Size:	000050
 */
void Stream::_writeByte(unsigned char)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  li        r5, 0x1
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  stb       r4, 0x8(r1)
	  addi      r4, r1, 0x8
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x8(r31)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r31)
	  lwz       r31, 0x1C(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80415730
 * Size:	000090
 */
void Stream::writeShort(short)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  sth       r4, 0x8(r1)
	  lwz       r0, 0xC(r3)
	  cmpwi     r0, 0x1
	  bne-      .loc_0x38
	  extsh     r5, r4
	  addi      r4, r2, 0x1F9C
	  crclr     6, 0x6
	  bl        -0x1668
	  b         .loc_0x7C

	.loc_0x38:
	  lwz       r0, 0x4(r31)
	  cmpwi     r0, 0x1
	  beq-      .loc_0x54
	  extsh     r3, r4
	  rlwinm    r0,r3,24,24,31
	  rlwimi    r0,r3,8,16,23
	  sth       r0, 0x8(r1)

	.loc_0x54:
	  mr        r3, r31
	  addi      r4, r1, 0x8
	  lwz       r12, 0x0(r31)
	  li        r5, 0x2
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x8(r31)
	  addi      r0, r3, 0x2
	  stw       r0, 0x8(r31)

	.loc_0x7C:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	804157C0
 * Size:	000088
 */
void Stream::writeInt(int)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  stw       r4, 0x8(r1)
	  lwz       r0, 0xC(r3)
	  cmpwi     r0, 0x1
	  bne-      .loc_0x38
	  mr        r5, r4
	  addi      r4, r2, 0x1F9C
	  crclr     6, 0x6
	  bl        -0x16F8
	  b         .loc_0x74

	.loc_0x38:
	  lwz       r0, 0x4(r31)
	  cmpwi     r0, 0x1
	  beq-      .loc_0x4C
	  addi      r0, r1, 0x8
	  stwbrx    r4, r0, r0

	.loc_0x4C:
	  mr        r3, r31
	  addi      r4, r1, 0x8
	  lwz       r12, 0x0(r31)
	  li        r5, 0x4
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x8(r31)
	  addi      r0, r3, 0x4
	  stw       r0, 0x8(r31)

	.loc_0x74:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80415848
 * Size:	0000B0
 */
void Stream::writeFloat(float)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  stfs      f1, 0x8(r1)
	  lwz       r0, 0xC(r3)
	  cmpwi     r0, 0x1
	  bne-      .loc_0x38
	  frsp      f1, f1
	  addi      r4, r2, 0x1FA0
	  crset     6, 0x6
	  bl        -0x1780
	  b         .loc_0x9C

	.loc_0x38:
	  lwz       r0, 0x4(r31)
	  cmpwi     r0, 0x1
	  beq-      .loc_0x78
	  lwz       r6, 0x8(r1)
	  addi      r0, r1, 0xC
	  addi      r4, r1, 0xC
	  li        r5, 0x4
	  stwbrx    r6, r0, r0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x8(r31)
	  addi      r0, r3, 0x4
	  stw       r0, 0x8(r31)
	  b         .loc_0x9C

	.loc_0x78:
	  lwz       r12, 0x0(r3)
	  addi      r4, r1, 0x8
	  li        r5, 0x4
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x8(r31)
	  addi      r0, r3, 0x4
	  stw       r0, 0x8(r31)

	.loc_0x9C:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	804158F8
 * Size:	000050
 */
RamStream::RamStream(void*, int)
{
	/*
	.loc_0x0:
	  lis       r6, 0x804F
	  li        r0, 0x1
	  subi      r6, r6, 0x4A58
	  stw       r6, 0x0(r3)
	  li        r6, 0
	  stw       r0, 0x4(r3)
	  stw       r6, 0x8(r3)
	  stw       r6, 0xC(r3)
	  lwz       r0, 0xC(r3)
	  cmpwi     r0, 0x1
	  bne-      .loc_0x30
	  stw       r6, 0x414(r3)

	.loc_0x30:
	  lis       r6, 0x804F
	  li        r0, 0
	  subi      r6, r6, 0x4A70
	  stw       r6, 0x0(r3)
	  stw       r4, 0x418(r3)
	  stw       r5, 0x41C(r3)
	  stw       r0, 0x8(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000014
 */
void RamStream::set(unsigned char*, int)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80415948
 * Size:	000094
 */
void RamStream::read(void*, int)
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
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x60
	  lis       r3, 0x804A
	  lis       r4, 0x804A
	  subi      r5, r4, 0x68C0
	  lwz       r6, 0x8(r29)
	  lwz       r7, 0x41C(r29)
	  subi      r3, r3, 0x69A0
	  li        r4, 0x20B
	  crclr     6, 0x6
	  bl        -0x3EB364

	.loc_0x60:
	  lwz       r4, 0x418(r29)
	  mr        r3, r30
	  lwz       r0, 0x8(r29)
	  mr        r5, r31
	  add       r4, r4, r0
	  bl        -0x410820
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
 * Address:	804159DC
 * Size:	000094
 */
void RamStream::write(void*, int)
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
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x60
	  lis       r3, 0x804A
	  lis       r4, 0x804A
	  subi      r5, r4, 0x688C
	  lwz       r6, 0x8(r29)
	  lwz       r7, 0x41C(r29)
	  subi      r3, r3, 0x69A0
	  li        r4, 0x216
	  crclr     6, 0x6
	  bl        -0x3EB3F8

	.loc_0x60:
	  lwz       r3, 0x418(r29)
	  mr        r4, r30
	  lwz       r0, 0x8(r29)
	  mr        r5, r31
	  add       r3, r3, r0
	  bl        -0x4108B4
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
 * Address:	80415A70
 * Size:	00002C
 */
void RamStream::eof()
{
	/*
	.loc_0x0:
	  lwz       r5, 0x41C(r3)
	  cmpwi     r5, -0x1
	  beq-      .loc_0x24
	  lwz       r0, 0x8(r3)
	  rlwinm    r3,r5,1,31,31
	  srawi     r4, r0, 0x1F
	  subc      r0, r0, r5
	  adde      r3, r4, r3
	  blr

	.loc_0x24:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80415A9C
 * Size:	000008
 */
u32 Stream::getPending() { return 0x0; }
