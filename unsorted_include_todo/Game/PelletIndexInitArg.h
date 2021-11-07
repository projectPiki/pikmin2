#ifndef _GAME_PELLETINDEXINITARG_H
#define _GAME_PELLETINDEXINITARG_H

namespace Game {
struct PelletInitArg {
	virtual void getName(); // _00

	// _00 VTBL
};
} // namespace Game

namespace Game {
struct PelletIndexInitArg : public PelletInitArg {
	virtual void getName(); // _00

	// _00 VTBL
};
} // namespace Game

#endif
