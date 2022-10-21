#include "Game/Entities/Tobi.h"

namespace Game {
namespace Tobi {

static const char tobiMgrName[] = "246-TobiMgr";

/*
 * --INFO--
 * Address:	80269448
 * Size:	000050
 */
Mgr::Mgr(int objLimit, u8 modelType)
    : EnemyMgrBase(objLimit, modelType)
{
	m_name = "トビンコマネージャ"; // tobinko manager
}

/*
 * --INFO--
 * Address:	80269498
 * Size:	000048
 */
void Mgr::doAlloc() { init(new Parms); }

/*
 * --INFO--
 * Address:	80269670
 * Size:	000060
 */
void Mgr::createObj(int count) { m_obj = new Obj[count]; }

/*
 * --INFO--
 * Address:	8026978C
 * Size:	000010
 */
EnemyBase* Mgr::getEnemy(int index) { return &m_obj[index]; }

} // namespace Tobi
} // namespace Game
