#include "Game/Interaction.h"
#include "Game/EnemyBase.h"

namespace Game {
/**
 * @note Address: 0x80127884
 * @note Size: 0x5C
 */
bool InteractFarmKarero::actEnemy(EnemyBase* base) { return base->farmCallBack(mCreature, -mPower); }

/**
 * @note Address: 0x801278E0
 * @note Size: 0x58
 */
bool InteractFarmHaero::actEnemy(EnemyBase* base) { return base->farmCallBack(mCreature, mPower); }

/**
 * @note Address: 0x80127938
 * @note Size: 0x3C
 */
bool InteractDope::actEnemy(EnemyBase* base) { return base->dopeCallBack(mCreature, mSprayType); }
} // namespace Game
