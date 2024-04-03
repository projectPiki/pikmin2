#include "Dolphin/gx.h"
#include "Dolphin/mtx.h"
#include "JSystem/J3D/J3DGD.h"
#include "JSystem/J3D/J3DMaterial.h"
#include "JSystem/J3D/J3DModel.h"
#include "JSystem/J3D/J3DMtxBuffer.h"
#include "JSystem/J3D/J3DPacket.h"
#include "JSystem/J3D/J3DShape.h"
#include "JSystem/J3D/J3DSys.h"
#include "JSystem/J3D/J3DTexGenBlock.h"
#include "JSystem/J3D/J3DTexMtx.h"
#include "JSystem/J3D/J3DTransform.h"
#include "types.h"

J3DShapeMtx::LoadMtxIndxFunction J3DShapeMtx::sMtxLoadPipeline[4] = {
	&J3DShapeMtx::loadMtxIndx_PNGP,
	&J3DShapeMtx::loadMtxIndx_PCPU,
	&J3DShapeMtx::loadMtxIndx_NCPU,
	&J3DShapeMtx::loadMtxIndx_PNCPU,
};
J3DShapeMtxConcatView::LoadMtxConcatViewFunction J3DShapeMtxConcatView::sMtxLoadPipeline[4] = {
	&J3DShapeMtxConcatView::loadMtxConcatView_PNGP,
	&J3DShapeMtxConcatView::loadMtxConcatView_PCPU,
	&J3DShapeMtxConcatView::loadMtxConcatView_NCPU,
	&J3DShapeMtxConcatView::loadMtxConcatView_PNCPU,
};

J3DShapeMtxConcatView::LoadMtxConcatViewFunction J3DShapeMtxConcatView::sMtxLoadLODPipeline[4] = {
	&J3DShapeMtxConcatView::loadMtxConcatView_PNGP_LOD,
	&J3DShapeMtxConcatView::loadMtxConcatView_PCPU,
	&J3DShapeMtxConcatView::loadMtxConcatView_NCPU,
	&J3DShapeMtxConcatView::loadMtxConcatView_PNCPU,
};

u32 J3DShapeMtx::sCurrentPipeline;
u8* J3DShapeMtx::sCurrentScaleFlag;
bool J3DShapeMtx::sNBTFlag;
bool J3DShapeMtx::sLODFlag;
u32 J3DShapeMtx::sTexMtxLoadType;
MtxP J3DShapeMtxConcatView::sMtxPtrTbl[2];
J3DTexGenBlock* J3DDifferedTexMtx::sTexGenBlock;
J3DTexMtxObj* J3DDifferedTexMtx::sTexMtxObj;

u16 J3DShapeMtx::sMtxLoadCache[10];

/**
 * @note Address: 0x80086104
 * @note Size: 0x3C
 */
void J3DShapeMtx::resetMtxLoadCache()
{
	sMtxLoadCache[9] = 0xFFFF;
	sMtxLoadCache[8] = 0xFFFF;
	sMtxLoadCache[7] = 0xFFFF;
	sMtxLoadCache[6] = 0xFFFF;
	sMtxLoadCache[5] = 0xFFFF;
	sMtxLoadCache[4] = 0xFFFF;
	sMtxLoadCache[3] = 0xFFFF;
	sMtxLoadCache[2] = 0xFFFF;
	sMtxLoadCache[1] = 0xFFFF;
	sMtxLoadCache[0] = 0xFFFF;
}

/**
 * @note Address: 0x80086140
 * @note Size: 0x44
 */
void J3DShapeMtx::loadMtxIndx_PNGP(int slot, u16 indx) const
{
	J3DFifoLoadIndx(GX_CMD_LOAD_INDX_A, indx, 0xB000 | ((u16)(slot * 0x0C)));
	J3DFifoLoadIndx(GX_CMD_LOAD_INDX_B, indx, 0x8000 | ((u16)((slot * 0x09) + 0x400)));
}

/**
 * @note Address: 0x80086184
 * @note Size: 0x60
 */
void J3DShapeMtx::loadMtxIndx_PCPU(int p1, u16 p2) const
{
	J3DFifoLoadPosMtxImm(*j3dSys.mShapePacket->mBaseMtxPtr, p1 * 3);
	j3dSys.loadNrmMtxIndx(p1, p2);
}

