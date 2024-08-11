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

/**
 * @note Address: 0x80281F10
 * @note Size: 0x50
 */
Mgr::Mgr(int objLimit, u8 modelType)
    : EnemyMgrBase(objLimit, modelType)
{
	mName = "フウセンドックリマネージャ"; // blimp manager
}

/**
 * @note Address: 0x80281F60
 * @note Size: 0x48
 */
void Mgr::doAlloc() { init(new Parms); }

/**
 * @note Address: 0x8028222C
 * @note Size: 0x60
 */
void Mgr::createObj(int count) { mObj = new Obj[count]; }

/**
 * @note Address: 0x8028228C
 * @note Size: 0x10
 */
EnemyBase* Mgr::getEnemy(int index) { return &mObj[index]; }

/**
 * @note Address: 0x8028229C
 * @note Size: 0x12C
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

/**
 * @note Address: 0x802823C8
 * @note Size: 0x13C
 */
SysShape::Model* Mgr::createModel()
{
	SysShape::Model* model = new SysShape::Model(mModelData, J3DMODEL_ShareDL, mMtxBufferSize);
	P2ASSERTLINE(121, model != nullptr);

	for (u16 i = 0; i < mModelData->getMaterialNum(); i++) {
		const char* name = mModelData->mMaterialTable.mMaterialNames->getName(i);
		if (!strcmp(name, "mat1")) {
			model->mJ3dModel->mMatPackets[i].mShapePacket->newDifferedDisplayList(J3DMDF_DiffColorReg | CREATE_DIFF_FLAG(0, 2, 0, 0));
		}
	}

	model->updateModel();
	return model;
}

} // namespace Mar
} // namespace Game
