#ifndef _GAME_MOVIECONFIG_TPARMS_H
#define _GAME_MOVIECONFIG_TPARMS_H

/*
    __vt__Q34Game11MovieConfig6TParms:
    .4byte 0
    .4byte 0
    .4byte __dt__Q34Game11MovieConfig6TParmsFv
    .4byte getChildCount__5CNodeFv
*/

struct CNode {
	virtual ~CNode();             // _08
	virtual void getChildCount(); // _0C

	// _00 VTBL
};

namespace Game {
namespace MovieConfig {
struct TParms : public CNode {
	virtual ~TParms(); // _08

	// _00 VTBL
};
} // namespace MovieConfig
} // namespace Game

#endif
