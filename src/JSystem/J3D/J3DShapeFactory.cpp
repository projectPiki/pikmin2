#include "JSystem/J3D/J3DShapeFactory.h"
#include "Dolphin/gx.h"
#include "JSystem/J3D/J3DShape.h"
#include "JSystem/JSupport/JSU.h"
#include "types.h"

/*
    Generated from dpostproc
*/

/*
 * --INFO--
 * Address:	80071D10
 * Size:	0000B0
 */
J3DShapeFactory::J3DShapeFactory(const J3DShapeBlock& block)
    : m_initData(JSUConvertOffsetToPtr<J3DShapeInitData>(&block, block._0C))
    , m_initDataIndices(JSUConvertOffsetToPtr<u16>(&block, block._10))
    , m_vtxDescLists(JSUConvertOffsetToPtr<_GXVtxDescList>(&block, block._18))
    , _0C(JSUConvertOffsetToPtr<u16>(&block, block._1C))
    , _10(JSUConvertOffsetToPtr<u8>(&block, block._20))
    , m_mtxInitData(JSUConvertOffsetToPtr<J3DShapeMtxInitData>(&block, block._24))
    , m_drawInitData(JSUConvertOffsetToPtr<J3DShapeDrawInitData>(&block, block._28))
    , _1C(nullptr)
{
}

/*
 * --INFO--
 * Address:	80071DC0
 * Size:	0001B4
 */
