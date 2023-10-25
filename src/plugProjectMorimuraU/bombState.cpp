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
/*
 * --INFO--
 * Address:	803493F8
 * Size:	000078
 */
void FSM::init(EnemyBase*)
{
	create(BOMB_Count);
	registerState(new StateWait(BOMB_Wait));
	registerState(new StateBomb(BOMB_Bomb));
}

/*
 * --INFO--
 * Address:	80349470
 * Size:	00003C
 */
StateWait::StateWait(int stateID)
    : State(stateID)
{
	mName = "wait";
}

/*
 * --INFO--
 * Address:	803494AC
 * Size:	00005C
 */
void Bomb::StateWait::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* bomb = OBJ(enemy);
	bomb->startMotion(BOMBANIM_HitStart, nullptr);
	bomb->stopMotion();
	bomb->setEmotionCaution();
	_10 = 0;
}

/*
 * --INFO--
 * Address:	80349508
 * Size:	000148
 */
void Bomb::StateWait::exec(EnemyBase* enemy)
{
	Obj* bomb = OBJ(enemy);
	if ((bomb->_2BC != 0) && (bomb->mCaptureMatrix == nullptr)) {
		_10++;
		if (_10 > 200) {
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

/*
 * --INFO--
 * Address:	80349650
 * Size:	00003C
 */
StateBomb::StateBomb(int stateID)
    : State(stateID)
{
	mName = "bomb";
}

/*
 * --INFO--
 * Address:	8034968C
 * Size:	000060
 */
void Bomb::StateBomb::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->disableEvent(0, EB_Cullable);
	enemy->startMotion(BOMBANIM_HitLoop, nullptr);
	enemy->setEmotionExcitement();
	_10 = 0;
}

/*
 * --INFO--
 * Address:	803496EC
 * Size:	0005C4
 */
void StateBomb::exec(EnemyBase* enemy)
{
	enemy->mSoundObj->startSound(PSSE_EN_BOMB_LOOP, 0);
	enemy->addDamage(sys->mDeltaTime, 1.0f);

	if (enemy->mHealth <= 0.0f) {
		_10++;
		if (!(_10 < 10)) {
			_10 = 0;
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

			cameraMgr->startVibration(12, effectPos, 2);
			rumbleMgr->startRumble(15, effectPos, 2);

			Vector3f position = enemy->getPosition();
			Parms* parms      = static_cast<Parms*>(enemy->mParms);
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

							f32 force = static_cast<Parms*>(enemy->mParms)->mGeneral.mAttackDamage.mValue;
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
