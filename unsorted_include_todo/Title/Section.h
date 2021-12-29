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

namespace Game {
struct BaseHIOSection {
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
	virtual void doDraw(Graphics&);                  // _38
	virtual void isFinishable();                     // _3C
	virtual void initHIO(HIORootNode*);              // _40
	virtual void refreshHIO();                       // _44

	// _00 VTBL
};
} // namespace Game

namespace Title {
struct Section : public BaseHIOSection {
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
	virtual void doDraw(Graphics&);                  // _38
	virtual void isFinishable();                     // _3C
	virtual void initHIO(HIORootNode*);              // _40
	virtual void refreshHIO();                       // _44
	virtual void loadResource();                     // _48

	// _00 VTBL
};
} // namespace Title

#endif
