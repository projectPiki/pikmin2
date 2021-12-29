#ifndef _J3DSHAPE_H
#define _J3DSHAPE_H

/*
    __vt__8J3DShape:
    .4byte 0
    .4byte 0
    .4byte draw__8J3DShapeCFv
    .4byte drawFast__8J3DShapeCFv
    .4byte simpleDraw__8J3DShapeCFv
    .4byte simpleDrawCache__8J3DShapeCFv
*/

struct J3DShape {
	virtual void draw() const;            // _00
	virtual void drawFast() const;        // _04
	virtual void simpleDraw() const;      // _08
	virtual void simpleDrawCache() const; // _0C

	// _00 VTBL
};

#endif
