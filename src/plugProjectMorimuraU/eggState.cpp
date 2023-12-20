#include "types.h"
#include "Game/EnemyAnimKeyEvent.h"
#include "Game/Entities/Egg.h"
#include "efx/TEggdown.h"
#include "efx/TEnemyBomb.h"
#include "PSM/EnemyBase.h"

namespace Game {
namespace Egg {
/**
 * @note Address: 0x8034B3C4
 * @note Size: 0x54
 */
void FSM::init(Game::EnemyBase* enemy)
{
	create(EGG_Count);
	registerState(new StateWait(EGG_Wait));
}

/**
 * @note Address: 0x8034B418
 * @note Size: 0x3C
 */
StateWait::StateWait(int stateID)
    : State(stateID)
{
	mName = "wait";
}

/**
 * @note Address: 0x8034B454
 * @note Size: 0x40
 */

void StateWait::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->startMotion(EGGANIM_Damage, nullptr);
	enemy->stopMotion();
}

/**
 * @note Address: 0x8034B494
 * @note Size: 0x1A8
 */
void StateWait::exec(EnemyBase* enemy)
{
	if (enemy->mHealth <= 0.0f) {
		OBJ(enemy)->genItem();

		Vector3f fxPos;
		enemy->getCommonEffectPos(fxPos);

		EnemyTypeID::EEnemyTypeID id = enemy->getEnemyTypeID();
		efx::ArgEnemyType type(fxPos, id, 1.0f);

		efx::TEggdown eggdown;
		eggdown.create(&type);

		efx::TEnemyBomb enemybomb;
		enemybomb.create(&type);

		enemy->mSoundObj->startSound(PSSE_EN_EGG_BREAK, 0);

		enemy->kill(nullptr);
	}

	if (enemy->mFlickTimer >= 1.0f) {
		enemy->startMotion();
		enemy->mFlickTimer = 0.0f;
	}

	if (enemy->mCurAnim->mIsPlaying && (u32)enemy->mCurAnim->mType == KEYEVENT_END) {
		enemy->startMotion(EGGANIM_Damage, nullptr);
		enemy->stopMotion();
	}
}
} // namespace Egg
} // namespace Game
