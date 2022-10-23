#include "Game/Entities/Mar.h"
#include "LoadResource.h"
#include "JSystem/JUT/JUTNameTab.h"

namespace Game {
namespace Mar {

static const char marMgrName[] = "246-MarMgr";

namespace {
static const char* cMatAnimBtkTexName = "/enemy/data/Mar/fuusen_model.btk";
static const char* cMatAnimBrkTexName = "/enemy/data/Mar/fuusen_model.brk";
} // namespace

/*
 * --INFO--
 * Address:	80281F10
 * Size:	000050
 */
Mgr::Mgr(int objLimit, u8 modelType)
    : EnemyMgrBase(objLimit, modelType)
{
	m_name = "フウセンドックリマネージャ"; // blimp manager
}

/*
 * --INFO--
 * Address:	80281F60
 * Size:	000048
 */
void Mgr::doAlloc() { init(new Parms); }

/*
 * --INFO--
 * Address:	8028222C
 * Size:	000060
 */
void Mgr::createObj(int count) { m_obj = new Obj[count]; }

/*
 * --INFO--
 * Address:	8028228C
 * Size:	000010
 */
EnemyBase* Mgr::getEnemy(int index) { return &m_obj[index]; }

/*
 * --INFO--
 * Address:	8028229C
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
	P2ASSERTLINE(88, btkFile);

	m_texAnimation = new Sys::MatTexAnimation;
	m_texAnimation->attachResource(btkFile, m_modelData);

	void* brkFile = nullptr;
	LoadResource::Arg loadArgBrk(cMatAnimBrkTexName);
	LoadResource::Node* resourceBrk = gLoadResourceMgr->load(loadArgBrk);
	if (resourceBrk) {
		brkFile = resourceBrk->_30;
	}
	P2ASSERTLINE(96, brkFile);

	m_tevRegAnimation = new Sys::MatTevRegAnimation;
	m_tevRegAnimation->attachResource(brkFile, m_modelData);
}

/*
 * --INFO--
 * Address:	802823C8
 * Size:	00013C
 */
SysShape::Model* Mgr::createModel()
{
	SysShape::Model* model = new SysShape::Model(m_modelData, 0x80000, m_modelType);
	P2ASSERTLINE(121, model != nullptr);

	for (u16 i = 0; i < m_modelData->getMaterialCount1(); i++) {
		const char* name = m_modelData->m_materialTable._0C->getName(i);
		if (!strcmp(name, "mat1")) {
			model->m_j3dModel->m_matPackets[i]._2C->newDifferedDisplayList(0x01000200);
		}
	}

	model->updateModel();
	return model;
}

} // namespace Mar
} // namespace Game
