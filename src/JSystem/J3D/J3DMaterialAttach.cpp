#include "JSystem/J3D/J3DAnmTevRegKey.h"
#include "JSystem/J3D/J3DAnmTextureSRTKey.h"
#include "JSystem/J3D/J3DMaterialAnm.h"
#include "JSystem/J3D/J3DMaterial.h"
#include "JSystem/J3D/J3DTypes.h"
#include "JSystem/J3D/J3DTexMtx.h"

/**
 * @note Address: 0x80083C4C
 * @note Size: 0x28
 */
void J3DMaterialTable::clear()
{
	mMaterialNum       = 0;
	mUniqueMaterialNum = 0;
	mMaterials         = nullptr;
	mMaterialNames     = nullptr;
	mUniqueMaterials   = 0;
	mTextures          = nullptr;
	mTextureNames      = nullptr;
	_1C                = 0;
}

/**
 * @note Address: 0x80083C74
 * @note Size: 0x34
 * __ct
 */
J3DMaterialTable::J3DMaterialTable() { clear(); }

/**
 * @note Address: 0x80083CA8
 * @note Size: 0x48
 * __dt
 */
J3DMaterialTable::~J3DMaterialTable() { }

/**
 * @note Address: 0x80083CF0
 * @note Size: 0x18
 */
J3DMatColorAnm::J3DMatColorAnm()
    : mIndex(0)
    , mAnmFlag(1)
    , mAnm(nullptr)
{
}

/**
 * @note Address: 0x80083D08
 * @note Size: 0x24
 */
J3DTexNoAnm::J3DTexNoAnm()
    : mIndex(0)
    , mAnmFlag(1)
    , mAnm(nullptr)
{
}

/**
 * @note Address: 0x80083D2C
 * @note Size: 0x1C4
 */
