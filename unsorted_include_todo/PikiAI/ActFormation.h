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
    virtual void init(ActionArg*);                            // _08
    virtual void exec();                                      // _0C
    virtual void cleanup();                                   // _10
    virtual void emotion_success();                           // _14 (inline)
    virtual void emotion_fail();                              // _18 (inline)
    virtual void applicable();                                // _1C (inline)
    virtual void getNextAIType();                             // _20 (inline)
    virtual void bounceCallback(Game::Piki*, Sys::Triangle*); // _24 (inline)
    virtual void collisionCallback(Game::Piki*, Game::CollEvent&); // _28
    virtual void platCallback(Game::Piki*, Game::PlatEvent&);      // _2C
    virtual void doDirectDraw(Graphics&);       // _30 (inline)
    virtual void wallCallback(Vector3<float>&); // _34
    virtual void getInfo(char*);                // _38
};
} // namespace PikiAI

namespace PikiAI {
struct ActFormation : public Action {
    virtual void init(ActionArg*); // _08
    virtual void exec();           // _0C
    virtual void cleanup();        // _10
    virtual void getNextAIType();  // _20 (inline)
    virtual void collisionCallback(Game::Piki*, Game::CollEvent&); // _28
    virtual void platCallback(Game::Piki*, Game::PlatEvent&);      // _2C
    virtual void wallCallback(Vector3<float>&);                    // _34
    virtual void resumable();                                    // _3C (inline)
    virtual void inform(int);                                    // _40 (inline)
    virtual void onKeyEvent(const SysShape::KeyEvent&);          // _44 (inline)
    virtual void _48() = 0;                                      // _48
    virtual void _4C() = 0;                                      // _4C
    virtual void @100 @4 @inform(int);                           // _50 (inline)
    virtual void _54() = 0;                                      // _54
    virtual void _58() = 0;                                      // _58
    virtual void @108 @4 @onKeyEvent(const SysShape::KeyEvent&); // _5C (inline)

    ActFormation(Game::Piki*);
    void startSort();
    void setFormed();
};
} // namespace PikiAI

#endif
