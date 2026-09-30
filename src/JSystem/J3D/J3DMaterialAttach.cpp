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
J3DMaterialTable::J3DMaterialTable()
{
	clear();
}

/**
 * @note Address: 0x80083CA8
 * @note Size: 0x48
 * __dt
 */
J3DMaterialTable::~J3DMaterialTable()
{
}

/**
 * @note Address: N/A
 * @note Size: 0x1AC
 */
J3DErrType J3DMaterialTable::allocMatColorAnimator(J3DAnmColor* anm, J3DMatColorAnm** animator)
{
	u16 count = anm->mUpdateMaterialNum;
	*animator = new J3DMatColorAnm[count];
	if (*animator == nullptr) {
		return JET_OutOfMemory;
	}
	for (u16 i = 0; i < count; i++) {
		(*animator)[i].mIndex = i;
		(*animator)[i].mAnm   = anm;
	}
	return JET_Success;
}

/**
 * @note Address: N/A
 * @note Size: 0x1BC
 */
J3DErrType J3DMaterialTable::allocTexNoAnimator(J3DAnmTexPattern* anm, J3DTexNoAnm** animator)
{
	u16 count = anm->mUpdateMaterialNum;
	*animator = new J3DTexNoAnm[count];
	if (*animator == nullptr) {
		return JET_OutOfMemory;
	}
	for (u16 i = 0; i < count; i++) {
		(*animator)[i].mIndex = i;
		(*animator)[i].mAnm   = anm;
	}
	return JET_Success;
}

/**
 * @note Address: 0x80083D2C
 * @note Size: 0x1C4
 */
