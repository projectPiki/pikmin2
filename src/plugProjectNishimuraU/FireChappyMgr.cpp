#include "Game/Entities/FireChappy.h"
#include "LoadResource.h"
#include "JSystem/JUT/JUTNameTab.h"
#include "Sys/MatBaseAnimation.h"

namespace Game {
namespace FireChappy {

namespace {
static const char* cMatAnimBtkTexName = "/enemy/data/FireChappy/yakichappy.btk";
static const char* cMatAnimBrkTexName = "/enemy/data/FireChappy/yakichappy.brk";
} // namespace

/*
 * --INFO--
 * Address:	8028F138
 * Size:	000050
 */
Mgr::Mgr(int objLimit, u8 modelType)
    : EnemyMgrBase(objLimit, modelType)
{
	m_name = "ヤキチャッピーマネージャ"; // yaki chappy manager
}

/*
 * --INFO--
 * Address:	8028F188
 * Size:	000048
 */
void Mgr::doAlloc() { init(new ChappyBase::Parms); }

/*
 * --INFO--
 * Address:	8028F1D0
 * Size:	000060
 */
void Mgr::createObj(int count) { m_obj = new Obj[count]; }

/*
 * --INFO--
 * Address:	8028F320
 * Size:	000010
 */
EnemyBase* Mgr::getEnemy(int index) { return &m_obj[index]; }

/*
 * --INFO--
 * Address:	8028F330
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
 * Address:	8028F398
 * Size:	00012C
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
	P2ASSERTLINE(110, btkFile);

	m_texAnimation = new Sys::MatTexAnimation;
	m_texAnimation->attachResource(btkFile, m_modelData);

	void* brkFile = nullptr;
	LoadResource::Arg loadArgBrk(cMatAnimBrkTexName);
	LoadResource::Node* resourceBrk = gLoadResourceMgr->load(loadArgBrk);
	if (resourceBrk) {
		brkFile = resourceBrk->_30;
	}
	P2ASSERTLINE(118, brkFile);

	m_tevRegAnimation = new Sys::MatTevRegAnimation;
	m_tevRegAnimation->attachResource(brkFile, m_modelData);
}

/*
 * --INFO--
 * Address:	8028F4C4
 * Size:	00007C
 */
SysShape::Model* Mgr::createModel()
{
	SysShape::Model* model = new SysShape::Model(m_modelData, 0x40000, m_modelType);
	P2ASSERTLINE(144, model);
	return model;
}

} // namespace FireChappy
} // namespace Game
