#ifndef _MENUSECTION_H
#define _MENUSECTION_H

/*
    __vt__11MenuSection:
    .4byte 0
    .4byte 0
    .4byte __dt__11MenuSectionFv
    .4byte run__11MenuSectionFv
    .4byte update__7SectionFv
    .4byte draw__7SectionFR8Graphics
    .4byte init__7SectionFv
    .4byte drawInit__7SectionFR8Graphics
    .4byte drawInit__7SectionFR8GraphicsQ27Section13EDrawInitMode
    .4byte doExit__7SectionFv
    .4byte forceFinish__7SectionFv
    .4byte forceReset__7SectionFv
    .4byte getCurrentSection__11MenuSectionFv
    .4byte doLoadingStart__7SectionFv
    .4byte doLoading__7SectionFv
    .4byte 0
    .4byte 0
    .4byte isFinishable__7SectionFv
    .4byte 0
    .4byte 0
*/

struct Section {
	virtual ~Section();                              // _08 (weak)
	virtual void run();                              // _0C
	virtual void update();                           // _10
	virtual void draw(Graphics&);                    // _14
	virtual void init();                             // _18
	virtual void drawInit(Graphics&);                // _1C (weak)
	virtual void drawInit(Graphics&, EDrawInitMode); // _20 (weak)
	virtual void doExit();                           // _24 (weak)
	virtual void forceFinish();                      // _28 (weak)
	virtual void forceReset();                       // _2C (weak)
	virtual void getCurrentSection();                // _30 (weak)
	virtual void doLoadingStart();                   // _34 (weak)
	virtual void doLoading();                        // _38 (weak)
	virtual void _3C() = 0;                          // _3C
	virtual void _40() = 0;                          // _40
	virtual void isFinishable();                     // _44 (weak)
};

struct MenuSection : public Section {
	virtual ~MenuSection();           // _08 (weak)
	virtual void run();               // _0C
	virtual void getCurrentSection(); // _30 (weak)
	virtual void _3C() = 0;           // _3C
	virtual void _40() = 0;           // _40
	virtual void _48() = 0;           // _48
	virtual void _4C() = 0;           // _4C
};

#endif
