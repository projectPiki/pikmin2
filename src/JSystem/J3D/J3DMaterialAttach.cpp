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
}
