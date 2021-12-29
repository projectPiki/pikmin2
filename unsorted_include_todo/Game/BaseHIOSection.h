#ifndef _GAME_BASEHIOSECTION_H
#define _GAME_BASEHIOSECTION_H

/*
    __vt__Q24Game14BaseHIOSection:
    .4byte 0
    .4byte 0
    .4byte __dt__Q24Game14BaseHIOSectionFv
    .4byte run__7SectionFv
    .4byte update__7SectionFv
    .4byte draw__7SectionFR8Graphics
    .4byte init__7SectionFv
    .4byte drawInit__7SectionFR8Graphics
    .4byte drawInit__7SectionFR8GraphicsQ27Section13EDrawInitMode
    .4byte doExit__7SectionFv
    .4byte forceFinish__7SectionFv
    .4byte forceReset__7SectionFv
    .4byte getCurrentSection__7SectionFv
    .4byte doLoadingStart__7SectionFv
    .4byte doLoading__7SectionFv
    .4byte doUpdate__Q24Game14BaseHIOSectionFv
    .4byte 0
    .4byte isFinishable__7SectionFv
    .4byte initHIO__Q24Game14BaseHIOSectionFPQ24Game11HIORootNode
    .4byte refreshHIO__Q24Game14BaseHIOSectionFv
    .4byte 0
*/

struct Section {
	virtual ~Section();                              // _00
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
