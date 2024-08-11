#include "Game/Entities/Armor.h"

namespace Game {
namespace Armor {

static const char armorMgrName[] = "246-ArmorMgr";

/**
 * @note Address: 0x8027D2B8
 * @note Size: 0x50
 */
Mgr::Mgr(int objLimit, u8 modelType)
    : EnemyMgrBase(objLimit, modelType)
{
	mName = "ヨロイムシマネージャ"; // worm manager
}

/**
 * @note Address: 0x8027D308
 * @note Size: 0x48
 */
void Mgr::doAlloc() { init(new Parms); }

/**
 * @note Address: 0x8027D460
 * @note Size: 0x60
 */
void Mgr::createObj(int count) { mObj = new Obj[count]; }

/**
 * @note Address: 0x8027D57C
 * @note Size: 0x10
 */
EnemyBase* Mgr::getEnemy(int index) { return &mObj[index]; }

} // namespace Armor
} // namespace Game
