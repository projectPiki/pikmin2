#include "Dolphin/mtx.h"
#include "JSystem/J3D/J3DMaterial.h"
#include "JSystem/JKernel/JKRHeap.h"
#include "JSystem/J3D/J3DMtxBuffer.h"
#include "JSystem/J3D/J3DModel.h"
#include "JSystem/J3D/J3DModelLoader.h"
#include "JSystem/J3D/J3DTexGenBlock.h"
#include "JSystem/J3D/J3DSys.h"
#include "JSystem/J3D/J3DTransform.h"
#include "types.h"

Mtx J3DMtxBuffer::sNoUseDrawMtx;
Mtx33 J3DMtxBuffer::sNoUseNrmMtx;

Mtx* J3DMtxBuffer::sNoUseDrawMtxPtr  = &J3DMtxBuffer::sNoUseDrawMtx;
Mtx33* J3DMtxBuffer::sNoUseNrmMtxPtr = &J3DMtxBuffer::sNoUseNrmMtx;

static f32 J3DUnit01[] = { 0.0f, 1.0f };

/**
 * @note Address: 0x800888D8
 * @note Size: 0x40
 */
void J3DMtxBuffer::initialize()
{
	mJointTree              = nullptr;
	mScaleFlags             = nullptr;
	mEnvelopeScaleFlags     = 0;
	mWorldMatrices          = nullptr;
	mWeightEnvelopeMatrices = nullptr;
	mDrawMatrices[0]        = nullptr;
	mDrawMatrices[1]        = nullptr;
	mNormMatrices[0]        = nullptr;
	mNormMatrices[1]        = nullptr;
	mBumpMatrices[0]        = 0;
	mBumpMatrices[1]        = nullptr;
	mViewCount              = 1;
	mCurrentViewNumber      = 0;
}

/**
 * @note Address: 0x80088918
 * @note Size: 0x11C
 */
int J3DMtxBuffer::create(J3DModelData* data, u32 viewNum)
{
	mViewCount = viewNum;
	mJointTree = &data->getJointTree();
	int result = createAnmMtx(data);
	if (result != JET_Success) {
		return result;
	}
	result = createWeightEnvelopeMtx(data);
	if (result != JET_Success) {
		return result;
	}
	if (data->checkFlag(J3DMLF_NoMatrixTransform)) {
		setNoUseDrawMtx();

	} else {
		switch (getMdlDataFlag_MtxLoadType(data->getFlag())) {
		case 0x10:
			result = setNoUseDrawMtx();
			break;
		case 0x0:
		default:
			result = createDoubleDrawMtx(data, viewNum);
			break;
		}
	}
	if (result != JET_Success) {
		return result;
	}
	if (data->getFlag() & J3DMLF_UseImmediateMtx) {
		data->setBumpFlag(0);
	} else {
		result = createBumpMtxArray(data, viewNum);
		if (result != JET_Success) {
			return result;
		}
	}
	return result;
}

/**
 * @note Address: 0x80088A34
 * @note Size: 0x5C
 */
int J3DMtxBuffer::createAnmMtx(J3DModelData* data)
{
	if (data->mJointTree.getJointNum()) {
		mScaleFlags    = new u8[data->mJointTree.getJointNum()];
		mWorldMatrices = new Mtx[data->mJointTree.getJointNum()];
	}
	return JET_Success;
}

/**
 * @note Address: 0x80088A90
 * @note Size: 0x5C
 */
int J3DMtxBuffer::createWeightEnvelopeMtx(J3DModelData* data)
{
	if (data->mJointTree.getWEvlpMtxNum()) {
		mEnvelopeScaleFlags     = new u8[data->mJointTree.getWEvlpMtxNum()];
		mWeightEnvelopeMatrices = new Mtx[data->mJointTree.getWEvlpMtxNum()];
	}
	return JET_Success;
}

/**
 * @note Address: 0x80088AEC
 * @note Size: 0x2C
 */
int J3DMtxBuffer::setNoUseDrawMtx()
{
	mDrawMatrices[1] = &sNoUseDrawMtxPtr;
	mDrawMatrices[0] = &sNoUseDrawMtxPtr;
	mNormMatrices[1] = &sNoUseNrmMtxPtr;
	mNormMatrices[0] = &sNoUseNrmMtxPtr;
	mBumpMatrices[1] = nullptr;
	mBumpMatrices[0] = nullptr;
	return JET_Success;
}

/**
 * @note Address: 0x80088B18
 * @note Size: 0xE0
 */
