#include "types.h"
#include "Game/Entities/ChappyBase.h"
#include "Game/generalEnemyMgr.h"
#include "JSystem/JUT/JUTNameTab.h"

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
	m_name = "チャッピーベースマネージャ"; // chappybase manager
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
				m_modelData = storedModelData;
				return;
			}
		}
	}

	EnemyMgrBase::loadModelData();

	m_modelData->newSharedDisplayList(0x40000);
	m_modelData->makeSharedDL();
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
			SysShape::AnimMgr* storedAnimMgr = mgr->m_animMgr;
			if (storedAnimMgr) {
				m_animMgr = storedAnimMgr;
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
	SysShape::Model* model = new SysShape::Model(m_modelData, 0x80000, m_modelType);

	for (u16 i = 0; i < m_modelData->getMaterialCount1(); i++) {
		const char* name = m_modelData->m_materialTable._0C->getName(i);
		if (!strcmp(name, "osiri_1_2") || !strcmp(name, "atama_2")) {
			model->m_j3dModel->m_matPackets[i]._2C->newDifferedDisplayList(0x04020000);
		}
	}

	model->updateModel();
	return model;
}

} // namespace ChappyBase
} // namespace Game
