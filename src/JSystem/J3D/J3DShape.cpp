#include "JSystem/J3D/J3DShape.h"
#include "Dolphin/gd.h"
#include "Dolphin/gx.h"
#include "Dolphin/os.h"
#include "JSystem/J3D/J3DGD.h"
#include "JSystem/J3D/J3DPacket.h"
#include "JSystem/J3D/J3DSys.h"
#include "JSystem/J3D/J3DVertexData.h"
#include "types.h"

u8* J3DShape::sOldVcdVatCmd;
u8 J3DShape::sEnvelopeFlag;

/**
 * @note Address: 0x80060850
 * @note Size: 0x70
 */
void J3DShape::initialize()
{
	mMaterial    = nullptr;
	mId          = 0xFFFF;
	mMtxGroupNum = 0;
	mFlags       = 0;
	mRadius      = 0.0f;
	mMin.set(0.0f, 0.0f, 0.0f);
	mMax.set(0.0f, 0.0f, 0.0f);
	mVtxDesc           = nullptr;
	mShapeMtx          = nullptr;
	mShapeDraw         = nullptr;
	mVtxData           = nullptr;
	mDrawMtxData       = nullptr;
	mScaleFlagArray    = nullptr;
	mDrawMtx           = nullptr;
	mNrmMtx            = nullptr;
	mCurrentViewNumber = reinterpret_cast<u32*>(&j3dDefaultViewNo);
	mHasNBT            = false;
	mHasPNMTXIdx       = false;
}

/**
 * @note Address: 0x800608C0
 * @note Size: 0x78
 */
void J3DShape::calcNBTScale(const Vec& scale, Mtx33* srcArray, Mtx33* dstArray)
{
	for (u16 i = 0; i < getMtxGroupNum(); i++) {
		getShapeMtx(i)->calcNBTScale(scale, srcArray, dstArray);
	}
}

/**
 * @note Address: 0x80060938
 * @note Size: 0x80
 */
u32 J3DShape::countBumpMtxNum() const
{
	u32 count = 0;
	for (u16 i = 0; i < mMtxGroupNum; i++) {
		count += mShapeMtx[i]->getUseMtxNum();
	}
	return count;
}

/**
 * @note Address: 0x800609B8
 * @note Size: 0xEC
 */
bool J3DShape::isSameVcdVatCmd(J3DShape* other)
{
	u8* otherVatCmd = other->mVcdVatCmd;
	u8* thisVatCmd  = mVcdVatCmd;

	for (int i = 0; i < kVcdVatDLSize; i++) {
		if (otherVatCmd[i] != thisVatCmd[i]) {
			return false;
		}
	}
	return true;
}

/**
 * @note Address: 0x80060AA4
 * @note Size: 0x2FC
 */