int J3DMtxBuffer::createDoubleDrawMtx(J3DModelData* data, u32 num)
{
	if (num != 0) {
		for (int i = 0; i < 2; i++) {
			mDrawMatrices[i] = new Mtx*[num];
			mNormMatrices[i] = new Mtx33*[num];
			mBumpMatrices[i] = nullptr;
		}
	}

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < num; j++) {
			if (data->getDrawMtxNum()) {
				mDrawMatrices[i][j] = new (0x20) Mtx[data->getDrawMtxNum()];
				mNormMatrices[i][j] = new (0x20) Mtx33[data->getDrawMtxNum()];
			}
		}
	}
	return JET_Success;
}

/**
 * @note Address: 0x80088BF8
 * @note Size: 0x214
 */
int J3DMtxBuffer::createBumpMtxArray(J3DModelData* data, u32 viewNum)
{
	if (data->getModelDataType() == J3DMLF_None) {
		u32 bumpMtxCount  = 0;
		u16 materialCount = data->getMaterialNum();
		u16 v1            = 0;
		for (u16 i = 0; i < materialCount; i++) {
			J3DMaterial* material = data->getMaterialNodePointer(i);
			if (material->getNBTScale()->mHasScale == 1) {
				bumpMtxCount += material->getShape()->countBumpMtxNum();
				v1++;
			}
		}
		if ((u16)bumpMtxCount != 0 && viewNum != 0) {
			for (int i = 0; i < 2; i++) {
				mBumpMatrices[i] = new Mtx33**[v1];
			}
		}
		for (int i = 0; i < 2; i++) {
			u32 materialCount = data->getMaterialNum();
			int shapeCount    = 0;
			for (u16 matIndex = 0; matIndex < materialCount; matIndex++) {
				J3DMaterial* material = data->getMaterialNodePointer(matIndex);
				if (material->getNBTScale()->mHasScale == 1) {
					mBumpMatrices[i][shapeCount] = new Mtx33*[viewNum];
					material->getShape()->setBumpMtxOffset(shapeCount);
					shapeCount += 1;
				}
			}
		}
		for (int i = 0; i < 2; i++) {
			materialCount = data->getMaterialTable().mMaterialNum;
			int j         = 0;
			for (u16 matIndex = 0; matIndex < materialCount; matIndex++) {
				J3DMaterial* material = data->getMaterialNodePointer(matIndex);
				if (material->getNBTScale()->mHasScale == 1) {
					for (int k = 0; k < viewNum; k++) {
						mBumpMatrices[i][j][k] = new (0x20) Mtx33[data->getDrawMtxNum()];
					}
					j++;
				}
			}
		}
		if (v1) {
			data->setBumpFlag(1);
		}
	}
	return JET_Success;
}

/**
 * @note Address: 0x80088E0C
 * @note Size: 0x220
 */
