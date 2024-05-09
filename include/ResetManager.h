#ifndef _RESETMANAGER_H
#define _RESETMANAGER_H

#include "types.h"
#include "BitFlag.h"

enum ResetManagerFlags {
	RESETFLAG_ResetInputEntered = 0x1,
	RESETFLAG_GPProcessing      = 0x2,
	RESETFLAG_3                 = 0x4, // unused?
	RESETFLAG_DoResetToMenu     = 0x8,
	RESETFLAG_ResetAllowed      = 0x10000000,
};

struct ResetManager {
	enum State {
		ResetState_Inactive = 0,
		ResetState_Fadeout  = 1,
		ResetState_Finish   = 2,
	};

	ResetManager(f32);

	virtual void draw();                // _08
	virtual bool updateStatusEffects(); // _0C

	void update();
	bool isWritingMemoryCard();
	bool isSoundSystemStopped();

	inline void setFlag(u32 flag) { mFlags.typeView |= flag; }
	inline void resetFlag(u32 flag) { mFlags.typeView &= ~flag; }
	inline bool isFlag(u32 flag) { return mFlags.typeView & flag; }

	// _00 VTBL
	int mState;          // _04
	f32 mFadeTimer;      // _08
	BitFlag<u32> mFlags; // _40
	int mCounter;        // _10
};

#endif
