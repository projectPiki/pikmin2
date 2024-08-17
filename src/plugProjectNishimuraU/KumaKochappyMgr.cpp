#include "Game/Entities/KumaKochappy.h"

namespace Game {
namespace KumaKochappy {

/**
 * @note Address: 0x802E6CE4
 * @note Size: 0x50
 */
Mgr::Mgr(int objLimit, u8 modelType)
    : EnemyMgrBase(objLimit, modelType)
{
	mName = "チビクママネージャ"; // little bear manager
}

/**
 * @note Address: 0x802E6D34
 * @note Size: 0x48
 */
void Mgr::doAlloc() { init(new Parms); }

/**
 * @note Address: 0x802E6E14
 * @note Size: 0x60
 */
void Mgr::createObj(int count) { mObj = new Obj[count]; }

/**
 * @note Address: 0x802E6F30
 * @note Size: 0x10
 */
EnemyBase* Mgr::getEnemy(int index) { return &mObj[index]; }

} // namespace KumaKochappy
} // namespace Game
