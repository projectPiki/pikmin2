#ifndef _JFWDISPLAY_H
#define _JFWDISPLAY_H

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
