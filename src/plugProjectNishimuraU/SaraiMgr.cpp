#include "Game/Entities/Sarai.h"

namespace Game {
namespace Sarai {

static const char saraiMgrName[] = "246-SaraiMgr";

/**
 * @note Address: 0x80272504
 * @note Size: 0x50
 */
Mgr::Mgr(int objLimit, u8 modelType)
    : EnemyMgrBase(objLimit, modelType)
{
	mName = "サライムシマネージャ"; // saraimushi/salamander manager (lol?)
}

/**
 * @note Address: 0x80272554
 * @note Size: 0x48
 */
void Mgr::doAlloc() { init(new Parms); }

/**
 * @note Address: 0x80272988
 * @note Size: 0x60
 */
void Mgr::createObj(int count) { mObj = new Obj[count]; }

/**
 * @note Address: 0x80272AA4
 * @note Size: 0x10
 */
EnemyBase* Mgr::getEnemy(int index) { return &mObj[index]; }

} // namespace Sarai
} // namespace Game
