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
			ret = new J3DShapeMtxMultiConcatView(&mMtxTable[mtxInitData.mFirstUseMtxIndex], mtxInitData.mUseMtxIndex,
			                                     mtxInitData.mUseMtxCount);
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
			ret = new J3DShapeMtxMulti(&mMtxTable[mtxInitData.mFirstUseMtxIndex], mtxInitData.mUseMtxIndex, mtxInitData.mUseMtxCount);
			break;
		}
		break;
	}

	return ret;
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
