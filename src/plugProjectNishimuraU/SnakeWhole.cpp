#include "Game/Entities/SnakeWhole.h"
#include "Game/EnemyFunc.h"
#include "Game/MapMgr.h"
#include "Game/PikiMgr.h"
#include "Game/Navi.h"
#include "Game/Stickers.h"
#include "Game/SingleGameSection.h"
#include "Game/CameraMgr.h"
#include "Game/rumble.h"
#include "efx/THebi.h"
#include "PSSystem/PSMainSide_ObjSound.h"
#include "Dolphin/rand.h"

namespace Game {
namespace SnakeWhole {

static const char unusedSnakeWholeName[] = "246-SnakeWhole";

/**
 * @note Address: 0x802CE798
 * @note Size: 0x16C
 */
Obj::Obj()
{
	mAnimator = new ProperAnimator;
	setFSM(new FSM);
	createJointCallBack();
	createShadowSystem();
	createEffect();
}

/**
 * @note Address: 0x802CE904
 * @note Size: 0x4
 */
void Obj::setInitialSetting(EnemyInitialParamBase*)
{
}

/**
 * @note Address: 0x802CE908
 * @note Size: 0xCC
 */
void Obj::onInit(CreatureInitArg* initArg)
{
	EnemyBase::onInit(initArg);
	shadowMgr->delNormalShadow(this);
	mIsUnderground = true;
	mIsJumping     = false;
	mStateTimer    = 0.0f;
	mNextState     = SNAKEWHOLE_NULL;
	mAttackAnimIdx = -1;
	mFaceDirOffset = 0.0f;
	setupJointCallBack();
	setupCollision();
	setupShadowSystem();
	setupEffect();
	mIsFirstAttackBGM   = true;
	mIsAppearBGMEnabled = false;
	resetBossAppearBGM();
	mFsm->start(this, SNAKEWHOLE_Stay, nullptr);
	doAnimationCullingOff();
}

/**
 * @note Address: 0x802CE9D4
 * @note Size: 0x50
 */
void Obj::doUpdate()
{
	mFsm->exec(this);
	updateConstraint();
	mMouthSlots.update();
}

/**
 * @note Address: 0x802CEA24
 * @note Size: 0x34
 */
void Obj::doUpdateCommon()
{
	EnemyBase::doUpdateCommon();
	updateBossBGM();
}

/**
 * @note Address: 0x802CEA58
 * @note Size: 0x34
 */
void Obj::doAnimationUpdateAnimator()
{
	EnemyBase::doAnimationUpdateAnimator();
	doAnimationJointCallBack();
}

/**
 * @note Address: 0x802CEA8C
 * @note Size: 0x3C
 */
void Obj::doAnimationCullingOff()
{
	EnemyBase::doAnimationCullingOff();
	doAnimationShadowSystem();
	finishAnimationJointCallBack();
}

/**
 * @note Address: 0x802CEAC8
 * @note Size: 0x4
 */
void Obj::doDirectDraw(Graphics&)
{
}

/**
 * @note Address: 0x802CEACC
 * @note Size: 0x20
 */
void Obj::doDebugDraw(Graphics& gfx)
{
	EnemyBase::doDebugDraw(gfx);
}

/**
 * @note Address: 0x802CEAEC
 * @note Size: 0x4C
 */
void Obj::setFSM(FSM* fsm)
{
	mFsm = fsm;
	mFsm->init(this);
	mCurrentLifecycleState = nullptr;
}

/**
 * @note Address: 0x802CEB38
 * @note Size: 0xB0
 */
void Obj::getShadowParam(ShadowParam& shadowParam)
{
	shadowParam.mPosition                 = mModel->getJoint("kutijnt1")->getWorldMatrix()->getColumn(3);
	shadowParam.mPosition.y               = mPosition.y + 2.5f;
	shadowParam.mBoundingSphere.mPosition = Vector3f(0.0f, 1.0f, 0.0f);
	if (isEvent(1, EB2_Earthquake)) {
		shadowParam.mBoundingSphere.mRadius = 50.0f;
	} else {
		shadowParam.mBoundingSphere.mRadius = 20.0f;
	}
	shadowParam.mSize = 22.5f;
}

/**
 * @note Address: 0x802CEBE8
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
 * @note Address: 0x802CEC80
 * @note Size: 0x20
 */
void Obj::doStartStoneState()
{
	EnemyBase::doStartStoneState();
}

/**
 * @note Address: 0x802CECA0
 * @note Size: 0x48
 */
void Obj::doFinishStoneState()
{
	EnemyBase::doFinishStoneState();
	EnemyFunc::flickStickPikmin(this, 1.0f, 10.0f, 0.0f, FLICK_BACKWARD_ANGLE, nullptr);
}

/**
 * @note Address: 0x802CECE8
 * @note Size: 0x28
 */
void Obj::startCarcassMotion()
{
	startMotion(SNAKEWHOLEANIM_Carry, nullptr);
}

/**
 * @note Address: 0x802CED10
 * @note Size: 0x20
 */
void Obj::doStartMovie()
{
	effectDrawOff();
}

/**
 * @note Address: 0x802CED30
 * @note Size: 0x20
 */
void Obj::doEndMovie()
{
	effectDrawOn();
}

/**
 * @note Address: 0x802CED50
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
 * @note Address: 0x802CEE0C
 * @note Size: 0x58
 */
void Obj::getThrowupItemPosition(Vector3f* pos)
{
	*pos = mModel->getJoint("kutijnt1")->getWorldMatrix()->getColumn(3);
}

/**
 * @note Address: 0x802CEE64
 * @note Size: 0x3C
 */
bool Obj::isOutTerritory()
{
	return (u8)(mPosition.sqrDistance2D(mHomePosition) > SQUARE(C_GENERALPARMS.mTerritoryRadius()));
}

/**
 * @note Address: 0x802CEEA0
 * @note Size: 0x3C
 */
bool Obj::isInHomeRange()
{
	return (u8)(mPosition.sqrDistance2D(mHomePosition) < SQUARE(C_GENERALPARMS.mHomeRadius()));
}

/**
 * @note Address: 0x802CEEDC
 * @note Size: 0x2AC
 */
void Obj::setJumpMove(Vector3f& targetPos)
{
	f32 angleDist = getAngDist(targetPos);
	if (absVal(angleDist) > HALF_PI) {
		int turnDir = (angleDist == 0.0f) ? 0 : (angleDist > 0.0f) ? 1 : -1;

		mFaceDirOffset = (HALF_PI * (f32)turnDir) / 22.0f;
	} else {
		mFaceDirOffset = angleDist / 22.0f;
	}

	if (FABS(angleDist) <= TORADIANS(30.0f)) {
		Vector3f velocity = Vector3f(targetPos.x - mPosition.x, 0.0f, targetPos.z - mPosition.z);
		f32 dist          = velocity.normalise();
		f32 moveSpeed     = C_GENERALPARMS.mMoveSpeed.mValue;

		f32 speed = dist;
		if (dist > moveSpeed) {
			speed = moveSpeed;
		}

		velocity *= (speed * (11.0f / 15.0f));

		setVelocity(velocity);
		mTargetVelocity = velocity;

	} else {
		setVelocity(Vector3f::zero);
		mTargetVelocity = Vector3f::zero;
	}
}

/**
 * @note Address: 0x802CF188
 * @note Size: 0x78
 */
void Obj::updateFace()
{
	f32 faceAngle = getFaceDir();
	faceAngle += mFaceDirOffset;
	clampAngle(faceAngle);

	updateFaceDir(faceAngle);
}

/**
 * @note Address: 0x802CF200
 * @note Size: 0x80
 */
void Obj::updateConstraint()
{
	if (getStateID() >= SNAKEWHOLE_Wait && !mIsJumping && mFloorTriangle) {
		// i.e. snagret is fully above ground + is ON ground
		if (mFloorNormal.y > 0.5f) {
			enableEvent(0, EB_Constrained);
		} else {
			constraintOff();
		}
		return;
	}

	constraintOff();
}

/**
 * @note Address: 0x802CF280
 * @note Size: 0x530
 */
void Obj::appearNearByTarget(Creature* target)
{
	Vector3f targetPos = target->getPosition();
	f32 faceDir        = randWeightFloat(TAU);

	Vector3f newPos = Vector3f(-sinf(faceDir), 0.0f, -cosf(faceDir));
	newPos *= 120.0f;
	newPos += targetPos;

	if (mHomePosition.sqrDistance2D(newPos) > SQUARE(C_GENERALPARMS.mTerritoryRadius())) {
		faceDir = JMAAtan2Radian(targetPos.x - mHomePosition.x, targetPos.z - mHomePosition.z);

		faceDir = faceDir + (randWeightFloat(PI) - HALF_PI);
		newPos  = Vector3f(-sinf(faceDir), 0.0f, -cosf(faceDir));
		newPos *= 120.0f;
		newPos += targetPos;
	}

	CurrTriInfo info;
	info.mPosition        = newPos;
	info.mUpdateOnNewMaxY = false;
	mapMgr->getCurrTri(info);

	if (info.mTriangle) {
		newPos.y = info.mMaxY;
	} else {
		faceDir = JMAAtan2Radian(targetPos.x - mHomePosition.x, targetPos.z - mHomePosition.z);
		newPos  = Vector3f(-sinfc(faceDir), 0.0f, -cosfc(faceDir));
		newPos *= 120.0f;
		newPos += targetPos;
		CurrTriInfo newInfo;
		newInfo.mPosition        = newPos;
		newInfo.mUpdateOnNewMaxY = false;
		mapMgr->getCurrTri(newInfo);
		if (newInfo.mTriangle) {
			newPos.y = newInfo.mMaxY;
		} else {
			newPos = mHomePosition;
		}
	}

	onSetPosition(newPos);
	updateFaceDir(faceDir);
}

/**
 * @note Address: 0x802CF7B0
 * @note Size: 0x20C
 */
void Obj::setAttackPosition()
{
	f32 angle         = mFaceDir;
	Vector3f dir      = Vector3f(sinf(angle), 0.0f, cosf(angle));
	Vector3f orthoDir = Vector3f(-dir.z, 0.0f, dir.x);

	f32 array1[5] = { 60.0f, 150.0f, 220.0f, 120.0f, 120.0f };
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
 * @note Address: 0x802CF9BC
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

	f32 maxDotDirs[]     = { 120.0f, 180.0f, 260.0f, 160.0f, 160.0f }; // 0x94
	f32 minDotDirs[]     = { 0.0f, 120.0f, 180.0f, 80.0f, 80.0f };     // 0x80
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
 * @note Address: 0x802CFFB0
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

	f32 maxDotDirs[]     = { 120.0f, 180.0f, 260.0f, 160.0f, 160.0f }; // 0x94
	f32 minDotDirs[]     = { 0.0f, 120.0f, 180.0f, 80.0f, 80.0f };     // 0x80
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
 * @note Address: 0x802D0578
 * @note Size: 0x50
 */
Creature* Obj::getSearchedTarget()
{
	f32 searchAngle = (mStuckPikminCount != 0) ? 180.0f : C_GENERALPARMS.mViewAngle.mValue;

	return EnemyFunc::getNearestPikminOrNavi(this, searchAngle, C_GENERALPARMS.mSightRadius.mValue, nullptr, nullptr, nullptr);
}

/**
 * @note Address: 0x802D05C8
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
 * @note Address: 0x802D0630
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
 * @note Address: 0x802D069C
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
 * @note Address: 0x802D08E8
 * @note Size: 0x48
 */
void Obj::createJointCallBack()
{
	mSnakeJointMgr = new SnakeJointMgr(this);
}

/**
 * @note Address: 0x802D0930
 * @note Size: 0x24
 */
void Obj::setupJointCallBack()
{
	mSnakeJointMgr->setupCallBackJoint();
}

/**
 * @note Address: 0x802D0954
 * @note Size: 0x24
 */
void Obj::doAnimationJointCallBack()
{
	mSnakeJointMgr->doAnimation();
}

/**
 * @note Address: 0x802D0978
 * @note Size: 0x24
 */
void Obj::finishAnimationJointCallBack()
{
	mSnakeJointMgr->finishAnimation();
}

/**
 * @note Address: 0x802D099C
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
 * @note Address: 0x802D0A54
 * @note Size: 0x88
 */
void Obj::returnJointCallBack()
{
	SysShape::KeyEvent* event = mAnimator->getAnimator().mAnimInfo->getAnimKeyByType(KEYEVENT_4);
	f32 frame                 = getMotionFrame();
	mSnakeJointMgr->returnModify((f32)event->mFrame - frame);
}

/**
 * @note Address: 0x802D0ADC
 * @note Size: 0x24
 */
void Obj::finishJointCallBack()
{
	mSnakeJointMgr->finishModify();
}

/**
 * @note Address: 0x802D0B00
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
 * @note Address: 0x802D0B38
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
 * @note Address: 0x802D0B78
 * @note Size: 0x48
 */
void Obj::createShadowSystem()
{
	mShadowMgr = new SnakeWholeShadowMgr(this);
}

/**
 * @note Address: 0x802D0BC0
 * @note Size: 0x24
 */
void Obj::setupShadowSystem()
{
	mShadowMgr->init();
}

/**
 * @note Address: 0x802D0BE4
 * @note Size: 0x24
 */
void Obj::doAnimationShadowSystem()
{
	mShadowMgr->update();
}

/**
 * @note Address: 0x802D0C08
 * @note Size: 0x24
 */
void Obj::startJointShadow()
{
	mShadowMgr->startJointShadow();
}

/**
 * @note Address: 0x802D0C2C
 * @note Size: 0x24
 */
void Obj::finishJointShadow()
{
	mShadowMgr->finishJointShadow();
}

/**
 * @note Address: 0x802D0C50
 * @note Size: 0x40
 */
void Obj::deleteJointShadow()
{
	shadowMgr->addNormalShadow(this);
	shadowMgr->delJointShadow(this);
}

/**
 * @note Address: 0x802D0C90
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
 * @note Address: 0x802D0D70
 * @note Size: 0xC8
 */
void Obj::startBossFlickBGM()
{
	PSM::EnemyBoss* soundObj = static_cast<PSM::EnemyBoss*>(mSoundObj);
	PSM::assertIsBoss(soundObj);
	soundObj->jumpRequest(PSM::EnemyMidBoss::BossBgm_Flick);
}

/**
 * @note Address: 0x802D0E38
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
 * @note Address: 0x802D0F34
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
 * @note Address: 0x802D1004
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
 * @note Address: 0x802D10D0
 * @note Size: 0x68
 */
void Obj::createEffect()
{
	mEfxDead = new efx::TCphebiDead;
}

/**
 * @note Address: 0x802D1138
 * @note Size: 0x78
 */
void Obj::setupEffect()
{
	Matrixf* footMat = mModel->getJoint("foot_joint1")->getWorldMatrix();
	mEfxDead->setMtxptr(footMat->mMatrix.mtxView);

	mFitEffectPos = mModel->getJoint("kutijnt1")->getWorldMatrix()->getColumn(3);
}

/**
 * @note Address: 0x802D11B0
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
 * @note Address: 0x802D1384
 * @note Size: 0x34
 */
void Obj::createDeadStartEffect()
{
	mEfxDead->create(nullptr);
}

/**
 * @note Address: 0x802D13B8
 * @note Size: 0x94
 */
void Obj::createDeadFinishEffect()
{
	Vector3f fxPos = mModel->getJoint("kutijnt1")->getWorldMatrix()->getColumn(3);
	efx::Arg fxArg(fxPos);
	efx::TCphebiDeadHane deadFX;
	deadFX.create(&fxArg);
}

/**
 * @note Address: 0x802D144C
 * @note Size: 0x3C
 */
void Obj::createWalkSmokeEffect(f32 scale)
{
	if (mWaterBox) {
		createSplashDownEffect(mPosition, scale);
	} else {
		createDropEffect(mPosition, scale);
	}
}

/**
 * @note Address: 0x802D1488
 * @note Size: 0x30
 */
void Obj::effectDrawOn()
{
	mEfxDead->endDemoDrawOn();
}

/**
 * @note Address: 0x802D14B8
 * @note Size: 0x30
 */
void Obj::effectDrawOff()
{
	mEfxDead->startDemoDrawOff();
}

/**
 * @note Address: 0x802D14E8
 * @note Size: 0x48
 */
void Obj::createEfxHamon()
{
	if (!isUnderground()) {
		EnemyBase::createEfxHamon();
	}
}

/**
 * @note Address: 0x802D1538
 * @note Size: 0x58
 */
Vector3f* Obj::getFitEffectPos()
{
	mFitEffectPos = mModel->getJoint("kutijnt1")->getWorldMatrix()->getColumn(3);
	return &mFitEffectPos;
}

} // namespace SnakeWhole
} // namespace Game
