#include "Game/Entities/BigFoot.h"
#include "LoadResource.h"
#include "JSystem/JUT/JUTNameTab.h"
#include "Sys/MatBaseAnimation.h"

namespace Game {
namespace BigFoot {

static const char bigfootMgrName[] = "246-BigFootMgr";

namespace {
static const char* cMatAnimBrkTexName = "/enemy/data/BigFoot/ooashi_model.brk";
} // namespace

/*
 * --INFO--
 * Address:	802C6F58
 * Size:	000050
 */
Mgr::Mgr(int objLimit, u8 modelType)
    : EnemyMgrBase(objLimit, modelType)
{
	m_name = "オオアシマネージャ"; // big foot manager
}

/*
 * --INFO--
 * Address:	802C6FA8
 * Size:	000048
 */
void Mgr::doAlloc() { init(new Parms); }

/*
 * --INFO--
 * Address:	802C7410
 * Size:	000060
 */
void Mgr::createObj(int count) { m_obj = new Obj[count]; }

/*
 * --INFO--
 * Address:	802C752C
 * Size:	000010
 */
EnemyBase* Mgr::getEnemy(int index) { return &m_obj[index]; }

/*
 * --INFO--
 * Address:	802C753C
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
 * Address:	802C75A4
 * Size:	0000B4
 */
void Mgr::loadTexData()
{
	SysShape::Model::enableMaterialAnim(m_modelData, 0);

	void* brkFile = nullptr;
	LoadResource::Arg loadArgBrk(cMatAnimBrkTexName);
	LoadResource::Node* resourceBrk = gLoadResourceMgr->load(loadArgBrk);
	if (resourceBrk) {
		brkFile = resourceBrk->_30;
	}
	P2ASSERTLINE(108, brkFile);

	m_tevRegAnimation = new Sys::MatTevRegAnimation;
	m_tevRegAnimation->attachResource(brkFile, m_modelData);
}

/*
 * --INFO--
 * Address:	802C7658
 * Size:	00007C
 */
SysShape::Model* Mgr::createModel()
{
	SysShape::Model* model = new SysShape::Model(m_modelData, 0x40000, m_modelType);
	P2ASSERTLINE(134, model);
	return model;
}

} // namespace BigFoot
} // namespace Game
