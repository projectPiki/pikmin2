#ifndef _PSM_TSUYUKUSA_H
#define _PSM_TSUYUKUSA_H

#include "PSM/CreatureObj.h"

namespace PSM {
struct Tsuyukusa : public CreatureObj {
	Tsuyukusa(Game::Creature*);

	virtual ~Tsuyukusa(); // _14 (weak)

	void noukouFrameWork(bool);

	// _10     = VTBL 1
	// _28     = VTBL 2
	// _00-_70 = CreatureObj
	BOOL _70;       // _70
	JSUPtrLink _74; // _74
};
} // namespace PSM

#endif
