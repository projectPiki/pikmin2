#include "THP/THPVideoDecode.h"
#include "types.h"

/*
 * --INFO--
 * Address:	8044F8B4
 * Size:	0000D8
 */
BOOL CreateVideoDecodeThread(int priority, void* taskMaybe)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  cmplwi    r4, 0
	  lis       r5, 0x8050
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  addi      r31, r5, 0x5710
	  beq-      .loc_0x5C
	  lis       r5, 0x8045
	  addi      r6, r31, 0x318
	  subi      r0, r5, 0x53C
	  mr        r8, r3
	  mr        r5, r4
	  addi      r3, r31, 0
	  mr        r4, r0
	  li        r7, 0x1000
	  li        r9, 0x1
	  addi      r6, r6, 0x1000
	  bl        -0x35D930
	  cmpwi     r3, 0
	  bne-      .loc_0x94
	  li        r3, 0
	  b         .loc_0xC4

	.loc_0x5C:
	  lis       r4, 0x8045
	  addi      r6, r31, 0x318
	  mr        r8, r3
	  addi      r3, r31, 0
	  subi      r4, r4, 0x604
	  li        r5, 0
	  li        r7, 0x1000
	  li        r9, 0x1
	  addi      r6, r6, 0x1000
	  bl        -0x35D968
	  cmpwi     r3, 0
	  bne-      .loc_0x94
	  li        r3, 0
	  b         .loc_0xC4

	.loc_0x94:
	  addi      r3, r31, 0x1318
	  addi      r4, r31, 0x1358
	  li        r5, 0x3
	  bl        -0x360498
	  addi      r3, r31, 0x1338
	  addi      r4, r31, 0x1364
	  li        r5, 0x3
	  bl        -0x3604A8
	  li        r0, 0x1
	  li        r3, 0x1
	  stw       r0, -0x63A8(r13)
	  stw       r0, -0x63A4(r13)

	.loc_0xC4:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8044F98C
 * Size:	000034
 */
