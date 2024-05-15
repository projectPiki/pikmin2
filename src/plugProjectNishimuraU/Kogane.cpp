#include "Game/Entities/Kogane.h"
#include "Game/Cave/RandMapMgr.h"
#include "Dolphin/rand.h"
#include "trig.h"
#include "Game/EnemyFunc.h"
#include "Game/gamePlayData.h"
#include "Radar.h"
#include "Game/Entities/ItemHoney.h"

namespace Game {

/**
 * @note Address: 0x8025DC8C
 * @note Size: 0x130
 */
Kogane::Obj::Obj()
{
	mAnimator = new ProperAnimator;
	setFSM(new FSM);
}

/**
 * @note Address: 0x8025DDBC
 * @note Size: 0x4
 */
void Kogane::Obj::setInitialSetting(Game::EnemyInitialParamBase*) { }

/**
 * @note Address: 0x8025DDC0
 * @note Size: 0x130
 */
void Kogane::Obj::onInit(Game::CreatureInitArg* arg)
{
	EnemyBase::onInit(arg);
	enableEvent(0, EB_Invulnerable);
	disableEvent(0, EB_LeaveCarcass);
	disableEvent(0, EB_DeathEffectEnabled);
	setEmotionNone();
	mScaleModifier = 0.0001f;
	mScale         = 0.0001f;
	mCollTree->mPart->setScale(mScaleModifier);
	mHitCount = 0;
	resetAppearTimer();
	resetMoveTimer(0.0f, 0.0f);
	mScaleTimer = 0.0001f;
	resetFartTimer();
	mFsm->start(this, KOGANE_Appear, nullptr);
	if (gameSystem && gameSystem->isZukanMode()) {
		mAppearTimer = -12800.0f;
		mFsm->transit(this, KOGANE_Move, nullptr);
	} else {
		doAnimationCullingOff();
	}
}

/**
 * @note Address: 0x8025DEF0
 * @note Size: 0x4
 */
void Kogane::Obj::resetFartTimer() { }

/**
 * @note Address: 0x8025DEF4
 * @note Size: 0x50
 */
void Kogane::Obj::onKill(Game::CreatureKillArg* arg)
{
	finishBodyEffect();
	EnemyBase::onKill(arg);
}

/**
 * @note Address: 0x8025DF44
 * @note Size: 0x34
 */
void Kogane::Obj::doUpdate() { mFsm->exec(this); }

/**
 * @note Address: 0x8025DF78
 * @note Size: 0x20
 */
void Kogane::Obj::doUpdateCommon() { EnemyBase::doUpdateCommon(); }

/**
 * @note Address: 0x8025DF98
 * @note Size: 0x4
 */
void Kogane::Obj::doDirectDraw(Graphics&) { }

/**
 * @note Address: 0x8025DF9C
 * @note Size: 0x20
 */
void Kogane::Obj::doDebugDraw(Graphics& gfx) { EnemyBase::doDebugDraw(gfx); }

/**
 * @note Address: 0x8025DFBC
 * @note Size: 0x4C
 */
void Kogane::Obj::setFSM(FSM* fsm)
{
	mFsm = fsm;
	mFsm->init(this);
	mCurrentLifecycleState = nullptr;
}

/**
 * @note Address: 0x8025E008
 * @note Size: 0xA0
 */
void Kogane::Obj::getShadowParam(ShadowParam& param)
{
	param.mPosition = getBodyJointPos();
	param.mPosition.y -= 5.0f;
	param.mBoundingSphere.mPosition = Vector3f(0.0f, 1.0f, 0.0f);
	param.mBoundingSphere.mRadius   = param.mPosition.y - mPosition.y + 15.0f;
	param.mSize                     = mScaleTimer * 15.0f;
}

/**
 * @note Address: 0x8025E0A8
 * @note Size: 0x6C
 */
bool Kogane::Obj::pressCallBack(Creature* obj, f32 dmg, CollPart*)
{
	if (obj && obj->isPiki()) {
		return transitDamageState(dmg);
	} else {
		return false;
	}
}

/**
 * @note Address: 0x8025E114
 * @note Size: 0x3C
 */
void Kogane::Obj::wallCallback(const MoveInfo& info)
{
	Vector3f pos = info.mWallNormal;
	setTargetPosition(&pos);
}

/**
 * @note Address: 0x8025E150
 * @note Size: 0x60
 */
bool Kogane::Obj::earthquakeCallBack(Creature* obj, f32)
{
	if (obj && obj->isPiki()) {
		return transitDamageState(0.0f);
	} else {
		return false;
	}
}

/**
 * @note Address: 0x8025E1B0
 * @note Size: 0x6C
 */
bool Kogane::Obj::hipdropCallBack(Creature* obj, f32 dmg, CollPart*)
{
	if (obj && obj->isPiki()) {
		return transitDamageState(dmg);
	} else {
		return false;
	}
}

/**
 * @note Address: 0x8025E21C
 * @note Size: 0x50
 */
void Kogane::Obj::doStartStoneState()
{
	EnemyBase::doStartStoneState();
	disableEvent(0, EB_Invulnerable);
	enableEvent(0, EB_DeathEffectEnabled);
	enableEvent(0, EB_LifegaugeVisible);
}

/**
 * @note Address: 0x8025E26C
 * @note Size: 0x50
 */
void Kogane::Obj::doFinishStoneState()
{
	EnemyBase::doFinishStoneState();
	enableEvent(0, EB_Invulnerable);
	disableEvent(0, EB_DeathEffectEnabled);
	disableEvent(0, EB_LifegaugeVisible);
}

/**
 * @note Address: 0x8025E2BC
 * @note Size: 0x2C
 */
void Kogane::Obj::doStartMovie() { effectDrawOff(); }

/**
 * @note Address: 0x8025E2EC
 * @note Size: 0x2C
 */
void Kogane::Obj::doEndMovie() { effectDrawOn(); }

/**
 * @note Address: 0x8025E31C
 * @note Size: 0x84
 */
bool Kogane::Obj::transitDamageState(f32 dmg)
{
	if (isEvent(0, EB_Bittered)) {
		addDamage(dmg, 1.0f);
		return true;
	} else {
		int id = getStateID();
		if (id == KOGANE_Move || id == KOGANE_Wait) {
			mFsm->transit(this, KOGANE_Press, nullptr);
			return true;
		} else {
			return false;
		}
	}
}

/**
 * @note Address: 0x8025E3A0
 * @note Size: 0x108
 */
bool Kogane::Obj::transitDisappear()
{
	finishBodyEffect();
	if (mHitCount == 0 && gameSystem && gameSystem->mIsInCave && Cave::randMapMgr) {
		PelletInitArg arg;
		if (pelletMgr->makePelletInitArg(arg, mPelletDropCode)) {
			Cave::randMapMgr->getBaseGenData(&mPosition, &mFaceDir);
			mHomePosition = mPosition;
			return false;
		}
	}
	return true;
}

/**
 * @note Address: 0x8025E4A8
 * @note Size: 0x50
 */
Vector3f Kogane::Obj::getBodyJointPos()
{
	Matrixf* mtx = mModel->getJoint("body")->getWorldMatrix();
	return Vector3f(mtx->mMatrix.structView.tx, mtx->mMatrix.structView.ty, mtx->mMatrix.structView.tz);
}

/**
 * @note Address: 0x8025E4F8
 * @note Size: 0xA4
 */
bool Kogane::Obj::koganeScaleUp()
{
	bool check = false;
	if (mScaleTimer < C_PROPERPARMS.mScale.mValue) {
		mScaleTimer += sys->mDeltaTime * 10.0f;

		if (mScaleTimer >= C_PROPERPARMS.mScale()) {
			check       = true;
			mScaleTimer = C_PROPERPARMS.mScale();
			disableEvent(0, EB_NoInterrupt);
		}
		f32 scale      = mScaleTimer;
		mScaleModifier = scale;
		mScale         = scale;
		mCollTree->mPart->setScale(mScaleTimer);
	}
	return check;
}

/**
 * @note Address: 0x8025E59C
 * @note Size: 0x8C
 */
bool Kogane::Obj::koganeScaleDown()
{
	bool check = false;
	if (mScaleTimer > 0.0001f) {
		mScaleTimer += -(sys->mDeltaTime * 10.0f);

		if (mScaleTimer <= 0.0001f) {
			mScaleTimer = 0.0001f;
			check       = true;
		}
		f32 scale      = mScaleTimer;
		mScaleModifier = scale;
		mScale         = scale;
		mCollTree->mPart->setScale(mScaleTimer);
	}
	return check;
}

/**
 * @note Address: 0x8025E628
 * @note Size: 0x1AC
 */
void Kogane::Obj::setTargetPosition(Vector3f* goal)
{
	if (goal) {
		mTargetPosition.x = goal->x * 1000.0f + mPosition.x;
		mTargetPosition.y = mPosition.y;
		mTargetPosition.z = goal->z * 1000.0f + mPosition.z;
	} else {
		f32 angle = 0.0f;
		if (mScaleTimer > 0.1f) {
			angle = randWeightFloat(C_PROPERPARMS.mTurnAngle.mValue * 2.0f);
			angle -= C_PROPERPARMS.mTurnAngle.mValue;
		}
		f32 theta         = PI * (DEG2RAD * angle) + getFaceDir();
		mTargetPosition.x = 1000.0f * sinf(theta) + mPosition.x;
		mTargetPosition.y = mPosition.y;
		mTargetPosition.z = 1000.0f * cosf(theta) + mPosition.z;
	}
}

/**
 * @note Address: 0x8025E7D4
 * @note Size: 0x78
 */
void Kogane::Obj::resetAppearTimer()
{
	f32 time     = C_PROPERPARMS.mMaxAppearTime.mValue - C_PROPERPARMS.mMinAppearTime.mValue;
	mAppearTimer = randWeightFloat(time);
}

/**
 * @note Address: 0x8025E84C
 * @note Size: 0x80
 */
bool Kogane::Obj::isAppear()
{
	bool check;
	f32 rad = C_GENERALPARMS.mSightRadius.mValue;

	if (EnemyFunc::isThereOlimar(this, rad, nullptr)) {
		check = true;
	} else if (EnemyFunc::isTherePikmin(this, rad, nullptr)) {
		check = true;
	} else {
		check = false;
	}

	return check;
}

/**
 * @note Address: 0x8025E8CC
 * @note Size: 0x84
 */
void Kogane::Obj::resetMoveTimer(f32 min, f32 max)
{
	f32 time   = max - min;
	mMoveTimer = randWeightFloat(time);
}

/**
 * @note Address: 0x8025E950
 * @note Size: 0x194
 */
bool Kogane::Obj::createTreasureItem()
{
	if (mHitCount == 0) {
		PelletInitArg arg;
		if (pelletMgr->makePelletInitArg(arg, mPelletDropCode)) {
			arg.mState = PelBirthType_ScaleAppear;
			if (Pellet::sFromTekiEnable)
				arg.mFromEnemy = true;

			mHeldPellet = pelletMgr->birth(&arg);
			if (mHeldPellet) {
				Vector3f velocity(0.0f, 250.0f, 0.0f);

				Matrixf* mtx = mModel->getJoint("body")->getWorldMatrix();
				Vector3f offs(mtx->mMatrix.structView.tx, mtx->mMatrix.structView.ty, mtx->mMatrix.structView.tz);
				mHeldPellet->setPosition(offs, false);

				mHeldPellet->setVelocity(velocity);
				mHeldPellet->createKiraEffect(offs);
				Radar::mgr->exit(this);
				mSoundObj->startSound(PSSE_EN_ENEMY_LOOSE_ITEM, 0);
				mAppearTimer = 12800.0f;
				mHitCount    = 12800;
				return true;
			}
		}
	}
	return false;
}

/**
 * @note Address: 0x8025EAE4
 * @note Size: 0x294
 */
void Kogane::Obj::createPellet(int type, int num)
{
	int colors                = 0;
	int hasColors[OnyonCount] = {};
	for (int i = 0; i < OnyonCount; i++) {
		if (playData->hasMetPikmin(i)) {
			hasColors[colors] = i;
			colors++;
		}
	}

	f32 angle = getFaceDir() + TAU / 3;
	f32 offs  = TAU / 3 / (num + 1);

	Matrixf* mtx = mModel->getJoint("body")->getWorldMatrix();
	Vector3f pos = mtx->getColumn(3);

	for (int i = 0; i < num; i++) {
		PelletNumberInitArg arg(type, hasColors[randInt(colors)]);
		Pellet* pelt = pelletMgr->birth(&arg);
		if (pelt) {
			pelt->init(&arg);
			pelt->onSetPosition(pos);

			angle += offs;
			Vector3f vel = Vector3f(1000.0f * sinf(angle), 250.0f, 1000.0f * cosf(angle));
			pelt->setVelocity(vel);
		}
	}
	/*
	stwu     r1, -0xd0(r1)
	mflr     r0
	stw      r0, 0xd4(r1)
	stfd     f31, 0xc0(r1)
	psq_st   f31, 200(r1), 0, qr0
	stfd     f30, 0xb0(r1)
	psq_st   f30, 184(r1), 0, qr0
	stfd     f29, 0xa0(r1)
	psq_st   f29, 168(r1), 0, qr0
	stfd     f28, 0x90(r1)
	psq_st   f28, 152(r1), 0, qr0
	stmw     r25, 0x74(r1)
	lis      r6, lbl_804853D8@ha
	mr       r29, r4
	lwzu     r4, lbl_804853D8@l(r6)
	mr       r25, r3
	mr       r30, r5
	addi     r26, r1, 0x20
	lwz      r3, 4(r6)
	li       r27, 0
	lwz      r0, 8(r6)
	li       r28, 0
	stw      r4, 0x20(r1)
	stw      r3, 0x24(r1)
	stw      r0, 0x28(r1)

lbl_8025EB48:
	lwz      r3, playData__4Game@sda21(r13)
	mr       r4, r28
	bl       hasMetPikmin__Q24Game8PlayDataFi
	clrlwi.  r0, r3, 0x18
	beq      lbl_8025EB68
	stw      r28, 0(r26)
	addi     r26, r26, 4
	addi     r27, r27, 1

lbl_8025EB68:
	addi     r28, r28, 1
	cmpwi    r28, 3
	blt      lbl_8025EB48
	mr       r3, r25
	lwz      r12, 0(r25)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	addi     r3, r30, 1
	lis      r0, 0x4330
	xoris    r3, r3, 0x8000
	lfs      f3, lbl_8051AC80@sda21(r2)
	stw      r3, 0x5c(r1)
	addi     r4, r2, lbl_8051AC40@sda21
	lfd      f2, lbl_8051AC70@sda21(r2)
	fadds    f29, f3, f1
	stw      r0, 0x58(r1)
	lwz      r3, 0x174(r25)
	lfd      f0, 0x58(r1)
	fsubs    f0, f0, f2
	fdivs    f28, f3, f0
	bl       getJoint__Q28SysShape5ModelFPc
	bl       getWorldMatrix__Q28SysShape5JointFv
	lfs      f2, 0x2c(r3)
	xoris    r27, r27, 0x8000
	lfs      f1, 0x1c(r3)
	addi     r28, r1, 0x20
	lfs      f0, 0xc(r3)
	li       r31, 0
	lfd      f30, lbl_8051AC70@sda21(r2)
	lis      r26, 0x4330
	stfs     f0, 0x14(r1)
	lfs      f31, lbl_8051AC58@sda21(r2)
	stfs     f1, 0x18(r1)
	stfs     f2, 0x1c(r1)
	b        lbl_8025ED3C

lbl_8025EBF8:
	bl       rand
	xoris    r0, r3, 0x8000
	stw      r26, 0x58(r1)
	mr       r4, r29
	addi     r3, r1, 0x2c
	stw      r0, 0x5c(r1)
	lfd      f0, 0x58(r1)
	stw      r27, 0x64(r1)
	fsubs    f0, f0, f30
	stw      r26, 0x60(r1)
	fdivs    f1, f0, f31
	lfd      f0, 0x60(r1)
	fsubs    f0, f0, f30
	fmuls    f0, f0, f1
	fctiwz   f0, f0
	stfd     f0, 0x68(r1)
	lwz      r0, 0x6c(r1)
	slwi     r0, r0, 2
	lwzx     r5, r28, r0
	bl       __ct__Q24Game19PelletNumberInitArgFii
	lwz      r3, pelletMgr__4Game@sda21(r13)
	addi     r4, r1, 0x2c
	bl       birth__Q24Game9PelletMgrFPQ24Game13PelletInitArg
	or.      r25, r3, r3
	beq      lbl_8025ED38
	addi     r4, r1, 0x2c
	bl       init__Q24Game8CreatureFPQ24Game15CreatureInitArg
	mr       r3, r25
	addi     r4, r1, 0x14
	lwz      r12, 0(r25)
	lwz      r12, 0x70(r12)
	mtctr    r12
	bctrl
	fadds    f29, f29, f28
	lfs      f0, lbl_8051AC2C@sda21(r2)
	fmr      f1, f29
	fcmpo    cr0, f29, f0
	bge      lbl_8025EC94
	fneg     f1, f29

lbl_8025EC94:
	lfs      f2, lbl_8051AC68@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	lfs      f0, lbl_8051AC2C@sda21(r2)
	addi     r4, r3, sincosTable___5JMath@l
	fmuls    f1, f1, f2
	lfs      f3, lbl_8051AC84@sda21(r2)
	fcmpo    cr0, f29, f0
	fctiwz   f0, f1
	stfd     f0, 0x68(r1)
	lwz      r0, 0x6c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r4, r0
	lfs      f0, 4(r3)
	fmuls    f4, f3, f0
	bge      lbl_8025ECF4
	lfs      f0, lbl_8051AC64@sda21(r2)
	fmuls    f0, f29, f0
	fctiwz   f0, f0
	stfd     f0, 0x60(r1)
	lwz      r0, 0x64(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0
	fneg     f0, f0
	b        lbl_8025ED0C

lbl_8025ECF4:
	fmuls    f0, f29, f2
	fctiwz   f0, f0
	stfd     f0, 0x58(r1)
	lwz      r0, 0x5c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0

lbl_8025ED0C:
	fmuls    f1, f3, f0
	lfs      f0, lbl_8051AC78@sda21(r2)
	stfs     f4, 0x10(r1)
	mr       r3, r25
	addi     r4, r1, 8
	stfs     f1, 8(r1)
	stfs     f0, 0xc(r1)
	lwz      r12, 0(r25)
	lwz      r12, 0x68(r12)
	mtctr    r12
	bctrl

lbl_8025ED38:
	addi     r31, r31, 1

lbl_8025ED3C:
	cmpw     r31, r30
	blt      lbl_8025EBF8
	psq_l    f31, 200(r1), 0, qr0
	lfd      f31, 0xc0(r1)
	psq_l    f30, 184(r1), 0, qr0
	lfd      f30, 0xb0(r1)
	psq_l    f29, 168(r1), 0, qr0
	lfd      f29, 0xa0(r1)
	psq_l    f28, 152(r1), 0, qr0
	lfd      f28, 0x90(r1)
	lmw      r25, 0x74(r1)
	lwz      r0, 0xd4(r1)
	mtlr     r0
	addi     r1, r1, 0xd0
	blr
	*/
}

/**
 * @note Address: 0x8025ED78
 * @note Size: 0x1DC
 */
void Kogane::Obj::createDoping(u8 type, int num)
{
	f32 angle = getFaceDir() + TAU / 3;
	f32 offs  = TAU / 3 / (num + 1);

	Matrixf* mtx = mModel->getJoint("body")->getWorldMatrix();
	Vector3f pos = mtx->getColumn(3);

	for (int i = 0; i < num; i++) {
		ItemHoney::InitArg arg(type, false);
		BaseItem* honey = ItemHoney::mgr->birth();
		if (honey) {
			honey->init(&arg);
			honey->setPosition(pos, false);

			angle += offs;
			Vector3f vel = Vector3f(50.0f * sinf(angle), 250.0f, 50.0f * cosf(angle));
			honey->setVelocity(vel);
		}
	}
}

} // namespace Game
