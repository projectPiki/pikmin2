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
#include "types.h"

/*
    Generated from dpostproc

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global sDifferedRegister
    sDifferedRegister:
        .4byte 0x00000001
        .4byte 0x00000002
        .4byte 0x01000000
        .4byte 0x10000000
        .4byte 0x20000000
        .4byte 0x02000000
        .4byte 0x08000000
    .global sSizeOfDiffered
    sSizeOfDiffered:
        .4byte 0x0000000D
        .4byte 0x00000015
        .4byte 0x00000078
        .4byte 0x00000037
        .4byte 0x0000000F
        .4byte 0x00000013
        .4byte 0x0000002D
    .global __vt__14J3DShapePacket
    __vt__14J3DShapePacket:
        .4byte 0
        .4byte 0
        .4byte entry__9J3DPacketFP13J3DDrawBuffer
        .4byte draw__14J3DShapePacketFv
        .4byte __dt__14J3DShapePacketFv
    .global __vt__12J3DMatPacket
    __vt__12J3DMatPacket:
        .4byte 0
        .4byte 0
        .4byte entry__12J3DMatPacketFP13J3DDrawBuffer
        .4byte draw__12J3DMatPacketFv
        .4byte __dt__12J3DMatPacketFv
    .global __vt__13J3DDrawPacket
    __vt__13J3DDrawPacket:
        .4byte 0
        .4byte 0
        .4byte entry__9J3DPacketFP13J3DDrawBuffer
        .4byte draw__13J3DDrawPacketFv
        .4byte __dt__13J3DDrawPacketFv
    .global __vt__9J3DPacket
    __vt__9J3DPacket:
        .4byte 0
        .4byte 0
        .4byte entry__9J3DPacketFP13J3DDrawBuffer
        .4byte draw__9J3DPacketFv
        .4byte __dt__9J3DPacketFv

    .section .bss  # 0x804EFC20 - 0x8051467C
    .global sGDLObj__17J3DDisplayListObj
    sGDLObj__17J3DDisplayListObj:
        .skip 0x10

    .section .sbss # 0x80514D80 - 0x80516360
    .global sInterruptFlag__17J3DDisplayListObj
    sInterruptFlag__17J3DDisplayListObj:
        .skip 0x8
*/

const u32 sDifferedRegister[7] = { 1, 2, 0x1000000, 0x10000000, 0x20000000, 0x2000000, 0x8000000 };
const u32 sSizeOfDiffered[7]   = { 0xD, 0x15, 0x78, 0x37, 0xF, 0x13, 0x2D };

int J3DDisplayListObj::sInterruptFlag;

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
	GDInitGDLObj(&sGDLObj, mDisplayList[0], mCapacity);
	__GDCurrentDL = &sGDLObj;
}

/**
 * @note Address: 0x8005F9F8
 * @note Size: 0x5C
 */
