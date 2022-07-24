#ifndef _J3DMTXCALCNOANMBASE_H
#define _J3DMTXCALCNOANMBASE_H

/*
    __vt__19J3DMtxCalcNoAnmBase:
    .4byte 0
    .4byte 0
    .4byte __dt__19J3DMtxCalcNoAnmBaseFv
    .4byte setAnmTransform__10J3DMtxCalcFP15J3DAnmTransform
    .4byte getAnmTransform__10J3DMtxCalcFv
    .4byte setAnmTransform__10J3DMtxCalcFUcP15J3DAnmTransform
    .4byte getAnmTransform__10J3DMtxCalcFUc
    .4byte setWeight__10J3DMtxCalcFUcf
    .4byte getWeight__10J3DMtxCalcCFUc
    .4byte 0
    .4byte 0
*/

struct J3DMtxCalc {
	virtual ~J3DMtxCalc();                                         // _08
	virtual void setAnmTransform(J3DAnmTransform*);                // _0C
	virtual void getAnmTransform();                                // _10
	virtual void setAnmTransform(unsigned char, J3DAnmTransform*); // _14
	virtual void getAnmTransform(unsigned char);                   // _18
	virtual void setWeight(unsigned char, float);                  // _1C
	virtual void getWeight(unsigned char) const;                   // _20

	// _00 VTBL
};

struct J3DMtxCalcNoAnmBase : public J3DMtxCalc {
	virtual ~J3DMtxCalcNoAnmBase(); // _08
	virtual void _24() = 0;         // _24
	virtual void _28() = 0;         // _28

	// _00 VTBL
};

#endif
