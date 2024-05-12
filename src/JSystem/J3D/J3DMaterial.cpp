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
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	cmplwi   r3, 0
	li       r5, 0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	bne      lbl_8006244C
	clrlwi.  r0, r4, 0x1f
	beq      lbl_800623E4
	li       r3, 4
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_800625FC
	lis      r5, __vt__10J3DPEBlock@ha
	lis      r4, __vt__13J3DPEBlockOpa@ha
	addi     r0, r5, __vt__10J3DPEBlock@l
	stw      r0, 0(r3)
	addi     r0, r4, __vt__13J3DPEBlockOpa@l
	stw      r0, 0(r3)
	b        lbl_800625FC

lbl_800623E4:
	rlwinm.  r0, r4, 0, 0x1e, 0x1e
	beq      lbl_80062418
	li       r3, 4
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_800625FC
	lis      r5, __vt__10J3DPEBlock@ha
	lis      r4, __vt__17J3DPEBlockTexEdge@ha
	addi     r0, r5, __vt__10J3DPEBlock@l
	stw      r0, 0(r3)
	addi     r0, r4, __vt__17J3DPEBlockTexEdge@l
	stw      r0, 0(r3)
	b        lbl_800625FC

lbl_80062418:
	rlwinm.  r0, r4, 0, 0x1d, 0x1d
	beq      lbl_8006244C
	li       r3, 4
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_800625FC
	lis      r5, __vt__10J3DPEBlock@ha
	lis      r4, __vt__13J3DPEBlockXlu@ha
	addi     r0, r5, __vt__10J3DPEBlock@l
	stw      r0, 0(r3)
	addi     r0, r4, __vt__13J3DPEBlockXlu@l
	stw      r0, 0(r3)
	b        lbl_800625FC

lbl_8006244C:
	addis    r0, r3, 0xf000
	cmplwi   r0, 0
	bne      lbl_8006257C
	li       r3, 0x40
	bl       __nw__FUl
	or.      r31, r3, r3
	beq      lbl_80062574
	lis      r4, __vt__10J3DPEBlock@ha
	lis      r5, __vt__14J3DPEBlockFull@ha
	addi     r0, r4, __vt__10J3DPEBlock@l
	lhz      r6, j3dDefaultAlphaCmpID@sda21(r2)
	stw      r0, 0(r31)
	addi     r0, r5, __vt__14J3DPEBlockFull@l
	lis      r4, j3dDefaultFogInfo@ha
	addi     r5, r2, j3dDefaultBlendInfo@sda21
	stw      r0, 0(r31)
	addi     r8, r4, j3dDefaultFogInfo@l
	li       r4, 0
	lhz      r0, j3dDefaultZModeID@sda21(r2)
	lbz      r7, 0(r8)
	stb      r7, 4(r31)
	lbz      r7, 1(r8)
	stb      r7, 5(r31)
	lhz      r7, 2(r8)
	sth      r7, 6(r31)
	lfs      f0, 4(r8)
	stfs     f0, 8(r31)
	lfs      f0, 8(r8)
	stfs     f0, 0xc(r31)
	lfs      f0, 0xc(r8)
	stfs     f0, 0x10(r31)
	lfs      f0, 0x10(r8)
	stfs     f0, 0x14(r31)
	lbz      r7, 0x14(r8)
	stb      r7, 0x18(r31)
	lbz      r7, 0x15(r8)
	stb      r7, 0x19(r31)
	lbz      r7, 0x16(r8)
	stb      r7, 0x1a(r31)
	lbz      r7, 0x17(r8)
	stb      r7, 0x1b(r31)
	lhz      r7, 0x18(r8)
	sth      r7, 0x1c(r31)
	lhz      r7, 0x1a(r8)
	sth      r7, 0x1e(r31)
	lhz      r7, 0x1c(r8)
	sth      r7, 0x20(r31)
	lhz      r7, 0x1e(r8)
	sth      r7, 0x22(r31)
	lhz      r7, 0x20(r8)
	sth      r7, 0x24(r31)
	lhz      r7, 0x22(r8)
	sth      r7, 0x26(r31)
	lhz      r7, 0x24(r8)
	sth      r7, 0x28(r31)
	lhz      r7, 0x26(r8)
	sth      r7, 0x2a(r31)
	lhz      r7, 0x28(r8)
	sth      r7, 0x2c(r31)
	lhz      r7, 0x2a(r8)
	sth      r7, 0x2e(r31)
	sth      r6, 0x30(r31)
	stb      r4, 0x32(r31)
	stb      r4, 0x33(r31)
	lbz      r4, j3dDefaultBlendInfo@sda21(r2)
	stb      r4, 0x34(r31)
	lbz      r4, 1(r5)
	stb      r4, 0x35(r31)
	lbz      r4, 2(r5)
	stb      r4, 0x36(r31)
	lbz      r4, 3(r5)
	stb      r4, 0x37(r31)
	sth      r0, 0x38(r31)
	bl       initialize__14J3DPEBlockFullFv

