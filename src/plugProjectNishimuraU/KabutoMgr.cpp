#include "types.h"
#include "Game/Entities/Kabuto.h"
#include "Game/generalEnemyMgr.h"
#include "JSystem/JUtility/JUTNameTab.h"
#include "JSystem/J3D/J3DSys.h"

namespace Game {
namespace Kabuto {

const char filename[] = "246-KabutoMgr";

/*
 * --INFO--
 * Address:	802E3D68
 * Size:	000050
 */
Mgr::Mgr(int p1, u8 p2)
    : EnemyMgrBase(p1, p2)
{
	mName = "カブトマネージャ"; // beetle manager
}

/*
 * --INFO--
 * Address:	802E3DB8
 * Size:	0000E8
 */
void Mgr::loadModelData()
{
	int ids[3] = { EnemyTypeID::EnemyID_Kabuto, EnemyTypeID::EnemyID_Rkabuto, EnemyTypeID::EnemyID_Fkabuto };

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

	for (u16 j = 0; j < mModelData->getShapeNum(); j++) {
		J3DShape* shape = mModelData->mShapeTable.mItems[j];
		shape->mFlags   = (shape->mFlags & (~0xF000)) | 0x2000;
	}
}

/*
 * --INFO--
 * Address:	802E3EA0
 * Size:	0000A0
 */
void Mgr::loadAnimData()
{
	int ids[3] = { EnemyTypeID::EnemyID_Kabuto, EnemyTypeID::EnemyID_Rkabuto, EnemyTypeID::EnemyID_Fkabuto };

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
 * Address:	802E3F40
 * Size:	00014C
 */
SysShape::Model* Mgr::createModel()
{
	SysShape::Model* model = new SysShape::Model(mModelData, 0x80000, mModelType);
	P2ASSERTLINE(147, model != nullptr);

	for (u16 i = 0; i < mModelData->getMaterialNum(); i++) {
		const char* name = mModelData->mMaterialTable.mMaterialNames->getName(i);
		if (!strcmp(name, "mat_babykabuto_body") || !strcmp(name, "mat_babykabuto_eye") || !strcmp(name, "mat_babykabuto_head")) {
			model->mJ3dModel->mMatPackets[i].mShapePacket->newDifferedDisplayList(0x04020000);
		}
	}

	model->updateModel();
	return model;
}

} // namespace Kabuto
} // namespace Game
