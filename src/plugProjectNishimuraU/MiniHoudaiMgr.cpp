#include "Game/Entities/MiniHoudai.h"
#include "Game/generalEnemyMgr.h"
#include "JSystem/JUtility/JUTNameTab.h"

namespace Game {
namespace MiniHoudai {

/**
 * @note Address: 0x802EBD54
 * @note Size: 0x50
 */
Mgr::Mgr(int objLimit, u8 modelType)
    : EnemyMgrBase(objLimit, modelType)
{
	mName = "チビホウダイマネージャ"; // little houdai manager
}

/**
 * @note Address: 0x802EBDA4
 * @note Size: 0xD8
 */
void Mgr::loadModelData()
{
	int ids[2] = { EnemyTypeID::EnemyID_MiniHoudai, EnemyTypeID::EnemyID_FminiHoudai };

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
	J3DShape* shape;
	for (u16 j = 0; j < mModelData->getShapeNum(); j++) {
		shape = mModelData->mShapeTable.mItems[j];
		shape->setTexMtxLoadType(0x2000);
	}
}

/**
 * @note Address: 0x802EBE7C
 * @note Size: 0x90
 */
void Mgr::loadAnimData()
{
	int ids[2] = {
		EnemyTypeID::EnemyID_MiniHoudai,
		EnemyTypeID::EnemyID_FminiHoudai,
	};

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

} // namespace MiniHoudai
} // namespace Game
