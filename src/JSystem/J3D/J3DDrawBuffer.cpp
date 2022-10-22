#include "JSystem/J3D/J3DDrawBuffer.h"
#include "JSystem/J3D/J3DPacket.h"
#include "JSystem/J3D/J3DSys.h"
#include "JSystem/J3D/J3DTevBlock.h"
#include "JSystem/J3D/J3DTypes.h"
#include "JSystem/JKR/JKRHeap.h"
#include "types.h"

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
	_08 = 0;
	_0C = 0;
	_10 = 1.0f;
	_14 = 10000.0f;
	_1C = 0;
	_20 = 0;
	_04 = 0x20;
	_18 = (_14 - _10) / _04;
}

/*
 * --INFO--
 * Address:	80065A0C
 * Size:	000084
 */
J3DErrType J3DDrawBuffer::allocBuffer(unsigned long count)
{
	_00 = new (0x20) J3DMatPacket*[count];
	_04 = count;
	frameInit();
	_18 = (_14 - _10) / _04;
	return JET_Success;
}

/*
 * --INFO--
 * Address:	80065A90
 * Size:	0000EC
 */
void J3DDrawBuffer::frameInit()
{
	for (int i = _04; i >= 0; i--) {
		_00[i] = 0;
	}
	_20 = 0;
	/*
	stwu     r1, -0x10(r1)
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	li       r30, 0
	lwz      r31, 4(r3)
	cmplwi   r31, 0
	ble      lbl_80065B64
	cmplwi   r31, 8
	addi     r4, r31, -8
	ble      lbl_80065B3C
	addi     r0, r4, 7
	li       r12, 0
	srwi     r0, r0, 3
	mtctr    r0
	cmplwi   r4, 0
	ble      lbl_80065B3C

lbl_80065AD0:
	lwz      r4, 0(r3)
	li       r11, 0
	addi     r9, r12, 4
	addi     r8, r12, 8
	stwx     r11, r4, r12
	addi     r7, r12, 0xc
	addi     r6, r12, 0x10
	addi     r5, r12, 0x14
	lwz      r10, 0(r3)
	addi     r4, r12, 0x18
	addi     r0, r12, 0x1c
	addi     r12, r12, 0x20
	stwx     r11, r10, r9
	addi     r30, r30, 8
	lwz      r9, 0(r3)
	stwx     r11, r9, r8
	lwz      r8, 0(r3)
	stwx     r11, r8, r7
	lwz      r7, 0(r3)
	stwx     r11, r7, r6
	lwz      r6, 0(r3)
	stwx     r11, r6, r5
	lwz      r5, 0(r3)
	stwx     r11, r5, r4
	lwz      r4, 0(r3)
	stwx     r11, r4, r0
	bdnz     lbl_80065AD0

lbl_80065B3C:
	subf     r0, r30, r31
	slwi     r6, r30, 2
	li       r5, 0
	mtctr    r0
	cmplw    r30, r31
	bge      lbl_80065B64

lbl_80065B54:
	lwz      r4, 0(r3)
	stwx     r5, r4, r6
	addi     r6, r6, 4
	bdnz     lbl_80065B54

lbl_80065B64:
	li       r0, 0
	stw      r0, 0x20(r3)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80065B7C
 * Size:	000158
 */
bool J3DDrawBuffer::entryMatSort(J3DMatPacket* packet)
{
	// packet->_04         = nullptr;
	// packet->_08         = nullptr;
	// packet->_2C->_04    = nullptr;
	// packet->_2C->_08    = nullptr;
	// J3DTexture* texture = j3dSys._58;
	// if ((packet->_34 & 0x80000000) == 0) {
	// 	s16 texNo = packet->_30->m_tevBlock->getTexNo(0);
	// 	u32 index = (texNo == -1) ? 0 : texture->_04->_00.m_textureFormat + texture->_04->_00.m_imageDataOffset
	// }
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	li       r0, 0
	stw      r31, 0x1c(r1)
	mr       r31, r4
	stw      r30, 0x18(r1)
	mr       r30, r3
	stw      r29, 0x14(r1)
	stw      r28, 0x10(r1)
	stw      r0, 4(r4)
	stw      r0, 8(r4)
	lwz      r3, 0x2c(r4)
	stw      r0, 4(r3)
	stw      r0, 8(r3)
	lwz      r0, 0x34(r4)
	rlwinm.  r0, r0, 0, 0, 0
	beq      lbl_80065BE0
	lwz      r4, 0(r30)
	li       r3, 1
	lwz      r0, 0(r4)
	stw      r0, 4(r31)
	lwz      r4, 0(r30)
	stw      r31, 0(r4)
	b        lbl_80065CB4

lbl_80065BE0:
	lwz      r3, 0x30(r31)
	lis      r4, j3dSys@ha
	addi     r5, r4, j3dSys@l
	li       r4, 0
	lwz      r3, 0x2c(r3)
	lwz      r29, 0x58(r5)
	lwz      r12, 0(r3)
	lwz      r12, 0x50(r12)
	mtctr    r12
	bctrl
	clrlwi   r0, r3, 0x10
	cmplwi   r0, 0xffff
	bne      lbl_80065C1C
	li       r5, 0
	b        lbl_80065C34

lbl_80065C1C:
	lwz      r4, 4(r29)
	rlwinm   r0, r3, 5, 0xb, 0x1a
	add      r3, r4, r0
	lwz      r0, 0x1c(r3)
	add      r0, r3, r0
	srwi     r5, r0, 5

lbl_80065C34:
	lwz      r3, 4(r30)
	lwz      r4, 0(r30)
	addi     r0, r3, -1
	and      r0, r5, r0
	slwi     r29, r0, 2
	lwzx     r0, r4, r29
	cmplwi   r0, 0
	bne      lbl_80065C60
	stwx     r31, r4, r29
	li       r3, 1
	b        lbl_80065CB4

lbl_80065C60:
	mr       r28, r0
	b        lbl_80065C94

lbl_80065C68:
	mr       r3, r28
	mr       r4, r31
	bl       isSame__12J3DMatPacketCFP12J3DMatPacket
	clrlwi.  r0, r3, 0x18
	beq      lbl_80065C90
	lwz      r4, 0x2c(r31)
	mr       r3, r28
	bl       addShapePacket__12J3DMatPacketFP14J3DShapePacket
	li       r3, 0
	b        lbl_80065CB4

lbl_80065C90:
	lwz      r28, 4(r28)

lbl_80065C94:
	cmplwi   r28, 0
	bne      lbl_80065C68
	lwz      r4, 0(r30)
	li       r3, 1
	lwzx     r0, r4, r29
	stw      r0, 4(r31)
	lwz      r4, 0(r30)
	stwx     r31, r4, r29

lbl_80065CB4:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r28, 0x10(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80065CD4
 * Size:	00000C
 */
u16 J3DTevBlock::getTexNo(unsigned long p1) const { return 0xFFFF; }

/*
 * --INFO--
 * Address:	80065CE0
 * Size:	0001E8
 */
bool J3DDrawBuffer::entryMatAnmSort(J3DMatPacket* packet)
{
	u32 index = packet->_3C & (_04 - 1);
	if (packet->_3C == 0) {
		return entryMatSort(packet);
	}
	packet->clearListPointers();
	packet->_2C->clearListPointers();
	if (_00[index] == nullptr) {
		_00[index] = packet;
	} else {
		for (J3DMatPacket* iPacket = _00[index]; iPacket != nullptr; iPacket = (J3DMatPacket*)iPacket->_04) {
			if (iPacket->_3C == packet->_3C) {
				iPacket->addShapePacket(packet->_2C);
				return false;
			}
		}
		packet->_04 = _00[index];
		_00[index]  = packet;
	}
	return true;
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r4
	stw      r30, 0x18(r1)
	mr       r30, r3
	stw      r29, 0x14(r1)
	stw      r28, 0x10(r1)
	lwz      r6, 0x3c(r4)
	lwz      r3, 4(r3)
	cmplwi   r6, 0
	addi     r0, r3, -1
	and      r3, r6, r0
	bne      lbl_80065E30
	li       r0, 0
	stw      r0, 4(r31)
	stw      r0, 8(r31)
	lwz      r3, 0x2c(r31)
	stw      r0, 4(r3)
	stw      r0, 8(r3)
	lwz      r0, 0x34(r31)
	rlwinm.  r0, r0, 0, 0, 0
	beq      lbl_80065D5C
	lwz      r4, 0(r30)
	li       r3, 1
	lwz      r0, 0(r4)
	stw      r0, 4(r31)
	lwz      r4, 0(r30)
	stw      r31, 0(r4)
	b        lbl_80065EA8

lbl_80065D5C:
	lwz      r3, 0x30(r31)
	lis      r4, j3dSys@ha
	addi     r5, r4, j3dSys@l
	li       r4, 0
	lwz      r3, 0x2c(r3)
	lwz      r29, 0x58(r5)
	lwz      r12, 0(r3)
	lwz      r12, 0x50(r12)
	mtctr    r12
	bctrl
	clrlwi   r0, r3, 0x10
	cmplwi   r0, 0xffff
	bne      lbl_80065D98
	li       r5, 0
	b        lbl_80065DB0

lbl_80065D98:
	lwz      r4, 4(r29)
	rlwinm   r0, r3, 5, 0xb, 0x1a
	add      r3, r4, r0
	lwz      r0, 0x1c(r3)
	add      r0, r3, r0
	srwi     r5, r0, 5

lbl_80065DB0:
	lwz      r3, 4(r30)
	lwz      r4, 0(r30)
	addi     r0, r3, -1
	and      r0, r5, r0
	slwi     r28, r0, 2
	lwzx     r29, r4, r28
	cmplwi   r29, 0
	bne      lbl_80065E0C
	stwx     r31, r4, r28
	li       r3, 1
	b        lbl_80065EA8
	b        lbl_80065E0C

lbl_80065DE0:
	mr       r3, r29
	mr       r4, r31
	bl       isSame__12J3DMatPacketCFP12J3DMatPacket
	clrlwi.  r0, r3, 0x18
	beq      lbl_80065E08
	lwz      r4, 0x2c(r31)
	mr       r3, r29
	bl       addShapePacket__12J3DMatPacketFP14J3DShapePacket
	li       r3, 0
	b        lbl_80065EA8

lbl_80065E08:
	lwz      r29, 4(r29)

lbl_80065E0C:
	cmplwi   r29, 0
	bne      lbl_80065DE0
	lwz      r4, 0(r30)
	li       r3, 1
	lwzx     r0, r4, r28
	stw      r0, 4(r31)
	lwz      r4, 0(r30)
	stwx     r31, r4, r28
	b        lbl_80065EA8

lbl_80065E30:
	li       r0, 0
	slwi     r5, r3, 2
	stw      r0, 4(r31)
	stw      r0, 8(r31)
	lwz      r3, 0x2c(r31)
	stw      r0, 4(r3)
	stw      r0, 8(r3)
	lwz      r3, 0(r30)
	lwzx     r4, r3, r5
	cmplwi   r4, 0
	bne      lbl_80065E68
	stwx     r31, r3, r5
	li       r3, 1
	b        lbl_80065EA8

lbl_80065E68:
	mr       r3, r4
	b        lbl_80065E90

lbl_80065E70:
	lwz      r0, 0x3c(r3)
	cmplw    r0, r6
	bne      lbl_80065E8C
	lwz      r4, 0x2c(r31)
	bl       addShapePacket__12J3DMatPacketFP14J3DShapePacket
	li       r3, 0
	b        lbl_80065EA8

lbl_80065E8C:
	lwz      r3, 4(r3)

lbl_80065E90:
	cmplwi   r3, 0
	bne      lbl_80065E70
	stw      r4, 4(r31)
	li       r3, 1
	lwz      r4, 0(r30)
	stwx     r31, r4, r5

lbl_80065EA8:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r28, 0x10(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80065EC8
 * Size:	00011C
 */
void J3DDrawBuffer::entryZSort(J3DMatPacket*)
{
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
bool J3DDrawBuffer::entryModelSort(J3DMatPacket* packet)
{
	packet->clearListPointers();
	packet->_2C->clearListPointers();
	if (_20 != nullptr) {
		_20->addChildPacket(packet);
		return true;
	}
	return false;
}

/*
 * --INFO--
 * Address:	80066034
 * Size:	000054
 */
bool J3DDrawBuffer::entryInvalidSort(J3DMatPacket* packet)
{
	packet->clearListPointers();
	packet->_2C->clearListPointers();
	if (_20 != nullptr) {
		_20->addChildPacket(packet->_2C);
		return true;
	}
	return false;
}

/*
 * --INFO--
 * Address:	80066088
 * Size:	000034
 */
bool J3DDrawBuffer::entryNonSort(J3DMatPacket* packet)
{
	packet->clearListPointers();
	packet->_2C->clearListPointers();
	packet->_04 = _00[0];
	_00[0]      = packet;
	return true;
}

/*
 * --INFO--
 * Address:	800660BC
 * Size:	000054
 */
void J3DDrawBuffer::draw() const
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lwz      r5, 8(r3)
	lis      r4, drawFuncTable__13J3DDrawBuffer@ha
	stw      r0, 0x24(r1)
	addi     r0, r4, drawFuncTable__13J3DDrawBuffer@l
	mulli    r4, r5, 0xc
	addi     r12, r1, 8
	add      r6, r0, r4
	lwz      r5, 0(r6)
	lwz      r4, 4(r6)
	lwz      r0, 8(r6)
	stw      r5, 8(r1)
	stw      r4, 0xc(r1)
	stw      r0, 0x10(r1)
	bl       __ptmf_scall
	nop
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80066110
 * Size:	000084
 */
void J3DDrawBuffer::drawHead() const
{
	for (int i = 0; i < _04; i++) {
		for (J3DPacket* packet = _00[i]; packet != nullptr; packet = packet->_04) {
			packet->draw();
		}
	}

	// J3DPacket* v1 = *_00;
	// for (int i = 0; i < _04; i++) {
	// 	for (J3DPacket* packet = v1; packet != nullptr; packet = packet->_04) {
	// 		packet->draw();
	// 	}
	// 	v1++;
	// }

	// J3DPacket* v1 = *_00;
	// for (int i = 0; i < _04; i++) {
	// 	for (J3DPacket* packet = v1++; packet != nullptr; packet = packet->_04) {
	// 		packet->draw();
	// 	}
	// }

	// J3DPacket* v1 = *_00;
	// for (int i = 0; i < _04; v1++, i++) {
	// 	for (J3DPacket* packet = v1; packet != nullptr; packet = packet->_04) {
	// 		packet->draw();
	// 	}
	// }
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	lwz      r31, 0(r3)
	stw      r30, 0x18(r1)
	lwz      r30, 4(r3)
	stw      r29, 0x14(r1)
	li       r29, 0
	stw      r28, 0x10(r1)
	b        lbl_8006616C

lbl_8006613C:
	lwz      r28, 0(r31)
	b        lbl_8006615C

lbl_80066144:
	mr       r3, r28
	lwz      r12, 0(r28)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	lwz      r28, 4(r28)

lbl_8006615C:
	cmplwi   r28, 0
	bne      lbl_80066144
	addi     r31, r31, 4
	addi     r29, r29, 1

lbl_8006616C:
	cmplw    r29, r30
	blt      lbl_8006613C
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r28, 0x10(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80066194
 * Size:	000084
 */
void J3DDrawBuffer::drawTail() const
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lwz      r4, 4(r3)
	stw      r0, 0x24(r1)
	lwz      r0, 0(r3)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	addi     r30, r4, -1
	slwi     r3, r30, 2
	stw      r29, 0x14(r1)
	add      r31, r0, r3
	b        lbl_800661F4

lbl_800661C4:
	lwz      r29, 0(r31)
	b        lbl_800661E4

lbl_800661CC:
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	lwz      r29, 4(r29)

lbl_800661E4:
	cmplwi   r29, 0
	bne      lbl_800661CC
	addi     r31, r31, -4
	addi     r30, r30, -1

lbl_800661F4:
	cmpwi    r30, 0
	bge      lbl_800661C4
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80066218
 * Size:	0000E4
 */
void __sinit_J3DDrawBuffer_cpp(void)
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
