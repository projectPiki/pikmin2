#ifndef _JSYSTEM_J3D_J3DANMBASE_H
#define _JSYSTEM_J3D_J3DANMBASE_H

#include "types.h"

typedef enum J3DAnmKind {
	CLUSTER         = 3,
	CLUSTER_FULL    = 12,
	CLUSTER_KEY     = 13,
	COLOR           = 1,
	COLOR_FULL      = 10,
	COLOR_KEY       = 11,
	TEV_REG_KEY     = 5,
	TEXTURE_SRT_KEY = 4,
	TEX_PATTERN     = 2,
	TRANSFORM       = 0,
	TRANSFORM_FULL  = 9,
	TRANSFORM_KEY   = 8,
	VISIBILITY_FULL = 6,
	VTX_COLOR       = 7,
	VTX_COLOR_FULL  = 14,
	VTX_COLOR_KEY   = 15
};

struct J3DAnmBase {
	virtual void getKind() const   = 0;
	virtual void getColour() const = 0;
	virtual ~J3DAnmBase();
	virtual J3DAnmKind getKind();

	// vtbl
	s16 _04;     // _04
	s16 m_time;  // _08
	f32 m_fTime; // _0C
};

#endif
