#include "Game/Navi.h"
#include "Game/NaviState.h"
#include "Game/NaviParms.h"
#include "Game/PikiState.h"
#include "Game/StateMachine.h"
#include "Game/CPlate.h"
#include "Game/Footmark.h"
#include "Game/MoviePlayer.h"
#include "Game/PikiMgr.h"
#include "Game/Entities/ItemPikihead.h"
#include "Game/Entities/ItemBigFountain.h"
#include "Game/Entities/ItemHole.h"
#include "Game/Entities/ItemCave.h"
#include "Game/Entities/ItemOnyon.h"
#include "Game/MapMgr.h"
#include "Game/CameraMgr.h"
#include "Game/Stickers.h"
#include "Game/rumble.h"
#include "Game/AIConstants.h"
#include "JSystem/J3D/J3DJoint.h"
#include "PSSystem/PSSystemIF.h"
#include "P2Macros.h"
#include "PSM/Navi.h"
#include "SysShape/Model.h"
#include "CollInfo.h"
#include "Iterator.h"
#include "PikiAI.h"
#include "Radar.h"
#include "nans.h"
#include "utilityU.h"
#include "PowerPC_EABI_Support/MSL_C/MSL_Common/arith.h"

static const u32 fillerbytes[3] = { 0, 0, 0 };
int numSearch;

