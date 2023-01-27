#include "Game/Entities/OtakaraBase.h"
#include "Game/generalEnemyMgr.h"
#include "JSystem/JUtility/JUTNameTab.h"

namespace Game {
namespace OtakaraBase {

static const char otakaraBaseMgrName[] = "246-OtakaraBaseMgr";

/*
 * --INFO--
 * Address:	802B5E98
 * Size:	000050
 */
Mgr::Mgr(int objLimit, u8 modelType)
    : EnemyMgrBase(objLimit, modelType)
{
	mName = "オタカラムシマネージャ"; // otakara manager
}

/*
 * --INFO--
 * Address:	802B5EE8
 * Size:	0000BC
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

/*
 * --INFO--
 * Address:	802B5FA4
 * Size:	0000B0
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

/*
 * --INFO--
 * Address:	802B6054
 * Size:	000138
 */
SysShape::Model* Mgr::createModel()
{
	SysShape::Model* model = new SysShape::Model(mModelData, 0x80000, mModelType);
	P2ASSERTLINE(136, model);
	for (u16 i = 0; i < mModelData->getMaterialNum(); i++) {
		const char* name = mModelData->mMaterialTable.mMaterialNames->getName(i);
		if (!strcmp(name, "mat_body")) {
			model->mJ3dModel->mMatPackets[i].mShapePacket->newDifferedDisplayList(0x04020000);
		}
	}

	model->updateModel();
	return model;
}

} // namespace OtakaraBase
} // namespace Game
