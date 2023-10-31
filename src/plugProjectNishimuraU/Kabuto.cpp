#include "Game/Entities/Kabuto.h"
#include "Game/EnemyFunc.h"
#include "Game/generalEnemyMgr.h"
#include "Game/Entities/Rock.h"
#include "efx/TKabutoAttack.h"
#include "Dolphin/rand.h"

namespace Game {
namespace Kabuto {
/*
 * --INFO--
 * Address:	802E4178
 * Size:	00014C
 */
Obj::Obj()
{
	mAnimator = new ProperAnimator();
	setFSM(new FSM());
	createEffect();
}

/*
 * --INFO--
 * Address:	802E42C8
 * Size:	000004
 */
void Obj::setInitialSetting(EnemyInitialParamBase*) { }

/*
 * --INFO--
 * Address:	802E42CC
 * Size:	000108
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

/*
 * --INFO--
 * Address:	802E43D8
 * Size:	000044
 */
void Obj::doUpdate()
{
	updateCaution();
	mFsm->exec(this);
}

/*
 * --INFO--
 * Address:	802E441C
 * Size:	000004
 */
void Obj::doDirectDraw(Graphics&) { }

/*
 * --INFO--
 * Address:	802E4420
 * Size:	000020
 */
void Obj::doDebugDraw(Graphics& gfx) { EnemyBase::doDebugDraw(gfx); }

/*
 * --INFO--
 * Address:	802E4440
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
 * Address:	802E448C
 * Size:	0000A8
 */
void Obj::getShadowParam(ShadowParam& shadowParam)
{
	shadowParam.mPosition                 = mModel->getJoint("center")->getWorldMatrix()->getBasis(3);
	shadowParam.mPosition.y               = mPosition.y + 5.0f;
	shadowParam.mBoundingSphere.mPosition = Vector3f(0.0f, 1.0f, 0.0f);

	if (isEvent(1, EB2_Earthquake)) {
		shadowParam.mBoundingSphere.mRadius = 50.0f;
	} else {
		shadowParam.mBoundingSphere.mRadius = 10.0f;
	}

	shadowParam.mSize = 25.0f;
}

/*
 * --INFO--
 * Address:	802E4534
 * Size:	000054
 */
void Obj::doStartStoneState()
{
	EnemyBase::doStartStoneState();
	finishRotateEffect();
	finishWaitEffect();
}

/*
 * --INFO--
 * Address:	802E4588
 * Size:	0000B0
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

/*
 * --INFO--
 * Address:	802E4638
 * Size:	000028
 */
void Obj::startCarcassMotion() { startMotion(KABUTOANIM_Carry, nullptr); }

/*
 * --INFO--
 * Address:	802E4660
 * Size:	00002C
 */
void Obj::doStartMovie() { effectDrawOff(); }

/*
 * --INFO--
 * Address:	802E4690
 * Size:	00002C
 */
void Obj::doEndMovie() { effectDrawOn(); }

/*
 * --INFO--
 * Address:	802E46C0
 * Size:	000094
 */
void Obj::initWalkSmokeEffect()
{
	mWalkSmokeMgr.alloc(4);
	mWalkSmokeMgr.setup(0, mModel, "rhand2", 11.0f);
	mWalkSmokeMgr.setup(1, mModel, "rleg", 16.0f);
	mWalkSmokeMgr.setup(2, mModel, "lhand2", 11.0f);
	mWalkSmokeMgr.setup(3, mModel, "lleg", 16.0f);
}

/*
 * --INFO--
 * Address:	802E4754
 * Size:	000008
 */
WalkSmokeEffect::Mgr* Obj::getWalkSmokeEffectMgr() { return &mWalkSmokeMgr; }

/*
 * --INFO--
 * Address:	802E475C
 * Size:	000198
 */
void Obj::setRandTarget()
{
	f32 randRadius = C_PARMS->mGeneral.mHomeRadius.mValue
	               + randWeightFloat(C_PARMS->mGeneral.mTerritoryRadius.mValue - C_PARMS->mGeneral.mHomeRadius.mValue);
	f32 angledist = JMAAtan2Radian(mPosition.x - mHomePosition.x, mPosition.z - mHomePosition.z);
	f32 angle     = HALF_PI + (angledist + randWeightFloat(PI));

	mTargetPosition = Vector3f(randRadius * sinf(angle) + mHomePosition.x, mHomePosition.y, randRadius * cosf(angle) + mHomePosition.z);
}

/*
 * --INFO--
 * Address:	802E48F4
 * Size:	000058
 */
Creature* Obj::getSearchedTarget()
{
	Creature* target
	    = EnemyFunc::getNearestPikminOrNavi(this, getViewAngle(), C_PARMS->mGeneral.mSightRadius.mValue, nullptr, nullptr, nullptr);
	if (target) {
		mAlertTimer = 0.0f;
	}
	return target;
}

/*
 * --INFO--
 * Address:	802E494C
 * Size:	0002BC
 */
bool Obj::isAttackableTarget()
{
	f32 theta       = mFaceDir;
	Vector3f angles = getRotation(theta);
	f32 scale       = 0.5f * C_PARMS->mGeneral.mSightRadius.mValue;
	Vector3f pos    = Vector3f(scale * angles.x + mPosition.x, scale * angles.y + mPosition.y, scale * angles.z + mPosition.z);
	Sys::Sphere sphere;
	sphere.mRadius   = 0.75f * C_PARMS->mGeneral.mSightRadius.mValue;
	sphere.mPosition = pos;

	CellIteratorArg iterArg(sphere);
	iterArg.mIsSphereCollisionDisabled = true;
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
				Vector3f creaturePos = creature->getPosition();
				Vector3f diff        = creaturePos - mPosition;
				if (absVal(diff.x) < C_PARMS->mGeneral.mFov()) {
					f32 dotProd = absVal(dot(diff, angles));
					if (dotProd < 15.0f) {
						f32 secondDotProd = dot(diff, angles);
						if (secondDotProd > 15.0f && secondDotProd < C_PARMS->mGeneral.mSightRadius.mValue) {
							return true;
						}
					}
				}
			}
		}
	}

	return false;

	/*
	stwu     r1, -0xf0(r1)
	mflr     r0
	stw      r0, 0xf4(r1)
	stfd     f31, 0xe0(r1)
	psq_st   f31, 232(r1), 0, qr0
	stfd     f30, 0xd0(r1)
	psq_st   f30, 216(r1), 0, qr0
	stfd     f29, 0xc0(r1)
	psq_st   f29, 200(r1), 0, qr0
	stw      r31, 0xbc(r1)
	stw      r30, 0xb8(r1)
	stw      r29, 0xb4(r1)
	mr       r31, r3
	lfs      f0, lbl_8051CDCC@sda21(r2)
	lfs      f3, 0x1fc(r3)
	fmr      f1, f3
	fcmpo    cr0, f3, f0
	bge      lbl_802E4998
	fneg     f1, f3

lbl_802E4998:
	lfs      f2, lbl_8051CE24@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	lfs      f0, lbl_8051CDCC@sda21(r2)
	addi     r4, r3, sincosTable___5JMath@l
	fmuls    f1, f1, f2
	fcmpo    cr0, f3, f0
	fctiwz   f0, f1
	stfd     f0, 0x90(r1)
	lwz      r0, 0x94(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r4, r0
	lfs      f30, 4(r3)
	bge      lbl_802E49F0
	lfs      f0, lbl_8051CE28@sda21(r2)
	fmuls    f0, f3, f0
	fctiwz   f0, f0
	stfd     f0, 0x98(r1)
	lwz      r0, 0x9c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0
	fneg     f29, f0
	b        lbl_802E4A08

lbl_802E49F0:
	fmuls    f0, f3, f2
	fctiwz   f0, f0
	stfd     f0, 0xa0(r1)
	lwz      r0, 0xa4(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f29, r4, r0

lbl_802E4A08:
	lwz      r4, 0xc0(r31)
	fneg     f31, f30
	lfs      f0, lbl_8051CE38@sda21(r2)
	addi     r3, r1, 0x24
	lfs      f2, 0x3d4(r4)
	addi     r4, r1, 0x14
	lfs      f1, lbl_8051CE3C@sda21(r2)
	fmuls    f5, f0, f2
	lfs      f3, 0x194(r31)
	lfs      f0, 0x18c(r31)
	fmuls    f4, f1, f2
	lfs      f1, 0x190(r31)
	lfs      f2, lbl_8051CDCC@sda21(r2)
	fmadds   f3, f30, f5, f3
	stfs     f4, 0x20(r1)
	fmadds   f1, f2, f5, f1
	fmadds   f0, f29, f5, f0
	stfs     f3, 0x1c(r1)
	stfs     f0, 0x14(r1)
	stfs     f1, 0x18(r1)
	bl       __ct__Q24Game15CellIteratorArgFRQ23Sys6Sphere
	li       r0, 1
	addi     r3, r1, 0x44
	stb      r0, 0x40(r1)
	addi     r4, r1, 0x24
	bl       __ct__Q24Game12CellIteratorFRQ24Game15CellIteratorArg
	addi     r3, r1, 0x44
	bl       first__Q24Game12CellIteratorFv
	b        lbl_802E4BC0

lbl_802E4A7C:
	addi     r3, r1, 0x44
	bl       __ml__Q24Game12CellIteratorFv
	lwz      r12, 0(r3)
	mr       r30, r3
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802E4BB8
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	mr       r29, r3
	bne      lbl_802E4AFC
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802E4AFC
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x1c0(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802E4AFC
	li       r29, 1

lbl_802E4AFC:
	clrlwi.  r0, r29, 0x18
	beq      lbl_802E4BB8
	mr       r4, r30
	addi     r3, r1, 8
	lwz      r12, 0(r30)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f3, 0xc(r1)
	lfs      f0, 0x190(r31)
	lfs      f2, 8(r1)
	lfs      f1, 0x18c(r31)
	fsubs    f3, f3, f0
	lfs      f0, lbl_8051CDCC@sda21(r2)
	lfs      f4, 0x10(r1)
	fsubs    f2, f2, f1
	lfs      f1, 0x194(r31)
	fcmpo    cr0, f3, f0
	lwz      r3, 0xc0(r31)
	fsubs    f4, f4, f1
	ble      lbl_802E4B58
	fmr      f1, f3
	b        lbl_802E4B5C

lbl_802E4B58:
	fneg     f1, f3

lbl_802E4B5C:
	lfs      f0, 0x3fc(r3)
	fcmpo    cr0, f1, f0
	bge      lbl_802E4BB8
	lfs      f1, lbl_8051CDCC@sda21(r2)
	fmuls    f3, f1, f3
	fmadds   f0, f31, f2, f3
	fmadds   f0, f29, f4, f0
	fcmpo    cr0, f0, f1
	ble      lbl_802E4B84
	b        lbl_802E4B88

lbl_802E4B84:
	fneg     f0, f0

lbl_802E4B88:
	lfs      f1, lbl_8051CE40@sda21(r2)
	fcmpo    cr0, f0, f1
	bge      lbl_802E4BB8
	fmadds   f0, f29, f2, f3
	fmadds   f2, f30, f4, f0
	fcmpo    cr0, f2, f1
	ble      lbl_802E4BB8
	lfs      f0, 0x3d4(r3)
	fcmpo    cr0, f2, f0
	bge      lbl_802E4BB8
	li       r3, 1
	b        lbl_802E4BD4

lbl_802E4BB8:
	addi     r3, r1, 0x44
	bl       next__Q24Game12CellIteratorFv

lbl_802E4BC0:
	addi     r3, r1, 0x44
	bl       isDone__Q24Game12CellIteratorFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_802E4A7C
	li       r3, 0

lbl_802E4BD4:
	psq_l    f31, 232(r1), 0, qr0
	lfd      f31, 0xe0(r1)
	psq_l    f30, 216(r1), 0, qr0
	lfd      f30, 0xd0(r1)
	psq_l    f29, 200(r1), 0, qr0
	lfd      f29, 0xc0(r1)
	lwz      r31, 0xbc(r1)
	lwz      r30, 0xb8(r1)
	lwz      r0, 0xf4(r1)
	lwz      r29, 0xb4(r1)
	mtlr     r0
	addi     r1, r1, 0xf0
	blr
	*/
}

