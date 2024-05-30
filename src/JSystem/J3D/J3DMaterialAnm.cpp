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

/**
 * @note Address: 0x8006A0F4
 * @note Size: 0x70
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

/**
 * @note Address: 0x8006A164
 * @note Size: 0x1EC
 * calc__14J3DMaterialAnmCFP11J3DMaterial
 */
void J3DMaterialAnm::calc(J3DMaterial* material) const
{
	GXColor* color;
	for (u32 i = 0; i < ARRAY_SIZE(mMatColAnmList); i++) {
		if (mMatColAnmList[i].getAnmFlag()) {
			color = material->mColorBlock->getMatColor(i);
			mMatColAnmList[i].calc(color);
		}
	}

	for (u32 i = 0; i < ARRAY_SIZE(mTexNoAnmList); i++) {
		if (mTexNoAnmList[i].getAnmFlag()) {
			u16 tmp;
			mTexNoAnmList[i].calc(&tmp);
			material->mTevBlock->setTexNo(i, tmp);
		}
	}
	for (u32 i = 0; i < 3; i++) { // why is this 3??
		if (mTevColAnmList[i].getAnmFlag()) {
			J3DGXColorS10* color = material->getTevBlock()->getTevColor(i);
			mTevColAnmList[i].calc(color);
		}
	}
	for (u32 i = 0; i < ARRAY_SIZE(mTevKColAnmList); i++) {
		if (mTevKColAnmList[i].getAnmFlag()) {
			GXColor* color = material->mTevBlock->getTevKColor(i);
			mTevKColAnmList[i].calc(color);
		}
	}
	for (u32 i = 0; i < ARRAY_SIZE(mTexMtxAnmList); i++) {
		if (mTexMtxAnmList[i].getAnmFlag()) {
			mTexMtxAnmList[i].calc(&material->mTexGenBlock->getTexMtx(i)->mTexMtxInfo.mSRT);
		}
	}
}
