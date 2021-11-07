#ifndef _GAME_PELLETNUMBERINITARG_H
#define _GAME_PELLETNUMBERINITARG_H

namespace Game {
struct PelletInitArg {
	virtual void getName(); // _00

	// _00 VTBL
};
} // namespace Game

namespace Game {
struct PelletNumberInitArg : public PelletInitArg {
	virtual void getName(); // _00

	// _00 VTBL
};
} // namespace Game

#endif
