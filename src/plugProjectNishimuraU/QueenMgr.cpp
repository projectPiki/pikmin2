#include "Game/Entities/Queen.h"
#include "LoadResource.h"
#include "JSystem/JUT/JUTNameTab.h"
#include "Sys/MatBaseAnimation.h"

namespace Game {
namespace Queen {

static const char queenMgrName[] = "246-QueenMgr";

namespace {
static const char* cMatAnimBtkTexName = "/enemy/data/Queen/queenchappy_model.btk";
} // namespace

/*
 * --INFO--
 * Address:	80288EB4
 * Size:	000050
 */
Mgr::Mgr(int objLimit, u8 modelType)
    : EnemyMgrBase(objLimit, modelType)
{
	m_name = "クィーンチャッピーマネージャ"; // queen chappy manager
}

/*
 * --INFO--
 * Address:	80288F04
 * Size:	000048
 */
void Mgr::doAlloc() { init(new Parms); }

/*
 * --INFO--
 * Address:	802890D4
 * Size:	000060
 */
void Mgr::createObj(int count) { m_obj = new Obj[count]; }

/*
 * --INFO--
 * Address:	802891F0
 * Size:	000010
 */
EnemyBase* Mgr::getEnemy(int index) { return &m_obj[index]; }

/*
 * --INFO--
 * Address:	80289200
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
 * Address:	80289268
 * Size:	0000B4
 */
void Mgr::loadTexData()
{
	SysShape::Model::enableMaterialAnim(m_modelData, 0);
	void* btkFile = nullptr;
	LoadResource::Arg loadArgBtk(cMatAnimBtkTexName);
	LoadResource::Node* resourceBtk = gLoadResourceMgr->load(loadArgBtk);
	if (resourceBtk) {
		btkFile = resourceBtk->_30;
	}
	P2ASSERTLINE(108, btkFile);

	m_texAnimation = new Sys::MatTexAnimation;
	m_texAnimation->attachResource(btkFile, m_modelData);
}

/*
 * --INFO--
 * Address:	8028931C
 * Size:	00007C
 */
SysShape::Model* Mgr::createModel()
{
	SysShape::Model* model = new SysShape::Model(m_modelData, 0x40000, m_modelType);
	P2ASSERTLINE(134, model);
	return model;
}

} // namespace Queen
} // namespace Game
