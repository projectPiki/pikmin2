#include "Game/Entities/Frog.h"

namespace Game {
namespace Frog {

static const char frogMgrName[] = "246-FrogMgr";

/**
 * @note Address: 0x80258120
 * @note Size: 0x50
 */
Mgr::Mgr(int objLimit, u8 modelType)
    : EnemyMgrBase(objLimit, modelType)
{
	mName = "イモガエルマネージャ"; // tree frog manager
}

/**
 * @note Address: 0x80258170
 * @note Size: 0x48
 */
void Mgr::doAlloc() { init(new Parms); }

/**
 * @note Address: 0x8025830C
 * @note Size: 0x60
 */
void Mgr::createObj(int count) { mObj = new Obj[count]; }

/**
 * @note Address: 0x80258428
 * @note Size: 0x10
 */
EnemyBase* Mgr::getEnemy(int index) { return &mObj[index]; }

} // namespace Frog
} // namespace Game
