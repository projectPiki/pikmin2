#ifndef _GAME_FARM_FARM_H
#define _GAME_FARM_FARM_H

/*
    __vt__Q34Game4Farm4Farm:
    .4byte 0
    .4byte 0
    .4byte __dt__Q34Game4Farm4FarmFv
    .4byte getChildCount__5CNodeFv
*/

struct CNode {
	virtual ~CNode();             // _08
	virtual void getChildCount(); // _0C

	// _00 VTBL
};

namespace Game {
namespace Farm {
struct Farm : public CNode {
	virtual ~Farm(); // _08

	// _00 VTBL
};
} // namespace Farm
} // namespace Game

#endif
