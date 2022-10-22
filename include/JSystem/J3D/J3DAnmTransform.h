#ifndef _JSYSTEM_J3D_J3DANMTRANSFORM_H
#define _JSYSTEM_J3D_J3DANMTRANSFORM_H

#include "JSystem/J3D/J3DAnmBase.h"
#include "JSystem/J3D/J3DFileBlock.h"
#include "types.h"

struct J3DTransformInfo;

struct J3DAnmTransformFullTable;
struct J3DAnmTransformKeyTable;

struct J3DAnmTransform : public J3DAnmBase {
	inline J3DAnmTransform()
	    : _0C(nullptr)
	    , _10(nullptr)
	    , _14(nullptr)
	    , _18(0)
	    , _1A(0)
	    , _1C(0)
	    , _1E(0)
	{
	}

	/**
	 * @reifiedAddress{80069CE0}
	 * @reifiedFile{JSystem/J3D/J3DAnimation.cpp}
	 */
	virtual ~J3DAnmTransform() { } // _08 (weak)
	/**
	 * @reifiedAddress{80069D3C}
	 * @reifiedFile{JSystem/J3D/J3DAnimation.cpp}
	 */
	virtual J3DAnmKind getKind() const // _0C (weak)
	{
		return J3DAnmKind_Transform;
	}
	virtual void getTransform(unsigned short, J3DTransformInfo*) const = 0; // _10
	// virtual void _14() = 0;       // _14

	f32* _0C; // _0C
	s16* _10; // _10
	f32* _14; // _14
	u16 _18;  // _18
	u16 _1A;  // _1A
	u16 _1C;  // _1C
	u16 _1E;  // _1E
};

/**
 * @size{0x24}
 */
struct J3DAnmTransformFull : public J3DAnmTransform {
	inline J3DAnmTransformFull()
	    : _20(nullptr)
	{
	}

	virtual ~J3DAnmTransformFull() { }                                      // _08 (weak)
	virtual J3DAnmKind getKind() const { return J3DAnmKind_TransformFull; } // _0C (weak)
	virtual void getTransform(unsigned short, J3DTransformInfo*) const;     // _10

	J3DAnmTransformFullTable* _20;
};

struct J3DAnmTransformFullData : J3DAnmFullData {
	u8 _10[0x4]; // _10
	void* _14;   // _14
	void* _18;   // _18
	void* _1C;   // _1C
	void* _20;   // _20
};
struct J3DAnmTransformFullTable {
	u16 _00[3][6];
};

/**
 * @size{0x28}
 */
struct J3DAnmTransformKey : public J3DAnmTransform {
	inline J3DAnmTransformKey()
	    : J3DAnmTransform()
	    , _20(0)
	    , _24(nullptr)
	{
	}

	virtual ~J3DAnmTransformKey() { } // _08 (weak)
	/**
	 * @reifiedAddress{800743DC}
	 * @reifiedFile{JSystem/J3D/J3DAnmLoader.cpp}
	 */
	virtual J3DAnmKind getKind() const // _0C (weak)
	{
		return J3DAnmKind_TransformKey;
	}
	virtual void getTransform(unsigned short p1, J3DTransformInfo* p2) const { calcTransform(m_fTime, p1, p2); } // _10 (weak)

	void calcTransform(float, unsigned short, J3DTransformInfo*) const;

	int _20;                      // _20
	J3DAnmTransformKeyTable* _24; // _24
};

struct J3DAnmTransformKeyData : public J3DAnmFullData {
	u8 _10[0x4]; // _10
	void* _14;   // _14
	void* _18;   // _18
	void* _1C;   // _1C
	void* _20;   // _20
};
struct J3DAnmTransformKeyTable : public J3DAnmKeyTableBase {
};

#endif
