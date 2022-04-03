#include "JSystem/JKR/Aram.h"
#include "JSystem/JSU/JSUStream.h"
#include "Dolphin/os.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .balign 8
    lbl_80473598:
        .asciz "JKRAramStream.cpp"
    .balign 4
    lbl_804735AC:
        .asciz ":::Cannot alloc memory\n"

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .balign 8
    .global sMessageBuffer__13JKRAramStream
    sMessageBuffer__13JKRAramStream:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
    .global sMessageQueue__13JKRAramStream
    sMessageQueue__13JKRAramStream:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
    .global __vt__13JKRAramStream
    __vt__13JKRAramStream:
        .4byte 0
        .4byte 0
        .4byte __dt__13JKRAramStreamFv
        .4byte run__13JKRAramStreamFv

    .section .sbss # 0x80514D80 - 0x80516360
    .balign 8
    .global sAramStreamObject__13JKRAramStream
    sAramStreamObject__13JKRAramStream:
        .skip 0x4
    .global transBuffer__13JKRAramStream
    transBuffer__13JKRAramStream:
        .skip 0x4
    .global transSize__13JKRAramStream
    transSize__13JKRAramStream:
        .skip 0x4
    .global transHeap__13JKRAramStream
    transHeap__13JKRAramStream:
        .skip 0x4

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .balign 8
    lbl_805164E0:
        .asciz "%s"
*/

/*
 * --INFO--
 * Address:	80019F20
 * Size:	000070
 */
JKRHeap* sSystemHeap;

JKRAramStream* JKRAramStream::create(s32 param)
{
	if (JKRAramStream::sAramStreamObject == nullptr) {
		JKRAramStream::sAramStreamObject = new (JKRHeap::sSystemHeap, 0) JKRAramStream(param);
		setTransBuffer(nullptr, 0, nullptr);
	}
	return JKRAramStream::sAramStreamObject;
}

/*
 * --INFO--
 * Address:	80019F90
 * Size:	000050
 */
JKRAramStream::JKRAramStream(s32 priority)
    : JKRThread(0x4000, 0x10, priority)
{
	OSResumeThread(m_thread);
}

/*
 * --INFO--
 * Address:	80019FE0
 * Size:	000060
 */
JKRAramStream::~JKRAramStream() {};

/*
 * --INFO--
 * Address:	8001A040
 * Size:	000070
 */
void JKRAramStream::run(void)
{
	OSMessage result;
	OSInitMessageQueue(&JKRAramStream::sMessageQueue, JKRAramStream::sMessageBuffer, 4);
	while (true) {
		OSReceiveMessage(&JKRAramStream::sMessageQueue, &result, true);
		JKRAramStreamCommand* command = static_cast<JKRAramStreamCommand*>(result.message);
		switch (command->type) {
		case ECT_One:
			readFromAram();
			break;
		case ECT_Two:
			writeToAram(command);
			break;
		}
	}
}

/*
 * --INFO--
 * Address:	8001A0B0
 * Size:	000008
 */
u32 JKRAramStream::readFromAram() { return 1; }

/*
 * --INFO--
 * Address:	8001A0B8
 * Size:	0001EC
 */
void JKRAramStream::writeToAram(JKRAramStreamCommand*)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stmw     r24, 0x10(r1)
	mr       r24, r3
	li       r28, 0
	lwz      r26, 0x1c(r3)
	lwz      r30, 8(r3)
	cmplwi   r26, 0
	lwz      r29, 0x14(r3)
	lwz      r27, 4(r3)
	lwz      r0, 0x20(r3)
	lwz      r25, 0x24(r3)
	beq      lbl_8001A114
	cmplwi   r0, 0
	lis      r3, 0x00008000@ha
	addi     r31, r3, 0x00008000@l
	beq      lbl_8001A104
	mr       r31, r0

lbl_8001A104:
	stw      r31, 0x20(r24)
	li       r0, 0
	stb      r0, 0x28(r24)
	b        lbl_8001A170

lbl_8001A114:
	cmplwi   r0, 0
	lis      r3, 0x00008000@ha
	addi     r31, r3, 0x00008000@l
	beq      lbl_8001A128
	mr       r31, r0

lbl_8001A128:
	cmplwi   r25, 0
	beq      lbl_8001A14C
	mr       r3, r31
	mr       r5, r25
	li       r4, -32
	bl       alloc__7JKRHeapFUliP7JKRHeap
	mr       r26, r3
	stw      r26, 0x1c(r24)
	b        lbl_8001A164

lbl_8001A14C:
	lwz      r3, sSystemHeap__7JKRHeap@sda21(r13)
	mr       r4, r31
	li       r5, -32
	bl       alloc__7JKRHeapFUli
	mr       r26, r3
	stw      r26, 0x1c(r24)

lbl_8001A164:
	stw      r31, 0x20(r24)
	li       r0, 1
	stb      r0, 0x28(r24)

