#include "Game/Entities/Hana.h"

namespace Game {
namespace Hana {

/**
 * @note Address: 0x802F2DEC
 * @note Size: 0x50
 */
Mgr::Mgr(int objLimit, u8 modelType)
    : EnemyMgrBase(objLimit, modelType)
{
	mName = "ハナドックリマネージャ"; // hanadokkuri manager
}

/**
 * @note Address: 0x802F2E3C
 * @note Size: 0x48
 */
void Mgr::doAlloc() { init(new ChappyBase::Parms); }

/**
 * @note Address: 0x802F2E84
 * @note Size: 0x60
 */
void Mgr::createObj(int count) { mObj = new Obj[count]; }

/**
 * @note Address: 0x802F2FD4
 * @note Size: 0x10
 */
EnemyBase* Mgr::getEnemy(int index) { return &mObj[index]; }

/**
 * @note Address: 0x802F2FE4
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

} // namespace Hana
} // namespace Game
