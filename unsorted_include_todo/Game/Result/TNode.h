#ifndef _GAME_RESULT_TNODE_H
#define _GAME_RESULT_TNODE_H

/*
    __vt__Q34Game6Result5TNode:
    .4byte 0
    .4byte 0
    .4byte __dt__Q34Game6Result5TNodeFv
    .4byte getChildCount__Q24Game5DNodeFv
*/

namespace Game {
struct DNode {
	virtual ~DNode();             // _08 (inline)
	virtual void getChildCount(); // _0C
};
} // namespace Game

namespace Game {
namespace Result {
struct TNode : public DNode {
	virtual ~TNode(); // _08 (inline)

	TNode();
	void setTNode(unsigned long long, JUTTexture*, int, int, int);
	void setTNode(unsigned long long, JUTTexture*, int, int, int, int);
	void convertByMorimun(int);
};
} // namespace Result
} // namespace Game

#endif
