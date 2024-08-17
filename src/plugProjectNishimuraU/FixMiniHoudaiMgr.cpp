#include "Game/Entities/MiniHoudai.h"

namespace Game {
namespace FixMiniHoudai {

/**
 * @note Address: 0x80301688
 * @note Size: 0x50
 */
Mgr::Mgr(int objLimit, u8 modelType)
    : MiniHoudai::Mgr(objLimit, modelType)
{
	mName = "固定チビホウダイマネージャ"; // fixed little houdai manager
}

/**
 * @note Address: 0x803016D8
 * @note Size: 0x48
 */
void Mgr::doAlloc() { init(new MiniHoudai::Parms); }

/**
 * @note Address: 0x80301720
 * @note Size: 0x60
 */
void Mgr::createObj(int count) { mObj = new Obj[count]; }

/**
 * @note Address: 0x8030186C
 * @note Size: 0x10
 */
EnemyBase* Mgr::getEnemy(int index) { return &mObj[index]; }

} // namespace FixMiniHoudai
} // namespace Game
