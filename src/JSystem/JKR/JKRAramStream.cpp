#include "types.h"

/*
 * --INFO--
 * Address:	80019F20
 * Size:	000070
 */
void JKRAramStream::create(long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r0, -0x78A0(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x58
	  lwz       r4, -0x77D8(r13)
	  li        r3, 0x7C
	  li        r5, 0
	  bl        0x9FF4
	  mr.       r0, r3
	  beq-      .loc_0x44
	  mr        r4, r31
	  bl        .loc_0x70
	  mr        r0, r3

	.loc_0x44:
	  stw       r0, -0x78A0(r13)
	  li        r3, 0
	  li        r4, 0
	  li        r5, 0
	  bl        0x4E8

	.loc_0x58:
	  lwz       r0, 0x14(r1)
	  lwz       r3, -0x78A0(r13)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr

	.loc_0x70:
	*/
}

/*
 * --INFO--
 * Address:	80019F90
 * Size:	000050
 */
JKRAramStream::JKRAramStream(long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r6, r4
	  li        r4, 0x4000
	  stw       r0, 0x14(r1)
	  li        r5, 0x10
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        0xB688
	  lis       r3, 0x804A
	  subi      r0, r3, 0x398
	  stw       r0, 0x0(r31)
	  lwz       r3, 0x2C(r31)
	  bl        0xD8530
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
 * Address:	80019FE0
 * Size:	000060
 */
JKRAramStream::~JKRAramStream()
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
	  subi      r0, r5, 0x398
	  stw       r0, 0x0(r30)
	  bl        0xB828
	  extsh.    r0, r31
	  ble-      .loc_0x44
	  mr        r3, r30
	  bl        0xA094

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
 * Address:	8001A040
 * Size:	000070
 */
void JKRAramStream::run()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r3, 0x804A
	  lis       r4, 0x804A
	  stw       r0, 0x24(r1)
	  subi      r3, r3, 0x3B8
	  li        r5, 0x4
	  subi      r4, r4, 0x3C8
	  stw       r31, 0x1C(r1)
	  bl        0xD5458
	  lis       r3, 0x804A
	  subi      r31, r3, 0x3B8

	.loc_0x30:
	  mr        r3, r31
	  addi      r4, r1, 0x8
	  li        r5, 0x1
	  bl        0xD5568
	  lwz       r3, 0x8(r1)
	  lwz       r0, 0x0(r3)
	  cmpwi     r0, 0x2
	  beq-      .loc_0x68
	  bge+      .loc_0x30
	  cmpwi     r0, 0x1
	  bge-      .loc_0x60
	  b         .loc_0x30

	.loc_0x60:
	  bl        .loc_0x70
	  b         .loc_0x30

	.loc_0x68:
	  bl        0x10
	  b         .loc_0x30

	.loc_0x70:
	*/
}

/*
 * --INFO--
 * Address:	8001A0B0
 * Size:	000008
 */
u32 JKRAramStream::readFromAram() { return 0x1; }

/*
 * --INFO--
 * Address:	8001A0B8
 * Size:	0001EC
 */
void JKRAramStream::writeToAram(JKRAramStreamCommand*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stmw      r24, 0x10(r1)
	  mr        r24, r3
	  li        r28, 0
	  lwz       r26, 0x1C(r3)
	  lwz       r30, 0x8(r3)
	  cmplwi    r26, 0
	  lwz       r29, 0x14(r3)
	  lwz       r27, 0x4(r3)
	  lwz       r0, 0x20(r3)
	  lwz       r25, 0x24(r3)
	  beq-      .loc_0x5C
	  cmplwi    r0, 0
	  lis       r3, 0x1
	  subi      r31, r3, 0x8000
	  beq-      .loc_0x4C
	  mr        r31, r0

	.loc_0x4C:
	  stw       r31, 0x20(r24)
	  li        r0, 0
	  stb       r0, 0x28(r24)
	  b         .loc_0xB8

	.loc_0x5C:
	  cmplwi    r0, 0
	  lis       r3, 0x1
	  subi      r31, r3, 0x8000
	  beq-      .loc_0x70
	  mr        r31, r0

	.loc_0x70:
	  cmplwi    r25, 0
	  beq-      .loc_0x94
	  mr        r3, r31
	  mr        r5, r25
	  li        r4, -0x20
	  bl        0x94A4
	  mr        r26, r3
	  stw       r26, 0x1C(r24)
	  b         .loc_0xAC

	.loc_0x94:
	  lwz       r3, -0x77D8(r13)
	  mr        r4, r31
	  li        r5, -0x20
	  bl        0x94E8
	  mr        r26, r3
	  stw       r26, 0x1C(r24)

	.loc_0xAC:
	  stw       r31, 0x20(r24)
	  li        r0, 0x1
	  stb       r0, 0x28(r24)

	.loc_0xB8:
	  cmplwi    r26, 0
	  bne-      .loc_0x114
	  cmplwi    r25, 0
	  bne-      .loc_0xE0
	  lwz       r3, -0x77D4(r13)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0xF4

	.loc_0xE0:
	  mr        r3, r25
	  lwz       r12, 0x0(r25)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0xF4:
	  lis       r3, 0x8047
	  lis       r5, 0x8047
	  addi      r6, r5, 0x35AC
	  li        r4, 0xAC
	  addi      r3, r3, 0x3598
	  subi      r5, r2, 0x7E80
	  crclr     6, 0x6
	  bl        0x10478

	.loc_0x114:
	  cmplwi    r26, 0
	  beq-      .loc_0x1C4
	  lwz       r3, 0x10(r24)
	  mr        r4, r29
	  li        r5, 0
	  bl        0xC528
	  b         .loc_0x19C

	.loc_0x130:
	  cmplw     r30, r31
	  mr        r25, r30
	  ble-      .loc_0x140
	  mr        r25, r31

	.loc_0x140:
	  lwz       r3, 0x10(r24)
	  mr        r4, r26
	  mr        r5, r25
	  bl        0xC1D0
	  cmpwi     r3, 0
	  bne-      .loc_0x160
	  li        r28, 0
	  b         .loc_0x1A4

	.loc_0x160:
	  mr        r4, r26
	  mr        r5, r27
	  mr        r6, r25
	  li        r3, 0
	  li        r7, 0
	  bl        -0x734
	  lwz       r3, 0x18(r24)
	  sub       r30, r30, r25
	  add       r28, r28, r25
	  add       r27, r27, r25
	  cmplwi    r3, 0
	  beq-      .loc_0x19C
	  lwz       r0, 0x0(r3)
	  add       r0, r0, r25
	  stw       r0, 0x0(r3)

	.loc_0x19C:
	  cmplwi    r30, 0
	  bne+      .loc_0x130

	.loc_0x1A4:
	  lbz       r0, 0x28(r24)
	  cmplwi    r0, 0
	  beq-      .loc_0x1C4
	  mr        r3, r26
	  li        r4, 0
	  bl        0x93FC
	  li        r0, 0
	  stb       r0, 0x28(r24)

	.loc_0x1C4:
	  mr        r4, r28
	  addi      r3, r24, 0x30
	  li        r5, 0
	  bl        0xD5294
	  mr        r3, r28
	  lmw       r24, 0x10(r1)
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8001A2A4
 * Size:	00005C
 */
void JSURandomInputStream::getAvailable() const
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  mr        r31, r3
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  sub       r3, r31, r3
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8001A300
 * Size:	0000C8
 */
void JKRAramStream::write_StreamToAram_Async(JSUFileInputStream*, unsigned long,
                                             unsigned long, unsigned long,
                                             unsigned long*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stmw      r26, 0x8(r1)
	  mr        r27, r4
	  mr        r26, r3
	  mr        r28, r5
	  mr        r29, r6
	  mr        r30, r7
	  li        r3, 0x5C
	  li        r5, -0x4
	  lwz       r4, -0x77D8(r13)
	  bl        0x9C10
	  mr.       r31, r3
	  beq-      .loc_0x44
	  bl        0x174
	  mr        r31, r3

	.loc_0x44:
	  li        r0, 0x2
	  li        r3, 0
	  stw       r0, 0x0(r31)
	  cmplwi    r30, 0
	  stw       r27, 0x4(r31)
	  stw       r28, 0x8(r31)
	  stw       r26, 0x10(r31)
	  stw       r3, 0x2C(r31)
	  stw       r29, 0x14(r31)
	  lwz       r0, -0x789C(r13)
	  stw       r0, 0x1C(r31)
	  lwz       r0, -0x7894(r13)
	  stw       r0, 0x24(r31)
	  lwz       r0, -0x7898(r13)
	  stw       r0, 0x20(r31)
	  stw       r30, 0x18(r31)
	  beq-      .loc_0x8C
	  stw       r3, 0x0(r30)

	.loc_0x8C:
	  addi      r3, r31, 0x30
	  addi      r4, r31, 0x50
	  li        r5, 0x1
	  bl        0xD5124
	  lis       r3, 0x804A
	  mr        r4, r31
	  subi      r3, r3, 0x3B8
	  li        r5, 0x1
	  bl        0xD5170
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
 * Address:	8001A3C8
 * Size:	000094
 */
void JKRAramStream::sync(JKRAramStreamCommand*, int)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  cmpwi     r4, 0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  bne-      .loc_0x48
	  addi      r3, r31, 0x30
	  addi      r4, r1, 0x8
	  li        r5, 0x1
	  bl        0xD51F4
	  lwz       r0, 0x8(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x40
	  li        r3, 0
	  b         .loc_0x80

	.loc_0x40:
	  mr        r3, r31
	  b         .loc_0x80

	.loc_0x48:
	  addi      r3, r31, 0x30
	  addi      r4, r1, 0x8
	  li        r5, 0
	  bl        0xD51C8
	  cmpwi     r3, 0
	  bne-      .loc_0x68
	  li        r3, 0
	  b         .loc_0x80

	.loc_0x68:
	  lwz       r0, 0x8(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x7C
	  li        r3, 0
	  b         .loc_0x80

	.loc_0x7C:
	  mr        r3, r31

	.loc_0x80:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8001A45C
 * Size:	000054
 */
void JKRAramStream::setTransBuffer(unsigned char*, unsigned long, JKRHeap*)
{
	/*
	.loc_0x0:
	  lis       r6, 0x1
	  li        r7, 0
	  subi      r0, r6, 0x8000
	  cmplwi    r3, 0
	  stw       r7, -0x789C(r13)
	  stw       r0, -0x7898(r13)
	  stw       r7, -0x7894(r13)
	  beq-      .loc_0x2C
	  addi      r0, r3, 0x1F
	  rlwinm    r0,r0,0,0,26
	  stw       r0, -0x789C(r13)

	.loc_0x2C:
	  cmplwi    r4, 0
	  beq-      .loc_0x3C
	  rlwinm    r0,r4,0,0,26
	  stw       r0, -0x7898(r13)

	.loc_0x3C:
	  cmplwi    r5, 0
	  beqlr-
	  cmplwi    r3, 0
	  bnelr-
	  stw       r5, -0x7894(r13)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8001A4B0
 * Size:	00000C
 */
JKRAramStreamCommand::JKRAramStreamCommand()
{
	// Generated from stb r0, 0x28(r3)
	_28 = 0;
}
