#include "JSystem/J3D/J3DMaterial.h"
#include "Dolphin/gd.h"
#include "Dolphin/gx.h"
#include "JSystem/J3D/J3DColorBlock.h"
#include "JSystem/J3D/J3DDisplayListObj.h"
#include "JSystem/J3D/J3DGD.h"
#include "JSystem/J3D/J3DInd.h"
#include "JSystem/J3D/J3DPacket.h"
#include "JSystem/J3D/J3DPE.h"
#include "JSystem/J3D/J3DShape.h"
#include "JSystem/J3D/J3DSys.h"
#include "JSystem/J3D/J3DTevBlock.h"
#include "JSystem/J3D/J3DTexGenBlock.h"
#include "JSystem/J3D/J3DTexMtx.h"
#include "JSystem/J3D/J3DTypes.h"

/**
 * @note Address: 0x800614E0
 * @note Size: 0x200
 */
J3DColorBlock* J3DMaterial::createColorBlock(u32 createFlag)
{
	J3DColorBlock* result = nullptr;
	switch (createFlag) {
	case 0:
		result = new J3DColorBlockLightOff;
		break;
	case 0x40000000:
		result = new J3DColorBlockLightOn;
		break;
	case 0x80000000:
		result = new J3DColorBlockAmbientOn;
		break;
	}
	return result;
}

/**
 * @note Address: 0x8006183C
 * @note Size: 0x164
 */
J3DTexGenBlock* J3DMaterial::createTexGenBlock(u32 createFlag)
{
	J3DTexGenBlock* result = nullptr;
	switch (createFlag) {
	case J3DMLF_Material_TexGen_Block4:
		return new J3DTexGenBlock4();
	case 0:
	default:
		return new J3DTexGenBlockBasic();
	}
}

/**
 * @note Address: 0x80061A6C
 * @note Size: 0x374
 */
J3DTevBlock* J3DMaterial::createTevBlock(int stageCount)
{
	J3DTevBlock* block = nullptr;
	if (stageCount <= 1) {
		block = new J3DTevBlock1();
	} else if (stageCount == 2) {
		block = new J3DTevBlock2();
	} else if (stageCount <= 4) {
		block = new J3DTevBlock4();
	} else if (stageCount <= 16) {
		block = new J3DTevBlock16();
	}
	return block;
}

/**
 * @note Address: 0x8006217C
 * @note Size: 0xE8
 */
J3DIndBlock* J3DMaterial::createIndBlock(int stageCount)
{
	if (stageCount != 0) {
		return new J3DIndBlockFull();
	}
	return new J3DIndBlockNull();
}

/**
 * @note Address: 0x80062394
 * @note Size: 0x27C
 */
J3DPEBlock* J3DMaterial::createPEBlock(u32 createFlag, u32 materialFlag)
{
	J3DPEBlock* rv = nullptr;
	if (createFlag == 0) {
		if (materialFlag & 1) {
			return new J3DPEBlockOpa();
		} else if (materialFlag & 2) {
			return new J3DPEBlockTexEdge();
		} else if (materialFlag & 4) {
			return new J3DPEBlockXlu();
		}
	}

	if (createFlag == J3DMLF_Material_PE_Full) {
		rv = new J3DPEBlockFull();
	} else if (createFlag == J3DMLF_Material_PE_FogOff) {
		rv = new J3DPEBlockFogOff();
	}
	return rv;
}

/**
 * @note Address: 0x80062658
 * @note Size: 0x50
 */
u32 J3DMaterial::calcSizeColorBlock(u32 createFlag)
{
	u32 size = 0;
	switch (createFlag) {
	case 0x0:
		size = sizeof(J3DColorBlockLightOff);
		break;
	case J3DMLF_Material_Color_LightOn:
		size = sizeof(J3DColorBlockLightOn);
		break;
	case J3DMLF_Material_Color_AmbientOn:
		size = sizeof(J3DColorBlockAmbientOn);
		break;
	}
	return size;
}

/**
 * @note Address: 0x800626A8
 * @note Size: 0x2C
 */
u32 J3DMaterial::calcSizeTexGenBlock(u32 createFlag)
{
	switch (createFlag) {
	case J3DMLF_Material_TexGen_Block4:
		return sizeof(J3DTexGenBlock4);
	case 0:
	default:
		return sizeof(J3DTexGenBlockBasic);
	}
}

/**
 * @note Address: 0x800626D4
 * @note Size: 0x48
 */
u32 J3DMaterial::calcSizeTevBlock(int count)
{
	u32 result = 0;
	if (count <= 1) {
		result = sizeof(J3DTevBlock1);
	} else if (count == 2) {
		result = sizeof(J3DTevBlock2);
	} else if (count <= 4) {
		result = sizeof(J3DTevBlock4);
	} else if (count <= 16) {
		result = sizeof(J3DTevBlock16);
	}
	return result;
}

