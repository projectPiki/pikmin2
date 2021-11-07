#ifndef _JASBASICBANK_H
#define _JASBASICBANK_H

struct JASBasicBank {
	virtual ~JASBasicBank();         // _00
	virtual void getInst(int) const; // _04
	virtual void getType() const;    // _08

	// _00 VTBL
};

#endif
