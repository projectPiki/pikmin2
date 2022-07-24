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
	virtual ~JKRAramBlock(); // _08
	virtual void _0C() = 0;  // _0C
};

#endif
