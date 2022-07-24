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
	virtual ~JASBank();     // _08
	virtual void _0C() = 0; // _0C
	virtual void _10() = 0; // _10

	// _00 VTBL
};

#endif
