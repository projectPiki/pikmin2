#include "Game/Entities/Fuefuki.h"

namespace Game {
namespace Fuefuki {

static const char fuefukiMgrName[] = "246-FuefukiMgr";

/*
 * --INFO--
 * Address:	8029BC38
 * Size:	000050
 */
Mgr::Mgr(int objLimit, u8 modelType)
    : EnemyMgrBase(objLimit, modelType)
{
	m_name = "フエフキムシマネージャ"; // flute player manager
}

/*
 * --INFO--
 * Address:	8029BC88
 * Size:	000048
 */
void Mgr::doAlloc() { init(new Parms); }

/*
 * --INFO--
 * Address:	8029BF88
 * Size:	000060
 */
void Mgr::createObj(int count) { m_obj = new Obj[count]; }

/*
 * --INFO--
 * Address:	8029C0A4
 * Size:	000010
 */
EnemyBase* Mgr::getEnemy(int index) { return &m_obj[index]; }

} // namespace Fuefuki
} // namespace Game
