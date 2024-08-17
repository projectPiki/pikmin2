#include "types.h"
#include "Game/Entities/KochappyBase.h"
#include "Game/generalEnemyMgr.h"
#include "JSystem/JUtility/JUTNameTab.h"

namespace Game {
namespace KochappyBase {

/**
 * @note Address: 0x8012D80C
 * @note Size: 0x50
 */
Mgr::Mgr(int objLimit, u8 modelType)
    : EnemyMgrBase(objLimit, modelType)
{
	mName = "コチャッピーベースマネージャ";
}

/**
 * @note Address: 0x8012D85C
 * @note Size: 0xC0
 */
void Mgr::loadModelData()
{
	int ids[3] = { EnemyTypeID::EnemyID_Kochappy, EnemyTypeID::EnemyID_BlueKochappy, EnemyTypeID::EnemyID_YellowKochappy };

	for (int i = 0; i < 3; i++) {
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

	mModelData->newSharedDisplayList(0x40000);
	mModelData->makeSharedDL();
}

/**
 * @note Address: 0x8012D91C
 * @note Size: 0xA0
 */
void Mgr::loadAnimData()
{
	int ids[3] = { EnemyTypeID::EnemyID_Kochappy, EnemyTypeID::EnemyID_BlueKochappy, EnemyTypeID::EnemyID_YellowKochappy };

	for (int i = 0; i < 3; i++) {
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
 * @note Address: 0x8012D9BC
 * @note Size: 0x11C
 */
SysShape::Model* Mgr::createModel()
{
	SysShape::Model* model = new SysShape::Model(mModelData, J3DMODEL_ShareDL, mMtxBufferSize);

	for (u16 i = 0; i < mModelData->getMaterialNum(); i++) {
		const char* name = mModelData->mMaterialTable.mMaterialNames->getName(i);
		if (!strcmp(name, "lambert4")) {
			model->mJ3dModel->mMatPackets[i].mShapePacket->newDifferedDisplayList(J3DMDF_TexCoord1 | J3DMDF_DiffTexCoordScale);
		}
	}

	model->updateModel();
	return model;
}
} // namespace KochappyBase
} // namespace Game
