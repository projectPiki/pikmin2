#ifndef _JSYSTEM_JFW_JFWDISPLAY_H
#define _JSYSTEM_JFW_JFWDISPLAY_H

#include "types.h"
#include "JSystem/JUtility/TColor.h"
#include "JSystem/JUtility/JUTFader.h"
#include "JSystem/JUtility/JUTXfb.h"

struct JKRHeap;

typedef void (*JFWDisplayUnkFunc)(void);

extern Mtx e_mtx;

struct JFWDisplay {
	enum EDrawDone {
		JFWDRAW_Unk0 = 0,
		JFWDRAW_Unk1 = 1,
	};

	// all ctors are unused/inlined
	JFWDisplay(JKRHeap*, JUTXfb::EXfbNumber, bool);
	JFWDisplay(void*, bool);
	JFWDisplay(void*, void*, bool);
	JFWDisplay(void*, void*, void*, bool);

	virtual void beginRender(); // _08
	virtual void endRender();   // _0C
	virtual void endFrame();    // _10
	virtual ~JFWDisplay();      // _14

	static JFWDisplay* createManager(const _GXRenderModeObj*, JKRHeap*, JUTXfb::EXfbNumber, bool);
	static void destroyManager();
	void waitBlanking(int);
	void threadSleep(s64);
	void clearEfb_init();
	void clearEfb(GXColor);
	void clearEfb(int, int, int, int, GXColor);
	void calcCombinationRatio();
	static void setForOSResetSystem();

	// Unused/inlined:
	void ctor_subroutine(bool);
	void prepareCopyDisp();
	void drawendXfb_single();
	void exchangeXfb_double();
	void exchangeXfb_triple();
	void copyXfb_triple();
	void preGX();
	void endGX();
	void changeToSingleXfb(int);
	void changeToDoubleXfb();
	void deleteToSingleXfb(int);
	void deleteToSingleXfb(void*);
	void addToDoubleXfb(void*, bool);
	void addToDoubleXfb(JKRHeap*);
	void clearEfb();
	void clearAllXfb();
	void frameToTick(f32);

	static JFWDisplay* createManager(const GXRenderModeObj*, void*, bool);
	static JFWDisplay* createManager(const GXRenderModeObj*, void*, void*, bool);
	static JFWDisplay* createManager(const GXRenderModeObj*, void*, void*, void*, bool);

	static JFWDisplay* getManager() { return sManager; }

	int startFadeOut(int duration)
	{
		if (mFader) {
			return mFader->startFadeOut(duration);
		}
		return 1;
	}

	int startFadeIn(int duration)
	{
		if (mFader) {
			return mFader->startFadeIn(duration);
		}
		return 1;
	}

	void setTickRate(u32 rate)
	{
		mTickRate  = rate;
		mFrameRate = 0;
	}

	static JFWDisplay* sManager;

	// _00 VTBL
	JUTFader* mFader;             // _04
	JUtility::TColor mClearColor; // _08
	u32 mZClear;                  // _0C
	JUTXfb* mXfb;                 // _10
	u16 mGamma;                   // _14
	EDrawDone mDrawDoneMethod;    // _18
	u16 mFrameRate;               // _1C
	u32 mTickRate;                // _20
	bool mIsAlphaEnabled;         // _24
	u16 mClamp;                   // _26
	f32 mCombinationRatio;        // _28
	u32 mCurrentTick;             // _2C
	u32 mFrameDuration;           // _30
	u32 mTickDifference;          // _34
	s16 mCurrentXfbIndex;         // _38, NB: TP has more members here.
	u8 _3A;                       // _3A
};

#endif