/**
 * @note Address: 0x8006271C
 * @note Size: 0x14
 */
u32 J3DMaterial::calcSizeIndBlock(int count)
{
	if (count != 0) {
		return sizeof(J3DIndBlockFull);
	} else {
		return sizeof(J3DIndBlockNull);
	}
}

/**
 * @note Address: 0x80062730
 * @note Size: 0x68
 */
u32 J3DMaterial::calcSizePEBlock(u32 createFlag, u32 materialFlag)
{
	u32 size = 0;
	if (createFlag == 0) {
		if (materialFlag & 1) {
			size = sizeof(J3DPEBlockOpa);
		} else if (materialFlag & 2) {
			size = sizeof(J3DPEBlockTexEdge);
		} else if (materialFlag & 4) {
			size = sizeof(J3DPEBlockXlu);
		}
	} else if (createFlag == J3DMLF_Material_PE_Full) {
		size = sizeof(J3DPEBlockFull);
	} else if (createFlag == J3DMLF_Material_PE_FogOff) {
		size = sizeof(J3DPEBlockFogOff);
	}
	return size;
}

/**
 * @note Address: 0x80062798
 * @note Size: 0x50
 * initialize__11J3DMaterialFv
 */
void J3DMaterial::initialize()
{
	mShape        = nullptr;
	mNext         = nullptr;
	mJoint        = nullptr;
	mMaterialMode = 1;
	mIndex        = -1;
	mInvalid      = 0;
	mDiffFlag     = 0;
	mColorBlock   = nullptr;
	mTexGenBlock  = nullptr;
	mTevBlock     = nullptr;
	mIndBlock     = nullptr;
	mPEBlock      = nullptr;
	mOrigMaterial = nullptr;
	mMaterialAnm  = nullptr;
	mSharedDLObj  = nullptr;
}

/**
 * @note Address: 0x800627E8
 * @note Size: 0xBC
 * countDLSize__11J3DMaterialFv
 */
u32 J3DMaterial::countDLSize()
{
	return ALIGN_NEXT(mColorBlock->countDLSize() + mTexGenBlock->countDLSize() + mTevBlock->countDLSize() + mIndBlock->countDLSize()
	                      + mPEBlock->countDLSize(),
	                  0x20);
}

/**
 * @note Address: N/A
 * @note Size: 0x2D4
 */
void J3DMaterial::makeDisplayList_private(J3DDisplayListObj* obj)
{
	obj->beginDL();
	mTevBlock->load();
	mIndBlock->load();
	mPEBlock->load();
	J3DGDSetGenMode(mTexGenBlock->getTexGenNum(), mColorBlock->getColorChanNum(), mTevBlock->getTevStageNum(),
	                mIndBlock->getIndTexStageNum(), (GXCullMode)(u8)mColorBlock->getCullMode());
	mTexGenBlock->load();
	mColorBlock->load();
	J3DGDSetNumChans(mColorBlock->getColorChanNum());
	J3DGDSetNumTexGens(mTexGenBlock->getTexGenNum());
	obj->endDL();
}

/**
 * @note Address: 0x800628EC
 * @note Size: 0x2F8
 */
void J3DMaterial::makeDisplayList()
{
	if (!j3dSys.getMatPacket()->isLocked()) {
		j3dSys.getMatPacket()->mDiffFlag = mDiffFlag;
		makeDisplayList_private(j3dSys.getMatPacket()->getDisplayListObj());
	}
}

/**
 * @note Address: 0x80062BE4
 * @note Size: 0x2D4
 */
void J3DMaterial::makeSharedDisplayList()
{
	makeDisplayList_private(mSharedDLObj);
}

/**
 * @note Address: 0x80062EB8
 * @note Size: 0x50
 * load__11J3DMaterialFv
 */
void J3DMaterial::load()
{
	j3dSys.setMaterialMode(mMaterialMode);
	if (!j3dSys.checkFlag(2)) {
		loadNBTScale(*mTexGenBlock->getNBTScale());
	}
}

/**
 * @note Address: 0x80062F10
 * @note Size: 0x64
 * loadSharedDL__11J3DMaterialFv
 */
void J3DMaterial::loadSharedDL()
{
	j3dSys.setMaterialMode(mMaterialMode);
	if (!j3dSys.checkFlag(2)) {
		mSharedDLObj->callDL();
		loadNBTScale(*mTexGenBlock->getNBTScale());
	}
}

/**
 * @note Address: 0x80062F74
 * @note Size: 0x98
 * patch__11J3DMaterialFv
 */
