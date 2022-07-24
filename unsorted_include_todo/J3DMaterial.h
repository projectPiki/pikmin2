#ifndef _J3DMATERIAL_H
#define _J3DMATERIAL_H

/*
    __vt__11J3DMaterial:
    .4byte 0
    .4byte 0
    .4byte calc__11J3DMaterialFPA4_Cf
    .4byte calcDiffTexMtx__11J3DMaterialFPA4_Cf
    .4byte makeDisplayList__11J3DMaterialFv
    .4byte makeSharedDisplayList__11J3DMaterialFv
    .4byte load__11J3DMaterialFv
    .4byte loadSharedDL__11J3DMaterialFv
    .4byte patch__11J3DMaterialFv
    .4byte diff__11J3DMaterialFUl
    .4byte reset__11J3DMaterialFv
    .4byte change__11J3DMaterialFv
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
	virtual void reset();                            // _28
	virtual void change();                           // _2C
};

#endif
