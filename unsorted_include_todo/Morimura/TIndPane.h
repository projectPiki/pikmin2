#ifndef _MORIMURA_TINDPANE_H
#define _MORIMURA_TINDPANE_H

struct CNode {
	virtual void _00() = 0;       // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

namespace Morimura {
struct TIndPane : public CNode {
	virtual ~TIndPane();          // _00
	virtual void getChildCount(); // _04
	virtual void draw();          // _08

	// _00 VTBL
};
} // namespace Morimura

#endif
