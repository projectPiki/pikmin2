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
// TODO fields
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

// TODO fields
struct FieldVtxColorControl {
	FieldVtxColorControl(); // inlined

	FieldVtxColorControl* mNext; // _00
	Vector3f mPosition;          // _04
	f32 _10;                     // _10
	f32 mPower;                  // _14
	f32 _18;                     // _18
	u32 _1C;                     // _1C, unknown
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

	// _00     = VTBL1 (J3DVtxColorCalc)
	// _00-_0C = J3DVtxColorCalc
	// _0C     = VTBL2 (CNode)
	// _0C-_24 = CNode
	J3DModelData* mModelData;       // _24
	FieldVtxColorInfo* mInfo;       // _28
	int _2C;                        // _2C
	FieldVtxColorControl* mControl; // _30
	f32 _34;                        // _34
	u8 _38;                         // _38
	u8 _39;                         // _39
	u8 _3A;                         // _3A
	u8 _3B;                         // _3B
};
} // namespace Game

#endif
