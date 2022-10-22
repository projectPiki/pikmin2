#include "Game/Entities/Baby.h"

namespace Game {
namespace Baby {

static const char babyMgrName[] = "246-BabyMgr";

/*
 * --INFO--
 * Address:	8028D0C0
 * Size:	000050
 */
Mgr::Mgr(int objLimit, u8 modelType)
    : EnemyMgrBase(objLimit, modelType)
{
	m_name = "ベビーチャッピーマネージャ"; // baby chappy manager
}

/*
 * --INFO--
 * Address:	8028D110
 * Size:	000048
 */
void Mgr::doAlloc() { init(new Parms); }

/*
 * --INFO--
 * Address:	8028D234
 * Size:	000060
 */
void Mgr::createObj(int count) { m_obj = new Obj[count]; }

/*
 * --INFO--
 * Address:	8028D350
 * Size:	000010
 */
EnemyBase* Mgr::getEnemy(int index) { return &m_obj[index]; }

} // namespace Baby
} // namespace Game
