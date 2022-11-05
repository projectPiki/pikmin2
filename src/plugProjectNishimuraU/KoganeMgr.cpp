#include "Game/Entities/Kogane.h"
#include "Game/generalEnemyMgr.h"
#include "JSystem/JUT/JUTNameTab.h"

namespace Game {
namespace Kogane {

/*
 * --INFO--
 * Address:	8025D898
 * Size:	000050
 */
Mgr::Mgr(int objLimit, u8 modelType)
    : EnemyMgrBase(objLimit, modelType)
{
	m_name = "コガネマネージャ"; // kogane manager
}

/*
 * --INFO--
 * Address:	8025D8E8
 * Size:	0000E8
 */
void Mgr::loadModelData()
{
	EnemyTypeID::EEnemyTypeID ids[] = { EnemyTypeID::EnemyID_Kogane, EnemyTypeID::EnemyID_Wealthy, EnemyTypeID::EnemyID_Fart };
	int id_count                    = sizeof(ids) / sizeof(EnemyTypeID::EEnemyTypeID);

	for (int i = 0; i < id_count; i++) {
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
	J3DShape* shape;
	for (u16 j = 0; j < m_modelData->getShapeCount(); j++) {
		shape          = m_modelData->m_shapeTable.m_items[j];
		shape->m_flags = (shape->m_flags & (~0xF000)) | 0x2000;
	}
}

/*
 * --INFO--
 * Address:	8025D9D0
 * Size:	0000A0
 */
void Mgr::loadAnimData()
{
	EnemyTypeID::EEnemyTypeID ids[] = { EnemyTypeID::EnemyID_Kogane, EnemyTypeID::EnemyID_Wealthy, EnemyTypeID::EnemyID_Fart };
	int id_count                    = sizeof(ids) / sizeof(EnemyTypeID::EEnemyTypeID);

	for (int i = 0; i < id_count; i++) {
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
 * Address:	8025DA70
 * Size:	000130
 */
SysShape::Model* Mgr::createModel()
{
	SysShape::Model* model = new SysShape::Model(m_modelData, 0x80000, m_modelType);
	P2ASSERTLINE(148, model);
	for (u16 i = 0; i < m_modelData->getMaterialCount1(); i++) {
		const char* name = m_modelData->m_materialTable._0C->getName(i);
		if (!strcmp(name, "karada")) {
			model->m_j3dModel->m_matPackets[(u16)i]._2C->newDifferedDisplayList(0x05020000);
		}
	}

	// why is this not inlined here but IS inlined in the other mgrs SMH.
	Matrixf mtx;
	PSMTXIdentity(mtx.m_matrix.mtxView);
	PSMTXCopy(mtx.m_matrix.mtxView, j3dSys._00);
	J3DModel* j3dModel = model->m_j3dModel;
	j3dModel->calc();
	j3dModel->calcMaterial();
	j3dModel->makeDL();
	j3dModel->lock();

	return model;
}

} // namespace Kogane
} // namespace Game
