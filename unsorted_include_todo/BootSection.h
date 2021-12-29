#ifndef _BOOTSECTION_H
#define _BOOTSECTION_H

/*
    __vt__11BootSection:
    .4byte 0
    .4byte 0
    .4byte __dt__11BootSectionFv
    .4byte run__11BootSectionFv
    .4byte update__7SectionFv
    .4byte draw__7SectionFR8Graphics
    .4byte init__11BootSectionFv
    .4byte drawInit__7SectionFR8Graphics
    .4byte drawInit__7SectionFR8GraphicsQ27Section13EDrawInitMode
    .4byte doExit__7SectionFv
    .4byte forceFinish__7SectionFv
    .4byte forceReset__11BootSectionFv
    .4byte getCurrentSection__7SectionFv
    .4byte doLoadingStart__7SectionFv
    .4byte doLoading__7SectionFv
    .4byte doUpdate__11BootSectionFv
    .4byte doDraw__11BootSectionFR8Graphics
    .4byte isFinishable__7SectionFv
    .4byte initHIO__Q24Game14BaseHIOSectionFPQ24Game11HIORootNode
    .4byte refreshHIO__Q24Game14BaseHIOSectionFv
*/

struct Section {
	virtual void _00() = 0;                          // _00
	virtual void _04() = 0;                          // _04
	virtual void update();                           // _08
	virtual void draw(Graphics&);                    // _0C
	virtual void _10() = 0;                          // _10
	virtual void drawInit(Graphics&);                // _14
	virtual void drawInit(Graphics&, EDrawInitMode); // _18
	virtual void doExit();                           // _1C
	virtual void forceFinish();                      // _20
	virtual void _24() = 0;                          // _24
	virtual void getCurrentSection();                // _28
	virtual void doLoadingStart();                   // _2C
	virtual void doLoading();                        // _30
	virtual void _34() = 0;                          // _34
	virtual void _38() = 0;                          // _38
	virtual void isFinishable();                     // _3C

	// _00 VTBL
};

namespace Game {
struct BaseHIOSection {
	virtual void _00() = 0;             // _00
	virtual void _04() = 0;             // _04
	virtual void _08() = 0;             // _08
	virtual void _0C() = 0;             // _0C
	virtual void _10() = 0;             // _10
	virtual void _14() = 0;             // _14
	virtual void _18() = 0;             // _18
	virtual void _1C() = 0;             // _1C
	virtual void _20() = 0;             // _20
	virtual void _24() = 0;             // _24
	virtual void _28() = 0;             // _28
	virtual void _2C() = 0;             // _2C
	virtual void _30() = 0;             // _30
	virtual void _34() = 0;             // _34
	virtual void _38() = 0;             // _38
	virtual void _3C() = 0;             // _3C
	virtual void initHIO(HIORootNode*); // _40
	virtual void refreshHIO();          // _44

	// _00 VTBL
};
} // namespace Game

struct BootSection : public Section, public BaseHIOSection {
	virtual ~BootSection();                          // _00
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

#endif
