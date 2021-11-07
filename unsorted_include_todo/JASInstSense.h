#ifndef _JASINSTSENSE_H
#define _JASINSTSENSE_H

struct JASInstSense {
	virtual void getY(int, int) const; // _00
	virtual void _04() = 0;            // _04

	// _00 VTBL
};

#endif
