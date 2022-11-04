#ifndef _JUTVIDEO_H
#define _JUTVIDEO_H

#include "Dolphin/os.h"
#include "Dolphin/gx.h"
#include "Dolphin/vi.h"
#include "types.h"

/**
 * @size{0x58}
 */
struct JUTVideo {
	JUTVideo(const _GXRenderModeObj*);

	virtual ~JUTVideo(); // _08

	static JUTVideo* createManager(const _GXRenderModeObj*);
	static void destroyManager();
	static JUTVideo* getManager() { return sManager; }
	static void preRetraceProc(unsigned long);
	static void postRetraceProc(unsigned long);
	static void drawDoneCallback();

	u16 getEfbHeight() const { return m_renderModeObj->efbHeight; }
	u16 getFbWidth() const { return m_renderModeObj->fbWidth; }
	void drawDoneStart();
	void dummyNoDrawWait();
	void setRenderMode(const _GXRenderModeObj*);
	void waitRetraceIfNeed() {};
	VIRetraceCallback setPostRetraceCallback(VIRetraceCallback);

	// Unused/inlined:
	void getDrawWait();
	VIRetraceCallback setPreRetraceCallback(VIRetraceCallback);
	void getPixelAspect(const _GXRenderModeObj*);
	void getPixelAspect() const;

	// _00 VTBL
	const _GXRenderModeObj* m_renderModeObj;         // _04
	u32 _08;                                         // _08
	u32 m_retraceCount;                              // _0C
	int _10;                                         // _10
	u8 _14[4];                                       // _14
	u32 _18;                                         // _18
	VIRetraceCallback m_previousPreRetraceCallback;  // _1C
	VIRetraceCallback m_previousPostRetraceCallback; // _20
	VIRetraceCallback m_preRetraceCallback;          // _24
	VIRetraceCallback m_postRetraceCallback;         // _28
	bool _2C;                                        // _2C
	s32 _30;                                         // _30
	void* m_messageSlots;                            // _34
	OSMessageQueue m_messageQueue;                   // _38

	static JUTVideo* sManager;
	static s32 sVideoLastTick;
	static u32 sVideoInterval;
};

#endif
