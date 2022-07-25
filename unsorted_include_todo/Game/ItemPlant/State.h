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
namespace FSMState < Game
{
	namespace ItemPlant {
	struct Item >
	{
		virtual void FSMState < init(Item*, StateArg*);                        // _08 (weak)
		virtual void FSMState < exec(Item*);                                   // _0C (weak)
		virtual void FSMState < cleanup(Item*);                                // _10 (weak)
		virtual void FSMState < resume(Item*);                                 // _14 (weak)
		virtual void FSMState < restart(Item*);                                // _18 (weak)
		virtual void FSMState < transit(Item*, int, StateArg*);                // _1C (weak)
		virtual void ItemState < onDamage(Item*, float);                       // _20 (weak)
		virtual void ItemState < onKeyEvent(Item*, const SysShape::KeyEvent&); // _24 (weak)
		virtual void ItemState < onBounce(Item*, Sys::Triangle*);              // _28 (weak)
		virtual void ItemState < onPlatCollision(Item*, PlatEvent&);           // _2C (weak)
		virtual void ItemState < onCollision(Item*, CollEvent&);               // _30 (weak)
	};
	} // namespace ItemPlant
} // namespace Game
} // namespace Game

namespace Game {
namespace ItemPlant {
struct State : public Item > {
	virtual void eventKarero(Item*); // _34 (weak)
	virtual void eventHaero(Item*);  // _38 (weak)
};
} // namespace ItemPlant
} // namespace Game

#endif