namespace Game {

/**
 * @note Address: 0x8013F6D4
 * @note Size: 0x50
 */
void Navi::getShadowParam(ShadowParam& param)
{
	param.mPosition = mPosition;
	param.mPosition.y += 0.5f;

	param.mBoundingSphere.mRadius = 10.0f;
	param.mSize                   = 4.0f;

	param.mBoundingSphere.mPosition = Vector3f(0.0f, 1.0f, 0.0f);
}

/**
 * @note Address: 0x8013F724
 * @note Size: 0x24
 */
void Navi::getLODSphere(Sys::Sphere& sphere)
{
	sphere.mRadius   = 24.0f;
	sphere.mPosition = mBoundingSphere.mPosition;
}

/**
 * @note Address: 0x8013F748
 * @note Size: 0x208
 */
Navi::Navi()
{
	mController1 = nullptr;
	mController2 = nullptr;
	mCamera      = nullptr;
	mCamera2     = nullptr;
	mWhistle     = nullptr;

	mObjectTypeID = OBJTYPE_Navi;

	mEffectsObj = new efx::TNaviEffect;
	mEffectsObj->init(nullptr, nullptr, nullptr, efx::TNaviEffect::NAVITYPE_Olimar);
	mEffectsObj->mPos = &mPosition;

	mFsm = new NaviFSM;
	mFsm->init(this);

	mCPlateMgr = new CPlate(MAX_PIKI_COUNT);
	mMass      = 1.0f;

	mFootmarks = new Footmarks;
	mFootmarks->alloc(16);

	mUpdateContext.mDoForceActive = true;

	mCursorMatAnim = new Sys::MatRepeatAnimator;
	mArrowMatAnim  = new Sys::MatLoopAnimator;

	mSoundObj = new PSM::Navi(this);
}

/**
 * @note Address: 0x801400B0
 * @note Size: 0x290
 */
void Navi::onInit(Game::CreatureInitArg* arg)
{
	mStickCount      = 0;
	mPlateScaleTimer = 0;

	clearKaisanDisable();
	clearThrowDisable();

	mInvincibleTimer = 0;
	mCStickAngle     = 0.0f;

	mSprayCounts[SPRAY_TYPE_BITTER] = 0;
	mSprayCounts[SPRAY_TYPE_SPICY]  = 0;

	initFakePiki();
	naviMgr->setupNavi(this);

	mModel->mJ3dModel->mModelData->mJointTree.mJoints[0]->mMtxCalc = nullptr;
	mModel->mJ3dModel->mModelData->mJointTree.mJoints[1]->mMtxCalc = nullptr;

	mNaviControlFlag.clear();
	resetControlFlag(NAVICTRL_InMovie);

	initAnimator();

	mHideModel           = false;
	mSceneAnimationTimer = 0.0f;

	mWhistle = new NaviWhistle(this);

	_2DE           = 0;
	mNextThrowPiki = nullptr;
	mHoldPikiTimer = 0.0f;
	mUnusedFlag2   = 0;

	mCollTree->createFromFactory(mModel, naviMgr->mCollData, nullptr);
	JUT_ASSERTLINE(838, ((int)mCollTree->mPart) >= 0x80000000,
	               "ザンーー（・д・）−−ネン\n"); // 'disappointttttt D: ?? ment' (lol)
	mCollTree->attachModel(mModel);

	mFsm->start(this, NSID_Walk, nullptr);

	getCreatureID();

	mBeaconJoint = mModel->getJoint("happajnt3");

	mEffectsObj->mBeaconMtx = mBeaconJoint->getWorldMatrix();
	mEffectsObj->mNaviPos   = &mWhistle->mPosition;

	SysShape::Joint* headJnt = mModel->getJoint("headjnt");
	mEffectsObj->mHeadMtx    = headJnt->getWorldMatrix();
	mEffectsObj->setNaviType((efx::TNaviEffect::enumNaviType)(bool)mNaviIndex);

	mEffectsObj->createLight();

	setLifeMax();

	mPluckingCounter = 0;
	mUnusedFlag      = 0;

	Vector3f modelScale;
	modelScale = Vector3f(OLIMAR_SCALE);
	if (mNaviIndex == NAVIID_Louie) {
		modelScale = Vector3f(LOUIE_SCALE);
	}

	mScale = modelScale;

	int id = mNaviIndex;
	mCursorMatAnim->start(&naviMgr->mCursorAnims[id]);
	mArrowMatAnim->start(&naviMgr->mMarkerAnims[id]);
}

/**
 * @note Address: 0x8014037C
 * @note Size: 0x88
 */
void Navi::onSetPosition(Vector3f& position)
{
	mPosition = position;
	static_cast<FakePiki*>(this)->onSetPosition(); // Call base class version

	if (mNaviIndex == NAVIID_Olimar) { // olimar
		Radar::Mgr::entry(this, Radar::MAP_OLIMAR, 0);

	} else { // louie/president
		Radar::Mgr::entry(this, Radar::MAP_LOUIE_PRESIDENT, 0);
	}

	mWhistle->init();
}

/**
 * @note Address: 0x80140404
 * @note Size: 0x40
 */
void Navi::onKill(CreatureKillArg* killArg)
{
	killFakePiki();
	mEffectsObj->killLight();
}

/**
 * @note Address: 0x80140444
 * @note Size: 0xD4
 */
void Navi::onKeyEvent(const SysShape::KeyEvent& event)
{
	if (mCurrentState) {
		mCurrentState->onKeyEvent(this, event);
	}

	if (mFakePikiBounceTriangle) {
		int walkSound = mFakePikiBounceTriangle->mCode.getAttribute();
		if (inWater()) {
			walkSound = 4;
		}

		if ((u32)event.mType == KEYEVENT_200) {
			mSoundObj->playWalkSound(PSM::Navi::NAVIFOOT_840, walkSound);

		} else if ((u32)event.mType == KEYEVENT_201) {
			mSoundObj->playWalkSound(PSM::Navi::NAVIFOOT_820, walkSound);
		}
	}
}

/**
 * @note Address: 0x8014051C
 * @note Size: 0x80
 */
Vector3f Navi::getPosition()
{
	if (moviePlayer && moviePlayer->isFlag(MVP_IsActive)) {
		Matrixf* worldMtx = mModel->mJoints->getWorldMatrix();

		Vector3f position;
		worldMtx->getTranslation(position);
		return position;

	} else {
		return mPosition;
	}
}

/**
 * @note Address: 0x8014059C
 * @note Size: 0x50
 */
void Navi::onStickStart(Creature* creature)
{
	if (creature->isPiki()) {
		mStickCount++;
	}
}

/**
 * @note Address: 0x801405EC
 * @note Size: 0x58
 */
void Navi::onStickEnd(Creature* creature)
{
	if (creature->isPiki() && mStickCount) {
		mStickCount--;
	}
}

/**
 * @note Address: 0x80140644
 * @note Size: 0x654
 */
bool Navi::procActionButton()
{
	f32 minDist;
	if (mPluckingCounter) {
		minDist = naviMgr->mNaviParms->mNaviParms.mAutopluckDistance.mValue;
	} else {
		minDist = naviMgr->mNaviParms->mNaviParms.mActionRadius.mValue;
	}

	Iterator<ItemPikihead::Item> iter(ItemPikihead::mgr);
	minDist *= minDist;
	ItemPikihead::Item* targetSprout = nullptr;

	// find (closest) pluckable sprout within range
	CI_LOOP(iter)
	{
		BaseItem* item             = *iter;
		ItemPikihead::Item* sprout = (ItemPikihead::Item*)item;
		Vector3f sproutPos         = item->getPosition();
		Vector3f naviPos           = getPosition();
		Vector3f diff              = sproutPos;
		diff -= naviPos;
		f32 heightDistance     = absF(diff.y);
		f32 horizontalDistance = diff.x * diff.x + diff.z * diff.z;

		// sprout has to be pluckable, closer than current/within range, not at massive height difference
		// AND either we're not in VS mode OR sprout color matches captain color
		if (sprout->canPullout() && horizontalDistance < minDist && heightDistance < 25.0f
		    && (!gameSystem->isVersusMode() || sprout->mColor == (1 - mNaviIndex))) {
			minDist      = horizontalDistance;
			targetSprout = sprout;
		}
	}

	// if sprout found, pluck it.
	if (targetSprout) {
		NaviNukuAdjustStateArg nukuAdjustArg;
		setupNukuAdjustArg(targetSprout, nukuAdjustArg);
		mFsm->transit(this, NSID_NukuAdjust, &nukuAdjustArg);

		// if there's a captain following us, put them to work.
		Navi* otherNavi = naviMgr->getAt(1 - mNaviIndex);
		if (otherNavi && otherNavi->isAlive() && otherNavi->getStateID() == NSID_Follow) {
			f32 actionRadius = naviMgr->mNaviParms->mNaviParms.mAutopluckDistance.mValue; // following captain uses autopluck range

			ItemPikihead::Item* otherTargetSprout = nullptr;
			minDist                               = actionRadius * actionRadius;

			// find (closest) pluckable sprout within range that -isn't- the same as main captain's target
			CI_LOOP(iter)
			{
				BaseItem* item             = *iter;
				ItemPikihead::Item* sprout = (ItemPikihead::Item*)item;
				if (sprout != targetSprout) {
					Vector3f sproutPos = item->getPosition();
					Vector3f naviPos   = getPosition();
					Vector3f diff      = sproutPos;
					diff -= naviPos;
					f32 heightDiff = absF(diff.y);
					f32 sqrXZ      = diff.x * diff.x + diff.z * diff.z;

					// sprout has to be pluckable, closer than current/within range, not at massive height difference
					// (we don't care about VS mode now bc can't have a following captain)
					if (sprout->canPullout() && sqrXZ < minDist && heightDiff < 25.0f) {
						minDist           = sqrXZ;
						otherTargetSprout = sprout;
					}
				}
			}

			// if sprout found, pluck it.
			if (otherTargetSprout) {
				NaviNukuAdjustStateArg nukuAdjustArg2;
				otherNavi->setupNukuAdjustArg(otherTargetSprout, nukuAdjustArg2);
				nukuAdjustArg2.mIsFollowing = true;
				otherNavi->mFsm->transit(otherNavi, NSID_NukuAdjust, &nukuAdjustArg2);
			}
		}

		// we plucked something.
		return true;
	}

	// we did not pluck something.
	return false;
}

/**
 * @note Address: 0x80140CF4
 * @note Size: 0x138
 */
void Navi::setupNukuAdjustArg(ItemPikihead::Item* item, NaviNukuAdjustStateArg& arg)
{
	Vector3f direction = item->getPosition() - getPosition();
	arg.mAngleToItem   = angDist(roundAng(pikmin2_atan2f(direction.x, direction.z)), mFaceDir) / 10.0f;

	f32 distance = pikmin2_sqrtf(direction.sqrMagnitude());
	f32 norm     = 1.0f / distance;

	// These two lines are unused
	// Minimum distance to item is 15.0f
	arg.mUnusedVelocity = direction * (3.0003002f * (norm * (distance - 15.0f)));
	arg.mUnusedState    = 2;

	arg.mPikihead = item;
}

/**
 * @note Address: 0x80140E2C
 * @note Size: 0x50
 */
bool Navi::hasDope(int sprayType)
{
	if (gameSystem->isVersusMode()) {
		return mSprayCounts[sprayType] > 0;
	}

	return playData->hasDope(sprayType);
}

/**
 * @note Address: 0x80140E7C
 * @note Size: 0x44
 */
int Navi::getDopeCount(int sprayType)
{
	if (gameSystem->isVersusMode()) {
		return (mSprayCounts[sprayType]);
	}

	return playData->getDopeCount(sprayType);
}

/**
 * @note Address: 0x80140EC0
 * @note Size: 0x4C
 */
void Navi::useDope(int sprayType)
{
	if (gameSystem->isVersusMode()) {
		mSprayCounts[sprayType]--;
		return;
	}

	playData->useDope(sprayType);
}

/**
 * @note Address: 0x80140F0C
 * @note Size: 0xA0
 */
void Navi::incDopeCount(int sprayType)
{
	if (gameSystem->isVersusMode()) {
		GameMessageVsGetDoping dopeMessage(mNaviIndex, sprayType);
		gameSystem->mSection->sendMessage(dopeMessage);
		mSprayCounts[sprayType]++;
		return;
	}

	playData->incDopeCount(sprayType);
}

/**
 * @note Address: 0x80140FB4
 * @note Size: 0x2E0
 * 87%
 */
void Navi::applyDopes(int sprayType, Vector3f& sprayOrigin)
{
	if (sprayType == SPRAY_TYPE_BITTER) {
		Sys::Sphere searchCirc(sprayOrigin, 140.0f);
		Delegate1<Game::Navi, Game::CellObject*> funcCallback(this, applyDopeSmoke);

		cellMgr->mapSearch(searchCirc, &funcCallback);
		return;
	}

	Iterator<Creature> cellIt(mCPlateMgr);
	Creature* sprayTarget = nullptr;
	CI_LOOP(cellIt)
	{
		Creature* got = *cellIt;
		if (got->isPiki()) {
			InteractDope dope(this, sprayType);
			if (got->stimulate(dope) && sprayTarget == nullptr) {
				sprayTarget = got;
			}
		}
	}
}

/**
 * @note Address: 0x80141294
 * @note Size: 0x1B0
 */
void Navi::applyDopeSmoke(CellObject* object)
{
	Creature* creature = static_cast<Creature*>(object);

	Vector3f naviPos = getPosition();
	Vector3f direction;
	direction.x = mWhistle->mPosition.x - naviPos.x;
	direction.y = mWhistle->mPosition.y - naviPos.y;
	direction.z = mWhistle->mPosition.z - naviPos.z;
	direction.qNormalise();

	Vector3f objPos   = creature->getPosition();
	Vector3f smokePos = naviPos + (direction * 50.0f);
	Vector3f sep      = objPos - smokePos;
	if (sep.qLength() <= 140.0f) {
		InteractDope dope(this, 1);
		creature->stimulate(dope);
	}
}

/**
 * @note Address: 0x80141444
 * @note Size: 0x1C
 */
int Navi::getStateID()
{
	if (mCurrentState) {
		return mCurrentState->mId;
	}

	return -1;
}

/**
 * @note Address: 0x80141460
 * @note Size: 0x44
 */
void Navi::transit(int next, StateArg* arg)
{
	mFsm->transit(this, next, arg);
}

/**
 * @note Address: 0x801414A4
 * @note Size: 0xC
 */
OlimarData* Navi::getOlimarData()
{
	return playData->mOlimarData;
}

/**
 * @note Address: 0x801414B0
 * @note Size: 0x14
 */
JAInter::Object* Navi::getJAIObject()
{
	return mSoundObj;
}

/**
 * @note Address: 0x801414C4
 * @note Size: 0x8
 */
PSM::Creature* Navi::getPSCreature()
{
	return mSoundObj;
}

/**
 * @note Address: 0x801414CC
 * @note Size: 0x44
 */
void Navi::wallCallback(Vector3f& pos)
{
	if (mCurrentState) {
		mCurrentState->wallCallback(this, pos);
	}
}

/**
 * @note Address: 0x80141514
 * @note Size: 0x44
 */
void Navi::bounceCallback(Sys::Triangle* tri)
{
	if (mCurrentState) {
		mCurrentState->bounceCallback(this, tri);
	}
}

/**
 * @note Address: 0x8014155C
 * @note Size: 0x44
 */
void Navi::collisionCallback(CollEvent& event)
{
	if (mCurrentState) {
		mCurrentState->collisionCallback(this, event);
	}
}

/**
 * @note Address: 0x801415A4
 * @note Size: 0x194
 */
void Navi::platCallback(PlatEvent& plat)
{
	Creature* obj = plat.mObj;
	if (plat.mInstance->mId.match('elec', '*')) {
		if (!playData->mOlimarData->hasItem(OlimarData::ODII_DreamMaterial)) {
			Vector3f origin;
			plat.mInstance->mMatrix->getColumn(2, origin);
			Vector3f objPos = obj->getPosition();
			Vector3f sep    = mPosition - objPos;
			if (sep.dot(origin) < 0.0f) {
				origin.x *= -1.0f;
				origin.z *= -1.0f;
			}
			Vector3f mag = origin;
			mag *= 200.0f;
			mag.y = 150.0f;
			NaviFlickArg arg(obj, mag, naviMgr->mNaviParms->mNaviParms.mElectricGateDamage());
			transit(NSID_Flick, &arg);
		}

		return;
	}

	if (plat.mInstance->mId.match('finl', '*')) {
		mCPlateMgr->shrink();
	}
}

/**
 * @note Address: 0x80141738
 * @note Size: 0x4
 */
void Navi::viewEntryShape(Matrixf&, Vector3f&)
{
}

/**
 * @note Address: 0x8014173C
 * @note Size: 0x8
 */
SysShape::Model* Navi::viewGetShape()
{
	return mModel;
}

/**
 * @note Address: 0x80141744
 * @note Size: 0x1C
 */
f32 Navi::viewGetBaseScale()
{
	return mNaviIndex == NAVIID_Olimar ? OLIMAR_SCALE : LOUIE_SCALE;
}

/**
 * @note Address: 0x80141760
 * @note Size: 0x1F8
 * ////////////////////////FIX//SOME//WEIRD//STUFF//GOING//ON//HERE////////////////////////
 * 86%
 */
void Navi::doEntry()
{
	FakePiki::doEntry();
	if (!isAlive() && mHideModel) {
		mLod.resetFlag(AILOD_IsVisibleBoth);
	}

	if (mController1 == nullptr) {
		return;
	}

	mCursorMatAnim->animate(10.0f);
	mArrowMatAnim->animate(0.0f);

	if (!isControlFlag(NAVICTRL_InMovie)) {
		if (moviePlayer->isFlag(MVP_IsActive)) {
			mMarkerModel->hide();
		} else {
			mMarkerModel->show();
		}

		mMarkerModel->mJ3dModel->entry();
	}

	J3DGXColorS10 color;
	if (mNextThrowPiki) {
		Color4& col = Piki::pikiColorsCursor[mNextThrowPiki->getKind()];
		color.r     = col.r;
		color.g     = col.g;
		color.b     = col.b;
		color.a     = col.a;
	} else {
		color.r = color.g = color.b = color.a = 255;
	}

	J3DMaterial* materials = mCursorModel->mJ3dModel->mModelData->mMaterialTable.mMaterials[0];
	if (materials) {
		materials->mTevBlock->setTevColor(0, color);
		mCursorModel->mJ3dModel->calcMaterial();
		mCursorModel->mJ3dModel->diff();
	}

	if (!isControlFlag(NAVICTRL_InMovie)) {
		if (moviePlayer->isFlag(MVP_IsActive)) {
			mCursorModel->hide();
		} else {
			mCursorModel->show();
		}

		mCursorModel->mJ3dModel->entry();
	}
}

/**
 * @note Address: 0x80141958
 * @note Size: 0x2C4
 */
void Navi::doAnimation()
{
	if (isMovieMotion()) {
		f32 time = sys->mDeltaTime;
		updateCell();

		AILODParm parm;
		parm.mFar   = 0.02f;
		parm.mClose = 0.015f;
		updateLOD(parm);

		mModel->clearAnimatorAll();

		f32 animTime = time * 30.0f;
		mAnimator.mSelfAnimator.animate(animTime);
		mAnimator.mBoundAnimator.animate(animTime);

		updateTrMatrix();

		mAnimator.mBoundAnimator.setModelCalc(mModel, 0);
		PSMTXCopy(mBaseTrMatrix.mMatrix.mtxView, mModel->mJ3dModel->mPosMtx);
		mModel->mJ3dModel->calc();

		mCollTree->update();
		updateCursor();
	} else {
		if (mapMgr) {
			FakePiki::doAnimation();
		} else {
			f32 time = sys->mDeltaTime;
			updateCell();
			if (!gameSystem->mIsFrozen) {
				mAnimator.mSelfAnimator.animate(mAnimSpeed * time);
				mAnimator.mBoundAnimator.animate(mAnimSpeed * time);
			}
			updateTrMatrix();
			moveVelocity();
			moveRotation();
			PSMTXCopy(mBaseTrMatrix.mMatrix.mtxView, mModel->mJ3dModel->mPosMtx);
			mModel->mJ3dModel->calc();
			mCollTree->update();
		}
		updateBeaconPosition();

		f32 rad = mWhistle->mRadius;
		if (mController1) {
			mEffectsObj->updateCursor_(*mEffectsObj->mNaviPos, rad);
		} else {
			mEffectsObj->updateCursor_(*mEffectsObj->mNaviPos, rad);
		}
		updateCursor();
	}
}

/**
 * @note Address: 0x80141C1C
 * @note Size: 0x280
 */
void Navi::updateCursor()
{
	Vector3f whistlePos = mWhistle->mPosition;
	Vector3f dir        = whistlePos - getPosition();
	dir.qNormalise();

	Vector3f yVec = mWhistle->mNormal;
	Vector3f xVec = yVec;
	xVec.CP(dir);
	dir = xVec;
	dir.qNormalise();

	Vector3f zVec = dir;
	zVec.CP(yVec);
	zVec.qNormalise();

	Matrixf mtx;

	mtx.setColumn(0, dir);
	mtx.setColumn(1, yVec);
	mtx.setColumn(2, zVec);
	mtx.setColumn(3, whistlePos);

	PSMTXCopy(mtx.mMatrix.mtxView, mMarkerModel->mJ3dModel->mPosMtx);
	PSMTXCopy(mtx.mMatrix.mtxView, mCursorModel->mJ3dModel->mPosMtx);
	mMarkerModel->mJ3dModel->calc();
	mCursorModel->mJ3dModel->calc();
}

/**
 * @note Address: 0x80141E9C
 * @note Size: 0x58
 */
void Navi::doSimulation(f32 timeStep)
{
	if (moviePlayer->isFlag(MVP_IsActive)) {
		mVelocity       = Vector3f(0.0f);
		mTargetVelocity = Vector3f(0.0f);
		mAcceleration   = Vector3f(0.0f);
	}

	FakePiki::doSimulation(timeStep);
}

/**
 * @note Address: 0x80141EF4
 * @note Size: 0xB8
 */
void Navi::doSetView(int viewportNumber)
{
	Creature::doSetView(viewportNumber);
	mMarkerModel->setCurrentViewNo(viewportNumber);
	mCursorModel->setCurrentViewNo(viewportNumber);

	if (mLod.isVPVisible(viewportNumber)) {
		mMarkerModel->showPackets();
		mCursorModel->showPackets();
	} else {
		mMarkerModel->hidePackets();
		mCursorModel->hidePackets();
	}
}

/**
 * @note Address: 0x80141FAC
 * @note Size: 0x3C
 */
void Navi::doViewCalc()
{
	Creature::doViewCalc();
	mMarkerModel->viewCalc();
	mCursorModel->viewCalc();
}

/**
 * @note Address: 0x80141FE8
 * @note Size: 0x14
 */
void Navi::setLifeMax()
{
	mHealth = naviMgr->mNaviParms->mNaviParms.mMaxHealth;
}

/**
 * @note Address: 0x80141FFC
 * @note Size: 0x18
 */
f32 Navi::getLifeRatio()
{
	return mHealth / naviMgr->mNaviParms->mNaviParms.mMaxHealth.mValue;
}

/**
 * @note Address: 0x80142014
 * @note Size: 0xAC
 */
int Navi::getDownfloorMass()
{
	NaviState* curState = mCurrentState;

	int id;
	if (curState) {
		id = curState->mId;
	} else {
		id = -1;
	}

	int mass = naviMgr->mNaviParms->mNaviParms.mSeesawWeight();

	// if we're holding a piki, modify our mass
	if (id == NSID_ThrowWait) {
		Piki* heldPiki = static_cast<NaviThrowWaitState*>(curState)->mHeldPiki;
		int a          = 1; // default mass to add is 1

		if (heldPiki) {
			int pikiState = heldPiki->getStateID();
			if (pikiState == PIKISTATE_Hanged) {
				if (static_cast<NaviThrowWaitState*>(curState)->mHeldPiki->getKind() == Purple) {
					a = 2; // held piki is purple, so add double mass
				}
			} else {
				a = 0; // held piki isn't in correct state, so don't add mass
			}
		} else {
			a = 0; // held piki doesn't exist, so don't add mass
		}

		return mass + a;
	}

	return mass;
}

/**
 * @note Address: 0x801420C0
 * @note Size: 0x2A8
 */
void Navi::update()
{
	if (mInvincibleTimer) {
		mInvincibleTimer--;
	}
	mSoundObj->exec();
	demoCheck();
	updateLook();
	updateLookCreature();
	updateKaisanDisable();
	updateThrowDisable();
	mEffectsObj->update();

	ItemHole::Item* hole = checkHole();
	if (hole && mController1 && mController1->getButtonDown() & Controller::PRESS_A) {
		gameSystem->mSection->openCaveMoreMenu(hole, mController1);
		return;
	}

	ItemCave::Item* cave = checkCave();
	if (cave && mController1 && mController1->getButtonDown() & Controller::PRESS_A) {
		gameSystem->mSection->openCaveInMenu(cave, mNaviIndex);
		return;
	}

	ItemBigFountain::Item* geyser = checkBigFountain();
	if (geyser && mController1 && mController1->getButtonDown() & Controller::PRESS_A && !geyser->isAlive()) {
		gameSystem->mSection->openKanketuMenu(geyser, mController1);
		return;
	}

	if (abs(mFootmarks->mLastUpdateTime - gameSystem->mFrameTimer) > 10) {
		Footmark mark;
		mark.mPosition = getPosition();
		mFootmarks->add(mark);
	}

	if (!gameSystem->paused_soft() && gameSystem->isVersusMode() && mController1 && mController1->getButtonDown() & Controller::PRESS_Y
	    && mCurrentState && mCurrentState->vsUsableY()) {
		GameMessageVsUseCard mesg(mNaviIndex);
		gameSystem->mSection->sendMessage(mesg);
	}

	mFsm->exec(this);
	mCPlateMgr->update();
}

/**
 * @note Address: 0x8014237C
 * @note Size: 0x4
 */
void Navi::do_updateLookCreature()
{
}

/**
 * @note Address: 0x80142380
 * @note Size: 0x9C
 */
void Navi::inWaterCallback(WaterBox* wb)
{
	mEffectsObj->mHeight = wb->getSeaHeightPtr();

	efx::TNaviEffect* fx = mEffectsObj;

	bool isX = fx->isFlag(efx::NAVIFX_InWater);
	fx->setFlag(efx::NAVIFX_InWater);
	fx->updateHamon_();

	if (!isX) {
		efx::createSimpleDive(fx->mHamonPosition);
	}

	mSoundObj->startSound(PSSE_PL_WATER_IN, 0);
}

/**
 * @note Address: 0x8014241C
 * @note Size: 0x44
 */
void Navi::outWaterCallback()
{
	efx::TNaviEffect* fx = mEffectsObj;
	fx->resetFlag(efx::NAVIFX_InWater);
	fx->killHamonA_();
	fx->killHamonB_();
}

/**
 * @note Address: 0x80142460
 * @note Size: 0xB0
 */
bool Navi::ignoreAtari(Creature* other)
{
	if (moviePlayer->isFlag(MVP_IsActive) && other->isNavi()) {
		return true;
	}

	if (other->isPellet() && ((Pellet*)other)->mPelletFlag == 1) {
		return true;
	}

	return mCurrentState->ignoreAtari(other);
}

/**
 * @note Address: 0x80142518
 * @note Size: 0x4C
 */
void Navi::on_movie_begin(bool)
{
	setControlFlag(NAVICTRL_InMovie);

	efx::TNaviEffect* fx = mEffectsObj;
	fx->killCursor_();
	fx->killLightAct_();
	fx->killFueact_();
}

/**
 * @note Address: 0x80142564
 * @note Size: 0x48
 */
void Navi::on_movie_end(bool)
{
	resetControlFlag(NAVICTRL_InMovie);
	startMotion(IPikiAnims::WAIT, IPikiAnims::WAIT, nullptr, nullptr);
}

/**
 * @note Address: 0x801425AC
 * @note Size: 0x27C
 */
void Navi::movieUserCommand(u32 command, MoviePlayer* player)
{
	switch (command) {
	case CC_MovieCommand1: {
		enterAllPikis();
		if (player->isFlag(MVP_IsFinished)) {
			pikiMgr->forceEnterPikmins(0);
		}
		break;
	}

	case CC_MovieCommand3: {
		Creature* hole = player->mTargetObject;
		JUT_ASSERTLINE(2134, hole != nullptr, "no target!! HOLEIN\n");

		Vector3f pos = hole->getPosition();
		holeinAllPikis(pos);
		break;
	}

	case CC_MovieCommand4: {
		Creature* fountain = player->mTargetObject;
		JUT_ASSERTLINE(2148, fountain, "no target!! FOUNTAINON\n");

		Vector3f pos = fountain->getPosition();
		fountainonAllPikis(pos);
		break;
	}

	case CC_MovieCommand5: {
		shadowMgr->delShadow(this);
		break;
	}

	case CC_MovieCommand8: {
		shadowMgr->addShadow(this);
		break;
	}

	case CC_MovieCommand6: {
		efx::TNaviEffect* fx = mEffectsObj;

		if (!fx->isFlag(efx::NAVIFX_IsSaved)) {
			fx->saveFlags();
		}

		fx->mLight.forceKill();
		fx->mLightAct.forceKill();
		fx->mDamage.forceKill();

		fx->killHamonA_();
		fx->killHamonB_();
		fx->killLight_();
		fx->killLightAct_();
		fx->killCursor_();
		fx->killFueact_();
		break;
	}

	case CC_MovieCommand7: {
		efx::TNaviEffect* fx = mEffectsObj;
		if (fx->isFlag(efx::NAVIFX_IsSaved)) {
			fx->restoreFlags();
		}

		u32 inWater = fx->mFlags.typeView & efx::NAVIFX_InWater;
		if (inWater) {
			fx->enterWater(inWater);
		}

		if (fx->isFlag(efx::NAVIFX_LightOn)) {
			fx->createLight();
		}
		break;
	}
	}
}

/**
 * @note Address: 0x80142828
 * @note Size: 0x28
 */
void Navi::movieSetFaceDir(f32 direction)
{
	mFaceDir = direction;
	mWhistle->setFaceDir(direction);
}

/**
 * @note Address: 0x80142850
 * @note Size: 0x4C
 */
void Navi::movieStartAnimation(u32 anim)
{
	startMotion(anim, anim, nullptr, nullptr);
	mAnimSpeed = 30.0f;
}

/**
 * @note Address: 0x8014289C
 * @note Size: 0xDC
 */
void Navi::movieStartDemoAnimation(SysShape::AnimInfo* info)
{
	mAnimator.mBoundAnimator.startExAnim(info);
	mAnimator.mSelfAnimator.startExAnim(info);

	P2ASSERTLINE(2201, mAnimator.mSelfAnimator.assertValid(mModel));
	P2ASSERTLINE(2202, mAnimator.mBoundAnimator.assertValid(mModel));

	mModel->clearAnimatorAll();

	mAnimator.mBoundAnimator.setModelCalc(mModel, 0);
}

/**
 * @note Address: 0x80142978
 * @note Size: 0x88
 */
void Navi::movieSetTranslation(Vector3f& newpos, f32 dir)
{
	mVelocity         = 0.0f;
	mTargetVelocity   = 0.0f;
	mAcceleration     = 0.0f;
	mPreviousPosition = mPosition;
	setPosition(newpos, false);
	mFaceDir = dir;
}

/**
 * @note Address: 0x80142A00
 * @note Size: 0x12C
 */
bool Navi::movieGotoPosition(Vector3f& pos)
{
	Vector3f sep = pos - mPosition;
	f32 xz       = sep.x * sep.x + sep.z * sep.z;
	sep.qNormalise();

	if (xz < 400.0f) {
		mTargetVelocity = 0.0f;
		mVelocity       = 0.0f;
		return true;
	}

	mTargetVelocity = (sep * naviMgr->mNaviParms->mNaviParms.mMoveSpeed()) * 0.5f;
	return false;
}

/**
 * @note Address: 0x80142B2C
 * @note Size: 0x1A8
 */
void Navi::set_movie_draw(bool on)
{
	if (!isMovieActor() && on) {
		if (isAlive()) {
			mEffectsObj->setMovieEffect();
		}
	} else if (!isMovieActor() && !on) {
		efx::TNaviEffect* effectsObj = mEffectsObj;
		if (!effectsObj->isFlag(efx::NAVIFX_IsSaved)) {
			effectsObj->saveFlags();
		}

		effectsObj->mLight.forceKill();
		effectsObj->mLightAct.forceKill();
		effectsObj->mDamage.forceKill();
		effectsObj->killHamonA_();
		effectsObj->killHamonB_();
		effectsObj->killLight_();
		effectsObj->killLightAct_();
		effectsObj->killCursor_();
		effectsObj->killFueact_();
	}
}

/**
 * @note Address: 0x80142CD4
 * @note Size: 0x50
 */
bool Navi::isWalking()
{
	return mTargetVelocity.qLength() > 10.0f;
}

/**
 * @note Address: 0x80142D24
 * @note Size: 0x16C
 */
void Navi::setDeadLaydown()
{
	int id         = mNaviIndex;
	PlayData* data = playData;
	data->mDeadNaviID.setBit(id);

	Vector3f offset;
	if (id == NAVIID_Olimar) { // olimar
		offset = Vector3f(-170.0f, 0.0f, 40.0f);
	} else { // louie/president
		offset = Vector3f(-190.0f, 0.0f, 10.0f);
	}
	if (mapMgr->getDemoMatrix()) {
		Matrixf* mtx = mapMgr->getDemoMatrix();
		Vector3f newpos;
		PSMTXMultVec(mtx->mMatrix.mtxView, (Vec*)&offset, (Vec*)&newpos);
		offset = newpos;
		setPosition(offset, false);
		startMotion(IPikiAnims::DEAD, IPikiAnims::DEAD, nullptr, nullptr);
		mHideModel = false;
	} else {
		mHideModel = true;
	}
	setAlive(false);
	naviMgr->informOrimaDead(id);
	mHealth = 0.0f;
}

/**
 * @note Address: 0x80142E90
 * @note Size: 0x2DC
 */
ItemHole::Item* Navi::checkHole()
{
	if (!ItemHole::mgr) {
		return nullptr;
	}
	if (moviePlayer->mDemoState != DEMOSTATE_Inactive) {
		return nullptr;
	}
	if (getStateID() != NSID_Walk) {
		return nullptr;
	}

	Iterator<BaseItem> iterator(ItemHole::mgr);
	CI_LOOP(iterator)
	{
		ItemHole::Item* hole = static_cast<ItemHole::Item*>(*iterator);
		if (hole->isAlive() && hole->canRide() && !hole->mBarrel) {
			Vector3f holepos = hole->getPosition();
			if (holepos.sqrDistance2D(mPosition) < 3600.0f) {
				return hole;
			}
		}
	}

	return nullptr;
}

/**
 * @note Address: 0x801431B8
 * @note Size: 0x2CC
 */
ItemCave::Item* Navi::checkCave()
{
	if (!ItemCave::mgr) {
		return nullptr;
	}
	if (moviePlayer->mDemoState != DEMOSTATE_Inactive) {
		return nullptr;
	}
	if (getStateID() != NSID_Walk) {
		return nullptr;
	}

	Iterator<BaseItem> iterator(ItemCave::mgr);
	CI_LOOP(iterator)
	{
		ItemCave::Item* hole = static_cast<ItemCave::Item*>(*iterator);
		if (hole->isAlive() && !hole->mBarrel) {
			Vector3f holepos = hole->getPosition();
			if (holepos.sqrDistance2D(mPosition) < 6400.0f) {
				return hole;
			}
		}
	}
	return nullptr;
}

/**
 * @note Address: 0x80143484
 * @note Size: 0x2B4
 */
ItemBigFountain::Item* Navi::checkBigFountain()
{
	if (!ItemBigFountain::mgr) {
		return nullptr;
	}
	if (moviePlayer->mDemoState != DEMOSTATE_Inactive) {
		return nullptr;
	}
	if (getStateID() != NSID_Walk) {
		return nullptr;
	}

	Iterator<BaseItem> iterator(ItemBigFountain::mgr);
	CI_LOOP(iterator)
	{
		ItemBigFountain::Item* hole = static_cast<ItemBigFountain::Item*>(*iterator);
		if (hole->canRide()) {
			Vector3f holepos = hole->getPosition();
			if (holepos.sqrDistance2D(mPosition) < 6400.0f) {
				return hole;
			}
		}
	}

	return nullptr;
}

/**
 * @note Address: 0x80143738
 * @note Size: 0x368
 */
Onyon* Navi::checkOnyon()
{
	if (!gameSystem->isStoryMode()) {
		return nullptr;
	}
	if (moviePlayer->mDemoState != DEMOSTATE_Inactive) {
		return nullptr;
	}
	if (!ItemOnyon::mgr) {
		return nullptr;
	}
	if (gameSystem->isStoryMode() && gameSystem->mTimeMgr->mDayCount == 0) {
		return nullptr;
	}
	if (getStateID() != NSID_Walk) {
		return nullptr;
	}

	Iterator<Onyon> iterator(ItemOnyon::mgr);
	Vector3f navipos = getPosition();
	Onyon* ret       = nullptr;
	CI_LOOP(iterator)
	{
		Onyon* onyon = static_cast<Onyon*>(*iterator);
		if (onyon->mOnyonType != ONYON_TYPE_POD
		    && (onyon->mOnyonType != ONYON_TYPE_SHIP || ((playData->hasContainer(White) || playData->hasContainer(Purple))))) {
			if (onyon->insideAccessArea(navipos)) {
				onyon->setSpotEffectActive(true);
				PSSystem::spSysIF->playSystemSe(PSSE_SY_ONYON_READY, 0);
				mNaviControlFlag.unset(2);
				ret = onyon;
			} else {
				mNaviControlFlag.set(2);
				onyon->setSpotEffectActive(false);
			}
		}
	}

	return ret;
}

/**
 * @note Address: 0x80143AEC
 * @note Size: 0x8
 */
f32 Navi::getMapCollisionRadius()
{
	return 8.5f;
}

/**
 * @note Address: 0x80143AF4
 * @note Size: 0x4
 */
void Navi::doDirectDraw(Graphics&)
{
}

// /**
//  * @note Address: N/A
//  * @note Size: 0x4
//  */
// void Navi::draw2d(J2DGrafContext&)
// {
// 	// UNUSED FUNCTION
// }

// /**
//  * @note Address: N/A
//  * @note Size: 0x8
//  */
// void Navi::changeCamera(Camera*)
// {
// 	// UNUSED FUNCTION
// }

// /**
//  * @note Address: N/A
//  * @note Size: 0xC
//  */
// void Navi::restoreCamera()
// {
// 	// UNUSED FUNCTION
// }

/**
 * @note Address: 0x80143AF8
 * @note Size: 0xC
 */
void Navi::disableController()
{
	mController1 = nullptr;
}

// /**
//  * @note Address: N/A
//  * @note Size: 0x8
//  */
// void Navi::changeController(Controller*)
// {
// 	// UNUSED FUNCTION
// }

// /**
//  * @note Address: N/A
//  * @note Size: 0xC
//  */
// void Navi::restoreController()
// {
// 	// UNUSED FUNCTION
// }

/**
 * @note Address: 0x80143B04
 * @note Size: 0xD8
 */
void Navi::control()
{
	if (moviePlayer->isFlag(MVP_IsActive) == FALSE) {
		makeVelocity();
	}

	makeCStick(false);

	if (isMovieActor()) {
		return;
	}

	if (gameSystem->isStoryMode()) {
		Navi* active = naviMgr->getActiveNavi();
		if (active != this) {
			return;
		}
		f32 z = mCStickPosition.z;
		f32 x = mCStickPosition.x;
		mSoundObj->mRappa.playRappa(true, x, z, mSoundObj);

	} else {
		f32 z = mCStickPosition.z;
		f32 x = mCStickPosition.x;
		mSoundObj->mRappa.playRappa(true, x, z, mSoundObj);
	}
}

/**
 * @note Address: 0x80143BDC
 * @note Size: 0x418
 */
void Navi::makeVelocity()
{
	if (mController1
	    && ((mController1->getButton() & Controller::PRESS_A) || (mController1->getButton() & Controller::PRESS_B)
	        || (mController1->getButton() & Controller::PRESS_X) || (mController1->getButton() & Controller::PRESS_Y)
	        || (mController1->getButton() & Controller::PRESS_Z) || (mController1->getButton() & Controller::PRESS_L)
	        || (mController1->getButton() & Controller::PRESS_R) || (mController1->getButton() & Controller::PRESS_DPAD_UP)
	        || (mController1->getButton() & Controller::PRESS_DPAD_DOWN) || (mController1->getButton() & Controller::PRESS_DPAD_LEFT)
	        || (mController1->getButton() & Controller::PRESS_DPAD_RIGHT))) {
		mSceneAnimationTimer = 0.0f;
	} else {
		mSceneAnimationTimer += sys->mDeltaTime;
	}

	f32 ax = 0.0f;
	f32 az = ax;
	if (mController1) {
		ax = -mController1->getMainStickX();
		az = mController1->getMainStickY();
	}
	Vector3f inputPos(ax, 0.0f, az);
	reviseController(inputPos);

	f32 x = inputPos.x;
	f32 z = inputPos.z;

	Vector3f side = mCamera->getSideVector();
	Vector3f up   = mCamera->getUpVector();
	Vector3f view = mCamera->getViewVector();
	Vector3f side2D(side.x, 0.0f, side.z);
	side2D.qNormalise();

	Vector3f front;
	if (up.y > view.y) {
		front = view;
	} else {
		front = up;
	}
	Vector3f front2D(front.x, 0.0f, front.z);
	front2D.qNormalise();

	Vector3f result(side2D * x + front2D * z);

	f32 speed;
	if (playData->mOlimarData->hasItem(OlimarData::ODII_RepugnantAppendage)) {
		speed = naviMgr->mNaviParms->mNaviParms.mRushBootSpeed();
	} else {
		speed = naviMgr->mNaviParms->mNaviParms.mMoveSpeed();
	}
	f32 dist = result.qLength();
	if (dist > naviMgr->mNaviParms->mNaviParms.mNeutralStickThreshold()) {
		mSceneAnimationTimer = 0.0f;
	}

	f32 mod         = 1.0f;
	mTargetVelocity = result * speed * mod;

	if (mController1) {
		NaviParms* parms  = naviMgr->mNaviParms;
		bool turnToCursor = false;
		if (mSceneAnimationTimer >= parms->mNaviParms.mCursorLookTime()) {
			turnToCursor = true;
		}
		if ((turnToCursor || (!turnToCursor && dist > parms->mNaviParms.mNeutralStickThreshold()))
		    && (dist <= parms->mNaviParms.mCursorMovementStick())) {
			mTargetVelocity = 0.0f;
			f32 rad         = pikmin2_atan2f(mWhistle->mNaviOffsetVec.x, mWhistle->mNaviOffsetVec.z);
			rad             = roundAng(rad);
			rad             = angDist(rad, mFaceDir);
			mFaceDir += rad * 0.2f;
			mFaceDir = roundAng(mFaceDir);
			setMoveRotation(false);
		} else {
			setMoveRotation(true);
		}
	}
	mWhistle->update(result, false);
}

/**
 * @note Address: 0x80143FF4
 * @note Size: 0x1A4
 */
void Navi::reviseController(Vector3f& input)
{
	// get input magnitude and angle
	f32 stickMag = input.qLength();
	f32 theta    = roundAng(pikmin2_atan2f(input.x, input.z));

	// bin angle in amounts set by navi parameter
	f32 binWidth    = TORADIANS(naviMgr->mNaviParms->mNaviParms.mShakePreventionAngle());
	f32 binnedAngle = binWidth * int((binWidth * 0.5f + theta) / binWidth);

	// calculate amount to boost stick magnitude by
	f32 boostFactor = -((int)(binnedAngle / QUARTER_PI) * QUARTER_PI - binnedAngle);
	theta           = pikmin2_sinf(QUARTER_PI - boostFactor);
	boostFactor     = pikmin2_sinf(boostFactor);
	boostFactor += theta;

	// boost stick magnitude
	stickMag *= (1.0f / (pikmin2_sinf(QUARTER_PI) / boostFactor)); // same as * boostFactor * sqrt(2)

	// make 'close enough' good enough (mClampStick = 0.85 in vanilla)
	if (stickMag >= naviMgr->mNaviParms->mNaviParms.mClampStick()) {
		stickMag = 1.0f;
	}

	// enforce dead zone
	if (stickMag < naviMgr->mNaviParms->mNaviParms.mNeutralStickThreshold()) {
		stickMag = 0.0f;
	}

	// recalculate input vector based on adjusted angle and magnitude
	input = getDirectionP2(binnedAngle, stickMag);
}

/**
 * @note Address: 0x80144198
 * @note Size: 0x1D4
 */
void Navi::callPikis()
{
	numSearch = 0;
	Vector3f mPos(mWhistle->mPosition);
	Sys::Sphere bounds(mPos, mWhistle->mRadius);
	CellIteratorArg arg(bounds);
	CellIterator iterator(arg);
	f32 time       = 0.0f;
	FakePiki* last = nullptr;
	CI_LOOP(iterator)
	{
		time += sys->mDeltaTime;
		JUT_ASSERTLINE(3156, !(time > 15.0f), "timeout %d,%d:%d\n%d,%d-%d,%d\n", iterator.mCurrX, iterator.mCurrY, iterator.mCurrLayerIdx,
		               iterator.mMinX, iterator.mMinY, iterator.mMaxX, iterator.mMaxY);

		FakePiki* piki = static_cast<FakePiki*>(*iterator);

		JUT_ASSERTLINE(3169, (!last || last != piki), "infloop %d,%d:%d\n%d,%d-%d,%d\n", iterator.mCurrX, iterator.mCurrY,
		               iterator.mCurrLayerIdx, iterator.mMinX, iterator.mMinY, iterator.mMaxX, iterator.mMaxY);

		last = piki;
		if (piki && piki != this) {
			InteractFue act(this, false, true); // don't combine parties, is new to party
			piki->stimulate(act);
		}
	}
}

// /**
//  * @note Address: N/A
//  * @note Size: 0x14C
//  */
// void Navi::applyForceObjectsInWhistle(CellObject*)
// {
// 	// UNUSED FUNCTION
// }

/**
 * @note Address: 0x8014436C
 * @note Size: 0x8C
 */
bool Navi::invincible()
{
	if (moviePlayer && moviePlayer->mDemoState != DEMOSTATE_Inactive) {
		return true;
	}
	if (mInvincibleTimer) {
		return true;
	}
	if (!gameSystem->isFlag(GAMESYS_IsGameWorldActive)) {
		return true;
	}
	if (mCurrentState) {
		return mCurrentState->invincible();
	}
	return true;
}

/**
 * @note Address: 0x80144400
 * @note Size: 0x8
 */
void Navi::setInvincibleTimer(u8 timer)
{
	mInvincibleTimer = timer;
}

/**
 * @note Address: 0x80144408
 * @note Size: 0x208
 */
void Navi::startDamage(f32 damage)
{
	if (!isAlive() || invincible()) {
		return;
	}

	if (playData->mOlimarData->hasItem(OlimarData::ODII_JusticeAlloy)) {
		damage *= naviMgr->mNaviParms->mNaviParms.mShieldDamageReductionRate();
	}
	if (getStateID() != NSID_Damaged) {
		NaviDamageArg arg(damage);
		mFsm->transit(this, NSID_Damaged, &arg);
		mHealth -= damage;
		mSoundObj->startSound(PSSE_PL_ORIMA_DAMAGE, 0);
		cameraMgr->startVibration(VIBTYPE_NaviDamage, mNaviIndex);
		rumbleMgr->startRumble(RUMBLETYPE_NaviDamage, mNaviIndex);
		mEffectsObj->createOrimadamage_(mEffectsObj->mHeadMtx->mMatrix.mtxView);
		PSM::DamageDirector* director = PSMGetDamageD();
		if (director) {
			director->directOn();
		}
		if (mHealth < 1.0f) {
			if (getStateID() != NSID_Dead) {
				mFsm->transit(this, NSID_Dead, nullptr);
			}
		}
	}
}

/**
 * @note Address: 0x80144610
 * @note Size: 0x214
 */
void Navi::addDamage(f32 damage, bool playSound)
{
	if ((!moviePlayer || moviePlayer->mDemoState == DEMOSTATE_Inactive) && gameSystem->isFlag(GAMESYS_IsGameWorldActive)) {
		if (playData->mOlimarData->hasItem(OlimarData::ODII_JusticeAlloy)) {
			damage *= naviMgr->mNaviParms->mNaviParms.mShieldDamageReductionRate();
		}

		if (!isAlive() || mCurrentState->invincible()) {
			return;
		} else if (invincible()) {
			return;
		}

		mHealth -= damage;

		if (playSound) {
			mSoundObj->startSound(PSSE_PL_ORIMA_DAMAGE, 0);
			cameraMgr->startVibration(VIBTYPE_NaviDamage, mNaviIndex);
			rumbleMgr->startRumble(RUMBLETYPE_NaviDamage, mNaviIndex);
			mEffectsObj->createOrimadamage_(mEffectsObj->mHeadMtx->mMatrix.mtxView);
			PSM::DamageDirector* director = PSMGetDamageD();
			if (director) {
				director->directOn();
			}
		}

		if (mHealth < 1.0f) {
			if (getStateID() != NSID_Dead) {
				mFsm->transit(this, NSID_Dead, nullptr);
			}
		}
	}
}

/**
 * @note Address: 0x80144824
 * @note Size: 0x29C
 */
void Navi::enterAllPikis()
{
	Iterator<Piki> iterator(pikiMgr);
	int pikis = 0;
	Piki* buffer[MAX_PIKI_COUNT];
	CI_LOOP(iterator)
	{
		Piki* piki = *iterator;
		if (piki->isAlive()) {
			buffer[pikis++] = piki;
		}
	}

	for (int i = 0; i < pikis; i++) {
		Onyon* target = nullptr;
		Piki* piki    = buffer[i];
		if (piki->getKind() <= Yellow) {
			target = ItemOnyon::mgr->getOnyon(piki->getKind());
		} else {
			target = ItemOnyon::mgr->mUfo;
		}

		if (target) {
			PikiAI::CreatureActionArg arg(target);
			piki->mBrain->start(PikiAI::ACT_Enter, &arg);
		}
	}
}

/**
 * @note Address: 0x80144AC0
 * @note Size: 0x14
 */
bool Navi::formationable()
{
	return mDisbandTimer == 0;
}

// /**
//  * @note Address: N/A
//  * @note Size: 0xC
//  */
// void Navi::startKaisanDisable()
// {
// 	// UNUSED FUNCTION
// }

/**
 * @note Address: 0x80144AD4
 * @note Size: 0x70
 */
void Navi::updateKaisanDisable()
{
	if (mDisbandTimer > 0 && mTargetVelocity.qLength() > 20.0f) {
		mDisbandTimer--;
	}
}

/**
 * @note Address: 0x80144B44
 * @note Size: 0xC
 */
void Navi::clearKaisanDisable()
{
	mDisbandTimer = 0;
}

/**
 * @note Address: 0x80144B50
 * @note Size: 0x10
 */
bool Navi::throwable()
{
	return mThrowTimer == 0;
}

/**
 * @note Address: 0x80144B60
 * @note Size: 0xC
 */
void Navi::startThrowDisable()
{
	mThrowTimer = NAVI_THROWTIMER_LENGTH;
}

/**
 * @note Address: 0x80144B6C
 * @note Size: 0x3C
 */
void Navi::updateThrowDisable()
{
	if (mThrowTimer == 0) {
		return;
	}

	if (mController1 && mController1->getButton() & Controller::PRESS_A) {
		mThrowTimer = NAVI_THROWTIMER_LENGTH;
	}

	mThrowTimer--;
}

/**
 * @note Address: 0x80144BA8
 * @note Size: 0xC
 */
void Navi::clearThrowDisable()
{
	mThrowTimer = 0;
}

/**
 * @note Address: 0x80144BB4
 * @note Size: 0x2FC
 */
void Navi::holeinAllPikis(Vector3f& pos)
{
	naviMgr->getAliveOrima(ALIVEORIMA_Active);
	Piki* buffer[MAX_PIKI_COUNT];
	int pikis = 0;

	Iterator<Creature> iterator(mCPlateMgr);
	CI_LOOP(iterator)
	{
		Piki* piki = static_cast<Piki*>(*iterator);
		if (piki->isAlive()) {
			if (piki->mCurrentState->transittable(PIKISTATE_Holein) && piki->mCurrentState->soft_transittable(PIKISTATE_Holein)) {
				buffer[pikis] = piki;
				pikis++;
			} else {
				piki->mFsm->transitForce(piki, PIKISTATE_Walk, nullptr);
				buffer[pikis] = piki;
				pikis++;
			}
		}
	}

	for (int i = 0; i < pikis; i++) {
		Piki* piki = buffer[i];
		HoleinStateArg arg(pos);
		piki->mFsm->transit(piki, PIKISTATE_Holein, &arg);
	}
}

/**
 * @note Address: 0x80144EC0
 * @note Size: 0x2F8
 */
void Navi::fountainonAllPikis(Vector3f& pos)
{
	Piki* buffer[MAX_PIKI_COUNT];
	int pikis = 0;

	Iterator<Creature> iterator(mCPlateMgr);
	CI_LOOP(iterator)
	{
		Piki* piki = static_cast<Piki*>(*iterator);
		if (piki->isAlive() && (int)piki->getKind() != Bulbmin) {
			if (piki->mCurrentState->transittable(PIKISTATE_Fountainon) && piki->mCurrentState->soft_transittable(PIKISTATE_Fountainon)) {
				buffer[pikis] = piki;
				pikis++;
			} else {
				piki->mFsm->transitForce(piki, PIKISTATE_Walk, nullptr);
				buffer[pikis] = piki;
				pikis++;
			}
		}
	}

	for (int i = 0; i < pikis; i++) {
		Piki* piki = buffer[i];
		FountainonStateArg arg(pos);
		piki->mFsm->transit(piki, PIKISTATE_Fountainon, &arg);
	}
}

/**
 * @note Address: 0x801451B8
 * @note Size: 0x2D4
 */
void Navi::demowaitAllPikis()
{
	Piki* buffer[MAX_PIKI_COUNT];
	int pikis = 0;

	Iterator<Creature> iterator(mCPlateMgr);
	CI_LOOP(iterator)
	{
		Piki* piki = static_cast<Piki*>(*iterator);
		if (piki->isAlive() && (int)piki->getKind() != Bulbmin) {
			if (piki->mCurrentState->transittable(PIKISTATE_DemoWait) && piki->mCurrentState->soft_transittable(PIKISTATE_DemoWait)) {
				buffer[pikis] = piki;
				pikis++;
			} else {
				piki->mFsm->transitForce(piki, PIKISTATE_Walk, nullptr);
				buffer[pikis] = piki;
				pikis++;
			}
		}
	}

	for (int i = 0; i < pikis; i++) {
		Piki* piki = buffer[i];
		piki->mFsm->transit(piki, PIKISTATE_DemoWait, nullptr);
	}
}

/**
 * @note Address: 0x8014548C
 * @note Size: 0x954
 */
bool Navi::releasePikis()
{
	if (!gameSystem->isFlag(2)) {
		return false;
	}

	bool dismissnavi = false;
	Navi* loozy      = naviMgr->getAt(GET_OTHER_NAVI(this));
	int id           = loozy->getStateID();
	if (id == NSID_Follow) {
		dismissnavi = true;
	}
	InteractKaisan act(this);
	loozy->stimulate(act);

	Iterator<Creature> iterator(mCPlateMgr);
	Piki* buffer[MAX_PIKI_COUNT];
	s32 pikis = 0;
	CI_LOOP(iterator)
	{
		Piki* piki = static_cast<Piki*>(*iterator);
		piki->getStateID();
		if ((!piki->mCurrentState || piki->mCurrentState->releasable()) && piki->isAlive()) {
			piki            = static_cast<Piki*>(*iterator);
			buffer[pikis++] = piki;
		}
	}

	if (dismissnavi || pikis > 0) {
		mSoundObj->playKaisanSE();
	}

	if (pikis == 0) {
		return dismissnavi;
	}

	int number[8];
	Vector3f position[8];
	for (int i = 0; i != 8; i++) {
		position[i] = 0;
		number[i]   = 0;
	}
	int i;
	for (int cColor = 0; cColor < 8; cColor++) {
		for (i = 0; i < pikis; i++) {
			if (cColor != Yellow) {
				if (cColor == buffer[i]->getKind()) {
					number[cColor]++;
					position[cColor] += buffer[i]->getPosition();
				} // WHY WHAT WHY / WHY IS YELLOW SPECIAL
			} else if (buffer[i]->getKind() == Yellow) {
				number[Yellow]++;
				position[Yellow] += buffer[i]->getPosition();
			}
		}
	}

	f32 distList[8];
	for (int cColor = 0; cColor < 8; cColor++) {
		if (number[cColor] > 0) {
			f32 num  = number[cColor];
			f32 mean = 1.0f / number[cColor];
			position[cColor] *= mean;
			distList[cColor] = pikmin2_sqrtf(num) * 6.25f;
		}
	}

	Navi* otherNavi = naviMgr->getAt(GET_OTHER_NAVI(this));
	for (int i = 0; i < 4; i++) {
		for (int cColor = 0; cColor < 8; cColor++) {
			if (number[cColor] > 0) {
				Vector3f naviPos = getPosition();
				Vector3f diff    = position[cColor] - naviPos;
				f32 dist         = diff.qNormalise();
				dist             = dist - distList[cColor] - 25.0f;
				if (dist < 20.0f) {
					dist = 20.0f - dist;
					position[cColor] += diff * dist;
				}
				if (otherNavi->isAlive()) {
					Vector3f naviPos = otherNavi->getPosition();
					Vector3f diff    = position[cColor] - naviPos;
					f32 dist         = diff.qNormalise();
					dist             = dist - distList[cColor] - 25.0f;
					if (dist < 20.0f) {
						dist = 20.0f - dist;
						position[cColor] += diff * dist;
					}
				}
			}

			for (int j = cColor + 1; j < 8; j++) {
				if (number[cColor] > 0 && number[j] > 0) {
					Vector3f diff = position[cColor] - position[j];
					f32 dist      = diff.qNormalise();
					dist          = dist - distList[cColor] - distList[j];
					if (dist < 20.0f) {
						dist          = 20.0f - dist;
						Vector3f push = diff * dist;
						position[cColor] += push;
						position[j] -= push;
					}
				}
			}
		}
	}

	for (int i = 0; i < pikis; i++) {
		Piki* piki = buffer[i];
		PikiAI::ActFreeArg arg(position[piki->getKind()], distList[piki->getKind()], true);
		buffer[i]->mSoundObj->startFreePikiSound(PSSE_PK_VC_BREAKUP, 0x5a, 0);
		buffer[i]->mBrain->start(PikiAI::ACT_Free, &arg);
	}
	mDisbandTimer = 60;
	return true;
	/*
	.loc_0x0:
	  stwu      r1, -0x320(r1)
	  mflr      r0
	  stw       r0, 0x324(r1)
	  stfd      f31, 0x310(r1)
	  psq_st    f31,0x318(r1),0,0
	  stfd      f30, 0x300(r1)
	  psq_st    f30,0x308(r1),0,0
	  stfd      f29, 0x2F0(r1)
	  psq_st    f29,0x2F8(r1),0,0
	  stmw      r17, 0x2B4(r1)
	  lwz       r4, -0x6C18(r13)
	  mr        r30, r3
	  lbz       r0, 0x3C(r4)
	  rlwinm.   r0,r0,0,30,30
	  bne-      .loc_0x44
	  li        r3, 0
	  b         .loc_0x928
	.loc_0x44:
	  lwz       r3, -0x6D20(r13)
	  li        r21, 0
	  lhz       r0, 0x2DC(r30)
	  lwz       r12, 0x0(r3)
	  subfic    r4, r0, 0x1
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x274(r3)
	  cmplwi    r4, 0
	  beq-      .loc_0x78
	  lwz       r0, 0x4(r4)
	  b         .loc_0x7C
	.loc_0x78:
	  li        r0, -0x1
	.loc_0x7C:
	  cmpwi     r0, 0x1
	  bne-      .loc_0x88
	  li        r21, 0x1
	.loc_0x88:
	  lis       r5, 0x804B
	  lis       r4, 0x804C
	  subi      r5, r5, 0x5D00
	  stw       r30, 0xC(r1)
	  subi      r0, r4, 0x79E0
	  addi      r4, r1, 0x8
	  stw       r5, 0x8(r1)
	  stw       r0, 0x8(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1A4(r12)
	  mtctr     r12
	  bctrl
	  li        r29, 0
	  lwz       r3, 0x254(r30)
	  lis       r4, 0x804B
	  li        r31, 0
	  subi      r0, r4, 0x437C
	  cmplwi    r29, 0
	  stw       r0, 0x40(r1)
	  stw       r29, 0x4C(r1)
	  stw       r29, 0x44(r1)
	  stw       r3, 0x48(r1)
	  bne-      .loc_0xFC
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x44(r1)
	  b         .loc_0x2CC
	.loc_0xFC:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x44(r1)
	  b         .loc_0x168
	.loc_0x114:
	  lwz       r3, 0x48(r1)
	  lwz       r4, 0x44(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x4C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x2CC
	  lwz       r3, 0x48(r1)
	  lwz       r4, 0x44(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x44(r1)
	.loc_0x168:
	  lwz       r12, 0x40(r1)
	  addi      r3, r1, 0x40
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x114
	  b         .loc_0x2CC
	.loc_0x188:
	  lwz       r3, 0x48(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r0, r3
	  mr        r17, r0
	  bl        0x3904
	  lwz       r3, 0x290(r17)
	  cmplwi    r3, 0
	  beq-      .loc_0x1CC
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x50(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x210
	.loc_0x1CC:
	  mr        r3, r17
	  lwz       r12, 0x0(r17)
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x210
	  lwz       r3, 0x48(r1)
	  lwz       r4, 0x44(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  addi      r4, r1, 0x108
	  addi      r31, r31, 0x1
	  stwx      r3, r4, r29
	  addi      r29, r29, 0x4
	.loc_0x210:
	  lwz       r0, 0x4C(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x23C
	  lwz       r3, 0x48(r1)
	  lwz       r4, 0x44(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x44(r1)
	  b         .loc_0x2CC
	.loc_0x23C:
	  lwz       r3, 0x48(r1)
	  lwz       r4, 0x44(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x44(r1)
	  b         .loc_0x2B0
	.loc_0x25C:
	  lwz       r3, 0x48(r1)
	  lwz       r4, 0x44(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x4C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x2CC
	  lwz       r3, 0x48(r1)
	  lwz       r4, 0x44(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x44(r1)
	.loc_0x2B0:
	  lwz       r12, 0x40(r1)
	  addi      r3, r1, 0x40
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x25C
	.loc_0x2CC:
	  lwz       r3, 0x48(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x44(r1)
	  cmplw     r4, r3
	  bne+      .loc_0x188
	  rlwinm.   r0,r21,0,24,31
	  bne-      .loc_0x2FC
	  cmpwi     r31, 0
	  ble-      .loc_0x304
	.loc_0x2FC:
	  lwz       r3, 0x26C(r30)
	  bl        0x31D6D8
	.loc_0x304:
	  cmpwi     r31, 0
	  bne-      .loc_0x314
	  mr        r3, r21
	  b         .loc_0x928
	.loc_0x314:
	  lfs       f0, -0x600C(r2)
	  li        r0, 0
	  addi      r22, r1, 0xA8
	  addi      r23, r1, 0x88
	  stfs      f0, 0xA8(r1)
	  mr        r18, r23
	  mr        r19, r22
	  li        r21, 0
	  stfs      f0, 0xAC(r1)
	  stfs      f0, 0xB0(r1)
	  stw       r0, 0x88(r1)
	  stfs      f0, 0xB4(r1)
	  stfs      f0, 0xB8(r1)
	  stfs      f0, 0xBC(r1)
	  stw       r0, 0x8C(r1)
	  stfs      f0, 0xC0(r1)
	  stfs      f0, 0xC4(r1)
	  stfs      f0, 0xC8(r1)
	  stw       r0, 0x90(r1)
	  stfs      f0, 0xCC(r1)
	  stfs      f0, 0xD0(r1)
	  stfs      f0, 0xD4(r1)
	  stw       r0, 0x94(r1)
	  stfs      f0, 0xD8(r1)
	  stfs      f0, 0xDC(r1)
	  stfs      f0, 0xE0(r1)
	  stw       r0, 0x98(r1)
	  stfs      f0, 0xE4(r1)
	  stfs      f0, 0xE8(r1)
	  stfs      f0, 0xEC(r1)
	  stw       r0, 0x9C(r1)
	  stfs      f0, 0xF0(r1)
	  stfs      f0, 0xF4(r1)
	  stfs      f0, 0xF8(r1)
	  stw       r0, 0xA0(r1)
	  stfs      f0, 0xFC(r1)
	  stfs      f0, 0x100(r1)
	  stfs      f0, 0x104(r1)
	  stw       r0, 0xA4(r1)
	.loc_0x3B0:
	  addi      r17, r1, 0x108
	  li        r20, 0
	  b         .loc_0x490
	.loc_0x3BC:
	  cmpwi     r21, 0x2
	  beq-      .loc_0x428
	  lwz       r4, 0x0(r17)
	  lbz       r0, 0x2B8(r4)
	  cmpw      r21, r0
	  bne-      .loc_0x488
	  lwz       r12, 0x0(r4)
	  addi      r3, r1, 0x34
	  lwz       r5, 0x0(r18)
	  lwz       r12, 0x8(r12)
	  addi      r0, r5, 0x1
	  stw       r0, 0x0(r18)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x0(r19)
	  lfs       f0, 0x34(r1)
	  lfs       f1, 0x38(r1)
	  fadds     f2, f2, f0
	  lfs       f0, 0x3C(r1)
	  stfs      f2, 0x0(r19)
	  lfs       f2, 0x4(r19)
	  fadds     f1, f2, f1
	  stfs      f1, 0x4(r19)
	  lfs       f1, 0x8(r19)
	  fadds     f0, f1, f0
	  stfs      f0, 0x8(r19)
	  b         .loc_0x488
	.loc_0x428:
	  lwz       r4, 0x0(r17)
	  lbz       r0, 0x2B8(r4)
	  cmpwi     r0, 0x2
	  bne-      .loc_0x488
	  lwz       r12, 0x0(r4)
	  addi      r3, r1, 0x28
	  lwz       r5, 0x90(r1)
	  lwz       r12, 0x8(r12)
	  addi      r0, r5, 0x1
	  stw       r0, 0x90(r1)
	  mtctr     r12
	  bctrl
	  lfs       f1, 0xC0(r1)
	  lfs       f0, 0x28(r1)
	  lfs       f3, 0xC4(r1)
	  lfs       f2, 0x2C(r1)
	  fadds     f4, f1, f0
	  lfs       f1, 0xC8(r1)
	  lfs       f0, 0x30(r1)
	  fadds     f2, f3, f2
	  stfs      f4, 0xC0(r1)
	  fadds     f0, f1, f0
	  stfs      f2, 0xC4(r1)
	  stfs      f0, 0xC8(r1)
	.loc_0x488:
	  addi      r17, r17, 0x4
	  addi      r20, r20, 0x1
	.loc_0x490:
	  cmpw      r20, r31
	  blt+      .loc_0x3BC
	  addi      r21, r21, 0x1
	  addi      r19, r19, 0xC
	  cmpwi     r21, 0x8
	  addi      r18, r18, 0x4
	  blt+      .loc_0x3B0
	  addi      r21, r1, 0x68
	  mr        r17, r23
	  mr        r18, r22
	  li        r20, 0
	  mr        r19, r21
	.loc_0x4C0:
	  lwz       r0, 0x0(r17)
	  cmpwi     r0, 0
	  ble-      .loc_0x534
	  xoris     r3, r0, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x29C(r1)
	  lfd       f3, -0x5F90(r2)
	  stw       r0, 0x298(r1)
	  lfs       f2, -0x6008(r2)
	  lfd       f0, 0x298(r1)
	  lfs       f1, 0x0(r18)
	  fsubs     f0, f0, f3
	  stw       r3, 0x2A4(r1)
	  stw       r0, 0x2A0(r1)
	  fdivs     f4, f2, f0
	  lfd       f0, 0x2A0(r1)
	  fmuls     f2, f1, f4
	  fsubs     f1, f0, f3
	  stfs      f2, 0x0(r18)
	  lfs       f0, 0x4(r18)
	  fmuls     f0, f0, f4
	  stfs      f0, 0x4(r18)
	  lfs       f0, 0x8(r18)
	  fmuls     f0, f0, f4
	  stfs      f0, 0x8(r18)
	  bl        0x2CBE54
	  lfs       f0, -0x5F84(r2)
	  fmuls     f0, f0, f1
	  stfs      f0, 0x0(r19)
	.loc_0x534:
	  addi      r20, r20, 0x1
	  addi      r18, r18, 0xC
	  cmpwi     r20, 0x8
	  addi      r19, r19, 0x4
	  addi      r17, r17, 0x4
	  blt+      .loc_0x4C0
	  lwz       r3, -0x6D20(r13)
	  lhz       r0, 0x2DC(r30)
	  lwz       r12, 0x0(r3)
	  subfic    r4, r0, 0x1
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  li        r19, 0
	  mr        r20, r3
	.loc_0x570:
	  mr        r26, r23
	  mr        r25, r22
	  mr        r24, r21
	  li        r18, 0
	.loc_0x580:
	  lwz       r0, 0x0(r26)
	  cmpwi     r0, 0
	  ble-      .loc_0x730
	  mr        r4, r30
	  addi      r3, r1, 0x1C
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x4(r25)
	  lfs       f0, 0x20(r1)
	  lfs       f1, 0x0(r25)
	  fsubs     f30, f2, f0
	  lfs       f0, 0x1C(r1)
	  lfs       f2, 0x8(r25)
	  fsubs     f31, f1, f0
	  lfs       f1, 0x24(r1)
	  fmuls     f0, f30, f30
	  fsubs     f29, f2, f1
	  fmadds    f0, f31, f31, f0
	  fmadds    f1, f29, f29, f0
	  bl        0x2CBDA4
	  lfs       f0, -0x600C(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x5FC
	  lfs       f0, -0x6008(r2)
	  fdivs     f0, f0, f1
	  fmuls     f31, f31, f0
	  fmuls     f30, f30, f0
	  fmuls     f29, f29, f0
	  b         .loc_0x600
	.loc_0x5FC:
	  fmr       f1, f0
	.loc_0x600:
	  lfs       f0, 0x0(r24)
	  lfs       f2, -0x5FF0(r2)
	  fsubs     f1, f1, f0
	  lfs       f0, -0x5F88(r2)
	  fsubs     f1, f1, f2
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x650
	  fsubs     f0, f0, f1
	  lfs       f3, 0x0(r25)
	  fmuls     f2, f31, f0
	  fmuls     f1, f30, f0
	  fmuls     f0, f29, f0
	  fadds     f2, f3, f2
	  stfs      f2, 0x0(r25)
	  lfs       f2, 0x4(r25)
	  fadds     f1, f2, f1
	  stfs      f1, 0x4(r25)
	  lfs       f1, 0x8(r25)
	  fadds     f0, f1, f0
	  stfs      f0, 0x8(r25)
	.loc_0x650:
	  mr        r3, r20
	  lwz       r12, 0x0(r20)
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x730
	  mr        r4, r20
	  addi      r3, r1, 0x10
	  lwz       r12, 0x0(r20)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x4(r25)
	  lfs       f0, 0x14(r1)
	  lfs       f1, 0x0(r25)
	  fsubs     f30, f2, f0
	  lfs       f0, 0x10(r1)
	  lfs       f2, 0x8(r25)
	  fsubs     f29, f1, f0
	  lfs       f1, 0x18(r1)
	  fmuls     f0, f30, f30
	  fsubs     f31, f2, f1
	  fmadds    f0, f29, f29, f0
	  fmadds    f1, f31, f31, f0
	  bl        0x2CBCC4
	  lfs       f0, -0x600C(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x6DC
	  lfs       f0, -0x6008(r2)
	  fdivs     f0, f0, f1
	  fmuls     f29, f29, f0
	  fmuls     f30, f30, f0
	  fmuls     f31, f31, f0
	  b         .loc_0x6E0
	.loc_0x6DC:
	  fmr       f1, f0
	.loc_0x6E0:
	  lfs       f0, 0x0(r24)
	  lfs       f2, -0x5FF0(r2)
	  fsubs     f1, f1, f0
	  lfs       f0, -0x5F88(r2)
	  fsubs     f1, f1, f2
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x730
	  fsubs     f0, f0, f1
	  lfs       f3, 0x0(r25)
	  fmuls     f2, f29, f0
	  fmuls     f1, f30, f0
	  fmuls     f0, f31, f0
	  fadds     f2, f3, f2
	  stfs      f2, 0x0(r25)
	  lfs       f2, 0x4(r25)
	  fadds     f1, f2, f1
	  stfs      f1, 0x4(r25)
	  lfs       f1, 0x8(r25)
	  fadds     f0, f1, f0
	  stfs      f0, 0x8(r25)
	.loc_0x730:
	  addi      r17, r18, 0x1
	  addi      r29, r1, 0x88
	  mulli     r0, r17, 0xC
	  addi      r28, r1, 0xA8
	  rlwinm    r3,r17,2,0,29
	  addi      r27, r1, 0x68
	  add       r29, r29, r3
	  add       r28, r28, r0
	  add       r27, r27, r3
	  b         .loc_0x850
	.loc_0x758:
	  lwz       r0, 0x0(r26)
	  cmpwi     r0, 0
	  ble-      .loc_0x840
	  lwz       r0, 0x0(r29)
	  cmpwi     r0, 0
	  ble-      .loc_0x840
	  lfs       f2, 0x4(r25)
	  lfs       f0, 0x4(r28)
	  lfs       f1, 0x0(r25)
	  fsubs     f30, f2, f0
	  lfs       f0, 0x0(r28)
	  lfs       f2, 0x8(r25)
	  fsubs     f29, f1, f0
	  lfs       f1, 0x8(r28)
	  fmuls     f0, f30, f30
	  fsubs     f31, f2, f1
	  fmadds    f0, f29, f29, f0
	  fmadds    f1, f31, f31, f0
	  bl        0x2CBBD8
	  lfs       f0, -0x600C(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x7C8
	  lfs       f0, -0x6008(r2)
	  fdivs     f0, f0, f1
	  fmuls     f29, f29, f0
	  fmuls     f30, f30, f0
	  fmuls     f31, f31, f0
	  b         .loc_0x7CC
	.loc_0x7C8:
	  fmr       f1, f0
	.loc_0x7CC:
	  lfs       f0, 0x0(r24)
	  lfs       f2, 0x0(r27)
	  fsubs     f1, f1, f0
	  lfs       f0, -0x5F88(r2)
	  fsubs     f1, f1, f2
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x840
	  fsubs     f3, f0, f1
	  lfs       f0, 0x0(r25)
	  fmuls     f1, f29, f3
	  fmuls     f2, f30, f3
	  fmuls     f3, f31, f3
	  fadds     f0, f0, f1
	  stfs      f0, 0x0(r25)
	  lfs       f0, 0x4(r25)
	  fadds     f0, f0, f2
	  stfs      f0, 0x4(r25)
	  lfs       f0, 0x8(r25)
	  fadds     f0, f0, f3
	  stfs      f0, 0x8(r25)
	  lfs       f0, 0x0(r28)
	  fsubs     f0, f0, f1
	  stfs      f0, 0x0(r28)
	  lfs       f0, 0x4(r28)
	  fsubs     f0, f0, f2
	  stfs      f0, 0x4(r28)
	  lfs       f0, 0x8(r28)
	  fsubs     f0, f0, f3
	  stfs      f0, 0x8(r28)
	.loc_0x840:
	  addi      r29, r29, 0x4
	  addi      r28, r28, 0xC
	  addi      r27, r27, 0x4
	  addi      r17, r17, 0x1
	.loc_0x850:
	  cmpwi     r17, 0x8
	  blt+      .loc_0x758
	  addi      r18, r18, 0x1
	  addi      r25, r25, 0xC
	  cmpwi     r18, 0x8
	  addi      r24, r24, 0x4
	  addi      r26, r26, 0x4
	  blt+      .loc_0x580
	  addi      r19, r19, 0x1
	  cmpwi     r19, 0x4
	  blt+      .loc_0x570
	  lis       r4, 0x804B
	  lis       r3, 0x804B
	  addi      r20, r1, 0x108
	  addi      r19, r1, 0x68
	  addi      r18, r4, 0x530
	  addi      r17, r3, 0x518
	  li        r21, 0
	  b         .loc_0x914
	.loc_0x89C:
	  lwz       r8, 0x0(r20)
	  addi      r9, r1, 0xA8
	  li        r3, 0x1
	  li        r4, 0x2800
	  lbz       r7, 0x2B8(r8)
	  li        r5, 0x5A
	  li        r6, 0
	  mulli     r0, r7, 0xC
	  rlwinm    r7,r7,2,0,29
	  stw       r18, 0x50(r1)
	  lfsx      f3, r19, r7
	  add       r9, r9, r0
	  stw       r17, 0x50(r1)
	  lfs       f2, 0x0(r9)
	  lfs       f1, 0x4(r9)
	  lfs       f0, 0x8(r9)
	  stb       r3, 0x54(r1)
	  stfs      f2, 0x58(r1)
	  stfs      f1, 0x5C(r1)
	  stfs      f0, 0x60(r1)
	  stfs      f3, 0x64(r1)
	  lwz       r3, 0x250(r8)
	  bl        0x31C800
	  lwz       r3, 0x0(r20)
	  addi      r5, r1, 0x50
	  li        r4, 0x1
	  lwz       r3, 0x294(r3)
	  bl        0x51200
	  addi      r20, r20, 0x4
	  addi      r21, r21, 0x1
	.loc_0x914:
	  cmpw      r21, r31
	  blt+      .loc_0x89C
	  li        r0, 0x3C
	  li        r3, 0x1
	  stb       r0, 0x2D4(r30)
	.loc_0x928:
	  psq_l     f31,0x318(r1),0,0
	  lfd       f31, 0x310(r1)
	  psq_l     f30,0x308(r1),0,0
	  lfd       f30, 0x300(r1)
	  psq_l     f29,0x2F8(r1),0,0
	  lfd       f29, 0x2F0(r1)
	  lmw       r17, 0x2B4(r1)
	  lwz       r0, 0x324(r1)
	  mtlr      r0
	  addi      r1, r1, 0x320
	  blr
	*/
}

/**
 * @note Address: 0x80145DE8
 * @note Size: 0x920
 */

void Navi::makeCStick(bool disable)
{
	f32 x = 0.0f;
	f32 z = x;

	if (mController1 && moviePlayer->mDemoState == DEMOSTATE_Inactive) {
		x = -mController1->getSubStickX();
		z = mController1->getSubStickY();
	}

	Vector3f cameraSide = mCamera->getSideVector();
	Vector3f cameraUp   = mCamera->getUpVector();
	Vector3f cameraView = mCamera->getViewVector();
	Vector3f side2D(cameraSide.x, 0.0f, cameraSide.z);
	side2D.qNormalise();

	Vector3f cameraFront;
	if (cameraUp.y > cameraView.y) {
		cameraFront = cameraView;
	} else {
		cameraFront = cameraUp;
	}

	// Transform the C-Stick according to the direction of the camera
	Vector3f front2D(cameraFront.x, 0.0f, cameraFront.z);
	front2D.qNormalise();

	Vector3f transformedMotion = (side2D * x) + (front2D * z);
	if (disable) {
		transformedMotion = 0.0f;
	}

	mCStickPosition  = 0.0f;
	f32 moveStrength = transformedMotion.sqrMagnitude();
	mCommandOn2      = false;

	// If the C-Stick is being used
	if (pikmin2_sqrtf(moveStrength) > 0.05f) {
		mCommandOn2          = true;
		mSceneAnimationTimer = 0.0f;
		mCStickPosition      = transformedMotion;

		// transformedMotion is the direction of the C-Stick,
		// So calling atan2f gets the directional angle of the C-Stick
		f32 stickAngle = pikmin2_atan2f(transformedMotion.x, transformedMotion.z);
		f32 plateAngle = mCPlateMgr->mAngle;

		f32 stickAngleCos  = pikmin2_cosf(stickAngle);
		f32 stickAngleSine = pikmin2_sinf(stickAngle);

		f32 plateAngleCos  = pikmin2_cosf(plateAngle);
		f32 plateSineAngle = pikmin2_sinf(plateAngle);

		f32 angleLimit = pikmin2_cosf(2.0f * PI / 3.0f);

		f32 newAngle = 0.0f;

		// If the angle of the C-Stick is greater than the angle limit
		if ((stickAngleSine * plateSineAngle + newAngle) + (stickAngleCos * plateAngleCos) > angleLimit) {
			// Interpolate from the Plate angle to the C-Stick angle
			newAngle = angDist(stickAngle, plateAngle) * 0.4f + plateAngle;
		} else {
			newAngle = stickAngle;
		}

		stickAngle   = roundAng(newAngle);
		mCStickAngle = stickAngle;

		// Normalise the moveStrength value
		f32 normalizedMoveStrength = (pikmin2_sqrtf(moveStrength) - 0.05f) / 0.95f;
		if (normalizedMoveStrength >= 0.9f) {
			normalizedMoveStrength = 1.0f;
		} else {
			normalizedMoveStrength = (normalizedMoveStrength / 0.9f) * 0.6f;
		}

		mCPlateMgr->refresh(mCPlateMgr->mSlotCount, normalizedMoveStrength);
		if (mPlateScaleTimer < 40) {
			mPlateScaleTimer++;
		}

		Vector3f position = getPosition();
		f32 scale;
		if (mPlateScaleTimer >= 40) {
			scale = 3.0f;
		} else {
			scale = 1.0f;
		}

		mCPlateMgr->setPos(position, stickAngle, mVelocity, scale);
		_2FC        = 0;
		mCommandOn1 = false;

	} else {
		mPlateScaleTimer = 0;

		if (!_2FC) {
			mCommandOn1 = true;
		}

		f32 dir = mFaceDir + PI;
		if ((!_2FC && mTargetVelocity.qLength() < 50.0f) && getStateID() != NSID_ThrowWait) {
			dir          = mCStickAngle;
			Vector3f pos = getPosition();
			mCPlateMgr->setPos(pos, dir, mVelocity, 1.0f);
		} else {
			_2FC = true;
		}

		mCPlateMgr->refresh(mCPlateMgr->mSlotCount, 0.0f);

		f32 minDist = 12800.0f;
		Iterator<Creature> iterator(mCPlateMgr);
		CI_LOOP(iterator)
		{
			Creature* piki = *iterator;
			static_cast<Piki*>(piki)->getStateID();
			Vector3f diff = piki->getPosition() - getPosition();
			f32 dist      = diff.qLength();
			if (dist < minDist) {
				minDist = dist;
			}
		}

		if (minDist < naviMgr->mNaviParms->mNaviParms.mPikiWaitRange()) {
			if (mCStickState == 0) {
				mCStickIncrement++;
			} else {
				mCStickIncrement = 0;
				mCStickState     = 0;
			}
		} else if (minDist < naviMgr->mNaviParms->mNaviParms.mPikiChangeFormationRange()) {
			if (mCStickState == 1) {
				mCStickIncrement++;
			} else {
				mCStickIncrement = 0;
				mCStickState     = 1;
			}
		} else {
			if (mCStickState == 2) {
				mCStickIncrement++;
			} else {
				mCStickIncrement = 0;
				mCStickState     = 2;
			}
		}

		if (mCStickState == 0) {
			_2FD = 1;
		} else if (mCStickState == 1) {
			_2FD          = 1;
			Vector3f pos  = getPosition();
			Vector3f diff = mCPlateMgr->mMaxPositionOffset - pos;
			diff.qNormalise();
			dir           = pikmin2_atan2f(diff.x, diff.z);
			Vector3f pos2 = getPosition();
			mCPlateMgr->setPosGray(pos2, dir, mVelocity, 1.0f);
		} else if (mCStickState == 2) {
			mCommandOn1 = false;
			if (_2FD) {
				Vector3f pos = getPosition();
				mCPlateMgr->rearrangeSlot(pos, dir, mVelocity);
				_2FD = 0;
			}
			Vector3f pos = getPosition();
			mCPlateMgr->setPos(pos, dir, mVelocity, 1.0f);
		}
	}

	mCStickTargetVector = transformedMotion;
}

/**
 * @note Address: 0x80146708
 * @note Size: 0x64
 */
bool Navi::isCStickNetural()
{
	NaviParms::Parms& parms = naviMgr->mNaviParms->mNaviParms;
	return mCStickPosition.qLength() <= parms.mNeutralStickThreshold.mValue;
}

/**
 * @note Address: 0x8014676C
 * @note Size: 0x2BC
 */
void Navi::findNextThrowPiki()
{
	mNextThrowPiki = nullptr;
	Iterator<Creature> iterator(mCPlateMgr);
	f32 minDist = 200.0f;

	CI_LOOP(iterator)
	{
		Piki* piki       = static_cast<Piki*>(*iterator);
		Vector3f naviPos = getPosition();
		Vector3f pikiPos = piki->getPosition();
		f32 dist         = pikmin2_sqrtf(naviPos.sqrDistance2D(pikiPos));
		if (piki->mNavi == this && dist < minDist && piki->getStateID() == PIKISTATE_Walk && piki->isThrowable()) {
			mNextThrowPiki = piki;
			minDist        = dist;
		}
	}
}

/**
 * @note Address: 0x80146A28
 * @note Size: 0x2C
 */
u32 Navi::ogGetNextThrowPiki()
{
	Piki* nextPiki = mNextThrowPiki;
	return (!nextPiki) ? 0 : ((PikiGrowthStageCount * nextPiki->mPikiKind) + 1) + nextPiki->mHappaKind;
}

// extern f32 pikmin2_cosf(f32 theta);
// extern f32 pikmin2_sinf(f32 theta);

/**
 * @note Address: 0x80146A54
 * @note Size: 0x2C0
 */
void Navi::throwPiki(Piki* piki, Vector3f& cursorPos)
{
	// Play throw sound.
	mSoundObj->startSound(PSSE_PL_THROW, 0);

	// Set piki start position, which is captain position + an offset:
	// -- horizontally, 15 units 'behind' captain (based on face direction), and
	// -- vertically, 10 units above captain.
	Vector3f startPos = getPosition();
	f32 cosTheta      = (f32)cos(mFaceDir);
	f32 sinTheta      = (f32)sin(mFaceDir);
	startPos          = startPos + Vector3f(-15.0f * sinTheta, 0.0f, -15.0f * cosTheta);
	startPos.y += 10.0f;
	piki->setPosition(startPos, false);

	// Work out where we're meant to be going (distance and angle).
	Vector3f pikiPos = piki->getPosition();
	Vector2f sepXZ   = Vector2f(cursorPos.x - pikiPos.x, cursorPos.z - pikiPos.z);

	// How far away is the cursor from the piki, in the 2D plane? (i.e., x distance in a 2D motion problem)
	f32 dist2D = pikmin2_sqrtf(sepXZ.x * sepXZ.x + sepXZ.y * sepXZ.y);
	// How far do we have to rotate to aim there? (i.e., how much do we have to rotate our axes by to get a 2D motion problem)
	f32 angDist = pikmin2_atan2f(sepXZ.x, sepXZ.y);

	// Make sure piki is facing in its direction of travel.
	piki->mFaceDir = roundAng(angDist);

	// -- Calculate mechanics of flight. --
	// We know where we want to be at the peak, and how long the arc should take.
	// So, we should be able to work out what our initial velocity should be to get there.

	// NaviParm p026 is 'landing time', i.e. total flight time, so time to peak is half that.
	f32 timeToPeak = 0.5f * naviMgr->mNaviParms->mNaviParms.mLandingTime.mValue;

	// "Actual" height at peak is navi elevation + 10.0f + throwHeight, but this is fine for our mechanics, mostly.
	f32 throwHeight = piki->getThrowHeight();

	int pikiColor = piki->mPikiKind;

	// If we're throwing a purple, travel time is 'half' as we stop at the peak (to pound).
	// Effectively, makes purples have more initial velocity.
	if (pikiColor == Purple) {
		timeToPeak *= 0.5f;
	}

	// If you rearrange parabolic motion equations, y velocity is (y_peak + (g/2 * (t/2)^2)) / (t/2), if initial y pos is 0.
	f32 ySpeed = timeToPeak * (0.5f * _aiConstants->mGravity.mData) + (throwHeight / timeToPeak);

	// Idk why we use this rather than the navi parameter like before, but w/e.
	// Back-calculate the time at peak given that the y velocity is 0 at the peak.
	// So, 0 = -g * t + ySpeed  ==>  t = ySpeed / g
	f32 newTimeToPeak = ySpeed / _aiConstants->mGravity.mData;

	// Again, halve it for purples.
	if (pikiColor == Purple) {
		newTimeToPeak *= 0.5f;
	}

	// 'x' (2D plane) velocity is constant (no accel), so distance / time.
	f32 xSpeed = dist2D / (2.0f * newTimeToPeak);

	// Velocity to use in movement calcs needs to be in 3D, not 2D, so adjust XZ components.
	piki->mVelocity.set(xSpeed * pikmin2_sinf(angDist), ySpeed, xSpeed * pikmin2_cosf(angDist));

	// Add navi 'momentum' to piki (XZ) velocity - ignore y.
	// Momentum is navi simulation velocity components, scaled by 1.0f.
	//  -- I suspect devs toyed around with this value in development.
	Vector3f momentum = mVelocity;
	momentum          = Vector3f(momentum.x, 0.0f, momentum.z) * 1.0f;

	// Normalise vector into just a 'direction' and grab the 'length' - this is just navi ground speed.
	f32 magnitude = momentum.qNormalise();

	// If the player is in a cutscene, disregard movement
	if (mSceneAnimationTimer > 0.0f) {
		magnitude = 0.0f;
	}

	// Adjust piki sim and real velocities.
	Vector3f addVel = momentum;
	addVel *= magnitude;
	piki->mVelocity += addVel;
	piki->mTargetVelocity = piki->mVelocity;
}

/**
 * @note Address: 0x80146D14
 * @note Size: 0x8
 */
bool Navi::commandOn()
{
	return mCommandOn2;
}

} // namespace Game
