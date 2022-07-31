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
	virtual ~JASBasicBank();         // _08
	virtual void getInst(int) const; // _0C
	virtual void getType() const;    // _10 (weak)

	JASBasicBank();
	void setInstCount(unsigned long);
	void setInst(int, JASInst*);
};

#endif
