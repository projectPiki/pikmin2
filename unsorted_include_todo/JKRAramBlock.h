#ifndef _JKRARAMBLOCK_H
#define _JKRARAMBLOCK_H

/*
    __vt__12JKRAramBlock:
    .4byte 0
    .4byte 0
    .4byte __dt__12JKRAramBlockFv
    .4byte 0
*/

struct JKRAramBlock {
	virtual ~JKRAramBlock(); // _00
	virtual void _04() = 0;  // _04

	// _00 VTBL
};

#endif
