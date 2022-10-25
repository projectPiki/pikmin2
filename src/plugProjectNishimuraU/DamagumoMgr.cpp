#include "Game/Entities/Damagumo.h"
#include "LoadResource.h"
#include "JSystem/JUT/JUTNameTab.h"
#include "Sys/MatBaseAnimation.h"

namespace Game {
namespace Damagumo {

static const char damagumoMgrName[] = "246-DamagumoMgr";

namespace {
static const char* cMatAnimBtkTexName = "/enemy/data/Damagumo/damagumo_model.btk";
static const char* cMatAnimBrkTexName = "/enemy/data/Damagumo/damagumo_model.brk";
} // namespace

/*
 * --INFO--
 * Address:	802A50CC
 * Size:	000050
 */
Mgr::Mgr(int objLimit, u8 modelType)
    : EnemyMgrBase(objLimit, modelType)
{
	m_name = "ダマグモマネージャ"; // damagumo manager
}

/*
 * --INFO--
 * Address:	802A511C
 * Size:	000048
 */
void Mgr::doAlloc() { init(new Parms); }

/*
 * --INFO--
 * Address:	802A532C
 * Size:	000060
 */
void Mgr::createObj(int count) { m_obj = new Obj[count]; }

/*
 * --INFO--
 * Address:	802A5448
 * Size:	000010
 */
EnemyBase* Mgr::getEnemy(int index) { return &m_obj[index]; }

/*
 * --INFO--
 * Address:	802A5458
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
 * Address:	802A54C0
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
	P2ASSERTLINE(109, btkFile);

	m_texAnimation = new Sys::MatTexAnimation;
	m_texAnimation->attachResource(btkFile, m_modelData);

	void* brkFile = nullptr;
	LoadResource::Arg loadArgBrk(cMatAnimBrkTexName);
	LoadResource::Node* resourceBrk = gLoadResourceMgr->load(loadArgBrk);
	if (resourceBrk) {
		brkFile = resourceBrk->_30;
	}
	P2ASSERTLINE(117, brkFile);

	m_tevRegAnimation = new Sys::MatTevRegAnimation;
	m_tevRegAnimation->attachResource(brkFile, m_modelData);
}

/*
 * --INFO--
 * Address:	802A55EC
 * Size:	00007C
 */
SysShape::Model* Mgr::createModel()
{
	SysShape::Model* model = new SysShape::Model(m_modelData, 0x40000, m_modelType);
	P2ASSERTLINE(143, model);
	return model;
}

} // namespace Damagumo
} // namespace Game