/**
 * @note Address: 0x800861E4
 * @note Size: 0x4C
 */
void J3DShapeMtx::loadMtxIndx_NCPU(int p1, u16 p2) const
{
	j3dSys.loadPosMtxIndx(p1, p2);
	J3DFifoLoadNrmMtxImm(*j3dSys.mShapePacket->mBaseMtxPtr, p1 * 3);
}

/**
 * @note Address: 0x80086230
 * @note Size: 0x58
 */
void J3DShapeMtx::loadMtxIndx_PNCPU(int p1, u16 p2) const
{
	J3DFifoLoadPosMtxImm(*j3dSys.mShapePacket->mBaseMtxPtr, p1 * 3);
	J3DFifoLoadNrmMtxImm(*j3dSys.mShapePacket->mBaseMtxPtr, p1 * 3);
}

/**
 * @note Address: 0x80086288
 * @note Size: 0x588
 */
void J3DDifferedTexMtx::loadExecute(const Mtx p1)
{
	J3DTexGenBlock* block = sTexGenBlock;

	Mtx* mtxToLoad;
	static Mtx qMtx  = { { 0.5f, 0.0f, 0.5f, 0.0f }, { 0.0f, -0.5f, 0.5f, 0.0f }, { 0.0f, 0.0f, 1.0f, 0.0f } };
	static Mtx qMtx2 = { { 0.5f, 0.0f, 0.0f, 0.5f }, { 0.0f, -0.5f, 0.0f, 0.5f }, { 0.0f, 0.0f, 1.0f, 0.0f } };

	Mtx v88;
	Mtx44 v48, v8;

	J3DTexMtxObj* texMtxObj = sTexMtxObj;
	u16 texMtxNum           = texMtxObj->getNumTexMtx();

	J3DTexCoord* tex_coord;
	Mtx* mtx;
	Mtx44* eff_mtx;
	J3DTexMtxInfo* tex_mtx_info;
	if (j3dSys.checkFlag(J3DSysFlag_PostTexMtx)) {
		for (u16 i = 0; i < texMtxNum; i++) {
			J3DTexMtx* tex_mtx = block->getTexMtx(i);
			u8 tex_gen_src     = tex_mtx->getTexMtxInfo().mInfo;
			u32 unk;
			switch (tex_gen_src & 0x3f) {
			case 9:
			case 3:
				Mtx& tmp5 = texMtxObj->getMtx(i);
				mtx       = &tmp5;
				break;
			case 6:
			case 7:
			case 1:
				Mtx& tmp6 = texMtxObj->getMtx(i);
				mtx       = &tmp6;
				break;
			case 8:
			case 2:
				PSMTXInverse(j3dSys.mViewMtx, v88);
				PSMTXConcat(texMtxObj->getMtx(i), v88, v88);
				mtx = &v88;
				break;
			case 5:
				tex_mtx_info = &tex_mtx->getTexMtxInfo();
				unk          = (tex_gen_src & 0x80) >> 7;
				if (unk == 0) {
					J3DGetTextureMtxOld(tex_mtx_info->mSRT, tex_mtx_info->mCenter, v8);
				} else if (unk == 1) {
					J3DGetTextureMtxMayaOld(tex_mtx_info->mSRT, v8);
				}
				eff_mtx = &texMtxObj->getEffectMtx(i);
				J3DMtxProjConcat(v8, *eff_mtx, v88);
				PSMTXInverse(j3dSys.mViewMtx, v48);
				PSMTXConcat(v88, v48, v88);
				v88[2][3] = 0.0f;
				v88[1][3] = 0.0f;
				v88[0][3] = 0.0f;
				mtx       = &v88;
				break;

			case 11:
				tex_mtx_info = &tex_mtx->getTexMtxInfo();
				unk          = (tex_gen_src & 0x80) >> 7;
				if (unk == 0) {
					J3DGetTextureMtx(tex_mtx_info->mSRT, tex_mtx_info->mCenter, v8);
				} else if (unk == 1) {
					J3DGetTextureMtxMaya(tex_mtx_info->mSRT, v8);
				}
				PSMTXConcat(v8, qMtx, v8);
				eff_mtx = &texMtxObj->getEffectMtx(i);
				J3DMtxProjConcat(v8, *eff_mtx, v88);
				PSMTXInverse(j3dSys.mViewMtx, v48);
				PSMTXConcat(v88, v48, v88);
				v88[2][3] = 0.0f;
				v88[1][3] = 0.0f;
				v88[0][3] = 0.0f;
				mtx       = &v88;
				break;
			case 10:
				tex_mtx_info = &tex_mtx->getTexMtxInfo();
				unk          = (tex_gen_src & 0x80) >> 7;
				if (unk == 0) {
					J3DGetTextureMtx(tex_mtx_info->mSRT, tex_mtx_info->mCenter, v8);
				} else if (unk == 1) {
					J3DGetTextureMtxMaya(tex_mtx_info->mSRT, v8);
				}
				PSMTXConcat(v8, qMtx2, v8);
				eff_mtx = &texMtxObj->getEffectMtx(i);
				J3DMtxProjConcat(v8, *eff_mtx, v88);
				PSMTXInverse(j3dSys.mViewMtx, v48);
				PSMTXConcat(v88, v48, v88);
				v88[2][3] = 0.0f;
				v88[1][3] = 0.0f;
				v88[0][3] = 0.0f;
				mtx       = &v88;
				break;
			case 0:
			case 4:
			default:
				Mtx& tmp7 = texMtxObj->getMtx(i);
				mtx       = &tmp7;
				break;
			}
			GXLoadTexMtxImm(*mtx, i * 3 + 0x40, GX_MTX3x4);
		}
	} else {
		for (u16 i = 0; i < texMtxNum; i++) {
			J3DTexMtx* blockTexMtx = block->getTexMtx(i);
			u8 tex_gen_src         = blockTexMtx->getTexMtxInfo().mInfo;
			u32 unk;
			switch (tex_gen_src & 0x3F) {
			case 9:
			case 3:
				PSMTXConcat(texMtxObj->getMtx(i), p1, v88);
				mtxToLoad = &v88;
				break;
			case 6:
			case 7:
			case 1: {
				PSMTXCopy(p1, v48);
				// zero-out the translation vector
				v48[2][3] = 0.0f;
				v48[1][3] = 0.0f;
				v48[0][3] = 0.0f;
				PSMTXConcat(texMtxObj->getMtx(i), v48, v88);
				mtxToLoad = &v88;
				break;
			}
			case 8:
			case 2:
				mtxToLoad = &texMtxObj->getMtx(i);
				break;
			case 5: {
				unk = (tex_gen_src & 0x80) >> 7;
				if (unk == 0) {
					J3DGetTextureMtxOld(blockTexMtx->mTexMtxInfo.mSRT, blockTexMtx->mTexMtxInfo.mCenter, v8);
				} else if (unk == 1) {
					J3DGetTextureMtxMayaOld(blockTexMtx->mTexMtxInfo.mSRT, v8);
				}
				J3DMtxProjConcat(v8, texMtxObj->getEffectMtx(i), v88);
				PSMTXInverse(j3dSys.mViewMtx, v48);
				PSMTXConcat(v88, v48, v88);
				PSMTXConcat(v88, p1, v88);
				mtxToLoad = &v88;
				v88[2][3] = 0.0f;
				v88[1][3] = 0.0f;
				v88[0][3] = 0.0f;
				break;
			}
			case 11: {
				unk = (tex_gen_src & 0x80) >> 7;
				if (unk == 0) {
					J3DGetTextureMtx(blockTexMtx->mTexMtxInfo.mSRT, blockTexMtx->mTexMtxInfo.mCenter, v8);
				} else if (unk == 1) {
					J3DGetTextureMtxMaya(blockTexMtx->mTexMtxInfo.mSRT, v8);
				}
				PSMTXConcat(v8, qMtx, v8);
				J3DMtxProjConcat(v8, texMtxObj->getEffectMtx(i), v88);
				PSMTXInverse(j3dSys.mViewMtx, v48);
				PSMTXConcat(v88, v48, v88);
				PSMTXConcat(v88, p1, v88);
				mtxToLoad = &v88;
				v88[2][3] = 0.0f;
				v88[1][3] = 0.0f;
				v88[0][3] = 0.0f;
				break;
			}
			case 10: {
				unk = (tex_gen_src & 0x80) >> 7;
				if (unk == 0) {
					J3DGetTextureMtx(blockTexMtx->mTexMtxInfo.mSRT, blockTexMtx->mTexMtxInfo.mCenter, v8);
				} else if (unk == 1) {
					J3DGetTextureMtxMaya(blockTexMtx->mTexMtxInfo.mSRT, v8);
				}
				PSMTXConcat(v8, qMtx2, v8);
				J3DMtxProjConcat(v8, texMtxObj->getEffectMtx(i), v88);
				PSMTXInverse(j3dSys.mViewMtx, v48);
				PSMTXConcat(v88, v48, v88);
				PSMTXConcat(v88, p1, v88);
				mtxToLoad = &v88;
				v88[2][3] = 0.0f;
				v88[1][3] = 0.0f;
				v88[0][3] = 0.0f;
				break;
			}
			case 0:
			case 4:
			default:
				mtxToLoad = &texMtxObj->getMtx(i);
				break;
			}
			GXLoadTexMtxImm(*mtxToLoad, i * 3 + 30, (GXTexMtxType)blockTexMtx->mTexMtxInfo.mProjection);
		}
	}
}

