#include "Game/Piki.h"
#include "Game/PikiMgr.h"
#include "Game/PikiParms.h"
#include "Game/PikiState.h"
#include "Game/StateMachine.h"
#include "Game/gameStat.h"
#include "Game/MoviePlayer.h"
#include "Game/GameSystem.h"
#include "Game/Entities/ItemOnyon.h"
#include "Game/DeathMgr.h"
#include "Game/gamePlayData.h"
#include "Game/BaseHIO.h"
#include "Game/Navi.h"
#include "Game/NaviParms.h"
#include "Game/MapMgr.h"
#include "Game/MoviePlayer.h"
#include "efx/TPk.h"
#include "Dolphin/rand.h"
#include "PikiAI.h"
#include "System.h"
#include "SoundID.h"
#include "Radar.h"
#include "nans.h"

namespace Game {

Color4 Piki::pikiColors[PikiColorCount + 1]
    = { Color4(0, 50, 255, 255),    Color4(255, 30, 0, 255),  Color4(255, 210, 0, 255), Color4(28, 0, 52, 255),
	    Color4(255, 230, 255, 255), Color4(255, 140, 0, 255), Color4(255, 255, 255, 0) };
Color4 Piki::pikiColorsCursor[PikiColorCount + 1]
    = { Color4(0, 50, 255, 255),    Color4(255, 30, 0, 255),  Color4(255, 210, 0, 255), Color4(120, 0, 250, 255),
	    Color4(255, 230, 255, 255), Color4(255, 140, 0, 255), Color4(255, 255, 255, 0) };

static const int unusedPikiArray[] = { 0, 0, 0 };
} // namespace Game

