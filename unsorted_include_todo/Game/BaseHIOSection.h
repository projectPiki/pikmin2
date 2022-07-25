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
*/

struct Section {
	virtual ~Section();                              // _08
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
	virtual void doUpdate();                         // _3C
	virtual void _40() = 0;                          // _40
	virtual void isFinishable();                     // _44 (weak)
};

namespace Game {
struct BaseHIOSection : public Section {
	virtual ~BaseHIOSection();          // _08
	virtual void doUpdate();            // _3C
	virtual void _40() = 0;             // _40
	virtual void initHIO(HIORootNode*); // _48
	virtual void refreshHIO();          // _4C

	BaseHIOSection(JKRHeap*);
	void setDisplay(JFWDisplay*, int);
	void createScreenRootNode();
	void addGenNode(CNode*);
};
} // namespace Game

#endif
