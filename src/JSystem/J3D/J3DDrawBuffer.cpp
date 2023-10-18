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

/*
    Generated from dpostproc

    .section .ctors, "wa"  # 0x80472F00 - 0x804732C0
    .4byte __sinit_J3DDrawBuffer_cpp

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global lbl_804A1930
    lbl_804A1930:
        .4byte 0x00000000
        .4byte 0xFFFFFFFF
        .4byte entryMatSort__13J3DDrawBufferFP12J3DMatPacket
        .4byte 0x00000000
        .4byte 0xFFFFFFFF
        .4byte entryMatAnmSort__13J3DDrawBufferFP12J3DMatPacket
        .4byte 0x00000000
        .4byte 0xFFFFFFFF
        .4byte entryZSort__13J3DDrawBufferFP12J3DMatPacket
        .4byte 0x00000000
        .4byte 0xFFFFFFFF
        .4byte entryModelSort__13J3DDrawBufferFP12J3DMatPacket
        .4byte 0x00000000
        .4byte 0xFFFFFFFF
        .4byte entryInvalidSort__13J3DDrawBufferFP12J3DMatPacket
        .4byte 0x00000000
        .4byte 0xFFFFFFFF
        .4byte entryNonSort__13J3DDrawBufferFP12J3DMatPacket
    .global sortFuncTable__13J3DDrawBuffer
    sortFuncTable__13J3DDrawBuffer:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0xFFFFFFFF
        .4byte drawHead__13J3DDrawBufferCFv
        .4byte 0x00000000
        .4byte 0xFFFFFFFF
        .4byte drawTail__13J3DDrawBufferCFv
    .global drawFuncTable__13J3DDrawBuffer
    drawFuncTable__13J3DDrawBuffer:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000

    .section .sbss # 0x80514D80 - 0x80516360
    .global entryNum__13J3DDrawBuffer
    entryNum__13J3DDrawBuffer:
        .skip 0x8

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80516A00
    lbl_80516A00:
        .float 1.0
    .global lbl_80516A04
    lbl_80516A04:
        .4byte 0x461C4000
    .global lbl_80516A08
    lbl_80516A08:
        .4byte 0x43300000
        .4byte 0x00000000
*/

/*
 * --INFO--
 * Address:	800659A4
 * Size:	000068
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

/*
 * --INFO--
 * Address:	80065A0C
 * Size:	000084
 */
J3DErrType J3DDrawBuffer::allocBuffer(u32 bufSize)
{
	mBuffer = new (0x20) J3DPacket*[bufSize];
	// if (mBuffer == nullptr)
	//	return JET_OutOfMemory;

	mBufferSize = bufSize;
	frameInit();
	calcZRatio();
	return JET_Success;
}

/*
 * --INFO--
 * Address:	80065A90
 * Size:	0000EC
 */
void J3DDrawBuffer::frameInit()
{
	u32 bufSize = mBufferSize;
	for (u32 i = 0; i < bufSize; i++)
		mBuffer[i] = nullptr;

	mCallBackPacket = nullptr;
}

/*
 * --INFO--
 * Address:	80065B7C
 * Size:	000158
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

/*
 * --INFO--
 * Address:	80065CE0
 * Size:	0001E8
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

/*
 * --INFO--
 * Address:	80065EC8
 * Size:	00011C
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
	i_packet->setNextPacket(mBuffer[idx]);
	mBuffer[idx] = i_packet;

	return true;
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	lfs      f3, lbl_80516A00@sda21(r2)
	stw      r0, 0x34(r1)
	li       r0, 0
	stw      r31, 0x2c(r1)
	mr       r31, r4
	stw      r30, 0x28(r1)
	mr       r30, r3
	stw      r0, 4(r4)
	lis      r4, j3dSys@ha
	addi     r3, r4, j3dSys@l
	stw      r0, 8(r31)
	lwz      r4, 0x2c(r31)
	stw      r0, 4(r4)
	stw      r0, 8(r4)
	lwz      r4, 0x1c(r30)
	psq_l    f5, 32(r3), 0, qr0
	lfs      f2, 0xc(r4)
	lfs      f1, 0x1c(r4)
	lfs      f0, 0x2c(r4)
	stfs     f2, 0x14(r1)
	psq_l    f2, 40(r3), 0, qr0
	stfs     f0, 0x1c(r1)
	lwz      r4, 0x14(r1)
	stfs     f1, 0x18(r1)
	lwz      r0, 0x1c(r1)
	lwz      r3, 0x18(r1)
	stw      r0, 0x10(r1)
	lfs      f0, 0x10(r30)
	lfs      f4, 0x10(r1)
	stw      r4, 8(r1)
	ps_merge00 f4, f4, f3
	lfs      f6, 0x18(r30)
	stw      r3, 0xc(r1)
	fadds    f0, f0, f6
	psq_l    f1, 8(r1), 0, qr0
	ps_mul   f5, f1, f5
	ps_madd  f2, f4, f2, f5
	ps_sum0  f2, f2, f2, f2
	fneg     f1, f2
	fcmpo    cr0, f0, f1
	bge      lbl_80065FA0
	lfs      f0, 0x14(r30)
	fsubs    f0, f0, f6
	fcmpo    cr0, f0, f1
	ble      lbl_80065F94
	fdivs    f1, f1, f6
	bl       __cvt_fp2unsigned
	mr       r6, r3
	b        lbl_80065FA4

lbl_80065F94:
	lwz      r3, 4(r30)
	addi     r6, r3, -1
	b        lbl_80065FA4

lbl_80065FA0:
	li       r6, 0

lbl_80065FA4:
	lwz      r5, 4(r30)
	li       r3, 1
	lwz      r4, 0(r30)
	addi     r0, r5, -1
	subf     r0, r6, r0
	slwi     r5, r0, 2
	lwzx     r0, r4, r5
	stw      r0, 4(r31)
	lwz      r4, 0(r30)
	stwx     r31, r4, r5
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	80065FE4
 * Size:	000050
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

/*
 * --INFO--
 * Address:	80066034
 * Size:	000054
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

/*
 * --INFO--
 * Address:	80066088
 * Size:	000034
 */
