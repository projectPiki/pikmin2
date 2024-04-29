#ifndef _PSGAME_SCENEINFO_H
#define _PSGAME_SCENEINFO_H

#include "JSystem/JGeometry.h"
#include "types.h"
#include "Vector3.h"
#include "Matrixf.h"

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
} // namespace PSGame

#endif
