#ifndef _J3DANMVTXCOLORFULL_H
#define _J3DANMVTXCOLORFULL_H

struct J3DAnmVtxColorFull {
	virtual ~J3DAnmVtxColorFull(); // _00
	virtual void getKind() const;  // _04
	virtual void getColor(unsigned char, unsigned short,
	                      _GXColor*) const; // _08

	// _00 VTBL
};

#endif
