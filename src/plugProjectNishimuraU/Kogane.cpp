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
void Kogane::Obj::setInitialSetting(Game::EnemyInitialParamBase*)
{
}

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
void Kogane::Obj::resetFartTimer()
{
}

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
void Kogane::Obj::doUpdate()
{
	mFsm->exec(this);
}

/**
 * @note Address: 0x8025DF78
 * @note Size: 0x20
 */
void Kogane::Obj::doUpdateCommon()
{
	EnemyBase::doUpdateCommon();
}

/**
 * @note Address: 0x8025DF98
 * @note Size: 0x4
 */
void Kogane::Obj::doDirectDraw(Graphics&)
{
}

/**
 * @note Address: 0x8025DF9C
 * @note Size: 0x20
 */
void Kogane::Obj::doDebugDraw(Graphics& gfx)
{
	EnemyBase::doDebugDraw(gfx);
}

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
void Kogane::Obj::doStartMovie()
{
	effectDrawOff();
}

/**
 * @note Address: 0x8025E2EC
 * @note Size: 0x2C
 */
void Kogane::Obj::doEndMovie()
{
	effectDrawOn();
}

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
	int hasColors[OnyonCount] = { 1, 1, 1 };
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
		int colorIdx = colors;
		colorIdx *= randFloat();
		PelletNumberInitArg arg(type, hasColors[colorIdx]);
		Pellet* pelt = pelletMgr->birth(&arg);
		if (pelt) {
			pelt->init(&arg);
			pelt->onSetPosition(pos);

			angle += offs;
			Vector3f vel = Vector3f(50.0f * sinf(angle), 250.0f, 50.0f * cosf(angle));
			pelt->setVelocity(vel);
		}
	}
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
