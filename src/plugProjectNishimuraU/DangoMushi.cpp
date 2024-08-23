#include "types.h"
#include "Game/Entities/DangoMushi.h"
#include "PSM/EnemyBoss.h"
#include "Game/EnemyFunc.h"
#include "Game/PikiMgr.h"
#include "Game/Navi.h"
#include "Game/CPlate.h"
#include "Game/Stickers.h"
#include "Game/generalEnemyMgr.h"
#include "Game/MapMgr.h"
#include "Dolphin/rand.h"
#include "PSSystem/PSMainSide_ObjSound.h"

namespace Game {
namespace DangoMushi {

/**
 * @note Address: 0x802FC3BC
 * @note Size: 0x134
 */
Obj::Obj()
{
	mAnimator = new ProperAnimator;
	setFSM(new FSM);
	createEffect();
	mMatLoopAnimator = new Sys::MatLoopAnimator;
}

/**
 * @note Address: 0x802FC4F0
 * @note Size: 0x4
 */
void Obj::setInitialSetting(EnemyInitialParamBase*) { }

/**
 * @note Address: 0x802FC4F4
 * @note Size: 0x130
 */
void Obj::onInit(CreatureInitArg* arg)
{
	EnemyBase::onInit(arg);
	enableEvent(0, EB_Invulnerable);
	disableEvent(0, EB_Cullable);
	mIsRolling         = false;
	mRollingVelocity.z = 0.0f;
	mRollingVelocity.y = 0.0f;
	mRollingVelocity.x = 0.0f;
	mStateTimer        = 0.0f;
	mNextState         = DANGOMUSHI_NULL;
	mShadowScale       = 0.0f;
	setupCollision();
	setBodyCollision(false);
	mIsArmSwinging = false;
	resetMapCollisionSize(false);
	mIsMoveHandEffectActive = false;
	resetBossAppearBGM();
	setupEffect();
	shadowMgr->delShadow(this);
	if (gameSystem && gameSystem->isZukanMode()) {
		mFsm->start(this, DANGOMUSHI_Appear, nullptr);
	} else {
		mFsm->start(this, DANGOMUSHI_Stay, nullptr);
	}
	mMatLoopAnimator->start(C_MGR->mTevRegAnimation);
}

/**
 * @note Address: 0x802FC624
 * @note Size: 0x44
 */
void Obj::onKill(CreatureKillArg* arg)
{
	finishRollingMoveEffect();
	EnemyBase::onKill(arg);
}

/**
 * @note Address: 0x802FC668
 * @note Size: 0x50
 */
void Obj::doUpdate()
{
	mFsm->exec(this);
	updateMapCollisionSize();
	createMoveHandEffect();
}

/**
 * @note Address: 0x802FC6B8
 * @note Size: 0x44
 */
void Obj::doUpdateCommon()
{
	mRollingVelocity.x = mCurrentVelocity.x;
	mRollingVelocity.z = mCurrentVelocity.z;
	EnemyBase::doUpdateCommon();
	updateBossBGM();
}

/**
 * @note Address: 0x802FC6FC
 * @note Size: 0x94
 */
void Obj::doAnimationUpdateAnimator()
{
	SysShape::BlendLinearFun func;
	f32 delta = sys->mDeltaTime;
	f32 speed = EnemyAnimatorBase::defaultAnimSpeed * delta;
	static_cast<EnemyBlendAnimatorBase*>(mAnimator)->animate(&func, delta * 60.0f, speed, speed);
	static_cast<EnemyBlendAnimatorBase*>(mAnimator)->mAnimator.setModelCalc(mModel, 0);
}

/**
 * @note Address: 0x802FC790
 * @note Size: 0xC4
 */
void Obj::changeMaterial()
{
	J3DModelData* modelData;
	J3DModel* model = mModel->mJ3dModel;
	modelData       = model->mModelData;
	model->calcMaterial();
	mMatLoopAnimator->animate(30.0f);
	for (u16 i = 0; i < modelData->mMaterialTable.mMaterialNum; i++) {
		J3DMatPacket* packet  = &model->mMatPackets[i];
		j3dSys.mMatPacket     = packet;
		J3DMaterial* material = modelData->mMaterialTable.mMaterials[i];
		material->diff(packet->mShapePacket->mDiffFlag);
	}
}

/**
 * @note Address: 0x802FC854
 * @note Size: 0x4
 */
void Obj::doDirectDraw(Graphics& gfx) { }

/**
 * @note Address: 0x802FC858
 * @note Size: 0x20
 */
void Obj::doDebugDraw(Graphics& gfx) { EnemyBase::doDebugDraw(gfx); }

/**
 * @note Address: 0x802FC878
 * @note Size: 0x4C
 */
void Obj::setFSM(FSM* fsm)
{
	mFsm = fsm;
	mFsm->init(this);
	mCurrentLifecycleState = nullptr;
}

/**
 * @note Address: 0x802FC8C4
 * @note Size: 0xB8
 */
void Obj::getShadowParam(ShadowParam& param)
{
	Matrixf* mat                    = mModel->getJoint("world_root")->getWorldMatrix();
	param.mPosition                 = Vector3f(mat->mMatrix.mtxView[0][3], mat->mMatrix.mtxView[1][3], mat->mMatrix.mtxView[2][3]);
	param.mPosition.y               = mPosition.y + 10.0f;
	param.mBoundingSphere.mPosition = Vector3f(0.0f, 1.0f, 0.0f);
	if (isEvent(1, EB2_Earthquake)) {
		param.mBoundingSphere.mRadius = 100.0f;
	} else {
		param.mBoundingSphere.mRadius = 50.0f;
	}
	param.mSize = 45.0f * mShadowScale;
}

/**
 * @note Address: 0x802FC97C
 * @note Size: 0x70
 */
bool Obj::needShadow()
{
	if (EnemyBase::needShadow()) {
		return true;
	}
	if (mShadowScale > 0.0f) {
		int state = getStateID();
		if (state == DANGOMUSHI_Stay || state == DANGOMUSHI_Appear) {
			return true;
		}
	}
	return false;
}

/**
 * @note Address: 0x802FC9EC
 * @note Size: 0xEC
 */
bool Obj::damageCallBack(Creature* creature, f32 damage, CollPart* part)
{
	if (creature && creature->isPiki()) {
		// if bittered, can attack anywhere
		if (isEvent(0, EB_Bittered)) {
			addDamage(damage, 1.0f);
			return true;
		}

		// if not bittered, can only attack bod0 or bod1 parts
		if (part && (part->mCurrentID == 'bod0' || part->mCurrentID == 'bod1')) {
			createBodyDamageEffect();
			addDamage(damage, 1.0f);
			return true;
		}
	}
	return false;
}

/**
 * @note Address: 0x802FCAD8
 * @note Size: 0x8
 */
bool Obj::earthquakeCallBack(Creature*, f32) { return false; }

/**
 * @note Address: 0x802FCAE0
 * @note Size: 0x104
 */
void Obj::collisionCallback(CollEvent& evt)
{
	if (!isEvent(0, EB_Bittered) && evt.mCollidingCreature) {

		// if rolling and we hit a piki, crush it.
		if (mIsRolling && evt.mCollidingCreature->mFloorTriangle) {
			InteractPress press(this, C_GENERALPARMS.mAttackDamage(), nullptr);
			evt.mCollidingCreature->stimulate(press);

			// if we're swinging our arm and our arm hits something, do our arm effect (flick or wither)
		} else if (mIsArmSwinging) {
			CollPart* part = evt.mHitPart;
			if (part && part->mCurrentID.match('haR*', '*')) {
				flickHandCollision(evt.mCollidingCreature);
			}
		}
	}
	setCollEvent(evt);
}

/**
 * @note Address: 0x802FCBE4
 * @note Size: 0x10C
 */
void Obj::wallCallback(const MoveInfo& mvInfo)
{
	if (mIsRolling) {
		Vector3f velocity = mRollingVelocity;
		f32 speed         = velocity.normalise();

		// if we're rolling fast enough and hit the wall at a 30 degree angle or more (90 degree = head-on), crash
		if (speed > 100.0f && velocity.dot(mvInfo.mWallNormal) < -0.5f) {
			createBodyWallCrashEffect(mvInfo.mWallNormal);
			mFsm->transit(this, DANGOMUSHI_Turn, nullptr);
		}
	}
}

/**
 * @note Address: 0x802FCCF0
 * @note Size: 0x38
 */
void Obj::doStartStoneState()
{
	EnemyBase::doStartStoneState();
	disableEvent(0, EB_Invulnerable);
}

/**
 * @note Address: 0x802FCD28
 * @note Size: 0x74
 */
void Obj::doFinishStoneState()
{
	EnemyBase::doFinishStoneState();
	EnemyFunc::flickStickPikmin(this, 1.0f, 10.0f, 0.0f, FLICK_BACKWARD_ANGLE, nullptr);

	if (getStateID() != DANGOMUSHI_Turn || isNoDamageCollision()) {
		enableEvent(0, EB_Invulnerable);
	}
}

/**
 * @note Address: 0x802FCD9C
 * @note Size: 0x28
 */
void Obj::startCarcassMotion() { startMotion(DANGOANIM_Carry, nullptr); }

/**
 * @note Address: 0x802FCDC4
 * @note Size: 0x20
 */
void Obj::doStartMovie() { effectDrawOff(); }

/**
 * @note Address: 0x802FCDE4
 * @note Size: 0x20
 */
void Obj::doEndMovie() { effectDrawOn(); }

/**
 * @note Address: 0x802FCE04
 * @note Size: 0x4C
 */
void Obj::initWalkSmokeEffect()
{
	mWalkSmokeMgr.alloc(1);
	mWalkSmokeMgr.setup(0, mModel, "hand_L", 7.5f);
}

/**
 * @note Address: 0x802FCE50
 * @note Size: 0x8
 */
WalkSmokeEffect::Mgr* Obj::getWalkSmokeEffectMgr() { return &mWalkSmokeMgr; }

/**
 * @note Address: 0x802FCE58
 * @note Size: 0x24
 */
void Obj::getCommonEffectPos(Vector3f& vec)
{
	vec.x = mPosition.x;
	vec.y = mPosition.y + 30.0f;
	vec.z = mPosition.z;
}

/**
 * @note Address: 0x802FCE7C
 * @note Size: 0x50
 */
bool Obj::addShadowScale()
{
	if (mShadowScale < 1.0f) {
		mShadowScale += 0.6f * sys->mDeltaTime;
		if (mShadowScale >= 1.0f) {
			mShadowScale = 1.0f;
			return true;
		}
	} else {
		return true;
	}

	// we haven't hit max scale (1) yet
	return false;
}

/**
 * @note Address: 0x802FCECC
 * @note Size: 0x198
 */
void Obj::setRandTarget()
{
	f32 randDist = C_GENERALPARMS.mHomeRadius() + randWeightFloat(C_GENERALPARMS.mTerritoryRadius() - C_GENERALPARMS.mHomeRadius());

	f32 angDiff = JMAAtan2Radian(mPosition.x - mHomePosition.x, mPosition.z - mHomePosition.z);
	f32 ang1    = angDiff + randWeightFloat(PI);
	f32 angle   = ang1 + HALF_PI;

	mTargetPosition = Vector3f(randDist * sinf(angle) + mHomePosition.x, mHomePosition.y, randDist * cosf(angle) + mHomePosition.z);
}

/**
 * @note Address: 0x802FD064
 * @note Size: 0x34
 */
bool Obj::isReachedTarget() { return sqrDistanceXZ(mPosition, mTargetPosition) < 625.0f; }

/**
 * @note Address: 0x802FD098
 * @note Size: 0x38
 */
Creature* Obj::getSearchedTarget()
{
	return EnemyFunc::getNearestPikminOrNavi(this, C_GENERALPARMS.mViewAngle(), C_GENERALPARMS.mSightRadius(), nullptr, nullptr, nullptr);
}

/**
 * @note Address: 0x802FD0D0
 * @note Size: 0x2BC
 */
void Obj::rollingMove()
{
	Vector3f targetPos;
	Navi* navi = naviMgr->getActiveNavi();
	if (!navi) {
		navi
		    = static_cast<Navi*>(EnemyFunc::getNearestPikminOrNavi(this, 180.0f, C_GENERALPARMS.mSightRadius(), nullptr, nullptr, nullptr));
	}
	if (navi) {
		targetPos = navi->getPosition();
	} else {
		targetPos = mPosition + mTargetVelocity;
	}

	turnToTarget2(targetPos, C_PROPERPARMS.mRollingTurnAccel(), C_PROPERPARMS.mRollingTurnSpeed());

	f32 moveSpeed = getMoveSpeed();
	f32 x         = dolsinf(getFaceDir());
	f32 y         = getTargetVelocity().y;
	f32 z         = dolcosf(getFaceDir());

	mTargetVelocity = Vector3f(moveSpeed * x, y, moveSpeed * z);

	if (mWallTriangle) {
		Vector3f vel(mCurrentVelocity);
		vel.y = 0.0f;

		if (vel.length() < 100.0f) {
			mStateTimer += 5.0f * sys->mDeltaTime;
		} else {
			mStateTimer += 3.0f * sys->mDeltaTime;
		}
	} else {
		mStateTimer += sys->mDeltaTime;
	}
	/*
	stwu     r1, -0x80(r1)
	mflr     r0
	stw      r0, 0x84(r1)
	stfd     f31, 0x70(r1)
	psq_st   f31, 120(r1), 0, qr0
	stfd     f30, 0x60(r1)
	psq_st   f30, 104(r1), 0, qr0
	stfd     f29, 0x50(r1)
	psq_st   f29, 88(r1), 0, qr0
	stfd     f28, 0x40(r1)
	psq_st   f28, 72(r1), 0, qr0
	stw      r31, 0x3c(r1)
	mr       r31, r3
	lwz      r3, naviMgr__4Game@sda21(r13)
	bl       getActiveNavi__Q24Game7NaviMgrFv
	cmplwi   r3, 0
	bne      lbl_802FD134
	lwz      r5, 0xc0(r31)
	mr       r3, r31
	lfs      f1, lbl_8051D404@sda21(r2)
	li       r4, 0
	lfs      f2, 0x3d4(r5)
	li       r5, 0
	li       r6, 0
	bl
"getNearestPikminOrNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Navi>P23Condition<Q24Game4Piki>"

lbl_802FD134:
	cmplwi   r3, 0
	beq      lbl_802FD160
	mr       r4, r3
	addi     r3, r1, 0x2c
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f29, 0x2c(r1)
	lfs      f28, 0x34(r1)
	b        lbl_802FD178

lbl_802FD160:
	lfs      f3, 0x18c(r31)
	lfs      f2, 0x1d4(r31)
	lfs      f1, 0x194(r31)
	lfs      f0, 0x1dc(r31)
	fadds    f29, f3, f2
	fadds    f28, f1, f0

lbl_802FD178:
	mr       r4, r31
	lwz      r5, 0xc0(r31)
	lwz      r12, 0(r31)
	addi     r3, r1, 0x14
	lfs      f30, 0x86c(r5)
	lwz      r12, 8(r12)
	lfs      f31, 0x844(r5)
	mtctr    r12
	bctrl
	lfs      f4, 0x14(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f0, 0x1c(r1)
	addi     r3, r3, atanTable___5JMath@l
	lfs      f3, 0x18(r1)
	fsubs    f1, f29, f4
	fsubs    f2, f28, f0
	stfs     f4, 8(r1)
	stfs     f3, 0xc(r1)
	stfs     f0, 0x10(r1)
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	bl       roundAng__Ff
	lwz      r12, 0(r31)
	fmr      f29, f1
	mr       r3, r31
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fmr      f2, f1
	fmr      f1, f29
	bl       angDist__Fff
	fmuls    f31, f1, f31
	lfs      f0, lbl_8051D408@sda21(r2)
	lfs      f1, lbl_8051D3E4@sda21(r2)
	fmuls    f0, f0, f30
	fabs     f2, f31
	fmuls    f1, f1, f0
	frsp     f0, f2
	fcmpo    cr0, f0, f1
	ble      lbl_802FD22C
	lfs      f0, lbl_8051D3A8@sda21(r2)
	fcmpo    cr0, f31, f0
	ble      lbl_802FD228
	fmr      f31, f1
	b        lbl_802FD22C

lbl_802FD228:
	fneg     f31, f1

lbl_802FD22C:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fadds    f1, f31, f1
	bl       roundAng__Ff
	stfs     f1, 0x1fc(r31)
	mr       r3, r31
	lfs      f0, 0x1fc(r31)
	stfs     f0, 0x1a8(r31)
	lwz      r12, 0(r31)
	lwz      r4, 0xc0(r31)
	lwz      r12, 0x64(r12)
	lfs      f30, 0x81c(r4)
	mtctr    r12
	bctrl
	bl       sin
	mr       r3, r31
	lfs      f2, 0x1d4(r31)
	lwz      r12, 0(r31)
	frsp     f29, f1
	lfs      f31, 0x1d8(r31)
	lfs      f0, 0x1dc(r31)
	lwz      r12, 0x64(r12)
	stfs     f2, 0x20(r1)
	stfs     f31, 0x24(r1)
	stfs     f0, 0x28(r1)
	mtctr    r12
	bctrl
	bl       cos
	fmuls    f0, f30, f29
	frsp     f1, f1
	stfs     f0, 0x1d4(r31)
	fmuls    f0, f30, f1
	stfs     f31, 0x1d8(r31)
	stfs     f0, 0x1dc(r31)
	lwz      r0, 0x288(r31)
	cmplwi   r0, 0
	beq      lbl_802FD344
	lfs      f2, 0x1d0(r31)
	lfs      f0, 0x1c8(r31)
	lfs      f1, lbl_8051D3A8@sda21(r2)
	fmuls    f2, f2, f2
	fmadds   f0, f0, f0, f1
	fadds    f2, f2, f0
	fcmpo    cr0, f2, f1
	ble      lbl_802FD2FC
	ble      lbl_802FD300
	frsqrte  f0, f2
	fmuls    f2, f0, f2
	b        lbl_802FD300

lbl_802FD2FC:
	fmr      f2, f1

lbl_802FD300:
	lfs      f0, lbl_8051D3BC@sda21(r2)
	fcmpo    cr0, f2, f0
	bge      lbl_802FD328
	lwz      r3, sys@sda21(r13)
	lfs      f2, lbl_8051D40C@sda21(r2)
	lfs      f1, 0x54(r3)
	lfs      f0, 0x2c4(r31)
	fmadds   f0, f2, f1, f0
	stfs     f0, 0x2c4(r31)
	b        lbl_802FD358

lbl_802FD328:
	lwz      r3, sys@sda21(r13)
	lfs      f2, lbl_8051D410@sda21(r2)
	lfs      f1, 0x54(r3)
	lfs      f0, 0x2c4(r31)
	fmadds   f0, f2, f1, f0
	stfs     f0, 0x2c4(r31)
	b        lbl_802FD358

lbl_802FD344:
	lwz      r3, sys@sda21(r13)
	lfs      f1, 0x2c4(r31)
	lfs      f0, 0x54(r3)
	fadds    f0, f1, f0
	stfs     f0, 0x2c4(r31)

lbl_802FD358:
	psq_l    f31, 120(r1), 0, qr0
	lfd      f31, 0x70(r1)
	psq_l    f30, 104(r1), 0, qr0
	lfd      f30, 0x60(r1)
	psq_l    f29, 88(r1), 0, qr0
	lfd      f29, 0x50(r1)
	psq_l    f28, 72(r1), 0, qr0
	lfd      f28, 0x40(r1)
	lwz      r0, 0x84(r1)
	lwz      r31, 0x3c(r1)
	mtlr     r0
	addi     r1, r1, 0x80
	blr
	*/
}

#define DANGO_FALLING_ROCK_COUNT (10)
#define DANGO_FALLING_EGG_COUNT  (1)

/**
 * @note Address: 0x802FD38C
 * @note Size: 0x4E8
 */
void Obj::createCrashEnemy()
{
	int fallEnemyTypes[]  = { EnemyTypeID::EnemyID_Rock, EnemyTypeID::EnemyID_Egg };
	int fallEnemyCounts[] = { DANGO_FALLING_ROCK_COUNT, DANGO_FALLING_EGG_COUNT };

	// set number of falling eggs to either 1 or 0
	fallEnemyCounts[DANGOFALL_Egg] = getFallEggNum();

	for (int i = 0; i < (int)ARRAY_SIZE(fallEnemyTypes); i++) {
		EnemyMgrBase* mgr = generalEnemyMgr->getEnemyMgr(fallEnemyTypes[i]);
		if (!mgr) {
			continue;
		}

		Vector3f fallPos = getFallPosition(i);

		f32 angleOffset1 = randWeightFloat(PI);
		f32 angleOffset2 = 0.5f + angleOffset1;
		f32 angleOffset3 = 0.25f + angleOffset1;
		f32 birthAngle   = 0.0f;
		f32 dist;

		for (int j = 0; j < fallEnemyCounts[i]; j++) {
			if (j == 0) {
				// first falling enemy goes at (fallPos.x, fallPos.y, dist + fallPos.z)
				dist = randWeightFloat(15.0f);

			} else if (j < 4) {
				// enemies (rocks) 2, 3, 4 go vaguely equally spaced around a circle, with some small randomness...
				birthAngle = (2 * PI / 3) * (f32)j + (angleOffset1 + randWeightFloat(1.0f));

				// ... at some distance between 70 and 85 units from fall position
				dist = 70.0f + randWeightFloat(15.0f);

			} else if (j < 10) {
				// enemies (rocks) 5, 6, 7, 8, 9, 10 go vaguely equally spaced around a circle, with some small(er) randomness...
				birthAngle = (PI / 3) * (f32)j + (angleOffset2 + randWeightFloat(0.5f));

				// ... at some distance between 140 and 155 units from fall position
				dist = 140.0f + randWeightFloat(15.0f);

			} else {
				// any additional enemies (rocks) keep going around a circle with smaller spacing (unused, max is 10 rocks)
				birthAngle = (PI / 6) * (f32)j + (angleOffset3 + randWeightFloat(0.1f));

				// they'd also go at a larger distance from fall position (220-235 units)
				dist = 220.0f + randWeightFloat(15.0f);
			}

			if (birthAngle > TAU) {
				birthAngle -= TAU;
			}

			EnemyBirthArg birthArg;
			birthArg.mTypeID     = (EnemyTypeID::EEnemyTypeID)fallEnemyTypes[i];
			birthArg.mFaceDir    = mFaceDir;
			birthArg.mPosition.x = dist * sinf(birthAngle) + fallPos.x;
			birthArg.mPosition.y = fallPos.y;
			birthArg.mPosition.z = dist * cosf(birthAngle) + fallPos.z;

			if (fallEnemyTypes[i] == EnemyTypeID::EnemyID_Egg) {
				birthArg.mTekiBirthType = EDG_Normal; // eggs fall on approach by piki or navi, rocks just fall with no condition
			} else {
				birthArg.mExistenceLength = 30.0f; // rocks have an "existence length" instead
			}

			EnemyBase* enemy = mgr->birth(birthArg);
			if (enemy) {
				enemy->init(nullptr);
				enemy->disableEvent(0, EB_Cullable); // rocks/eggs are always loaded to go off, even if you're not watching

				// majorly increase trigger distance (for rocks, these are 75 and 150 by default; for eggs, 30 and 700)
				CG_GENERALPARMS(enemy).mPrivateRadius() = 1000.0f;
				CG_GENERALPARMS(enemy).mSightRadius()   = 1000.0f;
			}
		}
	}
}

/**
 * @note Address: 0x802FD874
 * @note Size: 0xEC
 */
int Obj::getFallEggNum()
{
	f32 pikiCount = (f32)pikiMgr->mActiveCount;
	f32 weight    = 0.0f;

	Navi* navi = naviMgr->getActiveNavi();
	if (navi) {
		weight = (f32)navi->mCPlateMgr->mActiveGroupSize; // what even is this
	}

	// the closer mCPlateMgr->_BC is to the active piki count, the more likely an egg will drop
	if ((pikiCount > 0.0f) && (randWeightFloat(1.0f) < (weight / pikiCount))) {
		return DANGO_FALLING_EGG_COUNT;
	}

	return 0;
}

/**
 * @note Address: 0x802FD960
 * @note Size: 0x104
 */
Vector3f Obj::getFallPosition(int fallEnemyType)
{
	// eggs always fall at crab's home position
	Vector3f fallPos = mHomePosition;

	if (fallEnemyType == DANGOFALL_Rock) {

		// if possible, spawn rocks centred at active navi's position
		Navi* navi = naviMgr->getActiveNavi();
		if (navi) {
			fallPos = navi->getPosition();

		} else {
			// if we don't have an active navi, spawn them centred at the nearest pikmin or navi within 500 units, "in front" of crab
			Creature* target = EnemyFunc::getNearestPikminOrNavi(this, 180.0f, 500.0f, nullptr, nullptr, nullptr);
			if (target) {
				fallPos = target->getPosition();
			}
		}
	}

	return fallPos;
}

/**
 * @note Address: 0x802FDA64
 * @note Size: 0x38
 */
void Obj::setupCollision()
{
	// set up arm collision
	CollPart* part = mCollTree->getCollPart('haR0');
	if (part) {
		part->makeTubeTree();
	}
}

/**
 * @note Address: 0x802FDA9C
 * @note Size: 0x444
 */
void Obj::setBodyCollision(bool check)
{
	// these are the attackable parts
	u32 collTags[2] = { 'bod0', 'bod1' };

	for (int i = 0; i < 2; i++) {
		CollPart* part = mCollTree->getCollPart(collTags[i]);
		if (part && check) {
			part->mSpecialID = '_t__';
		} else {
			part->mSpecialID = 'st__';
		}
	}

	if (check && mStuckPikminCount != 0 && !(mHealth <= 0.0f)) {
		f32 angle = PI + mFaceDir;
		Vector3f effectPos;
		effectPos.x = 150.0f * sinf(mFaceDir);
		effectPos.y = 150.0f;
		effectPos.z = 150.0f * cosf(mFaceDir);

		Stickers stickers(this);
		Iterator<Creature> iter(&stickers);
		CI_LOOP(iter)
		{
			Creature* stuck = *iter;
			if (stuck->isPiki()) {
				if (static_cast<Piki*>(stuck)->getKind() == Purple) {
					InteractFlick flick(this, C_GENERALPARMS.mShakeKnockback(), C_GENERALPARMS.mShakeDamage(), angle);
					stuck->stimulate(flick);
				} else {
					InteractHanaChirashi wilt(this, C_GENERALPARMS.mAttackDamage(), &effectPos);
					stuck->stimulate(wilt);
				}
			}
		}
	}
}

/**
 * @note Address: 0x802FDEE0
 * @note Size: 0x2AC
 */
void Obj::flickHandCollision(Creature* target)
{
	Vector3f targetPos = target->getPosition();
	if (target->isNavi()) {
		Vector3f::getFlatDirectionFromTo(mPosition, targetPos);

		targetPos.y = 1.0f;
		targetPos *= 300.0f;

		InteractHanaChirashi wither(this, C_GENERALPARMS.mAttackDamage(), &targetPos);
		target->stimulate(wither);
		return;
	}

	if (target->isPiki()) {
		if (static_cast<Piki*>(target)->getKind() == Purple) {
			f32 angle = JMAAtan2Radian(mPosition.x - targetPos.x, mPosition.z - targetPos.z);
			InteractFlick flick(this, C_GENERALPARMS.mShakeKnockback(), C_GENERALPARMS.mShakeDamage(), angle);
			target->stimulate(flick);
			return;
		}

		Vector3f::getFlatDirectionFromTo(mPosition, targetPos);
		targetPos.y = 1.0f;
		targetPos *= 300.0f;

		InteractHanaChirashi wither(this, C_GENERALPARMS.mAttackDamage(), &targetPos);
		target->stimulate(wither);
	}
}

/**
 * @note Address: 0x802FE18C
 * @note Size: 0x58
 */
bool Obj::isNoDamageCollision()
{
	CollPart* part = mCollTree->getCollPart('bod0');
	if (part && part->mSpecialID == 'st__') {
		return false;
	}
	return true;
}

/**
 * @note Address: 0x802FE1E4
 * @note Size: 0x2C
 */
void Obj::resetMapCollisionSize(bool isBall)
{
	mIsBall = isBall;
	if (isBall) {
		C_GENERALPARMS.mHeightOffsetFromFloor() = 60.0f;
	} else {
		C_GENERALPARMS.mHeightOffsetFromFloor() = 120.0f;
	}
}

/**
 * @note Address: 0x802FE210
 * @note Size: 0x8C
 */
void Obj::updateMapCollisionSize()
{
	if (mIsBall) {
		f32 heightOff = C_GENERALPARMS.mHeightOffsetFromFloor();
		if (heightOff > 60.0f) {
			C_GENERALPARMS.mHeightOffsetFromFloor() = -((250.0f * sys->mDeltaTime) - heightOff);
			heightOff                               = C_GENERALPARMS.mHeightOffsetFromFloor();
			if (heightOff < 60.0f) {
				C_GENERALPARMS.mHeightOffsetFromFloor() = 60.0f;
			}
		}
	} else {
		f32 heightOff = C_GENERALPARMS.mHeightOffsetFromFloor();
		if (heightOff < 120.0f) {
			C_GENERALPARMS.mHeightOffsetFromFloor() = ((250.0f * sys->mDeltaTime) + heightOff);
			heightOff                               = C_GENERALPARMS.mHeightOffsetFromFloor();
			if (heightOff > 120.0f) {
				C_GENERALPARMS.mHeightOffsetFromFloor() = 120.0f;
			}
		}
	}
}

/**
 * @note Address: 0x802FE29C
 * @note Size: 0x3AC
 * Collision of flicking hand after crab rights itself.
 * https://tenor.com/view/segmented-crawbster-crawbster-pikmin-pikmin-2-gif-13837251029309082326
 */
bool Obj::flickHandCollision()
{
	if (mIsArmSwinging) {
		Matrixf* armMtx = mModel->getJoint("hand_R")->getWorldMatrix();

		Vector3f armX, armY, armZ, armPos;

		f32 xWeights[] = { -15.0f, 70.0f };
		f32 yWeights[] = { -20.0f, -40.0f };
		f32 zWeights[] = { 15.0f, 15.0f };

		armMtx->getColumn(0, armX);     // f31, f30, f29
		armMtx->getColumn(1, armY);     // f28, f27, f26
		armMtx->getColumn(2, armZ);     // f25, f24, f23
		armMtx->getTranslation(armPos); // f22, f21, f20

		armX.normalise();
		armY.normalise();
		armZ.normalise();

		for (int i = 0; i < 2; i++) {
			Vector3f xVec = armX * xWeights[i];
			Vector3f yVec = armY * yWeights[i];
			Vector3f zVec = armZ * zWeights[i];
			armPos += xVec;
			armPos += yVec;
			armPos += zVec;

			CurrTriInfo info;
			info.mPosition        = armPos;
			info.mUpdateOnNewMaxY = 0;
			mapMgr->getCurrTri(info);

			if (!info.mTriangle || info.mMinY > armPos.y) {
				return true;
			}
		}
	}

	return false;
	/*
	stwu     r1, -0x160(r1)
	mflr     r0
	stw      r0, 0x164(r1)
	stfd     f31, 0x150(r1)
	psq_st   f31, 344(r1), 0, qr0
	stfd     f30, 0x140(r1)
	psq_st   f30, 328(r1), 0, qr0
	stfd     f29, 0x130(r1)
	psq_st   f29, 312(r1), 0, qr0
	stfd     f28, 0x120(r1)
	psq_st   f28, 296(r1), 0, qr0
	stfd     f27, 0x110(r1)
	psq_st   f27, 280(r1), 0, qr0
	stfd     f26, 0x100(r1)
	psq_st   f26, 264(r1), 0, qr0
	stfd     f25, 0xf0(r1)
	psq_st   f25, 248(r1), 0, qr0
	stfd     f24, 0xe0(r1)
	psq_st   f24, 232(r1), 0, qr0
	stfd     f23, 0xd0(r1)
	psq_st   f23, 216(r1), 0, qr0
	stfd     f22, 0xc0(r1)
	psq_st   f22, 200(r1), 0, qr0
	stfd     f21, 0xb0(r1)
	psq_st   f21, 184(r1), 0, qr0
	stfd     f20, 0xa0(r1)
	psq_st   f20, 168(r1), 0, qr0
	stfd     f19, 0x90(r1)
	psq_st   f19, 152(r1), 0, qr0
	stfd     f18, 0x80(r1)
	psq_st   f18, 136(r1), 0, qr0
	stfd     f17, 0x70(r1)
	psq_st   f17, 120(r1), 0, qr0
	stfd     f16, 0x60(r1)
	psq_st   f16, 104(r1), 0, qr0
	stw      r31, 0x5c(r1)
	stw      r30, 0x58(r1)
	stw      r29, 0x54(r1)
	stw      r28, 0x50(r1)
	lbz      r0, 0x2c1(r3)
	cmplwi   r0, 0
	beq      lbl_802FE5A4
	lwz      r3, 0x174(r3)
	addi     r4, r2, lbl_8051D488@sda21
	bl       getJoint__Q28SysShape5ModelFPc
	bl       getWorldMatrix__Q28SysShape5JointFv
	lfs      f30, 0x10(r3)
	lfs      f29, 0x20(r3)
	fmuls    f0, f30, f30
	lfs      f31, 0(r3)
	lwz      r8, lbl_8051D470@sda21(r2)
	fmuls    f1, f29, f29
	lwz      r7, lbl_8051D474@sda21(r2)
	fmadds   f0, f31, f31, f0
	lwz      r6, lbl_8051D478@sda21(r2)
	lwz      r5, lbl_8051D47C@sda21(r2)
	fadds    f1, f1, f0
	lfs      f0, lbl_8051D3A8@sda21(r2)
	lwz      r4, lbl_8051D480@sda21(r2)
	lwz      r0, lbl_8051D484@sda21(r2)
	fcmpo    cr0, f1, f0
	stw      r8, 0x18(r1)
	lfs      f28, 4(r3)
	stw      r7, 0x1c(r1)
	lfs      f27, 0x14(r3)
	stw      r6, 0x10(r1)
	lfs      f26, 0x24(r3)
	stw      r5, 0x14(r1)
	lfs      f25, 8(r3)
	stw      r4, 8(r1)
	lfs      f24, 0x18(r3)
	stw      r0, 0xc(r1)
	lfs      f23, 0x28(r3)
	lfs      f22, 0xc(r3)
	lfs      f21, 0x1c(r3)
	lfs      f20, 0x2c(r3)
	ble      lbl_802FE3E0
	ble      lbl_802FE3E4
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_802FE3E4

lbl_802FE3E0:
	fmr      f1, f0

lbl_802FE3E4:
	lfs      f0, lbl_8051D3A8@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_802FE404
	lfs      f0, lbl_8051D3B8@sda21(r2)
	fdivs    f0, f0, f1
	fmuls    f31, f31, f0
	fmuls    f30, f30, f0
	fmuls    f29, f29, f0

lbl_802FE404:
	fmuls    f1, f27, f27
	lfs      f0, lbl_8051D3A8@sda21(r2)
	fmuls    f2, f26, f26
	fmadds   f1, f28, f28, f1
	fadds    f1, f2, f1
	fcmpo    cr0, f1, f0
	ble      lbl_802FE430
	ble      lbl_802FE434
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_802FE434

lbl_802FE430:
	fmr      f1, f0

lbl_802FE434:
	lfs      f0, lbl_8051D3A8@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_802FE454
	lfs      f0, lbl_8051D3B8@sda21(r2)
	fdivs    f0, f0, f1
	fmuls    f28, f28, f0
	fmuls    f27, f27, f0
	fmuls    f26, f26, f0

lbl_802FE454:
	fmuls    f1, f24, f24
	lfs      f0, lbl_8051D3A8@sda21(r2)
	fmuls    f2, f23, f23
	fmadds   f1, f25, f25, f1
	fadds    f1, f2, f1
	fcmpo    cr0, f1, f0
	ble      lbl_802FE480
	ble      lbl_802FE484
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_802FE484

lbl_802FE480:
	fmr      f1, f0

lbl_802FE484:
	lfs      f0, lbl_8051D3A8@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_802FE4A4
	lfs      f0, lbl_8051D3B8@sda21(r2)
	fdivs    f0, f0, f1
	fmuls    f25, f25, f0
	fmuls    f24, f24, f0
	fmuls    f23, f23, f0

lbl_802FE4A4:
	lfs      f16, lbl_8051D490@sda21(r2)
	addi     r31, r1, 0x18
	lfs      f17, lbl_8051D494@sda21(r2)
	addi     r30, r1, 0x10
	lfs      f18, lbl_8051D3A8@sda21(r2)
	addi     r29, r1, 8
	lfs      f19, lbl_8051D3B8@sda21(r2)
	li       r28, 0

lbl_802FE4C4:
	lfs      f0, 0(r31)
	li       r5, 0
	lfs      f1, 0(r30)
	li       r0, 1
	fmuls    f3, f31, f0
	lfs      f2, 0(r29)
	fmuls    f4, f30, f0
	stb      r0, 0x2c(r1)
	fmuls    f0, f29, f0
	lwz      r3, mapMgr__4Game@sda21(r13)
	fmuls    f5, f28, f1
	stw      r5, 0x34(r1)
	fadds    f22, f22, f3
	addi     r4, r1, 0x20
	fmuls    f3, f27, f1
	stfs     f16, 0x38(r1)
	fadds    f21, f21, f4
	stfs     f17, 0x3c(r1)
	fmuls    f1, f26, f1
	fadds    f20, f20, f0
	stw      r5, 0x30(r1)
	fmuls    f0, f25, f2
	fadds    f22, f22, f5
	stfs     f18, 0x40(r1)
	fmuls    f4, f24, f2
	fadds    f21, f21, f3
	stfs     f19, 0x44(r1)
	fadds    f22, f22, f0
	fmuls    f0, f23, f2
	stfs     f18, 0x48(r1)
	fadds    f20, f20, f1
	fadds    f21, f21, f4
	stb      r5, 0x2d(r1)
	fadds    f20, f20, f0
	stfs     f22, 0x20(r1)
	stfs     f21, 0x24(r1)
	stfs     f20, 0x28(r1)
	stb      r5, 0x2c(r1)
	lwz      r12, 4(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x34(r1)
	cmplwi   r0, 0
	beq      lbl_802FE584
	lfs      f0, 0x3c(r1)
	fcmpo    cr0, f0, f21
	ble      lbl_802FE58C

lbl_802FE584:
	li       r3, 1
	b        lbl_802FE5A8

lbl_802FE58C:
	addi     r28, r28, 1
	addi     r30, r30, 4
	cmpwi    r28, 2
	addi     r29, r29, 4
	addi     r31, r31, 4
	blt      lbl_802FE4C4

lbl_802FE5A4:
	li       r3, 0

lbl_802FE5A8:
	psq_l    f31, 344(r1), 0, qr0
	lfd      f31, 0x150(r1)
	psq_l    f30, 328(r1), 0, qr0
	lfd      f30, 0x140(r1)
	psq_l    f29, 312(r1), 0, qr0
	lfd      f29, 0x130(r1)
	psq_l    f28, 296(r1), 0, qr0
	lfd      f28, 0x120(r1)
	psq_l    f27, 280(r1), 0, qr0
	lfd      f27, 0x110(r1)
	psq_l    f26, 264(r1), 0, qr0
	lfd      f26, 0x100(r1)
	psq_l    f25, 248(r1), 0, qr0
	lfd      f25, 0xf0(r1)
	psq_l    f24, 232(r1), 0, qr0
	lfd      f24, 0xe0(r1)
	psq_l    f23, 216(r1), 0, qr0
	lfd      f23, 0xd0(r1)
	psq_l    f22, 200(r1), 0, qr0
	lfd      f22, 0xc0(r1)
	psq_l    f21, 184(r1), 0, qr0
	lfd      f21, 0xb0(r1)
	psq_l    f20, 168(r1), 0, qr0
	lfd      f20, 0xa0(r1)
	psq_l    f19, 152(r1), 0, qr0
	lfd      f19, 0x90(r1)
	psq_l    f18, 136(r1), 0, qr0
	lfd      f18, 0x80(r1)
	psq_l    f17, 120(r1), 0, qr0
	lfd      f17, 0x70(r1)
	psq_l    f16, 104(r1), 0, qr0
	lfd      f16, 0x60(r1)
	lwz      r31, 0x5c(r1)
	lwz      r30, 0x58(r1)
	lwz      r29, 0x54(r1)
	lwz      r0, 0x164(r1)
	lwz      r28, 0x50(r1)
	mtlr     r0
	addi     r1, r1, 0x160
	blr
	*/
}

/**
 * @note Address: 0x802FE648
 * @note Size: 0x11C
 */
void Obj::startBlendAnimation(int animIdx, bool blendAnim)
{
	if (blendAnim) {
		SysShape::Animator& anim     = mAnimator->getAnimator(0);
		SysShape::AnimInfo* animInfo = anim.mAnimInfo;
		f32 f1;
		if (animInfo) {
			f1 = (f32)animInfo->mAnm->mTotalFrameCount;
		} else {
			f1 = 0.0f;
		}
		f32 frame = anim.mTimer;
		int currAnimId;
		if (f1 - 1.0f > frame) {
			if (animInfo) {
				currAnimId = animInfo->mId;
			} else {
				currAnimId = DANGOANIM_NULL;
			}
			if (animIdx != currAnimId) {
				startBlend(currAnimId, animIdx, &EnemyBlendAnimatorBase::sBlendLinearFun, 30.0f, nullptr);
				anim.setCurrFrame(frame);
			}
		} else {
			startMotion(animIdx, nullptr);
		}
	} else {
		startMotion(animIdx, nullptr);
	}
}

/**
 * @note Address: 0x802FE764
 * @note Size: 0x98
 */
void Obj::endBlendAnimation()
{
	SysShape::Animator& anim     = static_cast<ProperAnimator*>(mAnimator)->getAnimator(1);
	SysShape::AnimInfo* animInfo = anim.mAnimInfo;
	int animId;
	if (animInfo) {
		animId = animInfo->mId;
	} else {
		animId = DANGOANIM_NULL;
	}
	f32 frame = anim.mTimer;
	endBlend();
	startMotion(animId, nullptr);
	setMotionFrame(frame);
}

/**
 * @note Address: 0x802FE7FC
 * @note Size: 0xC8
 */
void Obj::startBossFlickBGM()
{
	PSM::EnemyBoss* soundObj = static_cast<PSM::EnemyBoss*>(mSoundObj);
	PSM::assertIsBoss(soundObj);
	soundObj->jumpRequest(PSM::EnemyMidBoss::BossBgm_Flick);
}

/**
 * @note Address: 0x802FE8C4
 * @note Size: 0xC8
 */
void Obj::startBossAttackLoopBGM()
{
	PSM::EnemyBoss* soundObj = static_cast<PSM::EnemyBoss*>(mSoundObj);
	PSM::assertIsBoss(soundObj);
	soundObj->jumpRequest(PSM::EnemyMidBoss::BossBgm_AttackLong);
}

/**
 * @note Address: 0x802FE98C
 * @note Size: 0xC8
 */
void Obj::finishBossAttackLoopBGM()
{
	PSM::EnemyBoss* soundObj = static_cast<PSM::EnemyBoss*>(mSoundObj);
	PSM::assertIsBoss(soundObj);
	soundObj->jumpRequest(PSM::EnemyMidBoss::BossBgm_MainLoop);
}

/**
 * @note Address: 0x802FEA54
 * @note Size: 0xFC
 */
void Obj::updateBossBGM()
{
	PSM::EnemyBoss* soundObj = static_cast<PSM::EnemyBoss*>(mSoundObj);
	PSM::assertIsBoss(soundObj);

	if (mStuckPikminCount) {
		soundObj->postPikiAttack(true);
	} else {
		soundObj->postPikiAttack(false);
	}
}

/**
 * @note Address: 0x802FEB50
 * @note Size: 0xBC
 */
void Obj::resetBossAppearBGM()
{
	PSM::EnemyBoss* soundObj = static_cast<PSM::EnemyBoss*>(mSoundObj);
	PSM::assertIsBoss(soundObj);
	soundObj->setAppearFlag(false);
}

/**
 * @note Address: 0x802FEC0C
 * @note Size: 0xBC
 */
void Obj::setBossAppearBGM()
{
	PSM::EnemyBoss* soundObj = static_cast<PSM::EnemyBoss*>(mSoundObj);
	PSM::assertIsBoss(soundObj);
	soundObj->setAppearFlag(true);
}

/**
 * @note Address: 0x802FECC8
 * @note Size: 0x170
 */
void Obj::createEffect()
{
	mEfxWallBreak = new efx::TDangoWallBreak;
	mEfxAttack2   = new efx::TDangoAttack2;
	mEfxRun       = new efx::TDangoRun;
}

/**
 * @note Address: 0x802FEE38
 * @note Size: 0x64
 */
void Obj::setupEffect()
{
	mEfxWallBreak->mMtx = mModel->getJoint("hand_R")->getWorldMatrix();
	mEfxAttack2->mMtx   = mModel->getJoint("arm_R02")->getWorldMatrix();
	mEfxRun->setPosptr(&mPosition);
}

/**
 * @note Address: 0x802FEE9C
 * @note Size: 0x7C
 */
void Obj::createDeadSmokeEffect()
{
	Matrixf* mat = mModel->getJoint("stomach")->getWorldMatrix();
	efx::TDangoDeadSmoke smokeEff(mat);
	smokeEff.create(nullptr);
}

/**
 * @note Address: 0x802FEF18
 * @note Size: 0x88
 */
void Obj::createDeadBombEffect()
{
	Matrixf* mat = mModel->getJoint("stomach")->getWorldMatrix();
	efx::TDangoDead deadEff(mat);
	deadEff.create(nullptr);
}

/**
 * @note Address: 0x802FEFA0
 * @note Size: 0xA0
 */
void Obj::createBodyTurnEffect()
{
	efx::TDangoTurn turnFX;
	efx::ArgRotY fxArg(mPosition, mFaceDir);

	turnFX.create(&fxArg);
}

/**
 * @note Address: 0x802FF040
 * @note Size: 0x54
 */
void Obj::createWallBreakEffect()
{
	mEfxWallBreak->create(nullptr);
	mEfxAttack2->fade();
}

/**
 * @note Address: 0x802FF094
 * @note Size: 0x34
 */
void Obj::createFlickAttackEffect() { mEfxAttack2->create(nullptr); }

/**
 * @note Address: 0x802FF0C8
 * @note Size: 0x7C
 * Creates the rainbow damage particles from the crab's guts when pikmin attack.
 */
void Obj::createBodyDamageEffect()
{
	Matrixf* mat = mModel->getJoint("stomach")->getWorldMatrix();
	efx::TDangoDamage dmgEff(mat);
	dmgEff.create(nullptr);
}

/**
 * @note Address: 0x802FF144
 * @note Size: 0xCC
 * Creates particle effect when the enemy crashes into a wall.
 */
void Obj::createBodyWallCrashEffect(Vector3f vec)
{
	Vector3f weightVec = vec;
	weightVec *= 60.0f;

	Vector3f fxPos = mPosition;
	fxPos -= weightVec;
	fxPos.y = mPosition.y;

	efx::TDangoCrash crashFX;
	efx::ArgDir fxArg(fxPos);

	fxArg.mAngle = vec;
	crashFX.create(&fxArg);
}

/**
 * @note Address: 0x802FF210
 * @note Size: 0x34
 */
void Obj::startRollingMoveEffect() { mEfxRun->create(nullptr); }

/**
 * @note Address: 0x802FF244
 * @note Size: 0x30
 */
void Obj::finishRollingMoveEffect() { mEfxRun->fade(); }

/**
 * @note Address: 0x802FF274
 * @note Size: 0x44
 */
void Obj::createEnemyBounceEffect() { createBounceEffect(mPosition, getDownSmokeScale()); }

/**
 * @note Address: 0x802FF2C0
 * @note Size: 0x1E8
 */
void Obj::createMoveHandEffect()
{
	int state = getStateID();
	if (state == DANGOMUSHI_Move || state == DANGOMUSHI_Attack) {
		Matrixf* armMtx = mModel->getJoint("hand_R")->getWorldMatrix();
		Vector3f armX, armY, armPos;
		armMtx->getColumn(0, armX);
		armMtx->getColumn(1, armY);
		armMtx->getTranslation(armPos);

		armX.normalise();
		armY.normalise();

		armX *= 42.5f;
		armY *= -12.5f;
		armPos += armX;
		armPos += armY;

		f32 yDiff = armPos.y - mapMgr->getMinY(armPos);
		if (mIsMoveHandEffectActive) {
			if (yDiff > 30.0f) {
				mIsMoveHandEffectActive = false;
			}
		} else if (yDiff < 25.0f) {
			mIsMoveHandEffectActive = true;
			armPos.y                = mPosition.y;
			createBounceEffect(armPos, 0.68f);
		}
	}
}

/**
 * @note Address: 0x802FF4A8
 * @note Size: 0x98
 */
void Obj::createAppearSmokeEffect()
{
	efx::TDangoFly fly;
	efx::Arg arg(mPosition);
	fly.create(&arg);
}

/**
 * @note Address: 0x802FF540
 * @note Size: 0x64
 */
void Obj::effectDrawOn()
{
	mEfxWallBreak->endDemoDrawOn();
	mEfxAttack2->endDemoDrawOn();
	mEfxRun->endDemoDrawOn();
}

/**
 * @note Address: 0x802FF5A4
 * @note Size: 0x64
 */
void Obj::effectDrawOff()
{
	mEfxWallBreak->startDemoDrawOff();
	mEfxAttack2->startDemoDrawOff();
	mEfxRun->startDemoDrawOff();
}

} // namespace DangoMushi
} // namespace Game
