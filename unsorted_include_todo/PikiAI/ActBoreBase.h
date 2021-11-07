#ifndef _PIKIAI_ACTBOREBASE_H
#define _PIKIAI_ACTBOREBASE_H

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
struct ActBoreBase : public Action {
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
	virtual void _34() = 0;                                        // _34
	virtual void _38() = 0;                                        // _38
	virtual void _3C() = 0;                                        // _3C
	virtual void _40() = 0;                                        // _40

	// _00 VTBL
};
} // namespace PikiAI

#endif
