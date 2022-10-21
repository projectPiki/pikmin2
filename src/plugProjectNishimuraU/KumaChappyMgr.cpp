#include "Game/Entities/KumaChappy.h"

namespace Game {
namespace KumaChappy {

static const char kumaChappyMgrName[] = "246-KumaChappyMgr";

/*
 * --INFO--
 * Address:	802992B4
 * Size:	000050
 */
Mgr::Mgr(int objLimit, u8 modelType)
    : EnemyMgrBase(objLimit, modelType)
{
	m_name = "クマチャッピーマネージャ"; // bear chappy manager
}

/*
 * --INFO--
 * Address:	80299304
 * Size:	000048
 */
void Mgr::doAlloc() { init(new Parms); }

/*
 * --INFO--
 * Address:	80299464
 * Size:	000060
 */
void Mgr::createObj(int count) { m_obj = new Obj[count]; }

/*
 * --INFO--
 * Address:	80299580
 * Size:	000010
 */
EnemyBase* Mgr::getEnemy(int index) { return &m_obj[index]; }

} // namespace KumaChappy
} // namespace Game
