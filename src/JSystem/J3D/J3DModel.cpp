#include "JSystem/J3D/J3DDisplayListObj.h"
#include "JSystem/J3D/J3DModel.h"
#include "JSystem/J3D/J3DMtxBuffer.h"
#include "JSystem/J3D/J3DPacket.h"
#include "JSystem/J3D/J3DSys.h"
#include "JSystem/J3D/J3DTexGenBlock.h"
#include "JSystem/J3D/J3DTexMtx.h"
#include "JSystem/J3D/J3DTypes.h"
#include "JSystem/J3D/J3DSkinDeform.h"
#include "JSystem/J3D/J3DVtxColorCalc.h"
#include "JSystem/J3D/J3DTransform.h"

/**
 * @note Address: 0x800662FC
 * @note Size: 0x84
 */
void J3DModel::initialize()
{
	mModelData    = nullptr;
	mFlags        = 0;
	mDiffFlag     = 0;
	mCalcCallBack = nullptr;
	mUserArea     = 0;
	mModelScale.x = 1.0f;
	mModelScale.y = 1.0f;
	mModelScale.z = 1.0f;
	PSMTXIdentity(mPosMtx);
	PSMTXIdentity(mInternalView);
	mMtxBuffer    = nullptr;
	mMatPackets   = nullptr;
	mShapePackets = nullptr;
	mDeformData   = nullptr;
	mSkinDeform   = nullptr;
	mVtxColorCalc = nullptr;
	mUnkCalc1     = 0;
	mUnkCalc2     = nullptr;
}

/**
 * @note Address: 0x80066380
 * @note Size: 0xC4
 */
int J3DModel::entryModelData(J3DModelData* data, u32 matFlags, u32 viewNum)
{
	mModelData = data;
	mMtxBuffer = new J3DMtxBuffer;
	int result = mMtxBuffer->create(data, viewNum);
	if (result) {
		return result;
	}
	result = createShapePacket(data);
	if (result) {
		return result;
	}
	result = createMatPacket(data, matFlags);
	if (result) {
		return result;
	}
	mVertexBuffer.setVertexData(&data->mVertexData);
	prepareShapePackets();
	return 0;
}

/**
 * @note Address: 0x80066444
 * @note Size: 0xBC
 */
int J3DModel::createShapePacket(J3DModelData* data)
{
	if (data->mShapeTable.mCount) {
		mShapePackets = new J3DShapePacket[data->mShapeTable.mCount];
		for (s32 i = 0; i < data->mShapeTable.mCount; i++) {
			mShapePackets[i].mShape = data->mShapeTable.getItem(i);
			mShapePackets[i].mModel = this;
		}
	}
	return 0;
}

/**
 * @note Address: 0x80066500
 * @note Size: 0x1D8
 */
int J3DModel::createMatPacket(J3DModelData* data, u32 flags)
{
	if (data->mMaterialTable.mMaterialNum != 0) {
		mMatPackets = new J3DMatPacket[data->mMaterialTable.mMaterialNum];
	}
	u32 count = data->getMaterialNum();
	for (u16 i = 0; i < count; i++) {
		J3DMaterial* material       = data->getMaterialNodePointer(i);
		J3DMatPacket* matPacket     = &mMatPackets[i];
		J3DShapePacket* shapePacket = getShapePacket(material->getShape()->getIndex());
		matPacket->mMaterial        = material;
		matPacket->mInitShapePacket = shapePacket;
		matPacket->addShapePacket(shapePacket);
		matPacket->mTexture  = data->getTexture();
		matPacket->mDiffFlag = material->mDiffFlag;
		if (data->getJointTree().getModelDataType() == J3DMLF_MtxSoftImageCalc) {
			matPacket->mFlags |= 1;
		}
		if ((flags & J3DMODEL_ShareDL) != 0) {
			matPacket->mDisplayList = material->getSharedDisplayListObj();
		} else if (data->getJointTree().getModelDataType() == J3DMLF_MtxSoftImageCalc) {
			if ((flags & J3DMODEL_UseSingleSharedDL) != 0) {
				matPacket->mDisplayList = material->getSharedDisplayListObj();
			} else {
				J3DDisplayListObj* dl = material->getSharedDisplayListObj();
				J3DErrType result     = dl->single_To_Double();
				if (result != JET_Success) {
					return result;
				}
				matPacket->mDisplayList = dl;
			}
		} else if ((flags & J3DMODEL_CreateNewDL) != 0) {
			if ((flags & J3DMODEL_UseSingleSharedDL) != 0) {
				material->newSingleSharedDisplayList(material->countDLSize());
				matPacket->mDisplayList = material->getSharedDisplayListObj();
			} else {
				material->newSharedDisplayList(material->countDLSize());
				J3DDisplayListObj* dl = material->getSharedDisplayListObj();
				dl->single_To_Double();
				matPacket->mDisplayList = dl;
			}
		} else {
			if ((flags & J3DMODEL_UseSingleSharedDL) != 0) {
				matPacket->newSingleDisplayList(material->countDLSize());
			} else {
				matPacket->newDisplayList(material->countDLSize());
			}
		}
	}
	return JET_Success;
}

