#include "JSystem/J3D/J3DShapeFactory.h"
#include "Dolphin/gx.h"
#include "JSystem/J3D/J3DShape.h"
#include "JSystem/JSupport/JSU.h"
#include "JSystem/JKernel/JKRHeap.h"
#include "Dolphin/os.h"
#include "types.h"

/**
 * @note Address: 0x80071D10
 * @note Size: 0xB0
 */
J3DShapeFactory::J3DShapeFactory(const J3DShapeBlock& block)
    : mInitData(JSUConvertOffsetToPtr<J3DShapeInitData>(&block, block.mShapeDataOffset))
    , mInitDataIndices(JSUConvertOffsetToPtr<u16>(&block, block.mRemapTableOffset))
    , mVtxDescLists(JSUConvertOffsetToPtr<_GXVtxDescList>(&block, block.mAttribTableOffset))
    , mMtxTable(JSUConvertOffsetToPtr<u16>(&block, block.mMatrixTableOffset))
    , mDisplayListData(JSUConvertOffsetToPtr<u8>(&block, block.mPrimDataOffset))
    , mMtxInitData(JSUConvertOffsetToPtr<J3DShapeMtxInitData>(&block, block.mMatrixInitDataOffset))
    , mDrawInitData(JSUConvertOffsetToPtr<J3DShapeDrawInitData>(&block, block.mMtxGroupTableOffset))
    , mVcdVatCmdBuffer(nullptr)
{
}

/**
 * @note Address: 0x80071DC0
 * @note Size: 0x1B4
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

static inline u32 getMdlDataFlag_MtxLoadType(u32 flag) { return flag & J3DMLF_UseImmediateMtx; }

/**
 * @note Address: 0x80071F74
 * @note Size: 0x24C
 */
J3DShapeMtx* J3DShapeFactory::newShapeMtx(u32 flags, int shapeID, int mtxIndex) const
{
	J3DShapeMtx* ret                       = nullptr;
	const J3DShapeInitData& shapeInitData  = mInitData[mInitDataIndices[shapeID]];
	const J3DShapeMtxInitData& mtxInitData = (&mMtxInitData[shapeInitData.mShapeMtxInitDataIndex])[mtxIndex];

	u32 mtxLoadType = getMdlDataFlag_MtxLoadType(flags);
	switch (mtxLoadType) {
	case 0x10:
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

/**
 * @note Address: 0x80072264
 * @note Size: 0x8C
 */
J3DShapeDraw* J3DShapeFactory::newShapeDraw(int shapeID, int drawIndex) const
{
	const J3DShapeInitData& shapeInitData    = mInitData[mInitDataIndices[shapeID]];
	const J3DShapeDrawInitData& drawInitData = (&mDrawInitData[shapeInitData.mShapeDrawInitDataIndex])[drawIndex];
	return new J3DShapeDraw(&mDisplayListData[drawInitData.mDisplayListIndex], drawInitData.mDisplayListSize);
}

/**
 * @note Address: 0x800722F0
 * @note Size: 0x10C
 */
void J3DShapeFactory::allocVcdVatCmdBuffer(u32 count)
{
	mVcdVatCmdBuffer = new (0x20) u8[J3DShape::kVcdVatDLSize * count];
	for (u32 i = 0; i < (J3DShape::kVcdVatDLSize * count) / 4; i++)
		((u32*)mVcdVatCmdBuffer)[i] = 0;
}

/**
 * @note Address: 0x800723FC
 * @note Size: 0x8C
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

/**
 * @note Address: 0x80072488
 * @note Size: 0x10
 */
int J3DShapeFactory::calcSizeVcdVatCmdBuffer(u32 count) { return ALIGN_NEXT(count * J3DShape::kVcdVatDLSize, 0x20); }

/**
 * @note Address: 0x80072498
 * @note Size: 0xA8
 */
int J3DShapeFactory::calcSizeShapeMtx(u32 flag, int shapeNo, int mtxGroupNo) const
{
	const J3DShapeInitData& shapeInitData = mInitData[mInitDataIndices[shapeNo]];
	u32 ret                               = 0;

	u32 mtxLoadType = getMdlDataFlag_MtxLoadType(flag);
	switch (mtxLoadType) {
	case 0x10:
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
