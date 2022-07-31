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
	virtual void doDraw(Graphics&);                  // _40
	virtual void isFinishable();                     // _44 (weak)
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
	virtual void _24() = 0;             // _24
	virtual void _28() = 0;             // _28
	virtual void forceReset();          // _2C (weak)
	virtual void _30() = 0;             // _30
	virtual void _34() = 0;             // _34
	virtual void _38() = 0;             // _38
	virtual void doUpdate();            // _3C
	virtual void doDraw(Graphics&);     // _40
	virtual void _44() = 0;             // _44
	virtual void initHIO(HIORootNode*); // _48
	virtual void refreshHIO();          // _4C
};
} // namespace Game

struct BootSection : public Section, public BaseHIOSection {
	virtual ~BootSection();         // _08
	virtual void run();             // _0C
	virtual void init();            // _18
	virtual void forceReset();      // _2C (weak)
	virtual void doUpdate();        // _3C
	virtual void doDraw(Graphics&); // _40

	BootSection(JKRHeap*);
	void loadBootResource();
	void load2DResource();
	void loadResident();
	void drawProgressive(Graphics&);
	void drawSetProgressive(Graphics&);
	void drawSetInterlace(Graphics&);
	void drawNintendoLogo(Graphics&);
	void drawDolbyLogo(Graphics&);
	void drawEpilepsy(Graphics&);
	void updateLoadResourceFirst();
	void updateLoadMemoryCard();
	void updateNintendoLogo();
	void updateProgressive();
	void updateWaitProgressive();
	void runWait(BootSection, bool(const void*, void*));
	void waitLoadResource();
	void setMode(int);
	void setModeEpilepsy();
};

#endif
