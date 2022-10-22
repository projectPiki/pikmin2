#include "Game/Entities/Sarai.h"

namespace Game {
namespace Sarai {

static const char saraiMgrName[] = "246-SaraiMgr";

/*
 * --INFO--
 * Address:	80272504
 * Size:	000050
 */
Mgr::Mgr(int objLimit, u8 modelType)
    : EnemyMgrBase(objLimit, modelType)
{
	m_name = "サライムシマネージャ"; // saraimushi/salamander manager (lol?)
}

/*
 * --INFO--
 * Address:	80272554
 * Size:	000048
 */
void Mgr::doAlloc() { init(new Parms); }

/*
 * --INFO--
 * Address:	80272988
 * Size:	000060
 */
void Mgr::createObj(int count) { m_obj = new Obj[count]; }

/*
 * --INFO--
 * Address:	80272AA4
 * Size:	000010
 */
EnemyBase* Mgr::getEnemy(int index) { return &m_obj[index]; }

} // namespace Sarai
} // namespace Game
