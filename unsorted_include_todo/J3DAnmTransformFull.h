#ifndef _J3DANMTRANSFORMFULL_H
#define _J3DANMTRANSFORMFULL_H

/*
    __vt__19J3DAnmTransformFull:
    .4byte 0
    .4byte 0
    .4byte __dt__19J3DAnmTransformFullFv
    .4byte getKind__19J3DAnmTransformFullCFv
    .4byte getTransform__19J3DAnmTransformFullCFUsP16J3DTransformInfo
*/

struct J3DAnmTransformFull {
	virtual ~J3DAnmTransformFull();                                     // _08 (weak)
	virtual void getKind() const;                                       // _0C (weak)
	virtual void getTransform(unsigned short, J3DTransformInfo*) const; // _10
};

#endif
