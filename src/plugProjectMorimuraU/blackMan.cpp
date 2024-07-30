#include "types.h"
#include "Game/Entities/BlackMan.h"
#include "Game/generalEnemyMgr.h"
#include "efx/TKage.h"
#include "PSSystem/PSMainSide_ObjSound.h"
#include "PSM/EnemyBoss.h"
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
#include "PSSystem/Seq.h"
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
void Obj::birth(Vector3f& position, f32 faceDirection) { EnemyBase::birth(position, faceDirection); }

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

	_37C = modelData->mMaterialTable.mMaterials[kageMatIdx];

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
	_37C                = nullptr;
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
void BlackMan::Obj::doUpdate()
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

					// regswaps here
					Vector3f pos     = Vector3f(mPosition.x, 0.0f, mPosition.z);
					Vector3f naviPos = Vector3f(activeNavi->getPosition().x, 0.0f, activeNavi->getPosition().z);

					f32 sqrDist = sqrDistanceXZ(naviPos, pos);
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

	/*
	stwu     r1, -0x110(r1)
	mflr     r0
	stw      r0, 0x114(r1)
	stfd     f31, 0x100(r1)
	psq_st   f31, 264(r1), 0, qr0
	stfd     f30, 0xf0(r1)
	psq_st   f30, 248(r1), 0, qr0
	stfd     f29, 0xe0(r1)
	psq_st   f29, 232(r1), 0, qr0
	stfd     f28, 0xd0(r1)
	psq_st   f28, 216(r1), 0, qr0
	stw      r31, 0xcc(r1)
	stw      r30, 0xc8(r1)
	stw      r29, 0xc4(r1)
	lis      r4, lbl_80495670@ha
	mr       r30, r3
	addi     r31, r4, lbl_80495670@l
	bl       getStateID__Q24Game9EnemyBaseFv
	mr       r3, r30
	bl       isStopMotion__Q24Game9EnemyBaseFv
	mr       r3, r30
	bl       isFinishMotion__Q24Game9EnemyBaseFv
	lwz      r3, 0x360(r30)
	mr       r4, r30
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0x378(r30)
	lfs      f1, lbl_8051F480@sda21(r2)
	fcmpo    cr0, f2, f1
	bge      lbl_803A6E48
	lwz      r3, 0xc0(r30)
	lfs      f0, 0xa3c(r3)
	fadds    f0, f2, f0
	stfs     f0, 0x378(r30)
	lfs      f0, 0x378(r30)
	fcmpo    cr0, f0, f1
	ble      lbl_803A6CE8
	stfs     f1, 0x378(r30)

lbl_803A6CE8:
	lfs      f1, lbl_8051F480@sda21(r2)
	lis      r3, 0x6B6F7369@ha
	lfs      f0, 0x378(r30)
	addi     r4, r3, 0x6B6F7369@l
	lwz      r3, 0x114(r30)
	fsubs    f31, f1, f0
	bl       getCollPart__8CollTreeFUl
	lis      r4, 0x73745F5F@ha
	addi     r3, r3, 0x3c
	addi     r4, r4, 0x73745F5F@l
	bl       __eq__4ID32FUl
	clrlwi.  r0, r3, 0x18
	bne      lbl_803A6D2C
	mr       r3, r30
	bl       getStateID__Q24Game9EnemyBaseFv
	cmpwi    r3, 1
	bne      lbl_803A6D4C

lbl_803A6D2C:
	lfs      f1, lbl_8051F484@sda21(r2)
	lfs      f0, 0x378(r30)
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 0x60(r1)
	lwz      r0, 0x64(r1)
	stb      r0, 0x38f(r30)
	b        lbl_803A6E48

lbl_803A6D4C:
	lbz      r0, 0x38f(r30)
	lis      r3, 0x4330
	stw      r3, 0x60(r1)
	lfd      f3, lbl_8051F490@sda21(r2)
	stw      r0, 0x64(r1)
	lfd      f0, 0x60(r1)
	stw      r3, 0x78(r1)
	fsubs    f0, f0, f3
	stw      r3, 0x70(r1)
	fmuls    f0, f0, f31
	stw      r3, 0x90(r1)
	stw      r3, 0x88(r1)
	fctiwz   f0, f0
	stw      r3, 0xa8(r1)
	stfd     f0, 0x68(r1)
	lwz      r0, 0x6c(r1)
	stw      r3, 0xa0(r1)
	stb      r0, 0x38f(r30)
	lbz      r0, 0x384(r30)
	lbz      r3, 0x380(r30)
	stw      r0, 0x7c(r1)
	lfs      f0, 0x378(r30)
	lfd      f1, 0x78(r1)
	stw      r3, 0x74(r1)
	fsubs    f1, f1, f3
	lfd      f2, 0x70(r1)
	fsubs    f2, f2, f3
	fmuls    f0, f1, f0
	fmadds   f0, f2, f31, f0
	fctiwz   f0, f0
	stfd     f0, 0x80(r1)
	lwz      r0, 0x84(r1)
	stb      r0, 0x380(r30)
	lbz      r0, 0x385(r30)
	lbz      r3, 0x381(r30)
	stw      r0, 0x94(r1)
	lfs      f0, 0x378(r30)
	lfd      f1, 0x90(r1)
	stw      r3, 0x8c(r1)
	fsubs    f1, f1, f3
	lfd      f2, 0x88(r1)
	fsubs    f2, f2, f3
	fmuls    f0, f1, f0
	fmadds   f0, f2, f31, f0
	fctiwz   f0, f0
	stfd     f0, 0x98(r1)
	lwz      r0, 0x9c(r1)
	stb      r0, 0x381(r30)
	lbz      r0, 0x386(r30)
	lbz      r3, 0x382(r30)
	stw      r0, 0xac(r1)
	lfs      f0, 0x378(r30)
	lfd      f1, 0xa8(r1)
	stw      r3, 0xa4(r1)
	fsubs    f1, f1, f3
	lfd      f2, 0xa0(r1)
	fsubs    f2, f2, f3
	fmuls    f0, f1, f0
	fmadds   f0, f2, f31, f0
	fctiwz   f0, f0
	stfd     f0, 0xb0(r1)
	lwz      r0, 0xb4(r1)
	stb      r0, 0x382(r30)

lbl_803A6E48:
	lwz      r3, sys@sda21(r13)
	lfs      f1, 0x33c(r30)
	lfs      f0, 0x54(r3)
	fsubs    f0, f1, f0
	stfs     f0, 0x33c(r30)
	lwz      r0, 0x1e0(r30)
	rlwinm.  r0, r0, 0, 0xd, 0xd
	beq      lbl_803A72A4
	mr       r3, r30
	bl       getStateID__Q24Game9EnemyBaseFv
	cmpwi    r3, 5
	bne      lbl_803A72A4
	lwz      r3, 0xc0(r30)
	lwz      r0, 0x364(r30)
	lfs      f0, 0xa4c(r3)
	cmplwi   r0, 0
	fneg     f1, f0
	beq      lbl_803A6E9C
	lfs      f0, 0x33c(r30)
	fcmpo    cr0, f0, f1
	bge      lbl_803A6ED8

lbl_803A6E9C:
	mr       r3, r30
	bl       hardConstraintOff__Q24Game9EnemyBaseFv
	lwz      r3, 0x174(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x28c(r30)
	li       r4, 0x597b
	li       r5, 0
	lwz      r12, 0x28(r3)
	lwz      r12, 0x88(r12)
	mtctr    r12
	bctrl
	b        lbl_803A700C

lbl_803A6ED8:
	lbz      r0, 0x3a9(r30)
	lfs      f28, 0xa58(r3)
	cmplwi   r0, 0
	bne      lbl_803A700C
	fcmpo    cr0, f0, f28
	bge      lbl_803A700C
	lwz      r3, gameSystem__4Game@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_803A6F18
	lwz      r0, 0x44(r3)
	cmpwi    r0, 4
	bne      lbl_803A6F18
	li       r0, 1
	stb      r0, 0x3a9(r30)
	lwz      r3, 0x364(r30)
	stb      r0, 0x2d2(r3)

lbl_803A6F18:
	lwz      r3, naviMgr__4Game@sda21(r13)
	bl       getActiveNavi__Q24Game7NaviMgrFv
	lbz      r0, 0x3a9(r30)
	mr       r29, r3
	cmplwi   r0, 0
	bne      lbl_803A6FFC
	cmplwi   r29, 0
	beq      lbl_803A6FFC
	lwz      r12, 0(r3)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_803A6FFC
	mr       r4, r29
	addi     r3, r1, 0x14
	lwz      r12, 0(r29)
	lfs      f29, 0x194(r30)
	lwz      r12, 8(r12)
	lfs      f30, 0x18c(r30)
	mtctr    r12
	bctrl
	mr       r4, r29
	addi     r3, r1, 0x20
	lwz      r12, 0(r29)
	lfs      f31, 0x1c(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	fsubs    f0, f31, f29
	lfs      f1, 0x20(r1)
	mr       r3, r30
	fsubs    f1, f1, f30
	fmuls    f0, f0, f0
	fmadds   f29, f1, f1, f0
	bl       isFinalFloor__Q34Game8BlackMan3ObjFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_803A6FD0
	lwz      r3, 0xc0(r30)
	lfs      f0, 0xa54(r3)
	fmuls    f0, f0, f0
	fcmpo    cr0, f29, f0
	bge      lbl_803A6FE4
	li       r0, 1
	stb      r0, 0x3a9(r30)
	b        lbl_803A6FE4

lbl_803A6FD0:
	lfs      f0, lbl_8051F488@sda21(r2)
	fcmpo    cr0, f29, f0
	ble      lbl_803A6FE4
	li       r0, 1
	stb      r0, 0x3a9(r30)

lbl_803A6FE4:
	lbz      r0, 0x3a9(r30)
	cmplwi   r0, 0
	beq      lbl_803A6FFC
	lwz      r3, 0x364(r30)
	li       r0, 1
	stb      r0, 0x2d2(r3)

lbl_803A6FFC:
	lbz      r0, 0x3a9(r30)
	cmplwi   r0, 0
	bne      lbl_803A700C
	stfs     f28, 0x33c(r30)

lbl_803A700C:
	lwz      r3, 0x364(r30)
	cmplwi   r3, 0
	beq      lbl_803A72A4
	lwz      r0, 0x1e0(r3)
	rlwinm.  r0, r0, 0, 0xd, 0xd
	beq      lbl_803A72A4
	lfs      f1, 0x33c(r30)
	lfs      f0, lbl_8051F438@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_803A72A4
	lwz      r3, gameSystem__4Game@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_803A7258
	lwz      r0, 0x44(r3)
	cmpwi    r0, 4
	beq      lbl_803A7258
	lwz      r3, 0x58(r3)
	cmplwi   r3, 0
	beq      lbl_803A7258
	lwz      r12, 0(r3)
	lwz      r12, 0x78(r12)
	mtctr    r12
	bctrl
	addis    r0, r3, 0x86a1
	cmplwi   r0, 0x3034
	bne      lbl_803A7258
	lwz      r0, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_803A7094
	addi     r3, r31, 0x70
	addi     r5, r31, 0x28
	li       r4, 0x1d3
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803A7094:
	lwz      r29, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r29, 0
	bne      lbl_803A70B4
	addi     r3, r31, 0x70
	addi     r5, r31, 0x28
	li       r4, 0x1dc
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803A70B4:
	lwz      r0, 4(r29)
	cmplwi   r0, 0
	bne      lbl_803A70D4
	addi     r3, r31, 0x7c
	addi     r5, r31, 0x28
	li       r4, 0xc7
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803A70D4:
	lwz      r3, 4(r29)
	lwz      r29, 4(r3)
	cmplwi   r29, 0
	bne      lbl_803A70F8
	addi     r3, r31, 0x70
	addi     r5, r31, 0x28
	li       r4, 0x1e5
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803A70F8:
	addi     r3, r29, 0x10
	li       r4, 0
	bl       getSeq__Q28PSSystem6SeqMgrFUl
	or.      r29, r3, r3
	bne      lbl_803A7120
	addi     r3, r31, 0x70
	addi     r5, r31, 0x28
	li       r4, 0x1e7
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803A7120:
	cmplwi   r29, 0
	bne      lbl_803A713C
	addi     r3, r31, 0x18
	addi     r5, r31, 0x28
	li       r4, 0x1e9
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803A713C:
	mr       r3, r29
	li       r4, 5
	lwz      r12, 0x10(r29)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	mr       r3, r30
	bl       isFinalFloor__Q34Game8BlackMan3ObjFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_803A7258
	lwz      r3, playData__4Game@sda21(r13)
	li       r4, 0x32
	bl       isDemoFlag__Q24Game8PlayDataFi
	clrlwi.  r0, r3, 0x18
	bne      lbl_803A7258
	lwz      r0, moviePlayer__4Game@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_803A7258
	lfs      f0, lbl_8051F438@sda21(r2)
	li       r0, 0
	addi     r5, r31, 0x88
	stw      r0, 0x30(r1)
	mr       r4, r30
	addi     r3, r1, 8
	stw      r5, 0x2c(r1)
	stw      r0, 0x38(r1)
	stfs     f0, 0x44(r1)
	stfs     f0, 0x48(r1)
	stfs     f0, 0x4c(r1)
	stfs     f0, 0x50(r1)
	stw      r0, 0x54(r1)
	stw      r0, 0x3c(r1)
	stw      r0, 0x34(r1)
	stw      r0, 0x58(r1)
	stw      r0, 0x40(r1)
	stw      r0, 0x5c(r1)
	lwz      r12, 0(r30)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r3, mapMgr__4Game@sda21(r13)
	addi     r4, r30, 0x18c
	lfs      f29, 8(r1)
	lwz      r12, 4(r3)
	lfs      f30, 0x10(r1)
	lwz      r12, 0x28(r12)
	mtctr    r12
	bctrl
	stfs     f29, 0x44(r1)
	mr       r3, r30
	stfs     f1, 0x48(r1)
	stfs     f30, 0x4c(r1)
	lwz      r12, 0(r30)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	stfs     f1, 0x50(r1)
	addi     r4, r1, 0x2c
	lwz      r3, moviePlayer__4Game@sda21(r13)
	stw      r30, 0x194(r3)
	lwz      r3, moviePlayer__4Game@sda21(r13)
	bl       play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
	lwz      r3, 0x364(r30)
	li       r4, 0
	bl       movie_begin__Q24Game8CreatureFb
	lwz      r3, playData__4Game@sda21(r13)
	li       r4, 0x32
	bl       setDemoFlag__Q24Game8PlayDataFi
	li       r0, 1
	stb      r0, 0x3ab(r30)
	stb      r0, 0x3aa(r30)

lbl_803A7258:
	lbz      r0, 0x3ab(r30)
	cmplwi   r0, 0
	bne      lbl_803A7284
	lwz      r3, 0x364(r30)
	li       r4, 0x597b
	li       r5, 0
	lwz      r3, 0x28c(r3)
	lwz      r12, 0x28(r3)
	lwz      r12, 0x88(r12)
	mtctr    r12
	bctrl

lbl_803A7284:
	lwz      r3, 0x364(r30)
	bl       hardConstraintOff__Q24Game9EnemyBaseFv
	lwz      r3, 0x364(r30)
	lwz      r3, 0x174(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl

lbl_803A72A4:
	lbz      r0, 0x3a9(r30)
	cmplwi   r0, 0
	beq      lbl_803A72D0
	lfs      f1, 0x33c(r30)
	lfs      f0, lbl_8051F48C@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_803A72D0
	lwz      r3, 0x364(r30)
	cmplwi   r3, 0
	beq      lbl_803A72D0
	bl       scaleUpShadow__Q34Game4Tyre3ObjFv

lbl_803A72D0:
	psq_l    f31, 264(r1), 0, qr0
	lfd      f31, 0x100(r1)
	psq_l    f30, 248(r1), 0, qr0
	lfd      f30, 0xf0(r1)
	psq_l    f29, 232(r1), 0, qr0
	lfd      f29, 0xe0(r1)
	psq_l    f28, 216(r1), 0, qr0
	lfd      f28, 0xd0(r1)
	lwz      r31, 0xcc(r1)
	lwz      r30, 0xc8(r1)
	lwz      r0, 0x114(r1)
	lwz      r29, 0xc4(r1)
	mtlr     r0
	addi     r1, r1, 0x110
	blr
	*/
}

