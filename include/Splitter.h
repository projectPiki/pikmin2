#ifndef _SPLITTER_H
#define _SPLITTER_H

#include "types.h"
#include "System.h"
#include "Rect.h"

inline Vector2f getScreenSize()
{
	u16 x = sys->getRenderModeObj()->fbWidth;
	u16 y = sys->getRenderModeObj()->efbHeight;
	return Vector2f(x, y);
} // doesn't have to be an inline

struct Graphics;

struct Splitter {
	virtual void split2(f32) { }      // _08 (weak)
	virtual void split4(f32, f32) { } // _0C (weak)

	// _00 VTBL
};

struct HorizonalSplitter : public Splitter {
	HorizonalSplitter(Graphics*);

	virtual void split2(f32); // _08

	// _00 VTBL
	Rectf mBounds;
	Graphics* mGraphics; // _14
};

// Unused struct (vertical splitscreen?)
struct VerticalSplitter : public Splitter {
	VerticalSplitter(Graphics*);

	virtual void split2(f32); // _08

	// _00 VTBL
};

// Unused struct (4 player pikmin 2 real?)
struct FourSplitter : public Splitter {
	FourSplitter(Graphics*);

	virtual void split4(f32, f32); // _08

	// _00 VTBL
};

#endif
