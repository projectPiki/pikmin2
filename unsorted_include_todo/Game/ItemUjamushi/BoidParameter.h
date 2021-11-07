#ifndef _GAME_ITEMUJAMUSHI_BOIDPARAMETER_H
#define _GAME_ITEMUJAMUSHI_BOIDPARAMETER_H

struct CNode {
	virtual void _00() = 0;       // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

namespace Game {
namespace ItemUjamushi {
	struct BoidParameter : public CNode {
		virtual ~BoidParameter();     // _00
		virtual void getChildCount(); // _04

		// _00 VTBL
	};
} // namespace ItemUjamushi
} // namespace Game

#endif
