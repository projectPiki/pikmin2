#ifndef _GAME_ITEMPLANT_STATE_H
#define _GAME_ITEMPLANT_STATE_H

/*
    __vt__Q34Game9ItemPlant5State:
    .4byte 0
    .4byte 0
    .4byte "init__Q24Game32FSMState<Q34Game9ItemPlant4Item>FPQ34Game9ItemPlant4ItemPQ24Game8StateArg"
    .4byte "exec__Q24Game32FSMState<Q34Game9ItemPlant4Item>FPQ34Game9ItemPlant4Item"
    .4byte "cleanup__Q24Game32FSMState<Q34Game9ItemPlant4Item>FPQ34Game9ItemPlant4Item"
    .4byte "resume__Q24Game32FSMState<Q34Game9ItemPlant4Item>FPQ34Game9ItemPlant4Item"
    .4byte "restart__Q24Game32FSMState<Q34Game9ItemPlant4Item>FPQ34Game9ItemPlant4Item"
    .4byte "transit__Q24Game32FSMState<Q34Game9ItemPlant4Item>FPQ34Game9ItemPlant4ItemiPQ24Game8StateArg"
    .4byte "onDamage__Q24Game33ItemState<Q34Game9ItemPlant4Item>FPQ34Game9ItemPlant4Itemf"
    .4byte "onKeyEvent__Q24Game33ItemState<Q34Game9ItemPlant4Item>FPQ34Game9ItemPlant4ItemRCQ28SysShape8KeyEvent"
    .4byte "onBounce__Q24Game33ItemState<Q34Game9ItemPlant4Item>FPQ34Game9ItemPlant4ItemPQ23Sys8Triangle"
    .4byte "onPlatCollision__Q24Game33ItemState<Q34Game9ItemPlant4Item>FPQ34Game9ItemPlant4ItemRQ24Game9PlatEvent"
    .4byte "onCollision__Q24Game33ItemState<Q34Game9ItemPlant4Item>FPQ34Game9ItemPlant4ItemRQ24Game9CollEvent"
    .4byte eventKarero__Q34Game9ItemPlant5StateFPQ34Game9ItemPlant4Item
    .4byte eventHaero__Q34Game9ItemPlant5StateFPQ34Game9ItemPlant4Item
*/

namespace Game {
struct FSMState<Game::ItemPlant::Item> {
	virtual void FSMState<ItemPlant::Item>::init(ItemPlant::Item*, StateArg*);         // _08 (weak)
	virtual void FSMState<ItemPlant::Item>::exec(ItemPlant::Item*);                    // _0C (weak)
	virtual void FSMState<ItemPlant::Item>::cleanup(ItemPlant::Item*);                 // _10 (weak)
	virtual void FSMState<ItemPlant::Item>::resume(ItemPlant::Item*);                  // _14 (weak)
	virtual void FSMState<ItemPlant::Item>::restart(ItemPlant::Item*);                 // _18 (weak)
	virtual void FSMState<ItemPlant::Item>::transit(ItemPlant::Item*, int, StateArg*); // _1C (weak)
};
} // namespace Game

namespace Game {
struct ItemState<Game::ItemPlant::Item> {
	virtual void _08() = 0;                                                                           // _08
	virtual void _0C() = 0;                                                                           // _0C
	virtual void _10() = 0;                                                                           // _10
	virtual void _14() = 0;                                                                           // _14
	virtual void _18() = 0;                                                                           // _18
	virtual void _1C() = 0;                                                                           // _1C
	virtual void ItemState<ItemPlant::Item>::onDamage(ItemPlant::Item*, float);                       // _20 (weak)
	virtual void ItemState<ItemPlant::Item>::onKeyEvent(ItemPlant::Item*, const SysShape::KeyEvent&); // _24 (weak)
	virtual void ItemState<ItemPlant::Item>::onBounce(ItemPlant::Item*, Sys::Triangle*);              // _28 (weak)
	virtual void ItemState<ItemPlant::Item>::onPlatCollision(ItemPlant::Item*, PlatEvent&);           // _2C (weak)
	virtual void ItemState<ItemPlant::Item>::onCollision(ItemPlant::Item*, CollEvent&);               // _30 (weak)
};
} // namespace Game

namespace Game {
namespace ItemPlant {
struct State : public FSMState<Game::ItemPlant::Item>, public ItemState<Game::ItemPlant::Item> {
	virtual void eventKarero(Item*); // _34 (weak)
	virtual void eventHaero(Item*);  // _38 (weak)
};
} // namespace ItemPlant
} // namespace Game

#endif
