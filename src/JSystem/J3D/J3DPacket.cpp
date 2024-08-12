#include "Dolphin/gd.h"
#include "Dolphin/gx.h"
#include "Dolphin/os.h"
#include "mem.h"
#include "JSystem/J3D/J3DDisplayListObj.h"
#include "JSystem/J3D/J3DMaterial.h"
#include "JSystem/J3D/J3DPacket.h"
#include "JSystem/J3D/J3DShape.h"
#include "JSystem/J3D/J3DTevBlock.h"
#include "JSystem/J3D/J3DTexGenBlock.h"
#include "JSystem/J3D/J3DTypes.h"
#include "JSystem/J3D/J3DTexMtx.h"
#include "JSystem/J3D/J3DModel.h"
#include "JSystem/J3D/J3DSys.h"
#include "JSystem/JKernel/JKRHeap.h"

static u32 sDifferedRegister[7] = { J3DMDF_DiffMatColor, J3DMDF_DiffLight,      J3DMDF_DiffColorReg,        J3DMDF_DiffFog,
	                                J3DMDF_DiffBlend,    J3DMDF_DiffKonstColor, J3DMDF_DiffTevStageIndirect };
static u32 sSizeOfDiffered[7]   = { 0xD, 0x15, 0x78, 0x37, 0xF, 0x13, 0x2D };

int J3DDisplayListObj::sInterruptFlag;
GDCurrentDL J3DDisplayListObj::sGDLObj;

/**
 * @note Address: 0x8005F82C
 * @note Size: 0x60
 */
J3DErrType J3DDisplayListObj::newDisplayList(u32 size)
{
	mCapacity       = ALIGN_NEXT(size, 0x20);
	mDisplayList[0] = new (0x20) u8[mCapacity];
	mDisplayList[1] = new (0x20) u8[mCapacity];
	mSize           = 0;
	return JET_Success;
}

/**
 * @note Address: 0x8005F88C
 * @note Size: 0x58
 */
J3DErrType J3DDisplayListObj::newSingleDisplayList(u32 size)
{
	mCapacity       = ALIGN_NEXT(size, 0x20);
	mDisplayList[0] = new (0x20) u8[mCapacity];
	mDisplayList[1] = mDisplayList[0];
	mSize           = 0;
	return JET_Success;
}

/**
 * @note Address: 0x8005F8E4
 * @note Size: 0x68
 */
J3DErrType J3DDisplayListObj::single_To_Double()
{
	if (mDisplayList[0] == mDisplayList[1]) {
		mDisplayList[1] = new (0x20) u8[mCapacity];
		memcpy(mDisplayList[1], mDisplayList[0], mCapacity);
		DCStoreRange(mDisplayList[1], mCapacity);
	}
	return JET_Success;
}

/**
 * @note Address: 0x8005F94C
 * @note Size: 0x20
 */
void J3DDisplayListObj::setSingleDisplayList(void* list, u32 size)
{
	mCapacity       = ALIGN_NEXT(size, 0x20);
	mDisplayList[0] = (u8*)list;
	mDisplayList[1] = mDisplayList[0];
	mSize           = size;
}

/**
 * @note Address: N/A
 * @note Size: 0x14
 */
void J3DDisplayListObj::swapBuffer()
{
	u8* oldList1    = mDisplayList[0];
	mDisplayList[0] = mDisplayList[1];
	mDisplayList[1] = oldList1;
}

/**
 * @note Address: 0x8005F96C
 * @note Size: 0x2C
 */
void J3DDisplayListObj::callDL() const { GXCallDisplayList(mDisplayList[0], mSize); }

/**
 * @note Address: 0x8005F998
 * @note Size: 0x60
 */
void J3DDisplayListObj::beginDL()
{
	swapBuffer();
	sInterruptFlag = OSDisableInterrupts();
	GDInitGDLObj(&J3DDisplayListObj::sGDLObj, mDisplayList[0], mCapacity);
	__GDCurrentDL = &J3DDisplayListObj::sGDLObj;
}

/**
 * @note Address: 0x8005F9F8
 * @note Size: 0x5C
 */