/*
 * --INFO--
 * Address:	802E4C08
 * Size:	0000E4
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

/*
 * --INFO--
 * Address:	802E4CEC
 * Size:	000050
 */
void Obj::updateCaution()
{
	if (isEvent(0, EB_Colliding) || isEvent(0, EB_TakingDamage) || mStuckPikminCount != 0) {
		mAlertTimer = 0.0f;
	}

	if (mAlertTimer < C_PARMS->mGeneral.mAlertDuration.mValue) {
		mAlertTimer += sys->mDeltaTime;
	}
}

/*
 * --INFO--
 * Address:	802E4D3C
 * Size:	000024
 */
f32 Obj::getViewAngle()
{
	if (mAlertTimer < C_PARMS->mGeneral.mAlertDuration.mValue) {
		return 180.0f;
	}

	return C_PARMS->mGeneral.mViewAngle.mValue;
}

/*
 * --INFO--
 * Address:	802E4D60
 * Size:	000040
 */
void Obj::lifeIncrement()
{
	mInstantDamage = 0.0f;
	disableEvent(0, EB_TakingDamage);
	mHealth += 1.0f;
	if (mHealth > C_PARMS->mGeneral.mHealth()) {
		mHealth = C_PARMS->mGeneral.mHealth();
	}
}

/*
 * --INFO--
 * Address:	802E4DA0
 * Size:	00007C
 */
void Obj::createRockEmitEffect()
{
	efx::TKabutoAttack attackFX(mModel->getJoint("head")->getWorldMatrix());
	attackFX.create(nullptr);
}
} // namespace Kabuto
} // namespace Game
