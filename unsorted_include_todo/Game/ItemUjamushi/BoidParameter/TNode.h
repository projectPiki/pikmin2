#ifndef _GAME_ITEMUJAMUSHI_BOIDPARAMETER_TNODE_H
#define _GAME_ITEMUJAMUSHI_BOIDPARAMETER_TNODE_H

/*
    __vt__Q44Game12ItemUjamushi13BoidParameter5TNode:
    .4byte 0
    .4byte 0
    .4byte __dt__Q44Game12ItemUjamushi13BoidParameter5TNodeFv
    .4byte getChildCount__5CNodeFv
*/

struct CNode {
	virtual ~CNode();             // _08 (inline)
	virtual void getChildCount(); // _0C
};

namespace Game {
namespace ItemUjamushi {
namespace BoidParameter {
struct TNode : public CNode {
	virtual ~TNode(); // _08 (inline)

	TNode();
};
} // namespace BoidParameter
} // namespace ItemUjamushi
} // namespace Game

#endif
