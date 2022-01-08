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

	/**
	 * @reifiedAddress{803381EC}
	 * @reifiedFile{plugProjectHikinoU/PSGame.cpp}
	 */
	virtual bool isCaveFloor() // _00
	{
		return false;
	}

	void setStageFlag(FlagDef, FlagBitShift);
	FlagDef getFlag(const FlagBitShift);
	void setStageCamera() const;

	FlagDef m_stageFlags; // _04
	u8 m_gameType;        // _06
	u8 _07;
	Vector3f* _08;
	u32 _0C;
	Vector3f* _10;
	u32 _14;
	Vector3f* _18;
	u32 _1C;
	JGeometry::TBox3f _20;
};

/**
 * @size{0x4C}
 */
struct CaveFloorInfo : public SceneInfo {
	/**
	 * @reifiedAddress{8015633C}
	 * @reifiedFile{src/plugProjectKandoU/singleGameSection.cpp}
	 */
	virtual bool isCaveFloor() // _00
	{
		return true;
	}
	/**
	 * @reifiedAddress{80156344}
	 * @reifiedFile{src/plugProjectKandoU/singleGameSection.cpp}
	 */
	virtual bool isBossFloor() // _04
	{
		/*
		lwz      r0, 0x3c(r3)
		subfic   r0, r0, 1
		cntlzw   r0, r0
		srwi     r3, r0, 5
		blr
		*/
	}
	/**
	 * @reifiedAddress{80156358}
	 * @reifiedFile{src/plugProjectKandoU/singleGameSection.cpp}
	 */
	virtual bool isRelaxFloor() // _08
	{
		/*
		lwz      r0, 0x3c(r3)
		subfic   r0, r0, 2
		cntlzw   r0, r0
		srwi     r3, r0, 5
		blr
		*/
	}

	u32 getCaveNoFromID();

	uint m_alphaType; // _38
	uint m_betaType;  // _3C
	u8 _40;           // _40
	u32 m_caveID;     // _44
	u8 _48;           // _48
	u8 _49;           // _49
};
} // namespace PSGame

#endif
