#ifndef _J3DMTXCALCBLENDANMBASE_H
#define _J3DMTXCALCBLENDANMBASE_H

/*
    __vt__22J3DMtxCalcBlendAnmBase:
    .4byte 0
    .4byte 0
    .4byte __dt__22J3DMtxCalcBlendAnmBaseFv
    .4byte setAnmTransform__22J3DMtxCalcBlendAnmBaseFP15J3DAnmTransform
    .4byte getAnmTransform__22J3DMtxCalcBlendAnmBaseFv
    .4byte setAnmTransform__22J3DMtxCalcBlendAnmBaseFUcP15J3DAnmTransform
    .4byte getAnmTransform__22J3DMtxCalcBlendAnmBaseFUc
    .4byte setWeight__22J3DMtxCalcBlendAnmBaseFUcf
    .4byte getWeight__22J3DMtxCalcBlendAnmBaseCFUc
    .4byte 0
    .4byte 0
*/

struct J3DMtxCalcBlendAnmBase {
	virtual ~J3DMtxCalcBlendAnmBase();                             // _00
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
