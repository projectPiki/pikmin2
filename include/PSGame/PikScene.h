#ifndef _PSGAME_PIKSCENE_H
#define _PSGAME_PIKSCENE_H

#include "types.h"
#include "PSSystem/PSScene.h"
#include "PSSystem/PSDirector.h"
#include "PSSystem/PSSeq.h"
#include "PSGame/SceneInfo.h"
#include "JSystem/JAudio/JAI/JAInter.h"
#include "JSystem/JAudio/JAD/JADUtility.h"

namespace PSM {
struct MiddleBossSeq;
}

namespace PSGame {

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
	 * Initializes the access mode to JADUtility::MODE_0.
	 */
	PikSceneMgr()
	    : mAccessMode(JADUtility::MODE_0)
	{
	}

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
	 * @brief Checks if the current scene is a boss floor.
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

	// _00      = VTBL
	// _00-_08  = SceneMgr
	u8 mAccessMode; // _0C,  JADUtility::AccessMode
};
} // namespace PSGame

#endif
