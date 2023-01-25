#ifndef _JUTPROCBAR_H
#define _JUTPROCBAR_H

#include "JSystem/JUT/TColor.h"
#include "types.h"

class JUTProcBar {
public:
	struct CTime {
		/*
		 * --INFO--
		 * Address:	8002EFE0
		 * Size:	000014
		 */
		CTime()
		{ // weak
			clear();
		};

		void clear()
		{
			mCost = 0;
			_08   = 0;
			_0C   = 0;
		}

		void start(u8 p1, u8 p2, u8 p3)
		{
			mR         = p1;
			mG         = p2;
			mB         = p3;
			mStartTick = OSGetTick();
		}

		void end()
		{
			mCost = OSTicksToMicroseconds(OSDiffTick(OSGetTick(), mStartTick));
			if (mCost == 0)
				mCost = 1;
		}

		void accumePeek()
		{
			if (++_0C >= 0x10 || mCost >= _08) {
				_08 = mCost;
				_0C = 0;
			}
		}

		int calcBarSize(int p1, int p2) // fabricated
		{
			return mCost * p1 / p2;
		}

		u32 mStartTick;
		u32 mCost;
		u32 _08;
		u32 _0C;
		u8 mR;
		u8 mG;
		u8 mB;
	};

	struct CParamSet {
		CParamSet() { }

		void setBarWidth(int w) { mBarWidth = w; };
		void setWidth(int w) { mWidth = w; }
		void setUserPosition(int pos) { mUserPosition = pos; }
		void setPosition(int x, int y)
		{
			mPosX = x;
			mPosY = y;
		}

		/* 0x00 */ int mBarWidth;
		/* 0x04 */ int mPosX;
		/* 0x08 */ int mPosY;
		/* 0x0C */ int mWidth;
		/* 0x10 */ int mUserPosition;
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
	void bar_subroutine(int, int, int, int, int, int, int, JUtility::TColor, JUtility::TColor);
	void adjustMeterLength(u32, f32*, f32, f32, int*);
	void getUnuseUserBar();

	inline u32 calcGPUTime()
	{ // fabricated
		return mGp.mCost - mGpWait.mCost;
	}

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

	u32 getGpCost() const { return mGp.mCost; }
	u32 getCpuCost() const { return mCpu.mCost; }
	u32 getUserCost(int idx) { return sManager->mUsers[idx].mCost; }
	void setCostFrame(int frame) { mCostFrame = frame; }

	static JUTProcBar* sManager;

	CTime mIdle;          // _00
	CTime mGp;            // _14
	CTime mCpu;           // _28
	CTime mGpWait;        // _3C
	CTime mWholeLoop;     // _50
	CTime mUsers[8];      // _64
	int mCostFrame;       // _104
	u32 _108;             // _108, active users?
	bool mVisible;        // _10C
	int _110;             // _110
	CParamSet mParams;    // _114
	int _128;             // _128
	JKRHeap* mWatchHeap;  // _12C
	bool mHeapBarVisible; // _130

private:
}; // 0x134 size

#endif
