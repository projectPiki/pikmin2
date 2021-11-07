#ifndef _J3DSHAPEMTX_H
#define _J3DSHAPEMTX_H

struct J3DShapeMtx {
	virtual ~J3DShapeMtx();                            // _00
	virtual void getType() const;                      // _04
	virtual void getUseMtxNum() const;                 // _08
	virtual void getUseMtxIndex(unsigned short) const; // _0C
	virtual void load() const;                         // _10
	virtual void calcNBTScale(const Vec&, float (*)[3][3],
	                          float (*)[3][3]); // _14
	virtual void _18() = 0;                     // _18

	// _00 VTBL
};

#endif