/**
 * @note Address: 0x80086810
 * @note Size: 0xA8
 */
void J3DShapeMtxConcatView::loadMtxConcatView_PNGP(int slot, u16 drawIdx) const
{
	Mtx mtx;
	PSMTXConcat(*j3dSys.getShapePacket()->getBaseMtxPtr(), j3dSys.getModelDrawMtx(drawIdx), mtx);
	J3DDifferedTexMtx::load(mtx);
	J3DFifoLoadPosMtxImm(mtx, slot * 3);
	loadNrmMtx(slot, drawIdx, mtx);
}

/**
 * @note Address: 0x800868B8
 * @note Size: 0xB4
 */
void J3DShapeMtxConcatView::loadMtxConcatView_PCPU(int slot, u16 drawIdx) const
{
	Mtx mtx;
	PSMTXConcat(*j3dSys.getShapePacket()->getBaseMtxPtr(), j3dSys.getModelDrawMtx(drawIdx), mtx);
	J3DDifferedTexMtx::load(mtx);
	J3DFifoLoadPosMtxImm(*j3dSys.getShapePacket()->getBaseMtxPtr(), slot * 3);
	loadNrmMtx(slot, drawIdx, mtx);
}

/**
 * @note Address: 0x8008696C
 * @note Size: 0xA8
 */
