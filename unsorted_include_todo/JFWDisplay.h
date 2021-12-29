#ifndef _JFWDISPLAY_H
#define _JFWDISPLAY_H

/*
    __vt__10JFWDisplay:
    .4byte 0
    .4byte 0
    .4byte beginRender__10JFWDisplayFv
    .4byte endRender__10JFWDisplayFv
    .4byte endFrame__10JFWDisplayFv
    .4byte __dt__10JFWDisplayFv
    .4byte 0
    .4byte 0
*/

struct JFWDisplay {
	virtual void beginRender(); // _00
	virtual void endRender();   // _04
	virtual void endFrame();    // _08
	virtual ~JFWDisplay();      // _0C
	virtual void _10() = 0;     // _10
	virtual void _14() = 0;     // _14

	// _00 VTBL
};

#endif
