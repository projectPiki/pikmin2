#include "Game/Entities/Egg.h"

namespace Game {
namespace Egg {

/**
 * @note Address: 0x8034B6B0
 * @note Size: 0x50
 */
Mgr::Mgr(int objLimit, u8 modelType)
    : EnemyMgrBase(objLimit, modelType)
{
	mName = "タマゴマネージャ"; // egg manager
}

/**
 * @note Address: 0x8034B700
 * @note Size: 0x48
 */
void Mgr::doAlloc() { init(new Parms); }

/**
 * @note Address: 0x8034B8D4
 * @note Size: 0x20
 */
EnemyBase* Mgr::birth(EnemyBirthArg& birthArg) { return EnemyMgrBase::birth(birthArg); }

} // namespace Egg
} // namespace Game
