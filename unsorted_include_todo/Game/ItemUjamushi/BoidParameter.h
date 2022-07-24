#ifndef _GAME_ITEMUJAMUSHI_BOIDPARAMETER_H
#define _GAME_ITEMUJAMUSHI_BOIDPARAMETER_H

/*
    __vt__Q34Game12ItemUjamushi13BoidParameter:
    .4byte 0
    .4byte 0
    .4byte __dt__Q34Game12ItemUjamushi13BoidParameterFv
    .4byte getChildCount__5CNodeFv
*/

struct CNode {
	virtual ~CNode();             // _08 (inline)
	virtual void getChildCount(); // _0C
};

namespace Game {
namespace ItemUjamushi {
struct BoidParameter : public CNode {
	virtual ~BoidParameter(); // _08 (inline)

	BoidParameter();
	void getParms(int, int, float, Game::ItemUjamushi::BoidParms&);
	void newParms();
	void read(Stream&);
};
} // namespace ItemUjamushi
} // namespace Game

#endif
