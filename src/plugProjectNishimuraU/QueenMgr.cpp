#include "Game/Entities/Queen.h"
#include "LoadResource.h"
#include "JSystem/JUtility/JUTNameTab.h"
#include "Sys/MatBaseAnimation.h"

namespace Game {
namespace Queen {

static const char queenMgrName[] = "246-QueenMgr";

namespace {
static const char* cMatAnimBtkTexName = "/enemy/data/Queen/queenchappy_model.btk";
} // namespace

/**
 * @note Address: 0x80288EB4
 * @note Size: 0x50
 */
Mgr::Mgr(int objLimit, u8 modelType)
    : EnemyMgrBase(objLimit, modelType)
{
	mName = "クィーンチャッピーマネージャ"; // queen chappy manager
}

/**
 * @note Address: 0x80288F04
 * @note Size: 0x48
 */
void Mgr::doAlloc() { init(new Parms); }

/**
 * @note Address: 0x802890D4
 * @note Size: 0x60
 */
void Mgr::createObj(int count) { mObj = new Obj[count]; }

/**
 * @note Address: 0x802891F0
 * @note Size: 0x10
 */
EnemyBase* Mgr::getEnemy(int index) { return &mObj[index]; }

/**
 * @note Address: 0x80289200
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
 * @note Address: 0x80289268
 * @note Size: 0xB4
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
	P2ASSERTLINE(108, btkFile);

	mTexAnimation = new Sys::MatTexAnimation;
	mTexAnimation->attachResource(btkFile, mModelData);
}

/**
 * @note Address: 0x8028931C
 * @note Size: 0x7C
 */
SysShape::Model* Mgr::createModel()
{
	SysShape::Model* model = new SysShape::Model(mModelData, 0x40000, mMtxBufferSize);
	P2ASSERTLINE(134, model);
	return model;
}

} // namespace Queen
} // namespace Game
