#ifndef _GAME_RESULT_TNODE_H
#define _GAME_RESULT_TNODE_H

namespace Game {
struct DNode {
	virtual void _00() = 0;       // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};
} // namespace Game

namespace Game {
namespace Result {
	struct TNode : public DNode {
		virtual ~TNode();             // _00
		virtual void getChildCount(); // _04

		// _00 VTBL
	};
} // namespace Result
} // namespace Game

#endif
