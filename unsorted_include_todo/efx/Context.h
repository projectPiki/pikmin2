#ifndef _EFX_CONTEXT_H
#define _EFX_CONTEXT_H

/*
    __vt__Q23efx7Context:
    .4byte 0
    .4byte 0
    .4byte __dt__Q23efx7ContextFv
    .4byte getChildCount__5CNodeFv
*/

struct CNode {
	virtual ~CNode();             // _08 (inline)
	virtual void getChildCount(); // _0C
};

namespace efx {
struct Context : public CNode {
	virtual ~Context(); // _08 (inline)

	Context();
};
} // namespace efx

#endif
