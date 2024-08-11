#include "types.h"
#include "Game/Entities/Catfish.h"

namespace Game {
namespace Catfish {

/**
 * @note Address: 0x80276D54
 * @note Size: 0x50
 */
Mgr::Mgr(int p1, u8 p2)
    : EnemyMgrBase(p1, p2)
{
	mName = "ナマズマネージャ"; // catfish manager
}

/**
 * @note Address: 0x80276DA4
 * @note Size: 0x48
 */
void Mgr::doAlloc() { init(new KochappyBase::Parms); }

/**
 * @note Address: 0x80276DEC
 * @note Size: 0x60
 */
void Mgr::createObj(int count) { mObj = new Obj[count]; }

/**
 * @note Address: 0x80276F38
 * @note Size: 0x10
 */
EnemyBase* Mgr::getEnemy(int idx) { return &mObj[idx]; }

} // namespace Catfish
} // namespace Game
