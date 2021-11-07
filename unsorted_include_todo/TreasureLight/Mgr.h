#ifndef _TREASURELIGHT_MGR_H
#define _TREASURELIGHT_MGR_H

struct CNode {
	virtual void _00() = 0;       // _00
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