void J3DMaterial::patch()
{
	j3dSys.getMatPacket()->mDiffFlag = mDiffFlag;
	j3dSys.getMatPacket()->beginPatch();
	mTevBlock->patch();
	mColorBlock->patch();
	mTexGenBlock->patch();
	j3dSys.getMatPacket()->endPatch();
}

/**
 * @note Address: 0x80063014
 * @note Size: 0x1FC
 */
void J3DMaterial::diff(u32 p1)
{
	if (j3dSys.getMatPacket()->isEnabled_Diff()) {
		j3dSys.getMatPacket()->beginDiff();
		mTevBlock->diff(p1);
		mIndBlock->diff(p1);
		mPEBlock->diff(p1);
		if (p1 & J3DMDF_DiffKonstColor) {
			J3DGDSetGenMode_3Param(mTexGenBlock->getTexGenNum(), mTevBlock->getTevStageNum(), mIndBlock->getIndTexStageNum());
			J3DGDSetNumTexGens(mTexGenBlock->getTexGenNum());
		}
		mTexGenBlock->diff(p1);
		mColorBlock->diff(p1);
		j3dSys.getMatPacket()->endDiff();
	}
}

/**
 * @note Address: 0x80063218
 * @note Size: 0x78
 * calc__11J3DMaterialFPA4_Cf
 */
void J3DMaterial::calc(const Mtx mtx)
{
	if (j3dSys.checkFlag(0x40000000)) {
		mTexGenBlock->calcPostTexMtx(mtx);
	} else {
		mTexGenBlock->calc(mtx);
	}

	calcCurrentMtx();
	setCurrentMtx();
}

/**
 * @note Address: 0x80063290
 * @note Size: 0x5C
 * calcDiffTexMtx__11J3DMaterialFPA4_Cf
 */
void J3DMaterial::calcDiffTexMtx(const Mtx mtx)
{
	if (j3dSys.checkFlag(0x40000000)) {
		mTexGenBlock->calcPostTexMtxWithoutViewMtx(mtx);
	} else {
		mTexGenBlock->calcWithoutViewMtx(mtx);
	}
}

/**
 * @note Address: 0x800632EC
 * @note Size: 0x18
 * setCurrentMtx__11J3DMaterialFv
 */
void J3DMaterial::setCurrentMtx()
{
	mShape->setCurrentMtx(mCurrentMtx);
}

/**
 * @note Address: 0x80063304
 * @note Size: 0x294
 */
void J3DMaterial::calcCurrentMtx()
{
	if (!j3dSys.checkFlag(0x40000000)) {
		mCurrentMtx.setCurrentTexMtx(mTexGenBlock->getTexCoord(0)->getTexGenMtx(), mTexGenBlock->getTexCoord(1)->getTexGenMtx(),
		                             mTexGenBlock->getTexCoord(2)->getTexGenMtx(), mTexGenBlock->getTexCoord(3)->getTexGenMtx(),
		                             mTexGenBlock->getTexCoord(4)->getTexGenMtx(), mTexGenBlock->getTexCoord(5)->getTexGenMtx(),
		                             mTexGenBlock->getTexCoord(6)->getTexGenMtx(), mTexGenBlock->getTexCoord(7)->getTexGenMtx());
	} else {
		mCurrentMtx.setCurrentTexMtx(mTexGenBlock->getTexCoord(0)->getTexMtxReg(), mTexGenBlock->getTexCoord(1)->getTexMtxReg(),
		                             mTexGenBlock->getTexCoord(2)->getTexMtxReg(), mTexGenBlock->getTexCoord(3)->getTexMtxReg(),
		                             mTexGenBlock->getTexCoord(4)->getTexMtxReg(), mTexGenBlock->getTexCoord(5)->getTexMtxReg(),
		                             mTexGenBlock->getTexCoord(6)->getTexMtxReg(), mTexGenBlock->getTexCoord(7)->getTexMtxReg());
	}
}

/**
 * @note Address: N/A
 * @note Size: 0xAC
 */
void J3DMaterial::copy(J3DMaterial* other)
{
	mColorBlock->reset(other->mColorBlock);
	mTexGenBlock->reset(other->mTexGenBlock);
	mTevBlock->reset(other->mTevBlock);
	mIndBlock->reset(other->mIndBlock);
	mPEBlock->reset(other->mPEBlock);
}

/**
 * @note Address: 0x800635B4
 * @note Size: 0xE4
 * reset__11J3DMaterialFv
 */
void J3DMaterial::reset()
{
	if ((~mDiffFlag & 0x80000000) == 0) {
		mDiffFlag &= ~0x80000000;
		mMaterialMode = mOrigMaterial->mMaterialMode;
		mInvalid      = mOrigMaterial->mInvalid;
		mMaterialAnm  = nullptr;
		copy(mOrigMaterial);
	}
}

