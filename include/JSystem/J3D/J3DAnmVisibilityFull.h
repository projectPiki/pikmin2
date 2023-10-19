#ifndef _JSYSTEM_J3D_J3DANMVISIBILITYFULL_H
#define _JSYSTEM_J3D_J3DANMVISIBILITYFULL_H

#include "JSystem/J3D/J3DAnmBase.h"
#include "JSystem/J3D/J3DFileBlock.h"
#include "JSystem/JUtility/JUTNameTab.h"
#include "types.h"

struct J3DAnmVisibilityFullTable;

/**
 * @size{0x18}
 */
struct J3DAnmVisibilityFull : public J3DAnmBase {
	inline J3DAnmVisibilityFull()
	    : _0C(0)
	    , _0E(0)
	    , mTable(nullptr)
	    , mValues(nullptr)
	{
	}

	virtual ~J3DAnmVisibilityFull() { } // _08 (weak)
	virtual J3DAnmKind getKind() const  // _0C (weak)
	{
		return J3DAnmKind_VisibilityFull;
	}

	// _00     = VTBL
	// _00-_0C = J3DAnmBase
	u16 _0C;                           // _0C
	u16 _0E;                           // _0E
	J3DAnmVisibilityFullTable* mTable; // _10
	u8* mValues;                       // _14
};

struct J3DAnmVisibilityFullData : J3DAnmFullData {
	s32 mTableOffset;  // _10
	s32 mValuesOffset; // _14
};

struct J3DAnmVisibilityFullTable {
	u16 _00[2]; // _00
};

#endif
