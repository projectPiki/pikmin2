#include "Game/Entities/Damagumo.h"
#include "LoadResource.h"
#include "JSystem/JUtility/JUTNameTab.h"
#include "Sys/MatBaseAnimation.h"

namespace Game {
namespace Damagumo {

static const char damagumoMgrName[] = "246-DamagumoMgr";

namespace {
static const char* cMatAnimBtkTexName = "/enemy/data/Damagumo/damagumo_model.btk";
static const char* cMatAnimBrkTexName = "/enemy/data/Damagumo/damagumo_model.brk";
} // namespace

/**
 * @note Address: 0x802A50CC
 * @note Size: 0x50
 */
Mgr::Mgr(int objLimit, u8 modelType)
    : EnemyMgrBase(objLimit, modelType)
{
	mName = "ダマグモマネージャ"; // damagumo manager
}

/**
 * @note Address: 0x802A511C
 * @note Size: 0x48
 */
void Mgr::doAlloc() { init(new Parms); }

/**
 * @note Address: 0x802A532C
 * @note Size: 0x60
 */
void Mgr::createObj(int count) { mObj = new Obj[count]; }

/**
 * @note Address: 0x802A5448
 * @note Size: 0x10
 */
EnemyBase* Mgr::getEnemy(int index) { return &mObj[index]; }

/**
 * @note Address: 0x802A5458
 * @note Size: 0x68
 */
void Mgr::loadModelData()
{
	EnemyMgrBase::loadModelData();
	J3DShape* shape;
	for (u16 j = 0; j < mModelData->getShapeNum(); j++) {
		shape = mModelData->mShapeTable.mItems[j];
		shape->setTexMtxLoadType(0x2000);
	}
}

/**
 * @note Address: 0x802A54C0
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
	P2ASSERTLINE(109, btkFile);

	mTexAnimation = new Sys::MatTexAnimation;
	mTexAnimation->attachResource(btkFile, mModelData);

	void* brkFile = nullptr;
	LoadResource::Arg loadArgBrk(cMatAnimBrkTexName);
	LoadResource::Node* resourceBrk = gLoadResourceMgr->load(loadArgBrk);
	if (resourceBrk) {
		brkFile = resourceBrk->mFile;
	}
	P2ASSERTLINE(117, brkFile);

	mTevRegAnimation = new Sys::MatTevRegAnimation;
	mTevRegAnimation->attachResource(brkFile, mModelData);
}

/**
 * @note Address: 0x802A55EC
 * @note Size: 0x7C
 */
SysShape::Model* Mgr::createModel()
{
	SysShape::Model* model = new SysShape::Model(mModelData, J3DMODEL_UseSingleSharedDL, mMtxBufferSize);
	P2ASSERTLINE(143, model);
	return model;
}

} // namespace Damagumo
} // namespace Game