lbl_8001A170:
	cmplwi   r26, 0
	bne      lbl_8001A1CC
	cmplwi   r25, 0
	bne      lbl_8001A198
	lwz      r3, sCurrentHeap__7JKRHeap@sda21(r13)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_8001A1AC

lbl_8001A198:
	mr       r3, r25
	lwz      r12, 0(r25)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_8001A1AC:
	lis      r3, lbl_80473598@ha
	lis      r5, lbl_804735AC@ha
	addi     r6, r5, lbl_804735AC@l
	li       r4, 0xac
	addi     r3, r3, lbl_80473598@l
	addi     r5, r2, lbl_805164E0@sda21
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8001A1CC:
	cmplwi   r26, 0
	beq      lbl_8001A27C
	lwz      r3, 0x10(r24)
	mr       r4, r29
	li       r5, 0
	bl       seek__20JSURandomInputStreamFl17JSUStreamSeekFrom
	b        lbl_8001A254

lbl_8001A1E8:
	cmplw    r30, r31
	mr       r25, r30
	ble      lbl_8001A1F8
	mr       r25, r31

lbl_8001A1F8:
	lwz      r3, 0x10(r24)
	mr       r4, r26
	mr       r5, r25
	bl       read__14JSUInputStreamFPvl
	cmpwi    r3, 0
	bne      lbl_8001A218
	li       r28, 0
	b        lbl_8001A25C

lbl_8001A218:
	mr       r4, r26
	mr       r5, r27
	mr       r6, r25
	li       r3, 0
	li       r7, 0
	bl       orderSync__12JKRAramPieceFiUlUlUlP12JKRAramBlock
	lwz      r3, 0x18(r24)
	subf     r30, r25, r30
	add      r28, r28, r25
	add      r27, r27, r25
	cmplwi   r3, 0
	beq      lbl_8001A254
	lwz      r0, 0(r3)
	add      r0, r0, r25
	stw      r0, 0(r3)

lbl_8001A254:
	cmplwi   r30, 0
	bne      lbl_8001A1E8

lbl_8001A25C:
	lbz      r0, 0x28(r24)
	cmplwi   r0, 0
	beq      lbl_8001A27C
	mr       r3, r26
	li       r4, 0
	bl       free__7JKRHeapFPvP7JKRHeap
	li       r0, 0
	stb      r0, 0x28(r24)

lbl_8001A27C:
	mr       r4, r28
	addi     r3, r24, 0x30
	li       r5, 0
	bl       OSSendMessage
	mr       r3, r28
	lmw      r24, 0x10(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	8001A2A4
 * Size:	00005C
 * void JSURandomInputStream::getAvailable() const
 * Weak function, lives in JSUStream.h
 */

/*
 * --INFO--
 * Address:	8001A300
 * Size:	0000C8
 */
void JKRAramStream::write_StreamToAram_Async(JSUFileInputStream*, unsigned long, unsigned long, unsigned long, unsigned long*)
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
	stwu     r1, -0x20(r1)
	mflr     r0
	cmpwi    r4, 0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	bne      lbl_8001A410
	addi     r3, r31, 0x30
	addi     r4, r1, 8
	li       r5, 1
	bl       OSReceiveMessage
	lwz      r0, 8(r1)
	cmplwi   r0, 0
	bne      lbl_8001A408
	li       r3, 0
	b        lbl_8001A448

lbl_8001A408:
	mr       r3, r31
	b        lbl_8001A448

lbl_8001A410:
	addi     r3, r31, 0x30
	addi     r4, r1, 8
	li       r5, 0
	bl       OSReceiveMessage
	cmpwi    r3, 0
	bne      lbl_8001A430
	li       r3, 0
	b        lbl_8001A448

lbl_8001A430:
	lwz      r0, 8(r1)
	cmplwi   r0, 0
	bne      lbl_8001A444
	li       r3, 0
	b        lbl_8001A448

lbl_8001A444:
	mr       r3, r31

lbl_8001A448:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
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
	lis      r6, 0x00008000@ha
	li       r7, 0
	addi     r0, r6, 0x00008000@l
	cmplwi   r3, 0
	stw      r7, transBuffer__13JKRAramStream@sda21(r13)
	stw      r0, transSize__13JKRAramStream@sda21(r13)
	stw      r7, transHeap__13JKRAramStream@sda21(r13)
	beq      lbl_8001A488
	addi     r0, r3, 0x1f
	rlwinm   r0, r0, 0, 0, 0x1a
	stw      r0, transBuffer__13JKRAramStream@sda21(r13)

lbl_8001A488:
	cmplwi   r4, 0
	beq      lbl_8001A498
	rlwinm   r0, r4, 0, 0, 0x1a
	stw      r0, transSize__13JKRAramStream@sda21(r13)

lbl_8001A498:
	cmplwi   r5, 0
	beqlr
	cmplwi   r3, 0
	bnelr
	stw      r5, transHeap__13JKRAramStream@sda21(r13)
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
