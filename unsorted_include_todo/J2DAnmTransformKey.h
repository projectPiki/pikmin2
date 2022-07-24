#ifndef _J2DANMTRANSFORMKEY_H
#define _J2DANMTRANSFORMKEY_H

/*
    __vt__18J2DAnmTransformKey:
    .4byte 0
    .4byte 0
    .4byte __dt__18J2DAnmTransformKeyFv
    .4byte searchUpdateMaterialID__10J2DAnmBaseFP9J2DScreen
    .4byte getTransform__18J2DAnmTransformKeyCFUsP16J3DTransformInfo
    .4byte calcTransform__18J2DAnmTransformKeyCFfUsP16J3DTransformInfo
*/

struct J2DAnmBase {
	virtual ~J2DAnmBase();                           // _08 (inline)
	virtual void searchUpdateMaterialID(J2DScreen*); // _0C (inline)
};

struct J2DAnmTransformKey : public J2DAnmBase {
	virtual ~J2DAnmTransformKey();                                              // _08 (inline)
	virtual void getTransform(unsigned short, J3DTransformInfo*) const;         // _10 (inline)
	virtual void calcTransform(float, unsigned short, J3DTransformInfo*) const; // _14
};

#endif
