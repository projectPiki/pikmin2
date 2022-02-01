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

	u8 _00[0x38];
};

#endif
