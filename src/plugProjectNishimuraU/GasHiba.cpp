#include "Game/Entities/GasHiba.h"
#include "Game/Entities/ItemBridge.h"
#include "Game/Entities/ItemGate.h"
#include "efx/TGasuHiba.h"
#include "Dolphin/rand.h"

namespace Game {
namespace GasHiba {

/*
 * --INFO--
 * Address:	8026D14C
 * Size:	000138
 */
Obj::Obj()
{
	mAnimator = new ProperAnimator;
	setFSM(new FSM);
	createEffect();
}

/*
 * --INFO--
 * Address:	8026D284
 * Size:	000004
 */
void Obj::setInitialSetting(EnemyInitialParamBase*) { }

/*
 * --INFO--
 * Address:	8026D288
 * Size:	000100
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

/*
 * --INFO--
 * Address:	8026D388
 * Size:	000034
 */
void Obj::doUpdate() { mFsm->exec(this); }

/*
 * --INFO--
 * Address:	8026D3BC
 * Size:	000004
 */
void Obj::doDirectDraw(Graphics&) { }

/*
 * --INFO--
 * Address:	8026D3C0
 * Size:	000020
 */
void Obj::doDebugDraw(Graphics& gfx) { EnemyBase::doDebugDraw(gfx); }

/*
 * --INFO--
 * Address:	8026D3E0
 * Size:	00004C
 */
void Obj::setFSM(FSM* fsm)
{
	mFsm = fsm;
	mFsm->init(this);
	mCurrentLifecycleState = nullptr;
}

/*
 * --INFO--
 * Address:	8026D42C
 * Size:	000038
 */
void Obj::getShadowParam(ShadowParam& shadowParam)
{
	shadowParam.mPosition                 = mPosition;
	shadowParam.mBoundingSphere.mPosition = Vector3f(0.0f, 1.0f, 0.0f);
	shadowParam.mBoundingSphere.mRadius   = 1.0f;
	shadowParam.mSize                     = 1.0f;
}

/*
 * --INFO--
 * Address:	8026D464
 * Size:	0000C8
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

/*
 * --INFO--
 * Address:	8026D52C
 * Size:	000030
 */
bool Obj::pressCallBack(Creature* creature, f32 damage, CollPart* collpart)
{
	damageCallBack(creature, damage, collpart);
	return true;
}

/*
 * --INFO--
 * Address:	8026D55C
 * Size:	000030
 */
bool Obj::hipdropCallBack(Creature* creature, f32 damage, CollPart* collpart)
{
	damageCallBack(creature, damage, collpart);
	return true;
}

/*
 * --INFO--
 * Address:	8026D58C
 * Size:	000034
 */
bool Obj::bombCallBack(Creature* creature, Vector3f& vec, f32 damage)
{
	damageCallBack(creature, damage, nullptr);
	return true;
}

/*
 * --INFO--
 * Address:	8026D5C0
 * Size:	0001D0
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
	arg.mIsSphereCollisionDisabled = true;

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
					InteractGas gas(this, C_PARMS->mGeneral.mAttackDamage.mValue);
					creature->stimulate(gas);
				}
			}
		}
	}
}

/*
 * --INFO--
 * Address:	8026D790
 * Size:	000018
 */
void Obj::resetBridgeGateCheck()
{
	mIsBridgeGate = true;
	mBridge       = nullptr;
	mGate         = nullptr;
}

/*
 * --INFO--
 * Address:	8026D7A8
 * Size:	0005B0
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

/*
 * --INFO--
 * Address:	8026DD58
 * Size:	00009C
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

/*
 * --INFO--
 * Address:	8026DDFC
 * Size:	000024
 */
void Obj::setupLodParms()
{
	mLodParm.mFar        = C_PARMS->mProperParms.mLodNear.mValue;
	mLodParm.mClose      = C_PARMS->mProperParms.mLodMiddle.mValue;
	mLodParm.mIsCylinder = false;
}

/*
 * --INFO--
 * Address:	8026DE20
 * Size:	00002C
 */
void Obj::updateEfxLod() { mEfxGas->setRateLOD(mLod.isFlag(AILOD_IsMid | AILOD_IsFar)); }

/*
 * --INFO--
 * Address:	8026DE4C
 * Size:	00005C
 */
void Obj::createEffect() { mEfxGas = new efx::TGasuHiba; }

/*
 * --INFO--
 * Address:	8026DEA8
 * Size:	0000A0
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

/*
 * --INFO--
 * Address:	8026DF48
 * Size:	000030
 */
void Obj::finishGasEffect() { mEfxGas->fade(); }

/*
 * --INFO--
 * Address:	8026DF78
 * Size:	000044
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
