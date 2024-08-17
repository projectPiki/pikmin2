#include "Game/Entities/LeafChappy.h"

namespace Game {
namespace LeafChappy {

/**
 * @note Address: 0x802C5918
 * @note Size: 0x50
 */
Mgr::Mgr(int objLimit, u8 modelType)
    : EnemyMgrBase(objLimit, modelType)
{
	mName = "葉っぱチャッピーマネージャ"; // leaf chappy manager
}

/**
 * @note Address: 0x802C5968
 * @note Size: 0x48
 */
EnemyBase* Mgr::birth(EnemyBirthArg& birthArg)
{
	Obj* leafchappy = static_cast<Obj*>(EnemyMgrBase::birth(birthArg));
	if (leafchappy) {
		leafchappy->birthChildren(birthArg);
	}
	return leafchappy;
}

/**
 * @note Address: 0x802C59B0
 * @note Size: 0x48
 */
void Mgr::doAlloc() { init(new KumaChappy::Parms); }

/**
 * @note Address: 0x802C59F8
 * @note Size: 0x60
 */
void Mgr::createObj(int count) { mObj = new Obj[count]; }

/**
 * @note Address: 0x802C5B48
 * @note Size: 0x10
 */
EnemyBase* Mgr::getEnemy(int index) { return &mObj[index]; }

} // namespace LeafChappy
} // namespace Game
