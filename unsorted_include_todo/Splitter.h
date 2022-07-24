#ifndef _SPLITTER_H
#define _SPLITTER_H

/*
    __vt__8Splitter:
    .4byte 0
    .4byte 0
    .4byte split2__8SplitterFf
    .4byte split4__8SplitterFff
*/

struct Splitter {
	virtual void split2(float);        // _08
	virtual void split4(float, float); // _0C

	// _00 VTBL
};

#endif
