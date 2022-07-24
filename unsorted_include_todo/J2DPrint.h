#ifndef _J2DPRINT_H
#define _J2DPRINT_H

/*
    __vt__8J2DPrint:
    .4byte 0
    .4byte 0
    .4byte __dt__8J2DPrintFv
    .4byte 0
*/

struct J2DPrint {
	virtual ~J2DPrint();    // _08
	virtual void _0C() = 0; // _0C

	// _00 VTBL
};

#endif
