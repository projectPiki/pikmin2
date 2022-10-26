#include "Game/Entities/KingChappy.h"
#include "Game/generalEnemyMgr.h"
#include "LoadResource.h"
#include "JSystem/JUT/JUTNameTab.h"

namespace Game {
namespace KingChappy {

static const char kingChappyMgrName[] = "kingChappyMgr";

/*
 * --INFO--
 * Address:	8035C288
 * Size:	000050
 */
Mgr::Mgr(int objLimit, u8 modelType)
    : EnemyMgrBase(objLimit, modelType)
{
	m_name = "キングチャッピーマネージャー"; // king chappy manager
}

/*
 * --INFO--
 * Address:	8035C2D8
 * Size:	000048
 */
void Mgr::doAlloc() { init(new Parms); }

/*
 * --INFO--
 * Address:	8035C980
 * Size:	000020
 */
EnemyBase* Mgr::birth(EnemyBirthArg& birthArg) { return EnemyMgrBase::birth(birthArg); }

/*
 * --INFO--
 * Address:	8035C9A0
 * Size:	000020
 */
SysShape::Model* Mgr::createModel() { return EnemyMgrBase::createModel(); }

/*
 * --INFO--
 * Address:	8035C9C0
 * Size:	0000EC
 */
void Mgr::requestState(Obj* kingChappy, int stateID)
{
	for (int i = 0; i < getMaxObjects(); i++) {
		Obj* enemy = static_cast<Obj*>(getEnemy(i));
		P2ASSERTLINE(65, enemy);
		if (enemy->isAlive() && enemy != kingChappy && stateID != enemy->getStateID() && enemy->getStateID() != KINGCHAPPY_Dead) {
			if (enemy->forceTransit(stateID)) {
				return;
			}
		}
	}
}

} // namespace KingChappy
} // namespace Game
