#ifndef _GAME_GENERATORMGR_H
#define _GAME_GENERATORMGR_H

/*
    __vt__Q24Game12GeneratorMgr:
    .4byte 0
    .4byte 0
    .4byte __dt__Q24Game12GeneratorMgrFv
    .4byte getChildCount__5CNodeFv
    .4byte doAnimation__Q24Game12GeneratorMgrFv
    .4byte doEntry__Q24Game12GeneratorMgrFv
    .4byte doSetView__Q24Game12GeneratorMgrFi
    .4byte doViewCalc__Q24Game12GeneratorMgrFv
*/

struct CNode {
	virtual ~CNode();             // _08
	virtual void getChildCount(); // _0C

	// _00 VTBL
};

namespace Game {
struct GeneratorMgr : public CNode {
	virtual ~GeneratorMgr();     // _08
	virtual void doAnimation();  // _10
	virtual void doEntry();      // _14
	virtual void doSetView(int); // _18
	virtual void doViewCalc();   // _1C

	// _00 VTBL
};
} // namespace Game

#endif