J3DErrType J3DMaterialTable::allocTexMtxAnimator(J3DAnmTextureSRTKey* p1, J3DTexMtxAnm** p2)
{
	u16 elementCount = p1->mTrackNum / 3;
	*p2              = new J3DTexMtxAnm[elementCount];
	// J3DTexMtxAnm* v1 = new J3DTexMtxAnm[elementCount];
	// *p2 = v1;
	if (*p2 == nullptr) {
		return JET_OutOfMemory;
	}
	for (u16 i = 0; i < elementCount; i++) {
		(*p2)[i].mIndex = i;
		(*p2)[i].mAnm   = p1;
		// v1[i].mIndex = i;
		// v1[i].mAnm = p1;
	}
	return JET_Success;
	// const u16 elementCount = p1->_14 / 3;
	// *p2 = new J3DTexMtxAnm[elementCount];
	// u16 result;
	// if (*p2 == nullptr) {
	// 	result = 4;
	// } else {
	// 	for (u16 i = 0; i < elementCount; i++) {
	// 		(*p2)[i].mIndex = i;
	// 		(*p2)[i].mAnm = p1;
	// 	}
	// 	result = 0;
	// }
	// return result;
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	lis      r3, 0x55555556@ha
	stw      r0, 0x44(r1)
	addi     r3, r3, 0x55555556@l
	stmw     r19, 0xc(r1)
	mr       r29, r4
	mr       r30, r5
	lhz      r0, 0x14(r4)
	mulhw    r3, r3, r0
	srwi     r0, r3, 0x1f
	add      r0, r3, r0
	rlwinm   r3, r0, 3, 0xd, 0x1c
	clrlwi   r31, r0, 0x10
	addi     r3, r3, 0x10
	bl       __nwa__FUl
	lis      r4, __ct__12J3DTexMtxAnmFv@ha
	lis      r5, __dt__12J3DTexMtxAnmFv@ha
	addi     r4, r4, __ct__12J3DTexMtxAnmFv@l
	mr       r7, r31
	addi     r5, r5, __dt__12J3DTexMtxAnmFv@l
	li       r6, 8
	bl       __construct_new_array
	stw      r3, 0(r30)
	lwz      r0, 0(r30)
	cmplwi   r0, 0
	bne      lbl_80083DA0
	li       r3, 4
	b        lbl_80083EDC

lbl_80083DA0:
	cmplwi   r31, 0
	li       r3, 0
	ble      lbl_80083ED8
	cmplwi   r31, 8
	addi     r0, r31, -8
	ble      lbl_80083ECC
	clrlwi   r0, r0, 0x10
	b        lbl_80083EA0

lbl_80083DC0:
	lwz      r4, 0(r30)
	rlwinm   r7, r3, 3, 0xd, 0x1c
	addi     r21, r7, 0x10
	addi     r9, r3, 1
	sthx     r3, r4, r7
	addi     r24, r7, 0x18
	addi     r27, r7, 0x20
	addi     r4, r7, 4
	lwz      r5, 0(r30)
	addi     r6, r7, 8
	addi     r11, r7, 0x28
	addi     r8, r7, 0x30
	stwx     r29, r5, r4
	addi     r5, r7, 0x38
	addi     r4, r6, 4
	addi     r19, r3, 2
	lwz      r7, 0(r30)
	addi     r23, r21, 4
	addi     r22, r3, 3
	addi     r26, r24, 4
	sthx     r9, r7, r6
	addi     r25, r3, 4
	addi     r12, r27, 4
	addi     r28, r3, 5
	lwz      r7, 0(r30)
	addi     r9, r11, 4
	addi     r10, r3, 6
	addi     r6, r8, 4
	stwx     r29, r7, r4
	addi     r7, r3, 7
	addi     r4, r5, 4
	addi     r3, r3, 8
	lwz      r20, 0(r30)
	sthx     r19, r20, r21
	lwz      r21, 0(r30)
	stwx     r29, r21, r23
	lwz      r23, 0(r30)
	sthx     r22, r23, r24
	lwz      r24, 0(r30)
	stwx     r29, r24, r26
	lwz      r26, 0(r30)
	sthx     r25, r26, r27
	lwz      r27, 0(r30)
	stwx     r29, r27, r12
	lwz      r12, 0(r30)
	sthx     r28, r12, r11
	lwz      r11, 0(r30)
	stwx     r29, r11, r9
	lwz      r9, 0(r30)
	sthx     r10, r9, r8
	lwz      r8, 0(r30)
	stwx     r29, r8, r6
	lwz      r6, 0(r30)
	sthx     r7, r6, r5
	lwz      r5, 0(r30)
	stwx     r29, r5, r4

lbl_80083EA0:
	clrlwi   r4, r3, 0x10
	cmplw    r4, r0
	blt      lbl_80083DC0
	b        lbl_80083ECC

lbl_80083EB0:
	lwz      r4, 0(r30)
	rlwinm   r5, r3, 3, 0xd, 0x1c
	addi     r0, r5, 4
	sthx     r3, r4, r5
	addi     r3, r3, 1
	lwz      r4, 0(r30)
	stwx     r29, r4, r0

lbl_80083ECC:
	clrlwi   r0, r3, 0x10
	cmplw    r0, r31
	blt      lbl_80083EB0

lbl_80083ED8:
	li       r3, 0

lbl_80083EDC:
	lmw      r19, 0xc(r1)
	lwz      r0, 0x44(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/**
 * @note Address: 0x80083EF0
 * @note Size: 0x18
 */
J3DTexMtxAnm::J3DTexMtxAnm()
    : mIndex(0)
    , mAnmFlag(1)
    , mAnm(nullptr)
{
	/*
	li       r4, 0
	li       r0, 1
	sth      r4, 0(r3)
	sth      r0, 2(r3)
	stw      r4, 4(r3)
	blr
	*/
}

// // s32 initTevColorAnms(J3DAnmTevRegKey* key, J3DTevColorAnm* anms, u16 count) {
// // 	if (anms == nullptr) {
// // 		return 4;
// // 	}
// // 	for (u16 i = 0; i < count; i++) {
// // 		(anms)[i].mIndex = i;
// // 		(anms)[i].mKey = key;
// // 	}
// // 	return 0;
// // }
// s32 initTevColorAnms(J3DAnmTevRegKey* key, J3DTevColorAnm** anms, u16 count) {
// 	if (*anms == nullptr) {
// 		return 4;
// 	}
// 	for (u16 i = 0; i < count; i++) {
// 		(*anms)[i].mIndex = i;
// 		(*anms)[i].mKey = key;
// 	}
// 	return 0;
// }

// // s32 initTevKColorAnms(J3DAnmTevRegKey* key, J3DTevKColorAnm* anms, u16 count) {
// // 	if (anms == nullptr) {
// // 		return 4;
// // 	}
// // 	for (u16 i = 0; i < count; i++) {
// // 		(anms)[i].mIndex = i;
// // 		(anms)[i].mKey = key;
// // 	}
// // 	return 0;
// // }
// s32 initTevKColorAnms(J3DAnmTevRegKey* key, J3DTevKColorAnm** anms, u16 count) {
// 	if (*anms == nullptr) {
// 		return 4;
// 	}
// 	for (u16 i = 0; i < count; i++) {
// 		(*anms)[i].mIndex = i;
// 		(*anms)[i].mKey = key;
// 	}
// 	return 0;
// }

/**
 * @note Address: 0x80083F08
 * @note Size: 0x32C
 */
J3DErrType J3DMaterialTable::allocTevRegAnimator(J3DAnmTevRegKey* tevRegKey, J3DTevColorAnm** tevColorAnms, J3DTevKColorAnm** tevKColorAnms)
{
	u16 tevColorAnmCount  = tevRegKey->mCRegUpdateMaterialNum;
	u16 tevKColorAnmCount = tevRegKey->mKRegUpdateMaterialNum;
	*tevColorAnms         = new J3DTevColorAnm[tevColorAnmCount];

	// s32 result = initTevColorAnms(tevRegKey, *tevColorAnms, tevColorAnmCount);

	// s32 result = initTevColorAnms(tevRegKey, tevColorAnms, tevColorAnmCount);

	s32 result;
	if (*tevColorAnms == nullptr) {
		return JET_OutOfMemory;
	}
	for (u16 i = 0; i < tevColorAnmCount; i++) {
		(*tevColorAnms)[i].mIndex = i;
		(*tevColorAnms)[i].mAnm   = tevRegKey;
	}

	*tevKColorAnms = new J3DTevKColorAnm[tevKColorAnmCount];

	// result = initTevKColorAnms(tevRegKey, *tevKColorAnms, tevKColorAnmCount);

	// result = initTevKColorAnms(tevRegKey, tevKColorAnms, tevKColorAnmCount);

	if (*tevKColorAnms == nullptr) {
		return JET_OutOfMemory;
	}
	for (u16 i = 0; i < tevKColorAnmCount; i++) {
		(*tevKColorAnms)[i].mIndex = i;
		(*tevKColorAnms)[i].mAnm   = tevRegKey;
	}

	return JET_Success;
	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  mflr      r0
	  stw       r0, 0x54(r1)
	  stmw      r17, 0x14(r1)
	  mr        r27, r4
	  mr        r28, r5
	  mr        r29, r6
	  lhz       r31, 0xC(r4)
	  lhz       r30, 0xE(r4)
	  rlwinm    r3,r31,3,13,28
	  addi      r3, r3, 0x10
	  bl        -0x5FF88
	  lis       r4, 0x8008
	  lis       r5, 0x8007
	  addi      r4, r4, 0x424C
	  mr        r7, r31
	  subi      r5, r5, 0x5ADC
	  li        r6, 0x8
	  bl        0x3DAA0
	  stw       r3, 0x0(r28)
	  lwz       r0, 0x0(r28)
	  cmplwi    r0, 0
	  bne-      .loc_0x64
	  li        r3, 0x4
	  b         .loc_0x318

	.loc_0x64:
	  cmplwi    r31, 0
	  li        r3, 0
	  ble-      .loc_0x19C
	  cmplwi    r31, 0x8
	  subi      r0, r31, 0x8
	  ble-      .loc_0x190
	  rlwinm    r0,r0,0,16,31
	  b         .loc_0x164

	.loc_0x84:
	  lwz       r4, 0x0(r28)
	  rlwinm    r7,r3,3,13,28
	  addi      r26, r7, 0x10
	  addi      r9, r3, 0x1
	  sthx      r3, r4, r7
	  addi      r23, r7, 0x18
	  addi      r20, r7, 0x20
	  addi      r4, r7, 0x4
	  lwz       r5, 0x0(r28)
	  addi      r6, r7, 0x8
	  addi      r11, r7, 0x28
	  addi      r8, r7, 0x30
	  stwx      r27, r5, r4
	  addi      r5, r7, 0x38
	  addi      r4, r6, 0x4
	  addi      r17, r3, 0x2
	  lwz       r7, 0x0(r28)
	  addi      r24, r26, 0x4
	  addi      r25, r3, 0x3
	  addi      r21, r23, 0x4
	  sthx      r9, r7, r6
	  addi      r22, r3, 0x4
	  addi      r12, r20, 0x4
	  addi      r19, r3, 0x5
	  lwz       r7, 0x0(r28)
	  addi      r9, r11, 0x4
	  addi      r10, r3, 0x6
	  addi      r6, r8, 0x4
	  stwx      r27, r7, r4
	  addi      r7, r3, 0x7
	  addi      r4, r5, 0x4
	  addi      r3, r3, 0x8
	  lwz       r18, 0x0(r28)
	  sthx      r17, r18, r26
	  lwz       r26, 0x0(r28)
	  stwx      r27, r26, r24
	  lwz       r24, 0x0(r28)
	  sthx      r25, r24, r23
	  lwz       r23, 0x0(r28)
	  stwx      r27, r23, r21
	  lwz       r21, 0x0(r28)
	  sthx      r22, r21, r20
	  lwz       r20, 0x0(r28)
	  stwx      r27, r20, r12
	  lwz       r12, 0x0(r28)
	  sthx      r19, r12, r11
	  lwz       r11, 0x0(r28)
	  stwx      r27, r11, r9
	  lwz       r9, 0x0(r28)
	  sthx      r10, r9, r8
	  lwz       r8, 0x0(r28)
	  stwx      r27, r8, r6
	  lwz       r6, 0x0(r28)
	  sthx      r7, r6, r5
	  lwz       r5, 0x0(r28)
	  stwx      r27, r5, r4

	.loc_0x164:
	  rlwinm    r4,r3,0,16,31
	  cmplw     r4, r0
	  blt+      .loc_0x84
	  b         .loc_0x190

	.loc_0x174:
	  lwz       r4, 0x0(r28)
	  rlwinm    r5,r3,3,13,28
	  addi      r0, r5, 0x4
	  sthx      r3, r4, r5
	  addi      r3, r3, 0x1
	  lwz       r4, 0x0(r28)
	  stwx      r27, r4, r0

	.loc_0x190:
	  rlwinm    r0,r3,0,16,31
	  cmplw     r0, r31
	  blt+      .loc_0x174

	.loc_0x19C:
	  rlwinm    r3,r30,3,13,28
	  addi      r3, r3, 0x10
	  bl        -0x60100
	  lis       r4, 0x8008
	  lis       r5, 0x8007
	  addi      r4, r4, 0x4234
	  mr        r7, r30
	  subi      r5, r5, 0x5AA0
	  li        r6, 0x8
	  bl        0x3D928
	  stw       r3, 0x0(r29)
	  lwz       r0, 0x0(r29)
	  cmplwi    r0, 0
	  bne-      .loc_0x1DC
	  li        r3, 0x4
	  b         .loc_0x318

	.loc_0x1DC:
	  cmplwi    r30, 0
	  li        r3, 0
	  ble-      .loc_0x314
	  cmplwi    r30, 0x8
	  subi      r0, r30, 0x8
	  ble-      .loc_0x308
	  rlwinm    r0,r0,0,16,31
	  b         .loc_0x2DC

	.loc_0x1FC:
	  lwz       r4, 0x0(r29)
	  rlwinm    r7,r3,3,13,28
	  addi      r21, r7, 0x10
	  addi      r9, r3, 0x1
	  sthx      r3, r4, r7
	  addi      r24, r7, 0x18
	  addi      r31, r7, 0x20
	  addi      r4, r7, 0x4
	  lwz       r5, 0x0(r29)
	  addi      r6, r7, 0x8
	  addi      r11, r7, 0x28
	  addi      r8, r7, 0x30
	  stwx      r27, r5, r4
	  addi      r5, r7, 0x38
	  addi      r4, r6, 0x4
	  addi      r19, r3, 0x2
	  lwz       r7, 0x0(r29)
	  addi      r23, r21, 0x4
	  addi      r22, r3, 0x3
	  addi      r26, r24, 0x4
	  sthx      r9, r7, r6
	  addi      r25, r3, 0x4
	  addi      r12, r31, 0x4
	  addi      r28, r3, 0x5
	  lwz       r7, 0x0(r29)
	  addi      r9, r11, 0x4
	  addi      r10, r3, 0x6
	  addi      r6, r8, 0x4
	  stwx      r27, r7, r4
	  addi      r7, r3, 0x7
	  addi      r4, r5, 0x4
	  addi      r3, r3, 0x8
	  lwz       r20, 0x0(r29)
	  sthx      r19, r20, r21
	  lwz       r21, 0x0(r29)
	  stwx      r27, r21, r23
	  lwz       r23, 0x0(r29)
	  sthx      r22, r23, r24
	  lwz       r24, 0x0(r29)
	  stwx      r27, r24, r26
	  lwz       r26, 0x0(r29)
	  sthx      r25, r26, r31
	  lwz       r31, 0x0(r29)
	  stwx      r27, r31, r12
	  lwz       r12, 0x0(r29)
	  sthx      r28, r12, r11
	  lwz       r11, 0x0(r29)
	  stwx      r27, r11, r9
	  lwz       r9, 0x0(r29)
	  sthx      r10, r9, r8
	  lwz       r8, 0x0(r29)
	  stwx      r27, r8, r6
	  lwz       r6, 0x0(r29)
	  sthx      r7, r6, r5
	  lwz       r5, 0x0(r29)
	  stwx      r27, r5, r4

	.loc_0x2DC:
	  rlwinm    r4,r3,0,16,31
	  cmplw     r4, r0
	  blt+      .loc_0x1FC
	  b         .loc_0x308

	.loc_0x2EC:
	  lwz       r4, 0x0(r29)
	  rlwinm    r5,r3,3,13,28
	  addi      r0, r5, 0x4
	  sthx      r3, r4, r5
	  addi      r3, r3, 0x1
	  lwz       r4, 0x0(r29)
	  stwx      r27, r4, r0

	.loc_0x308:
	  rlwinm    r0,r3,0,16,31
	  cmplw     r0, r30
	  blt+      .loc_0x2EC

	.loc_0x314:
	  li        r3, 0

	.loc_0x318:
	  lmw       r17, 0x14(r1)
	  lwz       r0, 0x54(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr
	*/
}

/**
 * @note Address: 0x80084234
 * @note Size: 0x18
 */
J3DTevKColorAnm::J3DTevKColorAnm()
    : mIndex(0)
    , mAnmFlag(1)
    , mAnm(nullptr)
{
	/*
	li       r4, 0
	li       r0, 1
	sth      r4, 0(r3)
	sth      r0, 2(r3)
	stw      r4, 4(r3)
	blr
	*/
}

/**
 * @note Address: 0x8008424C
 * @note Size: 0x18
 */
J3DTevColorAnm::J3DTevColorAnm()
    : mIndex(0)
    , mAnmFlag(1)
    , mAnm(nullptr)
{
	/*
	li       r4, 0
	li       r0, 1
	sth      r4, 0(r3)
	sth      r0, 2(r3)
	stw      r4, 4(r3)
	blr
	*/
}

/**
 * @note Address: 0x80084264
 * @note Size: 0xAC
 */
bool J3DMaterialTable::removeTexMtxAnimator(J3DAnmTextureSRTKey* anm)
{
	u16 count  = anm->getUpdateMaterialNum();
	bool found = false;
	for (u16 i = 0; i < count; i++) {
		u16 matID = anm->mUpdateMaterialID[i];
		if (matID != 0xffff) {
			J3DMaterialAnm* matanm = mMaterials[matID]->getMaterialAnm();
			u8 id                  = anm->mUpdateTexMtxID[i];

			if (!matanm) {
				found = true;
				continue;
			}

			if (id != 0xff) {
				matanm->mTexMtxAnmList[id].mAnmFlag = 0;
			}
		}
	}
	return found;
}

/**
 * @note Address: 0x80084310
 * @note Size: 0x11C
 */
bool J3DMaterialTable::removeTevRegAnimator(J3DAnmTevRegKey* anm)
{
	u16 count  = anm->getCRegUpdateMaterialNum();
	bool found = false;
	u16 kcount = anm->getKRegUpdateMaterialNum();

	for (u16 i = 0; i < count; i++) {
		u16 matID = anm->getCRegUpdateMaterialID(i);
		if (matID != 0xffff) {
			J3DMaterialAnm* matanm = mMaterials[matID]->getMaterialAnm();
			u8 id                  = anm->mCRegKeyTable[i]._18[0];

			if (!matanm) {
				found = true;
				continue;
			}
			matanm->mTevColAnmList[id].mAnmFlag = 0;
		}
	}

	for (u16 i = 0; i < kcount; i++) {
		u16 matID = anm->getKRegUpdateMaterialID(i);
		if (matID != 0xffff) {
			J3DMaterialAnm* matanm = mMaterials[matID]->getMaterialAnm();

			u8 id = anm->mKRegKeyTable[i]._18[0];
			if (!matanm) {
				found = true;
				continue;
			}
			matanm->mTevKColAnmList[id].mAnmFlag = 0;
		}
	}
	return found;
	/*
	lhz      r9, 0xc(r4)
	li       r5, 0
	lhz      r0, 0xe(r4)
	li       r11, 0
	b        lbl_80084394

lbl_80084324:
	lwz      r7, 0x20(r4)
	rlwinm   r6, r11, 1, 0xf, 0x1e
	clrlwi   r10, r11, 0x10
	lhzx     r6, r7, r6
	cmplwi   r6, 0xffff
	beq      lbl_80084390
	lwz      r8, 8(r3)
	rlwinm   r7, r6, 2, 0xe, 0x1d
	lis      r6, 0xc000
	lwzx     r7, r8, r7
	lwz      r8, 0x3c(r7)
	cmplw    r8, r6
	bge      lbl_8008435C
	b        lbl_80084360

lbl_8008435C:
	li       r8, 0

lbl_80084360:
	mulli    r6, r10, 0x1c
	lwz      r7, 0x48(r4)
	cmplwi   r8, 0
	addi     r6, r6, 0x18
	lbzx     r6, r7, r6
	bne      lbl_80084380
	li       r5, 1
	b        lbl_80084390

lbl_80084380:
	rlwinm   r6, r6, 3, 0x15, 0x1c
	li       r7, 0
	addi     r6, r6, 0xb6
	sthx     r7, r8, r6

lbl_80084390:
	addi     r11, r11, 1

lbl_80084394:
	clrlwi   r6, r11, 0x10
	cmplw    r6, r9
	blt      lbl_80084324
	li       r10, 0
	b        lbl_80084418

lbl_800843A8:
	lwz      r7, 0x34(r4)
	rlwinm   r6, r10, 1, 0xf, 0x1e
	clrlwi   r9, r10, 0x10
	lhzx     r6, r7, r6
	cmplwi   r6, 0xffff
	beq      lbl_80084414
	lwz      r8, 8(r3)
	rlwinm   r7, r6, 2, 0xe, 0x1d
	lis      r6, 0xc000
	lwzx     r7, r8, r7
	lwz      r8, 0x3c(r7)
	cmplw    r8, r6
	bge      lbl_800843E0
	b        lbl_800843E4

lbl_800843E0:
	li       r8, 0

lbl_800843E4:
	mulli    r6, r9, 0x1c
	lwz      r7, 0x4c(r4)
	cmplwi   r8, 0
	addi     r6, r6, 0x18
	lbzx     r6, r7, r6
	bne      lbl_80084404
	li       r5, 1
	b        lbl_80084414

lbl_80084404:
	rlwinm   r6, r6, 3, 0x15, 0x1c
	li       r7, 0
	addi     r6, r6, 0xd6
	sthx     r7, r8, r6

lbl_80084414:
	addi     r10, r10, 1

lbl_80084418:
	clrlwi   r6, r10, 0x10
	cmplw    r6, r0
	blt      lbl_800843A8
	mr       r3, r5
	blr
	*/
}

/**
 * @note Address: 0x8008442C
 * @note Size: 0xBC
 */
J3DErrType J3DMaterialTable::entryMatColorAnimator(J3DAnmColor* anm)
{
	J3DErrType result = JET_Success;
	const u16 count   = anm->getUpdateMaterialNum();

	if (_1C == 1) {
		return JET_LockedModelData;
	}

	for (u16 i = 0; i < count; i++) {
		u16 matID = anm->getUpdateMaterialID(i);
		if (matID != 0xffff) {
			J3DMaterialAnm* matanm = mMaterials[matID]->getMaterialAnm();

			if (!matanm) {
				result = JET_NoMatAnm;
				continue;
			}

			J3DMatColorAnm newanm(anm, i, 1);

			if (newanm.getIndex() == 0) {
				matanm->mMatColAnmList[0].mAnmFlag = 0;
			} else {
				matanm->mMatColAnmList[0] = newanm;
			}
		}
	}
	return result;
	/*
	stwu     r1, -0x10(r1)
	li       r8, 0
	lhz      r0, 0x1c(r3)
	lhz      r7, 0x14(r4)
	cmplwi   r0, 1
	bne      lbl_8008444C
	li       r3, 2
	b        lbl_800844E0

lbl_8008444C:
	li       r9, 0
	b        lbl_800844D0

lbl_80084454:
	lwz      r5, 0x18(r4)
	rlwinm   r0, r9, 1, 0xf, 0x1e
	lhzx     r0, r5, r0
	cmplwi   r0, 0xffff
	beq      lbl_800844CC
	lwz      r6, 8(r3)
	rlwinm   r5, r0, 2, 0xe, 0x1d
	lis      r0, 0xc000
	lwzx     r5, r6, r5
	lwz      r6, 0x3c(r5)
	cmplw    r6, r0
	bge      lbl_80084488
	b        lbl_8008448C

lbl_80084488:
	li       r6, 0

lbl_8008448C:
	cmplwi   r6, 0
	bne      lbl_8008449C
	li       r8, 1
	b        lbl_800844CC

lbl_8008449C:
	li       r5, 1
	addic.   r0, r1, 8
	sth      r9, 8(r1)
	sth      r5, 0xa(r1)
	stw      r4, 0xc(r1)
	bne      lbl_800844C0
	li       r0, 0
	sth      r0, 6(r6)
	b        lbl_800844CC

lbl_800844C0:
	stw      r4, 8(r6)
	sth      r9, 4(r6)
	sth      r5, 6(r6)

lbl_800844CC:
	addi     r9, r9, 1

lbl_800844D0:
	clrlwi   r0, r9, 0x10
	cmplw    r0, r7
	blt      lbl_80084454
	mr       r3, r8

lbl_800844E0:
	addi     r1, r1, 0x10
	blr
	*/
}

/**
 * @note Address: 0x800844E8
 * @note Size: 0x380
 */
J3DErrType J3DMaterialTable::entryTexMtxAnimator(J3DAnmTextureSRTKey* anm)
{
	J3DErrType result = JET_Success;
	const u16 count   = anm->getUpdateMaterialNum();

	if (_1C == 1) {
		return JET_LockedModelData;
	}

	for (u16 i = 0; i < count; i++) {
		u16 matID = anm->getUpdateMaterialID(i);
		if (matID != 0xffff) {
			J3DMaterial* mat       = mMaterials[matID];
			u8 texmtxid            = anm->mUpdateTexMtxID[i];
			J3DMaterialAnm* matanm = mat->getMaterialAnm();

			if (!matanm) {
				result = JET_NoMatAnm;
				continue;
			}

			if (texmtxid != 255 && mat->mTexGenBlock->getTexMtx(texmtxid) == nullptr) {
				J3DTexMtx* mtx = new J3DTexMtx;
				result         = JET_OutOfMemory;
				mat->mTexGenBlock->setTexMtx(texmtxid, mtx);
			}
		}
	}

	if (result == JET_Success) {
		return result;
	}

	if (_1C == 1) {
		return JET_LockedModelData;
	}

	for (u16 i = 0; i < count; i++) {
		u16 matID = anm->getUpdateMaterialID(i);
		if (matID != 0xffff) {
			J3DMaterial* mat       = mMaterials[matID];
			J3DMaterialAnm* matanm = mat->getMaterialAnm();
			u8 texmtxid            = anm->mUpdateTexMtxID[i];

			if (!matanm) {
				result = JET_NoMatAnm;
				continue;
			}

			if (texmtxid != 255) {
				if (mat->mTexGenBlock->getTexCoord(texmtxid)) {
					mat->mTexGenBlock->getTexCoord(texmtxid)->mTexGenMtx = texmtxid + 3 + GX_TEXMTX0;
				}
				J3DTexMtx* mtx = mat->mTexGenBlock->getTexMtx(texmtxid);
				mtx->mTexMtxInfo.mInfo |= anm->mTexMtxCalcType << 7;
				mtx->mTexMtxInfo.mCenter = anm->mSRTCenter[texmtxid];

				J3DTexMtxAnm newanm(anm, i, 1);

				if (newanm.mIndex == 0) {
					matanm->mTexMtxAnmList[texmtxid].mAnmFlag = 0;
				} else {
					matanm->mTexMtxAnmList[texmtxid] = newanm;
				}
			}
		}
	}

	return result;
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stmw     r23, 0x1c(r1)
	mr       r31, r4
	lis      r4, 0x55555556@ha
	mr       r30, r3
	addi     r4, r4, 0x55555556@l
	li       r27, 0
	lhz      r0, 0x14(r31)
	mulhw    r3, r4, r0
	lhz      r0, 0x1c(r30)
	cmplwi   r0, 1
	srwi     r0, r3, 0x1f
	add      r0, r3, r0
	clrlwi   r26, r0, 0x10
	bne      lbl_80084534
	li       r27, 2
	b        lbl_800846D4

lbl_80084534:
	lis      r3, j3dDefaultTexMtxInfo@ha
	mr       r28, r27
	addi     r29, r3, j3dDefaultTexMtxInfo@l
	b        lbl_800846C8

lbl_80084544:
	lwz      r3, 0x2c(r31)
	rlwinm   r0, r28, 1, 0xf, 0x1e
	clrlwi   r6, r28, 0x10
	lhzx     r0, r3, r0
	cmplwi   r0, 0xffff
	beq      lbl_800846C4
	lwz      r5, 8(r30)
	rlwinm   r4, r0, 2, 0xe, 0x1d
	lwz      r3, 0x28(r31)
	lis      r0, 0xc000
	lwzx     r25, r5, r4
	lbzx     r24, r3, r6
	lwz      r3, 0x3c(r25)
	cmplw    r3, r0
	bge      lbl_80084584
	b        lbl_80084588

lbl_80084584:
	li       r3, 0

lbl_80084588:
	cmplwi   r3, 0
	bne      lbl_80084598
	li       r27, 1
	b        lbl_800846C4

lbl_80084598:
	cmplwi   r24, 0xff
	beq      lbl_800846C4
	lwz      r3, 0x28(r25)
	mr       r4, r24
	lwz      r12, 0(r3)
	lwz      r12, 0x50(r12)
	mtctr    r12
	bctrl
	cmplwi   r3, 0
	bne      lbl_800846C4
	li       r3, 0x94
	bl       __nw__FUl
	or.      r5, r3, r3
	beq      lbl_800846A8
	lis      r3, j3dDefaultTexMtxInfo@ha
	addi     r3, r3, j3dDefaultTexMtxInfo@l
	lfs      f0, 0x24(r3)
	stfs     f0, 0x24(r5)
	lfs      f0, 0x28(r3)
	stfs     f0, 0x28(r5)
	lfs      f0, 0x2c(r3)
	stfs     f0, 0x2c(r5)
	lfs      f0, 0x30(r3)
	stfs     f0, 0x30(r5)
	lfs      f0, 0x34(r3)
	stfs     f0, 0x34(r5)
	lfs      f0, 0x38(r3)
	stfs     f0, 0x38(r5)
	lfs      f0, 0x3c(r3)
	stfs     f0, 0x3c(r5)
	lfs      f0, 0x40(r3)
	stfs     f0, 0x40(r5)
	lfs      f0, 0x44(r3)
	stfs     f0, 0x44(r5)
	lfs      f0, 0x48(r3)
	stfs     f0, 0x48(r5)
	lfs      f0, 0x4c(r3)
	stfs     f0, 0x4c(r5)
	lfs      f0, 0x50(r3)
	stfs     f0, 0x50(r5)
	lfs      f0, 0x54(r3)
	stfs     f0, 0x54(r5)
	lfs      f0, 0x58(r3)
	stfs     f0, 0x58(r5)
	lfs      f0, 0x5c(r3)
	stfs     f0, 0x5c(r5)
	lfs      f0, 0x60(r3)
	stfs     f0, 0x60(r5)
	lfs      f0, 4(r29)
	stfs     f0, 4(r5)
	lfs      f0, 8(r29)
	stfs     f0, 8(r5)
	lfs      f0, 0xc(r29)
	stfs     f0, 0xc(r5)
	lbz      r0, 0(r3)
	stb      r0, 0(r5)
	lbz      r0, 1(r29)
	stb      r0, 1(r5)
	lfs      f0, 0x10(r29)
	stfs     f0, 0x10(r5)
	lfs      f0, 0x14(r29)
	stfs     f0, 0x14(r5)
	lha      r0, 0x18(r29)
	sth      r0, 0x18(r5)
	lfs      f0, 0x1c(r29)
	stfs     f0, 0x1c(r5)
	lfs      f0, 0x20(r29)
	stfs     f0, 0x20(r5)

lbl_800846A8:
	lwz      r3, 0x28(r25)
	mr       r4, r24
	li       r27, 4
	lwz      r12, 0(r3)
	lwz      r12, 0x4c(r12)
	mtctr    r12
	bctrl

lbl_800846C4:
	addi     r28, r28, 1

lbl_800846C8:
	clrlwi   r0, r28, 0x10
	cmplw    r0, r26
	blt      lbl_80084544

lbl_800846D4:
	cmpwi    r27, 0
	mr       r28, r27
	beq      lbl_800846E8
	mr       r3, r27
	b        lbl_80084854

lbl_800846E8:
	lhz      r0, 0x1c(r30)
	cmplwi   r0, 1
	bne      lbl_800846FC
	li       r3, 2
	b        lbl_80084854

lbl_800846FC:
	li       r29, 0
	b        lbl_80084844

lbl_80084704:
	lwz      r3, 0x2c(r31)
	rlwinm   r0, r29, 1, 0xf, 0x1e
	clrlwi   r25, r29, 0x10
	lhzx     r0, r3, r0
	cmplwi   r0, 0xffff
	beq      lbl_80084840
	lwz      r4, 8(r30)
	rlwinm   r3, r0, 2, 0xe, 0x1d
	lis      r0, 0xc000
	lwzx     r23, r4, r3
	lwz      r24, 0x3c(r23)
	cmplw    r24, r0
	bge      lbl_8008473C
	b        lbl_80084740

lbl_8008473C:
	li       r24, 0

lbl_80084740:
	lwz      r3, 0x28(r31)
	cmplwi   r24, 0
	lbzx     r27, r3, r25
	bne      lbl_80084758
	li       r28, 1
	b        lbl_80084840

lbl_80084758:
	cmplwi   r27, 0xff
	beq      lbl_80084840
	lwz      r3, 0x28(r23)
	mr       r4, r27
	lwz      r12, 0(r3)
	lwz      r12, 0x48(r12)
	mtctr    r12
	bctrl
	cmplwi   r3, 0
	beq      lbl_800847A4
	lwz      r3, 0x28(r23)
	mr       r4, r27
	lwz      r12, 0(r3)
	lwz      r12, 0x48(r12)
	mtctr    r12
	bctrl
	mulli    r4, r27, 3
	addi     r0, r4, 0x1e
	stb      r0, 2(r3)

lbl_800847A4:
	lwz      r3, 0x28(r23)
	mr       r4, r27
	lwz      r12, 0(r3)
	lwz      r12, 0x50(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x78(r31)
	mulli    r8, r25, 0xc
	lbz      r5, 1(r3)
	li       r4, 1
	slwi     r0, r0, 7
	sth      r29, 8(r1)
	rlwimi   r0, r5, 0, 0x1a, 0x1f
	stb      r0, 1(r3)
	addi     r6, r8, 4
	addi     r5, r8, 8
	addic.   r0, r1, 8
	lwz      r7, 0x40(r31)
	sth      r4, 0xa(r1)
	lfsx     f0, r7, r8
	stw      r31, 0xc(r1)
	stfs     f0, 4(r3)
	lwz      r7, 0x40(r31)
	lfsx     f0, r7, r6
	stfs     f0, 8(r3)
	lwz      r6, 0x40(r31)
	lfsx     f0, r6, r5
	stfs     f0, 0xc(r3)
	bne      lbl_8008482C
	rlwinm   r3, r27, 3, 0x15, 0x1c
	li       r4, 0
	addi     r0, r3, 0x16
	sthx     r4, r24, r0
	b        lbl_80084840

lbl_8008482C:
	rlwinm   r0, r27, 3, 0x15, 0x1c
	add      r3, r24, r0
	stw      r31, 0x18(r3)
	sth      r29, 0x14(r3)
	sth      r4, 0x16(r3)

lbl_80084840:
	addi     r29, r29, 1

lbl_80084844:
	clrlwi   r0, r29, 0x10
	cmplw    r0, r26
	blt      lbl_80084704
	mr       r3, r28

lbl_80084854:
	lmw      r23, 0x1c(r1)
	lwz      r0, 0x44(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/**
 * @note Address: 0x80084868
 * @note Size: 0x198
 */
J3DErrType J3DMaterialTable::entryTevRegAnimator(J3DAnmTevRegKey* anm)
{
	u16 count        = anm->getCRegUpdateMaterialNum();
	J3DErrType found = JET_Success;
	u16 kcount       = anm->getKRegUpdateMaterialNum();

	if (_1C == 1) {
		return JET_LockedModelData;
	}

	for (u16 i = 0; i < count; i++) {
		u16 matID = anm->getCRegUpdateMaterialID(i);
		if (matID != 0xffff) {
			J3DMaterialAnm* matanm = mMaterials[matID]->getMaterialAnm();
			u8 index               = anm->getCRegUpdateMaterialID(i);

			if (!matanm) {
				found = JET_NoMatAnm;
				continue;
			}

			J3DTevColorAnm newanm(anm, i, 1);

			if (newanm.mIndex == 0) {
				matanm->mTevColAnmList[index].mAnmFlag = 0;
			} else {
				matanm->mTevColAnmList[index] = newanm;
			}
		}
	}

	for (u16 i = 0; i < kcount; i++) {
		u16 matID = anm->getKRegUpdateMaterialID(i);
		if (matID != 0xffff) {
			J3DMaterialAnm* matanm = mMaterials[matID]->getMaterialAnm();
			u8 index               = anm->getKRegUpdateMaterialID(i);
			if (!matanm) {
				found = JET_NoMatAnm;
				continue;
			}

			J3DTevKColorAnm newanm(anm, i, 1);

			if (newanm.mIndex == 0) {
				matanm->mTevKColAnmList[index].mAnmFlag = 0;
			} else {
				matanm->mTevKColAnmList[index] = newanm;
			}
		}
	}
	return found;
	/*
	stwu     r1, -0x20(r1)
	li       r5, 0
	lhz      r0, 0x1c(r3)
	lhz      r9, 0xc(r4)
	cmplwi   r0, 1
	lhz      r0, 0xe(r4)
	bne      lbl_8008488C
	li       r3, 2
	b        lbl_800849F8

lbl_8008488C:
	li       r11, 0
	b        lbl_80084934

lbl_80084894:
	lwz      r7, 0x20(r4)
	rlwinm   r6, r11, 1, 0xf, 0x1e
	clrlwi   r10, r11, 0x10
	lhzx     r6, r7, r6
	cmplwi   r6, 0xffff
	beq      lbl_80084930
	lwz      r8, 8(r3)
	rlwinm   r7, r6, 2, 0xe, 0x1d
	lis      r6, 0xc000
	lwzx     r7, r8, r7
	lwz      r8, 0x3c(r7)
	cmplw    r8, r6
	bge      lbl_800848CC
	b        lbl_800848D0

lbl_800848CC:
	li       r8, 0

lbl_800848D0:
	mulli    r6, r10, 0x1c
	lwz      r7, 0x48(r4)
	cmplwi   r8, 0
	addi     r6, r6, 0x18
	lbzx     r10, r7, r6
	bne      lbl_800848F0
	li       r5, 1
	b        lbl_80084930

lbl_800848F0:
	li       r7, 1
	addic.   r6, r1, 0x10
	sth      r11, 0x10(r1)
	sth      r7, 0x12(r1)
	stw      r4, 0x14(r1)
	bne      lbl_8008491C
	rlwinm   r6, r10, 3, 0x15, 0x1c
	li       r7, 0
	addi     r6, r6, 0xb6
	sthx     r7, r8, r6
	b        lbl_80084930

lbl_8008491C:
	rlwinm   r6, r10, 3, 0x15, 0x1c
	add      r6, r8, r6
	stw      r4, 0xb8(r6)
	sth      r11, 0xb4(r6)
	sth      r7, 0xb6(r6)

lbl_80084930:
	addi     r11, r11, 1

lbl_80084934:
	clrlwi   r6, r11, 0x10
	cmplw    r6, r9
	blt      lbl_80084894
	li       r10, 0
	b        lbl_800849E8

lbl_80084948:
	lwz      r7, 0x34(r4)
	rlwinm   r6, r10, 1, 0xf, 0x1e
	clrlwi   r9, r10, 0x10
	lhzx     r6, r7, r6
	cmplwi   r6, 0xffff
	beq      lbl_800849E4
	lwz      r8, 8(r3)
	rlwinm   r7, r6, 2, 0xe, 0x1d
	lis      r6, 0xc000
	lwzx     r7, r8, r7
	lwz      r8, 0x3c(r7)
	cmplw    r8, r6
	bge      lbl_80084980
	b        lbl_80084984

lbl_80084980:
	li       r8, 0

lbl_80084984:
	mulli    r6, r9, 0x1c
	lwz      r7, 0x4c(r4)
	cmplwi   r8, 0
	addi     r6, r6, 0x18
	lbzx     r9, r7, r6
	bne      lbl_800849A4
	li       r5, 1
	b        lbl_800849E4

lbl_800849A4:
	li       r7, 1
	addic.   r6, r1, 8
	sth      r10, 8(r1)
	sth      r7, 0xa(r1)
	stw      r4, 0xc(r1)
	bne      lbl_800849D0
	rlwinm   r6, r9, 3, 0x15, 0x1c
	li       r7, 0
	addi     r6, r6, 0xd6
	sthx     r7, r8, r6
	b        lbl_800849E4

lbl_800849D0:
	rlwinm   r6, r9, 3, 0x15, 0x1c
	add      r6, r8, r6
	stw      r4, 0xd8(r6)
	sth      r10, 0xd4(r6)
	sth      r7, 0xd6(r6)

lbl_800849E4:
	addi     r10, r10, 1

lbl_800849E8:
	clrlwi   r6, r10, 0x10
	cmplw    r6, r0
	blt      lbl_80084948
	mr       r3, r5

lbl_800849F8:
	addi     r1, r1, 0x20
	blr
	*/
}
