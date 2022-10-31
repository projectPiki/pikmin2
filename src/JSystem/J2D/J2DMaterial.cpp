#include "Dolphin/gx.h"
#include "JSystem/J2D/J2DAnm.h"
#include "JSystem/J2D/J2DIndBlock.h"
#include "JSystem/J2D/J2DMaterial.h"
#include "JSystem/J2D/J2DTevBlock.h"
#include "JSystem/J2D/J2DTypes.h"
#include "JSystem/JKR/JKRHeap.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__15J2DIndBlockNull
    __vt__15J2DIndBlockNull:
        .4byte 0
        .4byte 0
        .4byte initialize__11J2DIndBlockFv
        .4byte setGX__15J2DIndBlockNullFv
        .4byte getType__15J2DIndBlockNullFv
        .4byte setIndTexStageNum__11J2DIndBlockFUc
        .4byte getIndTexStageNum__11J2DIndBlockCFv
        .4byte setIndTexOrder__11J2DIndBlockFUl14J2DIndTexOrder
        .4byte getIndTexOrder__11J2DIndBlockFUl
        .4byte setIndTexMtx__11J2DIndBlockFUl12J2DIndTexMtx
        .4byte getIndTexMtx__11J2DIndBlockFUl
        .4byte setIndTexCoordScale__11J2DIndBlockFUl19J2DIndTexCoordScale
        .4byte getIndTexCoordScale__11J2DIndBlockFUl
        .4byte __dt__15J2DIndBlockNullFv
    .global __vt__11J2DMaterial
    __vt__11J2DMaterial:
        .4byte 0
        .4byte 0
        .4byte __dt__11J2DMaterialFv
    .global __vt__13J2DColorBlock
    __vt__13J2DColorBlock:
        .4byte 0
        .4byte 0
        .4byte __dt__13J2DColorBlockFv

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_805168C8
    lbl_805168C8:
        .4byte 0x43B40000
    .global lbl_805168CC
    lbl_805168CC:
        .4byte 0x477FFF00
    .global lbl_805168D0
    lbl_805168D0:
        .4byte 0x43300000
        .4byte 0x00000000
*/

/*
 * --INFO--
 * Address:	80051EA4
 * Size:	000120
 * __ct__11J2DMaterialFv
 */
