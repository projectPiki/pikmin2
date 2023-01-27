#include "Game/Entities/Mar.h"
#include "LoadResource.h"
#include "JSystem/JUtility/JUTNameTab.h"

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
	mName = "フウセンドックリマネージャ"; // blimp manager
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
void Mgr::createObj(int count) { mObj = new Obj[count]; }

/*
 * --INFO--
 * Address:	8028228C
 * Size:	000010
 */
EnemyBase* Mgr::getEnemy(int index) { return &mObj[index]; }

/*
 * --INFO--
 * Address:	8028229C
 * Size:	00012C
 */
void Mgr::loadTexData()
{
	SysShape::Model::enableMaterialAnim(mModelData, 0);
	void* btkFile = nullptr;
	LoadResource::Arg loadArgBtk(cMatAnimBtkTexName);
	LoadResource::Node* resourceBtk = gLoadResourceMgr->load(loadArgBtk);
	if (resourceBtk) {
		btkFile = resourceBtk->mFile;
	}
	P2ASSERTLINE(88, btkFile);

	mTexAnimation = new Sys::MatTexAnimation;
	mTexAnimation->attachResource(btkFile, mModelData);

	void* brkFile = nullptr;
	LoadResource::Arg loadArgBrk(cMatAnimBrkTexName);
	LoadResource::Node* resourceBrk = gLoadResourceMgr->load(loadArgBrk);
	if (resourceBrk) {
		brkFile = resourceBrk->mFile;
	}
	P2ASSERTLINE(96, brkFile);

	mTevRegAnimation = new Sys::MatTevRegAnimation;
	mTevRegAnimation->attachResource(brkFile, mModelData);
}

/*
 * --INFO--
 * Address:	802823C8
 * Size:	00013C
 */
SysShape::Model* Mgr::createModel()
{
	SysShape::Model* model = new SysShape::Model(mModelData, 0x80000, mModelType);
	P2ASSERTLINE(121, model != nullptr);

	for (u16 i = 0; i < mModelData->getMaterialNum(); i++) {
		const char* name = mModelData->mMaterialTable.mMaterialNames->getName(i);
		if (!strcmp(name, "mat1")) {
			model->mJ3dModel->mMatPackets[i].mShapePacket->newDifferedDisplayList(0x01000200);
		}
	}

	model->updateModel();
	return model;
}

} // namespace Mar
} // namespace Game
