#include "Game/Entities/MiniHoudai.h"

namespace Game {
namespace FixMiniHoudai {

/*
 * --INFO--
 * Address:	80301688
 * Size:	000050
 */
Mgr::Mgr(int objLimit, u8 modelType)
    : MiniHoudai::Mgr(objLimit, modelType)
{
	m_name = "固定チビホウダイマネージャ"; // fixed little houdai manager
}

/*
 * --INFO--
 * Address:	803016D8
 * Size:	000048
 */
void Mgr::doAlloc() { init(new MiniHoudai::Parms); }

/*
 * --INFO--
 * Address:	80301720
 * Size:	000060
 */
void Mgr::createObj(int count) { m_obj = new Obj[count]; }

/*
 * --INFO--
 * Address:	8030186C
 * Size:	000010
 */
EnemyBase* Mgr::getEnemy(int index) { return &m_obj[index]; }

} // namespace FixMiniHoudai
} // namespace Game
