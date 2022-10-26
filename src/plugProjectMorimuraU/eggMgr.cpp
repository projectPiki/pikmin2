#include "Game/Entities/Egg.h"

namespace Game {
namespace Egg {

/*
 * --INFO--
 * Address:	8034B6B0
 * Size:	000050
 */
Mgr::Mgr(int objLimit, u8 modelType)
    : EnemyMgrBase(objLimit, modelType)
{
	m_name = "タマゴマネージャ"; // egg manager
}

/*
 * --INFO--
 * Address:	8034B700
 * Size:	000048
 */
void Mgr::doAlloc() { init(new Parms); }

/*
 * --INFO--
 * Address:	8034B8D4
 * Size:	000020
 */
EnemyBase* Mgr::birth(EnemyBirthArg& birthArg) { return EnemyMgrBase::birth(birthArg); }

} // namespace Egg
} // namespace Game
