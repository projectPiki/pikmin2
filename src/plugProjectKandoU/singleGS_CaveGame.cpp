#include "Game/Entities/BlackMan.h"
#include "Game/GameSystem.h"
#include "Game/Entities/ItemBigFountain.h"
#include "Game/Entities/ItemHole.h"
#include "Game/MapMgr.h"
#include "Game/MoviePlayer.h"
#include "Game/Navi.h"
#include "Game/mapParts.h"
#include "Game/SingleGame.h"
#include "PSM/Global.h"
#include "Screen/Game2DMgr.h"
#include "og/Screen/DispMember.h"
#include "Game/Entities/ItemOnyon.h"
#include "Game/PikiMgr.h"
#include "PikiAI.h"
#include "Game/Cave/RandMapMgr.h"
#include "Game/DeathMgr.h"
#include "Radar.h"
#include "TParticle2dMgr.h"
#include "utilityU.h"
#include "Game/PikiState.h"
#include "Dolphin/rand.h"
#include "Game/Entities/PelletOtakara.h"
#include "Game/Entities/PelletItem.h"
#include "PSSystem/PSGame.h"
#include "PSM/Scene.h"
#include "PSSystem/PSMainSide_Scene.h"
#include "Game/Entities/ItemPikihead.h"
#include "nans.h"

static const u32 padding[]    = { 0, 0, 0 };
static const char className[] = "SingleGS_Game";

