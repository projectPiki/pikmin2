#ifndef _JSYSTEM_JUT_JUTXFB_H
#define _JSYSTEM_JUT_JUTXFB_H

#include "Dolphin/gx.h"
#include "types.h"

struct _GXRenderModeObj;
struct JKRHeap;

/**
 * @size{0x20}
 */
struct JUTXfb {
	enum EXfbNumber { Unset = 0, SingleBuffer = 1, DoubleBuffer = 2, TripleBuffer = 3 };

	void clearIndex();
	static JUTXfb* createManager(JKRHeap*, EXfbNumber);
	static void destroyManager();
	void initiate(u16, u16, JKRHeap*, EXfbNumber);
	static u32 accumeXfbSize();

	// Unused/inlined:
	JUTXfb(const _GXRenderModeObj*, JKRHeap*, EXfbNumber);
	JUTXfb(const _GXRenderModeObj*, void*, void*, void*, JUTXfb::EXfbNumber);
	~JUTXfb();
	void common_init(int);
	void delXfb(int);
	void exchangeXfbIndex(int, int);
	void addToDoubleXfb(void*, bool);
	void addToDoubleXfb(JKRHeap*);
	static JUTXfb* createManager(const _GXRenderModeObj*, JKRHeap*, EXfbNumber);
	static JUTXfb* createManager(const _GXRenderModeObj*, void*);
	static JUTXfb* createManager(const _GXRenderModeObj*, void*, void*);
	static JUTXfb* createManager(const _GXRenderModeObj*, void*, void*, void*);
	static JUTXfb* createManager(void*);
	static JUTXfb* createManager(void*, void*);
	static JUTXfb* createManager(void*, void*, void*);
	void initiate(void*, void*, void*, EXfbNumber);
	void switchXfb();

	/**
	 * @fabricated
	 */
	inline static u16 getLineCount(const _GXRenderModeObj* gxObj)
	{
		return GXGetNumXfbLines(GXGetYScaleFactor(gxObj->efbHeight, gxObj->xfbHeight), gxObj->efbHeight);
	}
	/*void *getDrawnXfb() const {
	    return (mDrawnXfbIndex >= 0) ? mBuffer[mDrawnXfbIndex] : nullptr;
	}

	void *getDrawingXfb() const {
	    return (mDrawingXfbIndex >= 0) ? mBuffer[mDrawingXfbIndex] : nullptr;
	}

	void *getDisplayingXfb() const {
	    return (mDisplayingXfbIndex >= 0) ? mBuffer[mDisplayingXfbIndex] : nullptr;
	}*/

	EXfbNumber getBufferNum() const { return _10; }
	int getDrawingXfbIndex() const { return _14; }
	s16 getDrawnXfbIndex() const { return _16; }
	int getDisplayingXfbIndex() const { return _18; }
	s32 getSDrawingFlag() const { return _1C; }
	void setSDrawingFlag(s32 flag) { _1C = flag; }
	void setDrawnXfbIndex(s16 index) { _16 = index; }
	void setDrawingXfbIndex(s16 index) { _14 = index; }

	void* getDrawingXfb() const { return (_14 >= 0) ? mBuffers[_14] : nullptr; }

	static JUTXfb* getManager() { return sManager; }

	u8* mBuffers[3];  // _00
	bool mEnabled[3]; // _0C
	EXfbNumber _10;    // _10
	short _14;         // _14
	short _16;         // _16
	short _18;         // _18
	s32 _1C;           // _1C

	static JUTXfb* sManager;
};

#endif
