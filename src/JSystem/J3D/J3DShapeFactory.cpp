#include "JSystem/J3D/J3DShapeFactory.h"
#include "Dolphin/gx.h"
#include "JSystem/J3D/J3DShape.h"
#include "JSystem/JSupport/JSU.h"
#include "Dolphin/os.h"
#include "types.h"

/*
 * --INFO--
 * Address:	80071D10
 * Size:	0000B0
 */
J3DShapeFactory::J3DShapeFactory(const J3DShapeBlock& block)
    : mInitData(JSUConvertOffsetToPtr<J3DShapeInitData>(&block, block._0C))
    , mInitDataIndices(JSUConvertOffsetToPtr<u16>(&block, block._10))
    , mVtxDescLists(JSUConvertOffsetToPtr<_GXVtxDescList>(&block, block._18))
    , mMtxTable(JSUConvertOffsetToPtr<u16>(&block, block._1C))
    , mDisplayListData(JSUConvertOffsetToPtr<u8>(&block, block._20))
    , mMtxInitData(JSUConvertOffsetToPtr<J3DShapeMtxInitData>(&block, block._24))
    , mDrawInitData(JSUConvertOffsetToPtr<J3DShapeDrawInitData>(&block, block._28))
    , mVcdVatCmdBuffer(nullptr)
{
}

/*
 * --INFO--
 * Address:	80071DC0
 * Size:	0001B4
 */
J3DShape* J3DShapeFactory::create(int id, u32 flags, GXVtxDescList* vtxDescList)
{
	J3DShape* shape     = new J3DShape();
	shape->mMtxGroupNum = getMtxGroupNum(id);
	shape->mRadius      = getRadius(id);
	shape->mVtxDesc     = getVtxDescList(id);
	shape->mShapeMtx    = new J3DShapeMtx*[shape->mMtxGroupNum];
	shape->mShapeDraw   = new J3DShapeDraw*[shape->mMtxGroupNum];
	shape->mMin         = getMin(id);
	shape->mMax         = getMax(id);
	shape->mVcdVatCmd   = mVcdVatCmdBuffer + id * 0xC0;

	for (int i = 0; i < shape->mMtxGroupNum; i++) {
		shape->mShapeMtx[i]  = newShapeMtx(flags, id, i);
		shape->mShapeDraw[i] = newShapeDraw(id, i);
	}

	shape->mId = id;
	return shape;
}

static inline u32 getMdlDataFlag_MtxLoadType(u32 flag) { return flag & 0x10; }

enum {
	J3DMdlDataFlag_ConcatView = 0x10,
};

/*
 * --INFO--
 * Address:	80071F74
 * Size:	00024C
 */
J3DShapeMtx* J3DShapeFactory::newShapeMtx(u32 flags, int shapeID, int mtxIndex) const
{
	J3DShapeMtx* ret                       = nullptr;
	const J3DShapeInitData& shapeInitData  = mInitData[mInitDataIndices[shapeID]];
	const J3DShapeMtxInitData& mtxInitData = (&mMtxInitData[shapeInitData.mShapeMtxInitDataIndex])[mtxIndex];

	switch (getMdlDataFlag_MtxLoadType(0x10)) {
	case J3DMdlDataFlag_ConcatView:
		switch (shapeInitData.mShapeMtxType) {
		case J3DShapeMtx_Base:
			ret = new J3DShapeMtxConcatView(mtxInitData.mUseMtxIndex);
			break;
		case J3DShapeMtx_BBoard:
			ret = new J3DShapeMtxBBoardConcatView(mtxInitData.mUseMtxIndex);
			break;
		case J3DShapeMtx_Y_BBoard:
			ret = new J3DShapeMtxYBBoardConcatView(mtxInitData.mUseMtxIndex);
			break;
		case J3DShapeMtx_Multi:
			ret = new J3DShapeMtxMultiConcatView(mtxInitData.mUseMtxIndex, mtxInitData.mUseMtxCount,
			                                     &mMtxTable[mtxInitData.mFirstUseMtxIndex]);
			break;
		}
		break;

	case 0:
	default:
		switch (shapeInitData.mShapeMtxType) {
		case J3DShapeMtx_Base:
		case J3DShapeMtx_BBoard:
		case J3DShapeMtx_Y_BBoard:
			ret = new J3DShapeMtx(mtxInitData.mUseMtxIndex);
			break;
		case J3DShapeMtx_Multi:
			ret = new J3DShapeMtxMulti(mtxInitData.mUseMtxIndex, mtxInitData.mUseMtxCount, &mMtxTable[mtxInitData.mFirstUseMtxIndex]);
			break;
		}
		break;
	}

	return ret;
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
 * Address:	80072264
 * Size:	00008C
 */
J3DShapeDraw* J3DShapeFactory::newShapeDraw(int shapeID, int drawIndex) const
{
	J3DShapeDrawInitData* drawInitData = mDrawInitData;
	u16 drawInitDataIndex              = mInitData[mInitDataIndices[shapeID]].mShapeDrawInitDataIndex;
	return new J3DShapeDraw(mDisplayListData + drawInitData[drawIndex + drawInitDataIndex].mDisplayListIndex,
	                        drawInitData[drawIndex + drawInitDataIndex].mDisplayListSize);
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
