#ifndef _GAME_PELLETKILLARG_H
#define _GAME_PELLETKILLARG_H

namespace Game {
struct CreatureKillArg {
	virtual void getName(); // _00

	// _00 VTBL
};
} // namespace Game

namespace Game {
struct PelletKillArg : public CreatureKillArg {
	virtual void getName(); // _00

	// _00 VTBL
};
} // namespace Game

#endif