lbl_80062574:
	mr       r5, r31
	b        lbl_800625F8

lbl_8006257C:
	addis    r0, r3, 0xe000
	cmplwi   r0, 0
	bne      lbl_800625F8
	li       r3, 0x10
	bl       __nw__FUl
	or.      r31, r3, r3
	beq      lbl_800625F4
	lis      r5, __vt__10J3DPEBlock@ha
	lis      r4, __vt__16J3DPEBlockFogOff@ha
	addi     r0, r5, __vt__10J3DPEBlock@l
	lhz      r6, j3dDefaultAlphaCmpID@sda21(r2)
	stw      r0, 0(r31)
	addi     r0, r4, __vt__16J3DPEBlockFogOff@l
	li       r4, 0
	addi     r5, r2, j3dDefaultBlendInfo@sda21
	stw      r0, 0(r31)
	lhz      r0, j3dDefaultZModeID@sda21(r2)
	sth      r6, 4(r31)
	stb      r4, 6(r31)
	stb      r4, 7(r31)
	lbz      r4, j3dDefaultBlendInfo@sda21(r2)
	stb      r4, 8(r31)
	lbz      r4, 1(r5)
	stb      r4, 9(r31)
	lbz      r4, 2(r5)
	stb      r4, 0xa(r31)
	lbz      r4, 3(r5)
	stb      r4, 0xb(r31)
	sth      r0, 0xc(r31)
	bl       initialize__16J3DPEBlockFogOffFv

lbl_800625F4:
	mr       r5, r31

lbl_800625F8:
	mr       r3, r5

