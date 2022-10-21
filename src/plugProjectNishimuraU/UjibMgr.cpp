#include "Game/Entities/Ujib.h"

namespace Game {
namespace Ujib {

static const char ujibMgrName[] = "246-UjibMgr";

/*
 * --INFO--
 * Address:	8025979C
 * Size:	000050
 */
Mgr::Mgr(int objLimit, u8 modelType)
    : EnemyMgrBase(objLimit, modelType)
{
	m_name = "ウジンコ♂マネージャ"; // ujinko ♂ manager
}

/*
 * --INFO--
 * Address:	802597EC
 * Size:	000048
 */
void Mgr::doAlloc() { init(new Parms); }

/*
 * --INFO--
 * Address:	80259910
 * Size:	000060
 */
void Mgr::createObj(int count) { m_obj = new Obj[count]; }

/*
 * --INFO--
 * Address:	80259A2C
 * Size:	000010
 */
EnemyBase* Mgr::getEnemy(int index) { return &m_obj[index]; }

} // namespace Ujib
} // namespace Game
