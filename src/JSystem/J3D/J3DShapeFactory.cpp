#include "JSystem/J3D/J3DShapeFactory.h"
#include "Dolphin/gx.h"
#include "JSystem/J3D/J3DShape.h"
#include "JSystem/JSupport/JSU.h"
#include "JSystem/JKernel/JKRHeap.h"
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

	u32 mtxLoadType = getMdlDataFlag_MtxLoadType(flags);
	switch (mtxLoadType) {
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
	const J3DShapeInitData& shapeInitData    = mInitData[mInitDataIndices[shapeID]];
	const J3DShapeDrawInitData& drawInitData = (&mDrawInitData[shapeInitData.mShapeDrawInitDataIndex])[drawIndex];
	return new J3DShapeDraw(&mDisplayListData[drawInitData.mDisplayListIndex], drawInitData.mDisplayListSize);
}

/*
 * --INFO--
 * Address:	800722F0
 * Size:	00010C
 */
void J3DShapeFactory::allocVcdVatCmdBuffer(u32 count)
{
	mVcdVatCmdBuffer = new (0x20) u8[J3DShape::kVcdVatDLSize * count];
	for (u32 i = 0; i < (J3DShape::kVcdVatDLSize * count) / 4; i++)
		((u32*)mVcdVatCmdBuffer)[i] = 0;
}

/*
 * --INFO--
 * Address:	800723FC
 * Size:	00008C
 */
int J3DShapeFactory::calcSize(int shapeNo, u32 flag)
{
	s32 size = 0x68;

	s32 mtxGroupNo = getMtxGroupNum(shapeNo);
	size += mtxGroupNo * 4;
	size += mtxGroupNo * 4;

	for (u32 i = 0; i < mtxGroupNo; i++) {
		s32 shapeMtxSize = calcSizeShapeMtx(flag, shapeNo, i);
		size += shapeMtxSize;
		size += 0x0C;
	}

	return size;
}

/*
 * --INFO--
 * Address:	80072488
 * Size:	000010
 */
int J3DShapeFactory::calcSizeVcdVatCmdBuffer(u32 count) { return ALIGN_NEXT(count * J3DShape::kVcdVatDLSize, 0x20); }

/*
 * --INFO--
 * Address:	80072498
 * Size:	0000A8
 */
int J3DShapeFactory::calcSizeShapeMtx(u32 flag, int shapeNo, int mtxGroupNo) const
{
	const J3DShapeInitData& shapeInitData = mInitData[mInitDataIndices[shapeNo]];
	u32 ret                               = 0;

	u32 mtxLoadType = getMdlDataFlag_MtxLoadType(flag);
	switch (mtxLoadType) {
	case J3DMdlDataFlag_ConcatView:
		switch (shapeInitData.mShapeMtxType) {
		case J3DShapeMtx_Base:
			ret = 0x08;
			break;
		case J3DShapeMtx_BBoard:
			ret = 0x08;
			break;
		case J3DShapeMtx_Y_BBoard:
			ret = 0x08;
			break;
		case J3DShapeMtx_Multi:
			ret = 0x10;
			break;
			// default:
			//	OSReport("WRONG SHAPE MATRIX TYPE (J3DModelInit.cpp)\n");
		}
		break;

	case 0:
	default:
		switch (shapeInitData.mShapeMtxType) {
		case J3DShapeMtx_Base:
		case J3DShapeMtx_BBoard:
		case J3DShapeMtx_Y_BBoard:
			ret = 0x08;
			break;
		case J3DShapeMtx_Multi:
			ret = 0x10;
			break;
			// default:
			//	OSReport("WRONG SHAPE MATRIX TYPE (J3DModelInit.cpp)\n");
		}
		break;
	}

	return ret;
}
