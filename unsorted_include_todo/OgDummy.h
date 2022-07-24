#ifndef _OGDUMMY_H
#define _OGDUMMY_H

/*
    __vt__7OgDummy:
    .4byte 0
    .4byte 0
    .4byte getPosition__7OgDummyFv
*/

struct OgDummy {
	virtual void getPosition(); // _08 (inline)
};

#endif
