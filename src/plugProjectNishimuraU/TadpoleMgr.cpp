#include "Game/Entities/Tadpole.h"

namespace Game {
namespace Tadpole {

/*
 * --INFO--
 * Address:	80278264
 * Size:	000050
 */
Mgr::Mgr(int objLimit, u8 modelType)
    : EnemyMgrBase(objLimit, modelType)
{
	m_name = "オタママネージャ"; // otama manager
}

/*
 * --INFO--
 * Address:	802782B4
 * Size:	000048
 */
void Mgr::doAlloc() { init(new Parms); }

/*
 * --INFO--
 * Address:	80278394
 * Size:	000060
 */
void Mgr::createObj(int count) { m_obj = new Obj[count]; }

/*
 * --INFO--
 * Address:	802784B0
 * Size:	000010
 */
EnemyBase* Mgr::getEnemy(int index) { return &m_obj[index]; }

} // namespace Tadpole
} // namespace Game
