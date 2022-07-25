#ifndef _PIKIAI_ACTGOTOSLOT_H
#define _PIKIAI_ACTGOTOSLOT_H

/*
    __vt__Q26PikiAI11ActGotoSlot:
    .4byte 0
    .4byte 0
    .4byte init__Q26PikiAI11ActGotoSlotFPQ26PikiAI9ActionArg
    .4byte exec__Q26PikiAI11ActGotoSlotFv
    .4byte cleanup__Q26PikiAI11ActGotoSlotFv
    .4byte emotion_success__Q26PikiAI6ActionFv
    .4byte emotion_fail__Q26PikiAI6ActionFv
    .4byte applicable__Q26PikiAI6ActionFv
    .4byte getNextAIType__Q26PikiAI6ActionFv
    .4byte bounceCallback__Q26PikiAI6ActionFPQ24Game4PikiPQ23Sys8Triangle
    .4byte collisionCallback__Q26PikiAI6ActionFPQ24Game4PikiRQ24Game9CollEvent
    .4byte platCallback__Q26PikiAI6ActionFPQ24Game4PikiRQ24Game9PlatEvent
    .4byte doDirectDraw__Q26PikiAI6ActionFR8Graphics
    .4byte "wallCallback__Q26PikiAI11ActGotoSlotFR10Vector3<f>"
    .4byte getInfo__Q26PikiAI6ActionFPc
*/

namespace PikiAI {
struct Action {
	virtual void init(ActionArg*);                                 // _08
	virtual void exec();                                           // _0C
	virtual void cleanup();                                        // _10
	virtual void emotion_success();                                // _14 (inline)
	virtual void emotion_fail();                                   // _18 (inline)
	virtual void applicable();                                     // _1C (inline)
	virtual void getNextAIType();                                  // _20 (inline)
	virtual void bounceCallback(Game::Piki*, Sys::Triangle*);      // _24 (inline)
	virtual void collisionCallback(Game::Piki*, Game::CollEvent&); // _28 (inline)
	virtual void platCallback(Game::Piki*, Game::PlatEvent&);      // _2C (inline)
	virtual void doDirectDraw(Graphics&);                          // _30 (inline)
	virtual void wallCallback(Vector3<float>&);                    // _34
	virtual void getInfo(char*);                                   // _38
};
} // namespace PikiAI

namespace PikiAI {
struct ActGotoSlot : public Action {
	virtual void init(ActionArg*);              // _08
	virtual void exec();                        // _0C
	virtual void cleanup();                     // _10
	virtual void wallCallback(Vector3<float>&); // _34

	ActGotoSlot(Game::Piki*);
	void resetTimers();
};
} // namespace PikiAI

#endif
