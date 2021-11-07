#ifndef _J3DMATERIAL_H
#define _J3DMATERIAL_H

struct J3DMaterial {
	virtual void calc(const float (*)[4]);           // _00
	virtual void calcDiffTexMtx(const float (*)[4]); // _04
	virtual void makeDisplayList();                  // _08
	virtual void makeSharedDisplayList();            // _0C
	virtual void load();                             // _10
	virtual void loadSharedDL();                     // _14
	virtual void patch();                            // _18
	virtual void diff(unsigned long);                // _1C
	virtual void reset();                            // _20
	virtual void change();                           // _24

	// _00 VTBL
};

#endif
