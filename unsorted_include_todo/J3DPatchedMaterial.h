#ifndef _J3DPATCHEDMATERIAL_H
#define _J3DPATCHEDMATERIAL_H

/*
    __vt__18J3DPatchedMaterial:
    .4byte 0
    .4byte 0
    .4byte calc__11J3DMaterialFPA4_Cf
    .4byte calcDiffTexMtx__11J3DMaterialFPA4_Cf
    .4byte makeDisplayList__18J3DPatchedMaterialFv
    .4byte makeSharedDisplayList__18J3DPatchedMaterialFv
    .4byte load__18J3DPatchedMaterialFv
    .4byte loadSharedDL__18J3DPatchedMaterialFv
    .4byte patch__11J3DMaterialFv
    .4byte diff__11J3DMaterialFUl
    .4byte reset__18J3DPatchedMaterialFv
    .4byte change__18J3DPatchedMaterialFv
*/

struct J3DMaterial {
	virtual void calc(const float (*)[4]);           // _08
	virtual void calcDiffTexMtx(const float (*)[4]); // _0C
	virtual void makeDisplayList();                  // _10
	virtual void makeSharedDisplayList();            // _14
	virtual void load();                             // _18
	virtual void loadSharedDL();                     // _1C
	virtual void patch();                            // _20
	virtual void diff(unsigned long);                // _24

	// _00 VTBL
};

struct J3DPatchedMaterial : public J3DMaterial {
	virtual void makeDisplayList();       // _10
	virtual void makeSharedDisplayList(); // _14
	virtual void load();                  // _18
	virtual void loadSharedDL();          // _1C
	virtual void reset();                 // _28
	virtual void change();                // _2C

	// _00 VTBL
};

#endif
