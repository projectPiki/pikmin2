#include "Game/Entities/Demon.h"

namespace Game {
namespace Demon {

/**
 * @note Address: 0x8028E048
 * @note Size: 0x50
 */
Mgr::Mgr(int objLimit, u8 modelType)
    : EnemyMgrBase(objLimit, modelType)
{
	mName = "オニサライマネージャ"; // onisarai manager
}

/**
 * @note Address: 0x8028E098
 * @note Size: 0x48
 */
void Mgr::doAlloc() { init(new Sarai::Parms); }

/**
 * @note Address: 0x8028E0E0
 * @note Size: 0x60
 */
void Mgr::createObj(int count) { mObj = new Obj[count]; }

/**
 * @note Address: 0x8028E230
 * @note Size: 0x10
 */
EnemyBase* Mgr::getEnemy(int index) { return &mObj[index]; }

/**
 * @note Address: 0x8028E240
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

} // namespace Demon
} // namespace Game
