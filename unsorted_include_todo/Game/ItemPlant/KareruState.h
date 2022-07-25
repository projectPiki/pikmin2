#ifndef _GAME_ITEMPLANT_KARERUSTATE_H
#define _GAME_ITEMPLANT_KARERUSTATE_H

/*
    __vt__Q34Game9ItemPlant11KareruState:
    .4byte 0
    .4byte 0
    .4byte init__Q34Game9ItemPlant11KareruStateFPQ34Game9ItemPlant4ItemPQ24Game8StateArg
    .4byte exec__Q34Game9ItemPlant11KareruStateFPQ34Game9ItemPlant4Item
    .4byte cleanup__Q34Game9ItemPlant11KareruStateFPQ34Game9ItemPlant4Item
    .4byte "resume__Q24Game32FSMState<Q34Game9ItemPlant4Item>FPQ34Game9ItemPlant4Item"
    .4byte "restart__Q24Game32FSMState<Q34Game9ItemPlant4Item>FPQ34Game9ItemPlant4Item"
    .4byte "transit__Q24Game32FSMState<Q34Game9ItemPlant4Item>FPQ34Game9ItemPlant4ItemiPQ24Game8StateArg"
    .4byte onDamage__Q34Game9ItemPlant11KareruStateFPQ34Game9ItemPlant4Itemf
    .4byte onKeyEvent__Q34Game9ItemPlant11KareruStateFPQ34Game9ItemPlant4ItemRCQ28SysShape8KeyEvent
    .4byte "onBounce__Q24Game33ItemState<Q34Game9ItemPlant4Item>FPQ34Game9ItemPlant4ItemPQ23Sys8Triangle"
    .4byte "onPlatCollision__Q24Game33ItemState<Q34Game9ItemPlant4Item>FPQ34Game9ItemPlant4ItemRQ24Game9PlatEvent"
    .4byte "onCollision__Q24Game33ItemState<Q34Game9ItemPlant4Item>FPQ34Game9ItemPlant4ItemRQ24Game9CollEvent"
    .4byte eventKarero__Q34Game9ItemPlant5StateFPQ34Game9ItemPlant4Item
    .4byte eventHaero__Q34Game9ItemPlant11KareruStateFPQ34Game9ItemPlant4Item
*/

namespace Game {
namespace FSMState < Game
{
	namespace ItemPlant {
	struct Item >
	{
		virtual void init(Item*, StateArg*);                         // _08
		virtual void exec(Item*);                                    // _0C
		virtual void cleanup(Item*);                                 // _10
		virtual void FSMState < resume(Item*);                       // _14 (weak)
		virtual void FSMState < restart(Item*);                      // _18 (weak)
		virtual void FSMState < transit(Item*, int, StateArg*);      // _1C (weak)
		virtual void onDamage(Item*, float);                         // _20
		virtual void onKeyEvent(Item*, const SysShape::KeyEvent&);   // _24
		virtual void ItemState < onBounce(Item*, Sys::Triangle*);    // _28 (weak)
		virtual void ItemState < onPlatCollision(Item*, PlatEvent&); // _2C (weak)
		virtual void ItemState < onCollision(Item*, CollEvent&);     // _30 (weak)
	};
	} // namespace ItemPlant
} // namespace Game
} // namespace Game

namespace Game {
namespace ItemPlant {
struct State {
	virtual void init(Item*, StateArg*);                       // _08
	virtual void exec(Item*);                                  // _0C
	virtual void cleanup(Item*);                               // _10
	virtual void _14() = 0;                                    // _14
	virtual void _18() = 0;                                    // _18
	virtual void _1C() = 0;                                    // _1C
	virtual void onDamage(Item*, float);                       // _20
	virtual void onKeyEvent(Item*, const SysShape::KeyEvent&); // _24
	virtual void _28() = 0;                                    // _28
	virtual void _2C() = 0;                                    // _2C
	virtual void _30() = 0;                                    // _30
	virtual void eventKarero(Item*);                           // _34 (weak)
};
} // namespace ItemPlant
} // namespace Game

namespace Game {
namespace ItemPlant {
struct KareruState : public Item >, public State {
	virtual void init(Item*, StateArg*);                       // _08
	virtual void exec(Item*);                                  // _0C
	virtual void cleanup(Item*);                               // _10
	virtual void onDamage(Item*, float);                       // _20
	virtual void onKeyEvent(Item*, const SysShape::KeyEvent&); // _24
	virtual void eventHaero(Item*);                            // _38
};
} // namespace ItemPlant
} // namespace Game

#endif