/**
 * @note Address: 0x80063698
 * @note Size: 0x20
 */
void J3DMaterial::change()
{
	if ((mDiffFlag & 0xc0000000) == 0) {
		mDiffFlag |= 0x80000000;
		mMaterialAnm = nullptr;
	}
}

/**
 * @note Address: 0x800636B8
 * @note Size: 0x94
 */
J3DErrType J3DMaterial::newSharedDisplayList(u32 p1)
{
	if (mSharedDLObj == nullptr) {
		mSharedDLObj = new J3DDisplayListObj;
		if (mSharedDLObj == nullptr) {
			return JET_OutOfMemory;
		}
		J3DErrType res = mSharedDLObj->newDisplayList(p1);
		switch (res) {
		case JET_Success:
			break;
		default:
			return res;
		}
	}
	return JET_Success;
}

/**
 * @note Address: 0x8006374C
 * @note Size: 0x94
 */
J3DErrType J3DMaterial::newSingleSharedDisplayList(u32 p1)
{
	if (mSharedDLObj == nullptr) {
		mSharedDLObj = new J3DDisplayListObj;
		if (mSharedDLObj == nullptr) {
			return JET_OutOfMemory;
		}
		J3DErrType res = mSharedDLObj->newSingleDisplayList(p1);
		switch (res) {
		case JET_Success:
			break;
		default:
			return res;
		}
	}
	return JET_Success;
}

/**
 * @note Address: 0x800637E0
 * @note Size: 0x50
 * initialize__18J3DPatchedMaterialFv
 */
void J3DPatchedMaterial::initialize()
{
	J3DMaterial::initialize();
}

/**
 * @note Address: 0x80063830
 * @note Size: 0x4
 */
void J3DPatchedMaterial::makeDisplayList()
{
}

/**
 * @note Address: 0x80063834
 * @note Size: 0x4
 */
void J3DPatchedMaterial::makeSharedDisplayList()
{
}

/**
 * @note Address: 0x80063838
 * @note Size: 0x1C
 * load__18J3DPatchedMaterialFv
 */
void J3DPatchedMaterial::load()
{
	j3dSys.setMaterialMode(mMaterialMode);
	if (j3dSys.checkFlag(2)) {
		return;
	}
}

/**
 * @note Address: 0x80063854
 * @note Size: 0x40
 * loadSharedDL__18J3DPatchedMaterialFv
 */
void J3DPatchedMaterial::loadSharedDL()
{
	j3dSys.setMaterialMode(mMaterialMode);
	if (!j3dSys.checkFlag(0x02))
		mSharedDLObj->callDL();
}

/**
 * @note Address: 0x80063894
 * @note Size: 0x4
 */
void J3DPatchedMaterial::reset()
{
}

/**
 * @note Address: 0x80063898
 * @note Size: 0x4
 */
void J3DPatchedMaterial::change()
{
}

/**
 * @note Address: 0x8006389C
 * @note Size: 0x50
 * initialize__17J3DLockedMaterialFv
 */
void J3DLockedMaterial::initialize()
{
	J3DMaterial::initialize();
}

/**
 * @note Address: 0x800638EC
 * @note Size: 0x4
 */
void J3DLockedMaterial::makeDisplayList()
{
}

/**
 * @note Address: 0x800638F0
 * @note Size: 0x4
 */
void J3DLockedMaterial::makeSharedDisplayList()
{
}

/**
 * @note Address: 0x800638F4
 * @note Size: 0x1C
 * load__17J3DLockedMaterialFv
 */
void J3DLockedMaterial::load()
{
	j3dSys.setMaterialMode(mMaterialMode);
	if (j3dSys.checkFlag(2)) {
		return;
	}
}

/**
 * @note Address: 0x80063910
 * @note Size: 0x40
 * loadSharedDL__17J3DLockedMaterialFv
 */
void J3DLockedMaterial::loadSharedDL()
{
	j3dSys.setMaterialMode(mMaterialMode);
	if (!j3dSys.checkFlag(0x02))
		mSharedDLObj->callDL();
}

/**
 * @note Address: 0x80063950
 * @note Size: 0x4
 */
void J3DLockedMaterial::patch()
{
}

/**
 * @note Address: 0x80063954
 * @note Size: 0x4
 */
void J3DLockedMaterial::diff(u32)
{
}

/**
 * @note Address: 0x80063958
 * @note Size: 0x4
 */
void J3DLockedMaterial::calc(const Mtx)
{
}

/**
 * @note Address: 0x8006395C
 * @note Size: 0x4
 */
void J3DLockedMaterial::reset()
{
}

/**
 * @note Address: 0x80063960
 * @note Size: 0x4
 */
void J3DLockedMaterial::change()
{
}