void J3DShapeMtxConcatView::loadMtxConcatView_NCPU(int slot, u16 drawIdx) const
{
	Mtx mtx;
	PSMTXConcat(*j3dSys.getShapePacket()->getBaseMtxPtr(), j3dSys.getModelDrawMtx(drawIdx), mtx);
	J3DDifferedTexMtx::load(mtx);
	J3DFifoLoadPosMtxImm(mtx, slot * 3);

	J3DFifoLoadNrmMtxImm(*j3dSys.getShapePacket()->getBaseMtxPtr(), slot * 3);
	if (sTexMtxLoadType == 0x2000) {
		J3DFifoLoadNrmMtxToTexMtx(*j3dSys.getShapePacket()->getBaseMtxPtr(), slot * 3 + 0x1E);
	}
}

/**
 * @note Address: 0x80086A14
 * @note Size: 0xB4
 */
void J3DShapeMtxConcatView::loadMtxConcatView_PNCPU(int slot, u16 drawIdx) const
{
	if (J3DDifferedTexMtx::sTexGenBlock) {
		Mtx mtx;
		PSMTXConcat(*j3dSys.getShapePacket()->getBaseMtxPtr(), j3dSys.getModelDrawMtx(drawIdx), mtx);
		J3DDifferedTexMtx::loadExecute(mtx);
	}
	J3DFifoLoadPosMtxImm(*j3dSys.getShapePacket()->getBaseMtxPtr(), slot * 3);
	J3DFifoLoadNrmMtxImm(*j3dSys.getShapePacket()->getBaseMtxPtr(), slot * 3);
	if (sTexMtxLoadType == 0x2000) {
		J3DFifoLoadNrmMtxToTexMtx(*j3dSys.getShapePacket()->getBaseMtxPtr(), slot * 3 + 0x1E);
	}
}

