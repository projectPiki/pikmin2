#include "JSystem/J3D/J3DDrawBuffer.h"
#include "JSystem/J3D/J3DPacket.h"
#include "JSystem/J3D/J3DSys.h"
#include "JSystem/J3D/J3DTevBlock.h"
#include "JSystem/J3D/J3DTypes.h"
#include "JSystem/JKernel/JKRHeap.h"
#include "types.h"

sortFunc J3DDrawBuffer::sortFuncTable[6] = {
	&J3DDrawBuffer::entryMatSort,   &J3DDrawBuffer::entryMatAnmSort,  &J3DDrawBuffer::entryZSort,
	&J3DDrawBuffer::entryModelSort, &J3DDrawBuffer::entryInvalidSort, &J3DDrawBuffer::entryNonSort,
};

drawFunc J3DDrawBuffer::drawFuncTable[2] = {
	&J3DDrawBuffer::drawHead,
	&J3DDrawBuffer::drawTail,
};

void J3DDrawBuffer::calcZRatio() { mRatioZ = (mFarZ - mNearZ) / (f32)mBufferSize; }

int J3DDrawBuffer::entryNum;

/**
 * @note Address: 0x800659A4
 * @note Size: 0x68
 */
void J3DDrawBuffer::initialize()
{
	mDrawType       = J3DDRAW_Head;
	mSortType       = J3DSORT_Mat;
	mNearZ          = 1.0f;
	mFarZ           = 10000.0f;
	mMtxZ           = nullptr;
	mCallBackPacket = nullptr;
	mBufferSize     = 0x20;
	calcZRatio();
}

/**
 * @note Address: 0x80065A0C
 * @note Size: 0x84
 */
J3DErrType J3DDrawBuffer::allocBuffer(u32 size)
{
	mBuffer = new (0x20) J3DPacket*[size];

	mBufferSize = size;
	frameInit();
	calcZRatio();
	return JET_Success;
}

/**
 * @note Address: 0x80065A90
 * @note Size: 0xEC
 */
void J3DDrawBuffer::frameInit()
{
	u32 bufSize = mBufferSize;
	for (u32 i = 0; i < bufSize; i++) {
		mBuffer[i] = nullptr;
	}

	mCallBackPacket = nullptr;
}

/**
 * @note Address: 0x80065B7C
 * @note Size: 0x158
 */
bool J3DDrawBuffer::entryMatSort(J3DMatPacket* materialPacket)
{
	materialPacket->drawClear();
	materialPacket->getShapePacket()->drawClear();

	if (materialPacket->isChanged()) {
		materialPacket->setNextPacket(mBuffer[0]);
		mBuffer[0] = materialPacket;
		return true;
	}

	J3DTexture* texture = j3dSys.getTexture();
	u32 hash;
	u16 texNo = materialPacket->getMaterial()->getTexNo(0);

	if (texNo == 0xFFFF) {
		hash = 0;
	} else {
		hash = ((u32)texture->getResTIMG(texNo) + texture->getResTIMG(texNo)->mImageDataOffset) >> 5;
	}

	u32 slot = hash & (mBufferSize - 1);

	if (mBuffer[slot] == nullptr) {
		mBuffer[slot] = materialPacket;
		return true;
	}

	for (J3DMatPacket* pkt = (J3DMatPacket*)mBuffer[slot]; pkt != nullptr; pkt = (J3DMatPacket*)pkt->getNextPacket()) {
		if (pkt->isSame(materialPacket)) {
			pkt->addShapePacket(materialPacket->getShapePacket());
			return false;
		}
	}

	materialPacket->setNextPacket(mBuffer[slot]);
	mBuffer[slot] = materialPacket;
	return true;
}

/**
 * @note Address: 0x80065CE0
 * @note Size: 0x1E8
 */
