#include "Game/Entities/MiniHoudai.h"
#include "Game/generalEnemyMgr.h"
#include "JSystem/JUtility/JUTNameTab.h"

namespace Game {
namespace MiniHoudai {

/*
 * --INFO--
 * Address:	802EBD54
 * Size:	000050
 */
Mgr::Mgr(int objLimit, u8 modelType)
    : EnemyMgrBase(objLimit, modelType)
{
	mName = "チビホウダイマネージャ"; // little houdai manager
}

/*
 * --INFO--
 * Address:	802EBDA4
 * Size:	0000D8
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
		shape         = mModelData->mShapeTable.mItems[j];
		shape->mFlags = (shape->mFlags & (~0xF000)) | 0x2000;
	}
}

/*
 * --INFO--
 * Address:	802EBE7C
 * Size:	000090
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
