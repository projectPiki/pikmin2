#ifndef _PSGAME_SCENEINFO_H
#define _PSGAME_SCENEINFO_H

#include "JSystem/JGeometry.h"
#include "types.h"
#include "Vector3.h"

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
		COURSE_TUTORIALDAY1
	};

	SceneInfo();

	virtual bool isCaveFloor() { return false; } // _08 (weak)

	void setStageFlag(FlagDef, FlagBitShift);
	FlagDef getFlag(FlagBitShift) const;
	void setStageCamera() const;

	// _00 = VTBL
	u16 m_stageFlags;         // _04
	u8 m_sceneType;           // _06
	u8 m_cameras;             // _07
	Vector3f* m_cam1Position; // _08
	u32 _0C;                  // _0C
	Vector3f* m_cam2Position; // _10
	u32 _14;                  // _14
	Vector3f* m_cameraMtx;    // _18
	u32 _1C;                  // _1C
	JGeometry::TBox3f _20;    // _20
};

/**
 * @size{0x4C}
 */
struct CaveFloorInfo : public SceneInfo {
	inline CaveFloorInfo()
	{
		m_alphaType = 0;
		m_betaType  = 0;
		_40         = 0;
		m_caveID    = 0xFFFF;
		_48         = 0xFF;
		_49         = 0xFF;
	}

	virtual bool isCaveFloor() { return true; } // _08 (weak)
	virtual bool isBossFloor();                 // _0C (weak)
	// {
	// 	/*
	// 	lwz      r0, 0x3c(r3)
	// 	subfic   r0, r0, 1
	// 	cntlzw   r0, r0
	// 	srwi     r3, r0, 5
	// 	blr
	// 	*/
	// }
	virtual bool isRelaxFloor(); // _10 (weak)
	// {
	// 	/*
	// 	lwz      r0, 0x3c(r3)
	// 	subfic   r0, r0, 2
	// 	cntlzw   r0, r0
	// 	srwi     r3, r0, 5
	// 	blr
	// 	*/
	// }

	u32 getCaveNoFromID();

	// _00     = VTBL
	// _00-_38 = SceneInfo
	uint m_alphaType; // _38
	uint m_betaType;  // _3C
	u8 _40;           // _40
	u32 m_caveID;     // _44
	u8 _48;           // _48
	u8 _49;           // _49
};
} // namespace PSGame

#endif