void J3DShape::makeVtxArrayCmd()
{
	GXVtxAttrFmtList* vtxAttr = mVtxData->getVtxAttrFmtList();

	u8 stride[0x0C];
	void* array[0x0C];
	for (u32 i = 0; i < 0x0C; i++) {
		stride[i] = 0;
		array[i]  = 0;
	}

	for (; vtxAttr->mAttr != GX_VA_NULL; vtxAttr++) {
		switch (vtxAttr->mAttr) {
		case GX_VA_POS: {
			if (vtxAttr->mType == GX_F32)
				stride[vtxAttr->mAttr - GX_VA_POS] = 0x0C;
			else
				stride[vtxAttr->mAttr - GX_VA_POS] = 0x06;
			array[vtxAttr->mAttr - GX_VA_POS] = mVtxData->getVtxPosArray();
			mVtxData->setVtxPosFrac(vtxAttr->mFrac);
			mVtxData->setVtxPosType(vtxAttr->mType);
		} break;
		case GX_VA_NRM: {
			if (vtxAttr->mType == GX_F32)
				stride[vtxAttr->mAttr - GX_VA_POS] = 0x0C;
			else
				stride[vtxAttr->mAttr - GX_VA_POS] = 0x06;
			array[vtxAttr->mAttr - GX_VA_POS] = mVtxData->getVtxNrmArray();
			mVtxData->setVtxNrmFrac(vtxAttr->mFrac);
			mVtxData->setVtxNrmType(vtxAttr->mType);
		} break;
		case GX_VA_CLR0:
		case GX_VA_CLR1: {
			stride[vtxAttr->mAttr - GX_VA_POS] = 0x04;
			array[vtxAttr->mAttr - GX_VA_POS]  = mVtxData->getVtxColorArray(vtxAttr->mAttr - GX_VA_CLR0);
		} break;
		case GX_VA_TEX0:
		case GX_VA_TEX1:
		case GX_VA_TEX2:
		case GX_VA_TEX3:
		case GX_VA_TEX4:
		case GX_VA_TEX5:
		case GX_VA_TEX6:
		case GX_VA_TEX7: {
			if (vtxAttr->mType == GX_F32)
				stride[vtxAttr->mAttr - GX_VA_POS] = 0x08;
			else
				stride[vtxAttr->mAttr - GX_VA_POS] = 0x04;
			array[vtxAttr->mAttr - GX_VA_POS] = mVtxData->getVtxTexCoordArray(vtxAttr->mAttr - GX_VA_TEX0);
		} break;
		default:
			break;
		}
	}

	GXVtxDescList* vtxDesc = mVtxDesc;
	mHasPNMTXIdx           = false;
	for (; vtxDesc->mAttr != GX_VA_NULL; vtxDesc++) {
		if (vtxDesc->mAttr == GX_VA_NBT && vtxDesc->mType != GX_NONE) {
			mHasNBT = true;
			stride[GX_VA_NRM - GX_VA_POS] *= 3;
			array[GX_VA_NRM - GX_VA_POS] = mVtxData->getVtxNBTArray();
		} else if (vtxDesc->mAttr == GX_VA_PNMTXIDX && vtxDesc->mType != GX_NONE) {
			mHasPNMTXIdx = true;
		}
	}

	for (u32 i = 0; i < 0x0C; i++) {
		if (array[i] != 0)
			GDSetArray((GXAttr)(i + GX_VA_POS), array[i], stride[i]);
		else
			GDSetArrayRaw((GXAttr)(i + GX_VA_POS), nullptr, stride[i]);
	}
}

/**
 * @note Address: 0x80060DA0
 * @note Size: 0xA0
 */
void J3DShape::makeVcdVatCmd()
{
	static s32 sInterruptFlag;
	static s8 init;

	if (!init) {
		sInterruptFlag = OSDisableInterrupts();
		init           = true;
	}
	OSDisableScheduler();

	GDCurrentDL gdl_obj;
	GDInitGDLObj(&gdl_obj, mVcdVatCmd, kVcdVatDLSize);
	__GDSetCurrent(&gdl_obj);
	GDSetVtxDescv(mVtxDesc);
	makeVtxArrayCmd();
	J3DGDSetVtxAttrFmtv(GX_VTXFMT0, mVtxData->getVtxAttrFmtList(), mHasNBT);
	GDPadCurr32();
	GDFlushCurrToMem();
	__GDSetCurrent(nullptr);
	OSEnableScheduler();
	OSRestoreInterrupts(sInterruptFlag);
}

/**
 * @note Address: 0x80060E40
 * @note Size: 0xA0
 */
void J3DShape::loadPreDrawSetting() const
{
	if (sOldVcdVatCmd != mVcdVatCmd) {
		GXCallDisplayList(mVcdVatCmd, kVcdVatDLSize);
		sOldVcdVatCmd = mVcdVatCmd;
	}
	mCurrentMtx.load();
}

void J3DLoadCPCmd(u8 cmd, u32 param)
{
	GXWGFifo.u8  = GX_CMD_LOAD_CP_REG;
	GXWGFifo.u8  = cmd;
	GXWGFifo.u32 = param;
}

static void J3DLoadArrayBasePtr(_GXAttr attr, void* data)
{
	u32 idx = (attr == GX_VA_NBT) ? 1 : (attr - GX_VA_POS);
	J3DLoadCPCmd(0xA0 + idx, ((u32)data & 0x7FFFFFFF));
}

/**
 * @note Address: 0x80060EE0
 * @note Size: 0x278
 */
