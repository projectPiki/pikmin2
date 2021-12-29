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
	virtual ~J2DPrint();    // _00
	virtual void _04() = 0; // _04

	// _00 VTBL
};

#endif
