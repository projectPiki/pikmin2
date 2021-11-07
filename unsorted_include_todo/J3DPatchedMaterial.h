#ifndef _J3DPATCHEDMATERIAL_H
#define _J3DPATCHEDMATERIAL_H

struct J3DMaterial {
	virtual void calc(const float (*)[4]);           // _00
	virtual void calcDiffTexMtx(const float (*)[4]); // _04
	virtual void _08() = 0;                          // _08
	virtual void _0C() = 0;                          // _0C
	virtual void _10() = 0;                          // _10
	virtual void _14() = 0;                          // _14
	virtual void patch();                            // _18
	virtual void diff(unsigned long);                // _1C

	// _00 VTBL
};

struct J3DPatchedMaterial : public J3DMaterial {
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
