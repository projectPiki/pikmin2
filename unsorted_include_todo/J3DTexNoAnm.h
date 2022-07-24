#ifndef _J3DTEXNOANM_H
#define _J3DTEXNOANM_H

/*
    __vt__11J3DTexNoAnm:
    .4byte 0
    .4byte 0
    .4byte calc__11J3DTexNoAnmCFPUs
    .4byte 0
*/

struct J3DTexNoAnm {
	virtual void calc(unsigned short*) const; // _08 (inline)
	virtual void _0C() = 0;                   // _0C
};

#endif
