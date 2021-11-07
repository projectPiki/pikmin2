#ifndef _GAME_ITEMPLANT_FRUITSLOT_H
#define _GAME_ITEMPLANT_FRUITSLOT_H

struct CNode {
	virtual void _00() = 0;       // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

namespace Game {
namespace ItemPlant {
	struct FruitSlot : public CNode {
		virtual ~FruitSlot();         // _00
		virtual void getChildCount(); // _04

		// _00 VTBL
	};
} // namespace ItemPlant
} // namespace Game

#endif
