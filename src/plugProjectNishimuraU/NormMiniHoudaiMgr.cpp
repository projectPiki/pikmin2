#include "Game/Entities/MiniHoudai.h"

namespace Game {
namespace NormMiniHoudai {

static const char normMiniHoudaiMgrName[] = "246-NormMiniHoudaiMgr";

/*
 * --INFO--
 * Address:	803011F8
 * Size:	000050
 */
Mgr::Mgr(int objLimit, u8 modelType)
    : MiniHoudai::Mgr(objLimit, modelType)
{
	m_name = "ノーマルチビホウダイマネージャ"; // normal little houdai manager
}

/*
 * --INFO--
 * Address:	80301248
 * Size:	000048
 */
void Mgr::doAlloc() { init(new MiniHoudai::Parms); }

/*
 * --INFO--
 * Address:	8030136C
 * Size:	000060
 */
void Mgr::createObj(int count) { m_obj = new Obj[count]; }

/*
 * --INFO--
 * Address:	803014B8
 * Size:	000010
 */
EnemyBase* Mgr::getEnemy(int index) { return &m_obj[index]; }

} // namespace NormMiniHoudai
} // namespace Game
