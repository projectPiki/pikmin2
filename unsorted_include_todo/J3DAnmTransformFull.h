#ifndef _J3DANMTRANSFORMFULL_H
#define _J3DANMTRANSFORMFULL_H

struct J3DAnmTransformFull {
	virtual ~J3DAnmTransformFull();                                     // _00
	virtual void getKind() const;                                       // _04
	virtual void getTransform(unsigned short, J3DTransformInfo*) const; // _08

	// _00 VTBL
};

#endif