u32 J3DDisplayListObj::endDL()
{
	GDPadCurr32();
	OSRestoreInterrupts(sInterruptFlag);
	mSize = sGDLObj.pDisplayListData - sGDLObj.begin;
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
 * @note Address: 0x8005FB18
 * @note Size: 0x4
 */
void J3DPacket::draw() { }

/**
 * @note Address: 0x8005FB1C
 * @note Size: 0x48
 * __dt__9J3DPacketFv
 */
J3DPacket::~J3DPacket() { }

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
		if (flag & 0x1000) {
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
		if ((flag & 0x4000000)) {
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
		if (flag & 0x8000000) {
			size += calcDifferedBufferSize_TevStageDirectSize(local_50);
		}
	}

	return (size + 0x1f) & ~0x1f;
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r6, sDifferedRegister@ha
	lis      r5, sSizeOfDiffered@ha
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	li       r31, 0
	stw      r30, 0x18(r1)
	mr       r30, r4
	stw      r29, 0x14(r1)
	mr       r29, r3
	addi     r3, r5, sSizeOfDiffered@l
	stw      r28, 0x10(r1)
	lwzu     r0, sDifferedRegister@l(r6)
	and.     r0, r30, r0
	beq      lbl_80060098
	lwz      r31, 0(r3)

lbl_80060098:
	addi     r4, r6, 4
	addi     r3, r3, 4
	lwz      r0, 4(r6)
	and.     r0, r30, r0
	beq      lbl_800600B4
	lwz      r0, 0(r3)
	add      r31, r31, r0

lbl_800600B4:
	lwzu     r0, 4(r4)
	addi     r3, r3, 4
	and.     r0, r30, r0
	beq      lbl_800600CC
	lwz      r0, 0(r3)
	add      r31, r31, r0

lbl_800600CC:
	lwzu     r0, 4(r4)
	addi     r3, r3, 4
	and.     r0, r30, r0
	beq      lbl_800600E4
	lwz      r0, 0(r3)
	add      r31, r31, r0

lbl_800600E4:
	lwzu     r0, 4(r4)
	addi     r3, r3, 4
	and.     r0, r30, r0
	beq      lbl_800600FC
	lwz      r0, 0(r3)
	add      r31, r31, r0

lbl_800600FC:
	lwz      r0, 4(r4)
	addi     r3, r3, 4
	addi     r4, r4, 4
	and.     r0, r30, r0
	beq      lbl_80060118
	lwz      r0, 0(r3)
	add      r31, r31, r0

lbl_80060118:
	lwz      r0, 4(r4)
	addi     r3, r3, 4
	and.     r0, r30, r0
	beq      lbl_80060130
	lwz      r0, 0(r3)
	add      r31, r31, r0

lbl_80060130:
	rlwinm   r0, r30, 0x1c, 0x1c, 0x1f
	rlwinm.  r28, r30, 0x18, 0x1c, 0x1f
	mulli    r0, r0, 0x48
	add      r31, r31, r0
	beq      lbl_8006018C
	lwz      r3, 0x28(r29)
	lwz      r3, 4(r3)
	lwz      r3, 0x28(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl
	cmplw    r28, r3
	ble      lbl_8006016C
	mr       r3, r28

lbl_8006016C:
	rlwinm.  r0, r30, 0, 0x13, 0x13
	beq      lbl_80060184
	mulli    r0, r3, 0x3d
	add      r31, r0, r31
	addi     r31, r31, 0xa
	b        lbl_8006018C

lbl_80060184:
	mulli    r0, r3, 0x35
	add      r31, r31, r0

lbl_8006018C:
	rlwinm.  r28, r30, 0x10, 0x1c, 0x1f
	beq      lbl_80060220
	lwz      r3, 0x28(r29)
	lwz      r3, 4(r3)
	lwz      r3, 0x2c(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x98(r12)
	mtctr    r12
	bctrl
	clrlwi   r0, r3, 0x18
	cmplwi   r0, 8
	ble      lbl_800601C4
	li       r3, 8
	b        lbl_800601E0

lbl_800601C4:
	lwz      r3, 0x28(r29)
	lwz      r3, 4(r3)
	lwz      r3, 0x2c(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x98(r12)
	mtctr    r12
	bctrl

lbl_800601E0:
	clrlwi   r0, r3, 0x18
	cmplw    r28, r0
	mr       r3, r0
	ble      lbl_800601F4
	mr       r3, r28

lbl_800601F4:
	rlwinm.  r0, r30, 0, 5, 5
	beq      lbl_80060218
	addi     r0, r3, 1
	srwi     r0, r0, 1
	mulli    r3, r3, 0x37
	mulli    r0, r0, 0x37
	add      r3, r3, r0
	add      r31, r31, r3
	b        lbl_80060220

lbl_80060218:
	mulli    r0, r3, 0x37
	add      r31, r31, r0

lbl_80060220:
	rlwinm.  r28, r30, 0xc, 0x1c, 0x1f
	beq      lbl_800602A0
	lwz      r3, 0x28(r29)
	lwz      r3, 4(r3)
	lwz      r3, 0x2c(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x98(r12)
	mtctr    r12
	bctrl
	clrlwi   r0, r3, 0x18
	cmplwi   r0, 8
	ble      lbl_80060258
	li       r3, 8
	b        lbl_80060274

lbl_80060258:
	lwz      r3, 0x28(r29)
	lwz      r3, 4(r3)
	lwz      r3, 0x2c(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x98(r12)
	mtctr    r12
	bctrl

lbl_80060274:
	clrlwi   r0, r3, 0x18
	cmplw    r28, r0
	mr       r4, r0
	ble      lbl_80060288
	mr       r4, r28

lbl_80060288:
	mulli    r3, r4, 0xa
	rlwinm.  r0, r30, 0, 4, 4
	add      r31, r31, r3
	beq      lbl_800602A0
	mulli    r0, r4, 5
	add      r31, r31, r0

lbl_800602A0:
	addi     r0, r31, 0x1f
	lwz      r31, 0x1c(r1)
	rlwinm   r3, r0, 0, 0, 0x1a
	lwz      r0, 0x24(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r28, 0x10(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
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
	if (error != JET_Success) {
		error = JET_Success;
	}
	return error;
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r3
	stw      r4, 0x34(r3)
	bl       calcDifferedBufferSize__14J3DShapePacketFUl
	mr       r31, r3
	li       r3, 0x10
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_80060320
	li       r0, 0
	stw      r0, 0(r3)
	stw      r0, 4(r3)
	stw      r0, 8(r3)
	stw      r0, 0xc(r3)

lbl_80060320:
	stw      r3, 0x20(r30)
	lwz      r30, 0x20(r30)
	cmplwi   r30, 0
	bne      lbl_80060338
	li       r0, 4
	b        lbl_8006036C

lbl_80060338:
	addi     r0, r31, 0x1f
	li       r4, 0x20
	rlwinm   r0, r0, 0, 0, 0x1a
	stw      r0, 0xc(r30)
	lwz      r3, 0xc(r30)
	bl       __nwa__FUli
	stw      r3, 0(r30)
	li       r4, 0x20
	lwz      r3, 0xc(r30)
	bl       __nwa__FUli
	stw      r3, 4(r30)
	li       r0, 0
	stw      r0, 8(r30)

lbl_8006036C:
	cmpwi    r0, 0
	li       r3, 0
	beq      lbl_8006037C
	mr       r3, r0

lbl_8006037C:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/**
 * @note Address: 0x80060394
 * @note Size: 0x114
 */
J3DErrType J3DShapePacket::newDifferedTexMtx(J3DTexDiffFlag flag)
{
	switch (flag) {
	case TexDiff_0: {
		u32 texGenNum = mShape->getMaterial()->mTexGenBlock->getTexGenNum();
		mTexMtxObj    = new J3DTexMtxObj(texGenNum);
		if (mTexMtxObj == nullptr) {
			return JET_OutOfMemory;
		}
		break;
	}
	case TexDiff_1:
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
void J3DShapePacket::draw()
{
	if (!checkFlag(J3DShape_unk0x10) && mShape) {

		// preprareDraw?
		mModel->getVertexBuffer()->setArray();
		j3dSys.setModel(mModel);
		j3dSys.setShapePacket(this);

		J3DShapeMtx::setLODFlag(mModel->checkFlag(J3DMODEL_Unk5));

		if (mModel->checkFlag(J3DMODEL_SkinPosCpu)) {
			mShape->onFlag(J3DMODEL_SkinPosCpu);
		} else {
			mShape->offFlag(J3DMODEL_SkinPosCpu);
		}

		if (mModel->checkFlag(J3DMODEL_SkinNrmCpu) && mShape->checkFlag(J3DShape_EnableLOD) == false) {
			mShape->onFlag(J3DMODEL_SkinNrmCpu);
		} else {
			mModel->offFlag(J3DMODEL_SkinNrmCpu);
		}

		J3DMtxBuffer* buffer = mMtxBuffer;
		mShape->setCurrentViewNoPtr(buffer->getCurrentViewNoPtr());
		mShape->setScaleFlagArray(buffer->getScaleFlagArray());
		mShape->setDrawMtx(buffer->getDrawMtxPtrPtr());

		if (!mShape->getNBTFlag()) {
			mShape->setNrmMtx(buffer->getNrmMtxPtrPtr());
		} else {
			mShape->setNrmMtx(buffer->getBumpMtxPtrPtr()[mShape->getBumpMtxOffset()]);
		}

		mModel->getModelData()->syncJ3DSysFlags();
		// end of prepareDraw

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
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r0, 0x10(r3)
	rlwinm.  r0, r0, 0, 0x1b, 0x1b
	bne      lbl_80060644
	lwz      r0, 0x28(r31)
	cmplwi   r0, 0
	beq      lbl_80060644
	lwz      r3, 0x38(r31)
	addi     r3, r3, 0x88
	bl       setArray__15J3DVertexBufferCFv
	lis      r3, j3dSys@ha
	lwz      r4, 0x38(r31)
	addi     r3, r3, j3dSys@l
	stw      r4, 0x38(r3)
	stw      r31, 0x40(r3)
	lwz      r0, 8(r4)
	rlwinm   r0, r0, 0x1c, 0x1f, 0x1f
	stb      r0, sLODFlag__11J3DShapeMtx@sda21(r13)
	lwz      r3, 0x38(r31)
	lwz      r0, 8(r3)
	rlwinm.  r0, r0, 0, 0x1d, 0x1d
	beq      lbl_80060524
	lwz      r3, 0x28(r31)
	lwz      r0, 0xc(r3)
	ori      r0, r0, 4
	stw      r0, 0xc(r3)
	b        lbl_80060534

	lbl_80060524:
	lwz      r3, 0x28(r31)
	lwz      r0, 0xc(r3)
	rlwinm   r0, r0, 0, 0x1e, 0x1c
	stw      r0, 0xc(r3)

	lbl_80060534:
	lwz      r3, 0x38(r31)
	lwz      r0, 8(r3)
	rlwinm.  r0, r0, 0, 0x1c, 0x1c
	beq      lbl_80060564
	lwz      r3, 0x28(r31)
	lwz      r0, 0xc(r3)
	rlwinm.  r0, r0, 0x18, 0x1f, 0x1f
	bne      lbl_80060564
	lwz      r0, 0xc(r3)
	ori      r0, r0, 8
	stw      r0, 0xc(r3)
	b        lbl_80060574

	lbl_80060564:
	lwz      r3, 0x28(r31)
	lwz      r0, 0xc(r3)
	rlwinm   r0, r0, 0, 0x1d, 0x1b
	stw      r0, 0xc(r3)

	lbl_80060574:
	lwz      r4, 0x2c(r31)
	lwz      r3, 0x28(r31)
	addi     r0, r4, 0x30
	stw      r0, 0x60(r3)
	lwz      r4, 0x2c(r31)
	lwz      r3, 0x28(r31)
	lwz      r0, 4(r4)
	stw      r0, 0x54(r3)
	lwz      r4, 0x2c(r31)
	lwz      r3, 0x28(r31)
	lwz      r0, 0x18(r4)
	stw      r0, 0x58(r3)
	lwz      r4, 0x28(r31)
	lbz      r0, 0x34(r4)
	cmplwi   r0, 0
	bne      lbl_800605C4
	lwz      r3, 0x2c(r31)
	lwz      r0, 0x20(r3)
	stw      r0, 0x5c(r4)
	b        lbl_800605DC

	lbl_800605C4:
	lwz      r3, 0x2c(r31)
	lwz      r0, 0x64(r4)
	lwz      r3, 0x28(r3)
	slwi     r0, r0, 2
	lwzx     r0, r3, r0
	stw      r0, 0x5c(r4)

	lbl_800605DC:
	lwz      r3, 0x38(r31)
	lwz      r3, 4(r3)
	bl       syncJ3DSysFlags__12J3DModelDataCFv
	lwz      r0, 0x24(r31)
	cmplwi   r0, 0
	beq      lbl_80060610
	lwz      r3, 0x28(r31)
	lwz      r3, 4(r3)
	lwz      r0, 0x28(r3)
	stw      r0, sTexGenBlock__17J3DDifferedTexMtx@sda21(r13)
	lwz      r0, 0x24(r31)
	stw      r0, sTexMtxObj__17J3DDifferedTexMtx@sda21(r13)
	b        lbl_80060618

	lbl_80060610:
	li       r0, 0
	stw      r0, sTexGenBlock__17J3DDifferedTexMtx@sda21(r13)

	lbl_80060618:
	lwz      r4, 0x20(r31)
	cmplwi   r4, 0
	beq      lbl_80060630
	lwz      r3, 0(r4)
	lwz      r4, 8(r4)
	bl       GXCallDisplayList

	lbl_80060630:
	lwz      r3, 0x28(r31)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl

	lbl_80060644:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/**
 * @note Address: 0x80060658
 * @note Size: 0x198
 */
void J3DShapePacket::drawFast()
{
	if (!checkFlag(J3DShape_IsHidden) && mShape) {

		// preprareDraw?
		mModel->getVertexBuffer()->setArray();
		j3dSys.setModel(mModel);
		j3dSys.setShapePacket(this);

		J3DShapeMtx::setLODFlag(mModel->checkFlag(J3DMODEL_Unk5));

		if (mModel->checkFlag(J3DMODEL_SkinPosCpu)) {
			mShape->onFlag(J3DMODEL_SkinPosCpu);
		} else {
			mShape->offFlag(J3DMODEL_SkinPosCpu);
		}

		if (mModel->checkFlag(J3DMODEL_SkinNrmCpu) && mShape->checkFlag(J3DShape_EnableLOD) == false) {
			mShape->onFlag(J3DMODEL_SkinNrmCpu);
		} else {
			mModel->offFlag(J3DMODEL_SkinNrmCpu);
		}

		J3DMtxBuffer* buffer = mMtxBuffer;
		mShape->setCurrentViewNoPtr(buffer->getCurrentViewNoPtr());
		mShape->setScaleFlagArray(buffer->getScaleFlagArray());
		mShape->setDrawMtx(buffer->getDrawMtxPtrPtr());

		if (!mShape->getNBTFlag()) {
			mShape->setNrmMtx(buffer->getNrmMtxPtrPtr());
		} else {
			mShape->setNrmMtx(buffer->getBumpMtxPtrPtr()[mShape->getBumpMtxOffset()]);
		}

		mModel->getModelData()->syncJ3DSysFlags();
		// end of prepareDraw

		if (mTexMtxObj) {
			J3DMaterial* material           = mShape->getMaterial();
			J3DDifferedTexMtx::sTexGenBlock = material->getTexGenBlock();
			J3DDifferedTexMtx::sTexMtxObj   = getTexMtxObj();
		} else {
			J3DDifferedTexMtx::sTexGenBlock = nullptr;
		}

		mShape->drawFast();
	}
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r0, 0x10(r3)
	rlwinm.  r0, r0, 0, 0x1b, 0x1b
	bne      lbl_800607DC
	lwz      r0, 0x28(r31)
	cmplwi   r0, 0
	beq      lbl_800607DC
	lwz      r3, 0x38(r31)
	addi     r3, r3, 0x88
	bl       setArray__15J3DVertexBufferCFv
	lis      r3, j3dSys@ha
	lwz      r4, 0x38(r31)
	addi     r3, r3, j3dSys@l
	stw      r4, 0x38(r3)
	stw      r31, 0x40(r3)
	lwz      r0, 8(r4)
	rlwinm   r0, r0, 0x1c, 0x1f, 0x1f
	stb      r0, sLODFlag__11J3DShapeMtx@sda21(r13)
	lwz      r3, 0x38(r31)
	lwz      r0, 8(r3)
	rlwinm.  r0, r0, 0, 0x1d, 0x1d
	beq      lbl_800606D4
	lwz      r3, 0x28(r31)
	lwz      r0, 0xc(r3)
	ori      r0, r0, 4
	stw      r0, 0xc(r3)
	b        lbl_800606E4

	lbl_800606D4:
	lwz      r3, 0x28(r31)
	lwz      r0, 0xc(r3)
	rlwinm   r0, r0, 0, 0x1e, 0x1c
	stw      r0, 0xc(r3)

	lbl_800606E4:
	lwz      r3, 0x38(r31)
	lwz      r0, 8(r3)
	rlwinm.  r0, r0, 0, 0x1c, 0x1c
	beq      lbl_80060714
	lwz      r3, 0x28(r31)
	lwz      r0, 0xc(r3)
	rlwinm.  r0, r0, 0x18, 0x1f, 0x1f
	bne      lbl_80060714
	lwz      r0, 0xc(r3)
	ori      r0, r0, 8
	stw      r0, 0xc(r3)
	b        lbl_80060724

	lbl_80060714:
	lwz      r3, 0x28(r31)
	lwz      r0, 0xc(r3)
	rlwinm   r0, r0, 0, 0x1d, 0x1b
	stw      r0, 0xc(r3)

	lbl_80060724:
	lwz      r4, 0x2c(r31)
	lwz      r3, 0x28(r31)
	addi     r0, r4, 0x30
	stw      r0, 0x60(r3)
	lwz      r4, 0x2c(r31)
	lwz      r3, 0x28(r31)
	lwz      r0, 4(r4)
	stw      r0, 0x54(r3)
	lwz      r4, 0x2c(r31)
	lwz      r3, 0x28(r31)
	lwz      r0, 0x18(r4)
	stw      r0, 0x58(r3)
	lwz      r4, 0x28(r31)
	lbz      r0, 0x34(r4)
	cmplwi   r0, 0
	bne      lbl_80060774
	lwz      r3, 0x2c(r31)
	lwz      r0, 0x20(r3)
	stw      r0, 0x5c(r4)
	b        lbl_8006078C

	lbl_80060774:
	lwz      r3, 0x2c(r31)
	lwz      r0, 0x64(r4)
	lwz      r3, 0x28(r3)
	slwi     r0, r0, 2
	lwzx     r0, r3, r0
	stw      r0, 0x5c(r4)

	lbl_8006078C:
	lwz      r3, 0x38(r31)
	lwz      r3, 4(r3)
	bl       syncJ3DSysFlags__12J3DModelDataCFv
	lwz      r0, 0x24(r31)
	cmplwi   r0, 0
	beq      lbl_800607C0
	lwz      r3, 0x28(r31)
	lwz      r3, 4(r3)
	lwz      r0, 0x28(r3)
	stw      r0, sTexGenBlock__17J3DDifferedTexMtx@sda21(r13)
	lwz      r0, 0x24(r31)
	stw      r0, sTexMtxObj__17J3DDifferedTexMtx@sda21(r13)
	b        lbl_800607C8

	lbl_800607C0:
	li       r0, 0
	stw      r0, sTexGenBlock__17J3DDifferedTexMtx@sda21(r13)

	lbl_800607C8:
	lwz      r3, 0x28(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl

	lbl_800607DC:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}
