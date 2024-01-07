#ifndef _JSYSTEM_J3D_J3DANMTEXPATTERN_H
#define _JSYSTEM_J3D_J3DANMTEXPATTERN_H

#include "JSystem/J3D/J3DAnmBase.h"
#include "JSystem/J3D/J3DFileBlock.h"
#include "JSystem/JUtility/JUTNameTab.h"
#include "types.h"

struct J3DAnmTexPatternFullTable {
	typedef u16 Row[2];

	Row mData[2];
};

struct J3DAnmTexPattern : public J3DAnmBase {
	inline J3DAnmTexPattern()
	    : _0C(nullptr)
	    , mAnmTable(nullptr)
	    , _14(0)
	    , mUpdateMaterialNum(0)
	    , mUpdateMaterialID(nullptr)
	    , mNameTab()
	{
	}

	virtual ~J3DAnmTexPattern() { }    // _08 (weak)
	virtual J3DAnmKind getKind() const // _0C (weak)
	{
		return J3DAnmKind_TexPattern;
	}

	void getTexNo(u16, u16*) const;

	inline J3DAnmTexPatternFullTable* getAnmTable(u8 idx) const { return &mAnmTable[idx]; }

	// _00     = VTBL
	// _00-_0C = J3DAnmBase
	u16* _0C;                             // _0C
	J3DAnmTexPatternFullTable* mAnmTable; // _10
	u16 _14;                              // _14
	u16 mUpdateMaterialNum;               // _16
	u16* mUpdateMaterialID;               // _18
	JUTNameTab mNameTab;                  // _1C
};

struct J3DAnmTexPatternFullData : J3DAnmFullData {
	s32 mTableOffset;            // _10
	s32 mValuesOffset;           // _14
	s32 mUpdateMaterialIDOffset; // _18
	s32 mNameTabOffset;          // _1C
};

#endif
