#ifndef _JASBANK_H
#define _JASBANK_H

/*
    __vt__7JASBank:
    .4byte 0
    .4byte 0
    .4byte __dt__7JASBankFv
    .4byte 0
    .4byte 0
*/

struct JASBank {
	virtual ~JASBank();     // _00
	virtual void _04() = 0; // _04
	virtual void _08() = 0; // _08

	// _00 VTBL
};

#endif
