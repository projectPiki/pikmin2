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
	virtual ~J2DAnmBase();                           // _00
	virtual void searchUpdateMaterialID(J2DScreen*); // _04

	// _00 VTBL
};

struct J2DAnmTransformKey : public J2DAnmBase {
	virtual ~J2DAnmTransformKey();                                      // _00
	virtual void searchUpdateMaterialID(J2DScreen*);                    // _04
	virtual void getTransform(unsigned short, J3DTransformInfo*) const; // _08
	virtual void calcTransform(float, unsigned short,
	                           J3DTransformInfo*) const; // _0C

	// _00 VTBL
};

#endif
