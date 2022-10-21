#include "Game/Entities/Tank.h"
#include "Game/generalEnemyMgr.h"
#include "JSystem/JUT/JUTNameTab.h"

namespace Game {
namespace Tank {

static const char tankMgrName[] = "246-TankMgr";

/*
 * --INFO--
 * Address:	80275A18
 * Size:	000050
 */
Mgr::Mgr(int objLimit, u8 modelType)
    : EnemyMgrBase(objLimit, modelType)
{
	m_name = "ブタドックリマネージャ"; // pig dog manager
}

/*
 * --INFO--
 * Address:	80275A68
 * Size:	00009C
 */
void Mgr::loadModelData()
{
	int ids[2] = { EnemyTypeID::EnemyID_Tank, EnemyTypeID::EnemyID_Wtank };

	for (int i = 0; i < 2; i++) {
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
}

/*
 * --INFO--
 * Address:	80275B04
 * Size:	000090
 */
void Mgr::loadAnimData()
{
	int ids[2] = { EnemyTypeID::EnemyID_Tank, EnemyTypeID::EnemyID_Wtank };

	for (int i = 0; i < 2; i++) {
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
 * Address:	80275B94
 * Size:	000138
 */
SysShape::Model* Mgr::createModel()
{
	SysShape::Model* model = new SysShape::Model(m_modelData, 0x80000, m_modelType);
	P2ASSERTLINE(130, model);
	for (u16 i = 0; i < m_modelData->getMaterialCount1(); i++) {
		const char* name = m_modelData->m_materialTable._0C->getName(i);
		if (!strcmp(name, "mat_dokkuri_main")) {
			model->m_j3dModel->m_matPackets[i]._2C->newDifferedDisplayList(0x04020000);
		}
	}

	model->updateModel();
	return model;
}

} // namespace Tank
} // namespace Game
