#ifndef _GAME_GAMECONFIG_PARMS_H
#define _GAME_GAMECONFIG_PARMS_H

/*
    __vt__Q34Game10GameConfig5Parms:
    .4byte 0
    .4byte 0
    .4byte __dt__Q34Game10GameConfig5ParmsFv
    .4byte getChildCount__5CNodeFv
*/

struct CNode {
	virtual ~CNode();             // _08
	virtual void getChildCount(); // _0C

	// _00 VTBL
};

namespace Game {
namespace GameConfig {
struct Parms : public CNode {
	virtual ~Parms(); // _08

	// _00 VTBL
};
} // namespace GameConfig
} // namespace Game

#endif
