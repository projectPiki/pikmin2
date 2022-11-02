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
	FieldVtxColorInfo();
	// Unused/inlined:
	void setVtxColorIndex(unsigned short);
};

// TODO fields
struct FieldVtxColorControl {
	FieldVtxColorControl(); // inlined
};

struct FieldVtxColorMgr : public J3DVtxColorCalc, public CNode {
	FieldVtxColorMgr(J3DModelData*);

	// vtable 1 (J3DVtxColorCalc)
	virtual void calc(J3DVertexBuffer*); // _08
	virtual ~FieldVtxColorMgr();         // _0C (weak)

	void createFieldVtxColorInfo();
	void initVtxColor();
	void setupFieldVtxColorInfoFromStrip(void*, int, int, int, int);
	void setupFieldVtxColorInfo(J3DShape*);
	FieldVtxColorControl* createNewControl(Vector3f&, float, float);
	void setupFieldVtxColorControl(FieldVtxColorControl*, Vector3f&, float, float);

	// Unused/inlined:
	void updateFieldVtxColorControl(FieldVtxColorControl*);
	void setupFieldVtxColorInfoFromFan(void*, int, int, int, int);
	void drawDebugInfo(struct Graphics&);

	J3DModelData* m_modelData;       // _24
	FieldVtxColorInfo* m_info;       // _28
	int _2C;                         // _2C
	FieldVtxColorControl* m_control; // _30
	float _34;                       // _34
	u8 _38[4];                       // _38
};
} // namespace Game

#endif
