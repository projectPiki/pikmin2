#ifndef _GAME_SLOTCHANGELISTENER_H
#define _GAME_SLOTCHANGELISTENER_H

#include "types.h"

namespace Game {
struct SlotChangeListener {
	virtual void inform(int) = 0; // _08, probably?

	// _00 = VTBL
};
} // namespace Game

#endif
