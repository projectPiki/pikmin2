#ifndef _TEXCASTER_CASTER_H
#define _TEXCASTER_CASTER_H

struct CNode {
	virtual void _00() = 0;       // _00
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
