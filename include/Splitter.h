#ifndef _SPLITTER_H
#define _SPLITTER_H

#include "types.h"
#include "System.h"
#include "Rect.h"

inline Vector2<u16> getScreenSize()
{
	return Vector2<u16>(System::getRenderModeObj()->fbWidth, System::getRenderModeObj()->efbHeight);
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
