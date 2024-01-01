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

void J3DDrawBuffer::calcZRatio() { mZRatio = (mZFar - mZNear) / (f32)mBufferSize; }

int J3DDrawBuffer::entryNum;

/**
 * @note Address: 0x800659A4
 * @note Size: 0x68
 */
void J3DDrawBuffer::initialize()
{
	mDrawType       = J3DDRAW_Head;
	mSortType       = J3DSORT_Mat;
	mZNear          = 1.0f;
	mZFar           = 10000.0f;
	mZMtx           = nullptr;
	mCallBackPacket = nullptr;
	mBufferSize     = 0x20;
	calcZRatio();
}

/**
 * @note Address: 0x80065A0C
 * @note Size: 0x84
 */
J3DErrType J3DDrawBuffer::allocBuffer(u32 bufSize)
{
	mBuffer = new (0x20) J3DPacket*[bufSize];

	mBufferSize = bufSize;
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
	for (u32 i = 0; i < bufSize; i++)
		mBuffer[i] = nullptr;

	mCallBackPacket = nullptr;
}

/**
 * @note Address: 0x80065B7C
 * @note Size: 0x158
 */
bool J3DDrawBuffer::entryMatSort(J3DMatPacket* packet)
{
	packet->drawClear();
	packet->getShapePacket()->drawClear();

	if (packet->isChanged()) {
		packet->setNextPacket(mBuffer[0]);
		mBuffer[0] = packet;
		return true;
	}

	J3DTexture* texture = j3dSys.getTexture();
	u32 hash;
	u16 texNo = packet->getMaterial()->getTexNo(0);
	if (texNo == 0xFFFF) {
		hash = 0;
	} else {
		hash = ((u32)texture->getResTIMG(texNo) + texture->getResTIMG(texNo)->mImageDataOffset) >> 5;
	}
	u32 slot = hash & (mBufferSize - 1);

	if (mBuffer[slot] == nullptr) {
		mBuffer[slot] = packet;
		return true;
	} else {
		for (J3DMatPacket* pkt = (J3DMatPacket*)mBuffer[slot]; pkt != nullptr; pkt = (J3DMatPacket*)pkt->getNextPacket()) {
			if (pkt->isSame(packet)) {
				pkt->addShapePacket(packet->getShapePacket());
				return false;
			}
		}

		packet->setNextPacket(mBuffer[slot]);
		mBuffer[slot] = packet;
		return true;
	}
}

/**
 * @note Address: 0x80065CE0
 * @note Size: 0x1E8
 */
bool J3DDrawBuffer::entryMatAnmSort(J3DMatPacket* packet)
{
	J3DMaterialAnm* pMaterialAnm = packet->mMaterialAnm;
	u32 slot                     = (u32)pMaterialAnm & (mBufferSize - 1);

	if (pMaterialAnm == nullptr) {
		return entryMatSort(packet);
	} else {
		packet->drawClear();
		packet->getShapePacket()->drawClear();
		if (mBuffer[slot] == nullptr) {
			mBuffer[slot] = packet;
			return true;
		} else {
			for (J3DMatPacket* pkt = (J3DMatPacket*)mBuffer[slot]; pkt != nullptr; pkt = (J3DMatPacket*)pkt->getNextPacket()) {
				if (pkt->mMaterialAnm == pMaterialAnm) {
					pkt->addShapePacket(packet->getShapePacket());
					return false;
				}
			}

			packet->setNextPacket(mBuffer[slot]);
			mBuffer[slot] = packet;
			return true;
		}
	}
}

/**
 * @note Address: 0x80065EC8
 * @note Size: 0x11C
 */
bool J3DDrawBuffer::entryZSort(J3DMatPacket* i_packet)
{
	i_packet->drawClear();
	i_packet->getShapePacket()->drawClear();

	Vec tmp;
	tmp.x = mZMtx[0][3];
	tmp.y = mZMtx[1][3];
	tmp.z = mZMtx[2][3];

	f32 value = -J3DCalcZValue(j3dSys.getViewMtx(), tmp);

	u32 uvar4;
	if (mZNear + mZRatio < value) {
		if (mZFar - mZRatio > value) {
			uvar4 = value / mZRatio;
		} else {
			uvar4 = mBufferSize - 1;
		}
	} else {
		uvar4 = 0;
	}

	u32 idx = (mBufferSize - 1) - uvar4;
	i_packet->setNextPacket(mBuffer[(mBufferSize - 1) - uvar4]); // why is this necessary to match smh
	mBuffer[idx] = i_packet;

	return true;
}

/**
 * @note Address: 0x80065FE4
 * @note Size: 0x50
 */
bool J3DDrawBuffer::entryModelSort(J3DMatPacket* i_packet)
{
	i_packet->drawClear();
	i_packet->getShapePacket()->drawClear();

	if (mCallBackPacket != nullptr) {
		mCallBackPacket->addChildPacket(i_packet);
		return true;
	}

	return false;
}

/**
 * @note Address: 0x80066034
 * @note Size: 0x54
 */
bool J3DDrawBuffer::entryInvalidSort(J3DMatPacket* i_packet)
{
	i_packet->drawClear();
	i_packet->getShapePacket()->drawClear();

	if (mCallBackPacket != nullptr) {
		mCallBackPacket->addChildPacket(i_packet->getShapePacket());
		return true;
	}

	return false;
}

/**
 * @note Address: 0x80066088
 * @note Size: 0x34
 */
bool J3DDrawBuffer::entryNonSort(J3DMatPacket* i_packet)
{
	i_packet->drawClear();
	i_packet->mShapePacket->drawClear();

	i_packet->setNextPacket(mBuffer[0]);
	mBuffer[0] = i_packet;

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
		for (J3DPacket* packet = buf[i]; packet != nullptr; packet = packet->getNextPacket()) {
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
		for (J3DPacket* packet = mBuffer[i]; packet != nullptr; packet = packet->getNextPacket()) {
			packet->draw();
		}
	}
}
