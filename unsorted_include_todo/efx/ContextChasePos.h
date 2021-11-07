#ifndef _EFX_CONTEXTCHASEPOS_H
#define _EFX_CONTEXTCHASEPOS_H

struct CNode {
	virtual void _00() = 0;       // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

namespace efx {
struct ContextChasePos : public CNode {
	virtual ~ContextChasePos();   // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};
} // namespace efx

#endif
