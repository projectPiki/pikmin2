#ifndef _J3DSHAPEMTXMULTI_H
#define _J3DSHAPEMTXMULTI_H

struct J3DShapeMtxMulti {
	virtual ~J3DShapeMtxMulti();                       // _00
	virtual void getType() const;                      // _04
	virtual void getUseMtxNum() const;                 // _08
	virtual void getUseMtxIndex(unsigned short) const; // _0C
	virtual void load() const;                         // _10
	virtual void calcNBTScale(const Vec&, float (*)[3][3],
	                          float (*)[3][3]); // _14

	// _00 VTBL
};

#endif
