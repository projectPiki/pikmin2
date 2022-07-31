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

	void createManager(const _GXRenderModeObj*, JKRHeap*, JUTXfb::EXfbNumber, bool);
	void destroyManager();
	void waitBlanking(int);
	void threadSleep(long long);
	void clearEfb_init();
	void clearEfb(_GXColor);
	void clearEfb(int, int, int, int, _GXColor);
	void calcCombinationRatio();
	void setForOSResetSystem();
};

#endif
