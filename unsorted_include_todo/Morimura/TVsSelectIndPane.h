#ifndef _MORIMURA_TVSSELECTINDPANE_H
#define _MORIMURA_TVSSELECTINDPANE_H

struct CNode {
	virtual void _00() = 0;       // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

namespace Morimura {
struct TVsSelectIndPane : public CNode {
	virtual ~TVsSelectIndPane();  // _00
	virtual void getChildCount(); // _04
	virtual void draw();          // _08
	virtual void _0C() = 0;       // _0C

	// _00 VTBL
};
} // namespace Morimura

#endif
