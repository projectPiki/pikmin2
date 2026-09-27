#include "types.h"
#include "Game/Entities/Mar.h"
#include "Game/MapMgr.h"
#include "Dolphin/rand.h"
#include "JSystem/JMath.h"
#include "Game/EnemyFunc.h"
#include "Game/PikiMgr.h"
#include "Game/Navi.h"

namespace Game {
namespace Mar {

/**
 * @note Address: 0x8027F50C
 * @note Size: 0x15C
 */
Obj::Obj()
{
	mAnimator = new ProperAnimator;
	setFSM(new FSM);
	createEffect();
	mMatAnimators = new Sys::MatLoopAnimator[2];
}

/**
 * @note Address: 0x8027F668
 * @note Size: 0x4
 */
void Obj::setInitialSetting(EnemyInitialParamBase*)
{
}

/**
 * @note Address: 0x8027F66C
 * @note Size: 0xEC
 */
void Obj::onInit(CreatureInitArg* settings)
{
	EnemyBase::onInit(settings);

	disableEvent(0, EB_LeaveCarcass);
	enableEvent(0, EB_Untargetable);

	mGeneralTimer = 0.0f;
	mFallTimer    = 0.0f;

	resetShadowOffset();
	resetShadowRadius();

	mPitchRatio         = 0.0f;
	mIsWindAttackActive = false;

	mEfxMatrix = mModel->getJoint("hana3")->getWorldMatrix();
	setupEffect();

	mWindScaleTimer = 0.0f;

	mFsm->start(this, MAR_Wait, nullptr);

	mMatAnimators[0].start(C_MGR->mTexAnimation);
	mMatAnimators[1].start(C_MGR->mTevRegAnimation);
}

/**
 * @note Address: 0x8027F758
 * @note Size: 0x44
 */
void Obj::onKill(CreatureKillArg* settings)
{
	finishWindEffect();
	EnemyBase::onKill(settings);
}

/**
 * @note Address: 0x8027F79C
 * @note Size: 0x50
 */
void Obj::doUpdate()
{
	mFsm->exec(this);
	updateFallTimer();
	updateEmit();
}

/**
 * @note Address: 0x8027F7EC
 * @note Size: 0xD4
 */
void Obj::changeMaterial()
{
	// Don't even ask...
	J3DModelData* modelData = nullptr;
	J3DModel* model         = mModel->mJ3dModel;
	modelData               = model->mModelData;

	model->calcMaterial();

	mMatAnimators[0].animate(30.0f);
	mMatAnimators[1].animate(30.0f);

	for (u16 i = 0; i < modelData->getMaterialNum(); i++) {
		j3dSys.setMatPacket(model->getMatPacket(i));
		J3DMaterial* mat = modelData->getMaterialNodePointer(i);
		mat->diff(j3dSys.getMatPacket()->getShapePacket()->mDiffFlag);
	}
}

/**
 * @note Address: 0x8027F8C0
 * @note Size: 0x4C
 */
void Obj::setFSM(FSM* fsm)
{
	mFsm = fsm;
	mFsm->init(this);
	mCurrentLifecycleState = nullptr;
}

/**
 * @note Address: 0x8027F90C
 * @note Size: 0x4
 */
void Obj::doDirectDraw(Graphics&)
{
}

/**
 * @note Address: 0x8027F910
 * @note Size: 0x20
 */
void Obj::doDebugDraw(Graphics& gfx)
{
	EnemyBase::doDebugDraw(gfx);
}

/**
 * @note Address: 0x8027F930
 * @note Size: 0xD0
 */
void Obj::getShadowParam(ShadowParam& shadow)
{
	Matrixf* baseMatrix              = mModel->getJoint("mune")->getWorldMatrix();
	shadow.mPosition                 = baseMatrix->getTranslation();
	shadow.mPosition.y               = mPosition.y + mShadowOffset;
	shadow.mBoundingSphere.mPosition = Vector3f(0.0f, 1.0f, 0.0f);
	if (isFlying() || !mFloorTriangle) {
		shadow.mBoundingSphere.mRadius = C_PROPERPARMS.mStandardFlightHeight.mValue + 100.0f;
	} else {
		shadow.mBoundingSphere.mRadius = 50.0f;
	}
	shadow.mSize = mShadowRadius;
}

/**
 * @note Address: 0x8027FA00
 * @note Size: 0x3C
 */
void Obj::doStartStoneState()
{
	EnemyBase::doStartStoneState();
	finishWindEffect();
	setShadowOffsetMax();
}

/**
 * @note Address: 0x8027FA3C
 * @note Size: 0x74
 */
void Obj::doFinishStoneState()
{
	EnemyBase::doFinishStoneState();
	int id = getStateID();

	if ((id >= MAR_Wait && id <= MAR_Fall) || (id >= MAR_TakeOff && id <= MAR_FlyFlick)) {
		mFsm->transit(this, MAR_TakeOff, nullptr);
	}
}

/**
 * @note Address: 0x8027FAB0
 * @note Size: 0x34
 */
void Obj::doStartWaitingBirthTypeDrop()
{
	EnemyBase::doStartWaitingBirthTypeDrop();
	effectDrawOff();
}

/**
 * @note Address: 0x8027FAE4
 * @note Size: 0x34
 */
void Obj::doFinishWaitingBirthTypeDrop()
{
	EnemyBase::doFinishWaitingBirthTypeDrop();
	effectDrawOn();
}

/**
 * @note Address: 0x8027FB18
 * @note Size: 0x20
 */
void Obj::doStartMovie()
{
	effectDrawOff();
}

/**
 * @note Address: 0x8027FB38
 * @note Size: 0x20
 */
void Obj::doEndMovie()
{
	effectDrawOn();
}

/**
 * @note Address: 0x8027FB58
 * @note Size: 0x64
 */
Vector3f Obj::getOffsetForMapCollision()
{
	Vector3f pos = getHeadJointPos();
	pos -= mPosition;
	pos.y = -10.0f;
	return pos;
}

/**
 * @note Address: 0x8027FBBC
 * @note Size: 0x50
 */
void Obj::getThrowupItemPosition(Vector3f* position)
{
	if (isEvent(0, EB_Bittered)) {
		EnemyBase::getThrowupItemPosition(position);
	} else {
		*position = Vector3f(mPosition.x, mPosition.y + 500.0f, mPosition.z);
	}
}

/**
 * @note Address: 0x8027FC0C
 * @note Size: 0x40
 */
void Obj::getThrowupItemVelocity(Vector3f* velocity)
{
	if (isEvent(0, EB_Bittered)) {
		EnemyBase::getThrowupItemVelocity(velocity);
	} else {
		velocity->z = 0.0f;
		velocity->y = 0.0f;
		velocity->x = 0.0f;
	}
}

/**
 * @note Address: 0x8027FC4C
 * @note Size: 0x50
 */
Vector3f Obj::getHeadJointPos()
{
	return mModel->getJoint("head")->getWorldMatrix()->getTranslation();
}

/**
 * @note Address: 0x8027FC9C
 * @note Size: 0x11C
 */
f32 Obj::setHeightVelocity()
{
	f32 groundY     = mapMgr->getMinY(mPosition);
	f32 idealHeight = C_PROPERPARMS.mStandardFlightHeight.mValue;

	if (mPosition.y - groundY > idealHeight - C_PROPERPARMS.mVerticalSwingWidth.mValue) {
		addPitchRatio();
		idealHeight += C_PROPERPARMS.mVerticalSwingWidth.mValue * sinf(mPitchRatio);
	}

	f32 totalHeight = groundY + idealHeight;
	totalHeight -= mPosition.y;
	mCurrentVelocity.y = totalHeight * C_PROPERPARMS.mRiseFactor.mValue;
	return mPosition.y - groundY;
}

/**
 * @note Address: 0x8027FDB8
 * @note Size: 0x1D8
 */
void Obj::setRandTarget()
{
	f32 outsideRadius  = C_GENERALPARMS.mTerritoryRadius.mValue - C_GENERALPARMS.mHomeRadius.mValue;
	f32 radius         = randWeightFloat(outsideRadius) + C_GENERALPARMS.mHomeRadius.mValue;
	Vector3f position  = getPosition();
	Vector3f homePos   = mHomePosition;
	Vector3f atanInput = position - homePos;
	f32 aboutTheta     = JMAAtan2Radian(atanInput.x, atanInput.z);

	f32 theta = aboutTheta + randWeightFloat(PI) + HALF_PI;

	mTargetPosition = Vector3f(radius * sinf(theta) + homePos.x, homePos.y, radius * cosf(theta) + homePos.z);
}

/**
 * @note Address: 0x8027FF90
 * @note Size: 0xC
 */
void Obj::resetShadowOffset()
{
	mShadowOffset = -10.0f;
}

/**
 * @note Address: 0x8027FF9C
 * @note Size: 0xC
 */
void Obj::setShadowOffsetMax()
{
	mShadowOffset = 10.0f;
}

/**
 * @note Address: 0x8027FFA8
 * @note Size: 0x28
 */
void Obj::addShadowOffset()
{
	mShadowOffset += 1.0f;
	if (mShadowOffset > 10.0f) {
		mShadowOffset = 10.0f;
	}
}

/**
 * @note Address: 0x8027FFD0
 * @note Size: 0x28
 */
void Obj::subShadowOffset()
{
	mShadowOffset -= 1.0f;
	if (mShadowOffset < -10.0f) {
		mShadowOffset = -10.0f;
	}
}

/**
 * @note Address: 0x8027FFF8
 * @note Size: 0xC
 */
void Obj::resetShadowRadius()
{
	mShadowRadius = 40.0f;
}

/**
 * @note Address: 0x80280004
 * @note Size: 0x30
 */
void Obj::subShadowRadius()
{
	if (mShadowRadius > 1.0f) {
		mShadowRadius -= 1.5f;

		if (mShadowRadius < 1.0f) {
			mShadowRadius = 1.0f;
		}
	}
}

/**
 * @note Address: 0x80280034
 * @note Size: 0x30
 */
void Obj::updateFallTimer()
{
	if (mStuckPikminCount) {
		mFallTimer += sys->mDeltaTime;
	} else {
		mFallTimer = 0.0f;
	}
}

/**
 * @note Address: 0x80280064
 * @note Size: 0xA4
 */
StateID Obj::getFlyingNextState()
{
	if (mHealth <= 0.0f) {
		return MAR_Dead;
	}

	if (EnemyFunc::getStickPikminColorNum(this, Purple) > 0) {
		return MAR_Fall;
	}

	if (mFallTimer > C_PROPERPARMS.mShakeOffTime.mValue || mStuckPikminCount >= C_PROPERPARMS.mFallingMinPikiNumber.mValue) {
		if (mStuckPikminCount < C_PROPERPARMS.mFallingMinPikiNumber.mValue) {
			return MAR_FlyFlick;
		} else {
			return MAR_Fall;
		}
	}
	return MAR_NULL;
}

/**
 * @note Address: 0x80280108
 * @note Size: 0x38
 */
void Obj::addPitchRatio()
{
	mPitchRatio += C_PROPERPARMS.mVerticalSwingSpeed.mValue * sys->mDeltaTime;
	if (mPitchRatio > TAU) {
		mPitchRatio -= TAU;
	}
}

/**
 * @note Address: 0x80280140
 * @note Size: 0x3AC
 */
Piki* Obj::getSearchedPikmin()
{
	f32 FOV      = PI;
	f32 sight    = C_GENERALPARMS.mSightRadius.mValue;
	f32 sqrSight = SQUARE(sight);
	if (mStuckPikminCount == 0) {
		FOV = C_GENERALPARMS.mViewAngle.mValue * DEG2RAD * PI;
	}

	Iterator<Piki> iPiki = pikiMgr;
	CI_LOOP(iPiki)
	{
		Piki* piki = *iPiki;
		if (piki->isAlive() && piki->isPikmin() && piki->mFloorTriangle && !piki->isStickToMouth() && piki->mSticker != this) {
			f32 sightDiff = getAngDist(piki);
			if (FABS(sightDiff) <= FOV) {
				Vector3f pikiPos2 = piki->getPosition();
				if (mPosition.sqrDistance2D(pikiPos2) < sqrSight) {
					return piki;
				}
			}
		}
	}
	return nullptr;
}

/**
 * @note Address: 0x802804EC
 * @note Size: 0x2F0
 */
bool Obj::isTargetLost()
{
	Creature* target = mTargetCreature;
	if (target && target->isAlive() && !target->isStickToMouth() && target->mSticker != this) {
		f32 viewAngle = C_GENERALPARMS.mViewAngle();
		if (mStuckPikminCount) {
			viewAngle = 180.0f;
		}

		return isTargetOutsideView(target, C_GENERALPARMS.mPrivateRadius(), C_GENERALPARMS.mSightRadius(), 12800.0f, viewAngle);
	}

	return true;
}
/**
 * @note Address: 0x802807DC
 * @note Size: 0x38C
 */
Creature* Obj::isAttackable()
{
	const f32 faceDir = getFaceDir();
	Parms* parms      = C_PARMS;
	Vector3f vec = Vector3f(parms->mGeneral.mMaxAttackRange() * sinf(faceDir), 0.0f, parms->mGeneral.mMaxAttackRange() * cosf(faceDir));
	vec += getPosition();
	f32 radius = SQUARE(C_GENERALPARMS.mMaxAttackAngle());

	Iterator<Piki> iter(pikiMgr);
	CI_LOOP(iter)
	{
		Piki* piki = *iter;
		if (piki->isAlive() && piki->isPikmin() && !piki->isStickToMouth() && piki->mSticker != this) {
			Vector3f pikiPos = piki->getPosition();
			if (pikiPos.sqrDistance2D(vec) < radius) {
				return piki;
			}
		}
	}

	return nullptr;
}

/**
 * @note Address: 0x80280B68
 * @note Size: 0x1AC
 */
void Obj::updateEmit()
{
	if (mEfxMatrix) {
		mEfxMatrix->getTranslation(mAttackStartPos);
	}

	mAttackDirection = Vector3f(sinf(getFaceDir()), -0.85f, cosf(getFaceDir()));
	mAttackDirection.normalise();
}

/**
 * @note Address: 0x80280D14
 * @note Size: 0x1E8
 */
Vector3f Obj::getAttackPosition()
{
	Vector3f vec2 = mAttackStartPos;
	Vector3f vec1 = mAttackDirection;

	vec1 *= C_GENERALPARMS.mAttackRadius.mValue;

	vec1 += vec2;

	f32 inc    = 25.0f / C_GENERALPARMS.mAttackRadius.mValue;
	f32 t      = 100.0f / C_GENERALPARMS.mAttackRadius.mValue;
	f32 tCompl = 1.0f - t;

	Vector3f prevPos = Vector3f(vec2.x * tCompl + vec1.x * t, vec2.y * tCompl + vec1.y * t, vec2.z * tCompl + vec1.z * t);
	Vector3f nextPos;

	for (f32 ratio = t; ratio < 1.0f; ratio += inc) {
		f32 ratioCompl = 1.0f - ratio;
		nextPos
		    = Vector3f(vec2.x * ratioCompl + vec1.x * ratio, vec2.y * ratioCompl + vec1.y * ratio, vec2.z * ratioCompl + vec1.z * ratio);

		f32 minY = mapMgr->getMinY(nextPos);
		if (minY > nextPos.y) {
			return prevPos;
		}

		nextPos.y = minY;
		prevPos   = nextPos;
	}

	return nextPos;
}

/**
 * @note Address: 0x80280EFC
 * @note Size: 0x8F4
 */
void Obj::windTarget()
{
	if (mWindScaleTimer < 1.0f) {
		mWindScaleTimer += 3.0f * sys->mDeltaTime;
		if (mWindScaleTimer > 1.0f) {
			mWindScaleTimer = 1.0f;
		}
	}

	f32 radius                   = mWindScaleTimer * C_GENERALPARMS.mAttackRadius();
	Vector3f attackStartPosition = mAttackStartPos;
	Vector3f attackDirection     = mAttackDirection;
	f32 slope                    = tan(TORADIANS(C_GENERALPARMS.mAttackHitAngle()));

	// this is probably a new vector
	Vector3f attackNormal(-attackDirection.z, 0.0f, attackDirection.x);
	attackNormal.normalise();

	Vector3f crossVec = attackNormal;
	crossVec.CP(attackDirection);
	Vector3f::normalise(crossVec);

	Vector3f attackDirection2D = attackDirection;
	attackDirection2D.toFlatDirection();

	Iterator<Navi> iterNavi(naviMgr);
	CI_LOOP(iterNavi)
	{
		Navi* navi = *iterNavi;
		if (navi->isAlive()) {
			Vector3f naviPosition  = navi->getPosition();
			Vector3f separationVec = naviPosition - attackStartPosition;
			f32 dotProduct         = attackDirection.dot(separationVec);

			if (dotProduct < radius && dotProduct > 0.0f) {
				f32 attackRadius = dotProduct * slope;

				f32 crossProj   = crossVec.dot(separationVec);
				f32 normalProj  = attackNormal.dot(separationVec);
				f32 projSqrDist = SQUARE(normalProj) + SQUARE(crossProj);
				if (projSqrDist < SQUARE(attackRadius)) {
					f32 slideFactor  = sqrtfClamped(projSqrDist) / attackRadius;
					f32 windStrength = (1.0f - slideFactor) * 10.0f + slideFactor;

					Vector3f windDirection(windStrength * (attackDirection2D.x * crossProj + attackNormal.x * normalProj), 0.0f,
					                       windStrength * (attackDirection2D.z * crossProj + attackNormal.z * normalProj));

					InteractWind wind(this, C_GENERALPARMS.mAttackDamage(), &windDirection);
					navi->stimulate(wind);
				}
			}
		}
	}

	Iterator<Piki> iterPiki(pikiMgr);
	CI_LOOP(iterPiki)
	{
		Piki* piki = *iterPiki;
		if (piki->isAlive() && piki->isPikmin()) {
			Vector3f pikiPosition     = piki->getPosition();
			Vector3f separationVector = pikiPosition - attackStartPosition;
			f32 dotProduct            = attackDirection.dot(separationVector);

			if (dotProduct < radius && dotProduct > 0.0f) {
				f32 attackRadius = dotProduct * slope;

				Vector2f dots;
				dots.y = crossVec.dot(separationVector);
				dots.x = attackNormal.dot(separationVector);
				if (dots.sqrLength() < SQUARE(attackRadius)) {
					f32 slideFactor = sqrtfClamped(dots.sqrLength()) / attackRadius;

					f32 inverseWeight = 1.0f - slideFactor;
					f32 windStrength  = inverseWeight * 15.0f + slideFactor * 1.5f;
					Vector3f windDirection(windStrength * (attackDirection2D.x * dots.y + attackNormal.x * dots.x),
					                       inverseWeight * 500.0f + slideFactor * 50.0f,
					                       windStrength * (attackDirection2D.z * dots.y + attackNormal.z * dots.x));

					InteractWind wind(this, C_GENERALPARMS.mAttackDamage(), &windDirection);
					piki->stimulate(wind);
				}
			}
		}
	}

	mAttackPosition = getAttackPosition();
}

/**
 * @note Address: 0x802817F0
 * @note Size: 0x150
 */
void Obj::createEffect()
{
	mEfxDead   = new efx::TFusenDead;
	mEfxAirhit = new efx::TFusenAirhit(&mAttackPosition, &mFaceDir);
	mEfxAir    = new efx::TFusenAir;
	mEfxSui    = new efx::TFusenSui;
}

/**
 * @note Address: 0x80281940
 * @note Size: 0x4C
 */
void Obj::setupEffect()
{
	mEfxDead->setMtxptr(mEfxMatrix->mMatrix.mtxView);
	mEfxAir->setMtxptr(mEfxMatrix->mMatrix.mtxView);
	mEfxSui->mMtx = mEfxMatrix;
}

/**
 * @note Address: 0x8028198C
 * @note Size: 0x7C
 */
void Obj::startDeadEffect()
{
	mEfxDead->create(nullptr);
	mEfxAirhit->fade();
	mEfxAir->fade();
	mEfxSui->fade();
}

/**
 * @note Address: 0x80281A08
 * @note Size: 0x34
 */
void Obj::createSuckEffect()
{
	mEfxSui->create(nullptr);
}

/**
 * @note Address: 0x80281A3C
 * @note Size: 0x90
 */
void Obj::startWindEffect()
{
	mAttackPosition = getAttackPosition();
	mEfxSui->fade();
	mEfxAir->create(nullptr);
	mEfxAirhit->create(nullptr);
}

/**
 * @note Address: 0x80281ACC
 * @note Size: 0x78
 */
void Obj::finishWindEffect()
{
	mEfxDead->fade();
	mEfxAirhit->fade();
	mEfxAir->fade();
	mEfxSui->fade();
}

/**
 * @note Address: 0x80281B44
 * @note Size: 0x74
 */
void Obj::createDownEffect()
{
	Vector3f downEffectPos = mPosition + mEffectOffset;
	createBounceEffect(downEffectPos, getDownSmokeScale());
}

/**
 * @note Address: 0x80281BC0
 * @note Size: 0x78
 */
void Obj::effectDrawOn()
{
	mEfxDead->endDemoDrawOn();
	mEfxAirhit->endDemoDrawOn();
	mEfxAir->endDemoDrawOn();
	mEfxSui->endDemoDrawOn();
}

/**
 * @note Address: 0x80281C38
 * @note Size: 0x78
 */
void Obj::effectDrawOff()
{
	mEfxDead->startDemoDrawOff();
	mEfxAirhit->startDemoDrawOff();
	mEfxAir->startDemoDrawOff();
	mEfxSui->startDemoDrawOff();
}

} // namespace Mar
} // namespace Game
