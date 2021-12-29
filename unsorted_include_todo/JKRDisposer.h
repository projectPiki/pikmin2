#ifndef _JKRDISPOSER_H
#define _JKRDISPOSER_H

/*
    __vt__11JKRDisposer:
    .4byte 0
    .4byte 0
    .4byte __dt__11JKRDisposerFv
    .4byte 0
*/

struct JKRDisposer {
	virtual ~JKRDisposer(); // _00
	virtual void _04() = 0; // _04

	// _00 VTBL
};

#endif