/**
 * @note Address: 0x80086AC8
 * @note Size: 0xD4
 */
void J3DShapeMtxConcatView::loadMtxConcatView_PNGP_LOD(int slot, u16 drawIdx) const
{
	Mtx mtx;
	PSMTXConcat(*j3dSys.getShapePacket()->getBaseMtxPtr(), j3dSys.getModelDrawMtx(drawIdx), mtx);
	PSMTXConcat(mtx, j3dSys.mModel->getModelData()->getInvJointMtx(drawIdx), mtx);
	J3DDifferedTexMtx::load(mtx);
	J3DFifoLoadPosMtxImm(mtx, slot * 3);
	loadNrmMtx(slot, drawIdx, mtx);
}

/**
 * @note Address: 0x80086B9C
 * @note Size: 0x5C
 */
void J3DShapeMtx::load() const
{
	LoadMtxIndxFunction function = sMtxLoadPipeline[sCurrentPipeline];
	(this->*function)(0, mUseMtxIndex);
}

/**
 * @note Address: 0x80086BF8
 * @note Size: 0x64
 */
void J3DShapeMtx::calcNBTScale(const Vec& scale, Mtx33* srcArray, Mtx33* dstArray)
{
	J3DPSMtx33Copy(srcArray[mUseMtxIndex], dstArray[mUseMtxIndex]);
	J3DScaleNrmMtx33(dstArray[mUseMtxIndex], scale);
}

/**
 * @note Address: 0x80086C5C
 * @note Size: 0xD4
 */
void J3DShapeMtxConcatView::load() const
{
	sMtxPtrTbl[0]                      = j3dSys.getModel()->getMtxBuffer()->getWorldMtx(0);
	sMtxPtrTbl[1]                      = j3dSys.getModel()->getMtxBuffer()->getWeightAnmMtx(0);
	LoadMtxConcatViewFunction function = sMtxLoadPipeline[sCurrentPipeline];
	j3dSys.mModelDrawMtx               = (Mtx*)sMtxPtrTbl[j3dSys.mModel->mModelData->mJointTree.mMtxData.mDrawMtxFlag[mUseMtxIndex]];
	GXSetArray(GX_POS_MTX_ARRAY, j3dSys.mModelDrawMtx, sizeof(Mtx));
	(this->*function)(0, j3dSys.mModel->mModelData->mJointTree.mMtxData.mDrawMtxIdx[mUseMtxIndex]);
}

/**
 * @note Address: 0x80086D30
 * @note Size: 0x124
 */
void J3DShapeMtxConcatView::loadNrmMtx(int slot, u16 drawIdx, Mtx nrmMtx) const
{
	if (sCurrentScaleFlag[drawIdx] == 1) {
		if (sTexMtxLoadType == 0x2000) {
			J3DFifoLoadNrmMtxToTexMtx(nrmMtx, GX_TEXMTX0);
		}
		if (!sNBTFlag) {
			J3DFifoLoadNrmMtxImm(nrmMtx, 0);
		} else {
			Mtx33 mtx;
			Vec* scale = j3dSys.getNBTScale();
			J3DPSMtx33CopyFrom34(nrmMtx, mtx);
			J3DScaleNrmMtx33(mtx, *scale);
			J3DFifoLoadNrmMtxImm3x3(mtx, 0);
		}
	} else {
		Mtx33 mtx;
		J3DPSCalcInverseTranspose(nrmMtx, mtx);
		if (sTexMtxLoadType == 0x2000) {
			J3DFifoLoadNrmMtxToTexMtx3x3(mtx, GX_TEXMTX0);
		}
		if (!sNBTFlag) {
			J3DFifoLoadNrmMtxImm3x3(mtx, 0);
		} else {
			Vec* scale = j3dSys.getNBTScale();
			J3DScaleNrmMtx33(mtx, *scale);
			J3DFifoLoadNrmMtxImm3x3(mtx, 0);
		}
	}
}

/**
 * @note Address: 0x80086E54
 * @note Size: 0xAC
 */
