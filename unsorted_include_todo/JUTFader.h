#ifndef _JUTFADER_H
#define _JUTFADER_H

/*
    __vt__8JUTFader:
    .4byte 0
    .4byte 0
    .4byte __dt__8JUTFaderFv
    .4byte startFadeIn__8JUTFaderFi
    .4byte startFadeOut__8JUTFaderFi
    .4byte draw__8JUTFaderFv
*/

struct JUTFader {
	virtual ~JUTFader();            // _00
	virtual void startFadeIn(int);  // _04
	virtual void startFadeOut(int); // _08
	virtual void draw();            // _0C

	// _00 VTBL
};

#endif
