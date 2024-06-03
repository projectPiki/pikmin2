#include "Game/Entities/SnakeCrow.h"
#include "Game/EnemyFunc.h"
#include "Game/MapMgr.h"
#include "Game/PikiMgr.h"
#include "Game/Navi.h"
#include "Game/Stickers.h"
#include "Game/SingleGameSection.h"
#include "Game/CameraMgr.h"
#include "Game/rumble.h"
#include "PSM/EnemyBoss.h"
#include "PSSystem/PSMainSide_ObjSound.h"
#include "Dolphin/rand.h"
#include "nans.h"

namespace Game {
namespace SnakeCrow {

static const int unusedSnakeCrowArray[] = { 0, 0, 0 };
static const char unusedSnakeCrowName[] = "246-SnakeCrow";

/**
 * @note Address: 0x80293094
 * @note Size: 0x16C
 */
Obj::Obj()
{
	mAnimator = new ProperAnimator();
	setFSM(new FSM);
	createJointCallBack();
	createShadowSystem();
	createEffect();
}

/**
 * @note Address: 0x80293200
 * @note Size: 0x44
 */
void Obj::constructor()
{
	EnemyBase::constructor();
	mIsFirstAttackBGM   = true;
	mIsAppearBGMEnabled = false;
	resetBossAppearBGM();
}

/**
 * @note Address: 0x80293244
 * @note Size: 0x4
 */
void Obj::setInitialSetting(EnemyInitialParamBase*) { }

/**
 * @note Address: 0x80293248
 * @note Size: 0xE0
 */
void Obj::onInit(CreatureInitArg* initArg)
{
	EnemyBase::onInit(initArg);
	disableEvent(0, EB_PlatformCollEnabled);
	disableEvent(0, EB_LifegaugeVisible);
	hardConstraintOn();
	shadowMgr->delNormalShadow(this);
	mIsUnderground = true;
	mStateTimer    = 0.0f;
	mNextState     = SNAKECROW_NULL;
	mAttackAnimIdx = -1;
	setupJointCallBack();
	setupCollision();
	setupShadowSystem();
	setupEffect();
	mIsFirstAttackBGM   = true;
	mIsAppearBGMEnabled = false;
	resetBossAppearBGM();
	mFsm->start(this, SNAKECROW_Stay, nullptr);
	doAnimationCullingOff();
}

/**
 * @note Address: 0x80293328
 * @note Size: 0x4C
 */
void Obj::onKill(CreatureKillArg* killArg)
{
	finishRotateEffect();
	finishWaitEffect();
	EnemyBase::onKill(killArg);
}

/**
 * @note Address: 0x80293374
 * @note Size: 0x88
 */
void Obj::setParameters()
{
	if (gameSystem && gameSystem->mIsInCave && gameSystem->isStoryMode()) {
		SingleGameSection* section = static_cast<SingleGameSection*>(gameSystem->mSection);
		if (section && section->getCaveID() == 'f_02') { // White Flower Garden snagret has its own health value
			C_GENERALPARMS.mHealth.mValue = C_PROPERPARMS.mWFGHealth.mValue;
		}
	}

	EnemyBase::setParameters();
}

/**
 * @note Address: 0x802933FC
 * @note Size: 0x48
 */
void Obj::doUpdate()
{
	mFsm->exec(this);
	mMouthSlots.update();
}

/**
 * @note Address: 0x80293444
 * @note Size: 0x34
 */
void Obj::doUpdateCommon()
{
	EnemyBase::doUpdateCommon();
	updateBossBGM();
}

/**
 * @note Address: 0x80293478
 * @note Size: 0x34
 */
void Obj::doAnimationUpdateAnimator()
{
	EnemyBase::doAnimationUpdateAnimator();
	doAnimationJointCallBack();
}

/**
 * @note Address: 0x802934AC
 * @note Size: 0x3C
 */
void Obj::doAnimationCullingOff()
{
	EnemyBase::doAnimationCullingOff();
	doAnimationShadowSystem();
	finishAnimationJointCallBack();
}

/**
 * @note Address: 0x802934E8
 * @note Size: 0x4
 */
void Obj::doDirectDraw(Graphics&) { }

/**
 * @note Address: 0x802934EC
 * @note Size: 0x20
 */
void Obj::doDebugDraw(Graphics& gfx) { EnemyBase::doDebugDraw(gfx); }

/**
 * @note Address: 0x8029350C
 * @note Size: 0x4C
 */
void Obj::setFSM(FSM* fsm)
{
	mFsm = fsm;
	mFsm->init(this);
	mCurrentLifecycleState = nullptr;
}

/**
 * @note Address: 0x80293558
 * @note Size: 0x98
 */
void Obj::getShadowParam(ShadowParam& shadowParam)
{
	shadowParam.mPosition                 = mModel->getJoint("kutijnt1")->getWorldMatrix()->getColumn(3);
	shadowParam.mPosition.y               = mPosition.y + 2.5f;
	shadowParam.mBoundingSphere.mPosition = Vector3f(0.0f, 1.0f, 0.0f);
	shadowParam.mBoundingSphere.mRadius   = 20.0f;
	shadowParam.mSize                     = 17.5f;
}

/**
 * @note Address: 0x802935F0
 * @note Size: 0x98
 */
bool Obj::damageCallBack(Creature* creature, f32 damage, CollPart* part)
{
	if (creature && creature->isPiki()) {
		if (!part) {
			damage *= 0.1f;
		}
		addDamage(damage, 1.0f);
		return true;
	}

	return false;
}

/**
 * @note Address: 0x80293688
 * @note Size: 0x3C
 */
void Obj::doStartStoneState()
{
	EnemyBase::doStartStoneState();
	finishRotateEffect();
	finishWaitEffect();
}

/**
 * @note Address: 0x802936C4
 * @note Size: 0x60
 */
void Obj::doFinishStoneState()
{
	EnemyBase::doFinishStoneState();
	EnemyFunc::flickStickPikmin(this, 1.0f, 10.0f, 0.0f, FLICK_BACKWARD_ANGLE, nullptr);

	if (getStateID() >= SNAKECROW_Wait) {
		// if wait, attack, eat or struggle
		startWaitEffect();
	}
}

/**
 * @note Address: 0x80293724
 * @note Size: 0x28
 */
void Obj::startCarcassMotion() { startMotion(SNAKECROWANIM_Carry, nullptr); }

/**
 * @note Address: 0x8029374C
 * @note Size: 0x20
 */
void Obj::doStartMovie() { effectDrawOff(); }

/**
 * @note Address: 0x8029376C
 * @note Size: 0x20
 */
void Obj::doEndMovie() { effectDrawOn(); }

/**
 * @note Address: 0x8029378C
 * @note Size: 0xBC
 */
void Obj::initMouthSlots()
{
	mMouthSlots.alloc(3);
	mMouthSlots.setup(0, mModel, "kamujnt1");
	mMouthSlots.setup(1, mModel, "kamujnt2");
	mMouthSlots.setup(2, mModel, "kamujnt3");

	for (int i = 0; i < mMouthSlots.getMax(); i++) {
		mMouthSlots.getSlot(i)->mRadius = 15.0f;
	}
}

/**
 * @note Address: 0x80293848
 * @note Size: 0x58
 */
void Obj::getThrowupItemPosition(Vector3f* pos) { *pos = mModel->getJoint("kutijnt1")->getWorldMatrix()->getColumn(3); }

/**
 * @note Address: 0x802938A0
 * @note Size: 0x58
 */
void Obj::getCommonEffectPos(Vector3f& pos) { pos = mModel->getJoint("kutijnt1")->getWorldMatrix()->getColumn(3); }

/**
 * @note Address: 0x802938F8
 * @note Size: 0x338
 */
void Obj::appearNearByTarget(Creature* target)
{
	Vector3f targetPos = target->getPosition();
	f32 faceDir        = randWeightFloat(TAU);

	Vector3f newPos = Vector3f(-sinf(faceDir), 0.0f, -cosf(faceDir));
	newPos *= 120.0f;
	newPos += targetPos;

	if (sqrDistanceXZ(mHomePosition, newPos) > SQUARE(C_GENERALPARMS.mTerritoryRadius())) {
		f32 angleDist = JMAAtan2Radian(targetPos.x - mHomePosition.x, targetPos.z - mHomePosition.z);

		faceDir = angleDist + (randWeightFloat(PI) - HALF_PI);
		newPos  = Vector3f(-sinf(faceDir), 0.0f, -cosf(faceDir));
		newPos *= 120.0f;
		newPos += targetPos;
	}

	newPos.y = mapMgr->getMinY(newPos);
	onSetPosition(newPos);
	updateFaceDir(faceDir);
}

/**
 * @note Address: 0x80293C30
 * @note Size: 0x20C
 */
void Obj::setAttackPosition()
{
	f32 angle         = mFaceDir;
	Vector3f dir      = Vector3f(sinf(angle), 0.0f, cosf(angle));
	Vector3f orthoDir = Vector3f(-dir.z, 0.0f, dir.x);

	f32 array1[5] = { 40.0f, 120.0f, 190.0f, 90.0f, 90.0f };
	f32 array2[5] = { 0.0f, 0.0f, 0.0f, 80.0f, -80.0f };

	for (int i = 0; i < 5; i++) {
		f32 dirFactor       = array1[i];
		f32 orthoDirFactor  = array2[i];
		mAttackPositions[i] = mPosition;
		mAttackPositions[i] += dir * dirFactor;
		mAttackPositions[i] += orthoDir * orthoDirFactor;
		mAttackPositions[i].y = mapMgr->getMinY(mAttackPositions[i]);
	}
	/*
	stwu     r1, -0x90(r1)
	mflr     r0
	stw      r0, 0x94(r1)
	stfd     f31, 0x80(r1)
	psq_st   f31, 136(r1), 0, qr0
	stfd     f30, 0x70(r1)
	psq_st   f30, 120(r1), 0, qr0
	stfd     f29, 0x60(r1)
	psq_st   f29, 104(r1), 0, qr0
	stmw     r27, 0x4c(r1)
	mr       r31, r3
	lfs      f0, lbl_8051BA90@sda21(r2)
	lfs      f3, 0x1fc(r3)
	fmr      f1, f3
	fcmpo    cr0, f3, f0
	bge      lbl_80293C74
	fneg     f1, f3

lbl_80293C74:
	lfs      f2, lbl_8051BABC@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	lfs      f0, lbl_8051BA90@sda21(r2)
	addi     r4, r3, sincosTable___5JMath@l
	fmuls    f1, f1, f2
	fcmpo    cr0, f3, f0
	fctiwz   f0, f1
	stfd     f0, 0x30(r1)
	lwz      r0, 0x34(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r4, r0
	lfs      f31, 4(r3)
	bge      lbl_80293CCC
	lfs      f0, lbl_8051BAC0@sda21(r2)
	fmuls    f0, f3, f0
	fctiwz   f0, f0
	stfd     f0, 0x38(r1)
	lwz      r0, 0x3c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0
	fneg     f30, f0
	b        lbl_80293CE4

lbl_80293CCC:
	fmuls    f0, f3, f2
	fctiwz   f0, f0
	stfd     f0, 0x40(r1)
	lwz      r0, 0x44(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f30, r4, r0

lbl_80293CE4:
	lis      r4, lbl_8048877C@ha
	lwzu     r12, lbl_8048877C@l(r4)
	lis      r3, lbl_80488790@ha
	fneg     f29, f31
	addi     r7, r3, lbl_80488790@l
	lwz      r11, 4(r4)
	lwz      r10, 8(r4)
	mr       r28, r31
	lwz      r9, 0xc(r4)
	lwz      r8, 0x10(r4)
	addi     r30, r1, 0x1c
	lwz      r6, 0(r7)
	addi     r29, r1, 8
	lwz      r5, 4(r7)
	li       r27, 0
	lwz      r4, 8(r7)
	lwz      r3, 0xc(r7)
	lwz      r0, 0x10(r7)
	stw      r12, 0x1c(r1)
	stw      r11, 0x20(r1)
	stw      r10, 0x24(r1)
	stw      r9, 0x28(r1)
	stw      r8, 0x2c(r1)
	stw      r6, 8(r1)
	stw      r5, 0xc(r1)
	stw      r4, 0x10(r1)
	stw      r3, 0x14(r1)
	stw      r0, 0x18(r1)

lbl_80293D54:
	lfs      f0, 0x18c(r31)
	addi     r4, r28, 0x2d8
	lfs      f1, 0(r30)
	stfs     f0, 0x2d8(r28)
	lfs      f2, 0(r29)
	fmuls    f3, f30, f1
	lfs      f0, 0x190(r31)
	fmuls    f5, f31, f1
	lfs      f4, lbl_8051BA90@sda21(r2)
	fmuls    f6, f29, f2
	stfs     f0, 0x2dc(r28)
	fmr      f7, f4
	lfs      f0, 0x194(r31)
	fmuls    f4, f4, f1
	fmuls    f1, f30, f2
	stfs     f0, 0x2e0(r28)
	fmuls    f7, f7, f2
	lfs      f0, 0x2d8(r28)
	fadds    f0, f0, f3
	stfs     f0, 0x2d8(r28)
	lfs      f0, 0x2dc(r28)
	fadds    f0, f0, f4
	stfs     f0, 0x2dc(r28)
	lfs      f0, 0x2e0(r28)
	fadds    f0, f0, f5
	stfs     f0, 0x2e0(r28)
	lfs      f0, 0x2d8(r28)
	fadds    f0, f0, f6
	stfs     f0, 0x2d8(r28)
	lfs      f0, 0x2dc(r28)
	fadds    f0, f0, f7
	stfs     f0, 0x2dc(r28)
	lfs      f0, 0x2e0(r28)
	fadds    f0, f0, f1
	stfs     f0, 0x2e0(r28)
	lwz      r3, mapMgr__4Game@sda21(r13)
	lwz      r12, 4(r3)
	lwz      r12, 0x28(r12)
	mtctr    r12
	bctrl
	addi     r27, r27, 1
	stfs     f1, 0x2dc(r28)
	cmpwi    r27, 5
	addi     r30, r30, 4
	addi     r29, r29, 4
	addi     r28, r28, 0xc
	blt      lbl_80293D54
	psq_l    f31, 136(r1), 0, qr0
	lfd      f31, 0x80(r1)
	psq_l    f30, 120(r1), 0, qr0
	lfd      f30, 0x70(r1)
	psq_l    f29, 104(r1), 0, qr0
	lfd      f29, 0x60(r1)
	lmw      r27, 0x4c(r1)
	lwz      r0, 0x94(r1)
	mtlr     r0
	addi     r1, r1, 0x90
	blr
	*/
}

/**
 * @note Address: 0x80293E3C
 * @note Size: 0x5F4
 */
Piki* Obj::getAttackPiki(int animIdx)
{
	int p1 = 0; // r30
	int p2 = 5; // r31
	if (animIdx < 5) {
		p1 = animIdx;
		p2 = animIdx + 1;
	}

	Vector3f snakePos = getPosition();                 // f28, f27, f26
	Vector3f dir      = getDirection(mFaceDir);        // f30, f29
	Vector3f orthoDir = Vector3f(-dir.z, 0.0f, dir.x); // f31

	f32 maxDotDirs[]     = { 80.0f, 160.0f, 220.0f, 130.0f, 130.0f };  // 0x94
	f32 minDotDirs[]     = { 0.0f, 80.0f, 160.0f, 50.0f, 50.0f };      // 0x80
	f32 maxDotPerpDirs[] = { 30.0f, 30.0f, 30.0f, 110.0f, -50.0f };    // 0x6C
	f32 minDotPerpDirs[] = { -30.0f, -30.0f, -30.0f, 50.0f, -110.0f }; // 0x58
	f32 maxYs[]          = { 40.0f, 40.0f, 40.0f, 40.0f, 40.0f };      // 0x44
	f32 minYs[]          = { -40.0f, -40.0f, -40.0f, -40.0f, -40.0f }; // 0x30

	for (int i = 0; i < 5; i++) {
		maxYs[i] += mAttackPositions[i].y - snakePos.y;
		minYs[i] += mAttackPositions[i].y - snakePos.y;
	}

	Iterator<Piki> iter(pikiMgr);
	CI_LOOP(iter)
	{
		Piki* piki = *iter;
		if (piki->isAlive() && piki->isPikmin() && !piki->isStickToMouth()) {
			Vector3f pikiPos = piki->getPosition();
			Vector3f sep     = pikiPos - snakePos;
			f32 dotDir       = dir.dot(sep);      // f1
			f32 dotPerpDir   = orthoDir.dot(sep); // f2
			for (int i = p1; i < p2; i++) {
				if (dotDir < maxDotDirs[i] && dotDir > minDotDirs[i] && dotPerpDir < maxDotPerpDirs[i] && dotPerpDir > minDotPerpDirs[i]
				    && sep.y < maxYs[i] && sep.y > minYs[i]) {
					mAttackAnimIdx = i;
					return piki;
				}
			}
		}
	}

	return nullptr;
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
	stmw     r19, 0xcc(r1)
	cmpwi    r4, 5
	lis      r5, lbl_80488730@ha
	mr       r28, r3
	li       r30, 0
	addi     r31, r5, lbl_80488730@l
	li       r29, 5
	bge      lbl_80293EA0
	mr       r30, r4
	addi     r29, r4, 1

lbl_80293EA0:
	mr       r4, r28
	addi     r3, r1, 0x14
	lwz      r12, 0(r28)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f3, 0x1fc(r28)
	lfs      f0, lbl_8051BA90@sda21(r2)
	fmr      f1, f3
	lfs      f28, 0x14(r1)
	fcmpo    cr0, f3, f0
	lfs      f27, 0x18(r1)
	lfs      f26, 0x1c(r1)
	bge      lbl_80293EDC
	fneg     f1, f3

lbl_80293EDC:
	lfs      f2, lbl_8051BABC@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	lfs      f0, lbl_8051BA90@sda21(r2)
	addi     r4, r3, sincosTable___5JMath@l
	fmuls    f1, f1, f2
	fcmpo    cr0, f3, f0
	fctiwz   f0, f1
	stfd     f0, 0xa8(r1)
	lwz      r0, 0xac(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r4, r0
	lfs      f30, 4(r3)
	bge      lbl_80293F34
	lfs      f0, lbl_8051BAC0@sda21(r2)
	fmuls    f0, f3, f0
	fctiwz   f0, f0
	stfd     f0, 0xb0(r1)
	lwz      r0, 0xb4(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0
	fneg     f29, f0
	b        lbl_80293F4C

lbl_80293F34:
	fmuls    f0, f3, f2
	fctiwz   f0, f0
	stfd     f0, 0xb8(r1)
	lwz      r0, 0xbc(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f29, r4, r0

lbl_80293F4C:
	lwz      r0, 0xc4(r31)
	fneg     f31, f30
	lwz      r11, 0xc8(r31)
	lwz      r10, 0xcc(r31)
	lwz      r9, 0xd0(r31)
	lwz      r8, 0xd4(r31)
	lwz      r7, 0xd8(r31)
	lwz      r6, 0xdc(r31)
	lwz      r5, 0xe0(r31)
	lwz      r4, 0xe4(r31)
	lwz      r3, 0xe8(r31)
	lfs      f1, 0x2dc(r28)
	lfs      f0, 0x2e8(r28)
	lfs      f2, 0x2f4(r28)
	fsubs    f8, f1, f27
	lfs      f1, 0x300(r28)
	fsubs    f6, f0, f27
	lfs      f0, 0x30c(r28)
	fsubs    f12, f2, f27
	stw      r0, 0x44(r1)
	lwz      r0, 0x74(r31)
	fsubs    f11, f1, f27
	stw      r11, 0x48(r1)
	fsubs    f10, f0, f27
	lfs      f0, 0x44(r1)
	stw      r10, 0x4c(r1)
	lfs      f1, 0x48(r1)
	fadds    f9, f0, f8
	stw      r9, 0x50(r1)
	lfs      f0, 0x4c(r1)
	fadds    f7, f1, f6
	stw      r8, 0x54(r1)
	lfs      f1, 0x50(r1)
	fadds    f5, f0, f12
	stw      r7, 0x30(r1)
	lfs      f0, 0x54(r1)
	fadds    f3, f1, f11
	stw      r6, 0x34(r1)
	lfs      f4, 0x30(r1)
	fadds    f1, f0, f10
	stw      r5, 0x38(r1)
	lfs      f2, 0x34(r1)
	fadds    f8, f4, f8
	stw      r4, 0x3c(r1)
	lfs      f0, 0x38(r1)
	fadds    f6, f2, f6
	stw      r3, 0x40(r1)
	lfs      f2, 0x3c(r1)
	fadds    f4, f0, f12
	lfs      f0, 0x40(r1)
	fadds    f2, f2, f11
	lwz      r19, 0x78(r31)
	fadds    f0, f0, f10
	lwz      r20, 0x7c(r31)
	lwz      r21, 0x80(r31)
	lwz      r22, 0x84(r31)
	lwz      r23, 0x88(r31)
	lwz      r24, 0x8c(r31)
	lwz      r25, 0x90(r31)
	lwz      r26, 0x94(r31)
	lwz      r27, 0x98(r31)
	lwz      r12, 0x9c(r31)
	lwz      r11, 0xa0(r31)
	lwz      r10, 0xa4(r31)
	lwz      r9, 0xa8(r31)
	lwz      r8, 0xac(r31)
	lwz      r7, 0xb0(r31)
	lwz      r6, 0xb4(r31)
	lwz      r5, 0xb8(r31)
	lwz      r4, 0xbc(r31)
	lwz      r3, 0xc0(r31)
	stw      r0, 0x94(r1)
	stw      r19, 0x98(r1)
	stw      r20, 0x9c(r1)
	stw      r21, 0xa0(r1)
	stw      r22, 0xa4(r1)
	stw      r23, 0x80(r1)
	stw      r24, 0x84(r1)
	stw      r25, 0x88(r1)
	stw      r26, 0x8c(r1)
	stw      r27, 0x90(r1)
	stw      r12, 0x6c(r1)
	stw      r11, 0x70(r1)
	stw      r10, 0x74(r1)
	stw      r9, 0x78(r1)
	stw      r8, 0x7c(r1)
	stw      r7, 0x58(r1)
	stw      r6, 0x5c(r1)
	stw      r5, 0x60(r1)
	stw      r4, 0x64(r1)
	stw      r3, 0x68(r1)
	stfs     f9, 0x44(r1)
	stfs     f8, 0x30(r1)
	stfs     f7, 0x48(r1)
	stfs     f6, 0x34(r1)
	stfs     f5, 0x4c(r1)
	stfs     f4, 0x38(r1)
	stfs     f3, 0x50(r1)
	stfs     f2, 0x3c(r1)
	stfs     f1, 0x54(r1)
	stfs     f0, 0x40(r1)
	li       r0, 0
	lwz      r3, pikiMgr__4Game@sda21(r13)
	lis      r4, "__vt__22Iterator<Q24Game4Piki>"@ha
	stw      r0, 0x2c(r1)
	addi     r4, r4, "__vt__22Iterator<Q24Game4Piki>"@l
	cmplwi   r0, 0
	stw      r4, 0x20(r1)
	stw      r0, 0x24(r1)
	stw      r3, 0x28(r1)
	bne      lbl_80294120
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x24(r1)
	b        lbl_802943C8

lbl_80294120:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x24(r1)
	b        lbl_8029418C

lbl_80294138:
	lwz      r3, 0x28(r1)
	lwz      r4, 0x24(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x2c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_802943C8
	lwz      r3, 0x28(r1)
	lwz      r4, 0x24(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x24(r1)

lbl_8029418C:
	lwz      r12, 0x20(r1)
	addi     r3, r1, 0x20
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80294138
	b        lbl_802943C8

lbl_802941AC:
	lwz      r3, 0x28(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	mr       r19, r3
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8029430C
	mr       r3, r19
	lwz      r12, 0(r19)
	lwz      r12, 0x1c0(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8029430C
	mr       r3, r19
	bl       isStickToMouth__Q24Game8CreatureFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_8029430C
	mr       r4, r19
	addi     r3, r1, 8
	lwz      r12, 0(r19)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0xc(r1)
	slwi     r9, r30, 2
	lfs      f1, 8(r1)
	addi     r3, r1, 0x94
	fsubs    f4, f0, f27
	lfs      f0, lbl_8051BA90@sda21(r2)
	lfs      f2, 0x10(r1)
	addi     r4, r1, 0x80
	addi     r5, r1, 0x6c
	addi     r6, r1, 0x58
	fsubs    f3, f1, f28
	addi     r7, r1, 0x44
	fmuls    f0, f0, f4
	addi     r8, r1, 0x30
	fsubs    f2, f2, f26
	subf     r0, r30, r29
	fmadds   f1, f29, f3, f0
	mr       r10, r30
	fmadds   f0, f31, f3, f0
	add      r3, r3, r9
	add      r4, r4, r9
	add      r5, r5, r9
	fmadds   f1, f30, f2, f1
	add      r6, r6, r9
	fmadds   f2, f29, f2, f0
	add      r7, r7, r9
	add      r8, r8, r9
	mtctr    r0
	cmpw     r30, r29
	bge      lbl_8029430C

lbl_80294298:
	lfs      f0, 0(r3)
	fcmpo    cr0, f1, f0
	bge      lbl_802942EC
	lfs      f0, 0(r4)
	fcmpo    cr0, f1, f0
	ble      lbl_802942EC
	lfs      f0, 0(r5)
	fcmpo    cr0, f2, f0
	bge      lbl_802942EC
	lfs      f0, 0(r6)
	fcmpo    cr0, f2, f0
	ble      lbl_802942EC
	lfs      f0, 0(r7)
	fcmpo    cr0, f4, f0
	bge      lbl_802942EC
	lfs      f0, 0(r8)
	fcmpo    cr0, f4, f0
	ble      lbl_802942EC
	stw      r10, 0x2d4(r28)
	mr       r3, r19
	b        lbl_802943EC

lbl_802942EC:
	addi     r3, r3, 4
	addi     r4, r4, 4
	addi     r5, r5, 4
	addi     r6, r6, 4
	addi     r7, r7, 4
	addi     r8, r8, 4
	addi     r10, r10, 1
	bdnz     lbl_80294298

lbl_8029430C:
	lwz      r0, 0x2c(r1)
	cmplwi   r0, 0
	bne      lbl_80294338
	lwz      r3, 0x28(r1)
	lwz      r4, 0x24(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x24(r1)
	b        lbl_802943C8

lbl_80294338:
	lwz      r3, 0x28(r1)
	lwz      r4, 0x24(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x24(r1)
	b        lbl_802943AC

lbl_80294358:
	lwz      r3, 0x28(r1)
	lwz      r4, 0x24(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x2c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_802943C8
	lwz      r3, 0x28(r1)
	lwz      r4, 0x24(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x24(r1)

lbl_802943AC:
	lwz      r12, 0x20(r1)
	addi     r3, r1, 0x20
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80294358

lbl_802943C8:
	lwz      r3, 0x28(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x24(r1)
	cmplw    r4, r3
	bne      lbl_802941AC
	li       r3, 0

lbl_802943EC:
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
	lmw      r19, 0xcc(r1)
	lwz      r0, 0x164(r1)
	mtlr     r0
	addi     r1, r1, 0x160
	blr
	*/
}

/**
 * @note Address: 0x80294430
 * @note Size: 0x5C8
 */
Navi* Obj::getAttackNavi(int animIdx)
{
	int p1 = 0; // r30
	int p2 = 5; // r31
	if (animIdx < 5) {
		p1 = animIdx;
		p2 = animIdx + 1;
	}

	Vector3f snakePos = getPosition();                 // f28, f27, f26
	Vector3f dir      = getDirection(mFaceDir);        // f30, f29
	Vector3f orthoDir = Vector3f(-dir.z, 0.0f, dir.x); // f31

	f32 maxDotDirs[]     = { 80.0f, 160.0f, 220.0f, 130.0f, 130.0f };  // 0x94
	f32 minDotDirs[]     = { 0.0f, 80.0f, 160.0f, 50.0f, 50.0f };      // 0x80
	f32 maxDotPerpDirs[] = { 30.0f, 30.0f, 30.0f, 110.0f, -50.0f };    // 0x6C
	f32 minDotPerpDirs[] = { -30.0f, -30.0f, -30.0f, 50.0f, -110.0f }; // 0x58
	f32 maxYs[]          = { 40.0f, 40.0f, 40.0f, 40.0f, 40.0f };      // 0x44
	f32 minYs[]          = { -40.0f, -40.0f, -40.0f, -40.0f, -40.0f }; // 0x30

	for (int i = 0; i < 5; i++) {
		maxYs[i] += mAttackPositions[i].y - snakePos.y;
		minYs[i] += mAttackPositions[i].y - snakePos.y;
	}

	Iterator<Navi> iter(naviMgr);
	CI_LOOP(iter)
	{
		Navi* navi = *iter;
		if (navi->isAlive()) {
			Vector3f naviPos = navi->getPosition();
			Vector3f sep     = naviPos - snakePos;
			f32 dotDir       = dir.dot(sep);      // f1
			f32 dotPerpDir   = orthoDir.dot(sep); // f2
			for (int i = p1; i < p2; i++) {
				if (dotDir < maxDotDirs[i] && dotDir > minDotDirs[i] && dotPerpDir < maxDotPerpDirs[i] && dotPerpDir > minDotPerpDirs[i]
				    && sep.y < maxYs[i] && sep.y > minYs[i]) {
					mAttackAnimIdx = i;
					return navi;
				}
			}
		}
	}

	return nullptr;
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
	stmw     r19, 0xcc(r1)
	cmpwi    r4, 5
	lis      r5, lbl_80488730@ha
	mr       r28, r3
	li       r30, 0
	addi     r31, r5, lbl_80488730@l
	li       r29, 5
	bge      lbl_80294494
	mr       r30, r4
	addi     r29, r4, 1

lbl_80294494:
	mr       r4, r28
	addi     r3, r1, 0x14
	lwz      r12, 0(r28)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f3, 0x1fc(r28)
	lfs      f0, lbl_8051BA90@sda21(r2)
	fmr      f1, f3
	lfs      f28, 0x14(r1)
	fcmpo    cr0, f3, f0
	lfs      f27, 0x18(r1)
	lfs      f26, 0x1c(r1)
	bge      lbl_802944D0
	fneg     f1, f3

lbl_802944D0:
	lfs      f2, lbl_8051BABC@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	lfs      f0, lbl_8051BA90@sda21(r2)
	addi     r4, r3, sincosTable___5JMath@l
	fmuls    f1, f1, f2
	fcmpo    cr0, f3, f0
	fctiwz   f0, f1
	stfd     f0, 0xa8(r1)
	lwz      r0, 0xac(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r4, r0
	lfs      f30, 4(r3)
	bge      lbl_80294528
	lfs      f0, lbl_8051BAC0@sda21(r2)
	fmuls    f0, f3, f0
	fctiwz   f0, f0
	stfd     f0, 0xb0(r1)
	lwz      r0, 0xb4(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0
	fneg     f29, f0
	b        lbl_80294540

lbl_80294528:
	fmuls    f0, f3, f2
	fctiwz   f0, f0
	stfd     f0, 0xb8(r1)
	lwz      r0, 0xbc(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f29, r4, r0

lbl_80294540:
	lwz      r0, 0x13c(r31)
	fneg     f31, f30
	lwz      r11, 0x140(r31)
	lwz      r10, 0x144(r31)
	lwz      r9, 0x148(r31)
	lwz      r8, 0x14c(r31)
	lwz      r7, 0x150(r31)
	lwz      r6, 0x154(r31)
	lwz      r5, 0x158(r31)
	lwz      r4, 0x15c(r31)
	lwz      r3, 0x160(r31)
	lfs      f1, 0x2dc(r28)
	lfs      f0, 0x2e8(r28)
	lfs      f2, 0x2f4(r28)
	fsubs    f8, f1, f27
	lfs      f1, 0x300(r28)
	fsubs    f6, f0, f27
	lfs      f0, 0x30c(r28)
	fsubs    f12, f2, f27
	stw      r0, 0x44(r1)
	lwz      r0, 0xec(r31)
	fsubs    f11, f1, f27
	stw      r11, 0x48(r1)
	fsubs    f10, f0, f27
	lfs      f0, 0x44(r1)
	stw      r10, 0x4c(r1)
	lfs      f1, 0x48(r1)
	fadds    f9, f0, f8
	stw      r9, 0x50(r1)
	lfs      f0, 0x4c(r1)
	fadds    f7, f1, f6
	stw      r8, 0x54(r1)
	lfs      f1, 0x50(r1)
	fadds    f5, f0, f12
	stw      r7, 0x30(r1)
	lfs      f0, 0x54(r1)
	fadds    f3, f1, f11
	stw      r6, 0x34(r1)
	lfs      f4, 0x30(r1)
	fadds    f1, f0, f10
	stw      r5, 0x38(r1)
	lfs      f2, 0x34(r1)
	fadds    f8, f4, f8
	stw      r4, 0x3c(r1)
	lfs      f0, 0x38(r1)
	fadds    f6, f2, f6
	stw      r3, 0x40(r1)
	lfs      f2, 0x3c(r1)
	fadds    f4, f0, f12
	lfs      f0, 0x40(r1)
	fadds    f2, f2, f11
	lwz      r19, 0xf0(r31)
	fadds    f0, f0, f10
	lwz      r20, 0xf4(r31)
	lwz      r21, 0xf8(r31)
	lwz      r22, 0xfc(r31)
	lwz      r23, 0x100(r31)
	lwz      r24, 0x104(r31)
	lwz      r25, 0x108(r31)
	lwz      r26, 0x10c(r31)
	lwz      r27, 0x110(r31)
	lwz      r12, 0x114(r31)
	lwz      r11, 0x118(r31)
	lwz      r10, 0x11c(r31)
	lwz      r9, 0x120(r31)
	lwz      r8, 0x124(r31)
	lwz      r7, 0x128(r31)
	lwz      r6, 0x12c(r31)
	lwz      r5, 0x130(r31)
	lwz      r4, 0x134(r31)
	lwz      r3, 0x138(r31)
	stw      r0, 0x94(r1)
	stw      r19, 0x98(r1)
	stw      r20, 0x9c(r1)
	stw      r21, 0xa0(r1)
	stw      r22, 0xa4(r1)
	stw      r23, 0x80(r1)
	stw      r24, 0x84(r1)
	stw      r25, 0x88(r1)
	stw      r26, 0x8c(r1)
	stw      r27, 0x90(r1)
	stw      r12, 0x6c(r1)
	stw      r11, 0x70(r1)
	stw      r10, 0x74(r1)
	stw      r9, 0x78(r1)
	stw      r8, 0x7c(r1)
	stw      r7, 0x58(r1)
	stw      r6, 0x5c(r1)
	stw      r5, 0x60(r1)
	stw      r4, 0x64(r1)
	stw      r3, 0x68(r1)
	stfs     f9, 0x44(r1)
	stfs     f8, 0x30(r1)
	stfs     f7, 0x48(r1)
	stfs     f6, 0x34(r1)
	stfs     f5, 0x4c(r1)
	stfs     f4, 0x38(r1)
	stfs     f3, 0x50(r1)
	stfs     f2, 0x3c(r1)
	stfs     f1, 0x54(r1)
	stfs     f0, 0x40(r1)
	li       r0, 0
	lwz      r3, naviMgr__4Game@sda21(r13)
	lis      r4, "__vt__22Iterator<Q24Game4Navi>"@ha
	stw      r0, 0x2c(r1)
	addi     r4, r4, "__vt__22Iterator<Q24Game4Navi>"@l
	cmplwi   r0, 0
	stw      r4, 0x20(r1)
	stw      r0, 0x24(r1)
	stw      r3, 0x28(r1)
	bne      lbl_80294714
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x24(r1)
	b        lbl_80294990

lbl_80294714:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x24(r1)
	b        lbl_80294780

lbl_8029472C:
	lwz      r3, 0x28(r1)
	lwz      r4, 0x24(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x2c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80294990
	lwz      r3, 0x28(r1)
	lwz      r4, 0x24(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x24(r1)

lbl_80294780:
	lwz      r12, 0x20(r1)
	addi     r3, r1, 0x20
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8029472C
	b        lbl_80294990

lbl_802947A0:
	lwz      r3, 0x28(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	mr       r19, r3
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802948D4
	mr       r4, r19
	addi     r3, r1, 8
	lwz      r12, 0(r19)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0xc(r1)
	slwi     r9, r30, 2
	lfs      f1, 8(r1)
	addi     r3, r1, 0x94
	fsubs    f4, f0, f27
	lfs      f0, lbl_8051BA90@sda21(r2)
	lfs      f2, 0x10(r1)
	addi     r4, r1, 0x80
	addi     r5, r1, 0x6c
	addi     r6, r1, 0x58
	fsubs    f3, f1, f28
	addi     r7, r1, 0x44
	fmuls    f0, f0, f4
	addi     r8, r1, 0x30
	fsubs    f2, f2, f26
	subf     r0, r30, r29
	fmadds   f1, f29, f3, f0
	mr       r10, r30
	fmadds   f0, f31, f3, f0
	add      r3, r3, r9
	add      r4, r4, r9
	add      r5, r5, r9
	fmadds   f1, f30, f2, f1
	add      r6, r6, r9
	fmadds   f2, f29, f2, f0
	add      r7, r7, r9
	add      r8, r8, r9
	mtctr    r0
	cmpw     r30, r29
	bge      lbl_802948D4

lbl_80294860:
	lfs      f0, 0(r3)
	fcmpo    cr0, f1, f0
	bge      lbl_802948B4
	lfs      f0, 0(r4)
	fcmpo    cr0, f1, f0
	ble      lbl_802948B4
	lfs      f0, 0(r5)
	fcmpo    cr0, f2, f0
	bge      lbl_802948B4
	lfs      f0, 0(r6)
	fcmpo    cr0, f2, f0
	ble      lbl_802948B4
	lfs      f0, 0(r7)
	fcmpo    cr0, f4, f0
	bge      lbl_802948B4
	lfs      f0, 0(r8)
	fcmpo    cr0, f4, f0
	ble      lbl_802948B4
	stw      r10, 0x2d4(r28)
	mr       r3, r19
	b        lbl_802949B4

lbl_802948B4:
	addi     r3, r3, 4
	addi     r4, r4, 4
	addi     r5, r5, 4
	addi     r6, r6, 4
	addi     r7, r7, 4
	addi     r8, r8, 4
	addi     r10, r10, 1
	bdnz     lbl_80294860

lbl_802948D4:
	lwz      r0, 0x2c(r1)
	cmplwi   r0, 0
	bne      lbl_80294900
	lwz      r3, 0x28(r1)
	lwz      r4, 0x24(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x24(r1)
	b        lbl_80294990

lbl_80294900:
	lwz      r3, 0x28(r1)
	lwz      r4, 0x24(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x24(r1)
	b        lbl_80294974

lbl_80294920:
	lwz      r3, 0x28(r1)
	lwz      r4, 0x24(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x2c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80294990
	lwz      r3, 0x28(r1)
	lwz      r4, 0x24(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x24(r1)

lbl_80294974:
	lwz      r12, 0x20(r1)
	addi     r3, r1, 0x20
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80294920

lbl_80294990:
	lwz      r3, 0x28(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x24(r1)
	cmplw    r4, r3
	bne      lbl_802947A0
	li       r3, 0

lbl_802949B4:
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
	lmw      r19, 0xcc(r1)
	lwz      r0, 0x164(r1)
	mtlr     r0
	addi     r1, r1, 0x160
	blr
	*/
}

/**
 * @note Address: 0x802949F8
 * @note Size: 0x68
 */
CollPart* Obj::getSwallowSlot()
{
	for (int i = 0; i < mMouthSlots.getMax(); i++) {
		MouthCollPart* slot = mMouthSlots.getSlot(i);
		if (slot->mStuckCreature) {
			continue;
		}
		return slot;
	}

	return nullptr;
}

/**
 * @note Address: 0x80294A60
 * @note Size: 0x6C
 */
bool Obj::isSwallowPikmin()
{
	for (int i = 0; i < mMouthSlots.getMax(); i++) {
		MouthCollPart* slot = mMouthSlots.getSlot(i);
		if (!slot->mStuckCreature) {
			continue;
		}
		return true;
	}

	return false;
}

/**
 * @note Address: 0x80294ACC
 * @note Size: 0x24C
 */
int Obj::getStickHeadPikmin()
{
	int stickCount = 0;
	Stickers stickers(this);
	Iterator<Creature> iter(&stickers);
	CI_LOOP(iter)
	{
		Creature* piki = *iter;
		if (piki->isAlive() && piki->mStuckCollPart && piki->mStuckCollPart->mCurrentID == 'head') {
			stickCount++;
		}
	}

	return stickCount;
}

/**
 * @note Address: 0x80294D18
 * @note Size: 0x48
 */
void Obj::createJointCallBack() { mSnakeJointMgr = new SnakeJointMgr(this); }

/**
 * @note Address: 0x80294D60
 * @note Size: 0x24
 */
void Obj::setupJointCallBack() { mSnakeJointMgr->setupCallBackJoint(); }

/**
 * @note Address: 0x80294D84
 * @note Size: 0x24
 */
void Obj::doAnimationJointCallBack() { mSnakeJointMgr->doAnimation(); }

/**
 * @note Address: 0x80294DA8
 * @note Size: 0x24
 */
void Obj::finishAnimationJointCallBack() { mSnakeJointMgr->finishAnimation(); }

/**
 * @note Address: 0x80294DCC
 * @note Size: 0xB8
 */
void Obj::startJointCallBack()
{
	f32 y                     = mAttackPositions[mAttackAnimIdx].y - mPosition.y;
	SysShape::KeyEvent* event = mAnimator->getAnimator().mAnimInfo->getAnimKeyByType(3);
	f32 frame                 = getMotionFrame();
	mSnakeJointMgr->startModify(y, (f32)event->mFrame - frame);
}

/**
 * @note Address: 0x80294E84
 * @note Size: 0x88
 */
void Obj::returnJointCallBack()
{
	SysShape::KeyEvent* event = mAnimator->getAnimator().mAnimInfo->getAnimKeyByType(4);
	f32 frame                 = getMotionFrame();
	mSnakeJointMgr->returnModify((f32)event->mFrame - frame);
}

/**
 * @note Address: 0x80294F0C
 * @note Size: 0x24
 */
void Obj::finishJointCallBack() { mSnakeJointMgr->finishModify(); }

/**
 * @note Address: 0x80294F30
 * @note Size: 0x38
 */
void Obj::setupCollision()
{
	CollPart* part = mCollTree->getCollPart('bod1');
	if (part) {
		part->makeTubeTree();
	}
}

/**
 * @note Address: 0x80294F68
 * @note Size: 0x40
 */
void Obj::lifeIncrement()
{
	mInstantDamage = 0.0f;
	disableEvent(0, EB_TakingDamage);
	mHealth += 10.0f;

	if (mHealth > C_GENERALPARMS.mHealth()) {
		mHealth = C_GENERALPARMS.mHealth();
	}
}

/**
 * @note Address: 0x80294FA8
 * @note Size: 0x48
 */
void Obj::createShadowSystem() { mShadowMgr = new SnakeCrowShadowMgr(this); }

/**
 * @note Address: 0x80294FF0
 * @note Size: 0x24
 */
void Obj::setupShadowSystem() { mShadowMgr->init(); }

/**
 * @note Address: 0x80295014
 * @note Size: 0x24
 */
void Obj::doAnimationShadowSystem() { mShadowMgr->update(); }

/**
 * @note Address: 0x80295038
 * @note Size: 0x24
 */
void Obj::startJointShadow() { mShadowMgr->startJointShadow(); }

/**
 * @note Address: 0x8029505C
 * @note Size: 0x24
 */
void Obj::finishJointShadow() { mShadowMgr->finishJointShadow(); }

/**
 * @note Address: 0x80295080
 * @note Size: 0x40
 */
void Obj::deleteJointShadow()
{
	shadowMgr->addNormalShadow(this);
	shadowMgr->delJointShadow(this);
}

/**
 * @note Address: 0x802950C0
 * @note Size: 0xE0
 */
void Obj::startBossAttackBGM()
{
	if (mIsFirstAttackBGM) {
		mIsFirstAttackBGM = false; // don't play normal boss attack BGM on first getup
	} else {
		PSM::EnemyBoss* soundObj = static_cast<PSM::EnemyBoss*>(mSoundObj);
		PSM::assertIsBoss(soundObj);
		soundObj->jumpRequest(PSM::EnemyMidBoss::BossBgm_Attack);
	}
}

/**
 * @note Address: 0x802951A0
 * @note Size: 0xC8
 */
void Obj::startBossFlickBGM()
{
	PSM::EnemyBoss* soundObj = static_cast<PSM::EnemyBoss*>(mSoundObj);
	PSM::assertIsBoss(soundObj);
	soundObj->jumpRequest(PSM::EnemyMidBoss::BossBgm_Flick);
}

/**
 * @note Address: 0x80295268
 * @note Size: 0xFC
 */
void Obj::updateBossBGM()
{
	PSM::EnemyBoss* soundObj = static_cast<PSM::EnemyBoss*>(mSoundObj);
	PSM::assertIsBoss(soundObj);
	if (mStuckPikminCount != 0) {
		soundObj->postPikiAttack(true);
	} else {
		soundObj->postPikiAttack(false);
	}
}

/**
 * @note Address: 0x80295364
 * @note Size: 0xD0
 */
void Obj::resetBossAppearBGM()
{
	if (!mIsAppearBGMEnabled) {
		mIsAppearBGMEnabled      = true;
		PSM::EnemyBoss* soundObj = static_cast<PSM::EnemyBoss*>(mSoundObj);
		PSM::assertIsBoss(soundObj);
		soundObj->setAppearFlag(false);
	}
}

/**
 * @note Address: 0x80295434
 * @note Size: 0xCC
 */
void Obj::setBossAppearBGM()
{
	if (mIsAppearBGMEnabled) {
		mIsAppearBGMEnabled      = false;
		PSM::EnemyBoss* soundObj = static_cast<PSM::EnemyBoss*>(mSoundObj);
		PSM::assertIsBoss(soundObj);
		soundObj->setAppearFlag(true);
	}
}

/**
 * @note Address: 0x80295500
 * @note Size: 0x160
 */
void Obj::createEffect()
{
	mEfxRotate = new efx::THebiRot;
	mEfxWait   = new efx::THebiWait;
	mEfxDead   = new efx::THebiDead;
}

/**
 * @note Address: 0x80295660
 * @note Size: 0x4C
 */
void Obj::setupEffect()
{
	Matrixf* matrix = mModel->getJoint("bodyjnt3")->getWorldMatrix();
	mEfxDead->setMtxptr(matrix->mMatrix.mtxView);
}

/**
 * @note Address: 0x802956AC
 * @note Size: 0x1D4
 */
void Obj::createAppearEffect(int effectID)
{
	efx::Arg fxArg(mPosition);
	switch (effectID) {
	case 0:
		efx::THebiAphd_appear1 appear1;
		appear1.create(&fxArg);
		break;
	case 1:
		efx::THebiAphd_appear2_first appear2;
		appear2.create(&fxArg);
		break;
	case 2:
		efx::THebiAphd_appear2_late appear3;
		appear3.create(&fxArg);
		break;
	}
}

/**
 * @note Address: 0x80295880
 * @note Size: 0x58
 */
void Obj::startRotateEffect()
{
	efx::Arg fxArg(mPosition);
	mEfxRotate->create(&fxArg);
}

/**
 * @note Address: 0x802958D8
 * @note Size: 0x30
 */
void Obj::finishRotateEffect() { mEfxRotate->fade(); }

/**
 * @note Address: 0x80295908
 * @note Size: 0x58
 */
void Obj::startWaitEffect()
{
	efx::Arg fxArg(mPosition);
	mEfxWait->create(&fxArg);
}

/**
 * @note Address: 0x80295960
 * @note Size: 0x30
 */
void Obj::finishWaitEffect() { mEfxWait->fade(); }

/**
 * @note Address: 0x80295990
 * @note Size: 0x34
 */
void Obj::createDeadStartEffect() { mEfxDead->create(nullptr); }

/**
 * @note Address: 0x802959C4
 * @note Size: 0x94
 */
void Obj::createDeadFinishEffect()
{
	Vector3f fxPos = mModel->getJoint("kutijnt1")->getWorldMatrix()->getColumn(3);
	efx::Arg fxArg(fxPos);
	efx::THebiDeadHane_ver01 deadFX;
	deadFX.create(&fxArg);
}

/**
 * @note Address: 0x80295A58
 * @note Size: 0xAC
 */
void Obj::createDownHeadEffect(f32 scale)
{
	Vector3f fxPos = mModel->getJoint("kutijnt1")->getWorldMatrix()->getColumn(3);
	fxPos.y -= 15.0f;
	createBounceEffect(fxPos, scale);

	cameraMgr->startVibration(VIBTYPE_LightMidShort, fxPos, CAMNAVI_Both);
	rumbleMgr->startRumble(RUMBLETYPE_Fixed8, fxPos, RUMBLEID_Both);
}

/**
 * @note Address: 0x80295B04
 * @note Size: 0x64
 */
void Obj::effectDrawOn()
{
	mEfxRotate->endDemoDrawOn();
	mEfxWait->endDemoDrawOn();
	mEfxDead->endDemoDrawOn();
}

/**
 * @note Address: 0x80295B68
 * @note Size: 0x64
 */
void Obj::effectDrawOff()
{
	mEfxRotate->startDemoDrawOff();
	mEfxWait->startDemoDrawOff();
	mEfxDead->startDemoDrawOff();
}

/**
 * @note Address: 0x80295BCC
 * @note Size: 0x48
 */
void Obj::createEfxHamon()
{
	if (!isUnderground()) {
		EnemyBase::createEfxHamon();
	}
}
} // namespace SnakeCrow
} // namespace Game
