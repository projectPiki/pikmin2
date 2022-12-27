#ifndef _RESETMANAGER_H
#define _RESETMANAGER_H

#include "types.h"

struct ResetManager {
	ResetManager(f32);

	virtual void draw();                // _08
	virtual bool updateStatusEffects(); // _0C

	void update();
	bool isWritingMemoryCard();
	bool isSoundSystemStopped();

	// _00 VTBL
	u32 m_state;       // _04, unknown
	f32 m_statusTimer; // _08
	union {
		u8 bytesView[4];
		u32 dwordView;
	} m_flags;     // _40
	u32 m_counter; // _10, unknown
};

#endif
