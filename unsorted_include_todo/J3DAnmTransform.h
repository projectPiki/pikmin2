#ifndef _J3DANMTRANSFORM_H
#define _J3DANMTRANSFORM_H

/*
    __vt__15J3DAnmTransform:
    .4byte 0
    .4byte 0
    .4byte __dt__15J3DAnmTransformFv
    .4byte getKind__15J3DAnmTransformCFv
    .4byte 0
    .4byte 0
*/

struct J3DAnmTransform {
	virtual ~J3DAnmTransform();   // _00
	virtual void getKind() const; // _04
	virtual void _08() = 0;       // _08
	virtual void _0C() = 0;       // _0C

	// _00 VTBL
};

#endif
