#ifndef _JSYSTEM_J3D_J3DVERTEXDATA_H
#define _JSYSTEM_J3D_J3DVERTEXDATA_H

#include "Dolphin/gx.h"

/**
 * @size{0x5C} (proven by virtue of being last member of J3DModelData)
 */
struct J3DVertexData {
	J3DVertexData();

	// Unused/inlined:
	bool isDeformablePositionFormat();
	bool isDeformableNormalFormat();
	bool isCpuSkinningPositionFormat();
	bool isCpuSkinningNormalFormat();

	// TODO: Everything
	u32 _00;                // _00
	u32 _04;                // _04
	u32 _08;                // _08
	u32 _0C;                // _0C
	u32 _10;                // _10
	_GXVtxAttrFmtList* _14; // _14
	void* _18;              // _18
	void* _1C;              // _1C
	void* _20;              // _20
	void* _24;              // _24
	void* _28;              // _28
	void* _2C[8];           // _2C
	u8 _4C;                 // _4C
	int _50;                // _50
	u8 _54;                 // _54
	int _58;                // _58
};

#endif
