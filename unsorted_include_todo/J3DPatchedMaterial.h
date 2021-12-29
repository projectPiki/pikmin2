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
	virtual void calc(const float (*)[4]);           // _00
	virtual void calcDiffTexMtx(const float (*)[4]); // _04
	virtual void makeDisplayList();                  // _08
	virtual void makeSharedDisplayList();            // _0C
	virtual void load();                             // _10
	virtual void loadSharedDL();                     // _14
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