void J3DMtxBuffer::calcWeightEnvelopeMtx()
{
	register MtxP weightAnmMtx;
	register Mtx* worldMtx;
	register Mtx* invMtx;
	register f32 weight;
	int jointIdx;
	int mixIdx;
	int mixCount;
	int envelopeIdx;
	int envelopeCount;
	u16* indices;
	register f32* weights;
	u8* scaleFlags;
	register f32 world0XY;
	register f32 scratch0;
	register f32 world1XY;
	register f32 world1ZW;
	register f32 world2XY;
	register f32 world2ZW;
	register f32 scratch1;
	register f32 inverseRow1;
	register f32 inverseRow2;
	register f32 sum0XY;
	register f32 sum0ZW;
	register f32 sum1XY;
	register f32 sum1ZW;
	register f32 sum2XY;
	register f32 sum2ZW;
	register f32 product0XY;
	register f32 product0ZW;
	register f32 product1XY;
	register f32 product1ZW;
	register f32 product2XY;
	register f32 unit01;
	register f32 inverseRow2ZW;
	register f32* unitData = J3DUnit01;
	envelopeIdx            = -1;
	envelopeCount          = mJointTree->getWEvlpMtxNum();
	indices                = mJointTree->getWEvlpMixIndex() - 1;
	weights                = mJointTree->getWEvlpMixWeight() - 1;
#ifdef __MWERKS__ // clang-format off
	asm {
		psq_l unit01, 0(unitData), 0, 0
		ps_merge00 sum0ZW, unit01, unit01
		ps_merge00 sum1ZW, unit01, unit01
		ps_merge00 sum2ZW, unit01, unit01
	}
#endif // clang-format on
	while (++envelopeIdx < envelopeCount)
	{
		scaleFlags   = &mEnvelopeScaleFlags[envelopeIdx];
		*scaleFlags  = 1;
		weightAnmMtx = mWeightEnvelopeMatrices[envelopeIdx];
#ifdef __MWERKS__ // clang-format off
		asm {
			ps_merge00 sum0XY, unit01, unit01
			ps_merge00 sum1XY, unit01, unit01
			ps_merge00 sum2XY, unit01, unit01
		}
#endif // clang-format on
		mixIdx   = 0;
		mixCount = mJointTree->getWEvlpMixMtxNum(envelopeIdx);
		// this feels bad as a do-while, but I can't get the instruction order to work otherwise
		do {
			jointIdx = *++indices;
			invMtx   = &mJointTree->getInvJointMtx((u16)jointIdx);
			worldMtx = &mWorldMatrices[jointIdx];
#ifdef __MWERKS__ // clang-format off
			asm {
				lfsu     weight, 4(weights)
				psq_l    scratch0, 0(invMtx), 0, 0
				psq_l    world0XY, 0(worldMtx), 0, 0
				psq_l    world1XY, 16(worldMtx), 0, 0
				ps_muls0 product0XY, scratch0, world0XY
				psq_l    inverseRow1, 16(invMtx), 0, 0
				ps_muls0 product1XY, scratch0, world1XY
				psq_l    world2XY, 32(worldMtx), 0, 0
				psq_l    scratch1, 8(invMtx), 0, 0
				ps_muls0 product2XY, scratch0, world2XY
				ps_madds1 product0XY, inverseRow1, world0XY, product0XY
				psq_l    inverseRow2, 32(invMtx), 0, 0
				psq_l    scratch0, 8(worldMtx), 0, 0
				ps_madds1 product1XY, inverseRow1, world1XY, product1XY
				psq_l    world1ZW, 24(worldMtx), 0, 0
				ps_madds0 product0XY, inverseRow2, scratch0, product0XY
				ps_madds1 product2XY, inverseRow1, world2XY, product2XY
				psq_l    world2ZW, 40(worldMtx), 0, 0
				ps_madds0 product1XY, inverseRow2, world1ZW, product1XY
				psq_l    inverseRow1, 24(invMtx), 0, 0
				ps_muls0 product0ZW, scratch1, world0XY
				ps_muls0 product1ZW, scratch1, world1XY
				ps_madds0 product2XY, inverseRow2, world2ZW, product2XY
				psq_l    inverseRow2ZW, 40(invMtx), 0, 0
				ps_madds0 sum0XY, product0XY, weight, sum0XY
				ps_muls0 scratch1, scratch1, world2XY
				ps_madds1 product0ZW, inverseRow1, world0XY, product0ZW
				ps_madds1 product1ZW, inverseRow1, world1XY, product1ZW
				psq_st   sum0XY, 0(weightAnmMtx), 0, 0
				ps_madds0 sum1XY, product1XY, weight, sum1XY
				ps_madds1 scratch1, inverseRow1, world2XY, scratch1
				ps_madds0 product0ZW, inverseRow2ZW, scratch0, product0ZW
				ps_madds0 product1ZW, inverseRow2ZW, world1ZW, product1ZW
				psq_st   sum1XY, 16(weightAnmMtx), 0, 0
				ps_madds0 sum2XY, product2XY, weight, sum2XY
				ps_madds0 scratch1, inverseRow2ZW, world2ZW, scratch1
				ps_madd  product0ZW, unit01, scratch0, product0ZW
				psq_st   sum2XY, 32(weightAnmMtx), 0, 0
				ps_madd  product1ZW, unit01, world1ZW, product1ZW
				ps_madd  scratch1, unit01, world2ZW, scratch1
				ps_madds0 sum0ZW, product0ZW, weight, sum0ZW
				ps_madds0 sum1ZW, product1ZW, weight, sum1ZW
				ps_madds0 sum2ZW, scratch1, weight, sum2ZW
			}
#endif // clang-format on
			*scaleFlags &= mScaleFlags[jointIdx];
		} while (++mixIdx < mixCount);
#ifdef __MWERKS__ // clang-format off
		asm {
			psq_st sum0ZW, 8(weightAnmMtx), 0, 0
			ps_merge00 sum0ZW, unit01, unit01
			psq_st sum1ZW, 24(weightAnmMtx), 0, 0
			ps_merge00 sum1ZW, unit01, unit01
			psq_st sum2ZW, 40(weightAnmMtx), 0, 0
			ps_merge00 sum2ZW, unit01, unit01
		}
#endif // clang-format on
	}
}

/**
 * @note Address: 0x8008902C
 * @note Size: 0x304
 */
