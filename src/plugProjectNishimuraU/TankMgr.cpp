#include "Game/Entities/Tank.h"
#include "Game/generalEnemyMgr.h"
#include "JSystem/JUtility/JUTNameTab.h"

namespace Game {
namespace Tank {

static const char tankMgrName[] = "246-TankMgr";

/**
 * @note Address: 0x80275A18
 * @note Size: 0x50
 */
Mgr::Mgr(int objLimit, u8 modelType)
    : EnemyMgrBase(objLimit, modelType)
{
	mName = "ブタドックリマネージャ"; // pig dog manager
}

/**
 * @note Address: 0x80275A68
 * @note Size: 0x9C
 */
void Mgr::loadModelData()
{
	int ids[2] = { EnemyTypeID::EnemyID_Tank, EnemyTypeID::EnemyID_Wtank };

	for (int i = 0; i < 2; i++) {
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
}

/**
 * @note Address: 0x80275B04
 * @note Size: 0x90
 */
void Mgr::loadAnimData()
{
	int ids[2] = { EnemyTypeID::EnemyID_Tank, EnemyTypeID::EnemyID_Wtank };

	for (int i = 0; i < 2; i++) {
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
 * @note Address: 0x80275B94
 * @note Size: 0x138
 */
SysShape::Model* Mgr::createModel()
{
	SysShape::Model* model = new SysShape::Model(mModelData, J3DMODEL_ShareDL, mMtxBufferSize);
	P2ASSERTLINE(130, model);
	for (u16 i = 0; i < mModelData->getMaterialNum(); i++) {
		const char* name = mModelData->mMaterialTable.mMaterialNames->getName(i);
		if (!strcmp(name, "mat_dokkuri_main")) {
			model->mJ3dModel->mMatPackets[i].mShapePacket->newDifferedDisplayList(J3DMDF_TexCoord1 | J3DMDF_DiffTexCoordScale);
		}
	}

	model->updateModel();
	return model;
}

} // namespace Tank
} // namespace Game