/**
 * @note Address: 0x800666D8
 * @note Size: 0x90
 */
int J3DModel::newDifferedDisplayList(u32 displayListFlag)
{
	mDiffFlag = displayListFlag;
	// It sure is wild what pre-fetching the limit will do.
	// for (u16 i = 0; i < mModelData->mShapeTable.mCount; i++) {
	u16 count = mModelData->mShapeTable.mCount;
	for (u16 i = 0; i < count; i++) {
		int result = mShapePackets[i].newDifferedDisplayList(displayListFlag);
		if (result) {
			return result;
		}
	}
	return 0;
}

/**
 * @note Address: 0x80066768
 * @note Size: 0x8C
 */
int J3DModel::newDifferedTexMtx(J3DTexDiffFlag texDiffFlag)
{
	u16 count = mModelData->mShapeTable.mCount;
	for (u16 i = 0; i < count; i++) {
		int result = mShapePackets[i].newDifferedTexMtx(texDiffFlag);
		if (result) {
			return result;
		}
	}
	return 0;
}

/**
 * @note Address: 0x800667F4
 * @note Size: 0x130
 */
void J3DModel::lock()
{
	int count = mModelData->mMaterialTable.mMaterialNum;
	for (int i = 0; i < count; i++) {
		mMatPackets[i].mFlags |= 1;
	}
}

/**
 * @note Address: 0x80066924
 * @note Size: 0xA4
 */
void J3DModel::makeDL()
{
	j3dSys.mModel   = this;
	j3dSys.mTexture = getModelData()->getTexture();
	u32 count       = getModelData()->mMaterialTable.mMaterialNum;
	for (u16 i = 0; i < count; i++) {
		j3dSys.mMatPacket = getMatPacket(i);
		mModelData->getMaterialNodePointer(i)->makeDisplayList();
	}
}

/**
 * @note Address: 0x800669C8
 * @note Size: 0x164
 */
void J3DModel::calcMaterial()
{
	j3dSys.setModel(this);

	if (checkFlag(J3DMODEL_SkinPosCpu)) {
		j3dSys.onFlag(4);
	} else {
		j3dSys.offFlag(4);
	}

	if (checkFlag(J3DMODEL_SkinNrmCpu)) {
		j3dSys.onFlag(8);
	} else {
		j3dSys.offFlag(8);
	}

	getModelData()->syncJ3DSysFlags();
	j3dSys.setTexture(getModelData()->getTexture());

	u16 matNum = getModelData()->mMaterialTable.mMaterialNum;
	for (u16 i = 0; i < matNum; i++) {
		j3dSys.mMatPacket = (getMatPacket(i));

		J3DMaterial* material = getModelData()->getMaterialNodePointer(i);
		if (material->getMaterialAnm() != nullptr) {
			material->getMaterialAnm()->calc(material);
		}

		material->calc(getAnmMtx(material->getJoint()->getJntNo()));
	}
}

/**
 * @note Address: 0x80066B2C
 * @note Size: 0x140
 */
void J3DModel::calcDiffTexMtx()
{
	u16 i;
	j3dSys.mModel = this;
	u32 count     = getModelData()->getMaterialNum();
	for (i = 0; i < count; i++) {
		j3dSys.mMatPacket     = getMatPacket(i);
		J3DMaterial* material = mModelData->getMaterialNodePointer(i);
		material->calcDiffTexMtx(mMtxBuffer->getWorldMatrix(material->getJoint()->getJntNo())->mMatrix.mtxView);
	}
	count = mModelData->getShapeNum();
	for (i = 0; i < count; i++) {
		J3DShapePacket* packet = getShapePacket(i);
		J3DTexGenBlock* block  = getModelData()->getShapeNodePointer(i)->getMaterial()->getTexGenBlock();
		for (u16 j = 0; (int)j < 8; j++) {
			J3DTexMtx* texMtx1 = block->getTexMtx(j);
			J3DTexMtxObj* v1   = packet->mTexMtxObj;
			if (texMtx1 && v1) {
				PSMTXCopy(texMtx1->mMtx, v1->mTexMtx[j]);
			}
		}
	}
}

