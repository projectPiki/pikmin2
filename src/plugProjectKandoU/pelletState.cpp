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
void PelletNormalState::init(Pellet*, StateArg*)
{
}

/**
 * @note Address: 0x801A45C0
 * @note Size: 0x4
 */
void PelletNormalState::exec(Pellet*)
{
}

/**
 * @note Address: 0x801A45C4
 * @note Size: 0x4
 */
void PelletNormalState::cleanup(Pellet*)
{
}

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
void PelletGoalWaitState::cleanup(Pellet*)
{
}

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

	// mark the pellet as dead, this is what makes the pikmin let go of the pellet
	pellet->setAlive(false);

	bool flag                = false;
	PelletGoalStateArg* sarg = static_cast<PelletGoalStateArg*>(arg);
	mOnyon                   = sarg->mCreature;
	// in story or challenge mode, check if this pellet should trigger any cutscenes
	if (gameSystem->isStoryMode() || gameSystem->isChallengeMode()) {
		flag = checkMovie(pellet);

	} else if (gameSystem->isVersusMode()) {
		// extra checks for versus mode marble collection, since checkMovie doesn't handle this
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
			// yellow marbles specifically make sure you're carrying to an onion, for some reason
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

	// if a cutscene was triggered, mark the ship/onion and pellet itself for the cutscene
	if (flag) {
		mOnyon->movie_begin(false);
		pellet->movie_begin(false);
	}

	Vector3f sep = mOnyon->getSuckPos() - pellet->getPosition();
	mDistance    = sep.length();
	_14          = 0.0f;
	mSuckDelay   = 1.5f;

	// cancel vertical velocity
	Vector3f vel = pellet->getVelocity();
	vel.y        = 0.0f;
	pellet->setVelocity(vel);

	// reset pellet scale (mostly only matters for some enemies)
	mScale = 1.0f;
	if (pellet->mPelletView) {
		mScale = pellet->mPelletView->viewGetBaseScale();
	}

	// the onion/ship should make extra collection effects
	if (((int)mOnyon->mObjectTypeID == OBJTYPE_Onyon || (int)mOnyon->mObjectTypeID == OBJTYPE_Ufo) && !flag) {
		static_cast<Onyon*>(mOnyon)->efxSuikomi();
	}

	mInDemo     = flag;
	mDidSuikomi = false;
	if (!mInDemo) {
		// if the pellet isnt a cutscene item, clear the active cutscene status of anything carrying the pellet
		Iterator<Piki> it(pikiMgr);
		CI_LOOP(it)
		{
			Piki* piki = *it;
			piki->movie_end(false);
		}

		// this probably only exists for breadbugs, but it cancels the cutscene status of every enemy
		GeneralMgrIterator<EnemyBase> it2(generalEnemyMgr);
		CI_LOOP(it2)
		{
			EnemyBase* enemy = it2.getObject();
			enemy->movie_end(false);
		}
	}

	// stop this pellet from creating the music treasure mix
	pellet->sound_otakaraEventFinish();

	// make the onion register receiving a pellet
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
	// number pellets dont check) This leads to a bug where the first corpse cutscene wont play for enemies you've already collected at an
	// onion above ground
	if (gameSystem->isStoryMode()) {
		isGot = playData->firstCarryPellet(pelt);
	}
	// For berries and number pellets, always count as a new collect (checking if the cutscene was already seen is done later)
	if (pelt->getKind() == PelletType::Berry) {
		isGot = true;
	}
	if (pelt->getKind() == PelletType::Number) {
		isGot = true;
	}

	// unlock challenge mode if the treasure is The Key
	if (!strcmp(pelt->mConfig->mParams.mName.mData, "key")) {
		if (!gameSystem->isChallengeMode()) {
			sys->getPlayCommonData()->enableChallengeGame();
			sys->mPlayData->mDoSaveOptions = true;
		}
	} else if (gameSystem->isChallengeMode()) {
		// When you're in challenge mode, make sure any other treasure nothing here
		return false;
	}

	// if the treasure is the King of Bugs then register Louie as rescued for the Piklopedia
	if (!strcmp(pelt->mConfig->mParams.mName.mData, "loozy")) {
		sys->getPlayCommonData()->enableLouieRescue();
		sys->mPlayData->mDoSaveOptions = true;
		playData->setStoryFlag(STORY_LouieRescued);
	}

	bool draw2d = false;
	bool doPlay = false;
	if (isGot) {
		Onyon* onyon = nullptr;
		// make carry target only register if its the ship or an onion
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
						// a whole lot of redundant checks in here
						playData->getDopeFruitCount(type);
						playData->isDemoFlag(DEMO_First_Spicy_Berry);
						playData->isDemoFlag(DEMO_First_Spicy_Spray_Made);
						int dope0 = playData->getDopeFruitCount(type);
						playData->addDopeFruit(type);
						playData->getDopeFruitCount(SPRAY_TYPE_SPICY);
						playData->getDopeFruitCount(SPRAY_TYPE_BITTER);
						// play the first berry cutscene if it hasnt been seen
						if (!playData->isDemoFlag(DEMO_First_Spicy_Berry)) {
							playData->setDemoFlag(DEMO_First_Spicy_Berry);
							gameSystem->mSection->setDraw2DCreature(pelt);
							BaseGameSection* section = gameSystem->mSection;
							MoviePlayArg arg("s11_dope_first_r", const_cast<char*>(section->getCurrentCourseInfo()->mName),
							                 section->mMovieFinishCallback, 0);
							moviePlayer->play(arg);
							doPlay = true;

						} else if (!playData->isDemoFlag(DEMO_First_Spicy_Spray_Made)) {
							// if enough berries are collected to make a spray, play the spray cutscene
							playData->getDopeFruitCount(type);
							if (dope0 + 1 >= _aiConstants->mDopeCount.mData) {
								playData->setDemoFlag(DEMO_First_Spicy_Spray_Made);
								// spawn in a nectar drop specifically for the cutscene to show to the player
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
						// a whole lot of redundant checks in here
						playData->getDopeFruitCount(type);
						playData->isDemoFlag(DEMO_First_Bitter_Berry);
						playData->isDemoFlag(DEMO_First_Bitter_Spray_Made);
						int dope0 = playData->getDopeFruitCount(type);
						playData->addDopeFruit(type);
						playData->getDopeFruitCount(SPRAY_TYPE_SPICY);
						playData->getDopeFruitCount(SPRAY_TYPE_BITTER);
						// play the first berry cutscene if it hasnt been seen
						if (!playData->isDemoFlag(DEMO_First_Bitter_Berry)) {
							playData->setDemoFlag(DEMO_First_Bitter_Berry);
							gameSystem->mSection->setDraw2DCreature(pelt);
							BaseGameSection* section = gameSystem->mSection;
							MoviePlayArg arg("s11_dope_first_b", const_cast<char*>(section->getCurrentCourseInfo()->mName),
							                 section->mMovieFinishCallback, 0);
							moviePlayer->play(arg);
							doPlay = true;
						} else if (!playData->isDemoFlag(DEMO_First_Bitter_Spray_Made)) {
							// if enough berries are collected to make a spray, play the spray cutscene
							playData->getDopeFruitCount(type);
							if (dope0 + 1 >= _aiConstants->mDopeCount.mData) {
								playData->setDemoFlag(DEMO_First_Bitter_Spray_Made);
								// spawn in a nectar drop specifically for the cutscene to show to the player
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
					// Treasure carried to the ship
					// since this only runs for the ship and not the pod, the game assumes you're above ground
					gameSystem->mSection->setDraw2DCreature(pelt);
					BaseGameSection* section = gameSystem->mSection;
					MoviePlayArg moviearg("s10_suck_treasure", const_cast<char*>(section->getCurrentCourseInfo()->mName),
					                      section->mMovieFinishCallback, 0);
					moviearg.mPelletName = pelt->mConfig->mParams.mName.mData;
					moviePlayer->play(moviearg);
					doPlay = true;

				} else if (pelt->getKind() == PelletType::Upgrade) {
					// Upgrade carried to the ship (this only appears with the globe in AW normally)
					gameSystem->mSection->setDraw2DCreature(pelt);
					BaseGameSection* section = gameSystem->mSection;
					MoviePlayArg moviearg("s17_suck_equipment", const_cast<char*>(section->getCurrentCourseInfo()->mName),
					                      section->mMovieFinishCallback, 0);
					moviearg.mPelletName = pelt->mConfig->mParams.mName.mData;
					moviearg.mStreamID   = P2_STREAM_SOUND_ID(PSSTR_EQUIP_GET);
					// The Prototype Detector, five-man napsack and both globes use a different theme, for some reason
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
				// The game assumes you're in a cave for this
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
				// Again the game assumes you're in a cave for this
				gameSystem->mSection->setDraw2DCreature(pelt);
				BaseGameSection* section = gameSystem->mSection;
				MoviePlayArg moviearg("s22_cv_suck_equipment", nullptr, section->mMovieFinishCallback, 0);
				moviearg.mPelletName    = pelt->mConfig->mParams.mName.mData;
				moviearg.mDelegateStart = section->mMovieStartCallback;
				moviearg.mOrigin        = mOnyon->getPosition();
				moviearg.mAngle         = mOnyon->getFaceDir();
				moviearg.mStreamID      = P2_STREAM_SOUND_ID(PSSTR_EQUIP_GET);
				// The Prototype Detector, five-man napsack and both globes use a different theme, for some reason
				if (pelt->mConfig->mParams.mIndex >= 8) {
					moviearg.mStreamID = P2_STREAM_SOUND_ID(PSSTR_POWERUP_GET);
				}
				moviePlayer->play(moviearg);
				doPlay = true;

			} else if (pelt->getKind() == PelletType::Carcass && pelt->mPelletFlag != Pellet::FLAG_NAVI_NAPSACK
			           && !playData->isDemoFlag(DEMO_First_Corpse_In_Cave)) {
				// first enemy corpse collected in a cave
				// Due to a bug, this can only play if the enemy in question wasn't already collected above ground
				// napsack captain is considered an enemy corpse so that is checked for
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
			// first number pellet carried to an onion
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
		// mark the pellet to be active in the current cutscene
		if (pelt->getKind() == PelletType::Carcass) {
			pelt->mPelletView->mCreature->movie_begin(false);
		} else if (pelt->getKind() == PelletType::Number) {
			pelt->movie_begin(false);
		} else {
			pelt2 = pelt;
			// unused debug prints probably
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

	Vector3f suckPos = mOnyon->getSuckPos();
	Vector3f scaledSep;
	scaledSep.sub(suckPos, mCurrPos);
	Vector3f test = mCurrPos + scaledSep * mSuckTime;
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
	sinTheta     = 0.03f * sinTheta;
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

	// stripped debug stuff
	if (Radar::mgr) {
		Radar::Mgr::getNumOtakaraItems();
		Radar::Mgr::getNumOtakaraItems();
		bool check = pelt->getKind() == PelletType::Treasure;
		if (!check) {
			pelt->getKind();
		}
	}

	// check if all treasures in the area have been collected, to make the music/ background sfx change
	if (!gameSystem->isVersusMode() && (pelt->getKind() == PelletType::Treasure || pelt->getKind() == PelletType::Upgrade)
	    && Radar::Mgr::getNumOtakaraItems() <= 1) {
		if (gameSystem->mIsInCave) {
			PSSystem::SceneMgr* mgr = PSSystem::getSceneMgr();
			PSSystem::validateSceneMgr(mgr);
			PSM::Scene_Cave* scene = static_cast<PSM::Scene_Cave*>(mgr->getChildScene());
			PSSystem::checkGameScene(scene);
			scene->stopPollutionSe();
			// when the key is collected in challenge mode, change the music and background sfx
			if (gameSystem->isChallengeMode()) {
				if (strcmp(pelt->mConfig->mParams.mName.mData, "key")) {
					PSSystem::SceneMgr* mgr = PSSystem::getSceneMgr();
					PSSystem::validateSceneMgr(mgr);
					PSM::Scene_Game* scene = static_cast<PSM::Scene_Game*>(mgr->getChildScene());
					PSSystem::checkGameScene(scene);
					if (scene->isCave()) {
						static_cast<PSM::Scene_Cave*>(scene)->startPollutUpSe();
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
		// if the pellet isn't a cutscene item, always kill it on collect

		// play an extra sound when a napsack captain hits the onion
		if (!strcmp("orima", pelt->mConfig->mParams.mName.mData)) {
			pelt->mSoundMgr->startSound(PSSE_EV_ONYON_BOUND_PLAYER, 0);
		}
		pelt->kill(nullptr);
	} else {
		// if the pellet is a cutscene item, only kill it if it is an enemy carcass or number pellet, otherwise it gets killed later
		if (pelt->getKind() == PelletType::Carcass || pelt->getKind() == PelletType::Number) {
			pelt->kill(nullptr);
		} else if (pelt->getKind() == PelletType::Upgrade || pelt->getKind() == PelletType::Treasure) {
			// reset carry animation for treasures
			pelt->mAnimSpeed = sys->mDeltaTime * 30.0f;
			pelt->mCarryAnim.setFrameByKeyType(0);
		}
	}
	if (shadowMgr) {
		shadowMgr->delShadow(pelt);
	}
	transit(pelt, PELSTATE_Normal, nullptr);
}

/**
 * @note Address: 0x801A65F8
 * @note Size: 0x4
 */
void PelletGoalState::cleanup(Pellet*)
{
}

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
			// effects and sounds for spiderwort berries
			// the game assumes only the berries will use this state
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
void PelletAppearState::cleanup(Pellet*)
{
}

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
			// carry-over from PelletAppearState, does nothing here
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
void PelletScaleAppearState::cleanup(Pellet* pelt)
{
	pelt->setCollisionFlick(true);
}

/**
 * @note Address: 0x801A6CA4
 * @note Size: 0x24
 */
void PelletBuryState::init(Pellet* pelt, StateArg*)
{
	pelt->clearClaim();
}

/**
 * @note Address: 0x801A6CC8
 * @note Size: 0x4
 */
void PelletBuryState::exec(Pellet*)
{
}

/**
 * @note Address: 0x801A6CCC
 * @note Size: 0x4
 */
void PelletBuryState::cleanup(Pellet*)
{
}

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
void PelletZukanState::cleanup(Pellet*)
{
}

/**
 * @note Address: 0x801A6DA0
 * @note Size: 0x24
 */
void PelletUpState::init(Pellet* pelt, StateArg*)
{
	pelt->clearClaim();
}

/**
 * @note Address: 0x801A6DC4
 * @note Size: 0x4
 */
void PelletUpState::exec(Pellet*)
{
}

/**
 * @note Address: 0x801A6DC8
 * @note Size: 0x4
 */
void PelletUpState::cleanup(Pellet*)
{
}

/**
 * @note Address: 0x801A6DCC
 * @note Size: 0xF0
 */
PelletReturnState::PelletReturnState()
    : PelletState(PELSTATE_Return)
{
	// Marble return in 2-Player battle
	mEfx    = nullptr;
	mEfxAct = nullptr;
	// re-uses the captain beacon effects as a generic red/blue colored light, very clever
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
	f32 dmg   = 0.0f;
	f32 ang   = FLICK_BACKWARD_ANGLE;
	f32 intes = 100.0f;
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
		yoffs        = 0.0f;
		f32 scale    = (time / 0.1f) * PI * 0.5f;
		f32 sinTheta = sinf(scale);
		frameTime    = frameTime; // mad about it
		mPeltYScale  = 1.0f - 0.3f * sinTheta;

	} else if (time < 0.9f) {
		if (!mDoFlick) {
			pelt->mSoundMgr->startSound(PSSE_EN_FROG_JUMP, 0);
			mDoFlick = true;
			flick(pelt);
		}

		f32 angle     = PI * ((mTimer - 0.1f) / 0.9f);
		f32 sinTheta1 = sinf(angle);
		frameTime     = frameTime; // still mad about it
		yoffs         = 50.0f * sinTheta1;
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
		yoffs        = 0.0f;
		mPeltYScale  = 0.3f * sinTheta + 0.7f;
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
	Vector3f velocityDelta;
	velocityDelta.sub(velocity, velocity2);
	velocity = velocity2 + velocityDelta * 0.2f;

	Vector3f pos = pelt->getPosition();
	f32 y        = pelt->getCylinderHeight() * 0.5f;
	pos.y        = yoffs + (mapMgr->getMinY(pos) + y);
	pelt->setPosition(pos, false);
	pelt->mScale = Vector3f(1.0f, mPeltYScale, 1.0f);
	pelt->setVelocity(velocity);
	return 0;
}

/**
 * @note Address: 0x801A7DE4
 * @note Size: 0x8
 */
u32 PelletReturnState::execMoveGoal(Pellet*)
{
	return 0;
}

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
void PelletReturnState::getWayPont(int)
{
	// UNUSED FUNCTION
}

} // namespace Game
