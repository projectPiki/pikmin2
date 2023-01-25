#include "Dolphin/gx.h"
#include "JSystem/J3D/J3DAnmTevRegKey.h"
#include "JSystem/J3D/J3DAnmTextureSRTKey.h"
#include "JSystem/J3D/J3DColorBlock.h"
#include "JSystem/J3D/J3DMatColorAnm.h"
#include "JSystem/J3D/J3DMaterialAnm.h"
#include "JSystem/J3D/J3DMaterial.h"
#include "JSystem/J3D/J3DTevBlock.h"
#include "JSystem/J3D/J3DTevColorAnm.h"
#include "JSystem/J3D/J3DTexGenBlock.h"
#include "JSystem/J3D/J3DTexMtx.h"
#include "JSystem/J3D/J3DTexMtxAnm.h"
#include "JSystem/J3D/J3DTypes.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__14J3DMaterialAnm
    __vt__14J3DMaterialAnm:
        .4byte 0
        .4byte 0
        .4byte __dt__14J3DMaterialAnmFv
        .4byte calc__14J3DMaterialAnmCFP11J3DMaterial
    .global __vt__11J3DTexNoAnm
    __vt__11J3DTexNoAnm:
        .4byte 0
        .4byte 0
        .4byte calc__11J3DTexNoAnmCFPUs
        .4byte 0
*/

/*
 * --INFO--
 * Address:	8006A0F4
 * Size:	000070
 * initialize__14J3DMaterialAnmFv
 */
