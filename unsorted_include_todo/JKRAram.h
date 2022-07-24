#ifndef _JKRARAM_H
#define _JKRARAM_H

/*
    __vt__7JKRAram:
    .4byte 0
    .4byte 0
    .4byte __dt__7JKRAramFv
    .4byte run__7JKRAramFv
*/

struct JKRAram {
	virtual ~JKRAram(); // _08
	virtual void run(); // _0C

	// _00 VTBL
};

#endif
