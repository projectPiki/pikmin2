#ifndef _JSYSTEM_J3D_J3DANMVISIBILITYFULL_H
#define _JSYSTEM_J3D_J3DANMVISIBILITYFULL_H

#include "JSystem/J3D/J3DAnmBase.h"
#include "JSystem/J3D/J3DFileBlock.h"
#include "JSystem/JUT/JUTNameTab.h"
#include "types.h"

struct J3DAnmVisibilityFullTable;

/**
 * @size{0x18}
 */
struct J3DAnmVisibilityFull : public J3DAnmBase {
	inline J3DAnmVisibilityFull()
	    : _0C(0)
	    , _0E(0)
	    , _10(nullptr)
	    , _14(nullptr)
	{
	}

	virtual ~J3DAnmVisibilityFull() { } // _08 (weak)
	/**
	 * @reifiedAddress{800741CC}
	 * @reifiedFile{JSystem/J3D/J3DAnmLoader.cpp}
	 */
	virtual J3DAnmKind getKind() const // _0C (weak)
	{
		return J3DAnmKind_VisibilityFull;
	}

	u16 _0C;                        // _0C
	u16 _0E;                        // _0E
	J3DAnmVisibilityFullTable* _10; // _10
	u8* _14;                        // _14
};

struct J3DAnmVisibilityFullData : J3DAnmFullData {
	void* _10; // _10
	void* _14; // _14
};
struct J3DAnmVisibilityFullTable {
};

#endif
