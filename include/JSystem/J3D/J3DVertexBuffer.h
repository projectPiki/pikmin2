#ifndef _JSYSTEM_J3D_J3DVERTEXBUFFER_H
#define _JSYSTEM_J3D_J3DVERTEXBUFFER_H

#include "JSystem/J3D/J3DTypes.h"
#include "types.h"

struct J3DVertexData;
struct J3DVertexBuffer {
	~J3DVertexBuffer();
	void copyVtxColorArray(J3DDeformAttachFlag);
	void init();
	void setArray() const;
	void setVertexData(J3DVertexData*);

	J3DVertexData* _00; // _00
	void* _04;          // _04
	u32 _08;            // _08
	void* _0C;          // _0C
	u32 _10;            // _10
	void* _14[2];       // _14
	void* _1C;          // _1C
	u32 _20;            // _20
	void* _24;          // _24
	u32 _28;            // _28
	void* _2C;          // _2C
	void* _30;          // _30
	void* _34;          // _34
};

#endif