bool J3DDrawBuffer::entryMatAnmSort(J3DMatPacket* materialPacket)
{
	J3DMaterialAnm* pMaterialAnm = materialPacket->mMaterialAnm;
	u32 slot                     = (u32)pMaterialAnm & (mBufferSize - 1);

	if (pMaterialAnm == nullptr) {
		return entryMatSort(materialPacket);
	}

	materialPacket->drawClear();
	materialPacket->getShapePacket()->drawClear();
	if (mBuffer[slot] == nullptr) {
		mBuffer[slot] = materialPacket;
		return true;
	}

	for (J3DMatPacket* pkt = (J3DMatPacket*)mBuffer[slot]; pkt != nullptr; pkt = (J3DMatPacket*)pkt->getNextPacket()) {
		if (pkt->mMaterialAnm == pMaterialAnm) {
			pkt->addShapePacket(materialPacket->getShapePacket());
			return false;
		}
	}

	materialPacket->setNextPacket(mBuffer[slot]);
	mBuffer[slot] = materialPacket;
	return true;
}

/**
 * @note Address: 0x80065EC8
 * @note Size: 0x11C
 */
bool J3DDrawBuffer::entryZSort(J3DMatPacket* materialPacket)
{
	materialPacket->drawClear();
	materialPacket->getShapePacket()->drawClear();

	Vec zMatrixPosition;
	zMatrixPosition.x = mMtxZ[0][3];
	zMatrixPosition.y = mMtxZ[1][3];
	zMatrixPosition.z = mMtxZ[2][3];

	f32 zValue = -J3DCalcZValue(j3dSys.getViewMtx(), zMatrixPosition);

	u32 bufferIndex;
	if (mNearZ + mRatioZ < zValue) {
		if (mFarZ - mRatioZ > zValue) {
			bufferIndex = zValue / mRatioZ;
		} else {
			bufferIndex = mBufferSize - 1;
		}
	} else {
		bufferIndex = 0;
	}

	u32 reversedIdx = (mBufferSize - 1) - bufferIndex;
	materialPacket->setNextPacket(mBuffer[(mBufferSize - 1) - bufferIndex]);
	mBuffer[reversedIdx] = materialPacket;

	return true;
}

/**
 * @note Address: 0x80065FE4
 * @note Size: 0x50
 */
bool J3DDrawBuffer::entryModelSort(J3DMatPacket* materialPacket)
{
	materialPacket->drawClear();
	materialPacket->getShapePacket()->drawClear();

	if (mCallBackPacket) {
		mCallBackPacket->addChildPacket(materialPacket);
		return true;
	}

	return false;
}

/**
 * @note Address: 0x80066034
 * @note Size: 0x54
 */
bool J3DDrawBuffer::entryInvalidSort(J3DMatPacket* materialPacket)
{
	materialPacket->drawClear();
	materialPacket->getShapePacket()->drawClear();

	if (mCallBackPacket) {
		mCallBackPacket->addChildPacket(materialPacket->getShapePacket());
		return true;
	}

	return false;
}

/**
 * @note Address: 0x80066088
 * @note Size: 0x34
 */
bool J3DDrawBuffer::entryNonSort(J3DMatPacket* materialPacket)
{
	materialPacket->drawClear();
	materialPacket->mShapePacket->drawClear();

	materialPacket->setNextPacket(mBuffer[0]);
	mBuffer[0] = materialPacket;

	return true;
}

/**
 * @note Address: 0x800660BC
 * @note Size: 0x54
 */
void J3DDrawBuffer::draw() const
{
	drawFunc func = drawFuncTable[mDrawType];
	(this->*func)();
}

/**
 * @note Address: 0x80066110
 * @note Size: 0x84
 */
void J3DDrawBuffer::drawHead() const
{
	u32 size        = mBufferSize;
	J3DPacket** buf = mBuffer;

	for (u32 i = 0; i < size; i++) {
		for (J3DPacket* packet = buf[i]; packet; packet = packet->getNextPacket()) {
			packet->draw();
		}
	}
}

/**
 * @note Address: 0x80066194
 * @note Size: 0x84
 */
void J3DDrawBuffer::drawTail() const
{
	int num = mBufferSize - 1;

	for (int i = num; i >= 0; i--) {
		for (J3DPacket* packet = mBuffer[i]; packet; packet = packet->getNextPacket()) {
			packet->draw();
		}
	}
}
