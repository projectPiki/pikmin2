#include "Dolphin/os.h"
#include "JSystem/J3D/J3DDrawMtxData.h"
#include "JSystem/J3D/J3DTypes.h"
#include "JSystem/J3D/J3DVertexBuffer.h"
#include "JSystem/J3D/J3DVertexData.h"
#include "JSystem/J3D/J3DSys.h"
#include "JSystem/JKernel/JKRHeap.h"
#include "mem.h"
#include "types.h"

/*
 * --INFO--
 * Address:	8005EB80
 * Size:	000068
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

/*
 * --INFO--
 * Address:	8005EBE8
 * Size:	000060
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

/*
 * --INFO--
 * Address:	8005EC48
 * Size:	000058
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

/*
 * --INFO--
 * Address:	8005ECA0
 * Size:	00003C
 */
J3DVertexBuffer::~J3DVertexBuffer() { }

/*
 * --INFO--
 * Address:	8005ECDC
 * Size:	000024
 */
void J3DVertexBuffer::setArray() const
{
	j3dSys.mVtxPos   = mCurrentVtxPos;
	j3dSys.mVtxNorm  = mCurrentVtxNorm;
	j3dSys.mVtxColor = mCurrentVtxColor;
}

/*
 * --INFO--
 * Address:	8005ED00
 * Size:	000128
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

/*
 * --INFO--
 * Address:	8005EE28
 * Size:	000014
 */
J3DDrawMtxData::J3DDrawMtxData()
    : mCount(0)
    , mDrawMtxFlag(nullptr)
    , mDrawMtxIdx(nullptr)
{
}

/*
 * --INFO--
 * Address:	8005EE3C
 * Size:	00003C
 */
J3DDrawMtxData::~J3DDrawMtxData() { }