lbl_800625FC:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
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
void J3DMaterial::makeSharedDisplayList() { makeDisplayList_private(mSharedDLObj); }

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
void J3DMaterial::setCurrentMtx() { mShape->setCurrentMtx(mCurrentMtx); }

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
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	lis      r4, j3dSys@ha
	stw      r0, 0x34(r1)
	stmw     r24, 0x10(r1)
	mr       r30, r3
	addi     r3, r4, j3dSys@l
	lwz      r0, 0x34(r3)
	rlwinm.  r0, r0, 0, 1, 1
	bne      lbl_8006344C
	lwz      r3, 0x28(r30)
	li       r4, 7
	lwz      r12, 0(r3)
	lwz      r12, 0x48(r12)
	mtctr    r12
	bctrl
	lbz      r31, 2(r3)
	li       r4, 6
	lwz      r3, 0x28(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x48(r12)
	mtctr    r12
	bctrl
	lbz      r29, 2(r3)
	li       r4, 5
	lwz      r3, 0x28(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x48(r12)
	mtctr    r12
	bctrl
	lbz      r28, 2(r3)
	li       r4, 4
	lwz      r3, 0x28(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x48(r12)
	mtctr    r12
	bctrl
	lbz      r27, 2(r3)
	li       r4, 3
	lwz      r3, 0x28(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x48(r12)
	mtctr    r12
	bctrl
	lbz      r26, 2(r3)
	li       r4, 2
	lwz      r3, 0x28(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x48(r12)
	mtctr    r12
	bctrl
	lbz      r25, 2(r3)
	li       r4, 1
	lwz      r3, 0x28(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x48(r12)
	mtctr    r12
	bctrl
	lbz      r24, 2(r3)
	li       r4, 0
	lwz      r3, 0x28(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x48(r12)
	mtctr    r12
	bctrl
	lbz      r4, 2(r3)
	rlwinm   r0, r28, 6, 0x12, 0x19
	rlwinm   r3, r24, 0xc, 0xc, 0x13
	rlwinm   r5, r25, 0x12, 6, 0xd
	slwi     r4, r4, 6
	slwi     r6, r26, 0x18
	or       r4, r4, r3
	rlwinm   r3, r29, 0xc, 0xc, 0x13
	or       r4, r5, r4
	or       r0, r27, r0
	or       r5, r6, r4
	rlwinm   r4, r31, 0x12, 6, 0xd
	or       r0, r3, r0
	stw      r5, 0x40(r30)
	or       r0, r4, r0
	stw      r0, 0x44(r30)
	b        lbl_80063584

lbl_8006344C:
	lwz      r3, 0x28(r30)
	li       r4, 7
	lwz      r12, 0(r3)
	lwz      r12, 0x48(r12)
	mtctr    r12
	bctrl
	lhz      r0, 4(r3)
	li       r4, 6
	lwz      r3, 0x28(r30)
	clrlwi   r31, r0, 0x18
	lwz      r12, 0(r3)
	lwz      r12, 0x48(r12)
	mtctr    r12
	bctrl
	lhz      r0, 4(r3)
	li       r4, 5
	lwz      r3, 0x28(r30)
	clrlwi   r24, r0, 0x18
	lwz      r12, 0(r3)
	lwz      r12, 0x48(r12)
	mtctr    r12
	bctrl
	lhz      r0, 4(r3)
	li       r4, 4
	lwz      r3, 0x28(r30)
	clrlwi   r25, r0, 0x18
	lwz      r12, 0(r3)
	lwz      r12, 0x48(r12)
	mtctr    r12
	bctrl
	lhz      r0, 4(r3)
	li       r4, 3
	lwz      r3, 0x28(r30)
	clrlwi   r26, r0, 0x18
	lwz      r12, 0(r3)
	lwz      r12, 0x48(r12)
	mtctr    r12
	bctrl
	lhz      r0, 4(r3)
	li       r4, 2
	lwz      r3, 0x28(r30)
	clrlwi   r27, r0, 0x18
	lwz      r12, 0(r3)
	lwz      r12, 0x48(r12)
	mtctr    r12
	bctrl
	lhz      r0, 4(r3)
	li       r4, 1
	lwz      r3, 0x28(r30)
	clrlwi   r28, r0, 0x18
	lwz      r12, 0(r3)
	lwz      r12, 0x48(r12)
	mtctr    r12
	bctrl
	lhz      r0, 4(r3)
	li       r4, 0
	lwz      r3, 0x28(r30)
	clrlwi   r29, r0, 0x18
	lwz      r12, 0(r3)
	lwz      r12, 0x48(r12)
	mtctr    r12
	bctrl
	lhz      r4, 4(r3)
	rlwinm   r0, r25, 6, 0x12, 0x19
	rlwinm   r3, r29, 0xc, 0xc, 0x13
	rlwinm   r5, r28, 0x12, 6, 0xd
	rlwinm   r4, r4, 6, 0x12, 0x19
	slwi     r6, r27, 0x18
	or       r4, r4, r3
	rlwinm   r3, r24, 0xc, 0xc, 0x13
	or       r4, r5, r4
	or       r0, r26, r0
	or       r5, r6, r4
	rlwinm   r4, r31, 0x12, 6, 0xd
	or       r0, r3, r0
	stw      r5, 0x40(r30)
	or       r0, r4, r0
	stw      r0, 0x44(r30)

lbl_80063584:
	lmw      r24, 0x10(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
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
void J3DPatchedMaterial::initialize() { J3DMaterial::initialize(); }

/**
 * @note Address: 0x80063830
 * @note Size: 0x4
 */
void J3DPatchedMaterial::makeDisplayList() { }

/**
 * @note Address: 0x80063834
 * @note Size: 0x4
 */
void J3DPatchedMaterial::makeSharedDisplayList() { }

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
void J3DPatchedMaterial::reset() { }

/**
 * @note Address: 0x80063898
 * @note Size: 0x4
 */
void J3DPatchedMaterial::change() { }

/**
 * @note Address: 0x8006389C
 * @note Size: 0x50
 * initialize__17J3DLockedMaterialFv
 */
void J3DLockedMaterial::initialize() { J3DMaterial::initialize(); }

/**
 * @note Address: 0x800638EC
 * @note Size: 0x4
 */
void J3DLockedMaterial::makeDisplayList() { }

/**
 * @note Address: 0x800638F0
 * @note Size: 0x4
 */
void J3DLockedMaterial::makeSharedDisplayList() { }

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
void J3DLockedMaterial::patch() { }

/**
 * @note Address: 0x80063954
 * @note Size: 0x4
 */
void J3DLockedMaterial::diff(u32) { }

/**
 * @note Address: 0x80063958
 * @note Size: 0x4
 */
void J3DLockedMaterial::calc(const Mtx) { }

/**
 * @note Address: 0x8006395C
 * @note Size: 0x4
 */
void J3DLockedMaterial::reset() { }

/**
 * @note Address: 0x80063960
 * @note Size: 0x4
 */
void J3DLockedMaterial::change() { }
