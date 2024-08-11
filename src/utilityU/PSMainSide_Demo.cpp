#include "PSM/Demo.h"
#include "SoundID.h"
#include "utilityU.h"
#include "PSM/Scene.h"
#include "PSSystem/PSGame.h"
#include "PSM/ObjCalc.h"
#include "PSSystem/PSMainSide_Scene.h"
#include "PSSystem/PSSystemIF.h"

static inline bool streq(const char* a, const char* b)
{
	if (a == nullptr || b == nullptr)
		return false;
	if (strcmp(a, b) == 0)
		return true;
	else
		return false;
}

namespace PSM {

inline DemoInitiator::DemoInitiator(u8* byte, const char* name, u32& astID, char* buf)
    : mASTid(astID)
{
	P2ASSERTLINE(256, name);

	mName   = name;
	mASTid  = astID;
	mBuffer = buf;
	mByte   = byte;

	mSongChosen = false;
}

inline void DemoInitiator::setDefaultValues()
{
	P2ASSERTLINE(41, isInitialized());

	mASTid = -1;
	strcpy(mBuffer, "\0");
	*mByte = -1;
}

inline bool DemoInitiator::isInitialized() { return mByte && mName; }

/**
 * @note Address: N/A
 * @note Size: 0x78
 */
void DemoInitiator::equalSet(const char*, const char*, u8)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x74
 */
void DemoInitiator::equalSetStream(const char* buffer, u32 AST_ID, u8 byte)
{
	mSongChosen = false;
	bool check  = false;
	if (mByte && mName) {
		check = true;
	}
	P2ASSERTLINE(41, check);

	mASTid = AST_ID;
	strcpy((char*)buffer, "\0");
	*mByte = byte;
}

/**
 * @note Address: N/A
 * @note Size: 0x80
 */
void DemoInitiator::equalSetEx(const char*)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x7C
 */
void DemoInitiator::equalSetExStream(const char*, bool, u32, u8)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x58
 */
void DemoInitiator::is(const char*)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x7C
 */
void DemoInitiator::numberSet(const char*, const char*, u8)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x4C
 */

inline void DemoInitiator::setDefault(const char* comp, u32 id, bool extraCondition)
{
	if (extraCondition && !mSongChosen && strcmp(mName, comp) == 0) {
		mSongChosen = true;
		mASTid      = id;
		*mByte      = -1;
		// OSReport("demo_arg is value: %lu\n", demo_arg);
	}
}

/**
 * @note Address: 0x80463FE8
 * @note Size: 0x5C
 */
Demo::Demo()
{
	_18               = 0;
	mDoStartWithAudio = 1;
	mMovieStartSE     = (SoundID)-1;
	mMovieEndSE       = (SoundID)-1;
	mFuncptr          = nullptr;
};

/**
 * @note Address: 0x80464044
 * @note Size: 0x20C
 */
void Demo::init(Vec* cam1pos, Vec* cam2pos, Mtx mtx, DemoArg arg)
{
	PSGame::SceneInfo* info = new PSGame::SceneInfo;
	info->setStageFlag(PSGame::SceneInfo::SCENEFLAG_Unk1, PSGame::SceneInfo::SFBS_2);
	info->mCameras         = 1;
	info->mCam1Position[0] = (Vector3f*)cam1pos;
	info->mCam2Position[0] = (Vector3f*)cam2pos;
	info->mCameraMtx[0]    = (Matrixf*)mtx;
	info->mSceneType       = 255;

	u8 unk                = 255;
	PSSystem::BgmSeq* seq = initiate(arg, &unk);
	mCurrentDemoName      = new char[strlen(arg.mName) + 1];
	strcpy(mCurrentDemoName, arg.mName);

	Scene_Demo* scene = new Scene_Demo(unk, info);
	P2ASSERTLINE(199, scene);

	PSSystem::SceneMgr* mgr = PSSystem::getSceneMgr();
	PSSystem::validateSceneMgr(mgr);
	PSM::Scene_Game* scene2 = static_cast<PSM::Scene_Game*>(mgr->getChildScene());
	scene2->adaptChildScene(scene);
	P2ASSERTLINE(203, scene);

	if (seq) {
		scene->appendSeq(seq);
	}

	initDemoScene(arg, scene);
	_18 = 1;
	demo1stLoadSync();
}

/**
 * @note Address: 0x80464250
 * @note Size: 0xEC
 */
void Demo::demo1stLoadSync()
{
	PSSystem::SceneMgr* mgr = PSSystem::getSceneMgr();
	PSSystem::validateSceneMgr(mgr);
	PSM::Scene_Game* scene = static_cast<PSM::Scene_Game*>(mgr->getChildScene());
	PSSystem::checkChildScene2(scene);
	scene->mChild->scene1stLoadSync();
}

/**
 * @note Address: 0x8046433C
 * @note Size: 0x48
 */
void Demo::initDemoScene(PSM::DemoArg& arg, PSM::Scene_Demo* scene)
{
	if (!strcmp(arg.mName, "s21_dayend_takeoff")) {
		scene->mGate = true;
	}
}

/**
 * @note Address: 0x80464384
 * @note Size: 0x1DA4
 */
PSSystem::BgmSeq* Demo::initiate(DemoArg demoArg, u8* unk)
{
	PSSystem::BgmSeq* seq;
	u32 AST_ID;
	char bmsFilePath[32];
	JAInter::SoundInfo audio_info = { 0, 127, 3, 0, 0x3F800000, 0x3C000000 };

	seq            = nullptr;
	bmsFilePath[0] = '\0';
	AST_ID         = PSSE_NULL;

	DemoInitiator init = DemoInitiator(unk, demoArg.mName, AST_ID, bmsFilePath);
	init.setDefaultValues();

	init.setDefault("s02_dayend_result", P2_STREAM_SOUND_ID(PSSTR_RESULT));
	init.setDefault("s01_dayend", demoArg.mBgmID);
	init.setDefault("s03_orimadown", P2_STREAM_SOUND_ID(PSSTR_PLAYERDOWN));
	init.setDefault("s05_pikminzero", P2_STREAM_SOUND_ID(PSSTR_ANNIHI));
	init.setDefault("s11_dope_first_b", P2_STREAM_SOUND_ID(PSSTR_TREASURE_GET));
	init.setDefault("s11_dope_first_r", P2_STREAM_SOUND_ID(PSSTR_TREASURE_GET));
	init.setDefault("s11_dopebin_first_b", P2_STREAM_SOUND_ID(PSSTR_DOPING));
	init.setDefault("s11_dopebin_first_r", P2_STREAM_SOUND_ID(PSSTR_DOPING));

	if (!streq("s01_dayend", init.mName)) {
		bool is_key = demoArg.mCameraName && streq(demoArg.mCameraName, "key");

		init.setDefault("s17_suck_equipment", demoArg.mBgmID, !is_key);
		init.setDefault("s17_suck_equipment", P2_STREAM_SOUND_ID(PSSTR_KEYGET), is_key);

		init.setDefault("s22_cv_suck_equipment", demoArg.mBgmID, !is_key);
		init.setDefault("s22_cv_suck_equipment", P2_STREAM_SOUND_ID(PSSTR_KEYGET), is_key);

		init.setDefault("s10_suck_treasure", P2_STREAM_SOUND_ID(PSSTR_TREASURE_GET), !is_key);
		init.setDefault("s10_suck_treasure", P2_STREAM_SOUND_ID(PSSTR_KEYGET), is_key);

		init.setDefault("s22_cv_suck_treasure", P2_STREAM_SOUND_ID(PSSTR_KEYGET), is_key);
		init.setDefault("s22_cv_suck_treasure", P2_STREAM_SOUND_ID(PSSTR_TREASURE_GET), !is_key);
	}

	init.setDefault("s04_dayend_orimadown", P2_STREAM_SOUND_ID(PSSTR_ZENMETSU_DAYEND));
	init.setDefault("s06_dayend_pikminzero", P2_STREAM_SOUND_ID(PSSTR_ZENMETSU_DAYEND));

	init.setDefault("g1A_red_doping", P2_STREAM_SOUND_ID(PSSTR_DOPED));
	init.setDefault("g1A_red_doping", P2_STREAM_SOUND_ID(PSSTR_DOPED));
	init.setDefault("g1B_black_doping", P2_STREAM_SOUND_ID(PSSTR_BLACK_DOPING));
	init.setDefault("g02_boot_onyonR", P2_STREAM_SOUND_ID(PSSTR_ONYONBOOT));
	init.setDefault("g1E_boot_onyonY", P2_STREAM_SOUND_ID(PSSTR_ONYONBOOT));
	init.setDefault("g20_boot_onyonB", P2_STREAM_SOUND_ID(PSSTR_ONYONBOOT));
	init.setDefault("g03_meet_redpikmin", P2_STREAM_SOUND_ID(PSSTR_PIKMIN_MEET));
	init.setDefault("g1F_meet_yellowpikmin", P2_STREAM_SOUND_ID(PSSTR_PIKMIN_MEET));
	init.setDefault("g21_meet_bluepikmin", P2_STREAM_SOUND_ID(PSSTR_PIKMIN_MEET));
	init.setDefault("g24_meet_blackpikmin", P2_STREAM_SOUND_ID(PSSTR_PIKMIN_MEET));
	init.setDefault("g27_meet_whitepikmin", P2_STREAM_SOUND_ID(PSSTR_PIKMIN_MEET));
	init.setDefault("g33_camera_demo", P2_STREAM_SOUND_ID(PSSTR_CAMERA_DEMO));

	if (PSMGetGameSceneA()->isCave()) {
		init.setDefault("s09_holein", P2_STREAM_SOUND_ID(PSSTR_IN_HOLE_U));
	} else {
		init.setDefault("s09_holein", P2_STREAM_SOUND_ID(PSSTR_IN_HOLE));
	}

	init.setDefault("s16_find_item_00", P2_STREAM_SOUND_ID(PSSTR_TREASURE_GLAD)); // brute knuckles
	init.setDefault("s16_find_item_01", P2_STREAM_SOUND_ID(PSSTR_TREASURE_GLAD)); // dream material
	init.setDefault("s16_find_item_02", P2_STREAM_SOUND_ID(PSSTR_TREASURE_GLAD)); // amplified amplifier
	init.setDefault("s16_find_item_03", P2_STREAM_SOUND_ID(PSSTR_TREASURE_GLAD)); // professional noisemaker
	init.setDefault("s16_find_item_04", P2_STREAM_SOUND_ID(PSSTR_TREASURE_GLAD)); // stellar orb
	init.setDefault("s16_find_item_05", P2_STREAM_SOUND_ID(PSSTR_TREASURE_GLAD)); // justice alloy
	init.setDefault("s16_find_item_06", P2_STREAM_SOUND_ID(PSSTR_TREASURE_GLAD)); // forged courage
	init.setDefault("s16_find_item_07", P2_STREAM_SOUND_ID(PSSTR_TREASURE_GLAD)); // repugnant appendage
	init.setDefault("s16_find_item_08", P2_STREAM_SOUND_ID(PSSTR_TREASURE_GLAD)); // prototype detector
	init.setDefault("s16_find_item_09", P2_STREAM_SOUND_ID(PSSTR_TREASURE_GLAD)); // five man napsack
	init.setDefault("s16_find_item_10", P2_STREAM_SOUND_ID(PSSTR_TREASURE_GLAD)); // spherical atlas
	init.setDefault("s16_find_item_11", P2_STREAM_SOUND_ID(PSSTR_TREASURE_GLAD)); // geographic projection
	init.setDefault("s16_find_item_12", P2_STREAM_SOUND_ID(PSSTR_TREASURE_GLAD)); // the key

	init.setDefault("s0C_cv_escape", P2_STREAM_SOUND_ID(PSSTR_OUT_HOLE));

	init.setDefault("g01_pick_me", P2_STREAM_SOUND_ID(PSSTR_MYSTERY));

	init.setDefault("g04_find_treasure", P2_STREAM_SOUND_ID(PSSTR_TREASURE_GLAD));

	init.setDefault("g05_find_cave_f_01", P2_STREAM_SOUND_ID(PSSTR_MYSTERY)); // hole of beasts
	init.setDefault("g05_find_cave_f_02", P2_STREAM_SOUND_ID(PSSTR_MYSTERY)); // white flower garden
	init.setDefault("g05_find_cave_f_03", P2_STREAM_SOUND_ID(PSSTR_MYSTERY)); // bulblax kingdom
	init.setDefault("g05_find_cave_f_04", P2_STREAM_SOUND_ID(PSSTR_MYSTERY)); // snagret hole
	init.setDefault("g05_find_cave_l_01", P2_STREAM_SOUND_ID(PSSTR_MYSTERY)); // cavern of chaos
	init.setDefault("g05_find_cave_l_02", P2_STREAM_SOUND_ID(PSSTR_MYSTERY)); // hole of heroes
	init.setDefault("g05_find_cave_l_03", P2_STREAM_SOUND_ID(PSSTR_MYSTERY)); // dream den
	init.setDefault("g05_find_cave_t_01", P2_STREAM_SOUND_ID(PSSTR_MYSTERY)); // emergence cave
	init.setDefault("g05_find_cave_t_02", P2_STREAM_SOUND_ID(PSSTR_MYSTERY)); // subterranean complex
	init.setDefault("g05_find_cave_t_03", P2_STREAM_SOUND_ID(PSSTR_MYSTERY)); // frontier cavern
	init.setDefault("g05_find_cave_y_01", P2_STREAM_SOUND_ID(PSSTR_MYSTERY)); // citadel of spiders
	init.setDefault("g05_find_cave_y_02", P2_STREAM_SOUND_ID(PSSTR_MYSTERY)); // gluttons kitchen
	init.setDefault("g05_find_cave_y_03", P2_STREAM_SOUND_ID(PSSTR_MYSTERY)); // shower room
	init.setDefault("g05_find_cave_y_04", P2_STREAM_SOUND_ID(PSSTR_MYSTERY)); // submerged castle

	init.setDefault("g0A_cv_find_hole", P2_STREAM_SOUND_ID(PSSTR_MYSTERY));
	init.setDefault("g0B_cv_find_fountain", P2_STREAM_SOUND_ID(PSSTR_MYSTERY));

	init.setDefault("g18_find_gate", P2_STREAM_SOUND_ID(PSSTR_GLAD));
	init.setDefault("g19_find_rock", P2_STREAM_SOUND_ID(PSSTR_MYSTERY));
	init.setDefault("g2D_red_extract", P2_STREAM_SOUND_ID(PSSTR_TREASURE_GLAD));
	init.setDefault("g2E_black_extract", P2_STREAM_SOUND_ID(PSSTR_TREASURE_GLAD));
	init.setDefault("g34_yellow_extract", P2_STREAM_SOUND_ID(PSSTR_PIKMIN_GLAD));
	init.setDefault("g37_get_louie", P2_STREAM_SOUND_ID(PSSTR_TREASURE_GLAD));
	init.setDefault("g38_find_whitepom", P2_STREAM_SOUND_ID(PSSTR_MYSTERY));
	init.setDefault("g39_find_blackpom", P2_STREAM_SOUND_ID(PSSTR_MYSTERY));

	init.setDefault("x01_gamestart", P2_STREAM_SOUND_ID(PSSTR_START_DEMO_TUTORIAL));
	init.setDefault("x02_watch_red_pikmin", P2_STREAM_SOUND_ID(PSSTR_WATCH_PIKMIN));
	init.setDefault("x06_join", P2_STREAM_SOUND_ID(PSSTR_JOIN));
	init.setDefault("x12_drain_water", P2_STREAM_SOUND_ID(PSSTR_GLAD));
	init.setDefault("x10_find_yellow_onyon", P2_STREAM_SOUND_ID(PSSTR_ONYON));
	init.setDefault("x11_find_blue_onyon", P2_STREAM_SOUND_ID(PSSTR_BLUE_ONYON));
	init.setDefault("x16_hiba", P2_STREAM_SOUND_ID(PSSTR_HIBA));
	init.setDefault("x13_exp_leafchappy", P2_STREAM_SOUND_ID(PSSTR_GLAD));
	init.setDefault("x20_blackman", P2_STREAM_SOUND_ID(PSSTR_KUROIHITO));

	init.setDefault("s13_pikmin_supply", P2_STREAM_SOUND_ID(PSSTR_EXPLAIN));
	init.setDefault("s0B_cv_coursein", P2_STREAM_SOUND_ID(PSSTR_FLOOR_IN));
	init.setDefault("s0E_return_cave", P2_STREAM_SOUND_ID(PSSTR_RETURN));

	init.setDefault("e00_E3_cavestart", P2_STREAM_SOUND_ID(PSSTR_CHALLENGE_START));

	init.setDefault("g07_cv_gamestart", P2_STREAM_SOUND_ID(PSSTR_UNDERGROUND_START));
	init.setDefault("g08_first_return", P2_STREAM_SOUND_ID(PSSTR_RETURN_E));
	init.setDefault("g09_first_sunset", P2_STREAM_SOUND_ID(PSSTR_EXPLAIN));
	init.setDefault("g16_100_pikmin", P2_STREAM_SOUND_ID(PSSTR_EXPLAIN));
	init.setDefault("g16_95_pikmin", P2_STREAM_SOUND_ID(PSSTR_EXPLAIN));
	init.setDefault("g26_inout_black", P2_STREAM_SOUND_ID(PSSTR_EXPLAIN_90));
	init.setDefault("g29_inout_white", P2_STREAM_SOUND_ID(PSSTR_EXPLAIN_60));
	init.setDefault("g2B_white_poison", P2_STREAM_SOUND_ID(PSSTR_HIBA));
	init.setDefault("g2C_inout_red", P2_STREAM_SOUND_ID(PSSTR_EXPLAIN));
	init.setDefault("g36_find_louie", P2_STREAM_SOUND_ID(PSSTR_HIBA));

	init.setDefault("x01_coursein_forest", P2_STREAM_SOUND_ID(PSSTR_START_DEMO_OTHER));
	init.setDefault("x01_coursein_yakushima", P2_STREAM_SOUND_ID(PSSTR_START_DEMO_OTHER));
	init.setDefault("x01_coursein_last", P2_STREAM_SOUND_ID(PSSTR_START_DEMO_OTHER));
	init.setDefault("x04_exp_y", P2_STREAM_SOUND_ID(PSSTR_EXPLAIN_75));
	init.setDefault("x05_louiestart", P2_STREAM_SOUND_ID(PSSTR_LUGIE_START));
	init.setDefault("x07_first_recovery", P2_STREAM_SOUND_ID(PSSTR_EXPLAIN_75));
	init.setDefault("x08_cv_suck_carcass", P2_STREAM_SOUND_ID(PSSTR_EXPLAIN));
	init.setDefault("x09_exp_detector", P2_STREAM_SOUND_ID(PSSTR_EXPLAIN));
	init.setDefault("x14_white_dig", P2_STREAM_SOUND_ID(PSSTR_EXPLAIN));

	init.setDefault("g32_get_map", P2_STREAM_SOUND_ID(PSSTR_EXPLAIN_60));
	init.setDefault("g35_president_gamestart", P2_STREAM_SOUND_ID(PSSTR_EXPLAIN));

	init.setDefault("x15_exp_x", P2_STREAM_SOUND_ID(PSSTR_EXPLAIN));
	init.setDefault("x17_join_guide", P2_STREAM_SOUND_ID(PSSTR_EXPLAIN));
	init.setDefault("x18_exp_pellet", P2_STREAM_SOUND_ID(PSSTR_EXPLAIN));

	init.setDefault("x03_find_red_onyon", P2_STREAM_SOUND_ID(PSSTR_RED_ONYON));

	if (streq("s02_dayend_result", init.mName)) {
		audio_info.mVolume.byteView[0] -= 15;
	}
	// clang-format off
	if (streq("s10_suck_treasure",        init.mName) ||
		streq("s11_dope_first_b",         init.mName) ||
		streq("s11_dope_first_r",         init.mName) ||
		streq("s11_dopebin_first_b",      init.mName) ||
		streq("s11_dopebin_first_r",      init.mName) ||
		streq("s17_suck_equipment",       init.mName) ||
		streq("s22_cv_suck_equipment",    init.mName) ||
		streq("s22_cv_suck_treasure",     init.mName) ||
		streq("x19_vs_bedama",            init.mName))
	// clang-format on
	{
		// suck up something
		mDoStartWithAudio = false;
		mMovieStartSE     = PSSE_EV_HOME_PELLET_BACUUM;

	} else if (streq("g2F_appear_hole", init.mName)) {
		// change BGM in challenge mode when hole/fountain appear
		mMovieStartSE = PSSE_SY_WORK_FINISH;
		mFuncptr      = PSChangeBgm_ChallengeGame;

	} else if (streq("g30_appear_fountain", init.mName)) {
		// change BGM in challenge mode when hole/fountain appear
		mFuncptr = PSChangeBgm_ChallengeGame;

	} else if (streq("x20_blackman", init.mName) || streq("x03_find_red_onyon", init.mName)) {
		// waterwraith and red onyon cutscenes don't start with audio
		mDoStartWithAudio = false;

	} else if (streq("s01_dayend", init.mName)) {
		// modify day end cutscene sound effects based on which captain's active
		switch ((u32)demoArg.mCameraName) {
		case 1:
			mMovieStartSE = PSSE_PL_DAYEND_KAISAN_LUI;
			break;
		case 2:
			mMovieStartSE = PSSE_PL_DAYEND_KAISAN_SHA;
			break;
		default:
		case 0:
			mMovieStartSE = PSSE_PL_DAYEND_KAISAN_ORI;
			break;
		}
	}

	if (streq("x20_blackman", init.mName)) {
		// load up tyre falling sound effect for waterwraith
		mMovieStartSE = PSSE_EN_TIRE_FALL;
	}

	if (AST_ID != PSSE_NULL) {
		// we have streamed music, play it
		PSGame::PikSceneMgr* scene_mgr = (PSGame::PikSceneMgr*)PSSystem::getSceneMgr();
		PSSystem::validateSceneMgr(scene_mgr);

		seq  = scene_mgr->newStreamBgm(AST_ID, audio_info);
		*unk = -1;

	} else if (bmsFilePath[0] != '\0') {
		// we have bgm, play it
		PSGame::PikSceneMgr* scene_mgr = (PSGame::PikSceneMgr*)PSSystem::getSceneMgr();
		PSSystem::validateSceneMgr(scene_mgr);

		seq = scene_mgr->newBgmSeq(bmsFilePath, audio_info);
		P2ASSERTLINE(632, seq);
	}
	return seq;
}

/**
 * @note Address: 0x80466128
 * @note Size: 0x184
 */
Demo::~Demo()
{
	becomeSceneCamera();
	PSSystem::Scene* scene = PSMGetSceneMgrCheck()->getChildScene();
	PSSystem::checkChildScene(scene);
	scene = scene->getChildScene();

	PSMGetSceneMgrCheck()->deleteScene(scene);

	delete mCurrentDemoName;
	delete scene;
}

/**
 * @note Address: N/A
 * @note Size: 0x124
 */
void Demo::becomeDemoCamera()
{
	// not quite right but needs the checkGameScene inline for rodata purposes
	PSM::Scene_Game* scene = static_cast<PSM::Scene_Game*>(PSMGetChildScene());
	PSSystem::checkGameScene(scene);
	scene->becomeSceneCamera();
	PSSystem::SingletonBase<ObjCalcBase>::getInstance()->setMode(ObjCalcBase::OBJCALC_0);
}

/**
 * @note Address: 0x804662AC
 * @note Size: 0x6C0
 */
void Demo::onDemoTop()
{
	Scene_Game* scene = static_cast<Scene_Game*>(PSMGetChildScene());
	PSSystem::checkChildScene2(scene);
	static_cast<Scene_Game*>(scene->getChildScene())->becomeSceneCamera();

	PSSystem::SingletonBase<ObjCalcBase>::getInstance()->setMode(ObjCalcBase::OBJCALC_1);

	static_cast<Scene_Game*>(PSMGetChildScene())->pauseOn_Demo();

	scene                     = static_cast<Scene_Game*>(PSMGetChildScene());
	PSSystem::EnvSeMgr* envse = scene->getEnvSe();
	if (envse) {
		envse->mReservator.mState = 0;
	}

	scene = static_cast<PSM::Scene_Game*>(PSMGetChildScene());
	PSSystem::checkGameScene(scene);
	char* name = mCurrentDemoName;
	if (!strcmp(name, "s01_dayend") || !strcmp(name, "s02_dayend_result") || !strcmp(name, "s04_dayend_orimadown")
	    || !strcmp(name, "s05_pikminzero") || !strcmp(name, "s06_dayend_pikminzero") || !strcmp(name, "s09_holein")
	    || !strcmp(name, "s0C_cv_escape") || !strcmp(name, "s12_cv_giveup") || !strcmp(name, "s21_dayend_takeoff")) {
		scene->mSeqMgr.stopAllSound(15);
		if (envse) {
			envse->off();
			if (scene->isCave() && !static_cast<Scene_Cave*>(scene)->isPollutUp()) {
				envse->on(PSSE_EV_POLUTION_MIX01, true);
				envse->on(PSSE_EV_POLUTION_MIX02, true);
			}
			envse->off(PSSE_MP_BIRD_NIGHT01_MIX, true);
			envse->off(PSSE_MP_BIRD_NIGHT02_MIX, true);
		}
	} else {
		scene->mSeqMgr.pauseOnAllSeq(PSSystem::SeqBase::MODE1);
		if (envse) {
			envse->setAllPauseFlag(2);
		}
	}

	if (!strcmp(name, "x19_vs_bedama")) {
		scene->mSeqMgr.stopAllSound(15);
	} else if (!strcmp(name, "x06_join")) {
		PSSystem::SceneMgr* mgr = PSMGetSceneMgrCheck();
		PSSystem::SeqBase* seq  = PSSystem::getSeqDataCheck(mgr, 1);
		P2ASSERTLINE(731, seq);
		seq->stopSeq(5);
	} else if (!strcmp(name, "x01_gamestart")) {
		PSGame::SoundTable::CategoryMgr* cat              = PSSystem::SingletonBase<PSGame::SoundTable::CategoryMgr>::getInstance();
		PSSystem::getSoundCategoryInfo(cat, 5)->mDisabled = true;
		PSSystem::getSoundCategoryInfo(cat, 2)->mDisabled = true;
	}

	if (mMovieStartSE != 0xffffffff) {
		PSSystem::spSysIF->playSystemSe(mMovieStartSE, 0);
	}

	PSSystem::checkChildScene2(scene);
	PSSystem::SeqBase* seq = scene->mChild->mSeqMgr.getFirstSeq();
	if (seq && mDoStartWithAudio) {
		PSSystem::checkChildScene2(scene);
		scene->mChild->startMainSeq();
	}
}

/**
 * @note Address: 0x8046696C
 * @note Size: 0x104
 */
void Demo::becomeSceneCamera()
{
	static_cast<PSM::Scene_Game*>(PSMGetChildScene())->becomeSceneCamera();
	PSSystem::SingletonBase<ObjCalcBase>::getInstance()->setMode(ObjCalcBase::OBJCALC_0);
}

/**
 * @note Address: 0x80466A70
 * @note Size: 0xFC
 */
void Demo::onDemoFadeoutStart(u32 flag)
{
	PSSystem::SceneMgr* mgr = PSSystem::getSceneMgr();
	PSSystem::validateSceneMgr(mgr);
	PSM::Scene_Game* scene = static_cast<PSM::Scene_Game*>(mgr->getChildScene());
	PSSystem::stopChildSeq(scene, flag - 2);
}

/**
 * @note Address: 0x80466B6C
 * @note Size: 0x664
 */
void Demo::onDemoEnd()
{
	becomeSceneCamera();

	static_cast<PSM::Scene_Game*>(PSMGetChildScene())->pauseOff_Demo();
	PSSystem::Scene* childScene = PSMGetSceneMgrCheck()->getChildScene();

	// goofy ass game
	for (int i = 0; i < 1; i++) {
		PSSystem::checkGameScene(childScene);
	}

	SceneBase* scene = (SceneBase*)childScene;

	const char* name          = mCurrentDemoName;
	PSSystem::EnvSeMgr* envse = scene->getEnvSe();
	if (envse) {
		if (!strcmp(name, "s01_dayend") || !strcmp(name, "s02_dayend_result") || !strcmp(name, "s04_dayend_orimadown")
		    || !strcmp(name, "s05_pikminzero") || !strcmp(name, "s06_dayend_pikminzero") || !strcmp(name, "s09_holein")
		    || !strcmp(name, "s0C_cv_escape") || !strcmp(name, "s12_cv_giveup") || !strcmp(name, "s21_dayend_takeoff")) {
			envse->off();
			if (static_cast<Scene_Game*>(scene)->isCave() && !static_cast<Scene_Cave*>(scene)->isPollutUp()) {
				envse->on(PSSE_EV_POLUTION_MIX01, true);
				envse->on(PSSE_EV_POLUTION_MIX02, true);
			}
			envse->setAllPauseFlag(false);
		} else {
			envse->reservePauseOff();
		}
	}

	if (!strcmp(name, "x06_join")) {
		static_cast<PSM::Scene_Game*>(PSMGetChildScene())->startMainSeq();
	} else if (!strcmp(name, "g03_meet_redpikmin")) {
		PSSystem::SceneMgr* mgr = PSMGetSceneMgrCheck();
		PSSystem::SeqBase* seq  = PSSystem::getSeqDataCheck(mgr, 1);
		P2ASSERTLINE(834, seq);
		seq->startSeq();
	} else if (!strcmp(name, "x20_blackman")) {
		PSSystem::SceneMgr* mgr = PSMGetSceneMgrCheck();
		PSSystem::SeqBase* seq  = PSSystem::getSeqDataCheck(mgr, 1);
		P2ASSERTLINE(838, seq);
		seq->startSeq();
	}
	scene->mSeqMgr.reservePauseOffAllSeq();

	if (mFuncptr) {
		mFuncptr();
	}

	if (mMovieEndSE != 0xffffffff) {
		PSSystem::spSysIF->playSystemSe(mMovieEndSE, 0);
	}
}

/**
 * @note Address: 0x804671D0
 * @note Size: 0x268
 */
void Demo::onMessageEnd(int id)
{
	char* name = mCurrentDemoName;
	if (!strcmp(name, "x01_gamestart")) {
		// Unmute enemies and pikmin after first text box of opening cutscene
		PSGame::SoundTable::CategoryMgr* cat              = PSSystem::SingletonBase<PSGame::SoundTable::CategoryMgr>::getInstance();
		PSSystem::getSoundCategoryInfo(cat, 5)->mDisabled = false;
		PSSystem::getSoundCategoryInfo(cat, 2)->mDisabled = false;

		PSSystem::SceneMgr* mgr = PSSystem::getSceneMgr();
		PSSystem::validateSceneMgr(mgr);
		PSM::Scene_Game* scene = static_cast<PSM::Scene_Game*>(mgr->getChildScene());
		PSSystem::checkChildScene(scene);
		scene->mChild->stopMainSeq(5);
	} else if (!strcmp(name, "x03_find_red_onyon") && id == 0) {
		// After the first text box of find red onion cutscene, let the music start playing
		PSSystem::SceneMgr* mgr = PSSystem::getSceneMgr();
		PSSystem::validateSceneMgr(mgr);
		PSM::Scene_Game* scene = static_cast<PSM::Scene_Game*>(mgr->getChildScene());
		PSSystem::checkChildScene(scene);
		scene->mChild->startMainSeq();
	}
}

} // namespace PSM

/**
 * @note Address: 0x80467438
 * @note Size: 0xE4
 */
void PSMCancelToPauseOffMainBgm()
{
	PSSystem::SceneMgr* mgr = PSSystem::getSceneMgr();
	PSSystem::validateSceneMgr(mgr);
	PSM::Scene_Game* scene = static_cast<PSM::Scene_Game*>(mgr->getChildScene());
	scene->mSeqMgr.cancelPauseOffAllSeq();
	PSSystem::EnvSeMgr* se = scene->getEnvSe();
	if (se) {
		se->mReservator.mState = 0;
	}
}

/**
 * @note Address: 0x8046751C
 * @note Size: 0xEC
 *
 * @note This should be weak and in the same header as Scene_Game, but it refuses
 * to spawn as a weak function and not inline in functions above if so, even with FORCE_DONT_INLINE.
 * So here it lives.
 */
PSM::Scene_Game* PSMGetGameSceneA()
{
	PSSystem::SceneMgr* mgr = PSSystem::getSceneMgr();
	PSSystem::validateSceneMgr(mgr);
	PSM::Scene_Game* scene = static_cast<PSM::Scene_Game*>(mgr->getChildScene());
	PSSystem::checkGameScene(scene);
	return scene;
}