J3DErrType J3DMaterialTable::allocTexMtxAnimator(J3DAnmTextureSRTKey* p1, J3DTexMtxAnm** p2)
{
	u16 elementCount = p1->getUpdateMaterialNum();
	*p2              = new J3DTexMtxAnm[elementCount];
	// J3DTexMtxAnm* v1 = new J3DTexMtxAnm[elementCount];
	// *p2 = v1;
	if (*p2 == nullptr) {
		return JET_OutOfMemory;
	}
	initTexMtxAnms(p1, p2, elementCount);
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
 * @note Address: 0x80083F08
 * @note Size: 0x32C
 */
J3DErrType J3DMaterialTable::allocTevRegAnimator(J3DAnmTevRegKey* tevRegKey, J3DTevColorAnm** tevColorAnms, J3DTevKColorAnm** tevKColorAnms)
{
	u16 tevColorAnmCount  = tevRegKey->mCRegUpdateMaterialNum;
	u16 tevKColorAnmCount = tevRegKey->mKRegUpdateMaterialNum;
	*tevColorAnms         = new J3DTevColorAnm[tevRegKey->mCRegUpdateMaterialNum];

	if (*tevColorAnms == nullptr) {
		return JET_OutOfMemory;
	}
	initTevColorAnms(tevRegKey, tevColorAnms, tevColorAnmCount);

	*tevKColorAnms = new J3DTevKColorAnm[tevKColorAnmCount];

	if (*tevKColorAnms == nullptr) {
		return JET_OutOfMemory;
	}
	initTevKColorAnms(tevRegKey, tevKColorAnms, tevKColorAnmCount);

	return JET_Success;
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
	u32 count  = anm->getCRegUpdateMaterialNum();
	u16 kcount = anm->mKRegUpdateMaterialNum;
	bool found = false;

	for (u16 i = 0; i < count; i++) {
		u16 matID = anm->getCRegUpdateMaterialID(i);
		if (matID != 0xffff) {
			J3DMaterialAnm* matanm = getMaterialNodePointer(matID)->getMaterialAnm();
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
			J3DMaterialAnm* matanm = getMaterialNodePointer(matID)->getMaterialAnm();

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
 * @note Address: N/A
 * @note Size: 0x204
 */
J3DErrType J3DMaterialTable::createTexMtxForAnimator(J3DAnmTextureSRTKey* anm)
{
	J3DErrType result = JET_Success;
	u16 count         = anm->getUpdateMaterialNum();

	if (isLocked()) {
		return JET_LockedModelData;
	}

	for (u16 i = 0; i < count; i++) {
		u16 matID = anm->getUpdateMaterialID(i);
		if (matID != 0xffff) {
			J3DMaterial* mat       = getMaterialNodePointer(matID);
			u8 texmtxid            = anm->getUpdateTexMtxID(i);
			J3DMaterialAnm* matanm = mat->getMaterialAnm();

			if (!matanm) {
				result = JET_NoMatAnm;
				continue;
			}

			if (texmtxid != 255 && mat->mTexGenBlock->getTexMtx(texmtxid) == nullptr) {
				J3DTexMtx* mtx = new J3DTexMtx(j3dDefaultTexMtxInfo);
				result         = JET_OutOfMemory;
				mat->mTexGenBlock->setTexMtx(texmtxid, mtx);
			}
		}
	}

	return result;
}

/**
 * @note Address: 0x8008442C
 * @note Size: 0xBC
 */
J3DErrType J3DMaterialTable::entryMatColorAnimator(J3DAnmColor* anm)
{
	u16 count         = anm->mUpdateMaterialNum;
	J3DErrType result = JET_Success;

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

			matanm->setMatColorAnm(0, &newanm);
		}
	}
	return result;
}

/**
 * @note Address: 0x800844E8
 * @note Size: 0x380
 */
J3DErrType J3DMaterialTable::entryTexMtxAnimator(J3DAnmTextureSRTKey* anm)
{
	u16 count         = anm->getUpdateMaterialNum();
	J3DErrType result = createTexMtxForAnimator(anm);
	if (result != JET_Success) {
		return result;
	}

	if (isLocked()) {
		return JET_LockedModelData;
	}

	for (u16 i = 0; i < count; i++) {
		u16 matID = anm->getUpdateMaterialID(i);
		if (matID != 0xffff) {
			J3DMaterial* mat       = mMaterials[matID];
			J3DMaterialAnm* matanm = mat->getMaterialAnm();
			u8 texmtxid            = anm->getUpdateTexMtxID(i);

			if (!matanm) {
				result = JET_NoMatAnm;
				continue;
			}

			if (texmtxid != 255) {
				if (mat->mTexGenBlock->getTexCoord(texmtxid)) {
					mat->mTexGenBlock->getTexCoord(texmtxid)->setTexGenMtx(texmtxid * 3 + GX_TEXMTX0);
				}
				J3DTexMtx* mtx             = mat->mTexGenBlock->getTexMtx(texmtxid);
				mtx->mTexMtxInfo.mInfo     = (mtx->mTexMtxInfo.mInfo & 0x3f) | (anm->mTexMtxCalcType << 7);
				mtx->mTexMtxInfo.mCenter.x = anm->mSRTCenter[i].x;
				mtx->mTexMtxInfo.mCenter.y = anm->mSRTCenter[i].y;
				mtx->mTexMtxInfo.mCenter.z = anm->mSRTCenter[i].z;

				J3DTexMtxAnm newanm(anm, i, 1);

				matanm->setTexMtxAnm(texmtxid, &newanm);
			}
		}
	}

	return result;
}

/**
 * @note Address: 0x80084868
 * @note Size: 0x198
 */
J3DErrType J3DMaterialTable::entryTevRegAnimator(J3DAnmTevRegKey* anm)
{
	u32 count        = anm->getCRegUpdateMaterialNum();
	u16 kcount       = anm->mKRegUpdateMaterialNum;
	J3DErrType found = JET_Success;

	if (isLocked()) {
		return JET_LockedModelData;
	}

	for (u16 i = 0; i < count; i++) {
		u16 matID = anm->getCRegUpdateMaterialID(i);
		if (matID != 0xffff) {
			J3DMaterialAnm* matanm = mMaterials[matID]->getMaterialAnm();
			u8 index               = anm->mCRegKeyTable[i]._18[0];

			if (!matanm) {
				found = JET_NoMatAnm;
				continue;
			}

			J3DTevColorAnm newanm(anm, i, 1);

			matanm->setTevColorAnm(index, &newanm);
		}
	}

	for (u16 i = 0; i < kcount; i++) {
		u16 matID = anm->getKRegUpdateMaterialID(i);
		if (matID != 0xffff) {
			J3DMaterialAnm* matanm = mMaterials[matID]->getMaterialAnm();
			u8 index               = anm->mKRegKeyTable[i]._18[0];
			if (!matanm) {
				found = JET_NoMatAnm;
				continue;
			}

			J3DTevKColorAnm newanm(anm, i, 1);

			matanm->setTevKColorAnm(index, &newanm);
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