/**
 * @note Address: 0x80066C6C
 * @note Size: 0x9C
 * diff__8J3DModelFv
 */
void J3DModel::diff()
{
	u16 count = getModelData()->getMaterialTable().mMaterialNum;
	for (u16 i = 0; i < count; i++) {
		j3dSys.mMatPacket = getMatPacket(i);
		mModelData->getMaterialNodePointer(i)->diff(mDiffFlag);
	}
}

/**
 * @note Address: 0x80066D08
 * @note Size: 0x34
 */
void J3DModel::setVtxColorCalc(J3DVtxColorCalc* vtxColorCalc, J3DDeformAttachFlag deformAttachFlag)
{
	mVtxColorCalc = vtxColorCalc;
	if (vtxColorCalc) {
		mVertexBuffer.copyVtxColorArray(deformAttachFlag);
	}
}

/**
 * @note Address: 0x80066D3C
 * @note Size: 0x4C
 */
void J3DModel::calcWeightEnvelopeMtx()
{
	if (mModelData->mJointTree.mEnvelopeCnt && !(mFlags & J3DMODEL_LevelOfDetail)
	    && !(mModelData->mModelLoaderFlags & J3DMLF_NoMatrixTransform)) {
		mMtxBuffer->calcWeightEnvelopeMtx();
	}
}

/**
 * @note Address: 0x80066D88
 * @note Size: 0x4C
 * update__8J3DModelFv
 */
void J3DModel::update()
{
	calc();
	entry();
}

/**
 * @note Address: 0x80066DD4
 * @note Size: 0x1E0
 */
void J3DModel::calc()
{
	j3dSys.setModel(this);

	if (checkFlag(J3DMODEL_SkinPosCpu)) {
		j3dSys.onFlag(J3DSysFlag_SkinPosCpu);
	} else {
		j3dSys.offFlag(J3DSysFlag_SkinPosCpu);
	}

	if (checkFlag(J3DMODEL_SkinNrmCpu)) {
		j3dSys.onFlag(J3DSysFlag_SkinNrmCpu);
	} else {
		j3dSys.offFlag(J3DSysFlag_SkinNrmCpu);
	}

	getModelData()->syncJ3DSysFlags();
	mVertexBuffer.frameInit();

	if (mUnkCalc2 != nullptr) {
		mUnkCalc2->calc(getModelData());
	}

	if (mDeformData != nullptr) {
		mDeformData->deform(this);
	}

	if (mVtxColorCalc != nullptr) {
		mVtxColorCalc->calc(this);
	}

	if (mUnkCalc1 != nullptr) {
		mUnkCalc1->calc(this);
	}

	j3dSys.setModel(this);

	if (checkFlag(J3DMODEL_UseDefaultJ3D)) {
		getModelData()->getJointTree().calc(mMtxBuffer, j3dDefaultScale, j3dDefaultMtx);
	} else {
		getModelData()->getJointTree().calc(mMtxBuffer, mModelScale, mPosMtx);
	}

	calcWeightEnvelopeMtx();

	if (mSkinDeform != nullptr) {
		mSkinDeform->deform(this);
	}

	if (mCalcCallBack != nullptr) {
		mCalcCallBack(this, 0);
	}
}

/**
 * @note Address: 0x80066FB4
 * @note Size: 0xF4
 * entry__8J3DModelFv
 */
void J3DModel::entry()
{
	j3dSys.mModel = this;
	if (mFlags & J3DMODEL_SkinPosCpu) {
		j3dSys.mFlags |= 0x4;
	} else {
		j3dSys.mFlags &= ~0x4;
	}
	if (mFlags & J3DMODEL_SkinNrmCpu) {
		j3dSys.mFlags |= 0x8;
	} else {
		j3dSys.mFlags &= ~0x8;
	}
	mModelData->syncJ3DSysFlags();
	j3dSys.mTexture = mModelData->getMaterialTable().getTexture();
	for (u16 i = 0; i < mModelData->getJointNum(); i++) {
		J3DJoint* joint = mModelData->getJointNodePointer(i);
		if (joint->mMaterial) {
			joint->entryIn();
		}
	}
}

