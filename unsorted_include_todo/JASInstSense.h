#ifndef _JASINSTSENSE_H
#define _JASINSTSENSE_H

/*
    __vt__12JASInstSense:
    .4byte 0
    .4byte 0
    .4byte getY__12JASInstSenseCFii
    .4byte 0
*/

struct JASInstSense {
	virtual void getY(int, int) const; // _08
	virtual void _0C() = 0;            // _0C
};

#endif
