#ifndef _GAME_CAVEOTAKARA_H
#define _GAME_CAVEOTAKARA_H

/*
    __vt__Q24Game11CaveOtakara:
    .4byte 0
    .4byte 0
    .4byte __dt__Q24Game11CaveOtakaraFv
    .4byte getChildCount__5CNodeFv
*/

struct CNode {
	virtual ~CNode();             // _08 (weak)
	virtual void getChildCount(); // _0C
};

namespace Game {
struct CaveOtakara : public CNode {
	virtual ~CaveOtakara(); // _08 (weak)
};
} // namespace Game

#endif
