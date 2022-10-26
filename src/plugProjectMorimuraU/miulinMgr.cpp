#include "Game/Entities/Miulin.h"

namespace Game {
namespace Miulin {

static const char miulinMgrName[] = "miulinMgr";

/*
 * --INFO--
 * Address:	80363F58
 * Size:	000050
 */
Mgr::Mgr(int objLimit, u8 modelType)
    : EnemyMgrBase(objLimit, modelType)
{
	m_name = "ミウリンマネージャ"; // miulin manager
}

/*
 * --INFO--
 * Address:	80363FA8
 * Size:	000048
 */
void Mgr::doAlloc() { init(new Parms); }

/*
 * --INFO--
 * Address:	803641F8
 * Size:	000020
 */
EnemyBase* Mgr::birth(EnemyBirthArg& birthArg) { return EnemyMgrBase::birth(birthArg); }

} // namespace Miulin
} // namespace Game
