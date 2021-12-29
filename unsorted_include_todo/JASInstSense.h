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
	virtual void getY(int, int) const; // _00
	virtual void _04() = 0;            // _04

	// _00 VTBL
};

#endif
