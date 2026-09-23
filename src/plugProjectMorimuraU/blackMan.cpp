#include "types.h"
#include "Game/Entities/BlackMan.h"
#include "Game/generalEnemyMgr.h"
#include "efx/TKage.h"
#include "PSSystem/PSMainSide_ObjSound.h"
#include "Game/MapMgr.h"
#include "Game/pathfinder.h"
#include "Game/routeMgr.h"
#include "Radar.h"
#include "Sys/MatBaseAnimation.h"
#include "Sys/MatBaseAnimator.h"
#include "Game/Navi.h"
#include "PSSystem/PSGame.h"
#include "PSSystem/PSScene.h"
#include "PSM/Scene.h"
#include "PSSystem/PSSeq.h"
#include "Game/MoviePlayer.h"
#include "JSystem/J3D/J3DTexMtx.h"
#include "Game/EnemyAnimKeyEvent.h"
#include "Game/Entities/ItemOnyon.h"
#include "Game/mapParts.h"
#include "Game/EnemyFunc.h"
#include "Game/PikiMgr.h"
#include "Dolphin/rand.h"
#include "PS.h"
#include "nans.h"

namespace Game {
namespace BlackMan {

Obj* curB;

enum JointID {
	lHand = 0,
	rHand = 1,
	lFoot = 2,
	rFoot = 3,
};

static const int unusedArray[]     = { 0, 0, 0 };
static const char unusedBlackMan[] = "blackMan";

/**
 * @note Address: 0x803A5DB0
 * @note Size: 0x3C
 */
bool lHandCallBack(J3DJoint*, int p2)
{
	if (p2 == 0 && curB) {
		curB->jointMtxCalc(lHand);
	}
	return true;
}

/**
 * @note Address: 0x803A5DEC
 * @note Size: 0x3C
 */
bool rHandCallBack(J3DJoint*, int p2)
{
	if (p2 == 0 && curB) {
		curB->jointMtxCalc(rHand);
	}
	return true;
}

/**
 * @note Address: 0x803A5E28
 * @note Size: 0x3C
 */
bool lFootCallBack(J3DJoint*, int p2)
{
	if (p2 == 0 && curB) {
		curB->jointMtxCalc(lFoot);
	}
	return true;
}

/**
 * @note Address: 0x803A5E64
 * @note Size: 0x3C
 */
bool rFootCallBack(J3DJoint*, int p2)
{
	if (p2 == 0 && curB) {
		curB->jointMtxCalc(rFoot);
	}
	return true;
}

/**
 * @note Address: 0x803A5EA0
 * @note Size: 0x38
 */
bool bodyCallBack(J3DJoint*, int p2)
{
	if (p2 == 0 && curB) {
		curB->bodyMtxCalc();
	}
	return true;
}

/**
 * @note Address: 0x803A5ED8
 * @note Size: 0xF0
 */
void Obj::setParameters()
{
	EnemyBase::setParameters();
	if (isEvent(0, EB_HardConstrained)) {
		mPosition.y = mapMgr->getMinY(mPosition);
		mPosition.y += C_PARMS->mInitialSpawnHeight;
		if (mTyre) {
			mTyre->onSetPosition(mPosition);
		}
	}

	// apparently there was gonna be a big/small wraith
	f32 scale      = C_PARMS->mBaseScale;
	mScaleModifier = scale;
	mScale         = Vector3f(scale);
	mCollTree->mPart->setScale(scale);

	EnemyBase* tyre = mTyre;

	if (tyre) {
		tyre->mScaleModifier = scale;
		tyre->mScale         = Vector3f(scale);
		mTyre->mCollTree->mPart->setScale(scale);
	}
}

/**
 * @note Address: 0x803A5FC8
 * @note Size: 0x20
 */
void Obj::birth(Vector3f& position, f32 faceDirection)
{
	EnemyBase::birth(position, faceDirection);
}

/**
 * @note Address: 0x803A5FE8
 * @note Size: 0x6B4
 */
void Obj::onInit(CreatureInitArg* arg)
{
	EnemyBase::onInit(arg);
	disableEvent(0, EB_Cullable);
	disableEvent(0, EB_LeaveCarcass);
	disableEvent(0, EB_DeathEffectEnabled);
	mEscapePhase = C_PARMS->mStartPhase;

	if (gameSystem->mSection && gameSystem->mSection->getCaveID() == 'y_01' && gameSystem && !gameSystem->isZukanMode()) {
		mFSM->start(this, WRAITH_Walk, nullptr);
		mEscapePhase = 2;
	} else {
		EnemyMgrBase* tyreMgr = generalEnemyMgr->getEnemyMgr(EnemyTypeID::EnemyID_Tyre);
		if (tyreMgr) {
			EnemyBirthArg birthArg;
			birthArg.mPosition = mPosition;
			birthArg.mFaceDir  = mFaceDir;
			mTyre              = static_cast<Tyre::Obj*>(tyreMgr->birth(birthArg));
			mTyre->init(nullptr);
			mTyre->mOwner = this;
		}
		mFSM->start(this, WRAITH_Fall, nullptr);
	}

	P2ASSERTLINE(178, mMatLoopAnimator);

	mMatLoopAnimator->start(C_MGR->mTexAnimation);

	mPostFlickState = -1;

	mNextRoutePos           = mPosition;
	mHomePosition           = mNextRoutePos;
	mTargetPosition         = mHomePosition;
	mPathFindingHandle      = 0;
	mFoundPath              = 0;
	mPath                   = nullptr;
	_2E4                    = 0;
	mRouteFindTimer         = 0;
	mRouteFindCooldownTimer = 0;
	mFreezeTimer            = 0;
	mEscapeMoveSpeed        = 0.0f;
	curB                    = nullptr;

	P2ASSERTLINE(209, mModel);

	J3DModelData* modelData = mModel->mJ3dModel->mModelData;

	P2ASSERTLINE(212, modelData);

	mChestJointIndex     = mModel->getJointIndex("chest");
	mLeftHandJointIndex  = mModel->getJointIndex("handLend");
	mRightHandJointIndex = mModel->getJointIndex("handRend");
	mLeftFootJointIndex  = mModel->getJointIndex("footL");
	mRightFootJointIndex = mModel->getJointIndex("footR");

	if (mTyre) {

		SysShape::Model* tyreModel = mTyre->mModel;
		mLeftHandMtx               = tyreModel->getMatrix(tyreModel->getJointIndex("tyreFL"));

		modelData->mJointTree.mJoints[mLeftHandJointIndex]->mFunction = lHandCallBack;

		tyreModel                                                      = mTyre->mModel;
		mRightHandMtx                                                  = tyreModel->getMatrix(tyreModel->getJointIndex("TyreFR"));
		modelData->mJointTree.mJoints[mRightHandJointIndex]->mFunction = rHandCallBack;

		tyreModel                                                     = mTyre->mModel;
		mLeftFootMtx                                                  = tyreModel->getMatrix(tyreModel->getJointIndex("TyreBL"));
		modelData->mJointTree.mJoints[mLeftFootJointIndex]->mFunction = lFootCallBack;

		tyreModel                                                      = mTyre->mModel;
		mRightFootMtx                                                  = tyreModel->getMatrix(tyreModel->getJointIndex("tyreBR"));
		modelData->mJointTree.mJoints[mRightFootJointIndex]->mFunction = rFootCallBack;

		mModel->hidePackets();
		mTyre->mModel->hidePackets();
		modelData->mJointTree.mJoints[mChestJointIndex]->mFunction = bodyCallBack;
	}

	mWaistJointIndex = mModel->getJointIndex("waist");

	if (mTyre) {
		mPosition.y += C_PARMS->mInitialSpawnHeight;
		mTyre->onSetPosition(mPosition);
	}

	WPSearchArg wpSearch(mPosition, nullptr, 0, 10.0f);
	s16 wpIndex            = mapMgr->mRouteMgr->getNearestWayPoint(wpSearch)->mIndex;
	mNextWaypointIndex     = wpIndex;
	mPreviousWaypointIndex = wpIndex;
	mCurrentWaypointIndex  = wpIndex;

	mNextRoutePos   = mPosition;
	mHomePosition   = mNextRoutePos;
	mTargetPosition = mHomePosition;

	if (isFinalFloor()) {
		PSM::disableAppearFlag(mSoundObj);
	} else if (mTyre && !mPelletDropCode.isNull() && Radar::mgr) {
		Radar::Mgr::exit(this);
	}

	mTargetColor = Color4(0xb5, 0xc0, 0xae, 0xff); // Transparent Color
	mUnusedColor = Color4(0xff, 0x20, 0x16, 0xff);
	mFadeColor   = Color4(0x30, 0x3f, 0x57, 0x00);
	mActiveColor = mTargetColor;

	modelData = mModel->mJ3dModel->mModelData;

	// if you need this many P2ASSERTs then maybe you're the one who needs sanity checked
	P2ASSERTLINE(294, modelData);

	u16 kageMatIdx = modelData->mMaterialTable.mMaterialNames->getIndex("kage_mat");

	mBodyMaterial = modelData->mMaterialTable.mMaterials[kageMatIdx];

	if (gameSystem && gameSystem->isZukanMode()) {
		mWraithFallTimer = 0.0f;
	}

	mEfxDead->mMtx = mModel->mJoints[mChestJointIndex].getWorldMatrix();
}

/**
 * @note Address: 0x803A669C
 * @note Size: 0x560
 */
Obj::Obj()
    : mPostFlickState(-1)
    , _2E4(0)
    , mRouteFindTimer(0)
    , mStepTimer(0)
    , mStepPhase(0)
    , mEscapeTimer(0)
    , mRouteFindCooldownTimer(0)
    , mIsSameWaypoint(false)
    , mWraithFallTimer(10.0f)
    , mCurrentWaypointIndex(-1)
    , mPreviousWaypointIndex(-1)
    , mNextWaypointIndex(-1)
    , mPathFindingHandle(0)
    , mFoundPath(0)
{
	mMatLoopAnimator    = nullptr;
	mPath               = nullptr;
	mFSM                = nullptr;
	mTyre               = nullptr;
	mFadeTimer          = 1.0f;
	mBodyMaterial       = nullptr;
	mEfxMove            = nullptr;
	mEfxRun             = nullptr;
	mEfxTyreup          = nullptr;
	mEfxDead            = nullptr;
	mHasStartedChaseBgm = false;
	mIsFallStart        = 0;
	mNeedAppearBgm      = 0;
	mIsMoviePlaying     = 0;

	mAnimator        = new ProperAnimator;
	mMatLoopAnimator = new Sys::MatLoopAnimator;

	setFSM(new FSM);

	mEfxMove       = new efx::TKageMove(&mChestJointPosition, &mFaceDir);
	mEfxRun        = new efx::TKageRun(&mChestJointPosition, &mFaceDir);
	mEfxDead       = new efx::TKageDead1;
	mEfxTyreup     = new efx::TKageTyreup(&mLandPosition, &mFaceDir);
	mEfxFrontFlick = new efx::TKageFlick(&mHandPositions[0]);
	mEfxBackFlick  = new efx::TKageFlick(&mHandPositions[1]);
}

/**
 * @note Address: 0x803A6C48
 * @note Size: 0x6C4
 */
void Obj::doUpdate()
{
	getStateID();
	isStopMotion();
	isFinishMotion();
	mFSM->exec(this);
	if (mFadeTimer < 1.0f) {
		mFadeTimer += C_PARMS->mFadeRate;
		if (mFadeTimer > 1.0f) {
			mFadeTimer = 1.0f;
		}

		f32 inverseFade = 1.0f - mFadeTimer;

		CollPart* kosi = mCollTree->getCollPart('kosi');
		if (kosi->mSpecialID == 'st__' || getStateID() == WRAITH_Dead) {
			mFadeColor.a = mFadeTimer * 0xff;
		} else {
			mFadeColor.a   = mFadeColor.a * inverseFade;
			mActiveColor.r = mActiveColor.r * inverseFade + mTargetColor.r * mFadeTimer;
			mActiveColor.g = mActiveColor.g * inverseFade + mTargetColor.g * mFadeTimer;
			mActiveColor.b = mActiveColor.b * inverseFade + mTargetColor.b * mFadeTimer;
		}
	}

	mWraithFallTimer -= sys->mDeltaTime;
	if (isEvent(0, EB_HardConstrained) && getStateID() == WRAITH_Fall) {
		f32 fallTimer = -C_PARMS->mFallStartDelay;
		if (!mTyre || mWraithFallTimer < fallTimer) {
			hardConstraintOff();
			mModel->showPackets();
			mSoundObj->startSound(PSSE_EN_TIRE_FALL, 0);
		} else {
			f32 someTimer = C_PARMS->mFallDelay2;
			if (!mIsFallStart && mWraithFallTimer < someTimer) {
				if (gameSystem && gameSystem->isZukanMode()) {
					mIsFallStart           = true;
					mTyre->mIsShadowActive = true;
				}

				Navi* activeNavi = naviMgr->getActiveNavi();
				if (!mIsFallStart && activeNavi && activeNavi->isAlive()) {

					Vector3f pos;
					getPosition2D(pos);
					Vector3f naviPos = Vector3f(activeNavi->getPosition().x, 0.0f, activeNavi->getPosition().z);

					f32 sqrDist = naviPos.sqrDistance2D(pos);
					if (isFinalFloor()) {
						f32 fallRadius = C_PARMS->mFallRadius;
						if (sqrDist < SQUARE(fallRadius)) {
							mIsFallStart = true;
						}
					} else if (sqrDist > 10000.0f) {
						mIsFallStart = true;
					}

					if (mIsFallStart) {
						mTyre->mIsShadowActive = true;
					}
				}

				if (!mIsFallStart) {
					mWraithFallTimer = someTimer;
				}
			}
		}

		if (mTyre && mTyre->isEvent(0, EB_HardConstrained) && mWraithFallTimer < 0.0f) {
			if (gameSystem && !gameSystem->isZukanMode() && gameSystem->mSection && gameSystem->mSection->getCaveID() == 'y_04') {
				PSSystem::SceneMgr* mgr = PSSystem::getSceneMgr();
				PSSystem::validateSceneMgr(mgr);
				mgr->checkScene();
				PSSystem::SeqBase* seqBase = PSSystem::getSeqData(mgr, 0);
				P2ASSERTLINE(489, seqBase);
				seqBase->stopSeq(5);
				if (!isFinalFloor() && !playData->isDemoFlag(DEMO_Waterwraith_Appears) && moviePlayer) {

					MoviePlayArg wraithMovieArg("x20_blackman", nullptr, nullptr, 0);
					Vector3f origin        = getPosition();
					origin.y               = mapMgr->getMinY(mPosition);
					wraithMovieArg.mOrigin = origin;
					wraithMovieArg.mAngle  = getFaceDir();

					moviePlayer->mTargetObject = this;

					moviePlayer->play(wraithMovieArg);
					mTyre->movie_begin(false);
					playData->setDemoFlag(DEMO_Waterwraith_Appears);
					mIsMoviePlaying = true;
					mNeedAppearBgm  = true;
				}
			}
			if (!mIsMoviePlaying) {
				mTyre->mSoundObj->startSound(PSSE_EN_TIRE_FALL, 0);
			}
			mTyre->hardConstraintOff();
			mTyre->mModel->showPackets();
		}
	}
	if (mIsFallStart && mWraithFallTimer < -1.0f && mTyre) {
		mTyre->scaleUpShadow();
	}
}

/**
 * @note Address: 0x803A730C
 * @note Size: 0x4
 */
void Obj::doDirectDraw(Graphics&)
{
}

/**
 * @note Address: 0x803A7310
 * @note Size: 0x20
 */
void Obj::doDebugDraw(Graphics& gfx)
{
	EnemyBase::doDebugDraw(gfx);
}

/**
 * @note Address: 0x803A7330
 * @note Size: 0x174
 */
void Obj::doSimulation(f32 speed)
{
	if (mTyre) {
		mTyre->mWraithPosition = mPosition;
	}

	mRouteFindTimer--;

	if (mRouteFindTimer < 0) {
		mRouteFindTimer = 0;
	}

	EnemyBase::doSimulation(speed);

	StateID currentState = (StateID)EnemyBase::getStateID();

	if (mTyre) {
		Vector3f tyrePos = mTyre->getPosition();
		if (currentState == WRAITH_Fall && !isFinishMotion()) {
			// HUH!?
			mPosition.x = tyrePos.x + 0.01f;
			mPosition.z = tyrePos.z + 0.01f;
		} else {
			mPosition = tyrePos;
		}
		if (currentState != WRAITH_Bend && currentState != WRAITH_Recover && currentState != WRAITH_Flick && currentState != WRAITH_Fall) {
			mTyre->setVelocity(mCurrentVelocity);
			mTyre->mTargetVelocity = mTargetVelocity;
		}
	}
}

/**
 * @note Address: 0x803A74A4
 * @note Size: 0x238
 */
void Obj::doAnimationCullingOff()
{
	Color4 efxColor(0xff, 0xff, 0xff, 0xff);

	if (mStepPhase && mTyre) {
		efxColor.r = mActiveColor.r;
		efxColor.g = mActiveColor.g;
		efxColor.b = mActiveColor.b;
	}

	mEfxMove->setGlobalPrmColor(efxColor);
	mEfxRun->setGlobalPrmColor(efxColor);
	mEfxDead->setGlobalPrmColor(efxColor);

	mChestJointPosition = mModel->mJoints[mChestJointIndex].getWorldMatrix()->getTranslation();
	mHandPositions[0]   = mModel->mJoints[mLeftHandJointIndex].getWorldMatrix()->getTranslation();
	mHandPositions[1]   = mModel->mJoints[mRightHandJointIndex].getWorldMatrix()->getTranslation();

	if (mTyre) {
		if (getStateID() != WRAITH_Fall && C_PARMS->mUseGlobalMtxCalc) {
			curB = this;
		}
		mTyre->mIsUnderground = isUnderground();
	}

	EnemyBase::doAnimationCullingOff();

	curB = nullptr;

	if (!gameSystem || !gameSystem->isZukanMode()) {
		PSM::EnemyMidBoss* midBossSound = static_cast<PSM::EnemyMidBoss*>(mSoundObj);
		PSM::checkMidBoss(midBossSound);

		if (midBossSound) {
			if (mSticked || (mTyre && mTyre->mSticked)) {
				midBossSound->postPikiAttack(true);
			} else {
				midBossSound->postPikiAttack(true);
			}
		}
	}
}

/**
 * @note Address: 0x803A76DC
 * @note Size: 0x3C
 */
void Obj::onKill(Game::CreatureKillArg* arg)
{
	EnemyBase::onKill(arg);
	releasePathFinder();
#if !defined(VERSION_JP)
	fadeFlickEffect();
#endif
}

/**
 * @note Address: 0x803A7718
 * @note Size: 0xDC
 */
void Obj::doStartStoneState()
{
	EnemyBase::doStartStoneState();
	if (getStateID() != WRAITH_Fall) {
		mTargetVelocity  = Vector3f(0.0f);
		mCurrentVelocity = Vector3f(0.0f);
	}

	if (mTyre) {
		mTyre->mSingleRotationRatio = 0.0f; // roll speed maybe?
	}

	// since we are now a stone, pikmin can stick to us
	mCollTree->getCollPart('kosi')->mSpecialID = 'st__';
	mCollTree->getCollPart('mune')->mSpecialID = 'st__';
	mCollTree->getCollPart('head')->mSpecialID = 'st__';

	fadeTraceEffect();
#if !defined(VERSION_JP)
	fadeFlickEffect();
#endif
}

/**
 * @note Address: 0x803A77F4
 * @note Size: 0xBC
 */
void Obj::doFinishStoneState()
{
	EnemyBase::doFinishStoneState();

	// since we are not a stone anymore, and we are not vulnerable, pikmin should not stick to us
	if (getStateID() != WRAITH_Freeze && getStateID() != WRAITH_Bend) {
		mCollTree->getCollPart('kosi')->mSpecialID = '____';
		mCollTree->getCollPart('mune')->mSpecialID = '____';
		mCollTree->getCollPart('head')->mSpecialID = '____';
	}

	flick();
	fadeTraceEffect();
}

/**
 * @note Address: 0x803A78B0
 * @note Size: 0x58
 */
bool Obj::isUnderground()
{
	// (u32)stateID - 2 <= 1 || stateID == WRAITH_Tired || isEvent(0, EB_IsBittered)

	/* Gets optimized into the code above */
	int stateID = getStateID();
	if (stateID == WRAITH_Freeze || stateID == WRAITH_Bend || stateID == WRAITH_Tired || isEvent(0, EB_Bittered)) {
		return false;
	}
	return true;
}

/**
 * @note Address: 0x803A7908
 * @note Size: 0xA4
 */
void Obj::doGetLifeGaugeParam(Game::LifeGaugeParam& param)
{
	EnemyBase::doGetLifeGaugeParam(param);

	if (isOnTyres()) {
		Matrixf* waistJoint = (Matrixf*)mModel->mJ3dModel->mMtxBuffer->mWorldMatrices[mWaistJointIndex];

		Vector3f lifeGaugePosition = waistJoint->getTranslation();
		lifeGaugePosition.y        = mPosition.y + C_GENERALPARMS.mLifeMeterHeight.mValue;

		param.mPosition = lifeGaugePosition;
	}
}

/**
 * @note Address: 0x803A79AC
 * @note Size: 0x1B8
 */
void Obj::collisionCallback(Game::CollEvent& collEvent)
{
	Creature* collCreature = collEvent.mCollidingCreature;
	int stateID            = getStateID();
	if (stateID != WRAITH_Bend && stateID != WRAITH_Freeze && !isEvent(0, EB_Bittered) && collCreature && collCreature->isPiki()) {
		collCreature->getPosition();

		Piki* piki = static_cast<Piki*>(collCreature);

		if (piki->getKind() != Purple) {
			InteractFlick flick(this, C_GENERALPARMS.mShakeKnockback(), 0.0f, FLICK_BACKWARD_ANGLE);
			piki->stimulate(flick);
			mSoundObj->startSound(PSSE_EN_KAGE_REJECT, 0);
		} else if (stateID == WRAITH_Walk || stateID == WRAITH_Tired) {
			if (mTyre) {
				mTyre->earthquakeCallBack(piki, 0.0f);
			}
		}
	}

	if (collCreature->isTeki()) {
		EnemyBase* teki = static_cast<EnemyBase*>(collCreature);
		if (teki->getEnemyTypeID() == EnemyTypeID::EnemyID_Tyre) {
			mAcceleration = Vector3f(0.0f); // I wanna know the story behind this line of code
		}
	}

	if (mEscapePhase != 2) {
		EnemyBase::collisionCallback(collEvent);
	}
}

/**
 * @note Address: 0x803A7B64
 * @note Size: 0x16C
 */
bool Obj::damageCallBack(Game::Creature* creature, f32 damage, CollPart* part)
{
	int stateID = getStateID();
	if (stateID == WRAITH_Tired && creature->isPiki()) {
		Piki* piki = static_cast<Piki*>(creature);

		if (piki->getKind() == Purple && !piki->mFloorTriangle) {
			mFreezeTimer = 0;
			mFSM->transit(this, WRAITH_Freeze, nullptr);
			return EnemyBase::damageCallBack(creature, damage, part);
		}
	}
	if (stateID == WRAITH_Freeze || stateID == WRAITH_Bend || isEvent(0, EB_Bittered)) {
		if (isEvent(0, EB_Bittered)) { // wraith doesn't take damage while bittered
			return false;
		}
		if (mTyre) {
			EnemyBase::damageCallBack(creature, 0.0f, nullptr);
			return mTyre->damageCallBack(creature, damage, part);
		}
		return EnemyBase::damageCallBack(creature, damage, part);
	}
	return false;
}

/**
 * @note Address: 0x803A7CD0
 * @note Size: 0x134
 */
bool Obj::hipdropCallBack(Game::Creature* creature, f32 damage, CollPart* part)
{
	int stateID = getStateID();
	if (stateID == WRAITH_Tired) {
		mFreezeTimer = 0;
		mFSM->transit(this, 2, nullptr);
		return EnemyBase::hipdropCallBack(creature, damage, part);
	}
	if (stateID == WRAITH_Freeze || stateID == WRAITH_Bend || isEvent(0, EB_Bittered)) {
		if (mTyre) {
			if (isEvent(0, EB_Bittered)) {
				damage = 0.1f;
			}
			if (mTyre->mHealth < 1.0f) {
				damage = 0.0f;
			}
			mTyre->EnemyBase::addDamage(damage, 1.0f);
			enableEvent(0, EB_SquashOnDamageAnim);
			EnemyBase::addDamage(0.0f, 1.0f);
			return false;
		}

		return EnemyBase::hipdropCallBack(creature, damage, part);
	}
	return false;
}

/**
 * @note Address: 0x803A7E04
 * @note Size: 0xDC
 */
bool Obj::earthquakeCallBack(Game::Creature* creature, f32 bounceFactor)
{
	if (mTyre) {
		mTyre->earthquakeCallBack(creature, bounceFactor);
		return EnemyBase::earthquakeCallBack(creature, bounceFactor);
	}

	if (C_PARMS->mDoStunOnEarthquake && (getStateID() == WRAITH_Walk || getStateID() == WRAITH_Tired)) {
		mFreezeTimer = 0;
		mEscapeTimer = 0;
		mFSM->transit(this, WRAITH_Freeze, nullptr);
	}
	return EnemyBase::earthquakeCallBack(creature, bounceFactor);
}

/**
 * @note Address: 0x803A7EE0
 * @note Size: 0x68
 */
void Obj::doEntry()
{
	if (C_PARMS->mUseDrawBuffer8) {
		gameSystem->setDrawBuffer(DB_ObjectLastLayer);
	} else {
		gameSystem->setDrawBuffer(DB_PostRenderLayer);
	}
	EnemyBase::doEntry();
	gameSystem->setDrawBuffer(DB_NormalLayer);
}

/**
 * @note Address: 0x803A7F48
 * @note Size: 0x31C
 */
void Obj::changeMaterial()
{
	// not matching due to regswaps

	Mtx44 copyMatrix;
	PSMTX44Copy(sys->mGfx->mCurrentViewport->mCamera->mProjectionMtx, copyMatrix);

	copyMatrix[2][0] = copyMatrix[3][0];
	copyMatrix[2][1] = copyMatrix[3][1];
	copyMatrix[2][2] = copyMatrix[3][2];
	copyMatrix[2][3] = copyMatrix[3][3];

	copyMatrix[3][0] = 0.0f;
	copyMatrix[3][1] = 0.0f;
	copyMatrix[3][2] = 0.0f;
	copyMatrix[3][3] = 1.0f;

	J3DModel* j3dModel      = mModel->mJ3dModel;
	J3DModelData* modelData = j3dModel->getModelData();

	mBodyMaterial->getTevBlock()->setTevKColor(0, mActiveColor);
	mBodyMaterial->getTevBlock()->setTevKColor(3, mFadeColor);

	j3dModel->calcMaterial();

	mMatLoopAnimator->animate(30.0f);

	modelData->getMaterialNodePointer(0)->getTexGenBlock()->getTexMtx(0)->getTexMtxInfo().setMtx(copyMatrix);

	modelData->getTexture()->changeImage(gameSystem->getXfbTexture()->getTexInfo(), 0);

	for (u16 i = 0; i < modelData->getMaterialNum(); i++) {
		j3dSys.setMatPacket(j3dModel->getMatPacket(i));
		modelData->getMaterialNodePointer(i)->diff(j3dSys.getMatPacket()->getShapePacket()->mDiffFlag);
	}
}

/**
 * @note Address: 0x803A8264
 * @note Size: 0x50
 */
void Obj::getShadowParam(ShadowParam& shadowParam)
{
	shadowParam.mPosition                 = mChestJointPosition;
	shadowParam.mPosition.y               = mPosition.y + 2.0f;
	shadowParam.mBoundingSphere.mPosition = Vector3f(0.0f, 1.0f, 0.0f);
	shadowParam.mBoundingSphere.mRadius   = 50.0f;
	shadowParam.mSize                     = 30.0f;
}

/**
 * @note Address: 0x803A82B4
 * @note Size: 0x64
 */
void Obj::initWalkSmokeEffect()
{
	mWalkSmokeMgr.alloc(2);
	mWalkSmokeMgr.setup(0, mModel, "footR", 10.0f);
	mWalkSmokeMgr.setup(1, mModel, "footL", 10.0f);
}

/**
 * @note Address: 0x803A8318
 * @note Size: 0x1C
 */
WalkSmokeEffect::Mgr* Obj::getWalkSmokeEffectMgr()
{
	if (mTyre) {
		return nullptr;
	}
	return &mWalkSmokeMgr;
}

/**
 * @note Address: 0x803A8334
 * @note Size: 0x848
 */
void Obj::walkFunc()
{
	if (mTyre && mTyre->isEvent(0, EB_Bittered)) {
		return;
	}

	if (isTyreFreeze()) {
		mFSM->transit(this, WRAITH_Bend, nullptr);
		mFreezeTimer = 0;
		return;
	}

	if (isOnTyres()) {
		mHealth += 5.0f;
		if (mHealth > mMaxHealth) {
			mHealth = mMaxHealth;
		}
	}

	f32 moveSpeed, rotationSpeed, turnSpeed; // f31, f30, f29
	moveSpeed     = C_GENERALPARMS.mMoveSpeed();
	rotationSpeed = C_GENERALPARMS.mMaxTurnAngle();
	turnSpeed     = C_GENERALPARMS.mTurnSpeed();

	if (C_PARMS->mForcedStepPhase >= 0) {
		mStepPhase = C_PARMS->mForcedStepPhase;
	} else {
		mStepTimer++;
	}

	if (mStepPhase == 0) {
		if (mStepTimer > C_PROPERPARMS.mTimerToTwoStep) {
			mStepPhase = 1;
			mStepTimer = 0;
			mFadeTimer = 0.0f;
		}
	} else {
		moveSpeed     = C_PROPERPARMS.mTravelSpeed();
		rotationSpeed = C_PROPERPARMS.mMaxRotationStep();
		turnSpeed     = C_PROPERPARMS.mRotationSpeed();
	}

	if (mEscapePhase == 2) {
		Navi* targetNavi = naviMgr->getActiveNavi();
		f32 escapeSpeed  = C_PROPERPARMS.mEscapeSpeed();
		if (targetNavi) {
			Vector3f naviPosition = targetNavi->getPosition();

			bool isAnimEnd = false;

			f32 sqrDist = mPosition.sqrDistance2D(naviPosition);

			if (mCurAnim->mIsPlaying && mCurAnim->mType == KEYEVENT_END) {
				isAnimEnd = true;
			}

			if (sqrDist > SQUARE(800.0f)) {
				mEscapeTimer = 0;
				if (getCurrAnimIndex() != WRAITHANIM_Wait) {
					finishMotion();
				}
				if (isAnimEnd) {
					startMotion(WRAITHANIM_Wait, nullptr);
				}
			} else if (sqrDist > SQUARE(400.0f)) {
				mEscapeTimer = 0;
				if (getCurrAnimIndex() != WRAITHANIM_Walk) {
					finishMotion();
				}
				if (isAnimEnd) {
					startMotion(WRAITHANIM_Walk, nullptr);
				}
			} else {
				mEscapeTimer++;
				if (mEscapeTimer > C_PROPERPARMS.mContinuousEscapeTimerLength() || getCurrAnimIndex() != WRAITHANIM_Run) {
					finishMotion();
				}
				if (isAnimEnd) {
					if (mEscapeTimer > C_PROPERPARMS.mContinuousEscapeTimerLength()) {
						mEscapeTimer = 0;
						mFSM->transit(this, WRAITH_Tired, nullptr);
					} else {
						startMotion(WRAITHANIM_Run, nullptr);
					}
				}
			}
		}
		if (getCurrAnimIndex() == WRAITHANIM_Wait) {
			escapeSpeed = 0.0f;
		}

		if (getCurrAnimIndex() == WRAITHANIM_Walk) {
			escapeSpeed = C_PROPERPARMS.mWalkingSpeed();
		}

		mEscapeMoveSpeed += (escapeSpeed - mEscapeMoveSpeed) * 0.2f;
		moveSpeed     = mEscapeMoveSpeed;
		rotationSpeed = C_PROPERPARMS.mMaxEscapeRotationStep();
		turnSpeed     = C_PROPERPARMS.mEscapeRotationSpeed();
	} else if (ItemOnyon::mgr && ItemOnyon::mgr->mPod) {
		Vector3f podPos = ItemOnyon::mgr->mPod->getPosition();
		bool isAnimEnd  = false;
		f32 sqrDist     = mPosition.sqrDistance2D(podPos);

		if (mCurAnim->mIsPlaying && mCurAnim->mType == KEYEVENT_END) {
			isAnimEnd = true;
		}

		if (sqrDist < SQUARE(100.0f)) {
			if (getCurrAnimIndex() == WRAITHANIM_Move) {
				finishMotion();
			}
			if (isAnimEnd) {
				startMotion(WRAITHANIM_Through, nullptr);
			}
		} else {
			if (getCurrAnimIndex() == WRAITHANIM_Through) {
				finishMotion();
			}
			if (isAnimEnd) {
				startMotion(WRAITHANIM_Move, nullptr);
			}
		}
	}
	if (mTyre && C_PARMS->mStartPhase != mEscapePhase) {
		mEscapePhase = C_PARMS->mStartPhase;
		if (mEscapePhase == 4) {
			mCurrentVelocity = Vector3f(0.0f);
			mTargetVelocity  = Vector3f(0.0f);
			setPathFinder(false);
		} else {
			mFoundPath = 0;
			releasePathFinder();
		}
	}

	if (mEscapePhase == 4) {
		if (isEndPathFinder()) {
			moveSpeed = C_PROPERPARMS.mPodMoveSpeed();
		} else {
			return;
		}
	}

	Vector3f deltaPosition = mTargetPosition - mPosition;

	if (FABS(mTargetPosition.x - mPosition.x) < 100.0f && FABS(mTargetPosition.z - mPosition.z) < 100.0f) {

	} else {
		_2E4 = 0;
	}
	if (mTyre) {
		mTyre->mFaceDirection = mFaceDir;
	}
	f32 prevFaceDir = mFaceDir;
	EnemyFunc::walkToTarget(this, mTargetPosition, moveSpeed, turnSpeed, rotationSpeed);

	if (mTyre) {
		Vector3f sep                = mPosition - mTyre->mWraithPosition;
		f32 distance                = sep.length2D();
		mTyre->mSingleRotationRatio = distance / WRAITH_ROLLER_CIRCUMFERENCE;
		EnemyBase* tyre             = mTyre;
		tyre->mFaceDir              = mFaceDir;
		tyre->mRotation.y           = tyre->mFaceDir;
	}

	if (mRouteFindTimer == 0) {
		mRouteFindCooldownTimer++;
		if (mRouteFindCooldownTimer > 60) {
			if (mPosition.sqrDistance2D(mNextRoutePos) < SQUARE(10.0f)) {
				mRouteFindTimer = 120;
				findNextRoutePoint();
			}
			mNextRoutePos           = mPosition;
			mRouteFindCooldownTimer = 0;
		}
	}

	bool isInTurn = false; // lets the wraith do SICK DRIFTS
	// turn inline hell is here
	f32 angleDist = getAngDist(mTargetPosition);

	if (fabs((int)(angleDist > 0.25f))) {
		isInTurn = true;
	}
	if (!isInTurn) {
		// f32 turnSpeed2 = clamp(angleDist - prevFaceDir, 0.25f);

		if (absF(prevFaceDir - mFaceDir) > 0.05f) {
			isInTurn = true;
		}
	}

	if (isInTurn) {
		mCurrentVelocity.x *= 0.5f;
		mCurrentVelocity.z *= 0.5f;
	}

	if (mTyre) {
		if (mStepPhase == 0) {
			mSoundObj->startSound(PSSE_EN_KAGE_ZURUZURU, 0);
			mTyre->mSoundObj->startSound(PSSE_EN_KAGE_ROLLER, 0);
			mTyre->mSoundObj->startSound(PSSE_EN_KAGE_MELODYLOOP, 0);
		} else {
			JAISound* zuruzuru = mSoundObj->startSound(PSSE_EN_KAGE_ZURUZURU, 0);
			if (zuruzuru) {
				zuruzuru->setPitch(1.4f, 0, SOUNDPARAM_Unk0);
			}
			mTyre->mSoundObj->startSound(PSSE_EN_KAGE_ROLLER, 0);
			mTyre->mSoundObj->startSound(PSSE_EN_KAGE_MELODYLOOP, 0);
		}
	}
}

/**
 * @note Address: 0x803A8B7C
 * @note Size: 0x34
 */
bool Obj::isReachToGoal(f32 rad)
{
	return (u8)(mPosition.sqrDistance2D(mTargetPosition) < SQUARE(rad));
}

/**
 * @note Address: 0x803A8BB0
 * @note Size: 0xED0
 */
void Obj::findNextRoutePoint()
{
	if (mFoundPath || mEscapePhase == 4) {
		findNextTraceRoutePoint();
		return;
	}

	RouteMgr* routeMgr = mapMgr->mRouteMgr;
	if (mRouteFindTimer > 0) {
		if (mPreviousWaypointIndex == mCurrentWaypointIndex && mCurrentWaypointIndex == mNextWaypointIndex) {
			mTargetPosition = mHomePosition;
			return;
		}

		mRouteFindTimer = 0;

		WPEdgeSearchArg edgeArg(mPosition);
		if (routeMgr->getNearestEdge(edgeArg)) {
			s16 nextIdx = mCurrentWaypointIndex;  // r24
			s16 prevIdx = mPreviousWaypointIndex; // r25
			if (!edgeArg.mWp1->isFlag(WPF_Closed)) {
				if (routeMgr->getWayPoint(edgeArg.mWp1->mIndex)->mNumFromLinks == 1 && !edgeArg.mWp2->isFlag(WPF_Closed)) {
					mPreviousWaypointIndex = mCurrentWaypointIndex;
					mCurrentWaypointIndex  = edgeArg.mWp2->mIndex;
				} else {
					mCurrentWaypointIndex = edgeArg.mWp1->mIndex;
					if (routeMgr->getWayPoint(edgeArg.mWp2->mIndex)->mNumFromLinks > 1 && !edgeArg.mWp2->isFlag(WPF_Closed)) {
						mPreviousWaypointIndex = edgeArg.mWp2->mIndex;
					} else {
						mPreviousWaypointIndex = mCurrentWaypointIndex;
					}
				}
			} else {
				mCurrentWaypointIndex = edgeArg.mWp2->mIndex;
				if (routeMgr->getWayPoint(edgeArg.mWp1->mIndex)->mNumFromLinks > 1 && !edgeArg.mWp1->isFlag(WPF_Closed)) {
					mPreviousWaypointIndex = edgeArg.mWp1->mIndex;
				} else {
					mPreviousWaypointIndex = mCurrentWaypointIndex;
				}
			}

			if (mCurrentWaypointIndex == nextIdx && mPreviousWaypointIndex == prevIdx) {
				mTargetPosition = mPosition;
				mTargetPosition.x -= 100.0f * sinf(mFaceDir);
				mTargetPosition.z -= 100.0f * cosf(mFaceDir);
				return;
			}

			mPreviousWaypointIndex = mCurrentWaypointIndex;
			mTargetPosition        = Vector3f(routeMgr->getWayPoint(mCurrentWaypointIndex)->mPosition);
			return;
		}
	}

	WayPoint* currWP = routeMgr->getWayPoint(mCurrentWaypointIndex);

#if defined(VERSION_JP)
	P2ASSERTLINE(1552, currWP);
#else
	P2ASSERTLINE(1557, currWP);
#endif

	int counter = 0;
	s16 indices[8];
	WayPointIterator wpIter(currWP, true);
	CI_LOOP(wpIter)
	{
		s16 index    = *wpIter;
		WayPoint* wp = routeMgr->getWayPoint(index);

		// this is insane but here we are
		const Vector3f& pos = wp->getPosition();

		if (wp && !wp->isFlag(WPF_Closed) && wp->mNumToLinks + wp->mNumFromLinks > 1) {
			indices[counter] = index;
			counter++;
		}
	}

	if (counter == 0) {
		WayPointIterator wpIter(currWP, true);
		CI_LOOP(wpIter)
		{
			s16 index    = *wpIter;
			WayPoint* wp = routeMgr->getWayPoint(index);

			if (wp && !wp->isFlag(WPF_Closed)) {
				indices[counter] = index;
				counter++;
			}
		}
	}

	if (counter) {
		int val     = -1;                                       // r28
		bool check  = false;                                    // r27
		f32 minDist = SQUARE(C_GENERALPARMS.mSearchDistance()); // f31
		int targetWPIdx;                                        // r26
		switch (mEscapePhase) {
		case 0: {
			targetWPIdx = randInt(counter);
		} break;
		case 1: {
			for (int i = 0; i < counter; i++) {
				Iterator<Piki> iter(pikiMgr);
				s16 idx = indices[i];
				if (mPreviousWaypointIndex == idx) {
					if (mIsSameWaypoint || !C_PARMS->mWaypointCalcType) {
						continue;
					}

					check = true;
				}

				WayPoint* wp = routeMgr->getWayPoint(idx);

				CI_LOOP(iter)
				{
					Piki* piki = *iter;
					if (piki->isAlive() && piki->isStickTo()) {
						f32 sqrDist = sqrDistance2D(piki->getPosition().x, piki->getPosition().z, wp->getPosition().x, wp->getPosition().z);
						if (sqrDist < minDist) {
							minDist = sqrDist;
							val     = i;
						}
					}
				}

				Navi* activeNavi = naviMgr->getActiveNavi();
				if (activeNavi && activeNavi->isAlive()) {
					f32 sqrDist
					    = sqrDistance2D(activeNavi->getPosition().x, activeNavi->getPosition().z, wp->getPosition().x, wp->getPosition().z);
					if (sqrDist < minDist) {
						minDist = sqrDist;
						val     = i;
					}
				}
			}

			if (val < 0) {
				for (int i = 0; i < 100; i++) {
					if (mPreviousWaypointIndex != indices[targetWPIdx = randInt(counter)]) {
						break;
					}
				}
			} else {
				targetWPIdx = val;
			}
		} break;
		case 2: {
			f32 minNaviDist = 1000000.0f;
			for (int i = 0; i < counter; i++) {
				s16 idx = indices[i];
				if (mPreviousWaypointIndex != idx) {
					WayPoint* wp     = routeMgr->getWayPoint(idx);
					Navi* activeNavi = naviMgr->getActiveNavi();
					if (activeNavi) {
						f32 dist = sqrDistance(activeNavi->getPosition().x, activeNavi->getPosition().y, activeNavi->getPosition().z,
						                       wp->getPosition().x, wp->getPosition().y, wp->getPosition().z);
						if (dist < minNaviDist) {
							minNaviDist = dist;
							val         = i;
						}
					}
				}
			}

			if (val < 0 || counter <= 2) {
				targetWPIdx = randInt(counter);
			} else {
				for (int i = 0; i < 10; i++) { // try ten times to get a value different from "val"
					targetWPIdx = (int)(counter * randFloat());
					if (targetWPIdx != val) {
						break;
					}

					targetWPIdx = -1;
				}

				if (targetWPIdx < 0) {
					targetWPIdx = val;
				}
			}
		} break;
		case 3: {
			f32 maxDot = 0.0f;
			for (int i = 0; i < counter; i++) {
				s16 idx = indices[i];
				if (mPreviousWaypointIndex == idx) {
					continue;
				}

				WayPoint* wp1   = routeMgr->getWayPoint(mCurrentWaypointIndex);
				Vector3f wp1Pos = wp1->mPosition;
				WayPoint* wp2   = routeMgr->getWayPoint(mPreviousWaypointIndex);
				Vector3f wp2Pos = wp2->mPosition;
				Vector3f sep    = Vector3f(wp1Pos.x - wp2Pos.x, 0.0f, wp1Pos.z - wp2Pos.z); // 0xd4

				sep.normalise();

				Vector3f yAxis(0.0f, 1.0f, 0.0f);
				Vector3f crossVec; // 0xbc
				PSVECCrossProduct((Vec*)&yAxis, (Vec*)&sep, (Vec*)&crossVec);

				crossVec.normalise();

				WayPoint* wp = routeMgr->getWayPoint(idx);

				Vector3f sep2;
				sep2.x = wp->mPosition.x - mPosition.x;
				sep2.y = wp->mPosition.y - mPosition.y;
				sep2.z = wp->mPosition.z - mPosition.z;
				sep2.normalise();

				f32 dotProd = crossVec.dot(sep2);
				if (dotProd > maxDot) {
					maxDot = dotProd;
					val    = i;
				}
			}

			if (val < 0) {
				targetWPIdx = randInt(counter);
			} else {
				targetWPIdx = val;
			}
		} break;
		}

		if (targetWPIdx >= counter) {
			targetWPIdx = counter - 1;
		}

		s16 idx            = indices[targetWPIdx];
		WayPoint* targetWP = routeMgr->getWayPoint(idx);
		if (check || counter == 1 || idx != mPreviousWaypointIndex) {
			if (mPreviousWaypointIndex == idx) {
				mIsSameWaypoint = true;
			} else {
				mIsSameWaypoint = false;
			}

			mPreviousWaypointIndex = mCurrentWaypointIndex;
			mCurrentWaypointIndex  = idx;
		}
	}

	WayPoint* wp = routeMgr->getWayPoint(mCurrentWaypointIndex);
	if (wp) {
		mTargetPosition = Vector3f(wp->mPosition);
	}
}

/**
 * @note Address: 0x803A9A80
 * @note Size: 0xD0
 */
void Obj::findNextTraceRoutePoint()
{
	if (!mPath) {
		return;
	}
	FOREACH_NODE(PathNode, mPath, node)
	{
		if (node->mWpIndex != mCurrentWaypointIndex) {
			continue;
		}

		mPreviousWaypointIndex = mCurrentWaypointIndex;

		PathNode* nextNode = node->mNext;
		if (nextNode) {
			mCurrentWaypointIndex = nextNode->mWpIndex;
		} else {
			mCurrentWaypointIndex = mNextWaypointIndex;
		}

		mTargetPosition = Vector3f(mapMgr->mRouteMgr->getWayPoint(mCurrentWaypointIndex)->mPosition);
		return;
	}

#if defined(VERSION_JP)
	JUT_PANICLINE(1833, "failed traceRoutePoint\n");
#else
	JUT_PANICLINE(1838, "failed traceRoutePoint\n");
#endif
}

/**
 * @note Address: 0x803A9B50
 * @note Size: 0x114
 */
bool Obj::isEndPathFinder()
{
	if (mFoundPath) {
		return true;
	}

#if defined(VERSION_JP)
	P2ASSERTLINE(1845, testPathfinder);
#else
	P2ASSERTLINE(1850, testPathfinder);
#endif

	switch (testPathfinder->check(mPathFindingHandle)) {
	case PATHFIND_MakePath:
		testPathfinder->makepath(mPathFindingHandle, &mPath);
		mFoundPath = 1;
		return true;

	case PATHFIND_Busy:
		mFoundPath = 0;
		return false;

	case PATHFIND_Start:
		mFoundPath = 0;
		setPathFinder(true);
		return false;

	case PATHFIND_NoHandle:
#if defined(VERSION_JP)
		JUT_PANICLINE(1865, "no handle pathFinder\n");
#else
		JUT_PANICLINE(1870, "no handle pathFinder\n");
#endif
		mFoundPath = 0;
		return false;
	}

	return false;
}

/**
 * @note Address: 0x803A9C64
 * @note Size: 0x1D8
 */
bool Obj::setPathFinder(bool check)
{
	releasePathFinder();
	WPEdgeSearchArg edgeArg(mPosition);
	RouteMgr* routeMgr = mapMgr->mRouteMgr;
#if defined(VERSION_JP)
	P2ASSERTLINE(1888, routeMgr);
#else
	P2ASSERTLINE(1893, routeMgr);
#endif

	if (routeMgr->getNearestEdge(edgeArg)) {
		WayPoint* wp1   = edgeArg.mWp1;
		WayPoint* wp2   = edgeArg.mWp2;
		s16 idx1        = wp1->mIndex;
		s16 idx2        = wp2->mIndex;
		Vector3f wp1Pos = wp1->mPosition;
		Vector3f wp2Pos = wp2->mPosition;
		if (wp1Pos.sqrDistance2D(mHomePosition) > wp2Pos.sqrDistance2D(mHomePosition)) {
			idx2 = wp1->mIndex;
			idx1 = wp2->mIndex;
		}

		if (routeMgr->getWayPoint(idx1)->isFlag(WPF_Closed)) {
			idx1 = idx2;
		}

		mPreviousWaypointIndex = mCurrentWaypointIndex;
		mCurrentWaypointIndex  = idx1;

		int flag = (check) ? (PATHFLAG_PathThroughWater | PATHFLAG_AllowUnvisited | PATHFLAG_TwoWayPathing)
		                   : (PATHFLAG_RequireOpen | PATHFLAG_PathThroughWater | PATHFLAG_AllowUnvisited | PATHFLAG_TwoWayPathing);

		if (mPathFindingHandle) {
			testPathfinder->release(mPathFindingHandle);
		}

		PathfindRequest request(mCurrentWaypointIndex, mNextWaypointIndex, flag);
		mPathFindingHandle = testPathfinder->start(request);
		mTargetPosition    = Vector3f(routeMgr->getWayPoint(mCurrentWaypointIndex)->mPosition);
		return true;
	}

#if defined(VERSION_JP)
	JUT_PANICLINE(1929, nullptr);
#else
	JUT_PANICLINE(1934, nullptr);
#endif
	return false;
}

/**
 * @note Address: 0x803A9E3C
 * @note Size: 0x44
 */
void Obj::releasePathFinder()
{
	mFoundPath = 0;
	if (testPathfinder && mPathFindingHandle) {
		testPathfinder->release(mPathFindingHandle);
	}
}

/**
 * @note Address: 0x803A9E80
 * @note Size: 0x590
 */
void Obj::jointMtxCalc(int jointIdx)
{
	int stateID = getStateID();
	if (jointIdx < 2 && (stateID == WRAITH_Flick || stateID == WRAITH_Recover)) {
		if (isEvent(0, EB_Bittered) || !mTyre->isEvent(0, EB_Bittered)) {
			return;
		}
	}

	Tyre::Obj* tyre = mTyre;
	if (!tyre) {
		return;
	}

	if (jointIdx >= 4) {
		return;
	}

	char* tyreJoints[4]     = { "tyreFL", "TyreFR", "TyreBL", "tyreBR" };         // 0x48; the capitalisation here annoys me so much
	char* handJoints[4]     = { "handLend", "handRend", "footL", "footR" };       // 0x38
	char* wristJoints[4]    = { "handL", "handR", "legBL", "legBR" };             // 0x28
	char* armJoints[4]      = { "armBL", "armBR", "legTL", "legTR" };             // 0x18
	char* shoulderJoints[4] = { "shoulderL", "shoulderR", "clouchL", "clouchR" }; // 0x8

	Matrixf* tyreMat = tyre->mModel->getJoint(tyreJoints[jointIdx])->getWorldMatrix(); // r29
	Matrixf* handMat = mModel->getJoint(handJoints[jointIdx])->getWorldMatrix();

	f32 val = 15.0f; // f7
	if (mStepPhase < 1) {
		val = 0.0f;
	}

	if (jointIdx < 2) {
		val = 0.0f;
	}

	if (jointIdx % 2 != 0) {
		val = -val;
	}

	Vector2f yScale(0.0f, val);
	Vector3f newPos  = tyreMat->getScaledTranslation(yScale);
	Vector3f handPos = handMat->getColumn(3);
	Vector3f diff    = newPos - handPos; // f31, f30, f29
	handMat->setTranslation(newPos);

	PSMTXCopy(handMat->mMatrix.mtxView, J3DSys::mCurrentMtx);

	Matrixf* wristMat = mModel->getJoint(wristJoints[jointIdx])->getWorldMatrix(); // r30
	Matrixf* armMat   = mModel->getJoint(armJoints[jointIdx])->getWorldMatrix();   // r31

	f32 scale1 = C_PARMS->mWristScale;
	f32 scale2 = C_PARMS->mArmScale;

	Vector3f vec1 = diff; // f28, f27, f26
	vec1 *= scale1;
	if (jointIdx < 2) {
		scale2 = 0.1f;
	}

	Vector3f vec2 = diff * scale2;   // f25, f24, f23
	Vector3f vec3(0.0f, 0.0f, 0.0f); // f22, f21, f20

	if (jointIdx < 2 && C_PARMS->mUseTyreForJointCalc) {
		f32 sinVal1 = C_PARMS->mArmRotationA * absF(sinf(mTyre->mCurrentRotation2)); // f23
		f32 sinVal2 = C_PARMS->mArmRotationB * absF(sinf(mTyre->mCurrentRotation2)); // f24
		vec2.y      = sinVal2;
		getStateID(); // unused

		if (mTyre->mCurrentRotation2 < 0.0f) {
			if (jointIdx == 0) {
				vec3.y = sinVal2;
				vec3.x = tyreMat->mMatrix.structView.xx * sinVal1;
				vec3.z = tyreMat->mMatrix.structView.xz * sinVal1;
			}
		} else if (jointIdx == 1) {
			vec3.y = sinVal2;
			vec3.x = -tyreMat->mMatrix.structView.xx * sinVal1;
			vec3.z = -tyreMat->mMatrix.structView.xz * sinVal1;
		}

		if (!C_PARMS->mArmFollowType) {
			vec2.x = vec3.x;
			vec2.z = vec3.z;
		} else {
			Vector3f tyreMatPos = tyreMat->getColumn(3);
			vec2.x              = vec3.x + (tyreMatPos.x - mTyre->mTyrePositions[jointIdx].x);
			vec2.y              = vec3.y + (tyreMatPos.y - mTyre->mTyrePositions[jointIdx].y);
			vec2.z              = vec3.z + (tyreMatPos.z - mTyre->mTyrePositions[jointIdx].z);
		}
	}

	wristMat->mMatrix.structView.tx += vec1.x;
	wristMat->mMatrix.structView.ty += vec1.y;
	wristMat->mMatrix.structView.tz += vec1.z;

	armMat->mMatrix.structView.tx += vec2.x;
	armMat->mMatrix.structView.ty += vec2.y;
	armMat->mMatrix.structView.tz += vec2.z;

	Matrixf* shoulderMat = mModel->getJoint(shoulderJoints[jointIdx])->getWorldMatrix();

	Vector3f vec4 = diff * C_PARMS->mShoulderScale;

	if (jointIdx < 2) {
		vec2 *= C_PARMS->mShoulderScale;
		vec4 = vec2;
	}

	shoulderMat->mMatrix.structView.tx += vec4.x;
	shoulderMat->mMatrix.structView.ty += vec4.y;
	shoulderMat->mMatrix.structView.tz += vec4.z;
}

/**
 * @note Address: 0x803AA410
 * @note Size: 0x28C
 */
void Obj::bodyMtxCalc()
{
	if (!C_PARMS->mUseTyreForJointCalc) {
		return;
	}

	Matrixf* chestMtx = mModel->mJoints[mChestJointIndex].getWorldMatrix(); // r31

	Vector3f pos; // f4, f5, f0

	char* tyreJoints[2] = { "tyreFL", "TyreFR" };
	if (mTyre->mCurrentRotation2 > 0.0f) {
		pos = mTyre->mModel->getJoint(tyreJoints[0])->getWorldMatrix()->getColumn(3);
	} else {
		pos = mTyre->mModel->getJoint(tyreJoints[1])->getWorldMatrix()->getColumn(3);
	}

	pos -= mPosition;
	pos.normalise();

	f32 sinVal = absF(sinf(mTyre->mCurrentRotation2));
	chestMtx->mMatrix.structView.tx += sinVal * (C_PARMS->mBodyMoveRate * pos.x);
	chestMtx->mMatrix.structView.tz += sinVal * (C_PARMS->mBodyMoveRate * pos.z);

	PSMTXCopy(chestMtx->mMatrix.mtxView, J3DSys::mCurrentMtx);

	Vector3f translation(0.0f, 0.0f, 0.0f); // 0x1c
	f32 yRot = -C_PARMS->mBodyRotationSpeed * sinf(mTyre->mCurrentRotation2);
	Vector3f rotation(0.0f, yRot, 0.0f);

	Matrixf mat;
	mat.makeTR(translation, rotation);

	PSMTXConcat(chestMtx->mMatrix.mtxView, mat.mMatrix.mtxView, chestMtx->mMatrix.mtxView);
	PSMTXConcat(J3DSys::mCurrentMtx, mat.mMatrix.mtxView, J3DSys::mCurrentMtx);
}

/**
 * @note Address: 0x803AA69C
 * @note Size: 0x40
 */
bool Obj::isTyreFreeze()
{
	if (mTyre && mTyre->isFreeze()) {
		return true;
	}

	return false;
}

/**
 * @note Address: 0x803AA6DC
 * @note Size: 0x9C
 */
bool Obj::isTyreDead()
{
	if (mTyre && mTyre->mHealth <= 0.0f) {
		if (mAnimator->getAnimator().isFlag(SysShape::Animator::AnimCompleted)) {
			mTyre->enableEvent(0, EB_Invulnerable);
			mTyre        = nullptr;
			mEscapePhase = 2;
			return true;
		}

		finishMotion();
	}

	return false;
}

/**
 * @note Address: 0x803AA778
 * @note Size: 0x74
 */
bool Obj::isFallEnd()
{
	bool result = false;
	if (mFloorTriangle) {
		result = true;
	}

	if (mTyre && (mTyre->isFreeze() || mTyre->mLandedOnPellet)) {
		result = true;
	}

	return result;
}

/**
 * @note Address: 0x803AA7EC
 * @note Size: 0x1D4
 */
void Obj::moveRestart()
{
	if (!mTyre) {
		return;
	}

	mTyre->moveStart();
	mTyre->mDoUseFrontTyreHoldCalc = 0;

	if (gameSystem && gameSystem->isZukanMode()) {
		mHasStartedChaseBgm = false;
	} else if (!isFinalFloor() && !mHasStartedChaseBgm && !mIsMoviePlaying && gameSystem->mSection
	           && gameSystem->mSection->getCaveID() == 'y_04') {
		PSSystem::SceneMgr* mgr = PSSystem::getSceneMgr();
		PSSystem::validateSceneMgr(mgr);
		mgr->checkScene();
		PSSystem::SeqBase* seqBase = PSSystem::getSeqData(mgr, 1);
#if defined(VERSION_JP)
		P2ASSERTLINE(2216, seqBase);
#else
		P2ASSERTLINE(2221, seqBase);
#endif
		seqBase->startSeq();
		mHasStartedChaseBgm = true;
	}

	EnemyFunc::flickStickPikmin(mTyre, C_GENERALPARMS.mShakeChance(), C_GENERALPARMS.mShakeKnockback(), C_GENERALPARMS.mShakeDamage(),
	                            FLICK_BACKWARD_ANGLE, nullptr);
}

/**
 * @note Address: 0x803AA9C0
 * @note Size: 0x4
 */
void Obj::escape()
{
}

/**
 * @note Address: 0x803AA9C4
 * @note Size: 0x8
 */
void Obj::setTimer(f32 time)
{
	mWraithFallTimer = time;
}

/**
 * @note Address: 0x803AA9CC
 * @note Size: 0x8
 */
f32 Obj::getTimer()
{
	return mWraithFallTimer;
}

/**
 * @note Address: 0x803AA9D4
 * @note Size: 0xA0
 */
void Obj::collisionStOn()
{
	mCollTree->getCollPart('kosi')->mSpecialID = 'st__';
	mCollTree->getCollPart('mune')->mSpecialID = 'st__';
	mCollTree->getCollPart('head')->mSpecialID = 'st__';

	if (getCurrAnimIndex() != WRAITHANIM_Wait2) {
		mFadeTimer = 0.0f;
	}
}

/**
 * @note Address: 0x803AAA74
 * @note Size: 0x98
 */
void Obj::collisionStOff()
{
	mCollTree->getCollPart('kosi')->mSpecialID = '____';
	mCollTree->getCollPart('mune')->mSpecialID = '____';
	mCollTree->getCollPart('head')->mSpecialID = '____';

	mFadeTimer = 0.0f;
	flick();
}

/**
 * @note Address: 0x803AAB0C
 * @note Size: 0x4C
 */
void Obj::flick()
{
	EnemyFunc::flickStickPikmin(this, C_GENERALPARMS.mShakeChance(), C_GENERALPARMS.mShakeKnockback(), C_GENERALPARMS.mShakeDamage(),
	                            FLICK_BACKWARD_ANGLE, nullptr);
	mFlickTimer = 0.0f;
}

/**
 * @note Address: 0x803AAB58
 * @note Size: 0x150
 */
void Obj::recover()
{
	if (!mTyre) {
		return;
	}

	if (!isEvent(0, EB_Bittered) && mTyre->isEvent(0, EB_Bittered)) {
		if (getMotionFrame() >= 5.0f) {
			f32 animScale = 0.5f;
			setAnimSpeed(getReverseAnimSpeed(animScale));
		} else if (getMotionFrame() < 1.0f) {
			setAnimSpeed(EnemyAnimatorBase::defaultAnimSpeed);
		}
	} else {
		resetAnimSpeed();
	}

	mTyre->mDoUseFrontTyreHoldCalc = 1;

	Matrixf* leftMtx  = mModel->mJ3dModel->mMtxBuffer->getWorldMatrix(mLeftHandJointIndex);  // r4
	Matrixf* rightMtx = mModel->mJ3dModel->mMtxBuffer->getWorldMatrix(mRightHandJointIndex); // r5

	Vector3f pos;
	pos.x = leftMtx->mMatrix.structView.tx + rightMtx->mMatrix.structView.tx;
	pos.y = leftMtx->mMatrix.structView.ty + rightMtx->mMatrix.structView.ty;
	pos.z = leftMtx->mMatrix.structView.tz + rightMtx->mMatrix.structView.tz;

	mTyre->mFrontTyreHeldPosition = Vector3f(pos.x * 0.5f, pos.y * 0.5f, pos.z * 0.5f);

	mLandPosition = mTyre->mFrontTyreHeldPosition;

	mTyre->mCurrentRotation2 *= 0.8f;
}

/**
 * @note Address: 0x803AACA8
 * @note Size: 0xF8
 */
void Obj::recoverFlick()
{
	f32 chance    = C_GENERALPARMS.mShakeChance();
	f32 knockback = C_GENERALPARMS.mShakeKnockback();
	f32 damage    = C_GENERALPARMS.mShakeDamage();
	f32 range     = C_GENERALPARMS.mShakeRange();

	if (mTyre) {
		EnemyFunc::flickStickPikmin(mTyre, chance, 2.0f * knockback, damage, mFaceDir, nullptr);
	}

	EnemyFunc::flickStickPikmin(this, chance, knockback, damage, mFaceDir, nullptr);
	EnemyFunc::flickNearbyPikmin(this, range, knockback, damage, mFaceDir, nullptr);
	EnemyFunc::flickNearbyNavi(this, range, knockback, damage, mFaceDir, nullptr);
}

/**
 * @note Address: 0x803AADA0
 * @note Size: 0x2C
 */
void Obj::tyreFlick()
{
	if (mTyre) {
		mTyre->flick();
	}
}

/**
 * @note Address: 0x803AADCC
 * @note Size: 0xD0
 */
void Obj::deadEffect()
{
	EnemyBase::createDeadBombEffect();
	throwupItem();
	PSStartEnemyFatalHitSE(this, 0.0f);
	efx::TKageDead2 deadFX;
	efx::ArgPrmColor fxArg(mChestJointPosition);
	deadFX.create(&fxArg);
}

/**
 * @note Address: 0x803AAE9C
 * @note Size: 0x34
 */
void Obj::deadTraceEffect()
{
	mEfxDead->create(nullptr);
}

/**
 * @note Address: 0x803AAED0
 * @note Size: 0x74
 */
void Obj::tyreUpEffect()
{
	if (mTyre && (isEvent(0, EB_Bittered) || !mTyre->isEvent(0, EB_Bittered))) {
		mTyre->fadeEfxHamon();
		mEfxTyreup->create(nullptr);
	}
}

/**
 * @note Address: 0x803AAF44
 * @note Size: 0x50
 */
void Obj::tyreDownEffect()
{
	if (mTyre) {
		mTyre->landEffect(mLandPosition);
		mTyre->createEfxHamon();
	}
}

/**
 * @note Address: 0x803AAF94
 * @note Size: 0x94
 */
void Obj::bendEffect()
{
	if (mTyre) {
		efx::TKageBend1 bendFX(mModel->getJoint("head")->getWorldMatrix());
		bendFX.create(nullptr);
	}
}

/**
 * @note Address: 0x803AB028
 * @note Size: 0x5C
 */
void Obj::createTraceEffect()
{
	if (mTyre) {
		mEfxMove->create(nullptr);
	} else {
		mEfxRun->create(nullptr);
	}
}

/**
 * @note Address: 0x803AB084
 * @note Size: 0x50
 */
void Obj::fadeTraceEffect()
{
	mEfxMove->fade();
	mEfxRun->fade();
}

/**
 * @note Address: 0x803AB0D4
 * @note Size: 0x58
 */
void Obj::createFlickEffect()
{
	mEfxFrontFlick->create(nullptr);
	mEfxBackFlick->create(nullptr);
}

/**
 * @note Address: 0x803AB12C
 * @note Size: 0x50
 */
void Obj::fadeFlickEffect()
{
	mEfxFrontFlick->fade();
	mEfxBackFlick->fade();
}

/**
 * @note Address: 0x803AB17C
 * @note Size: 0xC4
 */
bool Obj::isFinalFloor()
{
	if (gameSystem && gameSystem->isZukanMode()) {
		return false;
	}

	BaseGameSection* section = gameSystem->getSection();
	if (section && section->getCaveID() == 'y_04') { // submerged castle
		RoomMapMgr* roomMgr = static_cast<RoomMapMgr*>(mapMgr);
		if (roomMgr && roomMgr->mCaveInfo) {
			if (section->getCurrFloor() + 1 == roomMgr->mCaveInfo->getFloorMax()) {
				return true;
			}
		}
	}
	return false;
}

/**
 * @note Address: 0x803AB240
 * @note Size: 0x1C0
 */
void Obj::appearFanfare()
{
	if (!moviePlayer->isFlag(MVP_IsActive)) {
		return;
	}

	if (!mNeedAppearBgm) {
		return;
	}

	mNeedAppearBgm = false;

	PSSystem::SceneMgr* mgr = PSSystem::getSceneMgr();
	PSSystem::validateSceneMgr(mgr);
	PSSystem::Scene* scene = mgr->getChildScene();

	if (PSSystem::checkChildScene(scene)) {
		PSSystem::SceneMgr* mgr = PSSystem::getSceneMgr();
		PSSystem::validateSceneMgr(mgr);
		PSSystem::Scene* scene = mgr->getChildScene();
		PSSystem::checkChildScene(scene)->startMainSeq();
	}
}

} // namespace BlackMan
} // namespace Game
