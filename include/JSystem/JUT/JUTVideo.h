#ifndef _JUTVIDEO_H
#define _JUTVIDEO_H

#include "Dolphin/os.h"
#include "types.h"

struct _GXRenderModeObj;

/**
 * @size{0x58}
 */
struct JUTVideo {
	typedef void RetraceCallback(u32);

	JUTVideo(const _GXRenderModeObj*);

	virtual ~JUTVideo(); // _00
	// virtual void _04() = 0; // _04

	static JUTVideo* createManager(const _GXRenderModeObj*);
	static void destroyManager();
	void preRetraceProc(unsigned long);
	void drawDoneStart();
	void dummyNoDrawWait();
	void drawDoneCallback();
	void postRetraceProc(unsigned long);
	void setRenderMode(const _GXRenderModeObj*);
	void waitRetraceIfNeed() {};
	void setPostRetraceCallback(RetraceCallback*);

	// Unused/inlined:
	void getDrawWait();
	void setPreRetraceCallback(RetraceCallback*);
	void getPixelAspect(const _GXRenderModeObj*);
	void getPixelAspect() const;

	// _00 VTBL
	const _GXRenderModeObj* m_renderModeObj;        // _04
	u32 _08;                                        // _08
	u32 m_retraceCount;                             // _0C
	int _10;                                        // _10
	u8 _14[4];                                      // _14
	u32 _18;                                        // _18
	RetraceCallback* m_previousPreRetraceCallback;  // _1C
	RetraceCallback* m_previousPostRetraceCallback; // _20
	void* _24;                                      // _24
	void* _28;                                      // _28
	u8 _2C;                                         // _2C
	int _30;                                        // _30
	void* m_messageSlots;                           // _34
	OSMessageQueue m_messageQueue;                  // _38

	static JUTVideo* sManager;
};

#endif
