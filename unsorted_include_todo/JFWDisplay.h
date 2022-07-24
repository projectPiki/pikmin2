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
*/

struct JFWDisplay {
	virtual void beginRender(); // _08
	virtual void endRender();   // _0C
	virtual void endFrame();    // _10
	virtual ~JFWDisplay();      // _14
};

#endif
