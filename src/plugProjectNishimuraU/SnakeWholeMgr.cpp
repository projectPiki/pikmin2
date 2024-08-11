#include "Game/Entities/SnakeWhole.h"

namespace Game {
namespace SnakeWhole {

static const char snakeWholeMgrName[] = "246-SnakeWholeMgr";

/**
 * @note Address: 0x802CE2DC
 * @note Size: 0x50
 */
Mgr::Mgr(int objLimit, u8 modelType)
    : EnemyMgrBase(objLimit, modelType)
{
	mName = "ヘビガラス全身マネージャ"; // snake crow whole body manager
}

/**
 * @note Address: 0x802CE32C
 * @note Size: 0x48
 */
void Mgr::doAlloc() { init(new Parms); }

/**
 * @note Address: 0x802CE4C8
 * @note Size: 0x60
 */
void Mgr::createObj(int count) { mObj = new Obj[count]; }

/**
 * @note Address: 0x802CE5E4
 * @note Size: 0x10
 */
EnemyBase* Mgr::getEnemy(int index) { return &mObj[index]; }

/**
 * @note Address: 0x802CE5F4
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

} // namespace SnakeWhole
} // namespace Game
