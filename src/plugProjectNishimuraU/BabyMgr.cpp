#include "Game/Entities/Baby.h"

namespace Game {
namespace Baby {

static const char babyMgrName[] = "246-BabyMgr";

/**
 * @note Address: 0x8028D0C0
 * @note Size: 0x50
 */
Mgr::Mgr(int objLimit, u8 modelType)
    : EnemyMgrBase(objLimit, modelType)
{
	mName = "ベビーチャッピーマネージャ"; // baby chappy manager
}

/**
 * @note Address: 0x8028D110
 * @note Size: 0x48
 */
void Mgr::doAlloc() { init(new Parms); }

/**
 * @note Address: 0x8028D234
 * @note Size: 0x60
 */
void Mgr::createObj(int count) { mObj = new Obj[count]; }

/**
 * @note Address: 0x8028D350
 * @note Size: 0x10
 */
EnemyBase* Mgr::getEnemy(int index) { return &mObj[index]; }

} // namespace Baby
} // namespace Game
