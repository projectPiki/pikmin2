#ifndef _JASINST_H
#define _JASINST_H

/*
    __vt__7JASInst:
    .4byte 0
    .4byte 0
    .4byte __dt__7JASInstFv
    .4byte 0
    .4byte 0
    .4byte 0
*/

struct JASInst {
	virtual ~JASInst();     // _08 (inline)
	virtual void _0C() = 0; // _0C
	virtual void _10() = 0; // _10
	virtual void _14() = 0; // _14
};

#endif
