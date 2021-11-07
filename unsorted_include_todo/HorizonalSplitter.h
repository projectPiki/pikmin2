#ifndef _HORIZONALSPLITTER_H
#define _HORIZONALSPLITTER_H

struct Splitter {
	virtual void _00() = 0;            // _00
	virtual void split4(float, float); // _04

	// _00 VTBL
};

struct HorizonalSplitter : public Splitter {
	virtual void split2(float);        // _00
	virtual void split4(float, float); // _04

	// _00 VTBL
};

#endif
