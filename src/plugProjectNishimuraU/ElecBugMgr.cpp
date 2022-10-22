#include "Game/Entities/ElecBug.h"

namespace Game {
namespace ElecBug {

static const char elecBugMgrName[] = "246-ElecBugMgr";

/*
 * --INFO--
 * Address:	8027A89C
 * Size:	000050
 */
Mgr::Mgr(int objLimit, u8 modelType)
    : EnemyMgrBase(objLimit, modelType)
{
	m_name = "デンキムシマネージャ"; // electric beetle manager
}

/*
 * --INFO--
 * Address:	8027A8EC
 * Size:	000048
 */
void Mgr::doAlloc() { init(new Parms); }

/*
 * --INFO--
 * Address:	8027AA4C
 * Size:	000060
 */
void Mgr::createObj(int count) { m_obj = new Obj[count]; }

/*
 * --INFO--
 * Address:	8027AB68
 * Size:	000010
 */
EnemyBase* Mgr::getEnemy(int index) { return &m_obj[index]; }

} // namespace ElecBug
} // namespace Game
