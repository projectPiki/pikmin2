#ifndef _SPLITTER_H
#define _SPLITTER_H

struct Splitter {
	virtual void split2(float);        // _00
	virtual void split4(float, float); // _04
	virtual void _08() = 0;            // _08

	// _00 VTBL
};

#endif
