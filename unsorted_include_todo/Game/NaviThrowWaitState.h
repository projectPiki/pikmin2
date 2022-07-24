#ifndef _GAME_NAVITHROWWAITSTATE_H
#define _GAME_NAVITHROWWAITSTATE_H

/*
        __vt__Q24Game18NaviThrowWaitState:
        .4byte 0
        .4byte 0
        .4byte init__Q24Game18NaviThrowWaitStateFPQ24Game4NaviPQ24Game8StateArg
        .4byte exec__Q24Game18NaviThrowWaitStateFPQ24Game4Navi
        .4byte cleanup__Q24Game18NaviThrowWaitStateFPQ24Game4Navi
        .4byte resume__Q24Game18NaviThrowWaitStateFPQ24Game4Navi
        .4byte restart__Q24Game18NaviThrowWaitStateFPQ24Game4Navi
        .4byte
   "transit__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4NaviiPQ24Game8StateArg"
        .4byte invincible__Q24Game9NaviStateFv
        .4byte onKeyEvent__Q24Game9NaviStateFPQ24Game4NaviRCQ28SysShape8KeyEvent
        .4byte
   collisionCallback__Q24Game9NaviStateFPQ24Game4NaviRQ24Game9CollEvent .4byte
   "wallCallback__Q24Game9NaviStateFPQ24Game4NaviR10Vector3<f>" .4byte
   bounceCallback__Q24Game9NaviStateFPQ24Game4NaviPQ23Sys8Triangle .4byte
   pressable__Q24Game9NaviStateFv .4byte callable__Q24Game9NaviStateFv .4byte
   ignoreAtari__Q24Game9NaviStateFPQ24Game8Creature .4byte
   needYChangeMotion__Q24Game9NaviStateFv .4byte vsUsableY__Q24Game9NaviStateFv
        .4byte draw2d__Q24Game18NaviThrowWaitStateFR14J2DGrafContextRi
        .4byte onKeyEvent__Q24Game18NaviThrowWaitStateFRCQ28SysShape8KeyEvent
        .4byte 0
        .4byte 0
        .4byte
   "@60@4@onKeyEvent__Q24Game18NaviThrowWaitStateFRCQ28SysShape8KeyEvent"
*/

namespace Game {
namespace FSMState < Game
{
    struct Navi >
    {
        virtual void _08() = 0;                                 // _08
        virtual void _0C() = 0;                                 // _0C
        virtual void _10() = 0;                                 // _10
        virtual void _14() = 0;                                 // _14
        virtual void _18() = 0;                                 // _18
        virtual void FSMState < transit(Navi*, int, StateArg*); // _1C

        // _00 VTBL
    };
} // namespace FSMState<Game
} // namespace Game

namespace Game {
struct NaviState {
    virtual void _08() = 0;                                    // _08
    virtual void _0C() = 0;                                    // _0C
    virtual void _10() = 0;                                    // _10
    virtual void _14() = 0;                                    // _14
    virtual void _18() = 0;                                    // _18
    virtual void _1C() = 0;                                    // _1C
    virtual void invincible();                                 // _20
    virtual void onKeyEvent(Navi*, const SysShape::KeyEvent&); // _24
    virtual void collisionCallback(Navi*, CollEvent&);         // _28
    virtual void wallCallback(Navi*, Vector3<float>&);         // _2C
    virtual void bounceCallback(Navi*, Sys::Triangle*);        // _30
    virtual void pressable();                                  // _34
    virtual void callable();                                   // _38
    virtual void ignoreAtari(Creature*);                       // _3C
    virtual void needYChangeMotion();                          // _40
    virtual void vsUsableY();                                  // _44

    // _00 VTBL
};
} // namespace Game

namespace Game {
struct NaviThrowWaitState : public Navi >, public NaviState {
    virtual void init(Navi*, StateArg*);                        // _08
    virtual void exec(Navi*);                                   // _0C
    virtual void cleanup(Navi*);                                // _10
    virtual void resume(Navi*);                                 // _14
    virtual void restart(Navi*);                                // _18
    virtual void draw2d(J2DGrafContext&, int&);                 // _48
    virtual void onKeyEvent(const SysShape::KeyEvent&);         // _4C
    virtual void _50() = 0;                                     // _50
    virtual void _54() = 0;                                     // _54
    virtual void @60 @4 @onKeyEvent(const SysShape::KeyEvent&); // _58

    // _00 VTBL
};
} // namespace Game

#endif
