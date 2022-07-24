#ifndef _J3DMTXCALCANMBASE_H
#define _J3DMTXCALCANMBASE_H

/*
    __vt__17J3DMtxCalcAnmBase:
    .4byte 0
    .4byte 0
    .4byte __dt__17J3DMtxCalcAnmBaseFv
    .4byte setAnmTransform__17J3DMtxCalcAnmBaseFP15J3DAnmTransform
    .4byte getAnmTransform__17J3DMtxCalcAnmBaseFv
    .4byte setAnmTransform__10J3DMtxCalcFUcP15J3DAnmTransform
    .4byte getAnmTransform__10J3DMtxCalcFUc
    .4byte setWeight__10J3DMtxCalcFUcf
    .4byte getWeight__10J3DMtxCalcCFUc
    .4byte 0
    .4byte 0
*/

struct J3DMtxCalc {
	virtual ~J3DMtxCalc();                                         // _08 (inline)
	virtual void setAnmTransform(J3DAnmTransform*);                // _0C (inline)
	virtual void getAnmTransform();                                // _10 (inline)
	virtual void setAnmTransform(unsigned char, J3DAnmTransform*); // _14 (inline)
	virtual void getAnmTransform(unsigned char);                   // _18 (inline)
	virtual void setWeight(unsigned char, float);                  // _1C (inline)
	virtual void getWeight(unsigned char) const;                   // _20 (inline)
};

struct J3DMtxCalcAnmBase : public J3DMtxCalc {
	virtual ~J3DMtxCalcAnmBase();                   // _08 (inline)
	virtual void setAnmTransform(J3DAnmTransform*); // _0C (inline)
	virtual void getAnmTransform();                 // _10 (inline)
	virtual void _24() = 0;                         // _24
	virtual void _28() = 0;                         // _28
};

#endif
