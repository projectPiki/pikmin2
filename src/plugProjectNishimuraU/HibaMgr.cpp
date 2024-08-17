#include "Game/Entities/Hiba.h"

namespace Game {
namespace Hiba {

static const char hibaMgrName[] = "246-HibaMgr";

/**
 * @note Address: 0x8026B8BC
 * @note Size: 0x64
 */
Mgr::Mgr(int objLimit, u8 modelType)
    : EnemyMgrBaseAlwaysMovieActor(objLimit, modelType)
{
	mName = "ヒバマネージャ"; // hiba manager
}

/**
 * @note Address: 0x8026B9D0
 * @note Size: 0x48
 */
void Mgr::doAlloc() { init(new Parms); }

/**
 * @note Address: 0x8026BBA8
 * @note Size: 0x60
 */
void Mgr::createObj(int count) { mObj = new Obj[count]; }

/**
 * @note Address: 0x8026BCC4
 * @note Size: 0x10
 */
EnemyBase* Mgr::getEnemy(int index) { return &mObj[index]; }

} // namespace Hiba
} // namespace Game
