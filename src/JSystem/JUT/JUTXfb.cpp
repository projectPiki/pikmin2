#include "types.h"

/*
    Generated from dpostproc

    .section .sbss # 0x80514D80 - 0x80516360
    .global sManager__6JUTXfb
    sManager__6JUTXfb:
        .skip 0x8
*/

/*
 * --INFO--
 * Address:	80033CFC
 * Size:	000014
 */
void JUTXfb::clearIndex()
{
	/*
	li       r0, -1
	sth      r0, 0x14(r3)
	sth      r0, 0x16(r3)
	sth      r0, 0x18(r3)
	blr
	*/
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
 * --INFO--
 * Address:	........
 * Size:	0000B0
 */
JUTXfb::JUTXfb(const _GXRenderModeObj*, JKRHeap*, JUTXfb::EXfbNumber)
{
	// UNUSED FUNCTION
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
void JUTXfb::createManager(const _GXRenderModeObj*, JKRHeap*,
                           JUTXfb::EXfbNumber)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000088
 */
void JUTXfb::createManager(const _GXRenderModeObj*, void*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000094
 */
void JUTXfb::createManager(const _GXRenderModeObj*, void*, void*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000A0
 */
void JUTXfb::createManager(const _GXRenderModeObj*, void*, void*, void*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80033D10
 * Size:	0000A8
 */
void JUTXfb::createManager(JKRHeap*, JUTXfb::EXfbNumber)
{
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
void JUTXfb::createManager(void*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000094
 */
void JUTXfb::createManager(void*, void*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000A0
 */
void JUTXfb::createManager(void*, void*, void*)
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
void JUTXfb::initiate(unsigned short, unsigned short, JKRHeap*,
                      JUTXfb::EXfbNumber)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  mr        r30, r7
	  stw       r29, 0x14(r1)
	  mr.       r29, r6
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  bne-      .loc_0x30
	  lwz       r29, -0x77D8(r13)

	.loc_0x30:
	  addi      r3, r4, 0xF
	  rlwinm    r0,r5,0,16,31
	  rlwinm    r3,r3,0,16,27
	  mr        r4, r29
	  mullw     r0, r3, r0
	  li        r5, 0x20
	  rlwinm    r31,r0,1,0,30
	  mr        r3, r31
	  bl        -0xFE50
	  stw       r3, 0x0(r28)
	  li        r0, 0x1
	  cmpwi     r30, 0x2
	  stb       r0, 0xC(r28)
	  blt-      .loc_0x88
	  mr        r3, r31
	  mr        r4, r29
	  li        r5, 0x20
	  bl        -0xFE74
	  stw       r3, 0x4(r28)
	  li        r0, 0x1
	  stb       r0, 0xD(r28)
	  b         .loc_0x94

	.loc_0x88:
	  li        r0, 0
	  stw       r0, 0x4(r28)
	  stb       r0, 0xD(r28)

	.loc_0x94:
	  cmpwi     r30, 0x3
	  blt-      .loc_0xBC
	  mr        r3, r31
	  mr        r4, r29
	  li        r5, 0x20
	  bl        -0xFEA8
	  stw       r3, 0x8(r28)
	  li        r0, 0x1
	  stb       r0, 0xE(r28)
	  b         .loc_0xC8

	.loc_0xBC:
	  li        r0, 0
	  stw       r0, 0x8(r28)
	  stb       r0, 0xE(r28)

	.loc_0xC8:
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
void JUTXfb::accumeXfbSize()
{
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
