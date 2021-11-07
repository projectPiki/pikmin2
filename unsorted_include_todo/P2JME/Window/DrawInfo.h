#ifndef _P2JME_WINDOW_DRAWINFO_H
#define _P2JME_WINDOW_DRAWINFO_H

struct CNode {
	virtual void _00() = 0;       // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

namespace P2JME {
namespace Window {
	struct DrawInfo : public CNode {
		virtual ~DrawInfo();          // _00
		virtual void getChildCount(); // _04
		virtual void _08() = 0;       // _08

		// _00 VTBL
	};
} // namespace Window
} // namespace P2JME

#endif
