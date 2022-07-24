#ifndef _JASINSTRAND_H
#define _JASINSTRAND_H

/*
    __vt__11JASInstRand:
    .4byte 0
    .4byte 0
    .4byte getY__11JASInstRandCFii
    .4byte 0
*/

struct JASInstRand {
	virtual void getY(int, int) const; // _08
	virtual void _0C() = 0;            // _0C
};

#endif
