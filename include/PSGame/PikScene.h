#ifndef _PSGAME_PIKSCENE_H
#define _PSGAME_PIKSCENE_H

#include "types.h"
#include "JSystem/JGeometry.h"
#include "Vector3.h"
#include "Matrixf.h"
#include "PSSystem/PSScene.h"
#include "PSSystem/PSDirector.h"
#include "PSSystem/PSSeq.h"

namespace PSM {
struct MiddleBossSeq;
}

namespace PSGame {
/**
 * @size{0x38}
 */
struct SceneInfo {
	enum FlagDef {
		SCENEFLAG_Unk0 = 0,
		SCENEFLAG_Unk1 = 1,
	};

	enum FlagBitShift {
		SFBS_0 = 0,
		SFBS_1 = 1,
		SFBS_2 = 2,
	};

	enum GameType {
		SCENE_NULL = 0,
		COURSE_TUTORIAL,     // 1, Valley of Repose (not Day 1)
		COURSE_FOREST,       // 2, Awakening Wood
		COURSE_YAKUSHIMA,    // 3, Perplexing Pool
		COURSE_LAST,         // 4, Wistful Wild
		COURSE_TEST,         // 5, Test map
		CHALLENGE_MODE,      // 6, includes key get
		TWO_PLAYER_BATTLE,   // 7
		TITLE_SCREEN,        // 8, includes options high score and bonus themes
		CAVE_RESULTS,        // 9
		FILE_SELECT,         // 10
		WORLD_MAP_NORMAL,    // 11
		WORLD_MAP_NEWLEVEL,  // 12
		PIKLOPEDIA,          // 13
		ENDING_COMPLETE,     // 14, All Treasures ending
		ENDING_DEBTRESULT,   // 15, Debt Paid ending
		CHALLENGE_RESULTS,   // 16
		CHALLENGE_MENU,      // 17
		TITLE_18,            // 18
		VERSUS_MENU,         // 19
		COURSE_TUTORIALDAY1, // 20, Valley of Repose (Day 1)
		SCENE_COUNT,         // 21, not actual scene, used as max
	};

	SceneInfo();

	SceneInfo(SceneInfo& other) { (*this) = other; }

	virtual bool isCaveFloor() { return false; } // _08 (weak)

	void setStageFlag(FlagDef, FlagBitShift);
	FlagDef getFlag(FlagBitShift) const;
	void setStageCamera() const;

	inline u8 getSceneType() const { return mSceneType; }

	inline void setCam1(Vector3f* pos2, Vector3f* pos1)
	{
		mCam1Position[0] = pos1;
		mCam1Position[1] = pos2;
	}

	inline BOOL getBitShift1() { return (u8)getFlag(SFBS_1) == TRUE; }

	// _00 = VTBL
	u16 mStageFlags;            // _04
	u8 mSceneType;              // _06
	u8 mCameras;                // _07
	Vector3f* mCam1Position[2]; // _08
	Vector3f* mCam2Position[2]; // _10
	Matrixf* mCameraMtx[2];     // _18
	JGeometry::TBox3f mBounds;  // _20
};

/**
 * @size{0x4C}
 */
struct CaveFloorInfo : public SceneInfo {
	inline CaveFloorInfo()
	{
		mAlphaType             = 0;
		mBetaType              = 0;
		mFloorNum              = 0;
		mCaveID.fullView       = 0xFFFF;
		_48                    = 0xFF;
		mChallengeModeStageNum = 0xFF;
	}

	// This value is f011 in the caveinfo, it creates a very subtle echo effect on the music, the value usually depends on the cave theme.
	enum FloorAlphaType {
		AlphaType_Soil     = 0,
		AlphaType_Metal    = 1,
		AlphaType_Concrete = 2,
		AlphaType_Tile     = 3,
		AlphaType_Garden   = 4,
		AlphaType_Toy      = 5,
	};

	enum FloorBetaType {
		BetaType_Normal = 0,
		BetaType_Boss   = 1,
		BetaType_Relax  = 2,
	};

	virtual bool isCaveFloor() { return true; }                         // _08 (weak)
	virtual bool isBossFloor() { return mBetaType == BetaType_Boss; }   // _0C (weak)
	virtual bool isRelaxFloor() { return mBetaType == BetaType_Relax; } // _10 (weak)

	u8 getCaveNoFromID();

	// _00     = VTBL
	// _00-_38 = SceneInfo
	int mAlphaType; // _38 (use enum FloorAlphaType)
	int mBetaType;  // _3C (use enum FloorBetaType)
	u8 mFloorNum;   // _40
	union {
		u32 fullView;
		u8 byteView[4];
	} mCaveID;                 // _44
	u8 _48;                    // _48
	u8 mChallengeModeStageNum; // _49
};

/**
 * @struct PikScene
 * Represents a Pikmin game scene.
 * Inherits from PSSystem::Scene.
 */
struct PikScene : public PSSystem::Scene {
	/**
	 * @brief Constructs a PikScene object with the specified ID.
	 *
	 * @param id The ID of the PikScene.
	 */
	PikScene(u8 id);

	/**
	 * @brief Virtual destructor for the PikScene class.
	 */
	virtual ~PikScene(); // _0C

