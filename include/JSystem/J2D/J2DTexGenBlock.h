#ifndef _J2DTEXGENBLOCK_H
#define _J2DTEXGENBLOCK_H

#include "JSystem/J2D/J2DTypes.h"
#include "JSystem/J2D/J2DTexMtx.h"
#include "types.h"

struct _J2DTexGenBlockParent {
	u32 m_texGenNum;            // _00
	J2DTexCoord m_texCoords[8]; // _04
	J2DTexMtx* m_texMtxes[8];   // _24
};

struct J2DTexGenBlock : _J2DTexGenBlockParent {
	virtual ~J2DTexGenBlock(); // _08

	void initialize();
	void setGX();
	void setTexMtx(u32, J2DTexMtx&);
	void getTexMtx(u32, J2DTexMtx&);

	// _44 VTBL
};

#endif