/**
 * @note Address: 0x803A730C
 * @note Size: 0x4
 */
void BlackMan::Obj::doDirectDraw(Graphics&) { }

/**
 * @note Address: 0x803A7310
 * @note Size: 0x20
 */
void BlackMan::Obj::doDebugDraw(Graphics& gfx) { EnemyBase::doDebugDraw(gfx); }

/**
 * @note Address: 0x803A7330
 * @note Size: 0x174
 */
void BlackMan::Obj::doSimulation(f32 speed)
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
void BlackMan::Obj::doAnimationCullingOff()
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
void BlackMan::Obj::onKill(Game::CreatureKillArg* arg)
{
	EnemyBase::onKill(arg);
	releasePathFinder();
	fadeFlickEffect();
}

/**
 * @note Address: 0x803A7718
 * @note Size: 0xDC
 */
void BlackMan::Obj::doStartStoneState()
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
	fadeFlickEffect();
}

/**
 * @note Address: 0x803A77F4
 * @note Size: 0xBC
 */
void BlackMan::Obj::doFinishStoneState()
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
bool BlackMan::Obj::isUnderground()
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
void BlackMan::Obj::doGetLifeGaugeParam(Game::LifeGaugeParam& param)
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
void BlackMan::Obj::collisionCallback(Game::CollEvent& collEvent)
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
bool BlackMan::Obj::damageCallBack(Game::Creature* creature, f32 damage, CollPart* part)
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
bool BlackMan::Obj::hipdropCallBack(Game::Creature* creature, f32 damage, CollPart* part)
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
bool BlackMan::Obj::earthquakeCallBack(Game::Creature* creature, f32 bounceFactor)
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
void BlackMan::Obj::doEntry()
{
	if (C_PARMS->mUseDrawBuffer8) {
		gameSystem->setDrawBuffer(8);
	} else {
		gameSystem->setDrawBuffer(4);
	}
	EnemyBase::doEntry();
	gameSystem->setDrawBuffer(0);
}

/**
 * @note Address: 0x803A7F48
 * @note Size: 0x31C
 */
void BlackMan::Obj::changeMaterial()
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

	_37C->mTevBlock->setTevKColor(0, mActiveColor);

	_37C->mTevBlock->setTevKColor(3, mFadeColor);

	j3dModel->calcMaterial();

	mMatLoopAnimator->animate(30.0f);

	J3DTexMtxInfo* texInfo = &modelData->mMaterialTable.mMaterials[0]->mTexGenBlock->getTexMtx(0)->getTexMtxInfo();

	for (int x = 0; x < 3; x++) {
		for (int y = 0; y < 4; y++) {
			texInfo->mEffectMtx[x][y] = copyMatrix[x][y];
		}
	}

	texInfo->mEffectMtx[3][0] = texInfo->mEffectMtx[3][1] = texInfo->mEffectMtx[3][2] = 0.0f;
	texInfo->mEffectMtx[3][3]                                                         = 1.0f;

	xfbUpdate(j3dModel, modelData);

	for (u16 i = 0; i < modelData->mMaterialTable.mMaterialNum; i++) {
		j3dSys.mMatPacket = &j3dModel->mMatPackets[i];
		modelData->mMaterialTable.mMaterials[i]->diff(j3dSys.mMatPacket->mShapePacket->mDiffFlag);
	}

	/*
	stwu     r1, -0x60(r1)
	mflr     r0
	stw      r0, 0x64(r1)
	addi     r4, r1, 0x10
	stw      r31, 0x5c(r1)
	stw      r30, 0x58(r1)
	stw      r29, 0x54(r1)
	mr       r29, r3
	stw      r28, 0x50(r1)
	lwz      r5, sys@sda21(r13)
	lwz      r3, 0x24(r5)
	lwz      r3, 0x25c(r3)
	lwz      r3, 0x44(r3)
	addi     r3, r3, 0xb4
	bl       PSMTX44Copy
	lfs      f5, 0x40(r1)
	addi     r5, r1, 0xc
	lfs      f4, 0x44(r1)
	li       r4, 0
	lfs      f1, lbl_8051F438@sda21(r2)
	lfs      f3, 0x48(r1)
	lfs      f2, 0x4c(r1)
	lfs      f0, lbl_8051F480@sda21(r2)
	stfs     f5, 0x30(r1)
	stfs     f4, 0x34(r1)
	stfs     f3, 0x38(r1)
	stfs     f2, 0x3c(r1)
	stfs     f1, 0x40(r1)
	stfs     f1, 0x44(r1)
	stfs     f1, 0x48(r1)
	stfs     f0, 0x4c(r1)
	lwz      r3, 0x174(r29)
	lbz      r0, 0x380(r29)
	lwz      r30, 8(r3)
	lwz      r31, 4(r30)
	stb      r0, 0xc(r1)
	lbz      r0, 0x381(r29)
	stb      r0, 0xd(r1)
	lbz      r0, 0x382(r29)
	stb      r0, 0xe(r1)
	lbz      r0, 0x383(r29)
	stb      r0, 0xf(r1)
	lwz      r3, 0x37c(r29)
	lwz      r3, 0x2c(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x70(r12)
	mtctr    r12
	bctrl
	lbz      r0, 0x38c(r29)
	addi     r5, r1, 8
	li       r4, 3
	stb      r0, 8(r1)
	lbz      r0, 0x38d(r29)
	stb      r0, 9(r1)
	lbz      r0, 0x38e(r29)
	stb      r0, 0xa(r1)
	lbz      r0, 0x38f(r29)
	stb      r0, 0xb(r1)
	lwz      r3, 0x37c(r29)
	lwz      r3, 0x2c(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x70(r12)
	mtctr    r12
	bctrl
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x358(r29)
	lfs      f1, lbl_8051F4A4@sda21(r2)
	bl       animate__Q23Sys15MatBaseAnimatorFf
	lwz      r3, 0x60(r31)
	li       r4, 0
	lwz      r3, 0(r3)
	lwz      r3, 0x28(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x50(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0x10(r1)
	lis      r4, j3dSys@ha
	lfs      f1, lbl_8051F438@sda21(r2)
	addi     r28, r4, j3dSys@l
	stfs     f0, 0x24(r3)
	li       r29, 0
	lfs      f0, lbl_8051F480@sda21(r2)
	lfs      f2, 0x14(r1)
	stfs     f2, 0x28(r3)
	lfs      f2, 0x18(r1)
	stfs     f2, 0x2c(r3)
	lfs      f2, 0x1c(r1)
	stfs     f2, 0x30(r3)
	lfs      f2, 0x20(r1)
	stfs     f2, 0x34(r3)
	lfs      f2, 0x24(r1)
	stfs     f2, 0x38(r3)
	lfs      f2, 0x28(r1)
	stfs     f2, 0x3c(r3)
	lfs      f2, 0x2c(r1)
	stfs     f2, 0x40(r3)
	lfs      f2, 0x30(r1)
	stfs     f2, 0x44(r3)
	lfs      f2, 0x34(r1)
	stfs     f2, 0x48(r3)
	lfs      f2, 0x38(r1)
	stfs     f2, 0x4c(r3)
	lfs      f2, 0x3c(r1)
	stfs     f2, 0x50(r3)
	stfs     f1, 0x5c(r3)
	stfs     f1, 0x58(r3)
	stfs     f1, 0x54(r3)
	stfs     f0, 0x60(r3)
	lwz      r3, gameSystem__4Game@sda21(r13)
	lwz      r5, 0x6c(r31)
	lwz      r4, 0x54(r3)
	lwz      r3, 4(r5)
	lwz      r4, 0x20(r4)
	lbz      r0, 0(r4)
	stb      r0, 0(r3)
	lbz      r0, 1(r4)
	stb      r0, 1(r3)
	lhz      r0, 2(r4)
	sth      r0, 2(r3)
	lhz      r0, 4(r4)
	sth      r0, 4(r3)
	lbz      r0, 6(r4)
	stb      r0, 6(r3)
	lbz      r0, 7(r4)
	stb      r0, 7(r3)
	lbz      r0, 8(r4)
	stb      r0, 8(r3)
	lbz      r0, 9(r4)
	stb      r0, 9(r3)
	lhz      r0, 0xa(r4)
	sth      r0, 0xa(r3)
	lwz      r0, 0xc(r4)
	stw      r0, 0xc(r3)
	lbz      r0, 0x10(r4)
	stb      r0, 0x10(r3)
	lbz      r0, 0x11(r4)
	stb      r0, 0x11(r3)
	lbz      r0, 0x12(r4)
	stb      r0, 0x12(r3)
	lbz      r0, 0x13(r4)
	stb      r0, 0x13(r3)
	lbz      r0, 0x14(r4)
	stb      r0, 0x14(r3)
	lbz      r0, 0x15(r4)
	stb      r0, 0x15(r3)
	lbz      r0, 0x16(r4)
	stb      r0, 0x16(r3)
	lbz      r0, 0x17(r4)
	stb      r0, 0x17(r3)
	lbz      r0, 0x18(r4)
	stb      r0, 0x18(r3)
	lbz      r0, 0x19(r4)
	stb      r0, 0x19(r3)
	lha      r0, 0x1a(r4)
	sth      r0, 0x1a(r3)
	lwz      r0, 0x1c(r4)
	stw      r0, 0x1c(r3)
	lwz      r3, 4(r5)
	lwz      r0, 0x1c(r3)
	add      r0, r4, r0
	subf     r0, r3, r0
	stw      r0, 0x1c(r3)
	lwz      r3, 4(r5)
	lwz      r0, 0xc(r3)
	add      r0, r4, r0
	subf     r0, r3, r0
	stw      r0, 0xc(r3)
	b        lbl_803A8234

lbl_803A81FC:
	lwz      r4, 0xc0(r30)
	rlwinm   r3, r29, 6, 0xa, 0x19
	rlwinm   r0, r29, 2, 0xe, 0x1d
	add      r4, r4, r3
	stw      r4, 0x3c(r28)
	lwz      r3, 0x60(r31)
	lwz      r4, 0x2c(r4)
	lwzx     r3, r3, r0
	lwz      r4, 0x34(r4)
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	addi     r29, r29, 1

lbl_803A8234:
	lhz      r0, 0x5c(r31)
	clrlwi   r3, r29, 0x10
	cmplw    r3, r0
	blt      lbl_803A81FC
	lwz      r0, 0x64(r1)
	lwz      r31, 0x5c(r1)
	lwz      r30, 0x58(r1)
	lwz      r29, 0x54(r1)
	lwz      r28, 0x50(r1)
	mtlr     r0
	addi     r1, r1, 0x60
	blr
	*/
}

/**
 * @note Address: 0x803A8264
 * @note Size: 0x50
 */
void BlackMan::Obj::getShadowParam(ShadowParam& shadowParam)
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
void BlackMan::Obj::initWalkSmokeEffect()
{
	mWalkSmokeMgr.alloc(2);
	mWalkSmokeMgr.setup(0, mModel, "footR", 10.0f);
	mWalkSmokeMgr.setup(1, mModel, "footL", 10.0f);
}

/**
 * @note Address: 0x803A8318
 * @note Size: 0x1C
 */
