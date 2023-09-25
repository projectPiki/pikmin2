#include "Dolphin/gx.h"
#include "JSystem/J3D/J3DAnmTevRegKey.h"
#include "JSystem/J3D/J3DAnmTextureSRTKey.h"
#include "JSystem/J3D/J3DColorBlock.h"
#include "JSystem/J3D/J3DMaterialAnm.h"
#include "JSystem/J3D/J3DMaterial.h"
#include "JSystem/J3D/J3DTevBlock.h"
#include "JSystem/J3D/J3DTexGenBlock.h"
#include "JSystem/J3D/J3DTexMtx.h"
#include "JSystem/J3D/J3DTypes.h"
#include "types.h"

/*
 * --INFO--
 * Address:	8006A0F4
 * Size:	000070
 * initialize__14J3DMaterialAnmFv
 */
void J3DMaterialAnm::initialize()
{
	for (int i = 0; i < 2; i++) {
		mMatColAnmList[i].setAnmFlag(false);
	}
	for (int i = 0; i < 8; i++) {
		mTexNoAnmList[i].setAnmFlag(false);
	}
	for (int i = 0; i < 4; i++) {
		mTevColAnmList[i].setAnmFlag(false);
	}
	for (int i = 0; i < 4; i++) {
		mTevKColAnmList[i].setAnmFlag(false);
	}
	for (int i = 0; i < 8; i++) {
		mTexMtxAnmList[i].setAnmFlag(false);
	}
}

/*
 * --INFO--
 * Address:	8006A164
 * Size:	0001EC
 * calc__14J3DMaterialAnmCFP11J3DMaterial
 */
void J3DMaterialAnm::calc(J3DMaterial* material) const
{
	for (u32 i = 0; i < 2; i++) {
		if (mMatColAnmList[i].getAnmFlag()) {
			GXColor* color = material->mColorBlock->getMatColor(i);
			mMatColAnmList[i].calc(color);
		}
	}

	u16 tmp;
	for (u32 i = 0; i < 8; i++) {
		if (mTexNoAnmList[i].getAnmFlag()) {
			mTexNoAnmList[i].calc(&tmp);
			material->mTevBlock->setTexNo(i, tmp);
		}
	}
	for (u32 i = 0; i < 3; i++) {
		if (mTevColAnmList[i].getAnmFlag()) {
			GXColorS10* color = material->getTevBlock()->getTevColor(i);
			mTevColAnmList[i].calc(color);
		}
	}
	for (u32 i = 0; i < 4; i++) {
		if (mTevKColAnmList[i].getAnmFlag()) {
			GXColor* color = material->mTevBlock->getTevKColor(i);
			mTevKColAnmList[i].calc(color);
		}
	}
	for (u32 i = 0; i < 8; i++) {
		if (mTexMtxAnmList[i].getAnmFlag()) {
			J3DTextureSRTInfo* info = &material->mTexGenBlock->getTexMtx(i)->mSrtInfo;
			mTexMtxAnmList[i].calc(info);
		}
	}

	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r4
	stw      r30, 0x18(r1)
	mr       r30, r3
	stw      r29, 0x14(r1)
	mr       r29, r30
	stw      r28, 0x10(r1)
	li       r28, 0

lbl_8006A190:
	lhz      r0, 6(r29)
	cmplwi   r0, 0
	beq      lbl_8006A1D4
	lwz      r3, 0x24(r31)
	mr       r4, r28
	lwz      r12, 0(r3)
	lwz      r12, 0x38(r12)
	mtctr    r12
	bctrl
	mr       r0, r3
	lwz      r3, 8(r29)
	mr       r5, r0
	lhz      r4, 4(r29)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl

lbl_8006A1D4:
	addi     r28, r28, 1
	addi     r29, r29, 8
	cmplwi   r28, 2
	blt      lbl_8006A190
	li       r28, 0
	mr       r29, r30

lbl_8006A1EC:
	lhz      r0, 0x5a(r29)
	cmplwi   r0, 0
	beq      lbl_8006A22C
	addi     r3, r29, 0x54
	addi     r4, r1, 8
	lwz      r12, 0x54(r29)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x2c(r31)
	mr       r4, r28
	lhz      r5, 8(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x4c(r12)
	mtctr    r12
	bctrl

lbl_8006A22C:
	addi     r28, r28, 1
	addi     r29, r29, 0xc
	cmplwi   r28, 8
	blt      lbl_8006A1EC
	li       r28, 0
	mr       r29, r30

lbl_8006A244:
	lhz      r0, 0xb6(r29)
	cmplwi   r0, 0
	beq      lbl_8006A27C
	lwz      r3, 0x2c(r31)
	mr       r4, r28
	lwz      r12, 0(r3)
	lwz      r12, 0x68(r12)
	mtctr    r12
	bctrl
	mr       r0, r3
	lwz      r3, 0xb8(r29)
	lhz      r4, 0xb4(r29)
	mr       r5, r0
	bl       getTevColorReg__15J3DAnmTevRegKeyCFUsP11_GXColorS10

lbl_8006A27C:
	addi     r28, r28, 1
	addi     r29, r29, 8
	cmplwi   r28, 3
	blt      lbl_8006A244
	li       r28, 0
	mr       r29, r30

lbl_8006A294:
	lhz      r0, 0xd6(r29)
	cmplwi   r0, 0
	beq      lbl_8006A2CC
	lwz      r3, 0x2c(r31)
	mr       r4, r28
	lwz      r12, 0(r3)
	lwz      r12, 0x74(r12)
	mtctr    r12
	bctrl
	mr       r0, r3
	lwz      r3, 0xd8(r29)
	lhz      r4, 0xd4(r29)
	mr       r5, r0
	bl       getTevKonstReg__15J3DAnmTevRegKeyCFUsP8_GXColor

lbl_8006A2CC:
	addi     r28, r28, 1
	addi     r29, r29, 8
	cmplwi   r28, 4
	blt      lbl_8006A294
	li       r28, 0
	mr       r29, r30

lbl_8006A2E4:
	lhz      r0, 0x16(r29)
	cmplwi   r0, 0
	beq      lbl_8006A320
	lwz      r3, 0x28(r31)
	mr       r4, r28
	lwz      r12, 0(r3)
	lwz      r12, 0x50(r12)
	mtctr    r12
	bctrl
	lwz      r6, 0x18(r29)
	addi     r5, r3, 0x10
	lhz      r4, 0x14(r29)
	lfs      f1, 8(r6)
	mr       r3, r6
	bl       calcTransform__19J3DAnmTextureSRTKeyCFfUsP17J3DTextureSRTInfo

lbl_8006A320:
	addi     r28, r28, 1
	addi     r29, r29, 8
	cmplwi   r28, 8
	blt      lbl_8006A2E4
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
