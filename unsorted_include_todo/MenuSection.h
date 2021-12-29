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
	virtual void _34() = 0;                          // _34
	virtual void _38() = 0;                          // _38
	virtual void isFinishable();                     // _3C

	// _00 VTBL
};

struct MenuSection : public Section {
	virtual ~MenuSection();                          // _00
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
	virtual void _40() = 0;                          // _40
	virtual void _44() = 0;                          // _44

	// _00 VTBL
};

#endif