bool J3DDrawBuffer::entryNonSort(J3DMatPacket* i_packet)
{
	i_packet->drawClear();
	i_packet->mShapePacket->drawClear();

	i_packet->setNextPacket(mBuffer[0]);
	mBuffer[0] = i_packet;

	return true;
}

/*
 * --INFO--
 * Address:	800660BC
 * Size:	000054
 */
void J3DDrawBuffer::draw() const
{
	drawFunc func = drawFuncTable[mDrawType];
	(this->*func)();
}

/*
 * --INFO--
 * Address:	80066110
 * Size:	000084
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

/*
 * --INFO--
 * Address:	80066194
 * Size:	000084
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

/*
 * --INFO--
 * Address:	80066218
 * Size:	0000E4
 */
void __sinit_J3DDrawBuffer_cpp()
{
	/*
	stwu     r1, -0x50(r1)
	lis      r3, lbl_804A1930@ha
	stmw     r16, 0x10(r1)
	addi     r16, r3, lbl_804A1930@l
	addi     r20, r16, 0x48
	addi     r5, r16, 0xa8
	lwz      r17, 0(r16)
	lwz      r18, 4(r16)
	lwz      r19, 8(r16)
	lwz      r21, 0xc(r16)
	lwz      r22, 0x10(r16)
	lwz      r23, 0x14(r16)
	lwz      r24, 0x18(r16)
	lwz      r25, 0x1c(r16)
	lwz      r26, 0x20(r16)
	lwz      r27, 0x24(r16)
	lwz      r28, 0x28(r16)
	lwz      r29, 0x2c(r16)
	lwz      r30, 0x30(r16)
	lwz      r31, 0x34(r16)
	lwz      r12, 0x38(r16)
	lwz      r11, 0x3c(r16)
	lwz      r10, 0x40(r16)
	lwz      r9, 0x44(r16)
	lwz      r8, 0x90(r16)
	lwz      r7, 0x94(r16)
	lwz      r6, 0x98(r16)
	lwz      r4, 0x9c(r16)
	lwz      r3, 0xa0(r16)
	lwz      r0, 0xa4(r16)
	stw      r17, 0x48(r16)
	stw      r18, 0x4c(r16)
	stw      r19, 0x50(r16)
	stw      r21, 0xc(r20)
	stw      r22, 0x10(r20)
	stw      r23, 0x14(r20)
	stw      r24, 0x18(r20)
	stw      r25, 0x1c(r20)
	stw      r26, 0x20(r20)
	stw      r27, 0x24(r20)
	stw      r28, 0x28(r20)
	stw      r29, 0x2c(r20)
	stw      r30, 0x30(r20)
	stw      r31, 0x34(r20)
	stw      r12, 0x38(r20)
	stw      r11, 0x3c(r20)
	stw      r10, 0x40(r20)
	stw      r9, 0x44(r20)
	stw      r8, 0xa8(r16)
	stw      r7, 0xac(r16)
	stw      r6, 0xb0(r16)
	stw      r4, 0xc(r5)
	stw      r3, 0x10(r5)
	stw      r0, 0x14(r5)
	lmw      r16, 0x10(r1)
	addi     r1, r1, 0x50
	blr
	*/
}
