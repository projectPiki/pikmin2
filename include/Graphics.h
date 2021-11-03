#ifndef _GRAPHICS_H
#define _GRAPHICS_H

#include "types.h"

struct _190_VTBL {
	virtual void _08(); // _08
	virtual void _0C(); // _0C
	virtual void _10(); // _10
	virtual void _14(); // _14
};

struct Graphics {
	u8 _00[0x190];
	_190_VTBL* _190;
};

#endif