void J3DShape::drawFast() const
{
	if (sOldVcdVatCmd != mVcdVatCmd) {
		GXCallDisplayList(mVcdVatCmd, kVcdVatDLSize);
		sOldVcdVatCmd = mVcdVatCmd;
	}

	if (sEnvelopeFlag != 0 && !mHasPNMTXIdx)
		mCurrentMtx.load();

	// start of setArrayAndBindPipeline();
	J3DShapeMtx::setCurrentPipeline(getPipeline());

	// start of loadVtxArray
	J3DLoadArrayBasePtr(GX_VA_POS, j3dSys.getVtxPos());
	if (!mHasNBT) {
		J3DLoadArrayBasePtr(GX_VA_NRM, j3dSys.getVtxNrm());
	}
	J3DLoadArrayBasePtr(GX_VA_CLR0, j3dSys.getVtxCol());
	// end of loadVtxArray

	j3dSys.setModelDrawMtx(mDrawMtx[*mCurrentViewNumber]);
	j3dSys.setModelNrmMtx((Mtx*)mNrmMtx[*mCurrentViewNumber]);
	J3DShapeMtx::sCurrentScaleFlag = mScaleFlagArray;
	J3DShapeMtx::sNBTFlag          = mHasNBT;
	sEnvelopeFlag                  = mHasPNMTXIdx;
	J3DShapeMtx::sTexMtxLoadType   = getTexMtxLoadType();
	// end of setArrayAndBindPipeline();

	if (!checkFlag(J3DShape_NoMtx)) {
		// LOD flag shenanigans
		if (J3DShapeMtx::getLODFlag() != 0)
			J3DShapeMtx::resetMtxLoadCache();
		u32 n = mMtxGroupNum;
		for (u16 i = 0; i < n; i++) {
			if (getShapeMtx(i) != nullptr)
				getShapeMtx(i)->load();
			if (getShapeDraw(i) != nullptr)
				getShapeDraw(i)->draw();
		}
	} else {
		J3DFifoLoadPosMtxImm(*j3dSys.getShapePacket()->getBaseMtxPtr(), GX_PNMTX0);
		J3DFifoLoadNrmMtxImm(*j3dSys.getShapePacket()->getBaseMtxPtr(), GX_PNMTX0);
		u32 n = mMtxGroupNum;
		for (u16 i = 0; i < n; i++)
			if (getShapeDraw(i) != nullptr)
				getShapeDraw(i)->draw();
	}
}

/**
 * @note Address: 0x80061158
 * @note Size: 0xB8
 * draw__8J3DShapeCFv
 */
void J3DShape::draw() const
{
	resetVcdVatCache();
	loadPreDrawSetting();
	drawFast();
}

/**
 * @note Address: 0x80061210
 * @note Size: 0x160
 */
void J3DShape::simpleDraw() const
{
	resetVcdVatCache();
	loadPreDrawSetting();
	J3DShapeMtx::setCurrentPipeline(getPipeline());

	// start of loadVtxArray
	J3DLoadArrayBasePtr(GX_VA_POS, j3dSys.getVtxPos());
	if (!mHasNBT) {
		J3DLoadArrayBasePtr(GX_VA_NRM, j3dSys.getVtxNrm());
	}
	J3DLoadArrayBasePtr(GX_VA_CLR0, j3dSys.getVtxCol());
	// end of loadVtxArray

	u16 i = 0;
	u32 n = getMtxGroupNum();
	for (i; i < n; i++) {
		if (getShapeDraw(i) != nullptr) {
			getShapeDraw(i)->draw();
		}
	}
}

/**
 * @note Address: 0x80061370
 * @note Size: 0x170
 */
void J3DShape::simpleDrawCache() const
{
	if (sOldVcdVatCmd != mVcdVatCmd) {
		GXCallDisplayList(mVcdVatCmd, kVcdVatDLSize);
		sOldVcdVatCmd = mVcdVatCmd;
	}

	if (J3DShape::sEnvelopeFlag != 0 && !mHasPNMTXIdx) {
		mCurrentMtx.load();
	}

	// start of loadVtxArray
	J3DLoadArrayBasePtr(GX_VA_POS, j3dSys.getVtxPos());
	if (!mHasNBT) {
		J3DLoadArrayBasePtr(GX_VA_NRM, j3dSys.getVtxNrm());
	}
	J3DLoadArrayBasePtr(GX_VA_CLR0, j3dSys.getVtxCol());
	// end of loadVtxArray
	u16 i = 0;
	u32 n = getMtxGroupNum();
	for (i; i < n; i++)
		if (getShapeDraw(i) != NULL)
			getShapeDraw(i)->draw();
}
