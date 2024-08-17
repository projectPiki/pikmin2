#include "Game/Entities/MiniHoudai.h"

namespace Game {
namespace NormMiniHoudai {

static const char normMiniHoudaiMgrName[] = "246-NormMiniHoudaiMgr";

/**
 * @note Address: 0x803011F8
 * @note Size: 0x50
 */
Mgr::Mgr(int objLimit, u8 modelType)
    : MiniHoudai::Mgr(objLimit, modelType)
{
	mName = "ノーマルチビホウダイマネージャ"; // normal little houdai manager
}

/**
 * @note Address: 0x80301248
 * @note Size: 0x48
 */
void Mgr::doAlloc() { init(new MiniHoudai::Parms); }

/**
 * @note Address: 0x8030136C
 * @note Size: 0x60
 */
void Mgr::createObj(int count) { mObj = new Obj[count]; }

/**
 * @note Address: 0x803014B8
 * @note Size: 0x10
 */
EnemyBase* Mgr::getEnemy(int index) { return &mObj[index]; }

} // namespace NormMiniHoudai
} // namespace Game
