#include "Game/enemyInfo.h"
#include "Game/MapMgr.h"
#include "Game/EnemyAnimKeyEvent.h"
#include "types.h"
#include "Game/Entities/Bomb.h"
#include "Game/Entities/BombOtakara.h"

namespace Game {
namespace Bomb {
/*
 * --INFO--
 * Address:	8034A21C
 * Size:	000020
 */
void Obj::setParameters() { EnemyBase::setParameters(); }

/*
 * --INFO--
 * Address:	8034A23C
 * Size:	0000EC
 */
void Obj::onStartCapture()
{
	mFsm->start(this, BOMB_Wait, nullptr);
	if (mCaptureMatrix) {
		Vector3f position = mCaptureMatrix->getBasis(3);
		onSetPosition(position);
		mCurrentVelocity = Vector3f(0.0f);
		mTargetVelocity  = Vector3f(0.0f);
		enableEvent(0, EB_Constrained);
		if (gameSystem && gameSystem->isVersusMode()) {
			disableEvent(0, EB_Invulnerable);
		} else {
			enableEvent(0, EB_Invulnerable);
		}

		disableEvent(0, EB_Cullable);
	}
}

/*
 * --INFO--
 * Address:	8034A328
 * Size:	000048
 */
void Obj::onEndCapture()
{
	constraintOff();
	disableEvent(0, EB_Invulnerable);
	_2BC           = 1;
	mCaptureMatrix = nullptr;
}

/*
 * --INFO--
 * Address:	8034A370
 * Size:	000020
 */
void Obj::birth(Vector3f& position, f32 p1) { EnemyBase::birth(position, p1); }

/*
 * --INFO--
 * Address:	8034A390
 * Size:	000168
 */
void Obj::onInit(CreatureInitArg* initArg)
{
	EnemyBase::onInit(initArg);
	disableEvent(0, EB_LeaveCarcass);
	disableEvent(0, EB_DamageAnimEnabled);
	disableEvent(0, EB_DeathEffectEnabled);

	_2BC     = 0;
	_2BD     = 0;
	_2C8     = 0;
	_2C0     = 0;
	_2C4     = 0;
	mCarrier = nullptr;

	mFsm->start(this, BOMB_Wait, nullptr);

	if (!isBirthTypeDropGroup()) {
		enableEvent(0, EB_Constrained);
		if (mapMgr) {
			Vector3f position = mPosition;
			position.y += 20.0f;
			mPosition.y = mapMgr->getMinY(position);
		}
	}

	mCurAnim->mIsPlaying = false;
	doAnimationUpdateAnimator();

	mBaseTrMatrix.makeSRT(mScale, mRotation, mPosition);

	PSMTXCopy(mBaseTrMatrix.mMatrix.mtxView, mModel->mJ3dModel->mPosMtx);
	mModel->mJ3dModel->calc();

	mEfxLight->mMtx = mModel->getJoint("core1")->getWorldMatrix();
}

/*
 * --INFO--
 * Address:	8034A4F8
 * Size:	0001DC
 */
Obj::Obj()
{
	_2BC      = 0;
	_2BD      = 0;
	_2C0      = 0;
	_2C4      = 0;
	_2C8      = 0;
	_2C9      = 0;
	mFsm      = nullptr;
	mEfxLight = nullptr;
	mAnimator = new ProperAnimator;
	setFSM(new FSM);
	mEfxLight = new efx::TBombrockLight;
}

/*
 * --INFO--
 * Address:	8034A720
 * Size:	0000D4
 */
void Obj::doUpdate()
{
	if (_2C9) {
		mAcceleration *= 0.9f;
		mCurrentVelocity.x *= 0.9f;
		if (mCurrentVelocity.y > 0.0f) {
			mCurrentVelocity.y *= 0.9f;
		}
		mCurrentVelocity.z *= 0.9f;
	}

	if (mBounceTriangle) {
		mTargetVelocity = Vector3f(0.0f);
	} else {
		mTargetVelocity = mCurrentVelocity;
	}

	mFsm->exec(this);
}

/*
 * --INFO--
 * Address:	8034A7F4
 * Size:	000004
 */
void Obj::doDirectDraw(Graphics&) { }

/*
 * --INFO--
 * Address:	8034A7F8
 * Size:	000004
 */
void Obj::doDebugDraw(Graphics&) { }

/*
 * --INFO--
 * Address:	8034A7FC
 * Size:	00002C
 */
void Obj::doEntry()
{
	if (!_2BD) {
		EnemyBase::doEntry();
	}
}

/*
 * --INFO--
 * Address:	8034A828
 * Size:	0001F4
 */
void Obj::doAnimationCullingOff()
{
	mCurAnim->mIsPlaying = false;
	doAnimationUpdateAnimator();
	bool check   = true;
	Vector3f vec = mBaseTrMatrix.getBasis(3);
	if (mCaptureMatrix) {
		Vector3f checkVec = mCaptureMatrix->getBasis(3);
		if (vec.x != checkVec.x || vec.y != checkVec.y || vec.z != checkVec.z) {
			check = true;
			PSMTXCopy(mCaptureMatrix->mMatrix.mtxView, mBaseTrMatrix.mMatrix.mtxView);
		}
	} else {
		check = false;
		if (isStickToMouth() || isEvent(0, EB_Bittered) || mPosition.x != vec.x || mPosition.y != vec.y || mPosition.z != vec.z) {
			check = true;
			mBaseTrMatrix.makeSRT(mScale, mRotation, mPosition);
		}
	}

	if (check || !isStopMotion()) {
		PSMTXCopy(mBaseTrMatrix.mMatrix.mtxView, mModel->mJ3dModel->mPosMtx);
		mModel->mJ3dModel->calc();
		mCollTree->update();
	}

	if (!isStickTo() && !isStopMotion() && !_2C8 && mHealth < 4.0f) { // why 4
		_2C8 = 1;
		efx::Arg fxArg(mPosition);
		mEfxLight->create(&fxArg);
	}
}

/*
 * --INFO--
 * Address:	8034AA1C
 * Size:	00004C
 */
void Obj::doAnimationCullingOn()
{
	if (isAnimStart()) {
		disableEvent(0, EB_Cullable);
	} else {
		EnemyBase::doAnimationCullingOn();
	}
}

/*
 * --INFO--
 * Address:	8034AA68
 * Size:	000134
 */
void Obj::doSimulation(f32 simSpeed)
{
	if (isStickTo()) {
		Vector3f dir = Vector3f(sinf(mFaceDir), 0.0f, cosf(mFaceDir));
		updateStick(dir);
		updateCell();
	} else if (mCaptureMatrix) {
		mPosition = mCaptureMatrix->getBasis(3);
		updateSpheres();
	} else {
		EnemyBase::doSimulation(simSpeed);
	}
}

/*
 * --INFO--
 * Address:	8034AB9C
 * Size:	000050
 */
void Obj::getShadowParam(ShadowParam& param)
{
	param.mPosition   = mPosition;
	param.mPosition.y = mPosition.y + 2.0f;

	param.mBoundingSphere.mPosition = Vector3f(0.0f, 1.0f, 0.0f);
	param.mBoundingSphere.mRadius   = 30.0f;
	param.mSize                     = 10.0f;
}

/*
 * --INFO--
 * Address:	8034ABEC
 * Size:	000048
 */
bool Obj::needShadow() { return (!EnemyBase::needShadow()) ? false : mCaptureMatrix == nullptr; }

/*
 * --INFO--
 * Address:	8034AC34
 * Size:	000080
 */
void Obj::doFinishStoneState()
{
	EnemyBase::doFinishStoneState();
	if (getStateID() == BOMB_Wait && getMotionFrame() == 0.0f && !_2BC) {
		stopMotion();
	}

	disableEvent(0, EB_Invulnerable);
	mTargetVelocity = Vector3f(0.0f);
}

/*
 * --INFO--
 * Address:	8034ACB4
 * Size:	000048
 */
void Obj::doStartStoneState()
{
	EnemyBase::doStartStoneState();
	mEfxLight->fade();
	_2C8 = 0;
}

/*
 * --INFO--
 * Address:	8034ACFC
 * Size:	000084
 */
void Obj::onKill(CreatureKillArg* killArg)
{
	if (mCarrier && mCarrier->getEnemyTypeID() == EnemyTypeID::EnemyID_BombOtakara) {
		mCarrier->mTargetCreature = nullptr;
	}

	mEfxLight->fade();
	EnemyBase::onKill(killArg);
}

/*
 * --INFO--
 * Address:	8034AD80
 * Size:	000030
 */
void Obj::doStartMovie() { mEfxLight->startDemoDrawOff(); }

/*
 * --INFO--
 * Address:	8034ADB0
 * Size:	000030
 */
void Obj::doEndMovie() { mEfxLight->endDemoDrawOn(); }

/*
 * --INFO--
 * Address:	8034ADE0
 * Size:	000074
 */
bool Obj::damageCallBack(Creature* creature, f32 damage, CollPart* collpart)
{
	if (!_2BC || mBounceTriangle) {
		if (isEvent(0, EB_Bittered)) {
			_2C4++;
			if (_2C4 > 4) {
				kill(nullptr);
			}
			return true;
		} else {
			EnemyBase::damageCallBack(creature, 0.0f, collpart);
		}
	}

	return false;
}

/*
 * --INFO--
 * Address:	8034AE54
 * Size:	000160
 */
bool Obj::bombCallBack(Creature* creature, Vector3f& vec, f32 damage)
{
	if (!mCaptureMatrix && !isEvent(0, EB_Bittered) && creature->isTeki()) {
		if (static_cast<EnemyBase*>(creature)->getEnemyTypeID() == EnemyTypeID::EnemyID_Bomb) {
			if (getStateID() == BOMB_Wait && _2C0 == 0) {
				Vector3f creaturePos = creature->getPosition();
				f32 rad              = C_PARMS->mGeneral.mAttackRadius.mValue;
				rad *= rad;
				f32 factor = (1.0f - (sqrDistanceXZ(creaturePos, mPosition) / rad)) * (f32)C_PROPERPARMS.mTriggerLimit();
				_2C0       = (int)factor + 1;
			}
		} else {
			damageCallBack(creature, 0.0f, nullptr);
		}

		mFlickTimer = 0.0f;
		return true;
	}

	return false;
}

/*
 * --INFO--
 * Address:	8034AFB4
 * Size:	000008
 */
bool Obj::pressCallBack(Creature*, f32, CollPart*) { return false; }

/*
 * --INFO--
 * Address:	8034AFBC
 * Size:	000078
 */
void Obj::bounceCallback(Sys::Triangle* triangle)
{
	if (_2BC) {
		createBounceEffect(mPosition, 0.5f);
		return;
	}

	if (isBirthTypeDropGroup() && getStateID() == BOMB_Wait) {
		createBounceEffect(mPosition, 0.5f);
		forceBomb();
	}
}

/*
 * --INFO--
 * Address:	8034B034
 * Size:	00009C
 */
void Obj::collisionCallback(CollEvent& collEvent)
{
	EnemyBase::collisionCallback(collEvent);
	if (isBirthTypeDropGroup() && collEvent.mCollidingCreature && !collEvent.mCollidingCreature->isTeki() && getStateID() == BOMB_Wait) {
		createBounceEffect(mPosition, 0.5f);
		forceBomb();
		_2C9 = 1;
	}
}

/*
 * --INFO--
 * Address:	8034B0D0
 * Size:	000060
 */
void Obj::forceBomb()
{
	if (getStateID() == BOMB_Wait) {
		disableEvent(0, EB_Invulnerable);
		mFsm->transit(this, BOMB_Bomb, nullptr);
	}
}

/*
 * --INFO--
 * Address:	........
 * Size:	000048
 */
bool Obj::isBombStart()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8034B130
 * Size:	000028
 */
void Obj::bombEffInWater() { EnemyBase::createSplashDownEffect(mPosition, 1.3f); }

/*
 * --INFO--
 * Address:	8034B158
 * Size:	00005C
 */
bool Obj::canEat()
{
	if (isAlive() && getStateID() == BOMB_Wait) {
		return true;
	}

	return false;
}

/*
 * --INFO--
 * Address:	8034B1B4
 * Size:	0000D8
 */
bool Obj::isAnimStart()
{
	bool check;
	if (isBirthTypeDropGroup() || !(mFlickTimer >= C_PROPERPARMS.mDamageLimit.mValue)) {
		if (!_2BC || !mBounceTriangle) {
			if (!_2C0) {
				check = false;
			} else {

				_2C0++;

				if (_2C0 > C_PROPERPARMS.mTriggerLimit.mValue) {
					_2C0  = 0;
					check = true;
				} else {
					check = false;
				}
			}

			if (check) {
			yes:
				return true;
			}
		} else {
			goto yes;
		}
	} else {
		goto yes;
	}
	return false;
}

} // namespace Bomb
} // namespace Game
