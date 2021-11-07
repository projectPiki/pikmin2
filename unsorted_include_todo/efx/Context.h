#ifndef _EFX_CONTEXT_H
#define _EFX_CONTEXT_H

struct CNode {
	virtual void _00() = 0;       // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

namespace efx {
struct Context : public CNode {
	virtual ~Context();           // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};
} // namespace efx

#endif
