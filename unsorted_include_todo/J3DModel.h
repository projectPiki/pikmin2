#ifndef _J3DMODEL_H
#define _J3DMODEL_H

struct J3DModel {
	virtual void update();         // _00
	virtual void entry();          // _04
	virtual void calc();           // _08
	virtual void calcMaterial();   // _0C
	virtual void calcDiffTexMtx(); // _10
	virtual void viewCalc();       // _14
	virtual ~J3DModel();           // _18

	// _00 VTBL
};

#endif
