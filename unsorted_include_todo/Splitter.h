#ifndef _SPLITTER_H
#define _SPLITTER_H

/*
    __vt__8Splitter:
    .4byte 0
    .4byte 0
    .4byte split2__8SplitterFf
    .4byte split4__8SplitterFff
    .4byte 0
*/

struct Splitter {
	virtual void split2(float);        // _00
	virtual void split4(float, float); // _04
	virtual void _08() = 0;            // _08

	// _00 VTBL
};

#endif
