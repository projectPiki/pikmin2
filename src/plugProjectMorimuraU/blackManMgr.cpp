#include "Game/Entities/BlackMan.h"
#include "Game/generalEnemyMgr.h"
#include "LoadResource.h"
#include "JSystem/JUT/JUTNameTab.h"

namespace Game {
namespace BlackMan {

static const char blackManMgrName[] = "blackManMgr";

/*
 * --INFO--
 * Address:	803A53C8
 * Size:	000050
 */
Mgr::Mgr(int objLimit, u8 modelType)
    : EnemyMgrBase(objLimit, modelType)
{
	m_name = "黒い人マネージャ"; // black man manager
}

/*
 * --INFO--
 * Address:	803A5418
 * Size:	000048
 */
void Mgr::doAlloc() { init(new Parms); }

/*
 * --INFO--
 * Address:	803A58B4
 * Size:	000020
 */
EnemyBase* Mgr::birth(EnemyBirthArg& birthArg) { return EnemyMgrBase::birth(birthArg); }

/*
 * --INFO--
 * Address:	803A58D4
 * Size:	000094
 */
void Mgr::loadModelData()
{
	EnemyMgrBase::loadModelData();
	J3DShape* shape;
	for (u16 j = 0; j < m_modelData->getShapeCount(); j++) {
		shape = m_modelData->m_shapeTable.m_items[j];
		P2ASSERTLINE(56, shape);
		shape->m_flags = (shape->m_flags & (~0xF000)) | 0x2000;
	}
}

/*
 * --INFO--
 * Address:	803A5968
 * Size:	0000BC
 */
void Mgr::loadTexData()
{
	SysShape::Model::enableMaterialAnim(m_modelData, 0);
	void* btkFile = nullptr;
	LoadResource::Arg loadArgBtk("/enemy/data/BlackMan/kagebozu_model.btk");
	LoadResource::Node* resourceBtk = gLoadResourceMgr->load(loadArgBtk);
	if (resourceBtk) {
		btkFile = resourceBtk->_30;
	}
	P2ASSERTLINE(83, btkFile);

	m_texAnimation = new Sys::MatTexAnimation;
	m_texAnimation->attachResource(btkFile, m_modelData);
}

/*
 * --INFO--
 * Address:	803A5A24
 * Size:	00002C
 */
J3DModelData* Mgr::doLoadBmd(void* filename) { return J3DModelLoaderDataBase::load(filename, 0x21300030); }

/*
 * --INFO--
 * Address:	803A5A50
 * Size:	000124
 */
SysShape::Model* Mgr::createModel()
{
	SysShape::Model* model = new SysShape::Model(m_modelData, 0x80000, m_modelType);
	P2ASSERTLINE(128, model != nullptr);

	for (u16 i = 0; i < m_modelData->getMaterialCount1(); i++) {
		const char* name = m_modelData->m_materialTable._0C->getName(i);
		if (!strcmp(name, "kage_mat")) {
			model->m_j3dModel->m_matPackets[i]._2C->newDifferedDisplayList(0x05021200);
		}
	}

	model->updateModel();
	return model;
}

} // namespace BlackMan
} // namespace Game
