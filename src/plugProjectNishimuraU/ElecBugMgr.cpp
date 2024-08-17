#include "Game/Entities/ElecBug.h"

namespace Game {
namespace ElecBug {

static const char elecBugMgrName[] = "246-ElecBugMgr";

/**
 * @note Address: 0x8027A89C
 * @note Size: 0x50
 */
Mgr::Mgr(int objLimit, u8 modelType)
    : EnemyMgrBase(objLimit, modelType)
{
	mName = "デンキムシマネージャ"; // electric beetle manager
}

/**
 * @note Address: 0x8027A8EC
 * @note Size: 0x48
 */
void Mgr::doAlloc() { init(new Parms); }

/**
 * @note Address: 0x8027AA4C
 * @note Size: 0x60
 */
void Mgr::createObj(int count) { mObj = new Obj[count]; }

/**
 * @note Address: 0x8027AB68
 * @note Size: 0x10
 */
EnemyBase* Mgr::getEnemy(int index) { return &mObj[index]; }

} // namespace ElecBug
} // namespace Game
