#include "Game/Entities/Hiba.h"

namespace Game {
namespace Hiba {

static const char hibaMgrName[] = "246-HibaMgr";

/*
 * --INFO--
 * Address:	8026B8BC
 * Size:	000064
 */
Mgr::Mgr(int objLimit, u8 modelType)
    : EnemyMgrBaseAlwaysMovieActor(objLimit, modelType)
{
	m_name = "ヒバマネージャ"; // hiba manager
}

/*
 * --INFO--
 * Address:	8026B9D0
 * Size:	000048
 */
void Mgr::doAlloc() { init(new Parms); }

/*
 * --INFO--
 * Address:	8026BBA8
 * Size:	000060
 */
void Mgr::createObj(int count) { m_obj = new Obj[count]; }

/*
 * --INFO--
 * Address:	8026BCC4
 * Size:	000010
 */
EnemyBase* Mgr::getEnemy(int index) { return &m_obj[index]; }

} // namespace Hiba
} // namespace Game
