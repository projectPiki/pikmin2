#ifndef _HORIZONALSPLITTER_H
#define _HORIZONALSPLITTER_H

/*
    __vt__17HorizonalSplitter:
    .4byte 0
    .4byte 0
    .4byte split2__17HorizonalSplitterFf
    .4byte split4__8SplitterFff
*/

struct Splitter {
	virtual void split2(float);        // _00
	virtual void split4(float, float); // _04

	// _00 VTBL
};

struct HorizonalSplitter : public Splitter {
	virtual void split2(float);        // _00
	virtual void split4(float, float); // _04

	// _00 VTBL
};

#endif
