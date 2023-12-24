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
		COURSE_TUTORIAL,
		COURSE_FOREST,
		COURSE_YAKUSHIMA,
		COURSE_LAST,
		COURSE_TEST,
		CHALLENGE_MODE, // includes key get
		TWO_PLAYER_BATTLE,
		TITLE_SCREEN, // includes options high score and bonus themes
		CAVE_RESULTS,
		FILE_SELECT,
		WORLD_MAP_NORMAL,
		WORLD_MAP_NEWLEVEL,
		PIKLOPEDIA,
		ENDING_COMPLETE,
		ENDING_DEBTRESULT,
		CHALLENGE_RESULTS,
		CHALLENGE_MENU,
		TITLE_18,
		VERSUS_MENU,
		COURSE_TUTORIALDAY1,
		SCENE_COUNT, // not actual scene, used as max
	};

	SceneInfo();

	SceneInfo(SceneInfo& other) { (*this) = other; }

	inline void operator=(SceneInfo& other)
	{
		mStageFlags = other.mStageFlags;
		mSceneType  = other.mSceneType;
		mCameras    = other.mCameras;

		// stupid
		Vector3f* temp   = other.mCam1Position[0];
		mCam1Position[0] = other.mCam1Position[1];
		mCam1Position[1] = temp;

		temp             = other.mCam2Position[0];
		mCam2Position[0] = other.mCam2Position[1];
		mCam2Position[1] = temp;

		Matrixf* temp2 = other.mCameraMtx[0];
		mCameraMtx[0]  = other.mCameraMtx[1];
		mCameraMtx[1]  = temp2;

		mBounds = (other.mBounds);
	}

	virtual bool isCaveFloor() { return false; } // _08 (weak)

	void setStageFlag(FlagDef, FlagBitShift);
	FlagDef getFlag(FlagBitShift) const;
	void setStageCamera() const;

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
	uint mAlphaType; // _38 (use enum FloorAlphaType)
	uint mBetaType;  // _3C (use enum FloorBetaType)
	u8 mFloorNum;    // _40
	union {
		u32 fullView;
		u8 byteView[4];
	} mCaveID;                 // _44
	u8 _48;                    // _48
	u8 mChallengeModeStageNum; // _49
};
} // namespace PSGame

#endif
