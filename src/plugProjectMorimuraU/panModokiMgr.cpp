#include "Game/Entities/PanModoki.h"
#include "Game/Entities/OoPanModoki.h"

namespace Game {

static const char panModokiMgrName[] = "panModokiMgr";

namespace PanModoki {

/**
 * @note Address: 0x8034E9C0
 * @note Size: 0x50
 */
Mgr::Mgr(int objLimit, u8 modelType)
    : EnemyMgrBase(objLimit, modelType)
{
	mName = "パンモドキマネージャ"; // bread manager
}

/**
 * @note Address: 0x8034EA10
 * @note Size: 0x48
 */
void Mgr::doAlloc() { init(new PanModokiBase::Parms); }

/**
 * @note Address: 0x8034ED70
 * @note Size: 0x20
 */
EnemyBase* Mgr::birth(EnemyBirthArg& birthArg) { return EnemyMgrBase::birth(birthArg); }

} // namespace PanModoki

namespace OoPanModoki {
/**
 * @note Address: 0x8034ED90
 * @note Size: 0x50
 */
Mgr::Mgr(int objLimit, u8 modelType)
    : EnemyMgrBase(objLimit, modelType)
{
	mName = "大パンモドキマネージャ"; // big bread manager
}

/**
 * @note Address: 0x8034EDE0
 * @note Size: 0x48
 */
void Mgr::doAlloc() { init(new PanModokiBase::Parms); }

/**
 * @note Address: 0x8034EE28
 * @note Size: 0x20
 */
EnemyBase* Mgr::birth(EnemyBirthArg& birthArg) { return EnemyMgrBase::birth(birthArg); }

/**
 * @note Address: 0x8034EE48
 * @note Size: 0x2C
 */
J3DModelData* Mgr::doLoadBmd(void* filename) { return J3DModelLoaderDataBase::load(filename, 0x00240030); }

/**
 * @note Address: 0x8034EE74
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
} // namespace OoPanModoki

} // namespace Game
