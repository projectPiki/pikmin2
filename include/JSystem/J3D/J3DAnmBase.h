#ifndef _JSYSTEM_J3D_J3DANMBASE_H
#define _JSYSTEM_J3D_J3DANMBASE_H

#include "JSystem/J3D/J3DFileBlock.h"
#include "types.h"
#include "Dolphin/gx.h"

struct J3DAnmKeyTableBase;

template <typename T>
f32 J3DGetKeyFrameInterpolation(f32, J3DAnmKeyTableBase*, T*);

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
enum J3DAnmAttr { J3DAA_UNKNOWN_0 = 0, J3DAA_UNKNOWN_1 = 1, J3DAA_UNKNOWN_2 = 2, J3DAA_UNKNOWN_3 = 3 };
#pragma enumalwaysint reset

struct J3DAnmBase {
	inline J3DAnmBase()
	    : mAttribute(0)
	    , _05(0)
	    , mMaxFrame(0)
	    , mCurrentFrame(0.0f)
	{
	}

	virtual ~J3DAnmBase() { }               // _08 (weak)
	virtual J3DAnmKind getKind() const = 0; // _0C

	u8 getAttribute() const { return mAttribute; }
	s16 getFrameMax() const { return mMaxFrame; }
	f32 getFrame() const { return mCurrentFrame; }
	void setFrame(f32 frame) { mCurrentFrame = frame; }

	// _00 = VTBL
	u8 mAttribute;     // _04
	u8 _05;            // _05
	s16 mMaxFrame;     // _06
	f32 mCurrentFrame; // _08
};

/**
 * @fabricated
 */
struct J3DAnmFullData : public J3DFileBlockBase {
	u8 _08;        // _08
	u8 _09;        // _09
	s16 mFrameMax; // _0A
	u16 _0C;       // _0C
	u16 _0E;
};

struct J3DAnmKeyTableBase {

	/**
	 * @fabricated
	 * TODO: This is wrong. It's not generating the paired instructions that I was hoping it'd generate.
	 */
	inline void getColorField(f32 fTime, s16* result, s16* values)
	{
		switch (mMaxFrame) {
		case 0:
			*result = 0;
			break;
		case 1:
			*result = values[mOffset];
			break;
		default: {
			f32 interpolation = J3DGetKeyFrameInterpolation(fTime, this, values + mOffset);
			if (-1024.0f > interpolation) {
				*result = -1024;
			} else if (interpolation > 1023.0f) {
				*result = 1023;
			} else {
				*result = interpolation;
			}
			break;
		}
		}
	}

	u16 mMaxFrame; // _00
	u16 mOffset;   // _02
	u16 mType;     // _04
};

#endif
