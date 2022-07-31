#ifndef _JUTVIDEO_H
#define _JUTVIDEO_H

/*
    __vt__8JUTVideo:
    .4byte 0
    .4byte 0
    .4byte __dt__8JUTVideoFv
    .4byte 0
*/

struct JUTVideo {
	virtual ~JUTVideo();    // _08
	virtual void _0C() = 0; // _0C

	void createManager(const _GXRenderModeObj*);
	void destroyManager();
	JUTVideo(const _GXRenderModeObj*);
	void preRetraceProc(unsigned long);
	void drawDoneStart();
	void dummyNoDrawWait();
	void drawDoneCallback();
	void postRetraceProc(unsigned long);
	void setRenderMode(const _GXRenderModeObj*);
	void waitRetraceIfNeed();
	void setPostRetraceCallback(void (*)(unsigned long));
};

#endif
