#ifndef _J2DANMTRANSFORMFULL_H
#define _J2DANMTRANSFORMFULL_H

/*
    __vt__19J2DAnmTransformFull:
    .4byte 0
    .4byte 0
    .4byte __dt__19J2DAnmTransformFullFv
    .4byte searchUpdateMaterialID__10J2DAnmBaseFP9J2DScreen
    .4byte getTransform__19J2DAnmTransformFullCFUsP16J3DTransformInfo
*/

struct J2DAnmBase {
	virtual ~J2DAnmBase();                           // _08 (weak)
	virtual void searchUpdateMaterialID(J2DScreen*); // _0C (weak)
};

struct J2DAnmTransformFull : public J2DAnmBase {
	virtual ~J2DAnmTransformFull();                                     // _08 (weak)
	virtual void getTransform(unsigned short, J3DTransformInfo*) const; // _10
};

#endif