void VideoDecodeThreadStart(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r0, -0x63A8(r13)
	  cmpwi     r0, 0
	  beq-      .loc_0x24
	  lis       r3, 0x8050
	  addi      r3, r3, 0x5710
	  bl        -0x35D4B8

	.loc_0x24:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8044F9C0
 * Size:	00003C
 */
void VideoDecodeThreadCancel(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r0, -0x63A8(r13)
	  cmpwi     r0, 0
	  beq-      .loc_0x2C
	  lis       r3, 0x8050
	  addi      r3, r3, 0x5710
	  bl        -0x35D748
	  li        r0, 0
	  stw       r0, -0x63A8(r13)

	.loc_0x2C:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8044F9FC
 * Size:	0000C8
 */
void VideoDecoder(void*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r3, 0x8051
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  addi      r31, r3, 0x4490
	  stw       r30, 0x8(r1)

	.loc_0x1C:
	  lbz       r0, 0xA7(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x94
	  b         .loc_0x88

	.loc_0x2C:
	  bl        -0x1D8
	  lwz       r4, 0xC0(r31)
	  mr        r30, r3
	  lwz       r5, 0x4(r3)
	  lwz       r6, 0x50(r31)
	  add       r5, r5, r4
	  divwu     r4, r5, r6
	  subi      r0, r6, 0x1
	  mullw     r4, r4, r6
	  sub       r4, r5, r4
	  cmplw     r4, r0
	  bne-      .loc_0x6C
	  lbz       r0, 0xA6(r31)
	  rlwinm.   r0,r0,0,31,31
	  bne-      .loc_0x6C
	  bl        0x194

	.loc_0x6C:
	  mr        r3, r30
	  bl        -0x24C
	  bl        -0x360E38
	  lwz       r4, 0xD8(r31)
	  addi      r0, r4, 0x1
	  stw       r0, 0xD8(r31)
	  bl        -0x360E20

	.loc_0x88:
	  lwz       r0, 0xD8(r31)
	  cmpwi     r0, 0
	  blt+      .loc_0x2C

	.loc_0x94:
	  lbz       r0, 0xA7(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0xAC
	  bl        -0x24C
	  mr        r30, r3
	  b         .loc_0xB4

	.loc_0xAC:
	  bl        -0x320
	  mr        r30, r3

	.loc_0xB4:
	  mr        r3, r30
	  bl        0x144
	  mr        r3, r30
	  bl        -0x29C
	  b         .loc_0x1C
	*/
}

/*
 * --INFO--
 * Address:	8044FAC4
 * Size:	000134
 */
void VideoDecoderForOnMemory(void*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  lis       r4, 0x8051
	  stw       r0, 0x34(r1)
	  stw       r31, 0x2C(r1)
	  addi      r31, r4, 0x4490
	  stw       r30, 0x28(r1)
	  stw       r29, 0x24(r1)
	  li        r29, 0
	  stw       r3, 0x8(r1)
	  lwz       r30, 0xBC(r31)

	.loc_0x2C:
	  lbz       r0, 0xA7(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0xB8
	  b         .loc_0xAC

	.loc_0x3C:
	  bl        -0x360EC8
	  lwz       r4, 0xD8(r31)
	  addi      r0, r4, 0x1
	  stw       r0, 0xD8(r31)
	  bl        -0x360EB0
	  lwz       r0, 0xC0(r31)
	  lwz       r5, 0x50(r31)
	  add       r4, r29, r0
	  divwu     r3, r4, r5
	  subi      r0, r5, 0x1
	  mullw     r3, r3, r5
	  sub       r3, r4, r3
	  cmplw     r3, r0
	  bne-      .loc_0x94
	  lbz       r0, 0xA6(r31)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0xB8
	  lwz       r3, 0x8(r1)
	  lwz       r0, 0xB4(r31)
	  lwz       r30, 0x0(r3)
	  stw       r0, 0x8(r1)
	  b         .loc_0xA8

	.loc_0x94:
	  lwz       r3, 0x8(r1)
	  lwz       r4, 0x0(r3)
	  add       r0, r3, r30
	  stw       r0, 0x8(r1)
	  mr        r30, r4

	.loc_0xA8:
	  addi      r29, r29, 0x1

	.loc_0xAC:
	  lwz       r0, 0xD8(r31)
	  cmpwi     r0, 0
	  blt+      .loc_0x3C

	.loc_0xB8:
	  stw       r29, 0xC(r1)
	  addi      r3, r1, 0x8
	  bl        .loc_0x134
	  lwz       r0, 0xC0(r31)
	  lwz       r5, 0x50(r31)
	  add       r4, r29, r0
	  divwu     r3, r4, r5
	  subi      r0, r5, 0x1
	  mullw     r3, r3, r5
	  sub       r3, r4, r3
	  cmplw     r3, r0
	  bne-      .loc_0x118
	  lbz       r0, 0xA6(r31)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0x108
	  lwz       r3, 0x8(r1)
	  lwz       r0, 0xB4(r31)
	  lwz       r30, 0x0(r3)
	  stw       r0, 0x8(r1)
	  b         .loc_0x12C

	.loc_0x108:
	  lis       r3, 0x8050
	  addi      r3, r3, 0x5710
	  bl        -0x35D458
	  b         .loc_0x12C

	.loc_0x118:
	  lwz       r3, 0x8(r1)
	  lwz       r4, 0x0(r3)
	  add       r0, r3, r30
	  stw       r0, 0x8(r1)
	  mr        r30, r4

	.loc_0x12C:
	  addi      r29, r29, 0x1
	  b         .loc_0x2C

	.loc_0x134:
	*/
}

/*
 * --INFO--
 * Address:	8044FBF8
 * Size:	000120
 */
void VideoDecode(THPReadBuffer* buffer)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  lis       r4, 0x8051
	  stw       r0, 0x34(r1)
	  stmw      r24, 0x10(r1)
	  addi      r31, r4, 0x4490
	  mr        r27, r3
	  lwz       r0, 0x6C(r31)
	  lwz       r4, 0x0(r3)
	  rlwinm    r3,r0,2,0,29
	  addi      r28, r3, 0x8
	  addi      r29, r4, 0x8
	  add       r28, r4, r28
	  bl        .loc_0x120
	  lis       r4, 0x8051
	  li        r30, 0
	  addi      r26, r4, 0x4490
	  mr        r24, r3
	  mr        r25, r26
	  b         .loc_0xE4

	.loc_0x50:
	  lbz       r0, 0x70(r25)
	  cmpwi     r0, 0
	  beq-      .loc_0x60
	  b         .loc_0xD0

	.loc_0x60:
	  lwz       r4, 0x0(r24)
	  mr        r3, r28
	  lwz       r5, 0x4(r24)
	  lwz       r6, 0x8(r24)
	  lwz       r7, 0x9C(r26)
	  bl        -0x358B24
	  cmpwi     r3, 0
	  stw       r3, 0xAC(r26)
	  beq-      .loc_0xAC
	  lwz       r0, -0x63A4(r13)
	  cmpwi     r0, 0
	  beq-      .loc_0xA0
	  li        r3, 0
	  bl        -0x1658
	  li        r0, 0
	  stw       r0, -0x63A4(r13)

	.loc_0xA0:
	  lis       r3, 0x8050
	  addi      r3, r3, 0x5710
	  bl        -0x35D524

	.loc_0xAC:
	  lwz       r0, 0x4(r27)
	  mr        r3, r24
	  stw       r0, 0xC(r24)
	  bl        0x110
	  bl        -0x36107C
	  lwz       r4, 0xD8(r26)
	  addi      r0, r4, 0x1
	  stw       r0, 0xD8(r26)
	  bl        -0x361064

	.loc_0xD0:
	  lwz       r0, 0x0(r29)
	  addi      r29, r29, 0x4
	  addi      r25, r25, 0x1
	  addi      r30, r30, 0x1
	  add       r28, r28, r0

	.loc_0xE4:
	  lwz       r0, 0x6C(r31)
	  cmplw     r30, r0
	  blt+      .loc_0x50
	  lwz       r0, -0x63A4(r13)
	  cmpwi     r0, 0
	  beq-      .loc_0x10C
	  li        r3, 0x1
	  bl        -0x16C4
	  li        r0, 0
	  stw       r0, -0x63A4(r13)

	.loc_0x10C:
	  lmw       r24, 0x10(r1)
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr

	.loc_0x120:
	*/
}

/*
 * --INFO--
 * Address:	8044FD18
 * Size:	000034
 */
OSMessage PopFreeTextureSet()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r3, 0x8050
	  li        r5, 0x1
	  stw       r0, 0x14(r1)
	  addi      r4, r1, 0x8
	  addi      r3, r3, 0x6A28
	  bl        -0x360750
	  lwz       r0, 0x14(r1)
	  lwz       r3, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8044FD4C
 * Size:	000030
 */
BOOL PushFreeTextureSet(OSMessage* msg)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r5, 0x8050
	  mr        r4, r3
	  stw       r0, 0x14(r1)
	  addi      r3, r5, 0x6A28
	  li        r5, 0
	  bl        -0x36084C
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8044FD7C
 * Size:	000044
 */
OSMessage PopDecodedTextureSet()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r4, 0x8050
	  mr        r5, r3
	  stw       r0, 0x14(r1)
	  addi      r3, r4, 0x6A48
	  addi      r4, r1, 0x8
	  bl        -0x3607B4
	  cmpwi     r3, 0x1
	  bne-      .loc_0x30
	  lwz       r3, 0x8(r1)
	  b         .loc_0x34

	.loc_0x30:
	  li        r3, 0

	.loc_0x34:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8044FDC0
 * Size:	000030
 */
BOOL PushDecodedTextureSet(OSMessage* msg)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r5, 0x8050
	  mr        r4, r3
	  stw       r0, 0x14(r1)
	  addi      r3, r5, 0x6A48
	  li        r5, 0x1
	  bl        -0x3608C0
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}
