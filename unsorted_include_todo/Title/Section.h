#ifndef _TITLE_SECTION_H
#define _TITLE_SECTION_H

/*
    __vt__Q25Title7Section:
    .4byte 0
    .4byte 0
    .4byte __dt__Q25Title7SectionFv
    .4byte run__Q25Title7SectionFv
    .4byte update__7SectionFv
    .4byte draw__7SectionFR8Graphics
    .4byte init__Q25Title7SectionFv
    .4byte drawInit__7SectionFR8Graphics
    .4byte drawInit__7SectionFR8GraphicsQ27Section13EDrawInitMode
    .4byte doExit__Q25Title7SectionFv
    .4byte forceFinish__7SectionFv
    .4byte forceReset__Q25Title7SectionFv
    .4byte getCurrentSection__7SectionFv
    .4byte doLoadingStart__Q25Title7SectionFv
    .4byte doLoading__Q25Title7SectionFv
    .4byte doUpdate__Q25Title7SectionFv
    .4byte doDraw__Q25Title7SectionFR8Graphics
    .4byte isFinishable__Q25Title7SectionFv
    .4byte initHIO__Q24Game14BaseHIOSectionFPQ24Game11HIORootNode
    .4byte refreshHIO__Q24Game14BaseHIOSectionFv
    .4byte loadResource__Q25Title7SectionFv
*/

struct Section {
	virtual ~Section();                              // _08
	virtual void run();                              // _0C
	virtual void update();                           // _10
	virtual void draw(Graphics&);                    // _14
	virtual void init();                             // _18
	virtual void drawInit(Graphics&);                // _1C (weak)
	virtual void drawInit(Graphics&, EDrawInitMode); // _20 (weak)
	virtual void doExit();                           // _24
	virtual void forceFinish();                      // _28 (weak)
	virtual void forceReset();                       // _2C (weak)
	virtual void getCurrentSection();                // _30 (weak)
};

namespace Game {
struct BaseHIOSection {
	virtual ~BaseHIOSection();          // _08
	virtual void run();                 // _0C
	virtual void _10() = 0;             // _10
	virtual void _14() = 0;             // _14
	virtual void init();                // _18
	virtual void _1C() = 0;             // _1C
	virtual void _20() = 0;             // _20
	virtual void doExit();              // _24
	virtual void _28() = 0;             // _28
	virtual void forceReset();          // _2C (weak)
	virtual void _30() = 0;             // _30
	virtual void doLoadingStart();      // _34
	virtual void doLoading();           // _38
	virtual void doUpdate();            // _3C
	virtual void doDraw(Graphics&);     // _40
	virtual void isFinishable();        // _44
	virtual void initHIO(HIORootNode*); // _48
	virtual void refreshHIO();          // _4C
};
} // namespace Game

namespace Title {
struct Section : public Section, public BaseHIOSection {
	virtual ~Section();             // _08
	virtual void run();             // _0C
	virtual void init();            // _18
	virtual void doExit();          // _24
	virtual void forceReset();      // _2C (weak)
	virtual void doLoadingStart();  // _34
	virtual void doLoading();       // _38
	virtual void doUpdate();        // _3C
	virtual void doDraw(Graphics&); // _40
	virtual void isFinishable();    // _44
	virtual void loadResource();    // _50

	Section(JKRHeap*);
	void loadResident();
	void menuCancel(Menu&);
	void menuSelect(Menu&);
	void doUpdateMainTitle();
	void doUpdateOmake();
};
} // namespace Title

#endif