WalkSmokeEffect::Mgr* BlackMan::Obj::getWalkSmokeEffectMgr()
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
void BlackMan::Obj::walkFunc()
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

	f32 rotationSpeed, moveSpeed, turnSpeed; // should be f31, f30, f29
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
		turnSpeed        = C_PROPERPARMS.mEscapeSpeed();
		if (targetNavi) {
			Vector3f naviPosition = targetNavi->getPosition();

			bool isAnimEnd = false;

			f32 sqrDist = sqrDistanceXZ(mPosition, naviPosition);

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
			turnSpeed = 0.0f;
		}

		if (getCurrAnimIndex() == WRAITHANIM_Walk) {
			turnSpeed = C_PROPERPARMS.mWalkingSpeed();
		}

		mEscapeMoveSpeed += (turnSpeed - mEscapeMoveSpeed) * 0.2f;
		moveSpeed     = mEscapeMoveSpeed;
		rotationSpeed = C_PROPERPARMS.mMaxEscapeRotationStep();
		turnSpeed     = C_PROPERPARMS.mEscapeRotationSpeed();
	} else if (ItemOnyon::mgr && ItemOnyon::mgr->mPod) {
		Vector3f podPos = ItemOnyon::mgr->mPod->getPosition();
		bool isAnimEnd  = false;
		f32 sqrDist     = sqrDistanceXZ(mPosition, podPos);

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
			if (sqrDistanceXZ(mPosition, mNextRoutePos) < SQUARE(10.0f)) {
				mRouteFindTimer = 120;
				findNextRoutePoint();
			}
			mNextRoutePos           = mPosition;
			mRouteFindCooldownTimer = 0;
		}
	}

	bool isInTurn = false; // lets the wraith do SICK DRIFTS
	// turn inline hell is here
	f32 angleDist = getAngDist2(mTargetPosition);

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
	stw      r31, 0x4c(r1)
	stw      r30, 0x48(r1)
	mr       r31, r3
	lwz      r3, 0x364(r3)
	cmplwi   r3, 0
	beq      lbl_803A837C
	lwz      r0, 0x1e0(r3)
	rlwinm.  r0, r0, 0, 0x16, 0x16
	bne      lbl_803A8B4C

lbl_803A837C:
	mr       r3, r31
	bl       isTyreFreeze__Q34Game8BlackMan3ObjFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_803A83B8
	lwz      r3, 0x360(r31)
	mr       r4, r31
	li       r5, 3
	li       r6, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	li       r0, 0
	stw      r0, 0x2cc(r31)
	b        lbl_803A8B4C

lbl_803A83B8:
	lwz      r0, 0x364(r31)
	cmplwi   r0, 0
	beq      lbl_803A83D0
	lwz      r0, 0x2e0(r31)
	cmpwi    r0, 2
	bne      lbl_803A83D8

lbl_803A83D0:
	li       r0, 0
	b        lbl_803A83DC

lbl_803A83D8:
	li       r0, 1

lbl_803A83DC:
	clrlwi.  r0, r0, 0x18
	beq      lbl_803A8408
	lfs      f1, 0x200(r31)
	lfs      f0, lbl_8051F4B0@sda21(r2)
	fadds    f0, f1, f0
	stfs     f0, 0x200(r31)
	lfs      f0, 0x200(r31)
	lfs      f1, 0x204(r31)
	fcmpo    cr0, f0, f1
	ble      lbl_803A8408
	stfs     f1, 0x200(r31)

lbl_803A8408:
	lwz      r3, 0xc0(r31)
	lha      r4, 0xa1a(r3)
	lfs      f31, 0x2e4(r3)
	extsh.   r0, r4
	lfs      f30, 0x334(r3)
	lfs      f29, 0x30c(r3)
	blt      lbl_803A842C
	stw      r4, 0x2f0(r31)
	b        lbl_803A8438

lbl_803A842C:
	lwz      r3, 0x2ec(r31)
	addi     r0, r3, 1
	stw      r0, 0x2ec(r31)

lbl_803A8438:
	lwz      r0, 0x2f0(r31)
	cmpwi    r0, 0
	bne      lbl_803A8474
	lwz      r3, 0xc0(r31)
	lwz      r4, 0x2ec(r31)
	lwz      r0, 0x95c(r3)
	cmpw     r4, r0
	ble      lbl_803A8484
	li       r3, 1
	li       r0, 0
	stw      r3, 0x2f0(r31)
	lfs      f0, lbl_8051F438@sda21(r2)
	stw      r0, 0x2ec(r31)
	stfs     f0, 0x378(r31)
	b        lbl_803A8484

lbl_803A8474:
	lwz      r3, 0xc0(r31)
	lfs      f31, 0x8bc(r3)
	lfs      f30, 0x90c(r3)
	lfs      f29, 0x8e4(r3)

lbl_803A8484:
	lwz      r0, 0x2e0(r31)
	cmpwi    r0, 2
	bne      lbl_803A8678
	lwz      r3, naviMgr__4Game@sda21(r13)
	bl       getActiveNavi__Q24Game7NaviMgrFv
	lwz      r4, 0xc0(r31)
	cmplwi   r3, 0
	lfs      f29, 0x844(r4)
	beq      lbl_803A8624
	mr       r4, r3
	addi     r3, r1, 0x2c
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0x194(r31)
	li       r30, 0
	lfs      f0, 0x34(r1)
	lwz      r3, 0x188(r31)
	fsubs    f2, f1, f0
	lfs      f1, 0x18c(r31)
	lfs      f0, 0x2c(r1)
	lbz      r0, 0x24(r3)
	fsubs    f1, f1, f0
	fmuls    f0, f2, f2
	cmplwi   r0, 0
	fmadds   f1, f1, f1, f0
	beq      lbl_803A8504
	lwz      r0, 0x1c(r3)
	cmplwi   r0, 0x3e8
	bne      lbl_803A8504
	li       r30, 1

lbl_803A8504:
	lfs      f0, lbl_8051F4B4@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_803A854C
	li       r0, 0
	mr       r3, r31
	stw      r0, 0x2f4(r31)
	bl       getCurrAnimIndex__Q24Game9EnemyBaseFv
	cmpwi    r3, 9
	beq      lbl_803A8530
	mr       r3, r31
	bl       finishMotion__Q24Game9EnemyBaseFv

lbl_803A8530:
	clrlwi.  r0, r30, 0x18
	beq      lbl_803A8624
	mr       r3, r31
	li       r4, 9
	li       r5, 0
	bl       startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
	b        lbl_803A8624

lbl_803A854C:
	lfs      f0, lbl_8051F4B8@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_803A8594
	li       r0, 0
	mr       r3, r31
	stw      r0, 0x2f4(r31)
	bl       getCurrAnimIndex__Q24Game9EnemyBaseFv
	cmpwi    r3, 0xb
	beq      lbl_803A8578
	mr       r3, r31
	bl       finishMotion__Q24Game9EnemyBaseFv

lbl_803A8578:
	clrlwi.  r0, r30, 0x18
	beq      lbl_803A8624
	mr       r3, r31
	li       r4, 0xb
	li       r5, 0
	bl       startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
	b        lbl_803A8624

lbl_803A8594:
	lwz      r3, 0x2f4(r31)
	addi     r0, r3, 1
	stw      r0, 0x2f4(r31)
	lwz      r3, 0xc0(r31)
	lwz      r4, 0x2f4(r31)
	lwz      r0, 0x9d4(r3)
	cmpw     r4, r0
	bgt      lbl_803A85C4
	mr       r3, r31
	bl       getCurrAnimIndex__Q24Game9EnemyBaseFv
	cmpwi    r3, 8
	beq      lbl_803A85CC

lbl_803A85C4:
	mr       r3, r31
	bl       finishMotion__Q24Game9EnemyBaseFv

