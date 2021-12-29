#ifndef _TEXCASTER_CASTER_H
#define _TEXCASTER_CASTER_H

/*
    __vt__Q29TexCaster6Caster:
    .4byte 0
    .4byte 0
    .4byte __dt__Q29TexCaster6CasterFv
    .4byte getChildCount__5CNodeFv
*/

struct CNode {
	virtual ~CNode();             // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

namespace TexCaster {
struct Caster : public CNode {
	virtual ~Caster();            // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};
} // namespace TexCaster

#endif
