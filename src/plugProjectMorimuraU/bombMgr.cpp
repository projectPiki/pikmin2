#include "Game/Entities/Bomb.h"

namespace Game {
namespace Bomb {

/**
 * @note Address: 0x80349DD8
 * @note Size: 0x50
 */
Mgr::Mgr(int objLimit, u8 modelType)
    : EnemyMgrBase(objLimit, modelType)
{
	mName = "爆弾マネージャ"; // bomb manager
}

/**
 * @note Address: 0x80349E28
 * @note Size: 0x48
 */
void Mgr::doAlloc() { init(new Parms); }

/**
 * @note Address: 0x80349FC0
 * @note Size: 0x20
 */
EnemyBase* Mgr::birth(EnemyBirthArg& birthArg) { return EnemyMgrBase::birth(birthArg); }

} // namespace Bomb
} // namespace Game