/**
 * @note Address: 0x800670A8
 * @note Size: 0x368
 */
void J3DModel::viewCalc()
{
	mMtxBuffer->swapDrawMtx();
	mMtxBuffer->swapNrmMtx();

	if (mModelData->checkFlag(J3DMLF_UseImmediateMtx)) {
		if (getMtxCalcMode() == 2) {
			J3DCalcViewBaseMtx(*j3dSys.getViewMtx(), mModelScale, mPosMtx, (MtxP)&mInternalView);
		}
	} else if (isCpuSkinningOn()) {
		if (getMtxCalcMode() == 2) {
			J3DCalcViewBaseMtx(*j3dSys.getViewMtx(), mModelScale, mPosMtx, (MtxP)&mInternalView);
		}
	} else if (checkFlag(J3DMODEL_SkinPosCpu)) {
		mMtxBuffer->calcDrawMtx(getMtxCalcMode(), mModelScale, mPosMtx);
		calcNrmMtx();
		calcBumpMtx();
		DCStoreRangeNoSync(getDrawMtxPtr(), mModelData->getDrawMtxNum() * sizeof(Mtx));
		DCStoreRange(getNrmMtxPtr(), mModelData->getDrawMtxNum() * sizeof(Mtx33));
	} else if (checkFlag(J3DMODEL_SkinNrmCpu)) {
		mMtxBuffer->calcDrawMtx(getMtxCalcMode(), mModelScale, mPosMtx);
		calcBBoardMtx();
		DCStoreRange(getDrawMtxPtr(), mModelData->getDrawMtxNum() * sizeof(Mtx));
	} else {
		mMtxBuffer->calcDrawMtx(getMtxCalcMode(), mModelScale, mPosMtx);
		calcNrmMtx();
		calcBBoardMtx();
		calcBumpMtx();
		DCStoreRangeNoSync(getDrawMtxPtr(), mModelData->getDrawMtxNum() * sizeof(Mtx));
		DCStoreRange(getNrmMtxPtr(), mModelData->getDrawMtxNum() * sizeof(Mtx33));
	}

	prepareShapePackets();
}

/**
 * @note Address: 0x80067410
 * @note Size: 0x24
 */
void J3DModel::calcNrmMtx()
{
	mMtxBuffer->calcNrmMtx();
}

/**
 * @note Address: 0x80067434
 * @note Size: 0x100
 */
void J3DModel::calcBumpMtx()
{
	int bumpMtxIdx;
	u32 materialNum;
	if (!getModelData()->checkBumpFlag()) {
		return;
	}

	bumpMtxIdx  = 0;
	materialNum = getModelData()->getMaterialNum();

	for (u16 i = 0; i < materialNum; i++) {
		J3DMaterial* material = getModelData()->getMaterialNodePointer(i);
		if (material->getNBTScale()->mHasScale == TRUE) {
			material->getShape()->calcNBTScale(*material->getNBTScale()->getScale(), getNrmMtxPtr(), getBumpMtxPtr(bumpMtxIdx));
			DCStoreRange(getBumpMtxPtr(bumpMtxIdx), getModelData()->getDrawMtxNum() * 0x24);
			bumpMtxIdx++;
		}
	}
}

/**
 * @note Address: 0x80067534
 * @note Size: 0x34
 */
void J3DModel::calcBBoardMtx()
{
	if (mModelData->mBillboardFlag == 1) {
		mMtxBuffer->calcBBoardMtx();
	}
}

/**
 * @note Address: 0x80067568
 * @note Size: 0x64
 */
void J3DModel::prepareShapePackets()
{
	u32 shapeNum = getModelData()->getShapeNum();

	for (u16 i = 0; i < shapeNum; i++) {
		J3DShape* xx        = mModelData->getShapeNodePointer(i);
		J3DShapePacket* pkt = getShapePacket(i);
		pkt->setMtxBuffer(mMtxBuffer);
		if ((mFlags & (J3DMODEL_UseDefaultJ3D | J3DMODEL_Unk1)) == 2) {
			pkt->setBaseMtxPtr(&mInternalView);
		} else {
			pkt->setBaseMtxPtr(&j3dSys.mViewMtx);
		}
	}
}
