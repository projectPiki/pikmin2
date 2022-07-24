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
	virtual ~CNode();             // _08
	virtual void getChildCount(); // _0C
};

namespace TexCaster {
struct Caster : public CNode {
	virtual ~Caster(); // _08

	void hide();
	void fadein(float);
};
} // namespace TexCaster

#endif
