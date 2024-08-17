#include "Game/Entities/Tyre.h"

namespace Game {
namespace Tyre {

/**
 * @note Address: 0x803ABE60
 * @note Size: 0x50
 */
Mgr::Mgr(int objLimit, u8 modelType)
    : EnemyMgrBase(objLimit, modelType)
{
	mName = "タイヤマネージャ"; // tire manager
}

/**
 * @note Address: 0x803ABEB0
 * @note Size: 0x48
 */
void Mgr::doAlloc() { init(new Parms); }

/**
 * @note Address: 0x803ABFD4
 * @note Size: 0x20
 */
EnemyBase* Mgr::birth(EnemyBirthArg& arg) { return EnemyMgrBase::birth(arg); }

/**
 * @note Address: 0x803ABFF4
 * @note Size: 0x94
 */
void Mgr::loadModelData()
{
	EnemyMgrBase::loadModelData();
	J3DShape* shape;
	for (u16 j = 0; j < mModelData->getShapeNum(); j++) {
		shape = mModelData->mShapeTable.mItems[j];
		P2ASSERTLINE(56, shape != nullptr);
		shape->setTexMtxLoadType(0x2000);
	}
}

/**
 * @note Address: 0x803AC088
 * @note Size: 0x2C
 */
J3DModelData* Mgr::doLoadBmd(void* file)
{
	return J3DModelLoaderDataBase::load(file, 0x21240030); // flags should really be OR'd together
}

} // namespace Tyre
} // namespace Game
