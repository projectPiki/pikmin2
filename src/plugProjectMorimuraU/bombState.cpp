#include "types.h"
#include "Game/Entities/Bomb.h"
#include "Game/Entities/OtakaraBase.h"
#include "Game/EnemyAnimKeyEvent.h"
#include "Game/CameraMgr.h"
#include "Game/rumble.h"
#include "efx/TBombrock.h"
#include "nans.h"

namespace Game {
namespace Bomb {
/**
 * @note Address: 0x803493F8
 * @note Size: 0x78
 */
void FSM::init(EnemyBase*)
{
	create(BOMB_Count);
	registerState(new StateWait(BOMB_Wait));
	registerState(new StateBomb(BOMB_Bomb));
}

/**
 * @note Address: 0x80349470
 * @note Size: 0x3C
 */
StateWait::StateWait(int stateID)
    : State(stateID)
{
	mName = "wait";
}

/**
 * @note Address: 0x803494AC
 * @note Size: 0x5C
 */
void Bomb::StateWait::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* bomb = OBJ(enemy);
	bomb->startMotion(BOMBANIM_HitStart, nullptr);
	bomb->stopMotion();
	bomb->setEmotionCaution();
	mExplodeDelayTimer = 0;
}

/**
 * @note Address: 0x80349508
 * @note Size: 0x148
 */
void Bomb::StateWait::exec(EnemyBase* enemy)
{
	Obj* bomb = OBJ(enemy);
	if ((bomb->mHasEscapedCapture != 0) && (bomb->mCaptureMatrix == nullptr)) {
		mExplodeDelayTimer++;
		if (mExplodeDelayTimer > 200) {
			bomb->kill(nullptr);
		}
	}

	if (!bomb->isStopMotion()) {
		bomb->addDamage(sys->mDeltaTime, 1.0f);
		bomb->mSoundObj->startSound(PSSE_EN_BOMB_LOOP, 0);

	} else if (bomb->isAnimStart()) {
		bomb->enableEvent(0, EB_NoInterrupt);
		bomb->startMotion();
		bomb->disableEvent(0, EB_Cullable);
		bomb->setEmotionExcitement();
	}

	if (bomb->mCurAnim->mIsPlaying) {
		switch (bomb->mCurAnim->mType) {
		case KEYEVENT_2:
			bomb->disableEvent(0, EB_NoInterrupt);
			break;
		case KEYEVENT_END:
			transit(bomb, BOMB_Bomb, nullptr);
			break;
		}
	}
}

/**
 * @note Address: 0x80349650
 * @note Size: 0x3C
 */
StateBomb::StateBomb(int stateID)
    : State(stateID)
{
	mName = "bomb";
}

/**
 * @note Address: 0x8034968C
 * @note Size: 0x60
 */
void Bomb::StateBomb::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->disableEvent(0, EB_Cullable);
	enemy->startMotion(BOMBANIM_HitLoop, nullptr);
	enemy->setEmotionExcitement();
	mExplodeDelayTimer = 0;
}

/**
 * @note Address: 0x803496EC
 * @note Size: 0x5C4
 */
void StateBomb::exec(EnemyBase* enemy)
{
	enemy->mSoundObj->startSound(PSSE_EN_BOMB_LOOP, 0);
	enemy->addDamage(sys->mDeltaTime, 1.0f);

	if (enemy->mHealth <= 0.0f) {
		mExplodeDelayTimer++;
		if (!(mExplodeDelayTimer < 10)) {
			mExplodeDelayTimer = 0;
			enemy->setEmotionCaution();
			Vector3f effectPos;
			enemy->getCommonEffectPos(effectPos);
			EnemyTypeID::EEnemyTypeID id = enemy->getEnemyTypeID();
			efx::ArgEnemyType fxArg(effectPos, id, 1.0f);
			efx::TBombrock bombEffect;
			efx::TBombrockABCD* abcdPtr = &bombEffect.mEfxBombABCD;
			efx::TBombrockEFGH* efghPtr = &bombEffect.mEfxBombEFGH;

			if (abcdPtr->create(&fxArg)) {
				efghPtr->create(&fxArg);
			}
			OBJ(enemy)->mEfxLight->forceKill();
			enemy->mSoundObj->startSound(PSSE_PK_SE_BOMB, 0);

			if (enemy->mWaterBox) {
				OBJ(enemy)->bombEffInWater();
			}

			cameraMgr->startVibration(VIBTYPE_MidMidShort, effectPos, CAMNAVI_Both);
			rumbleMgr->startRumble(RUMBLETYPE_Fixed15, effectPos, RUMBLEID_Both);

			Vector3f position = enemy->getPosition();
			Parms* parms      = CG_PARMS(enemy);
			f32 offset        = parms->mProperParms.mBlastRangeHeight.mValue;
			f32 max           = position.y + offset;
			f32 min           = position.y - offset;

			Sys::Sphere sphere;
			sphere.mPosition = Vector3f(position);
			sphere.mRadius   = parms->mGeneral.mAttackRadius.mValue;
			CellIteratorArg iteratorArg(sphere);
			iteratorArg.mUseCustomRadius = 1;

			CellIterator iterator(iteratorArg);
			CI_LOOP(iterator)
			{
				Creature* creature = static_cast<Creature*>(*iterator);
				if (creature->isAlive() && (creature != enemy)) {
					Vector3f creaturePos = creature->getPosition();
					if (!(creaturePos.y > max) && !(creaturePos.y < min)) {
						if (creature->isTeki()) {

							f32 weight = 1.0f;
							f32 force  = weight * CG_PROPERPARMS(enemy).mDamageToEnemies.mValue;
							InteractBomb interBomb(enemy, force, &Vector3f::zero);

							creature->stimulate(interBomb);

						} else if (creature->isNavi() || creature->isPiki()) {
							Creature* target = OBJ(enemy)->mCarrier;

							if (OBJ(enemy)->mCarrier == nullptr) {
								target = enemy;
							}

							Vector3f sep = creature->getPosition();
							sep -= position;
							_normaliseXZ(sep);

							f32 pikiWeight = 100.0f;
							if (creature->isPiki()) {
								pikiWeight = 200.0f;
							}

							f32 force = CG_GENERALPARMS(enemy).mAttackDamage.mValue;
							sep *= pikiWeight;
							sep.y = pikiWeight;

							InteractBomb interBomb(target, force, &sep);

							creature->stimulate(interBomb);
						}
					}
				}
			}

			enemy->kill(nullptr);
		}
	}
}

} // namespace Bomb
} // namespace Game
