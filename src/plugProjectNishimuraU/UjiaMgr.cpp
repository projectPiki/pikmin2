#include "Game/Entities/Ujia.h"

namespace Game {
namespace Ujia {

/*
 * --INFO--
 * Address:	80265D14
 * Size:	000050
 */
Mgr::Mgr(int objLimit, u8 modelType)
    : EnemyMgrBase(objLimit, modelType)
{
	mName = "ウジンコ♀マネージャ"; // ujinko ♀ manager
}

/*
 * --INFO--
 * Address:	80265D64
 * Size:	000048
 */
void Mgr::doAlloc() { init(new Parms); }

/*
 * --INFO--
 * Address:	80265E44
 * Size:	000060
 */
void Mgr::createObj(int count) { mObj = new Obj[count]; }

/*
 * --INFO--
 * Address:	80265F60
 * Size:	000010
 */
EnemyBase* Mgr::getEnemy(int index) { return &mObj[index]; }

} // namespace Ujia
} // namespace Game
