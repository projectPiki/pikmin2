#ifndef _JSUIOSBASE_H
#define _JSUIOSBASE_H

/*
    __vt__10JSUIosBase:
    .4byte 0
    .4byte 0
    .4byte __dt__10JSUIosBaseFv
    .4byte 0
*/

struct JSUIosBase {
	virtual ~JSUIosBase();  // _00
	virtual void _04() = 0; // _04

	// _00 VTBL
};

#endif
