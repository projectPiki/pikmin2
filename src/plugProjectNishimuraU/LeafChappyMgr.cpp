#include "Game/Entities/LeafChappy.h"

namespace Game {
namespace LeafChappy {

/*
 * --INFO--
 * Address:	802C5918
 * Size:	000050
 */
Mgr::Mgr(int objLimit, u8 modelType)
    : EnemyMgrBase(objLimit, modelType)
{
	m_name = "葉っぱチャッピーマネージャ"; // leaf chappy manager
}

/*
 * --INFO--
 * Address:	802C5968
 * Size:	000048
 */
EnemyBase* Mgr::birth(EnemyBirthArg& birthArg)
{
	Obj* leafchappy = static_cast<Obj*>(EnemyMgrBase::birth(birthArg));
	if (leafchappy) {
		leafchappy->birthChildren(birthArg);
	}
	return leafchappy;
}

/*
 * --INFO--
 * Address:	802C59B0
 * Size:	000048
 */
void Mgr::doAlloc() { init(new KumaChappy::Parms); }

/*
 * --INFO--
 * Address:	802C59F8
 * Size:	000060
 */
void Mgr::createObj(int count) { m_obj = new Obj[count]; }

/*
 * --INFO--
 * Address:	802C5B48
 * Size:	000010
 */
EnemyBase* Mgr::getEnemy(int index) { return &m_obj[index]; }

} // namespace LeafChappy
} // namespace Game
