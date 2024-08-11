#include "Game/Entities/KingChappy.h"
#include "Game/generalEnemyMgr.h"
#include "LoadResource.h"
#include "JSystem/JUtility/JUTNameTab.h"

namespace Game {
namespace KingChappy {

static const char kingChappyMgrName[] = "kingChappyMgr";

/**
 * @note Address: 0x8035C288
 * @note Size: 0x50
 */
Mgr::Mgr(int objLimit, u8 modelType)
    : EnemyMgrBase(objLimit, modelType)
{
	mName = "キングチャッピーマネージャー"; // king chappy manager
}

/**
 * @note Address: 0x8035C2D8
 * @note Size: 0x48
 */
void Mgr::doAlloc() { init(new Parms); }

/**
 * @note Address: 0x8035C980
 * @note Size: 0x20
 */
EnemyBase* Mgr::birth(EnemyBirthArg& birthArg) { return EnemyMgrBase::birth(birthArg); }

/**
 * @note Address: 0x8035C9A0
 * @note Size: 0x20
 */
SysShape::Model* Mgr::createModel() { return EnemyMgrBase::createModel(); }

/**
 * @note Address: 0x8035C9C0
 * @note Size: 0xEC
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
