#include "Game/Entities/SnakeCrow.h"
#include "Game/EnemyFunc.h"
#include "Game/MapMgr.h"
#include "Game/PikiMgr.h"
#include "Game/Navi.h"
#include "Game/Stickers.h"
#include "Game/SingleGameSection.h"
#include "Game/CameraMgr.h"
#include "Game/rumble.h"
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
void Obj::setInitialSetting(EnemyInitialParamBase*)
{
}

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
void Obj::doDirectDraw(Graphics&)
{
}

/**
 * @note Address: 0x802934EC
 * @note Size: 0x20
 */
void Obj::doDebugDraw(Graphics& gfx)
{
	EnemyBase::doDebugDraw(gfx);
}

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
void Obj::startCarcassMotion()
{
	startMotion(SNAKECROWANIM_Carry, nullptr);
}

/**
 * @note Address: 0x8029374C
 * @note Size: 0x20
 */
void Obj::doStartMovie()
{
	effectDrawOff();
}

/**
 * @note Address: 0x8029376C
 * @note Size: 0x20
 */
void Obj::doEndMovie()
{
	effectDrawOn();
}

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
void Obj::getThrowupItemPosition(Vector3f* pos)
{
	*pos = mModel->getJoint("kutijnt1")->getWorldMatrix()->getColumn(3);
}

/**
 * @note Address: 0x802938A0
 * @note Size: 0x58
 */
void Obj::getCommonEffectPos(Vector3f& pos)
{
	pos = mModel->getJoint("kutijnt1")->getWorldMatrix()->getColumn(3);
}

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

	if (mHomePosition.sqrDistance2D(newPos) > SQUARE(C_GENERALPARMS.mTerritoryRadius())) {
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
		Vector3f forward  = dir;
		Vector3f sideways = orthoDir;
		forward *= array1[i];
		sideways *= array2[i];
		mAttackPositions[i] = mPosition;
		mAttackPositions[i] += forward;
		mAttackPositions[i] += sideways;
		mAttackPositions[i].y = mapMgr->getMinY(mAttackPositions[i]);
	}
}

/**
 * @note Address: 0x80293E3C
 * @note Size: 0x5F4
 */
