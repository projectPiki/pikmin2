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
		SF_0            = 0,
		SF_FORCE_USHORT = 0xFFFF,
	};

	enum FlagBitShift {
		SFBS_0 = 0,
	};

	SceneInfo();

	virtual bool isCaveFloor() { return false; } // _08 (weak)

	void setStageFlag(FlagDef, FlagBitShift);
	FlagDef getFlag(FlagBitShift) const;
	void setStageCamera() const;

	// _00 = VTBL
	FlagDef m_stageFlags;  // _04
	u8 m_gameType;         // _06
	u8 _07;                // _07
	Vector3f* _08;         // _08
	u32 _0C;               // _0C
	Vector3f* _10;         // _10
	u32 _14;               // _14
	Vector3f* _18;         // _18
	u32 _1C;               // _1C
	JGeometry::TBox3f _20; // _20
};

/**
 * @size{0x4C}
 */
struct CaveFloorInfo : public SceneInfo {

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
