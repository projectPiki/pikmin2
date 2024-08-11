#include "Game/Entities/Miulin.h"

namespace Game {
namespace Miulin {

static const char miulinMgrName[] = "miulinMgr";

/**
 * @note Address: 0x80363F58
 * @note Size: 0x50
 */
Mgr::Mgr(int objLimit, u8 modelType)
    : EnemyMgrBase(objLimit, modelType)
{
	mName = "ミウリンマネージャ"; // miulin manager
}

/**
 * @note Address: 0x80363FA8
 * @note Size: 0x48
 */
void Mgr::doAlloc() { init(new Parms); }

/**
 * @note Address: 0x803641F8
 * @note Size: 0x20
 */
EnemyBase* Mgr::birth(EnemyBirthArg& birthArg) { return EnemyMgrBase::birth(birthArg); }

} // namespace Miulin
} // namespace Game