void J3DShapeMtxMulti::load() const
{
	LoadMtxIndxFunction function = sMtxLoadPipeline[sCurrentPipeline];
	u16 count                    = mUseMtxNum;
	for (int i = 0; i < count; i++) {
		if (mUseMtxIndexTable[i] != 0xFFFF) {
			(this->*function)(i, mUseMtxIndexTable[i]);
		}
	}
}

/**
 * @note Address: 0x80086F00
 * @note Size: 0xB0
 */
void J3DShapeMtxMulti::calcNBTScale(const Vec& scale, Mtx33* srcArray, Mtx33* dstArray)
{
	u16 count = mUseMtxNum;
	for (int i = 0; i < count; i++) {
		if (mUseMtxIndexTable[i] != 0xFFFF) {
			J3DPSMtx33Copy(srcArray[mUseMtxIndexTable[i]], dstArray[mUseMtxIndexTable[i]]);
			J3DScaleNrmMtx33(dstArray[mUseMtxIndexTable[i]], scale);
		}
	}
}

/**
 * @note Address: 0x80086FB0
 * @note Size: 0x1EC
 */
void J3DShapeMtxMultiConcatView::load() const
{
	sMtxPtrTbl[0] = j3dSys.getModel()->getMtxBuffer()->getWorldMtx(0);
	sMtxPtrTbl[1] = j3dSys.getModel()->getMtxBuffer()->getWeightAnmMtx(0);
	if (!sLODFlag) {
		LoadMtxConcatViewFunction func = sMtxLoadPipeline[sCurrentPipeline];
		int use_mtx_num                = mUseMtxNum;
		for (int i = 0; i < use_mtx_num; i++) {
			u16 use_mtx_index = mUseMtxIndexTable[i];
			if (use_mtx_index != 0xffff) {
				u16 draw_mtx_index = j3dSys.getModel()->getModelData()->getDrawMtxIndex(use_mtx_index);
				u8 draw_mtx_flag   = j3dSys.getModel()->getModelData()->getDrawMtxFlag(use_mtx_index);
				j3dSys.setModelDrawMtx((Mtx*)sMtxPtrTbl[draw_mtx_flag]);
				(this->*func)(i, draw_mtx_index);
			}
		}
	} else {
		u16* important_mtx_indices = j3dSys.getModel()->getModelData()->getWEvlpImportantMtxIndex();
		j3dSys.setModelDrawMtx((Mtx*)sMtxPtrTbl[0]);
		int use_mtx_num = mUseMtxNum;
		for (int i = 0; i < use_mtx_num; i++) {
			u32 current_pipeline           = sCurrentPipeline;
			LoadMtxConcatViewFunction func = sMtxLoadLODPipeline[current_pipeline];
			u16 use_mtx_index              = mUseMtxIndexTable[i];
			if (use_mtx_index != 0xffff) {
				u16 important_mtx_index = important_mtx_indices[use_mtx_index];
				if (important_mtx_index != sMtxLoadCache[i]) {
					u8 draw_mtx_flag = j3dSys.getModel()->getModelData()->getDrawMtxFlag(use_mtx_index);
					if (draw_mtx_flag == 0) {
						func = sMtxLoadPipeline[current_pipeline];
					}
					(this->*func)(i, important_mtx_index);
					sMtxLoadCache[i] = important_mtx_index;
				}
			}
		}
	}
}

/**
 * @note Address: 0x8008719C
 * @note Size: 0x138
 */
