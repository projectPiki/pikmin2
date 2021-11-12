#include "types.h"

/*
    Generated from dpostproc

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__8JUTVideo
    __vt__8JUTVideo:
        .4byte 0
        .4byte 0
        .4byte __dt__8JUTVideoFv
        .4byte 0

    .section .sbss # 0x80514D80 - 0x80516360
    .global sManager__8JUTVideo
    sManager__8JUTVideo:
        .skip 0x4
    .global sVideoLastTick__8JUTVideo
    sVideoLastTick__8JUTVideo:
        .skip 0x4
    .global sVideoInterval__8JUTVideo
    sVideoInterval__8JUTVideo:
        .skip 0x4
    .global sDrawWaiting
    sDrawWaiting:
        .skip 0x4
    .global frameBuffer$2452
    frameBuffer$2452:
        .skip 0x4
    .global init$2453
    init$2453:
        .skip 0x4
*/

/*
 * --INFO--
 * Address:	80033744
 * Size:	000058
 */
void JUTVideo::createManager(const _GXRenderModeObj*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r0, sManager__8JUTVideo@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_80033784
	li       r3, 0x58
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80033780
	mr       r4, r31
	bl       __ct__8JUTVideoFPC16_GXRenderModeObj
	mr       r0, r3

lbl_80033780:
	stw      r0, sManager__8JUTVideo@sda21(r13)

lbl_80033784:
	lwz      r0, 0x14(r1)
	lwz      r3, sManager__8JUTVideo@sda21(r13)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8003379C
 * Size:	000048
 */
void JUTVideo::destroyManager()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, sManager__8JUTVideo@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_800337D4
	beq      lbl_800337CC
	lwz      r12, 0(r3)
	li       r4, 1
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl

lbl_800337CC:
	li       r0, 0
	stw      r0, sManager__8JUTVideo@sda21(r13)

lbl_800337D4:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800337E4
 * Size:	0000F4
 */
JUTVideo::JUTVideo(const _GXRenderModeObj*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r5, __vt__8JUTVideo@ha
	stw      r0, 0x14(r1)
	li       r0, 0
	stw      r31, 0xc(r1)
	mr       r31, r3
	addi     r3, r5, __vt__8JUTVideo@l
	stw      r30, 8(r1)
	mr       r30, r4
	stw      r3, 0(r31)
	stw      r0, 4(r31)
	bl       VIInit
	li       r3, 1
	li       r0, 2
	stb      r3, 0x2c(r31)
	mr       r3, r31
	mr       r4, r30
	stw      r0, 0x30(r31)
	bl       setRenderMode__8JUTVideoFPC16_GXRenderModeObj
	li       r3, 1
	bl       VISetBlack
	bl       VIFlush
	li       r0, 0
	stw      r0, 8(r31)
	bl       VIGetRetraceCount
	stw      r3, 0xc(r31)
	li       r3, 1
	li       r0, 0
	stw      r3, 0x10(r31)
	stw      r0, 0x18(r31)
	bl       OSGetTick
	lis      r5, 0x000A3930@ha
	lis      r4, preRetraceProc__8JUTVideoFUl@ha
	addi     r0, r5, 0x000A3930@l
	stw      r3, sVideoLastTick__8JUTVideo@sda21(r13)
	addi     r3, r4, preRetraceProc__8JUTVideoFUl@l
	stw      r0, sVideoInterval__8JUTVideo@sda21(r13)
	bl       VISetPreRetraceCallback
	lis      r4, postRetraceProc__8JUTVideoFUl@ha
	stw      r3, 0x1c(r31)
	addi     r3, r4, postRetraceProc__8JUTVideoFUl@l
	bl       VISetPostRetraceCallback
	stw      r3, 0x20(r31)
	li       r0, 0
	addi     r3, r31, 0x38
	addi     r4, r31, 0x34
	stw      r0, 0x24(r31)
	li       r5, 1
	stw      r0, 0x28(r31)
	bl       OSInitMessageQueue
	lis      r3, drawDoneCallback__8JUTVideoFv@ha
	addi     r3, r3, drawDoneCallback__8JUTVideoFv@l
	bl       GXSetDrawDoneCallback
	lwz      r0, 0x14(r1)
	mr       r3, r31
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800338D8
 * Size:	000068
 */
JUTVideo::~JUTVideo()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_80033924
	lis      r3, __vt__8JUTVideo@ha
	addi     r0, r3, __vt__8JUTVideo@l
	stw      r0, 0(r30)
	lwz      r3, 0x1c(r30)
	bl       VISetPreRetraceCallback
	lwz      r3, 0x20(r30)
	bl       VISetPostRetraceCallback
	extsh.   r0, r31
	ble      lbl_80033924
	mr       r3, r30
	bl       __dl__FPv

lbl_80033924:
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
 * Address:	80033940
 * Size:	000228
 */
void JUTVideo::preRetraceProc(unsigned long)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	lwz      r4, sManager__8JUTVideo@sda21(r13)
	lwz      r12, 0x24(r4)
	cmplwi   r12, 0
	beq      lbl_80033968
	mtctr    r12
	bctrl

lbl_80033968:
	bl       OSGetTick
	lwz      r0, sVideoLastTick__8JUTVideo@sda21(r13)
	lwz      r31, sManager__6JUTXfb@sda21(r13)
	subf     r0, r0, r3
	stw      r3, sVideoLastTick__8JUTVideo@sda21(r13)
	cmplwi   r31, 0
	stw      r0, sVideoInterval__8JUTVideo@sda21(r13)
	bne      lbl_80033998
	li       r3, 1
	bl       VISetBlack
	bl       VIFlush
	b        lbl_80033B54

lbl_80033998:
	lbz      r0, init$2453@sda21(r13)
	extsb.   r0, r0
	bne      lbl_800339B4
	li       r3, 0
	li       r0, 1
	stw      r3, frameBuffer$2452@sda21(r13)
	stb      r0, init$2453@sda21(r13)

lbl_800339B4:
	lwz      r4, frameBuffer$2452@sda21(r13)
	cmplwi   r4, 0
	beq      lbl_800339D8
	lwz      r5, sManager__8JUTVideo@sda21(r13)
	lwz      r3, sDirectPrint__14JUTDirectPrint@sda21(r13)
	lwz      r6, 4(r5)
	lhz      r5, 4(r6)
	lhz      r6, 6(r6)
	bl       changeFrameBuffer__14JUTDirectPrintFPvUsUs

lbl_800339D8:
	lwz      r3, sManager__8JUTVideo@sda21(r13)
	lbz      r0, 0x2c(r3)
	cmplwi   r0, 1
	bne      lbl_80033A20
	lwz      r4, 0x30(r3)
	cmpwi    r4, 0
	ble      lbl_800339F8
	addi     r4, r4, -1

lbl_800339F8:
	stw      r4, 0x30(r3)
	neg      r0, r4
	or       r0, r0, r4
	li       r3, 1
	lwz      r4, sManager__8JUTVideo@sda21(r13)
	srwi     r0, r0, 0x1f
	stb      r0, 0x2c(r4)
	bl       VISetBlack
	bl       VIFlush
	b        lbl_80033B54

lbl_80033A20:
	cmplwi   r31, 0
	bne      lbl_80033A38
	li       r3, 1
	bl       VISetBlack
	bl       VIFlush
	b        lbl_80033B54

lbl_80033A38:
	lwz      r0, 0x10(r31)
	cmpwi    r0, 3
	beq      lbl_80033A4C
	cmpwi    r0, 2
	bne      lbl_80033AC8

lbl_80033A4C:
	lbz      r0, sDrawWaiting@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_80033B54
	lha      r3, 0x16(r31)
	extsh.   r0, r3
	sth      r3, 0x18(r31)
	bge      lbl_80033A78
	li       r3, 1
	bl       VISetBlack
	bl       VIFlush
	b        lbl_80033B54

lbl_80033A78:
	lha      r3, 0x18(r31)
	extsh.   r0, r3
	blt      lbl_80033A90
	slwi     r0, r3, 2
	lwzx     r3, r31, r0
	b        lbl_80033A94

lbl_80033A90:
	li       r3, 0

lbl_80033A94:
	bl       VISetNextFrameBuffer
	bl       VIFlush
	li       r3, 0
	bl       VISetBlack
	lha      r3, 0x18(r31)
	extsh.   r0, r3
	blt      lbl_80033ABC
	slwi     r0, r3, 2
	lwzx     r0, r31, r0
	b        lbl_80033AC0

lbl_80033ABC:
	li       r0, 0

lbl_80033AC0:
	stw      r0, frameBuffer$2452@sda21(r13)
	b        lbl_80033B54

lbl_80033AC8:
	cmpwi    r0, 1
	bne      lbl_80033B54
	lwz      r0, 0x1c(r31)
	cmpwi    r0, 0
	bne      lbl_80033B50
	lha      r3, 0x16(r31)
	extsh.   r0, r3
	blt      lbl_80033B48
	sth      r3, 0x18(r31)
	lha      r3, 0x18(r31)
	extsh.   r0, r3
	blt      lbl_80033B04
	slwi     r0, r3, 2
	lwzx     r3, r31, r0
	b        lbl_80033B08

lbl_80033B04:
	li       r3, 0

lbl_80033B08:
	li       r4, 1
	bl       GXCopyDisp
	bl       GXFlush
	li       r0, 2
	stw      r0, 0x1c(r31)
	lha      r3, 0x18(r31)
	extsh.   r0, r3
	blt      lbl_80033B34
	slwi     r0, r3, 2
	lwzx     r0, r31, r0
	b        lbl_80033B38

lbl_80033B34:
	li       r0, 0

lbl_80033B38:
	stw      r0, frameBuffer$2452@sda21(r13)
	li       r3, 0
	bl       VISetBlack
	b        lbl_80033B50

lbl_80033B48:
	li       r3, 1
	bl       VISetBlack

lbl_80033B50:
	bl       VIFlush

lbl_80033B54:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80033B68
 * Size:	000028
 */
void JUTVideo::drawDoneStart()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	li       r0, 1
	stb      r0, sDrawWaiting@sda21(r13)
	bl       GXSetDrawDone
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80033B90
 * Size:	00000C
 */
void JUTVideo::dummyNoDrawWait()
{
	/*
	li       r0, 0
	stb      r0, sDrawWaiting@sda21(r13)
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JUTVideo::getDrawWait()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80033B9C
 * Size:	000088
 */
void JUTVideo::drawDoneCallback()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r4, sManager__6JUTXfb@sda21(r13)
	cmplwi   r4, 0
	beq      lbl_80033C14
	li       r3, 0
	stb      r3, sDrawWaiting@sda21(r13)
	lwz      r0, 0x10(r4)
	cmpwi    r0, 1
	bne      lbl_80033C14
	lwz      r0, 0x1c(r4)
	cmpwi    r0, 1
	bne      lbl_80033C14
	stw      r3, 0x1c(r4)
	lha      r5, 0x16(r4)
	extsh.   r0, r5
	blt      lbl_80033BEC
	slwi     r0, r5, 2
	lwzx     r3, r4, r0

lbl_80033BEC:
	cmplwi   r3, 0
	beq      lbl_80033C14
	extsh.   r0, r5
	blt      lbl_80033C08
	slwi     r0, r5, 2
	lwzx     r3, r4, r0
	b        lbl_80033C0C

lbl_80033C08:
	li       r3, 0

lbl_80033C0C:
	bl       VISetNextFrameBuffer
	bl       VIFlush

lbl_80033C14:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80033C24
 * Size:	00004C
 */
void JUTVideo::postRetraceProc(unsigned long)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r4, sManager__8JUTVideo@sda21(r13)
	lwz      r12, 0x28(r4)
	cmplwi   r12, 0
	beq      lbl_80033C48
	mtctr    r12
	bctrl

lbl_80033C48:
	bl       VIGetRetraceCount
	lwz      r6, sManager__8JUTVideo@sda21(r13)
	mr       r4, r3
	li       r5, 0
	addi     r3, r6, 0x38
	bl       OSSendMessage
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80033C70
 * Size:	000078
 */
void JUTVideo::setRenderMode(const _GXRenderModeObj*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r5, 4(r3)
	cmplwi   r5, 0
	beq      lbl_80033CB0
	lwz      r3, 0(r4)
	lwz      r0, 0(r5)
	cmpw     r3, r0
	beq      lbl_80033CB0
	li       r3, 1
	li       r0, 4
	stb      r3, 0x2c(r31)
	stw      r0, 0x30(r31)

lbl_80033CB0:
	stw      r4, 4(r31)
	lwz      r3, 4(r31)
	bl       VIConfigure
	bl       VIFlush
	lbz      r0, 0x2c(r31)
	cmplwi   r0, 0
	beq      lbl_80033CD4
	bl       VIWaitForRetrace
	bl       VIWaitForRetrace

lbl_80033CD4:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80033CE8
 * Size:	000004
 */
void JUTVideo::waitRetraceIfNeed() { }

/*
 * --INFO--
 * Address:	........
 * Size:	000010
 */
void JUTVideo::setPreRetraceCallback(void (*)(unsigned long))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80033CEC
 * Size:	000010
 */
void JUTVideo::setPostRetraceCallback(void (*)(unsigned long))
{
	/*
	lwz      r0, 0x28(r3)
	stw      r4, 0x28(r3)
	mr       r3, r0
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000094
 */
void JUTVideo::getPixelAspect(const _GXRenderModeObj*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000098
 */
void JUTVideo::getPixelAspect() const
{
	// UNUSED FUNCTION
}
