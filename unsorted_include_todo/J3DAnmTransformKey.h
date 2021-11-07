#ifndef _J3DANMTRANSFORMKEY_H
#define _J3DANMTRANSFORMKEY_H

struct J3DAnmTransformKey {
	virtual ~J3DAnmTransformKey();                                      // _00
	virtual void getKind() const;                                       // _04
	virtual void getTransform(unsigned short, J3DTransformInfo*) const; // _08

	// _00 VTBL
};

#endif