u32 J3DDisplayListObj::endDL()
{
	GDPadCurr32();
	OSRestoreInterrupts(sInterruptFlag);
	mSize = sGDLObj.data - sGDLObj.begin;
	GDFlushCurrToMem();
	__GDCurrentDL = nullptr;
	return mSize;
}

/**
 * @note Address: 0x8005FA54
 * @note Size: 0x60
 */
void J3DDisplayListObj::beginPatch() { beginDL(); }

/**
 * @note Address: 0x8005FAB4
 * @note Size: 0x3C
 */
u32 J3DDisplayListObj::endPatch()
{
	OSRestoreInterrupts(sInterruptFlag);
	__GDCurrentDL = nullptr;
	return mSize;
}

/**
 * @note Address: 0x8005FAF0
 * @note Size: 0x8
 */
bool J3DPacket::entry(J3DDrawBuffer*) { return true; }

/**
 * @note Address: 0x8005FAF8
 * @note Size: 0x20
 */
void J3DPacket::addChildPacket(J3DPacket* child)
{
	if (mChildPacket == nullptr) {
		mChildPacket = child;
	} else {
		child->mNextPacket = mChildPacket;
		mChildPacket       = child;
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x8C
 */
void J3DCallBackPacket::draw()
{
	if (mCallBack) {
		mCallBack(this, 0);
	}

	for (J3DPacket* packet = mChildPacket; packet; packet = packet->getNextPacket()) {
		packet->draw();
	}

	if (mCallBack) {
		mCallBack(this, 1);
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x38
 */
J3DDrawPacket::J3DDrawPacket()
    : mFlags(0)
    , mDisplayList(nullptr)
    , mTexMtxObj(nullptr)
{
}

/**
 * @note Address: 0x8005FB64
 * @note Size: 0x5C
 * __dt__13J3DDrawPacketFv
 */
J3DDrawPacket::~J3DDrawPacket() { }

/**
 * @note Address: 0x8005FBC0
 * @note Size: 0xA4
 * newDisplayList__13J3DDrawPacketFUl
 */
J3DErrType J3DDrawPacket::newDisplayList(u32 size)
{
	mDisplayList = new J3DDisplayListObj;
	return (mDisplayList == nullptr) ? JET_OutOfMemory : mDisplayList->newDisplayList(size);
}

/**
 * @note Address: 0x8005FC64
 * @note Size: 0x9C
 * newSingleDisplayList__13J3DDrawPacketFUl
 */
J3DErrType J3DDrawPacket::newSingleDisplayList(u32 size)
{
	mDisplayList = new J3DDisplayListObj;
	return (mDisplayList == nullptr) ? JET_OutOfMemory : mDisplayList->newSingleDisplayList(size);
}

/**
 * @note Address: 0x8005FD00
 * @note Size: 0x2C
 * draw__13J3DDrawPacketFv
 */
void J3DDrawPacket::draw() { mDisplayList->callDL(); }

/**
 * @note Address: 0x8005FD2C
 * @note Size: 0x5C
 * __ct__12J3DMatPacketFv
 */
J3DMatPacket::J3DMatPacket()
    : J3DDrawPacket()
    , mInitShapePacket(nullptr)
    , mMaterial(nullptr)
    , mDiffFlag(0xFFFFFFFF)
    , mTexture(0)
    , mMaterialAnm(0)
{
}

/**
 * @note Address: 0x8005FD88
 * @note Size: 0x6C
 * __dt__12J3DMatPacketFv
 */
J3DMatPacket::~J3DMatPacket() { }

/**
 * @note Address: 0x8005FDF4
 * @note Size: 0x20
 */
void J3DMatPacket::addShapePacket(J3DShapePacket* shapePacket)
{
	if (mShapePacket == nullptr) {
		mShapePacket = shapePacket;
	} else {
		shapePacket->mNextPacket = mShapePacket;
		mShapePacket             = shapePacket;
	}
}

/**
 * @note Address: 0x8005FE14
 * @note Size: 0x64
 */
void J3DMatPacket::beginDiff() { mInitShapePacket->mDisplayList->beginDL(); }

/**
 * @note Address: 0x8005FE78
 * @note Size: 0x60
 */
u32 J3DMatPacket::endDiff() { return mInitShapePacket->mDisplayList->endDL(); }

/**
 * @note Address: 0x8005FED8
 * @note Size: 0x24
 * isSame__12J3DMatPacketCFP12J3DMatPacket
 */
bool J3DMatPacket::isSame(J3DMatPacket* other) const { return !(mDiffFlag != other->mDiffFlag || mDiffFlag >> 31); }

/**
 * @note Address: 0x8005FEFC
 * @note Size: 0x94
 * draw__12J3DMatPacketFv
 */
void J3DMatPacket::draw()
{
	mMaterial->load();
	mDisplayList->callDL();
	J3DShapePacket* packet = getShapePacket();
	J3DShape* shape        = packet->mShape;
	shape->loadPreDrawSetting();
	for (; packet != nullptr; packet = static_cast<J3DShapePacket*>(packet->mNextPacket)) {
		J3DDisplayListObj* dl = packet->mDisplayList;
		if (dl != nullptr) {
			dl->callDL();
		}
		packet->drawFast();
	}
	J3DShape::sOldVcdVatCmd = nullptr;
}

/**
 * @note Address: 0x8005FF90
 * @note Size: 0x58
 * __ct__14J3DShapePacketFv
 */
J3DShapePacket::J3DShapePacket()
    : J3DDrawPacket()
    , mShape(nullptr)
    , mMtxBuffer(nullptr)
    , mBaseMtxPtr(nullptr)
    , mDiffFlag(0)
    , mModel(nullptr)
{
}

/**
 * @note Address: 0x8005FFE8
 * @note Size: 0x6C
 * __dt__14J3DShapePacketFv
 */
J3DShapePacket::~J3DShapePacket() { }

/**
 * @note Address: 0x80060054
 * @note Size: 0x274
 */
int J3DShapePacket::calcDifferedBufferSize(u32 flag)
{
	int size = 0;
	for (int i = 0; i < 7; i++) {
		if (flag & sDifferedRegister[i]) {
			size += sSizeOfDiffered[i];
		}
	}

	size += getDiffFlag_LightObjNum(flag) * 0x48;
	u32 uVar2 = getDiffFlag_TexGenNum(flag);
	if (uVar2 != 0) {
		u32 local_4c = mShape->getMaterial()->getTexGenNum();
		if (uVar2 > local_4c) {
			local_4c = uVar2;
		}
		if (flag & J3DMDF_DiffTexGen) {
			size += calcDifferedBufferSize_TexGenSize(local_4c);
		} else {
			size += calcDifferedBufferSize_TexMtxSize(local_4c);
		}
	}

	uVar2 = getDiffFlag_TexNoNum(flag);
	if (uVar2 != 0) {
		u8 local_58;
		if (mShape->getMaterial()->getTevStageNum() > 8) {
			local_58 = 8;
		} else {
			local_58 = mShape->getMaterial()->getTevStageNum();
		}
		u32 local_50 = local_58;
		local_50     = uVar2 > local_50 ? uVar2 : local_50;
		if ((flag & J3DMDF_DiffTexCoordScale)) {
			size += calcDifferedBufferSize_TexNoAndTexCoordScaleSize(local_50);
		} else {
			size += calcDifferedBufferSize_TexNoSize(local_50);
		}
	}

	uVar2 = getDiffFlag_TevStageNum(flag);
	if (uVar2 != 0) {
		u8 local_58;
		if (mShape->getMaterial()->getTevStageNum() > 8) {
			local_58 = 8;
		} else {
			local_58 = mShape->getMaterial()->getTevStageNum();
		}
		u32 local_50 = local_58;
		local_50     = uVar2 > local_50 ? uVar2 : local_50;
		size += calcDifferedBufferSize_TevStageSize(local_50);
		if (flag & J3DMDF_DiffTevStageIndirect) {
			size += calcDifferedBufferSize_TevStageDirectSize(local_50);
		}
	}

	return OSRoundUp32B(size);
}

/**
 * @note Address: 0x800602D8
 * @note Size: 0xBC
 */
J3DErrType J3DShapePacket::newDifferedDisplayList(u32 flag)
{
	mDiffFlag        = flag;
	u32 bufSize      = calcDifferedBufferSize(flag);
	J3DErrType error = newDisplayList(bufSize);

	return (error != JET_Success) ? error : JET_Success;
}

/**
 * @note Address: 0x80060394
 * @note Size: 0x114
 */
J3DErrType J3DShapePacket::newDifferedTexMtx(J3DTexDiffFlag flag)
{
	switch (flag) {
	case TEXDIFF_Material: {
		u32 texGenNum = mShape->getMaterial()->mTexGenBlock->getTexGenNum();
		mTexMtxObj    = new J3DTexMtxObj(texGenNum);
		if (mTexMtxObj == nullptr) {
			return JET_OutOfMemory;
		}
		break;
	}
	case TEXDIFF_Default:
		mTexMtxObj = new J3DTexMtxObj(8);
		if (mTexMtxObj == nullptr) {
			return JET_OutOfMemory;
		}
		break;
	default:
		return JET_InvalidArg;
	}
	return JET_Success;
}

/**
 * @note Address: 0x800604A8
 * @note Size: 0x1B0
 */
void J3DShapePacket::prepareDraw() const
{
	mModel->getVertexBuffer()->setArray();
	j3dSys.setModel(mModel);
	j3dSys.setShapePacket((J3DShapePacket*)this);

	J3DShapeMtx::setLODFlag(mModel->checkFlag(J3DMODEL_LevelOfDetail));

	if (mModel->checkFlag(J3DMODEL_SkinPosCpu)) {
		mShape->onFlag(J3DMODEL_SkinPosCpu);
	} else {
		mShape->offFlag(J3DMODEL_SkinPosCpu);
	}

	if (mModel->checkFlag(J3DMODEL_SkinNrmCpu) && mShape->checkFlag(J3DShape_EnableLOD) == false) {
		mShape->onFlag(J3DMODEL_SkinNrmCpu);
	} else {
		mShape->offFlag(J3DMODEL_SkinNrmCpu);
	}

	mShape->setCurrentViewNoPtr(mMtxBuffer->getCurrentViewNoPtr());
	mShape->setScaleFlagArray(mMtxBuffer->getScaleFlagArray());
	mShape->setDrawMtx(mMtxBuffer->getDrawMtxPtrPtr());

	if (!mShape->getNBTFlag()) {
		mShape->setNrmMtx(mMtxBuffer->getNrmMtxPtrPtr());
	} else {
		mShape->setNrmMtx(mMtxBuffer->getBumpMtxPtrPtr()[mShape->getBumpMtxOffset()]);
	}

	mModel->getModelData()->syncJ3DSysFlags();
}

/**
 * @note Address: 0x800604A8
 * @note Size: 0x1B0
 */
void J3DShapePacket::draw()
{
	if (!checkFlag(J3DShape_Hidden) && mShape) {
		prepareDraw();

		if (mTexMtxObj) {
			J3DMaterial* material           = mShape->getMaterial();
			J3DDifferedTexMtx::sTexGenBlock = material->getTexGenBlock();
			J3DDifferedTexMtx::sTexMtxObj   = getTexMtxObj();
		} else {
			J3DDifferedTexMtx::sTexGenBlock = nullptr;
		}

		if (mDisplayList) {
			mDisplayList->callDL();
		}

		mShape->draw();
	}
}

/**
 * @note Address: 0x80060658
 * @note Size: 0x198
 */
void J3DShapePacket::drawFast()
{
	if (!checkFlag(J3DShape_Hidden) && mShape) {
		prepareDraw();

		if (mTexMtxObj) {
			J3DMaterial* material           = mShape->getMaterial();
			J3DDifferedTexMtx::sTexGenBlock = material->getTexGenBlock();
			J3DDifferedTexMtx::sTexMtxObj   = getTexMtxObj();
		} else {
			J3DDifferedTexMtx::sTexGenBlock = nullptr;
		}

		mShape->drawFast();
	}
}
