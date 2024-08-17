#include "Game/Entities/Kogane.h"
#include "Game/generalEnemyMgr.h"
#include "JSystem/JUtility/JUTNameTab.h"

namespace Game {
namespace Kogane {

/**
 * @note Address: 0x8025D898
 * @note Size: 0x50
 */
Mgr::Mgr(int objLimit, u8 modelType)
    : EnemyMgrBase(objLimit, modelType)
{
	mName = "コガネマネージャ"; // kogane manager
}

/**
 * @note Address: 0x8025D8E8
 * @note Size: 0xE8
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
		shape = mModelData->mShapeTable.mItems[j];
		shape->setTexMtxLoadType(0x2000);
	}
}

/**
 * @note Address: 0x8025D9D0
 * @note Size: 0xA0
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

/**
 * @note Address: 0x8025DA70
 * @note Size: 0x130
 */
SysShape::Model* Mgr::createModel()
{
	SysShape::Model* model = new SysShape::Model(mModelData, J3DMODEL_ShareDL, mMtxBufferSize);
	P2ASSERTLINE(148, model);
	for (u16 i = 0; i < mModelData->getMaterialNum(); i++) {
		const char* name = mModelData->mMaterialTable.mMaterialNames->getName(i);
		if (!strcmp(name, "karada")) {
			model->mJ3dModel->mMatPackets[(u16)i].mShapePacket->newDifferedDisplayList(J3DMDF_TexCoord1 | J3DMDF_DiffTexCoordScale
			                                                                           | J3DMDF_DiffColorReg);
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
