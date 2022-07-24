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
	virtual ~J3DAnmTransform();   // _08
	virtual void getKind() const; // _0C
	virtual void _10() = 0;       // _10
	virtual void _14() = 0;       // _14

	// _00 VTBL
};

#endif
