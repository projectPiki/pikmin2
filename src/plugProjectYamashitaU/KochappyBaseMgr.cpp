#include "types.h"
#include "Game/Entities/KochappyBase.h"
#include "Game/generalEnemyMgr.h"
#include "JSystem/JUT/JUTNameTab.h"

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
	m_name = "コチャッピーベースマネージャ";
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
 * Address:	8012D91C
 * Size:	0000A0
 */
void Mgr::loadAnimData()
{
	int ids[3] = { EnemyTypeID::EnemyID_Kochappy, EnemyTypeID::EnemyID_BlueKochappy, EnemyTypeID::EnemyID_YellowKochappy };

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
 * Address:	8012D9BC
 * Size:	00011C
 */
SysShape::Model* Mgr::createModel()
{
	SysShape::Model* model = new SysShape::Model(m_modelData, 0x80000, m_modelType);

	for (u16 i = 0; i < m_modelData->getMaterialCount1(); i++) {
		const char* name = m_modelData->m_materialTable._0C->getName(i);
		if (!strcmp(name, "lambert4")) {
			model->m_j3dModel->m_matPackets[i]._2C->newDifferedDisplayList(0x04020000);
		}
	}

	model->updateModel();
	return model;
}
} // namespace KochappyBase
} // namespace Game