lbl_803A85CC:
	clrlwi.  r0, r30, 0x18
	beq      lbl_803A8624
	lwz      r3, 0xc0(r31)
	lwz      r4, 0x2f4(r31)
	lwz      r0, 0x9d4(r3)
	cmpw     r4, r0
	ble      lbl_803A8614
	li       r0, 0
	mr       r4, r31
	stw      r0, 0x2f4(r31)
	li       r5, 8
	li       r6, 0
	lwz      r3, 0x360(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	b        lbl_803A8624

lbl_803A8614:
	mr       r3, r31
	li       r4, 8
	li       r5, 0
	bl       startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener

lbl_803A8624:
	mr       r3, r31
	bl       getCurrAnimIndex__Q24Game9EnemyBaseFv
	cmpwi    r3, 9
	bne      lbl_803A8638
	lfs      f29, lbl_8051F438@sda21(r2)

lbl_803A8638:
	mr       r3, r31
	bl       getCurrAnimIndex__Q24Game9EnemyBaseFv
	cmpwi    r3, 0xb
	bne      lbl_803A8650
	lwz      r3, 0xc0(r31)
	lfs      f29, 0x934(r3)

lbl_803A8650:
	lfs      f1, 0x374(r31)
	lfs      f2, lbl_8051F4BC@sda21(r2)
	fsubs    f0, f29, f1
	fmadds   f0, f2, f0, f1
	stfs     f0, 0x374(r31)
	lwz      r3, 0xc0(r31)
	lfs      f31, 0x374(r31)
	lfs      f30, 0x894(r3)
	lfs      f29, 0x86c(r3)
	b        lbl_803A8758

lbl_803A8678:
	lwz      r3, mgr__Q24Game9ItemOnyon@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_803A8758
	lwz      r4, 0xac(r3)
	cmplwi   r4, 0
	beq      lbl_803A8758
	lwz      r12, 0(r4)
	addi     r3, r1, 0x20
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0x194(r31)
	li       r30, 0
	lfs      f0, 0x28(r1)
	lwz      r3, 0x188(r31)
	fsubs    f2, f1, f0
	lfs      f1, 0x18c(r31)
	lfs      f0, 0x20(r1)
	lbz      r0, 0x24(r3)
	fsubs    f1, f1, f0
	fmuls    f0, f2, f2
	cmplwi   r0, 0
	fmadds   f1, f1, f1, f0
	beq      lbl_803A86E8
	lwz      r0, 0x1c(r3)
	cmplwi   r0, 0x3e8
	bne      lbl_803A86E8
	li       r30, 1

lbl_803A86E8:
	lfs      f0, lbl_8051F488@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_803A8728
	mr       r3, r31
	bl       getCurrAnimIndex__Q24Game9EnemyBaseFv
	cmpwi    r3, 6
	bne      lbl_803A870C
	mr       r3, r31
	bl       finishMotion__Q24Game9EnemyBaseFv

lbl_803A870C:
	clrlwi.  r0, r30, 0x18
	beq      lbl_803A8758
	mr       r3, r31
	li       r4, 0xc
	li       r5, 0
	bl       startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
	b        lbl_803A8758

lbl_803A8728:
	mr       r3, r31
	bl       getCurrAnimIndex__Q24Game9EnemyBaseFv
	cmpwi    r3, 0xc
	bne      lbl_803A8740
	mr       r3, r31
	bl       finishMotion__Q24Game9EnemyBaseFv

lbl_803A8740:
	clrlwi.  r0, r30, 0x18
	beq      lbl_803A8758
	mr       r3, r31
	li       r4, 6
	li       r5, 0
	bl       startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener

lbl_803A8758:
	lwz      r0, 0x364(r31)
	cmplwi   r0, 0
	beq      lbl_803A87C4
	lwz      r3, 0xc0(r31)
	lwz      r0, 0x2e0(r31)
	lbz      r3, 0xa10(r3)
	cmpw     r3, r0
	beq      lbl_803A87C4
	stw      r3, 0x2e0(r31)
	lwz      r0, 0x2e0(r31)
	cmpwi    r0, 4
	bne      lbl_803A87B4
	lfs      f0, lbl_8051F438@sda21(r2)
	mr       r3, r31
	li       r4, 0
	stfs     f0, 0x1c8(r31)
	stfs     f0, 0x1cc(r31)
	stfs     f0, 0x1d0(r31)
	stfs     f0, 0x1d4(r31)
	stfs     f0, 0x1d8(r31)
	stfs     f0, 0x1dc(r31)
	bl       setPathFinder__Q34Game8BlackMan3ObjFb
	b        lbl_803A87C4

lbl_803A87B4:
	li       r0, 0
	mr       r3, r31
	stb      r0, 0x34c(r31)
	bl       releasePathFinder__Q34Game8BlackMan3ObjFv

lbl_803A87C4:
	lwz      r0, 0x2e0(r31)
	cmpwi    r0, 4
	bne      lbl_803A87F0
	mr       r3, r31
	bl       isEndPathFinder__Q34Game8BlackMan3ObjFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_803A8B4C
	lwz      r3, 0xc0(r31)
	lfs      f31, 0x81c(r3)
	b        lbl_803A87F0
	b        lbl_803A8B4C

lbl_803A87F0:
	lfs      f1, 0x2d0(r31)
	lfs      f0, 0x18c(r31)
	lfs      f2, lbl_8051F4C0@sda21(r2)
	fsubs    f0, f1, f0
	fabs     f0, f0
	frsp     f0, f0
	fcmpo    cr0, f0, f2
	bge      lbl_803A882C
	lfs      f1, 0x2d8(r31)
	lfs      f0, 0x194(r31)
	fsubs    f0, f1, f0
	fabs     f0, f0
	frsp     f0, f0
	fcmpo    cr0, f0, f2
	blt      lbl_803A8834

lbl_803A882C:
	li       r0, 0
	stw      r0, 0x2e4(r31)

lbl_803A8834:
	lwz      r3, 0x364(r31)
	cmplwi   r3, 0
	beq      lbl_803A8848
	lfs      f0, 0x1fc(r31)
	stfs     f0, 0x314(r3)

lbl_803A8848:
	fmr      f1, f31
	lfs      f31, 0x1fc(r31)
	fmr      f2, f29
	mr       r3, r31
	fmr      f3, f30
	addi     r4, r31, 0x2d0
	bl "walkToTarget__Q24Game9EnemyFuncFPQ24Game9EnemyBaseR10Vector3<f>fff" lwz
r3, 0x364(r31) cmplwi   r3, 0 beq      lbl_803A88D0 lfs      f1, 0x194(r31) lfs
f0, 0x2e8(r3) lfs      f2, 0x18c(r31) fsubs    f3, f1, f0 lfs      f1, 0x2e0(r3)
	lfs      f0, lbl_8051F438@sda21(r2)
	fsubs    f1, f2, f1
	fmuls    f2, f3, f3
	fmadds   f1, f1, f1, f2
	fcmpo    cr0, f1, f0
	ble      lbl_803A88AC
	ble      lbl_803A88B0
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_803A88B0

lbl_803A88AC:
	fmr      f1, f0

lbl_803A88B0:
	lfs      f0, lbl_8051F4C4@sda21(r2)
	fdivs    f0, f1, f0
	stfs     f0, 0x30c(r3)
	lwz      r3, 0x364(r31)
	lfs      f0, 0x1fc(r31)
	stfs     f0, 0x1fc(r3)
	lfs      f0, 0x1fc(r3)
	stfs     f0, 0x1a8(r3)

lbl_803A88D0:
	lwz      r0, 0x2e8(r31)
	cmpwi    r0, 0
	bne      lbl_803A8950
	lwz      r3, 0x334(r31)
	addi     r0, r3, 1
	stw      r0, 0x334(r31)
	lwz      r0, 0x334(r31)
	cmpwi    r0, 0x3c
	ble      lbl_803A8950
	lfs      f1, 0x194(r31)
	lfs      f0, 0x300(r31)
	lfs      f2, 0x18c(r31)
	fsubs    f3, f1, f0
	lfs      f1, 0x2f8(r31)
	lfs      f0, lbl_8051F4C0@sda21(r2)
	fsubs    f2, f2, f1
	fmuls    f1, f3, f3
	fmadds   f1, f2, f2, f1
	fcmpo    cr0, f1, f0
	bge      lbl_803A8930
	li       r0, 0x78
	mr       r3, r31
	stw      r0, 0x2e8(r31)
	bl       findNextRoutePoint__Q34Game8BlackMan3ObjFv

lbl_803A8930:
	lfs      f0, 0x18c(r31)
	li       r0, 0
	stfs     f0, 0x2f8(r31)
	lfs      f0, 0x190(r31)
	stfs     f0, 0x2fc(r31)
	lfs      f0, 0x194(r31)
	stfs     f0, 0x300(r31)
	stw      r0, 0x334(r31)

lbl_803A8950:
	mr       r4, r31
	addi     r3, r1, 0x14
	lwz      r12, 0(r31)
	li       r30, 0
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f5, 0x14(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f3, 0x1c(r1)
	addi     r3, r3, atanTable___5JMath@l
	lfs      f1, 0x2d0(r31)
	lfs      f0, 0x2d8(r31)
	lfs      f4, 0x18(r1)
	fsubs    f1, f1, f5
	fsubs    f2, f0, f3
	stfs     f5, 8(r1)
	stfs     f4, 0xc(r1)
	stfs     f3, 0x10(r1)
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
	lfs      f0, lbl_8051F4C8@sda21(r2)
	fcmpo    cr0, f1, f0
	mfcr     r3
	lis      r0, 0x4330
	rlwinm   r3, r3, 2, 0x1f, 0x1f
	stw      r0, 0x38(r1)
	xoris    r0, r3, 0x8000
	lfd      f2, lbl_8051F4E8@sda21(r2)
	stw      r0, 0x3c(r1)
	lfd      f0, lbl_8051F4D0@sda21(r2)
	lfd      f1, 0x38(r1)
	fsub     f1, f1, f2
	fabs     f1, f1
	fcmpu    cr0, f1, f0
	beq      lbl_803A8A08
	li       r30, 1

lbl_803A8A08:
	clrlwi.  r0, r30, 0x18
	bne      lbl_803A8A30
	lfs      f1, 0x1fc(r31)
	lfs      f0, lbl_8051F4D8@sda21(r2)
	fsubs    f1, f31, f1
	fabs     f1, f1
	frsp     f1, f1
	fcmpo    cr0, f1, f0
	ble      lbl_803A8A30
	li       r30, 1

lbl_803A8A30:
	clrlwi.  r0, r30, 0x18
	beq      lbl_803A8A54
	lfs      f0, 0x1c8(r31)
	lfs      f1, lbl_8051F4DC@sda21(r2)
	fmuls    f0, f0, f1
	stfs     f0, 0x1c8(r31)
	lfs      f0, 0x1d0(r31)
	fmuls    f0, f0, f1
	stfs     f0, 0x1d0(r31)

lbl_803A8A54:
	lwz      r0, 0x364(r31)
	cmplwi   r0, 0
	beq      lbl_803A8B4C
	lwz      r0, 0x2f0(r31)
	cmpwi    r0, 0
	bne      lbl_803A8ACC
	lwz      r3, 0x28c(r31)
	li       r4, 0x5174
	li       r5, 0
	lwz      r12, 0x28(r3)
	lwz      r12, 0x88(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x364(r31)
	li       r4, 0x516e
	li       r5, 0
	lwz      r3, 0x28c(r3)
	lwz      r12, 0x28(r3)
	lwz      r12, 0x88(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x364(r31)
	li       r4, 0x5189
	li       r5, 0
	lwz      r3, 0x28c(r3)
	lwz      r12, 0x28(r3)
	lwz      r12, 0x88(r12)
	mtctr    r12
	bctrl
	b        lbl_803A8B4C

lbl_803A8ACC:
	lwz      r3, 0x28c(r31)
	li       r4, 0x5174
	li       r5, 0
	lwz      r12, 0x28(r3)
	lwz      r12, 0x88(r12)
	mtctr    r12
	bctrl
	cmplwi   r3, 0
	beq      lbl_803A8B0C
	lwz      r12, 0x10(r3)
	li       r4, 0
	lfs      f1, lbl_8051F4E0@sda21(r2)
	li       r5, 0
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl

lbl_803A8B0C:
	lwz      r3, 0x364(r31)
	li       r4, 0x516e
	li       r5, 0
	lwz      r3, 0x28c(r3)
	lwz      r12, 0x28(r3)
	lwz      r12, 0x88(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x364(r31)
	li       r4, 0x5189
	li       r5, 0
	lwz      r3, 0x28c(r3)
	lwz      r12, 0x28(r3)
	lwz      r12, 0x88(r12)
	mtctr    r12
	bctrl

lbl_803A8B4C:
	psq_l    f31, 120(r1), 0, qr0
	lfd      f31, 0x70(r1)
	psq_l    f30, 104(r1), 0, qr0
	lfd      f30, 0x60(r1)
	psq_l    f29, 88(r1), 0, qr0
	lfd      f29, 0x50(r1)
	lwz      r31, 0x4c(r1)
	lwz      r0, 0x84(r1)
	lwz      r30, 0x48(r1)
	mtlr     r0
	addi     r1, r1, 0x80
	blr
	*/
}

/**
 * @note Address: 0x803A8B7C
 * @note Size: 0x34
 */
bool BlackMan::Obj::isReachToGoal(f32 rad) { return (u8)(sqrDistanceXZ(mPosition, mTargetPosition) < SQUARE(rad)); }

/**
 * @note Address: 0x803A8BB0
 * @note Size: 0xED0
 */
void BlackMan::Obj::findNextRoutePoint()
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

	P2ASSERTLINE(1557, currWP);

	int counter = 0;
	s16 indices[8];
	WayPointIterator wpIter(currWP, true);
	CI_LOOP(wpIter)
	{
		s16 index        = *wpIter;
		WayPoint* wp     = routeMgr->getWayPoint(index);
		Vector3f pos     = wp->mPosition;
		Vector3f* posPtr = &pos;

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
						Vector3f wpPos      = Vector3f(wp->mPosition);
						Vector3f wpPos1     = wpPos;
						Vector3f* wpPosPtr  = &wpPos1;
						Vector3f wpPos2     = wpPos;
						Vector3f* wpPosPtr2 = &wpPos2;
						Vector3f pikiPos    = Vector3f(piki->getPosition().x, 0.0f, piki->getPosition().z);

						f32 sqrDist = sqrDistanceXZ(pikiPos, wpPos);
						if (sqrDist < minDist) {
							minDist = sqrDist;
							val     = i;
						}
					}
				}

				Navi* activeNavi = naviMgr->getActiveNavi();
				if (activeNavi && activeNavi->isAlive()) {
					Vector3f wpPos      = Vector3f(wp->mPosition);
					Vector3f wpPos1     = wpPos;
					Vector3f* wpPosPtr  = &wpPos1;
					Vector3f wpPos2     = wpPos;
					Vector3f* wpPosPtr2 = &wpPos2;
					Vector3f naviPos    = Vector3f(activeNavi->getPosition().x, 0.0f, activeNavi->getPosition().z);
					f32 sqrDist         = sqrDistanceXZ(naviPos, wpPos);
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
						Vector3f wpPos      = Vector3f(wp->mPosition);
						Vector3f wpPos1     = wpPos;
						Vector3f* wpPosPtr  = &wpPos1;
						Vector3f wpPos2     = wpPos;
						Vector3f* wpPosPtr2 = &wpPos2;
						Vector3f wpPos3     = wpPos;
						Vector3f* wpPosPtr3 = &wpPos3;
						Vector3f naviPos = Vector3f(activeNavi->getPosition().x, activeNavi->getPosition().y, activeNavi->getPosition().z);
						f32 dist         = naviPos.sqrDistance(wpPos);
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
				for (int i = 0; i < 10; i++) { // mismatch here, try ten times to get a value different from "val"
					targetWPIdx = randInt(counter);
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

				Vector3f sep2 = wp->mPosition - mPosition;
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

	/*
	stwu     r1, -0x1e0(r1)
	mflr     r0
	stw      r0, 0x1e4(r1)
	stfd     f31, 0x1d0(r1)
	psq_st   f31, 472(r1), 0, qr0
	stfd     f30, 0x1c0(r1)
	psq_st   f30, 456(r1), 0, qr0
	stfd     f29, 0x1b0(r1)
	psq_st   f29, 440(r1), 0, qr0
	stfd     f28, 0x1a0(r1)
	psq_st   f28, 424(r1), 0, qr0
	stfd     f27, 0x190(r1)
	psq_st   f27, 408(r1), 0, qr0
	stfd     f26, 0x180(r1)
	psq_st   f26, 392(r1), 0, qr0
	stmw     r22, 0x158(r1)
	mr       r31, r3
	lbz      r0, 0x34c(r3)
	cmplwi   r0, 0
	bne      lbl_803A8C0C
	lwz      r0, 0x2e0(r31)
	cmpwi    r0, 4
	bne      lbl_803A8C18

lbl_803A8C0C:
	mr       r3, r31
	bl       findNextTraceRoutePoint__Q34Game8BlackMan3ObjFv
	b        lbl_803A9A3C

lbl_803A8C18:
	lwz      r0, 0x2e8(r31)
	lwz      r3, mapMgr__4Game@sda21(r13)
	cmpwi    r0, 0
	lwz      r30, 8(r3)
	ble      lbl_803A8EF0
	lha      r0, 0x342(r31)
	lha      r3, 0x340(r31)
	cmpw     r0, r3
	bne      lbl_803A8C64
	lha      r0, 0x344(r31)
	cmpw     r3, r0
	bne      lbl_803A8C64
	lfs      f0, 0x198(r31)
	stfs     f0, 0x2d0(r31)
	lfs      f0, 0x19c(r31)
	stfs     f0, 0x2d4(r31)
	lfs      f0, 0x1a0(r31)
	stfs     f0, 0x2d8(r31)
	b        lbl_803A9A3C

lbl_803A8C64:
	li       r5, 0
	li       r0, -1
	stw      r5, 0x2e8(r31)
	mr       r3, r30
	addi     r4, r1, 0x118
	stw      r5, 0x134(r1)
	stw      r5, 0x130(r1)
	stb      r5, 0x124(r1)
	sth      r0, 0x12c(r1)
	stw      r5, 0x128(r1)
	lfs      f0, 0x18c(r31)
	stfs     f0, 0x118(r1)
	lfs      f0, 0x190(r31)
	stfs     f0, 0x11c(r1)
	lfs      f0, 0x194(r31)
	stfs     f0, 0x120(r1)
	bl       getNearestEdge__Q24Game8RouteMgrFRQ24Game15WPEdgeSearchArg
	clrlwi.  r0, r3, 0x18
	beq      lbl_803A8EF0
	lwz      r4, 0x130(r1)
	lha      r24, 0x340(r31)
	lbz      r0, 0x34(r4)
	lha      r25, 0x342(r31)
	clrlwi.  r0, r0, 0x1f
	bne      lbl_803A8D70
	mr       r3, r30
	lha      r4, 0x36(r4)
	lwz      r12, 0(r30)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	lha      r0, 0x38(r3)
	cmpwi    r0, 1
	bne      lbl_803A8D14
	lwz      r3, 0x134(r1)
	lbz      r0, 0x34(r3)
	clrlwi.  r0, r0, 0x1f
	bne      lbl_803A8D14
	lha      r0, 0x340(r31)
	sth      r0, 0x342(r31)
	lwz      r3, 0x134(r1)
	lha      r0, 0x36(r3)
	sth      r0, 0x340(r31)
	b        lbl_803A8DC8

lbl_803A8D14:
	lwz      r4, 0x130(r1)
	mr       r3, r30
	lha      r0, 0x36(r4)
	sth      r0, 0x340(r31)
	lwz      r12, 0(r30)
	lwz      r4, 0x134(r1)
	lwz      r12, 0x2c(r12)
	lha      r4, 0x36(r4)
	mtctr    r12
	bctrl
	lha      r0, 0x38(r3)
	cmpwi    r0, 1
	ble      lbl_803A8D64
	lwz      r3, 0x134(r1)
	lbz      r0, 0x34(r3)
	clrlwi.  r0, r0, 0x1f
	bne      lbl_803A8D64
	lha      r0, 0x36(r3)
	sth      r0, 0x342(r31)
	b        lbl_803A8DC8

lbl_803A8D64:
	lha      r0, 0x340(r31)
	sth      r0, 0x342(r31)
	b        lbl_803A8DC8

lbl_803A8D70:
	lwz      r4, 0x134(r1)
	mr       r3, r30
	lha      r0, 0x36(r4)
	sth      r0, 0x340(r31)
	lwz      r12, 0(r30)
	lwz      r4, 0x130(r1)
	lwz      r12, 0x2c(r12)
	lha      r4, 0x36(r4)
	mtctr    r12
	bctrl
	lha      r0, 0x38(r3)
	cmpwi    r0, 1
	ble      lbl_803A8DC0
	lwz      r3, 0x130(r1)
	lbz      r0, 0x34(r3)
	clrlwi.  r0, r0, 0x1f
	bne      lbl_803A8DC0
	lha      r0, 0x36(r3)
	sth      r0, 0x342(r31)
	b        lbl_803A8DC8

lbl_803A8DC0:
	lha      r0, 0x340(r31)
	sth      r0, 0x342(r31)

lbl_803A8DC8:
	lha      r3, 0x340(r31)
	cmpw     r3, r24
	bne      lbl_803A8EB8
	lha      r0, 0x342(r31)
	cmpw     r0, r25
	bne      lbl_803A8EB8
	lfs      f1, 0x18c(r31)
	lfs      f0, lbl_8051F438@sda21(r2)
	stfs     f1, 0x2d0(r31)
	lfs      f3, lbl_8051F4C0@sda21(r2)
	lfs      f1, 0x190(r31)
	stfs     f1, 0x2d4(r31)
	lfs      f1, 0x194(r31)
	stfs     f1, 0x2d8(r31)
	lfs      f1, 0x1fc(r31)
	fcmpo    cr0, f1, f0
	bge      lbl_803A8E38
	lfs      f0, lbl_8051F4F0@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 0x138(r1)
	lwz      r0, 0x13c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0
	fneg     f2, f0
	b        lbl_803A8E5C

lbl_803A8E38:
	lfs      f0, lbl_8051F4F4@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 0x140(r1)
	lwz      r0, 0x144(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f2, r3, r0

lbl_803A8E5C:
	lfs      f1, 0x2d0(r31)
	lfs      f0, lbl_8051F438@sda21(r2)
	fnmsubs  f1, f3, f2, f1
	stfs     f1, 0x2d0(r31)
	lfs      f1, 0x1fc(r31)
	fcmpo    cr0, f1, f0
	bge      lbl_803A8E7C
	fneg     f1, f1

lbl_803A8E7C:
	lfs      f0, lbl_8051F4F4@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	lfs      f2, lbl_8051F4C0@sda21(r2)
	fmuls    f1, f1, f0
	lfs      f0, 0x2d8(r31)
	fctiwz   f1, f1
	stfd     f1, 0x148(r1)
	lwz      r0, 0x14c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r3, r0
	lfs      f1, 4(r3)
	fnmsubs  f0, f2, f1, f0
	stfs     f0, 0x2d8(r31)
	b        lbl_803A9A3C

lbl_803A8EB8:
	sth      r3, 0x342(r31)
	mr       r3, r30
	lwz      r12, 0(r30)
	lha      r4, 0x340(r31)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0x50(r3)
	lfs      f2, 0x54(r3)
	lfs      f0, 0x4c(r3)
	stfs     f0, 0x2d0(r31)
	stfs     f1, 0x2d4(r31)
	stfs     f2, 0x2d8(r31)
	b        lbl_803A9A3C

lbl_803A8EF0:
	mr       r3, r30
	lha      r4, 0x340(r31)
	lwz      r12, 0(r30)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	or.      r25, r3, r3
	bne      lbl_803A8F2C
	lis      r3, lbl_80495688@ha
	lis      r5, lbl_80495698@ha
	addi     r3, r3, lbl_80495688@l
	li       r4, 0x615
	addi     r5, r5, lbl_80495698@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803A8F2C:
	mr       r4, r25
	addi     r3, r1, 0xfc
	li       r29, 0
	li       r5, 1
	bl       __ct__Q24Game16WayPointIteratorFPQ24Game8WayPointb
	addi     r3, r1, 0xfc
	bl       first__Q24Game16WayPointIteratorFv
	addi     r24, r1, 0x108
	mr       r22, r24
	b        lbl_803A8FD0

lbl_803A8F54:
	addi     r3, r1, 0xfc
	bl       __ml__Q24Game16WayPointIteratorFv
	mr       r0, r3
	mr       r3, r30
	lwz      r12, 0(r30)
	mr       r23, r0
	mr       r4, r23
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0x4c(r3)
	cmplwi   r3, 0
	lfs      f1, 0x50(r3)
	lfs      f0, 0x54(r3)
	stfs     f2, 0xb0(r1)
	stfs     f1, 0xb4(r1)
	stfs     f0, 0xb8(r1)
	beq      lbl_803A8FC8
	lbz      r0, 0x34(r3)
	clrlwi.  r0, r0, 0x1f
	bne      lbl_803A8FC8
	lha      r4, 0x5c(r3)
	lha      r0, 0x38(r3)
	add      r0, r4, r0
	cmpwi    r0, 1
	ble      lbl_803A8FC8
	sth      r23, 0(r22)
	addi     r22, r22, 2
	addi     r29, r29, 1

lbl_803A8FC8:
	addi     r3, r1, 0xfc
	bl       next__Q24Game16WayPointIteratorFv

lbl_803A8FD0:
	addi     r3, r1, 0xfc
	bl       isDone__Q24Game16WayPointIteratorFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_803A8F54
	cmpwi    r29, 0
	bne      lbl_803A9070
	mr       r4, r25
	addi     r3, r1, 0xf0
	li       r5, 1
	bl       __ct__Q24Game16WayPointIteratorFPQ24Game8WayPointb
	addi     r3, r1, 0xf0
	bl       first__Q24Game16WayPointIteratorFv
	slwi     r0, r29, 1
	addi     r22, r1, 0x108
	add      r22, r22, r0
	b        lbl_803A9060

lbl_803A9010:
	addi     r3, r1, 0xf0
	bl       __ml__Q24Game16WayPointIteratorFv
	mr       r0, r3
	mr       r3, r30
	lwz      r12, 0(r30)
	mr       r23, r0
	mr       r4, r23
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	cmplwi   r3, 0
	beq      lbl_803A9058
	lbz      r0, 0x34(r3)
	clrlwi.  r0, r0, 0x1f
	bne      lbl_803A9058
	sth      r23, 0(r22)
	addi     r22, r22, 2
	addi     r29, r29, 1

lbl_803A9058:
	addi     r3, r1, 0xf0
	bl       next__Q24Game16WayPointIteratorFv

lbl_803A9060:
	addi     r3, r1, 0xf0
	bl       isDone__Q24Game16WayPointIteratorFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_803A9010

lbl_803A9070:
	cmpwi    r29, 0
	beq      lbl_803A9A04
	lwz      r3, 0xc0(r31)
	li       r28, -1
	lwz      r0, 0x2e0(r31)
	li       r27, 0
	lfs      f0, 0x44c(r3)
	cmpwi    r0, 2
	fmuls    f31, f0, f0
	beq      lbl_803A9504
	bge      lbl_803A90AC
	cmpwi    r0, 0
	beq      lbl_803A90B8
	bge      lbl_803A9108
	b        lbl_803A998C

lbl_803A90AC:
	cmpwi    r0, 4
	bge      lbl_803A998C
	b        lbl_803A96DC

lbl_803A90B8:
	bl       rand
	lis      r4, 0x4330
	xoris    r0, r3, 0x8000
	stw      r0, 0x14c(r1)
	xoris    r0, r29, 0x8000
	lfd      f2, lbl_8051F4E8@sda21(r2)
	stw      r4, 0x148(r1)
	lfs      f0, lbl_8051F4F8@sda21(r2)
	lfd      f1, 0x148(r1)
	stw      r0, 0x144(r1)
	fsubs    f1, f1, f2
	stw      r4, 0x140(r1)
	fdivs    f1, f1, f0
	lfd      f0, 0x140(r1)
	fsubs    f0, f0, f2
	fmuls    f0, f0, f1
	fctiwz   f0, f0
	stfd     f0, 0x138(r1)
	lwz      r26, 0x13c(r1)
	b        lbl_803A998C

lbl_803A9108:
	lis      r3, "__vt__22Iterator<Q24Game4Piki>"@ha
	li       r23, 0
	addi     r25, r3, "__vt__22Iterator<Q24Game4Piki>"@l
	b        lbl_803A9474

lbl_803A9118:
	lwz      r0, pikiMgr__4Game@sda21(r13)
	li       r3, 0
	stw      r25, 0xe0(r1)
	lha      r4, 0(r24)
	stw      r3, 0xec(r1)
	stw      r3, 0xe4(r1)
	stw      r0, 0xe8(r1)
	lha      r0, 0x342(r31)
	cmpw     r0, r4
	bne      lbl_803A9160
	lbz      r0, 0x338(r31)
	cmplwi   r0, 0
	bne      lbl_803A946C
	lwz      r3, 0xc0(r31)
	lbz      r0, 0xa15(r3)
	cmplwi   r0, 0
	beq      lbl_803A946C
	li       r27, 1

lbl_803A9160:
	lwz      r12, 0(r30)
	mr       r3, r30
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0xec(r1)
	mr       r26, r3
	cmplwi   r0, 0
	bne      lbl_803A91A0
	lwz      r3, 0xe8(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xe4(r1)
	b        lbl_803A93A8

lbl_803A91A0:
	lwz      r3, 0xe8(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xe4(r1)
	b        lbl_803A9210

lbl_803A91BC:
	lwz      r3, 0xe8(r1)
	lwz      r4, 0xe4(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0xec(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_803A93A8
	lwz      r3, 0xe8(r1)
	lwz      r4, 0xe4(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xe4(r1)

lbl_803A9210:
	lwz      r12, 0xe0(r1)
	addi     r3, r1, 0xe0
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_803A91BC
	b        lbl_803A93A8

lbl_803A9230:
	lwz      r3, 0xe8(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	mr       r22, r3
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_803A92EC
	mr       r3, r22
	bl       isStickTo__Q24Game8CreatureFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_803A92EC
	mr       r4, r22
	lfs      f30, 0x4c(r26)
	lwz      r12, 0(r22)
	addi     r3, r1, 0x98
	lfs      f0, 0x50(r26)
	lfs      f29, 0x54(r26)
	lwz      r12, 8(r12)
	stfs     f30, 0x80(r1)
	stfs     f0, 0x84(r1)
	stfs     f29, 0x88(r1)
	stfs     f30, 0x8c(r1)
	stfs     f0, 0x90(r1)
	stfs     f29, 0x94(r1)
	mtctr    r12
	bctrl
	mr       r4, r22
	addi     r3, r1, 0xa4
	lwz      r12, 0(r22)
	lfs      f28, 0xa0(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	fsubs    f0, f28, f29
	lfs      f1, 0xa4(r1)
	fsubs    f1, f1, f30
	fmuls    f0, f0, f0
	fmadds   f0, f1, f1, f0
	fcmpo    cr0, f0, f31
	bge      lbl_803A92EC
	fmr      f31, f0
	mr       r28, r23

lbl_803A92EC:
	lwz      r0, 0xec(r1)
	cmplwi   r0, 0
	bne      lbl_803A9318
	lwz      r3, 0xe8(r1)
	lwz      r4, 0xe4(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xe4(r1)
	b        lbl_803A93A8

lbl_803A9318:
	lwz      r3, 0xe8(r1)
	lwz      r4, 0xe4(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xe4(r1)
	b        lbl_803A938C

lbl_803A9338:
	lwz      r3, 0xe8(r1)
	lwz      r4, 0xe4(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0xec(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_803A93A8
	lwz      r3, 0xe8(r1)
	lwz      r4, 0xe4(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xe4(r1)

lbl_803A938C:
	lwz      r12, 0xe0(r1)
	addi     r3, r1, 0xe0
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_803A9338

lbl_803A93A8:
	lwz      r3, 0xe8(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xe4(r1)
	cmplw    r4, r3
	bne      lbl_803A9230
	lwz      r3, naviMgr__4Game@sda21(r13)
	bl       getActiveNavi__Q24Game7NaviMgrFv
	or.      r22, r3, r3
	beq      lbl_803A946C
	lwz      r12, 0(r3)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_803A946C
	mr       r4, r22
	lfs      f30, 0x4c(r26)
	lwz      r12, 0(r22)
	addi     r3, r1, 0x68
	lfs      f0, 0x50(r26)
	lfs      f29, 0x54(r26)
	lwz      r12, 8(r12)
	stfs     f30, 0x50(r1)
	stfs     f0, 0x54(r1)
	stfs     f29, 0x58(r1)
	stfs     f30, 0x5c(r1)
	stfs     f0, 0x60(r1)
	stfs     f29, 0x64(r1)
	mtctr    r12
	bctrl
	mr       r4, r22
	addi     r3, r1, 0x74
	lwz      r12, 0(r22)
	lfs      f28, 0x70(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	fsubs    f0, f28, f29
	lfs      f1, 0x74(r1)
	fsubs    f1, f1, f30
	fmuls    f0, f0, f0
	fmadds   f0, f1, f1, f0
	fcmpo    cr0, f0, f31
	bge      lbl_803A946C
	fmr      f31, f0
	mr       r28, r23

lbl_803A946C:
	addi     r24, r24, 2
	addi     r23, r23, 1

lbl_803A9474:
	cmpw     r23, r29
	blt      lbl_803A9118
	cmpwi    r28, 0
	bge      lbl_803A94FC
	lfd      f30, lbl_8051F4E8@sda21(r2)
	xoris    r24, r29, 0x8000
	lfs      f29, lbl_8051F4F8@sda21(r2)
	addi     r23, r1, 0x108
	li       r22, 0
	lis      r25, 0x4330

lbl_803A949C:
	bl       rand
	xoris    r0, r3, 0x8000
	stw      r25, 0x148(r1)
	lha      r3, 0x342(r31)
	stw      r0, 0x14c(r1)
	lfd      f0, 0x148(r1)
	stw      r24, 0x144(r1)
	fsubs    f0, f0, f30
	stw      r25, 0x140(r1)
	fdivs    f1, f0, f29
	lfd      f0, 0x140(r1)
	fsubs    f0, f0, f30
	fmuls    f0, f0, f1
	fctiwz   f0, f0
	stfd     f0, 0x138(r1)
	lwz      r26, 0x13c(r1)
	slwi     r0, r26, 1
	lhax     r0, r23, r0
	cmpw     r3, r0
	bne      lbl_803A998C
	addi     r22, r22, 1
	cmpwi    r22, 0x64
	blt      lbl_803A949C
	b        lbl_803A998C

lbl_803A94FC:
	mr       r26, r28
	b        lbl_803A998C

lbl_803A9504:
	lfs      f26, lbl_8051F4FC@sda21(r2)
	li       r22, 0
	b        lbl_803A95FC

lbl_803A9510:
	lha      r4, 0(r24)
	lha      r0, 0x342(r31)
	cmpw     r0, r4
	beq      lbl_803A95F4
	lwz      r12, 0(r30)
	mr       r3, r30
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	mr       r23, r3
	lwz      r3, naviMgr__4Game@sda21(r13)
	bl       getActiveNavi__Q24Game7NaviMgrFv
	or.      r25, r3, r3
	beq      lbl_803A95F4
	mr       r4, r25
	lfs      f29, 0x4c(r23)
	lwz      r12, 0(r25)
	addi     r3, r1, 0x2c
	lfs      f31, 0x50(r23)
	lfs      f30, 0x54(r23)
	lwz      r12, 8(r12)
	stfs     f29, 8(r1)
	stfs     f31, 0xc(r1)
	stfs     f30, 0x10(r1)
	stfs     f29, 0x14(r1)
	stfs     f31, 0x18(r1)
	stfs     f30, 0x1c(r1)
	stfs     f29, 0x20(r1)
	stfs     f31, 0x24(r1)
	stfs     f30, 0x28(r1)
	mtctr    r12
	bctrl
	mr       r4, r25
	addi     r3, r1, 0x38
	lwz      r12, 0(r25)
	lfs      f27, 0x34(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r25
	addi     r3, r1, 0x44
	lwz      r12, 0(r25)
	lfs      f28, 0x3c(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	fsubs    f0, f28, f31
	lfs      f2, 0x44(r1)
	fsubs    f1, f27, f30
	fsubs    f2, f2, f29
	fmuls    f0, f0, f0
	fmadds   f0, f2, f2, f0
	fmadds   f0, f1, f1, f0
	fcmpo    cr0, f0, f26
	bge      lbl_803A95F4
	fmr      f26, f0
	mr       r28, r22

lbl_803A95F4:
	addi     r24, r24, 2
	addi     r22, r22, 1

lbl_803A95FC:
	cmpw     r22, r29
	blt      lbl_803A9510
	cmpwi    r28, 0
	blt      lbl_803A9614
	cmpwi    r29, 2
	bgt      lbl_803A9664

lbl_803A9614:
	bl       rand
	lis      r4, 0x4330
	xoris    r0, r3, 0x8000
	stw      r0, 0x14c(r1)
	xoris    r0, r29, 0x8000
	lfd      f2, lbl_8051F4E8@sda21(r2)
	stw      r4, 0x148(r1)
	lfs      f0, lbl_8051F4F8@sda21(r2)
	lfd      f1, 0x148(r1)
	stw      r0, 0x144(r1)
	fsubs    f1, f1, f2
	stw      r4, 0x140(r1)
	fdivs    f1, f1, f0
	lfd      f0, 0x140(r1)
	fsubs    f0, f0, f2
	fmuls    f0, f0, f1
	fctiwz   f0, f0
	stfd     f0, 0x138(r1)
	lwz      r26, 0x13c(r1)
	b        lbl_803A998C

lbl_803A9664:
	lfd      f30, lbl_8051F4E8@sda21(r2)
	xoris    r23, r29, 0x8000
	lfs      f31, lbl_8051F4F8@sda21(r2)
	li       r22, 0
	lis      r24, 0x4330

lbl_803A9678:
	bl       rand
	xoris    r0, r3, 0x8000
	stw      r24, 0x148(r1)
	stw      r0, 0x14c(r1)
	lfd      f0, 0x148(r1)
	stw      r23, 0x144(r1)
	fsubs    f0, f0, f30
	stw      r24, 0x140(r1)
	fdivs    f1, f0, f31
	lfd      f0, 0x140(r1)
	fsubs    f0, f0, f30
	fmuls    f0, f0, f1
	fctiwz   f0, f0
	stfd     f0, 0x138(r1)
	lwz      r26, 0x13c(r1)
	cmpw     r26, r28
	bne      lbl_803A96CC
	addi     r22, r22, 1
	li       r26, -1
	cmpwi    r22, 0xa
	blt      lbl_803A9678

lbl_803A96CC:
	cmpwi    r26, 0
	bge      lbl_803A998C
	mr       r26, r28
	b        lbl_803A998C

lbl_803A96DC:
	lfs      f31, lbl_8051F438@sda21(r2)
	li       r22, 0
	b        lbl_803A9928

lbl_803A96E8:
	lha      r23, 0(r24)
	lha      r0, 0x342(r31)
	cmpw     r0, r23
	beq      lbl_803A9920
	mr       r3, r30
	lha      r4, 0x340(r31)
	lwz      r12, 0(r30)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	lfs      f27, 0x4c(r3)
	lfs      f28, 0x54(r3)
	mr       r3, r30
	lwz      r12, 0(r30)
	lha      r4, 0x342(r31)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0x4c(r3)
	lfs      f3, 0x54(r3)
	fsubs    f2, f27, f0
	lfs      f1, lbl_8051F438@sda21(r2)
	fsubs    f3, f28, f3
	fmuls    f4, f1, f1
	stfs     f1, 0xd8(r1)
	fmuls    f0, f2, f2
	fmuls    f5, f3, f3
	stfs     f2, 0xd4(r1)
	fadds    f0, f0, f4
	stfs     f3, 0xdc(r1)
	fadds    f0, f5, f0
	fcmpo    cr0, f0, f1
	ble      lbl_803A9788
	fmadds   f0, f2, f2, f4
	fadds    f3, f5, f0
	fcmpo    cr0, f3, f1
	ble      lbl_803A978C
	frsqrte  f0, f3
	fmuls    f3, f0, f3
	b        lbl_803A978C

lbl_803A9788:
	fmr      f3, f1

lbl_803A978C:
	lfs      f0, lbl_8051F438@sda21(r2)
	fcmpo    cr0, f3, f0
	ble      lbl_803A97C4
	lfs      f0, lbl_8051F480@sda21(r2)
	lfs      f2, 0xd4(r1)
	fdivs    f3, f0, f3
	lfs      f1, 0xd8(r1)
	lfs      f0, 0xdc(r1)
	fmuls    f2, f2, f3
	fmuls    f1, f1, f3
	fmuls    f0, f0, f3
	stfs     f2, 0xd4(r1)
	stfs     f1, 0xd8(r1)
	stfs     f0, 0xdc(r1)

lbl_803A97C4:
	lfs      f1, lbl_8051F438@sda21(r2)
	addi     r3, r1, 0xc8
	lfs      f0, lbl_8051F480@sda21(r2)
	addi     r4, r1, 0xd4
	stfs     f1, 0xc8(r1)
	addi     r5, r1, 0xbc
	stfs     f0, 0xcc(r1)
	stfs     f1, 0xd0(r1)
	bl       PSVECCrossProduct
	lfs      f2, 0xbc(r1)
	lfs      f1, 0xc0(r1)
	fmuls    f0, f2, f2
	lfs      f3, 0xc4(r1)
	fmuls    f4, f1, f1
	lfs      f1, lbl_8051F438@sda21(r2)
	fmuls    f3, f3, f3
	fadds    f0, f0, f4
	fadds    f0, f3, f0
	fcmpo    cr0, f0, f1
	ble      lbl_803A9830
	fmadds   f0, f2, f2, f4
	fadds    f3, f3, f0
	fcmpo    cr0, f3, f1
	ble      lbl_803A9834
	frsqrte  f0, f3
	fmuls    f3, f0, f3
	b        lbl_803A9834

lbl_803A9830:
	fmr      f3, f1

lbl_803A9834:
	lfs      f0, lbl_8051F438@sda21(r2)
	fcmpo    cr0, f3, f0
	ble      lbl_803A986C
	lfs      f0, lbl_8051F480@sda21(r2)
	lfs      f2, 0xbc(r1)
	fdivs    f3, f0, f3
	lfs      f1, 0xc0(r1)
	lfs      f0, 0xc4(r1)
	fmuls    f2, f2, f3
	fmuls    f1, f1, f3
	fmuls    f0, f0, f3
	stfs     f2, 0xbc(r1)
	stfs     f1, 0xc0(r1)
	stfs     f0, 0xc4(r1)

lbl_803A986C:
	mr       r3, r30
	mr       r4, r23
	lwz      r12, 0(r30)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0x50(r3)
	lfs      f0, 0x190(r31)
	lfs      f3, 0x4c(r3)
	fsubs    f4, f1, f0
	lfs      f2, 0x18c(r31)
	lfs      f1, 0x54(r3)
	lfs      f0, 0x194(r31)
	fsubs    f3, f3, f2
	fmuls    f2, f4, f4
	fsubs    f5, f1, f0
	lfs      f0, lbl_8051F438@sda21(r2)
	fmadds   f1, f3, f3, f2
	fmuls    f2, f5, f5
	fadds    f1, f2, f1
	fcmpo    cr0, f1, f0
	ble      lbl_803A98D4
	ble      lbl_803A98D8
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_803A98D8

lbl_803A98D4:
	fmr      f1, f0

lbl_803A98D8:
	lfs      f0, lbl_8051F438@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_803A98F8
	lfs      f0, lbl_8051F480@sda21(r2)
	fdivs    f0, f0, f1
	fmuls    f3, f3, f0
	fmuls    f4, f4, f0
	fmuls    f5, f5, f0

lbl_803A98F8:
	lfs      f0, 0xc0(r1)
	lfs      f1, 0xbc(r1)
	fmuls    f0, f0, f4
	lfs      f2, 0xc4(r1)
	fmadds   f0, f1, f3, f0
	fmadds   f0, f2, f5, f0
	fcmpo    cr0, f0, f31
	ble      lbl_803A9920
	fmr      f31, f0
	mr       r28, r22

lbl_803A9920:
	addi     r24, r24, 2
	addi     r22, r22, 1

lbl_803A9928:
	cmpw     r22, r29
	blt      lbl_803A96E8
	cmpwi    r28, 0
	bge      lbl_803A9988
	bl       rand
	lis      r4, 0x4330
	xoris    r0, r3, 0x8000
	stw      r0, 0x14c(r1)
	xoris    r0, r29, 0x8000
	lfd      f2, lbl_8051F4E8@sda21(r2)
	stw      r4, 0x148(r1)
	lfs      f0, lbl_8051F4F8@sda21(r2)
	lfd      f1, 0x148(r1)
	stw      r0, 0x144(r1)
	fsubs    f1, f1, f2
	stw      r4, 0x140(r1)
	fdivs    f1, f1, f0
	lfd      f0, 0x140(r1)
	fsubs    f0, f0, f2
	fmuls    f0, f0, f1
	fctiwz   f0, f0
	stfd     f0, 0x138(r1)
	lwz      r26, 0x13c(r1)
	b        lbl_803A998C

lbl_803A9988:
	mr       r26, r28

lbl_803A998C:
	cmpw     r26, r29
	blt      lbl_803A9998
	addi     r26, r29, -1

lbl_803A9998:
	mr       r3, r30
	slwi     r0, r26, 1
	lwz      r12, 0(r30)
	addi     r4, r1, 0x108
	lhax     r22, r4, r0
	lwz      r12, 0x2c(r12)
	mr       r4, r22
	mtctr    r12
	bctrl
	clrlwi.  r0, r27, 0x18
	bne      lbl_803A99D8
	cmpwi    r29, 1
	beq      lbl_803A99D8
	lha      r0, 0x342(r31)
	cmpw     r22, r0
	beq      lbl_803A9A04

lbl_803A99D8:
	lha      r0, 0x342(r31)
	cmpw     r0, r22
	bne      lbl_803A99F0
	li       r0, 1
	stb      r0, 0x338(r31)
	b        lbl_803A99F8

lbl_803A99F0:
	li       r0, 0
	stb      r0, 0x338(r31)

lbl_803A99F8:
	lha      r0, 0x340(r31)
	sth      r0, 0x342(r31)
	sth      r22, 0x340(r31)

lbl_803A9A04:
	mr       r3, r30
	lha      r4, 0x340(r31)
	lwz      r12, 0(r30)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	cmplwi   r3, 0
	beq      lbl_803A9A3C
	lfs      f1, 0x50(r3)
	lfs      f2, 0x54(r3)
	lfs      f0, 0x4c(r3)
	stfs     f0, 0x2d0(r31)
	stfs     f1, 0x2d4(r31)
	stfs     f2, 0x2d8(r31)

lbl_803A9A3C:
	psq_l    f31, 472(r1), 0, qr0
	lfd      f31, 0x1d0(r1)
	psq_l    f30, 456(r1), 0, qr0
	lfd      f30, 0x1c0(r1)
	psq_l    f29, 440(r1), 0, qr0
	lfd      f29, 0x1b0(r1)
	psq_l    f28, 424(r1), 0, qr0
	lfd      f28, 0x1a0(r1)
	psq_l    f27, 408(r1), 0, qr0
	lfd      f27, 0x190(r1)
	psq_l    f26, 392(r1), 0, qr0
	lfd      f26, 0x180(r1)
	lmw      r22, 0x158(r1)
	lwz      r0, 0x1e4(r1)
	mtlr     r0
	addi     r1, r1, 0x1e0
	blr
	*/
}

/**
 * @note Address: 0x803A9A80
 * @note Size: 0xD0
 */
void BlackMan::Obj::findNextTraceRoutePoint()
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

	JUT_PANICLINE(1838, "failed traceRoutePoint\n");
}

/**
 * @note Address: 0x803A9B50
 * @note Size: 0x114
 */
bool BlackMan::Obj::isEndPathFinder()
{
	if (mFoundPath) {
		return true;
	}

	P2ASSERTLINE(1850, testPathfinder);

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
		JUT_PANICLINE(1870, "no handle pathFinder\n");
		mFoundPath = 0;
		return false;
	}

	return false;
}

/**
 * @note Address: 0x803A9C64
 * @note Size: 0x1D8
 */
bool BlackMan::Obj::setPathFinder(bool check)
{
	releasePathFinder();
	WPEdgeSearchArg edgeArg(mPosition);
	RouteMgr* routeMgr = mapMgr->mRouteMgr;
	P2ASSERTLINE(1893, routeMgr);

	if (routeMgr->getNearestEdge(edgeArg)) {
		Vector3f wp1Pos  = edgeArg.mWp1->mPosition;
		Vector3f wp2Pos  = edgeArg.mWp2->mPosition;
		Vector3f homePos = mHomePosition;
		f32 wp2Dist      = sqrDistanceXZ(wp2Pos, homePos);
		f32 wp1Dist      = sqrDistanceXZ(wp1Pos, homePos);
		s16 idx1         = edgeArg.mWp1->mIndex;
		s16 idx2         = edgeArg.mWp2->mIndex;
		if (wp1Dist > wp2Dist) {
			idx2 = edgeArg.mWp1->mIndex;
			idx1 = edgeArg.mWp2->mIndex;
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

	JUT_PANICLINE(1934, nullptr);
	return false;
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	stmw     r27, 0x3c(r1)
	mr       r29, r3
	mr       r30, r4
	bl       releasePathFinder__Q34Game8BlackMan3ObjFv
	li       r4, 0
	li       r0, -1
	stw      r4, 0x2c(r1)
	lwz      r3, mapMgr__4Game@sda21(r13)
	stw      r4, 0x28(r1)
	stb      r4, 0x1c(r1)
	sth      r0, 0x24(r1)
	stw      r4, 0x20(r1)
	lfs      f0, 0x18c(r29)
	stfs     f0, 0x10(r1)
	lfs      f0, 0x190(r29)
	stfs     f0, 0x14(r1)
	lfs      f0, 0x194(r29)
	stfs     f0, 0x18(r1)
	lwz      r31, 8(r3)
	cmplwi   r31, 0
	bne      lbl_803A9CE0
	lis      r3, lbl_80495688@ha
	lis      r5, lbl_80495698@ha
	addi     r3, r3, lbl_80495688@l
	li       r4, 0x765
	addi     r5, r5, lbl_80495698@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803A9CE0:
	mr       r3, r31
	addi     r4, r1, 0x10
	bl       getNearestEdge__Q24Game8RouteMgrFRQ24Game15WPEdgeSearchArg
	clrlwi.  r0, r3, 0x18
	beq      lbl_803A9E0C
	lwz      r3, 0x28(r1)
	lwz      r4, 0x2c(r1)
	lfs      f3, 0x1a0(r29)
	lfs      f1, 0x54(r4)
	lfs      f0, 0x54(r3)
	fsubs    f4, f1, f3
	lfs      f2, 0x4c(r4)
	fsubs    f3, f0, f3
	lfs      f6, 0x198(r29)
	lfs      f1, 0x4c(r3)
	fsubs    f5, f2, f6
	fmuls    f0, f4, f4
	lha      r0, 0x36(r3)
	fsubs    f2, f1, f6
	lha      r3, 0x36(r4)
	fmuls    f1, f3, f3
	fmadds   f0, f5, f5, f0
	mr       r28, r0
	mr       r27, r3
	fmadds   f1, f2, f2, f1
	fcmpo    cr0, f1, f0
	ble      lbl_803A9D54
	mr       r27, r0
	mr       r28, r3

lbl_803A9D54:
	mr       r3, r31
	mr       r4, r28
	lwz      r12, 0(r31)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	lbz      r0, 0x34(r3)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_803A9D7C
	mr       r28, r27

lbl_803A9D7C:
	lha      r4, 0x340(r29)
	clrlwi   r3, r30, 0x18
	neg      r0, r3
	sth      r4, 0x342(r29)
	or       r0, r0, r3
	srawi    r3, r0, 0x1f
	sth      r28, 0x340(r29)
	addi     r30, r3, 0xc3
	lwz      r4, 0x348(r29)
	cmplwi   r4, 0
	beq      lbl_803A9DB0
	lwz      r3, testPathfinder__4Game@sda21(r13)
	bl       release__Q24Game10PathfinderFUl

lbl_803A9DB0:
	lha      r5, 0x344(r29)
	addi     r4, r1, 8
	lha      r0, 0x340(r29)
	lwz      r3, testPathfinder__4Game@sda21(r13)
	sth      r0, 8(r1)
	sth      r5, 0xa(r1)
	stb      r30, 0xc(r1)
	bl       start__Q24Game10PathfinderFRQ24Game15PathfindRequest
	stw      r3, 0x348(r29)
	mr       r3, r31
	lwz      r12, 0(r31)
	lha      r4, 0x340(r29)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0x50(r3)
	lfs      f2, 0x54(r3)
	lfs      f0, 0x4c(r3)
	li       r3, 1
	stfs     f0, 0x2d0(r29)
	stfs     f1, 0x2d4(r29)
	stfs     f2, 0x2d8(r29)
	b        lbl_803A9E28

lbl_803A9E0C:
	lis      r3, lbl_80495688@ha
	li       r4, 0x78e
	addi     r3, r3, lbl_80495688@l
	li       r5, 0
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce
	li       r3, 0

lbl_803A9E28:
	lmw      r27, 0x3c(r1)
	lwz      r0, 0x54(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/**
 * @note Address: 0x803A9E3C
 * @note Size: 0x44
 */
void BlackMan::Obj::releasePathFinder()
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
void BlackMan::Obj::jointMtxCalc(int jointIdx)
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

	Vector3f vec1 = diff * scale1; // f28, f27, f26
	if (jointIdx < 2) {
		scale2 = 0.1f;
	}

	Vector3f vec2 = diff * scale2;   // f25, f24, f23
	Vector3f vec3(0.0f, 0.0f, 0.0f); // f22, f21, f20

	if (jointIdx < 2 && C_PARMS->mUseTyreForJointCalc) {
		f32 sinVal1 = C_PARMS->mArmRotationA * absF(sinf(mTyre->mCurrentRotation2)); // f23
		f32 sinVal2 = C_PARMS->mArmRotationB * absF(sinf(mTyre->mCurrentRotation2)); // f24
		getStateID();                                                                // unused

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
			Vector3f tyrePos    = mTyre->mTyrePositions[jointIdx];
			vec2                = vec3 + (tyreMatPos - tyrePos);
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
	/*
	stwu     r1, -0x180(r1)
	mflr     r0
	stw      r0, 0x184(r1)
	stfd     f31, 0x170(r1)
	psq_st   f31, 376(r1), 0, qr0
	stfd     f30, 0x160(r1)
	psq_st   f30, 360(r1), 0, qr0
	stfd     f29, 0x150(r1)
	psq_st   f29, 344(r1), 0, qr0
	stfd     f28, 0x140(r1)
	psq_st   f28, 328(r1), 0, qr0
	stfd     f27, 0x130(r1)
	psq_st   f27, 312(r1), 0, qr0
	stfd     f26, 0x120(r1)
	psq_st   f26, 296(r1), 0, qr0
	stfd     f25, 0x110(r1)
	psq_st   f25, 280(r1), 0, qr0
	stfd     f24, 0x100(r1)
	psq_st   f24, 264(r1), 0, qr0
	stfd     f23, 0xf0(r1)
	psq_st   f23, 248(r1), 0, qr0
	stfd     f22, 0xe0(r1)
	psq_st   f22, 232(r1), 0, qr0
	stfd     f21, 0xd0(r1)
	psq_st   f21, 216(r1), 0, qr0
	stfd     f20, 0xc0(r1)
	psq_st   f20, 200(r1), 0, qr0
	stmw     r17, 0x84(r1)
	lis      r5, lbl_80495670@ha
	mr       r26, r3
	mr       r27, r4
	addi     r29, r5, lbl_80495670@l
	bl       getStateID__Q24Game9EnemyBaseFv
	cmpwi    r27, 2
	bge      lbl_803A9F3C
	cmpwi    r3, 6
	beq      lbl_803A9F1C
	cmpwi    r3, 7
	bne      lbl_803A9F3C

lbl_803A9F1C:
	lwz      r0, 0x1e0(r26)
	rlwinm.  r0, r0, 0, 0x16, 0x16
	bne      lbl_803AA39C
	lwz      r3, 0x364(r26)
	lwz      r0, 0x1e0(r3)
	rlwinm.  r0, r0, 0, 0x16, 0x16
	bne      lbl_803A9F3C
	b        lbl_803AA39C

lbl_803A9F3C:
	lwz      r17, 0x364(r26)
	cmplwi   r17, 0
	beq      lbl_803AA39C
	cmpwi    r27, 4
	bge      lbl_803AA39C
	lwz      r3, 0xc8(r29)
	slwi     r28, r27, 2
	lwz      r18, 0xcc(r29)
	addi     r4, r1, 0x48
	lwz      r19, 0xd0(r29)
	lwz      r20, 0xd4(r29)
	lwz      r21, 0xd8(r29)
	lwz      r22, 0xdc(r29)
	lwz      r23, 0xe0(r29)
	lwz      r24, 0xe4(r29)
	lwz      r25, 0xe8(r29)
	lwz      r31, 0xec(r29)
	lwz      r30, 0xf0(r29)
	lwz      r12, 0xf4(r29)
	lwz      r11, 0xf8(r29)
	lwz      r10, 0xfc(r29)
	lwz      r9, 0x100(r29)
	lwz      r8, 0x104(r29)
	lwz      r7, 0x120(r29)
	lwz      r6, 0x124(r29)
	lwz      r5, 0x128(r29)
	lwz      r0, 0x12c(r29)
	stw      r3, 0x48(r1)
	lwz      r3, 0x174(r17)
	stw      r18, 0x4c(r1)
	stw      r19, 0x50(r1)
	stw      r20, 0x54(r1)
	stw      r21, 0x38(r1)
	lwzx     r4, r4, r28
	stw      r22, 0x3c(r1)
	stw      r23, 0x40(r1)
	stw      r24, 0x44(r1)
	stw      r25, 0x28(r1)
	stw      r31, 0x2c(r1)
	stw      r30, 0x30(r1)
	stw      r12, 0x34(r1)
	stw      r11, 0x18(r1)
	stw      r10, 0x1c(r1)
	stw      r9, 0x20(r1)
	stw      r8, 0x24(r1)
	stw      r7, 8(r1)
	stw      r6, 0xc(r1)
	stw      r5, 0x10(r1)
	stw      r0, 0x14(r1)
	bl       getJoint__Q28SysShape5ModelFPc
	bl       getWorldMatrix__Q28SysShape5JointFv
	addi     r4, r1, 0x38
	mr       r29, r3
	lwz      r3, 0x174(r26)
	lwzx     r4, r4, r28
	bl       getJoint__Q28SysShape5ModelFPc
	bl       getWorldMatrix__Q28SysShape5JointFv
	lwz      r0, 0x2f0(r26)
	lfs      f7, lbl_8051F550@sda21(r2)
	cmpwi    r0, 1
	bge      lbl_803AA034
	lfs      f7, lbl_8051F438@sda21(r2)

lbl_803AA034:
	cmpwi    r27, 2
	bge      lbl_803AA040
	lfs      f7, lbl_8051F438@sda21(r2)

lbl_803AA040:
	srwi     r4, r27, 0x1f
	clrlwi   r0, r27, 0x1f
	xor      r0, r0, r4
	subf.    r0, r4, r0
	beq      lbl_803AA058
	fneg     f7, f7

lbl_803AA058:
	lfs      f3, 4(r29)
	lis      r4, mCurrentMtx__6J3DSys@ha
	lfs      f2, 0xc(r29)
	addi     r4, r4, mCurrentMtx__6J3DSys@l
	lfs      f1, 0x14(r29)
	lfs      f0, 0x1c(r29)
	fmadds   f2, f3, f7, f2
	lfs      f5, 0(r29)
	fmadds   f0, f1, f7, f0
	lfs      f4, lbl_8051F438@sda21(r2)
	lfs      f1, 0x10(r29)
	fmadds   f5, f5, f4, f2
	lfs      f3, 0x24(r29)
	fmadds   f6, f1, f4, f0
	lfs      f2, 0x2c(r29)
	lfs      f1, 0x1c(r3)
	fmadds   f2, f3, f7, f2
	lfs      f0, 0xc(r3)
	fsubs    f30, f6, f1
	lfs      f3, 0x20(r29)
	lfs      f1, 0x2c(r3)
	fsubs    f31, f5, f0
	fmadds   f0, f3, f4, f2
	stfs     f5, 0xc(r3)
	stfs     f6, 0x1c(r3)
	fsubs    f29, f0, f1
	stfs     f0, 0x2c(r3)
	bl       PSMTXCopy
	addi     r4, r1, 0x28
	lwz      r3, 0x174(r26)
	lwzx     r4, r4, r28
	bl       getJoint__Q28SysShape5ModelFPc
	bl       getWorldMatrix__Q28SysShape5JointFv
	addi     r4, r1, 0x18
	mr       r30, r3
	lwz      r3, 0x174(r26)
	lwzx     r4, r4, r28
	bl       getJoint__Q28SysShape5ModelFPc
	bl       getWorldMatrix__Q28SysShape5JointFv
	lwz      r4, 0xc0(r26)
	cmpwi    r27, 2
	mr       r31, r3
	lfs      f0, 0xa30(r4)
	lfs      f1, 0xa34(r4)
	fmuls    f28, f31, f0
	fmuls    f27, f30, f0
	fmuls    f26, f29, f0
	bge      lbl_803AA11C
	lfs      f1, lbl_8051F4A0@sda21(r2)

lbl_803AA11C:
	lfs      f22, lbl_8051F438@sda21(r2)
	cmpwi    r27, 2
	fmuls    f25, f31, f1
	fmr      f21, f22
	fmr      f20, f22
	fmuls    f24, f30, f1
	fmuls    f23, f29, f1
	bge      lbl_803AA2E8
	lbz      r0, 0xa18(r4)
	cmplwi   r0, 0
	beq      lbl_803AA2E8
	lwz      r3, 0x364(r26)
	lfs      f1, 0x2cc(r3)
	fcmpo    cr0, f1, f22
	bge      lbl_803AA184
	lfs      f0, lbl_8051F4F0@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 0x58(r1)
	lwz      r0, 0x5c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0
	fneg     f0, f0
	b        lbl_803AA1A8

lbl_803AA184:
	lfs      f0, lbl_8051F4F4@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 0x60(r1)
	lwz      r0, 0x64(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0

lbl_803AA1A8:
	fabs     f0, f0
	lwz      r4, 0xc0(r26)
	lwz      r3, 0x364(r26)
	lfs      f2, 0xa40(r4)
	frsp     f1, f0
	lfs      f3, 0x2cc(r3)
	lfs      f0, lbl_8051F438@sda21(r2)
	fcmpo    cr0, f3, f0
	fmuls    f23, f2, f1
	bge      lbl_803AA1FC
	lfs      f0, lbl_8051F4F0@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f3, f0
	fctiwz   f0, f0
	stfd     f0, 0x68(r1)
	lwz      r0, 0x6c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0
	fneg     f0, f0
	b        lbl_803AA220

lbl_803AA1FC:
	lfs      f0, lbl_8051F4F4@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f3, f0
	fctiwz   f0, f0
	stfd     f0, 0x70(r1)
	lwz      r0, 0x74(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0

lbl_803AA220:
	fabs     f0, f0
	lwz      r4, 0xc0(r26)
	mr       r3, r26
	lfs      f1, 0xa44(r4)
	frsp     f0, f0
	fmuls    f24, f1, f0
	bl       getStateID__Q24Game9EnemyBaseFv
	lwz      r4, 0x364(r26)
	lfs      f0, lbl_8051F438@sda21(r2)
	lfs      f1, 0x2cc(r4)
	fcmpo    cr0, f1, f0
	bge      lbl_803AA270
	cmpwi    r27, 0
	bne      lbl_803AA294
	lfs      f1, 0(r29)
	fmr      f21, f24
	lfs      f0, 0x20(r29)
	fmuls    f22, f1, f23
	fmuls    f20, f0, f23
	b        lbl_803AA294

lbl_803AA270:
	cmpwi    r27, 1
	bne      lbl_803AA294
	lfs      f1, 0(r29)
	fmr      f21, f24
	lfs      f0, 0x20(r29)
	fneg     f1, f1
	fneg     f0, f0
	fmuls    f22, f1, f23
	fmuls    f20, f0, f23

lbl_803AA294:
	lwz      r3, 0xc0(r26)
	lbz      r0, 0xa11(r3)
	cmplwi   r0, 0
	bne      lbl_803AA2B0
	fmr      f25, f22
	fmr      f23, f20
	b        lbl_803AA2E8

lbl_803AA2B0:
	mulli    r0, r27, 0xc
	lfs      f5, 0xc(r29)
	lfs      f3, 0x1c(r29)
	lfs      f1, 0x2c(r29)
	add      r3, r4, r0
	lfs      f4, 0x2ec(r3)
	lfs      f2, 0x2f0(r3)
	lfs      f0, 0x2f4(r3)
	fsubs    f4, f5, f4
	fsubs    f2, f3, f2
	fsubs    f0, f1, f0
	fadds    f25, f22, f4
	fadds    f24, f21, f2
	fadds    f23, f20, f0

lbl_803AA2E8:
	lfs      f0, 0xc(r30)
	addi     r3, r1, 8
	lwzx     r4, r3, r28
	fadds    f0, f0, f28
	stfs     f0, 0xc(r30)
	lfs      f0, 0x1c(r30)
	fadds    f0, f0, f27
	stfs     f0, 0x1c(r30)
	lfs      f0, 0x2c(r30)
	fadds    f0, f0, f26
	stfs     f0, 0x2c(r30)
	lfs      f0, 0xc(r31)
	fadds    f0, f0, f25
	stfs     f0, 0xc(r31)
	lfs      f0, 0x1c(r31)
	fadds    f0, f0, f24
	stfs     f0, 0x1c(r31)
	lfs      f0, 0x2c(r31)
	fadds    f0, f0, f23
	stfs     f0, 0x2c(r31)
	lwz      r3, 0x174(r26)
	bl       getJoint__Q28SysShape5ModelFPc
	bl       getWorldMatrix__Q28SysShape5JointFv
	lwz      r4, 0xc0(r26)
	cmpwi    r27, 2
	lfs      f0, 0xa38(r4)
	fmuls    f1, f31, f0
	fmuls    f2, f30, f0
	fmuls    f3, f29, f0
	bge      lbl_803AA378
	fmuls    f25, f25, f0
	fmuls    f24, f24, f0
	fmuls    f23, f23, f0
	fmr      f1, f25
	fmr      f2, f24
	fmr      f3, f23

lbl_803AA378:
	lfs      f0, 0xc(r3)
	fadds    f0, f0, f1
	stfs     f0, 0xc(r3)
	lfs      f0, 0x1c(r3)
	fadds    f0, f0, f2
	stfs     f0, 0x1c(r3)
	lfs      f0, 0x2c(r3)
	fadds    f0, f0, f3
	stfs     f0, 0x2c(r3)

lbl_803AA39C:
	psq_l    f31, 376(r1), 0, qr0
	lfd      f31, 0x170(r1)
	psq_l    f30, 360(r1), 0, qr0
	lfd      f30, 0x160(r1)
	psq_l    f29, 344(r1), 0, qr0
	lfd      f29, 0x150(r1)
	psq_l    f28, 328(r1), 0, qr0
	lfd      f28, 0x140(r1)
	psq_l    f27, 312(r1), 0, qr0
	lfd      f27, 0x130(r1)
	psq_l    f26, 296(r1), 0, qr0
	lfd      f26, 0x120(r1)
	psq_l    f25, 280(r1), 0, qr0
	lfd      f25, 0x110(r1)
	psq_l    f24, 264(r1), 0, qr0
	lfd      f24, 0x100(r1)
	psq_l    f23, 248(r1), 0, qr0
	lfd      f23, 0xf0(r1)
	psq_l    f22, 232(r1), 0, qr0
	lfd      f22, 0xe0(r1)
	psq_l    f21, 216(r1), 0, qr0
	lfd      f21, 0xd0(r1)
	psq_l    f20, 200(r1), 0, qr0
	lfd      f20, 0xc0(r1)
	lmw      r17, 0x84(r1)
	lwz      r0, 0x184(r1)
	mtlr     r0
	addi     r1, r1, 0x180
	blr
	*/
}

/**
 * @note Address: 0x803AA410
 * @note Size: 0x28C
 */
void BlackMan::Obj::bodyMtxCalc()
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
	/*
	stwu     r1, -0x80(r1)
	mflr     r0
	stw      r0, 0x84(r1)
	stw      r31, 0x7c(r1)
	stw      r30, 0x78(r1)
	mr       r30, r3
	lwz      r3, 0xc0(r3)
	lbz      r0, 0xa18(r3)
	cmplwi   r0, 0
	beq      lbl_803AA684
	lhz      r0, 0x36a(r30)
	lwz      r3, 0x174(r30)
	mulli    r0, r0, 0x3c
	lwz      r3, 0x10(r3)
	add      r3, r3, r0
	bl       getWorldMatrix__Q28SysShape5JointFv
	lwz      r5, 0x364(r30)
	mr       r31, r3
	lwz      r4, lbl_8051F554@sda21(r2)
	lfs      f1, 0x2cc(r5)
	lfs      f0, lbl_8051F438@sda21(r2)
	lwz      r0, lbl_8051F558@sda21(r2)
	fcmpo    cr0, f1, f0
	stw      r4, 8(r1)
	stw      r0, 0xc(r1)
	ble      lbl_803AA494
	lwz      r3, 0x174(r5)
	bl       getJoint__Q28SysShape5ModelFPc
	bl       getWorldMatrix__Q28SysShape5JointFv
	lfs      f4, 0xc(r3)
	lfs      f5, 0x1c(r3)
	lfs      f0, 0x2c(r3)
	b        lbl_803AA4B0

lbl_803AA494:
	lwz      r3, 0x174(r5)
	mr       r4, r0
	bl       getJoint__Q28SysShape5ModelFPc
	bl       getWorldMatrix__Q28SysShape5JointFv
	lfs      f4, 0xc(r3)
	lfs      f5, 0x1c(r3)
	lfs      f0, 0x2c(r3)

lbl_803AA4B0:
	lfs      f1, 0x190(r30)
	lfs      f3, 0x18c(r30)
	fsubs    f5, f5, f1
	lfs      f2, 0x194(r30)
	fsubs    f4, f4, f3
	lfs      f1, lbl_8051F438@sda21(r2)
	fsubs    f0, f0, f2
	fmuls    f2, f5, f5
	fmuls    f3, f0, f0
	fmadds   f2, f4, f4, f2
	fadds    f2, f3, f2
	fcmpo    cr0, f2, f1
	ble      lbl_803AA4F4
	ble      lbl_803AA4F8
	frsqrte  f1, f2
	fmuls    f2, f1, f2
	b        lbl_803AA4F8

lbl_803AA4F4:
	fmr      f2, f1

lbl_803AA4F8:
	lfs      f1, lbl_8051F438@sda21(r2)
	fcmpo    cr0, f2, f1
	ble      lbl_803AA514
	lfs      f1, lbl_8051F480@sda21(r2)
	fdivs    f1, f1, f2
	fmuls    f4, f4, f1
	fmuls    f0, f0, f1

lbl_803AA514:
	lwz      r3, 0x364(r30)
	lfs      f1, lbl_8051F438@sda21(r2)
	lfs      f2, 0x2cc(r3)
	fcmpo    cr0, f2, f1
	bge      lbl_803AA554
	lfs      f1, lbl_8051F4F0@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f1, f2, f1
	fctiwz   f1, f1
	stfd     f1, 0x58(r1)
	lwz      r0, 0x5c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f1, r3, r0
	fneg     f1, f1
	b        lbl_803AA578

lbl_803AA554:
	lfs      f1, lbl_8051F4F4@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f1, f2, f1
	fctiwz   f1, f1
	stfd     f1, 0x60(r1)
	lwz      r0, 0x64(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f1, r3, r0

lbl_803AA578:
	lwz      r4, 0xc0(r30)
	fabs     f3, f1
	lfs      f1, 0xc(r31)
	lis      r3, mCurrentMtx__6J3DSys@ha
	lfs      f2, 0xa28(r4)
	addi     r4, r3, mCurrentMtx__6J3DSys@l
	frsp     f3, f3
	fmuls    f2, f2, f4
	mr       r3, r31
	fmadds   f1, f3, f2, f1
	stfs     f1, 0xc(r31)
	lwz      r5, 0xc0(r30)
	lfs      f1, 0x2c(r31)
	lfs      f2, 0xa28(r5)
	fmuls    f0, f2, f0
	fmadds   f0, f3, f0, f1
	stfs     f0, 0x2c(r31)
	bl       PSMTXCopy
	lfs      f1, lbl_8051F438@sda21(r2)
	stfs     f1, 0x1c(r1)
	stfs     f1, 0x20(r1)
	stfs     f1, 0x24(r1)
	lwz      r4, 0x364(r30)
	lwz      r3, 0xc0(r30)
	lfs      f2, 0x2cc(r4)
	lfs      f0, 0xa2c(r3)
	fcmpo    cr0, f2, f1
	fneg     f1, f0
	bge      lbl_803AA618
	lfs      f0, lbl_8051F4F0@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f2, f0
	fctiwz   f0, f0
	stfd     f0, 0x68(r1)
	lwz      r0, 0x6c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0
	fneg     f0, f0
	b        lbl_803AA63C

lbl_803AA618:
	lfs      f0, lbl_8051F4F4@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f2, f0
	fctiwz   f0, f0
	stfd     f0, 0x70(r1)
	lwz      r0, 0x74(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0

lbl_803AA63C:
	fmuls    f1, f1, f0
	lfs      f0, lbl_8051F438@sda21(r2)
	addi     r3, r1, 0x28
	addi     r4, r1, 0x1c
	stfs     f0, 0x10(r1)
	addi     r5, r1, 0x10
	stfs     f1, 0x14(r1)
	stfs     f0, 0x18(r1)
	bl       "makeTR__7MatrixfFR10Vector3<f>R10Vector3<f>"
	mr       r3, r31
	mr       r5, r31
	addi     r4, r1, 0x28
	bl       PSMTXConcat
	lis      r3, mCurrentMtx__6J3DSys@ha
	addi     r4, r1, 0x28
	addi     r3, r3, mCurrentMtx__6J3DSys@l
	mr       r5, r3
	bl       PSMTXConcat

lbl_803AA684:
	lwz      r0, 0x84(r1)
	lwz      r31, 0x7c(r1)
	lwz      r30, 0x78(r1)
	mtlr     r0
	addi     r1, r1, 0x80
	blr
	*/
}

/**
 * @note Address: 0x803AA69C
 * @note Size: 0x40
 */
bool BlackMan::Obj::isTyreFreeze()
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
bool BlackMan::Obj::isTyreDead()
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
bool BlackMan::Obj::isFallEnd()
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
void BlackMan::Obj::moveRestart()
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
		P2ASSERTLINE(2221, seqBase);
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
void BlackMan::Obj::escape() { }

/**
 * @note Address: 0x803AA9C4
 * @note Size: 0x8
 */
void BlackMan::Obj::setTimer(f32 time) { mWraithFallTimer = time; }

/**
 * @note Address: 0x803AA9CC
 * @note Size: 0x8
 */
f32 BlackMan::Obj::getTimer() { return mWraithFallTimer; }

/**
 * @note Address: 0x803AA9D4
 * @note Size: 0xA0
 */
void BlackMan::Obj::collisionStOn()
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
void BlackMan::Obj::collisionStOff()
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
void BlackMan::Obj::flick()
{
	EnemyFunc::flickStickPikmin(this, C_GENERALPARMS.mShakeChance(), C_GENERALPARMS.mShakeKnockback(), C_GENERALPARMS.mShakeDamage(),
	                            FLICK_BACKWARD_ANGLE, nullptr);
	mFlickTimer = 0.0f;
}

/**
 * @note Address: 0x803AAB58
 * @note Size: 0x150
 */
void BlackMan::Obj::recover()
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
void BlackMan::Obj::recoverFlick()
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
void BlackMan::Obj::tyreFlick()
{
	if (mTyre) {
		mTyre->flick();
	}
}

/**
 * @note Address: 0x803AADCC
 * @note Size: 0xD0
 */
void BlackMan::Obj::deadEffect()
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
void BlackMan::Obj::deadTraceEffect() { mEfxDead->create(nullptr); }

/**
 * @note Address: 0x803AAED0
 * @note Size: 0x74
 */
void BlackMan::Obj::tyreUpEffect()
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
void BlackMan::Obj::tyreDownEffect()
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
void BlackMan::Obj::bendEffect()
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
void BlackMan::Obj::createTraceEffect()
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
void BlackMan::Obj::fadeTraceEffect()
{
	mEfxMove->fade();
	mEfxRun->fade();
}

/**
 * @note Address: 0x803AB0D4
 * @note Size: 0x58
 */
void BlackMan::Obj::createFlickEffect()
{
	mEfxFrontFlick->create(nullptr);
	mEfxBackFlick->create(nullptr);
}

/**
 * @note Address: 0x803AB12C
 * @note Size: 0x50
 */
void BlackMan::Obj::fadeFlickEffect()
{
	mEfxFrontFlick->fade();
	mEfxBackFlick->fade();
}

/**
 * @note Address: 0x803AB17C
 * @note Size: 0xC4
 */
bool BlackMan::Obj::isFinalFloor()
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
void BlackMan::Obj::appearFanfare()
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
