#ifndef _JUTPROCBAR_H
#define _JUTPROCBAR_H

#include "JSystem/JUT/TColor.h"
#include "types.h"

class JUTProcBar {
public:
	struct CTime {
		CTime();

		u32 startTick;
		u32 cost;
		u32 _08;
		u32 _0C;
		u8 r;
		u8 g;
		u8 b;

		void start(u8 p1, u8 p2, u8 p3)
		{
			r         = p1;
			g         = p2;
			b         = p3;
			startTick = OSGetTick();
		}

		void end()
		{
			cost = OSTicksToMicroseconds(OSDiffTick(OSGetTick(), startTick));
			if (cost == 0)
				cost = 1;
		}
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

	void setCostFrame(int frame) { mCostFrame = frame; }

	static JUTProcBar* sManager;

	CTime mIdle;      // _00
	CTime mGp;        // _14
	CTime mCpu;       // _28
	CTime mGpWait;    // _3C
	CTime mWholeLoop; // _50
	CTime mUsers[8];  // _64
	int mCostFrame;   // _104
	u32 _108;         // _108
	u8 _10C;          // _10C
	u32 _110;         // _110
	u32 _114;         // _114
	u32 _118;         // _118
	u32 _11C;         // _11C
	u32 _120;         // _120
	u32 _124;         // _124
	u32 _128;         // _128
	u32 _12C;         // _12C
	u8 _130;          // _130

private:
}; // 0x134 size

#endif
