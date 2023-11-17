#include "Game/Entities/ChappyBase.h"
#include "Game/EnemyFunc.h"
#include "Game/rumble.h"
#include "efx/THanacho.h"
#include "efx/TEnemyDownSmoke.h"
#include "efx/TEnemyDownWat.h"

namespace Game {
namespace ChappyBase {

/*
 * --INFO--
 * Address:	8012A950
 * Size:	00015C
 */
Obj::Obj()
    : mFsm(nullptr)
{
	mAnimator = new ProperAnimator;
	setFSM(new FSM);
	createEffect();
}

/*
 * --INFO--
 * Address:	8012AAAC
 * Size:	000044
 */
void Obj::birth(Vector3f& position, f32 p1)
{
	EnemyBase::birth(position, p1);
	mShadowJoint = mModel->getJoint("ago");
	_2CC         = 0.0f;
}

/*
 * --INFO--
 * Address:	8012AAF0
 * Size:	000004
 */
void Obj::setInitialSetting(Game::EnemyInitialParamBase*) { }

/*
 * --INFO--
 * Address:	8012AAF4
 * Size:	000080
 */
void Obj::onInit(CreatureInitArg* initArg)
{
	EnemyBase::onInit(initArg);
	mLodParm.mFar        = 0.2f;
	mLodParm.mClose      = 0.075f;
	mLodParm.mIsCylinder = false;

	SleepArg sleepArg;
	sleepArg._00 = true;

	setupEffect();
	mFsm->start(this, CHAPPY_Sleep, &sleepArg);
}

/*
 * --INFO--
 * Address:	8012AB74
 * Size:	000034
 */
void Obj::doUpdate() { mFsm->exec(this); }

/*
 * --INFO--
 * Address:	8012ABA8
 * Size:	000004
 */
void Obj::doDirectDraw(Graphics&) { }

/*
 * --INFO--
 * Address:	8012ABAC
 * Size:	000020
 */
void Obj::doDebugDraw(Graphics& gfx) { EnemyBase::doDebugDraw(gfx); }

/*
 * --INFO--
 * Address:	8012ABCC
 * Size:	0000C8
 */
void Obj::getShadowParam(ShadowParam& shadowParam)
{
	Matrixf* worldMat = mShadowJoint->getWorldMatrix();
	if (worldMat) {
		shadowParam.mPosition = worldMat->getBasis(3);
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

/*
 * --INFO--
 * Address:	8012AC94
 * Size:	000040
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

/*
 * --INFO--
 * Address:	8012ACD4
 * Size:	000150
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

/*
 * --INFO--
 * Address:	8012AE24
 * Size:	000050
 */
void Obj::doStartStoneState()
{
	EnemyBase::doStartStoneState();
	if (getStateID() == CHAPPY_Sleep) {
		finishSleepEffect();
	}
}

/*
 * --INFO--
 * Address:	8012AE74
 * Size:	000004
 */
void Obj::doFinishStoneState() { }

/*
 * --INFO--
 * Address:	8012AE78
 * Size:	000064
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

/*
 * --INFO--
 * Address:	8012AEDC
 * Size:	000028
 */
void Obj::startCarcassMotion() { startMotion(CHAPPYANIM_Carry, nullptr); }

/*
 * --INFO--
 * Address:	8012AF04
 * Size:	0000DC
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

/*
 * --INFO--
 * Address:	8012AFE0
 * Size:	000064
 */
void Obj::initWalkSmokeEffect()
{
	mWalkSmokeMgr.alloc(2);
	mWalkSmokeMgr.setup(0, mModel, "asiL", 10.0f);
	mWalkSmokeMgr.setup(1, mModel, "asiR", 10.0f);
}

/*
 * --INFO--
 * Address:	8012B044
 * Size:	000008
 */
WalkSmokeEffect::Mgr* Obj::getWalkSmokeEffectMgr() { return &mWalkSmokeMgr; }

/*
 * --INFO--
 * Address:	8012B04C
 * Size:	000200
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

/*
 * --INFO--
 * Address:	8012B24C
 * Size:	0000B0
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

/*
 * --INFO--
 * Address:	8012B2FC
 * Size:	0000C8
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

/*
 * --INFO--
 * Address:	8012B3C4
 * Size:	0001A4
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
		efx::TEnemyDownSmoke downSmokeEffect;
		downSmokeEffect.mScale = 0.75f;
		downSmokeEffect.create(&argLand);
	}

	rumbleMgr->startRumble(11, effectPos, 2);
}

/*
 * --INFO--
 * Address:	8012B568
 * Size:	000060
 */
void Obj::flickAttackFail()
{
	Parms* parms = C_PARMS;
	EnemyFunc::flickStickPikmin(this, parms->mGeneral.mShakeChance.mValue, parms->mGeneral.mShakeKnockback.mValue,
	                            parms->mGeneral.mShakeDamage.mValue, getFaceDir(), nullptr);
}

/*
 * --INFO--
 * Address:	8012B5C8
 * Size:	000024
 */
int Obj::eatAttackPikmin() { return EnemyFunc::eatPikmin(this, nullptr); }

/*
 * --INFO--
 * Address:	8012B5EC
 * Size:	0000B0
 */
void Obj::createEffect() { mEfxHanacho = new efx::THanachoN; }

/*
 * --INFO--
 * Address:	8012B720
 * Size:	000050
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

/*
 * --INFO--
 * Address:	8012B770
 * Size:	000034
 */
void Obj::startSleepEffect() { static_cast<efx::THanachoN*>(mEfxHanacho)->create(nullptr); }

/*
 * --INFO--
 * Address:	8012B7A4
 * Size:	000030
 */
void Obj::finishSleepEffect() { static_cast<efx::THanachoN*>(mEfxHanacho)->fade(); }

} // namespace ChappyBase
} // namespace Game

namespace efx {
THanachoN::~THanachoN() { }
} // namespace efx
