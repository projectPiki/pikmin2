#include "Game/Entities/Armor.h"

namespace Game {
namespace Armor {

static const char armorMgrName[] = "246-ArmorMgr";

/*
 * --INFO--
 * Address:	8027D2B8
 * Size:	000050
 */
Mgr::Mgr(int objLimit, u8 modelType)
    : EnemyMgrBase(objLimit, modelType)
{
	mName = "ヨロイムシマネージャ"; // worm manager
}

/*
 * --INFO--
 * Address:	8027D308
 * Size:	000048
 */
void Mgr::doAlloc() { init(new Parms); }

/*
 * --INFO--
 * Address:	8027D460
 * Size:	000060
 */
void Mgr::createObj(int count) { mObj = new Obj[count]; }

/*
 * --INFO--
 * Address:	8027D57C
 * Size:	000010
 */
EnemyBase* Mgr::getEnemy(int index) { return &mObj[index]; }

} // namespace Armor
} // namespace Game
