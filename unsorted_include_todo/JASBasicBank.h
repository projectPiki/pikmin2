#ifndef _JASBASICBANK_H
#define _JASBASICBANK_H

/*
    __vt__12JASBasicBank:
    .4byte 0
    .4byte 0
    .4byte __dt__12JASBasicBankFv
    .4byte getInst__12JASBasicBankCFi
    .4byte getType__12JASBasicBankCFv
*/

struct JASBasicBank {
	virtual ~JASBasicBank();         // _00
	virtual void getInst(int) const; // _04
	virtual void getType() const;    // _08

	// _00 VTBL
};

#endif
