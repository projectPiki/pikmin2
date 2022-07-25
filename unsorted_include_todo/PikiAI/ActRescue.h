#ifndef _PIKIAI_ACTRESCUE_H
#define _PIKIAI_ACTRESCUE_H

/*
        __vt__Q26PikiAI9ActRescue:
        .4byte 0
        .4byte 0
        .4byte init__Q26PikiAI9ActRescueFPQ26PikiAI9ActionArg
        .4byte exec__Q26PikiAI9ActRescueFv
        .4byte cleanup__Q26PikiAI9ActRescueFv
        .4byte emotion_success__Q26PikiAI9ActRescueFv
        .4byte emotion_fail__Q26PikiAI6ActionFv
        .4byte applicable__Q26PikiAI6ActionFv
        .4byte getNextAIType__Q26PikiAI9ActRescueFv
        .4byte bounceCallback__Q26PikiAI6ActionFPQ24Game4PikiPQ23Sys8Triangle
        .4byte
   collisionCallback__Q26PikiAI9ActRescueFPQ24Game4PikiRQ24Game9CollEvent .4byte
   platCallback__Q26PikiAI6ActionFPQ24Game4PikiRQ24Game9PlatEvent .4byte
   doDirectDraw__Q26PikiAI9ActRescueFR8Graphics .4byte
   "wallCallback__Q26PikiAI6ActionFR10Vector3<f>" .4byte
   getInfo__Q26PikiAI6ActionFPc .4byte
   onKeyEvent__Q26PikiAI9ActRescueFRCQ28SysShape8KeyEvent .4byte 0 .4byte 0
        .4byte "@40@4@onKeyEvent__Q26PikiAI9ActRescueFRCQ28SysShape8KeyEvent"
*/

namespace PikiAI {
struct Action {
    virtual void init(ActionArg*);                            // _08
    virtual void exec();                                      // _0C
    virtual void cleanup();                                   // _10
    virtual void emotion_success();                           // _14
    virtual void emotion_fail();                              // _18 (inline)
    virtual void applicable();                                // _1C (inline)
    virtual void getNextAIType();                             // _20 (inline)
    virtual void bounceCallback(Game::Piki*, Sys::Triangle*); // _24 (inline)
    virtual void collisionCallback(Game::Piki*, Game::CollEvent&); // _28
    virtual void platCallback(Game::Piki*, Game::PlatEvent&); // _2C (inline)
    virtual void doDirectDraw(Graphics&);                     // _30
    virtual void wallCallback(Vector3<float>&);               // _34 (inline)
    virtual void getInfo(char*);                              // _38
};
} // namespace PikiAI

namespace PikiAI {
struct ActRescue : public Action {
    virtual void init(ActionArg*);  // _08
    virtual void exec();            // _0C
    virtual void cleanup();         // _10
    virtual void emotion_success(); // _14
    virtual void getNextAIType();   // _20 (inline)
    virtual void collisionCallback(Game::Piki*, Game::CollEvent&); // _28
    virtual void doDirectDraw(Graphics&);                          // _30
    virtual void onKeyEvent(const SysShape::KeyEvent&);         // _3C (inline)
    virtual void _40() = 0;                                     // _40
    virtual void _44() = 0;                                     // _44
    virtual void @40 @4 @onKeyEvent(const SysShape::KeyEvent&); // _48 (inline)

    ActRescue(Game::Piki*);
    void initApproach();
    void execApproach();
    void initGo();
    void execGo();
    void initThrow();
    void execThrow();
};
} // namespace PikiAI

#endif
