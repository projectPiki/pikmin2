#ifndef _JSYSTEM_JAS_JASSEQCTRL_H
#define _JSYSTEM_JAS_JASSEQCTRL_H

#include "types.h"

/**
 * @size = 0x48
 */
struct JASSeqCtrl {
	void init();
	void start(void* file, u32 offset);
	bool loopEnd();
	bool waitCountDown();
	bool callIntr(void* internalFile);
	bool retIntr();

	u16 get16(u32 offset) const;
	u32 get24(u32 offset) const;
	u32 get32(u32 offset) const;
	u32 read16();
	u32 read24();

	// unused/inlined
	u32 read32();

	u8* mRawFilePtr;            // _00
	u8* mCurrentFilePtr;        // _04
	int mWaitTimer;             // _08
	u32 mLoopIndex;             // _0C - unknown
	u8* mLoopStartPositions[8]; // _10
	u16 mLoopTimers[8];         // _30
	union {
		u8 b[4];
		int w;
	} mState;             // _40
	u8* mPreviousFilePtr; // _44
};

#endif
