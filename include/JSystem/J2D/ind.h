#ifndef _JSYSTEM_J2D_IND_H
#define _JSYSTEM_J2D_IND_H

#include "types.h"

struct J2DIndTexCoordScale {
	J2DIndTexCoordScale();
	~J2DIndTexCoordScale();

	void load(uchar);
};

struct J2DIndTexMtx {
	J2DIndTexMtx();
};

struct J2DIndTexOrder {
	J2DIndTexOrder();
};

struct J2DIndBlock {
};

struct J2DIndBlockNull : public J2DIndBlock {
	virtual ~J2DIndBlockNull();

	uint getType();
	void setGX();
};

#endif
