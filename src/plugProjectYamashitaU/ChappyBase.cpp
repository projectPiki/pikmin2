#include "Game/Entities/ChappyBase.h"
#include "Game/EnemyFunc.h"
#include "Game/rumble.h"
#include "efx/THanacho.h"
#include "efx/TEnemyDownSmoke.h"
#include "efx/TEnemyDownWat.h"

namespace Game {
namespace ChappyBase {

/**
 * @note Address: 0x8012A950
 * @note Size: 0x15C
 */
Obj::Obj()
    : mFsm(nullptr)
{
	mAnimator = new ProperAnimator;
	setFSM(new FSM);
	createEffect();
}

/**
 * @brief Performs the birth operation for the chappy.
 *
 * This function initializes the chappy's position and other properties.
 *
 * @param position The initial position of the chappy.
 * @param faceDirection The initial direction of the chappy.
 *
 * @note Address: 0x8012AAAC
 * @note Size: 0x44
 */
void Obj::birth(Vector3f& position, f32 faceDirection)
{
	EnemyBase::birth(position, faceDirection);
	mShadowJoint = mModel->getJoint("ago");
	mAlertTimer  = 0.0f;
}

/**
 * @note Address: 0x8012AAF0
 * @note Size: 0x4
 */
void Obj::setInitialSetting(Game::EnemyInitialParamBase*) { }

/**
 * Initializes the chappy with the given CreatureInitArg.
 * This function sets up the LOD parameters, sleep arguments, and starts the FSM with the CHAPPY_Sleep state.
 *
 * @param initArg The CreatureInitArg used to initialize the chappy.
 *
 * @note Address: 0x8012AAF4
 * @note Size: 0x80
 *
 */
void Obj::onInit(CreatureInitArg* initArg)
{
	EnemyBase::onInit(initArg);
	mLodParm.mFar        = 0.2f;
	mLodParm.mClose      = 0.075f;
	mLodParm.mIsCylinder = false;

	SleepArg sleepArg;
	sleepArg.mDoSkipSleepStart = true;

	setupEffect();
	mFsm->start(this, CHAPPY_Sleep, &sleepArg);
}

/**
 * @note Address: 0x8012AB74
 * @note Size: 0x34
 */
void Obj::doUpdate() { mFsm->exec(this); }

/**
 * @note Address: 0x8012ABA8
 * @note Size: 0x4
 */
void Obj::doDirectDraw(Graphics&) { }

/**
 * @note Address: 0x8012ABAC
 * @note Size: 0x20
 */
void Obj::doDebugDraw(Graphics& gfx) { EnemyBase::doDebugDraw(gfx); }

/**
 * @note Address: 0x8012ABCC
 * @note Size: 0xC8
 */
void Obj::getShadowParam(ShadowParam& shadowParam)
{
	Matrixf* worldMat = mShadowJoint->getWorldMatrix();
	if (worldMat) {
		shadowParam.mPosition = worldMat->getColumn(3);
		shadowParam.mPosition.y -= 17.5f;
		f32 minY = 5.0f + mPosition.y;
		if (shadowParam.mPosition.y < minY) {
			shadowParam.mPosition.y = minY;
		}
	} else {
		shadowParam.mPosition = mPosition;
	}

	shadowParam.mBoundingSphere.mPosition = Vector3f(0.0f, 1.0f, 0.0f);
	shadowParam.mBoundingSphere.mRadius   = 100.0f;
	shadowParam.mSize                     = 32.0f;
}

/**
 * @note Address: 0x8012AC94
 * @note Size: 0x40
 */
bool Obj::damageCallBack(Creature* creature, f32 damage, CollPart* collpart)
{
	f32 scale;
	if (collpart) {
		scale = 1.0f;
	} else {
		scale = 0.2f;
		damage *= 0.25f;
	}

	addDamage(damage, scale);
	return true;
}

/**
 * Handles collision events.
 * Checks if the colliding creature is an enemy or a pellet, and performs specific actions based on the type of creature.
 *
 * @param collEvent The collision event object containing information about the collision.
 *
 * @note Address: 0x8012ACD4
 * @note Size: 0x150
 */
void Obj::collisionCallback(CollEvent& collEvent)
{
	bool isColliding   = false;
	Creature* creature = collEvent.mCollidingCreature;
	if (creature) {
		if (creature->isTeki()) {
			EnemyTypeID::EEnemyTypeID enemyID = static_cast<EnemyBase*>(creature)->getEnemyTypeID();
			if ((static_cast<EnemyBase*>(creature)->mSfxEmotion == EMOTE_Excitement) || (enemyID == EnemyTypeID::EnemyID_PanModoki)
			    || (enemyID == EnemyTypeID::EnemyID_OoPanModoki)
			    || (creature->isLivingThing() && (enemyID != EnemyTypeID::EnemyID_Kochappy) && (enemyID != EnemyTypeID::EnemyID_Chappy)
			        && (enemyID != EnemyTypeID::EnemyID_YellowKochappy) && (enemyID != EnemyTypeID::EnemyID_YellowChappy)
			        && (enemyID != EnemyTypeID::EnemyID_BlueKochappy) && (enemyID != EnemyTypeID::EnemyID_BlueChappy)
			        && (enemyID != EnemyTypeID::EnemyID_Pelplant) && (enemyID != EnemyTypeID::EnemyID_Egg)
			        && (enemyID != EnemyTypeID::EnemyID_ShijimiChou))) {
				isColliding = true;
			}
		} else if (creature->isPellet()) {
			if (static_cast<Pellet*>(creature)->isCarried()) {
				isColliding = true;
			}
		} else {
			isColliding = true;
		}
	}

	if (isColliding) {
		EnemyBase::collisionCallback(collEvent);
	}
}

/**
 * @note Address: 0x8012AE24
 * @note Size: 0x50
 */
void Obj::doStartStoneState()
{
	EnemyBase::doStartStoneState();
	if (getStateID() == CHAPPY_Sleep) {
		finishSleepEffect();
	}
}

/**
 * @note Address: 0x8012AE74
 * @note Size: 0x4
 */
void Obj::doFinishStoneState() { }

/**
 * @note Address: 0x8012AE78
 * @note Size: 0x64
 */
Vector3f Obj::getOffsetForMapCollision()
{
	Vector3f offset;
	Matrixf* worldMat = mShadowJoint->getWorldMatrix();

	offset.x = worldMat->mMatrix.mtxView[0][3];
	offset.x -= mPosition.x;

	offset.z = worldMat->mMatrix.mtxView[2][3];
	offset.z -= mPosition.z;

	offset.y = 0.0f;

	return offset;
}

/**
 * @note Address: 0x8012AEDC
 * @note Size: 0x28
 */
void Obj::startCarcassMotion() { startMotion(CHAPPYANIM_Carry, nullptr); }

/**
 * @note Address: 0x8012AF04
 * @note Size: 0xDC
 */
void Obj::initMouthSlots()
{
	mMouthSlots.alloc(5);
	mMouthSlots.setup(0, mModel, "kamu1");
	mMouthSlots.setup(1, mModel, "kamu2");
	mMouthSlots.setup(2, mModel, "kamu3");
	mMouthSlots.setup(3, mModel, "kamu4");
	mMouthSlots.setup(4, mModel, "kamu5");

	for (int i = 0; i < mMouthSlots.mMax; i++) {
		mMouthSlots.getSlot(i)->mRadius = 35.0f;
	}
}

/**
 * @note Address: 0x8012AFE0
 * @note Size: 0x64
 */
void Obj::initWalkSmokeEffect()
{
	mWalkSmokeMgr.alloc(2);
	mWalkSmokeMgr.setup(0, mModel, "asiL", 10.0f);
	mWalkSmokeMgr.setup(1, mModel, "asiR", 10.0f);
}

/**
 * @note Address: 0x8012B044
 * @note Size: 0x8
 */
WalkSmokeEffect::Mgr* Obj::getWalkSmokeEffectMgr() { return &mWalkSmokeMgr; }

/**
 * Checks if the object should wake up based on its enemy type and nearby creatures.
 * @return true if the object should wake up, false otherwise.
 *
 * @note Address: 0x8012B04C
 * @note Size: 0x200
 */
bool Obj::isWakeup()
{
	bool shouldWakeup = false;

	switch (getEnemyTypeID()) {
	case EnemyTypeID::EnemyID_BlueChappy: // Orange bulborb
		f32 radius = C_PROPERPARMS.mBulborbWakeRadius.mValue;
		Sys::Sphere detectionSphere(mPosition, radius);

		CellIteratorArg iterArg(detectionSphere);
		CellIterator i(iterArg);
		CI_LOOP(i)
		{
			Creature* c = static_cast<Creature*>(*i);

			// If the creature is an alive navigator or Piki
			if (c->isAlive() && (c->isNavi() || c->isPiki())) {
				radius = C_PROPERPARMS.mBulborbWakeRadius.mValue;
				if (isCreatureWithinRange(c, radius)) {
					// And within the private radius, then wakeup
					shouldWakeup = true;
					break;
				}
			}
		}
		break;
	default:
		if (isEvent(0, EB_TakingDamage) || isEvent(0, EB_Colliding)) {
			shouldWakeup = true;
		}
		break;
	}

	return shouldWakeup;
}

/**
 * @note Address: 0x8012B24C
 * @note Size: 0xB0
 */
void Obj::setCollEvent(CollEvent& collEvent)
{
	Creature* creature = nullptr;
	if (collEvent.mCollidingCreature->isPellet()) {
		creature = collEvent.mCollidingCreature;
	}

	if ((creature == nullptr) || ((creature != nullptr) && creature->isAlive() && static_cast<Pellet*>(creature)->isCarried())) {
		EnemyBase::setCollEvent(collEvent);
	}
}

/**
 * @note Address: 0x8012B2FC
 * @note Size: 0xC8
 */
void Obj::flickStatePikmin()
{
	Parms* stickParms = C_PARMS;
	EnemyFunc::flickStickPikmin(this, stickParms->mGeneral.mShakeChance.mValue, stickParms->mGeneral.mShakeKnockback.mValue,
	                            stickParms->mGeneral.mShakeDamage.mValue, getFaceDir(), nullptr);

	Parms* nearPikiParms = C_PARMS;
	EnemyFunc::flickNearbyPikmin(this, nearPikiParms->mGeneral.mShakeRange.mValue, nearPikiParms->mGeneral.mShakeKnockback.mValue,
	                             nearPikiParms->mGeneral.mShakeDamage.mValue, getFaceDir(), nullptr);

	Parms* nearNaviParms = C_PARMS;
	EnemyFunc::flickNearbyNavi(this, nearNaviParms->mGeneral.mShakeRange.mValue, nearNaviParms->mGeneral.mShakeKnockback.mValue,
	                           nearNaviParms->mGeneral.mShakeDamage.mValue, getFaceDir(), nullptr);
}

/**
 * @note Address: 0x8012B3C4
 * @note Size: 0x1A4
 */
void Obj::flickAttackBomb()
{
	Vector3f effectPos = mPosition;
	effectPos += mEffectOffset;

	if (mWaterBox) {
		effectPos.y = *mWaterBox->getSeaHeightPtr();
		efx::ArgScale argWater(effectPos, 1.0f);
		efx::TEnemyDownWat downWatEffect;
		downWatEffect.create(&argWater);
	} else {
		efx::Arg argLand(effectPos);
		efx::TEnemyDownSmoke downSmokeEffect(1.0f);
		downSmokeEffect.mScale = 0.75f;
		downSmokeEffect.create(&argLand);
	}

	rumbleMgr->startRumble(RUMBLETYPE_Fixed11, effectPos, RUMBLEID_Both);
}

/**
 * @note Address: 0x8012B568
 * @note Size: 0x60
 */
void Obj::flickAttackFail()
{
	Parms* parms = C_PARMS;
	EnemyFunc::flickStickPikmin(this, parms->mGeneral.mShakeChance.mValue, parms->mGeneral.mShakeKnockback.mValue,
	                            parms->mGeneral.mShakeDamage.mValue, getFaceDir(), nullptr);
}

/**
 * @note Address: 0x8012B5C8
 * @note Size: 0x24
 */
int Obj::eatAttackPikmin() { return EnemyFunc::eatPikmin(this, nullptr); }

/**
 * @note Address: 0x8012B5EC
 * @note Size: 0xB0
 */
void Obj::createEffect() { mEfxHanacho = new efx::THanachoN; }

/**
 * @note Address: 0x8012B720
 * @note Size: 0x50
 */
void Obj::setupEffect()
{
	SysShape::Joint* headJoint = mModel->getJoint("head");
	if (headJoint) {
		Matrixf* worldMat = headJoint->getWorldMatrix();
		if (worldMat) {
			mEfxHanacho->mMtx = worldMat;
		}
	}
}

/**
 * @note Address: 0x8012B770
 * @note Size: 0x34
 */
void Obj::startSleepEffect() { static_cast<efx::THanachoN*>(mEfxHanacho)->create(nullptr); }

/**
 * @note Address: 0x8012B7A4
 * @note Size: 0x30
 */
void Obj::finishSleepEffect() { static_cast<efx::THanachoN*>(mEfxHanacho)->fade(); }

} // namespace ChappyBase
} // namespace Game
