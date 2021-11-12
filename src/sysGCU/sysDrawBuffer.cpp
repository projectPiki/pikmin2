#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_8049BAD8
    lbl_8049BAD8:
        .4byte 0x73797344
        .4byte 0x72617742
        .4byte 0x75666665
        .4byte 0x722E6370
        .4byte 0x70000000
    .global lbl_8049BAEC
    lbl_8049BAEC:
        .asciz "P2Assert"
        .skip 3
    .global lbl_8049BAF8
    lbl_8049BAF8:
        .4byte 0x44726177
        .4byte 0x42756666
        .4byte 0x65720000
        .4byte 0x00000000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q23Sys11DrawBuffers
    __vt__Q23Sys11DrawBuffers:
        .4byte 0
        .4byte 0
        .4byte __dt__Q23Sys11DrawBuffersFv
        .4byte getChildCount__5CNodeFv
    .global __vt__Q23Sys10DrawBuffer
    __vt__Q23Sys10DrawBuffer:
        .4byte 0
        .4byte 0
        .4byte __dt__Q23Sys10DrawBufferFv
        .4byte getChildCount__5CNodeFv
*/

namespace Sys {

/*
 * --INFO--
 * Address:	80455700
 * Size:	00005C
 */
DrawBuffer::DrawBuffer(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       __ct__5CNodeFv
	lis      r3, __vt__Q23Sys10DrawBuffer@ha
	li       r4, 0
	addi     r3, r3, __vt__Q23Sys10DrawBuffer@l
	li       r0, -1
	stw      r3, 0(r31)
	mr       r3, r31
	stb      r4, 0x18(r31)
	stb      r4, 0x19(r31)
	stb      r4, 0x18(r31)
	stb      r4, 0x19(r31)
	stw      r4, 0x1c(r31)
	stw      r0, 0x20(r31)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8045575C
 * Size:	000060
 */
DrawBuffer::~DrawBuffer(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_804557A0
	lis      r5, __vt__Q23Sys10DrawBuffer@ha
	li       r4, 0
	addi     r0, r5, __vt__Q23Sys10DrawBuffer@l
	stw      r0, 0(r30)
	bl       __dt__5CNodeFv
	extsh.   r0, r31
	ble      lbl_804557A0
	mr       r3, r30
	bl       __dl__FPv

lbl_804557A0:
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
 * Address:	804557BC
 * Size:	0000DC
 */
void DrawBuffer::create(Sys::DrawBuffer::CreateArg&)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	stw      r28, 0x10(r1)
	mr       r28, r4
	lhz      r3, 0x18(r3)
	lhz      r0, 4(r4)
	lwz      r29, 0(r4)
	or       r0, r3, r0
	sth      r0, 0x18(r31)
	lwz      r0, 8(r4)
	stw      r0, 0x14(r31)
	lwz      r0, 0x1c(r31)
	cmplwi   r0, 0
	beq      lbl_80455824
	lis      r3, lbl_8049BAD8@ha
	lis      r5, lbl_8049BAEC@ha
	addi     r3, r3, lbl_8049BAD8@l
	li       r4, 0x2a
	addi     r5, r5, lbl_8049BAEC@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80455824:
	li       r3, 0x24
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_80455844
	bl       initialize__13J3DDrawBufferFv
	mr       r3, r30
	mr       r4, r29
	bl       allocBuffer__13J3DDrawBufferFUl

lbl_80455844:
	stw      r30, 0x1c(r31)
	lwz      r0, 0xc(r28)
	lwz      r3, 0x1c(r31)
	stw      r0, 0xc(r3)
	lwz      r0, 0x10(r28)
	lwz      r3, 0x1c(r31)
	stw      r0, 8(r3)
	lwz      r3, 0x1c(r31)
	lwz      r0, 8(r3)
	stw      r0, 0x28(r31)
	lwz      r3, 0x1c(r31)
	lwz      r0, 0xc(r3)
	stw      r0, 0x24(r31)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r28, 0x10(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80455898
 * Size:	000088
 */
void DrawBuffer::draw(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r0, 0x1c(r3)
	cmplwi   r0, 0
	bne      lbl_804558D4
	lis      r3, lbl_8049BAD8@ha
	lis      r5, lbl_8049BAEC@ha
	addi     r3, r3, lbl_8049BAD8@l
	li       r4, 0x39
	addi     r5, r5, lbl_8049BAEC@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_804558D4:
	lhz      r0, 0x18(r31)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_804558F4
	lis      r3, j3dSys@ha
	li       r0, 4
	addi     r3, r3, j3dSys@l
	stw      r0, 0x50(r3)
	b        lbl_80455904

lbl_804558F4:
	lis      r3, j3dSys@ha
	li       r0, 3
	addi     r3, r3, j3dSys@l
	stw      r0, 0x50(r3)

lbl_80455904:
	lwz      r3, 0x1c(r31)
	bl       draw__13J3DDrawBufferCFv
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80455920
 * Size:	000058
 */
void DrawBuffer::frameInit(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r0, 0x1c(r3)
	cmplwi   r0, 0
	bne      lbl_8045595C
	lis      r3, lbl_8049BAD8@ha
	lis      r5, lbl_8049BAEC@ha
	addi     r3, r3, lbl_8049BAD8@l
	li       r4, 0x45
	addi     r5, r5, lbl_8049BAEC@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8045595C:
	lwz      r3, 0x1c(r31)
	bl       frameInit__13J3DDrawBufferFv
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80455978
 * Size:	000054
 */
DrawBuffers::DrawBuffers(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       __ct__5CNodeFv
	lis      r4, __vt__Q23Sys11DrawBuffers@ha
	lis      r3, lbl_8049BAF8@ha
	addi     r0, r4, __vt__Q23Sys11DrawBuffers@l
	li       r4, 0
	stw      r0, 0(r31)
	addi     r0, r3, lbl_8049BAF8@l
	mr       r3, r31
	stw      r4, 0x18(r31)
	stw      r4, 0x1c(r31)
	stw      r0, 0x14(r31)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	804559CC
 * Size:	000060
 */
DrawBuffers::~DrawBuffers(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_80455A10
	lis      r5, __vt__Q23Sys11DrawBuffers@ha
	li       r4, 0
	addi     r0, r5, __vt__Q23Sys11DrawBuffers@l
	stw      r0, 0(r30)
	bl       __dt__5CNodeFv
	extsh.   r0, r31
	ble      lbl_80455A10
	mr       r3, r30
	bl       __dl__FPv

lbl_80455A10:
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
 * Address:	80455A2C
 * Size:	000098
 */
void DrawBuffers::allocate(int)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r4
	mr       r31, r30
	stw      r29, 0x14(r1)
	mr       r29, r3
	mulli    r3, r31, 0x2c
	addi     r3, r3, 0x10
	bl       __nwa__FUl
	lis      r4, __ct__Q23Sys10DrawBufferFv@ha
	lis      r5, __dt__Q23Sys10DrawBufferFv@ha
	addi     r4, r4, __ct__Q23Sys10DrawBufferFv@l
	mr       r7, r31
	addi     r5, r5, __dt__Q23Sys10DrawBufferFv@l
	li       r6, 0x2c
	bl       __construct_new_array
	stw      r3, 0x18(r29)
	li       r31, 0
	stw      r30, 0x1c(r29)
	b        lbl_80455A9C

lbl_80455A88:
	mr       r3, r29
	mr       r4, r31
	bl       get__Q23Sys11DrawBuffersFi
	stw      r31, 0x20(r3)
	addi     r31, r31, 1

lbl_80455A9C:
	lwz      r0, 0x1c(r29)
	cmpw     r31, r0
	blt      lbl_80455A88
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
 * Address:	80455AC4
 * Size:	00008C
 */
void DrawBuffers::get(int)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r0, 0x18(r3)
	li       r3, 0
	cmplwi   r0, 0
	beq      lbl_80455B08
	cmpwi    r31, 0
	blt      lbl_80455B08
	lwz      r0, 0x1c(r30)
	cmpw     r31, r0
	bge      lbl_80455B08
	li       r3, 1

lbl_80455B08:
	clrlwi.  r0, r3, 0x18
	bne      lbl_80455B2C
	lis      r3, lbl_8049BAD8@ha
	lis      r5, lbl_8049BAEC@ha
	addi     r3, r3, lbl_8049BAD8@l
	li       r4, 0x94
	addi     r5, r5, lbl_8049BAEC@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80455B2C:
	mulli    r0, r31, 0x2c
	lwz      r3, 0x18(r30)
	add      r3, r3, r0
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80455B50
 * Size:	0000E0
 */
void DrawBuffers::frameInitAll(void)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	li       r30, 0
	stw      r29, 0x14(r1)
	li       r29, 0
	stw      r28, 0x10(r1)
	mr       r28, r3
	b        lbl_80455C04

lbl_80455B7C:
	lwz      r0, 0x18(r28)
	li       r3, 0
	cmplwi   r0, 0
	beq      lbl_80455BA0
	cmpwi    r29, 0
	blt      lbl_80455BA0
	cmpw     r29, r4
	bge      lbl_80455BA0
	li       r3, 1

lbl_80455BA0:
	clrlwi.  r0, r3, 0x18
	bne      lbl_80455BC4
	lis      r3, lbl_8049BAD8@ha
	lis      r5, lbl_8049BAEC@ha
	addi     r3, r3, lbl_8049BAD8@l
	li       r4, 0x94
	addi     r5, r5, lbl_8049BAEC@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80455BC4:
	lwz      r0, 0x18(r28)
	add      r31, r0, r30
	lwz      r0, 0x1c(r31)
	cmplwi   r0, 0
	bne      lbl_80455BF4
	lis      r3, lbl_8049BAD8@ha
	lis      r5, lbl_8049BAEC@ha
	addi     r3, r3, lbl_8049BAD8@l
	li       r4, 0x45
	addi     r5, r5, lbl_8049BAEC@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80455BF4:
	lwz      r3, 0x1c(r31)
	bl       frameInit__13J3DDrawBufferFv
	addi     r30, r30, 0x2c
	addi     r29, r29, 1

lbl_80455C04:
	lwz      r4, 0x1c(r28)
	cmpw     r29, r4
	blt      lbl_80455B7C
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
} // namespace Sys