	/**
	 * @brief Retrieves the MiddleBossSeq object.
	 *
	 * This function returns a pointer to the MiddleBossSeq object, which represents the background music (BGM) for smaller boss sequences
	 * in the game.
	 *
	 * @return A pointer to the MiddleBossSeq object, or nullptr if the sequence is not available.
	 */
	PSM::MiddleBossSeq* getMiddleBossBgm();

	// unused/inlined:
	void getJumpMainBgm();

	// _00      = VTBL
	// _04-_24  = Scene
};

/**
 * @struct PikSceneMgr
 * Represents the manager for Pikmin game scenes.
 * Inherits from PSSystem::SceneMgr.
 * @size{0xD}
 */
struct PikSceneMgr : public PSSystem::SceneMgr {
	/**
	 * @brief Default constructor for PikSceneMgr.
	 */
	PikSceneMgr() { _10 = 0; }

	/**
	 * @brief Creates a new scene and sets it as the current scene.
	 * @param sceneInfo The scene information.
	 * @return A pointer to the created scene.
	 */
	virtual PSSystem::Scene* newAndSetCurrentScene(SceneInfo& sceneInfo);

	/**
	 * @brief Creates a new global scene and sets it as the current scene.
	 * @return A pointer to the created global scene.
	 */
	virtual PSSystem::Scene* newAndSetGlobalScene();

	/**
	 * @brief Creates a new main background music sequence.
	 * @param bmsFilePath The path to the background music file.
	 * @param soundInfo The sound information for the background music.
	 * @return A pointer to the created PSSystem::BgmSeq object.
	 */
	virtual PSSystem::BgmSeq* newMainBgm(const char* bmsFilePath, JAInter::SoundInfo& soundInfo) = 0;

	/**
	 * @brief Creates a new directed background music sequence.
	 * @param bmsFilePath The path to the background music file.
	 * @param soundInfo The sound information for the background music.
	 * @return A pointer to the created PSSystem::BgmSeq object.
	 */
	virtual PSSystem::BgmSeq* newDirectedBgm(const char* bmsFilePath, JAInter::SoundInfo& soundInfo) = 0;

	/**
	 * Creates a new automatic background music (BGM) sequence for the SceneMgr.
	 *
	 * @param conductorFileName The file name of the conductor.
	 * @param bmsFileName The file name of the BMS file.
	 * @param soundInfo The sound information.
	 * @param mode The access mode for the BMS file.
	 * @param sceneinfo The scene information.
	 * @param directorMgr The director manager.
	 * @return A pointer to the created BgmSeq object.
	 */
	virtual PSSystem::BgmSeq* newAutoBgm(const char* conductorFileName, const char* bmsFileName, JAInter::SoundInfo& soundInfo,
	                                     JADUtility::AccessMode mode, PSGame::SceneInfo& sceneinfo, PSSystem::DirectorMgrBase* directorMgr)
	    = 0;

	/**
	 * @brief Checks if the current scene is the Titan Dweevil floor.
	 * @return False.
	 */
	virtual bool curSceneIsBigBossFloor() { return false; }

	/**
	 * @brief Creates a new game scene.
	 * @param id The ID of the game scene.
	 * @param sceneInfo The scene information.
	 * @return A pointer to the created game scene.
	 */
	virtual PSSystem::Scene* newGameScene(u8 id, SceneInfo* sceneInfo) = 0;

	/**
	 * @brief Creates a new background music sequence.
	 * @param bmsFilePath The path to the background music file.
	 * @param soundInfo The sound information for the background music.
	 * @return A pointer to the created PSSystem::BgmSeq object.
	 */
	PSSystem::BgmSeq* newBgmSeq(const char* bmsFilePath, JAInter::SoundInfo& soundInfo);

	/**
	 * @brief Creates a new streaming background music sequence.
	 * @param id The ID of the background music.
	 * @param soundInfo The sound information for the background music.
	 * @return A pointer to the created PSSystem::BgmSeq object.
	 */
	PSSystem::BgmSeq* newStreamBgm(u32 id, JAInter::SoundInfo& soundInfo);

	/**
	 * Initializes the boss background music for the Pikmin scene manager.
	 *
	 * @param info The scene information.
	 * @param wScene The scene data.
	 * @return A pointer to the initialized BgmSeq object.
	 */
	PSSystem::BgmSeq* initBossBgm(SceneInfo& sceneInfo, u8* waveSceneInfo);

	/**
	 * Initializes additional background music for the Pikmin scene manager.
	 *
	 * @param info The scene information.
	 * @param scene The scene object.
	 */
	void initAdditionalBgm(SceneInfo& info, PSSystem::Scene* scene);

	/**
	 * Initializes the main background music for the Pikmin scene manager.
	 *
	 * @param info The scene information.
	 * @param wScene The scene data.
	 * @return A pointer to the initialized BgmSeq object.
	 */
	PSSystem::BgmSeq* initMainBgm(SceneInfo& info, u8* wScene);

	inline PikScene* getChildPikScene()
	{
		checkScene();
		return static_cast<PikScene*>(mScenes->mChild);
	}

	// _00      = VTBL
	// _00-_08  = SceneMgr
	u8 _10; // _10, unknown
};
} // namespace PSGame

#endif
