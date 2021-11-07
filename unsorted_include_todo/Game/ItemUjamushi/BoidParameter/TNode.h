#ifndef _GAME_ITEMUJAMUSHI_BOIDPARAMETER_TNODE_H
#define _GAME_ITEMUJAMUSHI_BOIDPARAMETER_TNODE_H

struct CNode {
	virtual void _00() = 0;       // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

namespace Game {
namespace ItemUjamushi {
	namespace BoidParameter {
		struct TNode : public CNode {
			virtual ~TNode();             // _00
			virtual void getChildCount(); // _04

			// _00 VTBL
		};
	} // namespace BoidParameter
} // namespace ItemUjamushi
} // namespace Game

#endif
