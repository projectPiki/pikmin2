#include "Game/Entities/Imomushi.h"

namespace Game {
namespace Imomushi {

static const char imomushiMgrName[] = "246-ImomushiMgr";

/*
 * --INFO--
 * Address:	802BBCD4
 * Size:	000050
 */
Mgr::Mgr(int objLimit, u8 modelType)
    : EnemyMgrBase(objLimit, modelType)
{
	m_name = "イモムシマネージャ"; // caterpillar manager
}

/*
 * --INFO--
 * Address:	802BBD24
 * Size:	000048
 */
void Mgr::doAlloc() { init(new Parms); }

/*
 * --INFO--
 * Address:	802BBEFC
 * Size:	000060
 */
void Mgr::createObj(int count) { m_obj = new Obj[count]; }

/*
 * --INFO--
 * Address:	802BC018
 * Size:	000010
 */
EnemyBase* Mgr::getEnemy(int index) { return &m_obj[index]; }

} // namespace Imomushi
} // namespace Game
