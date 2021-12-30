#ifndef _GAME_NAVISTATE_H
#define _GAME_NAVISTATE_H

#include "Game/StateMachine.h"
#include "Game/Navi.h"
#include "SysShape/KeyEvent.h"
namespace Game {

struct NaviState : public FSMState<Navi> {
	virtual void init(Navi*, StateArg*);         // _00
	virtual void exec(Navi*);                    // _04
	virtual void cleanup(Navi*);                 // _08
	virtual void resume(Navi*);                  // _0C
	virtual void restart(Navi*);                 // _10
	virtual void transit(Navi*, int, StateArg*); // _14
    virtual bool invincible();
    virtual void onKeyEvent(Navi*, SysShape::KeyEvent const&);
    virtual void collisionCallback(Navi*, CollEvent*);
    virtual void wallCallback(Navi*, Vector3<float>&);
    virtual void bounceCallback(Navi*, Sys::Triangle*);
    virtual bool pressable();
    virtual bool callable();
    virtual bool ignoreAtari();
    virtual bool needYChangeMotion();
    virtual bool vsUsableY();
    virtual void draw2d(J2DGrafContext&, int&);
};

struct NaviChangeState : public NaviState {
    char* name;     // _0C
    Navi* newNavi;  // _10
    bool finish;    // _14
};

struct NaviFollowState : public NaviState {

    virtual bool needYChangeMotion();

    char* name;         // _0C
    Navi* targetNavi;   // _10
    u8 finish;        // _14
    int unk;            // _18
    int counter;        // _1C
};

} // namespace Game

#endif  // _GAME_NAVISTATE_H
