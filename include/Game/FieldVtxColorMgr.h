#ifndef _GAME_FIELDVTXCOLORMGR_H
#define _GAME_FIELDVTXCOLORMGR_H

#include "JSystem/J3D/J3DShape.h"
#include "JSystem/J3D/J3DVertexBuffer.h"
#include "Vector3.h"
#include "types.h"
#include "CNode.h"
#include "JSystem/J3D/J3DVtxColorCalc.h"
#include "JSystem/J3D/J3DModel.h"

namespace Game {
struct FieldVtxColorInfo {
	FieldVtxColorInfo()
	{
		mColorIdx = 0xFFFF;
		_02       = 0xFFFF;
		mAlpha    = 0;
	}

	// Unused/inlined:
	void setVtxColorIndex(u16);

	u16 mColorIdx; // _00
	u16 _02;       // _02
	u8 mAlpha;     // _04
};

// fabricated, probably some other existing struct
struct FieldVtxColorControlInfo {
	/**
	 * @brief Constructor for FieldVtxColorControlInfo class.
	 *
	 * @param info The FieldVtxColorInfo object.
	 * @param normalisedDistance The normalized distance to the object's position.
	 */
	FieldVtxColorControlInfo(FieldVtxColorInfo* info, f32 normalisedDistance)
	{
		mNext = nullptr;
		mInfo = info;

		// Force normalise to 0-1
		if (normalisedDistance < 0.0f || normalisedDistance > 1.0f) {
			if (normalisedDistance < 0.0f) {
				normalisedDistance = 0.0f;
			}
			if (normalisedDistance > 1.0f) {
				normalisedDistance = 1.0f;
			}
		}

		// Convert to 0-255, then round to nearest integer
		f32 alpha       = 255.0f * normalisedDistance;
		mAlphaThreshold = alpha >= 0.0f ? alpha + 0.5f : alpha - 0.5f;
	}

	FieldVtxColorControlInfo* mNext; // _00
	FieldVtxColorInfo* mInfo;        // _04
	u8 mAlphaThreshold;              // _08
};

struct FieldVtxColorControl {
	FieldVtxColorControl(); // inlined

	FieldVtxColorControl* mNext;            // _00
	Vector3f mPosition;                     // _04
	f32 mRadius;                            // _10
	f32 mPower;                             // _14
	f32 mCurrentPower;                      // _18
	FieldVtxColorControlInfo* mControlInfo; // _1C
};

struct FieldVtxColorMgr : public J3DVtxColorCalc, public CNode {
	FieldVtxColorMgr(J3DModelData*);

	// vtable 1 (J3DVtxColorCalc)
	virtual void calc(J3DVertexBuffer*); // _08
	virtual ~FieldVtxColorMgr() { }      // _0C (weak)

	void createFieldVtxColorInfo();
	void initVtxColor();
	void setupFieldVtxColorInfoFromStrip(void*, int, int, int, int);
	void setupFieldVtxColorInfo(J3DShape*);
	FieldVtxColorControl* createNewControl(Vector3f&, f32, f32);
	void setupFieldVtxColorControl(FieldVtxColorControl*, Vector3f&, f32, f32);

	// Unused/inlined:
	void updateFieldVtxColorControl(FieldVtxColorControl*);
	void setupFieldVtxColorInfoFromFan(void*, int, int, int, int);
	void drawDebugInfo(struct Graphics&);

	inline FieldVtxColorInfo& getColorInfo(u16 i) const { return mInfo[i]; }

	inline void setFlag(u32 flag) { mMgrFlags.typeView |= flag; }
	inline void resetFlag(u32 flag) { mMgrFlags.typeView &= ~flag; }
	inline bool isFlag(u32 flag) const { return mMgrFlags.typeView & flag; }

	// _00     = VTBL1 (J3DVtxColorCalc)
	// _00-_0C = J3DVtxColorCalc
	// _0C     = VTBL2 (CNode)
	// _0C-_24 = CNode
	J3DModelData* mModelData;       // _24
	FieldVtxColorInfo* mInfo;       // _28
	int mInfoCount;                 // _2C
	FieldVtxColorControl* mControl; // _30
	f32 mSmoothingRate;             // _34
	BitFlag<u32> mMgrFlags;         // _38
};
} // namespace Game

#endif