J2DMaterial::J2DMaterial()
    : m_colorBlock()
    , m_texGenBlock()
    , m_peBlock()
{
	m_pane     = nullptr;
	_0C        = -1;
	m_tevBlock = nullptr;
	m_indBlock = nullptr;
	_84        = nullptr;
	_08        = 1;
	_0E        = 1;
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r4, __vt__11J2DMaterial@ha
	li       r5, 0
	stw      r0, 0x14(r1)
	addi     r0, r4, __vt__11J2DMaterial@l
	lis      r4, __ct__Q28JUtility6TColorFv@ha
	li       r6, 4
	stw      r31, 0xc(r1)
	mr       r31, r3
	lis      r3, __vt__13J2DColorBlock@ha
	addi     r4, r4, __ct__Q28JUtility6TColorFv@l
	stw      r0, 0(r31)
	addi     r0, r3, __vt__13J2DColorBlock@l
	addi     r3, r31, 0x10
	li       r7, 2
	stw      r0, 0x24(r31)
	bl       __construct_array
	lis      r4, __ct__12J2DColorChanFv@ha
	addi     r3, r31, 0x1a
	addi     r4, r4, __ct__12J2DColorChanFv@l
	li       r5, 0
	li       r6, 2
	li       r7, 4
	bl       __construct_array
	addi     r3, r31, 0x10
	bl       initialize__13J2DColorBlockFv
	lis      r3, __vt__14J2DTexGenBlock@ha
	lis      r4, __ct__11J2DTexCoordFv@ha
	addi     r0, r3, __vt__14J2DTexGenBlock@l
	li       r5, 0
	stw      r0, 0x6c(r31)
	addi     r3, r31, 0x2c
	addi     r4, r4, __ct__11J2DTexCoordFv@l
	li       r6, 4
	li       r7, 8
	bl       __construct_array
	addi     r3, r31, 0x28
	bl       initialize__14J2DTexGenBlockFv
	lhz      r5, j2dDefaultAlphaCmp@sda21(r2)
	li       r0, 0
	addi     r4, r2, j2dDefaultBlendInfo@sda21
	addi     r3, r31, 0x78
	sth      r5, 0x78(r31)
	stb      r0, 0x7a(r31)
	stb      r0, 0x7b(r31)
	lbz      r0, j2dDefaultBlendInfo@sda21(r2)
	stb      r0, 0x7c(r31)
	lbz      r0, 1(r4)
	stb      r0, 0x7d(r31)
	lbz      r0, 2(r4)
	stb      r0, 0x7e(r31)
	lbz      r0, 3(r4)
	stb      r0, 0x7f(r31)
	bl       initialize__10J2DPEBlockFv
	li       r5, 0
	lis      r3, 0x0000FFFF@ha
	stw      r5, 4(r31)
	addi     r4, r3, 0x0000FFFF@l
	li       r0, 1
	mr       r3, r31
	sth      r4, 0xc(r31)
	stw      r5, 0x70(r31)
	stw      r5, 0x74(r31)
	stw      r5, 0x84(r31)
	stw      r0, 8(r31)
	stb      r0, 0xe(r31)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80051FC4
 * Size:	000020
 */
J2DTexCoord::J2DTexCoord()
{
	/*
	lis      r4, j2dDefaultTexCoordInfo@ha
	lbzu     r0, j2dDefaultTexCoordInfo@l(r4)
	stb      r0, 0(r3)
	lbz      r0, 1(r4)
	stb      r0, 1(r3)
	lbz      r0, 2(r4)
	stb      r0, 2(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80051FE4
 * Size:	000048
 */
J2DColorBlock::~J2DColorBlock()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	or.      r31, r3, r3
	beq      lbl_80052014
	lis      r5, __vt__13J2DColorBlock@ha
	extsh.   r0, r4
	addi     r0, r5, __vt__13J2DColorBlock@l
	stw      r0, 0x14(r31)
	ble      lbl_80052014
	bl       __dl__FPv

lbl_80052014:
	lwz      r0, 0x14(r1)
	mr       r3, r31
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8005202C
 * Size:	000010
 */
// J2DColorChan::J2DColorChan()
// {
// 	m_data = j2dDefaultColorChanInfo._01;
// 	/*
// 	addi     r4, r2, j2dDefaultColorChanInfo@sda21
// 	lbz      r0, 1(r4)
// 	sth      r0, 0(r3)
// 	blr
// 	*/
// }

/*
 * --INFO--
 * Address:	8005203C
 * Size:	00014C
 */
J2DMaterial::J2DMaterial(unsigned long)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r5, __vt__11J2DMaterial@ha
	li       r6, 4
	stw      r0, 0x14(r1)
	addi     r0, r5, __vt__11J2DMaterial@l
	li       r5, 0
	li       r7, 2
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	lis      r3, __vt__13J2DColorBlock@ha
	stw      r0, 0(r30)
	addi     r0, r3, __vt__13J2DColorBlock@l
	lis      r3, __ct__Q28JUtility6TColorFv@ha
	stw      r0, 0x24(r30)
	addi     r4, r3, __ct__Q28JUtility6TColorFv@l
	addi     r3, r30, 0x10
	bl       __construct_array
	lis      r4, __ct__12J2DColorChanFv@ha
	addi     r3, r30, 0x1a
	addi     r4, r4, __ct__12J2DColorChanFv@l
	li       r5, 0
	li       r6, 2
	li       r7, 4
	bl       __construct_array
	addi     r3, r30, 0x10
	bl       initialize__13J2DColorBlockFv
	lis      r3, __vt__14J2DTexGenBlock@ha
	lis      r4, __ct__11J2DTexCoordFv@ha
	addi     r0, r3, __vt__14J2DTexGenBlock@l
	li       r5, 0
	stw      r0, 0x6c(r30)
	addi     r3, r30, 0x2c
	addi     r4, r4, __ct__11J2DTexCoordFv@l
	li       r6, 4
	li       r7, 8
	bl       __construct_array
	addi     r3, r30, 0x28
	bl       initialize__14J2DTexGenBlockFv
	lhz      r5, j2dDefaultAlphaCmp@sda21(r2)
	li       r0, 0
	addi     r4, r2, j2dDefaultBlendInfo@sda21
	addi     r3, r30, 0x78
	sth      r5, 0x78(r30)
	stb      r0, 0x7a(r30)
	stb      r0, 0x7b(r30)
	lbz      r0, j2dDefaultBlendInfo@sda21(r2)
	stb      r0, 0x7c(r30)
	lbz      r0, 1(r4)
	stb      r0, 0x7d(r30)
	lbz      r0, 2(r4)
	stb      r0, 0x7e(r30)
	lbz      r0, 3(r4)
	stb      r0, 0x7f(r30)
	bl       initialize__10J2DPEBlockFv
	li       r0, 0
	lis      r3, 0x0000FFFF@ha
	stw      r0, 4(r30)
	addi     r0, r3, 0x0000FFFF@l
	rlwinm   r3, r31, 0x10, 0x1b, 0x1f
	li       r4, 1
	sth      r0, 0xc(r30)
	bl       createTevBlock__11J2DMaterialFib
	stw      r3, 0x70(r30)
	rlwinm   r3, r31, 8, 0x1f, 0x1f
	li       r4, 1
	bl       createIndBlock__11J2DMaterialFib
	stw      r3, 0x74(r30)
	li       r4, 0
	li       r0, 1
	mr       r3, r30
	stw      r4, 0x84(r30)
	stw      r0, 8(r30)
	stb      r0, 0xe(r30)
	stb      r0, 0xf(r30)
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
 * Address:	80052188
 * Size:	0000C0
 */
J2DMaterial::~J2DMaterial()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_8005222C
	lis      r3, __vt__11J2DMaterial@ha
	addi     r0, r3, __vt__11J2DMaterial@l
	stw      r0, 0(r30)
	lwz      r3, 0x70(r30)
	cmplwi   r3, 0
	beq      lbl_800521D4
	lwz      r12, 0(r3)
	li       r4, 1
	lwz      r12, 0xb8(r12)
	mtctr    r12
	bctrl

lbl_800521D4:
	lwz      r3, 0x74(r30)
	cmplwi   r3, 0
	beq      lbl_800521F4
	lwz      r12, 0(r3)
	li       r4, 1
	lwz      r12, 0x34(r12)
	mtctr    r12
	bctrl

lbl_800521F4:
	lwz      r3, 0x84(r30)
	bl       __dl__FPv
	addi     r3, r30, 0x28
	li       r4, -1
	bl       __dt__14J2DTexGenBlockFv
	addic.   r0, r30, 0x10
	beq      lbl_8005221C
	lis      r3, __vt__13J2DColorBlock@ha
	addi     r0, r3, __vt__13J2DColorBlock@l
	stw      r0, 0x24(r30)

lbl_8005221C:
	extsh.   r0, r31
	ble      lbl_8005222C
	mr       r3, r30
	bl       __dl__FPv

lbl_8005222C:
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
 * Address:	80052248
 * Size:	000084
 */
void J2DMaterial::setGX()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lbz      r0, 0xe(r3)
	cmplwi   r0, 0
	beq      lbl_800522B8
	addi     r3, r31, 0x10
	bl       setGX__13J2DColorBlockFv
	addi     r3, r31, 0x28
	bl       setGX__14J2DTexGenBlockFv
	lwz      r3, 0x70(r31)
	cmplwi   r3, 0
	beq      lbl_80052294
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl

lbl_80052294:
	lwz      r3, 0x74(r31)
	cmplwi   r3, 0
	beq      lbl_800522B0
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl

lbl_800522B0:
	addi     r3, r31, 0x78
	bl       setGX__10J2DPEBlockFv

lbl_800522B8:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800522CC
 * Size:	0001B4
 */
J2DTevBlock* J2DMaterial::createTevBlock(int stageCount, bool p2)
{
	if (p2) {
		if (stageCount <= 1) {
			return new J2DTevBlock1();
		}
		if (stageCount == 2) {
			return new J2DTevBlock2();
		}
		if (stageCount <= 4) {
			return new J2DTevBlock4();
		}
		if (stageCount <= 8) {
			return new J2DTevBlock8();
		}
		return new J2DTevBlock16();
	}
	if (stageCount <= 1) {
		return new (-4) J2DTevBlock1();
	}
	if (stageCount == 2) {
		return new (-4) J2DTevBlock2();
	}
	if (stageCount <= 4) {
		return new (-4) J2DTevBlock4();
	}
	if (stageCount <= 8) {
		return new (-4) J2DTevBlock8();
	}
	return new (-4) J2DTevBlock16();
}

/*
 * --INFO--
 * Address:	80052480
 * Size:	0001D8
 */
J2DIndBlock* J2DMaterial::createIndBlock(int stageCount, bool p2)
{
	if (p2) {
		if (stageCount != 0) {
			return new J2DIndBlockFull();
		}
		return new J2DIndBlockNull();
	}
	if (stageCount != 0) {
		return new (-4) J2DIndBlockFull();
	}
	return new (-4) J2DIndBlockNull();
}

/*
 * --INFO--
 * Address:	80052658
 * Size:	000018
 */
J2DIndTexCoordScale::J2DIndTexCoordScale()
{
	/*
	lbz      r0, j2dDefaultIndTexCoordScaleInfo@sda21(r2)
	addi     r4, r2, j2dDefaultIndTexCoordScaleInfo@sda21
	stb      r0, 0(r3)
	lbz      r0, 1(r4)
	stb      r0, 1(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80052670
 * Size:	000040
 */
J2DIndTexMtx::J2DIndTexMtx()
{
	/*
	lis      r4, j2dDefaultIndTexMtxInfo@ha
	lfsu     f0, j2dDefaultIndTexMtxInfo@l(r4)
	stfs     f0, 0(r3)
	lfs      f0, 4(r4)
	stfs     f0, 4(r3)
	lfs      f0, 8(r4)
	stfs     f0, 8(r3)
	lfs      f0, 0xc(r4)
	stfs     f0, 0xc(r3)
	lfs      f0, 0x10(r4)
	stfs     f0, 0x10(r3)
	lfs      f0, 0x14(r4)
	stfs     f0, 0x14(r3)
	lbz      r0, 0x18(r4)
	stb      r0, 0x18(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	800526B0
 * Size:	000018
 */
J2DIndTexOrder::J2DIndTexOrder()
{
	/*
	lbz      r0, j2dDefaultIndTexOrderNull@sda21(r2)
	addi     r4, r2, j2dDefaultIndTexOrderNull@sda21
	stb      r0, 0(r3)
	lbz      r0, 1(r4)
	stb      r0, 1(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	800526C8
 * Size:	0000C8
 */
void J2DMaterial::makeAnmPointer()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r0, 0x84(r3)
	cmplwi   r0, 0
	bne      lbl_8005277C
	li       r3, 0x44
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_80052778
	li       r5, 0
	lis      r4, 0x0000FFFF@ha
	stw      r5, 0(r3)
	addi     r0, r4, 0x0000FFFF@l
	sth      r0, 0x10(r3)
	stw      r5, 4(r3)
	sth      r0, 0x12(r3)
	sth      r0, 0x14(r3)
	sth      r0, 0x16(r3)
	sth      r0, 0x18(r3)
	sth      r0, 0x1a(r3)
	sth      r0, 0x1c(r3)
	sth      r0, 0x1e(r3)
	sth      r0, 0x20(r3)
	stw      r5, 8(r3)
	sth      r0, 0x22(r3)
	sth      r0, 0x24(r3)
	sth      r0, 0x26(r3)
	sth      r0, 0x28(r3)
	sth      r0, 0x2a(r3)
	sth      r0, 0x2c(r3)
	sth      r0, 0x2e(r3)
	sth      r0, 0x30(r3)
	stw      r5, 0xc(r3)
	sth      r0, 0x32(r3)
	sth      r0, 0x34(r3)
	sth      r0, 0x36(r3)
	sth      r0, 0x38(r3)
	sth      r0, 0x3a(r3)
	sth      r0, 0x3c(r3)
	sth      r0, 0x3e(r3)
	sth      r0, 0x40(r3)

lbl_80052778:
	stw      r3, 0x84(r31)

lbl_8005277C:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80052790
 * Size:	000144
 */
void J2DMaterial::setAnimation(J2DAnmColor*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	or.      r31, r4, r4
	stw      r30, 8(r1)
	mr       r30, r3
	bne      lbl_800527BC
	lwz      r0, 0x84(r30)
	cmplwi   r0, 0
	beq      lbl_800528BC

lbl_800527BC:
	lwz      r0, 0x84(r30)
	cmplwi   r0, 0
	bne      lbl_8005285C
	li       r3, 0x44
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_80052858
	li       r5, 0
	lis      r4, 0x0000FFFF@ha
	stw      r5, 0(r3)
	addi     r0, r4, 0x0000FFFF@l
	sth      r0, 0x10(r3)
	stw      r5, 4(r3)
	sth      r0, 0x12(r3)
	sth      r0, 0x14(r3)
	sth      r0, 0x16(r3)
	sth      r0, 0x18(r3)
	sth      r0, 0x1a(r3)
	sth      r0, 0x1c(r3)
	sth      r0, 0x1e(r3)
	sth      r0, 0x20(r3)
	stw      r5, 8(r3)
	sth      r0, 0x22(r3)
	sth      r0, 0x24(r3)
	sth      r0, 0x26(r3)
	sth      r0, 0x28(r3)
	sth      r0, 0x2a(r3)
	sth      r0, 0x2c(r3)
	sth      r0, 0x2e(r3)
	sth      r0, 0x30(r3)
	stw      r5, 0xc(r3)
	sth      r0, 0x32(r3)
	sth      r0, 0x34(r3)
	sth      r0, 0x36(r3)
	sth      r0, 0x38(r3)
	sth      r0, 0x3a(r3)
	sth      r0, 0x3c(r3)
	sth      r0, 0x3e(r3)
	sth      r0, 0x40(r3)

lbl_80052858:
	stw      r3, 0x84(r30)

lbl_8005285C:
	lwz      r4, 0x84(r30)
	lis      r3, 0x0000FFFF@ha
	cmplwi   r31, 0
	stw      r31, 0(r4)
	addi     r0, r3, 0x0000FFFF@l
	lwz      r3, 0x84(r30)
	sth      r0, 0x10(r3)
	beq      lbl_800528BC
	lhz      r4, 0x18(r31)
	li       r6, 0
	lhz      r5, 0xc(r30)
	b        lbl_800528B0

lbl_8005288C:
	lwz      r3, 0x1c(r31)
	rlwinm   r0, r6, 1, 0xf, 0x1e
	lhzx     r0, r3, r0
	cmplw    r5, r0
	bne      lbl_800528AC
	lwz      r3, 0x84(r30)
	sth      r6, 0x10(r3)
	b        lbl_800528BC

lbl_800528AC:
	addi     r6, r6, 1

lbl_800528B0:
	clrlwi   r0, r6, 0x10
	cmplw    r0, r4
	blt      lbl_8005288C

lbl_800528BC:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800528D4
 * Size:	0001A4
 */
void J2DMaterial::setAnimation(J2DAnmTextureSRTKey*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	or.      r31, r4, r4
	stw      r30, 8(r1)
	mr       r30, r3
	bne      lbl_80052900
	lwz      r0, 0x84(r30)
	cmplwi   r0, 0
	beq      lbl_80052A60

lbl_80052900:
	lwz      r0, 0x84(r30)
	cmplwi   r0, 0
	bne      lbl_800529A0
	li       r3, 0x44
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_8005299C
	li       r5, 0
	lis      r4, 0x0000FFFF@ha
	stw      r5, 0(r3)
	addi     r0, r4, 0x0000FFFF@l
	sth      r0, 0x10(r3)
	stw      r5, 4(r3)
	sth      r0, 0x12(r3)
	sth      r0, 0x14(r3)
	sth      r0, 0x16(r3)
	sth      r0, 0x18(r3)
	sth      r0, 0x1a(r3)
	sth      r0, 0x1c(r3)
	sth      r0, 0x1e(r3)
	sth      r0, 0x20(r3)
	stw      r5, 8(r3)
	sth      r0, 0x22(r3)
	sth      r0, 0x24(r3)
	sth      r0, 0x26(r3)
	sth      r0, 0x28(r3)
	sth      r0, 0x2a(r3)
	sth      r0, 0x2c(r3)
	sth      r0, 0x2e(r3)
	sth      r0, 0x30(r3)
	stw      r5, 0xc(r3)
	sth      r0, 0x32(r3)
	sth      r0, 0x34(r3)
	sth      r0, 0x36(r3)
	sth      r0, 0x38(r3)
	sth      r0, 0x3a(r3)
	sth      r0, 0x3c(r3)
	sth      r0, 0x3e(r3)
	sth      r0, 0x40(r3)

lbl_8005299C:
	stw      r3, 0x84(r30)

lbl_800529A0:
	lwz      r4, 0x84(r30)
	lis      r3, 0x0000FFFF@ha
	addi     r0, r3, 0x0000FFFF@l
	cmplwi   r31, 0
	stw      r31, 4(r4)
	lwz      r3, 0x84(r30)
	sth      r0, 0x12(r3)
	lwz      r3, 0x84(r30)
	sth      r0, 0x14(r3)
	lwz      r3, 0x84(r30)
	sth      r0, 0x16(r3)
	lwz      r3, 0x84(r30)
	sth      r0, 0x18(r3)
	lwz      r3, 0x84(r30)
	sth      r0, 0x1a(r3)
	lwz      r3, 0x84(r30)
	sth      r0, 0x1c(r3)
	lwz      r3, 0x84(r30)
	sth      r0, 0x1e(r3)
	lwz      r3, 0x84(r30)
	sth      r0, 0x20(r3)
	beq      lbl_80052A60
	lis      r3, 0x55555556@ha
	lhz      r0, 0x14(r31)
	addi     r3, r3, 0x55555556@l
	lhz      r6, 0xc(r30)
	mulhw    r3, r3, r0
	li       r8, 0
	srwi     r0, r3, 0x1f
	add      r0, r3, r0
	clrlwi   r5, r0, 0x10
	b        lbl_80052A54

lbl_80052A20:
	lwz      r3, 0x34(r31)
	rlwinm   r0, r8, 1, 0xf, 0x1e
	clrlwi   r7, r8, 0x10
	lhzx     r0, r3, r0
	cmplw    r6, r0
	bne      lbl_80052A50
	lwz      r3, 0x30(r31)
	lwz      r4, 0x84(r30)
	lbzx     r0, r3, r7
	slwi     r3, r0, 1
	addi     r0, r3, 0x12
	sthx     r8, r4, r0

lbl_80052A50:
	addi     r8, r8, 1

lbl_80052A54:
	clrlwi   r0, r8, 0x10
	cmplw    r0, r5
	blt      lbl_80052A20

lbl_80052A60:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80052A78
 * Size:	000194
 */
void J2DMaterial::setAnimation(J2DAnmTexPattern*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	or.      r31, r4, r4
	stw      r30, 8(r1)
	mr       r30, r3
	bne      lbl_80052AA4
	lwz      r0, 0x84(r30)
	cmplwi   r0, 0
	beq      lbl_80052BF4

lbl_80052AA4:
	lwz      r0, 0x84(r30)
	cmplwi   r0, 0
	bne      lbl_80052B44
	li       r3, 0x44
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_80052B40
	li       r5, 0
	lis      r4, 0x0000FFFF@ha
	stw      r5, 0(r3)
	addi     r0, r4, 0x0000FFFF@l
	sth      r0, 0x10(r3)
	stw      r5, 4(r3)
	sth      r0, 0x12(r3)
	sth      r0, 0x14(r3)
	sth      r0, 0x16(r3)
	sth      r0, 0x18(r3)
	sth      r0, 0x1a(r3)
	sth      r0, 0x1c(r3)
	sth      r0, 0x1e(r3)
	sth      r0, 0x20(r3)
	stw      r5, 8(r3)
	sth      r0, 0x22(r3)
	sth      r0, 0x24(r3)
	sth      r0, 0x26(r3)
	sth      r0, 0x28(r3)
	sth      r0, 0x2a(r3)
	sth      r0, 0x2c(r3)
	sth      r0, 0x2e(r3)
	sth      r0, 0x30(r3)
	stw      r5, 0xc(r3)
	sth      r0, 0x32(r3)
	sth      r0, 0x34(r3)
	sth      r0, 0x36(r3)
	sth      r0, 0x38(r3)
	sth      r0, 0x3a(r3)
	sth      r0, 0x3c(r3)
	sth      r0, 0x3e(r3)
	sth      r0, 0x40(r3)

lbl_80052B40:
	stw      r3, 0x84(r30)

lbl_80052B44:
	lwz      r4, 0x84(r30)
	lis      r3, 0x0000FFFF@ha
	addi     r0, r3, 0x0000FFFF@l
	cmplwi   r31, 0
	stw      r31, 8(r4)
	lwz      r3, 0x84(r30)
	sth      r0, 0x22(r3)
	lwz      r3, 0x84(r30)
	sth      r0, 0x24(r3)
	lwz      r3, 0x84(r30)
	sth      r0, 0x26(r3)
	lwz      r3, 0x84(r30)
	sth      r0, 0x28(r3)
	lwz      r3, 0x84(r30)
	sth      r0, 0x2a(r3)
	lwz      r3, 0x84(r30)
	sth      r0, 0x2c(r3)
	lwz      r3, 0x84(r30)
	sth      r0, 0x2e(r3)
	lwz      r3, 0x84(r30)
	sth      r0, 0x30(r3)
	beq      lbl_80052BF4
	lhz      r5, 0x1a(r31)
	li       r8, 0
	lhz      r6, 0xc(r30)
	lwz      r7, 0x14(r31)
	b        lbl_80052BE8

lbl_80052BB0:
	lwz      r3, 0x1c(r31)
	rlwinm   r0, r8, 1, 0xf, 0x1e
	clrlwi   r4, r8, 0x10
	lhzx     r0, r3, r0
	cmplw    r6, r0
	bne      lbl_80052BE4
	slwi     r3, r4, 3
	lwz      r4, 0x84(r30)
	addi     r0, r3, 4
	lbzx     r0, r7, r0
	slwi     r3, r0, 1
	addi     r0, r3, 0x22
	sthx     r8, r4, r0

lbl_80052BE4:
	addi     r8, r8, 1

lbl_80052BE8:
	clrlwi   r0, r8, 0x10
	cmplw    r0, r5
	blt      lbl_80052BB0

lbl_80052BF4:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80052C0C
 * Size:	0001FC
 */
void J2DMaterial::setAnimation(J2DAnmTevRegKey*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	or.      r31, r4, r4
	stw      r30, 8(r1)
	mr       r30, r3
	bne      lbl_80052C38
	lwz      r0, 0x84(r30)
	cmplwi   r0, 0
	beq      lbl_80052DF0

lbl_80052C38:
	lwz      r0, 0x84(r30)
	cmplwi   r0, 0
	bne      lbl_80052CD8
	li       r3, 0x44
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_80052CD4
	li       r5, 0
	lis      r4, 0x0000FFFF@ha
	stw      r5, 0(r3)
	addi     r0, r4, 0x0000FFFF@l
	sth      r0, 0x10(r3)
	stw      r5, 4(r3)
	sth      r0, 0x12(r3)
	sth      r0, 0x14(r3)
	sth      r0, 0x16(r3)
	sth      r0, 0x18(r3)
	sth      r0, 0x1a(r3)
	sth      r0, 0x1c(r3)
	sth      r0, 0x1e(r3)
	sth      r0, 0x20(r3)
	stw      r5, 8(r3)
	sth      r0, 0x22(r3)
	sth      r0, 0x24(r3)
	sth      r0, 0x26(r3)
	sth      r0, 0x28(r3)
	sth      r0, 0x2a(r3)
	sth      r0, 0x2c(r3)
	sth      r0, 0x2e(r3)
	sth      r0, 0x30(r3)
	stw      r5, 0xc(r3)
	sth      r0, 0x32(r3)
	sth      r0, 0x34(r3)
	sth      r0, 0x36(r3)
	sth      r0, 0x38(r3)
	sth      r0, 0x3a(r3)
	sth      r0, 0x3c(r3)
	sth      r0, 0x3e(r3)
	sth      r0, 0x40(r3)

lbl_80052CD4:
	stw      r3, 0x84(r30)

lbl_80052CD8:
	lwz      r4, 0x84(r30)
	lis      r3, 0x0000FFFF@ha
	addi     r0, r3, 0x0000FFFF@l
	cmplwi   r31, 0
	stw      r31, 0xc(r4)
	lwz      r3, 0x84(r30)
	sth      r0, 0x32(r3)
	lwz      r3, 0x84(r30)
	sth      r0, 0x34(r3)
	lwz      r3, 0x84(r30)
	sth      r0, 0x36(r3)
	lwz      r3, 0x84(r30)
	sth      r0, 0x38(r3)
	beq      lbl_80052D68
	lhz      r6, 0x10(r31)
	li       r8, 0
	lhz      r7, 0xc(r30)
	b        lbl_80052D5C

lbl_80052D20:
	lwz      r3, 0x24(r31)
	rlwinm   r0, r8, 1, 0xf, 0x1e
	clrlwi   r4, r8, 0x10
	lhzx     r0, r3, r0
	cmplw    r7, r0
	bne      lbl_80052D58
	mulli    r3, r4, 0x1c
	lwz      r4, 0x4c(r31)
	lwz      r5, 0x84(r30)
	addi     r0, r3, 0x18
	lbzx     r0, r4, r0
	slwi     r3, r0, 1
	addi     r0, r3, 0x32
	sthx     r8, r5, r0

lbl_80052D58:
	addi     r8, r8, 1

lbl_80052D5C:
	clrlwi   r0, r8, 0x10
	cmplw    r0, r6
	blt      lbl_80052D20

lbl_80052D68:
	lis      r4, 0x0000FFFF@ha
	lwz      r3, 0x84(r30)
	addi     r0, r4, 0x0000FFFF@l
	cmplwi   r31, 0
	sth      r0, 0x3a(r3)
	lwz      r3, 0x84(r30)
	sth      r0, 0x3c(r3)
	lwz      r3, 0x84(r30)
	sth      r0, 0x3e(r3)
	lwz      r3, 0x84(r30)
	sth      r0, 0x40(r3)
	beq      lbl_80052DF0
	lhz      r6, 0x12(r31)
	li       r8, 0
	lhz      r7, 0xc(r30)
	b        lbl_80052DE4

lbl_80052DA8:
	lwz      r3, 0x38(r31)
	rlwinm   r0, r8, 1, 0xf, 0x1e
	clrlwi   r4, r8, 0x10
	lhzx     r0, r3, r0
	cmplw    r7, r0
	bne      lbl_80052DE0
	mulli    r3, r4, 0x1c
	lwz      r4, 0x50(r31)
	lwz      r5, 0x84(r30)
	addi     r0, r3, 0x18
	lbzx     r0, r4, r0
	slwi     r3, r0, 1
	addi     r0, r3, 0x3a
	sthx     r8, r5, r0

lbl_80052DE0:
	addi     r8, r8, 1

lbl_80052DE4:
	clrlwi   r0, r8, 0x10
	cmplw    r0, r6
	blt      lbl_80052DA8

lbl_80052DF0:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80052E08
 * Size:	000470
 */
void J2DMaterial::animation()
{
	/*
	stwu     r1, -0x110(r1)
	mflr     r0
	stw      r0, 0x114(r1)
	stfd     f31, 0x100(r1)
	psq_st   f31, 264(r1), 0, qr0
	stfd     f30, 0xf0(r1)
	psq_st   f30, 248(r1), 0, qr0
	stfd     f29, 0xe0(r1)
	psq_st   f29, 232(r1), 0, qr0
	stfd     f28, 0xd0(r1)
	psq_st   f28, 216(r1), 0, qr0
	stfd     f27, 0xc0(r1)
	psq_st   f27, 200(r1), 0, qr0
	stmw     r26, 0xa8(r1)
	mr       r28, r3
	lwz      r4, 0x84(r3)
	cmplwi   r4, 0
	beq      lbl_8005323C
	lwz      r3, 0(r4)
	cmplwi   r3, 0
	beq      lbl_80052ECC
	lhz      r4, 0x10(r4)
	cmplwi   r4, 0xffff
	beq      lbl_80052ECC
	lwz      r12, 0(r3)
	addi     r5, r1, 0x20
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x20(r1)
	stw      r0, 0xc(r1)
	lbz      r5, 0xc(r1)
	lbz      r4, 0xd(r1)
	lbz      r3, 0xe(r1)
	lbz      r0, 0xf(r1)
	stb      r5, 0x14(r1)
	stb      r4, 0x15(r1)
	stb      r3, 0x16(r1)
	stb      r0, 0x17(r1)
	lwz      r0, 0x14(r1)
	stw      r0, 0x18(r1)
	lbz      r3, 0x18(r1)
	lbz      r0, 0x19(r1)
	stb      r3, 0x10(r28)
	lbz      r3, 0x1a(r1)
	stb      r0, 0x11(r28)
	lbz      r0, 0x1b(r1)
	stb      r3, 0x12(r28)
	stb      r0, 0x13(r28)

lbl_80052ECC:
	lwz      r3, 0x84(r28)
	lwz      r0, 4(r3)
	cmplwi   r0, 0
	beq      lbl_8005300C
	lis      r3, j2dDefaultTexMtxInfo@ha
	li       r30, 0
	addi     r31, r3, j2dDefaultTexMtxInfo@l
	li       r29, 0
	b        lbl_80053000

lbl_80052EF0:
	rlwinm   r3, r30, 1, 0x17, 0x1e
	lwz      r5, 0x84(r28)
	addi     r0, r3, 0x12
	clrlwi   r27, r30, 0x18
	lhzx     r4, r5, r0
	cmplwi   r4, 0xffff
	beq      lbl_80052FF8
	lwz      r3, 4(r5)
	addi     r5, r1, 0x34
	lfs      f1, 8(r3)
	bl       calcTransform__19J2DAnmTextureSRTKeyCFfUsP17J3DTextureSRTInfo
	lha      r4, 0x3c(r1)
	lis      r0, 0x4330
	lis      r3, j2dDefaultTexMtxInfo@ha
	lfs      f7, 4(r31)
	clrlwi   r4, r4, 0x10
	lfs      f6, 8(r31)
	stw      r4, 0xa4(r1)
	addi     r6, r3, j2dDefaultTexMtxInfo@l
	lfs      f5, 0xc(r31)
	mr       r4, r27
	stw      r0, 0xa0(r1)
	addi     r3, r28, 0x28
	lfd      f1, lbl_805168D0@sda21(r2)
	addi     r5, r1, 0x48
	lfd      f0, 0xa0(r1)
	lfs      f2, lbl_805168C8@sda21(r2)
	fsubs    f1, f0, f1
	lbz      r6, 0(r6)
	lbz      r0, 1(r31)
	lfs      f0, lbl_805168CC@sda21(r2)
	fmuls    f1, f2, f1
	lfs      f4, 0x10(r31)
	lfs      f3, 0x14(r31)
	lfs      f2, 0x18(r31)
	fdivs    f29, f1, f0
	lfs      f1, 0x1c(r31)
	lfs      f0, 0x20(r31)
	stfs     f7, 0x4c(r1)
	lfs      f31, 0x34(r1)
	stfs     f6, 0x50(r1)
	stfs     f5, 0x54(r1)
	lfs      f30, 0x38(r1)
	stb      r6, 0x48(r1)
	lfs      f28, 0x40(r1)
	stb      r0, 0x49(r1)
	lfs      f27, 0x44(r1)
	stfs     f4, 0x58(r1)
	stfs     f3, 0x5c(r1)
	stfs     f2, 0x60(r1)
	stfs     f1, 0x64(r1)
	stfs     f0, 0x68(r1)
	bl       getTexMtx__14J2DTexGenBlockFUlR9J2DTexMtx
	stfs     f31, 0x58(r1)
	mr       r4, r27
	addi     r3, r28, 0x28
	addi     r5, r1, 0x48
	stfs     f30, 0x5c(r1)
	stfs     f29, 0x60(r1)
	stfs     f28, 0x64(r1)
	stfs     f27, 0x68(r1)
	bl       setTexMtx__14J2DTexGenBlockFUlR9J2DTexMtx
	slwi     r0, r27, 2
	addi     r4, r29, 0x1e
	add      r3, r28, r0
	stb      r4, 0x2e(r3)

lbl_80052FF8:
	addi     r30, r30, 1
	addi     r29, r29, 3

lbl_80053000:
	clrlwi   r0, r30, 0x18
	cmplwi   r0, 8
	blt      lbl_80052EF0

lbl_8005300C:
	lwz      r0, 0x70(r28)
	cmplwi   r0, 0
	beq      lbl_80053134
	lwz      r3, 0x84(r28)
	lwz      r0, 8(r3)
	cmplwi   r0, 0
	beq      lbl_80053134
	li       r30, 0
	b        lbl_80053128

lbl_80053030:
	rlwinm   r29, r30, 1, 0x17, 0x1e
	lwz      r3, 0x84(r28)
	addi     r0, r29, 0x22
	clrlwi   r27, r30, 0x18
	lhzx     r0, r3, r0
	cmplwi   r0, 0xffff
	beq      lbl_80053124
	lwz      r3, 0x70(r28)
	mr       r4, r27
	lwz      r12, 0(r3)
	lwz      r12, 0xa0(r12)
	mtctr    r12
	bctrl
	or.      r31, r3, r3
	beq      lbl_80053124
	lwz      r3, 0x84(r28)
	addi     r0, r29, 0x22
	addi     r5, r1, 8
	lhzx     r26, r3, r0
	lwz      r3, 8(r3)
	mr       r4, r26
	bl       getTexNo__16J2DAnmTexPatternCFUsPUs
	lwz      r3, 0x70(r28)
	mr       r4, r27
	lhz      r5, 8(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x84(r28)
	mr       r4, r26
	lwz      r3, 8(r3)
	bl       getResTIMG__16J2DAnmTexPatternCFUs
	lwz      r0, 0x20(r31)
	mr       r29, r3
	cmplw    r0, r29
	beq      lbl_80053124
	lbz      r0, 8(r29)
	li       r5, 0
	li       r6, 0
	cmplwi   r0, 0
	beq      lbl_80053118
	lwz      r3, 0x84(r28)
	mr       r4, r26
	lwz      r3, 8(r3)
	bl       getPalette__16J2DAnmTexPatternCFUs
	lhz      r0, 0x14(r3)
	mr       r5, r3
	cmplwi   r0, 0x100
	ble      lbl_80053114
	slwi     r0, r30, 0x1e
	srwi     r3, r27, 0x1f
	subf     r0, r3, r0
	rotlwi   r0, r0, 2
	add      r3, r0, r3
	addi     r6, r3, 0x10
	b        lbl_80053118

lbl_80053114:
	mr       r6, r27

lbl_80053118:
	mr       r3, r31
	mr       r4, r29
	bl       storeTIMG__10JUTTextureFPC7ResTIMGP10JUTPalette7_GXTlut

lbl_80053124:
	addi     r30, r30, 1

lbl_80053128:
	clrlwi   r0, r30, 0x18
	cmplwi   r0, 8
	blt      lbl_80053030

lbl_80053134:
	lwz      r0, 0x70(r28)
	cmplwi   r0, 0
	beq      lbl_8005323C
	lwz      r3, 0x84(r28)
	lwz      r0, 0xc(r3)
	cmplwi   r0, 0
	beq      lbl_8005323C
	li       r26, 0
	b        lbl_800531C0

lbl_80053158:
	rlwinm   r3, r26, 1, 0x17, 0x1e
	lwz      r5, 0x84(r28)
	addi     r0, r3, 0x32
	clrlwi   r27, r26, 0x18
	lhzx     r4, r5, r0
	cmplwi   r4, 0xffff
	beq      lbl_800531BC
	lwz      r3, 0xc(r5)
	addi     r5, r1, 0x2c
	bl       getTevColorReg__15J2DAnmTevRegKeyCFUsP11_GXColorS10
	lha      r7, 0x2c(r1)
	mr       r4, r27
	lha      r6, 0x2e(r1)
	addi     r5, r1, 0x24
	lha      r3, 0x30(r1)
	lha      r0, 0x32(r1)
	sth      r7, 0x24(r1)
	sth      r6, 0x26(r1)
	sth      r3, 0x28(r1)
	sth      r0, 0x2a(r1)
	lwz      r3, 0x70(r28)
	lwz      r12, 0(r3)
	lwz      r12, 0x34(r12)
	mtctr    r12
	bctrl

lbl_800531BC:
	addi     r26, r26, 1

lbl_800531C0:
	clrlwi   r0, r26, 0x18
	cmplwi   r0, 4
	blt      lbl_80053158
	li       r26, 0
	b        lbl_80053230

lbl_800531D4:
	rlwinm   r3, r26, 1, 0x17, 0x1e
	lwz      r4, 0x84(r28)
	addi     r0, r3, 0x3a
	clrlwi   r27, r26, 0x18
	lhzx     r4, r4, r0
	cmplwi   r4, 0xffff
	beq      lbl_8005322C
	li       r0, -1
	addi     r5, r1, 0x1c
	stw      r0, 0x1c(r1)
	lwz      r3, 0x84(r28)
	lwz      r3, 0xc(r3)
	bl       getTevKonstReg__15J2DAnmTevRegKeyCFUsP8_GXColor
	lwz      r0, 0x1c(r1)
	mr       r4, r27
	addi     r5, r1, 0x10
	stw      r0, 0x10(r1)
	lwz      r3, 0x70(r28)
	lwz      r12, 0(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl

lbl_8005322C:
	addi     r26, r26, 1

lbl_80053230:
	clrlwi   r0, r26, 0x18
	cmplwi   r0, 4
	blt      lbl_800531D4

lbl_8005323C:
	psq_l    f31, 264(r1), 0, qr0
	lfd      f31, 0x100(r1)
	psq_l    f30, 248(r1), 0, qr0
	lfd      f30, 0xf0(r1)
	psq_l    f29, 232(r1), 0, qr0
	lfd      f29, 0xe0(r1)
	psq_l    f28, 216(r1), 0, qr0
	lfd      f28, 0xd0(r1)
	psq_l    f27, 200(r1), 0, qr0
	lfd      f27, 0xc0(r1)
	lmw      r26, 0xa8(r1)
	lwz      r0, 0x114(r1)
	mtlr     r0
	addi     r1, r1, 0x110
	blr
	*/
}

/*
 * --INFO--
 * Address:	80053278
 * Size:	000004
 */
void J2DAnmColor::getColor(unsigned short, GXColor*) const { }

/*
 * --INFO--
 * Address:	8005327C
 * Size:	000004
 */
void J2DIndBlockNull::setGX() { }

/*
 * --INFO--
 * Address:	80053280
 * Size:	00000C
 */
u32 J2DIndBlockNull::getType()
{
	/*
	lis      r3, 0x49424C4E@ha
	addi     r3, r3, 0x49424C4E@l
	blr
	*/
}

/*
 * --INFO--
 * Address:	8005328C
 * Size:	00005C
 */
J2DIndBlockNull::~J2DIndBlockNull()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	or.      r31, r3, r3
	beq      lbl_800532D0
	lis      r3, __vt__15J2DIndBlockNull@ha
	addi     r0, r3, __vt__15J2DIndBlockNull@l
	stw      r0, 0(r31)
	beq      lbl_800532C0
	lis      r3, __vt__11J2DIndBlock@ha
	addi     r0, r3, __vt__11J2DIndBlock@l
	stw      r0, 0(r31)

lbl_800532C0:
	extsh.   r0, r4
	ble      lbl_800532D0
	mr       r3, r31
	bl       __dl__FPv

lbl_800532D0:
	lwz      r0, 0x14(r1)
	mr       r3, r31
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}
