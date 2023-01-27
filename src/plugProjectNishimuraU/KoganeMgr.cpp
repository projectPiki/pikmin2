#include "Game/Entities/Kogane.h"
#include "Game/generalEnemyMgr.h"
#include "JSystem/JUtility/JUTNameTab.h"

namespace Game {
namespace Kogane {

/*
 * --INFO--
 * Address:	8025D898
 * Size:	000050
 */
Mgr::Mgr(int objLimit, u8 modelType)
    : EnemyMgrBase(objLimit, modelType)
{
	mName = "コガネマネージャ"; // kogane manager
}

/*
 * --INFO--
 * Address:	8025D8E8
 * Size:	0000E8
 */
void Mgr::loadModelData()
{
	EnemyTypeID::EEnemyTypeID ids[] = { EnemyTypeID::EnemyID_Kogane, EnemyTypeID::EnemyID_Wealthy, EnemyTypeID::EnemyID_Fart };
	int id_count                    = sizeof(ids) / sizeof(EnemyTypeID::EEnemyTypeID);

	for (int i = 0; i < id_count; i++) {
		EnemyMgrBase* mgr = generalEnemyMgr->getEnemyMgr(ids[i]);
		if (mgr) {
			J3DModelData* storedModelData = mgr->getJ3DModelData();

			if (storedModelData) {
				mModelData = storedModelData;
				return;
			}
		}
	}

	EnemyMgrBase::loadModelData();
	J3DShape* shape;
	for (u16 j = 0; j < mModelData->getShapeNum(); j++) {
		shape         = mModelData->mShapeTable.mItems[j];
		shape->mFlags = (shape->mFlags & (~0xF000)) | 0x2000;
	}
}

/*
 * --INFO--
 * Address:	8025D9D0
 * Size:	0000A0
 */
void Mgr::loadAnimData()
{
	EnemyTypeID::EEnemyTypeID ids[] = { EnemyTypeID::EnemyID_Kogane, EnemyTypeID::EnemyID_Wealthy, EnemyTypeID::EnemyID_Fart };
	int id_count                    = sizeof(ids) / sizeof(EnemyTypeID::EEnemyTypeID);

	for (int i = 0; i < id_count; i++) {
		EnemyMgrBase* mgr = generalEnemyMgr->getEnemyMgr(ids[i]);
		if (mgr) {
			SysShape::AnimMgr* storedAnimMgr = mgr->mAnimMgr;
			if (storedAnimMgr) {
				mAnimMgr = storedAnimMgr;
				return;
			}
		}
	}

	EnemyMgrBase::loadAnimData();
}

/*
 * --INFO--
 * Address:	8025DA70
 * Size:	000130
 */
SysShape::Model* Mgr::createModel()
{
	SysShape::Model* model = new SysShape::Model(mModelData, 0x80000, mModelType);
	P2ASSERTLINE(148, model);
	for (u16 i = 0; i < mModelData->getMaterialNum(); i++) {
		const char* name = mModelData->mMaterialTable.mMaterialNames->getName(i);
		if (!strcmp(name, "karada")) {
			model->mJ3dModel->mMatPackets[(u16)i].mShapePacket->newDifferedDisplayList(0x05020000);
		}
	}

	// why is this not inlined here but IS inlined in the other mgrs SMH.
	Matrixf mtx;
	PSMTXIdentity(mtx.mMatrix.mtxView);
	PSMTXCopy(mtx.mMatrix.mtxView, j3dSys.mViewMtx);
	J3DModel* j3dModel = model->mJ3dModel;
	j3dModel->calc();
	j3dModel->calcMaterial();
	j3dModel->makeDL();
	j3dModel->lock();

	return model;
}

} // namespace Kogane
} // namespace Game
