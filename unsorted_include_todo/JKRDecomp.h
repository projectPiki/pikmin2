#ifndef _JKRDECOMP_H
#define _JKRDECOMP_H

/*
    __vt__9JKRDecomp:
    .4byte 0
    .4byte 0
    .4byte __dt__9JKRDecompFv
    .4byte run__9JKRDecompFv
*/

struct JKRDecomp {
	virtual ~JKRDecomp(); // _08
	virtual void run();   // _0C
};

#endif