namespace Game {
namespace SingleGame {

/*
 * --INFO--
 * Address:	80217760
 * Size:	000304
 */
void CaveState::init(SingleGameSection* game, StateArg* arg)
{
	deathMgr->mSoundDeathCount = 0;
	moviePlayer->reset();
	mLosePellets = false;
	mDrawSave    = false;
	game->setupCaveGames();
	game->_194 = false;
	sys->heapStatusDump(true);
	gameSystem->mTimeMgr->setFlag(TIMEFLAG_Stopped);
	gameSystem->setFlag(GAMESYS_IsGameWorldActive);
	Screen::gGame2DMgr->mScreenMgr->mInCave = true;
	gameSystem->mIsInCave                   = true;
	game->setFixNearFar(true, 1.0f, 12800.0f);

	// I assume this is meant to check if the 'active' navi is dead and if so, swap to the other navi
	// but good lord this is weird
	int naviID     = playData->mCaveSaveData.mActiveNaviID;
	u8* deadNaviID = &playData->mDeadNaviID;
	if ((1 << naviID * 8) & deadNaviID[naviID]) {
		naviID = 1 - naviID;
	}

	game->setPlayerMode(naviID);
	game->setCamController();

	// if olimar and louie are both alive, set louie to be in olimars party
	Navi* olimar = naviMgr->getAt(0);
	Navi* louie  = naviMgr->getAt(1);
	if (olimar->isAlive() && louie->isAlive()) {
		InteractFue act(olimar, false, true);
		louie->stimulate(act);
	}

	MoviePlayArg moviearg("s0B_cv_coursein", nullptr, game->mMovieFinishCallback, 0);
	moviearg.mDelegateStart = game->mMovieStartCallback;
	Vector3f& pos           = moviearg.mOrigin;

	mapMgr->getStartPosition(pos, false);

	if (ItemOnyon::mgr->mPod) {
		moviearg.mAngle = ItemOnyon::mgr->mPod->getFaceDir();
	}
	mapMgr->getMinY(pos);
	moviearg.mOrigin.y = mapMgr->getMinY(pos);
	moviePlayer->play(moviearg);

	Screen::gGame2DMgr->startCount_Floor();
	game->clearCaveMenus();
	mFadeout = false;
	gameSystem->resetFlag(GAMESYS_IsPlaying);

	game->mTreasureRadarActive = false;
	Vector3f temp1;
	f32 temp2;
	if (!Radar::mgr->calcNearestTreasure(Vector3f::zero, FLOAT_DIST_MAX, temp1, temp2)) {
		game->mNeedTreasureCalc = true;
	} else {
		game->mNeedTreasureCalc = false;
	}

	/*
	stwu     r1, -0x70(r1)
	mflr     r0
	stw      r0, 0x74(r1)
	li       r0, 0
	stw      r31, 0x6c(r1)
	mr       r31, r4
	stw      r30, 0x68(r1)
	mr       r30, r3
	stw      r29, 0x64(r1)
	stw      r28, 0x60(r1)
	stw      r0, mSoundDeathCount__Q24Game8DeathMgr@sda21(r13)
	lwz      r3, moviePlayer__4Game@sda21(r13)
	bl       reset__Q24Game11MoviePlayerFv
	li       r0, 0
	mr       r3, r31
	stb      r0, 0x10(r30)
	stb      r0, 0x18(r30)
	bl       setupCaveGames__Q24Game17SingleGameSectionFv
	li       r0, 0
	li       r4, 1
	stb      r0, 0x194(r31)
	lwz      r3, sys@sda21(r13)
	bl       heapStatusDump__6SystemFb
	lwz      r4, gameSystem__4Game@sda21(r13)
	li       r0, 1
	lfs      f1, lbl_8051A000@sda21(r2)
	mr       r3, r31
	lwz      r6, 0x40(r4)
	li       r4, 1
	lfs      f2, lbl_8051A004@sda21(r2)
	lwz      r5, 0x240(r6)
	ori      r5, r5, 1
	stw      r5, 0x240(r6)
	lwz      r6, gameSystem__4Game@sda21(r13)
	lbz      r5, 0x3c(r6)
	ori      r5, r5, 0x20
	stb      r5, 0x3c(r6)
	lwz      r5, gGame2DMgr__6Screen@sda21(r13)
	lwz      r5, 0x18(r5)
	stb      r0, 0x91(r5)
	lwz      r5, gameSystem__4Game@sda21(r13)
	stb      r0, 0x48(r5)
	bl       setFixNearFar__Q24Game15BaseGameSectionFbff
	lwz      r3, playData__4Game@sda21(r13)
	li       r6, 1
	lbz      r4, 0x78(r3)
	addi     r0, r3, 0x20
	srawi    r3, r4, 3
	slwi     r5, r3, 3
	subf     r3, r3, r0
	subf     r5, r5, r4
	lbz      r0, 0(r3)
	slw      r3, r6, r5
	and.     r0, r3, r0
	beq      lbl_80217840
	subfic   r4, r4, 1

lbl_80217840:
	mr       r3, r31
	bl       setPlayerMode__Q24Game15BaseGameSectionFi
	mr       r3, r31
	bl       setCamController__Q24Game15BaseGameSectionFv
	lwz      r3, naviMgr__4Game@sda21(r13)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	mr       r0, r3
	lwz      r3, naviMgr__4Game@sda21(r13)
	mr       r29, r0
	li       r4, 1
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	mr       r0, r3
	mr       r3, r29
	lwz      r12, 0(r29)
	mr       r28, r0
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8021790C
	mr       r3, r28
	lwz      r12, 0(r28)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8021790C
	lis      r4, __vt__Q24Game11Interaction@ha
	lis      r3, __vt__Q24Game11InteractFue@ha
	addi     r0, r4, __vt__Q24Game11Interaction@l
	li       r5, 0
	stw      r0, 0x18(r1)
	addi     r6, r3, __vt__Q24Game11InteractFue@l
	li       r0, 1
	mr       r3, r28
	stw      r29, 0x1c(r1)
	addi     r4, r1, 0x18
	stw      r6, 0x18(r1)
	stb      r5, 0x20(r1)
	stb      r0, 0x21(r1)
	lwz      r12, 0(r28)
	lwz      r12, 0x1a4(r12)
	mtctr    r12
	bctrl

lbl_8021790C:
	lwz      r6, 0xc8(r31)
	lis      r3, lbl_8048244C@ha
	li       r0, 0
	lfs      f0, lbl_8051A008@sda21(r2)
	addi     r4, r3, lbl_8048244C@l
	stw      r0, 0x28(r1)
	addi     r29, r1, 0x3c
	lwz      r3, mapMgr__4Game@sda21(r13)
	stw      r4, 0x24(r1)
	mr       r4, r29
	li       r5, 0
	stw      r6, 0x30(r1)
	stfs     f0, 0x3c(r1)
	stfs     f0, 0x40(r1)
	stfs     f0, 0x44(r1)
	stfs     f0, 0x48(r1)
	stw      r0, 0x4c(r1)
	stw      r0, 0x34(r1)
	stw      r0, 0x2c(r1)
	stw      r0, 0x50(r1)
	stw      r0, 0x38(r1)
	stw      r0, 0x54(r1)
	lwz      r0, 0xcc(r31)
	stw      r0, 0x34(r1)
	lwz      r12, 4(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r3, mgr__Q24Game9ItemOnyon@sda21(r13)
	lwz      r3, 0xac(r3)
	cmplwi   r3, 0
	beq      lbl_802179A0
	lwz      r12, 0(r3)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	stfs     f1, 0x48(r1)

lbl_802179A0:
	lwz      r3, mapMgr__4Game@sda21(r13)
	mr       r4, r29
	lwz      r12, 4(r3)
	lwz      r12, 0x28(r12)
	mtctr    r12
	bctrl
	lwz      r3, mapMgr__4Game@sda21(r13)
	mr       r4, r29
	lwz      r12, 4(r3)
	lwz      r12, 0x28(r12)
	mtctr    r12
	bctrl
	stfs     f1, 0x40(r1)
	addi     r4, r1, 0x24
	lwz      r3, moviePlayer__4Game@sda21(r13)
	bl       play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
	lwz      r3, gGame2DMgr__6Screen@sda21(r13)
	bl       startCount_Floor__Q26Screen9Game2DMgrFv
	mr       r3, r31
	bl       clearCaveMenus__Q24Game17SingleGameSectionFv
	li       r7, 0
	lis      r3, "zero__10Vector3<f>"@ha
	stb      r7, 0x11(r30)
	addi     r4, r3, "zero__10Vector3<f>"@l
	lfs      f1, lbl_8051A00C@sda21(r2)
	addi     r5, r1, 0xc
	lwz      r3, gameSystem__4Game@sda21(r13)
	addi     r6, r1, 8
	lbz      r0, 0x3c(r3)
	rlwinm   r0, r0, 0, 0x1f, 0x1d
	stb      r0, 0x3c(r3)
	stb      r7, 0x23d(r31)
	lwz      r3, mgr__5Radar@sda21(r13)
	bl       "calcNearestTreasure__Q25Radar3MgrFR10Vector3<f>fR10Vector3<f>Rf"
	cmpwi    r3, 0
	bne      lbl_80217A3C
	li       r0, 1
	stb      r0, 0x23e(r31)
	b        lbl_80217A44

lbl_80217A3C:
	li       r0, 0
	stb      r0, 0x23e(r31)

lbl_80217A44:
	lwz      r0, 0x74(r1)
	lwz      r31, 0x6c(r1)
	lwz      r30, 0x68(r1)
	lwz      r29, 0x64(r1)
	lwz      r28, 0x60(r1)
	mtlr     r0
	addi     r1, r1, 0x70
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000174
 */
void CaveState::gameStart(SingleGameSection* game)
{
	gameSystem->setFlag(GAMESYS_IsPlaying);
	PSMGetSceneMgr()->mScenes->mChild->startMainSeq();
	if (Radar::mgr && !Radar::Mgr::getNumOtakaraItems()) {
		PSM::Scene_Cave* scene = static_cast<PSM::Scene_Cave*>(PSMGetChildScene());
		PSSystem::checkGameScene(scene);
		scene->stopPollutionSe();
	}
}

/*
 * --INFO--
 * Address:	80217A64
 * Size:	00000C
 */
void CaveState::on_section_fadeout(SingleGameSection*) { mFadeout = true; }

/*
 * --INFO--
 * Address:	80217A70
 * Size:	0002D4
 */
void CaveState::exec(SingleGameSection* game)
{
	if (mFadeout)
		return;

	// the saving between cave floors is part of this state
	if (mDrawSave) {
		particle2dMgr->update();
		Screen::gGame2DMgr->update();
		if ((u8)Screen::gGame2DMgr->check_Save()) {
			LoadArg arg(1, false, false, game->mInCave);
			transit(game, SGS_Load, &arg);
			return;
		}
		return;
	}

	game->BaseGameSection::doUpdate();

	// check filling in radar map rooms
	if (Cave::randMapMgr) {
		Navi* navi = naviMgr->getActiveNavi();
		if (navi) {
			Vector3f naviPos = navi->getPosition();
			Cave::randMapMgr->radarMapPartsOpen(naviPos);
		}
	}

	if (game->mCurrentState->mId != mId) {
		return;
	}

	game->updateCaveScreen();

	// check pikmin extinction cutscene
	if (!(moviePlayer->isFlag(MVP_IsActive))) {
		if (GameStat::getMapPikmins(-1) == 0) {
			gameSystem->resetFlag(GAMESYS_IsGameWorldActive);
			MoviePlayArg moviearg("s05_pikminzero", nullptr, game->mMovieFinishCallback, 0);
			Navi* navi = naviMgr->getActiveNavi();
			if (!navi) {
				int id = 1;
				if (gameSystem->mSection->mPrevNaviIdx == 0) {
					id = 0;
				}
				navi = naviMgr->getAt(id);
			}
			moviearg.mDelegateStart = game->mMovieStartCallback;
			moviearg.mOrigin        = navi->getPosition();
			moviearg.mAngle         = navi->getFaceDir();
			moviePlayer->play(moviearg);
			return;
		}
	}

	if (!game->mOpenMenuFlags || game->updateCaveMenus()) {
		check_SMenu(game);
		// check muting parts of music when lots of pikmin die (does this actually happen in caves?)
		PSM::PikminNumberDirector* psm = PSMGetPikminNumD();
		if (GameStat::getMapPikmins_exclude_Me(-1) < 10 && deathMgr->mSoundDeathCount > 0) {
			if (psm) {
				psm->directOn();
			}
		} else {
			if (psm) {
				psm->directOff();
			}
		}
	}
}

/*
 * --INFO--
 * Address:	80217D44
 * Size:	000098
 */
void CaveState::draw(SingleGameSection* game, Graphics& gfx)
{
	if (!mFadeout) {
		if (mDrawSave) {
			game->draw_Ogawa2D(gfx);
		} else {
			if (Cave::randMapMgr) {
				Cave::randMapMgr->captureRadarMap(gfx);
			}
			game->BaseGameSection::doDraw(gfx);
			game->drawCaveScreen();
			game->test_draw_treasure_detector();
		}
	}
}

/*
 * --INFO--
 * Address:	80217DDC
 * Size:	00048C
 */
void CaveState::check_SMenu(SingleGameSection* game)
{
	Screen::gGame2DMgr->setGamePad(game->mControllerP1);
	int state = Screen::gGame2DMgr->check_SMenu();
	switch (state) {
	case 1: // unpause and resume gameplay
		gameSystem->setPause(false, "sm-canc", 3);
		gameSystem->setMoviePause(false, "sm-canc");
		return;
	case 4:
		gameSystem->resetFlag(GAMESYS_IsGameWorldActive);
		gameSystem->setMoviePause(false, "sm-giveup");
		if (moviePlayer->mDemoState != 0)
			return;
		MoviePlayArg arg("s12_cv_giveup", nullptr, game->mMovieFinishCallback, 0);
		arg.mDelegateStart = game->mMovieStartCallback;
		Onyon* onyon       = ItemOnyon::mgr->mPod;
		JUT_ASSERTLINE(792, onyon, "no pod demo 12");
		arg.mOrigin = onyon->getPosition();
		arg.mAngle  = onyon->getFaceDir();
		moviePlayer->play(arg);

		for (int i = 0; i < 2; i++) {
			Navi* navi = naviMgr->getAt(i);
			if (navi->isAlive() && navi->isStickTo()) {
				navi->endStick();
			}
		}

		Iterator<Piki> it(pikiMgr);
		CI_LOOP(it)
		{
			Piki* piki = *it;
			if (piki->isAlive()) {
				piki->endStick();
				piki->mBrain->start(PikiAI::ACT_Free, nullptr);
			}
		}
		return;
	case -1:
		// Conditions to open pause menu
		if (!(gameSystem->isFlag(GAMESYS_Unk4)) && moviePlayer->mDemoState == 0 && !gameSystem->paused()
		    && game->mControllerP1->mButton.mButtonDown & Controller::PRESS_START) {
			og::Screen::DispMemberSMenuAll disp;
			game->setDispMemberSMenu(disp);
			if (!Screen::gGame2DMgr->open_SMenu(disp)) {
				return;
			}
			gameSystem->setPause(true, "open-sm", 3);
			gameSystem->setMoviePause(true, "open-sm");
		}
		break;
	case 0:
		break;
	default:
		JUT_PANICLINE(854, "Illegal return value %d.", Screen::gGame2DMgr->check_SMenu());
	}
}

/*
 * --INFO--
 * Address:	80218268
 * Size:	000068
 */
void CaveState::cleanup(SingleGameSection* game)
{
	gameSystem->resetFlag(GAMESYS_IsPlaying);
	gameSystem->setMoviePause(false, "cavestate:cleanup");
	game->setDraw2DCreature(nullptr);
	if (game->mTheExpHeap) {
		PSMCancelToPauseOffMainBgm();
	}
}

/*
 * --INFO--
 * Address:	802182D0
 * Size:	0000D4
 */
void CaveState::onOrimaDown(SingleGameSection* game, int naviID)
{
	MoviePlayArg arg("s03_orimadown", nullptr, game->mMovieFinishCallback, naviID);
	arg.mDelegateStart = game->mMovieStartCallback;

	moviePlayer->mTargetNavi = naviMgr->getAt(naviID);
	if (naviID == 0) {
		moviePlayer->mActingCamera = game->mOlimarCamera;
	} else {
		moviePlayer->mActingCamera = game->mLouieCamera;
	}
	moviePlayer->play(arg);
}

/*
 * --INFO--
 * Address:	802183A4
 * Size:	000104
 */
void CaveState::onFountainReturn(SingleGameSection* game, ItemBigFountain::Item* fountain)
{
	gameSystem->resetFlag(GAMESYS_IsGameWorldActive);
	game->loadMainMapSituation();

	MoviePlayArg arg("s0C_cv_escape", nullptr, game->mMovieFinishCallback, 0);
	arg.mOrigin        = fountain->getPosition();
	arg.mAngle         = fountain->getFaceDir();
	arg.mDelegateStart = game->mMovieStartCallback;

	moviePlayer->mTargetObject = fountain;
	fountain->movie_begin(false);
	moviePlayer->play(arg);
}

/*
 * --INFO--
 * Address:	802184A8
 * Size:	000144
 */
void CaveState::onNextFloor(SingleGameSection* game, ItemHole::Item* hole)
{
	BlackMan::Obj* waterwraith = ((RoomMapMgr*)mapMgr)->mBlackMan;
	if (waterwraith) {
		if (waterwraith->isAlive()) {
			playData->mCaveSaveData.mWaterwraithTimer = waterwraith->getTimer();
		} else {
			playData->mCaveSaveData.mIsWaterwraithAlive = false;
		}
	}
	gameSystem->resetFlag(GAMESYS_IsGameWorldActive);

	MoviePlayArg arg("s09_holein", nullptr, game->mMovieFinishCallback, 0);

	arg.mOrigin                = hole->getPosition();
	arg.mAngle                 = hole->getFaceDir();
	arg.mDelegateStart         = game->mMovieStartCallback;
	moviePlayer->mTargetObject = hole;
	moviePlayer->play(arg);
}

/*
 * --INFO--
 * Address:	802185EC
 * Size:	0005F0
 */
void CaveState::onMovieCommand(SingleGameSection* game, int command)
{
	if (command != 0 && mLosePellets) {
		return;
	}

	if (moviePlayer->isPlaying("s03_orimadown") && !naviMgr->mDeadNavis) {
		return;
	}

	if (moviePlayer->isPlaying("s03_orimadown")) {
		Iterator<Piki> it(pikiMgr);
		CI_LOOP(it)
		{
			Piki* piki = *it;
			if (piki->isAlive()) {
				piki->mBrain->start(PikiAI::ACT_Free, nullptr);
				piki->movie_begin(false);
				PanicStateArg arg;
				arg.mPanicType = 3;
				piki->mFsm->transit(piki, PIKISTATE_Panic, &arg);
			}
		}
	}

	game->clearCaveOtakaraEarningsAndDrops();
	int lost     = 0;
	mLosePellets = true;

	PelletCropMemory* mem = playData->mCaveCropMemory;

	KindCounter& counter = mem->mOtakara;
	for (int i = 0; i < counter.mNumKinds; i++) {
		if ((*counter(i))) {
			lost += *counter(i);
		}
	}
	KindCounter& counter2 = mem->mItem;
	for (int i = 0; i < counter2.mNumKinds; i++) {
		if ((*counter2(i))) {
			lost += *counter2(i);
		}
	}

	f32 zero = 0.0f;
	f32 calc = randFloat() * zero + 1.0f;
	if (calc < 0.0f) {
		if (calc > 1.0f) {
			calc = 1.0f;
		}
	}

	game->mDoTrackCarcass = true;
	calc                  = (f32)lost * calc;
	if (calc > 0.0f) {
		BasePelletMgr* pelmgr = PelletOtakara::mgr;
		KindCounter& counter  = mem->mOtakara;
		for (int i = 0; i < counter.mNumKinds; i++) {
			int j = 0;
			for (int k = 0; k < *counter(i); k++) {
				pelmgr->getPelletConfig(i);
				if (randFloat() <= calc / (f32)lost) {
					pelmgr->getPelletConfig(i);
					playData->losePellet(pelmgr, i);
					*(game->mOtakaraCounter(i)) += 1;
					j++;
					calc -= 1.0f;
				}
				lost--;
			}
			u8* flag = counter(i);
			*flag -= j;
		}

		pelmgr                = PelletItem::mgr;
		KindCounter& counter3 = mem->mItem;
		for (int i = 0; i < counter3.mNumKinds; i++) {
			int j = 0;
			for (int k = 0; k < *counter3(i); k++) {
				pelmgr->getPelletConfig(i);
				if (randFloat() <= calc / (f32)lost) {
					pelmgr->getPelletConfig(i);
					*(game->mItemCounter(i)) += 1;
					playData->losePellet(pelmgr, i);
					j++;
					calc -= 1.0f;
				}
				lost--;
			}
			*(counter3(i)) -= j;
		}
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
	stmw     r23, 0x3c(r1)
	cmpwi    r5, 0
	mr       r31, r3
	mr       r29, r4
	beq      lbl_80218628
	b        lbl_80218BB0

lbl_80218628:
	lbz      r0, 0x10(r31)
	cmplwi   r0, 0
	bne      lbl_80218BB0
	lis      r4, lbl_8048253C@ha
	lwz      r3, moviePlayer__4Game@sda21(r13)
	addi     r4, r4, lbl_8048253C@l
	bl       isPlaying__Q24Game11MoviePlayerFPc
	clrlwi.  r0, r3, 0x18
	beq      lbl_8021865C
	lwz      r3, naviMgr__4Game@sda21(r13)
	lwz      r0, 0x50(r3)
	cmpwi    r0, 0
	beq      lbl_80218BB0

lbl_8021865C:
	lis      r4, lbl_8048253C@ha
	lwz      r3, moviePlayer__4Game@sda21(r13)
	addi     r4, r4, lbl_8048253C@l
	bl       isPlaying__Q24Game11MoviePlayerFPc
	clrlwi.  r0, r3, 0x18
	beq      lbl_80218890
	li       r0, 0
	lwz      r3, pikiMgr__4Game@sda21(r13)
	lis      r4, "__vt__22Iterator<Q24Game4Piki>"@ha
	stw      r0, 0x18(r1)
	addi     r4, r4, "__vt__22Iterator<Q24Game4Piki>"@l
	cmplwi   r0, 0
	stw      r4, 0xc(r1)
	stw      r0, 0x10(r1)
	stw      r3, 0x14(r1)
	bne      lbl_802186B4
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x10(r1)
	b        lbl_80218870

lbl_802186B4:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x10(r1)
	b        lbl_80218720

lbl_802186CC:
	lwz      r3, 0x14(r1)
	lwz      r4, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x18(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80218870
	lwz      r3, 0x14(r1)
	lwz      r4, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x10(r1)

lbl_80218720:
	lwz      r12, 0xc(r1)
	addi     r3, r1, 0xc
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802186CC
	b        lbl_80218870

lbl_80218740:
	lwz      r3, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	mr       r28, r3
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802187B4
	lwz      r3, 0x294(r28)
	li       r4, 1
	li       r5, 0
	bl       start__Q26PikiAI5BrainFiPQ26PikiAI9ActionArg
	mr       r3, r28
	li       r4, 0
	bl       movie_begin__Q24Game8CreatureFb
	li       r0, 3
	mr       r4, r28
	sth      r0, 8(r1)
	addi     r6, r1, 8
	li       r5, 0x15
	lwz      r3, 0x28c(r28)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl

lbl_802187B4:
	lwz      r0, 0x18(r1)
	cmplwi   r0, 0
	bne      lbl_802187E0
	lwz      r3, 0x14(r1)
	lwz      r4, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x10(r1)
	b        lbl_80218870

lbl_802187E0:
	lwz      r3, 0x14(r1)
	lwz      r4, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x10(r1)
	b        lbl_80218854

lbl_80218800:
	lwz      r3, 0x14(r1)
	lwz      r4, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x18(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80218870
	lwz      r3, 0x14(r1)
	lwz      r4, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x10(r1)

lbl_80218854:
	lwz      r12, 0xc(r1)
	addi     r3, r1, 0xc
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80218800

lbl_80218870:
	lwz      r3, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x10(r1)
	cmplw    r4, r3
	bne      lbl_80218740

lbl_80218890:
	mr       r3, r29
	bl       clearCaveOtakaraEarningsAndDrops__Q24Game17SingleGameSectionFv
	li       r0, 1
	li       r30, 0
	stb      r0, 0x10(r31)
	li       r27, 0
	lwz      r3, playData__4Game@sda21(r13)
	lwz      r31, 0xb8(r3)
	addi     r28, r31, 4
	b        lbl_802188E8

lbl_802188B8:
	mr       r3, r28
	mr       r4, r27
	bl       __cl__Q24Game11KindCounterFi
	lbz      r0, 0(r3)
	cmplwi   r0, 0
	beq      lbl_802188E4
	mr       r3, r28
	mr       r4, r27
	bl       __cl__Q24Game11KindCounterFi
	lbz      r0, 0(r3)
	add      r30, r30, r0

lbl_802188E4:
	addi     r27, r27, 1

lbl_802188E8:
	lhz      r0, 0(r28)
	cmpw     r27, r0
	blt      lbl_802188B8
	addi     r27, r31, 0xc
	li       r28, 0
	b        lbl_80218930

lbl_80218900:
	mr       r3, r27
	mr       r4, r28
	bl       __cl__Q24Game11KindCounterFi
	lbz      r0, 0(r3)
	cmplwi   r0, 0
	beq      lbl_8021892C
	mr       r3, r27
	mr       r4, r28
	bl       __cl__Q24Game11KindCounterFi
	lbz      r0, 0(r3)
	add      r30, r30, r0

lbl_8021892C:
	addi     r28, r28, 1

lbl_80218930:
	lhz      r0, 0(r27)
	cmpw     r28, r0
	blt      lbl_80218900
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x24(r1)
	lfd      f3, lbl_8051A028@sda21(r2)
	stw      r0, 0x20(r1)
	lfs      f2, lbl_8051A020@sda21(r2)
	lfd      f0, 0x20(r1)
	lfs      f1, lbl_8051A008@sda21(r2)
	fsubs    f3, f0, f3
	lfs      f0, lbl_8051A000@sda21(r2)
	fdivs    f2, f3, f2
	fmadds   f2, f1, f2, f0
	fcmpo    cr0, f2, f1
	bge      lbl_80218980
	fmr      f2, f1
	b        lbl_8021898C

lbl_80218980:
	fcmpo    cr0, f2, f0
	ble      lbl_8021898C
	fmr      f2, f0

lbl_8021898C:
	xoris    r0, r30, 0x8000
	lis      r28, 0x4330
	stw      r0, 0x24(r1)
	li       r0, 1
	lfd      f30, lbl_8051A028@sda21(r2)
	stw      r28, 0x20(r1)
	lfs      f0, lbl_8051A008@sda21(r2)
	lfd      f1, 0x20(r1)
	stb      r0, 0x274(r29)
	fsubs    f1, f1, f30
	fmuls    f31, f1, f2
	fcmpo    cr0, f31, f0
	ble      lbl_80218BB0
	lwz      r27, mgr__Q24Game13PelletOtakara@sda21(r13)
	addi     r26, r31, 4
	lfs      f29, lbl_8051A020@sda21(r2)
	li       r25, 0
	b        lbl_80218AA8

lbl_802189D4:
	li       r24, 0
	li       r23, 0
	b        lbl_80218A74

lbl_802189E0:
	mr       r3, r27
	mr       r4, r25
	bl       getPelletConfig__Q24Game13BasePelletMgrFi
	bl       rand
	xoris    r3, r3, 0x8000
	xoris    r0, r30, 0x8000
	stw      r3, 0x24(r1)
	stw      r28, 0x20(r1)
	lfd      f0, 0x20(r1)
	stw      r0, 0x2c(r1)
	fsubs    f1, f0, f30
	stw      r28, 0x28(r1)
	lfd      f0, 0x28(r1)
	fdivs    f1, f1, f29
	fsubs    f0, f0, f30
	fdivs    f0, f31, f0
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_80218A6C
	mr       r3, r27
	mr       r4, r25
	bl       getPelletConfig__Q24Game13BasePelletMgrFi
	lwz      r3, playData__4Game@sda21(r13)
	mr       r4, r27
	mr       r5, r25
	bl       losePellet__Q24Game8PlayDataFPQ24Game13BasePelletMgri
	mr       r4, r25
	addi     r3, r29, 0x264
	bl       __cl__Q24Game11KindCounterFi
	lbz      r4, 0(r3)
	addi     r24, r24, 1
	lfs      f0, lbl_8051A000@sda21(r2)
	addi     r0, r4, 1
	fsubs    f31, f31, f0
	stb      r0, 0(r3)

lbl_80218A6C:
	addi     r30, r30, -1
	addi     r23, r23, 1

lbl_80218A74:
	mr       r3, r26
	mr       r4, r25
	bl       __cl__Q24Game11KindCounterFi
	lbz      r0, 0(r3)
	cmpw     r23, r0
	blt      lbl_802189E0
	mr       r3, r26
	mr       r4, r25
	bl       __cl__Q24Game11KindCounterFi
	lbz      r0, 0(r3)
	addi     r25, r25, 1
	subf     r0, r24, r0
	stb      r0, 0(r3)

lbl_80218AA8:
	lhz      r0, 0(r26)
	cmpw     r25, r0
	blt      lbl_802189D4
	lwz      r28, mgr__Q24Game10PelletItem@sda21(r13)
	addi     r23, r31, 0xc
	lfd      f29, lbl_8051A028@sda21(r2)
	li       r24, 0
	lfs      f30, lbl_8051A020@sda21(r2)
	lis      r31, 0x4330
	b        lbl_80218BA4

lbl_80218AD0:
	li       r25, 0
	li       r26, 0
	b        lbl_80218B70

lbl_80218ADC:
	mr       r3, r28
	mr       r4, r24
	bl       getPelletConfig__Q24Game13BasePelletMgrFi
	bl       rand
	xoris    r3, r3, 0x8000
	xoris    r0, r30, 0x8000
	stw      r3, 0x2c(r1)
	stw      r31, 0x28(r1)
	lfd      f0, 0x28(r1)
	stw      r0, 0x24(r1)
	fsubs    f1, f0, f29
	stw      r31, 0x20(r1)
	lfd      f0, 0x20(r1)
	fdivs    f1, f1, f30
	fsubs    f0, f0, f29
	fdivs    f0, f31, f0
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_80218B68
	mr       r3, r28
	mr       r4, r24
	bl       getPelletConfig__Q24Game13BasePelletMgrFi
	mr       r4, r24
	addi     r3, r29, 0x26c
	bl       __cl__Q24Game11KindCounterFi
	lbz      r6, 0(r3)
	mr       r4, r28
	mr       r5, r24
	addi     r0, r6, 1
	stb      r0, 0(r3)
	lwz      r3, playData__4Game@sda21(r13)
	bl       losePellet__Q24Game8PlayDataFPQ24Game13BasePelletMgri
	lfs      f0, lbl_8051A000@sda21(r2)
	addi     r25, r25, 1
	fsubs    f31, f31, f0

lbl_80218B68:
	addi     r30, r30, -1
	addi     r26, r26, 1

lbl_80218B70:
	mr       r3, r23
	mr       r4, r24
	bl       __cl__Q24Game11KindCounterFi
	lbz      r0, 0(r3)
	cmpw     r26, r0
	blt      lbl_80218ADC
	mr       r3, r23
	mr       r4, r24
	bl       __cl__Q24Game11KindCounterFi
	lbz      r0, 0(r3)
	addi     r24, r24, 1
	subf     r0, r25, r0
	stb      r0, 0(r3)

lbl_80218BA4:
	lhz      r0, 0(r23)
	cmpw     r24, r0
	blt      lbl_80218AD0

lbl_80218BB0:
	psq_l    f31, 136(r1), 0, qr0
	lfd      f31, 0x80(r1)
	psq_l    f30, 120(r1), 0, qr0
	lfd      f30, 0x70(r1)
	psq_l    f29, 104(r1), 0, qr0
	lfd      f29, 0x60(r1)
	lmw      r23, 0x3c(r1)
	lwz      r0, 0x94(r1)
	mtlr     r0
	addi     r1, r1, 0x90
	blr
	*/
}

/*
 * --INFO--
 * Address:	80218BDC
 * Size:	000490
 */
void CaveState::onMovieStart(SingleGameSection* game, MovieConfig* config, u32, u32 naviID)
{
	if (config->is("s0B_cv_coursein")) {
		game->createFallPikminSound();
	}
	Screen::gGame2DMgr->startFadeBG_Floor();
	if (config->is("s05_pikminzero")) {
		Screen::gGame2DMgr->open_GameOver(Screen::Game2DMgr::GOTITLE_PikminZero);
	}

	if (config->is("s12_cv_giveup")) {
		Screen::gGame2DMgr->mScreenMgr->reset();

		Iterator<Piki> it(pikiMgr);
		CI_LOOP(it)
		{
			Piki* piki = *it;
			if (piki->isAlive() && !piki->isStickTo() && piki->getKind() == Bulbmin) {
				piki->movie_begin(false);
			}
		}
	}

	if (config->is("s03_orimadown")) {
		Screen::Game2DMgr::GameOverTitle id;
		if (naviID == 0) {
			id = Screen::Game2DMgr::GOTITLE_OlimarDown;
			game->setPlayerMode(0);
		} else {
			id = Screen::Game2DMgr::GOTITLE_LouieDown;
			if (playData->mStoryFlags & STORY_DebtPaid) {
				id = Screen::Game2DMgr::GOTITLE_PresidentDown;
			}
			game->setPlayerMode(1);
		}
		Screen::gGame2DMgr->open_GameOver(id);
	}

	if (config->is("s09_holein")) {
		gameSystem->resetFlag(GAMESYS_IsGameWorldActive);
		playData->setCurrentCaveFloor(game->getCurrFloor() + 1);

		int id;
		Navi* navi = naviMgr->getActiveNavi();
		if (navi) {
			id = navi->mNaviIndex;
		} else {
			id = 0;
		}
		playData->mCaveSaveData.mActiveNaviID = id;

		if (!navi) {
			for (int i = 0; i < 25; i++) { }
		} else {
			for (int i = 0; i < 2; i++) {
				Navi* navi = naviMgr->getAt(i);
				if (navi->isAlive() && navi->isStickTo()) {
					navi->endStick();
				}
			}
		}
		Vector3f holepos = game->mHole->getPosition();
		game->prepareHoleIn(holepos, true);
		game->saveCaveMore();
	}

	if (config->is("s0C_cv_escape")) {
		gameSystem->resetFlag(GAMESYS_IsGameWorldActive);
		Vector3f geyserpos = game->mFountain->getPosition();
		game->prepareFountainOn(geyserpos);
	}

	/*
	.loc_0x0:
	  stwu      r1, -0x60(r1)
	  mflr      r0
	  lis       r3, 0x8048
	  stw       r0, 0x64(r1)
	  stmw      r27, 0x4C(r1)
	  mr        r29, r5
	  addi      r31, r3, 0x2430
	  mr        r28, r4
	  mr        r30, r7
	  mr        r3, r29
	  addi      r4, r31, 0x1C
	  bl        0x218CC4
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x40
	  mr        r3, r28
	  bl        -0xC76E4

	.loc_0x40:
	  lwz       r3, -0x6560(r13)
	  bl        0x1E4B54
	  mr        r3, r29
	  addi      r4, r31, 0x88
	  bl        0x218CA0
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x68
	  lwz       r3, -0x6560(r13)
	  li        r4, 0x4
	  bl        0x1E4D0C

	.loc_0x68:
	  mr        r3, r29
	  addi      r4, r31, 0xA4
	  bl        0x218C80
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x294
	  lwz       r3, -0x6560(r13)
	  lwz       r3, 0x18(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  li        r0, 0
	  lwz       r3, -0x6D0C(r13)
	  lis       r4, 0x804B
	  stw       r0, 0x44(r1)
	  subi      r4, r4, 0x4364
	  cmplwi    r0, 0
	  stw       r4, 0x38(r1)
	  stw       r0, 0x3C(r1)
	  stw       r3, 0x40(r1)
	  bne-      .loc_0xD4
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x3C(r1)
	  b         .loc_0x274

	.loc_0xD4:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x3C(r1)
	  b         .loc_0x140

	.loc_0xEC:
	  lwz       r3, 0x40(r1)
	  lwz       r4, 0x3C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x44(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x274
	  lwz       r3, 0x40(r1)
	  lwz       r4, 0x3C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x3C(r1)

	.loc_0x140:
	  lwz       r12, 0x38(r1)
	  addi      r3, r1, 0x38
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0xEC
	  b         .loc_0x274

	.loc_0x160:
	  lwz       r3, 0x40(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  mr        r27, r3
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x1B8
	  mr        r3, r27
	  bl        -0x797FC
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1B8
	  lbz       r0, 0x2B8(r27)
	  cmpwi     r0, 0x5
	  bne-      .loc_0x1B8
	  mr        r3, r27
	  li        r4, 0
	  bl        -0xDD340

	.loc_0x1B8:
	  lwz       r0, 0x44(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x1E4
	  lwz       r3, 0x40(r1)
	  lwz       r4, 0x3C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x3C(r1)
	  b         .loc_0x274

	.loc_0x1E4:
	  lwz       r3, 0x40(r1)
	  lwz       r4, 0x3C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x3C(r1)
	  b         .loc_0x258

	.loc_0x204:
	  lwz       r3, 0x40(r1)
	  lwz       r4, 0x3C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x44(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x274
	  lwz       r3, 0x40(r1)
	  lwz       r4, 0x3C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x3C(r1)

	.loc_0x258:
	  lwz       r12, 0x38(r1)
	  addi      r3, r1, 0x38
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x204

	.loc_0x274:
	  lwz       r3, 0x40(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x3C(r1)
	  cmplw     r4, r3
	  bne+      .loc_0x160

	.loc_0x294:
	  mr        r3, r29
	  addi      r4, r31, 0x10C
	  bl        0x218A54
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x2F8
	  cmplwi    r30, 0
	  bne-      .loc_0x2C4
	  mr        r3, r28
	  li        r27, 0x1
	  li        r4, 0
	  bl        -0xCB580
	  b         .loc_0x2EC

	.loc_0x2C4:
	  lwz       r3, -0x6B70(r13)
	  li        r4, 0x2
	  lbz       r0, 0x2F(r3)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0x2DC
	  li        r4, 0x3

	.loc_0x2DC:
	  mr        r27, r4
	  mr        r3, r28
	  li        r4, 0x1
	  bl        -0xCB5AC

	.loc_0x2EC:
	  lwz       r3, -0x6560(r13)
	  mr        r4, r27
	  bl        0x1E4A7C

	.loc_0x2F8:
	  mr        r3, r29
	  addi      r4, r31, 0x12C
	  bl        0x2189F0
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x41C
	  lwz       r4, -0x6C18(r13)
	  mr        r3, r28
	  lbz       r0, 0x3C(r4)
	  rlwinm    r0,r0,0,27,25
	  stb       r0, 0x3C(r4)
	  lwz       r12, 0x0(r28)
	  lwz       r12, 0x58(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, -0x6B70(r13)
	  addi      r4, r4, 0x1
	  bl        -0x31A4C
	  lwz       r3, -0x6D20(r13)
	  bl        -0xBE300
	  cmplwi    r3, 0
	  beq-      .loc_0x358
	  lhz       r0, 0x2DC(r3)
	  b         .loc_0x35C

	.loc_0x358:
	  li        r0, 0

	.loc_0x35C:
	  lwz       r4, -0x6B70(r13)
	  cmplwi    r3, 0
	  stb       r0, 0x78(r4)
	  bne-      .loc_0x378
	  li        r0, 0x19
	  mtctr     r0

	.loc_0x374:
	  bdnz-     .loc_0x374

	.loc_0x378:
	  li        r27, 0

	.loc_0x37C:
	  lwz       r3, -0x6D20(r13)
	  mr        r4, r27
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  mr        r30, r3
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x3C8
	  mr        r3, r30
	  bl        -0x79A1C
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x3C8
	  mr        r3, r30
	  bl        -0x79B7C

	.loc_0x3C8:
	  addi      r27, r27, 0x1
	  cmpwi     r27, 0x2
	  blt+      .loc_0x37C
	  lwz       r4, 0x188(r28)
	  addi      r3, r1, 0x14
	  lwz       r12, 0x0(r4)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x14(r1)
	  mr        r3, r28
	  lfs       f1, 0x18(r1)
	  addi      r4, r1, 0x2C
	  lfs       f0, 0x1C(r1)
	  li        r5, 0x1
	  stfs      f2, 0x2C(r1)
	  stfs      f1, 0x30(r1)
	  stfs      f0, 0x34(r1)
	  bl        -0xCAEBC
	  mr        r3, r28
	  bl        -0xC4A88

	.loc_0x41C:
	  mr        r3, r29
	  addi      r4, r31, 0x11C
	  bl        0x2188CC
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x47C
	  lwz       r4, -0x6C18(r13)
	  addi      r3, r1, 0x8
	  lbz       r0, 0x3C(r4)
	  rlwinm    r0,r0,0,27,25
	  stb       r0, 0x3C(r4)
	  lwz       r4, 0x18C(r28)
	  lwz       r12, 0x0(r4)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x8(r1)
	  mr        r3, r28
	  lfs       f1, 0xC(r1)
	  addi      r4, r1, 0x20
	  lfs       f0, 0x10(r1)
	  stfs      f2, 0x20(r1)
	  stfs      f1, 0x24(r1)
	  stfs      f0, 0x28(r1)
	  bl        -0xCA898

	.loc_0x47C:
	  lmw       r27, 0x4C(r1)
	  lwz       r0, 0x64(r1)
	  mtlr      r0
	  addi      r1, r1, 0x60
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8021906C
 * Size:	000EB4
 */
void CaveState::onMovieDone(Game::SingleGameSection* game, Game::MovieConfig* config, u32, u32 naviID)
{
	if (config->is("s0C_cv_escape")) {
		PSMCancelToPauseOffMainBgm();
		moviePlayer->clearSuspendedDemo();
		pikiMgr->caveSaveAllPikmins(true, true);
		CaveResultArg arg;
		arg._00 = 1;
		transit(game, SGS_CaveResult, &arg);
		return;
	} else if (config->is("s09_holein")) {
		moviePlayer->clearSuspendedDemo();
		og::Screen::DispMemberSave disp;
		disp.mDoSound = true;
		PSMCancelToPauseOffMainBgm();
		Screen::gGame2DMgr->open_Save(disp);
		mDrawSave = true;
		return;
	} else if (config->is("g07_cv_gamestart")) {
		og::Screen::DispMemberCave disp;
		RoomMapMgr* mgr    = static_cast<RoomMapMgr*>(mapMgr);
		int cFloor         = mgr->mSublevel;
		int maxFloor       = mgr->mCaveInfo->getFloorMax() - 1;
		bool isFinal       = (cFloor == maxFloor);
		disp.mIsFinalFloor = isFinal;

		if (isFinal) {
			Screen::gGame2DMgr->open_GameCave(disp, 2);
			return;
		}

		Screen::gGame2DMgr->open_GameCave(disp, 0);
		gameStart(game);
		return;
	} else if (config->is("s0B_cv_coursein")) {

		Iterator<Piki> it(pikiMgr);
		CI_LOOP(it)
		{
			Piki* piki    = *it;
			Vector3f temp = piki->getPosition();
			temp.y        = mapMgr->getMinY(temp);
			piki->setPosition(temp, false);
			piki->mSimVelocity = 0.0f;
			piki->mVelocity    = 0.0f;
		}

		if (!playData->isDemoFlag(DEMO_First_Cave_Enter)) {
			playData->setDemoFlag(DEMO_First_Cave_Enter);
			MoviePlayArg arg("g07_cv_gamestart", nullptr, game->mMovieFinishCallback, 0);
			Screen::gGame2DMgr->close_Floor();
			if (ItemOnyon::mgr->mPod) {
				arg.mAngle = ItemOnyon::mgr->mPod->getFaceDir();
			}
			mapMgr->getStartPosition(arg.mOrigin, 0);
			arg.mOrigin.y = mapMgr->getMinY(arg.mOrigin);
			moviePlayer->play(arg);
		} else {
			Screen::gGame2DMgr->close_Floor();
			og::Screen::DispMemberCave disp;
			RoomMapMgr* mgr    = static_cast<RoomMapMgr*>(mapMgr);
			int cFloor         = mgr->mSublevel;
			int maxFloor       = mgr->mCaveInfo->getFloorMax() - 1;
			bool isFinal       = (cFloor == maxFloor);
			disp.mIsFinalFloor = isFinal;

			if (isFinal) {
				Screen::gGame2DMgr->open_GameCave(disp, 2);
				return;
			}

			Screen::gGame2DMgr->open_GameCave(disp, 0);
			gameStart(game);
		}
		return;
	} else if (config->is("s03_orimadown")) {
		Screen::gGame2DMgr->close_GameOver();
		naviMgr->getAt(naviID)->setDeadLaydown();
		if (naviMgr->mDeadNavis != 2) {
			if ((int)naviID == 0) {
				gameSystem->mSection->setPlayerMode(1);
			} else {
				gameSystem->mSection->setPlayerMode(0);
			}
		} else {
			// probably make this 100 a constant define
			Piki* pikilist[100];
			Iterator<Piki> it(pikiMgr);
			int pikis = 0;
			CI_LOOP(it)
			{
				Piki* piki = *it;
				if (piki->isAlive() && piki->getKind() != Bulbmin) {
					pikilist[pikis] = piki;
				}
				pikis++;
			}

			for (int i = 0; i < pikis; i++) {
				if (pikilist[i]->isPikmin()) {
					deathMgr->inc(0);
					deathMgr->inc(7);
				}
				PikiKillArg killarg(true);
				pikilist[i]->kill(&killarg);
			}
			gameSystem->resetFlag(GAMESYS_IsGameWorldActive);
			CaveResultArg statearg;
			statearg._00 = 2;
			transit(game, SGS_CaveResult, &statearg);
		}
		return;
	} else if (config->is("s05_pikminzero")) {
		gameSystem->resetFlag(GAMESYS_IsGameWorldActive);
		Screen::gGame2DMgr->close_GameOver();
		CaveResultArg statearg;
		statearg._00 = 3;
		transit(game, SGS_CaveResult, &statearg);
	} else if (config->is("s12_cv_giveup")) {
		moviePlayer->clearSuspendedDemo();
		gameSystem->resetFlag(GAMESYS_IsGameWorldActive);

		Iterator<ItemPikihead::Item> it(ItemPikihead::mgr);
		int pikis = 0;
		CI_LOOP(it)
		{
			ItemPikihead::Item* head = *it;
			if (head->isAlive()) {
				deathMgr->inc(0);
				deathMgr->inc(7);
			}
		}
		pikiMgr->caveSaveAllPikmins(true, true);
		CaveResultArg statearg;
		statearg._00 = 4;
		transit(game, SGS_CaveResult, &statearg);
	}
	/*
	.loc_0x0:
	  stwu      r1, -0x330(r1)
	  mflr      r0
	  stw       r0, 0x334(r1)
	  stfd      f31, 0x320(r1)
	  psq_st    f31,0x328(r1),0,0
	  stmw      r24, 0x300(r1)
	  lis       r6, 0x8048
	  mr        r25, r5
	  addi      r31, r6, 0x2430
	  mr        r29, r3
	  mr        r30, r4
	  mr        r24, r7
	  mr        r3, r25
	  addi      r4, r31, 0x11C
	  bl        0x218828
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x8C
	  bl        0x24E388
	  lwz       r3, -0x64AC(r13)
	  bl        0x213ED0
	  lwz       r3, -0x6D0C(r13)
	  li        r4, 0x1
	  li        r5, 0x1
	  bl        -0xB8650
	  li        r0, 0x1
	  mr        r3, r29
	  sth       r0, 0x14(r1)
	  mr        r4, r30
	  addi      r6, r1, 0x14
	  li        r5, 0x8
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0xE98

	.loc_0x8C:
	  mr        r3, r25
	  addi      r4, r31, 0x12C
	  bl        0x2187CC
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xF0
	  lwz       r3, -0x64AC(r13)
	  bl        0x213E78
	  lis       r3, 0x804B
	  li        r4, 0
	  addi      r0, r3, 0x1148
	  lis       r3, 0x804C
	  stw       r0, 0x68(r1)
	  addi      r3, r3, 0x4E4
	  li        r0, 0x1
	  stb       r4, 0x70(r1)
	  stw       r4, 0x6C(r1)
	  stw       r3, 0x68(r1)
	  stb       r0, 0x70(r1)
	  bl        0x24E2F8
	  lwz       r3, -0x6560(r13)
	  addi      r4, r1, 0x68
	  bl        0x1E5558
	  li        r0, 0x1
	  stb       r0, 0x18(r29)
	  b         .loc_0xE98

	.loc_0xF0:
	  mr        r3, r25
	  addi      r4, r31, 0x138
	  bl        0x218768
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x350
	  lis       r3, 0x804B
	  li        r8, 0
	  addi      r9, r3, 0x1148
	  li        r4, 0x1
	  lfs       f1, -0x4360(r2)
	  lis       r7, 0x804B
	  li        r0, 0xA
	  li        r3, 0x2
	  stb       r8, 0x128(r1)
	  li        r6, 0x4D2
	  lfs       f2, -0x4358(r2)
	  li        r5, 0x32
	  lfs       f0, -0x4330(r2)
	  addi      r7, r7, 0x1094
	  stw       r9, 0x10C(r1)
	  lwz       r9, -0x6CF8(r13)
	  stw       r8, 0x110(r1)
	  stw       r7, 0x10C(r1)
	  stfs      f2, 0x114(r1)
	  stw       r8, 0x118(r1)
	  stw       r8, 0x120(r1)
	  stw       r6, 0x11C(r1)
	  stw       r5, 0x124(r1)
	  stw       r8, 0x12C(r1)
	  stfs      f1, 0x130(r1)
	  stw       r4, 0x134(r1)
	  stw       r3, 0x138(r1)
	  stw       r0, 0x13C(r1)
	  stw       r0, 0x140(r1)
	  stb       r4, 0x144(r1)
	  stfs      f1, 0x148(r1)
	  stw       r4, 0x14C(r1)
	  stw       r3, 0x150(r1)
	  stw       r0, 0x154(r1)
	  stw       r0, 0x158(r1)
	  stb       r4, 0x15C(r1)
	  stb       r4, 0x128(r1)
	  stb       r8, 0x169(r1)
	  stb       r8, 0x16A(r1)
	  stfs      f0, 0x160(r1)
	  stb       r8, 0x168(r1)
	  stw       r4, 0x164(r1)
	  stb       r8, 0x16B(r1)
	  stb       r8, 0x16E(r1)
	  stb       r8, 0x16F(r1)
	  stb       r8, 0x16C(r1)
	  stb       r8, 0x16D(r1)
	  lwz       r25, 0x30(r9)
	  lwz       r3, 0x28(r9)
	  bl        -0x41D44
	  subi      r0, r3, 0x1
	  sub       r0, r0, r25
	  cntlzw    r3, r0
	  rlwinm.   r0,r3,27,24,31
	  rlwinm    r3,r3,27,5,31
	  stb       r3, 0x16A(r1)
	  beq-      .loc_0x1FC
	  lwz       r3, -0x6560(r13)
	  addi      r4, r1, 0x10C
	  li        r5, 0x2
	  bl        0x1E2FC4
	  b         .loc_0xE98

	.loc_0x1FC:
	  lwz       r3, -0x6560(r13)
	  addi      r4, r1, 0x10C
	  li        r5, 0
	  bl        0x1E2FB0
	  lwz       r3, -0x6C18(r13)
	  lbz       r0, 0x3C(r3)
	  ori       r0, r0, 0x2
	  stb       r0, 0x3C(r3)
	  lwz       r0, -0x6780(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x23C
	  addi      r3, r31, 0x2C
	  addi      r5, r31, 0x38
	  li        r4, 0x1D3
	  crclr     6, 0x6
	  bl        -0x1EEC64

	.loc_0x23C:
	  lwz       r26, -0x6780(r13)
	  lwz       r0, 0x4(r26)
	  cmplwi    r0, 0
	  bne-      .loc_0x260
	  addi      r3, r31, 0x44
	  addi      r5, r31, 0x38
	  li        r4, 0xC7
	  crclr     6, 0x6
	  bl        -0x1EEC88

	.loc_0x260:
	  lwz       r3, 0x4(r26)
	  lwz       r3, 0x4(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, -0x6A50(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0xE98
	  bl        0x5340
	  cmpwi     r3, 0
	  bne-      .loc_0xE98
	  lwz       r0, -0x6780(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x2B0
	  addi      r3, r31, 0x2C
	  addi      r5, r31, 0x38
	  li        r4, 0x1D3
	  crclr     6, 0x6
	  bl        -0x1EECD8

	.loc_0x2B0:
	  lwz       r26, -0x6780(r13)
	  cmplwi    r26, 0
	  bne-      .loc_0x2D0
	  addi      r3, r31, 0x2C
	  addi      r5, r31, 0x38
	  li        r4, 0x1DC
	  crclr     6, 0x6
	  bl        -0x1EECF8

	.loc_0x2D0:
	  lwz       r0, 0x4(r26)
	  cmplwi    r0, 0
	  bne-      .loc_0x2F0
	  addi      r3, r31, 0x44
	  addi      r5, r31, 0x38
	  li        r4, 0xCF
	  crclr     6, 0x6
	  bl        -0x1EED18

	.loc_0x2F0:
	  lwz       r3, 0x4(r26)
	  lwz       r26, 0x4(r3)
	  cmplwi    r26, 0
	  bne-      .loc_0x314
	  addi      r3, r31, 0x44
	  addi      r5, r31, 0x50
	  li        r4, 0xD1
	  crclr     6, 0x6
	  bl        -0x1EED3C

	.loc_0x314:
	  lwz       r12, 0x0(r26)
	  mr        r3, r26
	  lwz       r12, 0x40(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x344
	  addi      r3, r31, 0x74
	  addi      r5, r31, 0x38
	  li        r4, 0x177
	  crclr     6, 0x6
	  bl        -0x1EED6C

	.loc_0x344:
	  mr        r3, r26
	  bl        0x250D40
	  b         .loc_0xE98

	.loc_0x350:
	  mr        r3, r25
	  addi      r4, r31, 0x1C
	  bl        0x218508
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x8CC
	  li        r0, 0
	  lwz       r3, -0x6D0C(r13)
	  lis       r4, 0x804B
	  stw       r0, 0x64(r1)
	  subi      r4, r4, 0x4364
	  cmplwi    r0, 0
	  stw       r4, 0x58(r1)
	  stw       r0, 0x5C(r1)
	  stw       r3, 0x60(r1)
	  bne-      .loc_0x3A4
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x5C(r1)
	  b         .loc_0x42C

	.loc_0x3A4:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x5C(r1)
	  b         .loc_0x410

	.loc_0x3BC:
	  lwz       r3, 0x60(r1)
	  lwz       r4, 0x5C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x64(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x42C
	  lwz       r3, 0x60(r1)
	  lwz       r4, 0x5C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x5C(r1)

	.loc_0x410:
	  lwz       r12, 0x58(r1)
	  addi      r3, r1, 0x58
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x3BC

	.loc_0x42C:
	  lfs       f31, -0x4358(r2)
	  b         .loc_0x57C

	.loc_0x434:
	  lwz       r3, 0x60(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r26, r3
	  addi      r3, r1, 0x20
	  lwz       r12, 0x0(r26)
	  mr        r4, r26
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x20(r1)
	  addi      r4, r1, 0x4C
	  lfs       f1, 0x24(r1)
	  lfs       f0, 0x28(r1)
	  stfs      f2, 0x4C(r1)
	  lwz       r3, -0x6CF8(r13)
	  stfs      f1, 0x50(r1)
	  stfs      f0, 0x54(r1)
	  lwz       r12, 0x4(r3)
	  lwz       r12, 0x28(r12)
	  mtctr     r12
	  bctrl
	  stfs      f1, 0x50(r1)
	  mr        r3, r26
	  addi      r4, r1, 0x4C
	  li        r5, 0
	  bl        -0xDE368
	  stfs      f31, 0x200(r26)
	  stfs      f31, 0x204(r26)
	  stfs      f31, 0x208(r26)
	  stfs      f31, 0x1E4(r26)
	  stfs      f31, 0x1E8(r26)
	  stfs      f31, 0x1EC(r26)
	  lwz       r0, 0x64(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x4EC
	  lwz       r3, 0x60(r1)
	  lwz       r4, 0x5C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x5C(r1)
	  b         .loc_0x57C

	.loc_0x4EC:
	  lwz       r3, 0x60(r1)
	  lwz       r4, 0x5C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x5C(r1)
	  b         .loc_0x560

	.loc_0x50C:
	  lwz       r3, 0x60(r1)
	  lwz       r4, 0x5C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x64(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x57C
	  lwz       r3, 0x60(r1)
	  lwz       r4, 0x5C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x5C(r1)

	.loc_0x560:
	  lwz       r12, 0x58(r1)
	  addi      r3, r1, 0x58
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x50C

	.loc_0x57C:
	  lwz       r3, 0x60(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x5C(r1)
	  cmplw     r4, r3
	  bne+      .loc_0x434
	  lwz       r3, -0x6B70(r13)
	  li        r4, 0x5
	  bl        -0x32230
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x678
	  lwz       r3, -0x6B70(r13)
	  li        r4, 0x5
	  bl        -0x32280
	  lwz       r4, 0xC8(r30)
	  li        r0, 0
	  lfs       f0, -0x4358(r2)
	  addi      r3, r31, 0x138
	  stw       r3, 0x74(r1)
	  addi      r25, r1, 0x8C
	  lwz       r3, -0x6560(r13)
	  stw       r0, 0x78(r1)
	  stw       r4, 0x80(r1)
	  stfs      f0, 0x8C(r1)
	  stfs      f0, 0x90(r1)
	  stfs      f0, 0x94(r1)
	  stfs      f0, 0x98(r1)
	  stw       r0, 0x9C(r1)
	  stw       r0, 0x84(r1)
	  stw       r0, 0x7C(r1)
	  stw       r0, 0xA0(r1)
	  stw       r0, 0x88(r1)
	  stw       r0, 0xA4(r1)
	  bl        0x1E3FEC
	  lwz       r3, -0x6CD0(r13)
	  lwz       r3, 0xAC(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x630
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  stfs      f1, 0x98(r1)

	.loc_0x630:
	  lwz       r3, -0x6CF8(r13)
	  mr        r4, r25
	  li        r5, 0
	  lwz       r12, 0x4(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, -0x6CF8(r13)
	  mr        r4, r25
	  lwz       r12, 0x4(r3)
	  lwz       r12, 0x28(r12)
	  mtctr     r12
	  bctrl
	  stfs      f1, 0x90(r1)
	  addi      r4, r1, 0x74
	  lwz       r3, -0x64AC(r13)
	  bl        0x2132F4
	  b         .loc_0xE98

	.loc_0x678:
	  lwz       r3, -0x6560(r13)
	  bl        0x1E3F78
	  lis       r3, 0x804B
	  li        r8, 0
	  addi      r9, r3, 0x1148
	  li        r4, 0x1
	  lfs       f1, -0x4360(r2)
	  lis       r7, 0x804B
	  li        r0, 0xA
	  li        r3, 0x2
	  stb       r8, 0xC4(r1)
	  li        r6, 0x4D2
	  lfs       f2, -0x4358(r2)
	  li        r5, 0x32
	  lfs       f0, -0x4330(r2)
	  addi      r7, r7, 0x1094
	  stw       r9, 0xA8(r1)
	  lwz       r9, -0x6CF8(r13)
	  stw       r8, 0xAC(r1)
	  stw       r7, 0xA8(r1)
	  stfs      f2, 0xB0(r1)
	  stw       r8, 0xB4(r1)
	  stw       r8, 0xBC(r1)
	  stw       r6, 0xB8(r1)
	  stw       r5, 0xC0(r1)
	  stw       r8, 0xC8(r1)
	  stfs      f1, 0xCC(r1)
	  stw       r4, 0xD0(r1)
	  stw       r3, 0xD4(r1)
	  stw       r0, 0xD8(r1)
	  stw       r0, 0xDC(r1)
	  stb       r4, 0xE0(r1)
	  stfs      f1, 0xE4(r1)
	  stw       r4, 0xE8(r1)
	  stw       r3, 0xEC(r1)
	  stw       r0, 0xF0(r1)
	  stw       r0, 0xF4(r1)
	  stb       r4, 0xF8(r1)
	  stb       r4, 0xC4(r1)
	  stb       r8, 0x105(r1)
	  stb       r8, 0x106(r1)
	  stfs      f0, 0xFC(r1)
	  stb       r8, 0x104(r1)
	  stw       r4, 0x100(r1)
	  stb       r8, 0x107(r1)
	  stb       r8, 0x10A(r1)
	  stb       r8, 0x10B(r1)
	  stb       r8, 0x108(r1)
	  stb       r8, 0x109(r1)
	  lwz       r25, 0x30(r9)
	  lwz       r3, 0x28(r9)
	  bl        -0x422C0
	  subi      r0, r3, 0x1
	  sub       r0, r0, r25
	  cntlzw    r3, r0
	  rlwinm.   r0,r3,27,24,31
	  rlwinm    r3,r3,27,5,31
	  stb       r3, 0x106(r1)
	  beq-      .loc_0x778
	  lwz       r3, -0x6560(r13)
	  addi      r4, r1, 0xA8
	  li        r5, 0x2
	  bl        0x1E2A48
	  b         .loc_0xE98

	.loc_0x778:
	  lwz       r3, -0x6560(r13)
	  addi      r4, r1, 0xA8
	  li        r5, 0
	  bl        0x1E2A34
	  lwz       r3, -0x6C18(r13)
	  lbz       r0, 0x3C(r3)
	  ori       r0, r0, 0x2
	  stb       r0, 0x3C(r3)
	  lwz       r0, -0x6780(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x7B8
	  addi      r3, r31, 0x2C
	  addi      r5, r31, 0x38
	  li        r4, 0x1D3
	  crclr     6, 0x6
	  bl        -0x1EF1E0

	.loc_0x7B8:
	  lwz       r26, -0x6780(r13)
	  lwz       r0, 0x4(r26)
	  cmplwi    r0, 0
	  bne-      .loc_0x7DC
	  addi      r3, r31, 0x44
	  addi      r5, r31, 0x38
	  li        r4, 0xC7
	  crclr     6, 0x6
	  bl        -0x1EF204

	.loc_0x7DC:
	  lwz       r3, 0x4(r26)
	  lwz       r3, 0x4(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, -0x6A50(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0xE98
	  bl        0x4DC4
	  cmpwi     r3, 0
	  bne-      .loc_0xE98
	  lwz       r0, -0x6780(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x82C
	  addi      r3, r31, 0x2C
	  addi      r5, r31, 0x38
	  li        r4, 0x1D3
	  crclr     6, 0x6
	  bl        -0x1EF254

	.loc_0x82C:
	  lwz       r26, -0x6780(r13)
	  cmplwi    r26, 0
	  bne-      .loc_0x84C
	  addi      r3, r31, 0x2C
	  addi      r5, r31, 0x38
	  li        r4, 0x1DC
	  crclr     6, 0x6
	  bl        -0x1EF274

	.loc_0x84C:
	  lwz       r0, 0x4(r26)
	  cmplwi    r0, 0
	  bne-      .loc_0x86C
	  addi      r3, r31, 0x44
	  addi      r5, r31, 0x38
	  li        r4, 0xCF
	  crclr     6, 0x6
	  bl        -0x1EF294

	.loc_0x86C:
	  lwz       r3, 0x4(r26)
	  lwz       r26, 0x4(r3)
	  cmplwi    r26, 0
	  bne-      .loc_0x890
	  addi      r3, r31, 0x44
	  addi      r5, r31, 0x50
	  li        r4, 0xD1
	  crclr     6, 0x6
	  bl        -0x1EF2B8

	.loc_0x890:
	  lwz       r12, 0x0(r26)
	  mr        r3, r26
	  lwz       r12, 0x40(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x8C0
	  addi      r3, r31, 0x74
	  addi      r5, r31, 0x38
	  li        r4, 0x177
	  crclr     6, 0x6
	  bl        -0x1EF2E8

	.loc_0x8C0:
	  mr        r3, r26
	  bl        0x2507C4
	  b         .loc_0xE98

	.loc_0x8CC:
	  mr        r3, r25
	  addi      r4, r31, 0x10C
	  bl        0x217F8C
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xBEC
	  lwz       r3, -0x6560(r13)
	  bl        0x1E4254
	  lwz       r3, -0x6D20(r13)
	  mr        r4, r24
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  bl        -0xD6C48
	  lwz       r3, -0x6D20(r13)
	  lwz       r0, 0x50(r3)
	  cmpwi     r0, 0x2
	  beq-      .loc_0x944
	  cmpwi     r24, 0
	  bne-      .loc_0x930
	  lwz       r3, -0x6C18(r13)
	  li        r4, 0x1
	  lwz       r3, 0x58(r3)
	  bl        -0xCC07C
	  b         .loc_0xE98

	.loc_0x930:
	  lwz       r3, -0x6C18(r13)
	  li        r4, 0
	  lwz       r3, 0x58(r3)
	  bl        -0xCC090
	  b         .loc_0xE98

	.loc_0x944:
	  li        r28, 0
	  lwz       r3, -0x6D0C(r13)
	  lis       r4, 0x804B
	  stw       r28, 0x48(r1)
	  subi      r0, r4, 0x4364
	  cmplwi    r28, 0
	  stw       r0, 0x3C(r1)
	  li        r31, 0
	  stw       r28, 0x40(r1)
	  stw       r3, 0x44(r1)
	  bne-      .loc_0x988
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x40(r1)
	  b         .loc_0xB1C

	.loc_0x988:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x40(r1)
	  b         .loc_0x9F4

	.loc_0x9A0:
	  lwz       r3, 0x44(r1)
	  lwz       r4, 0x40(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x48(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0xB1C
	  lwz       r3, 0x44(r1)
	  lwz       r4, 0x40(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x40(r1)

	.loc_0x9F4:
	  lwz       r12, 0x3C(r1)
	  addi      r3, r1, 0x3C
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x9A0
	  b         .loc_0xB1C

	.loc_0xA14:
	  lwz       r3, 0x44(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  mr        r26, r3
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xA60
	  lbz       r0, 0x2B8(r26)
	  cmpwi     r0, 0x5
	  bge-      .loc_0xA60
	  addi      r3, r1, 0x170
	  addi      r31, r31, 0x1
	  stwx      r26, r3, r28
	  addi      r28, r28, 0x4

	.loc_0xA60:
	  lwz       r0, 0x48(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0xA8C
	  lwz       r3, 0x44(r1)
	  lwz       r4, 0x40(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x40(r1)
	  b         .loc_0xB1C

	.loc_0xA8C:
	  lwz       r3, 0x44(r1)
	  lwz       r4, 0x40(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x40(r1)
	  b         .loc_0xB00

	.loc_0xAAC:
	  lwz       r3, 0x44(r1)
	  lwz       r4, 0x40(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x48(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0xB1C
	  lwz       r3, 0x44(r1)
	  lwz       r4, 0x40(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x40(r1)

	.loc_0xB00:
	  lwz       r12, 0x3C(r1)
	  addi      r3, r1, 0x3C
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0xAAC

	.loc_0xB1C:
	  lwz       r3, 0x44(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x40(r1)
	  cmplw     r4, r3
	  bne+      .loc_0xA14
	  lis       r4, 0x804B
	  lis       r3, 0x804B
	  addi      r25, r1, 0x170
	  li        r24, 0
	  subi      r26, r4, 0x5D30
	  addi      r28, r3, 0x1160
	  li        r27, 0x1
	  b         .loc_0xBA8

	.loc_0xB5C:
	  lwz       r3, 0x0(r25)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C0(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xB88
	  li        r3, 0
	  bl        0x16B30
	  li        r3, 0x7
	  bl        0x16B28

	.loc_0xB88:
	  stw       r26, 0x18(r1)
	  addi      r4, r1, 0x18
	  lwz       r3, 0x0(r25)
	  stw       r27, 0x1C(r1)
	  stw       r28, 0x18(r1)
	  bl        -0xDEB18
	  addi      r25, r25, 0x4
	  addi      r24, r24, 0x1

	.loc_0xBA8:
	  cmpw      r24, r31
	  blt+      .loc_0xB5C
	  lwz       r8, -0x6C18(r13)
	  li        r0, 0x2
	  mr        r3, r29
	  mr        r4, r30
	  lbz       r7, 0x3C(r8)
	  addi      r6, r1, 0x10
	  li        r5, 0x8
	  rlwinm    r7,r7,0,27,25
	  stb       r7, 0x3C(r8)
	  sth       r0, 0x10(r1)
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0xE98

	.loc_0xBEC:
	  mr        r3, r25
	  addi      r4, r31, 0x88
	  bl        0x217C6C
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xC44
	  lwz       r3, -0x6C18(r13)
	  lbz       r0, 0x3C(r3)
	  rlwinm    r0,r0,0,27,25
	  stb       r0, 0x3C(r3)
	  lwz       r3, -0x6560(r13)
	  bl        0x1E3F24
	  li        r0, 0x3
	  mr        r3, r29
	  sth       r0, 0xC(r1)
	  mr        r4, r30
	  addi      r6, r1, 0xC
	  li        r5, 0x8
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0xE98

	.loc_0xC44:
	  mr        r3, r25
	  addi      r4, r31, 0xA4
	  bl        0x217C14
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xE98
	  lwz       r3, -0x64AC(r13)
	  bl        0x2132C0
	  lwz       r3, -0x6C18(r13)
	  lbz       r0, 0x3C(r3)
	  rlwinm    r0,r0,0,27,25
	  stb       r0, 0x3C(r3)
	  lwz       r3, -0x6B90(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0xC80
	  addi      r3, r3, 0x30

	.loc_0xC80:
	  li        r0, 0
	  lis       r4, 0x804B
	  addi      r4, r4, 0x5A4
	  stw       r0, 0x38(r1)
	  cmplwi    r0, 0
	  stw       r4, 0x2C(r1)
	  stw       r0, 0x30(r1)
	  stw       r3, 0x34(r1)
	  bne-      .loc_0xCBC
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x30(r1)
	  b         .loc_0xE40

	.loc_0xCBC:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x30(r1)
	  b         .loc_0xD28

	.loc_0xCD4:
	  lwz       r3, 0x34(r1)
	  lwz       r4, 0x30(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x38(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0xE40
	  lwz       r3, 0x34(r1)
	  lwz       r4, 0x30(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x30(r1)

	.loc_0xD28:
	  lwz       r12, 0x2C(r1)
	  addi      r3, r1, 0x2C
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0xCD4
	  b         .loc_0xE40

	.loc_0xD48:
	  lwz       r3, 0x34(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xD84
	  li        r3, 0
	  bl        0x16934
	  li        r3, 0x7
	  bl        0x1692C

	.loc_0xD84:
	  lwz       r0, 0x38(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0xDB0
	  lwz       r3, 0x34(r1)
	  lwz       r4, 0x30(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x30(r1)
	  b         .loc_0xE40

	.loc_0xDB0:
	  lwz       r3, 0x34(r1)
	  lwz       r4, 0x30(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x30(r1)
	  b         .loc_0xE24

	.loc_0xDD0:
	  lwz       r3, 0x34(r1)
	  lwz       r4, 0x30(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x38(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0xE40
	  lwz       r3, 0x34(r1)
	  lwz       r4, 0x30(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x30(r1)

	.loc_0xE24:
	  lwz       r12, 0x2C(r1)
	  addi      r3, r1, 0x2C
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0xDD0

	.loc_0xE40:
	  lwz       r3, 0x34(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x30(r1)
	  cmplw     r4, r3
	  bne+      .loc_0xD48
	  lwz       r3, -0x6D0C(r13)
	  li        r4, 0x1
	  li        r5, 0x1
	  bl        -0xB9460
	  li        r0, 0x4
	  mr        r3, r29
	  sth       r0, 0x8(r1)
	  mr        r4, r30
	  addi      r6, r1, 0x8
	  li        r5, 0x8
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0xE98:
	  psq_l     f31,0x328(r1),0,0
	  lfd       f31, 0x320(r1)
	  lmw       r24, 0x300(r1)
	  lwz       r0, 0x334(r1)
	  mtlr      r0
	  addi      r1, r1, 0x330
	  blr
	*/
}

} // namespace SingleGame
} // namespace Game
