#include "Game/Entities/Bomb.h"

namespace Game {
namespace Bomb {

/*
 * --INFO--
 * Address:	80349DD8
 * Size:	000050
 */
Mgr::Mgr(int objLimit, u8 modelType)
    : EnemyMgrBase(objLimit, modelType)
{
	m_name = "爆弾マネージャ"; // bomb manager
}

/*
 * --INFO--
 * Address:	80349E28
 * Size:	000048
 */
void Mgr::doAlloc() { init(new Parms); }

/*
 * --INFO--
 * Address:	80349FC0
 * Size:	000020
 */
EnemyBase* Mgr::birth(EnemyBirthArg& birthArg) { return EnemyMgrBase::birth(birthArg); }

} // namespace Bomb
} // namespace Game
