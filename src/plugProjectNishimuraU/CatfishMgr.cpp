#include "types.h"
#include "Game/Entities/Catfish.h"

namespace Game {
namespace Catfish {

/*
 * --INFO--
 * Address:	80276D54
 * Size:	000050
 */
Mgr::Mgr(int p1, u8 p2)
    : EnemyMgrBase(p1, p2)
{
	m_name = "ナマズマネージャ"; // catfish manager
}

/*
 * --INFO--
 * Address:	80276DA4
 * Size:	000048
 */
void Mgr::doAlloc() { init(new KochappyBase::Parms); }

/*
 * --INFO--
 * Address:	80276DEC
 * Size:	000060
 */
void Mgr::createObj(int count) { m_obj = new Obj[count]; }

/*
 * --INFO--
 * Address:	80276F38
 * Size:	000010
 */
EnemyBase* Mgr::getEnemy(int idx) { return &m_obj[idx]; }

} // namespace Catfish
} // namespace Game
