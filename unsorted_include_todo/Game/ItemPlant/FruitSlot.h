#ifndef _GAME_ITEMPLANT_FRUITSLOT_H
#define _GAME_ITEMPLANT_FRUITSLOT_H

/*
    __vt__Q34Game9ItemPlant9FruitSlot:
    .4byte 0
    .4byte 0
    .4byte __dt__Q34Game9ItemPlant9FruitSlotFv
    .4byte getChildCount__5CNodeFv
*/

struct CNode {
	virtual ~CNode();             // _00
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
