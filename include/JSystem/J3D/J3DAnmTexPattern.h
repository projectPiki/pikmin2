#ifndef _JSYSTEM_J3D_J3DANMTEXPATTERN_H
#define _JSYSTEM_J3D_J3DANMTEXPATTERN_H

#include "JSystem/J3D/J3DAnmBase.h"
#include "JSystem/J3D/J3DFileBlock.h"
#include "JSystem/JUT/JUTNameTab.h"
#include "types.h"

struct J3DAnmTexPatternFullTable;

struct J3DAnmTexPattern : public J3DAnmBase {
	inline J3DAnmTexPattern()
	    : _0C(nullptr)
	    , _10(nullptr)
	    , _14(0)
	    , _16(0)
	    , _18(nullptr)
	    , _1C()
	{
	}

	virtual ~J3DAnmTexPattern() { } // _08 (weak)
	/**
	 * @reifiedAddress{80074248}
	 * @reifiedFile{JSystem/J3D/J3DAnmLoader.cpp}
	 */
	virtual J3DAnmKind getKind() const // _0C (weak)
	{
		return J3DAnmKind_TexPattern;
	}

	void getTexNo(unsigned short, unsigned short*) const;

	u16* _0C;                       // _0C
	J3DAnmTexPatternFullTable* _10; // _10
	u16 _14;                        // _14
	u16 _16;                        // _16
	u16* _18;                       // _18
	JUTNameTab _1C;                 // _1C
};

struct J3DAnmTexPatternFullData : J3DAnmFullData {
	void* _10; // _10
	void* _14; // _14
	void* _18; // _18
	void* _1C; // _1C
};
struct J3DAnmTexPatternFullTable {
};

#endif
