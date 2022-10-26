#ifndef _SPLITTER_H
#define _SPLITTER_H

#include "types.h"

struct Graphics;

struct Splitter {
	virtual void split2(f32);      // _08 (weak)
	virtual void split4(f32, f32); // _0C (weak)

	// _00 VTBL
};

struct HorizontalSplitter : public Splitter {
	HorizontalSplitter(Graphics*);

	virtual void split2(f32); // _08

	// _00 VTBL
	f32 m_x1;             // _04, name from PikDecomp
	f32 m_x2;             // _08, name from PikDecomp
	f32 m_y1;             // _0C, name from PikDecomp
	f32 m_y2;             // _10, name from PikDecomp
	Graphics* m_graphics; // _14
};

#endif
