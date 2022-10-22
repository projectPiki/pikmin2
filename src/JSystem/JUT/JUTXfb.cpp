#include "Dolphin/gx.h"
#include "Dolphin/vi.h"
#include "JSystem/JKR/JKRHeap.h"
#include "JSystem/JUT/JUTVideo.h"
#include "JSystem/JUT/JUTXfb.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .sbss # 0x80514D80 - 0x80516360
    .global sManager__6JUTXfb
    sManager__6JUTXfb:
        .skip 0x8
*/

JUTXfb* JUTXfb::sManager;

/*
 * --INFO--
 * Address:	80033CFC
 * Size:	000014
 */
void JUTXfb::clearIndex()
{
	_14 = -1;
	_16 = -1;
	_18 = -1;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000020
 */
void JUTXfb::common_init(int)
{
	// UNUSED FUNCTION
}

/*
 * __ct
 * --INFO--
 * Address:	........
 * Size:	0000B0
 */
JUTXfb::JUTXfb(const _GXRenderModeObj* gxObj, JKRHeap* heap, JUTXfb::EXfbNumber number)
// : _10(number)
// , _14(-1)
// , _16(-1)
// , _18(-1)
// , _1C(99)
{
	_10 = number;
	clearIndex();
	_1C = 99;
	// Used by createManager__6JUTXfbFP7JKRHeapQ26JUTXfb10EXfbNumber
	// UNUSED FUNCTION
	// float yScaleFactor = GXGetYScaleFactor(gxObj->xfbHeight, gxObj->viXOrigin);
	u16 width = gxObj->fbWidth;
	// u16 xfbLines = GXGetNumXfbLines(yScaleFactor, gxObj->xfbHeight);
	// initiate(gxObj->efbHeight, xfbLines, heap, number);
	initiate(width, getLineCount(gxObj), heap, number);
}

/*
 * --INFO--
 * Address:	........
 * Size:	00005C
 */
JUTXfb::JUTXfb(const _GXRenderModeObj*, void*, void*, void*, JUTXfb::EXfbNumber)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000078
 */
JUTXfb::~JUTXfb()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000040
 */
void JUTXfb::delXfb(int)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000034
 */
void JUTXfb::exchangeXfbIndex(int, int)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00003C
 */
void JUTXfb::addToDoubleXfb(void*, bool)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000BC
 */
void JUTXfb::addToDoubleXfb(JKRHeap*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000CC
 */
JUTXfb* JUTXfb::createManager(const _GXRenderModeObj*, JKRHeap*, JUTXfb::EXfbNumber)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000088
 */
JUTXfb* JUTXfb::createManager(const _GXRenderModeObj*, void*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000094
 */
JUTXfb* JUTXfb::createManager(const _GXRenderModeObj*, void*, void*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000A0
 */
JUTXfb* JUTXfb::createManager(const _GXRenderModeObj*, void*, void*, void*)
{
	// UNUSED FUNCTION
}

/*
 * createManager__6JUTXfbFP7JKRHeapQ26JUTXfb10EXfbNumber
 * --INFO--
 * Address:	80033D10
 * Size:	0000A8
 * TODO: Fix the inlined ctor. This function itself is probably correct; see JUTVideo::createManager.
 */
JUTXfb* JUTXfb::createManager(JKRHeap* heap, JUTXfb::EXfbNumber number)
{
	if (sManager == nullptr) {
		sManager = new JUTXfb(JUTVideo::sManager->m_renderModeObj, heap, number);
	}
	return sManager;
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stmw     r27, 0xc(r1)
	mr       r27, r3
	mr       r28, r4
	lwz      r0, sManager__6JUTXfb@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_80033DA0
	li       r3, 0x20
	bl       __nw__FUl
	or.      r31, r3, r3
	beq      lbl_80033D9C
	stw      r28, 0x10(r31)
	li       r3, -1
	li       r0, 0x63
	sth      r3, 0x14(r31)
	sth      r3, 0x16(r31)
	sth      r3, 0x18(r31)
	stw      r0, 0x1c(r31)
	lwz      r3, sManager__8JUTVideo@sda21(r13)
	lwz      r3, 4(r3)
	lhz      r30, 6(r3)
	lhz      r29, 4(r3)
	lhz      r4, 8(r3)
	mr       r3, r30
	bl       GXGetYScaleFactor
	mr       r3, r30
	bl       GXGetNumXfbLines
	mr       r5, r3
	mr       r3, r31
	mr       r4, r29
	mr       r6, r27
	mr       r7, r28
	bl       initiate__6JUTXfbFUsUsP7JKRHeapQ26JUTXfb10EXfbNumber

lbl_80033D9C:
	stw      r31, sManager__6JUTXfb@sda21(r13)

lbl_80033DA0:
	lmw      r27, 0xc(r1)
	lwz      r0, 0x24(r1)
	lwz      r3, sManager__6JUTXfb@sda21(r13)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000088
 */
JUTXfb* JUTXfb::createManager(void*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000094
 */
JUTXfb* JUTXfb::createManager(void*, void*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000A0
 */
JUTXfb* JUTXfb::createManager(void*, void*, void*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80033DB8
 * Size:	000090
 */
void JUTXfb::destroyManager()
{
	JUTXfb* mgr = sManager;
	if (mgr != nullptr) {
		for (int i = 0; i < 3; i++) {
			if (mgr->m_enabled[i] && mgr->m_buffers[i]) {
				delete mgr->m_buffers[i];
			}
		}
		sManager = nullptr;
		delete mgr;
	}
	sManager = nullptr;
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	lwz      r29, sManager__6JUTXfb@sda21(r13)
	cmplwi   r29, 0
	beq      lbl_80033E24
	li       r31, 0
	mr       r30, r29

lbl_80033DE4:
	addi     r0, r31, 0xc
	lbzx     r0, r29, r0
	cmplwi   r0, 0
	beq      lbl_80033E04
	lwz      r3, 0(r30)
	cmplwi   r3, 0
	beq      lbl_80033E04
	bl       __dl__FPv

lbl_80033E04:
	addi     r31, r31, 1
	addi     r30, r30, 4
	cmpwi    r31, 3
	blt      lbl_80033DE4
	li       r0, 0
	mr       r3, r29
	stw      r0, sManager__6JUTXfb@sda21(r13)
	bl       __dl__FPv

lbl_80033E24:
	li       r0, 0
	stw      r0, sManager__6JUTXfb@sda21(r13)
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
 * Address:	80033E48
 * Size:	0000E8
 */
void JUTXfb::initiate(unsigned short p1, unsigned short p2, JKRHeap* heap, JUTXfb::EXfbNumber number)
{
	if (heap == nullptr) {
		heap = JKRHeap::sSystemHeap;
	}
	// TODO: This looks really gross.
	u16 v2    = (unsigned short)(p1 + (unsigned short)0xF) & 0xFFF0;
	u32 v1    = v2 * p2;
	int flags = 0x20;
	v1 <<= 1;
	m_buffers[0] = new (heap, flags) u8[v1];
	m_enabled[0] = true;
	if (2 <= (int)number) {
		m_buffers[1] = new (heap, flags) u8[v1];
		m_enabled[1] = true;
	} else {
		m_buffers[1] = nullptr;
		m_enabled[1] = false;
	}
	if (3 <= (int)number) {
		m_buffers[2] = new (heap, flags) u8[v1];
		m_enabled[2] = true;
	} else {
		m_buffers[2] = nullptr;
		m_enabled[2] = false;
	}
}

/*
 * --INFO--
 * Address:	........
 * Size:	000040
 */
void JUTXfb::initiate(void*, void*, void*, JUTXfb::EXfbNumber)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80033F30
 * Size:	000064
 */
u32 JUTXfb::accumeXfbSize()
{
	// u16 efbHeight = JUTVideo::sManager->m_renderModeObj->efbHeight;
	// u16 fbWidth   = JUTVideo::sManager->m_renderModeObj->fbWidth;
	// // return (GXGetNumXfbLines(GXGetYScaleFactor(efbHeight, obj->xfbHeight), efbHeight) * ALIGN_NEXT(fbWidth, 0x10));
	// return (ALIGN_NEXT(fbWidth, 0x10)
	//         * GXGetNumXfbLines(GXGetYScaleFactor(efbHeight, JUTVideo::sManager->m_renderModeObj->xfbHeight), efbHeight))
	//        * 2;
	// return (GXGetNumXfbLines(GXGetYScaleFactor(obj->efbHeight, obj->xfbHeight), obj->efbHeight) * ALIGN_NEXT(obj->fbWidth, 0x10));

	// const _GXRenderModeObj* obj = JUTVideo::sManager->m_renderModeObj;
	// // u16 efbHeight               = obj->efbHeight;
	// const u16 height = JUTVideo::sManager->getEfbHeight();
	// const u16 width  = JUTVideo::sManager->getFbWidth();
	// const u16 lines  = GXGetNumXfbLines(GXGetYScaleFactor(height, obj->xfbHeight), height);
	// return sizeof(u16) * (lines * ALIGN_NEXT(width, 0x10));

	JUTVideo* video  = JUTVideo::sManager;
	const u16 height = video->getEfbHeight();
	const u16 width  = video->getFbWidth();
	const u16 lines  = GXGetNumXfbLines(GXGetYScaleFactor(height, video->m_renderModeObj->xfbHeight), height);
	// return (lines * ALIGN_NEXT(width, 0x10)) * 2;
	return lines * (((u16)(width + (u16)0xF) & 0xFFF0)) * 2;
	// JUTVideo* video = JUTVideo::sManager;
	// const u16 lines = GXGetNumXfbLines(GXGetYScaleFactor(video->getEfbHeight(), video->m_renderModeObj->xfbHeight),
	// video->getEfbHeight()); return sizeof(u16) * (lines * ALIGN_NEXT(video->getFbWidth(), 0x10));

	// // return (GXGetNumXfbLines(GXGetYScaleFactor(efbHeight, obj->xfbHeight), efbHeight) * ALIGN_NEXT(fbWidth, 0x10));
	// return (ALIGN_NEXT(fbWidth, 0x10) * GXGetNumXfbLines(GXGetYScaleFactor(efbHeight, obj->xfbHeight), efbHeight));
	// return 2 * ALIGN_NEXT(width, 0x10) * (GXGetNumXfbLines(GXGetYScaleFactor(obj->efbHeight, obj->xfbHeight), obj->efbHeight));

	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	lwz      r3, sManager__8JUTVideo@sda21(r13)
	lwz      r3, 4(r3)
	lhz      r30, 6(r3)
	lhz      r31, 4(r3)
	lhz      r4, 8(r3)
	mr       r3, r30
	bl       GXGetYScaleFactor
	mr       r3, r30
	bl       GXGetNumXfbLines
	addi     r4, r31, 0xf
	clrlwi   r0, r3, 0x10
	rlwinm   r3, r4, 0, 0x10, 0x1b
	lwz      r31, 0xc(r1)
	mullw    r0, r3, r0
	lwz      r30, 8(r1)
	slwi     r3, r0, 1
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00003C
 */
void JUTXfb::switchXfb()
{
	// UNUSED FUNCTION
}
