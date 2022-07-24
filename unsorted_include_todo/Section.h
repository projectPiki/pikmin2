#ifndef _SECTION_H
#define _SECTION_H

/*
    __vt__7Section:
    .4byte 0
    .4byte 0
    .4byte __dt__7SectionFv
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
    .4byte 0
    .4byte 0
    .4byte isFinishable__7SectionFv
*/

struct Section {
	virtual ~Section();                              // _08
	virtual void run();                              // _0C
	virtual void update();                           // _10
	virtual void draw(Graphics&);                    // _14
	virtual void init();                             // _18
	virtual void drawInit(Graphics&);                // _1C
	virtual void drawInit(Graphics&, EDrawInitMode); // _20
	virtual void doExit();                           // _24
	virtual void forceFinish();                      // _28
	virtual void forceReset();                       // _2C
	virtual void getCurrentSection();                // _30
	virtual void doLoadingStart();                   // _34
	virtual void doLoading();                        // _38
	virtual void _3C() = 0;                          // _3C
	virtual void _40() = 0;                          // _40
	virtual void isFinishable();                     // _44

	// _00 VTBL
};

#endif
