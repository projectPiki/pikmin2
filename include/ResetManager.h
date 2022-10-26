#ifndef _RESETMANAGER_H
#define _RESETMANAGER_H

#include "types.h"

struct ResetManager {
	ResetManager(f32);

	virtual void draw();                // _08
	virtual void updateStatusEffects(); // _0C

	void update();
	bool isWritingMemoryCard();
	bool isSoundSystemStopped();

	// _00 VTBL
	u32 _04; // _04, unknown
	f32 _08; // _08
	u32 _0C; // _0C - bitfield?
	u32 _10; // _10, unknown
};

#endif