J3DShape* J3DShapeFactory::create(int id, unsigned long flags, _GXVtxDescList* vtxDescList)
{
	J3DShape* shape = new J3DShape();
	shape->_0A      = m_initData[m_initDataIndices[id]]._02;
	shape->_10      = m_initData[m_initDataIndices[id]]._0C;
	shape->_30      = m_vtxDescLists + m_initData[m_initDataIndices[id]].m_vtxDescListIndex;
	shape->_38      = new J3DShapeMtx*[shape->_0A];
	shape->_3C      = new J3DShapeDraw*[shape->_0A];
	shape->_14      = m_initData[m_initDataIndices[id]]._10;
	shape->_20      = m_initData[m_initDataIndices[id]]._1C;
	shape->_2C      = _1C + id;
	for (int i = 0; i < shape->_0A; i++) {
		shape->_38[i] = newShapeMtx(flags, id, i);
		shape->_3C[i] = newShapeDraw(id, i);
	}
	shape->m_id = id;
	return shape;
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stmw     r25, 0x14(r1)
	mr       r25, r3
	mr       r26, r4
	mr       r27, r5
	li       r3, 0x68
	bl       __nw__FUl
	or.      r31, r3, r3
	beq      lbl_80071E14
	lis      r4, __vt__8J3DShape@ha
	lis      r5, 0x3CF3CF00@ha
	addi     r0, r4, __vt__8J3DShape@l
	lis      r4, 0x00F3CF3C@ha
	stw      r0, 0(r31)
	addi     r5, r5, 0x3CF3CF00@l
	addi     r0, r4, 0x00F3CF3C@l
	stw      r5, 0x40(r31)
	stw      r0, 0x44(r31)
	bl       initialize__8J3DShapeFv

lbl_80071E14:
	lwz      r3, 4(r25)
	slwi     r29, r26, 1
	lwz      r4, 0(r25)
	lhzx     r0, r3, r29
	mulli    r0, r0, 0x28
	add      r3, r4, r0
	lhz      r0, 2(r3)
	sth      r0, 0xa(r31)
	lwz      r3, 4(r25)
	lwz      r4, 0(r25)
	lhzx     r0, r3, r29
	mulli    r0, r0, 0x28
	add      r3, r4, r0
	lfs      f0, 0xc(r3)
	stfs     f0, 0x10(r31)
	lwz      r3, 4(r25)
	lwz      r4, 0(r25)
	lhzx     r0, r3, r29
	lwz      r5, 8(r25)
	mulli    r0, r0, 0x28
	add      r3, r4, r0
	lhz      r0, 4(r3)
	add      r0, r5, r0
	stw      r0, 0x30(r31)
	lhz      r0, 0xa(r31)
	slwi     r3, r0, 2
	bl       __nwa__FUl
	stw      r3, 0x38(r31)
	lhz      r0, 0xa(r31)
	slwi     r3, r0, 2
	bl       __nwa__FUl
	stw      r3, 0x3c(r31)
	mulli    r0, r26, 0xc0
	li       r28, 0
	lwz      r3, 4(r25)
	li       r30, 0
	lwz      r4, 0(r25)
	lhzx     r3, r3, r29
	mulli    r3, r3, 0x28
	addi     r3, r3, 0x10
	add      r3, r4, r3
	lfs      f0, 0(r3)
	stfs     f0, 0x14(r31)
	lfs      f0, 4(r3)
	stfs     f0, 0x18(r31)
	lfs      f0, 8(r3)
	stfs     f0, 0x1c(r31)
	lwz      r3, 4(r25)
	lwz      r4, 0(r25)
	lhzx     r3, r3, r29
	mulli    r3, r3, 0x28
	addi     r3, r3, 0x1c
	add      r3, r4, r3
	lfs      f0, 0(r3)
	stfs     f0, 0x20(r31)
	lfs      f0, 4(r3)
	stfs     f0, 0x24(r31)
	lfs      f0, 8(r3)
	stfs     f0, 0x28(r31)
	lwz      r3, 0x1c(r25)
	add      r0, r3, r0
	stw      r0, 0x2c(r31)
	b        lbl_80071F4C

lbl_80071F10:
	mr       r3, r25
	mr       r4, r27
	mr       r5, r26
	mr       r6, r28
	bl       newShapeMtx__15J3DShapeFactoryCFUlii
	lwz      r6, 0x38(r31)
	mr       r4, r26
	mr       r5, r28
	stwx     r3, r6, r30
	mr       r3, r25
	bl       newShapeDraw__15J3DShapeFactoryCFii
	lwz      r4, 0x3c(r31)
	addi     r28, r28, 1
	stwx     r3, r4, r30
	addi     r30, r30, 4

lbl_80071F4C:
	lhz      r0, 0xa(r31)
	cmpw     r28, r0
	blt      lbl_80071F10
	sth      r26, 8(r31)
	mr       r3, r31
	lmw      r25, 0x14(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	80071F74
 * Size:	00024C
 */
J3DShapeMtx* J3DShapeFactory::newShapeMtx(unsigned long flags, int shapeID, int mtxIndex) const
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	rlwinm   r0, r4, 0, 0x1b, 0x1b
	lwz      r4, 4(r3)
	cmpwi    r0, 0x10
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r3
	slwi     r3, r5, 1
	lwz      r7, 0(r30)
	lhzx     r5, r4, r3
	slwi     r4, r6, 3
	lwz      r6, 0x14(r30)
	li       r3, 0
	mulli    r5, r5, 0x28
	add      r7, r7, r5
	lhz      r5, 6(r7)
	slwi     r5, r5, 3
	add      r31, r5, r4
	add      r31, r6, r31
	beq      lbl_80071FDC
	bge      lbl_80072118
	cmpwi    r0, 0
	beq      lbl_80072118
	b        lbl_80072118

lbl_80071FDC:
	lbz      r0, 0(r7)
	cmpwi    r0, 2
	beq      lbl_8007207C
	bge      lbl_80071FFC
	cmpwi    r0, 0
	beq      lbl_80072008
	bge      lbl_8007203C
	b        lbl_800721A8

lbl_80071FFC:
	cmpwi    r0, 4
	bge      lbl_800721A8
	b        lbl_800720BC

lbl_80072008:
	li       r3, 8
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_800721A8
	lis      r4, __vt__11J3DShapeMtx@ha
	lhz      r5, 0(r31)
	addi     r0, r4, __vt__11J3DShapeMtx@l
	lis      r4, __vt__21J3DShapeMtxConcatView@ha
	stw      r0, 0(r3)
	addi     r0, r4, __vt__21J3DShapeMtxConcatView@l
	sth      r5, 4(r3)
	stw      r0, 0(r3)
	b        lbl_800721A8

lbl_8007203C:
	li       r3, 8
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_800721A8
	lis      r4, __vt__11J3DShapeMtx@ha
	lhz      r6, 0(r31)
	addi     r0, r4, __vt__11J3DShapeMtx@l
	lis      r5, __vt__21J3DShapeMtxConcatView@ha
	stw      r0, 0(r3)
	lis      r4, __vt__27J3DShapeMtxBBoardConcatView@ha
	addi     r5, r5, __vt__21J3DShapeMtxConcatView@l
	sth      r6, 4(r3)
	addi     r0, r4, __vt__27J3DShapeMtxBBoardConcatView@l
	stw      r5, 0(r3)
	stw      r0, 0(r3)
	b        lbl_800721A8

lbl_8007207C:
	li       r3, 8
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_800721A8
	lis      r4, __vt__11J3DShapeMtx@ha
	lhz      r6, 0(r31)
	addi     r0, r4, __vt__11J3DShapeMtx@l
	lis      r5, __vt__21J3DShapeMtxConcatView@ha
	stw      r0, 0(r3)
	lis      r4, __vt__28J3DShapeMtxYBBoardConcatView@ha
	addi     r5, r5, __vt__21J3DShapeMtxConcatView@l
	sth      r6, 4(r3)
	addi     r0, r4, __vt__28J3DShapeMtxYBBoardConcatView@l
	stw      r5, 0(r3)
	stw      r0, 0(r3)
	b        lbl_800721A8

lbl_800720BC:
	li       r3, 0x10
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_800721A8
	lwz      r6, 4(r31)
	lis      r4, __vt__11J3DShapeMtx@ha
	lhz      r9, 2(r31)
	addi     r0, r4, __vt__11J3DShapeMtx@l
	lhz      r8, 0(r31)
	lis      r5, __vt__21J3DShapeMtxConcatView@ha
	lis      r4, __vt__26J3DShapeMtxMultiConcatView@ha
	lwz      r7, 0xc(r30)
	stw      r0, 0(r3)
	slwi     r6, r6, 1
	addi     r5, r5, __vt__21J3DShapeMtxConcatView@l
	addi     r0, r4, __vt__26J3DShapeMtxMultiConcatView@l
	sth      r8, 4(r3)
	add      r4, r7, r6
	stw      r5, 0(r3)
	stw      r0, 0(r3)
	sth      r9, 8(r3)
	stw      r4, 0xc(r3)
	b        lbl_800721A8

lbl_80072118:
	lbz      r0, 0(r7)
	cmpwi    r0, 3
	beq      lbl_8007215C
	bge      lbl_800721A8
	cmpwi    r0, 0
	bge      lbl_80072134
	b        lbl_800721A8

lbl_80072134:
	li       r3, 8
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_800721A8
	lis      r4, __vt__11J3DShapeMtx@ha
	lhz      r5, 0(r31)
	addi     r0, r4, __vt__11J3DShapeMtx@l
	stw      r0, 0(r3)
	sth      r5, 4(r3)
	b        lbl_800721A8

lbl_8007215C:
	li       r3, 0x10
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_800721A8
	lwz      r6, 4(r31)
	lis      r4, __vt__11J3DShapeMtx@ha
	lhz      r9, 2(r31)
	addi     r5, r4, __vt__11J3DShapeMtx@l
	lhz      r8, 0(r31)
	lis      r4, __vt__16J3DShapeMtxMulti@ha
	addi     r0, r4, __vt__16J3DShapeMtxMulti@l
	lwz      r7, 0xc(r30)
	stw      r5, 0(r3)
	slwi     r4, r6, 1
	add      r4, r7, r4
	sth      r8, 4(r3)
	stw      r0, 0(r3)
	sth      r9, 8(r3)
	stw      r4, 0xc(r3)

lbl_800721A8:
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
 * Address:	800721C0
 * Size:	00005C
 */
J3DShapeMtxConcatView::~J3DShapeMtxConcatView()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	or.      r31, r3, r3
	beq      lbl_80072204
	lis      r3, __vt__21J3DShapeMtxConcatView@ha
	addi     r0, r3, __vt__21J3DShapeMtxConcatView@l
	stw      r0, 0(r31)
	beq      lbl_800721F4
	lis      r3, __vt__11J3DShapeMtx@ha
	addi     r0, r3, __vt__11J3DShapeMtx@l
	stw      r0, 0(r31)

lbl_800721F4:
	extsh.   r0, r4
	ble      lbl_80072204
	mr       r3, r31
	bl       __dl__FPv

lbl_80072204:
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
 * Address:	8007221C
 * Size:	000048
 */
J3DShapeMtx::~J3DShapeMtx()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	or.      r31, r3, r3
	beq      lbl_8007224C
	lis      r5, __vt__11J3DShapeMtx@ha
	extsh.   r0, r4
	addi     r0, r5, __vt__11J3DShapeMtx@l
	stw      r0, 0(r31)
	ble      lbl_8007224C
	bl       __dl__FPv

lbl_8007224C:
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
 * Address:	80072264
 * Size:	00008C
 */
J3DShapeDraw* J3DShapeFactory::newShapeDraw(int shapeID, int drawIndex) const
{
	J3DShapeDrawInitData* drawInitData = m_drawInitData;
	u16 drawInitDataIndex              = m_initData[m_initDataIndices[shapeID]].m_shapeDrawInitDataIndex;
	return new J3DShapeDraw(_10 + drawInitData[drawIndex + drawInitDataIndex]._04, drawInitData[drawIndex + drawInitDataIndex]._00);
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lwz      r6, 4(r3)
	slwi     r4, r4, 1
	stw      r0, 0x14(r1)
	slwi     r0, r5, 3
	lwz      r5, 0(r3)
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r3
	li       r3, 0xc
	lhzx     r4, r6, r4
	lwz      r6, 0x18(r30)
	mulli    r4, r4, 0x28
	addi     r4, r4, 8
	lhzx     r4, r5, r4
	slwi     r4, r4, 3
	add      r31, r4, r0
	add      r31, r6, r31
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_800722D4
	lwz      r4, 0x10(r30)
	lwz      r0, 4(r31)
	lwz      r5, 0(r31)
	add      r4, r4, r0
	bl       __ct__12J3DShapeDrawFPCUcUl
	mr       r0, r3

lbl_800722D4:
	mr       r3, r0
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
 * Address:	800722F0
 * Size:	00010C
 */
void J3DShapeFactory::allocVcdVatCmdBuffer(unsigned long)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	stw      r30, 8(r1)
	mulli    r30, r4, 0xc0
	li       r4, 0x20
	mr       r3, r30
	bl       __nwa__FUli
	srwi     r12, r30, 2
	stw      r3, 0x1c(r31)
	cmplwi   r12, 0
	li       r30, 0
	ble      lbl_800723E4
	cmplwi   r12, 8
	addi     r3, r12, -8
	ble      lbl_800723BC
	addi     r0, r3, 7
	li       r11, 0
	srwi     r0, r0, 3
	mtctr    r0
	cmplwi   r3, 0
	ble      lbl_800723BC

lbl_80072350:
	lwz      r3, 0x1c(r31)
	li       r10, 0
	addi     r8, r11, 4
	addi     r7, r11, 8
	stwx     r10, r3, r11
	addi     r6, r11, 0xc
	addi     r5, r11, 0x10
	addi     r4, r11, 0x14
	lwz      r9, 0x1c(r31)
	addi     r3, r11, 0x18
	addi     r0, r11, 0x1c
	addi     r11, r11, 0x20
	stwx     r10, r9, r8
	addi     r30, r30, 8
	lwz      r8, 0x1c(r31)
	stwx     r10, r8, r7
	lwz      r7, 0x1c(r31)
	stwx     r10, r7, r6
	lwz      r6, 0x1c(r31)
	stwx     r10, r6, r5
	lwz      r5, 0x1c(r31)
	stwx     r10, r5, r4
	lwz      r4, 0x1c(r31)
	stwx     r10, r4, r3
	lwz      r3, 0x1c(r31)
	stwx     r10, r3, r0
	bdnz     lbl_80072350

lbl_800723BC:
	subf     r0, r30, r12
	slwi     r5, r30, 2
	li       r4, 0
	mtctr    r0
	cmplw    r30, r12
	bge      lbl_800723E4

lbl_800723D4:
	lwz      r3, 0x1c(r31)
	stwx     r4, r3, r5
	addi     r5, r5, 4
	bdnz     lbl_800723D4

lbl_800723E4:
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
 * Address:	800723FC
 * Size:	00008C
 */
int J3DShapeFactory::calcSize(int, unsigned long)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	slwi     r0, r4, 1
	stmw     r26, 8(r1)
	mr       r26, r3
	mr       r27, r4
	mr       r28, r5
	li       r29, 0
	lwz      r3, 4(r3)
	lwz      r4, 0(r26)
	lhzx     r0, r3, r0
	mulli    r0, r0, 0x28
	add      r3, r4, r0
	lhz      r30, 2(r3)
	slwi     r3, r30, 2
	addi     r31, r3, 0x68
	add      r31, r31, r3
	b        lbl_80072468

lbl_80072448:
	mr       r3, r26
	mr       r4, r28
	mr       r5, r27
	mr       r6, r29
	bl       calcSizeShapeMtx__15J3DShapeFactoryCFUlii
	add      r31, r31, r3
	addi     r29, r29, 1
	addi     r31, r31, 0xc

lbl_80072468:
	cmplw    r29, r30
	blt      lbl_80072448
	mr       r3, r31
	lmw      r26, 8(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80072488
 * Size:	000010
 */
int J3DShapeFactory::calcSizeVcdVatCmdBuffer(unsigned long)
{
	/*
	mulli    r3, r4, 0xc0
	addi     r0, r3, 0x1f
	rlwinm   r3, r0, 0, 0, 0x1a
	blr
	*/
}

/*
 * --INFO--
 * Address:	80072498
 * Size:	0000A8
 */
int J3DShapeFactory::calcSizeShapeMtx(unsigned long, int, int) const
{
	/*
	lwz      r6, 4(r3)
	slwi     r5, r5, 1
	rlwinm   r0, r4, 0, 0x1b, 0x1b
	lwz      r7, 0(r3)
	lhzx     r4, r6, r5
	cmpwi    r0, 0x10
	li       r3, 0
	mulli    r4, r4, 0x28
	beq      lbl_800724CC
	bge      lbl_80072518
	cmpwi    r0, 0
	beq      lbl_80072518
	b        lbl_80072518

lbl_800724CC:
	lbzx     r0, r7, r4
	cmpwi    r0, 2
	beq      lbl_80072508
	bge      lbl_800724EC
	cmpwi    r0, 0
	beq      lbl_800724F8
	bge      lbl_80072500
	blr

lbl_800724EC:
	cmpwi    r0, 4
	bgelr
	b        lbl_80072510

lbl_800724F8:
	li       r3, 8
	blr

lbl_80072500:
	li       r3, 8
	blr

lbl_80072508:
	li       r3, 8
	blr

lbl_80072510:
	li       r3, 0x10
	blr

lbl_80072518:
	lbzx     r0, r7, r4
	cmpwi    r0, 3
	beq      lbl_80072538
	bgelr
	cmpwi    r0, 0
	bltlr
	li       r3, 8
	blr

lbl_80072538:
	li       r3, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80072540
 * Size:	000018
 */
// void JSUConvertOffsetToPtr<J3DShapeDrawInitData>(const void*, unsigned long)
// {
// 	/*
// 	cmplwi   r4, 0
// 	bne      lbl_80072550
// 	li       r3, 0
// 	blr

// lbl_80072550:
// 	add      r3, r3, r4
// 	blr
// 	*/
// }

/*
 * --INFO--
 * Address:	80072558
 * Size:	000018
 */
// void JSUConvertOffsetToPtr<J3DShapeMtxInitData>(const void*, unsigned long)
// {
// 	/*
// 	cmplwi   r4, 0
// 	bne      lbl_80072568
// 	li       r3, 0
// 	blr

// lbl_80072568:
// 	add      r3, r3, r4
// 	blr
// 	*/
// }

/*
 * --INFO--
 * Address:	80072570
 * Size:	000018
 */
// void JSUConvertOffsetToPtr<unsigned char>(const void*, unsigned long)
// {
// 	/*
// 	cmplwi   r4, 0
// 	bne      lbl_80072580
// 	li       r3, 0
// 	blr

// lbl_80072580:
// 	add      r3, r3, r4
// 	blr
// 	*/
// }

/*
 * --INFO--
 * Address:	80072588
 * Size:	000018
 */
// void JSUConvertOffsetToPtr<_GXVtxDescList>(const void*, unsigned long)
// {
// 	/*
// 	cmplwi   r4, 0
// 	bne      lbl_80072598
// 	li       r3, 0
// 	blr

// lbl_80072598:
// 	add      r3, r3, r4
// 	blr
// 	*/
// }