void J3DMaterialAnm::initialize()
{
	for (int i = 0; i < 2; i++) {
		mMatColAnmList[i]._02 = 0;
	}
	for (int i = 0; i < 8; i++) {
		mTexNoAnmList[i]._06 = 0;
	}
	for (int i = 0; i < 4; i++) {
		mTevColAnmList[i]._02 = 0;
	}
	for (int i = 0; i < 4; i++) {
		mTevKColAnmList[i]._02 = 0;
	}
	for (int i = 0; i < 8; i++) {
		mTexMtxAnmList[i]._02 = 0;
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
		// const J3DMatColorAnm* matColorAnm = mMatColAnmList + i;
		// if (matColorAnm->_02 != 0) {
		// 	J3DGXColor* color = material->mColorBlock->getMatColor(i);
		// 	matColorAnm->mAnm->getColor(matColorAnm->_00, color);
		// }
		// if (mMatColAnmList[i]._02 != 0) {
		// 	J3DGXColor* color = material->mColorBlock->getMatColor(i);
		// 	mMatColAnmList[i].mAnm->getColor(mMatColAnmList[i]._00, color);
		// }

		if (mMatColAnmList[i]._02 != 0) {
			J3DGXColor* color = material->mColorBlock->getMatColor(i);
			u16 index         = mMatColAnmList[i]._00;
			mMatColAnmList[i].mAnm->getColor(index, color);
		}
	}
	for (u32 i = 0; i < 8; i++) {
		// const J3DTexNoAnm* texNoAnm = mTexNoAnmList + i;
		// if (texNoAnm->_06 != 0) {
		// 	u16 v1;
		// 	texNoAnm->calc(&v1);
		// 	material->mTevBlock->setTexNo(i, v1);
		// }
		if (mTexNoAnmList[i]._06 != 0) {
			u16 v1;
			mTexNoAnmList[i].calc(&v1);
			material->mTevBlock->setTexNo(i, v1);
		}
	}
	for (u32 i = 0; i < 3; i++) {
		// const J3DTevColorAnm* tevColorAnm = mTevColAnmList + i;
		// if (tevColorAnm->_02 != 0) {
		// 	GXColorS10* color = material->mTevBlock->getTevColor(i);
		// 	J3DAnmTevRegKey* anm = tevColorAnm->mKey;
		// 	u16 index = tevColorAnm->mIndex;
		// 	anm->getTevColorReg(index, color);
		// 	// mTevColAnmList[i].mKey->getTevColorReg(mTevColAnmList[i].mIndex, material->mTevBlock->getTevColor(i));
		// }
		if (mTevColAnmList[i]._02 != 0) {
			GXColorS10* color    = material->mTevBlock->getTevColor(i);
			J3DAnmTevRegKey* anm = mTevColAnmList[i].mKey;
			u16 index            = mTevColAnmList[i].mIndex;
			anm->getTevColorReg(index, color);
			// mTevColAnmList[i].mKey->getTevColorReg(mTevColAnmList[i].mIndex, material->mTevBlock->getTevColor(i));
		}
	}
	for (u32 i = 0; i < 4; i++) {
		if (mTevKColAnmList[i]._02 != 0) {
			GXColor* color = material->mTevBlock->getTevKColor(i);
			// J3DTevBlock* tevBlock = material->mTevBlock;
			// J3DAnmTevRegKey* anm = mTevKColAnmList[i].mKey;
			// anm->getTevKonstReg(mTevKColAnmList[i].mIndex, tevBlock->getTevKColor(i));
			// anm->getTevKonstReg(mTevKColAnmList[i].mIndex, color);
			// anm->getTevKonstReg(mTevKColAnmList[i].mIndex, material->mTevBlock->getTevKColor(i));
			mTevKColAnmList[i].mKey->getTevKonstReg(mTevKColAnmList[i].mIndex, color);
			// mTevKColAnmList[i].mKey->getTevKonstReg(mTevKColAnmList[i].mIndex, material->mTevBlock->getTevKColor(i));
		}
	}
	for (u32 i = 0; i < 8; i++) {
		// const J3DTexMtxAnm* texMtxAnm = mTexMtxAnmList + i;
		// if (texMtxAnm->_02 != 0) {
		// 	texMtxAnm->mAnm->calcTransform(texMtxAnm->mAnm->_08, texMtxAnm->mIndex, &material->mTexGenBlock->getTexMtx(i)->mSrtInfo);
		// }
		if (mTexMtxAnmList[i]._02 != 0) {
			J3DTextureSRTInfo* info  = &material->mTexGenBlock->getTexMtx(i)->mSrtInfo;
			J3DAnmTextureSRTKey* anm = mTexMtxAnmList[i].mAnm;
			anm->calcTransform(anm->mFTime, mTexMtxAnmList[i].mIndex, info);
		}

		// if (mTexMtxAnmList[i]._02 != 0) {
		// 	mTexMtxAnmList[i].mAnm->calcTransform(mTexMtxAnmList[i].mAnm->_08, mTexMtxAnmList[i].mIndex,
		// &material->mTexGenBlock->getTexMtx(i)->mSrtInfo);
		// }
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

/*
 * --INFO--
 * Address:	8006A350
 * Size:	000008
 */
// J3DGXColor* J3DTevBlock::getTevKColor(unsigned long index) { return 0x0; }

/*
 * --INFO--
 * Address:	8006A358
 * Size:	000008
 */
// J3DGXColorS10* J3DTevBlock::getTevColor(unsigned long index) { return 0x0; }

/*
 * --INFO--
 * Address:	8006A360
 * Size:	000004
 */
// void J3DTevBlock::setTexNo(unsigned long index, unsigned short texNo) { }

/*
 * --INFO--
 * Address:	8006A364
 * Size:	000030
 * calc__11J3DTexNoAnmCFPUs
 */
void J3DTexNoAnm::calc(u16* p1) const
{
	mAnm->getTexNo(_04, p1);
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r6, r3
	mr       r5, r4
	stw      r0, 0x14(r1)
	lwz      r3, 8(r3)
	lhz      r4, 4(r6)
	bl       getTexNo__16J3DAnmTexPatternCFUsPUs
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8006A394
 * Size:	0000D0
 * __dt__14J3DMaterialAnmFv
 */
// J3DMaterialAnm::~J3DMaterialAnm() { }

/*
 * --INFO--
 * Address:	8006A464
 * Size:	00003C
 * __dt__14J3DMatColorAnmFv
 */
J3DMatColorAnm::~J3DMatColorAnm() { }

/*
 * --INFO--
 * Address:	8006A4A0
 * Size:	00003C
 * __dt__12J3DTexMtxAnmFv
 */
J3DTexMtxAnm::~J3DTexMtxAnm() { }

/*
 * --INFO--
 * Address:	8006A4DC
 * Size:	000048
 * __dt__11J3DTexNoAnmFv
 */
J3DTexNoAnm::~J3DTexNoAnm() { }

/*
 * --INFO--
 * Address:	8006A524
 * Size:	00003C
 * __dt__14J3DTevColorAnmFv
 */
J3DTevColorAnm::~J3DTevColorAnm() { }

/*
 * --INFO--
 * Address:	8006A560
 * Size:	00003C
 * __dt__15J3DTevKColorAnmFv
 */
J3DTevKColorAnm::~J3DTevKColorAnm() { }
