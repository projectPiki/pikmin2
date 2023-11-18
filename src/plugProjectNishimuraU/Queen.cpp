#include "Game/Entities/Queen.h"
#include "Game/Entities/Baby.h"
#include "Game/Entities/Rock.h"
#include "Game/generalEnemyMgr.h"
#include "Game/EnemyFunc.h"
#include "Game/EnemyIterator.h"
#include "Game/Stickers.h"
#include "Game/SingleGameSection.h"
#include "Game/Navi.h"
#include "PSM/EnemyBoss.h"
#include "PSSystem/PSMainSide_ObjSound.h"
#include "Dolphin/rand.h"
#include "nans.h"

namespace Game {
namespace Queen {

/*
 * --INFO--
 * Address:	802894D4
 * Size:	00017C
 */
Obj::Obj()
{
	mAnimator = new ProperAnimator;
	setFSM(new FSM);
	mShadowMgr       = new QueenShadowMgr(this);
	mMatLoopAnimator = new Sys::MatLoopAnimator;
	createEffect();
}

/*
 * --INFO--
 * Address:	80289650
 * Size:	000004
 */
void Obj::setInitialSetting(EnemyInitialParamBase*) { }

/*
 * --INFO--
 * Address:	80289654
 * Size:	000100
 */
void Obj::onInit(CreatureInitArg* initArg)
{
	EnemyBase::onInit(initArg);
	disableEvent(0, EB_PlatformCollEnabled);
	disableEvent(0, EB_Cullable);
	mNextState      = QUEEN_NULL;
	mIsRolling      = false;
	mWaitTimer      = 0.0f;
	mIsRoomForLarva = false;
	mBirthTimer     = 0.0f;
	_2D0            = 0.0f;
	resetJointShadow();
	mShadowMgr->init();
	setupEffect();
	mIsAppearBGM     = false;
	mIsAttackLoopBGM = false;
	resetMidBossAppearBGM();
	mMatLoopAnimator->start(C_MGR->mTexAnimation);

	if (mCanCreateLarva) {
		mFsm->start(this, QUEEN_Wait, nullptr);
	} else {
		mFsm->start(this, QUEEN_Sleep, nullptr);
	}
}

/*
 * --INFO--
 * Address:	80289754
 * Size:	000058
 */
void Obj::onKill(CreatureKillArg* killArg)
{
	finishRollingEffect(false);
	finishDamageEffect();
	finishSleepEffect();
	EnemyBase::onKill(killArg);
}

/*
 * --INFO--
 * Address:	802897AC
 * Size:	0000B8
 */
void Obj::setParameters()
{
	mCanCreateLarva = true;
	mDoEasyRoll     = false;

	if (gameSystem) {
		if (gameSystem->isZukanMode()) {
			mCanCreateLarva = false;

		} else if (gameSystem->mIsInCave && gameSystem->isStoryMode()) {
			SingleGameSection* section = static_cast<SingleGameSection*>(gameSystem->mSection);
			if (section && section->getCaveID() == 'f_01') { // if in Hole of Beasts
				mCanCreateLarva                  = false;
				mDoEasyRoll                      = true;
				C_PARMS->mGeneral.mHealth.mValue = C_PROPERPARMS.mHoBHealth.mValue;
			}
		}
	}

	EnemyBase::setParameters();
}

/*
 * --INFO--
 * Address:	80289864
 * Size:	000050
 */
void Obj::doUpdate()
{
	mShadowMgr->update();
	updateCreateBaby();
	mFsm->exec(this);
}

/*
 * --INFO--
 * Address:	802898B4
 * Size:	000034
 */
void Obj::doUpdateCommon()
{
	EnemyBase::doUpdateCommon();
	updateBossBGM();
}

/*
 * --INFO--
 * Address:	802898E8
 * Size:	000054
 */
void Obj::doAnimationCullingOff()
{
	EnemyBase::doAnimationCullingOff();
	if (isAlive()) {
		mMatLoopAnimator->animate(30.0f);
	}
}

/*
 * --INFO--
 * Address:	8028993C
 * Size:	000004
 */
void Obj::doDirectDraw(Graphics&) { }

/*
 * --INFO--
 * Address:	80289940
 * Size:	000020
 */
void Obj::doDebugDraw(Graphics& gfx) { EnemyBase::doDebugDraw(gfx); }

/*
 * --INFO--
 * Address:	80289960
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
 * Address:	802899AC
 * Size:	00008C
 */
void Obj::getShadowParam(ShadowParam& shadowParam)
{
	shadowParam.mPosition = getPosition();
	shadowParam.mPosition.y += 15.0f;
	shadowParam.mBoundingSphere.mPosition = Vector3f(0.0f, 1.0f, 0.0f);
	shadowParam.mBoundingSphere.mRadius   = 50.0f;
	shadowParam.mSize                     = 45.0f;
}

/*
 * --INFO--
 * Address:	80289A38
 * Size:	0000B0
 */
bool Obj::damageCallBack(Creature* creature, f32 damage, CollPart* part)
{
	if (part && creature && creature->isPiki()) {
		int stateID = getStateID();
		if (stateID == QUEEN_Sleep) {
			damage *= 0.1f;
		} else if (stateID == QUEEN_Flick) {
			damage *= 0.2f;
		}

		addDamage(damage, 1.0f);
		return true;
	}

	return false;
}

/*
 * --INFO--
 * Address:	80289AE8
 * Size:	000008
 */
bool Obj::earthquakeCallBack(Creature* creature, f32 damage) { return false; }

/*
 * --INFO--
 * Address:	80289AF0
 * Size:	00004C
 */
void Obj::doStartStoneState()
{
	EnemyBase::doStartStoneState();
	finishSleepEffect();
	finishDamageEffect();
	forceFinishRollingEffect();
	startStoneStateBossAttackLoopBGM();
}

/*
 * --INFO--
 * Address:	80289B3C
 * Size:	000088
 */
void Obj::doFinishStoneState()
{
	EnemyBase::doFinishStoneState();
	EnemyFunc::flickStickPikmin(this, 1.0f, 10.0f, 0.0f, FLICK_BACKWARD_ANGLE, nullptr);

	int stateID = getStateID();
	if (stateID == QUEEN_Damage) {
		startDamageEffect();
	} else if (stateID == QUEEN_Rolling && mIsRolling) {
		startRollingEffect();
	}

	finishStoneStateBossAttackLoopBGM();
}

/*
 * --INFO--
 * Address:	80289BC4
 * Size:	000084
 */
bool Obj::ignoreAtari(Creature* creature)
{
	if (mIsRolling && !isEvent(0, EB_Bittered) && (creature->isNavi() || creature->isTeki())) {
		return true;
	}

	return false;
}

/*
 * --INFO--
 * Address:	80289C48
 * Size:	000028
 */
void Obj::startCarcassMotion() { startMotion(QUEENANIM_Carry, nullptr); }

/*
 * --INFO--
 * Address:	80289C70
 * Size:	000020
 */
void Obj::doStartMovie() { effectDrawOff(); }

/*
 * --INFO--
 * Address:	80289C90
 * Size:	000020
 */
void Obj::doEndMovie() { effectDrawOn(); }

/*
 * --INFO--
 * Address:	80289CB0
 * Size:	0002EC
 */
void Obj::rollingAttack()
{
	Vector3f pos     = getPosition();
	const f32 angle  = getFaceDir();
	f32 attackRadius = C_PARMS->mGeneral.mAttackRadius();
	f32 attackAngle  = C_PARMS->mGeneral.mAttackHitAngle();

	Vector3f forward = getDirection(angle);
	Vector3f back(-forward.z, 0.0f, forward.x);

	Sys::Sphere sphere(mPosition, 250.0f);
	CellIteratorArg iterArg(sphere);
	iterArg.mIsSphereCollisionDisabled = true;
	CellIterator iter(iterArg);

	CI_LOOP(iter)
	{
		Creature* creature = static_cast<Creature*>(*iter);
		if (creature->isAlive()) {
			Vector3f creaturePos = creature->getPosition();
			Vector3f sep         = creaturePos - pos;
			if (absVal(sep.y) < 50.0f) {
				if (absVal(back.dot(sep)) < attackAngle) {
					if (absVal(forward.dot(sep)) < attackRadius) {
						InteractPress press(this, C_PARMS->mGeneral.mAttackDamage.mValue, nullptr);
						creature->stimulate(press);
					}
				}
			}
		}
	}
}

/*
 * --INFO--
 * Address:	80289F9C
 * Size:	0003A8
 */
void Obj::flickPikmin(f32 angle)
{
	f32 bodyAngle = PI + angle;

	Stickers stickers(this);
	Iterator<Creature> iter(&stickers);
	CI_LOOP(iter)
	{
		Creature* stuck = *iter;
		if (stuck->isAlive()) {
			CollPart* stuckPart = stuck->mStuckCollPart;
			if (stuckPart) {
				if (stuckPart->mCurrentID == 'nose' || stuckPart->mCurrentID == 'head' || stuckPart->mCurrentID == 'bod1') {
					InteractFlick flick(this, C_PARMS->mGeneral.mShakeKnockback.mValue, C_PARMS->mGeneral.mShakeDamage.mValue, angle);
					stuck->stimulate(flick);

				} else if (stuckPart->mCurrentID == 'bod5') {
					InteractFlick flick(this, C_PARMS->mGeneral.mShakeKnockback.mValue, C_PARMS->mGeneral.mShakeDamage.mValue, bodyAngle);
					stuck->stimulate(flick);

				} else {
					InteractFlick flick(this, 0.0f, 0.0f, FLICK_BACKWARD_ANGLE);
					stuck->stimulate(flick);
				}
			}
		}
	}
}

/*
 * --INFO--
 * Address:	8028A344
 * Size:	0001A8
 */
bool Obj::isRollingAttackLeft()
{
	if (mDoEasyRoll) {
		mDoEasyRoll = false;
		Navi* navi  = naviMgr->getActiveNavi();
		if (navi) {
			f32 angle       = HALF_PI + getFaceDir();
			Vector3f angles = Vector3f(sinf(angle), 0.0f, cosf(angle));
			Vector3f sep    = navi->getPosition() - mPosition;
			sep.y           = 0.0f;

			// if navi on left side, don't roll left
			if (angles.dot(sep) > 0.0f) {
				return false;
			}
		}

		return true;
	}

	return randWeightFloat(1.0f) < 0.5f;
}

/*
 * --INFO--
 * Address:	8028A4EC
 * Size:	0002D4
 */
void Obj::createCrashFallRock()
{
	if (gameSystem && gameSystem->mIsInCave && gameSystem->isStoryMode()) {
		SingleGameSection* section = static_cast<SingleGameSection*>(gameSystem->mSection);
		if (section && section->getCaveID() == 'l_02') {
			// only cause falling rocks in Hole of Heroes (not HoB or FC)
			const f32 angle  = mFaceDir;
			Vector3f faceVec = getDirection(angle);            // f23, f24
			Vector3f flipFaceVec(-faceVec.x, 0.0f, faceVec.z); // f27

			f32 z = 225.0f * faceVec.z + mHomePosition.z;
			f32 x = 225.0f * faceVec.x + mHomePosition.x;

			Rock::Mgr* rockMgr = static_cast<Rock::Mgr*>(generalEnemyMgr->getEnemyMgr(EnemyTypeID::EnemyID_Rock));
			if (rockMgr) {
				for (int i = 0; i < 7; i++) {
					f32 randDist = randWeightFloat(150.0f);
					f32 randIdx  = 50.0f * (f32)i - 150.0f;
					EnemyBirthArg birthArg;
					birthArg.mTypeID          = EnemyTypeID::EnemyID_Rock;
					birthArg.mPosition        = Vector3f(flipFaceVec.z * randIdx + (faceVec.x * randDist + x), 0.0f,
                                                  flipFaceVec.x * randIdx + (faceVec.z * randDist + z));
					birthArg.mFaceDir         = mFaceDir;
					birthArg.mExistenceLength = 30.0f;
					Rock::Obj* rock           = static_cast<Rock::Obj*>(rockMgr->birth(birthArg));
					if (rock) {
						rock->init(nullptr);
						rock->disableEvent(0, EB_Cullable);
						CG_PARMS(rock)->mGeneral.mSightRadius.mValue = 1000.0f;
					}
				}
			}
		}
	}
	/*
	stwu     r1, -0x140(r1)
	mflr     r0
	stw      r0, 0x144(r1)
	stfd     f31, 0x130(r1)
	psq_st   f31, 312(r1), 0, qr0
	stfd     f30, 0x120(r1)
	psq_st   f30, 296(r1), 0, qr0
	stfd     f29, 0x110(r1)
	psq_st   f29, 280(r1), 0, qr0
	stfd     f28, 0x100(r1)
	psq_st   f28, 264(r1), 0, qr0
	stfd     f27, 0xf0(r1)
	psq_st   f27, 248(r1), 0, qr0
	stfd     f26, 0xe0(r1)
	psq_st   f26, 232(r1), 0, qr0
	stfd     f25, 0xd0(r1)
	psq_st   f25, 216(r1), 0, qr0
	stfd     f24, 0xc0(r1)
	psq_st   f24, 200(r1), 0, qr0
	stfd     f23, 0xb0(r1)
	psq_st   f23, 184(r1), 0, qr0
	stfd     f22, 0xa0(r1)
	psq_st   f22, 168(r1), 0, qr0
	stfd     f21, 0x90(r1)
	psq_st   f21, 152(r1), 0, qr0
	stfd     f20, 0x80(r1)
	psq_st   f20, 136(r1), 0, qr0
	stfd     f19, 0x70(r1)
	psq_st   f19, 120(r1), 0, qr0
	stmw     r27, 0x5c(r1)
	lwz      r4, gameSystem__4Game@sda21(r13)
	mr       r31, r3
	cmplwi   r4, 0
	beq      lbl_8028A744
	lbz      r0, 0x48(r4)
	cmplwi   r0, 0
	beq      lbl_8028A744
	lwz      r0, 0x44(r4)
	cmpwi    r0, 0
	bne      lbl_8028A744
	lwz      r3, 0x58(r4)
	cmplwi   r3, 0
	beq      lbl_8028A744
	lwz      r12, 0(r3)
	lwz      r12, 0x78(r12)
	mtctr    r12
	bctrl
	addis    r0, r3, 0x93a1
	cmplwi   r0, 0x3032
	bne      lbl_8028A744
	lfs      f3, 0x1fc(r31)
	lfs      f0, lbl_8051B818@sda21(r2)
	fmr      f1, f3
	fcmpo    cr0, f3, f0
	bge      lbl_8028A5CC
	fneg     f1, f3

lbl_8028A5CC:
	lfs      f2, lbl_8051B840@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	lfs      f0, lbl_8051B818@sda21(r2)
	addi     r4, r3, sincosTable___5JMath@l
	fmuls    f1, f1, f2
	fcmpo    cr0, f3, f0
	fctiwz   f0, f1
	stfd     f0, 0x40(r1)
	lwz      r0, 0x44(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r4, r0
	lfs      f24, 4(r3)
	bge      lbl_8028A624
	lfs      f0, lbl_8051B844@sda21(r2)
	fmuls    f0, f3, f0
	fctiwz   f0, f0
	stfd     f0, 0x48(r1)
	lwz      r0, 0x4c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0
	fneg     f23, f0
	b        lbl_8028A63C

lbl_8028A624:
	fmuls    f0, f3, f2
	fctiwz   f0, f0
	stfd     f0, 0x50(r1)
	lwz      r0, 0x54(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f23, r4, r0

lbl_8028A63C:
	lfs      f2, lbl_8051B868@sda21(r2)
	fneg     f27, f23
	lfs      f1, 0x1a0(r31)
	li       r4, 0x13
	lfs      f0, 0x198(r31)
	fmadds   f25, f2, f24, f1
	lwz      r3, generalEnemyMgr__4Game@sda21(r13)
	fmadds   f26, f2, f23, f0
	bl       getEnemyMgr__Q24Game15GeneralEnemyMgrFi
	or.      r28, r3, r3
	beq      lbl_8028A744
	lfd      f28, lbl_8051B860@sda21(r2)
	li       r27, 0
	lfs      f29, lbl_8051B86C@sda21(r2)
	lis      r29, 0x4330
	lfs      f30, lbl_8051B854@sda21(r2)
	lfs      f31, lbl_8051B828@sda21(r2)
	lfs      f21, lbl_8051B818@sda21(r2)
	lfs      f22, lbl_8051B81C@sda21(r2)

lbl_8028A688:
	bl       rand
	xoris    r3, r3, 0x8000
	xoris    r0, r27, 0x8000
	stw      r3, 0x54(r1)
	addi     r3, r1, 8
	stw      r29, 0x50(r1)
	lfd      f0, 0x50(r1)
	stw      r0, 0x4c(r1)
	fsubs    f0, f0, f28
	stw      r29, 0x48(r1)
	fmuls    f1, f29, f0
	lfd      f0, 0x48(r1)
	fsubs    f0, f0, f28
	fdivs    f20, f1, f30
	fmsubs   f19, f31, f0, f29
	bl       __ct__Q24Game13EnemyBirthArgFv
	fmadds   f1, f23, f20, f26
	li       r0, 0x13
	fmadds   f0, f24, f20, f25
	stw      r0, 0x30(r1)
	mr       r3, r28
	addi     r4, r1, 8
	fmadds   f1, f24, f19, f1
	stfs     f21, 0xc(r1)
	fmadds   f0, f27, f19, f0
	stfs     f1, 8(r1)
	stfs     f0, 0x10(r1)
	lfs      f0, 0x1fc(r31)
	stfs     f0, 0x14(r1)
	stfs     f22, 0x34(r1)
	lwz      r12, 0(r28)
	lwz      r12, 0x70(r12)
	mtctr    r12
	bctrl
	or.      r30, r3, r3
	beq      lbl_8028A738
	li       r4, 0
	bl       init__Q24Game8CreatureFPQ24Game15CreatureInitArg
	lwz      r0, 0x1e0(r30)
	lfs      f0, lbl_8051B870@sda21(r2)
	rlwinm   r0, r0, 0, 0x1a, 0x18
	stw      r0, 0x1e0(r30)
	lwz      r3, 0xc0(r30)
	stfs     f0, 0x3d4(r3)

lbl_8028A738:
	addi     r27, r27, 1
	cmpwi    r27, 7
	blt      lbl_8028A688

lbl_8028A744:
	psq_l    f31, 312(r1), 0, qr0
	lfd      f31, 0x130(r1)
	psq_l    f30, 296(r1), 0, qr0
	lfd      f30, 0x120(r1)
	psq_l    f29, 280(r1), 0, qr0
	lfd      f29, 0x110(r1)
	psq_l    f28, 264(r1), 0, qr0
	lfd      f28, 0x100(r1)
	psq_l    f27, 248(r1), 0, qr0
	lfd      f27, 0xf0(r1)
	psq_l    f26, 232(r1), 0, qr0
	lfd      f26, 0xe0(r1)
	psq_l    f25, 216(r1), 0, qr0
	lfd      f25, 0xd0(r1)
	psq_l    f24, 200(r1), 0, qr0
	lfd      f24, 0xc0(r1)
	psq_l    f23, 184(r1), 0, qr0
	lfd      f23, 0xb0(r1)
	psq_l    f22, 168(r1), 0, qr0
	lfd      f22, 0xa0(r1)
	psq_l    f21, 152(r1), 0, qr0
	lfd      f21, 0x90(r1)
	psq_l    f20, 136(r1), 0, qr0
	lfd      f20, 0x80(r1)
	psq_l    f19, 120(r1), 0, qr0
	lfd      f19, 0x70(r1)
	lmw      r27, 0x5c(r1)
	lwz      r0, 0x144(r1)
	mtlr     r0
	addi     r1, r1, 0x140
	blr
	*/
}

/*
 * --INFO--
 * Address:	8028A7C0
 * Size:	00019C
 */
void Obj::createBabyChappy()
{
	Baby::Mgr* babyMgr = static_cast<Baby::Mgr*>(generalEnemyMgr->getEnemyMgr(EnemyTypeID::EnemyID_Baby));
	if (babyMgr) {
		EnemyBirthArg birthArg;
		birthArg.mPosition = mModel->getJoint("body_end")->getWorldMatrix()->getBasis(3);
		birthArg.mFaceDir  = PI + getFaceDir();

		Baby::Obj* baby = static_cast<Baby::Obj*>(babyMgr->birth(birthArg));
		if (baby) {
			f32 angle           = birthArg.mFaceDir;
			Queen::Parms* parms = C_PARMS;
			Vector3f vel = Vector3f(parms->mGeneral.mSearchDistance() * sinf(angle), 0.0f, parms->mGeneral.mSearchDistance() * cosf(angle));
			baby->init(nullptr);
			baby->setVelocity(vel);
			baby->mTargetVelocity = vel;
		}
	}
}

/*
 * --INFO--
 * Address:	........
 * Size:	00021C
 */
int Obj::getBabyChappyCount()
{
	int count          = 0;
	Baby::Mgr* babyMgr = static_cast<Baby::Mgr*>(generalEnemyMgr->getEnemyMgr(EnemyTypeID::EnemyID_Baby));
	if (babyMgr) {
		EnemyIterator<Baby::Obj> iter((Container<Baby::Obj>*)(GenericContainer*)babyMgr);
		CI_LOOP(iter)
		{
			Baby::Obj* baby = *iter;
			if (baby->isAlive()) {
				count++;
			}
		}
	}

	return count;
}

/*
 * --INFO--
 * Address:	8028A9A8
 * Size:	000274
 */
void Obj::updateCreateBaby()
{
	if (mCanCreateLarva) {
		mBirthTimer += sys->mDeltaTime;
		int babyCount = getBabyChappyCount();
		if (babyCount >= C_PROPERPARMS.mMaxBirths.mValue) {
			mIsRoomForLarva = false;
		} else if (babyCount <= C_PROPERPARMS.mMinBirths.mValue) {
			mIsRoomForLarva = true;
		}
	}
}

/*
 * --INFO--
 * Address:	8028AC1C
 * Size:	00003C
 */
bool Obj::isCreateBaby()
{
	if (mCanCreateLarva && mIsRoomForLarva && mBirthTimer > C_PROPERPARMS.mBirthInterval.mValue) {
		return true;
	}

	return false;
}

/*
 * --INFO--
 * Address:	8028AC58
 * Size:	000018
 */
bool Obj::isHitCounterUp() { return mFlickTimer > _2D0; }

/*
 * --INFO--
 * Address:	8028AC70
 * Size:	000028
 */
void Obj::resetJointShadow() { shadowMgr->delNormalShadow(this); }

/*
 * --INFO--
 * Address:	8028AC98
 * Size:	000040
 */
void Obj::releaseJointShadow()
{
	shadowMgr->addNormalShadow(this);
	shadowMgr->delJointShadow(this);
}

/*
 * --INFO--
 * Address:	8028ACD8
 * Size:	0000C8
 */
void Obj::startBossChargeBGM()
{
	PSM::EnemyBoss* soundObj = static_cast<PSM::EnemyBoss*>(mSoundObj);
	PSM::checkBoss(soundObj);
	soundObj->jumpRequest(2);
}

/*
 * --INFO--
 * Address:	8028ADA0
 * Size:	0000DC
 */
void Obj::startBossAttackLoopBGM()
{
	if (!mIsAttackLoopBGM) {
		mIsAttackLoopBGM         = true;
		PSM::EnemyBoss* soundObj = static_cast<PSM::EnemyBoss*>(mSoundObj);
		PSM::checkBoss(soundObj);
		soundObj->jumpRequest(8);
	}
}

/*
 * --INFO--
 * Address:	8028AE7C
 * Size:	0000D8
 */
void Obj::finishBossAttackLoopBGM()
{
	if (mIsAttackLoopBGM) {
		mIsAttackLoopBGM         = false;
		PSM::EnemyBoss* soundObj = static_cast<PSM::EnemyBoss*>(mSoundObj);
		PSM::checkBoss(soundObj);
		soundObj->jumpRequest(1);
	}
}

/*
 * --INFO--
 * Address:	8028AF54
 * Size:	0000D4
 */
void Obj::startStoneStateBossAttackLoopBGM()
{
	if (mIsAttackLoopBGM) {
		PSM::EnemyBoss* soundObj = static_cast<PSM::EnemyBoss*>(mSoundObj);
		PSM::checkBoss(soundObj);
		soundObj->jumpRequest(1);
	}
}

/*
 * --INFO--
 * Address:	8028B028
 * Size:	0000D4
 */
void Obj::finishStoneStateBossAttackLoopBGM()
{
	if (mIsAttackLoopBGM) {
		PSM::EnemyBoss* soundObj = static_cast<PSM::EnemyBoss*>(mSoundObj);
		PSM::checkBoss(soundObj);
		soundObj->jumpRequest(8);
	}
}

/*
 * --INFO--
 * Address:	8028B0FC
 * Size:	0000FC
 */
void Obj::updateBossBGM()
{
	PSM::EnemyBoss* soundObj = static_cast<PSM::EnemyBoss*>(mSoundObj);
	PSM::checkBoss(soundObj);
	if (mStuckPikminCount != 0) {
		soundObj->postPikiAttack(true);
	} else {
		soundObj->postPikiAttack(false);
	}
}

/*
 * --INFO--
 * Address:	8028B1F8
 * Size:	0000A8
 */
void Obj::resetMidBossAppearBGM()
{
	if (gameSystem && gameSystem->mIsInCave) {
		PSM::EnemyMidBoss* soundObj = static_cast<PSM::EnemyMidBoss*>(mSoundObj);
		PSM::checkMidBoss(soundObj);
		soundObj->setAppearFlag(false);
		if (mCanCreateLarva) {
			mIsAppearBGM   = true;
			soundObj->_118 = 1;
		}
	}
}

/*
 * --INFO--
 * Address:	8028B2A0
 * Size:	000080
 */
void Obj::setMidBossAppearBGM()
{
	if (!mIsAppearBGM) {
		mIsAppearBGM                = true;
		PSM::EnemyMidBoss* soundObj = static_cast<PSM::EnemyMidBoss*>(mSoundObj);
		PSM::checkMidBoss(soundObj);
		soundObj->setAppearFlag(true);
	}
}

/*
 * --INFO--
 * Address:	8028B320
 * Size:	000534
 */
void Obj::createEffect()
{
	mEfxLay       = new efx::TQueenLay;
	mEfxRollCR    = new efx::TQueenRollCR(&mPosition, &mFaceDir);
	mEfxRollCL    = new efx::TQueenRollCL(&mPosition, &mFaceDir);
	mEfxRoll      = new efx::TQueenRoll(&mPosition, &mFaceDir);
	mEfxCrashR    = new efx::TQueenCrashR(&mPosition, &mFaceDir);
	mEfxCrashL    = new efx::TQueenCrashL(&mPosition, &mFaceDir);
	mEfxCrashRock = new efx::TQueenCrashRock(&mPosition, &mFaceDir);
	mEfxDamage    = new efx::TQueenDamage(&mPosition, &mFaceDir);
	mEfxFlick     = new efx::TQueenFlick(&mPosition, &mFaceDir);
	mEfxDead      = new efx::TQueenDead;
	mEfxWakeup    = new efx::TQueenWakeup(&mPosition, &mFaceDir);
	mEfxHanacho   = new efx::TQueenHanacho;
}

/*
 * --INFO--
 * Address:	8028B854
 * Size:	000078
 */
void Obj::setupEffect()
{
	mEfxLay->mMtx = mModel->getJoint("body_end")->getWorldMatrix();
	mEfxDead->setMtxptr(mModel->getJoint("body5")->getWorldMatrix()->mMatrix.mtxView);
	mEfxHanacho->mMtx = mModel->getJoint("head")->getWorldMatrix();
}

/*
 * --INFO--
 * Address:	8028B8CC
 * Size:	000034
 */
void Obj::createBornEffect() { mEfxLay->create(nullptr); }

/*
 * --INFO--
 * Address:	8028B900
 * Size:	000080
 */
void Obj::startRollingEffect()
{
	if (getCurrAnimIndex() == 6) {
		mEfxRollCR->create(nullptr);
	} else {
		mEfxRollCL->create(nullptr);
	}

	mEfxRoll->create(nullptr);
}

/*
 * --INFO--
 * Address:	8028B980
 * Size:	0000E0
 */
void Obj::finishRollingEffect(bool doCrash)
{
	if (getCurrAnimIndex() == 6) {
		if (doCrash) {
			mEfxCrashR->create(nullptr);
		}

		mEfxRollCR->fade();
	} else {
		if (doCrash) {
			mEfxCrashL->create(nullptr);
		}

		mEfxRollCL->fade();
	}

	if (doCrash) {
		mEfxCrashRock->create(nullptr);
	}

	mEfxRoll->fade();
}

/*
 * --INFO--
 * Address:	8028BA60
 * Size:	000064
 */
void Obj::forceFinishRollingEffect()
{
	mEfxRollCR->fade();
	mEfxRollCL->fade();
	mEfxRoll->fade();
}

/*
 * --INFO--
 * Address:	8028BAC4
 * Size:	000034
 */
void Obj::startDamageEffect() { mEfxDamage->create(nullptr); }

/*
 * --INFO--
 * Address:	8028BAF8
 * Size:	000030
 */
void Obj::finishDamageEffect() { mEfxDamage->fade(); }

/*
 * --INFO--
 * Address:	8028BB28
 * Size:	000034
 */
void Obj::createFlickEffect() { mEfxFlick->create(nullptr); }

/*
 * --INFO--
 * Address:	8028BB5C
 * Size:	000034
 */
void Obj::createDeadEffect() { mEfxDead->create(nullptr); }

/*
 * --INFO--
 * Address:	8028BB90
 * Size:	000034
 */
void Obj::createWakeUpEffect() { mEfxWakeup->create(nullptr); }

/*
 * --INFO--
 * Address:	8028BBC4
 * Size:	000034
 */
void Obj::startSleepEffect() { mEfxHanacho->create(nullptr); }

/*
 * --INFO--
 * Address:	8028BBF8
 * Size:	000030
 */
void Obj::finishSleepEffect() { mEfxHanacho->fade(); }

/*
 * --INFO--
 * Address:	8028BC28
 * Size:	000118
 */
void Obj::effectDrawOn()
{
	mEfxLay->endDemoDrawOn();
	mEfxRollCR->endDemoDrawOn();
	mEfxRollCL->endDemoDrawOn();
	mEfxRoll->endDemoDrawOn();
	mEfxCrashR->endDemoDrawOn();
	mEfxCrashL->endDemoDrawOn();
	mEfxCrashRock->endDemoDrawOn();
	mEfxDamage->endDemoDrawOn();
	mEfxFlick->endDemoDrawOn();
	mEfxDead->endDemoDrawOn();
	mEfxWakeup->endDemoDrawOn();
	mEfxHanacho->endDemoDrawOn();
}

/*
 * --INFO--
 * Address:	8028BD40
 * Size:	000118
 */
void Obj::effectDrawOff()
{
	mEfxLay->startDemoDrawOff();
	mEfxRollCR->startDemoDrawOff();
	mEfxRollCL->startDemoDrawOff();
	mEfxRoll->startDemoDrawOff();
	mEfxCrashR->startDemoDrawOff();
	mEfxCrashL->startDemoDrawOff();
	mEfxCrashRock->startDemoDrawOff();
	mEfxDamage->startDemoDrawOff();
	mEfxFlick->startDemoDrawOff();
	mEfxDead->startDemoDrawOff();
	mEfxWakeup->startDemoDrawOff();
	mEfxHanacho->startDemoDrawOff();
}

} // namespace Queen
} // namespace Game
