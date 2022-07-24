#ifndef _J3DLOCKEDMATERIAL_H
#define _J3DLOCKEDMATERIAL_H

/*
    __vt__17J3DLockedMaterial:
    .4byte 0
    .4byte 0
    .4byte calc__17J3DLockedMaterialFPA4_Cf
    .4byte calcDiffTexMtx__11J3DMaterialFPA4_Cf
    .4byte makeDisplayList__17J3DLockedMaterialFv
    .4byte makeSharedDisplayList__17J3DLockedMaterialFv
    .4byte load__17J3DLockedMaterialFv
    .4byte loadSharedDL__17J3DLockedMaterialFv
    .4byte patch__17J3DLockedMaterialFv
    .4byte diff__17J3DLockedMaterialFUl
    .4byte reset__17J3DLockedMaterialFv
    .4byte change__17J3DLockedMaterialFv
*/

struct J3DMaterial {
	virtual void calc(const float (*)[4]);           // _08
	virtual void calcDiffTexMtx(const float (*)[4]); // _0C

	// _00 VTBL
};

struct J3DLockedMaterial : public J3DMaterial {
	virtual void calc(const float (*)[4]); // _08
	virtual void makeDisplayList();        // _10
	virtual void makeSharedDisplayList();  // _14
	virtual void load();                   // _18
	virtual void loadSharedDL();           // _1C
	virtual void patch();                  // _20
	virtual void diff(unsigned long);      // _24
	virtual void reset();                  // _28
	virtual void change();                 // _2C

	// _00 VTBL
};

#endif
