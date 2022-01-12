#include "THP/THPRead.h"
#include "THP/THPVideoDecode.h"
#include "Dolphin/os.h"
#include "types.h"

/*
 * --INFO--
 * Address:	8044F58C
 * Size:	0000A0
 */
BOOL CreateReadThread(int priority)
{
	BOOL created = OSCreateThread(&ReadThread, Reader, nullptr, &VideoDecodeThread, 0x1000, priority, 1);
	if (created) {
		OSInitMessageQueue(&FreeReadBufferQueue, &FreeReadBufferMessage, 10);
		OSInitMessageQueue(&ReadedBufferQueue, &ReadedBufferMessage, 10);
		OSInitMessageQueue(&ReadedBufferQueue2, &ReadedBufferMessage2, 10);
		ReadThreadCreated = TRUE;
	}
	return created != FALSE;

	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r4, 0x8045
	  lis       r5, 0x8050
	  stw       r0, 0x14(r1)
	  subi      r4, r4, 0x964
	  mr        r8, r3
	  li        r7, 0x1000
	  stw       r31, 0xC(r1)
	  addi      r31, r5, 0x4320
	  addi      r6, r31, 0x3F0
	  li        r5, 0
	  addi      r3, r31, 0xD8
	  li        r9, 0x1
	  addi      r6, r6, 0x1000
	  bl        -0x35D5FC
	  cmpwi     r3, 0
	  bne-      .loc_0x50
	  li        r3, 0
	  b         .loc_0x8C

	.loc_0x50:
	  addi      r3, r31, 0
	  addi      r4, r31, 0x60
	  li        r5, 0xA
	  bl        -0x36012C
	  addi      r3, r31, 0x20
	  addi      r4, r31, 0x88
	  li        r5, 0xA
	  bl        -0x36013C
	  addi      r3, r31, 0x40
	  addi      r4, r31, 0xB0
	  li        r5, 0xA
	  bl        -0x36014C
	  li        r0, 0x1
	  li        r3, 0x1
	  stw       r0, -0x63AC(r13)

	.loc_0x8C:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8044F62C
 * Size:	000034
 */
void ReadThreadStart()
{
	if (ReadThreadCreated != FALSE) {
		OSResumeThread(&ReadThread);
	}
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r0, -0x63AC(r13)
	  cmpwi     r0, 0
	  beq-      .loc_0x24
	  lis       r3, 0x8050
	  addi      r3, r3, 0x43F8
	  bl        -0x35D158

	.loc_0x24:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8044F660
 * Size:	00003C
 */
void ReadThreadCancel()
{
	if (ReadThreadCreated != FALSE) {
		OSCancelThread(&ReadThread);
		ReadThreadCreated = FALSE;
	}
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r0, -0x63AC(r13)
	  cmpwi     r0, 0
	  beq-      .loc_0x2C
	  lis       r3, 0x8050
	  addi      r3, r3, 0x43F8
	  bl        -0x35D3E8
	  li        r0, 0
	  stw       r0, -0x63AC(r13)

	.loc_0x2C:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8044F69C
 * Size:	0000EC
 */
void Reader(void*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r3, 0x8051
	  stw       r0, 0x24(r1)
	  stmw      r27, 0xC(r1)
	  addi      r31, r3, 0x4490
	  li        r28, 0
	  lwz       r30, 0xB8(r31)
	  lwz       r29, 0xBC(r31)

	.loc_0x24:
	  bl        0x12C
	  li        r0, 0x1
	  mr        r27, r3
	  stb       r0, -0x63B0(r13)
	  mr        r3, r31
	  mr        r5, r29
	  mr        r6, r30
	  lwz       r4, 0x0(r27)
	  li        r7, 0x2
	  bl        -0x372C64
	  li        r0, 0
	  cmpw      r3, r29
	  stb       r0, -0x63B0(r13)
	  beq-      .loc_0x88
	  cmpwi     r3, -0x1
	  bne-      .loc_0x6C
	  li        r0, -0x1
	  stw       r0, 0xA8(r31)

	.loc_0x6C:
	  cmpwi     r28, 0
	  bne-      .loc_0x7C
	  li        r3, 0
	  bl        -0x10E0

	.loc_0x7C:
	  lis       r3, 0x8050
	  addi      r3, r3, 0x43F8
	  bl        -0x35CFA4

	.loc_0x88:
	  stw       r28, 0x4(r27)
	  mr        r3, r27
	  bl        0x90
	  lwz       r0, 0xC0(r31)
	  add       r30, r30, r29
	  lwz       r6, 0x50(r31)
	  add       r4, r28, r0
	  lwz       r5, 0x0(r27)
	  divwu     r3, r4, r6
	  subi      r0, r6, 0x1
	  lwz       r29, 0x0(r5)
	  mullw     r3, r3, r6
	  sub       r3, r4, r3
	  cmplw     r3, r0
	  bne-      .loc_0xE4
	  lbz       r0, 0xA6(r31)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0xD8
	  lwz       r30, 0x64(r31)
	  b         .loc_0xE4

	.loc_0xD8:
	  lis       r3, 0x8050
	  addi      r3, r3, 0x43F8
	  bl        -0x35D000

	.loc_0xE4:
	  addi      r28, r28, 0x1
	  b         .loc_0x24
	*/
}

/*
 * --INFO--
 * Address:	8044F788
 * Size:	000034
 */
OSMessage PopReadedBuffer()
{
	OSMessage msg;
	OSReceiveMessage(&ReadedBufferQueue, msg, MSG_QUEUE_SHOULD_BLOCK);
	return msg;
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r3, 0x8050
	  li        r5, 0x1
	  stw       r0, 0x14(r1)
	  addi      r4, r1, 0x8
	  addi      r3, r3, 0x4340
	  bl        -0x3601C0
	  lwz       r0, 0x14(r1)
	  lwz       r3, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8044F7BC
 * Size:	000030
 */
BOOL PushReadedBuffer(OSMessage* msg)
{
	return OSSendMessage(&ReadedBufferQueue, msg, MSG_QUEUE_SHOULD_BLOCK);
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r5, 0x8050
	  mr        r4, r3
	  stw       r0, 0x14(r1)
	  addi      r3, r5, 0x4340
	  li        r5, 0x1
	  bl        -0x3602BC
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8044F7EC
 * Size:	000034
 */
OSMessage PopFreeReadBuffer()
{
	OSMessage msg;
	OSReceiveMessage(&FreeReadBufferQueue, msg, MSG_QUEUE_SHOULD_BLOCK);
	return msg;
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r3, 0x8050
	  li        r5, 0x1
	  stw       r0, 0x14(r1)
	  addi      r4, r1, 0x8
	  addi      r3, r3, 0x4320
	  bl        -0x360224
	  lwz       r0, 0x14(r1)
	  lwz       r3, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8044F820
 * Size:	000030
 */
BOOL PushFreeReadBuffer(OSMessage*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r5, 0x8050
	  mr        r4, r3
	  stw       r0, 0x14(r1)
	  addi      r3, r5, 0x4320
	  li        r5, 0x1
	  bl        -0x360320
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8044F850
 * Size:	000034
 */
OSMessage PopReadedBuffer2()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r3, 0x8050
	  li        r5, 0x1
	  stw       r0, 0x14(r1)
	  addi      r4, r1, 0x8
	  addi      r3, r3, 0x4360
	  bl        -0x360288
	  lwz       r0, 0x14(r1)
	  lwz       r3, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8044F884
 * Size:	000030
 */
BOOL PushReadedBuffer2(OSMessage*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r5, 0x8050
	  mr        r4, r3
	  stw       r0, 0x14(r1)
	  addi      r3, r5, 0x4360
	  li        r5, 0x1
	  bl        -0x360384
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}
