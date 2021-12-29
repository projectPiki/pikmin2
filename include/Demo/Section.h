#ifndef _DEMO_SECTION_H
#define _DEMO_SECTION_H

/*
    __vt__Q24Demo7Section:
    .4byte run__7SectionFv
    .4byte update__7SectionFv
    .4byte draw__7SectionFR8Graphics
    .4byte init__Q24Demo7SectionFv
    .4byte drawInit__7SectionFR8Graphics
    .4byte drawInit__7SectionFR8GraphicsQ27Section13EDrawInitMode
    .4byte doExit__Q24Demo7SectionFv
    .4byte forceFinish__7SectionFv
    .4byte forceReset__Q24Demo7SectionFv
    .4byte getCurrentSection__7SectionFv
    .4byte doLoadingStart__Q24Demo7SectionFv
    .4byte doLoading__Q24Demo7SectionFv
    .4byte doUpdate__Q24Demo7SectionFv
    .4byte doDraw__Q24Demo7SectionFR8Graphics
    .4byte isFinishable__7SectionFv
    .4byte initHIO__Q24Game14BaseHIOSectionFPQ24Game11HIORootNode
    .4byte refreshHIO__Q24Game14BaseHIOSectionFv
*/

#include "Game/BaseHIOSection.h"

enum EDrawInitMode {};

namespace Demo {
struct Section : public Game::BaseHIOSection {
	virtual ~Section();             // _00
	virtual void init();            // _10
	virtual void doExit();          // _1C
	virtual bool forceReset();      // _24
	virtual void doLoadingStart();  // _2C
	virtual bool doLoading();       // _30
	virtual bool doUpdate();        // _34
	virtual void doDraw(Graphics&); // _38
	virtual bool isFinishable();    // _3C

	// _00 VTBL
};
} // namespace Demo

#endif
