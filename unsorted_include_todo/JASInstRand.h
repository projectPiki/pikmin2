#ifndef _JASINSTRAND_H
#define _JASINSTRAND_H

struct JASInstRand {
	virtual void getY(int, int) const; // _00
	virtual void _04() = 0;            // _04

	// _00 VTBL
};

#endif
