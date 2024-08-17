#include "Game/Entities/OtakaraBase.h"
#include "Game/generalEnemyMgr.h"
#include "JSystem/JUtility/JUTNameTab.h"

namespace Game {
namespace OtakaraBase {

static const char otakaraBaseMgrName[] = "246-OtakaraBaseMgr";

/**
 * @note Address: 0x802B5E98
 * @note Size: 0x50
 */
Mgr::Mgr(int objLimit, u8 modelType)
    : EnemyMgrBase(objLimit, modelType)
{
	mName = "オタカラムシマネージャ"; // otakara manager
}

/**
 * @note Address: 0x802B5EE8
 * @note Size: 0xBC
 */
void Mgr::loadModelData()
{
	EnemyTypeID::EEnemyTypeID ids[]
	    = { EnemyTypeID::EnemyID_FireOtakara, EnemyTypeID::EnemyID_WaterOtakara, EnemyTypeID::EnemyID_GasOtakara,
		    EnemyTypeID::EnemyID_ElecOtakara, EnemyTypeID::EnemyID_BombOtakara };
	int id_count = sizeof(ids) / sizeof(EnemyTypeID::EEnemyTypeID);

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
}

/**
 * @note Address: 0x802B5FA4
 * @note Size: 0xB0
 */
void Mgr::loadAnimData()
{
	EnemyTypeID::EEnemyTypeID ids[]
	    = { EnemyTypeID::EnemyID_FireOtakara, EnemyTypeID::EnemyID_WaterOtakara, EnemyTypeID::EnemyID_GasOtakara,
		    EnemyTypeID::EnemyID_ElecOtakara, EnemyTypeID::EnemyID_BombOtakara };
	int id_count = sizeof(ids) / sizeof(EnemyTypeID::EEnemyTypeID);

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
 * @note Address: 0x802B6054
 * @note Size: 0x138
 */
SysShape::Model* Mgr::createModel()
{
	SysShape::Model* model = new SysShape::Model(mModelData, J3DMODEL_ShareDL, mMtxBufferSize);
	P2ASSERTLINE(136, model);
	for (u16 i = 0; i < mModelData->getMaterialNum(); i++) {
		const char* name = mModelData->mMaterialTable.mMaterialNames->getName(i);
		if (!strcmp(name, "mat_body")) {
			model->mJ3dModel->mMatPackets[i].mShapePacket->newDifferedDisplayList(J3DMDF_TexCoord1 | J3DMDF_DiffTexCoordScale);
		}
	}

	model->updateModel();
	return model;
}

} // namespace OtakaraBase
} // namespace Game
