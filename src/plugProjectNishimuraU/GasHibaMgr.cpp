#include "Game/Entities/GasHiba.h"

namespace Game {
namespace GasHiba {

static const char gasHibaMgrName[] = "246-GasHibaMgr";

/*
 * --INFO--
 * Address:	8026CC80
 * Size:	000064
 */
Mgr::Mgr(int objLimit, u8 modelType)
    : EnemyMgrBaseAlwaysMovieActor(objLimit, modelType)
{
	m_name = "ガスヒバマネージャ"; // gas hiba manager
}

/*
 * --INFO--
 * Address:	8026CCE4
 * Size:	000048
 */
void Mgr::doAlloc() { init(new Parms); }

/*
 * --INFO--
 * Address:	8026CEF8
 * Size:	000060
 */
void Mgr::createObj(int count) { m_obj = new Obj[count]; }

/*
 * --INFO--
 * Address:	8026D014
 * Size:	000010
 */
EnemyBase* Mgr::getEnemy(int index) { return &m_obj[index]; }

} // namespace GasHiba
} // namespace Game
