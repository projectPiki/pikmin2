#ifndef _GAME_BASEHIOSECTION_H
#define _GAME_BASEHIOSECTION_H

struct Section {
	virtual void _00() = 0;                          // _00
	virtual void run();                              // _04
	virtual void update();                           // _08
	virtual void draw(Graphics&);                    // _0C
	virtual void init();                             // _10
	virtual void drawInit(Graphics&);                // _14
	virtual void drawInit(Graphics&, EDrawInitMode); // _18
	virtual void doExit();                           // _1C
	virtual void forceFinish();                      // _20
	virtual void forceReset();                       // _24
	virtual void getCurrentSection();                // _28
	virtual void doLoadingStart();                   // _2C
	virtual void doLoading();                        // _30
	virtual void _34() = 0;                          // _34
	virtual void _38() = 0;                          // _38
	virtual void isFinishable();                     // _3C

	// _00 VTBL
};

namespace Game {
struct BaseHIOSection : public Section {
	virtual ~BaseHIOSection();                       // _00
	virtual void run();                              // _04
	virtual void update();                           // _08
	virtual void draw(Graphics&);                    // _0C
	virtual void init();                             // _10
	virtual void drawInit(Graphics&);                // _14
	virtual void drawInit(Graphics&, EDrawInitMode); // _18
	virtual void doExit();                           // _1C
	virtual void forceFinish();                      // _20
	virtual void forceReset();                       // _24
	virtual void getCurrentSection();                // _28
	virtual void doLoadingStart();                   // _2C
	virtual void doLoading();                        // _30
	virtual void doUpdate();                         // _34
	virtual void _38() = 0;                          // _38
	virtual void isFinishable();                     // _3C
	virtual void initHIO(HIORootNode*);              // _40
	virtual void refreshHIO();                       // _44
	virtual void _48() = 0;                          // _48

	// _00 VTBL
};
} // namespace Game

#endif
