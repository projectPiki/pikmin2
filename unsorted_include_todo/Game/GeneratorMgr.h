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
	virtual ~CNode();             // _08 (inline)
	virtual void getChildCount(); // _0C
};

namespace Game {
struct GeneratorMgr : public CNode {
	virtual ~GeneratorMgr();     // _08 (inline)
	virtual void doAnimation();  // _10
	virtual void doEntry();      // _14
	virtual void doSetView(int); // _18
	virtual void doViewCalc();   // _1C

	GeneratorMgr();
	void addMgr(Game::GeneratorMgr*);
	void generate();
	void setDayLimit(int);
	void updateUseList();
	void getNext();
	void getChild();
	void updateCursorPos(Vector3<float>&);
	void read(Stream&, bool);
};
} // namespace Game

#endif