void J3DShapeMtxMultiConcatView::loadNrmMtx(int slot, u16 drawIdx, Mtx nrmMtx) const
{
	Mtx33 mtx1, mtx2;
	if (sCurrentScaleFlag[drawIdx] == 1) {
		if (sTexMtxLoadType == 0x2000) {
			J3DFifoLoadNrmMtxToTexMtx(nrmMtx, slot * 3 + GX_TEXMTX0);
		}
		if (!sNBTFlag) {
			J3DFifoLoadNrmMtxImm(nrmMtx, slot * 3);
		} else {
			Vec* nbt_scale = j3dSys.getNBTScale();
			J3DPSMtx33CopyFrom34(nrmMtx, mtx1);
			J3DScaleNrmMtx33(mtx1, *nbt_scale);
			J3DFifoLoadNrmMtxImm3x3(mtx1, 0);
		}
	} else {
		J3DPSCalcInverseTranspose(nrmMtx, mtx2);
		if (sTexMtxLoadType == 0x2000) {
			J3DFifoLoadNrmMtxToTexMtx3x3(mtx2, slot * 3 + GX_TEXMTX0);
		}
		if (!sNBTFlag) {
			J3DFifoLoadNrmMtxImm3x3(mtx2, slot * 3);
		} else {
			Vec* nbt_scale = j3dSys.getNBTScale();
			J3DScaleNrmMtx33(mtx2, *nbt_scale);
			J3DFifoLoadNrmMtxImm3x3(mtx2, slot * 3);
		}
	}
}

/**
 * @note Address: 0x800872D4
 * @note Size: 0x134
 */
void J3DShapeMtxBBoardConcatView::load() const
{
	Mtx v1;
	u16 v2 = j3dSys.mModel->mModelData->mJointTree.mMtxData.mDrawMtxIdx[mUseMtxIndex];
	if (j3dSys.mModel->mModelData->mJointTree.mMtxData.mDrawMtxFlag[mUseMtxIndex] == 0) {
		PSMTXConcat(j3dSys.mViewMtx, j3dSys.mModel->mMtxBuffer->mWorldMatrices[v2], v1);
	} else {
		PSMTXConcat(j3dSys.mViewMtx, j3dSys.mModel->mMtxBuffer->mWeightEnvelopeMatrices[v2], v1);
	}
	J3DCalcBBoardMtx(v1);
	J3DFifoLoadPosMtxImm(v1, 0);
	if (v1[0][0] != 0.0f) {
		v1[0][0] = 1.0f / v1[0][0];
	}
	if (v1[1][1] != 0.0f) {
		v1[1][1] = 1.0f / v1[1][1];
	}
	if (v1[2][2] != 0.0f) {
		v1[2][2] = 1.0f / v1[2][2];
	}
	v1[0][3] = 0.0f;
	v1[1][3] = 0.0f;
	v1[2][3] = 0.0f;
	if (sNBTFlag == false) {
		J3DFifoLoadNrmMtxImm(v1, 0);
	} else {
		J3DScaleNrmMtx(v1, *j3dSys.mNBTScale);
		J3DFifoLoadNrmMtxImm(v1, 0);
	}
}

/**
 * @note Address: 0x80087408
 * @note Size: 0x13C
 */
void J3DShapeMtxYBBoardConcatView::load() const
{
	Mtx v1;
	u16 v2 = j3dSys.mModel->mModelData->mJointTree.mMtxData.mDrawMtxIdx[mUseMtxIndex];
	if (j3dSys.mModel->mModelData->mJointTree.mMtxData.mDrawMtxFlag[mUseMtxIndex] == 0) {
		PSMTXConcat(j3dSys.mViewMtx, j3dSys.mModel->mMtxBuffer->mWorldMatrices[v2], v1);
	} else {
		PSMTXConcat(j3dSys.mViewMtx, j3dSys.mModel->mMtxBuffer->mWeightEnvelopeMatrices[v2], v1);
	}
	J3DCalcYBBoardMtx(v1);
	J3DFifoLoadPosMtxImm(v1, 0);
	if (sCurrentScaleFlag[mUseMtxIndex] == 1) {
		if (sNBTFlag == false) {
			J3DFifoLoadNrmMtxImm(v1, 0);
		} else {
			J3DScaleNrmMtx(v1, *j3dSys.mNBTScale);
			J3DFifoLoadNrmMtxImm(v1, 0);
		}
	} else {
		Mtx33 v3;
		J3DPSCalcInverseTranspose(v1, v3);
		if (sNBTFlag == false) {
			J3DFifoLoadNrmMtxImm3x3(v3, 0);
		} else {
			J3DScaleNrmMtx33(v3, *j3dSys.mNBTScale);
			J3DFifoLoadNrmMtxImm3x3(v3, 0);
		}
	}
}

// this doesn't seem to be used anywhere, and this file doesn't have any unused functions?
static u8 mtxCache[20] = {
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
};
