#ifndef _JASINSTEFFECT_H
#define _JASINSTEFFECT_H

/*
    __vt__13JASInstEffect:
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
*/

struct JASInstEffect {
	virtual void _08() = 0; // _08
	virtual void _0C() = 0; // _0C

	// _00 VTBL
};

#endif
