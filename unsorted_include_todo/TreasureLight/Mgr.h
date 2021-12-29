#ifndef _TREASURELIGHT_MGR_H
#define _TREASURELIGHT_MGR_H

/*
    __vt__Q213TreasureLight3Mgr:
    .4byte 0
    .4byte 0
    .4byte __dt__Q213TreasureLight3MgrFv
    .4byte getChildCount__5CNodeFv
    .4byte update__Q213TreasureLight3MgrFv
    .4byte set__Q213TreasureLight3MgrFR8Graphics
    .4byte set__Q213TreasureLight3MgrFR7Matrixf
    .4byte drawDebugInfo__Q213TreasureLight3MgrFR8Graphics
    .4byte 0
*/

struct CNode {
	virtual ~CNode();             // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

namespace TreasureLight {
struct Mgr : public CNode {
	virtual ~Mgr();                        // _00
	virtual void getChildCount();          // _04
	virtual void update();                 // _08
	virtual void set(Graphics&);           // _0C
	virtual void set(Matrixf&);            // _10
	virtual void drawDebugInfo(Graphics&); // _14
	virtual void _18() = 0;                // _18

	// _00 VTBL
};
} // namespace TreasureLight

#endif
