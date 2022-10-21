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

	u8* m_buffers[3];  // _00
	bool m_enabled[3]; // _0C
	EXfbNumber _10;    // _10
	short _14;         // _14
	short _16;         // _16
	short _18;         // _18
	int _1C;           // _1C

	static JUTXfb* sManager;
};

#endif