void J3DMtxBuffer::calcDrawMtx(u32 p1, const Vec& vec, const Mtx& mtx)
{
	switch (p1) {
	case 0: {
		u32 mtxNum;
		Mtx* viewMtx;
		viewMtx = j3dSys.getViewMtx();
		mtxNum  = mJointTree->mMtxData.mDrawMtxCount;
		for (u16 i = 0; i < mtxNum; i++) {
			PSMTXConcat(*viewMtx, *(Mtx*)getAnmMtx(mJointTree->getDrawMtxIndex(i)), *getDrawMtx(i));
		}

		if (mJointTree->getDrawMtxNum() > mtxNum) {
			J3DPSMtxArrayConcat(*viewMtx, mWeightEnvelopeMatrices[0], *getDrawMtx(mtxNum), mJointTree->getWEvlpMtxNum());
		}
	} break;

	case 1: {
		u16 mtxNum = mJointTree->getDrawFullWgtMtxNum();
		for (u16 i = 0; i < mtxNum; i++) {
			PSMTXCopy(*(Mtx*)getAnmMtx(mJointTree->getDrawMtxIndex(i)), *getDrawMtx(i));
		}

		mtxNum = mJointTree->getDrawFullWgtMtxNum();
		for (u16 i = 0; i < mtxNum; i++) {
			PSMTXCopy(getWeightAnmMtx(i), *getDrawMtx(i + mJointTree->getDrawFullWgtMtxNum()));
		}
	} break;

	case 2: {
		Mtx baseMtx;
		J3DCalcViewBaseMtx(*j3dSys.getViewMtx(), vec, mtx, baseMtx);
		u32 mtxNum = mJointTree->getDrawFullWgtMtxNum();
		for (u16 i = 0; i < mtxNum; i++) {
			PSMTXConcat(baseMtx, *(Mtx*)getAnmMtx(mJointTree->getDrawMtxIndex(i)), *getDrawMtx(i));
		}

		mtxNum = mJointTree->getDrawFullWgtMtxNum();
		if (mJointTree->getDrawMtxNum() > mtxNum) {
			J3DPSMtxArrayConcat(baseMtx, mWeightEnvelopeMatrices[0], *getDrawMtx(mtxNum), mJointTree->getWEvlpMtxNum());
		}
	} break;
	}
}

/**
 * @note Address: 0x80089330
 * @note Size: 0x1BC
 */
void J3DMtxBuffer::calcNrmMtx()
{
	u16 mtxNum = mJointTree->mMtxData.mCount;

	for (u16 i = 0; i < mtxNum; i++) {
		if (mJointTree->getDrawMtxFlag(i) == 0) {
			if (getScaleFlag(mJointTree->getDrawMtxIndex(i)) == 1) {
				setNrmMtx(i, *getDrawMtx(i));
			} else {
				J3DPSCalcInverseTranspose(*getDrawMtx(i), *getNrmMtx(i));
			}
			continue;
		}

		if (getEnvScaleFlag(mJointTree->getDrawMtxIndex(i)) == 1) {
			setNrmMtx(i, *getDrawMtx(i));
			continue;
		}

		J3DPSCalcInverseTranspose(*getDrawMtx(i), *getNrmMtx(i));
	}
}

/**
 * @note Address: 0x800894EC
 * @note Size: 0x178
 */
void J3DMtxBuffer::calcBBoardMtx()
{
	u32 mtxNum = mJointTree->getDrawMtxNum();
	for (u16 i = 0; i < mtxNum; i++) {
		if (mJointTree->getDrawMtxFlag(i)) {
			continue;
		}

		if (mJointTree->getJointNodePointer((u32)(mJointTree->getDrawMtxIndex(i)))->getMtxType() == 1) {
			Mtx& drawMtx = *getDrawMtx(i);
			J3DCalcBBoardMtx(drawMtx);
			Mtx33& nrmMtx = *getNrmMtx(i);
			nrmMtx[0][0]  = (drawMtx[0][0] != 0.0f) ? 1.0f / drawMtx[0][0] : 0.0f;
			nrmMtx[0][1]  = 0.0f;
			nrmMtx[0][2]  = 0.0f;

			nrmMtx[1][0] = 0.0f;
			nrmMtx[1][1] = (drawMtx[1][1] != 0.0f) ? 1.0f / drawMtx[1][1] : 0.0f;
			nrmMtx[1][2] = 0.0f;

			nrmMtx[2][0] = 0.0f;
			nrmMtx[2][1] = 0.0f;
			nrmMtx[2][2] = (drawMtx[2][2] != 0.0f) ? 1.0f / drawMtx[2][2] : 0.0f;
			continue;
		}

		if (mJointTree->getJointNodePointer((int)mJointTree->getDrawMtxIndex(i))->getMtxType() == 2) {
			Mtx& drawMtx = *getDrawMtx(i);
			J3DCalcYBBoardMtx(drawMtx);
			J3DPSCalcInverseTranspose(drawMtx, *getNrmMtx(i));
		}
	}
}
