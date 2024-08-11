#include "Game/Entities/GasHiba.h"

namespace Game {
namespace GasHiba {

static const char gasHibaMgrName[] = "246-GasHibaMgr";

/**
 * @note Address: 0x8026CC80
 * @note Size: 0x64
 */
Mgr::Mgr(int objLimit, u8 modelType)
    : EnemyMgrBaseAlwaysMovieActor(objLimit, modelType)
{
	mName = "ガスヒバマネージャ"; // gas hiba manager
}

/**
 * @note Address: 0x8026CCE4
 * @note Size: 0x48
 */
void Mgr::doAlloc() { init(new Parms); }

/**
 * @note Address: 0x8026CEF8
 * @note Size: 0x60
 */
void Mgr::createObj(int count) { mObj = new Obj[count]; }

/**
 * @note Address: 0x8026D014
 * @note Size: 0x10
 */
EnemyBase* Mgr::getEnemy(int index) { return &mObj[index]; }

} // namespace GasHiba
} // namespace Game
