#include "Game/Entities/Hanachirashi.h"
#include "Game/MapMgr.h"
#include "Game/EnemyFunc.h"
#include "Game/PikiMgr.h"
#include "Game/Navi.h"
#include "Dolphin/rand.h"

namespace Game {
namespace Hanachirashi {

/**
 * @note Address: 0x802A1AE8
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
 * @note Address: 0x802A1C44
 * @note Size: 0x4
 */
void Obj::setInitialSetting(EnemyInitialParamBase*)
{
}

/**
 * @note Address: 0x802A1C48
 * @note Size: 0xF4
 */
void Obj::onInit(CreatureInitArg* initArg)
{
	EnemyBase::onInit(initArg);
	disableEvent(0, EB_LeaveCarcass);
	enableEvent(0, EB_Untargetable);

	mNextState   = HANACHIRASHI_NULL;
	mAirWaitTime = 0.0f;
	mFallTimer   = 0.0f;

	resetShadowOffset();
	resetShadowRadius();

	mPitchRatio         = 0.0f;
	mIsWindAttackActive = false;
	mEfxMatrix          = mModel->getJoint("hana3")->getWorldMatrix();
	setupEffect();

	mWindScaleTimer = 0.0f;

	mFsm->start(this, HANACHIRASHI_Wait, nullptr);

	mMatAnimators[0].start(C_MGR->mTexAnimation);
	mMatAnimators[1].start(C_MGR->mTevRegAnimation);
}

/**
 * @note Address: 0x802A1D3C
 * @note Size: 0x44
 */
void Obj::onKill(CreatureKillArg* killArg)
{
	finishWindEffect();
	EnemyBase::onKill(killArg);
}

/**
 * @note Address: 0x802A1D80
 * @note Size: 0x50
 */
void Obj::doUpdate()
{
	mFsm->exec(this);
	updateFallTimer();
	updateEmit();
}

/**
 * @note Address: 0x802A1DD0
 * @note Size: 0xD4
 */
void Obj::changeMaterial()
{
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
 * @note Address: 0x802A1EA4
 * @note Size: 0x4C
 */
void Obj::setFSM(FSM* fsm)
{
	mFsm = fsm;
	mFsm->init(this);
	mCurrentLifecycleState = nullptr;
}

/**
 * @note Address: 0x802A1EF0
 * @note Size: 0x4
 */
void Obj::doDirectDraw(Graphics&)
{
}

/**
 * @note Address: 0x802A1EF4
 * @note Size: 0x20
 */
void Obj::doDebugDraw(Graphics& gfx)
{
	EnemyBase::doDebugDraw(gfx);
}

/**
 * @note Address: 0x802A1F14
 * @note Size: 0x168
 */
void Obj::getShadowParam(ShadowParam& shadow)
{
	Vector3f bodyVec = mModel->getJoint("mune")->getWorldMatrix()->getColumn(3);
	Vector3f headVec = mModel->getJoint("head")->getWorldMatrix()->getColumn(3);
	shadow.mPosition = headVec;
	shadow.mPosition += bodyVec;
	shadow.mPosition *= 0.5f;
	shadow.mPosition.y = mPosition.y + mShadowOffset;

	shadow.mBoundingSphere.mPosition = Vector3f(0.0f, 1.0f, 0.0f);
	if (isFlying() || !mFloorTriangle) {
		shadow.mBoundingSphere.mRadius = C_PROPERPARMS.mStandardFlightHeight.mValue + 100.0f;
	} else {
		shadow.mBoundingSphere.mRadius = 50.0f;
	}
	shadow.mSize = mShadowRadius;
}

/**
 * @note Address: 0x802A207C
 * @note Size: 0x3C
 */
void Obj::doStartStoneState()
{
	EnemyBase::doStartStoneState();
	finishWindEffect();
	setShadowOffsetMax();
}

/**
 * @note Address: 0x802A20B8
 * @note Size: 0x7C
 */
void Obj::doFinishStoneState()
{
	EnemyBase::doFinishStoneState();
	int id = getStateID();

	if ((id >= HANACHIRASHI_Wait && id <= HANACHIRASHI_Fall) || (id >= HANACHIRASHI_TakeOff && id <= HANACHIRASHI_FlyFlick)
	    || (id == HANACHIRASHI_Laugh)) {
		mFsm->transit(this, HANACHIRASHI_TakeOff, nullptr);
	}
}

/**
 * @note Address: 0x802A2134
 * @note Size: 0x34
 */
void Obj::doStartWaitingBirthTypeDrop()
{
	EnemyBase::doStartWaitingBirthTypeDrop();
	effectDrawOff();
}

/**
 * @note Address: 0x802A2168
 * @note Size: 0x34
 */
void Obj::doFinishWaitingBirthTypeDrop()
{
	EnemyBase::doFinishWaitingBirthTypeDrop();
	effectDrawOn();
}

/**
 * @note Address: 0x802A219C
 * @note Size: 0x20
 */
void Obj::doStartMovie()
{
	effectDrawOff();
}

/**
 * @note Address: 0x802A21BC
 * @note Size: 0x20
 */
void Obj::doEndMovie()
{
	effectDrawOn();
}

/**
 * @note Address: 0x802A21DC
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
 * @note Address: 0x802A2240
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
 * @note Address: 0x802A2290
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
 * @note Address: 0x802A22D0
 * @note Size: 0x50
 */
Vector3f Obj::getHeadJointPos()
{
	return mModel->getJoint("head")->getWorldMatrix()->getTranslation();
}

/**
 * @note Address: 0x802A2320
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
 * @note Address: 0x802A243C
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
 * @note Address: 0x802A2614
 * @note Size: 0xC
 */
void Obj::resetShadowOffset()
{
	mShadowOffset = -5.0f;
}

/**
 * @note Address: 0x802A2620
 * @note Size: 0xC
 */
void Obj::setShadowOffsetMax()
{
	mShadowOffset = 5.0f;
}

/**
 * @note Address: 0x802A262C
 * @note Size: 0x28
 */
void Obj::addShadowOffset()
{
	mShadowOffset += 1.0f;
	if (mShadowOffset > 5.0f) {
		mShadowOffset = 5.0f;
	}
}

/**
 * @note Address: 0x802A2654
 * @note Size: 0x28
 */
void Obj::subShadowOffset()
{
	mShadowOffset -= 1.0f;
	if (mShadowOffset < -5.0f) {
		mShadowOffset = -5.0f;
	}
}

/**
 * @note Address: 0x802A267C
 * @note Size: 0xC
 */
void Obj::resetShadowRadius()
{
	mShadowRadius = 20.0f;
}

/**
 * @note Address: 0x802A2688
 * @note Size: 0x2C
 */
void Obj::subShadowRadius()
{
	if (mShadowRadius > 1.0f) {
		mShadowRadius -= 1.0f;

		if (mShadowRadius < 1.0f) {
			mShadowRadius = 1.0f;
		}
	}
}

/**
 * @note Address: 0x802A26B4
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
 * @note Address: 0x802A26E4
 * @note Size: 0xA4
 */
StateID Obj::getFlyingNextState()
{
	if (mHealth <= 0.0f) {
		return HANACHIRASHI_Dead;
	}

	if (EnemyFunc::getStickPikminColorNum(this, Purple) > 0) {
		return HANACHIRASHI_Fall;
	}

	if (mFallTimer > C_PROPERPARMS.mShakeOffTime.mValue || mStuckPikminCount >= C_PROPERPARMS.mFallingMinimumPikiNum.mValue) {
		if (mStuckPikminCount < C_PROPERPARMS.mFallingMinimumPikiNum.mValue) {
			return HANACHIRASHI_FlyFlick;
		} else {
			return HANACHIRASHI_Fall;
		}
	}
	return HANACHIRASHI_NULL;
}

/**
 * @note Address: 0x802A2788
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
 * @note Address: 0x802A27C0
 * @note Size: 0x3D4
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
				Vector3f pos      = getPosition();
				Vector3f pikiPos2 = piki->getPosition();
				if (pikiPos2.sqrDistance2D(pos) < sqrSight) {
					return piki;
				}
			}
		}
	}
	return nullptr;
}

/**
 * @note Address: 0x802A2B94
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
 * @note Address: 0x802A2E84
 * @note Size: 0x38C
 */
Creature* Obj::isAttackable()
{
	const f32 faceDir = getFaceDir();
	Vector3f vec = Vector3f(C_PARMS->mGeneral.mMaxAttackRange() * sinf(faceDir), 0.0f, C_PARMS->mGeneral.mMaxAttackRange() * cosf(faceDir));
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
 * @note Address: 0x802A3210
 * @note Size: 0x1AC
 */
void Obj::updateEmit()
{
	if (mEfxMatrix) {
		mEfxMatrix->getTranslation(mEfxPosition);
	}

	mFaceDirection = Vector3f(sinf(getFaceDir()), -0.85f, cosf(getFaceDir()));
	mFaceDirection.normalise();
}

/**
 * @note Address: 0x802A33BC
 * @note Size: 0x1E8
 */
Vector3f Obj::getAttackPosition()
{
	Vector3f vec2 = mEfxPosition;
	Vector3f vec1 = mFaceDirection;

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
 * @note Address: 0x802A35A4
 * @note Size: 0x90C
 */
bool Obj::windTarget()
{
	bool isHitPiki = false;
	if (mWindScaleTimer < 1.0f) {
		mWindScaleTimer += 3.0f * sys->mDeltaTime;
		if (mWindScaleTimer > 1.0f) {
			mWindScaleTimer = 1.0f;
		}
	}

	f32 radius              = mWindScaleTimer * C_GENERALPARMS.mAttackRadius();
	Vector3f attackStartPos = mEfxPosition;
	Vector3f faceDirection  = mFaceDirection;
	f32 slope               = tan(TORADIANS(C_GENERALPARMS.mAttackHitAngle()));

	Vector3f attackNormal = Vector3f(-faceDirection.z, 0.0f, faceDirection.x);
	attackNormal.normalise();

	Vector3f crossDir = attackNormal;
	crossDir.CP(faceDirection);
	Vector3f::normalise(crossDir);

	Vector3f attackDirection2D = faceDirection;
	attackDirection2D.toFlatDirection();

	Iterator<Navi> iterNavi(naviMgr);
	CI_LOOP(iterNavi)
	{
		Navi* navi = *iterNavi;
		if (navi->isAlive()) {
			Vector3f naviPosition  = navi->getPosition();
			Vector3f separationVec = naviPosition - attackStartPos;
			f32 dotProduct         = faceDirection.dot(separationVec);

			if (dotProduct < radius && dotProduct > 0.0f) {
				f32 attackRadius = dotProduct * slope;

				f32 crossProj   = crossDir.dot(separationVec);
				f32 normalProj  = attackNormal.dot(separationVec);
				f32 projSqrDist = SQUARE(normalProj) + SQUARE(crossProj);
				if (projSqrDist < SQUARE(attackRadius)) {
					f32 slideFactor  = sqrtfClamped(projSqrDist) / attackRadius;
					f32 windStrength = slideFactor * 0.2f + (1.0f - slideFactor);

					Vector3f direction(windStrength * (attackDirection2D.x * crossProj + attackNormal.x * normalProj), 0.0f,
					                   windStrength * (attackDirection2D.z * crossProj + attackNormal.z * normalProj));

					InteractWind wind(this, C_GENERALPARMS.mAttackDamage(), &direction); // not vec2
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
			Vector3f pikiPos       = piki->getPosition();
			Vector3f separationVec = pikiPos - attackStartPos;

			f32 dotProduct = faceDirection.dot(separationVec);
			if (dotProduct < radius && dotProduct > 0.0f) {
				f32 attackRadius = dotProduct * slope;

				Vector2f dots = Vector2f(attackNormal.dot(separationVec), crossDir.dot(separationVec));
				if (dots.sqrLength() < SQUARE(attackRadius)) {
					f32 slideFactor = dots.length() / attackRadius;

					f32 windStrength = (1.0f - slideFactor) * 5.0f + slideFactor;
					Vector3f direction(windStrength * (attackDirection2D.x * dots.y + attackNormal.x * dots.x),
					                   (1.0f - slideFactor) * 50.0f + slideFactor * 10.0f,
					                   windStrength * (attackDirection2D.z * dots.y + attackNormal.z * dots.x));

					InteractHanaChirashi wind(this, C_GENERALPARMS.mAttackDamage(), &direction); // not vec2
					isHitPiki = piki->stimulate(wind);
				}
			}
		}
	}

	mAttackPosition = getAttackPosition();
	return isHitPiki;
}

/**
 * @note Address: 0x802A3EB0
 * @note Size: 0x150
 */
void Obj::createEffect()
{
	mEfxDead   = new efx::TFusenDead;
	mEfxAirhit = new efx::TFusenhAirhit(&mAttackPosition, &mFaceDir);
	mEfxAir    = new efx::TFusenhAir;
	mEfxSui    = new efx::TFusenSui;
}

/**
 * @note Address: 0x802A4000
 * @note Size: 0x4C
 */
void Obj::setupEffect()
{
	mEfxDead->setMtxptr(mEfxMatrix->mMatrix.mtxView);
	mEfxAir->setMtxptr(mEfxMatrix->mMatrix.mtxView);
	mEfxSui->mMtx = mEfxMatrix;
}

/**
 * @note Address: 0x802A404C
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
 * @note Address: 0x802A40C8
 * @note Size: 0x34
 */
void Obj::createSuckEffect()
{
	mEfxSui->create(nullptr);
}

/**
 * @note Address: 0x802A40FC
 * @note Size: 0x90
 */
void Obj::startWindEffect()
{
	mAttackPosition = getAttackPosition(); // inlines rn, will match when it doesn't
	mEfxSui->fade();
	mEfxAir->create(nullptr);
	mEfxAirhit->create(nullptr);
}

/**
 * @note Address: 0x802A418C
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
 * @note Address: 0x802A4204
 * @note Size: 0x74
 */
void Obj::createDownEffect()
{
	Vector3f downEffectPos = mPosition + mEffectOffset;
	createBounceEffect(downEffectPos, getDownSmokeScale());
}

/**
 * @note Address: 0x802A4280
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
 * @note Address: 0x802A42F8
 * @note Size: 0x78
 */
void Obj::effectDrawOff()
{
	mEfxDead->startDemoDrawOff();
	mEfxAirhit->startDemoDrawOff();
	mEfxAir->startDemoDrawOff();
	mEfxSui->startDemoDrawOff();
}

} // namespace Hanachirashi
} // namespace Game
