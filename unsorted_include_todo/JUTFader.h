#ifndef _JUTFADER_H
#define _JUTFADER_H

struct JUTFader {
	virtual ~JUTFader();            // _00
	virtual void startFadeIn(int);  // _04
	virtual void startFadeOut(int); // _08
	virtual void draw();            // _0C

	// _00 VTBL
};

#endif
