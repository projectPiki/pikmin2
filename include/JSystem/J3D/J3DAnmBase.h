#ifndef _JSYSTEM_J3D_J3DANMBASE_H
#define _JSYSTEM_J3D_J3DANMBASE_H

#include "JSystem/J3D/J3DFileBlock.h"
#include "types.h"
#include "Dolphin/gx.h"

/**
 * @fabricated
 */
enum J3DAnmKind {
	J3DAnmKind_Cluster        = 3,
	J3DAnmKind_ClusterFull    = 12,
	J3DAnmKind_ClusterKey     = 13,
	J3DAnmKind_Color          = 1,
	J3DAnmKind_ColorFull      = 10,
	J3DAnmKind_ColorKey       = 11,
	J3DAnmKind_TevRegKey      = 5,
	J3DAnmKind_TextureSRTKey  = 4,
	J3DAnmKind_TexPattern     = 2,
	J3DAnmKind_Transform      = 0,
	J3DAnmKind_TransformFull  = 9,
	J3DAnmKind_TransformKey   = 8,
	J3DAnmKind_VisibilityFull = 6,
	J3DAnmKind_VtxColor       = 7,
	J3DAnmKind_VtxColorFull   = 14,
	J3DAnmKind_VtxColorKey    = 15
};

#pragma enumalwaysint off
// Intended size: byte
enum J3DAnmAttr { J3DAA_UNKNOWN_0 = 0 };
#pragma enumalwaysint reset

struct J3DAnmBase {
	inline J3DAnmBase()
	    : _04(0)
	    , _05(0)
	    , m_time(0)
	    , m_fTime(0.0f)
	{
	}

	virtual ~J3DAnmBase() { }               // _08 (weak)
	virtual J3DAnmKind getKind() const = 0; // _0C

	// _00 VTBL
	u8 _04;        // _04
	u8 _05;        // _05
	s16 m_time;    // _06
	float m_fTime; // _08
};

/**
 * @fabricated
 */
struct J3DAnmFullData : J3DFileBlockBase {
	u8 _08;  // _08
	u8 _09;  // _09
	s16 _0A; // _0A
	u16 _0C; // _0C
	u16 _0E; // _0E
};

struct J3DAnmKeyTableBase {
	u16 _00; // _00
	u16 _02; // _02
	s16 _04; // _04
};

template <typename T>
float J3DGetKeyFrameInterpolation(float, J3DAnmKeyTableBase*, T*);

#endif
