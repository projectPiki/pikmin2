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
	virtual ~J3DMtxCalc();                                         // _00
	virtual void setAnmTransform(J3DAnmTransform*);                // _04
	virtual void getAnmTransform();                                // _08
	virtual void setAnmTransform(unsigned char, J3DAnmTransform*); // _0C
	virtual void getAnmTransform(unsigned char);                   // _10
	virtual void setWeight(unsigned char, float);                  // _14
	virtual void getWeight(unsigned char) const;                   // _18

	// _00 VTBL
};

struct J3DMtxCalcAnmBase : public J3DMtxCalc {
	virtual ~J3DMtxCalcAnmBase();                                  // _00
	virtual void setAnmTransform(J3DAnmTransform*);                // _04
	virtual void getAnmTransform();                                // _08
	virtual void setAnmTransform(unsigned char, J3DAnmTransform*); // _0C
	virtual void getAnmTransform(unsigned char);                   // _10
	virtual void setWeight(unsigned char, float);                  // _14
	virtual void getWeight(unsigned char) const;                   // _18
	virtual void _1C() = 0;                                        // _1C
	virtual void _20() = 0;                                        // _20

	// _00 VTBL
};

#endif
