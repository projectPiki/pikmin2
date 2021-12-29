#ifndef _J3DVTXCOLORCALC_H
#define _J3DVTXCOLORCALC_H

/*
    __vt__15J3DVtxColorCalc:
    .4byte 0
    .4byte 0
    .4byte calc__15J3DVtxColorCalcFP15J3DVertexBuffer
    .4byte __dt__15J3DVtxColorCalcFv
*/

struct J3DVtxColorCalc {
	virtual void calc(J3DVertexBuffer*); // _00
	virtual ~J3DVtxColorCalc();          // _04

	// _00 VTBL
};

#endif
