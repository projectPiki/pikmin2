#ifndef _PSM_PIKIHUMMING_H
#define _PSM_PIKIHUMMING_H

#include "types.h"
#include "SoundID.h"

namespace PSM {
struct Piki;

struct HumType {
	// probably unused if init and exec are unused
};

/**
 * @size{0x1C}
 */
struct PikiHumming {
	PikiHumming();

	// inlined/unused:
	void init(HumType, u32, int, int);
	void exec(HumType, bool);
	void play(Piki* piki);

	u32 _00;          // _00, unknown
	SoundID mSoundID; // _04
	int mCounterMax;  // _08
	int _0C;          // _0C
	int mCounter;     // _10
	int mActiveID;    // _14
	bool mIsActive;   // _18
};

/**
 * @size{0x14}
 */
struct PikiHummingMgr {
	PikiHummingMgr();

	void exec();
	void play(Piki*);

	// inlined/unused:
	void entryRequest();

	u32 _00;                    // _00
	u32 mState;                 // _04
	int mCurrID;                // _08
	PikiHumming* mHummingArray; // _0C, ptr to array of 3 PikiHummings
	u8 mDoAiNoUta;              // _10
};

} // namespace PSM

#endif
