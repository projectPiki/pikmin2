#include "Game/Entities/KumaKochappy.h"

namespace Game {
namespace KumaKochappy {

/*
 * --INFO--
 * Address:	802E6CE4
 * Size:	000050
 */
Mgr::Mgr(int objLimit, u8 modelType)
    : EnemyMgrBase(objLimit, modelType)
{
	m_name = "チビクママネージャ"; // little bear manager
}

/*
 * --INFO--
 * Address:	802E6D34
 * Size:	000048
 */
void Mgr::doAlloc() { init(new Parms); }

/*
 * --INFO--
 * Address:	802E6E14
 * Size:	000060
 */
void Mgr::createObj(int count) { m_obj = new Obj[count]; }

/*
 * --INFO--
 * Address:	802E6F30
 * Size:	000010
 */
EnemyBase* Mgr::getEnemy(int index) { return &m_obj[index]; }

} // namespace KumaKochappy
} // namespace Game
