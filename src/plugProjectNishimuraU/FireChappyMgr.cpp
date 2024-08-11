#include "Game/Entities/FireChappy.h"
#include "LoadResource.h"
#include "JSystem/JUtility/JUTNameTab.h"
#include "Sys/MatBaseAnimation.h"

namespace Game {
namespace FireChappy {

namespace {
static const char* cMatAnimBtkTexName = "/enemy/data/FireChappy/yakichappy.btk";
static const char* cMatAnimBrkTexName = "/enemy/data/FireChappy/yakichappy.brk";
} // namespace

/**
 * @note Address: 0x8028F138
 * @note Size: 0x50
 */
Mgr::Mgr(int objLimit, u8 modelType)
    : EnemyMgrBase(objLimit, modelType)
{
	mName = "ヤキチャッピーマネージャ"; // yaki chappy manager
}

/**
 * @note Address: 0x8028F188
 * @note Size: 0x48
 */
void Mgr::doAlloc() { init(new ChappyBase::Parms); }

/**
 * @note Address: 0x8028F1D0
 * @note Size: 0x60
 */
void Mgr::createObj(int count) { mObj = new Obj[count]; }

/**
 * @note Address: 0x8028F320
 * @note Size: 0x10
 */
EnemyBase* Mgr::getEnemy(int index) { return &mObj[index]; }

/**
 * @note Address: 0x8028F330
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
 * @note Address: 0x8028F398
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
	P2ASSERTLINE(110, btkFile);

	mTexAnimation = new Sys::MatTexAnimation;
	mTexAnimation->attachResource(btkFile, mModelData);

	void* brkFile = nullptr;
	LoadResource::Arg loadArgBrk(cMatAnimBrkTexName);
	LoadResource::Node* resourceBrk = gLoadResourceMgr->load(loadArgBrk);
	if (resourceBrk) {
		brkFile = resourceBrk->mFile;
	}
	P2ASSERTLINE(118, brkFile);

	mTevRegAnimation = new Sys::MatTevRegAnimation;
	mTevRegAnimation->attachResource(brkFile, mModelData);
}

/**
 * @note Address: 0x8028F4C4
 * @note Size: 0x7C
 */
SysShape::Model* Mgr::createModel()
{
	SysShape::Model* model = new SysShape::Model(mModelData, J3DMODEL_UseSingleSharedDL, mMtxBufferSize);
	P2ASSERTLINE(144, model);
	return model;
}

} // namespace FireChappy
} // namespace Game
