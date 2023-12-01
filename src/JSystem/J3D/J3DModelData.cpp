#include "JSystem/J3D/J3DDisplayListObj.h"
#include "JSystem/J3D/J3DMaterial.h"
#include "JSystem/J3D/J3DModel.h"
#include "JSystem/J3D/J3DSys.h"
#include "JSystem/J3D/J3DTevBlock.h"
#include "JSystem/J3D/J3DTypes.h"

/*
 * --INFO--
 * Address:	80083794
 * Size:	000018
 */
void J3DModelData::clear()
{
	mBmd              = nullptr;
	mModelLoaderFlags = 0;
	mBumpFlag         = 0;
	mBillboardFlag    = 0;
}

/*
 * --INFO--
 * Address:	800837AC
 * Size:	000080
 */
J3DModelData::J3DModelData()
    : mJointTree()
    , mMaterialTable()
    , mShapeTable()
    , mVertexData()
{
	clear();
}

/*
 * --INFO--
 * Address:	800838D8
 * Size:	000094
 */
void J3DModelData::newSharedDisplayList(u32 flags)
{
	const u16 count = mMaterialTable.getMaterialNum();
	for (u16 i = 0; i < count; i++) {
		if (flags & J3DMLF_19) {
			mMaterialTable.getMaterialNodePointer(i)->newSingleSharedDisplayList(mMaterialTable.getMaterialNodePointer(i)->countDLSize());
		} else {
			mMaterialTable.getMaterialNodePointer(i)->newSharedDisplayList(mMaterialTable.getMaterialNodePointer(i)->countDLSize());
		}
	}
}

/*
 * --INFO--
 * Address:	8008396C
 * Size:	0000C4
 */
void J3DModelData::indexToPtr()
{
	j3dSys.mTexture           = getMaterialTable().getTexture();
	static int sInterruptFlag = OSDisableInterrupts();
	OSDisableScheduler();

	u32 count = getMaterialNum();
	for (u16 i = 0; i < count; i++) {
		J3DMaterial* mat = getMaterialNodePointer(i);

		GDCurrentDL currentDL;
		GDInitGDLObj(&currentDL, mat->getSharedDisplayListObj()->getDisplayList(0), mat->getSharedDisplayListObj()->getDisplayListSize());
		__GDSetCurrent(&currentDL);
		mat->getTevBlock()->indexToPtr();
	}

	__GDSetCurrent(nullptr);
	OSEnableScheduler();
	OSRestoreInterrupts(sInterruptFlag);
}

/*
 * --INFO--
 * Address:	80083A30
 * Size:	000080
 */
void J3DModelData::makeSharedDL()
{
	j3dSys.mTexture = mMaterialTable.mTextures;
	u16 count       = mMaterialTable.mMaterialNum;
	for (u16 i = 0; i < count; i++) {
		J3DMaterial* material = mMaterialTable.mMaterials[i];
		material->makeSharedDisplayList();
	}
}

/*
 * --INFO--
 * Address:	80083AB0
 * Size:	0000C8
 */
void J3DModelData::simpleCalcMaterial(u16 jointIndex, Mtx mtx)
{
	syncJ3DSysFlags();
	for (J3DMaterial* material = mJointTree.getJointNodePointer(jointIndex)->mMaterial; material != nullptr;
	     material              = material->getNext()) {
		if (material->getMaterialAnm()) {
			material->getMaterialAnm()->calc(material);
		}
		material->calc(mtx);
	}
}

/*
 * --INFO--
 * Address:	80083B78
 * Size:	00003C
 */
void J3DModelData::syncJ3DSysFlags() const
{
	if (mModelLoaderFlags & J3DMLF_06) {
		j3dSys.mFlags |= 0x40000000;
	} else {
		j3dSys.mFlags &= ~0x40000000;
	}
}
