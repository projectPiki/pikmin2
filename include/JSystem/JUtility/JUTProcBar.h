#ifndef _JUTPROCBAR_H
#define _JUTPROCBAR_H

#include "JSystem/JUtility/TColor.h"
#include "types.h"

class JUTProcBar {
public:
	struct CTime {
		CTime() { clear(); }

		void clear()
		{
			mMeasurementCost = 0;
			mPeakCost        = 0;
			mPeakAccumulator = 0;
		}

		void start(u8 red, u8 green, u8 blue)
		{
			mR = red;
			mG = green;
			mB = blue;

			mStartTick = OSGetTick();
		}

		void end()
		{
			mMeasurementCost = OSTicksToMicroseconds(OSDiffTick(OSGetTick(), mStartTick));
			if (mMeasurementCost == 0) {
				mMeasurementCost = 1;
			}
		}

		void accumePeek()
		{
			if (++mPeakAccumulator >= 16 || mMeasurementCost >= mPeakCost) {
				mPeakCost        = mMeasurementCost;
				mPeakAccumulator = 0;
			}
		}

		int calcBarSize(int scale, int totalLength) { return mMeasurementCost * scale / totalLength; }

		u32 mStartTick;       // _00
		u32 mMeasurementCost; // _04
		u32 mPeakCost;        // _08
		u32 mPeakAccumulator; // _0C
		u8 mR;                // _10
		u8 mG;                // _11
		u8 mB;                // _12
	};

	struct CParamSet {
		CParamSet() { }

		void setBarHeight(int w) { mBarHeight = w; };
		void setWidth(int w) { mWidth = w; }
		void setUserPosition(int pos) { mUserPosition = pos; }
		void setPosition(int x, int y)
		{
			mPosX = x;
			mPosY = y;
		}

		int mBarHeight;    // _00
		int mPosX;         // _04
		int mPosY;         // _08
		int mWidth;        // _0C
		int mUserPosition; // _10
	};

	JUTProcBar();
	~JUTProcBar();

	static JUTProcBar* create();
	static void clear();
	static void destroy();
	void draw();
	void drawProcessBar();
	void drawHeapBar();

	// unused/inlined:
	void bar_subroutine(int startX, int startY, int height, int totalUnits, int maxHighlightedUnits, int filledUnits, int highlitedUnits,
	                    JUtility::TColor fillColor, JUtility::TColor highlightedColor);
	void adjustMeterLength(u32 totalUnits, f32* currentLength, f32 maxLength, f32 minLength, int* adjustmentFactor);
	void getUnuseUserBar();

	inline u32 calcGPUTime() { return mGp.mMeasurementCost - mGpWait.mMeasurementCost; }

	void setVisible(bool visible) { mVisible = visible; }
	void setVisibleHeapBar(bool visible) { mHeapBarVisible = visible; }
	void setWatchHeap(JKRHeap* heap) { mWatchHeap = heap; }

	inline static JUTProcBar* getManager() { return sManager; }

	void idleStart() { mIdle.start(255, 129, 30); }
	void idleEnd() { mIdle.end(); }
	void gpStart() { mGp.start(255, 129, 30); }
	void gpEnd() { mGp.end(); }
	void cpuStart() { mCpu.start(255, 129, 30); }
	void cpuEnd() { mCpu.end(); }
	void gpWaitStart() { mGpWait.start(255, 129, 30); }
	void gpWaitEnd() { mGpWait.end(); }
	void wholeLoopStart() { mWholeLoop.start(255, 129, 30); }
	void wholeLoopEnd() { mWholeLoop.end(); }

	u32 getGpCost() const { return mGp.mMeasurementCost; }
	u32 getCpuCost() const { return mCpu.mMeasurementCost; }
	u32 getUserCost(int idx) { return sManager->mUsers[idx].mMeasurementCost; }
	void setCostFrame(int frame) { mCostFrame = frame; }

	static JUTProcBar* sManager;

	CTime mIdle;          // _00
	CTime mGp;            // _14
	CTime mCpu;           // _28
	CTime mGpWait;        // _3C
	CTime mWholeLoop;     // _50
	CTime mUsers[8];      // _64
	int mCostFrame;       // _104
	u32 mUnused;          // _108
	bool mVisible;        // _10C
	int _110;             // _110
	CParamSet mParams;    // _114
	int mDisableHeapBar;  // _128
	JKRHeap* mWatchHeap;  // _12C
	bool mHeapBarVisible; // _130
};                        // 0x134 size

#endif
