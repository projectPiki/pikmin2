#ifndef _J2DTEXGENBLOCK_H
#define _J2DTEXGENBLOCK_H

/*
    __vt__14J2DTexGenBlock:
    .4byte 0
    .4byte 0
    .4byte __dt__14J2DTexGenBlockFv
    .4byte 0
*/

struct J2DTexGenBlock {
	virtual ~J2DTexGenBlock(); // _00
	virtual void _04() = 0;    // _04

	// _00 VTBL
};

#endif
