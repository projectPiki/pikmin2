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
		_00 = 0xFFFF;
		_02 = 0xFFFF;
		_04 = 0;
	}

	// Unused/inlined:
	void setVtxColorIndex(u16);

	u16 _00; // _00
	u16 _02; // _02
	u8 _04;  // _04
};

// fabricated, probably some other existing struct
struct FieldVtxColorControlInfo {
	FieldVtxColorControlInfo(FieldVtxColorInfo* info, f32 p1)
	{
		mNext = nullptr;
		mInfo = info;
		if (p1 < 0.0f || p1 > 1.0f) {
			if (p1 < 0.0f) {
				p1 = 0.0f;
			}
			if (p1 > 1.0f) {
				p1 = 1.0f;
			}
		}

		f32 val2 = 255.0f * p1;
		f32 val;
		if (val2 >= 0.0f) {
			val = 0.5f + val2;
		} else {
			val = val2 - 0.5f;
		}
		_08 = val;
	}

	FieldVtxColorControlInfo* mNext; // _00
	FieldVtxColorInfo* mInfo;        // _04
	u8 _08;                          // _08
};

// TODO fields
struct FieldVtxColorControl {
	FieldVtxColorControl(); // inlined

	FieldVtxColorControl* mNext;            // _00
	Vector3f mPosition;                     // _04
	f32 _10;                                // _10
	f32 mPower;                             // _14
	f32 _18;                                // _18
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
	int _2C;                        // _2C
	FieldVtxColorControl* mControl; // _30
	f32 _34;                        // _34
	BitFlag<u32> mMgrFlags;         // _38
};
} // namespace Game

#endif
