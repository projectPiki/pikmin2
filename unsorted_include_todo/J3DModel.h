#ifndef _J3DMODEL_H
#define _J3DMODEL_H

/*
    __vt__8J3DModel:
    .4byte 0
    .4byte 0
    .4byte update__8J3DModelFv
    .4byte entry__8J3DModelFv
    .4byte calc__8J3DModelFv
    .4byte calcMaterial__8J3DModelFv
    .4byte calcDiffTexMtx__8J3DModelFv
    .4byte viewCalc__8J3DModelFv
    .4byte __dt__8J3DModelFv
*/

struct J3DModel {
	virtual void update();         // _08
	virtual void entry();          // _0C
	virtual void calc();           // _10
	virtual void calcMaterial();   // _14
	virtual void calcDiffTexMtx(); // _18
	virtual void viewCalc();       // _1C
	virtual ~J3DModel();           // _20 (weak)
};

#endif
