#include "Game/Entities/Fuefuki.h"

namespace Game {
namespace Fuefuki {

static const char fuefukiMgrName[] = "246-FuefukiMgr";

/**
 * @note Address: 0x8029BC38
 * @note Size: 0x50
 */
Mgr::Mgr(int objLimit, u8 modelType)
    : EnemyMgrBase(objLimit, modelType)
{
	mName = "フエフキムシマネージャ"; // flute player manager
}

/**
 * @note Address: 0x8029BC88
 * @note Size: 0x48
 */
void Mgr::doAlloc() { init(new Parms); }

/**
 * @note Address: 0x8029BF88
 * @note Size: 0x60
 */
void Mgr::createObj(int count) { mObj = new Obj[count]; }

/**
 * @note Address: 0x8029C0A4
 * @note Size: 0x10
 */
EnemyBase* Mgr::getEnemy(int index) { return &mObj[index]; }

} // namespace Fuefuki
} // namespace Game
