#ifndef _J3DSHAPEMTX_H
#define _J3DSHAPEMTX_H

/*
    __vt__11J3DShapeMtx:
    .4byte 0
    .4byte 0
    .4byte __dt__11J3DShapeMtxFv
    .4byte getType__11J3DShapeMtxCFv
    .4byte getUseMtxNum__11J3DShapeMtxCFv
    .4byte getUseMtxIndex__11J3DShapeMtxCFUs
    .4byte load__11J3DShapeMtxCFv
    .4byte calcNBTScale__11J3DShapeMtxFRC3VecPA3_A3_fPA3_A3_f
    .4byte 0
*/

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
