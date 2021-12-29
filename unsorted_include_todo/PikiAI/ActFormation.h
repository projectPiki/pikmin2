#ifndef _PIKIAI_ACTFORMATION_H
#define _PIKIAI_ACTFORMATION_H

/*
        __vt__Q26PikiAI12ActFormation:
        .4byte 0
        .4byte 0
        .4byte init__Q26PikiAI12ActFormationFPQ26PikiAI9ActionArg
        .4byte exec__Q26PikiAI12ActFormationFv
        .4byte cleanup__Q26PikiAI12ActFormationFv
        .4byte emotion_success__Q26PikiAI6ActionFv
        .4byte emotion_fail__Q26PikiAI6ActionFv
        .4byte applicable__Q26PikiAI6ActionFv
        .4byte getNextAIType__Q26PikiAI12ActFormationFv
        .4byte bounceCallback__Q26PikiAI6ActionFPQ24Game4PikiPQ23Sys8Triangle
        .4byte
   collisionCallback__Q26PikiAI12ActFormationFPQ24Game4PikiRQ24Game9CollEvent
        .4byte
   platCallback__Q26PikiAI12ActFormationFPQ24Game4PikiRQ24Game9PlatEvent .4byte
   doDirectDraw__Q26PikiAI6ActionFR8Graphics .4byte
   "wallCallback__Q26PikiAI12ActFormationFR10Vector3<f>" .4byte
   getInfo__Q26PikiAI6ActionFPc .4byte resumable__Q26PikiAI12ActFormationFv
        .4byte inform__Q26PikiAI12ActFormationFi
        .4byte onKeyEvent__Q26PikiAI12ActFormationFRCQ28SysShape8KeyEvent
        .4byte 0
        .4byte 0
        .4byte "@100@4@inform__Q26PikiAI12ActFormationFi"
        .4byte 0
        .4byte 0
        .4byte
   "@108@4@onKeyEvent__Q26PikiAI12ActFormationFRCQ28SysShape8KeyEvent"
*/

namespace PikiAI {
struct Action {
    virtual void init(ActionArg*);                                 // _00
    virtual void exec();                                           // _04
    virtual void cleanup();                                        // _08
    virtual void emotion_success();                                // _0C
    virtual void emotion_fail();                                   // _10
    virtual void applicable();                                     // _14
    virtual void getNextAIType();                                  // _18
    virtual void bounceCallback(Game::Piki*, Sys::Triangle*);      // _1C
    virtual void collisionCallback(Game::Piki*, Game::CollEvent&); // _20
    virtual void platCallback(Game::Piki*, Game::PlatEvent&);      // _24
    virtual void doDirectDraw(Graphics&);                          // _28
    virtual void wallCallback(Vector3<float>&);                    // _2C
    virtual void getInfo(char*);                                   // _30

    // _00 VTBL
};
} // namespace PikiAI

namespace PikiAI {
struct ActFormation : public Action {
    virtual void init(ActionArg*);                                 // _00
    virtual void exec();                                           // _04
    virtual void cleanup();                                        // _08
    virtual void emotion_success();                                // _0C
    virtual void emotion_fail();                                   // _10
    virtual void applicable();                                     // _14
    virtual void getNextAIType();                                  // _18
    virtual void bounceCallback(Game::Piki*, Sys::Triangle*);      // _1C
    virtual void collisionCallback(Game::Piki*, Game::CollEvent&); // _20
    virtual void platCallback(Game::Piki*, Game::PlatEvent&);      // _24
    virtual void doDirectDraw(Graphics&);                          // _28
    virtual void wallCallback(Vector3<float>&);                    // _2C
    virtual void getInfo(char*);                                   // _30
    virtual void resumable();                                      // _34
    virtual void inform(int);                                      // _38
    virtual void onKeyEvent(const SysShape::KeyEvent&);            // _3C
    virtual void _40() = 0;                                        // _40
    virtual void _44() = 0;                                        // _44
    virtual void @100 @4 @inform(int);                             // _48
    virtual void _4C() = 0;                                        // _4C
    virtual void _50() = 0;                                        // _50
    virtual void @108 @4 @onKeyEvent(const SysShape::KeyEvent&);   // _54

    // _00 VTBL
};
} // namespace PikiAI

#endif
