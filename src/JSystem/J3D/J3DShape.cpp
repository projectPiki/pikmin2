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
		u16 i = 0;
		u32 n = getMtxGroupNum();
		for (i; i < n; i++) {
			if (getShapeMtx(i) != nullptr)
				getShapeMtx(i)->load();
			if (getShapeDraw(i) != nullptr)
				getShapeDraw(i)->draw();
		}
	} else {
		J3DFifoLoadPosMtxImm(*j3dSys.getShapePacket()->getBaseMtxPtr(), GX_PNMTX0);
		J3DFifoLoadNrmMtxImm(*j3dSys.getShapePacket()->getBaseMtxPtr(), GX_PNMTX0);
		u16 i = 0;
		u32 n = getMtxGroupNum();
		for (i; i < n; i++)
			if (getShapeDraw(i) != nullptr)
				getShapeDraw(i)->draw();
	}

	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stmw     r27, 0xc(r1)
	mr       r31, r3
	lwz      r3, 0x2c(r3)
	lwz      r0, sOldVcdVatCmd__8J3DShape@sda21(r13)
	cmplw    r0, r3
	beq      lbl_80060F14
	li       r4, 0xc0
	bl       GXCallDisplayList
	lwz      r0, 0x2c(r31)
	stw      r0, sOldVcdVatCmd__8J3DShape@sda21(r13)

	lbl_80060F14:
	lbz      r0, sEnvelopeFlag__8J3DShape@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_80060F84
	lbz      r0, 0x48(r31)
	cmplwi   r0, 0
	bne      lbl_80060F84
	li       r9, 8
	lis      r8, 0xCC008000@ha
	stb      r9, 0xCC008000@l(r8)
	li       r0, 0x30
	lwz      r3, 0x40(r31)
	li       r7, 0x40
	stb      r0, -0x8000(r8)
	li       r6, 0x10
	lwz      r10, 0x44(r31)
	li       r5, 1
	stw      r3, -0x8000(r8)
	li       r4, 0x1018
	lwz      r3, 0x40(r31)
	stb      r9, -0x8000(r8)
	lwz      r0, 0x44(r31)
	stb      r7, -0x8000(r8)
	stw      r10, -0x8000(r8)
	stb      r6, -0x8000(r8)
	sth      r5, -0x8000(r8)
	sth      r4, -0x8000(r8)
	stw      r3, -0x8000(r8)
	stw      r0, -0x8000(r8)

	lbl_80060F84:
	lwz      r4, 0xc(r31)
	lis      r3, j3dSys@ha
	lbz      r0, 0x34(r31)
	li       r6, 8
	rlwinm   r4, r4, 0x1e, 0x1d, 0x1f
	lis      r5, 0xCC008000@ha
	stw      r4, sCurrentPipeline__11J3DShapeMtx@sda21(r13)
	li       r4, 0xa0
	addi     r3, r3, j3dSys@l
	cmplwi   r0, 0
	stb      r6, 0xCC008000@l(r5)
	stb      r4, -0x8000(r5)
	lwz      r0, 0x10c(r3)
	clrlwi   r0, r0, 1
	stw      r0, -0x8000(r5)
	bne      lbl_80060FDC
	stb      r6, -0x8000(r5)
	li       r0, 0xa1
	stb      r0, -0x8000(r5)
	lwz      r0, 0x110(r3)
	clrlwi   r0, r0, 1
	stw      r0, -0x8000(r5)

	lbl_80060FDC:
	li       r0, 8
	lis      r8, 0xCC008000@ha
	stb      r0, 0xCC008000@l(r8)
	li       r0, 0xa2
	lis      r3, j3dSys@ha
	lwz      r4, 0x60(r31)
	stb      r0, -0x8000(r8)
	addi     r7, r3, j3dSys@l
	lwz      r6, 0x58(r31)
	li       r3, 0x15
	lwz      r0, 0x114(r7)
	li       r5, 0x30
	clrlwi   r0, r0, 1
	stw      r0, -0x8000(r8)
	lwz      r0, 0(r4)
	slwi     r0, r0, 2
	lwzx     r4, r6, r0
	stw      r4, 0x104(r7)
	bl       GXSetArray
	lwz      r4, 0x60(r31)
	lis      r3, j3dSys@ha
	addi     r6, r3, j3dSys@l
	lwz      r7, 0x5c(r31)
	lwz      r0, 0(r4)
	li       r3, 0x16
	li       r5, 0x24
	slwi     r0, r0, 2
	lwzx     r4, r7, r0
	stw      r4, 0x108(r6)
	bl       GXSetArray
	lwz      r3, 0xc(r31)
	lwz      r6, 0x54(r31)
	lbz      r5, 0x34(r31)
	rlwinm.  r0, r3, 0, 0x16, 0x16
	lbz      r4, 0x48(r31)
	rlwinm   r3, r3, 0, 0x10, 0x13
	stw      r6, sCurrentScaleFlag__11J3DShapeMtx@sda21(r13)
	stb      r5, sNBTFlag__11J3DShapeMtx@sda21(r13)
	stb      r4, sEnvelopeFlag__8J3DShape@sda21(r13)
	stw      r3, sTexMtxLoadType__11J3DShapeMtx@sda21(r13)
	bne      lbl_800610E8
	lbz      r0, sLODFlag__11J3DShapeMtx@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_80061090
	bl       resetMtxLoadCache__11J3DShapeMtxFv

	lbl_80061090:
	lhz      r28, 0xa(r31)
	li       r27, 0
	lwz      r29, 0x38(r31)
	lwz      r30, 0x3c(r31)
	b        lbl_800610D8

	lbl_800610A4:
	rlwinm   r31, r27, 2, 0xe, 0x1d
	lwzx     r3, r29, r31
	cmplwi   r3, 0
	beq      lbl_800610C4
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl

	lbl_800610C4:
	lwzx     r3, r30, r31
	cmplwi   r3, 0
	beq      lbl_800610D4
	bl       draw__12J3DShapeDrawCFv

	lbl_800610D4:
	addi     r27, r27, 1

	lbl_800610D8:
	clrlwi   r0, r27, 0x10
	cmplw    r0, r28
	blt      lbl_800610A4
	b        lbl_80061144

	lbl_800610E8:
	lis      r3, j3dSys@ha
	li       r4, 0
	addi     r30, r3, j3dSys@l
	lwz      r3, 0x40(r30)
	lwz      r3, 0x30(r3)
	bl       J3DFifoLoadPosMtxImm__FPA4_fUl
	lwz      r3, 0x40(r30)
	li       r4, 0
	lwz      r3, 0x30(r3)
	bl       J3DFifoLoadNrmMtxImm__FPA4_fUl
	lhz      r27, 0xa(r31)
	li       r28, 0
	lwz      r31, 0x3c(r31)
	b        lbl_80061138

	lbl_80061120:
	rlwinm   r0, r28, 2, 0xe, 0x1d
	lwzx     r3, r31, r0
	cmplwi   r3, 0
	beq      lbl_80061134
	bl       draw__12J3DShapeDrawCFv

	lbl_80061134:
	addi     r28, r28, 1

	lbl_80061138:
	clrlwi   r0, r28, 0x10
	cmplw    r0, r27
	blt      lbl_80061120

	lbl_80061144:
	lmw      r27, 0xc(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
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
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	li       r0, 0
	stw      r31, 0x1c(r1)
	mr       r31, r3
	lwz      r3, 0x2c(r3)
	stw      r30, 0x18(r1)
	cmplw    r0, r3
	stw      r29, 0x14(r1)
	stw      r0, sOldVcdVatCmd__8J3DShape@sda21(r13)
	beq      lbl_80061250
	li       r4, 0xc0
	bl       GXCallDisplayList
	lwz      r0, 0x2c(r31)
	stw      r0, sOldVcdVatCmd__8J3DShape@sda21(r13)

lbl_80061250:
	li       r12, 8
	lis      r11, 0xCC008000@ha
	stb      r12, 0xCC008000@l(r11)
	li       r0, 0x30
	lis      r3, j3dSys@ha
	lwz      r5, 0x40(r31)
	stb      r0, -0x8000(r11)
	li       r10, 0x40
	lbz      r0, 0x34(r31)
	li       r9, 0x10
	stw      r5, -0x8000(r11)
	li       r8, 1
	cmplwi   r0, 0
	lwz      r4, 0xc(r31)
	stb      r12, -0x8000(r11)
	li       r7, 0x1018
	rlwinm   r5, r4, 0x1e, 0x1d, 0x1f
	lwz      r30, 0x44(r31)
	stb      r10, -0x8000(r11)
	li       r4, 0xa0
	lwz      r6, 0x40(r31)
	addi     r3, r3, j3dSys@l
	stw      r30, -0x8000(r11)
	lwz      r0, 0x44(r31)
	stb      r9, -0x8000(r11)
	sth      r8, -0x8000(r11)
	sth      r7, -0x8000(r11)
	stw      r6, -0x8000(r11)
	stw      r0, -0x8000(r11)
	stw      r5, sCurrentPipeline__11J3DShapeMtx@sda21(r13)
	stb      r12, -0x8000(r11)
	stb      r4, -0x8000(r11)
	lwz      r0, 0x10c(r3)
	clrlwi   r0, r0, 1
	stw      r0, -0x8000(r11)
	bne      lbl_800612F8
	stb      r12, -0x8000(r11)
	li       r0, 0xa1
	stb      r0, -0x8000(r11)
	lwz      r0, 0x110(r3)
	clrlwi   r0, r0, 1
	stw      r0, -0x8000(r11)

lbl_800612F8:
	li       r0, 8
	lis      r4, 0xCC008000@ha
	stb      r0, 0xCC008000@l(r4)
	li       r0, 0xa2
	lis      r3, j3dSys@ha
	lhz      r30, 0xa(r31)
	stb      r0, -0x8000(r4)
	addi     r3, r3, j3dSys@l
	lwz      r31, 0x3c(r31)
	li       r29, 0
	lwz      r0, 0x114(r3)
	clrlwi   r0, r0, 1
	stw      r0, -0x8000(r4)
	b        lbl_80061348

lbl_80061330:
	rlwinm   r0, r29, 2, 0xe, 0x1d
	lwzx     r3, r31, r0
	cmplwi   r3, 0
	beq      lbl_80061344
	bl       draw__12J3DShapeDrawCFv

lbl_80061344:
	addi     r29, r29, 1

lbl_80061348:
	clrlwi   r0, r29, 0x10
	cmplw    r0, r30
	blt      lbl_80061330
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
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
