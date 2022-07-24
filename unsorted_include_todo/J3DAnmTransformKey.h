#ifndef _J3DANMTRANSFORMKEY_H
#define _J3DANMTRANSFORMKEY_H

/*
    __vt__18J3DAnmTransformKey:
    .4byte 0
    .4byte 0
    .4byte __dt__18J3DAnmTransformKeyFv
    .4byte getKind__18J3DAnmTransformKeyCFv
    .4byte getTransform__18J3DAnmTransformKeyCFUsP16J3DTransformInfo
*/

struct J3DAnmTransformKey {
	virtual ~J3DAnmTransformKey();                                      // _08 (inline)
	virtual void getKind() const;                                       // _0C (inline)
	virtual void getTransform(unsigned short, J3DTransformInfo*) const; // _10 (inline)
};

#endif
