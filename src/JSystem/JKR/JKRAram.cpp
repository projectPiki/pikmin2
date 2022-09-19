#include "Dolphin/os.h"
#include "JSystem/JKR/Aram.h"
#include "JSystem/JKR/JKRDecomp.h"
#include "JSystem/JKR/JKRHeap.h"
#include "JSystem/JKR/JKRThread.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .ctors, "wa"  # 0x80472F00 - 0x804732C0
    .4byte __sinit_JKRAram_cpp

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_80473480
    lbl_80473480:
        .4byte 0x4A4B5241
        .4byte 0x72616D2E
        .4byte 0x63707000
    .global lbl_8047348C
    lbl_8047348C:
        .4byte 0x3A3A3A61
        .4byte 0x64647265
        .4byte 0x7373206E
        .4byte 0x6F742033
        .4byte 0x32427974
        .4byte 0x6520616C
        .4byte 0x69676E65
        .4byte 0x642E0000
        .4byte 0x3A3A3A42
        .4byte 0x61642041
        .4byte 0x72616D20
        .4byte 0x426C6F63
        .4byte 0x6B207370
        .4byte 0x65636966
        .4byte 0x6965642E
        .4byte 0x0A000000
        .4byte 0x2D2D2D2D
        .4byte 0x2D2D2D2D
        .4byte 0x2D2D2D2D
        .4byte 0x2D2D2D2D
        .4byte 0x20424144
        .4byte 0x2053594E
        .4byte 0x432E2079
        .4byte 0x6F752764
        .4byte 0x20736574
        .4byte 0x2063616C
        .4byte 0x6C626163
        .4byte 0x6B2C2062
        .4byte 0x7574206E
        .4byte 0x6F772063
        .4byte 0x616C6C20
        .4byte 0x73796E63
        .4byte 0x2E0A0000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global sMessageBuffer__7JKRAram
    sMessageBuffer__7JKRAram:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
    .global sMessageQueue__7JKRAram
    sMessageQueue__7JKRAram:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
    .global __vt__7JKRAram
    __vt__7JKRAram:
        .4byte 0
        .4byte 0
        .4byte __dt__7JKRAramFv
        .4byte run__7JKRAramFv

    .section .bss  # 0x804EFC20 - 0x8051467C
    .global sAramCommandList__7JKRAram
    sAramCommandList__7JKRAram:
        .skip 0xC

    .section .sdata, "wa"  # 0x80514680 - 0x80514D80
    .global sSZSBufferSize__7JKRAram
    sSZSBufferSize__7JKRAram:
        .4byte 0x00000400

    .section .sbss # 0x80514D80 - 0x80516360
    .global sAramObject__7JKRAram
    sAramObject__7JKRAram:
        .skip 0x4
    .global szpBuf
    szpBuf:
        .skip 0x4
    .global szpEnd
    szpEnd:
        .skip 0x4
    .global refBuf
    refBuf:
        .skip 0x4
    .global refEnd
    refEnd:
        .skip 0x4
    .global refCurrent
    refCurrent:
        .skip 0x4
    .global srcOffset
    srcOffset:
        .skip 0x4
    .global transLeft
    transLeft:
        .skip 0x4
    .global srcLimit
    srcLimit:
        .skip 0x4
    .global srcAddress
    srcAddress:
        .skip 0x4
    .global fileOffset
    fileOffset:
        .skip 0x4
    .global readCount
    readCount:
        .skip 0x4
    .global maxDest
    maxDest:
        .skip 0x4
    .global isInitMutex
    isInitMutex:
        .skip 0x4
    .global tsPtr
    tsPtr:
        .skip 0x4
    .global tsArea
    tsArea:
        .skip 0x4

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_805164D0
    lbl_805164D0:
        .4byte 0x25730000
        .4byte 0x00000000
*/

/*
 * --INFO--
 * Address:	80017A10
 * Size:	000094
 */
