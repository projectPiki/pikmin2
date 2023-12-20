#include "Dolphin/os.h"
#include "JSystem/J3D/J3DDrawMtxData.h"
#include "JSystem/J3D/J3DTypes.h"
#include "JSystem/J3D/J3DVertexBuffer.h"
#include "JSystem/J3D/J3DVertexData.h"
#include "JSystem/J3D/J3DSys.h"
#include "JSystem/JKernel/JKRHeap.h"
#include "mem.h"

/**
 * @note Address: 0x8005EB80
 * @note Size: 0x68
 */
J3DVertexData::J3DVertexData()
{
	mVtxNum         = 0;
	mNormNum        = 0;
	mColorNum       = 0;
	mTexCoordNum    = 0;
	mPacketNum      = 0;
	mVtxAttrFmtList = nullptr;
	mVtxPos         = nullptr;
	mVtxNorm        = nullptr;
	mVtxNBT         = nullptr;
	mVtxColor[0]    = nullptr;
	mVtxColor[1]    = nullptr;
	for (int i = 0; i < 8; i++) {
		mVtxTexCoord[i] = nullptr;
	}
	mVtxPosFrac = 0;
	mVtxPosType = GX_F32;
	mVtxNrmFrac = 0;
	mVtxNrmType = GX_F32;
}

/**
 * @note Address: 0x8005EBE8
 * @note Size: 0x60
 */
void J3DVertexBuffer::setVertexData(J3DVertexData* data)
{
	mVtxData     = data;
	mVtxPos[0]   = data->mVtxPos;
	mVtxNorm[0]  = data->mVtxNorm;
	mVtxColor[0] = data->mVtxColor[0];

	mVtxPos[1]   = nullptr;
	mVtxNorm[1]  = nullptr;
	mVtxColor[1] = nullptr;

	mTransformedVtxPos[0]  = data->mVtxPos;
	mTransformedVtxNorm[0] = data->mVtxNorm;
	mTransformedVtxPos[1]  = nullptr;
	mTransformedVtxNorm[1] = nullptr;

	mCurrentVtxPos   = mVtxPos[0];
	mCurrentVtxNorm  = mVtxNorm[0];
	mCurrentVtxColor = mVtxColor[0];
}

/**
 * @note Address: 0x8005EC48
 * @note Size: 0x58
 */
void J3DVertexBuffer::init()
{
	mVtxData = nullptr;

	mVtxPos[1]   = nullptr;
	mVtxPos[0]   = nullptr;
	mVtxNorm[1]  = nullptr;
	mVtxNorm[0]  = nullptr;
	mVtxColor[1] = nullptr;
	mVtxColor[0] = nullptr;

	mTransformedVtxPos[1]  = nullptr;
	mTransformedVtxPos[0]  = nullptr;
	mTransformedVtxNorm[1] = nullptr;
	mTransformedVtxNorm[0] = nullptr;

	mCurrentVtxPos   = nullptr;
	mCurrentVtxNorm  = nullptr;
	mCurrentVtxColor = nullptr;

	mCurrentVtxPos   = mVtxPos[0];
	mCurrentVtxNorm  = mVtxNorm[0];
	mCurrentVtxColor = mVtxColor[0];
}

/**
 * @note Address: 0x8005ECA0
 * @note Size: 0x3C
 */
J3DVertexBuffer::~J3DVertexBuffer() { }

/**
 * @note Address: 0x8005ECDC
 * @note Size: 0x24
 */
void J3DVertexBuffer::setArray() const
{
	j3dSys.mVtxPos   = mCurrentVtxPos;
	j3dSys.mVtxNorm  = mCurrentVtxNorm;
	j3dSys.mVtxColor = mCurrentVtxColor;
}

/**
 * @note Address: 0x8005ED00
 * @note Size: 0x128
 */
void J3DVertexBuffer::copyVtxColorArray(J3DDeformAttachFlag flag)
{
	if (!mVtxColor[0] || !mVtxColor[1]) {
		if (flag & DeformAttach_1) {
			for (int i = 0; i < 2; i++) {
				if (i == 0 || !mVtxColor[i]) {
					mVtxColor[i] = new (0x20) GXColor[mVtxData->mColorNum];
					memcpy(mVtxColor[i], mVtxData->mVtxColor[0], mVtxData->mColorNum << 2);
					DCStoreRange(mVtxColor[i], mVtxData->mColorNum << 2);
				}
			}
		} else {
			mVtxColor[0] = mVtxData->mVtxColor[0];
			if (!mVtxColor[1]) {
				mVtxColor[1] = new (0x20) GXColor[mVtxData->mColorNum];
			}
			memcpy(mVtxColor[1], mVtxData->mVtxColor[0], mVtxData->mColorNum << 2);
			DCStoreRange(mVtxColor[1], mVtxData->mColorNum << 2);
		}
	}
}

/**
 * @note Address: 0x8005EE28
 * @note Size: 0x14
 */
J3DDrawMtxData::J3DDrawMtxData()
    : mCount(0)
    , mDrawMtxFlag(nullptr)
    , mDrawMtxIdx(nullptr)
{
}

/**
 * @note Address: 0x8005EE3C
 * @note Size: 0x3C
 */
J3DDrawMtxData::~J3DDrawMtxData() { }
