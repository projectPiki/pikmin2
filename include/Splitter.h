#ifndef _SPLITTER_H
#define _SPLITTER_H

#include "types.h"

inline Vector2<u16> getScreenSize() {
    return Vector2<u16>(
        System::getRenderModeObj()->fbWidth, 
        System::getRenderModeObj()->efbHeight);
} // doesn't have to be an inline

struct Graphics;

struct Splitter {
	virtual void split2(f32);      // _08 (weak)
	virtual void split4(f32, f32); // _0C (weak)

	// _00 VTBL
};

struct HorizonalSplitter : public Splitter {
	HorizonalSplitter(Graphics*);

	virtual void split2(f32); // _08

	// _00 VTBL
	f32 mX1;             // _04, name from PikDecomp
	f32 mX2;             // _08, name from PikDecomp
	f32 mY1;             // _0C, name from PikDecomp
	f32 mY2;             // _10, name from PikDecomp
	Graphics* mGraphics; // _14
};

#endif
