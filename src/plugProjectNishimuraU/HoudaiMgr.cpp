#include "Game/Entities/Houdai.h"
#include "LoadResource.h"
#include "JSystem/JUtility/JUTNameTab.h"
#include "Sys/MatBaseAnimation.h"

namespace Game {
namespace Houdai {

static const char houdaiMgrName[] = "246-HoudaiMgr";

namespace {
static const char* cMatAnimBtkTexName = "/enemy/data/Houdai/houdai_model.btk";
static const char* cMatAnimBrkTexName = "/enemy/data/Houdai/houdai_model.brk";
} // namespace

/**
 * @note Address: 0x802BEDE0
 * @note Size: 0x50
 */
Mgr::Mgr(int objLimit, u8 modelType)
    : EnemyMgrBase(objLimit, modelType)
{
	mName = "ホウダイマネージャ"; // houdai manager
}

/**
 * @note Address: 0x802BEE30
 * @note Size: 0x48
 */
void Mgr::doAlloc() { init(new Parms); }

/**
 * @note Address: 0x802BF1AC
 * @note Size: 0x60
 */
void Mgr::createObj(int count) { mObj = new Obj[count]; }

/**
 * @note Address: 0x802BF2C8
 * @note Size: 0x10
 */
EnemyBase* Mgr::getEnemy(int index) { return &mObj[index]; }

/**
 * @note Address: 0x802BF2D8
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

} // namespace Houdai
} // namespace Game
