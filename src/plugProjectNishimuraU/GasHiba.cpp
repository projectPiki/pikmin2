#include "Game/Entities/GasHiba.h"
#include "Game/Entities/ItemBridge.h"
#include "Game/Entities/ItemGate.h"
#include "efx/TGasuHiba.h"
#include "Dolphin/rand.h"

namespace Game {
namespace GasHiba {

/**
 * @note Address: 0x8026D14C
 * @note Size: 0x138
 */
Obj::Obj()
{
	mAnimator = new ProperAnimator;
	setFSM(new FSM);
	createEffect();
}

/**
 * @note Address: 0x8026D284
 * @note Size: 0x4
 */
void Obj::setInitialSetting(EnemyInitialParamBase*) { }

/**
 * @note Address: 0x8026D288
 * @note Size: 0x100
 */
void Obj::onInit(CreatureInitArg* args)
{
	EnemyBase::onInit(args);
	disableEvent(0, EB_PlatformCollEnabled);
	disableEvent(0, EB_LeaveCarcass);
	disableEvent(0, EB_DeathEffectEnabled);
	hardConstraintOn();
	enableEvent(0, EB_BitterImmune);

	setEmotionNone();
	shadowMgr->killShadow(this);
	mTimer = 0.0f;
	resetBridgeGateCheck();
	mIsAlive = false;
	setupLodParms();

	f32 r = randWeightFloat(C_PROPERPARMS.mWaitTime.mValue);
	WaitStateArg arg;
	arg.mWaitTimer = r;
	mFsm->start(this, GASHIBA_Wait, &arg);
}

/**
 * @note Address: 0x8026D388
 * @note Size: 0x34
 */
void Obj::doUpdate() { mFsm->exec(this); }

/**
 * @note Address: 0x8026D3BC
 * @note Size: 0x4
 */
void Obj::doDirectDraw(Graphics&) { }

/**
 * @note Address: 0x8026D3C0
 * @note Size: 0x20
 */
void Obj::doDebugDraw(Graphics& gfx) { EnemyBase::doDebugDraw(gfx); }

/**
 * @note Address: 0x8026D3E0
 * @note Size: 0x4C
 */
void Obj::setFSM(FSM* fsm)
{
	mFsm = fsm;
	mFsm->init(this);
	mCurrentLifecycleState = nullptr;
}

/**
 * @note Address: 0x8026D42C
 * @note Size: 0x38
 */
void Obj::getShadowParam(ShadowParam& shadowParam)
{
	shadowParam.mPosition                 = mPosition;
	shadowParam.mBoundingSphere.mPosition = Vector3f(0.0f, 1.0f, 0.0f);
	shadowParam.mBoundingSphere.mRadius   = 1.0f;
	shadowParam.mSize                     = 1.0f;
}

/**
 * @note Address: 0x8026D464
 * @note Size: 0xC8
 */
bool Obj::damageCallBack(Creature* creature, f32 damage, CollPart* collpart)
{
	if ((creature) && !creature->isNavi()) {
		Vector3f position = creature->getPosition();
		position.y -= mPosition.y;

		Parms* parms = C_PARMS;
		if ((position.y < parms->mGeneral.mMaxAttackRange.mValue) && (position.y > -parms->mGeneral.mMaxAttackAngle.mValue)) {
			addDamage(damage, 1.0f);
			return true;
		}
	}
	return false;
}

/**
 * @note Address: 0x8026D52C
 * @note Size: 0x30
 */
bool Obj::pressCallBack(Creature* creature, f32 damage, CollPart* collpart)
{
	damageCallBack(creature, damage, collpart);
	return true;
}

/**
 * @note Address: 0x8026D55C
 * @note Size: 0x30
 */
bool Obj::hipdropCallBack(Creature* creature, f32 damage, CollPart* collpart)
{
	damageCallBack(creature, damage, collpart);
	return true;
}

/**
 * @note Address: 0x8026D58C
 * @note Size: 0x34
 */
bool Obj::bombCallBack(Creature* creature, Vector3f& vec, f32 damage)
{
	damageCallBack(creature, damage, nullptr);
	return true;
}

/**
 * @note Address: 0x8026D5C0
 * @note Size: 0x1D0
 */
void Obj::interactGasAttack()
{
	Parms* parms = C_PARMS;
	f32 max      = mPosition.y + parms->mGeneral.mMaxAttackRange.mValue;
	f32 min      = mPosition.y - parms->mGeneral.mMaxAttackAngle.mValue;
	f32 radSqr   = SQUARE(parms->mGeneral.mAttackRadius.mValue);

	Sys::Sphere sphere(mPosition);
	sphere.mRadius = parms->mGeneral.mAttackRadius.mValue;

	CellIteratorArg arg(sphere);
	arg.mOptimise = true;

	CellIterator iterator(arg);
	CI_LOOP(iterator)
	{
		Creature* creature = static_cast<Creature*>(*iterator);

		if (creature->isAlive() && (creature->isNavi() || creature->isPiki())) {
			Vector3f position = creature->getPosition();
			if ((max > position.y) && (min < position.y)) {
				Vector2f delta;
				getDistance2D(position, delta);
				if (SQUARE(delta.x) + SQUARE(delta.y) < radSqr) {
					InteractGas gas(this, C_GENERALPARMS.mAttackDamage.mValue);
					creature->stimulate(gas);
				}
			}
		}
	}
}

/**
 * @note Address: 0x8026D790
 * @note Size: 0x18
 */
void Obj::resetBridgeGateCheck()
{
	mIsBridgeGate = true;
	mBridge       = nullptr;
	mGate         = nullptr;
}

/**
 * @note Address: 0x8026D7A8
 * @note Size: 0x5B0
 */
void Obj::setInitLivingThing()
{
	if (mIsBridgeGate) {
		mIsBridgeGate = false;
		mBridge       = nullptr;
		mGate         = nullptr;

		if (gameSystem != nullptr && !gameSystem->mIsInCave && gameSystem->isStoryMode()) {
			if (ItemBridge::mgr != nullptr) {
				Iterator<BaseItem> bridgeIter(ItemBridge::mgr);

				CI_LOOP(bridgeIter)
				{
					ItemBridge::Item* bridge = static_cast<ItemBridge::Item*>(*bridgeIter);
					Vector3f bridgePos       = bridge->getPosition();
					f32 yDist                = bridgePos.y - mPosition.y;
					yDist                    = (yDist > 0.0f) ? yDist : -yDist;

					if (yDist < 25.0f) {
						f32 xDist = bridgePos.x - mPosition.x;
						xDist     = (xDist > 0.0f) ? xDist : -xDist;

						if (xDist < 75.0f) {
							f32 zDist = bridgePos.z - mPosition.z;
							zDist     = (zDist > 0.0f) ? zDist : -zDist;

							if (zDist < 75.0f) {
								mBridge = bridge;
								break;
							}
						}
					}
				}
			}

			if (itemGateMgr != nullptr && mBridge == nullptr) {
				Iterator<ItemGate> gateIter(&itemGateMgr->mNodeObjectMgr);

				CI_LOOP(gateIter)
				{
					ItemGate* gate   = *gateIter;
					Vector3f gatePos = gate->getPosition();
					f32 yDist        = gatePos.y - mPosition.y;
					yDist            = (yDist > 0.0f) ? yDist : -yDist;

					if (yDist < 25.0f) {
						f32 xDist = gatePos.x - mPosition.x;
						xDist     = (xDist > 0.0f) ? xDist : -xDist;

						if (xDist < 75.0f) {
							f32 zDist = gatePos.z - mPosition.z;
							zDist     = (zDist > 0.0f) ? zDist : -zDist;

							if (zDist < 75.0f) {
								mGate = gate;
								break;
							}
						}
					}
				}
			}
		}

		if (mBridge != nullptr || mGate != nullptr) {
			mIsAlive = false;
		} else {
			mIsAlive = true;
		}
	}
}

/**
 * @note Address: 0x8026DD58
 * @note Size: 0x9C
 */
void Obj::updateLivingThing()
{
	if (!isLivingThing()) {
		if (mBridge) {
			if (mBridge->mCurrStageIdx != 0) {
				mIsAlive = true;
			}

		} else if (mGate) {
			if (!mGate->isAlive()) {
				mIsAlive = true;
			}

		} else {
			mIsAlive = true;
		}
	}
}

/**
 * @note Address: 0x8026DDFC
 * @note Size: 0x24
 */
void Obj::setupLodParms()
{
	mLodParm.mFar        = C_PROPERPARMS.mLodNear.mValue;
	mLodParm.mClose      = C_PROPERPARMS.mLodMiddle.mValue;
	mLodParm.mIsCylinder = false;
}

/**
 * @note Address: 0x8026DE20
 * @note Size: 0x2C
 */
void Obj::updateEfxLod() { mEfxGas->setRateLOD(mLod.isFlag(AILOD_IsMid | AILOD_IsFar)); }

/**
 * @note Address: 0x8026DE4C
 * @note Size: 0x5C
 */
void Obj::createEffect() { mEfxGas = new efx::TGasuHiba; }

/**
 * @note Address: 0x8026DEA8
 * @note Size: 0xA0
 */
void Obj::startGasEffect()
{
	bool underground = false;
	if ((gameSystem) && (!gameSystem->mIsInCave)) {
		underground = true;
	}
	efx::ArgGasuHiba arg(mPosition);
	arg.mIsUnderground = underground;
	mEfxGas->create(&arg);
}

/**
 * @note Address: 0x8026DF48
 * @note Size: 0x30
 */
void Obj::finishGasEffect() { mEfxGas->fade(); }

/**
 * @note Address: 0x8026DF78
 * @note Size: 0x44
 */
void Obj::generatorKill()
{
	if (mGenerator) {
		mGenerator->informDeath(this);
		mGenerator = nullptr;
	}
}

} // namespace GasHiba
} // namespace Game
