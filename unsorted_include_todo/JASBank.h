#ifndef _JASBANK_H
#define _JASBANK_H

struct JASBank {
	virtual ~JASBank();     // _00
	virtual void _04() = 0; // _04
	virtual void _08() = 0; // _08

	// _00 VTBL
};

#endif
