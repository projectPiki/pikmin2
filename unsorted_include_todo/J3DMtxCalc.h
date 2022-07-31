#ifndef _J3DMTXCALC_H
#define _J3DMTXCALC_H

/*
    __vt__10J3DMtxCalc:
    .4byte 0
    .4byte 0
    .4byte __dt__10J3DMtxCalcFv
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
	virtual ~J3DMtxCalc();                                         // _08 (weak)
	virtual void setAnmTransform(J3DAnmTransform*);                // _0C (weak)
	virtual void getAnmTransform();                                // _10 (weak)
	virtual void setAnmTransform(unsigned char, J3DAnmTransform*); // _14 (weak)
	virtual void getAnmTransform(unsigned char);                   // _18 (weak)
	virtual void setWeight(unsigned char, float);                  // _1C (weak)
	virtual void getWeight(unsigned char) const;                   // _20 (weak)
	virtual void _24() = 0;                                        // _24
	virtual void _28() = 0;                                        // _28

	void setMtxBuffer(J3DMtxBuffer*);
};

#endif