JKRAram* JKRAram::create(u32 p1, u32 p2, long p3, long p4, long p5)
{
	if (!sAramObject) {
		sAramObject = new (JKRHeap::sSystemHeap, 0) JKRAram(p1, p2, p5);
	}
	JKRAramStream::create(p3);
	JKRDecomp::create(p4);
	OSResumeThread(sAramObject->m_thread);
	return sAramObject;
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stmw     r27, 0xc(r1)
	mr       r27, r3
	mr       r28, r4
	mr       r29, r5
	mr       r30, r6
	mr       r31, r7
	lwz      r0, sAramObject__7JKRAram@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_80017A70
	lwz      r4, sSystemHeap__7JKRHeap@sda21(r13)
	li       r3, 0xa4
	li       r5, 0
	bl       __nw__FUlP7JKRHeapi
	or.      r0, r3, r3
	beq      lbl_80017A6C
	mr       r4, r27
	mr       r5, r28
	mr       r6, r31
	bl       __ct__7JKRAramFUlUll
	mr       r0, r3

lbl_80017A6C:
	stw      r0, sAramObject__7JKRAram@sda21(r13)

lbl_80017A70:
	mr       r3, r29
	bl       create__13JKRAramStreamFl
	mr       r3, r30
	bl       create__9JKRDecompFl
	lwz      r3, sAramObject__7JKRAram@sda21(r13)
	lwz      r3, 0x2c(r3)
	bl       OSResumeThread
	lmw      r27, 0xc(r1)
	lwz      r0, 0x24(r1)
	lwz      r3, sAramObject__7JKRAram@sda21(r13)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80017AA4
 * Size:	00011C
 */
JKRAram::JKRAram(u32 p1, u32 p2, long threadPriority)
    : JKRThread(0x4000, 0x10, threadPriority)
{
	void* arStackPointer = ARInit(&m_blockLength, 3);
	ARQInit();
	u32 size = ARGetSize();
	_80      = p1;
	if (p2 == 0xFFFFFFFF) {
		_88 = (size - p1) - (s32)arStackPointer;
		_90 = 0;
	} else {
		_88 = p2;
		_90 = (size - (p1 + p2)) - (s32)arStackPointer;
	}
	_7C = ARAlloc(_80);
	_84 = ARAlloc(_88);
	if (_90) {
		_8C = ARAlloc(_90);
	} else {
		_8C = 0;
	}
	m_aramHeap = new (JKRHeap::sSystemHeap, 0) JKRAramHeap(_84, _88);
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r5
	li       r5, 0x10
	stw      r29, 0x14(r1)
	mr       r29, r4
	li       r4, 0x4000
	stw      r28, 0x10(r1)
	mr       r28, r3
	bl       __ct__9JKRThreadFUlii
	lis      r4, __vt__7JKRAram@ha
	addi     r3, r28, 0x98
	addi     r0, r4, __vt__7JKRAram@l
	li       r4, 3
	stw      r0, 0(r28)
	bl       ARInit
	mr       r31, r3
	bl       ARQInit
	bl       ARGetSize
	addis    r0, r30, 1
	stw      r29, 0x80(r28)
	cmplwi   r0, 0xffff
	bne      lbl_80017B24
	subf     r3, r29, r3
	li       r0, 0
	subf     r3, r31, r3
	stw      r3, 0x88(r28)
	stw      r0, 0x90(r28)
	b        lbl_80017B38

lbl_80017B24:
	add      r0, r29, r30
	stw      r30, 0x88(r28)
	subf     r0, r0, r3
	subf     r0, r31, r0
	stw      r0, 0x90(r28)

lbl_80017B38:
	lwz      r3, 0x80(r28)
	bl       ARAlloc
	stw      r3, 0x7c(r28)
	lwz      r3, 0x88(r28)
	bl       ARAlloc
	stw      r3, 0x84(r28)
	lwz      r3, 0x90(r28)
	cmplwi   r3, 0
	beq      lbl_80017B68
	bl       ARAlloc
	stw      r3, 0x8c(r28)
	b        lbl_80017B70

lbl_80017B68:
	li       r0, 0
	stw      r0, 0x8c(r28)

lbl_80017B70:
	lwz      r4, sSystemHeap__7JKRHeap@sda21(r13)
	li       r3, 0x44
	li       r5, 0
	bl       __nw__FUlP7JKRHeapi
	or.      r0, r3, r3
	beq      lbl_80017B98
	lwz      r4, 0x84(r28)
	lwz      r5, 0x88(r28)
	bl       __ct__11JKRAramHeapFUlUl
	mr       r0, r3

lbl_80017B98:
	stw      r0, 0x94(r28)
	mr       r3, r28
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r28, 0x10(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80017BC0
 * Size:	000090
 */
JKRAram::~JKRAram()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_80017C34
	lis      r3, __vt__7JKRAram@ha
	li       r0, 0
	addi     r3, r3, __vt__7JKRAram@l
	stw      r3, 0(r30)
	stw      r0, sAramObject__7JKRAram@sda21(r13)
	lwz      r3, 0x94(r30)
	cmplwi   r3, 0
	beq      lbl_80017C18
	beq      lbl_80017C18
	lwz      r12, 0(r3)
	li       r4, 1
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl

lbl_80017C18:
	mr       r3, r30
	li       r4, 0
	bl       __dt__9JKRThreadFv
	extsh.   r0, r31
	ble      lbl_80017C34
	mr       r3, r30
	bl       __dl__FPv

lbl_80017C34:
	lwz      r0, 0x14(r1)
	mr       r3, r30
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80017C50
 * Size:	000070
 */
u32 JKRAram::run()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r3, sMessageQueue__7JKRAram@ha
	lis      r4, sMessageBuffer__7JKRAram@ha
	stw      r0, 0x24(r1)
	addi     r3, r3, sMessageQueue__7JKRAram@l
	li       r5, 4
	addi     r4, r4, sMessageBuffer__7JKRAram@l
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	bl       OSInitMessageQueue
	lis      r3, sMessageQueue__7JKRAram@ha
	addi     r31, r3, sMessageQueue__7JKRAram@l

lbl_80017C88:
	mr       r3, r31
	addi     r4, r1, 8
	li       r5, 1
	bl       OSReceiveMessage
	lwz      r3, 8(r1)
	lwz      r30, 0(r3)
	lwz      r29, 4(r3)
	bl       __dl__FPv
	cmpwi    r30, 1
	beq      lbl_80017CB4
	b        lbl_80017C88

lbl_80017CB4:
	mr       r3, r29
	bl       startDMA__12JKRAramPieceFP12JKRAMCommand
	b        lbl_80017C88
	*/
}

/*
 * --INFO--
 * Address:	80017CC0
 * Size:	00028C
 */
JKRAramBlock* JKRAram::mainRamToAram(unsigned char*, unsigned long, unsigned long, JKRExpandSwitch, unsigned long, JKRHeap*, int,
                                     unsigned long*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  rlwinm.   r0,r3,0,27,31
	  stmw      r23, 0xC(r1)
	  mr        r30, r3
	  mr        r24, r4
	  mr        r31, r5
	  mr        r23, r6
	  mr        r25, r7
	  mr        r26, r8
	  mr        r27, r9
	  mr        r28, r10
	  li        r29, 0
	  beq-      .loc_0x64
	  rlwinm.   r0,r24,0,27,31
	  beq-      .loc_0x64
	  lis       r3, 0x8047
	  lis       r5, 0x8047
	  addi      r6, r5, 0x348C
	  li        r4, 0xDB
	  addi      r3, r3, 0x3480
	  subi      r5, r2, 0x7E90
	  crclr     6, 0x6
	  bl        0x12920

	.loc_0x64:
	  cmpwi     r23, 0x1
	  bne-      .loc_0x80
	  mr        r3, r30
	  bl        0x51C0
	  neg       r0, r3
	  or        r0, r0, r3
	  rlwinm    r23,r0,1,31,31

	.loc_0x80:
	  cmpwi     r23, 0x1
	  bne-      .loc_0x1D8
	  lbz       r0, 0x5(r30)
	  cmplwi    r25, 0
	  lbz       r3, 0x4(r30)
	  rlwinm    r0,r0,16,0,15
	  lbz       r4, 0x6(r30)
	  rlwimi    r0,r3,24,0,7
	  lbz       r5, 0x7(r30)
	  rlwimi    r0,r4,8,16,23
	  or        r23, r5, r0
	  beq-      .loc_0xB8
	  cmplw     r25, r23
	  ble-      .loc_0xC0

	.loc_0xB8:
	  addi      r0, r23, 0x1F
	  rlwinm    r25,r0,0,0,26

	.loc_0xC0:
	  cmplwi    r24, 0
	  bne-      .loc_0x114
	  lwz       r3, -0x78E0(r13)
	  mr        r4, r25
	  li        r5, 0
	  lwz       r3, 0x94(r3)
	  bl        0x1AB0
	  cmplwi    r3, 0
	  mr        r29, r3
	  bne-      .loc_0xF0
	  li        r3, 0
	  b         .loc_0x278

	.loc_0xF0:
	  cmpwi     r27, 0
	  bge-      .loc_0x108
	  lwz       r4, -0x78E0(r13)
	  lwz       r4, 0x94(r4)
	  lbz       r0, 0x40(r4)
	  b         .loc_0x10C

	.loc_0x108:
	  rlwinm    r0,r27,0,24,31

	.loc_0x10C:
	  stb       r0, 0x20(r3)
	  lwz       r24, 0x14(r3)

	.loc_0x114:
	  cmplwi    r31, 0
	  beq-      .loc_0x124
	  cmplw     r31, r23
	  ble-      .loc_0x12C

	.loc_0x124:
	  addi      r0, r23, 0x1F
	  rlwinm    r31,r0,0,0,26

	.loc_0x12C:
	  cmplw     r31, r25
	  ble-      .loc_0x138
	  mr        r31, r25

	.loc_0x138:
	  mr        r3, r25
	  mr        r5, r26
	  li        r4, -0x20
	  bl        0xB7DC
	  mr.       r23, r3
	  bne-      .loc_0x17C
	  cmplwi    r29, 0
	  beq-      .loc_0x174
	  beq-      .loc_0x174
	  mr        r3, r29
	  li        r4, 0x1
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl

	.loc_0x174:
	  li        r3, 0
	  b         .loc_0x278

	.loc_0x17C:
	  mr        r3, r30
	  mr        r4, r23
	  mr        r5, r25
	  li        r6, 0
	  bl        0x4CF0
	  mr        r4, r23
	  mr        r5, r24
	  mr        r6, r31
	  mr        r7, r29
	  li        r3, 0
	  bl        0x1C94
	  mr        r3, r23
	  mr        r4, r26
	  bl        0xB7FC
	  cmplwi    r29, 0
	  bne-      .loc_0x1C4
	  li        r3, -0x1
	  b         .loc_0x1C8

	.loc_0x1C4:
	  mr        r3, r29

	.loc_0x1C8:
	  cmplwi    r28, 0
	  beq-      .loc_0x278
	  stw       r31, 0x0(r28)
	  b         .loc_0x278

	.loc_0x1D8:
	  cmplwi    r25, 0
	  beq-      .loc_0x1EC
	  cmplw     r31, r25
	  ble-      .loc_0x1EC
	  mr        r31, r25

	.loc_0x1EC:
	  cmplwi    r24, 0
	  bne-      .loc_0x240
	  lwz       r3, -0x78E0(r13)
	  mr        r4, r31
	  li        r5, 0
	  lwz       r3, 0x94(r3)
	  bl        0x1984
	  cmpwi     r27, 0
	  mr        r29, r3
	  bge-      .loc_0x224
	  lwz       r4, -0x78E0(r13)
	  lwz       r4, 0x94(r4)
	  lbz       r0, 0x40(r4)
	  b         .loc_0x228

	.loc_0x224:
	  rlwinm    r0,r27,0,24,31

	.loc_0x228:
	  cmplwi    r3, 0
	  stb       r0, 0x20(r3)
	  bne-      .loc_0x23C
	  li        r3, 0
	  b         .loc_0x278

	.loc_0x23C:
	  lwz       r24, 0x14(r3)

	.loc_0x240:
	  mr        r4, r30
	  mr        r5, r24
	  mr        r6, r31
	  mr        r7, r29
	  li        r3, 0
	  bl        0x1BE4
	  cmplwi    r29, 0
	  bne-      .loc_0x268
	  li        r3, -0x1
	  b         .loc_0x26C

	.loc_0x268:
	  mr        r3, r29

	.loc_0x26C:
	  cmplwi    r28, 0
	  beq-      .loc_0x278
	  stw       r31, 0x0(r28)

	.loc_0x278:
	  lmw       r23, 0xC(r1)
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80017F4C
 * Size:	0002DC
 */
u8* JKRAram::aramToMainRam(u32, u8*, u32, JKRExpandSwitch, u32, JKRHeap*, int, u32*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x70(r1)
	  mflr      r0
	  stw       r0, 0x74(r1)
	  stmw      r22, 0x48(r1)
	  mr.       r31, r10
	  mr        r28, r3
	  mr        r23, r4
	  mr        r29, r5
	  mr        r22, r6
	  mr        r24, r7
	  mr        r25, r8
	  mr        r30, r9
	  li        r27, 0
	  beq-      .loc_0x40
	  li        r0, 0
	  stw       r0, 0x0(r31)

	.loc_0x40:
	  rlwinm.   r0,r23,0,27,31
	  beq-      .loc_0x70
	  rlwinm.   r0,r28,0,27,31
	  beq-      .loc_0x70
	  lis       r3, 0x8047
	  lis       r5, 0x8047
	  addi      r6, r5, 0x348C
	  li        r4, 0xDB
	  addi      r3, r3, 0x3480
	  subi      r5, r2, 0x7E90
	  crclr     6, 0x6
	  bl        0x12688

	.loc_0x70:
	  cmpwi     r22, 0x1
	  bne-      .loc_0xC4
	  addi      r0, r1, 0x27
	  mr        r4, r28
	  rlwinm    r26,r0,0,0,26
	  li        r3, 0x1
	  mr        r5, r26
	  li        r6, 0x20
	  li        r7, 0
	  bl        0x1B18
	  mr        r3, r26
	  bl        0x4F08
	  lbz       r0, 0x5(r26)
	  mr        r27, r3
	  lbz       r4, 0x4(r26)
	  rlwinm    r0,r0,16,0,15
	  lbz       r5, 0x6(r26)
	  rlwimi    r0,r4,24,0,7
	  lbz       r6, 0x7(r26)
	  rlwimi    r0,r5,8,16,23
	  or        r26, r6, r0

	.loc_0xC4:
	  cmpwi     r27, 0x2
	  bne-      .loc_0x15C
	  cmplwi    r24, 0
	  beq-      .loc_0xE0
	  cmplw     r24, r26
	  bge-      .loc_0xE0
	  mr        r26, r24

	.loc_0xE0:
	  cmplwi    r23, 0
	  bne-      .loc_0xFC
	  mr        r3, r26
	  mr        r5, r25
	  li        r4, 0x20
	  bl        0xB5A0
	  mr        r23, r3

	.loc_0xFC:
	  cmplwi    r23, 0
	  bne-      .loc_0x10C
	  li        r3, 0
	  b         .loc_0x2C8

	.loc_0x10C:
	  lwz       r3, -0x77D4(r13)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  subis     r0, r3, 0x4558
	  cmplwi    r0, 0x5048
	  bne-      .loc_0x138
	  cmpwi     r30, 0
	  blt-      .loc_0x138
	  stb       r30, -0xD(r23)

	.loc_0x138:
	  mr        r3, r28
	  mr        r4, r23
	  mr        r5, r29
	  mr        r6, r26
	  mr        r8, r31
	  li        r7, 0
	  bl        0x298
	  mr        r3, r23
	  b         .loc_0x2C8

	.loc_0x15C:
	  cmpwi     r27, 0x1
	  bne-      .loc_0x248
	  mr        r3, r29
	  mr        r5, r25
	  li        r4, -0x20
	  bl        0xB524
	  mr.       r27, r3
	  bne-      .loc_0x184
	  li        r3, 0
	  b         .loc_0x2C8

	.loc_0x184:
	  mr        r4, r28
	  mr        r5, r27
	  mr        r6, r29
	  li        r3, 0x1
	  li        r7, 0
	  bl        0x1A14
	  cmplwi    r24, 0
	  beq-      .loc_0x1B0
	  cmplw     r24, r26
	  bge-      .loc_0x1B0
	  mr        r26, r24

	.loc_0x1B0:
	  cmplwi    r23, 0
	  bne-      .loc_0x1CC
	  mr        r3, r26
	  mr        r5, r25
	  li        r4, 0x20
	  bl        0xB4D0
	  mr        r23, r3

	.loc_0x1CC:
	  cmplwi    r23, 0
	  bne-      .loc_0x1E8
	  mr        r3, r27
	  li        r4, 0
	  bl        0xB544
	  li        r3, 0
	  b         .loc_0x2C8

	.loc_0x1E8:
	  lwz       r3, -0x77D4(r13)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  subis     r0, r3, 0x4558
	  cmplwi    r0, 0x5048
	  bne-      .loc_0x214
	  cmpwi     r30, 0
	  blt-      .loc_0x214
	  stb       r30, -0xD(r23)

	.loc_0x214:
	  mr        r3, r27
	  mr        r4, r23
	  mr        r5, r26
	  li        r6, 0
	  bl        0x49CC
	  mr        r3, r27
	  mr        r4, r25
	  bl        0xB4F0
	  cmplwi    r31, 0
	  beq-      .loc_0x240
	  stw       r26, 0x0(r31)

	.loc_0x240:
	  mr        r3, r23
	  b         .loc_0x2C8

	.loc_0x248:
	  cmplwi    r23, 0
	  bne-      .loc_0x264
	  mr        r3, r29
	  mr        r5, r25
	  li        r4, 0x20
	  bl        0xB438
	  mr        r23, r3

	.loc_0x264:
	  cmplwi    r23, 0
	  bne-      .loc_0x274
	  li        r3, 0
	  b         .loc_0x2C8

	.loc_0x274:
	  lwz       r3, -0x77D4(r13)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  subis     r0, r3, 0x4558
	  cmplwi    r0, 0x5048
	  bne-      .loc_0x2A0
	  cmpwi     r30, 0
	  blt-      .loc_0x2A0
	  stb       r30, -0xD(r23)

	.loc_0x2A0:
	  mr        r4, r28
	  mr        r5, r23
	  mr        r6, r29
	  li        r3, 0x1
	  li        r7, 0
	  bl        0x18F8
	  cmplwi    r31, 0
	  beq-      .loc_0x2C4
	  stw       r29, 0x0(r31)

	.loc_0x2C4:
	  mr        r3, r23

	.loc_0x2C8:
	  lmw       r22, 0x48(r1)
	  lwz       r0, 0x74(r1)
	  mtlr      r0
	  addi      r1, r1, 0x70
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80018228
 * Size:	00010C
 */
void JKRAram::aramToMainRam(JKRAramBlock*, unsigned char*, unsigned long, unsigned long, JKRExpandSwitch, unsigned long, JKRHeap*, int,
                            unsigned long*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  lis       r11, 0x8047
	  stw       r0, 0x34(r1)
	  stmw      r22, 0x8(r1)
	  mr        r22, r3
	  lwz       r30, 0x38(r1)
	  mr        r23, r4
	  mr        r24, r5
	  mr        r25, r6
	  cmplwi    r30, 0
	  mr        r26, r7
	  mr        r27, r8
	  mr        r28, r9
	  mr        r29, r10
	  addi      r31, r11, 0x3480
	  beq-      .loc_0x4C
	  li        r0, 0
	  stw       r0, 0x0(r30)

	.loc_0x4C:
	  cmplwi    r22, 0
	  beq-      .loc_0x7C
	  lwz       r0, 0x14(r22)
	  add       r0, r25, r0
	  rlwinm.   r0,r0,0,27,31
	  beq-      .loc_0x7C
	  addi      r3, r31, 0
	  addi      r6, r31, 0xC
	  li        r4, 0xE3
	  subi      r5, r2, 0x7E90
	  crclr     6, 0x6
	  bl        0x123A0

	.loc_0x7C:
	  cmplwi    r22, 0
	  bne-      .loc_0x98
	  addi      r3, r31, 0
	  addi      r5, r31, 0x2C
	  li        r4, 0x2DD
	  crclr     6, 0x6
	  bl        0xD54B0

	.loc_0x98:
	  lwz       r4, 0x18(r22)
	  cmplw     r25, r4
	  blt-      .loc_0xAC
	  li        r3, 0
	  b         .loc_0xF8

	.loc_0xAC:
	  cmplwi    r24, 0
	  mr        r3, r24
	  bne-      .loc_0xBC
	  mr        r3, r4

	.loc_0xBC:
	  add       r0, r25, r3
	  mr        r24, r3
	  cmplw     r0, r4
	  ble-      .loc_0xD0
	  sub       r24, r4, r25

	.loc_0xD0:
	  lwz       r0, 0x14(r22)
	  mr        r4, r23
	  mr        r5, r24
	  mr        r6, r26
	  mr        r7, r27
	  mr        r8, r28
	  mr        r9, r29
	  mr        r10, r30
	  add       r3, r25, r0
	  bl        -0x3D0

	.loc_0xF8:
	  lmw       r22, 0x8(r1)
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80018334
 * Size:	000168
 */
void JKRDecompressFromAramToMainRam(unsigned long, void*, unsigned long, unsigned long, unsigned long, unsigned long*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stmw      r25, 0x14(r1)
	  mr        r26, r3
	  mr        r27, r4
	  mr        r28, r5
	  mr        r29, r6
	  mr        r30, r7
	  mr        r31, r8
	  bl        0xD68DC
	  lbz       r0, -0x78AC(r13)
	  mr        r25, r3
	  cmplwi    r0, 0
	  bne-      .loc_0x50
	  lis       r3, 0x804F
	  subi      r3, r3, 0xFC
	  bl        0xD77B8
	  li        r0, 0x1
	  stb       r0, -0x78AC(r13)

	.loc_0x50:
	  mr        r3, r25
	  bl        0xD68D8
	  lis       r3, 0x804F
	  subi      r3, r3, 0xFC
	  bl        0xD77D4
	  lwz       r25, -0x8000(r13)
	  li        r5, 0x20
	  lwz       r3, -0x77D8(r13)
	  mr        r4, r25
	  bl        0xB298
	  add       r0, r3, r25
	  cmplwi    r30, 0
	  stw       r3, -0x78DC(r13)
	  stw       r0, -0x78D8(r13)
	  beq-      .loc_0xB0
	  lwz       r3, -0x77D8(r13)
	  li        r4, 0x1120
	  li        r5, 0
	  bl        0xB274
	  addi      r0, r3, 0x1120
	  stw       r3, -0x78D4(r13)
	  stw       r0, -0x78D0(r13)
	  stw       r3, -0x78CC(r13)
	  b         .loc_0xB8

	.loc_0xB0:
	  li        r0, 0
	  stw       r0, -0x78D4(r13)

	.loc_0xB8:
	  li        r0, 0
	  cmplwi    r28, 0
	  stw       r26, -0x78BC(r13)
	  li        r3, -0x1
	  stw       r0, -0x78C8(r13)
	  beq-      .loc_0xD4
	  mr        r3, r28

	.loc_0xD4:
	  li        r0, 0
	  cmplwi    r31, 0
	  stw       r3, -0x78C4(r13)
	  stw       r30, -0x78B8(r13)
	  stw       r0, -0x78B4(r13)
	  stw       r29, -0x78B0(r13)
	  beq-      .loc_0xF8
	  mr        r3, r31
	  b         .loc_0xFC

	.loc_0xF8:
	  subi      r3, r13, 0x78A4

	.loc_0xFC:
	  stw       r3, -0x78A8(r13)
	  li        r0, 0
	  stw       r0, 0x0(r3)
	  bl        0x308
	  mr        r4, r27
	  bl        .loc_0x168
	  lwz       r3, -0x78DC(r13)
	  li        r4, 0
	  bl        0xB21C
	  lwz       r3, -0x78D4(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x134
	  li        r4, 0
	  bl        0xB208

	.loc_0x134:
	  lwz       r4, -0x78A8(r13)
	  mr        r3, r27
	  lwz       r4, 0x0(r4)
	  bl        0xD4330
	  lis       r3, 0x804F
	  subi      r3, r3, 0xFC
	  bl        0xD77C4
	  lmw       r25, 0x14(r1)
	  li        r3, 0
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr

	.loc_0x168:
	*/
}

/*
 * --INFO--
 * Address:	8001849C
 * Size:	0002A8
 */
void decompSZS_subroutine(unsigned char*, unsigned char*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	li       r0, 0
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	li       r30, 0
	stw      r29, 0x14(r1)
	mr       r29, r4
	li       r4, 0
	lbz      r5, 0(r3)
	cmpwi    r5, 0x59
	bne      lbl_800184F4
	lbz      r5, 1(r3)
	cmpwi    r5, 0x61
	bne      lbl_800184F4
	lbz      r5, 2(r3)
	cmpwi    r5, 0x7a
	bne      lbl_800184F4
	lbz      r5, 3(r3)
	cmpwi    r5, 0x30
	beq      lbl_800184FC

lbl_800184F4:
	li       r3, -1
	b        lbl_80018728

lbl_800184FC:
	lwz      r7, fileOffset@sda21(r13)
	lwz      r6, 4(r3)
	lwz      r5, maxDest@sda21(r13)
	subf     r6, r7, r6
	add      r31, r29, r6
	add      r5, r29, r5
	cmplw    r31, r5
	ble      lbl_80018520
	mr       r31, r5

lbl_80018520:
	addi     r3, r3, 0x10

lbl_80018524:
	cmpwi    r4, 0
	bne      lbl_80018554
	lwz      r0, srcLimit@sda21(r13)
	cmplw    r3, r0
	ble      lbl_80018548
	lwz      r0, transLeft@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_80018548
	bl       nextSrcData__FPUc

lbl_80018548:
	lbz      r0, 0(r3)
	li       r4, 8
	addi     r3, r3, 1

lbl_80018554:
	rlwinm.  r5, r0, 0, 0x18, 0x18
	beq      lbl_800185EC
	lwz      r6, fileOffset@sda21(r13)
	cmplwi   r6, 0
	beq      lbl_800185C0
	lwz      r5, readCount@sda21(r13)
	cmplw    r5, r6
	blt      lbl_8001858C
	lbz      r5, 0(r3)
	addi     r30, r30, 1
	stb      r5, 0(r29)
	addi     r29, r29, 1
	cmplw    r29, r31
	beq      lbl_8001871C

lbl_8001858C:
	lwz      r6, refCurrent@sda21(r13)
	lbz      r7, 0(r3)
	addi     r5, r6, 1
	stw      r5, refCurrent@sda21(r13)
	stb      r7, 0(r6)
	lwz      r6, refCurrent@sda21(r13)
	lwz      r5, refEnd@sda21(r13)
	cmplw    r6, r5
	bne      lbl_800185B8
	lwz      r5, refBuf@sda21(r13)
	stw      r5, refCurrent@sda21(r13)

lbl_800185B8:
	addi     r3, r3, 1
	b        lbl_800185DC

lbl_800185C0:
	lbz      r5, 0(r3)
	addi     r3, r3, 1
	addi     r30, r30, 1
	stb      r5, 0(r29)
	addi     r29, r29, 1
	cmplw    r29, r31
	beq      lbl_8001871C

lbl_800185DC:
	lwz      r5, readCount@sda21(r13)
	addi     r5, r5, 1
	stw      r5, readCount@sda21(r13)
	b        lbl_8001870C

lbl_800185EC:
	lwz      r8, fileOffset@sda21(r13)
	lbz      r6, 0(r3)
	cmplwi   r8, 0
	lbz      r9, 1(r3)
	srawi    r5, r6, 4
	rlwimi   r9, r6, 8, 0x14, 0x17
	addi     r3, r3, 2
	beq      lbl_80018634
	lwz      r6, refCurrent@sda21(r13)
	lwz      r7, refBuf@sda21(r13)
	subf     r6, r9, r6
	addi     r9, r6, -1
	cmplw    r9, r7
	bge      lbl_8001863C
	lwz      r6, refEnd@sda21(r13)
	subf     r6, r7, r6
	add      r9, r9, r6
	b        lbl_8001863C

lbl_80018634:
	subf     r6, r9, r29
	addi     r9, r6, -1

lbl_8001863C:
	cmpwi    r5, 0
	bne      lbl_80018654
	lbz      r5, 0(r3)
	addi     r3, r3, 1
	addi     r5, r5, 0x12
	b        lbl_80018658

lbl_80018654:
	addi     r5, r5, 2

lbl_80018658:
	cmplwi   r8, 0
	beq      lbl_800186DC

lbl_80018660:
	lwz      r7, readCount@sda21(r13)
	lwz      r6, fileOffset@sda21(r13)
	cmplw    r7, r6
	blt      lbl_80018688
	lbz      r6, 0(r9)
	addi     r30, r30, 1
	stb      r6, 0(r29)
	addi     r29, r29, 1
	cmplw    r29, r31
	beq      lbl_8001870C

lbl_80018688:
	lwz      r7, refCurrent@sda21(r13)
	lbz      r8, 0(r9)
	addi     r6, r7, 1
	stw      r6, refCurrent@sda21(r13)
	stb      r8, 0(r7)
	lwz      r6, refCurrent@sda21(r13)
	lwz      r7, refEnd@sda21(r13)
	cmplw    r6, r7
	bne      lbl_800186B4
	lwz      r6, refBuf@sda21(r13)
	stw      r6, refCurrent@sda21(r13)

lbl_800186B4:
	addi     r9, r9, 1
	cmplw    r9, r7
	bne      lbl_800186C4
	lwz      r9, refBuf@sda21(r13)

lbl_800186C4:
	lwz      r6, readCount@sda21(r13)
	addic.   r5, r5, -1
	addi     r6, r6, 1
	stw      r6, readCount@sda21(r13)
	bne      lbl_80018660
	b        lbl_8001870C

lbl_800186DC:
	lbz      r6, 0(r9)
	addi     r30, r30, 1
	stb      r6, 0(r29)
	addi     r29, r29, 1
	cmplw    r29, r31
	beq      lbl_8001870C
	lwz      r6, readCount@sda21(r13)
	addic.   r5, r5, -1
	addi     r9, r9, 1
	addi     r6, r6, 1
	stw      r6, readCount@sda21(r13)
	bne      lbl_800186DC

lbl_8001870C:
	cmplw    r29, r31
	slwi     r0, r0, 1
	addi     r4, r4, -1
	blt      lbl_80018524

lbl_8001871C:
	lwz      r4, tsPtr@sda21(r13)
	li       r3, 0
	stw      r30, 0(r4)

lbl_80018728:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80018744
 * Size:	0000A4
 */
void firstSrcData()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	lwz      r4, szpEnd@sda21(r13)
	lwz      r3, szpBuf@sda21(r13)
	addi     r0, r4, -25
	lwz      r5, transLeft@sda21(r13)
	subf     r4, r3, r4
	stw      r0, srcLimit@sda21(r13)
	cmplw    r5, r4
	mr       r30, r3
	mr       r31, r4
	bge      lbl_80018784
	mr       r31, r5

lbl_80018784:
	lwz      r7, srcAddress@sda21(r13)
	addi     r0, r31, 0x1f
	lwz      r4, srcOffset@sda21(r13)
	mr       r5, r30
	rlwinm   r6, r0, 0, 0, 0x1a
	li       r3, 1
	add      r4, r7, r4
	li       r7, 0
	bl       orderSync__12JKRAramPieceFiUlUlUlP12JKRAramBlock
	lwz      r0, transLeft@sda21(r13)
	lwz      r3, srcOffset@sda21(r13)
	subf.    r0, r31, r0
	add      r3, r3, r31
	stw      r3, srcOffset@sda21(r13)
	stw      r0, transLeft@sda21(r13)
	bne      lbl_800187CC
	add      r0, r30, r31
	stw      r0, srcLimit@sda21(r13)

lbl_800187CC:
	lwz      r0, 0x14(r1)
	mr       r3, r30
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800187E8
 * Size:	0000D8
 */
void nextSrcData(unsigned char*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	mr       r4, r3
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	stw      r28, 0x10(r1)
	lwz      r0, szpEnd@sda21(r13)
	subf     r29, r4, r0
	clrlwi.  r5, r29, 0x1b
	beq      lbl_80018828
	lwz      r3, szpBuf@sda21(r13)
	addi     r0, r3, 0x20
	subf     r30, r5, r0
	b        lbl_8001882C

lbl_80018828:
	lwz      r30, szpBuf@sda21(r13)

lbl_8001882C:
	mr       r3, r30
	mr       r5, r29
	bl       memcpy
	lwz      r0, szpEnd@sda21(r13)
	add      r31, r30, r29
	lwz      r3, transLeft@sda21(r13)
	subf     r28, r31, r0
	cmplw    r28, r3
	ble      lbl_80018854
	mr       r28, r3

lbl_80018854:
	lwz      r7, srcAddress@sda21(r13)
	addi     r0, r28, 0x1f
	lwz      r4, srcOffset@sda21(r13)
	add      r5, r30, r29
	rlwinm   r6, r0, 0, 0, 0x1a
	li       r3, 1
	add      r4, r7, r4
	li       r7, 0
	bl       orderSync__12JKRAramPieceFiUlUlUlP12JKRAramBlock
	lwz      r0, transLeft@sda21(r13)
	lwz      r3, srcOffset@sda21(r13)
	subf.    r0, r28, r0
	add      r3, r3, r28
	stw      r3, srcOffset@sda21(r13)
	stw      r0, transLeft@sda21(r13)
	bne      lbl_8001889C
	add      r0, r31, r28
	stw      r0, srcLimit@sda21(r13)

lbl_8001889C:
	lwz      r0, 0x24(r1)
	mr       r3, r30
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r28, 0x10(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	800188C0
 * Size:	000044
 */
void __sinit_JKRAram_cpp(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r3, sAramCommandList__7JKRAram@ha
	stw      r0, 0x14(r1)
	addi     r3, r3, sAramCommandList__7JKRAram@l
	bl       initiate__10JSUPtrListFv
	lis      r3, sAramCommandList__7JKRAram@ha
	lis      r4, "__dt__23JSUList<12JKRAMCommand>Fv"@ha
	lis      r5, lbl_804EFEF8@ha
	addi     r3, r3, sAramCommandList__7JKRAram@l
	addi     r4, r4, "__dt__23JSUList<12JKRAMCommand>Fv"@l
	addi     r5, r5, lbl_804EFEF8@l
	bl       __register_global_object
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80018904
 * Size:	000054
 */
void JSUList<JKRAMCommand>::~JSUList()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_8001893C
	li       r4, 0
	bl       __dt__10JSUPtrListFv
	extsh.   r0, r31
	ble      lbl_8001893C
	mr       r3, r30
	bl       __dl__FPv

lbl_8001893C:
	lwz      r0, 0x14(r1)
	mr       r3, r30
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}
