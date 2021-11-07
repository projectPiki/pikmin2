#ifndef _J3DANMTRANSFORM_H
#define _J3DANMTRANSFORM_H

struct J3DAnmTransform {
	virtual ~J3DAnmTransform();   // _00
	virtual void getKind() const; // _04
	virtual void _08() = 0;       // _08
	virtual void _0C() = 0;       // _0C

	// _00 VTBL
};

#endif