Piki* Obj::getAttackPiki(int animIdx)
{
	int p1 = 0;
	int p2 = 5;
	if (animIdx < 5) {
		p1 = animIdx;
		p2 = animIdx + 1;
	}

	Vector3f snakePos = getPosition();
	Vector3f dir(sinf(mFaceDir), 0.0f, cosf(mFaceDir));
	Vector3f orthoDir(-dir.z, 0.0f, dir.x);

	f32 maxDotDirs[]     = { 80.0f, 160.0f, 220.0f, 130.0f, 130.0f };  // 0x94
	f32 minDotDirs[]     = { 0.0f, 80.0f, 160.0f, 50.0f, 50.0f };      // 0x80
	f32 maxDotPerpDirs[] = { 30.0f, 30.0f, 30.0f, 110.0f, -50.0f };    // 0x6C
	f32 minDotPerpDirs[] = { -30.0f, -30.0f, -30.0f, 50.0f, -110.0f }; // 0x58
	f32 maxYs[]          = { 40.0f, 40.0f, 40.0f, 40.0f, 40.0f };      // 0x44
	f32 minYs[]          = { -40.0f, -40.0f, -40.0f, -40.0f, -40.0f }; // 0x30

	for (int i = 0; i < 5; i++) {
		f32 height = mAttackPositions[i].y - snakePos.y;
		maxYs[i] += height;
		minYs[i] += height;
	}

	Iterator<Piki> iter(pikiMgr);
	CI_LOOP(iter)
	{
		Piki* piki = *iter;
		if (piki->isAlive() && piki->isPikmin() && !piki->isStickToMouth()) {
			Vector3f pikiPos = piki->getPosition();
			Vector3f sep     = pikiPos - snakePos;
			f32 dotDir       = dir.dot(sep);
			f32 dotPerpDir   = orthoDir.dot(sep);
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
}

/**
 * @note Address: 0x80294430
 * @note Size: 0x5C8
 */
Navi* Obj::getAttackNavi(int animIdx)
{
	int p1 = 0;
	int p2 = 5;
	if (animIdx < 5) {
		p1 = animIdx;
		p2 = animIdx + 1;
	}

	Vector3f snakePos = getPosition();
	Vector3f dir(sinf(mFaceDir), 0.0f, cosf(mFaceDir));
	Vector3f orthoDir(-dir.z, 0.0f, dir.x);

	f32 maxDotDirs[]     = { 80.0f, 160.0f, 220.0f, 130.0f, 130.0f };  // 0x94
	f32 minDotDirs[]     = { 0.0f, 80.0f, 160.0f, 50.0f, 50.0f };      // 0x80
	f32 maxDotPerpDirs[] = { 30.0f, 30.0f, 30.0f, 110.0f, -50.0f };    // 0x6C
	f32 minDotPerpDirs[] = { -30.0f, -30.0f, -30.0f, 50.0f, -110.0f }; // 0x58
	f32 maxYs[]          = { 40.0f, 40.0f, 40.0f, 40.0f, 40.0f };      // 0x44
	f32 minYs[]          = { -40.0f, -40.0f, -40.0f, -40.0f, -40.0f }; // 0x30

	for (int i = 0; i < 5; i++) {
		f32 height = mAttackPositions[i].y - snakePos.y;
		maxYs[i] += height;
		minYs[i] += height;
	}

	Iterator<Navi> iter(naviMgr);
	CI_LOOP(iter)
	{
		Navi* navi = *iter;
		if (navi->isAlive()) {
			Vector3f naviPos = navi->getPosition();
			Vector3f sep     = naviPos - snakePos;
			f32 dotDir       = dir.dot(sep);
			f32 dotPerpDir   = orthoDir.dot(sep);
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
void Obj::createJointCallBack()
{
	mSnakeJointMgr = new SnakeJointMgr(this);
}

/**
 * @note Address: 0x80294D60
 * @note Size: 0x24
 */
void Obj::setupJointCallBack()
{
	mSnakeJointMgr->setupCallBackJoint();
}

/**
 * @note Address: 0x80294D84
 * @note Size: 0x24
 */
void Obj::doAnimationJointCallBack()
{
	mSnakeJointMgr->doAnimation();
}

/**
 * @note Address: 0x80294DA8
 * @note Size: 0x24
 */
void Obj::finishAnimationJointCallBack()
{
	mSnakeJointMgr->finishAnimation();
}

/**
 * @note Address: 0x80294DCC
 * @note Size: 0xB8
 */
void Obj::startJointCallBack()
{
	f32 y                     = mAttackPositions[mAttackAnimIdx].y - mPosition.y;
	SysShape::KeyEvent* event = mAnimator->getAnimator().mAnimInfo->getAnimKeyByType(KEYEVENT_3);
	f32 frame                 = getMotionFrame();
	mSnakeJointMgr->startModify(y, (f32)event->mFrame - frame);
}

/**
 * @note Address: 0x80294E84
 * @note Size: 0x88
 */
void Obj::returnJointCallBack()
{
	SysShape::KeyEvent* event = mAnimator->getAnimator().mAnimInfo->getAnimKeyByType(KEYEVENT_4);
	f32 frame                 = getMotionFrame();
	mSnakeJointMgr->returnModify((f32)event->mFrame - frame);
}

/**
 * @note Address: 0x80294F0C
 * @note Size: 0x24
 */
void Obj::finishJointCallBack()
{
	mSnakeJointMgr->finishModify();
}

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
void Obj::createShadowSystem()
{
	mShadowMgr = new SnakeCrowShadowMgr(this);
}

/**
 * @note Address: 0x80294FF0
 * @note Size: 0x24
 */
void Obj::setupShadowSystem()
{
	mShadowMgr->init();
}

/**
 * @note Address: 0x80295014
 * @note Size: 0x24
 */
void Obj::doAnimationShadowSystem()
{
	mShadowMgr->update();
}

/**
 * @note Address: 0x80295038
 * @note Size: 0x24
 */
void Obj::startJointShadow()
{
	mShadowMgr->startJointShadow();
}

/**
 * @note Address: 0x8029505C
 * @note Size: 0x24
 */
void Obj::finishJointShadow()
{
	mShadowMgr->finishJointShadow();
}

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
void Obj::finishRotateEffect()
{
	mEfxRotate->fade();
}

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
void Obj::finishWaitEffect()
{
	mEfxWait->fade();
}

/**
 * @note Address: 0x80295990
 * @note Size: 0x34
 */
void Obj::createDeadStartEffect()
{
	mEfxDead->create(nullptr);
}

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
