#ifndef _EFX_CONTEXTCHASEPOS_H
#define _EFX_CONTEXTCHASEPOS_H

/*
    __vt__Q23efx15ContextChasePos:
    .4byte 0
    .4byte 0
    .4byte __dt__Q23efx15ContextChasePosFv
    .4byte getChildCount__5CNodeFv
*/

struct CNode {
	virtual ~CNode();             // _08
	virtual void getChildCount(); // _0C

	// _00 VTBL
};

namespace efx {
struct ContextChasePos : public CNode {
	virtual ~ContextChasePos(); // _08

	// _00 VTBL
};
} // namespace efx

#endif
