#include "Game/pelletMgr.h"
#include "Game/MoviePlayer.h"
#include "Game/gamePlayData.h"
#include "Game/Entities/ItemOnyon.h"
#include "Game/Entities/ItemHoney.h"
#include "Game/PikiMgr.h"
#include "Game/generalEnemyMgr.h"
#include "Game/EnemyFunc.h"
#include "Game/Data.h"
#include "Game/AIConstants.h"
#include "Game/Stickers.h"
#include "Game/pathfinder.h"
#include "Game/MapMgr.h"
#include "PSSystem/PSMainSide_Scene.h"
#include "PSM/EventBase.h"
#include "Dolphin/rand.h"
#include "efx/TTsuyuGrow.h"
#include "efx/TEnemyDownSmoke.h"
#include "Radar.h"
#include "nans.h"

namespace Game {

static const u32 padding[]    = { 0, 0, 0 };
static const char className[] = "pelletState";

/**
 * @note Address: 0x801A4310
 * @note Size: 0x2AC
 */
void PelletFSM::init(Pellet* obj)
{
	create(PELLET_STATE_COUNT);
	registerState(new PelletNormalState);
	registerState(new PelletGoalState);
	registerState(new PelletBuryState);
	registerState(new PelletUpState);
	registerState(new PelletAppearState);
	registerState(new PelletScaleAppearState);
	registerState(new PelletZukanState);
	registerState(new PelletGoalWaitState);
	registerState(new PelletReturnState);
}

/**
 * @note Address: 0x801A45BC
 * @note Size: 0x4
 */
void PelletNormalState::init(Pellet*, StateArg*) { }

/**
 * @note Address: 0x801A45C0
 * @note Size: 0x4
 */
void PelletNormalState::exec(Pellet*) { }

/**
 * @note Address: 0x801A45C4
 * @note Size: 0x4
 */
void PelletNormalState::cleanup(Pellet*) { }

/**
 * @note Address: 0x801A45C8
 * @note Size: 0x7C
 */
void PelletGoalWaitState::init(Pellet* pelt, StateArg* arg)
{
	PelletGoalStateArg* sarg = static_cast<PelletGoalStateArg*>(arg);

	P2ASSERTLINE(432, arg);
	mObj = sarg->mCreature;

	pelt->getCreatureName();
}

/**
 * @note Address: 0x801A4644
 * @note Size: 0x60
 * This whole state exists solely to delay pellets being sucked into the ship
 * until after a cutscene isnt playing
 */
void PelletGoalWaitState::exec(Pellet* pelt)
{
	if (moviePlayer && moviePlayer->mDemoState == DEMOSTATE_Inactive) {
		PelletGoalStateArg arg(mObj);
		transit(pelt, PELSTATE_Goal, &arg);
	}
}

/**
 * @note Address: 0x801A46A4
 * @note Size: 0x30
 */
// void FSMState<Game::Pellet>::transit(Pellet*, int, StateArg*)
//{
//}

/**
 * @note Address: 0x801A46D4
 * @note Size: 0x4
 */
void PelletGoalWaitState::cleanup(Pellet*) { }

/**
 * @note Address: 0x801A46D8
 * @note Size: 0x680
 */
void PelletGoalState::init(Pellet* pellet, StateArg* arg)
{
	pellet->clearClaim();

	// check if a new upgrade is acquired
	if (pellet->getKind() == PelletType::Upgrade && gameSystem->isStoryMode()) {
		int id = pellet->getConfigIndex();
		if (id >= 0 && id < OlimarData::ODII_LAST_NON_EXPLORATION_KIT_ITEM) {
			playData->mOlimarData->getItem(id);
		}
	}
	pellet->setAlive(false);
	bool flag                = false;
	PelletGoalStateArg* sarg = static_cast<PelletGoalStateArg*>(arg);
	mOnyon                   = sarg->mCreature;
	if (gameSystem->isStoryMode() || gameSystem->isChallengeMode()) {
		flag = checkMovie(pellet);

	} else if (gameSystem->isVersusMode()) {
		int type = pellet->mPelletFlag;
		if ((u32)type == Pellet::FLAG_VS_BEDAMA_RED) {
			pellet->movie_begin(false);
			mOnyon->movie_begin(false);
			GameMessageVsRedOrSuckStart mesg(1);
			mesg.mIsYellow = false;
			gameSystem->mSection->sendMessage(mesg);

		} else if ((u32)type == Pellet::FLAG_VS_BEDAMA_BLUE) {
			pellet->movie_begin(false);
			mOnyon->movie_begin(false);
			GameMessageVsRedOrSuckStart mesg2(0);
			mesg2.mIsYellow = false;
			gameSystem->mSection->sendMessage(mesg2);

		} else if ((u32)type == Pellet::FLAG_VS_BEDAMA_YELLOW) {
			if ((int)mOnyon->mObjectTypeID == OBJTYPE_Onyon) {
				pellet->movie_begin(false);
				mOnyon->movie_begin(false);
				GameMessageVsRedOrSuckStart mesg3(1 - static_cast<Onyon*>(mOnyon)->mOnyonType);
				mesg3.mIsYellow = true;
				gameSystem->mSection->sendMessage(mesg3);

			} else {
				JUT_PANICLINE(512, "not onyon %d\n", mOnyon->mObjectTypeID);
			}
		}
	}

	if (flag) {
		mOnyon->movie_begin(false);
		pellet->movie_begin(false);
	}

	Vector3f sep = mOnyon->getSuckPos() - pellet->getPosition();
	mDistance    = sep.length();
	_14          = 0.0f;
	mSuckDelay   = 1.5f;

	Vector3f vel = pellet->getVelocity();
	vel.y        = 0.0f;
	pellet->setVelocity(vel);
	mScale = 1.0f;

	if (pellet->mPelletView) {
		mScale = pellet->mPelletView->viewGetBaseScale();
	}

	if (((int)mOnyon->mObjectTypeID == OBJTYPE_Onyon || (int)mOnyon->mObjectTypeID == OBJTYPE_Ufo) && !flag) {
		static_cast<Onyon*>(mOnyon)->efxSuikomi();
	}
	mInDemo     = flag;
	mDidSuikomi = false;
	if (!mInDemo) {
		Iterator<Piki> it(pikiMgr);
		CI_LOOP(it)
		{
			Piki* piki = *it;
			piki->movie_end(false);
		}

		GeneralMgrIterator<EnemyBase> it2(generalEnemyMgr);
		CI_LOOP(it2)
		{
			EnemyBase* enemy = it2.getObject();
			enemy->movie_end(false);
		}
	}

	pellet->sound_otakaraEventFinish();
	if (!(u8)mOnyon->isSuckArriveWait()) {
		InteractSuckArrive act(pellet);
		mOnyon->stimulate(act);
		mIsWaiting = 0;
	} else {
		mIsWaiting = 1;
	}
}

/**
 * @note Address: 0x801A4D58
 * @note Size: 0xD6C
 */
bool PelletGoalState::checkMovie(Pellet* pelt)
{
	bool isGot = false;
	// For treasure, upgrades, and corpses, only check for a cutscene if the pellet was collected for the first time. (only berries and
	// number pellets dont check) This leads to a bug where the first corpse cutscene wont play for enemies youve already collected at an
	// onion above ground
	if (gameSystem->isStoryMode()) {
		isGot = playData->firstCarryPellet(pelt);
	}
	if (pelt->getKind() == PelletType::Berry) {
		isGot = true;
	}
	if (pelt->getKind() == PelletType::Number) {
		isGot = true;
	}

	if (!strcmp(pelt->mConfig->mParams.mName.mData, "key")) {
		if (!gameSystem->isChallengeMode()) {
			sys->getPlayCommonData()->enableChallengeGame();
			sys->mPlayData->mDoSaveOptions = true;
		}
	} else {
		if (gameSystem->isChallengeMode()) {
			return false;
		}
	}

	if (!strcmp(pelt->mConfig->mParams.mName.mData, "loozy")) {
		sys->getPlayCommonData()->enableLouieRescue();
		sys->mPlayData->mDoSaveOptions = true;
		playData->mStoryFlags |= STORY_LouieRescued;
	}

	bool draw2d = false;
	bool doPlay = false;
	if (isGot) {
		Onyon* onyon = nullptr;
		if ((mOnyon->mObjectTypeID == OBJTYPE_Ufo || mOnyon->mObjectTypeID == OBJTYPE_Onyon)) {
			onyon = static_cast<Onyon*>(mOnyon);
		}

		// The pellet was carried to the ship, if not in a cave, play a cutscene based on pellet type
		if (onyon && onyon->mOnyonType == ONYON_TYPE_SHIP) {
			if (gameSystem->mSection->getCurrentCourseInfo()) {
				// for berries, check if a kind was collected for the first time, or 10 of the berry have been collected
				if (pelt->getKind() == PelletType::Berry) {
					int type = pelt->mPelletColor;
					// Spicy berries.
					if ((int)pelt->mPelletColor == SPRAY_TYPE_SPICY) {
						playData->getDopeFruitCount(type);
						playData->isDemoFlag(DEMO_First_Spicy_Berry);
						playData->isDemoFlag(DEMO_First_Spicy_Spray_Made);
						int dope0 = playData->getDopeFruitCount(type);
						playData->addDopeFruit(type);
						playData->getDopeFruitCount(SPRAY_TYPE_SPICY);
						playData->getDopeFruitCount(SPRAY_TYPE_BITTER);
						if (!playData->isDemoFlag(DEMO_First_Spicy_Berry)) {
							playData->setDemoFlag(DEMO_First_Spicy_Berry);
							gameSystem->mSection->setDraw2DCreature(pelt);
							BaseGameSection* section = gameSystem->mSection;
							MoviePlayArg arg("s11_dope_first_r", const_cast<char*>(section->getCurrentCourseInfo()->mName),
							                 section->mMovieFinishCallback, 0);
							moviePlayer->play(arg);
							doPlay = true;

						} else if (!playData->isDemoFlag(DEMO_First_Spicy_Spray_Made)) {
							playData->getDopeFruitCount(type);
							if (dope0 + 1 >= _aiConstants->mDopeCount.mData) {
								playData->setDemoFlag(DEMO_First_Spicy_Spray_Made);
								BaseItem* item = ItemHoney::mgr->birth();
								ItemHoney::InitArg arg(HONEY_R, true);
								item->init(&arg);
								Vector3f pos(0.0f, FLOAT_DIST_MAX, 0.0f);
								item->setPosition(pos, false);
								item->movie_begin(false);
								draw2d = true;
								gameSystem->mSection->setDraw2DCreature(item);

								BaseGameSection* section = gameSystem->mSection;
								MoviePlayArg moviearg("s11_dopebin_first_r", const_cast<char*>(section->getCurrentCourseInfo()->mName),
								                      section->mMovieFinishCallback, 0);
								moviePlayer->play(moviearg);
								doPlay = true;
							}
						}

						// Bitter berries.
					} else {
						playData->getDopeFruitCount(type);
						playData->isDemoFlag(DEMO_First_Bitter_Berry);
						playData->isDemoFlag(DEMO_First_Bitter_Spray_Made);
						int dope0 = playData->getDopeFruitCount(type);
						playData->addDopeFruit(type);
						playData->getDopeFruitCount(SPRAY_TYPE_SPICY);
						playData->getDopeFruitCount(SPRAY_TYPE_BITTER);
						if (!playData->isDemoFlag(DEMO_First_Bitter_Berry)) {
							playData->setDemoFlag(DEMO_First_Bitter_Berry);
							gameSystem->mSection->setDraw2DCreature(pelt);
							BaseGameSection* section = gameSystem->mSection;
							MoviePlayArg arg("s11_dope_first_b", const_cast<char*>(section->getCurrentCourseInfo()->mName),
							                 section->mMovieFinishCallback, 0);
							moviePlayer->play(arg);
							doPlay = true;
						} else if (!playData->isDemoFlag(DEMO_First_Bitter_Spray_Made)) {
							playData->getDopeFruitCount(type);
							if (dope0 + 1 >= _aiConstants->mDopeCount.mData) {
								playData->setDemoFlag(DEMO_First_Bitter_Spray_Made);
								BaseItem* item = ItemHoney::mgr->birth();
								ItemHoney::InitArg arg(HONEY_B, true);
								item->init(&arg);
								Vector3f pos(0.0f, FLOAT_DIST_MAX, 0.0f);
								item->setPosition(pos, false);
								item->movie_begin(false);
								draw2d = true;
								gameSystem->mSection->setDraw2DCreature(item);

								BaseGameSection* section = gameSystem->mSection;
								MoviePlayArg moviearg("s11_dopebin_first_b", const_cast<char*>(section->getCurrentCourseInfo()->mName),
								                      section->mMovieFinishCallback, 0);
								moviePlayer->play(moviearg);
								doPlay = true;
							}
						}
					}

				} else if (pelt->getKind() == PelletType::Treasure) {
					// Treasure carried to the ship (assume above ground)
					gameSystem->mSection->setDraw2DCreature(pelt);
					BaseGameSection* section = gameSystem->mSection;
					MoviePlayArg moviearg("s10_suck_treasure", const_cast<char*>(section->getCurrentCourseInfo()->mName),
					                      section->mMovieFinishCallback, 0);
					moviearg.mPelletName = pelt->mConfig->mParams.mName.mData;
					moviePlayer->play(moviearg);
					doPlay = true;

				} else if (pelt->getKind() == PelletType::Upgrade) {
					// Upgrade carried to the ship (this only appears with the globe in AW normally)
					// strangely, upgrades with an ID of 8 or more use a different theme
					gameSystem->mSection->setDraw2DCreature(pelt);
					BaseGameSection* section = gameSystem->mSection;
					MoviePlayArg moviearg("s17_suck_equipment", const_cast<char*>(section->getCurrentCourseInfo()->mName),
					                      section->mMovieFinishCallback, 0);
					moviearg.mPelletName = pelt->mConfig->mParams.mName.mData;
					moviearg.mStreamID   = P2_STREAM_SOUND_ID(PSSTR_EQUIP_GET);
					if (pelt->mConfig->mParams.mIndex >= 8) {
						moviearg.mStreamID = P2_STREAM_SOUND_ID(PSSTR_POWERUP_GET);
					}
					moviePlayer->play(moviearg);
					doPlay = true;
				} else {
					// A completely unused cutscene, in theory this would play if you carried a corpse or number pellet to the ship
					// but even if you did, this cutscene doesnt exist in the files, so nothing happens
					BaseGameSection* section = gameSystem->mSection;
					MoviePlayArg moviearg("suck_ufo", const_cast<char*>(section->getCurrentCourseInfo()->mName),
					                      section->mMovieFinishCallback, 0);
					moviePlayer->play(moviearg);
					doPlay = true;
				}
			}
		} else if (onyon && onyon->mOnyonType == ONYON_TYPE_POD) {
			if (pelt->getKind() == PelletType::Treasure) {
				// Treasure carried to the cave pod
				gameSystem->mSection->setDraw2DCreature(pelt);
				MoviePlayArg moviearg("s22_cv_suck_treasure", nullptr, gameSystem->mSection->mMovieFinishCallback, 0);
				moviearg.mOrigin        = mOnyon->getPosition();
				moviearg.mAngle         = mOnyon->getFaceDir();
				moviearg.mDelegateStart = gameSystem->mSection->mMovieStartCallback;
				moviearg.mDelegateEnd   = gameSystem->mSection->mMovieFinishCallback;
				moviearg.mPelletName    = pelt->mConfig->mParams.mName.mData;
				moviePlayer->play(moviearg);
				doPlay = true;

			} else if (pelt->getKind() == PelletType::Upgrade) {
				// Upgrade carried to the cave pod
				gameSystem->mSection->setDraw2DCreature(pelt);
				BaseGameSection* section = gameSystem->mSection;
				MoviePlayArg moviearg("s22_cv_suck_equipment", nullptr, section->mMovieFinishCallback, 0);
				moviearg.mPelletName    = pelt->mConfig->mParams.mName.mData;
				moviearg.mDelegateStart = section->mMovieStartCallback;
				moviearg.mOrigin        = mOnyon->getPosition();
				moviearg.mAngle         = mOnyon->getFaceDir();
				moviearg.mStreamID      = P2_STREAM_SOUND_ID(PSSTR_EQUIP_GET);
				if (pelt->mConfig->mParams.mIndex >= 8) {
					moviearg.mStreamID = P2_STREAM_SOUND_ID(PSSTR_POWERUP_GET);
				}
				moviePlayer->play(moviearg);
				doPlay = true;

			} else if (pelt->getKind() == PelletType::Carcass && pelt->mPelletFlag != Pellet::FLAG_NAVI_NAPSACK
			           && !playData->isDemoFlag(DEMO_First_Corpse_In_Cave)) {
				// first corpse collected in cave
				playData->setDemoFlag(DEMO_First_Corpse_In_Cave);
				BaseGameSection* section = gameSystem->mSection;
				MoviePlayArg moviearg("x08_cv_suck_carcass", nullptr, section->mMovieFinishCallback, 0);
				moviearg.mPelletName    = pelt->mConfig->mParams.mName.mData;
				moviearg.mDelegateStart = section->mMovieStartCallback;
				moviearg.mOrigin        = mOnyon->getPosition();
				moviearg.mAngle         = mOnyon->getFaceDir();
				moviePlayer->play(moviearg);
				doPlay = true;
			}
		} else if (onyon && onyon->mOnyonType <= ONYON_TYPE_YELLOW) {
			if (pelt->getKind() == PelletType::Number && !playData->isDemoFlag(DEMO_First_Number_Pellet)) {
				playData->setDemoFlag(DEMO_First_Number_Pellet);
				BaseGameSection* section = gameSystem->mSection;
				MoviePlayArg moviearg("x18_exp_pellet", nullptr, section->mMovieFinishCallback, 0);
				moviearg.mPelletName    = pelt->mConfig->mParams.mName.mData;
				moviearg.mDelegateStart = section->mMovieStartCallback;
				moviearg.mOrigin        = mOnyon->getPosition();
				moviearg.mAngle         = mOnyon->getFaceDir();
				moviePlayer->play(moviearg);
				doPlay = true;
			}
		}
	}

	if (doPlay) {
		Pellet* pelt2 = nullptr;
		if (pelt->getKind() == PelletType::Carcass) {
			pelt->mPelletView->mCreature->movie_begin(false);
		} else if (pelt->getKind() == PelletType::Number) {
			pelt->movie_begin(false);
		} else {
			pelt2 = pelt;
			pelt->getCreatureName();
			pelt->getCreatureID();
			if (pelt->mPelletView) {
				pelt->mPelletView->viewGetShape();
			}
		}
		if (!draw2d) {
			gameSystem->mSection->setDraw2DCreature(pelt2);
		}
		pelt->movie_begin(false);
	}
	return doPlay;
}

static const char creatureName[] = "Creature";

static void weirdFixFunc(f32* p1, f32* p2, f32* p3, f32* p4, f32* p5, f32* p6)
{
	*p1 = 90.0f;
	*p2 = 60.0f;
	*p3 = -325.9493f;
	*p4 = 325.9493f;
	*p5 = 8.0f;
	*p6 = TAU;
}

/**
 * @note Address: 0x801A5AC4
 * @note Size: 0xB34
 */
void PelletGoalState::exec(Pellet* pelt)
{
	if (pelt->mPelletView) {
		Creature* obj = pelt->mPelletView->mCreature;
		if (obj && obj->isTeki()) {
			static_cast<EnemyBase*>(pelt->mPelletView->mCreature)->setAnimSpeed(90.0f);
		}
	} else {
		pelt->mAnimSpeed = sys->mDeltaTime * 60.0f;
	}

	if (mInDemo && !mDidSuikomi && moviePlayer && moviePlayer->mDemoState == DEMOSTATE_Playing) {
		if (((int)mOnyon->mObjectTypeID == OBJTYPE_Onyon || (int)mOnyon->mObjectTypeID == OBJTYPE_Ufo)) { // maybe getOnyon inline?
			static_cast<Onyon*>(mOnyon)->efxSuikomi();
			mDidSuikomi = true;
		}
	}

	if (mStartSuck) {
		mCurrPos   = pelt->getPosition();
		mSuckTime  = 0.0f;
		mStartSuck = false;

		Vector3f sep = mOnyon->getSuckPos() - mCurrPos;
		mDistance    = sep.length();
		mTimer       = 0.0f;
	}

	Vector3f scaledSep = (mOnyon->getSuckPos() - mCurrPos);
	Vector3f test      = mCurrPos + scaledSep * mSuckTime;
	if (mIsWaiting) {
		if ((u8)mOnyon->isSuckArriveWait()) {
			return;
		}
		InteractSuckArrive act(pelt);
		mOnyon->stimulate(act);
		mIsWaiting = false;
	}

	if (mSuckDelay > 0.0f || !mOnyon->isSuckReady()) {
		Vector3f velocity = pelt->getVelocity();
		velocity.z        = 0.0f;
		velocity.x        = 0.0f;

		pelt->setVelocity(velocity);
		mSuckDelay -= sys->mDeltaTime;
		mStartSuck = true;
		return;
	}

	pelt->mRigid.mConfigs[0].mPosition = test;
	pelt->mPelletPosition              = test;

	f32 suckRemain = (1.0f - mSuckTime);
	f32 scale      = suckRemain * mScale;

	f32 sinTheta = sinf(8.0f * (TAU * suckRemain));
	sinTheta *= 0.03f; // regswap here for f1 and f0
	scale += sinTheta;
	pelt->mScale = Vector3f(scale);

	mSuckTime += (mTimer * sys->mDeltaTime) / mDistance;
	mTimer += sys->mDeltaTime * 720.0f;
	if (!(mSuckTime >= 1.0f)) {
		return;
	}

	Stickers stick(pelt);
	Iterator<Creature> it(&stick);
	InteractSuckFinish suckFinish(pelt);
	CI_LOOP(it)
	{
		Creature* obj = *it;
		obj->stimulate(suckFinish);
	}

	InteractSuckDone suckDone(pelt, 0);
	mOnyon->stimulate(suckDone);

	if (Radar::mgr) {
		Radar::Mgr::getNumOtakaraItems();
		Radar::Mgr::getNumOtakaraItems();
		bool check = pelt->getKind() == PelletType::Treasure;
		if (!check) {
			pelt->getKind();
		}
	}

	if (!gameSystem->isVersusMode() && (pelt->getKind() == PelletType::Treasure || pelt->getKind() == PelletType::Upgrade)
	    && Radar::Mgr::getNumOtakaraItems() <= 1) {
		if (gameSystem->mIsInCave) {
			PSSystem::SceneMgr* mgr = PSSystem::getSceneMgr();
			PSSystem::validateSceneMgr(mgr);
			PSM::Scene_Cave* scene = static_cast<PSM::Scene_Cave*>(mgr->getChildScene());
			PSSystem::checkGameScene(scene);
			scene->stopPollutionSe();
			if (gameSystem->isChallengeMode()) {
				if (strcmp(pelt->mConfig->mParams.mName.mData, "key")) {
					PSSystem::SceneMgr* mgr = PSSystem::getSceneMgr();
					PSSystem::validateSceneMgr(mgr);
					PSM::Scene_Cave* scene = static_cast<PSM::Scene_Cave*>(mgr->getChildScene());
					PSSystem::checkGameScene(scene);
					if (scene->isCave()) {
						scene->startPollutUpSe();
					}
				}
			}
		} else {
			PSSystem::SceneMgr* mgr = PSSystem::getSceneMgr();
			PSSystem::validateSceneMgr(mgr);
			PSM::Scene_Ground* scene = static_cast<PSM::Scene_Ground*>(mgr->getChildScene());
			PSSystem::checkGameScene(scene);
			scene->setPollutUp();
		}
	}

	if (gameSystem->isVersusMode() && suckDone._08) {
		return;
	}
	if (!mInDemo) {
		if (!strcmp("orima", pelt->mConfig->mParams.mName.mData)) {
			pelt->mSoundMgr->startSound(PSSE_EV_ONYON_BOUND_PLAYER, 0);
		}
		pelt->kill(nullptr);
	} else {
		if (pelt->getKind() == PelletType::Carcass || pelt->getKind() == PelletType::Number) {
			pelt->kill(nullptr);
		} else if (pelt->getKind() == PelletType::Upgrade || pelt->getKind() == PelletType::Treasure) {
			pelt->mAnimSpeed = sys->mDeltaTime * 30.0f;
			pelt->mCarryAnim.setFrameByKeyType(0);
		}
	}
	if (shadowMgr) {
		shadowMgr->delShadow(pelt);
	}
	transit(pelt, PELSTATE_Normal, nullptr);

	/*
	stwu     r1, -0xe0(r1)
	mflr     r0
	stw      r0, 0xe4(r1)
	stfd     f31, 0xd0(r1)
	psq_st   f31, 216(r1), 0, qr0
	stfd     f30, 0xc0(r1)
	psq_st   f30, 200(r1), 0, qr0
	stfd     f29, 0xb0(r1)
	psq_st   f29, 184(r1), 0, qr0
	stw      r31, 0xac(r1)
	stw      r30, 0xa8(r1)
	stw      r29, 0xa4(r1)
	stw      r28, 0xa0(r1)
	mr       r30, r4
	lis      r4, lbl_8047F490@ha
	lwz      r5, 0x358(r30)
	mr       r29, r3
	addi     r31, r4, lbl_8047F490@l
	cmplwi   r5, 0
	beq      lbl_801A5B4C
	lwz      r3, 8(r5)
	cmplwi   r3, 0
	beq      lbl_801A5B60
	lwz      r12, 0(r3)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801A5B60
	lwz      r3, 0x358(r30)
	lfs      f1, lbl_805191A4@sda21(r2)
	lwz      r3, 8(r3)
	bl       setAnimSpeed__Q24Game9EnemyBaseFf
	b        lbl_801A5B60

lbl_801A5B4C:
	lwz      r3, sys@sda21(r13)
	lfs      f1, lbl_805191A8@sda21(r2)
	lfs      f0, 0x54(r3)
	fmuls    f0, f1, f0
	stfs     f0, 0x438(r30)

lbl_801A5B60:
	lbz      r0, 0x3c(r29)
	cmplwi   r0, 0
	beq      lbl_801A5BB4
	lbz      r0, 0x3e(r29)
	cmplwi   r0, 0
	bne      lbl_801A5BB4
	lwz      r3, moviePlayer__4Game@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_801A5BB4
	lwz      r0, 0x18(r3)
	cmpwi    r0, 5
	bne      lbl_801A5BB4
	lwz      r3, 0x10(r29)
	lhz      r0, 0x128(r3)
	cmpwi    r0, 0x402
	beq      lbl_801A5BA8
	cmpwi    r0, 0x403
	bne      lbl_801A5BB4

lbl_801A5BA8:
	bl       efxSuikomi__Q24Game5OnyonFv
	li       r0, 1
	stb      r0, 0x3e(r29)

lbl_801A5BB4:
	lbz      r0, 0x34(r29)
	cmplwi   r0, 0
	beq      lbl_801A5C78
	mr       r4, r30
	addi     r3, r1, 0x3c
	lwz      r12, 0(r30)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0x3c(r1)
	li       r0, 0
	lfs      f0, lbl_80519188@sda21(r2)
	addi     r3, r1, 0x30
	stfs     f1, 0x28(r29)
	lfs      f1, 0x40(r1)
	stfs     f1, 0x2c(r29)
	lfs      f1, 0x44(r1)
	stfs     f1, 0x30(r29)
	stfs     f0, 0x24(r29)
	stb      r0, 0x34(r29)
	lwz      r4, 0x10(r29)
	lwz      r12, 0(r4)
	lwz      r12, 0x194(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0x34(r1)
	lfs      f0, 0x2c(r29)
	lfs      f3, 0x38(r1)
	fsubs    f4, f1, f0
	lfs      f2, 0x30(r29)
	lfs      f1, 0x30(r1)
	lfs      f0, 0x28(r29)
	fsubs    f2, f3, f2
	fmuls    f3, f4, f4
	fsubs    f1, f1, f0
	lfs      f0, lbl_80519188@sda21(r2)
	fmuls    f2, f2, f2
	fmadds   f1, f1, f1, f3
	fadds    f1, f2, f1
	fcmpo    cr0, f1, f0
	ble      lbl_801A5C68
	ble      lbl_801A5C6C
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_801A5C6C

lbl_801A5C68:
	fmr      f1, f0

lbl_801A5C6C:
	stfs     f1, 0x18(r29)
	lfs      f0, lbl_80519188@sda21(r2)
	stfs     f0, 0x38(r29)

lbl_801A5C78:
	lwz      r4, 0x10(r29)
	addi     r3, r1, 0x24
	lwz      r12, 0(r4)
	lwz      r12, 0x194(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0x2c(r1)
	lfs      f5, 0x30(r29)
	lfs      f0, 0x28(r1)
	lfs      f6, 0x2c(r29)
	fsubs    f2, f1, f5
	lfs      f4, 0x24(r29)
	fsubs    f3, f0, f6
	lfs      f1, 0x24(r1)
	lfs      f7, 0x28(r29)
	fmuls    f0, f2, f4
	lbz      r0, 0x3d(r29)
	fsubs    f2, f1, f7
	fmuls    f1, f3, f4
	cmplwi   r0, 0
	fadds    f29, f5, f0
	fmuls    f0, f2, f4
	fadds    f30, f6, f1
	fadds    f31, f7, f0
	beq      lbl_801A5D34
	lwz      r3, 0x10(r29)
	lwz      r12, 0(r3)
	lwz      r12, 0x1a0(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801A65C0
	lis      r4, __vt__Q24Game11Interaction@ha
	lis      r3, __vt__Q24Game18InteractSuckArrive@ha
	addi     r5, r4, __vt__Q24Game11Interaction@l
	stw      r30, 0x14(r1)
	addi     r0, r3, __vt__Q24Game18InteractSuckArrive@l
	addi     r4, r1, 0x10
	stw      r5, 0x10(r1)
	stw      r0, 0x10(r1)
	lwz      r3, 0x10(r29)
	lwz      r12, 0(r3)
	lwz      r12, 0x1a4(r12)
	mtctr    r12
	bctrl
	li       r0, 0
	stb      r0, 0x3d(r29)

lbl_801A5D34:
	lfs      f1, 0x1c(r29)
	lfs      f0, lbl_80519188@sda21(r2)
	fcmpo    cr0, f1, f0
	bgt      lbl_801A5D60
	lwz      r3, 0x10(r29)
	lwz      r12, 0(r3)
	lwz      r12, 0x19c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801A5DD4

lbl_801A5D60:
	mr       r4, r30
	addi     r3, r1, 0x18
	lwz      r12, 0(r30)
	lwz      r12, 0x6c(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0x18(r1)
	mr       r3, r30
	lfs      f1, 0x20(r1)
	addi     r4, r1, 0x64
	lfs      f2, 0x1c(r1)
	stfs     f0, 0x64(r1)
	lfs      f0, lbl_80519188@sda21(r2)
	stfs     f1, 0x6c(r1)
	stfs     f2, 0x68(r1)
	stfs     f0, 0x6c(r1)
	stfs     f0, 0x64(r1)
	lwz      r12, 0(r30)
	lwz      r12, 0x68(r12)
	mtctr    r12
	bctrl
	lwz      r3, sys@sda21(r13)
	li       r0, 1
	lfs      f1, 0x1c(r29)
	lfs      f0, 0x54(r3)
	fsubs    f0, f1, f0
	stfs     f0, 0x1c(r29)
	stb      r0, 0x34(r29)
	b        lbl_801A65C0

lbl_801A5DD4:
	stfs     f31, 0x1b0(r30)
	lfs      f5, lbl_80519190@sda21(r2)
	stfs     f30, 0x1b4(r30)
	lfs      f1, lbl_805191B8@sda21(r2)
	stfs     f29, 0x1b8(r30)
	lfs      f2, lbl_805191B4@sda21(r2)
	stfs     f31, 0x3ac(r30)
	lfs      f0, lbl_80519188@sda21(r2)
	stfs     f30, 0x3b0(r30)
	stfs     f29, 0x3b4(r30)
	lfs      f4, 0x24(r29)
	lfs      f3, 0x20(r29)
	fsubs    f4, f5, f4
	fmuls    f1, f1, f4
	fmuls    f4, f4, f3
	fmuls    f1, f2, f1
	fcmpo    cr0, f1, f0
	bge      lbl_801A5E48
	lfs      f0, lbl_805191AC@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 0x90(r1)
	lwz      r0, 0x94(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0
	fneg     f1, f0
	b        lbl_801A5E6C

lbl_801A5E48:
	lfs      f0, lbl_805191B0@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 0x98(r1)
	lwz      r0, 0x9c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f1, r3, r0

lbl_801A5E6C:
	lfs      f0, lbl_805191BC@sda21(r2)
	lfs      f3, lbl_805191C0@sda21(r2)
	fmuls    f1, f0, f1
	lfs      f0, lbl_80519190@sda21(r2)
	fadds    f4, f4, f1
	stfs     f4, 0x168(r30)
	stfs     f4, 0x16c(r30)
	stfs     f4, 0x170(r30)
	lwz      r3, sys@sda21(r13)
	lfs      f4, 0x38(r29)
	lfs      f2, 0x54(r3)
	lfs      f1, 0x18(r29)
	fmuls    f2, f4, f2
	lfs      f4, 0x24(r29)
	fdivs    f1, f2, f1
	fadds    f1, f4, f1
	stfs     f1, 0x24(r29)
	lwz      r3, sys@sda21(r13)
	lfs      f1, 0x38(r29)
	lfs      f2, 0x54(r3)
	fmadds   f1, f3, f2, f1
	stfs     f1, 0x38(r29)
	lfs      f1, 0x24(r29)
	fcmpo    cr0, f1, f0
	cror     2, 1, 2
	bne      lbl_801A65C0
	mr       r4, r30
	addi     r3, r1, 0x70
	bl       __ct__Q24Game8StickersFPQ24Game8Creature
	lis      r3, __vt__Q24Game11Interaction@ha
	li       r5, 0
	addi     r0, r3, __vt__Q24Game11Interaction@l
	lis      r3, "__vt__26Iterator<Q24Game8Creature>"@ha
	lis      r4, __vt__Q24Game18InteractSuckFinish@ha
	stw      r0, 8(r1)
	addi     r6, r3, "__vt__26Iterator<Q24Game8Creature>"@l
	addi     r3, r1, 0x70
	addi     r0, r4, __vt__Q24Game18InteractSuckFinish@l
	cmplwi   r5, 0
	stw      r6, 0x54(r1)
	stw      r5, 0x60(r1)
	stw      r5, 0x58(r1)
	stw      r3, 0x5c(r1)
	stw      r30, 0xc(r1)
	stw      r0, 8(r1)
	bne      lbl_801A5F3C
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x58(r1)
	b        lbl_801A60AC

lbl_801A5F3C:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x58(r1)
	b        lbl_801A5FA8

lbl_801A5F54:
	lwz      r3, 0x5c(r1)
	lwz      r4, 0x58(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x60(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801A60AC
	lwz      r3, 0x5c(r1)
	lwz      r4, 0x58(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x58(r1)

lbl_801A5FA8:
	lwz      r12, 0x54(r1)
	addi     r3, r1, 0x54
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801A5F54
	b        lbl_801A60AC

lbl_801A5FC8:
	lwz      r3, 0x5c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	addi     r4, r1, 8
	lwz      r12, 0x1a4(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x60(r1)
	cmplwi   r0, 0
	bne      lbl_801A601C
	lwz      r3, 0x5c(r1)
	lwz      r4, 0x58(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x58(r1)
	b        lbl_801A60AC

lbl_801A601C:
	lwz      r3, 0x5c(r1)
	lwz      r4, 0x58(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x58(r1)
	b        lbl_801A6090

lbl_801A603C:
	lwz      r3, 0x5c(r1)
	lwz      r4, 0x58(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x60(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801A60AC
	lwz      r3, 0x5c(r1)
	lwz      r4, 0x58(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x58(r1)

lbl_801A6090:
	lwz      r12, 0x54(r1)
	addi     r3, r1, 0x54
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801A603C

lbl_801A60AC:
	lwz      r3, 0x5c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x58(r1)
	cmplw    r4, r3
	bne      lbl_801A5FC8
	lis      r4, __vt__Q24Game11Interaction@ha
	lis      r3, __vt__Q24Game16InteractSuckDone@ha
	addi     r4, r4, __vt__Q24Game11Interaction@l
	li       r0, 0
	stw      r4, 0x48(r1)
	addi     r3, r3, __vt__Q24Game16InteractSuckDone@l
	addi     r4, r1, 0x48
	stw      r30, 0x4c(r1)
	stw      r3, 0x48(r1)
	stb      r0, 0x50(r1)
	lwz      r3, 0x10(r29)
	lwz      r12, 0(r3)
	lwz      r12, 0x1a4(r12)
	mtctr    r12
	bctrl
	lwz      r0, mgr__5Radar@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_801A6158
	bl       getNumOtakaraItems__Q25Radar3MgrFv
	bl       getNumOtakaraItems__Q25Radar3MgrFv
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x1f4(r12)
	mtctr    r12
	bctrl
	clrlwi   r0, r3, 0x18
	subfic   r0, r0, 3
	cntlzw   r0, r0
	rlwinm.  r0, r0, 0x1b, 0x18, 0x1f
	bne      lbl_801A6158
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x1f4(r12)
	mtctr    r12
	bctrl

lbl_801A6158:
	lwz      r3, gameSystem__4Game@sda21(r13)
	lwz      r0, 0x44(r3)
	cmpwi    r0, 1
	beq      lbl_801A6458
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x1f4(r12)
	mtctr    r12
	bctrl
	clrlwi   r0, r3, 0x18
	cmplwi   r0, 3
	beq      lbl_801A61A8
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x1f4(r12)
	mtctr    r12
	bctrl
	clrlwi   r0, r3, 0x18
	cmplwi   r0, 4
	bne      lbl_801A6458

lbl_801A61A8:
	bl       getNumOtakaraItems__Q25Radar3MgrFv
	cmpwi    r3, 1
	bgt      lbl_801A6458
	lwz      r3, gameSystem__4Game@sda21(r13)
	lbz      r0, 0x48(r3)
	cmplwi   r0, 0
	beq      lbl_801A639C
	lwz      r0, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_801A61E4
	addi     r3, r31, 0x128
	addi     r5, r31, 0x28
	li       r4, 0x1d3
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801A61E4:
	lwz      r28, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r28, 0
	bne      lbl_801A6204
	addi     r3, r31, 0x128
	addi     r5, r31, 0x28
	li       r4, 0x1dc
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801A6204:
	lwz      r0, 4(r28)
	cmplwi   r0, 0
	bne      lbl_801A6224
	addi     r3, r31, 0x134
	addi     r5, r31, 0x28
	li       r4, 0xcf
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801A6224:
	lwz      r3, 4(r28)
	lwz      r28, 4(r3)
	cmplwi   r28, 0
	bne      lbl_801A6248
	addi     r3, r31, 0x134
	addi     r5, r31, 0x140
	li       r4, 0xd1
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801A6248:
	lwz      r12, 0(r28)
	mr       r3, r28
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801A6278
	addi     r3, r31, 0x164
	addi     r5, r31, 0x28
	li       r4, 0x177
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801A6278:
	mr       r3, r28
	bl       stopPollutionSe__Q23PSM10Scene_CaveFv
	lwz      r4, gameSystem__4Game@sda21(r13)
	li       r3, 0
	lwz      r0, 0x44(r4)
	cmpwi    r0, 2
	beq      lbl_801A629C
	cmpwi    r0, 3
	bne      lbl_801A62A0

lbl_801A629C:
	li       r3, 1

lbl_801A62A0:
	clrlwi.  r0, r3, 0x18
	beq      lbl_801A6458
	lwz      r3, 0x35c(r30)
	addi     r4, r2, lbl_80519194@sda21
	lwz      r3, 0x40(r3)
	bl       strcmp
	cmpwi    r3, 0
	beq      lbl_801A6458
	lwz      r0, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_801A62E0
	addi     r3, r31, 0x128
	addi     r5, r31, 0x28
	li       r4, 0x1d3
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801A62E0:
	lwz      r28, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r28, 0
	bne      lbl_801A6300
	addi     r3, r31, 0x128
	addi     r5, r31, 0x28
	li       r4, 0x1dc
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801A6300:
	lwz      r0, 4(r28)
	cmplwi   r0, 0
	bne      lbl_801A6320
	addi     r3, r31, 0x134
	addi     r5, r31, 0x28
	li       r4, 0xcf
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801A6320:
	lwz      r3, 4(r28)
	lwz      r28, 4(r3)
	cmplwi   r28, 0
	bne      lbl_801A6344
	addi     r3, r31, 0x134
	addi     r5, r31, 0x140
	li       r4, 0xd1
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801A6344:
	lwz      r12, 0(r28)
	mr       r3, r28
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801A6374
	addi     r3, r31, 0x164
	addi     r5, r31, 0x28
	li       r4, 0x177
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801A6374:
	mr       r3, r28
	lwz      r12, 0(r28)
	lwz      r12, 0x58(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801A6458
	mr       r3, r28
	bl       startPollutUpSe__Q23PSM10Scene_CaveFv
	b        lbl_801A6458

lbl_801A639C:
	lwz      r0, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_801A63BC
	addi     r3, r31, 0x128
	addi     r5, r31, 0x28
	li       r4, 0x1d3
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801A63BC:
	lwz      r28, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r28, 0
	bne      lbl_801A63DC
	addi     r3, r31, 0x128
	addi     r5, r31, 0x28
	li       r4, 0x1dc
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801A63DC:
	lwz      r0, 4(r28)
	cmplwi   r0, 0
	bne      lbl_801A63FC
	addi     r3, r31, 0x134
	addi     r5, r31, 0x28
	li       r4, 0xcf
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801A63FC:
	lwz      r3, 4(r28)
	lwz      r28, 4(r3)
	cmplwi   r28, 0
	bne      lbl_801A6420
	addi     r3, r31, 0x134
	addi     r5, r31, 0x140
	li       r4, 0xd1
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801A6420:
	lwz      r12, 0(r28)
	mr       r3, r28
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801A6450
	addi     r3, r31, 0x164
	addi     r5, r31, 0x28
	li       r4, 0x177
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801A6450:
	mr       r3, r28
	bl       setPollutUp__Q23PSM12Scene_GroundFv

lbl_801A6458:
	lwz      r3, gameSystem__4Game@sda21(r13)
	lwz      r0, 0x44(r3)
	cmpwi    r0, 1
	bne      lbl_801A6484
	lbz      r0, 0x50(r1)
	cmplwi   r0, 0
	beq      lbl_801A6484
	addi     r3, r1, 0x70
	li       r4, -1
	bl       __dt__Q24Game8StickersFv
	b        lbl_801A65C0

lbl_801A6484:
	lbz      r0, 0x3c(r29)
	cmplwi   r0, 0
	bne      lbl_801A64D4
	lwz      r4, 0x35c(r30)
	addi     r3, r2, lbl_805191C4@sda21
	lwz      r4, 0x40(r4)
	bl       strcmp
	cmpwi    r3, 0
	bne      lbl_801A64C4
	lwz      r3, 0x330(r30)
	li       r4, 0x3806
	li       r5, 0
	lwz      r12, 0x28(r3)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl

lbl_801A64C4:
	mr       r3, r30
	li       r4, 0
	bl       kill__Q24Game8CreatureFPQ24Game15CreatureKillArg
	b        lbl_801A6580

lbl_801A64D4:
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x1f4(r12)
	mtctr    r12
	bctrl
	clrlwi   r0, r3, 0x18
	cmplwi   r0, 1
	beq      lbl_801A6510
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x1f4(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801A6520

lbl_801A6510:
	mr       r3, r30
	li       r4, 0
	bl       kill__Q24Game8CreatureFPQ24Game15CreatureKillArg
	b        lbl_801A6580

lbl_801A6520:
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x1f4(r12)
	mtctr    r12
	bctrl
	clrlwi   r0, r3, 0x18
	cmplwi   r0, 4
	beq      lbl_801A6560
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x1f4(r12)
	mtctr    r12
	bctrl
	clrlwi   r0, r3, 0x18
	cmplwi   r0, 3
	bne      lbl_801A6580

lbl_801A6560:
	lwz      r5, sys@sda21(r13)
	addi     r3, r30, 0x41c
	lfs      f1, lbl_805191CC@sda21(r2)
	li       r4, 0
	lfs      f0, 0x54(r5)
	fmuls    f0, f1, f0
	stfs     f0, 0x438(r30)
	bl       setFrameByKeyType__Q28SysShape8AnimatorFUl

lbl_801A6580:
	lwz      r3, shadowMgr__4Game@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_801A6594
	mr       r4, r30
	bl       delShadow__Q24Game9ShadowMgrFPQ24Game8Creature

lbl_801A6594:
	mr       r3, r29
	mr       r4, r30
	lwz      r12, 0(r29)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	addi     r3, r1, 0x70
	li       r4, -1
	bl       __dt__Q24Game8StickersFv

lbl_801A65C0:
	psq_l    f31, 216(r1), 0, qr0
	lfd      f31, 0xd0(r1)
	psq_l    f30, 200(r1), 0, qr0
	lfd      f30, 0xc0(r1)
	psq_l    f29, 184(r1), 0, qr0
	lfd      f29, 0xb0(r1)
	lwz      r31, 0xac(r1)
	lwz      r30, 0xa8(r1)
	lwz      r29, 0xa4(r1)
	lwz      r0, 0xe4(r1)
	lwz      r28, 0xa0(r1)
	mtlr     r0
	addi     r1, r1, 0xe0
	blr
	*/
}

/**
 * @note Address: 0x801A65F8
 * @note Size: 0x4
 */
void PelletGoalState::cleanup(Pellet*) { }

/**
 * @note Address: 0x801A65FC
 * @note Size: 0x144
 */
void PelletAppearState::init(Pellet* pelt, StateArg*)
{
	pelt->clearClaim();
	pelt->mScale = 0.01f;
	mGoalScale   = 1.0f;
	mTime        = 0.0f;
	mTimeSine    = 0.0f;

	mMagnitude = (PI / 5) * randFloat() + TAU;
	_20        = 0.4f * randFloat() + 0.3f;
	mDuration  = 0.8f * randFloat() + 1.8f;
	_1C        = 0.7f * randFloat();
	mEfxMade   = false;
}

/**
 * @note Address: 0x801A6740
 * @note Size: 0x240
 */
void PelletAppearState::exec(Pellet* pelt)
{
	f32 frameTime = sys->mDeltaTime;
	f32 scale     = 0.0f;
	if (!(mTime < _1C)) {
		if (mTime < _1C + _20) {
			scale = SQUARE((mTime - _1C) / _20);
		} else {
			if (!mEfxMade) {
				Vector3f translation;
				pelt->mBaseTrMatrix.getColumn(3, translation);
				efx::TTsuyuGrowon growOnFX;
				efx::Arg arg(translation);
				growOnFX.create(&arg);
				pelt->mSoundMgr->startSound(PSSE_EV_TSUYUKUSA_FRUIT, 0);
				mEfxMade = true;
			}

			mTimeSine    = roundAng(mMagnitude * frameTime + mTimeSine);
			f32 rad      = 0.2f * mGoalScale;
			f32 sinTheta = sinf(mTimeSine);
			f32 idk      = (mTime - (_1C + _20)) / mDuration;
			mGoalScale   = -(idk * idk - 1.0f);
			scale        = rad * sinTheta + 1.0f;
			if (mTime >= mDuration + (_1C + _20)) {
				scale = 1.0f;
				transit(pelt, PELSTATE_Normal, nullptr);
			}
		}
	}
	mTime += frameTime;
	if (scale == 0.0f) {
		scale = 0.01f;
	}
	pelt->mScale = scale;
}

/**
 * @note Address: 0x801A6980
 * @note Size: 0x4
 */
void PelletAppearState::cleanup(Pellet*) { }

/**
 * @note Address: 0x801A6984
 * @note Size: 0x130
 */
void PelletScaleAppearState::init(Pellet* pelt, StateArg*)
{
	pelt->clearClaim();
	pelt->mScale = 0.01f;
	mGoalScale   = 1.0f;
	mTime        = 0.0f;
	mAngle       = 0.0f;

	mMagnitude = (PI / 5) * randFloat() + 18.849556f;
	_20        = 0.05f * randFloat() + 0.1f;
	mDuration  = 0.2f * randFloat() + 0.6f;
	_1C        = 0.0f;
	mEfxMade   = false;
	pelt->setCollisionFlick(false);
}

/**
 * @note Address: 0x801A6AB4
 * @note Size: 0x1BC
 * This state is mostly identical to PelletAppearState but without the particle/sound
 */
void PelletScaleAppearState::exec(Pellet* pelt)
{
	f32 frameTime = sys->mDeltaTime;
	f32 scale     = 0.0f;
	if (!(mTime < _1C)) {
		if (mTime < _1C + _20) {
			scale = ((mTime - _1C) / _20);
		} else {
			if (!mEfxMade) {
				mEfxMade = true;
			}

			mAngle       = roundAng(mMagnitude * frameTime + mAngle);
			f32 rad      = 0.1f * mGoalScale;
			f32 sinTheta = sinf(mAngle);
			f32 idk      = (mTime - (_1C + _20)) / mDuration;
			mGoalScale   = -(idk * idk - 1.0f);
			scale        = rad * sinTheta + 1.0f;
			if (mTime >= mDuration + (_1C + _20)) {
				scale = 1.0f;
				transit(pelt, PELSTATE_Normal, nullptr);
			}
		}
	}
	mTime += frameTime;
	if (scale == 0.0f) {
		scale = 0.01f;
	}
	pelt->mScale = scale;
}

/**
 * @note Address: 0x801A6C70
 * @note Size: 0x34
 */
void PelletScaleAppearState::cleanup(Pellet* pelt) { pelt->setCollisionFlick(true); }

/**
 * @note Address: 0x801A6CA4
 * @note Size: 0x24
 */
void PelletBuryState::init(Pellet* pelt, StateArg*) { pelt->clearClaim(); }

/**
 * @note Address: 0x801A6CC8
 * @note Size: 0x4
 */
void PelletBuryState::exec(Pellet*) { }

/**
 * @note Address: 0x801A6CCC
 * @note Size: 0x4
 */
void PelletBuryState::cleanup(Pellet*) { }

/**
 * @note Address: 0x801A6CD0
 * @note Size: 0x38
 */
void PelletZukanState::init(Pellet* pelt, StateArg*)
{
	pelt->clearClaim();
	mTimer = 0.0f;
}

/**
 * @note Address: 0x801A6D08
 * @note Size: 0x94
 */
void PelletZukanState::exec(Pellet* pelt)
{
	mTimer += sys->mDeltaTime * PI;
	if (mTimer > TAU) {
		mTimer = 0.0f;
	}
	Vector3f pos = pelt->getPosition();
	pelt->mBaseTrMatrix.makeT(pos);
}

/**
 * @note Address: 0x801A6D9C
 * @note Size: 0x4
 */
void PelletZukanState::cleanup(Pellet*) { }

/**
 * @note Address: 0x801A6DA0
 * @note Size: 0x24
 */
void PelletUpState::init(Pellet* pelt, StateArg*) { pelt->clearClaim(); }

/**
 * @note Address: 0x801A6DC4
 * @note Size: 0x4
 */
void PelletUpState::exec(Pellet*) { }

/**
 * @note Address: 0x801A6DC8
 * @note Size: 0x4
 */
void PelletUpState::cleanup(Pellet*) { }

/**
 * @note Address: 0x801A6DCC
 * @note Size: 0xF0
 */
PelletReturnState::PelletReturnState()
    : PelletState(PELSTATE_Return)
{
	mEfx    = nullptr;
	mEfxAct = nullptr;
	if (gameSystem->isVersusMode()) {
		mEfx    = new ::efx::TOrimaLight;
		mEfxAct = new ::efx::TOrimaLightAct;
	}
}

/**
 * @note Address: 0x801A6EBC
 * @note Size: 0x318
 */
void PelletReturnState::init(Pellet* pelt, StateArg* arg)
{
	bool flag                  = false;
	mPathCheckID               = 0;
	PelletReturnStateArg* sarg = static_cast<PelletReturnStateArg*>(arg);
	if (arg) {
		mGoalPos = sarg->mPosition;
		if (initPathfinding(pelt) == 1) {
			flag = true;
		}
	}

	if (!flag) {
		transit(pelt, PELSTATE_Normal, nullptr);
	} else {
		if (mEfx && mEfxAct) {
			mEfx->mNaviType    = 0;
			mEfxAct->mNaviType = 0;
			mEfx->setMtxptr(pelt->mBaseTrMatrix.mMatrix.mtxView);
			mEfxAct->setMtxptr(pelt->mBaseTrMatrix.mMatrix.mtxView);
			mEfx->create(nullptr);
			mEfxAct->create(nullptr);
		}
	}

	mTimer      = 0.0f;
	mPeltYScale = 1.0f;
	mDoEfx      = false;
	mDoFlick    = false;
	pelt->endCapture();
	pelt->endStick();

	Stickers stick(pelt);
	Iterator<Creature> it(&stick);
	CI_LOOP(it)
	{
		Creature* obj = *it;
		obj->endStick();
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x280
 */
void PelletReturnState::flick(Pellet* pelt)
{
	Stickers stick(pelt);
	Iterator<Creature> it(&stick);
	f32 dmg   = 100.0f;
	f32 ang   = FLICK_BACKWARD_ANGLE;
	f32 intes = 0.0f;
	CI_LOOP(it)
	{
		Creature* obj = *it;
		InteractFlick flick(pelt, intes, dmg, ang);
		obj->stimulate(flick);
	}
}

/**
 * @note Address: 0x801A71D4
 * @note Size: 0xD8
 */
void PelletReturnState::exec(Pellet* pelt)
{
	bool end = false;
	switch (mState) {
	case 0:
		int check = execPathfinding(pelt);
		if (check == 2) {
			end = true;
		}
		break;
	case 1:
		check = execMove(pelt);
		if (check == 2) {
			end = true;
		} else if (check == 1) {
			end = true;
		}
		break;
	case 2:
		check = execMoveGoal(pelt);
		if (check == 2) {
			end = true;
		}
		break;
	}

	if (end) {
		transit(pelt, PELSTATE_Normal, nullptr);
	}
}

/**
 * @note Address: 0x801A72AC
 * @note Size: 0x9C
 */
void PelletReturnState::cleanup(Pellet* pelt)
{
	if (mEfx && mEfxAct) {
		mEfx->fade();
		mEfxAct->fade();
	}
	pelt->mScale = 1.0f;
	if (mPathCheckID) {
		testPathfinder->release(mPathCheckID);
		mPathCheckID = 0;
	}
}

/**
 * @note Address: 0x801A7348
 * @note Size: 0x1B4
 */
int PelletReturnState::initPathfinding(Pellet* pelt)
{
	Vector3f pelletPos = pelt->getPosition();
	WPEdgeSearchArg arg(pelletPos);
	if (pelt->inWater()) {
		arg.mInWater = true;
	}

	WayPoint* start;
	if (mapMgr->mRouteMgr->getNearestEdge(arg)) {
		WayPoint* wp = arg.mWp1;
		if (!(wp->isFlag(WPF_Closed))) {
			start = wp;
		} else {
			start = arg.mWp2;
		}
	} else if (mapMgr->mRouteMgr->getNearestEdge(arg)) {
		WayPoint* wp = arg.mWp1;
		if ((wp->isFlag(WPF_Closed))) {
			start = arg.mWp2;
		} else {
			start = wp;
		}
	} else {
		return 2; // exit state
	}

	if (mPathCheckID) {
		testPathfinder->release(mPathCheckID);
		mPathCheckID = 0;
	}

	WPSearchArg arg2(mGoalPos, nullptr, false, 10.0f);
	WayPoint* end = mapMgr->mRouteMgr->getNearestWayPoint(arg2);
	if (!end) {
		return 2; // exit state

	} else {
		PathfindRequest req(start->mIndex, end->mIndex, 1);
		mPathCheckID = testPathfinder->start(req);
		mState       = 0;
		return 1;
	}
}

/**
 * @note Address: 0x801A74FC
 * @note Size: 0x90
 */
u32 PelletReturnState::execPathfinding(Pellet* pelt)
{
	if (mPathCheckID == 0) {
		return 2;
	}

	int state = testPathfinder->check(mPathCheckID);
	switch (state) {
	case 0:
		mPathNodes    = testPathfinder->makepath(mPathCheckID, &mPathNode);
		mPathNodePrev = mPathNode;
		mState        = 1;
		break;
	case 1:
		return 2;
	}
	return 0;
}

/**
 * @note Address: 0x801A758C
 * @note Size: 0x858
 */
u32 PelletReturnState::execMove(Pellet* pelt)
{
	WayPoint* currWP = mapMgr->mRouteMgr->getWayPoint(mPathNode->mWpIndex);
	Vector3f wpPos   = currWP->mPosition;
	// this should be getFlatDirectionFromTo but it wont cooperate
	Vector3f sep = wpPos - pelt->getPosition();
	sep.y        = 0.0f;
	f32 dist     = sep.normalise();

	if (dist < 15.0f) {
		mPathNode = mPathNode->mNext;
		if (!mPathNode) {
			transit(pelt, PELSTATE_Normal, nullptr);
			return 1;
		}
	}

	f32 yoffs;
	f32 time      = mTimer;
	f32 frameTime = sys->getDeltaTime();

	if (time < 0.1f) {
		yoffs            = 0.0f;
		f32 scale        = (time / 0.1f) * PI * 0.5f;
		f32 sinTheta     = sinf(scale);
		const f32 factor = 0.3f; // not sure what the plan is with this load
		// not quite right either - multiplication needs to be in the other order
		// might be similar to the regswap in that one enemyBase function?
		// What is the above note referring to in enemyBase? -Epoch
		mPeltYScale = 1.0f - (sinTheta *= 0.3f);

	} else if (time < 0.9f) {
		if (!mDoFlick) {
			pelt->mSoundMgr->startSound(PSSE_EN_FROG_JUMP, 0);
			mDoFlick = true;
			flick(pelt);
		}

		f32 angle     = PI * ((mTimer - 0.1f) / 0.9f);
		f32 sinTheta1 = sinf(angle);
		yoffs         = (sinTheta1 *= 50.0f);
		mPeltYScale   = 0.50000006f * sinf(angle) + 0.7f;
	} else {
		if (!mDoEfx && !pelt->inWater()) {
			pelt->mSoundMgr->startSound(PSSE_EN_FROG_LAND, 0);
			Vector3f pos = pelt->getPosition();
			pos.y -= pelt->getCylinderHeight() * 0.5f;
			::efx::Arg arg(pos);
			::efx::TEnemyDownSmoke efx(1.0f);
			efx.mScale = 0.5f;
			efx.create(&arg);
		}
		mDoEfx       = true;
		f32 scale    = (mTimer - 0.9f) / 0.100000025f * PI * 0.5f;
		f32 sinTheta = sinf(scale);
		// again, regswap
		mPeltYScale = (sinTheta *= 0.3f) + 0.7f;
		yoffs       = 0.0f;
	}

	mTimer += frameTime;
	if (mTimer > 1.0f) {
		mTimer      = 0.0f;
		mPeltYScale = 1.0f;
		mDoEfx      = 0;
		mDoFlick    = 0;
	}
	Vector3f velocity  = sep * 200.0f;
	Vector3f velocity2 = pelt->getVelocity();
	velocity           = velocity2 + (velocity - velocity2) * 0.2f;

	Vector3f pos = pelt->getPosition();
	f32 y        = pelt->getCylinderHeight() * 0.5f;
	pos.y        = yoffs + (mapMgr->getMinY(pos) + y);
	pelt->setPosition(pos, false);
	pelt->mScale = Vector3f(1.0f, mPeltYScale, 1.0f);
	pelt->setVelocity(velocity);
	return 0;

	/*
	stwu     r1, -0x150(r1)
	mflr     r0
	stw      r0, 0x154(r1)
	stfd     f31, 0x140(r1)
	psq_st   f31, 328(r1), 0, qr0
	stfd     f30, 0x130(r1)
	psq_st   f30, 312(r1), 0, qr0
	stfd     f29, 0x120(r1)
	psq_st   f29, 296(r1), 0, qr0
	stfd     f28, 0x110(r1)
	psq_st   f28, 280(r1), 0, qr0
	stfd     f27, 0x100(r1)
	psq_st   f27, 264(r1), 0, qr0
	stfd     f26, 0xf0(r1)
	psq_st   f26, 248(r1), 0, qr0
	stfd     f25, 0xe0(r1)
	psq_st   f25, 232(r1), 0, qr0
	stw      r31, 0xdc(r1)
	stw      r30, 0xd8(r1)
	stw      r29, 0xd4(r1)
	stw      r28, 0xd0(r1)
	lwz      r6, mapMgr__4Game@sda21(r13)
	mr       r30, r3
	lwz      r5, 0x2c(r3)
	mr       r31, r4
	lwz      r3, 8(r6)
	lha      r4, 0x20(r5)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	mr       r4, r31
	lfs      f25, 0x4c(r3)
	lwz      r12, 0(r31)
	lfs      f26, 0x54(r3)
	addi     r3, r1, 0x3c
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0x44(r1)
	lfs      f0, 0x3c(r1)
	fsubs    f28, f26, f1
	lfs      f29, lbl_80519188@sda21(r2)
	fsubs    f30, f25, f0
	fmuls    f1, f28, f28
	fmadds   f0, f30, f30, f29
	fadds    f1, f1, f0
	fcmpo    cr0, f1, f29
	ble      lbl_801A7660
	ble      lbl_801A7664
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_801A7664

lbl_801A7660:
	fmr      f1, f29

lbl_801A7664:
	lfs      f0, lbl_80519188@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_801A7688
	lfs      f0, lbl_80519190@sda21(r2)
	fdivs    f0, f0, f1
	fmuls    f30, f30, f0
	fmuls    f29, f29, f0
	fmuls    f28, f28, f0
	b        lbl_801A768C

lbl_801A7688:
	fmr      f1, f0

lbl_801A768C:
	lfs      f0, lbl_8051921C@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_801A76D8
	lwz      r3, 0x2c(r30)
	lwz      r0, 0xc(r3)
	stw      r0, 0x2c(r30)
	lwz      r0, 0x2c(r30)
	cmplwi   r0, 0
	bne      lbl_801A76D8
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	li       r3, 1
	b        lbl_801A7D8C

lbl_801A76D8:
	lfs      f1, 0x10(r30)
	lfs      f0, lbl_80519200@sda21(r2)
	lwz      r3, sys@sda21(r13)
	fcmpo    cr0, f1, f0
	lfs      f31, 0x54(r3)
	bge      lbl_801A7774
	fdivs    f0, f1, f0
	lfs      f1, lbl_8051920C@sda21(r2)
	lfs      f2, lbl_80519220@sda21(r2)
	lfs      f27, lbl_80519188@sda21(r2)
	fmuls    f0, f1, f0
	fmuls    f1, f2, f0
	fcmpo    cr0, f1, f27
	bge      lbl_801A773C
	lfs      f0, lbl_805191AC@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 0xb0(r1)
	lwz      r0, 0xb4(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0
	fneg     f2, f0
	b        lbl_801A7760

lbl_801A773C:
	lfs      f0, lbl_805191B0@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 0xb8(r1)
	lwz      r0, 0xbc(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f2, r3, r0

lbl_801A7760:
	lfs      f1, lbl_805191DC@sda21(r2)
	lfs      f0, lbl_80519190@sda21(r2)
	fnmsubs  f0, f1, f2, f0
	stfs     f0, 0x14(r30)
	b        lbl_801A7C34

lbl_801A7774:
	lfs      f0, lbl_80519224@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_801A7ABC
	lbz      r0, 0x19(r30)
	cmplwi   r0, 0
	bne      lbl_801A79CC
	lwz      r3, 0x330(r31)
	li       r4, 0x5826
	li       r5, 0
	lwz      r12, 0x28(r3)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	li       r0, 1
	mr       r4, r31
	stb      r0, 0x19(r30)
	addi     r3, r1, 0x80
	bl       __ct__Q24Game8StickersFPQ24Game8Creature
	li       r0, 0
	lis      r3, "__vt__26Iterator<Q24Game8Creature>"@ha
	addi     r4, r3, "__vt__26Iterator<Q24Game8Creature>"@l
	addi     r3, r1, 0x80
	cmplwi   r0, 0
	stw      r4, 8(r1)
	stw      r0, 0x14(r1)
	stw      r0, 0xc(r1)
	stw      r3, 0x10(r1)
	bne      lbl_801A77FC
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801A7884

lbl_801A77FC:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801A7868

lbl_801A7814:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801A7884
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_801A7868:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801A7814

lbl_801A7884:
	lis      r4, __vt__Q24Game11Interaction@ha
	lis      r3, __vt__Q24Game13InteractFlick@ha
	lfs      f25, lbl_80519210@sda21(r2)
	addi     r28, r4, __vt__Q24Game11Interaction@l
	lfs      f26, lbl_80519188@sda21(r2)
	addi     r29, r3, __vt__Q24Game13InteractFlick@l
	lfs      f27, lbl_80519214@sda21(r2)
	b        lbl_801A79A0

lbl_801A78A4:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	stw      r28, 0x9c(r1)
	addi     r4, r1, 0x9c
	stw      r31, 0xa0(r1)
	stw      r29, 0x9c(r1)
	stfs     f25, 0xa4(r1)
	stfs     f26, 0xa8(r1)
	stfs     f27, 0xac(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1a4(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	cmplwi   r0, 0
	bne      lbl_801A7910
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801A79A0

lbl_801A7910:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801A7984

lbl_801A7930:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801A79A0
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_801A7984:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801A7930

lbl_801A79A0:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r1)
	cmplw    r4, r3
	bne      lbl_801A78A4
	addi     r3, r1, 0x80
	li       r4, -1
	bl       __dt__Q24Game8StickersFv

lbl_801A79CC:
	lfs      f2, 0x10(r30)
	lfs      f0, lbl_80519200@sda21(r2)
	lfs      f1, lbl_80519224@sda21(r2)
	fsubs    f2, f2, f0
	lfs      f3, lbl_8051920C@sda21(r2)
	lfs      f0, lbl_80519188@sda21(r2)
	fdivs    f1, f2, f1
	fmuls    f3, f3, f1
	fcmpo    cr0, f3, f0
	bge      lbl_801A7A20
	lfs      f0, lbl_805191AC@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f3, f0
	fctiwz   f0, f0
	stfd     f0, 0xb8(r1)
	lwz      r0, 0xbc(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0
	fneg     f2, f0
	b        lbl_801A7A44

lbl_801A7A20:
	lfs      f0, lbl_805191B0@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f3, f0
	fctiwz   f0, f0
	stfd     f0, 0xb0(r1)
	lwz      r0, 0xb4(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f2, r3, r0

lbl_801A7A44:
	lfs      f1, lbl_80519228@sda21(r2)
	lfs      f0, lbl_80519188@sda21(r2)
	fmuls    f27, f1, f2
	lfs      f2, lbl_8051922C@sda21(r2)
	fcmpo    cr0, f3, f0
	bge      lbl_801A7A88
	lfs      f0, lbl_805191AC@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f3, f0
	fctiwz   f0, f0
	stfd     f0, 0xc0(r1)
	lwz      r0, 0xc4(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0
	fneg     f1, f0
	b        lbl_801A7AAC

lbl_801A7A88:
	lfs      f0, lbl_805191B0@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f3, f0
	fctiwz   f0, f0
	stfd     f0, 0xc8(r1)
	lwz      r0, 0xcc(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f1, r3, r0

lbl_801A7AAC:
	lfs      f0, lbl_805191EC@sda21(r2)
	fmadds   f0, f2, f1, f0
	stfs     f0, 0x14(r30)
	b        lbl_801A7C34

lbl_801A7ABC:
	lbz      r0, 0x18(r30)
	cmplwi   r0, 0
	bne      lbl_801A7B98
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x8c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801A7B98
	lwz      r3, 0x330(r31)
	li       r4, 0x5827
	li       r5, 0
	lwz      r12, 0x28(r3)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	mr       r4, r31
	addi     r3, r1, 0x30
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f25, 0x30(r1)
	mr       r3, r31
	lfs      f26, 0x34(r1)
	lfs      f27, 0x38(r1)
	bl       getCylinderHeight__Q24Game6PelletFv
	lis      r3, __vt__Q23efx5TBase@ha
	lfs      f2, lbl_80519220@sda21(r2)
	addi     r0, r3, __vt__Q23efx5TBase@l
	lfs      f0, lbl_80519190@sda21(r2)
	lis      r3, __vt__Q23efx8TSimple1@ha
	stw      r0, 0x60(r1)
	fnmsubs  f26, f2, f1, f26
	addi     r0, r3, __vt__Q23efx8TSimple1@l
	stfs     f0, 0x6c(r1)
	lis      r4, __vt__Q23efx3Arg@ha
	lis      r3, __vt__Q23efx15TEnemyDownSmoke@ha
	li       r6, 0x53
	addi     r7, r4, __vt__Q23efx3Arg@l
	li       r5, 0
	stw      r0, 0x60(r1)
	addi     r0, r3, __vt__Q23efx15TEnemyDownSmoke@l
	addi     r3, r1, 0x60
	addi     r4, r1, 0x70
	stw      r7, 0x70(r1)
	stfs     f25, 0x74(r1)
	stfs     f26, 0x78(r1)
	stfs     f27, 0x7c(r1)
	sth      r6, 0x64(r1)
	stw      r5, 0x68(r1)
	stw      r0, 0x60(r1)
	stfs     f2, 0x6c(r1)
	bl       create__Q23efx15TEnemyDownSmokeFPQ23efx3Arg

lbl_801A7B98:
	li       r0, 1
	lfs      f0, lbl_80519224@sda21(r2)
	stb      r0, 0x18(r30)
	lfs      f1, lbl_80519230@sda21(r2)
	lfs      f2, 0x10(r30)
	lfs      f3, lbl_8051920C@sda21(r2)
	fsubs    f2, f2, f0
	lfs      f4, lbl_80519220@sda21(r2)
	lfs      f0, lbl_80519188@sda21(r2)
	fdivs    f1, f2, f1
	fmuls    f1, f3, f1
	fmuls    f1, f4, f1
	fcmpo    cr0, f1, f0
	bge      lbl_801A7BFC
	lfs      f0, lbl_805191AC@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 0xc8(r1)
	lwz      r0, 0xcc(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0
	fneg     f2, f0
	b        lbl_801A7C20

lbl_801A7BFC:
	lfs      f0, lbl_805191B0@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 0xc0(r1)
	lwz      r0, 0xc4(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f2, r3, r0

lbl_801A7C20:
	lfs      f1, lbl_805191DC@sda21(r2)
	lfs      f0, lbl_805191EC@sda21(r2)
	lfs      f27, lbl_80519188@sda21(r2)
	fmadds   f0, f1, f2, f0
	stfs     f0, 0x14(r30)

lbl_801A7C34:
	lfs      f0, 0x10(r30)
	lfs      f1, lbl_80519190@sda21(r2)
	fadds    f0, f0, f31
	stfs     f0, 0x10(r30)
	lfs      f0, 0x10(r30)
	fcmpo    cr0, f0, f1
	ble      lbl_801A7C68
	lfs      f0, lbl_80519188@sda21(r2)
	li       r0, 0
	stfs     f0, 0x10(r30)
	stfs     f1, 0x14(r30)
	stb      r0, 0x18(r30)
	stb      r0, 0x19(r30)

lbl_801A7C68:
	lfs      f0, lbl_80519234@sda21(r2)
	mr       r4, r31
	addi     r3, r1, 0x24
	fmuls    f2, f30, f0
	fmuls    f1, f29, f0
	fmuls    f0, f28, f0
	stfs     f2, 0x54(r1)
	stfs     f1, 0x58(r1)
	stfs     f0, 0x5c(r1)
	lwz      r12, 0(r31)
	lwz      r12, 0x6c(r12)
	mtctr    r12
	bctrl
	lfs      f4, 0x28(r1)
	mr       r4, r31
	lfs      f0, 0x58(r1)
	addi     r3, r1, 0x18
	lfs      f5, 0x2c(r1)
	lfs      f1, 0x5c(r1)
	fsubs    f0, f0, f4
	lfs      f2, lbl_805191F8@sda21(r2)
	fsubs    f1, f1, f5
	lfs      f3, 0x54(r1)
	lfs      f6, 0x24(r1)
	fmuls    f0, f0, f2
	fsubs    f3, f3, f6
	fmuls    f1, f1, f2
	fadds    f4, f4, f0
	fmuls    f0, f3, f2
	fadds    f1, f5, f1
	stfs     f4, 0x58(r1)
	fadds    f0, f6, f0
	stfs     f1, 0x5c(r1)
	stfs     f0, 0x54(r1)
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0x18(r1)
	mr       r3, r31
	lfs      f1, 0x1c(r1)
	lfs      f0, 0x20(r1)
	stfs     f2, 0x48(r1)
	stfs     f1, 0x4c(r1)
	stfs     f0, 0x50(r1)
	bl       getCylinderHeight__Q24Game6PelletFv
	lwz      r3, mapMgr__4Game@sda21(r13)
	addi     r4, r1, 0x48
	lfs      f0, lbl_80519220@sda21(r2)
	lwz      r12, 4(r3)
	fmuls    f25, f0, f1
	lwz      r12, 0x28(r12)
	mtctr    r12
	bctrl
	fadds    f0, f25, f1
	mr       r3, r31
	addi     r4, r1, 0x48
	li       r5, 0
	fadds    f0, f27, f0
	stfs     f0, 0x4c(r1)
	bl       "setPosition__Q24Game8CreatureFR10Vector3<f>b"
	lfs      f1, 0x14(r30)
	mr       r3, r31
	lfs      f0, lbl_80519190@sda21(r2)
	addi     r4, r1, 0x54
	stfs     f0, 0x168(r31)
	stfs     f1, 0x16c(r31)
	stfs     f0, 0x170(r31)
	lwz      r12, 0(r31)
	lwz      r12, 0x68(r12)
	mtctr    r12
	bctrl
	li       r3, 0

lbl_801A7D8C:
	psq_l    f31, 328(r1), 0, qr0
	lfd      f31, 0x140(r1)
	psq_l    f30, 312(r1), 0, qr0
	lfd      f30, 0x130(r1)
	psq_l    f29, 296(r1), 0, qr0
	lfd      f29, 0x120(r1)
	psq_l    f28, 280(r1), 0, qr0
	lfd      f28, 0x110(r1)
	psq_l    f27, 264(r1), 0, qr0
	lfd      f27, 0x100(r1)
	psq_l    f26, 248(r1), 0, qr0
	lfd      f26, 0xf0(r1)
	psq_l    f25, 232(r1), 0, qr0
	lfd      f25, 0xe0(r1)
	lwz      r31, 0xdc(r1)
	lwz      r30, 0xd8(r1)
	lwz      r29, 0xd4(r1)
	lwz      r0, 0x154(r1)
	lwz      r28, 0xd0(r1)
	mtlr     r0
	addi     r1, r1, 0x150
	blr
	*/
}

/**
 * @note Address: 0x801A7DE4
 * @note Size: 0x8
 */
u32 PelletReturnState::execMoveGoal(Pellet*) { return 0; }

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
void PelletReturnState::getWayPont(int)
{
	// UNUSED FUNCTION
}

} // namespace Game
