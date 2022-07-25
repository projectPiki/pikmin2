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
	virtual ~CNode();             // _08 (weak)
	virtual void getChildCount(); // _0C
};

namespace Game {
namespace GameConfig {
struct Parms : public CNode {
	virtual ~Parms(); // _08 (weak)

	Parms();
};
} // namespace GameConfig
} // namespace Game

#endif
