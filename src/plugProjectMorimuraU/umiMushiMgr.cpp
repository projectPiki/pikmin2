#include "Game/Entities/UmiMushi.h"
#include "Game/generalEnemyMgr.h"
#include "LoadResource.h"

namespace Game {
namespace UmiMushi {

static const char umiMushiMgrName[] = "umiMushiMgr";

/*
 * --INFO--
 * Address:	8038273C
 * Size:	000050
 */
Mgr::Mgr(int objLimit, u8 modelType)
    : EnemyMgrBase(objLimit, modelType)
{
	m_name = "ウミムシマネージャ"; // sea worm manager
}

/*
 * --INFO--
 * Address:	8038278C
 * Size:	000048
 */
void Mgr::doAlloc() { init(new Parms); }

/*
 * --INFO--
 * Address:	80382BD8
 * Size:	000020
 */
EnemyBase* Mgr::birth(EnemyBirthArg& birthArg) { return EnemyMgrBase::birth(birthArg); }

/*
 * --INFO--
 * Address:	80382BF8
 * Size:	000068
 */
void Mgr::loadModelData()
{
	EnemyMgrBase::loadModelData();
	J3DShape* shape;
	for (u16 j = 0; j < m_modelData->getShapeCount(); j++) {
		shape          = m_modelData->m_shapeTable.m_items[j];
		shape->m_flags = (shape->m_flags & (~0xF000)) | 0x2000;
	}
}

/*
 * --INFO--
 * Address:	80382C60
 * Size:	0000BC
 */
void Mgr::loadTexData()
{
	SysShape::Model::enableMaterialAnim(m_modelData, 0);
	void* btkFile = nullptr;
	LoadResource::Arg loadArgBtk("/enemy/data/UmiMushi/umimusi_model1.btk");
	LoadResource::Node* resourceBtk = gLoadResourceMgr->load(loadArgBtk);
	if (resourceBtk) {
		btkFile = resourceBtk->_30;
	}
	P2ASSERTLINE(91, btkFile);

	m_texAnimation = new Sys::MatTexAnimation;
	m_texAnimation->attachResource(btkFile, m_modelData);
}

/*
 * --INFO--
 * Address:	80382D1C
 * Size:	00007C
 */
SysShape::Model* Mgr::createModel()
{
	SysShape::Model* model = new SysShape::Model(m_modelData, 0x20000, m_modelType);
	P2ASSERTLINE(111, model);
	return model;
}

/*
 * --INFO--
 * Address:	80382D98
 * Size:	000160
 */
void Mgr::createObj(int count)
{
	m_obj = new Obj[count];

	EnemyTypeID::EEnemyTypeID ids[] = { EnemyTypeID::EnemyID_UmiMushi, EnemyTypeID::EnemyID_UmiMushiBlind };

	int id_count = sizeof(ids) / sizeof(EnemyTypeID::EEnemyTypeID);
	int counter  = 0;
	for (int i = 0; i < id_count; i++) {
		int enemyNum = generalEnemyMgr->getEnemyNum(ids[i], false);
		for (int j = 0; j < enemyNum; j++, counter++) {
			m_obj[counter].m_bloysterType = ids[i];
		}
	}
}

} // namespace UmiMushi
} // namespace Game
