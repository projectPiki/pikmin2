#include "types.h"
#include "Game/Entities/KochappyBase.h"
#include "Game/generalEnemyMgr.h"
#include "JSystem/JUtility/JUTNameTab.h"

namespace Game {
namespace KochappyBase {

/*
 * --INFO--
 * Address:	8012D80C
 * Size:	000050
 */
Mgr::Mgr(int objLimit, u8 modelType)
    : EnemyMgrBase(objLimit, modelType)
{
	mName = "コチャッピーベースマネージャ";
}

/*
 * --INFO--
 * Address:	8012D85C
 * Size:	0000C0
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

/*
 * --INFO--
 * Address:	8012D91C
 * Size:	0000A0
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

/*
 * --INFO--
 * Address:	8012D9BC
 * Size:	00011C
 */
SysShape::Model* Mgr::createModel()
{
	SysShape::Model* model = new SysShape::Model(mModelData, 0x80000, mModelType);

	for (u16 i = 0; i < mModelData->getMaterialNum(); i++) {
		const char* name = mModelData->mMaterialTable.mMaterialNames->getName(i);
		if (!strcmp(name, "lambert4")) {
			model->mJ3dModel->mMatPackets[i].mShapePacket->newDifferedDisplayList(0x04020000);
		}
	}

	model->updateModel();
	return model;
}
} // namespace KochappyBase
} // namespace Game
