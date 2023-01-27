#include "types.h"
#include "Game/Entities/ChappyBase.h"
#include "Game/generalEnemyMgr.h"
#include "JSystem/JUtility/JUTNameTab.h"

namespace Game {
namespace ChappyBase {

/*
 * --INFO--
 * Address:	8012A670
 * Size:	000050
 */
Mgr::Mgr(int objLimit, u8 modelType)
    : EnemyMgrBase(objLimit, modelType)
{
	mName = "チャッピーベースマネージャ"; // chappybase manager
}

/*
 * --INFO--
 * Address:	8012A6C0
 * Size:	0000C0
 */
void Mgr::loadModelData()
{
	int ids[3] = { EnemyTypeID::EnemyID_Chappy, EnemyTypeID::EnemyID_BlueChappy, EnemyTypeID::EnemyID_YellowChappy };

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

/*
 * --INFO--
 * Address:	8012A780
 * Size:	0000A0
 */
void Mgr::loadAnimData()
{
	int ids[3] = { EnemyTypeID::EnemyID_Chappy, EnemyTypeID::EnemyID_BlueChappy, EnemyTypeID::EnemyID_YellowChappy };

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

/*
 * --INFO--
 * Address:	8012A820
 * Size:	00011C
 */
SysShape::Model* Mgr::createModel()
{
	SysShape::Model* model = new SysShape::Model(mModelData, 0x80000, mModelType);

	for (u16 i = 0; i < mModelData->getMaterialNum(); i++) {
		const char* name = mModelData->mMaterialTable.mMaterialNames->getName(i);
		if (!strcmp(name, "osiri_1_2") || !strcmp(name, "atama_2")) {
			model->mJ3dModel->mMatPackets[i].mShapePacket->newDifferedDisplayList(0x04020000);
		}
	}

	model->updateModel();
	return model;
}

} // namespace ChappyBase
} // namespace Game
