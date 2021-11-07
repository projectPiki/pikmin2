#ifndef _EBI_TITLE_TTITLELIGHTMGR_H
#define _EBI_TITLE_TTITLELIGHTMGR_H

struct CNode {
	virtual void _00() = 0;       // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

struct LightMgr {
	virtual void _00() = 0;                // _00
	virtual void _04() = 0;                // _04
	virtual void _08() = 0;                // _08
	virtual void set(Graphics&);           // _0C
	virtual void set(Matrixf&);            // _10
	virtual void drawDebugInfo(Graphics&); // _14

	// _00 VTBL
};

namespace ebi {
namespace title {
	struct TTitleLightMgr : public CNode, public LightMgr {
		virtual ~TTitleLightMgr();             // _00
		virtual void getChildCount();          // _04
		virtual void update();                 // _08
		virtual void set(Graphics&);           // _0C
		virtual void set(Matrixf&);            // _10
		virtual void drawDebugInfo(Graphics&); // _14
		virtual void _18() = 0;                // _18

		// _00 VTBL
	};
} // namespace title
} // namespace ebi

#endif
