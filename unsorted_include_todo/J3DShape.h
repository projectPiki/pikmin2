#ifndef _J3DSHAPE_H
#define _J3DSHAPE_H

struct J3DShape {
	virtual void draw() const;            // _00
	virtual void drawFast() const;        // _04
	virtual void simpleDraw() const;      // _08
	virtual void simpleDrawCache() const; // _0C

	// _00 VTBL
};

#endif