namespace Game {

/**
 * @note Address: 0x801476DC
 * @note Size: 0x1A4
 */
Piki::Piki()
{
	mFsm = new PikiFSM;
	mFsm->init(this);
	mBoundingSphere.mRadius = 4.0f;
	mBrain                  = new PikiAI::Brain(this);
	mCollTree->createSingleSphere(nullptr, 0, mBoundingSphere, nullptr);
	mObjectTypeID = OBJTYPE_Piki;
	mNavi         = nullptr;
	mCurrentState = nullptr;

	sys->heapStatusStart("TPkEffect", nullptr);
	mEffectsObj     = new efx::TPkEffect;
	mEffectsContext = new efx::Context;
	sys->heapStatusEnd("TPkEffect");

	sys->heapStatusStart("PSPiki", nullptr);
	mSoundObj = new PSM::Piki(this);
	sys->heapStatusEnd("PSPiki");
}

/**
 * @note Address: 0x80147D10
 * @note Size: 0xB4
 */
bool Piki::isWalking()
{
	// If we're in formation
	if (getCurrActionID() == PikiAI::ACT_Formation) {
		PikiAI::ActFormation* action = static_cast<PikiAI::ActFormation*>(getCurrAction());

		// We're in formation and we're walking
		if (action && action->mSortState == FORMATION_SORT_FORMED && mTargetVelocity.length() > 20.0f) {
			return true;
		}
	}

	return false;
}

/**
 * @note Address: 0x80147DC4
 * @note Size: 0x50
 */
int Piki::getFormationSlotID()
{
	if (getCurrActionID() == PikiAI::ACT_Formation) {
		PikiAI::ActFormation* action = static_cast<PikiAI::ActFormation*>(getCurrAction());

		if (action) {
			return action->mSlotID;
		}
	}

	return -1;
}

/**
 * @note Address: 0x80147E14
 * @note Size: 0x24
 */
PikiAI::Action* Piki::getCurrAction() { return mBrain->getCurrAction(); }

/**
 * @note Address: 0x80147E38
 * @note Size: 0x10
 */
void Piki::clearCurrAction() { mBrain->mActionId = PikiAI::ACT_NULL; }

/**
 * @note Address: 0x80147E48
 * @note Size: 0xC
 */
int Piki::getCurrActionID() { return mBrain->mActionId; }

/**
 * @note Address: 0x80147E54
 * @note Size: 0x280
 */
void Piki::onInit(CreatureInitArg* initArg)
{
	mTekiKillID = -1;
	mNavi       = nullptr;
	initColor();
	initFakePiki();
	setMoveVelocity(true);
	setMoveRotation(true);
	setUpdateTrMatrix(true);
	setGasInvincible(0);
	mPikiKind  = Blue;
	mHappaKind = Leaf;
	pikiMgr->setupPiki(this);
	initAnimator();
	mEffectsObj->init();
	mEffectsObj->mStemPosition    = &mLeafStemOffset;
	mEffectsObj->mAltStemPosition = &mLeafStemPosition;
	mEffectsObj->mPikiColor       = -1;
	mCollTree->attachModel(mModel);

	PikiInitArg* pikiArg = static_cast<PikiInitArg*>(initArg);
	if (pikiArg && pikiArg->mLeader) {
		PikiAI::CreatureActionArg actionArg(pikiArg->mLeader);
		mBrain->start(PikiAI::ACT_Teki, &actionArg);
		changeShape(Bulbmin);
		setFPFlag(FPFLAGS_IsWildBulbmin);
	} else {
		mBrain->start(PikiAI::ACT_Free, nullptr);
		GameStat::alivePikis.inc(this);
	}

	if (!pikiArg || pikiArg->mState == PIKISTATE_NULL) {
		mFsm->start(this, PIKISTATE_Walk, nullptr);
	} else {
		mFsm->start(this, pikiArg->mState, nullptr);
	}

	mPikiUpdateContext.init(pikiMgr->mUpdateMgr2);

	mLeafStemJoint = mModel->getJoint("happajnt3");
	mHappaJoint1   = mModel->getJoint("happajnt1");

	JUT_ASSERTLINE(692, mLeafStemJoint, "happajnt3 not found!\n");
	JUT_ASSERTLINE(695, mHappaJoint1, "happajnt1 not found!\n");

	debugShapeDL("piki onInit");
	pikiMgr->debugShapeDL("** PIKI ONINIT**");
	mDopeTime = 0.0f;
	mIsDoped  = -1;
	setDopeEffect(false);
}

/**
 * @note Address: 0x80148108
 * @note Size: 0x38C
 */
void Piki::onKill(CreatureKillArg* killArg)
{
	// If we're in versus mode and Piki was killed another piki
	if (gameSystem->isVersusMode() && killArg && killArg->isFlag(CKILL_VsChargePiki)) {
		Onyon* onyon = ItemOnyon::mgr->getOnyon(getKind());
		if (onyon) {
			onyon->vsChargePikmin();
		}
	}

	// Clear Piki effects and the spicy state
	clearDope();
	mEffectsObj->clear();

	// If the kill argument isn't set, or the kill should count as a death
	if (!killArg || !(killArg->isFlag(CKILL_DontCountAsDeath))) {
		// If we're in challenge mode and we're a Pikmin
		if (gameSystem && gameSystem->isChallengeMode() && isPikmin()) {
			GameMessageVsPikminDead deadMsg;
			gameSystem->mSection->sendMessage(deadMsg);
		}

		// Create dead piki noise and effect
		Vector3f pikiPos          = getPosition();
		efx::TPkEffect* effectObj = mEffectsObj;
		effectObj->clear();
		efx::createSimpleDead(*effectObj->mHamonPosPtr, effectObj->mPikiColor);
		mSoundObj->startFreePikiSound(PSSE_PK_VC_GHOST, 90, 0);

		// If death counter is enabled
		if (gameSystem && !gameSystem->isFlag(GAMESYS_DisableDeathCounter)) {
			// If we're not a Bulbmin, wild Pikmin, or Pikmin (carrot)
			int pikiType = getKind();
			if (pikiType < Bulbmin && !isZikatu() && !isPikmin()) {
				DeathMgr::inc(DeathCounter::COD_All);
			}

			// Increment stats of whoever killed us
			if (mTekiKillID != -1 && gameSystem->isStoryMode()) {
				playData->mTekiStatMgr.getTekiInfo(mTekiKillID)->incKillPikmin();
			}
		}
	}

	bool isBulbmin = !isPikmin() && getKind() == Bulbmin;

	// Delete shadow of the Pikmin
	killFakePiki();

	// Set the light effect as if the Pikmin is free (wild)
	setFreeLightEffect(false);

	// Disable the spicy spray state
	setDopeEffect(false);

	// Finish our current action
	if (getCurrAction()) {
		getCurrAction()->cleanup();
	}

	clearCurrAction();
	mPikiUpdateContext.exit();

	// If we're not a Bulbmin, decrement the number of alive Pikmin
	if (!isBulbmin) {
		GameStat::alivePikis.dec(this);
	}

	// Remove associated variables and remove from radar
	pikiMgr->kill(this);
	mNavi = nullptr;
	Radar::Mgr::exit(this);
}

/**
 * @note Address: 0x80148498
 * @note Size: 0x1C
 */
void Piki::onSetPosition() { mBoundingSphere.mPosition = mPosition; }

/**
 * @note Address: 0x801484B4
 * @note Size: 0x24
 */
void Piki::getLODSphere(Sys::Sphere& sphere)
{
	sphere.mPosition = mPosition;
	sphere.mRadius   = 15.0f;
}

/**
 * @note Address: 0x801484D8
 * @note Size: 0x210
 */
void Piki::update()
{
	sys->mTimers->_start("pu-1", true);
	mSoundObj->exec();
	updateGasInvincible();
	updateLook();
	updateLookCreature();
	sys->mTimers->_start("pu-4", true);

	if (!isMovieActor() || isMovieExtra()) {
		mFsm->exec(this);
	}

	if (isAlive()) {
		sys->mTimers->_stop("pu-4");
		mEffectsObj->update();
		mEffectsContext->mPosition = mLeafStemOffset;
		sys->mTimers->_stop("pu-1");

		if (isAlive() && mWaterBox) {
			int stateID  = getStateID();
			int pikiType = getKind();
			if (stateID != PIKISTATE_WaterHanged && stateID != PIKISTATE_Drown && !mCurrentState->dead() && pikiType != Blue
			    && pikiType != Bulbmin && moviePlayer->mDemoState == DEMOSTATE_Inactive && mVelocity.y <= 0.1f) {
				mFsm->transit(this, PIKISTATE_Drown, nullptr);
				mEffectsObj->mHeight = mWaterBox->getSeaHeightPtr();
			}
		}
	}
}

/**
 * @note Address: 0x801486F0
 * @note Size: 0x58
 */
bool Piki::isAlive()
{
	bool flag = isCreatureFlag(CF_IsAlive);
	if (flag && mCurrentState) {
		return !mCurrentState->dead();
	}

	return flag;
}

/**
 * @note Address: 0x80148748
 * @note Size: 0x4
 */
void Piki::on_movie_begin(bool) { }

/**
 * @note Address: 0x8014874C
 * @note Size: 0x64
 */
void Piki::on_movie_end(bool shouldResetAnims)
{
	if (shouldResetAnims) {
		getCreatureID();
		startMotion(IPikiAnims::WAIT, IPikiAnims::WAIT, nullptr, nullptr);
	}
}

/**
 * @note Address: 0x801487B8
 * @note Size: 0x4
 */
void Piki::movieUserCommand(u32, Game::MoviePlayer*) { }

/**
 * @note Address: 0x801487BC
 * @note Size: 0x38
 */
void Piki::movieStartAnimation(u32 animIdx) { startMotion(animIdx, animIdx, nullptr, nullptr); }

/**
 * @note Address: 0x801487F4
 * @note Size: 0x48
 */
void Piki::movieStartDemoAnimation(SysShape::AnimInfo* animInfo)
{
	mAnimator.mBoundAnimator.startExAnim(animInfo);
	mAnimator.mSelfAnimator.startExAnim(animInfo);
}

/**
 * @note Address: 0x8014883C
 * @note Size: 0x88
 */
void Piki::movieSetTranslation(Vector3f& position, f32 faceDir)
{
	mVelocity         = Vector3f(0.0f);
	mTargetVelocity   = Vector3f(0.0f);
	mAcceleration     = Vector3f(0.0f);
	mPreviousPosition = mPosition;
	setPosition(position, false);
	mFaceDir = faceDir;
}

/**
 * @note Address: 0x801488C4
 * @note Size: 0x8
 */
bool Piki::movieGotoPosition(Vector3f&) { return false; }

/**
 * @note Address: 0x801488CC
 * @note Size: 0x40
 */
void Piki::startSound(u32 id, bool isNotFree)
{
	if (isNotFree) {
		startSound(id, PSGame::SeMgr::SETSE_Unk0);
		return;
	}

	mSoundObj->startFreePikiSound(id, 90, 0);
}

/**
 * @note Address: 0x8014890C
 * @note Size: 0x48
 */
void Piki::startSound(u32 id, PSGame::SeMgr::SetSeId setSeId)
{
	if (setSeId < 8) {
		mSoundObj->startFreePikiSetSound(id, setSeId, 90, 0);
		return;
	}

	mSoundObj->startFreePikiSound(id, 90, 0);
}

/**
 * @note Address: 0x80148954
 * @note Size: 0x70
 */
void Piki::startSound(Creature* creature, u32 id, bool check)
{
	if (check) {
		startSound(creature, id, PSGame::SeMgr::SETSE_Unk0);
	} else {
		mSoundObj->startPikiSound(creature->getJAIObject(), id, 0);
	}
}

/**
 * @note Address: 0x801489C4
 * @note Size: 0xCC
 */
void Piki::startSound(Creature* creature, u32 id, PSGame::SeMgr::SetSeId setSeId)
{
	if (creature && creature->getJAIObject()) {
		if (setSeId < 8) {
			mSoundObj->startPikiSetSound(creature->getJAIObject(), id, setSeId, 0);
		} else {
			mSoundObj->startPikiSound(creature->getJAIObject(), id, 0);
		}
	}
}

/**
 * @note Address: 0x80148A90
 * @note Size: 0x14
 */
JAInter::Object* Piki::getJAIObject() { return mSoundObj; }

/**
 * @note Address: 0x80148AA4
 * @note Size: 0x8
 */
PSM::Creature* Piki::getPSCreature() { return mSoundObj; }

/**
 * @note Address: 0x80148AAC
 * @note Size: 0x30
 */
bool Piki::canVsBattle() { return mCurrentState->battleOK(); }

/**
 * @note Address: 0x80148AE4
 * @note Size: 0x3C
 */
Piki* Piki::getVsBattlePiki()
{
	return getCurrActionID() == PikiAI::ACT_Battle ? static_cast<PikiAI::ActBattle*>(getCurrAction())->mOther : nullptr;
}

/**
 * @note Address: 0x80148B20
 * @note Size: 0xB0
 */
void Piki::attachRadar(bool)
{
	switch (getKind()) {
	case Blue:
		Radar::Mgr::entry(this, Radar::MAP_BLUE_PIKMIN, 0);
		break;
	case Red:
		Radar::Mgr::entry(this, Radar::MAP_RED_PIKMIN, 0);
		break;
	case Yellow:
		Radar::Mgr::entry(this, Radar::MAP_YELLOW_PIKMIN, 0);
		break;
	case White:
		Radar::Mgr::entry(this, Radar::MAP_WHITE_PIKMIN, 0);
		break;
	case Purple:
		Radar::Mgr::entry(this, Radar::MAP_PURPLE_PIKMIN, 0);
		break;

	case Bulbmin:
		Radar::Mgr::entry(this, Radar::MAP_BULBMIN, 0);
		break;
	}
}

/**
 * @note Address: 0x80148BD0
 * @note Size: 0x148
 */
void Piki::inWaterCallback(WaterBox* wbox)
{
	int stateID  = getStateID();
	int pikiType = getKind();
	if (stateID != PIKISTATE_WaterHanged && stateID != PIKISTATE_Drown && !mCurrentState->dead() && pikiType != Blue
	    && pikiType != Bulbmin) {
		if (moviePlayer->mDemoState == DEMOSTATE_Inactive && mVelocity.y <= 0.1f) {
			mFsm->transit(this, PIKISTATE_Drown, nullptr);
		} else {
			return;
		}
	}

	mEffectsObj->mHeight = wbox->getSeaHeightPtr();
	if (isAlive()) {
		efx::TPkEffect* effectObj = mEffectsObj;
		effectObj->doWaterEntry(effectObj->isFlag(PKEFF_Drown)); // regswap in this inline
		mSoundObj->startFreePikiSetSound(PSSE_PK_SE_WATER_IN, PSGame::SeMgr::SETSE_PikiLanding, 90, 0);
	}

	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r4
	stw      r29, 0x14(r1)
	mr       r29, r3
	bl       getStateID__Q24Game4PikiFv
	cmpwi    r3, 5
	lbz      r31, 0x2b8(r29)
	beq      lbl_80148C80
	cmpwi    r3, 0xa
	beq      lbl_80148C80
	lwz      r3, 0x290(r29)
	lwz      r12, 0(r3)
	lwz      r12, 0x58(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80148C80
	cmpwi    r31, 0
	beq      lbl_80148C80
	cmpwi    r31, 5
	beq      lbl_80148C80
	lwz      r3, moviePlayer__4Game@sda21(r13)
	lwz      r0, 0x18(r3)
	cmpwi    r0, 0
	bne      lbl_80148CFC
	lfs      f1, 0x204(r29)
	lfs      f0, lbl_80518438@sda21(r2)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_80148CFC
	lwz      r3, 0x28c(r29)
	mr       r4, r29
	li       r5, 0xa
	li       r6, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	b        lbl_80148C80
	b        lbl_80148CFC

lbl_80148C80:
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x258(r29)
	stw      r3, 0x20(r4)
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80148CFC
	lwz      r31, 0x258(r29)
	lwz      r4, 0(r31)
	mr       r3, r31
	ori      r0, r4, 0x20
	rlwinm   r30, r4, 0x1b, 0x1f, 0x1f
	stw      r0, 0(r31)
	bl       updateHamon___Q23efx9TPkEffectFv
	cmplwi   r30, 0
	bne      lbl_80148CE4
	addi     r3, r31, 0x28
	bl       "createSimpleDive__3efxFR10Vector3<f>"

lbl_80148CE4:
	lwz      r3, 0x250(r29)
	li       r4, 0x2811
	li       r5, 6
	li       r6, 0x5a
	li       r7, 0
	bl       startFreePikiSetSound__Q23PSM4PikiFUlQ36PSGame5SeMgr7SetSeIdUlUl

lbl_80148CFC:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/**
 * @note Address: 0x80148D18
 * @note Size: 0x68
 */
void Piki::outWaterCallback()
{
	if (mCurrentState) {
		mCurrentState->outWaterCallback(this);
	}
	mEffectsObj->doWaterExit();
}

/**
 * @note Address: 0x80148D84
 * @note Size: 0x154
 */
bool Piki::might_bury()
{
	if (mFloorTriangle && mFloorTriangle->mCode.isBald()) {
		return false;
	}

	Sys::Sphere sphere(mPosition, 100.0f);
	CellIteratorArg iterArg(sphere);
	CellIterator iter(iterArg);

	CI_LOOP(iter)
	{
		Creature* creature = static_cast<Creature*>(*iter);
		if (creature->mObjectTypeID == OBJTYPE_Cave || creature->mObjectTypeID == OBJTYPE_BigFountain
		    || creature->mObjectTypeID == OBJTYPE_Hole) {
			Vector3f creaturePos = creature->getPosition();
			Vector3f sep         = Vector3f(creaturePos.y - mPosition.y, creaturePos.z - mPosition.z, creaturePos.x - mPosition.x);
			if (_length2(sep) <= 100.0f) {
				return false;
			}
		}
	}

	return true;
}

/**
 * @note Address: 0x80148ED8
 * @note Size: 0x14
 */
bool Piki::surviveDayEnd() { return (u8)(getCurrActionID() == PikiAI::ACT_Formation); }

/**
 * @note Address: 0x80148EEC
 * @note Size: 0x44
 */
void Piki::onKeyEvent(SysShape::KeyEvent const& event)
{
	if (mCurrentState) {
		mCurrentState->onKeyEvent(this, event);
	}
}

/**
 * @note Address: 0x80148F34
 * @note Size: 0x1C
 */
int Piki::getStateID()
{
	if (mCurrentState) {
		return mCurrentState->mId;
	}

	return PIKISTATE_NULL;
}

/**
 * @note Address: 0x80148F50
 * @note Size: 0xC8
 */
f32 Piki::getSpeed(f32 multiplier)
{
	if (doped()) {
		return pikiMgr->mParms->mPikiParms.mDopeRunSpeed();
	}

	f32 baseSpeed = scaleValue(1.0f, pikiMgr->mParms->mPikiParms.mRunSpeed());

	if (mHappaKind == Flower) {
		baseSpeed = pikiMgr->mParms->mPikiParms.mFlowerRunSpeed();
	} else if (mHappaKind == Bud) {
		baseSpeed = pikiMgr->mParms->mPikiParms.mBudRunSpeed();
	}

	int pikiType = getKind();
	f32 drag     = scaleValue(1.0f, pikiMgr->mParms->mPikiParms.mWalkSpeed());
	f32 speed    = multiplier * (baseSpeed - drag) + drag;

	if (pikiType == White) {
		speed *= pikiMgr->mParms->mPikiParms.mWhiteRunSpeedMultiplier();
	} else if (pikiType == Purple) {
		speed *= pikiMgr->mParms->mPikiParms.mPurpleRunSpeedMultiplier();
	}

	return speed;
}

/**
 * @note Address: 0x80149018
 * @note Size: 0x1C0
 */
void Piki::setSpeed(f32 multiplier, Vector3f& direction)
{
	if (multiplier < 0.0f) {
		mTargetVelocity = direction * -getSpeed(-multiplier);
	} else {
		mTargetVelocity = direction * getSpeed(multiplier);
	}
}

/**
 * @note Address: N/A
 * @note Size: 0xF8
 */
f32 Piki::getSpeed(f32 multiplier, f32 max)
{
	f32 speed = getSpeed(multiplier);
	if (speed * sys->mDeltaTime < max) {
		return speed;
	} else {
		return max / sys->mDeltaTime;
	}
}

/**
 * @note Address: 0x801491D8
 * @note Size: 0x20C
 */
void Piki::setSpeed(f32 multiplier, Vector3f& vec, f32 max)
{
	if (multiplier < 0.0f) {
		mTargetVelocity = vec * -getSpeed(-multiplier, max);
	} else {
		mTargetVelocity = vec * getSpeed(multiplier, max);
	}
}

/**
 * @note Address: 0x801493E4
 * @note Size: 0x40
 */
bool Piki::isPikmin()
{
	// wild bulbmin are not Pikmin
	if (BaseHIOParms::sTekiChappyFlag && isFPFlag(FPFLAGS_IsWildBulbmin)) {
		return false;
	}

	// things following enemies are not Pikmin
	if (getCurrActionID() == PikiAI::ACT_Teki) {
		return false;
	}

	// all other Piki are Pikmin
	return true;
}

/**
 * @note Address: 0x80149424
 * @note Size: 0x4C
 */
bool Piki::isThrowable()
{
	if (mCurrentState && mCurrentState->throwable()) {
		return true;
	}

	return false;
}

/**
 * @note Address: 0x80149478
 * @note Size: 0x40
 */
int Piki::getDownfloorMass()
{
	if (getStateID() == PIKISTATE_Hanged) {
		return PW_Weightless;
	}

	return (getKind() == Purple) ? PW_PurpleWeight : PW_NormalWeight;
}

/**
 * @note Address: 0x801494B8
 * @note Size: 0x14
 */
bool Piki::gasInvicible() { return mGasInvincible; }

/**
 * @note Address: 0x801494CC
 * @note Size: 0x8
 */
void Piki::setGasInvincible(u8 invincibleTime) { mGasInvincible = invincibleTime; }

/**
 * @note Address: 0x801494D4
 * @note Size: 0x18
 */
void Piki::updateGasInvincible()
{
	if (mGasInvincible) {
		mGasInvincible--;
	}
}

/**
 * @note Address: 0x801494EC
 * @note Size: 0xF8
 */
f32 Piki::getAttackDamage()
{
	if (doped()) {
		return pikiMgr->mParms->mPikiParms.mDopeAttackDamage.mValue;
	}

	if (gameSystem && gameSystem->isVersusMode()) {
		return pikiMgr->mParms->mPikiParms.mRedAttackDamage.mValue;
	}

	switch (getKind()) {
	case Red:
		return pikiMgr->mParms->mPikiParms.mRedAttackDamage.mValue;
	case Blue:
		return pikiMgr->mParms->mPikiParms.mBlueAttackDamage.mValue;
	case Yellow:
		return pikiMgr->mParms->mPikiParms.mYellowAttackDamage.mValue;
	case Purple:
		return pikiMgr->mParms->mPikiParms.mPurpleAttackDamage.mValue;
	case White:
		return pikiMgr->mParms->mPikiParms.mWhiteAttackDamage.mValue;
	}
	// Used for bulbmin + carrots
	return pikiMgr->mParms->mPikiParms.mBlueAttackDamage.mValue;
}

/**
 * @note Address: 0x801495E4
 * @note Size: 0xC0
 */
f32 Piki::getThrowHeight()
{
	if (!mNavi) {
		return 0.0f;
	}

	P2ASSERTLINE(1403, mNavi);

	switch (getKind()) {
	case Yellow:
		return static_cast<NaviParms*>(mNavi->mParms)->mNaviParms.mThrowHeightYellow.mValue;
	case Purple:
		return static_cast<NaviParms*>(mNavi->mParms)->mNaviParms.mThrowBlackHeight.mValue;
	case White:
		return static_cast<NaviParms*>(mNavi->mParms)->mNaviParms.mThrowWhiteHeight.mValue;
	}

	return static_cast<NaviParms*>(mNavi->mParms)->mNaviParms.mThrowHeightMin.mValue;
}

/**
 * @note Address: 0x801496A4
 * @note Size: 0xC4
 */
f32 Piki::getPelletCarryPower()
{
	f32 carryPower;
	switch (getKind()) {
	case White:
		carryPower = pikiMgr->mParms->mPikiParms.mWhiteCarryPower.mValue;
		break;
	case Purple:
		carryPower = pikiMgr->mParms->mPikiParms.mPurpleCarryPower.mValue;
		break;
	default:
		carryPower = 1.0f;
		break;
	}

	if (doped() || getHappa() == Flower) {
		carryPower += pikiMgr->mParms->mPikiParms.mFlowerCarrySpeedBonus.mValue;
	} else if (getHappa() == Bud) {
		carryPower += pikiMgr->mParms->mPikiParms.mBudCarrySpeedBonus.mValue;
	}

	return carryPower;
}

/**
 * @note Address: 0x80149768
 * @note Size: 0x4
 */
void Piki::onStickStartSelf(Game::Creature*) { }

/**
 * @note Address: 0x8014976C
 * @note Size: 0xE8
 */
void Piki::onStickEndSelf(Creature* creature)
{
	Vector3f pikiPos = getPosition();

	if (mapMgr) {
		CurrTriInfo triInfo;
		triInfo.mPosition        = pikiPos;
		triInfo.mUpdateOnNewMaxY = true;
		mapMgr->getCurrTri(triInfo);
		if (pikiPos.y < triInfo.mMaxY) {
			pikiPos.y = triInfo.mMaxY;
			setPosition(pikiPos, false);
		}
	}
}

/**
 * @note Address: 0x80149854
 * @note Size: 0x88
 */
bool Piki::stimulate(Interaction& interaction)
{
	if (!isCreatureFlag(CF_IsAlive)) {
		return false;
	}

	if (interaction.actCommon(this)) {
		return interaction.actPiki(this);
	}

	return false;
}

/**
 * @note Address: 0x801498DC
 * @note Size: 0xA4
 */
void Piki::bounceCallback(Sys::Triangle* triangle)
{
	if (mCurrentState) {
		mCurrentState->bounceCallback(this, triangle);
	}

	if (mCurrentState->aiActive() && getCurrAction()) {
		getCurrAction()->bounceCallback(this, triangle);
	}
}

/**
 * @note Address: 0x80149990
 * @note Size: 0xA0
 */
void Piki::wallCallback(Vector3f& pos)
{
	if (mCurrentState) {
		mCurrentState->wallCallback(this, pos);
	}

	if (mCurrentState->aiActive() && getCurrAction()) {
		getCurrAction()->wallCallback(pos);
	}
}

/**
 * @note Address: 0x80149A38
 * @note Size: 0xAC
 */
void Piki::collisionCallback(CollEvent& event)
{
	if (mCurrentState) {
		mCurrentState->collisionCallback(this, event);
	}

	if (mCurrentState && mCurrentState->aiActive() && getCurrAction()) {
		getCurrAction()->collisionCallback(this, event);
	}
}

/**
 * @note Address: 0x80149AEC
 * @note Size: 0x178
 */
void Piki::platCallback(PlatEvent& event)
{
	if (mCurrentState) {
		mCurrentState->platCallback(this, event);
	}

	if (mCurrentState->aiActive() && getCurrAction()) {
		getCurrAction()->platCallback(this, event);
	}

	if (isAlive() && !mCurrentState->dead() && event.mInstance->mId.match('elec', '*') && getKind() != Yellow) {
		mTekiKillID = -1;
		InteractDenki zap(this, 0.0f, &Vector3f::zero);
		stimulate(zap);
	}
}

/**
 * @note Address: 0x80149C6C
 * @note Size: 0x50
 */
bool Piki::ignoreAtari(Creature* creature)
{
	bool result = false;
	if (mCurrentState) {
		result = mCurrentState->ignoreAtari(this, creature);
	}

	return result;
}

/**
 * @note Address: 0x80149CC4
 * @note Size: 0x60
 */
void Piki::setFreeLightEffect(bool doLightEffect)
{
	if (doLightEffect) {
		mEffectsObj->doLightEffect();
	} else {
		mEffectsObj->doKillLightEffect();
	}
}

/**
 * @note Address: 0x80149D24
 * @note Size: 0x84
 */
void Piki::setDopeEffect(bool doDoping)
{
	if (doDoping) {
		mEffectsObj->doDoping();
	} else {
		mEffectsObj->doKillDoping();
	}
}

/**
 * @note Address: 0x80149DA8
 * @note Size: 0x88
 */
void Piki::clearDope()
{
	if (mIsDoped != -1) {
		mIsDoped = -1;
		if (pikiMgr->mDopedPikis > 0) {
			pikiMgr->mDopedPikis--;
		}
	}

	mDopeTime = 0.0f;
	mEffectsObj->doKillDoping();
}

/**
 * @note Address: 0x80149E30
 * @note Size: 0x14
 */
void Piki::extendDopeTime() { mDopeTime = pikiMgr->mParms->mPikiParms.mDopeMaxDuration.mValue; }

/**
 * @note Address: 0x80149E44
 * @note Size: 0x19C
 */
bool Piki::startDope(int isDoped)
{
	if (mIsDoped == -1) {
		pikiMgr->mDopedPikis++;
		mIsDoped = isDoped;
		extendDopeTime();
		mEffectsObj->doDoping();

		startSound(PSSE_PK_VC_DOPING, PSGame::SeMgr::SETSE_Unk0);
		startSound(PSSE_PK_DOPING_IMI, PSGame::SeMgr::SETSE_Unk0);

		if (gameSystem->isFlag(GAMESYS_IsGameWorldActive) && !playData->isDemoFlag(DEMO_First_Spicy_Use)) {
			if (moviePlayer) {
				MoviePlayArg movieArg("g1A_red_doping", nullptr, nullptr, 0);
				movieArg.setTarget(this);
				moviePlayer->mTargetObject = this;
				moviePlayer->play(movieArg);
			}
			playData->setDemoFlag(DEMO_First_Spicy_Use);
		}

		return true;
	}

	return false;
}

/**
 * @note Address: 0x80149FE0
 * @note Size: 0x18
 */
bool Piki::doped() { return mIsDoped != -1; }

/**
 * @note Address: N/A
 * @note Size: 0xE0
 */
void Piki::updateDope()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x80149FF8
 * @note Size: 0x40
 */
void Piki::initColor()
{
	mColorFloat   = 1.0f;
	mDefaultColor = pikiColors[getKind()];
}

/**
 * @note Address: N/A
 * @note Size: 0x194
 */
void Piki::updateColor()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x8014A038
 * @note Size: 0x100
 */
void Piki::setPastel(bool isBright)
{
	mColorFloat   = 0.0f;
	Color4* color = &pikiColors[getKind()];

	if (!isBright) {
		mPikiColor       = *color;
		mOldDefaultColor = mDefaultColor;
		return;
	}

	mPikiColor = *color;

	mPikiColor.r     = (color->r + 160 < 255) ? color->r + 160 : 255;
	mPikiColor.g     = (color->g + 160 < 255) ? color->g + 160 : 255;
	mPikiColor.b     = (color->b + 160 < 255) ? color->b + 160 : 255;
	mOldDefaultColor = mDefaultColor;
}

/**
 * @note Address: 0x8014A138
 * @note Size: 0xD0
 */
void Piki::getShadowParam(ShadowParam& param)
{
	if (getStateID() == PIKISTATE_Nukare) {
		param.mPosition = mCollTree->mPart->mPosition;
	} else {
		param.mPosition = getPosition();
	}

	param.mPosition.y += 0.5f;
	param.mBoundingSphere.mRadius   = 10.0f;
	param.mSize                     = 2.0f;
	param.mBoundingSphere.mPosition = Vector3f(0.0f, 1.0f, 0.0f);
}

/**
 * @note Address: 0x8014A208
 * @note Size: 0x80
 */
bool Piki::isMyPikmin(Creature* creature)
{
	if (getCurrActionID() == PikiAI::ACT_Teki) {
		PikiAI::ActTeki* action = static_cast<PikiAI::ActTeki*>(getCurrAction());
		P2ASSERTLINE(1718, action);

		return action->mFollowingTeki == creature;
	}

	return false;
}

/**
 * @note Address: 0x8014A288
 * @note Size: 0x18
 */
bool Piki::isTekiFollowAI() { return (u8)(mBrain->mActionId == PikiAI::ACT_Teki); }

/**
 * @note Address: 0x8014A2A0
 * @note Size: 0xEC
 */
void Piki::doColorChange()
{
	SysShape::Joint* happa1 = mHappaJoint1;
	Matrixf* worldMat       = mLeafStemJoint->getWorldMatrix();

	if (!mLod.isFlag(AILOD_IsVisible)) {
		mLeafStemOffset   = getPosition();
		mLeafStemPosition = mLeafStemOffset;
		return;
	}

	mLeafStemOffset = Vector3f(5.0f, 0.0f, 0.0f);
	mLeafStemOffset = worldMat->mtxMult(mLeafStemOffset);

	happa1->getWorldMatrix()->getTranslation(mLeafStemPosition);
}

/**
 * @note Address: 0x8014A38C
 * @note Size: 0x2C
 */
void Piki::doDebugDL()
{
	for (u16 i = 0; i < mModel->mJ3dModel->getModelData()->getShapeNum(); i++) { }
}

/**
 * @note Address: 0x8014A3B8
 * @note Size: 0xF8
 */
void Piki::startMotion(int animIdx1, int animIdx2, SysShape::MotionListener* listener1, SysShape::MotionListener* listener2)
{
	switch (animIdx1) {
	case IPikiAnims::JUMP:
		if (randFloat() < 0.2f) {
			startSound(PSSE_PK_VC_JUMP1, PSGame::SeMgr::SETSE_Unk0);
		}
		break;

	case IPikiAnims::JUMPB1:
		startSound(PSSE_PK_VC_JUMP2, PSGame::SeMgr::SETSE_Unk0);
		break;

	case IPikiAnims::JUMPR1:
		startSound(PSSE_PK_VC_JUMP3, PSGame::SeMgr::SETSE_Unk0);
		break;
	}

	FakePiki::startMotion(animIdx1, animIdx2, listener1, listener2);
}

/**
 * @note Address: 0x8014A4B0
 * @note Size: 0xE4
 */
void Piki::doAnimation()
{
	FakePiki::doAnimation();

	if (mIsDoped != -1 && mDopeTime > 0.0f) {

		mDopeTime -= sys->mDeltaTime;
		if (mDopeTime <= 0) {
			mSoundObj->startFreePikiSetSound(PSSE_PK_VC_DOPE_END, PSGame::SeMgr::SETSE_Unk0, 90, 0);
			if (mIsDoped != -1) {
				mIsDoped = -1;

				if (pikiMgr->mDopedPikis > 0) {
					pikiMgr->mDopedPikis--;
				}
			}

			mDopeTime = 0;

			mEffectsObj->doKillDoping();
		}
	}
}

/**
 * @note Address: 0x8014A594
 * @note Size: 0x4
 */
void Piki::doDirectDraw(Graphics&) { }

/**
 * @note Address: 0x8014A598
 * @note Size: 0x28
 */
f32 Piki::getBaseScale()
{
	f32 scale = 1.0f;
	if (mPikiKind == Purple) {
		scale = 1.2f;
	} else if (mPikiKind == White) {
		scale = 0.8f;
	}

	return scale;
}

/**
 * @note Address: 0x8014A5C0
 * @note Size: 0x1B0
 */
void Piki::changeShape(int color)
{
	int oldColor = getKind();
	if (color != Bulbmin) {
		mBoundingSphere.mRadius = 4.0f;
	} else {
		mBoundingSphere.mRadius = 7.0f;
	}

	mPikiKind = color;
	pikiMgr->setupPiki(this);

	mScale = Vector3f(getBaseScale());
	initColor();

	if (color != Bulbmin || isPikmin()) {
		GameStat::alivePikis.dec(oldColor);
		GameStat::alivePikis.inc(this);
	}

	int count = GameStat::alivePikis;

	mEffectsObj->mPikiColor     = color;
	mEffectsObj->mHamonPosPtr   = &mPosition;
	mEffectsObj->mBaseObjMatrix = &mBaseTrMatrix;

	mLeafStemJoint              = mModel->getJoint("happajnt3");
	mHappaJoint1                = mModel->getJoint("happajnt1");
	mEffectsObj->mHappaJointMtx = mModel->getJoint("happajnt3")->getWorldMatrix();
	SysShape::Joint* headJnt    = mModel->getJoint("headjnt");
	headJnt->mJ3d->mFunction    = sNeckCallback;
}

/**
 * @note Address: 0x8014A770
 * @note Size: 0x8
 */
void Piki::changeHappa(int newHappa) { mHappaKind = newHappa; }

/**
 * @note Address: 0x8014A778
 * @note Size: 0x344
 */
void Piki::do_updateLookCreature()
{
	if (isMovieActor() && !isMovieExtra()) {
		mLookAtPosition = nullptr;
		mNeckPhi        = 0.0f;
		mNeckTheta      = 0.0f;
		mLookAtTimer    = 0;
		return;
	}

	if (OptimiseController::mInstance->mPikminNeck.mValue) {
		if (mLookAtTargetCreature) {
			mTargetLookTimer -= sys->mDeltaTime;
			if (mTargetLookTimer > 0.0f) {
				Vector3f targetPos = mLookAtTargetCreature->getPosition();
				Vector3f sep       = Vector3f(targetPos.y - mPosition.y, targetPos.z - mPosition.z, targetPos.x - mPosition.x);
				if (_length2(sep) > 200.0f) {
					finishLook();
				}
				return;
			}
		}

		if (mPikiUpdateContext.updatable()) {
			switch (mAnimator.mSelfAnimator.getAnimIndex()) {
			default:
				finishLook();
				return;
			case IPikiAnims::IRAIRA:
			case IPikiAnims::NIGERU:
			case IPikiAnims::RUN2:
			case IPikiAnims::WALK:
			case IPikiAnims::WAIT:
			case IPikiAnims::SUWARU:
				break;
			}

			Sys::Sphere sphere(mPosition, 200.0f);
			CellIteratorArg iterArg(sphere);
			iterArg.mUseCustomRadius = 1;
			CellIterator iter(iterArg);
			int counter = 0;
			CI_LOOP(iter)
			{
				if (!static_cast<Creature*>(*iter)->isPiki()) {
					counter++;
				}
			}
			Creature* target = nullptr;
			if (counter > 0) {

				f32 pikiNum = (f32)counter;
				CI_LOOP(iter)
				{
					Creature* creature = static_cast<Creature*>(*iter);
					if (!creature->isPiki()) {
						if (randFloat() <= 1.0f / pikiNum) {
							target = creature;
							break;
						}
						pikiNum--;
					}
				}

				if (target) {
					startLookCreature(target);
					mTargetLookTimer = 3.0f * randFloat() + 3.0f;
				}
			}
		}
	}
}

/**
 * @note Address: 0x8014AABC
 * @note Size: 0x14
 */
void Piki::setTekiKillID(int id)
{
	if (id == 98) {
		id = 99;
	}

	mTekiKillID = id;
}

} // namespace Game

/**
 * @note Address: 0x8014AAE0
 * @note Size: 0x54
 */
void MonoObjectMgr<Game::Piki>::kill(Game::Piki* piki)
{
	for (int i = 0; i < mMax; i++) {
		if (&mArray[i] == piki) {
			mOpenIds[i] = true;
			mActiveCount--;
			return;
		}
	}
}

/**
 * @note Address: 0x8014AB34
 * @note Size: 0x4
 */
void Game::StateMachine<Game::Piki>::init(Game::Piki*) { }

/**
 * @note Address: 0x8014AB38
 * @note Size: 0x9C
 */
void Game::StateMachine<Game::Piki>::transit(Game::Piki* piki, int stateID, Game::StateArg* stateArg)
{
	int stateIndex          = mIdToIndexArray[stateID];
	PikiState* currentState = piki->mCurrentState;
	if (currentState) {
		currentState->cleanup(piki);
		mCurrentID = currentState->mId;
	}
	if (stateIndex >= mLimit) {
		while (true)
			;
	}
	PikiState* state    = static_cast<PikiState*>(mStates[stateIndex]);
	piki->mCurrentState = state;
	state->init(piki, stateArg);
}

/**
 * @note Address: 0x8014ABDC
 * @note Size: 0x38
 */
void Game::StateMachine<Game::Piki>::exec(Game::Piki* piki)
{
	if (piki->mCurrentState) {
		piki->mCurrentState->exec(piki);
	}
}

/**
 * @note Address: 0x8014AC18
 * @note Size: 0x170
 */
void __sinit_piki_cpp()
{
	/*
	stwu     r1, -0x20(r1)
	lis      r3, __float_nan@ha
	lis      r5, lbl_804B0990@ha
	lis      r4, pikiColors__Q24Game4Piki@ha
	stw      r31, 0x1c(r1)
	addi     r31, r4, pikiColors__Q24Game4Piki@l
	li       r11, 0xff
	li       r12, 0x32
	stw      r30, 0x18(r1)
	li       r30, 0
	li       r10, 0x1e
	li       r9, 0xd2
	stw      r29, 0x14(r1)
	addi     r29, r5, lbl_804B0990@l
	li       r6, 0xe6
	li       r5, 0x8c
	stw      r28, 0x10(r1)
	li       r8, 0x1c
	li       r7, 0x34
	li       r28, -1
	lfs      f0, __float_nan@l(r3)
	lis      r3, pikiColorsCursor__Q24Game4Piki@ha
	addi     r4, r3, pikiColorsCursor__Q24Game4Piki@l
	li       r0, 0xfa
	li       r3, 0x78
	stb      r30, 0(r31)
	stb      r12, 1(r31)
	stb      r11, 2(r31)
	stb      r11, 3(r31)
	stb      r11, 4(r31)
	stb      r10, 5(r31)
	stb      r30, 6(r31)
	stb      r11, 7(r31)
	stb      r11, 8(r31)
	stb      r9, 9(r31)
	stb      r30, 0xa(r31)
	stb      r11, 0xb(r31)
	stb      r8, 0xc(r31)
	stb      r30, 0xd(r31)
	stb      r7, 0xe(r31)
	stb      r11, 0xf(r31)
	stb      r11, 0x10(r31)
	stb      r6, 0x11(r31)
	stb      r11, 0x12(r31)
	stb      r11, 0x13(r31)
	stb      r11, 0x14(r31)
	stb      r5, 0x15(r31)
	stb      r30, 0x16(r31)
	stb      r11, 0x17(r31)
	stb      r11, 0x18(r31)
	stb      r11, 0x19(r31)
	stb      r11, 0x1a(r31)
	stb      r30, 0x1b(r31)
	stb      r30, 0(r4)
	stb      r12, 1(r4)
	stb      r11, 2(r4)
	stb      r11, 3(r4)
	stb      r11, 4(r4)
	stb      r10, 5(r4)
	stb      r30, 6(r4)
	stb      r11, 7(r4)
	stb      r11, 8(r4)
	stb      r9, 9(r4)
	stb      r30, 0xa(r4)
	stb      r11, 0xb(r4)
	stb      r3, 0xc(r4)
	stb      r30, 0xd(r4)
	stb      r0, 0xe(r4)
	stb      r11, 0xf(r4)
	stb      r11, 0x10(r4)
	stb      r6, 0x11(r4)
	stb      r11, 0x12(r4)
	stb      r11, 0x13(r4)
	stb      r11, 0x14(r4)
	stb      r5, 0x15(r4)
	stb      r30, 0x16(r4)
	stb      r11, 0x17(r4)
	stb      r11, 0x18(r4)
	stb      r11, 0x19(r4)
	stb      r11, 0x1a(r4)
	stb      r30, 0x1b(r4)
	lwz      r31, 0x1c(r1)
	stw      r28, lbl_80515920@sda21(r13)
	lwz      r30, 0x18(r1)
	stfs     f0, lbl_80515924@sda21(r13)
	stfs     f0, 0(r29)
	stfs     f0, 4(r29)
	stfs     f0, 8(r29)
	lwz      r29, 0x14(r1)
	lwz      r28, 0x10(r1)
	addi     r1, r1, 0x20
	blr
	*/
}
