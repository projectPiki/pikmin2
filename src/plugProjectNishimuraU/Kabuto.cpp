#include "Game/Entities/Kabuto.h"
#include "Game/EnemyFunc.h"
#include "Game/generalEnemyMgr.h"
#include "Game/Entities/Rock.h"
#include "efx/TKabutoAttack.h"
#include "Dolphin/rand.h"

namespace Game {
namespace Kabuto {
/**
 * @note Address: 0x802E4178
 * @note Size: 0x14C
 */
Obj::Obj()
{
	mAnimator = new ProperAnimator();
	setFSM(new FSM());
	createEffect();
}

/**
 * @note Address: 0x802E42C8
 * @note Size: 0x4
 */
void Obj::setInitialSetting(EnemyInitialParamBase*)
{
}

/**
 * @note Address: 0x802E42CC
 * @note Size: 0x108
 */
void Obj::onInit(CreatureInitArg* initArg)
{
	EnemyBase::onInit(initArg);
	if (gameSystem && gameSystem->isZukanMode()) {
		enableEvent(0, EB_Invulnerable);
	}

	mAlertTimer    = 128.0f;
	mIsUnderground = false;
	mStateTimer    = 0.0f;
	mAlertTimer    = 0.0f;
	mNextState     = KABUTO_NULL;
	mIsWalking     = false;
	setupEffect();

	if (getEnemyTypeID() == EnemyTypeID::EnemyID_Fkabuto) {
		hardConstraintOn();
		mFsm->start(this, KABUTO_FixStay, nullptr);
		doAnimationCullingOff();
	} else {
		mFsm->start(this, KABUTO_Wait, nullptr);
	}
}

/**
 * @note Address: 0x802E43D8
 * @note Size: 0x44
 */
void Obj::doUpdate()
{
	updateCaution();
	mFsm->exec(this);
}

/**
 * @note Address: 0x802E441C
 * @note Size: 0x4
 */
void Obj::doDirectDraw(Graphics&)
{
}

/**
 * @note Address: 0x802E4420
 * @note Size: 0x20
 */
void Obj::doDebugDraw(Graphics& gfx)
{
	EnemyBase::doDebugDraw(gfx);
}

/**
 * @note Address: 0x802E4440
 * @note Size: 0x4C
 */
void Obj::setFSM(FSM* fsm)
{
	mFsm = fsm;
	mFsm->init(this);
	mCurrentLifecycleState = nullptr;
}

/**
 * @note Address: 0x802E448C
 * @note Size: 0xA8
 */
void Obj::getShadowParam(ShadowParam& shadowParam)
{
	shadowParam.mPosition                 = mModel->getJoint("center")->getWorldMatrix()->getColumn(3);
	shadowParam.mPosition.y               = mPosition.y + 5.0f;
	shadowParam.mBoundingSphere.mPosition = Vector3f(0.0f, 1.0f, 0.0f);

	if (isEvent(1, EB2_Earthquake)) {
		shadowParam.mBoundingSphere.mRadius = 50.0f;
	} else {
		shadowParam.mBoundingSphere.mRadius = 10.0f;
	}

	shadowParam.mSize = 25.0f;
}

/**
 * @note Address: 0x802E4534
 * @note Size: 0x54
 */
void Obj::doStartStoneState()
{
	EnemyBase::doStartStoneState();
	finishRotateEffect();
	finishWaitEffect();
}

/**
 * @note Address: 0x802E4588
 * @note Size: 0xB0
 */
void Obj::doFinishStoneState()
{
	EnemyBase::doFinishStoneState();
	EnemyFunc::flickStickPikmin(this, 1.0f, 10.0f, 0.0f, FLICK_BACKWARD_ANGLE, nullptr);

	if (getEnemyTypeID() == EnemyTypeID::EnemyID_Fkabuto) {
		int stateID = getStateID();
		if (stateID >= KABUTO_FixWait) { // wait, turn, attack, flick
			startWaitEffect();
		}
		if (stateID == KABUTO_FixTurn) {
			startRotateEffect();
		}
	}
}

/**
 * @note Address: 0x802E4638
 * @note Size: 0x28
 */
void Obj::startCarcassMotion()
{
	startMotion(KABUTOANIM_Carry, nullptr);
}

/**
 * @note Address: 0x802E4660
 * @note Size: 0x2C
 */
void Obj::doStartMovie()
{
	effectDrawOff();
}

/**
 * @note Address: 0x802E4690
 * @note Size: 0x2C
 */
void Obj::doEndMovie()
{
	effectDrawOn();
}

/**
 * @note Address: 0x802E46C0
 * @note Size: 0x94
 */
void Obj::initWalkSmokeEffect()
{
	mWalkSmokeMgr.alloc(4);
	mWalkSmokeMgr.setup(0, mModel, "rhand2", 11.0f);
	mWalkSmokeMgr.setup(1, mModel, "rleg", 16.0f);
	mWalkSmokeMgr.setup(2, mModel, "lhand2", 11.0f);
	mWalkSmokeMgr.setup(3, mModel, "lleg", 16.0f);
}

/**
 * @note Address: 0x802E4754
 * @note Size: 0x8
 */
WalkSmokeEffect::Mgr* Obj::getWalkSmokeEffectMgr()
{
	return &mWalkSmokeMgr;
}

/**
 * @note Address: 0x802E475C
 * @note Size: 0x198
 */
void Obj::setRandTarget()
{
	f32 randRadius
	    = C_GENERALPARMS.mHomeRadius.mValue + randWeightFloat(C_GENERALPARMS.mTerritoryRadius.mValue - C_GENERALPARMS.mHomeRadius.mValue);
	f32 angledist = JMAAtan2Radian(mPosition.x - mHomePosition.x, mPosition.z - mHomePosition.z);
	f32 angle     = HALF_PI + (angledist + randWeightFloat(PI));

	mTargetPosition = Vector3f(randRadius * sinf(angle) + mHomePosition.x, mHomePosition.y, randRadius * cosf(angle) + mHomePosition.z);
}

/**
 * @note Address: 0x802E48F4
 * @note Size: 0x58
 */
Creature* Obj::getSearchedTarget()
{
	Creature* target
	    = EnemyFunc::getNearestPikminOrNavi(this, getViewAngle(), C_GENERALPARMS.mSightRadius.mValue, nullptr, nullptr, nullptr);
	if (target) {
		mAlertTimer = 0.0f;
	}
	return target;
}

/**
 * @note Address: 0x802E494C
 * @note Size: 0x2BC
 */
bool Obj::isAttackableTarget()
{
	Vector3f dir(sinf(mFaceDir), 0.0f, cosf(mFaceDir));
	Vector3f orthoDir(-dir.z, 0.0f, dir.x);
	f32 scale = 0.5f * C_GENERALPARMS.mSightRadius();

	Vector3f pos(dir.x * scale + mPosition.x, dir.y * scale + mPosition.y, dir.z * scale + mPosition.z);
	Sys::Sphere sphere(pos, 0.75f * C_GENERALPARMS.mSightRadius());
	CellIteratorArg iterArg(sphere);
	iterArg.mOptimise = true;

	CellIterator iter(iterArg);

	CI_LOOP(iter)
	{
		Creature* creature = static_cast<Creature*>(*iter);
		if (creature->isAlive()) {
			bool check = creature->isNavi();
			if (!check && (creature->isPiki() && static_cast<Piki*>(creature)->isPikmin())) {
				check = true;
			}
			if (check) {
				Vector3f diff = creature->getPosition();
				diff -= mPosition;

				if (absVal(diff.y) < C_GENERALPARMS.mFov() && absVal(orthoDir.dot(diff)) < 15.0f) {
					f32 dist = dir.dot(diff);
					if (dist > 15.0f && dist < C_GENERALPARMS.mSightRadius()) {
						return true;
					}
				}
			}
		}
	}

	return false;
}

/**
 * @note Address: 0x802E4C08
 * @note Size: 0xE4
 */
void Obj::createStoneAttack()
{
	Rock::Mgr* rockMgr = static_cast<Rock::Mgr*>(generalEnemyMgr->getEnemyMgr(EnemyTypeID::EnemyID_Rock));
	if (rockMgr) {
		EnemyBirthArg birthArg;
		birthArg.mTypeID  = EnemyTypeID::EnemyID_Stone;
		Matrixf* worldMat = mModel->getJoint("mouth")->getWorldMatrix();
		if (worldMat) {
			birthArg.mPosition = Vector3f(worldMat->mMatrix.structView.tx, 25.0f + mPosition.y, worldMat->mMatrix.structView.tz);
		}

		birthArg.mFaceDir = mFaceDir;

		Rock::Obj* rock = static_cast<Rock::Obj*>(rockMgr->birth(birthArg));
		if (rock) {
			rock->init(nullptr);
			rock->mSourceEnemy = this;
			if (getEnemyTypeID() == EnemyTypeID::EnemyID_Rkabuto) {
				rock->mIsHoming = true;
			}
		}
	}
}

/**
 * @note Address: 0x802E4CEC
 * @note Size: 0x50
 */
void Obj::updateCaution()
{
	if (isEvent(0, EB_Colliding) || isEvent(0, EB_TakingDamage) || mStuckPikminCount != 0) {
		mAlertTimer = 0.0f;
	}

	if (mAlertTimer < C_GENERALPARMS.mAlertDuration.mValue) {
		mAlertTimer += sys->mDeltaTime;
	}
}

/**
 * @note Address: 0x802E4D3C
 * @note Size: 0x24
 */
f32 Obj::getViewAngle()
{
	if (mAlertTimer < C_GENERALPARMS.mAlertDuration.mValue) {
		return 180.0f;
	}

	return C_GENERALPARMS.mViewAngle.mValue;
}

/**
 * @note Address: 0x802E4D60
 * @note Size: 0x40
 */
void Obj::lifeIncrement()
{
	mInstantDamage = 0.0f;
	disableEvent(0, EB_TakingDamage);
	mHealth += 1.0f;
	if (mHealth > C_GENERALPARMS.mHealth()) {
		mHealth = C_GENERALPARMS.mHealth();
	}
}

/**
 * @note Address: 0x802E4DA0
 * @note Size: 0x7C
 */
void Obj::createRockEmitEffect()
{
	efx::TKabutoAttack attackFX(mModel->getJoint("head")->getWorldMatrix());
	attackFX.create(nullptr);
}
} // namespace Kabuto
} // namespace Game
